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
// --- flat members (BEGIN) ---
    char DetailMinFrameRateNormal[4];  // 0x0
    char DetailMinFrameRateMovie[4];  // 0x4
    char DetailBufferZoneWidth[4];  // 0x8
    char AmmoCrateDamage[4];  // 0xC
    UnitTypeClass* LargeVisceroid;  // 0x10
    UnitTypeClass* SmallVisceroid;  // 0x14
    char AttackingAircraftSightRange[4];  // 0x18
    unsigned int Buildable;  // 0x1C
    double TunnelSpeed;  // 0x20
    double TiberiumHeal;  // 0x28
    char SelfHealInfantryFrames[4];  // 0x30
    char SelfHealInfantryAmount[4];  // 0x34
    char SelfHealUnitFrames[4];  // 0x38
    char SelfHealUnitAmount[4];  // 0x3C
    bool FreeMCV;  // 0x40
    bool BerzerkAllowed;  // 0x41
    char PoseDir[4];  // 0x44
    char DeployDir[4];  // 0x48
    char FlashFrameTime[4];  // 0x4C
    char RadarCombatFlashTime[4];  // 0x50
    char BarrelExplode[4];  // 0x54
    float RadarEventColorSpeed;  // 0x58
    char RadarEventMinRadius[4];  // 0x5C
    float RadarEventSpeed;  // 0x60
    float RadarEventRotationSpeed;  // 0x64
    AnimTypeClass* DropPodPuff;  // 0x68
    AnimTypeClass* BarrelExplode_d;  // 0x6C
    unsigned int BarrelDebris;  // 0x70
    ParticleSystemTypeClass* BarrelParticle;  // 0x74
    AnimTypeClass* Wake;  // 0x78
    AnimTypeClass* NukeTakeOff;  // 0x7C
    AnimTypeClass* InfantryExplode;  // 0x80
    AnimTypeClass* FlamingInfantry;  // 0x84
    AnimTypeClass* InfantryHeadPop;  // 0x88
    AnimTypeClass* InfantryNuked;  // 0x8C
    AnimTypeClass* InfantryVirus;  // 0x90
    AnimTypeClass* Wake_d;  // 0x94
    AnimTypeClass* NukeTakeOff_d;  // 0x98
    AnimTypeClass* Behind;  // 0x9C
    double AITriggerSuccessWeightDelta;  // 0xC0
    double AITriggerFailureWeightDelta;  // 0xC8
    double AITriggerTrackRecordCoefficient;  // 0xD0
    char MaximumQueuedObjects[4];  // 0xD8
    char AircraftFogReveal[4];  // 0xDC
    char DigSound[4];  // 0xE0
    char CreateUnitSound[4];  // 0xE4
    char CreateInfantrySound[4];  // 0xE8
    char CreateAircraftSound[4];  // 0xEC
    char BaseUnderAttackSound[4];  // 0xF0
    char GUIMainButtonSound[4];  // 0xF4
    char GUIBuildSound[4];  // 0xF8
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
    char SpyPlaneCameraFrames[4];  // 0x1F4
    AnimTypeClass* Dig;  // 0x1F8
    AnimTypeClass* IonBlast;  // 0x1FC
    AnimTypeClass* IonBeam;  // 0x200
    unsigned int DamageFireTypes;  // 0x204
    char ParadropRadius[4];  // 0x208
    double ZoomInFactor;  // 0x20C
    double ConditionRedSparkingProbability;  // 0x214
    double ConditionYellowSparkingProbability;  // 0x21C
    char TiberiumExplosionDamage[4];  // 0x224
    char TiberiumStrength[4];  // 0x228
    float MinLowPowerProductionSpeed;  // 0x22C
    float MaxLowPowerProductionSpeed;  // 0x230
    float LowPowerPenaltyModifier;  // 0x234
    float MultipleFactory;  // 0x238
    char MaximumCheerRate[4];  // 0x23C
    unsigned char TurnRate;  // 0x40C
    unsigned char Speed;  // 0x410
    int Climb;  // 0x420
    unsigned char WobbleDeviation;  // 0x438
    double TreeFlammability;  // 0x588
    double MissileSpeedVar;  // 0x590
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
    double VeteranCombat;  // 0x628
    double VeteranSpeed;  // 0x630
    double VeteranSight;  // 0x638
    double VeteranArmor;  // 0x640
    double VeteranROF;  // 0x648
    double VeteranCap;  // 0x650
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
    char ChronoMinimumDelay[4];  // 0x824
    char ChronoRangeMinimum[4];  // 0x828
    InfantryTypeClass* AlliedDisguise;  // 0x82C
    InfantryTypeClass* SovietDisguise;  // 0x830
    InfantryTypeClass* ThirdDisguise;  // 0x834
    char SpyPowerBlackout[4];  // 0x838
    float SpyMoneyStealPercent;  // 0x83C
    bool AttackCursorOnDisguise;  // 0x840
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
    char IvanIconFlickerRate[4];  // 0x8BC
    WeaponTypeClass* DeathWeapon;  // 0x8C0
    SHPStruct* BOMBCURS_SHP;  // 0x8C4
    SHPStruct* CHRONOSK_SHP;  // 0x8C8
    char IronCurtainDuration[4];  // 0x8CC
    char PsychicRevealRadius[4];  // 0x8D0
    char V3Rocket[52];  // 0x8D4
    char DMisl[52];  // 0x908
    char CMisl[52];  // 0x93C
    double MyEffectivenessCoefficientDefault;  // 0x970
    double TargetEffectivenessCoefficientDefault;  // 0x978
    double TargetSpecialThreatCoefficientDefault;  // 0x980
    double TargetStrengthCoefficientDefault;  // 0x988
    double TargetDistanceCoefficientDefault;  // 0x990
    double EnemyHouseThreatBonus;  // 0x998
    double TurboBoost;  // 0x9A0
    double AttackInterval;  // 0x9A8
    double AttackDelay;  // 0x9B0
    double PowerEmergency;  // 0x9B8
    double AirstripRatio;  // 0x9C0
    char AirstripLimit[4];  // 0x9C8
    double HelipadRatio;  // 0x9CC
    char HelipadLimit[4];  // 0x9D4
    double TeslaRatio;  // 0x9D8
    char TeslaLimit[4];  // 0x9E0
    double AARatio;  // 0x9E4
    char AALimit[4];  // 0x9EC
    double DefenseRatio;  // 0x9F0
    char DefenseLimit[4];  // 0x9F8
    double WarRatio;  // 0x9FC
    char WarLimit[4];  // 0xA04
    double BarracksRatio;  // 0xA08
    char BarracksLimit[4];  // 0xA10
    char RefineryLimit[4];  // 0xA14
    double RefineryRatio;  // 0xA18
    char BaseSizeAdd[4];  // 0xA20
    char PowerSurplus[4];  // 0xA24
    char InfantryReserve[4];  // 0xA28
    char InfantryBaseMult[4];  // 0xA2C
    char SoloCrateMoney[4];  // 0xA30
    char TreeStrength[4];  // 0xA34
    UnitTypeClass* UnitCrateType;  // 0xA38
    double PatrolScan;  // 0xA3C
    double CloakDelay;  // 0xA44
    double GameSpeedBias;  // 0xA4C
    double BaseBias;  // 0xA54
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
    char Normal[80];  // 0xB9C
    char Difficult[80];  // 0xBEC
    unsigned int MaxIQLevels_d;  // 0x1434
    unsigned int SuperWeapons_d;  // 0x1438
    unsigned int Production_d;  // 0x143C
    unsigned int GuardArea_d;  // 0x1440
    unsigned int RepairSell_d;  // 0x1444
    unsigned int AutoCrush_d;  // 0x1448
    unsigned int ContentScan_d;  // 0x1450
    unsigned int Aircraft_d;  // 0x1454
    unsigned int Harvester_d;  // 0x1458
    unsigned int SellBack_d;  // 0x145C
    double GrowthRate;  // 0x1638
    double ShroudRate;  // 0x1640
    double FogRate;  // 0x1648
    double IceGrowthRate;  // 0x1650
    double VeinGrowthRate;  // 0x1658
    char IceSolidifyFrameTime[4];  // 0x1660
    double AmbientChangeRate;  // 0x1664
    double AmbientChangeStep;  // 0x166C
    double CrateRegen;  // 0x1674
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
    double URepairRate;  // 0x16C0
    double IRepairRate;  // 0x16C8
    double ConditionYellow;  // 0x16D0
    double ConditionRed;  // 0x16D8
    double IdleActionFrequency;  // 0x16E0
    char CloseEnough[4];  // 0x16E8
    char Stray[4];  // 0x16EC
    char RelaxedStray[4];  // 0x16F0
    char GuardModeStray[4];  // 0x16F4
    char Crush[4];  // 0x16F8
    char CrateRadius[4];  // 0x16FC
    char HomingScatter[4];  // 0x1700
    char BallisticScatter[4];  // 0x1704
    double RefundPercent;  // 0x1708
    char BridgeStrength[4];  // 0x1710
    double BuildSpeed;  // 0x1714
    double C4Delay;  // 0x171C
    char CreditReserve[4];  // 0x1724
    double PathDelay;  // 0x1728
    char BlockagePathDelay[4];  // 0x1730
    double MovieTime;  // 0x1734
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
    WarheadTypeClass* LightningWarhead;  // 0x1764
    char ForceShieldRadius[4];  // 0x1768
    char ForceShieldDuration[4];  // 0x176C
    char ForceShieldBlackoutDuration[4];  // 0x1770
    char ForceShieldPlayFadeSoundTime[4];  // 0x1774
    bool MutateExplosion;  // 0x1778
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
    double RadLightFactor;  // 0x17C8
    double RadTintFactor;  // 0x17D0
    char RadColor[3];  // 0x17D8
    WarheadTypeClass* RadSiteWarhead;  // 0x17DC
    char ElevationIncrement[4];  // 0x17E0
    double ElevationIncrementBonus;  // 0x17E4
    double ElevationBonusCap;  // 0x17EC
    bool AlliedWallTransparency;  // 0x17F4
    double WallPenetratorThreshold;  // 0x17F8
    char LocalRadarColor[3];  // 0x1800
    char LineTrailColorOverride[3];  // 0x1803
    unsigned int RadDurationMultiple_d;  // 0x1804
    char ChronoBeamColor[3];  // 0x1806
    unsigned int RadApplicationDelay_d;  // 0x1808
    char MagnaBeamColor[3];  // 0x1809
    char RadLevelMax_d[4];  // 0x180C
    AnimTypeClass* RadLevelDelay_d;  // 0x1810
    char RadLightDelay_d[48];  // 0x1814
    void * ptr_1820;  // 0x1820
    unsigned int RadSiteWarhead_d;  // 0x1834
    unsigned int ElevationIncrement_d;  // 0x1838
    char LaserTargetColor[4];  // 0x1844
    char IronCurtainColor[4];  // 0x1848
    char BerserkColor[4];  // 0x184C
    char AlliedWallTransparency_d[4];  // 0x1850
    float DirectRockingCoefficient;  // 0x1854
    float FallBackCoefficient;  // 0x1858
    char CrewCount[4];  // 0x185C
// --- flat members (END) ---
    static int Addition(void *aP1);
    unsigned int WeatherConBolts[4];  // 0x288..0x297 G42.33 supply ([3]@0x294 per asm 0x729a26 mov ecx,[edx+294h])
    int DefenseLimit;  // 0x9F8 (G57w18j4: blob->scalar, member_lookup int size=4 g7-til-merge)
    int ElevationIncrement;  // 0x17E0 (G57W14E1 til supply)
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
    int  readParticleSystems(TechnoTypeClass * aP1);
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
    int ReadDataList(void *a1 = 0);  // 0x672440
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
};

} // namespace gamemd
