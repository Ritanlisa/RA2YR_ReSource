// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct WarheadTypeClass;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply

struct VoxelAnimTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    SHPStruct* uniqueId;  // 0x10
    int Strength;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    SHPStruct* Image;  // 0x16
    SHPStruct* nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    char BarrelVoxel[4];  // 0x24
    bool q02B;  // 0x2B
    unsigned char q031;  // 0x31
    char TurretVoxel[4];  // 0x32
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    char q040[4];  // 0x40
    char q044[4];  // 0x44
    bool q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    void* q098;  // 0x98
    unsigned int Armor;  // 0x9C
    int q0A0;  // 0xA0
    void * q0A4;  // 0xA4
    char ImageAllocated;  // 0xA8
    void * AlphaImage;  // 0xAC
    int MainVoxel;  // 0xB0
    int q0B4;  // 0xB4
    unsigned char ChargerTurrets;  // 0xBC
    void* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    void * q164;  // 0x164
    char q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
    bool AlternateArcticArt;  // 0x1F9
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Selectable;  // 0x200
    bool LegalTarget;  // 0x201
    bool Insignificant;  // 0x202
    bool Immune;  // 0x203
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    unsigned char AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned char q258;  // 0x258
    char q264[4];  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    bool Normalized;  // 0x294
    bool Translucent;  // 0x295
    bool SourceShared;  // 0x296
    unsigned int VoxelIndex;  // 0x298
    unsigned int Duration;  // 0x29C
    double Elasticity;  // 0x2A0
    double MinAngularVelocity;  // 0x2A8
    double MaxAngularVelocity;  // 0x2B0
    ObjectClass* q2B4;  // 0x2B4
    double MinZVel;  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    double MaxZVel;  // 0x2C0
    double MaxXYVel;  // 0x2C8
    bool IsMeteor;  // 0x2D0
    VoxelAnimTypeClass* Spawns;  // 0x2D4
    unsigned int SpawnCount;  // 0x2D8
    unsigned int StartSound;  // 0x2DC
    char StopSound[4];  // 0x2E0
    AnimTypeClass* BounceAnim;  // 0x2E4
    AnimTypeClass* ExpireAnim;  // 0x2E8
    AnimTypeClass* TrailerAnim;  // 0x2EC
    unsigned int Damage;  // 0x2F0
    unsigned int DamageRadius;  // 0x2F4
    WarheadTypeClass* Warhead;  // 0x2F8
    ParticleSystemTypeClass* AttachedSystem;  // 0x2FC
    bool IsTiberium;  // 0x300
// --- flat members (END) ---
    VoxelAnimTypeClass * LoadFromINI(uint8_t *** a2, void *a2_2);
    VoxelAnimTypeClass * ddtor(char a2);
    char Stub(int a1, int a2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int PowerDrainUpdate(int * a2);
    int SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    long long GetData(ObjectTypeClass * aP1, int a3);
    VoxelAnimTypeClass * Constructor(char *Source);
    VoxelAnimTypeClass * ddtor(void ** Block, char a2);
};

} // namespace gamemd
