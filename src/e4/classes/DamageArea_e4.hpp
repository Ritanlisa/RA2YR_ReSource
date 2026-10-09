// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DamageArea {
// --- flat members (BEGIN) ---
    char DamageArea_field_00[4];  // 0x0
// --- flat members (END) ---
    int ApplyScatter();
    int CheckOccupancyEligibility();
    unsigned int * CalcScatterOffset(unsigned int * a2, int16_t * a3);
};

} // namespace gamemd
