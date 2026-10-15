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
void* q000;  // 0x0 [X35-L7 kind=void*]
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_017;  // 0x17 [X30:canon]
};

} // namespace gamemd
