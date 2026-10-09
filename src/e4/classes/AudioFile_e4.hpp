// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_AudioFile_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioFile_DEF 1
struct AudioFile {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    int GetCallback();
    static void Stop(void * aP0);  // G42.33 b9 static-form (call site 0x6c9079)
};
#endif  // GAMEMD_G2_AudioFile_DEF

} // namespace gamemd
