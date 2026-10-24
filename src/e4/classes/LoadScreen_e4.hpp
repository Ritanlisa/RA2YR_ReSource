// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadScreen {
    void * Render_ph;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    int q014;  // 0x14
    char __pad_18[48];  // 0x18
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    char __pad_58[8];  // 0x58
    unsigned char u8_60;  // 0x60
    unsigned char u8_61;  // 0x61
    char __pad_62[2];  // 0x62
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned char u8_70;  // 0x70
    unsigned char u8_71;  // 0x71
    char __pad_72[2];  // 0x72
    unsigned int u32_74;  // 0x74
    char __pad_78[8];  // 0x78
    unsigned int u32_80;  // 0x80
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int RenderLoop(void *aP1);
    static unsigned int Render(int p0, int p1, int p2, double p3);  // x4:signals@0x643ae0
    int IsActive(void *a1 = 0);
};

} // namespace gamemd
