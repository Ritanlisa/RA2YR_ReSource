// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CheckListClass {
    void * ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    unsigned char q010;  // 0x10
    char off_11[3];  // 0x11
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int u32_20;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int u32_30;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    int u32_48;  // 0x48
    int q04C;  // 0x4C
    int q050;  // 0x50
    char __pad_54[280];  // 0x54
    unsigned int u32_16C;  // 0x16C
    char __pad_170[4];  // 0x170
    unsigned char u8_174;  // 0x174
    char __pad_175[3];  // 0x175
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  g_var_1d7b82(int a2);  // 0x488310
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
