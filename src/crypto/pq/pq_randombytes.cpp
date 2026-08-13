// FRIO: post-quantum RNG shim. Backs the vendored refs' randombytes() with
// Bitcoin Core's strong CSPRNG (GetStrongRandBytes). Chunked to <=32 bytes per
// call because ProcRand() asserts num<=32; SPHINCS+ keygen requests 48 at once.
// Compiled into bitcoin_pq only. Signature pinned to src/random.h.
#include <random.h>
#include <span>
#include <cstddef>
#include <cstdint>
extern "C" void randombytes(uint8_t* out, size_t outlen) {
    while (outlen > 0) {
        const size_t chunk = outlen < 32 ? outlen : 32;
        GetStrongRandBytes(std::span<unsigned char>(out, chunk));
        out    += chunk;
        outlen -= chunk;
    }
}
