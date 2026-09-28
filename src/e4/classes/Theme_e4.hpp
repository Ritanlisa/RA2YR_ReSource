// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Theme {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u8_11;  // 0x11
    void* audioSample;  // 0x2C
    void* q044;  // 0x44
    void* q068;  // 0x68
    void* q104;  // 0x104
// --- flat members (END) ---
    int IsPlaying();
    int QueueSong(IUnknown * aP1);
    int Stop(ObjectClass * aP1);
};

} // namespace gamemd
