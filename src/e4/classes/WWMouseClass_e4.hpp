// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include "e4/classes/MouseClass_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MouseClass;  // fix_fwd_type_supply

struct WWMouseClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    unsigned int XY1;  // 0x32
    unsigned int XY2;  // 0x40
    unsigned int somecount_4C;  // 0x68
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
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q048;  // 0x48 (canon-mt)
    static double WWMouseClass_field_0x10(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x1C(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x20(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x24(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x2C(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x30(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x4(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x44(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0x8(...);  // plateau: C2039/C3861 stub
    static double WWMouseClass_field_0xC(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double __pad_14(...);  // plateau: C2039/C3861 stub
    static double __pad_3C(...);  // plateau: C2039/C3861 stub
    static double __pad_48(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
