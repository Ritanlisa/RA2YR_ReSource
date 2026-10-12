// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadGame {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static wchar_t * CleanupArray(void *aP1);
    static int ClearAllSlots(int aP1);
    int LoadBlock300(int a2);
    int LoadMagicAndAudio();
    int LoadPointArray(int a2);
    int LoadTriggerEvents();
    char RemoveItem(int a2, void *a1 = 0);
    int RestoreAudioState();
    char Start(void *a1 = 0, void *a2 = 0);
    static int LoadBlock68(LoadGame * aP1, int a2);
};

} // namespace gamemd
