// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DiskLaserClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
// --- flat members (END) ---
    DiskLaserClass();
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn64();
    int StubReturn73();
    int  Write(AbstractClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    void * CopyTo(char a2);
    void  PointerGotInvalid(int a2);  // 0x4a7900
    void * CopyTo(unsigned int * Block, char a2);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_34;  // 0x34 (offset-truth)
    unsigned int u32_38;  // 0x38 (offset-truth)
    unsigned int u32_3C;  // 0x3C (offset-truth)
    static double DiskLaserClass_field_0x04(...);  // plateau: C2039/C3861 stub
    static double DiskLaserClass_field_0x08(...);  // plateau: C2039/C3861 stub
    static double DiskLaserClass_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double DiskLaserClass_field_0x24(...);  // plateau: C2039/C3861 stub
    static double DiskLaserClass_field_0x28(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
