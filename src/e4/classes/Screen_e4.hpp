// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Screen {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int q00E;  // 0xE
    unsigned int q011;  // 0x11
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int u32_2C;  // 0x2C
    unsigned int q044;  // 0x44
    unsigned int q068;  // 0x68
    unsigned int q104;  // 0x104
// --- flat members (END) ---
    static int Capture(int a1, int a2, int a3, int a4);
    int CleanupTransitionObjects();
    int TransitionLoop(int a2);
    int TransitionRender(AnimClass * aP1, AnimClass * aP2, int a4);

    unsigned int u32_38;  // X10 supply (member_lookup)
};

} // namespace gamemd
