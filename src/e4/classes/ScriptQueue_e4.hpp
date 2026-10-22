// G57w10 D-类体 supply: ScriptQueue (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptQueue {
    unsigned int tail_0;  // 0x0
    char __pad_4[24];  // 0x4
    unsigned char u8_1C;  // 0x1C
    char __pad_1D[3];  // 0x1D
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int PushEntry(void *aP1);
};
} // namespace gamemd
