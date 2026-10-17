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
    unsigned int vfptr;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
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
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
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
    int unknown_double_300[2];  // 0x300
    double AccelerationFactor;  // 0x308
    int CloakingSpeed;  // 0x310
    int DebrisTypes[7];  // 0x314
    int DebrisMaximums[7];  // 0x330
    int Locomotor[4];  // 0x34C
    int align_35C;  // 0x35C
    int unknown_double_360[2];  // 0x360
    int unknown_double_368[2];  // 0x368
    double Weight;  // 0x370
    double PhysicalSize;  // 0x378
    int Size[2];  // 0x380
    double SizeLimit;  // 0x388
    bool HoverAttack;  // 0x390
    char __pad_391[3];  // 0x391
    int VHPScan;  // 0x394
    int unknown_int_398;  // 0x398
    unsigned int __pad_39C;  // 0x39C
    double RollAngle;  // 0x3A0
    double PitchSpeed;  // 0x3A8
    double PitchAngle;  // 0x3B0
    int BuildLimit;  // 0x3B8
    char Category[4];  // 0x3BC
    unsigned int unknown_3C0;  // 0x3C0
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
    char DeploysInto[4];  // 0x404
    char UndeploysInto[4];  // 0x408
    char PowersUnit[4];  // 0x40C
    bool PoweredUnit;  // 0x410
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
    char MovementZone[4];  // 0x5B4
    int GuardRange;  // 0x5B8
    int MinDebris;  // 0x5BC
    int MaxDebris;  // 0x5C0
    int DebrisAnims[7];  // 0x5C4
    int Passengers;  // 0x5E0
    bool OpenTopped;  // 0x5E4
    char __pad_5E5[3];  // 0x5E5
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
    int Prerequisite[7];  // 0x638
    int PrerequisiteOverride[7];  // 0x654
    int ThreatPosed;  // 0x670
    int Points;  // 0x674
    int Speed;  // 0x678
    char SpeedType[4];  // 0x67C
    int InitialAmmo;  // 0x680
    int Ammo;  // 0x684
    int IFVMode;  // 0x688
    int AirRangeBonus;  // 0x68C
    char BerserkFriendly[1];  // 0x690
    bool SprayAttack;  // 0x691
    bool Pushy;  // 0x692
    bool Natural;  // 0x693
    char Unnatural[1];  // 0x694
    bool CloseRange;  // 0x695
    char __pad_696[2];  // 0x696
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
    char __pad_6B2[2];  // 0x6B2
    int ReadinessReductionMultiplier;  // 0x6B4
    char UnloadingClass[4];  // 0x6B8
    char DeployingAnim[4];  // 0x6BC
    bool AttackFriendlies;  // 0x6C0
    bool AttackCursorOnFriendlies;  // 0x6C1
    char __pad_6C2[2];  // 0x6C2
    int UndeployDelay;  // 0x6C4
    bool PreventAttackMove;  // 0x6C8
    char __pad_6C9[3];  // 0x6C9
    unsigned int OwnerFlags;  // 0x6CC
    int AIBasePlanningSide;  // 0x6D0
    bool StupidHunt;  // 0x6D4
    bool AllowedToStartInMultiplayer;  // 0x6D5
    char CameoFile[25];  // 0x6D6
    char align_6EF[1];  // 0x6EF
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile[25];  // 0x6F5
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
    char NaturalParticleSystem[4];  // 0x764
    int NaturalParticleSystemLocation[3];  // 0x768
    char RefinerySmokeParticleSystem[4];  // 0x774
    int DamageParticleSystems[7];  // 0x778
    int DestroyParticleSystems[7];  // 0x794
    int DamageSmokeOffset[3];  // 0x7B0
    bool DamSmkOffScrnRel;  // 0x7BC
    char __pad_7BD[3];  // 0x7BD
    int DestroySmokeOffset[3];  // 0x7C0
    int RefinerySmokeOffsetOne[3];  // 0x7CC
    int RefinerySmokeOffsetTwo[3];  // 0x7D8
    int RefinerySmokeOffsetThree[3];  // 0x7E4
    int RefinerySmokeOffsetFour[3];  // 0x7F0
    int ShadowIndex;  // 0x7FC
    int Storage;  // 0x800
    bool TurretNotExportedOnGround;  // 0x804
    bool Gunner;  // 0x805
    bool HasTurretTooltips;  // 0x806
    char __pad_807[1];  // 0x807
    int TurretCount;  // 0x808
    int WeaponCount;  // 0x80C
    bool IsChargeTurret;  // 0x810
    char __pad_811[3];  // 0x811
    int TurretWeapon[33];  // 0x814
    char Weapon[504];  // 0x898
    char __pad_A90[4];  // 0xA90
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
    char __pad_CA3[1];  // 0xCA3
    int TurretAnimData[4];  // 0xCA4
    bool unknown_bool_CB4;  // 0xCB4
    char __pad_CB5[3];  // 0xCB5
    int BarrelAnimData[4];  // 0xCB8
    bool unknown_bool_CC8;  // 0xCC8
    char __pad_CC9[2];  // 0xCC9
    char align_CCB[4];  // 0xCCB
    char __pad_CCF[2];  // 0xCCF
    bool Naval;  // 0xCD1
    bool Remapable;  // 0xCD2
    bool Cloakable;  // 0xCD3
    char __pad_CD4[3];  // 0xCD4
    unsigned char __pad_CD7;  // 0xCD7
    char __pad_CD8[64];  // 0xCD8
    int SlavesNumber;  // 0xD18
    int SlaveRegenRate;  // 0xD1C
    unsigned char __pad_D20;  // 0xD20
    char __pad_D21[29];  // 0xD21
    bool BalloonHover;  // 0xD3E
    char __pad_D3F[1];  // 0xD3F
    int SuppressionThreshold;  // 0xD40
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
    char __pad_D69[11];  // 0xD69
    unsigned int RequiredHouses;  // 0xD74
    unsigned int ForbiddenHouses;  // 0xD78
    unsigned int SecretHouses;  // 0xD7C
    unsigned char __pad_D80;  // 0xD80
    char __pad_D81[3];  // 0xD81
    int SecondSpawnOffset[3];  // 0xD84
    char __pad_D90[4];  // 0xD90
    bool JumpJet;  // 0xD94
    bool Crashable;  // 0xD95
    char __pad_D96[3];  // 0xD96
    unsigned char __pad_D99;  // 0xD99
    char __pad_D9A[6];  // 0xD9A
    int ZFudgeBridge;  // 0xDA0
    int PaletteFile[8];  // 0xDA4
    void* Palette;  // 0xDC4
    unsigned char __pad_DC8;  // 0xDC8
    char __pad_DC9[43];  // 0xDC9
    int align_DF4;  // 0xDF4
    void* ArrayIndex;  // 0xDF8
    bool Carryall_d;  // 0xDFC
    unsigned char __pad_DFD;  // 0xDFD
    char __pad_DFE[2];  // 0xDFE
    int Trailer;  // 0xE00
    void* SpawnDelay_d;  // 0xE04
    bool Rotors_d;  // 0xE08
    bool CustomRotor_2;  // 0xE09
    bool Landable_2;  // 0xE0A
    bool FlyBy_2;  // 0xE0B
    bool FlyBack;  // 0xE0C
    bool AirportBound_2;  // 0xE0D
    bool Fighter_2;  // 0xE0E
    unsigned char __pad_E0F;  // 0xE0F
// --- flat members (BEGIN) ---
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
