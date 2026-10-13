// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Game;  // fix_fwd_type_supply

struct GameSettings {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    AbstractClass * ptr_10;  // 0x10
    AbstractClass * ptr_18;  // 0x18
    Game * ptr_24;  // 0x24
    Game * ptr_28;  // 0x28
    unsigned char Audio;  // 0x44
    unsigned char Audio_d;  // 0x45
    unsigned char Audio_2;  // 0x46
    AbstractClass * ptr_54;  // 0x54
// --- flat members (END) ---
    int Read(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    static char * FindFlagged();
    void * ParseNetworkAddress();
    int SetScoreVolume(int volume, void *a2, void *a3);

    float q056;  // X10 supply (member_lookup)
    unsigned int u32_4A;  // X10 supply (member_lookup)
};

} // namespace gamemd
