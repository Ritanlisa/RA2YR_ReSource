// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"


namespace gamemd {
#ifndef GAMEMD_TREE_UNIVERSE
struct AbstractClass;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE

struct KeyboardConfig {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_10;  // 0x10
    unsigned int u32_20;  // 0x20
// --- flat members (END) ---
    AbstractClass * ReleaseBuffer(int a2, void *a2_2);
    static int LoadINI();
};

} // namespace gamemd
