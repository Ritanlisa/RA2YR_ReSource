// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct IPXInterfaceClass;  // fix_fwd_type_supply
struct Game;  // fix_fwd_type_supply
struct Scenario {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int __pad_000;  // 0x0
    unsigned int Scenario_field_0x4;  // 0x4
    int Scenario_field_0x8;  // 0x8
    int q00C;  // 0xC
    int Scenario_field_0x10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    unsigned int Scenario_field_0x2C;  // 0x2C
    int Scenario_field_0x30;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    unsigned char q03C[4];  // 0x3C
    unsigned int q040;  // 0x40
    char __pad_44[7];  // 0x44
    char Scenario_field_0x4B[4];  // 0x4B
    char __pad_4F[17];  // 0x4F
    int q060;  // 0x60
    char __pad_64[20];  // 0x64
    int q078;  // 0x78
    char __pad_7C[4];  // 0x7C
    int q080;  // 0x80
    char __pad_84[20];  // 0x84
    int Scenario_field_0x98;  // 0x98
    char __pad_9C[212];  // 0x9C
    unsigned int u32_170;  // 0x170
    unsigned int u32_174;  // 0x174
    char __pad_178[4];  // 0x178
    unsigned int u32_17C;  // 0x17C
    char __pad_180[284];  // 0x180
    int Scenario_field_0x29C;  // 0x29C
    char __pad_2A0[3912];  // 0x2A0
    int Scenario_field_0x11E8;  // 0x11E8
    char __pad_11EC[4];  // 0x11EC
    int Scenario_field_0x11F0;  // 0x11F0
    char __pad_11F4[698];  // 0x11F4
    char Scenario_field_0x14AE[4];  // 0x14AE
    char __pad_14B2[2087];  // 0x14B2
    char Scenario_field_0x1CD9[4];  // 0x1CD9
    char __pad_1CDD[1];  // 0x1CDD
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
    static int ClearScreen(void *a1_1);  // x4:ida@0x684240
char LoadWithProgress(void *a1 = 0, void *a2 = 0);
    int FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3);  // 0x4758F0
    void * ResetDisplayArrays();  // 0x5C9700
    int  SetDword32(int a2);  // 0x642B10
    int  SetDword30(int a2);  // 0x642DF0
#pragma pack(pop)
};
} // namespace gamemd
