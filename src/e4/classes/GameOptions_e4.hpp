// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameOptions {
    WinModemClass* __pad_000;  // 0x0
    int GameOptions_field_0x04;  // 0x4
    int GameOptions_field_0x08;  // 0x8
    int GameOptions_field_0x0C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int GetEntry();
    char GameSpeedChanged();
    int __thiscall SaveLoad(int *a2);
};

} // namespace gamemd
