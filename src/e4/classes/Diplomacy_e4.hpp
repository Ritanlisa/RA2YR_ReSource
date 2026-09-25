// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Diplomacy {
// --- flat members (BEGIN) ---
    char Diplomacy_field_00[4];  // 0x0
    char Diplomacy_field_04[4];  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_60;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q19C;  // 0x19C
    unsigned char q1A0;  // 0x1A0
    unsigned char q1A4;  // 0x1A4
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q288;  // 0x288
    unsigned char q28C;  // 0x28C
    unsigned char q2F8;  // 0x2F8
    unsigned char q2FC;  // 0x2FC
    unsigned char q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q4CC;  // 0x4CC
    unsigned char q4D0;  // 0x4D0
    unsigned char q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q774;  // 0x774
    unsigned char q778;  // 0x778
    unsigned char q804;  // 0x804
// --- flat members (END) ---
    CampaignScore * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);
    char * GetField(BuildingTypeClass * aP1);
};

} // namespace gamemd
