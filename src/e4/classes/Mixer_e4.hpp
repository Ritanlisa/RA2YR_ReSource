// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Mixer {
    int Mixer_field_00;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ReleaseChannel(void *a1 = 0);
    static int RequestAllBuffers();
};

} // namespace gamemd
