// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StaticButtonClass {
    int __pad_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int u32_8;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned int u32_24;  // 0x24
    char __pad_28[8];  // 0x28
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    StaticButtonClass * QueryInterface(char a2);
    static void Draw(void * aP0, wchar_t * aP1, int aP2);
};

} // namespace gamemd
