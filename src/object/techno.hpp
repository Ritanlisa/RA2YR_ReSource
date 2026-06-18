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

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return S_OK; }

    virtual ~TechnoClass() = default;

    virtual bool isUnitfactory() const { return false; }
    virtual bool isCloakable() const { return false; }
    virtual bool canScatter() const { return true; }
    virtual bool belongsToATeam() const { return false; }
    virtual bool shouldSelfHealOneStep() const { return false; }
    virtual bool isVoxel() const { return false; }
    virtual bool canSelfRepair() { return false; }
    virtual bool shouldBeCloaked() const { return false; }
    virtual bool shouldNotBeCloaked() const { return false; }
    virtual DirStruct* getFacing(DirStruct* buffer) const { return nullptr; }
    virtual bool isArmed() const { return false; }
    virtual void onSpawnComplete() const {}
    virtual double getStoragePercentage() const { return 0.0; }
    virtual int getPipFillLevel() const { return 0; }
    virtual int getRefund() const { return 0; }
    virtual int getThreatValue() const { return 0; }
    virtual bool canBeAttacked(uint32_t a) { return false; }
    virtual uint32_t getSpecialValue(uint32_t a, uint32_t b) { return 0; }
    virtual bool canCrush(uint32_t a) { return false; }
    virtual int getCrewCount() const { return 0; }
    virtual int getAntiAirValue() const { return 0; }
    virtual int getAntiArmorValue() const { return 0; }
    virtual int getAntiInfantryValue() const { return 0; }
    virtual void gotHijacked() {}
    virtual int selectNavalTargeting(AbstractClass* target) const { return 0; }
    virtual int getZAdjustment() const { return 0; }
    virtual ZGradient GetZGradient() const { return static_cast<ZGradient>(-1); }
    virtual CellStruct* GetSomeCellStruct() const { return nullptr; }
    virtual void SetSomeCellStruct(CellStruct* buffer) {}
    virtual CellStruct* getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const { return nullptr; }
    virtual CoordStruct* getTurretCoords(CoordStruct* buffer, uint32_t a) const { return nullptr; }
    virtual uint32_t getWeaponRangeValue(uint32_t a, uint32_t b) const { return 0; }
    virtual DirStruct* GetRealFacing(DirStruct* buffer) const { return nullptr; }
    virtual InfantryTypeClass* GetCrew() const { return nullptr; }
    virtual bool isInAirAlt() const { return false; }
    virtual bool CanDeploySlashUnload() const;
    virtual int GetROF(int weapon) const { return 0; }
    virtual int GetGuardRange(int unknown) const { return 0; }
    virtual bool canEnterTransport() const { return false; }
    virtual bool IsRadarVisible(int* out_detection) const { return false; }
    virtual bool IsSensorVisibleToPlayer() const { return false; }
    virtual bool IsSensorVisibleToHouse(HouseClass* house) const { return false; }
    virtual bool IsEngineer() const { return false; }
    virtual void ProceedToNextPlanningWaypoint() {}
    virtual uint32_t ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual bool EnterGrinder();
    virtual bool EnterBioReactor();
    virtual bool EnterTankBunker();
    virtual bool EnterBattleBunker();
    virtual bool GarrisonStructure();
    virtual bool isPowerOnline() const { return true; }
    virtual void QueueVoice(int idx_voc) {}
    virtual int VoiceEnter() { return 0; }
    virtual int VoiceHarvest() { return 0; }
    virtual int VoiceSelect() { return 0; }
    virtual int VoiceCapture() { return 0; }
    virtual int VoiceMove() { return 0; }
    virtual int VoiceDeploy() { return 0; }
    virtual int VoiceAttack(ObjectClass* target) { return 0; }
    virtual bool ClickedEvent(NetworkEvents event) { return false; }
    virtual bool ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell) { return false; }
    virtual bool isUnderEmp() const { return false; }
    virtual bool isParalyzed() const { return false; }
    virtual bool canCheer() const { return false; }
    virtual void Cheer(bool force) {}
    virtual int GetDefaultSpeed() const { return 0; }
    virtual void DecreaseAmmo();
    virtual void AddPassenger(FootClass* passenger);
    virtual bool CanDisguiseAs(AbstractClass* target) const { return false; }
    virtual bool TargetAndEstimateDamage(uint32_t a, uint32_t b) { return false; }
    virtual uint32_t getDamageReduction() { return 0; }
    virtual bool TriggersCellInset(AbstractClass* target) { return false; }
    virtual bool IsCloseEnough(AbstractClass* target, int weapon_idx) const { return false; }
    virtual bool IsCloseEnoughToAttack(AbstractClass* target) const;
    virtual bool IsCloseEnoughToAttackCoords(const CoordStruct& coords) const { return false; }
    virtual uint32_t getSightRange(uint32_t a) const { return 0; }
    virtual void Destroyed(ObjectClass* killer) = 0;
    virtual FireError GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const;
    virtual FireError GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const;
    virtual CellClass* SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy);
    virtual void SetTarget(AbstractClass* target);
    virtual BulletClass* Fire(AbstractClass* target, int weapon_index);
    virtual void Guard();
    virtual bool SetOwningHouse(HouseClass* house, bool announce = true) { return false; }
    virtual void onHouseChange(uint32_t a, uint32_t b, uint32_t c) {}
    virtual bool Crash(ObjectClass* killer) { return false; }
    virtual bool isAreaFire() const { return false; }
    virtual int isNotSprayAttack() const { return 0; }
    virtual int canAct() { return 0; }
    virtual int isNotSprayAttack2() const { return 0; }
    virtual WeaponStruct* GetDeployWeapon() const { return nullptr; }
    virtual WeaponStruct* GetTurretWeapon() const { return nullptr; }
    virtual WeaponStruct* GetWeapon(int weapon_index) const { return nullptr; }
    virtual bool hasTurret() const { return false; }
    virtual bool canOccupyFire() const { return false; }
    virtual int getOccupyRangeBonus() const { return 0; }
    virtual int getOccupantCount() const { return 0; }
    virtual void OnFinishRepair() {}

    virtual void UpdateCloak(bool unknown = true);
    virtual void CreateGap();
    virtual void DestroyGap();
    virtual void onBridgeRepair() {}
    virtual void Sensed() {}
    virtual void Reload();
    virtual void onReloadComplete() {}
    virtual CoordStruct* GetTargetCoords(CoordStruct* pCrd) const { return nullptr; }
    virtual bool IsNotWarpingIn() const { return false; }
    virtual bool canChronoShift(uint32_t dwUnk) const { return false; }
    virtual void DrawActionLines(bool force, uint32_t dwUnk2) {}
    virtual uint32_t GetDisguiseFlags(uint32_t existingFlags) const { return 0; }
    virtual bool isClearlyVisibleTo(HouseClass* house) const { return false; }
    virtual void drawSelectionBox(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5,
        uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10) {}
    virtual void onSelect(uint32_t a, uint32_t b) {}
    virtual void DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const {}
    virtual void DrawPipScalePips(Point2D* pLocation, Point2D* pOriginalLocation, RectangleStruct* pBounds) const {}
    virtual void DrawVeterancyPips(Point2D* pLocation, RectangleStruct* pBounds) const {}
    virtual void DrawExtraInfo(Point2D const& location, Point2D const& originalLocation, RectangleStruct const& bounds) const {}
    virtual void Uncloak(bool play_sound);
    virtual void Cloak(bool play_sound);
    virtual uint32_t getSight(uint32_t dwUnk) const { return 0; }
    virtual void UpdateRefinerySmokeSystems() {}
    virtual uint32_t DisguiseAs(AbstractClass* pTarget) { return 0; }
    virtual void ClearDisguise() {}
    virtual bool IsItTimeForIdleActionYet() const { return false; }
    virtual bool UpdateIdleAction() { return false; }
    virtual void onDamage(uint32_t dwUnk) {}
    virtual void SetDestination(AbstractClass* dest, bool unknown);
    virtual bool canRecruit(uint32_t dwUnk, uint32_t dwUnk2) { return false; }
    virtual void UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
    virtual void onPlacement(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {}
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) = 0;
    virtual void RadarTrackingStart();
    virtual void RadarTrackingStop();
    virtual void RadarTrackingFlash();
    virtual void RadarTrackingUpdate(bool unknown);
    virtual void onRadarEvent(uint32_t a) {}
    virtual void onSpawn() {}
    virtual bool canSpawn() const { return false; }
    virtual bool isSpawning() const { return false; }
    virtual int getSpawnCount() const { return 0; }
    virtual CoordStruct* getSpawnCoords(CoordStruct* out) { return nullptr; }
    virtual uint32_t processSpawn() { return 0; }
    virtual bool canAttackOnTheMove() const { return false; }
    virtual bool canTarget() const { return false; }
    virtual bool selectTarget() { return false; }
    virtual void onTargetChange() {}
    virtual bool canFire() { return false; }

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int ApplyIronCurtain() { return 0; }
    virtual int ReturnToBase() { return 0; }
    virtual int ReturnToBaseAndReload() { return 0; }
    virtual int ScatterFromThreat() { return 0; }
    virtual int ExecuteMissionCommand() { return 0; }
    virtual int FindNearbyBuildCell() { return -1; }
    virtual int FindClosestPlacementCell() { return -1; }
    virtual int GetTurretFacing() const { return 0; }
    virtual void ComputeTeamAttackPriority() {}
    virtual int GetAutoFireDirection() const { return 0; }
    virtual int sub_41B7D0() { return 0; }
    virtual bool HasOnlyOneGarrisonSlot() const { return false; }
    virtual int sub_41B840() { return 0; }
    virtual int sub_41B860() { return 0; }
    virtual int sub_41B9E0() { return 0; }
    virtual bool CreateWarheadDamageEffect() { return false; }
    virtual void sub_41BEF0() {}
    virtual void vt_entry_428() {}
    virtual int vt_entry_434() { return 0; }
    virtual int GetBodyFacing() const { return 0; }
    virtual int sub_41C640() { return 0; }
    virtual int sub_41C650() { return 0; }
    virtual int sub_41C660() { return 0; }
    virtual int sub_41C670() { return 0; }
    virtual int sub_41C680() { return 0; }
    virtual int sub_41C690() { return 0; }
    virtual int ApplyDamageEffects() { return 0; }
    virtual int sub_5439080() { return 0; }
    virtual int RemoveFromDynamicVector() { return 0; }
    virtual void ComputeTargetAngle() {}
    virtual int StartOrResumeProduction() { return 0; }
    virtual int GetTurretScreenPos() const { return 0; }
    virtual void ProcessMissionDeploy() {}
    virtual int EvacuateFootprintCells() { return 0; }
    virtual int MissionStubReturnZero4() { return 0; }
    virtual bool StubReturnFalse2() { return false; }
    virtual int sub_546B270() { return 0; }
    virtual int sub_54722D0() { return 0; }
    virtual int IndexOf() { return 0; }
    virtual int CalcFacingFromMatrix() const { return 0; }
    virtual void CreateTrailParticle() {}
    virtual int sub_4C2BD0() { return 0; }
    virtual int UpdateThunk() { return 0; }
    virtual int GetData() const { return 0; }
    virtual int sub_54A50F0() { return 0; }
    virtual int CreatePlanningNode() { return 0; }
    virtual int GetBuildCost() const { return 0; }
    virtual int CheckState1() const { return false; }
    virtual int CheckState2() const { return false; }
    virtual int StubReturn450() { return 0; }
    virtual void vt_entry_448() {}
    virtual int sub_54D28C0() { return 0; }
    virtual int GetTypeFlag() const { return 0; }
    virtual int sub_5505180() { return 0; }
    virtual int FindClosestBuilding() { return -1; }
    virtual int FindBestMatch() { return -1; }
    virtual int FindClosestInfantry() { return -1; }
    virtual int FindClosestUnit() { return -1; }
    virtual int FindBestMovementDirection() { return -1; }
    virtual int vt_entry_4A8() { return 0; }
    virtual int vt_entry_4AC() { return 0; }
    virtual int vt_entry_4B0() { return 0; }
    virtual int vt_entry_4B4() { return 0; }
    virtual int vt_entry_4B8() { return 0; }
    virtual int vt_entry_4C4() { return 0; }
    virtual int vt_entry_4C8() { return 0; }
    virtual int vt_entry_4D0() { return 0; }
    virtual int GetAnimationValue() const { return 0; }
    virtual int FindDeployDestination() { return -1; }
    virtual int sub_550D9C0() { return 0; }
    virtual int sub_550D9D0() { return 0; }
    virtual int MapHouseRelationIndex() { return 0; }
    virtual int GetDamageMultiplier() const { return 0; }
    virtual int ProcessTarget() { return 0; }
    virtual int sub_55224F0() { return 0; }
    virtual int GetDeployCoords() { return 0; }
    virtual int CanBePermaMC() const { return false; }
    virtual int GarrisonBuilding() { return 0; }
    virtual int IsMission27to30() const { return false; }
    virtual int HandleSpecialAction() { return 0; }
    virtual int IsEnteringOrCapturingStructure() const { return false; }
    virtual void CreateDestructionEffect() {}
    virtual int FindMatchingUnit() { return -1; }
    virtual int ClearArrays() { return 0; }
    virtual int ComputeScanRange() const { return 0; }
    virtual int sub_659470() { return 0; }
    virtual int sub_659490() { return 0; }
    virtual int sub_6594A0() { return 0; }
    virtual int sub_6594C0() { return 0; }
    virtual int sub_6594E0() { return 0; }
    virtual int sub_6594F0() { return 0; }
    virtual int sub_659540() { return 0; }
    virtual int sub_659550() { return 0; }
    virtual int ClearScriptPlanningData() { return 0; }
    virtual int GetTileAnimationData() const { return 0; }
    virtual int MutateAll() { return 0; }
    virtual int RefreshDeployOccupierState() { return 0; }
    virtual int CountPassengers() const { return 0; }
    virtual int GetValue() const { return 0; }
    virtual int ComputeTransform() { return 0; }
    virtual int CanMoveToCell() const { return false; }
    virtual int CanInitiateSell() const { return false; }
    virtual int IsNotAircraftOrBuilding() const { return false; }
    virtual int SelectWeapon() { return 0; }
    virtual int CanTargetHouse() const { return false; }
    virtual int CanSelfRepair() { return false; }
    virtual int Mission_RepairDispatch() { return 0; }
    virtual int PushNearbyUnits() { return 0; }
    virtual int SetFocus() { return 0; }
    virtual int SetHouseFlag() { return 0; }
    virtual int ProcessAIDecision() { return 0; }
    virtual int CheckPlayerOwned() const { return false; }
    virtual int UpdateProdWithSound() { return 0; }
    virtual int HasActiveParam() const { return false; }
    virtual int HasOnlyOneGarrisonSlot2() const { return false; }
    virtual int FindLowestDamage() { return -1; }
    virtual int ProcessCapture() { return 0; }
    virtual int GetRangeModifier() const { return 0; }
    virtual int ShouldScanArea() const { return false; }
    virtual int IsCloseEnoughToBuilding() const { return false; }
    virtual int IsCellPassableFor() const { return false; }
    virtual int IsPlayerCellPassable() const { return false; }
    virtual int SetMoveDestination() { return 0; }
    virtual int GetPrimaryTargetOrFallback() const { return 0; }
    virtual int PickAlternateTarget() { return 0; }
    virtual int SelectRandomTarget() { return 0; }
    virtual int GetSecondaryTargetOrFallback() const { return 0; }
    virtual int SetPositionAnimated() { return 0; }
    virtual int GetTargetCellCenter() { return 0; }
    virtual int ComputeSpeedFactor() { return 0; }
    virtual int ComputeSpeedFactorEx() { return 0; }
    virtual int CleanupDirection() { return 0; }
    virtual int GetDeployProgressValue() const { return 0; }
    virtual int ComputeAverageValue() const { return 0; }
    virtual int GetGlobalValue() const { return 0; }
    virtual int SetIdleState() { return 0; }
    virtual int ComputeAimVector() { return 0; }
    virtual int RevealAreaConditional() { return 0; }
    virtual int GetCellCoordsV2() const { return 0; }
    virtual int Vt46Thunk() { return 0; }
    virtual int RevealAreaSmall() { return 0; }
    virtual int ScanForEnemies() { return 0; }
    virtual int GetTargetCoords() { return 0; }
    virtual int CalcOffsetFacing() const { return 0; }
    virtual int ShouldSelfHealOneStep() const { return false; }
    virtual int ComputeThreatLevel() { return 0; }
    virtual int CanBeTargeted() const { return false; }
    virtual int GetCommandTooltip() const { return 0; }
    virtual int ShouldBeCloaked() const { return false; }
    virtual int ShouldNotBeCloaked() const { return false; }
    virtual int SetTargetIfAllowed() { return 0; }
    virtual int CanReceivePassengers() const { return false; }
    virtual int GetTarget() const { return 0; }
    virtual int GetID() const { return 0; }
    virtual int GetSightRange() const { return 0; }
    virtual int CheckAndFireAtTarget() { return 0; }
    virtual int GattlingRateUp_GattlingRateDownReset() { return 0; }
    virtual int GattlingValueRateDown_GattlingRateDownDelay() { return 0; }
    virtual int SetMember81() { return 0; }
    virtual int Deactivate() { return 0; }
    virtual int Activate() { return 0; }
    virtual int ActivateEffect() { return 0; }
    virtual int IronCurtain() { return 0; }
    virtual int InvulnerabilityIntensity_SetContext() { return 0; }
    virtual int ResetTimer() { return 0; }
    virtual int CalcAnimDelay() const { return 0; }
    virtual int StepAnimFrame() { return 0; }
    virtual int BeginFiringSequence() { return 0; }
    virtual int CompleteFactoryProduction() { return 0; }
    virtual int IsTimerExpired() const { return false; }
    virtual int GetAudioEntry() const { return 0; }
    virtual int GetTertiaryTargetOrFallback() const { return 0; }
    virtual int VoiceAttack() { return 0; }
    virtual int ResponseMove_Pickup() { return 0; }
    virtual int Vt170() { return 0; }
    virtual int CanAttack() const { return false; }
    virtual int IsDeadOrInactive() const { return false; }
    virtual int CalculateROF() { return 0; }
    virtual int GetAmmoCount() const { return 0; }
    virtual int GetAmmoCount_0() const { return 0; }
    virtual int SelectAttackWeapon() { return 0; }
    virtual int GetAverageDamageScore() const { return 0; }
    virtual int ProcessSpecialUnitDeployCrush() { return 0; }
    virtual int FireWeaponBurst() { return 0; }
    virtual int GetWeaponRange(int weapon_index) const { return 0; }
    virtual int FireWeapon() { return 0; }
    virtual int CreateFireEffect() { return 0; }
    virtual int CreateFireBeamEffect() { return 0; }
    virtual int CreateFiringRadarBlip() { return 0; }
    virtual int CreateRadarBlip() { return 0; }
    virtual int GetFiringAngle() const { return 0; }
    virtual int AssignTarget_SyncLog() { return 0; }
    virtual int ProcessDeploymentState() { return 0; }
    virtual int ComputeAudioFalloffDamage() { return 0; }
    virtual int ComputeCombatDamage() { return 0; }
    virtual int CheckFireCooldown() const { return false; }
    virtual int CanDamageTarget() const { return false; }
    virtual int COMStub_Return0_298() { return 0; }
    virtual int HasPassengers() const { return false; }
    virtual int COMStub_Return0_307() { return 0; }
    virtual int sub_70F040() { return 0; }
    virtual int ProcessCellClearance() { return 0; }
    virtual int GetTypeVt40() const { return 0; }
    virtual int GetMaxSpeed() const { return 0; }
    virtual int DrainAmmo() { return 0; }
    virtual int EjectPassengers() { return 0; }
    virtual int RadarUpdateOn() { return 0; }
    virtual int RadarUpdateOff() { return 0; }
    virtual int RevealOwnCell() { return 0; }
    virtual int ComputeDamage() { return 0; }
    virtual int GetCostMultiplier() const { return 0; }
    virtual int IsInRange() const { return false; }
    virtual int GetCrew() { return 0; }
    virtual int GetCrew_0() { return 0; }
    virtual int GetCrewCount() { return 0; }
    virtual int CheckCellPassable() const { return false; }
    virtual int CheckCellPassable2() const { return false; }
    virtual int CheckCellPassable3() const { return false; }
    virtual int ValidateTarget() const { return false; }
    virtual int GetBridgeDamageMult() const { return 0; }
    virtual int CheckAndFireAtTarget2() { return 0; }
    virtual int EvaluateTarget() { return 0; }
    virtual int SelectAutoTarget_Start_AU() { return 0; }
    virtual int CheckTargetLOS() const { return false; }
    virtual int CheckTargetCell() const { return false; }
    virtual int CheckPlacementTileMatch() const { return false; }
    virtual int ComputeScanDistance() const { return 0; }
    virtual int ComputeTotalPowerDrain() { return 0; }
    virtual int EvaluateBuildingTarget() { return 0; }
    virtual int GetBuildAnim() const { return 0; }
    virtual int IsNotBusy() const { return false; }
    virtual int EvaluateMission() { return 0; }
    virtual int GetThreatValue() const { return 0; }
    virtual int GetThreatValue_0() const { return 0; }
    virtual int ProcessBorderTower() { return 0; }
    virtual int HandleCursor() { return 0; }
    virtual int HandleCursorClick() { return 0; }
    virtual int ScanAdjacentCells2() { return 0; }
    virtual int ScanNeighborCells() { return 0; }
    virtual int IsValidBuildingPlacement() { return false; }
    virtual int StartEffectAudio() { return 0; }
    virtual int TransitionEffectState() { return 0; }
    virtual int Vt279Thunk0() { return 0; }
    virtual int UpdatePowerDrain() { return 0; }
    virtual int UpdatePowered() { return 0; }
    virtual int UpdateState() { return 0; }
    virtual int UpdateUnitAnimation() { return 0; }
    virtual int GetInfantryCursorAction() const { return 0; }
    virtual int GetThreatValueEx() const { return 0; }
    virtual int ComputeSlopeDifference() { return 0; }
    virtual int ComputeSlopePenalty() { return 0; }
    virtual int IsOwnedByHuman() const { return false; }
    virtual int IsCapturableByPlayer() const { return false; }
    virtual int IsC4AnimationActive() const { return false; }
    virtual int CreateDeathAnim() { return 0; }
    virtual int DispatchPlayerInput() { return 0; }
    virtual int Deploy() { return 0; }
    virtual int DeployIntoBuilding() { return 0; }
    virtual int SpawnInfantryFromBuilding() { return 0; }
    virtual int CleanupDeploy() { return 0; }
    virtual int ClearAllTargets() { return 0; }
    virtual int SelectAITarget() { return 0; }
    virtual int ReturnCapturedFlag() { return 0; }
    virtual int AreBuildingFlagsClear() const { return false; }
    virtual int MarkCellImpassable() { return 0; }
    virtual int ClearCellImpassable() { return 0; }
    virtual int CaptureTurret() { return 0; }
    virtual int TransferSlavedUnit() { return 0; }
    virtual int TransferTurret() { return 0; }
    virtual int ApplyObjectEffect() { return 0; }
    virtual int IsGuardingTarget() const { return false; }
    virtual int ProcessUnitSelfDestruct() { return 0; }
    virtual int NotifyTeamOnDestruction() { return 0; }
    virtual int RespondToDestruction() { return 0; }
    virtual int GetWaypointCoords() const { return 0; }
    virtual int Create() { return 0; }
    virtual int CopyStateFrom() { return 0; }
    virtual int ScalarDtor() { return 0; }
    virtual int EnteredOpenTopped() { return 0; }
    virtual int MarkPassengersAsExited() { return 0; }
    virtual int ExitedOpenTopped() { return 0; }
    virtual int GetMember388() const { return 0; }
    virtual int GetBuildCost2() const { return 0; }
    virtual int FindBestMatch2() { return -1; }
    virtual int IsWaypointHidden() const { return false; }
    virtual int LinkToBridge() { return 0; }
    virtual int ResetDamageAccumulator() { return 0; }
    virtual int UpdateBodyTilt() { return 0; }
    virtual int CheckCliffTransition() const { return false; }
    virtual int OnEnterCell() { return 0; }
    virtual int sub_570DC50() { return 0; }
    virtual int OwnerHasPower() const { return false; }
    virtual int sub_570DCE0() { return 0; }
    virtual int sub_570DCF0() { return 0; }
    virtual int GetPoweredWeaponIndex() const { return 0; }
    virtual int GetVt252Byte() const { return 0; }
    virtual int vt_entry_3E8() { return 0; }
    virtual int SetSpread() { return 0; }
    virtual int DecCounter() { return 0; }
    virtual int PlaceAtCell() { return 0; }
    virtual int SelectVocOrSfx() { return 0; }
    virtual int Update2() { return 0; }
    virtual int GetAnimationFlags() const { return 0; }
    virtual int GetTargetSpeedMultiplier() const { return 0; }
    virtual int ProcessEnterTransport() { return 0; }
    virtual int IsCloseEnoughToBuilding2() const { return false; }
    virtual int IsDeployed() const { return false; }
    virtual int CheckAdjacencyFlags() const { return false; }
    virtual int IsProductionChainActive() const { return false; }
    virtual int HasDeployFlags() const { return false; }
    virtual int RemoveBuildingFromScripts() { return 0; }
    virtual int FinishDeploy() { return 0; }
    virtual int ValidateMoveType() { return 0; }
    virtual int ComputeSlopePenalty2() { return 0; }
    virtual int sub_740B10() { return 0; }
    virtual int CheckRepairNeeded() const { return false; }
    virtual int EnterRepairBuilding() { return 0; }
    virtual int CheckUnitFireConstraints() const { return false; }
    virtual int sub_741490() { return 0; }
    virtual int sub_7441B0() { return 0; }
    virtual int sub_744180() { return 0; }
    virtual int sub_744210() { return 0; }
    virtual int sub_744270() { return 0; }
    virtual int sub_744720() { return 0; }
    virtual int sub_7440B0() { return 0; }
    virtual int sub_744100() { return 0; }
    virtual int sub_743190() { return 0; }
    virtual int sub_746400() { return 0; }
    virtual int sub_746420() { return 0; }
    virtual int sub_7464E0() { return 0; }
    virtual int sub_7465B0() { return 0; }
    virtual int sub_7465F0() { return 0; }
    virtual int sub_7463A0() { return 0; }
    virtual int sub_746670() { return 0; }
    virtual int sub_746720() { return 0; }
    virtual int sub_746750() { return 0; }
    virtual int sub_746B20() { return 0; }
    virtual int sub_746C90() { return 0; }
    virtual int sub_746CD0() { return 0; }
    virtual int sub_746D00() { return 0; }
    virtual int sub_746D60() { return 0; }
    virtual int sub_746DB0() { return 0; }
    virtual int sub_746E30() { return 0; }
    virtual int sub_746EA0() { return 0; }
    virtual int sub_746100() { return 0; }
    virtual int sub_746F80() { return 0; }
    virtual int sub_70F850() { return 0; }
    virtual int sub_70FB50() { return 0; }
    virtual int sub_70FC90() { return 0; }
    virtual int sub_70FD70() { return 0; }
    virtual int sub_70FEE0() { return 0; }
    virtual int sub_710000() { return 0; }
    virtual int sub_710470() { return 0; }
    virtual int sub_7104A0() { return 0; }
    virtual int sub_7104C0() { return 0; }
    virtual int sub_7106E0() { return 0; }
    virtual int sub_710F70() { return 0; }
    virtual int sub_711E00() { return 0; }
    virtual int sub_711EB0() { return 0; }
    virtual int sub_73EFC0() { return 0; }
    virtual int sub_7393C0() { return 0; }
    virtual int sub_737BA0() { return 0; }
    virtual int sub_738910() { return 0; }
    virtual int sub_732050() { return 0; }
    virtual int sub_732580() { return 0; }
    virtual int sub_731CF0() { return 0; }
    virtual int sub_729AA0() { return 0; }
    virtual int sub_729480() { return 0; }
    virtual int sub_71F010() { return 0; }
    virtual int sub_71A130() { return 0; }
    virtual int CalculateDamage() { return 0; }
    virtual int UpdateBodyTilt2() { return 0; }
    virtual int GattlingRateUp_GattlingRateDownReset2() { return 0; }
    virtual int ApplySplashDamageToNeighbors() { return 0; }
    virtual int ReceiveDamage_Shield() { return 0; }
    virtual int sub_70B1D0() { return 0; }
    virtual int sub_70B280() { return 0; }
    virtual int sub_70B570() { return 0; }
    virtual int sub_70BCB0() { return 0; }
    virtual int sub_70BE80() { return 0; }
    virtual int sub_70D1D0() { return 0; }
    virtual int sub_70D990() { return 0; }
    virtual int sub_70DE70() { return 0; }
    virtual int sub_70DE00() { return 0; }
    virtual int sub_70DD20() { return 0; }
    virtual int sub_70DD50() { return 0; }
    virtual int sub_70DDD0() { return 0; }
    virtual int sub_70DE40() { return 0; }
    virtual int sub_70E120() { return 0; }
    virtual int sub_70E140() { return 0; }
    virtual int sub_70E1A0() { return 0; }
    virtual int sub_70E280() { return 0; }
    virtual int sub_70E2B0() { return 0; }
    virtual int sub_70E300() { return 0; }
    virtual int sub_70E380() { return 0; }
    virtual int sub_70E4B0() { return 0; }
    virtual int sub_70EC0A() { return 0; }
    virtual int sub_70ED10() { return 0; }
    virtual int sub_70ED80() { return 0; }
    virtual int sub_70EE30() { return 0; }
    virtual int sub_70EFD0() { return 0; }
    virtual int sub_70EF00() { return 0; }
    virtual int sub_70F010() { return 0; }
    virtual int sub_70F000() { return 0; }
    virtual int sub_70ECE0() { return 0; }
    virtual int sub_70CCC0() { return 0; }
    virtual int sub_70CC90() { return 0; }
    virtual int sub_70CD10() { return 0; }
    virtual int sub_70D190() { return 0; }
    virtual int sub_70D460() { return 0; }
    virtual int sub_70D590() { return 0; }
    virtual int sub_70D670() { return 0; }
    virtual int sub_70D690() { return 0; }
    virtual int sub_70D8F0() { return 0; }
    virtual int sub_70DD90() { return 0; }
    virtual int sub_70BE50() { return 0; }
    virtual int sub_70C620() { return 0; }
    virtual int sub_70C610() { return 0; }

    virtual int SelectWeapon(AbstractClass* target) const;
    void SmokeupdateLogic();
    bool CreateUnit();

    int GetIonCannonValue(AIDifficulty difficulty) const { return 0; }

    DirStruct getFacing() const { DirStruct ret; getFacing(&ret); return ret; }
    DirStruct GetRealFacing() const { DirStruct ret; GetRealFacing(&ret); return ret; }

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
    TechnoClass() noexcept;
};

} // namespace game
} // namespace ra2
