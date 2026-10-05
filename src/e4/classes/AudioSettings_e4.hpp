// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioSettings {
// --- flat members (BEGIN) ---
    unsigned int Check;
    unsigned int ComputeTransform;
    unsigned int u32_44;
    unsigned int u32_46;
    unsigned int Audio;
    unsigned int Debug;
// --- flat members (END) ---
    AbstractClass * * DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd);
    void SetFlag68(char a2);
    void SetFlag70(char a2);
};

} // namespace gamemd
