#include "object/object.hpp"
#include "type/object_type.hpp"

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
// Removes object from selection manager and resets scroll anchor
// Checks this+0x83 (isSelected), not isOnMap
bool ObjectClass::Remove()
{
    // IDA: if (*(this+0x83)) -- isSelected check
    if (!isSelected)
        return false;

    // IDA: find index in ObjectClass_CurrentObjects
    // IDA: remove from g_SelectionManager by shifting entries down
    // IDA: *(this+0x83) = 0 -- isSelected = false
    isSelected = false;

    // IDA: if MapClass::GetScrollMode == this -- SetScrollMode(0)
    // This deselects the scroll anchor if this object was it

    // Also perform standard removal -- unmark occupancy, set limbo
    UnmarkAllOccupationBits(location);
    isOnMap = false;
    inLimbo = true;

    return true;
}

// IDA: 0x5F65F0 -- ObjectClass::Destroy (146B)
// Cleanup chain: audio -- TechnoClass::CleanupAll -- AnnounceExpiredPointer
// Then sets isAliveFlag=false and registers for disk laser cleanup
void ObjectClass::Destroy()
{
    // IDA: if (*(this+0x38)) -- attachedBomb cleanup
    // ObjectClass::CleanupAudioAndRefs(v2)

    // IDA: if (abstractFlags & 1) -- TechnoClass::CleanupAll(this, 0)
    // AbstractClass::AnnounceExpiredPointer(this, 1)
    // vtable[53] cleanup virtual

    // IDA: *(this+0x90) = 0 -- isAliveFlag = false
    isAliveFlag = false;

    // Remove from map
    Remove();

    // IDA: register in disk laser draw queue (g_LaserDrawConfig++)
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
        // TODO: full warhead-vs-armor calculation
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
            return static_cast<DamageState>(1); // destroyed
        }
    }

    return static_cast<DamageState>(2); // damaged
}

void ObjectClass::Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination)
{
    // RA1 scatter: move away from threat in random direction
    if (!isAliveFlag || !isOnMap)
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

    // Check if cell contains an object that blocks movement
    // TODO: full cell occupancy check with facing/level/alt logic
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

// IDA: 0x70E2B0 -- TechnoClass::IronCurtain (80B)
// Sets iron curtain invulnerability timer fields at timer offsets
DamageState ObjectClass::IronCurtain(int duration, HouseClass* source, bool force_shield)
{
    (void)source;

    // IDA: *(this+99) = CurrentFrame -- ironCurtainTimer.data[0] at +0x18C
    // IDA: *(this+100) = v5 -- duration stored in timer data[1] at +0x190
    // IDA: *(this+105) = 0 -- ironTintStage at +0x1A4
    // IDA: *(this+101) = a2 -- duration field at +0x194
    // IDA: *(this+113) = a4 ? 1 : 0 -- forceShielded at +0x1C4

    // TODO: implement timer fields when TimerStruct layout is confirmed
    (void)duration;
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
    isVisible = true;
}

// IDA: 0x5F4D10 -- ObjectClass::MarkForRedraw (30B)
// If not already marked, sets needsRedraw=true and calls MapClass::MarkForRedraw
void ObjectClass::MarkForRedraw()
{
    if (!needsRedraw) {  // IDA: if (!*(this+0x80))
        needsRedraw = true;  // IDA: *(this+0x80) = 1
        // IDA: MapClass::MarkForRedraw(&MapClass_Instance, 0);
    }
}

void ObjectClass::Flash(int duration)
{
    // Toggle selected flash state
    (void)duration;
    needsRedraw = true;
}

bool ObjectClass::DiscoveredBy(HouseClass* house)
{
    (void)house;
    isVisible = true;
    return true;
}

// IDA: 0x5F3900 -- ObjectClass::ctor
// Verified: AbstractClass_Constructor at 0x410170 called first, then 2 AudioController::Init
ObjectClass::ObjectClass() noexcept
    : objectTypeFlags(0)               // +0x24 = 0 (IDA mov [esi+0x24], 0)
    , owningHouseIndex(0)               // +0x28 = 0 (IDA mov [esi+0x28], 0)
    , fallRate(0)                // +0x2C = 0 (IDA mov [esi+0x2C], 0)
    , nextObject(nullptr)        // +0x30 = 0 (IDA mov [esi+0x30], 0)
    , attachedTag(nullptr)       // +0x34 = 0 (IDA mov [esi+0x34], 0)
    , attachedBomb(nullptr)      // +0x38 = 0 (IDA mov [esi+0x38], 0)
    // ambientSoundController at +0x3C (zeroed + AudioController_Init call)
    // customSound_controller at +0x50 (zeroed + AudioController_Init call)
    , customSound(static_cast<int32_t>(-1))  // +0x64 = -1 (IDA or ecx, 0xFFFFFFFF)
    , bombVisible(false)         // +0x68 = 0 (IDA mov byte [esi+0x68], 0)
    , health(255)                 // +0x6C = 255 (IDA mov [esi+0x6C], 0xFF)
    , estimatedHealth(255)       // +0x70 = 255 (IDA mov [esi+0x70], 0xFF)
    , isOnMap(false)            // +0x74 = 0 (IDA mov byte [esi+0x74], 0)
    , spawnStatus(1)               // +0x78 = 1 (IDA mov [esi+0x78], 1)
    , visibilityFlags(0)               // +0x7C = 0 (IDA mov [esi+0x7C], 0)
    , needsRedraw(false)         // +0x80 = 0 (IDA mov byte [esi+0x80], 0)
    , inLimbo(true)              // +0x81 = 1 (IDA mov byte [esi+0x81], 1)
    , inOpenToppedTransport(false)  // +0x82 = 0 (IDA mov byte [esi+0x82], 0)
    , isSelected(false)          // +0x83 = 0 (IDA mov byte [esi+0x83], 0)
    , hasParachute(false)        // +0x84 = 0 (IDA mov byte [esi+0x84], 0)
    , parachute(nullptr)          // +0x88 = 0 (IDA mov [esi+0x88], 0)
    , onBridge(false)            // +0x8C = 0 (IDA mov byte [esi+0x8C], 0)
    , isFallingDown(false)      // +0x8D = 0 (IDA mov byte [esi+0x8D], 0)
    , wasFallingDown(false)     // +0x8E = 0 (IDA mov byte [esi+0x8E], 0)
    , isBomb(false)            // +0x8F = 0 (IDA mov byte [esi+0x8F], 0)
    , isAliveFlag(true)              // +0x90 = 1 (IDA mov byte [esi+0x90], 1)
    , lastLayer(static_cast<uint32_t>(-1))  // +0x94 = -1 (IDA mov [esi+0x94], -1)
    , isInLogic(false)          // +0x98 = 0 (IDA mov byte [esi+0x98], 0)
    , isVisible(true)            // +0x99 = 1 (IDA mov byte [esi+0x99], 1)
    , location{}                  // +0x9C = init from dword_AC1380/84/88
    , lineTrailer(nullptr)       // +0xA8 = 0 (IDA mov [esi+0xA8], 0)
{
    // IDA: AudioController::Init called at +0x3C and +0x50
    std::memset(&ambientSoundController, 0, sizeof(ambientSoundController));
    std::memset(&customSound_controller, 0, sizeof(customSound_controller));

    abstractFlags |= kObjectFlag;
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

// IDA: AudioController::Stop @ 0x405D40, Start @ 0x758A40,
//      Pause @ 0x752E60, Resume @ 0x750F30
void AudioController::Stop() { }
void AudioController::Start(int32_t soundIndex) { (void)soundIndex; }
void AudioController::Pause() { }
void AudioController::Resume() { }

} // namespace game
} // namespace ra2
