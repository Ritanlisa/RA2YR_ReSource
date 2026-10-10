// G57w10 D-类体 supply: CSFClass (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CSFClass {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[12];  // 0x0 (canon size filler)
    static int LoadFile(const char *aP1);
};
} // namespace gamemd
