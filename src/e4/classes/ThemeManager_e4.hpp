// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ThemeManager {
// --- flat members (BEGIN) ---
    unsigned char u8_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int u32_2C;  // 0x2C
    unsigned int q034;  // 0x34
    unsigned int q044;  // 0x44
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q068;  // 0x68
    unsigned int q104;  // 0x104
// --- flat members (END) ---
    int ProcessCallback();
    void Cleanup();
};

} // namespace gamemd
