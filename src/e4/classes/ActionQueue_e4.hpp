// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ActionQueue {
    unsigned int tail_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * PushEntry(int a2, int a3, int a4, void *a1 = 0);
};

} // namespace gamemd
