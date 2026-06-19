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

    virtual ~FootClass() = default;  // 0x4d3590

    virtual void Destroyed(ObjectClass* killer) override;  // 0x4D98C0
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
    virtual void PlayIdleAnim(int idle_anim_number);  // 0x51daf0
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

    bool MovementAI();  // 0x4da530

    int Mission_Move() override;
    int Mission_Attack() override;  // 0x417fe0
    int Mission_Guard() override;  // 0x459e70
    int Mission_Hunt() override;

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int MissionMoveCarryallLand();  // 0x416af0
    virtual void vt_entry_4F8();  // 0x41c080
    virtual int Destru_vt323();  // 0x41c090
    virtual void vt_entry_514();  // 0x41c0f0
    virtual bool StubReturnFalse();
    virtual void StubReturnVoid();
    virtual void vt_entry_534();  // 0x41c130
    virtual void vt_entry_540();  // 0x41c140
    virtual int GetTurretAngle() const;  // 0x43ed40
    virtual void ProcessDemolish();  // 0x4415f0
    virtual void UpdateSidebar();  // 0x4456d0
    virtual void ProcessPrimarySelect();  // 0x448160
    virtual int StubReturn0();  // 0x452250
    virtual void ScanCircleForUnits();  // 0x4556d0
    virtual void ScanCircleForUnits2();  // 0x455820
    virtual int GetCapacity() const;
    virtual int ResizeOccupiedCellList();  // 0x45a560
    virtual int sub_4734B0();
    virtual int sub_487150();
    virtual int sub_487160();
    virtual int FindPathWithRetry();  // 0x42C900
    virtual void ProcessDeployMission();  // 0x4cd2a0
    virtual void UpdateDeployMovement();  // 0x4ce680
    virtual int PostLoadInit();  // 0x4d3540
    virtual int Destru_vt337();  // 0x4d3710
    virtual void UpdateReveal();
    virtual bool CheckTileSeed() const;  // 0x4d3810
    virtual int MovementStep();  // 0x4d3920
    virtual int Destru_vt139();  // 0x4d4200
    virtual bool CheckVoiceResponse() const;  // 0x4d4b20
    virtual void ProcessMissionVoice();  // 0x4d4cb0
    virtual int FindMovePosition();  // 0x4d5070
    virtual int PlayCOM_audio();  // 0x4d55c0
    virtual int Destru_vt319();  // 0x4d55f0
    virtual int EnterAttackState();  // 0x4d5660
    virtual void CalculateApproachPath();
    virtual int FindAITarget();  // 0x4d6aa0
    virtual int DispatchInput();  // 0x4d7170
    virtual void ProcessDeploy();
    virtual int ValidateMove();
    virtual int ValidatePlacement();
    virtual int GetCoords() const;
    virtual void UpdateAI();  // 0x4d85d0
    virtual int OverrideMission_SyncLog();
    virtual int ConditionalAction();  // 0x4d8f80
    virtual int MissionDispatch();
    virtual void ProcessTeamAction();  // 0x4d9290
    virtual int AssignDestination();  // 0x4d94b0
    virtual int DispatchSell();  // 0x4d9720
    virtual int SelectAutoTarget_Cloaked();  // 0x4d9920
    virtual int HandleTargetDestroyed();
    virtual void vt_entry_524();  // 0x4d9c00
    virtual int Destru_vt107();  // 0x4d9c10
    virtual int vt_entry_4F0();  // 0x4d9ff0
    virtual void ClearSomeVector();  // 0x4da1c0
    virtual bool CanBeControlled() const;  // 0x4da1d0
    virtual bool CanBeRecruited() const;  // 0x4da230
    virtual void ClearSomeVector2();  // 0x4da2a0
    virtual void ProcessMovement();  // 0x4da2c0
    virtual bool CheckTargetValidity() const;
    virtual int UpdateState();
    virtual int GetAttackSpeed() const;  // 0x4db0a0
    virtual int Destru_vt30();  // 0x4db7e0
    virtual void vt_entry_548();  // 0x4dba30
    virtual void vt_entry_54C();  // 0x4dba40
    virtual int BeginPowerUpdate();  // 0x4dbad0
    virtual bool CanBeHunted() const;  // 0x4dbda0
    virtual int LiberateMember();  // 0x4dbed0
    virtual int vt_entry_4E0();  // 0x4dbfd0
    virtual int vt_entry_4F4();  // 0x4dc030
    virtual int CheckTargetCell() const;
    virtual int Destru_vt311();  // 0x4dc790
    virtual void SetBuildingType();  // 0x4dc810
    virtual int MoveToTiberium();  // 0x4dcfe0
    virtual int FindMoveTarget();
    virtual int MoveToWeed();  // 0x4ddb90
    virtual bool CheckHeightDiff() const;  // 0x4ddc40
    virtual int ValidateTargetCell();  // 0x4ddc60
    virtual int HandleCursorWithCheck();  // 0x4ddde0
    virtual void ProcessMissionState();  // 0x4ddf90
    virtual int ValidateFoundation();
    virtual int PreDestroy();  // 0x4de5d0
    virtual int OnCompleteAction();  // 0x4de630
    virtual int RemovePassenger();  // 0x4de670
    virtual int PopAndProcess();  // 0x4de710
    virtual bool IsTimerActive() const;  // 0x4de770
    virtual bool IsTargetInRange() const;  // 0x4de7b0
    virtual int CheckCellPassable() const;
    virtual bool DeployAction();  // 0x4deae0
    virtual void UpdateTeamAI();  // 0x4debb0
    virtual int vt_entry_530();  // 0x4dee50
    virtual void ClearPathIndex();  // 0x4df0d0
    virtual int MissionSell_Dispatch();  // 0x4df0e0
    virtual void UpdateAttackMove_SelectNewTarget();  // 0x4df3a0
    virtual void ScanAdjacentCells();
    virtual int Destru_vt322();  // 0x4df7f0
    virtual bool IsNotAttackAndPlayer() const;  // 0x4dfa50
    virtual int Jumpjet_OccupyCell();  // 0x4e00b0
    virtual int Destru_vt08();
    virtual int RemoveFromPointerArray();
    virtual int sub_550DAA0();
    virtual int FindNearestApproachableCell();  // 0x586fc0
    virtual bool CreateWakes();  // 0x629e90
    virtual int sub_56E52F0();
    virtual int LinkToTransporter();  // 0x6eb380
    virtual int GetGameSpeedFromSession() const;  // 0x6f03b0
    virtual int CompleteProduction();
    virtual void UpdateLocomotion();
    virtual int ProcessEnterTransport();  // 0x70d7e0
    virtual void SetThreatBounds();
    virtual int ApplyThreatBounds();  // 0x70f6a0
    virtual int sub_570F7E0();
    virtual int sub_70FEB0();
    virtual void UpdatePassengerCoords();  // 0x7104f0
    virtual void Cleanup();
    virtual int RespondToDestruction();  // 0x738970
    virtual int sub_5746D80();
    virtual bool CheckAccelLimit() const;  // 0x750030
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
