// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameSetup {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_8;  // 0x8
// --- flat members (END) ---
    static void DisplayPlayers(void *aP1);
    AbstractClass * * WriteINI(CCINIClass * aP1, unsigned char * Block);
    int LookupDialogHash();
    static char FormatToString(GameSetup * aP1, uint8_t *Block, char *a3, int a4, int a5, int a6);
    wchar_t * GetColorTooltip(void *a1 = 0);  // 0x4e42a0
    unsigned int q0104;  // 0x104 (offset-truth)

    unsigned char __pad_00C;  // X10 supply (csp_canon_members)
    unsigned char q095;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_15;  // X10 supply (member_lookup)
    unsigned int u32_16;  // X10 supply (member_lookup)
    unsigned int u32_17;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};

} // namespace gamemd
