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

    virtual void Destroyed(ObjectClass* killer) override;  // 0x4d98c0
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) override;

    virtual void ReceiveGunner(FootClass* gunner);
    virtual void RemoveGunner(FootClass* gunner);
    virtual bool IsLeavingMap() const;
    virtual bool canMove() const;
    virtual bool onProductionComplete() const;
    virtual void onCellEntry(CellStruct* cell);
    virtual void processSuperWeapon(CellStruct* cell);
    virtual CoordStruct* getMoveCoords(CoordStruct* out);
    virtual void onMoveStart();
    virtual bool canStop();
    virtual bool MoveTo(CoordStruct* coords);
    virtual bool StopMoving();
    virtual bool canRecruitTeamMember();
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
    virtual void onDrawComplete();
    virtual void Panic();
    virtual void UnPanic();
    virtual void PlayIdleAnim(int idle_anim_number);
    virtual uint32_t getMovementMode();
    virtual uint32_t getPathDistance(uint32_t a, uint32_t b, uint32_t c) const;
    virtual uint32_t getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const;
    virtual uint32_t isAreaClear(uint32_t a, uint32_t b, uint32_t c) const;
    virtual void onAreaEntry(uint32_t a, uint32_t b);
    virtual int GetCurrentSpeed() const;
    virtual uint32_t getWaypointData(uint32_t a);
    virtual void onWaypointReached(uint32_t a);
    virtual void SetSpeedPercentage(double percentage);
    virtual void onPathComplete();
    virtual void onMovementDone();
    virtual bool canEnterCell(uint32_t a);

    bool MovementAI();

    int Mission_Move() override;
    int Mission_Attack() override;
    int Mission_Guard() override;
    int Mission_Hunt() override;

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int MissionMoveCarryallLand();
    virtual void vt_entry_4F8();
    virtual int Destru_vt323();
    virtual void vt_entry_514();
    virtual bool StubReturnFalse();
    virtual void StubReturnVoid();
    virtual void vt_entry_534();
    virtual void vt_entry_540();
    virtual int GetTurretAngle() const;
    virtual void ProcessDemolish();
    virtual void UpdateSidebar();
    virtual void ProcessPrimarySelect();
    virtual int StubReturn0();
    virtual void ScanCircleForUnits();
    virtual void ScanCircleForUnits2();
    virtual int GetCapacity() const;
    virtual int ResizeOccupiedCellList();
    virtual int sub_4734B0();
    virtual int sub_487150();
    virtual int sub_487160();
    virtual int FindPathWithRetry();  // 0x42c900
    virtual void ProcessDeployMission();
    virtual void UpdateDeployMovement();
    virtual int PostLoadInit();
    virtual int Destru_vt337();
    virtual void UpdateReveal();
    virtual bool CheckTileSeed() const;
    virtual int MovementStep();
    virtual int Destru_vt139();
    virtual bool CheckVoiceResponse() const;
    virtual void ProcessMissionVoice();
    virtual int FindMovePosition();
    virtual int PlayCOM_audio();
    virtual int Destru_vt319();
    virtual int EnterAttackState();
    virtual void CalculateApproachPath();
    virtual int FindAITarget();
    virtual int DispatchInput();
    virtual void ProcessDeploy();
    virtual int ValidateMove();
    virtual int ValidatePlacement();
    virtual int GetCoords() const;
    virtual void UpdateAI();
    virtual int OverrideMission_SyncLog();
    virtual int ConditionalAction();
    virtual int MissionDispatch();
    virtual void ProcessTeamAction();
    virtual int AssignDestination();
    virtual int DispatchSell();
    virtual int SelectAutoTarget_Cloaked();
    virtual int HandleTargetDestroyed();
    virtual void vt_entry_524();
    virtual int Destru_vt107();
    virtual int vt_entry_4F0();
    virtual void ClearSomeVector();
    virtual bool CanBeControlled() const;
    virtual bool CanBeRecruited() const;
    virtual void ClearSomeVector2();
    virtual void ProcessMovement();
    virtual bool CheckTargetValidity() const;
    virtual int UpdateState();
    virtual int GetAttackSpeed() const;
    virtual int Destru_vt30();
    virtual void vt_entry_548();
    virtual void vt_entry_54C();
    virtual int BeginPowerUpdate();
    virtual bool CanBeHunted() const;
    virtual int LiberateMember();
    virtual int vt_entry_4E0();
    virtual int vt_entry_4F4();
    virtual int CheckTargetCell() const;
    virtual int Destru_vt311();
    virtual void SetBuildingType();
    virtual int MoveToTiberium();
    virtual int FindMoveTarget();
    virtual int MoveToWeed();
    virtual bool CheckHeightDiff() const;
    virtual int ValidateTargetCell();
    virtual int HandleCursorWithCheck();
    virtual void ProcessMissionState();
    virtual int ValidateFoundation();
    virtual int PreDestroy();
    virtual int OnCompleteAction();
    virtual int RemovePassenger();
    virtual int PopAndProcess();
    virtual bool IsTimerActive() const;
    virtual bool IsTargetInRange() const;
    virtual int CheckCellPassable() const;
    virtual bool DeployAction();
    virtual void UpdateTeamAI();
    virtual int vt_entry_530();
    virtual void ClearPathIndex();
    virtual int MissionSell_Dispatch();
    virtual void UpdateAttackMove_SelectNewTarget();
    virtual void ScanAdjacentCells();
    virtual int Destru_vt322();
    virtual bool IsNotAttackAndPlayer() const;
    virtual int Jumpjet_OccupyCell();
    virtual int Destru_vt08();
    virtual int RemoveFromPointerArray();
    virtual int sub_550DAA0();
    virtual int FindNearestApproachableCell();
    virtual bool CreateWakes();
    virtual int sub_56E52F0();
    virtual int LinkToTransporter();
    virtual int GetGameSpeedFromSession() const;
    virtual int CompleteProduction();
    virtual void UpdateLocomotion();
    virtual int ProcessEnterTransport();
    virtual void SetThreatBounds();
    virtual int ApplyThreatBounds();
    virtual int sub_570F7E0();
    virtual int sub_70FEB0();
    virtual void UpdatePassengerCoords();
    virtual void Cleanup();
    virtual int RespondToDestruction();
    virtual int sub_5746D80();
    virtual bool CheckAccelLimit() const;
    virtual int GetField() const;
    virtual void SetField();

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
