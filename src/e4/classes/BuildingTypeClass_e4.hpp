// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct UnitTypeClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct InfantryTypeClass;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct ParticleTypeClass;  // fix_fwd_type_supply

struct BuildingTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
    unsigned int IsAllocated;  // 0x25
    bool q02B;  // 0x2B
    unsigned char q031;  // 0x31
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    unsigned char q03A;  // 0x3A
    char UINameLabel;  // 0x3D
    int q044;  // 0x44
    unsigned int u32_4C;  // 0x4C
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
    unsigned int u32_C8;  // 0xC8
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    char q100;  // 0x100
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int q158;  // 0x158
    SHPStruct* q164;  // 0x164
    bool q168;  // 0x168
    unsigned int u32_1A8;  // 0x1A8
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
    void* FoundationData;  // 0x2EC
    SHPStruct* Buildup;  // 0x2F0
    bool BuildupLoaded;  // 0x2F4
    char BuildCat[4];  // 0x2F8
    unsigned int DebrisTypes;  // 0x314
    unsigned int Locomotor;  // 0x31C
    unsigned int q324;  // 0x324
    unsigned int IntList_A_Items;  // 0x334
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    double Size;  // 0x380
    int BuildLimit;  // 0x3B8
    unsigned int Category;  // 0x3BC
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
    unsigned int qE08;  // 0xE08
    unsigned int HalfDamageSmokeLocation1;  // 0xE0C
    unsigned int HalfDamageSmokeLocation2;  // 0xE18
    double GateCloseDelay;  // 0xE28
    int LightVisibility;  // 0xE30
    int LightIntensity;  // 0xE34
    int LightRedTint;  // 0xE38
    int LightBlueTint;  // 0xE40
    unsigned int PrimaryFirePixelOffset;  // 0xE44
    int ToTile;  // 0xE58
    char BuildupFile_0x10;  // 0xE5C
    int UnitExitSound;  // 0xE70
    unsigned char __pad_E88;  // 0xE88
    int ExtraPowerBonus;  // 0xEC8
    int Height;  // 0xED4
    int OccupyHeight;  // 0xED8
    int MidPoint;  // 0xEDC
    int DoorStages;  // 0xEE0
    int Upgrades;  // 0xEEC
    unsigned int BuildingAnim;  // 0xF1C
    SHPStruct* q14E4;  // 0x14E4
    SHPStruct* q14EC;  // 0x14EC
    SHPStruct* q14F4;  // 0x14F4
    SHPStruct* RoofDeployingAnim;  // 0x14FC
    SHPStruct* UnderRoofDoorAnim;  // 0x1504
    SHPStruct* BibShape;  // 0x1518
    bool TogglePower;  // 0x154A
    bool HasSpotlight;  // 0x154B
    bool IsTemple;  // 0x154C
    bool IsPlug;  // 0x154D
    bool HoverPad;  // 0x154E
    bool BaseNormal;  // 0x154F
    bool EligibileForAllyBuilding;  // 0x1550
    bool NeedsEngineer;  // 0x1552
    bool Bib;  // 0x1570
    bool Wall;  // 0x1571
    bool Capturable;  // 0x1572
    bool Powered;  // 0x1573
    bool Unsellable;  // 0x1579
    unsigned int QueueingCell;  // 0x1618
    int NumberImpassableRows;  // 0x1620
    char RemoveOccupy[4];  // 0x1624
    bool Radar;  // 0x16A4
    bool ChargeAnim;  // 0x16A6
    bool IsAnimDelayedFire;  // 0x16A7
    bool SiloDamage;  // 0x16A8
    bool UnitRepair;  // 0x16A9
    bool UnitReload;  // 0x16AA
    bool Cloning;  // 0x16AC
    bool Grinding;  // 0x16AD
    bool UnitAbsorb;  // 0x16AE
    bool InfantryAbsorb;  // 0x16AF
    bool SecretLab;  // 0x16B0
    bool DoubleThick;  // 0x16B1
    bool DockUnload;  // 0x16B3
    bool Recoilless;  // 0x16B4
    bool BridgeRepairHut;  // 0x16B6
    bool Gate;  // 0x16B7
    bool SAM;  // 0x16B8
    bool ConstructionYard;  // 0x16B9
    bool NukeSilo;  // 0x16BA
    bool Refinery;  // 0x16BB
    bool Weeder;  // 0x16BC
    bool WeaponsFactory;  // 0x16BD
    bool LaserFencePost;  // 0x16BE
    bool LaserFence;  // 0x16BF
    bool FirestormWall;  // 0x16C0
    bool Hospital;  // 0x16C1
    bool Armory;  // 0x16C2
    bool TurretAnimIsVoxel;  // 0x16C5
    bool BarrelAnimIsVoxel;  // 0x16C6
    bool Helipad;  // 0x16CB
    bool OrePurifier;  // 0x16CC
    int DelayedFireDelay;  // 0x16EC
    int SuperWeapon;  // 0x16F0
    int GateStages;  // 0x16F8
    int PowersUpToLevel;  // 0x16FC
    bool DamagedDoor;  // 0x1700
    bool InvisibleInGame;  // 0x1701
    bool TerrainPalette;  // 0x1702
    bool ExtraDamageStage;  // 0x1704
    bool ConcentricRadialIndicator;  // 0x1708
    int BarrelStartPitch;  // 0x1710
    bool DemandLoad;  // 0x1760
    char AltCameoFile;  // 0x1781
    bool PreventsPlacementOverlap;  // 0x1788
    unsigned int *__pad_1714;
    unsigned char __pad_F70[4];  /* G57w17h1: til char[960]@0xF70; [4] keeps 4B layout, restores byte-index stride */
    unsigned int gap0;
    unsigned int ArrayIndex;
    unsigned int FreeUnit;
    unsigned int LightGreenTint;
    unsigned int ExitCoord;
    int PowerDrain;  // 0x14354
    int PowerBonus;  // 0x14344
    unsigned int Foundation;  // 0x14372
    unsigned int Factory;  // 0x14184
    int ExtraPowerDrain;  // 0x14368
    unsigned int BuildingAnimFrame;  // 0x14404
    int Adjacent;  // 0x14180
    unsigned int vtable0;
    void* Flat_flag;  // 0x0 (no offset truth)
    unsigned char CloakRadiusInCells;  // 0x1707 (ml 5895 CloakRadiusInCells unsigned char; ReadArmor 0x465475 站) g57w20m11b
// --- flat members (END) ---
    AbstractClass * * CleanupMembers(AbstractClass * a1, AbstractClass * a2);
    AbstractClass * * FindOrCreateAlt();
    AbstractClass * * LoadRepairAnimations();
    AbstractClass * * SaveLoad_Prefix();
    BuildingTypeClass * * FindOrCreate(char *Source);
    OverlayTypeClass * * FindOrCreate2();
    ParticleSystemTypeClass * * LoadOrGet();
    ParticleTypeClass * * FindOrCreateEx(char *Source);
    bool CanPlacePath(unsigned short *a2, int a3);
    char Enqueue(int a2, void *a2_2);
    int CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2);
    int ConstructFull(char * Source, void *a2);
    int FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3, void *a4);
    int FindIndex();
    int FindIndexByName();
    int GetAuxField();
    int GetClassIdentifier();
    int GetMaxPips();
    int GetObjectSize();
    int GetPowerOutput(int aP1);
    int GetTypeIdentifier();
    bool IsPlacementValid(__int16 *a2, __int16 *a3);  // G57w10-S raw 0x00746000 IUnknown 占位清除
    int ProcessData(unsigned int * a2, short * a3);
    int SaveLoad_Prefix_0(unsigned int *a2, int *a3, int a4, int a5);
    int UpdatePower();
    int ddtor(void *a1);
    size_t Dequeue(int *aP1);
    unsigned int * Construct(AbstractClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6);
    unsigned int * GetSizeInLeptons(unsigned int * a2);
    unsigned int * GetUpgradeOffset(unsigned int * a2);
    unsigned int * loadBuildingProperty_b_545E520(ObjectTypeClass * aP1);
    unsigned int * loadBuildingProperty_b_5478850(int a2, int a3);
    int IsPowered();
    void LoadVoxel();
    void* LoadAnimations(int aP1);
    void* ProcessPower(int *aP1);
    static int GetFoundationWidth(void *aP1);  // 0x45EC90 raw fn_45.c:11741 int __thiscall(BuildingTypeClass*); sites pass varied ptr types
    int GetFoundationHeight(char a2);  // 0x45eca0
    OverlayTypeClass * * FindOrCreate2(ObjectClass * Source);
    ParticleSystemTypeClass * * LoadOrGet(ObjectClass * Source);
    static AbstractClass * * FindOrCreateAlt(INIClass * Source);  // [w16g2] static 1-arg overload (def body this=0)
    BuildingTypeClass * * ProcessEvent();
    int SaveLoad_Prefix_0();
};

} // namespace gamemd
