// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DamageArea {
    int DamageArea_field_00;  // 0x0
    unsigned int u32_4;  // 0x4
    char __pad_8[4];  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[8];  // 0x10
    unsigned char u8_18;  // 0x18
    char __pad_19[3];  // 0x19
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    char __pad_28[16];  // 0x28
    unsigned int u32_38;  // 0x38
    char __pad_3C[4];  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char u8_50;  // 0x50
    unsigned char u32_51;  // 0x51
    char __pad_52[6];  // 0x52
    unsigned int u32_58;  // 0x58
    unsigned char u32_5C;  // 0x5C
    char __pad_5D[151];  // 0x5D
    unsigned int u32_F4;  // 0xF4
    char __pad_F8[4];  // 0xF8
    unsigned int u32_FC;  // 0xFC
    unsigned int u32_100;  // 0x100
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ApplyScatter();
    int CheckOccupancyEligibility();
    unsigned int * CalcScatterOffset(unsigned int * v11, int16_t * a3);
};

} // namespace gamemd
