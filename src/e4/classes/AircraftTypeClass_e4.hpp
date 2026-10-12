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
    unsigned int CustomRotor;  // 0x11
    unsigned int Landable;  // 0x12
    unsigned int FlyBy;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char AirportBound;  // 0x15
    unsigned int Fighter;  // 0x16
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
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
    bool Carryall;  // 0x2EC
    AnimTypeClass* Trailer;  // 0x2F0
    int SpawnDelay;  // 0x2F4
    bool Rotors;  // 0x2F8
    bool CustomRotor_d;  // 0x2F9
    bool Landable_d;  // 0x2FA
    bool FlyBy_d;  // 0x2FB
    bool AirportBound_d;  // 0x2FD
    bool Fighter_d;  // 0x2FE
    unsigned char tail_2FF;  // 0x2FF
    unsigned int unknown_double_300;  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    unsigned int DebrisTypes;  // 0x314
    unsigned int VoxelAnimList_Items;  // 0x318
    unsigned int VoxelAnimList_Capacity;  // 0x31C
    unsigned int VoxelAnimList_FlagByte;  // 0x321
    unsigned int DebrisMaximums;  // 0x330
    unsigned int IntList_A_Items;  // 0x334
    unsigned int IntList_A_Capacity;  // 0x338
    unsigned int IntList_A_FlagByte;  // 0x33D
    char Locomotor[4];  // 0x34C
    unsigned int unknown_double_360;  // 0x360
    unsigned int unknown_double_368;  // 0x368
    double Weight;  // 0x370
    double PhysicalSize;  // 0x378
    unsigned int Size;  // 0x380
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
    unsigned int Dock;  // 0x3E8
    unsigned int BuildingTypeList_Items;  // 0x3EC
    unsigned int BuildingTypeList_Capacity;  // 0x3F0
    unsigned int BuildingTypeList_FlagByte;  // 0x3F5
    char DeploysInto[4];  // 0x404
    char UndeploysInto[4];  // 0x408
    char PowersUnit[4];  // 0x40C
    bool PoweredUnit;  // 0x410
    unsigned int VoiceSelect;  // 0x414
    unsigned int IntList_B_Items;  // 0x418
    unsigned int IntList_B_Capacity;  // 0x41C
    unsigned int IntList_B_FlagByte;  // 0x421
    TechnoTypeClass * ptr_424;  // 0x424
    unsigned int VoiceSelectEnslaved;  // 0x430
    unsigned int IntList_C_Items;  // 0x434
    unsigned int IntList_C_Capacity;  // 0x438
    unsigned int IntList_C_FlagByte;  // 0x43D
    unsigned int VoiceSelectDeactivated;  // 0x44C
    unsigned int IntList_D_Items;  // 0x450
    unsigned int IntList_D_Capacity;  // 0x454
    unsigned int IntList_D_FlagByte;  // 0x459
    unsigned int VoiceMove;  // 0x468
    unsigned int IntList_E_Items;  // 0x46C
    unsigned int IntList_E_Capacity;  // 0x470
    unsigned int IntList_E_FlagByte;  // 0x475
    unsigned int VoiceAttack;  // 0x484
    unsigned int IntList_F_Capacity;  // 0x48C
    unsigned int IntList_F_FlagByte;  // 0x491
    TechnoTypeClass * ptr_494;  // 0x494
    unsigned int VoiceSpecialAttack;  // 0x4A0
    unsigned int IntList_G_Items;  // 0x4A4
    unsigned int IntList_G_Capacity;  // 0x4A8
    unsigned int IntList_G_FlagByte;  // 0x4AD
    unsigned int VoiceDie;  // 0x4BC
    unsigned int IntList_H_Items;  // 0x4C0
    unsigned int IntList_H_Capacity;  // 0x4C4
    unsigned int IntList_H_FlagByte;  // 0x4C9
    unsigned int VoiceFeedback;  // 0x4D8
    unsigned int VoiceFeedback_Items;  // 0x4DC
    unsigned int VoiceFeedback_Capacity;  // 0x4E0
    unsigned int VoiceFeedback_FlagByte;  // 0x4E5
    unsigned int MoveSound;  // 0x4F4
    unsigned int DieSound;  // 0x510
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
    unsigned int DebrisAnims;  // 0x5C4
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
    unsigned int Prerequisite;  // 0x638
    unsigned int PrerequisiteOverride;  // 0x654
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
    unsigned int BerserkFriendly;  // 0x690
    bool SprayAttack;  // 0x691
    bool Pushy;  // 0x692
    bool Natural;  // 0x693
    unsigned int Unnatural;  // 0x694
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
    bool PreventAttackMove;  // 0x6C8
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
    unsigned int Explosion;  // 0x72C
    unsigned int DestroyAnim;  // 0x748
    TechnoTypeClass * ptr_758;  // 0x758
    char NaturalParticleSystem[4];  // 0x764
    char NaturalParticleSystemLocation[4];  // 0x768
    TechnoTypeClass * ptr_770;  // 0x770
    char RefinerySmokeParticleSystem[4];  // 0x774
    unsigned int DamageParticleSystems;  // 0x778
    unsigned int DestroyParticleSystems;  // 0x794
    char DamageSmokeOffset[4];  // 0x7B0
    bool DamSmkOffScrnRel;  // 0x7BC
    char DestroySmokeOffset[4];  // 0x7C0
    char RefinerySmokeOffsetOne[4];  // 0x7CC
    char RefinerySmokeOffsetTwo[4];  // 0x7D8
    char RefinerySmokeOffsetThree[4];  // 0x7E4
    char RefinerySmokeOffsetFour[4];  // 0x7F0
    int ShadowIndex;  // 0x7FC
    int Storage;  // 0x800
    bool TurretNotExportedOnGround;  // 0x804
    bool Gunner;  // 0x805
    bool HasTurretTooltips;  // 0x806
    int TurretCount;  // 0x808
    int WeaponCount;  // 0x80C
    bool IsChargeTurret;  // 0x810
    int TurretWeapon;  // 0x814
    char Weapon[4];  // 0x898
    char EliteWeapon[4];  // 0xA94
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
    char TurretAnimData[4];  // 0xCA4
    bool unknown_bool_CB4;  // 0xCB4
    char BarrelAnimData[4];  // 0xCB8
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
    char SecondSpawnOffset[4];  // 0xD84
    bool JumpJet;  // 0xD94
    bool Crashable;  // 0xD95
    int ZFudgeBridge;  // 0xDA0
    char PaletteFile;  // 0xDA4
    void* Palette;  // 0xDC4
    void* ArrayIndex;  // 0xDF8
    bool Carryall_d;  // 0xDFC
    int SpawnDelay_d;  // 0xE04
    bool Rotors_d;  // 0xE08
    bool CustomRotor_2;  // 0xE09
    bool Landable_2;  // 0xE0A
    bool FlyBy_2;  // 0xE0B
    bool FlyBack;  // 0xE0C
    bool AirportBound_2;  // 0xE0D
    bool Fighter_2;  // 0xE0E
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
