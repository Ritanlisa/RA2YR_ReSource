// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Skirmish {
// --- flat members (BEGIN) ---
    unsigned int u32_38;  // 0x38
    unsigned int q3C;  // 0x3C
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
    unsigned int q74;  // 0x74
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q128;  // 0x128
    unsigned int q134;  // 0x134
    TechnoTypeClass * q150;  // 0x150
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    TechnoTypeClass * q274;  // 0x274
    TechnoTypeClass * q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q310;  // 0x310
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    TechnoTypeClass * q628;  // 0x628
    void* q112C;  // 0x112C
    void* q1130;  // 0x1130
    void* q113C;  // 0x113C
    void* q11E4;  // 0x11E4
    void* q148C;  // 0x148C
    unsigned int q1544;  // 0x1544
    void* q4400;  // 0x4400
    void* q4580;  // 0x4580
    void* q5260;  // 0x5260
    unsigned int q03C;
    void* ptr_74;
// --- flat members (END) ---
    AbstractClass * * SetupGame(int a2);
    CampaignClass * * SetupAllSpawnLocations();
    ReferenceCounted * * Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4);
    TechnoTypeClass * * RandomizeSettings(void * aP1);
    int EnableSpawnButtons(void *a1 = 0);
    int FillPlayerNames();
    int ReadSettings(HWND hDlg);
    int RenderPreview(void * aP1);
};

} // namespace gamemd
