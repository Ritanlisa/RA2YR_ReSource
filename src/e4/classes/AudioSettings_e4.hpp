// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioSettings {
// --- flat members (BEGIN) ---
    unsigned int Check_slot;
    unsigned int ComputeTransform_slot;
    unsigned int u32_44;
    unsigned int u32_46;
    unsigned int Audio;
    unsigned int Debug;
// --- flat members (END) ---
    static int ComputeTransform(AudioSettings *pThis, unsigned int a2);  // G57w19k2 raw thiscall static-form supply (member ComputeTransform -> ComputeTransform_slot)
    static int Check(AudioSettings *pThis, unsigned int a2);  // G57w19k2 raw thiscall static-form supply (member Check -> Check_slot)
    AbstractClass * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd);
    void SetFlag68(char a2);
    void SetFlag70(char a2);
};

} // namespace gamemd
