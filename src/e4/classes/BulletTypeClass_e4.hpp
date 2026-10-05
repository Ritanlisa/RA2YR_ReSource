// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct ColorScheme;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply

struct BulletTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
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
    int Strength;  // 0xA0
    void * Image;  // 0xA4
    char ImageAllocated;  // 0xA8
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
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
    unsigned int q264;  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    bool shadow;  // 0x29A
    bool level;  // 0x29D
    double Elasticity;  // 0x2C4
    AnimTypeClass* Color;  // 0x2D4
    bool flat;  // 0x2F7
    void* ObjectTypeClass;  // 0x0 (no offset truth)
// --- flat members (END) ---
    BuildingTypeClass * * ReadArmor();
    BuildingTypeClass * * ReadTrailerAnim();
    BulletTypeClass * ddtor(char a2, int a1, int aP0, int aP1, int aP2, int a3);
    WeaponTypeClass * * LoadFromINI(unsigned char *** a2, void *a2_2);
    char ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4);
    char Stub(int a1, int a2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int GetWarhead(int a2, int a3);
    int ProcessImpact(int a1);
    int ProcessPower(int *aP1);
    int SaveLoad_Prefix(gamemd::ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, gamemd::ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    unsigned char * Construct(char *aP1);
    unsigned int * GetROF(unsigned int * a1, int * a2);
    int ProcessPower(int * a2, void *a2_2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
};

} // namespace gamemd
