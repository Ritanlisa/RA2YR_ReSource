// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EnumConnectionPointsClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned int u32_19;  // 0x19
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    bool q02B;  // 0x2B
// --- flat members (END) ---
    int Skip(int a1);
    int _vt06(unsigned int * a1, unsigned int * a2);
    int FindItem(int *);
    int PointerToIndex(int);
    int SetCapacity(int,void *);
    void * Constructor_VectorClass_IConnectionPoint___(int);
    void ClearBuffer(void);
};

} // namespace gamemd
