// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeClass;  // fix_fwd_type_supply

struct Frame {
    char __pad_0[4];  // 0x0
    unsigned int q004;  // 0x4
    void * q008;  // 0x8
    void * q00C;  // 0xC
    char __pad_10[8];  // 0x10
    void * q018;  // 0x18
    char __pad_1C[8];  // 0x1C
    void * q024;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static TechnoTypeClass * Present(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8);
    TechnoTypeClass * Init(void *a1 = 0, void *a2 = 0);
};

} // namespace gamemd
