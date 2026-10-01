// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Scenario {
// --- flat members (BEGIN) ---
    IPXInterfaceClass* q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    void* q02C;  // 0x2C
    void* q030;  // 0x30
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    void* q050;  // 0x50
    void* q054;  // 0x54
    void* q060;  // 0x60
    unsigned char q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    void* q078;  // 0x78
    unsigned char q07C;  // 0x7C
    void* q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int u32_90;  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int u32_98;  // 0x98
    unsigned char q09C;  // 0x9C
    unsigned char q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    void* q114;  // 0x114
    unsigned char q118;  // 0x118
    void* q120;  // 0x120
    unsigned char q124;  // 0x124
    void* q128;  // 0x128
    void* q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    void* q150;  // 0x150
    unsigned int u32_16C;  // 0x16C
    unsigned int u32_170;  // 0x170
    unsigned int u32_174;  // 0x174
    unsigned char u8_179;  // 0x179
    unsigned int u32_17C;  // 0x17C
    unsigned int u32_180;  // 0x180
    void* q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q274;  // 0x274
    unsigned char q280;  // 0x280
    void* q288;  // 0x288
    void* q29C;  // 0x29C
    unsigned char q2A0;  // 0x2A0
    void* q304;  // 0x304
    void* q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned int q338;  // 0x338
    unsigned int q364;  // 0x364
    unsigned int q368;  // 0x368
    unsigned int q380;  // 0x380
    unsigned int q384;  // 0x384
    unsigned char q598;  // 0x598
    unsigned int u32_5B0;  // 0x5B0
    void* q608;  // 0x608
    unsigned char q628;  // 0x628
    void* q630;  // 0x630
    unsigned char q640;  // 0x640
    void* q648;  // 0x648
    unsigned char q658;  // 0x658
    void* q668;  // 0x668
    unsigned char q774;  // 0x774
    unsigned int q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned int q824;  // 0x824
    unsigned char q834;  // 0x834
    unsigned int q868;  // 0x868
    unsigned int q900;  // 0x900
    void* q11E8;  // 0x11E8
    unsigned char q11EC;  // 0x11EC
    void* q11F0;  // 0x11F0
    unsigned char q11F4;  // 0x11F4
    unsigned char q14B2;  // 0x14B2
    void* q1544;  // 0x1544
    unsigned char q1554;  // 0x1554
    void* q1584;  // 0x1584
    unsigned char q1600;  // 0x1600
    void* q1608;  // 0x1608
    unsigned char q1624;  // 0x1624
    void* q1634;  // 0x1634
    void* q1640;  // 0x1640
    unsigned char q1650;  // 0x1650
    unsigned char q1908;  // 0x1908
    void* q1910;  // 0x1910
    unsigned char Scenario_field_0x34;  // 0x34
    unsigned char Scenario_field_0x38;  // 0x38
    unsigned char *__pad_3C;  // 0x3C
    unsigned char __pad_84;  // 0x84
    unsigned char *__pad_9C;  // 0x9C
// --- flat members (END) ---
    int ReadTeams();  // 0x44F820
    int CopyLocalScenarioData();  // 0x4C6180
    int ProcessSidebarUnits();  // 0x50D610
    int ComputeDisplayPosition();  // 0x552B10
    unsigned int *  ComputeDialogPos(unsigned int * a2);  // 0x552BE0
    void Update();  // 0x55AFB0
    char  LoadOrReloadOptions(void * aP1);  // 0x597A10
    int PreGameInit();  // 0x5E7460
    void SetByte96();  // 0x642AD0
    HWND ClearScreen();  // 0x684240
    char LoadWithProgress();  // 0x684620
    int  FindBuildingTypeByName(uint8_t * a1, uint8_t * a2, void * aP3);  // 0x4758F0
    void * ResetDisplayArrays();  // 0x5C9700
    int  SetDword32(int a2);  // 0x642B10
    int  SetDword30(int a2);  // 0x642DF0
};
} // namespace gamemd
