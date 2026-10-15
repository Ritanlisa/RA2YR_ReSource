// G57w10 D-类体 supply: SuperWeaponClass (raw 0x6DA740; canon size=20)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SuperWeaponClass {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[20];  // 0x0 (canon size filler)
    static int UpdateAll(void *aP1);
    static int LoadFromSaveStream(SuperWeaponClass *p_this);  // x4:ida@0x539890
    static int FindByName(SuperWeaponClass *p_this);  // x4:ida@0x773030
    unsigned char __pad_000;  // 0x0 [X30:canon]
};
} // namespace gamemd
