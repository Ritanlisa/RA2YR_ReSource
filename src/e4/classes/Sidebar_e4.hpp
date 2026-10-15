// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CreateTeamCommand;  // fix_fwd_type_supply
struct Sidebar {
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
    unsigned char __pad_1510;  // 0x1510 (offset-truth)
    unsigned char __pad_152C;  // 0x152C (offset-truth)
    unsigned char __pad_1534;  // 0x1534 (offset-truth)
    unsigned int u32_53AC;  // 0x53AC (offset-truth)
    unsigned int u32_53B0;  // 0x53B0 (offset-truth)
    unsigned int u32_53B4;  // 0x53B4 (offset-truth)
    unsigned int u32_53B8;  // 0x53B8 (offset-truth)
    unsigned int u32_53BC;  // 0x53BC (offset-truth)
    unsigned int u32_53CC;  // 0x53CC (offset-truth)
    unsigned int u32_53D0;  // 0x53D0 (offset-truth)
    unsigned char u32_53D1;  // 0x53D1 (offset-truth)
    unsigned char u32_53D2;  // 0x53D2 (offset-truth)
    unsigned char u32_53D3;  // 0x53D3 (offset-truth)
    unsigned int u32_53D4;  // 0x53D4 (offset-truth)
    unsigned int u32_53D8;  // 0x53D8 (offset-truth)

    unsigned int u32_14E7;  // X10 supply (member_lookup)
    unsigned int u32_151C;  // X10 supply (member_lookup)
    unsigned int u32_1EC;  // X10 supply (member_lookup)
    unsigned int u32_53A5;  // X10 supply (member_lookup)
    unsigned int u32_53A6;  // X10 supply (member_lookup)
    unsigned int u32_53A8;  // X10 supply (member_lookup)
    unsigned char u8_F94;  // X10 supply (member_lookup)
    ObjectClass * field_1530;  // 0x1530
    unsigned int field_150C;  // 0x150C
};
} // namespace gamemd
