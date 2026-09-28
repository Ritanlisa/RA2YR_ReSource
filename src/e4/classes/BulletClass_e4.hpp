// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BulletClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int q010;  // 0x10
    bool IsAllocated;  // 0x13
    unsigned int q014;  // 0x14
    bool q017;  // 0x17
    void* q018;  // 0x18
    unsigned int q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    double u64_27;  // 0x27
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned char q059;  // 0x59
    unsigned int q05A;  // 0x5A
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    char customSound[4];  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int q06A;  // 0x6A
    unsigned int u32_6C;  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int u32_78;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q080;  // 0x80
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    unsigned int u32_84;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    unsigned int u32_88;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    unsigned int q08C;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    unsigned int q090;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    unsigned int q09C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int q0A4;  // 0xA4
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* q0AC;  // 0xAC
    ParticleSystemClass* q0B0;  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    unsigned int q0B4;  // 0xB4
    unsigned int Data;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int q0BC;  // 0xBC
    bool q0BF;  // 0xBF
    unsigned int q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int q0C4;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    unsigned int q0C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    unsigned int q0D4;  // 0xD4
    unsigned int q0D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned int Bright;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    bool q0EB;  // 0xEB
    unsigned int q0EC;  // 0xEC
    bool q0ED;  // 0xED
    double u64_F0;  // 0xF0
    unsigned int q0F2;  // 0xF2
    unsigned int u32_F4;  // 0xF4
    bool q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    unsigned int u32_F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int u32_FC;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int CourseLock;  // 0x105
    unsigned int q108;  // 0x108
    void* q10C;  // 0x10C
    unsigned int q10D;  // 0x10D
    unsigned int q10E;  // 0x10E
    unsigned int q10F;  // 0x10F
    unsigned int q110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned int InheritedColor;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q11E;  // 0x11E
    unsigned int q120;  // 0x120
    unsigned char q123;  // 0x123
    unsigned int AnimFrame;  // 0x124
    unsigned int AnimRateCounter;  // 0x125
    unsigned int WeaponType;  // 0x128
    unsigned int SourceCoords;  // 0x12C
    unsigned int q12D;  // 0x12D
    unsigned int q12E;  // 0x12E
    unsigned int q12F;  // 0x12F
    ParticleSystemClass* q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int TargetCoords;  // 0x138
    unsigned int q13C;  // 0x13C
    void* q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int DamageMultiplier;  // 0x148
    void* NextAnim;  // 0x14C
    unsigned int u16_14E;  // 0x14E
    unsigned int SpawnNextAnim;  // 0x150
    void* q154;  // 0x154
    unsigned int q158;  // 0x158
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
    BulletTypeClass* Type;  // 0x172
    unsigned int q173;  // 0x173
    unsigned char q174;  // 0x174
    bool q175;  // 0x175
    unsigned int Owner;  // 0x176
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
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned int q1B7;  // 0x1B7
    unsigned char q1BB;  // 0x1BB
    unsigned int u32_1C8;  // 0x1C8
    void* q1D0;  // 0x1D0
    unsigned int q1D4;  // 0x1D4
    unsigned char q1D8;  // 0x1D8
    INIClass* q1DC;  // 0x1DC
    AbstractTypeClass* q1E0;  // 0x1E0
    void* q1E4;  // 0x1E4
    ConnectionPointClass* q1E8;  // 0x1E8
    unsigned char q1EC;  // 0x1EC
    unsigned int q200;  // 0x200
    int q202;  // 0x202
    unsigned int q204;  // 0x204
    unsigned char q206;  // 0x206
    unsigned int q208;  // 0x208
    void* q20C;  // 0x20C
    unsigned char q210;  // 0x210
    unsigned int q214;  // 0x214
    unsigned char q218;  // 0x218
    void* q21C;  // 0x21C
    unsigned char q220;  // 0x220
    unsigned int q224;  // 0x224
    unsigned int q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q234;  // 0x234
    double q240;  // 0x240
    unsigned int q244;  // 0x244
    double q248;  // 0x248
    unsigned int q24C;  // 0x24C
    unsigned char q250;  // 0x250
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    void* q25C;  // 0x25C
    unsigned int q260;  // 0x260
    unsigned int CourseLockCounter;  // 0x264
    unsigned int Target;  // 0x268
    unsigned char q26C;  // 0x26C
    unsigned int q270;  // 0x270
    unsigned int q274;  // 0x274
    unsigned char q278;  // 0x278
    unsigned char q27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int WH;  // 0x288
    void* q28C;  // 0x28C
    unsigned char q290;  // 0x290
    void* q294;  // 0x294
    void* q298;  // 0x298
    void* q29C;  // 0x29C
    unsigned char q2A0;  // 0x2A0
    void* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    void* q2AC;  // 0x2AC
    unsigned char q2B0;  // 0x2B0
    unsigned int u32_2B4;  // 0x2B4
    unsigned char q2B8;  // 0x2B8
    void* q2BC;  // 0x2BC
    unsigned int q2C0;  // 0x2C0
    unsigned char q2C4;  // 0x2C4
    unsigned int q2C8;  // 0x2C8
    unsigned int q2CC;  // 0x2CC
    void* q2D0;  // 0x2D0
    unsigned char q2D4;  // 0x2D4
    void* q2D8;  // 0x2D8
    void* q2DC;  // 0x2DC
    void* q2E0;  // 0x2E0
    void* q2E4;  // 0x2E4
    void* q2E8;  // 0x2E8
    unsigned char q2EC;  // 0x2EC
    unsigned int u32_2F0;  // 0x2F0
    void* q2F4;  // 0x2F4
    unsigned char q2F8;  // 0x2F8
    unsigned char q2FA;  // 0x2FA
    unsigned int q300;  // 0x300
    ParticleSystemClass * q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned int q30A;  // 0x30A
    void* q30C;  // 0x30C
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned int q320;  // 0x320
    ParticleSystemClass * q324;  // 0x324
    unsigned int q328;  // 0x328
    void* q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned int q334;  // 0x334
    bool q338;  // 0x338
    BuildingTypeClass* q33C;  // 0x33C
    unsigned int Range;  // 0x340
    unsigned int q344;  // 0x344
    unsigned char q348;  // 0x348
    unsigned char q34C;  // 0x34C
    void* q350;  // 0x350
    unsigned int q354;  // 0x354
    unsigned int q358;  // 0x358
    unsigned char q35C;  // 0x35C
    unsigned char q360;  // 0x360
    unsigned char q364;  // 0x364
    bool q366;  // 0x366
    unsigned char q368;  // 0x368
    unsigned char q36A;  // 0x36A
    BulletTypeClass* q370;  // 0x370
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
    unsigned int u32_3F8;  // 0x3F8
    unsigned int q400;  // 0x400
    unsigned int q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned char q410;  // 0x410
    unsigned int q418;  // 0x418
    void* q41C;  // 0x41C
    unsigned int q420;  // 0x420
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
    unsigned int q496;  // 0x496
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
    void* q520;  // 0x520
    unsigned int BulletClass_field_0x10C;
    unsigned int BulletClass_field_0x130;
    unsigned int BulletClass_field_0x140;
    unsigned int BulletClass_field_0x154;
    unsigned int BulletClass_field_0x4;
    unsigned int BulletClass_field_0x8;
    unsigned int BulletClass_field_0xAC;
    unsigned int BulletClass_field_0xB0;
    unsigned int ResetDetonationTimer;
    unsigned int __pad_0;
    unsigned int __pad_110;
    unsigned int __pad_134;
    unsigned int __pad_144;
    unsigned int __pad_158;
    unsigned int __pad_B4;
    unsigned int __pad_C;
// --- flat members (END) ---
    BulletClass();
    BulletClass * * Dtor();
    LONG CheckTargetValidity(int a1);
    LONG ValidateTarget(volatile LONG * a1);
    int * CalculateSpreadAngle(int a1);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int PowerDrainProcess(int a1, unsigned int * a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
};

} // namespace gamemd
