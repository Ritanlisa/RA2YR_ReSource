// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadGame {
    int __pad_0;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    char q00C[1];  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    int q014;  // 0x14
    void * q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    char __pad_30[9552];  // 0x30
    unsigned int u32_2580;  // 0x2580
    char __pad_2584[4];  // 0x2584
    unsigned int u32_2588;  // 0x2588
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
