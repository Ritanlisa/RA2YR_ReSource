// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Options {
    void* vfptr;  // minimal E2 declaration
    int DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);  // 0x4F11B0
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
    void SetScoreVolume(float volume, int pad);  // 0x5FA4A0
    void SetSoundVolume(float volume, int pad);  // 0x5FA510
    void SetVoiceVolume(float volume, int pad);  // 0x5FA590
    HWND InitDialogControls();  // 0x4F1720
    int DialogProc(CCINIClass hWnd);  // 0x618D40
    void ClearComboBoxes();  // 0x624460
};
} // namespace gamemd
