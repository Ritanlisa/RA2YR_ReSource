// G57w10 D-类体 supply: SkirmishVector (raw 0x5EEE40; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SkirmishVector {
    unsigned int tail_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    char __pad_C[1];  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char PushBack(void *aP1, void *a2);
};
} // namespace gamemd
