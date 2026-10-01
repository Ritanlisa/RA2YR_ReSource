// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Diplomacy {
// --- flat members (BEGIN) ---
    char Diplomacy_field_00[4];  // 0x0
    char Diplomacy_field_04[4];  // 0x4
// --- flat members (END) ---
struct CampaignScore;  // fix_fwd_type_supply
    CampaignScore * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);
    char * GetField(BuildingTypeClass * aP1, void *a2);
};

} // namespace gamemd
