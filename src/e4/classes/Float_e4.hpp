// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Float {
// --- flat members (BEGIN) ---
    char Float_field_00[4];  // 0x0
// --- flat members (END) ---
    double SubtractClamped(void * aP1, void * aP2);
    float Accumulate(float value, int index);
};

} // namespace gamemd
