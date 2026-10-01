// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply
struct TagClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
struct AudioController;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct FacingStruct;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct MSShapeAnim;  // fix_fwd_type_supply

struct VoxelAnimClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned int u32_1C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned char needsSave;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q027;  // 0x27
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05A;  // 0x5A
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned int q06A;  // 0x6A
    unsigned int health;  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q080;  // 0x80
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* q08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    void* q094;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char location[4];  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int q0A4;  // 0xA4
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void * q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    unsigned int q0B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int u32_BC;  // 0xBC
    bool q0BF;  // 0xBF
    unsigned int q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int q0C4;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    unsigned int u32_C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    unsigned int q0D4;  // 0xD4
    unsigned int q0D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned int q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    bool q0EB;  // 0xEB
    unsigned int q0EC;  // 0xEC
    bool q0ED;  // 0xED
    unsigned int q0F0;  // 0xF0
    unsigned int q0F2;  // 0xF2
    unsigned int q0F4;  // 0xF4
    bool q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    unsigned int q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int q0FC;  // 0xFC
    unsigned int q100;  // 0x100
    void* q104;  // 0x104
    unsigned char alignmentPadding69;  // 0x105
    AbstractClass* q108;  // 0x108
    AbstractClass* q10C;  // 0x10C
    unsigned int q10D;  // 0x10D
    unsigned int q10E;  // 0x10E
    unsigned int q10F;  // 0x10F
    unsigned int q110;  // 0x110
    unsigned int q111;  // 0x111
    AudioController* q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q11E;  // 0x11E
    unsigned int q120;  // 0x120
    unsigned char q123;  // 0x123
    unsigned int q124;  // 0x124
    AudioController* q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q12D;  // 0x12D
    unsigned int q12E;  // 0x12E
    unsigned int q12F;  // 0x12F
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    Coord* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned char q15C;  // 0x15C
    unsigned int q160;  // 0x160
    unsigned int q162;  // 0x162
    unsigned int q164;  // 0x164
    unsigned int q166;  // 0x166
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned int q173;  // 0x173
    unsigned char q174;  // 0x174
    bool q175;  // 0x175
    unsigned int q178;  // 0x178
    unsigned char q179;  // 0x179
    bool q17B;  // 0x17B
    AbstractClass* q17C;  // 0x17C
    unsigned char q17F;  // 0x17F
    unsigned int q180;  // 0x180
    TimerStruct * q184;  // 0x184
    unsigned int q188;  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned int q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char q19D;  // 0x19D
    unsigned int u32_1A0;  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned int u32_1A8;  // 0x1A8
    unsigned char q1AB;  // 0x1AB
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned int q1B7;  // 0x1B7
    unsigned char q1BB;  // 0x1BB
    void* q1D0;  // 0x1D0
    unsigned int Audio4;  // 0x1D4
    unsigned char q1D8;  // 0x1D8
    INIClass* q1DC;  // 0x1DC
    AbstractTypeClass* q1E0;  // 0x1E0
    void* q1E4;  // 0x1E4
    ConnectionPointClass* q1E8;  // 0x1E8
    unsigned char q1EC;  // 0x1EC
    unsigned int u32_1F0;  // 0x1F0
    unsigned int u32_1F4;  // 0x1F4
    unsigned int u32_1F8;  // 0x1F8
    unsigned char u8_1FC;  // 0x1FC
    unsigned char u8_1FD;  // 0x1FD
    unsigned int q200;  // 0x200
    int q202;  // 0x202
    unsigned int q204;  // 0x204
    unsigned char q206;  // 0x206
    unsigned int q208;  // 0x208
    void* q20C;  // 0x20C
    unsigned char q210;  // 0x210
    unsigned int q214;  // 0x214
    unsigned char q218;  // 0x218
    unsigned int q21C;  // 0x21C
    unsigned char q220;  // 0x220
    unsigned int q224;  // 0x224
    unsigned int q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q234;  // 0x234
    unsigned int q240;  // 0x240
    unsigned int q244;  // 0x244
    unsigned int q248;  // 0x248
    unsigned int q24C;  // 0x24C
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    void* q25C;  // 0x25C
    void* q260;  // 0x260
    AbstractClass* q264;  // 0x264
    AbstractClass* q268;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned int q270;  // 0x270
    unsigned int q274;  // 0x274
    unsigned int Audio3;  // 0x276
    unsigned char q278;  // 0x278
    unsigned char q27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    void* q28C;  // 0x28C
    unsigned char q290;  // 0x290
    void* q294;  // 0x294
    void* q298;  // 0x298
    unsigned char q29C;  // 0x29C
    void* q2A0;  // 0x2A0
    void* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    void* q2B0;  // 0x2B0
    ObjectClass* q2B4;  // 0x2B4
    unsigned char q2B8;  // 0x2B8
    unsigned int q2BC;  // 0x2BC
    unsigned int q2C0;  // 0x2C0
    unsigned char q2C4;  // 0x2C4
    unsigned int q2C8;  // 0x2C8
    unsigned int q2CC;  // 0x2CC
    void* q2D0;  // 0x2D0
    unsigned char q2D4;  // 0x2D4
    void* q2D8;  // 0x2D8
    AnimClass* q2DC;  // 0x2DC
    unsigned int q2E0;  // 0x2E0
    void* q2E4;  // 0x2E4
    unsigned char q2E8;  // 0x2E8
    unsigned int q300;  // 0x300
    ParticleSystemClass * q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned int q30A;  // 0x30A
    void* q30C;  // 0x30C
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned int Duration;  // 0x320
    ParticleSystemClass * q324;  // 0x324
    unsigned char q328;  // 0x328
    void* q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    bool q338;  // 0x338
    BuildingTypeClass* q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q348;  // 0x348
    unsigned char q34C;  // 0x34C
    void* q350;  // 0x350
    unsigned int q354;  // 0x354
    unsigned int q358;  // 0x358
    unsigned char q35C;  // 0x35C
    unsigned int q360;  // 0x360
    unsigned char q364;  // 0x364
    bool q366;  // 0x366
    unsigned char q368;  // 0x368
    unsigned char q36A;  // 0x36A
    FacingStruct* q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned char q378;  // 0x378
    AbstractClass* q380;  // 0x380
    unsigned int q384;  // 0x384
    TimerStruct * q388;  // 0x388
    unsigned int q38A;  // 0x38A
    unsigned char q38E;  // 0x38E
    void* q390;  // 0x390
    unsigned char q394;  // 0x394
    void* q3AC;  // 0x3AC
    unsigned char q3B0;  // 0x3B0
    unsigned int q3B7;  // 0x3B7
    void* q3B8;  // 0x3B8
    unsigned char q3BB;  // 0x3BB
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned char q3C4;  // 0x3C4
    void* q3C8;  // 0x3C8
    unsigned char q3CC;  // 0x3CC
    unsigned int q3D4;  // 0x3D4
    unsigned char q3D7;  // 0x3D7
    unsigned char q3DB;  // 0x3DB
    void* q3E4;  // 0x3E4
    unsigned char q3E8;  // 0x3E8
    unsigned int q400;  // 0x400
    unsigned int q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned char q410;  // 0x410
    unsigned int q418;  // 0x418
    void* q41C;  // 0x41C
    unsigned int q420;  // 0x420
    unsigned int q424;  // 0x424
    unsigned int q428;  // 0x428
    HouseClass* q42C;  // 0x42C
    void* q43C;  // 0x43C
    unsigned char q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    void * ptr_458;  // 0x458
    unsigned char q45C;  // 0x45C
    ObjectClass* q460;  // 0x460
    void* q464;  // 0x464
    unsigned int q468;  // 0x468
    void* q474;  // 0x474
    unsigned char q478;  // 0x478
    MSShapeAnim* q47C;  // 0x47C
    MSShapeAnim* q480;  // 0x480
    unsigned char q484;  // 0x484
    unsigned int q487;  // 0x487
    char q488[4];  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned char q493;  // 0x493
    ObjectClass* q494;  // 0x494
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
    unsigned char q4D8;  // 0x4D8
    unsigned char q4DC;  // 0x4DC
    void* q4F8;  // 0x4F8
    unsigned char q4FC;  // 0x4FC
    unsigned int q500;  // 0x500
    unsigned int q504;  // 0x504
    unsigned char q508;  // 0x508
    void* q50C;  // 0x50C
    unsigned char q510;  // 0x510
    unsigned int q514;  // 0x514
    unsigned char q518;  // 0x518
    void* q51C;  // 0x51C
    unsigned int q520;  // 0x520
    unsigned char q524;  // 0x524
    char q526[4];  // 0x526
    void* q528;  // 0x528
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    AbstractClass* q530;  // 0x530
    unsigned char q534;  // 0x534
    void* q538;  // 0x538
    AbstractClass* q53C;  // 0x53C
    unsigned int q53F;  // 0x53F
    unsigned int q540;  // 0x540
    unsigned char q543;  // 0x543
    AbstractClass* q544;  // 0x544
    bool q546;  // 0x546
    unsigned int q547;  // 0x547
    AbstractClass* q548;  // 0x548
    unsigned int q54B;  // 0x54B
    AbstractClass* q54C;  // 0x54C
    unsigned int q54D;  // 0x54D
    unsigned int q54E;  // 0x54E
    unsigned int q54F;  // 0x54F
    unsigned int q550;  // 0x550
    unsigned int q551;  // 0x551
    void* q554;  // 0x554
    unsigned char q555;  // 0x555
    AbstractClass* q558;  // 0x558
    void* q55C;  // 0x55C
    unsigned char q560;  // 0x560
    void* q564;  // 0x564
    unsigned char q568;  // 0x568
    unsigned char q570;  // 0x570
    unsigned int q578;  // 0x578
    void* q580;  // 0x580
    unsigned char q584;  // 0x584
    unsigned int q588;  // 0x588
    void* q58C;  // 0x58C
    unsigned char q590;  // 0x590
    void* q594;  // 0x594
    unsigned char q598;  // 0x598
    void* q59C;  // 0x59C
    unsigned int q5A0;  // 0x5A0
    unsigned char q5A4;  // 0x5A4
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
    unsigned int q5E0;  // 0x5E0
    unsigned char q5E4;  // 0x5E4
    unsigned int q5E8;  // 0x5E8
    BuildingTypeClass* q5EC;  // 0x5EC
    unsigned char q5F0;  // 0x5F0
    void* q5F4;  // 0x5F4
    unsigned char q5F8;  // 0x5F8
    void* q5FC;  // 0x5FC
    AbstractClass* q600;  // 0x600
    void* q604;  // 0x604
    unsigned char q608;  // 0x608
    AbstractClass* q60C;  // 0x60C
    AbstractClass* q610;  // 0x610
    AbstractClass* q614;  // 0x614
    AbstractClass* q618;  // 0x618
    AbstractClass* q61C;  // 0x61C
    AbstractClass* q620;  // 0x620
    unsigned int q624;  // 0x624
    unsigned int q628;  // 0x628
    void* q62C;  // 0x62C
    unsigned int q630;  // 0x630
    AbstractClass* q634;  // 0x634
    unsigned char q638;  // 0x638
    unsigned int q63C;  // 0x63C
    unsigned int q640;  // 0x640
    unsigned int q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned int q64C;  // 0x64C
    unsigned int q650;  // 0x650
    unsigned int q654;  // 0x654
    unsigned int q658;  // 0x658
    unsigned int q65C;  // 0x65C
    unsigned int Invisible;  // 0x660
    void* q664;  // 0x664
    unsigned char q668;  // 0x668
    unsigned char q66C;  // 0x66C
    AbstractClass* q670;  // 0x670
    AbstractClass* q674;  // 0x674
    unsigned char q678;  // 0x678
    AbstractClass* q67C;  // 0x67C
    unsigned char q680;  // 0x680
    unsigned int q684;  // 0x684
    unsigned char q688;  // 0x688
    AbstractClass* q68C;  // 0x68C
    unsigned char q690;  // 0x690
    AbstractClass* q694;  // 0x694
    unsigned char q698;  // 0x698
    AbstractClass* q69C;  // 0x69C
    unsigned char q6A0;  // 0x6A0
    unsigned char q6A4;  // 0x6A4
    unsigned char q6A8;  // 0x6A8
    unsigned char q6AC;  // 0x6AC
    unsigned char q6B0;  // 0x6B0
    unsigned char q6BC;  // 0x6BC
    unsigned int q6C0;  // 0x6C0
    unsigned char q6C4;  // 0x6C4
    unsigned int q6C8;  // 0x6C8
    void* q6CC;  // 0x6CC
    void* q6D0;  // 0x6D0
    unsigned char q6D4;  // 0x6D4
    AbstractClass* q6D8;  // 0x6D8
    unsigned char q6DC;  // 0x6DC
    unsigned int q6E0;  // 0x6E0
    unsigned int q6E1;  // 0x6E1
    unsigned int q6E4;  // 0x6E4
    unsigned char q6E5;  // 0x6E5
    unsigned int q6E8;  // 0x6E8
    unsigned int q6EC;  // 0x6EC
    AbstractClass* q6F0;  // 0x6F0
    AbstractClass* q6F4;  // 0x6F4
    unsigned int q6F8;  // 0x6F8
    AbstractClass* q6FC;  // 0x6FC
    unsigned int q700;  // 0x700
    unsigned int q704;  // 0x704
    unsigned int q708;  // 0x708
    unsigned int q70C;  // 0x70C
    unsigned int q710;  // 0x710
    unsigned char q714;  // 0x714
    AbstractClass* q718;  // 0x718
    unsigned char q71C;  // 0x71C
    void* q720;  // 0x720
    unsigned char q724;  // 0x724
    unsigned int q728;  // 0x728
    void* q734;  // 0x734
    unsigned char q738;  // 0x738
    void* q740;  // 0x740
    unsigned char q744;  // 0x744
    void* q75C;  // 0x75C
    unsigned char q760;  // 0x760
    void* q764;  // 0x764
    unsigned char q768;  // 0x768
    void* q76C;  // 0x76C
    unsigned char q770;  // 0x770
    void* q774;  // 0x774
    unsigned int q778;  // 0x778
    void* q77C;  // 0x77C
    void* q780;  // 0x780
    unsigned char q784;  // 0x784
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
    unsigned int q800;  // 0x800
    ParticleSystemClass * q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned int q818;  // 0x818
    unsigned char q81C;  // 0x81C
    unsigned char q820;  // 0x820
    bool q824;  // 0x824
    BuildingTypeClass* q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    char q834[4];  // 0x834
    unsigned char q838;  // 0x838
    unsigned char q83C;  // 0x83C
    unsigned char q840;  // 0x840
    unsigned char q844;  // 0x844
    void* q848;  // 0x848
    unsigned char q84C;  // 0x84C
    void* q850;  // 0x850
    unsigned char q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned char q860;  // 0x860
    unsigned int q864;  // 0x864
    unsigned char q868;  // 0x868
    unsigned char q86C;  // 0x86C
    bool q870;  // 0x870
    unsigned char q874;  // 0x874
    unsigned char q878;  // 0x878
    void* q880;  // 0x880
    unsigned char q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q890;  // 0x890
    unsigned int q898;  // 0x898
    unsigned char q89C;  // 0x89C
    unsigned char q8A0;  // 0x8A0
    unsigned char q8A4;  // 0x8A4
    unsigned char q8A8;  // 0x8A8
    void* q8AC;  // 0x8AC
    unsigned char q8B0;  // 0x8B0
    void* q8C8;  // 0x8C8
    unsigned char q8CC;  // 0x8CC
    void* q8E4;  // 0x8E4
    unsigned char q8E8;  // 0x8E8
    void* q900;  // 0x900
    unsigned char q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned char q910;  // 0x910
    unsigned int q914;  // 0x914
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
    unsigned char q964;  // 0x964
    void* q968;  // 0x968
    void* q970;  // 0x970
    unsigned char q974;  // 0x974
    unsigned int q980;  // 0x980
    unsigned int q984;  // 0x984
    void* q98C;  // 0x98C
    unsigned char q990;  // 0x990
    void* q9A8;  // 0x9A8
    unsigned char q9AC;  // 0x9AC
    void* q9C4;  // 0x9C4
    unsigned int q9C5;  // 0x9C5
    unsigned int q9C6;  // 0x9C6
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned int q9C9;  // 0x9C9
    unsigned int q9CA;  // 0x9CA
    unsigned int q9CB;  // 0x9CB
    unsigned char q9CC;  // 0x9CC
    unsigned char q9D0;  // 0x9D0
    void* q9E0;  // 0x9E0
    unsigned char q9E4;  // 0x9E4
    void* q9FC;  // 0x9FC
    unsigned char qA00;  // 0xA00
    char qA10[4];  // 0xA10
    unsigned int qA13;  // 0xA13
    unsigned char qA17;  // 0xA17
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
    void* qBB4;  // 0xBB4
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    void* qBC0;  // 0xBC0
    void* qBC4;  // 0xBC4
    unsigned char qBC8;  // 0xBC8
    void* qBD0;  // 0xBD0
    unsigned int VoxelAnimClass_field_0x0;
    unsigned int VoxelAnimClass_field_0x104;
    unsigned int VoxelAnimClass_field_0x108;
    unsigned int VoxelAnimClass_field_0x10C;
    unsigned int VoxelAnimClass_field_0x114;
    unsigned int VoxelAnimClass_field_0x128;
    unsigned int *VoxelAnimClass_field_0x4;
    unsigned int VoxelAnimClass_field_0x8;
    unsigned int *__pad_12C;
    unsigned int *__pad_98;
    unsigned int *__pad_C;
    unsigned int VoxelAnimClass_field_0x140;
    unsigned int *__pad_110;
    unsigned int Undeploy;
// --- flat members (END) ---
    AbstractClass * * GetFrameCount(int * a2);
    Coord * * ProcessAnim(int * a2, unsigned int * a3);
    VoxelAnimClass * DrawVoxel(char a2);
    char UpdateMatrix();
    float * QuaternionToMatrix(float * a2, void *a2_2);
    int CleanupMembers(void *a1);
    int Constructor(void *a1, void *a2, void *a3, void *a4, void *a5);
    int DrawVoxelFrame(int a2, int a3, int a4);
    int LoadFrame();
    int Reset(void *a1, void *a2);
    int SaveLoad_Prefix(ObjectClass * aP1, int aP1a);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn3();
    int StubReturn328();
    int StubReturn41();
    int StubReturnFalse(int a1);
    int ddtor(int a1, unsigned int * a2);
    unsigned int ProcessFrame();
};

} // namespace gamemd
