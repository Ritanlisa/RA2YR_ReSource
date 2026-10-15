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
    unsigned int alignmentPadding_3;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char CrateGoodie;  // 0x15
    unsigned int Harvester;  // 0x16
    bool Weeder;  // 0x17
    unsigned int nextArrayIndex;  // 0x18
    unsigned int HasTurret;  // 0x19
    unsigned int DeployToFire;  // 0x1A
    unsigned int IsSimpleDeployer;  // 0x1B
    char referenceCount[4];  // 0x1C
    bool UseTurretShadow;  // 0x1D
    unsigned int TooBigToFitUnderBridge;  // 0x1E
    unsigned int CanBeach;  // 0x1F
    unsigned int NeedsSaveOrLink;  // 0x20
    int LargeVisceroid;  // 0x21
    unsigned int CarriesCrate;  // 0x22
    unsigned int NonVehicle;  // 0x23
unsigned int StandingFrames;  // 0x24 [X35-L7 kind=unsigned int]
    int ChargerTurrets_0x12;  // 0x28
    int ChargerBarrels_0x12;  // 0x2C
    bool NoSpawnAlt;  // 0x30
    int alignmentPadding;  // 0x33
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    unsigned int MaxDeathCounter;  // 0x40
    unsigned int Facings;  // 0x44
    unsigned int FiringSyncFrame0;  // 0x48
    unsigned int FiringSyncFrame1;  // 0x4C
    unsigned int BurstDelay0;  // 0x50
    unsigned int BurstDelay1;  // 0x54
    unsigned int BurstDelay2;  // 0x58
    unsigned int BurstDelay3;  // 0x5C
    unsigned int UIName;  // 0x60
    char Name;  // 0x64
    unsigned int FiringFrames;  // 0x65
    unsigned int AltImageFile_0x19;  // 0x66
    int tail_95;  // 0x95
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    char BarrelVoxel[4];  // 0xB8
    char ChargerTurrets[72];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    void* MaxDimension;  // 0x1EC
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
    int armed;  // 0x294
    unsigned char hasTurretFlag;  // 0x295
    int weaponCount;  // 0x298
    char weapon1[4];  // 0x29C
    unsigned int weapon2;  // 0x2A0
    void* eliteWeapon1;  // 0x2A4
    unsigned int eliteWeapon2;  // 0x2A8
    unsigned int ammo;  // 0x2AC
    char EliteAbilities[4];  // 0x2AE
    unsigned int guardRange;  // 0x2B0
    unsigned int sight;  // 0x2B4
    unsigned int cost;  // 0x2B8
    unsigned int strength;  // 0x2BC
    double armor;  // 0x2C0
    unsigned int techLevel;  // 0x2C4
    double pipScale;  // 0x2C8
    unsigned int speed;  // 0x2CC
    double speedType;  // 0x2D0
    unsigned int threatPosed;  // 0x2D4
    double threatAvoidValue;  // 0x2D8
    unsigned char cloakable;  // 0x2DC
    double cloakRadius;  // 0x2E0
    unsigned char trainable;  // 0x2E4
    double buildLimit;  // 0x2E8
    char MovementRestrictedTo[4];  // 0x2EC
    char HalfDamageSmokeLocation[12];  // 0x2F0
    int SlowdownDistance;  // 0x2F8
    bool CrateGoodie_d;  // 0x2FD
    bool Harvester_d;  // 0x2FE
    bool Weeder_d;  // 0x2FF
    unsigned int TechnoTypeClass_field_double_300;  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    unsigned int DebrisTypes;  // 0x314
    unsigned int DebrisMaximums;  // 0x318
    unsigned int Locomotor;  // 0x31C
    unsigned int VoxelAnimList_FlagByte;  // 0x321
    unsigned int IntList_A_Items;  // 0x334
    unsigned int IntList_A_Capacity;  // 0x338
    unsigned int IntList_A_FlagByte;  // 0x33D
    unsigned int TechnoTypeClass_field_double_360;  // 0x360
    unsigned int TechnoTypeClass_field_double_368;  // 0x368
    double Weight;  // 0x370
    double PhysicalSize;  // 0x378
    double Size;  // 0x380
    double SizeLimit;  // 0x388
    bool HoverAttack;  // 0x390
    int VHPScan;  // 0x394
    int TechnoTypeClass_field_int_398;  // 0x398
    double RollAngle;  // 0x3A0
    double PitchSpeed;  // 0x3A8
    double PitchAngle;  // 0x3B0
    int BuildLimit;  // 0x3B8
    char Category[4];  // 0x3BC
    unsigned int TechnoTypeClass_field_3C0;  // 0x3C0
    double DeployTime;  // 0x3C8
    int FireAngle;  // 0x3D0
    char PipScale[4];  // 0x3D4
    bool PipsDrawForAll;  // 0x3D8
    int LeptonMindControlOffset;  // 0x3DC
    int PixelSelectionBracketDelta;  // 0x3E0
    int PipWrap;  // 0x3E4
    unsigned int Dock;  // 0x3E8
    unsigned int DeploysInto;  // 0x3EC
    unsigned int UndeploysInto;  // 0x3F0
    unsigned int PowersUnit;  // 0x3F4
    unsigned int BuildingTypeList_FlagByte;  // 0x3F5
    unsigned int PoweredUnit;  // 0x3F8
    unsigned int VoiceSelect;  // 0x3FC
    unsigned int VoiceSelectEnslaved;  // 0x400
    char VoiceSelectDeactivated[4];  // 0x404
    char VoiceMove[4];  // 0x408
    char VoiceAttack[4];  // 0x40C
    bool VoiceSpecialAttack;  // 0x410
    unsigned int VoiceDie;  // 0x414
    unsigned int VoiceFeedback;  // 0x418
    unsigned int MoveSound;  // 0x41C
    unsigned int DieSound;  // 0x420
    unsigned int IntList_B_FlagByte;  // 0x421
    unsigned int AuxSound1;  // 0x424
    unsigned int AuxSound2;  // 0x428
    unsigned int CreateSound;  // 0x42C
    unsigned int DamageSound;  // 0x430
    unsigned int ImpactWaterSound;  // 0x434
    unsigned int ImpactLandSound;  // 0x438
    unsigned int CrashingSound;  // 0x43C
    unsigned int IntList_C_FlagByte;  // 0x43D
    unsigned int SinkingSound;  // 0x440
    unsigned int VoiceFalling;  // 0x444
    unsigned int VoiceCrashing;  // 0x448
    unsigned int VoiceSinking;  // 0x44C
    unsigned int VoiceEnter;  // 0x450
    unsigned int VoiceCapture;  // 0x454
    unsigned int TurretRotateSound;  // 0x458
    unsigned int IntList_D_FlagByte;  // 0x459
    unsigned int EnterTransportSound;  // 0x45C
    unsigned int LeaveTransportSound;  // 0x460
    unsigned int DeploySound;  // 0x464
    unsigned int UndeploySound;  // 0x468
    unsigned int ChronoInSound;  // 0x46C
    unsigned int ChronoOutSound;  // 0x470
    unsigned int VoiceHarvest;  // 0x474
    unsigned int IntList_E_FlagByte;  // 0x475
    unsigned int VoicePrimaryWeaponAttack;  // 0x478
    unsigned int VoicePrimaryEliteWeaponAttack;  // 0x47C
    unsigned int VoiceSecondaryWeaponAttack;  // 0x480
    unsigned int VoiceSecondaryEliteWeaponAttack;  // 0x484
    char VoiceDeploy[4];  // 0x488
    unsigned int VoiceUndeploy;  // 0x48C
    unsigned int EnterGrinderSound;  // 0x490
    unsigned int IntList_F_FlagByte;  // 0x491
    unsigned int LeaveGrinderSound;  // 0x494
    unsigned int EnterBioReactorSound;  // 0x498
    unsigned int LeaveBioReactorSound;  // 0x49C
    unsigned int ActivateSound;  // 0x4A0
    unsigned int DeactivateSound;  // 0x4A4
    unsigned int MindClearedSound;  // 0x4A8
    unsigned int MovementZone;  // 0x4AC
    unsigned int IntList_G_FlagByte;  // 0x4AD
    unsigned int GuardRange;  // 0x4B0
    unsigned int MinDebris;  // 0x4B4
    unsigned int MaxDebris;  // 0x4B8
    unsigned int DebrisAnims;  // 0x4BC
    unsigned int Passengers;  // 0x4C0
    unsigned int OpenTopped;  // 0x4C4
    unsigned int Sight;  // 0x4C8
    unsigned int IntList_H_FlagByte;  // 0x4C9
    unsigned int ResourceGatherer;  // 0x4CC
    unsigned int ResourceDestination;  // 0x4CD
    unsigned int RevealToAll;  // 0x4CE
    unsigned int Drainable;  // 0x4CF
    unsigned int SensorsSight;  // 0x4D0
    unsigned int DetectDisguiseRange;  // 0x4D4
    unsigned int BombSight;  // 0x4D8
    unsigned int LeadershipRating;  // 0x4DC
    unsigned int NavalTargeting;  // 0x4E0
    unsigned int LandTargeting;  // 0x4E4
    unsigned int VoiceFeedback_FlagByte;  // 0x4E5
    unsigned int BuildTimeMultiplier;  // 0x4E8
    unsigned int MindControlRingOffset;  // 0x4EC
    unsigned int Cost;  // 0x4F0
    unsigned int Soylent;  // 0x4F4
    unsigned int FlightLevel;  // 0x4F8
    unsigned int AirstrikeTeam;  // 0x4FC
    unsigned int EliteAirstrikeTeam;  // 0x500
    unsigned int AirstrikeTeamType;  // 0x504
    unsigned int EliteAirstrikeTeamType;  // 0x508
    unsigned int AirstrikeRechargeTime;  // 0x50C
    unsigned int EliteAirstrikeRechargeTime;  // 0x510
    unsigned int TechLevel;  // 0x514
    unsigned int Prerequisite;  // 0x518
    unsigned int PrerequisiteOverride;  // 0x51C
    unsigned int ThreatPosed;  // 0x520
    unsigned int Points;  // 0x524
    unsigned int Speed;  // 0x528
    int SpeedType;  // 0x52C
    int InitialAmmo;  // 0x530
    int Ammo;  // 0x534
    int IFVMode;  // 0x538
    int AirRangeBonus;  // 0x53C
    int BerserkFriendly;  // 0x540
    unsigned int SprayAttack;  // 0x541
    unsigned int Pushy;  // 0x542
    unsigned int Natural;  // 0x543
    int Unnatural;  // 0x544
    unsigned int CloseRange;  // 0x545
    int Reload;  // 0x548
    int EmptyReload;  // 0x54C
    int ReloadIncrement;  // 0x550
    int RadialFireSegments;  // 0x554
    int DeployFireWeapon;  // 0x558
    int DeployFire;  // 0x55C
    unsigned int DeployToLand;  // 0x55D
    unsigned int MobileFire;  // 0x55E
    unsigned int OpportunityFire;  // 0x55F
    int DistributedFire;  // 0x560
    unsigned int DamageReducesReadiness;  // 0x561
    int ReadinessReductionMultiplier;  // 0x564
    int UnloadingClass;  // 0x568
    int DeployingAnim;  // 0x56C
    int AttackFriendlies;  // 0x570
    unsigned int AttackCursorOnFriendlies;  // 0x571
    int UndeployDelay;  // 0x574
    int PreventAttackMove;  // 0x578
    int OwnerFlags;  // 0x57C
    int AIBasePlanningSide;  // 0x580
    int StupidHunt;  // 0x584
    unsigned int AllowedToStartInMultiplayer;  // 0x585
    unsigned int CameoFile_0x19;  // 0x586
    int WalkRate;  // 0x660
    int IdleRate;  // 0x664
    char VeteranAbilities[4];  // 0x668
    char CameoFile;  // 0x6D6
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile_0x19;  // 0x6F5
    double SpecialThreatValue;  // 0x704
    char AltCameo[4];  // 0x710
    double MyEffectivenessCoefficient;  // 0x712
    bool AltCameoAllocated;  // 0x714
    int RotCount;  // 0x718
    int ROT;  // 0x71C
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    int Points2;  // 0x728
    unsigned int Explosion;  // 0x72C
    unsigned int DestroyAnim;  // 0x730
    unsigned int NaturalParticleSystem;  // 0x734
    double TargetStrengthCoefficient;  // 0x736
    unsigned int NaturalParticleSystemLocation;  // 0x738
    unsigned int RefinerySmokeParticleSystem;  // 0x744
    unsigned int DamageParticleSystems;  // 0x748
    unsigned int DestroyParticleSystems;  // 0x74C
    unsigned int DamageSmokeOffset;  // 0x750
    double ThreatAvoidanceCoefficient;  // 0x752
    TechnoTypeClass * ptr_758;  // 0x758
    unsigned int DamSmkOffScrnRel;  // 0x75C
    unsigned int DestroySmokeOffset;  // 0x760
    unsigned int RefinerySmokeOffsetOne;  // 0x76C
    unsigned int RefinerySmokeOffsetTwo;  // 0x778
    unsigned int RefinerySmokeOffsetThree;  // 0x784
    unsigned int RefinerySmokeOffsetFour;  // 0x790
    unsigned int ShadowIndex;  // 0x79C
    unsigned int Storage;  // 0x7A0
    unsigned int TurretNotExportedOnGround;  // 0x7A4
    unsigned int Gunner;  // 0x7A5
    unsigned int HasTurretTooltips;  // 0x7A6
    unsigned int TurretCount;  // 0x7A8
    unsigned int WeaponCount;  // 0x7AC
    char IsChargeTurret[4];  // 0x7B0
    unsigned int TurretWeapon_0x21;  // 0x7B4
    unsigned int ClearAllWeapons;  // 0x7B8
    unsigned int TypeImmune;  // 0x7B9
    unsigned int MoveToShroud;  // 0x7BA
    unsigned int Trainable;  // 0x7BB
    bool DamageSparks;  // 0x7BC
    unsigned int TargetLaser;  // 0x7BD
    unsigned int ImmuneToVeins;  // 0x7BE
    unsigned int TiberiumHeal;  // 0x7BF
    char CloakStop[4];  // 0x7C0
    unsigned int IsTrain;  // 0x7C1
    unsigned int IsDropship;  // 0x7C2
    unsigned int ToProtect;  // 0x7C3
    unsigned int Disableable;  // 0x7C4
    unsigned int Unbuildable;  // 0x7C5
    unsigned int DoubleOwned;  // 0x7C6
    unsigned int Invisible;  // 0x7C7
    unsigned int RadarVisible;  // 0x7C8
    unsigned int HasPrimary;  // 0x7C9
    unsigned int Sensors;  // 0x7CA
    unsigned int Nominal;  // 0x7CB
    char DontScore[4];  // 0x7CC
    unsigned int DamageSelf;  // 0x7CD
    unsigned int Turret;  // 0x7CE
    unsigned int TurretRecoil;  // 0x7CF
    unsigned int TurretAnimData;  // 0x7D0
    int TurretWeapon;  // 0x814
    char Weapon[4];  // 0x898
    char EliteWeapon[4];  // 0xA94
    bool TechnoTypeClass_field_bool_CB4;  // 0xCB4
    char BarrelAnimData[4];  // 0xCB8
    bool TechnoTypeClass_field_bool_CC8;  // 0xCC8
    unsigned int Repairable;  // 0xCCC
    unsigned int Crewed;  // 0xCCD
    bool Naval;  // 0xCCE
    unsigned int Remapable;  // 0xCCF
    unsigned int Cloakable;  // 0xCD0
    bool GapGenerator;  // 0xCD1
    bool GapRadiusInCells;  // 0xCD2
    bool SuperGapRadiusInCells;  // 0xCD3
    int Teleporter;  // 0xCD4
    unsigned int IsGattling;  // 0xCD5
    int WeaponStages;  // 0xCD8
    int WeaponStage_6;  // 0xCDC
    int EliteStage_6;  // 0xCE0
    unsigned int RateUp;  // 0xCE4
    unsigned int RateDown;  // 0xCE8
    unsigned int SelfHealing;  // 0xCEC
    unsigned int Explodes;  // 0xCED
    unsigned int DeathWeapon;  // 0xCF0
    unsigned int DeathWeaponDamageModifier;  // 0xCF4
    unsigned int NoAutoFire;  // 0xCF8
    unsigned int TurretSpins;  // 0xCF9
    unsigned int TiltCrashJumpjet;  // 0xCFA
    unsigned int Normalized;  // 0xCFB
    unsigned int ManualReload;  // 0xCFC
    unsigned int VisibleLoad;  // 0xCFD
    unsigned int LightningRod;  // 0xCFE
    unsigned int HunterSeeker;  // 0xCFF
    unsigned int Crusher;  // 0xD00
    unsigned int OmniCrusher;  // 0xD01
    unsigned int OmniCrushResistant;  // 0xD02
    unsigned int TiltsWhenCrushes;  // 0xD03
    unsigned int IsSubterranean;  // 0xD04
    unsigned int AutoCrush;  // 0xD05
    unsigned int Bunkerable;  // 0xD06
    unsigned int CanDisguise;  // 0xD07
    unsigned int PermaDisguise;  // 0xD08
    unsigned int DetectDisguise;  // 0xD09
    unsigned int DisguiseWhenStill;  // 0xD0A
    unsigned int CanApproachTarget;  // 0xD0B
    unsigned int CanRecalcApproachTarget;  // 0xD0C
    unsigned int ImmuneToPsionics;  // 0xD0D
    unsigned int ImmuneToPsionicWeapons;  // 0xD0E
    unsigned int ImmuneToRadiation;  // 0xD0F
    unsigned int Parasiteable;  // 0xD10
    unsigned int DefaultToGuardArea;  // 0xD11
    unsigned int Warpable;  // 0xD12
    unsigned int ImmuneToPoison;  // 0xD13
    unsigned int ReselectIfLimboed;  // 0xD14
    unsigned int RejoinTeamIfLimboed;  // 0xD15
    unsigned int Slaved;  // 0xD16
    int Enslaves;  // 0xD18
    int SlavesNumber;  // 0xD1C
    int SlaveRegenRate;  // 0xD20
    unsigned int SlaveReloadRate;  // 0xD24
    unsigned int OpenTransportWeapon;  // 0xD28
    unsigned int Spawned;  // 0xD2C
    unsigned int Spawns;  // 0xD30
    unsigned int SpawnsNumber;  // 0xD34
    unsigned int SpawnRegenRate;  // 0xD38
    unsigned int SpawnReloadRate;  // 0xD3C
    bool BalloonHover;  // 0xD3E
    int MissileSpawn;  // 0xD40
    unsigned int Underwater;  // 0xD41
    int SuppressionThreshold;  // 0xD44
    int JumpjetTurnRate;  // 0xD48
    float JumpjetSpeed;  // 0xD4C
    float JumpjetClimb;  // 0xD50
    int JumpjetCrash;  // 0xD54
    float JumpjetHeight;  // 0xD58
    float JumpjetAccel;  // 0xD5C
    int JumpjetWobbles;  // 0xD60
    int JumpjetNoWobbles;  // 0xD64
    int JumpjetDeviation;  // 0xD68
    unsigned int JumpJet;  // 0xD6C
    unsigned int Crashable;  // 0xD6D
    unsigned int ConsideredAircraft;  // 0xD6E
    unsigned int Organic;  // 0xD6F
    unsigned int NoShadow;  // 0xD70
    unsigned int CanPassiveAquire;  // 0xD71
    unsigned int CanRetaliate;  // 0xD72
    unsigned int RequiresStolenThirdTech;  // 0xD73
    unsigned int RequiresStolenSovietTech;  // 0xD74
    unsigned int RequiresStolenAlliedTech;  // 0xD75
    unsigned int RequiredHouses;  // 0xD78
    unsigned int ForbiddenHouses;  // 0xD7C
    int SecretHouses;  // 0xD80
    char UseBuffer[4];  // 0xD84
    unsigned int SecondSpawnOffset;  // 0xD88
    bool IsSelectableCombatant;  // 0xD94
    bool Accelerates;  // 0xD95
    unsigned int DisableVoxelCache;  // 0xD96
    unsigned int DisableShadowCache;  // 0xD97
    unsigned int ZFudgeCliff;  // 0xD98
    char ZFudgeColumn[4];  // 0xD9C
    int ZFudgeTunnel;  // 0xDA0
    char ZFudgeBridge;  // 0xDA4
    unsigned int PaletteFile_0x20;  // 0xDA8
    unsigned int Palette;  // 0xDAC
    AircraftTypeClass* ArrayIndex;  // 0xDF8 [X30:type_map]
    bool Passive;  // 0xE0C
    bool CrateGoodie_2;  // 0xE0D
    bool Harvester_2;  // 0xE0E
    bool Weeder_2;  // 0xE0F
    bool UnitTypeClass_field_E10;  // 0xE10
    bool HasTurret_d;  // 0xE11
    bool DeployToFire_d;  // 0xE12
    bool IsSimpleDeployer_d;  // 0xE13
    bool IsTilter;  // 0xE14
    bool UseTurretShadow_d;  // 0xE15
    bool TooBigToFitUnderBridge_d;  // 0xE16
    bool CanBeach_d;  // 0xE17
    bool SmallVisceroid;  // 0xE18
    bool LargeVisceroid_d;  // 0xE19
    bool CarriesCrate_d;  // 0xE1A
    bool NonVehicle_d;  // 0xE1B
    int StandingFrames_d;  // 0xE1C
    void* DeathFrames;  // 0xE20 [X30:type_map]
    void* DeathFrameRate;  // 0xE24 [X30:type_map]
    void* StartStandFrame;  // 0xE28 [X30:type_map]
    void* StartWalkFrame;  // 0xE2C [X30:type_map]
    int StartFiringFrame;  // 0xE30
    void* StartDeathFrame;  // 0xE34 [X30:type_map]
    void* MaxDeathCounter_d;  // 0xE38 [X30:type_map]
    int Facings_d;  // 0xE3C
    int FiringSyncFrame0_d;  // 0xE40
    AircraftTypeClass* FiringSyncFrame1_d;  // 0xE44 [X30:type_map]
    int BurstDelay0_d;  // 0xE48
    AircraftTypeClass* BurstDelay1_d;  // 0xE4C [X30:type_map]
    AircraftTypeClass* BurstDelay2_d;  // 0xE50 [X30:type_map]
    AircraftTypeClass* BurstDelay3_d;  // 0xE54 [X30:type_map]
    SHPStruct* AltImage;  // 0xE58
    char WalkFrames;  // 0xE5C
    char FiringFrames_d;  // 0xE5D
    char AltImageFile;  // 0xE5E
// --- flat members (END) ---
    bool unknown_E10;  // 0xE10 (G57W14E1 til supply) [X30:type_map]
    char __tail_E5E[26];  // 0xE5E (G57W14E1 til supply)
    char CreateUnit(short *a2, void *ppv);
    int ConstructUnit(void *ppv);
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

    unsigned char __pad_DFC;  // X10 supply (csp_canon_members)
    unsigned int u32_D2E;  // X10 supply (member_lookup)
    unsigned int u32_D35;  // X10 supply (member_lookup)
    unsigned int u32_D36;  // X10 supply (member_lookup)
    unsigned int u32_D3B;  // X10 supply (member_lookup)
    unsigned int u32_E04;  // X10 supply (member_lookup)
    unsigned int u32_E08;  // X10 supply (member_lookup)
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned char __pad_099;  // 0x99 [X30:canon]
    unsigned char __pad_0A9;  // 0xA9 [X30:canon]
    unsigned char __pad_14C;  // 0x14C [X30:canon]
bool __pad_211;  // 0x211 [X35-L7 kind=bool]
    unsigned char __pad_22C;  // 0x22C [X30:canon]
bool __pad_233;  // 0x233 [X35-L7 kind=bool]
bool __pad_237;  // 0x237 [X35-L7 kind=bool]
    unsigned char __pad_296;  // 0x296 [X30:canon]
    unsigned char __pad_2DD;  // 0x2DD [X30:canon]
    unsigned char __pad_2E5;  // 0x2E5 [X30:canon]
    unsigned char __pad_2FC;  // 0x2FC [X30:canon]
    unsigned char __pad_304;  // 0x304 [X30:canon]
    unsigned char __pad_30C;  // 0x30C [X30:canon]
    unsigned char __pad_320;  // 0x320 [X30:canon]
    unsigned char __pad_325;  // 0x325 [X30:canon]
    unsigned char __pad_33C;  // 0x33C [X30:canon]
    unsigned char __pad_341;  // 0x341 [X30:canon]
    unsigned char __pad_364;  // 0x364 [X30:canon]
    unsigned char __pad_36C;  // 0x36C [X30:canon]
    unsigned char __pad_374;  // 0x374 [X30:canon]
    unsigned char __pad_37C;  // 0x37C [X30:canon]
    unsigned char __pad_384;  // 0x384 [X30:canon]
    unsigned char __pad_38C;  // 0x38C [X30:canon]
    unsigned char __pad_39C;  // 0x39C [X30:canon]
    unsigned char __pad_3A4;  // 0x3A4 [X30:canon]
    unsigned char __pad_3AC;  // 0x3AC [X30:canon]
    unsigned char __pad_3B4;  // 0x3B4 [X30:canon]
    unsigned char __pad_3C4;  // 0x3C4 [X30:canon]
    unsigned char __pad_3CC;  // 0x3CC [X30:canon]
    unsigned char __pad_58A;  // 0x58A [X30:canon]
    unsigned char __pad_66C;  // 0x66C [X30:canon]
    unsigned char __pad_6DA;  // 0x6DA [X30:canon]
    unsigned char __pad_6F9;  // 0x6F9 [X30:canon]
    unsigned char __pad_708;  // 0x708 [X30:canon]
    unsigned char __pad_73C;  // 0x73C [X30:canon]
    unsigned char __pad_756;  // 0x756 [X30:canon]
    unsigned char __pad_764;  // 0x764 [X30:canon]
    unsigned char __pad_770;  // 0x770 [X30:canon]
    unsigned char __pad_77C;  // 0x77C [X30:canon]
    unsigned char __pad_788;  // 0x788 [X30:canon]
    unsigned char __pad_794;  // 0x794 [X30:canon]
    unsigned char __pad_7D4;  // 0x7D4 [X30:canon]
    unsigned char __pad_818;  // 0x818 [X30:canon]
    unsigned char __pad_89C;  // 0x89C [X30:canon]
    unsigned char __pad_A98;  // 0xA98 [X30:canon]
    unsigned char __pad_CBC;  // 0xCBC [X30:canon]
    unsigned char __pad_D8C;  // 0xD8C [X30:canon]
    unsigned char __pad_DB0;  // 0xDB0 [X30:canon]
    unsigned char __pad_E62;  // 0xE62 [X30:canon]
};

} // namespace gamemd
