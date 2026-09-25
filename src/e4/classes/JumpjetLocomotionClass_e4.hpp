// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct JumpjetLocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* Owner;  // 0x8
    void* LinkedTo;  // 0xC
    void* Powered;  // 0x10
    char Dirty;  // 0x11
    unsigned short q012;  // 0x12
    void* RefCount;  // 0x14
    void* vtable3;  // 0x18
    char Speed[4];  // 0x1C
    bool q01D;  // 0x1D
    char Climb[4];  // 0x20
    float Crash;  // 0x24
    float Height;  // 0x28
    bool q02B;  // 0x2B
    char Accel[4];  // 0x2C
    float Wobbles;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    float Deviation;  // 0x34
    bool q037;  // 0x37
    char NoWobbles[1];  // 0x38
    char q039[4];  // 0x39
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    bool q03C;  // 0x3C
    unsigned char unknown_3D;  // 0x3D
    unsigned char unknown_3E;  // 0x3E
    unsigned char unknown_3F;  // 0x3F
    char DestinationCoords[12];  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    void* ptr_48;  // 0x48
    bool q04A;  // 0x4A
    bool IsMoving;  // 0x4C
    unsigned char unknown_4D;  // 0x4D
    unsigned char unknown_4E;  // 0x4E
    unsigned char unknown_4F;  // 0x4F
    char CurrentState[4];  // 0x50
    unsigned char u8_53;  // 0x53
    unsigned char q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned int q068;  // 0x68
    void* unknown_6C;  // 0x6C
    unsigned char unknown_6D;  // 0x6D
    unsigned char unknown_6E;  // 0x6E
    unsigned char unknown_6F;  // 0x6F
    int CurrentHeight;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned char q080;  // 0x80
    unsigned char unknown_84;  // 0x84
    unsigned char unknown_85;  // 0x85
    unsigned char unknown_86;  // 0x86
    unsigned char unknown_87;  // 0x87
    char DestinationReached[1];  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned char unknown_91;  // 0x91
    unsigned char unknown_92;  // 0x92
    unsigned char unknown_93;  // 0x93
    void* Piggybackee;  // 0x94
    unsigned char q098;  // 0x98
    void* q09C;  // 0x9C
    unsigned char JumpjetLocomotionClass_field_6C;  // 0xA0
    unsigned char JumpjetLocomotionClass_field_6D;  // 0xA1
    unsigned char JumpjetLocomotionClass_field_6E;  // 0xA2
    unsigned char JumpjetLocomotionClass_field_6F;  // 0xA3
    double CurrentSpeed;  // 0xA4
    unsigned char q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    double MaxSpeed;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned char JumpjetLocomotionClass_field_84;  // 0xB8
    unsigned char JumpjetLocomotionClass_field_85;  // 0xB9
    unsigned char JumpjetLocomotionClass_field_86;  // 0xBA
    unsigned char JumpjetLocomotionClass_field_87;  // 0xBB
    double CurrentWobbles;  // 0xBC
    unsigned char q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    bool q0C4;  // 0xC4
    unsigned char JumpjetLocomotionClass_field_91;  // 0xC5
    unsigned char JumpjetLocomotionClass_field_92;  // 0xC6
    unsigned char JumpjetLocomotionClass_field_93;  // 0xC7
    void* q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    AnimClass* q0D4;  // 0xD4
    ObjectClass* q0E4;  // 0xE4
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    void* q0FC;  // 0xFC
    void* q100;  // 0x100
    void* q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned int q110;  // 0x110
    void* q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned char q128;  // 0x128
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned int q13F;  // 0x13F
    void* q140;  // 0x140
    unsigned char q143;  // 0x143
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    HouseClass* q150;  // 0x150
    unsigned char q154;  // 0x154
    AbstractClass* q158;  // 0x158
    Coord* q15C;  // 0x15C
    AbstractClass* q160;  // 0x160
    void* q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    char q180;  // 0x180
    void* q184;  // 0x184
    double q188;  // 0x188
    unsigned char q198;  // 0x198
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1B1;  // 0x1B1
    unsigned char q1B5;  // 0x1B5
    AbstractTypeClass* q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    void* q1F8;  // 0x1F8
    unsigned char q1FC;  // 0x1FC
    void* q200;  // 0x200
    int q202;  // 0x202
    unsigned char q204;  // 0x204
    unsigned char q206;  // 0x206
    void* q21C;  // 0x21C
    unsigned char q220;  // 0x220
    ObjectClass* q228;  // 0x228
    unsigned int q240;  // 0x240
    unsigned int q244;  // 0x244
    OverlayTypeClass* q248;  // 0x248
    bool q258;  // 0x258
    unsigned int q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q268;  // 0x268
    void* q274;  // 0x274
    bool q278;  // 0x278
    AbstractClass* q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    void* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    void* q2B4;  // 0x2B4
    unsigned char q2B8;  // 0x2B8
    void* q2FC;  // 0x2FC
    unsigned char q300;  // 0x300
    AnimClass* q304;  // 0x304
    unsigned char q308;  // 0x308
    AnimClass* q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    void* q320;  // 0x320
    unsigned char q324;  // 0x324
    void* q328;  // 0x328
    void* q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned char q338;  // 0x338
    unsigned char q340;  // 0x340
    AbstractClass* q344;  // 0x344
    Coord* q348;  // 0x348
    unsigned char q354;  // 0x354
    unsigned int q360;  // 0x360
    void* q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned int q370;  // 0x370
    unsigned char q374;  // 0x374
    unsigned int q380;  // 0x380
    char q384;  // 0x384
    ParticleSystemClass* q388;  // 0x388
    unsigned char q390;  // 0x390
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    void* q3D4;  // 0x3D4
    unsigned char q3D7;  // 0x3D7
    unsigned char q3DB;  // 0x3DB
    unsigned int q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned int q418;  // 0x418
    void* q428;  // 0x428
    void* q42C;  // 0x42C
    unsigned char q430;  // 0x430
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    unsigned int q464;  // 0x464
    AbstractTypeClass* q468;  // 0x468
    AbstractTypeClass* q480;  // 0x480
    unsigned int q487;  // 0x487
    char q488[4];  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned char q493;  // 0x493
    unsigned int q496;  // 0x496
    unsigned char q49A;  // 0x49A
    unsigned int q49D;  // 0x49D
    unsigned char q4A1;  // 0x4A1
    void* q504;  // 0x504
    BuildingTypeClass* q508;  // 0x508
    int q514;  // 0x514
    unsigned char q518;  // 0x518
    BuildingTypeClass* q520;  // 0x520
    unsigned int q528;  // 0x528
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    AnimClass* q530;  // 0x530
    unsigned char q531;  // 0x531
    AbstractClass* q540;  // 0x540
    unsigned char q544;  // 0x544
    void* q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned int q580;  // 0x580
    OverlayTypeClass* q584;  // 0x584
    unsigned int q588;  // 0x588
    ObjectClass* q594;  // 0x594
    void* q598;  // 0x598
    void* q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    bool q600;  // 0x600
    unsigned char q604;  // 0x604
    unsigned int q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned int q620;  // 0x620
    unsigned char q624;  // 0x624
    void* q628;  // 0x628
    unsigned char q62C;  // 0x62C
    ObjectClass * q630;  // 0x630
    AbstractClass* q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q658;  // 0x658
    unsigned char q65C;  // 0x65C
    unsigned char q660;  // 0x660
    unsigned char q680;  // 0x680
    AudioController* q68C;  // 0x68C
    void* q6C4;  // 0x6C4
    unsigned char q6C8;  // 0x6C8
    unsigned int q704;  // 0x704
    TechnoClass* q718;  // 0x718
    unsigned int q728;  // 0x728
    unsigned int q760;  // 0x760
    void* q764;  // 0x764
    unsigned int q768;  // 0x768
    Coord* q774;  // 0x774
    unsigned char q778;  // 0x778
    AnimClass* q784;  // 0x784
    unsigned char q788;  // 0x788
    unsigned char q794;  // 0x794
    unsigned char q798;  // 0x798
    void* q800;  // 0x800
    unsigned char q804;  // 0x804
    void* q808;  // 0x808
    unsigned char q824;  // 0x824
    unsigned int q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    Coord* q834;  // 0x834
    Coord* q840;  // 0x840
    unsigned char q844;  // 0x844
    unsigned char q848;  // 0x848
    AbstractClass* q850;  // 0x850
    void* q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned int q864;  // 0x864
    void* q868;  // 0x868
    unsigned int q880;  // 0x880
    unsigned char q884;  // 0x884
    char q900;  // 0x900
    ParticleSystemClass* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    double q914;  // 0x914
    unsigned int q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    unsigned char q960;  // 0x960
    unsigned int q968;  // 0x968
    void* q980;  // 0x980
    unsigned int q984;  // 0x984
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned char q9CC;  // 0x9CC
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    unsigned char qD6C;  // 0xD6C
    unsigned char qD6E;  // 0xD6E
    DynamicVector* qDF8;  // 0xDF8
    unsigned char qE11;  // 0xE11
    unsigned int q1028;  // 0x1028
    bool q1030;  // 0x1030
    unsigned int q1048;  // 0x1048
    unsigned int q1058;  // 0x1058
    void* q1064;  // 0x1064
    HouseClass* q1068;  // 0x1068
    unsigned int q1078;  // 0x1078
    unsigned int q1088;  // 0x1088
    unsigned int q1110;  // 0x1110
    unsigned int q1124;  // 0x1124
    AbstractTypeClass* q1128;  // 0x1128
    char q1160[4];  // 0x1160
    unsigned char q1164;  // 0x1164
    unsigned int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    void* q1284;  // 0x1284
    BuildingTypeClass* q1288;  // 0x1288
    void* q1298;  // 0x1298
    int q1300;  // 0x1300
    unsigned char q1304;  // 0x1304
    unsigned int q1320;  // 0x1320
    void* q1324;  // 0x1324
    AnimClass* q1328;  // 0x1328
    unsigned int q1330;  // 0x1330
    AbstractClass* q1344;  // 0x1344
    unsigned char q1348;  // 0x1348
    unsigned int q1398;  // 0x1398
    unsigned int q1400;  // 0x1400
    unsigned int q1404;  // 0x1404
    unsigned int q1408;  // 0x1408
    ObjectClass* q1428;  // 0x1428
    unsigned int q1430;  // 0x1430
    unsigned int q1444;  // 0x1444
    unsigned char q1448;  // 0x1448
    int q1464;  // 0x1464
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    unsigned char q14F7;  // 0x14F7
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned char q1529;  // 0x1529
    unsigned char q1540;  // 0x1540
    unsigned int q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    void* q1554;  // 0x1554
    unsigned char q1558;  // 0x1558
    unsigned int q1568;  // 0x1568
    unsigned int q1574;  // 0x1574
    unsigned char q1580;  // 0x1580
    ObjectClass * q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned char q158F;  // 0x158F
    unsigned int q1590;  // 0x1590
    unsigned int q15E2;  // 0x15E2
    unsigned char q15E6;  // 0x15E6
    AbstractClass* q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q1608;  // 0x1608
    unsigned char q1618;  // 0x1618
    unsigned int q1624;  // 0x1624
    unsigned char q1628;  // 0x1628
    unsigned int q1634;  // 0x1634
    unsigned char q1638;  // 0x1638
    void* q1654;  // 0x1654
    unsigned char q1658;  // 0x1658
    unsigned int q1660;  // 0x1660
    unsigned char q1664;  // 0x1664
    char q1668;  // 0x1668
    unsigned char q16C1;  // 0x16C1
    unsigned char q1718;  // 0x1718
    unsigned char q1720;  // 0x1720
    unsigned int q1728;  // 0x1728
    unsigned char q1794;  // 0x1794
    unsigned int q1878;  // 0x1878
    unsigned int q1888;  // 0x1888
    Coord* q1908;  // 0x1908
    unsigned char q1910;  // 0x1910
    AnimClass* q1924;  // 0x1924
    unsigned char q1928;  // 0x1928
    unsigned char q1940;  // 0x1940
    void* q2048;  // 0x2048
    unsigned int q2054;  // 0x2054
    unsigned char q2070;  // 0x2070
    unsigned int q2088;  // 0x2088
    unsigned int q2098;  // 0x2098
    Coord* q2100;  // 0x2100
    AbstractClass* q2128;  // 0x2128
    unsigned int q2148;  // 0x2148
    unsigned char q2178;  // 0x2178
    unsigned int q2180;  // 0x2180
    unsigned int q2198;  // 0x2198
    char q2304;  // 0x2304
    ParticleSystemClass* q2308;  // 0x2308
    unsigned int q2324;  // 0x2324
    unsigned int q2344;  // 0x2344
    unsigned char q2348;  // 0x2348
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned char q2400;  // 0x2400
    unsigned int q2408;  // 0x2408
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    unsigned char q3278;  // 0x3278
    unsigned int q3428;  // 0x3428
    unsigned char q3434;  // 0x3434
    unsigned char q3438;  // 0x3438
    unsigned int q3444;  // 0x3444
    unsigned int q3448;  // 0x3448
    unsigned char q3594;  // 0x3594
    unsigned int q3668;  // 0x3668
    unsigned int q4168;  // 0x4168
    unsigned int q4184;  // 0x4184
    unsigned char q4194;  // 0x4194
    HouseClass* q4200;  // 0x4200
    unsigned char q4210;  // 0x4210
    unsigned int q4368;  // 0x4368
    unsigned int q4388;  // 0x4388
    AbstractTypeClass* q4434;  // 0x4434
    char q4438;  // 0x4438
    char q4448[4];  // 0x4448
    unsigned int q4468;  // 0x4468
    void* q4740;  // 0x4740
    BuildingTypeClass* q4744;  // 0x4744
    unsigned int q4760;  // 0x4760
    int q4864;  // 0x4864
    unsigned char q4868;  // 0x4868
    void* q4900;  // 0x4900
    AnimClass* q4904;  // 0x4904
    unsigned int q4918;  // 0x4918
    unsigned char q4950;  // 0x4950
    unsigned int q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    unsigned int q5128;  // 0x5128
    OverlayTypeClass* q5138;  // 0x5138
    unsigned char q5158;  // 0x5158
    ObjectClass* q5160;  // 0x5160
    unsigned int q5168;  // 0x5168
    void* q5170;  // 0x5170
    unsigned int q5188;  // 0x5188
    int q5220;  // 0x5220
    unsigned int q5270;  // 0x5270
    unsigned int q5358;  // 0x5358
    unsigned char q53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    unsigned char q53DC;  // 0x53DC
    unsigned char q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    bool q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    unsigned char q5438;  // 0x5438
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    void* q5460;  // 0x5460
    unsigned char q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    unsigned int q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    void* q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q54A4;  // 0x54A4
    unsigned char q54A8;  // 0x54A8
    ObjectClass * q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    bool q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5518;  // 0x5518
    unsigned int q5520;  // 0x5520
    unsigned char q5524;  // 0x5524
    DynamicVector* q5550;  // 0x5550
    unsigned char q5554;  // 0x5554
    unsigned char q5558;  // 0x5558
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    unsigned char q5604;  // 0x5604
    unsigned char q5608;  // 0x5608
    unsigned char q560C;  // 0x560C
    unsigned char q5610;  // 0x5610
    unsigned char q5618;  // 0x5618
    unsigned char q561C;  // 0x561C
    unsigned char q5638;  // 0x5638
    unsigned char q563C;  // 0x563C
    unsigned char q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    AbstractTypeClass* q5660;  // 0x5660
    AbstractTypeClass* q5664;  // 0x5664
    AbstractTypeClass* q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned int q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned char q5730;  // 0x5730
    unsigned char q5734;  // 0x5734
    AudioController* q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned char q5758;  // 0x5758
    unsigned char q575C;  // 0x575C
    unsigned char q5760;  // 0x5760
    unsigned char q5764;  // 0x5764
    void* q5774;  // 0x5774
    unsigned char q5778;  // 0x5778
    unsigned char q577C;  // 0x577C
    unsigned char q5780;  // 0x5780
    unsigned char q5784;  // 0x5784
    void* ptr_5788;  // 0x5788
    unsigned char q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    unsigned char q5794;  // 0x5794
    void* q5798;  // 0x5798
    unsigned char q579C;  // 0x579C
    unsigned char q57A0;  // 0x57A0
    unsigned char q57A4;  // 0x57A4
    unsigned char q57A8;  // 0x57A8
    int q5884;  // 0x5884
    unsigned char q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q5920;  // 0x5920
    unsigned char q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned int q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned int q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned int q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    void* q6290;  // 0x6290
    unsigned int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    Coord* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned int Owner4;
    unsigned int u32_48;
    unsigned int u32_49;
// --- flat members (END) ---
    AbstractClass * * FindClosestOccupiableCell();
    BOOL CheckWindowsErrorWrapper_0(int a2);
    BOOL ComputeFloatExpression(int a1);
    BOOL ComputeFloatExpression_2(int a1);
    BOOL GetLinkedLocomotorPointer(int a1);
    BOOL GetLinkedLocomotorPointer_0(int a1);
    BOOL HasFieldStateChanged(unsigned int * a1);
    BOOL HasScoreDisplayChanged(unsigned int * a1);
    BOOL ShortFunc_4B65F0(DropPodLocomotionClass * aP0);
    BOOL ShortFunc_4B66C0(int a1);
    BOOL ShortFunc_54DF70(int a1);
    BOOL ShortFunc_71A100(int a1);
    BOOL ShortFunc_72A1E0(int a1);
    BOOL ShortFunc_75CBA0(int a1);
    BuildingClass * * ProcessRotation();
    Coord * * DispatchLocomotion(unsigned int * a1);
    Coord * * MoveToDestination(int a1);
    Coord * * UpdateFootLocomotion(int a1, int a2, int a3, int a4);
    HRESULT CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3);
    HRESULT InitClass(int * a1, int * pStm);
    HRESULT InitMultiFieldArray_0(int * a1, int * pStm);
    HRESULT LoadFromStream(int * a1, int * pPStm, int a3);
    JumpjetLocomotionClass * ProcessAttach(char a2);
    LONG GetField_0x7C(int a1);
    LONG GetField_0x80(int a1);
    LONG GetInterface2(int a1);
    LONG IUnknownAddRef(int a1);
    LONG IUnknownRelease(volatile LONG * a1);
    LONG SmallStub_4B6750(int a1);
    LONG SmallStub_4B6760(int a1);
    LONG SmallStub_4B6780(int a1);
    LONG SmallStub_4B6790(int a1);
    LONG SmallStub_54E000(int a1);
    LONG SmallStub_54E010(int a1);
    LONG SmallStub_54E030(int a1);
    LONG SmallStub_54E040(int a1);
    LONG SmallStub_6A4310(int a1);
    LONG SmallStub_6A4320(int a1);
    LONG SmallStub_71A170(int a1);
    LONG SmallStub_71A180(int a1);
    LONG SmallStub_71A1A0(int a1);
    LONG SmallStub_71A1B0(int a1);
    LONG SmallStub_75CC40(int a1);
    LONG SmallStub_75CC50(int a1);
    LONG SmallStub_75CC70(int a1);
    LONG SmallStub_75CC80(int a1);
    LONG Stub2(int a1);
    LONG loc_4B4DD0(int a1);
    LONG loc_4B4DE0(int a1);
    LONG loc_6A4340(int a1);
    LONG loc_6A4350(int a1);
    TechnoClass * * ComputeMoveToPosition(int a1);
    TeleportLocomotionClass * ConstructLocomotor(char a2);
    bool CheckBaseClassState(int a1);
    bool CheckBaseClassState_0(int a1);
    bool CheckCompositeState(int a1);
    bool CheckCompositeState_0(int a1);
    bool CheckPiggybackState(int a1);
    bool CheckPiggybackState_0(int a1);
    bool ComputeFloatExpression_0(int a1);
    bool ComputeFloatExpression_4(unsigned int * a1);
    bool DispatchVirtualCall_1(int a1);
    bool IsPositionWithinThreshold(int a1, int a2, int a3, int a4);
    bool IsPositionWithinThreshold_0(int a1, int a2, int a3, int a4);
    bool IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4);
    bool IsStateInRange(int a1);
    bool ShortFunc_718080(int a1);
    bool ShortFunc_728A50(int a1);
    bool StubReturnTrue(int a1);
    bool StubReturnTrue_0(InfantryClass * aP0);
    bool StubReturnTrue_2(int a1);
    bool StubReturnTrue_4(InfantryClass * aP0);
    bool StubReturnTrue_5(int a1);
    bool StubReturnTrue_6(InfantryClass * aP0);
    bool StubReturnTrue_7(int a1);
    char ConvertCoordToCell_4(int a1, int a2, int a3, int a4);
    char DispatchVirtualCall_4(int a1, int a2);
    char IsBridgeBlocking(int a1);
    char IsMapCoordVisible();
    char MissionStub(int a1);
    char MissionStub2(int a1, int a2);
    char MissionStub3(int a1, int a2);
    char MissionStub4(int a1);
    char MissionStub7(int a1);
    char MissionStub8(int a1, int a2, int a3, int a4);
    char MissionStub9(int a1);
    char MoveToChecked(DriveLocomotionClass * aP0, int a2);
    char MoveToChecked_0(ShipLocomotionClass * aP0, int a2);
    char ProcessLocomotionStep(int a1);
    char RandomizeLocomotionParam(HoverLocomotionClass * aP0, HoverLocomotionClass * aP1);
    char ShortFunc_4CFD90(int a1);
    char SmallStub_54AE50(int a1);
    char SmallStub_5AFF70(int a1);
    char SmallStub_75AB30(int a1);
    char SmallStub_75CB20(int a1);
    char StubReturnTrue_1(int a1);
    char StubReturnTrue_3(int a1);
    char StubReturnZero_11(int a1);
    char StubReturnZero_20(unsigned int * a1);
    char SynchronizeFacingDirection(int a1, int a2);
    char SynchronizeFacingDirection_0(int a1, int a2);
    char SynchronizeFacingDirection_1(int a1, int a2);
    char TryMoveToAdjacentCell(unsigned int a1, unsigned int a2);
    char UpdateFacingDirection(int a1, int a2);
    char UpdateFacingDirection_0(int a1, int a2);
    char UpdateFacingDirection_1(int a1, int a2);
    char UpdateFacingDirection_2(int a1, int a2);
    char UpdateFacingDirection_3(int a1, int a2);
    char UpdateFacingDirection_4(int a1, int a2);
    double ComputeVectorLengthMetric();
    float * ComputeAudio3DRotation(unsigned int * a1, float * a2, unsigned int * a3);
    float * ComputeAudio3DRotation_0(int a1, float * a2, unsigned int * a3);
    float * ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3);
    float * ComputeVoxelMatrix(int a1, float * a2, unsigned int * a3);
    int AdjustClimbFacing(unsigned int * a2);
    int CheckAttachStatus();
    int CheckState(TunnelLocomotionClass * aP0);
    int CheckState2(int a1, int a2);
    int CheckState3(int a1);
    int CheckState4(int a1);
    int CheckState5(int a1);
    int CheckStateWithOverride(TunnelLocomotionClass * aP0);
    int CheckWindowsErrorWrapper(int result);
    int CheckWindowsErrorWrapper_1(int result);
    int ClearLocomotionDirty(unsigned char * a1);
    int ClearLocomotionDirty_0(unsigned char * a1);
    int ComputeBounceHeight(int a1);
    int ComputeFloatExpression_3(int a1, int a2, int a3, int a4);
    int ConvertCoordToCell_0(int a1);
    int ConvertCoordToCell_1(int a1, int aP1, void* aP2, void* aP3);
    int ConvertCoordToCell_3(int a2, void * a3);
    int DispatchCheckState(TunnelLocomotionClass * aP0);
    int DispatchCheckState_6A3EB0(TunnelLocomotionClass * aP0);
    int DispatchVirtualCall(int * a1);
    int DispatchVirtualCall_0(int a1);
    int DispatchVirtualCall_10(unsigned int * a1, int a2);
    int DispatchVirtualCall_2(int a1);
    int DispatchVirtualCall_3(unsigned int * a1, int a2);
    int DispatchVirtualCall_5(unsigned int * a1, int a2);
    int DispatchVirtualCall_6(int * a1);
    int DispatchVirtualCall_7(unsigned int * a1, int a2);
    int DispatchVirtualCall_8(FootClass * aP0);
    int DispatchVirtualCall_9(int a1, int a2, int a3, int a4);
    int DrawVoxelAnimation(unsigned char * a1);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetField_0x48(int a1);
    int GetField_0x54(int a1);
    int GetField_0x58(int a1);
    int GetField_0x78(int a1, const void * a2, int * a3);
    int GetFloorZSetContext();
    int GetInterface(int a1, const void * a2, unsigned int * a3);
    int InitMovementParams(int a1, int a2);
    int InitMultiFieldArray(unsigned int * a1, int a2, int a3, int a4);
    int IsAtDestination(int a1, int a2, int a3, int a4);
    int LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_0(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_1(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2);
    int LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2);
    int MissionStub10(int a1);
    int MissionStub11(int a1);
    int MissionStub5(int a1, int a2);
    int MissionStub6(int a1);
    int ResetMovementState(int a1);
    int SetByteField(int a1);
    int SetByteField_0(int a1);
    int SetByteField_1(int a1);
    int SetByteField_2(int a1);
    int SetByteField_3(int a1);
    int SetCoordinateField(unsigned int * a1);
    int SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4);
    int ShortFunc_5B0060(int a1);
    int ShortFunc_718090();
    int ShortFunc_72A1A0(int a1);
    int ShortFunc_72A1C0(int a1);
    int SmallStub_4B64D0(int a1);
    int SmallStub_4B6740(int a1, const void * a2, int * a3);
    int SmallStub_4B6770(int a1, const void * a2, int * a3);
    int SmallStub_517100(int a1);
    int SmallStub_54DFF0(int a1, const void * a2, int * a3);
    int SmallStub_54E020(int a1, const void * a2, int * a3);
    int SmallStub_5B19D0(int a1);
    int SmallStub_663460(int a1);
    int SmallStub_6A3E50(int a1);
    int SmallStub_6A4230(int a1);
    int SmallStub_6A4240(int a1);
    int SmallStub_6A4250(int a1);
    int SmallStub_6A4300(int a1, const void * a2, int * a3);
    int SmallStub_719E20(int a1);
    int SmallStub_71A120();
    int SmallStub_71A160(int a1, const void * a2, int * a3);
    int SmallStub_71A190(int a1, const void * a2, int * a3);
    int SmallStub_75C7E0(int a1);
    int SmallStub_75CC30(int a1, const void * a2, int * a3);
    int SmallStub_75CC60(int a1, const void * a2, int * a3);
    int SmoothObjectPlacement(int a1, int a2, int a3, int a4);
    int StubReturnFalse(int a1);
    int StubReturnTwo(int a1);
    int StubReturnZero(int a1, int a2);
    int StubReturnZero_0(int a1, unsigned int * a2);
    int StubReturnZero_1(int a1);
    int StubReturnZero_10(int a1, unsigned int * a2);
    int StubReturnZero_12(int a1, int a2);
    int StubReturnZero_13(int a1, unsigned int * a2);
    int StubReturnZero_14(int a1);
    int StubReturnZero_15(unsigned int a1);
    int StubReturnZero_16();
    int StubReturnZero_17(int a1, unsigned int * a2);
    int StubReturnZero_18(int a1, int a2);
    int StubReturnZero_19(int a1, unsigned int * a2);
    int StubReturnZero_2(unsigned int a1);
    int StubReturnZero_21(int a1, char a2);
    int StubReturnZero_22(int a1, int a2);
    int StubReturnZero_23(int a1, unsigned int * a2);
    int StubReturnZero_3(int a1, int a2);
    int StubReturnZero_4(int a1, unsigned int * a2);
    int StubReturnZero_5();
    int StubReturnZero_6();
    int StubReturnZero_7(LocomotionClass * aP0, unsigned int * a1);
    int StubReturnZero_8(unsigned char * a1);
    int StubReturnZero_9(int a1, int a2);
    int SyncMatrixTransformState(int a1);
    int SyncMovementPosition(int a1, int a2, int a3, int a4);
    int Thunk_VtableDispatch4(int a1);
    int UpdateAltitude(int a1, const void * a2, int * a3);
    int loc_4B4DC0(int a1, const void * a2, int * a3);
    int loc_6A4330(int a1, const void * a2, int * a3);
    long long ComputeFloatExpression_1(int a1);
    unsigned int * CalculateBobOffset(int a1, unsigned int * a2);
    unsigned int * ClampToCellBounds(MouseClass * aP1, void* aP2, char a4);
    unsigned int * ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, void* aP3);
    unsigned int * ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, void* aP3);
    unsigned int * GetConditionedCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinateConditional(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinate_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetCoordinate_1(unsigned int * a1, unsigned int * a2);
    unsigned int * GetGlobalCoordinate(int a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2);
    unsigned int * GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2);
    unsigned int * GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2);
    unsigned int * GetSpeedCoordinate(unsigned int * a1, unsigned int * a2);
    unsigned int * HasScoreDisplayChanged_514CB0(unsigned int * a1, unsigned int * a2);
    unsigned int * HasScoreDisplayChanged_514D10(unsigned int * a1, unsigned int * a2);
    unsigned int * HasScoreDisplayChanged_516320(unsigned int * a1);
    unsigned int * InitMovementState(unsigned int * a1, int a2);
    unsigned int * InitMovementState_0(unsigned int * a1, int a2);
    unsigned int * InitMultiFieldArray_1(unsigned int * a1);
    unsigned int * SetMovementTarget(int a1, int a2, int a3, int a4);
    unsigned int * ShortFunc_4CF940(int a1, unsigned int * a2);
    void * ComputeMovementTransform(signed int a1, float * a2, unsigned int * a3);
    void * ComputePitchYaw(signed int a1, float * a2, int * a3);
    void * ComputeRotationMatrix(int a1, float * a2, signed int a3);
    void * ComputeVoxelTransform(unsigned int * a1, float * a2, unsigned int * a3);
    void * ComputeVoxelTransform2(unsigned int * a1, float * a2, unsigned int * a3);
    void ** UpdateMovementPosition(unsigned int * a1, double VeteranCombat_low, int a3);
    void ComputeVectorLengthMetric_0();
    void Stub10(int a1);
    void Stub11(int a1, int a2, int a3, int a4);
    void Stub12(int a1, int a2, int a3, int a4, int a5);
    void Stub13(int a1);
    void Stub14(int a1, int a2);
    void Stub15(int a1, int a2, int a3, int a4);
    void Stub16(int a1, int a2);
    void Stub3(int a1);
    void Stub4(int a1);
    void Stub5(int a1);
    void Stub6(int a1);
    void Stub7(int a1, int a2);
    void Stub8(int a1);
    void Stub9(int a1);
    void* * ComputeTurretTransform(unsigned int * a1, void * a2, int * a3);
    void* * ProcessLanding(int * v6, unsigned int * a3);
    void* Update2();
};

} // namespace gamemd
