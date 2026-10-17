// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_MATH_ALIASES)  // G57a1
struct CellStruct {
    short X;  // 0x0
    short Y;  // 0x2
    unsigned int field_4;  // 0x4
    char __pad_8[32];  // 0x8
    int field_28;  // 0x28
    char __pad_2C[4];  // 0x2C
    int field_30;  // 0x30
    char __pad_34[196];  // 0x34
    int field_F8;  // 0xF8
    char __pad_FC[436];  // 0xFC
    int u32_2B0;  // 0x2B0
    int u32_2B4;  // 0x2B4
    char __pad_2B8[12];  // 0x2B8
    int u32_2C4;  // 0x2C4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void* Add(CellStruct *aP0, unsigned int *aP1, unsigned short *aP2);
    static unsigned int * Copy(CellStruct *aP0, void* aP1);
BOOL Equals(unsigned short * a2, void *a2_2);  // 0x50E470
    void* Sub(unsigned int *aP1, unsigned short *aP2);  // 0x588C60
    unsigned int * Set(int16_t a2, int16_t a3, void *a3_1 = 0);  // 0x42D470
};
#endif // GAMEMD_TREE_UNIVERSE
} // namespace gamemd
