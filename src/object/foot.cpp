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
    , m_unknown_bool_6B6(false)
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
// MovementAI — per-frame movement and navigation update
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
    // Smoke interval from rules (global at 0x8871E0, offset 1538)
    // IDA: if (!(CurrentFrame % rules[1538]) && !IsHouseFlag3383 && !IsInAir() && !m_in_limbo)
    if ((CurrentFrame % 6) == 0
        && !m_in_limbo
        && !IsInAir()
        && !m_is_a_bomb)
    {
        CoordStruct coords;
        GetCoords(&coords);

        // Convert to map cell coordinates
        int cell_x = coords.X / 256;
        int cell_y = coords.Y / 256;

        // Look up cell and check traversability
        CellClass* cell = GetCell();
        if (cell)
        {
            // Check if cell is on impassable terrain
            // IDA: if cell traversability > 0, emit smoke with scaled damage
            // TODO: full smoke particle system emission
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
    // IDA: if current_facing == GetTargetFacing() → narrow turn; else → wide turn
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

    // IDA: vt_entry_472(this) — check if moving
    // If not moving, sub_70D7E0 — process movement result

    // IDA: Check parasite state (m_parasite_eating_me at 1684)
    // If parasite active, update parasite position
}

// ============================================================
// Mission state overrides
// ============================================================

int FootClass::Mission_Move()
{
    if (!m_destination)
        return 0;

    if (m_locomotor.ptr)
    {
        // ILocomotion::Move_To(destination)
        // Returns: 1 = arrived, 0 = still moving, -1 = blocked
    }

    return 0;
}

int FootClass::Mission_Attack()
{
    auto* target = m_target;
    if (!target)
        return 0;

    if (!IsCloseEnoughToAttack(target))
    {
        m_destination = target;
        return 0;
    }

    int weapon_idx = SelectWeapon(target);
    Fire(target, weapon_idx);

    return 0;
}

int FootClass::Mission_Guard()
{
    return 15;
}

int FootClass::Mission_Hunt()
{
    return 30;
}

bool FootClass::MoveTo(CoordStruct* coords)
{
    if (!coords || !m_locomotor.ptr)
        return false;

    m_unknown_point3d_678 = *coords;
    return true;
}

bool FootClass::StopMoving()
{
    if (!m_locomotor.ptr)
        return false;

    m_destination = nullptr;
    return true;
}

void FootClass::Panic()
{
    m_should_scan_for_target = false;
    m_frozen_still = false;
    // Enter scatter behavior, flee from threats
}

void FootClass::UnPanic()
{
    m_should_scan_for_target = true;
}

bool FootClass::ChronoWarpTo(CoordStruct dest)
{
    m_chrono_dest_coords = dest;
    m_being_warped_out = true;

    // TODO: Create chrono shift animation, teleport after delay
    return true;
}

int FootClass::GetCurrentSpeed() const
{
    if (!m_locomotor.ptr)
        return 0;

    // TODO: ILocomotion::Get_Speed() COM call
    return static_cast<int>(m_speed_percentage);
}

void FootClass::SetSpeedPercentage(double percentage)
{
    m_speed_percentage = percentage;
}

} // namespace game
} // namespace ra2
