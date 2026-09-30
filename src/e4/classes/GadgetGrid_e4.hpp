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
    unsigned char __pad_0;  // 0x0
    unsigned char GadgetGrid_field_0x04;  // 0x4
// --- flat members (END) ---
    int InsertItem(int a2);
    int RemoveItem(int a2);
};

} // namespace gamemd
