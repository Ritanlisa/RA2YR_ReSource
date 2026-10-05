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
    unsigned int q18000;
    unsigned int Debug;
// --- flat members (END) ---
    char CheckCapabilities();
    int CapabilityCheck();
    int CleanupSurfaces();
    int GetStatus();
    int HandleSuspend();
    void LogError(UINT, int a2);
    int ReleaseSurfaces();
    int WaitForIdle();
    void Init();
};

} // namespace gamemd
