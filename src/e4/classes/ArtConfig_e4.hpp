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
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
// --- flat members (END) ---
    int validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3);
};

} // namespace gamemd
