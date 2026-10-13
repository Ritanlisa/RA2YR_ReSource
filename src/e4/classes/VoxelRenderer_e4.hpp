// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxelRenderer {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int InitializeBuffers(int a2, unsigned int * a3, int a4);
    int ProjectVertex(float a2, float a3, float a4, char a5);
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_70;  // 0x70 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};

} // namespace gamemd
