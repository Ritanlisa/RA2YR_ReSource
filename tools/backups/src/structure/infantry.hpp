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

    virtual ~InfantryClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    virtual int IsDeployed() const;
    virtual bool PlayAnim(Sequence index, bool force = false, bool randomStartFrame = false);

    int Mission_Enter() override;
    int Mission_ParaDropApproach() override;
    int Mission_ParaDropOverfly() override;

    // === Phase 3: Deploy/Undeploy ===
    void ProcessDeploy() override;  // 0x4d5350
    int ProcessDeployAction(int deploy_type, bool a3, bool a4);  // 0x51d6f0
    int ProcessIdleDeploy();  // 0x5200b0
    bool CanInitiateDeploy();  // 0x521b60
    bool CanDeployAtCell();  // 0x5221d0
    bool CheckDeployPath();  // 0x521eb0
    int CreateDeployLocomotor();  // 0x522fe0
    bool StartBombDeploy();  // 0x522c00
    bool IsBombDeployMission();  // 0x5228d0
    int DeployAnimation();  // 0x514310
    int ComputeDeploySpeedFactor();  // 0x521d80
    int GetDeployWeaponIndex();  // 0x5218e0
    bool updateDeployAnimation();  // 0x4598a0

    // === Phase 3: Firing / Combat ===
    virtual int FireAtTargetPos();  // 0x522600
    virtual int FireWeaponWithCleanup(int a2, int a3);  // 0x51df60
    virtual int GetFireError(int* target, int weapon_idx, int a4, int a5);  // 0x51c8b0
    virtual bool CanAttackTarget();  // 0x5227f0
    virtual void PlayIdleAnim(int idle_anim_number) override;  // 0x51daf0
    virtual int ProcessIdleAction();  // 0x51cdb0
    int ProcessAnimation();  // 0x5239d0
    int GetIdleTimer();  // 0x521320

    // === Phase 3: Crawling / Movement ===
    virtual bool CanMoveFreely();  // 0x5216d0
    virtual bool CanMoveThroughCell();  // 0x484d60
    int MoveToCell();  // 0x51dff0
    int CancelMovement();  // 0x51df10
    virtual int CalcMoveTarget();  // 0x51b350
    virtual int FindMoveTarget();  // 0x51d0d0
    int FindNearbyCell();  // 0x418e20
    int FindPathToBuilding();  // 0x51f330
    int EnterBuilding();  // 0x51f3e0
    int ProcessEnterOrRepair();  // 0x51f540
    bool CanEnterBuilding();  // 0x522bc0
    int FindIdleMovePosition();  // 0x51f620
    int FindIdleAITarget();  // 0x51f640

    // === Phase 3: Paradrop ===
    int ParachuteTo();  // 0x521760

    // === Phase 3: C4 / Bomb ===
    int ProcessIvanBomb();  // 0x51f6e0
    int ProcessIvanBombResult();  // 0x51f660
    int CheckAndApplyBomb();  // 0x521dd0

    // === Phase 3: Per-Frame & AI ===
    void PowerDrainUpdate() override;  // 0x521c90
    virtual int PerFrameUpdate();  // 0x517cc0
    virtual int HandleTargetDestroyed();  // 0x51aa10
    int ProcessUpdate();  // 0x51f250
    int ValidateTargetAndMove();  // 0x51f190
    int SetMission();  // 0x728280
    int IdleStateMachine();  // 0x728e30
    int ProcessTunnelMovement();  // 0x7291f0
    int UpdateBehavior();  // 0x736579
    int CalcFacingToTarget();  // 0x51dbd0
    int EvaluateTarget();  // 0x51bf90
    int SelectAutoTarget(unsigned int flags, __int64 a3);  // 0x51e140
    virtual int AssignTarget_SyncLog();  // 0x51b1f0
    virtual int AssignDestination_SyncLog();  // 0x51aa40
    int ValidatePlacement();  // 0x51cba0
    int ValidateAttackPosition();  // 0x484ae0
    int IsInBounds();  // 0x484ab0

    // === Phase 3: Stream & Save ===
    virtual int LoadFromStream();  // 0x521960
    virtual int SaveLoad_Prefix();  // 0x521b00
    virtual int ScalarDtor();  // 0x523350

    // === Phase 3: Cursor & UI ===
    virtual int HandleCursorOverCell();  // 0x51f800
    virtual int GetCursorOverObject_EMP();  // 0x51e3b0
    virtual int GetCursorOverObject();  // 0x4dded0
    virtual int GetTypePtr();  // 0x51faf0
    virtual int GetTooltipName();  // 0x51f2c0
    int GetTransformMatrix();  // 0x521d30
    int ComputeTransform();  // 0x523250
    int CheckHealthDiff();  // 0x701140

    // === Phase 3: Marking & Passability ===
    int MarkCellPassability();  // 0x5217c0
    int ClearCellPassability();  // 0x521850

    // === Phase 3: Capture & Misc ===
    int CaptureAttackerInfo();  // 0x522700
    int InitProductionLimits();  // 0x522780
    int GetProductionLimit();  // 0x522640
    int GetProductionHouse();  // 0x5226c0
    int ResetMissionIfDone();  // 0x521b20
    int ProcessMission16();  // 0x521b40
    int SetMissionOnCondition();  // 0x521c60
    int InitVoiceResponseTimer();  // 0x521c10
    int ResetReloadIfNeeded();  // 0x521c40
    int SetFlag1752();  // 0x5220f0
    int StubReturn15();  // 0x523340
    int StubReturn1776();  // 0x5232f0
    int ProcessIdle();  // 0x70e1e0
    int RegisterKill();  // 0x703230
    int ReleaseInfiltrators();  // 0x70d7a0
    int ProcessTiberiumHarvest();  // 0x522e70
    int RepairBridge();  // 0x519630
    void CalculateApproachPath() override;  // 0x522340
    bool IsBridgeRepairEnabled();  // 0x5224d0
    int SlaveGiveMoney_RecordBalanceBefore();  // 0x522d50
    void startPanic();  // 0x772ac0
    int CheckHealthDiff_0();

    // === Phase 3: Drawing ===
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x518f90
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
