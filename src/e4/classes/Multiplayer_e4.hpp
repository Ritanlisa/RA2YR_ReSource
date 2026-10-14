// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_Multiplayer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Multiplayer_DEF 1
struct Multiplayer {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u8_C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned int u32_34;  // 0x34
    unsigned int u32_404;  // 0x404
    unsigned int qA13;  // 0xA13
    unsigned int q1028;  // 0x1028
    unsigned int u32_284C;  // 0x284C
// --- flat members (END) ---
    unsigned int * CopyDataArray(unsigned int *aP1, void *a2 = 0);
    void * FindStartPositions(void *a1 = 0);
    void ShowProgress(int a2);
    unsigned char u32_42;  // 0x42 (offset-truth)
    void Screen();  // plateau: def-aligned C2039/C2660

    unsigned char q025;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_Multiplayer_DEF

} // namespace gamemd
