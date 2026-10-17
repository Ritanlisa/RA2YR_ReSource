// G57w10 D-类体 supply: MapPreview (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapPreview {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int MapPreview_field_0x04;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Upload(void *aP1);
    static int Check(void *aP1, int a2);
};
} // namespace gamemd
