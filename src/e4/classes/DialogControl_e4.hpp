// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DialogControl {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_C;  // 0xC
    bool q00F;  // 0xF
// --- flat members (END) ---
    void* Image;  // 0x0 (no offset truth)
    int Hide();
    int IsHidden();
    int Show(void *a1, void *a2);
    unsigned int * Constructor();
};

} // namespace gamemd
