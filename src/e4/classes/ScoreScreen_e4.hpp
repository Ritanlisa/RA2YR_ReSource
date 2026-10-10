// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned int * Constructor(int aP1, int a3, int a4, void *a1 = 0);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(int aP1);
    int RemoveItem(int a2, int a3, char aP3, char a5, int a6);
    static int DrawSHPBackground(char *Source, int *a2, int a3, int a4, int a5, int a6, int a7);
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
    static double ScoreScreen_field_0x04(...);  // plateau: C2039/C3861 stub
    static double ScoreScreen_field_0x08(...);  // plateau: C2039/C3861 stub
    static double ScoreScreen_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double ScoreScreen_field_0x10(...);  // plateau: C2039/C3861 stub
    static double ScoreScreen_field_0x14(...);  // plateau: C2039/C3861 stub
    static double ScoreScreen_field_0x18(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q018(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
