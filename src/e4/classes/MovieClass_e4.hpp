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
    unsigned int q0080;
    unsigned int u32_148;
    unsigned int u32_78;
// --- flat members (END) ---
    unsigned int ComputeTime();
    static double GetHeight(...);  // C2597 interim stub
    static double GetWidth(...);  // C2597 interim stub
    int ReadConfig(HWND hDlg, int nIDDlgItem);  // 0x5c23b0
};

} // namespace gamemd
