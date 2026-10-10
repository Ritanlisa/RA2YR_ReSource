// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply

struct PsyDom {
// --- flat members (BEGIN) ---
    void* q300;  // 0x300
    void* q324;  // 0x324
    void* q768;  // 0x768
    void* q804;  // 0x804
    void* q6294;  // 0x6294
// --- flat members (END) ---
    AnimClass * * Update(void *a1, void *a2, void *a3, void *a4);
    static bool IsActive();
    void Fire();
};

} // namespace gamemd
