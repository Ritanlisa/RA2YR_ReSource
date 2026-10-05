// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DamageArea {
// --- flat members (BEGIN) ---
    unsigned int q004;
    unsigned int q00C;
    unsigned int q050;
    unsigned int q100;
    unsigned int u32_10;
    unsigned int u32_20;
    unsigned int u32_38;
    unsigned int u32_42;
    unsigned int u32_44;
    unsigned int q008;
    unsigned int u32_4C;
    unsigned int u32_58;
    unsigned char u8_51;
    unsigned int u32_51;
    unsigned int u32_C;
    unsigned int u32_5C;
// --- flat members (END) ---
    int ApplyScatter();
    int CheckOccupancyEligibility();
    unsigned int * CalcScatterOffset(unsigned int * a2, int16_t * a3);
};

} // namespace gamemd
