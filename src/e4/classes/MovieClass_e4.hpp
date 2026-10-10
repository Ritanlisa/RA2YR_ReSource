// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovieClass {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned int ComputeTime();
    static int GetHeight(MovieClass * aP1);
    static int GetWidth(MovieClass * aP1);
    int ReadConfig(HWND aP1, int nIDDlgItem);
    static int RenderLoop(...);
    unsigned int q0080;  // 0x80 (offset-truth)
    unsigned int u32_148;  // 0x148 (offset-truth)
    unsigned int u32_78;  // 0x78 (offset-truth)
    static double q014(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
