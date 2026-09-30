// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GaugeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned int __pad_0;
    unsigned int u32_2D;
// --- flat members (END) ---
    GaugeClass * QueryInterface(unsigned int * Block, char a2);
    int Draw(int a2);
    int Stub();
};

} // namespace gamemd
