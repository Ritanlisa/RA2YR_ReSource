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
    unsigned int alignmentPadding_3;  // 0x11
    void* abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
    unsigned int IsAllocated;  // 0x25
    int TargetEffectivenessCoefficient;  // 0x28
    int ChargerBarrels_0x12;  // 0x2C
    bool TargetSpecialThreatCoefficient;  // 0x30
    int alignmentPadding;  // 0x33
    unsigned int TargetStrengthCoefficient;  // 0x38
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    unsigned int TargetDistanceCoefficient;  // 0x40
    unsigned int ThreatAvoidanceCoefficient;  // 0x48
    unsigned int SlowdownDistance;  // 0x50
    unsigned int UIName;  // 0x60
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
    unsigned char HasRadialIndicator_d;  // 0x238
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
    CellStruct* FoundationData;  // 0x2EC
    SHPStruct* Buildup;  // 0x2F0
    bool BuildupLoaded;  // 0x2F4
    char BuildCat[4];  // 0x2F8
    unsigned int TechnoTypeClass_field_double_300;  // 0x300
    double AccelerationFactor;  // 0x308
    Color * ptr_309;  // 0x309
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
    void* PipScale;  // 0x3D4
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
    char DeployingAnim[4];  // 0x6BC
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
    unsigned int NaturalParticleSystemLocation;  // 0x738
    unsigned int RefinerySmokeParticleSystem;  // 0x744
    unsigned int DamageParticleSystems;  // 0x748
    unsigned int DestroyParticleSystems;  // 0x74C
    unsigned int DamageSmokeOffset;  // 0x750
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
    Coord* IsChargeTurret;  // 0x7B0 [X30:type_map]
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
    UnitTypeClass* SpawnRegenRate;  // 0xD38
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
    UnitTypeClass* DisableVoxelCache;  // 0xD96
    UnitTypeClass* DisableShadowCache;  // 0xD97
    unsigned int ZFudgeCliff;  // 0xD98
    char ZFudgeColumn[4];  // 0xD9C
    int ZFudgeTunnel;  // 0xDA0
    char ZFudgeBridge;  // 0xDA4
    unsigned int PaletteFile_0x20;  // 0xDA8
    unsigned int Palette;  // 0xDAC
    void* ArrayIndex;  // 0xDF8
    int HalfDamageSmokeLocation1;  // 0xE0C [X30:type_map]
    int HalfDamageSmokeLocation2;  // 0xE18 [X30:type_map]
    double GateCloseDelay;  // 0xE28
    int LightVisibility;  // 0xE30
    int LightIntensity;  // 0xE34
    int LightRedTint;  // 0xE38
    int LightGreenTint;  // 0xE3C
    int LightBlueTint;  // 0xE40
    int PrimaryFirePixelOffset;  // 0xE44 [X30:type_map]
    int SecondaryFirePixelOffset;  // 0xE4C [X30:type_map]
    OverlayTypeClass* ToOverlay;  // 0xE54
    SHPStruct* ToTile;  // 0xE58 [X30:type_map]
    char BuildupFile_0x10;  // 0xE5C
    int UnitEnterSound;  // 0xE6C
    int UnitExitSound;  // 0xE70
    int WorkingSound;  // 0xE74
    int NotWorkingSound;  // 0xE78
    char PowersUpBuilding_0x18;  // 0xE7C
    UnitTypeClass* FreeUnit;  // 0xE80
    InfantryTypeClass* SecretInfantry;  // 0xE84
    UnitTypeClass* SecretUnit;  // 0xE88
    UnitTypeClass* FreeUnit_d;  // 0xEA0
    InfantryTypeClass* SecretInfantry_d;  // 0xEA4
    SHPStruct* ExitCoord;  // 0xEA8 [X30:type_map]
    BuildingTypeClass* SecretBuilding;  // 0xEAC
    int BuildingTypeClass_field_EB0;  // 0xEB0
    CellStruct* FoundationOutside;  // 0xEB4
    int BuildingTypeClass_field_ED8;  // 0xEB8
    SHPStruct* DeployFacing;  // 0xEBC [X30:type_map]
    SHPStruct* ExtraPowerBonus;  // 0xEC8 [X30:type_map]
    SHPStruct* Height;  // 0xED4 [X30:type_map]
    SHPStruct* OccupyHeight;  // 0xED8 [X30:type_map]
    int MidPoint;  // 0xEDC
    int DoorStages;  // 0xEE0
    BuildingAnimFrameStruct* BuildingAnimFrame_6;  // 0xEE4 [X30:type_map]
    BuildingAnimStruct* BuildingAnim_0x15;  // 0xEE8 [X30:type_map]
    int Upgrades;  // 0xEEC
    SHPStruct* DeployingAnim_d;  // 0xEF0
    bool DeployingAnimLoaded;  // 0xEF4
    SHPStruct* UnderDoorAnim;  // 0xEF8
    bool UnderDoorAnimLoaded;  // 0xEFC
    SHPStruct* Rubble;  // 0xF00
    bool RubbleLoaded;  // 0xF04
    char BuildingAnim[84];  // 0xF1C
    int BuildingTypeClass_field_1540;  // 0xF4C
    int Upgrades_d;  // 0x14E0
    SHPStruct* DeployingAnim_2;  // 0x14E4
    bool DeployingAnimLoaded_d;  // 0x14E8
    SHPStruct* UnderDoorAnim_d;  // 0x14EC
    bool UnderDoorAnimLoaded_d;  // 0x14F0
    SHPStruct* Rubble_d;  // 0x14F4
    bool RubbleLoaded_d;  // 0x14F8
    SHPStruct* RoofDeployingAnim;  // 0x14FC
    bool RoofDeployingAnimLoaded;  // 0x1500
    SHPStruct* UnderRoofDoorAnim;  // 0x1504
    bool UnderRoofDoorAnimLoaded;  // 0x1508
    SHPStruct* DoorAnim;  // 0x150C
    SHPStruct* SpecialZOverlay;  // 0x1510
    void* SpecialZOverlayZAdjust;  // 0x1514 [X30:type_map]
    SHPStruct* BibShape;  // 0x1518
    bool BibShapeLoaded;  // 0x151C
    SHPStruct* NormalZAdjust;  // 0x1520 [X30:type_map]
    SHPStruct* AntiAirValue;  // 0x1524 [X30:type_map]
    SHPStruct* AntiArmorValue;  // 0x1528 [X30:type_map]
    SHPStruct* AntiInfantryValue;  // 0x152C [X30:type_map]
    void* ZShapePointMove;  // 0x1530 [X30:type_map]
    int BuildingTypeClass_field_1538;  // 0x1538
    int BuildingTypeClass_field_153C;  // 0x153C
    int BuildingTypeClass_field_1540_d;  // 0x1540
    int BuildingTypeClass_field_1544;  // 0x1544
    unsigned short ExtraLight;  // 0x1548
    bool TogglePower;  // 0x154A
    bool HasSpotlight;  // 0x154B
    bool IsTemple;  // 0x154C
    bool IsPlug;  // 0x154D
    bool HoverPad;  // 0x154E
    bool BaseNormal;  // 0x154F
    bool EligibileForAllyBuilding;  // 0x1550
    bool EligibleForDelayKill;  // 0x1551
    bool NeedsEngineer;  // 0x1552
    int CaptureEvaEvent;  // 0x1554
    SHPStruct* ProduceCashStartup;  // 0x1558 [X30:type_map]
    SHPStruct* ProduceCashAmount;  // 0x155C [X30:type_map]
    SHPStruct* ProduceCashDelay;  // 0x1560 [X30:type_map]
    SHPStruct* InfantryGainSelfHeal;  // 0x1564 [X30:type_map]
    SHPStruct* UnitsGainSelfHeal;  // 0x1568 [X30:type_map]
    int RefinerySmokeFrames;  // 0x156C
    bool Bib;  // 0x1570
    bool Wall;  // 0x1571
    bool Capturable;  // 0x1572
    bool Powered;  // 0x1573
    bool PoweredSpecial;  // 0x1574
    bool Overpowerable;  // 0x1575
    bool Spyable;  // 0x1576
    bool CanC4;  // 0x1577
    bool WantsExtraSpace;  // 0x1578
    bool Unsellable;  // 0x1579
    bool ClickRepairable;  // 0x157A
    bool CanBeOccupied;  // 0x157B
    bool CanOccupyFire;  // 0x157C
    SHPStruct* MaxNumberOccupants;  // 0x1580 [X30:type_map]
    bool ShowOccupantPips;  // 0x1584
    void* MuzzleFlash;  // 0x1588 [X30:type_map]
    int DamageFireOffset;  // 0x15D8 [X30:type_map]
    char QueueingCell[8];  // 0x1618
    int NumberImpassableRows;  // 0x1620
    char RemoveOccupy[4];  // 0x1624
    void* AddOccupy;  // 0x1664 [X30:type_map]
    bool Radar;  // 0x16A4
    bool SpySat;  // 0x16A5
    bool ChargeAnim;  // 0x16A6
    bool IsAnimDelayedFire;  // 0x16A7
    bool SiloDamage;  // 0x16A8
    bool UnitRepair;  // 0x16A9
    bool UnitReload;  // 0x16AA
    bool Bunker;  // 0x16AB
    bool Cloning;  // 0x16AC
    bool Grinding;  // 0x16AD
    bool UnitAbsorb;  // 0x16AE
    bool InfantryAbsorb;  // 0x16AF
    bool SecretLab;  // 0x16B0
    bool DoubleThick;  // 0x16B1
    bool Flat;  // 0x16B2
    bool DockUnload;  // 0x16B3
    bool Recoilless;  // 0x16B4
    bool HasStupidGuardMode;  // 0x16B5
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
    bool EMPulseCannon;  // 0x16C3
    bool TickTank;  // 0x16C4
    bool TurretAnimIsVoxel;  // 0x16C5
    bool BarrelAnimIsVoxel;  // 0x16C6
    bool CloakGenerator;  // 0x16C7
    bool SensorArray;  // 0x16C8
    bool ICBMLauncher;  // 0x16C9
    bool Artillary;  // 0x16CA
    bool Helipad;  // 0x16CB
    bool OrePurifier;  // 0x16CC
    bool FactoryPlant;  // 0x16CD
    float InfantryCostBonus;  // 0x16D0
    float UnitsCostBonus;  // 0x16D4
    float AircraftCostBonus;  // 0x16D8
    float BuildingsCostBonus;  // 0x16DC
    float DefensesCostBonus;  // 0x16E0
    bool GDIBarracks;  // 0x16E4
    bool NODBarracks;  // 0x16E5
    bool YuriBarracks;  // 0x16E6
    float ChargedAnimTime;  // 0x16E8
    int DelayedFireDelay;  // 0x16EC
    int SuperWeapon;  // 0x16F0
    int SuperWeapon2;  // 0x16F4
    int GateStages;  // 0x16F8
    void* PowersUpToLevel;  // 0x16FC [X30:type_map]
    bool DamagedDoor;  // 0x1700
    bool InvisibleInGame;  // 0x1701
    bool TerrainPalette;  // 0x1702
    bool PlaceAnywhere;  // 0x1703
    bool ExtraDamageStage;  // 0x1704
    bool AIBuildThis;  // 0x1705
    bool IsBaseDefense;  // 0x1706
    unsigned char CloakRadiusInCells;  // 0x1707
    bool ConcentricRadialIndicator;  // 0x1708
    SHPStruct* PsychicDetectionRadius;  // 0x170C [X30:type_map]
    int BarrelStartPitch;  // 0x1710
    char VoxelBarrelFile;  // 0x1714
    char VoxelBarrelOffsetToPitchPivotPoint[4];  // 0x1730
    char VoxelBarrelOffsetToRotatePivotPoint[4];  // 0x173C
    char VoxelBarrelOffsetToBuildingPivotPoint[4];  // 0x1748
    char VoxelBarrelOffsetToBarrelEnd[4];  // 0x1754
    bool DemandLoad;  // 0x1760
    bool DemandLoadBuildup;  // 0x1761
    bool FreeBuildup;  // 0x1762
    bool IsThreatRatingNode;  // 0x1763
    bool PrimaryFireDualOffset;  // 0x1764
    bool ProtectWithWall;  // 0x1765
    bool CanHideThings;  // 0x1766
    bool CrateBeneath;  // 0x1767
    bool LeaveRubble;  // 0x1768
    bool CrateBeneathIsMoney;  // 0x1769
    char TheaterSpecificID;  // 0x176A
    int NumberOfDocks;  // 0x1780
    char AltCameoFile;  // 0x1781
    unsigned int DockingOffsets;  // 0x1784
    bool PreventsPlacementOverlap;  // 0x1788
    SHPStruct* ProductionCompletionThreshold;  // 0x178C [X30:type_map]
    double CostRatePerFrame;  // 0x1790
// --- flat members (END) ---
    void* Flat_flag;  // 0x0 (no offset truth)
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
    int FindIndex(void *a1 = 0);
    int FindIndexByName(void *a1 = 0);
    int GetAuxField();
    int GetClassIdentifier();
    int GetMaxPips();
    int GetObjectSize();
    int GetPowerOutput(int aP1);
    int GetTypeIdentifier();
    int IsPlacementValid(IUnknown * aP1, IUnknown * aP2);  // G57w10-S raw 0x00746000 IUnknown 占位清除
    int ProcessData(unsigned int * a2, short * a3);
    int SaveLoad_Prefix_0(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int UpdatePower();
    int ddtor(void *a1);
    size_t Dequeue(int *aP1, void *a2 = 0);
    unsigned int * Construct(AbstractClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int * GetSizeInLeptons(unsigned int * a2);
    unsigned int * GetUpgradeOffset(unsigned int * a2, double a3 = 0, unsigned int * a4 = 0);
    unsigned int * loadBuildingProperty_b_545E520(int aP1);
    unsigned int * loadBuildingProperty_b_5478850(int a2, int a3);
    int IsPowered();
    void LoadVoxel();
    void* LoadAnimations(int aP1);
    void* ProcessPower(int *aP1, void *a2 = 0);
    int GetFoundationWidth();
    int  GetFoundationHeight(char a2);  // 0x45eca0
    OverlayTypeClass * * FindOrCreate2(ObjectClass * Source);
    ParticleSystemTypeClass * * LoadOrGet(ObjectClass * Source);
    static AbstractClass * * FindOrCreateAlt(INIClass * Source);
    BuildingTypeClass * * ProcessEvent();
    int SaveLoad_Prefix_0();

    int Adjacent;  // X10 supply (member_lookup)
    unsigned char BuildingAnimFrame[4];  /* BuildingAnimFrameStruct */  // X10 supply (member_lookup)
    int ExtraPowerDrain;  // X10 supply (member_lookup)
    unsigned char Factory[4];  /* AbstractType */  // X10 supply (member_lookup)
    unsigned char Foundation[4];  /* eFoundation */  // X10 supply (member_lookup)
    int PowerBonus;  // X10 supply (member_lookup)
    int PowerDrain;  // X10 supply (member_lookup)
    unsigned char __pad_304;  // X10 supply (csp_canon_members)
    unsigned char __pad_36C;  // X10 supply (csp_canon_members)
    unsigned char __pad_374;  // X10 supply (csp_canon_members)
    unsigned char __pad_37C;  // X10 supply (csp_canon_members)
    unsigned char __pad_384;  // X10 supply (csp_canon_members)
    unsigned char __pad_38C;  // X10 supply (csp_canon_members)
    unsigned char __pad_3A4;  // X10 supply (csp_canon_members)
    unsigned char __pad_3AC;  // X10 supply (csp_canon_members)
    unsigned char __pad_3B4;  // X10 supply (csp_canon_members)
    unsigned char __pad_3CC;  // X10 supply (csp_canon_members)
    unsigned char __pad_73C;  // X10 supply (csp_canon_members)
    AbstractClass* q0C0;  // X10 supply (member_lookup)
    CampaignClass* q0C4;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q11B0;  // X10 supply (member_lookup)
#else
    void* q11B0;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    ObjectClass* q30C;  // X10 supply (member_lookup)
    unsigned char q340;  // X10 supply (member_lookup)
    unsigned char q3952;  // X10 supply (member_lookup)
    bool q5399;  // X10 supply (member_lookup)
    BuildingClass* q53C0;  // X10 supply (member_lookup)
    CellStruct* q53E0;  // X10 supply (member_lookup)
    SHPStruct* q5400;  // X10 supply (member_lookup)
    unsigned int q5420;  // X10 supply (member_lookup)
    unsigned char q5470;  // X10 supply (member_lookup)
    IUnknown* q5D4;  // X10 supply (member_lookup)
    unsigned int q648;  // X10 supply (member_lookup)
    unsigned int qD21;  // X10 supply (member_lookup)
    unsigned int qD23;  // X10 supply (member_lookup)
    unsigned int qD25;  // X10 supply (member_lookup)
    unsigned int qD26;  // X10 supply (member_lookup)
    unsigned char qD90[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int qDBE;  // X10 supply (member_lookup)
    bool qDBF;  // X10 supply (member_lookup)
    int u32_1728;  // X10 supply (member_lookup)
    unsigned int u32_172C;  // X10 supply (member_lookup)
    unsigned int u32_1791;  // X10 supply (member_lookup)
    int u32_D;  // X10 supply (member_lookup)
    unsigned int u32_D2E;  // X10 supply (member_lookup)
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned char __pad_05D;  // 0x5D [X30:canon]
    unsigned char __pad_099;  // 0x99 [X30:canon]
    unsigned char __pad_0A9;  // 0xA9 [X30:canon]
    VoxelStruct* __pad_0B8;  // 0xB8 [X30:type_map]
    unsigned char __pad_14D;  // 0x14D [X30:canon]
    unsigned char __pad_211;  // 0x211 [X30:canon]
    unsigned char __pad_22C;  // 0x22C [X30:canon]
    unsigned char __pad_233;  // 0x233 [X30:canon]
    unsigned char __pad_237;  // 0x237 [X30:canon]
    unsigned char __pad_239;  // 0x239 [X30:canon]
    unsigned char __pad_296;  // 0x296 [X30:canon]
    unsigned char __pad_2DD;  // 0x2DD [X30:canon]
    unsigned char __pad_2E5;  // 0x2E5 [X30:canon]
    unsigned char __pad_2F5;  // 0x2F5 [X30:canon]
    unsigned char __pad_2FC;  // 0x2FC [X30:canon]
    unsigned char __pad_320;  // 0x320 [X30:canon]
    unsigned char __pad_325;  // 0x325 [X30:canon]
    unsigned char __pad_33C;  // 0x33C [X30:canon]
    unsigned char __pad_341;  // 0x341 [X30:canon]
    unsigned char __pad_364;  // 0x364 [X30:canon]
    unsigned char __pad_39C;  // 0x39C [X30:canon]
    unsigned char __pad_3C4;  // 0x3C4 [X30:canon]
    unsigned char __pad_56C;  // 0x56C [X30:canon]
    unsigned char __pad_58A;  // 0x58A [X30:canon]
    unsigned char __pad_66C;  // 0x66C [X30:canon]
    unsigned char __pad_6C0;  // 0x6C0 [X30:canon]
    unsigned char __pad_6DA;  // 0x6DA [X30:canon]
    unsigned char __pad_6F9;  // 0x6F9 [X30:canon]
    unsigned char __pad_708;  // 0x708 [X30:canon]
    unsigned char __pad_754;  // 0x754 [X30:canon]
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
    SHPStruct* __pad_DFC;  // 0xDFC [X30:type_map]
    unsigned char __pad_E24;  // 0xE24 [X30:canon]
    unsigned char __pad_E60;  // 0xE60 [X30:canon]
    unsigned char __pad_E8C;  // 0xE8C [X30:canon]
    unsigned char __pad_F70;  // 0xF70 [X30:canon]
    SHPStruct* __pad_1534;  // 0x1534 [X30:type_map]
    unsigned char __pad_1553;  // 0x1553 [X30:canon]
    unsigned char __pad_157D;  // 0x157D [X30:canon]
    unsigned char __pad_158C;  // 0x158C [X30:canon]
    unsigned char __pad_15DC;  // 0x15DC [X30:canon]
    unsigned char __pad_1628;  // 0x1628 [X30:canon]
    unsigned char __pad_1668;  // 0x1668 [X30:canon]
    unsigned char __pad_16CE;  // 0x16CE [X30:canon]
    unsigned char __pad_16E7;  // 0x16E7 [X30:canon]
    unsigned char __pad_1709;  // 0x1709 [X30:canon]
    unsigned char __pad_1718;  // 0x1718 [X30:canon]
    unsigned char __pad_1734;  // 0x1734 [X30:canon]
    unsigned char __pad_1740;  // 0x1740 [X30:canon]
    unsigned char __pad_174C;  // 0x174C [X30:canon]
    unsigned char __pad_1758;  // 0x1758 [X30:canon]
    unsigned char __pad_176E;  // 0x176E [X30:canon]
    unsigned char __pad_1794;  // 0x1794 [X30:canon]
    unsigned int TurretVoxel4;  // [X30:default]
    unsigned int v3;  // [X30:default]
    unsigned int v4;  // [X30:default]
    unsigned int v5;  // [X30:default]
};

} // namespace gamemd
