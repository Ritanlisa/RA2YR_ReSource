// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_ColorStruct_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_ColorStruct_DEF 1
struct ColorStruct {
    unsigned int __pad_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    char __pad_C[4];  // 0xC
    unsigned int field_10;  // 0x10
    unsigned int field_14;  // 0x14
    char __pad_18[8];  // 0x18
    void* q020;  // 0x20
    char __pad_24[12];  // 0x24
    unsigned int field_30;  // 0x30
    unsigned int field_34;  // 0x34
    char __pad_38[16];  // 0x38
    void* q048;  // 0x48
    char __pad_4C[4];  // 0x4C
    unsigned int field_50;  // 0x50
    unsigned int field_54;  // 0x54
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int SetRGB(uint8_t a2, uint8_t a3, uint8_t a4, void *a4_1 = 0);
};
#endif  // GAMEMD_G2_ColorStruct_DEF

} // namespace gamemd
