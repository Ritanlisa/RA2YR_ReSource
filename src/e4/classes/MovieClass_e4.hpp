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
    static int RenderLoop(char *p_this, int a2, char a3);  // x4:ida@0x759940
    unsigned int q0080;  // 0x80 (offset-truth)
    unsigned int u32_148;  // 0x148 (offset-truth)
    unsigned int u32_78;  // 0x78 (offset-truth)

    int q014;  // X10 supply (member_lookup)
};

} // namespace gamemd
