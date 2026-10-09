// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelRenderer {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
// --- flat members (END) ---
    int InitializeBuffers(int a2, unsigned int * a3, int a4);
    int ProjectVertex(float a2, float a3, float a4, char a5);
    unsigned int u32_28;  // 0x28 (offset-truth supply)
    unsigned int u32_2C;  // 0x2C (offset-truth supply)
    unsigned int u32_70;  // 0x70 (offset-truth supply)
};

} // namespace gamemd
