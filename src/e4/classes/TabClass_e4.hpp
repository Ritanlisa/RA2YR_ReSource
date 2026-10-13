// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TabClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int DrawPower(void *a1);
    unsigned int * initStripClass();
    int DrawPower(void *a1, void * aGrey);

    int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
};

} // namespace gamemd
