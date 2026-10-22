// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ChatEvent {
    unsigned int tail_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[4];  // 0x10
    unsigned char u8_14;  // 0x14
    char __pad_15[3];  // 0x15
    unsigned int u32_18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ProcessStrings(char *a2, int a3, int a4, int a5);
};

} // namespace gamemd
