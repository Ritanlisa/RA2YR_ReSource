// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadingScreen {
    int __pad_0;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    char __pad_40[64];  // 0x40
    unsigned int u32_80;  // 0x80
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char * GetBackgroundImage(ScenarioClass * aP1);
    char * GetOverlayImage(ScenarioClass * aP1);
    static char FreeResources3();
    static char Init();
    static char FreeResources(void *a1);
    int GetColorScheme();
    int ReleaseAnimObjects(char * Source);
    static void * * LoadSHPs();
    static char CleanupObjects(void *a1);
    static void DestroyFileTrees();
    void FreeResources2();
};

} // namespace gamemd
