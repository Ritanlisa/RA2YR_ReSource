// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DamageArea {
// --- flat members (BEGIN) ---
    char DamageArea_field_00[4];  // 0x0
    unsigned int q004;
    unsigned int q00C;
    unsigned int q050;
    unsigned int q070;
    unsigned int q100;
    unsigned int q250;
    unsigned int u32_10;
    unsigned int u32_1C2;
    unsigned int u32_20;
    unsigned int u32_38;
    unsigned int u32_42;
    unsigned int u32_44;
    unsigned char u8_5C;
    unsigned int q008;
    unsigned int u32_4C;
    unsigned long long u64_48;
    unsigned char u8_51;
    unsigned int u32_58;
// --- flat members (END) ---
    int ApplyScatter();
    int CheckOccupancyEligibility();
    unsigned int * CalcScatterOffset(unsigned int * v11, short * a3);
};

} // namespace gamemd
