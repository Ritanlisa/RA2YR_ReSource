// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Turret {
// --- flat members (BEGIN) ---
    char Turret_field_00[4];  // 0x0
// --- flat members (END) ---
    AbstractClass * * LoadVoxelTurretAndBarrel();
    float * GetTransform(signed int a1, float * a2, unsigned int * a3);
    void *qB8;  // 0xB8 (offset-truth)
    void *qBC;  // 0xBC (offset-truth)
    void *qC0;  // 0xC0 (offset-truth)
    void *qC4;  // 0xC4 (offset-truth)
    unsigned char u32_CA1;  // 0xCA1 (offset-truth)

    unsigned char Matrix_B87[4];  /* Matrix */  // X10 supply (member_lookup)
    unsigned char String_BC7[4];  /* String */  // X10 supply (member_lookup)
    unsigned char WaveClass_B86[4];  /* WaveClass */  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    unsigned int u32_BC;  // X10 supply (member_lookup)
};

} // namespace gamemd
