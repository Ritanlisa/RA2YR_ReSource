// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_MATH_ALIASES)  // G57a1
struct CellStruct {
// --- flat members (BEGIN) ---
    short X;  // 0x0
    short Y;  // 0x2
// --- flat members (END) ---
    static void* Add(CellStruct *aP0, unsigned int *aP1, unsigned short *aP2);  // G57w11: +static+receiver raw 0x42D510 __thiscall(this,+2)
    static unsigned int * Copy(CellStruct *aP0, void * aP1);  // G57w11: +static raw 0x437F30 __thiscall(this,a2)（G42.33 b9 static-form sync 收口）
BOOL Equals(unsigned short * a2, void *a2_2);  // 0x50E470
    void* Sub(unsigned int *aP1, unsigned short *aP2);  // 0x588C60
    unsigned int * Set(int16_t a2, int16_t a3);  // 0x42D470
};
#endif // GAMEMD_TREE_UNIVERSE
} // namespace gamemd
