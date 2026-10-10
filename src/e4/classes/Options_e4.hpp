// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Options {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_38;  // 0x38
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
    void *  RebuildDropdownList(unsigned int * a2);  // 0x6255F0
    int SaveOptionValue();  // 0x625A20
    int  SetScoreVolume(float a2, int a3);  // 0x5FA4A0
    int  SetSoundVolume(float a2, char a3);  // 0x5FA510
    int  SetVoiceVolume(float a2, char a3);  // 0x5FA590
    HWND InitDialogControls(HWND hDlg);  // 0x4F1720
    int  DialogProc(HWND hWnd, UINT Msg, int a3, LONG String);  // 0x618D40
    void ClearComboBoxes();  // 0x624460
    unsigned int *q000;  // 0x0 (canon-mt)
    unsigned int q004;  // 0x4 (offset-truth)
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double field_4(...);  // plateau: C2039/C3861 stub
    static double field_8(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
