// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DialogControl {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* Image;  // 0x0 (no offset truth)
    int Hide();
    int IsHidden();
    int Show(void *a1, void *a2);
    unsigned int * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    unsigned int u32_1C;  // 0x1C (offset-truth)
    unsigned char u32_1E;  // 0x1E (offset-truth)
    unsigned int u32_40;  // 0x40 (offset-truth)
    unsigned int u32_5C;  // 0x5C (offset-truth)
    unsigned int u32_64;  // 0x64 (offset-truth)
    unsigned int u32_68;  // 0x68 (offset-truth)
    unsigned int u32_90;  // 0x90 (offset-truth)
};

} // namespace gamemd
