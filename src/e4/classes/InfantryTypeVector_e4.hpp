// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct InfantryTypeVector {
    unsigned int ptr_0;  // 0x0
    unsigned int u32_4;  // 0x4
    int q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Add(InfantryTypeClass * aP1, void *a2, void *a3);
    unsigned int * Construct2(int a2, int a3);
    unsigned int * ConstructFromData(int a2, int a3);
    static unsigned int * Construct(void *aP1, int a2, int a3);
};

} // namespace gamemd
