// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SkirmishDialog {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
// --- flat members (END) ---
    int ResizeDialogAndEnum(void *a1, void *a2);
     static int Show(HWND hWndParent, int a2, int a3);  // G57w10-S raw 0x005E68A0 (was C2597 interim stub)
    static int FillComboBoxes(SkirmishDialog * aP1);  // G57w10-S raw 0x004E3B90 (was C2597 interim stub)
    SkirmishDialog * * HandleMultiplayerMapSelection();
};

} // namespace gamemd
