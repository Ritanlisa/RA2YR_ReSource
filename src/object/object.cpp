// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "system/map.hpp"  // gB MapClass tree truth
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
#include "type/object_type.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"

#include <cstring>
#include <cmath>
#include "core/reverse_marker.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/RefCount_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/Voice_e4.hpp"  // g57c5 W5d scope supply
// ---- g57c5 W5 vocab (declaration-only) ----
namespace ra2 { namespace game {
class RefCount;  // g57c5 W5 fwd
class Voice;  // g57c5 W5 fwd
} }
// ---- g57c5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) 
namespace gamemd {

    void AudioStream_ReleaseChannel(void *a1);   // raw 0x405dbc;
} // namespace gamemd
// ---- g57b5 W3 end ----

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kObjectFlag = 0x2u;

} // anonymous namespace

double ObjectClass::GetHealthPercentage() const
{
    return health > 0 ? (double)(health) / ((gamemd::ObjectTypeClass*)(GetType()))->Strength : 0.0;
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

  (*((unsigned char *)&(result))) = this->isSelected; /*0x5f44a4*/
  if ( (unsigned char)result ) /*0x5f44ac*/
  {
    v4 = this; /*0x5f44be*/
    v3 = (*(int (__thiscall **)(unsigned char *, IUnknown **))(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[212] + 16))(&((unsigned int *)&stru_A8EB00)[212], &v4); /*0x5f44c2*/
    if ( v3 != -1 && v3 < *(int *)&((unsigned int *)&stru_A8EB00)[228] ) /*0x5f44d2*/
    {
      --*(unsigned int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x5f44d7*/
      for ( ; /*0x5f44dd*/
            v3 < *(int *)&((unsigned int *)&stru_A8EB00)[228];
            *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[216]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x5f44e5*/
      }
    }
    this->isSelected = 0; /*0x5f44fc*/
    result = MapClass::GetScrollMode((MapClass *)&DataGlobal_87F7E8); /*0x5f4503*/
    if ( (IUnknown *)result == this ) /*0x5f450a*/
      return MapClass::SetScrollMode((int)&DataGlobal_87F7E8, 0); /*0x5f4513*/
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
    (attachedBomb)->CleanupAudioAndRefs(); /*0x5f65fa*/
  if ( this && (this->abstractFlags & 1) != 0 ) /*0x5f6607*/
    ((TechnoClass *)this)->CleanupAll(0); /*0x5f660d*/
  AbstractClass::AnnounceExpiredPointer(&this->vfptr, 1); /*0x5f6616*/
  (*((void (__thiscall **)(ObjectClass *))this->vfptr + 53))(this); /*0x5f661f*/
  this->isAliveFlag = 0; /*0x5f6625*/
  result = *(unsigned int *)&DataGlobal_B0F6A0; /*0x5f662c*/
  if ( *(int *)&DataGlobal_B0F6A8 < *(int *)&DataGlobal_B0F6A0 /*0x5f6666*/
    || (DataGlobal_B0F6A5 || !*(unsigned int *)&DataGlobal_B0F6A0)
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(unsigned int *)&DataGlobal_B0F6A0 + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (unsigned char)result) )
  {
    result = (*(unsigned int *)&DataGlobal_B0F6A8)++; /*0x5f666e*/
    *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C + 4 * result) = (unsigned int)(this); /*0x5f667d*/
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

  (*((unsigned char *)&(result))) = this->needsRedraw; /*0x5f4d10*/
  if ( !(unsigned char)result ) /*0x5f4d18*/
  {
    this->needsRedraw = 1; /*0x5f4d1a*/
    return MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x5f4d28*/
  }
  return result; /*0x5f4d2d*/
}
// ObjectClass q000[67]: DrawBehind (IDA 0x426440)
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
// ObjectClass q000[68]: DrawExtras (IDA 0x426450)
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
// ObjectClass q000[69]: Draw (IDA 0x5B3A50)
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
// ObjectClass q000[70]: DrawAgain (IDA 0x5F65D0)
// Secondary draw pass (selection overlay, etc.)
// ============================================================
void ObjectClass::DrawAgain(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // Base: delegates to q000[69] Draw
    Draw(screen_pos, bounds);
}

// ============================================================
// ObjectClass q000[71]: Undiscover
// ============================================================

// ============================================================
// ObjectClass q000[72]: See
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
    std::memset((&ambientSoundController), 0, sizeof(ambientSoundController));
    std::memset(&customSound_controller, 0, sizeof(customSound_controller));

    abstractFlags |= kObjectFlag;
}

// IDA: AudioController
// 0x405d40
void AudioController::Stop()
{
  unsigned int *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ebx
  RefCount **v5; // edi
  Voice *v6; // [esp+0h] [ebp-Ch]

  result = (unsigned int *)(this->AudioController_field_00); /*0x405d41*/
  if ( g_AudioConfigState ) /*0x405d53*/
  {
    if ( this->AudioController_field_0C == &dword_87E294 ) /*0x405d60*/
    {
      v2 = this->AudioController_field_00[0]; /*0x405d66*/
      if ( this->AudioController_field_00[0] ) /*0x405d66*/
      {
        if ( this->AudioController_field_08 == *(void **)(v2 + 36) /*0x405d93*/
          && this->AudioController_field_04 == *(void **)(v2 + 312)
          && (*(unsigned char *)(v2 + 24) & 1) == 0 )
        {
          v3 = *(unsigned int *)(v2 + 176); /*0x405d99*/
          if ( v3 && v2 == *(unsigned int *)(v3 + 192) ) /*0x405da9*/
          {
            if ( (*(unsigned char *)(v2 + 24) & 2) != 0 ) /*0x405daf*/
              (v6)->Stop(); /*0x405db1*/
            AudioStream::ReleaseChannel(*(AudioStream **)(v2 + 176)); /*0x405dbc*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 192) = 0; /*0x405dc7*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 188) = 0; /*0x405dd3*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 180) = 0; /*0x405ddf*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 184) = 0; /*0x405deb*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 144) = 0; /*0x405df7*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 152) = 0; /*0x405e03*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 156) = 0; /*0x405e0f*/
            result = (unsigned int *)(this->AudioController_field_00); /*0x405e15*/
            *(unsigned int *)(v2 + 176) = 0; /*0x405e19*/
          }
          v4 = 0; /*0x405e26*/
          if ( *(int *)(v2 + 168) > 0 ) /*0x405e2a*/
          {
            v5 = (RefCount **)(v2 + 40); /*0x405e2d*/
            do /*0x405e45*/
            {
              RefCount::Decrement(*v5); /*0x405e32*/
              *v5 = 0; /*0x405e37*/
              ++v4; /*0x405e3f*/
              ++v5; /*0x405e40*/
            }
            while ( v4 < *(unsigned int *)(v2 + 168) ); /*0x405e45*/
            result = (unsigned int *)(this->AudioController_field_00); /*0x405e47*/
          }
          *(unsigned int *)(v2 + 168) = 0; /*0x405e4c*/
          *(unsigned int *)(v2 + 28) = 4; /*0x405e52*/
          *(unsigned int *)(v2 + 312) = 0; /*0x405e59*/
          *(unsigned int *)(v2 + 632) = 0; /*0x405e5f*/
          *(unsigned int *)(v2 + 24) |= 1u; /*0x405e6b*/
        }
        *result = 0; /*0x405e6f*/
      }
    }
  }
  result->AudioController_field_08 = 0; /*0x405e71*/
  return result; /*0x405e74*/
}
} // namespace ra2
} // namespace game