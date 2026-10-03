// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class HandleMultiplayerMapSelection;  // G42.36 fwd supply

struct SkirmishDialog {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int *__pad_0;
// --- flat members (END) ---
    int ResizeDialogAndEnum(void *a1, void *a2);
     static double Show(...);  // C2597 interim stub
    static double FillComboBoxes(...);  // C2597 interim stub
    SkirmishDialog * * HandleMultiplayerMapSelection();
};

} // namespace gamemd
