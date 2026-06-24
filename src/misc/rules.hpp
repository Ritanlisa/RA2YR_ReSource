#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/vector.hpp"
#include "core/math.hpp"
#include "entity/tiberium.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class CCINIClass;
class AbstractClass;
class AircraftTypeClass;
class AnimTypeClass;
class BuildingTypeClass;
class BulletTypeClass;
class InfantryTypeClass;
class OverlayTypeClass;
class ParticleSystemTypeClass;
class SmudgeTypeClass;
class TerrainTypeClass;
class UnitTypeClass;
class VoxelAnimTypeClass;
class WarheadTypeClass;
class WeaponTypeClass;
struct SHPStruct;

struct DifficultyStruct
{
    double Firepower;
    double GroundSpeed;
    double AirSpeed;
    double Armor;
    double ROF;
    double Cost;
    double BuildTime;
    double RepairDelay;
    double BuildDelay;
    bool   BuildSlowdown;
    bool   DestroyWalls;
    bool   ContentScan;
    uint8_t unused_4B[5];
};

struct RocketStruct
{
    int32_t           PauseFrames;
    int32_t           TiltFrames;
    float             PitchInitial;
    float             PitchFinal;
    float             TurnRate;
    int32_t           RaiseRate;
    float             Acceleration;
    int32_t           Altitude;
    int32_t           Damage;
    int32_t           EliteDamage;
    int32_t           BodyLength;
    bool              LazyCurve;
    AircraftTypeClass* Type;

    // unmatched: no callgraph reference and no git history record
    RocketStruct() noexcept;
    // unmatched: no callgraph reference and no git history record
    explicit RocketStruct(noinit_t) noexcept;
};

class RulesClass
{
public:
    static RulesClass* Instance;

    void Init(CCINIClass* pINI);
    void ReadFile(CCINIClass* pINI);
    void ReadGeneral(CCINIClass* pINI);
    void ReadCombatDamage(CCINIClass* pINI);  // 0x661510
    void ReadAudioVisual(CCINIClass* pINI);  // 0x66D150
    void ReadSpecialWeapons(CCINIClass* pINI);  // 0x66D1F0
    void ReadCrateRules(CCINIClass* pINI);  // 0x672280
    void ReadRadiation(CCINIClass* pINI);  // 0x6723D0
    void ReadColors(CCINIClass* pINI);  // 0x66D3A0
    void ReadColorAdd(CCINIClass* pINI);  // 0x66D480
    void ReadDifficulty(CCINIClass* pINI);  // 0x6743D0
    void ReadMultiplayerDialogSettings(CCINIClass* pINI);
    void ReadMaximums(CCINIClass* pINI);  // 0x679FA0
    void ReadInfantryTypes(CCINIClass* pINI);  // 0x679FD0
    void ReadCountries(CCINIClass* pINI);  // 0x67A000
    void ReadVehicleTypes(CCINIClass* pINI);  // 0x67A060
    void ReadAircraftTypes(CCINIClass* pINI);  // 0x67A190
    void ReadSides(CCINIClass* pINI);
    void ReadSuperWeaponTypes(CCINIClass* pINI);  // 0x67A210
    void ReadBuildingTypes(CCINIClass* pINI);  // 0x67A310
    void ReadTerrainTypes(CCINIClass* pINI);  // 0x67A3C0
    void ReadSmudgeTypes(CCINIClass* pINI);  // 0x67A730
    void ReadOverlayTypes(CCINIClass* pINI);  // 0x67A7C0
    void ReadAnimations(CCINIClass* pINI);  // 0x67A7D0
    // unmatched: no callgraph reference and no git history record
    void ReadVoxelAnims(CCINIClass* pINI);
    void ReadWarheads(CCINIClass* pINI);  // 0x67A8A0
    void ReadParticles(CCINIClass* pINI);  // 0x67A8B0
    void ReadParticleSystems(CCINIClass* pINI);  // 0x67A8E0
    void ReadAI(CCINIClass* pINI);  // 0x67B480
    void ReadPowerups(CCINIClass* pINI);
    // unmatched: no callgraph reference and no git history record
    void ReadLandCharacteristics(CCINIClass* pINI);
    void ReadIQ(CCINIClass* pINI);  // 0x67C430
    // unmatched: no callgraph reference and no git history record
    void ReadJumpjetControls(CCINIClass* pINI);
    // unmatched: no callgraph reference and no git history record
    void ReadDifficulties(CCINIClass* pINI);
    void ReadMovies(CCINIClass* pINI);  // 0x674550
    // unmatched: no callgraph reference and no git history record
    void ReadAdvancedCommandBar(CCINIClass* pINI);
    void PointerGotInvalid(AbstractClass* pInvalid, bool removed);

    int32_t              DetailMinFrameRateNormal;
    int32_t              DetailMinFrameRateMovie;
    int32_t              DetailBufferZoneWidth;
    int32_t              AmmoCrateDamage;
    UnitTypeClass*       LargeVisceroid;
    UnitTypeClass*       SmallVisceroid;
    int32_t              AttackingAircraftSightRange;
    uint32_t             align_1C;
    double               TunnelSpeed;
    double               TiberiumHeal;
    int32_t              SelfHealInfantryFrames;
    int32_t              SelfHealInfantryAmount;
    int32_t              SelfHealUnitFrames;
    int32_t              SelfHealUnitAmount;
    bool                 FreeMCV;
    bool                 BerzerkAllowed;
    int32_t              PoseDir;
    int32_t              DeployDir;
    int32_t              FlashFrameTime;
    int32_t              RadarCombatFlashTime;
    int32_t              MaxWaypointPathLength;
    float                RadarEventColorSpeed;
    int32_t              RadarEventMinRadius;
    float                RadarEventSpeed;
    float                RadarEventRotationSpeed;
    AnimTypeClass*       DropPodPuff;
    AnimTypeClass*       BarrelExplode;
    TypeList<VoxelAnimTypeClass*> BarrelDebris;
    ParticleSystemTypeClass* BarrelParticle;
    AnimTypeClass*       Wake;
    AnimTypeClass*       NukeTakeOff;
    AnimTypeClass*       InfantryExplode;
    AnimTypeClass*       FlamingInfantry;
    AnimTypeClass*       InfantryHeadPop;
    AnimTypeClass*       InfantryNuked;
    AnimTypeClass*       InfantryVirus;
    AnimTypeClass*       InfantryBrute;
    AnimTypeClass*       InfantryMutate;
    AnimTypeClass*       Behind;
    uint32_t             align_BC;
    double               AITriggerSuccessWeightDelta;
    double               AITriggerFailureWeightDelta;
    double               AITriggerTrackRecordCoefficient;

    int32_t              MaximumQueuedObjects;
    int32_t              AircraftFogReveal;
    int32_t              DigSound;
    int32_t              CreateUnitSound;
    int32_t              CreateInfantrySound;
    int32_t              CreateAircraftSound;
    int32_t              BaseUnderAttackSound;
    int32_t              GUIMainButtonSound;
    int32_t              GUIBuildSound;
    int32_t              GUITabSound;
    int32_t              GUIOpenSound;
    int32_t              GUICloseSound;
    int32_t              GUIMoveOutSound;
    int32_t              GUIMoveInSound;
    int32_t              GUIScrollSound;
    int32_t              GUIComboOpenSound;
    int32_t              GUIComboCloseSound;
    int32_t              GUICheckboxSound;
    int32_t              ScoreAnimSound;
    int32_t              IFVTransformSound;
    int32_t              PsychicSensorDetectSound;
    int32_t              BuildingGarrisonedSound;
    int32_t              BuildingAbandonedSound;
    int32_t              BuildingRepairedSound;
    int32_t              CheerSound;
    int32_t              PlaceBeaconSound;
    int32_t              DefaultChronoSound;
    int32_t              StartPlanningModeSound;
    int32_t              AddPlanningModeCommandSound;
    int32_t              ExecutePlanSound;
    int32_t              EndPlanningModeSound;
    int32_t              CrateMoneySound;
    int32_t              CrateRevealSound;
    int32_t              CrateFireSound;
    int32_t              CrateArmourSound;
    int32_t              CrateSpeedSound;
    int32_t              CrateUnitSound;
    int32_t              CratePromoteSound;
    int32_t              ImpactWaterSound;
    int32_t              ImpactLandSound;
    int32_t              SinkingSound;
    int32_t              BombTickingSound;
    int32_t              BombAttachSound;
    int32_t              YuriMindControlSound;
    int32_t              ChronoInSound;
    int32_t              ChronoOutSound;
    int32_t              SpySatActivationSound;
    int32_t              SpySatDeactivationSound;
    int32_t              UpgradeVeteranSound;
    int32_t              UpgradeEliteSound;
    int32_t              VoiceIFVRepair;
    int32_t              SlavesFreeSound;
    int32_t              SlaveMinerDeploySound;
    int32_t              SlaveMinerUndeploySound;
    int32_t              BunkerWallsUpSound;
    int32_t              BunkerWallsDownSound;
    int32_t              RepairBridgeSound;
    int32_t              PsychicDominatorActivateSound;
    int32_t              GeneticMutatorActivateSound;
    int32_t              PsychicRevealActivateSound;
    int32_t              MasterMindOverloadDeathSound;
    int32_t              AirstrikeAbortSound;
    int32_t              AirstrikeAttackVoice;
    int32_t              MindClearedSound;
    int32_t              EnterGrinderSound;
    int32_t              LeaveGrinderSound;
    int32_t              EnterBioReactorSound;
    int32_t              LeaveBioReactorSound;
    int32_t              ActivateSound;
    int32_t              DeactivateSound;
    int32_t              SpyPlaneCamera;
    int32_t              SpyPlaneCameraFrames;
    AnimTypeClass*       Dig;
    AnimTypeClass*       IonBlast;
    AnimTypeClass*       IonBeam;
    TypeList<AnimTypeClass*> DamageFireTypes;
    int32_t              ParadropRadius;
    double               ZoomInFactor;
    double               ConditionRedSparkingProbability;
    double               ConditionYellowSparkingProbability;
    int32_t              TiberiumExplosionDamage;
    int32_t              TiberiumStrength;
    float                MinLowPowerProductionSpeed;
    float                MaxLowPowerProductionSpeed;
    float                LowPowerPenaltyModifier;
    float                MultipleFactory;
    int32_t              MaximumCheerRate;
    uint32_t             align_584;
    double               TreeFlammability;
    double               MissileSpeedVar;
    double               MissileROTVar;
    int32_t              MissileSafetyAltitude;
    WeaponTypeClass*     DropPodWeapon;
    int32_t              DropPodHeight;
    int32_t              DropPodSpeed;
    double               DropPodAngle;
    double               ScrollMultiplier;
    double               CrewEscape;
    int32_t              ShakeScreen;
    int32_t              HoverHeight;
    double               HoverBob;
    double               HoverBoost;
    double               HoverAcceleration;
    double               HoverBrake;
    double               HoverDampen;
    double               PlacementDelay;
    int32_t              CloakingStages;
    int32_t              RevealTriggerRadius;
    double               ShipSinkingWeight;
    double               IceCrackingWeight;
    double               IceBreakingWeight;
    double               VeteranRatio;
    double               VeteranCombat;
    double               VeteranSpeed;
    double               VeteranSight;
    double               VeteranArmor;
    double               VeteranROF;
    double               VeteranCap;
    int32_t              CloakSound;
    int32_t              SellSound;
    int32_t              GameClosed;
    int32_t              IncomingMessage;
    int32_t              SystemError;
    int32_t              OptionsChanged;
    int32_t              GameForming;
    int32_t              PlayerLeft;
    int32_t              PlayerJoined;
    int32_t              MessageCharTyped;
    int32_t              Construction;
    TypeList<int32_t>    CreditTicks;
    int32_t              BuildingDieSound;
    int32_t              BuildingSlam;
    int32_t              RadarOn;
    int32_t              RadarOff;
    int32_t              MovieOn;
    int32_t              MovieOff;
    int32_t              ScoldSound;
    int32_t              TeslaCharge;
    int32_t              TeslaZap;
    int32_t              GenericClick;
    int32_t              GenericBeep;
    int32_t              BuildingDamageSound;
    int32_t              HealCrateSound;
    int32_t              ChuteSound;
    int32_t              StopSound;
    int32_t              GuardSound;
    int32_t              ScatterSound;
    int32_t              DeploySound;
    int32_t              StormSound;
    TypeList<int32_t>    LightningSounds;
    int32_t              ShellButtonSlideSound;
    uint32_t             align_754;
    double               WallBuildSpeedCoefficient;
    double               ChargeToDrainRatio;
    int32_t              WindDirection;
    int32_t              CameraRange;
    int32_t              FlightLevel;
    int32_t              ParachuteMaxFallRate;
    int32_t              NoParachuteMaxFallRate;
    int32_t              BuildingDrop;
    BuildingTypeClass*   GDIGateOne;
    BuildingTypeClass*   GDIGateTwo;
    BuildingTypeClass*   NodGateOne;
    BuildingTypeClass*   NodGateTwo;
    BuildingTypeClass*   WallTower;
    TypeList<BuildingTypeClass*> BuildConst;
    TypeList<BuildingTypeClass*> BuildPower;
    TypeList<BuildingTypeClass*> BuildRefinery;
    TypeList<BuildingTypeClass*> BuildBarracks;
    TypeList<BuildingTypeClass*> BuildTech;
    TypeList<BuildingTypeClass*> BuildWeapons;
    TypeList<BuildingTypeClass*> BuildNavalYard;
    double               GDIWallDefense;
    double               GDIWallDefenseCoefficient;
    double               NodBaseDefenseCoefficient;
    double               GDIBaseDefenseCoefficient;
    int32_t              ComputerBaseDefenseResponse;
    int32_t              MaximumBaseDefenseValue;
    TypeList<UnitTypeClass*> BaseUnit;
    TypeList<UnitTypeClass*> HarvesterUnit;
    TypeList<AircraftTypeClass*> PadAircraft;
    TypeList<AnimTypeClass*> OnFire;
    TypeList<AnimTypeClass*> TreeFire;
    AnimTypeClass*       Smoke;
    AnimTypeClass*       SmokeAlt;
    AnimTypeClass*       MoveFlash;
    AnimTypeClass*       BombParachute;
    AnimTypeClass*       Parachute;
    TypeList<AnimTypeClass*> SplashList;
    AnimTypeClass*       SmallFire;
    AnimTypeClass*       LargeFire;
    InfantryTypeClass*   Paratrooper;
    int32_t              EliteFlashTimer;
    int32_t              ChronoDelay;
    int32_t              ChronoReinfDelay;
    int32_t              ChronoDistanceFactor;
    bool                 ChronoTrigger;
    int32_t              ChronoMinimumDelay;
    int32_t              ChronoRangeMinimum;
    InfantryTypeClass*   AlliedDisguise;
    InfantryTypeClass*   SovietDisguise;
    InfantryTypeClass*   ThirdDisguise;
    int32_t              SpyPowerBlackout;
    float                SpyMoneyStealPercent;
    bool                 AttackCursorOnDisguise;
    float                AIMinorSuperReadyPercent;
    int32_t              AISafeDistance;
    int32_t              HarvesterTooFarDistance;
    int32_t              ChronoHarvTooFarDistance;
    InfantryTypeClass*   Technician;
    InfantryTypeClass*   Engineer;
    InfantryTypeClass*   Pilot;
    InfantryTypeClass*   AlliedCrew;
    InfantryTypeClass*   SovietCrew;
    InfantryTypeClass*   ThirdCrew;
    WarheadTypeClass*    FlameDamage;
    WarheadTypeClass*    FlameDamage2;
    WarheadTypeClass*    NukeWarhead;
    BulletTypeClass*     NukeProjectile;
    BulletTypeClass*     NukeDown;
    WarheadTypeClass*    MutateWarhead;
    WarheadTypeClass*    MutateExplosionWarhead;
    WarheadTypeClass*    C4Warhead;
    WarheadTypeClass*    CrushWarhead;
    WarheadTypeClass*    V3Warhead;
    WarheadTypeClass*    DMislWarhead;
    WarheadTypeClass*    CMislWarhead;
    WarheadTypeClass*    V3EliteWarhead;
    WarheadTypeClass*    DMislEliteWarhead;
    WarheadTypeClass*    CMislEliteWarhead;
    WarheadTypeClass*    IvanWarhead;
    WarheadTypeClass*    IonCannonWarhead;
    int32_t              IvanDamage;
    int32_t              IvanTimedDelay;
    bool                 CanDetonateTimeBomb;
    bool                 CanDetonateDeathBomb;
    int32_t              IvanIconFlickerRate;
    WeaponTypeClass*     DeathWeapon;
    SHPStruct*           BOMBCURS_SHP;
    SHPStruct*           CHRONOSK_SHP;
    int32_t              IronCurtainDuration;
    int32_t              PsychicRevealRadius;
    RocketStruct         V3Rocket;
    RocketStruct         DMisl;
    RocketStruct         CMisl;
    double               MyEffectivenessCoefficientDefault;
    double               TargetEffectivenessCoefficientDefault;
    double               TargetSpecialThreatCoefficientDefault;
    double               TargetStrengthCoefficientDefault;
    double               TargetDistanceCoefficientDefault;
    double               EnemyHouseThreatBonus;
    double               TurboBoost;
    double               AttackInterval;
    double               AttackDelay;
    double               PowerEmergency;
    double               AirstripRatio;
    int32_t              AirstripLimit;
    double               HelipadRatio;
    int32_t              HelipadLimit;
    double               TeslaRatio;
    int32_t              TeslaLimit;
    double               AARatio;
    int32_t              AALimit;
    double               DefenseRatio;
    int32_t              DefenseLimit;
    double               WarRatio;
    int32_t              WarLimit;
    double               BarracksRatio;
    int32_t              BarracksLimit;
    int32_t              RefineryLimit;
    double               RefineryRatio;
    int32_t              BaseSizeAdd;
    int32_t              PowerSurplus;
    int32_t              InfantryReserve;
    int32_t              InfantryBaseMult;
    int32_t              SoloCrateMoney;
    int32_t              TreeStrength;
    UnitTypeClass*       UnitCrateType;
    double               PatrolScan;
    double               CloakDelay;
    double               GameSpeedBias;
    double               BaseBias;
    double               ExpSpread;
    int32_t              FireSupress;
    int32_t              MaxIQLevels;
    int32_t              SuperWeapons;
    int32_t              Production;
    int32_t              GuardArea;
    int32_t              RepairSell;
    int32_t              AutoCrush;
    int32_t              Scatter;
    int32_t              ContentScan;
    int32_t              Aircraft;
    int32_t              Harvester;
    int32_t              SellBack;
    int32_t              AIBaseSpacing;
    Powerup              SilverCrate;
    Powerup              WoodCrate;
    Powerup              WaterCrate;
    int32_t              CrateMinimum;
    int32_t              CrateMaximum;
    int32_t              Money;
    int32_t              MinMoney;
    int32_t              MaxMoney;
    int32_t              MoneyIncrement;
    int32_t              UnitCount;
    int32_t              MinUnitCount;
    int32_t              MaxUnitCount;
    int32_t              TechLevel;
    int32_t              GameSpeed;
    int32_t              AIPlayers;
    int32_t              Players;
    bool                 BridgeDestruction;
    bool                 ShadowGrow;
    bool                 Shroud;
    bool                 Bases;
    bool                 TiberiumGrows;
    bool                 Crates;
    bool                 CaptureTheFlag;
    bool                 HarvesterTruce;
    bool                 MultiEngineer;
    bool                 AlliesAllowed;
    bool                 ShortGame;
    bool                 FogOfWar;
    bool                 MCVRedeploys;
    bool                 SuperWeaponsAllowed;
    bool                 BuildOffAlly;
    bool                 AllyChangeAllowed;
    int32_t              DropZoneRadius;
    double               MessageDelay;
    double               SavourDelay;
    double               BaseDefenseDelay;
    int32_t              SuspendPriority;
    double               SuspendDelay;
    double               SurvivorRate;
    int32_t              AlliedSurvivorDivisor;
    int32_t              SovietSurvivorDivisor;
    int32_t              ThirdSurvivorDivisor;
    double               ReloadRate;
    double               AutocreateTime;
    double               BuildupTime;
    int32_t              HarvesterLoadRate;
    double               HarvesterDumpRate;
    int32_t              AtomDamage;
    DifficultyStruct     Easy;
    DifficultyStruct     Normal;
    DifficultyStruct     Difficult;
    uint32_t             align_1628[4];
    double               GrowthRate;
    double               ShroudRate;
    double               FogRate;
    double               IceGrowthRate;
    double               VeinGrowthRate;
    int32_t              IceSolidifyFrameTime;
    double               AmbientChangeRate;
    double               AmbientChangeStep;
    double               CrateRegen;
    double               TimerWarning;
    double               SpeakDelay;
    double               DamageDelay;
    int32_t              Gravity;
    int32_t              LeptonsPerSightIncrease;
    int32_t              Incoming;
    int32_t              MinDamage;
    int32_t              MaxDamage;
    int32_t              RepairStep;
    double               RepairPercent;
    int32_t              IRepairStep;
    double               RepairRate;
    double               URepairRate;
    double               IRepairRate;
    double               ConditionYellow;
    double               ConditionRed;
    double               IdleActionFrequency;
    int32_t              CloseEnough;
    int32_t              Stray;
    int32_t              RelaxedStray;
    int32_t              GuardModeStray;
    int32_t              Crush;
    int32_t              CrateRadius;
    int32_t              HomingScatter;
    int32_t              BallisticScatter;
    double               RefundPercent;
    int32_t              BridgeStrength;
    double               BuildSpeed;
    double               C4Delay;
    int32_t              CreditReserve;
    double               PathDelay;
    int32_t              BlockagePathDelay;
    double               MovieTime;
    int32_t              TiberiumShortScan;
    int32_t              TiberiumLongScan;
    int32_t              LightningDeferment;
    int32_t              LightningDamage;
    int32_t              LightningStormDuration;
    int32_t              LightningHitDelay;
    int32_t              LightningScatterDelay;
    int32_t              LightningCellSpread;
    int32_t              LightningSeparation;
    bool                 LightningPrintText;
    WarheadTypeClass*    LightningWarhead;
    int32_t              ForceShieldRadius;
    int32_t              ForceShieldDuration;
    int32_t              ForceShieldBlackoutDuration;
    int32_t              ForceShieldPlayFadeSoundTime;
    bool                 MutateExplosion;
    int32_t              CollapseChance;
    int32_t              WeedCapacity;
    float                ExtraUnitLight;
    float                ExtraInfantryLight;
    float                ExtraAircraftLight;
    bool                 Paranoid;
    bool                 CurleyShuffle;
    bool                 BlendedFog;
    bool                 CompEasyBonus;
    bool                 FineDiffControl;
    bool                 TiberiumExplosive;
    bool                 EnemyHealth;
    bool                 AllyReveal;
    bool                 SeparateAircraft;
    bool                 TreeTargeting;
    bool                 NamedCivilians;
    bool                 PlayerAutoCrush;
    bool                 PlayerReturnFire;
    bool                 PlayerScatter;
    bool                 RevealByHeight;
    bool                 AllowShroudedSubterraneanMoves;
    bool                 ShroudGrow;
    bool                 NodAIBuildsWalls;
    bool                 AIBuildsWalls;
    bool                 UseMinDefenseRule;
    float                EngineerCaptureLevel;
    float                TalkBubbleTime;
    int32_t              RadDurationMultiple;
    int32_t              RadApplicationDelay;
    int32_t              RadLevelMax;
    int32_t              RadLevelDelay;
    int32_t              RadLightDelay;
    double               RadLevelFactor;
    double               RadLightFactor;
    double               RadTintFactor;
    ColorStruct          RadColor;
    WarheadTypeClass*    RadSiteWarhead;
    int32_t              ElevationIncrement;
    double               ElevationIncrementBonus;
    double               ElevationBonusCap;
    bool                 AlliedWallTransparency;
    double               WallPenetratorThreshold;
    ColorStruct          LocalRadarColor;
    ColorStruct          LineTrailColorOverride;
    ColorStruct          ChronoBeamColor;
    ColorStruct          MagnaBeamColor;
    int32_t              OreTwinkleChance;
    AnimTypeClass*       OreTwinkle;
    ColorStruct          ColorAdd[0x10];
    int32_t              LaserTargetColor;
    int32_t              IronCurtainColor;
    int32_t              BerserkColor;
    int32_t              ForceShieldColor;
    float                DirectRockingCoefficient;
    float                FallBackCoefficient;

    // TODO: complete RulesClass members (many TypeList<> arrays, building lists, etc.)

protected:
    RulesClass() = default; // 0x665650
    ~RulesClass() = default; // 0x667A30
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Addition();  // 0x668BF0
    int LoadSpecialWeapons();  // 0x668FB0
    int ReadCountryList();  // 0x66CF70
    int LoadFromINI();  // 0x66D530
    int LoadCountries();  // 0x6722F0
    int ReadDataList();  // 0x672440
    int LoadBuildingTypes();  // 0x672660
    int ReadSideData();  // 0x672740
    int LoadAnimTypes();  // 0x6728B0
    int readColors();  // 0x672A00
    int ReadMultiplayerDefaults();  // 0x672AE0
    int LoadSpeedTypes();  // 0x674000
    int ReadIQSection();  // 0x674240
    int SaveLoad_Prefix(void* a1);  // 0x674730
    int SaveLoad_Prefix_0(int a1);  // 0x675210
    bool IsTypeBuildable(int a1);  // 0x721140
    int Reset();  // 0x74E6B0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* InitINIChain(int a1, int a2);  // 0x538b30 -- RulesClass::InitINIChain
    int readGeneralSection(int a1);  // 0x6614f0 -- RulesClass::readGeneralSection
    int ReadSidesList();  // 0x6725f0 -- RulesClass::ReadSidesList
    int ReadPowerupsSection();  // 0x673e80 -- RulesClass::ReadPowerupsSection
    void* GetProductionTimeMult(int a1);  // 0x5fb2e0 -- Rules::GetProductionTimeMult
    int ReadMiscINI();  // 0x6691e0 -- Rules::ReadMiscINI
    int ReadCombatINI();  // 0x66bbb0 -- Rules::ReadCombatINI
    void* CopyDataArray(int a1);  // 0x67a570 -- Rules::CopyDataArray
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
