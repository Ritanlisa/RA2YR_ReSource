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
    unsigned int u32_1C;  // 0x1C (offset-truth supply)
    unsigned char u32_1E;  // 0x1E (offset-truth supply)
    unsigned int u32_40;  // 0x40 (offset-truth supply)
    unsigned int u32_5C;  // 0x5C (offset-truth supply)
    unsigned int u32_64;  // 0x64 (offset-truth supply)
    unsigned int u32_68;  // 0x68 (offset-truth supply)
    unsigned int u32_90;  // 0x90 (offset-truth supply)
};

} // namespace gamemd
