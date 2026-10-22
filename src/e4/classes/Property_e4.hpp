// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Property {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    char __pad_8[28];  // 0x8
    unsigned short u16_24;  // 0x24
    char __pad_26[6];  // 0x26
    unsigned int u32_2C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetField11(void *a1 = 0);
    int16_t Set(int16_t aP1, void *a1 = 0, void *a2 = 0);
};

} // namespace gamemd
