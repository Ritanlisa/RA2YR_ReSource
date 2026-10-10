// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_RefCount_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_RefCount_DEF 1
struct RefCount {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
    char RefCount_field_04[4];  // 0x4
// --- flat members (END) ---
    int32_t Decrement(void *a1 = 0);
    int Increment(int a2);
    unsigned int u32_8;  // 0x8 (offset-truth)
    unsigned int u32_C;  // 0xC (offset-truth)
};
#endif  // GAMEMD_G2_RefCount_DEF

} // namespace gamemd
