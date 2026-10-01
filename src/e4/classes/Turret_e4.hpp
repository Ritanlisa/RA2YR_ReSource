// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Turret {
// --- flat members (BEGIN) ---
    char Turret_field_00[4];  // 0x0
    unsigned int q03C6;
    unsigned int u32_104;
    unsigned int u32_107;
    unsigned int u32_109;
    unsigned int u32_B8;
    unsigned int u32_BC;
    unsigned int u32_C0;
    unsigned int u32_C4;
    unsigned int u32_C84;
    unsigned char u8_CA1;
// --- flat members (END) ---
struct AbstractClass;  // fix_fwd_type_supply
    AbstractClass * * LoadVoxelTurretAndBarrel();
    float * GetTransform(signed int a1, float * a2, unsigned int * a3);
};

} // namespace gamemd
