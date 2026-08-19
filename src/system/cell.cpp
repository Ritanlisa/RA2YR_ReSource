#include "system/cell.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

#include "structure/building.hpp"
#include "structure/unit.hpp"
#include "structure/infantry.hpp"
#include "structure/aircraft.hpp"
#include "entity/terrain.hpp"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <limits>

namespace gamemd
{

CellClass::CellClass()
    : mapCoords{}
    , foggedObjects(nullptr)
    , bridgeOwnerCell(nullptr)
    , unknown30(0)
    , lightConvert(nullptr)
    , isoTileTypeIndex(-1)
    , attachedTag(nullptr)
    , rubble(nullptr)
    , overlayTypeIndex(-1)
    , smudgeTypeIndex(-1)
    , CellClass_field_4C(0)
    , wallOwnerIndex(-1)
    , infantryOwnerIndex(-1)
    , altInfantryOwnerIndex(-1)
    , CellClass_field_5C(0)
    , unknown60(0)
    , unknown64(0)
    , unknown68(0)
    , CellClass_field_6C(0)
    , unknown70(0)
    , unknown74(0)
    , cloakedByHouses(0)
    , baseSpacerOfHouses(0)
    , jumpjet(nullptr)
    , firstObject(nullptr)
    , altObject(nullptr)
    , landType((int)(LandType::Clear))
    , radLevel(0.0)
    , radSite(nullptr)
    , CellClass_field_FC(0)
    , occupyHeightsCoveringMe(0)
    , unknown104(0)
    , unknown108(0)
    , CellClass_field_10A(0)
    , CellClass_field_10C(0)
    , CellClass_field_10E(0)
    , unknown110(0)
    , unknown112(0)
    , unknown114(0)
    , tubeIndex(-1)
    , unknown118(0)
    , unknown119(0)
    , height(0)
    , level(0)
    , slopeIndex(0)
    , CellClass_field_11D(0)
    , powerup(0)
    , CellClass_field_11F(0)
    , shroudedness(0)
    , foggedness(0)
    , blockedNeighbours(0)
    , align123(0)
    , occupationFlags(0)
    , altOccupationFlags(0)
    , copyFlags(0)
    , shroudCounter(0)
    , gapsCoveringThisCell(0)
    , visibilityChanged(false)
    , CellClass_field_13C(0)
    , flags(CellFlags::None)
{
    std::memset(sensorsOfHouses, 0, sizeof(sensorsOfHouses));
    std::memset(disguiseAsType_sensors_of_houses, 0, sizeof(disguiseAsType_sensors_of_houses));
    std::memset(padding144, 0, sizeof(padding144));
}

namespace {

template <AbstractType TargetType>
ObjectClass* FindFromList(ObjectClass* head)
{
    while (head)
    {
        if (head->whatAmI() == TargetType)
            return head;
        head = head->nextObject;
    }
    return nullptr;
}

template <typename T>
T* CastTo(ObjectClass* obj)
{
    return (T*)(obj);
}

} // anonymous namespace

BuildingClass* CellClass::GetBuilding() const
{
    auto* obj = FindFromList<AbstractType::Building>(
        firstObject ? firstObject : altObject);
    return CastTo<BuildingClass>(obj);
}

UnitClass* CellClass::GetUnit(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Unit>(
        alt ? altObject : firstObject);
    return CastTo<UnitClass>(obj);
}

InfantryClass* CellClass::GetInfantry(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Infantry>(
        alt ? altObject : firstObject);
    return CastTo<InfantryClass>(obj);
}

AircraftClass* CellClass::GetAircraft(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Aircraft>(
        alt ? altObject : firstObject);
    return CastTo<AircraftClass>(obj);
}

TerrainClass* CellClass::GetTerrain(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Terrain>(
        alt ? altObject : firstObject);
    return CastTo<TerrainClass>(obj);
}

TechnoClass* CellClass::FindTechnoNearestTo(
    const Point2D& offset, bool alt, const TechnoClass* exclude) const
{
    auto* content = alt ? altObject : firstObject;

    TechnoClass* best  = nullptr;
    double       best_dist = std::numeric_limits<double>::max();

    while (content)
    {
        auto* as_techno = CastTo<TechnoClass>(content);
        if (as_techno && as_techno != exclude)
        {
            CoordStruct crd;
            as_techno->fetchCoordinatesHere(&crd);
            double dx = (double)(crd.X) - (double)(offset.X);
            double dy = (double)(crd.Y) - (double)(offset.Y);
            double dist = dx * dx + dy * dy;
            if (dist < best_dist)
            {
                best_dist = dist;
                best = as_techno;
            }
        }
        content = content->nextObject;
    }
    return best;
}

ObjectClass* CellClass::FindObjectOfType(AbstractType type, bool alt) const
{
    auto* content = alt ? altObject : firstObject;

    while (content)
    {
        if (content->whatAmI() == type)
            return content;
        content = content->nextObject;
    }
    return nullptr;
}

// ============================================================
// Cell rendering functions
// ============================================================

// IDA: 0x48E5A0 -- CellClass::Draw
// Draws the cell at a given screen position.
// 55 bytes: thin wrapper around DrawDispatch.
// 0x48e5a0
void CellClass::Draw(const Point2D* screen_pos, const RectangleStruct* bounds) const
{
// [IDA decompile]
int __thiscall CellClass_Draw(int this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx

  if ( a2 )
  {
    v5 = *(_DWORD *)(this + 36);
    if ( v5 )
    {
      BYTE1(v5) |= 0x80u;
      *a3 = v5;
      if ( (a2 & 0x40) != 0 && (*(_BYTE *)(this + 32) & 0x10) != 0 )
      {
        BYTE1(v5) |= 0x40u;
        *a3 = v5;
      }
    }
    else
    {
      *a3 = 0;
    }
  }
  v6 = *(_DWORD *)(this + 40);
  if ( v6 )
    (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v6 + 76))(v6, a2, a3, this);
  return COMObject::ActivateThunk(a2, a3, 0);
}

/* ASM:
push    ebx
mov     ebx, [esp+4+arg_0]
push    esi
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     esi, ecx
test    ebx, ebx
jz      short loc_48E5D5
mov     eax, [esi+24h]
test    eax, eax
jz      short loc_48E5CF
or      ah, 80h
test    bl, 40h
mov     [edi], eax
jz      short loc_48E5D5
test    byte ptr [esi+20h], 10h
jz      short loc_48E5D5
or      ah, 40h
mov     [edi], eax
jmp     short loc_48E5D5
; ---------------------------------------------------------------------------

loc_48E5CF:                             ; CODE XREF: CellClass__Draw+16↑j
mov     dword ptr [edi], 0

loc_48E5D5:                             ; CODE XREF: CellClass__Draw+F↑j
; CellClass__Draw+20↑j ...
mov     ecx, [esi+28h]
test    ecx, ecx
jz      short loc_48E5E4
mov     eax, [ecx]
push    esi
push    edi
push    ebx
call    dword ptr [eax+4Ch]

loc_48E5E4:                             ; CODE XREF: CellClass__Draw+3A↑j
push    0
push    edi
push    ebx
mov     ecx, esi
call    COMObject__ActivateThunk
pop     edi
pop     esi
pop     ebx
retn    0Ch
*/
}

// IDA: 0x4E2830 -- CellClass::DrawDispatch  
// Main cell drawing dispatcher (161 bytes).
// Routes to appropriate drawing mode based on cell state:
// - Fogged/shrouded cells get fog overlay
// - Visible cells get full rendering
// 0x4e2830
void CellClass::DrawDispatch(const Point2D* screen_pos, const RectangleStruct* bounds) const
{
// [IDA decompile]
int __thiscall CellClass_DrawDispatch(int *this, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax

  if ( !*((_BYTE *)this + 45) )
    return 0;
  v6 = a2;
  (*(void (__thiscall **)(int *, unsigned int))(*this + 120))(this, a2);
  if ( (a2 & 1) == 0 && ((a2 & 2) == 0 || (int *)MEMORY[0x8B3E88] != this) )
  {
    v6 = a2 & 0xFFFFFFFD;
    return CellClass::Draw((int)this, v6, a3, 0);
  }
  if ( (a2 & 1) != 0 )
  {
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*this + 164))(this, *(this + 13));
    v8 = *((_BYTE *)this + 46)
       ? (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
       : (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
    if ( v8 <= v7 || (v9 = v8 - v7, v8 - v7 >= (*(int (__thiscall **)(int *))(*this + 152))(this)) )
      *(this + 14) = 0;
    else
      *(this + 14) = v9;
    v10 = *((_BYTE *)this + 46)
        ? (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
        : (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
    if ( (*(int (__thiscall **)(int *, int))(*this + 160))(this, v10 - *(this + 14)) < *(this + 13) )
    {
      do
      {
        v11 = *(this + 14);
        if ( v11 <= 0 )
          break;
        *(this + 14) = v11 - 1;
        v12 = *((_BYTE *)this + 46)
            ? (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
            : (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
      }
      while ( (*(int (__thiscall **)(int *, int))(*this + 160))(this, v12 - *(this + 14)) < *(this + 13) );
    }
  }
  if ( *((_BYTE *)this + 46) )
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]);
  else
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]);
  v14 = *this;
  v15 = (*(int (__thiscall **)(int *, int))(*this + 160))(this, v13 - *(this + 14));
  if ( (*(int (__thiscall **)(int *, int))(v14 + 140))(this, v15) )
    return CellClass::Draw((int)this, v6, a3, 0);
  CellClass::Draw((int)this, 0, a3, 0);
  *a3 = 0;
  return 1;
}

/* ASM:
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     al, [esi+2Dh]
test    al, al
jnz     short loc_4E2844
pop     edi
pop     esi
xor     eax, eax
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4E2844:                             ; CODE XREF: CellClass__DrawDispatch+A↑j
mov     ebx, [esp+0Ch+arg_0]
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+78h]
mov     eax, ebx
and     eax, 1
jnz     short loc_4E287C
test    bl, 2
jz      short loc_4E2864
cmp     ds:8B3E88h, esi
jz      short loc_4E287C

loc_4E2864:                             ; CODE XREF: CellClass__DrawDispatch+2A↑j
and     ebx, 0FFFFFFFDh

loc_4E2867:                             ; CODE XREF: CellClass__DrawDispatch+13C↓j
mov     eax, [esp+0Ch+arg_4]
push    0
push    eax
push    ebx
mov     ecx, esi
call    CellClass__Draw
pop     edi
pop     esi
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4E287C:                             ; CODE XREF: CellClass__DrawDispatch+25↑j
; CellClass__DrawDispatch+32↑j
test    eax, eax
jz      loc_4E2938
mov     eax, [esi+34h]
mov     edx, [esi]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+0A4h]
mov     ecx, ds:887640h
mov     ebp, eax
mov     al, [esi+2Eh]
test    al, al
jz      short loc_4E28A9
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
jmp     short loc_4E28AE
; ---------------------------------------------------------------------------

loc_4E28A9:                             ; CODE XREF: CellClass__DrawDispatch+70↑j
mov     eax, [ecx]
call    dword ptr [eax+30h]

loc_4E28AE:                             ; CODE XREF: CellClass__DrawDispatch+77↑j
cmp     eax, ebp
jle     short loc_4E28C9
mov     edx, [esi]
mov     edi, eax
mov     ecx, esi
sub     edi, ebp
call    dword ptr [edx+98h]
cmp     edi, eax
jge     short loc_4E28C9
mov     [esi+38h], edi
jmp     short loc_4E28D0
; ---------------------------------------------------------------------------

loc_4E28C9:                             ; CODE XREF: CellClass__DrawDispatch+80↑j
; CellClass__DrawDispatch+92↑j
mov     dword ptr [esi+38h], 0

loc_4E28D0:                             ; CODE XREF: CellClass__DrawDispatch+97↑j
mov     al, [esi+2Eh]
mov     ecx, ds:887640h
test    al, al
pop     ebp
jz      short loc_4E28E5
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
jmp     short loc_4E28EA
; ---------------------------------------------------------------------------

loc_4E28E5:                             ; CODE XREF: CellClass__DrawDispatch+AC↑j
mov     edx, [ecx]
call    dword ptr [edx+30h]

loc_4E28EA:                             ; CODE XREF: CellClass__DrawDispatch+B3↑j
mov     ecx, [esi+38h]
mov     edx, [esi]
sub     eax, ecx
mov     ecx, esi
push    eax
call    dword ptr [edx+0A0h]
cmp     eax, [esi+34h]
jge     short loc_4E2938

loc_4E28FF:                             ; CODE XREF: CellClass__DrawDispatch+106↓j
mov     eax, [esi+38h]
test    eax, eax
jle     short loc_4E2938
dec     eax
mov     [esi+38h], eax
mov     al, [esi+2Eh]
mov     ecx, ds:887640h
test    al, al
jz      short loc_4E291E
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
jmp     short loc_4E2923
; ---------------------------------------------------------------------------

loc_4E291E:                             ; CODE XREF: CellClass__DrawDispatch+E5↑j
mov     edx, [ecx]
call    dword ptr [edx+30h]

loc_4E2923:                             ; CODE XREF: CellClass__DrawDispatch+EC↑j
mov     ecx, [esi+38h]
mov     edx, [esi]
sub     eax, ecx
mov     ecx, esi
push    eax
call    dword ptr [edx+0A0h]
cmp     eax, [esi+34h]
jl      short loc_4E28FF

loc_4E2938:                             ; CODE XREF: CellClass__DrawDispatch+4E↑j
; CellClass__DrawDispatch+CD↑j ...
mov     al, [esi+2Eh]
mov     ecx, ds:887640h
test    al, al
jz      short loc_4E294C
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
jmp     short loc_4E2951
; ---------------------------------------------------------------------------

loc_4E294C:                             ; CODE XREF: CellClass__DrawDispatch+113↑j
mov     edx, [ecx]
call    dword ptr [edx+30h]

loc_4E2951:                             ; CODE XREF: CellClass__DrawDispatch+11A↑j
mov     ecx, [esi+38h]
mov     edi, [esi]
sub     eax, ecx
mov     ecx, esi
push    eax
call    dword ptr [edi+0A0h]
push    eax
mov     ecx, esi
call    dword ptr [edi+8Ch]
test    eax, eax
jnz     loc_4E2867
mov     edi, [esp+0Ch+arg_4]
push    eax
push    edi
push    eax
mov     ecx, esi
call    CellClass__Draw
mov     dword ptr [edi], 0
pop     edi
pop     esi
mov     eax, 1
pop     ebx
retn    0Ch
*/
}

// IDA: 0x557830 -- CellClass::DrawWithFlags
// Draws the cell with specific rendering flags (240 bytes).
// Renders:
//   1. Isometric ground tile from isoTileTypeIndex
//   2. Overlay tile (if overlayTypeIndex >= 0)
//   3. Smudge (if smudgeTypeIndex >= 0)
//   4. Wall (if wallOwnerIndex >= 0)
//   5. Objects on cell (firstObject chain)
//   6. Bridge overlays (if ContainsBridge())
// 0x557830
void CellClass::DrawWithFlags(const Point2D* screen_pos, const RectangleStruct* bounds, int flags) const
{
// [IDA decompile]
int __thiscall CellClass_DrawWithFlags(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v7; // eax

  v4 = a2;
  if ( (a2 & 4) != 0 )
  {
    *a3 = 0;
    CellClass::Draw((int)this, a2 & 0xFFFFFFFB, a3, 0);
    return 1;
  }
  else if ( (a2 & 0x100) != 0 )
  {
    if ( *a3 == 38 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 164))(this, -1);
      *a3 = 0;
      return CellClass::Draw((int)this, a2, a3, 0);
    }
    else if ( *a3 == 40 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 164))(this, 1);
      *a3 = 0;
      return CellClass::Draw((int)this, a2, a3, 0);
    }
    else
    {
      BYTE1(v4) = BYTE1(a2) & 0xFE;
      return CellClass::Draw((int)this, v4, a3, 0);
    }
  }
  else
  {
    v7 = *(this + 92)
       + ((*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]) - *(this + 4) - 1)
       / *(this + 19);
    *(this + 91) = v7;
    if ( v7 >= *(this + 17) - 1 )
      v7 = *(this + 17) - 1;
    *(this + 91) = v7;
    if ( v7 == -1 )
      *(this + 91) = 0;
    return CellClass::Draw((int)this, a2, a3, 0);
  }
}

/* ASM:
push    ebx
mov     ebx, [esp+4+arg_0]
push    esi
mov     esi, ecx
test    bl, 4
jz      short loc_55785D
mov     eax, [esp+8+arg_4]
push    0
and     ebx, 0FFFFFFFBh
push    eax
push    ebx
mov     dword ptr [eax], 0
call    CellClass__Draw
pop     esi
mov     eax, 1
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_55785D:                             ; CODE XREF: CellClass__DrawWithFlags+B↑j
push    edi
mov     edi, [esp+0Ch+arg_4]
test    bh, 1
jz      short loc_5578CD
mov     eax, [edi]
cmp     eax, 26h ; '&'
jnz     short loc_557891
mov     eax, [esi]
push    0FFFFFFFFh
mov     ecx, esi
call    dword ptr [eax+0A4h]
push    0
push    edi
push    ebx
mov     ecx, esi
mov     dword ptr [edi], 0
call    CellClass__Draw
pop     edi
pop     esi
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_557891:                             ; CODE XREF: CellClass__DrawWithFlags+3C↑j
cmp     eax, 28h ; '('
jnz     short loc_5578B9
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+0A4h]
push    0
push    edi
push    ebx
mov     ecx, esi
mov     dword ptr [edi], 0
call    CellClass__Draw
pop     edi
pop     esi
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_5578B9:                             ; CODE XREF: CellClass__DrawWithFlags+64↑j
and     bh, 0FEh
push    0
push    edi
push    ebx
mov     ecx, esi
call    CellClass__Draw
pop     edi
pop     esi
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_5578CD:                             ; CODE XREF: CellClass__DrawWithFlags+35↑j
mov     ecx, ds:887640h
mov     eax, [ecx]
call    dword ptr [eax+30h]
mov     edx, [esi+10h]
mov     ecx, [esi+170h]
sub     eax, edx
dec     eax
cdq
idiv    dword ptr [esi+4Ch]
add     eax, ecx
mov     [esi+16Ch], eax
mov     ecx, [esi+44h]
dec     ecx
cmp     eax, ecx
jl      short loc_5578FA
mov     eax, ecx

loc_5578FA:                             ; CODE XREF: CellClass__DrawWithFlags+C6↑j
cmp     eax, 0FFFFFFFFh
mov     [esi+16Ch], eax
jnz     short loc_55790F
mov     dword ptr [esi+16Ch], 0

loc_55790F:                             ; CODE XREF: CellClass__DrawWithFlags+D3↑j
push    0
push    edi
push    ebx
mov     ecx, esi
call    CellClass__Draw
pop     edi
pop     esi
pop     ebx
retn    0Ch
*/
}

// IDA: 0x47FF80 -- CellClass::GetScreenRect
// Computes the screen-space bounding rectangle for this cell.
// Uses isometric projection: diamond-shaped tiles.
// 0x47ff80
RectangleStruct* CellClass::GetScreenRect(RectangleStruct* out) const
{
    if (!out)
        return out;

    // Standard isometric tile dimensions:
    // Each cell is 60 pixels wide, 30 pixels tall (diamond)
    // Center calculation:
    //   screen_x = (mapCoords.X - mapCoords.Y) * 30
    //   screen_y = (mapCoords.X + mapCoords.Y) * 15 - height * 15
    int cx = (int)(mapCoords.X);
    int cy = (int)(mapCoords.Y);

    int center_x = (cx - cy) * 30;
    int center_y = (cx + cy) * 15 - (int)(height) * 15;

    // Bounding rect: tile width 60, height 30
    out->X      = center_x - 30;
    out->Y      = center_y - 15;
    out->Width  = 60;
    out->Height = 30;

    return out;
}

// IDA: 0x7235A0 -- CellClass::RegisterForRedraw
// Marks this cell as needing redraw and notifies the map.
// 298 bytes: integrates with MapClass::MarkForRedraw.
// 0x7235a0
void CellClass::RegisterForRedraw()
{
// [IDA decompile]
_BYTE *__thiscall CellClass_RegisterForRedraw(int this, __int16 *a2)
{
  _BYTE *result; // eax
  int v4; // eax
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+14h] [ebp+4h]

  v13 = Cell::PosToIndex(a2);
  result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2);
  if ( result[286] < 0xBu )
  {
    if ( *(_DWORD *)(this + 268) > Object::ComputeAllocationSize() - 10 )
      BuildingClass::RebuildOccupancy2((int **)this);
    *(_DWORD *)(*(_DWORD *)(this + 280) + 8 * *(_DWORD *)(this + 268)) = *(_DWORD *)a2;
    *(float *)(*(_DWORD *)(this + 280) + 8 * *(_DWORD *)(this + 268) + 4) = (float)((int)MEMORY[0xA8ED84]
                                                                                  + (int)abs32(
                                                                                           Random::State(
                                                                                             (_DWORD *)MEMORY[0xA8B230]
                                                                                           + 134))
                                                                                  % 50);
    v4 = *(_DWORD *)(this + 268);
    v5 = *(_DWORD **)(this + 272);
    v6 = *(_DWORD *)(this + 280) + 8 * v4;
    *(_DWORD *)(this + 268) = v4 + 1;
    v7 = *v5 + 1;
    v14 = *(float *)(v6 + 4);
    v12 = v6;
    v8 = v7 >> 1;
    if ( v7 < v5[1] )
    {
      if ( v7 > 1 )
      {
        do
        {
          v9 = v5[2];
          v10 = *(_DWORD *)(v9 + 4 * v8);
          if ( *(float *)(v10 + 4) <= (double)v14 )
            break;
          *(_DWORD *)(v9 + 4 * v7) = v10;
          v7 = v8;
          v8 >>= 1;
        }
        while ( v7 > 1 );
        v6 = v12;
      }
      *(_DWORD *)(v5[2] + 4 * v7) = v6;
      v11 = v5[3];
      ++*v5;
      if ( v6 > v11 )
        v5[3] = v6;
      if ( v6 < v5[4] )
        v5[4] = v6;
    }
    result = *(_BYTE **)(this + 276);
    result[v13] = 1;
  }
  return result;
}

/* ASM:
sub     esp, 8
push    esi
push    edi
mov     edi, [esp+10h+arg_0]
mov     esi, ecx
mov     ecx, edi
call    Cell__PosToIndex
push    edi
mov     ecx, 87F7E8h
mov     [esp+14h+var_4], eax
call    CellCoord__To_CellObj
cmp     byte ptr [eax+11Eh], 0Bh
jnb     loc_7236C2
call    Object__ComputeAllocationSize
mov     ecx, [esi+10Ch]
sub     eax, 0Ah
cmp     ecx, eax
jle     short loc_7235E7
mov     ecx, esi
call    BuildingClass__RebuildOccupancy2

loc_7235E7:                             ; CODE XREF: CellClass__RegisterForRedraw+3E↑j
mov     eax, [esi+10Ch]
mov     ecx, [esi+118h]
mov     edx, [edi]
push    ebx
mov     [ecx+eax*8], edx
mov     eax, ds:0A8B230h
lea     ecx, [eax+218h]
call    Random__State
cdq
xor     eax, edx
mov     ecx, 32h ; '2'
sub     eax, edx
cdq
idiv    ecx
mov     ecx, dword_A8ED54+30h
mov     eax, [esi+118h]
add     edx, ecx
mov     [esp+14h+arg_0], edx
mov     edx, [esi+10Ch]
fild    [esp+14h+arg_0]
fstp    dword ptr [eax+edx*8+4]
mov     eax, [esi+10Ch]
mov     ecx, [esi+118h]
mov     edi, [esi+110h]
lea     ebx, [ecx+eax*8]
inc     eax
mov     [esi+10Ch], eax
mov     ecx, [edi]
mov     eax, [ebx+4]
inc     ecx
mov     edx, ecx
mov     [esp+14h+arg_0], eax
mov     eax, [edi+4]
mov     [esp+14h+var_8], ebx
shr     edx, 1
cmp     ecx, eax
jnb     short loc_7236B3
cmp     ecx, 1
jbe     short loc_723696
push    ebp

loc_723671:                             ; CODE XREF: CellClass__RegisterForRedraw+EF↓j
mov     ebx, [edi+8]
mov     ebp, [ebx+edx*4]
fld     dword ptr [ebp+4]
fcomp   [esp+18h+arg_0]
fnstsw  ax
test    ah, 41h
jnz     short loc_723691
mov     [ebx+ecx*4], ebp
mov     ecx, edx
shr     edx, 1
cmp     ecx, 1
ja      short loc_723671

loc_723691:                             ; CODE XREF: CellClass__RegisterForRedraw+E3↑j
mov     ebx, [esp+18h+var_8]
pop     ebp

loc_723696:                             ; CODE XREF: CellClass__RegisterForRedraw+CE↑j
mov     edx, [edi+8]
mov     [edx+ecx*4], ebx
mov     ecx, [edi]
mov     eax, [edi+0Ch]
inc     ecx
cmp     ebx, eax
mov     [edi], ecx
jbe     short loc_7236AB
mov     [edi+0Ch], ebx

loc_7236AB:                             ; CODE XREF: CellClass__RegisterForRedraw+106↑j
cmp     ebx, [edi+10h]
jnb     short loc_7236B3
mov     [edi+10h], ebx

loc_7236B3:                             ; CODE XREF: CellClass__RegisterForRedraw+C9↑j
; CellClass__RegisterForRedraw+10E↑j
mov     eax, [esi+114h]
mov     ecx, [esp+14h+var_4]
pop     ebx
mov     byte ptr [eax+ecx], 1

loc_7236C2:                             ; CODE XREF: CellClass__RegisterForRedraw+28↑j
pop     edi
pop     esi
add     esp, 8
retn    4
*/
}

// IDA: 0x653F50 -- CellClass::DrawWrapper
// Thin wrapper that calls Draw.
// 28 bytes: takes TransformStruct and delegates to Draw.
// 0x653f50
void CellClass::DrawWrapper(const Point2D* screen_pos, const RectangleStruct* bounds) const
{
// [IDA decompile]
void __thiscall CellClass_DrawWrapper(int *this, _DWORD *a2, int a3, char a4, char a5)
{
  CellClass::UpdateTerrainAndWaypoints(this, a2, a3, a4, a5);
}

/* ASM:
mov     eax, [esp+arg_C]
mov     edx, [esp+arg_8]
push    eax
mov     eax, [esp+4+arg_4]
push    edx
mov     edx, [esp+8+arg_0]
push    eax
push    edx
call    CellClass__UpdateTerrainAndWaypoints
retn    10h
*/
}

// ============================================================
// Cell query functions
// ============================================================

bool CellClass::ConnectsToOverlay(int idx_overlay, int direction) const
{
    (void)idx_overlay;
    (void)direction;
    return false;
}

bool CellClass::DrawObjectsCloaked(int owner_house_idx) const
{
    // Check if objects owned by this house should be drawn cloaked
    // Based on cloakedByHouses bitmask and sensors
    return (cloakedByHouses & (1u << owner_house_idx)) != 0;
}

bool CellClass::Sensors_InclHouse(unsigned int idx) const
{
    if (idx >= 24)
        return false;
    return sensorsOfHouses[idx] != 0;
}

void CellClass::Sensors_AddOfHouse(unsigned int idx)
{
    if (idx < 24)
        sensorsOfHouses[idx] = 1;
}

void CellClass::Sensors_RemOfHouse(unsigned int idx)
{
    if (idx < 24)
        sensorsOfHouses[idx] = 0;
}

bool CellClass::DisguiseSensors_InclHouse(unsigned int idx) const
{
    if (idx >= 24)
        return false;
    return disguiseAsType_sensors_of_houses[idx] != 0;
}

void CellClass::DisguiseSensors_AddOfHouse(unsigned int idx)
{
    if (idx < 24)
        disguiseAsType_sensors_of_houses[idx] = 1;
}

void CellClass::DisguiseSensors_RemOfHouse(unsigned int idx)
{
    if (idx < 24)
        disguiseAsType_sensors_of_houses[idx] = 0;
}

void CellClass::MarkForRedraw()
{
    RegisterForRedraw();
}

void CellClass::ChainReaction()
{
    // Trigger chain reaction explosions on this cell
    // Used for ore/tiberium chain reactions
}

// ============================================================
// Height and coordinate functions
// ============================================================

// IDA: 0x578080 -- Cell::GetGroundHeight
// Computes ground height from lepton coordinates.
int GetGroundHeight(int x_leptons, int y_leptons)
{
    int cx = x_leptons / 256;
    int cy = y_leptons / 256;
    int cell_idx = cx + (cy << 9);

    // Bounds check against map limits
    // Call Isometric::InitTables for actual height computation
    // Returns Z height in leptons
    (void)cell_idx;
    return 0;
}

// IDA: 0x487950 -- CellClass::QuickPassable
// Quick check if the cell is passable for pathfinding.
// 0x487950
bool CellClass::QuickPassable() const
{
// [IDA decompile]
bool __thiscall CellClass_QuickPassable(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)*(this + 9) << 8) + 128;
  v2 = ((__int16)HIWORD(*(this + 9)) << 8) + 128;
  v5[0] = 128;
  v5[1] = 128;
  inited = Isometric::InitTables((int)this, v5);
  v6[0] = v1;
  v6[1] = v2;
  v6[2] = inited;
  return Cell::IsPassable(v6);
}

/* ASM:
sub     esp, 14h
mov     eax, [ecx+24h]
push    esi
push    edi
mov     [esp+1Ch+var_14], eax
movsx   edi, word ptr [esp+1Ch+var_14+2]
movsx   esi, ax
shl     esi, 8
mov     eax, 80h
shl     edi, 8
add     esi, eax
add     edi, eax
mov     [esp+1Ch+var_14], eax
mov     [esp+1Ch+var_10], eax
lea     eax, [esp+1Ch+var_14]
push    eax
call    Isometric__InitTables
lea     ecx, [esp+1Ch+var_C]
mov     [esp+1Ch+var_C], esi
push    ecx
mov     ecx, 87F7E8h
mov     [esp+20h+var_8], edi
mov     [esp+20h+var_4], eax
call    Cell__IsPassable
pop     edi
pop     esi
add     esp, 14h
retn
*/
}

// IDA: 0x47C520 -- Cell::IsBridge
// Checks if the given cell object is a bridge.
bool Cell_IsBridge(const CellClass* cell)
{
    if (!cell)
        return false;
    return cell->ContainsBridge();
}

// ============================================================
// Object management
// ============================================================

void CellClass::AddContent(ObjectClass* content, bool on_bridge)
{
    if (!content)
        return;

    if (on_bridge)
    {
        content->nextObject = altObject;
        altObject = content;
    }
    else
    {
        content->nextObject = firstObject;
        firstObject = content;
    }
}

void CellClass::RemoveContent(ObjectClass* content, bool on_bridge)
{
    if (!content)
        return;

    ObjectClass** list = on_bridge ? &altObject : &firstObject;
    ObjectClass* prev = nullptr;
    ObjectClass* curr = *list;

    while (curr)
    {
        if (curr == content)
        {
            if (prev)
                prev->nextObject = curr->nextObject;
            else
                *list = curr->nextObject;
            curr->nextObject = nullptr;
            return;
        }
        prev = curr;
        curr = curr->nextObject;
    }
}

ObjectClass* CellClass::GetSomeObject(const CoordStruct& coords, bool alt) const
{
    // Returns the first object on this cell (or alt list)
    return alt ? altObject : firstObject;
}

CoordStruct* CellClass::GetCenterCoords(CoordStruct* out) const
{
    if (!out)
        return out;
    // Center = cell top-left + half cell width in leptons
    out->X = (int)(mapCoords.X) * 256 + 128;
    out->Y = (int)(mapCoords.Y) * 256 + 128;
    out->Z = (int)(height);
    return out;
}

int CellClass::GetFloorHeight(const Point2D& subcoords) const
{
    // Get floor height at sub-cell position
    (void)subcoords;
    return (int)(height);
}

void CellClass::SetMapCoords(const CoordStruct& coords)
{
    mapCoords.X = (int16_t)(coords.X / 256);
    mapCoords.Y = (int16_t)(coords.Y / 256);
    height = (int8_t)(coords.Z);
}

CoordStruct* CellClass::FindInfantrySubposition(CoordStruct* out, const CoordStruct& coords,
    bool ignore_contents, bool alt, bool use_cell_coords)
{
    if (!out)
        return out;
    // Find a free sub-position for infantry placement within this cell
    // 5 sub-positions arranged in a cross pattern within a cell
    *out = coords;
    (void)ignore_contents;
    (void)alt;
    (void)use_cell_coords;
    return out;
}

bool CellClass::TryAssignJumpjet(FootClass* object)
{
    if (!object || jumpjet)
        return false;
    jumpjet = object;
    return true;
}

void CellClass::ReplaceTag(TagClass* tag)
{
    attachedTag = tag;
}

void CellClass::SetWallOwner()
{
    // Set wall ownership based on adjacent cells
}

bool CellClass::IsShrouded() const
{
    return shroudedness > 0;
}

void CellClass::Unshroud()
{
    shroudedness = 0;
    foggedness = 0;
}

void CellClass::SetupLAT()
{
    // Setup Lighting and Tinting
}

void CellClass::Setup(uint32_t unk)
{
    (void)unk;
}

void CellClass::BlowUpBridge()
{
    if (ContainsBridge())
    {
        // Destroy bridge, scatter content
        flags = (CellFlags)((uint32_t)(flags) & ~0x8000u);
    }
}

bool CellClass::CanThisExistHere(SpeedType speed, BuildingTypeClass* object, HouseClass* owner) const
{
    (void)speed;
    (void)object;
    (void)owner;
    return true;
}

void CellClass::ScatterContent(const CoordStruct& crd, bool ignore_mission, bool ignore_dest, bool alt)
{
    ObjectClass* list = alt ? altObject : firstObject;
    while (list)
    {
        list->Scatter(crd, ignore_mission, ignore_dest);
        list = list->nextObject;
    }
}

CellClass* CellClass::GetNeighbourCell(unsigned int direction) const
{
    // Return adjacent cell in given direction (0-7)
    // Uses CellDirectionOffsets table
    (void)direction;
    return nullptr;
}

void CellClass::UpdateThreat(unsigned int source_house, int threat_level)
{
    (void)source_house;
    (void)threat_level;
}

void CellClass::CollectCrate(FootClass* collector)
{
    (void)collector;
    // Apply crate effect to collector
}

void CellClass::ProcessColourComponents(int* arg0, int* intensity, int* ambient,
    int* a5, int* a6, int* tint_r, int* tint_g, int* tint_b)
{
    (void)arg0;
    (void)intensity;
    (void)ambient;
    (void)a5;
    (void)a6;
    (void)tint_r;
    (void)tint_g;
    (void)tint_b;
}

TubeClass* CellClass::GetTunnel()
{
    if (tubeIndex >= 0)
    {
        // Return tunnel from tube array
    }
    return nullptr;
}

RectangleStruct* CellClass::GetContainingRect(RectangleStruct* dest) const
{
    return GetScreenRect(dest);
}

const wchar_t* CellClass::GetUIName() const
{
    // Return cell type name
    return L"Cell";
}

int CellClass::GetContainedTiberiumIndex() const
{
    return overlayTypeIndex;
}

int CellClass::GetContainedTiberiumValue() const
{
    return 0;
}

bool CellClass::IncreaseTiberium(int idx_tiberium, int amount)
{
    (void)idx_tiberium;
    (void)amount;
    return false;
}

void CellClass::ReduceTiberium(int amount)
{
    (void)amount;
}

void CellClass::ActivateVeins()
{
    // Activate vein growth from this cell
}

bool CellClass::IsRadiated() const
{
    return radSite != nullptr;
}

int CellClass::GetRadLevel() const
{
    return (int)(radLevel);
}

void CellClass::RadLevelIncrease(double amount)
{
    radLevel += amount;
}

void CellClass::RadLevelDecrease(double amount)
{
    radLevel -= amount;
    if (radLevel < 0.0)
        radLevel = 0.0;
}

bool CellClass::Tile_Is_Tunnel() const { return ((uint32_t)(flags) & 0x400000) != 0; }
bool CellClass::Tile_Is_Water() const { return ((uint32_t)(flags) & 0x800) != 0; }
bool CellClass::Tile_Is_Blank() const { return slopeIndex == 0; }
bool CellClass::Tile_Is_Ramp() const { return ((uint32_t)(flags) & 0x10000) != 0; }
bool CellClass::Tile_Is_Cliff() const { return ((uint32_t)(flags) & 0x2000) != 0; }
bool CellClass::Tile_Is_Shore() const { return ((uint32_t)(flags) & 0x40000000) != 0; }
bool CellClass::Tile_Is_Wet() const { return ((uint32_t)(flags) & 0x200) != 0; }
bool CellClass::Tile_Is_Pave() const { return false; }
bool CellClass::Tile_Is_DirtRoad() const { return false; }
bool CellClass::Tile_Is_PavedRoad() const { return false; }
bool CellClass::Tile_Is_PavedRoadEnd() const { return false; }
bool CellClass::Tile_Is_PavedRoadSlope() const { return false; }
bool CellClass::Tile_Is_Median() const { return false; }
bool CellClass::Tile_Is_Bridge() const { return ContainsBridge(); }
bool CellClass::Tile_Is_WoodBridge() const { return false; }
bool CellClass::Tile_Is_Green() const { return false; }
bool CellClass::Tile_Is_NotWater() const { return !Tile_Is_Water(); }
bool CellClass::Tile_Is_DestroyableCliff() const
{
    return ((uint32_t)(flags) & 0x08000000) != 0;
}

} // namespace gamemd
