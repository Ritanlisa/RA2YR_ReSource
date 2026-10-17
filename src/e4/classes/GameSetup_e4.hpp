// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameSetup {
    ObjectClass* __pad_000;  // 0x0
    unsigned int u32_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned int __pad_00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void DisplayPlayers(void *aP1);
    AbstractClass * * WriteINI(CCINIClass * aP1, unsigned char * Block);
    int LookupDialogHash();
    static char FormatToString(GameSetup * aP1, uint8_t *Block, char *a3, int a4, int a5, int a6);
    static wchar_t * GetColorTooltip(void *a1 = 0);  // 0x4e42a0
};

} // namespace gamemd
