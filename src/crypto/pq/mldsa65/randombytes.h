#ifndef FRIO_PQ_RANDOMBYTES_H
#define FRIO_PQ_RANDOMBYTES_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* FRIO: unified prototype. Definition lives in pq_randombytes.cpp and is
   backed by Bitcoin's CSPRNG (GetStrongRandBytes). The upstream test-only
   randombytes.c files were deleted — they must never ship in a wallet. */
void randombytes(uint8_t *out, size_t outlen);
#ifdef __cplusplus
}
#endif
#endif
