# FRIO PQC Conformance (b2 — full KAT)

Validated against pinned upstream known-answer vectors.

## ML-DSA-65 (FIPS 204, dilithium mode 3)
- Pinned commit: d35ba3fe5449bee3e6d43e1f296c3ca818bd36be
- Artifact: `_d/ref/test/test_vectors3` stdout
- SHA256: 14bf84918ee90e7afbd580191d3eb890d4557e0900b1145e39a8399ef7dd3fba
- Status: PASS

## SPHINCS+-sha2-128s-simple (FIPS 205 / SLH-DSA)
- Pinned commit: 7ec789ace6874d875f4bb84cb61b81155398167e
- Checker: `_s/vectors.py sphincs-sha2-128s-simple ref`
- Expected SHA256: 65942fac8e225fde77dd277d297e68c94c2e25a2a4089f88be4b56fa92b18a84
- Status: PASS (ok)

Reproduce:
  cd src/crypto/pq/_d/ref && make test/test_vectors3 && ./test/test_vectors3 | sha256sum
  cd src/crypto/pq/_s && python3 vectors.py sphincs-sha2-128s-simple ref
