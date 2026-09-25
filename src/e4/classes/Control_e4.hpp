// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Control {
// --- flat members (BEGIN) ---
    char Control_field_00[4];  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q088;  // 0x88
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    unsigned char q180;  // 0x180
    unsigned char q184;  // 0x184
    unsigned char q1D4;  // 0x1D4
    unsigned char q1D8;  // 0x1D8
    unsigned char q1DC;  // 0x1DC
    unsigned char q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned char q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned char q2B4;  // 0x2B4
    unsigned char q2B8;  // 0x2B8
    unsigned char q2BC;  // 0x2BC
    unsigned char q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned char q35C;  // 0x35C
    unsigned char q360;  // 0x360
    unsigned char q364;  // 0x364
    void* q374;  // 0x374
    unsigned char q378;  // 0x378
    unsigned char q37C;  // 0x37C
    unsigned char q384;  // 0x384
    unsigned char q388;  // 0x388
    unsigned char q468;  // 0x468
    unsigned char q46C;  // 0x46C
    unsigned char q4F8;  // 0x4F8
    unsigned char q4FC;  // 0x4FC
    unsigned char q61C;  // 0x61C
    unsigned char q620;  // 0x620
    unsigned char q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned char q668;  // 0x668
    unsigned char q66C;  // 0x66C
    unsigned char q824;  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q848;  // 0x848
    unsigned char q84C;  // 0x84C
    unsigned char q860;  // 0x860
    unsigned char q864;  // 0x864
    unsigned char q878;  // 0x878
    unsigned char q87C;  // 0x87C
    void* q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q894;  // 0x894
    unsigned char q898;  // 0x898
    unsigned char q900;  // 0x900
    unsigned int q0040;
// --- flat members (END) ---
    int CheckControlTypeDialog();
    int DispatchClick(ControlClass * aP1);
    int RepositionControlsDialog();
};

} // namespace gamemd
