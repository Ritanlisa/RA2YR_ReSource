// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SkirmishDialog {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ResizeDialogAndEnum(void *a1, void *lParam);
     static int Show(HWND hWndParent, int a2, int a3);
    static int FillComboBoxes(SkirmishDialog * aP1);
    SkirmishDialog * * HandleMultiplayerMapSelection();
};

} // namespace gamemd
