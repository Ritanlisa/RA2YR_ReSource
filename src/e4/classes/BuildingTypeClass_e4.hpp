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
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    void * abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    char __pad_24[8];  // 0x24
    int ChargerBarrels_0x12;  // 0x2C
    char __pad_30[1];  // 0x30
    char __pad_31[2];  // 0x31
    unsigned char alignmentPadding;  // 0x33
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
    char __pad_98[1];  // 0x98
    unsigned char __pad_099;  // 0x99
    char __pad_9A[1];  // 0x9A
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct * Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    SHPStruct * AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    VoxelStruct* __pad_0B8;  // 0xB8
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
    unsigned char HasRadialIndicator_d;  // 0x238
    bool __pad_239;  // 0x239
    char UseLineTrail[1];  // 0x23A
    char LineTrailColor[3];  // 0x23B
    char align_23E[2];  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    int armed;  // 0x294
    int weaponCount;  // 0x298
    char weapon1[18];  // 0x29C
    char EliteAbilities[18];  // 0x2AE
    double armor;  // 0x2C0
    double pipScale;  // 0x2C8
    double speedType;  // 0x2D0
    double threatAvoidValue;  // 0x2D8
    double cloakRadius;  // 0x2E0
    double buildLimit;  // 0x2E8
    int ThreatAvoidanceCoefficient[2];  // 0x2F0
    int SlowdownDistance;  // 0x2F8
    unsigned int __pad_2FC;  // 0x2FC
    unsigned long long TechnoTypeClass_field_double_300;  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    int DebrisTypes[7];  // 0x314
    int DebrisMaximums[7];  // 0x330
    int Locomotor[4];  // 0x34C
    int align_35C;  // 0x35C
    unsigned long long TechnoTypeClass_field_double_360;  // 0x360
    unsigned long long TechnoTypeClass_field_double_368;  // 0x368
    double Weight;  // 0x370
    double PhysicalSize;  // 0x378
    double Size;  // 0x380
    double SizeLimit;  // 0x388
    bool HoverAttack;  // 0x390
    char __pad_391[3];  // 0x391
    int VHPScan;  // 0x394
    int TechnoTypeClass_field_int_398;  // 0x398
    unsigned int __pad_39C;  // 0x39C
    double RollAngle;  // 0x3A0
    double PitchSpeed;  // 0x3A8
    double PitchAngle;  // 0x3B0
    int BuildLimit;  // 0x3B8
    char Category[4];  // 0x3BC
    unsigned int TechnoTypeClass_field_3C0;  // 0x3C0
    unsigned int __pad_3C4;  // 0x3C4
    double DeployTime;  // 0x3C8
    int FireAngle;  // 0x3D0
    void * PipScale;  // 0x3D4
    bool PipsDrawForAll;  // 0x3D8
    char __pad_3D9[3];  // 0x3D9
    int LeptonMindControlOffset;  // 0x3DC
    int PixelSelectionBracketDelta;  // 0x3E0
    int PipWrap;  // 0x3E4
    int Dock[7];  // 0x3E8
    int DeploysInto;  // 0x404
    int UndeploysInto;  // 0x408
    int PowersUnit;  // 0x40C
    char PoweredUnit[1];  // 0x410
    char __pad_411[3];  // 0x411
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
    unsigned int __pad_56C;  // 0x56C
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
    int MovementZone;  // 0x5B4
    int GuardRange;  // 0x5B8
    int MinDebris;  // 0x5BC
    int MaxDebris;  // 0x5C0
    int DebrisAnims[7];  // 0x5C4
    int Passengers;  // 0x5E0
    char OpenTopped[1];  // 0x5E4
    char __pad_5E5[3];  // 0x5E5
    int Sight;  // 0x5E8
    char ResourceGatherer[1];  // 0x5EC
    char ResourceDestination[1];  // 0x5ED
    char RevealToAll[1];  // 0x5EE
    char Drainable[1];  // 0x5EF
    int SensorsSight;  // 0x5F0
    int DetectDisguiseRange;  // 0x5F4
    int BombSight;  // 0x5F8
    int LeadershipRating;  // 0x5FC
    int NavalTargeting;  // 0x600
    int LandTargeting;  // 0x604
    int BuildTimeMultiplier;  // 0x608
    int MindControlRingOffset;  // 0x60C
    int Cost;  // 0x610
    int Soylent;  // 0x614
    int FlightLevel;  // 0x618
    int AirstrikeTeam;  // 0x61C
    int EliteAirstrikeTeam;  // 0x620
    int AirstrikeTeamType;  // 0x624
    int EliteAirstrikeTeamType;  // 0x628
    int AirstrikeRechargeTime;  // 0x62C
    int EliteAirstrikeRechargeTime;  // 0x630
    int TechLevel;  // 0x634
    int Prerequisite[7];  // 0x638
    int PrerequisiteOverride[7];  // 0x654
    int ThreatPosed;  // 0x670
    int Points;  // 0x674
    int Speed;  // 0x678
    int SpeedType;  // 0x67C
    int InitialAmmo;  // 0x680
    int Ammo;  // 0x684
    int IFVMode;  // 0x688
    int AirRangeBonus;  // 0x68C
    char BerserkFriendly[1];  // 0x690
    char SprayAttack[1];  // 0x691
    char Pushy[1];  // 0x692
    char Natural[1];  // 0x693
    char Unnatural[1];  // 0x694
    char CloseRange[1];  // 0x695
    char __pad_696[2];  // 0x696
    int Reload;  // 0x698
    int EmptyReload;  // 0x69C
    int ReloadIncrement;  // 0x6A0
    int RadialFireSegments;  // 0x6A4
    int DeployFireWeapon;  // 0x6A8
    char DeployFire[1];  // 0x6AC
    char DeployToLand[1];  // 0x6AD
    char MobileFire[1];  // 0x6AE
    char OpportunityFire[1];  // 0x6AF
    char DistributedFire[1];  // 0x6B0
    char DamageReducesReadiness[1];  // 0x6B1
    char __pad_6B2[2];  // 0x6B2
    int ReadinessReductionMultiplier;  // 0x6B4
    int UnloadingClass;  // 0x6B8
    char DeployingAnim[4];  // 0x6BC
    unsigned char __pad_6C0;  // 0x6C0
    char AttackCursorOnFriendlies[1];  // 0x6C1
    char __pad_6C2[2];  // 0x6C2
    int UndeployDelay;  // 0x6C4
    char PreventAttackMove[1];  // 0x6C8
    char __pad_6C9[3];  // 0x6C9
    int OwnerFlags;  // 0x6CC
    int AIBasePlanningSide;  // 0x6D0
    char StupidHunt[1];  // 0x6D4
    char AllowedToStartInMultiplayer[1];  // 0x6D5
    char CameoFile[25];  // 0x6D6
    char align_6EF[1];  // 0x6EF
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile_0x19[25];  // 0x6F5
    char align_70E[2];  // 0x70E
    char AltCameo[4];  // 0x710
    bool AltCameoAllocated;  // 0x714
    char __pad_715[3];  // 0x715
    int RotCount;  // 0x718
    int ROT;  // 0x71C
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    char __pad_725[3];  // 0x725
    int Points2;  // 0x728
    int Explosion[7];  // 0x72C
    int DestroyAnim[7];  // 0x748
    unsigned int __pad_764;  // 0x764
    int NaturalParticleSystemLocation[3];  // 0x768
    int RefinerySmokeParticleSystem;  // 0x774
    int DamageParticleSystems[7];  // 0x778
    char __pad_794[28];  // 0x794
    int DamageSmokeOffset[3];  // 0x7B0
    char DamSmkOffScrnRel[1];  // 0x7BC
    char __pad_7BD[3];  // 0x7BD
    int DestroySmokeOffset[3];  // 0x7C0
    int RefinerySmokeOffsetOne[3];  // 0x7CC
    int RefinerySmokeOffsetTwo[3];  // 0x7D8
    int RefinerySmokeOffsetThree[3];  // 0x7E4
    int RefinerySmokeOffsetFour[3];  // 0x7F0
    int ShadowIndex;  // 0x7FC
    int Storage;  // 0x800
    char TurretNotExportedOnGround[1];  // 0x804
    char Gunner[1];  // 0x805
    char HasTurretTooltips[1];  // 0x806
    char __pad_807[1];  // 0x807
    int TurretCount;  // 0x808
    int WeaponCount;  // 0x80C
    char IsChargeTurret[1];  // 0x810
    char __pad_811[3];  // 0x811
    int TurretWeapon[33];  // 0x814
    char Weapon[504];  // 0x898
    char __pad_A90[4];  // 0xA90
    char EliteWeapon[504];  // 0xA94
    char TypeImmune[1];  // 0xC8C
    char MoveToShroud[1];  // 0xC8D
    char Trainable[1];  // 0xC8E
    char DamageSparks[1];  // 0xC8F
    char TargetLaser[1];  // 0xC90
    char ImmuneToVeins[1];  // 0xC91
    char TiberiumHeal[1];  // 0xC92
    char CloakStop[1];  // 0xC93
    char IsTrain[1];  // 0xC94
    char IsDropship[1];  // 0xC95
    char ToProtect[1];  // 0xC96
    char Disableable[1];  // 0xC97
    char Unbuildable[1];  // 0xC98
    char DoubleOwned[1];  // 0xC99
    char Invisible[1];  // 0xC9A
    char RadarVisible[1];  // 0xC9B
    char HasPrimary[1];  // 0xC9C
    char Sensors[1];  // 0xC9D
    char Nominal[1];  // 0xC9E
    char DontScore[1];  // 0xC9F
    char DamageSelf[1];  // 0xCA0
    char Turret[1];  // 0xCA1
    char TurretRecoil[1];  // 0xCA2
    char __pad_CA3[1];  // 0xCA3
    int TurretAnimData[4];  // 0xCA4
    bool TechnoTypeClass_field_bool_CB4;  // 0xCB4
    char __pad_CB5[3];  // 0xCB5
    int BarrelAnimData[4];  // 0xCB8
    bool TechnoTypeClass_field_bool_CC8;  // 0xCC8
    char __pad_CC9[2];  // 0xCC9
    char align_CCB[4];  // 0xCCB
    char __pad_CCF[2];  // 0xCCF
    bool GapGenerator;  // 0xCD1
    bool GapRadiusInCells;  // 0xCD2
    bool SuperGapRadiusInCells;  // 0xCD3
    int Teleporter;  // 0xCD4
    int WeaponStages;  // 0xCD8
    int WeaponStage_6;  // 0xCDC
    int EliteStage_6;  // 0xCE0
    unsigned int RateUp;  // 0xCE4
    unsigned int RateDown;  // 0xCE8
    unsigned int SelfHealing;  // 0xCEC
    unsigned int DeathWeapon;  // 0xCF0
    unsigned int DeathWeaponDamageModifier;  // 0xCF4
    unsigned int NoAutoFire;  // 0xCF8
    unsigned int ManualReload;  // 0xCFC
    unsigned int Crusher;  // 0xD00
    unsigned int IsSubterranean;  // 0xD04
    unsigned int PermaDisguise;  // 0xD08
    unsigned int CanRecalcApproachTarget;  // 0xD0C
    unsigned int Parasiteable;  // 0xD10
    unsigned int ReselectIfLimboed;  // 0xD14
    int Enslaves;  // 0xD18
    int SlaveRegenRate;  // 0xD1C
    char __pad_D20[4];  // 0xD20
    unsigned int SlaveReloadRate;  // 0xD24
    unsigned int OpenTransportWeapon;  // 0xD28
    unsigned int Spawned;  // 0xD2C
    unsigned int Spawns;  // 0xD30
    unsigned int SpawnsNumber;  // 0xD34
    UnitTypeClass * SpawnRegenRate;  // 0xD38
    char SpawnReloadRate[2];  // 0xD3C
    bool BalloonHover;  // 0xD3E
    char __pad_D3F[1];  // 0xD3F
    int MissileSpawn;  // 0xD40
    int JumpjetTurnRate;  // 0xD44
    int JumpjetSpeed;  // 0xD48
    int JumpjetClimb;  // 0xD4C
    int JumpjetCrash;  // 0xD50
    char __pad_D54[4];  // 0xD54
    float JumpjetHeight;  // 0xD58
    int JumpjetWobbles;  // 0xD5C
    char __pad_D60[4];  // 0xD60
    int JumpjetNoWobbles;  // 0xD64
    char __pad_D68[8];  // 0xD68
    unsigned int NoShadow;  // 0xD70
    unsigned int RequiresStolenSovietTech;  // 0xD74
    int ForbiddenHouses;  // 0xD78
    int SecretHouses;  // 0xD7C
    char __pad_D80[4];  // 0xD80
    char UseBuffer[12];  // 0xD84
    unsigned char qD90[4];  // 0xD90
    bool IsSelectableCombatant;  // 0xD94
    bool Accelerates;  // 0xD95
    unsigned char DisableVoxelCache;  // 0xD96
    unsigned char DisableShadowCache;  // 0xD97
    unsigned int ZFudgeCliff;  // 0xD98
    char ZFudgeColumn[4];  // 0xD9C
    int ZFudgeTunnel;  // 0xDA0
    int PaletteFile[8];  // 0xDA4
    int Palette;  // 0xDC4
    char __pad_DC8[44];  // 0xDC8
    int align_DF4;  // 0xDF4
    void * ArrayIndex;  // 0xDF8
    SHPStruct* __pad_DFC;  // 0xDFC
    unsigned int qE00;  // 0xE00
    unsigned char u32_E04;  // 0xE04
    char __pad_E05[3];  // 0xE05
    unsigned int u32_E08;  // 0xE08
    int HalfDamageSmokeLocation1[3];  // 0xE0C
    int HalfDamageSmokeLocation2[3];  // 0xE18
    unsigned int __pad_E24;  // 0xE24
    double GateCloseDelay;  // 0xE28
    int LightVisibility;  // 0xE30
    int LightIntensity;  // 0xE34
    int LightRedTint;  // 0xE38
    int LightGreenTint;  // 0xE3C
    int LightBlueTint;  // 0xE40
    int PrimaryFirePixelOffset[2];  // 0xE44
    int SecondaryFirePixelOffset[2];  // 0xE4C
    OverlayTypeClass * ToOverlay;  // 0xE54
    SHPStruct * ToTile;  // 0xE58
    char BuildupFile_0x10;  // 0xE5C
    char __pad_E5D[3];  // 0xE5D
    unsigned char __pad_E60;  // 0xE60
    char __pad_E61[11];  // 0xE61
    int UnitEnterSound;  // 0xE6C
    int WorkingSound;  // 0xE70
    int NotWorkingSound;  // 0xE74
    int FreeUnit;  // 0xE78
    unsigned int PowersUpBuilding_0x18;  // 0xE7C
    int SecretUnit;  // 0xE80
    int SecretBuilding;  // 0xE84
    char __pad_E88[4];  // 0xE88
    unsigned char __pad_E8C;  // 0xE8C
    char __pad_E8D[19];  // 0xE8D
    UnitTypeClass * FreeUnit_d;  // 0xEA0
    InfantryTypeClass * SecretInfantry_d;  // 0xEA4
    char __pad_EA8[8];  // 0xEA8
    int BuildingTypeClass_field_EB0;  // 0xEB0
    int Adjacent;  // 0xEB4
    int BuildingTypeClass_field_ED8;  // 0xEB8
    int TargetCoordOffset[3];  // 0xEBC
    int ExitCoord[3];  // 0xEC8
    int FoundationOutside;  // 0xED4
    int OccupyHeight;  // 0xED8
    int DeployFacing;  // 0xEDC
    int PowerBonus;  // 0xEE0
    int PowerDrain;  // 0xEE4
    BuildingAnimStruct * BuildingAnim_0x15;  // 0xEE8
    int ExtraPowerDrain;  // 0xEEC
    SHPStruct * DeployingAnim_d;  // 0xEF0
    unsigned int DeployingAnimLoaded;  // 0xEF4
    SHPStruct * UnderDoorAnim;  // 0xEF8
    unsigned int UnderDoorAnimLoaded;  // 0xEFC
    SHPStruct * Rubble;  // 0xF00
    int BuildingAnimFrame[6];  // 0xF04
    char BuildingAnim[84];  // 0xF1C
    unsigned char __pad_F70;  // 0xF70
    char __pad_F71[575];  // 0xF71
    char q11B0[4];  // 0x11B0
    char __pad_11B4[812];  // 0x11B4
    int Upgrades_d;  // 0x14E0
    SHPStruct * DeployingAnim_2;  // 0x14E4
    bool DeployingAnimLoaded_d;  // 0x14E8
    char __pad_14E9[3];  // 0x14E9
    SHPStruct * UnderDoorAnim_d;  // 0x14EC
    bool UnderDoorAnimLoaded_d;  // 0x14F0
    char __pad_14F1[3];  // 0x14F1
    SHPStruct * Rubble_d;  // 0x14F4
    bool RubbleLoaded_d;  // 0x14F8
    char __pad_14F9[3];  // 0x14F9
    SHPStruct * RoofDeployingAnim;  // 0x14FC
    bool RoofDeployingAnimLoaded;  // 0x1500
    char __pad_1501[3];  // 0x1501
    SHPStruct * UnderRoofDoorAnim;  // 0x1504
    bool UnderRoofDoorAnimLoaded;  // 0x1508
    char __pad_1509[3];  // 0x1509
    SHPStruct * DoorAnim;  // 0x150C
    SHPStruct * SpecialZOverlay;  // 0x1510
    int SpecialZOverlayZAdjust;  // 0x1514
    SHPStruct * BibShape;  // 0x1518
    bool BibShapeLoaded;  // 0x151C
    char __pad_151D[3];  // 0x151D
    int NormalZAdjust;  // 0x1520
    int AntiAirValue;  // 0x1524
    int AntiArmorValue;  // 0x1528
    SHPStruct * AntiInfantryValue;  // 0x152C
    void * ZShapePointMove;  // 0x1530
    SHPStruct* __pad_1534;  // 0x1534
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
    unsigned char __pad_1553;  // 0x1553
    int CaptureEvaEvent;  // 0x1554
    int ProduceCashStartup;  // 0x1558
    SHPStruct * ProduceCashAmount;  // 0x155C
    int ProduceCashDelay;  // 0x1560
    int InfantryGainSelfHeal;  // 0x1564
    int UnitsGainSelfHeal;  // 0x1568
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
    unsigned char __pad_157D;  // 0x157D
    char __pad_157E[2];  // 0x157E
    int MaxNumberOccupants;  // 0x1580
    bool ShowOccupantPips;  // 0x1584
    char __pad_1585[3];  // 0x1585
    void * MuzzleFlash;  // 0x1588
    unsigned char __pad_158C;  // 0x158C
    char __pad_158D[75];  // 0x158D
    int DamageFireOffset;  // 0x15D8
    unsigned char __pad_15DC;  // 0x15DC
    char __pad_15DD[59];  // 0x15DD
    char QueueingCell[8];  // 0x1618
    int NumberImpassableRows;  // 0x1620
    char RemoveOccupy[4];  // 0x1624
    unsigned char __pad_1628;  // 0x1628
    char __pad_1629[59];  // 0x1629
    void * AddOccupy;  // 0x1664
    unsigned char __pad_1668;  // 0x1668
    char __pad_1669[59];  // 0x1669
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
    unsigned char __pad_16CE;  // 0x16CE
    char __pad_16CF[1];  // 0x16CF
    float InfantryCostBonus;  // 0x16D0
    float UnitsCostBonus;  // 0x16D4
    float AircraftCostBonus;  // 0x16D8
    float BuildingsCostBonus;  // 0x16DC
    float DefensesCostBonus;  // 0x16E0
    bool GDIBarracks;  // 0x16E4
    bool NODBarracks;  // 0x16E5
    bool YuriBarracks;  // 0x16E6
    unsigned char __pad_16E7;  // 0x16E7
    float ChargedAnimTime;  // 0x16E8
    int DelayedFireDelay;  // 0x16EC
    int SuperWeapon;  // 0x16F0
    int SuperWeapon2;  // 0x16F4
    int GateStages;  // 0x16F8
    int PowersUpToLevel;  // 0x16FC
    bool DamagedDoor;  // 0x1700
    bool InvisibleInGame;  // 0x1701
    bool TerrainPalette;  // 0x1702
    bool PlaceAnywhere;  // 0x1703
    bool ExtraDamageStage;  // 0x1704
    bool AIBuildThis;  // 0x1705
    bool IsBaseDefense;  // 0x1706
    unsigned char CloakRadiusInCells;  // 0x1707
    bool ConcentricRadialIndicator;  // 0x1708
    unsigned char __pad_1709;  // 0x1709
    char __pad_170A[2];  // 0x170A
    SHPStruct * PsychicDetectionRadius;  // 0x170C
    int BarrelStartPitch;  // 0x1710
    char VoxelBarrelFile;  // 0x1714
    char __pad_1715[3];  // 0x1715
    unsigned char __pad_1718;  // 0x1718
    char __pad_1719[15];  // 0x1719
    int u32_1728;  // 0x1728
    unsigned int u32_172C;  // 0x172C
    char VoxelBarrelOffsetToPitchPivotPoint[4];  // 0x1730
    unsigned char __pad_1734;  // 0x1734
    char __pad_1735[7];  // 0x1735
    char VoxelBarrelOffsetToRotatePivotPoint[4];  // 0x173C
    unsigned char __pad_1740;  // 0x1740
    char __pad_1741[7];  // 0x1741
    char VoxelBarrelOffsetToBuildingPivotPoint[4];  // 0x1748
    unsigned char __pad_174C;  // 0x174C
    char __pad_174D[7];  // 0x174D
    char VoxelBarrelOffsetToBarrelEnd[4];  // 0x1754
    unsigned char __pad_1758;  // 0x1758
    char __pad_1759[7];  // 0x1759
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
    char __pad_176B[3];  // 0x176B
    unsigned char __pad_176E;  // 0x176E
    char __pad_176F[17];  // 0x176F
    int NumberOfDocks;  // 0x1780
    unsigned int DockingOffsets;  // 0x1784
    bool PreventsPlacementOverlap;  // 0x1788
    char __pad_1789[3];  // 0x1789
    int ProductionCompletionThreshold;  // 0x178C
    char CostRatePerFrame[4];  // 0x1790
    unsigned int __pad_1794;  // 0x1794
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * CleanupMembers(BuildingTypeClass * a1, BuildingTypeClass * a2);
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
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
};

} // namespace gamemd
