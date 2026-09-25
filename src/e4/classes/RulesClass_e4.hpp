// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RulesClass {
// --- flat members (BEGIN) ---
    char DetailMinFrameRateNormal[4];  // 0x0
    void* ;  // 0x4
    unsigned int DetailBufferZoneWidth;  // 0x8
    unsigned int AmmoCrateDamage;  // 0xC
    unsigned char u8_D;  // 0xD
    UnitTypeClass* LargeVisceroid;  // 0x10
    UnitTypeClass* SmallVisceroid;  // 0x14
    char AttackingAircraftSightRange[4];  // 0x18
    unsigned int q01C;  // 0x1C
    double TunnelSpeed;  // 0x20
    unsigned int q024;  // 0x24
    double TiberiumHeal;  // 0x28
    char SelfHealInfantryFrames[4];  // 0x30
    char SelfHealInfantryAmount[4];  // 0x34
    char SelfHealUnitFrames[4];  // 0x38
    char SelfHealUnitAmount[4];  // 0x3C
    bool FreeMCV;  // 0x40
    bool BerzerkAllowed;  // 0x41
    unsigned char q042;  // 0x42
    char PoseDir[4];  // 0x44
    char DeployDir[4];  // 0x48
    char FlashFrameTime[4];  // 0x4C
    char RadarCombatFlashTime[4];  // 0x50
    char MaxWaypointPathLength[4];  // 0x54
    float RadarEventColorSpeed;  // 0x58
    char RadarEventMinRadius[4];  // 0x5C
    float RadarEventSpeed;  // 0x60
    float RadarEventRotationSpeed;  // 0x64
    AnimTypeClass* DropPodPuff;  // 0x68
    AnimTypeClass* BarrelExplode;  // 0x6C
    unsigned int BarrelDebris;  // 0x70
    ParticleSystemTypeClass* BarrelParticle;  // 0x74
    AnimTypeClass* Wake;  // 0x78
    AnimTypeClass* NukeTakeOff;  // 0x7C
    AnimTypeClass* InfantryExplode;  // 0x80
    AnimTypeClass* FlamingInfantry;  // 0x84
    AnimTypeClass* InfantryHeadPop;  // 0x88
    AnimTypeClass* InfantryNuked;  // 0x8C
    AnimTypeClass* InfantryVirus;  // 0x90
    AnimTypeClass* InfantryBrute;  // 0x94
    AnimTypeClass* InfantryMutate;  // 0x98
    AnimTypeClass* Behind;  // 0x9C
    unsigned char q0A0;  // 0xA0
    unsigned int q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    bool q0B3;  // 0xB3
    unsigned int q0B4;  // 0xB4
    unsigned char q0B8;  // 0xB8
    unsigned int q0BA;  // 0xBA
    unsigned int q0BC;  // 0xBC
    double AITriggerSuccessWeightDelta;  // 0xC0
    unsigned int q0C4;  // 0xC4
    double AITriggerFailureWeightDelta;  // 0xC8
    double AITriggerTrackRecordCoefficient;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    char MaximumQueuedObjects[4];  // 0xD8
    char AircraftFogReveal[4];  // 0xDC
    char DigSound[4];  // 0xE0
    char CreateUnitSound[4];  // 0xE4
    char CreateInfantrySound[4];  // 0xE8
    char CreateAircraftSound[4];  // 0xEC
    char BaseUnderAttackSound[4];  // 0xF0
    char GUIMainButtonSound[4];  // 0xF4
    char GUIBuildSound[4];  // 0xF8
    unsigned int q0FA;  // 0xFA
    char GUITabSound[4];  // 0xFC
    char GUIOpenSound[4];  // 0x100
    char GUICloseSound[4];  // 0x104
    char GUIMoveOutSound[4];  // 0x108
    char GUIMoveInSound[4];  // 0x10C
    char GUIScrollSound[4];  // 0x110
    char GUIComboOpenSound[4];  // 0x114
    char GUIComboCloseSound[4];  // 0x118
    char GUICheckboxSound[4];  // 0x11C
    char ScoreAnimSound[4];  // 0x120
    char IFVTransformSound[4];  // 0x124
    char PsychicSensorDetectSound[4];  // 0x128
    char BuildingGarrisonedSound[4];  // 0x12C
    char BuildingAbandonedSound[4];  // 0x130
    char BuildingRepairedSound[4];  // 0x134
    char CheerSound[4];  // 0x138
    char PlaceBeaconSound[4];  // 0x13C
    char DefaultChronoSound[4];  // 0x140
    char StartPlanningModeSound[4];  // 0x144
    char AddPlanningModeCommandSound[4];  // 0x148
    char ExecutePlanSound[4];  // 0x14C
    char EndPlanningModeSound[4];  // 0x150
    char CrateMoneySound[4];  // 0x154
    char CrateRevealSound[4];  // 0x158
    char CrateFireSound[4];  // 0x15C
    char CrateArmourSound[4];  // 0x160
    char CrateSpeedSound[4];  // 0x164
    char CrateUnitSound[4];  // 0x168
    char CratePromoteSound[4];  // 0x16C
    char ImpactWaterSound[4];  // 0x170
    char ImpactLandSound[4];  // 0x174
    char SinkingSound[4];  // 0x178
    char BombTickingSound[4];  // 0x17C
    char BombAttachSound[4];  // 0x180
    char YuriMindControlSound[4];  // 0x184
    char ChronoInSound[4];  // 0x188
    char ChronoOutSound[4];  // 0x18C
    char SpySatActivationSound[4];  // 0x190
    char SpySatDeactivationSound[4];  // 0x194
    char UpgradeVeteranSound[4];  // 0x198
    char UpgradeEliteSound[4];  // 0x19C
    char VoiceIFVRepair[4];  // 0x1A0
    char SlavesFreeSound[4];  // 0x1A4
    char SlaveMinerDeploySound[4];  // 0x1A8
    char SlaveMinerUndeploySound[4];  // 0x1AC
    char BunkerWallsUpSound[4];  // 0x1B0
    char BunkerWallsDownSound[4];  // 0x1B4
    char RepairBridgeSound[4];  // 0x1B8
    char PsychicDominatorActivateSound[4];  // 0x1BC
    char GeneticMutatorActivateSound[4];  // 0x1C0
    char PsychicRevealActivateSound[4];  // 0x1C4
    char MasterMindOverloadDeathSound[4];  // 0x1C8
    char AirstrikeAbortSound[4];  // 0x1CC
    char AirstrikeAttackVoice[4];  // 0x1D0
    char MindClearedSound[4];  // 0x1D4
    char EnterGrinderSound[4];  // 0x1D8
    char LeaveGrinderSound[4];  // 0x1DC
    char EnterBioReactorSound[4];  // 0x1E0
    char LeaveBioReactorSound[4];  // 0x1E4
    char ActivateSound[4];  // 0x1E8
    char DeactivateSound[4];  // 0x1EC
    char SpyPlaneCamera[4];  // 0x1F0
    unsigned int q1F1;  // 0x1F1
    char SpyPlaneCameraFrames[4];  // 0x1F4
    AnimTypeClass* Dig;  // 0x1F8
    AnimTypeClass* IonBlast;  // 0x1FC
    AnimTypeClass* IonBeam;  // 0x200
    unsigned int DamageFireTypes;  // 0x204
    char ParadropRadius[4];  // 0x208
    double ZoomInFactor;  // 0x20C
    unsigned int u32_210;  // 0x210
    double ConditionRedSparkingProbability;  // 0x214
    unsigned int u32_218;  // 0x218
    double ConditionYellowSparkingProbability;  // 0x21C
    int q220;  // 0x220
    char TiberiumExplosionDamage[4];  // 0x224
    char TiberiumStrength[4];  // 0x228
    float MinLowPowerProductionSpeed;  // 0x22C
    float MaxLowPowerProductionSpeed;  // 0x230
    float LowPowerPenaltyModifier;  // 0x234
    float MultipleFactory;  // 0x238
    char MaximumCheerRate[4];  // 0x23C
    unsigned int q23D;  // 0x23D
    int q240;  // 0x240
    unsigned char q241;  // 0x241
    char q244[4];  // 0x244
    unsigned int q248;  // 0x248
    unsigned int q24B;  // 0x24B
    unsigned int u32_24C;  // 0x24C
    unsigned char q24F;  // 0x24F
    unsigned int q250;  // 0x250
    unsigned char q254;  // 0x254
    unsigned char q258;  // 0x258
    unsigned int q259;  // 0x259
    unsigned int u32_25C;  // 0x25C
    unsigned char q25D;  // 0x25D
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q267;  // 0x267
    unsigned int q268;  // 0x268
    unsigned int u32_26C;  // 0x26C
    unsigned int u32_270;  // 0x270
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned char q27C;  // 0x27C
    int q280;  // 0x280
    unsigned int q283;  // 0x283
    int q284;  // 0x284
    unsigned char q287;  // 0x287
    int q288;  // 0x288
    char q298[4];  // 0x298
    unsigned char q29C;  // 0x29C
    void * q2A0;  // 0x2A0
    void * q2A4;  // 0x2A4
    void * q2A8;  // 0x2A8
    unsigned char q2AC;  // 0x2AC
    void * q2AD;  // 0x2AD
    unsigned char q2B1;  // 0x2B1
    void * q2BC;  // 0x2BC
    void * q2C0;  // 0x2C0
    void * q2C4;  // 0x2C4
    unsigned char q2C8;  // 0x2C8
    void * q2C9;  // 0x2C9
    char q2CC[4];  // 0x2CC
    unsigned char q2D0;  // 0x2D0
    char q2D7[4];  // 0x2D7
    void * q2D8;  // 0x2D8
    unsigned int q2DA;  // 0x2DA
    void * q2DC;  // 0x2DC
    unsigned int q2DE;  // 0x2DE
    void * q2E0;  // 0x2E0
    unsigned int q2E1;  // 0x2E1
    void * q2E5;  // 0x2E5
    char q2E8[4];  // 0x2E8
    unsigned char q2EC;  // 0x2EC
    unsigned int q2F1;  // 0x2F1
    char q2F4[4];  // 0x2F4
    unsigned char q2F8;  // 0x2F8
    int q300;  // 0x300
    unsigned int q302;  // 0x302
    int q304;  // 0x304
    unsigned int q305;  // 0x305
    int q308;  // 0x308
    unsigned char q309;  // 0x309
    void * q310;  // 0x310
    unsigned int q313;  // 0x313
    unsigned char q317;  // 0x317
    int q320;  // 0x320
    unsigned int q321;  // 0x321
    int q324;  // 0x324
    unsigned char q325;  // 0x325
    int q328;  // 0x328
    unsigned int q32F;  // 0x32F
    unsigned char q333;  // 0x333
    void * q338;  // 0x338
    unsigned int q33D;  // 0x33D
    int q340;  // 0x340
    unsigned char q341;  // 0x341
    char q344[4];  // 0x344
    int q348;  // 0x348
    unsigned int q34B;  // 0x34B
    unsigned char q34F;  // 0x34F
    void * q358;  // 0x358
    void * q35C;  // 0x35C
    void * q360;  // 0x360
    int q364;  // 0x364
    void * q365;  // 0x365
    int q368;  // 0x368
    unsigned char q369;  // 0x369
    unsigned int q370;  // 0x370
    void * q374;  // 0x374
    void * q378;  // 0x378
    void * q37C;  // 0x37C
    int q380;  // 0x380
    void * q381;  // 0x381
    int q384;  // 0x384
    unsigned char q385;  // 0x385
    int q388;  // 0x388
    void * q390;  // 0x390
    void * q394;  // 0x394
    void * q398;  // 0x398
    unsigned char q39C;  // 0x39C
    void * q39D;  // 0x39D
    unsigned char q3A1;  // 0x3A1
    void * q3AC;  // 0x3AC
    void * q3B0;  // 0x3B0
    void * q3B4;  // 0x3B4
    unsigned char q3B8;  // 0x3B8
    void * q3B9;  // 0x3B9
    unsigned char q3BD;  // 0x3BD
    void * q3C8;  // 0x3C8
    void * q3CC;  // 0x3CC
    void * q3D0;  // 0x3D0
    unsigned char q3D4;  // 0x3D4
    void * q3D5;  // 0x3D5
    unsigned char q3D9;  // 0x3D9
    void * q3E4;  // 0x3E4
    void * q3E8;  // 0x3E8
    void * q3EC;  // 0x3EC
    unsigned char q3F0;  // 0x3F0
    void * q3F1;  // 0x3F1
    unsigned char q3F5;  // 0x3F5
    char q3F8[4];  // 0x3F8
    unsigned int q3F9;  // 0x3F9
    unsigned char q3FD;  // 0x3FD
    int q400;  // 0x400
    int q404;  // 0x404
    int q408;  // 0x408
    unsigned char q40C;  // 0x40C
    unsigned char q410;  // 0x410
    unsigned char q414;  // 0x414
    int q420;  // 0x420
    int q424;  // 0x424
    int q428;  // 0x428
    unsigned char q42C;  // 0x42C
    unsigned char q430;  // 0x430
    unsigned char q434;  // 0x434
    void * q43C;  // 0x43C
    void * q440;  // 0x440
    void * q444;  // 0x444
    int q448;  // 0x448
    void * q449;  // 0x449
    unsigned char q44D;  // 0x44D
    void * q458;  // 0x458
    void * q45C;  // 0x45C
    void * q460;  // 0x460
    int q464;  // 0x464
    void * q465;  // 0x465
    int q468;  // 0x468
    unsigned char q469;  // 0x469
    void * q474;  // 0x474
    void * q478;  // 0x478
    void * q47C;  // 0x47C
    int q480;  // 0x480
    void * q481;  // 0x481
    int q484;  // 0x484
    unsigned char q485;  // 0x485
    int q488;  // 0x488
    unsigned int u32_4D4;  // 0x4D4
    int q500;  // 0x500
    void * q504;  // 0x504
    void * q508;  // 0x508
    int q520;  // 0x520
    unsigned int q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned int q530;  // 0x530
    int q534;  // 0x534
    unsigned int q540;  // 0x540
    int q544;  // 0x544
    int q548;  // 0x548
    float q560;  // 0x560
    float q564;  // 0x564
    float q568;  // 0x568
    char q580[4];  // 0x580
    unsigned int q584;  // 0x584
    double TreeFlammability;  // 0x588
    unsigned char q58C;  // 0x58C
    double MissileSpeedVar;  // 0x590
    unsigned int q594;  // 0x594
    double MissileROTVar;  // 0x598
    char MissileSafetyAltitude[4];  // 0x5A0
    WeaponTypeClass* DropPodWeapon;  // 0x5A4
    char DropPodHeight[4];  // 0x5A8
    char DropPodSpeed[4];  // 0x5AC
    double DropPodAngle;  // 0x5B0
    double ScrollMultiplier;  // 0x5B8
    double CrewEscape;  // 0x5C0
    char ShakeScreen[4];  // 0x5C8
    char HoverHeight[4];  // 0x5CC
    double HoverBob;  // 0x5D0
    double HoverBoost;  // 0x5D8
    double HoverAcceleration;  // 0x5E0
    double HoverBrake;  // 0x5E8
    double HoverDampen;  // 0x5F0
    double PlacementDelay;  // 0x5F8
    char CloakingStages[4];  // 0x600
    char RevealTriggerRadius[4];  // 0x604
    double ShipSinkingWeight;  // 0x608
    double IceCrackingWeight;  // 0x610
    double IceBreakingWeight;  // 0x618
    double VeteranRatio;  // 0x620
    unsigned int q624;  // 0x624
    double VeteranCombat;  // 0x628
    double VeteranSpeed;  // 0x630
    double VeteranSight;  // 0x638
    double VeteranArmor;  // 0x640
    int q644;  // 0x644
    double VeteranROF;  // 0x648
    void * q64C;  // 0x64C
    double VeteranCap;  // 0x650
    void * q655;  // 0x655
    char CloakSound[4];  // 0x658
    char SellSound[4];  // 0x65C
    char GameClosed[4];  // 0x660
    char IncomingMessage[4];  // 0x664
    char SystemError[4];  // 0x668
    char OptionsChanged[4];  // 0x66C
    char GameForming[4];  // 0x670
    char PlayerLeft[4];  // 0x674
    char PlayerJoined[4];  // 0x678
    char MessageCharTyped[4];  // 0x67C
    char Construction[4];  // 0x680
    unsigned char CreditTicks;  // 0x684
    char BuildingDieSound[4];  // 0x69C
    char BuildingSlam[4];  // 0x6A0
    char RadarOn[4];  // 0x6A4
    char RadarOff[4];  // 0x6A8
    char MovieOn[4];  // 0x6AC
    char MovieOff[4];  // 0x6B0
    char ScoldSound[4];  // 0x6B4
    char TeslaCharge[4];  // 0x6B8
    char TeslaZap[4];  // 0x6BC
    char GenericClick[4];  // 0x6C0
    char GenericBeep[4];  // 0x6C4
    char BuildingDamageSound[4];  // 0x6C8
    char HealCrateSound[4];  // 0x6CC
    char ChuteSound[4];  // 0x6D0
    char StopSound[4];  // 0x6D4
    char GuardSound[4];  // 0x6D8
    char ScatterSound[4];  // 0x6DC
    char DeploySound[4];  // 0x6E0
    char StormSound[4];  // 0x6E4
    unsigned char LightningSounds;  // 0x6E8
    char ShellButtonSlideSound[4];  // 0x700
    void * q704;  // 0x704
    void * q708;  // 0x708
    unsigned char q70C;  // 0x70C
    unsigned char q710;  // 0x710
    unsigned char q714;  // 0x714
    unsigned char q720;  // 0x720
    unsigned char q724;  // 0x724
    void * q728;  // 0x728
    unsigned char q72C;  // 0x72C
    unsigned int q730;  // 0x730
    void * q734;  // 0x734
    void * q738;  // 0x738
    void * q73C;  // 0x73C
    unsigned char q740;  // 0x740
    char q744[4];  // 0x744
    unsigned char q745;  // 0x745
    unsigned char q748;  // 0x748
    unsigned int q754;  // 0x754
    double WallBuildSpeedCoefficient;  // 0x758
    double ChargeToDrainRatio;  // 0x760
    char WindDirection[4];  // 0x768
    char CameraRange[4];  // 0x76C
    char FlightLevel[4];  // 0x770
    char ParachuteMaxFallRate[4];  // 0x774
    char NoParachuteMaxFallRate[4];  // 0x778
    char BuildingDrop[4];  // 0x77C
    BuildingTypeClass* GDIGateOne;  // 0x780
    BuildingTypeClass* GDIGateTwo;  // 0x784
    BuildingTypeClass* NodGateOne;  // 0x788
    BuildingTypeClass* NodGateTwo;  // 0x78C
    BuildingTypeClass* WallTower;  // 0x790
    unsigned int BuildConst;  // 0x794
    unsigned int BuildPower;  // 0x798
    unsigned int BuildRefinery;  // 0x79C
    unsigned int BuildBarracks;  // 0x7A0
    unsigned int BuildTech;  // 0x7A4
    unsigned int BuildWeapons;  // 0x7A8
    unsigned int BuildNavalYard;  // 0x7AC
    double GDIWallDefense;  // 0x7B0
    double GDIWallDefenseCoefficient;  // 0x7B8
    double NodBaseDefenseCoefficient;  // 0x7C0
    unsigned int u32_7C4;  // 0x7C4
    double GDIBaseDefenseCoefficient;  // 0x7C8
    char ComputerBaseDefenseResponse[4];  // 0x7D0
    char MaximumBaseDefenseValue[4];  // 0x7D4
    unsigned int BaseUnit;  // 0x7D8
    unsigned int HarvesterUnit;  // 0x7DC
    unsigned int PadAircraft;  // 0x7E0
    unsigned int OnFire;  // 0x7E4
    unsigned int TreeFire;  // 0x7E8
    AnimTypeClass* Smoke;  // 0x7EC
    AnimTypeClass* SmokeAlt;  // 0x7F0
    AnimTypeClass* MoveFlash;  // 0x7F4
    AnimTypeClass* BombParachute;  // 0x7F8
    AnimTypeClass* Parachute;  // 0x7FC
    unsigned int SplashList;  // 0x800
    AnimTypeClass* SmallFire;  // 0x804
    AnimTypeClass* LargeFire;  // 0x808
    InfantryTypeClass* Paratrooper;  // 0x80C
    char EliteFlashTimer[4];  // 0x810
    char ChronoDelay[4];  // 0x814
    char ChronoReinfDelay[4];  // 0x818
    char ChronoDistanceFactor[4];  // 0x81C
    bool ChronoTrigger;  // 0x820
    unsigned char q821;  // 0x821
    char ChronoMinimumDelay[4];  // 0x824
    char ChronoRangeMinimum[4];  // 0x828
    InfantryTypeClass* AlliedDisguise;  // 0x82C
    InfantryTypeClass* SovietDisguise;  // 0x830
    InfantryTypeClass* ThirdDisguise;  // 0x834
    char SpyPowerBlackout[4];  // 0x838
    float SpyMoneyStealPercent;  // 0x83C
    bool AttackCursorOnDisguise;  // 0x840
    unsigned char q841;  // 0x841
    float AIMinorSuperReadyPercent;  // 0x844
    char AISafeDistance[4];  // 0x848
    char HarvesterTooFarDistance[4];  // 0x84C
    char ChronoHarvTooFarDistance[4];  // 0x850
    InfantryTypeClass* Technician;  // 0x854
    InfantryTypeClass* Engineer;  // 0x858
    InfantryTypeClass* Pilot;  // 0x85C
    InfantryTypeClass* AlliedCrew;  // 0x860
    InfantryTypeClass* SovietCrew;  // 0x864
    InfantryTypeClass* ThirdCrew;  // 0x868
    WarheadTypeClass* FlameDamage;  // 0x86C
    WarheadTypeClass* FlameDamage2;  // 0x870
    WarheadTypeClass* NukeWarhead;  // 0x874
    BulletTypeClass* NukeProjectile;  // 0x878
    BulletTypeClass* NukeDown;  // 0x87C
    WarheadTypeClass* MutateWarhead;  // 0x880
    WarheadTypeClass* MutateExplosionWarhead;  // 0x884
    WarheadTypeClass* C4Warhead;  // 0x888
    WarheadTypeClass* CrushWarhead;  // 0x88C
    WarheadTypeClass* V3Warhead;  // 0x890
    WarheadTypeClass* DMislWarhead;  // 0x894
    WarheadTypeClass* CMislWarhead;  // 0x898
    WarheadTypeClass* V3EliteWarhead;  // 0x89C
    WarheadTypeClass* DMislEliteWarhead;  // 0x8A0
    WarheadTypeClass* CMislEliteWarhead;  // 0x8A4
    WarheadTypeClass* IvanWarhead;  // 0x8A8
    WarheadTypeClass* IonCannonWarhead;  // 0x8AC
    char IvanDamage[4];  // 0x8B0
    char IvanTimedDelay[4];  // 0x8B4
    bool CanDetonateTimeBomb;  // 0x8B8
    bool CanDetonateDeathBomb;  // 0x8B9
    unsigned char q8BA;  // 0x8BA
    char IvanIconFlickerRate[4];  // 0x8BC
    WeaponTypeClass* DeathWeapon;  // 0x8C0
    void* BOMBCURS_SHP;  // 0x8C4
    void* CHRONOSK_SHP;  // 0x8C8
    char IronCurtainDuration[4];  // 0x8CC
    char PsychicRevealRadius[4];  // 0x8D0
    char V3Rocket[52];  // 0x8D4
    void * q8E4;  // 0x8E4
    void * q8E8;  // 0x8E8
    void * q8EC;  // 0x8EC
    void * q8F1;  // 0x8F1
    void * q900;  // 0x900
    void * q904;  // 0x904
    char DMisl[52];  // 0x908
    void * q90D;  // 0x90D
    int q914;  // 0x914
    int q918;  // 0x918
    void * q91C;  // 0x91C
    void * q920;  // 0x920
    void * q924;  // 0x924
    void * q938;  // 0x938
    char CMisl[52];  // 0x93C
    void * q940;  // 0x940
    void * q944;  // 0x944
    void * q945;  // 0x945
    void * q948;  // 0x948
    void * q954;  // 0x954
    void * q958;  // 0x958
    void * q95C;  // 0x95C
    void * q961;  // 0x961
    void * q968;  // 0x968
    double MyEffectivenessCoefficientDefault;  // 0x970
    void * q974;  // 0x974
    double TargetEffectivenessCoefficientDefault;  // 0x978
    void * q97D;  // 0x97D
    double TargetSpecialThreatCoefficientDefault;  // 0x980
    double TargetStrengthCoefficientDefault;  // 0x988
    void * q98C;  // 0x98C
    double TargetDistanceCoefficientDefault;  // 0x990
    void * q994;  // 0x994
    double EnemyHouseThreatBonus;  // 0x998
    void * q999;  // 0x999
    double TurboBoost;  // 0x9A0
    double AttackInterval;  // 0x9A8
    void * q9AC;  // 0x9AC
    double AttackDelay;  // 0x9B0
    void * q9B5;  // 0x9B5
    double PowerEmergency;  // 0x9B8
    double AirstripRatio;  // 0x9C0
    void * q9C4;  // 0x9C4
    char AirstripLimit[4];  // 0x9C8
    double HelipadRatio;  // 0x9CC
    char HelipadLimit[4];  // 0x9D4
    double TeslaRatio;  // 0x9D8
    char TeslaLimit[4];  // 0x9E0
    double AARatio;  // 0x9E4
    void * q9E8;  // 0x9E8
    char AALimit[4];  // 0x9EC
    double DefenseRatio;  // 0x9F0
    char DefenseLimit[4];  // 0x9F8
    double WarRatio;  // 0x9FC
    char WarLimit[4];  // 0xA04
    double BarracksRatio;  // 0xA08
    char BarracksLimit[4];  // 0xA10
    char RefineryLimit[4];  // 0xA14
    double RefineryRatio;  // 0xA18
    void * qA1C;  // 0xA1C
    char BaseSizeAdd[4];  // 0xA20
    char PowerSurplus[4];  // 0xA24
    void * qA25;  // 0xA25
    char InfantryReserve[4];  // 0xA28
    char InfantryBaseMult[4];  // 0xA2C
    char SoloCrateMoney[4];  // 0xA30
    char TreeStrength[4];  // 0xA34
    UnitTypeClass* UnitCrateType;  // 0xA38
    double PatrolScan;  // 0xA3C
    double CloakDelay;  // 0xA44
    double GameSpeedBias;  // 0xA4C
    void * qA50;  // 0xA50
    double BaseBias;  // 0xA54
    void * qA58;  // 0xA58
    double ExpSpread;  // 0xA5C
    char FireSupress[4];  // 0xA64
    char MaxIQLevels[4];  // 0xA68
    char SuperWeapons[4];  // 0xA6C
    char Production[4];  // 0xA70
    char GuardArea[4];  // 0xA74
    char RepairSell[4];  // 0xA78
    char AutoCrush[4];  // 0xA7C
    char Scatter[4];  // 0xA80
    char ContentScan[4];  // 0xA84
    char Aircraft[4];  // 0xA88
    char Harvester[4];  // 0xA8C
    char SellBack[4];  // 0xA90
    char AIBaseSpacing[4];  // 0xA94
    char SilverCrate[4];  // 0xA98
    char WoodCrate[4];  // 0xA9C
    char WaterCrate[4];  // 0xAA0
    char CrateMinimum[4];  // 0xAA4
    char CrateMaximum[4];  // 0xAA8
    char Money[4];  // 0xAAC
    char MinMoney[4];  // 0xAB0
    char MaxMoney[4];  // 0xAB4
    char MoneyIncrement[4];  // 0xAB8
    char UnitCount[4];  // 0xABC
    char MinUnitCount[4];  // 0xAC0
    char MaxUnitCount[4];  // 0xAC4
    char TechLevel[4];  // 0xAC8
    char GameSpeed[4];  // 0xACC
    char AIPlayers[4];  // 0xAD0
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
    char SuspendPriority[4];  // 0xB04
    double SuspendDelay;  // 0xB08
    double SurvivorRate;  // 0xB10
    char AlliedSurvivorDivisor[4];  // 0xB18
    char SovietSurvivorDivisor[4];  // 0xB1C
    char ThirdSurvivorDivisor[4];  // 0xB20
    double ReloadRate;  // 0xB24
    double AutocreateTime;  // 0xB2C
    double BuildupTime;  // 0xB34
    char HarvesterLoadRate[4];  // 0xB3C
    double HarvesterDumpRate;  // 0xB40
    char AtomDamage[4];  // 0xB48
    char Easy[80];  // 0xB4C
    void * qB58;  // 0xB58
    void * qB74;  // 0xB74
    void * qB90;  // 0xB90
    char Normal[80];  // 0xB9C
    void * qBC0;  // 0xBC0
    char Difficult[80];  // 0xBEC
    void * qC04;  // 0xC04
    void * qC20;  // 0xC20
    unsigned char qC3C;  // 0xC3C
    void * qC58;  // 0xC58
    unsigned char qC5C;  // 0xC5C
    void * qC74;  // 0xC74
    unsigned char qC78;  // 0xC78
    void * qC90;  // 0xC90
    unsigned char qC94;  // 0xC94
    void * qCAC;  // 0xCAC
    unsigned char qCB0;  // 0xCB0
    void * qCC8;  // 0xCC8
    unsigned char qCCC;  // 0xCCC
    void * qCE4;  // 0xCE4
    unsigned char qCE8;  // 0xCE8
    void * qD00;  // 0xD00
    unsigned char qD04;  // 0xD04
    void * qD1C;  // 0xD1C
    unsigned char qD20;  // 0xD20
    void * qD38;  // 0xD38
    unsigned char qD3C;  // 0xD3C
    void * qD80;  // 0xD80
    unsigned int qD84;  // 0xD84
    unsigned char qD88;  // 0xD88
    unsigned int qD90;  // 0xD90
    unsigned char qD94;  // 0xD94
    void * qD9C;  // 0xD9C
    unsigned int qDA0;  // 0xDA0
    unsigned char qDA4;  // 0xDA4
    unsigned int qDAC;  // 0xDAC
    unsigned char qDB0;  // 0xDB0
    void * qDB8;  // 0xDB8
    unsigned int qDBC;  // 0xDBC
    unsigned char qDC0;  // 0xDC0
    unsigned int qDC8;  // 0xDC8
    unsigned char qDCC;  // 0xDCC
    void * qDD4;  // 0xDD4
    unsigned int qDD8;  // 0xDD8
    unsigned char qDDC;  // 0xDDC
    unsigned int qDE4;  // 0xDE4
    unsigned char qDE8;  // 0xDE8
    void * qE10;  // 0xE10
    unsigned int qE14;  // 0xE14
    unsigned char qE18;  // 0xE18
    unsigned int qE20;  // 0xE20
    unsigned char qE24;  // 0xE24
    void * qE2C;  // 0xE2C
    unsigned int qE30;  // 0xE30
    unsigned char qE34;  // 0xE34
    unsigned int qE3C;  // 0xE3C
    unsigned char qE40;  // 0xE40
    void * qE4C;  // 0xE4C
    unsigned char qE50;  // 0xE50
    void * qE68;  // 0xE68
    unsigned char qE6C;  // 0xE6C
    void * qE84;  // 0xE84
    unsigned char qE88;  // 0xE88
    void * qEA0;  // 0xEA0
    unsigned char qEA4;  // 0xEA4
    void * qEC4;  // 0xEC4
    unsigned int qEC8;  // 0xEC8
    unsigned char qECC;  // 0xECC
    unsigned int qED4;  // 0xED4
    unsigned char qED8;  // 0xED8
    void * qEE8;  // 0xEE8
    unsigned int qEEC;  // 0xEEC
    unsigned char qEF0;  // 0xEF0
    unsigned int qEF8;  // 0xEF8
    unsigned char qEFC;  // 0xEFC
    void * qF04;  // 0xF04
    unsigned int qF08;  // 0xF08
    unsigned char qF0C;  // 0xF0C
    unsigned int qF14;  // 0xF14
    unsigned char qF18;  // 0xF18
    void * qF20;  // 0xF20
    unsigned int qF24;  // 0xF24
    unsigned char qF28;  // 0xF28
    unsigned int qF30;  // 0xF30
    unsigned char qF34;  // 0xF34
    void * qFF8;  // 0xFF8
    unsigned char qFFC;  // 0xFFC
    void * q1000;  // 0x1000
    void * q1004;  // 0x1004
    unsigned char q1008;  // 0x1008
    int q1024;  // 0x1024
    int q1028;  // 0x1028
    unsigned char q1030;  // 0x1030
    unsigned char q1040;  // 0x1040
    unsigned char q1050;  // 0x1050
    int q1060;  // 0x1060
    int q1064;  // 0x1064
    unsigned char q1068;  // 0x1068
    int q1074;  // 0x1074
    int q1078;  // 0x1078
    void * q1084;  // 0x1084
    void * q1088;  // 0x1088
    int q1110;  // 0x1110
    void * q1120;  // 0x1120
    int q1124;  // 0x1124
    int q1128;  // 0x1128
    int q1138;  // 0x1138
    void * q1140;  // 0x1140
    void * q1144;  // 0x1144
    void * q1148;  // 0x1148
    void * q1158;  // 0x1158
    unsigned int q115C;  // 0x115C
    unsigned char q1160;  // 0x1160
    unsigned int q1168;  // 0x1168
    unsigned char q116C;  // 0x116C
    int q1170;  // 0x1170
    void * q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    void * q1194;  // 0x1194
    unsigned int q1198;  // 0x1198
    unsigned char q119C;  // 0x119C
    unsigned int q11A4;  // 0x11A4
    unsigned char q11A8;  // 0x11A8
    void * q11B0;  // 0x11B0
    unsigned int q11B4;  // 0x11B4
    unsigned char q11B8;  // 0x11B8
    unsigned int q11C0;  // 0x11C0
    unsigned char q11C4;  // 0x11C4
    void * q11CC;  // 0x11CC
    unsigned int q11D0;  // 0x11D0
    unsigned char q11D4;  // 0x11D4
    unsigned int q11DC;  // 0x11DC
    unsigned char q11E0;  // 0x11E0
    void * q11E8;  // 0x11E8
    unsigned int q11EC;  // 0x11EC
    unsigned char q11F0;  // 0x11F0
    unsigned int q11F8;  // 0x11F8
    unsigned char q11FC;  // 0x11FC
    void * q1204;  // 0x1204
    unsigned int q1208;  // 0x1208
    unsigned char q120C;  // 0x120C
    unsigned int q1214;  // 0x1214
    unsigned char q1218;  // 0x1218
    void * q1220;  // 0x1220
    unsigned int q1224;  // 0x1224
    unsigned char q1228;  // 0x1228
    unsigned int q1230;  // 0x1230
    unsigned char q1234;  // 0x1234
    void * q123C;  // 0x123C
    unsigned int q1240;  // 0x1240
    unsigned char q1244;  // 0x1244
    unsigned int q124C;  // 0x124C
    unsigned char q1250;  // 0x1250
    void* q1254;  // 0x1254
    void * q1258;  // 0x1258
    unsigned int q125C;  // 0x125C
    unsigned char q1260;  // 0x1260
    unsigned int q1268;  // 0x1268
    unsigned char q126C;  // 0x126C
    void * q1274;  // 0x1274
    unsigned int q1278;  // 0x1278
    unsigned char q127C;  // 0x127C
    int q1280;  // 0x1280
    unsigned int q1284;  // 0x1284
    unsigned char q1288;  // 0x1288
    void * q1290;  // 0x1290
    unsigned int q1294;  // 0x1294
    unsigned char q1298;  // 0x1298
    unsigned int q12A0;  // 0x12A0
    unsigned char q12A4;  // 0x12A4
    void * q12AC;  // 0x12AC
    unsigned int q12B0;  // 0x12B0
    unsigned char q12B4;  // 0x12B4
    unsigned int q12BC;  // 0x12BC
    unsigned char q12C0;  // 0x12C0
    void * q12C8;  // 0x12C8
    unsigned int q12CC;  // 0x12CC
    unsigned char q12D0;  // 0x12D0
    unsigned int q12D8;  // 0x12D8
    unsigned char q12DC;  // 0x12DC
    void * q12E4;  // 0x12E4
    unsigned int q12E8;  // 0x12E8
    unsigned char q12EC;  // 0x12EC
    unsigned int q12F4;  // 0x12F4
    unsigned char q12F8;  // 0x12F8
    void * q1304;  // 0x1304
    unsigned char q1308;  // 0x1308
    void * q1320;  // 0x1320
    unsigned char q1324;  // 0x1324
    unsigned int q1328;  // 0x1328
    unsigned int q1330;  // 0x1330
    unsigned int q1334;  // 0x1334
    void * q133C;  // 0x133C
    unsigned char q1340;  // 0x1340
    unsigned int q1344;  // 0x1344
    int q1348;  // 0x1348
    void * q1358;  // 0x1358
    unsigned char q135C;  // 0x135C
    void * q1374;  // 0x1374
    unsigned char q1378;  // 0x1378
    float q1380;  // 0x1380
    float q1384;  // 0x1384
    void * q1390;  // 0x1390
    unsigned int q1394;  // 0x1394
    unsigned char q1398;  // 0x1398
    unsigned int q13A0;  // 0x13A0
    unsigned char q13A4;  // 0x13A4
    void * q13AC;  // 0x13AC
    unsigned int q13B0;  // 0x13B0
    unsigned char q13B4;  // 0x13B4
    unsigned int q13BC;  // 0x13BC
    unsigned char q13C0;  // 0x13C0
    void * q13C8;  // 0x13C8
    unsigned char q13CC;  // 0x13CC
    void * q13F0;  // 0x13F0
    unsigned int q13F4;  // 0x13F4
    unsigned char q13F8;  // 0x13F8
    unsigned int q1400;  // 0x1400
    unsigned char q1404;  // 0x1404
    char q1408[4];  // 0x1408
    unsigned int u32_1420;  // 0x1420
    unsigned int u32_1424;  // 0x1424
    unsigned int u32_1428;  // 0x1428
    unsigned int u32_142C;  // 0x142C
    unsigned int u32_1430;  // 0x1430
    unsigned int q1434;  // 0x1434
    unsigned int q1438;  // 0x1438
    unsigned int q143C;  // 0x143C
    unsigned int q1440;  // 0x1440
    unsigned int q1444;  // 0x1444
    unsigned int q1448;  // 0x1448
    unsigned int q144C;  // 0x144C
    unsigned int q1450;  // 0x1450
    unsigned int q1454;  // 0x1454
    unsigned int q1458;  // 0x1458
    unsigned int q145C;  // 0x145C
    unsigned int q1460;  // 0x1460
    unsigned char q1464;  // 0x1464
    unsigned int u32_1468;  // 0x1468
    unsigned int u32_146C;  // 0x146C
    unsigned int u32_1470;  // 0x1470
    unsigned int u32_1474;  // 0x1474
    unsigned int u32_1478;  // 0x1478
    unsigned int u32_147C;  // 0x147C
    int q1480;  // 0x1480
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
    unsigned int u32_14AC;  // 0x14AC
    unsigned int u32_14B0;  // 0x14B0
    unsigned int u32_14B4;  // 0x14B4
    unsigned int u32_14B8;  // 0x14B8
    unsigned int u32_14BC;  // 0x14BC
    unsigned int u32_14C4;  // 0x14C4
    unsigned int u32_14C8;  // 0x14C8
    unsigned int u32_14CC;  // 0x14CC
    unsigned int u32_14D0;  // 0x14D0
    unsigned int u32_14E0;  // 0x14E0
    unsigned int u32_14F0;  // 0x14F0
    unsigned int u32_14F4;  // 0x14F4
    unsigned int u32_14F8;  // 0x14F8
    unsigned int u32_14FC;  // 0x14FC
    unsigned int q1504;  // 0x1504
    unsigned int u32_1508;  // 0x1508
    unsigned int u32_150C;  // 0x150C
    unsigned int q1510;  // 0x1510
    unsigned int q1514;  // 0x1514
    unsigned char q1518;  // 0x1518
    unsigned int u32_151C;  // 0x151C
    unsigned int u32_1520;  // 0x1520
    unsigned int u32_1528;  // 0x1528
    unsigned int u32_152C;  // 0x152C
    unsigned int u32_1530;  // 0x1530
    int q1540;  // 0x1540
    unsigned int q1544;  // 0x1544
    unsigned int q1554;  // 0x1554
    unsigned int q1558;  // 0x1558
    unsigned int q1560;  // 0x1560
    unsigned int q1568;  // 0x1568
    int q1574;  // 0x1574
    unsigned int q1584;  // 0x1584
    unsigned char q1590;  // 0x1590
    unsigned int q1600;  // 0x1600
    int q1604;  // 0x1604
    unsigned int q1608;  // 0x1608
    int q1624;  // 0x1624
    unsigned int q1628;  // 0x1628
    int q1634;  // 0x1634
    double GrowthRate;  // 0x1638
    unsigned int u32_163C;  // 0x163C
    double ShroudRate;  // 0x1640
    unsigned int u32_1644;  // 0x1644
    double FogRate;  // 0x1648
    unsigned int u32_164C;  // 0x164C
    double IceGrowthRate;  // 0x1650
    unsigned int u32_1654;  // 0x1654
    double VeinGrowthRate;  // 0x1658
    unsigned int u32_165C;  // 0x165C
    char IceSolidifyFrameTime[4];  // 0x1660
    double AmbientChangeRate;  // 0x1664
    unsigned int u32_1668;  // 0x1668
    double AmbientChangeStep;  // 0x166C
    unsigned int u32_1670;  // 0x1670
    double CrateRegen;  // 0x1674
    unsigned int u32_1678;  // 0x1678
    double TimerWarning;  // 0x167C
    double SpeakDelay;  // 0x1684
    double DamageDelay;  // 0x168C
    char Gravity[4];  // 0x1694
    char LeptonsPerSightIncrease[4];  // 0x1698
    char Incoming[4];  // 0x169C
    char MinDamage[4];  // 0x16A0
    char MaxDamage[4];  // 0x16A4
    char RepairStep[4];  // 0x16A8
    double RepairPercent;  // 0x16AC
    char IRepairStep[4];  // 0x16B4
    double RepairRate;  // 0x16B8
    unsigned int u32_16BC;  // 0x16BC
    double URepairRate;  // 0x16C0
    unsigned int u32_16C4;  // 0x16C4
    double IRepairRate;  // 0x16C8
    unsigned int u32_16CC;  // 0x16CC
    double ConditionYellow;  // 0x16D0
    unsigned int u32_16D4;  // 0x16D4
    double ConditionRed;  // 0x16D8
    double IdleActionFrequency;  // 0x16E0
    unsigned int u32_16E4;  // 0x16E4
    char CloseEnough[4];  // 0x16E8
    char Stray[4];  // 0x16EC
    char RelaxedStray[4];  // 0x16F0
    char GuardModeStray[4];  // 0x16F4
    char Crush[4];  // 0x16F8
    char CrateRadius[4];  // 0x16FC
    char HomingScatter[4];  // 0x1700
    char BallisticScatter[4];  // 0x1704
    double RefundPercent;  // 0x1708
    unsigned int u32_170C;  // 0x170C
    char BridgeStrength[4];  // 0x1710
    double BuildSpeed;  // 0x1714
    unsigned int u32_1718;  // 0x1718
    double C4Delay;  // 0x171C
    int q1720;  // 0x1720
    char CreditReserve[4];  // 0x1724
    double PathDelay;  // 0x1728
    unsigned int u32_172C;  // 0x172C
    char BlockagePathDelay[4];  // 0x1730
    double MovieTime;  // 0x1734
    unsigned int u32_1738;  // 0x1738
    char TiberiumShortScan[4];  // 0x173C
    char TiberiumLongScan[4];  // 0x1740
    char LightningDeferment[4];  // 0x1744
    char LightningDamage[4];  // 0x1748
    char LightningStormDuration[4];  // 0x174C
    char LightningHitDelay[4];  // 0x1750
    char LightningScatterDelay[4];  // 0x1754
    char LightningCellSpread[4];  // 0x1758
    char LightningSeparation[4];  // 0x175C
    bool LightningPrintText;  // 0x1760
    unsigned char q1761;  // 0x1761
    WarheadTypeClass* LightningWarhead;  // 0x1764
    char ForceShieldRadius[4];  // 0x1768
    char ForceShieldDuration[4];  // 0x176C
    char ForceShieldBlackoutDuration[4];  // 0x1770
    char ForceShieldPlayFadeSoundTime[4];  // 0x1774
    bool MutateExplosion;  // 0x1778
    unsigned char q1779;  // 0x1779
    char CollapseChance[4];  // 0x177C
    char WeedCapacity[4];  // 0x1780
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
    char RadDurationMultiple[4];  // 0x17AC
    char RadApplicationDelay[4];  // 0x17B0
    char RadLevelMax[4];  // 0x17B4
    char RadLevelDelay[4];  // 0x17B8
    char RadLightDelay[4];  // 0x17BC
    double RadLevelFactor;  // 0x17C0
    unsigned int u32_17C4;  // 0x17C4
    double RadLightFactor;  // 0x17C8
    unsigned int u32_17CC;  // 0x17CC
    double RadTintFactor;  // 0x17D0
    unsigned int u32_17D4;  // 0x17D4
    char RadColor[3];  // 0x17D8
    unsigned char q17DB;  // 0x17DB
    WarheadTypeClass* RadSiteWarhead;  // 0x17DC
    char ElevationIncrement[4];  // 0x17E0
    unsigned int q17E3;  // 0x17E3
    double ElevationIncrementBonus;  // 0x17E4
    unsigned int u32_17E8;  // 0x17E8
    double ElevationBonusCap;  // 0x17EC
    unsigned int u32_17F0;  // 0x17F0
    bool AlliedWallTransparency;  // 0x17F4
    unsigned char q17F5;  // 0x17F5
    double WallPenetratorThreshold;  // 0x17F8
    unsigned int u32_17FC;  // 0x17FC
    char LocalRadarColor[3];  // 0x1800
    char LineTrailColorOverride[3];  // 0x1803
    unsigned int q1804;  // 0x1804
    char ChronoBeamColor[3];  // 0x1806
    unsigned int q1808;  // 0x1808
    char MagnaBeamColor[3];  // 0x1809
    char OreTwinkleChance[4];  // 0x180C
    AnimTypeClass* OreTwinkle;  // 0x1810
    char ColorAdd[48];  // 0x1814
    unsigned int q1818;  // 0x1818
    unsigned int q181C;  // 0x181C
    void * ptr_1820;  // 0x1820
    unsigned int u32_1824;  // 0x1824
    unsigned int u32_1828;  // 0x1828
    unsigned int u32_182C;  // 0x182C
    unsigned int q1830;  // 0x1830
    unsigned char u8_1831;  // 0x1831
    unsigned int q1832;  // 0x1832
    unsigned int q1834;  // 0x1834
    unsigned int u32_1838;  // 0x1838
    unsigned int q1840;  // 0x1840
    char LaserTargetColor[4];  // 0x1844
    char IronCurtainColor[4];  // 0x1848
    char BerserkColor[4];  // 0x184C
    char ForceShieldColor[4];  // 0x1850
    float DirectRockingCoefficient;  // 0x1854
    float FallBackCoefficient;  // 0x1858
    char CrewCount[4];  // 0x185C
    unsigned char q1860;  // 0x1860
    unsigned int u32_1864;  // 0x1864
    unsigned int u32_1868;  // 0x1868
    unsigned int u32_186C;  // 0x186C
    unsigned int q1870;  // 0x1870
    unsigned char q1874;  // 0x1874
    char q1878[4];  // 0x1878
    unsigned char q187C;  // 0x187C
    unsigned int q1880;  // 0x1880
    unsigned char q1884;  // 0x1884
    unsigned int q1888;  // 0x1888
    unsigned char q188C;  // 0x188C
    unsigned char q1890;  // 0x1890
    unsigned char q1894;  // 0x1894
    unsigned char q1898;  // 0x1898
    unsigned int u32_18A4;  // 0x18A4
    unsigned int u32_18A8;  // 0x18A8
    unsigned int u32_18AC;  // 0x18AC
    unsigned int u32_18B0;  // 0x18B0
    unsigned int u32_18B4;  // 0x18B4
    unsigned int u32_18B8;  // 0x18B8
    unsigned char q18BC;  // 0x18BC
    unsigned char q18C0;  // 0x18C0
    unsigned char q18C4;  // 0x18C4
    unsigned char q18C8;  // 0x18C8
    unsigned char q18CC;  // 0x18CC
    int q1900;  // 0x1900
    int q1904;  // 0x1904
    int q1908;  // 0x1908
    unsigned char q190C;  // 0x190C
    int q1910;  // 0x1910
    unsigned char q1914;  // 0x1914
    void * q1920;  // 0x1920
    void * q1924;  // 0x1924
    void * q1928;  // 0x1928
    unsigned char q192C;  // 0x192C
    unsigned char q1930;  // 0x1930
    unsigned char q1934;  // 0x1934
    unsigned int q1940;  // 0x1940
    unsigned int q1944;  // 0x1944
    unsigned int q1948;  // 0x1948
    unsigned char q194C;  // 0x194C
    unsigned char q1950;  // 0x1950
    unsigned char q1954;  // 0x1954
    unsigned int q1960;  // 0x1960
    unsigned int q1964;  // 0x1964
    unsigned int q1968;  // 0x1968
    unsigned char q196C;  // 0x196C
    unsigned char q1970;  // 0x1970
    unsigned char q1974;  // 0x1974
    unsigned char q1978;  // 0x1978
    unsigned int q1984;  // 0x1984
    unsigned int q1988;  // 0x1988
    unsigned char q198C;  // 0x198C
    unsigned char q1990;  // 0x1990
    unsigned char q1994;  // 0x1994
    int q2000;  // 0x2000
    int q2004;  // 0x2004
    unsigned int q2008;  // 0x2008
    unsigned char q200C;  // 0x200C
    unsigned char q2010;  // 0x2010
    unsigned char q2014;  // 0x2014
    unsigned int q2020;  // 0x2020
    unsigned int q2024;  // 0x2024
    void * q2028;  // 0x2028
    unsigned char q202C;  // 0x202C
    unsigned char q2030;  // 0x2030
    unsigned char q2034;  // 0x2034
    void * q2040;  // 0x2040
    void * q2044;  // 0x2044
    unsigned int q2048;  // 0x2048
    unsigned char q204C;  // 0x204C
    int q2054;  // 0x2054
    unsigned char q2058;  // 0x2058
    void * q2060;  // 0x2060
    int q2064;  // 0x2064
    int q2068;  // 0x2068
    unsigned char q206C;  // 0x206C
    char q2080;  // 0x2080
    int q2084;  // 0x2084
    int q2088;  // 0x2088
    unsigned char q208C;  // 0x208C
    int q2098;  // 0x2098
    unsigned char q209C;  // 0x209C
    unsigned char q20A0;  // 0x20A0
    unsigned char q20A4;  // 0x20A4
    unsigned char q20A8;  // 0x20A8
    unsigned char q20AC;  // 0x20AC
    void * q2100;  // 0x2100
    int q2104;  // 0x2104
    float q2108;  // 0x2108
    unsigned char q210C;  // 0x210C
    unsigned char q2110;  // 0x2110
    unsigned char q2114;  // 0x2114
    unsigned char q211C;  // 0x211C
    int q2120;  // 0x2120
    int q2124;  // 0x2124
    int q2128;  // 0x2128
    unsigned char q212C;  // 0x212C
    unsigned char q2130;  // 0x2130
    void * q2134;  // 0x2134
    unsigned char q2138;  // 0x2138
    void * q2140;  // 0x2140
    void * q2144;  // 0x2144
    void * q2148;  // 0x2148
    unsigned char q214C;  // 0x214C
    unsigned char q2150;  // 0x2150
    unsigned char q2154;  // 0x2154
    void * q2160;  // 0x2160
    void * q2164;  // 0x2164
    void * q2168;  // 0x2168
    unsigned char q216C;  // 0x216C
    int q2178;  // 0x2178
    unsigned char q217C;  // 0x217C
    void * q2180;  // 0x2180
    void * q2184;  // 0x2184
    void * q2188;  // 0x2188
    unsigned char q218C;  // 0x218C
    unsigned char q2190;  // 0x2190
    void * q2194;  // 0x2194
    int q2198;  // 0x2198
    unsigned char q219C;  // 0x219C
    void * q2200;  // 0x2200
    void * q2204;  // 0x2204
    void * q2208;  // 0x2208
    unsigned char q220C;  // 0x220C
    unsigned char q2210;  // 0x2210
    unsigned char q2214;  // 0x2214
    void * q2220;  // 0x2220
    int q2224;  // 0x2224
    int q2228;  // 0x2228
    unsigned char q222C;  // 0x222C
    unsigned char q2230;  // 0x2230
    unsigned char q2234;  // 0x2234
    unsigned char q2238;  // 0x2238
    void * q2240;  // 0x2240
    void * q2244;  // 0x2244
    void * q2248;  // 0x2248
    unsigned char q224C;  // 0x224C
    unsigned char q2250;  // 0x2250
    unsigned char q2254;  // 0x2254
    unsigned int q2260;  // 0x2260
    unsigned char q2264;  // 0x2264
    void * q2280;  // 0x2280
    void * q2284;  // 0x2284
    unsigned char q2288;  // 0x2288
    unsigned char q2294;  // 0x2294
    unsigned char q2298;  // 0x2298
    unsigned char q229C;  // 0x229C
    unsigned char q22A0;  // 0x22A0
    unsigned char q22A4;  // 0x22A4
    void * q2304;  // 0x2304
    void * q2308;  // 0x2308
    unsigned char q230C;  // 0x230C
    unsigned char q2310;  // 0x2310
    unsigned char q2314;  // 0x2314
    int q2324;  // 0x2324
    int q2328;  // 0x2328
    unsigned char q232C;  // 0x232C
    void * q2340;  // 0x2340
    unsigned char q2344;  // 0x2344
    void * q2360;  // 0x2360
    unsigned int q2364;  // 0x2364
    void * q2368;  // 0x2368
    unsigned char q236C;  // 0x236C
    void * q2388;  // 0x2388
    unsigned char q238C;  // 0x238C
    unsigned char q239C;  // 0x239C
    unsigned char q23A0;  // 0x23A0
    unsigned char q23A4;  // 0x23A4
    unsigned char q23A8;  // 0x23A8
    unsigned char q23AC;  // 0x23AC
    void * q2408;  // 0x2408
    unsigned char q240C;  // 0x240C
    unsigned char q2410;  // 0x2410
    unsigned char q2414;  // 0x2414
    void * q2418;  // 0x2418
    unsigned char q241C;  // 0x241C
    void * q2420;  // 0x2420
    unsigned int q2424;  // 0x2424
    unsigned char q2428;  // 0x2428
    unsigned int q2440;  // 0x2440
    void * q2444;  // 0x2444
    unsigned int q2448;  // 0x2448
    unsigned char q244C;  // 0x244C
    unsigned char q2450;  // 0x2450
    void * q2454;  // 0x2454
    unsigned char q2458;  // 0x2458
    unsigned int q2464;  // 0x2464
    unsigned char q2468;  // 0x2468
    unsigned char q246C;  // 0x246C
    unsigned char q2470;  // 0x2470
    unsigned char q2474;  // 0x2474
    unsigned int q2480;  // 0x2480
    unsigned char q2484;  // 0x2484
    unsigned int q2488;  // 0x2488
    unsigned char q248C;  // 0x248C
    unsigned char q2490;  // 0x2490
    unsigned char q2494;  // 0x2494
    unsigned char q2498;  // 0x2498
    void * q2500;  // 0x2500
    int q2504;  // 0x2504
    unsigned int q2508;  // 0x2508
    unsigned char q250C;  // 0x250C
    unsigned char q2510;  // 0x2510
    unsigned char q2514;  // 0x2514
    unsigned char q2518;  // 0x2518
    unsigned int q2520;  // 0x2520
    unsigned char q2524;  // 0x2524
    int q2528;  // 0x2528
    unsigned char q252C;  // 0x252C
    unsigned char q2530;  // 0x2530
    unsigned char q2534;  // 0x2534
    int q2540;  // 0x2540
    unsigned int q2544;  // 0x2544
    unsigned char q2548;  // 0x2548
    unsigned char q254C;  // 0x254C
    unsigned char q2550;  // 0x2550
    unsigned char q2554;  // 0x2554
    int q2564;  // 0x2564
    unsigned int q2568;  // 0x2568
    unsigned char q256C;  // 0x256C
    unsigned char q2570;  // 0x2570
    unsigned char q2574;  // 0x2574
    unsigned char q2578;  // 0x2578
    int q2580;  // 0x2580
    unsigned int q2584;  // 0x2584
    void * q2588;  // 0x2588
    unsigned char q258C;  // 0x258C
    unsigned char q2590;  // 0x2590
    unsigned char q2594;  // 0x2594
    int q2600;  // 0x2600
    int q2604;  // 0x2604
    int q2608;  // 0x2608
    unsigned char q260C;  // 0x260C
    unsigned char q2610;  // 0x2610
    unsigned char q2614;  // 0x2614
    unsigned int q2620;  // 0x2620
    unsigned char q2624;  // 0x2624
    unsigned int q2628;  // 0x2628
    unsigned char q262C;  // 0x262C
    unsigned char q2630;  // 0x2630
    unsigned char q2634;  // 0x2634
    unsigned char q2638;  // 0x2638
    void * q2640;  // 0x2640
    unsigned int q2644;  // 0x2644
    void * q2648;  // 0x2648
    unsigned char q264C;  // 0x264C
    unsigned char q2650;  // 0x2650
    unsigned char q2654;  // 0x2654
    int q2660;  // 0x2660
    int q2664;  // 0x2664
    int q2668;  // 0x2668
    unsigned char q266C;  // 0x266C
    unsigned char q2670;  // 0x2670
    unsigned char q2674;  // 0x2674
    int q2680;  // 0x2680
    int q2684;  // 0x2684
    int q2688;  // 0x2688
    unsigned char q268C;  // 0x268C
    unsigned char q2690;  // 0x2690
    unsigned char q2694;  // 0x2694
    int q2700;  // 0x2700
    int q2704;  // 0x2704
    int q2708;  // 0x2708
    unsigned char q270C;  // 0x270C
    unsigned char q2710;  // 0x2710
    unsigned char q2714;  // 0x2714
    unsigned int q2720;  // 0x2720
    int q2724;  // 0x2724
    int q2728;  // 0x2728
    unsigned char q272C;  // 0x272C
    unsigned char q2730;  // 0x2730
    unsigned char q2734;  // 0x2734
    int q2740;  // 0x2740
    int q2744;  // 0x2744
    int q2748;  // 0x2748
    unsigned char q274C;  // 0x274C
    unsigned char q2750;  // 0x2750
    unsigned char q2754;  // 0x2754
    int q2760;  // 0x2760
    int q2764;  // 0x2764
    int q2768;  // 0x2768
    unsigned char q276C;  // 0x276C
    unsigned char q2770;  // 0x2770
    unsigned char q2774;  // 0x2774
    char q2778;  // 0x2778
    unsigned char q277C;  // 0x277C
    char q2780;  // 0x2780
    char q2784;  // 0x2784
    char q2788;  // 0x2788
    unsigned char q278C;  // 0x278C
    char q2790;  // 0x2790
    unsigned char q2794;  // 0x2794
    unsigned int q2804;  // 0x2804
    unsigned char q2808;  // 0x2808
    unsigned char q280C;  // 0x280C
    unsigned char q2810;  // 0x2810
    unsigned char q2814;  // 0x2814
    int q2820;  // 0x2820
    unsigned int q2824;  // 0x2824
    unsigned char q2828;  // 0x2828
    unsigned char q282C;  // 0x282C
    unsigned char q2830;  // 0x2830
    unsigned char q2834;  // 0x2834
    int q2840;  // 0x2840
    int q2844;  // 0x2844
    int q2848;  // 0x2848
    unsigned char q284C;  // 0x284C
    unsigned char q2850;  // 0x2850
    unsigned char q2854;  // 0x2854
    unsigned int q2860;  // 0x2860
    unsigned char q2864;  // 0x2864
    unsigned int q2868;  // 0x2868
    unsigned char q286C;  // 0x286C
    unsigned char q2870;  // 0x2870
    unsigned char q2874;  // 0x2874
    unsigned char q2878;  // 0x2878
    unsigned int q2880;  // 0x2880
    unsigned char q2884;  // 0x2884
    int q2888;  // 0x2888
    unsigned char q288C;  // 0x288C
    unsigned char q2890;  // 0x2890
    unsigned char q2894;  // 0x2894
    void * q2904;  // 0x2904
    unsigned char q2908;  // 0x2908
    unsigned char q290C;  // 0x290C
    unsigned char q2910;  // 0x2910
    unsigned char q2914;  // 0x2914
    unsigned char q2918;  // 0x2918
    void * q2960;  // 0x2960
    unsigned char q2964;  // 0x2964
    unsigned char q2968;  // 0x2968
    unsigned char q296C;  // 0x296C
    unsigned char q2970;  // 0x2970
    unsigned char q2974;  // 0x2974
    void * q3008;  // 0x3008
    unsigned char q300C;  // 0x300C
    unsigned char q3010;  // 0x3010
    unsigned char q3014;  // 0x3014
    unsigned char q3018;  // 0x3018
    unsigned char q301C;  // 0x301C
    void * q3104;  // 0x3104
    unsigned char q3108;  // 0x3108
    unsigned char q310C;  // 0x310C
    unsigned char q3110;  // 0x3110
    unsigned char q3114;  // 0x3114
    unsigned char q3118;  // 0x3118
    void * q3160;  // 0x3160
    unsigned char q3164;  // 0x3164
    unsigned char q3168;  // 0x3168
    unsigned char q317C;  // 0x317C
    unsigned char q3180;  // 0x3180
    unsigned char q3184;  // 0x3184
    void * q3188;  // 0x3188
    unsigned char q318C;  // 0x318C
    unsigned char q3190;  // 0x3190
    unsigned char q3194;  // 0x3194
    unsigned char q3220;  // 0x3220
    unsigned char q3224;  // 0x3224
    unsigned char q3238;  // 0x3238
    unsigned char q323C;  // 0x323C
    unsigned char q3240;  // 0x3240
    void * q3244;  // 0x3244
    unsigned char q3248;  // 0x3248
    unsigned char q324C;  // 0x324C
    unsigned char q3260;  // 0x3260
    unsigned char q3264;  // 0x3264
    unsigned char q3268;  // 0x3268
    unsigned char q326C;  // 0x326C
    unsigned char q3270;  // 0x3270
    void * q3300;  // 0x3300
    unsigned char q3304;  // 0x3304
    unsigned char q3308;  // 0x3308
    unsigned char q331C;  // 0x331C
    unsigned char q3320;  // 0x3320
    unsigned char q3324;  // 0x3324
    void * q3328;  // 0x3328
    unsigned char q332C;  // 0x332C
    unsigned char q3330;  // 0x3330
    unsigned char q3334;  // 0x3334
    unsigned char q3360;  // 0x3360
    unsigned char q3364;  // 0x3364
    unsigned char q3378;  // 0x3378
    unsigned char q337C;  // 0x337C
    unsigned char q3380;  // 0x3380
    void * q3384;  // 0x3384
    unsigned char q3388;  // 0x3388
    unsigned char q338C;  // 0x338C
    unsigned char q33CC;  // 0x33CC
    unsigned char q33D0;  // 0x33D0
    unsigned char q33D4;  // 0x33D4
    unsigned char q33D8;  // 0x33D8
    unsigned char q33DC;  // 0x33DC
    unsigned int q3460;  // 0x3460
    unsigned char q3464;  // 0x3464
    unsigned char q3468;  // 0x3468
    unsigned char q346C;  // 0x346C
    unsigned char q3470;  // 0x3470
    unsigned char q3474;  // 0x3474
    void * q3484;  // 0x3484
    unsigned int q3488;  // 0x3488
    unsigned char q348C;  // 0x348C
    unsigned char q3490;  // 0x3490
    unsigned char q3494;  // 0x3494
    unsigned int q3500;  // 0x3500
    unsigned char q3504;  // 0x3504
    unsigned char q3508;  // 0x3508
    unsigned char q350C;  // 0x350C
    unsigned char q3510;  // 0x3510
    unsigned char q3514;  // 0x3514
    unsigned char q3520;  // 0x3520
    unsigned char q3524;  // 0x3524
    unsigned int q3528;  // 0x3528
    unsigned char q352C;  // 0x352C
    unsigned char q3530;  // 0x3530
    unsigned char q3534;  // 0x3534
    void * q3540;  // 0x3540
    unsigned int q3544;  // 0x3544
    unsigned char q3548;  // 0x3548
    unsigned char q354C;  // 0x354C
    unsigned char q3550;  // 0x3550
    unsigned char q3554;  // 0x3554
    unsigned char q3558;  // 0x3558
    unsigned char q3560;  // 0x3560
    unsigned char q3564;  // 0x3564
    unsigned char q3588;  // 0x3588
    unsigned char q358C;  // 0x358C
    unsigned char q3590;  // 0x3590
    unsigned char q3594;  // 0x3594
    unsigned char q3598;  // 0x3598
    void * q3600;  // 0x3600
    unsigned int q3604;  // 0x3604
    unsigned char q3608;  // 0x3608
    unsigned char q360C;  // 0x360C
    unsigned char q3610;  // 0x3610
    unsigned char q3614;  // 0x3614
    unsigned char q3618;  // 0x3618
    unsigned char q3620;  // 0x3620
    unsigned char q3624;  // 0x3624
    void * q3628;  // 0x3628
    unsigned char q362C;  // 0x362C
    unsigned char q3630;  // 0x3630
    unsigned char q3634;  // 0x3634
    unsigned int q3644;  // 0x3644
    unsigned char q3648;  // 0x3648
    unsigned char q364C;  // 0x364C
    unsigned char q3654;  // 0x3654
    unsigned char q3658;  // 0x3658
    unsigned char q365C;  // 0x365C
    void * q3660;  // 0x3660
    unsigned char q3664;  // 0x3664
    unsigned char q3668;  // 0x3668
    unsigned char q367C;  // 0x367C
    unsigned char q3680;  // 0x3680
    unsigned char q3684;  // 0x3684
    void * q3688;  // 0x3688
    unsigned char q368C;  // 0x368C
    unsigned char q3690;  // 0x3690
    unsigned char q3694;  // 0x3694
    unsigned char q3720;  // 0x3720
    unsigned char q3724;  // 0x3724
    unsigned char q3738;  // 0x3738
    unsigned char q373C;  // 0x373C
    unsigned char q3740;  // 0x3740
    void * q3744;  // 0x3744
    unsigned char q3748;  // 0x3748
    unsigned char q374C;  // 0x374C
    unsigned char q3768;  // 0x3768
    unsigned char q376C;  // 0x376C
    unsigned char q3770;  // 0x3770
    unsigned char q3774;  // 0x3774
    unsigned char q3778;  // 0x3778
    void * q3780;  // 0x3780
    unsigned int q3784;  // 0x3784
    unsigned char q3788;  // 0x3788
    unsigned char q378C;  // 0x378C
    unsigned char q3790;  // 0x3790
    unsigned char q3794;  // 0x3794
    unsigned char q3798;  // 0x3798
    unsigned char q3800;  // 0x3800
    unsigned char q3804;  // 0x3804
    unsigned char q3810;  // 0x3810
    unsigned char q3814;  // 0x3814
    unsigned char q3818;  // 0x3818
    unsigned int q3820;  // 0x3820
    unsigned char q3824;  // 0x3824
    unsigned char q3828;  // 0x3828
    unsigned char q382C;  // 0x382C
    unsigned char q3830;  // 0x3830
    unsigned char q3834;  // 0x3834
    void * q3844;  // 0x3844
    unsigned int q3848;  // 0x3848
    unsigned char q384C;  // 0x384C
    unsigned char q3850;  // 0x3850
    unsigned char q3854;  // 0x3854
    unsigned int q3860;  // 0x3860
    unsigned char q3864;  // 0x3864
    unsigned char q3868;  // 0x3868
    unsigned char q386C;  // 0x386C
    unsigned char q3870;  // 0x3870
    unsigned char q3874;  // 0x3874
    unsigned char q3880;  // 0x3880
    unsigned char q3884;  // 0x3884
    unsigned int q3888;  // 0x3888
    unsigned char q388C;  // 0x388C
    unsigned char q3890;  // 0x3890
    unsigned char q3894;  // 0x3894
    void * q4088;  // 0x4088
    unsigned char q408C;  // 0x408C
    unsigned char q4090;  // 0x4090
    unsigned char q4094;  // 0x4094
    void * q4100;  // 0x4100
    unsigned char q4104;  // 0x4104
    unsigned char q4108;  // 0x4108
    char q4118[4];  // 0x4118
    unsigned char q411C;  // 0x411C
    unsigned int q4134;  // 0x4134
    unsigned char q4138;  // 0x4138
    unsigned char q4144;  // 0x4144
    unsigned char q4148;  // 0x4148
    unsigned char q4150;  // 0x4150
    unsigned char q4154;  // 0x4154
    unsigned char q4160;  // 0x4160
    unsigned char q4164;  // 0x4164
    unsigned char q4200;  // 0x4200
    unsigned char q4204;  // 0x4204
    unsigned char q4210;  // 0x4210
    unsigned char q4214;  // 0x4214
    void * q4228;  // 0x4228
    unsigned char q422C;  // 0x422C
    unsigned char q4230;  // 0x4230
    unsigned char q4234;  // 0x4234
    int q4358;  // 0x4358
    unsigned char q435C;  // 0x435C
    int q4368;  // 0x4368
    unsigned char q436C;  // 0x436C
    void * q4370;  // 0x4370
    void * q4374;  // 0x4374
    unsigned char q4378;  // 0x4378
    unsigned char q437C;  // 0x437C
    unsigned char q4380;  // 0x4380
    void * q4384;  // 0x4384
    int q4388;  // 0x4388
    unsigned char q438C;  // 0x438C
    int q4408;  // 0x4408
    unsigned char q440C;  // 0x440C
    unsigned char q4410;  // 0x4410
    unsigned char q4414;  // 0x4414
    int q4418;  // 0x4418
    unsigned char q441C;  // 0x441C
    void * q4420;  // 0x4420
    void * q4424;  // 0x4424
    unsigned char q4428;  // 0x4428
    unsigned char q442C;  // 0x442C
    unsigned char q4430;  // 0x4430
    int q4434;  // 0x4434
    int q4438;  // 0x4438
    unsigned char q443C;  // 0x443C
    void * q4440;  // 0x4440
    unsigned int q4444;  // 0x4444
    unsigned char q4448;  // 0x4448
    unsigned char q444C;  // 0x444C
    unsigned char q4460;  // 0x4460
    int q4464;  // 0x4464
    void * q4468;  // 0x4468
    unsigned char q446C;  // 0x446C
    void * q4500;  // 0x4500
    unsigned int q4504;  // 0x4504
    unsigned char q4508;  // 0x4508
    unsigned char q450C;  // 0x450C
    unsigned char q4520;  // 0x4520
    unsigned char q4524;  // 0x4524
    void * q4528;  // 0x4528
    unsigned char q452C;  // 0x452C
    unsigned int q4544;  // 0x4544
    unsigned char q4548;  // 0x4548
    unsigned char q454C;  // 0x454C
    unsigned char q4550;  // 0x4550
    unsigned char q4554;  // 0x4554
    unsigned char q4558;  // 0x4558
    unsigned int q4560;  // 0x4560
    unsigned char q4564;  // 0x4564
    unsigned char q4568;  // 0x4568
    unsigned char q456C;  // 0x456C
    unsigned char q4570;  // 0x4570
    unsigned char q4574;  // 0x4574
    void * q4584;  // 0x4584
    unsigned int q4588;  // 0x4588
    unsigned char q458C;  // 0x458C
    unsigned char q4590;  // 0x4590
    unsigned char q4594;  // 0x4594
    unsigned int q4600;  // 0x4600
    unsigned char q4604;  // 0x4604
    unsigned char q4608;  // 0x4608
    unsigned char q460C;  // 0x460C
    unsigned char q4610;  // 0x4610
    unsigned char q4614;  // 0x4614
    unsigned char q4620;  // 0x4620
    unsigned char q4624;  // 0x4624
    unsigned int q4628;  // 0x4628
    unsigned char q462C;  // 0x462C
    unsigned char q4630;  // 0x4630
    unsigned char q4634;  // 0x4634
    void * q4640;  // 0x4640
    unsigned int q4644;  // 0x4644
    unsigned char q4648;  // 0x4648
    unsigned char q464C;  // 0x464C
    unsigned char q4650;  // 0x4650
    unsigned char q4654;  // 0x4654
    unsigned char q4658;  // 0x4658
    unsigned char q4660;  // 0x4660
    unsigned char q4664;  // 0x4664
    void * q4668;  // 0x4668
    unsigned char q466C;  // 0x466C
    unsigned char q4670;  // 0x4670
    unsigned char q4674;  // 0x4674
    unsigned int q4684;  // 0x4684
    unsigned char q4688;  // 0x4688
    unsigned char q468C;  // 0x468C
    unsigned char q4690;  // 0x4690
    unsigned char q4694;  // 0x4694
    unsigned int q4700;  // 0x4700
    unsigned char q4704;  // 0x4704
    unsigned char q4708;  // 0x4708
    unsigned char q470C;  // 0x470C
    unsigned char q4710;  // 0x4710
    unsigned char q4714;  // 0x4714
    void * q4724;  // 0x4724
    unsigned int q4728;  // 0x4728
    unsigned char q472C;  // 0x472C
    unsigned char q4730;  // 0x4730
    unsigned char q4734;  // 0x4734
    unsigned int q4740;  // 0x4740
    unsigned char q4744;  // 0x4744
    unsigned char q4748;  // 0x4748
    unsigned char q474C;  // 0x474C
    unsigned char q4750;  // 0x4750
    unsigned char q4754;  // 0x4754
    unsigned char q4760;  // 0x4760
    unsigned char q4764;  // 0x4764
    unsigned int q4768;  // 0x4768
    unsigned char q476C;  // 0x476C
    unsigned char q4770;  // 0x4770
    unsigned char q4774;  // 0x4774
    void * q4780;  // 0x4780
    unsigned int q4784;  // 0x4784
    unsigned char q4788;  // 0x4788
    unsigned char q478C;  // 0x478C
    unsigned char q4790;  // 0x4790
    unsigned char q4794;  // 0x4794
    unsigned char q4798;  // 0x4798
    unsigned char q4800;  // 0x4800
    unsigned char q4804;  // 0x4804
    void * q4808;  // 0x4808
    unsigned char q480C;  // 0x480C
    unsigned char q4810;  // 0x4810
    unsigned char q4814;  // 0x4814
    unsigned int q4824;  // 0x4824
    unsigned char q4828;  // 0x4828
    unsigned char q482C;  // 0x482C
    unsigned char q4830;  // 0x4830
    unsigned char q4834;  // 0x4834
    unsigned char q4838;  // 0x4838
    unsigned int q4840;  // 0x4840
    unsigned char q4844;  // 0x4844
    unsigned char q4848;  // 0x4848
    unsigned char q484C;  // 0x484C
    unsigned char q4850;  // 0x4850
    unsigned char q4854;  // 0x4854
    void * q4868;  // 0x4868
    unsigned char q486C;  // 0x486C
    unsigned char q4870;  // 0x4870
    unsigned char q4874;  // 0x4874
    unsigned char q4900;  // 0x4900
    unsigned int q4904;  // 0x4904
    unsigned char q4908;  // 0x4908
    int q4914;  // 0x4914
    unsigned char q4918;  // 0x4918
    void * q4924;  // 0x4924
    unsigned char q4928;  // 0x4928
    unsigned char q492C;  // 0x492C
    unsigned char q4940;  // 0x4940
    unsigned char q4944;  // 0x4944
    unsigned char q4948;  // 0x4948
    void * q4980;  // 0x4980
    unsigned char q4984;  // 0x4984
    unsigned char q4988;  // 0x4988
    unsigned int q4994;  // 0x4994
    unsigned char q4998;  // 0x4998
    unsigned char q499C;  // 0x499C
    unsigned char q49A0;  // 0x49A0
    unsigned char q49A4;  // 0x49A4
    unsigned char q49A8;  // 0x49A8
    unsigned char q49AC;  // 0x49AC
    void * q5008;  // 0x5008
    unsigned char q500C;  // 0x500C
    unsigned char q5010;  // 0x5010
    unsigned char q5014;  // 0x5014
    unsigned int q5024;  // 0x5024
    unsigned char q5028;  // 0x5028
    unsigned char q502C;  // 0x502C
    unsigned char q5030;  // 0x5030
    unsigned char q5034;  // 0x5034
    unsigned char q5038;  // 0x5038
    unsigned int q5040;  // 0x5040
    unsigned char q5044;  // 0x5044
    unsigned char q5048;  // 0x5048
    unsigned char q504C;  // 0x504C
    unsigned char q5050;  // 0x5050
    unsigned char q5054;  // 0x5054
    void * q5064;  // 0x5064
    unsigned char q5068;  // 0x5068
    unsigned char q506C;  // 0x506C
    unsigned char q508C;  // 0x508C
    unsigned char q5090;  // 0x5090
    unsigned char q5094;  // 0x5094
    unsigned char q5098;  // 0x5098
    unsigned char q509C;  // 0x509C
    void * q5104;  // 0x5104
    unsigned int q5108;  // 0x5108
    unsigned char q510C;  // 0x510C
    unsigned char q5110;  // 0x5110
    unsigned char q5114;  // 0x5114
    unsigned int q5120;  // 0x5120
    unsigned char q5124;  // 0x5124
    char q5128[4];  // 0x5128
    unsigned char q512C;  // 0x512C
    int q5138;  // 0x5138
    unsigned char q513C;  // 0x513C
    unsigned int q5158;  // 0x5158
    unsigned char q515C;  // 0x515C
    unsigned int q5160;  // 0x5160
    unsigned int q5164;  // 0x5164
    unsigned int q5168;  // 0x5168
    unsigned char q516C;  // 0x516C
    unsigned int q5170;  // 0x5170
    unsigned char q5174;  // 0x5174
    unsigned int q5180;  // 0x5180
    unsigned int q5184;  // 0x5184
    unsigned int q5188;  // 0x5188
    unsigned char q518C;  // 0x518C
    unsigned char q5190;  // 0x5190
    unsigned char q5194;  // 0x5194
    unsigned int q5200;  // 0x5200
    unsigned int q5204;  // 0x5204
    unsigned int q5208;  // 0x5208
    unsigned char q520C;  // 0x520C
    unsigned char q5220;  // 0x5220
    unsigned int q5224;  // 0x5224
    unsigned int q5228;  // 0x5228
    unsigned char q522C;  // 0x522C
    unsigned int q5234;  // 0x5234
    unsigned char q5238;  // 0x5238
    unsigned int q5240;  // 0x5240
    unsigned int q5244;  // 0x5244
    int q5248;  // 0x5248
    unsigned char q524C;  // 0x524C
    unsigned int q5260;  // 0x5260
    unsigned int q5264;  // 0x5264
    unsigned int q5268;  // 0x5268
    unsigned char q526C;  // 0x526C
    unsigned int q5270;  // 0x5270
    unsigned char q5274;  // 0x5274
    unsigned int q5280;  // 0x5280
    unsigned int q5284;  // 0x5284
    unsigned int q5288;  // 0x5288
    unsigned char q528C;  // 0x528C
    unsigned char q52CC;  // 0x52CC
    unsigned char q52D0;  // 0x52D0
    unsigned char q52D4;  // 0x52D4
    unsigned char q52D8;  // 0x52D8
    unsigned char q52DC;  // 0x52DC
    unsigned int q5300;  // 0x5300
    unsigned int q5304;  // 0x5304
    unsigned int q5308;  // 0x5308
    unsigned char q530C;  // 0x530C
    unsigned char q5310;  // 0x5310
    unsigned char q5314;  // 0x5314
    unsigned char q5318;  // 0x5318
    unsigned int q5320;  // 0x5320
    unsigned int q5324;  // 0x5324
    unsigned int q5328;  // 0x5328
    unsigned char q532C;  // 0x532C
    unsigned char q5330;  // 0x5330
    unsigned char q5334;  // 0x5334
    unsigned char q5338;  // 0x5338
    unsigned char q533C;  // 0x533C
    unsigned int q5344;  // 0x5344
    unsigned char q5348;  // 0x5348
    unsigned char q534C;  // 0x534C
    unsigned char q5350;  // 0x5350
    unsigned char q5354;  // 0x5354
    unsigned char q5358;  // 0x5358
    unsigned int q5360;  // 0x5360
    unsigned int q5364;  // 0x5364
    unsigned int q5368;  // 0x5368
    unsigned char q536C;  // 0x536C
    unsigned char q5370;  // 0x5370
    unsigned char q5374;  // 0x5374
    unsigned int q5380;  // 0x5380
    unsigned int q5384;  // 0x5384
    unsigned int q5388;  // 0x5388
    unsigned char q538C;  // 0x538C
    unsigned char q5390;  // 0x5390
    unsigned int q5394;  // 0x5394
    unsigned char q5398;  // 0x5398
    unsigned char q539C;  // 0x539C
    unsigned char q53A0;  // 0x53A0
    unsigned char q53A4;  // 0x53A4
    unsigned char q53A8;  // 0x53A8
    unsigned char q53AC;  // 0x53AC
    unsigned char q5400;  // 0x5400
    unsigned int q5404;  // 0x5404
    unsigned int q5408;  // 0x5408
    unsigned char q540C;  // 0x540C
    unsigned int q5420;  // 0x5420
    unsigned int q5424;  // 0x5424
    unsigned char q5428;  // 0x5428
    int q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    int q5440;  // 0x5440
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned int q5458;  // 0x5458
    unsigned char q545C;  // 0x545C
    unsigned int q5460;  // 0x5460
    unsigned int q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    unsigned int q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned int q5490;  // 0x5490
    unsigned int q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned int q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    unsigned int q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5518;  // 0x5518
    unsigned char q551C;  // 0x551C
    unsigned char q5520;  // 0x5520
    unsigned char q5524;  // 0x5524
    unsigned int q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    void * q5650;  // 0x5650
    unsigned int q5654;  // 0x5654
    unsigned char q5658;  // 0x5658
    unsigned char q565C;  // 0x565C
    unsigned char q5660;  // 0x5660
    unsigned char q5664;  // 0x5664
    int q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned char q5674;  // 0x5674
    int q5684;  // 0x5684
    unsigned int q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned char q5690;  // 0x5690
    unsigned char q5694;  // 0x5694
    unsigned int q5700;  // 0x5700
    unsigned int q5704;  // 0x5704
    unsigned int q5708;  // 0x5708
    unsigned char q570C;  // 0x570C
    unsigned char q5710;  // 0x5710
    int q5714;  // 0x5714
    int q5718;  // 0x5718
    unsigned char q571C;  // 0x571C
    unsigned int q5720;  // 0x5720
    unsigned int q5724;  // 0x5724
    int q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned char q5730;  // 0x5730
    unsigned char q5734;  // 0x5734
    unsigned int q5740;  // 0x5740
    unsigned int q5744;  // 0x5744
    unsigned int q5748;  // 0x5748
    unsigned char q574C;  // 0x574C
    unsigned int q5764;  // 0x5764
    unsigned char q5768;  // 0x5768
    unsigned char q576C;  // 0x576C
    unsigned char q5770;  // 0x5770
    unsigned char q5774;  // 0x5774
    int q5778;  // 0x5778
    unsigned char q577C;  // 0x577C
    int q5780;  // 0x5780
    int q5784;  // 0x5784
    int q5788;  // 0x5788
    unsigned char q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    unsigned char q5794;  // 0x5794
    int q5800;  // 0x5800
    unsigned int q5804;  // 0x5804
    unsigned char q5808;  // 0x5808
    unsigned char q580C;  // 0x580C
    unsigned char q5810;  // 0x5810
    unsigned char q5814;  // 0x5814
    unsigned int q5820;  // 0x5820
    unsigned int q5824;  // 0x5824
    unsigned int q5828;  // 0x5828
    unsigned char q582C;  // 0x582C
    unsigned char q5830;  // 0x5830
    unsigned char q5834;  // 0x5834
    unsigned int q5840;  // 0x5840
    unsigned int q5844;  // 0x5844
    unsigned int q5848;  // 0x5848
    unsigned char q584C;  // 0x584C
    unsigned char q5850;  // 0x5850
    unsigned char q5854;  // 0x5854
    unsigned char q5858;  // 0x5858
    unsigned int q5860;  // 0x5860
    int q5864;  // 0x5864
    int q5868;  // 0x5868
    unsigned char q586C;  // 0x586C
    unsigned char q5870;  // 0x5870
    unsigned char q5874;  // 0x5874
    int q5880;  // 0x5880
    int q5884;  // 0x5884
    int q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q5890;  // 0x5890
    unsigned char q5894;  // 0x5894
    unsigned int q5900;  // 0x5900
    int q5904;  // 0x5904
    unsigned int q5908;  // 0x5908
    unsigned char q590C;  // 0x590C
    int q5910;  // 0x5910
    unsigned char q5914;  // 0x5914
    int q5920;  // 0x5920
    int q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned char q5934;  // 0x5934
    int q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned int q5940;  // 0x5940
    unsigned int q5944;  // 0x5944
    int q5948;  // 0x5948
    unsigned char q594C;  // 0x594C
    unsigned char q5950;  // 0x5950
    unsigned char q5954;  // 0x5954
    int q5960;  // 0x5960
    int q5964;  // 0x5964
    int q5968;  // 0x5968
    unsigned char q596C;  // 0x596C
    int q5970;  // 0x5970
    int q5974;  // 0x5974
    unsigned char q5978;  // 0x5978
    int q5980;  // 0x5980
    char q5984;  // 0x5984
    void * q5988;  // 0x5988
    unsigned char q598C;  // 0x598C
    unsigned char q5990;  // 0x5990
    unsigned char q5994;  // 0x5994
    int q6000;  // 0x6000
    int q6004;  // 0x6004
    char q6008;  // 0x6008
    unsigned char q600C;  // 0x600C
    unsigned char q6010;  // 0x6010
    unsigned char q6014;  // 0x6014
    float q6020;  // 0x6020
    float q6024;  // 0x6024
    float q6028;  // 0x6028
    unsigned char q602C;  // 0x602C
    unsigned char q6030;  // 0x6030
    char q6034;  // 0x6034
    char q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    char q6040;  // 0x6040
    char q6044;  // 0x6044
    char q6048;  // 0x6048
    unsigned char q604C;  // 0x604C
    char q6050;  // 0x6050
    unsigned char q6054;  // 0x6054
    int q6060;  // 0x6060
    int q6064;  // 0x6064
    int q6068;  // 0x6068
    unsigned char q606C;  // 0x606C
    unsigned char q6070;  // 0x6070
    unsigned char q6074;  // 0x6074
    unsigned int q6080;  // 0x6080
    unsigned int q6084;  // 0x6084
    unsigned int q6088;  // 0x6088
    unsigned char q608C;  // 0x608C
    unsigned char q6090;  // 0x6090
    unsigned char q6094;  // 0x6094
    unsigned int q6100;  // 0x6100
    unsigned int q6104;  // 0x6104
    void * q6108;  // 0x6108
    unsigned char q610C;  // 0x610C
    unsigned char q6110;  // 0x6110
    unsigned char q6114;  // 0x6114
    unsigned int q6120;  // 0x6120
    unsigned int q6124;  // 0x6124
    unsigned int q6128;  // 0x6128
    unsigned char q612C;  // 0x612C
    unsigned char q6130;  // 0x6130
    unsigned char q6134;  // 0x6134
    unsigned int q6140;  // 0x6140
    unsigned int q6144;  // 0x6144
    unsigned int q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned int q6150;  // 0x6150
    unsigned char q6154;  // 0x6154
    void * q6160;  // 0x6160
    unsigned int q6164;  // 0x6164
    unsigned int q6168;  // 0x6168
    unsigned char q616C;  // 0x616C
    unsigned int q6180;  // 0x6180
    unsigned int q6184;  // 0x6184
    unsigned int q6188;  // 0x6188
    unsigned char q618C;  // 0x618C
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned char q61A0;  // 0x61A0
    unsigned char q61A4;  // 0x61A4
    unsigned char q61A8;  // 0x61A8
    unsigned char q61AC;  // 0x61AC
    unsigned int u32_61D0;  // 0x61D0
    unsigned char q61D4;  // 0x61D4
    unsigned char q61D8;  // 0x61D8
    unsigned char q61DC;  // 0x61DC
    unsigned char q61E0;  // 0x61E0
    unsigned char q61E4;  // 0x61E4
    unsigned int q6200;  // 0x6200
    unsigned char q6204;  // 0x6204
    unsigned int q6208;  // 0x6208
    unsigned char q620C;  // 0x620C
    void * q6210;  // 0x6210
    void * q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    int q6220;  // 0x6220
    int q6224;  // 0x6224
    float q6228;  // 0x6228
    unsigned char q622C;  // 0x622C
    unsigned char q6230;  // 0x6230
    unsigned char q6234;  // 0x6234
    unsigned char q6240;  // 0x6240
    unsigned int q6244;  // 0x6244
    unsigned int q6248;  // 0x6248
    unsigned char q624C;  // 0x624C
    unsigned char q6250;  // 0x6250
    unsigned char q6254;  // 0x6254
    unsigned char q6258;  // 0x6258
    unsigned char q6260;  // 0x6260
    char q6264[4];  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned char q626C;  // 0x626C
    unsigned char q6270;  // 0x6270
    unsigned char q6274;  // 0x6274
    unsigned int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned char q6288;  // 0x6288
    unsigned char q628C;  // 0x628C
    int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q629C;  // 0x629C
    unsigned int q6308;  // 0x6308
    unsigned char q630C;  // 0x630C
    unsigned char q6310;  // 0x6310
    unsigned char q6314;  // 0x6314
    unsigned char q6318;  // 0x6318
    unsigned char q631C;  // 0x631C
    unsigned int q6320;  // 0x6320
    unsigned int q6324;  // 0x6324
    unsigned int q6328;  // 0x6328
    unsigned char q632C;  // 0x632C
    unsigned char q6330;  // 0x6330
    unsigned char q6334;  // 0x6334
    unsigned char q6340;  // 0x6340
    unsigned char q6344;  // 0x6344
    unsigned char q637C;  // 0x637C
    unsigned char q6380;  // 0x6380
    int q6400;  // 0x6400
    int q6404;  // 0x6404
    int q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned char q6414;  // 0x6414
    int q6418;  // 0x6418
    unsigned char q641C;  // 0x641C
    unsigned char q642C;  // 0x642C
    unsigned char q6430;  // 0x6430
    unsigned char q6434;  // 0x6434
    int q6438;  // 0x6438
    unsigned char q643C;  // 0x643C
    void * q6440;  // 0x6440
    unsigned char q6444;  // 0x6444
    unsigned char q6448;  // 0x6448
    unsigned char q644C;  // 0x644C
    void * q6450;  // 0x6450
    void * q6454;  // 0x6454
    unsigned char q6458;  // 0x6458
    unsigned int q6464;  // 0x6464
    unsigned int q6468;  // 0x6468
    unsigned char q646C;  // 0x646C
    unsigned char q6470;  // 0x6470
    unsigned char q6474;  // 0x6474
    unsigned char q647C;  // 0x647C
    unsigned char q6480;  // 0x6480
    unsigned char q6484;  // 0x6484
    unsigned char q6490;  // 0x6490
    unsigned char q6494;  // 0x6494
    unsigned int q6500;  // 0x6500
    unsigned int q6504;  // 0x6504
    unsigned char q6508;  // 0x6508
    unsigned char q650C;  // 0x650C
    unsigned char q6510;  // 0x6510
    unsigned char q6514;  // 0x6514
    unsigned int q6518;  // 0x6518
    unsigned char q651C;  // 0x651C
    unsigned char q6520;  // 0x6520
    unsigned char q6524;  // 0x6524
    unsigned char q6528;  // 0x6528
    unsigned char q652C;  // 0x652C
    unsigned char q6530;  // 0x6530
    unsigned char q6534;  // 0x6534
    unsigned char q6540;  // 0x6540
    unsigned char q6544;  // 0x6544
    unsigned char q6548;  // 0x6548
    unsigned char q6554;  // 0x6554
    unsigned char q6558;  // 0x6558
    unsigned int DetailMinFrameRateMovie;
// --- flat members (END) ---
    INIClass * * ReadMovies();
    INIClass * * ReadPowerupsSection();
    INIClass * * readDifficulty();
    RulesClass();
    double GetFiringDistance();
    int DTOR();
    int ReadColorAdd();
    int ReadColors();
    int ReadSidesList();
    int readAI(unsigned int * a2);
    int readAnimations(TechnoTypeClass * aP1);
    int readCombatDamage(int a2);
    int readCrateRules();
    int readGeneralSection(TechnoTypeClass * aP1);
    int readOverlayTypes();
    int readParticleSystems(TechnoTypeClass * aP1);
    int readRadiation();
    int readSmudgeTypes();
    int readSpecialWeapons();
    int readTerrainTypes(TechnoTypeClass * aP1);
    int readWarheads();
    int sub_674500();
    unsigned int * InitINIChain(int a2, int a3);
    unsigned int * readIQ(int a2, int a3);
    unsigned int * readParticles();
    void * LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5);
    void * readAircraftTypes(int * a2);
    void * readBuildingTypes(int * a2);
    void * readSuperWeaponTypes(int * a2);
    void readCountries();
    void readInfantryTypes();
    void readMaximums();
    void readVehicleTypes();
    void* readAudioVisual();
    static double SaveLoad_Prefix(...);  // C2597 interim stub
    static double SaveLoad_Prefix_0(...);  // C2597 interim stub
};

} // namespace gamemd
