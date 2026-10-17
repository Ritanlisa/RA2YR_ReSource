// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct InfantryTypeVector {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int Add(InfantryTypeClass * aP1, void *a2, void *a3);
    unsigned int * Construct2(int a2, int a3);
    unsigned int * ConstructFromData(int a2, int a3);
    static unsigned int * Construct(void *aP1, int a2, int a3);
    unsigned int InfantryTypeVector_field_0x18;  // @0x511xxx (W16G3 raw-usage vocab)
    unsigned int InfantryTypeVector_field_0x1C;  // @0x511xxx (W16G3 raw-usage vocab)

    uint8_t InfantryTypeVector_field_0x0C;  // X10 supply (member_types)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int u32_4;  // X10 supply (member_lookup)
    int q01C;  // 0x1C
    int q014;  // 0x14
    int q010;  // 0x10
unsigned int InfantryTypeVector_field_0x04;  // 0x4 [X35-L7 kind=unsigned int]
    char __pad_0[4];  // 0x0 [X30:member_lookup]


    int __pad_004;  // 0x4 [X55 W3 supply (render vocab)]
    unsigned int u32_D;  // 0xD [X55 W3 supply (render vocab)]
    unsigned int u32_8;  // 0x8 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
