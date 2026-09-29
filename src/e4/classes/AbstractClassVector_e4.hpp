// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AbstractClassVector {
// --- flat members (BEGIN) ---
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int m_1;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    int Read(unsigned int * a2, void *a1 = 0);
    unsigned int * Construct(void* aP1, void* aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    unsigned int Write(int a2);
     double ddtor(...);  // C2597 interim stub
};

} // namespace gamemd
