// G57w10 D-类体 supply: Scalar (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Scalar {
    unsigned int tail_0;  // 0x0
    char __pad_4[4];  // 0x4
    unsigned int u32_8;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void ** Dtor(void *aP1, char a2);
};
} // namespace gamemd
