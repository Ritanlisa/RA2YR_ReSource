// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SkirmishSetup {
// --- flat members (BEGIN) ---
    char SkirmishSetup_field_00[4];  // 0x0
    char SkirmishSetup_field_04[4];  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q1A0;  // 0x1A0
    unsigned char q1A4;  // 0x1A4
    unsigned char q1A8;  // 0x1A8
    unsigned char q1AC;  // 0x1AC
    unsigned char q1B0;  // 0x1B0
    unsigned char q420;  // 0x420
    unsigned char q424;  // 0x424
    unsigned char q428;  // 0x428
    unsigned char q1050;  // 0x1050
    unsigned char q1054;  // 0x1054
    unsigned char q12C8;  // 0x12C8
// --- flat members (END) ---
    int DlgProc(SkirmishDialog * aP0, int a2, HWND hWnd, signed int a4, WPARAM _3C, char * a5);
    int PlayButtonClickAnim();
};

} // namespace gamemd
