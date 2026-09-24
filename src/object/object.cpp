#include "object/object.hpp"
#include "type/object_type.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"

#include <cstring>
#include <cmath>
#include "core/reverse_marker.hpp"
#include "e4/e4_globals.hpp"

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
  #374 *v4; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(result) = *((_BYTE *)this + 131); /*0x5f44a4*/
  if ( (_BYTE)result ) /*0x5f44ac*/
  {
    v4 = this; /*0x5f44be*/
    v3 = ((int (__thiscall *)(ObjectClass **, #374 **))ObjectClass_CurrentObjects->parent_gap[4])( /*0x5f44c2*/
           &ObjectClass_CurrentObjects,
           &v4);
    if ( v3 != -1 && v3 < (int)g_SelectionManager ) /*0x5f44d2*/
    {
      for ( g_SelectionManager = (wchar_t *)((char *)g_SelectionManager - 1); /*0x5f44dd*/
            v3 < (int)g_SelectionManager;
            *((_DWORD *)g_ObjectClass_CurrentCount + v3 - 1) = *((_DWORD *)g_ObjectClass_CurrentCount + v3) )
      {
        ++v3; /*0x5f44e5*/
      }
    }
    *((_BYTE *)this + 131) = 0; /*0x5f44fc*/
    result = MapClass::GetScrollMode((int)&MapClass_Instance); /*0x5f4503*/
    if ( (#374 *)result == this ) /*0x5f450a*/
      LOBYTE(result) = MapClass::SetScrollMode((int)&MapClass_Instance, 0); /*0x5f4513*/
  }
  return result; /*0x5f4518*/
}
// 0x5f65f0
AbstractClass * * ObjectClass::Destroy()
{
  int v2; // ecx
  int result; // eax

  v2 = *((_DWORD *)this + 14); /*0x5f65f3*/
  if ( v2 ) /*0x5f65f8*/
    ObjectClass::CleanupAudioAndRefs(v2); /*0x5f65fa*/
  if ( this && (*((_BYTE *)this + 20) & 1) != 0 ) /*0x5f6607*/
    TechnoClass::CleanupAll(this, 0); /*0x5f660d*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x5f6616*/
  (*(void (__thiscall **)(#374 *))(*(_DWORD *)this + 212))(this); /*0x5f661f*/
  *((_BYTE *)this + 144) = 0; /*0x5f6625*/
  result = dword_B0F6A0; /*0x5f662c*/
  if ( g_LaserDrawConfig < dword_B0F6A0 /*0x5f6666*/
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))(
                   &g_DiskLaserManager,
                   dword_B0F6A0 + dword_B0F6AC,
                   0),
        (_BYTE)result) )
  {
    result = g_LaserDrawConfig++; /*0x5f666e*/
    *((_DWORD *)dword_B0F69C + result) = this; /*0x5f667d*/
  }
  return result; /*0x5f6680*/
}
// 0x5f4d10
void ObjectClass::MarkForRedraw()
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 128); /*0x5f4d10*/
  if ( !(_BYTE)result ) /*0x5f4d18*/
  {
    *((_BYTE *)this + 128) = 1; /*0x5f4d1a*/
    return MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x5f4d28*/
  }
  return result; /*0x5f4d2d*/
}
// 0x5f4d10
    int __thiscall ObjectClass::MarkForRedraw(#374 *(void**)this)
    {
      int result; // eax

      LOBYTE(result) = *((_BYTE *)this + 128); /*0x5f4d10*/
      if ( !(_BYTE)result ) /*0x5f4d18*/
      {
        *((_BYTE *)this + 128) = 1; /*0x5f4d1a*/
        return MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x5f4d28*/
      }
      return result; /*0x5f4d2d*/
    }
    // TODO stub - translate quarantined IDA block above

/* ASM:
mov     al, [ecx+80h]
test    al, al
jnz     short locret_5F4D2D
mov     byte ptr [ecx+80h], 1
push    0
mov     ecx, 87F7E8h
call    MapClass__MarkForRedraw

locret_5F4D2D:                          ; CODE XREF: ObjectClass__MarkForRedraw+8↑j
retn
*/
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
    std::memset(&ambientSoundController, 0, sizeof(ambientSoundController));
    std::memset(&customSound_controller, 0, sizeof(customSound_controller));

    abstractFlags |= kObjectFlag;

// IDA: AudioController
// 0x405d40
void AudioController::Stop() { }
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ebx
  _DWORD *v5; // edi

  result = this; /*0x405d41*/
  if ( g_AudioConfigState ) /*0x405d53*/
  {
    if ( (int *)*(this + 3) == &dword_87E294 ) /*0x405d60*/
    {
      v2 = *this; /*0x405d66*/
      if ( *this ) /*0x405d66*/
      {
        if ( *(this + 2) == *(_DWORD *)(v2 + 36) /*0x405d93*/
          && *(this + 1) == *(_DWORD *)(v2 + 312)
          && (*(_BYTE *)(v2 + 24) & 1) == 0 )
        {
          v3 = *(_DWORD *)(v2 + 176); /*0x405d99*/
          if ( v3 && v2 == *(_DWORD *)(v3 + 192) ) /*0x405da9*/
          {
            if ( (*(_BYTE *)(v2 + 24) & 2) != 0 ) /*0x405daf*/
              Voice::Stop(); /*0x405db1*/
            AudioStream::ReleaseChannel(*(_DWORD *)(v2 + 176)); /*0x405dbc*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 192) = 0; /*0x405dc7*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 188) = 0; /*0x405dd3*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 180) = 0; /*0x405ddf*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 184) = 0; /*0x405deb*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 144) = 0; /*0x405df7*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 152) = 0; /*0x405e03*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 156) = 0; /*0x405e0f*/
            result = this; /*0x405e15*/
            *(_DWORD *)(v2 + 176) = 0; /*0x405e19*/
          }
          v4 = 0; /*0x405e26*/
          if ( *(int *)(v2 + 168) > 0 ) /*0x405e2a*/
          {
            v5 = (_DWORD *)(v2 + 40); /*0x405e2d*/
            do /*0x405e45*/
            {
              RefCount::Decrement(*v5); /*0x405e32*/
              *v5 = 0; /*0x405e37*/
              ++v4; /*0x405e3f*/
              ++v5; /*0x405e40*/
            }
            while ( v4 < *(_DWORD *)(v2 + 168) ); /*0x405e45*/
            result = this; /*0x405e47*/
          }
          *(_DWORD *)(v2 + 168) = 0; /*0x405e4c*/
          *(_DWORD *)(v2 + 28) = 4; /*0x405e52*/
          *(_DWORD *)(v2 + 312) = 0; /*0x405e59*/
          *(_DWORD *)(v2 + 632) = 0; /*0x405e5f*/
          *(_DWORD *)(v2 + 24) |= 1u; /*0x405e6b*/
        }
        *result = 0; /*0x405e6f*/
      }
    }
  }
  result[2] = 0; /*0x405e71*/
  return result; /*0x405e74*/
  result[2] = 0; /*0x405e71*/
  return result; /*0x405e74*/
  result[2] = 0; /*0x405e71*/
  return result; /*0x405e74*/
  result[2] = 0; /*0x405e71*/
  return result; /*0x405e74*/
  result[2] = 0; /*0x405e71*/
  return result; /*0x405e74*/
