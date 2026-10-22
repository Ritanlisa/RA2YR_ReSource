// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioSettings {
    bool m_Flag68;  // 0x0
    bool m_Flag70;  // 0x1
    unsigned short pad_02;  // 0x2
    int AudioSettings_field_04;  // 0x4
    int AudioSettings_field_08;  // 0x8
    char __pad_C[12];  // 0xC
    unsigned int u32_18;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned int u32_24;  // 0x24
    char __pad_28[28];  // 0x28
    unsigned char u32_44;  // 0x44
    char __pad_45[1];  // 0x45
    unsigned char u32_46;  // 0x46
    char __pad_47[1];  // 0x47
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int ComputeTransform(AudioSettings *pThis, unsigned int a2);
    static int Check(AudioSettings *pThis, unsigned int a2);
    AbstractClass * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd);
    void SetFlag68(char a2);
    void SetFlag70(char a2);
};

} // namespace gamemd
