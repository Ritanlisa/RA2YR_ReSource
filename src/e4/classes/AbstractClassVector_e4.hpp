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
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
    unsigned char *__pad_0;  // 0x0
    unsigned char AbstractClassVector_field_0x04;  // 0x4
    unsigned char AbstractClassVector_field_0x08;  // 0x8
    unsigned char AbstractClassVector_field_0x0C;  // 0xC
// --- flat members (END) ---
    int Read(unsigned int * a2, void *a2);
    int Construct(IUnknown * aP1, IUnknown * aP2, void *a3, void *a4, void *a5, void *a6);
    unsigned int Write(int a2);
     double ddtor(...);  // C2597 interim stub
};

} // namespace gamemd
