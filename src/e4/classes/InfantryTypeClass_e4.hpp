// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct SequenceStruct;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct InfantryClass;  // fix_fwd_type_supply

struct InfantryTypeClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
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
    char __pad_5D[1];  // 0x5D
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
    unsigned int __pad_0B8;  // 0xB8
    char ChargerTurrets[72];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    unsigned char __pad_14C;  // 0x14C
    char __pad_14D[156];  // 0x14D
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
    int align_2FC;  // 0x2FC
    unsigned long long TechnoTypeClass_field_double_300;  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    int DebrisTypes[7];  // 0x314
    int DebrisMaximums[7];  // 0x330
    char EnterWaterSound_d[16];  // 0x34C
    unsigned int __pad_35C;  // 0x35C
    double TechnoTypeClass_field_double_360;  // 0x360
    double TechnoTypeClass_field_double_368;  // 0x368
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
    char PipScale[4];  // 0x3D4
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
    int DeployingAnim;  // 0x6BC
    char AttackFriendlies[1];  // 0x6C0
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
    unsigned int SpawnRegenRate;  // 0xD38
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
    char __pad_D90[4];  // 0xD90
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
    void * Pip_d;  // 0xDFC
    void * OccupyPip_d;  // 0xE00
    char OccupyWeapon_d[28];  // 0xE04
    char EliteOccupyWeapon[28];  // 0xE20
    SequenceStruct* __pad_E3C;  // 0xE3C
    int qE40;  // 0xE40
    unsigned int u32_E44;  // 0xE44
    unsigned int u32_E48;  // 0xE48
    unsigned int u32_E4C;  // 0xE4C
    unsigned char qE50[16];  // 0xE50
    unsigned int qE60;  // 0xE60
    unsigned int u32_E64;  // 0xE64
    char __pad_E68[4];  // 0xE68
    char u32_E6C[16];  // 0xE6C
    unsigned int u32_E7C;  // 0xE7C
    unsigned int u32_E80;  // 0xE80
    char __pad_E84[4];  // 0xE84
    char u32_E88[16];  // 0xE88
    unsigned int u32_E98;  // 0xE98
    unsigned int u32_E9C;  // 0xE9C
    char __pad_EA0[4];  // 0xEA0
    unsigned int u32_EA4;  // 0xEA4
    unsigned int u32_EA8;  // 0xEA8
    bool Cyborg_2;  // 0xEAC
    bool NotHuman_2;  // 0xEAD
    bool Ivan_2;  // 0xEAE
    unsigned char __pad_EAF;  // 0xEAF
    void * DetectionDistance;  // 0xEB0
    bool Occupier_d;  // 0xEB4
    bool Assaulter_2;  // 0xEB5
    unsigned char __pad_EB6;  // 0xEB6
    char __pad_EB7[1];  // 0xEB7
    int HarvestRate;  // 0xEB8
    bool Fearless_d;  // 0xEBC
    bool __pad_EBD;  // 0xEBD
    bool Infiltrate_2;  // 0xEBE
    bool Fraidycat_2;  // 0xEBF
    bool TiberiumProof_d;  // 0xEC0
    bool __pad_EC1;  // 0xEC1
    bool C4_2;  // 0xEC2
    bool Engineer_2;  // 0xEC3
    bool Agent_2;  // 0xEC4
    bool Thief_2;  // 0xEC5
    bool VehicleThief_2;  // 0xEC6
    bool Doggie_2;  // 0xEC7
    bool Deployer_d;  // 0xEC8
    bool __pad_EC9;  // 0xEC9
    unsigned char u32_ECA;  // 0xECA
    unsigned char u32_ECB;  // 0xECB
    int align_ECC;  // 0xECC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    InfantryClass *  ConstructInfantry(AbstractClass * ppv);
    InfantryTypeClass * Constructor(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    InfantryTypeClass * ddtor(char a2);
    static WeaponTypeClass * * Find(char *Source);
    int * GetDimensions(int a1);
    int CreateInfantry(short * a2, AbstractClass * ppv);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGameplayValue();
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadFromINI(uint8_t *** a2, void *a2_2);
    int PowerDrainUpdate(int * a2);
    int StubReturnFalse();
    int j__do_always_noconv_codecvt_base_std__MBE_NXZ_19();
    unsigned int * ClampToGroundHeight(unsigned int * a1, int * a2);
    unsigned int * Constructor_523980(int aP1);
    unsigned int * CopyDataArray(unsigned int *aP1, void *a2 = 0);
    unsigned int * GetDefaultDimensions(unsigned int * a1);
    InfantryTypeClass * ddtor(int Block, char a2);
    int DTOR(void *a1 = 0);
};

} // namespace gamemd
