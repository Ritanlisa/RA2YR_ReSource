// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct UnitTypeClass;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct InfantryTypeClass;  // fix_fwd_type_supply
struct WarheadTypeClass;  // fix_fwd_type_supply
struct BulletTypeClass;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply

struct RulesClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    int DetailMinFrameRateNormal;  // 0x0
    int DetailMinFrameRateMovie;  // 0x4
    int DetailBufferZoneWidth;  // 0x8
    int AmmoCrateDamage;  // 0xC
    UnitTypeClass * LargeVisceroid;  // 0x10
    UnitTypeClass * SmallVisceroid;  // 0x14
    int AttackingAircraftSightRange;  // 0x18
    unsigned int Buildable;  // 0x1C
    double TunnelSpeed;  // 0x20
    double TiberiumHeal;  // 0x28
    int SelfHealInfantryFrames;  // 0x30
    int SelfHealInfantryAmount;  // 0x34
    int SelfHealUnitFrames;  // 0x38
    void * SelfHealUnitAmount;  // 0x3C
    bool FreeMCV;  // 0x40
    bool BerzerkAllowed;  // 0x41
    unsigned char __pad_042;  // 0x42
    char __pad_43[1];  // 0x43
    int PoseDir;  // 0x44
    int DeployDir;  // 0x48
    int FlashFrameTime;  // 0x4C
    int RadarCombatFlashTime;  // 0x50
    int MaxWaypointPathLength;  // 0x54
    void * RadarEventColorSpeed;  // 0x58
    void * RadarEventMinRadius;  // 0x5C
    float RadarEventSpeed;  // 0x60
    float RadarEventRotationSpeed;  // 0x64
    AnimTypeClass * DropPodPuff;  // 0x68
    AnimTypeClass * BarrelExplode_d;  // 0x6C
    unsigned int BarrelDebris;  // 0x70
    ParticleSystemTypeClass * BarrelParticle;  // 0x74
    AnimTypeClass * Wake;  // 0x78
    AnimTypeClass * NukeTakeOff;  // 0x7C
    AnimTypeClass * InfantryExplode;  // 0x80
    AnimTypeClass * FlamingInfantry;  // 0x84
    AnimTypeClass * InfantryHeadPop;  // 0x88
    AnimTypeClass * InfantryNuked;  // 0x8C
    AnimTypeClass * InfantryVirus;  // 0x90
    AnimTypeClass * Wake_d;  // 0x94
    AnimTypeClass * NukeTakeOff_d;  // 0x98
    AnimTypeClass * Behind;  // 0x9C
    int __pad_0A0;  // 0xA0
    char __pad_A4[4];  // 0xA4
    unsigned int u32_A8;  // 0xA8
    unsigned int q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    int align_BC;  // 0xBC
    double AITriggerSuccessWeightDelta;  // 0xC0
    double AITriggerFailureWeightDelta;  // 0xC8
    double AITriggerTrackRecordCoefficient;  // 0xD0
    void * MaximumQueuedObjects;  // 0xD8
    int AircraftFogReveal;  // 0xDC
    void * DigSound;  // 0xE0
    void * CreateUnitSound;  // 0xE4
    int CreateInfantrySound;  // 0xE8
    int CreateAircraftSound;  // 0xEC
    AnimTypeClass * BaseUnderAttackSound;  // 0xF0
    int GUIMainButtonSound;  // 0xF4
    void * GUIBuildSound;  // 0xF8
    void * GUITabSound;  // 0xFC
    int GUIOpenSound;  // 0x100
    void * GUICloseSound;  // 0x104
    int GUIMoveOutSound;  // 0x108
    int GUIMoveInSound;  // 0x10C
    int GUIScrollSound;  // 0x110
    int GUIComboOpenSound;  // 0x114
    int GUIComboCloseSound;  // 0x118
    char GUICheckboxSound[4];  // 0x11C
    void * ScoreAnimSound;  // 0x120
    int IFVTransformSound;  // 0x124
    int PsychicSensorDetectSound;  // 0x128
    char BuildingGarrisonedSound[4];  // 0x12C
    int BuildingAbandonedSound;  // 0x130
    int BuildingRepairedSound;  // 0x134
    int CheerSound;  // 0x138
    void * PlaceBeaconSound;  // 0x13C
    int DefaultChronoSound;  // 0x140
    int StartPlanningModeSound;  // 0x144
    int AddPlanningModeCommandSound;  // 0x148
    int ExecutePlanSound;  // 0x14C
    int EndPlanningModeSound;  // 0x150
    int CrateMoneySound;  // 0x154
    void * CrateRevealSound;  // 0x158
    void * CrateFireSound;  // 0x15C
    int CrateArmourSound;  // 0x160
    int CrateSpeedSound;  // 0x164
    int CrateUnitSound;  // 0x168
    char CratePromoteSound[4];  // 0x16C
    int ImpactWaterSound;  // 0x170
    int ImpactLandSound;  // 0x174
    int SinkingSound;  // 0x178
    int BombTickingSound;  // 0x17C
    int BombAttachSound;  // 0x180
    int YuriMindControlSound;  // 0x184
    int ChronoInSound;  // 0x188
    int ChronoOutSound;  // 0x18C
    int SpySatActivationSound;  // 0x190
    int SpySatDeactivationSound;  // 0x194
    int UpgradeVeteranSound;  // 0x198
    int UpgradeEliteSound;  // 0x19C
    int VoiceIFVRepair;  // 0x1A0
    int SlavesFreeSound;  // 0x1A4
    int SlaveMinerDeploySound;  // 0x1A8
    int SlaveMinerUndeploySound;  // 0x1AC
    int BunkerWallsUpSound;  // 0x1B0
    int BunkerWallsDownSound;  // 0x1B4
    int RepairBridgeSound;  // 0x1B8
    int PsychicDominatorActivateSound;  // 0x1BC
    int GeneticMutatorActivateSound;  // 0x1C0
    int PsychicRevealActivateSound;  // 0x1C4
    int MasterMindOverloadDeathSound;  // 0x1C8
    int AirstrikeAbortSound;  // 0x1CC
    int AirstrikeAttackVoice;  // 0x1D0
    int MindClearedSound;  // 0x1D4
    int EnterGrinderSound;  // 0x1D8
    int LeaveGrinderSound;  // 0x1DC
    int EnterBioReactorSound;  // 0x1E0
    int LeaveBioReactorSound;  // 0x1E4
    int ActivateSound;  // 0x1E8
    int DeactivateSound;  // 0x1EC
    int SpyPlaneCamera;  // 0x1F0
    int SpyPlaneCameraFrames;  // 0x1F4
    AnimTypeClass * Dig;  // 0x1F8
    AnimTypeClass * IonBlast;  // 0x1FC
    AnimTypeClass * IonBeam;  // 0x200
    void * DamageFireTypes;  // 0x204
    int ParadropRadius;  // 0x208
    double ZoomInFactor;  // 0x20C
    double ConditionRedSparkingProbability;  // 0x214
    double ConditionYellowSparkingProbability;  // 0x21C
    int TiberiumExplosionDamage;  // 0x224
    int TiberiumStrength;  // 0x228
    float MinLowPowerProductionSpeed;  // 0x22C
    float MaxLowPowerProductionSpeed;  // 0x230
    float LowPowerPenaltyModifier;  // 0x234
    float MultipleFactory;  // 0x238
    int MaximumCheerRate;  // 0x23C
    int __pad_240;  // 0x240
    char __pad_244[4];  // 0x244
    unsigned int u32_248;  // 0x248
    unsigned int u32_24C;  // 0x24C
    unsigned int u32_250;  // 0x250
    unsigned int u32_254;  // 0x254
    unsigned int u32_258;  // 0x258
    unsigned int u32_25C;  // 0x25C
    unsigned int u32_260;  // 0x260
    unsigned int u32_264;  // 0x264
    unsigned int u32_268;  // 0x268
    unsigned int u32_26C;  // 0x26C
    int u32_270;  // 0x270
    unsigned int u32_274;  // 0x274
    unsigned int u32_278;  // 0x278
    unsigned int u32_27C;  // 0x27C
    unsigned int u32_280;  // 0x280
    unsigned int u32_284;  // 0x284
    unsigned int WeatherConBolts[4];  // 0x288
    char __pad_298[4];  // 0x298
    unsigned int q29C;  // 0x29C
    unsigned int Stream_2A0;  // 0x2A0
    unsigned int u32_2A4;  // 0x2A4
    unsigned int u32_2A8;  // 0x2A8
    char __pad_2AC[1];  // 0x2AC
    unsigned char u8_2AD;  // 0x2AD
    char __pad_2AE[2];  // 0x2AE
    unsigned int u32_2B0;  // 0x2B0
    unsigned int TechnoTypeClass_2B4;  // 0x2B4
    char __pad_2B8[4];  // 0x2B8
    unsigned int Stream_2BC;  // 0x2BC
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2C4;  // 0x2C4
    char __pad_2C8[1];  // 0x2C8
    unsigned char u8_2C9;  // 0x2C9
    char __pad_2CA[2];  // 0x2CA
    unsigned int q2CC;  // 0x2CC
    unsigned int q2D0;  // 0x2D0
    char __pad_2D4[4];  // 0x2D4
    unsigned int Stream_2D8;  // 0x2D8
    unsigned int u32_2DC;  // 0x2DC
    unsigned int u32_2E0;  // 0x2E0
    char __pad_2E4[1];  // 0x2E4
    unsigned char u8_2E5;  // 0x2E5
    char __pad_2E6[2];  // 0x2E6
    unsigned int q2E8;  // 0x2E8
    unsigned int q2EC;  // 0x2EC
    char __pad_2F0[4];  // 0x2F0
    unsigned int q2F4;  // 0x2F4
    unsigned int q2F8;  // 0x2F8
    unsigned int u32_2FC;  // 0x2FC
    unsigned int u32_300;  // 0x300
    unsigned int u32_304;  // 0x304
    unsigned int u32_308;  // 0x308
    int u32_30C;  // 0x30C
    unsigned int u32_310;  // 0x310
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    unsigned int u32_31C;  // 0x31C
    unsigned int u32_320;  // 0x320
    unsigned int u32_324;  // 0x324
    unsigned int u32_328;  // 0x328
    unsigned int u32_32C;  // 0x32C
    unsigned int u32_330;  // 0x330
    unsigned int u32_334;  // 0x334
    unsigned int u32_338;  // 0x338
    unsigned int u32_33C;  // 0x33C
    unsigned int u32_340;  // 0x340
    unsigned int u32_344;  // 0x344
    unsigned int u32_348;  // 0x348
    unsigned int u32_34C;  // 0x34C
    unsigned int u32_350;  // 0x350
    unsigned int u32_354;  // 0x354
    unsigned int DynamicVector_358;  // 0x358
    unsigned int AbstractClass_35C;  // 0x35C
    unsigned int u32_360;  // 0x360
    char __pad_364[1];  // 0x364
    unsigned char u8_365;  // 0x365
    char __pad_366[2];  // 0x366
    unsigned int u32_368;  // 0x368
    unsigned int u32_36C;  // 0x36C
    char __pad_370[4];  // 0x370
    unsigned int DynamicVector_374;  // 0x374
    unsigned int AbstractClass_378;  // 0x378
    unsigned int u32_37C;  // 0x37C
    char __pad_380[1];  // 0x380
    unsigned char u8_381;  // 0x381
    char __pad_382[2];  // 0x382
    unsigned int u32_384;  // 0x384
    unsigned int u32_388;  // 0x388
    char __pad_38C[4];  // 0x38C
    unsigned int DynamicVector_390;  // 0x390
    unsigned int AbstractClass_394;  // 0x394
    unsigned int u32_398;  // 0x398
    char __pad_39C[1];  // 0x39C
    unsigned char u8_39D;  // 0x39D
    char __pad_39E[2];  // 0x39E
    int u32_3A0;  // 0x3A0
    unsigned int TechnoTypeClass_3A4;  // 0x3A4
    char __pad_3A8[4];  // 0x3A8
    unsigned int DynamicVector_3AC;  // 0x3AC
    unsigned int AbstractClass_3B0;  // 0x3B0
    unsigned int u32_3B4;  // 0x3B4
    char __pad_3B8[1];  // 0x3B8
    unsigned char u8_3B9;  // 0x3B9
    char __pad_3BA[2];  // 0x3BA
    int u32_3BC;  // 0x3BC
    unsigned int TechnoTypeClass_3C0;  // 0x3C0
    char __pad_3C4[4];  // 0x3C4
    unsigned int DynamicVector_3C8;  // 0x3C8
    unsigned int AbstractClass_3CC;  // 0x3CC
    unsigned int u32_3D0;  // 0x3D0
    char __pad_3D4[1];  // 0x3D4
    unsigned char u8_3D5;  // 0x3D5
    char __pad_3D6[2];  // 0x3D6
    int u32_3D8;  // 0x3D8
    unsigned int TechnoTypeClass_3DC;  // 0x3DC
    char __pad_3E0[4];  // 0x3E0
    unsigned int DynamicVector_3E4;  // 0x3E4
    unsigned int AbstractClass_3E8;  // 0x3E8
    unsigned int u32_3EC;  // 0x3EC
    char __pad_3F0[1];  // 0x3F0
    unsigned char u8_3F1;  // 0x3F1
    char __pad_3F2[2];  // 0x3F2
    int u32_3F4;  // 0x3F4
    unsigned int q3F8;  // 0x3F8
    char __pad_3FC[4];  // 0x3FC
    unsigned int u32_400;  // 0x400
    unsigned int u32_404;  // 0x404
    unsigned int u32_408;  // 0x408
    unsigned char TurnRate;  // 0x40C
    char __pad_40D[3];  // 0x40D
    unsigned char Speed;  // 0x410
    char __pad_411[3];  // 0x411
    unsigned char __pad_414;  // 0x414
    char __pad_415[3];  // 0x415
    int q418;  // 0x418
    unsigned int q41C;  // 0x41C
    int Climb;  // 0x420
    unsigned char __pad_424;  // 0x424
    char __pad_425[3];  // 0x425
    int q428;  // 0x428
    unsigned int q42C;  // 0x42C
    int q430;  // 0x430
    int q434;  // 0x434
    unsigned char WobbleDeviation;  // 0x438
    char __pad_439[3];  // 0x439
    void* __pad_43C;  // 0x43C
    char __pad_440[4];  // 0x440
    unsigned int u32_444;  // 0x444
    char __pad_448[1];  // 0x448
    unsigned char u8_449;  // 0x449
    char __pad_44A[2];  // 0x44A
    unsigned int u32_44C;  // 0x44C
    unsigned int u32_450;  // 0x450
    char __pad_454[4];  // 0x454
    unsigned int DynamicVector_458;  // 0x458
    unsigned int u32_45C;  // 0x45C
    unsigned int u32_460;  // 0x460
    char __pad_464[1];  // 0x464
    unsigned char u8_465;  // 0x465
    char __pad_466[2];  // 0x466
    unsigned int u32_468;  // 0x468
    unsigned int u32_46C;  // 0x46C
    char __pad_470[4];  // 0x470
    unsigned int DynamicVector_474;  // 0x474
    unsigned int u32_478;  // 0x478
    unsigned int u32_47C;  // 0x47C
    char __pad_480[1];  // 0x480
    unsigned char u8_481;  // 0x481
    char __pad_482[2];  // 0x482
    unsigned int u32_484;  // 0x484
    unsigned int u32_488;  // 0x488
    char __pad_48C[4];  // 0x48C
    unsigned int u32_490;  // 0x490
    unsigned int u32_494;  // 0x494
    unsigned int u32_498;  // 0x498
    int u32_49C;  // 0x49C
    int u32_4A0;  // 0x4A0
    int u32_4A4;  // 0x4A4
    int u32_4A8;  // 0x4A8
    int u32_4AC;  // 0x4AC
    int u32_4B0;  // 0x4B0
    int u32_4B4;  // 0x4B4
    int u32_4B8;  // 0x4B8
    int u32_4BC;  // 0x4BC
    uint32_t u32_4C0;  // 0x4C0
    int u32_4C4;  // 0x4C4
    uint32_t u32_4C8;  // 0x4C8
    int u32_4CC;  // 0x4CC
    int u32_4D0;  // 0x4D0
    unsigned int u32_4D4;  // 0x4D4
    int u32_4D8;  // 0x4D8
    unsigned char u8_4DC;  // 0x4DC
    char __pad_4DD[3];  // 0x4DD
    unsigned int u32_4E0;  // 0x4E0
    unsigned int TechnoTypeClass_4E4;  // 0x4E4
    int u32_4E8;  // 0x4E8
    int u32_4EC;  // 0x4EC
    int u32_4F0;  // 0x4F0
    uint32_t u32_4F4;  // 0x4F4
    int u32_4F8;  // 0x4F8
    uint32_t u32_4FC;  // 0x4FC
    unsigned int u32_500;  // 0x500
    unsigned int u32_504;  // 0x504
    unsigned int u32_508;  // 0x508
    int u32_50C;  // 0x50C
    bool u8_510;  // 0x510
    char __pad_511[3];  // 0x511
    unsigned int u32_514;  // 0x514
    unsigned int TechnoTypeClass_518;  // 0x518
    int u32_51C;  // 0x51C
    unsigned int u32_520;  // 0x520
    unsigned int u32_524;  // 0x524
    unsigned int u32_528;  // 0x528
    int u32_52C;  // 0x52C
    unsigned int u32_530;  // 0x530
    unsigned int u32_534;  // 0x534
    int u32_538;  // 0x538
    int u32_53C;  // 0x53C
    unsigned int u32_540;  // 0x540
    unsigned char u8_544;  // 0x544
    char __pad_545[3];  // 0x545
    unsigned int u32_548;  // 0x548
    unsigned int u32_54C;  // 0x54C
    int u32_550;  // 0x550
    uint32_t u32_554;  // 0x554
    int u32_558;  // 0x558
    uint32_t u32_55C;  // 0x55C
    unsigned int u32_560;  // 0x560
    unsigned int u32_564;  // 0x564
    unsigned int u32_568;  // 0x568
    unsigned int u32_56C;  // 0x56C
    uint32_t u32_570;  // 0x570
    uint32_t u32_574;  // 0x574
    int u32_578;  // 0x578
    int u32_57C;  // 0x57C
    unsigned int u32_580;  // 0x580
    int align_584;  // 0x584
    double TreeFlammability;  // 0x588
    double MissileSpeedVar;  // 0x590
    double MissileROTVar;  // 0x598
    void * MissileSafetyAltitude;  // 0x5A0
    WeaponTypeClass * DropPodWeapon;  // 0x5A4
    int DropPodHeight;  // 0x5A8
    void * DropPodSpeed;  // 0x5AC
    double DropPodAngle;  // 0x5B0
    double ScrollMultiplier;  // 0x5B8
    double CrewEscape;  // 0x5C0
    void * ShakeScreen;  // 0x5C8
    void * HoverHeight;  // 0x5CC
    double HoverBob;  // 0x5D0
    double HoverBoost;  // 0x5D8
    double HoverAcceleration;  // 0x5E0
    double HoverBrake;  // 0x5E8
    double HoverDampen;  // 0x5F0
    double PlacementDelay;  // 0x5F8
    void * CloakingStages;  // 0x600
    void * RevealTriggerRadius;  // 0x604
    double ShipSinkingWeight;  // 0x608
    double IceCrackingWeight;  // 0x610
    double IceBreakingWeight;  // 0x618
    double VeteranRatio;  // 0x620
    double VeteranCombat;  // 0x628
    double VeteranSpeed;  // 0x630
    double VeteranSight;  // 0x638
    double VeteranArmor;  // 0x640
    double VeteranROF;  // 0x648
    double VeteranCap;  // 0x650
    int CloakSound;  // 0x658
    int SellSound;  // 0x65C
    int GameClosed;  // 0x660
    int IncomingMessage;  // 0x664
    int SystemError;  // 0x668
    int OptionsChanged;  // 0x66C
    int GameForming;  // 0x670
    int PlayerLeft;  // 0x674
    int PlayerJoined;  // 0x678
    void * MessageCharTyped;  // 0x67C
    int Construction;  // 0x680
    int CreditTicks[6];  // 0x684
    void * BuildingDieSound;  // 0x69C
    int BuildingSlam;  // 0x6A0
    int RadarOn;  // 0x6A4
    int RadarOff;  // 0x6A8
    int MovieOn;  // 0x6AC
    int MovieOff;  // 0x6B0
    int ScoldSound;  // 0x6B4
    int TeslaCharge;  // 0x6B8
    int TeslaZap;  // 0x6BC
    int GenericClick;  // 0x6C0
    int GenericBeep;  // 0x6C4
    int BuildingDamageSound;  // 0x6C8
    DynamicVector * HealCrateSound;  // 0x6CC
    void * ChuteSound;  // 0x6D0
    int StopSound;  // 0x6D4
    char GuardSound[4];  // 0x6D8
    int ScatterSound;  // 0x6DC
    int DeploySound;  // 0x6E0
    char StormSound[4];  // 0x6E4
    int LightningSounds[6];  // 0x6E8
    int ShellButtonSlideSound;  // 0x700
    int __pad_704;  // 0x704
    char __pad_708[4];  // 0x708
    unsigned int u32_70C;  // 0x70C
    unsigned int u32_710;  // 0x710
    unsigned int u32_714;  // 0x714
    unsigned int u32_718;  // 0x718
    unsigned int u32_71C;  // 0x71C
    unsigned int u32_720;  // 0x720
    unsigned int u32_724;  // 0x724
    unsigned int u32_728;  // 0x728
    unsigned int u32_72C;  // 0x72C
    unsigned int u32_730;  // 0x730
    unsigned int DynamicVector_734;  // 0x734
    unsigned int u32_738;  // 0x738
    unsigned int u32_73C;  // 0x73C
    char __pad_740[1];  // 0x740
    unsigned char u8_741;  // 0x741
    char __pad_742[2];  // 0x742
    unsigned int u32_744;  // 0x744
    unsigned int u32_748;  // 0x748
    char __pad_74C[4];  // 0x74C
    unsigned int u32_750;  // 0x750
    int align_754;  // 0x754
    double WallBuildSpeedCoefficient;  // 0x758
    double ChargeToDrainRatio;  // 0x760
    int WindDirection;  // 0x768
    BuildingTypeClass * CameraRange;  // 0x76C
    int FlightLevel;  // 0x770
    int ParachuteMaxFallRate;  // 0x774
    int NoParachuteMaxFallRate;  // 0x778
    BuildingTypeClass * BuildingDrop;  // 0x77C
    BuildingTypeClass * GDIGateOne;  // 0x780
    BuildingTypeClass * GDIGateTwo;  // 0x784
    BuildingTypeClass * NodGateOne;  // 0x788
    BuildingTypeClass * NodGateTwo;  // 0x78C
    BuildingTypeClass * WallTower;  // 0x790
    void * BuildConst;  // 0x794
    void * BuildPower;  // 0x798
    void * BuildRefinery;  // 0x79C
    void * BuildBarracks;  // 0x7A0
    void * BuildTech;  // 0x7A4
    void * BuildWeapons;  // 0x7A8
    void * BuildNavalYard;  // 0x7AC
    double GDIWallDefense;  // 0x7B0
    double GDIWallDefenseCoefficient;  // 0x7B8
    double NodBaseDefenseCoefficient;  // 0x7C0
    int GDIBaseDefenseCoefficient[2];  // 0x7C8
    char ComputerBaseDefenseResponse[4];  // 0x7D0
    int MaximumBaseDefenseValue;  // 0x7D4
    unsigned int BaseUnit;  // 0x7D8
    unsigned int HarvesterUnit;  // 0x7DC
    void * PadAircraft;  // 0x7E0
    void * OnFire;  // 0x7E4
    void * TreeFire;  // 0x7E8
    AnimTypeClass * Smoke;  // 0x7EC
    AnimTypeClass * SmokeAlt;  // 0x7F0
    AnimTypeClass * MoveFlash;  // 0x7F4
    AnimTypeClass * BombParachute;  // 0x7F8
    AnimTypeClass * Parachute;  // 0x7FC
    void * SplashList;  // 0x800
    AnimTypeClass * SmallFire;  // 0x804
    AnimTypeClass * LargeFire;  // 0x808
    InfantryTypeClass * Paratrooper;  // 0x80C
    int EliteFlashTimer;  // 0x810
    int ChronoDelay;  // 0x814
    SmudgeTypeVector * ChronoReinfDelay;  // 0x818
    void * ChronoDistanceFactor;  // 0x81C
    bool ChronoTrigger;  // 0x820
    unsigned char __pad_821;  // 0x821
    char __pad_822[2];  // 0x822
    int ChronoMinimumDelay;  // 0x824
    int ChronoRangeMinimum;  // 0x828
    InfantryTypeClass * AlliedDisguise;  // 0x82C
    InfantryTypeClass * SovietDisguise;  // 0x830
    InfantryTypeClass * ThirdDisguise;  // 0x834
    int SpyPowerBlackout;  // 0x838
    float SpyMoneyStealPercent;  // 0x83C
    bool AttackCursorOnDisguise;  // 0x840
    char __pad_841[3];  // 0x841
    float AIMinorSuperReadyPercent;  // 0x844
    int AISafeDistance;  // 0x848
    char HarvesterTooFarDistance[4];  // 0x84C
    void * ChronoHarvTooFarDistance;  // 0x850
    InfantryTypeClass * Technician;  // 0x854
    InfantryTypeClass * Engineer;  // 0x858
    InfantryTypeClass * Pilot;  // 0x85C
    InfantryTypeClass * AlliedCrew;  // 0x860
    InfantryTypeClass * SovietCrew;  // 0x864
    InfantryTypeClass * ThirdCrew;  // 0x868
    WarheadTypeClass * FlameDamage;  // 0x86C
    WarheadTypeClass * FlameDamage2;  // 0x870
    WarheadTypeClass * NukeWarhead;  // 0x874
    BulletTypeClass * NukeProjectile;  // 0x878
    BulletTypeClass * NukeDown;  // 0x87C
    WarheadTypeClass * MutateWarhead;  // 0x880
    WarheadTypeClass * MutateExplosionWarhead;  // 0x884
    WarheadTypeClass * C4Warhead;  // 0x888
    WarheadTypeClass * CrushWarhead;  // 0x88C
    WarheadTypeClass * V3Warhead;  // 0x890
    WarheadTypeClass * DMislWarhead;  // 0x894
    WarheadTypeClass * CMislWarhead;  // 0x898
    WarheadTypeClass * V3EliteWarhead;  // 0x89C
    WarheadTypeClass * DMislEliteWarhead;  // 0x8A0
    WarheadTypeClass * CMislEliteWarhead;  // 0x8A4
    WarheadTypeClass * IvanWarhead;  // 0x8A8
    WarheadTypeClass * IonCannonWarhead;  // 0x8AC
    void * IvanDamage;  // 0x8B0
    int IvanTimedDelay;  // 0x8B4
    bool CanDetonateTimeBomb;  // 0x8B8
    bool CanDetonateDeathBomb;  // 0x8B9
    unsigned char __pad_8BA;  // 0x8BA
    char __pad_8BB[1];  // 0x8BB
    int IvanIconFlickerRate;  // 0x8BC
    WeaponTypeClass * DeathWeapon;  // 0x8C0
    SHPStruct * BOMBCURS_SHP;  // 0x8C4
    SHPStruct * CHRONOSK_SHP;  // 0x8C8
    void * IronCurtainDuration;  // 0x8CC
    int PsychicRevealRadius;  // 0x8D0
    char V3Rocket[52];  // 0x8D4
    char DMisl[52];  // 0x908
    char CMisl[52];  // 0x93C
    double MyEffectivenessCoefficientDefault;  // 0x970
    double TargetEffectivenessCoefficientDefault;  // 0x978
    double TargetSpecialThreatCoefficientDefault;  // 0x980
    double TargetStrengthCoefficientDefault;  // 0x988
    int TargetDistanceCoefficientDefault[2];  // 0x990
    double EnemyHouseThreatBonus;  // 0x998
    double TurboBoost;  // 0x9A0
    double AttackInterval;  // 0x9A8
    double AttackDelay;  // 0x9B0
    double PowerEmergency;  // 0x9B8
    double AirstripRatio;  // 0x9C0
    DynamicVector * AirstripLimit;  // 0x9C8
    double HelipadRatio;  // 0x9CC
    int HelipadLimit;  // 0x9D4
    double TeslaRatio;  // 0x9D8
    DynamicVector * TeslaLimit;  // 0x9E0
    double AARatio;  // 0x9E4
    char AALimit[4];  // 0x9EC
    double DefenseRatio;  // 0x9F0
    int DefenseLimit;  // 0x9F8
    double WarRatio;  // 0x9FC
    int WarLimit;  // 0xA04
    double BarracksRatio;  // 0xA08
    char BarracksLimit[4];  // 0xA10
    char RefineryLimit[4];  // 0xA14
    double RefineryRatio;  // 0xA18
    int BaseSizeAdd;  // 0xA20
    char PowerSurplus[4];  // 0xA24
    int InfantryReserve;  // 0xA28
    char InfantryBaseMult[4];  // 0xA2C
    char SoloCrateMoney[4];  // 0xA30
    DynamicVector * TreeStrength;  // 0xA34
    UnitTypeClass * UnitCrateType;  // 0xA38
    double PatrolScan;  // 0xA3C
    double CloakDelay;  // 0xA44
    double GameSpeedBias;  // 0xA4C
    int BaseBias[2];  // 0xA54
    double ExpSpread;  // 0xA5C
    char FireSupress[4];  // 0xA64
    char MaxIQLevels[4];  // 0xA68
    DynamicVector * SuperWeapons;  // 0xA6C
    void * Production;  // 0xA70
    DynamicVector * GuardArea;  // 0xA74
    char RepairSell[4];  // 0xA78
    int AutoCrush;  // 0xA7C
    char Scatter[4];  // 0xA80
    char ContentScan[4];  // 0xA84
    DynamicVector * Aircraft;  // 0xA88
    void * Harvester;  // 0xA8C
    int SellBack;  // 0xA90
    char AIBaseSpacing[4];  // 0xA94
    Power * SilverCrate;  // 0xA98
    char WoodCrate[4];  // 0xA9C
    char WaterCrate[4];  // 0xAA0
    DynamicVector * CrateMinimum;  // 0xAA4
    int CrateMaximum;  // 0xAA8
    char Money[4];  // 0xAAC
    char MinMoney[4];  // 0xAB0
    int MaxMoney;  // 0xAB4
    char MoneyIncrement[4];  // 0xAB8
    char UnitCount[4];  // 0xABC
    DynamicVector * MinUnitCount;  // 0xAC0
    int MaxUnitCount;  // 0xAC4
    char TechLevel[4];  // 0xAC8
    char GameSpeed[4];  // 0xACC
    int AIPlayers;  // 0xAD0
    char Players[4];  // 0xAD4
    bool BridgeDestruction;  // 0xAD8
    bool ShadowGrow;  // 0xAD9
    bool Shroud;  // 0xADA
    bool Bases;  // 0xADB
    bool TiberiumGrows;  // 0xADC
    bool Crates;  // 0xADD
    bool CaptureTheFlag;  // 0xADE
    bool HarvesterTruce;  // 0xADF
    bool MultiEngineer;  // 0xAE0
    bool AlliesAllowed;  // 0xAE1
    bool ShortGame;  // 0xAE2
    bool FogOfWar;  // 0xAE3
    bool MCVRedeploys;  // 0xAE4
    bool SuperWeaponsAllowed;  // 0xAE5
    bool BuildOffAlly;  // 0xAE6
    bool AllyChangeAllowed;  // 0xAE7
    char DropZoneRadius[4];  // 0xAE8
    double MessageDelay;  // 0xAEC
    double SavourDelay;  // 0xAF4
    double BaseDefenseDelay;  // 0xAFC
    int SuspendPriority;  // 0xB04
    double SuspendDelay;  // 0xB08
    int SurvivorRate[2];  // 0xB10
    void * AlliedSurvivorDivisor;  // 0xB18
    int SovietSurvivorDivisor;  // 0xB1C
    void * ThirdSurvivorDivisor;  // 0xB20
    double ReloadRate;  // 0xB24
    double AutocreateTime;  // 0xB2C
    double BuildupTime;  // 0xB34
    void * HarvesterLoadRate;  // 0xB3C
    double HarvesterDumpRate;  // 0xB40
    char AtomDamage[4];  // 0xB48
    char Easy[80];  // 0xB4C
    char Normal[80];  // 0xB9C
    char Difficult[80];  // 0xBEC
    void* __pad_C3C;  // 0xC3C
    char __pad_C40[12];  // 0xC40
    unsigned int u32_C4C;  // 0xC4C
    unsigned int u32_C50;  // 0xC50
    char __pad_C54[4];  // 0xC54
    unsigned int DynamicVector_C58;  // 0xC58
    char __pad_C5C[12];  // 0xC5C
    unsigned int u32_C68;  // 0xC68
    unsigned int u32_C6C;  // 0xC6C
    char __pad_C70[4];  // 0xC70
    unsigned int VectorClass_C74;  // 0xC74
    unsigned int qC78;  // 0xC78
    char __pad_C7C[8];  // 0xC7C
    unsigned int u32_C84;  // 0xC84
    unsigned int u32_C88;  // 0xC88
    char __pad_C8C[4];  // 0xC8C
    unsigned int DynamicVector_C90;  // 0xC90
    char __pad_C94[12];  // 0xC94
    unsigned int u32_CA0;  // 0xCA0
    unsigned int u32_CA4;  // 0xCA4
    char __pad_CA8[4];  // 0xCA8
    unsigned int VectorClass_CAC;  // 0xCAC
    unsigned int qCB0;  // 0xCB0
    char __pad_CB4[8];  // 0xCB4
    unsigned int u32_CBC;  // 0xCBC
    unsigned int u32_CC0;  // 0xCC0
    char __pad_CC4[4];  // 0xCC4
    unsigned int DynamicVector_CC8;  // 0xCC8
    char __pad_CCC[12];  // 0xCCC
    unsigned int u32_CD8;  // 0xCD8
    unsigned int TechnoTypeClass_CDC;  // 0xCDC
    char __pad_CE0[4];  // 0xCE0
    unsigned int VectorClass_CE4;  // 0xCE4
    unsigned int qCE8;  // 0xCE8
    char __pad_CEC[8];  // 0xCEC
    unsigned int u32_CF4;  // 0xCF4
    unsigned int u32_CF8;  // 0xCF8
    char __pad_CFC[4];  // 0xCFC
    unsigned int VectorClass_D00;  // 0xD00
    unsigned int qD04;  // 0xD04
    char __pad_D08[8];  // 0xD08
    unsigned int u32_D10;  // 0xD10
    unsigned int u32_D14;  // 0xD14
    char __pad_D18[4];  // 0xD18
    unsigned int SaveLoad_D1C;  // 0xD1C
    unsigned int qD20;  // 0xD20
    char __pad_D24[8];  // 0xD24
    unsigned int u32_D2C;  // 0xD2C
    unsigned int u32_D30;  // 0xD30
    char __pad_D34[4];  // 0xD34
    unsigned int DynamicVector_D38;  // 0xD38
    unsigned int qD3C;  // 0xD3C
    char __pad_D40[8];  // 0xD40
    unsigned int u32_D48;  // 0xD48
    unsigned int u32_D4C;  // 0xD4C
    char __pad_D50[4];  // 0xD50
    int u32_D54;  // 0xD54
    unsigned int u32_D58;  // 0xD58
    unsigned int u32_D5C;  // 0xD5C
    unsigned int u32_D60;  // 0xD60
    int u32_D64;  // 0xD64
    uint32_t u32_D68;  // 0xD68
    bool u8_D6C;  // 0xD6C
    char __pad_D6D[3];  // 0xD6D
    uint32_t u32_D70;  // 0xD70
    int u32_D74;  // 0xD74
    unsigned int u32_D78;  // 0xD78
    unsigned int u32_D7C;  // 0xD7C
    unsigned int TypeList_D80;  // 0xD80
    unsigned int qD84;  // 0xD84
    char __pad_D88[8];  // 0xD88
    unsigned int qD90;  // 0xD90
    unsigned int qD94;  // 0xD94
    char __pad_D98[4];  // 0xD98
    unsigned int TypeList_D9C;  // 0xD9C
    unsigned int qDA0;  // 0xDA0
    char __pad_DA4[8];  // 0xDA4
    unsigned int qDAC;  // 0xDAC
    unsigned int qDB0;  // 0xDB0
    char __pad_DB4[4];  // 0xDB4
    unsigned int TypeList_DB8;  // 0xDB8
    unsigned int qDBC;  // 0xDBC
    char __pad_DC0[8];  // 0xDC0
    unsigned int qDC8;  // 0xDC8
    unsigned int qDCC;  // 0xDCC
    char __pad_DD0[4];  // 0xDD0
    unsigned int TypeList_DD4;  // 0xDD4
    unsigned int qDD8;  // 0xDD8
    char __pad_DDC[8];  // 0xDDC
    unsigned int qDE4;  // 0xDE4
    unsigned int qDE8;  // 0xDE8
    char __pad_DEC[4];  // 0xDEC
    int u32_DF0;  // 0xDF0
    int u32_DF4;  // 0xDF4
    unsigned int u32_DF8;  // 0xDF8
    unsigned int u32_DFC;  // 0xDFC
    unsigned int u32_E00;  // 0xE00
    unsigned int u32_E04;  // 0xE04
    unsigned int u32_E08;  // 0xE08
    int u32_E0C;  // 0xE0C
    unsigned int TypeList_E10;  // 0xE10
    unsigned int qE14;  // 0xE14
    char __pad_E18[8];  // 0xE18
    unsigned int qE20;  // 0xE20
    unsigned int qE24;  // 0xE24
    char __pad_E28[4];  // 0xE28
    unsigned int TypeList_E2C;  // 0xE2C
    unsigned int qE30;  // 0xE30
    char __pad_E34[8];  // 0xE34
    unsigned int qE3C;  // 0xE3C
    unsigned int qE40;  // 0xE40
    char __pad_E44[4];  // 0xE44
    unsigned int Color_E48;  // 0xE48
    unsigned int DynamicVector_E4C;  // 0xE4C
    char __pad_E50[12];  // 0xE50
    unsigned int u32_E5C;  // 0xE5C
    unsigned int u32_E60;  // 0xE60
    char __pad_E64[4];  // 0xE64
    unsigned int DynamicVector_E68;  // 0xE68
    char __pad_E6C[12];  // 0xE6C
    unsigned int u32_E78;  // 0xE78
    unsigned int u32_E7C;  // 0xE7C
    char __pad_E80[4];  // 0xE80
    unsigned int DynamicVector_E84;  // 0xE84
    char __pad_E88[12];  // 0xE88
    unsigned int u32_E94;  // 0xE94
    unsigned int u32_E98;  // 0xE98
    char __pad_E9C[4];  // 0xE9C
    unsigned int DynamicVector_EA0;  // 0xEA0
    char __pad_EA4[12];  // 0xEA4
    unsigned int u32_EB0;  // 0xEB0
    unsigned int u32_EB4;  // 0xEB4
    char __pad_EB8[4];  // 0xEB8
    unsigned int Color_EBC;  // 0xEBC
    char __pad_EC0[4];  // 0xEC0
    unsigned int TypeList_EC4;  // 0xEC4
    unsigned int qEC8;  // 0xEC8
    char __pad_ECC[8];  // 0xECC
    unsigned int qED4;  // 0xED4
    unsigned int qED8;  // 0xED8
    char __pad_EDC[4];  // 0xEDC
    unsigned int Color_EE0;  // 0xEE0
    unsigned int TechnoTypeClass_EE4;  // 0xEE4
    unsigned int TypeList_EE8;  // 0xEE8
    unsigned int qEEC;  // 0xEEC
    char __pad_EF0[8];  // 0xEF0
    unsigned int qEF8;  // 0xEF8
    unsigned int qEFC;  // 0xEFC
    char __pad_F00[4];  // 0xF00
    unsigned int TypeList_F04;  // 0xF04
    unsigned int qF08;  // 0xF08
    char __pad_F0C[8];  // 0xF0C
    unsigned int qF14;  // 0xF14
    unsigned int qF18;  // 0xF18
    char __pad_F1C[4];  // 0xF1C
    unsigned int TypeList_F20;  // 0xF20
    unsigned int qF24;  // 0xF24
    char __pad_F28[8];  // 0xF28
    unsigned int qF30;  // 0xF30
    unsigned int qF34;  // 0xF34
    char __pad_F38[4];  // 0xF38
    uint32_t u32_F3C;  // 0xF3C
    unsigned int u32_F40;  // 0xF40
    unsigned int u32_F44;  // 0xF44
    int u32_F48;  // 0xF48
    unsigned int u32_F4C;  // 0xF4C
    unsigned int u32_F50;  // 0xF50
    unsigned int WeaponStruct_F54;  // 0xF54
    unsigned int u32_F58;  // 0xF58
    unsigned int WeaponStruct_F5C;  // 0xF5C
    int u32_F60;  // 0xF60
    unsigned int u32_F64;  // 0xF64
    unsigned char u8_F68;  // 0xF68
    char __pad_F69[3];  // 0xF69
    unsigned int u32_F6C;  // 0xF6C
    unsigned int u32_F70;  // 0xF70
    unsigned int u32_F74;  // 0xF74
    unsigned int u32_F78;  // 0xF78
    unsigned int u32_F7C;  // 0xF7C
    unsigned int u32_F80;  // 0xF80
    unsigned int u32_F84;  // 0xF84
    unsigned int u32_F88;  // 0xF88
    unsigned int u32_F8C;  // 0xF8C
    unsigned int u32_F90;  // 0xF90
    unsigned int u32_F94;  // 0xF94
    unsigned int u32_F98;  // 0xF98
    unsigned int u32_F9C;  // 0xF9C
    unsigned int u32_FA0;  // 0xFA0
    unsigned int u32_FA4;  // 0xFA4
    unsigned int u32_FA8;  // 0xFA8
    unsigned int u32_FAC;  // 0xFAC
    unsigned int u32_FB0;  // 0xFB0
    unsigned int u32_FB4;  // 0xFB4
    unsigned int u32_FB8;  // 0xFB8
    unsigned int u32_FBC;  // 0xFBC
    unsigned int u32_FC0;  // 0xFC0
    unsigned int u32_FC4;  // 0xFC4
    unsigned int u32_FC8;  // 0xFC8
    unsigned int u32_FCC;  // 0xFCC
    unsigned int u32_FD0;  // 0xFD0
    unsigned char u8_FD4;  // 0xFD4
    unsigned char u8_FD5;  // 0xFD5
    char __pad_FD6[2];  // 0xFD6
    unsigned int u32_FD8;  // 0xFD8
    unsigned int u32_FDC;  // 0xFDC
    unsigned int u32_FE0;  // 0xFE0
    unsigned int u32_FE4;  // 0xFE4
    unsigned int u32_FE8;  // 0xFE8
    unsigned int u32_FEC;  // 0xFEC
    unsigned int u32_FF0;  // 0xFF0
    unsigned int u32_FF4;  // 0xFF4
    unsigned int u32_FF8;  // 0xFF8
    unsigned int qFFC;  // 0xFFC
    char __pad_1000[8];  // 0x1000
    unsigned int u32_1008;  // 0x1008
    unsigned int u32_100C;  // 0x100C
    char __pad_1010[4];  // 0x1010
    int u32_1014;  // 0x1014
    unsigned int u32_1018;  // 0x1018
    unsigned int u32_101C;  // 0x101C
    unsigned int u32_1020;  // 0x1020
    unsigned int u32_1024;  // 0x1024
    unsigned int u32_1028;  // 0x1028
    unsigned int u32_102C;  // 0x102C
    unsigned int u32_1030;  // 0x1030
    unsigned int u32_1034;  // 0x1034
    unsigned int u32_1038;  // 0x1038
    char __pad_103C[4];  // 0x103C
    unsigned int u32_1040;  // 0x1040
    int u32_1044;  // 0x1044
    int u32_1048;  // 0x1048
    int u32_104C;  // 0x104C
    unsigned int u32_1050;  // 0x1050
    int u32_1054;  // 0x1054
    int u32_1058;  // 0x1058
    int u32_105C;  // 0x105C
    unsigned int u32_1060;  // 0x1060
    unsigned int u32_1064;  // 0x1064
    unsigned int u32_1068;  // 0x1068
    int u32_106C;  // 0x106C
    int u32_1070;  // 0x1070
    unsigned int u32_1074;  // 0x1074
    unsigned int u32_1078;  // 0x1078
    int u32_107C;  // 0x107C
    int u32_1080;  // 0x1080
    unsigned int u32_1084;  // 0x1084
    unsigned int u32_1088;  // 0x1088
    int u32_108C;  // 0x108C
    int u32_1090;  // 0x1090
    int u32_1094;  // 0x1094
    unsigned int u32_1098;  // 0x1098
    unsigned int Stream_109C;  // 0x109C
    unsigned int u32_10A0;  // 0x10A0
    unsigned int u32_10A4;  // 0x10A4
    unsigned int u32_10A8;  // 0x10A8
    unsigned int u32_10AC;  // 0x10AC
    unsigned int u32_10B0;  // 0x10B0
    unsigned int u32_10B4;  // 0x10B4
    unsigned int u32_10B8;  // 0x10B8
    unsigned int u32_10BC;  // 0x10BC
    unsigned int u32_10C0;  // 0x10C0
    char __pad_10C4[4];  // 0x10C4
    unsigned int u32_10C8;  // 0x10C8
    unsigned int u32_10CC;  // 0x10CC
    unsigned int u32_10D0;  // 0x10D0
    char __pad_10D4[4];  // 0x10D4
    unsigned int u32_10D8;  // 0x10D8
    unsigned int u32_10DC;  // 0x10DC
    unsigned int u32_10E0;  // 0x10E0
    char __pad_10E4[4];  // 0x10E4
    unsigned int u32_10E8;  // 0x10E8
    unsigned int u32_10EC;  // 0x10EC
    unsigned int u32_10F0;  // 0x10F0
    char __pad_10F4[4];  // 0x10F4
    unsigned int u32_10F8;  // 0x10F8
    unsigned int u32_10FC;  // 0x10FC
    unsigned int u32_1100;  // 0x1100
    char __pad_1104[4];  // 0x1104
    unsigned int u32_1108;  // 0x1108
    unsigned int u32_110C;  // 0x110C
    unsigned int u32_1110;  // 0x1110
    char __pad_1114[4];  // 0x1114
    unsigned int u32_1118;  // 0x1118
    unsigned int u32_111C;  // 0x111C
    unsigned int u32_1120;  // 0x1120
    unsigned int u32_1124;  // 0x1124
    unsigned int u32_1128;  // 0x1128
    unsigned int u32_112C;  // 0x112C
    unsigned int u32_1130;  // 0x1130
    unsigned int u32_1134;  // 0x1134
    unsigned int u32_1138;  // 0x1138
    unsigned int u32_113C;  // 0x113C
    unsigned int u32_1140;  // 0x1140
    unsigned int u32_1144;  // 0x1144
    unsigned int u32_1148;  // 0x1148
    char __pad_114C[4];  // 0x114C
    unsigned int u32_1150;  // 0x1150
    unsigned int u32_1154;  // 0x1154
    unsigned int TypeList_1158;  // 0x1158
    unsigned int q115C;  // 0x115C
    char __pad_1160[8];  // 0x1160
    unsigned int q1168;  // 0x1168
    unsigned int q116C;  // 0x116C
    char __pad_1170[4];  // 0x1170
    unsigned int DynamicVector_1174;  // 0x1174
    char __pad_1178[12];  // 0x1178
    unsigned int u32_1184;  // 0x1184
    unsigned int u32_1188;  // 0x1188
    char __pad_118C[4];  // 0x118C
    int u32_1190;  // 0x1190
    unsigned int DynamicVector_1194;  // 0x1194
    unsigned int q1198;  // 0x1198
    char __pad_119C[8];  // 0x119C
    unsigned int q11A4;  // 0x11A4
    unsigned int q11A8;  // 0x11A8
    char __pad_11AC[4];  // 0x11AC
    unsigned int TypeList_11B0;  // 0x11B0
    unsigned int q11B4;  // 0x11B4
    char __pad_11B8[8];  // 0x11B8
    unsigned int q11C0;  // 0x11C0
    unsigned int q11C4;  // 0x11C4
    char __pad_11C8[4];  // 0x11C8
    unsigned int TypeList_11CC;  // 0x11CC
    unsigned int q11D0;  // 0x11D0
    char __pad_11D4[8];  // 0x11D4
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    char __pad_11E4[4];  // 0x11E4
    unsigned int TypeList_11E8;  // 0x11E8
    unsigned int q11EC;  // 0x11EC
    char __pad_11F0[8];  // 0x11F0
    unsigned int q11F8;  // 0x11F8
    unsigned int q11FC;  // 0x11FC
    char __pad_1200[4];  // 0x1200
    unsigned int TypeList_1204;  // 0x1204
    unsigned int q1208;  // 0x1208
    char __pad_120C[8];  // 0x120C
    unsigned int q1214;  // 0x1214
    unsigned int q1218;  // 0x1218
    char __pad_121C[4];  // 0x121C
    unsigned int TypeList_1220;  // 0x1220
    unsigned int q1224;  // 0x1224
    char __pad_1228[8];  // 0x1228
    unsigned int q1230;  // 0x1230
    unsigned int q1234;  // 0x1234
    char __pad_1238[4];  // 0x1238
    unsigned int TypeList_123C;  // 0x123C
    unsigned int q1240;  // 0x1240
    char __pad_1244[8];  // 0x1244
    unsigned int q124C;  // 0x124C
    unsigned int q1250;  // 0x1250
    char __pad_1254[4];  // 0x1254
    unsigned int TypeList_1258;  // 0x1258
    unsigned int q125C;  // 0x125C
    char __pad_1260[8];  // 0x1260
    unsigned int q1268;  // 0x1268
    unsigned int q126C;  // 0x126C
    char __pad_1270[4];  // 0x1270
    unsigned int TypeList_1274;  // 0x1274
    unsigned int q1278;  // 0x1278
    char __pad_127C[8];  // 0x127C
    unsigned int q1284;  // 0x1284
    unsigned int q1288;  // 0x1288
    char __pad_128C[4];  // 0x128C
    unsigned int TypeList_1290;  // 0x1290
    unsigned int q1294;  // 0x1294
    char __pad_1298[8];  // 0x1298
    unsigned int q12A0;  // 0x12A0
    unsigned int q12A4;  // 0x12A4
    char __pad_12A8[4];  // 0x12A8
    unsigned int TypeList_12AC;  // 0x12AC
    unsigned int q12B0;  // 0x12B0
    char __pad_12B4[8];  // 0x12B4
    unsigned int q12BC;  // 0x12BC
    unsigned int q12C0;  // 0x12C0
    char __pad_12C4[4];  // 0x12C4
    unsigned int TypeList_12C8;  // 0x12C8
    unsigned int q12CC;  // 0x12CC
    char __pad_12D0[8];  // 0x12D0
    unsigned int q12D8;  // 0x12D8
    unsigned int q12DC;  // 0x12DC
    char __pad_12E0[4];  // 0x12E0
    unsigned int TypeList_12E4;  // 0x12E4
    unsigned int q12E8;  // 0x12E8
    char __pad_12EC[8];  // 0x12EC
    unsigned int q12F4;  // 0x12F4
    unsigned int q12F8;  // 0x12F8
    char __pad_12FC[4];  // 0x12FC
    unsigned int u32_1300;  // 0x1300
    unsigned int DynamicVector_1304;  // 0x1304
    char __pad_1308[12];  // 0x1308
    unsigned int u32_1314;  // 0x1314
    unsigned int u32_1318;  // 0x1318
    char __pad_131C[4];  // 0x131C
    unsigned int DynamicVector_1320;  // 0x1320
    char __pad_1324[12];  // 0x1324
    unsigned int u32_1330;  // 0x1330
    unsigned int u32_1334;  // 0x1334
    char __pad_1338[4];  // 0x1338
    unsigned int DynamicVector_133C;  // 0x133C
    char __pad_1340[12];  // 0x1340
    unsigned int u32_134C;  // 0x134C
    unsigned int u32_1350;  // 0x1350
    char __pad_1354[4];  // 0x1354
    unsigned int DynamicVector_1358;  // 0x1358
    char __pad_135C[12];  // 0x135C
    unsigned int u32_1368;  // 0x1368
    unsigned int u32_136C;  // 0x136C
    char __pad_1370[4];  // 0x1370
    unsigned int DynamicVector_1374;  // 0x1374
    char __pad_1378[12];  // 0x1378
    unsigned int u32_1384;  // 0x1384
    unsigned int u32_1388;  // 0x1388
    char __pad_138C[4];  // 0x138C
    unsigned int TypeList_1390;  // 0x1390
    unsigned int q1394;  // 0x1394
    char __pad_1398[8];  // 0x1398
    unsigned int q13A0;  // 0x13A0
    unsigned int q13A4;  // 0x13A4
    char __pad_13A8[4];  // 0x13A8
    unsigned int TypeList_13AC;  // 0x13AC
    unsigned int q13B0;  // 0x13B0
    char __pad_13B4[8];  // 0x13B4
    unsigned int q13BC;  // 0x13BC
    unsigned int q13C0;  // 0x13C0
    char __pad_13C4[4];  // 0x13C4
    unsigned int DynamicVector_13C8;  // 0x13C8
    char __pad_13CC[28];  // 0x13CC
    int u32_13E8;  // 0x13E8
    int u32_13EC;  // 0x13EC
    unsigned int TypeList_13F0;  // 0x13F0
    unsigned int q13F4;  // 0x13F4
    char __pad_13F8[8];  // 0x13F8
    unsigned int q1400;  // 0x1400
    char __pad_1404[12];  // 0x1404
    int u32_1410;  // 0x1410
    int u32_1414;  // 0x1414
    unsigned int u32_1418;  // 0x1418
    int u32_141C;  // 0x141C
    int u32_1420;  // 0x1420
    int u32_1424;  // 0x1424
    unsigned int u32_1428;  // 0x1428
    unsigned int u32_142C;  // 0x142C
    unsigned int WeaponStruct_1430;  // 0x1430
    unsigned int MaxIQLevels_d;  // 0x1434
    unsigned int SuperWeapons_d;  // 0x1438
    void * Production_d;  // 0x143C
    unsigned int GuardArea_d;  // 0x1440
    unsigned int RepairSell_d;  // 0x1444
    unsigned int AutoCrush_d;  // 0x1448
    int __pad_144C;  // 0x144C
    unsigned int ContentScan_d;  // 0x1450
    unsigned int Aircraft_d;  // 0x1454
    unsigned int Harvester_d;  // 0x1458
    void * SellBack_d;  // 0x145C
    unsigned int __pad_1460;  // 0x1460
    char __pad_1464[4];  // 0x1464
    unsigned int u32_1468;  // 0x1468
    unsigned int u32_146C;  // 0x146C
    int u32_1470;  // 0x1470
    unsigned int u32_1474;  // 0x1474
    uint32_t u32_1478;  // 0x1478
    unsigned int u32_147C;  // 0x147C
    unsigned int u32_1480;  // 0x1480
    unsigned int u32_1484;  // 0x1484
    unsigned int u32_1488;  // 0x1488
    unsigned int u32_148C;  // 0x148C
    unsigned int u32_1490;  // 0x1490
    unsigned int u32_1494;  // 0x1494
    unsigned int u32_1498;  // 0x1498
    unsigned int u32_149C;  // 0x149C
    unsigned int u32_14A0;  // 0x14A0
    unsigned int u32_14A4;  // 0x14A4
    unsigned int u32_14A8;  // 0x14A8
    unsigned char u32_14AC;  // 0x14AC
    unsigned char u8_14AD;  // 0x14AD
    unsigned char u8_14AE;  // 0x14AE
    unsigned char u8_14AF;  // 0x14AF
    unsigned char u32_14B0;  // 0x14B0
    unsigned char u8_14B1;  // 0x14B1
    unsigned char u8_14B2;  // 0x14B2
    unsigned char u8_14B3;  // 0x14B3
    unsigned char u32_14B4;  // 0x14B4
    unsigned char u8_14B5;  // 0x14B5
    unsigned char u8_14B6;  // 0x14B6
    unsigned char u8_14B7;  // 0x14B7
    unsigned char u32_14B8;  // 0x14B8
    unsigned char u8_14B9;  // 0x14B9
    unsigned char u8_14BA;  // 0x14BA
    unsigned char u8_14BB;  // 0x14BB
    unsigned int u32_14BC;  // 0x14BC
    unsigned int u32_14C0;  // 0x14C0
    unsigned int u32_14C4;  // 0x14C4
    unsigned int u32_14C8;  // 0x14C8
    unsigned int u32_14CC;  // 0x14CC
    unsigned int u32_14D0;  // 0x14D0
    char __pad_14D4[4];  // 0x14D4
    int u32_14D8;  // 0x14D8
    uint32_t u32_14DC;  // 0x14DC
    int u32_14E0;  // 0x14E0
    char __pad_14E4[4];  // 0x14E4
    int u32_14E8;  // 0x14E8
    uint32_t u32_14EC;  // 0x14EC
    unsigned int u32_14F0;  // 0x14F0
    unsigned int u32_14F4;  // 0x14F4
    unsigned int u32_14F8;  // 0x14F8
    unsigned int u32_14FC;  // 0x14FC
    int u32_1500;  // 0x1500
    char __pad_1504[4];  // 0x1504
    unsigned int u32_1508;  // 0x1508
    unsigned int u32_150C;  // 0x150C
    unsigned int q1510;  // 0x1510
    unsigned int q1514;  // 0x1514
    unsigned int q1518;  // 0x1518
    unsigned int u32_151C;  // 0x151C
    unsigned int u32_1520;  // 0x1520
    char __pad_1524[4];  // 0x1524
    unsigned int u32_1528;  // 0x1528
    unsigned int u32_152C;  // 0x152C
    unsigned int u32_1530;  // 0x1530
    char __pad_1534[244];  // 0x1534
    int align_1628[4];  // 0x1628
    double GrowthRate;  // 0x1638
    double ShroudRate;  // 0x1640
    int FogRate[2];  // 0x1648
    double IceGrowthRate;  // 0x1650
    double VeinGrowthRate;  // 0x1658
    int IceSolidifyFrameTime;  // 0x1660
    double AmbientChangeRate;  // 0x1664
    double AmbientChangeStep;  // 0x166C
    double CrateRegen;  // 0x1674
    double TimerWarning;  // 0x167C
    double SpeakDelay;  // 0x1684
    double DamageDelay;  // 0x168C
    int Gravity;  // 0x1694
    int LeptonsPerSightIncrease;  // 0x1698
    char Incoming[4];  // 0x169C
    int MinDamage;  // 0x16A0
    char MaxDamage[4];  // 0x16A4
    int RepairStep;  // 0x16A8
    double RepairPercent;  // 0x16AC
    int IRepairStep;  // 0x16B4
    int RepairRate[2];  // 0x16B8
    double URepairRate;  // 0x16C0
    double IRepairRate;  // 0x16C8
    double ConditionYellow;  // 0x16D0
    double ConditionRed;  // 0x16D8
    double IdleActionFrequency;  // 0x16E0
    int CloseEnough;  // 0x16E8
    WarheadTypeClass * Stray;  // 0x16EC
    int RelaxedStray;  // 0x16F0
    WarheadTypeClass * GuardModeStray;  // 0x16F4
    int Crush;  // 0x16F8
    int CrateRadius;  // 0x16FC
    int HomingScatter;  // 0x1700
    int BallisticScatter;  // 0x1704
    double RefundPercent;  // 0x1708
    int BridgeStrength;  // 0x1710
    double BuildSpeed;  // 0x1714
    double C4Delay;  // 0x171C
    int CreditReserve;  // 0x1724
    double PathDelay;  // 0x1728
    int BlockagePathDelay;  // 0x1730
    double MovieTime;  // 0x1734
    int TiberiumShortScan;  // 0x173C
    int TiberiumLongScan;  // 0x1740
    int LightningDeferment;  // 0x1744
    int LightningDamage;  // 0x1748
    int LightningStormDuration;  // 0x174C
    int LightningHitDelay;  // 0x1750
    int LightningScatterDelay;  // 0x1754
    int LightningCellSpread;  // 0x1758
    char LightningSeparation[4];  // 0x175C
    bool LightningPrintText;  // 0x1760
    unsigned char __pad_1761;  // 0x1761
    char __pad_1762[2];  // 0x1762
    WarheadTypeClass * LightningWarhead;  // 0x1764
    int ForceShieldRadius;  // 0x1768
    char ForceShieldDuration[4];  // 0x176C
    int ForceShieldBlackoutDuration;  // 0x1770
    int ForceShieldPlayFadeSoundTime;  // 0x1774
    bool MutateExplosion;  // 0x1778
    unsigned char __pad_1779;  // 0x1779
    char __pad_177A[2];  // 0x177A
    IUnknown * CollapseChance;  // 0x177C
    int WeedCapacity;  // 0x1780
    float ExtraUnitLight;  // 0x1784
    float ExtraInfantryLight;  // 0x1788
    float ExtraAircraftLight;  // 0x178C
    bool Paranoid;  // 0x1790
    bool CurleyShuffle;  // 0x1791
    bool BlendedFog;  // 0x1792
    bool CompEasyBonus;  // 0x1793
    bool FineDiffControl;  // 0x1794
    bool TiberiumExplosive;  // 0x1795
    bool EnemyHealth;  // 0x1796
    bool AllyReveal;  // 0x1797
    bool SeparateAircraft;  // 0x1798
    bool TreeTargeting;  // 0x1799
    bool NamedCivilians;  // 0x179A
    bool PlayerAutoCrush;  // 0x179B
    bool PlayerReturnFire;  // 0x179C
    bool PlayerScatter;  // 0x179D
    bool RevealByHeight;  // 0x179E
    bool AllowShroudedSubterraneanMoves;  // 0x179F
    bool ShroudGrow;  // 0x17A0
    bool NodAIBuildsWalls;  // 0x17A1
    bool AIBuildsWalls;  // 0x17A2
    bool UseMinDefenseRule;  // 0x17A3
    float EngineerCaptureLevel;  // 0x17A4
    float TalkBubbleTime;  // 0x17A8
    int RadDurationMultiple;  // 0x17AC
    int RadApplicationDelay;  // 0x17B0
    void * RadLevelMax;  // 0x17B4
    void * RadLevelDelay;  // 0x17B8
    void * RadLightDelay;  // 0x17BC
    double RadLevelFactor;  // 0x17C0
    double RadLightFactor;  // 0x17C8
    double RadTintFactor;  // 0x17D0
    char RadColor[3];  // 0x17D8
    unsigned char __pad_17DB;  // 0x17DB
    WarheadTypeClass * RadSiteWarhead;  // 0x17DC
    int ElevationIncrement;  // 0x17E0
    double ElevationIncrementBonus;  // 0x17E4
    double ElevationBonusCap;  // 0x17EC
    bool AlliedWallTransparency;  // 0x17F4
    unsigned char __pad_17F5;  // 0x17F5
    char __pad_17F6[2];  // 0x17F6
    double WallPenetratorThreshold;  // 0x17F8
    char LocalRadarColor[3];  // 0x1800
    char LineTrailColorOverride[3];  // 0x1803
    char ChronoBeamColor[3];  // 0x1806
    char MagnaBeamColor[3];  // 0x1809
    void * RadLevelMax_d;  // 0x180C
    AnimTypeClass * RadLevelDelay_d;  // 0x1810
    char RadLightDelay_d[48];  // 0x1814
    int LaserTargetColor;  // 0x1844
    int IronCurtainColor;  // 0x1848
    int BerserkColor;  // 0x184C
    int ForceShieldColor;  // 0x1850
    float DirectRockingCoefficient;  // 0x1854
    float FallBackCoefficient;  // 0x1858
    int CrewCount;  // 0x185C
    unsigned char u8_1860;  // 0x1860
    unsigned char u8_1861;  // 0x1861
    unsigned char u8_1862;  // 0x1862
    unsigned char u8_1863;  // 0x1863
    unsigned char u8_1864;  // 0x1864
    unsigned char u8_1865;  // 0x1865
    unsigned char u8_1866;  // 0x1866
    unsigned char u8_1867;  // 0x1867
    unsigned char u8_1868;  // 0x1868
    unsigned char u8_1869;  // 0x1869
    unsigned char u8_186A;  // 0x186A
    unsigned char u8_186B;  // 0x186B
    unsigned int u32_186C;  // 0x186C
    unsigned int u32_1870;  // 0x1870
    unsigned int q1874;  // 0x1874
    char __pad_1878[44];  // 0x1878
    unsigned int u32_18A4;  // 0x18A4
    unsigned int u32_18A8;  // 0x18A8
    unsigned int u32_18AC;  // 0x18AC
    unsigned int u32_18B0;  // 0x18B0
    unsigned int u32_18B4;  // 0x18B4
    unsigned int u32_18B8;  // 0x18B8
    union {
        struct { char __pad_C; unsigned char u8_D; char __pad_E[2]; };  // 0xC
    };
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Addition(void *aP1);
    INIClass * * ReadMovies();
    INIClass * * ReadPowerupsSection();
    INIClass * * readDifficulty();
    RulesClass();
    static int Constructor(void *aP1);
    static double GetFiringDistance();
    int DTOR(void *a1);
    int ReadColorAdd();
    int ReadColors();
    int ReadSidesList();
    int  readAI(unsigned int * a2);
    int  readAnimations(TechnoTypeClass * aP1);
    int readCombatDamage(int a2);
    int readCrateRules();
    int readGeneralSection(TechnoTypeClass * aP1);
    int readOverlayTypes();
    int   readParticleSystems(void *a1 = 0);
    int readRadiation();
    int readSmudgeTypes();
    int readSpecialWeapons();
    int  readTerrainTypes(TechnoTypeClass * aP1);
    int readWarheads();
    int sub_674500();
    unsigned int * InitINIChain(int a2, int a3);
    unsigned int * readIQ(int a2, int a3);
    unsigned int * readParticles();
    void * LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5);
    void *  readAircraftTypes(int * a2);
    void * readBuildingTypes(int * a2);
    void * readSuperWeaponTypes(int * a2);
    void readCountries();
    void readInfantryTypes();
    void readMaximums();
    void readVehicleTypes();
    void* readAudioVisual();
     int SaveLoad_Prefix(int *a2);
    static int SaveLoad_Prefix_0(RulesClass * aP1, int i);
    static int ReadDataList(void *a1 = 0);  // 0x672440
    int LoadCountries(void *a1 = 0);  // 0x6722f0
    int Reset(void *a1 = 0, void *a2 = 0);  // 0x74e6b0
    int  IsTypeBuildable(unsigned int a2, void *a1 = 0);  // 0x721140
    INIClass * * ReadPowerupsSection(void * aPowerups);
    INIClass * * readDifficulty(void * aClimb, void * aCruiseheight, void * aJumpjetcontrol, void * aTurnrate, void * aWobbledeviatio, void * aWobblesperseco);
    INIClass * * ReadMovies(void * aMovies);
    int readSpecialWeapons(void * aAlliedwalltran, void * aWallmodel, void * aWallpenetrator);
    int ReadColors(void * aColors);
    int ReadColorAdd(void * aColoradd);
    int readCrateRules(void * aInfantrytypes);
    int readRadiation(void * aAircrafttypes);
    int ReadSidesList(void * aSuperweapontyp);
    int ResetRules();  // G42.39 supply
    static int LoadFromINI();
#pragma pack(pop)
};

} // namespace gamemd
