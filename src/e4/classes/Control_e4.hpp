// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class HWND;  // G42.36 fwd supply

struct Control {
// --- flat members (BEGIN) ---
    char Control_field_00[4];  // 0x0
// --- flat members (END) ---
    int CheckControlTypeDialog();
    int DispatchClick(int aP1);
    int RepositionControlsDialog();
    int RepositionControlsDialog(HWND hWnd);
};

} // namespace gamemd
