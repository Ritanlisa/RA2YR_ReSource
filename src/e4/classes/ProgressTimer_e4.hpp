// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ProgressTimer {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q010;  // 0x10
    void* q014;  // 0x14
    unsigned int vt_slot_24;
    unsigned int vt_slot_28;
// --- flat members (END) ---
    unsigned int * GetValue(void * aP1);
};

} // namespace gamemd
