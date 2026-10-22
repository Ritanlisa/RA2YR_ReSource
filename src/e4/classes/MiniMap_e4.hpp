// G57w10 D-类体 supply: MiniMap (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MiniMap {
    void* __pad_000;  // 0x0
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static bool SavePreviewToINI(void *aP1, void *a2);
};
} // namespace gamemd
