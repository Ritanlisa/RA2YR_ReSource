// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_AudioFile_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioFile_DEF 1
struct AudioFile {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[196];  // 0x10
    unsigned int u32_D4;  // 0xD4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetCallback(void *a1 = 0);
    static void Stop(void * aP0);
};
#endif  // GAMEMD_G2_AudioFile_DEF

} // namespace gamemd
