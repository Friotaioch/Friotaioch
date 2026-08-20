// FRIO: Stage-0 golden vector export. Dumps deterministic P2QRH test vectors to
// stdout as JSON so the WASM signer can be verified byte-for-byte.
#include <script/interpreter.h>
#include <crypto/pq/pq.h>
#include <crypto/sha256.h>
#include <primitives/transaction.h>
#include <test/util/setup_common.h>
#include <boost/test/unit_test.hpp>
#include <vector>
#include <string>
#include <cstdio>

BOOST_FIXTURE_TEST_SUITE(pqr_export_vectors, BasicTestingSetup)

static std::string hex(const std::vector<unsigned char>& v) {
    static const char* d = "0123456789abcdef";
    std::string s; s.reserve(v.size()*2);
    for (unsigned char c : v) { s += d[c>>4]; s += d[c&0xf]; }
    return s;
}
static std::string hex32(const uint256& u) {
    std::vector<unsigned char> v(u.begin(), u.end()); return hex(v);
}

BOOST_AUTO_TEST_CASE(export_fixed_sighash_and_sig) {
    // ---- deterministic tx matching pqr_sighash_tests fixed vector ----
    CMutableTransaction tx;
    tx.version = 2;
    tx.vin.resize(1);
    tx.vin[0].prevout = COutPoint(Txid::FromUint256(uint256{"1111111111111111111111111111111111111111111111111111111111111111"}), 0);
    tx.vin[0].nSequence = 0xfffffffe;
    tx.vout.resize(1);
    tx.vout[0].nValue = 4999000000;
    tx.vout[0].scriptPubKey = CScript() << OP_2 << std::vector<unsigned char>(32, 0xAB);
    tx.nLockTime = 0;
    std::vector<unsigned char> program(32, 0xAB);
    CAmount amount = 5000000000;
    std::vector<CTxOut> spent; spent.emplace_back(amount, CScript() << OP_2 << std::vector<unsigned char>(32,0xCD));
    PrecomputedTransactionData cache; cache.Init(CTransaction(tx), std::move(spent), true);
    uint256 h0 = SignatureHashPQR(CTransaction(tx), 0, 2, program, amount, cache);

    // ---- real ML-DSA keypair + signature over a real spend of its own program ----
    std::vector<unsigned char> pk(pq::MLDSA65::PUBKEY_BYTES), sk(pq::MLDSA65::SECKEY_BYTES);
    pq::MLDSA65::keygen(pk.data(), sk.data());
    std::vector<unsigned char> prog2(32);
    CSHA256().Write(pk.data(), pk.size()).Finalize(prog2.data());
    CMutableTransaction tx2 = tx;
    tx2.vout[0].scriptPubKey = CScript() << OP_2 << prog2;
    std::vector<CTxOut> spent2; spent2.emplace_back(amount, CScript() << OP_2 << prog2);
    PrecomputedTransactionData cache2; cache2.Init(CTransaction(tx2), std::move(spent2), true);
    uint256 h1 = SignatureHashPQR(CTransaction(tx2), 0, 2, prog2, amount, cache2);
    std::vector<unsigned char> sig(pq::MLDSA65::SIG_BYTES); size_t sl=0;
    pq::MLDSA65::sign(sig.data(), &sl, h1.data(), 32, sk.data());
    sig.resize(sl);
    std::vector<unsigned char> prog2v(prog2.begin(), prog2.end());

    std::printf("\n===FRIO_VECTORS_JSON_BEGIN===\n");
    std::printf("{\n");
    std::printf("  \"fixed_sighash\": {\n");
    std::printf("    \"tx_version\": 2, \"prevout_txid\": \"1111111111111111111111111111111111111111111111111111111111111111\", \"prevout_n\": 0,\n");
    std::printf("    \"nsequence\": 4294967294, \"vout0_value\": 4999000000, \"program\": \"%s\",\n", hex(program).c_str());
    std::printf("    \"amount\": 5000000000, \"witver\": 2, \"nlocktime\": 0,\n");
    std::printf("    \"expected_sighash\": \"%s\"\n", hex32(h0).c_str());
    std::printf("  },\n");
    std::printf("  \"mldsa65_spend\": {\n");
    std::printf("    \"pubkey\": \"%s\",\n", hex(pk).c_str());
    std::printf("    \"program\": \"%s\",\n", hex(prog2v).c_str());
    std::printf("    \"sighash\": \"%s\",\n", hex32(h1).c_str());
    std::printf("    \"sig_len\": %zu\n", sl);
    std::printf("  }\n");
    std::printf("}\n");
    std::printf("===FRIO_VECTORS_JSON_END===\n");
    BOOST_CHECK(!h0.IsNull());
}

BOOST_AUTO_TEST_SUITE_END()
