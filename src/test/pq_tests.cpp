// FRIO: post-quantum primitive KAT — round-trip + tamper. Correct-before-consensus.
#include <crypto/pq/pq.h>
#include <boost/test/unit_test.hpp>
#include <vector>
#include <cstring>
BOOST_AUTO_TEST_SUITE(pq_tests)

template<typename S> void roundtrip_and_tamper(const char* name){
    std::vector<uint8_t> pk(S::PUBKEY_BYTES), sk(S::SECKEY_BYTES), sig(S::SIG_BYTES);
    BOOST_REQUIRE_MESSAGE(S::keygen(pk.data(), sk.data()), name);
    const char* m="FRIO post-quantum test message"; size_t ml=std::strlen(m); size_t sl=0;
    BOOST_REQUIRE_MESSAGE(S::sign(sig.data(),&sl,(const uint8_t*)m,ml,sk.data()), name);
    BOOST_REQUIRE(sl>0 && sl<=S::SIG_BYTES);
    BOOST_CHECK_MESSAGE(S::verify(sig.data(),sl,(const uint8_t*)m,ml,pk.data()), name);
    // tamper sig
    std::vector<uint8_t> bad=sig; bad[sl/2]^=0x01;
    BOOST_CHECK_MESSAGE(!S::verify(bad.data(),sl,(const uint8_t*)m,ml,pk.data()), name);
    // tamper msg
    std::string m2(m); m2[0]^=0x01;
    BOOST_CHECK_MESSAGE(!S::verify(sig.data(),sl,(const uint8_t*)m2.data(),ml,pk.data()), name);
}
BOOST_AUTO_TEST_CASE(mldsa65_roundtrip){ roundtrip_and_tamper<pq::MLDSA65>("ML-DSA-65"); }
BOOST_AUTO_TEST_CASE(sphincs128s_roundtrip){ roundtrip_and_tamper<pq::SPHINCS128s>("SPHINCS+-128s"); }
BOOST_AUTO_TEST_SUITE_END()
