// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ObjectTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    int Strength;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    void* Image;  // 0x16
    void* nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    char NeedsSaveOrLink[4];  // 0x20
    char BarrelVoxel[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    bool q02B;  // 0x2B
    char ChargerBarrels_0x12[4];  // 0x2C
    bool NoSpawnAlt;  // 0x30
    unsigned char q031;  // 0x31
    char TurretVoxel[4];  // 0x32
    unsigned char q034;  // 0x34
    int u32_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    void* zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    char q040[4];  // 0x40
    bool q042;  // 0x42
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int u32_50;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q05D;  // 0x5D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_88;  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    Color* q098;  // 0x98
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int q0A0;  // 0xA0
    unsigned int ;  // 0xA4
    bool ImageAllocated;  // 0xA8
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int ChargerTurrets;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    CampaignClass* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    void* q0D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    void* q0E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    unsigned int q100;  // 0x100
    char ChargerBarrels[72];  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    DynamicVector* q110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    bool q14C;  // 0x14C
    unsigned char q14D;  // 0x14D
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int u32_158;  // 0x158
    unsigned char q15C;  // 0x15C
    int q160;  // 0x160
    unsigned int q162;  // 0x162
    void * q164;  // 0x164
    unsigned char q166;  // 0x166
    char q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    char q180[4];  // 0x180
    char q184[4];  // 0x184
    char q188[4];  // 0x188
    unsigned int q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char q19D;  // 0x19D
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned char q1B9;  // 0x1B9
    AbstractTypeClass* q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    ConnectionPointClass* q1E8;  // 0x1E8
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile_0x19;  // 0x1F8
    bool AlternateArcticArt;  // 0x1F9
    bool ArcticArtInUse;  // 0x1FA
    char AlphaImageFile_0x19;  // 0x1FB
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Selectable;  // 0x200
    bool LegalTarget;  // 0x201
    bool Insignificant;  // 0x202
    bool Immune;  // 0x203
    bool IsLogic;  // 0x204
    bool AllowCellContent;  // 0x205
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    unsigned char q210;  // 0x210
    bool q211;  // 0x211
    bool q212;  // 0x212
    char AlphaImageFile;  // 0x213
    unsigned int q214;  // 0x214
    AbstractClass* q218;  // 0x218
    AbstractClass* q21C;  // 0x21C
    unsigned int q220;  // 0x220
    void* q224;  // 0x224
    unsigned int q228;  // 0x228
    unsigned char u8_22B;  // 0x22B
    bool q22C;  // 0x22C
    bool q22D;  // 0x22D
    bool q22E;  // 0x22E
    bool q22F;  // 0x22F
    bool q230;  // 0x230
    bool q231;  // 0x231
    bool q232;  // 0x232
    bool q233;  // 0x233
    bool q234;  // 0x234
    bool q235;  // 0x235
    bool q236;  // 0x236
    bool q237;  // 0x237
    bool q238;  // 0x238
    bool q239;  // 0x239
    bool q23A;  // 0x23A
    char q23B[3];  // 0x23B
    unsigned char u8_23C;  // 0x23C
    bool q23D;  // 0x23D
    int LineTrailColorDecrement;  // 0x240
    unsigned int VoxelCaches_4;  // 0x244
    void* q248;  // 0x248
    void* q24C;  // 0x24C
    void* q254;  // 0x254
    void* q258;  // 0x258
    void* q25C;  // 0x25C
    void* q260;  // 0x260
    char q264[4];  // 0x264
    void* q268;  // 0x268
    void* q26C;  // 0x26C
    void* q270;  // 0x270
    void* q274;  // 0x274
    char q278[4];  // 0x278
    void* q27C;  // 0x27C
    void* q280;  // 0x280
    void* q284;  // 0x284
    void* q288;  // 0x288
    char q28C[4];  // 0x28C
    void* q290;  // 0x290
    unsigned char q294;  // 0x294
    void* q298;  // 0x298
    unsigned char q29C;  // 0x29C
    void* q2A0;  // 0x2A0
    void* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    void* q2B0;  // 0x2B0
    AbstractClass* q2B4;  // 0x2B4
    unsigned int u32_2B8;  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    unsigned char q2C0;  // 0x2C0
    unsigned char u8_2C5;  // 0x2C5
    unsigned int u32_2C8;  // 0x2C8
    unsigned int u32_2CC;  // 0x2CC
    void* q2D8;  // 0x2D8
    AnimClass* q2DC;  // 0x2DC
    unsigned char q2E0;  // 0x2E0
    unsigned int q300;  // 0x300
    unsigned int q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned int q30A;  // 0x30A
    ObjectClass* q30C;  // 0x30C
    unsigned char q30E;  // 0x30E
    unsigned int q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned int q320;  // 0x320
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned int u32_330;  // 0x330
    unsigned char q334;  // 0x334
    Color* q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned int q344;  // 0x344
    unsigned char q348;  // 0x348
    unsigned char q34C;  // 0x34C
    unsigned char q350;  // 0x350
    unsigned int q354;  // 0x354
    unsigned char q358;  // 0x358
    unsigned char q35C;  // 0x35C
    char q360;  // 0x360
    void* q364;  // 0x364
    bool q366;  // 0x366
    unsigned char q368;  // 0x368
    unsigned char q36A;  // 0x36A
    void * q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned char q378;  // 0x378
    unsigned int q380;  // 0x380
    char q384[4];  // 0x384
    char q388[4];  // 0x388
    void* q390;  // 0x390
    unsigned char q394;  // 0x394
    void* q3AC;  // 0x3AC
    unsigned char q3B0;  // 0x3B0
    unsigned int q3B7;  // 0x3B7
    unsigned char q3BB;  // 0x3BB
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    void* q3C8;  // 0x3C8
    unsigned char q3CC;  // 0x3CC
    unsigned char q3D7;  // 0x3D7
    unsigned char q3DB;  // 0x3DB
    void* q3E4;  // 0x3E4
    unsigned char q3E8;  // 0x3E8
    unsigned int q400;  // 0x400
    unsigned int q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned int q418;  // 0x418
    void* q41C;  // 0x41C
    unsigned char q420;  // 0x420
    unsigned int q428;  // 0x428
    HouseClass* q42C;  // 0x42C
    void* q43C;  // 0x43C
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    void* q458;  // 0x458
    unsigned char q45C;  // 0x45C
    unsigned int q464;  // 0x464
    AbstractTypeClass* q468;  // 0x468
    void* q474;  // 0x474
    unsigned char q478;  // 0x478
    AbstractTypeClass* q480;  // 0x480
    unsigned int q487;  // 0x487
    ConnectionPointClass* q488;  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned char q493;  // 0x493
    void* q498;  // 0x498
    unsigned char q49A;  // 0x49A
    void* q49C;  // 0x49C
    unsigned int q49D;  // 0x49D
    unsigned char q4A1;  // 0x4A1
    void* q4A4;  // 0x4A4
    void* q4A8;  // 0x4A8
    unsigned char q4AC;  // 0x4AC
    void* q4B0;  // 0x4B0
    void* q4B4;  // 0x4B4
    unsigned char q4B8;  // 0x4B8
    void* q4C4;  // 0x4C4
    unsigned char q4C8;  // 0x4C8
    void* q4CC;  // 0x4CC
    void* q4D0;  // 0x4D0
    unsigned char q4D4;  // 0x4D4
    void* q4D8;  // 0x4D8
    unsigned char q4DC;  // 0x4DC
    void* q4F8;  // 0x4F8
    unsigned char q4FC;  // 0x4FC
    int q500;  // 0x500
    char q504;  // 0x504
    bool q508;  // 0x508
    void* q50C;  // 0x50C
    bool q510;  // 0x510
    bool q514;  // 0x514
    bool q518;  // 0x518
    void* q51C;  // 0x51C
    bool q520;  // 0x520
    char q524[4];  // 0x524
    unsigned char q528;  // 0x528
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    char q530;  // 0x530
    void* q534;  // 0x534
    void* q538;  // 0x538
    AbstractClass* q53C;  // 0x53C
    AbstractClass* q540;  // 0x540
    unsigned int q544;  // 0x544
    void* q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned int q550;  // 0x550
    unsigned char q554;  // 0x554
    char q558;  // 0x558
    void* q55C;  // 0x55C
    char q560;  // 0x560
    char q564;  // 0x564
    char q568;  // 0x568
    char q570;  // 0x570
    unsigned char q574;  // 0x574
    char q580[4];  // 0x580
    void* q584;  // 0x584
    void* q588;  // 0x588
    void* q58C;  // 0x58C
    unsigned int u32_590;  // 0x590
    unsigned int q594;  // 0x594
    unsigned int q598;  // 0x598
    void* q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    ObjectClass* q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    void* q5B4;  // 0x5B4
    unsigned char q5B8;  // 0x5B8
    unsigned char q5C0;  // 0x5C0
    void* q5C4;  // 0x5C4
    unsigned char q5C8;  // 0x5C8
    void* q5CC;  // 0x5CC
    unsigned char q5D0;  // 0x5D0
    void* q5D4;  // 0x5D4
    unsigned char q5D8;  // 0x5D8
    ObjectClass* q5E0;  // 0x5E0
    unsigned char q5E4;  // 0x5E4
    unsigned int q5E8;  // 0x5E8
    BuildingTypeClass* q5EC;  // 0x5EC
    unsigned char q5F0;  // 0x5F0
    void* q5F4;  // 0x5F4
    unsigned char q5F8;  // 0x5F8
    void* q5FC;  // 0x5FC
    void* q600;  // 0x600
    void* q604;  // 0x604
    void* q608;  // 0x608
    AbstractClass* q60C;  // 0x60C
    AbstractClass* q610;  // 0x610
    AbstractClass* q614;  // 0x614
    AbstractClass* q618;  // 0x618
    AbstractClass* q61C;  // 0x61C
    void* q620;  // 0x620
    void* q624;  // 0x624
    void* q628;  // 0x628
    void* q62C;  // 0x62C
    unsigned int q630;  // 0x630
    AbstractClass* q634;  // 0x634
    unsigned char q638;  // 0x638
    void* q640;  // 0x640
    void* q644;  // 0x644
    void* q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q658;  // 0x658
    AbstractClass* q65C;  // 0x65C
    unsigned char q660;  // 0x660
    AbstractClass* q664;  // 0x664
    unsigned int q668;  // 0x668
    AbstractClass* q670;  // 0x670
    AbstractClass* q674;  // 0x674
    unsigned char q678;  // 0x678
    AbstractClass* q67C;  // 0x67C
    unsigned char q680;  // 0x680
    unsigned char q684;  // 0x684
    AbstractClass* q688;  // 0x688
    AudioController* q68C;  // 0x68C
    unsigned char q690;  // 0x690
    AbstractClass* q694;  // 0x694
    unsigned char q698;  // 0x698
    AbstractClass* q69C;  // 0x69C
    unsigned char q6A0;  // 0x6A0
    AbstractClass* q6C0;  // 0x6C0
    unsigned char q6C4;  // 0x6C4
    unsigned int q6C8;  // 0x6C8
    void* q6CC;  // 0x6CC
    void* q6D0;  // 0x6D0
    unsigned char q6D4;  // 0x6D4
    AbstractClass* q6D8;  // 0x6D8
    unsigned char q6DC;  // 0x6DC
    unsigned int q6E0;  // 0x6E0
    unsigned int q6E4;  // 0x6E4
    unsigned int q6E8;  // 0x6E8
    unsigned int q6EC;  // 0x6EC
    unsigned int u32_6F0;  // 0x6F0
    AbstractClass* q6F4;  // 0x6F4
    unsigned int q6F8;  // 0x6F8
    AbstractClass* q6FC;  // 0x6FC
    unsigned int q700;  // 0x700
    AbstractClass* q704;  // 0x704
    void* q708;  // 0x708
    unsigned int q70C;  // 0x70C
    unsigned int q710;  // 0x710
    unsigned char q714;  // 0x714
    TechnoClass* q718;  // 0x718
    unsigned char q71C;  // 0x71C
    unsigned int q728;  // 0x728
    void* q734;  // 0x734
    unsigned char q738;  // 0x738
    void* q75C;  // 0x75C
    unsigned char q760;  // 0x760
    void* q764;  // 0x764
    unsigned int q768;  // 0x768
    void* q76C;  // 0x76C
    unsigned char q770;  // 0x770
    Coord* q774;  // 0x774
    unsigned int q778;  // 0x778
    void* q77C;  // 0x77C
    unsigned char q780;  // 0x780
    AnimClass* q784;  // 0x784
    void* q788;  // 0x788
    unsigned char q78C;  // 0x78C
    unsigned int q790;  // 0x790
    void* q794;  // 0x794
    unsigned char q798;  // 0x798
    void* q79C;  // 0x79C
    unsigned int q7A0;  // 0x7A0
    unsigned int q7A4;  // 0x7A4
    unsigned char q7A8;  // 0x7A8
    unsigned char q7AC;  // 0x7AC
    void* q7B0;  // 0x7B0
    void* q7B4;  // 0x7B4
    unsigned char q7B8;  // 0x7B8
    unsigned int q7BC;  // 0x7BC
    unsigned char q7C0;  // 0x7C0
    unsigned int q7C4;  // 0x7C4
    unsigned char q7C8;  // 0x7C8
    unsigned int u32_7E0;  // 0x7E0
    void* q800;  // 0x800
    unsigned char q804;  // 0x804
    unsigned int q808;  // 0x808
    bool q818;  // 0x818
    Color* q824;  // 0x824
    unsigned int q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    Coord* q834;  // 0x834
    Coord* q840;  // 0x840
    unsigned char q844;  // 0x844
    unsigned char q848;  // 0x848
    unsigned int u32_84C;  // 0x84C
    AbstractClass* q850;  // 0x850
    void* q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned char q860;  // 0x860
    unsigned int q864;  // 0x864
    void* q868;  // 0x868
    unsigned char q86C;  // 0x86C
    bool q870;  // 0x870
    unsigned char q874;  // 0x874
    unsigned char q878;  // 0x878
    unsigned int q880;  // 0x880
    unsigned int q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q8A0;  // 0x8A0
    unsigned char q8A4;  // 0x8A4
    unsigned char q8A8;  // 0x8A8
    void* q8AC;  // 0x8AC
    unsigned char q8B0;  // 0x8B0
    void* q8C8;  // 0x8C8
    unsigned char q8CC;  // 0x8CC
    void* q8E4;  // 0x8E4
    unsigned char q8E8;  // 0x8E8
    char q900;  // 0x900
    ParticleSystemClass* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned char q910;  // 0x910
    char q914[4];  // 0x914
    unsigned char q918;  // 0x918
    void* q91C;  // 0x91C
    unsigned char q920;  // 0x920
    unsigned int q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    void* q938;  // 0x938
    unsigned char q93C;  // 0x93C
    void* q940;  // 0x940
    unsigned char q944;  // 0x944
    void* q954;  // 0x954
    unsigned char q958;  // 0x958
    unsigned char q960;  // 0x960
    unsigned int q968;  // 0x968
    void* q970;  // 0x970
    unsigned char q974;  // 0x974
    unsigned int q984;  // 0x984
    void* q98C;  // 0x98C
    unsigned char q990;  // 0x990
    void* q9A8;  // 0x9A8
    unsigned char q9AC;  // 0x9AC
    void* q9C4;  // 0x9C4
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned char q9CC;  // 0x9CC
    void* q9E0;  // 0x9E0
    unsigned char q9E4;  // 0x9E4
    void* q9FC;  // 0x9FC
    unsigned char qA00;  // 0xA00
    void* qA18;  // 0xA18
    unsigned char qA1C;  // 0xA1C
    void* qA34;  // 0xA34
    unsigned char qA38;  // 0xA38
    void* qA50;  // 0xA50
    unsigned char qA54;  // 0xA54
    void* qA6C;  // 0xA6C
    unsigned char qA70;  // 0xA70
    void* qA88;  // 0xA88
    unsigned char qA8C;  // 0xA8C
    void* qAA4;  // 0xAA4
    unsigned char qAA8;  // 0xAA8
    void* qAC0;  // 0xAC0
    unsigned char qAC4;  // 0xAC4
    void* qADC;  // 0xADC
    unsigned char qAE0;  // 0xAE0
    void* qB1C;  // 0xB1C
    void* qB20;  // 0xB20
    unsigned char qB24;  // 0xB24
    void* qB3C;  // 0xB3C
    unsigned char qB40;  // 0xB40
    void* qB5C;  // 0xB5C
    unsigned char qB60;  // 0xB60
    void* qB74;  // 0xB74
    unsigned char qB78;  // 0xB78
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    void* qBC0;  // 0xBC0
    unsigned char qBC4;  // 0xBC4
    void* qBF0;  // 0xBF0
    void* qBF4;  // 0xBF4
    unsigned char qBF8;  // 0xBF8
    void* qBFC;  // 0xBFC
    void* qC00;  // 0xC00
    unsigned char qC04;  // 0xC04
    void* qC20;  // 0xC20
    unsigned char qC24;  // 0xC24
    void* qC58;  // 0xC58
    unsigned char qC5C;  // 0xC5C
    unsigned char u8_C8E;  // 0xC8E
    void* qC90;  // 0xC90
    unsigned char qC94;  // 0xC94
    unsigned int qCA1;  // 0xCA1
    unsigned char qCA5;  // 0xCA5
    void* qCC8;  // 0xCC8
    unsigned char qCCC;  // 0xCCC
    unsigned int qCD5;  // 0xCD5
    unsigned char qCD9;  // 0xCD9
    void* qD38;  // 0xD38
    unsigned char qD3C;  // 0xD3C
    AbstractClass* qD64;  // 0xD64
    void* qD68;  // 0xD68
    unsigned char qD6C;  // 0xD6C
    Tactical* qD70;  // 0xD70
    AbstractClass* qD74;  // 0xD74
    void* qD78;  // 0xD78
    void* qD7C;  // 0xD7C
    void* qD80;  // 0xD80
    unsigned char qD84;  // 0xD84
    void* qD9C;  // 0xD9C
    unsigned char qDA0;  // 0xDA0
    void* qDB0;  // 0xDB0
    unsigned char qDB4;  // 0xDB4
    void* qDB8;  // 0xDB8
    unsigned char qDBC;  // 0xDBC
    unsigned char u8_DD0;  // 0xDD0
    void* qDD4;  // 0xDD4
    unsigned char qDD8;  // 0xDD8
    unsigned int u32_DF0;  // 0xDF0
    void* qDF4;  // 0xDF4
    DynamicVector* qDF8;  // 0xDF8
    unsigned int u32_DFC;  // 0xDFC
    unsigned int qE00;  // 0xE00
    unsigned int qE04;  // 0xE04
    unsigned char qE08;  // 0xE08
    void* qE0C;  // 0xE0C
    void* qE10;  // 0xE10
    unsigned char qE14;  // 0xE14
    void* qE2C;  // 0xE2C
    unsigned char qE30;  // 0xE30
    ObjectTypeClass* qE48;  // 0xE48
    void* qE4C;  // 0xE4C
    unsigned char qE50;  // 0xE50
    unsigned int u32_E58;  // 0xE58
    AbstractClass* qE5C;  // 0xE5C
    unsigned char qE60;  // 0xE60
    void* qE68;  // 0xE68
    unsigned char qE6C;  // 0xE6C
    void* qE84;  // 0xE84
    unsigned char qE88;  // 0xE88
    unsigned int qEA0;  // 0xEA0
    unsigned char qEA4;  // 0xEA4
    ObjectTypeClass* qEBC;  // 0xEBC
    unsigned char qEC0;  // 0xEC0
    void* qEC4;  // 0xEC4
    unsigned char qEC8;  // 0xEC8
    unsigned int u32_ED4;  // 0xED4
    ObjectTypeClass* qEE0;  // 0xEE0
    AbstractTypeClass* qEE4;  // 0xEE4
    void* qEE8;  // 0xEE8
    unsigned char qEEC;  // 0xEEC
    unsigned int qF04;  // 0xF04
    unsigned int qF08;  // 0xF08
    unsigned int qF0C;  // 0xF0C
    unsigned char qF10;  // 0xF10
    void* qF20;  // 0xF20
    unsigned char qF24;  // 0xF24
    WeaponTypeClass* qF8C;  // 0xF8C
    unsigned char qF90;  // 0xF90
    ObjectTypeClass* qFC0;  // 0xFC0
    ObjectTypeClass* qFC4;  // 0xFC4
    unsigned char qFC8;  // 0xFC8
    unsigned char q1000;  // 0x1000
    void* q1014;  // 0x1014
    unsigned char q1018;  // 0x1018
    unsigned int q1024;  // 0x1024
    unsigned int q1028;  // 0x1028
    CampaignClass* q1030;  // 0x1030
    void* q1044;  // 0x1044
    unsigned int q1048;  // 0x1048
    void* q104C;  // 0x104C
    void* q1050;  // 0x1050
    void* q1054;  // 0x1054
    unsigned char q1058;  // 0x1058
    void* q105C;  // 0x105C
    unsigned char q1060;  // 0x1060
    unsigned int q1064;  // 0x1064
    HouseClass* q1068;  // 0x1068
    void* q106C;  // 0x106C
    unsigned char q1070;  // 0x1070
    unsigned int q1074;  // 0x1074
    unsigned int q1078;  // 0x1078
    void* q107C;  // 0x107C
    unsigned char q1080;  // 0x1080
    void* q1084;  // 0x1084
    unsigned int q1088;  // 0x1088
    void* q108C;  // 0x108C
    unsigned char q1090;  // 0x1090
    void* q1094;  // 0x1094
    unsigned char q1098;  // 0x1098
    void* q109C;  // 0x109C
    unsigned char q10A0;  // 0x10A0
    void* q10A4;  // 0x10A4
    unsigned char q10A8;  // 0x10A8
    void* q10AC;  // 0x10AC
    unsigned char q10B0;  // 0x10B0
    void* q10B4;  // 0x10B4
    unsigned char q10B8;  // 0x10B8
    void* q10BC;  // 0x10BC
    void* q10C0;  // 0x10C0
    unsigned char q10C4;  // 0x10C4
    unsigned char q10C8;  // 0x10C8
    void* q10CC;  // 0x10CC
    unsigned char q10D0;  // 0x10D0
    unsigned char q10D4;  // 0x10D4
    unsigned char q10D8;  // 0x10D8
    unsigned char q10DC;  // 0x10DC
    void* q10E0;  // 0x10E0
    unsigned char q10E4;  // 0x10E4
    unsigned char q10E8;  // 0x10E8
    void* q10EC;  // 0x10EC
    void* q10F0;  // 0x10F0
    unsigned char q10F4;  // 0x10F4
    unsigned char q10F8;  // 0x10F8
    void* q10FC;  // 0x10FC
    unsigned char q1100;  // 0x1100
    unsigned char q1104;  // 0x1104
    unsigned char q1108;  // 0x1108
    unsigned char q110C;  // 0x110C
    unsigned int q1110;  // 0x1110
    unsigned char q1114;  // 0x1114
    unsigned char q1118;  // 0x1118
    void* q111C;  // 0x111C
    void* q1120;  // 0x1120
    unsigned int q1124;  // 0x1124
    AbstractTypeClass* q1128;  // 0x1128
    void* q112C;  // 0x112C
    void* q1130;  // 0x1130
    void* q1134;  // 0x1134
    void* q1138;  // 0x1138
    unsigned char q113C;  // 0x113C
    unsigned char q1140;  // 0x1140
    void* q1144;  // 0x1144
    unsigned char q1148;  // 0x1148
    unsigned char q114C;  // 0x114C
    unsigned char q1150;  // 0x1150
    void* q1154;  // 0x1154
    void* q1158;  // 0x1158
    unsigned char q115C;  // 0x115C
    char q1160[4];  // 0x1160
    unsigned char q1164;  // 0x1164
    int q1170;  // 0x1170
    unsigned int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    void* q1180;  // 0x1180
    void* q1188;  // 0x1188
    void* q1194;  // 0x1194
    unsigned char q1198;  // 0x1198
    void* q11B0;  // 0x11B0
    unsigned char q11B4;  // 0x11B4
    void* q11CC;  // 0x11CC
    unsigned char q11D0;  // 0x11D0
    void* q11E8;  // 0x11E8
    unsigned char q11EC;  // 0x11EC
    unsigned char q11F0;  // 0x11F0
    unsigned char q11F4;  // 0x11F4
    unsigned char q11F8;  // 0x11F8
    void* q1200;  // 0x1200
    void* q1204;  // 0x1204
    unsigned char q1208;  // 0x1208
    unsigned char q120C;  // 0x120C
    unsigned char q1210;  // 0x1210
    unsigned char q1214;  // 0x1214
    unsigned char q1218;  // 0x1218
    unsigned char q121C;  // 0x121C
    void* q1220;  // 0x1220
    unsigned char q1224;  // 0x1224
    unsigned char q1228;  // 0x1228
    unsigned char q122C;  // 0x122C
    unsigned char q1230;  // 0x1230
    unsigned char q1234;  // 0x1234
    void* q123C;  // 0x123C
    unsigned char q1240;  // 0x1240
    unsigned char q1244;  // 0x1244
    unsigned char q1248;  // 0x1248
    unsigned char q124C;  // 0x124C
    void* q1258;  // 0x1258
    unsigned char q125C;  // 0x125C
    void* q1274;  // 0x1274
    unsigned char q1278;  // 0x1278
    int q1280;  // 0x1280
    char q1284;  // 0x1284
    BuildingTypeClass* q1288;  // 0x1288
    void* q1290;  // 0x1290
    unsigned char q1294;  // 0x1294
    bool q1298;  // 0x1298
    void* q12AC;  // 0x12AC
    unsigned char q12B0;  // 0x12B0
    void* q12C8;  // 0x12C8
    unsigned char q12CC;  // 0x12CC
    void* q12E4;  // 0x12E4
    unsigned char q12E8;  // 0x12E8
    int q1300;  // 0x1300
    bool q1304;  // 0x1304
    unsigned char q1308;  // 0x1308
    unsigned char q130C;  // 0x130C
    unsigned char q1310;  // 0x1310
    bool q1314;  // 0x1314
    unsigned char q1320;  // 0x1320
    void* q1324;  // 0x1324
    AnimClass* q1328;  // 0x1328
    unsigned char q132C;  // 0x132C
    unsigned int q1330;  // 0x1330
    AbstractClass* q1334;  // 0x1334
    unsigned char q1338;  // 0x1338
    void* q133C;  // 0x133C
    unsigned char q1340;  // 0x1340
    AbstractClass* q1344;  // 0x1344
    unsigned int q1348;  // 0x1348
    unsigned char q134C;  // 0x134C
    unsigned char q1350;  // 0x1350
    unsigned char q1354;  // 0x1354
    void* q1358;  // 0x1358
    unsigned char q135C;  // 0x135C
    unsigned int q1360;  // 0x1360
    unsigned char q1364;  // 0x1364
    char q1368;  // 0x1368
    void* q1374;  // 0x1374
    char q1378;  // 0x1378
    unsigned char q137C;  // 0x137C
    char q1380;  // 0x1380
    char q1384;  // 0x1384
    unsigned char q1388;  // 0x1388
    void* q1390;  // 0x1390
    unsigned char q1394;  // 0x1394
    unsigned int q1398;  // 0x1398
    void* q13AC;  // 0x13AC
    unsigned char q13B0;  // 0x13B0
    void* q13C8;  // 0x13C8
    unsigned char q13CC;  // 0x13CC
    void* q13F0;  // 0x13F0
    unsigned char q13F4;  // 0x13F4
    unsigned int q1400;  // 0x1400
    unsigned int q1404;  // 0x1404
    unsigned int q1408;  // 0x1408
    void* q1414;  // 0x1414
    unsigned char q1418;  // 0x1418
    void* q141C;  // 0x141C
    unsigned char q1420;  // 0x1420
    unsigned int q1424;  // 0x1424
    ObjectClass* q1428;  // 0x1428
    unsigned char q142C;  // 0x142C
    void* q1430;  // 0x1430
    unsigned char q1434;  // 0x1434
    unsigned char q1440;  // 0x1440
    unsigned int q1444;  // 0x1444
    unsigned char q1448;  // 0x1448
    unsigned char q144C;  // 0x144C
    unsigned char q1454;  // 0x1454
    unsigned char q1458;  // 0x1458
    unsigned char q145C;  // 0x145C
    void* q1460;  // 0x1460
    ObjectTypeClass* q1464;  // 0x1464
    unsigned char q1468;  // 0x1468
    unsigned char q146C;  // 0x146C
    unsigned char q1470;  // 0x1470
    unsigned char q1480;  // 0x1480
    void* q1484;  // 0x1484
    unsigned char q1488;  // 0x1488
    unsigned char q148C;  // 0x148C
    unsigned char q1490;  // 0x1490
    void* q14BC;  // 0x14BC
    void* q14C0;  // 0x14C0
    void* q14C4;  // 0x14C4
    void* q14C8;  // 0x14C8
    unsigned char q14CC;  // 0x14CC
    void* q14E0;  // 0x14E0
    CampaignClass* q14E4;  // 0x14E4
    unsigned int q14E5;  // 0x14E5
    unsigned int q14E6;  // 0x14E6
    unsigned int q14E7;  // 0x14E7
    unsigned char q14E8;  // 0x14E8
    unsigned int q14E9;  // 0x14E9
    unsigned int q14EA;  // 0x14EA
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned char u8_14F0;  // 0x14F0
    unsigned int q14F3;  // 0x14F3
    ObjectTypeClass* q14F4;  // 0x14F4
    unsigned char q14F8;  // 0x14F8
    CampaignClass* q14FC;  // 0x14FC
    unsigned char q1500;  // 0x1500
    CampaignClass* q1504;  // 0x1504
    unsigned char q1508;  // 0x1508
    ObjectTypeClass* q150C;  // 0x150C
    ObjectTypeClass* q1510;  // 0x1510
    unsigned char q1514;  // 0x1514
    CampaignClass* q1518;  // 0x1518
    unsigned char q151C;  // 0x151C
    unsigned char q1520;  // 0x1520
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned int q1526;  // 0x1526
    unsigned char q1528;  // 0x1528
    unsigned char q152A;  // 0x152A
    void* q152C;  // 0x152C
    unsigned char q1530;  // 0x1530
    void* q1540;  // 0x1540
    unsigned int q1544;  // 0x1544
    AbstractClass* q1548;  // 0x1548
    void* q1554;  // 0x1554
    void* q1558;  // 0x1558
    AbstractClass* q1560;  // 0x1560
    AbstractClass* q1564;  // 0x1564
    void* q1568;  // 0x1568
    DynamicVector* q1574;  // 0x1574
    void* q1580;  // 0x1580
    ObjectClass * q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned char q158F;  // 0x158F
    void* q1590;  // 0x1590
    unsigned int q15E2;  // 0x15E2
    unsigned char q15E6;  // 0x15E6
    AbstractClass* q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q1608;  // 0x1608
    char q1618[4];  // 0x1618
    unsigned int q1624;  // 0x1624
    AbstractClass* q1628;  // 0x1628
    unsigned int q1634;  // 0x1634
    unsigned char q1638;  // 0x1638
    void* q163C;  // 0x163C
    void* q1640;  // 0x1640
    unsigned char q1644;  // 0x1644
    void* q1648;  // 0x1648
    unsigned char q164C;  // 0x164C
    void* q1650;  // 0x1650
    void* q1654;  // 0x1654
    void* q1658;  // 0x1658
    unsigned char q165C;  // 0x165C
    void* q1660;  // 0x1660
    unsigned char q1664;  // 0x1664
    char q1668;  // 0x1668
    void* q166C;  // 0x166C
    void* q1670;  // 0x1670
    void* q1674;  // 0x1674
    unsigned char q1678;  // 0x1678
    void* q167C;  // 0x167C
    void* q1680;  // 0x1680
    void* q1684;  // 0x1684
    void* q1688;  // 0x1688
    unsigned char q168C;  // 0x168C
    void* q16A8;  // 0x16A8
    void* q16AC;  // 0x16AC
    unsigned char q16B0;  // 0x16B0
    void* q16B4;  // 0x16B4
    unsigned int q16B7;  // 0x16B7
    unsigned char q16BB;  // 0x16BB
    void* q16CC;  // 0x16CC
    unsigned char q16D0;  // 0x16D0
    void* q16D4;  // 0x16D4
    void* q16D8;  // 0x16D8
    unsigned char q16DC;  // 0x16DC
    void* q16E4;  // 0x16E4
    unsigned char q16E8;  // 0x16E8
    void* q16EC;  // 0x16EC
    unsigned char q16F0;  // 0x16F0
    void* q16F4;  // 0x16F4
    unsigned int q16F8;  // 0x16F8
    unsigned char q16FC;  // 0x16FC
    void* q1700;  // 0x1700
    void* q1704;  // 0x1704
    void* q1708;  // 0x1708
    void* q170C;  // 0x170C
    void* q1710;  // 0x1710
    void* q1714;  // 0x1714
    unsigned char q1718;  // 0x1718
    AbstractTypeClass* q171C;  // 0x171C
    void* q1720;  // 0x1720
    void* q1724;  // 0x1724
    unsigned int q1728;  // 0x1728
    AbstractTypeClass* q172C;  // 0x172C
    AbstractTypeClass* q1730;  // 0x1730
    unsigned char q1734;  // 0x1734
    unsigned char q1738;  // 0x1738
    void* q173C;  // 0x173C
    unsigned char q1740;  // 0x1740
    void* q1744;  // 0x1744
    unsigned char q1748;  // 0x1748
    void* q174C;  // 0x174C
    unsigned char q1750;  // 0x1750
    void* q1754;  // 0x1754
    unsigned char q1758;  // 0x1758
    unsigned char q175C;  // 0x175C
    unsigned char q1760;  // 0x1760
    unsigned int q1761;  // 0x1761
    void* q1764;  // 0x1764
    unsigned char q1765;  // 0x1765
    void* q1768;  // 0x1768
    ObjectClass* q176A;  // 0x176A
    unsigned char q176E;  // 0x176E
    void* q1770;  // 0x1770
    void* q1774;  // 0x1774
    AbstractTypeClass* q1778;  // 0x1778
    void* q177C;  // 0x177C
    void* q1780;  // 0x1780
    AbstractTypeClass* q1784;  // 0x1784
    void* q1788;  // 0x1788
    unsigned int u32_178C;  // 0x178C
    unsigned char u8_1790;  // 0x1790
    unsigned char u8_1791;  // 0x1791
    unsigned char q1794;  // 0x1794
    unsigned char q1798;  // 0x1798
    void* q179C;  // 0x179C
    void* q17A0;  // 0x17A0
    unsigned char q17A4;  // 0x17A4
    void* q17A8;  // 0x17A8
    void* q17AC;  // 0x17AC
    unsigned char q17B0;  // 0x17B0
    void* q17BC;  // 0x17BC
    void* q17C0;  // 0x17C0
    unsigned char q17C4;  // 0x17C4
    void* q17E8;  // 0x17E8
    unsigned char q17EC;  // 0x17EC
    ObjectTypeClass* q1800;  // 0x1800
    unsigned int q1804;  // 0x1804
    unsigned int q1808;  // 0x1808
    unsigned char q180C;  // 0x180C
    unsigned int q1810;  // 0x1810
    unsigned int q1814;  // 0x1814
    void* q181C;  // 0x181C
    unsigned char q1820;  // 0x1820
    void* q1824;  // 0x1824
    unsigned char q1828;  // 0x1828
    void* q182C;  // 0x182C
    Color* q1830;  // 0x1830
    ObjectTypeClass* q1834;  // 0x1834
    unsigned char q1838;  // 0x1838
    void* q1844;  // 0x1844
    unsigned char q1848;  // 0x1848
    void* q184C;  // 0x184C
    unsigned char q1850;  // 0x1850
    void* q185C;  // 0x185C
    Color* q1860;  // 0x1860
    void* q186C;  // 0x186C
    unsigned char q1870;  // 0x1870
    unsigned int q1878;  // 0x1878
    void* q1884;  // 0x1884
    unsigned char q1888;  // 0x1888
    void* q18A8;  // 0x18A8
    void* q18AC;  // 0x18AC
    unsigned char q18B0;  // 0x18B0
    void* q1900;  // 0x1900
    unsigned char q1904;  // 0x1904
    Coord* q1908;  // 0x1908
    unsigned char q1910;  // 0x1910
    unsigned char q1920;  // 0x1920
    AnimClass* q1924;  // 0x1924
    void* q1928;  // 0x1928
    void* q1940;  // 0x1940
    unsigned char q1944;  // 0x1944
    void* q1948;  // 0x1948
    unsigned char q1960;  // 0x1960
    unsigned char q1964;  // 0x1964
    void* q1968;  // 0x1968
    unsigned int q1980;  // 0x1980
    unsigned char q1984;  // 0x1984
    unsigned int q1988;  // 0x1988
    void* q2048;  // 0x2048
    unsigned char q2054;  // 0x2054
    unsigned int q2070;  // 0x2070
    Color* q2084;  // 0x2084
    unsigned int q2088;  // 0x2088
    unsigned char q2098;  // 0x2098
    Coord* q2100;  // 0x2100
    unsigned char q2120;  // 0x2120
    unsigned int q2124;  // 0x2124
    AbstractClass* q2128;  // 0x2128
    unsigned int q2130;  // 0x2130
    unsigned char q2134;  // 0x2134
    unsigned char q2140;  // 0x2140
    unsigned char q2144;  // 0x2144
    unsigned int q2148;  // 0x2148
    unsigned char q2150;  // 0x2150
    bool q2160;  // 0x2160
    unsigned char q2164;  // 0x2164
    unsigned char q2170;  // 0x2170
    unsigned char q2178;  // 0x2178
    unsigned int q2180;  // 0x2180
    unsigned char q2184;  // 0x2184
    unsigned int q2198;  // 0x2198
    unsigned char q2208;  // 0x2208
    void* q2220;  // 0x2220
    unsigned char q2224;  // 0x2224
    void* q2248;  // 0x2248
    unsigned char q2280;  // 0x2280
    char q2304;  // 0x2304
    ParticleSystemClass* q2308;  // 0x2308
    unsigned char q2320;  // 0x2320
    char q2324[4];  // 0x2324
    unsigned int q2344;  // 0x2344
    unsigned char q2348;  // 0x2348
    void* q2360;  // 0x2360
    unsigned char q2364;  // 0x2364
    void* q2368;  // 0x2368
    void* q2388;  // 0x2388
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned char q2400;  // 0x2400
    unsigned int q2408;  // 0x2408
    unsigned char q2418;  // 0x2418
    unsigned char q2420;  // 0x2420
    void* q2444;  // 0x2444
    unsigned char q2448;  // 0x2448
    void* q2454;  // 0x2454
    void* q2500;  // 0x2500
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    void* q2528;  // 0x2528
    unsigned char q2560;  // 0x2560
    void* q2584;  // 0x2584
    unsigned char q2588;  // 0x2588
    void* q2640;  // 0x2640
    unsigned char q2644;  // 0x2644
    void* q2668;  // 0x2668
    unsigned char q2700;  // 0x2700
    void* q2724;  // 0x2724
    unsigned char q2728;  // 0x2728
    void* q2780;  // 0x2780
    unsigned char q2784;  // 0x2784
    void* q2844;  // 0x2844
    void* q2848;  // 0x2848
    unsigned char q2880;  // 0x2880
    void* q2908;  // 0x2908
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    void* q3008;  // 0x3008
    void* q3060;  // 0x3060
    unsigned char q3064;  // 0x3064
    void* q3068;  // 0x3068
    void* q3104;  // 0x3104
    unsigned char q3108;  // 0x3108
    void* q3160;  // 0x3160
    unsigned char q3164;  // 0x3164
    unsigned char q3214;  // 0x3214
    unsigned char q3220;  // 0x3220
    unsigned char q3278;  // 0x3278
    void* q3384;  // 0x3384
    unsigned char q3388;  // 0x3388
    AbstractClass* q3428;  // 0x3428
    unsigned char q3434;  // 0x3434
    Tactical* q3440;  // 0x3440
    AbstractClass* q3444;  // 0x3444
    void* q3448;  // 0x3448
    unsigned char q3460;  // 0x3460
    void* q3484;  // 0x3484
    unsigned char q3488;  // 0x3488
    void* q3504;  // 0x3504
    unsigned char q3508;  // 0x3508
    void* q3540;  // 0x3540
    unsigned char q3544;  // 0x3544
    unsigned int q3568;  // 0x3568
    unsigned int q3580;  // 0x3580
    unsigned int q3584;  // 0x3584
    unsigned int q3588;  // 0x3588
    void* q3600;  // 0x3600
    unsigned char q3604;  // 0x3604
    void* q3628;  // 0x3628
    void* q3660;  // 0x3660
    unsigned char q3664;  // 0x3664
    unsigned int q3668;  // 0x3668
    unsigned char q3680;  // 0x3680
    void* q3688;  // 0x3688
    unsigned char q3720;  // 0x3720
    unsigned int q3744;  // 0x3744
    unsigned char q3748;  // 0x3748
    void* q3780;  // 0x3780
    unsigned char q3784;  // 0x3784
    ObjectTypeClass* q3808;  // 0x3808
    unsigned char q3820;  // 0x3820
    unsigned int q3844;  // 0x3844
    unsigned int q3848;  // 0x3848
    WeaponTypeClass* q3980;  // 0x3980
    unsigned char q3984;  // 0x3984
    unsigned char q4040;  // 0x4040
    unsigned char q4120;  // 0x4120
    unsigned int q4134;  // 0x4134
    CampaignClass* q4144;  // 0x4144
    void* q4164;  // 0x4164
    unsigned int q4168;  // 0x4168
    void* q4178;  // 0x4178
    void* q4180;  // 0x4180
    unsigned int q4184;  // 0x4184
    void* q4188;  // 0x4188
    HouseClass* q4200;  // 0x4200
    void* q4204;  // 0x4204
    unsigned char q4208;  // 0x4208
    void* q4220;  // 0x4220
    unsigned char q4224;  // 0x4224
    void* q4228;  // 0x4228
    unsigned char q4240;  // 0x4240
    void* q4244;  // 0x4244
    unsigned char q4248;  // 0x4248
    void* q4260;  // 0x4260
    unsigned char q4264;  // 0x4264
    void* q4268;  // 0x4268
    unsigned char q4280;  // 0x4280
    void* q4284;  // 0x4284
    void* q4288;  // 0x4288
    void* q4300;  // 0x4300
    unsigned char q4304;  // 0x4304
    unsigned char q4308;  // 0x4308
    void* q4320;  // 0x4320
    unsigned char q4324;  // 0x4324
    unsigned char q4328;  // 0x4328
    unsigned char q4340;  // 0x4340
    unsigned char q4344;  // 0x4344
    void* q4348;  // 0x4348
    unsigned char q4360;  // 0x4360
    unsigned int q4368;  // 0x4368
    void* q4370;  // 0x4370
    unsigned char q4374;  // 0x4374
    void* q4380;  // 0x4380
    void* q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    void* q4400;  // 0x4400
    void* q4404;  // 0x4404
    void* q4408;  // 0x4408
    void* q4420;  // 0x4420
    unsigned char q4424;  // 0x4424
    unsigned char q4428;  // 0x4428
    AbstractTypeClass* q4434;  // 0x4434
    char q4438;  // 0x4438
    void* q4440;  // 0x4440
    unsigned char q4444;  // 0x4444
    char q4448[4];  // 0x4448
    int q4464;  // 0x4464
    unsigned int q4468;  // 0x4468
    void* q4470;  // 0x4470
    void* q4480;  // 0x4480
    void* q4488;  // 0x4488
    void* q4498;  // 0x4498
    void* q4500;  // 0x4500
    unsigned char q4504;  // 0x4504
    void* q4528;  // 0x4528
    unsigned char q4560;  // 0x4560
    void* q4584;  // 0x4584
    unsigned char q4588;  // 0x4588
    void* q4608;  // 0x4608
    unsigned char q4620;  // 0x4620
    unsigned char q4624;  // 0x4624
    unsigned char q4628;  // 0x4628
    void* q4640;  // 0x4640
    unsigned char q4644;  // 0x4644
    unsigned char q4648;  // 0x4648
    void* q4658;  // 0x4658
    void* q4668;  // 0x4668
    unsigned char q4680;  // 0x4680
    unsigned char q4700;  // 0x4700
    void* q4724;  // 0x4724
    unsigned char q4728;  // 0x4728
    char q4740;  // 0x4740
    BuildingTypeClass* q4744;  // 0x4744
    void* q4754;  // 0x4754
    bool q4758;  // 0x4758
    bool q4760;  // 0x4760
    void* q4780;  // 0x4780
    unsigned char q4784;  // 0x4784
    void* q4808;  // 0x4808
    unsigned char q4840;  // 0x4840
    int q4864;  // 0x4864
    bool q4868;  // 0x4868
    unsigned char q4880;  // 0x4880
    bool q4884;  // 0x4884
    unsigned char q4890;  // 0x4890
    void* q4900;  // 0x4900
    AnimClass* q4904;  // 0x4904
    unsigned char q4908;  // 0x4908
    void* q4914;  // 0x4914
    unsigned int q4918;  // 0x4918
    void* q4924;  // 0x4924
    unsigned char q4928;  // 0x4928
    unsigned char q4940;  // 0x4940
    unsigned char q4944;  // 0x4944
    unsigned char q4950;  // 0x4950
    unsigned int q4960;  // 0x4960
    unsigned char q4964;  // 0x4964
    char q4968;  // 0x4968
    void* q4978;  // 0x4978
    void* q4980;  // 0x4980
    char q4984;  // 0x4984
    unsigned char q4988;  // 0x4988
    char q4994;  // 0x4994
    void* q5008;  // 0x5008
    char q5010;  // 0x5010
    unsigned char q5014;  // 0x5014
    unsigned char q5040;  // 0x5040
    void* q5064;  // 0x5064
    unsigned char q5068;  // 0x5068
    void* q5104;  // 0x5104
    unsigned char q5108;  // 0x5108
    unsigned int q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    unsigned int q5128;  // 0x5128
    OverlayTypeClass* q5138;  // 0x5138
    void* q5140;  // 0x5140
    unsigned char q5144;  // 0x5144
    void* q5148;  // 0x5148
    unsigned char q5158;  // 0x5158
    ObjectClass* q5160;  // 0x5160
    unsigned char q5164;  // 0x5164
    void* q5168;  // 0x5168
    void* q5170;  // 0x5170
    void* q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    unsigned char q5184;  // 0x5184
    unsigned int q5188;  // 0x5188
    unsigned char q5204;  // 0x5204
    unsigned char q5208;  // 0x5208
    ObjectTypeClass* q5220;  // 0x5220
    unsigned char q5224;  // 0x5224
    unsigned char q5228;  // 0x5228
    unsigned char q5234;  // 0x5234
    void* q5238;  // 0x5238
    unsigned char q5248;  // 0x5248
    unsigned char q5260;  // 0x5260
    unsigned char q5264;  // 0x5264
    unsigned int q5270;  // 0x5270
    unsigned char q5278;  // 0x5278
    void* q5308;  // 0x5308
    void* q5320;  // 0x5320
    unsigned char q5324;  // 0x5324
    void* q5344;  // 0x5344
    CampaignClass* q5348;  // 0x5348
    unsigned int q5350;  // 0x5350
    unsigned int q5354;  // 0x5354
    unsigned int q5358;  // 0x5358
    unsigned char q5360;  // 0x5360
    ObjectTypeClass* q5364;  // 0x5364
    unsigned char q5368;  // 0x5368
    CampaignClass* q5380;  // 0x5380
    unsigned char q5384;  // 0x5384
    ObjectTypeClass* q5388;  // 0x5388
    unsigned int q5394;  // 0x5394
    BuildingTypeClass* q5398;  // 0x5398
    BuildingClass* q53AC;  // 0x53AC
    BuildingClass* q53B0;  // 0x53B0
    BuildingClass* q53B4;  // 0x53B4
    BuildingClass* q53B8;  // 0x53B8
    BuildingClass* q53BC;  // 0x53BC
    BuildingClass* q53C0;  // 0x53C0
    BuildingClass* q53C4;  // 0x53C4
    BuildingClass* q53C8;  // 0x53C8
    BuildingClass* q53CC;  // 0x53CC
    unsigned char q53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    unsigned char q53DC;  // 0x53DC
    void* q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    unsigned char q53F0;  // 0x53F0
    unsigned char q53F4;  // 0x53F4
    CampaignClass* q5400;  // 0x5400
    unsigned char q5404;  // 0x5404
    unsigned char q5408;  // 0x5408
    unsigned char q540C;  // 0x540C
    unsigned char q5410;  // 0x5410
    unsigned int q5414;  // 0x5414
    unsigned char q5418;  // 0x5418
    unsigned char q541C;  // 0x541C
    void* q5420;  // 0x5420
    unsigned char q5424;  // 0x5424
    unsigned char q5428;  // 0x5428
    bool q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    unsigned char q5438;  // 0x5438
    void* q5440;  // 0x5440
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    AbstractClass* q5458;  // 0x5458
    unsigned char q545C;  // 0x545C
    void* q5460;  // 0x5460
    unsigned char q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    void* q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    unsigned char q548C;  // 0x548C
    void* q5490;  // 0x5490
    void* q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q54A4;  // 0x54A4
    unsigned char q54A8;  // 0x54A8
    BuildingClass* q54E0;  // 0x54E0
    unsigned char q54E4;  // 0x54E4
    unsigned char q54E8;  // 0x54E8
    unsigned char q54EC;  // 0x54EC
    unsigned char q54F0;  // 0x54F0
    unsigned char q54F4;  // 0x54F4
    void* q5504;  // 0x5504
    ObjectClass * q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    bool q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5518;  // 0x5518
    void* q5520;  // 0x5520
    unsigned char q5524;  // 0x5524
    DynamicVector* q5550;  // 0x5550
    unsigned char q5554;  // 0x5554
    unsigned char q5558;  // 0x5558
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    void* q55F0;  // 0x55F0
    unsigned char q55F4;  // 0x55F4
    unsigned char q55F8;  // 0x55F8
    unsigned char q55FC;  // 0x55FC
    unsigned char q5600;  // 0x5600
    unsigned char q5604;  // 0x5604
    unsigned char q5608;  // 0x5608
    unsigned char q560C;  // 0x560C
    unsigned char q5610;  // 0x5610
    unsigned char q5618;  // 0x5618
    unsigned char q561C;  // 0x561C
    void* q5634;  // 0x5634
    unsigned char q5638;  // 0x5638
    unsigned char q563C;  // 0x563C
    unsigned char q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    unsigned char q5648;  // 0x5648
    unsigned char q5650;  // 0x5650
    unsigned char q5654;  // 0x5654
    AbstractTypeClass* q5660;  // 0x5660
    AbstractTypeClass* q5664;  // 0x5664
    AbstractTypeClass* q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned char q5700;  // 0x5700
    void* q5704;  // 0x5704
    unsigned char q5708;  // 0x5708
    unsigned char q570C;  // 0x570C
    unsigned char q5710;  // 0x5710
    AbstractClass* q5714;  // 0x5714
    unsigned char q5718;  // 0x5718
    unsigned char q571C;  // 0x571C
    void* q5720;  // 0x5720
    unsigned char q5724;  // 0x5724
    void* q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned char q5730;  // 0x5730
    unsigned char q5734;  // 0x5734
    void* q5740;  // 0x5740
    void* q5744;  // 0x5744
    void* q5748;  // 0x5748
    unsigned char q574C;  // 0x574C
    AudioController* q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned char q5758;  // 0x5758
    unsigned char q575C;  // 0x575C
    void* q5760;  // 0x5760
    void* q5764;  // 0x5764
    void* q5768;  // 0x5768
    unsigned char q576C;  // 0x576C
    unsigned char q5770;  // 0x5770
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
    void* q57A4;  // 0x57A4
    unsigned char q57A8;  // 0x57A8
    unsigned char q57AC;  // 0x57AC
    void* q57B0;  // 0x57B0
    unsigned char q57B4;  // 0x57B4
    unsigned char q57B8;  // 0x57B8
    void* q57BC;  // 0x57BC
    unsigned char q57C0;  // 0x57C0
    unsigned char q57C4;  // 0x57C4
    void* q57C8;  // 0x57C8
    unsigned char q57CC;  // 0x57CC
    unsigned char q57D0;  // 0x57D0
    void* q57D4;  // 0x57D4
    unsigned char q57D8;  // 0x57D8
    unsigned char q57DC;  // 0x57DC
    unsigned char q57E0;  // 0x57E0
    unsigned char q57E4;  // 0x57E4
    unsigned char q57E8;  // 0x57E8
    void* q5800;  // 0x5800
    void* q5804;  // 0x5804
    unsigned char q5808;  // 0x5808
    unsigned char q580C;  // 0x580C
    unsigned char q5810;  // 0x5810
    unsigned char q5814;  // 0x5814
    unsigned char q5840;  // 0x5840
    void* q5844;  // 0x5844
    void* q5848;  // 0x5848
    unsigned char q584C;  // 0x584C
    void* q5860;  // 0x5860
    unsigned char q5864;  // 0x5864
    void* q5868;  // 0x5868
    unsigned char q586C;  // 0x586C
    unsigned char q5870;  // 0x5870
    unsigned char q5874;  // 0x5874
    unsigned int q5880;  // 0x5880
    int q5884;  // 0x5884
    unsigned char q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q58E8;  // 0x58E8
    unsigned char q58EC;  // 0x58EC
    unsigned char q58F0;  // 0x58F0
    unsigned char q58F4;  // 0x58F4
    void* q5900;  // 0x5900
    void* q5904;  // 0x5904
    void* q5908;  // 0x5908
    unsigned char q590C;  // 0x590C
    unsigned char q5910;  // 0x5910
    unsigned char q5914;  // 0x5914
    void* q5920;  // 0x5920
    void* q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned char q5934;  // 0x5934
    unsigned int q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned char q5940;  // 0x5940
    unsigned char q5944;  // 0x5944
    void* q5948;  // 0x5948
    unsigned char q594C;  // 0x594C
    unsigned char q5950;  // 0x5950
    unsigned char q5954;  // 0x5954
    unsigned char q5960;  // 0x5960
    void* q5964;  // 0x5964
    unsigned char q5968;  // 0x5968
    unsigned char q596C;  // 0x596C
    AbstractClass* q5970;  // 0x5970
    unsigned char q5974;  // 0x5974
    unsigned char q5978;  // 0x5978
    unsigned char q5984;  // 0x5984
    void* q5988;  // 0x5988
    unsigned char q598C;  // 0x598C
    unsigned int q5990;  // 0x5990
    ObjectClass* q5994;  // 0x5994
    unsigned char q5998;  // 0x5998
    unsigned char q599C;  // 0x599C
    void* q6000;  // 0x6000
    void* q6004;  // 0x6004
    AbstractTypeClass* q6008;  // 0x6008
    unsigned char q600C;  // 0x600C
    AbstractTypeClass* q6020;  // 0x6020
    void* q6024;  // 0x6024
    unsigned int q6028;  // 0x6028
    unsigned char q602C;  // 0x602C
    unsigned char q6030;  // 0x6030
    unsigned char q6034;  // 0x6034
    AbstractClass* q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned char q6040;  // 0x6040
    void* q6044;  // 0x6044
    void* q6048;  // 0x6048
    unsigned char q604C;  // 0x604C
    void* q6060;  // 0x6060
    unsigned char q6064;  // 0x6064
    unsigned char q6068;  // 0x6068
    void* q6080;  // 0x6080
    unsigned char q6084;  // 0x6084
    unsigned char q6088;  // 0x6088
    void* q6120;  // 0x6120
    unsigned char q6124;  // 0x6124
    unsigned char q6128;  // 0x6128
    ObjectTypeClass* q6144;  // 0x6144
    unsigned int q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned int q6160;  // 0x6160
    unsigned int q6164;  // 0x6164
    unsigned char q6168;  // 0x6168
    unsigned char q6170;  // 0x6170
    unsigned char q6174;  // 0x6174
    void* q6180;  // 0x6180
    unsigned char q6184;  // 0x6184
    void* q6188;  // 0x6188
    unsigned char q618C;  // 0x618C
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned char q6200;  // 0x6200
    unsigned char q6204;  // 0x6204
    AnimClass* q6210;  // 0x6210
    unsigned char q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    void* q6220;  // 0x6220
    unsigned char q6224;  // 0x6224
    unsigned char q6228;  // 0x6228
    Color* q6240;  // 0x6240
    unsigned char q6244;  // 0x6244
    unsigned int q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned char q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    void* q6290;  // 0x6290
    unsigned int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q6320;  // 0x6320
    unsigned char q6324;  // 0x6324
    void* q6400;  // 0x6400
    unsigned char q6404;  // 0x6404
    Coord* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned int q6418;  // 0x6418
    unsigned char q641C;  // 0x641C
    unsigned char q6434;  // 0x6434
    unsigned int q6438;  // 0x6438
    unsigned char q643C;  // 0x643C
    void* q6440;  // 0x6440
    unsigned char q6444;  // 0x6444
    unsigned char q6450;  // 0x6450
    unsigned int q6454;  // 0x6454
    unsigned char q6458;  // 0x6458
    void* q6464;  // 0x6464
    unsigned char q6468;  // 0x6468
    unsigned char q646C;  // 0x646C
    unsigned char q6500;  // 0x6500
    void* q6504;  // 0x6504
    unsigned char q6508;  // 0x6508
    void* q6514;  // 0x6514
    unsigned char q6518;  // 0x6518
    unsigned char q651C;  // 0x651C
    unsigned int q6528;  // 0x6528
    unsigned char q652C;  // 0x652C
    unsigned int q0400;
    unsigned int q0401;
    unsigned int q0402;
    unsigned int q0404;
    unsigned int q0E80;
    unsigned int q0F00;
    unsigned int q0F80;
    unsigned int u32_385;
    unsigned int u32_386;
    unsigned int u32_387;
    unsigned int u32_389;
    unsigned int u32_4C2;
    unsigned int u32_500;
    unsigned int u32_884;
    unsigned int u32_C08;
    unsigned int u32_C84;
    unsigned int u32_D41;
    unsigned int uniqueId1;
    unsigned int vtable46;
    unsigned int zero_3C0;
    unsigned int zero_3C1;
    unsigned int zero_3C2;
    unsigned int zero_3C4;
    unsigned int zero_3C5;
    unsigned int zero_3C6;
    unsigned int zero_3C7;
    unsigned int zero_3C9;
    unsigned int q0408;
    unsigned int q0D08;
    unsigned int q0D09;
    unsigned int q0E07;
    unsigned int u32_446;
    unsigned int u32_484;
    unsigned int u32_D40;
    unsigned int u32_DC6;
    unsigned int uniqueId4;
    unsigned int u32_DC7;
    unsigned int u32_DC8;
    unsigned int q0A4;
    unsigned int u32_DC9;
// --- flat members (END) ---
    AbstractClass * * Load2DArt();
    BOOL loadTypeMember_5717AE0();
    BulletTypeClass * * FindOrCreate();
    ObjectTypeClass * Destru_vt08(char a2);
    void* * SelectArtOrAlt();
    void* * Destruct();
    char ReadBool(INIClass * Block, INIClass * aP2, int a4);
    char ReadBool2(INIClass * Block, INIClass * aP2, short * a4);
    char ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4);
    char ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3);
    int ConstructFull(AbstractClass * aP1);
    int CreateInstance(CampaignScore * aP1, CampaignScore * aP2);
    int DeserializeArrays();
    int FindByName();
    int FreeLoaderBuffer();
    int LoadCleanup(IUnknown * aP0, ObjectTypeClass * aP1);
    int LoadExtras(CCINIClass * aP0, double _38C, unsigned char *** a2);
    int ReadBool3(INIClass * aP1, unsigned char * a2, void * a4);
    int ReadDestroyAnim();
    int ReadDouble(unsigned char * a2, unsigned char * a3, int a4);
    int ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4);
    int ReadInt(unsigned char * a2, unsigned char * a3, int a4);
    int ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4);
    int loadTypeMember_473980();
    int loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3);
    int loadTypeMember_48DFF0();
    int loadTypeMember_5474940(CCINIClass * aP1, unsigned char * a2, int a4);
    int loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4);
    int loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4);
    int loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3);
    int loadTypeMember_5717820();
    int loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2);
    int loadTypeMember_5717A30(int a2);
    int loadTypeMember_5717A50(int a2);
    int loadTypeMember_5717A70();
    int loadTypeMember_5717A80(int a2);
    int loadTypeMember_5717AA0();
    int loadTypeMember_5717AB0(int a2);
    int loadTypeMember_5717AD0();
    unsigned char ** ReadSoundList(unsigned char ** a2, unsigned char * a3, unsigned char * a4, unsigned char ** a5);
    unsigned int * CheckFlag(ObjectTypeClass * aP1);
    unsigned int * Construct(ObjectTypeClass * aP1);
    unsigned int * Copy(unsigned int * a0, ObjectTypeClass * aP1);
    unsigned int * InitTripleTen(unsigned int * a1);
    unsigned int * loadTypeMember_5717C00(unsigned int * a2);
    unsigned int * vt_entry_7C(unsigned int * a1);
    void CleanupWeapons();
    void ReleaseWaveAndString();
    void SetRTTI71();
    void UnloadPipsSHP();
    void* LoadFromINI(CCINIClass * aP1);
};

} // namespace gamemd
