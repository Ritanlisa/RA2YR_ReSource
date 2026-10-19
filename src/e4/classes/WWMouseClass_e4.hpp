// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include "e4/classes/MouseClass_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply

struct WWMouseClass {
    void* ptr_0;  // 0x0
    String* __pad_004;  // 0x4
    int WWMouseClass_field_0x8;  // 0x8
    int WWMouseClass_field_0xC;  // 0xC
    int WWMouseClass_field_0x10;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int q018;  // 0x18
    int q01C;  // 0x1C
    int WWMouseClass_field_0x20;  // 0x20
    int WWMouseClass_field_0x24;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned int WWMouseClass_field_0x2C;  // 0x2C
    int WWMouseClass_field_0x30;  // 0x30
    int WWMouseClass_field_0x34;  // 0x34
    int WWMouseClass_field_0x38;  // 0x38
    unsigned char q03C[8];  // 0x3C
    unsigned int WWMouseClass_field_0x44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    int WWMouseClass_field_0x58;  // 0x58
    char __pad_5C[12];  // 0x5C
    unsigned int somecount_4C;  // 0x68
    MouseClass* __pad_06C;  // 0x6C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int UpdateCursorMovement(void *aP1);
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
