#include "object/object.hpp"
#include "type/object_type.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"

#include <cstring>
#include <cmath>
#include "core/reverse_marker.hpp"

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kObjectFlag = 0x2u;

} // anonymous namespace

double ObjectClass::GetHealthPercentage() const
{
    return health > 0 ? static_cast<double>(health) / reinterpret_cast<gamemd::ObjectTypeClass*>(GetType())->Strength : 0.0;
}

bool ObjectClass::Put(const CoordStruct& coords, unsigned int face_dir)
{
    if (inLimbo)
        return false;

    isOnMap = true;
    inLimbo = false;
    SetLocation(coords);

    auto* cell = GetCell();
    if (cell)
        MarkAllOccupationBits(coords);

    return true;
}

// IDA: 0x5F44A0 -- ObjectClass::Remove (123B)
bool ObjectClass::Remove()
{
    if (!isSelected)
        return false;

    isSelected = false;
    UnmarkAllOccupationBits(location);
    isOnMap = false;
    inLimbo = true;

    return true;
}

// IDA: 0x5F65F0 -- ObjectClass::Destroy (146B)
void ObjectClass::Destroy()
{
    isAliveFlag = false;
    Remove();
}

void ObjectClass::RestoreMission(Mission mission)
{
    // Override in MissionClass for actual mission queue management
}

DamageState ObjectClass::ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
    ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house)
{
    if (!isAliveFlag || !isOnMap)
        return static_cast<DamageState>(0);

    if (health <= 0)
    {
        Destroy();
        return static_cast<DamageState>(0);
    }

    if (damage && *damage > 0)
    {
        int actual_damage = *damage;
        health -= actual_damage;
        estimatedHealth = health;

        if (health <= 0)
        {
            health = 0;
            Destroy();
            if (attacker)
                RegisterDestruction(reinterpret_cast<TechnoClass*>(attacker));
            if (attacking_house)
                RegisterKill(attacking_house);
            return static_cast<DamageState>(1);
        }
    }

    return static_cast<DamageState>(2);
}

void ObjectClass::Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination)
{
    if (!isAliveFlag || !isOnMap)
        return;
    (void)coords;
    (void)ignore_mission;
    (void)ignore_destination;
}

bool ObjectClass::Ignite()
{
    return true;
}

void ObjectClass::Extinguish()
{
}

int ObjectClass::GetWeaponRange(int weapon_idx) const
{
    auto* type = reinterpret_cast<gamemd::ObjectTypeClass*>(GetType());
    if (!type)
        return 0;
    (void)weapon_idx;
    return 0;
}

int ObjectClass::DistanceFrom(AbstractClass* that) const
{
    if (!that)
        return 0;

    CoordStruct my_coords = fetchCoordinatesHere();
    CoordStruct their_coords = that->fetchCoordinatesHere();

    int dx = my_coords.X - their_coords.X;
    int dy = my_coords.Y - their_coords.Y;
    int dz = my_coords.Z - their_coords.Z;

    return static_cast<int>(std::sqrt(static_cast<double>(dx*dx + dy*dy + dz*dz)));
}

Move ObjectClass::IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const
{
    if (!dest_cell)
        return static_cast<Move>(0);
    return static_cast<Move>(1);
}

int ObjectClass::GetHeight() const
{
    return location.Z;
}

void ObjectClass::SetHeight(uint32_t height)
{
    location.Z = static_cast<int>(height);
}

int ObjectClass::GetZ() const
{
    return location.Z;
}

bool ObjectClass::IsActive() const
{
    return isAliveFlag && isOnMap && !inLimbo;
}

bool ObjectClass::IsControllable() const
{
    return isOnMap && isAliveFlag;
}

bool ObjectClass::IsSurfaced()
{
    return isOnMap;
}

bool ObjectClass::IsStrange() const
{
    return isBomb || isFallingDown;
}

uint32_t ObjectClass::GetPointsValue() const
{
    return 0;
}

bool ObjectClass::CanBeRepaired() const
{
    return health > 0;
}

bool ObjectClass::CanBeSold() const
{
    return health > 0 && !inLimbo;
}

DamageState ObjectClass::IronCurtain(int duration, HouseClass* source, bool force_shield)
{
    (void)source;
    (void)duration;
    (void)force_shield;
    return static_cast<DamageState>(0);
}

bool ObjectClass::IsIronCurtained() const
{
    return false;
}

void ObjectClass::Reveal()
{
    isVisible = true;
}

// IDA: 0x5F4D10 -- ObjectClass::MarkForRedraw
void ObjectClass::MarkForRedraw()
{
    if (!needsRedraw) {
        needsRedraw = true;
    }
}

void ObjectClass::Flash(int duration)
{
    (void)duration;
    needsRedraw = true;
}

bool ObjectClass::DiscoveredBy(HouseClass* house)
{
    (void)house;
    isVisible = true;
    return true;
}

// ============================================================
// ObjectClass vtable[67]: DrawBehind (IDA 0x426440)
// Draws behind object (shadow, etc.)
// ============================================================
void ObjectClass::DrawBehind(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // Base implementation: nothing behind most objects
    // Override in derived classes for shadows, etc.
    (void)screen_pos;
    (void)bounds;
}

// ============================================================
// ObjectClass vtable[68]: DrawExtras (IDA 0x426450)
// Draws extra visual effects around the object.
// ============================================================
void ObjectClass::DrawExtras(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // Base implementation: no extras
    // Override for health bars, pips, selection indicators
    (void)screen_pos;
    (void)bounds;
}

// ============================================================
// ObjectClass vtable[69]: Draw (IDA 0x5B3A50)
// Main draw function. Thin stub in base class.
// Overridden by: BuildingClass::Draw, TechnoClass::Draw, etc.
// ============================================================
void ObjectClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // Base class stub - actual drawing is in derived classes
    // This is typically not called directly; derived classes override.
    (void)screen_pos;
    (void)bounds;
}

// ============================================================
// ObjectClass vtable[70]: DrawAgain (IDA 0x5F65D0)
// Secondary draw pass (selection overlay, etc.)
// ============================================================
void ObjectClass::DrawAgain(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // Base: delegates to vtable[69] Draw
    Draw(screen_pos, bounds);
}

// ============================================================
// ObjectClass vtable[71]: Undiscover
// ============================================================

// ============================================================
// ObjectClass vtable[72]: See
// ============================================================

// IDA: 0x5F3900 -- ObjectClass::ctor
ObjectClass::ObjectClass() noexcept
    : objectTypeFlags(0)
    , owningHouseIndex(0)
    , fallRate(0)
    , nextObject(nullptr)
    , attachedTag(nullptr)
    , attachedBomb(nullptr)
    , customSound(static_cast<int32_t>(-1))
    , bombVisible(false)
    , health(255)
    , estimatedHealth(255)
    , isOnMap(false)
    , spawnStatus(1)
    , visibilityFlags(0)
    , needsRedraw(false)
    , inLimbo(true)
    , inOpenToppedTransport(false)
    , isSelected(false)
    , hasParachute(false)
    , parachute(nullptr)
    , onBridge(false)
    , isFallingDown(false)
    , wasFallingDown(false)
    , isBomb(false)
    , isAliveFlag(true)
    , lastLayer(static_cast<uint32_t>(-1))
    , isInLogic(false)
    , isVisible(true)
    , location{}
    , lineTrailer(nullptr)
{
    std::memset(&ambientSoundController, 0, sizeof(ambientSoundController));
    std::memset(&customSound_controller, 0, sizeof(customSound_controller));

    abstractFlags |= kObjectFlag;
}

// IDA: AudioController
void AudioController::Stop() { }
void AudioController::Start(int32_t soundIndex) { (void)soundIndex; }
void AudioController::Pause() { }
void AudioController::Resume() { }

} // namespace game
} // namespace ra2
