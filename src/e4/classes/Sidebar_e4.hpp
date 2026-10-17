// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CreateTeamCommand;  // fix_fwd_type_supply
struct Sidebar {
#pragma pack(push, 1)  // X60: binary-packed layout
    void* __pad_000;  // 0x0
    int Sidebar_field_0x4;  // 0x4
    int Sidebar_field_0x8;  // 0x8
    int Sidebar_field_0xC;  // 0xC
    int Sidebar_field_0x10;  // 0x10
    char __pad_14[12];  // 0x14
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
    char __pad_70[380];  // 0x70
    unsigned int u32_1EC;  // 0x1EC
    char __pad_1F0[104];  // 0x1F0
    int Sidebar_field_0x258;  // 0x258
    char __pad_25C[2674];  // 0x25C
    char Sidebar_field_0xCCE[4];  // 0xCCE
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
#pragma pack(pop)
};
} // namespace gamemd
