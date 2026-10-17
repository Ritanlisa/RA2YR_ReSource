// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DialogClass {
    char __pad_0[20];  // 0x0
    unsigned int u32_14;  // 0x14
    char __pad_18[8];  // 0x18
    unsigned int q020;  // 0x20
    char __pad_24[4];  // 0x24
    unsigned int q028;  // 0x28
    char __pad_2C[8];  // 0x2C
    void* q034;  // 0x34
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * CopyTemplateStruct(void *aP1, void *a2);
    static ATOM RegisterWinClasses();
    int GetFlag(void *a1);
    static int Reposition(int hWnd, int a2);
};

} // namespace gamemd
