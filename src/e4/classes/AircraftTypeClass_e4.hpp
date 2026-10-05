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
struct AnimTypeClass;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct AircraftClass;  // fix_fwd_type_supply

struct AircraftTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned char AirportBound;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
    bool q02B;  // 0x2B
    unsigned char q031;  // 0x31
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    unsigned char q03A;  // 0x3A
    char UINameLabel;  // 0x3D
    int q044;  // 0x44
    unsigned int q04C;  // 0x4C
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
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
    unsigned int MainVoxel;  // 0xB0
    char TurretVoxel[4];  // 0xB4
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
    unsigned int q264;  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    unsigned int ammo;  // 0x2AC
    unsigned int EliteAbilities;  // 0x2AE
    unsigned int strength;  // 0x2BC
    unsigned int techLevel;  // 0x2C4
    unsigned int speed;  // 0x2CC
    unsigned int threatPosed;  // 0x2D4
    bool Carryall;  // 0x2EC
    double q300;  // 0x300
    unsigned int DebrisTypes;  // 0x314
    unsigned int VoxelAnimList_Items;  // 0x318
    unsigned int q324;  // 0x324
    unsigned int IntList_A_Items;  // 0x334
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned int Locomotor;  // 0x34C
    int BuildLimit;  // 0x3B8
    unsigned int Category;  // 0x3BC
    unsigned int BuildingTypeList_Items;  // 0x3EC
    unsigned int IntList_B_Items;  // 0x418
    unsigned int IntList_C_Items;  // 0x434
    unsigned int IntList_D_Items;  // 0x450
    unsigned int IntList_E_Items;  // 0x46C
    unsigned int IntList_G_Items;  // 0x4A4
    unsigned int IntList_H_Items;  // 0x4C0
    unsigned int VoiceFeedback_Items;  // 0x4DC
    unsigned int DieSound;  // 0x510
    int q520;  // 0x520
    int EnterBioReactorSound;  // 0x5A0
    int MinDebris;  // 0x5BC
    int MaxDebris;  // 0x5C0
    int FlightLevel;  // 0x618
    int Speed;  // 0x678
    unsigned int SpeedType;  // 0x67C
    int q698;  // 0x698
    char CameoFile;  // 0x6D6
    unsigned int Cameo;  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile;  // 0x6F5
    unsigned int AltCameo;  // 0x710
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    unsigned int Explosion;  // 0x72C
    unsigned char q730;  // 0x730
    int Storage;  // 0x800
    double Size;  // 0x896
    char Weapon[4];  // 0x898
    void* qBC0;  // 0xBC0
    void* qBF0;  // 0xBF0
    bool TiberiumHeal;  // 0xC92
    bool Turret;  // 0xCA1
    int SuppressionThreshold;  // 0xD40
    float JumpjetAccel;  // 0xD58
    void* Palette;  // 0xDC4
    void* ArrayIndex;  // 0xDF8
    bool qE08;  // 0xE08
// --- flat members (END) ---
    AircraftTypeClass(char *Source, int aP1, int a1, int a2, int a3, int aP0, int a0);
    AircraftClass * ConstructAircraft(AbstractClass * ppv);
    AircraftTypeClass * ddtor(char a2, int a1, int aP0, int aP1, int a0, int a3);
    char GetDimensions(int a1, int a2);
    char StubReturnFalse();
    int * CreateAircraft(int a1);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGameplayValue();
    int GetObjectSize();
    int GetTypeIdentifier();
    int  LoadFromINI(ObjectTypeClass * aP0, int aP1);
    int PowerDrainUpdate(int * a2);
    int SaveToINI(void * a0, TechnoTypeClass * aP1, int a3);
};

} // namespace gamemd
