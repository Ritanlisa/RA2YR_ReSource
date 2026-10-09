// G57w10 D-类体 supply: ScriptQueue (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptQueue {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int PushEntry(void *aP1);  // 0x6378B0 raw: int PushEntry(ScriptQueue*)
};
} // namespace gamemd
