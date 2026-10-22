// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_Multiplayer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Multiplayer_DEF 1
struct Multiplayer {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int u32_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u8_C;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[10];  // 0xE
    unsigned char q018;  // 0x18
    char __pad_19[11];  // 0x19
    unsigned char q024;  // 0x24
    unsigned char q025;  // 0x25
    char __pad_26[14];  // 0x26
    unsigned int u32_34;  // 0x34
    char __pad_38[10];  // 0x38
    unsigned char u32_42;  // 0x42
    char __pad_43[961];  // 0x43
    unsigned int u32_404;  // 0x404
    char __pad_408[1547];  // 0x408
    unsigned int qA13;  // 0xA13
    char __pad_A17[1553];  // 0xA17
    unsigned int q1028;  // 0x1028
    char __pad_102C[6176];  // 0x102C
    unsigned int u32_284C;  // 0x284C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * CopyDataArray(unsigned int *aP1, void *a2 = 0);
    void * FindStartPositions(void *a1 = 0);
    void ShowProgress(int a2);
    void Screen();  // plateau: def-aligned C2039/C2660
#pragma pack(pop)
};
#endif  // GAMEMD_G2_Multiplayer_DEF

} // namespace gamemd
