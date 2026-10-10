// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SyncDelay {
// --- flat members (BEGIN) ---
    void* q010;  // 0x10
    void* q034;  // 0x34
// --- flat members (END) ---
    bool Check(unsigned int *a2, void *a1 = 0, void *a3 = 0);
    signed int Start(void *a1, void *a2);
};

} // namespace gamemd
