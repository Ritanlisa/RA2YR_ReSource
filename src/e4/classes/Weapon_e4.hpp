// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Weapon {
// --- flat members (BEGIN) ---
    char Weapon_field_00[4];  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    void* q17CC;  // 0x17CC
    unsigned char q17D0;  // 0x17D0
    unsigned char q17D8;  // 0x17D8
    unsigned char q17DC;  // 0x17DC
    unsigned char q17E4;  // 0x17E4
    unsigned char q17E8;  // 0x17E8
    unsigned char q6098;  // 0x6098
    unsigned char q609C;  // 0x609C
    unsigned char q6104;  // 0x6104
    unsigned char q6108;  // 0x6108
// --- flat members (END) ---
    AbstractClass * * DestroyTerrain(int * a1, IUnknown * aP2, InfantryClass * aP3, IUnknown * aP4);
};

} // namespace gamemd
