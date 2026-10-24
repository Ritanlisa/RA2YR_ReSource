// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Turret {
    int Turret_field_00;  // 0x0
    char __pad_4[180];  // 0x4
    unsigned int qB8;  // 0xB8
    unsigned int qBC;  // 0xBC
    unsigned int qC0;  // 0xC0
    unsigned int qC4;  // 0xC4
    char __pad_C8[304];  // 0xC8
    unsigned int AbstractClass_1F8;  // 0x1F8
    char __pad_1FC[2725];  // 0x1FC
    unsigned char u32_CA1;  // 0xCA1
    char __pad_CA2[2];  // 0xCA2
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * LoadVoxelTurretAndBarrel();
    float * GetTransform(signed int a1, float * a2, unsigned int * a3);
};

} // namespace gamemd
