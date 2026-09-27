// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    void* Image;  // 0xA4
    bool ImageAllocated;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    char TurretVoxel[4];  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int ChargerTurrets;  // 0xBC
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
    void* q164;  // 0x164
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
    unsigned int q23B;  // 0x23B
    bool q23D;  // 0x23D
    unsigned char q23E;  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned int q248;  // 0x248
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    void* q25C;  // 0x25C
    char q260[4];  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    void* q26C;  // 0x26C
    void* q270;  // 0x270
    void* q274;  // 0x274
    unsigned int q278;  // 0x278
    void* q27C;  // 0x27C
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
    void* Sequence;  // 0x32C
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
    unsigned int qE00;  // 0xE00
    unsigned int qE04;  // 0xE04
    unsigned int u32_E08;  // 0xE08
    unsigned int u32_E0C;  // 0xE0C
    void* qE10;  // 0xE10
    unsigned int u32_E14;  // 0xE14
    unsigned int u32_E18;  // 0xE18
    unsigned char u8_E1C;  // 0xE1C
    unsigned int EliteOccupyWeapon;  // 0xE20
    unsigned int u32_E24;  // 0xE24
    unsigned int u32_E28;  // 0xE28
    unsigned int u32_E2C;  // 0xE2C
    unsigned char qE30;  // 0xE30
    unsigned int u32_E34;  // 0xE34
    unsigned char u8_E38;  // 0xE38
    char qE3C[4];  // 0xE3C
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
    unsigned char qED0;  // 0xED0
    ObjectTypeClass* qEE0;  // 0xEE0
    AbstractTypeClass* qEE4;  // 0xEE4
    void* qEE8;  // 0xEE8
    unsigned char qEEC;  // 0xEEC
    unsigned int qF04;  // 0xF04
    unsigned int qF08;  // 0xF08
    unsigned int qF0C;  // 0xF0C
    unsigned char qF10;  // 0xF10
    void* qF20;  // 0xF20
    unsigned char qF24;  // 0xF24
    WeaponTypeClass* qF8C;  // 0xF8C
    unsigned char qF90;  // 0xF90
    ObjectTypeClass* qFC0;  // 0xFC0
    ObjectTypeClass* qFC4;  // 0xFC4
    unsigned char qFC8;  // 0xFC8
    unsigned int q1000;  // 0x1000
    unsigned int q1004;  // 0x1004
    unsigned int q1008;  // 0x1008
    void* q1014;  // 0x1014
    unsigned char q1018;  // 0x1018
    unsigned int q1020;  // 0x1020
    unsigned int q1024;  // 0x1024
    char q1028[4];  // 0x1028
    unsigned int q1030;  // 0x1030
    bool q1040;  // 0x1040
    unsigned int q1044;  // 0x1044
    unsigned int q1048;  // 0x1048
    void* q104C;  // 0x104C
    unsigned char q1050;  // 0x1050
    void* q1054;  // 0x1054
    unsigned int q1058;  // 0x1058
    void* q105C;  // 0x105C
    unsigned int q1060;  // 0x1060
    unsigned int q1064;  // 0x1064
    unsigned int q1068;  // 0x1068
    void* q106C;  // 0x106C
    unsigned char q1070;  // 0x1070
    unsigned int q1074;  // 0x1074
    unsigned int q1078;  // 0x1078
    void* q107C;  // 0x107C
    unsigned int q1080;  // 0x1080
    unsigned int q1084;  // 0x1084
    unsigned int q1088;  // 0x1088
    void* q108C;  // 0x108C
    unsigned char q1090;  // 0x1090
    void* q1094;  // 0x1094
    unsigned char q1098;  // 0x1098
    void* q109C;  // 0x109C
    unsigned char q10A0;  // 0x10A0
    void* q10A4;  // 0x10A4
    unsigned char q10A8;  // 0x10A8
    void* q10AC;  // 0x10AC
    unsigned char q10B0;  // 0x10B0
    void* q10B4;  // 0x10B4
    unsigned char q10B8;  // 0x10B8
    void* q10BC;  // 0x10BC
    void* q10C0;  // 0x10C0
    unsigned char q10C4;  // 0x10C4
    unsigned char q10C8;  // 0x10C8
    void* q10CC;  // 0x10CC
    unsigned char q10D0;  // 0x10D0
    unsigned char q10D4;  // 0x10D4
    unsigned char q10D8;  // 0x10D8
    unsigned char q10DC;  // 0x10DC
    void* q10E0;  // 0x10E0
    unsigned char q10E4;  // 0x10E4
    unsigned char q10E8;  // 0x10E8
    void* q10EC;  // 0x10EC
    void* q10F0;  // 0x10F0
    unsigned char q10F4;  // 0x10F4
    unsigned char q10F8;  // 0x10F8
    void* q10FC;  // 0x10FC
    unsigned int q1100;  // 0x1100
    unsigned int q1104;  // 0x1104
    unsigned int q1108;  // 0x1108
    unsigned char q110C;  // 0x110C
    unsigned int q1110;  // 0x1110
    unsigned char q1114;  // 0x1114
    unsigned char q1118;  // 0x1118
    void* q111C;  // 0x111C
    unsigned int q1120;  // 0x1120
    unsigned int q1124;  // 0x1124
    unsigned int q1128;  // 0x1128
    void* q112C;  // 0x112C
    void* q1130;  // 0x1130
    void* q1134;  // 0x1134
    unsigned int q1138;  // 0x1138
    unsigned char q113C;  // 0x113C
    unsigned int q1140;  // 0x1140
    unsigned int q1144;  // 0x1144
    unsigned int q1148;  // 0x1148
    unsigned char q114C;  // 0x114C
    unsigned char q1150;  // 0x1150
    void* q1154;  // 0x1154
    void* q1158;  // 0x1158
    unsigned char q115C;  // 0x115C
    char q1160[4];  // 0x1160
    unsigned int q1164;  // 0x1164
    unsigned int q1168;  // 0x1168
    int q1170;  // 0x1170
    int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    unsigned int q1180;  // 0x1180
    unsigned int q1184;  // 0x1184
    unsigned int q1188;  // 0x1188
    void* q1194;  // 0x1194
    unsigned char q1198;  // 0x1198
    void* q11B0;  // 0x11B0
    unsigned char q11B4;  // 0x11B4
    void* q11CC;  // 0x11CC
    unsigned char q11D0;  // 0x11D0
    void* q11E8;  // 0x11E8
    unsigned char q11EC;  // 0x11EC
    unsigned char q11F0;  // 0x11F0
    unsigned char q11F4;  // 0x11F4
    unsigned char q11F8;  // 0x11F8
    unsigned int q1200;  // 0x1200
    unsigned int q1204;  // 0x1204
    unsigned int q1208;  // 0x1208
    unsigned char q120C;  // 0x120C
    unsigned char q1210;  // 0x1210
    unsigned char q1214;  // 0x1214
    unsigned char q1218;  // 0x1218
    unsigned char q121C;  // 0x121C
    unsigned int q1220;  // 0x1220
    unsigned int q1224;  // 0x1224
    unsigned int q1228;  // 0x1228
    unsigned char q122C;  // 0x122C
    unsigned int q1230;  // 0x1230
    unsigned char q1234;  // 0x1234
    void* q123C;  // 0x123C
    unsigned int q1240;  // 0x1240
    unsigned int q1244;  // 0x1244
    unsigned int q1248;  // 0x1248
    unsigned char q124C;  // 0x124C
    void* q1258;  // 0x1258
    unsigned char q125C;  // 0x125C
    unsigned int q1260;  // 0x1260
    unsigned int q1264;  // 0x1264
    unsigned int q1268;  // 0x1268
    void* q1274;  // 0x1274
    unsigned char q1278;  // 0x1278
    unsigned int q1280;  // 0x1280
    unsigned int q1284;  // 0x1284
    unsigned int q1288;  // 0x1288
    void* q1290;  // 0x1290
    unsigned char q1294;  // 0x1294
    int q1298;  // 0x1298
    void* q12AC;  // 0x12AC
    unsigned char q12B0;  // 0x12B0
    void* q12C8;  // 0x12C8
    unsigned char q12CC;  // 0x12CC
    void* q12E4;  // 0x12E4
    unsigned char q12E8;  // 0x12E8
    unsigned int q1300;  // 0x1300
    unsigned int q1304;  // 0x1304
    unsigned int q1308;  // 0x1308
    unsigned char q130C;  // 0x130C
    unsigned char q1310;  // 0x1310
    int q1314;  // 0x1314
    unsigned int q1320;  // 0x1320
    int q1324;  // 0x1324
    int q1328;  // 0x1328
    unsigned char q132C;  // 0x132C
    unsigned int q1330;  // 0x1330
    AbstractClass* q1334;  // 0x1334
    unsigned char q1338;  // 0x1338
    void* q133C;  // 0x133C
    int q1340;  // 0x1340
    int q1344;  // 0x1344
    int q1348;  // 0x1348
    unsigned char q134C;  // 0x134C
    unsigned char q1350;  // 0x1350
    unsigned char q1354;  // 0x1354
    void* q1358;  // 0x1358
    unsigned char q135C;  // 0x135C
    int q1360;  // 0x1360
    int q1364;  // 0x1364
    int q1368;  // 0x1368
    unsigned int q1374;  // 0x1374
    bool q1378;  // 0x1378
    unsigned char q137C;  // 0x137C
    int q1380;  // 0x1380
    int q1384;  // 0x1384
    int q1388;  // 0x1388
    void* q1390;  // 0x1390
    unsigned char q1394;  // 0x1394
    int q1398;  // 0x1398
    void* q13AC;  // 0x13AC
    unsigned char q13B0;  // 0x13B0
    void* q13C8;  // 0x13C8
    unsigned char q13CC;  // 0x13CC
    void* q13F0;  // 0x13F0
    unsigned char q13F4;  // 0x13F4
    int q1400;  // 0x1400
    int q1404;  // 0x1404
    int q1408;  // 0x1408
    unsigned char q1410;  // 0x1410
    unsigned int q1414;  // 0x1414
    unsigned char q1418;  // 0x1418
    void* q141C;  // 0x141C
    int q1420;  // 0x1420
    int q1424;  // 0x1424
    int q1428;  // 0x1428
    unsigned char q142C;  // 0x142C
    void* q1430;  // 0x1430
    unsigned char q1434;  // 0x1434
    int q1440;  // 0x1440
    int q1444;  // 0x1444
    int q1448;  // 0x1448
    unsigned char q144C;  // 0x144C
    unsigned char q1454;  // 0x1454
    unsigned char q1458;  // 0x1458
    unsigned char q145C;  // 0x145C
    char q1460[4];  // 0x1460
    int q1464;  // 0x1464
    int q1468;  // 0x1468
    unsigned char q146C;  // 0x146C
    unsigned char q1470;  // 0x1470
    unsigned char q1480;  // 0x1480
    void* q1484;  // 0x1484
    unsigned int q1488;  // 0x1488
    unsigned char q148C;  // 0x148C
    unsigned char q1490;  // 0x1490
    void* q14BC;  // 0x14BC
    void* q14C0;  // 0x14C0
    void* q14C4;  // 0x14C4
    void* q14C8;  // 0x14C8
    unsigned char q14CC;  // 0x14CC
    void* q14E0;  // 0x14E0
    unsigned char q14E4;  // 0x14E4
    unsigned int q14E5;  // 0x14E5
    unsigned int q14E6;  // 0x14E6
    unsigned int q14E7;  // 0x14E7
    unsigned char q14E8;  // 0x14E8
    unsigned int q14E9;  // 0x14E9
    unsigned int q14EA;  // 0x14EA
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    void* q14F4;  // 0x14F4
    unsigned char q14F7;  // 0x14F7
    unsigned char q14F8;  // 0x14F8
    void* q14FC;  // 0x14FC
    void* q1500;  // 0x1500
    int q1504;  // 0x1504
    bool q1508;  // 0x1508
    void* q150C;  // 0x150C
    unsigned char q1510;  // 0x1510
    unsigned char q1514;  // 0x1514
    bool q1518;  // 0x1518
    void* q151C;  // 0x151C
    int q1520;  // 0x1520
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned int q1526;  // 0x1526
    int q1528;  // 0x1528
    unsigned char q152A;  // 0x152A
    void* q152C;  // 0x152C
    unsigned char q1530;  // 0x1530
    int q1540;  // 0x1540
    float q1544;  // 0x1544
    int q1548;  // 0x1548
    char q1554[4];  // 0x1554
    unsigned int q1558;  // 0x1558
    int q1560;  // 0x1560
    int q1564;  // 0x1564
    int q1568;  // 0x1568
    unsigned int q1574;  // 0x1574
    int q1580;  // 0x1580
    int q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned char q158F;  // 0x158F
    unsigned int q1590;  // 0x1590
    unsigned int q15E2;  // 0x15E2
    unsigned char q15E6;  // 0x15E6
    unsigned int q1600;  // 0x1600
    unsigned int q1604;  // 0x1604
    unsigned int q1608;  // 0x1608
    char q1618[4];  // 0x1618
    unsigned int q1620;  // 0x1620
    unsigned char q1624;  // 0x1624
    AbstractClass* q1628;  // 0x1628
    unsigned char q1634;  // 0x1634
    unsigned char q1638;  // 0x1638
    void* q163C;  // 0x163C
    char q1640[4];  // 0x1640
    unsigned char q1644;  // 0x1644
    int q1648;  // 0x1648
    unsigned char q164C;  // 0x164C
    unsigned int q1650;  // 0x1650
    void* q1654;  // 0x1654
    void* q1658;  // 0x1658
    unsigned char q165C;  // 0x165C
    char q1660[4];  // 0x1660
    int q1664;  // 0x1664
    int q1668;  // 0x1668
    void* q166C;  // 0x166C
    char q1670[4];  // 0x1670
    void* q1674;  // 0x1674
    unsigned char q1678;  // 0x1678
    void* q167C;  // 0x167C
    bool q1680;  // 0x1680
    bool q1684;  // 0x1684
    int q1688;  // 0x1688
    unsigned char q168C;  // 0x168C
    void* q16A8;  // 0x16A8
    void* q16AC;  // 0x16AC
    unsigned char q16B0;  // 0x16B0
    void* q16B4;  // 0x16B4
    unsigned int q16B7;  // 0x16B7
    unsigned char q16BB;  // 0x16BB
    void* q16CC;  // 0x16CC
    unsigned char q16D0;  // 0x16D0
    void* q16D4;  // 0x16D4
    void* q16D8;  // 0x16D8
    unsigned char q16DC;  // 0x16DC
    void* q16E4;  // 0x16E4
    unsigned char q16E8;  // 0x16E8
    void* q16EC;  // 0x16EC
    unsigned char q16F0;  // 0x16F0
    void* q16F4;  // 0x16F4
    unsigned int q16F8;  // 0x16F8
    unsigned char q16FC;  // 0x16FC
    int q1700;  // 0x1700
    int q1704;  // 0x1704
    bool q1708;  // 0x1708
    void* q170C;  // 0x170C
    bool q1710;  // 0x1710
    void* q1714;  // 0x1714
    unsigned char q1718;  // 0x1718
    AbstractTypeClass* q171C;  // 0x171C
    char q1720[4];  // 0x1720
    char q1724[4];  // 0x1724
    bool q1728;  // 0x1728
    AbstractTypeClass* q172C;  // 0x172C
    AbstractTypeClass* q1730;  // 0x1730
    unsigned char q1734;  // 0x1734
    unsigned char q1738;  // 0x1738
    void* q173C;  // 0x173C
    void* q1740;  // 0x1740
    int q1744;  // 0x1744
    bool q1748;  // 0x1748
    void* q174C;  // 0x174C
    char q1750;  // 0x1750
    unsigned char q1754;  // 0x1754
    unsigned char q1758;  // 0x1758
    unsigned char q175C;  // 0x175C
    unsigned int q1760;  // 0x1760
    unsigned int q1761;  // 0x1761
    unsigned int q1764;  // 0x1764
    unsigned char q1765;  // 0x1765
    unsigned int q1768;  // 0x1768
    unsigned int q176A;  // 0x176A
    unsigned char q176E;  // 0x176E
    unsigned char q1770;  // 0x1770
    bool q1774;  // 0x1774
    AbstractTypeClass* q1778;  // 0x1778
    void* q177C;  // 0x177C
    bool q1780;  // 0x1780
    char AltCameoFile;  // 0x1781
    unsigned int q1784;  // 0x1784
    AbstractClass* q1788;  // 0x1788
    void* q178C;  // 0x178C
    unsigned char q1790;  // 0x1790
    unsigned char q1794;  // 0x1794
    unsigned char q1798;  // 0x1798
    void* q179C;  // 0x179C
    void* q17A0;  // 0x17A0
    unsigned char q17A4;  // 0x17A4
    void* q17A8;  // 0x17A8
    void* q17AC;  // 0x17AC
    unsigned char q17B0;  // 0x17B0
    void* q17BC;  // 0x17BC
    void* q17C0;  // 0x17C0
    unsigned char q17C4;  // 0x17C4
    void* q17E8;  // 0x17E8
    unsigned char q17EC;  // 0x17EC
    unsigned int q1800;  // 0x1800
    unsigned int q1804;  // 0x1804
    char q1808[4];  // 0x1808
    unsigned char q180C;  // 0x180C
    double q1810;  // 0x1810
    unsigned int q1814;  // 0x1814
    void* q181C;  // 0x181C
    int q1820;  // 0x1820
    int q1824;  // 0x1824
    bool q1828;  // 0x1828
    void* q182C;  // 0x182C
    Color* q1830;  // 0x1830
    ObjectTypeClass* q1834;  // 0x1834
    unsigned char q1838;  // 0x1838
    unsigned int q1840;  // 0x1840
    unsigned int q1844;  // 0x1844
    unsigned int q1848;  // 0x1848
    void* q184C;  // 0x184C
    unsigned char q1850;  // 0x1850
    void* q185C;  // 0x185C
    unsigned int q1860;  // 0x1860
    unsigned int q1864;  // 0x1864
    unsigned int q1868;  // 0x1868
    void* q186C;  // 0x186C
    unsigned char q1870;  // 0x1870
    double q1874;  // 0x1874
    char q1878[4];  // 0x1878
    TechnoTypeClass * q1880;  // 0x1880
    unsigned int q1884;  // 0x1884
    unsigned int q1888;  // 0x1888
    void* q18A8;  // 0x18A8
    void* q18AC;  // 0x18AC
    unsigned char q18B0;  // 0x18B0
    unsigned int q1900;  // 0x1900
    unsigned char q1904;  // 0x1904
    char q1908[4];  // 0x1908
    double q1910;  // 0x1910
    unsigned char q1920;  // 0x1920
    unsigned int q1924;  // 0x1924
    unsigned int q1928;  // 0x1928
    unsigned int q1938;  // 0x1938
    unsigned int q1940;  // 0x1940
    unsigned char q1944;  // 0x1944
    unsigned int q1948;  // 0x1948
    unsigned int q1958;  // 0x1958
    unsigned int q1960;  // 0x1960
    unsigned int q1964;  // 0x1964
    char q1968[4];  // 0x1968
    unsigned int q1978;  // 0x1978
    bool q1980;  // 0x1980
    char q1984[4];  // 0x1984
    unsigned int q1988;  // 0x1988
    unsigned int q1990;  // 0x1990
    unsigned int q1994;  // 0x1994
    unsigned int q1998;  // 0x1998
    unsigned int q2000;  // 0x2000
    unsigned char q2004;  // 0x2004
    char q2008[4];  // 0x2008
    char q2020[4];  // 0x2020
    unsigned char q2024;  // 0x2024
    unsigned int q2028;  // 0x2028
    unsigned int q2040;  // 0x2040
    int q2044;  // 0x2044
    int q2048;  // 0x2048
    bool q2054;  // 0x2054
    int q2060;  // 0x2060
    bool q2064;  // 0x2064
    int q2068;  // 0x2068
    unsigned int q2070;  // 0x2070
    int q2080;  // 0x2080
    int q2084;  // 0x2084
    int q2088;  // 0x2088
    unsigned int q2098;  // 0x2098
    char q2100[4];  // 0x2100
    int q2120;  // 0x2120
    unsigned int q2124;  // 0x2124
    void* q2128;  // 0x2128
    bool q2130;  // 0x2130
    int q2134;  // 0x2134
    unsigned char q2138;  // 0x2138
    unsigned char q2140;  // 0x2140
    unsigned int q2144;  // 0x2144
    double q2148;  // 0x2148
    unsigned char q2150;  // 0x2150
    unsigned char q2154;  // 0x2154
    bool q2160;  // 0x2160
    bool q2164;  // 0x2164
    bool q2168;  // 0x2168
    unsigned char q2170;  // 0x2170
    bool q2178;  // 0x2178
    unsigned char q2180;  // 0x2180
    double q2184;  // 0x2184
    unsigned char q2188;  // 0x2188
    unsigned char q2194;  // 0x2194
    double q2198;  // 0x2198
    char q2200[4];  // 0x2200
    unsigned char q2204;  // 0x2204
    unsigned char q2208;  // 0x2208
    void* q2220;  // 0x2220
    unsigned char q2224;  // 0x2224
    ObjectTypeClass* q2228;  // 0x2228
    WeaponTypeClass* q2244;  // 0x2244
    void* q2248;  // 0x2248
    unsigned char q2280;  // 0x2280
    unsigned char q2304;  // 0x2304
    double q2308;  // 0x2308
    unsigned char q2320;  // 0x2320
    char q2324[4];  // 0x2324
    unsigned char q2328;  // 0x2328
    unsigned int q2340;  // 0x2340
    double q2344;  // 0x2344
    unsigned char q2348;  // 0x2348
    unsigned char q2354;  // 0x2354
    double q2358;  // 0x2358
    void* q2360;  // 0x2360
    unsigned char q2364;  // 0x2364
    unsigned char q2368;  // 0x2368
    void* q2388;  // 0x2388
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned int q2400;  // 0x2400
    unsigned int q2404;  // 0x2404
    double q2408;  // 0x2408
    unsigned char q2418;  // 0x2418
    unsigned char q2420;  // 0x2420
    int q2440;  // 0x2440
    void* q2444;  // 0x2444
    unsigned char q2448;  // 0x2448
    int q2450;  // 0x2450
    int q2454;  // 0x2454
    void* q2500;  // 0x2500
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    void* q2528;  // 0x2528
    unsigned char q2560;  // 0x2560
    void* q2584;  // 0x2584
    unsigned char q2588;  // 0x2588
    void* q2640;  // 0x2640
    unsigned char q2644;  // 0x2644
    void* q2668;  // 0x2668
    unsigned char q2700;  // 0x2700
    unsigned char q2704;  // 0x2704
    char q2708[4];  // 0x2708
    void* q2724;  // 0x2724
    unsigned char q2728;  // 0x2728
    void* q2780;  // 0x2780
    unsigned char q2784;  // 0x2784
    void* q2844;  // 0x2844
    void* q2848;  // 0x2848
    unsigned char q2880;  // 0x2880
    void* q2908;  // 0x2908
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    void* q3008;  // 0x3008
    void* q3060;  // 0x3060
    unsigned char q3064;  // 0x3064
    void* q3068;  // 0x3068
    void* q3104;  // 0x3104
    unsigned char q3108;  // 0x3108
    void* q3160;  // 0x3160
    unsigned char q3164;  // 0x3164
    bool q3214;  // 0x3214
    bool q3218;  // 0x3218
    bool q3220;  // 0x3220
    bool q3224;  // 0x3224
    bool q3228;  // 0x3228
    bool q3230;  // 0x3230
    bool q3234;  // 0x3234
    unsigned char q3240;  // 0x3240
    unsigned int q3244;  // 0x3244
    unsigned int q3248;  // 0x3248
    unsigned char q3260;  // 0x3260
    unsigned int q3264;  // 0x3264
    unsigned int q3268;  // 0x3268
    unsigned int q3274;  // 0x3274
    bool q3278;  // 0x3278
    unsigned int q3280;  // 0x3280
    int q3284;  // 0x3284
    int q3288;  // 0x3288
    unsigned int q3300;  // 0x3300
    unsigned int q3304;  // 0x3304
    unsigned int q3308;  // 0x3308
    unsigned int q3320;  // 0x3320
    unsigned int q3324;  // 0x3324
    unsigned int q3328;  // 0x3328
    unsigned int q3330;  // 0x3330
    unsigned int q3334;  // 0x3334
    unsigned int q3338;  // 0x3338
    unsigned int q333C;  // 0x333C
    unsigned char q3340;  // 0x3340
    unsigned int q3344;  // 0x3344
    unsigned int q3348;  // 0x3348
    unsigned char q334C;  // 0x334C
    unsigned int q3350;  // 0x3350
    int SlaveRegenRate_2;  // 0x3360
    unsigned int q3364;  // 0x3364
    unsigned int q3368;  // 0x3368
    unsigned char q336C;  // 0x336C
    unsigned int q3370;  // 0x3370
    unsigned char q3374;  // 0x3374
    unsigned int q3378;  // 0x3378
    unsigned char q337C;  // 0x337C
    unsigned int q3380;  // 0x3380
    unsigned int q3384;  // 0x3384
    unsigned int q3388;  // 0x3388
    unsigned char q338C;  // 0x338C
    bool q3390;  // 0x3390
    unsigned int q3394;  // 0x3394
    unsigned char q33D4;  // 0x33D4
    unsigned char q33D8;  // 0x33D8
    unsigned char q33DC;  // 0x33DC
    unsigned char q33E0;  // 0x33E0
    unsigned char q33E4;  // 0x33E4
    int q3400;  // 0x3400
    float q3404;  // 0x3404
    float q3408;  // 0x3408
    unsigned char q340C;  // 0x340C
    unsigned char q3410;  // 0x3410
    int JumpjetCrash_2;  // 0x3412
    unsigned char q3414;  // 0x3414
    float q3420;  // 0x3420
    int JumpjetWobbles_2;  // 0x3424
    int q3428;  // 0x3428
    unsigned char q342C;  // 0x342C
    unsigned char q3430;  // 0x3430
    int JumpjetDeviation_2;  // 0x3432
    unsigned int q3434;  // 0x3434
    unsigned int q3438;  // 0x3438
    unsigned int q3440;  // 0x3440
    unsigned int q3444;  // 0x3444
    unsigned int q3448;  // 0x3448
    unsigned char q344C;  // 0x344C
    unsigned char q3450;  // 0x3450
    unsigned char q3454;  // 0x3454
    int SecretHouses_2;  // 0x3456
    char q3460[4];  // 0x3460
    unsigned int q3464;  // 0x3464
    unsigned int q3468;  // 0x3468
    unsigned char q346C;  // 0x346C
    unsigned char q3470;  // 0x3470
    unsigned char q3474;  // 0x3474
    unsigned int q3478;  // 0x3478
    unsigned char q347C;  // 0x347C
    unsigned int q3480;  // 0x3480
    char q3484[4];  // 0x3484
    int q3488;  // 0x3488
    unsigned char q348C;  // 0x348C
    unsigned char q3490;  // 0x3490
    char PaletteFile;  // 0x3492
    unsigned char q3494;  // 0x3494
    unsigned int q3500;  // 0x3500
    unsigned char q3504;  // 0x3504
    unsigned char q3508;  // 0x3508
    unsigned char q350C;  // 0x350C
    unsigned char q3510;  // 0x3510
    unsigned char q3514;  // 0x3514
    unsigned int q3518;  // 0x3518
    unsigned char q351C;  // 0x351C
    WeaponTypeClass* q3520;  // 0x3520
    void* q3524;  // 0x3524
    unsigned char q3528;  // 0x3528
    unsigned char q352C;  // 0x352C
    unsigned char q3530;  // 0x3530
    unsigned char q3534;  // 0x3534
    void* q3540;  // 0x3540
    unsigned char q3544;  // 0x3544
    unsigned char q3548;  // 0x3548
    unsigned int q3568;  // 0x3568
    unsigned char q356C;  // 0x356C
    unsigned char q3570;  // 0x3570
    unsigned char q3574;  // 0x3574
    char q3580[4];  // 0x3580
    char q3584[4];  // 0x3584
    char q3588[4];  // 0x3588
    unsigned char q358C;  // 0x358C
    unsigned char q3590;  // 0x3590
    unsigned char q3594;  // 0x3594
    void* q3600;  // 0x3600
    unsigned int q3604;  // 0x3604
    unsigned int q3608;  // 0x3608
    unsigned int q3620;  // 0x3620
    unsigned int q3624;  // 0x3624
    unsigned int q3628;  // 0x3628
    unsigned char q362C;  // 0x362C
    unsigned char q3630;  // 0x3630
    unsigned char q3634;  // 0x3634
    unsigned char q3640;  // 0x3640
    unsigned int RecordTable;  // 0x3644
    int q3648;  // 0x3648
    int q3660;  // 0x3660
    unsigned int q3664;  // 0x3664
    unsigned int q3668;  // 0x3668
    unsigned char q366C;  // 0x366C
    unsigned char q3670;  // 0x3670
    unsigned char q3674;  // 0x3674
    unsigned char q3680;  // 0x3680
    unsigned int q3684;  // 0x3684
    void* q3688;  // 0x3688
    unsigned char q368C;  // 0x368C
    unsigned char q3690;  // 0x3690
    unsigned char q3694;  // 0x3694
    unsigned int q3700;  // 0x3700
    unsigned int q3708;  // 0x3708
    unsigned int q3720;  // 0x3720
    unsigned int q3724;  // 0x3724
    unsigned int q3728;  // 0x3728
    unsigned char q372C;  // 0x372C
    unsigned int q3740;  // 0x3740
    unsigned int q3744;  // 0x3744
    int q3748;  // 0x3748
    unsigned char q374C;  // 0x374C
    bool q3758;  // 0x3758
    int q3760;  // 0x3760
    bool q3764;  // 0x3764
    int q3768;  // 0x3768
    bool q3774;  // 0x3774
    bool q3778;  // 0x3778
    bool q3780;  // 0x3780
    unsigned int q3784;  // 0x3784
    unsigned int q3788;  // 0x3788
    unsigned char q37A8;  // 0x37A8
    unsigned char q37AC;  // 0x37AC
    unsigned char q37B0;  // 0x37B0
    unsigned char q37B4;  // 0x37B4
    ObjectTypeClass* q3808;  // 0x3808
    unsigned char q380C;  // 0x380C
    unsigned char q3810;  // 0x3810
    unsigned char q3814;  // 0x3814
    unsigned char q3820;  // 0x3820
    unsigned char q3824;  // 0x3824
    unsigned char q3828;  // 0x3828
    unsigned char q382C;  // 0x382C
    unsigned int q3844;  // 0x3844
    unsigned int q3848;  // 0x3848
    unsigned char q384C;  // 0x384C
    unsigned char q3850;  // 0x3850
    unsigned char q3854;  // 0x3854
    WeaponTypeClass* q3980;  // 0x3980
    unsigned char q3984;  // 0x3984
    unsigned char q3988;  // 0x3988
    unsigned char q4040;  // 0x4040
    unsigned char q4044;  // 0x4044
    unsigned char q4048;  // 0x4048
    unsigned char q404C;  // 0x404C
    unsigned int q4100;  // 0x4100
    unsigned int q4104;  // 0x4104
    unsigned char q4108;  // 0x4108
    unsigned char q410C;  // 0x410C
    unsigned char q4110;  // 0x4110
    unsigned int q4114;  // 0x4114
    unsigned int q4118;  // 0x4118
    unsigned char q411C;  // 0x411C
    unsigned char q4120;  // 0x4120
    unsigned char q4124;  // 0x4124
    unsigned int q4128;  // 0x4128
    unsigned char q412C;  // 0x412C
    unsigned char q4130;  // 0x4130
    unsigned int q4134;  // 0x4134
    unsigned char q4138;  // 0x4138
    unsigned int q4144;  // 0x4144
    unsigned char q4148;  // 0x4148
    char q4150[4];  // 0x4150
    unsigned char q4154;  // 0x4154
    unsigned char q4158;  // 0x4158
    unsigned char q415C;  // 0x415C
    bool q4160;  // 0x4160
    unsigned int q4164;  // 0x4164
    unsigned int q4168;  // 0x4168
    unsigned char q416C;  // 0x416C
    unsigned char q4170;  // 0x4170
    unsigned char q4174;  // 0x4174
    unsigned int q4178;  // 0x4178
    unsigned char q417C;  // 0x417C
    void* q4180;  // 0x4180
    unsigned int q4184;  // 0x4184
    unsigned char q4188;  // 0x4188
    unsigned char q418C;  // 0x418C
    unsigned char q4190;  // 0x4190
    unsigned char q4194;  // 0x4194
    HouseClass* q4200;  // 0x4200
    unsigned char q4204;  // 0x4204
    unsigned char q4208;  // 0x4208
    unsigned char q420C;  // 0x420C
    unsigned int q4210;  // 0x4210
    unsigned int q4214;  // 0x4214
    unsigned char q4218;  // 0x4218
    void* q4220;  // 0x4220
    unsigned int q4224;  // 0x4224
    unsigned int q4228;  // 0x4228
    unsigned char q422C;  // 0x422C
    unsigned char q4240;  // 0x4240
    void* q4244;  // 0x4244
    unsigned char q4248;  // 0x4248
    unsigned char q424C;  // 0x424C
    void* q4260;  // 0x4260
    unsigned char q4264;  // 0x4264
    void* q4268;  // 0x4268
    unsigned char q426C;  // 0x426C
    unsigned char q4270;  // 0x4270
    unsigned char q4274;  // 0x4274
    unsigned char q4280;  // 0x4280
    void* q4284;  // 0x4284
    void* q4288;  // 0x4288
    unsigned char q428C;  // 0x428C
    unsigned char q4290;  // 0x4290
    unsigned char q4294;  // 0x4294
    void* q4300;  // 0x4300
    unsigned char q4304;  // 0x4304
    unsigned char q4308;  // 0x4308
    unsigned char q430C;  // 0x430C
    unsigned char q4310;  // 0x4310
    void* q4320;  // 0x4320
    unsigned char q4324;  // 0x4324
    unsigned char q4328;  // 0x4328
    unsigned char q432C;  // 0x432C
    unsigned char q4330;  // 0x4330
    unsigned char q4340;  // 0x4340
    unsigned char q4344;  // 0x4344
    void* q4348;  // 0x4348
    unsigned char q434C;  // 0x434C
    unsigned char q4350;  // 0x4350
    unsigned char q4354;  // 0x4354
    unsigned int q4358;  // 0x4358
    unsigned char q435C;  // 0x435C
    unsigned int q4360;  // 0x4360
    unsigned char q4364;  // 0x4364
    unsigned int q4368;  // 0x4368
    unsigned char q436C;  // 0x436C
    unsigned int q4370;  // 0x4370
    unsigned int q4374;  // 0x4374
    unsigned char q4378;  // 0x4378
    unsigned char q437C;  // 0x437C
    void* q4380;  // 0x4380
    unsigned int q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    unsigned char q438C;  // 0x438C
    unsigned char q4390;  // 0x4390
    unsigned char q4394;  // 0x4394
    void* q4400;  // 0x4400
    void* q4404;  // 0x4404
    unsigned int q4408;  // 0x4408
    unsigned char q440C;  // 0x440C
    unsigned char q4410;  // 0x4410
    unsigned char q4414;  // 0x4414
    unsigned int q4418;  // 0x4418
    unsigned char q441C;  // 0x441C
    unsigned int q4420;  // 0x4420
    unsigned int q4424;  // 0x4424
    unsigned char q4428;  // 0x4428
    unsigned char q442C;  // 0x442C
    unsigned char q4430;  // 0x4430
    AbstractTypeClass* q4434;  // 0x4434
    char q4438;  // 0x4438
    unsigned char q443C;  // 0x443C
    void* q4440;  // 0x4440
    unsigned char q4444;  // 0x4444
    char q4448[4];  // 0x4448
    unsigned char q444C;  // 0x444C
    unsigned char q4450;  // 0x4450
    unsigned char q4454;  // 0x4454
    int q4464;  // 0x4464
    unsigned int q4468;  // 0x4468
    unsigned char q446C;  // 0x446C
    unsigned int q4470;  // 0x4470
    unsigned char q4474;  // 0x4474
    unsigned char q4478;  // 0x4478
    unsigned char q447C;  // 0x447C
    unsigned int q4480;  // 0x4480
    unsigned int q4484;  // 0x4484
    unsigned int q4488;  // 0x4488
    unsigned char q448C;  // 0x448C
    unsigned char q4490;  // 0x4490
    unsigned char q4494;  // 0x4494
    unsigned int q4498;  // 0x4498
    unsigned char q449C;  // 0x449C
    unsigned char q44A0;  // 0x44A0
    unsigned char q44A4;  // 0x44A4
    unsigned char q44A8;  // 0x44A8
    void* q4500;  // 0x4500
    unsigned char q4504;  // 0x4504
    unsigned char q4508;  // 0x4508
    unsigned char q450C;  // 0x450C
    unsigned char q4510;  // 0x4510
    void* q4528;  // 0x4528
    unsigned char q452C;  // 0x452C
    unsigned char q4530;  // 0x4530
    unsigned char q4534;  // 0x4534
    unsigned char q4560;  // 0x4560
    unsigned char q4564;  // 0x4564
    unsigned char q4568;  // 0x4568
    unsigned char q456C;  // 0x456C
    void* q4584;  // 0x4584
    unsigned char q4588;  // 0x4588
    unsigned char q458C;  // 0x458C
    unsigned char q4590;  // 0x4590
    unsigned char q4594;  // 0x4594
    unsigned int q4608;  // 0x4608
    unsigned char q460C;  // 0x460C
    unsigned char q4610;  // 0x4610
    unsigned char q4614;  // 0x4614
    unsigned char q4620;  // 0x4620
    unsigned char q4624;  // 0x4624
    unsigned char q4628;  // 0x4628
    unsigned char q462C;  // 0x462C
    unsigned int q4630;  // 0x4630
    unsigned char q4634;  // 0x4634
    unsigned char q4638;  // 0x4638
    unsigned char q463C;  // 0x463C
    unsigned int q4640;  // 0x4640
    unsigned int q4644;  // 0x4644
    unsigned int q4648;  // 0x4648
    unsigned char q464C;  // 0x464C
    unsigned char q4650;  // 0x4650
    unsigned char q4654;  // 0x4654
    unsigned int q4658;  // 0x4658
    unsigned char q465C;  // 0x465C
    unsigned char q4660;  // 0x4660
    unsigned char q4664;  // 0x4664
    void* q4668;  // 0x4668
    unsigned char q466C;  // 0x466C
    unsigned char q4670;  // 0x4670
    unsigned char q4674;  // 0x4674
    unsigned int q4680;  // 0x4680
    unsigned char q4684;  // 0x4684
    unsigned char q4688;  // 0x4688
    unsigned char q468C;  // 0x468C
    unsigned int q4690;  // 0x4690
    unsigned int q4694;  // 0x4694
    unsigned char q4698;  // 0x4698
    unsigned char q4700;  // 0x4700
    unsigned int q4704;  // 0x4704
    unsigned int q4708;  // 0x4708
    unsigned char q470C;  // 0x470C
    unsigned char q4710;  // 0x4710
    void* q4724;  // 0x4724
    unsigned char q4728;  // 0x4728
    unsigned char q472C;  // 0x472C
    unsigned char q4730;  // 0x4730
    unsigned char q4734;  // 0x4734
    unsigned int q4740;  // 0x4740
    BuildingTypeClass* q4744;  // 0x4744
    unsigned char q4748;  // 0x4748
    unsigned char q474C;  // 0x474C
    unsigned char q4750;  // 0x4750
    unsigned int q4754;  // 0x4754
    unsigned int q4758;  // 0x4758
    unsigned char q475C;  // 0x475C
    int q4760;  // 0x4760
    unsigned char q4764;  // 0x4764
    void* q4780;  // 0x4780
    unsigned char q4784;  // 0x4784
    unsigned char q4788;  // 0x4788
    unsigned char q478C;  // 0x478C
    unsigned char q4790;  // 0x4790
    void* q4808;  // 0x4808
    unsigned char q480C;  // 0x480C
    unsigned char q4810;  // 0x4810
    unsigned char q4814;  // 0x4814
    unsigned char q4840;  // 0x4840
    unsigned char q4844;  // 0x4844
    unsigned char q4848;  // 0x4848
    unsigned char q484C;  // 0x484C
    int q4864;  // 0x4864
    unsigned int q4868;  // 0x4868
    unsigned char q486C;  // 0x486C
    unsigned char q4880;  // 0x4880
    int q4884;  // 0x4884
    unsigned char q4888;  // 0x4888
    unsigned char q4890;  // 0x4890
    unsigned char q4894;  // 0x4894
    unsigned char q4898;  // 0x4898
    void* q4900;  // 0x4900
    AnimClass* q4904;  // 0x4904
    unsigned char q4908;  // 0x4908
    unsigned char q490C;  // 0x490C
    unsigned char q4910;  // 0x4910
    int q4914;  // 0x4914
    unsigned int q4918;  // 0x4918
    unsigned char q491C;  // 0x491C
    unsigned char q4920;  // 0x4920
    void* q4924;  // 0x4924
    int q4928;  // 0x4928
    unsigned char q492C;  // 0x492C
    unsigned char q4930;  // 0x4930
    unsigned int q4934;  // 0x4934
    unsigned char q4940;  // 0x4940
    unsigned char q4944;  // 0x4944
    unsigned char q4948;  // 0x4948
    int q4950;  // 0x4950
    unsigned char q4954;  // 0x4954
    unsigned char q4958;  // 0x4958
    int q4960;  // 0x4960
    int q4964;  // 0x4964
    int q4968;  // 0x4968
    unsigned char q496C;  // 0x496C
    int q4978;  // 0x4978
    unsigned char q497C;  // 0x497C
    unsigned int q4980;  // 0x4980
    bool q4984;  // 0x4984
    unsigned char q4988;  // 0x4988
    unsigned char q498C;  // 0x498C
    unsigned char q4990;  // 0x4990
    bool q4994;  // 0x4994
    unsigned char q4998;  // 0x4998
    int q5000;  // 0x5000
    unsigned char q5004;  // 0x5004
    void* q5008;  // 0x5008
    unsigned char q500C;  // 0x500C
    int q5010;  // 0x5010
    int q5014;  // 0x5014
    unsigned char q5018;  // 0x5018
    unsigned char q5040;  // 0x5040
    unsigned char q5044;  // 0x5044
    unsigned char q5048;  // 0x5048
    unsigned char q504C;  // 0x504C
    void* q5064;  // 0x5064
    unsigned char q5068;  // 0x5068
    unsigned char q506C;  // 0x506C
    unsigned char q5070;  // 0x5070
    unsigned char q5074;  // 0x5074
    void* q5104;  // 0x5104
    unsigned char q5108;  // 0x5108
    unsigned char q510C;  // 0x510C
    unsigned char q5110;  // 0x5110
    unsigned char q5114;  // 0x5114
    unsigned int q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    int q5128;  // 0x5128
    unsigned char q512C;  // 0x512C
    unsigned char q5130;  // 0x5130
    unsigned char q5134;  // 0x5134
    OverlayTypeClass* q5138;  // 0x5138
    unsigned char q513C;  // 0x513C
    unsigned int q5140;  // 0x5140
    unsigned char q5144;  // 0x5144
    void* q5148;  // 0x5148
    unsigned char q514C;  // 0x514C
    unsigned char q5150;  // 0x5150
    unsigned char q5154;  // 0x5154
    unsigned char q5158;  // 0x5158
    unsigned char q515C;  // 0x515C
    ObjectClass* q5160;  // 0x5160
    unsigned char q5164;  // 0x5164
    void* q5168;  // 0x5168
    unsigned char q516C;  // 0x516C
    void* q5170;  // 0x5170
    int q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    unsigned char q517C;  // 0x517C
    unsigned char q5180;  // 0x5180
    int q5184;  // 0x5184
    unsigned int q5188;  // 0x5188
    unsigned char q518C;  // 0x518C
    unsigned char q5190;  // 0x5190
    unsigned char q5194;  // 0x5194
    unsigned char q5204;  // 0x5204
    unsigned char q5208;  // 0x5208
    unsigned char q520C;  // 0x520C
    int q5220;  // 0x5220
    int q5224;  // 0x5224
    unsigned char q5228;  // 0x5228
    unsigned char q522C;  // 0x522C
    unsigned char q5230;  // 0x5230
    int q5234;  // 0x5234
    unsigned int q5238;  // 0x5238
    unsigned char q523C;  // 0x523C
    unsigned char q5240;  // 0x5240
    unsigned char q5244;  // 0x5244
    unsigned char q5248;  // 0x5248
    unsigned char q524C;  // 0x524C
    unsigned char q5250;  // 0x5250
    unsigned char q5254;  // 0x5254
    unsigned char q5260;  // 0x5260
    unsigned char q5264;  // 0x5264
    unsigned char q5268;  // 0x5268
    unsigned char q5270;  // 0x5270
    unsigned char q5274;  // 0x5274
    unsigned char q5278;  // 0x5278
    unsigned char q527C;  // 0x527C
    unsigned char q5280;  // 0x5280
    void* q5308;  // 0x5308
    unsigned char q530C;  // 0x530C
    unsigned char q5310;  // 0x5310
    unsigned char q5314;  // 0x5314
    void* q5320;  // 0x5320
    unsigned char q5324;  // 0x5324
    unsigned char q5328;  // 0x5328
    unsigned char q532C;  // 0x532C
    unsigned char q5330;  // 0x5330
    void* q5344;  // 0x5344
    unsigned char q5348;  // 0x5348
    unsigned char q534C;  // 0x534C
    unsigned int q5350;  // 0x5350
    unsigned int q5354;  // 0x5354
    unsigned int q5358;  // 0x5358
    unsigned char q535C;  // 0x535C
    unsigned char q5360;  // 0x5360
    unsigned char q5364;  // 0x5364
    unsigned char q5368;  // 0x5368
    unsigned char q536C;  // 0x536C
    int q5380;  // 0x5380
    bool q5384;  // 0x5384
    void* q5388;  // 0x5388
    unsigned char q538C;  // 0x538C
    int q5394;  // 0x5394
    bool q5398;  // 0x5398
    unsigned char q539C;  // 0x539C
    BuildingClass* q53AC;  // 0x53AC
    BuildingClass* q53B0;  // 0x53B0
    BuildingClass* q53B4;  // 0x53B4
    BuildingClass* q53B8;  // 0x53B8
    BuildingClass* q53BC;  // 0x53BC
    BuildingClass* q53C0;  // 0x53C0
    BuildingClass* q53C4;  // 0x53C4
    BuildingClass* q53C8;  // 0x53C8
    BuildingClass* q53CC;  // 0x53CC
    unsigned char q53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    unsigned char q53DC;  // 0x53DC
    void* q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    unsigned char q53F0;  // 0x53F0
    unsigned char q53F4;  // 0x53F4
    bool q5400;  // 0x5400
    void* q5404;  // 0x5404
    int q5408;  // 0x5408
    unsigned char q540C;  // 0x540C
    unsigned char q5410;  // 0x5410
    unsigned int q5414;  // 0x5414
    unsigned char q5418;  // 0x5418
    unsigned char q541C;  // 0x541C
    void* q5420;  // 0x5420
    unsigned char q5424;  // 0x5424
    unsigned char q5428;  // 0x5428
    bool q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    unsigned char q5438;  // 0x5438
    int q5440;  // 0x5440
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    int q5458;  // 0x5458
    unsigned char q545C;  // 0x545C
    void* q5460;  // 0x5460
    unsigned char q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    int q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    unsigned char q548C;  // 0x548C
    char q5490[4];  // 0x5490
    void* q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q54A4;  // 0x54A4
    unsigned char q54A8;  // 0x54A8
    BuildingClass* q54E0;  // 0x54E0
    unsigned char q54E4;  // 0x54E4
    unsigned char q54E8;  // 0x54E8
    unsigned char q54EC;  // 0x54EC
    unsigned char q54F0;  // 0x54F0
    unsigned char q54F4;  // 0x54F4
    int q5504;  // 0x5504
    ObjectClass * q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    bool q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5518;  // 0x5518
    unsigned int q5520;  // 0x5520
    unsigned char q5524;  // 0x5524
    DynamicVector* q5550;  // 0x5550
    unsigned char q5554;  // 0x5554
    unsigned char q5558;  // 0x5558
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    void* q55F0;  // 0x55F0
    unsigned char q55F4;  // 0x55F4
    unsigned char q55F8;  // 0x55F8
    unsigned char q55FC;  // 0x55FC
    unsigned char q5600;  // 0x5600
    unsigned char q5604;  // 0x5604
    unsigned char q5608;  // 0x5608
    unsigned char q560C;  // 0x560C
    unsigned char q5610;  // 0x5610
    unsigned char q5618;  // 0x5618
    unsigned char q561C;  // 0x561C
    void* q5634;  // 0x5634
    unsigned char q5638;  // 0x5638
    unsigned char q563C;  // 0x563C
    unsigned int q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    unsigned char q5648;  // 0x5648
    unsigned char q5650;  // 0x5650
    unsigned char q5654;  // 0x5654
    AbstractTypeClass* q5660;  // 0x5660
    AbstractTypeClass* q5664;  // 0x5664
    AbstractTypeClass* q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned char q5700;  // 0x5700
    int q5704;  // 0x5704
    unsigned char q5708;  // 0x5708
    unsigned char q570C;  // 0x570C
    unsigned char q5710;  // 0x5710
    int q5714;  // 0x5714
    int q5718;  // 0x5718
    unsigned char q571C;  // 0x571C
    void* q5720;  // 0x5720
    unsigned char q5724;  // 0x5724
    char q5728[4];  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned char q5730;  // 0x5730
    unsigned char q5734;  // 0x5734
    void* q5740;  // 0x5740
    char q5744[4];  // 0x5744
    void* q5748;  // 0x5748
    unsigned char q574C;  // 0x574C
    AudioController* q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned char q5758;  // 0x5758
    unsigned char q575C;  // 0x575C
    bool q5760;  // 0x5760
    bool q5764;  // 0x5764
    int q5768;  // 0x5768
    unsigned char q576C;  // 0x576C
    unsigned char q5770;  // 0x5770
    void* q5774;  // 0x5774
    unsigned char q5778;  // 0x5778
    unsigned char q577C;  // 0x577C
    unsigned char q5780;  // 0x5780
    unsigned char q5784;  // 0x5784
    void* ptr_5788;  // 0x5788
    unsigned char q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    unsigned char q5794;  // 0x5794
    void* q5798;  // 0x5798
    unsigned char q579C;  // 0x579C
    unsigned char q57A0;  // 0x57A0
    void* q57A4;  // 0x57A4
    unsigned char q57A8;  // 0x57A8
    unsigned char q57AC;  // 0x57AC
    void* q57B0;  // 0x57B0
    unsigned char q57B4;  // 0x57B4
    unsigned char q57B8;  // 0x57B8
    void* q57BC;  // 0x57BC
    unsigned char q57C0;  // 0x57C0
    unsigned char q57C4;  // 0x57C4
    void* q57C8;  // 0x57C8
    unsigned char q57CC;  // 0x57CC
    unsigned char q57D0;  // 0x57D0
    void* q57D4;  // 0x57D4
    unsigned char q57D8;  // 0x57D8
    unsigned char q57DC;  // 0x57DC
    unsigned char q57E0;  // 0x57E0
    unsigned char q57E4;  // 0x57E4
    unsigned char q57E8;  // 0x57E8
    void* q5800;  // 0x5800
    void* q5804;  // 0x5804
    unsigned char q5808;  // 0x5808
    unsigned char q580C;  // 0x580C
    unsigned char q5810;  // 0x5810
    unsigned char q5814;  // 0x5814
    unsigned char q5840;  // 0x5840
    void* q5844;  // 0x5844
    void* q5848;  // 0x5848
    unsigned char q584C;  // 0x584C
    void* q5860;  // 0x5860
    unsigned char q5864;  // 0x5864
    void* q5868;  // 0x5868
    unsigned char q586C;  // 0x586C
    unsigned char q5870;  // 0x5870
    unsigned char q5874;  // 0x5874
    unsigned int q5880;  // 0x5880
    int q5884;  // 0x5884
    unsigned char q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q58E8;  // 0x58E8
    unsigned char q58EC;  // 0x58EC
    unsigned char q58F0;  // 0x58F0
    unsigned char q58F4;  // 0x58F4
    void* q5900;  // 0x5900
    bool q5904;  // 0x5904
    void* q5908;  // 0x5908
    unsigned char q590C;  // 0x590C
    int q5910;  // 0x5910
    unsigned char q5914;  // 0x5914
    char q5920[4];  // 0x5920
    char q5924[4];  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned char q5934;  // 0x5934
    int q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned char q5940;  // 0x5940
    unsigned char q5944;  // 0x5944
    void* q5948;  // 0x5948
    unsigned char q594C;  // 0x594C
    unsigned char q5950;  // 0x5950
    unsigned char q5954;  // 0x5954
    bool q5960;  // 0x5960
    void* q5964;  // 0x5964
    char q5968;  // 0x5968
    unsigned char q596C;  // 0x596C
    AbstractClass* q5970;  // 0x5970
    unsigned char q5974;  // 0x5974
    unsigned char q5978;  // 0x5978
    unsigned char q597C;  // 0x597C
    unsigned char q5980;  // 0x5980
    unsigned int q5984;  // 0x5984
    unsigned int q5988;  // 0x5988
    unsigned char q598C;  // 0x598C
    unsigned int q5990;  // 0x5990
    unsigned int q5994;  // 0x5994
    unsigned char q5998;  // 0x5998
    unsigned char q599C;  // 0x599C
    unsigned char q6000;  // 0x6000
    bool q6004;  // 0x6004
    AbstractTypeClass* q6008;  // 0x6008
    unsigned char q600C;  // 0x600C
    unsigned int q6020;  // 0x6020
    AbstractClass* q6024;  // 0x6024
    unsigned int q6028;  // 0x6028
    unsigned char q602C;  // 0x602C
    unsigned char q6030;  // 0x6030
    unsigned int q6034;  // 0x6034
    double q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned char q6040;  // 0x6040
    void* q6044;  // 0x6044
    void* q6048;  // 0x6048
    unsigned char q604C;  // 0x604C
    void* q6060;  // 0x6060
    unsigned char q6064;  // 0x6064
    unsigned char q6068;  // 0x6068
    void* q6080;  // 0x6080
    unsigned char q6084;  // 0x6084
    unsigned char q6088;  // 0x6088
    void* q6120;  // 0x6120
    unsigned char q6124;  // 0x6124
    unsigned char q6128;  // 0x6128
    unsigned int q6144;  // 0x6144
    unsigned int q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned char q6150;  // 0x6150
    unsigned char q6154;  // 0x6154
    double q6160;  // 0x6160
    unsigned int q6164;  // 0x6164
    unsigned char q6168;  // 0x6168
    unsigned char q6170;  // 0x6170
    unsigned char q6174;  // 0x6174
    int q6180;  // 0x6180
    bool q6184;  // 0x6184
    void* q6188;  // 0x6188
    unsigned char q618C;  // 0x618C
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned char q6200;  // 0x6200
    unsigned char q6204;  // 0x6204
    unsigned int q6208;  // 0x6208
    unsigned char q620C;  // 0x620C
    unsigned char q6210;  // 0x6210
    double q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    void* q6220;  // 0x6220
    unsigned char q6224;  // 0x6224
    unsigned char q6228;  // 0x6228
    unsigned char q6230;  // 0x6230
    unsigned char q6234;  // 0x6234
    unsigned int q6240;  // 0x6240
    unsigned int q6244;  // 0x6244
    unsigned int q6248;  // 0x6248
    unsigned char q624C;  // 0x624C
    unsigned int q6258;  // 0x6258
    unsigned char q625C;  // 0x625C
    double q6260;  // 0x6260
    char q6264[4];  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    char q6290[4];  // 0x6290
    char q6294[4];  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q6320;  // 0x6320
    unsigned char q6324;  // 0x6324
    unsigned int q6400;  // 0x6400
    unsigned char q6404;  // 0x6404
    Coord* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned int q6418;  // 0x6418
    unsigned char q641C;  // 0x641C
    unsigned char q6434;  // 0x6434
    unsigned int q6438;  // 0x6438
    unsigned char q643C;  // 0x643C
    unsigned int q6440;  // 0x6440
    unsigned char q6444;  // 0x6444
    unsigned char q6450;  // 0x6450
    unsigned int q6454;  // 0x6454
    unsigned char q6458;  // 0x6458
    unsigned int q6464;  // 0x6464
    unsigned char q6468;  // 0x6468
    unsigned char q646C;  // 0x646C
    unsigned int q6488;  // 0x6488
    unsigned char q648C;  // 0x648C
    unsigned int q6500;  // 0x6500
    char q6504[4];  // 0x6504
    unsigned char q6508;  // 0x6508
    unsigned int q6514;  // 0x6514
    unsigned int q6518;  // 0x6518
    unsigned char q651C;  // 0x651C
    unsigned int q6520;  // 0x6520
    unsigned char q6524;  // 0x6524
    bool q6528;  // 0x6528
    unsigned char q652C;  // 0x652C
    unsigned int q6530;  // 0x6530
    unsigned int q6534;  // 0x6534
    unsigned char q6538;  // 0x6538
    unsigned int q6544;  // 0x6544
    unsigned int q6548;  // 0x6548
    unsigned char q654C;  // 0x654C
    char q6550[4];  // 0x6550
    unsigned char q6554;  // 0x6554
    unsigned int q7000;  // 0x7000
    unsigned char q7004;  // 0x7004
    unsigned char q7008;  // 0x7008
    unsigned int q7124;  // 0x7124
    unsigned char q7128;  // 0x7128
    unsigned char q712C;  // 0x712C
    unsigned int ArrayIndex;
    unsigned int q16C6;
    unsigned int q1703;
    unsigned int q5B84;
    unsigned int q5C42;
    unsigned int u32_5D00;
// --- flat members (END) ---
    InfantryClass * ConstructInfantry(AbstractClass * ppv);
    InfantryTypeClass * * Constructor(ObjectClass * aP1);
    InfantryTypeClass * ddtor(char a2);
    WeaponTypeClass * * Find();
    int * GetDimensions(int a1);
    int CreateInfantry(short * a2, AbstractClass * ppv);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGameplayValue();
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadFromINI(unsigned char *** a2);
    int PowerDrainUpdate(int * a2);
    int StubReturnFalse();
    int j__do_always_noconv_codecvt_base_std__MBE_NXZ_19();
    unsigned int * ClampToGroundHeight(unsigned int * a1, int * a2);
    unsigned int * Constructor_523980(ObjectTypeClass * aP1);
    unsigned int * CopyDataArray(DynamicVector * aP1);
    unsigned int * GetDefaultDimensions(unsigned int * a1);
};

} // namespace gamemd
