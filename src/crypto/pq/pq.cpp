// FRIO: wrapper impl. Bridges to the namespaced C reference symbols.
#include <crypto/pq/pq.h>
extern "C" {
// ML-DSA-65 (DILITHIUM_MODE=3 -> pqcrystals_dilithium3_ref_*)
int pqcrystals_dilithium3_ref_keypair(uint8_t* pk, uint8_t* sk);
int crypto_sign_keypair_from_seed(uint8_t* pk, uint8_t* sk, const uint8_t* seed);
int pqcrystals_dilithium3_ref_signature(uint8_t* sig, size_t* siglen,
        const uint8_t* m, size_t mlen, const uint8_t* ctx, size_t ctxlen, const uint8_t* sk);
int pqcrystals_dilithium3_ref_verify(const uint8_t* sig, size_t siglen,
        const uint8_t* m, size_t mlen, const uint8_t* ctx, size_t ctxlen, const uint8_t* pk);
// SPHINCS+ (bare crypto_sign_* in ref)
int crypto_sign_keypair(uint8_t* pk, uint8_t* sk);
int crypto_sign_seed_keypair(uint8_t* pk, uint8_t* sk, const uint8_t* seed);
int crypto_sign_signature(uint8_t* sig, size_t* siglen, const uint8_t* m, size_t mlen, const uint8_t* sk);
int crypto_sign_verify(const uint8_t* sig, size_t siglen, const uint8_t* m, size_t mlen, const uint8_t* pk);
}
namespace pq {
bool MLDSA65::keygen(uint8_t* pk, uint8_t* sk){ return pqcrystals_dilithium3_ref_keypair(pk,sk)==0; }
bool MLDSA65::keygen_from_seed(uint8_t* pk, uint8_t* sk, const uint8_t* seed){ return crypto_sign_keypair_from_seed(pk,sk,seed)==0; }
bool MLDSA65::sign(uint8_t* sig,size_t* sl,const uint8_t* m,size_t ml,const uint8_t* sk){
    return pqcrystals_dilithium3_ref_signature(sig,sl,m,ml,nullptr,0,sk)==0; }
bool MLDSA65::verify(const uint8_t* sig,size_t sl,const uint8_t* m,size_t ml,const uint8_t* pk){
    return pqcrystals_dilithium3_ref_verify(sig,sl,m,ml,nullptr,0,pk)==0; }
bool SPHINCS128s::keygen(uint8_t* pk,uint8_t* sk){ return crypto_sign_keypair(pk,sk)==0; }
bool SPHINCS128s::keygen_from_seed(uint8_t* pk,uint8_t* sk,const uint8_t* seed){ return crypto_sign_seed_keypair(pk,sk,seed)==0; }
bool SPHINCS128s::sign(uint8_t* sig,size_t* sl,const uint8_t* m,size_t ml,const uint8_t* sk){
    return crypto_sign_signature(sig,sl,m,ml,sk)==0; }
bool SPHINCS128s::verify(const uint8_t* sig,size_t sl,const uint8_t* m,size_t ml,const uint8_t* pk){
    return crypto_sign_verify(sig,sl,m,ml,pk)==0; }
}
