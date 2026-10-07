// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include "e4/classes/MouseClass_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply

struct WWMouseClass {
    static int UpdateCursorMovement(void *aP1);  // 0x7BA090 raw: int __thiscall WWMouseClass::UpdateCursorMovement(WWMouseClass*)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    void* q010;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q031;  // 0x31
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    MouseClass* q044;  // 0x44
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    MouseClass* q058;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    MouseClass* q06C;  // 0x6C
    unsigned int WWMouseClass_field_0x10;
    unsigned int WWMouseClass_field_0x1C;
    unsigned int WWMouseClass_field_0x20;
    unsigned int WWMouseClass_field_0x24;
    unsigned int WWMouseClass_field_0x2C;
    unsigned int WWMouseClass_field_0x30;
    unsigned int WWMouseClass_field_0x4;
    unsigned int WWMouseClass_field_0x44;
    unsigned int WWMouseClass_field_0x8;
    unsigned int WWMouseClass_field_0xC;
    unsigned int *__pad_0;
    unsigned int *__pad_14;
    unsigned int *__pad_3C;
    unsigned int *__pad_48;
    unsigned int q0080;
    unsigned int Debug;
// --- flat members (END) ---
    MouseClass * updateHotspot(char a2);
    char checkCapture();
    int COMStub();
    int checkBounds();
    int checkRegion();
    int checkVisible();
    int hideCursor();
    unsigned int * initSurface();
    unsigned int * updatePosition(unsigned int * a2);
    void releaseMouse();
    void* captureMouse();
};

} // namespace gamemd
