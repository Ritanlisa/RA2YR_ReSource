// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct ReferenceCounted;  // fix_fwd_type_supply

struct Skirmish {
    unsigned int u32_0;  // 0x0
    char __pad_4[52];  // 0x4
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    TechnoTypeClass * ptr_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    TechnoTypeClass * ptr_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    TechnoTypeClass * ptr_70;  // 0x70
    TechnoTypeClass * ptr_74;  // 0x74
    char __pad_78[360];  // 0x78
    unsigned int u32_1E0;  // 0x1E0
    char __pad_1E4[284];  // 0x1E4
    unsigned int u32_300;  // 0x300
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * SetupGame(int hWnd, void *a2 = 0);
    CampaignClass * * SetupAllSpawnLocations();
    ReferenceCounted * * Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4);
    TechnoTypeClass * * RandomizeSettings(int aP1);
    int EnableSpawnButtons();
    int SetupAllSpawnLocations(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F467
    int FillPlayerNames();
    int ReadSettings(HWND hDlg);
    int RenderPreview(HWND aP1);
    int RenderPreview(HWND aP1, void *a2 = 0);
};

} // namespace gamemd
