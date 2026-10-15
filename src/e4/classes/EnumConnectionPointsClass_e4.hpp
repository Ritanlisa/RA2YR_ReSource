// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EnumConnectionPointsClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    int Skip(int a1);
    int _vt06(unsigned int * a1, unsigned int * a2);
    int FindItem(int *);
    int PointerToIndex(int);
    int SetCapacity(int,void *);
    void * Constructor_VectorClass_IConnectionPoint___(int);
    void ClearBuffer(void);
    int q01C;  // 0x1C
    unsigned int u32_19;  // 0x19
    int q018;  // 0x18
};

} // namespace gamemd
