// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadingScreen {
    int __pad_0;  // 0x0
    int LoadingScreen_field_0x04;  // 0x4
    int LoadingScreen_field_0x08;  // 0x8
    int LoadingScreen_field_0x0C;  // 0xC
    int LoadingScreen_field_0x10;  // 0x10
    int LoadingScreen_field_0x14;  // 0x14
    int LoadingScreen_field_0x18;  // 0x18
    int LoadingScreen_field_0x1C;  // 0x1C
    int LoadingScreen_field_0x20;  // 0x20
    int LoadingScreen_field_0x24;  // 0x24
    int LoadingScreen_field_0x28;  // 0x28
    int LoadingScreen_field_0x2C;  // 0x2C
    int LoadingScreen_field_0x30;  // 0x30
    int LoadingScreen_field_0x34;  // 0x34
    int LoadingScreen_field_0x38;  // 0x38
    int LoadingScreen_field_0x3C;  // 0x3C
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
