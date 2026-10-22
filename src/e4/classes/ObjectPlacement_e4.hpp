// G57w10 D-类体 supply: ObjectPlacement (raw 0x481180; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectPlacement {
    int __pad_0;  // 0x0
    int q004;  // 0x4
    char __pad_8[284];  // 0x8
    unsigned int u32_124;  // 0x124
    unsigned int u32_128;  // 0x128
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int * CalcPosition(void *aP1, void *a2, void *a3, char a4, char a5, char a6);
};
} // namespace gamemd
