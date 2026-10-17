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
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int ComputeTransform(AudioSettings *pThis, unsigned int a2);
    static int Check(AudioSettings *pThis, unsigned int a2);
    AbstractClass * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd);
    void SetFlag68(char a2);
    void SetFlag70(char a2);
};

} // namespace gamemd
