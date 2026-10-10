// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelAnim {
// --- flat members (BEGIN) ---
    int num_frames;  // 0x0
    int num_sections;  // 0x4
// --- flat members (END) ---
    static int ComputeTransform(float * a1, float * a2, float a3, int a4);
    int Draw(unsigned int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
};

} // namespace gamemd
