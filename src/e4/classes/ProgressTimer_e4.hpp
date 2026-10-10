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
    static void * GetValue(void * aP1, void * aP2);  // G42.39a static-call supply
    static double ProgressTimer_field_0x10(...);  // plateau: C2039/C3861 stub
    static double ProgressTimer_field_0x14(...);  // plateau: C2039/C3861 stub
    static double ProgressTimer_field_0x8(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
};
#endif  // GAMEMD_CORE_OWNS_PROGRESSTIMER

} // namespace gamemd
