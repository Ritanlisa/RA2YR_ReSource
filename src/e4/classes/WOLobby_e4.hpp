// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WOLobby {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int ChatDlgProc(HWND hDlg, UINT, WPARAM, HWND hWnd);
    int SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd);
    static int  DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4);  // 0x78AC10
};

} // namespace gamemd
