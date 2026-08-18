// FRIO: uniform post-quantum signature interface over the vendored C references.
#ifndef FRIO_CRYPTO_PQ_H
#define FRIO_CRYPTO_PQ_H
#include <cstdint>
#include <cstddef>
#include <vector>
namespace pq {

struct MLDSA65 {
    static constexpr size_t PUBKEY_BYTES = 1952;   // ML-DSA-65 (FIPS 204)
    static constexpr size_t SECKEY_BYTES = 4032;
    static constexpr size_t SIG_BYTES    = 3309;
    static bool keygen(uint8_t* pk, uint8_t* sk);
    static bool keygen_from_seed(uint8_t* pk, uint8_t* sk, const uint8_t* seed);
    static bool sign(uint8_t* sig, size_t* siglen, const uint8_t* msg, size_t msglen, const uint8_t* sk);
    static bool verify(const uint8_t* sig, size_t siglen, const uint8_t* msg, size_t msglen, const uint8_t* pk);
};

struct SPHINCS128s {
    static constexpr size_t PUBKEY_BYTES = 32;     // SLH-DSA sha2-128s (FIPS 205)
    static constexpr size_t SECKEY_BYTES = 64;
    static constexpr size_t SIG_BYTES    = 7856;
    static bool keygen(uint8_t* pk, uint8_t* sk);
    static bool keygen_from_seed(uint8_t* pk, uint8_t* sk, const uint8_t* seed);
    static bool sign(uint8_t* sig, size_t* siglen, const uint8_t* msg, size_t msglen, const uint8_t* sk);
    static bool verify(const uint8_t* sig, size_t siglen, const uint8_t* msg, size_t msglen, const uint8_t* pk);
};

} // namespace pq
#endif
