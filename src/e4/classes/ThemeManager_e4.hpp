// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ThemeManager {
    char __pad_0[12];  // 0x0
    unsigned char u8_C;  // 0xC
    char __pad_D[3];  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[4];  // 0x30
    unsigned int q034;  // 0x34
    char __pad_38[12];  // 0x38
    unsigned int q044;  // 0x44
    char __pad_48[8];  // 0x48
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    char __pad_58[16];  // 0x58
    unsigned int q068;  // 0x68
    char __pad_6C[152];  // 0x6C
    unsigned int q104;  // 0x104
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ProcessCallback(void *a1);
    void Cleanup(void *a1 = 0, void *a2 = 0);
};

} // namespace gamemd
