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
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
// --- flat members (END) ---
    AlphaShapeClass * SDDTOR(char a2, int aP0, int aP1);
    int SD_vt05(AbstractClass * aP0, int aP1);
    int SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2);
    int SD_vt10(int a2, int a3);
    int SD_vt13(int a2);
    static int CTOR(...);  // w16g4 C3861 static supply (raw 0x00420960)
    int AlphaShapeClass_field_0x04;  // 0x4 (ml)
    int AlphaShapeClass_field_0x08;  // 0x8 (ml)
    int AlphaShapeClass_field_0x0C;  // 0x12 (ml)
    unsigned int q000;  // 0x0 (offset-truth supply)
    unsigned int u32_28;  // 0x28 (offset-truth supply)
    unsigned int u32_2C;  // 0x2C (offset-truth supply)
    unsigned int u32_34;  // 0x34 (offset-truth supply)
    unsigned int u32_3C;  // 0x3C (offset-truth supply)
};

} // namespace gamemd
