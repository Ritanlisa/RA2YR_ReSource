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
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q034;  // 0x34
    unsigned char q040;  // 0x40
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q064;  // 0x64
    unsigned char q06F;  // 0x6F
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    void* q11E4;  // 0x11E4
    unsigned char q11E8;  // 0x11E8
    unsigned char q13E8;  // 0x13E8
    unsigned char q13EC;  // 0x13EC
    unsigned char q179C;  // 0x179C
    unsigned char q17A0;  // 0x17A0
    void* q4580;  // 0x4580
    unsigned char q4584;  // 0x4584
    unsigned char q4588;  // 0x4588
    unsigned char q458C;  // 0x458C
    unsigned char q7A3C;  // 0x7A3C
    unsigned char q7A40;  // 0x7A40
// --- flat members (END) ---
    int ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd);
    int SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd);
};

} // namespace gamemd
