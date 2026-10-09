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
    void* Image;  // 0x0 (no offset truth)
    AbstractClass * * FindByWindow(HWND hWnd, LPARAM);
    AbstractClass * * SetTooltip(void * String);
    ControlClass Dtor();
    ControlClass DrawBuildingPlacement(ControlClass * aP1);
    ControlClass Show();
    ControlClass Construct(int a2, int a3, int a4, int a5, int a6, char a7);
    static int Hide(GadgetClass * aP1);  // G57w10-S raw 0x004E1450 (was C2597 interim stub)
    int ClearState(int a2); // N_fix R5 supply (cache truth)
    static int Construct(void * aP0, int aP1, ControlClass * aP2, int aP3, int aP4, int aP5, int aP6);  // G42.33 b9 static-form (call site 0x6c6560)
    static int Construct(void *aP0, int aP1, int aP2, int aP3, int aP4, int aP5, char aP6);  // 0x4E12F0 G42.35 static-form sync (ui/supplied site 0x48E543; truth char a7)
    static int Dtor(void *aP0);
    static int TrackState(...);  // w16g4 C3861 static supply (Cls call-form)  // 0x4E1390 G42.35 static-form sync (ui/supplied sites 0x48E663)
};

} // namespace gamemd
