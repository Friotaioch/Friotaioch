# FRIO post-quantum vendored references

Clean-room vendored, MIT-attribution discipline. No KV5 lineage.

## ML-DSA-65 (Dilithium mode 3, NIST FIPS 204)
- Upstream: https://github.com/pq-crystals/dilithium
- Pinned commit: d35ba3fe5449bee3e6d43e1f296c3ca818bd36be
- License: Apache-2.0 / public-domain (dual). Vendored, not relicensed.
- Param pin: DILITHIUM_MODE=3 (compile define).

## SLH-DSA (SPHINCS+ sha2-128s-simple, NIST FIPS 205)
- Upstream: https://github.com/sphincs/sphincsplus
- Pinned commit: 7ec789ace6874d875f4bb84cb61b81155398167e
- License: CC0 public domain. Vendored, not relicensed.
- Param pin: PARAMS=sphincs-sha2-128s; sha2 backend + simple thash only.

## Local modifications
- Deleted all test-only RNGs (randombytes.c, rng.*): insecure for wallet use.
- randombytes.h unified to a single prototype; definition in pq_randombytes.cpp
  is backed by Bitcoin's GetStrongRandBytes (CSPRNG).
- Pruned shake/haraka backends and robust thash variants.
