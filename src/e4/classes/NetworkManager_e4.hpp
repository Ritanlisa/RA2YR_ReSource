// G57w10 r5 D-classbody supply: NetworkManager (raw 0x6646C0; cast-of-qualified-name site form)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#ifndef GAMEMD_G2_NetworkManager_DEF  // W20L4: shared twin guard w/ network_ext.hpp (first-include wins)
#define GAMEMD_G2_NetworkManager_DEF 1
struct NetworkManager {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int u32_4;  // 0x4
    char __pad_8[8];  // 0x8
    unsigned int u32_10;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned char u8_18;  // 0x18
    char __pad_19[3];  // 0x19
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char RemovePlayer(int aP1, int a2);
    static unsigned int SetPlayerAddress(void *aP1, unsigned int a2, void *a3);
};
#endif  // GAMEMD_G2_NetworkManager_DEF
} // namespace gamemd
