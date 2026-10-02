// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GadgetClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int X;  // 0x4
    int Y;  // 0x8
    int Width;  // 0xC
    int Height;  // 0x10
    bool Visible;  // 0x14
    bool Enabled;  // 0x15
    unsigned int ID;  // 0x18
    unsigned int Hovered;
    unsigned int X0;
    unsigned int *__pad_0;
    unsigned int u32_28;
    unsigned int LinkClass;
    unsigned int ClearState;
    unsigned char ListClass_field_0x0C;  // 0xC
    unsigned char ListClass_field_0x10;  // 0x10
    unsigned char ListClass_field_0x14;  // 0x14
    unsigned char ListClass_field_0x18;  // 0x18
    void* Image;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * FindByWindow(HWND hWnd, LPARAM);
    AbstractClass * * SetTooltip(void * String);
    ControlClass Dtor();
    ControlClass DrawBuildingPlacement(ControlClass * aP1);
    ControlClass Show();
    ControlClass Construct(int a2, int a3, int a4, int a5, int a6, char a7);
    static double Hide(...);  // C2597 interim stub
};

} // namespace gamemd
