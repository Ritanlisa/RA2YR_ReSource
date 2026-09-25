// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Options {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    void* q018;  // 0x18
    void* q024;  // 0x24
    unsigned int u32_2C;  // 0x2C
    void* q030;  // 0x30
    void* q034;  // 0x34
    AbstractClass * ptr_38;  // 0x38
    unsigned int q044;  // 0x44
    void* q048;  // 0x48
    void* q054;  // 0x54
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    void* q084;  // 0x84
    void* q0E8;  // 0xE8
    void* q0EC;  // 0xEC
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q114;  // 0x114
    void* q130;  // 0x130
    AbstractClass * q134;  // 0x134
    unsigned int q150;  // 0x150
    void* q240;  // 0x240
    void* q244;  // 0x244
    void* q248;  // 0x248
    unsigned int q260;  // 0x260
    void* q304;  // 0x304
    AbstractClass * q308;  // 0x308
    void* q580;  // 0x580
    void* q584;  // 0x584
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    void* q630;  // 0x630
    void* q70C;  // 0x70C
    void* q774;  // 0x774
    void* q1378;  // 0x1378
    void* q1398;  // 0x1398
    void* q1408;  // 0x1408
    unsigned int q1544;  // 0x1544
    void* q1584;  // 0x1584
    void* q1804;  // 0x1804
    void* q1908;  // 0x1908
    AbstractClass * q1910;  // 0x1910
    void* q4984;  // 0x4984
    void* q4994;  // 0x4994
    void* q5128;  // 0x5128
    void* q5138;  // 0x5138
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    void* q5508;  // 0x5508
    void* q6148;  // 0x6148
    void* q6408;  // 0x6408
// --- flat members (END) ---
    int DlgProc(HWND hDlg,  unsigned int a2,  unsigned int a3,  HWND a4);    // 0x4F11B0
    bool PrepareSaveLoadDlg();  // 0x558840
    void Screen_Save();  // 0x55FAA0
    char Screen_Dialog();  // 0x55FC80
    int DeleteAndZero();  // 0x6244E0
    char EnsureCapacity();  // 0x6248A0
    char GrowBuffer();  // 0x6253B0
    char ReadOptionValue();  // 0x6254D0
    void * DestroyComposite(char a2);  // 0x625560
    int * RebuildDropdownList(ObjectClass * aP1);  // 0x6255F0
    char SaveOptionValue();  // 0x625A20
    void SetScoreVolume(float volume,  int pad);    // 0x5FA4A0
    void SetSoundVolume(float volume,  int pad);    // 0x5FA510
    void SetVoiceVolume(float volume,  int pad);    // 0x5FA590
    HWND InitDialogControls();  // 0x4F1720
    int DialogProc(CCINIClass hWnd);  // 0x618D40
    void ClearComboBoxes();  // 0x624460
};
} // namespace gamemd
