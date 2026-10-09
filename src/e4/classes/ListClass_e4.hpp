// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
    unsigned int u32_18;  // 0x18
    unsigned int q019;  // 0x19
    unsigned int q01A;  // 0x1A
    bool q01B;  // 0x1B
    unsigned int u32_1C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
// --- flat members (END) ---
    int Destruct();
    int Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x557230
    ControlClass * * CheckListClass__vt_19_(char a2, int a3, unsigned int * a4);
    unsigned int q000;  // 0x0 (offset-truth)
};

} // namespace gamemd
