// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WOLobby {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ChatDlgProc(HWND hDlg, UINT, WPARAM, HWND hWnd);
    int SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd);
    static int  DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4);  // 0x78AC10
};

} // namespace gamemd
