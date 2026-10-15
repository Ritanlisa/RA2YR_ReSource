// G57w10 D-类体 supply: MapPreview (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapPreview {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static int Upload(void *aP1);
    static int Check(void *aP1, int a2);
    unsigned char __pad_000;  // 0x0 [X30:canon]
};
} // namespace gamemd
