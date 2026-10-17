// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EMPulseClass {
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int __pad_010;  // 0x10
    int EMPulseClass_field_0x14;  // 0x14
    int EMPulseClass_field_0x18;  // 0x18
    int EMPulseClass_field_0x1C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int IterateCellsInRadius(int pThis);
    EMPulseClass * CopyTo(void * a2, char a3);
    int StubReturn52();
    int StubReturn55();
};

} // namespace gamemd
