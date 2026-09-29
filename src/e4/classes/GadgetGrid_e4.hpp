// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GadgetGrid {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int q008;
    unsigned int u32_1E0;
    unsigned int u32_A;
// --- flat members (END) ---
    int InsertItem(ObjectClass * aP1);
    int RemoveItem(void* aP1, void *a1 = 0);
};

} // namespace gamemd
