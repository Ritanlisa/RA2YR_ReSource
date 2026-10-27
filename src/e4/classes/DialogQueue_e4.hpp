// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DialogQueue {
    void* __pad_000;  // 0x0
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int PushEntry(void *a1, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int RemoveEntry(void *a1 = 0);
};

} // namespace gamemd