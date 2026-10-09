// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MSVQAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
// --- flat members (END) ---
    MSVQAnim * QueryInterface(char a2);
    int Stub();
    void * GetFrameRect(int * a2);
    static unsigned int * ConstructMSVQAnimHidden(void * aP0, char ** aP1, int * aP2, int aP3, char aP4);  // 0x5ccc30
    unsigned int q000;  // 0x0 (offset-truth supply)
    unsigned int u32_28;  // 0x28 (offset-truth supply)
    unsigned char u32_2D;  // 0x2D (offset-truth supply)
};

} // namespace gamemd
