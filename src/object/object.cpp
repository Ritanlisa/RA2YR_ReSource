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
  void *this; // [esp+4h] [ebp-4h] BYREF

  IDA_LOBYTE(result) = this->isSelected; /*0x5f44a4*/
  if ( (unsigned char)result ) /*0x5f44ac*/
  {
    v3 = ((int (__thiscall *)(ObjectClass **, void **))ObjectClass_CurrentObjects->parent_gap[4])( /*0x5f44c2*/
           &ObjectClass_CurrentObjects,
           &this);
    if ( v3 != -1 && v3 < (int)g_SelectionManager ) /*0x5f44d2*/
    {
      for ( g_SelectionManager = (wchar_t *)((char *)g_SelectionManager - 1); /*0x5f44dd*/
            v3 < (int)g_SelectionManager;
            *((unsigned int *)g_ObjectClass_CurrentCount + v3 - 1) = *((unsigned int *)g_ObjectClass_CurrentCount + v3) )
      {
        ++v3; /*0x5f44e5*/
      }
    }
    this->isSelected = 0; /*0x5f44fc*/
    result = MapClass::GetScrollMode((int)&MapClass_Instance); /*0x5f4503*/
    if ( (void *)result == this ) /*0x5f450a*/
      IDA_LOBYTE(result) = MapClass::SetScrollMode((int)&MapClass_Instance, 0); /*0x5f4513*/
  }
  return result; /*0x5f4518*/
}
// 0x5f65f0
AbstractClass * * ObjectClass::Destroy()
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
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x5f662c*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x5f6666*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x5f666e*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x5f667d*/
  }
  return result; /*0x5f6680*/
}
// 0x5f4d10
void ObjectClass::MarkForRedraw()
{
  int result; // eax

  IDA_LOBYTE(result) = this->__pad_74[12]; /*0x5f4d10*/
  if ( !(_BYTE)result ) /*0x5f4d18*/
  {
    this->__pad_74[12] = 1; /*0x5f4d1a*/
    return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x5f4d28*/
  }
  return result; /*0x5f4d2d*/
}
// 0x5f4d10
    int __thiscall ObjectClass::MarkForRedraw(void *(void**)this)
    {
      int result; // eax

      IDA_LOBYTE(result) = this->__pad_74[12]; /*0x5f4d10*/
      if ( !(_BYTE)result ) /*0x5f4d18*/
      {
        this->__pad_74[12] = 1; /*0x5f4d1a*/
        return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x5f4d28*/
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
    true = true;
}

bool ObjectClass::DiscoveredBy(HouseClass* house)
{
    (void)house;
    true = true;
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
