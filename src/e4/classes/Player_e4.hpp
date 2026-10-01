// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Player {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    unsigned int u32_54;  // 0x54
// --- flat members (END) ---
    void IsObserver(void *a1);
    void BuildListString(wchar_t * Destination);
    void FindByName(wchar_t * String2);
    void RandomAssign();  // 0x69b8c0
};

} // namespace gamemd
