// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Screen {
    unsigned int u32_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int q008;  // 0x8
    char u32_C[2];  // 0xC
    char q00E[3];  // 0xE
    char q011[3];  // 0x11
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[8];  // 0x30
    unsigned int u32_38;  // 0x38
    char __pad_3C[8];  // 0x3C
    unsigned int q044;  // 0x44
    char __pad_48[32];  // 0x48
    unsigned int q068;  // 0x68
    char __pad_6C[152];  // 0x6C
    unsigned int q104;  // 0x104
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Capture(int a1, int a2, int a3, int a4);
    int CleanupTransitionObjects();
    int TransitionLoop(int a2);
    int TransitionRender(AnimClass * aP1, AnimClass * aP2, int a4);
};

} // namespace gamemd
