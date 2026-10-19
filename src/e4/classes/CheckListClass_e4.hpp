// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CheckListClass {
    void* ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int CheckListClass_field_0x08;  // 0x8
    int CheckListClass_field_0x0C;  // 0xC
    int CheckListClass_field_0x10;  // 0x10
    int CheckListClass_field_0x14;  // 0x14
    int CheckListClass_field_0x18;  // 0x18
    int CheckListClass_field_0x1C;  // 0x1C
    int CheckListClass_field_0x20;  // 0x20
    int CheckListClass_field_0x24;  // 0x24
    int CheckListClass_field_0x28;  // 0x28
    int CheckListClass_field_0x2C;  // 0x2C
    int CheckListClass_field_0x30;  // 0x30
    int CheckListClass_field_0x34;  // 0x34
    int CheckListClass_field_0x38;  // 0x38
    int CheckListClass_field_0x3C;  // 0x3C
    int CheckListClass_field_0x40;  // 0x40
    int CheckListClass_field_0x44;  // 0x44
    int CheckListClass_field_0x48;  // 0x48
    int CheckListClass_field_0x4C;  // 0x4C
    int CheckListClass_field_0x50;  // 0x50
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
