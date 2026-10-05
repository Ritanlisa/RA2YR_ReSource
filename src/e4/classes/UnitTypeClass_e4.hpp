// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct VoxelAnimTypeClass;  // fix_fwd_type_supply

struct UnitTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char CrateGoodie;  // 0x15
    unsigned int Harvester;  // 0x16
    bool Weeder;  // 0x17
    unsigned int nextArrayIndex;  // 0x18
    unsigned int HasTurret;  // 0x19
    unsigned int IsSimpleDeployer;  // 0x1B
    char referenceCount[4];  // 0x1C
    bool UseTurretShadow;  // 0x1D
    unsigned int NeedsSaveOrLink;  // 0x20
    int LargeVisceroid;  // 0x21
    bool q02B;  // 0x2B
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    char UINameLabel;  // 0x3D
    unsigned int UIName;  // 0x60
    char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    Color* q098;  // 0x98
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    char BarrelVoxel[4];  // 0xB8
    char ChargerTurrets[72];  // 0xBC
    CampaignClass* q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    char q100;  // 0x100
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
    SHPStruct* q164;  // 0x164
    bool q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
    int AlternateArcticArt;  // 0x1F9
    int Theater;  // 0x1FC
    int Crushable;  // 0x1FD
    int Bombable;  // 0x1FE
    int RadarInvisible;  // 0x1FF
    int Selectable;  // 0x200
    int LegalTarget;  // 0x201
    int Insignificant;  // 0x202
    int Immune;  // 0x203
    int Voxel;  // 0x206
    int NewTheater;  // 0x207
    int HasRadialIndicator;  // 0x208
    int IgnoresFirestorm;  // 0x209
    int UseLineTrail;  // 0x20A
    int LineTrailColor;  // 0x20C
    char AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned char q258;  // 0x258
    char q264[4];  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    unsigned int ammo;  // 0x2AC
    char EliteAbilities[4];  // 0x2AE
    unsigned int strength;  // 0x2BC
    unsigned int techLevel;  // 0x2C4
    unsigned int speed;  // 0x2CC
    unsigned int threatPosed;  // 0x2D4
    char MovementRestrictedTo[4];  // 0x2EC
    unsigned int DebrisTypes;  // 0x314
    unsigned int Locomotor;  // 0x31C
    unsigned int q324;  // 0x324
    unsigned int IntList_A_Items;  // 0x334
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    double Size;  // 0x380
    int BuildLimit;  // 0x3B8
    char Category[4];  // 0x3BC
    unsigned int DieSound;  // 0x420
    unsigned int EnterBioReactorSound;  // 0x498
    unsigned int MinDebris;  // 0x4B4
    unsigned int MaxDebris;  // 0x4B8
    unsigned int FlightLevel;  // 0x4F8
    unsigned int Speed;  // 0x528
    int SpeedType;  // 0x52C
    int q5B0;  // 0x5B0
    int q5B8;  // 0x5B8
    int q698;  // 0x698
    char CameoFile;  // 0x6D6
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameo[4];  // 0x710
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    unsigned int Explosion;  // 0x72C
    unsigned int Storage;  // 0x7A0
    unsigned int TiberiumHeal;  // 0x7BF
    unsigned int Turret;  // 0x7CE
    char Weapon[4];  // 0x898
    void* qBC0;  // 0xBC0
    void* qBF0;  // 0xBF0
    unsigned int Explodes;  // 0xCED
    unsigned int Normalized;  // 0xCFB
    unsigned int AutoCrush;  // 0xD05
    unsigned int Spawns;  // 0xD30
    int SuppressionThreshold;  // 0xD44
    float JumpjetAccel;  // 0xD5C
    unsigned int Palette;  // 0xDAC
    void* ArrayIndex;  // 0xDF8
    bool Passive;  // 0xE0C
    bool IsTilter;  // 0xE14
    bool SmallVisceroid;  // 0xE18
    SHPStruct* AltImage;  // 0xE58
    unsigned int UnitTypeClass_CreateUnit;
// --- flat members (END) ---
    char CreateUnit(short *a2, void *ppv);  // 0x7474B0 (G42.35f supply -- data member UnitTypeClass_CreateUnit is a different symbol)
    int ConstructUnit(void *ppv);  // 0x747560 (G42.35f supply)
    INIClass * * ReadINIEntry();
    UnitTypeClass(char *Source, int aP1, int a2, int a1, int a3);
    UnitTypeClass * ddtor(char a2);
    VoxelAnimTypeClass * * FindOrCreate(ObjectClass * Source);
    int *  GetDimensions(int * a2);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGameplayValue();
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadFromINI2(int a1, int a2);
    int PowerDrainUpdate(int * a2);
    int SaveToINI(void * a0, TechnoTypeClass * aP1, int a3);
    int j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0();
    unsigned int * ClampToGroundHeight(unsigned int * a1, int * a2);
    unsigned int *  GetDefaultDimensions(unsigned int * a1);
};

} // namespace gamemd
