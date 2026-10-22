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
    char __pad_A4[24];  // 0xA4
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
    char __pad_244[68];  // 0x244
    unsigned int WeatherConBolts[4];  // 0x288
    char __pad_298[372];  // 0x298
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
    char __pad_440[324];  // 0x440
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
    char __pad_708[76];  // 0x708
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
    char __pad_C40[2036];  // 0xC40
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
    char __pad_1464[452];  // 0x1464
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
    char __pad_1874[48];  // 0x1874
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
