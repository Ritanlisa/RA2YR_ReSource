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
    unsigned int *__pad_0;
    unsigned int u32_1C;
    unsigned int u32_1E;
    unsigned int u32_40;
    unsigned int u32_5C;
    unsigned int u32_64;
    unsigned int u32_68;
    unsigned int u32_90;
    void* Image;  // 0x0 (no offset truth)
// --- flat members (END) ---
    int Hide();
    int IsHidden();
    void Show(void *a1, void *a2);
    unsigned int * Constructor();
};

} // namespace gamemd
