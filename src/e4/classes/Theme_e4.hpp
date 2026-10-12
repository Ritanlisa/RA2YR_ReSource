// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Theme {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    void* audioSample;  // 0x2C
// --- flat members (END) ---
    bool IsPlaying(void *a1 = 0);
    int QueueSong(int aP1, void *a1 = 0);
    int Stop(char aP1, void *a1 = 0);
    unsigned char ptr_41;  // 0x41 (offset-truth)
    void * ptr_44;  // 0x44 (offset-truth)
};

} // namespace gamemd
