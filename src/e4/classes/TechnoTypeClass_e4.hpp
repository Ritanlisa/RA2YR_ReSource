// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TechnoTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int alignmentPadding_3;  // 0x11
    unsigned int abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    unsigned int NeedsSaveOrLink;  // 0x20
    int BarrelVoxel;  // 0x24
    int TargetEffectivenessCoefficient;  // 0x28
    bool q02B;  // 0x2B
    int ChargerBarrels_0x12;  // 0x2C
    int TargetSpecialThreatCoefficient;  // 0x30
    int alignmentPadding;  // 0x33
    void* q034;  // 0x34
    int TargetStrengthCoefficient;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    void* TargetDistanceCoefficient;  // 0x40
    bool q042;  // 0x42
    int q044;  // 0x44
    void* q046;  // 0x46
    unsigned int u32_48;  // 0x48
    bool q049;  // 0x49
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int SlowdownDistance;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned char q05D;  // 0x5D
    unsigned int UIName;  // 0x60
    char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    void* q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned int q094;  // 0x94
    int tail_95;  // 0x95
    unsigned int u32_98;  // 0x98
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    SHPStruct* Image;  // 0xA4
    unsigned char u8_A5;  // 0xA5
    unsigned char u8_A6;  // 0xA6
    unsigned char u8_A7;  // 0xA7
    bool ImageAllocated;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    SHPStruct* AlphaImage;  // 0xAC
    unsigned char u8_AD;  // 0xAD
    unsigned char u8_AE;  // 0xAE
    unsigned char u8_AF;  // 0xAF
    char MainVoxel[4];  // 0xB0
    unsigned char u8_B1;  // 0xB1
    unsigned char u8_B2;  // 0xB2
    unsigned char u8_B3;  // 0xB3
    char TurretVoxel[4];  // 0xB4
    char q0B8[4];  // 0xB8
    unsigned char q0B9;  // 0xB9
    char ChargerTurrets[72];  // 0xBC
    AbstractClass* q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    void* q0D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    void* q0E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    unsigned int ;  // 0xF0
    unsigned char u8_F1;  // 0xF1
    unsigned char u8_F2;  // 0xF2
    unsigned char u8_F3;  // 0xF3
    void* q0F4;  // 0xF4
    unsigned char u8_F5;  // 0xF5
    unsigned char u8_F6;  // 0xF6
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    char q100;  // 0x100
    char ChargerBarrels[72];  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    DynamicVector* q110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int u32_138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    bool NoSpawnAlt;  // 0x14C
    unsigned char q14D;  // 0x14D
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int u32_158;  // 0x158
    unsigned int u32_15C;  // 0x15C
    int q160;  // 0x160
    unsigned int q162;  // 0x162
    unsigned int q164;  // 0x164
    bool q168;  // 0x168
    bool q16B;  // 0x16B
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
    unsigned int u32_190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char q19D;  // 0x19D
    unsigned int u32_1A0;  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int u32_1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned int u32_1B8;  // 0x1B8
    unsigned char q1B9;  // 0x1B9
    unsigned int u32_1BC;  // 0x1BC
    unsigned int u32_1C0;  // 0x1C0
    unsigned int u32_1C4;  // 0x1C4
    unsigned int u32_1C8;  // 0x1C8
    unsigned int u32_1CC;  // 0x1CC
    unsigned int u32_1D0;  // 0x1D0
    AbstractTypeClass* q1D4;  // 0x1D4
    unsigned int u32_1D8;  // 0x1D8
    unsigned int u32_1DC;  // 0x1DC
    AbstractTypeClass* q1E0;  // 0x1E0
    unsigned int u32_1E4;  // 0x1E4
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
    unsigned int u32_24C;  // 0x24C
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    SomeVoxelCache* q25C;  // 0x25C
    char q260[4];  // 0x260
    char q264[4];  // 0x264
    unsigned int q268;  // 0x268
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q270;  // 0x270
    SomeVoxelCache* q274;  // 0x274
    char q278[4];  // 0x278
    unsigned int u32_27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    char q28C[4];  // 0x28C
    unsigned char q290;  // 0x290
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
    unsigned int u32_2B2;  // 0x2B2
    int sight;  // 0x2B4
    unsigned int u32_2B6;  // 0x2B6
    int cost;  // 0x2B8
    unsigned int u32_2BA;  // 0x2BA
    int strength;  // 0x2BC
    unsigned int u16_2BE;  // 0x2BE
    int armor;  // 0x2C0
    int techLevel;  // 0x2C4
    int pipScale;  // 0x2C8
    float speed;  // 0x2CC
    float speedType;  // 0x2D0
    int threatPosed;  // 0x2D4
    int threatAvoidValue;  // 0x2D8
    unsigned int u32_2DC;  // 0x2DC
    int cloakRadius;  // 0x2E0
    bool trainable;  // 0x2E4
    int buildLimit;  // 0x2E8
    unsigned int u32_2EC;  // 0x2EC
    double q2F0;  // 0x2F0
    unsigned int u32_2F4;  // 0x2F4
    int q2F8;  // 0x2F8
    unsigned int q2FC;  // 0x2FC
    double unknown_double_300;  // 0x300
    unsigned int q304;  // 0x304
    double AccelerationFactor;  // 0x308
    unsigned int q30A;  // 0x30A
    unsigned int ;  // 0x30C
    int CloakingSpeed;  // 0x310
    unsigned char DebrisTypes;  // 0x314
    CampaignClass* VoxelAnimList_Items;  // 0x318
    unsigned int VoxelAnimList_Capacity;  // 0x31C
    unsigned int q320;  // 0x320
    unsigned int VoxelAnimList_FlagByte;  // 0x321
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char DebrisMaximums;  // 0x330
    CampaignClass* IntList_A_Items;  // 0x334
    unsigned int IntList_A_Capacity;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned int IntList_A_FlagByte;  // 0x33D
    unsigned char q340;  // 0x340
    unsigned int q344;  // 0x344
    unsigned int q348;  // 0x348
    char Locomotor[16];  // 0x34C
    unsigned int u32_350;  // 0x350
    unsigned int q354;  // 0x354
    unsigned char q358;  // 0x358
    unsigned int q35C;  // 0x35C
    double unknown_double_360;  // 0x360
    unsigned char q364;  // 0x364
    bool q366;  // 0x366
    double unknown_double_368;  // 0x368
    unsigned char q36C;  // 0x36C
    double Weight;  // 0x370
    unsigned int ;  // 0x374
    double PhysicalSize;  // 0x378
    unsigned int u32_37C;  // 0x37C
    double Size;  // 0x380
    unsigned int ;  // 0x384
    double SizeLimit;  // 0x388
    void* q38C;  // 0x38C
    bool HoverAttack;  // 0x390
    unsigned char q391;  // 0x391
    int VHPScan;  // 0x394
    int unknown_int_398;  // 0x398
    unsigned int q39C;  // 0x39C
    double RollAngle;  // 0x3A0
    unsigned int u32_3A4;  // 0x3A4
    double PitchSpeed;  // 0x3A8
    unsigned int ;  // 0x3AC
    double PitchAngle;  // 0x3B0
    unsigned int u32_3B4;  // 0x3B4
    unsigned int q3B7;  // 0x3B7
    int BuildLimit;  // 0x3B8
    unsigned int Category;  // 0x3BC
    unsigned int unknown_3C0;  // 0x3C0
    unsigned int q3C4;  // 0x3C4
    double DeployTime;  // 0x3C8
    unsigned int u32_3CC;  // 0x3CC
    int FireAngle;  // 0x3D0
    char PipScale[4];  // 0x3D4
    unsigned char q3D7;  // 0x3D7
    bool PipsDrawForAll;  // 0x3D8
    unsigned char q3DB;  // 0x3DB
    int LeptonMindControlOffset;  // 0x3DC
    int PixelSelectionBracketDelta;  // 0x3E0
    int PipWrap;  // 0x3E4
    unsigned char Dock;  // 0x3E8
    CampaignClass* BuildingTypeList_Items;  // 0x3EC
    unsigned int BuildingTypeList_Capacity;  // 0x3F0
    unsigned int BuildingTypeList_FlagByte;  // 0x3F5
    unsigned int u32_3F8;  // 0x3F8
    unsigned int u32_3FC;  // 0x3FC
    unsigned int q400;  // 0x400
    unsigned int DeploysInto;  // 0x404
    unsigned int UndeploysInto;  // 0x408
    char PowersUnit[4];  // 0x40C
    bool PoweredUnit;  // 0x410
    unsigned char q411;  // 0x411
    unsigned char VoiceSelect;  // 0x414
    CampaignClass* IntList_B_Items;  // 0x418
    unsigned int IntList_B_Capacity;  // 0x41C
    unsigned char q420;  // 0x420
    unsigned int IntList_B_FlagByte;  // 0x421
    TechnoTypeClass * ptr_424;  // 0x424
    unsigned int q428;  // 0x428
    HouseClass* q42C;  // 0x42C
    unsigned char VoiceSelectEnslaved;  // 0x430
    CampaignClass* IntList_C_Items;  // 0x434
    unsigned int IntList_C_Capacity;  // 0x438
    void* q43C;  // 0x43C
    unsigned int IntList_C_FlagByte;  // 0x43D
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    unsigned char VoiceSelectDeactivated;  // 0x44C
    CampaignClass* IntList_D_Items;  // 0x450
    unsigned int IntList_D_Capacity;  // 0x454
    void* q458;  // 0x458
    unsigned int IntList_D_FlagByte;  // 0x459
    unsigned char q45C;  // 0x45C
    unsigned int q460;  // 0x460
    unsigned int q464;  // 0x464
    unsigned char VoiceMove;  // 0x468
    CampaignClass* IntList_E_Items;  // 0x46C
    unsigned int IntList_E_Capacity;  // 0x470
    void* q474;  // 0x474
    unsigned int IntList_E_FlagByte;  // 0x475
    unsigned char q478;  // 0x478
    unsigned int u32_47C;  // 0x47C
    AbstractTypeClass* q480;  // 0x480
    unsigned char VoiceAttack;  // 0x484
    unsigned int q487;  // 0x487
    CampaignClass* IntList_F_Items;  // 0x488
    unsigned int IntList_F_Capacity;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned int IntList_F_FlagByte;  // 0x491
    TechnoTypeClass * ptr_494;  // 0x494
    unsigned int ;  // 0x498
    void* q49C;  // 0x49C
    unsigned int q49D;  // 0x49D
    unsigned char VoiceSpecialAttack;  // 0x4A0
    CampaignClass* IntList_G_Items;  // 0x4A4
    unsigned int IntList_G_Capacity;  // 0x4A8
    unsigned char q4AC;  // 0x4AC
    unsigned int IntList_G_FlagByte;  // 0x4AD
    void* q4B0;  // 0x4B0
    unsigned int ;  // 0x4B4
    unsigned char q4B8;  // 0x4B8
    unsigned char VoiceDie;  // 0x4BC
    CampaignClass* IntList_H_Items;  // 0x4C0
    unsigned int IntList_H_Capacity;  // 0x4C4
    unsigned char q4C8;  // 0x4C8
    unsigned int IntList_H_FlagByte;  // 0x4C9
    void* q4CC;  // 0x4CC
    unsigned int ;  // 0x4D0
    unsigned char q4D4;  // 0x4D4
    unsigned char VoiceFeedback;  // 0x4D8
    CampaignClass* VoiceFeedback_Items;  // 0x4DC
    unsigned int VoiceFeedback_Capacity;  // 0x4E0
    unsigned int VoiceFeedback_FlagByte;  // 0x4E5
    unsigned int u32_4E8;  // 0x4E8
    unsigned int u32_4EC;  // 0x4EC
    unsigned char MoveSound;  // 0x4F4
    void* q4F8;  // 0x4F8
    unsigned char q4FC;  // 0x4FC
    int q500;  // 0x500
    char q504;  // 0x504
    int q508;  // 0x508
    void* q50C;  // 0x50C
    unsigned char DieSound;  // 0x510
    int q514;  // 0x514
    unsigned int q518;  // 0x518
    void* q51C;  // 0x51C
    int q520;  // 0x520
    int q524;  // 0x524
    unsigned char q528;  // 0x528
    unsigned int q52B;  // 0x52B
    int AuxSound1;  // 0x52C
    unsigned int q52D;  // 0x52D
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
    unsigned char q5C8;  // 0x5C8
    void* q5CC;  // 0x5CC
    unsigned char q5D0;  // 0x5D0
    void* q5D4;  // 0x5D4
    unsigned char q5D8;  // 0x5D8
    int Passengers;  // 0x5E0
    bool OpenTopped;  // 0x5E4
    unsigned char q5E5;  // 0x5E5
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
    unsigned int AirstrikeTeamType;  // 0x624
    char EliteAirstrikeTeamType[4];  // 0x628
    int AirstrikeRechargeTime;  // 0x62C
    int EliteAirstrikeRechargeTime;  // 0x630
    int TechLevel;  // 0x634
    unsigned char Prerequisite;  // 0x638
    unsigned int q640;  // 0x640
    unsigned int q644;  // 0x644
    unsigned int q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned char PrerequisiteOverride;  // 0x654
    unsigned int q658;  // 0x658
    AbstractClass* q65C;  // 0x65C
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
    unsigned char q6B2;  // 0x6B2
    int ReadinessReductionMultiplier;  // 0x6B4
    unsigned int UnloadingClass;  // 0x6B8
    char DeployingAnim[4];  // 0x6BC
    bool AttackFriendlies;  // 0x6C0
    bool AttackCursorOnFriendlies;  // 0x6C1
    unsigned char q6C2;  // 0x6C2
    int UndeployDelay;  // 0x6C4
    void* PreventAttackMove;  // 0x6C8
    unsigned char q6C9;  // 0x6C9
    unsigned int OwnerFlags;  // 0x6CC
    int AIBasePlanningSide;  // 0x6D0
    bool StupidHunt;  // 0x6D4
    bool AllowedToStartInMultiplayer;  // 0x6D5
    char CameoFile;  // 0x6D6
    AbstractClass* q6D8;  // 0x6D8
    unsigned char q6DC;  // 0x6DC
    unsigned int q6E0;  // 0x6E0
    unsigned int q6E4;  // 0x6E4
    unsigned int q6E8;  // 0x6E8
    unsigned int q6EC;  // 0x6EC
    bool q6EE;  // 0x6EE
    unsigned char q6EF;  // 0x6EF
    char Cameo[4];  // 0x6F0
    bool CameoAllocated;  // 0x6F4
    char AltCameoFile;  // 0x6F5
    unsigned int q6F8;  // 0x6F8
    AbstractClass* q6FC;  // 0x6FC
    int q700;  // 0x700
    double SpecialThreatValue;  // 0x704
    unsigned int q708;  // 0x708
    unsigned int q70C;  // 0x70C
    bool q70D;  // 0x70D
    unsigned char q70E;  // 0x70E
    char AltCameo[4];  // 0x710
    double MyEffectivenessCoefficient;  // 0x712
    bool AltCameoAllocated;  // 0x714
    unsigned char q715;  // 0x715
    int RotCount;  // 0x718
    int ROT;  // 0x71C
    int TurretOffset;  // 0x720
    bool CanBeHidden;  // 0x724
    unsigned char q725;  // 0x725
    int Points2;  // 0x728
    unsigned char Explosion;  // 0x72C
    void* q734;  // 0x734
    unsigned char q738;  // 0x738
    unsigned int u32_73C;  // 0x73C
    bool q740;  // 0x740
    double q744;  // 0x744
    unsigned char DestroyAnim;  // 0x748
    unsigned char q74C;  // 0x74C
    unsigned char q750;  // 0x750
    double ThreatAvoidanceCoefficient;  // 0x752
    TechnoTypeClass * ptr_758;  // 0x758
    void* q75C;  // 0x75C
    int q760;  // 0x760
    char NaturalParticleSystem[4];  // 0x764
    char NaturalParticleSystemLocation[12];  // 0x768
    unsigned int u32_76C;  // 0x76C
    TechnoTypeClass * ptr_770;  // 0x770
    char RefinerySmokeParticleSystem[4];  // 0x774
    unsigned char DamageParticleSystems;  // 0x778
    void* q77C;  // 0x77C
    void* q780;  // 0x780
    int q784;  // 0x784
    unsigned int VoxelAnimList_Embed;  // 0x788
    unsigned char q78C;  // 0x78C
    unsigned int q790;  // 0x790
    unsigned char DestroyParticleSystems;  // 0x794
    unsigned char q798;  // 0x798
    void* q79C;  // 0x79C
    unsigned int q7A0;  // 0x7A0
    unsigned int q7A4;  // 0x7A4
    void* q7A8;  // 0x7A8
    unsigned char q7AC;  // 0x7AC
    char DamageSmokeOffset[12];  // 0x7B0
    unsigned int u32_7B4;  // 0x7B4
    unsigned int u32_7B8;  // 0x7B8
    bool DamSmkOffScrnRel;  // 0x7BC
    unsigned char q7BD;  // 0x7BD
    char DestroySmokeOffset[12];  // 0x7C0
    unsigned int q7C4;  // 0x7C4
    unsigned int u32_7C8;  // 0x7C8
    char RefinerySmokeOffsetOne[12];  // 0x7CC
    unsigned int u32_7D0;  // 0x7D0
    unsigned int u32_7D4;  // 0x7D4
    char RefinerySmokeOffsetTwo[12];  // 0x7D8
    unsigned int u32_7DC;  // 0x7DC
    char RefinerySmokeOffsetThree[12];  // 0x7E4
    unsigned int u32_7E8;  // 0x7E8
    unsigned int u32_7EC;  // 0x7EC
    char RefinerySmokeOffsetFour[12];  // 0x7F0
    unsigned int u32_7F4;  // 0x7F4
    unsigned int u32_7F8;  // 0x7F8
    int ShadowIndex;  // 0x7FC
    int Storage;  // 0x800
    bool TurretNotExportedOnGround;  // 0x804
    bool Gunner;  // 0x805
    bool HasTurretTooltips;  // 0x806
    int TurretCount;  // 0x808
    int WeaponCount;  // 0x80C
    bool IsChargeTurret;  // 0x810
    unsigned char q811;  // 0x811
    int TurretWeapon;  // 0x814
    unsigned int IntList_A_Embed;  // 0x816
    bool q818;  // 0x818
    unsigned int q820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    char q834[4];  // 0x834
    unsigned int q840;  // 0x840
    char q844[4];  // 0x844
    unsigned int q848;  // 0x848
    void* q850;  // 0x850
    unsigned int q854;  // 0x854
    unsigned int u32_858;  // 0x858
    unsigned int u32_85C;  // 0x85C
    unsigned int q860;  // 0x860
    double q864;  // 0x864
    unsigned char q868;  // 0x868
    unsigned char q86C;  // 0x86C
    bool q870;  // 0x870
    unsigned char q874;  // 0x874
    unsigned char q878;  // 0x878
    double q880;  // 0x880
    void* q884;  // 0x884
    double q888;  // 0x888
    unsigned char q88C;  // 0x88C
    void* Weapon;  // 0x898
    WeaponTypeClass* q89C;  // 0x89C
    unsigned char q8A0;  // 0x8A0
    unsigned char q8A4;  // 0x8A4
    unsigned char q8A8;  // 0x8A8
    WeaponTypeClass* q8AC;  // 0x8AC
    unsigned char q8B0;  // 0x8B0
    ObjectTypeClass* q8B4;  // 0x8B4
    WeaponTypeClass* q8B8;  // 0x8B8
    WeaponTypeClass* q8C4;  // 0x8C4
    WeaponTypeClass* q8C8;  // 0x8C8
    unsigned char q8CC;  // 0x8CC
    unsigned int u32_8D0;  // 0x8D0
    void* q8E4;  // 0x8E4
    unsigned char q8E8;  // 0x8E8
    void* q900;  // 0x900
    double q904;  // 0x904
    void* q908;  // 0x908
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
    void* q940;  // 0x940
    double q944;  // 0x944
    unsigned int q948;  // 0x948
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
    char EliteWeapon[504];  // 0xA94
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
    unsigned char qCA3;  // 0xCA3
    char TurretAnimData[16];  // 0xCA4
    unsigned int u32_CA8;  // 0xCA8
    unsigned int u32_CAC;  // 0xCAC
    unsigned int u32_CB0;  // 0xCB0
    bool unknown_bool_CB4;  // 0xCB4
    unsigned char qCB5;  // 0xCB5
    char BarrelAnimData[16];  // 0xCB8
    unsigned int u32_CBC;  // 0xCBC
    unsigned int u32_CC0;  // 0xCC0
    unsigned int u32_CC4;  // 0xCC4
    bool unknown_bool_CC8;  // 0xCC8
    unsigned char qCC9;  // 0xCC9
    unsigned int qCCB;  // 0xCCB
    unsigned int qCCC;  // 0xCCC
    unsigned int qCCD;  // 0xCCD
    bool qCCE;  // 0xCCE
    unsigned int u32_CCF;  // 0xCCF
    bool Naval;  // 0xCD1
    bool Remapable;  // 0xCD2
    bool Cloakable;  // 0xCD3
    unsigned char qCD4;  // 0xCD4
    unsigned int qCD5;  // 0xCD5
    unsigned int u32_CD8;  // 0xCD8
    unsigned char qCD9;  // 0xCD9
    unsigned int u32_D0C;  // 0xD0C
    unsigned int u32_D10;  // 0xD10
    unsigned int qD14;  // 0xD14
    unsigned int qD15;  // 0xD15
    int SlavesNumber;  // 0xD18
    int SlaveRegenRate;  // 0xD1C
    unsigned char qD20;  // 0xD20
    unsigned int qD21;  // 0xD21
    unsigned int qD22;  // 0xD22
    unsigned int qD23;  // 0xD23
    unsigned int qD24;  // 0xD24
    unsigned int qD25;  // 0xD25
    unsigned int qD26;  // 0xD26
    unsigned int qD27;  // 0xD27
    unsigned int qD28;  // 0xD28
    unsigned int qD29;  // 0xD29
    unsigned int qD2A;  // 0xD2A
    unsigned int qD2B;  // 0xD2B
    unsigned int qD2C;  // 0xD2C
    unsigned int qD2D;  // 0xD2D
    unsigned int qD2F;  // 0xD2F
    unsigned int qD31;  // 0xD31
    unsigned int qD32;  // 0xD32
    unsigned int qD33;  // 0xD33
    unsigned int qD34;  // 0xD34
    unsigned int qD37;  // 0xD37
    void* qD38;  // 0xD38
    unsigned int qD39;  // 0xD39
    unsigned int qD3A;  // 0xD3A
    unsigned int qD3C;  // 0xD3C
    bool qD3D;  // 0xD3D
    bool BalloonHover;  // 0xD3E
    int SuppressionThreshold;  // 0xD40
    int JumpjetTurnRate;  // 0xD44
    int JumpjetSpeed;  // 0xD48
    float JumpjetClimb;  // 0xD4C
    float JumpjetCrash;  // 0xD50
    unsigned char qD54;  // 0xD54
    float JumpjetAccel;  // 0xD58
    float JumpjetWobbles;  // 0xD5C
    WeaponTypeClass* qD60;  // 0xD60
    int JumpjetDeviation;  // 0xD64
    unsigned char qD68;  // 0xD68
    unsigned int qD69;  // 0xD69
    unsigned int qD6A;  // 0xD6A
    WeaponTypeClass* qD6C;  // 0xD6C
    unsigned char qD70;  // 0xD70
    unsigned int RequiredHouses;  // 0xD74
    unsigned int ForbiddenHouses;  // 0xD78
    unsigned int SecretHouses;  // 0xD7C
    WeaponTypeClass* qD80;  // 0xD80
    char SecondSpawnOffset[12];  // 0xD84
    unsigned int u32_D88;  // 0xD88
    unsigned int qD8C;  // 0xD8C
    unsigned char qD90;  // 0xD90
    bool JumpJet;  // 0xD94
    bool Crashable;  // 0xD95
    unsigned char qD96;  // 0xD96
    unsigned int qD99;  // 0xD99
    unsigned int qD9A;  // 0xD9A
    unsigned int qD9B;  // 0xD9B
    char qD9C[4];  // 0xD9C
    unsigned int qD9D;  // 0xD9D
    int ZFudgeBridge;  // 0xDA0
    char PaletteFile;  // 0xDA4
    unsigned int u32_DA8;  // 0xDA8
    unsigned int qDAC;  // 0xDAC
    WeaponTypeClass* qDB0;  // 0xDB0
    unsigned int u32_DB4;  // 0xDB4
    unsigned int u32_DB8;  // 0xDB8
    unsigned int qDBC;  // 0xDBC
    unsigned int qDBD;  // 0xDBD
    unsigned int qDBE;  // 0xDBE
    bool qDBF;  // 0xDBF
    WeaponTypeClass* qDC0;  // 0xDC0
    void* Palette;  // 0xDC4
    WeaponTypeClass* qDC8;  // 0xDC8
    WeaponTypeClass* qDCC;  // 0xDCC
    unsigned char qDD0;  // 0xDD0
    void* qDD4;  // 0xDD4
    unsigned char qDD8;  // 0xDD8
    unsigned int u32_DF0;  // 0xDF0
    unsigned int qDF4;  // 0xDF4
    unsigned int IsClean;
    unsigned int __pad_0;
    unsigned int abstractFlags0;
    unsigned int abstractFlags1;
    unsigned int abstractFlags2;
    unsigned int abstractFlags3;
    unsigned int abstractFlags4;
    unsigned int abstractFlags5;
    unsigned int abstractFlags6;
    unsigned int abstractFlags7;
    unsigned int abstractFlags8;
    unsigned int abstractFlags9;
    unsigned int q16C2;
    unsigned int q1884;
    unsigned int u32_1A00;
    unsigned int u32_8588;
    unsigned int u32_8589;
    unsigned int u32_85C0;
    unsigned int u32_85C1;
    unsigned int u32_85C2;
    unsigned int uniqueId0;
    unsigned int uniqueId5;
    unsigned int uniqueId6;
    unsigned int uniqueId7;
    unsigned int uniqueId8;
    unsigned int uniqueId9;
    unsigned int vtable48;
    unsigned int vtable49;
    unsigned int q2588;
    unsigned int q25C6;
    unsigned int q25C7;
    unsigned int q25C8;
    unsigned int q25C9;
    unsigned int q0F0;
    unsigned int q30C;
    unsigned int q374;
    unsigned int q384;
    unsigned int q3AC;
    unsigned int q498;
    unsigned int q4B4;
    unsigned int q4D0;
    unsigned int weapon20;
    unsigned int weapon21;
    unsigned int ammo0;
    unsigned int ammo1;
    unsigned int ammo2;
    unsigned int ammo3;
    unsigned int eliteWeapon28;
    unsigned int eliteWeapon29;
    unsigned int guardRange8;
    unsigned int guardRange9;
    unsigned int sight6;
    unsigned int weapon22;
    unsigned int weapon23;
    unsigned int weapon24;
    unsigned int weapon25;
// --- flat members (END) ---
    AbstractClass * * Construct(ObjectTypeClass * aP1);
    AbstractClass * * GetByTypeAndIndex(int a1, int a2);
    DynamicVectorClass_flat * * SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    TechnoTypeClass * ddtor(char a2);
    VectorClass_flat * Constructor_1(ObjectTypeClass * aP1);
    bool CanAttackMove_IgnoreWeapon();
    char RemoveItem(int a2);
    char vt_entry_A0();
    double ComputeBuildTime();
    int ComputeValue(void * a2, float a3);
    int ComputeValueSimple(float * a2);
    int DTOR();
    int Dispatch(TechnoTypeClass * aP1);
    int GetThreatMultiplier(TechnoTypeClass * aP1);
    int SaveLoadDataArray(TechnoTypeClass * aP1);
    int SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3);
    unsigned int * Constructor();
    unsigned int * Constructor_0(ObjectTypeClass * aP1);
    unsigned int * LoadBase(ObjectClass * aP1);
    void * ReadINI(char * Source, int a3);
    void* CanAttackMove_IgnoreWeapon_0();
    void* CanAttackMove_IgnoreWeapon_0_0();
    static double HasVoiceResponse(...);  // C2597 interim stub
};

} // namespace gamemd
