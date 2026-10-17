// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovieClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int MovieClass_field_0x04;  // 0x4
    int MovieClass_field_0x08;  // 0x8
    int MovieClass_field_0x0C;  // 0xC
    int MovieClass_field_0x10;  // 0x10
    int q014;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int ComputeTime();
    static int GetHeight(MovieClass * aP1);
    static int GetWidth(MovieClass * aP1);
    int ReadConfig(HWND aP1, int nIDDlgItem);
    static int RenderLoop(char *p_this, int a2, char a3);  // x4:ida@0x759940
};

} // namespace gamemd
