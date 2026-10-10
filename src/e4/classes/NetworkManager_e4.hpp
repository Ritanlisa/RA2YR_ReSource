// G57w10 r5 D-classbody supply: NetworkManager (raw 0x6646C0; cast-of-qualified-name site form)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#ifndef GAMEMD_G2_NetworkManager_DEF  // W20L4: shared twin guard w/ network_ext.hpp (first-include wins)
#define GAMEMD_G2_NetworkManager_DEF 1
struct NetworkManager {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (carrier filler)
    static char RemovePlayer(int aP1, int a2);
    static unsigned int SetPlayerAddress(void *aP1, unsigned int a2, void *a3);
};
#endif  // GAMEMD_G2_NetworkManager_DEF
} // namespace gamemd
