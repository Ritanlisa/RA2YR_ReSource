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
void* q000;  // 0x0 [X35-L7 kind=void*]
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_34;  // 0x34 (offset-truth)
    unsigned int u32_38;  // 0x38 (offset-truth)
    unsigned int u32_3C;  // 0x3C (offset-truth)
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_017;  // 0x17 [X30:canon]
};

} // namespace gamemd
