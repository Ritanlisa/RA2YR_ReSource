// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GadgetClass {
    int __pad_0;  // 0x0
    int X;  // 0x4
    int Y;  // 0x8
    GadgetClass* Width;  // 0xC
    int Height;  // 0x10
    bool Visible;  // 0x14
    bool Enabled;  // 0x15
    unsigned char __pad_016;  // 0x16
    char __pad_17[1];  // 0x17
    unsigned int ID;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * FindByWindow(HWND hWnd, LPARAM);
    AbstractClass * * SetTooltip(void * String);
    ControlClass Dtor();
    ControlClass DrawBuildingPlacement(ControlClass * aP1);
    ControlClass Show();
    ControlClass Construct(int a2, int a3, int a4, int a5, int a6, char a7);
    static int Hide(GadgetClass * aP1);
    int ClearState(int a2, void *a1 = 0);
    ControlClass Construct(int a2, int a3, int a4, int a5, int a6, char a7, void *a7_1 = 0);
    ControlClass Dtor(void *a1 = 0);
    static int TrackState(int p0, int p1);  // x4:signals@0x77a700
};

} // namespace gamemd
