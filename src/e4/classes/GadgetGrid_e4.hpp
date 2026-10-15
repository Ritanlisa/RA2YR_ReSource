// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GadgetGrid {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int InsertItem(int a2);
    int RemoveItem(int a2, void *a2_1 = 0);

    unsigned char __pad_00C;  // X10 supply (member_lookup)
    unsigned int u32_F0;  // X10 supply (member_lookup)
    int __pad_000;  // 0x0 [X30:type_map]
    int GadgetGrid_field_0x04;  // 0x4 [X30:member_lookup]
    int __pad_0;  // 0x0 [X30:type_map]
};

} // namespace gamemd
