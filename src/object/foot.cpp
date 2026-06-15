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
    , m_unknown_short_52A(0)
    , m_unknown_52C(0)
    , unknown530(0)
    , unknown534(0)
    , unknown538(0)
    , m_unknown_bool_53C(false)
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
    , m_unknown_int_5C4(-1)
    , m_unknown_5C8(0)
    , m_unknown_5CC(0)
    , m_unknown_5D0(0)
    , m_unknown_bool_5D1(false)
    , team(nullptr)
    , nextTeamMember(nullptr)
    , m_unknown_5DC(0)
    , pathDelayTimer{}
    , m_unknown_int_64C(0)
    , unknownTimer650{}
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
    , m_unknown_bool_68B(false)
    , m_unknown_bool_68C(false)
    , m_unknown_bool_68D(false)
    , m_unknown_bool_68E(false)
    , shouldEnterAbsorber(false)
    , shouldEnterOccupiable(false)
    , shouldGarrisonStructure(true)
    , parasiteEatingMe(nullptr)
    , unknown698(0)
    , parasiteImUsing(nullptr)
    , paralysisTimer{}
    , m_unknown_bool_6AC(false)
    , isAttackedByLocomotor(false)
    , isLetGoByLocomotor(false)
    , m_unknown_bool_6AF(false)
    , m_unknown_bool_6B0(false)
    , m_unknown_bool_6B1(false)
    , m_unknown_bool_6B2(false)
    , m_unknown_bool_6B3(false)
    , m_unknown_bool_6B4(false)
    , m_unknown_bool_6B5(false)
    , m_unknown_bool_6B7(false)
    , frozenStill(false)
    , m_unknown_bool_6B8(false)
    , m_unused_6BC(0)
{
    std::memset(&audioController7, 0, sizeof(audioController7));
    std::memset(pathDirections, 0, sizeof(pathDirections));

    locomotor.ptr = nullptr;

    abstractFlags |= kFootFlag;
}

// ============================================================
// MovementAI -- per-frame movement and navigation update
// Based on IDA decompilation at 0x4DA530 (2520 bytes, 138 BBs)
// ============================================================

bool FootClass::MovementAI()
{
    // Section 1: Alive check + init
    if (!isAliveFlag)
        return false;

    m_unknown_bool_6B3 = false;

    // Section 2: Movement smoke trail emission
    EmitMovementSmoke();

    // Section 3: Ambiguity detection
    UpdateMovementAmbiguity();

    // Section 4-5: Locomotion speed + position update
    UpdateMovementSpeed();

    // Section 6: Movement sound effects
    HandleMovementSoundupdateLogic();

    // Section 7: Locomotion COM update
    HandleLocomotionupdateLogic();

    return true;
}

void FootClass::EmitMovementSmoke()
{
    if ((CurrentFrame % 6) == 0
        && !inLimbo
        && !isAirborne()
        && !isBomb)
    {
        CoordStruct coords;
        fetchCoordinatesHere(&coords);

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
    if (!locomotor.ptr)
        return;

    // IDA: ILocomotion::Is_Moving() && !isAirborne() && IsCurrentPlayer()
    // Update speed and direction based on current movement state
    // Recalculate speed from movement period

    // Speed timer recalculation (IDA: currentSpeed_timer at 1628, currentSpeed_period at 1636)
    // If timer elapsed, reset speed (IDA: vtable[1164] and vtable[1160])
    // Handle target-nearest vs target-current facing recalculation
    // IDA: if current_facing == GetTargetFacing() -> narrow turn; else -> wide turn
}

void FootClass::HandleMovementSoundupdateLogic()
{
    // Section 6 from IDA: Check terrain transitions for sound effect changes
    bool was_on_bridge = onBridge;
    bool was_sinking = isSinking;
    bool was_crashing = isCrashing;

    // IDA: Refresh bridge/sink/crash state
    // If bridge state changed and sound rule != -1, play sound
    // If sink state changed and sound rule != -1, play sound
    // If crash state changed and sound rule != -1, play sound

    onBridge = IsOnBridge();
    isSinking = false; // TODO: check actual state
    isCrashing = false; // TODO: check actual state

    if (was_on_bridge != onBridge)
    {
        // Play bridge entry/exit sound
    }

    if (was_sinking != isSinking)
    {
        // Play sinking sound
    }

    if (was_crashing != isCrashing)
    {
        // Play crashing sound
    }

    // Audio update for position-based sounds
    CoordStruct loc;
    fetchCoordinatesHere(&loc);
    // TODO: Audio position update sub_750D40
}

void FootClass::HandleLocomotionupdateLogic()
{
    // Section 7 from IDA: COM interface QueryInterface for ILocomotion
    // HRESULT hr = ILocomotion->QueryInterface(IID_NULL, &punk);
    // If punk valid and Is_DoneMoving():
    //   Release old locomotor, assign new
    // Then reset attacked_by_locomotor flag

    isAttackedByLocomotor = false;

    if (!locomotor.ptr)
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
    if (!movementDestination && missionQueued == 0)
    {
        queueMission(static_cast<Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
        return 1;
    }

    // AI units: scan for targets while moving
    if (!target)
    {
        // TODO: check if AI-controlled, then SelectAutoTarget(THREAT_RANGE)
    }

    return 10;
}

int FootClass::Mission_Attack()
{
    // RA1 pattern: close distance -> fire -> repeat
    auto* tgt = target;
    if (!tgt)
        return 0;

    if (!IsCloseEnoughToAttack(tgt))
    {
        // Move toward target
        movementDestination = target;
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
    if (!target)
    {
        SelectAutoTarget(static_cast<TargetFlags>(0), 0, false);
    }
    return 30;
}

int FootClass::Mission_Hunt()
{
    // RA1 Hunt: aggressive scan + chase
    if (!target)
    {
        SelectAutoTarget(static_cast<TargetFlags>(0), 0, false);
    }
    if (!target)
    {
        queueMission(static_cast<Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
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
    pathDelayTimer = {};
    movementDestination = nullptr; // NavCom in RA1

    return true;
}

bool FootClass::StopMoving()
{
    // RA1 Stop_Driver pattern:
    // Stop ILocomotion, clear head-to, set speed to 0
    if (!locomotor.ptr)
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
    if (!isAliveFlag)
        return;

    isAliveFlag = false;
    isCrashing = true;

    // Stop movement
    if (locomotor.ptr) {
        StopMoving();
    }

    // IDA: Eject passengers from transport
    // FootClass::EjectPassengers(this)

    // Award experience to killer
    if (killer) {
        RegisterDestruction(reinterpret_cast<TechnoClass*>(killer));
        auto* killer_house = killer->owningHouse();
        if (killer_house)
            RegisterKill(killer_house);
    }

    // IDA: EVA announcement for human players
    // *(this+135)*4 = *(this+0x21C) = owner
    // if (House::IsHumanPlayer(owner) && !Type->field_3412)
    //     if (CreateTriggerClassIfFarEnough(7, coord))
    //       VoxClass::FindAndPlay("EVA_UnitLost", -1)
    // TODO: implement EVA when VoxClass and HouseClass are available

    // Start crash/death animation + remove from map
    Remove();
}

} // namespace game
} // namespace ra2
