// G57w10 D-类体 supply: IsoCoord (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IsoCoord {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char __pad_0[4];  // 0x0 (W13A til IsoCoord size 8)
    void* IsoCoord_field_0x04;  // 0x4 (W13A til IsoCoord) [X30:type_map]
    static unsigned int * ToPixel(void *aP1, int a2, int a3);
    static int ToScreenOffset(int a1, int a2, int *a3, int *a4);
    int __pad_000;  // 0x0 [X30:type_map]
};
} // namespace gamemd
