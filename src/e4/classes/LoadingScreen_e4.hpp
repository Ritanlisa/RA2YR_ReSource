// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadingScreen {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    void* q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    void* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q28C;  // 0x28C
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned char q774;  // 0x774
    unsigned char q778;  // 0x778
    void* q366C;  // 0x366C
    void* q3670;  // 0x3670
    void* q3674;  // 0x3674
    void* q3678;  // 0x3678
    unsigned char q367C;  // 0x367C
    unsigned char q3D5C;  // 0x3D5C
    unsigned char q3D60;  // 0x3D60
    unsigned int q00C2;
// --- flat members (END) ---
    char * GetBackgroundImage(ScenarioClass * aP1);
    char * GetOverlayImage(ScenarioClass * aP1);
    char FreeResources3();
    char Init();
    int FreeResources();
    int GetColorScheme();
    int ReleaseAnimObjects();
    void * * LoadSHPs();
    void CleanupObjects();
    void DestroyFileTrees();
    void FreeResources2();
};

} // namespace gamemd
