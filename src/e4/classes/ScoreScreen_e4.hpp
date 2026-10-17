// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
    int __pad_0;  // 0x0
    unsigned int ScoreScreen_field_0x04;  // 0x4
    unsigned int ScoreScreen_field_0x08;  // 0x8
    unsigned int ScoreScreen_field_0x0C;  // 0xC
    unsigned int ScoreScreen_field_0x10;  // 0x10
    AbstractClass* ScoreScreen_field_0x14;  // 0x14
    unsigned int u32_18;  // 0x18
    int ScoreScreen_field_0x1C;  // 0x1C
    int ScoreScreen_field_0x20;  // 0x20
    int ScoreScreen_field_0x24;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Constructor(int aP1, int a3, int a4, void *a4_1 = 0);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(int aP1);
    int RemoveItem(int a2, int a3, char aP3, char a5, int a6);
    static int DrawSHPBackground(char *Source, int *a2, int a3, int a4, int a5, int a6, int a7);
};

} // namespace gamemd
