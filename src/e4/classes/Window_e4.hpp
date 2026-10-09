// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Window {
// --- flat members (BEGIN) ---
    char Window_field_00[4];  // 0x0
// --- flat members (END) ---
    char ClampToScreen(int * a1);
    int IsVisible();
    unsigned int u32_18;  // 0x18 (offset-truth supply)
    unsigned char u32_19;  // 0x19 (offset-truth supply)
};

} // namespace gamemd
