// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Control {
// --- flat members (BEGIN) ---
    char Control_field_00[4];  // 0x0
// --- flat members (END) ---
    static unsigned int * CreateControlDialog(void *aP1);
    int CheckControlTypeDialog();
    int DispatchClick(int aP1, void *a1 = 0);
    int RepositionControlsDialog();
    int RepositionControlsDialog(HWND hWnd);
    unsigned int u32_28;  // 0x28 (offset-truth)
};

} // namespace gamemd
