// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    unsigned int q00D;  // 0xD
    bool q00E;  // 0xE
    bool q00F;  // 0xF
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
// --- flat members (END) ---
    unsigned int * Constructor(int aP1, int a3, int a4);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(int aP1);
    int RemoveItem(int a2, int a3, char aP3, char a5, int a6);
    static int DrawSHPBackground(char *Source, int *a2, int a3, int a4, int a5, int a6, int a7);  // G57w10-S raw 0x00778210 (was C2597 interim stub)
    static double LoadAudio(...);  // C2597 interim stub
    unsigned int u32_3AC;  // 0x3AC (offset-truth)
    unsigned int u32_3B0;  // 0x3B0 (offset-truth)
    unsigned int u32_3B4;  // 0x3B4 (offset-truth)
    unsigned int u32_3B8;  // 0x3B8 (offset-truth)
    unsigned int u32_3BC;  // 0x3BC (offset-truth)
    unsigned int u32_3C4;  // 0x3C4 (offset-truth)
    unsigned int u32_3C8;  // 0x3C8 (offset-truth)
    unsigned char u32_3CD;  // 0x3CD (offset-truth)
    unsigned int u32_3D0;  // 0x3D0 (offset-truth)
    unsigned int u32_3D4;  // 0x3D4 (offset-truth)
};

} // namespace gamemd
