// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct ReferenceCounted;  // fix_fwd_type_supply

struct Skirmish {
// --- flat members (BEGIN) ---
    unsigned int u32_38;  // 0x38
    unsigned int u32_40;  // 0x40
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int q74;  // 0x74
    unsigned int q080;  // 0x80
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    TechnoTypeClass * q150;  // 0x150
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    unsigned int q03C;
// --- flat members (END) ---
    AbstractClass * * SetupGame(int hWnd);
    CampaignClass * * SetupAllSpawnLocations();
    ReferenceCounted * * Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4);
    TechnoTypeClass * * RandomizeSettings(int aP1);
    int EnableSpawnButtons(HWND hDlg);
    int SetupAllSpawnLocations(HWND hDlg);  // G42.33 b3 supplied-call sync 0x46F467
    int FillPlayerNames();
    int ReadSettings(HWND hDlg);
    int RenderPreview(HWND aP1);
    static int RenderPreview(void *aP0, HWND aP1);  // 0x640710 G42.35 static-form sync (ui/supplied site 0x46E058)
};

} // namespace gamemd
