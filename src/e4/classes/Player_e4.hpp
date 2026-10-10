// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Player {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_54;  // 0x54
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
// --- flat members (END) ---
    int IsObserver(void *a1 = 0);
    void BuildListString(wchar_t * Destination);
wchar_t * FindByName(wchar_t * String2);
    void RandomAssign();  // 0x69b8c0
};

} // namespace gamemd
