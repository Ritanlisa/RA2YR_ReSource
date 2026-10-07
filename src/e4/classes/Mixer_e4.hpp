// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Mixer {
// --- flat members (BEGIN) ---
    unsigned int Mixer_field_00;  // 0x0
    unsigned int u32_4;
    unsigned int u32_8;
// --- flat members (END) ---
    int ReleaseChannel();
    static int RequestAllBuffers();
};

} // namespace gamemd
