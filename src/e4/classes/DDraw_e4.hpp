// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DDraw {
    char __pad_0[28];  // 0x0
    unsigned int u32_1C;  // 0x1C
    char __pad_20[8];  // 0x20
    unsigned int u32_28;  // 0x28
    char __pad_2C[20];  // 0x2C
    unsigned int q040;  // 0x40
    char __pad_44[32];  // 0x44
    unsigned int q064;  // 0x64
    char __pad_68[8];  // 0x68
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    char __pad_78[4];  // 0x78
    unsigned int u32_7C;  // 0x7C
    char __pad_80[128];  // 0x80
    unsigned int q100;  // 0x100
    char __pad_104[368];  // 0x104
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    char __pad_27C[940];  // 0x27C
    unsigned int q628;  // 0x628
    char __pad_62C[8248];  // 0x62C
    unsigned int u32_2664;  // 0x2664
    char __pad_2668[88472];  // 0x2668
    unsigned int u32_18000;  // 0x18000
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char CheckCapabilities();
    int CapabilityCheck();
    static int CleanupSurfaces(void *a1 = 0);
    int GetStatus(void *a1 = 0);
    int HandleSuspend();
    static void LogError(UINT, int a2);
    int ReleaseSurfaces(void *a1 = 0);
    static int WaitForIdle();
    void Init(void *a1 = 0, void *a2 = 0);
};

} // namespace gamemd
