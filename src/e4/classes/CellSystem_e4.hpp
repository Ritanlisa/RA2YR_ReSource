// G57w10 D-类体 supply: CellSystem (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CellSystem {
    unsigned int tail_0;  // 0x0
    char __pad_4[240];  // 0x4
    unsigned int u32_F4;  // 0xF4
    char __pad_F8[20];  // 0xF8
    unsigned int u32_10C;  // 0x10C
    unsigned int u32_110;  // 0x110
    unsigned int u32_114;  // 0x114
    unsigned int u32_118;  // 0x118
    char __pad_11C[32];  // 0x11C
    unsigned int u32_13C;  // 0x13C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int UpdateVisibility(void *aP1);
};
} // namespace gamemd
