// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Control {
    int Control_field_00;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * CreateControlDialog(void *aP1);
    int CheckControlTypeDialog();
    int DispatchClick(int aP1, void *a2 = 0);
    int RepositionControlsDialog();
    int RepositionControlsDialog(HWND hWnd);
};

} // namespace gamemd
