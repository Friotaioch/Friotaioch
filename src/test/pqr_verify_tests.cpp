// FRIO: proves CheckPQRSignature end-to-end with a real ML-DSA-65 keypair, over the
// real SignatureHashPQR, through the actual signature-checker — before any wiring
// into live witness execution. Happy path verifies; every tamper is rejected.
#include <script/interpreter.h>
#include <crypto/pq/pq.h>
#include <crypto/sha256.h>
#include <primitives/transaction.h>
#include <test/util/setup_common.h>
#include <boost/test/unit_test.hpp>
#include <vector>

BOOST_FIXTURE_TEST_SUITE(pqr_verify_tests, BasicTestingSetup)

BOOST_AUTO_TEST_CASE(mldsa65_p2qr_verify_and_reject)
{
    // 1. Real ML-DSA-65 keypair.
    std::vector<unsigned char> pk(pq::MLDSA65::PUBKEY_BYTES), sk(pq::MLDSA65::SECKEY_BYTES);
    BOOST_REQUIRE(pq::MLDSA65::keygen(pk.data(), sk.data()));

    // 2. program = SHA256(pubkey)  (the v2 witness program)
    std::vector<unsigned char> program(32);
    CSHA256().Write(pk.data(), pk.size()).Finalize(program.data());

    // 3. A spending tx whose input spends a v2 P2QRH output of `program`, amount `amount`.
    CAmount amount = 5000000000;
    CMutableTransaction tx;
    tx.version = 2;
    tx.vin.resize(1);
    tx.vin[0].prevout = COutPoint(Txid::FromUint256(uint256{"2222222222222222222222222222222222222222222222222222222222222222"}), 0);
    tx.vin[0].nSequence = 0xffffffff;
    tx.vout.resize(1);
    tx.vout[0].nValue = 4999000000;
    tx.vout[0].scriptPubKey = CScript() << OP_2 << program;

    // cache (force so BIP-143 midstate is populated)
    std::vector<CTxOut> spent;
    spent.emplace_back(amount, CScript() << OP_2 << program);
    PrecomputedTransactionData cache;
    cache.Init(CTransaction(tx), std::move(spent), /*force=*/true);

    // 4. Compute the exact sighash the checker will compute, and sign it.
    uint256 sighash = SignatureHashPQR(CTransaction(tx), 0, 2, program, amount, cache);
    std::vector<unsigned char> sig(pq::MLDSA65::SIG_BYTES); size_t siglen = 0;
    BOOST_REQUIRE(pq::MLDSA65::sign(sig.data(), &siglen, sighash.data(), 32, sk.data()));
    sig.resize(siglen);

    // 5. Run through the real checker.
    CTransaction ctx(tx);
    GenericTransactionSignatureChecker<CTransaction> chk(&ctx, 0, amount, cache, MissingDataBehavior::ASSERT_FAIL);

    // HAPPY PATH: valid sig over correct pubkey+program -> true
    BOOST_CHECK(chk.CheckPQRSignature(sig, pk, 2, program));

    // REJECT: tampered signature
    { auto bad = sig; bad[bad.size()/2] ^= 0x01;
      BOOST_CHECK(!chk.CheckPQRSignature(bad, pk, 2, program)); }

    // REJECT: wrong pubkey (SHA256(pubkey) != program)
    { std::vector<unsigned char> pk2(pq::MLDSA65::PUBKEY_BYTES), sk2(pq::MLDSA65::SECKEY_BYTES);
      pq::MLDSA65::keygen(pk2.data(), sk2.data());
      BOOST_CHECK(!chk.CheckPQRSignature(sig, pk2, 2, program)); }

    // REJECT: mismatched program (right pubkey, wrong committed hash)
    { auto prog2 = program; prog2[0] ^= 0x01;
      BOOST_CHECK(!chk.CheckPQRSignature(sig, pk, 2, prog2)); }

    // REJECT: wrong scheme id (v3 SPHINCS+ verify over an ML-DSA sig/key)
    BOOST_CHECK(!chk.CheckPQRSignature(sig, pk, 3, program));
}

BOOST_AUTO_TEST_SUITE_END()
