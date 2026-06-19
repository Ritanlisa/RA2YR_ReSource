#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AircraftTypeClass;
class AnimTypeClass;
class BuildingTypeClass;
class InfantryTypeClass;
class ParticleSystemTypeClass;
class UnitTypeClass;
class VoxelAnimTypeClass;
class WeaponTypeClass;

template <typename T>
class DynamicVectorClass;

struct AbilitiesStruct
{
    bool FASTER;
    bool STRONGER;
    bool FIREPOWER;
    bool SCATTER;
    bool ROF;
    bool SIGHT;
    bool CLOAK;
    bool TIBERIUM_PROOF;
    bool VEIN_PROOF;
    bool SELF_HEAL;
    bool EXPLODES;
    bool RADAR_INVISIBLE;
    bool SENSORS;
    bool FEARLESS;
    bool C4;
    bool TIBERIUM_HEAL;
    bool GUARD_AREA;
    bool CRUSHER;
};

struct TurretControl
{
    int Travel;
    int CompressFrames;
    int RecoverFrames;
    int HoldFrames;
};

struct WeaponStruct
{
    WeaponTypeClass* WeaponType;
    CoordStruct FLH;
    int BarrelLength;
    int BarrelThickness;
    bool TurretLocked;

    WeaponStruct() noexcept
        : WeaponType(nullptr)
        , FLH()
        , BarrelLength(0)
        , BarrelThickness(0)
        , TurretLocked(false)
    {}

    bool operator==(const WeaponStruct& rhs) const;
    bool operator!=(const WeaponStruct& rhs) const;
};

class TechnoTypeClass : public ObjectTypeClass
{
public:
    static constexpr auto MaxWeapons = 18;

    static DynamicVectorClass<TechnoTypeClass*>* Array;

    static TechnoTypeClass* Find(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall Load(IStream* pStm) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override;

    virtual ~TechnoTypeClass() = default;  // 0x711AE0 (as DTOR)

    virtual bool onTypeLoaded();
    virtual bool CanAttackMove() const;
    virtual bool CanCreateHere(const CellStruct& mapCoords, HouseClass* pOwner) const;
    virtual int GetCost() const;  // 0x708B40
    virtual int GetRepairStepCost() const;
    virtual int GetRepairStep() const;  // 0x459840
    virtual int getRefund(HouseClass* pHouse, bool bUnk) const;
    virtual int GetFlightLevel() const;

    static TechnoTypeClass* GetByTypeAndIndex(AbstractType abs, int index);  // 0x48DCD0

    bool HasMultipleTurrets() const;

    CoordStruct* GetParticleSysOffset(CoordStruct* pBuffer) const;
    CoordStruct GetParticleSysOffset() const;

    bool InOwners(DWORD bitHouseType) const { return (this->GetOwners() & bitHouseType) != 0; }
    bool InRequiredHouses(DWORD bitHouseType) const;
    bool InForbiddenHouses(DWORD bitHouseType) const;

    WeaponStruct& GetWeapon(size_t index, bool elite);
    const WeaponStruct& GetWeapon(size_t index, bool elite) const;

    TechnoTypeClass(const char* id, SpeedType speedtype) noexcept;  // 0x711840 (as Construct)

protected:
    TechnoTypeClass(noinit_t) noexcept;

public:
    int WalkRate;
    int IdleRate;
    AbilitiesStruct VeteranAbilities;
    AbilitiesStruct EliteAbilities;
    double SpecialThreatValue;
    double MyEffectivenessCoefficient;
    double TargetEffectivenessCoefficient;
    double TargetSpecialThreatCoefficient;
    double TargetStrengthCoefficient;
    double TargetDistanceCoefficient;
    double ThreatAvoidanceCoefficient;
    int SlowdownDistance;
    DWORD align_2FC;
    double TechnoTypeClass_field_double_300;
    double AccelerationFactor;
    int CloakingSpeed;
    DynamicVectorClass<VoxelAnimTypeClass*>* DebrisTypes;
    DynamicVectorClass<int>* DebrisMaximums;
    _GUID Locomotor;
    DWORD align_35C;
    double TechnoTypeClass_field_double_360;
    double TechnoTypeClass_field_double_368;
    double Weight;
    double PhysicalSize;
    double Size;
    double SizeLimit;
    bool HoverAttack;
    int VHPScan;
    int TechnoTypeClass_field_int_398;
    DWORD align_39C;
    double RollAngle;
    double PitchSpeed;
    double PitchAngle;
    int BuildLimit;
    Category Category;
    DWORD TechnoTypeClass_field_3C0;
    DWORD align_3C4;
    double DeployTime;
    int FireAngle;
    PipScale PipScale;
    bool PipsDrawForAll;
    int LeptonMindControlOffset;
    int PixelSelectionBracketDelta;
    int PipWrap;
    DynamicVectorClass<BuildingTypeClass*>* Dock;
    BuildingTypeClass* DeploysInto;
    UnitTypeClass* UndeploysInto;
    UnitTypeClass* PowersUnit;
    bool PoweredUnit;
    DynamicVectorClass<int>* VoiceSelect;
    DynamicVectorClass<int>* VoiceSelectEnslaved;
    DynamicVectorClass<int>* VoiceSelectDeactivated;
    DynamicVectorClass<int>* VoiceMove;
    DynamicVectorClass<int>* VoiceAttack;
    DynamicVectorClass<int>* VoiceSpecialAttack;
    DynamicVectorClass<int>* VoiceDie;
    DynamicVectorClass<int>* VoiceFeedback;
    DynamicVectorClass<int>* MoveSound;
    DynamicVectorClass<int>* DieSound;
    int AuxSound1;
    int AuxSound2;
    int CreateSound;
    int DamageSound;
    int ImpactWaterSound;
    int ImpactLandSound;
    int CrashingSound;
    int SinkingSound;
    int VoiceFalling;
    int VoiceCrashing;
    int VoiceSinking;
    int VoiceEnter;
    int VoiceCapture;
    int TurretRotateSound;
    int EnterTransportSound;
    int LeaveTransportSound;
    int DeploySound;
    int UndeploySound;
    int ChronoInSound;
    int ChronoOutSound;
    int VoiceHarvest;
    int VoicePrimaryWeaponAttack;
    int VoicePrimaryEliteWeaponAttack;
    int VoiceSecondaryWeaponAttack;
    int VoiceSecondaryEliteWeaponAttack;
    int VoiceDeploy;
    int VoiceUndeploy;
    int EnterGrinderSound;
    int LeaveGrinderSound;
    int EnterBioReactorSound;
    int LeaveBioReactorSound;
    int ActivateSound;
    int DeactivateSound;
    int MindClearedSound;
    MovementZone MovementZone;
    int GuardRange;
    int MinDebris;
    int MaxDebris;
    DynamicVectorClass<AnimTypeClass*>* DebrisAnims;
    int Passengers;
    bool OpenTopped;
    int Sight;
    bool ResourceGatherer;
    bool ResourceDestination;
    bool RevealToAll;
    bool Drainable;
    int SensorsSight;
    int DetectDisguiseRange;
    int BombSight;
    int LeadershipRating;
    int NavalTargeting;
    int LandTargeting;
    float BuildTimeMultiplier;
    int MindControlRingOffset;
    int Cost;
    int Soylent;
    int FlightLevel;
    int AirstrikeTeam;
    int EliteAirstrikeTeam;
    AircraftTypeClass* AirstrikeTeamType;
    AircraftTypeClass* EliteAirstrikeTeamType;
    int AirstrikeRechargeTime;
    int EliteAirstrikeRechargeTime;
    int TechLevel;
    DynamicVectorClass<int>* Prerequisite;
    DynamicVectorClass<int>* PrerequisiteOverride;
    int ThreatPosed;
    int Points;
    int Speed;
    SpeedType SpeedType;
    int InitialAmmo;
    int Ammo;
    int IFVMode;
    int AirRangeBonus;
    bool BerserkFriendly;
    bool SprayAttack;
    bool Pushy;
    bool Natural;
    bool Unnatural;
    bool CloseRange;
    int Reload;
    int EmptyReload;
    int ReloadIncrement;
    int RadialFireSegments;
    int DeployFireWeapon;
    bool DeployFire;
    bool DeployToLand;
    bool MobileFire;
    bool OpportunityFire;
    bool DistributedFire;
    bool DamageReducesReadiness;
    int ReadinessReductionMultiplier;
    UnitTypeClass* UnloadingClass;
    AnimTypeClass* DeployingAnim;
    bool AttackFriendlies;
    bool AttackCursorOnFriendlies;
    int UndeployDelay;
    bool PreventAttackMove;
    DWORD OwnerFlags;
    int AIBasePlanningSide;
    bool StupidHunt;
    bool AllowedToStartInMultiplayer;
    char CameoFile[0x19];
    uint8_t align_6EF;
    SHPStruct* Cameo;
    bool CameoAllocated;
    char AltCameoFile[0x19];
    uint8_t align_70E[2];
    SHPStruct* AltCameo;
    bool AltCameoAllocated;
    int RotCount;
    int ROT;
    int TurretOffset;
    bool CanBeHidden;
    int Points2;
    DynamicVectorClass<AnimTypeClass*>* Explosion;
    DynamicVectorClass<AnimTypeClass*>* DestroyAnim;
    ParticleSystemTypeClass* NaturalParticleSystem;
    CoordStruct NaturalParticleSystemLocation;
    ParticleSystemTypeClass* RefinerySmokeParticleSystem;
    DynamicVectorClass<ParticleSystemTypeClass*>* DamageParticleSystems;
    DynamicVectorClass<ParticleSystemTypeClass*>* DestroyParticleSystems;
    CoordStruct DamageSmokeOffset;
    bool DamSmkOffScrnRel;
    CoordStruct DestroySmokeOffset;
    CoordStruct RefinerySmokeOffsetOne;
    CoordStruct RefinerySmokeOffsetTwo;
    CoordStruct RefinerySmokeOffsetThree;
    CoordStruct RefinerySmokeOffsetFour;
    int ShadowIndex;
    int Storage;
    bool TurretNotExportedOnGround;
    bool Gunner;
    bool HasTurretTooltips;
    int TurretCount;
    int WeaponCount;
    bool IsChargeTurret;
    int TurretWeapon[0x21];
    WeaponStruct Weapon[MaxWeapons];
    bool ClearAllWeapons;
    WeaponStruct EliteWeapon[MaxWeapons];
    bool TypeImmune;
    bool MoveToShroud;
    bool Trainable;
    bool DamageSparks;
    bool TargetLaser;
    bool ImmuneToVeins;
    bool TiberiumHeal;
    bool CloakStop;
    bool IsTrain;
    bool IsDropship;
    bool ToProtect;
    bool Disableable;
    bool Unbuildable;
    bool DoubleOwned;
    bool Invisible;
    bool RadarVisible;
    bool HasPrimary;
    bool Sensors;
    bool Nominal;
    bool DontScore;
    bool DamageSelf;
    bool Turret;
    bool TurretRecoil;
    TurretControl TurretAnimData;
    bool TechnoTypeClass_field_bool_CB4;
    TurretControl BarrelAnimData;
    bool TechnoTypeClass_field_bool_CC8;
    uint8_t align_CC9;
    uint8_t align_CCA;
    uint8_t align_CCB;
    bool Repairable;
    bool Crewed;
    bool Naval;
    bool Remapable;
    bool Cloakable;
    bool GapGenerator;
    char GapRadiusInCells;
    char SuperGapRadiusInCells;
    bool Teleporter;
    bool IsGattling;
    int WeaponStages;
    int WeaponStage[6];
    int EliteStage[6];
    int RateUp;
    int RateDown;
    bool SelfHealing;
    bool Explodes;
    WeaponTypeClass* DeathWeapon;
    float DeathWeaponDamageModifier;
    bool NoAutoFire;
    bool TurretSpins;
    bool TiltCrashJumpjet;
    bool Normalized;
    bool ManualReload;
    bool VisibleLoad;
    bool LightningRod;
    bool HunterSeeker;
    bool Crusher;
    bool OmniCrusher;
    bool OmniCrushResistant;
    bool TiltsWhenCrushes;
    bool IsSubterranean;
    bool AutoCrush;
    bool Bunkerable;
    bool CanDisguise;
    bool PermaDisguise;
    bool DetectDisguise;
    bool DisguiseWhenStill;
    bool CanApproachTarget;
    bool CanRecalcApproachTarget;
    bool ImmuneToPsionics;
    bool ImmuneToPsionicWeapons;
    bool ImmuneToRadiation;
    bool Parasiteable;
    bool DefaultToGuardArea;
    bool Warpable;
    bool ImmuneToPoison;
    bool ReselectIfLimboed;
    bool RejoinTeamIfLimboed;
    bool Slaved;
    InfantryTypeClass* Enslaves;
    int SlavesNumber;
    int SlaveRegenRate;
    int SlaveReloadRate;
    int OpenTransportWeapon;
    bool Spawned;
    AircraftTypeClass* Spawns;
    int SpawnsNumber;
    int SpawnRegenRate;
    int SpawnReloadRate;
    bool MissileSpawn;
    bool Underwater;
    bool BalloonHover;
    int SuppressionThreshold;
    int JumpjetTurnRate;
    int JumpjetSpeed;
    float JumpjetClimb;
    float JumpjetCrash;
    int JumpjetHeight;
    float JumpjetAccel;
    float JumpjetWobbles;
    bool JumpjetNoWobbles;
    int JumpjetDeviation;
    bool JumpJet;
    bool Crashable;
    bool ConsideredAircraft;
    bool Organic;
    bool NoShadow;
    bool CanPassiveAquire;
    bool CanRetaliate;
    bool RequiresStolenThirdTech;
    bool RequiresStolenSovietTech;
    bool RequiresStolenAlliedTech;
    DWORD RequiredHouses;
    DWORD ForbiddenHouses;
    DWORD SecretHouses;
    bool UseBuffer;
    CoordStruct SecondSpawnOffset;
    bool IsSelectableCombatant;
    bool Accelerates;
    bool DisableVoxelCache;
    bool DisableShadowCache;
    int ZFudgeCliff;
    int ZFudgeColumn;
    int ZFudgeTunnel;
    int ZFudgeBridge;
    char PaletteFile[0x20];
    void* Palette;
    DWORD align_DF4;
};

} // namespace gamemd
