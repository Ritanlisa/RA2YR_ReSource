// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioSettings {
// --- flat members (BEGIN) ---
    bool m_Flag68;  // 0x0
    bool m_Flag70;  // 0x1
    unsigned char pad_02;  // 0x2
    char AudioSettings_field_04[4];  // 0x4
    char AudioSettings_field_08[4];  // 0x8
    unsigned char q00C;  // 0xC
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int q040;  // 0x40
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned int q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    void* q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned int q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q158;  // 0x158
    unsigned char q15C;  // 0x15C
    void* q260;  // 0x260
    unsigned int Check;
    unsigned int ComputeTransform;
    unsigned int q0188;
    unsigned int u32_1C0;
// --- flat members (END) ---
    AbstractClass * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd);
    void SetFlag68(char a2);
    void SetFlag70(char a2);
};

} // namespace gamemd
