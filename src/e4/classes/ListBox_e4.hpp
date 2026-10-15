// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ListBox {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int SetCustomEntry(void *aP1, int a2, int a3, void *a4);
    unsigned int EditSubclassProc(HWND hWnd, UINT Msg, WPARAM wParam, wchar_t * lParam);
    int Clear(void *a1 = 0);  // 0x623840
    int __pad_000;  // 0x0 [X30:type_map]
};

} // namespace gamemd
