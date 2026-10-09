// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DamageArea {
// --- flat members (BEGIN) ---
    char DamageArea_field_00[4];  // 0x0
// --- flat members (END) ---
    int ApplyScatter();
    int CheckOccupancyEligibility();
    unsigned int * CalcScatterOffset(unsigned int * a2, int16_t * a3);
    unsigned int u32_100;  // 0x100 (offset-truth)
    unsigned char u32_51;  // 0x51 (offset-truth)
    unsigned int u32_5C;  // 0x5C (offset-truth)
    unsigned int u32_C;  // 0xC (offset-truth)
    unsigned int u32_F4;  // 0xF4 (offset-truth)
    unsigned int u32_FC;  // 0xFC (offset-truth)
};

} // namespace gamemd
