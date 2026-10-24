// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EnumConnectionPointsClass {
    char __pad_0[4];  // 0x0
    int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    unsigned short q010;  // 0x10
    unsigned short IsInitialized;  // 0x12
    int q014;  // 0x14
    unsigned char q018;  // 0x18
    char u32_19[3];  // 0x19
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
// --- flat members (BEGIN) ---
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
