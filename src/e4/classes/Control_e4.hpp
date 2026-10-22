// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Control {
    int Control_field_00;  // 0x0
    char __pad_4[104];  // 0x4
    unsigned int u32_6C;  // 0x6C
    char __pad_70[64];  // 0x70
    unsigned int u32_B0;  // 0xB0
    char __pad_B4[9];  // 0xB4
    unsigned char u8_BD;  // 0xBD
    char __pad_BE[2];  // 0xBE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * CreateControlDialog(void *aP1);
    int CheckControlTypeDialog();
    int DispatchClick(int aP1, void *a2 = 0);
    int RepositionControlsDialog();
    int RepositionControlsDialog(HWND hWnd);
};

} // namespace gamemd
