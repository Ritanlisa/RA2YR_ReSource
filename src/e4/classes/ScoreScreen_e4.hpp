// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
    int __pad_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    int q014;  // 0x14
    unsigned int u32_18;  // 0x18
    int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned char u32_24;  // 0x24
    char __pad_25[7];  // 0x25
    unsigned int u32_2C;  // 0x2C
    char __pad_30[4];  // 0x30
    unsigned int q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    char __pad_40[4];  // 0x40
    unsigned int u32_44;  // 0x44
    char __pad_48[88];  // 0x48
    unsigned char q0A0;  // 0xA0
    char __pad_A1[479];  // 0xA1
    unsigned int q280;  // 0x280
    char __pad_284[296];  // 0x284
    unsigned int u32_3AC;  // 0x3AC
    unsigned int u32_3B0;  // 0x3B0
    unsigned int u32_3B4;  // 0x3B4
    unsigned char u32_3B8;  // 0x3B8
    char __pad_3B9[3];  // 0x3B9
    unsigned int u32_3BC;  // 0x3BC
    unsigned int q3C0;  // 0x3C0
    unsigned int u32_3C4;  // 0x3C4
    unsigned int u32_3C8;  // 0x3C8
    char __pad_3CC[4];  // 0x3CC
    unsigned int u32_3D0;  // 0x3D0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Constructor(int aP1, int a3, int a4, void *a4_1 = 0);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(int aP1);
    int RemoveItem(int a2, int a3, char aP3, char a5, int a6);
    static int DrawSHPBackground(char *Source, int *a2, int a3, int a4, int a5, int a6, int a7);
};

} // namespace gamemd
