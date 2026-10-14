// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct ReferenceCounted;  // fix_fwd_type_supply

struct Skirmish {
// --- flat members (BEGIN) ---
    TechnoTypeClass * ptr_44;  // 0x44
    TechnoTypeClass * ptr_60;  // 0x60
    TechnoTypeClass * ptr_70;  // 0x70
    TechnoTypeClass * ptr_74;  // 0x74
// --- flat members (END) ---
    AbstractClass * * SetupGame(int hWnd, void *a2 = 0);
    CampaignClass * * SetupAllSpawnLocations();
    ReferenceCounted * * Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4);
    TechnoTypeClass * * RandomizeSettings(int aP1);
    int EnableSpawnButtons(HWND hDlg);
    int SetupAllSpawnLocations(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F467
    int FillPlayerNames();
    int ReadSettings(HWND hDlg);
    int RenderPreview(HWND aP1);
    int RenderPreview(HWND aP1, void *a2 = 0);
    unsigned int u32_300;  // 0x300 (offset-truth)

    unsigned int u32_1E0;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_68;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
};

} // namespace gamemd
