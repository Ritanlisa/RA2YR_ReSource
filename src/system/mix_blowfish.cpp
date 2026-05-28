#include "gamemd/system/mix_blowfish.hpp"
#include <cstring>

namespace gamemd {
namespace mix {

// ============================================================
// Blowfish P-array and S-boxes (from MIX_Format.html reference)
// ============================================================

static const uint32_t bf_P[18] = {
    0x243F6A88,0x85A308D3,0x13198A2E,0x03707344,0xA4093822,0x299F31D0,
    0x082EFA98,0xEC4E6C89,0x452821E6,0x38D01377,0xBE5466CF,0x34E90C6C,
    0xC0AC29B7,0xC97C50DD,0x3F84D5B5,0xB5470917,0x9216D5D9,0x8979FB1B
};

static const uint32_t bf_S[4][256] = {
{
#include "mix_blowfish_s0.inl"
},{
#include "mix_blowfish_s1.inl"
},{
#include "mix_blowfish_s2.inl"
},{
#include "mix_blowfish_s3.inl"
}
};

// ============================================================
// BlowfishEngine implementation
// ============================================================

void BlowfishEngine::SetKey(const uint8_t* key, int cb_key)
{
    memcpy(m_p, bf_P, sizeof(m_p));
    memcpy(m_s, bf_S, sizeof(m_s));

    int j = 0;
    for (int i = 0; i < 18; ++i) {
        uint32_t d = 0;
        for (int k = 0; k < 4; ++k) {
            d = (d << 8) | key[j];
            j = (j + 1) % cb_key;
        }
        m_p[i] ^= d;
    }

    uint32_t dl = 0, dr = 0;
    for (int i = 0; i < 18; i += 2) {
        Encipher(dl, dr);
        m_p[i] = dl;
        m_p[i + 1] = dr;
    }
    for (int i = 0; i < 4; ++i) {
        for (int jj = 0; jj < 256; jj += 2) {
            Encipher(dl, dr);
            m_s[i][jj] = dl;
            m_s[i][jj + 1] = dr;
        }
    }
}

uint32_t BlowfishEngine::S(uint32_t x, int i) const {
    return m_s[i][(x >> ((3 - i) << 3)) & 0xFF];
}

uint32_t BlowfishEngine::BF_F(uint32_t x) const {
    return ((S(x, 0) + S(x, 1)) ^ S(x, 2)) + S(x, 3);
}

void BlowfishEngine::Round(uint32_t& a, uint32_t b, int n) const {
    a ^= BF_F(b) ^ m_p[n];
}

void BlowfishEngine::Encipher(uint32_t& xl, uint32_t& xr) const {
    uint32_t Xl = xl, Xr = xr;
    Xl ^= m_p[0];
    Round(Xr, Xl, 1);  Round(Xl, Xr, 2);  Round(Xr, Xl, 3);  Round(Xl, Xr, 4);
    Round(Xr, Xl, 5);  Round(Xl, Xr, 6);  Round(Xr, Xl, 7);  Round(Xl, Xr, 8);
    Round(Xr, Xl, 9);  Round(Xl, Xr, 10); Round(Xr, Xl, 11); Round(Xl, Xr, 12);
    Round(Xr, Xl, 13); Round(Xl, Xr, 14); Round(Xr, Xl, 15); Round(Xl, Xr, 16);
    Xr ^= m_p[17];
    xr = Xl; xl = Xr;
}

void BlowfishEngine::Decipher(uint32_t& xl, uint32_t& xr) const {
    uint32_t Xl = xl, Xr = xr;
    Xl ^= m_p[17];
    Round(Xr, Xl, 16); Round(Xl, Xr, 15); Round(Xr, Xl, 14); Round(Xl, Xr, 13);
    Round(Xr, Xl, 12); Round(Xl, Xr, 11); Round(Xr, Xl, 10); Round(Xl, Xr, 9);
    Round(Xr, Xl, 8);  Round(Xl, Xr, 7);  Round(Xr, Xl, 6);  Round(Xl, Xr, 5);
    Round(Xr, Xl, 4);  Round(Xl, Xr, 3);  Round(Xr, Xl, 2);  Round(Xl, Xr, 1);
    Xr ^= m_p[0];
    xl = Xr; xr = Xl;
}

static inline uint32_t reverse32(uint32_t v) {
    return ((v & 0xFF) << 24) | ((v & 0xFF00) << 8) |
           ((v >> 8) & 0xFF00) | ((v >> 24) & 0xFF);
}

void BlowfishEngine::Decipher(const void* src, void* dst, int size) const {
    auto* r = static_cast<const uint32_t*>(src);
    auto* w = static_cast<uint32_t*>(dst);
    size >>= 3;
    while (size--) {
        uint32_t a = reverse32(*r++);
        uint32_t b = reverse32(*r++);
        Decipher(a, b);
        *w++ = reverse32(a);
        *w++ = reverse32(b);
    }
}

// ============================================================
// Westwood key calculation — TODO
// ~400 lines of RSA-like big integer modular exponentiation
// Reference: MIX_Format.html get_blowfish_key()
// ============================================================

void ComputeBlowfishKey(const uint8_t* key_source, uint8_t* key_out) {
    // TODO: implement full Westwood key derivation
    // Placeholder: pass-through (will not work for real files)
    memcpy(key_out, key_source, 56);
}

} // namespace mix
} // namespace gamemd
