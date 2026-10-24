// G57w10 D-类体 supply: IsoCoord (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IsoCoord {
    char __pad_0[1];  // 0x0
    char ptr_1[3];  // 0x1
    void * q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * ToPixel(void *aP1, int a2, int a3);
    static int ToScreenOffset(int a1, int a2, int *a3, int *a4);
};
} // namespace gamemd
