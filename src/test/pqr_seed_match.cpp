// FRIO: prove C++ keygen_from_seed matches the WASM-derived pubkeys byte-for-byte.
#include <crypto/pq/pq.h>
#include <test/util/setup_common.h>
#include <boost/test/unit_test.hpp>
#include <vector>
#include <string>

BOOST_FIXTURE_TEST_SUITE(pqr_seed_match, BasicTestingSetup)

static std::string hex(const std::vector<unsigned char>& v){
    static const char* d="0123456789abcdef"; std::string s;
    for(unsigned char c:v){s+=d[c>>4];s+=d[c&0xf];} return s;
}

BOOST_AUTO_TEST_CASE(mldsa_seed_matches_wasm) {
    // WASM used seed bytes [1,2,...,32]
    std::vector<unsigned char> seed(32); for(int i=0;i<32;i++) seed[i]=i+1;
    std::vector<unsigned char> pk(pq::MLDSA65::PUBKEY_BYTES), sk(pq::MLDSA65::SECKEY_BYTES);
    BOOST_REQUIRE(pq::MLDSA65::keygen_from_seed(pk.data(), sk.data(), seed.data()));
    std::string got = hex(pk).substr(0,32);
    BOOST_TEST_MESSAGE("ML-DSA C++ pk[0..16]: " << got);
    BOOST_CHECK_EQUAL(got, std::string("b0ead780af27b7f974532cd85bf3f860"));
}

BOOST_AUTO_TEST_CASE(sphincs_seed_matches_wasm) {
    // WASM used seed bytes [1,2,...,48]
    std::vector<unsigned char> seed(48); for(int i=0;i<48;i++) seed[i]=i+1;
    std::vector<unsigned char> pk(pq::SPHINCS128s::PUBKEY_BYTES), sk(pq::SPHINCS128s::SECKEY_BYTES);
    BOOST_REQUIRE(pq::SPHINCS128s::keygen_from_seed(pk.data(), sk.data(), seed.data()));
    std::string got = hex(pk);
    BOOST_TEST_MESSAGE("SPHINCS+ C++ pk: " << got);
    BOOST_CHECK_EQUAL(got, std::string("2122232425262728292a2b2c2d2e2f30678b5043fe6b4cfbe8b8c7b5df14744e"));
}

BOOST_AUTO_TEST_SUITE_END()
