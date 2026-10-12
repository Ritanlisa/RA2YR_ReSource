// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WaypointPathClass;  // fix_fwd_type_supply

struct WaypointClass {
// --- flat members (BEGIN) ---
    WaypointPathClass* paths;  // 0x0
    unsigned int WaypointClass_field_0;  // 0x30
    unsigned int WaypointClass_field_8;  // 0x38
    unsigned int WaypointClass_field_C;  // 0x3C
    unsigned int WaypointClass_field_10;  // 0x40
    unsigned int WaypointClass_field_14;  // 0x44
    unsigned char padding_18;  // 0x48
    unsigned int activePathIndex;  // 0x240
// --- flat members (END) ---
    WaypointPathClass * * FindOrAddPath(unsigned int * a2);
    static int FindOrCreate(int p0, unsigned int* p1, uint8_t* p2);  // x4:signals@0x502460
};

} // namespace gamemd
