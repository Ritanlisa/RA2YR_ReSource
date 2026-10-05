#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"
#include "core/utility_ext.hpp"  // G42.55 closure (Count)

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

    WeaponStruct() noexcept;

    // unmatched: no callgraph reference and no git history record
    bool operator==(const WeaponStruct& rhs) const;
    // unmatched: no callgraph reference and no git history record
    bool operator!=(const WeaponStruct& rhs) const;
};

class TechnoTypeClass : public ObjectTypeClass
{
public:
    // --- G22 DTOR write-map fields (11 TypeList embeds; binary offsets,
    //      layout debt accepted per 09-07 ruling; verify via member_lookup) ---
    unsigned char DestroyParticleSystems_Embed[28];  // 1940
    unsigned char DamageParticleSystems_Embed[28];   // 1912
    unsigned char DestroyAnim_Embed[28];             // 1864
    unsigned char Explosion_Embed[28];               // 1836
    unsigned char PrerequisiteOverride_Embed[28];    // 1620
    unsigned char Prerequisite_Embed[28];            // 1592
    unsigned char DebrisAnims_Embed[28];             // 1476
    unsigned char DieSound_Embed[28];                // 1296
    unsigned char MoveSound_Embed[28];               // 1268
    unsigned char VoiceFeedback_Embed[28];           // 1240
    unsigned char VoxelAnimList_Embed[28];           // 788
    unsigned char IntList_A_Embed[28];               // 816
    unsigned char BuildingTypeList_Embed[28];        // 1000
    unsigned char IntList_B_Embed[28];               // 1044
    unsigned char IntList_C_Embed[28];               // 1072
    unsigned char IntList_D_Embed[28];               // 1100
    unsigned char IntList_E_Embed[28];               // 1128
    unsigned char IntList_F_Embed[28];               // 1156
    unsigned char IntList_G_Embed[28];               // 1184
    unsigned char IntList_H_Embed[28];               // 1212
    void* VoxelAnimList_Items;      // 792
    int VoxelAnimList_Capacity;     // 796
    unsigned char VoxelAnimList_FlagByte; // 801
    void* IntList_A_Items;          // 820
    int IntList_A_Capacity;         // 824
    unsigned char IntList_A_FlagByte; // 829
    void* BuildingTypeList_Items;   // 1004
    int BuildingTypeList_Capacity;  // 1008
    unsigned char BuildingTypeList_FlagByte; // 1013
    void* IntList_B_Items;          // 1048
    int IntList_B_Capacity;         // 1052
    unsigned char IntList_B_FlagByte; // 1057
    void* IntList_C_Items;          // 1076
    int IntList_C_Capacity;         // 1080
    unsigned char IntList_C_FlagByte; // 1085
    void* IntList_D_Items;          // 1104
    int IntList_D_Capacity;         // 1108
    unsigned char IntList_D_FlagByte; // 1113
    void* IntList_E_Items;          // 1132
    int IntList_E_Capacity;         // 1136
    unsigned char IntList_E_FlagByte; // 1141
    void* IntList_F_Items;          // 1160
    int IntList_F_Capacity;         // 1164
    unsigned char IntList_F_FlagByte; // 1169
    void* IntList_G_Items;          // 1188
    int IntList_G_Capacity;         // 1192
    unsigned char IntList_G_FlagByte; // 1197
    void* IntList_H_Items;          // 1216
    int IntList_H_Capacity;         // 1220
    unsigned char IntList_H_FlagByte; // 1225
    void* VoiceFeedback_Items;      // 1244
    int VoiceFeedback_Capacity;     // 1248
    unsigned char VoiceFeedback_FlagByte; // 1253
    static constexpr auto MaxWeapons = 18;

    static DynamicVectorClass<TechnoTypeClass*>* Array;

    // design: static function, no direct binary match in IDA
     TechnoTypeClass* Find(const char* pID);
    // design: static function, no direct binary match in IDA
    static int FindIndex(const char* pID);

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override;

    virtual ~TechnoTypeClass() = default;  // 0x711AE0 (as DTOR)

    // wrapper: delegates to TechnoTypeClass::DTOR at 0x711AE0
    virtual bool onTypeLoaded();
    virtual bool CanAttackMove() const;
    // wrapper: delegates to TechnoTypeClass::CanAttackMove_IgnoreWeapon at 0x711E90
    virtual bool CanCreateHere(const CellStruct& mapCoords, HouseClass* pOwner) const;
    virtual int GetCost() const;
    // wrapper: delegates to TechnoClass::GetCostMultiplier at 0x708B40
    virtual int GetRepairStepCost() const;
    virtual int GetRepairStep() const;
    // unmatched: no callgraph reference and no git history record
    virtual int getRefund(HouseClass* pHouse, bool bUnk) const;
    // wrapper: delegates to HouseClass::GetRepairStepAmount at 0x459840
    virtual int GetFlightLevel() const;

    static TechnoTypeClass* GetByTypeAndIndex(AbstractType abs, int index);  // 0x48DCD0

    // unmatched: no callgraph reference and no git history record
    bool HasMultipleTurrets() const;

    // wrapper: delegates to TechnoTypeClass::GetByTypeAndIndex at 0x48DCD0
    CoordStruct* GetParticleSysOffset(CoordStruct* pBuffer) const;
    // wrapper: delegates to TechnoTypeClass::GetByTypeAndIndex at 0x48DCD0
    CoordStruct GetParticleSysOffset() const;

    // design: inline accessor, inlined at all call sites
    bool InOwners(DWORD bitHouseType) const;
    // unmatched: no callgraph reference and no git history record
    bool InRequiredHouses(DWORD bitHouseType) const;
    // unmatched: no callgraph reference and no git history record
    bool InForbiddenHouses(DWORD bitHouseType) const;

    // unmatched: no callgraph reference and no git history record
    WeaponStruct& GetWeapon(size_t index, bool elite);
    // unmatched: no callgraph reference and no git history record
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
    double Size;  // data: 0x87cba0
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    double Dispatch(int a1);  // 0x50bdf0 -- TechnoTypeClass::Dispatch
    double GetThreatMultiplier(int a1);  // 0x50beb0 -- TechnoTypeClass::GetThreatMultiplier
    void* LoadBase(int a1);  // 0x6f06e0 -- TechnoTypeClass::LoadBase
    void* ReadINI(int a1, int a2);  // 0x710af0 -- TechnoTypeClass::ReadINI
    bool CanAttackMove_IgnoreWeapon();  // 0x711e90 -- TechnoTypeClass::CanAttackMove_IgnoreWeapon
    double ComputeBuildTime();  // 0x711ee0 -- TechnoTypeClass::ComputeBuildTime
    int ComputeValueSimple(int a1);  // 0x711f00 -- TechnoTypeClass::ComputeValueSimple
    int ComputeValue(int a1, int a2);  // 0x711f60 -- TechnoTypeClass::ComputeValue
    void* ddtor(int a1);  // 0x7179a0 -- TechnoTypeClass::ddtor
    int SaveLoadDataArray(int a1);  // 0x717b20 -- TechnoTypeClass::SaveLoadDataArray
    void* Constructor_0(int a1);  // 0x717bc0 -- TechnoTypeClass::Constructor_0
    void* Constructor_1(int a1);  // 0x717be0 -- TechnoTypeClass::Constructor_1
    int RemoveItem(int a1);  // 0x717db0 -- TechnoTypeClass::RemoveItem
    // 0x721290 declaration moved to GameSettings (game_systems.hpp):
    // receiver is the settings global @0xA83D10, not a TechnoTypeClass.
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    static int SaveLoad_Prefix(int a1, int a2);  // 0x7162f0
    int SaveLoad_Prefix_0(int a1, int a2, int a3, int a4, int a5);  // 0x716dc0
    // === FUNCS-MOVE (END) ===
};

// G22: type registries (DTOR self-deregistration; FindItemIndex = slot16)
struct AbstractRegistry_Shim
{
    void* VfptrUnused;
    void** Items;
    int Capacity;
    unsigned char FlagsByte[4];
    int Count;
    int CapacityIncrement;
    int FindItemIndex(void** item);
};
extern AbstractRegistry_Shim g_AbstractClassArray;  // data: 0xB0F670

struct TechnoTypesVector_Shim
{
    void* VfptrUnused;
    TechnoTypeClass** Items;
    int Capacity;
    unsigned char FlagsByte[4];
    int Count;
    int CapacityIncrement;
    int FindItemIndex(TechnoTypeClass** item);
    unsigned int u32_DFC;  // +0xDFC (ml flat supply)
};
extern TechnoTypesVector_Shim g_TechnoTypes;  // data: 0xA8EB00

} // namespace gamemd
