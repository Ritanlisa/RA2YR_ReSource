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
    static void* Add(CellStruct *aP0, unsigned int *aP1, unsigned short *aP2);
    static unsigned int * Copy(CellStruct *aP0, void* aP1);
BOOL Equals(unsigned short * a2, void *a2_2);  // 0x50E470
    void* Sub(unsigned int *aP1, unsigned short *aP2);  // 0x588C60
    unsigned int * Set(int16_t a2, int16_t a3, void *a3_1 = 0);  // 0x42D470
    unsigned int q004;  // 0x4 (offset-truth)
    int u32_2C4;  // 0x2C4
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2BC;  // 0x2BC
    int u32_2B4;  // 0x2B4
    int u32_2B0;  // 0x2B0
    unsigned int u32_16C;  // 0x16C
    unsigned char u32_24;  // 0x24
    unsigned int q01A;  // 0x1A
    unsigned int q019;  // 0x19
    unsigned char q018;  // 0x18
    void* CellStruct_1;  // 0x1 [X30:member_lookup]
    unsigned int DisplayDuration;  // [X30:default]
    unsigned int MessageTimer;  // [X30:default]
    unsigned int ScrollOffset;  // [X30:default]
    unsigned int TextColorIndex;  // [X30:default]
    unsigned int field_0;  // [X30:default]
unsigned int field_4;  // 0x4 [X35-L7 kind=unsigned int]
    short u32_2;  // 0x2 [X30:member_lookup]
};
#endif // GAMEMD_TREE_UNIVERSE
} // namespace gamemd
