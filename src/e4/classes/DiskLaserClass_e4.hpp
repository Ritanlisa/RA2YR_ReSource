// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Block;  // G42.36 fwd supply

struct DiskLaserClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    bool q02B;  // 0x2B
// --- flat members (END) ---
    DiskLaserClass();
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn64();
    int StubReturn73();
    int  Write(AbstractClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    void * CopyTo(char a2);
    void PointerGotInvalid(int a2);  // 0x4a7900
    void * CopyTo(unsigned int * Block, char a2);
};

} // namespace gamemd
