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
    void* ;  // 0xB8 (offset-truth)
    void* ;  // 0xBC (offset-truth)
    void* ;  // 0xC0 (offset-truth)
    void* ;  // 0xC4 (offset-truth)
    unsigned char u32_CA1;  // 0xCA1 (offset-truth)
};

} // namespace gamemd
