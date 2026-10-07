// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameSetup {
// --- flat members (BEGIN) ---
    AbstractClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char u8_15;  // 0x15
    unsigned char u8_16;  // 0x16
    unsigned char u8_17;  // 0x17
    unsigned char q018;  // 0x18
    unsigned int q0104;
    static void DisplayPlayers(void *aP1);  // 0x5DAFE0 raw: void DisplayPlayers(GameSetup*) [ptr-receiver sites]
    static void DisplayPlayers();  // 0x5DAFE0 site 0x5dbeb6 renders 0-arg
    static void DisplayPlayers(int aP1);  // 0x5DAFE0 site 0x5de? renders int 1
// --- flat members (END) ---
    AbstractClass * * WriteINI(CCINIClass * aP1, unsigned char * Block);
    int LookupDialogHash();
    static char FormatToString(GameSetup * aP1, unsigned __int8 *Block, char *a3, int a4, int a5, int a6);  // G57w10-S raw 0x00477510 (was C2597 interim stub)
    wchar_t * GetColorTooltip();  // 0x4e42a0
};

} // namespace gamemd
