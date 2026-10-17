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
} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class AbstractClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ::ra2::game::AbstractClass;
#endif
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

// CSP: DifficultyStruct matched via T3
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

// CSP: RulesClass matched via T1
class RulesClass
{
public:
    static RulesClass* Instance;

    void Init(CCINIClass* pINI);
    int ReadFile(CCINIClass* pINI);
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
    int32_t              q70C;  // 0x70C (til 缺口; 0x447076/0x4470c3 mov edi,[eax+70Ch])
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
    bool                 BridgeDestruction;  // data: 0xa8b260
    bool                 ShadowGrow;
    bool                 Shroud;
    bool                 Bases;  // data: 0xa8b258
    bool                 TiberiumGrows;
    bool                 Crates;  // data: 0xa8b261
    bool                 CaptureTheFlag;
    bool                 HarvesterTruce;  // data: 0xa8b31d
    bool                 MultiEngineer;  // data: 0xa8b26c
    bool                 AlliesAllowed;  // data: 0xa8b31c
    bool                 ShortGame;  // data: 0xa8b262
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
    int32_t              CrewCount;       // offset ~0xF70 area, used by BuildingClass::GetCrew

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
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    double GetFiringDistance();  // 0x48acf0
    int LoadTypeList(int a1, int a2, int a3, int a4, int a5);  // 0x67bdd0
    // === FUNCS-MOVE (END) ===
    unsigned int u32_4E0;  // +0x4E0 (ml flat supply)
    unsigned int u32_514;  // +0x514 (ml flat supply)

    unsigned char AbstractClass_2A4[4];  /* AbstractClass */  // X10 supply (member_lookup)
    unsigned char AbstractClass_2C0[4];  /* AbstractClass */  // X10 supply (member_lookup)
    unsigned char AbstractClass_2DC[4];  /* AbstractClass */  // X10 supply (member_lookup)
    unsigned int Aircraft_d;  // X10 supply (csp_canon_members)
    unsigned int AutoCrush_d;  // X10 supply (csp_canon_members)
    unsigned int ContentScan_d;  // X10 supply (csp_canon_members)
    unsigned char DynamicVector_1174[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_1194[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_1304[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_1320[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_133C[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_1358[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_1374[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_13C8[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_358[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_374[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_390[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_3AC[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_3C8[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_3E4[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_458[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_474[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_734[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char DynamicVector_9A4[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char DynamicVector_A0C[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char DynamicVector_B78[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char DynamicVector_C58[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_C90[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_CC8[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_D38[4];  /* RulesClass */  // X10 supply (member_lookup)
    unsigned char DynamicVector_E4C[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_E68[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_E84[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char DynamicVector_EA0[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned int GuardArea_d;  // X10 supply (csp_canon_members)
    unsigned int Harvester_d;  // X10 supply (csp_canon_members)
    unsigned int MaxIQLevels_d;  // X10 supply (csp_canon_members)
    unsigned int Production_d;  // X10 supply (csp_canon_members)
    int32_t RadLevelMax_d;  // X10 supply (csp_canon_members)
    unsigned int RepairSell_d;  // X10 supply (csp_canon_members)
    unsigned char RulesClass_FF8[4];  /* RulesClass */  // X10 supply (member_lookup)
    unsigned char SaveLoad_D1C[4];  /* RulesClass */  // X10 supply (member_lookup)
    unsigned int SellBack_d;  // X10 supply (csp_canon_members)
    unsigned char Stream_109C[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char Stream_2A0[4];  /* VectorClass */  // X10 supply (member_lookup)
    unsigned char Stream_2BC[4];  /* VectorClass */  // X10 supply (member_lookup)
    unsigned char Stream_2D8[4];  /* VectorClass */  // X10 supply (member_lookup)
    unsigned int SuperWeapons_d;  // X10 supply (csp_canon_members)
    unsigned char TypeList_1158[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_11B0[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_11CC[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_11E8[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_1204[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_1220[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_123C[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_1258[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_1274[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_1290[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_12AC[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_12C8[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_12E4[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_1390[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_13AC[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_13F0[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_D80[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_D9C[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_DB8[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_DD4[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_E10[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_E2C[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_EC4[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char TypeList_EE8[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char TypeList_F04[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char TypeList_F20[4];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned char VectorClass_C74[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char VectorClass_CAC[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char VectorClass_CE4[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned char VectorClass_D00[4];  /* RulesClass */  // X10 supply (member_lookup)
    unsigned char __pad_0A0;  // X10 supply (csp_canon_members)
    unsigned char __pad_144C;  // X10 supply (csp_canon_members)
    unsigned char __pad_1460;  // X10 supply (csp_canon_members)
    unsigned char __pad_43C;  // X10 supply (csp_canon_members)
    unsigned char __pad_C3C;  // X10 supply (csp_canon_members)
    unsigned int q0AC;  // X10 supply (member_lookup)
    unsigned int q0B4;  // X10 supply (member_lookup)
    unsigned char q0B8;  // X10 supply (member_lookup)
    unsigned char q1008;  // X10 supply (member_lookup)
    int q1024;  // X10 supply (member_lookup)
    int q1028;  // X10 supply (member_lookup)
    unsigned char q1030;  // X10 supply (member_lookup)
    int q1110;  // X10 supply (member_lookup)
    void * q1120;  // X10 supply (member_lookup)
    int q1124;  // X10 supply (member_lookup)
    int q1128;  // X10 supply (member_lookup)
    int q1138;  // X10 supply (member_lookup)
    void * q1148;  // X10 supply (member_lookup)
    unsigned int q115C;  // X10 supply (member_lookup)
    unsigned int q1168;  // X10 supply (member_lookup)
    unsigned int q1198;  // X10 supply (member_lookup)
    unsigned int q11A4;  // X10 supply (member_lookup)
    unsigned int q11B4;  // X10 supply (member_lookup)
    unsigned int q11C0;  // X10 supply (member_lookup)
    unsigned int q11D0;  // X10 supply (member_lookup)
    unsigned int q11DC;  // X10 supply (member_lookup)
    unsigned int q11EC;  // X10 supply (member_lookup)
    unsigned int q11F8;  // X10 supply (member_lookup)
    unsigned int q1208;  // X10 supply (member_lookup)
    unsigned int q1214;  // X10 supply (member_lookup)
    unsigned int q1224;  // X10 supply (member_lookup)
    unsigned int q1230;  // X10 supply (member_lookup)
    unsigned int q1240;  // X10 supply (member_lookup)
    unsigned int q124C;  // X10 supply (member_lookup)
    unsigned int q125C;  // X10 supply (member_lookup)
    unsigned int q1268;  // X10 supply (member_lookup)
    unsigned int q1278;  // X10 supply (member_lookup)
    unsigned int q1284;  // X10 supply (member_lookup)
    unsigned int q1294;  // X10 supply (member_lookup)
    unsigned int q12A0;  // X10 supply (member_lookup)
    unsigned int q12B0;  // X10 supply (member_lookup)
    unsigned int q12BC;  // X10 supply (member_lookup)
    unsigned int q12CC;  // X10 supply (member_lookup)
    unsigned int q12D8;  // X10 supply (member_lookup)
    unsigned int q12E8;  // X10 supply (member_lookup)
    unsigned int q12F4;  // X10 supply (member_lookup)
    unsigned int q1394;  // X10 supply (member_lookup)
    unsigned int q13A0;  // X10 supply (member_lookup)
    unsigned int q13B0;  // X10 supply (member_lookup)
    unsigned char q13BC[620];  /* char[620] */  // X10 supply (member_lookup)
    unsigned int q13F4;  // X10 supply (member_lookup)
    unsigned int q1400;  // X10 supply (member_lookup)
    unsigned int q1510;  // X10 supply (member_lookup)
    unsigned int q1514;  // X10 supply (member_lookup)
    unsigned char q1874;  // X10 supply (member_lookup)
    int q2704;  // X10 supply (member_lookup)
    unsigned char q298[4];  /* Color */  // X10 supply (member_lookup)
    unsigned char q29C;  // X10 supply (member_lookup)
    unsigned char q2CC[4];  /* IUnknown */  // X10 supply (member_lookup)
    unsigned char q2E8[4];  /* AnimTypeClass */  // X10 supply (member_lookup)
    unsigned char q2F4[4];  /* HouseClass */  // X10 supply (member_lookup)
    unsigned char q2F8;  // X10 supply (member_lookup)
    int q300;  // X10 supply (member_lookup)
    int q320;  // X10 supply (member_lookup)
    int q324;  // X10 supply (member_lookup)
    int q328;  // X10 supply (member_lookup)
    void * q338;  // X10 supply (member_lookup)
    int q340;  // X10 supply (member_lookup)
    unsigned char q344[4];  /* Coord */  // X10 supply (member_lookup)
    int q348;  // X10 supply (member_lookup)
    int q400;  // X10 supply (member_lookup)
    int q548;  // X10 supply (member_lookup)
    unsigned char qC78;  // X10 supply (member_lookup)
    unsigned char qCB0;  // X10 supply (member_lookup)
    unsigned char qCE8;  // X10 supply (member_lookup)
    unsigned char qD04;  // X10 supply (member_lookup)
    unsigned char qD20;  // X10 supply (member_lookup)
    unsigned char qD3C;  // X10 supply (member_lookup)
    unsigned int qD84;  // X10 supply (member_lookup)
    unsigned int qD90;  // X10 supply (member_lookup)
    unsigned int qDA0;  // X10 supply (member_lookup)
    unsigned int qDAC;  // X10 supply (member_lookup)
    unsigned int qDBC;  // X10 supply (member_lookup)
    unsigned int qDC8;  // X10 supply (member_lookup)
    unsigned char qDCC[8];  /* TypeList */  // X10 supply (member_lookup)
    unsigned int qDD8;  // X10 supply (member_lookup)
    unsigned int qDE4;  // X10 supply (member_lookup)
    unsigned int qE14;  // X10 supply (member_lookup)
    unsigned int qE20;  // X10 supply (member_lookup)
    unsigned int qE30;  // X10 supply (member_lookup)
    unsigned int qE3C;  // X10 supply (member_lookup)
    unsigned char qE6C[24];  /* DynamicVector */  // X10 supply (member_lookup)
    unsigned int qEC8;  // X10 supply (member_lookup)
    unsigned int qED4;  // X10 supply (member_lookup)
    unsigned int qEEC;  // X10 supply (member_lookup)
    unsigned int qEF8;  // X10 supply (member_lookup)
    unsigned int qF08;  // X10 supply (member_lookup)
    unsigned int qF14;  // X10 supply (member_lookup)
    unsigned int qF24;  // X10 supply (member_lookup)
    unsigned int qF30;  // X10 supply (member_lookup)
    unsigned char qFFC[960];  /* TypeList */  // X10 supply (member_lookup)
    int u32_1018;  // X10 supply (member_lookup)
    int u32_101C;  // X10 supply (member_lookup)
    int u32_1020;  // X10 supply (member_lookup)
    int u32_102C;  // X10 supply (member_lookup)
    int u32_1034;  // X10 supply (member_lookup)
    int u32_1038;  // X10 supply (member_lookup)
    int u32_10A0;  // X10 supply (member_lookup)
    int u32_10A8;  // X10 supply (member_lookup)
    int u32_10B0;  // X10 supply (member_lookup)
    uint32_t u32_10B4;  // X10 supply (member_lookup)
    int u32_10B8;  // X10 supply (member_lookup)
    int u32_10BC;  // X10 supply (member_lookup)
    int u32_10C8;  // X10 supply (member_lookup)
    int u32_10CC;  // X10 supply (member_lookup)
    int u32_10D0;  // X10 supply (member_lookup)
    int u32_10D8;  // X10 supply (member_lookup)
    int u32_10DC;  // X10 supply (member_lookup)
    float u32_10E8;  // X10 supply (member_lookup)
    uint32_t u32_10EC;  // X10 supply (member_lookup)
    int u32_10F8;  // X10 supply (member_lookup)
    uint32_t u32_10FC;  // X10 supply (member_lookup)
    int u32_1100;  // X10 supply (member_lookup)
    float u32_1108;  // X10 supply (member_lookup)
    uint32_t u32_110C;  // X10 supply (member_lookup)
    int u32_1118;  // X10 supply (member_lookup)
    int u32_111C;  // X10 supply (member_lookup)
    int u32_112C;  // X10 supply (member_lookup)
    int u32_113C;  // X10 supply (member_lookup)
    uint32_t u32_1150;  // X10 supply (member_lookup)
    unsigned int u32_147C;  // X10 supply (member_lookup)
    unsigned int u32_14D0;  // X10 supply (member_lookup)
    int u32_294;  // X10 supply (member_lookup)
    int u32_2B0;  // X10 supply (member_lookup)
    int u32_2FC;  // X10 supply (member_lookup)
    int u32_31C;  // X10 supply (member_lookup)
    int u32_32C;  // X10 supply (member_lookup)
    int u32_330;  // X10 supply (member_lookup)
    int u32_334;  // X10 supply (member_lookup)
    int u32_33C;  // X10 supply (member_lookup)
    int u32_34C;  // X10 supply (member_lookup)
    int u32_350;  // X10 supply (member_lookup)
    int u32_354;  // X10 supply (member_lookup)
    int u32_498;  // X10 supply (member_lookup)
    int u32_A4;  // X10 supply (member_lookup)
    int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    uint32_t u32_C40;  // X10 supply (member_lookup)
    int u32_C4C;  // X10 supply (member_lookup)
    int u32_C84;  // X10 supply (member_lookup)
    int u32_CBC;  // X10 supply (member_lookup)
    int u32_CF4;  // X10 supply (member_lookup)
    int u32_D10;  // X10 supply (member_lookup)
    int u32_D2C;  // X10 supply (member_lookup)
    int u32_D48;  // X10 supply (member_lookup)
    int u32_D58;  // X10 supply (member_lookup)
    int u32_D5C;  // X10 supply (member_lookup)
    int u32_D60;  // X10 supply (member_lookup)
    unsigned int u32_F6C;  // X10 supply (member_lookup)
    int u32_F70;  // X10 supply (member_lookup)
    int u32_F74;  // X10 supply (member_lookup)
    int u32_F78;  // X10 supply (member_lookup)
    int u32_F7C;  // X10 supply (member_lookup)
    int u32_F80;  // X10 supply (member_lookup)
    int u32_F84;  // X10 supply (member_lookup)
    int u32_F88;  // X10 supply (member_lookup)
    int u32_F90;  // X10 supply (member_lookup)
    int u32_F94;  // X10 supply (member_lookup)
    int u32_F98;  // X10 supply (member_lookup)
    int u32_F9C;  // X10 supply (member_lookup)
    int u32_FA0;  // X10 supply (member_lookup)
    int u32_FA4;  // X10 supply (member_lookup)
    int u32_FA8;  // X10 supply (member_lookup)
    int u32_FAC;  // X10 supply (member_lookup)
    int u32_FB0;  // X10 supply (member_lookup)
    int u32_FB4;  // X10 supply (member_lookup)
    int u32_FB8;  // X10 supply (member_lookup)
    int u32_FBC;  // X10 supply (member_lookup)
    int u32_FC8;  // X10 supply (member_lookup)
    int u32_FDC;  // X10 supply (member_lookup)
    int u32_FF0;  // X10 supply (member_lookup)
    int u32_FF4;  // X10 supply (member_lookup)
    unsigned char u8_16BA;  // X10 supply (member_lookup)


    int q418;  // 0x418 [X55 W3 supply (render vocab)]
    int q428;  // 0x428 [X55 W3 supply (render vocab)]
    int q430;  // 0x430 [X55 W3 supply (render vocab)]
    unsigned int q41C;  // 0x41C [X55 W3 supply (render vocab)]
    unsigned int q42C;  // 0x42C [X55 W3 supply (render vocab)]
    int q434;  // 0x434 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
