// G57w10 D-类体 supply: CoordBounds::ctor (raw 0x403870; canon CoordBounds size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CoordBounds {
    unsigned int tail_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[16];  // 0x10
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int64_t Constructor(void *aP1, int a2, int a3);
};
} // namespace gamemd
