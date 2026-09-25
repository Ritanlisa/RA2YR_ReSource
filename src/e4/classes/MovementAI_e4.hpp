// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovementAI {
// --- flat members (BEGIN) ---
    char m_Target[12];  // 0x0
    void* q004;  // 0x4
    unsigned int u32_8;  // 0x8
    char m_State[4];  // 0xC
    unsigned int u32_10;  // 0x10
    char MovementAI_field_14[4];  // 0x14
    char MovementAI_field_18[4];  // 0x18
    void * q01C;  // 0x1C
    char q020[4];  // 0x20
    TechnoClass * ptr_24;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int u32_2C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    BombClass * ptr_38;  // 0x38
    bool q039;  // 0x39
    unsigned char q03D;  // 0x3D
    unsigned char q040;  // 0x40
    unsigned int u32_44;  // 0x44
    void* q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    char q050[4];  // 0x50
    TechnoClass * q054;  // 0x54
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_74;  // 0x74
    unsigned int u32_7C;  // 0x7C
    char q080[4];  // 0x80
    TechnoClass * q084;  // 0x84
    unsigned char q085;  // 0x85
    void* q08C;  // 0x8C
    void* q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q09C;  // 0x9C
    unsigned char q0A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_F0;  // 0xF0
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    void* q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int u32_11C;  // 0x11C
    unsigned int q124;  // 0x124
    unsigned int u32_12C;  // 0x12C
    BombClass * q134;  // 0x134
    unsigned int u32_13C;  // 0x13C
    void* q140;  // 0x140
    void* q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned int q150;  // 0x150
    unsigned char q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int u32_188;  // 0x188
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1AC;  // 0x1AC
    unsigned int u32_1CC;  // 0x1CC
    unsigned int u32_1D0;  // 0x1D0
    unsigned int u32_1D4;  // 0x1D4
    void* q1EC;  // 0x1EC
    unsigned char q1F0;  // 0x1F0
    unsigned int u32_204;  // 0x204
    unsigned int u32_21C;  // 0x21C
    AbstractClass * ptr_220;  // 0x220
    void* q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned int q240;  // 0x240
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned char u8_298;  // 0x298
    unsigned int u32_29C;  // 0x29C
    void* q2B4;  // 0x2B4
    unsigned char q2B8;  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    void* q2C0;  // 0x2C0
    unsigned char q2C4;  // 0x2C4
    unsigned int u32_2D0;  // 0x2D0
    unsigned int u32_2D8;  // 0x2D8
    unsigned int u32_2EC;  // 0x2EC
    unsigned int u32_2F4;  // 0x2F4
    unsigned int u32_2F8;  // 0x2F8
    unsigned int q300;  // 0x300
    unsigned int u32_310;  // 0x310
    void* q318;  // 0x318
    unsigned char q31C;  // 0x31C
    void* q320;  // 0x320
    void* q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned int q370;  // 0x370
    unsigned char q374;  // 0x374
    unsigned char q3D9;  // 0x3D9
    unsigned char u8_41E;  // 0x41E
    unsigned int q420;  // 0x420
    unsigned int q428;  // 0x428
    unsigned char u8_431;  // 0x431
    unsigned int q460;  // 0x460
    unsigned int q464;  // 0x464
    unsigned int q468;  // 0x468
    unsigned int u32_49C;  // 0x49C
    unsigned int u32_4A0;  // 0x4A0
    unsigned int u32_4F0;  // 0x4F0
    unsigned int u32_4F4;  // 0x4F4
    unsigned int u32_4FC;  // 0x4FC
    unsigned char u8_50C;  // 0x50C
    unsigned int q540;  // 0x540
    AbstractClass * q544;  // 0x544
    void* q558;  // 0x558
    void* q55C;  // 0x55C
    void* q560;  // 0x560
    void* q564;  // 0x564
    unsigned char q568;  // 0x568
    unsigned int q598;  // 0x598
    void* q5D4;  // 0x5D4
    unsigned char q5D8;  // 0x5D8
    void* q5E0;  // 0x5E0
    unsigned char q5E4;  // 0x5E4
    unsigned int q608;  // 0x608
    void* q63C;  // 0x63C
    void* q640;  // 0x640
    unsigned char q644;  // 0x644
    void* q648;  // 0x648
    void* q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q658;  // 0x658
    unsigned char q664;  // 0x664
    void* q668;  // 0x668
    unsigned char q66C;  // 0x66C
    void* q670;  // 0x670
    unsigned char q674;  // 0x674
    unsigned char q689;  // 0x689
    unsigned char q68F;  // 0x68F
    unsigned char q6BB;  // 0x6BB
    unsigned int u32_6C0;  // 0x6C0
    unsigned int q700;  // 0x700
    void* q704;  // 0x704
    unsigned char q708;  // 0x708
    unsigned int q720;  // 0x720
    unsigned int q728;  // 0x728
    unsigned int q748;  // 0x748
    unsigned int q760;  // 0x760
    unsigned int q768;  // 0x768
    unsigned int q784;  // 0x784
    unsigned int q790;  // 0x790
    void* q800;  // 0x800
    void* q804;  // 0x804
    unsigned char q808;  // 0x808
    void* q834;  // 0x834
    unsigned char q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned int q880;  // 0x880
    unsigned char q884;  // 0x884
    unsigned int q914;  // 0x914
    void* qBE8;  // 0xBE8
    unsigned char qBEC;  // 0xBEC
    unsigned char qEC7;  // 0xEC7
    unsigned int q1030;  // 0x1030
    unsigned char q1054;  // 0x1054
    unsigned int q1064;  // 0x1064
    unsigned int q1120;  // 0x1120
    unsigned int q1124;  // 0x1124
    unsigned int q1128;  // 0x1128
    void* q1170;  // 0x1170
    unsigned char q1174;  // 0x1174
    unsigned int q1180;  // 0x1180
    unsigned int q1184;  // 0x1184
    unsigned int q1264;  // 0x1264
    unsigned int q1268;  // 0x1268
    unsigned int q1344;  // 0x1344
    AbstractClass * q1348;  // 0x1348
    void* q1368;  // 0x1368
    void* q1380;  // 0x1380
    unsigned char q1384;  // 0x1384
    unsigned int q1398;  // 0x1398
    void* q1504;  // 0x1504
    unsigned char q1508;  // 0x1508
    unsigned int q1554;  // 0x1554
    unsigned char q1579;  // 0x1579
    void* q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    void* q1608;  // 0x1608
    unsigned int q1624;  // 0x1624
    void* q1640;  // 0x1640
    unsigned char q1644;  // 0x1644
    void* q1648;  // 0x1648
    unsigned char q1674;  // 0x1674
    unsigned char q1705;  // 0x1705
    unsigned int q1728;  // 0x1728
    void* q1768;  // 0x1768
    unsigned char q176C;  // 0x176C
    unsigned char q1800;  // 0x1800
    unsigned char q1804;  // 0x1804
    unsigned int q1824;  // 0x1824
    unsigned char q1828;  // 0x1828
    unsigned int q1864;  // 0x1864
    unsigned char q1868;  // 0x1868
    unsigned int q1878;  // 0x1878
    unsigned char q187C;  // 0x187C
    unsigned int q1888;  // 0x1888
    unsigned char q188C;  // 0x188C
    unsigned int q1924;  // 0x1924
    unsigned char q1928;  // 0x1928
    void* q1938;  // 0x1938
    unsigned char q193C;  // 0x193C
    unsigned char q1C50;  // 0x1C50
    unsigned char q1C54;  // 0x1C54
    unsigned char q1C58;  // 0x1C58
    unsigned char q1C5C;  // 0x1C5C
    unsigned int q2324;  // 0x2324
    unsigned char q2328;  // 0x2328
    unsigned char q232C;  // 0x232C
    unsigned char q2330;  // 0x2330
    void* q3048;  // 0x3048
    unsigned char q304C;  // 0x304C
    unsigned char q3050;  // 0x3050
    unsigned char q3054;  // 0x3054
    unsigned int q4144;  // 0x4144
    unsigned char q4148;  // 0x4148
    unsigned char q414C;  // 0x414C
    unsigned char q4180;  // 0x4180
    unsigned char q4184;  // 0x4184
    unsigned int q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    unsigned char q438C;  // 0x438C
    unsigned char q4390;  // 0x4390
    unsigned char q4394;  // 0x4394
    void* q4464;  // 0x4464
    unsigned char q4468;  // 0x4468
    unsigned char q446C;  // 0x446C
    unsigned int q4480;  // 0x4480
    unsigned int q4484;  // 0x4484
    unsigned char q4488;  // 0x4488
    unsigned char q448C;  // 0x448C
    unsigned char q4490;  // 0x4490
    unsigned char q44A0;  // 0x44A0
    unsigned char q44A4;  // 0x44A4
    unsigned int q4708;  // 0x4708
    unsigned char q470C;  // 0x470C
    unsigned char q4710;  // 0x4710
    unsigned char q4714;  // 0x4714
    unsigned char q4754;  // 0x4754
    unsigned char q4758;  // 0x4758
    void* q4968;  // 0x4968
    unsigned char q496C;  // 0x496C
    unsigned char q4970;  // 0x4970
    void* q4978;  // 0x4978
    unsigned char q497C;  // 0x497C
    unsigned char q4980;  // 0x4980
    unsigned char q5270;  // 0x5270
    unsigned char q5274;  // 0x5274
    unsigned char q5278;  // 0x5278
    unsigned char q527C;  // 0x527C
    unsigned char q5280;  // 0x5280
    void* q5380;  // 0x5380
    unsigned char q5384;  // 0x5384
    unsigned char q5388;  // 0x5388
    unsigned char q53DC;  // 0x53DC
    unsigned char q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    void* q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    unsigned char q5648;  // 0x5648
    unsigned char q564C;  // 0x564C
    void* q5650;  // 0x5650
    unsigned char q5654;  // 0x5654
    unsigned char q5658;  // 0x5658
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned char q5674;  // 0x5674
    unsigned char q5700;  // 0x5700
    void* q5704;  // 0x5704
    unsigned char q5708;  // 0x5708
    unsigned char q570C;  // 0x570C
    unsigned char q5710;  // 0x5710
    unsigned char q5714;  // 0x5714
    unsigned char q5718;  // 0x5718
    unsigned char q5748;  // 0x5748
    unsigned char q574C;  // 0x574C
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned char q5E50;  // 0x5E50
    unsigned char q5E54;  // 0x5E54
    unsigned char q5E58;  // 0x5E58
    unsigned int q6034;  // 0x6034
    unsigned char q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned char q6040;  // 0x6040
    unsigned char q6144;  // 0x6144
    unsigned char q6148;  // 0x6148
    unsigned int q6180;  // 0x6180
    unsigned char q6184;  // 0x6184
    unsigned char q6188;  // 0x6188
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned char q61A0;  // 0x61A0
    unsigned int q6244;  // 0x6244
    unsigned char q6248;  // 0x6248
    unsigned char q624C;  // 0x624C
    unsigned char q6250;  // 0x6250
    unsigned int q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned char q626C;  // 0x626C
    unsigned char q6270;  // 0x6270
    unsigned int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned char q6288;  // 0x6288
    unsigned char q628C;  // 0x628C
    unsigned int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q629C;  // 0x629C
    unsigned int q6454;  // 0x6454
    unsigned char q6458;  // 0x6458
    unsigned char q7248;  // 0x7248
    unsigned char q724C;  // 0x724C
    unsigned int MovementAI_field_147;
    unsigned int MovementAI_field_184;
    unsigned int u32_84;
    unsigned int u32_85;
// --- flat members (END) ---
    int Check();
    int IsPathMovementAllowed();
    int IsProgressAtEnd();
};

} // namespace gamemd
