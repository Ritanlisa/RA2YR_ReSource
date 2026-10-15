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

    unsigned char __pad_044;  // X10 supply (csp_canon_members)
    unsigned int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    unsigned char q03C[8];  /* char[8] */  // X10 supply (member_lookup)
    unsigned int q04C;  // X10 supply (member_lookup)
    unsigned int q050;  // X10 supply (member_lookup)
    unsigned int q054;  // X10 supply (member_lookup)
    String* __pad_004;  // 0x4 [X30:type_map]
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned char __pad_036;  // 0x36 [X30:canon]
    MouseClass* __pad_06C;  // 0x6C [X30:type_map]
    unsigned int CapacityIncrement;  // [X30:default]
    unsigned int HandleClick_ph;  // [X30:default]
    unsigned int m_MaxX;  // [X30:default]
    unsigned int m_MaxY;  // [X30:default]
    unsigned int m_ScrollY;  // [X30:default]
    unsigned int outBuffer;  // [X30:default]
    unsigned int q_30;  // [X30:default]
};

} // namespace gamemd
