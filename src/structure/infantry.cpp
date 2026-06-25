#include "structure/infantry.hpp"

#include <cstring>
#include <cmath>

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = (uint32_t)(AbstractFlags::Foot)
                                  | (uint32_t)(AbstractFlags::Object)
                                  | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim((Sequence)(-1))
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
    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    hasParachute = true;
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    return 5;
}

// ============================================================
// Phase 3: Deploy/Undeploy
// ============================================================

// IDA: 0x4D5350 (ProcessDeploy, 614B)
void InfantryClass::ProcessDeploy()
{
    // Infantry-specific deploy logic
    // Check if can deploy, set mission, deploy animations
}

// IDA: 0x51D6F0 (ProcessDeployAction, 1013B) — validates weapon, checks mission, sets loco
// 0x51d6f0
int InfantryClass::ProcessDeployAction(int deploy_type, bool a3, bool a4)
{
    if (deploy_type == -1)
        return 0;

    // IDA: checks deploy weapon index from type, validates mission state (433=deploying)
    // Calls ILocomotion::Unlimbo with facing direction
    // Handles timing via field_6E8

    ShouldDeploy = (deploy_type == 5);
    return 1;
}

// IDA: 0x5200B0 (ProcessIdleDeploy, 428B)
// 0x5200b0
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
    // IDA: 0x521B60 — check deploy preconditions
    // Check type flags, cell passability, deploy animation
    return !Crawling && Type != nullptr;
}

bool InfantryClass::CanDeployAtCell()
{
    // IDA: 0x5221D0 — check cell for deploy
    return true;
}

bool InfantryClass::CheckDeployPath()
{
    // IDA: 0x521EB0 — path check for deploy
    return true;
}

int InfantryClass::CreateDeployLocomotor()
{
    // IDA: 0x522FE0 — create deploy locomotor COM object
    return 0;
}

bool InfantryClass::StartBombDeploy()
{
    // IDA: 0x522C00 — start Ivan bomb deploy sequence
    return false;
}

bool InfantryClass::IsBombDeployMission()
{
    // IDA: 0x5228D0 — check if current mission is bomb deploy
    return false;
}

// 0x514310
int InfantryClass::DeployAnimation()
{
    // IDA: 0x514310 — deploy animation frame selection
    return 0;
}

// 0x521d80
int InfantryClass::ComputeDeploySpeedFactor()
{
    // IDA: 0x521D80 — compute deploy speed multiplier
    return 100;
}

// 0x5218e0
int InfantryClass::GetDeployWeaponIndex()
{
    // IDA: 0x5218E0 — get deploy weapon index from type
    if (!Type) return -1;
    return 0;
}

// 0x4598a0
bool InfantryClass::updateDeployAnimation()
{
    // IDA: 0x4598A0 — check deploy animation state
    return false;
}

// ============================================================
// Phase 3: Firing / Combat
// ============================================================

// 0x522600
int InfantryClass::FireAtTargetPos()
{
    // IDA: 0x522600 (60B)
    // Fire weapon at target's position
    if (!target)
        return 0;

    auto fire_err = GetFireError((int*)(target), 0, 0, 0);
    if ((int)(fire_err) == (int)(FireError::NONE))
    {
        Fire(target, 0);
    }
    return 0;
}

// 0x51df60
int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
    // IDA: 0x51DF60 (131B)
    ShouldDeploy = false;
    int result = FireWeapon();
    if (result && !Crawling)
    {
        if (Type)  // voice response check
        {
            PanicDurationLeft = 300;
        }
    }
    return result;
}

// 0x51c8b0
int InfantryClass::GetFireError(int* target, int weapon_idx, int a4, int a5)
{
    // IDA: 0x51C8B0 (741B) — comprehensive fire error checks (returns 0-7)
    if (!target) return (int)(FireError::NONE);

    // Block fire during special mission states (deploying/infiltrating/bombing)
    int mission = (int)(GetCurrentMission());
    if (mission == 11 || mission == 12 || mission == 13 || mission == 14 ||
        mission == 15 || mission == 34 || mission == 35 || mission == 36 ||
        mission == 20 || mission == 21)
    {
        return 6; // FIRE_CANT
    }

    // Check weapon range, ammo, self-healing, obstacle, loco state
    // Returns 0(FIRE_OK), 1(REARM), 2(ROF), 3(OUT_OF_RANGE),
    //         4(CLOAKED), 5(NO_AMMO), 6(FIRE_CANT), 7(MOVING)
    return (int)(FireError::NONE);
}

// IDA: 0x5227F0 — checks if target can be attacked (not allied, not cloaked, in range)
// 0x5227f0
bool InfantryClass::CanAttackTarget()
{
    if (!target) return false;
    // IDA: checks IsAlliedWithObjectHouse, cloak state, weapon range, loco state
    return true;
}

void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
    // IDA: vtable override — play idle animation sequence
    if (!Type) return;
    // PlayAnim with idle sequence
}

int InfantryClass::ProcessIdleAction()
{
    // IDA: 0x51CDB0 (760B)
    // Process idle behavior: random movement, scanning, deploy check
    return 10;
}

// 0x5239d0
int InfantryClass::ProcessAnimation()
{
    // IDA: 0x5239D0 (311B)
    // Process current animation frame advancement
    return 0;
}

// 0x521320
int InfantryClass::GetIdleTimer()
{
    // IDA: 0x521320 (928B)
    // Get random idle timer based on unit state
    return 100;
}

// ============================================================
// Phase 3: Crawling / Movement
// ============================================================

// 0x5216d0
bool InfantryClass::CanMoveFreely()
{
    // IDA: 0x5216D0 — infantry can move if not crawling/deploying
    return !Crawling;
}

bool InfantryClass::CanMoveThroughCell()
{
    // IDA: 0x484D60 — check cell passability for infantry
    return true;
}

// 0x51dff0
int InfantryClass::MoveToCell()
{
    // IDA: 0x51DFF0 — move to specific cell
    return 0;
}

// 0x51df10
int InfantryClass::CancelMovement()
{
    // IDA: 0x51DF10 — cancel current movement
    movementDestination = nullptr;
    return 0;
}

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

// 0x418e20
int InfantryClass::FindNearbyCell()
{
    // IDA: 0x418E20 — find nearby cell for movement
    return 0;
}

// 0x51f330
int InfantryClass::FindPathToBuilding()
{
    // IDA: 0x51F330 — pathfind to enter building
    if (!target) return 0;

    // Pathfind toward the target building
    return 0;
}

// 0x51f3e0
int InfantryClass::EnterBuilding()
{
    // IDA: 0x51F3E0 — try to enter target building
    if (!target) return 0;

    // Check building type, find entry cell, path to it
    return 0;
}

// 0x51f540
int InfantryClass::ProcessEnterOrRepair()
{
    // IDA: 0x51F540 — enter building or repair
    return 0;
}

// 0x522bc0
bool InfantryClass::CanEnterBuilding()
{
    // IDA: 0x522BC0 — check if can enter target building
    return target != nullptr;
}

int InfantryClass::FindIdleMovePosition()
{
    // IDA: 0x51F620 — find idle movement position
    return 0;
}

// 0x51f640
int InfantryClass::FindIdleAITarget()
{
    // IDA: 0x51F640 — find idle AI target
    return 0;
}

// ============================================================
// Phase 3: Paradrop
// ============================================================

// 0x521760
int InfantryClass::ParachuteTo()
{
    // IDA: 0x521760 — parachute infantry to target location
    hasParachute = true;
    return 0;
}

// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

// 0x51f6e0
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

// 0x521c90
int InfantryClass::PowerDrainUpdate(int a2)
{
    // IDA: 0x521C90 (160B) — per-frame power consumption (vt13).
    // a2 is the COM-stub context, unused by this per-class stub.
    return 0;
}

// 0x51aa10
int InfantryClass::HandleTargetDestroyed()
{
    // IDA: 0x51AA10 — handle when target is destroyed
    target = nullptr;
    return 0;
}

// 0x51f250
int InfantryClass::ProcessUpdate()
{
    // IDA: 0x51F250 — process update state
    return 0;
}

// 0x51f190
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

// 0x736579
int InfantryClass::UpdateBehavior()
{
    // IDA: 0x736579 — update infantry behavior AI
    return 0;
}

// 0x51dbd0
int InfantryClass::CalcFacingToTarget()
{
    // IDA: 0x51DBD0 — calculate facing direction toward target
    if (!target) return 0;
    return 0;
}

// 0x51bf90
int InfantryClass::EvaluateTarget()
{
    // IDA: 0x51BF90 — evaluate if target is worth attacking
    if (!target) return 0;
    return 1;
}

// 0x51e140
int InfantryClass::SelectAutoTarget(unsigned int flags, __int64 a3)
{
    // IDA: 0x51E140 — auto-select target
    // Check house, distance to targets, evaluate threats
    return SelectAutoTarget_Cloaked();
}

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
    // IDA: 0x523350 (30B) — scalar destructor
    return 0;
}

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
    // IDA: 0x51FAF0 — get type pointer
    return 0;
}

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

// 0x522780
int InfantryClass::InitProductionLimits()
{
    // IDA: 0x522780 — initialize production limits
    return 0;
}

// 0x522640
int InfantryClass::GetProductionLimit()
{
    // IDA: 0x522640 — get production limit from type
    if (!Type) return 0;
    return 10;
}

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
    // IDA: 0x521C40 — reset reload timer if needed
    return 0;
}

// 0x5220f0
int InfantryClass::SetFlag1752()
{
    // IDA: 0x5220F0 — set flag at offset 1752
    return 0;
}

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
    // IDA: 0x70E1E0 — process idle state
    return 0;
}

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

// 0x522340
void InfantryClass::CalculateApproachPath()
{
    // IDA: 0x522340 — calculate approach path to target
}

// 0x5224d0
bool InfantryClass::IsBridgeRepairEnabled()
{
    // IDA: 0x5224D0 — check if bridge repair is enabled
    return Technician;
}

// 0x522d50
int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
    // IDA: 0x522D50 — record slave money balance
    return 0;
}

// 0x772ac0
void InfantryClass::startPanic()
{
    // IDA: 0x772AC0 — start panic state
    PanicDurationLeft = 100;
}

int InfantryClass::CheckHealthDiff_0()
{
    // IDA: 0x7447A0 — check health diff (stub)
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

// 0x518f90
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

#include "structure/infantry.hpp"

namespace gamemd {

// --- InfantryClass ---

HRESULT __stdcall InfantryClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall InfantryClass::whatAmI() const { return kObjectTypeId; }
int InfantryClass::objectSize() const { return sizeof(InfantryClass); }
int InfantryClass::IsDeployed() const { return 0; }
bool InfantryClass::PlayAnim(Sequence index, bool force, bool randomStartFrame) { return false; }

} // namespace gamemd
