// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ArtConfig {
    int __pad_000;  // 0x0
    int ArtConfig_field_0x04;  // 0x4
    int ArtConfig_field_0x08;  // 0x8
    int ArtConfig_field_0x0C;  // 0xC
    INIClass * ptr_10;  // 0x10
    void* __pad_014;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3);
    unsigned int * loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5);  // 0x5cc760
};

} // namespace gamemd
