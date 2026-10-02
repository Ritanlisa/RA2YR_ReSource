// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeClass;  // fix_fwd_type_supply

struct Frame {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q018;  // 0x18
    void* q024;  // 0x24
// --- flat members (END) ---
    static TechnoTypeClass * Present(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8);
    TechnoTypeClass * Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
};

} // namespace gamemd
