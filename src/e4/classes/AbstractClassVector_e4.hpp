// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AbstractClassVector {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);
    int Construct(int aP1, int aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int Write(int a2);
     void ddtor(AbstractClassVector * aP1);
};

} // namespace gamemd
