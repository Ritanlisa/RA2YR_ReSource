// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SyncDelay {
// --- flat members (BEGIN) ---
    void* q010;  // 0x10
    void* q034;  // 0x34
    unsigned int DDraw;
    unsigned int Timer;
    unsigned int Event;
// --- flat members (END) ---
    int Check(unsigned int * a2, void *a3 = 0, void *a1 = 0);
    signed int Start(void *a1 = 0);
};

} // namespace gamemd
