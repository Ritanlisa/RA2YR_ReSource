// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_Multiplayer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Multiplayer_DEF 1
struct Multiplayer {
// --- flat members (BEGIN) ---
    unsigned int u32_8;  // 0x8
    unsigned char u8_C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned int Screen;
    unsigned int u32_42;
    unsigned int u32_4;
    unsigned int Debug;
    unsigned int Timer;
    unsigned int Event;
// --- flat members (END) ---
    unsigned int * CopyDataArray(unsigned int *aP1);
    void * FindStartPositions();
    void ShowProgress(int a2);
};
#endif  // GAMEMD_G2_Multiplayer_DEF

} // namespace gamemd
