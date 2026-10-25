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
  AbstractClass::AnnounceExpiredPointer(&this->ptr_0, 1); /*0x5f6616*/
  (*((void (__thiscall **)(ObjectClass *))this->ptr_0 + 53))(this); /*0x5f661f*/
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

// ============================================================================
// X133: own-slot placeholder definitions (slots [24]-[121] without existing
// translations; bodies pending IDA-faithful translation)
// ============================================================================
// slot 25 = 0x426390 (AbstractClass::COMStub_Return0_25; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_25() { return false; }
// slot 26 = 0x4263A0 (AbstractClass::COMStub_26; arity 2) -- pending translation
int ObjectClass::COMStub_26(int a1, int a2) { return 0; }
// slot 28 = 0x5F4250 (AbstractClass::COMStub_28; arity 3) -- pending translation
int ObjectClass::COMStub_28(int a1, int a2, int a3) { return 0; }
// slot 29 = 0x5F4240 (AbstractClass::COMStub_29; arity 2) -- pending translation
int ObjectClass::COMStub_29(int a1, int a2) { return 0; }
// slot 32 = 0x4263B0 (AbstractClass::COMStub_Return0_32; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_32() { return false; }
// slot 33 = 0x5F6BC0 (AbstractClass::COMStub_Return0_33; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_33() { return 0; }
// slot 34 = 0x4E0130 (AbstractClass::COMStub_Return0_34; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_34() { return 0; }
// slot 35 = 0x5F42A0 (AbstractClass::COMStub_Ret2147483647_35; arity 0) -- pending translation
int ObjectClass::COMStub_Ret2147483647_35() { return (int)0x80000001; }
// slot 36 = 0x4263C0 (AbstractClass::COMStub_Ret8487648_36; arity 0) -- pending translation
int ObjectClass::COMStub_Ret8487648_36() { return 8487648; }
// slot 37 = 0x5F42B0 (AbstractClass::COMStub_Return0_37; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_37() { return false; }
// slot 38 = 0x5F42C0 (AbstractClass::COMStub_Return0_38; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_38() { return false; }
// slot 39 = 0x5F42D0 (AbstractClass::COMStub_Return0_39; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_39() { return false; }
// slot 40 = 0x5F42E0 (AbstractClass::COMStub_Return0_40; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_40() { return false; }
// slot 48 = 0x426410 (AbstractClass::getCoordCenter; arity 0) -- pending translation
int ObjectClass::getCoordCenter() { return 1; }
// slot 49 = 0x426420 (AbstractClass::COMStub_Return0_49; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_49() { return false; }
// slot 50 = 0x426430 (AbstractClass::COMStub_50; arity 1) -- pending translation
int ObjectClass::COMStub_50(int a1) { return 0; }
// slot 51 = 0x41BE60 (AircraftClass::LandingCheckStub; arity 1) -- pending translation
int ObjectClass::LandingCheckStub(int a1) { return 0; }
// slot 52 = 0x41BE70 (AircraftClass::StubReturnFalse2; arity 1) -- pending translation
int ObjectClass::StubReturnFalse2(int a1) { return 0; }
// slot 56 = 0x5F42F0 (AbstractClass::COMStub_Return0_56; arity 1) -- pending translation
int ObjectClass::COMStub_Return0_56(int a1) { return 0; }
// slot 57 = 0x5F4300 (AbstractClass::COMStub_Return0_57; arity 1) -- pending translation
int ObjectClass::COMStub_Return0_57(int a1) { return 0; }
// slot 60 = 0x5F60A0 (MapClass::SetCellOverlayFlag; arity 1) -- pending translation
int ObjectClass::SetCellOverlayFlag(int a1) { return 0; }
// slot 61 = 0x5F6120 (MapClass::ClearCellOverlayFlag; arity 1) -- pending translation
int ObjectClass::ClearCellOverlayFlag(int a1) { return 0; }
// slot 63 = 0x5F4310 (AbstractClass::COMStub_Return0_63; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_63() { return 0; }
// slot 64 = 0x5F4320 (AbstractClass::COMStub_64; arity 2) -- pending translation
int ObjectClass::COMStub_64(int a1, int a2) { return 0; }
// slot 67 = 0x426440 (AbstractClass::COMStub_Return0_67; arity 2) -- pending translation
int ObjectClass::COMStub_Return0_67(int a1, int a2) { return 0; }
// slot 68 = 0x426450 (AbstractClass::COMStub_Return0_68; arity 2) -- pending translation
int ObjectClass::COMStub_Return0_68(int a1, int a2) { return 0; }
// slot 69 = 0x5B3A50 (IPersistStream::StubReturnFalse; arity 2) -- pending translation
int ObjectClass::StubReturnFalse(int a1, int a2) { return 0; }
// slot 71 = 0x5F4330 (AbstractClass::COMStub_Return0_71; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_71() { return 0; }
// slot 72 = 0x5F4340 (AbstractClass::COMStub_Return0_72; arity 2) -- pending translation
int ObjectClass::COMStub_Return0_72(int a1, int a2) { return 0; }
// slot 76 = 0x41BE80 (AircraftClass::CheckStateFlag; arity 1) -- pending translation
int ObjectClass::CheckStateFlag(int a1) { return 0; }
// slot 79 = 0x5F6C70 (AbstractClass::COMStub_79; arity 2) -- pending translation
int ObjectClass::COMStub_79(int a1, int a2) { return 0; }
// slot 80 = 0x5F4360 (AbstractClass::COMStub_80; arity 4) -- pending translation
int ObjectClass::COMStub_80(int a1, int a2, int a3, int a4) { return 0; }
// slot 81 = 0x5F4350 (AbstractClass::COMStub_81; arity 3) -- pending translation
int ObjectClass::COMStub_81(int a1, int a2, int a3) { return 0; }
// slot 82 = 0x5F4370 (AbstractClass::COMStub_Return0_82; arity 1) -- pending translation
int ObjectClass::COMStub_Return0_82(int a1) { return 0; }
// slot 85 = 0x426460 (AbstractClass::COMStub_Return0_85; arity 3) -- pending translation
int ObjectClass::COMStub_Return0_85(int a1, int a2, int a3) { return 0; }
// slot 86 = 0x426470 (AbstractClass::COMStub_Return0_86; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_86() { return 0; }
// slot 87 = 0x426480 (AbstractClass::COMStub_Return0_87; arity 1) -- pending translation
int ObjectClass::COMStub_Return0_87(int a1) { return 0; }
// slot 88 = 0x426490 (AbstractClass::COMStub_Return0_88; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_88() { return false; }
// slot 89 = 0x5F4380 (AbstractClass::COMStub_89; arity 2) -- pending translation
int ObjectClass::COMStub_89(int a1, int a2) { return 0; }
// slot 90 = 0x5F4390 (AbstractClass::COMStub_90; arity 1) -- pending translation
int ObjectClass::COMStub_90(int a1) { return 0; }
// slot 91 = 0x5F5390 (TechnoClass::CreateDestructionEffect; arity 7) -- pending translation
int ObjectClass::CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return 0; }
// slot 92 = 0x4264A0 (AbstractClass::COMStub_Return0_92; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_92() { return 0; }
// slot 93 = 0x5F43A0 (AbstractClass::COMStub_Return0_93; arity 3) -- pending translation
int ObjectClass::COMStub_Return0_93(int a1, int a2, int a3) { return 0; }
// slot 94 = 0x5F43B0 (AircraftClass::StubReturnFalse3; arity 0) -- pending translation
bool ObjectClass::StubReturnFalse3() { return false; }
// slot 95 = 0x5F43C0 (AircraftClass::StubReturnTrue; arity 0) -- pending translation
int ObjectClass::StubReturnTrue() { return 1; }
// slot 96 = 0x5F43D0 (AbstractClass::COMStub_Return0_96; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_96() { return 0; }
// slot 97 = 0x5F43E0 (AbstractClass::processStateUpdate; arity 0) -- pending translation
int ObjectClass::processStateUpdate() { return 0; }
// slot 98 = 0x41BE90 (AircraftClass::CheckStateFlag2; arity 1) -- pending translation
int ObjectClass::CheckStateFlag2(int a1) { return 0; }
// slot 99 = 0x4264B0 (AbstractClass::COMStub_Return0_99; arity 1) -- pending translation
int ObjectClass::COMStub_Return0_99(int a1) { return 0; }
// slot 102 = 0x5F5930 (AbstractClass::IsNotNull; arity 1) -- pending translation
int ObjectClass::IsNotNull(int a1) { return 0; }
// slot 103 = 0x5F43F0 (AircraftClass::StubReturnFalse4; arity 1) -- pending translation
int ObjectClass::StubReturnFalse4(int a1) { return 0; }
// slot 104 = 0x5F4400 (AbstractClass::COMStub_Return0_104; arity 1) -- pending translation
int ObjectClass::COMStub_Return0_104(int a1) { return 0; }
// slot 105 = 0x5F6B50 (AbstractClass::COMStub_Return0_105; arity 2) -- pending translation
int ObjectClass::COMStub_Return0_105(int a1, int a2) { return 0; }
// slot 107 = 0x4264C0 (AbstractClass::COMStub_107; arity 5) -- pending translation
int ObjectClass::COMStub_107(int a1, int a2, int a3, int a4, int a5) { return 0; }
// slot 117 = 0x4264E0 (AbstractClass::COMStub_Return0_117; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_117() { return false; }
// slot 118 = 0x4264F0 (AbstractClass::COMStub_Return0_118; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_118() { return false; }
// slot 119 = 0x426500 (AbstractClass::COMStub_Return0_119; arity 0) -- pending translation
bool ObjectClass::COMStub_Return0_119() { return false; }
// slot 120 = 0x426510 (AbstractClass::getCoordCenter2; arity 0) -- pending translation
int ObjectClass::getCoordCenter2() { return 1; }
// slot 121 = 0x426520 (AbstractClass::COMStub_Return0_121; arity 0) -- pending translation
int ObjectClass::COMStub_Return0_121() { return 0; }
// slot 5 = 0x5F5E80 (SaveLoad_Register body) -- pending translation
HRESULT __stdcall ObjectClass::Load(IStream* stream) { (void)stream; return 0; }
// slot 10 = 0x5F5230 (Unlink) -- pending translation
int ObjectClass::Unlink(int a1, int a2) { (void)a1; (void)a2; return 0; }
// slot 17 = 0x5F6690 -- pending translation (binary body reads flag==0; member mapping frozen per I524)
// X133: demoted phantoms with live call sites -- stub defs pending translation
ObjectTypeClass* ObjectClass::GetType() const { return nullptr; }
void ObjectClass::SetLocation(const CoordStruct& coords) { (void)coords; }
void ObjectClass::MarkAllOccupationBits(const CoordStruct& coords) { (void)coords; }
RadioCommand ObjectClass::ReceiveCommand(TechnoClass* sender, RadioCommand command, AbstractClass*& inout) { (void)sender; (void)command; (void)inout; return (RadioCommand)0; }
bool ObjectClass::IsActive() const { return false; }

} // namespace ra2
} // namespace game