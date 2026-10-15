// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelPaletteClass {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_C;  // 0xC
unsigned int u32_10;  // 0x10 [X35-L7 kind=unsigned int]
    unsigned int u32_14;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q034;  // 0x34
    unsigned int q050;  // 0x50
// --- flat members (END) ---
    int ConvertFromFile(int a2);
    int LoadFromFile();

    unsigned int u32_8;  // X10 supply (member_lookup)
};

} // namespace gamemd
