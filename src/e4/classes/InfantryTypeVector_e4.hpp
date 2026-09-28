// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct InfantryTypeVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
// --- flat members (END) ---
    int Add(InfantryTypeClass * aP1);
    unsigned int * Construct2(int a2, int a3);
    unsigned int * ConstructFromData(int a2, int a3);
};

} // namespace gamemd
