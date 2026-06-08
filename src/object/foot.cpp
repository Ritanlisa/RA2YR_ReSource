#include "gamemd/object/foot.hpp"

#include <cstring>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kFootFlag = 0x4u;

} // anonymous namespace

extern int& CurrentFrame;

FootClass::FootClass() noexcept
    : m_planning_path_idx(-1)
    , m_unknown_short_524(0)
    , m_unknown_short_526(0)
    , m_unknown_short_528(0)
    , m_unknown_short_52A(0)
    , m_unknown_52C(0)
    , m_unknown_530(0)
    , m_unknown_534(0)
    , m_unknown_538(0)
    , m_unknown_bool_53C(false)
    , m_unknown_540(0)
    , m_current_map_coords{}
    , m_last_map_coords{}
    , m_last_jumpjet_map_coords{}
    , m_current_jumpjet_map_coords{}
    , m_unknown_coords_568{}
    , m_unused_574(0)
    , m_speed_percentage(0.0)
    , m_speed_multiplier(0.0)
    , m_destination(nullptr)
    , m_last_destination(nullptr)
    , m_unknown_int_5C4(-1)
    , m_unknown_5C8(0)
    , m_unknown_5CC(0)
    , m_unknown_5D0(0)
    , m_unknown_bool_5D1(false)
    , m_team(nullptr)
    , m_next_team_member(nullptr)
    , m_unknown_5DC(0)
    , m_path_delay_timer{}
    , m_unknown_int_64C(0)
    , m_unknown_timer_650{}
    , m_sight_timer{}
    , m_blockage_path_timer{}
    , m_unknown_point3d_678{}
    , m_tube_index(-1)
    , m_unknown_bool_685(false)
    , m_waypoint_index(0)
    , m_unknown_bool_687(false)
    , m_unknown_bool_688(false)
    , m_is_team_leader(false)
    , m_should_scan_for_target(false)
    , m_unknown_bool_68B(false)
    , m_unknown_bool_68C(false)
    , m_unknown_bool_68D(false)
    , m_unknown_bool_68E(false)
    , m_should_enter_absorber(false)
    , m_should_enter_occupiable(false)
    , m_should_garrison_structure(true)
    , m_parasite_eating_me(nullptr)
    , m_unknown_698(0)
    , m_parasite_im_using(nullptr)
    , m_paralysis_timer{}
    , m_unknown_bool_6AC(false)
    , m_is_attacked_by_locomotor(false)
    , m_is_let_go_by_locomotor(false)
    , m_unknown_bool_6AF(false)
    , m_unknown_bool_6B0(false)
    , m_unknown_bool_6B1(false)
    , m_unknown_bool_6B2(false)
    , m_unknown_bool_6B3(false)
    , m_unknown_bool_6B4(false)
    , m_unknown_bool_6B5(false)
    , m_unknown_bool_6B7(false)
    , m_frozen_still(false)
    , m_unknown_bool_6B8(false)
    , m_unused_6BC(0)
{
    std::memset(&m_audio7, 0, sizeof(m_audio7));
    std::memset(m_path_directions, 0, sizeof(m_path_directions));

    m_locomotor.ptr = nullptr;

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

    m_unknown_bool_6B3 = false;

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
    // IDA: if (!m_unknown_bool_6B5/*981*/ && IsHouseFlag3434) {
    //   type = GetType(); check sub_578540(type, 1);
    //   m_unknown_bool_6B5 = true;
    // }
    if (!m_unknown_bool_6B5)
    {
        // TODO: check house rule for ambiguity detection
    }
}

void FootClass::UpdateMovementSpeed()
{
    // IDA: COM ILocomotion speed control
    if (!m_locomotor.ptr)
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

    m_is_attacked_by_locomotor = false;

    if (!m_locomotor.ptr)
        return;

    // IDA: vt_entry_472(this) -- check if moving
    // If not moving, sub_70D7E0 -- process movement result

    // IDA: Check parasite state (m_parasite_eating_me at 1684)
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
    if (!m_destination && m_mission_queued == 0)
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
        m_destination = target;
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
    m_destination = nullptr; // NavCom in RA1

    return true;
}

bool FootClass::StopMoving()
{
    // RA1 Stop_Driver pattern:
    // Stop ILocomotion, clear head-to, set speed to 0
    if (!m_locomotor.ptr)
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
    if (m_locomotor.ptr) {
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
    // if (House::IsHumanPlayer(m_owner) && !Type->field_3412)
    //     if (CreateTriggerClassIfFarEnough(7, coord))
    //       VoxClass::FindAndPlay("EVA_UnitLost", -1)
    // TODO: implement EVA when VoxClass and HouseClass are available

    // Start crash/death animation + remove from map
    Remove();
}

} // namespace game
} // namespace ra2
