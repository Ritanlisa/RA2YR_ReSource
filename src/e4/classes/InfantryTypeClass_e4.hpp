// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Color;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int alignmentPadding_3;  // 0x11
    unsigned int abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
    unsigned int IsAllocated;  // 0x25
    int TargetEffectivenessCoefficient;  // 0x28
    bool q02B;  // 0x2B
    int ChargerBarrels_0x12;  // 0x2C
    bool NoSpawnAlt;  // 0x30
    unsigned char q031;  // 0x31
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    unsigned int DeadBodies;  // 0x40
    bool q042;  // 0x42
    unsigned int DeathAnims;  // 0x44
    void* q046;  // 0x46
    unsigned int VoiceComment;  // 0x48
    bool q04A;  // 0x4A
    unsigned int EnterWaterSound;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int LeaveWaterSound;  // 0x50
    unsigned int Cyborg;  // 0x54
    unsigned int NotHuman;  // 0x55
    unsigned int Ivan;  // 0x56
    unsigned int DirectionDistance;  // 0x58
    unsigned int Occupier;  // 0x5C
    unsigned int Assaulter;  // 0x5D
    unsigned int UIName;  // 0x60
    char Name;  // 0x64
    unsigned int Crawls;  // 0x65
    unsigned int Infiltrate;  // 0x66
    unsigned int Fraidycat;  // 0x67
    unsigned int TiberiumProof;  // 0x68
    unsigned int Civilian;  // 0x69
    unsigned int C4;  // 0x6A
    unsigned int Engineer;  // 0x6B
    unsigned int Agent;  // 0x6C
    unsigned int Thief;  // 0x6D
    unsigned int VehicleThief;  // 0x6E
    unsigned int Doggie;  // 0x6F
    unsigned int Deployer;  // 0x70
    unsigned int DeployedCrushable;  // 0x71
    unsigned int UseOwnName;  // 0x72
    unsigned int JumpJetTurn;  // 0x73
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned int q094;  // 0x94
    int tail_95;  // 0x95
    Color* q098;  // 0x98
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel[4];  // 0xB4
    char q0B8[4];  // 0xB8
    unsigned char q0B9;  // 0xB9
    char ChargerTurrets[72];  // 0xBC
    unsigned int q0C3;  // 0xC3
    CampaignClass* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    AnimClass* q0D4;  // 0xD4
    void* q0D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    char q100;  // 0x100
    char ChargerBarrels[72];  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned int q110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    bool q14C;  // 0x14C
    unsigned char q14D;  // 0x14D
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    Coord* q15C;  // 0x15C
    int q160;  // 0x160
    unsigned int q162;  // 0x162
    SHPStruct* q164;  // 0x164
    bool q168;  // 0x168
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q178;  // 0x178
    unsigned int q17C;  // 0x17C
    char q180[4];  // 0x180
    char q184[4];  // 0x184
    char q188[4];  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned int q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char q19D;  // 0x19D
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned char q1B9;  // 0x1B9
    AbstractTypeClass* q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    ConnectionPointClass* q1E8;  // 0x1E8
    unsigned char q1E9;  // 0x1E9
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
    unsigned char q210;  // 0x210
    bool q211;  // 0x211
    bool q212;  // 0x212
    char AlphaImageFile;  // 0x213
    unsigned int q214;  // 0x214
    AbstractClass* q218;  // 0x218
    AbstractClass* q21C;  // 0x21C
    unsigned int q220;  // 0x220
    void* q224;  // 0x224
    unsigned int q228;  // 0x228
    bool q22C;  // 0x22C
    bool q22D;  // 0x22D
    bool q22E;  // 0x22E
    bool q22F;  // 0x22F
    bool q230;  // 0x230
    bool q231;  // 0x231
    bool q232;  // 0x232
    bool q233;  // 0x233
    bool q234;  // 0x234
    bool q235;  // 0x235
    bool q236;  // 0x236
    bool q237;  // 0x237
    bool q238;  // 0x238
    bool q239;  // 0x239
    bool q23A;  // 0x23A
    char q23B[3];  // 0x23B
    bool q23D;  // 0x23D
    unsigned char q23E;  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned int q248;  // 0x248
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    SomeVoxelCache* q25C;  // 0x25C
    char q260[4];  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q270;  // 0x270
    SomeVoxelCache* q274;  // 0x274
    unsigned int q278;  // 0x278
    SomeVoxelCache* q27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    unsigned int q28C;  // 0x28C
    unsigned char q290;  // 0x290
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
    unsigned char q2DD;  // 0x2DD
    double cloakRadius;  // 0x2E0
    unsigned char trainable;  // 0x2E4
    unsigned char q2E5;  // 0x2E5
    double buildLimit;  // 0x2E8
    char Pip[4];  // 0x2EC
    char OccupyPip[4];  // 0x2F0
    char OccupyWeapon[28];  // 0x2F4
    int SlowdownDistance;  // 0x2F8
    unsigned int q2FC;  // 0x2FC
    double TechnoTypeClass_field_double_300;  // 0x300
    unsigned int q304;  // 0x304
    double AccelerationFactor;  // 0x308
    unsigned int q30A;  // 0x30A
    ObjectClass* q30C;  // 0x30C
    int CloakingSpeed;  // 0x310
    unsigned int DebrisTypes;  // 0x314
    unsigned int DebrisMaximums;  // 0x318
    unsigned int Locomotor;  // 0x31C
    unsigned int q320;  // 0x320
    unsigned int VoxelAnimList_FlagByte;  // 0x321
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    SequenceStruct* Sequence;  // 0x32C
    int FireUp;  // 0x330
    int FireProne;  // 0x334
    int SecondaryFire;  // 0x338
    int SecondaryProne;  // 0x33C
    unsigned int IntList_A_FlagByte;  // 0x33D
    unsigned int q340;  // 0x340
    unsigned int q344;  // 0x344
    unsigned int q348;  // 0x348
    int q34C;  // 0x34C
    int q350;  // 0x350
    bool q354;  // 0x354
    bool q355;  // 0x355
    bool q356;  // 0x356
    int q358;  // 0x358
    unsigned long q35C;  // 0x35C
    bool q35D;  // 0x35D
    unsigned char q35E;  // 0x35E
    double TechnoTypeClass_field_double_360;  // 0x360
    bool Fearless;  // 0x364
    bool q365;  // 0x365
    bool q366;  // 0x366
    bool q367;  // 0x367
    double TechnoTypeClass_field_double_368;  // 0x368
    bool q369;  // 0x369
    bool q36A;  // 0x36A
    bool q36B;  // 0x36B
    bool q36C;  // 0x36C
    bool q36D;  // 0x36D
    bool q36E;  // 0x36E
    bool q36F;  // 0x36F
    double Weight;  // 0x370
    bool q371;  // 0x371
    bool q372;  // 0x372
    bool q373;  // 0x373
    unsigned char q374;  // 0x374
    double PhysicalSize;  // 0x378
    unsigned char q37C;  // 0x37C
    double Size;  // 0x380
    unsigned char q384;  // 0x384
    double SizeLimit;  // 0x388
    unsigned char q38C;  // 0x38C
    bool HoverAttack;  // 0x390
    int VHPScan;  // 0x394
    int TechnoTypeClass_field_int_398;  // 0x398
    unsigned int q39C;  // 0x39C
    double RollAngle;  // 0x3A0
    unsigned char q3A4;  // 0x3A4
    double PitchSpeed;  // 0x3A8
    unsigned char q3AC;  // 0x3AC
    double PitchAngle;  // 0x3B0
    unsigned char q3B4;  // 0x3B4
    unsigned int q3B7;  // 0x3B7
    int BuildLimit;  // 0x3B8
    unsigned int Category;  // 0x3BC
    unsigned int TechnoTypeClass_field_3C0;  // 0x3C0
    unsigned int q3C4;  // 0x3C4
    double DeployTime;  // 0x3C8
    unsigned char q3CC;  // 0x3CC
    int FireAngle;  // 0x3D0
    char PipScale[4];  // 0x3D4
    unsigned char q3D7;  // 0x3D7
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
    unsigned int q487;  // 0x487
    char VoiceDeploy[4];  // 0x488
    unsigned int VoiceUndeploy;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned int EnterGrinderSound;  // 0x490
    unsigned int IntList_F_FlagByte;  // 0x491
    unsigned int LeaveGrinderSound;  // 0x494
    unsigned int EnterBioReactorSound;  // 0x498
    unsigned int LeaveBioReactorSound;  // 0x49C
    unsigned int q49D;  // 0x49D
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
    unsigned int q52B;  // 0x52B
    int SpeedType;  // 0x52C
    unsigned int q52D;  // 0x52D
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
    int q588;  // 0x588
    int q58C;  // 0x58C
    int q590;  // 0x590
    int q594;  // 0x594
    int q598;  // 0x598
    int q59C;  // 0x59C
    int q5A0;  // 0x5A0
    int q5A4;  // 0x5A4
    int q5A8;  // 0x5A8
    int q5AC;  // 0x5AC
    int q5B0;  // 0x5B0
    char q5B4[4];  // 0x5B4
    int q5B8;  // 0x5B8
    int q5BC;  // 0x5BC
    int q5C0;  // 0x5C0
    unsigned int q5C4;  // 0x5C4
    unsigned char q5C8;  // 0x5C8
    void* q5CC;  // 0x5CC
    unsigned int u32_5D0;  // 0x5D0
    void* q5D4;  // 0x5D4
    unsigned char q5D8;  // 0x5D8
    unsigned int u32_5DC;  // 0x5DC
    int q5E0;  // 0x5E0
    bool q5E4;  // 0x5E4
    int q5E8;  // 0x5E8
    bool q5EC;  // 0x5EC
    bool q5ED;  // 0x5ED
    bool q5EE;  // 0x5EE
    bool q5EF;  // 0x5EF
    int q5F0;  // 0x5F0
    int q5F4;  // 0x5F4
    int q5F8;  // 0x5F8
    int q5FC;  // 0x5FC
    int q600;  // 0x600
    int q604;  // 0x604
    float q608;  // 0x608
    int q60C;  // 0x60C
    int q610;  // 0x610
    int q614;  // 0x614
    int q618;  // 0x618
    int q61C;  // 0x61C
    int q620;  // 0x620
    char q624[4];  // 0x624
    char q628[4];  // 0x628
    int q62C;  // 0x62C
    int q630;  // 0x630
    int q634;  // 0x634
    unsigned int q638;  // 0x638
    unsigned char q63C;  // 0x63C
    unsigned int q640;  // 0x640
    unsigned int q644;  // 0x644
    unsigned int q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q654;  // 0x654
    unsigned char q658;  // 0x658
    AbstractClass* q65C;  // 0x65C
    int WalkRate;  // 0x660
    int IdleRate;  // 0x664
    unsigned int VeteranAbilities;  // 0x668
    unsigned char q66C;  // 0x66C
    int q670;  // 0x670
    int q674;  // 0x674
    int q678;  // 0x678
    char q67C[4];  // 0x67C
    int q680;  // 0x680
    int q684;  // 0x684
    int q688;  // 0x688
    int q68C;  // 0x68C
    bool q690;  // 0x690
    bool q691;  // 0x691
    bool q693;  // 0x693
    bool q694;  // 0x694
    bool q695;  // 0x695
    int q698;  // 0x698
    int q69C;  // 0x69C
    int q6A0;  // 0x6A0
    int q6A4;  // 0x6A4
    int q6A8;  // 0x6A8
    bool q6AC;  // 0x6AC
    bool q6AD;  // 0x6AD
    bool q6AE;  // 0x6AE
    bool q6AF;  // 0x6AF
    bool q6B0;  // 0x6B0
    bool q6B1;  // 0x6B1
    int q6B4;  // 0x6B4
    char q6B8[4];  // 0x6B8
    char q6BC[4];  // 0x6BC
    bool q6C0;  // 0x6C0
    bool q6C1;  // 0x6C1
    int q6C4;  // 0x6C4
    bool q6C8;  // 0x6C8
    unsigned int q6CC;  // 0x6CC
    int q6D0;  // 0x6D0
    bool q6D4;  // 0x6D4
    bool q6D5;  // 0x6D5
    char CameoFile;  // 0x6D6
    AbstractClass* q6D8;  // 0x6D8
    unsigned char q6DA;  // 0x6DA
    unsigned char q6DC;  // 0x6DC
    unsigned int q6E0;  // 0x6E0
    unsigned int q6E4;  // 0x6E4
    unsigned int q6E8;  // 0x6E8
    unsigned int q6EC;  // 0x6EC
    bool q6EE;  // 0x6EE
    unsigned char q6EF;  // 0x6EF
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile_0x19;  // 0x6F5
    unsigned int q6F8;  // 0x6F8
    unsigned char q6F9;  // 0x6F9
    AbstractClass* q6FC;  // 0x6FC
    unsigned int q700;  // 0x700
    double SpecialThreatValue;  // 0x704
    unsigned int q708;  // 0x708
    unsigned int q70C;  // 0x70C
    bool q70D;  // 0x70D
    unsigned char q70E;  // 0x70E
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
    unsigned char q73C;  // 0x73C
    unsigned char q740;  // 0x740
    unsigned int RefinerySmokeParticleSystem;  // 0x744
    unsigned int DamageParticleSystems;  // 0x748
    unsigned int DestroyParticleSystems;  // 0x74C
    unsigned int DamageSmokeOffset;  // 0x750
    double ThreatAvoidanceCoefficient;  // 0x752
    unsigned char q754;  // 0x754
    TechnoTypeClass * ptr_758;  // 0x758
    unsigned int DamSmkOffScrnRel;  // 0x75C
    unsigned int DestroySmokeOffset;  // 0x760
    char q764[4];  // 0x764
    char q768[4];  // 0x768
    unsigned int RefinerySmokeOffsetOne;  // 0x76C
    unsigned char q770;  // 0x770
    char q774[4];  // 0x774
    unsigned int RefinerySmokeOffsetTwo;  // 0x778
    unsigned char q77C;  // 0x77C
    unsigned char q780;  // 0x780
    unsigned int RefinerySmokeOffsetThree;  // 0x784
    unsigned int q788;  // 0x788
    unsigned char q78C;  // 0x78C
    unsigned int RefinerySmokeOffsetFour;  // 0x790
    unsigned int q794;  // 0x794
    unsigned char q798;  // 0x798
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
    unsigned char q7D4;  // 0x7D4
    char q7D8[4];  // 0x7D8
    unsigned char q7DC;  // 0x7DC
    char q7E4[4];  // 0x7E4
    unsigned char q7E8;  // 0x7E8
    char q7F0[4];  // 0x7F0
    unsigned char q7F4;  // 0x7F4
    int q7FC;  // 0x7FC
    int q800;  // 0x800
    bool q804;  // 0x804
    bool q805;  // 0x805
    int q808;  // 0x808
    int q80C;  // 0x80C
    bool q810;  // 0x810
    int TurretWeapon;  // 0x814
    unsigned char q818;  // 0x818
    unsigned char q81C;  // 0x81C
    int q820;  // 0x820
    int q824;  // 0x824
    int q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    char q834[4];  // 0x834
    unsigned char q838;  // 0x838
    unsigned int q840;  // 0x840
    char q844[4];  // 0x844
    int q848;  // 0x848
    unsigned char q84C;  // 0x84C
    void* q850;  // 0x850
    bool q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned int q860;  // 0x860
    double q864;  // 0x864
    bool q868;  // 0x868
    unsigned char q86C;  // 0x86C
    bool q870;  // 0x870
    bool q874;  // 0x874
    bool q878;  // 0x878
    unsigned char q87C;  // 0x87C
    double q880;  // 0x880
    unsigned char q884;  // 0x884
    double q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q890;  // 0x890
    unsigned char q894;  // 0x894
    char Weapon[4];  // 0x898
    unsigned char q89C;  // 0x89C
    unsigned char q8A0;  // 0x8A0
    unsigned char q8A4;  // 0x8A4
    unsigned char q8A8;  // 0x8A8
    void* q8AC;  // 0x8AC
    unsigned char q8B0;  // 0x8B0
    ObjectTypeClass* q8B4;  // 0x8B4
    WeaponTypeClass* q8B8;  // 0x8B8
    WeaponTypeClass* q8C4;  // 0x8C4
    void* q8C8;  // 0x8C8
    unsigned char q8CC;  // 0x8CC
    void* q8E4;  // 0x8E4
    unsigned char q8E8;  // 0x8E8
    unsigned char q900;  // 0x900
    double q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned char q910;  // 0x910
    char q914[4];  // 0x914
    unsigned char q918;  // 0x918
    void* q91C;  // 0x91C
    int q920;  // 0x920
    unsigned int q924;  // 0x924
    double q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    void* q938;  // 0x938
    unsigned char q93C;  // 0x93C
    unsigned char q940;  // 0x940
    double q944;  // 0x944
    unsigned char q948;  // 0x948
    void* q954;  // 0x954
    unsigned char q958;  // 0x958
    unsigned int q960;  // 0x960
    unsigned int q964;  // 0x964
    double q968;  // 0x968
    void* q970;  // 0x970
    unsigned char q974;  // 0x974
    char q980[4];  // 0x980
    bool q984;  // 0x984
    int q988;  // 0x988
    void* q98C;  // 0x98C
    unsigned char q990;  // 0x990
    void* q9A8;  // 0x9A8
    unsigned char q9AC;  // 0x9AC
    void* q9C4;  // 0x9C4
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned char q9CC;  // 0x9CC
    void* q9E0;  // 0x9E0
    unsigned char q9E4;  // 0x9E4
    void* q9FC;  // 0x9FC
    unsigned char qA00;  // 0xA00
    void* qA18;  // 0xA18
    unsigned char qA1C;  // 0xA1C
    void* qA34;  // 0xA34
    unsigned char qA38;  // 0xA38
    void* qA50;  // 0xA50
    unsigned char qA54;  // 0xA54
    void* qA6C;  // 0xA6C
    unsigned char qA70;  // 0xA70
    void* qA88;  // 0xA88
    unsigned char qA8C;  // 0xA8C
    unsigned char qA90;  // 0xA90
    char EliteWeapon[4];  // 0xA94
    unsigned char qA98;  // 0xA98
    void* qAA4;  // 0xAA4
    unsigned char qAA8;  // 0xAA8
    ObjectTypeClass* qAB0;  // 0xAB0
    void* qAC0;  // 0xAC0
    unsigned char qAC4;  // 0xAC4
    void* qADC;  // 0xADC
    unsigned char qAE0;  // 0xAE0
    void* qB1C;  // 0xB1C
    void* qB20;  // 0xB20
    unsigned char qB24;  // 0xB24
    void* qB3C;  // 0xB3C
    unsigned char qB40;  // 0xB40
    void* qB5C;  // 0xB5C
    unsigned char qB60;  // 0xB60
    void* qB74;  // 0xB74
    unsigned char qB78;  // 0xB78
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    void* qBC0;  // 0xBC0
    unsigned char qBC4;  // 0xBC4
    void* qBF0;  // 0xBF0
    void* qBF4;  // 0xBF4
    unsigned char qBF8;  // 0xBF8
    void* qBFC;  // 0xBFC
    void* qC00;  // 0xC00
    unsigned char qC04;  // 0xC04
    void* qC20;  // 0xC20
    unsigned char qC24;  // 0xC24
    void* qC58;  // 0xC58
    unsigned char qC5C;  // 0xC5C
    bool qC8C;  // 0xC8C
    bool qC8D;  // 0xC8D
    bool qC8E;  // 0xC8E
    bool qC8F;  // 0xC8F
    bool qC90;  // 0xC90
    bool qC91;  // 0xC91
    bool qC92;  // 0xC92
    bool qC93;  // 0xC93
    bool qC94;  // 0xC94
    bool qC95;  // 0xC95
    bool qC96;  // 0xC96
    bool qC97;  // 0xC97
    bool qC98;  // 0xC98
    bool qC99;  // 0xC99
    bool qC9A;  // 0xC9A
    bool qC9B;  // 0xC9B
    bool qC9C;  // 0xC9C
    bool qC9D;  // 0xC9D
    bool qC9E;  // 0xC9E
    bool qC9F;  // 0xC9F
    bool qCA0;  // 0xCA0
    bool qCA1;  // 0xCA1
    bool qCA2;  // 0xCA2
    char qCA4[4];  // 0xCA4
    unsigned char qCA8;  // 0xCA8
    bool TechnoTypeClass_field_bool_CB4;  // 0xCB4
    unsigned int BarrelAnimData;  // 0xCB8
    unsigned char qCBC;  // 0xCBC
    bool TechnoTypeClass_field_bool_CC8;  // 0xCC8
    unsigned int qCC9;  // 0xCC9
    unsigned int qCCA;  // 0xCCA
    unsigned int qCCB;  // 0xCCB
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
    unsigned int qD21;  // 0xD21
    unsigned int qD22;  // 0xD22
    unsigned int qD23;  // 0xD23
    unsigned int SlaveReloadRate;  // 0xD24
    unsigned int qD25;  // 0xD25
    unsigned int qD26;  // 0xD26
    unsigned int qD27;  // 0xD27
    unsigned int OpenTransportWeapon;  // 0xD28
    unsigned int qD29;  // 0xD29
    unsigned int qD2A;  // 0xD2A
    unsigned int qD2B;  // 0xD2B
    unsigned int Spawned;  // 0xD2C
    unsigned int qD2D;  // 0xD2D
    unsigned char u8_D2E;  // 0xD2E
    unsigned int qD2F;  // 0xD2F
    unsigned int Spawns;  // 0xD30
    unsigned int qD31;  // 0xD31
    unsigned int qD32;  // 0xD32
    unsigned int qD33;  // 0xD33
    unsigned int SpawnsNumber;  // 0xD34
    unsigned char u8_D35;  // 0xD35
    unsigned char u8_D36;  // 0xD36
    unsigned int qD37;  // 0xD37
    unsigned int SpawnRegenRate;  // 0xD38
    unsigned int qD39;  // 0xD39
    unsigned int qD3A;  // 0xD3A
    unsigned char u8_D3B;  // 0xD3B
    unsigned int SpawnReloadRate;  // 0xD3C
    bool qD3D;  // 0xD3D
    bool BalloonHover;  // 0xD3E
    int MissileSpawn;  // 0xD40
    unsigned int Underwater;  // 0xD41
    unsigned int qD42;  // 0xD42
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
    unsigned int qD69;  // 0xD69
    unsigned int qD6A;  // 0xD6A
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
    unsigned int qD8C;  // 0xD8C
    unsigned char qD90;  // 0xD90
    bool IsSelectableCombatant;  // 0xD94
    bool Accelerates;  // 0xD95
    unsigned int DisableVoxelCache;  // 0xD96
    unsigned int DisableShadowCache;  // 0xD97
    unsigned int ZFudgeCliff;  // 0xD98
    unsigned int qD99;  // 0xD99
    unsigned int qD9A;  // 0xD9A
    unsigned int qD9B;  // 0xD9B
    char ZFudgeColumn[4];  // 0xD9C
    unsigned int qD9D;  // 0xD9D
    int ZFudgeTunnel;  // 0xDA0
    char ZFudgeBridge;  // 0xDA4
    unsigned int PaletteFile_0x20;  // 0xDA8
    unsigned int Palette;  // 0xDAC
    unsigned char qDB0;  // 0xDB0
    unsigned char qDB4;  // 0xDB4
    void* qDB8;  // 0xDB8
    unsigned int qDBC;  // 0xDBC
    unsigned int qDBD;  // 0xDBD
    unsigned int qDBE;  // 0xDBE
    bool qDBF;  // 0xDBF
    WeaponTypeClass* qDC0;  // 0xDC0
    unsigned char qDC3;  // 0xDC3
    void* qDC4;  // 0xDC4
    unsigned char qDC8;  // 0xDC8
    WeaponTypeClass* qDCC;  // 0xDCC
    unsigned char qDD0;  // 0xDD0
    void* qDD4;  // 0xDD4
    unsigned char qDD8;  // 0xDD8
    void* qDF0;  // 0xDF0
    unsigned int qDF4;  // 0xDF4
    unsigned int qDF8;  // 0xDF8
    unsigned int qDFC;  // 0xDFC
    char qE00[4];  // 0xE00
    void* pE04;  // regen name
    void* pE08;  // regen name
    void* pE0C;  // regen name
    void* qE10;  // 0xE10
    void* pE14;  // regen name
    void* pE18;  // regen name
    unsigned char u8_E1C;  // 0xE1C
    unsigned int EliteOccupyWeapon;  // 0xE20
    unsigned int u32_E24;  // 0xE24
    unsigned int u32_E28;  // 0xE28
    unsigned int u32_E2C;  // 0xE2C
    unsigned char qE30;  // 0xE30
    unsigned int u32_E34;  // 0xE34
    unsigned char u8_E38;  // 0xE38
    void *qE3C;  // 0xE3C
    int qE40;  // 0xE40
    int qE44;  // 0xE44
    int qE48;  // 0xE48
    int qE4C;  // 0xE4C
    unsigned char qE50;  // 0xE50
    CampaignClass* DeadBodies_Items;  // 0xE54
    unsigned int DeadBodies_Capacity;  // 0xE58
    AbstractClass* qE5C;  // 0xE5C
    unsigned int DeadBodies_FlagByte;  // 0xE5D
    unsigned char qE60;  // 0xE60
    unsigned int u32_E64;  // 0xE64
    void* qE68;  // 0xE68
    unsigned char qE6C;  // 0xE6C
    CampaignClass* DeathAnims_Items;  // 0xE70
    unsigned int DeathAnims_Capacity;  // 0xE74
    unsigned int DeathAnims_FlagByte;  // 0xE79
    unsigned int u32_E7C;  // 0xE7C
    unsigned int u32_E80;  // 0xE80
    void* qE84;  // 0xE84
    unsigned char qE88;  // 0xE88
    CampaignClass* VoiceComment_Items;  // 0xE8C
    unsigned int VoiceComment_Capacity;  // 0xE90
    unsigned int VoiceComment_FlagByte;  // 0xE95
    unsigned int u32_E98;  // 0xE98
    unsigned int u32_E9C;  // 0xE9C
    unsigned int qEA0;  // 0xEA0
    int qEA4;  // 0xEA4
    int qEA8;  // 0xEA8
    bool qEAC;  // 0xEAC
    bool qEAD;  // 0xEAD
    bool qEAE;  // 0xEAE
    unsigned char qEAF;  // 0xEAF
    int qEB0;  // 0xEB0
    bool qEB4;  // 0xEB4
    bool qEB5;  // 0xEB5
    unsigned char qEB6;  // 0xEB6
    int HarvestRate;  // 0xEB8
    bool qEBC;  // 0xEBC
    bool qEBD;  // 0xEBD
    bool qEBE;  // 0xEBE
    bool qEBF;  // 0xEBF
    bool qEC0;  // 0xEC0
    bool qEC1;  // 0xEC1
    bool qEC2;  // 0xEC2
    bool qEC3;  // 0xEC3
    bool qEC4;  // 0xEC4
    bool qEC5;  // 0xEC5
    bool qEC6;  // 0xEC6
    bool qEC7;  // 0xEC7
    bool qEC8;  // 0xEC8
    bool qEC9;  // 0xEC9
    bool qECA;  // 0xECA
    bool qECB;  // 0xECB
    unsigned long qECC;  // 0xECC
    unsigned int q5B84;
    unsigned int q5C42;
    unsigned int u32_5D00;
    unsigned int ArrayIndex;
    unsigned int qE04;
    unsigned int u32_E08;
    unsigned int u32_E0C;
    unsigned int u32_E14;
    unsigned int u32_E18;
    unsigned int vtable0;
// --- flat members (END) ---
    InfantryClass *  ConstructInfantry(AbstractClass * ppv);
    InfantryTypeClass * Constructor(ObjectClass * aP1, void *a2, void *a3);
    InfantryTypeClass * ddtor(char a2);
    WeaponTypeClass * * Find(ObjectClass * Source);
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
    unsigned int * Constructor_523980(ObjectTypeClass * aP1);
    unsigned int * CopyDataArray(DynamicVector * aP1);
    unsigned int * GetDefaultDimensions(unsigned int * a1);
};

} // namespace gamemd
