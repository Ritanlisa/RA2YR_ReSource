// G57w10 D-类体 supply: ObjectPlacement (raw 0x481180; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectPlacement {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static int * CalcPosition(void *aP1, void *a2, void *a3, char a4, char a5, char a6);  // 0x481180 raw: int* CalcPosition(ObjectPlacement*, int*, _DWORD*, char, char, char)
};
} // namespace gamemd
