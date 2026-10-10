// G57w10 D-类体 supply: CoordBounds::ctor (raw 0x403870; canon CoordBounds size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CoordBounds {
// --- flat members (BEGIN) ---
    unsigned int tail_0;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int64_t Constructor(void *aP1, int a2, int a3);
};
} // namespace gamemd
