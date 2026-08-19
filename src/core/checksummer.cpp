#include "core/checksummer.hpp"

namespace gamemd {

// --- Checksummer ---

void Checksummer::Add_WORD(uint16_t) {}
void Checksummer::Add_float(float) {}
void Checksummer::Add_double(double) {}
int Checksummer::Add_Buffer(const uint8_t* buf, int len) { return 0; }
int Checksummer::HashString(const char* str) { return 0; }

} // namespace gamemd
