// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PsyDom {
// --- flat members (BEGIN) ---
    void* q300;  // 0x300
    void* q324;  // 0x324
    void* q768;  // 0x768
    void* q804;  // 0x804
    void* q6294;  // 0x6294
    void* q8274;  // 0x8274
// --- flat members (END) ---
    AnimClass * * Update();
    bool IsActive();
    void Fire();
};

} // namespace gamemd
