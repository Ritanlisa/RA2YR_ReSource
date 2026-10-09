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
// --- flat members (END) ---
    static int ComputeTransform(AudioSettings *pThis, unsigned int a2);  // G57w19k2 raw thiscall static-form supply (member ComputeTransform -> ComputeTransform_slot)
    static int Check(AudioSettings *pThis, unsigned int a2);  // G57w19k2 raw thiscall static-form supply (member Check -> Check_slot)
    AbstractClass * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd);
    void SetFlag68(char a2);
    void SetFlag70(char a2);
    unsigned int u32_44;  // 0x44 (offset-truth supply)
    unsigned char u32_46;  // 0x46 (offset-truth supply)
};

} // namespace gamemd
