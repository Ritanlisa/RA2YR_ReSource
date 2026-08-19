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
// [IDA decompile]
int __thiscall ObjectClass::Remove(#374 *this)
{
  int result; // eax
  int v3; // eax
  #374 *v4; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(result) = *((_BYTE *)this + 131);
  if ( (_BYTE)result )
  {
    v4 = this;
    v3 = (*(int (__thiscall **)(_DWORD *, #374 **))(MEMORY[0x87F7E8][539956] + 16))(&MEMORY[0x87F7E8][539956], &v4);
    if ( v3 != -1 && v3 < MEMORY[0x87F7E8][539960] )
    {
      --MEMORY[0x87F7E8][539960];
      for ( ;
            v3 < MEMORY[0x87F7E8][539960];
            *(_DWORD *)(MEMORY[0x87F7E8][539957] + 4 * v3 - 4) = *(_DWORD *)(MEMORY[0x87F7E8][539957] + 4 * v3) )
      {
        ++v3;
      }
    }
    *((_BYTE *)this + 131) = 0;
    result = MapClass::GetScrollMode((int)MEMORY[0x87F7E8]);
    if ( (#374 *)result == this )
      LOBYTE(result) = MapClass::SetScrollMode((int)MEMORY[0x87F7E8], 0);
  }
  return result;
}

/* ASM:
push    ecx
push    esi
mov     esi, ecx
mov     al, [esi+83h]
test    al, al
jz      short loc_5F4518
mov     edx, ds:0A8ECB8h
lea     eax, [esp+8+var_4]
push    eax
mov     ecx, 0A8ECB8h
mov     [esp+0Ch+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_5F44F7
mov     ecx, ds:0A8ECC8h
cmp     eax, ecx
jge     short loc_5F44F7
dec     ecx
cmp     eax, ecx
mov     ds:0A8ECC8h, ecx
jge     short loc_5F44F7

loc_5F44DF:                             ; CODE XREF: ObjectClass__Remove+55↓j
mov     ecx, ds:0A8ECBCh
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, ds:0A8ECC8h
cmp     eax, ecx
jl      short loc_5F44DF

loc_5F44F7:                             ; CODE XREF: ObjectClass__Remove+28↑j
; ObjectClass__Remove+32↑j ...
mov     ecx, 87F7E8h
mov     byte ptr [esi+83h], 0
call    MapClass__GetScrollMode
cmp     eax, esi
jnz     short loc_5F4518
push    0
mov     ecx, 87F7E8h
call    MapClass__SetScrollMode

loc_5F4518:                             ; CODE XREF: ObjectClass__Remove+C↑j
; ObjectClass__Remove+6A↑j
pop     esi
pop     ecx
retn
*/
}

// IDA: 0x5F65F0 -- ObjectClass::Destroy (146B)
// 0x5f65f0
void ObjectClass::Destroy()
{
// [IDA decompile]
int __thiscall ObjectClass::Destroy(#374 *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *((_DWORD *)this + 14);
  if ( v2 )
    ObjectClass::CleanupAudioAndRefs(v2);
  if ( this && (*((_BYTE *)this + 20) & 1) != 0 )
    TechnoClass::CleanupAll(this, 0);
  AbstractClass::AnnounceExpiredPointer((void **)this, 1);
  (*(void (__thiscall **)(#374 *))(*(_DWORD *)this + 212))(this);
  *((_BYTE *)this + 144) = 0;
  result = MEMORY[0xB0F6A0];
  if ( MEMORY[0xB0F6A8] < MEMORY[0xB0F6A0]
    || (MEMORY[0xB0F6A5] || !MEMORY[0xB0F6A0])
    && MEMORY[0xB0F6AC] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F698] + 8))(
                   &MEMORY[0xB0F698],
                   MEMORY[0xB0F6A0] + MEMORY[0xB0F6AC],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xB0F6A8]++;
    *((_DWORD *)MEMORY[0xB0F69C] + result) = this;
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, [esi+38h]
test    ecx, ecx
jz      short loc_5F65FF
call    ObjectClass__CleanupAudioAndRefs

loc_5F65FF:                             ; CODE XREF: ObjectClass__Destroy+8↑j
test    esi, esi
jz      short loc_5F6612
test    byte ptr [esi+14h], 1
jz      short loc_5F6612
push    0
mov     ecx, esi
call    TechnoClass__CleanupAll

loc_5F6612:                             ; CODE XREF: ObjectClass__Destroy+11↑j
; ObjectClass__Destroy+17↑j
mov     dl, 1
mov     ecx, esi        ; void **
call    AbstractClass__AnnounceExpiredPointer
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0D4h]
mov     byte ptr [esi+90h], 0
mov     eax, dword_A8ED54+8094Ch
cmp     dword_A8ED54+80954h, eax
jl      short loc_5F6668
mov     cl, byte ptr dword_A8ED54+80951h
test    cl, cl
jnz     short loc_5F6647
test    eax, eax
jnz     short loc_5F6680

loc_5F6647:                             ; CODE XREF: ObjectClass__Destroy+51↑j
mov     ecx, dword_A8ED54+80958h
test    ecx, ecx
jle     short loc_5F6680
mov     edx, dword_A8ED54+80944h
add     ecx, eax
push    0
push    ecx
mov     ecx, (offset dword_A8ED54+80944h)
call    dword ptr [edx+8]
test    al, al
jz      short loc_5F6680

loc_5F6668:                             ; CODE XREF: ObjectClass__Destroy+47↑j
mov     ecx, dword_A8ED54+80954h
mov     eax, ecx
inc     ecx
mov     dword_A8ED54+80954h, ecx
mov     ecx, dword_A8ED54+80948h
mov     [ecx+eax*4], esi

loc_5F6680:                             ; CODE XREF: ObjectClass__Destroy+55↑j
; ObjectClass__Destroy+5F↑j ...
pop     esi
retn
*/
}

void ObjectClass::RestoreMission(Mission mission)
{
    // Override in MissionClass for actual mission queue management
}

DamageState ObjectClass::ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
    ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house)
{
    // IDA: 0x5F5390 — ObjectClass::ReceiveDamage
    // Base class damage reception. Called for all game objects.
    //
    // Algorithm:
    // 1. Hard exit: dead or not on map → damage state 0
    // 2. If already at 0 health, destroy and return 0
    // 3. If damage is valid (> 0):
    //    a. Calculate effective damage considering modifiers
    //    b. Apply damage to health
    //    c. If health <= 0: destroy object, register kill/assist, return DEAD
    //    d. Otherwise: return DAMAGED
    // 4. Return ALIVE if no damage taken

    if (!isAliveFlag || !isOnMap)
        return (DamageState)(0);

    if (health <= 0)
    {
        Destroy();
        return (DamageState)(0);
    }

    if (damage && *damage > 0)
    {
        int actual_damage = *damage;

        // Warhead versus armor multiplier (applied in derived classes)
        // Base class applies raw damage directly

        // Iron Curtained objects take no damage
        if (IsIronCurtained())
            actual_damage = 0;

        // Clamp to remaining health
        if (actual_damage > health)
            actual_damage = health;

        health -= actual_damage;
        estimatedHealth = health;

        if (health <= 0)
        {
            health = 0;
            Destroy();
            if (attacker)
                RegisterDestruction((TechnoClass*)(attacker));
            if (attacking_house)
                RegisterKill(attacking_house);
            return (DamageState)(1); // DEAD
        }

        return (DamageState)(2); // DAMAGED
    }

    return (DamageState)(0); // NONE
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
    auto* type = (gamemd::ObjectTypeClass*)(GetType());
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

    return (int)(std::sqrt((double)(dx*dx + dy*dy + dz*dz)));
}

Move ObjectClass::IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const
{
    if (!dest_cell)
        return (Move)(0);
    return (Move)(1);
}

int ObjectClass::GetHeight() const
{
    return location.Z;
}

void ObjectClass::SetHeight(uint32_t height)
{
    location.Z = (int)(height);
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
    // IDA: 0x70E2B0 — Iron Curtain invulnerability effect.
    // Base class stub: actual implementation in TechnoClass.

    if (!isAliveFlag || !isOnMap)
        return (DamageState)(0);

    if (duration <= 0)
        return (DamageState)(0);

    // Base class: objects just mark themselves as invulnerable for the duration.
    // TechnoClass overrides this with full visual tint + timer management.
    (void)source;
    (void)force_shield;

    return (DamageState)(2);
}

bool ObjectClass::IsIronCurtained() const
{
    // Base class: no iron curtain state.
    // TechnoClass overrides with forceShielded check.
    return false;
}

void ObjectClass::Reveal()
{
    isVisible = true;
}

// IDA: 0x5F4D10 -- ObjectClass::MarkForRedraw
// 0x5f4d10
void ObjectClass::MarkForRedraw()
{
// [IDA decompile]
int __thiscall ObjectClass::MarkForRedraw(#374 *this)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 128);
  if ( !(_BYTE)result )
  {
    *((_BYTE *)this + 128) = 1;
    return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0);
  }
  return result;
}

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
}

// IDA: AudioController
void AudioController::Stop() { }
void AudioController::Start(int32_t soundIndex) { (void)soundIndex; }
void AudioController::Pause() { }
void AudioController::Resume() { }

} // namespace game
} // namespace ra2

#include "object/object.hpp"

namespace ra2 { namespace game {

// --- AudioController ---

bool AudioController::IsSoundEnabled() { return false; }

} // namespace game
} // namespace ra2
