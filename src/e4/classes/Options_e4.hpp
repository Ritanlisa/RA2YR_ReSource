// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Options {
    unsigned int __pad_0;  // 0x0
    unsigned int field_4;  // 0x4
    unsigned int field_8;  // 0x8
    void * field_C;  // 0xC
    void * field_10;  // 0x10
    char __pad_14[28];  // 0x14
    void * field_30;  // 0x30
    char __pad_34[4];  // 0x34
    AbstractClass * ptr_38;  // 0x38
    char __pad_3C[172];  // 0x3C
    void * field_E8;  // 0xE8
    void * field_EC;  // 0xEC
    void * field_F0;  // 0xF0
    void * field_F4;  // 0xF4
    void * field_F8;  // 0xF8
    char __pad_FC[1552];  // 0xFC
    void * field_70C;  // 0x70C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);  // 0x4F11B0
    bool PrepareSaveLoadDlg(const char ** dwNewLong);  // 0x558840
    AbstractClass * * Screen_Save(void *a1 = 0);  // 0x55FAA0
    char Screen_Dialog();  // 0x55FC80
    int DeleteAndZero(void *a1 = 0, void *a2 = 0);  // 0x6244E0
    char EnsureCapacity(void *a1 = 0);  // 0x6248A0
    int GrowBuffer();  // 0x6253B0
    int ReadOptionValue();  // 0x6254D0
    AbstractClass * *  DestroyComposite(char a2);  // 0x625560
    void * RebuildDropdownList(ObjectClass * aP1);  // 0x6255F0
    int SaveOptionValue();  // 0x625A20
    int  SetScoreVolume(float a2, int a3);  // 0x5FA4A0
    int  SetSoundVolume(float a2, char a3);  // 0x5FA510
    int  SetVoiceVolume(float a2, char a3);  // 0x5FA590
    HWND InitDialogControls(HWND hDlg);  // 0x4F1720
    int DialogProc(CCINIClass hWnd, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x618D40
    void ClearComboBoxes();  // 0x624460
};
} // namespace gamemd
