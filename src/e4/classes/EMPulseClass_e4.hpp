// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EMPulseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
// --- flat members (END) ---
    static int IterateCellsInRadius(int pThis);
    EMPulseClass * CopyTo(void * a2, char a3);
    int StubReturn52();
    int StubReturn55();
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_017;  // 0x17 [X30:canon]
};

} // namespace gamemd
