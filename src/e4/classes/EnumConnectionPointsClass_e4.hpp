// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EnumConnectionPointsClass {
    char __pad_0[4];  // 0x0
    int __pad_004;  // 0x4
    int EnumConnectionPointsClass_field_0x08;  // 0x8
    int EnumConnectionPointsClass_field_0x0C;  // 0xC
    int EnumConnectionPointsClass_field_0x10;  // 0x10
    int EnumConnectionPointsClass_field_0x14;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int EnumConnectionPointsClass_field_0x20;  // 0x20
    int EnumConnectionPointsClass_field_0x24;  // 0x24
    int EnumConnectionPointsClass_field_0x28;  // 0x28
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
