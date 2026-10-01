// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RefCount {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
    char RefCount_field_04[4];  // 0x4
    unsigned int u32_8;
    unsigned int u32_C;
// --- flat members (END) ---
    int32_t Decrement(void *a1);
    int Increment(int a2);
};

} // namespace gamemd
