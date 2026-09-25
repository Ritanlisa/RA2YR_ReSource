// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BuildingPlacement {
// --- flat members (BEGIN) ---
    void* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char u8_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    void* q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    void* q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q085;  // 0x85
    void* q08C;  // 0x8C
    unsigned int ;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q09C;  // 0x9C
    unsigned char q0A0;  // 0xA0
    unsigned char q0A4;  // 0xA4
    unsigned char q0A8;  // 0xA8
    void* q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    void* q124;  // 0x124
    void* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned char q134;  // 0x134
    void* q140;  // 0x140
    void* q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q160;  // 0x160
    unsigned int q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q270;  // 0x270
    void* q278;  // 0x278
    unsigned char q280;  // 0x280
    unsigned char q288;  // 0x288
    unsigned char q300;  // 0x300
    void* q30C;  // 0x30C
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    void* q320;  // 0x320
    void* q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q42B;  // 0x42B
    unsigned char q640;  // 0x640
    unsigned char q648;  // 0x648
    void* q658;  // 0x658
    unsigned char q6B1;  // 0x6B1
    unsigned char q768;  // 0x768
    void* q780;  // 0x780
    unsigned char q784;  // 0x784
    void* q800;  // 0x800
    void* q804;  // 0x804
    unsigned char q808;  // 0x808
    void* qE88;  // 0xE88
    unsigned char qE8C;  // 0xE8C
    void* q1624;  // 0x1624
    void* q1634;  // 0x1634
    void* q1920;  // 0x1920
    unsigned char q1924;  // 0x1924
    void* q3720;  // 0x3720
    unsigned char q3724;  // 0x3724
    unsigned int IsPlacementFlagSet;
    unsigned int RenderBuildingPlacementShadow;
    unsigned int q0042;
    unsigned int q020;
    unsigned int u32_184;
    unsigned int u32_204;
    unsigned int q090;
// --- flat members (END) ---
    VectorClass_flat * * ProcessBuildingPlacementAction();
    unsigned int * FindPosition(int * a0, void* aP1, IUnknown a3);
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int * a3);
    static double ValidateType(...);  // C2597 interim stub
};

} // namespace gamemd
