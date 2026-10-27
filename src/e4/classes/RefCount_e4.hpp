// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_RefCount_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_RefCount_DEF 1
struct RefCount {
    int m_RefCount;  // 0x0
    int RefCount_field_04;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Decrement();
    int Increment(int a2);
};
#endif  // GAMEMD_G2_RefCount_DEF

} // namespace gamemd
