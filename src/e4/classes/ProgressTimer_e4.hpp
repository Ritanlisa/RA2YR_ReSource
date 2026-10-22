// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_CORE_OWNS_PROGRESSTIMER  // G42.17c: core owns in mixed TUs
#define GAMEMD_E4_OWNS_PROGRESSTIMER 1  // G42.36: order-independent pair
struct ProgressTimer {
    unsigned int __pad_0;  // 0x0
    unsigned int u32_4;  // 0x4
    int q008;  // 0x8
    char __pad_C[4];  // 0xC
    int q010;  // 0x10
    unsigned int q014;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void* GetValue(void *aP1);
    void* GetValue(void *aP1, void *a2 = 0);  // G42.39a static-call supply
};
#endif  // GAMEMD_CORE_OWNS_PROGRESSTIMER

} // namespace gamemd
