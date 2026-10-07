// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelAnim {
// --- flat members (BEGIN) ---
    unsigned int u32_8;  // 0x8
    unsigned int q00C;
    unsigned int q090;
    unsigned int q0A0;
    unsigned int u32_10;
    unsigned int u32_100;
    unsigned int u32_1C;
    unsigned int u32_2C;
    unsigned int u32_88;
// --- flat members (END) ---
    static int ComputeTransform(float * a1, float * a2, float a3, int a4);
    int Draw(unsigned int * a2);
};

} // namespace gamemd
