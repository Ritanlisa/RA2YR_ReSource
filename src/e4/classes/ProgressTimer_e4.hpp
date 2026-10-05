// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_CORE_OWNS_PROGRESSTIMER  // G42.17c: core owns in mixed TUs
#define GAMEMD_E4_OWNS_PROGRESSTIMER 1  // G42.36: order-independent pair
struct ProgressTimer {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q010;  // 0x10
    void* q014;  // 0x14
    unsigned char *__pad_0;  // 0x0
    unsigned char ProgressTimer_field_0x8;  // 0x8
    unsigned char ProgressTimer_field_0x10;  // 0x10
    unsigned char ProgressTimer_field_0x14;  // 0x14
// --- flat members (END) ---
    void* GetValue(unsigned int *aP1);
    static void * GetValue(void * aP1, void * aP2);  // G42.39a static-call supply
};
#endif  // GAMEMD_CORE_OWNS_PROGRESSTIMER

} // namespace gamemd
