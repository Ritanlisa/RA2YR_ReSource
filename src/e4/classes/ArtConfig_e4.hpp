// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ArtConfig {
// --- flat members (BEGIN) ---
    INIClass * ptr_10;  // 0x10
// --- flat members (END) ---
    int validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3);
    unsigned int * loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5);  // 0x5cc760
unsigned int u32_18;  // 0x18 [X35-L7 kind=unsigned int]
    void* u32_1C;  // 0x1C (offset-truth) [X30:type_map]
unsigned int q28;  // 0x28 [X35-L7 kind=unsigned int]
    unsigned char u32_C2;  // 0xC2 (offset-truth)

    unsigned char q020;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    int __pad_000;  // 0x0 [X30:type_map]
    void* __pad_014;  // 0x14 [X30:type_map]
};

} // namespace gamemd
