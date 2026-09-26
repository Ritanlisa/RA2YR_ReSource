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
    void* q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned int u32_20;  // 0x20
    int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned int q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0BC;  // 0xBC
    void* q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    void* q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned int u32_16C;  // 0x16C
    unsigned int q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q180;  // 0x180
    unsigned int q184;  // 0x184
    unsigned char q188;  // 0x188
    void* q200;  // 0x200
    unsigned char q204;  // 0x204
    void* q220;  // 0x220
    unsigned char q224;  // 0x224
    void* q264;  // 0x264
    unsigned int q274;  // 0x274
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q290;  // 0x290
    unsigned int u32_2E0;  // 0x2E0
    unsigned int q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q354;  // 0x354
    unsigned int q364;  // 0x364
    unsigned int q368;  // 0x368
    void* q374;  // 0x374
    unsigned char q384;  // 0x384
    unsigned int q388;  // 0x388
    void* q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned int q628;  // 0x628
    unsigned char q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned int q768;  // 0x768
    unsigned int q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q854;  // 0x854
    unsigned int q868;  // 0x868
    void* q884;  // 0x884
    unsigned char q900;  // 0x900
    unsigned int q904;  // 0x904
    unsigned char q914;  // 0x914
    void* q1298;  // 0x1298
    void* q1348;  // 0x1348
    unsigned char q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q2178;  // 0x2178
    unsigned int q5545;  // 0x5545
    unsigned int q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    unsigned char q621C;  // 0x621C
    unsigned int vtable20;
    unsigned int ClearState;
// --- flat members (END) ---
    AbstractClass * * FindByWindow(HWND hWnd, LPARAM a2);
    AbstractClass * * SetTooltip(CCINIClass * aP1);
    GadgetClass * * Dtor();
    int DrawBuildingPlacement(void* aP1);
    int Show();
    void * Construct(GadgetClass * aP1, GadgetClass * aP2, GadgetClass * aP3, void* aP4, GadgetClass * aP5, GadgetClass * aP6);
    static double Hide(...);  // C2597 interim stub
    return ClearState(aP1);  // def-aligned
};

} // namespace gamemd
