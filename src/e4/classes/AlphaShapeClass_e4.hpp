// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AlphaShapeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
// --- flat members (END) ---
    AlphaShapeClass * SDDTOR(char a2, int aP0, int aP1);
    int  SD_vt05(int aP1, void *a2 = 0);
    int SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2);
    int SD_vt10(int a2, int a3);
    int SD_vt13(int a2);
    static int CTOR(int p0, int p1, int p2);  // x4:signals@0x420960
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_34;  // 0x34 (offset-truth)
    unsigned int u32_3C;  // 0x3C (offset-truth)

    int q024;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
};

} // namespace gamemd
