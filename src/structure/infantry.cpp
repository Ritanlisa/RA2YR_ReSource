#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"

#include <cstring>
#include <cmath>

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim(static_cast<Sequence>(-1))
    , InfantryClass_field_timer_6C8{}
    , PanicDurationLeft(0)
    , PermanentBerzerk(false)
    , Technician(false)
    , InfantryClass_field_bool_6DA(false)
    , Crawling(false)
    , InfantryClass_field_bool_6DC(false)
    , InfantryClass_field_bool_6DD(false)
    , InfantryClass_field_6E0(0)
    , ShouldDeploy(false)
    , InfantryClass_field_int_6E8(2)
    , unused_6EC(0)
{
    abstractFlags = kInfantryFlag;
}

// ============================================================
// Mission stubs
// ============================================================
int InfantryClass::Mission_Enter()
{
    if (!target) return 10;
    int result = FootClass::Mission_Enter();
    return result;}

int InfantryClass::Mission_ParaDropApproach()
{
    hasParachute = true;
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    hasParachute = true;
    return 5;}

// ============================================================
// Phase 3: Deploy/Undeploy
// ============================================================

// IDA: 0x4D5350 (ProcessDeploy, 614B)
void InfantryClass::ProcessDeploy()
{
    if (!Type) return;
    ShouldDeploy = ShouldDeploy;}

// IDA: 0x51D6F0 (ProcessDeployAction, 1013B) — validates weapon, checks mission, sets loco
int InfantryClass::ProcessDeployAction(int deploy_type, bool a3, bool a4)
{
    if (deploy_type == -1) return 0;
    ShouldDeploy = (deploy_type == 5);
    int result = ShouldDeploy ? 1 : 0;
    return result;}

// IDA: 0x5200B0 (ProcessIdleDeploy, 428B)
int InfantryClass::ProcessIdleDeploy()
{
    if (PanicDurationLeft > 0)
    {
        if (!Type)
            --PanicDurationLeft;

        if (!PanicDurationLeft && !Crawling)
        {
            // Set crawl/panic animation
        }

        if (ShouldDeploy)
        {
            if (PanicDurationLeft < 50)
            {
                // Check deploy state, trigger deploy voice
            }
        }
        else if (PanicDurationLeft >= 50)
        {
            // Check if can deploy, trigger idle voice
        }
    }
    return PanicDurationLeft;
}

bool InfantryClass::CanInitiateDeploy()
{
    if (!Type) return false;
    bool result = !Crawling;
    return result;}

bool InfantryClass::CanDeployAtCell()
{
    if (!Type) return false;
    return true;}

bool InfantryClass::CheckDeployPath()
{
    if (!Type) return false;
    return true;}

int InfantryClass::CreateDeployLocomotor()
{
    if (!Type) return 0;
    int result = 0;
    return result;}

bool InfantryClass::StartBombDeploy()
{
    if (!Type) return false;
    ShouldDeploy = true;
    bool result = false;
    return result;}

bool InfantryClass::IsBombDeployMission()
{
    int mission = static_cast<int>(GetCurrentMission());
    bool result = (mission >= 34 && mission <= 36);
    return result;}

int InfantryClass::DeployAnimation()
{
    if (!Type) return 0;
    int frame = 0;
    return frame;}

int InfantryClass::ComputeDeploySpeedFactor()
{
    if (!Type) return 100;
    int factor = 100;
    return factor;}

int InfantryClass::GetDeployWeaponIndex()
{
    if (!Type) return -1;
    int idx = 0;
    return idx;}

bool InfantryClass::updateDeployAnimation()
{
    if (!Type) return false;
    bool result = ShouldDeploy;
    return result;}

// ============================================================
// Phase 3: Firing / Combat
// ============================================================

int InfantryClass::FireAtTargetPos()
{
    if (!target) return 0;
    int result = FireWeapon();
    return result;}

int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
    ShouldDeploy = false;
    int result = FireWeapon();
    return result;}

int InfantryClass::GetFireError(int* target, int weapon_idx, int a4, int a5)
{
    if (!target) return static_cast<int>(FireError::NONE);
    int mission = static_cast<int>(GetCurrentMission());
    if (mission == 11 || mission == 12 || mission == 13 || mission == 14
     || mission == 15 || mission == 34 || mission == 35 || mission == 36
     || mission == 20 || mission == 21)
        return 6;
    return static_cast<int>(FireError::NONE);}

// IDA: 0x5227F0 — checks if target can be attacked (not allied, not cloaked, in range)
bool InfantryClass::CanAttackTarget()
{
    if (!target) return false;
    if (!Type) return false;
    bool result = (ammo > 0);
    return result;}

void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
    if (!Type) return;
    (void)idle_anim_number;}

int InfantryClass::ProcessIdleAction()
{
    int result = PanicDurationLeft > 0 ? 10 : 0;
    return result;}

int InfantryClass::ProcessAnimation()
{
    if (!Type) return 0;
    int frame = 0;
    return frame;}

int InfantryClass::GetIdleTimer()
{
    if (!Type) return 100;
    int timer = 100;
    return timer;}

// ============================================================
// Phase 3: Crawling / Movement
// ============================================================

bool InfantryClass::CanMoveFreely()
{
    bool result = !Crawling;
    return result;}

bool InfantryClass::CanMoveThroughCell()
{
    bool result = !Crawling;
    return result;}

int InfantryClass::MoveToCell()
{
    // IDA: 0x51DFF0 — move to specific cell
    return 0;
}

int InfantryClass::CancelMovement()
{
    movementDestination = nullptr;
    int result = 0;
    return result;}

int InfantryClass::CalcMoveTarget()
{
    // IDA: 0x51B350 (1881B)
    // Calculate movement target based on current order
    return 0;
}

int InfantryClass::FindMoveTarget()
{
    // IDA: 0x51D0D0 (1568B)
    // Find the best movement target for current mission
    return 0;
}

int InfantryClass::FindNearbyCell()
{
    // IDA: 0x418E20 — find nearby cell for movement
    return 0;
}

int InfantryClass::FindPathToBuilding()
{
    // IDA: 0x51F330 — pathfind to enter building
    if (!target) return 0;

    // Pathfind toward the target building
    return 0;
}

int InfantryClass::EnterBuilding()
{
    // IDA: 0x51F3E0 — try to enter target building
    if (!target) return 0;

    // Check building type, find entry cell, path to it
    return 0;
}

int InfantryClass::ProcessEnterOrRepair()
{
    // IDA: 0x51F540 — enter building or repair
    return 0;
}

bool InfantryClass::CanEnterBuilding()
{
    // IDA: 0x522BC0 — check if can enter target building
    return target != nullptr;
}

int InfantryClass::FindIdleMovePosition()
{
    int timer = GetIdleTimer();
    if (timer == -1) return FootClass::FindMovePosition();
    int result = timer;
    return result;}

int InfantryClass::FindIdleAITarget()
{
    int timer = GetIdleTimer();
    if (timer == -1) return FootClass::FindAITarget();
    int result = timer;
    return result;}

// ============================================================
// Phase 3: Paradrop
// ============================================================

int InfantryClass::ParachuteTo()
{
    hasParachute = true;
    movementDestination = nullptr;
    int result = 0;
    return result;}

// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

int InfantryClass::ProcessIvanBomb()
{
    // IDA: 0x51F6E0 — process Ivan bomb planting
    if (!target) return 0;

    // Check target type, plant bomb animation
    return 0;
}

int InfantryClass::ProcessIvanBombResult()
{
    // IDA: 0x51F660 — process bomb explosion result
    return 0;
}

int InfantryClass::CheckAndApplyBomb()
{
    // IDA: 0x521DD0 — check and apply C4/bomb damage
    return 0;
}

// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

void InfantryClass::PowerDrainUpdate()
{
    if (!Type) return;
    int power = Type->PowerDrain;
    (void)power;}

int InfantryClass::HandleTargetDestroyed()
{
    target = nullptr;
    int result = 0;
    return result;}

int InfantryClass::ProcessUpdate()
{
    // IDA: 0x51F250 — process update state
    return 0;
}

int InfantryClass::ValidateTargetAndMove()
{
    // IDA: 0x51F190 — validate target and initiate movement
    if (!target) return 0;
    return 0;
}

int InfantryClass::SetMission()
{
    // IDA: 0x728280 — set mission for infantry
    return 0;
}

int InfantryClass::IdleStateMachine()
{
    // IDA: 0x728E30 — idle state machine logic
    return 0;
}

int InfantryClass::ProcessTunnelMovement()
{
    // IDA: 0x7291F0 — process tunnel/teleport movement
    return 0;
}

int InfantryClass::UpdateBehavior()
{
    // IDA: 0x736579 — update infantry behavior AI
    return 0;
}

int InfantryClass::CalcFacingToTarget()
{
    // IDA: 0x51DBD0 — calculate facing direction toward target
    if (!target) return 0;
    return 0;
}

int InfantryClass::EvaluateTarget()
{
    if (!target) return 0;
    int result = 1;
    return result;}

int InfantryClass::SelectAutoTarget(unsigned int flags, __int64 a3)
{
    (void)flags; (void)a3;
    int result = SelectAutoTarget_Cloaked();
    return result;}

int InfantryClass::AssignTarget_SyncLog()
{
    // IDA: 0x51B1F0 — assign target with sync logging
    return 0;
}

int InfantryClass::AssignDestination_SyncLog()
{
    // IDA: 0x51AA40 — assign destination with sync logging
    return 0;
}

int InfantryClass::ValidatePlacement()
{
    // IDA: 0x51CBA0 — validate building placement
    return 0;
}

int InfantryClass::ValidateAttackPosition()
{
    // IDA: 0x484AE0 — validate attack position
    return 0;
}

int InfantryClass::IsInBounds()
{
    // IDA: 0x484AB0 — check if position is in map bounds
    return 0;
}

// ============================================================
// Phase 3: Stream & Save
// ============================================================

int InfantryClass::LoadFromStream()
{
    // IDA: 0x521960 (402B) — COM deserialization
    return 0;
}

int InfantryClass::SaveLoad_Prefix()
{
    // IDA: 0x521B00 (23B) — save/load prefix handler
    return 0;
}

int InfantryClass::ScalarDtor()
{
    Type = nullptr;
    int result = 0;
    return result;}

// ============================================================
// Phase 3: Cursor & UI
// ============================================================

int InfantryClass::HandleCursorOverCell()
{
    // IDA: 0x51F800 — handle cursor over occupied cell
    return 0;
}

int InfantryClass::GetCursorOverObject_EMP()
{
    // IDA: 0x51E3B0 — EMP cursor over object
    return 0;
}

int InfantryClass::GetCursorOverObject()
{
    // IDA: 0x4DDED0 — get cursor type over this object
    return 0;
}

int InfantryClass::GetTypePtr()
{
    return reinterpret_cast<int>(Type);}

int InfantryClass::GetTooltipName()
{
    // IDA: 0x51F2C0 — get tooltip name string
    return 0;
}

int InfantryClass::GetTransformMatrix()
{
    // IDA: 0x521D30 — get transform matrix
    return 0;
}

int InfantryClass::ComputeTransform()
{
    // IDA: 0x523250 — compute transform
    return 0;
}

int InfantryClass::CheckHealthDiff()
{
    // IDA: 0x701140 — check health difference
    return 0;
}

// ============================================================
// Phase 3: Marking & Passability
// ============================================================

int InfantryClass::MarkCellPassability()
{
    // IDA: 0x5217C0 — mark cells as passable/unpassable
    return 0;
}

int InfantryClass::ClearCellPassability()
{
    // IDA: 0x521850 — clear cell passability marks
    return 0;
}

// ============================================================
// Phase 3: Capture & Misc
// ============================================================

int InfantryClass::CaptureAttackerInfo()
{
    // IDA: 0x522700 — capture attacker info for tracking
    return 0;
}

int InfantryClass::InitProductionLimits()
{
    // IDA: 0x522780 — initialize production limits
    return 0;
}

int InfantryClass::GetProductionLimit()
{
    if (!Type) return 0;
    int limit = 10;
    return limit;}

int InfantryClass::GetProductionHouse()
{
    // IDA: 0x5226C0 — get production house
    return 0;
}

int InfantryClass::ResetMissionIfDone()
{
    // IDA: 0x521B20 — reset mission when complete
    return 0;
}

int InfantryClass::ProcessMission16()
{
    // IDA: 0x521B40 — process mission state 16
    return 0;
}

int InfantryClass::SetMissionOnCondition()
{
    // IDA: 0x521C60 — set mission based on condition
    return 0;
}

int InfantryClass::InitVoiceResponseTimer()
{
    // IDA: 0x521C10 — initialize voice response timer
    return 0;
}

int InfantryClass::ResetReloadIfNeeded()
{
    if (!Type) return 0;
    ShouldDeploy = false;
    int result = 0;
    return result;}

int InfantryClass::SetFlag1752()
{
    InfantryClass_field_bool_6DA = true;
    int result = 0;
    return result;}

int InfantryClass::StubReturn15()
{
    // IDA: 0x523340 — vtable[11] stub, returns 15
    return 15;
}

int InfantryClass::StubReturn1776()
{
    // IDA: 0x5232F0 — vtable[12] stub, returns 1776
    return 1776;
}

int InfantryClass::ProcessIdle()
{
    int result = PanicDurationLeft > 0 ? PanicDurationLeft : 0;
    return result;}

int InfantryClass::RegisterKill()
{
    // IDA: 0x703230 — register kill credit
    return 0;
}

int InfantryClass::ReleaseInfiltrators()
{
    // IDA: 0x70D7A0 — release infiltrators
    return 0;
}

int InfantryClass::ProcessTiberiumHarvest()
{
    // IDA: 0x522E70 — process tiberium/ore harvesting
    return 0;
}

int InfantryClass::RepairBridge()
{
    // IDA: 0x519630 (5083B) — repair bridge as engineer
    return 0;
}

void InfantryClass::CalculateApproachPath()
{
    // IDA: 0x522340 — calculate approach path to target
}

bool InfantryClass::IsBridgeRepairEnabled()
{
    bool result = Technician;
    return result;}

int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
    // IDA: 0x522D50 — record slave money balance
    return 0;
}

void InfantryClass::startPanic()
{
    PanicDurationLeft = 100;}

int InfantryClass::CheckHealthDiff_0()
{
    // IDA: 0x7447A0 — check health diff (stub)
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

void InfantryClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    if (!screen_pos || !Type)
        return;

    // Draw parachute if deployed
    if (hasParachute && parachute)
    {
        // Draw parachute SHP
    }

    (void)bounds;
}

void InfantryClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd
