// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include "e4/classes/MouseClass_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply

struct WWMouseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    void* q010;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q01A;  // 0x1A
    void* q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int XY1;  // 0x32
    unsigned int q033;  // 0x33
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int XY2;  // 0x40
    bool q042;  // 0x42
    MouseClass* q044;  // 0x44
    unsigned int Rect0;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    MouseClass* q058;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int q05D;  // 0x5D
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int somecount_4C;  // 0x68
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
    unsigned int q0081;
    unsigned int Debug;
// --- flat members (END) ---
    MouseClass * updateHotspot(char a2 a2);
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
