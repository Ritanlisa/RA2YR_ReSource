// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WaypointClass {
// --- flat members (BEGIN) ---
    WaypointPathClass* paths;  // 0x0
    unsigned int WaypointClass_field_0;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int WaypointClass_field_8;  // 0x38
    unsigned int WaypointClass_field_C;  // 0x3C
    unsigned int WaypointClass_field_10;  // 0x40
    unsigned int WaypointClass_field_14;  // 0x44
    unsigned char padding_18;  // 0x48
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_80;  // 0x80
    bool q083;  // 0x83
    unsigned int u32_BC;  // 0xBC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned char q114;  // 0x114
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q150;  // 0x150
    unsigned int u32_20C;  // 0x20C
    unsigned int activePathIndex;  // 0x240
// --- flat members (END) ---
struct WaypointPathClass;  // fix_fwd_type_supply
    WaypointPathClass * * FindOrAddPath(unsigned int * a2);
};

} // namespace gamemd
