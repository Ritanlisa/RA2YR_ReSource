// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UnitTypeVector {
    unsigned int __pad_0;  // 0x0
    int ptr_4;  // 0x4
    unsigned int __pad_008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Construct2(int a2, int a3, void *a3_2);
    unsigned int * ConstructUnitTypeVectorClass(int a2, int a3);
    static unsigned int * Construct(void *aP1, int a2, int a3);
};

} // namespace gamemd
