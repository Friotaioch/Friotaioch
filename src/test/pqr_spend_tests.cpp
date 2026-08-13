// FRIO: end-to-end P2QR spend through VerifyScript. Proves a real ML-DSA-65-locked
// output is spendable with a post-quantum witness, unforgeable, and soft-fork-safe.
#include <script/interpreter.h>
#include <crypto/pq/pq.h>
#include <crypto/sha256.h>
#include <primitives/transaction.h>
#include <test/util/setup_common.h>
#include <boost/test/unit_test.hpp>
#include <vector>

BOOST_FIXTURE_TEST_SUITE(pqr_spend_tests, BasicTestingSetup)

BOOST_AUTO_TEST_CASE(p2qr_v2_end_to_end_spend)
{
    // --- key + v2 P2QR output ---
    std::vector<unsigned char> pk(pq::MLDSA65::PUBKEY_BYTES), sk(pq::MLDSA65::SECKEY_BYTES);
    BOOST_REQUIRE(pq::MLDSA65::keygen(pk.data(), sk.data()));
    std::vector<unsigned char> program(32);
    CSHA256().Write(pk.data(), pk.size()).Finalize(program.data());
    CScript scriptPubKey = CScript() << OP_2 << program;

    // --- funding tx (creates the P2QR output) ---
    CAmount amount = 5000000000;
    CMutableTransaction txFrom;
    txFrom.version = 2;
    txFrom.vin.resize(1);
    txFrom.vout.resize(1);
    txFrom.vout[0].nValue = amount;
    txFrom.vout[0].scriptPubKey = scriptPubKey;

    // --- spending tx ---
    CMutableTransaction txTo;
    txTo.version = 2;
    txTo.vin.resize(1);
    txTo.vin[0].prevout = COutPoint(txFrom.GetHash(), 0);
    txTo.vin[0].nSequence = 0xffffffff;
    txTo.vout.resize(1);
    txTo.vout[0].nValue = 4999000000;
    txTo.vout[0].scriptPubKey = CScript() << OP_2 << program;

    // --- sign the P2QR sighash ---
    std::vector<CTxOut> spent{txFrom.vout[0]};
    PrecomputedTransactionData cache;
    cache.Init(CTransaction(txTo), std::move(spent), /*force=*/true);
    uint256 sighash = SignatureHashPQR(CTransaction(txTo), 0, 2, program, amount, cache);
    std::vector<unsigned char> sig(pq::MLDSA65::SIG_BYTES); size_t siglen = 0;
    BOOST_REQUIRE(pq::MLDSA65::sign(sig.data(), &siglen, sighash.data(), 32, sk.data()));
    sig.resize(siglen);

    // Verify-time cache: consensus always provides PrecomputedTransactionData.
    std::vector<CTxOut> vspent{txFrom.vout[0]};
    PrecomputedTransactionData vtxdata;
    vtxdata.Init(CTransaction(txTo), std::move(vspent), /*force=*/true);

    // --- witness = [sig, pubkey] ---
    CScriptWitness witness;
    witness.stack.push_back(sig);
    witness.stack.push_back(pk);

    const script_verify_flags flags{script_verify_flag_name::SCRIPT_VERIFY_PQR |
                                    script_verify_flag_name::SCRIPT_VERIFY_WITNESS |
                                    script_verify_flag_name::SCRIPT_VERIFY_P2SH};
    ScriptError err = SCRIPT_ERR_OK;
    CScript emptyScriptSig;

    // ===== VALID SPEND =====
    bool ok = VerifyScript(emptyScriptSig, scriptPubKey, &witness, flags,
                           MutableTransactionSignatureChecker(&txTo, 0, amount, vtxdata, MissingDataBehavior::ASSERT_FAIL), &err);
    BOOST_CHECK_MESSAGE(ok, "valid P2QR spend rejected: " << ScriptErrorString(err));

    // ===== REJECT: tampered signature =====
    {
        CScriptWitness w = witness; w.stack[0][w.stack[0].size()/2] ^= 0x01;
        ScriptError e = SCRIPT_ERR_OK;
        BOOST_CHECK(!VerifyScript(emptyScriptSig, scriptPubKey, &w, flags,
                    MutableTransactionSignatureChecker(&txTo, 0, amount, vtxdata, MissingDataBehavior::ASSERT_FAIL), &e));
    }
    // ===== REJECT: wrong pubkey (breaks SHA256(pubkey)==program) =====
    {
        std::vector<unsigned char> pk2(pq::MLDSA65::PUBKEY_BYTES), sk2(pq::MLDSA65::SECKEY_BYTES);
        pq::MLDSA65::keygen(pk2.data(), sk2.data());
        CScriptWitness w = witness; w.stack[1] = pk2;
        ScriptError e = SCRIPT_ERR_OK;
        BOOST_CHECK(!VerifyScript(emptyScriptSig, scriptPubKey, &w, flags,
                    MutableTransactionSignatureChecker(&txTo, 0, amount, vtxdata, MissingDataBehavior::ASSERT_FAIL), &e));
    }
    // ===== REJECT: mutated amount (sighash mismatch) =====
    {
        ScriptError e = SCRIPT_ERR_OK;
        BOOST_CHECK(!VerifyScript(emptyScriptSig, scriptPubKey, &witness, flags,
                    MutableTransactionSignatureChecker(&txTo, 0, amount + 1, vtxdata, MissingDataBehavior::ASSERT_FAIL), &e));
    }
    // ===== REJECT: extra witness item (malleability) =====
    {
        CScriptWitness w = witness; w.stack.push_back({0x00});
        ScriptError e = SCRIPT_ERR_OK;
        BOOST_CHECK(!VerifyScript(emptyScriptSig, scriptPubKey, &w, flags,
                    MutableTransactionSignatureChecker(&txTo, 0, amount, vtxdata, MissingDataBehavior::ASSERT_FAIL), &e));
    }
    // ===== SOFT-FORK: flag unset -> anyone-can-spend (valid) =====
    {
        const script_verify_flags noflag{script_verify_flag_name::SCRIPT_VERIFY_WITNESS |
                                         script_verify_flag_name::SCRIPT_VERIFY_P2SH};
        ScriptError e = SCRIPT_ERR_OK;
        CScriptWitness w = witness; w.stack[0][0] ^= 0xFF;  // even a bad sig passes when unenforced
        BOOST_CHECK_MESSAGE(VerifyScript(emptyScriptSig, scriptPubKey, &w, noflag,
                    MutableTransactionSignatureChecker(&txTo, 0, amount, vtxdata, MissingDataBehavior::ASSERT_FAIL), &e),
                    "pre-activation P2QR should be anyone-can-spend: " << ScriptErrorString(e));
    }
}

BOOST_AUTO_TEST_SUITE_END()
