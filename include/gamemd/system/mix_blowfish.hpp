#pragma once

#include <cstdint>
#include <cstring>

namespace gamemd {
namespace mix {

// ============================================================
// Blowfish cipher for MIX header decryption
// Adapted from MIX_Format.html reference implementation
// ============================================================

class BlowfishEngine {
public:
    void SetKey(const uint8_t* key, int cb_key); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Encipher(uint32_t& xl, uint32_t& xr) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Decipher(uint32_t& xl, uint32_t& xr) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Decipher(const void* src, void* dst, int size) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

private:
    uint32_t S(uint32_t x, int i) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    uint32_t BF_F(uint32_t x) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Round(uint32_t& a, uint32_t b, int n) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static const uint32_t kPArray[18];
    static const uint32_t kSBoxes[4][256];

    uint32_t m_p[18];
    uint32_t m_s[4][256];
};

// ============================================================
// Westwood key source -> blowfish key derivation
// ============================================================

void ComputeBlowfishKey(const uint8_t* key_source, uint8_t* key_out); // IDA: UNMATCHED — no_callgraph_match, no_git_history

} // namespace mix
} // namespace gamemd
