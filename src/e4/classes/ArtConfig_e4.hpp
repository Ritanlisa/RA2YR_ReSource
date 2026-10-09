// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ArtConfig {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    INIClass * ptr_10;  // 0x10
    unsigned char q014;  // 0x14
// --- flat members (END) ---
    int validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3);
    unsigned int * loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5);  // 0x5cc760
    unsigned int u32_18;  // 0x18 (offset-truth supply)
    unsigned int u32_1C;  // 0x1C (offset-truth supply)
    unsigned int u32_28;  // 0x28 (offset-truth supply)
    unsigned char u32_C2;  // 0xC2 (offset-truth supply)
};

} // namespace gamemd
