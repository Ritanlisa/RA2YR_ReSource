#include "gamemd/object/foot.hpp"

#include <cstring>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kFootFlag = 0x4u;

} // anonymous namespace

extern int& CurrentFrame;

FootClass::FootClass() noexcept
    : planningPathIndex(-1)
    , pathWaypointY(0)
    , pathTargetX(0)
    , pathTargetY(0)
    , pathMoveState(0)
    , pathStepCounter(0)
    , pathBlockFlags(0)
    , pathCollisionState(0)
    , pathRecomputeFlag(false)
    , pathReserved(0)
    , currentMapCoords{}
    , lastMapCoords{}
    , lastJumpjetCoords{}
    , currentJumpjetCoords{}
    , movementOriginCoords{}
    , m_unused_574(0)
    , m_speed_percentage(0.0)
    , m_speed_multiplier(0.0)
    , destination(nullptr)
    , lastDestination(nullptr)
    , pathDirectionIndex(-1)
    , pathScanState(0)
    , pathScanTimer(0)
    , movementReserved1(0)
    , movementBlockedFlag(false)
    , team(nullptr)
    , nextTeamMember(nullptr)
    , teamFormationIndex(0)
    , m_path_delay_timer{}
    , pathSequenceLength(0)
    , pathSequenceTimer{}
    , sightTimer{}
    , blockagePathTimer{}
    , locomotorTargetCoords{}
    , tubeIndex(-1)
    , locomotorShiftFlag(false)
    , waypointIndex(0)
    , pathSequencingFlag(false)
    , pathAlternateFlag(false)
    , isTeamLeader(false)
    , shouldScanForTarget(false)
    , aiSearchFlag0(false)
    , aiSearchFlag1(false)
    , aiSearchFlag2(false)
    , aiSearchFlag3(false)
    , shouldEnterAbsorber(false)
    , shouldEnterOccupiable(false)
    , shouldGarrisonStructure(true)
    , parasiteEatingMe(nullptr)
    , parasiteState(0)
    , parasiteImUsing(nullptr)
    , paralysisTimer{}
    , parasiteFlag0(false)
    , isAttackedByLocomotor(false)
    , isLetGoByLocomotor(false)
    , locomotorFlag0(false)
    , locomotorFlag1(false)
    , locomotorFlag2(false)
    , locomotorFlag3(false)
    , locomotorFlag4(false)
    , locomotorFlag5(false)
    , locomotorFlag6(false)
    , locomotorFlag7(false)
    , frozenStill(false)
    , locomotorFlag8(false)
    , m_unused_6BC(0)
{
    std::memset(&movementAudio, 0, sizeof(movementAudio));
    std::memset(m_path_directions, 0, sizeof(m_path_directions));

    locomotor = nullptr;

    m_abstract_flags |= kFootFlag;
}

// ============================================================
// MovementAI -- per-frame movement and navigation update
// Based on IDA decompilation at 0x4DA530 (2520 bytes, 138 BBs)
// ============================================================

bool FootClass::MovementAI()
{
    // Section 1: Alive check + init
    if (!m_is_alive)
        return false;

    locomotorFlag4 = false;

    // Section 2: Movement smoke trail emission
    EmitMovementSmoke();

    // Section 3: Ambiguity detection
    UpdateMovementAmbiguity();

    // Section 4-5: Locomotion speed + position update
    UpdateMovementSpeed();

    // Section 6: Movement sound effects
    HandleMovementSoundUpdate();

    // Section 7: Locomotion COM update
    HandleLocomotionUpdate();

    return true;
}

void FootClass::EmitMovementSmoke()
{
    if ((CurrentFrame % 6) == 0
        && !m_in_limbo
        && !IsInAir()
        && !m_is_a_bomb)
    {
        CoordStruct coords;
        GetCoords(&coords);

        int cell_x = coords.X / 256;
        int cell_y = coords.Y / 256;

        CellStruct map_coords = { static_cast<int16_t>(cell_x), static_cast<int16_t>(cell_y) };
        CellClass* cell = nullptr;
        // TODO: cell = MapClass::Instance->TryGetCellAt(map_coords);

        if (cell)
        {
            // IDA: check cell passability (sub_487CB0)
            // If impassable terrain, emit scaled damage smoke
            // damage = cell_traversability * rules.SmokeSpeed
            // ReceiveDamage( &scaled_damage, 0, rules[1549], 0, 0, 1, 0 )
        }
    }
}

void FootClass::UpdateMovementAmbiguity()
{
    // IDA: if (!locomotorFlag6/*981*/ && IsHouseFlag3434) {
    //   type = GetType(); check sub_578540(type, 1);
    //   locomotorFlag6 = true;
    // }
    if (!locomotorFlag6)
    {
        // TODO: check house rule for ambiguity detection
    }
}

void FootClass::UpdateMovementSpeed()
{
    // IDA: COM ILocomotion speed control
    if (!locomotor)
        return;

    // IDA: ILocomotion::Is_Moving() && !IsInAir() && IsCurrentPlayer()
    // Update speed and direction based on current movement state
    // Recalculate speed from movement period

    // Speed timer recalculation (IDA: m_speed_timer at 1628, m_speed_period at 1636)
    // If timer elapsed, reset speed (IDA: vtable[1164] and vtable[1160])
    // Handle target-nearest vs target-current facing recalculation
    // IDA: if current_facing == GetTargetFacing() -> narrow turn; else -> wide turn
}

void FootClass::HandleMovementSoundUpdate()
{
    // Section 6 from IDA: Check terrain transitions for sound effect changes
    bool was_on_bridge = m_on_bridge;
    bool was_sinking = m_is_sinking;
    bool was_crashing = m_is_crashing;

    // IDA: Refresh bridge/sink/crash state
    // If bridge state changed and sound rule != -1, play sound
    // If sink state changed and sound rule != -1, play sound
    // If crash state changed and sound rule != -1, play sound

    m_on_bridge = IsOnBridge();
    m_is_sinking = false; // TODO: check actual state
    m_is_crashing = false; // TODO: check actual state

    if (was_on_bridge != m_on_bridge)
    {
        // Play bridge entry/exit sound
    }

    if (was_sinking != m_is_sinking)
    {
        // Play sinking sound
    }

    if (was_crashing != m_is_crashing)
    {
        // Play crashing sound
    }

    // Audio update for position-based sounds
    CoordStruct loc;
    GetCoords(&loc);
    // TODO: Audio position update sub_750D40
}

void FootClass::HandleLocomotionUpdate()
{
    // Section 7 from IDA: COM interface QueryInterface for ILocomotion
    // HRESULT hr = ILocomotion->QueryInterface(IID_NULL, &punk);
    // If punk valid and Is_DoneMoving():
    //   Release old locomotor, assign new
    // Then reset attacked_by_locomotor flag

    isAttackedByLocomotor = false;

    if (!locomotor)
        return;

    // IDA: vt_entry_472(this) -- check if moving
    // If not moving, sub_70D7E0 -- process movement result

    // IDA: Check parasite state (parasiteEatingMe at 1684)
    // If parasite active, update parasite position
}

// ============================================================
// Mission state overrides
// ============================================================

int FootClass::Mission_Move()
{
    // RA1 FootClass::Mission_Move pattern:
    // If no destination and not driving, enter idle mode
    // If no target, scan for nearby threats (AI-controlled units)
    if (!destination && m_mission_queued == 0)
    {
        QueueMission(static_cast<Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
        return 1;
    }

    // AI units: scan for targets while moving
    if (!m_target)
    {
        // TODO: check if AI-controlled, then SelectAutoTarget(THREAT_RANGE)
    }

    return 10;
}

int FootClass::Mission_Attack()
{
    // RA1 pattern: close distance -> fire -> repeat
    auto* target = m_target;
    if (!target)
        return 0;

    if (!IsCloseEnoughToAttack(target))
    {
        // Move toward target
        destination = target;
        return 0;
    }

    // Fire at target
    int weapon_idx = SelectWeapon(target);
    Fire(target, weapon_idx);

    return 0;
}

int FootClass::Mission_Guard()
{
    // RA1 Guard pattern: scan for enemies in area, attack if found
    // If no target, periodically scan
    if (!m_target)
    {
        SelectAutoTarget(static_cast<TargetFlags>(0), 0, false);
    }
    return 30;
}

int FootClass::Mission_Hunt()
{
    // RA1 Hunt: aggressive scan + chase
    if (!m_target)
    {
        SelectAutoTarget(static_cast<TargetFlags>(0), 0, false);
    }
    if (!m_target)
    {
        QueueMission(static_cast<Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
        return 30;
    }
    return 0;
}

// ============================================================
// Movement control helpers
// ============================================================

bool FootClass::MoveTo(CoordStruct* coords)
{
    // RA1 Assign_Destination pattern: set navigation target
    if (!coords)
        return false;

    // Reset pathfinding threshold
    m_path_delay_timer = {};
    destination = nullptr; // NavCom in RA1

    return true;
}

bool FootClass::StopMoving()
{
    // RA1 Stop_Driver pattern:
    // Stop ILocomotion, clear head-to, set speed to 0
    if (!locomotor)
        return false;

    // TODO: ILocomotion::Stop()
    // TODO: Release track reservation
    // TODO: Set speed to 0

    return true;
}

// IDA: 0x4D98C0 -- FootClass::Destroyed (91B)
// Handles unit death: stop movement, eject passengers, award experience,
// play EVA "UnitLost" for human players when trigger is far enough.
void FootClass::Destroyed(ObjectClass* killer)
{
    // IDA: if already dead, skip
    if (!m_is_alive)
        return;

    m_is_alive = false;
    m_is_crashing = true;

    // Stop movement
    if (locomotor) {
        StopMoving();
    }

    // IDA: Eject passengers from transport
    // FootClass::EjectPassengers(this)

    // Award experience to killer
    if (killer) {
        RegisterDestruction(reinterpret_cast<TechnoClass*>(killer));
        auto* killer_house = killer->GetOwningHouse();
        if (killer_house)
            RegisterKill(killer_house);
    }

    // IDA: EVA announcement for human players
    // *(this+135)*4 = *(this+0x21C) = m_owner
    // if (House::IsHumanPlayer(m_owner) && !Type->unknown_3412)
    //     if (CreateTriggerClassIfFarEnough(7, coord))
    //       VoxClass::FindAndPlay("EVA_UnitLost", -1)
    // TODO: implement EVA when VoxClass and HouseClass are available

    // Start crash/death animation + remove from map
    Remove();
}

} // namespace game
} // namespace ra2
