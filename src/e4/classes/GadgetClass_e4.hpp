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
// --- flat members (END) ---
    AbstractClass * * FindByWindow(HWND hWnd, LPARAM a2);
    AbstractClass * * SetTooltip(CCINIClass * aP1);
    GadgetClass * * Dtor();
    int DrawBuildingPlacement(void* aP1);
    int Show();
    void * Construct(GadgetClass * aP1, GadgetClass * aP2, GadgetClass * aP3, void* aP4, GadgetClass * aP5, GadgetClass * aP6);
    static double Hide(...);  // C2597 interim stub
};

} // namespace gamemd
