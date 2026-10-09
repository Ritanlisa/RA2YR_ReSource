// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameOptions {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
// --- flat members (END) ---
    static int GetEntry();  // 0x777B50 raw: int GameOptions_GetEntry() [cdecl no-this]
    char GameSpeedChanged();
    int __thiscall SaveLoad(int *a2);
};

} // namespace gamemd
