// FRIO: P2QRH sighash byte-layout proof. Asserts determinism, and that mutating
// any committed field changes the hash (i.e. the field is actually bound).
#include <script/interpreter.h>
#include <primitives/transaction.h>
#include <test/util/setup_common.h>
#include <boost/test/unit_test.hpp>
#include <vector>

BOOST_FIXTURE_TEST_SUITE(pqr_sighash_tests, BasicTestingSetup)

static CMutableTransaction make_tx()
{
    CMutableTransaction tx;
    tx.version = 2;
    tx.vin.resize(1);
    tx.vin[0].prevout = COutPoint(Txid::FromUint256(uint256{"1111111111111111111111111111111111111111111111111111111111111111"}), 0);
    tx.vin[0].nSequence = 0xfffffffe;
    tx.vout.resize(1);
    tx.vout[0].nValue = 4999000000;
    tx.vout[0].scriptPubKey = CScript() << OP_2 << std::vector<unsigned char>(32, 0xAB);
    tx.nLockTime = 0;
    return tx;
}

static PrecomputedTransactionData make_cache(const CMutableTransaction& tx, CAmount amt)
{
    std::vector<CTxOut> spent;
    spent.emplace_back(amt, CScript() << OP_2 << std::vector<unsigned char>(32, 0xCD));
    PrecomputedTransactionData cache;
    cache.Init(CTransaction(tx), std::move(spent), /*force=*/true);
    return cache;
}

BOOST_AUTO_TEST_CASE(pqr_sighash_deterministic_and_binding)
{
    CMutableTransaction tx = make_tx();
    std::vector<unsigned char> program(32, 0xAB);
    CAmount amount = 5000000000;
    auto cache = make_cache(tx, amount);

    uint256 h0 = SignatureHashPQR(CTransaction(tx), 0, 2, program, amount, cache);
    // deterministic: same inputs -> same hash
    uint256 h0b = SignatureHashPQR(CTransaction(tx), 0, 2, program, amount, cache);
    BOOST_CHECK(h0 == h0b);
    BOOST_CHECK(!h0.IsNull());

    // binding: amount
    BOOST_CHECK(SignatureHashPQR(CTransaction(tx), 0, 2, program, amount+1, cache) != h0);

    // binding: scheme/version (v3 program byte differs)
    BOOST_CHECK(SignatureHashPQR(CTransaction(tx), 0, 3, program, amount, cache) != h0);

    // binding: program (key hash)
    std::vector<unsigned char> prog2(32, 0xAC);
    BOOST_CHECK(SignatureHashPQR(CTransaction(tx), 0, 2, prog2, amount, cache) != h0);

    // binding: outputs (mutate an output -> new cache -> new hash)
    CMutableTransaction tx2 = tx; tx2.vout[0].nValue += 1;
    auto cache2 = make_cache(tx2, amount);
    BOOST_CHECK(SignatureHashPQR(CTransaction(tx2), 0, 2, program, amount, cache2) != h0);

    // binding: prevout
    CMutableTransaction tx3 = tx; tx3.vin[0].prevout.n = 7;
    auto cache3 = make_cache(tx3, amount);
    BOOST_CHECK(SignatureHashPQR(CTransaction(tx3), 0, 2, program, amount, cache3) != h0);

    // binding: nLockTime
    CMutableTransaction tx4 = tx; tx4.nLockTime = 500000;
    auto cache4 = make_cache(tx4, amount);
    BOOST_CHECK(SignatureHashPQR(CTransaction(tx4), 0, 2, program, amount, cache4) != h0);

    // Pinned regression vector: any change to the sighash layout must be deliberate
    // (update this constant + bump the sighash epoch) and will otherwise fail here.
    BOOST_CHECK_EQUAL(h0.GetHex(), "8dcf252d41c4046be149cdc7f0944cde952febaa9fa9f877987c27a45e9b0962");
}

BOOST_AUTO_TEST_SUITE_END()
