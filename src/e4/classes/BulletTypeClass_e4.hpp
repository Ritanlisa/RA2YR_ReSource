// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BulletTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int AG;  // 0x11
    unsigned int Degenerates;  // 0x12
    unsigned int Bouncy;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char FirersPalette;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char NeedsSaveOrLink;  // 0x20
    unsigned int ShrapnelCount;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    bool NoSpawnAlt;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    unsigned int Trailer;  // 0x40
    bool q042;  // 0x42
    unsigned int ROT;  // 0x44
    unsigned int CourseLockDuration;  // 0x48
    bool q04A;  // 0x4A
    unsigned int SpawnDelay;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int ScaledSpawnDelay;  // 0x50
    unsigned int Scalable;  // 0x54
    unsigned int Arm;  // 0x58
    unsigned int AnimLow;  // 0x5C
    unsigned int AnimHigh;  // 0x5D
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
    unsigned int q088;  // 0x88
    void* q08C;  // 0x8C
    void* q094;  // 0x94
    unsigned int tail_95;  // 0x95
    void* q098;  // 0x98
    char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    void * Image;  // 0xA4
    char ImageAllocated;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned char ChargerTurrets;  // 0xBC
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    AnimClass* q0D4;  // 0xD4
    void* q0D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
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
    unsigned char ChargerBarrels;  // 0x104
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
    void* q148;  // 0x148
    char q14C;  // 0x14C
    unsigned char q14D;  // 0x14D
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
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
    unsigned int q180;  // 0x180
    unsigned int q184;  // 0x184
    unsigned int q188;  // 0x188
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
    unsigned char q1E9;  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
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
    char q211;  // 0x211
    char q212;  // 0x212
    unsigned char AlphaImageFile;  // 0x213
    unsigned int q214;  // 0x214
    AbstractClass* q218;  // 0x218
    AbstractClass* q21C;  // 0x21C
    unsigned int q220;  // 0x220
    void* q224;  // 0x224
    unsigned int q228;  // 0x228
    char q22C;  // 0x22C
    char q22D;  // 0x22D
    char q22E;  // 0x22E
    char q22F;  // 0x22F
    char q230;  // 0x230
    char q231;  // 0x231
    char q232;  // 0x232
    char q233;  // 0x233
    char q234;  // 0x234
    char q235;  // 0x235
    char q236;  // 0x236
    char q237;  // 0x237
    char q238;  // 0x238
    char q239;  // 0x239
    char q23A;  // 0x23A
    unsigned char q23B;  // 0x23B
    bool q23D;  // 0x23D
    unsigned char q23E;  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned int q248;  // 0x248
    SomeVoxelCache* q24C;  // 0x24C
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    SomeVoxelCache* q25C;  // 0x25C
    unsigned int q260;  // 0x260
    char q264[4];  // 0x264
    unsigned int q268;  // 0x268
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q270;  // 0x270
    SomeVoxelCache* q274;  // 0x274
    char q278[4];  // 0x278
    SomeVoxelCache* q27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    char q28C[4];  // 0x28C
    unsigned char q290;  // 0x290
    bool airburst;  // 0x294
    bool floater;  // 0x295
    bool subjectToCliffs;  // 0x296
    bool subjectToElevation;  // 0x297
    bool subjectToWalls;  // 0x298
    bool veryHigh;  // 0x299
    bool shadow;  // 0x29A
    bool arcing;  // 0x29B
    bool dropping;  // 0x29C
    bool level;  // 0x29D
    bool inviso;  // 0x29E
    bool proximity;  // 0x29F
    bool ranged;  // 0x2A0
    bool noRotate;  // 0x2A1
    bool inaccurate;  // 0x2A2
    bool flakScatter;  // 0x2A3
    bool AA;  // 0x2A4
    bool q2A5;  // 0x2A5
    bool degenerates;  // 0x2A6
    bool bouncy;  // 0x2A7
    bool animPalette;  // 0x2A8
    bool firersPalette;  // 0x2A9
    unsigned short q2AA;  // 0x2AA
    int cluster;  // 0x2AC
    WeaponTypeClass* airburstWeapon;  // 0x2B0
    WeaponTypeClass* shrapnelWeapon;  // 0x2B4
    int shrapnelCount;  // 0x2B8
    int detonationAltitude;  // 0x2BC
    bool vertical;  // 0x2C0
    unsigned char q2C1;  // 0x2C1
    double Elasticity;  // 0x2C4
    double elasticity;  // 0x2C8
    int Acceleration;  // 0x2CC
    ColorScheme* acceleration;  // 0x2D0
    AnimTypeClass* Color;  // 0x2D4
    int trailer;  // 0x2D8
    int rot;  // 0x2DC
    int courseLockDuration;  // 0x2E0
    int spawnDelay;  // 0x2E4
    bool scaledSpawnDelay;  // 0x2E8
    int scalable;  // 0x2EC
    unsigned char q2ED;  // 0x2ED
    unsigned char arm;  // 0x2F0
    unsigned char q2F1;  // 0x2F1
    unsigned char AnimRate;  // 0x2F2
    bool Flat;  // 0x2F3
    unsigned char animLow;  // 0x2F4
    unsigned char animHigh;  // 0x2F5
    unsigned char animRate;  // 0x2F6
    bool flat;  // 0x2F7
// --- flat members (END) ---
    BuildingTypeClass * * ReadArmor();
    BuildingTypeClass * * ReadTrailerAnim();
    BulletTypeClass * ddtor(char a2);
    WeaponTypeClass * * LoadFromINI(unsigned char *** a2);
    char ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4);
    char Stub(int a1, int a2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int GetWarhead(int a2, int a3);
    int ProcessImpact(int a1);
    int ProcessPower(int * a2);
    int SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    unsigned char * Construct(ObjectClass * aP1);
    unsigned int * GetROF(unsigned int * a1, int * a2);
};

} // namespace gamemd
