// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignScore;  // fix_fwd_type_supply

struct Diplomacy {
    int Diplomacy_field_00;  // 0x0
    int Diplomacy_field_04;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    CampaignScore * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);
char * GetField(int a2, void *a2_1 = 0);
};

} // namespace gamemd
