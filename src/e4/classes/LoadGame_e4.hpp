// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadGame {
    int __pad_0;  // 0x0
    int LoadGame_field_0x04;  // 0x4
    int LoadGame_field_0x08;  // 0x8
    void* q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    void* q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int LoadGame_field_0x24;  // 0x24
    int LoadGame_field_0x28;  // 0x28
    int LoadGame_field_0x2C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static wchar_t * CleanupArray(void *aP1);
    static int ClearAllSlots(int aP1);
    int LoadBlock300(int a2);
    int LoadMagicAndAudio();
    int LoadPointArray(int a2);
    int LoadTriggerEvents();
    void RemoveItem(int a2, void *a2_1 = 0);
    int RestoreAudioState();
    char Start(void *a1 = 0, void *a2 = 0);
    static int LoadBlock68(LoadGame * aP1, int a2);
};

} // namespace gamemd
