#pragma once

#include "radio.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"

namespace ra2 {
namespace game {

using ::gamemd::DynamicVectorClass;
using ::gamemd::ProgressTimer;

enum class CloakState : int;
enum class FireError : int;
enum class Rank : int;
enum class TargetFlags : unsigned int;
enum class ZGradient : int;
enum class Ability : int;
enum class AIDifficulty : unsigned int;
enum class NetworkEvents : unsigned char;
struct WeaponStruct;
class AirstrikeClass;
class AnimClass;
class BulletClass;
class BuildingClass;
class CaptureManagerClass;
class CellClass;
class FootClass;
class HouseClass;
class InfantryTypeClass;
class LaserDrawClass;
class ObjectTypeClass;
class ParticleSystemClass;
class PlanningTokenClass;
class RadBeam;
class SlaveManagerClass;
class SpawnManagerClass;
class TeamClass;
class TemporalClass;
class WaveClass;

struct FlashData {
    int32_t DurationRemaining;
    bool    FlashingNow;
    uint8_t padding[3];
};

class PassengersClass {
public:
    int32_t     NumPassengers;
    FootClass*  FirstPassenger;
};

struct VeterancyStruct {
    float Veterancy;
};

struct TurretControl {
    uint32_t data[4];
};

struct RecoilData {
    TurretControl   Turret;
    float           TravelPerFrame;
    float           TravelSoFar;
    uint32_t        State;
    int32_t         TravelFramesLeft;
};

struct TransitionTimer {
    uint32_t data[3];
};

template <typename T>
struct IndexBitfield {
    T* Items;
};

struct OwnedTiberiumStruct {
    float Amount1;
    float Amount2;
    float Amount3;
    float Amount4;
};

class TechnoClass : public RadioClass {
public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x1);

    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x4158E0
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override; // IDA: NOT_FOUND

    virtual ~TechnoClass() = default;  // 0x6F4500

    virtual bool isUnitfactory() const; // IDA: NOT_FOUND
    virtual bool isCloakable() const; // IDA: NOT_FOUND
    virtual bool canScatter() const; // IDA: NOT_FOUND
    virtual bool belongsToATeam() const; // IDA: NOT_FOUND
    virtual bool shouldSelfHealOneStep() const;  // 0x70BE80
    virtual bool isVoxel() const; // IDA: NOT_FOUND
    virtual bool canSelfRepair();  // 0x70FB50
    virtual bool shouldBeCloaked() const;  // 0x6FBDC0
    virtual bool shouldNotBeCloaked() const;  // 0x6FBC90
    virtual DirStruct* getFacing(DirStruct* buffer) const; // IDA: NOT_FOUND
    virtual bool isArmed() const; // IDA: NOT_FOUND
    virtual void onSpawnComplete() const; // IDA: NOT_FOUND
    virtual double getStoragePercentage() const; // IDA: NOT_FOUND
    virtual int getPipFillLevel() const; // IDA: NOT_FOUND
    virtual int getRefund() const; // IDA: NOT_FOUND
    virtual int getThreatValue() const;  // 0x4DED70
    virtual bool canBeAttacked(uint32_t a); // IDA: NOT_FOUND
    virtual uint32_t getSpecialValue(uint32_t a, uint32_t b);  // 0x55AD10
    virtual bool canCrush(uint32_t a);  // 0x7438F0
    virtual int getCrewCount() const;  // 0x6F3950
    virtual int getAntiAirValue() const; // IDA: NOT_FOUND
    virtual int getAntiArmorValue() const; // IDA: NOT_FOUND
    virtual int getAntiInfantryValue() const; // IDA: NOT_FOUND
    virtual void gotHijacked(); // IDA: NOT_FOUND
    virtual int selectNavalTargeting(AbstractClass* target) const; // IDA: NOT_FOUND
    virtual int getZAdjustment() const; // IDA: NOT_FOUND
    virtual ZGradient GetZGradient() const; // IDA: NOT_FOUND
    virtual CellStruct* GetSomeCellStruct() const; // IDA: NOT_FOUND
    virtual void SetSomeCellStruct(CellStruct* buffer); // IDA: NOT_FOUND
    virtual CellStruct* getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const; // IDA: NOT_FOUND
    virtual CoordStruct* getTurretCoords(CoordStruct* buffer, uint32_t a) const; // IDA: NOT_FOUND
    virtual uint32_t getWeaponRangeValue(uint32_t a, uint32_t b) const; // IDA: NOT_FOUND
    virtual DirStruct* GetRealFacing(DirStruct* buffer) const; // IDA: NOT_FOUND
    virtual InfantryTypeClass* GetCrew() const;  // 0x707D20
    virtual bool isInAirAlt() const; // IDA: NOT_FOUND
    virtual bool CanDeploySlashUnload() const; // IDA: NOT_FOUND
    virtual int GetROF(int weapon) const;  // 0x46C4F0
    virtual int GetGuardRange(int unknown) const; // 0x773070
    virtual bool canEnterTransport() const; // IDA: NOT_FOUND
    virtual bool IsRadarVisible(int* out_detection) const; // IDA: NOT_FOUND
    virtual bool IsSensorVisibleToPlayer() const; // IDA: NOT_FOUND
    virtual bool IsSensorVisibleToHouse(HouseClass* house) const; // IDA: NOT_FOUND
    virtual bool IsEngineer() const; // IDA: NOT_FOUND
    virtual void ProceedToNextPlanningWaypoint(); // IDA: NOT_FOUND
    virtual uint32_t ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const; // IDA: NOT_FOUND
    virtual bool EnterGrinder(); // IDA: NOT_FOUND
    virtual bool EnterBioReactor(); // IDA: NOT_FOUND
    virtual bool EnterTankBunker(); // IDA: NOT_FOUND
    virtual bool EnterBattleBunker(); // IDA: NOT_FOUND
    virtual bool GarrisonStructure(); // IDA: NOT_FOUND
    virtual bool isPowerOnline() const; // IDA: NOT_FOUND
    virtual void QueueVoice(int idx_voc); // IDA: NOT_FOUND
    virtual int VoiceEnter(); // IDA: NOT_FOUND
    virtual int VoiceHarvest(); // IDA: NOT_FOUND
    virtual int VoiceSelect(); // IDA: NOT_FOUND
    virtual int VoiceCapture(); // IDA: NOT_FOUND
    virtual int VoiceMove(); // IDA: NOT_FOUND
    virtual int VoiceDeploy(); // IDA: NOT_FOUND
    virtual int VoiceAttack(ObjectClass* target);  // 0x7090A0
    virtual bool ClickedEvent(NetworkEvents event); // IDA: NOT_FOUND
    virtual bool ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell); // IDA: NOT_FOUND
    virtual bool isUnderEmp() const; // IDA: NOT_FOUND
    virtual bool isParalyzed() const; // IDA: NOT_FOUND
    virtual bool canCheer() const; // IDA: NOT_FOUND
    virtual void Cheer(bool force); // IDA: NOT_FOUND
    virtual int GetDefaultSpeed() const; // IDA: NOT_FOUND
    virtual void DecreaseAmmo(); // IDA: NOT_FOUND
    virtual void AddPassenger(FootClass* passenger); // IDA: NOT_FOUND
    virtual bool CanDisguiseAs(AbstractClass* target) const; // IDA: NOT_FOUND
    virtual bool TargetAndEstimateDamage(uint32_t a, uint32_t b); // IDA: NOT_FOUND
    virtual uint32_t getDamageReduction(); // IDA: NOT_FOUND
    virtual bool TriggersCellInset(AbstractClass* target); // IDA: NOT_FOUND
    virtual bool IsCloseEnough(AbstractClass* target, int weapon_idx) const;  // 0x70D590
    virtual bool IsCloseEnoughToAttack(AbstractClass* target) const; // IDA: NOT_FOUND
    virtual bool IsCloseEnoughToAttackCoords(const CoordStruct& coords) const; // IDA: NOT_FOUND
    virtual uint32_t getSightRange(uint32_t a) const;  // 0x717800
    virtual void Destroyed(ObjectClass* killer) = 0; // IDA: NOT_FOUND
    virtual FireError GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const; // IDA: NOT_FOUND
    virtual FireError GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const; // IDA: NOT_FOUND
    virtual CellClass* SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy);  // 0x51E140
    virtual void SetTarget(AbstractClass* target);  // 0x6F9DD0
    virtual BulletClass* Fire(AbstractClass* target, int weapon_index);  // 0x70ECE0
    virtual void Guard(); // IDA: NOT_FOUND
    virtual bool SetOwningHouse(HouseClass* house, bool announce = true); // IDA: NOT_FOUND
    virtual void onHouseChange(uint32_t a, uint32_t b, uint32_t c); // IDA: NOT_FOUND
    virtual bool Crash(ObjectClass* killer); // IDA: NOT_FOUND
    virtual bool isAreaFire() const; // IDA: NOT_FOUND
    virtual int isNotSprayAttack() const; // IDA: NOT_FOUND
    virtual int canAct(); // IDA: NOT_FOUND
    virtual int isNotSprayAttack2() const; // IDA: NOT_FOUND
    virtual WeaponStruct* GetDeployWeapon() const;  // 0x5218E0
    virtual WeaponStruct* GetTurretWeapon() const; // IDA: NOT_FOUND
    virtual WeaponStruct* GetWeapon(int weapon_index) const; // IDA: NOT_FOUND
    virtual bool hasTurret() const; // IDA: NOT_FOUND
    virtual bool canOccupyFire() const; // IDA: NOT_FOUND
    virtual int getOccupyRangeBonus() const; // IDA: NOT_FOUND
    virtual int getOccupantCount() const; // IDA: NOT_FOUND
    virtual void OnFinishRepair(); // IDA: NOT_FOUND

    virtual void UpdateCloak(bool unknown = true);  // 0x457770
    virtual void CreateGap(); // IDA: NOT_FOUND
    virtual void DestroyGap(); // IDA: NOT_FOUND
    virtual void onBridgeRepair(); // IDA: NOT_FOUND
    virtual void Sensed(); // IDA: NOT_FOUND
    virtual void Reload();  // 0x4158E0
    virtual void onReloadComplete(); // IDA: NOT_FOUND
    virtual CoordStruct* GetTargetCoords(CoordStruct* pCrd) const;  // 0x70BCB0
    virtual bool IsNotWarpingIn() const; // IDA: NOT_FOUND
    virtual bool canChronoShift(uint32_t dwUnk) const; // IDA: NOT_FOUND
    virtual void DrawActionLines(bool force, uint32_t dwUnk2);  // 0x63BE60
    virtual uint32_t GetDisguiseFlags(uint32_t existingFlags) const; // IDA: NOT_FOUND
    virtual bool isClearlyVisibleTo(HouseClass* house) const; // IDA: NOT_FOUND
    virtual void drawSelectionBox(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, // 0x659470
        uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10) {}
    virtual void onSelect(uint32_t a, uint32_t b);  // 0x6EFC70
    virtual void DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const;  // 0x6f5190
    virtual void DrawPipScalePips(Point2D* pLocation, Point2D* pOriginalLocation, RectangleStruct* pBounds) const; // IDA: NOT_FOUND
    virtual void DrawVeterancyPips(Point2D* pLocation, RectangleStruct* pBounds) const; // IDA: NOT_FOUND
    virtual void DrawExtraInfo(Point2D const& location, Point2D const& originalLocation, RectangleStruct const& bounds) const; // IDA: NOT_FOUND
    virtual void Uncloak(bool play_sound); // IDA: NOT_FOUND
    virtual void Cloak(bool play_sound); // IDA: NOT_FOUND
    virtual uint32_t getSight(uint32_t dwUnk) const;  // 0x717800
    virtual void UpdateRefinerySmokeSystems(); // IDA: NOT_FOUND
    virtual uint32_t DisguiseAs(AbstractClass* pTarget); // IDA: NOT_FOUND
    virtual void ClearDisguise(); // IDA: NOT_FOUND
    virtual bool IsItTimeForIdleActionYet() const; // IDA: NOT_FOUND
    virtual bool UpdateIdleAction(); // IDA: NOT_FOUND
    virtual void onDamage(uint32_t dwUnk);  // 0x45EE70
    virtual void SetDestination(AbstractClass* dest, bool unknown); // IDA: NOT_FOUND
    virtual bool canRecruit(uint32_t dwUnk, uint32_t dwUnk2); // IDA: NOT_FOUND
    virtual void UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);  // 0x4C2BD0
    virtual void onPlacement(uint32_t a, uint32_t b, uint32_t c, uint32_t d); // IDA: NOT_FOUND
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) = 0; // IDA: NOT_FOUND
    virtual void RadarTrackingStart(); // IDA: NOT_FOUND
    virtual void RadarTrackingStop(); // IDA: NOT_FOUND
    virtual void RadarTrackingFlash(); // IDA: NOT_FOUND
    virtual void RadarTrackingUpdate(bool unknown); // IDA: NOT_FOUND
    virtual void onRadarEvent(uint32_t a); // IDA: NOT_FOUND
    virtual void onSpawn(); // IDA: NOT_FOUND
    virtual bool canSpawn() const; // IDA: NOT_FOUND
    virtual bool isSpawning() const; // IDA: NOT_FOUND
    virtual int getSpawnCount() const; // IDA: NOT_FOUND
    virtual CoordStruct* getSpawnCoords(CoordStruct* out); // IDA: NOT_FOUND
    virtual uint32_t processSpawn();  // 0x71D000
    virtual bool canAttackOnTheMove() const; // IDA: NOT_FOUND
    virtual bool canTarget() const; // IDA: NOT_FOUND
    virtual bool selectTarget();  // 0x41BEF0
    virtual void onTargetChange(); // IDA: NOT_FOUND
    virtual bool canFire();  // 0x6CC360

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int ApplyIronCurtain();  // 0x4155F0
    virtual int ReturnToBase();  // 0x4157C0
    virtual int ReturnToBaseAndReload();   // 0x4158E0
    virtual int ScatterFromThreat();  // 0x415960
    virtual int ExecuteMissionCommand();  // 0x417CA0
    virtual int FindNearbyBuildCell();  // 0x4195A0
    virtual int FindClosestPlacementCell();  // 0x41A160
    virtual int GetTurretFacing() const;  // 0x41A570
    virtual void ComputeTeamAttackPriority();  // 0x41B6A0
    virtual int GetAutoFireDirection() const;  // 0x41B760
    virtual int sub_41B7D0();
    virtual bool HasOnlyOneGarrisonSlot() const;  // 0x41B7F0
    virtual int sub_41B840();
    virtual int sub_41B860();
    virtual int sub_41B9E0();
    virtual bool CreateWarheadDamageEffect();  // 0x41BC30
    virtual void sub_41BEF0(); // IDA: NOT_FOUND
    virtual void vt_entry_428();  // 0x41BFE0
    virtual int vt_entry_434();  // 0x41BFF0
    virtual int GetBodyFacing() const;  // 0x41C1E0
    virtual int sub_41C640();
    virtual int sub_41C650();
    virtual int sub_41C660();
    virtual int sub_41C670();
    virtual int sub_41C680();
    virtual int sub_41C690();
    virtual int ApplyDamageEffects(); // 0x438720
    virtual int sub_5439080(); // IDA: NOT_FOUND
    virtual int RemoveFromDynamicVector();  // 0x4390D0
    virtual void ComputeTargetAngle();  // 0x43E940
    virtual int StartOrResumeProduction();  // 0x44D6A0
    virtual int GetTurretScreenPos() const;  // 0x453A70
    virtual void ProcessMissionDeploy();  // 0x456F80
    virtual int EvacuateFootprintCells();  // 0x458A80
    virtual int MissionStubReturnZero4(); // 0x459D90
    virtual bool StubReturnFalse2(); // 0x459DD0
    virtual int sub_546B270(); // IDA: NOT_FOUND
    virtual int sub_54722D0(); // IDA: NOT_FOUND
    virtual int IndexOf(); // 0x473500
    virtual int CalcFacingFromMatrix() const;  // 0x5AF410
    virtual void CreateTrailParticle();  // 0x4C2A60
    virtual int sub_4C2BD0(); // IDA: NOT_FOUND
    virtual int UpdateThunk();  // 0x4CC770
    virtual int GetData() const; // 0x4CF950
    virtual int sub_54A50F0(); // IDA: NOT_FOUND
    virtual int CreatePlanningNode();  // 0x638A80
    virtual int GetBuildCost() const;  // 0x711EC0
    virtual int CheckState1() const;  // 0x5B2E70
    virtual int CheckState2() const; // 0x5B2E80
    virtual int StubReturn450(); // 0x5B2E40
    virtual void vt_entry_448();  // 0x6F60C0
    virtual int sub_54D28C0(); // IDA: NOT_FOUND
    virtual int GetTypeFlag() const;  // 0x5224E0
    virtual int sub_5505180(); // IDA: NOT_FOUND
    virtual int FindClosestBuilding();  // 0x4DFF40
    virtual int FindBestMatch();  // 0x4DF040
    virtual int FindClosestInfantry();  // 0x4DFA70
    virtual int FindClosestUnit();  // 0x4DFB70
    virtual int FindBestMovementDirection();  // 0x740B60
    virtual int vt_entry_4A8();  // 0x4DF1A0
    virtual int vt_entry_4AC();  // 0x4DF1C0
    virtual int vt_entry_4B0();  // 0x4DF1D0
    virtual int vt_entry_4B4();  // 0x4DF1E0
    virtual int vt_entry_4B8();  // 0x4DF1F0
    virtual int vt_entry_4C4();  // 0x4DF310
    virtual int vt_entry_4C8();  // 0x4DF320
    virtual int vt_entry_4D0();  // 0x4DF4B0
    virtual int GetAnimationValue() const;  // 0x4E0150
    virtual int FindDeployDestination();  // 0x50C920
    virtual int sub_550D9C0(); // IDA: NOT_FOUND
    virtual int sub_550D9D0(); // IDA: NOT_FOUND
    virtual int MapHouseRelationIndex();  // 0x50DAC0
    virtual int GetDamageMultiplier() const;  // 0x50BD30
    virtual int ProcessTarget();  // 0x50CAD0
    virtual int sub_55224F0(); // IDA: NOT_FOUND
    virtual int GetDeployCoords();  // 0x4DBDF0
    virtual int CanBePermaMC() const;  // 0x53C450
    virtual int GarrisonBuilding();  // 0x522910
    virtual int IsMission27to30() const;  // 0x522510
    virtual int HandleSpecialAction();  // 0x522A60
    virtual int IsEnteringOrCapturingStructure() const;  // 0x522CB0
    virtual void CreateDestructionEffect();  // 0x5F5390
    virtual int FindMatchingUnit();  // 0x5F7900
    virtual int ClearArrays();  // 0x5F99E0
    virtual int ComputeScanRange() const;  // 0x48AB90
    virtual int drawSelectionBox();  // 0x659470
    virtual int drawHealthBar();  // 0x659490
    virtual int sub_6594A0();
    virtual int sub_6594C0();
    virtual int sub_6594E0();
    virtual int sub_6594F0();
    virtual int drawMindControlPips();  // 0x659540
    virtual int drawPassengerPips();  // 0x659550
    virtual int ClearScriptPlanningData();  // 0x633D30
    virtual int GetTileAnimationData() const;  // 0x547150
    virtual int MutateAll();  // 0x6B0AE0
    virtual int RefreshDeployOccupierState();  // 0x6B0D10
    virtual int CountPassengers() const;  // 0x6B7D80
    virtual int GetValue() const; // 0x6F3970
    virtual int ComputeTransform();  // 0x6f3ad0
    virtual int CanMoveToCell() const;  // 0x6FC030
    virtual int CanInitiateSell() const;  // 0x6F32D0
    virtual int IsNotAircraftOrBuilding() const;  // 0x6F3280
    virtual int SelectWeapon(); // 0x6F3330
    virtual int CanTargetHouse() const;  // 0x6F3820
    virtual int CanSelfRepair();  // 0x70FB50
    virtual int Mission_RepairDispatch();  // 0x6F4AB0
    virtual int PushNearbyUnits();  // 0x6F4EB0
    virtual int SetFocus();  // 0x7C8674
    virtual int SetHouseFlag();  // 0x6F4960
    virtual int ProcessAIDecision();  // 0x740810
    virtual int CheckPlayerOwned() const;  // 0x6F4A40
    virtual int UpdateProdWithSound();  // 0x6F4A70
    virtual int HasActiveParam() const; // 0x701120
    virtual int HasOnlyOneGarrisonSlot2() const; // IDA: NOT_FOUND
    virtual int FindLowestDamage();  // 0x7012C0
    virtual int ProcessCapture();  // 0x7014a0
    virtual int GetRangeModifier() const;  // 0x70D190
    virtual int ShouldScanArea() const;  // 0x70D1D0
    virtual int IsCloseEnoughToBuilding() const;   // 0x70D590
    virtual int IsCellPassableFor() const;  // 0x70D460
    virtual int IsPlayerCellPassable() const;  // 0x70D420
    virtual int SetMoveDestination();  // 0x708D90
    virtual int GetPrimaryTargetOrFallback() const;  // 0x708DC0
    virtual int PickAlternateTarget();  // 0x708E00
    virtual int SelectRandomTarget();  // 0x708EB0
    virtual int GetSecondaryTargetOrFallback() const;  // 0x709020
    virtual int SetPositionAnimated();  // 0x4DB810
    virtual int GetTargetCellCenter();  // 0x4DBA50
    virtual int ComputeSpeedFactor();  // 0x4DAFC0
    virtual int ComputeSpeedFactorEx();  // 0x4DB1A0
    virtual int CleanupDirection();  // 0x4DB260
    virtual int GetDeployProgressValue() const;  // 0x740F80
    virtual int ComputeAverageValue() const;  // 0x708BC0
    virtual int GetGlobalValue() const;  // 0x708C10
    virtual int SetIdleState();  // 0x70F850
    virtual int ComputeAimVector();  // 0x70B280
    virtual int RevealAreaConditional();  // 0x70B1D0
    virtual int GetCellCoordsV2() const;  // 0x70AD50
    virtual int Vt46Thunk();  // 0x70ADA0
    virtual int RevealAreaSmall();  // 0x70ADC0
    virtual int ScanForEnemies();  // 0x70AF50
    virtual int GetTargetCoords();  // 0x70BCB0
    virtual int CalcOffsetFacing() const;  // 0x70BE50
    virtual int ShouldSelfHealOneStep() const;  // 0x70BE80
    virtual int ComputeThreatLevel();  // 0x4D97A0
    virtual int CanBeTargeted() const;  // 0x744270
    virtual int GetCommandTooltip() const;  // 0x746B20
    virtual int ShouldBeCloaked() const;  // 0x6FBDC0
    virtual int ShouldNotBeCloaked() const;  // 0x6FBC90
    virtual int SetTargetIfAllowed();   // 0x6F9DD0
    virtual int CanReceivePassengers() const;  // 0x700C40
    virtual int GetTarget() const;  // 0x6F9DC0
    virtual int GetID() const;  // 0x6F9DB0
    virtual int GetSightRange() const;  // 0x717800
    virtual int CheckAndFireAtTarget();  // 0x6F78D0
    virtual int GattlingRateUp_GattlingRateDownReset();  // 0x70DE70
    virtual int GattlingValueRateDown_GattlingRateDownDelay();  // 0x70DE40
    virtual int SetMember81();  // 0x70DE00
    virtual int Deactivate(); // 0x70FC90
    virtual int Activate(); // 0x70FBE0
    virtual int ActivateEffect();  // 0x70E280
    virtual int IronCurtain(); // 0x70E2B0
    virtual int InvulnerabilityIntensity_SetContext();  // 0x70E380
    virtual int ResetTimer();  // 0x70E300
    virtual int CalcAnimDelay() const;  // 0x6FB080
    virtual int StepAnimFrame();  // 0x6FB010
    virtual int BeginFiringSequence();  // 0x709820
    virtual int CompleteFactoryProduction();  // 0x709A40
    virtual int IsTimerExpired() const;  // 0x7099E0
    virtual int GetAudioEntry() const;  // 0x7177C0
    virtual int GetTertiaryTargetOrFallback() const;  // 0x709060
    virtual int VoiceAttack();  // 0x7090A0
    virtual int ResponseMove_Pickup();  // 0x708FC0
    virtual int Vt170();  // 0x708D70
    virtual int CanAttack() const;  // 0x700D50
    virtual int IsDeadOrInactive() const;  // 0x700D10
    virtual int CalculateROF();  // 0x6FCFA0
    virtual int GetAmmoCount() const;  // 0x708C30
    virtual int GetAmmoCount_0() const;  // 0x740E50
    virtual int SelectAttackWeapon();  // 0x746CD0
    virtual int GetAverageDamageScore() const;  // 0x7414A0
    virtual int ProcessSpecialUnitDeployCrush();  // 0x7416A0
    virtual int FireWeaponBurst();  // 0x741340
    virtual int GetWeaponRange(int weapon_index) const; // IDA: NOT_FOUND
    virtual int FireWeapon(); // 0x6FDD50
    virtual int CreateFireEffect();  // 0x6FD210
    virtual int CreateFireBeamEffect();  // 0x6FD620
    virtual int CreateFiringRadarBlip();  // 0x6FD570
    virtual int CreateRadarBlip();  // 0x6FD460
    virtual int GetFiringAngle() const;  // 0x6FDA00
    virtual int AssignTarget_SyncLog(); // 0x6FCDB0
    virtual int ProcessDeploymentState();  // 0x6FCD40
    virtual int ComputeAudioFalloffDamage();  // 0x6FDB80
    virtual int ComputeCombatDamage();  // 0x70D690
    virtual int CheckFireCooldown() const;  // 0x70EE30
    virtual int CanDamageTarget() const;  // 0x70EF00
    virtual int COMStub_Return0_298();  // 0x70F010
    virtual int HasPassengers() const;  // 0x70EFD0
    virtual int COMStub_Return0_307();  // 0x70F100
    virtual int sub_70F040();
    virtual int ProcessCellClearance();  // 0x70F050
    virtual int GetTypeVt40() const;  // 0x70F070
    virtual int GetMaxSpeed() const;  // 0x70EFE0
    virtual int DrainAmmo();  // 0x70E000
    virtual int EjectPassengers();  // 0x70FEE0
    virtual int RadarUpdateOn();  // 0x70CC90
    virtual int RadarUpdateOff();  // 0x70CCC0
    virtual int RevealOwnCell();  // 0x70CCF0
    virtual int ComputeDamage();  // 0x70CD10
    virtual int GetCostMultiplier() const;  // 0x708B40
    virtual int IsInRange() const; // 0x6F7660
    virtual int GetCrew();  // 0x707D20
    virtual int GetCrew_0();  // 0x740EE0
    virtual int GetCrewCount();  // 0x6F3950
    virtual int CheckCellPassable() const; // 0x6F7930
    virtual int CheckCellPassable2() const;  // 0x6F7780
    virtual int CheckCellPassable3() const;  // 0x6F7970
    virtual int ValidateTarget() const; // 0x6F77B0
    virtual int GetBridgeDamageMult() const;  // 0x6F79A0
    virtual int CheckAndFireAtTarget2(); // IDA: NOT_FOUND
    virtual int EvaluateTarget();  // 0x6f7ca0
    virtual int SelectAutoTarget_Start_AU();  // 0x6F8DF0
    virtual int CheckTargetLOS() const;  // 0x6F7220
    virtual int CheckTargetCell() const; // 0x703B10
    virtual int CheckPlacementTileMatch() const;  // 0x707F60
    virtual int ComputeScanDistance() const;  // 0x707E60
    virtual int ComputeTotalPowerDrain();  // 0x707DD0
    virtual int EvaluateBuildingTarget();  // 0x6F8C10
    virtual int GetBuildAnim() const;  // 0x705D70
    virtual int IsNotBusy() const;  // 0x705D50
    virtual int EvaluateMission();  // 0x708080
    virtual int GetThreatValue() const;  // 0x4DED70
    virtual int GetThreatValue_0() const;  // 0x5216C0
    virtual int ProcessBorderTower();  // 0x6ED4D0
    virtual int HandleCursor();  // 0x700600
    virtual int HandleCursorClick();  // 0x6FFEC0
    virtual int ScanAdjacentCells2(); // 0x703CC0
    virtual int ScanNeighborCells();  // 0x703E70
    virtual int IsValidBuildingPlacement();  // 0x704000
    virtual int StartEffectAudio();  // 0x703770
    virtual int TransitionEffectState();  // 0x7036C0
    virtual int Vt279Thunk0();  // 0x703850
    virtual int UpdatePowerDrain(); // 0x703860
    virtual int UpdatePowered();  // 0x70E1A0
    virtual int UpdateState(); // 0x706640
    virtual int UpdateUnitAnimation();  // 0x736CA0
    virtual int GetInfantryCursorAction() const;  // 0x7404B0
    virtual int GetThreatValueEx() const; // IDA: NOT_FOUND
    virtual int ComputeSlopeDifference();  // 0x6F6F60
    virtual int ComputeSlopePenalty();  // 0x6F70E0
    virtual int IsOwnedByHuman() const;  // 0x732580
    virtual int IsCapturableByPlayer() const;  // 0x7335F0
    virtual int IsC4AnimationActive() const;  // 0x736D50
    virtual int CreateDeathAnim();  // 0x738680
    virtual int DispatchPlayerInput();  // 0x737BA0
    virtual int Deploy(); // 0x7393C0
    virtual int DeployIntoBuilding();  // 0x73EFC0
    virtual int SpawnInfantryFromBuilding();  // 0x738910
    virtual int CleanupDeploy();  // 0x6F6AC0
    virtual int ClearAllTargets();  // 0x746720
    virtual int SelectAITarget();  // 0x744100
    virtual int ReturnCapturedFlag();  // 0x7440B0
    virtual int AreBuildingFlagsClear() const;  // 0x744180
    virtual int MarkCellImpassable();  // 0x7441B0
    virtual int ClearCellImpassable();  // 0x744210
    virtual int CaptureTurret();  // 0x746420
    virtual int TransferSlavedUnit();  // 0x7463A0
    virtual int TransferTurret();  // 0x7464E0
    virtual int ApplyObjectEffect();  // 0x746670
    virtual int IsGuardingTarget() const;  // 0x746750
    virtual int ProcessUnitSelfDestruct();  // 0x746100
    virtual int NotifyTeamOnDestruction();  // 0x744720
    virtual int RespondToDestruction();  // 0x738970
    virtual int GetWaypointCoords() const; // 0x6F18A0
    virtual int Create(); // 0x6F1920
    virtual int CopyStateFrom();  // 0x4B5210
    virtual int ScalarDtor();  // 0x5AC340
    virtual int EnteredOpenTopped();  // 0x710470
    virtual int MarkPassengersAsExited();  // 0x7104C0
    virtual int ExitedOpenTopped();  // 0x7104A0
    virtual int GetMember388() const;  // 0x711EB0
    virtual int GetBuildCost2() const; // IDA: NOT_FOUND
    virtual int FindBestMatch2(); // IDA: NOT_FOUND
    virtual int IsWaypointHidden() const;  // 0x6EC300
    virtual int LinkToBridge();  // 0x70FD70
    virtual int ResetDamageAccumulator();  // 0x4C1E10
    virtual int UpdateBodyTilt();  // 0x70B570
    virtual int CheckCliffTransition() const;  // 0x70C620
    virtual int OnEnterCell();  // 0x70D990
    virtual int sub_570DC50(); // IDA: NOT_FOUND
    virtual int OwnerHasPower() const;  // 0x70DC60
    virtual int sub_570DCE0(); // IDA: NOT_FOUND
    virtual int sub_570DCF0(); // IDA: NOT_FOUND
    virtual int GetPoweredWeaponIndex() const;  // 0x70DD20
    virtual int GetVt252Byte() const;  // 0x70DD50
    virtual int vt_entry_3E8();  // 0x70DD90
    virtual int SetSpread(); // 0x70DDD0
    virtual int DecCounter();  // 0x70D670
    virtual int PlaceAtCell();  // 0x70D8F0
    virtual int SelectVocOrSfx(); // 0x70E140
    virtual int Update2(); // 0x70ED10
    virtual int GetAnimationFlags() const;  // 0x70ED80
    virtual int GetTargetSpeedMultiplier() const;  // 0x50C050
    virtual int ProcessEnterTransport();  // 0x70D7E0
    virtual int IsCloseEnoughToBuilding2() const; // IDA: NOT_FOUND
    virtual int IsDeployed() const;  // 0x6EF9E0
    virtual int CheckAdjacencyFlags() const;  // 0x704240
    virtual int IsProductionChainActive() const;  // 0x637840
    virtual int HasDeployFlags() const;  // 0x746DB0
    virtual int RemoveBuildingFromScripts();  // 0x638840
    virtual int FinishDeploy();  // 0x6F6CA0
    virtual int ValidateMoveType();  // 0x738890
    virtual int ComputeSlopePenalty2(); // IDA: NOT_FOUND
    virtual int sub_740B10();
    virtual int CheckRepairNeeded() const;  // 0x740A90
    virtual int EnterRepairBuilding();  // 0x740EF0
    virtual int CheckUnitFireConstraints() const;  // 0x740FD0
    virtual int checkTargetValidity();  // 0x741490
    virtual int sub_7441B0(); // IDA: NOT_FOUND
    virtual int sub_744180(); // IDA: NOT_FOUND
    virtual int sub_744210(); // IDA: NOT_FOUND
    virtual int sub_744270(); // IDA: NOT_FOUND
    virtual int sub_744720(); // IDA: NOT_FOUND
    virtual int sub_7440B0(); // IDA: NOT_FOUND
    virtual int sub_744100(); // IDA: NOT_FOUND
    virtual int SelectAutoTargetWithGarrison();  // 0x743190
    virtual int processParasiteAttachment();  // 0x746400
    virtual int sub_746420(); // IDA: NOT_FOUND
    virtual int sub_7464E0(); // IDA: NOT_FOUND
    virtual int sub_7465B0();
    virtual int sub_7465F0();
    virtual int sub_7463A0(); // IDA: NOT_FOUND
    virtual int sub_746670(); // IDA: NOT_FOUND
    virtual int sub_746720(); // IDA: NOT_FOUND
    virtual int sub_746750(); // IDA: NOT_FOUND
    virtual int sub_746B20(); // IDA: NOT_FOUND
    virtual int sub_746C90();
    virtual int sub_746CD0(); // IDA: NOT_FOUND
    virtual int sub_746D00();
    virtual int sub_746D60();
    virtual int sub_746DB0(); // IDA: NOT_FOUND
    virtual int sub_746E30();
    virtual int sub_746EA0();
    virtual int sub_746100(); // IDA: NOT_FOUND
    virtual int sub_746F80(); // IDA: NOT_FOUND
    virtual int sub_70F850(); // IDA: NOT_FOUND
    virtual int sub_70FB50(); // IDA: NOT_FOUND
    virtual int sub_70FC90();
    virtual int sub_70FD70(); // IDA: NOT_FOUND
    virtual int sub_70FEE0(); // IDA: NOT_FOUND
    virtual int sub_710000(); // IDA: NOT_FOUND
    virtual int sub_710470(); // IDA: NOT_FOUND
    virtual int sub_7104A0(); // IDA: NOT_FOUND
    virtual int sub_7104C0(); // IDA: NOT_FOUND
    virtual int sub_7106E0();
    virtual int sub_710F70(); // IDA: NOT_FOUND
    virtual int sub_711E00(); // IDA: NOT_FOUND
    virtual int sub_711EB0(); // IDA: NOT_FOUND
    virtual int sub_73EFC0(); // IDA: NOT_FOUND
    virtual int sub_7393C0();
    virtual int sub_737BA0(); // IDA: NOT_FOUND
    virtual int sub_738910(); // IDA: NOT_FOUND
    virtual int GatherAllBuildings();  // 0x732050
    virtual int sub_732580(); // IDA: NOT_FOUND
    virtual int sub_731CF0();
    virtual int sub_729AA0(); // IDA: NOT_FOUND
    virtual int sub_729480(); // IDA: NOT_FOUND
    virtual int sub_71F010(); // IDA: NOT_FOUND
    virtual int sub_71A130(); // IDA: NOT_FOUND
    virtual int CalculateDamage(); // 0x663030
    virtual int UpdateBodyTilt2(); // IDA: NOT_FOUND
    virtual int GattlingRateUp_GattlingRateDownReset2(); // IDA: NOT_FOUND
    virtual int ApplySplashDamageToNeighbors();  // 0x487720
    virtual int ReceiveDamage_Shield();  // 0x701900
    virtual int sub_70B1D0(); // IDA: NOT_FOUND
    virtual int sub_70B280(); // IDA: NOT_FOUND
    virtual int sub_70B570(); // IDA: NOT_FOUND
    virtual int sub_70BCB0(); // IDA: NOT_FOUND
    virtual int sub_70BE80(); // IDA: NOT_FOUND
    virtual int sub_70D1D0(); // IDA: NOT_FOUND
    virtual int sub_70D990(); // IDA: NOT_FOUND
    virtual int sub_70DE70(); // IDA: NOT_FOUND
    virtual int sub_70DE00(); // IDA: NOT_FOUND
    virtual int sub_70DD20(); // IDA: NOT_FOUND
    virtual int sub_70DD50(); // IDA: NOT_FOUND
    virtual int sub_70DDD0();
    virtual int sub_70DE40(); // IDA: NOT_FOUND
    virtual int sub_70E120();
    virtual int sub_70E140();
    virtual int sub_70E1A0(); // IDA: NOT_FOUND
    virtual int sub_70E280(); // IDA: NOT_FOUND
    virtual int sub_70E2B0();
    virtual int sub_70E300(); // IDA: NOT_FOUND
    virtual int sub_70E380(); // IDA: NOT_FOUND
    virtual int sub_70E4B0();
    virtual int sub_70EC0A(); // IDA: NOT_FOUND
    virtual int sub_70ED10();
    virtual int sub_70ED80(); // IDA: NOT_FOUND
    virtual int sub_70EE30(); // IDA: NOT_FOUND
    virtual int sub_70EFD0(); // IDA: NOT_FOUND
    virtual int sub_70EF00(); // IDA: NOT_FOUND
    virtual int sub_70F010(); // IDA: NOT_FOUND
    virtual int sub_70F000();
    virtual int sub_70ECE0(); // IDA: NOT_FOUND
    virtual int sub_70CCC0(); // IDA: NOT_FOUND
    virtual int sub_70CC90(); // IDA: NOT_FOUND
    virtual int sub_70CD10(); // IDA: NOT_FOUND
    virtual int sub_70D190(); // IDA: NOT_FOUND
    virtual int sub_70D460(); // IDA: NOT_FOUND
    virtual int sub_70D590();
    virtual int sub_70D670(); // IDA: NOT_FOUND
    virtual int sub_70D690(); // IDA: NOT_FOUND
    virtual int sub_70D8F0(); // IDA: NOT_FOUND
    virtual int sub_70DD90(); // IDA: NOT_FOUND
    virtual int sub_70BE50(); // IDA: NOT_FOUND
    virtual int sub_70C620(); // IDA: NOT_FOUND
    virtual int sub_70C610();

    virtual int SelectWeapon(AbstractClass* target) const; // 0x6F3330
    void SmokeupdateLogic(); // IDA: NOT_FOUND
    bool CreateUnit(); // 0x423AC0

    int GetIonCannonValue(AIDifficulty difficulty) const; // IDA: NOT_FOUND

    DirStruct getFacing() const; // IDA: NOT_FOUND
    DirStruct GetRealFacing() const; // IDA: NOT_FOUND

    // ---- member variables ----

    FlashData               flashing;
    ProgressTimer           animation;
    PassengersClass         passengers;
    TechnoClass*            transporter;
    int32_t                 turretChargeTimer;
    int32_t                 currentTurretNumber;
    int32_t                 secondaryTurretIndex;
    AnimClass*              behindAnim;
    AnimClass*              deployAnim;
    bool                    inAirFlag;
    uint8_t                 alignmentPadding139[3];
    int32_t                 currentWeaponSlot;
    int32_t                 currentRank;          // Rank enum
    int32_t                 gattlingStage;
    int32_t                 gattlingValue;
    uint32_t                ammoReloadTimer;
    HouseClass*             initialOwner;
    VeterancyStruct         veterancy;
    uint32_t                alignmentPadding154;
    double                  armorMultiplier;
    double                  firepowerMultiplier;
    TimerStruct             idleActionTimer;
    TimerStruct             radarFlashTimer;
    TimerStruct             targetingTimer;
    TimerStruct             ironCurtainTimer;
    TimerStruct             ironTintTimer;
    int32_t                 ironTintStage;
    TimerStruct             airstrikeTimer;
    TimerStruct             airstrikeTintTimer;
    uint32_t                airstrikeTintStage;
    int32_t                 forceShielded;
    bool                    isDeactivated;
    uint8_t                 alignmentPadding1BD[3];
    TechnoClass*            drainTarget;
    TechnoClass*            drainingMe;
    AnimClass*              drainAnim;
    bool                    isDisguisedFlag;
    uint8_t                 alignmentPadding1CE[3];
    uint32_t                disguiseCreationFrame;
    TimerStruct             infantryBlinkTimer;
    TimerStruct             disguiseBlinkTimer;
    bool                    isTargetedByChrono;
    uint8_t                 alignmentPadding1F9[3];
    TimerStruct             reloadTimer;
    uint32_t                currentBurstCount;
    uint32_t                currentBarrelIndex;
    IndexBitfield<HouseClass*> displayProductionTo;
    int32_t                 group;
    AbstractClass*          focus;
    HouseClass*             owner;
    uint32_t                cloakState;              // CloakState enum
    ProgressTimer           cloakProgress;
    TimerStruct             cloakDelayTimer;
    float                   warpFactor;
    bool                    isChronosphereImmune;
    uint8_t                 alignmentPadding251[3];
    CoordStruct             lastSightCoords;
    int32_t                 lastSightRange;
    int32_t                 lastSightHeight;
    bool                    gapSuperCharged;
    bool                    isGeneratingGap;
    uint8_t                 alignmentPadding27E[2];
    int32_t                 gapRadius;
    bool                    isBeingWarpedOut;
    bool                    isWarpingOut;
    bool                    isWarpEffectActive;
    uint8_t                 unusedField273;
    TemporalClass*          temporalUsing;
    TemporalClass*          temporalTargetingMe;
    bool                    isImmobilized;
    uint8_t                 alignmentPadding27D[3];
    uint32_t                owningHouseIndex0;
    int32_t                 chronoLockRemaining;
    CoordStruct             chronoDestCoords;
    AirstrikeClass*         airstrike;
    bool                    isBerserk;
    uint8_t                 alignmentPadding29D[3];
    uint32_t                isBerserk_duration_left;
    uint32_t                sprayOffsetIndex;
    bool                    isUncrushable;
    uint8_t                 alignmentPadding2A9[3];
    FootClass*              rockerLinkedUnit;
    FootClass*              locomotorTarget;
    FootClass*              locomotorSource;
    AbstractClass*          target;
    AbstractClass*          lastTarget;
    CaptureManagerClass*    captureManager;
    TechnoClass*            mindControlledBy;
    bool                    mindControlledBy_a_unit;
    uint8_t                 alignmentPadding2C2[3];
    AnimClass*              mindControlRingAnim;
    HouseClass*             mindControlledBy_house;
    SpawnManagerClass*      spawnManager;
    TechnoClass*            spawnOwner;
    SlaveManagerClass*      slaveManager;
    TechnoClass*            slaveOwner;
    HouseClass*             originalOwnerHouse;
    TechnoClass*            bunkerLinkedUnit;
    float                   pitchAngle;
    TimerStruct             diskLaserTimer;
    uint32_t                diskLaserChargeState;
    int32_t                 ammo;
    int32_t                 unitValue;
    ParticleSystemClass*    fireParticles;
    ParticleSystemClass*    sparkParticles;
    ParticleSystemClass*    ambientParticles;
    ParticleSystemClass*    damageParticles;
    ParticleSystemClass*    railgunParticles;
    ParticleSystemClass*    auxParticles1;
    ParticleSystemClass*    auxParticles2;
    ParticleSystemClass*    firingParticles;
    WaveClass*              waveEffect;
    float                   tiltSidewaysAngle;
    float                   tiltForwardsAngle;
    float                   tiltSidewaysRate;
    float                   tiltForwardsRate;
    int32_t                 hijackerInfantryType;
    OwnedTiberiumStruct     storedTiberium;
    uint32_t                tiberiumCollectionState;
    TransitionTimer         unloadTimer;
    FacingStruct            barrelFacing;
    FacingStruct            facing;
    FacingStruct            turretFacing;
    int32_t                 currentBurstIndex;
    TimerStruct             target_laser_timer;
    int16_t                 targetLaserOpacity;
    uint16_t                targetLaserFlags;
    bool                    isCountedAsOwned;
    bool                    isSinking;
    bool                    wasAlreadySinking;
    bool                    isReceivingDamageEffect;
    bool                    isPlayingDamageSound;
    bool                    hasBeenAttacked;
    bool                    isCloakableFlag;
    bool                    isPrimaryFactory;
    bool                    isSpawned;
    bool                    isInPlayfield;
    RecoilData              turretRecoil;
    RecoilData              barrelRecoil;
    bool                    isTurretLocked;
    bool                    isBarrelLocked;
    bool                    isHumanControlled;
    bool                    isDiscoveredByPlayer;
    bool                    isDiscoveredByComputer;
    bool                    isSelectedByPlayer;
    bool                    isUnderCursor;
    bool                    isCommandLineTarget;
    char                    sightRangeBonus;
    bool                    isRecruitableByAlly;
    bool                    isRecruitableByEnemy;
    bool                    isRadarTracked;
    bool                    isOnCarryall;
    bool                    isCrashing;
    bool                    wasAlreadyCrashing;
    bool                    isBeingManipulated;
    TechnoClass*            manipulatedByUnit;
    HouseClass*             chronoWarpedByHouse;
    bool                    isChronoImmuneFlag;
    bool                    isEMPImmune;
    bool                    isRadiationImmune;
    uint8_t                 alignmentPadding433;
    TeamClass*              previousTeam;
    bool                    isCountedAsOwned_special;
    bool                    isAbsorbed;
    bool                    isGrindingInProgress;
    uint8_t                 alignmentPadding43B;
    uint32_t                grindingAnimHandle;
    DynamicVectorClass<int32_t> currentTargetThreatValues;
    DynamicVectorClass<AbstractClass*> currentTargets;
    DynamicVectorClass<AbstractClass*> attackedTargets;
    AudioController         audioController3;
    uint32_t                audioLoopIndex3;
    uint32_t                audioVolume3;
    AudioController         audioController4;
    bool                    isAudio4Active;
    uint8_t                 alignmentPadding4B9[3];
    uint32_t                audioHandle4;
    AudioController         audioController5;
    bool                    isAudio5Active;
    uint8_t                 alignmentPadding4D5[3];
    uint32_t                audioHandle5;
    AudioController         audioController6;
    uint32_t                queuedVoiceIndex;
    uint32_t                voiceFlags;
    bool                    isVoiceOverride;
    uint8_t                 alignmentPadding4F9[3];
    uint32_t                voiceHandle;
    uint32_t                voiceVolumeModifier;
    uint32_t                empLockRemaining;
    uint32_t                threatPosed;
    uint32_t                shouldLoseTarget;
    RadBeam*                firingRadBeam;
    PlanningTokenClass*     planningToken;
    ObjectTypeClass*        disguiseAsType;
    HouseClass*             isDisguisedFlag_as_house;

protected:
    TechnoClass() noexcept; // 0x6F2B40
};

} // namespace game
} // namespace ra2
