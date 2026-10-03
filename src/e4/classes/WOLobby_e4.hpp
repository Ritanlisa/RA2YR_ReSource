// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WOLobby {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
// --- flat members (END) ---
    int ChatDlgProc(HWND hDlg, UINT, WPARAM, HWND hWnd);
    int SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd);
    static int DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);  // 0x78AC10 G42.33 b3 static-form sync
};

} // namespace gamemd
