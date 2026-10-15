// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SkirmishSetup {
// --- flat members (BEGIN) ---
int SkirmishSetup_field_00;  // 0x0 [X35-L7 kind=int]
int SkirmishSetup_field_04;  // 0x4 [X35-L7 kind=int]
// --- flat members (END) ---
    int DlgProc(SkirmishDialog * aP0, int a2, HWND hWnd, signed int a4, WPARAM _3C, char * a5);
    int PlayButtonClickAnim();
    int PlayButtonClickAnim(HWND hWnd);
};

} // namespace gamemd
