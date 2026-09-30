// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ObjectVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int ObjectVector_field_0x04;
    unsigned int ObjectVector_field_0x08;
    unsigned int ObjectVector_field_0x0C;
    unsigned int ObjectVector_field_0x10;
    unsigned int ObjectVector_field_0x14;
    unsigned int __pad_0;
// --- flat members (END) ---
    int Construct(IUnknown * aP1, IUnknown * aP2);
     double ddtor(...);  // C2597 interim stub
};

} // namespace gamemd
