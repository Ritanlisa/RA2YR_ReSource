// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameConfig {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    Coord * ptr_4;  // 0x4
    unsigned char q008;  // 0x8
    CCINIClass * q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q060;  // 0x60
    bool no_cd;  // 0xCD
    bool spawn_mode;  // 0xCE
    bool windowed;  // 0xCF
    bool enable_log;  // 0xD0
    void * q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    bool q208;  // 0x208
    unsigned char q20C;  // 0x20C
    void * q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q320;  // 0x320
    unsigned char q324;  // 0x324
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    bool q518;  // 0x518
    unsigned char q51C;  // 0x51C
    bool q520;  // 0x520
    unsigned char q524;  // 0x524
    unsigned char q674;  // 0x674
    unsigned char q678;  // 0x678
    unsigned char q780;  // 0x780
    unsigned char q784;  // 0x784
    unsigned char q788;  // 0x788
    unsigned char q790;  // 0x790
    unsigned char q794;  // 0x794
    unsigned char q7A4;  // 0x7A4
    unsigned char q7A8;  // 0x7A8
    unsigned char q810;  // 0x810
    unsigned char q814;  // 0x814
    unsigned char q81C;  // 0x81C
    unsigned char q820;  // 0x820
    unsigned char q824;  // 0x824
    bool q1304;  // 0x1304
    unsigned char q1308;  // 0x1308
    unsigned char q130C;  // 0x130C
    unsigned char q1310;  // 0x1310
    unsigned char q1314;  // 0x1314
    unsigned char q1640;  // 0x1640
    unsigned char q1644;  // 0x1644
    unsigned char q164C;  // 0x164C
    unsigned char q1650;  // 0x1650
    unsigned char q16B8;  // 0x16B8
    unsigned char q16BC;  // 0x16BC
    unsigned char q1754;  // 0x1754
    unsigned char q1758;  // 0x1758
    unsigned char q17F0;  // 0x17F0
    unsigned char q17F4;  // 0x17F4
    void * q1910;  // 0x1910
    unsigned char q1914;  // 0x1914
    unsigned char q1918;  // 0x1918
    unsigned char q1920;  // 0x1920
    unsigned char q1924;  // 0x1924
    unsigned char q1950;  // 0x1950
    unsigned char q1954;  // 0x1954
    unsigned char q2064;  // 0x2064
    unsigned char q2068;  // 0x2068
    unsigned char q2070;  // 0x2070
    unsigned char q2074;  // 0x2074
    unsigned char q207C;  // 0x207C
    unsigned char q2080;  // 0x2080
    bool q4868;  // 0x4868
    unsigned char q486C;  // 0x486C
    unsigned char q4870;  // 0x4870
    unsigned char q4874;  // 0x4874
    unsigned char q487C;  // 0x487C
// --- flat members (END) ---
    void * ptr_41;  // 0x41 (ctor-installed filename pointer, member_set evidence 0x5D67B0)
public:  // --- gap2/e4 method declarations ---
    static void * Constructor(GameConfig * aP1);  // 0x5D67B0
    static int BuildChecksum(void * aP1);  // 0x77E7A0
    char * ComputeCRC();
    int ComputeHash();
};

} // namespace gamemd
