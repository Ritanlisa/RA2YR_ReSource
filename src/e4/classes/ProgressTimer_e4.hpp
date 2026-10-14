// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_CORE_OWNS_PROGRESSTIMER  // G42.17c: core owns in mixed TUs
#define GAMEMD_E4_OWNS_PROGRESSTIMER 1  // G42.36: order-independent pair
struct ProgressTimer {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* GetValue(void *aP1);
    void* GetValue(void *aP1, void *a2 = 0);  // G42.39a static-call supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_CORE_OWNS_PROGRESSTIMER

} // namespace gamemd
