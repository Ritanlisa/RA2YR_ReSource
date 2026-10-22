// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PriorityQueue {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    char __pad_C[20];  // 0xC
    unsigned int u32_20;  // 0x20
    char __pad_24[4];  // 0x24
    unsigned int u32_28;  // 0x28
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Add(int aP1, void *a1 = 0, void *a2 = 0);
    static int Pop(PriorityQueue *p_this);  // x4:ida@0x5ac960
};

} // namespace gamemd
