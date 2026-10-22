// G57w10 D-类体 supply: TileSystem::ctor (raw 0x5AD740; canon TileSystem size=16)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TileSystem {
    int __pad_000;  // 0x0
    int u32_4;  // 0x4
    int u32_8;  // 0x8
    int u32_C;  // 0xC
    char __pad_10[10];  // 0x10
    unsigned char u8_1A;  // 0x1A
    char __pad_1B[29];  // 0x1B
    unsigned int u32_38;  // 0x38
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor(void *aP1, int a2, int a3);
    static char BuildNodes(void *aP1);
};
} // namespace gamemd
