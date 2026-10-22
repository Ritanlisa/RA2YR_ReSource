// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct OptionQueue {
    unsigned int tail_0;  // 0x0
    char __pad_4[4];  // 0x4
    unsigned int u32_8;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int PushEntry(void * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);
};

} // namespace gamemd
