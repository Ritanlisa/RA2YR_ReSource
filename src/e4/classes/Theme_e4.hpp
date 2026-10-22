// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Theme {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int u32_0;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    unsigned int u32_8;  // 0x8
    char __pad_C[5];  // 0xC
    unsigned int u32_11;  // 0x11
    char __pad_15[23];  // 0x15
    void * audioSample;  // 0x2C
    char __pad_30[17];  // 0x30
    unsigned char ptr_41;  // 0x41
    char __pad_42[2];  // 0x42
    void * ptr_44;  // 0x44
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool IsPlaying(void *a1 = 0);
    int QueueSong(int aP1, void *a2 = 0);
    int Stop(char aP1, void *a2 = 0);
#pragma pack(pop)
};

} // namespace gamemd
