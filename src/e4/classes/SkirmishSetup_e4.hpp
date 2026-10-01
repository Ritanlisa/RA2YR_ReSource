// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SkirmishSetup {
// --- flat members (BEGIN) ---
    char SkirmishSetup_field_00[4];  // 0x0
    char SkirmishSetup_field_04[4];  // 0x4
// --- flat members (END) ---
    int DlgProc(SkirmishDialog * aP0, int a2, HWND hWnd, signed int a4, WPARAM _3C, char * a5);
    int PlayButtonClickAnim();
};

} // namespace gamemd
