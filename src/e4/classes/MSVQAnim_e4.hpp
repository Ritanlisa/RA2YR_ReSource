// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MSVQAnim {
    void * ptr_0;  // 0x0
    int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char u8_2C;  // 0x2C
    unsigned char u32_2D;  // 0x2D
    char __pad_2E[2];  // 0x2E
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    MSVQAnim * QueryInterface(char a2);
    int Stub();
    void * GetFrameRect(int * a2);
    unsigned int * ConstructMSVQAnimHidden(char **aP1, int *aP2, int aP3, char aP3a);  // 0x5ccc30
};

} // namespace gamemd
