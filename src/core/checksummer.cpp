#include "core/checksummer.hpp"

namespace gamemd {

// --- Checksummer ---

// 0x4a1d30
void Checksummer::Add_WORD(uint16_t) {}
  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&uint16_t, 2); /*0x4a1d46*/
