// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadGame {
    static wchar_t * CleanupArray(void *aP1);  // 0x54E6F0 raw: wchar_t* __thiscall LoadGame::CleanupArray(LoadGame*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int ClearAllSlots(int aP1);  // 0x413800 raw: int __thiscall LoadGame::ClearAllSlots(LoadGame*) site int form (g_CellClassManager)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int LoadGame_field_0x04;
    unsigned int LoadGame_field_0x10;
    unsigned int *__pad_0;
    unsigned char LoadGame_field_0x0C;  // 0xC
    unsigned char LoadGame_field_0x14;  // 0x14
    unsigned char LoadGame_field_0x18;  // 0x18
    unsigned char LoadGame_field_0x1C;  // 0x1C
    unsigned char LoadGame_field_0x20;  // 0x20
// --- flat members (END) ---
    int LoadBlock300(int a2);
    int LoadMagicAndAudio();
    int LoadPointArray(int a2);
    int LoadTriggerEvents();
    char RemoveItem(int a2);
    int RestoreAudioState();
    char Start();
    static int LoadBlock68(LoadGame * aP1, int a2);  // G57w10-S raw 0x004C6320 (was C2597 interim stub)
};

} // namespace gamemd
