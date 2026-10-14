// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IPXInterfaceClass;  // fix_fwd_type_supply
struct Game;  // fix_fwd_type_supply
struct Scenario {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int EndGame(void *aP1);
    static int EndGameFlow(void *aP1);
    int ReadTeams();  // 0x44F820
    int CopyLocalScenarioData();  // 0x4C6180
    int ProcessSidebarUnits();  // 0x50D610
    Game * * ComputeDisplayPosition();  // 0x552B10
    unsigned int *  ComputeDialogPos(unsigned int * a2);  // 0x552BE0
    void Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1);  // 0x55AFB0
    char LoadOrReloadOptions(int aP1);  // G57w10-S raw 0x00597A10 IUnknown 占位清除
    static int PreGameInit();  // 0x5E7460
    void SetByte96();  // 0x642AD0
    int ClearScreen(void *a1_1);  // x4:ida@0x684240
char LoadWithProgress(void *a1 = 0, void *a2 = 0);
    int FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3);  // 0x4758F0
    void * ResetDisplayArrays();  // 0x5C9700
    int  SetDword32(int a2);  // 0x642B10
    int  SetDword30(int a2);  // 0x642DF0
    char __pad_9C[512];  // 0x9C (ml)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    int q024;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    int q034;  // X10 supply (member_lookup)
    int q038;  // X10 supply (member_lookup)
    unsigned char q03C[15];  /* char[15] */  // X10 supply (member_lookup)
    void* q040;  // X10 supply (member_lookup)
    int q060;  // X10 supply (member_lookup)
    int q078;  // X10 supply (member_lookup)
    int q080;  // X10 supply (member_lookup)
    unsigned int u32_16C;  // X10 supply (member_lookup)
    unsigned int u32_170;  // X10 supply (member_lookup)
    unsigned int u32_174;  // X10 supply (member_lookup)
    unsigned int u32_17C;  // X10 supply (member_lookup)
    unsigned int u32_180;  // X10 supply (member_lookup)
};
} // namespace gamemd
