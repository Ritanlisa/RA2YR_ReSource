#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/foot.hpp"

namespace gamemd {

using ra2::game::AbstractClass;
using ra2::game::AbstractType;
using ra2::game::TimerStruct;

class InfantryTypeClass;

class InfantryClass : public ra2::game::FootClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Infantry;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // 0x523300

    virtual ~InfantryClass() override = default;  // 0x517D90

    // wrapper: delegates to InfantryClass::Destruct at 0x517D90
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to InfantryClass::Destruct at 0x517D90
    virtual int objectSize() const override;

    virtual int IsDeployed() const;  // 0x6EF9E0
    virtual bool PlayAnim(Sequence index, bool force = false, bool randomStartFrame = false);  // 0x451890

    int Mission_Enter() override;
    // wrapper: delegates to AircraftClass::Mission_Enter at 0x4166C0
    int Mission_ParaDropApproach() override;
    // wrapper: delegates to AircraftClass::Mission_Enter at 0x4166C0
    int Mission_ParaDropOverfly() override;

    // === Phase 3: Deploy/Undeploy ===
    void ProcessDeploy() override;  // 0x4D5350
    int ProcessDeployAction(int deploy_type, bool a3, bool a4);  // 0x51D6F0
    int ProcessIdleDeploy();  // 0x5200B0
    bool CanInitiateDeploy();  // 0x521B60
    bool CanDeployAtCell();  // 0x5221D0
    bool CheckDeployPath();  // 0x521EB0
    int CreateDeployLocomotor();  // 0x522FE0
    bool StartBombDeploy();  // 0x522C00
    bool IsBombDeployMission();  // 0x5228D0
    int DeployAnimation();  // 0x514310
    int ComputeDeploySpeedFactor();  // 0x521D80
    int GetDeployWeaponIndex();  // 0x5218E0
    bool updateDeployAnimation();  // 0x4598A0

    // === Phase 3: Firing / Combat ===
    virtual int FireAtTargetPos();  // 0x522600
    virtual int FireWeaponWithCleanup(int a2, int a3);  // 0x51DF60
    virtual int GetFireError(int* target, int weapon_idx, int a4, int a5);  // 0x51C8B0
    virtual bool CanAttackTarget();  // 0x5227F0
    virtual void PlayIdleAnim(int idle_anim_number) override;
    virtual int ProcessIdleAction();  // 0x51CDB0
    int ProcessAnimation();  // 0x5239D0
    int GetIdleTimer();  // 0x521320

    // === Phase 3: Crawling / Movement ===
    virtual bool CanMoveFreely();  // 0x5216D0
    virtual bool CanMoveThroughCell();  // 0x484D60
    int MoveToCell();  // 0x51DFF0
    int CancelMovement();  // 0x51DF10
    virtual int CalcMoveTarget();  // 0x51B350
    virtual int FindMoveTarget();  // 0x51D0D0
    int FindNearbyCell();  // 0x418E20
    int FindPathToBuilding();  // 0x51F330
    int EnterBuilding();  // 0x51F3E0
    int ProcessEnterOrRepair();  // 0x51F540
    bool CanEnterBuilding();  // 0x522BC0
    int FindIdleMovePosition();  // 0x51F620
    int FindIdleAITarget();  // 0x51F640

    // === Phase 3: Paradrop ===
    int ParachuteTo();  // 0x521760

    // === Phase 3: C4 / Bomb ===
    int ProcessIvanBomb();  // 0x51F6E0
    int ProcessIvanBombResult();  // 0x51F660
    int CheckAndApplyBomb();  // 0x521DD0

    // === Phase 3: Per-Frame & AI ===
    int PowerDrainUpdate(int a2) override;  // 0x521C90
    virtual int PerFrameUpdate();  // 0x517CC0
    virtual int HandleTargetDestroyed();  // 0x51AA10
    int ProcessUpdate();  // 0x51F250
    int ValidateTargetAndMove();  // 0x51F190
    int SetMission();  // 0x728280
    int IdleStateMachine();  // 0x728E30
    int ProcessTunnelMovement();  // 0x7291F0
    int UpdateBehavior();  // 0x736579
    int CalcFacingToTarget();  // 0x51DBD0
    int EvaluateTarget();  // 0x51BF90
    int SelectAutoTarget(unsigned int flags, __int64 a3);  // 0x51E140
    virtual int AssignTarget_SyncLog();  // 0x51B1F0
    virtual int AssignDestination_SyncLog();  // 0x51AA40
    int ValidatePlacement();  // 0x51CBA0
    int ValidateAttackPosition();  // 0x484AE0
    int IsInBounds();  // 0x484AB0

    // === Phase 3: Stream & Save ===
    virtual int LoadFromStream();  // 0x521960
    virtual int SaveLoad_Prefix();  // 0x521B00
    virtual int ScalarDtor();  // 0x523350

    // === Phase 3: Cursor & UI ===
    virtual int HandleCursorOverCell();  // 0x51F800
    virtual int GetCursorOverObject_EMP();  // 0x51E3B0
    virtual int GetCursorOverObject();  // 0x4DDED0
    virtual int GetTypePtr();  // 0x51FAF0
    virtual int GetTooltipName();  // 0x51F2C0
    int GetTransformMatrix();  // 0x521D30
    int ComputeTransform();  // 0x523250
    int CheckHealthDiff();  // 0x701140

    // === Phase 3: Marking & Passability ===
    int MarkCellPassability();  // 0x5217C0
    int ClearCellPassability();  // 0x521850

    // === Phase 3: Capture & Misc ===
    int CaptureAttackerInfo();  // 0x522700
    int InitProductionLimits();  // 0x522780
    int GetProductionLimit();  // 0x522640
    int GetProductionHouse();  // 0x5226C0
    int ResetMissionIfDone();  // 0x521B20
    int ProcessMission16();  // 0x521B40
    int SetMissionOnCondition();  // 0x521C60
    int InitVoiceResponseTimer();  // 0x521C10
    int ResetReloadIfNeeded();  // 0x521C40
    int SetFlag1752();  // 0x5220F0
    int StubReturn15();  // 0x523340
    int StubReturn1776();  // 0x5232F0
    int ProcessIdle();  // 0x70E1E0
    int RegisterKill();  // 0x703230
    int ReleaseInfiltrators();  // 0x70D7A0
    int ProcessTiberiumHarvest();  // 0x522E70
    int RepairBridge();  // 0x519630
    void CalculateApproachPath() override;  // 0x522340
    bool IsBridgeRepairEnabled();  // 0x5224D0
    int SlaveGiveMoney_RecordBalanceBefore();  // 0x522D50
    void startPanic();  // 0x772AC0
    // wrapper: delegates to InfantryClass::startPanic at 0x772AC0
    int CheckHealthDiff_0();

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x518F90
    // wrapper: delegates to InfantryClass::Draw at 0x518F90
    void DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const;

    InfantryTypeClass* Type;
    Sequence           SequenceAnim;
    TimerStruct        InfantryClass_field_timer_6C8;
    uint32_t           PanicDurationLeft;
    bool               PermanentBerzerk;
    bool               Technician;
    bool               InfantryClass_field_bool_6DA;
    bool               Crawling;
    bool               InfantryClass_field_bool_6DC;
    bool               InfantryClass_field_bool_6DD;
    uint32_t           InfantryClass_field_6E0;
    bool               ShouldDeploy;
    int32_t            InfantryClass_field_int_6E8;
    uint32_t           unused_6EC;

protected:
    InfantryClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int GetType();  // 0x484F20
    int ProcessExitQueue();  // 0x4DA030
    bool SetField6();  // 0x5176A0
    int Construct(int a1, void* a2);  // 0x517A50
    int ProcessDeployment(void* a1, int a2, int a3, void* a4, int a5, int a6, int a7);  // 0x517FA0
    int Update();  // 0x51BAB0
    void* checkBridgeClearance(int a1);  // 0x523370
    void* updateOccupiedBuilding(void* a1);  // 0x5233D0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int ScanTarget(int a1);  // 0x4d4dc0
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
