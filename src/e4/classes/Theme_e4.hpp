// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Theme {
// --- flat members (BEGIN) ---
    unsigned int q4;  // 0x4
    unsigned int u32_8;  // 0x8
    void* q044;  // 0x44
    void* q068;  // 0x68
    void* q104;  // 0x104
    void* ptr_4;
    unsigned int Audio;
    unsigned int ThemeClass;
// --- flat members (END) ---
    bool IsPlaying();
    int QueueSong(int aP1);
    int Stop(char aP1);
};

} // namespace gamemd
