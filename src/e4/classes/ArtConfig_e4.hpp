// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ArtConfig {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int u32_8;  // 0x8
    int u32_C;  // 0xC
    INIClass * ptr_10;  // 0x10
    void* __pad_014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[4];  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned char u8_38;  // 0x38
    char __pad_39[3];  // 0x39
    unsigned int u32_3C;  // 0x3C
    char __pad_40[4];  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    char __pad_54[16];  // 0x54
    unsigned int u32_64;  // 0x64
    char __pad_68[4];  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    char __pad_74[4];  // 0x74
    unsigned int u32_78;  // 0x78
    char __pad_7C[68];  // 0x7C
    unsigned int u32_C0;  // 0xC0
    unsigned int u32_C4;  // 0xC4
    char __pad_C8[4];  // 0xC8
    unsigned int u32_CC;  // 0xCC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int validateConfig(Selection_WorldDominationTour * aP1, int a3, Selection_WorldDominationTour * aP3);
    unsigned int * loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5);  // 0x5cc760
};

} // namespace gamemd
