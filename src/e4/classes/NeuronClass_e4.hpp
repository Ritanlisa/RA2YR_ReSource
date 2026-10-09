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
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned char q014;  // 0x14
// --- flat members (END) ---
    NeuronClass();
    void * Reset(unsigned int * Block, char a2);
    int NeuronClass_field_0x04;  // 0x4 (ml)
    int NeuronClass_field_0x08;  // 0x8 (ml)
    int NeuronClass_field_0x0C;  // 0x12 (ml)
    unsigned int q000;  // 0x0 (offset-truth supply)
    unsigned int u32_24;  // 0x24 (offset-truth supply)
    unsigned int u32_28;  // 0x28 (offset-truth supply)
    unsigned int u32_2C;  // 0x2C (offset-truth supply)
};

} // namespace gamemd
