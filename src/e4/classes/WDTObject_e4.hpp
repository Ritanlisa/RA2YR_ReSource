// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WDTObject {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    char __pad_8[4];  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[28];  // 0x10
    unsigned int u32_2C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetAndClearFlag();
    int GetSize();  // 0x76bfa0
};

} // namespace gamemd
