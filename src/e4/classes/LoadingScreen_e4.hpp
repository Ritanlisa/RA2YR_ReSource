// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadingScreen {
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

    unsigned int u32_80;  // X10 supply (member_lookup)
    int __pad_000;  // 0x0 [X30:type_map]
    int __pad_0;  // 0x0 [X30:type_map]
};

} // namespace gamemd
