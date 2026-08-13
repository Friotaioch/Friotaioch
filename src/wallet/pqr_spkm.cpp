// FRIO: PQRScriptPubKeyMan implementation (5.4a: keygen + address + IsMine).
#include <wallet/pqr_spkm.h>
#include <wallet/walletdb.h>
#include <hash.h>
#include <util/translation.h>
#include <script/sign.h>
#include <script/interpreter.h>
#include <wallet/crypter.h>
#include <crypto/pq/pq.h>
#include <crypto/sha256.h>
#include <script/script.h>
#include <script/solver.h>
#include <key_io.h>

namespace wallet {

util::Result<CTxDestination> PQRScriptPubKeyMan::GetNewDestination(const OutputType type)
{
    if (m_storage.HasEncryptionKeys() && m_storage.IsLocked()) {
        return util::Error{Untranslated("FRIO: wallet locked; unlock to generate a P2QR key")};
    }
    PQRKey k;
    if (m_mint_v3) {
        k.pubkey.resize(pq::SPHINCS128s::PUBKEY_BYTES);
        k.seckey.resize(pq::SPHINCS128s::SECKEY_BYTES);
        k.algo = 3;
        if (!pq::SPHINCS128s::keygen(k.pubkey.data(), k.seckey.data())) {
            return util::Error{Untranslated("FRIO: SPHINCS+ keygen failed")};
        }
    } else {
        k.pubkey.resize(pq::MLDSA65::PUBKEY_BYTES);
        k.seckey.resize(pq::MLDSA65::SECKEY_BYTES);
        k.algo = 2;
        if (!pq::MLDSA65::keygen(k.pubkey.data(), k.seckey.data())) {
            return util::Error{Untranslated("FRIO: ML-DSA-65 keygen failed")};
        }
    }
    uint256 program;
    CSHA256().Write(k.pubkey.data(), k.pubkey.size()).Finalize(program.begin());
    WalletBatch batch(m_storage.GetDatabase());
    // If the wallet is encrypted, store the new key encrypted at rest immediately.
    bool stored_encrypted = false;
    if (m_storage.HasEncryptionKeys() && !m_storage.IsLocked()) {
        m_storage.WithEncryptionKey([&](const CKeyingMaterial& master_key) {
            CKeyingMaterial secret(k.seckey.begin(), k.seckey.end());
            uint256 iv = Hash(k.pubkey);
            std::vector<unsigned char> crypted;
            if (!EncryptSecret(master_key, secret, iv, crypted)) return false;
            k.crypted_seckey = crypted;
            k.encrypted = true;
            batch.WritePQRCryptedKey(program, k.pubkey, crypted);
            std::fill(k.seckey.begin(), k.seckey.end(), 0);
            k.seckey.clear();
            stored_encrypted = true;
            return true;
        });
    }
    if (!stored_encrypted) {
        batch.WritePQRKey(program, k.pubkey, k.seckey);
    }
    {
        LOCK(cs_pqr);
        m_keys[program] = k;
    }
    // v2 P2QR destination -> frio1... (bech32m)
    if (m_mint_v3) {
        WitnessV3PQR dest{program};
        return CTxDestination{dest};
    }
    WitnessV2PQR dest{program};
    return CTxDestination{dest};
}

bool PQRScriptPubKeyMan::IsMine(const CScript& script) const
{
    int ver; std::vector<unsigned char> prog;
    if (!script.IsWitnessProgram(ver, prog)) return false;
    if (ver != 2 && ver != 3) return false;
    if (prog.size() != 32) return false;
    uint256 program(prog);
    LOCK(cs_pqr);
    return m_keys.count(program) > 0;
}

std::unordered_set<CScript, SaltedSipHasher> PQRScriptPubKeyMan::GetScriptPubKeys() const
{
    std::unordered_set<CScript, SaltedSipHasher> out;
    LOCK(cs_pqr);
    for (const auto& [program, key] : m_keys) {
        out.insert(CScript() << OP_2 << ToByteVector(program));
    }
    return out;
}

bool PQRScriptPubKeyMan::Encrypt(const CKeyingMaterial& master_key, WalletBatch* batch)
{
    LOCK(cs_pqr);
    for (auto& [program, k] : m_keys) {
        if (k.encrypted) continue;
        CKeyingMaterial secret(k.seckey.begin(), k.seckey.end());
        // IV = Hash(pubkey), matching Core's per-key IV convention.
        uint256 iv = Hash(k.pubkey);
        std::vector<unsigned char> crypted;
        if (!EncryptSecret(master_key, secret, iv, crypted)) return false;
        k.crypted_seckey = crypted;
        k.encrypted = true;
        std::fill(k.seckey.begin(), k.seckey.end(), 0);
        k.seckey.clear();
        if (batch) {
            batch->WritePQRCryptedKey(program, k.pubkey, crypted);
            batch->ErasePQRKey(program);
        }
    }
    return true;
}

bool PQRScriptPubKeyMan::CheckDecryptionKey(const CKeyingMaterial& master_key)
{
    LOCK(cs_pqr);
    // (a) model: decrypt all seckeys into memory on unlock.
    for (auto& [program, k] : m_keys) {
        if (!k.encrypted) continue;
        uint256 iv = Hash(k.pubkey);
        CKeyingMaterial plain;
        if (!DecryptSecret(master_key, k.crypted_seckey, iv, plain)) return false;
        if (plain.size() != pq::MLDSA65::SECKEY_BYTES && plain.size() != pq::SPHINCS128s::SECKEY_BYTES) return false;
        k.seckey.assign(plain.begin(), plain.end());
    }
    return true;
}


bool PQRScriptPubKeyMan::GetKey(const uint256& program, std::vector<unsigned char>& pubkey_out, std::vector<unsigned char>& seckey_out) const
{
    LOCK(cs_pqr);
    auto it = m_keys.find(program);
    if (it == m_keys.end()) return false;
    const PQRKey& k = it->second;
    pubkey_out = k.pubkey;
    if (!k.encrypted) {
        if (k.seckey.empty()) return false;
        seckey_out = k.seckey;
        return true;
    }
    // encrypted: need the (unlocked) master key to decrypt
    if (!k.seckey.empty()) {           // already decrypted in-memory (unlocked via CheckDecryptionKey)
        seckey_out = k.seckey;
        return true;
    }
    bool ok = false;
    m_storage.WithEncryptionKey([&](const CKeyingMaterial& master_key) {
        uint256 iv = Hash(k.pubkey);
        CKeyingMaterial plain;
        if (!DecryptSecret(master_key, k.crypted_seckey, iv, plain)) return false;
        if (plain.size() != pq::MLDSA65::SECKEY_BYTES && plain.size() != pq::SPHINCS128s::SECKEY_BYTES) return false;
        seckey_out.assign(plain.begin(), plain.end());
        ok = true;
        return true;
    });
    return ok;
}

bool PQRScriptPubKeyMan::SignTransaction(CMutableTransaction& tx, const std::map<COutPoint, Coin>& coins, int sighash, std::map<int, bilingual_str>& input_errors) const
{
    // Build PrecomputedTransactionData over all spent outputs (BIP-143 midstate for the sighash).
    std::vector<CTxOut> spent;
    spent.reserve(tx.vin.size());
    for (const auto& in : tx.vin) {
        auto it = coins.find(in.prevout);
        if (it == coins.end()) { spent.emplace_back(); continue; }
        spent.push_back(it->second.out);
    }
    PrecomputedTransactionData txdata;
    txdata.Init(CTransaction(tx), std::vector<CTxOut>(spent), /*force=*/true);

    bool all_signed = true;
    for (unsigned int i = 0; i < tx.vin.size(); ++i) {
        auto cit = coins.find(tx.vin[i].prevout);
        if (cit == coins.end()) continue;
        const CScript& spk = cit->second.out.scriptPubKey;
        int witver; std::vector<unsigned char> prog;
        if (!spk.IsWitnessProgram(witver, prog)) continue;
        if ((witver != 2 && witver != 3) || prog.size() != 32) continue;
        uint256 program(prog);
        std::vector<unsigned char> pubkey, seckey;
        if (!GetKey(program, pubkey, seckey)) continue;   // not ours (or locked)

        const CAmount amount = cit->second.out.nValue;
        uint256 sighash_h = SignatureHashPQR(CTransaction(tx), i, witver, prog, amount, txdata);
        const bool is_sphincs = (pubkey.size() == pq::SPHINCS128s::PUBKEY_BYTES);
        std::vector<unsigned char> sig(is_sphincs ? pq::SPHINCS128s::SIG_BYTES : pq::MLDSA65::SIG_BYTES); size_t siglen = 0;
        bool ok_sign = is_sphincs
            ? pq::SPHINCS128s::sign(sig.data(), &siglen, sighash_h.data(), 32, seckey.data())
            : pq::MLDSA65::sign(sig.data(), &siglen, sighash_h.data(), 32, seckey.data());
        if (!ok_sign) {
            input_errors[i] = Untranslated("FRIO: PQC signing failed");
            all_signed = false; continue;
        }
        sig.resize(siglen);
        tx.vin[i].scriptWitness.stack.clear();
        tx.vin[i].scriptWitness.stack.push_back(sig);
        tx.vin[i].scriptWitness.stack.push_back(pubkey);
    }
    return all_signed;
}

} // namespace wallet
