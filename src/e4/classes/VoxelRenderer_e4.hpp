// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelRenderer {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    char __pad_1C[84];  // 0x1C
    unsigned char u32_70;  // 0x70
    char __pad_71[3];  // 0x71
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int InitializeBuffers(int a2, unsigned int * a3, int a4);
    int ProjectVertex(float a2, float a3, float a4, char a5);
};

} // namespace gamemd
