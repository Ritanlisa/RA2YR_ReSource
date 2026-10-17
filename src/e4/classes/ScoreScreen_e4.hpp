// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned int * Constructor(int aP1, int a3, int a4, void *a4_1 = 0);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(int aP1);
    int RemoveItem(int a2, int a3, char aP3, char a5, int a6);
    static int DrawSHPBackground(char *Source, int *a2, int a3, int a4, int a5, int a6, int a7);
    ObjectClass* u32_3AC;  // 0x3AC (offset-truth) [X30:type_map]
    unsigned int u32_3B0;  // 0x3B0 (offset-truth)
    unsigned int u32_3B4;  // 0x3B4 (offset-truth)
    unsigned int u32_3B8;  // 0x3B8 (offset-truth)
    unsigned int u32_3BC;  // 0x3BC (offset-truth)
    unsigned int u32_3C4;  // 0x3C4 (offset-truth)
    unsigned int u32_3C8;  // 0x3C8 (offset-truth)
    unsigned char u32_3CD;  // 0x3CD (offset-truth)
    unsigned int u32_3D0;  // 0x3D0 (offset-truth)
    unsigned int u32_3D4;  // 0x3D4 (offset-truth)

    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q014;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
unsigned int ScoreScreen_field_0x04;  // 0x4 [X35-L7 kind=unsigned int]
unsigned int ScoreScreen_field_0x08;  // 0x8 [X35-L7 kind=unsigned int]
    AbstractClass* ScoreScreen_field_0x14;  // 0x14 [X30:type_map]
    int __pad_0;  // 0x0 [X30:type_map]


    unsigned int ScoreScreen_field_0x0C;  // 0xC [X55 W3 supply (render vocab)]
    unsigned int ScoreScreen_field_0x10;  // 0x10 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
