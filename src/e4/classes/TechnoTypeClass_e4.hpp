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
    unsigned int alignmentPadding_3;  // 0x11
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    int BarrelVoxel;  // 0x24
    int TargetEffectivenessCoefficient;  // 0x28
    int ChargerBarrels_0x12;  // 0x2C
    int TargetSpecialThreatCoefficient;  // 0x30
    int alignmentPadding;  // 0x33
    int TargetStrengthCoefficient;  // 0x38
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    void* TargetDistanceCoefficient;  // 0x40
    unsigned int SlowdownDistance;  // 0x50
    unsigned int UIName;  // 0x60
    unsigned int u32_48;  // 0x48
    char Name;  // 0x64
    int tail_95;  // 0x95
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    char ChargerTurrets[72];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    bool NoSpawnAlt;  // 0x14C
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
    int AlternateArcticArt;  // 0x1F9
    int ArcticArtInUse;  // 0x1FA
    char AlphaImageFile_0x19;  // 0x1FB
    int Theater;  // 0x1FC
    int Crushable;  // 0x1FD
    int Bombable;  // 0x1FE
    int RadarInvisible;  // 0x1FF
    int Selectable;  // 0x200
    int LegalTarget;  // 0x201
    int Insignificant;  // 0x202
    int Immune;  // 0x203
    int IsLogic;  // 0x204
    int AllowCellContent;  // 0x205
    int Voxel;  // 0x206
    int NewTheater;  // 0x207
    int HasRadialIndicator;  // 0x208
    int IgnoresFirestorm;  // 0x209
    int UseLineTrail;  // 0x20A
    int LineTrailColor;  // 0x20C
    unsigned char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile;  // 0x213
    unsigned char Insignificant_d;  // 0x232
    unsigned char Voxel_d;  // 0x236
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    bool armed;  // 0x294
    bool hasTurretFlag;  // 0x295
    int weaponCount;  // 0x298
    WeaponTypeClass* weapon1;  // 0x29C
    WeaponTypeClass* weapon2;  // 0x2A0
    WeaponTypeClass* eliteWeapon1;  // 0x2A4
    WeaponTypeClass* eliteWeapon2;  // 0x2A8
    int ammo;  // 0x2AC
    char EliteAbilities[18];  // 0x2AE
    int guardRange;  // 0x2B0
    int sight;  // 0x2B4
    int cost;  // 0x2B8
    int strength;  // 0x2BC
    int armor;  // 0x2C0
    int techLevel;  // 0x2C4
    int pipScale;  // 0x2C8
    float speed;  // 0x2CC
    float speedType;  // 0x2D0
    int threatPosed;  // 0x2D4
    int threatAvoidValue;  // 0x2D8
    int cloakRadius;  // 0x2E0
    bool trainable;  // 0x2E4
    int buildLimit;  // 0x2E8
    double unknown_double_300;  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    unsigned char DebrisTypes;  // 0x314
    CampaignClass* VoxelAnimList_Items;  // 0x318
    unsigned int VoxelAnimList_Capacity;  // 0x31C
    unsigned int VoxelAnimList_FlagByte;  // 0x321
    unsigned char DebrisMaximums;  // 0x330
    CampaignClass* IntList_A_Items;  // 0x334
    unsigned int IntList_A_Capacity;  // 0x338
    unsigned int IntList_A_FlagByte;  // 0x33D
    char Locomotor[16];  // 0x34C
    double unknown_double_360;  // 0x360
    double unknown_double_368;  // 0x368
    double Weight;  // 0x370
    double PhysicalSize;  // 0x378
    double Size;  // 0x380
    double SizeLimit;  // 0x388
    bool HoverAttack;  // 0x390
    int VHPScan;  // 0x394
    int unknown_int_398;  // 0x398
    double RollAngle;  // 0x3A0
    double PitchSpeed;  // 0x3A8
    double PitchAngle;  // 0x3B0
    int BuildLimit;  // 0x3B8
    char Category[4];  // 0x3BC
    unsigned int unknown_3C0;  // 0x3C0
    double DeployTime;  // 0x3C8
    int FireAngle;  // 0x3D0
    char PipScale[4];  // 0x3D4
    bool PipsDrawForAll;  // 0x3D8
    int LeptonMindControlOffset;  // 0x3DC
    int PixelSelectionBracketDelta;  // 0x3E0
    int PipWrap;  // 0x3E4
    unsigned char Dock;  // 0x3E8
    CampaignClass* BuildingTypeList_Items;  // 0x3EC
    unsigned int BuildingTypeList_Capacity;  // 0x3F0
    unsigned int BuildingTypeList_FlagByte;  // 0x3F5
    char DeploysInto[4];  // 0x404
    char UndeploysInto[4];  // 0x408
    char PowersUnit[4];  // 0x40C
    bool PoweredUnit;  // 0x410
    unsigned char VoiceSelect;  // 0x414
    CampaignClass* IntList_B_Items;  // 0x418
    unsigned int IntList_B_Capacity;  // 0x41C
    unsigned int IntList_B_FlagByte;  // 0x421
    TechnoTypeClass * ptr_424;  // 0x424
    unsigned char VoiceSelectEnslaved;  // 0x430
    CampaignClass* IntList_C_Items;  // 0x434
    unsigned int IntList_C_Capacity;  // 0x438
    unsigned int IntList_C_FlagByte;  // 0x43D
    unsigned char VoiceSelectDeactivated;  // 0x44C
    CampaignClass* IntList_D_Items;  // 0x450
    unsigned int IntList_D_Capacity;  // 0x454
    unsigned int IntList_D_FlagByte;  // 0x459
    unsigned char VoiceMove;  // 0x468
    CampaignClass* IntList_E_Items;  // 0x46C
    unsigned int IntList_E_Capacity;  // 0x470
    unsigned int IntList_E_FlagByte;  // 0x475
    unsigned char VoiceAttack;  // 0x484
    CampaignClass* IntList_F_Items;  // 0x488
    unsigned int IntList_F_Capacity;  // 0x48C
    unsigned int IntList_F_FlagByte;  // 0x491
    TechnoTypeClass * ptr_494;  // 0x494
    unsigned char VoiceSpecialAttack;  // 0x4A0
    CampaignClass* IntList_G_Items;  // 0x4A4
    unsigned int IntList_G_Capacity;  // 0x4A8
    unsigned int IntList_G_FlagByte;  // 0x4AD
    unsigned char VoiceDie;  // 0x4BC
    CampaignClass* IntList_H_Items;  // 0x4C0
    unsigned int IntList_H_Capacity;  // 0x4C4
    unsigned int IntList_H_FlagByte;  // 0x4C9
    unsigned char VoiceFeedback;  // 0x4D8
    CampaignClass* VoiceFeedback_Items;  // 0x4DC
    unsigned int VoiceFeedback_Capacity;  // 0x4E0
    unsigned int VoiceFeedback_FlagByte;  // 0x4E5
    unsigned char MoveSound;  // 0x4F4
    unsigned char DieSound;  // 0x510
    int AuxSound1;  // 0x52C
    int AuxSound2;  // 0x530
    int CreateSound;  // 0x534
    int DamageSound;  // 0x538
    int ImpactWaterSound;  // 0x53C
    int ImpactLandSound;  // 0x540
    int CrashingSound;  // 0x544
    int SinkingSound;  // 0x548
    int VoiceFalling;  // 0x54C
    int VoiceCrashing;  // 0x550
    int VoiceSinking;  // 0x554
    int VoiceEnter;  // 0x558
    int VoiceCapture;  // 0x55C
    int TurretRotateSound;  // 0x560
    int EnterTransportSound;  // 0x564
    int LeaveTransportSound;  // 0x568
    int DeploySound;  // 0x56C
    int UndeploySound;  // 0x570
    int ChronoInSound;  // 0x574
    int ChronoOutSound;  // 0x578
    int VoiceHarvest;  // 0x57C
    int VoicePrimaryWeaponAttack;  // 0x580
    int VoicePrimaryEliteWeaponAttack;  // 0x584
    int VoiceSecondaryWeaponAttack;  // 0x588
    int VoiceSecondaryEliteWeaponAttack;  // 0x58C
    int VoiceDeploy;  // 0x590
    int VoiceUndeploy;  // 0x594
    int EnterGrinderSound;  // 0x598
    int LeaveGrinderSound;  // 0x59C
    int EnterBioReactorSound;  // 0x5A0
    int LeaveBioReactorSound;  // 0x5A4
    int ActivateSound;  // 0x5A8
    int DeactivateSound;  // 0x5AC
    int MindClearedSound;  // 0x5B0
    char MovementZone[4];  // 0x5B4
    int GuardRange;  // 0x5B8
    int MinDebris;  // 0x5BC
    int MaxDebris;  // 0x5C0
    unsigned char DebrisAnims;  // 0x5C4
    int Passengers;  // 0x5E0
    bool OpenTopped;  // 0x5E4
    int Sight;  // 0x5E8
    bool ResourceGatherer;  // 0x5EC
    bool ResourceDestination;  // 0x5ED
    bool RevealToAll;  // 0x5EE
    bool Drainable;  // 0x5EF
    int SensorsSight;  // 0x5F0
    int DetectDisguiseRange;  // 0x5F4
    int BombSight;  // 0x5F8
    int LeadershipRating;  // 0x5FC
    int NavalTargeting;  // 0x600
    int LandTargeting;  // 0x604
    float BuildTimeMultiplier;  // 0x608
    int MindControlRingOffset;  // 0x60C
    int Cost;  // 0x610
    int Soylent;  // 0x614
    int FlightLevel;  // 0x618
    int AirstrikeTeam;  // 0x61C
    int EliteAirstrikeTeam;  // 0x620
    char AirstrikeTeamType[4];  // 0x624
    char EliteAirstrikeTeamType[4];  // 0x628
    int AirstrikeRechargeTime;  // 0x62C
    int EliteAirstrikeRechargeTime;  // 0x630
    int TechLevel;  // 0x634
    unsigned char Prerequisite;  // 0x638
    unsigned char PrerequisiteOverride;  // 0x654
    int WalkRate;  // 0x660
    int IdleRate;  // 0x664
    char VeteranAbilities[4];  // 0x668
    int ThreatPosed;  // 0x670
    int Points;  // 0x674
    int Speed;  // 0x678
    char SpeedType[4];  // 0x67C
    int InitialAmmo;  // 0x680
    int Ammo;  // 0x684
    int IFVMode;  // 0x688
    int AirRangeBonus;  // 0x68C
    bool BerserkFriendly;  // 0x690
    bool SprayAttack;  // 0x691
    bool Pushy;  // 0x692
    bool Natural;  // 0x693
    bool Unnatural;  // 0x694
    bool CloseRange;  // 0x695
    int Reload;  // 0x698
    int EmptyReload;  // 0x69C
    int ReloadIncrement;  // 0x6A0
    int RadialFireSegments;  // 0x6A4
    int DeployFireWeapon;  // 0x6A8
    bool DeployFire;  // 0x6AC
    bool DeployToLand;  // 0x6AD
    bool MobileFire;  // 0x6AE
    bool OpportunityFire;  // 0x6AF
    bool DistributedFire;  // 0x6B0
    bool DamageReducesReadiness;  // 0x6B1
    int ReadinessReductionMultiplier;  // 0x6B4
    char UnloadingClass[4];  // 0x6B8
    char DeployingAnim[4];  // 0x6BC
    bool AttackFriendlies;  // 0x6C0
    bool AttackCursorOnFriendlies;  // 0x6C1
    int UndeployDelay;  // 0x6C4
    void* PreventAttackMove;  // 0x6C8
    unsigned int OwnerFlags;  // 0x6CC
    int AIBasePlanningSide;  // 0x6D0
    bool StupidHunt;  // 0x6D4
    bool AllowedToStartInMultiplayer;  // 0x6D5
    char CameoFile;  // 0x6D6
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile;  // 0x6F5
    double SpecialThreatValue;  // 0x704
    char AltCameo[4];  // 0x710
    double MyEffectivenessCoefficient;  // 0x712
    bool AltCameoAllocated;  // 0x714
    int RotCount;  // 0x718
    int ROT;  // 0x71C
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    int Points2;  // 0x728
    unsigned char Explosion;  // 0x72C
    unsigned char DestroyAnim;  // 0x748
    double ThreatAvoidanceCoefficient;  // 0x752
    TechnoTypeClass * ptr_758;  // 0x758
    char NaturalParticleSystem[4];  // 0x764
    char NaturalParticleSystemLocation[12];  // 0x768
    TechnoTypeClass * ptr_770;  // 0x770
    char RefinerySmokeParticleSystem[4];  // 0x774
    unsigned char DamageParticleSystems;  // 0x778
    unsigned int VoxelAnimList_Embed;  // 0x788
    unsigned char DestroyParticleSystems;  // 0x794
    char DamageSmokeOffset[12];  // 0x7B0
    bool DamSmkOffScrnRel;  // 0x7BC
    char DestroySmokeOffset[12];  // 0x7C0
    char RefinerySmokeOffsetOne[12];  // 0x7CC
    char RefinerySmokeOffsetTwo[12];  // 0x7D8
    char RefinerySmokeOffsetThree[12];  // 0x7E4
    char RefinerySmokeOffsetFour[12];  // 0x7F0
    int ShadowIndex;  // 0x7FC
    int Storage;  // 0x800
    bool TurretNotExportedOnGround;  // 0x804
    bool Gunner;  // 0x805
    bool HasTurretTooltips;  // 0x806
    int TurretCount;  // 0x808
    int WeaponCount;  // 0x80C
    bool IsChargeTurret;  // 0x810
    int TurretWeapon;  // 0x814
    unsigned int IntList_A_Embed;  // 0x816
    void* Weapon;  // 0x898
    char EliteWeapon[504];  // 0xA94
    bool TypeImmune;  // 0xC8C
    bool MoveToShroud;  // 0xC8D
    bool Trainable;  // 0xC8E
    bool DamageSparks;  // 0xC8F
    bool TargetLaser;  // 0xC90
    bool ImmuneToVeins;  // 0xC91
    bool TiberiumHeal;  // 0xC92
    bool CloakStop;  // 0xC93
    bool IsTrain;  // 0xC94
    bool IsDropship;  // 0xC95
    bool ToProtect;  // 0xC96
    bool Disableable;  // 0xC97
    bool Unbuildable;  // 0xC98
    bool DoubleOwned;  // 0xC99
    bool Invisible;  // 0xC9A
    bool RadarVisible;  // 0xC9B
    bool HasPrimary;  // 0xC9C
    bool Sensors;  // 0xC9D
    bool Nominal;  // 0xC9E
    bool DontScore;  // 0xC9F
    bool DamageSelf;  // 0xCA0
    bool Turret;  // 0xCA1
    bool TurretRecoil;  // 0xCA2
    char TurretAnimData[16];  // 0xCA4
    bool unknown_bool_CB4;  // 0xCB4
    char BarrelAnimData[16];  // 0xCB8
    bool unknown_bool_CC8;  // 0xCC8
    bool Naval;  // 0xCD1
    bool Remapable;  // 0xCD2
    bool Cloakable;  // 0xCD3
    int SlavesNumber;  // 0xD18
    int SlaveRegenRate;  // 0xD1C
    bool BalloonHover;  // 0xD3E
    int SuppressionThreshold;  // 0xD40
    int JumpjetTurnRate;  // 0xD44
    int JumpjetSpeed;  // 0xD48
    float JumpjetClimb;  // 0xD4C
    float JumpjetCrash;  // 0xD50
    float JumpjetAccel;  // 0xD58
    float JumpjetWobbles;  // 0xD5C
    int JumpjetDeviation;  // 0xD64
    unsigned int RequiredHouses;  // 0xD74
    unsigned int ForbiddenHouses;  // 0xD78
    unsigned int SecretHouses;  // 0xD7C
    char SecondSpawnOffset[12];  // 0xD84
    bool JumpJet;  // 0xD94
    bool Crashable;  // 0xD95
    int ZFudgeBridge;  // 0xDA0
    char PaletteFile;  // 0xDA4
    void* Palette;  // 0xDC4
// --- flat members (END) ---
    void* waypoints;  // 0x0 (no offset truth)
    int CheckFlag();
    static int CheckFlag(TechnoTypeClass *aP1, int a2);
    void* Debris;  // 0x0 (no offset truth)
    void* Value;  // 0x0 (no offset truth)
    void* aP2;  // 0x0 (no offset truth)
    void* houseTypesCount;  // 0x0 (no offset truth)
    int SaveLoad_Prefix_0(unsigned int *a2, int *a3, int a4, int a5, void *a5_1 = 0);
    void Construct(int aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    AbstractClass * * GetByTypeAndIndex(int a1, int a2);
    DynamicVectorClass_flat * * SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    TechnoTypeClass * ddtor(char a2);
    VectorClass_flat * Constructor_1(ObjectTypeClass * aP1);
    bool CanAttackMove_IgnoreWeapon();
    char RemoveItem(int a2, void *a2_2);
    char vt_entry_A0();
    double ComputeBuildTime();
    int ComputeValue(void * a2, float a3);
    int ComputeValueSimple(float * a2);
    int DTOR(void *a1 = 0);
    double Dispatch();
    double  Dispatch(unsigned int *a2, void *a2_1 = 0);
    int GetThreatMultiplier(TechnoTypeClass * aP1);
    int  SaveLoadDataArray(TechnoTypeClass * aP1);
    int SaveLoad_Prefix_0(unsigned int *a2, int *a3, int a4, int a5);
    unsigned int * Constructor(void *a1, void *a2, void *a3, void *a4, void *a5);
    unsigned int * Constructor_0(int a2);
    unsigned int * LoadBase(char *aP1, void *a2 = 0);
    void * ReadINI(char * Source, int a3, void *a3_1 = 0);
    void* CanAttackMove_IgnoreWeapon_0();
    void* CanAttackMove_IgnoreWeapon_0_0();
    static int HasVoiceResponse(TechnoTypeClass * aP1, int a2);
    int SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3);
    TechnoTypeClass * ddtor(void * Block, char a2);
    unsigned int * Constructor_0(ObjectTypeClass * aP1, void *a2, void *a3);
    TechnoTypeClass * * sub_404BB0();
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q010;  // 0x10 (offset-truth)
    unsigned int q024;  // 0x24 (offset-truth)
    int q1504;  // 0x1504 (ml)
    unsigned char q16C2;  // 0x16C2 (offset-truth)
    IUnknown* q1884;  // 0x1884 (ml)
    unsigned int u32_1900;  // 0x1900 (offset-truth)
    unsigned int u32_1A00;  // 0x1A00 (offset-truth)
    unsigned int u32_1A04;  // 0x1A04 (offset-truth)
    unsigned int u32_1B80;  // 0x1B80 (offset-truth)
    unsigned int u32_1C08;  // 0x1C08 (offset-truth)

    unsigned char __pad_2F0;  // X10 supply (csp_canon_members)
    unsigned char __pad_A90;  // X10 supply (csp_canon_members)
    unsigned char __pad_CD4;  // X10 supply (csp_canon_members)
    unsigned char __pad_D20;  // X10 supply (csp_canon_members)
    unsigned char __pad_D54;  // X10 supply (csp_canon_members)
    unsigned char __pad_D60;  // X10 supply (csp_canon_members)
    unsigned char __pad_D68;  // X10 supply (csp_canon_members)
    unsigned char __pad_D80;  // X10 supply (csp_canon_members)
    unsigned char __pad_D90;  // X10 supply (csp_canon_members)
    unsigned char __pad_DC8;  // X10 supply (csp_canon_members)
    AbstractClass* q0C0;  // X10 supply (member_lookup)
    IUnknown* q0CC;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q0D8;  // X10 supply (member_lookup)
#else
    void* q0D8;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q0E0;  // X10 supply (member_lookup)
#else
    void* q0E0;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    AbstractClass* q0E8;  // X10 supply (member_lookup)
    unsigned int q0EC;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q0F0;  // X10 supply (member_lookup)
#else
    void* q0F0;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q0F4;  // X10 supply (member_lookup)
#else
    void* q0F4;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    void* q0F7;  // X10 supply (member_lookup)
    unsigned char q1050[4];  /* IntDynamicVector */  // X10 supply (member_lookup)
    unsigned char q10C0[4];  /* IntDynamicVector */  // X10 supply (member_lookup)
    unsigned char q1130[4];  /* IntDynamicVector */  // X10 supply (member_lookup)
    unsigned char q1198;  // X10 supply (member_lookup)
    unsigned char q1210[4];  /* IntDynamicVector */  // X10 supply (member_lookup)
    unsigned char q1280[4];  /* IntDynamicVector */  // X10 supply (member_lookup)
    unsigned char q12E8;  // X10 supply (member_lookup)
    unsigned char q1710[4];  /* ObjectTypeClass */  // X10 supply (member_lookup)
    unsigned char q18B0;  // X10 supply (member_lookup)
    IUnknown* q1948;  // X10 supply (member_lookup)
    unsigned int q324;  // X10 supply (member_lookup)
    unsigned int q328;  // X10 supply (member_lookup)
    unsigned int q354;  // X10 supply (member_lookup)
    unsigned char q358;  // X10 supply (member_lookup)
    unsigned char q364;  // X10 supply (member_lookup)
    unsigned char q8A8;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* qAA4;  // X10 supply (member_lookup)
#else
    void* qAA4;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    unsigned char qC24;  // X10 supply (member_lookup)
    unsigned char qD70;  // X10 supply (member_lookup)
    WeaponTypeClass* qDC0;  // X10 supply (member_lookup)
    unsigned int u32_2B2;  // X10 supply (member_lookup)
    unsigned int u32_2B6;  // X10 supply (member_lookup)
    unsigned int u32_2BA;  // X10 supply (member_lookup)
    unsigned int u32_2BE;  // X10 supply (member_lookup)
    unsigned int u32_2DC;  // X10 supply (member_lookup)
    unsigned int u32_2EC;  // X10 supply (member_lookup)
    unsigned int u32_2F4;  // X10 supply (member_lookup)
    unsigned int u32_2F8;  // X10 supply (member_lookup)
    unsigned int u32_304;  // X10 supply (member_lookup)
    unsigned int u32_30C;  // X10 supply (member_lookup)
    unsigned int u32_350;  // X10 supply (member_lookup)
    unsigned int u32_36C;  // X10 supply (member_lookup)
    unsigned int u32_374;  // X10 supply (member_lookup)
    unsigned int u32_37C;  // X10 supply (member_lookup)
    unsigned int u32_384;  // X10 supply (member_lookup)
    unsigned int u32_38C;  // X10 supply (member_lookup)
    unsigned int u32_3A4;  // X10 supply (member_lookup)
    unsigned int u32_3AC;  // X10 supply (member_lookup)
    unsigned int u32_3B4;  // X10 supply (member_lookup)
    unsigned int u32_3CC;  // X10 supply (member_lookup)
    unsigned int u32_3F8;  // X10 supply (member_lookup)
    unsigned int u32_3FC;  // X10 supply (member_lookup)
    unsigned int u32_440;  // X10 supply (member_lookup)
    unsigned int u32_444;  // X10 supply (member_lookup)
    unsigned int u32_478;  // X10 supply (member_lookup)
    unsigned int u32_47C;  // X10 supply (member_lookup)
    unsigned int u32_4B0;  // X10 supply (member_lookup)
    unsigned int u32_4B4;  // X10 supply (member_lookup)
    unsigned int u32_4E8;  // X10 supply (member_lookup)
    unsigned int u32_4EC;  // X10 supply (member_lookup)
    unsigned int u32_524;  // X10 supply (member_lookup)
    unsigned int u32_5390;  // X10 supply (member_lookup)
    unsigned int u32_5394;  // X10 supply (member_lookup)
    unsigned int u32_5398;  // X10 supply (member_lookup)
    unsigned int u32_539C;  // X10 supply (member_lookup)
    unsigned int u32_53A0;  // X10 supply (member_lookup)
    unsigned int u32_648;  // X10 supply (member_lookup)
    unsigned int u32_64C;  // X10 supply (member_lookup)
    unsigned int u32_6EE;  // X10 supply (member_lookup)
    unsigned int u32_70D;  // X10 supply (member_lookup)
    unsigned int u32_73C;  // X10 supply (member_lookup)
    unsigned int u32_740;  // X10 supply (member_lookup)
    unsigned int u32_76C;  // X10 supply (member_lookup)
    unsigned int u32_78C;  // X10 supply (member_lookup)
    unsigned int u32_7B4;  // X10 supply (member_lookup)
    unsigned int u32_7B8;  // X10 supply (member_lookup)
    unsigned int u32_7C4;  // X10 supply (member_lookup)
    unsigned int u32_7C8;  // X10 supply (member_lookup)
    unsigned int u32_7D0;  // X10 supply (member_lookup)
    unsigned int u32_7D4;  // X10 supply (member_lookup)
    unsigned int u32_7DC;  // X10 supply (member_lookup)
    unsigned int u32_7E0;  // X10 supply (member_lookup)
    unsigned int u32_7E8;  // X10 supply (member_lookup)
    unsigned int u32_7EC;  // X10 supply (member_lookup)
    unsigned int u32_7F4;  // X10 supply (member_lookup)
    unsigned int u32_7F8;  // X10 supply (member_lookup)
    int u32_85C;  // X10 supply (member_lookup)
    unsigned char u32_98[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    unsigned int u32_CA8;  // X10 supply (member_lookup)
    unsigned int u32_CAC;  // X10 supply (member_lookup)
    unsigned int u32_CB0;  // X10 supply (member_lookup)
    unsigned int u32_CBC;  // X10 supply (member_lookup)
    unsigned char u32_CC0[4];  /* IntDynamicVector */  // X10 supply (member_lookup)
    unsigned int u32_CC4;  // X10 supply (member_lookup)
    unsigned int u32_CCC;  // X10 supply (member_lookup)
    unsigned int u32_CCD;  // X10 supply (member_lookup)
    unsigned int u32_CCE;  // X10 supply (member_lookup)
    unsigned int u32_CCF;  // X10 supply (member_lookup)
    unsigned int u32_CD5;  // X10 supply (member_lookup)
    unsigned int u32_CD8;  // X10 supply (member_lookup)
    int u32_CF4;  // X10 supply (member_lookup)
    unsigned int u32_D0;  // X10 supply (member_lookup)
    unsigned int u32_D0C;  // X10 supply (member_lookup)
    unsigned int u32_D10;  // X10 supply (member_lookup)
    unsigned int u32_D14;  // X10 supply (member_lookup)
    unsigned int u32_D15;  // X10 supply (member_lookup)
    unsigned int u32_D21;  // X10 supply (member_lookup)
    unsigned int u32_D22;  // X10 supply (member_lookup)
    unsigned int u32_D23;  // X10 supply (member_lookup)
    unsigned int u32_D24;  // X10 supply (member_lookup)
    unsigned int u32_D25;  // X10 supply (member_lookup)
    unsigned int u32_D26;  // X10 supply (member_lookup)
    unsigned int u32_D27;  // X10 supply (member_lookup)
    unsigned int u32_D28;  // X10 supply (member_lookup)
    unsigned int u32_D29;  // X10 supply (member_lookup)
    unsigned int u32_D2A;  // X10 supply (member_lookup)
    unsigned int u32_D2B;  // X10 supply (member_lookup)
    unsigned int u32_D2C;  // X10 supply (member_lookup)
    unsigned int u32_D2D;  // X10 supply (member_lookup)
    unsigned int u32_D2F;  // X10 supply (member_lookup)
    unsigned int u32_D31;  // X10 supply (member_lookup)
    unsigned int u32_D32;  // X10 supply (member_lookup)
    unsigned int u32_D33;  // X10 supply (member_lookup)
    unsigned int u32_D34;  // X10 supply (member_lookup)
    unsigned int u32_D37;  // X10 supply (member_lookup)
    unsigned int u32_D39;  // X10 supply (member_lookup)
    unsigned int u32_D3A;  // X10 supply (member_lookup)
    unsigned int u32_D3C;  // X10 supply (member_lookup)
    unsigned int u32_D3D;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_D69;  // X10 supply (member_lookup)
    unsigned int u32_D6A;  // X10 supply (member_lookup)
    unsigned int u32_D6C;  // X10 supply (member_lookup)
    unsigned int u32_D88;  // X10 supply (member_lookup)
    unsigned int u32_D8C;  // X10 supply (member_lookup)
    unsigned int u32_D98;  // X10 supply (member_lookup)
    unsigned int u32_D99;  // X10 supply (member_lookup)
    unsigned int u32_D9A;  // X10 supply (member_lookup)
    unsigned int u32_D9B;  // X10 supply (member_lookup)
    unsigned int u32_D9C;  // X10 supply (member_lookup)
    unsigned int u32_D9D;  // X10 supply (member_lookup)
    unsigned int u32_DA8;  // X10 supply (member_lookup)
    unsigned int u32_DAC;  // X10 supply (member_lookup)
    unsigned int u32_DB0;  // X10 supply (member_lookup)
    unsigned int u32_DB4;  // X10 supply (member_lookup)
    unsigned int u32_DB8;  // X10 supply (member_lookup)
    unsigned int u32_DBC;  // X10 supply (member_lookup)
    unsigned int u32_DBD;  // X10 supply (member_lookup)
    unsigned int u32_DBE;  // X10 supply (member_lookup)
    unsigned int u32_DBF;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
    unsigned int u32_DCC;  // X10 supply (member_lookup)
    unsigned int u32_DD0;  // X10 supply (member_lookup)
    unsigned int u32_DF0;  // X10 supply (member_lookup)
    unsigned int u32_F2;  // X10 supply (member_lookup)
    unsigned int u32_F3;  // X10 supply (member_lookup)
    unsigned int u32_F5;  // X10 supply (member_lookup)
    unsigned int u32_F6;  // X10 supply (member_lookup)
    char u8_1C34;  // X10 supply (member_lookup)
    int u8_CD0;  // X10 supply (member_lookup)
    int u8_D30;  // X10 supply (member_lookup)
    unsigned char u8_F1;  // X10 supply (member_lookup)
};

} // namespace gamemd
