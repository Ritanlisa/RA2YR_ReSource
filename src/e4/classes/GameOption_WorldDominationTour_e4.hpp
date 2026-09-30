// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameOption_WorldDominationTour {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int q008;
    unsigned int q010;
    unsigned int q018;
    unsigned int u32_14;
    unsigned int u32_C;
    unsigned int GameOption_WorldDominationTour_field_0x04;
    unsigned int __pad_0;
// --- flat members (END) ---
    void * ConstructorWDTFlagOption_Create(int arg0, void * a2, int arg8, void * a4, ObjectClass * aP5);
};

} // namespace gamemd
