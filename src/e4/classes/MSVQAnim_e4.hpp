// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MSVQAnim {
    void* __pad_0;  // 0x0
    int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    MSVQAnim * QueryInterface(char a2);
    int Stub();
    void * GetFrameRect(int * a2);
    unsigned int * ConstructMSVQAnimHidden(char **aP1, int *aP2, int aP3, char aP3a);  // 0x5ccc30
};

} // namespace gamemd
