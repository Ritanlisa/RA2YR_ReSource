// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WaypointPathClass;  // fix_fwd_type_supply

struct WaypointClass {
// --- flat members (BEGIN) ---
    WaypointPathClass* paths;  // 0x0
    unsigned int u32_34;  // 0x34
    unsigned char padding_18;  // 0x48
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_80;  // 0x80
    unsigned int u32_BC;  // 0xBC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned char q114;  // 0x114
    unsigned int q130;  // 0x130
    unsigned int q150;  // 0x150
// --- flat members (END) ---
    WaypointPathClass * * FindOrAddPath(unsigned int * a2);
    static int FindOrCreate(...);  // w16g4 C3861 static supply (raw 0x00502460)
};

} // namespace gamemd
