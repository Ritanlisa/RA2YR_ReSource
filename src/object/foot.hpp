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

    virtual ~FootClass() = default;  // 0x4D3590

    virtual void Destroyed(ObjectClass* killer) override;  // 0x4D98C0
    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) override;

    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    virtual void ReceiveGunner(FootClass* gunner);
    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    virtual void RemoveGunner(FootClass* gunner);
    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    virtual bool IsLeavingMap() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual bool canMove() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual bool onProductionComplete() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void onCellEntry(CellStruct* cell);
    virtual void processSuperWeapon(CellStruct* cell);  // 0x44C980
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    virtual CoordStruct* getMoveCoords(CoordStruct* out);
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    virtual void onMoveStart();
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    virtual bool canStop();
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    virtual bool MoveTo(CoordStruct* coords);
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    virtual bool StopMoving();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool canRecruitTeamMember();
    // design: virtual function, no binary implementation matched in IDA
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
    // design: virtual function, no binary implementation matched in IDA
    virtual void onDrawComplete();
    virtual void Panic();  // 0x772AC0
    // wrapper: delegates to InfantryClass::startPanic at 0x772AC0
    virtual void UnPanic();
    virtual void PlayIdleAnim(int idle_anim_number);  // 0x51DAF0
    // wrapper: delegates to InfantryClass::PlayIdleAnim at 0x51DAF0
    virtual uint32_t getMovementMode();
    // wrapper: delegates to InfantryClass::PlayIdleAnim at 0x51DAF0
    virtual uint32_t getPathDistance(uint32_t a, uint32_t b, uint32_t c) const;
    // wrapper: delegates to InfantryClass::PlayIdleAnim at 0x51DAF0
    virtual uint32_t getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const;
    virtual uint32_t isAreaClear(uint32_t a, uint32_t b, uint32_t c) const;  // 0x5A7250
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    virtual void onAreaEntry(uint32_t a, uint32_t b);
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    virtual int GetCurrentSpeed() const;
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    virtual uint32_t getWaypointData(uint32_t a);
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    virtual void onWaypointReached(uint32_t a);
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    virtual void SetSpeedPercentage(double percentage);
    // design: virtual function, no binary implementation matched in IDA
    virtual void onPathComplete();
    // design: virtual function, no binary implementation matched in IDA
    virtual void onMovementDone();
    virtual bool CanEnterCell(uint32_t a); // 0x709290

    bool MovementAI();  // 0x4DA530

    // wrapper: delegates to FootClass::MovementAI at 0x4DA530
    int Mission_Move() override;
    int Mission_Attack() override;  // 0x417FE0
    int Mission_Guard() override;  // 0x459E70
    // wrapper: delegates to BuildingClass::Mission_Guard at 0x459E70
    int Mission_Hunt() override;

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int MissionMoveCarryallLand();  // 0x416AF0
    virtual void vt_entry_4F8();  // 0x41C080
    virtual int Destru_vt323();  // 0x41C090
    virtual void vt_entry_514();  // 0x41C0F0
    virtual bool StubReturnFalse();  // 0x41c100
    virtual void StubReturnVoid(); // 0x41C110
    virtual void vt_entry_534();  // 0x41C130
    virtual void vt_entry_540();  // 0x41C140
    virtual int GetTurretAngle() const;  // 0x43ED40
    virtual void ProcessDemolish();  // 0x4415F0
    virtual void UpdateSidebar();  // 0x4456D0
    virtual void ProcessPrimarySelect();  // 0x448160
    virtual int StubReturn0();  // 0x452250
    virtual void ScanCircleForUnits();  // 0x4556D0
    virtual void ScanCircleForUnits2();  // 0x455820
    virtual int GetCapacity() const; // 0x45A540
    virtual int ResizeOccupiedCellList();  // 0x45A560
    virtual int sub_4734B0();
    virtual int checkTerrainSpeed();  // 0x487150
    virtual int updateLocomotion();  // 0x487160
    virtual int FindPathWithRetry();  // 0x42C900
    virtual void ProcessDeployMission();  // 0x4CD2A0
    virtual void UpdateDeployMovement();  // 0x4CE680
    virtual int PostLoadInit();  // 0x4D3540
    virtual int Destru_vt337();  // 0x4D3710
    virtual void UpdateReveal(); // 0x4D3780
    virtual bool CheckTileSeed() const;  // 0x4D3810
    virtual int MovementStep();  // 0x4D3920
    virtual int Destru_vt139();  // 0x4D4200
    virtual bool CheckVoiceResponse() const;  // 0x4D4B20
    virtual void ProcessMissionVoice();  // 0x4D4CB0
    virtual int FindMovePosition();  // 0x4D5070
    virtual int PlayCOM_audio();  // 0x4D55C0
    virtual int Destru_vt319();  // 0x4D55F0
    virtual int EnterAttackState();  // 0x4D5660
    virtual void CalculateApproachPath(); // 0x4D5690
    virtual int FindAITarget();  // 0x4D6AA0
    virtual int DispatchInput();  // 0x4D7170
    virtual void ProcessDeploy();  // 0x4d7330
    virtual int ValidateMove();  // 0x4d74e0
    virtual int ValidatePlacement();  // 0x4d82b0
    virtual int GetCoords() const; // 0x4D8560
    virtual void UpdateAI();  // 0x4D85D0
    virtual int OverrideMission_SyncLog(); // 0x4D8F40
    virtual int ConditionalAction();  // 0x4D8F80
    virtual int MissionDispatch(); // 0x4D8FB0
    virtual void ProcessTeamAction();  // 0x4D9290
    virtual int AssignDestination();  // 0x4D94B0
    virtual int DispatchSell();  // 0x4D9720
    virtual int SelectAutoTarget_Cloaked();  // 0x4D9920
    virtual int HandleTargetDestroyed(); // 0x4D9960
    virtual void vt_entry_524();  // 0x4D9C00
    virtual int Destru_vt107();  // 0x4D9C10
    virtual int vt_entry_4F0();  // 0x4D9FF0
    virtual void ClearSomeVector();  // 0x4DA1C0
    virtual bool CanBeControlled() const;  // 0x4DA1D0
    virtual bool CanBeRecruited() const;  // 0x4DA230
    virtual void ClearSomeVector2();  // 0x4DA2A0
    virtual void ProcessMovement();  // 0x4DA2C0
    virtual bool CheckTargetValidity() const; // 0x4DA4E0
    virtual int UpdateState();  // 0x4daf10
    virtual int GetAttackSpeed() const;  // 0x4DB0A0
    virtual int Destru_vt30();  // 0x4DB7E0
    virtual void vt_entry_548();  // 0x4DBA30
    virtual void vt_entry_54C();  // 0x4DBA40
    virtual int BeginPowerUpdate();  // 0x4DBAD0
    virtual bool CanBeHunted() const;  // 0x4DBDA0
    virtual int LiberateMember();  // 0x4DBED0
    virtual int vt_entry_4E0();  // 0x4DBFD0
    virtual int vt_entry_4F4();  // 0x4DC030
    virtual int CheckTargetCell() const; // 0x4DC060
    virtual int Destru_vt311();  // 0x4DC790
    virtual void SetBuildingType();  // 0x4DC810
    virtual int MoveToTiberium();  // 0x4DCFE0
    virtual int FindMoveTarget();  // 0x4dd0a0
    virtual int MoveToWeed();  // 0x4DDB90
    virtual bool CheckHeightDiff() const;  // 0x4DDC40
    virtual int ValidateTargetCell();  // 0x4DDC60
    virtual int HandleCursorWithCheck();  // 0x4DDDE0
    virtual void ProcessMissionState();  // 0x4DDF90
    virtual int ValidateFoundation(); // 0x4DE580
    virtual int PreDestroy();  // 0x4DE5D0
    virtual int OnCompleteAction();  // 0x4DE630
    virtual int RemovePassenger();  // 0x4DE670
    virtual int PopAndProcess();  // 0x4DE710
    virtual bool IsTimerActive() const;  // 0x4DE770
    virtual bool IsTargetInRange() const;  // 0x4DE7B0
    virtual int CheckCellPassable() const; // 0x4DE940
    virtual bool DeployAction();  // 0x4DEAE0
    virtual void UpdateTeamAI();  // 0x4DEBB0
    virtual int vt_entry_530();  // 0x4DEE50
    virtual void ClearPathIndex();  // 0x4DF0D0
    virtual int MissionSell_Dispatch();  // 0x4DF0E0
    virtual void UpdateAttackMove_SelectNewTarget();  // 0x4DF3A0
    virtual void ScanAdjacentCells();  // 0x4df510
    virtual int Destru_vt322();  // 0x4DF7F0
    virtual bool IsNotAttackAndPlayer() const;  // 0x4DFA50
    virtual int Jumpjet_OccupyCell();  // 0x4E00B0
    virtual int Destru_vt08(); // 0x4E0170
    virtual int RemoveFromPointerArray(); // 0x4E0ED0
    // wrapper: delegates to FootClass::RemoveFromPointerArray at 0x4E0ED0
    virtual int sub_550DAA0();
    virtual int FindNearestApproachableCell();  // 0x586FC0
    virtual bool CreateWakes();  // 0x629E90
    // wrapper: delegates to FootClass::CreateWakes at 0x629E90
    virtual int sub_56E52F0();
    virtual int LinkToTransporter();  // 0x6EB380
    virtual int GetGameSpeedFromSession() const;  // 0x6F03B0
    virtual int CompleteProduction(); // 0x6F5090
    virtual void UpdateLocomotion();  // 0x6fb740
    virtual int ProcessEnterTransport();  // 0x70D7E0
    virtual void SetThreatBounds(); // 0x70F670
    virtual int ApplyThreatBounds();  // 0x70F6A0
    // wrapper: delegates to FootClass::ApplyThreatBounds at 0x70F6A0
    virtual int sub_570F7E0();
    virtual int sub_70FEB0();
    virtual void UpdatePassengerCoords();  // 0x7104F0
    virtual void Cleanup(); // 0x729480
    virtual int RespondToDestruction();  // 0x738970
    // wrapper: delegates to FootClass::RespondToDestruction at 0x738970
    virtual int sub_5746D80();
    virtual bool CheckAccelLimit() const;  // 0x750030
    virtual int GetField() const;  // 0x7500d0
    virtual void SetField(); // 0x7500E0

protected:
    // wrapper: delegates to FootClass::SetField at 0x7500E0
    void EmitMovementSmoke();
    // wrapper: delegates to FootClass::SetField at 0x7500E0
    void UpdateMovementAmbiguity();
    // wrapper: delegates to FootClass::SetField at 0x7500E0
    void UpdateMovementSpeed();
    // design: no binary equivalent found in IDA
    void HandleMovementSoundupdateLogic();
    // design: no binary equivalent found in IDA
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
