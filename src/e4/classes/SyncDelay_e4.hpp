// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SyncDelay {
    char __pad_0[16];  // 0x0
    unsigned int q010;  // 0x10
    char __pad_14[32];  // 0x14
    void * q034;  // 0x34
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool Check(unsigned int * a2, void *a2_1 = 0, void *a3 = 0);
    signed int Start(void *a1, void *a2);
};

} // namespace gamemd
