// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovieClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
// --- flat members (END) ---
    unsigned int ComputeTime();
    static int GetHeight(MovieClass * aP1);  // G57w10-S raw 0x00759F80 (was C2597 interim stub)
    static int GetWidth(MovieClass * aP1);  // G57w10-S raw 0x00759F70 (was C2597 interim stub)
    int ReadConfig(HWND aP1, int nIDDlgItem);
    static int RenderLoop(...);  // w16g4 C3861 static supply (raw 0x00759940)  // 0x5c23b0
    unsigned int q0080;  // 0x80 (offset-truth)
    unsigned int u32_148;  // 0x148 (offset-truth)
    unsigned int u32_78;  // 0x78 (offset-truth)
};

} // namespace gamemd
