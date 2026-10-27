#include "core/checksummer.hpp"

namespace gamemd {

// --- Checksummer ---

// 0x4a1d30
void Checksummer::Add_WORD(uint16_t value) {
  this->Add_Buffer((const uint8_t *)&value, 2); /*0x4a1d46*/
}
} // namespace gamemd