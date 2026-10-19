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
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    char __pad_24[8];  // 0x24
    int ChargerBarrels_0x12;  // 0x2C
    char __pad_30[4];  // 0x30
    char __pad_34[3];  // 0x34
    unsigned char __pad_037;  // 0x37
    char __pad_38[4];  // 0x38
    unsigned char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    unsigned int UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    char u32_98[3];  // 0x98
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    SHPStruct* AlphaImage;  // 0xAC
    VoxelStruct* MainVoxel;  // 0xB0
    char TurretVoxel[4];  // 0xB4
    unsigned int __pad_0B8;  // 0xB8
    char ChargerTurrets[72];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    bool NoSpawnAlt;  // 0x14C
    unsigned char __pad_14D;  // 0x14D
    char __pad_14E[155];  // 0x14E
    char align_1E9[3];  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile[25];  // 0x1F8
    bool __pad_211;  // 0x211
    unsigned char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    unsigned char __pad_22C;  // 0x22C
    char Crushable[1];  // 0x22D
    char Bombable[1];  // 0x22E
    char RadarInvisible[1];  // 0x22F
    char Selectable[1];  // 0x230
    char LegalTarget[1];  // 0x231
    unsigned char Insignificant_d;  // 0x232
    bool __pad_233;  // 0x233
    char IsLogic[1];  // 0x234
    char AllowCellContent[1];  // 0x235
    unsigned char Voxel_d;  // 0x236
    bool __pad_237;  // 0x237
    char HasRadialIndicator[1];  // 0x238
    char IgnoresFirestorm[1];  // 0x239
    char UseLineTrail[1];  // 0x23A
    char LineTrailColor[3];  // 0x23B
    char align_23E[2];  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned int armed;  // 0x294
    int weaponCount;  // 0x298
    char weapon1[18];  // 0x29C
    char EliteAbilities[18];  // 0x2AE
    unsigned long long armor;  // 0x2C0
    unsigned long long pipScale;  // 0x2C8
    unsigned long long speedType;  // 0x2D0
    unsigned long long threatAvoidValue;  // 0x2D8
    unsigned long long cloakRadius;  // 0x2E0
    unsigned long long buildLimit;  // 0x2E8
    unsigned long long __pad_2F0;  // 0x2F0
    unsigned int u32_2F8;  // 0x2F8
    int align_2FC;  // 0x2FC
    int unknown_double_300[2];  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    int DebrisTypes[7];  // 0x314
    int DebrisMaximums[7];  // 0x330
    char Locomotor[16];  // 0x34C
    unsigned int __pad_35C;  // 0x35C
    double unknown_double_360;  // 0x360
    double unknown_double_368;  // 0x368
    double Weight;  // 0x370
    double PhysicalSize;  // 0x378
    double Size;  // 0x380
    double SizeLimit;  // 0x388
    bool HoverAttack;  // 0x390
    unsigned char __pad_391;  // 0x391
    char __pad_392[2];  // 0x392
    int VHPScan;  // 0x394
    int unknown_int_398;  // 0x398
    unsigned int __pad_39C;  // 0x39C
    double RollAngle;  // 0x3A0
    double PitchSpeed;  // 0x3A8
    double PitchAngle;  // 0x3B0
    void* BuildLimit;  // 0x3B8
    void* Category;  // 0x3BC
    unsigned int unknown_3C0;  // 0x3C0
    unsigned int __pad_3C4;  // 0x3C4
    double DeployTime;  // 0x3C8
    int FireAngle;  // 0x3D0
    void* PipScale;  // 0x3D4
    bool PipsDrawForAll;  // 0x3D8
    unsigned char __pad_3D9;  // 0x3D9
    char __pad_3DA[2];  // 0x3DA
    void* LeptonMindControlOffset;  // 0x3DC
    void* PixelSelectionBracketDelta;  // 0x3E0
    int PipWrap;  // 0x3E4
    int Dock[7];  // 0x3E8
    BuildingTypeClass* DeploysInto;  // 0x404
    UnitTypeClass* UndeploysInto;  // 0x408
    UnitTypeClass* PowersUnit;  // 0x40C
    bool PoweredUnit;  // 0x410
    unsigned char __pad_411;  // 0x411
    char __pad_412[2];  // 0x412
    int VoiceSelect[7];  // 0x414
    int VoiceSelectEnslaved[7];  // 0x430
    int VoiceSelectDeactivated[7];  // 0x44C
    int VoiceMove[7];  // 0x468
    int VoiceAttack[7];  // 0x484
    int VoiceSpecialAttack[7];  // 0x4A0
    int VoiceDie[7];  // 0x4BC
    int VoiceFeedback[7];  // 0x4D8
    int MoveSound[7];  // 0x4F4
    int DieSound[7];  // 0x510
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
    Movement* MovementZone;  // 0x5B4
    IUnknown* GuardRange;  // 0x5B8
    void* MinDebris;  // 0x5BC
    int MaxDebris;  // 0x5C0
    int DebrisAnims[7];  // 0x5C4
    int Passengers;  // 0x5E0
    bool OpenTopped;  // 0x5E4
    unsigned char __pad_5E5;  // 0x5E5
    char __pad_5E6[2];  // 0x5E6
    int Sight;  // 0x5E8
    bool ResourceGatherer;  // 0x5EC
    bool ResourceDestination;  // 0x5ED
    bool RevealToAll;  // 0x5EE
    bool Drainable;  // 0x5EF
    int SensorsSight;  // 0x5F0
    void* DetectDisguiseRange;  // 0x5F4
    void* BombSight;  // 0x5F8
    int LeadershipRating;  // 0x5FC
    int NavalTargeting;  // 0x600
    int LandTargeting;  // 0x604
    float BuildTimeMultiplier;  // 0x608
    void* MindControlRingOffset;  // 0x60C
    int Cost;  // 0x610
    int Soylent;  // 0x614
    int FlightLevel;  // 0x618
    void* AirstrikeTeam;  // 0x61C
    int EliteAirstrikeTeam;  // 0x620
    char AirstrikeTeamType[4];  // 0x624
    AircraftTypeClass* EliteAirstrikeTeamType;  // 0x628
    void* AirstrikeRechargeTime;  // 0x62C
    int EliteAirstrikeRechargeTime;  // 0x630
    int TechLevel;  // 0x634
    int Prerequisite[7];  // 0x638
    int PrerequisiteOverride[7];  // 0x654
    int ThreatPosed;  // 0x670
    int Points;  // 0x674
    int Speed;  // 0x678
    void* SpeedType;  // 0x67C
    int InitialAmmo;  // 0x680
    int Ammo;  // 0x684
    int IFVMode;  // 0x688
    void* AirRangeBonus;  // 0x68C
    bool BerserkFriendly;  // 0x690
    bool SprayAttack;  // 0x691
    bool Pushy;  // 0x692
    bool Natural;  // 0x693
    bool Unnatural;  // 0x694
    bool CloseRange;  // 0x695
    unsigned char __pad_696;  // 0x696
    char __pad_697[1];  // 0x697
    int Reload;  // 0x698
    void* EmptyReload;  // 0x69C
    void* ReloadIncrement;  // 0x6A0
    void* RadialFireSegments;  // 0x6A4
    int DeployFireWeapon;  // 0x6A8
    bool DeployFire;  // 0x6AC
    bool DeployToLand;  // 0x6AD
    bool MobileFire;  // 0x6AE
    bool OpportunityFire;  // 0x6AF
    bool DistributedFire;  // 0x6B0
    bool DamageReducesReadiness;  // 0x6B1
    unsigned char __pad_6B2;  // 0x6B2
    char __pad_6B3[1];  // 0x6B3
    int ReadinessReductionMultiplier;  // 0x6B4
    UnitTypeClass* UnloadingClass;  // 0x6B8
    AnimTypeClass* DeployingAnim;  // 0x6BC
    bool AttackFriendlies;  // 0x6C0
    bool AttackCursorOnFriendlies;  // 0x6C1
    unsigned char __pad_6C2;  // 0x6C2
    char __pad_6C3[1];  // 0x6C3
    int UndeployDelay;  // 0x6C4
    char PreventAttackMove[1];  // 0x6C8
    unsigned char __pad_6C9;  // 0x6C9
    char __pad_6CA[2];  // 0x6CA
    unsigned int OwnerFlags;  // 0x6CC
    void* AIBasePlanningSide;  // 0x6D0
    bool StupidHunt;  // 0x6D4
    bool AllowedToStartInMultiplayer;  // 0x6D5
    char CameoFile[25];  // 0x6D6
    unsigned char __pad_6EF;  // 0x6EF
    SHPStruct* Cameo;  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile[25];  // 0x6F5
    unsigned short __pad_70E;  // 0x70E
    SHPStruct* AltCameo;  // 0x710
    bool AltCameoAllocated;  // 0x714
    char __pad_715[1];  // 0x715
    unsigned char __pad_716;  // 0x716
    char __pad_717[1];  // 0x717
    int RotCount;  // 0x718
    int ROT;  // 0x71C
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    unsigned char __pad_725;  // 0x725
    char __pad_726[2];  // 0x726
    int Points2;  // 0x728
    int Explosion[7];  // 0x72C
    int DestroyAnim[7];  // 0x748
    ParticleSystemTypeClass* NaturalParticleSystem;  // 0x764
    char NaturalParticleSystemLocation[12];  // 0x768
    ParticleSystemTypeClass* RefinerySmokeParticleSystem;  // 0x774
    int DamageParticleSystems[7];  // 0x778
    int DestroyParticleSystems[7];  // 0x794
    char DamageSmokeOffset[12];  // 0x7B0
    bool DamSmkOffScrnRel;  // 0x7BC
    unsigned char __pad_7BD;  // 0x7BD
    char __pad_7BE[2];  // 0x7BE
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
    unsigned char __pad_807;  // 0x807
    int TurretCount;  // 0x808
    void* WeaponCount;  // 0x80C
    bool IsChargeTurret;  // 0x810
    unsigned char __pad_811;  // 0x811
    char __pad_812[2];  // 0x812
    int TurretWeapon[33];  // 0x814
    char Weapon[504];  // 0x898
    unsigned char __pad_A90;  // 0xA90
    char __pad_A91[3];  // 0xA91
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
    unsigned char __pad_CA3;  // 0xCA3
    char TurretAnimData[16];  // 0xCA4
    bool unknown_bool_CB4;  // 0xCB4
    unsigned char __pad_CB5;  // 0xCB5
    char __pad_CB6[2];  // 0xCB6
    char BarrelAnimData[16];  // 0xCB8
    bool unknown_bool_CC8;  // 0xCC8
    unsigned char __pad_CC9;  // 0xCC9
    char __pad_CCA[1];  // 0xCCA
    char align_CCB[4];  // 0xCCB
    unsigned char u32_CCF;  // 0xCCF
    char u8_CD0[1];  // 0xCD0
    bool Naval;  // 0xCD1
    bool Remapable;  // 0xCD2
    bool Cloakable;  // 0xCD3
    unsigned char __pad_CD4;  // 0xCD4
    unsigned char u32_CD5;  // 0xCD5
    char __pad_CD6[2];  // 0xCD6
    unsigned int u32_CD8;  // 0xCD8
    char __pad_CDC[24];  // 0xCDC
    int u32_CF4;  // 0xCF4
    char __pad_CF8[20];  // 0xCF8
    unsigned int u32_D0C;  // 0xD0C
    unsigned int u32_D10;  // 0xD10
    unsigned int u32_D14;  // 0xD14
    int SlavesNumber;  // 0xD18
    int SlaveRegenRate;  // 0xD1C
    unsigned char __pad_D20;  // 0xD20
    unsigned char u32_D21;  // 0xD21
    unsigned char u32_D22;  // 0xD22
    unsigned char u32_D23;  // 0xD23
    unsigned int u32_D24;  // 0xD24
    unsigned int u32_D28;  // 0xD28
    unsigned int u32_D2C;  // 0xD2C
    int u8_D30;  // 0xD30
    unsigned int u32_D34;  // 0xD34
    char __pad_D38[1];  // 0xD38
    unsigned char u32_D39;  // 0xD39
    unsigned char u32_D3A;  // 0xD3A
    char __pad_D3B[1];  // 0xD3B
    char u32_D3C[2];  // 0xD3C
    bool BalloonHover;  // 0xD3E
    unsigned char __pad_D3F;  // 0xD3F
    IUnknown* SuppressionThreshold;  // 0xD40
    int JumpjetTurnRate;  // 0xD44
    int JumpjetSpeed;  // 0xD48
    float JumpjetClimb;  // 0xD4C
    float JumpjetCrash;  // 0xD50
    unsigned char __pad_D54;  // 0xD54
    char __pad_D55[3];  // 0xD55
    float JumpjetAccel;  // 0xD58
    float JumpjetWobbles;  // 0xD5C
    unsigned char __pad_D60;  // 0xD60
    char __pad_D61[3];  // 0xD61
    int JumpjetDeviation;  // 0xD64
    unsigned char __pad_D68;  // 0xD68
    unsigned char u32_D69;  // 0xD69
    unsigned char u32_D6A;  // 0xD6A
    char __pad_D6B[1];  // 0xD6B
    unsigned int u32_D6C;  // 0xD6C
    unsigned char qD70;  // 0xD70
    char __pad_D71[3];  // 0xD71
    unsigned int RequiredHouses;  // 0xD74
    unsigned int ForbiddenHouses;  // 0xD78
    unsigned int SecretHouses;  // 0xD7C
    unsigned char __pad_D80;  // 0xD80
    char __pad_D81[3];  // 0xD81
    char SecondSpawnOffset[12];  // 0xD84
    unsigned char __pad_D90;  // 0xD90
    char __pad_D91[3];  // 0xD91
    bool JumpJet;  // 0xD94
    bool Crashable;  // 0xD95
    UnitTypeClass* __pad_D96;  // 0xD96
    unsigned char u32_D9A;  // 0xD9A
    unsigned char u32_D9B;  // 0xD9B
    unsigned int u32_D9C;  // 0xD9C
    int ZFudgeBridge;  // 0xDA0
    int PaletteFile[8];  // 0xDA4
    void* Palette;  // 0xDC4
    unsigned char __pad_DC8;  // 0xDC8
    char __pad_DC9[3];  // 0xDC9
    unsigned int u32_DCC;  // 0xDCC
    unsigned int u32_DD0;  // 0xDD0
    char __pad_DD4[28];  // 0xDD4
    unsigned int u32_DF0;  // 0xDF0
    int align_DF4;  // 0xDF4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int CheckFlag();
    static int CheckFlag(TechnoTypeClass *aP1, int a2);
    int SaveLoad_Prefix_0(unsigned int *a2, int *a3, int a4, int a5, void *a5_1 = 0);
    void Construct(int aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    static AbstractClass * * GetByTypeAndIndex(int a1, int a2);
    DynamicVectorClass_flat * * SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    TechnoTypeClass * ddtor(char a2);
    VectorClass_flat * Constructor_1(ObjectTypeClass * aP1);
    bool CanAttackMove_IgnoreWeapon();
    char RemoveItem(int a2, void *a2_2);
    char g_var_3d23dc();
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
    static void * ReadINI(char * Source, int a3, void *a3_1 = 0);
    void* CanAttackMove_IgnoreWeapon_0();
    void* CanAttackMove_IgnoreWeapon_0_0();
    static int HasVoiceResponse(TechnoTypeClass * aP1, int a2);
    int SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3);
    TechnoTypeClass * ddtor(void * Block, char a2);
    unsigned int * Constructor_0(ObjectTypeClass * aP1, void *a2, void *a3);
    TechnoTypeClass * * sub_404BB0();
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#pragma pack(pop)
};

} // namespace gamemd
