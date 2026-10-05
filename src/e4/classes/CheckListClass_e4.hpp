// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CheckListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
// --- flat members (END) ---
    // G42.34: member decls for supplied_bodies defs (0x488310 family)
    int vt_method_488310(int a2);  // 0x488310
    int Clear();  // 0x488350
    int ScrollUp(int a2);  // 0x488360
    void GetSelected(wchar_t *String2);  // 0x488380
    int SetItemData(wchar_t *String2);  // 0x4883F0
    int COMStub();
    int COMStub_Return0();
    int ddtor(int a2);
    void StubReturn();
    void StubReturnFalse(int a1, int a2, int a3);
    void StubReturnVoid();
    unsigned int u32_174;  // 0x174
    unsigned int u32_16C;  // 0x16C
    CheckListClass * sub_488280(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9);
};

} // namespace gamemd
