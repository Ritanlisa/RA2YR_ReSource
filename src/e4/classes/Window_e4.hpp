// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Window {
    int Window_field_00;  // 0x0
    char __pad_4[20];  // 0x4
    unsigned char u32_18;  // 0x18
    unsigned char u32_19;  // 0x19
    char __pad_1A[2];  // 0x1A
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char ClampToScreen(int * a1);
    int IsVisible();
};

} // namespace gamemd
