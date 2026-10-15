// G57w10 D-类体 supply: MiniMap (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MiniMap {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static bool SavePreviewToINI(void *aP1, void *a2);
    void* __pad_000;  // 0x0 [X30:type_map]
};
} // namespace gamemd
