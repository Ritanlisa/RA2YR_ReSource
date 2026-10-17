// G57w10 D-类体 supply: Heap (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Heap {
    unsigned int tail_0;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void SiftDown(void *aP1, int a2);
};
} // namespace gamemd
