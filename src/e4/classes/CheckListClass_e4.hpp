// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CheckListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    char Enabled;  // 0x15
    int Count;  // 0x16
// --- flat members (END) ---
    int  vt_method_488310(int a2);  // 0x488310
    int Clear(void *a1 = 0);  // 0x488350
    int  ScrollUp(int a2);  // 0x488360
    void  GetSelected(void * String2);  // 0x488380
    int  SetItemData(void * String2);  // 0x4883F0
    int COMStub();
    int COMStub_Return0();
    int ddtor(int a2);
    void StubReturn();
    void StubReturnFalse(int a1, int a2, int a3);
    void StubReturnVoid();
    CheckListClass * sub_488280(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9);
    unsigned int u32_118;  // 0x118 (offset-truth)
    unsigned int u32_B8;  // 0xB8 (offset-truth)

    unsigned char __pad_011;  // X10 supply (csp_canon_members)
};

} // namespace gamemd
