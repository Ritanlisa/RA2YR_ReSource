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
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int AlphaShapeClass_field_0x04;
    unsigned int AlphaShapeClass_field_0x08;
    unsigned int AlphaShapeClass_field_0x0C;
    unsigned int AlphaShapeClass_field_0x24;
    unsigned int *__pad_0;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_34;
    unsigned int u32_3C;
// --- flat members (END) ---
    AlphaShapeClass * SDDTOR(char a2, int aP0, int aP1);
    int SD_vt05(AbstractClass * aP0, int aP1);
    int SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2);
    int SD_vt10(int a2, int a3);
    int SD_vt13(int a2);
    static int CTOR(...);  // w16g4 C3861 static supply (raw 0x00420960)
};

} // namespace gamemd
