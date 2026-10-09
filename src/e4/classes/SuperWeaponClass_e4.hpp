// G57w10 D-类体 supply: SuperWeaponClass (raw 0x6DA740; canon size=20)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SuperWeaponClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
// --- flat members (END) ---
    unsigned char q000[20];  // 0x0 (canon size filler)
    static int UpdateAll(void *aP1);
    static int LoadFromSaveStream(...);
    static int FindByName(...);  // w16g4 C3861 static supply (raw 0x00773030)  // w16g4 C3861 static supply (raw 0x00539890)  // 0x6DA740 raw: int UpdateAll(SuperWeaponClass*)
};
} // namespace gamemd
