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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~InfantryClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(InfantryClass); }

    virtual int IsDeployed() const { return 0; }
    virtual bool PlayAnim(Sequence index, bool force = false, bool randomStartFrame = false) { return false; }

    int Mission_Enter() override;
    int Mission_ParaDropApproach() override;
    int Mission_ParaDropOverfly() override;

    // === Phase 3: Deploy/Undeploy ===
    void ProcessDeploy() override;
    int ProcessDeployAction(int deploy_type, bool a3, bool a4);
    int ProcessIdleDeploy();
    bool CanInitiateDeploy();
    bool CanDeployAtCell();
    bool CheckDeployPath();
    int CreateDeployLocomotor();
    bool StartBombDeploy();
    bool IsBombDeployMission();
    int DeployAnimation();
    int ComputeDeploySpeedFactor();
    int GetDeployWeaponIndex();
    bool updateDeployAnimation();

    // === Phase 3: Firing / Combat ===
    virtual int FireAtTargetPos();
    virtual int FireWeaponWithCleanup(int a2, int a3);
    virtual int GetFireError(int* target, int weapon_idx, int a4, int a5);
    virtual bool CanAttackTarget();
    virtual void PlayIdleAnim(int idle_anim_number) override;
    virtual int ProcessIdleAction();
    int ProcessAnimation();
    int GetIdleTimer();

    // === Phase 3: Crawling / Movement ===
    virtual bool CanMoveFreely();
    virtual bool CanMoveThroughCell();
    int MoveToCell();
    int CancelMovement();
    virtual int CalcMoveTarget();
    virtual int FindMoveTarget();
    int FindNearbyCell();
    int FindPathToBuilding();
    int EnterBuilding();
    int ProcessEnterOrRepair();
    bool CanEnterBuilding();
    int FindIdleMovePosition();
    int FindIdleAITarget();

    // === Phase 3: Paradrop ===
    int ParachuteTo();

    // === Phase 3: C4 / Bomb ===
    int ProcessIvanBomb();
    int ProcessIvanBombResult();
    int CheckAndApplyBomb();

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;
    virtual int PerFrameUpdate();
    virtual int HandleTargetDestroyed();
    int ProcessUpdate();
    int ValidateTargetAndMove();
    int SetMission();
    int IdleStateMachine();
    int ProcessTunnelMovement();
    int UpdateBehavior();
    int CalcFacingToTarget();
    int EvaluateTarget();
    int SelectAutoTarget(unsigned int flags, __int64 a3);
    virtual int AssignTarget_SyncLog();
    virtual int AssignDestination_SyncLog();
    int ValidatePlacement();
    int ValidateAttackPosition();
    int IsInBounds();

    // === Phase 3: Stream & Save ===
    virtual int LoadFromStream();
    virtual int SaveLoad_Prefix();
    virtual int ScalarDtor();

    // === Phase 3: Cursor & UI ===
    virtual int HandleCursorOverCell();
    virtual int GetCursorOverObject_EMP();
    virtual int GetCursorOverObject();
    virtual int GetTypePtr();
    virtual int GetTooltipName();
    int GetTransformMatrix();
    int ComputeTransform();
    int CheckHealthDiff();

    // === Phase 3: Marking & Passability ===
    int MarkCellPassability();
    int ClearCellPassability();

    // === Phase 3: Capture & Misc ===
    int CaptureAttackerInfo();
    int InitProductionLimits();
    int GetProductionLimit();
    int GetProductionHouse();
    int ResetMissionIfDone();
    int ProcessMission16();
    int SetMissionOnCondition();
    int InitVoiceResponseTimer();
    int ResetReloadIfNeeded();
    int SetFlag1752();
    int StubReturn15();
    int StubReturn1776();
    int ProcessIdle();
    int RegisterKill();
    int ReleaseInfiltrators();
    int ProcessTiberiumHarvest();
    int RepairBridge();
    void CalculateApproachPath() override;
    bool IsBridgeRepairEnabled();
    int SlaveGiveMoney_RecordBalanceBefore();
    void startPanic();
    int CheckHealthDiff_0();

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
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
};

} // namespace gamemd
