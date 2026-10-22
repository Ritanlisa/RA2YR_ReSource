// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"


namespace gamemd {
#ifndef GAMEMD_TREE_UNIVERSE
struct AbstractClass;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE

struct KeyboardConfig {
    unsigned int u32_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    void * ptr_8;  // 0xC
    unsigned int u32_10;  // 0x10
    char __pad_14[12];  // 0x14
    unsigned int u32_20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ReleaseBuffer(int a2, void *v3);
    static int LoadINI();
};

} // namespace gamemd
