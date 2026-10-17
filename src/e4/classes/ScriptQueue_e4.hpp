// G57w10 D-类体 supply: ScriptQueue (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptQueue {
    unsigned int tail_0;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int PushEntry(void *aP1);
};
} // namespace gamemd
