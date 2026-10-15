// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GadgetClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int X;  // 0x4
    int Y;  // 0x8
    GadgetClass* Width;  // 0xC [X30:type_map]
int Height;  // 0x10 [X35-L7 kind=int]
    bool Visible;  // 0x14
    bool Enabled;  // 0x15
unsigned int ID;  // 0x18 [X35-L7 kind=unsigned int]
// --- flat members (END) ---
    void* Image;  // 0x0 (no offset truth)
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
    unsigned int *q000;  // 0x0 (offset-truth)
    GadgetClass* q00C;  // 0xC (offset-truth) [X30:type_map]
    unsigned int q014;  // 0x14 (offset-truth)
int u32_10;  // 0x10 [X35-L7 kind=int]
    unsigned int u32_16C;  // 0x16C (offset-truth)
    unsigned int u32_170;  // 0x170 (offset-truth)
unsigned int u32_18;  // 0x18 [X35-L7 kind=unsigned int]
unsigned int u32_28;  // 0x28 [X35-L7 kind=unsigned int]
    unsigned char u32_2D;  // 0x2D (offset-truth)
    unsigned int u32_44;  // 0x44 (offset-truth)
    unsigned int u32_4C;  // 0x4C (offset-truth)

    unsigned int q050;  // X10 supply (member_lookup)
    unsigned char u32_C80[4];  /* void */  // X10 supply (member_lookup)
    unsigned char q060;  // 0x60
    unsigned char __pad_016;  // 0x16 [X30:canon]
    unsigned int Hovered;  // [X30:default]
    int __pad_0;  // 0x0 [X30:type_map]
};

} // namespace gamemd
