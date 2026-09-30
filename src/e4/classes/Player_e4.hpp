// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Player {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    unsigned int u32_54;  // 0x54
// --- flat members (END) ---
    void IsObserver();
    void BuildListString(void *a1 = 0);
    wchar_t * FindByName(void *a1 = 0);
};

} // namespace gamemd
