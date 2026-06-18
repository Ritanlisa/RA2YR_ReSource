#pragma once

#include "techno.hpp"

#include <unknwn.h>

namespace ra2 {
namespace game {

struct Matrix3DStruct;
struct SHPStruct;
struct VoxelStruct;
struct SomeVoxelCache;
class ILocomotion;
class LocomotionClass;
class ParasiteClass;
class TeamClass;

struct YRComPtr {
    ILocomotion* ptr;
};

class FootClass : public TechnoClass {
public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x4);

    virtual ~FootClass() = default;

    virtual void Destroyed(ObjectClass* killer) override;
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) override {}

    virtual void ReceiveGunner(FootClass* gunner) {}
    virtual void RemoveGunner(FootClass* gunner) {}
    virtual bool IsLeavingMap() const { return false; }
    virtual bool canMove() const { return false; }
    virtual bool onProductionComplete() const { return false; }
    virtual void onCellEntry(CellStruct* cell) {}
    virtual void processSuperWeapon(CellStruct* cell) {}
    virtual CoordStruct* getMoveCoords(CoordStruct* out) { return nullptr; }
    virtual void onMoveStart() {}
    virtual bool canStop() { return false; }
    virtual bool MoveTo(CoordStruct* coords);
    virtual bool StopMoving();
    virtual bool canRecruitTeamMember() { return false; }
    virtual bool ChronoWarpTo(CoordStruct dest);
    virtual void Draw_A_SHP(
        SHPStruct* shp, int facing_idx, Point2D* coords, RectangleStruct* rect,
        uint32_t a5, uint32_t a6, uint32_t a7, ZGradient gradient,
        uint32_t a9, int extra_light, uint32_t a11, uint32_t a12,
        uint32_t a13, uint32_t a14, uint32_t a15, uint32_t a16) {}
    virtual void Draw_A_VXL(
        VoxelStruct* vxl, int hva_frame_index, int flags, SomeVoxelCache* cache,
        RectangleStruct* rect, Point2D* center_point, Matrix3DStruct* matrix,
        uint32_t a8, uint32_t draw_flags, uint32_t a10) {}
    virtual void onDrawComplete() {}
    virtual void Panic();
    virtual void UnPanic();
    virtual void PlayIdleAnim(int idle_anim_number) {}
    virtual uint32_t getMovementMode() { return 0; }
    virtual uint32_t getPathDistance(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual uint32_t getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const { return 0; }
    virtual uint32_t isAreaClear(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual void onAreaEntry(uint32_t a, uint32_t b) {}
    virtual int GetCurrentSpeed() const;
    virtual uint32_t getWaypointData(uint32_t a) { return 0; }
    virtual void onWaypointReached(uint32_t a) {}
    virtual void SetSpeedPercentage(double percentage);
    virtual void onPathComplete() {}
    virtual void onMovementDone() {}
    virtual bool canEnterCell(uint32_t a) { return false; }

    bool MovementAI();

    int Mission_Move() override;
    int Mission_Attack() override;
    int Mission_Guard() override;
    int Mission_Hunt() override;

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int MissionMoveCarryallLand() { return 0; }
    virtual void vt_entry_4F8() {}
    virtual int Destru_vt323() { return 0; }
    virtual void vt_entry_514() {}
    virtual bool StubReturnFalse() { return false; }
    virtual void StubReturnVoid() {}
    virtual void vt_entry_534() {}
    virtual void vt_entry_540() {}
    virtual int GetTurretAngle() const { return 0; }
    virtual void ProcessDemolish() {}
    virtual void UpdateSidebar() {}
    virtual void ProcessPrimarySelect() {}
    virtual int StubReturn0() { return 0; }
    virtual void ScanCircleForUnits() {}
    virtual void ScanCircleForUnits2() {}
    virtual int GetCapacity() const { return 0; }
    virtual int ResizeOccupiedCellList() { return 0; }
    virtual int sub_4734B0() { return 0; }
    virtual int sub_487150() { return 0; }
    virtual int sub_487160() { return 0; }
    virtual int FindPathWithRetry() { return -1; }
    virtual void ProcessDeployMission() {}
    virtual void UpdateDeployMovement() {}
    virtual int PostLoadInit() { return 0; }
    virtual int Destru_vt337() { return 0; }
    virtual void UpdateReveal() {}
    virtual bool CheckTileSeed() const { return false; }
    virtual int MovementStep() { return 0; }
    virtual int Destru_vt139() { return 0; }
    virtual bool CheckVoiceResponse() const { return false; }
    virtual void ProcessMissionVoice() {}
    virtual int FindMovePosition() { return -1; }
    virtual int PlayCOM_audio() { return 0; }
    virtual int Destru_vt319() { return 0; }
    virtual int EnterAttackState() { return 0; }
    virtual void CalculateApproachPath() {}
    virtual int FindAITarget() { return -1; }
    virtual int DispatchInput() { return 0; }
    virtual void ProcessDeploy() {}
    virtual int ValidateMove() { return 0; }
    virtual int ValidatePlacement() { return 0; }
    virtual int GetCoords() const { return 0; }
    virtual void UpdateAI() {}
    virtual int OverrideMission_SyncLog() { return 0; }
    virtual int ConditionalAction() { return 0; }
    virtual int MissionDispatch() { return 0; }
    virtual void ProcessTeamAction() {}
    virtual int AssignDestination() { return 0; }
    virtual int DispatchSell() { return 0; }
    virtual int SelectAutoTarget_Cloaked() { return 0; }
    virtual int HandleTargetDestroyed() { return 0; }
    virtual void vt_entry_524() {}
    virtual int Destru_vt107() { return 0; }
    virtual int vt_entry_4F0() { return 0; }
    virtual void ClearSomeVector() {}
    virtual bool CanBeControlled() const { return false; }
    virtual bool CanBeRecruited() const { return false; }
    virtual void ClearSomeVector2() {}
    virtual void ProcessMovement() {}
    virtual bool CheckTargetValidity() const { return false; }
    virtual int UpdateState() { return 0; }
    virtual int GetAttackSpeed() const { return 0; }
    virtual int Destru_vt30() { return 0; }
    virtual void vt_entry_548() {}
    virtual void vt_entry_54C() {}
    virtual int BeginPowerUpdate() { return 0; }
    virtual bool CanBeHunted() const { return false; }
    virtual int LiberateMember() { return 0; }
    virtual int vt_entry_4E0() { return 0; }
    virtual int vt_entry_4F4() { return 0; }
    virtual int CheckTargetCell() const { return 0; }
    virtual int Destru_vt311() { return 0; }
    virtual void SetBuildingType() {}
    virtual int MoveToTiberium() { return 0; }
    virtual int FindMoveTarget() { return -1; }
    virtual int MoveToWeed() { return 0; }
    virtual bool CheckHeightDiff() const { return false; }
    virtual int ValidateTargetCell() { return 0; }
    virtual int HandleCursorWithCheck() { return 0; }
    virtual void ProcessMissionState() {}
    virtual int ValidateFoundation() { return 0; }
    virtual int PreDestroy() { return 0; }
    virtual int OnCompleteAction() { return 0; }
    virtual int RemovePassenger() { return 0; }
    virtual int PopAndProcess() { return 0; }
    virtual bool IsTimerActive() const { return false; }
    virtual bool IsTargetInRange() const { return false; }
    virtual int CheckCellPassable() const { return 0; }
    virtual bool DeployAction() { return false; }
    virtual void UpdateTeamAI() {}
    virtual int vt_entry_530() { return 0; }
    virtual void ClearPathIndex() {}
    virtual int MissionSell_Dispatch() { return 0; }
    virtual void UpdateAttackMove_SelectNewTarget() {}
    virtual void ScanAdjacentCells() {}
    virtual int Destru_vt322() { return 0; }
    virtual bool IsNotAttackAndPlayer() const { return false; }
    virtual int Jumpjet_OccupyCell() { return 0; }
    virtual int Destru_vt08() { return 0; }
    virtual int RemoveFromPointerArray() { return 0; }
    virtual int sub_550DAA0() { return 0; }
    virtual int FindNearestApproachableCell() { return -1; }
    virtual bool CreateWakes() { return false; }
    virtual int sub_56E52F0() { return 0; }
    virtual int LinkToTransporter() { return 0; }
    virtual int GetGameSpeedFromSession() const { return 0; }
    virtual int CompleteProduction() { return 0; }
    virtual void UpdateLocomotion() {}
    virtual int ProcessEnterTransport() { return 0; }
    virtual void SetThreatBounds() {}
    virtual int ApplyThreatBounds() { return 0; }
    virtual int sub_570F7E0() { return 0; }
    virtual int sub_70FEB0() { return 0; }
    virtual void UpdatePassengerCoords() {}
    virtual void Cleanup() {}
    virtual int RespondToDestruction() { return 0; }
    virtual int sub_5746D80() { return 0; }
    virtual bool CheckAccelLimit() const { return false; }
    virtual int GetField() const { return 0; }
    virtual void SetField() {}

protected:
    void EmitMovementSmoke();
    void UpdateMovementAmbiguity();
    void UpdateMovementSpeed();
    void HandleMovementSoundupdateLogic();
    void HandleLocomotionupdateLogic();

    // ---- member variables ----

    int32_t            planningPathIdx;
    int16_t            unknownShort524;
    int16_t            unknownShort526;
    int16_t            unknownShort528;
    int16_t            FootClass_field_short_52A;
    uint32_t           FootClass_field_52C;
    uint32_t           unknown530;
    uint32_t           unknown534;
    uint32_t           unknown538;
    bool               FootClass_field_bool_53C;
    uint8_t            m_padding_53D[3];
    uint32_t           unknown540;
    AudioController    audioController7;
    CellStruct         currentMapCoords;
    CellStruct         lastMapCoords;
    CellStruct         lastJumpjetMapCoords;
    CellStruct         currentJumpjetMapCoords;
    CoordStruct        unknownCoords568;
    uint32_t           unused574;
    double             currentSpeed_percentage;
    double             currentSpeed_multiplier;
    DynamicVectorClass<AbstractClass*> unknownAbstractArray588;
    uint32_t           FootClass_field_5A0;
    AbstractClass*     movementDestination;
    AbstractClass*     lastDestination;
    DynamicVectorClass<AbstractClass*> FootClass_field_abstract_array_5AC;
    int32_t            FootClass_field_int_5C4;
    uint32_t           FootClass_field_5C8;
    uint32_t           FootClass_field_5CC;
    uint8_t            FootClass_field_5D0;
    bool               FootClass_field_bool_5D1;
    uint8_t            m_padding_5D2[2];
    TeamClass*         team;
    FootClass*         nextTeamMember;
    uint32_t           FootClass_field_5DC;
    int32_t            pathDirections[24];
    TimerStruct        pathDelayTimer;
    int32_t            FootClass_field_int_64C;
    TimerStruct        FootClass_field_timer_650;
    TimerStruct        sightTimer;
    TimerStruct        blockagePathTimer;
    YRComPtr           locomotor;
    CoordStruct        unknownPoint3d678;
    signed char        tubeIndex;
    bool               unknownBool685;
    signed char        waypointIndex;
    bool               unknownBool687;
    bool               unknownBool688;
    bool               isTeamLeader;
    bool               shouldScanForTarget;
    bool               FootClass_field_bool_68B;
    bool               FootClass_field_bool_68C;
    bool               FootClass_field_bool_68D;
    bool               FootClass_field_bool_68E;
    bool               shouldEnterAbsorber;
    bool               shouldEnterOccupiable;
    bool               shouldGarrisonStructure;
    FootClass*         parasiteEatingMe;
    uint32_t           unknown698;
    ParasiteClass*     parasiteImUsing;
    TimerStruct        paralysisTimer;
    bool               FootClass_field_bool_6AC;
    bool               isAttackedByLocomotor;
    bool               isLetGoByLocomotor;
    bool               FootClass_field_bool_6AF;
    bool               FootClass_field_bool_6B0;
    bool               FootClass_field_bool_6B1;
    bool               FootClass_field_bool_6B2;
    bool               FootClass_field_bool_6B3;
    bool               FootClass_field_bool_6B4;
    bool               FootClass_field_bool_6B5;
    bool               frozenStill;
    bool               FootClass_field_bool_6B7;
    bool               FootClass_field_bool_6B8;
    uint8_t            m_padding_6B9[3];
    uint32_t           m_unused_6BC;

protected:
    FootClass() noexcept;
};

} // namespace game
} // namespace ra2
