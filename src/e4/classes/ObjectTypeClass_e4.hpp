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
    SHPStruct* Image;  // 0x16
    SHPStruct* nextArrayIndex;  // 0x18
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
    SHPStruct* q0A4;  // 0xA4
    bool ImageAllocated;  // 0xA8
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char q0B4[4];  // 0xB4
    char q0B8[4];  // 0xB8
    unsigned char q0B9;  // 0xB9
    char ChargerTurrets[72];  // 0xBC
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
    char VoxelCaches_4[80];  // 0x244
    SomeVoxelCache* q248;  // 0x248
    SomeVoxelCache* q24C;  // 0x24C
    SomeVoxelCache* q254;  // 0x254
    SomeVoxelCache* q258;  // 0x258
    SomeVoxelCache* q25C;  // 0x25C
    SomeVoxelCache* q260;  // 0x260
    char q264[4];  // 0x264
    SomeVoxelCache* q268;  // 0x268
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q270;  // 0x270
    SomeVoxelCache* q274;  // 0x274
    char q278[4];  // 0x278
    SomeVoxelCache* q27C;  // 0x27C
    SomeVoxelCache* q280;  // 0x280
    SomeVoxelCache* q284;  // 0x284
    SomeVoxelCache* q288;  // 0x288
    char q28C[4];  // 0x28C
    SomeVoxelCache* q290;  // 0x290
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
