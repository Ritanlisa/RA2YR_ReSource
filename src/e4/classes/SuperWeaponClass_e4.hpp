// G57w10 D-类体 supply: SuperWeaponClass (raw 0x6DA740; canon size=20)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SuperWeaponClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    char __pad_14[48];  // 0x14
    unsigned int u32_44;  // 0x44
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int UpdateAll(void *aP1);
    static int LoadFromSaveStream(SuperWeaponClass *p_this);  // x4:ida@0x539890
    static int FindByName(SuperWeaponClass *p_this);  // x4:ida@0x773030
};
} // namespace gamemd
