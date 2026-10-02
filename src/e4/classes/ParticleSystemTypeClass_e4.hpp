// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply

struct ParticleSystemTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int SlowdownDistance;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    void *q12;  // 0x12
    bool IsAllocated;  // 0x13
    int ParticleSystemTypeClass_field_29C;  // 0x14
    unsigned char q015;  // 0x15
    int ParticleSystemTypeClass_field_2A0;  // 0x18
    unsigned int q01A;  // 0x1A
    float Velocity;  // 0x1C
    bool q01D;  // 0x1D
    char TurretVoxel[4];  // 0x20
    char q024[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    bool q02B;  // 0x2B
    char ChargerBarrels_0x12[4];  // 0x2C
    bool NoSpawnAlt;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    char BarrelVoxel[4];  // 0x36
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    char q040[4];  // 0x40
    bool q042;  // 0x42
    char q044[4];  // 0x44
    bool q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned char q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned char q08A;  // 0x8A
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    void* q098;  // 0x98
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    unsigned int q0A4;  // 0xA4
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned int q0B6;  // 0xB6
    unsigned char q0B7;  // 0xB7
    void* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    void* q0BD;  // 0xBD
    bool q0BE;  // 0xBE
    bool q0BF;  // 0xBF
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    unsigned char q0C7;  // 0xC7
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    AnimClass* q0D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0DC;  // 0xDC
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    unsigned char q0FF;  // 0xFF
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned char q110;  // 0x110
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
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned char q15C;  // 0x15C
    int q160;  // 0x160
    unsigned int q162;  // 0x162
    unsigned int q164;  // 0x164
    unsigned char q166;  // 0x166
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q180;  // 0x180
    void* q184;  // 0x184
    unsigned int q188;  // 0x188
    bool q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
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
    char q211;  // 0x211
    unsigned int AlphaImageFile;  // 0x213
    unsigned int q214;  // 0x214
    unsigned char q218;  // 0x218
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
    char q233;  // 0x233
    char q234;  // 0x234
    char q235;  // 0x235
    char q237;  // 0x237
    char q238;  // 0x238
    char q239;  // 0x239
    char q23A;  // 0x23A
    unsigned int q23B;  // 0x23B
    bool q23D;  // 0x23D
    unsigned char q23E;  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches_4[4];  // 0x244
    unsigned char q248;  // 0x248
    SomeVoxelCache* q24C;  // 0x24C
    unsigned char q250;  // 0x250
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    SomeVoxelCache* q25C;  // 0x25C
    SomeVoxelCache* q260;  // 0x260
    char q264[4];  // 0x264
    unsigned char q268;  // 0x268
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q270;  // 0x270
    SomeVoxelCache* q274;  // 0x274
    char q278[4];  // 0x278
    unsigned char q27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    char q28C[4];  // 0x28C
    unsigned char q290;  // 0x290
    void* q294;  // 0x294
    unsigned char q298;  // 0x298
    void* q29C;  // 0x29C
    ParticleSystemClass* q2A0;  // 0x2A0
    float q2A4;  // 0x2A4
    int q2A8;  // 0x2A8
    int q2AC;  // 0x2AC
    int DamageDelay;  // 0x2B0
    int q2B4;  // 0x2B4
    int q2B8;  // 0x2B8
    int ParticleSystemTypeClass_field_2C0;  // 0x2BC
    int StartScale;  // 0x2C0
    int ParticleSystemTypeClass_field_2C8;  // 0x2C4
    bool Beam;  // 0x2C8
    bool OneFrame;  // 0x2C9
    bool q2CA;  // 0x2CA
    void* q2CC;  // 0x2CC
    void* q2D0;  // 0x2D0
    bool ParticleSystemTypeClass_field_bool_2D4;  // 0x2D4
    unsigned char padding_2D5_3;  // 0x2D5
    unsigned int u32_2D8;  // 0x2D8
    unsigned char q2D9;  // 0x2D9
    AnimClass* q2DC;  // 0x2DC
    unsigned char q2E0;  // 0x2E0
    void* q2E4;  // 0x2E4
    void* q2E8;  // 0x2E8
    void* q2EC;  // 0x2EC
    unsigned char q2F0;  // 0x2F0
    unsigned int u32_2F4;  // 0x2F4
    double u64_2F8;  // 0x2F8
    Color* q300;  // 0x300
    Color* q304;  // 0x304
    void* p308;  // regen name
    void* p30A;  // regen name
    unsigned char u8_30B;  // 0x30B
    unsigned int ParticleSystemTypeClass_field_0x0;
    unsigned int ParticleSystemTypeClass_field_0x294;
    unsigned int ParticleSystemTypeClass_field_0x29C;
    unsigned int ParticleSystemTypeClass_field_0x2A0;
    unsigned int ParticleSystemTypeClass_field_0x2A4;
    unsigned int ParticleSystemTypeClass_field_0x2A8;
    unsigned int ParticleSystemTypeClass_field_0x2AC;
    unsigned int ParticleSystemTypeClass_field_0x2B4;
    unsigned int ParticleSystemTypeClass_field_0x2B8;
    unsigned int *__pad_298;
    unsigned int q1180;
    unsigned int q11C2;
    unsigned int q1200;
    unsigned int q1208;
    unsigned int q1246;
    unsigned int q1284;
    unsigned int q12C2;
    unsigned int q1300;
    unsigned int q1346;
    unsigned int q30C;
    unsigned int vtable46;
    unsigned int ParticleSystemTypeClass_field_0x4;
    unsigned int ParticleSystemTypeClass_field_0x8;
    unsigned int SpawnCount;
    unsigned int q308;
    unsigned int q30A;
// --- flat members (END) ---
    ParticleSystemTypeClass * ddtor(char a2);
    char Stub(int a1, int a2);
    float * ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    void* GetType(unsigned char *** aP1);
    void* PowerDrainUpdate(int * a2);
};

} // namespace gamemd
