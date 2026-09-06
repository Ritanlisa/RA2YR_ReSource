#include "core/checksummer.hpp"

namespace gamemd {

// --- Checksummer ---

// 0x4a1d30
void Checksummer::Add_WORD(uint16_t) {}
// 0x4a1d70
void Checksummer::Add_float(float) {}
// 0x4a1d90
void Checksummer::Add_double(double) {}
// 0x4a1de0
int Checksummer::Add_Buffer(const uint8_t* buf, int len) { return 0; }
// 0x5f9e80
int Checksummer::HashString(const char* str) { return 0; }

} // namespace gamemd
