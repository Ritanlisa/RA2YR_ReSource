// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_TechnoTypeClass
#define GAMEMD_E4_FLAT_TechnoTypeClass 1  // G57a1: suppress minimal_carriers.hpp twin
#endif
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct DynamicVectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct TechnoTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    int BarrelVoxel;  // 0x24
    bool q02B;  // 0x2B
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    unsigned char q03A;  // 0x3A
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int UIName;  // 0x60
    char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    char ChargerTurrets[72];  // 0xBC
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    char q100;  // 0x100
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned char __pad_128[9];  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int q164;  // 0x164
    bool q168;  // 0x168
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1B0;  // 0x1B0
    unsigned int u32_1B8;  // 0x1B8
    unsigned int u32_1C0;  // 0x1C0
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
    int ammo;  // 0x2AC
    char EliteAbilities[18];  // 0x2AE
    unsigned int u32_2B2;  // 0x2B2
    unsigned int u32_2B6;  // 0x2B6
    unsigned int u32_2BA;  // 0x2BA
    int strength;  // 0x2BC
    int techLevel;  // 0x2C4
    float speed;  // 0x2CC
    int threatPosed;  // 0x2D4
    unsigned int u32_2F4;  // 0x2F4
    unsigned char DebrisTypes;  // 0x314
    CampaignClass* VoxelAnimList_Items;  // 0x318
    unsigned int q324;  // 0x324
    CampaignClass* IntList_A_Items;  // 0x334
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned int Locomotor;  // 0x34C
    double Size;  // 0x380
    int BuildLimit;  // 0x3B8
    unsigned int Category;  // 0x3BC
    CampaignClass* BuildingTypeList_Items;  // 0x3EC
    CampaignClass* IntList_B_Items;  // 0x418
    CampaignClass* IntList_C_Items;  // 0x434
    CampaignClass* IntList_D_Items;  // 0x450
    CampaignClass* IntList_E_Items;  // 0x46C
    CampaignClass* IntList_F_Items;  // 0x488
    CampaignClass* IntList_G_Items;  // 0x4A4
    CampaignClass* IntList_H_Items;  // 0x4C0
    CampaignClass* VoiceFeedback_Items;  // 0x4DC
    unsigned char DieSound;  // 0x510
    int q520;  // 0x520
    int EnterBioReactorSound;  // 0x5A0
    int MinDebris;  // 0x5BC
    int MaxDebris;  // 0x5C0
    int FlightLevel;  // 0x618
    int Speed;  // 0x678
    unsigned int SpeedType;  // 0x67C
    char CameoFile;  // 0x6D6
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile;  // 0x6F5
    char AltCameo[4];  // 0x710
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    unsigned char Explosion;  // 0x72C
    int Storage;  // 0x800
    void* Weapon;  // 0x898
    void* qBC0;  // 0xBC0
    void* qBF0;  // 0xBF0
    bool TiberiumHeal;  // 0xC92
    bool Turret;  // 0xCA1
    int SuppressionThreshold;  // 0xD40
    float JumpjetAccel;  // 0xD58
    void* Palette;  // 0xDC4
    unsigned int *__pad_0;
    unsigned int q0F0;
    unsigned int vtable0;
    void* waypoints;  // 0x0 (no offset truth)
    int CheckFlag(int aP1);  // 0x721290 IDA truth: int __thiscall(this, int) (G57e1; was bogus filler field)
    static int CheckFlag(TechnoTypeClass *aP1, int a2);  // G42.35 static-form sync (qualified sites 0x5FA4EF/0x5FAAE6/0x5FB251) (G57e1)
    void* Debris;  // 0x0 (no offset truth)
    void* Value;  // 0x0 (no offset truth)
    void* aP2;  // 0x0 (no offset truth)
    void* houseTypesCount;  // 0x0 (no offset truth)
// --- flat members (END) ---
    _DWORD * Construct(int aP1);
    static AbstractClass * * GetByTypeAndIndex(int a1, int a2);
    DynamicVectorClass_flat * * SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    TechnoTypeClass * ddtor(char a2);
    VectorClass_flat * Constructor_1(ObjectTypeClass * aP1);
    bool CanAttackMove_IgnoreWeapon();
    char RemoveItem(int a2, void *a2_2);
    char vt_entry_A0();
    double ComputeBuildTime();
    int ComputeValue(void * a2, float a3);
    int ComputeValueSimple(float * a2);
    int DTOR();
    double Dispatch(unsigned int *aP1);  // 0x50BDF0 IDA truth: double __thiscall(this, _DWORD*) (G57e1)
    static double Dispatch(TechnoTypeClass *aP1, unsigned int *a2);  // G42.35 static-form sync (qualified sites 0x711F17/0x711F9A) (G57e1)
    int GetThreatMultiplier(TechnoTypeClass * aP1);
    int  SaveLoadDataArray(TechnoTypeClass * aP1);
    int SaveLoad_Prefix_0(unsigned int *a2, int *a3, int a4, int a5);
    unsigned int * Constructor(void *a1, void *a2, void *a3, void *a4, void *a5);
    unsigned int * Constructor_0(int a2);
    unsigned int * LoadBase(char *aP1);
    void * ReadINI(char * Source, int a3, void *a3_2);
    void* CanAttackMove_IgnoreWeapon_0();
    void* CanAttackMove_IgnoreWeapon_0_0();
    static double HasVoiceResponse(...);  // C2597 interim stub
    int DTOR(void *a1);
    int SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3);
    TechnoTypeClass * ddtor(void * Block, char a2);
    unsigned int * Constructor_0(ObjectTypeClass * aP1, void *a2, void *a3);
    TechnoTypeClass * * sub_404BB0();
};

} // namespace gamemd
