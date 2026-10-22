// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DiskLaserClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    unsigned int __pad_010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
