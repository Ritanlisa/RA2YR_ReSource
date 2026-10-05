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
    int result; // eax
    int v3; // eax
    IUnknown *v4; // [esp+4h] [ebp-4h] BYREF

    IDA_LOBYTE(result) = this->__pad_74[15]; /*0x5f44a4*/
    if ( (unsigned char)result ) /*0x5f44ac*/
    {
      v4 = this; /*0x5f44be*/
      v3 = (*(int (__thiscall **)(unsigned char *, IUnknown **))(*(unsigned int *)&stru_A8EB00.?[212] + 16))(&stru_A8EB00.?[212], &v4); /*0x5f44c2*/
      if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[228] ) /*0x5f44d2*/
      {
        --*(unsigned int *)&stru_A8EB00.?[228]; /*0x5f44d7*/
        for ( ; /*0x5f44dd*/
              v3 < *(int *)&stru_A8EB00.?[228];
              *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[216] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[216]
                                                                                   + 4 * v3) )
        {
          ++v3; /*0x5f44e5*/
        }
      }
      this->__pad_74[15] = 0; /*0x5f44fc*/
      result = MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x5f4503*/
      if ( (IUnknown *)result == this ) /*0x5f450a*/
        return MapClass::SetScrollMode((int)&stru_87F5F0.__pad_58[416], 0); /*0x5f4513*/
    }
    return result; /*0x5f4518*/
}
// 0x5f65f0
int ObjectClass::Destroy()
{
    ObjectClass *attachedBomb; // ecx
    int result; // eax

    attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f65f3*/
    if ( attachedBomb ) /*0x5f65f8*/
      ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f65fa*/
    if ( this && (this->? & 1) != 0 ) /*0x5f6607*/
      TechnoClass::CleanupAll((TechnoClass *)this, 0); /*0x5f660d*/
    AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x5f6616*/
    (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 53))(this); /*0x5f661f*/
    this->isAliveFlag = 0; /*0x5f6625*/
    result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x5f662c*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x5f6666*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                     &g_BuildingLoadQueue_Array.ToTile,
                     *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (unsigned char)result) )
    {
      result = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x5f666e*/
      *(unsigned int *)(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x5f667d*/
    }
    return result; /*0x5f6680*/
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
    int result; // eax

    IDA_LOBYTE(result) = this->__pad_74[12]; /*0x5f4d10*/
    if ( !(unsigned char)result ) /*0x5f4d18*/
    {
      this->__pad_74[12] = 1; /*0x5f4d1a*/
      return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x5f4d28*/
    }
    return result; /*0x5f4d2d*/
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
