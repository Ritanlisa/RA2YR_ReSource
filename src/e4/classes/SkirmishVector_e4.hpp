// G57w10 D-类体 supply: SkirmishVector (raw 0x5EEE40; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SkirmishVector {
// --- flat members (BEGIN) ---
    unsigned int tail_0;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static char PushBack(void *aP1, void *a2);
};
} // namespace gamemd
