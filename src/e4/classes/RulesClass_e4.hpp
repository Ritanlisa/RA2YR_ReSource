// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RulesClass {
// --- flat members (BEGIN) ---
    char DetailMinFrameRateNormal[4];  // 0x0
    char DetailMinFrameRateMovie[4];  // 0x4
    char DetailBufferZoneWidth[4];  // 0x8
    char AmmoCrateDamage[4];  // 0xC
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
    SHPStruct* BOMBCURS_SHP;  // 0x8C4
    SHPStruct* CHRONOSK_SHP;  // 0x8C8
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
