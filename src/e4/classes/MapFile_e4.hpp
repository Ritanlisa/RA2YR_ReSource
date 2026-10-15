// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MapFile {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    static wchar_t * LoadDescription(void *aP1, void *a2, void *a3);
    DynamicVector * QueryInterface(unsigned int * Block, char a2);
    unsigned int * Constructor(int a2, int a3, void *a3_1 = 0, void *a4 = 0);

    uint8_t MapFile_field_0x0C;  // X10 supply (member_types)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned char __pad_016;  // 0x16 [X30:canon]
    int MapFile_field_0x04;  // 0x4 [X30:member_lookup]
    int __pad_0;  // 0x0 [X30:type_map]
};

} // namespace gamemd
