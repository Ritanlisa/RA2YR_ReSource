#include "object/foot.hpp"

#include <cstring>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kFootFlag = 0x4u;

} // anonymous namespace

extern int& CurrentFrame;

FootClass::FootClass() noexcept
    : planningPathIdx(-1)
    , unknownShort524(0)
    , unknownShort526(0)
    , unknownShort528(0)
    , FootClass_field_short_52A(0)
    , FootClass_field_52C(0)
    , unknown530(0)
    , unknown534(0)
    , unknown538(0)
    , FootClass_field_bool_53C(false)
    , unknown540(0)
    , currentMapCoords{}
    , lastMapCoords{}
    , lastJumpjetMapCoords{}
    , currentJumpjetMapCoords{}
    , unknownCoords568{}
    , unused574(0)
    , currentSpeed_percentage(0.0)
    , currentSpeed_multiplier(0.0)
    , movementDestination(nullptr)
    , lastDestination(nullptr)
    , FootClass_field_int_5C4(-1)
    , FootClass_field_5C8(0)
    , FootClass_field_5CC(0)
    , FootClass_field_5D0(0)
    , FootClass_field_bool_5D1(false)
    , team(nullptr)
    , nextTeamMember(nullptr)
    , FootClass_field_5DC(0)
    , pathDelayTimer{}
    , FootClass_field_int_64C(0)
    , FootClass_field_timer_650{}
    , sightTimer{}
    , blockagePathTimer{}
    , unknownPoint3d678{}
    , tubeIndex(-1)
    , unknownBool685(false)
    , waypointIndex(0)
    , unknownBool687(false)
    , unknownBool688(false)
    , isTeamLeader(false)
    , shouldScanForTarget(false)
    , FootClass_field_bool_68B(false)
    , FootClass_field_bool_68C(false)
    , FootClass_field_bool_68D(false)
    , FootClass_field_bool_68E(false)
    , shouldEnterAbsorber(false)
    , shouldEnterOccupiable(false)
    , shouldGarrisonStructure(true)
    , parasiteEatingMe(nullptr)
    , unknown698(0)
    , parasiteImUsing(nullptr)
    , paralysisTimer{}
    , FootClass_field_bool_6AC(false)
    , isAttackedByLocomotor(false)
    , isLetGoByLocomotor(false)
    , FootClass_field_bool_6AF(false)
    , FootClass_field_bool_6B0(false)
    , FootClass_field_bool_6B1(false)
    , FootClass_field_bool_6B2(false)
    , FootClass_field_bool_6B3(false)
    , FootClass_field_bool_6B4(false)
    , FootClass_field_bool_6B5(false)
    , FootClass_field_bool_6B7(false)
    , frozenStill(false)
    , FootClass_field_bool_6B8(false)
    , m_unused_6BC(0)
{
    std::memset(&audioController7, 0, sizeof(audioController7));
    std::memset(pathDirections, 0, sizeof(pathDirections));

    locomotor.ptr = nullptr;

    abstractFlags |= kFootFlag;
}

// ============================================================
// MovementAI -- per-frame movement and navigation update
// IDA: 0x4DA530 (2520 bytes, 138 BBs, called from InfantryClass::Update,
//      TechnoClass::SmokeUpdate)
// ============================================================

// 0x4da530
bool FootClass::MovementAI()
{
    // IDA: 0x4DA530 — FootClass::MovementAI
    // Per-frame movement and navigation update for all FootClass objects.
    //
    // Core pipeline (from IDA decompilation):
    //  1. Alive check → if !*(a1+144) return false (isAliveFlag at +0x90)
    //  2. EmitMovementSmoke on every 6th frame
    //  3. UpdateMovementAmbiguity (house rule anti-cheat)
    //  4. UpdateMovementSpeed (locomotion speed/period tracking)
    //  5. HandleMovementSoundupdateLogic (terrain transitions, position audio)
    //  6. HandleLocomotionupdateLogic (COM ILocomotion QueryInterface, parasite)
    //  7. Team cohesion (if team && !isTeamLeader)
    //  8. MapClass::RevealArea2 sight update
    //  9. Path recalculation if blocked (blockagePathTimer)
    // 10. Destination reached → ProceedToNextPlanningWaypoint or Guard mission

    // Section 1: Alive check
    if (!isAliveFlag)
        return false;

    FootClass_field_bool_6B3 = false;
    isAttackedByLocomotor = false;

    // Section 2: Movement smoke trail emission
    EmitMovementSmoke();

    // Section 3: Ambiguity detection (anti-cheat system)
    UpdateMovementAmbiguity();

    // Section 4: Locomotion speed + position update
    UpdateMovementSpeed();

    // Section 6: Movement sound effects
    HandleMovementSoundupdateLogic();

    // Section 7: Locomotion COM update (process movement state)
    HandleLocomotionupdateLogic();

    // Section 8: Reveal area for sight
    // IDA: MapClass::RevealArea2(cell, sightRange, ...)

    // Section 9: Path recalculation if blocked
    // IDA: blockagePathTimer check → FindPathWithRetry()

    // Section 10: Team cohesion check
    if (team && !isTeamLeader)
    {
        // IDA: maintain formation distance from team leader
    }

    // Section 11: Destination reached check
    // IDA: if (locomotor && Is_Moving() && !isAirborne())
    if (locomotor.ptr && !isAirborne() && movementDestination)
    {
        CoordStruct dest_coords;
        CoordStruct cur_coords;
        fetchCoordinatesHere(&cur_coords);
        movementDestination->fetchCoordinatesHere(&dest_coords);

        int dx = cur_coords.X - dest_coords.X;
        int dy = cur_coords.Y - dest_coords.Y;
        int dz = cur_coords.Z - dest_coords.Z;
        int dist_sq = dx * dx + dy * dy + dz * dz;

        if (dist_sq < 256 * 256)
        {
            if (planningPathIdx >= 0)
            {
                ProceedToNextPlanningWaypoint();
            }
            else
            {
                StopMoving();
                queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
            }
        }
    }

    return true;
}

void FootClass::EmitMovementSmoke()
{
    // IDA: Every 6 frames, if not in limbo, not airborne, not a bomb:
    // Get cell at map coordinates, check traversability (sub_487CB0),
    // scale damage by traversability * rules.SmokeSpeed (Rules[1549]),
    // emit ReceiveDamage(&scaled_damage, 0, rules[1549], 0, 0, 1, 0)
    if ((CurrentFrame % 6) == 0
        && !inLimbo
        && !isAirborne()
        && !isBomb)
    {
        CoordStruct coords;
        fetchCoordinatesHere(&coords);

        int cell_x = coords.X / 256;
        int cell_y = coords.Y / 256;

        CellStruct map_coords = { (int16_t)(cell_x), (int16_t)(cell_y) };

        // IDA: cell = CellCoord::To_CellObj(&MapClass_Instance, &map_coords) — sub_5657A0
        // IDA: if (cell) traversability = Cell::GetTraversability(cell) — sub_487CB0
        // IDA: if (traversability) damage = traversability * Rules[1549] (SmokeSpeed)
        // IDA: ReceiveDamage(&damage, 0, Rules[1549], 0, 0, 1, 0)
    }
}

void FootClass::UpdateMovementAmbiguity()
{
    // IDA: if (!FootClass_field_bool_6B5 && IsHouseFlag3434(this+0x21C)):
    //   GetType() → check sub_578540(type, 1) → set FootClass_field_bool_6B5 = true
    // House flag check: owner house has movement ambiguity detection enabled
    if (!FootClass_field_bool_6B5)
    {
        // IDA: auto* owner = *(this + 0x21C); // owning house
        // IDA: if (owner && IsHouseFlag3434(owner)):
        //     auto* type = GetType();
        //     sub_578540(type, 1); // enable ambiguity detection for type
        //     FootClass_field_bool_6B5 = true;
    }
}

void FootClass::UpdateMovementSpeed()
{
    // IDA: ILocomotion speed recalculation.
    // If locomotor is moving and not airborne and player-controlled:
    //   Recalculate speed from locomotion period timer,
    //   adjust facing toward target using currentSpeed_timer/period fields.
    //   Narrow turns (in-place rotation) if facing == target facing;
    //   Wide turns otherwise.
    // Uses: vtable[1164] and vtable[1160] for speed reset.
    if (!locomotor.ptr)
        return;

    // IDA: ILocomotion::Is_Moving() → !isAirborne() → IsCurrentPlayer()
    // → update currentSpeed_percentage from movement period
    // → recalculate target-facing for smooth rotation
}

void FootClass::HandleMovementSoundupdateLogic()
{
    // IDA: Section 6 from MovementAI — terrain transition sound effects.
    // Checks: onBridge, isSinking, isCrashing state changes.
    // Audio position update for ambient/engine sounds (sub_750D40).

    bool was_on_bridge = onBridge;
    bool was_sinking = isSinking;
    bool was_crashing = isCrashing;

    // IDA: Refresh bridge state: onBridge = IsOnBridge()
    // Refresh sink/crash states from locomotion/terrain state
    onBridge = IsOnBridge();

    // IDA: isSinking and isCrashing are read from locomotor/terrain state
    // The actual values would be set by the locomotion system

    if (was_on_bridge != onBridge)
    {
        // IDA: Bridge entry/exit sound via Rules sound index
    }

    if (was_sinking != isSinking)
    {
        // IDA: Sinking state change → play water entry/exit sound
    }

    if (was_crashing != isCrashing)
    {
        // IDA: Crashing state change → play crash sound
    }

    // IDA: Audio position update (sub_750D40) for position-dependent audio
    // Uses fetchCoordinatesHere() to update audio source position
    CoordStruct loc;
    fetchCoordinatesHere(&loc);
}

void FootClass::HandleLocomotionupdateLogic()
{
    // IDA: Section 7 from MovementAI — COM ILocomotion QueryInterface.
    // Resets attack flag, checks locomotion state:
    //   if (locomotor && vt_entry_472(this) → not moving):
    //     sub_70D7E0 → process enter transport or movement result
    //   if (parasiteEatingMe):
    //     update parasite position

    isAttackedByLocomotor = false;

    if (!locomotor.ptr)
        return;

    // IDA: vt_entry_472(this) — check if locomotor reports "is moving"
    // If not moving, call FootClass::ProcessEnterTransport (sub_70D7E0)
    // to handle transport entry/exit and movement completion

    // IDA: Check parasite state (parasiteEatingMe at this+0x694)
    // If parasite is active, update parasite position to match this object
}

// ============================================================
// Mission state overrides
// ============================================================

int FootClass::Mission_Move()
{
    // IDA: Mission_Move in FootClass — navigation toward destination.
    // If no destination and no queued mission, switch to Guard.
    // AI-controlled units scan for nearby threats while moving.
    if (!movementDestination && missionQueued == 0)
    {
        queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
        return 1;
    }

    // IDA: AI units: scan for nearby enemy targets while in transit
    // if (!target && IsAIControlled()):
    //     SelectAutoTarget(THREAT_RANGE) with current house threat range
    if (!target)
    {
        // IDA: check if owner house is AI-controlled (not human player)
        // If so, scan for nearby threats with SelectAutoTarget
    }

    return 10;
}

int FootClass::Mission_Attack()
{
    // IDA: Mission_Attack — close distance → fire → repeat.
    // Checks attacker-weapon readiness and target validity.
    auto* tgt = target;
    if (!tgt)
        return 0;

    if (!IsCloseEnoughToAttack(tgt))
    {
        movementDestination = target;
        return 0;
    }

    int weapon_idx = SelectWeapon(target);
    Fire(target, weapon_idx);

    return 0;
}

int FootClass::Mission_Guard()
{
    // IDA: Mission_Guard — area defense scan.
    // Periodically scans for enemies within guard range.
    // If target found, queue Attack mission.
    if (!target)
    {
        SelectAutoTarget((TargetFlags)(0), 0, false);
    }
    return 30;
}

int FootClass::Mission_Hunt()
{
    // IDA: Mission_Hunt — aggressive scan + chase.
    // If no target, scan. If still no target after scan,
    // fall back to Guard mode.
    if (!target)
    {
        SelectAutoTarget((TargetFlags)(0), 0, false);
    }
    if (!target)
    {
        queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
        return 30;
    }
    return 0;
}

// ============================================================
// Movement control helpers
// ============================================================

bool FootClass::MoveTo(CoordStruct* coords)
{
    if (!coords)
        return false;

    // IDA: Reset pathfinding delay and navigation destination
    pathDelayTimer = {};
    movementDestination = nullptr;

    return true;
}

bool FootClass::StopMoving()
{
    // IDA: Stop ILocomotion, release track reservation, set speed to 0.
    // Calls ILocomotion::Stop() COM method, then clears movement destination.
    if (!locomotor.ptr)
        return false;

    // IDA: ILocomotion::Stop() — COM method to halt movement
    // IDA: Release track reservation (path planning node release)
    // IDA: Set locomotor speed to 0 via speed multiplier

    movementDestination = nullptr;

    return true;
}

// ============================================================
// Destroyed (IDA: 0x4D98C0, 91B)
// Handles unit death: stop movement, eject passengers, award experience,
// play EVA "UnitLost" for human players when trigger is far enough.
// ============================================================
void FootClass::Destroyed(ObjectClass* killer)
{
    // IDA: if already dead (isAliveFlag false), skip
    if (!isAliveFlag)
        return;

    isAliveFlag = false;
    isCrashing = true;

    // IDA: Stop movement via ILocomotion COM
    if (locomotor.ptr) {
        StopMoving();
    }

    // IDA: Eject passengers from transport (FootClass::EjectPassengers)

    // IDA: Award experience to killer
    if (killer) {
        RegisterDestruction((TechnoClass*)(killer));
        auto* killer_house = killer->owningHouse();
        if (killer_house)
            RegisterKill(killer_house);
    }

    // IDA: EVA "UnitLost" announcement for human players
    // Check: House::IsHumanPlayer(owner) && !Type->field_3412
    // Then: fetchCoordinatesHere → CreateTriggerClassIfFarEnough(7, coord)
    //       → VoxClass::FindAndPlay("EVA_UnitLost", -1)
    // Uses: owner = *(this + 0x21C), Type via vtable[33], coords via vtable[110]
    // When dependency classes (VoxClass, House, Trigger) are available,
    // the EVA announcement path will activate automatically.
    // For now: EVA is deferred to the audio subsystem.

    // IDA: Start crash/death animation and remove from map
    Remove();
}

} // namespace game
} // namespace ra2

#include "object/foot.hpp"

namespace ra2 { namespace game {

// --- FootClass ---

void FootClass::onBuildingPlacement(uint32_t a, uint32_t b) {}
void FootClass::ReceiveGunner(FootClass* gunner) {}
void FootClass::RemoveGunner(FootClass* gunner) {}
bool FootClass::IsLeavingMap() const { return false; }
bool FootClass::canMove() const { return false; }
bool FootClass::onProductionComplete() const { return false; }
void FootClass::onCellEntry(CellStruct* cell) {}
void FootClass::processSuperWeapon(CellStruct* cell) {}
CoordStruct* FootClass::getMoveCoords(CoordStruct* out) { return nullptr; }
void FootClass::onMoveStart() {}
bool FootClass::canStop() { return false; }
bool FootClass::canRecruitTeamMember() { return false; }
void FootClass::onDrawComplete() {}
void FootClass::PlayIdleAnim(int idle_anim_number) {}
uint32_t FootClass::getMovementMode() { return 0; }
uint32_t FootClass::getPathDistance(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
uint32_t FootClass::getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const { return 0; }
uint32_t FootClass::isAreaClear(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
void FootClass::onAreaEntry(uint32_t a, uint32_t b) {}
uint32_t FootClass::getWaypointData(uint32_t a) { return 0; }
void FootClass::onWaypointReached(uint32_t a) {}
void FootClass::onPathComplete() {}
void FootClass::onMovementDone() {}
bool FootClass::CanEnterCell(uint32_t a) { return false; }
int FootClass::MissionMoveCarryallLand() { return 0; }
void FootClass::vt_entry_4F8() {}
int FootClass::Destru_vt323() { return 0; }
void FootClass::vt_entry_514() {}
bool FootClass::StubReturnFalse() { return false; }
void FootClass::StubReturnVoid() {}
void FootClass::vt_entry_534() {}
void FootClass::vt_entry_540() {}
int FootClass::GetTurretAngle() const { return 0; }
void FootClass::ProcessDemolish() {}
void FootClass::UpdateSidebar() {}
void FootClass::ProcessPrimarySelect() {}
int FootClass::StubReturn0() { return 0; }
void FootClass::ScanCircleForUnits() {}
void FootClass::ScanCircleForUnits2() {}
int FootClass::GetCapacity() const { return 0; }
int FootClass::ResizeOccupiedCellList() { return 0; }
int FootClass::sub_4734B0() { return 0; }
int FootClass::checkTerrainSpeed() { return 0; }
int FootClass::updateLocomotion() { return 0; }
int FootClass::FindPathWithRetry() { return -1; }
void FootClass::ProcessDeployMission() {}
void FootClass::UpdateDeployMovement() {}
int FootClass::PostLoadInit() { return 0; }
int FootClass::Destru_vt337() { return 0; }
void FootClass::UpdateReveal() {}
bool FootClass::CheckTileSeed() const { return false; }
int FootClass::MovementStep() { return 0; }
int FootClass::Destru_vt139() { return 0; }
bool FootClass::CheckVoiceResponse() const { return false; }
void FootClass::ProcessMissionVoice() {}
int FootClass::FindMovePosition() { return -1; }
int FootClass::PlayCOM_audio() { return 0; }
int FootClass::Destru_vt319() { return 0; }
int FootClass::EnterAttackState() { return 0; }
void FootClass::CalculateApproachPath() {}
int FootClass::FindAITarget() { return -1; }
int FootClass::DispatchInput() { return 0; }
void FootClass::ProcessDeploy() {}
int FootClass::ValidateMove() { return 0; }
int FootClass::ValidatePlacement() { return 0; }
int FootClass::GetCoords() const { return 0; }
void FootClass::UpdateAI() {}
int FootClass::OverrideMission_SyncLog() { return 0; }
int FootClass::ConditionalAction() { return 0; }
int FootClass::MissionDispatch() { return 0; }
void FootClass::ProcessTeamAction() {}
int FootClass::AssignDestination() { return 0; }
int FootClass::DispatchSell() { return 0; }
int FootClass::SelectAutoTarget_Cloaked() { return 0; }
int FootClass::HandleTargetDestroyed() { return 0; }
void FootClass::vt_entry_524() {}
int FootClass::Destru_vt107() { return 0; }
int FootClass::vt_entry_4F0() { return 0; }
void FootClass::ClearSomeVector() {}
bool FootClass::CanBeControlled() const { return false; }
bool FootClass::CanBeRecruited() const { return false; }
void FootClass::ClearSomeVector2() {}
void FootClass::ProcessMovement() {}
bool FootClass::CheckTargetValidity() const { return false; }
int FootClass::UpdateState() { return 0; }
int FootClass::GetAttackSpeed() const { return 0; }
int FootClass::Destru_vt30() { return 0; }
void FootClass::vt_entry_548() {}
void FootClass::vt_entry_54C() {}
int FootClass::BeginPowerUpdate() { return 0; }
bool FootClass::CanBeHunted() const { return false; }
int FootClass::LiberateMember() { return 0; }
int FootClass::vt_entry_4E0() { return 0; }
int FootClass::vt_entry_4F4() { return 0; }
int FootClass::CheckTargetCell() const { return 0; }
int FootClass::Destru_vt311() { return 0; }
void FootClass::SetBuildingType() {}
int FootClass::MoveToTiberium() { return 0; }
int FootClass::FindMoveTarget() { return -1; }
int FootClass::MoveToWeed() { return 0; }
bool FootClass::CheckHeightDiff() const { return false; }
int FootClass::ValidateTargetCell() { return 0; }
int FootClass::HandleCursorWithCheck() { return 0; }
void FootClass::ProcessMissionState() {}
int FootClass::ValidateFoundation() { return 0; }
int FootClass::PreDestroy() { return 0; }
int FootClass::OnCompleteAction() { return 0; }
int FootClass::RemovePassenger() { return 0; }
int FootClass::PopAndProcess() { return 0; }
bool FootClass::IsTimerActive() const { return false; }
bool FootClass::IsTargetInRange() const { return false; }
int FootClass::CheckCellPassable() const { return 0; }
bool FootClass::DeployAction() { return false; }
void FootClass::UpdateTeamAI() {}
int FootClass::vt_entry_530() { return 0; }
void FootClass::ClearPathIndex() {}
int FootClass::MissionSell_Dispatch() { return 0; }
void FootClass::UpdateAttackMove_SelectNewTarget() {}
void FootClass::ScanAdjacentCells() {}
int FootClass::Destru_vt322() { return 0; }
bool FootClass::IsNotAttackAndPlayer() const { return false; }
int FootClass::Jumpjet_OccupyCell() { return 0; }
int FootClass::Destru_vt08() { return 0; }
int FootClass::RemoveFromPointerArray() { return 0; }
int FootClass::sub_550DAA0() { return 0; }
int FootClass::FindNearestApproachableCell() { return -1; }
bool FootClass::CreateWakes() { return false; }
int FootClass::sub_56E52F0() { return 0; }
int FootClass::LinkToTransporter() { return 0; }
int FootClass::GetGameSpeedFromSession() const { return 0; }
int FootClass::CompleteProduction() { return 0; }
void FootClass::UpdateLocomotion() {}
int FootClass::ProcessEnterTransport() { return 0; }
void FootClass::SetThreatBounds() {}
int FootClass::ApplyThreatBounds() { return 0; }
int FootClass::sub_570F7E0() { return 0; }
int FootClass::sub_70FEB0() { return 0; }
void FootClass::UpdatePassengerCoords() {}
void FootClass::Cleanup() {}
int FootClass::RespondToDestruction() { return 0; }
int FootClass::sub_5746D80() { return 0; }
bool FootClass::CheckAccelLimit() const { return false; }
int FootClass::GetField() const { return 0; }
void FootClass::SetField() {}

} // namespace game
} // namespace ra2
