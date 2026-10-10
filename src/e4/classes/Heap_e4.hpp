// G57w10 D-类体 supply: Heap (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Heap {
// --- flat members (BEGIN) ---
    unsigned int tail_0;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static void SiftDown(void *aP1, int a2);
};
} // namespace gamemd
