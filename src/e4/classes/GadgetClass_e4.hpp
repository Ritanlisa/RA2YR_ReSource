// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GadgetClass {
    int __pad_0;  // 0x0
    int X;  // 0x4
    int Y;  // 0x8
    int Width;  // 0xC
    int Height;  // 0x10
    bool Visible;  // 0x14
    bool Enabled;  // 0x15
    unsigned char __pad_016;  // 0x16
    char __pad_17[1];  // 0x17
    unsigned int ID;  // 0x18
    unsigned char u8_1C;  // 0x1C
    unsigned char u8_1D;  // 0x1D
    unsigned char u8_1E;  // 0x1E
    char __pad_1F[1];  // 0x1F
    unsigned int u32_20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    BOOL FindByWindow(HWND hWnd, LPARAM);
    AbstractClass * * SetTooltip(void * String);
    int Dtor();
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
