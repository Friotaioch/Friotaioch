// FRIO: post-quantum ScriptPubKeyMan. Stores ML-DSA-65 keys natively (pubkey 1952B,
// secret 4032B) keyed by program=SHA256(pubkey); registers via the ScriptPubKeyMan
// interface so IsMine/address-gen participate uniformly, without being a descriptor.
#ifndef BITCOIN_WALLET_PQR_SPKM_H
#define BITCOIN_WALLET_PQR_SPKM_H
#include <wallet/scriptpubkeyman.h>
#include <addresstype.h>
#include <primitives/transaction.h>
#include <coins.h>
#include <util/translation.h>
#include <uint256.h>
#include <map>
#include <vector>

namespace wallet {

struct PQRKey {
    std::vector<unsigned char> pubkey;          // 1952 bytes (ML-DSA-65)
    std::vector<unsigned char> seckey;          // 4032 bytes plaintext (empty if encrypted-at-rest & locked)
    std::vector<unsigned char> crypted_seckey;  // set when wallet is encrypted
    bool encrypted{false};
    uint8_t algo{2};            // 2 = ML-DSA-65 (v2), 3 = SPHINCS+-128s (v3)
};

class PQRScriptPubKeyMan : public ScriptPubKeyMan
{
    mutable RecursiveMutex cs_pqr;
    std::map<uint256, PQRKey> m_keys GUARDED_BY(cs_pqr);   // program -> key
    uint256 m_id;
public:
    explicit PQRScriptPubKeyMan(WalletStorage& storage) : ScriptPubKeyMan(storage)
    {
        // deterministic-ish id from a fixed tag; unique per manager instance is fine for 5.4a
        m_id = uint256::ONE;  // replaced with a real id in registration
    }
    void SetID(const uint256& id) { m_id = id; }

    util::Result<CTxDestination> GetNewDestination(const OutputType type) override;
    bool IsMine(const CScript& script) const override;
    std::unordered_set<CScript, SaltedSipHasher> GetScriptPubKeys() const override;
    uint256 GetID() const override { return m_id; }
    bool CanGetAddresses(bool internal = false) const override { return true; }
    bool HavePrivateKeys() const override { return true; }
    bool m_mint_v3{false};
    void SetMintV3(bool v) { m_mint_v3 = v; }
    void LoadKey(const uint256& program, const PQRKey& key) { LOCK(cs_pqr); m_keys[program] = key; }
    void LoadCryptedKey(const uint256& program, const std::vector<unsigned char>& pubkey, const std::vector<unsigned char>& crypted_seckey)
    { LOCK(cs_pqr); PQRKey k; k.pubkey=pubkey; k.crypted_seckey=crypted_seckey; k.encrypted=true; k.algo=(pubkey.size()==32?3:2); m_keys[program]=k; }
    bool Encrypt(const CKeyingMaterial& master_key, WalletBatch* batch) override;
    bool CheckDecryptionKey(const CKeyingMaterial& master_key) override;
    bool SignTransaction(CMutableTransaction& tx, const std::map<COutPoint, Coin>& coins, int sighash, std::map<int, bilingual_str>& input_errors) const override;
    //! Return the (program -> key) if we own this 32-byte program, decrypting the secret if needed.
    bool GetKey(const uint256& program, std::vector<unsigned char>& pubkey_out, std::vector<unsigned char>& seckey_out) const;
};

} // namespace wallet
#endif
