// G57w10 D-类体 supply: IsoCoord (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IsoCoord {
    unsigned char q000[8];  // 0x0 (canon size filler)
    static unsigned int * ToPixel(void *aP1, int a2, int a3);  // 0x6D1EB0 raw: _DWORD* ToPixel(IsoCoord*, int, int)
    static int ToScreenOffset(int a1, int a2, int *a3, int *a4);  // 0x6D62E0 raw: int __stdcall IsoCoord_ToScreenOffset(int, int, int*, int*)
};
} // namespace gamemd
