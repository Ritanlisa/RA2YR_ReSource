#include "gamemd/object/object.hpp"
#include "gamemd/type/object_type.hpp"

#include <cstring>
#include <cmath>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kObjectFlag = 0x2u;

} // anonymous namespace

double ObjectClass::GetHealthPercentage() const
{
    return m_health > 0 ? static_cast<double>(m_health) / reinterpret_cast<gamemd::ObjectTypeClass*>(GetType())->Strength : 0.0;
}

bool ObjectClass::Put(const CoordStruct& coords, unsigned int face_dir)
{
    if (m_in_limbo)
        return false;

    m_is_on_map = true;
    m_in_limbo = false;
    SetLocation(coords);

    auto* cell = GetCell();
    if (cell)
        MarkAllOccupationBits(coords);

    return true;
}

bool ObjectClass::Remove()
{
    if (!m_is_on_map)
        return false;

    UnmarkAllOccupationBits(m_location);
    m_is_on_map = false;
    m_in_limbo = true;
    m_is_alive = false;

    return true;
}

void ObjectClass::Destroy()
{
    Remove();
    m_is_alive = false;
}

void ObjectClass::RestoreMission(Mission mission)
{
    // Override in MissionClass for actual mission queue management
}

DamageState ObjectClass::ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
    ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house)
{
    if (!m_is_alive || !m_is_on_map)
        return static_cast<DamageState>(0);

    if (m_health <= 0)
    {
        Destroy();
        return static_cast<DamageState>(0);
    }

    if (damage && *damage > 0)
    {
        // TODO: full warhead-vs-armor calculation
        int actual_damage = *damage;
        m_health -= actual_damage;
        m_estimated_health = m_health;

        if (m_health <= 0)
        {
            m_health = 0;
            Destroy();
            if (attacker)
                RegisterDestruction(reinterpret_cast<TechnoClass*>(attacker));
            if (attacking_house)
                RegisterKill(attacking_house);
            return static_cast<DamageState>(1); // destroyed
        }
    }

    return static_cast<DamageState>(2); // damaged
}

void ObjectClass::Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination)
{
    // RA1 scatter: move away from threat in random direction
    if (!m_is_alive || !m_is_on_map)
        return;

    // TODO: calculate scatter destination based on threat direction
    // For now, basic scatter just marks for movement
    (void)coords;
    (void)ignore_mission;
    (void)ignore_destination;
}

bool ObjectClass::Ignite()
{
    // Start fire/damage burning state
    // TODO: create fire animation, set burning timer
    return true;
}

void ObjectClass::Extinguish()
{
    // Stop fire/damage burning state
    // TODO: remove fire animation, clear burning timer
}

int ObjectClass::GetWeaponRange(int weapon_idx) const
{
    auto* type = reinterpret_cast<gamemd::ObjectTypeClass*>(GetType());
    if (!type)
        return 0;

    // TODO: return type->GetWeapon(weapon_idx)->Range
    (void)weapon_idx;
    return 0;
}

int ObjectClass::DistanceFrom(AbstractClass* that) const
{
    if (!that)
        return 0;

    CoordStruct my_coords = GetCoords();
    CoordStruct their_coords = that->GetCoords();

    int dx = my_coords.X - their_coords.X;
    int dy = my_coords.Y - their_coords.Y;
    int dz = my_coords.Z - their_coords.Z;

    return static_cast<int>(std::sqrt(static_cast<double>(dx*dx + dy*dy + dz*dz)));
}

Move ObjectClass::IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const
{
    if (!dest_cell)
        return static_cast<Move>(0);

    // Check if cell contains an object that blocks movement
    // TODO: full cell occupancy check with facing/level/alt logic
    return static_cast<Move>(1);
}

int ObjectClass::GetHeight() const
{
    return m_location.Z;
}

void ObjectClass::SetHeight(uint32_t height)
{
    m_location.Z = static_cast<int>(height);
}

int ObjectClass::GetZ() const
{
    return m_location.Z;
}

bool ObjectClass::IsActive() const
{
    return m_is_alive && m_is_on_map && !m_in_limbo;
}

bool ObjectClass::IsControllable() const
{
    return m_is_on_map && m_is_alive;
}

bool ObjectClass::IsSurfaced()
{
    return m_is_on_map;
}

bool ObjectClass::IsStrange() const
{
    return m_is_a_bomb || m_is_falling_down;
}

uint32_t ObjectClass::GetPointsValue() const
{
    return 0;
}

bool ObjectClass::CanBeRepaired() const
{
    return m_health > 0;
}

bool ObjectClass::CanBeSold() const
{
    return m_health > 0 && !m_in_limbo;
}

DamageState ObjectClass::IronCurtain(int duration, HouseClass* source, bool force_shield)
{
    // Set invulnerability timer
    // TODO: start iron curtain timer, set visual tint
    (void)duration;
    (void)source;
    (void)force_shield;
    return static_cast<DamageState>(0);
}

bool ObjectClass::IsIronCurtained() const
{
    // TODO: check iron curtain timer > 0
    return false;
}

void ObjectClass::Reveal()
{
    m_is_visible = true;
}

void ObjectClass::Flash(int duration)
{
    // Toggle selected flash state
    (void)duration;
    m_needs_redraw = true;
}

bool ObjectClass::DiscoveredBy(HouseClass* house)
{
    (void)house;
    m_is_visible = true;
    return true;
}

ObjectClass::ObjectClass() noexcept
    : m_unknown_24(0)
    , m_unknown_28(0)
    , m_fall_rate(0)
    , m_next_object(nullptr)
    , m_attached_tag(nullptr)
    , m_attached_bomb(nullptr)
    , m_custom_sound(static_cast<int32_t>(-1))
    , m_bomb_visible(false)
    , m_health(0)
    , m_estimated_health(0)
    , m_is_on_map(true)
    , m_unknown_78(0)
    , m_unknown_7C(0)
    , m_needs_redraw(false)
    , m_in_limbo(true)
    , m_in_open_topped_transport(false)
    , m_is_selected(false)
    , m_has_parachute(false)
    , m_parachute(nullptr)
    , m_on_bridge(false)
    , m_is_falling_down(false)
    , m_was_falling_down(false)
    , m_is_a_bomb(false)
    , m_is_alive(true)
    , m_last_layer(0)
    , m_is_in_logic(false)
    , m_is_visible(false)
    , m_location{}
    , m_line_trailer(nullptr)
{
    std::memset(&m_ambient_sound_controller, 0, sizeof(m_ambient_sound_controller));
    std::memset(&m_custom_sound_controller, 0, sizeof(m_custom_sound_controller));

    m_abstract_flags |= kObjectFlag;
}

// ============================================================
// ObjectClass vtable[18]: GetCoords (IDA 0x5F65A0, 33B)
// Copies Location(member offset +39/40/41) to output CoordStruct
// Used everywhere: CreateUnit, MovementAI, rendering, etc.
// ============================================================

// ============================================================
// ObjectClass vtable[27]: HasC4 (IDA 0x5F3E30, 18B)
// Checks if building has C4 planted (this+1320 area)
// ============================================================

// ============================================================
// BuildingClass vtable[122]: MissionDispatch (IDA 0x5B35E0, 101B)
// Called from CreateUnit to trigger deploy state changes.
// Checks CurrentMission (this+43) against known missions
// (28=Unload, 19=Enter), dispatches via vt_entry_512/492
// ============================================================

// ============================================================
// ObjectClass vtable[73]: UpdateProductionDisplay (IDA 0x5F5850)
// Updates the production progress bar display
// ============================================================

// ============================================================
// ObjectClass vtable[109]: SetPosition (IDA 0x5F6940)
// Sets object position from CoordStruct (vt_entry_436 in IDA)
// Used by ConstructionPositionTracker for angle-based positioning
// ============================================================

} // namespace game
} // namespace ra2
