// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#include "misc/audio.hpp"
#include "object/techno.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
using ra2::game::AudioController;
using ra2::game::ObjectClass;
using ra2::game::TechnoClass;
}
#endif
#include "object/object.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "type/object_type.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"

#include <cstring>
#include <cmath>
#include "core/reverse_marker.hpp"
#include "e4/e4_globals_decls.hpp"

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kObjectFlag = 0x2u;

} // anonymous namespace

double ObjectClass::GetHealthPercentage() const
{
    return health > 0 ? (double)(health) / ((gamemd::ObjectTypeClass*)(void*)(GetType()))->Strength : 0.0;
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
// 0x5f44a0
bool ObjectClass::Remove()
{
    return false; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x5F44A0.json)
}
// 0x5f65f0
int ObjectClass::Destroy()
{
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x5F65F0.json)
}

void ObjectClass::Flash(int duration)
{
    (void)duration;
}

bool ObjectClass::DiscoveredBy(HouseClass* house)
{
    (void)house;
    return true;
}

// ============================================================
// 0x5f4d10
int ObjectClass::MarkForRedraw()
{
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x5F4D10.json)
}

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
    : owningHouseIndex(0)
    , fallRate(0)
    , nextObject(nullptr)
    , attachedTag(nullptr)
    , attachedBomb(nullptr)
    , customSound((int32_t)(-1))
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
    , lastLayer((uint32_t)(-1))
    , isInLogic(false)
    , isVisible(true)
    , location{}
    , lineTrailer(nullptr)
{
    std::memset((void *)(&ambientSoundController), 0, sizeof(ambientSoundController));
    std::memset(&customSound_controller, 0, sizeof(customSound_controller));

    abstractFlags |= kObjectFlag;
}

// IDA: AudioController
// 0x405d40
void AudioController::Stop() { }

} // namespace game
} // namespace ra2  // G42.35c: file-scope closes
