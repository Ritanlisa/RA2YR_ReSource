// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NeuronClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
// --- flat members (END) ---
    NeuronClass();
    void * Reset(unsigned int * Block, char a2);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    static double NeuronClass_field_0x04(...);  // plateau: C2039/C3861 stub
    static double NeuronClass_field_0x08(...);  // plateau: C2039/C3861 stub
    static double NeuronClass_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
