// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include "e4/classes/MouseClass_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply

struct WWMouseClass {
    void* ptr_0;  // 0x0
    String* __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    unsigned char q03C[4];  // 0x3C
    unsigned int XY2;  // 0x40
    unsigned int WWMouseClass_field_0x44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    int q058;  // 0x58
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
