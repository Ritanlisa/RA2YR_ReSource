// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Mixer {
// --- flat members (BEGIN) ---
    char Mixer_field_00[4];  // 0x0
// --- flat members (END) ---
    int ReleaseChannel();
    static int RequestAllBuffers();
    unsigned int u32_4;  // 0x4 (offset-truth supply)
    unsigned int u32_8;  // 0x8 (offset-truth supply)
};

} // namespace gamemd
