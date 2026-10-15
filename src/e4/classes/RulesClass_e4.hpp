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
    void* DetailMinFrameRateMovie;  // 0x4 [X30:type_map]
    int DetailBufferZoneWidth;  // 0x8 [X30:type_map]
    char AmmoCrateDamage[4];  // 0xC
    UnitTypeClass* LargeVisceroid;  // 0x10
    UnitTypeClass* SmallVisceroid;  // 0x14
    int AttackingAircraftSightRange;  // 0x18 [X30:type_map]
    unsigned int Buildable;  // 0x1C
    double TunnelSpeed;  // 0x20
    double TiberiumHeal;  // 0x28
    void* SelfHealInfantryFrames;  // 0x30 [X30:type_map]
    int SelfHealInfantryAmount;  // 0x34 [X30:type_map]
    void* SelfHealUnitFrames;  // 0x38 [X30:type_map]
    void* SelfHealUnitAmount;  // 0x3C [X30:type_map]
    bool FreeMCV;  // 0x40
    bool BerzerkAllowed;  // 0x41
    int PoseDir;  // 0x44 [X30:type_map]
    int DeployDir;  // 0x48 [X30:type_map]
    int FlashFrameTime;  // 0x4C [X30:type_map]
    int RadarCombatFlashTime;  // 0x50 [X30:type_map]
    int BarrelExplode;  // 0x54 [X30:type_map]
    void* RadarEventColorSpeed;  // 0x58 [X30:type_map]
    void* RadarEventMinRadius;  // 0x5C [X30:type_map]
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
    void* MaximumQueuedObjects;  // 0xD8 [X30:type_map]
    int AircraftFogReveal;  // 0xDC [X30:type_map]
    void* DigSound;  // 0xE0 [X30:type_map]
    void* CreateUnitSound;  // 0xE4 [X30:type_map]
    int CreateInfantrySound;  // 0xE8 [X30:type_map]
    int CreateAircraftSound;  // 0xEC [X30:type_map]
    AnimTypeClass* BaseUnderAttackSound;  // 0xF0 [X30:type_map]
    int GUIMainButtonSound;  // 0xF4 [X30:type_map]
    void* GUIBuildSound;  // 0xF8 [X30:type_map]
    void* GUITabSound;  // 0xFC [X30:type_map]
    void* GUIOpenSound;  // 0x100 [X30:type_map]
    void* GUICloseSound;  // 0x104 [X30:type_map]
    void* GUIMoveOutSound;  // 0x108 [X30:type_map]
    int GUIMoveInSound;  // 0x10C [X30:type_map]
    char GUIScrollSound[4];  // 0x110
    int GUIComboOpenSound;  // 0x114 [X30:type_map]
    char GUIComboCloseSound[4];  // 0x118
    char GUICheckboxSound[4];  // 0x11C
    void* ScoreAnimSound;  // 0x120 [X30:type_map]
    void* IFVTransformSound;  // 0x124 [X30:type_map]
    int PsychicSensorDetectSound;  // 0x128 [X30:type_map]
    char BuildingGarrisonedSound[4];  // 0x12C
    int BuildingAbandonedSound;  // 0x130 [X30:type_map]
    char BuildingRepairedSound[4];  // 0x134
    char CheerSound[4];  // 0x138
    void* PlaceBeaconSound;  // 0x13C [X30:type_map]
    void* DefaultChronoSound;  // 0x140 [X30:type_map]
    int StartPlanningModeSound;  // 0x144 [X30:type_map]
    char AddPlanningModeCommandSound[4];  // 0x148
    int ExecutePlanSound;  // 0x14C [X30:type_map]
    char EndPlanningModeSound[4];  // 0x150
    char CrateMoneySound[4];  // 0x154
    void* CrateRevealSound;  // 0x158 [X30:type_map]
    void* CrateFireSound;  // 0x15C [X30:type_map]
    int CrateArmourSound;  // 0x160 [X30:type_map]
    char CrateSpeedSound[4];  // 0x164
    int CrateUnitSound;  // 0x168 [X30:type_map]
    char CratePromoteSound[4];  // 0x16C
    char ImpactWaterSound[4];  // 0x170
    int ImpactLandSound;  // 0x174 [X30:type_map]
    int SinkingSound;  // 0x178 [X30:type_map]
    int BombTickingSound;  // 0x17C [X30:type_map]
    int BombAttachSound;  // 0x180 [X30:type_map]
    int YuriMindControlSound;  // 0x184 [X30:type_map]
    int ChronoInSound;  // 0x188 [X30:type_map]
    int ChronoOutSound;  // 0x18C [X30:type_map]
    int SpySatActivationSound;  // 0x190 [X30:type_map]
    int SpySatDeactivationSound;  // 0x194 [X30:type_map]
    int UpgradeVeteranSound;  // 0x198 [X30:type_map]
    int UpgradeEliteSound;  // 0x19C [X30:type_map]
    int VoiceIFVRepair;  // 0x1A0 [X30:type_map]
    int SlavesFreeSound;  // 0x1A4 [X30:type_map]
    int SlaveMinerDeploySound;  // 0x1A8 [X30:type_map]
    int SlaveMinerUndeploySound;  // 0x1AC [X30:type_map]
    int BunkerWallsUpSound;  // 0x1B0 [X30:type_map]
    int BunkerWallsDownSound;  // 0x1B4 [X30:type_map]
    int RepairBridgeSound;  // 0x1B8 [X30:type_map]
    int PsychicDominatorActivateSound;  // 0x1BC [X30:type_map]
    int GeneticMutatorActivateSound;  // 0x1C0 [X30:type_map]
    int PsychicRevealActivateSound;  // 0x1C4 [X30:type_map]
    int MasterMindOverloadDeathSound;  // 0x1C8 [X30:type_map]
    int AirstrikeAbortSound;  // 0x1CC [X30:type_map]
    int AirstrikeAttackVoice;  // 0x1D0 [X30:type_map]
    int MindClearedSound;  // 0x1D4 [X30:type_map]
    int EnterGrinderSound;  // 0x1D8 [X30:type_map]
    int LeaveGrinderSound;  // 0x1DC [X30:type_map]
    int EnterBioReactorSound;  // 0x1E0 [X30:type_map]
    int LeaveBioReactorSound;  // 0x1E4 [X30:type_map]
    int ActivateSound;  // 0x1E8 [X30:type_map]
    int DeactivateSound;  // 0x1EC [X30:type_map]
    int SpyPlaneCamera;  // 0x1F0 [X30:type_map]
    int SpyPlaneCameraFrames;  // 0x1F4 [X30:type_map]
    AnimTypeClass* Dig;  // 0x1F8
    AnimTypeClass* IonBlast;  // 0x1FC
    AnimTypeClass* IonBeam;  // 0x200
    void* DamageFireTypes;  // 0x204 [X30:type_map]
    int ParadropRadius;  // 0x208 [X30:type_map]
    double ZoomInFactor;  // 0x20C
    double ConditionRedSparkingProbability;  // 0x214
    double ConditionYellowSparkingProbability;  // 0x21C
    int TiberiumExplosionDamage;  // 0x224 [X30:type_map]
    int TiberiumStrength;  // 0x228 [X30:type_map]
    float MinLowPowerProductionSpeed;  // 0x22C
    float MaxLowPowerProductionSpeed;  // 0x230
    float LowPowerPenaltyModifier;  // 0x234
    float MultipleFactory;  // 0x238
    int MaximumCheerRate;  // 0x23C [X30:type_map]
    unsigned char TurnRate;  // 0x40C
    unsigned char Speed;  // 0x410
    int Climb;  // 0x420
    unsigned char WobbleDeviation;  // 0x438
    double TreeFlammability;  // 0x588
    double MissileSpeedVar;  // 0x590
    double MissileROTVar;  // 0x598
    void* MissileSafetyAltitude;  // 0x5A0 [X30:type_map]
    WeaponTypeClass* DropPodWeapon;  // 0x5A4
    int DropPodHeight;  // 0x5A8 [X30:type_map]
    void* DropPodSpeed;  // 0x5AC [X30:type_map]
    double DropPodAngle;  // 0x5B0
    double ScrollMultiplier;  // 0x5B8
    double CrewEscape;  // 0x5C0
    void* ShakeScreen;  // 0x5C8 [X30:type_map]
    void* HoverHeight;  // 0x5CC [X30:type_map]
    double HoverBob;  // 0x5D0
    double HoverBoost;  // 0x5D8
    double HoverAcceleration;  // 0x5E0
    double HoverBrake;  // 0x5E8
    double HoverDampen;  // 0x5F0
    double PlacementDelay;  // 0x5F8
    void* CloakingStages;  // 0x600 [X30:type_map]
    void* RevealTriggerRadius;  // 0x604 [X30:type_map]
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
    int CloakSound;  // 0x658 [X30:type_map]
    int SellSound;  // 0x65C [X30:type_map]
    char GameClosed[4];  // 0x660
    int IncomingMessage;  // 0x664 [X30:type_map]
    void* SystemError;  // 0x668 [X30:type_map]
    int OptionsChanged;  // 0x66C [X30:type_map]
    void* GameForming;  // 0x670 [X30:type_map]
    void* PlayerLeft;  // 0x674 [X30:type_map]
    void* PlayerJoined;  // 0x678 [X30:type_map]
    void* MessageCharTyped;  // 0x67C [X30:type_map]
    void* Construction;  // 0x680 [X30:type_map]
    unsigned char CreditTicks;  // 0x684
    void* BuildingDieSound;  // 0x69C [X30:type_map]
    int BuildingSlam;  // 0x6A0 [X30:type_map]
    int RadarOn;  // 0x6A4 [X30:type_map]
    int RadarOff;  // 0x6A8 [X30:type_map]
    int MovieOn;  // 0x6AC [X30:type_map]
    int MovieOff;  // 0x6B0 [X30:type_map]
    int ScoldSound;  // 0x6B4 [X30:type_map]
    int TeslaCharge;  // 0x6B8 [X30:type_map]
    int TeslaZap;  // 0x6BC [X30:type_map]
    int GenericClick;  // 0x6C0 [X30:type_map]
    int GenericBeep;  // 0x6C4 [X30:type_map]
    int BuildingDamageSound;  // 0x6C8 [X30:type_map]
    DynamicVector* HealCrateSound;  // 0x6CC [X30:type_map]
    void* ChuteSound;  // 0x6D0 [X30:type_map]
    int StopSound;  // 0x6D4 [X30:type_map]
    char GuardSound[4];  // 0x6D8
    int ScatterSound;  // 0x6DC [X30:type_map]
    int DeploySound;  // 0x6E0 [X30:type_map]
    char StormSound[4];  // 0x6E4
    unsigned char LightningSounds;  // 0x6E8
    int ShellButtonSlideSound;  // 0x700 [X30:type_map]
    double WallBuildSpeedCoefficient;  // 0x758
    double ChargeToDrainRatio;  // 0x760
    int WindDirection;  // 0x768 [X30:type_map]
    BuildingTypeClass* CameraRange;  // 0x76C [X30:type_map]
    int FlightLevel;  // 0x770 [X30:type_map]
    BuildingTypeClass* ParachuteMaxFallRate;  // 0x774 [X30:type_map]
    int NoParachuteMaxFallRate;  // 0x778 [X30:type_map]
    BuildingTypeClass* BuildingDrop;  // 0x77C [X30:type_map]
    BuildingTypeClass* GDIGateOne;  // 0x780
    BuildingTypeClass* GDIGateTwo;  // 0x784
    BuildingTypeClass* NodGateOne;  // 0x788
    BuildingTypeClass* NodGateTwo;  // 0x78C
    BuildingTypeClass* WallTower;  // 0x790
    void* BuildConst;  // 0x794 [X30:type_map]
    void* BuildPower;  // 0x798 [X30:type_map]
    void* BuildRefinery;  // 0x79C [X30:type_map]
    void* BuildBarracks;  // 0x7A0 [X30:type_map]
    void* BuildTech;  // 0x7A4 [X30:type_map]
    void* BuildWeapons;  // 0x7A8 [X30:type_map]
    void* BuildNavalYard;  // 0x7AC [X30:type_map]
    double GDIWallDefense;  // 0x7B0
    double GDIWallDefenseCoefficient;  // 0x7B8
    double NodBaseDefenseCoefficient;  // 0x7C0
    SmudgeTypeVector* GDIBaseDefenseCoefficient;  // 0x7C8 [X30:type_map]
    char ComputerBaseDefenseResponse[4];  // 0x7D0
    int MaximumBaseDefenseValue;  // 0x7D4 [X30:type_map]
    unsigned int BaseUnit;  // 0x7D8
    unsigned int HarvesterUnit;  // 0x7DC
    void* PadAircraft;  // 0x7E0 [X30:type_map]
    void* OnFire;  // 0x7E4 [X30:type_map]
    void* TreeFire;  // 0x7E8 [X30:type_map]
    AnimTypeClass* Smoke;  // 0x7EC
    AnimTypeClass* SmokeAlt;  // 0x7F0
    AnimTypeClass* MoveFlash;  // 0x7F4
    AnimTypeClass* BombParachute;  // 0x7F8
    AnimTypeClass* Parachute;  // 0x7FC
    void* SplashList;  // 0x800 [X30:type_map]
    AnimTypeClass* SmallFire;  // 0x804
    AnimTypeClass* LargeFire;  // 0x808
    InfantryTypeClass* Paratrooper;  // 0x80C
    char EliteFlashTimer[4];  // 0x810
    char ChronoDelay[4];  // 0x814
    SmudgeTypeVector* ChronoReinfDelay;  // 0x818 [X30:type_map]
    void* ChronoDistanceFactor;  // 0x81C [X30:type_map]
    bool ChronoTrigger;  // 0x820
    char ChronoMinimumDelay[4];  // 0x824
    int ChronoRangeMinimum;  // 0x828 [X30:type_map]
    InfantryTypeClass* AlliedDisguise;  // 0x82C
    InfantryTypeClass* SovietDisguise;  // 0x830
    InfantryTypeClass* ThirdDisguise;  // 0x834
    void* SpyPowerBlackout;  // 0x838 [X30:type_map]
    float SpyMoneyStealPercent;  // 0x83C
    bool AttackCursorOnDisguise;  // 0x840
    float AIMinorSuperReadyPercent;  // 0x844
    char AISafeDistance[4];  // 0x848
    char HarvesterTooFarDistance[4];  // 0x84C
    void* ChronoHarvTooFarDistance;  // 0x850 [X30:type_map]
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
    void* IvanDamage;  // 0x8B0 [X30:type_map]
    int IvanTimedDelay;  // 0x8B4 [X30:type_map]
    bool CanDetonateTimeBomb;  // 0x8B8
    bool CanDetonateDeathBomb;  // 0x8B9
    int IvanIconFlickerRate;  // 0x8BC [X30:type_map]
    WeaponTypeClass* DeathWeapon;  // 0x8C0
    SHPStruct* BOMBCURS_SHP;  // 0x8C4
    SHPStruct* CHRONOSK_SHP;  // 0x8C8
    void* IronCurtainDuration;  // 0x8CC [X30:type_map]
    int PsychicRevealRadius;  // 0x8D0 [X30:type_map]
    char V3Rocket[52];  // 0x8D4
    char DMisl[52];  // 0x908
    char CMisl[52];  // 0x93C
    double MyEffectivenessCoefficientDefault;  // 0x970
    double TargetEffectivenessCoefficientDefault;  // 0x978
    double TargetSpecialThreatCoefficientDefault;  // 0x980
    double TargetStrengthCoefficientDefault;  // 0x988
    DynamicVector* TargetDistanceCoefficientDefault;  // 0x990 [X30:type_map]
    double EnemyHouseThreatBonus;  // 0x998
    double TurboBoost;  // 0x9A0
    double AttackInterval;  // 0x9A8
    double AttackDelay;  // 0x9B0
    double PowerEmergency;  // 0x9B8
    double AirstripRatio;  // 0x9C0
    DynamicVector* AirstripLimit;  // 0x9C8 [X30:type_map]
    double HelipadRatio;  // 0x9CC
    int HelipadLimit;  // 0x9D4 [X30:type_map]
    double TeslaRatio;  // 0x9D8
    DynamicVector* TeslaLimit;  // 0x9E0 [X30:type_map]
    double AARatio;  // 0x9E4
    char AALimit[4];  // 0x9EC
    double DefenseRatio;  // 0x9F0
    double WarRatio;  // 0x9FC
    int WarLimit;  // 0xA04 [X30:type_map]
    double BarracksRatio;  // 0xA08
    char BarracksLimit[4];  // 0xA10
    char RefineryLimit[4];  // 0xA14
    double RefineryRatio;  // 0xA18
    int BaseSizeAdd;  // 0xA20 [X30:type_map]
    char PowerSurplus[4];  // 0xA24
    int InfantryReserve;  // 0xA28 [X30:type_map]
    char InfantryBaseMult[4];  // 0xA2C
    char SoloCrateMoney[4];  // 0xA30
    DynamicVector* TreeStrength;  // 0xA34 [X30:type_map]
    UnitTypeClass* UnitCrateType;  // 0xA38
    double PatrolScan;  // 0xA3C
    double CloakDelay;  // 0xA44
    double GameSpeedBias;  // 0xA4C
    DynamicVector* BaseBias;  // 0xA54 [X30:type_map]
    double ExpSpread;  // 0xA5C
    char FireSupress[4];  // 0xA64
    char MaxIQLevels[4];  // 0xA68
    DynamicVector* SuperWeapons;  // 0xA6C [X30:type_map]
    void* Production;  // 0xA70 [X30:type_map]
    DynamicVector* GuardArea;  // 0xA74 [X30:type_map]
    char RepairSell[4];  // 0xA78
    int AutoCrush;  // 0xA7C [X30:type_map]
    char Scatter[4];  // 0xA80
    char ContentScan[4];  // 0xA84
    DynamicVector* Aircraft;  // 0xA88 [X30:type_map]
    void* Harvester;  // 0xA8C [X30:type_map]
    int SellBack;  // 0xA90 [X30:type_map]
    char AIBaseSpacing[4];  // 0xA94
    Power* SilverCrate;  // 0xA98 [X30:type_map]
    char WoodCrate[4];  // 0xA9C
    char WaterCrate[4];  // 0xAA0
    DynamicVector* CrateMinimum;  // 0xAA4 [X30:type_map]
    int CrateMaximum;  // 0xAA8 [X30:type_map]
    char Money[4];  // 0xAAC
    char MinMoney[4];  // 0xAB0
    int MaxMoney;  // 0xAB4 [X30:type_map]
    char MoneyIncrement[4];  // 0xAB8
    char UnitCount[4];  // 0xABC
    DynamicVector* MinUnitCount;  // 0xAC0 [X30:type_map]
    int MaxUnitCount;  // 0xAC4 [X30:type_map]
    char TechLevel[4];  // 0xAC8
    char GameSpeed[4];  // 0xACC
    int AIPlayers;  // 0xAD0 [X30:type_map]
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
    int SuspendPriority;  // 0xB04 [X30:type_map]
    double SuspendDelay;  // 0xB08
    DynamicVector* SurvivorRate;  // 0xB10 [X30:type_map]
    void* AlliedSurvivorDivisor;  // 0xB18 [X30:type_map]
    int SovietSurvivorDivisor;  // 0xB1C [X30:type_map]
    void* ThirdSurvivorDivisor;  // 0xB20 [X30:type_map]
    double ReloadRate;  // 0xB24
    double AutocreateTime;  // 0xB2C
    double BuildupTime;  // 0xB34
    void* HarvesterLoadRate;  // 0xB3C [X30:type_map]
    double HarvesterDumpRate;  // 0xB40
    char AtomDamage[4];  // 0xB48
    char Easy[80];  // 0xB4C
    char Normal[80];  // 0xB9C
    char Difficult[80];  // 0xBEC
    unsigned int MaxIQLevels_d;  // 0x1434
    void* SuperWeapons_d;  // 0x1438 [X30:type_map]
    void* Production_d;  // 0x143C [X30:type_map]
    unsigned int GuardArea_d;  // 0x1440
    void* RepairSell_d;  // 0x1444 [X30:type_map]
    void* AutoCrush_d;  // 0x1448 [X30:type_map]
    void* ContentScan_d;  // 0x1450 [X30:type_map]
    void* Aircraft_d;  // 0x1454 [X30:type_map]
    unsigned int Harvester_d;  // 0x1458
    void* SellBack_d;  // 0x145C [X30:type_map]
    double GrowthRate;  // 0x1638
    double ShroudRate;  // 0x1640
    void* FogRate;  // 0x1648 [X30:type_map]
    double IceGrowthRate;  // 0x1650
    double VeinGrowthRate;  // 0x1658
    int IceSolidifyFrameTime;  // 0x1660 [X30:type_map]
    double AmbientChangeRate;  // 0x1664
    double AmbientChangeStep;  // 0x166C
    double CrateRegen;  // 0x1674
    double TimerWarning;  // 0x167C
    double SpeakDelay;  // 0x1684
    double DamageDelay;  // 0x168C
    char Gravity[4];  // 0x1694
    int LeptonsPerSightIncrease;  // 0x1698 [X30:type_map]
    char Incoming[4];  // 0x169C
    int MinDamage;  // 0x16A0 [X30:type_map]
    char MaxDamage[4];  // 0x16A4
    int RepairStep;  // 0x16A8 [X30:type_map]
    double RepairPercent;  // 0x16AC
    int IRepairStep;  // 0x16B4 [X30:type_map]
    void* RepairRate;  // 0x16B8 [X30:type_map]
    double URepairRate;  // 0x16C0
    double IRepairRate;  // 0x16C8
    double ConditionYellow;  // 0x16D0
    double ConditionRed;  // 0x16D8
    double IdleActionFrequency;  // 0x16E0
    int CloseEnough;  // 0x16E8 [X30:type_map]
    WarheadTypeClass* Stray;  // 0x16EC [X30:type_map]
    int RelaxedStray;  // 0x16F0 [X30:type_map]
    WarheadTypeClass* GuardModeStray;  // 0x16F4 [X30:type_map]
    int Crush;  // 0x16F8 [X30:type_map]
    int CrateRadius;  // 0x16FC [X30:type_map]
    int HomingScatter;  // 0x1700 [X30:type_map]
    int BallisticScatter;  // 0x1704 [X30:type_map]
    double RefundPercent;  // 0x1708
    void* BridgeStrength;  // 0x1710 [X30:type_map]
    double BuildSpeed;  // 0x1714
    double C4Delay;  // 0x171C
    IUnknown* CreditReserve;  // 0x1724 [X30:type_map]
    double PathDelay;  // 0x1728
    char BlockagePathDelay[4];  // 0x1730
    double MovieTime;  // 0x1734
    int TiberiumShortScan;  // 0x173C [X30:type_map]
    char TiberiumLongScan[4];  // 0x1740
    char LightningDeferment[4];  // 0x1744
    void* LightningDamage;  // 0x1748 [X30:type_map]
    int LightningStormDuration;  // 0x174C [X30:type_map]
    char LightningHitDelay[4];  // 0x1750
    char LightningScatterDelay[4];  // 0x1754
    void* LightningCellSpread;  // 0x1758 [X30:type_map]
    char LightningSeparation[4];  // 0x175C
    bool LightningPrintText;  // 0x1760
    WarheadTypeClass* LightningWarhead;  // 0x1764
    void* ForceShieldRadius;  // 0x1768 [X30:type_map]
    char ForceShieldDuration[4];  // 0x176C
    int ForceShieldBlackoutDuration;  // 0x1770 [X30:type_map]
    void* ForceShieldPlayFadeSoundTime;  // 0x1774 [X30:type_map]
    bool MutateExplosion;  // 0x1778
    IUnknown* CollapseChance;  // 0x177C [X30:type_map]
    IUnknown* WeedCapacity;  // 0x1780 [X30:type_map]
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
    int RadDurationMultiple;  // 0x17AC [X30:type_map]
    int RadApplicationDelay;  // 0x17B0 [X30:type_map]
    void* RadLevelMax;  // 0x17B4 [X30:type_map]
    void* RadLevelDelay;  // 0x17B8 [X30:type_map]
    void* RadLightDelay;  // 0x17BC [X30:type_map]
    double RadLevelFactor;  // 0x17C0
    double RadLightFactor;  // 0x17C8
    double RadTintFactor;  // 0x17D0
    char RadColor[3];  // 0x17D8
    WarheadTypeClass* RadSiteWarhead;  // 0x17DC
    double ElevationIncrementBonus;  // 0x17E4
    double ElevationBonusCap;  // 0x17EC
    bool AlliedWallTransparency;  // 0x17F4
    double WallPenetratorThreshold;  // 0x17F8
    char LocalRadarColor[3];  // 0x1800
    char LineTrailColorOverride[3];  // 0x1803
    unsigned int RadDurationMultiple_d;  // 0x1804
    char ChronoBeamColor[3];  // 0x1806
    void* RadApplicationDelay_d;  // 0x1808 [X30:type_map]
    char MagnaBeamColor[3];  // 0x1809
    void* RadLevelMax_d;  // 0x180C [X30:type_map]
    AnimTypeClass* RadLevelDelay_d;  // 0x1810
    char RadLightDelay_d[48];  // 0x1814
    IUnknown* ptr_1820;  // 0x1820 [X30:type_map]
    unsigned int RadSiteWarhead_d;  // 0x1834
    unsigned int ElevationIncrement_d;  // 0x1838
    int LaserTargetColor;  // 0x1844 [X30:type_map]
    int IronCurtainColor;  // 0x1848 [X30:type_map]
    int BerserkColor;  // 0x184C [X30:type_map]
    int AlliedWallTransparency_d;  // 0x1850 [X30:type_map]
    float DirectRockingCoefficient;  // 0x1854
    float FallBackCoefficient;  // 0x1858
    int CrewCount;  // 0x185C [X30:type_map]
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

    unsigned char ColorAdd[48];  /* int[12] */  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)
    unsigned char __pad_042;  // 0x42 [X30:canon]
    int __pad_0A0;  // 0xA0 [X30:type_map]
    int __pad_240;  // 0x240 [X30:type_map]
    unsigned char __pad_414;  // 0x414 [X30:canon]
    unsigned char __pad_424;  // 0x424 [X30:canon]
    void* __pad_43C;  // 0x43C [X30:type_map]
    int __pad_704;  // 0x704 [X30:type_map]
    unsigned char __pad_821;  // 0x821 [X30:canon]
    int __pad_841;  // 0x841 [X30:type_map]
    unsigned char __pad_8BA;  // 0x8BA [X30:canon]
    void* __pad_C3C;  // 0xC3C [X30:type_map]
    int __pad_144C;  // 0x144C [X30:type_map]
    void* __pad_1460;  // 0x1460 [X30:type_map]
    unsigned char __pad_1761;  // 0x1761 [X30:canon]
    unsigned char __pad_1779;  // 0x1779 [X30:canon]
    unsigned char __pad_17DB;  // 0x17DB [X30:canon]
    unsigned char __pad_17F5;  // 0x17F5 [X30:canon]
};

} // namespace gamemd
