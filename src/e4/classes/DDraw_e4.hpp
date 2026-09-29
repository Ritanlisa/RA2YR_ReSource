// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DDraw {
// --- flat members (BEGIN) ---
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_28;  // 0x28
    unsigned int q040;  // 0x40
    unsigned int q064;  // 0x64
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned int q100;  // 0x100
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned int q628;  // 0x628
    unsigned int u32_2664;  // 0x2664
    unsigned int q18000;
    unsigned int Debug;
// --- flat members (END) ---
    char CheckCapabilities();
    int CapabilityCheck();
    int CleanupSurfaces();
    int GetStatus();
    int HandleSuspend();
    int LogError();
    int ReleaseSurfaces(void *a1 = 0);
    int WaitForIdle(void *a1 = 0);
    void Init(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);
};

} // namespace gamemd
