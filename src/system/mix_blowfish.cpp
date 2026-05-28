#include "gamemd/system/mix_blowfish.hpp"
#include <cstring>

namespace gamemd {
namespace mix {

// The blowfish implementation is adapted from MIX_Format.html (Olaf van der Spek).
// For now, this is a placeholder. Full implementation requires:
//   1. 18-entry P-array + 4×256-entry S-boxes (1042 uint32_t constants)
//   2. Westwood key calculation (big integer RSA-like ~400 lines)
// These will be added when the encrypted MIX file reading is prioritized.

// TODO: Complete blowfish + Westwood key calculation

void BlowfishEngine::SetKey(const uint8_t*, int) {}
uint32_t BlowfishEngine::S(uint32_t, int) const { return 0; }
uint32_t BlowfishEngine::BF_F(uint32_t) const { return 0; }
void BlowfishEngine::Round(uint32_t&, uint32_t, int) const {}
void BlowfishEngine::Encipher(uint32_t&, uint32_t&) const {}
void BlowfishEngine::Decipher(uint32_t&, uint32_t&) const {}
void BlowfishEngine::Decipher(const void*, void*, int) const {}

void ComputeBlowfishKey(const uint8_t* key_source, uint8_t* key_out) {
    (void)key_source;
    (void)key_out;
}

} // namespace mix
} // namespace gamemd
