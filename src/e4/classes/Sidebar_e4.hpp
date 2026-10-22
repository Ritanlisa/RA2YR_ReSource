// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CreateTeamCommand;  // fix_fwd_type_supply
struct Sidebar {
    void* __pad_000;  // 0x0
    int u32_4;  // 0x4
    int q008;  // 0x8
    int u32_C;  // 0xC
    int q010;  // 0x10
    unsigned int q014;  // 0x14
    char __pad_18[8];  // 0x18
    int Sidebar_field_0x20;  // 0x20
    int Sidebar_field_0x24;  // 0x24
    char __pad_28[8];  // 0x28
    int Sidebar_field_0x30;  // 0x30
    char __pad_34[8];  // 0x34
    int Sidebar_field_0x3C;  // 0x3C
    char __pad_40[4];  // 0x40
    int Sidebar_field_0x44;  // 0x44
    char __pad_48[16];  // 0x48
    int Sidebar_field_0x58;  // 0x58
    char __pad_5C[8];  // 0x5C
    int Sidebar_field_0x64;  // 0x64
    char __pad_68[4];  // 0x68
    int Sidebar_field_0x6C;  // 0x6C
    unsigned char q070;  // 0x70
    char __pad_71[27];  // 0x71
    unsigned char u32_8C;  // 0x8C
    char __pad_8D[3];  // 0x8D
    unsigned char u32_90;  // 0x90
    char __pad_91[3];  // 0x91
    unsigned char u32_94;  // 0x94
    char __pad_95[3];  // 0x95
    unsigned char u8_98;  // 0x98
    unsigned char u8_99;  // 0x99
    char __pad_9A[338];  // 0x9A
    unsigned char u32_1EC;  // 0x1EC
    char __pad_1ED[3];  // 0x1ED
    char __pad_1F0[104];  // 0x1F0
    int Sidebar_field_0x258;  // 0x258
    char __pad_25C[2674];  // 0x25C
    char Sidebar_field_0xCCE[4];  // 0xCCE
    char __pad_CD2[2110];  // 0xCD2
    unsigned int q1510;  // 0x1510
    char __pad_1514[8];  // 0x1514
    unsigned char u32_151C;  // 0x151C
    char __pad_151D[16008];  // 0x151D
    unsigned char u32_53A5;  // 0x53A5
    unsigned char u32_53A6;  // 0x53A6
    char __pad_53A7[1];  // 0x53A7
    unsigned char u32_53A8;  // 0x53A8
    char __pad_53A9[3];  // 0x53A9
    unsigned int u32_53AC;  // 0x53AC
    unsigned int u32_53B0;  // 0x53B0
    unsigned int u32_53B4;  // 0x53B4
    unsigned int u32_53B8;  // 0x53B8
    unsigned int u32_53BC;  // 0x53BC
    char __pad_53C0[12];  // 0x53C0
    unsigned int u32_53CC;  // 0x53CC
    unsigned char q53D0;  // 0x53D0
    unsigned char q53D1;  // 0x53D1
    unsigned char q53D2;  // 0x53D2
    unsigned char q53D3;  // 0x53D3
    unsigned char q53D4;  // 0x53D4
    char __pad_53D5[3];  // 0x53D5
    unsigned char q53D8;  // 0x53D8
    char __pad_53D9[3];  // 0x53D9
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * StartSidebarProduction(HouseClass *a1, int aP2, char aP3, char a5);  // 0x4FA350
int Dispatch(IUnknown * aP1, char a3, int a4, char a5, void *a5_2);
    CreateTeamCommand * * ScrollSidebarSkipGame(void *a1 = 0);  // 0x533F50
    static TechnoClass * * CancelSidebarProductionQueue(int * Block);  // 0x636310
    char RemoveItem(int a2, void *a2_2);  // 0x63F040
    ObjectClass * * Render(char a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0);  // 0x63FB20
    int ActivateTab(int aP1);  // 0x6A60A0
    AbstractClass * * FlushSidebarTooltip(char a2, void *a2_1 = 0);  // 0x6A70E0
    char FindProductionType(FactoryClass * aP1, MouseClass * aP2, int a4, void *a4_2);  // 0x6A6140
    static char UpdateProductionDisplay(int a1, wchar_t a2, char a3);
};
} // namespace gamemd
