// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ListBox {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int SetCustomEntry(void *aP1, int a2, int a3, void *a4);
    unsigned int EditSubclassProc(HWND hWnd, UINT Msg, WPARAM wParam, wchar_t * lParam);
    int Clear(void *a1 = 0);  // 0x623840
};

} // namespace gamemd
