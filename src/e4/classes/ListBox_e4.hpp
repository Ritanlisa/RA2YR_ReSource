// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ListBox {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int u32_1E;  // 0x1E
// --- flat members (END) ---
    unsigned int EditSubclassProc(HWND hWnd, UINT Msg, WPARAM wParam, wchar_t * lParam);
    int Clear();  // 0x623840
};

} // namespace gamemd
