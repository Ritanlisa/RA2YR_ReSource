// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelAnim {
    int num_frames;  // 0x0
    int num_sections;  // 0x4
    unsigned int __pad_008;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[12];  // 0x10
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[10];  // 0x2C
    unsigned char u8_36;  // 0x36
    char __pad_37[1];  // 0x37
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int ComputeTransform(float * a1, float * a2, float a3, int a4);
    int Draw(unsigned int * a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
};

} // namespace gamemd
