// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct CreateTeamCommand;  // fix_fwd_type_supply
struct TechnoClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct Sidebar {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned int u32_C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q041;  // 0x41
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q060;  // 0x60
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    void* q080;  // 0x80
    void* q084;  // 0x84
    void* q088;  // 0x88
    unsigned int u32_8C;  // 0x8C
    unsigned int u32_94;  // 0x94
    unsigned char u8_98;  // 0x98
    unsigned char u8_99;  // 0x99
    unsigned int u32_C4;  // 0xC4
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    void* q128;  // 0x128
    unsigned char q130;  // 0x130
    unsigned int q140;  // 0x140
    unsigned int q148;  // 0x148
    unsigned int q150;  // 0x150
    unsigned char u8_1EC;  // 0x1EC
    unsigned int u32_1ED;  // 0x1ED
    void* q258;  // 0x258
    unsigned char q25C;  // 0x25C
    unsigned char q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q274;  // 0x274
    unsigned char q280;  // 0x280
    unsigned char q304;  // 0x304
    void* q310;  // 0x310
    unsigned int q320;  // 0x320
    unsigned int q328;  // 0x328
    unsigned char q338;  // 0x338
    void* q598;  // 0x598
    void* q600;  // 0x600
    unsigned char q604;  // 0x604
    unsigned char q608;  // 0x608
    unsigned char q628;  // 0x628
    unsigned char q630;  // 0x630
    unsigned char q640;  // 0x640
    void* q774;  // 0x774
    void* q784;  // 0x784
    unsigned int q800;  // 0x800
    unsigned int q808;  // 0x808
    unsigned char q824;  // 0x824
    unsigned int u32_868;  // 0x868
    unsigned int u32_870;  // 0x870
    unsigned int u32_878;  // 0x878
    unsigned int Sidebar_field_0x4;
    unsigned int Sidebar_field_0x8;
    unsigned int *__pad_0;
    unsigned int *__pad_14;
    unsigned int *__pad_70;
    unsigned int q53D0;
    unsigned int q53D4;
    unsigned int q53D8;
    unsigned int u32_53AC;
    unsigned int u32_53B0;
    unsigned int u32_53B4;
    unsigned int u32_53B8;
    unsigned int u32_53BC;
    unsigned int u32_53CC;
    unsigned int u32_53D0;
    unsigned int u32_53D1;
    unsigned int u32_53D2;
    unsigned int u32_53D3;
    unsigned int u32_53D4;
    unsigned int u32_53D8;
    unsigned char u8_53D1;
    unsigned char u8_53D2;
    unsigned char u8_53D3;
    unsigned int Sidebar_field_0x10;
    unsigned int Sidebar_field_0xC;
    unsigned int field_150C;
    unsigned int __pad_1510;
    unsigned int __pad_152C;
    unsigned int __pad_1534;
    unsigned int field_1530;
    unsigned int Debug;
// --- flat members (END) ---
    AbstractClass * * StartSidebarProduction(HouseClass *a1, int aP2, char aP3, char a5);  // 0x4FA350
    int Dispatch(IUnknown * aP1, char a3, int a4, char a5, void *a5_2);  // 0x5007A0
    CreateTeamCommand * * ScrollSidebarSkipGame();  // 0x533F50
    TechnoClass * * CancelSidebarProductionQueue(int * Block);  // 0x636310
    void RemoveItem(int a2, void *a2_2);  // 0x63F040
    ObjectClass * * Render(char a2);  // 0x63FB20
    int ActivateTab(int aP1);  // 0x6A60A0
    AbstractClass * * FlushSidebarTooltip(char a2);  // 0x6A70E0
    char FindProductionType(FactoryClass * aP1, MouseClass * aP2, int a4, void *a4_2);  // 0x6A6140
    static double UpdateProductionDisplay(...);  // C2597 interim stub
};
} // namespace gamemd
