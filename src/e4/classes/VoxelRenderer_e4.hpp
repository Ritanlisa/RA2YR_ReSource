// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelRenderer {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    int VoxelRenderer_field_0x08;  // 0x8
    int VoxelRenderer_field_0x0C;  // 0xC
    int u32_10;  // 0x10
    int VoxelRenderer_field_0x14;  // 0x14
    int VoxelRenderer_field_0x18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int InitializeBuffers(int a2, unsigned int * a3, int a4);
    int ProjectVertex(float a2, float a3, float a4, char a5);
};

} // namespace gamemd
