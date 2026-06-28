#include "structure/unit.hpp"

#include <cstring>
#include <cmath>

namespace gamemd {

namespace {

constexpr uint32_t kUnitFlag = (uint32_t)(AbstractFlags::Foot)
                              | (uint32_t)(AbstractFlags::Object)
                              | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x7353C0 -- UnitClass::Construct (960B)
UnitClass::UnitClass() noexcept
    : UnitClass_field_int_6C0((int)(-1))
    , Type(nullptr)
    , FollowerCar(nullptr)
    , FlagHouseIndex(-1)
    , HasFollowerCar(false)
    , Unloading(false)
    , UnitClass_field_bool_6D2(false)
    , TerrainPalette(false)
    , UnitClass_field_int_6D4((int)(-1))
    , DeathFrameCounter((int)(-1))
    , ElectricBolt(nullptr)
    , Deployed(false)
    , Deploying(false)
    , Undeploying(false)
    , NonPassengerCount(0)
{
    abstractFlags = kUnitFlag;
}

// ============================================================
// Phase 3: Harvest/Unload
// ============================================================

// 0x4151e0
// Merged: Westwood combined harvest + unload into a single 5-case state machine.
// Case 3 handles unloading logic (pop cargo, apply overlay, handle team members).
// No separate Mission_Unload override exists in the binary (vtable slot = Return450J).
int UnitClass::Mission_Harvest()
{
// [IDA decompile]
int __thiscall UnitClass::Mission_Harvest(int *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // eax
  char *MissionControl; // eax
  int v8; // esi
  int v10; // eax
  int v11; // edi
  void *ClosestPlacementCell; // eax
  int DB; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ebx
  __int16 *WaypointCoords; // eax
  void *v18; // eax
  void *NearbyCell; // eax
  int v20; // edi
  __int16 *Waypoint_Location; // eax
  void *v22; // eax
  void *v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // edi
  _WORD *v27; // eax
  _WORD *v28; // eax
  char *v29; // [esp+0h] [ebp-30h]
  int v30; // [esp+10h] [ebp-20h] BYREF
  int v31; // [esp+14h] [ebp-1Ch] BYREF
  int v32; // [esp+18h] [ebp-18h] BYREF
  _BYTE v33[4]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v34[4]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v35[12]; // [esp+24h] [ebp-Ch] BYREF

  switch ( *(this + 47) )
  {
    case 0:
      if ( !(*(int (__thiscall **)(int *))(*this + 456))(this)
        && *((float *)this + 186) == 0.0
        && ((v2 = *(this + 361)) == 0
         || (v3 = *(this + 39),
             v4 = *(this + 40),
             v5 = *(this + 41),
             v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v35),
             v3 == *v6)
         && v4 == v6[1]
         && v5 == v6[2]) )
      {
        *(this + 47) = 3;
      }
      else if ( *(this + 361)
             || !*(_BYTE *)(*(this + 433) + 3221)
             || (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0 )
      {
        if ( *(this + 361) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 1360))(this, *(this + 361)) )
          {
            DB = CCINIClass::GetDB(this + 69);
            v14 = DB;
            if ( DB
              && (v15 = *(_DWORD *)(DB + 1492)) != 0
              && *TechnoClass::GetWaypointCoords(*(_DWORD **)(v15 + 36), &v30) != MEMORY[0x87F7E8][10656] )
            {
              v16 = *this;
              WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords(
                                            *(_DWORD **)(*(_DWORD *)(v14 + 1492) + 36),
                                            &v31);
              v18 = CellCoord::To_CellObj(MEMORY[0x87F7E8], WaypointCoords);
              NearbyCell = InfantryClass::FindNearbyCell(this, (int)v18);
              (*(void (__thiscall **)(int *, void *, int))(v16 + 1152))(this, NearbyCell, 1);
            }
            else
            {
              v20 = *this;
              Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(
                                               (char *)MEMORY[0x87F7E8][536210],
                                               &v32,
                                               700);
              v22 = CellCoord::To_CellObj(MEMORY[0x87F7E8], Waypoint_Location);
              v23 = InfantryClass::FindNearbyCell(this, (int)v22);
              (*(void (__thiscall **)(int *, void *, int))(v20 + 1152))(this, v23, 1);
              v24 = *(this + 373);
              if ( v24 )
                TeamClass::SelectMember(v24, *(this + 361));
            }
          }
          else
          {
            v25 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 433) + 188))(*(this + 433));
            *(this + 47) = v25 != (*(int (__thiscall **)(int *))(*this + 456))(this) ? 4 : 1;
          }
        }
        else
        {
          *(this + 47) = 2;
        }
      }
      else
      {
        v10 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1320))(this, *(this + 433) + 1000, 0, 0);
        if ( v10 )
        {
          (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v10, 1);
        }
        else
        {
          v11 = *this;
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(this);
          (*(void (__thiscall **)(int *, void *, int))(v11 + 1152))(this, ClosestPlacementCell, 1);
        }
      }
      goto LABEL_9;
    case 1:
      if ( !*(this + 413) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
        *(this + 47) = 2;
      if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 1360))(this, *(this + 361)) )
        *(this + 47) = 0;
      goto LABEL_9;
    case 2:
      if ( !*(this + 413) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
        *(this + 47) = 3;
      return 1;
    case 3:
      if ( !*((_BYTE *)this + 1048) )
      {
        if ( *(this + 70) )
        {
          if ( *(_BYTE *)(*(this + 433) + 3580) )
          {
            (*(void (__thiscall **)(int *, _DWORD))(*this + 292))(this, 0);
            FootClass::MissionMoveCarryallLand(this);
            (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1);
          }
          else
          {
            v26 = LinkedList::Pop(this + 69);
            v27 = (_WORD *)(*(int (__thiscall **)(int *, _BYTE *, int *))(*this + 440))(this, v33, this);
            MapClass::ApplyOverlayReveal(MEMORY[0x87F7E8], v27, v29);
            if ( (*(int (__thiscall **)(int *, int))(*this + 256))(this, v26) )
              *(_BYTE *)(v26 + 1060) = 0;
            v28 = (_WORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v34);
            MapClass::FillRevealBuffer(MEMORY[0x87F7E8], v28, this);
            if ( !*(_BYTE *)(v26 + 1060) && *(_DWORD *)(v26 + 1492) )
              TeamClass::AddMember(*(this + 373), v26, 0);
            if ( !*(this + 70) )
              (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1);
          }
        }
        else
        {
          (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1);
        }
      }
      goto LABEL_9;
    case 4:
      *(this + 47) = 0;
      return 1;
    default:
LABEL_9:
      MissionControl = MissionClass::GetMissionControl(this);
      v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
      return v8 + Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
  }
}

/* ASM:
sub     esp, 20h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+0BCh]
cmp     eax, 4          ; switch 5 cases
ja      short def_4151F4 ; jumptable 004151F4 default case
jmp     ds:jpt_4151F4[eax*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4151FB:                             ; CODE XREF: UnitClass__Mission_Harvest+14↑j
; DATA XREF: .text:jpt_4151F4↓o
mov     eax, [esi]      ; jumptable 004151F4 case 0
mov     ecx, esi
call    dword ptr [eax+1C8h]
test    eax, eax
jnz     loc_415290
fld     dword ptr [esi+2E8h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jz      short loc_415290
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_415250
lea     edx, [esi+9Ch]
mov     eax, [ecx]
mov     edi, [edx]
mov     ebp, [edx+4]
mov     ebx, [edx+8]
lea     edx, [esp+30h+var_C]
push    edx
call    dword ptr [eax+48h]
cmp     edi, [eax]
jnz     short loc_415290
cmp     ebp, [eax+4]
jnz     short loc_415290
cmp     ebx, [eax+8]
jnz     short loc_415290

loc_415250:                             ; CODE XREF: UnitClass__Mission_Harvest+48↑j
mov     dword ptr [esi+0BCh], 3

def_4151F4:                             ; CODE XREF: UnitClass__Mission_Harvest+12↑j
; UnitClass__Mission_Harvest+104↓j ...
mov     ecx, esi        ; jumptable 004151F4 default case
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    2
push    0
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn
; ---------------------------------------------------------------------------

loc_415290:                             ; CODE XREF: UnitClass__Mission_Harvest+27↑j
; UnitClass__Mission_Harvest+3E↑j ...
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_415302
mov     eax, [esi+6C4h]
mov     cl, [eax+0C95h]
test    cl, cl
jz      short loc_415302
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jle     short loc_415302
mov     ecx, [esi+6C4h]
mov     eax, [esi]
push    0
add     ecx, 3E8h
push    0
push    ecx
mov     ecx, esi
call    dword ptr [eax+528h]
test    eax, eax
jz      short loc_4152E9
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_4152E9:                             ; CODE XREF: UnitClass__Mission_Harvest+F5↑j
mov     edi, [esi]
push    1
mov     ecx, esi
call    TechnoClass__FindClosestPlacementCell
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_415302:                             ; CODE XREF: UnitClass__Mission_Harvest+B8↑j
; UnitClass__Mission_Harvest+C8↑j ...
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_41531B
mov     dword ptr [esi+0BCh], 2
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_41531B:                             ; CODE XREF: UnitClass__Mission_Harvest+12A↑j
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+550h]
test    al, al
jz      loc_4153FB
lea     ecx, [esi+114h]
call    CCINIClass__GetDB
mov     edi, eax
test    edi, edi
jz      short loc_4153A7
mov     eax, [edi+5D4h]
test    eax, eax
jz      short loc_4153A7
lea     ecx, [esp+30h+var_20]
push    ecx
mov     ecx, [eax+24h]
call    TechnoClass__GetWaypointCoords
mov     dx, [eax]
cmp     dx, ds:889E68h
jnz     short loc_41536F
mov     ax, [eax+2]
cmp     ax, ds:889E6Ah
jz      short loc_4153A7

loc_41536F:                             ; CODE XREF: UnitClass__Mission_Harvest+180↑j
mov     edx, [edi+5D4h]
mov     ebx, [esi]
lea     ecx, [esp+30h+var_1C]
push    1
push    ecx
mov     ecx, [edx+24h]
call    TechnoClass__GetWaypointCoords
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    InfantryClass__FindNearbyCell
push    eax
mov     ecx, esi
call    dword ptr [ebx+480h]
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_4153A7:                             ; CODE XREF: UnitClass__Mission_Harvest+15D↑j
; UnitClass__Mission_Harvest+167↑j ...
mov     ecx, ds:0A8B230h
mov     edi, [esi]
push    1
lea     eax, [esp+34h+var_18]
push    2BCh
push    eax
call    ScenarioClass__Get_Waypoint_Location
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    InfantryClass__FindNearbyCell
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
mov     ecx, [esi+5D4h]
test    ecx, ecx
jz      def_4151F4      ; jumptable 004151F4 default case
mov     edx, [esi+5A4h]
push    edx
call    TeamClass__SelectMember
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_4153FB:                             ; CODE XREF: UnitClass__Mission_Harvest+148↑j
mov     ecx, [esi+6C4h]
mov     eax, [ecx]
call    dword ptr [eax+0BCh]
mov     edx, [esi]
mov     ecx, esi
mov     edi, eax
call    dword ptr [edx+1C8h]
sub     eax, edi
neg     eax
sbb     eax, eax
and     eax, 3
inc     eax
mov     [esi+0BCh], eax
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_41542A:                             ; CODE XREF: UnitClass__Mission_Harvest+14↑j
; DATA XREF: .text:jpt_4151F4↓o
mov     eax, [esi+674h] ; jumptable 004151F4 case 1
test    eax, eax
jnz     short loc_41543E
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_41543E:                             ; CODE XREF: UnitClass__Mission_Harvest+252↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_415458
mov     dword ptr [esi+0BCh], 2

loc_415458:                             ; CODE XREF: UnitClass__Mission_Harvest+26C↑j
mov     eax, [esi+5A4h]
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+550h]
test    al, al
jnz     def_4151F4      ; jumptable 004151F4 default case
mov     dword ptr [esi+0BCh], 0
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_415480:                             ; CODE XREF: UnitClass__Mission_Harvest+14↑j
; DATA XREF: .text:jpt_4151F4↓o
mov     eax, [esi+674h] ; jumptable 004151F4 case 2
test    eax, eax
jnz     short loc_415494
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_415494:                             ; CODE XREF: UnitClass__Mission_Harvest+2A8↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_4154AE
mov     dword ptr [esi+0BCh], 3

loc_4154AE:                             ; CODE XREF: UnitClass__Mission_Harvest+2C2↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 20h
retn
; ---------------------------------------------------------------------------

loc_4154BB:                             ; CODE XREF: UnitClass__Mission_Harvest+14↑j
; DATA XREF: .text:jpt_4151F4↓o
mov     al, [esi+418h]  ; jumptable 004151F4 case 3
test    al, al
jnz     def_4151F4      ; jumptable 004151F4 default case
mov     eax, [esi+118h]
test    eax, eax
jz      loc_4155AD
mov     edx, [esi+6C4h]
mov     al, [edx+0DFCh]
test    al, al
jz      short loc_41550B
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+124h]
mov     ecx, esi
call    FootClass__MissionMoveCarryallLand
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+124h]
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_41550B:                             ; CODE XREF: UnitClass__Mission_Harvest+305↑j
lea     ecx, [esi+114h]
call    LinkedList__Pop
lea     ecx, [esp+30h+var_14]
mov     edi, eax
mov     eax, [esi]
push    esi
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
push    eax
mov     ecx, 87F7E8h
call    MapClass__ApplyOverlayReveal
mov     eax, ds:889E68h
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+100h]
test    eax, eax
jz      short loc_41554F
mov     byte ptr [edi+424h], 0

loc_41554F:                             ; CODE XREF: UnitClass__Mission_Harvest+366↑j
mov     edx, [esi]
lea     eax, [esp+30h+var_10]
push    esi
push    eax
mov     ecx, esi
call    dword ptr [edx+1B8h]
push    eax
mov     ecx, 87F7E8h
call    MapClass__FillRevealBuffer
mov     al, [edi+424h]
test    al, al
jnz     short loc_41558C
mov     eax, [edi+5D4h]
test    eax, eax
jz      short loc_41558C
mov     ecx, [esi+5D4h]
push    0
push    edi
call    TeamClass__AddMember

loc_41558C:                             ; CODE XREF: UnitClass__Mission_Harvest+392↑j
; UnitClass__Mission_Harvest+39C↑j
mov     eax, [esi+118h]
test    eax, eax
jnz     def_4151F4      ; jumptable 004151F4 default case
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+484h]
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_4155AD:                             ; CODE XREF: UnitClass__Mission_Harvest+2F1↑j
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]
jmp     def_4151F4      ; jumptable 004151F4 default case
; ---------------------------------------------------------------------------

loc_4155C0:                             ; CODE XREF: UnitClass__Mission_Harvest+14↑j
; DATA XREF: .text:jpt_4151F4↓o
mov     dword ptr [esi+0BCh], 0 ; jumptable 004151F4 case 4
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 20h
retn
*/
}

// IDA: 0x73D450 (ProcessResourceHarvesting, 477B)
// 0x73d450
int UnitClass::ProcessResourceHarvesting()
{
// [IDA decompile]
char __thiscall sub_73D450(void *this)
{
  __int16 *v2; // ebp
  int v4; // eax
  int v5; // ebx
  double v6; // st7
  int v7; // eax
  int v8; // eax
  #72 *v9; // eax
  float v10; // [esp+0h] [ebp-28h]
  float v11; // [esp+18h] [ebp-10h]
  float v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v14 = *((_DWORD *)this + 39);
  v15 = *((_DWORD *)this + 40);
  v16 = *((_DWORD *)this + 41);
  v2 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], &v14);
  if ( *((_DWORD *)this + 361) )
    return 1;
  if ( *(_BYTE *)(*((_DWORD *)this + 433) + 3598)
    && ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 692))(this) < 1.0
    && *((_DWORD *)v2 + 59) == 5 )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 433) + 3599) )
    {
      Helper_486E30(v2);
      Float::Accumulate((float *)this + 207, 1.0, 0);
      *((_DWORD *)this + 62) = 0;
      v4 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5408);
      *((_DWORD *)this + 64) = dword_A8ED54[12];
      v4 *= 3;
      *((_DWORD *)this + 65) = v15;
      *((_DWORD *)this + 66) = v4;
      *((_DWORD *)this + 67) = v4;
      return 1;
    }
    v5 = BuildingClass::FindByCellHash(v2);
    v11 = (float)*(int *)(*((_DWORD *)this + 433) + 2048);
    if ( v11 - Float4::Sum((float *)this + 207) <= 1.0 )
    {
      v12 = (float)*(int *)(*((_DWORD *)this + 433) + 2048);
      v6 = v12 - Float4::Sum((float *)this + 207);
    }
    else
    {
      v6 = 1.0;
    }
    v7 = Math::RoundToInt(v6);
    v13 = CellClass::ReduceTiberium((int)v2, v7);
    if ( v13 > 0 )
    {
      v10 = (float)v13;
      Float::Accumulate((float *)this + 207, v10, v5);
      *((_DWORD *)this + 62) = 0;
      v8 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5408);
      *((_DWORD *)this + 64) = dword_A8ED54[12];
      *((_DWORD *)this + 65) = v15;
      *((_DWORD *)this + 66) = v8;
      *((_DWORD *)this + 67) = v8;
      return 1;
    }
  }
  else
  {
    *((_DWORD *)this + 62) = 0;
    v9 = (#72 *)dword_A8ED54[12];
    *((_DWORD *)this + 67) = 0;
    *((_DWORD *)this + 64) = v9;
    *((_DWORD *)this + 65) = v15;
    *((_DWORD *)this + 66) = 0;
  }
  return 0;
}

/* ASM:
sub     esp, 10h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
lea     eax, [esi+9Ch]
mov     ecx, [esi+9Ch]
mov     [esp+20h+var_C], ecx
lea     ecx, [esp+20h+var_C]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+24h+var_8], edx
mov     eax, [eax+8]
mov     [esp+24h+var_4], eax
call    Coord__To_Cell
mov     ebp, eax
mov     eax, [esi+5A4h]
xor     edi, edi
cmp     eax, edi
jz      short loc_73D49E
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 10h
retn
; ---------------------------------------------------------------------------

loc_73D49E:                             ; CODE XREF: UnitClass__ProcessResourceHarvesting+42↑j
mov     edx, [esi+6C4h]
mov     al, [edx+0E0Eh]
test    al, al
jz      loc_73D5FE
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2B4h]
fcomp   ds:dbl_7E1718
fnstsw  ax
test    ah, 1
jz      loc_73D5FE
cmp     dword ptr [ebp+0ECh], 5
jnz     loc_73D5FE
mov     ecx, [esi+6C4h]
mov     al, [ecx+0E0Fh]
mov     ecx, ebp
test    al, al
jz      short loc_73D541
call    Helper_486E30
push    edi             ; int
push    3F800000h       ; float
lea     ecx, [esi+33Ch]
call    Float__Accumulate
mov     [esi+0F8h], edi
mov     edx, ds:8871E0h
mov     ecx, dword_A8ED54+30h
pop     edi
mov     eax, [edx+1520h]
lea     edx, [esi+100h]
fstp    st
mov     [edx], ecx
mov     ecx, [esp+1Ch+var_8]
lea     eax, [eax+eax*2]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     [esi+10Ch], eax
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 10h
retn
; ---------------------------------------------------------------------------

loc_73D541:                             ; CODE XREF: UnitClass__ProcessResourceHarvesting+9A↑j
call    BuildingClass__FindByCellHash
mov     edx, [esi+6C4h]
lea     edi, [esi+33Ch]
mov     ecx, edi
mov     ebx, eax
fild    dword ptr [edx+800h]
fstp    [esp+20h+var_10]
call    Float4__Sum
fsubr   [esp+20h+var_10]
fcomp   ds:flt_7E2AC8
fnstsw  ax
test    ah, 41h
jnz     short loc_73D57E
fld     ds:flt_7E2AC8
jmp     short loc_73D599
; ---------------------------------------------------------------------------

loc_73D57E:                             ; CODE XREF: UnitClass__ProcessResourceHarvesting+124↑j
mov     eax, [esi+6C4h]
mov     ecx, edi
fild    dword ptr [eax+800h]
fstp    [esp+20h+var_10]
call    Float4__Sum
fsubr   [esp+20h+var_10]

loc_73D599:                             ; CODE XREF: UnitClass__ProcessResourceHarvesting+12C↑j
call    Math__RoundToInt
push    eax
mov     ecx, ebp
call    CellClass__ReduceTiberium
test    eax, eax
mov     [esp+20h+var_10], eax
jle     short loc_73D623
fild    [esp+20h+var_10]
push    ebx             ; int
push    ecx
mov     ecx, edi
fstp    [esp+28h+var_28] ; float
call    Float__Accumulate
mov     dword ptr [esi+0F8h], 0
mov     ecx, ds:8871E0h
lea     edx, [esi+100h]
pop     edi
mov     eax, [ecx+1520h]
mov     ecx, dword_A8ED54+30h
mov     [edx], ecx
mov     ecx, [esp+1Ch+var_8]
fstp    st
mov     [edx+4], ecx
mov     [edx+8], eax
mov     [esi+10Ch], eax
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 10h
retn
; ---------------------------------------------------------------------------

loc_73D5FE:                             ; CODE XREF: UnitClass__ProcessResourceHarvesting+5C↑j
; UnitClass__ProcessResourceHarvesting+77↑j ...
mov     [esi+0F8h], edi
mov     eax, dword_A8ED54+30h
lea     edx, [esi+100h]
xor     ecx, ecx
mov     [esi+10Ch], edi
mov     [edx], eax
mov     eax, [esp+20h+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx

loc_73D623:                             ; CODE XREF: UnitClass__ProcessResourceHarvesting+15C↑j
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 10h
retn
*/
}

// IDA: 0x4C2C10 (updateHarvesting, 19B)
// 0x4c2c10
UnitClass* UnitClass::updateHarvesting()
{
    // 0x4c2c10: mov eax, [ecx+20h] — read NeedsSaveOrLink pointer
    UnitClass* result = this->NeedsSaveOrLink;
    if (result)
    {
        // 0x4c2c19: mov [eax+6DCh], edx — clear target's ElectricBolt
        result->ElectricBolt = nullptr;
        // 0x4c2c1f: mov [ecx+20h], edx — clear the link pointer
        this->NeedsSaveOrLink = nullptr;
    }
    // 0x4c2c22: retn — return original pointer in eax
    return result;
}

// IDA: 0x6B4BE0 (UnloadPassengers, 136B)
// 0x6b4be0
int UnitClass::UnloadPassengers()
{
// [IDA decompile]
char __thiscall UnitClass::UnloadPassengers(int *this, int a2)
{
  int v2; // edi
  int v4; // edx
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) || v2 != 1 && v2 != 3 )
    return 0;
  a2 = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v6);
  if ( MEMORY[0xA8E7AC] > 0 || MEMORY[0xA8ED6B] || Cell::IsWalkable((int *)*(this + 43), &a2, 1) )
    UnitClass::CreateUnloadPlacementCraters(&a2);
  v4 = *this;
  *((_BYTE *)this + 116) = 0;
  (*(void (__thiscall **)(int *))(v4 + 248))(this);
  return 1;
}

/* ASM:
push    ecx
push    esi
push    edi
mov     edi, [esp+0Ch+arg_0]
mov     esi, ecx
push    edi
call    ObjectClass__UpdateProductionDisplay
test    al, al
jz      short loc_6B4C60
cmp     edi, 1
jz      short loc_6B4BFD
cmp     edi, 3
jnz     short loc_6B4C60

loc_6B4BFD:                             ; CODE XREF: UnitClass__UnloadPassengers+16↑j
mov     eax, [esi]
lea     ecx, [esp+0Ch+var_4]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     eax, [eax]
mov     [esp+0Ch+arg_0], eax
mov     eax, ds:0A8E7ACh
test    eax, eax
jg      short loc_6B4C3A
mov     al, byte ptr dword_A8ED54+17h
test    al, al
jnz     short loc_6B4C3A
mov     ecx, [esi+0ACh]
lea     edx, [esp+0Ch+arg_0]
push    1
push    edx
call    Cell__IsWalkable
test    al, al
jz      short loc_6B4C4A

loc_6B4C3A:                             ; CODE XREF: UnitClass__UnloadPassengers+39↑j
; UnitClass__UnloadPassengers+42↑j
mov     ecx, [esi+0ACh]
lea     eax, [esp+0Ch+arg_0]
push    eax
call    UnitClass__CreateUnloadPlacementCraters

loc_6B4C4A:                             ; CODE XREF: UnitClass__UnloadPassengers+58↑j
mov     edx, [esi]
mov     ecx, esi
mov     byte ptr [esi+74h], 0
call    dword ptr [edx+0F8h]
pop     edi
mov     al, 1
pop     esi
pop     ecx
retn    4
; ---------------------------------------------------------------------------

loc_6B4C60:                             ; CODE XREF: UnitClass__UnloadPassengers+11↑j
; UnitClass__UnloadPassengers+1B↑j
pop     edi
xor     al, al
pop     esi
pop     ecx
retn    4
*/
}

// IDA: 0x6B7230 (ProcessExitQueue, 2363B)
// 0x6b7230
int UnitClass::ProcessExitQueue()
{
// [IDA decompile]
void __thiscall UnitClass::ProcessExitQueue(int *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  _DWORD **v8; // ebp
  _DWORD *v9; // edi
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ebp
  _DWORD *v13; // ebp
  _BYTE *v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  BOOL v19; // ebp
  _DWORD *v20; // ecx
  int v21; // ebx
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *Value; // eax
  void **v27; // ebp
  int Index; // eax
  int v29; // eax
  __int16 *v30; // eax
  _DWORD *v31; // eax
  int v32; // ebp
  void *NeighbourContent; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int16 *v37; // eax
  _DWORD *v38; // eax
  int v39; // ebp
  void *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  _WORD *v44; // ebp
  _WORD *v45; // eax
  int *v46; // ecx
  int v47; // eax
  int v48; // ecx
  _DWORD *v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // edi
  int v57; // eax
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  int v61; // ecx
  char v62; // bl
  int v63; // eax
  char v64; // bl
  int v65; // ecx
  int v66; // edx
  int v67; // eax
  int v68; // ebp
  int v69; // edx
  int v70; // eax
  int v71; // edi
  int v72; // ebp
  _DWORD *v73; // eax
  int *v74; // eax
  int v75; // ecx
  _DWORD *v76; // eax
  int v77; // ecx
  int v78; // eax
  char v79; // [esp+2Dh] [ebp-55h]
  int v80; // [esp+2Eh] [ebp-54h]
  int v81; // [esp+32h] [ebp-50h] BYREF
  int v82; // [esp+36h] [ebp-4Ch] BYREF
  int v83; // [esp+3Ah] [ebp-48h] BYREF
  int v84; // [esp+3Eh] [ebp-44h] BYREF
  char v85[4]; // [esp+42h] [ebp-40h] BYREF
  int v86; // [esp+46h] [ebp-3Ch] BYREF
  int v87; // [esp+4Ah] [ebp-38h]
  int v88; // [esp+4Eh] [ebp-34h]
  int v89[3]; // [esp+52h] [ebp-30h] BYREF
  int v90; // [esp+5Eh] [ebp-24h]
  int v91; // [esp+62h] [ebp-20h]
  char v92[12]; // [esp+6Ah] [ebp-18h] BYREF
  int v93; // [esp+76h] [ebp-Ch] BYREF
  int v94; // [esp+7Ah] [ebp-8h]

  v2 = *(this + 20);
  v3 = *(this + 22);
  if ( v2 != -1 )
  {
    if ( dword_A8ED54[12] - v2 >= v3 )
      goto LABEL_5;
    v3 -= dword_A8ED54[12] - v2;
  }
  if ( v3 )
    return;
LABEL_5:
  v4 = v91;
  *(this + 20) = dword_A8ED54[12];
  *(this + 21) = v4;
  *(this + 22) = 10;
  v5 = 0;
  v80 = 0;
  if ( *(this + 18) > 0 )
  {
    while ( 1 )
    {
      v6 = *(this + 15);
      v79 = 0;
      v7 = *(_DWORD *)(v6 + 4 * v5);
      v8 = (_DWORD **)(v6 + 4 * v5);
      v9 = *(_DWORD **)v7;
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 0:
          if ( !*(this + 26) )
            goto LABEL_87;
          v10 = *(this + 23);
          v11 = *(this + 25);
          if ( v10 == -1 )
            goto LABEL_11;
          if ( dword_A8ED54[12] - v10 >= v11 )
            goto LABEL_128;
          v11 -= dword_A8ED54[12] - v10;
LABEL_11:
          if ( !v11 )
          {
LABEL_128:
            if ( *(this + 28) != 2 && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              if ( *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 20) != 1 )
                goto LABEL_21;
              v12 = (_DWORD *)(*(this + 9) + 1652);
              if ( !*v12 )
                WinAPI::Wrapper(-2147467261);
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v12 + 16))(*v12) )
              {
                v13 = (_DWORD *)(*(this + 9) + 1652);
                if ( !*v13 )
                  WinAPI::Wrapper(-2147467261);
                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v13 + 128))(*v13) )
                {
LABEL_21:
                  v14 = (_BYTE *)*(this + 9);
                  if ( !v14 || (v14[20] & 4) == 0 || !*((v14[20] & 4) != 0 ? v14 + 1709 : (_BYTE *)1709) )
                  {
                    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v14 + 132))(v14) + 3432) )
                    {
                      v15 = v91;
                      *(this + 23) = dword_A8ED54[12];
                      v16 = 9;
                      *(this + 24) = v15;
                    }
                    else
                    {
                      *(this + 23) = dword_A8ED54[12];
                      v16 = 20;
                      *(this + 24) = v91;
                    }
                    *(this + 25) = v16;
                    if ( *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 20) == 1 )
                    {
                      v17 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 9) + 1016))(
                                         *(this + 9),
                                         0);
                      if ( v17 )
                      {
                        if ( *(int *)(v17 + 156) > 1 )
                        {
                          v79 = 1;
                          *(_DWORD *)(*(this + 9) + 952) = v5 & 1;
                        }
                      }
                    }
                    *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 4) = 2;
                    v18 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 9) + 1016))(*(this + 9), 0);
                    v86 = 0;
                    v87 = 0;
                    v88 = 0;
                    v19 = *(_BYTE *)(*(_DWORD *)v18 + 305) == 0;
                    v20 = (_DWORD *)*(this + 9);
                    if ( v20[238] )
                    {
                      v21 = *v20;
                      v22 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v20 + 132))(v20);
                      v23 = (int *)(*(int (__thiscall **)(_DWORD, char *, BOOL, _DWORD, _DWORD, _DWORD))(v21 + 176))(
                                     *(this + 9),
                                     v92,
                                     v19,
                                     v22[876],
                                     v22[877],
                                     v22[878]);
                    }
                    else
                    {
                      v23 = (int *)(*(int (__thiscall **)(_DWORD *, int *, BOOL, _DWORD, _DWORD, _DWORD))(*v20 + 176))(
                                     v20,
                                     &v93,
                                     v19,
                                     0,
                                     0,
                                     0);
                    }
                    v24 = *v23;
                    v86 = *v23;
                    v5 = v80;
                    v25 = v23[1];
                    v87 = v25;
                    v88 = v23[2] + 10;
                    if ( *(this + 10) == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352) )
                    {
                      v86 = v24 - dword_84009C;
                      v87 = v25 - dword_8400A0;
                    }
                    Value = ProgressTimer::GetValue((_WORD *)(*(this + 9) + 904), &v81);
                    (*(void (__thiscall **)(_DWORD *, int *, _DWORD))(*v9 + 216))(
                      v9,
                      &v86,
                      (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
                    if ( *(this + 10) == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352) )
                    {
                      v27 = (void **)__2_YAPAXI_Z(456);
                      if ( v27 )
                      {
                        v89[0] = v9[39];
                        v89[1] = v9[40];
                        v89[2] = v9[41];
                        Index = AnimTypeClass::FindIndex(off_840098);
                        AnimClass::ctor(
                          v27,
                          *(void **)(MEMORY[0x87F7E8][53851] + 4 * Index),
                          v89,
                          (void *)2,
                          1,
                          (void *)0x600,
                          (void *)0xFFFFFFF6,
                          0);
                      }
                    }
                    if ( v79 )
                      *(_DWORD *)(*(this + 9) + 952) = 0;
                    if ( *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v80) + 20) == 1 )
                    {
                      v29 = *(this + 27);
                      if ( v29 )
                      {
                        *(this + 26) = v29;
                        *(this + 27) = 0;
                      }
                      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, *(this + 26), 1);
                      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0);
                    }
                    else
                    {
                      v30 = (__int16 *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 9) + 440))(
                                         *(this + 9),
                                         &v82);
                      v31 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v30);
                      v32 = *v9;
                      NeighbourContent = Cell::GetNeighbourContent(v31, 0);
                      (*(void (__thiscall **)(_DWORD *, void *, int))(v32 + 1152))(v9, NeighbourContent, 1);
                      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0);
                    }
                  }
                }
              }
            }
          }
LABEL_87:
          v80 = ++v5;
          if ( v5 >= *(this + 18) )
            goto LABEL_88;
          break;
        case 1:
          v34 = *(_DWORD *)(v7 + 16);
          v35 = *(_DWORD *)(v7 + 8);
          if ( v35 == -1 )
            goto LABEL_49;
          if ( dword_A8ED54[12] - v35 >= v34 )
            goto LABEL_50;
          v34 -= dword_A8ED54[12] - v35;
LABEL_49:
          if ( !v34 )
LABEL_50:
            UnitClass::ClearTargetRef(this, (int)v9);
          goto LABEL_87;
        case 2:
          if ( *(_DWORD *)(v7 + 20) != 1 )
          {
            v36 = *(this + 27);
            if ( v36 )
            {
              *(this + 26) = v36;
              *(this + 27) = 0;
            }
            if ( !*(this + 26) )
              goto LABEL_55;
            v37 = (__int16 *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 9) + 440))(*(this + 9), &v83);
            v38 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v37);
            v39 = *v9;
            v40 = Cell::GetNeighbourContent(v38, 4u);
            (*(void (__thiscall **)(_DWORD *, void *, int))(v39 + 1152))(v9, v40, 1);
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0);
          }
          goto LABEL_87;
        case 3:
          v41 = *(this + 27);
          if ( v41 )
          {
            *(this + 26) = v41;
            *(this + 27) = 0;
          }
          if ( v9[191] && *(this + 26) )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(*(this + 15) + 4 * v5) + 968))(
              **(_DWORD **)(*(this + 15) + 4 * v5),
              *(this + 26));
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(*(this + 15) + 4 * v5) + 488))(
              **(_DWORD **)(*(this + 15) + 4 * v5),
              1,
              0);
          }
          else
          {
LABEL_55:
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, *(this + 9), 1);
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 968))(v9, 0);
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0);
            *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 4) = 4;
          }
          goto LABEL_87;
        case 4:
          v42 = *(this + 27);
          if ( v42 )
          {
            *(this + 26) = v42;
            *(this + 27) = 0;
          }
          if ( (int)v9[191] > 0 && *(this + 26) )
          {
            *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 4) = 3;
            v43 = **(_DWORD **)(*(this + 15) + 4 * v5);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v43 + 968))(v43, *(this + 26));
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(*(this + 15) + 4 * v5) + 488))(
              **(_DWORD **)(*(this + 15) + 4 * v5),
              1,
              0);
          }
          else
          {
            v44 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 9) + 440))(*(this + 9), &v84);
            v45 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 440))(v9, v85);
            if ( *v45 == *v44
              && v45[1] == v44[1]
              && (v90 = v9[39],
                  v46 = (int *)(*(this + 9) + 156),
                  v91 = v9[40],
                  v47 = v9[41],
                  v90 = *v46,
                  v91 = v46[1],
                  v47 - v46[2] < 20) )
            {
              (*(void (__thiscall **)(_DWORD *))(*v9 + 212))(v9);
              *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 4) = 6;
              v48 = *(this + 13);
              v49 = (_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 8);
              *v49 = dword_A8ED54[12];
              v49[1] = v94;
              v49[2] = v48;
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, *(this + 9), 1);
              (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 968))(v9, 0);
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0);
            }
          }
          goto LABEL_87;
        case 6:
          v50 = *(_DWORD *)(v7 + 8);
          v51 = *(_DWORD *)(v7 + 16);
          if ( v50 == -1 )
            goto LABEL_75;
          if ( dword_A8ED54[12] - v50 >= v51 )
            goto LABEL_76;
          v51 -= dword_A8ED54[12] - v50;
LABEL_75:
          if ( !v51 )
          {
LABEL_76:
            *(_DWORD *)(v7 + 4) = 0;
            v52 = v9[433];
            v9[191] = *(_DWORD *)(v52 + 1668);
            v53 = *(_DWORD *)(v52 + 160);
            v9[27] = v53;
            v9[28] = v53;
          }
          goto LABEL_87;
        case 7:
          v54 = *(_DWORD *)(v7 + 16);
          v55 = *(_DWORD *)(v7 + 8);
          if ( v55 == -1 )
            goto LABEL_80;
          if ( dword_A8ED54[12] - v55 >= v54 )
            goto LABEL_81;
          v54 -= dword_A8ED54[12] - v55;
LABEL_80:
          if ( !v54 )
          {
LABEL_81:
            v56 = *(_DWORD *)*(this + 10);
            v57 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 60))(*(this + 9));
            **v8 = (*(int (__thiscall **)(_DWORD, int))(v56 + 140))(*(this + 10), v57);
            v58 = *(this + 10);
            *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 20) = v58 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248)
                                                                || v58 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1300)
                                                                || v58 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352);
            v59 = **(_DWORD **)(*(this + 15) + 4 * v5);
            (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 212))(v59);
            *(_DWORD *)(**(_DWORD **)(*(this + 15) + 4 * v5) + 724) = *(this + 9);
            *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v5) + 4) = 0;
          }
          goto LABEL_87;
        default:
          goto LABEL_87;
      }
    }
  }
LABEL_88:
  v60 = *(this + 28);
  v61 = 0;
  v62 = 0;
  if ( v60 )
  {
    v63 = v60 - 1;
    if ( v63 )
    {
      if ( v63 == 1 )
      {
        v64 = 1;
        if ( *(this + 18) <= 0 )
          goto LABEL_98;
        v65 = *(this + 15);
        v66 = *(this + 18);
        do
        {
          v67 = *(_DWORD *)(*(_DWORD *)v65 + 4);
          if ( v67 == 3 || v67 == 4 )
            v64 = 0;
          v65 += 4;
          --v66;
        }
        while ( v66 );
        if ( v64 )
LABEL_98:
          *(this + 28) = 0;
      }
      return;
    }
    if ( !*(this + 26) )
    {
LABEL_100:
      UnitClass::ProcessIdleOrders(this);
      return;
    }
    v68 = *(this + 18);
    if ( v68 <= 0 )
    {
LABEL_106:
      v71 = 0;
      if ( v68 > 0 )
      {
        v72 = v94;
        do
        {
          v73 = *(_DWORD **)(*(this + 15) + 4 * v71);
          if ( v73[1] == 2 )
          {
            if ( *(_BYTE *)(*(_DWORD *)(*v73 + 1732) + 3432) )
            {
              v62 = 1;
              UnitClass::GetExitCell((int)&dword_A8ED54[46633], (_DWORD *)*v73, (_DWORD *)*(this + 26));
              dword_A8ED54[46633] = dword_A8ED54[12];
              dword_A8ED54[46634] = v72;
              dword_A8ED54[46635] = 2;
              v74 = *(int **)(*(this + 15) + 4 * v71);
              if ( v74[5] == 1 )
              {
                v74[1] = 1;
                if ( *(this + 10) == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248) )
                  v75 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1200) + *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1204);
                else
                  v75 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1252) + *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1256);
                v76 = (_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v71) + 8);
                *v76 = dword_A8ED54[12];
                v76[1] = v94;
                v76[2] = v75;
              }
              else
              {
                UnitClass::ClearTargetRef(this, *v74);
              }
            }
            else
            {
              v73[1] = 3;
              v77 = **(_DWORD **)(*(this + 15) + 4 * v71);
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v77 + 968))(v77, *(this + 26));
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(*(this + 15) + 4 * v71) + 488))(
                **(_DWORD **)(*(this + 15) + 4 * v71),
                1,
                0);
            }
          }
          ++v71;
        }
        while ( v71 < *(this + 18) );
        if ( v62 )
          UnitClass::ProcessIdleOrders(this);
      }
      *(this + 28) = 2;
    }
    else
    {
      v69 = *(this + 15);
      while ( 1 )
      {
        v70 = *(_DWORD *)(*(_DWORD *)v69 + 4);
        if ( v70 != 2 && v70 != 7 )
          break;
        ++v61;
        v69 += 4;
        if ( v61 >= v68 )
          goto LABEL_106;
      }
    }
  }
  else
  {
    v78 = *(this + 27);
    if ( v78 )
    {
      *(this + 26) = v78;
      *(this + 27) = 0;
    }
    if ( *(this + 26) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 9) + 940))(*(this + 9), *(this + 26)) )
      {
        *(this + 28) = 1;
        return;
      }
      goto LABEL_100;
    }
  }
}

/* ASM:
sub     esp, 58h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     edi, dword_A8ED54+30h
mov     edx, [esi+50h]
mov     eax, [esi+58h]
cmp     edx, 0FFFFFFFFh
jz      short loc_6B7254
mov     ecx, edi
sub     ecx, edx
cmp     ecx, eax
jge     short loc_6B725C
sub     eax, ecx

loc_6B7254:                             ; CODE XREF: UnitClass__ProcessExitQueue+18↑j
test    eax, eax
jnz     loc_6B7B63

loc_6B725C:                             ; CODE XREF: UnitClass__ProcessExitQueue+20↑j
mov     ecx, [esp+68h+var_20]
mov     eax, 0Ah
mov     [esi+50h], edi
mov     [esi+54h], ecx
mov     [esi+58h], eax
mov     eax, [esi+48h]
xor     ebx, ebx
test    eax, eax
mov     [esp+68h+var_54], ebx
jle     loc_6B796A

loc_6B727F:                             ; CODE XREF: UnitClass__ProcessExitQueue+734↓j
mov     edx, [esi+3Ch]
mov     [esp+68h+var_55], 0
mov     eax, [edx+ebx*4]
lea     ebp, [edx+ebx*4]
mov     ecx, [eax+4]
mov     edi, [eax]
cmp     ecx, 7          ; switch 8 cases
ja      def_6B729B      ; jumptable 006B729B default case, case 5
jmp     ds:jpt_6B729B[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_6B72A2:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
mov     eax, [esi+68h]  ; jumptable 006B729B case 0
test    eax, eax
jz      def_6B729B      ; jumptable 006B729B default case, case 5
mov     edx, [esi+5Ch]
mov     eax, [esi+64h]
cmp     edx, 0FFFFFFFFh
jz      short loc_6B72C6
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_6B72CE
sub     eax, ecx

loc_6B72C6:                             ; CODE XREF: UnitClass__ProcessExitQueue+86↑j
test    eax, eax
jnz     def_6B729B      ; jumptable 006B729B default case, case 5

loc_6B72CE:                             ; CODE XREF: UnitClass__ProcessExitQueue+92↑j
cmp     dword ptr [esi+70h], 2
jz      def_6B729B      ; jumptable 006B729B default case, case 5
mov     ecx, [esi+24h]
mov     ecx, [ecx+21Ch]
call    HouseClass__IonSensitivesShouldBeOffline
test    al, al
jnz     def_6B729B      ; jumptable 006B729B default case, case 5
mov     edx, [esi+3Ch]
mov     ebp, 1
mov     eax, [edx+ebx*4]
cmp     [eax+14h], ebp
jnz     short loc_6B735C
mov     ebp, [esi+24h]
add     ebp, 674h
cmp     dword ptr [ebp+0], 0
jnz     short loc_6B7317
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_6B7317:                             ; CODE XREF: UnitClass__ProcessExitQueue+DB↑j
mov     ebp, [ebp+0]
push    ebp
mov     ecx, [ebp+0]
call    dword ptr [ecx+10h]
test    al, al
jnz     def_6B729B      ; jumptable 006B729B default case, case 5
mov     ebp, [esi+24h]
add     ebp, 674h
cmp     dword ptr [ebp+0], 0
jnz     short loc_6B7342
push    80004003h

loc_6B733D:                             ; DATA XREF: .data:off_84A11C↓o
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_6B7342:                             ; CODE XREF: UnitClass__ProcessExitQueue+106↑j
mov     ebp, [ebp+0]
push    ebp
mov     edx, [ebp+0]
call    dword ptr [edx+80h]
test    al, al
jnz     def_6B729B      ; jumptable 006B729B default case, case 5
mov     ebp, 1

loc_6B735C:                             ; CODE XREF: UnitClass__ProcessExitQueue+CC↑j
mov     ecx, [esi+24h]
test    ecx, ecx
jz      short loc_6B738A
test    byte ptr [ecx+14h], 4
jz      short loc_6B738A
test    ecx, ecx
jnz     short loc_6B7371
xor     eax, eax
jmp     short loc_6B737C
; ---------------------------------------------------------------------------

loc_6B7371:                             ; CODE XREF: UnitClass__ProcessExitQueue+13B↑j
mov     al, [ecx+14h]
and     al, 4
neg     al
sbb     eax, eax
and     eax, ecx

loc_6B737C:                             ; CODE XREF: UnitClass__ProcessExitQueue+13F↑j
mov     dl, [eax+6ADh]
test    dl, dl
jnz     def_6B729B      ; jumptable 006B729B default case, case 5

loc_6B738A:                             ; CODE XREF: UnitClass__ProcessExitQueue+131↑j
; UnitClass__ProcessExitQueue+137↑j
mov     eax, [ecx]
call    dword ptr [eax+84h]
mov     cl, [eax+0D68h]
mov     eax, dword_A8ED54+30h
test    cl, cl
jz      short loc_6B73B2
mov     edx, [esp+68h+var_20]
mov     [esi+5Ch], eax
mov     ecx, 9
mov     [esi+60h], edx
jmp     short loc_6B73C1
; ---------------------------------------------------------------------------

loc_6B73B2:                             ; CODE XREF: UnitClass__ProcessExitQueue+16F↑j
mov     [esi+5Ch], eax
mov     eax, [esp+68h+var_20]
mov     ecx, 14h
mov     [esi+60h], eax

loc_6B73C1:                             ; CODE XREF: UnitClass__ProcessExitQueue+180↑j
mov     [esi+64h], ecx
mov     ecx, [esi+3Ch]
mov     edx, [ecx+ebx*4]
cmp     [edx+14h], ebp
jnz     short loc_6B73FC
mov     ecx, [esi+24h]
push    0
mov     eax, [ecx]
call    dword ptr [eax+3F8h]
mov     eax, [eax]
test    eax, eax
jz      short loc_6B73FC
cmp     [eax+9Ch], ebp
jle     short loc_6B73FC
mov     edx, [esi+24h]
mov     ecx, ebx
and     ecx, ebp
mov     [esp+68h+var_55], 1
mov     [edx+3B8h], ecx

loc_6B73FC:                             ; CODE XREF: UnitClass__ProcessExitQueue+19D↑j
; UnitClass__ProcessExitQueue+1B0↑j ...
mov     eax, [esi+3Ch]
push    0
mov     ecx, [eax+ebx*4]
mov     dword ptr [ecx+4], 2
mov     ecx, [esi+24h]
mov     edx, [ecx]
call    dword ptr [edx+3F8h]
xor     ecx, ecx
xor     edx, edx
xor     ebx, ebx
mov     [esp+68h+var_3C], ecx
mov     [esp+68h+var_38], edx
mov     [esp+68h+var_34], ebx
mov     eax, [eax]
xor     ebp, ebp
mov     cl, [eax+131h]
test    cl, cl
jnz     short loc_6B743B
mov     ebp, 1

loc_6B743B:                             ; CODE XREF: UnitClass__ProcessExitQueue+204↑j
mov     ecx, [esi+24h]
mov     eax, [ecx+3B8h]
test    eax, eax
jz      short loc_6B747B
mov     ebx, [ecx]
call    dword ptr [ebx+84h]
add     eax, 0DB0h
sub     esp, 0Ch
mov     ecx, esp
mov     edx, [eax]
push    ebp
mov     [ecx], edx
mov     edx, [eax+4]
mov     [ecx+4], edx
mov     eax, [eax+8]
mov     [ecx+8], eax
lea     ecx, [esp+78h+var_18]
push    ecx
mov     ecx, [esi+24h]
call    dword ptr [ebx+0B0h]
jmp     short loc_6B7498
; ---------------------------------------------------------------------------

loc_6B747B:                             ; CODE XREF: UnitClass__ProcessExitQueue+216↑j
sub     esp, 0Ch
xor     eax, eax
mov     ebx, esp
mov     edx, [ecx]
push    ebp
mov     [ebx], eax
mov     [ebx+4], eax
mov     [ebx+8], eax
lea     eax, [esp+78h+var_C]
push    eax
call    dword ptr [edx+0B0h]

loc_6B7498:                             ; CODE XREF: UnitClass__ProcessExitQueue+249↑j
mov     ecx, [eax]
mov     ebp, ds:8871E0h
mov     [esp+68h+var_3C], ecx
mov     ebx, [esp+68h+var_54]
mov     edx, [eax+4]
mov     [esp+68h+var_38], edx
mov     eax, [eax+8]
add     eax, 0Ah
mov     [esp+68h+var_34], eax
mov     eax, [esi+28h]
cmp     eax, [ebp+548h]
jnz     short loc_6B74DB
mov     ebp, dword_84009C
mov     eax, dword_8400A0
sub     ecx, ebp
sub     edx, eax
mov     [esp+68h+var_3C], ecx
mov     [esp+68h+var_38], edx

loc_6B74DB:                             ; CODE XREF: UnitClass__ProcessExitQueue+292↑j
lea     ecx, [esp+68h+var_50]
push    ecx
mov     ecx, [esi+24h]
add     ecx, 388h
call    ProgressTimer__GetValue
mov     eax, [eax]
mov     edx, [edi]
shr     eax, 7
inc     eax
lea     ecx, [esp+68h+var_3C]
shr     eax, 1
and     eax, 0FFh
push    eax
push    ecx
mov     ecx, edi
call    dword ptr [edx+0D8h]
mov     eax, ds:8871E0h
mov     edx, [esi+28h]
cmp     edx, [eax+548h]
jnz     short loc_6B757A
push    1C8h            ; Size
call    ??2_YAPAXI_Z
mov     ebp, eax
add     esp, 4
test    ebp, ebp
jz      short loc_6B757A
lea     ecx, [edi+9Ch]
mov     edx, [edi+9Ch]
mov     [esp+68h+var_30], edx
mov     eax, [ecx+4]
mov     [esp+68h+var_2C], eax
mov     ecx, [ecx+8]
mov     [esp+68h+var_28], ecx
mov     ecx, off_840098 ; void *
call    AnimTypeClass__FindIndex
mov     ecx, ds:8B4154h
push    0               ; char
push    0FFFFFFF6h      ; int
push    600h            ; int
push    1               ; int
lea     edx, [esp+78h+var_30]
push    2               ; int
push    edx             ; int
mov     edx, [ecx+eax*4]
mov     ecx, ebp        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_6B757A:                             ; CODE XREF: UnitClass__ProcessExitQueue+2E9↑j
; UnitClass__ProcessExitQueue+2FC↑j
mov     al, [esp+68h+var_55]
test    al, al
jz      short loc_6B758F
mov     eax, [esi+24h]
mov     dword ptr [eax+3B8h], 0

loc_6B758F:                             ; CODE XREF: UnitClass__ProcessExitQueue+350↑j
mov     ecx, [esi+3Ch]
mov     edx, [ecx+ebx*4]
cmp     dword ptr [edx+14h], 1
jnz     short loc_6B75CF
mov     eax, [esi+6Ch]
test    eax, eax
jz      short loc_6B75AC
mov     [esi+68h], eax
mov     dword ptr [esi+6Ch], 0

loc_6B75AC:                             ; CODE XREF: UnitClass__ProcessExitQueue+370↑j
mov     ecx, [esi+68h]
mov     eax, [edi]
push    1
push    ecx
mov     ecx, edi
call    dword ptr [eax+480h]
mov     edx, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [edx+1E8h]
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B75CF:                             ; CODE XREF: UnitClass__ProcessExitQueue+369↑j
mov     ecx, [esi+24h]
lea     eax, [esp+68h+var_4C]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ebp, [edi]
push    1
push    0
mov     ecx, eax
call    Cell__GetNeighbourContent
push    eax
mov     ecx, edi
call    dword ptr [ebp+480h]
mov     edx, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [edx+1E8h]
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B7613:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
mov     edx, [eax+10h]  ; jumptable 006B729B case 1
mov     eax, [eax+8]
cmp     eax, 0FFFFFFFFh
jz      short loc_6B762C
mov     ecx, dword_A8ED54+30h
sub     ecx, eax
cmp     ecx, edx
jge     short loc_6B7634
sub     edx, ecx

loc_6B762C:                             ; CODE XREF: UnitClass__ProcessExitQueue+3EC↑j
test    edx, edx
jnz     def_6B729B      ; jumptable 006B729B default case, case 5

loc_6B7634:                             ; CODE XREF: UnitClass__ProcessExitQueue+3F8↑j
push    edi
mov     ecx, esi
call    UnitClass__ClearTargetRef
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B7641:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
cmp     dword ptr [eax+14h], 1 ; jumptable 006B729B case 2
jz      def_6B729B      ; jumptable 006B729B default case, case 5
mov     eax, [esi+6Ch]
test    eax, eax
jz      short loc_6B765C
mov     [esi+68h], eax
mov     dword ptr [esi+6Ch], 0

loc_6B765C:                             ; CODE XREF: UnitClass__ProcessExitQueue+420↑j
mov     eax, [esi+68h]
test    eax, eax
jnz     short loc_6B769F

loc_6B7663:                             ; CODE XREF: UnitClass__ProcessExitQueue+4CC↓j
; UnitClass__ProcessExitQueue+4D7↓j
mov     ecx, [esi+24h]
mov     eax, [edi]
push    1
push    ecx
mov     ecx, edi
call    dword ptr [eax+480h]
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+3C8h]
mov     eax, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [eax+1E8h]
mov     ecx, [esi+3Ch]
mov     edx, [ecx+ebx*4]
mov     dword ptr [edx+4], 4
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B769F:                             ; CODE XREF: UnitClass__ProcessExitQueue+431↑j
mov     ecx, [esi+24h]
lea     edx, [esp+68h+var_48]
push    edx
mov     eax, [ecx]
call    dword ptr [eax+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ebp, [edi]
push    1
push    4
mov     ecx, eax
call    Cell__GetNeighbourContent
push    eax
mov     ecx, edi
call    dword ptr [ebp+480h]
mov     eax, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [eax+1E8h]
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B76E3:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
mov     eax, [esi+6Ch]  ; jumptable 006B729B case 3
test    eax, eax
jz      short loc_6B76F4
mov     [esi+68h], eax
mov     dword ptr [esi+6Ch], 0

loc_6B76F4:                             ; CODE XREF: UnitClass__ProcessExitQueue+4B8↑j
mov     eax, [edi+2FCh]
test    eax, eax
jz      loc_6B7663
mov     eax, [esi+68h]
test    eax, eax
jz      loc_6B7663
mov     ecx, [esi+3Ch]
push    eax
mov     edx, [ecx+ebx*4]
mov     ecx, [edx]
mov     edx, [ecx]
call    dword ptr [edx+3C8h]
mov     eax, [esi+3Ch]
push    0
push    1
mov     ecx, [eax+ebx*4]
mov     ecx, [ecx]
mov     edx, [ecx]
call    dword ptr [edx+1E8h]
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B7737:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
mov     eax, [esi+6Ch]  ; jumptable 006B729B case 4
test    eax, eax
jz      short loc_6B7748
mov     [esi+68h], eax
mov     dword ptr [esi+6Ch], 0

loc_6B7748:                             ; CODE XREF: UnitClass__ProcessExitQueue+50C↑j
mov     eax, [edi+2FCh]
test    eax, eax
jle     short loc_6B7793
mov     eax, [esi+68h]
test    eax, eax
jz      short loc_6B7793
mov     eax, [esi+3Ch]
mov     ecx, [eax+ebx*4]
mov     dword ptr [ecx+4], 3
mov     edx, [esi+3Ch]
mov     eax, [edx+ebx*4]
mov     ecx, [eax]
mov     eax, [esi+68h]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+3C8h]
mov     ecx, [esi+3Ch]
push    0
push    1
mov     edx, [ecx+ebx*4]
mov     ecx, [edx]
mov     eax, [ecx]
call    dword ptr [eax+1E8h]
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B7793:                             ; CODE XREF: UnitClass__ProcessExitQueue+520↑j
; UnitClass__ProcessExitQueue+527↑j
mov     ecx, [esi+24h]
lea     eax, [esp+68h+var_44]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+1B8h]
mov     edx, [edi]
mov     ebp, eax
lea     eax, [esp+68h+var_40]
mov     ecx, edi
push    eax
call    dword ptr [edx+1B8h]
mov     cx, [eax]
cmp     cx, [ebp+0]
jnz     short loc_6B7838
mov     dx, [eax+2]
cmp     dx, [ebp+2]
jnz     short loc_6B7838
lea     eax, [edi+9Ch]
mov     ecx, [edi+9Ch]
mov     [esp+68h+var_24], ecx
mov     ecx, [esi+24h]
mov     edx, [eax+4]
add     ecx, 9Ch
mov     [esp+68h+var_20], edx
mov     edx, [ecx]
mov     eax, [eax+8]
mov     [esp+68h+var_24], edx
mov     edx, [ecx+4]
mov     [esp+68h+var_20], edx
sub     eax, [ecx+8]
cmp     eax, 14h
jge     short loc_6B7838
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+0D4h]
mov     ecx, [esi+3Ch]
mov     edx, [ecx+ebx*4]
mov     dword ptr [edx+4], 6
mov     edx, [esi+3Ch]
mov     eax, dword_A8ED54+30h
mov     ecx, [esi+34h]
mov     edx, [edx+ebx*4]
add     edx, 8
mov     [edx], eax
mov     eax, [esp+68h+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B7838:                             ; CODE XREF: UnitClass__ProcessExitQueue+58B↑j
; UnitClass__ProcessExitQueue+595↑j ...
mov     eax, [esi+24h]
mov     edx, [edi]
push    1
push    eax
mov     ecx, edi
call    dword ptr [edx+480h]
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+3C8h]
mov     eax, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [eax+1E8h]
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B7867:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
mov     ebp, [eax+8]    ; jumptable 006B729B case 6
mov     edx, [eax+10h]
cmp     ebp, 0FFFFFFFFh
jz      short loc_6B7880
mov     ecx, dword_A8ED54+30h
sub     ecx, ebp
cmp     ecx, edx
jge     short loc_6B7888
sub     edx, ecx

loc_6B7880:                             ; CODE XREF: UnitClass__ProcessExitQueue+640↑j
test    edx, edx
jnz     def_6B729B      ; jumptable 006B729B default case, case 5

loc_6B7888:                             ; CODE XREF: UnitClass__ProcessExitQueue+64C↑j
mov     dword ptr [eax+4], 0
mov     eax, [edi+6C4h]
mov     ecx, [eax+684h]
mov     [edi+2FCh], ecx
mov     eax, [eax+0A0h]
mov     [edi+6Ch], eax
mov     [edi+70h], eax
jmp     def_6B729B      ; jumptable 006B729B default case, case 5
; ---------------------------------------------------------------------------

loc_6B78B2:                             ; CODE XREF: UnitClass__ProcessExitQueue+6B↑j
; DATA XREF: .text:jpt_6B729B↓o
mov     edx, [eax+10h]  ; jumptable 006B729B case 7
mov     eax, [eax+8]
cmp     eax, 0FFFFFFFFh
jz      short loc_6B78CB
mov     ecx, dword_A8ED54+30h
sub     ecx, eax
cmp     ecx, edx
jge     short loc_6B78D3
sub     edx, ecx

loc_6B78CB:                             ; CODE XREF: UnitClass__ProcessExitQueue+68B↑j
test    edx, edx
jnz     def_6B729B      ; jumptable 006B729B default case, case 5

loc_6B78D3:                             ; CODE XREF: UnitClass__ProcessExitQueue+697↑j
mov     ecx, [esi+24h]
mov     edx, [esi+28h]
mov     eax, [ecx]
mov     edi, [edx]
call    dword ptr [eax+3Ch]
mov     ecx, [esi+28h]
push    eax
call    dword ptr [edi+8Ch]
mov     ecx, [ebp+0]
mov     [ecx], eax
mov     ecx, ds:8871E0h
mov     eax, [esi+28h]
cmp     eax, [ecx+4E0h]
jz      short loc_6B791F
cmp     eax, [ecx+514h]
jz      short loc_6B791F
cmp     eax, [ecx+548h]
jz      short loc_6B791F
mov     edx, [esi+3Ch]
mov     eax, [edx+ebx*4]
mov     dword ptr [eax+14h], 0
jmp     short loc_6B792C
; ---------------------------------------------------------------------------

loc_6B791F:                             ; CODE XREF: UnitClass__ProcessExitQueue+6CE↑j
; UnitClass__ProcessExitQueue+6D6↑j ...
mov     ecx, [esi+3Ch]
mov     edx, [ecx+ebx*4]
mov     dword ptr [edx+14h], 1

loc_6B792C:                             ; CODE XREF: UnitClass__ProcessExitQueue+6ED↑j
mov     eax, [esi+3Ch]
mov     ecx, [eax+ebx*4]
mov     ecx, [ecx]
mov     edx, [ecx]
call    dword ptr [edx+0D4h]
mov     eax, [esi+3Ch]
mov     ecx, [eax+ebx*4]
mov     eax, [esi+24h]
mov     edx, [ecx]
mov     [edx+2D4h], eax
mov     ecx, [esi+3Ch]
mov     edx, [ecx+ebx*4]
mov     dword ptr [edx+4], 0

def_6B729B:                             ; CODE XREF: UnitClass__ProcessExitQueue+65↑j
; UnitClass__ProcessExitQueue+6B↑j ...
mov     eax, [esi+48h]  ; jumptable 006B729B default case, case 5
inc     ebx
cmp     ebx, eax
mov     [esp+68h+var_54], ebx
jl      loc_6B727F

loc_6B796A:                             ; CODE XREF: UnitClass__ProcessExitQueue+49↑j
mov     eax, [esi+70h]
xor     ecx, ecx
xor     bl, bl
sub     eax, ecx
jz      loc_6B7B29
dec     eax
jz      short loc_6B79BF
dec     eax
jnz     loc_6B7B63
mov     eax, [esi+48h]
mov     bl, 1
cmp     eax, ecx
jle     short loc_6B79B0
mov     ecx, [esi+3Ch]
mov     edx, eax

loc_6B7991:                             ; CODE XREF: UnitClass__ProcessExitQueue+776↓j
mov     eax, [ecx]
mov     eax, [eax+4]
cmp     eax, 3
jz      short loc_6B79A0
cmp     eax, 4
jnz     short loc_6B79A2

loc_6B79A0:                             ; CODE XREF: UnitClass__ProcessExitQueue+769↑j
xor     bl, bl

loc_6B79A2:                             ; CODE XREF: UnitClass__ProcessExitQueue+76E↑j
add     ecx, 4
dec     edx
jnz     short loc_6B7991
test    bl, bl
jz      loc_6B7B63

loc_6B79B0:                             ; CODE XREF: UnitClass__ProcessExitQueue+75A↑j
mov     dword ptr [esi+70h], 0
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 58h
retn
; ---------------------------------------------------------------------------

loc_6B79BF:                             ; CODE XREF: UnitClass__ProcessExitQueue+74A↑j
cmp     [esi+68h], ecx
jnz     short loc_6B79D3
mov     ecx, esi
call    UnitClass__ProcessIdleOrders
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 58h
retn
; ---------------------------------------------------------------------------

loc_6B79D3:                             ; CODE XREF: UnitClass__ProcessExitQueue+792↑j
mov     ebp, [esi+48h]
cmp     ebp, ecx
jle     short loc_6B79F8
mov     edx, [esi+3Ch]

loc_6B79DD:                             ; CODE XREF: UnitClass__ProcessExitQueue+7C6↓j
mov     eax, [edx]
mov     eax, [eax+4]
cmp     eax, 2
jz      short loc_6B79F0
cmp     eax, 7
jnz     loc_6B7B63

loc_6B79F0:                             ; CODE XREF: UnitClass__ProcessExitQueue+7B5↑j
inc     ecx
add     edx, 4
cmp     ecx, ebp
jl      short loc_6B79DD

loc_6B79F8:                             ; CODE XREF: UnitClass__ProcessExitQueue+7A8↑j
xor     edi, edi
test    ebp, ebp
jle     loc_6B7B1A
mov     ebp, [esp+68h+var_8]

loc_6B7A06:                             ; CODE XREF: UnitClass__ProcessExitQueue+8D9↓j
mov     ecx, [esi+3Ch]
mov     eax, [ecx+edi*4]
cmp     dword ptr [eax+4], 2
jnz     loc_6B7B03
mov     ecx, [eax]
mov     edx, [ecx+6C4h]
cmp     byte ptr [edx+0D68h], 0
jz      loc_6B7AD4
mov     eax, [esi+68h]
mov     bl, 1
push    eax
push    ecx
mov     ecx, (offset dword_A8ED54+2D8A4h)
call    UnitClass__GetExitCell
mov     eax, dword_A8ED54+30h
mov     ecx, 2
mov     dword_A8ED54+2D8A4h, eax
mov     dword_A8ED54+2D8A8h, ebp
mov     dword_A8ED54+2D8ACh, ecx
mov     ecx, [esi+3Ch]
mov     eax, [ecx+edi*4]
mov     ecx, 1
cmp     [eax+14h], ecx
jnz     short loc_6B7AC8
mov     [eax+4], ecx
mov     eax, ds:8871E0h
mov     edx, [esi+28h]
mov     ecx, [eax+4E0h]
cmp     edx, ecx
mov     edx, dword_A8ED54+30h
jnz     short loc_6B7AA5
mov     ecx, [eax+4B4h]
add     ecx, [eax+4B0h]
mov     eax, [esi+3Ch]
mov     eax, [eax+edi*4]
add     eax, 8
mov     [eax], edx
mov     edx, [esp+68h+var_8]
mov     [eax+4], edx
mov     [eax+8], ecx
jmp     short loc_6B7B03
; ---------------------------------------------------------------------------

loc_6B7AA5:                             ; CODE XREF: UnitClass__ProcessExitQueue+850↑j
mov     ecx, [eax+4E8h]
add     ecx, [eax+4E4h]
mov     eax, [esi+3Ch]
mov     eax, [eax+edi*4]
add     eax, 8
mov     [eax], edx
mov     edx, [esp+68h+var_8]
mov     [eax+4], edx
mov     [eax+8], ecx
jmp     short loc_6B7B03
; ---------------------------------------------------------------------------

loc_6B7AC8:                             ; CODE XREF: UnitClass__ProcessExitQueue+835↑j
mov     eax, [eax]
mov     ecx, esi
push    eax
call    UnitClass__ClearTargetRef
jmp     short loc_6B7B03
; ---------------------------------------------------------------------------

loc_6B7AD4:                             ; CODE XREF: UnitClass__ProcessExitQueue+7F5↑j
mov     dword ptr [eax+4], 3
mov     ecx, [esi+3Ch]
mov     edx, [ecx+edi*4]
mov     ecx, [edx]
mov     edx, [esi+68h]
push    edx
mov     eax, [ecx]
call    dword ptr [eax+3C8h]
mov     eax, [esi+3Ch]
push    0
push    1
mov     ecx, [eax+edi*4]
mov     ecx, [ecx]
mov     edx, [ecx]
call    dword ptr [edx+1E8h]

loc_6B7B03:                             ; CODE XREF: UnitClass__ProcessExitQueue+7E0↑j
; UnitClass__ProcessExitQueue+873↑j ...
mov     eax, [esi+48h]
inc     edi
cmp     edi, eax
jl      loc_6B7A06
test    bl, bl
jz      short loc_6B7B1A
mov     ecx, esi
call    UnitClass__ProcessIdleOrders

loc_6B7B1A:                             ; CODE XREF: UnitClass__ProcessExitQueue+7CC↑j
; UnitClass__ProcessExitQueue+8E1↑j
mov     dword ptr [esi+70h], 2
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 58h
retn
; ---------------------------------------------------------------------------

loc_6B7B29:                             ; CODE XREF: UnitClass__ProcessExitQueue+743↑j
mov     eax, [esi+6Ch]
cmp     eax, ecx
jz      short loc_6B7B36
mov     [esi+68h], eax
mov     [esi+6Ch], ecx

loc_6B7B36:                             ; CODE XREF: UnitClass__ProcessExitQueue+8FE↑j
mov     eax, [esi+68h]
cmp     eax, ecx
jz      short loc_6B7B63
mov     ecx, [esi+24h]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+3ACh]
test    al, al
jnz     short loc_6B7B5C
mov     ecx, esi
call    UnitClass__ProcessIdleOrders
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 58h
retn
; ---------------------------------------------------------------------------

loc_6B7B5C:                             ; CODE XREF: UnitClass__ProcessExitQueue+91B↑j
mov     dword ptr [esi+70h], 1

loc_6B7B63:                             ; CODE XREF: UnitClass__ProcessExitQueue+26↑j
; UnitClass__ProcessExitQueue+74D↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 58h
retn
*/
}

// IDA: 0x6B6080 (CreateUnloadPlacementCraters, 167B)
// 0x6b6080
int UnitClass::CreateUnloadPlacementCraters(CellStruct* cell)
{
// [IDA decompile]
int __thiscall sub_6B6080(int this, _WORD *a2)
{
  int result; // eax
  int i; // ebx
  _DWORD *v6; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h] BYREF
  int v9; // [esp+10h] [ebp+4h]

  v7 = 0;
  result = *(_DWORD *)(this + 668);
  if ( result > 0 )
  {
    do
    {
      for ( i = 0; i < *(_DWORD *)(this + 664); ++i )
      {
        LOWORD(v9) = i + *a2;
        HIWORD(v9) = v7 + a2[1];
        v8 = v9;
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8);
        v6[18] = *(_DWORD *)(this + 660);
        *((_BYTE *)v6 + 287) = i + *(_BYTE *)(this + 664) * v7;
        BuildingClass::CreatePlacementCrater(v6);
      }
      result = ++v7;
    }
    while ( v7 < *(_DWORD *)(this + 668) );
  }
  return result;
}

/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
mov     [esp+0Ch+var_8], 0
mov     eax, [esi+29Ch]
test    eax, eax
jle     loc_6B6120
push    ebx
push    edi
mov     edi, [esp+14h+arg_0]

loc_6B60A2:                             ; CODE XREF: UnitClass__CreateUnloadPlacementCraters+9C↓j
mov     eax, [esi+298h]
xor     ebx, ebx
test    eax, eax
jle     short loc_6B610B

loc_6B60AE:                             ; CODE XREF: UnitClass__CreateUnloadPlacementCraters+89↓j
mov     ax, [edi]
mov     cx, [edi+2]
add     cx, word ptr [esp+14h+var_8]
add     ax, bx
mov     word ptr [esp+14h+arg_0], ax
lea     eax, [esp+14h+var_4]
mov     word ptr [esp+14h+arg_0+2], cx
mov     edx, [esp+14h+arg_0]
push    eax
mov     ecx, 87F7E8h
mov     [esp+18h+var_4], edx
call    CellCoord__To_CellObj
mov     edx, [esi+294h]
mov     ecx, eax
mov     al, byte ptr [esp+14h+var_8]
mov     [ecx+48h], edx
imul    byte ptr [esi+298h]
add     al, bl
mov     [ecx+11Fh], al
call    BuildingClass__CreatePlacementCrater
mov     eax, [esi+298h]
inc     ebx
cmp     ebx, eax
jl      short loc_6B60AE

loc_6B610B:                             ; CODE XREF: UnitClass__CreateUnloadPlacementCraters+2C↑j
mov     eax, [esp+14h+var_8]
mov     ecx, [esi+29Ch]
inc     eax
cmp     eax, ecx
mov     [esp+14h+var_8], eax
jl      short loc_6B60A2
pop     edi
pop     ebx

loc_6B6120:                             ; CODE XREF: UnitClass__CreateUnloadPlacementCraters+16↑j
pop     esi
add     esp, 8
retn    4
*/
}

// IDA: 0x54E3B0 (GetExitCell, 288B)
// 0x54e3b0
int UnitClass::GetExitCell()
{
// [IDA decompile]
int __thiscall UnitClass::GetExitCell(int this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // ebx
  bool v9; // zf
  unsigned int v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2;
  if ( !*(_BYTE *)(a2[433] + 3432) )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 988))(a2, 0);
  v6 = (_DWORD *)__2_YAPAXI_Z(8);
  v7 = a3;
  v8 = v6;
  v9 = a3 == 0;
  *v6 = v3;
  if ( v9 )
  {
    v10 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)v3 + 452, &a2) >> 12) + 1) >> 1) & 7;
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 444))(v3);
    v8[1] = Cell::GetNeighbourContent(v11, v10);
  }
  else
  {
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v15);
    LOWORD(a2) = *v12 / 256;
    HIWORD(a2) = v12[1] / 256;
    a3 = a2;
    v8[1] = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a3);
  }
  *((_BYTE *)v3 + 1738) = 1;
  v3[191] = 1;
  result = *(_DWORD *)(this + 20);
  if ( *(_DWORD *)(this + 28) < result
    || (*(_BYTE *)(this + 25) || !result)
    && (v13 = *(_DWORD *)(this + 32), v13 > 0)
    && (result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 12) + 8))(this + 12, result + v13, 0),
        (_BYTE)result) )
  {
    result = *(_DWORD *)(this + 28);
    v14 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 28) = result + 1;
    *(_DWORD *)(v14 + 4 * result) = v8;
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    ebp
push    esi
mov     esi, [esp+18h+arg_0]
mov     ebp, ecx
mov     eax, [esi+6C4h]
mov     cl, [eax+0D68h]
test    cl, cl
jnz     short loc_54E3E1
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3DCh]
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_54E3E1:                             ; CODE XREF: UnitClass__GetExitCell+1A↑j
push    8               ; Size
call    ??2_YAPAXI_Z
mov     ecx, [esp+1Ch+arg_4]
mov     ebx, eax
add     esp, 4
test    ecx, ecx
mov     [ebx], esi
jnz     short loc_54E42B
lea     eax, [esp+18h+arg_0]
push    edi
push    eax
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue
mov     edi, [eax]
mov     edx, [esi]
shr     edi, 0Ch
inc     edi
mov     ecx, esi
shr     edi, 1
and     edi, 7
call    dword ptr [edx+1BCh]
push    edi
mov     ecx, eax
call    Cell__GetNeighbourContent
mov     [ebx+4], eax
pop     edi
jmp     short loc_54E478
; ---------------------------------------------------------------------------

loc_54E42B:                             ; CODE XREF: UnitClass__GetExitCell+45↑j
mov     eax, [ecx]
lea     edx, [esp+18h+var_C]
push    edx
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+18h+arg_0], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+18h+arg_4]
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+1Ch+arg_0+2], ax
mov     eax, [esp+1Ch+arg_0]
mov     ecx, 87F7E8h
mov     [esp+1Ch+arg_4], eax
call    CellCoord__To_CellObj
mov     [ebx+4], eax

loc_54E478:                             ; CODE XREF: UnitClass__GetExitCell+79↑j
mov     eax, 1
mov     [esi+6CAh], al
mov     [esi+2FCh], eax
mov     eax, [ebp+14h]
mov     ecx, [ebp+1Ch]
lea     esi, [ebp+0Ch]
cmp     ecx, eax
jl      short loc_54E4B8
mov     cl, [esi+0Dh]
test    cl, cl
jnz     short loc_54E4A1
test    eax, eax
jnz     short loc_54E4C7

loc_54E4A1:                             ; CODE XREF: UnitClass__GetExitCell+EB↑j
mov     ecx, [esi+14h]
test    ecx, ecx
jle     short loc_54E4C7
mov     edx, [esi]
add     ecx, eax
push    0
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_54E4C7

loc_54E4B8:                             ; CODE XREF: UnitClass__GetExitCell+E4↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], ebx

loc_54E4C7:                             ; CODE XREF: UnitClass__GetExitCell+EF↑j
; UnitClass__GetExitCell+F6↑j ...
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn    8
*/
}

// ============================================================
// Phase 3: Deploy
// ============================================================

// IDA: 0x7192F0 (Deploy, 2302B)
// 0x7192f0
int UnitClass::Deploy()
{
// [IDA decompile]
char __stdcall UnitClass::Deploy(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  _DWORD *v6; // ecx
  _DWORD *v7; // ebp
  int i; // edi
  int v9; // ecx
  void **v10; // eax
  int *v11; // ecx
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  double v17; // st7
  int *v18; // edi
  int v19; // edx
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  int *v25; // eax
  _DWORD *v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int *v30; // edi
  int v31; // eax
  int *v32; // edi
  _DWORD *v33; // ebx
  int *v34; // edi
  int v35; // eax
  int *v36; // edi
  void **v37; // eax
  int *v38; // ecx
  void **v39; // eax
  int *v40; // edx
  int *v41; // edi
  int v42; // eax
  int *v43; // edi
  char PlacementPosition; // al
  int v45; // edi
  int *v46; // ebp
  int *v47; // edi
  int v48; // eax
  int *v49; // edi
  __int16 *v50; // eax
  _BYTE *v51; // ecx
  int v52; // ecx
  void **v53; // eax
  int *v54; // ecx
  _DWORD *v55; // [esp+28h] [ebp-20h] BYREF
  int v56; // [esp+2Ch] [ebp-1Ch] BYREF
  int v57; // [esp+30h] [ebp-18h]
  int v58; // [esp+34h] [ebp-14h]
  char v59[4]; // [esp+38h] [ebp-10h] BYREF
  int v60; // [esp+3Ch] [ebp-Ch]
  int v61; // [esp+44h] [ebp-4h]

  v1 = a1;
  v2 = a1[2];
  v61 = 0;
  if ( *(_BYTE *)(v2 + 625) && !a1[13] && !*(_DWORD *)(v2 + 640) )
    goto LABEL_82;
  v3 = a1[13];
  if ( !v3 )
  {
    v4 = *(_DWORD *)(v2 + 640);
    if ( v4 )
    {
      a1[13] = v4;
      return 0;
    }
  }
  if ( *(_BYTE *)(v2 + 636) )
  {
    if ( !v3 )
    {
      *(_BYTE *)(v2 + 624) = 1;
      v1[14] = dword_A8ED54[12];
      v1[15] = v60;
      v1[16] = 60;
      ++v1[13];
      return 0;
    }
  }
  else if ( v3 <= 0 )
  {
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) )
    {
      v6 = (_DWORD *)v1[2];
      v7 = v1 + 9;
      if ( v6[39] == v1[9] && v6[40] == v1[10] && v6[41] == v1[11]
        || *v7 == dword_A8ED54[130985] && v1[10] == dword_A8ED54[130986] && v1[11] == dword_A8ED54[130987] )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v6 + 1152))(v6, 0, 1);
        (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1);
        return 0;
      }
      else
      {
        AbstractClass::ClearTargetToMeClearManagerTarget((int)v6);
        for ( i = dword_A8ED50 - 1; i >= 0; --i )
        {
          v9 = *((_DWORD *)unk_A8ED44 + i);
          if ( *(_DWORD *)(v9 + 268) == v1[2] )
            BulletClass::LoseTarget((_DWORD **)v9);
        }
        v10 = (void **)__2_YAPAXI_Z(456);
        if ( v10 )
        {
          v11 = (int *)(v1[2] + 156);
          v56 = *v11;
          v57 = v11[1];
          v58 = v11[2];
          AnimClass::ctor(v10, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0);
        }
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)v1[2] + 72))(v1[2], v59);
        v13 = v1[11];
        v14 = *v12 - *v7;
        v15 = v12[1];
        v16 = v12[2];
        v56 = v14;
        v57 = v15 - v1[10];
        v58 = v16 - v13;
        v17 = Math::Sqrt((double)v14 * (double)v14 + (double)(v16 - v13) * (double)(v16 - v13) + (double)v57
                                                                                               * (double)v57);
        v18 = v1 + 14;
        v19 = Math::RoundToInt(v17);
        a1 = (_DWORD *)v19;
        v1[14] = dword_A8ED54[12];
        v1[15] = v60;
        v1[16] = 0;
        v20 = MEMORY[0x87F7E8][7806];
        if ( *(_BYTE *)(MEMORY[0x87F7E8][7806] + 3064) )
        {
          v21 = v19 / *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3060);
          *v18 = dword_A8ED54[12];
          v1[15] = v60;
          v1[16] = v21;
          v20 = MEMORY[0x87F7E8][7806];
        }
        v22 = *v18;
        v23 = v1[16];
        if ( *v18 != -1 )
        {
          if ( dword_A8ED54[12] - v22 >= v23 )
            v23 = 0;
          else
            v23 -= dword_A8ED54[12] - v22;
        }
        v24 = *(_DWORD *)(v20 + 3068);
        if ( v23 <= v24 )
        {
          v58 = v24;
          v56 = dword_A8ED54[12];
          v25 = &v56;
        }
        else
        {
          v25 = v1 + 14;
        }
        *v18 = *v25;
        v1[15] = v25[1];
        v26 = a1;
        v1[16] = v25[2];
        if ( (int)v26 < *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3072) )
        {
          v27 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3068);
          *v18 = dword_A8ED54[12];
          v1[15] = v60;
          v1[16] = v27;
        }
        *(_BYTE *)(v1[2] + 625) = 1;
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1[2] + 44))(v1[2]) == 1
          && *(_BYTE *)(*(_DWORD *)(v1[2] + 1732) + 3598) )
        {
          v28 = v60;
          *v18 = dword_A8ED54[12];
          v1[15] = v28;
          v1[16] = 0;
          *(_BYTE *)(v1[2] + 625) = 0;
        }
        v29 = *(_DWORD *)(v1[2] + 1684);
        if ( v29 )
          BuildingClass::Deploy(*(_DWORD *)(v29 + 1692), (int)v7, (int)v18);
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 292))(v1[2], 0);
        v30 = (int *)v1[2];
        v31 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v30 + 132))(v30) + 1400);
        if ( v31 != -1 || (v31 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 540), v31 != -1) )
        {
          v32 = v30 + 39;
          v56 = *v32;
          v57 = v32[1];
          v58 = v32[2];
          StartAudioControllerAt(v31, (int)&v56, 0);
        }
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9);
        LOWORD(a1) = *v7 / 256;
        HIWORD(a1) = v1[10] / 256;
        v55 = a1;
        v33 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v55);
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9);
        *(_BYTE *)(v1[2] + 140) = (v33[80] & 0x100) != 0;
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1);
        v34 = (int *)v1[2];
        v35 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v34 + 132))(v34) + 1396);
        if ( v35 != -1 || (v35 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 536), v35 != -1) )
        {
          v36 = v34 + 39;
          v56 = *v36;
          v57 = v36[1];
          v58 = v36[2];
          StartAudioControllerAt(v35, (int)&v56, 0);
        }
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 396))(v1[2], 2);
        (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1);
        CrateClass::ProcessPickup(v33, (int *)v1[2]);
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1);
        v37 = (void **)__2_YAPAXI_Z(456);
        if ( v37 )
        {
          v38 = (int *)(v1[2] + 156);
          v56 = *v38;
          v57 = v38[1];
          v58 = v38[2];
          AnimClass::ctor(v37, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0);
        }
        *(_DWORD *)(v1[2] + 640) = 0;
        return 0;
      }
    }
    return 0;
  }
  switch ( v3 )
  {
    case 1:
LABEL_82:
      (*(void (__stdcall **)(_DWORD *))(*(a1 - 1) + 40))(a1 - 1);
      return 0;
    case 2:
      v39 = (void **)__2_YAPAXI_Z(456);
      if ( v39 )
      {
        v40 = (int *)(v1[2] + 156);
        v56 = *v40;
        v57 = v40[1];
        v58 = v40[2];
        AnimClass::ctor(v39, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0);
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 292))(v1[2], 0);
      v41 = (int *)v1[2];
      v42 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v41 + 132))(v41) + 1400);
      if ( v42 != -1 || (v42 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 540), v42 != -1) )
      {
        v43 = v41 + 39;
        v56 = *v43;
        v57 = v43[1];
        v58 = v43[2];
        StartAudioControllerAt(v42, (int)&v56, 0);
      }
      *(_BYTE *)(v1[2] + 625) = 1;
      *(_BYTE *)(v1[2] + 636) = 0;
      *(_BYTE *)(v1[2] + 624) = 0;
      *(_BYTE *)(v1[2] + 140) = 0;
      PlacementPosition = ObjectClass::FindPlacementPosition(
                            v1 - 1,
                            *(_DWORD *)(v1[2] + 648),
                            *(_DWORD *)(v1[2] + 652),
                            *(_DWORD *)(v1[2] + 656),
                            0);
      v45 = v1[13] + 1;
      v1[13] = v45;
      if ( PlacementPosition )
      {
        v1[13] = v45 + 1;
        return 0;
      }
      return 0;
    case 3:
      if ( ObjectClass::FindPlacementPosition(
             a1 - 1,
             *(_DWORD *)(v2 + 648),
             *(_DWORD *)(v2 + 652),
             *(_DWORD *)(v2 + 656),
             0) )
      {
        ++v1[13];
      }
      *(_DWORD *)(v1[2] + 644) = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3052);
      return 0;
    case 4:
      ObjectClass::FindPlacementPosition(a1 - 1, *(_DWORD *)(v2 + 648), *(_DWORD *)(v2 + 652), *(_DWORD *)(v2 + 656), 1);
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9);
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1);
      ++v1[13];
      return 0;
  }
  if ( v3 != 5 )
  {
    if ( v3 != 6 )
    {
      if ( v3 == 7 )
      {
        *(_BYTE *)(v2 + 625) = 0;
        TechnoClass::SetFocus((_DWORD *)v1[2], 0);
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1);
        *((_BYTE *)v1 + 48) = 0;
        *(_DWORD *)(v1[2] + 640) = 0;
        v1[13] = 0;
      }
      return 0;
    }
    goto LABEL_82;
  }
  v46 = a1 + 9;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 436))(v2, a1 + 9);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1);
  v47 = (int *)v1[2];
  v48 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v47 + 132))(v47) + 1396);
  if ( v48 != -1 || (v48 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 536), v48 != -1) )
  {
    v49 = v47 + 39;
    v56 = *v49;
    v57 = v49[1];
    v58 = v49[2];
    StartAudioControllerAt(v48, (int)&v56, 0);
  }
  v50 = (__int16 *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)v1[2] + 440))(v1[2], &a1);
  if ( !LayerClass::IsWithinUsableArea(MEMORY[0x87F7E8], v50, 1) )
    *(_BYTE *)(v1[2] + 981) = 0;
  if ( !*(_DWORD *)(v1[2] + 640) )
    ProcessUnitDeploymentAtCell((int **)v1 - 1, *v46, v1[10], v1[11]);
  v51 = (_BYTE *)v1[2];
  if ( !v51[144] )
    return 0;
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v51 + 396))(v51, 2);
  (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1);
  *(_DWORD *)(v1[2] + 1064) = 0;
  *(_DWORD *)(v1[2] + 1068) = 0;
  TechnoClass::SetFocus((_DWORD *)v1[2], 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1);
  v52 = *(_DWORD *)(v1[2] + 644);
  v1[14] = dword_A8ED54[12];
  v1[15] = v60;
  v1[16] = v52;
  v53 = (void **)__2_YAPAXI_Z(456);
  if ( v53 )
  {
    v54 = (int *)(v1[2] + 156);
    v56 = *v54;
    v57 = v54[1];
    v58 = v54[2];
    AnimClass::ctor(v53, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0);
  }
  ++v1[13];
  return 0;
}

/* ASM:
sub     esp, 20h
push    ebx
push    ebp
push    esi
mov     esi, [esp+2Ch+arg_0]
xor     ebx, ebx
push    edi
mov     ecx, [esi+8]
mov     [esp+30h+var_4], ebx
mov     al, [ecx+271h]
test    al, al
jz      short loc_719331
cmp     [esi+34h], ebx
jnz     short loc_719331
cmp     [ecx+280h], ebx
jnz     short loc_719331
mov     ecx, [esi-4]
lea     eax, [esi-4]
push    eax
call    dword ptr [ecx+28h]
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719331:                             ; CODE XREF: UnitClass__Deploy+1C↑j
; UnitClass__Deploy+21↑j ...
mov     eax, [esi+34h]
cmp     eax, ebx
jnz     short loc_719351
mov     edx, [ecx+280h]
cmp     edx, ebx
jz      short loc_719351
mov     [esi+34h], edx
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719351:                             ; CODE XREF: UnitClass__Deploy+46↑j
; UnitClass__Deploy+50↑j
mov     dl, [ecx+27Ch]
test    dl, dl
jnz     loc_7197CC
cmp     eax, ebx
jg      loc_719803
mov     edx, [esi]
push    esi
call    dword ptr [edx+10h]
test    al, al
jz      loc_719BE2
mov     ecx, [esi+8]
lea     ebp, [esi+24h]
lea     eax, [ecx+9Ch]
mov     edi, eax
mov     eax, [edi]
cmp     eax, [ebp+0]
mov     edx, [edi+4]
mov     edi, [edi+8]
jnz     short loc_71939E
cmp     edx, [ebp+4]
jnz     short loc_71939E
cmp     edi, [ebp+8]
jz      loc_7197AF

loc_71939E:                             ; CODE XREF: UnitClass__Deploy+9E↑j
; UnitClass__Deploy+A3↑j
mov     edx, [ebp+0]
mov     eax, dword_A8ED54+7FEA4h
cmp     edx, eax
jnz     short loc_7193C7
mov     eax, [ebp+4]
mov     edx, dword_A8ED54+7FEA8h
cmp     eax, edx
jnz     short loc_7193C7
mov     edx, [ebp+8]
mov     eax, dword_A8ED54+7FEACh
cmp     edx, eax
jz      loc_7197AF

loc_7193C7:                             ; CODE XREF: UnitClass__Deploy+B8↑j
; UnitClass__Deploy+C5↑j
call    AbstractClass__ClearTargetToMeClearManagerTarget
mov     eax, dword_A8ED50
lea     edi, [eax-1]
cmp     edi, ebx
jl      short loc_7193F6

loc_7193D8:                             ; CODE XREF: UnitClass__Deploy+104↓j
mov     ecx, dword ptr unk_A8ED44
mov     eax, [esi+8]
mov     ecx, [ecx+edi*4]
mov     edx, [ecx+10Ch]
cmp     edx, eax
jnz     short loc_7193F3
call    BulletClass__LoseTarget

loc_7193F3:                             ; CODE XREF: UnitClass__Deploy+FC↑j
dec     edi
jns     short loc_7193D8

loc_7193F6:                             ; CODE XREF: UnitClass__Deploy+E6↑j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebx
jz      short loc_719447
mov     ecx, [esi+8]
push    ebx             ; char
add     ecx, 9Ch
push    ebx             ; int
push    600h            ; int
push    1               ; int
mov     edx, [ecx]
push    ebx             ; int
mov     [esp+44h+var_1C], edx
mov     edx, [ecx+4]
mov     [esp+44h+var_18], edx
lea     edx, [esp+44h+var_1C]
mov     ecx, [ecx+8]
push    edx             ; int
mov     [esp+48h+var_14], ecx
mov     ecx, ds:8871E0h
mov     edx, [ecx+33Ch]
mov     ecx, eax        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_719447:                             ; CODE XREF: UnitClass__Deploy+115↑j
mov     ecx, [esi+8]
lea     edx, [esp+30h+var_10]
push    edx
mov     eax, [ecx]
call    dword ptr [eax+48h]
mov     ecx, [eax]
mov     edx, [ebp+0]
mov     edi, [ebp+8]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+30h+var_1C], ecx
mov     ecx, [ebp+4]
sub     edx, ecx
sub     eax, edi
mov     [esp+30h+var_18], edx
mov     [esp+30h+var_14], eax
fild    [esp+30h+var_18]
fild    [esp+30h+var_14]
fild    [esp+30h+var_1C]
sub     esp, 8
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+38h+var_38] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
lea     edi, [esi+38h]
mov     edx, eax
mov     eax, dword_A8ED54+30h
mov     ebx, edi
xor     ecx, ecx
mov     [esp+30h+arg_0], edx
mov     [ebx], eax
mov     eax, [esp+30h+var_C]
mov     [ebx+4], eax
mov     [ebx+8], ecx
mov     ebx, ds:8871E0h
mov     al, [ebx+0BF8h]
test    al, al
jz      short loc_7194FD
mov     eax, edx
mov     ecx, dword_A8ED54+30h
cdq
idiv    dword ptr [ebx+0BF4h]
mov     edx, edi
mov     [edx], ecx
mov     ecx, [esp+30h+var_C]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     ebx, ds:8871E0h

loc_7194FD:                             ; CODE XREF: UnitClass__Deploy+1E8↑j
mov     edx, [edi]
mov     eax, [edi+8]
cmp     edx, 0FFFFFFFFh
jz      short loc_719519
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_719517
sub     eax, ecx
jmp     short loc_719519
; ---------------------------------------------------------------------------

loc_719517:                             ; CODE XREF: UnitClass__Deploy+221↑j
xor     eax, eax

loc_719519:                             ; CODE XREF: UnitClass__Deploy+215↑j
; UnitClass__Deploy+225↑j
mov     ebx, [ebx+0BFCh]
cmp     eax, ebx
jle     short loc_719527
mov     eax, edi
jmp     short loc_719539
; ---------------------------------------------------------------------------

loc_719527:                             ; CODE XREF: UnitClass__Deploy+231↑j
mov     edx, dword_A8ED54+30h
mov     [esp+30h+var_14], ebx
mov     [esp+30h+var_1C], edx
lea     eax, [esp+30h+var_1C]

loc_719539:                             ; CODE XREF: UnitClass__Deploy+235↑j
mov     edx, [eax]
mov     ecx, edi
mov     [ecx], edx
mov     edx, [eax+4]
mov     [ecx+4], edx
mov     eax, [eax+8]
mov     edx, [esp+30h+arg_0]
mov     [ecx+8], eax
mov     ecx, ds:8871E0h
cmp     edx, [ecx+0C00h]
jge     short loc_719576
mov     eax, dword_A8ED54+30h
mov     ecx, [ecx+0BFCh]
mov     edx, edi
mov     [edx], eax
mov     eax, [esp+30h+var_C]
mov     [edx+4], eax
mov     [edx+8], ecx

loc_719576:                             ; CODE XREF: UnitClass__Deploy+26B↑j
mov     ecx, [esi+8]
mov     byte ptr [ecx+271h], 1
mov     ecx, [esi+8]
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_7195BC
mov     eax, [esi+8]
mov     ecx, [eax+6C4h]
mov     al, [ecx+0E0Eh]
test    al, al
jz      short loc_7195BC
mov     eax, dword_A8ED54+30h
mov     edx, [esp+30h+var_C]
xor     ecx, ecx
mov     [edi], eax
mov     [edi+4], edx
mov     [edi+8], ecx
mov     eax, [esi+8]
mov     [eax+271h], cl

loc_7195BC:                             ; CODE XREF: UnitClass__Deploy+29B↑j
; UnitClass__Deploy+2AE↑j
mov     ecx, [esi+8]
mov     eax, [ecx+694h]
test    eax, eax
jz      short loc_7195D4
mov     ecx, [eax+69Ch]
call    BuildingClass__Deploy

loc_7195D4:                             ; CODE XREF: UnitClass__Deploy+2D7↑j
mov     ecx, [esi+8]
push    0
mov     edx, [ecx]
call    dword ptr [edx+124h]
mov     edi, [esi+8]
mov     ecx, edi
mov     eax, [edi]
call    dword ptr [eax+84h]
mov     eax, [eax+578h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_71960A
mov     ecx, ds:8871E0h
mov     eax, [ecx+21Ch]
cmp     eax, 0FFFFFFFFh
jz      short loc_719631

loc_71960A:                             ; CODE XREF: UnitClass__Deploy+307↑j
add     edi, 9Ch
push    0
mov     edx, [edi]
mov     [esp+34h+var_1C], edx
mov     ecx, [edi+4]
mov     [esp+34h+var_18], ecx
mov     ecx, eax
mov     edx, [edi+8]
mov     [esp+34h+var_14], edx
lea     edx, [esp+34h+var_1C]
call    StartAudioControllerAt

loc_719631:                             ; CODE XREF: UnitClass__Deploy+318↑j
mov     ecx, [esi+8]
push    ebp
mov     eax, [ecx]
call    dword ptr [eax+1B4h]
mov     eax, [ebp+0]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+30h+arg_0], ax
mov     eax, [ebp+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+30h+var_20]
sar     eax, 8
mov     word ptr [esp+30h+arg_0+2], ax
mov     ecx, [esp+30h+arg_0]
mov     [esp+30h+var_20], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, [esi+8]
mov     ebx, eax
push    ebp
mov     eax, [ecx]
call    dword ptr [eax+1B4h]
mov     eax, [ebx+140h]
test    ah, 1
jz      short loc_7196A1
mov     ecx, [esi+8]
mov     byte ptr [ecx+8Ch], 1
jmp     short loc_7196AB
; ---------------------------------------------------------------------------

loc_7196A1:                             ; CODE XREF: UnitClass__Deploy+3A3↑j
mov     edx, [esi+8]
mov     byte ptr [edx+8Ch], 0

loc_7196AB:                             ; CODE XREF: UnitClass__Deploy+3AF↑j
mov     ecx, [esi+8]
push    0
mov     eax, [ecx]
call    dword ptr [eax+1CCh]
mov     ecx, [esi+8]
push    1
mov     edx, [ecx]
call    dword ptr [edx+124h]
mov     edi, [esi+8]
mov     ecx, edi
mov     eax, [edi]
call    dword ptr [eax+84h]
mov     eax, [eax+574h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_7196EE
mov     ecx, ds:8871E0h
mov     eax, [ecx+218h]
cmp     eax, 0FFFFFFFFh
jz      short loc_719715

loc_7196EE:                             ; CODE XREF: UnitClass__Deploy+3EB↑j
add     edi, 9Ch
push    0
mov     edx, [edi]
mov     [esp+34h+var_1C], edx
mov     ecx, [edi+4]
mov     [esp+34h+var_18], ecx
mov     ecx, eax
mov     edx, [edi+8]
mov     [esp+34h+var_14], edx
lea     edx, [esp+34h+var_1C]
call    StartAudioControllerAt

loc_719715:                             ; CODE XREF: UnitClass__Deploy+3FC↑j
mov     ecx, [esi+8]
push    2
mov     eax, [ecx]
call    dword ptr [eax+18Ch]
mov     ecx, [esi]
push    esi
call    dword ptr [ecx+48h]
mov     edx, [esi+8]
mov     ecx, ebx
push    edx
call    CrateClass__ProcessPickup
mov     ecx, [esi+8]
push    1
push    0
mov     eax, [ecx]
call    dword ptr [eax+480h]
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_719796
mov     ecx, [esi+8]
push    0               ; char
add     ecx, 9Ch
push    0               ; int
push    600h            ; int
push    1               ; int
mov     edx, [ecx]
push    0               ; int
mov     [esp+44h+var_1C], edx
mov     edx, [ecx+4]
mov     [esp+44h+var_18], edx
lea     edx, [esp+44h+var_1C]
mov     ecx, [ecx+8]
push    edx             ; int
mov     [esp+48h+var_14], ecx
mov     ecx, ds:8871E0h
mov     edx, [ecx+33Ch]
mov     ecx, eax        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_719796:                             ; CODE XREF: UnitClass__Deploy+461↑j
mov     eax, [esi+8]
mov     dword ptr [eax+280h], 0
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_7197AF:                             ; CODE XREF: UnitClass__Deploy+A8↑j
; UnitClass__Deploy+D1↑j
mov     edx, [ecx]
push    1
push    ebx
call    dword ptr [edx+480h]
mov     eax, [esi]
push    esi
call    dword ptr [eax+48h]
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_7197CC:                             ; CODE XREF: UnitClass__Deploy+69↑j
cmp     eax, ebx
jnz     short loc_719803
mov     byte ptr [ecx+270h], 1
mov     eax, dword_A8ED54+30h
lea     edx, [esi+38h]
mov     ecx, 3Ch ; '<'
mov     [edx], eax
mov     eax, [esp+30h+var_C]
mov     [edx+4], eax
mov     [edx+8], ecx
mov     eax, [esi+34h]
inc     eax
mov     [esi+34h], eax
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719803:                             ; CODE XREF: UnitClass__Deploy+71↑j
; UnitClass__Deploy+4DE↑j
cmp     eax, 1
jnz     short loc_71981E
mov     ecx, [esi-4]
lea     eax, [esi-4]
push    eax
call    dword ptr [ecx+28h]
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_71981E:                             ; CODE XREF: UnitClass__Deploy+516↑j
cmp     eax, 2
jnz     loc_719943
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebx
jz      short loc_719878
mov     edx, [esi+8]
push    ebx             ; char
add     edx, 9Ch
push    ebx             ; int
push    600h            ; int
push    1               ; int
mov     ecx, [edx]
push    ebx             ; int
mov     [esp+44h+var_1C], ecx
mov     ecx, [edx+4]
mov     [esp+44h+var_18], ecx
lea     ecx, [esp+44h+var_1C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+48h+var_14], edx
mov     edx, ds:8871E0h
mov     ecx, [edx+33Ch]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_719878:                             ; CODE XREF: UnitClass__Deploy+546↑j
mov     ecx, [esi+8]
push    ebx
mov     edx, [ecx]
call    dword ptr [edx+124h]
mov     edi, [esi+8]
mov     ecx, edi
mov     eax, [edi]
call    dword ptr [eax+84h]
mov     eax, [eax+578h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_7198AD
mov     ecx, ds:8871E0h
mov     eax, [ecx+21Ch]
cmp     eax, 0FFFFFFFFh
jz      short loc_7198D3

loc_7198AD:                             ; CODE XREF: UnitClass__Deploy+5AA↑j
add     edi, 9Ch
push    ebx
mov     edx, [edi]
mov     [esp+34h+var_1C], edx
mov     ecx, [edi+4]
mov     [esp+34h+var_18], ecx
mov     ecx, eax
mov     edx, [edi+8]
mov     [esp+34h+var_14], edx
lea     edx, [esp+34h+var_1C]
call    StartAudioControllerAt

loc_7198D3:                             ; CODE XREF: UnitClass__Deploy+5BB↑j
mov     eax, [esi+8]
push    ebx
sub     esp, 0Ch
mov     byte ptr [eax+271h], 1
mov     ecx, [esi+8]
mov     byte ptr [ecx+27Ch], 0
mov     edx, [esi+8]
mov     byte ptr [edx+270h], 0
mov     eax, [esi+8]
mov     edx, esp
mov     byte ptr [eax+8Ch], 0
mov     ecx, [esi+8]
add     ecx, 288h
mov     eax, [ecx]
mov     [edx], eax
mov     eax, [ecx+4]
mov     [edx+4], eax
mov     ecx, [ecx+8]
mov     [edx+8], ecx
lea     ecx, [esi-4]
call    ObjectClass__FindPlacementPosition
mov     edi, [esi+34h]
inc     edi
test    al, al
mov     [esi+34h], edi
mov     ecx, edi
jz      loc_719BE2
inc     ecx
xor     al, al
mov     [esi+34h], ecx
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719943:                             ; CODE XREF: UnitClass__Deploy+531↑j
cmp     eax, 3
jnz     short loc_719993
push    ebx
add     ecx, 288h
sub     esp, 0Ch
mov     eax, [ecx]
mov     edx, esp
mov     [edx], eax
mov     eax, [ecx+4]
mov     ecx, [ecx+8]
mov     [edx+4], eax
mov     [edx+8], ecx
lea     ecx, [esi-4]
call    ObjectClass__FindPlacementPosition
test    al, al
jz      short loc_719973
inc     dword ptr [esi+34h]

loc_719973:                             ; CODE XREF: UnitClass__Deploy+67E↑j
mov     eax, ds:8871E0h
mov     edx, [esi+8]
mov     ecx, [eax+0BECh]
xor     al, al
mov     [edx+284h], ecx
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719993:                             ; CODE XREF: UnitClass__Deploy+656↑j
cmp     eax, 4
jnz     short loc_7199F8
push    1
add     ecx, 288h
sub     esp, 0Ch
mov     eax, [ecx]
mov     edx, esp
mov     [edx], eax
mov     eax, [ecx+4]
mov     ecx, [ecx+8]
mov     [edx+4], eax
mov     [edx+8], ecx
lea     ecx, [esi-4]
call    ObjectClass__FindPlacementPosition
mov     ecx, [esi+8]
lea     eax, [esi+24h]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+1B4h]
mov     ecx, [esi+8]
push    ebx
mov     edx, [ecx]
call    dword ptr [edx+1CCh]
mov     ecx, [esi+8]
push    1
mov     eax, [ecx]
call    dword ptr [eax+124h]
mov     eax, [esi+34h]
inc     eax
mov     [esi+34h], eax
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_7199F8:                             ; CODE XREF: UnitClass__Deploy+6A6↑j
cmp     eax, 5
jnz     loc_719B94
mov     edx, [ecx]
lea     ebp, [esi+24h]
push    ebp
call    dword ptr [edx+1B4h]
mov     ecx, [esi+8]
push    ebx
mov     eax, [ecx]
call    dword ptr [eax+1CCh]
mov     ecx, [esi+8]
push    1
mov     edx, [ecx]
call    dword ptr [edx+124h]
mov     edi, [esi+8]
mov     ecx, edi
mov     eax, [edi]
call    dword ptr [eax+84h]
mov     eax, [eax+574h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_719A4F
mov     ecx, ds:8871E0h
mov     eax, [ecx+218h]
cmp     eax, 0FFFFFFFFh
jz      short loc_719A75

loc_719A4F:                             ; CODE XREF: UnitClass__Deploy+74C↑j
add     edi, 9Ch
push    ebx
mov     edx, [edi]
mov     [esp+34h+var_1C], edx
mov     ecx, [edi+4]
mov     [esp+34h+var_18], ecx
mov     ecx, eax
mov     edx, [edi+8]
mov     [esp+34h+var_14], edx
lea     edx, [esp+34h+var_1C]
call    StartAudioControllerAt

loc_719A75:                             ; CODE XREF: UnitClass__Deploy+75D↑j
mov     ecx, [esi+8]
lea     edx, [esp+30h+arg_0]
push    1
push    edx
mov     eax, [ecx]
call    dword ptr [eax+1B8h]
push    eax
mov     ecx, 87F7E8h
call    LayerClass__IsWithinUsableArea
test    al, al
jnz     short loc_719AA0
mov     eax, [esi+8]
mov     byte ptr [eax+3D5h], 0

loc_719AA0:                             ; CODE XREF: UnitClass__Deploy+7A4↑j
mov     ecx, [esi+8]
cmp     [ecx+280h], ebx
jnz     short loc_719AC9
mov     eax, [ebp+0]
mov     ecx, [ebp+4]
sub     esp, 0Ch
mov     edx, esp
mov     [edx], eax
mov     eax, [ebp+8]
mov     [edx+4], ecx
lea     ecx, [esi-4]
mov     [edx+8], eax
call    ProcessUnitDeploymentAtCell

loc_719AC9:                             ; CODE XREF: UnitClass__Deploy+7B9↑j
mov     ecx, [esi+8]
mov     al, [ecx+90h]
test    al, al
jz      loc_719BE2
mov     edx, [ecx]
push    2
call    dword ptr [edx+18Ch]
mov     eax, [esi]
push    esi
call    dword ptr [eax+48h]
mov     ecx, [esi+8]
push    ebx
mov     [ecx+428h], ebx
mov     edx, [esi+8]
mov     [edx+42Ch], ebx
mov     ecx, [esi+8]
call    TechnoClass__SetFocus
mov     ecx, [esi+8]
push    1
push    ebx
mov     eax, [ecx]
call    dword ptr [eax+480h]
mov     ecx, [esi+8]
mov     eax, dword_A8ED54+30h
lea     edx, [esi+38h]
push    1C8h            ; Size
mov     ecx, [ecx+284h]
mov     [edx], eax
mov     eax, [esp+34h+var_C]
mov     [edx+4], eax
mov     [edx+8], ecx
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebx
jz      short loc_719B81
mov     ecx, [esi+8]
push    ebx             ; char
add     ecx, 9Ch
push    ebx             ; int
push    600h            ; int
push    1               ; int
mov     edx, [ecx]
push    ebx             ; int
mov     [esp+44h+var_1C], edx
mov     edx, [ecx+4]
mov     [esp+44h+var_18], edx
lea     edx, [esp+44h+var_1C]
mov     ecx, [ecx+8]
push    edx             ; int
mov     [esp+48h+var_14], ecx
mov     ecx, ds:8871E0h
mov     edx, [ecx+33Ch]
mov     ecx, eax        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_719B81:                             ; CODE XREF: UnitClass__Deploy+84F↑j
mov     eax, [esi+34h]
inc     eax
mov     [esi+34h], eax
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719B94:                             ; CODE XREF: UnitClass__Deploy+70B↑j
cmp     eax, 6
jnz     short loc_719BAF
mov     ecx, [esi-4]
lea     eax, [esi-4]
push    eax
call    dword ptr [ecx+28h]
xor     al, al
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_719BAF:                             ; CODE XREF: UnitClass__Deploy+8A7↑j
cmp     eax, 7
jnz     short loc_719BE2
mov     byte ptr [ecx+271h], 0
mov     ecx, [esi+8]
push    ebx
call    TechnoClass__SetFocus
mov     ecx, [esi+8]
push    1
push    ebx
mov     edx, [ecx]
call    dword ptr [edx+480h]
mov     byte ptr [esi+30h], 0
mov     eax, [esi+8]
mov     [eax+280h], ebx
mov     [esi+34h], ebx

loc_719BE2:                             ; CODE XREF: UnitClass__Deploy+7F↑j
; UnitClass__Deploy+63D↑j ...
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 20h
retn    4
*/
}

// IDA: 0x738D30 (DeployToBuilding, 1652B)
// 0x738d30
int UnitClass::DeployToBuilding()
{
// [IDA decompile]
char __thiscall UnitClass_DeployToBuilding(_DWORD *this)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // edx
  _DWORD *BuildableFromArray; // eax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // eax
  int v14; // edi
  int v15; // eax
  int FoundationHeight; // eax
  int v17; // edi
  void *v18; // eax
  int *v19; // edi
  _WORD *v20; // eax
  __int16 v21; // cx
  int v22; // ecx
  int v23; // edi
  void *v24; // eax
  int v25; // [esp-1Ch] [ebp-50h]
  int v26; // [esp+14h] [ebp-20h] BYREF
  int v27; // [esp+18h] [ebp-1Ch] BYREF
  int v28; // [esp+1Ch] [ebp-18h] BYREF
  int v29; // [esp+20h] [ebp-14h] BYREF
  _BYTE v30[4]; // [esp+24h] [ebp-10h] BYREF
  _BYTE v31[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(*(this + 433) + 1028) )
    return 1;
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 292))(this, 0);
  v3 = 0;
  v4 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 2236);
  if ( v4 <= 0 )
    goto LABEL_7;
  v5 = *(_DWORD **)(MEMORY[0x87F7E8][7806] + 2224);
  while ( *v5 != *(_DWORD *)(*(this + 433) + 1028) )
  {
    ++v3;
    ++v5;
    if ( v3 >= v4 )
      goto LABEL_7;
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 60))(this) + 497) )
  {
    if ( !*(this + 361) )
    {
      v27 = 0;
      BuildableFromArray = (_DWORD *)((_DWORD *(__stdcall *)(int))HouseClass::FirstBuildableFromArray)(MEMORY[0x87F7E8][7806] + 2176);
      v10 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 1;
      v11 = ((int (__stdcall *)(int))HouseClass::FirstBuildableFromArray)(MEMORY[0x87F7E8][7806] + 2176);
      v25 = BuildingTypeClass::GetFoundationHeight(v11, 0) + 1;
      v12 = ((__int64 (__thiscall *)(_DWORD *, int *))*(_DWORD *)(*this + 440))(this, &v29);
      v26 = *LayerClass::Pathfinding_Find(
               MEMORY[0x87F7E8],
               SHIDWORD(v12),
               &v28,
               (__int16 *)v12,
               5,
               -1,
               0,
               0,
               v10,
               v25,
               0,
               0,
               0,
               1,
               (__int16 *)&v27,
               0,
               0);
      v27 = 0;
      v13 = (_DWORD *)((_DWORD *(__stdcall *)(int))HouseClass::FirstBuildableFromArray)(MEMORY[0x87F7E8][7806] + 2220);
      v14 = BuildingTypeClass::GetFoundationWidth(v13) + 1;
      v15 = ((int (__stdcall *)(int))HouseClass::FirstBuildableFromArray)(MEMORY[0x87F7E8][7806] + 2220);
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0);
      v26 = *LayerClass::Pathfinding_Find(
               MEMORY[0x87F7E8],
               (int)&v27,
               &v29,
               (__int16 *)&v26,
               1,
               -1,
               0,
               0,
               v14,
               FoundationHeight + 1,
               0,
               0,
               0,
               1,
               (__int16 *)&v27,
               0,
               0);
      if ( v26 != dword_A8ED54[145561] )
      {
        v17 = *this;
        v18 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v26);
        (*(void (__thiscall **)(_DWORD *, void *, int))(v17 + 1152))(this, v18, 1);
      }
      *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 60))(this) + 497) = 0;
    }
  }
  else
  {
LABEL_7:
    if ( !*(this + 361) )
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v31);
      LOWORD(v27) = *v6 / 256;
      HIWORD(v27) = v6[1] / 256;
      v26 = v27;
      v7 = CellStruct::Add(&v26, &v29, &MEMORY[0x87F7E8][32687]);
      v8 = *(this + 433);
      v28 = *v7;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v8 + 1028) + 168))(
             *(_DWORD *)(v8 + 1028),
             &v28,
             0) )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 1);
        return 1;
      }
      if ( !*(this + 361) )
      {
        if ( (dword_A8ED54[145554] & 0x100) == 0 )
        {
          dword_A8ED54[145583] = -65536;
          BYTE1(dword_A8ED54[145554]) |= 1u;
          dword_A8ED54[145584] = -131072;
          dword_A8ED54[145585] = -131071;
          dword_A8ED54[145586] = -65537;
          dword_A8ED54[145587] = -196608;
          dword_A8ED54[145588] = -196607;
          dword_A8ED54[145589] = -131073;
          dword_A8ED54[145590] = -196606;
          dword_A8ED54[145591] = -131074;
          dword_A8ED54[145592] = -262144;
          dword_A8ED54[145593] = -262143;
          dword_A8ED54[145594] = -196609;
          dword_A8ED54[145595] = -262142;
          dword_A8ED54[145596] = -196610;
          dword_A8ED54[145597] = 0x10000;
          dword_A8ED54[145598] = 0x20000;
          dword_A8ED54[145599] = 131073;
          dword_A8ED54[145600] = 196607;
          dword_A8ED54[145601] = 196608;
          dword_A8ED54[145602] = 196609;
          dword_A8ED54[145603] = 0x3FFFF;
          dword_A8ED54[145604] = 196610;
          dword_A8ED54[145605] = 262142;
          dword_A8ED54[145606] = 0x40000;
          dword_A8ED54[145607] = 262145;
          dword_A8ED54[145608] = 327679;
          dword_A8ED54[145609] = 262146;
          dword_A8ED54[145610] = 327678;
          dword_A8ED54[145612] = 65534;
          dword_A8ED54[145613] = 65533;
          dword_A8ED54[145614] = 65532;
          dword_A8ED54[145615] = 1;
          v27 = 4;
          dword_A8ED54[145611] = 0xFFFF;
          dword_A8ED54[145616] = 2;
          dword_A8ED54[145617] = 3;
          dword_A8ED54[145618] = 4;
          atexit(nullsub_248);
        }
        v19 = &dword_A8ED54[145583];
        while ( 1 )
        {
          v20 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 440))(this, v30);
          v21 = v20[1] + *((_WORD *)v19 + 1);
          LOWORD(v27) = *v20 + *(_WORD *)v19;
          HIWORD(v27) = v21;
          v29 = v27;
          LOWORD(v26) = LOWORD(MEMORY[0x87F7E8][32687]) + v27;
          HIWORD(v26) = HIWORD(MEMORY[0x87F7E8][32687]) + v21;
          v22 = *(this + 433);
          v28 = v26;
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v22 + 1028) + 168))(
                 *(_DWORD *)(v22 + 1028),
                 &v28,
                 0) )
          {
            break;
          }
          if ( (int)++v19 >= (int)&dword_A8ED54[145619] )
            goto LABEL_23;
        }
        v23 = *this;
        v24 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v29);
        (*(void (__thiscall **)(_DWORD *, void *, int))(v23 + 1152))(this, v24, 1);
      }
    }
  }
LABEL_23:
  (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 1);
  if ( !*(this + 361) && !(unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
    (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD))(*this + 372))(this, &dword_A8ED54[145573], 0, 0);
  return 0;
}

/* ASM:
sub     esp, 20h
push    ebx
push    ebp
push    esi
mov     esi, ecx
xor     ebx, ebx
push    edi
mov     eax, [esi+6C4h]
cmp     [eax+404h], ebx
jnz     short loc_738D53
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 20h
retn
; ---------------------------------------------------------------------------

loc_738D53:                             ; CODE XREF: UnitClass__DeployToBuilding+17↑j
mov     edx, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [edx+124h]
mov     edx, ds:8871E0h
xor     eax, eax
mov     ecx, [edx+8BCh]
cmp     ecx, ebx
jle     short loc_738D92
mov     edi, [esi+6C4h]
mov     edx, [edx+8B0h]
mov     edi, [edi+404h]

loc_738D82:                             ; CODE XREF: UnitClass__DeployToBuilding+60↓j
cmp     [edx], edi
jz      loc_738E2C
inc     eax
add     edx, 4
cmp     eax, ecx
jl      short loc_738D82

loc_738D92:                             ; CODE XREF: UnitClass__DeployToBuilding+3E↑j
; UnitClass__DeployToBuilding+109↓j
cmp     [esi+5A4h], ebx
jnz     loc_739366
mov     eax, [esi]
lea     ecx, [esp+30h+var_C]
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]
mov     ecx, eax
push    89F6A4h
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     [esp+34h+var_1C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+34h+var_20]
add     eax, edx
sar     eax, 8
mov     [esp+34h+var_1A], ax
mov     edx, dword ptr [esp+34h+var_1C]
lea     eax, [esp+34h+var_14]
mov     [esp+34h+var_20], edx
push    eax
call    CellStruct__Add
mov     ecx, [eax]
mov     edx, [esi+6C4h]
mov     [esp+30h+var_18], ecx
push    ebx
mov     ecx, [edx+404h]
lea     edx, [esp+34h+var_18]
push    edx
mov     eax, [ecx]
call    dword ptr [eax+0A8h]
test    al, al
jz      loc_738F90
mov     eax, [esi]
push    1
mov     ecx, esi
call    dword ptr [eax+124h]
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 20h
retn
; ---------------------------------------------------------------------------

loc_738E2C:                             ; CODE XREF: UnitClass__DeployToBuilding+54↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3Ch]
cmp     [eax+1F1h], bl
jz      loc_738D92
cmp     [esi+5A4h], ebx
jnz     loc_739366
mov     ecx, ds:8871E0h
mov     [esp+30h+var_1C], bx
add     ecx, 880h
mov     [esp+30h+var_1A], bx
push    ecx
mov     ecx, [esi+21Ch]
call    HouseClass__FirstBuildableFromArray
mov     ecx, eax
call    BuildingTypeClass__GetFoundationWidth
mov     edx, ds:8871E0h
mov     ecx, [esi+21Ch]
add     edx, 880h
mov     edi, eax
push    ebx
push    edx
inc     edi
call    HouseClass__FirstBuildableFromArray
mov     ecx, eax
call    BuildingTypeClass__GetFoundationHeight
push    ebx
lea     ecx, [esp+34h+var_1C]
push    ebx
push    ecx
push    1
push    ebx
mov     edx, [esi]
inc     eax
push    ebx
push    ebx
push    eax
push    edi
push    ebx
or      ebp, 0FFFFFFFFh
push    ebx
push    ebp
lea     eax, [esp+60h+var_14]
push    5
push    eax
mov     ecx, esi
call    dword ptr [edx+1B8h]
lea     ecx, [esp+64h+var_18]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     edx, [eax]
mov     eax, ds:8871E0h
mov     ecx, [esi+21Ch]
add     eax, 8ACh
push    eax
mov     [esp+34h+var_20], edx
mov     [esp+34h+var_1C], bx
mov     [esp+34h+var_1A], bx
call    HouseClass__FirstBuildableFromArray
mov     ecx, eax
call    BuildingTypeClass__GetFoundationWidth
mov     ecx, ds:8871E0h
push    ebx
add     ecx, 8ACh
mov     edi, eax
push    ecx
mov     ecx, [esi+21Ch]
inc     edi
call    HouseClass__FirstBuildableFromArray
mov     ecx, eax
call    BuildingTypeClass__GetFoundationHeight
push    ebx
lea     edx, [esp+34h+var_1C]
push    ebx
push    edx
push    1
push    ebx
inc     eax
push    ebx
push    ebx
push    eax
push    edi
push    ebx
push    ebx
push    ebp
push    1
lea     eax, [esp+64h+var_20]
lea     ecx, [esp+64h+var_14]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+30h+var_20], eax
jnz     short loc_738F62
mov     dx, word ptr [esp+30h+var_20+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      short loc_738F7E

loc_738F62:                             ; CODE XREF: UnitClass__DeployToBuilding+222↑j
mov     edi, [esi]
lea     eax, [esp+30h+var_20]
push    1
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]

loc_738F7E:                             ; CODE XREF: UnitClass__DeployToBuilding+230↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3Ch]
mov     [eax+1F1h], bl
jmp     loc_739366
; ---------------------------------------------------------------------------

loc_738F90:                             ; CODE XREF: UnitClass__DeployToBuilding+E0↑j
cmp     [esi+5A4h], ebx
jnz     loc_739366
mov     al, byte ptr dword_A8ED54+8E249h
test    al, 1
jnz     loc_7392CA
mov     dl, al
mov     [esp+30h+var_1C], bx
or      dl, 1
or      ebp, 0FFFFFFFFh
mov     [esp+30h+var_1A], bp
mov     ecx, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E2BCh, ecx
mov     ecx, 0FFFFFFFEh
mov     byte ptr dword_A8ED54+8E249h, dl
mov     [esp+30h+var_1C], bx
mov     [esp+30h+var_1A], cx
mov     edx, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E2C0h, edx
mov     edx, 1
mov     [esp+30h+var_1C], dx
mov     [esp+30h+var_1A], cx
mov     eax, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bp
mov     dword_A8ED54+8E2C4h, eax
mov     [esp+30h+var_1A], cx
mov     eax, dword ptr [esp+30h+var_1C]
mov     edi, 0FFFFFFFDh
mov     dword_A8ED54+8E2C8h, eax
mov     [esp+30h+var_1C], bx
mov     [esp+30h+var_1A], di
mov     eax, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E2CCh, eax
mov     [esp+30h+var_1C], dx
mov     [esp+30h+var_1A], di
mov     eax, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E2D0h, eax
mov     [esp+30h+var_1C], bp
mov     [esp+30h+var_1A], di
mov     eax, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E2D4h, eax
mov     eax, 2
mov     [esp+30h+var_1C], ax
mov     [esp+30h+var_1A], di
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], cx
mov     dword_A8ED54+8E2D8h, edi
mov     [esp+30h+var_1A], 0FFFDh
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bx
mov     dword_A8ED54+8E2DCh, edi
mov     [esp+30h+var_1A], 0FFFCh
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], dx
mov     dword_A8ED54+8E2E0h, edi
mov     [esp+30h+var_1A], 0FFFCh
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bp
mov     dword_A8ED54+8E2E4h, edi
mov     [esp+30h+var_1A], 0FFFCh
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], ax
mov     dword_A8ED54+8E2E8h, edi
mov     [esp+30h+var_1A], 0FFFCh
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], cx
mov     dword_A8ED54+8E2ECh, edi
mov     [esp+30h+var_1A], 0FFFCh
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bx
mov     dword_A8ED54+8E2F0h, edi
mov     [esp+30h+var_1A], dx
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bx
mov     dword_A8ED54+8E2F4h, edi
mov     [esp+30h+var_1A], ax
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], dx
mov     dword_A8ED54+8E2F8h, edi
mov     [esp+30h+var_1A], ax
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bp
mov     dword_A8ED54+8E2FCh, edi
mov     [esp+30h+var_1A], ax
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], bx
mov     dword_A8ED54+8E300h, edi
mov     [esp+30h+var_1A], 3
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E304h, edi
mov     [esp+30h+var_1C], dx
mov     [esp+30h+var_1A], 3
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E308h, edi
mov     [esp+30h+var_1C], bp
mov     [esp+30h+var_1A], 3
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E30Ch, edi
mov     [esp+30h+var_1C], ax
mov     [esp+30h+var_1A], 3
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E310h, edi
mov     [esp+30h+var_1C], cx
mov     [esp+30h+var_1A], 3
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E314h, edi
mov     [esp+30h+var_1C], bx
mov     [esp+30h+var_1A], 4
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E318h, edi
mov     [esp+30h+var_1C], dx
mov     [esp+30h+var_1A], 4
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E31Ch, edi
mov     [esp+30h+var_1C], bp
mov     [esp+30h+var_1A], 4
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E320h, edi
mov     [esp+30h+var_1C], ax
mov     [esp+30h+var_1A], 4
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E324h, edi
mov     [esp+30h+var_1C], cx
mov     [esp+30h+var_1A], 4
mov     edi, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E328h, edi
mov     [esp+30h+var_1C], bp
mov     [esp+30h+var_1A], bx
mov     edi, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], cx
mov     [esp+30h+var_1A], bx
mov     ecx, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], 0FFFDh
mov     dword_A8ED54+8E330h, ecx
mov     [esp+30h+var_1A], bx
mov     ecx, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], 0FFFCh
mov     dword_A8ED54+8E334h, ecx
mov     [esp+30h+var_1A], bx
mov     ecx, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], dx
mov     [esp+30h+var_1A], bx
mov     edx, dword ptr [esp+30h+var_1C]
mov     [esp+30h+var_1C], ax
mov     [esp+30h+var_1A], bx
mov     eax, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E338h, ecx
mov     [esp+30h+var_1C], 3
mov     [esp+30h+var_1A], bx
mov     ecx, dword ptr [esp+30h+var_1C]
mov     dword_A8ED54+8E33Ch, edx
mov     [esp+30h+var_1C], 4
mov     [esp+30h+var_1A], bx
mov     edx, dword ptr [esp+30h+var_1C]
push    offset nullsub_248 ; void (__cdecl *)()
mov     dword_A8ED54+8E32Ch, edi
mov     dword_A8ED54+8E340h, eax
mov     dword_A8ED54+8E344h, ecx
mov     dword_A8ED54+8E348h, edx
call    _atexit
add     esp, 4

loc_7392CA:                             ; CODE XREF: UnitClass__DeployToBuilding+273↑j
mov     edi, (offset dword_A8ED54+8E2BCh)

loc_7392CF:                             ; CODE XREF: UnitClass__DeployToBuilding+616↓j
mov     eax, [esi]
lea     ecx, [esp+30h+var_10]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     dx, [edi]
mov     cx, [edi+2]
add     dx, [eax]
add     cx, [eax+2]
push    ebx
mov     [esp+34h+var_1C], dx
mov     edx, ds:89F6A4h
mov     [esp+34h+var_1A], cx
mov     eax, dword ptr [esp+34h+var_1C]
add     cx, ds:89F6A6h
mov     [esp+34h+var_14], eax
add     eax, edx
mov     word ptr [esp+34h+var_20], ax
mov     word ptr [esp+34h+var_20+2], cx
mov     eax, [esp+34h+var_20]
mov     ecx, [esi+6C4h]
mov     [esp+34h+var_18], eax
lea     eax, [esp+34h+var_18]
mov     ecx, [ecx+404h]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+0A8h]
test    al, al
jnz     short loc_73934A
add     edi, 4
cmp     edi, (offset dword_A8ED54+8E34Ch)
jl      short loc_7392CF
jmp     short loc_739366
; ---------------------------------------------------------------------------

loc_73934A:                             ; CODE XREF: UnitClass__DeployToBuilding+60B↑j
mov     edi, [esi]
lea     ecx, [esp+30h+var_14]
push    1
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]

loc_739366:                             ; CODE XREF: UnitClass__DeployToBuilding+68↑j
; UnitClass__DeployToBuilding+115↑j ...
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+124h]
cmp     [esi+5A4h], ebx
jnz     short loc_73939A
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_73939A
mov     eax, [esi]
push    ebx
push    ebx
push    (offset dword_A8ED54+8E294h)
mov     ecx, esi
call    dword ptr [eax+174h]

loc_73939A:                             ; CODE XREF: UnitClass__DeployToBuilding+648↑j
; UnitClass__DeployToBuilding+657↑j
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 20h
retn
*/
}

// IDA: 0x739AC0 (SimpleDeployerDeploy, 516B)
// 0x739ac0
int UnitClass::SimpleDeployerDeploy()
{
// [IDA decompile]
char __thiscall UnitClass::SimpleDeployerDeploy(int *this)
{
  int v2; // eax
  int v3; // eax
  void **v4; // eax
  void **v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+4h] [ebp-Ch] BYREF
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  v2 = *(this + 433);
  if ( *(_BYTE *)(v2 + 3603) )
  {
    if ( (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0
      || (v2 = (*(int (__thiscall **)(int *))(*this + 132))(this), *(_BYTE *)(v2 + 1709)) )
    {
      LOBYTE(v2) = *((_BYTE *)this + 1760);
      if ( !(_BYTE)v2 )
      {
        if ( !*((_BYTE *)this + 308) && (*(int (__thiscall **)(int *))(*this + 456))(this) > 0 )
          *((_BYTE *)this + 308) = 1;
        if ( *((_BYTE *)this + 1761) && (v3 = *(this + 76)) != 0 )
        {
          if ( *(this + 62) >= *(_DWORD *)(*(_DWORD *)(v3 + 200) + 704) + *(_DWORD *)(*(_DWORD *)(v3 + 200) + 692) - 1 )
            *((_WORD *)this + 880) = 1;
        }
        else if ( !*((_BYTE *)this + 308) )
        {
          if ( *(_DWORD *)(*(this + 433) + 1724) )
          {
            if ( !*(this + 76) )
            {
              v4 = (void **)__2_YAPAXI_Z(456);
              if ( v4 )
              {
                v12 = *(this + 39);
                v13 = *(this + 40);
                v14 = *(this + 41);
                v5 = AnimClass::ctor(v4, *(void **)(*(this + 433) + 1724), &v12, 0, 1, (void *)0x600, 0, 0);
              }
              else
              {
                v5 = 0;
              }
              *(this + 76) = (int)v5;
              BuildingClass::AimTurret(v5, this);
              *(_DWORD *)(*(this + 76) + 212) = (*(int (__thiscall **)(int *))(*this + 484))(this);
            }
            v6 = *(this + 76);
            *(this + 62) = *(_DWORD *)(*(_DWORD *)(v6 + 200) + 692);
            v7 = dword_A8ED54[12];
            v8 = *(_DWORD *)(*(_DWORD *)(v6 + 200) + 688);
            *(this + 67) = v8;
            *(this + 64) = v7;
            *(this + 65) = v13;
            *(this + 66) = v8;
            *((_BYTE *)this + 1761) = 1;
          }
          else
          {
            *((_BYTE *)this + 1760) = 1;
          }
        }
        v2 = (*(int (__thiscall **)(int *))(*this + 132))(this);
        if ( *(_DWORD *)(v2 + 1388) != -1 )
        {
          v12 = *(this + 39);
          v13 = *(this + 40);
          v9 = *this;
          v14 = *(this + 41);
          v10 = (*(int (__thiscall **)(int *))(v9 + 132))(this);
          LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v10 + 1388), (int)&v12, 0);
        }
      }
    }
  }
  return v2;
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
mov     eax, [esi+6C4h]
mov     cl, [eax+0E13h]
test    cl, cl
jz      loc_739CBF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jle     short loc_739B00
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+6ADh]
test    cl, cl
jz      loc_739CBF

loc_739B00:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+26↑j
mov     al, [esi+6E0h]
test    al, al
jnz     loc_739CBF
mov     al, [esi+134h]
push    ebx
test    al, al
mov     ebx, 1
jnz     short loc_739B32
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jle     short loc_739B32
mov     [esi+134h], bl

loc_739B32:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+5C↑j
; UnitClass__SimpleDeployerDeploy+6A↑j
mov     al, [esi+6E1h]
test    al, al
jz      short loc_739B7C
mov     eax, [esi+130h]
test    eax, eax
jz      short loc_739B7C
mov     eax, [eax+0C8h]
mov     ecx, [eax+2C0h]
mov     edx, [eax+2B4h]
lea     eax, [ecx+edx-1]
mov     ecx, [esi+0F8h]
cmp     ecx, eax
jl      loc_739C70
mov     [esi+6E0h], bl
mov     byte ptr [esi+6E1h], 0
jmp     loc_739C70
; ---------------------------------------------------------------------------

loc_739B7C:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+7A↑j
; UnitClass__SimpleDeployerDeploy+84↑j
mov     al, [esi+134h]
test    al, al
jnz     loc_739C70
mov     ecx, [esi+6C4h]
mov     eax, [ecx+6BCh]
test    eax, eax
jz      loc_739C6A
mov     eax, [esi+130h]
test    eax, eax
jnz     short loc_739C20
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_739BFA
lea     edx, [esi+9Ch]
push    0               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    ebx             ; int
mov     [esp+24h+var_C], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+28h+var_8], ecx
lea     ecx, [esp+28h+var_C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+2Ch+var_4], edx
mov     edx, [esi+6C4h]
mov     ecx, [edx+6BCh]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     short loc_739BFC
; ---------------------------------------------------------------------------

loc_739BFA:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+F7↑j
xor     eax, eax

loc_739BFC:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+138↑j
push    esi
mov     ecx, eax
mov     [esi+130h], eax
call    BuildingClass__AimTurret
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1E4h]
mov     ecx, [esi+130h]
mov     [ecx+0D4h], eax

loc_739C20:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+E6↑j
mov     eax, [esi+130h]
mov     edx, [eax+0C8h]
mov     ecx, [edx+2B4h]
mov     [esi+0F8h], ecx
mov     edx, [eax+0C8h]
mov     ecx, dword_A8ED54+30h
mov     eax, [edx+2B0h]
lea     edx, [esi+100h]
mov     [esi+10Ch], eax
mov     [edx], ecx
mov     ecx, [esp+14h+var_8]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     [esi+6E1h], bl
jmp     short loc_739C70
; ---------------------------------------------------------------------------

loc_739C6A:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+D8↑j
mov     [esi+6E0h], bl

loc_739C70:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+A4↑j
; UnitClass__SimpleDeployerDeploy+B7↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [eax+56Ch]
pop     ebx
cmp     ecx, 0FFFFFFFFh
jz      short loc_739CBF
lea     eax, [esi+9Ch]
push    edi
push    0
lea     edi, [esp+18h+var_C]
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+56Ch]
mov     edx, edi
call    StartAudioControllerAt
pop     edi

loc_739CBF:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+14↑j
; UnitClass__SimpleDeployerDeploy+3A↑j ...
pop     esi
add     esp, 0Ch
retn
*/
}

// IDA: 0x739CD0 (SimpleDeployerUndeploy, 494B)
// 0x739cd0
int UnitClass::SimpleDeployerUndeploy()
{
// [IDA decompile]
char __thiscall UnitClass::SimpleDeployerUndeploy(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // edi
  __int16 *PlacementCellsAlt; // eax
  void *v7; // eax
  void **v8; // eax
  void **v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  LOBYTE(v2) = *((_BYTE *)this + 1760);
  if ( (_BYTE)v2 )
  {
    if ( *((_BYTE *)this + 1762) && (v3 = *(this + 76)) != 0 )
    {
      if ( *(this + 62) >= *(_DWORD *)(*(_DWORD *)(v3 + 200) + 704) + *(_DWORD *)(*(_DWORD *)(v3 + 200) + 692) - 2 )
      {
        v4 = *this;
        *((_BYTE *)this + 1760) = 0;
        *((_BYTE *)this + 1762) = 0;
        if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v4 + 132))(this) + 1709) )
        {
          v5 = *this;
          PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v16, (int)this);
          v7 = CellCoord::To_CellObj(MEMORY[0x87F7E8], PlacementCellsAlt);
          (*(void (__thiscall **)(int *, void *, int))(v5 + 1152))(this, v7, 1);
        }
      }
    }
    else if ( *(_DWORD *)(*(this + 433) + 1724) )
    {
      if ( !*(this + 76) )
      {
        v8 = (void **)__2_YAPAXI_Z(456);
        if ( v8 )
        {
          v17 = *(this + 39);
          v18 = *(this + 40);
          v19 = *(this + 41);
          v9 = AnimClass::ctor(v8, *(void **)(*(this + 433) + 1724), &v17, 0, 1, (void *)0x600, 0, 1);
        }
        else
        {
          v9 = 0;
        }
        *(this + 76) = (int)v9;
        BuildingClass::AimTurret(v9, this);
        *(_DWORD *)(*(this + 76) + 212) = (*(int (__thiscall **)(int *))(*this + 484))(this);
      }
      v10 = *(this + 76);
      *(this + 62) = *(_DWORD *)(*(_DWORD *)(v10 + 200) + 692);
      v11 = dword_A8ED54[12];
      v12 = *(_DWORD *)(*(_DWORD *)(v10 + 200) + 688);
      *(this + 67) = v12;
      *(this + 64) = v11;
      *(this + 65) = v18;
      *(this + 66) = v12;
      *((_BYTE *)this + 1762) = 1;
    }
    else
    {
      *((_BYTE *)this + 1760) = 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) )
      (*(void (__thiscall **)(int *))(*this + 1136))(this);
    v2 = (*(int (__thiscall **)(int *))(*this + 132))(this);
    if ( *(_DWORD *)(v2 + 1392) != -1 )
    {
      v17 = *(this + 39);
      v18 = *(this + 40);
      v13 = *this;
      v19 = *(this + 41);
      v14 = (*(int (__thiscall **)(int *))(v13 + 132))(this);
      LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v14 + 1392), (int)&v17, 0);
    }
  }
  return v2;
}

/* ASM:
sub     esp, 10h
push    esi
mov     esi, ecx
push    edi
mov     al, [esi+6E0h]
test    al, al
jz      loc_739EB8
mov     al, [esi+6E2h]
test    al, al
jz      short loc_739D6D
mov     eax, [esi+130h]
test    eax, eax
jz      short loc_739D6D
mov     eax, [eax+0C8h]
mov     ecx, [eax+2C0h]
mov     edx, [eax+2B4h]
lea     eax, [ecx+edx-2]
mov     ecx, [esi+0F8h]
cmp     ecx, eax
jl      loc_739E56
mov     edx, [esi]
mov     ecx, esi
mov     byte ptr [esi+6E0h], 0
mov     byte ptr [esi+6E2h], 0
call    dword ptr [edx+84h]
mov     cl, [eax+6ADh]
test    cl, cl
jz      loc_739E56
mov     edi, [esi]
push    1
lea     eax, [esp+1Ch+var_10]
push    esi
push    eax
mov     ecx, esi
call    MapClass__FindPlacementCellsAlt
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
jmp     loc_739E56
; ---------------------------------------------------------------------------

loc_739D6D:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+1D↑j
; UnitClass__SimpleDeployerUndeploy+27↑j
mov     ecx, [esi+6C4h]
mov     eax, [ecx+6BCh]
test    eax, eax
jz      loc_739E4F
mov     eax, [esi+130h]
test    eax, eax
jnz     short loc_739E04
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_739DDE
lea     edx, [esi+9Ch]
push    1               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    1               ; int
mov     [esp+28h+var_C], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+2Ch+var_8], ecx
lea     ecx, [esp+2Ch+var_C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+30h+var_4], edx
mov     edx, [esi+6C4h]
mov     ecx, [edx+6BCh]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     short loc_739DE0
; ---------------------------------------------------------------------------

loc_739DDE:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+CA↑j
xor     eax, eax

loc_739DE0:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+10C↑j
push    esi
mov     ecx, eax
mov     [esi+130h], eax
call    BuildingClass__AimTurret
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1E4h]
mov     ecx, [esi+130h]
mov     [ecx+0D4h], eax

loc_739E04:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+B9↑j
mov     eax, [esi+130h]
mov     edx, [eax+0C8h]
mov     ecx, [edx+2B4h]
mov     [esi+0F8h], ecx
mov     edx, [eax+0C8h]
mov     ecx, dword_A8ED54+30h
mov     eax, [edx+2B0h]
lea     edx, [esi+100h]
mov     [esi+10Ch], eax
mov     [edx], ecx
mov     ecx, [esp+18h+var_8]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     byte ptr [esi+6E2h], 1
jmp     short loc_739E56
; ---------------------------------------------------------------------------

loc_739E4F:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+AB↑j
mov     byte ptr [esi+6E0h], 0

loc_739E56:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+47↑j
; UnitClass__SimpleDeployerUndeploy+6D↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0C4h]
test    al, al
jz      short loc_739E6E
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+470h]

loc_739E6E:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+192↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+570h], 0FFFFFFFFh
jz      short loc_739EB8
lea     eax, [esi+9Ch]
push    0
lea     edi, [esp+1Ch+var_C]
mov     ecx, [eax]
mov     [esp+1Ch+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+1Ch+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+1Ch+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+570h]
mov     edx, edi
call    StartAudioControllerAt

loc_739EB8:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+F↑j
; UnitClass__SimpleDeployerUndeploy+1AF↑j
pop     edi
pop     esi
add     esp, 10h
retn
*/
}

// IDA: 0x737430 (MissionDispatch, 1826B)
// 0x737430
int UnitClass::MissionDispatch()
{
// [IDA decompile]
int __thiscall UnitClass::MissionDispatch(int this, int *a2, int a3, _DWORD *a4)
{
  int v4; // ebp
  int result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int Member; // edi
  int v11; // edi
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // ebp
  int v15; // eax
  int TileIndex; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  double v24; // [esp+10h] [ebp-24h]
  int v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+18h] [ebp-1Ch] BYREF
  int v27; // [esp+1Ch] [ebp-18h] BYREF
  double v28; // [esp+20h] [ebp-14h]
  _DWORD v29[3]; // [esp+28h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h] BYREF
  int v31; // [esp+3Ch] [ebp+8h]
  int v32; // [esp+40h] [ebp+Ch]

  v4 = a3;
  switch ( a3 )
  {
    case 3:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 12 )
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 5, 0);
      FootClass::MissionDispatch((int *)this, a2, a3, a4);
      return 1;
    case 7:
      FootClass::MissionDispatch((int *)this, a2, a3, a4);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 488))(this, 0, 0);
      FootClass::ClearSomeVector((_DWORD *)this);
      if ( !*(_BYTE *)(this + 1048) || !Team::GetMember((_DWORD *)this, 0) )
      {
        (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 2, a2);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 24);
      }
      return 1;
    case 14:
      if ( !*(_DWORD *)(this + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( ((*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652))
         || *(_DWORD *)(this + 1444))
        && *(_DWORD *)(this + 172) == 2 )
      {
        goto LABEL_54;
      }
      if ( (int *)Team::GetMember((_DWORD *)this, 0) != a2 )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504);
        v12 = HouseClass::SumPowerDrain((int *)(this + 276));
        v13 = *a2;
        v28 = (double)v12;
        if ( (double)v25 < v28 + *(double *)((*(int (__thiscall **)(int *))(v13 + 132))(a2) + 896)
          || *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732)
                                                                                           + 904) )
        {
          goto LABEL_54;
        }
        if ( !Team::AllMembersValid((int *)this) )
          (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 2, a2);
      }
      if ( *(_DWORD *)(this + 1444) )
        goto LABEL_69;
      retaddr = *(_UNKNOWN **)(*(int (__thiscall **)(int))(*(_DWORD *)this + 440))(this);
      v14 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&retaddr);
      v15 = (*(int (__thiscall **)(int *, _DWORD))(*a2 + 132))(a2, 0);
      TileIndex = MapClass::GetTileIndex(
                    MEMORY[0x87F7E8],
                    (__int16 *)(this + 1372),
                    *(_DWORD *)(v15 + 1460),
                    (char)&v27);
      v17 = -1;
      if ( a2 && (a2[5] & 4) != 0 )
      {
        v18 = (*(int (__thiscall **)(int *))(*a2 + 132))(a2);
        v17 = MapClass::GetTileIndex(MEMORY[0x87F7E8], (__int16 *)a2 + 686, *(_DWORD *)(v18 + 1460), 0);
      }
      if ( TileIndex == v17 && (*(_DWORD *)(this + 1444) || v14[59] != 2) )
      {
        v4 = a3;
LABEL_69:
        if ( *(int *)(*(_DWORD *)(this + 1732) + 1504) <= 0 )
          return FootClass::MissionDispatch((int *)this, a2, v4, a4);
        v31 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504);
        v19 = HouseClass::SumPowerDrain((int *)(this + 276));
        v20 = *a2;
        v28 = (double)v19;
        v21 = (*(int (__thiscall **)(int *))(v20 + 132))(a2);
        if ( (double)v31 < v28 + *(double *)(v21 + 896)
          || *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732)
                                                                                           + 904) )
        {
          return FootClass::MissionDispatch((int *)this, a2, v4, a4);
        }
        FootClass::MissionDispatch((int *)this, a2, v4, a4);
        if ( !*(_DWORD *)(this + 1652) )
          WinAPI::Wrapper(-2147467261);
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652))
          && !*(_BYTE *)(this + 1711)
          && !*(_BYTE *)(this + 1048)
          && (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 19, a2) == 1 )
        {
          *a4 = this;
          if ( (*(int (__thiscall **)(int, int, _DWORD *, int *))(*(_DWORD *)this + 636))(this, 18, a4, a2) != 1 )
            (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 3, a2);
        }
        result = 1;
      }
      else
      {
        (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)this + 1152))(this, a2, 1);
        result = 14;
      }
      break;
    case 15:
      if ( !*(_DWORD *)(*(_DWORD *)(this + 1732) + 1504)
        || !a2
        || !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)a2) )
      {
        goto LABEL_28;
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 468))(this) )
      {
        result = 0;
      }
      else
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 444))(this);
        if ( Cell::IsBridge(v8) )
        {
          result = 0;
        }
        else if ( BuildingClass::IsBeingRepairedOrCaptured((int)a2)
               || (a2[5] & 4) != 0 && a2[421]
               || (v9 = (_DWORD *)a2[175]) != 0 && CellClass::HasContent(v9) )
        {
LABEL_28:
          result = 0;
        }
        else
        {
          v32 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504);
          v24 = (double)HouseClass::SumPowerDrain((int *)(this + 276));
          if ( (double)v32 < v24 + *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896)
            || *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732)
                                                                                             + 904) )
          {
LABEL_54:
            result = 10;
          }
          else
          {
            result = 1;
          }
        }
      }
      break;
    case 21:
      v11 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504);
      if ( HouseClass::SumPowerDrain((int *)(this + 276)) == v11 )
        Timer::StartDouble((_BYTE *)(this + 848), *(double *)(*(_DWORD *)(this + 1732) + 968));
      return 5;
    case 22:
      FootClass::MissionDispatch((int *)this, a2, a3, a4);
      if ( *(_BYTE *)(this + 1711) || *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 904), &v26) == 0x4000 )
      {
        if ( !*(_DWORD *)(this + 1652) )
          WinAPI::Wrapper(-2147467261);
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) )
        {
          Member = Team::GetMember((_DWORD *)this, 0);
          if ( *(_BYTE *)(this + 1048) )
          {
            if ( Member
              && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6
              && (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 )
            {
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 21, Member);
            }
          }
        }
        return 1;
      }
      else
      {
        LOWORD(a2) = 0x4000;
        if ( !*(_DWORD *)(this + 1652) )
          WinAPI::Wrapper(-2147467261);
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)(this + 1652) + 76))(*(_DWORD *)(this + 1652), a2);
        return 1;
      }
    case 23:
      v22 = *(_DWORD *)(this + 1732);
      if ( *(_BYTE *)(v22 + 3598) || *(_BYTE *)(v22 + 3599) )
      {
        if ( *(_BYTE *)(this + 1745) )
        {
          v23 = *(_DWORD *)this;
          *(_BYTE *)(this + 1745) = 0;
          (*(void (__thiscall **)(int, int *, int, _DWORD))(v23 + 372))(this, &dword_A8ED54[145573], 1, 0);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 10, 0);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 512))(this) )
            (*(void (__thiscall **)(int))(*(_DWORD *)this + 492))(this);
        }
      }
      return FootClass::MissionDispatch((int *)this, a2, v4, a4);
    case 36:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 468))(this) )
        return 0;
      v7 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this + 76))(this, v29, 0);
      if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], v7) + 80) & 0x100) != 0
        && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 188))(this, 0) )
      {
        return 10;
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 16 )
        return 10;
      if ( *(_BYTE *)(this + 1048) )
        return 10;
      return *(_BYTE *)(this + 1668) != 0xFF ? 10 : 1;
    default:
      return FootClass::MissionDispatch((int *)this, a2, v4, a4);
  }
  return result;
}

/* ASM:
sub     esp, 24h
push    ebx
push    ebp
mov     ebp, [esp+2Ch+arg_4]
push    esi
push    edi
mov     edi, [esp+34h+arg_0]
lea     eax, [ebp-3]    ; switch 34 cases
mov     esi, ecx
cmp     eax, 21h
ja      def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
xor     ecx, ecx
mov     cl, ds:byte_737B78[eax]
jmp     ds:jpt_737455[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_73745C:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     edx, [esi]      ; jumptable 00737455 case 36
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jz      short loc_737476
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737476:                             ; CODE XREF: UnitClass__MissionDispatch+38↑j
mov     eax, [esi]
lea     ecx, [esp+34h+var_C]
push    0
push    ecx
mov     ecx, esi
call    dword ptr [eax+4Ch]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [eax+140h]
test    ch, 1
jz      short loc_7374B9
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+0BCh]
test    al, al
jnz     short loc_7374B9
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7374B9:                             ; CODE XREF: UnitClass__MissionDispatch+68↑j
; UnitClass__MissionDispatch+78↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 10h
jnz     short loc_7374D7
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7374D7:                             ; CODE XREF: UnitClass__MissionDispatch+96↑j
mov     al, [esi+418h]
test    al, al
jz      short loc_7374F0
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7374F0:                             ; CODE XREF: UnitClass__MissionDispatch+AF↑j
mov     al, [esi+684h]
pop     edi
inc     al
pop     esi
neg     al
sbb     eax, eax
pop     ebp
and     eax, 9
pop     ebx
inc     eax
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73750A:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     ecx, [esp+34h+arg_8] ; jumptable 00737455 case 7
mov     edi, [esp+34h+arg_0]
push    ecx
push    ebp
push    edi
mov     ecx, esi
call    FootClass__MissionDispatch
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    0
push    0
mov     ecx, esi
call    dword ptr [edx+1E8h]
mov     ecx, esi
call    FootClass__ClearSomeVector
mov     al, [esi+418h]
test    al, al
jz      short loc_737562
push    0
mov     ecx, esi
call    Team__GetMember
test    eax, eax
jnz     short loc_73757B

loc_737562:                             ; CODE XREF: UnitClass__MissionDispatch+123↑j
mov     eax, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [eax+278h]
mov     edx, [esi]
push    18h
mov     ecx, esi
call    dword ptr [edx+274h]

loc_73757B:                             ; CODE XREF: UnitClass__MissionDispatch+130↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73758A:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+6C4h] ; jumptable 00737455 case 15
mov     ecx, [eax+5E0h]
test    ecx, ecx
jz      loc_73761F
mov     edi, [esp+34h+arg_0]
test    edi, edi
jz      short loc_73761F
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectHouse
test    al, al
jz      short loc_73761F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jz      short loc_7375D0
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7375D0:                             ; CODE XREF: UnitClass__MissionDispatch+192↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_7375F1
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7375F1:                             ; CODE XREF: UnitClass__MissionDispatch+1B3↑j
mov     ecx, edi
call    BuildingClass__IsBeingRepairedOrCaptured
test    al, al
jnz     short loc_73761F
test    byte ptr [edi+14h], 4
jz      short loc_73760C
mov     eax, [edi+694h]
test    eax, eax
jnz     short loc_73761F

loc_73760C:                             ; CODE XREF: UnitClass__MissionDispatch+1D0↑j
mov     ecx, [edi+2BCh]
test    ecx, ecx
jz      short loc_73762B
call    CellClass__HasContent
test    al, al
jz      short loc_73762B

loc_73761F:                             ; CODE XREF: UnitClass__MissionDispatch+168↑j
; UnitClass__MissionDispatch+174↑j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73762B:                             ; CODE XREF: UnitClass__MissionDispatch+1E4↑j
; UnitClass__MissionDispatch+1ED↑j
mov     ecx, [esi+6C4h]
mov     edx, [ecx+5E0h]
lea     ecx, [esi+114h]
mov     [esp+34h+arg_8], edx
call    HouseClass__SumPowerDrain
mov     [esp+34h+arg_0], eax
mov     eax, [edi]
fild    [esp+34h+arg_0]
mov     ecx, edi
fstp    [esp+34h+var_24]
call    dword ptr [eax+84h]
fld     [esp+34h+var_24]
fadd    qword ptr [eax+380h]
fild    [esp+34h+arg_8]
fcompp
fnstsw  ax
test    ah, 1
jnz     loc_73780F
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
mov     ecx, [esi+6C4h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ecx+388h]
fnstsw  ax
test    ah, 41h
jz      loc_73780F
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7376AD:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     edx, [esp+34h+arg_8] ; jumptable 00737455 case 22
mov     eax, [esp+34h+arg_0]
push    edx
push    ebp
push    eax
mov     ecx, esi
call    FootClass__MissionDispatch
mov     al, [esi+6AFh]
test    al, al
jnz     short loc_73771B
lea     ecx, [esp+34h+var_1C]
push    ecx
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue
cmp     word ptr [eax], 4000h
jz      short loc_73771B
mov     eax, [esi+674h]
mov     word ptr [esp+34h+arg_0], 4000h
test    eax, eax
jnz     short loc_7376FB
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_7376FB:                             ; CODE XREF: UnitClass__MissionDispatch+2BF↑j
mov     esi, [esi+674h]
mov     eax, [esp+34h+arg_0]
push    eax
push    esi
mov     edx, [esi]
call    dword ptr [edx+4Ch]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73771B:                             ; CODE XREF: UnitClass__MissionDispatch+297↑j
; UnitClass__MissionDispatch+2AE↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_73772F
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_73772F:                             ; CODE XREF: UnitClass__MissionDispatch+2F3↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_737780
push    0
mov     ecx, esi
call    Team__GetMember
mov     edi, eax
mov     al, [esi+418h]
test    al, al
jz      short loc_737780
test    edi, edi
jz      short loc_737780
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_737780
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 7
jnz     short loc_737780
mov     edx, [esi]
push    edi
push    15h
mov     ecx, esi
call    dword ptr [edx+278h]

loc_737780:                             ; CODE XREF: UnitClass__MissionDispatch+30D↑j
; UnitClass__MissionDispatch+322↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73778F:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+6C4h] ; jumptable 00737455 case 21
lea     ecx, [esi+114h]
mov     edi, [eax+5E0h]
call    HouseClass__SumPowerDrain
cmp     eax, edi
jnz     short loc_7377C9
mov     ecx, [esi+6C4h]
mov     edx, [ecx+3CCh]
push    edx
mov     eax, [ecx+3C8h]
lea     ecx, [esi+350h]
push    eax             ; double
call    Timer__StartDouble

loc_7377C9:                             ; CODE XREF: UnitClass__MissionDispatch+378↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 5
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7377D8:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+674h] ; jumptable 00737455 case 14
test    eax, eax
jnz     short loc_7377EC
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_7377EC:                             ; CODE XREF: UnitClass__MissionDispatch+3B0↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_737806
mov     eax, [esi+5A4h]
test    eax, eax
jz      short loc_73781E

loc_737806:                             ; CODE XREF: UnitClass__MissionDispatch+3CA↑j
cmp     dword ptr [esi+0ACh], 2
jnz     short loc_73781E

loc_73780F:                             ; CODE XREF: UnitClass__MissionDispatch+241↑j
; UnitClass__MissionDispatch+268↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73781E:                             ; CODE XREF: UnitClass__MissionDispatch+3D4↑j
; UnitClass__MissionDispatch+3DD↑j
push    0
mov     ecx, esi
call    Team__GetMember
cmp     eax, edi
jz      loc_7378B6
mov     edx, [esi+6C4h]
lea     ecx, [esi+114h]
mov     eax, [edx+5E0h]
mov     dword ptr [esp+34h+var_24], eax
call    HouseClass__SumPowerDrain
mov     edx, [edi]
mov     [esp+34h+arg_0], eax
fild    [esp+34h+arg_0]
mov     ecx, edi
fstp    [esp+34h+var_18+4]
call    dword ptr [edx+84h]
fld     [esp+34h+var_18+4]
fadd    qword ptr [eax+380h]
fild    dword ptr [esp+34h+var_24]
fcompp
fnstsw  ax
test    ah, 1
jnz     short loc_73780F
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     ecx, [esi+6C4h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ecx+388h]
fnstsw  ax
test    ah, 41h
jz      loc_73780F
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     short loc_7378B6
mov     edx, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [edx+278h]

loc_7378B6:                             ; CODE XREF: UnitClass__MissionDispatch+3F9↑j
; UnitClass__MissionDispatch+477↑j
mov     eax, [esi+5A4h]
test    eax, eax
jnz     loc_737994
mov     eax, [esi]
lea     ecx, [esp+34h+var_18]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     edx, [eax]
lea     eax, [esp+38h]
push    eax
mov     ecx, 87F7E8h
mov     [esp+3Ch], edx
call    CellCoord__To_CellObj
mov     edx, [edi]
push    0
mov     ecx, edi
mov     ebp, eax
call    dword ptr [edx+84h]
mov     eax, [eax+5B4h]
lea     ecx, [esi+55Ch]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
mov     ebx, eax
or      eax, 0FFFFFFFFh
test    edi, edi
jz      short loc_737941
test    byte ptr [edi+14h], 4
jz      short loc_737941
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+84h]
mov     eax, [eax+5B4h]
lea     ecx, [edi+55Ch]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex

loc_737941:                             ; CODE XREF: UnitClass__MissionDispatch+4E5↑j
; UnitClass__MissionDispatch+4EB↑j
cmp     ebx, eax
jz      short loc_737961
mov     edx, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [edx+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 0Eh
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737961:                             ; CODE XREF: UnitClass__MissionDispatch+513↑j
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_737990
cmp     dword ptr [ebp+0ECh], 2
jnz     short loc_737990
mov     eax, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [eax+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 0Eh
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737990:                             ; CODE XREF: UnitClass__MissionDispatch+539↑j
; UnitClass__MissionDispatch+542↑j
mov     ebp, [esp+34h+arg_4]

loc_737994:                             ; CODE XREF: UnitClass__MissionDispatch+48E↑j
mov     ecx, [esi+6C4h]
mov     eax, [ecx+5E0h]
test    eax, eax
jle     def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
lea     ecx, [esi+114h]
mov     [esp+34h+arg_4], eax
call    HouseClass__SumPowerDrain
mov     edx, [edi]
mov     [esp+34h+arg_0], eax
fild    [esp+34h+arg_0]
mov     ecx, edi
fstp    [esp+34h+var_18+4]
call    dword ptr [edx+84h]
fld     [esp+34h+var_18+4]
fadd    qword ptr [eax+380h]
fild    [esp+34h+arg_4]
fcompp
fnstsw  ax
test    ah, 1
jnz     def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     ecx, [esi+6C4h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ecx+388h]
fnstsw  ax
test    ah, 41h
jz      def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     ebx, [esp+34h+arg_8]
mov     ecx, esi
push    ebx
push    ebp
push    edi
call    FootClass__MissionDispatch
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_737A31
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_737A31:                             ; CODE XREF: UnitClass__MissionDispatch+5F5↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short loc_737A89
mov     al, [esi+6AFh]
test    al, al
jnz     short loc_737A89
mov     al, [esi+418h]
test    al, al
jnz     short loc_737A89
mov     eax, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     short loc_737A89
mov     [ebx], esi
mov     edx, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [edx+27Ch]
cmp     eax, 1
jz      short loc_737A89
mov     eax, [esi]
push    edi
push    3
mov     ecx, esi
call    dword ptr [eax+278h]

loc_737A89:                             ; CODE XREF: UnitClass__MissionDispatch+60F↑j
; UnitClass__MissionDispatch+619↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737A98:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+6C4h] ; jumptable 00737455 case 23
mov     cl, [eax+0E0Eh]
test    cl, cl
jnz     short loc_737AB2
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      short def_737455 ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35

loc_737AB2:                             ; CODE XREF: UnitClass__MissionDispatch+676↑j
mov     al, [esi+6D1h]
test    al, al
jz      short def_737455 ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     edx, [esi]
push    0
push    1
push    (offset dword_A8ED54+8E294h)
mov     ecx, esi
mov     byte ptr [esi+6D1h], 0
call    dword ptr [edx+174h]
mov     eax, [esi]
push    0
push    0Ah
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+200h]
test    al, al
jz      short def_737455 ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1ECh]

def_737455:                             ; CODE XREF: UnitClass__MissionDispatch+17↑j
; UnitClass__MissionDispatch+25↑j ...
mov     eax, [esp+34h+arg_8] ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     ecx, esi
push    eax
push    ebp
push    edi
call    FootClass__MissionDispatch
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737B14:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     edx, [esi]      ; jumptable 00737455 case 3
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Ch
jnz     short loc_737B31
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_737B31:                             ; CODE XREF: UnitClass__MissionDispatch+6F1↑j
mov     ecx, [esp+34h+arg_8]
mov     edx, [esp+34h+arg_0]
push    ecx
push    ebp
push    edx
mov     ecx, esi
call    FootClass__MissionDispatch
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
*/
}

// ============================================================
// Phase 3: Movement
// ============================================================

// IDA: 0x7359F0 (CalcMoveTarget, 1730B)
// 0x7359f0
int UnitClass::CalcMoveTarget()
{
// [IDA decompile]
void __thiscall UnitClass_CalcMoveTarget(int *this)
{
  _DWORD *v2; // eax
  int *v3; // edi
  int *v4; // eax
  _DWORD *v5; // ebp
  int *v6; // eax
  _WORD *Height; // eax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  void *v12; // eax
  int GroundHeight; // ebx
  int v14; // eax
  char v15; // bl
  int v16; // ebx
  int *v17; // eax
  _DWORD *v18; // eax
  int *Coords; // ebp
  _DWORD *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // eax
  int v27; // edi
  unsigned int v28; // ebp
  double v29; // st7
  double v30; // st7
  int v31; // eax
  bool v32; // zf
  signed int v33; // ebx
  double v34; // st7
  int v35; // eax
  int v36; // edx
  int v37; // ebp
  int v38; // edi
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  bool v43; // zf
  signed int v44; // ebp
  double v45; // st7
  __int64 v46; // rax
  _DWORD *v47; // ebx
  int v48; // ebp
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int i; // ebp
  _DWORD *v53; // edi
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // eax
  int v58; // edx
  void *v59; // edx
  int v60; // eax
  __int16 *v61; // eax
  int Type; // eax
  int v63; // [esp+18h] [ebp-68h]
  double v64; // [esp+18h] [ebp-68h]
  int v65; // [esp+24h] [ebp-5Ch]
  int v66; // [esp+24h] [ebp-5Ch]
  int v67; // [esp+24h] [ebp-5Ch]
  int v68; // [esp+24h] [ebp-5Ch]
  int v69; // [esp+28h] [ebp-58h]
  double v70; // [esp+28h] [ebp-58h]
  double v71; // [esp+28h] [ebp-58h]
  double v72[2]; // [esp+30h] [ebp-50h] BYREF
  double v73; // [esp+40h] [ebp-40h] BYREF
  int v74; // [esp+50h] [ebp-30h] BYREF
  void *v75; // [esp+54h] [ebp-2Ch]
  int v76; // [esp+58h] [ebp-28h] BYREF
  void **v77; // [esp+5Ch] [ebp-24h] BYREF
  void *Block; // [esp+60h] [ebp-20h]
  int v79; // [esp+64h] [ebp-1Ch]
  int v80; // [esp+68h] [ebp-18h]
  int v81; // [esp+6Ch] [ebp-14h]
  int v82; // [esp+70h] [ebp-10h] BYREF
  int v83; // [esp+74h] [ebp-Ch] BYREF
  int v84; // [esp+78h] [ebp-8h]
  int v85; // [esp+7Ch] [ebp-4h]

  if ( *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + *((char *)this + 1668)) + 4 * *((char *)this + 1669) + 48) != -1 )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 72))(this);
    v3 = this + 346;
    v4 = Vector3::Subtract(v2, &v76, this + 346);
    Coord::Length(v4);
    v5 = (_DWORD *)*((_DWORD *)MEMORY[0x8B413C] + *((char *)this + 1668));
    v6 = (int *)(*(int (__thiscall **)(int *, int *, int *))(*this + 72))(this, &v82, this + 346);
    Height = Cell::GetHeight(v72, v6, &v83);
    v8 = *(this + 433);
    LODWORD(v72[0]) = *(_DWORD *)Height;
    v63 = Math::RoundToInt((double)*(int *)(v8 + 1656) * 1.5);
    v65 = v5[10];
    v74 = ((__int16)v65 << 8) + 128;
    v9 = (__int16)v5[9];
    v10 = (SHIWORD(v65) << 8) + 128;
    v66 = v5[9];
    v75 = (void *)v10;
    v76 = 0;
    v79 = 0;
    v11 = v5[112];
    v77 = (void **)((v9 << 8) + 128);
    v12 = (void *)((SHIWORD(v66) << 8) + 128);
    v67 = v11;
    Block = v12;
    GroundHeight = Cell::GetGroundHeight(&v77);
    v68 = (Cell::GetGroundHeight(&v74) - GroundHeight) / v67;
    if ( v69 > v63 )
    {
      v37 = v5[*((char *)this + 1669) + 12];
      v83 = *(this + 39);
      v84 = *(this + 40);
      v38 = *(this + 41);
      LODWORD(v72[0]) = SLOWORD(v72[0]) - 0x3FFF;
      v73 = (double)SLODWORD(v72[0]) * -0.00009587672516830327;
      v39 = HIDWORD(v73);
      v71 = (double)v63;
      v72[0] = (double)v84;
      v40 = Math::SinCos(v73);
      LODWORD(v72[0]) = Math::RoundToInt(v72[0] - v40 * v71);
      v41 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v39, LODWORD(v73))));
      v42 = Math::RoundToInt(v41 * v71 + (double)v83);
      Coord::Subtract(&v77, v42, SLODWORD(v72[0]), v38);
      v44 = v37 & 0x80000001;
      v43 = v44 == 0;
      v74 = (int)v77;
      v75 = Block;
      v76 = v79;
      if ( v44 < 0 )
        v43 = (((_BYTE)v44 - 1) | 0xFFFFFFFE) == -1;
      if ( v43 )
        v45 = 256.0;
      else
        v45 = 362.0386719675124;
      v46 = Math::RoundToInt(v45);
      v76 = v46;
      (*(void (__fastcall **)(int *, _DWORD, int *))(*this + 436))(this, HIDWORD(v46), &v74);
      return;
    }
    v14 = *this;
    v15 = *((_BYTE *)this + 1669) + 1;
    *((_BYTE *)this + 1669) = v15;
    v16 = v5[v15 + 12];
    (*(void (__thiscall **)(int *, int *))(v14 + 436))(this, this + 346);
    if ( v16 != -1 )
    {
      v17 = Coord::Subtract(
              &v83,
              MEMORY[0x89F6D8][2 * (v16 & 7)] + *v3,
              *(this + 347) + MEMORY[0x89F6DC][2 * (v16 & 7)],
              *(this + 348));
      v74 = *v17;
      v75 = (void *)v17[1];
      v76 = v17[2];
      v18 = Coord::To_Cell(&MEMORY[0x87F7E8], this + 346);
      Coords = CellClass::GetCoords(v18, (int *)&v73);
      v20 = Coord::To_Cell(&MEMORY[0x87F7E8], &v74);
      v21 = CellClass::GetCoords(v20, (int *)v72);
      v22 = *v21 - *Coords + *v3;
      v23 = v21[1] - Coords[1] + *(this + 347);
      v24 = *(this + 348);
      *v3 = v22;
      *(this + 347) = v23;
      *(this + 348) = v24;
      *(this + 348) += v68;
      v25 = (int *)(*(int (__thiscall **)(int *, int *))(*this + 72))(this, &v83);
      v26 = (__int16)*(_DWORD *)Cell::GetHeight(v72, v25, this + 346);
      v83 = *(this + 39);
      v84 = *(this + 40);
      v27 = *(this + 41);
      LODWORD(v72[0]) = v63 - v69;
      v73 = (double)(v26 - 0x3FFF) * -0.00009587672516830327;
      v28 = HIDWORD(v73);
      v64 = (double)(v63 - v69);
      v70 = (double)v84;
      v29 = Math::SinCos(v73);
      LODWORD(v70) = Math::RoundToInt(v70 - v29 * v64);
      v30 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v28, LODWORD(v73))));
      v31 = Math::RoundToInt(v30 * v64 + (double)v83);
      Coord::Subtract(&v74, v31, SLODWORD(v70), v27);
      v33 = v16 & 0x80000001;
      v32 = v33 == 0;
      v77 = (void **)v74;
      Block = v75;
      v79 = v76;
      if ( v33 < 0 )
        v32 = (((_BYTE)v33 - 1) | 0xFFFFFFFE) == -1;
      if ( v32 )
        v34 = 256.0;
      else
        v34 = 362.0386719675124;
      v35 = Math::RoundToInt(v34);
      v36 = *this;
      v79 = v35;
      (*(void (__thiscall **)(int *, void ***))(v36 + 436))(this, &v77);
      return;
    }
  }
  v83 = *(this + 39);
  v84 = *(this + 40);
  v85 = *(this + 41);
  v47 = Coord::To_Cell(&MEMORY[0x87F7E8], &v83);
  v48 = v47[57];
  if ( v48 )
  {
    ObjectVector::Construct(&v77, 0, 0);
    v49 = v79;
    v50 = 10;
    v77 = &DynamicVectorClass<ObjectClass *>::`vftable';
    v82 = 10;
    v81 = 0;
    while ( 1 )
    {
      if ( v81 < v49 )
        goto LABEL_24;
      if ( (BYTE1(v80) || !v49) && v50 > 0 )
        break;
LABEL_26:
      v48 = *(_DWORD *)(v48 + 48);
      if ( !v48 )
      {
        for ( i = 0; i < v81; ++i )
        {
          v53 = (_DWORD *)*((_DWORD *)Block + i);
          if ( (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 1
            || (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 15 )
          {
            if ( !v53[413] )
              WinAPI::Wrapper(-2147467261);
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v53[413] + 16))(v53[413]) )
            {
              v54 = *v53;
              v83 = 0;
              v84 = 0;
              v85 = 0;
              (*(void (__thiscall **)(_DWORD *, int *, int, int))(v54 + 372))(v53, &v83, 1, 1);
            }
          }
        }
        (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1348))(this, 0, 0);
        v77 = &VectorClass<ObjectClass *>::`vftable';
        if ( Block && BYTE1(v80) )
          __3_YAXPAX_Z(Block);
        return;
      }
      v50 = v82;
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v50 + v49, 0) )
    {
LABEL_24:
      v51 = v81++;
      *((_DWORD *)Block + v51) = v48;
    }
    v49 = v79;
    goto LABEL_26;
  }
  v55 = *(this + 348);
  LODWORD(v72[0]) = *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + *((char *)this + 1668)) + 40);
  v85 = v55;
  v84 = (SWORD1(v72[0]) << 8) + 128;
  v83 = (SLOWORD(v72[0]) << 8) + 128;
  (*(void (__thiscall **)(int *, int *))(*this + 436))(this, &v83);
  v56 = *this;
  *((_BYTE *)this + 1668) = -1;
  (*(void (__thiscall **)(int *, int))(v56 + 292))(this, 1);
  if ( (_DWORD *)*(this + 361) == v47 )
  {
    v57 = *this;
    v77 = 0;
    Block = 0;
    v79 = 0;
    (*(void (__thiscall **)(int *, void ***, int, int))(v57 + 372))(this, &v77, 1, 1);
  }
  v58 = *this;
  *((_BYTE *)this + 1675) = 1;
  (*(void (__thiscall **)(int *, int))(v58 + 396))(this, 2);
  (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1348))(this, 0, 1072693248);
  v59 = (void *)*(this + 40);
  v60 = *(this + 41);
  v77 = (void **)*(this + 39);
  Block = v59;
  v79 = v60;
  v61 = (__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v77);
  Type = InfantryClass::GetType(v61);
  if ( Type )
  {
    LOWORD(v72[0]) = (((unsigned __int16)*(_DWORD *)(Type + 44) << 13) - 24577) & 0xE000;
    FacingClass::Set_SyncLog(v72);
  }
}

/* ASM:
Block           = dword ptr -20h
var_1C          = dword ptr -1Ch
var_18          = dword ptr -18h
var_14          = dword ptr -14h
var_10          = dword ptr -10h
var_C           = dword ptr -0Ch
var_8           = dword ptr -8
var_4           = dword ptr -4

push    ebp
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 70h
push    ebx
mov     edx, ds:8B413Ch
push    ebp
push    esi
mov     esi, ecx
push    edi
movsx   eax, byte ptr [esi+684h]
movsx   ecx, byte ptr [esi+685h]
mov     eax, [edx+eax*4]
cmp     dword ptr [eax+ecx*4+30h], 0FFFFFFFFh
setz    al
test    al, al
jnz     loc_735E36
mov     edx, [esi]
lea     eax, [esp+80h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
lea     edi, [esi+568h]
lea     ecx, [esp+84h+var_28]
push    edi
push    ecx
mov     ecx, eax
call    Vector3__Subtract
mov     ecx, eax
call    Coord__Length
movsx   edx, byte ptr [esi+684h]
mov     dword ptr [esp+84h+var_60+4], eax
mov     eax, ds:8B413Ch
push    edi
mov     ecx, esi
mov     ebp, [eax+edx*4]
mov     edx, [esi]
lea     eax, [esp+88h+var_10]
push    eax
call    dword ptr [edx+48h]
push    eax
lea     ecx, [esp+88h+var_50]
call    Cell__GetHeight
mov     edx, [esi+6C4h]
mov     ecx, [eax]
mov     [esp+80h+var_50], ecx
fild    dword ptr [edx+678h]
fmul    ds:dbl_7E48F0
call    Math__RoundToInt
mov     dword ptr [esp+80h+var_68], eax
mov     eax, [ebp+28h]
mov     dword ptr [esp+80h+var_60+4], eax
movsx   ecx, word ptr [esp+80h+var_60+6]
movsx   eax, ax
shl     eax, 8
add     eax, 80h
mov     [esp+80h+var_30], eax
mov     eax, [ebp+24h]
shl     ecx, 8
movsx   edx, ax
add     ecx, 80h
mov     dword ptr [esp+80h+var_60+4], eax
movsx   eax, word ptr [esp+80h+var_60+6]
mov     [esp+80h+var_2C], ecx
xor     ecx, ecx
shl     edx, 8
add     edx, 80h
mov     [esp+80h+var_28], ecx
mov     [esp+80h+var_1C], ecx
mov     ecx, [ebp+1C0h]
mov     [esp+80h+var_24], edx
lea     edx, [esp+80h+var_24]
shl     eax, 8
add     eax, 80h
mov     dword ptr [esp+80h+var_60+4], ecx
push    edx
mov     ecx, 87F7E8h
mov     [esp+84h+Block], eax
call    Cell__GetGroundHeight
mov     ebx, eax
lea     eax, [esp+80h+var_30]
push    eax
mov     ecx, 87F7E8h
call    Cell__GetGroundHeight
sub     eax, ebx
mov     ecx, dword ptr [esp+80h+var_68]
cdq
idiv    dword ptr [esp+80h+var_60+4]
mov     dword ptr [esp+80h+var_60+4], eax
mov     eax, dword ptr [esp+80h+var_58]
cmp     eax, ecx
jg      loc_735D35
mov     bl, [esi+685h]
mov     eax, [esi]
inc     bl
push    edi
movsx   edx, bl
mov     [esi+685h], bl
mov     ecx, esi
mov     ebx, [ebp+edx*4+30h]
cmp     ebx, 0FFFFFFFFh
setz    byte ptr [esp+84h+var_6C+3]
call    dword ptr [eax+1B4h]
mov     al, byte ptr [esp+80h+var_6C+3]
test    al, al
jnz     loc_735E36
mov     ecx, ebx
mov     ebp, [edi+4]
mov     edx, [edi+8]
and     ecx, 7
push    edx
mov     edx, [edi]
lea     eax, ds:89F6D8h[ecx*8]
mov     ecx, ds:89F6DCh[ecx*8]
add     ecx, ebp
push    ecx
mov     ecx, [eax]
add     edx, ecx
lea     ecx, [esp+88h+var_C]
push    edx
call    Coord__Subtract
mov     ecx, [eax]
mov     [esp+80h+var_30], ecx
lea     ecx, [esp+80h+var_40]
mov     edx, [eax+4]
push    ecx
mov     [esp+84h+var_2C], edx
push    edi
mov     eax, [eax+8]
mov     ecx, 87F7E8h
mov     [esp+88h+var_28], eax
call    Coord__To_Cell
mov     ecx, eax
call    CellClass__GetCoords
mov     ebp, eax
lea     edx, [esp+80h+var_50]
lea     eax, [esp+80h+var_30]
push    edx
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    CellClass__GetCoords
mov     ecx, [eax]
mov     edx, [ebp+0]
mov     eax, [eax+4]
sub     ecx, edx
mov     edx, [ebp+4]
mov     ebp, edi
sub     eax, edx
mov     edx, [edi]
add     edx, ecx
mov     ecx, [edi+4]
add     ecx, eax
mov     eax, [edi+8]
mov     [ebp+0], edx
push    edi
mov     [ebp+4], ecx
mov     ecx, dword ptr [esp+84h+var_60+4]
mov     [ebp+8], eax
mov     edx, [esi+570h]
add     edx, ecx
lea     eax, [esp+84h+var_C]
mov     [esi+570h], edx
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
push    eax
lea     ecx, [esp+88h+var_50]
call    Cell__GetHeight
mov     eax, [eax]
lea     ecx, [esi+9Ch]
movsx   eax, ax
mov     edx, [ecx]
mov     [esp+80h+var_C], edx
mov     edx, [ecx+4]
mov     [esp+80h+var_8], edx
mov     edx, dword ptr [esp+80h+var_58]
mov     edi, [ecx+8]
mov     ecx, dword ptr [esp+80h+var_68]
sub     ecx, edx
sub     eax, 3FFFh
mov     dword ptr [esp+80h+var_58], eax
mov     [esp+80h+var_50], ecx
fild    dword ptr [esp+80h+var_58]
mov     dword ptr [esp+80h+var_68], ecx
fmul    ds:dbl_7E2810
fstp    [esp+80h+var_40]
fild    dword ptr [esp+80h+var_68]
mov     ebp, dword ptr [esp+80h+var_40+4]
mov     ecx, dword ptr [esp+80h+var_40]
push    ebp
push    ecx             ; double
fstp    [esp+88h+var_68]
fild    [esp+88h+var_8]
fstp    [esp+88h+var_58]
call    Math__SinCos
fmul    [esp+88h+var_68]
fsubr   [esp+88h+var_58]
call    Math__RoundToInt
mov     edx, dword ptr [esp+88h+var_40]
push    ebp
push    edx             ; double
mov     dword ptr [esp+90h+var_58], eax
call    Math__ArcTan2
fmul    [esp+90h+var_68]
add     esp, 10h
fiadd   [esp+80h+var_C]
call    Math__RoundToInt
mov     ecx, dword ptr [esp+80h+var_58]
push    edi
push    ecx
push    eax
lea     ecx, [esp+8Ch+var_30]
call    Coord__Subtract
mov     edx, [esp+80h+var_30]
mov     eax, [esp+80h+var_2C]
mov     ecx, [esp+80h+var_28]
and     ebx, 80000001h
mov     [esp+80h+var_24], edx
mov     [esp+80h+Block], eax
mov     [esp+80h+var_1C], ecx
jns     short loc_735CF5
dec     ebx
or      ebx, 0FFFFFFFEh
inc     ebx

loc_735CF5:                             ; CODE XREF: UnitClass__CalcMoveTarget+2FE↑j
jz      short loc_735CFF
fld     ds:dbl_7EB5B8
jmp     short loc_735D05
; ---------------------------------------------------------------------------

loc_735CFF:                             ; CODE XREF: UnitClass__CalcMoveTarget:loc_735CF5↑j
fld     ds:dbl_7E1710

loc_735D05:                             ; CODE XREF: UnitClass__CalcMoveTarget+30D↑j
fild    [esp+80h+var_50]
fdiv    st, st(1)
fimul   dword ptr [esp+80h+var_60+4]
fiadd   [esp+80h+var_28]
call    Math__RoundToInt
mov     edx, [esi]
mov     [esp+80h+var_1C], eax
lea     eax, [esp+80h+var_24]
mov     ecx, esi
push    eax
fstp    st
call    dword ptr [edx+1B4h]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_735D35:                             ; CODE XREF: UnitClass__CalcMoveTarget+140↑j
movsx   ecx, byte ptr [esi+685h]
lea     edx, [esi+9Ch]
mov     ebp, [ebp+ecx*4+30h]
mov     eax, [edx]
mov     [esp+80h+var_C], eax
mov     ecx, [edx+4]
mov     [esp+80h+var_8], ecx
mov     edi, [edx+8]
movsx   edx, word ptr [esp+80h+var_50]
sub     edx, 3FFFh
mov     [esp+80h+var_50], edx
fild    [esp+80h+var_50]
fmul    ds:dbl_7E2810
fstp    [esp+80h+var_40]
fild    dword ptr [esp+80h+var_68]
mov     ebx, dword ptr [esp+80h+var_40+4]
mov     eax, dword ptr [esp+80h+var_40]
push    ebx
push    eax             ; double
fstp    [esp+88h+var_58]
fild    [esp+88h+var_8]
fstp    qword ptr [esp+88h+var_50]
call    Math__SinCos
fmul    [esp+88h+var_58]
fsubr   qword ptr [esp+88h+var_50]
call    Math__RoundToInt
mov     ecx, dword ptr [esp+88h+var_40]
push    ebx
push    ecx             ; double
mov     [esp+90h+var_50], eax
call    Math__ArcTan2
fmul    [esp+90h+var_58]
add     esp, 10h
fiadd   [esp+80h+var_C]
call    Math__RoundToInt
mov     edx, [esp+80h+var_50]
push    edi
push    edx
push    eax
lea     ecx, [esp+8Ch+var_24]
call    Coord__Subtract
mov     eax, [esp+80h+var_24]
mov     ecx, [esp+80h+Block]
mov     edx, [esp+80h+var_1C]
and     ebp, 80000001h
mov     [esp+80h+var_30], eax
mov     [esp+80h+var_2C], ecx
mov     [esp+80h+var_28], edx
jns     short loc_735DF6
dec     ebp
or      ebp, 0FFFFFFFEh
inc     ebp

loc_735DF6:                             ; CODE XREF: UnitClass__CalcMoveTarget+3FF↑j
jz      short loc_735E00
fld     ds:dbl_7EB5B8
jmp     short loc_735E06
; ---------------------------------------------------------------------------

loc_735E00:                             ; CODE XREF: UnitClass__CalcMoveTarget:loc_735DF6↑j
fld     ds:dbl_7E1710

loc_735E06:                             ; CODE XREF: UnitClass__CalcMoveTarget+40E↑j
fld     [esp+80h+var_58]
fdiv    st, st(1)
fimul   dword ptr [esp+80h+var_60+4]
fiadd   [esp+80h+var_1C]
call    Math__RoundToInt
lea     ecx, [esp+80h+var_30]
mov     [esp+80h+var_28], eax
mov     eax, [esi]
push    ecx
mov     ecx, esi
fstp    st
call    dword ptr [eax+1B4h]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_735E36:                             ; CODE XREF: UnitClass__CalcMoveTarget+30↑j
; UnitClass__CalcMoveTarget+174↑j
lea     edi, [esi+9Ch]
mov     edx, edi
mov     eax, [edx]
mov     [esp+80h+var_C], eax
lea     eax, [esp+80h+var_C]
mov     ecx, [edx+4]
push    eax
mov     [esp+84h+var_8], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+84h+var_4], edx
call    Coord__To_Cell
mov     ebx, eax
mov     ebp, [ebx+0E4h]
test    ebp, ebp
jz      loc_735FA1
push    0
push    0
lea     ecx, [esp+88h+var_24]
call    ObjectVector__Construct
mov     eax, [esp+80h+var_1C]
mov     ecx, 0Ah
xor     ebx, ebx
mov     [esp+80h+var_24], offset ??_7?$DynamicVectorClass@PAVObjectClass@@@@6B@ ; const DynamicVectorClass<ObjectClass *>::`vftable'
mov     [esp+80h+var_10], ecx
mov     [esp+80h+var_14], ebx
jmp     short loc_735EA2
; ---------------------------------------------------------------------------

loc_735E9E:                             ; CODE XREF: UnitClass__CalcMoveTarget+4F6↓j
mov     ecx, [esp+80h+var_10]

loc_735EA2:                             ; CODE XREF: UnitClass__CalcMoveTarget+4AC↑j
cmp     [esp+80h+var_14], eax
jl      short loc_735ECB
mov     dl, byte ptr [esp+80h+var_18+1]
test    dl, dl
jnz     short loc_735EB4
cmp     eax, ebx
jnz     short loc_735EE1

loc_735EB4:                             ; CODE XREF: UnitClass__CalcMoveTarget+4BE↑j
cmp     ecx, ebx
jle     short loc_735EE1
mov     edx, [esp+80h+var_24]
add     eax, ecx
push    ebx
push    eax
lea     ecx, [esp+88h+var_24]
call    dword ptr [edx+8]
test    al, al
jz      short loc_735EDD

loc_735ECB:                             ; CODE XREF: UnitClass__CalcMoveTarget+4B6↑j
mov     ecx, [esp+80h+var_14]
mov     eax, ecx
inc     ecx
mov     [esp+80h+var_14], ecx
mov     ecx, [esp+80h+Block]
mov     [ecx+eax*4], ebp

loc_735EDD:                             ; CODE XREF: UnitClass__CalcMoveTarget+4D9↑j
mov     eax, [esp+80h+var_1C]

loc_735EE1:                             ; CODE XREF: UnitClass__CalcMoveTarget+4C2↑j
; UnitClass__CalcMoveTarget+4C6↑j
mov     ebp, [ebp+30h]
cmp     ebp, ebx
jnz     short loc_735E9E
mov     eax, [esp+80h+var_14]
xor     ebp, ebp
cmp     eax, ebx
jle     short loc_735F64

loc_735EF2:                             ; CODE XREF: UnitClass__CalcMoveTarget+572↓j
mov     edx, [esp+80h+Block]
mov     edi, [edx+ebp*4]
mov     ecx, edi
mov     eax, [edi]
call    dword ptr [eax+2Ch]
cmp     eax, 1
jz      short loc_735F11
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_735F5B

loc_735F11:                             ; CODE XREF: UnitClass__CalcMoveTarget+513↑j
cmp     [edi+674h], ebx
jnz     short loc_735F23
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_735F23:                             ; CODE XREF: UnitClass__CalcMoveTarget+527↑j
mov     eax, [edi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_735F5B
mov     edx, [edi]
push    1
lea     eax, [esp+84h+var_C]
push    1
push    eax
mov     ecx, edi
mov     [esp+8Ch+var_C], ebx
mov     [esp+8Ch+var_8], ebx
mov     [esp+8Ch+var_4], ebx
call    dword ptr [edx+174h]

loc_735F5B:                             ; CODE XREF: UnitClass__CalcMoveTarget+51F↑j
; UnitClass__CalcMoveTarget+541↑j
mov     eax, [esp+80h+var_14]
inc     ebp
cmp     ebp, eax
jl      short loc_735EF2

loc_735F64:                             ; CODE XREF: UnitClass__CalcMoveTarget+500↑j
mov     edx, [esi]
push    ebx
push    ebx
mov     ecx, esi
call    dword ptr [edx+544h]
mov     eax, [esp+80h+Block]
mov     [esp+80h+var_24], offset ??_7?$VectorClass@PAVObjectClass@@@@6B@ ; const VectorClass<ObjectClass *>::`vftable'
cmp     eax, ebx
jz      loc_7360AA
mov     cl, byte ptr [esp+80h+var_18+1]
test    cl, cl
jz      loc_7360AA
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_735FA1:                             ; CODE XREF: UnitClass__CalcMoveTarget+47E↑j
movsx   eax, byte ptr [esi+684h]
mov     ecx, ds:8B413Ch
mov     edx, [ecx+eax*4]
mov     eax, [edx+28h]
mov     edx, [esi+570h]
mov     [esp+80h+var_50], eax
mov     [esp+80h+var_4], edx
movsx   ecx, word ptr [esp+80h+var_50+2]
movsx   eax, ax
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
add     eax, 80h
mov     [esp+80h+var_8], ecx
lea     ecx, [esp+80h+var_C]
mov     [esp+80h+var_C], eax
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B4h]
mov     edx, [esi]
push    1
mov     ecx, esi
mov     byte ptr [esi+684h], 0FFh
call    dword ptr [edx+124h]
cmp     [esi+5A4h], ebx
jnz     short loc_736030
mov     eax, [esi]
push    1
lea     ecx, [esp+84h+var_24]
push    1
xor     ebx, ebx
push    ecx
mov     ecx, esi
mov     [esp+8Ch+var_24], ebx
mov     [esp+8Ch+Block], ebx
mov     [esp+8Ch+var_1C], ebx
call    dword ptr [eax+174h]
jmp     short loc_736032
; ---------------------------------------------------------------------------

loc_736030:                             ; CODE XREF: UnitClass__CalcMoveTarget+61B↑j
xor     ebx, ebx

loc_736032:                             ; CODE XREF: UnitClass__CalcMoveTarget+63E↑j
mov     edx, [esi]
push    2
mov     ecx, esi
mov     byte ptr [esi+68Bh], 1
call    dword ptr [edx+18Ch]
mov     eax, [esi]
push    3FF00000h
push    ebx
mov     ecx, esi
call    dword ptr [eax+544h]
mov     ecx, [edi]
mov     edx, [edi+4]
mov     eax, [edi+8]
mov     [esp+80h+var_24], ecx
lea     ecx, [esp+80h+var_24]
mov     [esp+80h+Block], edx
push    ecx
mov     ecx, 87F7E8h
mov     [esp+84h+var_1C], eax
call    Coord__To_Cell
mov     ecx, eax
call    InfantryClass__GetType
cmp     eax, ebx
jz      short loc_7360AA
mov     edx, [eax+2Ch]
lea     eax, [esp+80h+var_50]
shl     edx, 0Dh
sub     edx, 6001h
push    eax
and     edx, 0FFFFE000h
lea     ecx, [esi+388h]
mov     word ptr [esp+84h+var_50], dx
call    FacingClass__Set_SyncLog

loc_7360AA:                             ; CODE XREF: UnitClass__CalcMoveTarget+58E↑j
; UnitClass__CalcMoveTarget+59A↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
*/
}

// IDA: 0x741970 (AssignDestination_SyncLog, 6167B)
// 0x741970
int UnitClass::AssignDestination_SyncLog()
{
// [IDA decompile]
void __thiscall UnitClass::AssignDestination_SyncLog(_DWORD *this, __int64 a2)
{
  __int16 *v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  _DWORD *Value; // esi
  char v9; // al
  int Member; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int *v13; // esi
  int v14; // edx
  __int16 *v15; // eax
  __int16 v16; // dx
  _DWORD *v17; // eax
  int *v18; // eax
  void *v19; // eax
  int v20; // eax
  int v21; // edi
  _DWORD *v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int TileIndex; // eax
  int v31; // edx
  _DWORD *v32; // eax
  void *v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  char v36; // bl
  int RegionMap; // esi
  int v38; // esi
  double v39; // st7
  char v40; // al
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  _DWORD *v44; // ebx
  int v45; // edi
  int v46; // eax
  int v47; // esi
  _DWORD *v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int (__stdcall ***v57)(_DWORD, void *, __int64 *); // eax
  int v58; // esi
  int v59; // edi
  int v60; // ecx
  int v61; // esi
  int v62; // esi
  int v63; // eax
  _DWORD *v64; // esi
  int v65; // eax
  int (__stdcall ***Checked)(_DWORD, void *, __int64 *); // eax
  int v67; // esi
  int v68; // eax
  int v69; // edi
  _DWORD *v70; // eax
  int GroundHeight; // eax
  _DWORD *v72; // eax
  _DWORD *v73; // eax
  void *v74; // eax
  _DWORD *v75; // eax
  void *v76; // eax
  _DWORD *v77; // eax
  int v78; // eax
  __int16 *v79; // eax
  int v80; // eax
  int **v81; // ebx
  int (__stdcall ***v82)(_DWORD, void *, __int64 *); // eax
  int v83; // esi
  int v84; // eax
  int v85; // edi
  int v86; // eax
  int InstanceCOM; // eax
  int v88; // eax
  int (__stdcall ***v89)(_DWORD, void *, __int64 *); // eax
  int v90; // esi
  int v91; // edi
  int v92; // ecx
  int v93; // esi
  int *v94; // esi
  int v95; // eax
  int *v96; // esi
  int v97; // edi
  unsigned __int8 *v98; // eax
  int *v99; // ebx
  void *v100; // edi
  int *v101; // esi
  int *v102; // esi
  int v103; // eax
  int v104; // ecx
  int v105; // ecx
  int v106; // edx
  int v107; // eax
  _DWORD *v108; // ecx
  int v109; // eax
  int v110; // eax
  _DWORD *v111; // esi
  int v112; // eax
  int *v113; // ecx
  int *v114; // edx
  int v115; // eax
  int v116; // ebx
  int v117; // eax
  int v118; // ebx
  int v119; // kr28_4
  int v120; // eax
  int v121; // eax
  int v122; // edx
  int v123; // [esp+D0h] [ebp-BCh]
  int v124; // [esp+D0h] [ebp-BCh]
  char v125; // [esp+10Fh] [ebp-7Dh]
  char v126; // [esp+110h] [ebp-7Ch]
  char v127; // [esp+110h] [ebp-7Ch]
  char IsBuildableAdvanced; // [esp+112h] [ebp-7Ah]
  char v129; // [esp+113h] [ebp-79h]
  int v130; // [esp+114h] [ebp-78h] BYREF
  __int64 v131; // [esp+118h] [ebp-74h] BYREF
  int *v132; // [esp+120h] [ebp-6Ch]
  int ppv; // [esp+124h] [ebp-68h] BYREF
  int v134; // [esp+128h] [ebp-64h] BYREF
  int *v135; // [esp+12Ch] [ebp-60h] BYREF
  int *v136; // [esp+130h] [ebp-5Ch] BYREF
  int *v137; // [esp+134h] [ebp-58h] BYREF
  __int64 v138; // [esp+138h] [ebp-54h] BYREF
  int v139; // [esp+140h] [ebp-4Ch]
  _DWORD v140[2]; // [esp+144h] [ebp-48h] BYREF
  int v141; // [esp+14Ch] [ebp-40h]
  _DWORD v142[3]; // [esp+150h] [ebp-3Ch] BYREF
  __int16 v143[4]; // [esp+15Ch] [ebp-30h] BYREF
  int v144; // [esp+164h] [ebp-28h]
  _BYTE v145[16]; // [esp+16Ch] [ebp-20h] BYREF
  _BYTE v146[16]; // [esp+17Ch] [ebp-10h] BYREF

  v3 = (__int16 *)a2;
  if ( *(_BYTE *)(*(this + 433) + 3434) )
  {
    if ( !(_DWORD)a2 )
    {
      v4 = *(this + 361);
      if ( v4 )
      {
        v5 = *(this + 173);
        if ( v5 )
        {
          if ( v4 == v5
            || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 11
            && ((v6 = *(this + 361)) != 0
              ? (v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(*(this + 361)) == 11 ? v6 : 0)
              : (v7 = 0),
                *(_DWORD *)(v7 + 228) == *(this + 173))
            || (LOWORD(v136) = 0x4000,
                Value = ProgressTimer::GetValue((_WORD *)this + 452, &v138),
                LOWORD(v137) = *(_WORD *)ObjectClass::CalcTargetFacing(this, (int *)&v135, *(this + 173))
                             - *(_WORD *)Value,
                UnitClass::CompareCoordinateMagnitude((__int16 *)&v136, (__int16 *)&v137)) )
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 1 )
              (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, 1);
            return;
          }
        }
      }
    }
  }
  if ( (_DWORD)a2 != *(this + 361) || *((_BYTE *)this + 504) )
  {
    v9 = *((_BYTE *)this + 1760);
    *((_BYTE *)this + 504) = 0;
    if ( v9 )
    {
      if ( !*(this + 172) )
      {
LABEL_366:
        FootClass::ClearPathIndex(this);
        return;
      }
    }
    else if ( *((_BYTE *)this + 1761) || *((_BYTE *)this + 1762) )
    {
      goto LABEL_366;
    }
    if ( Team::AllMembersValid(this) )
    {
      if ( *(int *)(*(this + 433) + 1504) > 0 )
      {
        Member = Team::GetMember(this, 0);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 15 )
        {
          if ( !(_DWORD)a2 )
            goto LABEL_49;
          if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && !Array::Contains(this, a2) )
            (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
        }
      }
    }
    if ( (_DWORD)a2 )
    {
      if ( Team::AllMembersValid(this) )
      {
        if ( !(*(int (__thiscall **)(_DWORD *))(*this + 388))(this) )
        {
          if ( *((_BYTE *)this + 1048) )
          {
            v11 = Team::GetMember(this, 0);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 )
            {
              v12 = (_DWORD *)Team::GetMember(this, 0);
              if ( *(_BYTE *)(v12[433] + 3580) )
              {
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v12 + 1152))(v12, 0, 1);
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 25);
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
              }
            }
          }
        }
      }
      v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 6 ? (int *)a2 : 0;
LABEL_36:
      v14 = *this;
      v137 = v13;
      if ( (*(int (__thiscall **)(_DWORD *))(v14 + 388))(this) == 16 || *(this + 45) == 16 )
      {
        v15 = (__int16 *)(*(int (__thiscall **)(_DWORD *, __int64 *))(*this + 440))(this, &v138);
        v16 = *v15;
        LOWORD(v15) = HIWORD(MEMORY[0x87F7E8][32686]) + v15[1];
        LOWORD(v135) = LOWORD(MEMORY[0x87F7E8][32686]) + v16;
        HIWORD(v135) = (_WORD)v15;
        v136 = v135;
        v17 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v136);
        v18 = Cell::IsBridge(v17);
        if ( v18 )
        {
          if ( *(_BYTE *)(*(this + 433) + 3598) && v18[353] )
            BuildingClass::ClearAnims(v18, 10);
        }
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 7 && *(this + 45) != 7
        || Team::AllMembersValid(this) )
      {
        *(this + 376) = -1;
        goto LABEL_80;
      }
      v19 = AbstractClass::IsTechnoType((void *)a2);
      if ( v19 && (*(int (__thiscall **)(void *))(*(_DWORD *)v19 + 44))(v19) == 1 )
      {
        if ( (_DWORD)a2 )
          v20 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 1 ? a2 : 0;
        else
          v20 = 0;
        *(this + 320) = v20;
        TechnoClass::SetFocus(this, 0);
        v3 = 0;
        LODWORD(a2) = 0;
        goto LABEL_80;
      }
      if ( !v13 )
        goto LABEL_74;
      if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 && *(_BYTE *)(v13[328] + 5806) )
      {
        *(this + 320) = v13;
        TechnoClass::SetFocus(this, 0);
        v3 = 0;
        LODWORD(a2) = 0;
        goto LABEL_80;
      }
      if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 )
      {
        if ( Team::AllMembersValid(v13) )
        {
          if ( !*(_BYTE *)(v13[328] + 5803) )
            TechnoClass::SetFocus(this, a2);
          if ( *(_BYTE *)(v13[328] + 5803) )
          {
            (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
            v3 = 0;
            LODWORD(a2) = 0;
          }
          if ( *(_BYTE *)(v13[328] + 5801) )
          {
            if ( BuildingClass::GetHealthRatio(this) >= *(double *)(MEMORY[0x87F7E8][7806] + 5880) )
            {
              (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
              v3 = 0;
            }
            else
            {
              v3 = 0;
              *(this + 320) = v13;
            }
            LODWORD(a2) = 0;
          }
          goto LABEL_80;
        }
        v21 = *(this + 361);
        if ( (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 14, v13) != 1 )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
          if ( !*(_BYTE *)(v13[328] + 5801) )
            goto LABEL_80;
          goto LABEL_69;
        }
        if ( *(_BYTE *)(v13[328] + 5811) && *(this + 361) != v21 )
        {
          v3 = (__int16 *)*(this + 361);
          LODWORD(a2) = v3;
        }
      }
      else
      {
LABEL_74:
        if ( !(_DWORD)a2 || (*(_BYTE *)(a2 + 20) & 1) == 0 )
          goto LABEL_80;
        if ( Team::AllMembersValid((int *)a2) )
        {
LABEL_69:
          TechnoClass::SetFocus(this, a2);
          goto LABEL_80;
        }
        if ( (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 632))(this, 2, a2) == 1
          && (*(int (__thiscall **)(_DWORD *, int))(*this + 628))(this, 14) != 1 )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
        }
      }
LABEL_80:
      if ( v3 && *(_BYTE *)(*(this + 433) + 3372) )
      {
        v22 = this + 413;
        if ( !*(this + 413) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v22 + 16))(*v22) )
        {
          v23 = *v22;
          v135 = 0;
          if ( !v23 )
            goto LABEL_90;
          v24 = StreamClass::Set2(&v135, this + 413);
          if ( v24 < 0 && v24 != -2147467262 )
            WinAPI::Wrapper(v24);
          if ( !v135 )
LABEL_90:
            WinAPI::Wrapper(-2147467261);
          (*(void (__stdcall **)(int *, _BYTE *))(*v135 + 12))(v135, v145);
          if ( !memcmp(v145, &stru_7E9A30, 0x10u) )
          {
            v25 = *(this + 365);
            if ( *(this + 367) < v25
              || (*((_BYTE *)this + 1465) || !v25)
              && (v26 = *(this + 368), v26 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 363) + 8))(
                   this + 363,
                   v26 + v25,
                   0) )
            {
              v27 = *(this + 367);
              if ( v27 )
                memcpy((void *)(*(this + 364) + 4), (const void *)*(this + 364), 4 * v27);
              *(_DWORD *)*(this + 364) = v3;
              ++*(this + 367);
            }
            (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354);
            v28 = (*(int (__thiscall **)(_DWORD *))(*this + 452))(this);
            v3 = (__int16 *)v28;
            BYTE4(a2) = 0;
            LODWORD(a2) = v28;
            if ( v28 )
            {
              if ( (*(_DWORD *)(v28 + 320) & 0x100) != 0
                && !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) )
              {
                v29 = *(this + 433);
                v134 = 0;
                v123 = *(_DWORD *)(v29 + 1460);
                TileIndex = MapClass::GetTileIndex(MEMORY[0x87F7E8], v3 + 18, v123, 0);
                v136 = (int *)*LayerClass::Pathfinding_Find(
                                 MEMORY[0x87F7E8],
                                 v31,
                                 &v138,
                                 v3 + 18,
                                 1,
                                 TileIndex,
                                 v123,
                                 0,
                                 1,
                                 1,
                                 0,
                                 1,
                                 0,
                                 0,
                                 (__int16 *)&v134,
                                 0,
                                 0);
                if ( v136 != (int *)dword_A8ED54[145561] )
                {
                  v3 = (__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v136);
                  LODWORD(a2) = v3;
                }
              }
            }
          }
          if ( v135 )
            (*(void (__stdcall **)(int *))(*v135 + 8))(v135);
        }
      }
      v125 = 0;
      if ( !v3 )
      {
        (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354);
        goto LABEL_143;
      }
      if ( !*(_BYTE *)(*(this + 433) + 3372) )
        goto LABEL_128;
      if ( !BYTE4(a2) )
        goto LABEL_143;
      v126 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
      v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 76))(this, v142, 0);
      LOWORD(v131) = *v32 / 256;
      WORD1(v131) = v32[1] / 256;
      v134 = v131;
      v33 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v134);
      IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v33);
      v34 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v142);
      LOWORD(v131) = *v34 / 256;
      WORD1(v131) = v34[1] / 256;
      ppv = v131;
      v35 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&ppv);
      v36 = BYTE1(v35[80]) & 1;
      v129 = Cell::IsBuildableAdvanced((int)v35);
      v130 = (*(int (__thiscall **)(_DWORD *))(*this + 456))(this);
      if ( v126 )
      {
        if ( v36 )
        {
          RegionMap = GetRegionMap(MEMORY[0x87F7E8], (__int16 *)&v134, 3, 0);
          if ( RegionMap == GetRegionMap(MEMORY[0x87F7E8], (__int16 *)&ppv, 3, 0) && RegionMap != -1 )
          {
            if ( *(_BYTE *)(16 * RegionMap + MEMORY[0x87F7E8][21] + 8)
              || (v38 = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&v134, (int)&v134),
                  LODWORD(v131) = v38,
                  LODWORD(v138) = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&ppv, (int)&ppv),
                  LODWORD(v131) = (__int16)(HIWORD(v38) - WORD1(v138)),
                  v39 = Math::Sqrt(
                          (double)(int)v131 * (double)(int)v131
                        + (double)(__int16)(v38 - v138) * (double)(__int16)(v38 - v138)),
                  (__int16)Math::RoundToInt(v39) <= 2) )
            {
              v125 = 1;
            }
          }
        }
        if ( !v125 )
        {
          v40 = 1;
          goto LABEL_122;
        }
      }
      else if ( v36 )
      {
        v40 = 1;
        goto LABEL_122;
      }
      v40 = 0;
LABEL_122:
      if ( (!IsBuildableAdvanced && v130 >= 0 || !v129) && !v125 || v40 )
      {
        LODWORD(a2) = BuildingClass::FindPlacementCells(this, a2);
LABEL_130:
        if ( !*(this + 413) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 152))(*(this + 413)) )
        {
          v41 = *(this + 356);
          if ( *(this + 358) < v41
            || (*((_BYTE *)this + 1429) || !v41)
            && (v42 = *(this + 359), v42 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 354) + 8))(this + 354, v42 + v41, 0) )
          {
            v43 = *(this + 358);
            if ( v43 )
              memcpy((void *)(*(this + 355) + 4), (const void *)*(this + 355), 4 * v43);
            *(_DWORD *)*(this + 355) = a2;
            ++*(this + 358);
          }
          v142[0] = *(this + 39);
          v142[1] = *(this + 40);
          v142[2] = *(this + 41);
          LODWORD(a2) = Coord::To_Cell(MEMORY[0x87F7E8], v142);
        }
LABEL_143:
        if ( !*(_BYTE *)(*(this + 433) + 3284) || *((_BYTE *)this + 636) || *(this + 172) || *((_BYTE *)this + 1709) )
          goto LABEL_228;
        v44 = this + 413;
        v45 = Team::GetMember(this, 0);
        v134 = 0;
        if ( !*(this + 413) )
          goto LABEL_152;
        v46 = StreamClass::Set2(&v134, this + 413);
        if ( v46 < 0 && v46 != -2147467262 )
          WinAPI::Wrapper(v46);
        if ( !v134 )
LABEL_152:
          WinAPI::Wrapper(-2147467261);
        (*(void (__stdcall **)(int, __int16 *))(*(_DWORD *)v134 + 12))(v134, v143);
        v127 = 1;
        if ( !v45 )
          goto LABEL_182;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 44))(v45) != 6
          || ((v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 44))(v45) == 6 ? v45 : 0, (_DWORD)a2)
            ? (v48 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 11 ? (_DWORD *)a2 : 0)
            : (v48 = 0),
              !*(_BYTE *)(*(_DWORD *)(v47 + 1312) + 5811)
           || !v48
           || CellClass::FindBuilding(v48, 0)
           || (v127 = 0, !memcmp(v143, &g_CLSID_HoverLocomotion, 0x10u))) )
        {
LABEL_181:
          if ( v127 != 1 )
          {
LABEL_226:
            if ( v134 )
              (*(void (__stdcall **)(int))(*(_DWORD *)v134 + 8))(v134);
LABEL_228:
            if ( (_DWORD)a2 )
            {
              v64 = this + 413;
              if ( !*(this + 413) )
                WinAPI::Wrapper(-2147467261);
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v64 + 16))(*v64) )
              {
                v65 = *v64;
                v134 = 0;
                if ( !v65 )
                  goto LABEL_240;
                Checked = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(this + 413);
                v67 = (**Checked)(Checked, &unk_818858, &v138);
                if ( v67 >= 0 )
                {
                  v69 = v138;
                  ComPtr::Release_Alt(&v134);
                  v68 = v69;
                }
                else
                {
                  ComPtr::Release_Alt(&v134);
                  v68 = 0;
                }
                v134 = v68;
                if ( v67 < 0 && v67 != -2147467262 )
                  WinAPI::Wrapper(v67);
                if ( !v68 )
LABEL_240:
                  WinAPI::Wrapper(-2147467261);
                (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v68 + 12))(v68, v146);
                if ( !memcmp(v146, &stru_7E9A50, 0x10u) && !(*(int (__thiscall **)(_DWORD *))(*this + 456))(this) )
                {
                  v70 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int64 *))(*(_DWORD *)a2 + 72))(a2, &v138);
                  v140[0] = *v70;
                  v140[1] = v70[1];
                  v141 = v70[2];
                  GroundHeight = Cell::GetGroundHeight(v140);
                  if ( v141 < GroundHeight )
                    v141 = GroundHeight;
                  if ( v125 )
                    goto LABEL_251;
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) )
                    goto LABEL_251;
                  v72 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int64 *))(*(_DWORD *)a2 + 72))(a2, &v138);
                  if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], v72) + 80) & 0x100) != 0 )
                    goto LABEL_251;
                  v73 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, __int64 *, _DWORD))(*this + 76))(this, &v131, 0);
                  v74 = Coord::To_Cell(MEMORY[0x87F7E8], v73);
                  if ( !Cell::IsBuildableAdvanced((int)v74) )
                    goto LABEL_251;
                  v75 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int16 *))(*(_DWORD *)a2 + 72))(a2, v143);
                  v76 = Coord::To_Cell(MEMORY[0x87F7E8], v75);
                  if ( !Cell::IsBuildableAdvanced((int)v76)
                    || (v77 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 72))(a2),
                        LOWORD(v132) = *v77 / 256,
                        HIWORD(v132) = v77[1] / 256,
                        v78 = *this,
                        v137 = v132,
                        v79 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *, int **))(v78 + 448))(
                                           this,
                                           &v130,
                                           &v137),
                        !BuildingTypeClass::IsPlacementValid(this, v79, v143)) )
                  {
LABEL_251:
                    v80 = *(this + 413);
                    v81 = (int **)(this + 413);
                    v130 = 0;
                    if ( v80 )
                    {
                      v82 = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(this + 413);
                      v83 = (**v82)(v82, &unk_819088, &v138);
                      if ( v83 >= 0 )
                      {
                        v85 = v138;
                        Release2COM(&v130);
                        v84 = v85;
                      }
                      else
                      {
                        Release2COM(&v130);
                        v84 = 0;
                      }
                      v130 = v84;
                      if ( v83 < 0 && v83 != -2147467262 )
                        WinAPI::Wrapper(v83);
                      if ( v84 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v84 + 28))(v84) )
                      {
                        if ( *v81 )
                          (*(void (__stdcall **)(int *))(**v81 + 8))(*v81);
                        v86 = v130;
                        *v81 = 0;
                        if ( !v86 )
                          WinAPI::Wrapper(-2147467261);
                        (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v86 + 16))(v86, this + 413);
                      }
                    }
                    LODWORD(v131) = 0;
                    InstanceCOM = CreateInstanceCOM((#24 *)&v131, (#33 *)&stru_7E9A30, 0, 7);
                    if ( InstanceCOM < 0 && InstanceCOM != -2147467262 )
                      WinAPI::Wrapper(InstanceCOM);
                    if ( !(_DWORD)v131 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)v131 + 12))(v131, this);
                    v88 = 0;
                    ppv = 0;
                    if ( (_DWORD)v131 )
                    {
                      v89 = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(&v131);
                      v90 = (**v89)(v89, &unk_819088, &v138);
                      if ( v90 >= 0 )
                      {
                        v91 = v138;
                        Release2COM(&ppv);
                        v88 = v91;
                      }
                      else
                      {
                        Release2COM(&ppv);
                        v88 = 0;
                      }
                      ppv = v88;
                      if ( v90 < 0 && v90 != -2147467262 )
                        WinAPI::Wrapper(v90);
                    }
                    v92 = v130;
                    if ( v130 != v88 )
                    {
                      v93 = v130;
                      v92 = v88;
                      v130 = v88;
                      if ( v88 )
                      {
                        (*(void (__stdcall **)(int))(*(_DWORD *)v88 + 4))(v88);
                        v92 = v130;
                        v88 = ppv;
                      }
                      if ( v93 )
                      {
                        (*(void (__stdcall **)(int))(*(_DWORD *)v93 + 8))(v93);
                        v92 = v130;
                        v88 = ppv;
                      }
                    }
                    if ( v88 )
                    {
                      (*(void (__stdcall **)(int))(*(_DWORD *)v88 + 8))(v88);
                      v92 = v130;
                    }
                    if ( v92 )
                    {
                      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v92 + 12))(v92, *v81);
                      v94 = *v81;
                      v95 = v131;
                      if ( *v81 != (int *)v131 )
                      {
                        *v81 = (int *)v131;
                        if ( v95 )
                          (*(void (__stdcall **)(int))(*(_DWORD *)v95 + 4))(v95);
                        if ( v94 )
                          (*(void (__stdcall **)(int *))(*v94 + 8))(v94);
                      }
                      v138 = *(_QWORD *)(this + 39);
                      v139 = *(this + 41);
                      if ( !*v81 )
                        WinAPI::Wrapper(-2147467261);
                      v96 = *v81;
                      v97 = **v81;
                      v98 = (unsigned __int8 *)Coord::To_Cell(MEMORY[0x87F7E8], &v138);
                      (*(void (__stdcall **)(int *, _DWORD))(v97 + 124))(v96, v98[284]);
                      v92 = v130;
                    }
                    if ( (_DWORD)v131 )
                    {
                      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v131 + 8))(v131);
                      v92 = v130;
                    }
                    if ( v92 )
                      (*(void (__stdcall **)(int))(*(_DWORD *)v92 + 8))(v92);
                  }
                }
                if ( v134 )
                  (*(void (__stdcall **)(int))(*(_DWORD *)v134 + 8))(v134);
              }
            }
            v99 = v137;
            if ( !v137 )
            {
              v100 = (void *)a2;
              goto LABEL_318;
            }
            if ( *(_BYTE *)(v137[328] + 5801) )
            {
              if ( Team::AllMembersValid(v137) && (_DWORD *)Team::GetMember(v99, 0) != this )
              {
                v100 = (void *)a2;
                TechnoClass::SetFocus(this, a2);
                goto LABEL_309;
              }
              if ( (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, v99) == 1 )
              {
                if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 628))(this, 14) == 1 )
                {
                  FootClass::AssignDestination((int)this, a2, SHIDWORD(a2));
LABEL_315:
                  *(this + 376) = -1;
                  return;
                }
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
                v100 = 0;
                LODWORD(a2) = 0;
                goto LABEL_309;
              }
            }
            v100 = (void *)a2;
LABEL_309:
            if ( *(_BYTE *)(v99[328] + 5803)
              && (!Team::AllMembersValid(v99) || (_DWORD *)Team::GetMember(v99, 0) == this)
              && (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, v99) == 1 )
            {
              if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 628))(this, 14) == 1 )
              {
                FootClass::AssignDestination((int)this, (int)v100, SHIDWORD(a2));
                goto LABEL_315;
              }
              (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
              v100 = 0;
              LODWORD(a2) = 0;
            }
LABEL_318:
            v101 = (int *)Team::GetMember(this, 0);
            if ( v101
              && (*(int (__thiscall **)(int *))(*v101 + 44))(v101) == 6
              && *(_BYTE *)(v101[328] + 5821)
              && *(this + 43) != 7 )
            {
              if ( *(this + 172) )
              {
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
              }
              else
              {
                v102 = v101 + 39;
                v103 = *v102;
                v104 = v102[1];
                v144 = v102[2];
                LOWORD(v138) = v103 / 256;
                WORD1(v138) = v104 / 256;
                LOWORD(v137) = v138 + 4;
                HIWORD(v137) = WORD1(v138) + 1;
                LODWORD(v138) = v137;
                if ( v100 != CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v138) )
                {
                  (*(void (__thiscall **)(_DWORD *))(*(this + 363) + 12))(this + 363);
                  (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354);
                  if ( v100 )
                    BuildingClass::AddToProductionQueue((int)this, (int)v100);
                  return;
                }
              }
            }
            if ( !v99 )
              goto LABEL_345;
            v105 = *(this + 433);
            if ( *(int *)(v105 + 1016) <= 0 )
              goto LABEL_345;
            v106 = *(_DWORD *)(v105 + 1016);
            v107 = 0;
            if ( v106 <= 0 )
              goto LABEL_345;
            v108 = *(_DWORD **)(v105 + 1004);
            while ( *v108 != v99[328] )
            {
              ++v107;
              ++v108;
              if ( v107 >= v106 )
                goto LABEL_345;
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 1 )
              goto LABEL_345;
            v109 = *(this + 433);
            if ( !*(_BYTE *)(v109 + 3598) && !*(_BYTE *)(v109 + 3599) )
              goto LABEL_345;
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 16 )
              goto LABEL_345;
            if ( (int *)Team::GetMember(this, 0) == v99
              || Team::AllMembersValid(v99)
              || (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, v99) != 1
              || (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 7
              || (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 10 )
            {
              if ( !(_DWORD)a2
                || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) != 6
                || Team::GetMember(this, 0) == (_DWORD)a2 )
              {
                goto LABEL_345;
              }
              v113 = v99 + 39;
              v114 = v99 + 39;
              v136 = 0;
              v115 = v99[39];
              v116 = v99[40];
              v144 = v114[2];
              LOWORD(v137) = v115 / 256;
              v117 = v116;
              v118 = v113[1];
              HIWORD(v137) = v117 / 256;
              LODWORD(v138) = v137;
              v119 = *v113;
              v144 = v113[2];
              LOWORD(v137) = v119 / 256;
              HIWORD(v137) = v118 / 256;
              v120 = *(this + 433);
              v135 = v137;
              v124 = *(_DWORD *)(v120 + 1460);
              v121 = MapClass::GetTileIndex(MEMORY[0x87F7E8], (__int16 *)&v138, v124, 0);
              v137 = (int *)*LayerClass::Pathfinding_Find(
                               MEMORY[0x87F7E8],
                               v122,
                               &v134,
                               (__int16 *)&v135,
                               2,
                               v121,
                               v124,
                               0,
                               1,
                               1,
                               0,
                               1,
                               0,
                               0,
                               (__int16 *)&v136,
                               0,
                               0);
              if ( v137 != (int *)dword_A8ED54[145561] )
              {
                LODWORD(a2) = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v137);
                goto LABEL_345;
              }
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 7, 0);
            }
            LODWORD(a2) = 0;
LABEL_345:
            if ( !*(this + 413) )
              WinAPI::Wrapper(-2147467261);
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 96))(*(this + 413))
              && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              v110 = (*(int (__thiscall **)(_DWORD *))(*this + 444))(this);
              if ( (*(_DWORD *)(v110 + 320) & 0x100) == 0 )
              {
                v111 = *(_DWORD **)(v110 + 228);
                if ( v111 )
                {
                  while ( 1 )
                  {
                    if ( v111 != this && (*(int (__thiscall **)(_DWORD *))(*v111 + 44))(v111) == 6 )
                    {
                      v112 = v111[328];
                      if ( *(_BYTE *)(v112 + 5801) || *(_BYTE *)(v112 + 5803) )
                        break;
                    }
                    v111 = (_DWORD *)v111[12];
                    if ( !v111 )
                      goto LABEL_365;
                  }
                  if ( !*(this + 413) )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 88))(*(this + 413));
                }
              }
            }
LABEL_365:
            FootClass::AssignDestination((int)this, a2, SHIDWORD(a2));
            return;
          }
LABEL_182:
          if ( memcmp(v143, &stru_7E9A30, 0x10u) )
          {
            v52 = *v44;
            v130 = 0;
            if ( v52 )
            {
              v53 = StreamClass::Set(&v130, this + 413);
              if ( v53 < 0 && v53 != -2147467262 )
                WinAPI::Wrapper(v53);
              if ( v130 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 28))(v130) )
              {
                if ( !v130 )
                  WinAPI::Wrapper(-2147467261);
                if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 20))(v130) )
                {
                  if ( *v44 )
                    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 8))(*v44);
                  v54 = v130;
                  *v44 = 0;
                  if ( !v54 )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v54 + 16))(v54, this + 413);
                }
              }
            }
            ppv = 0;
            v55 = CreateInstanceCOM((#24 *)&ppv, (#33 *)&stru_7E9A30, 0, 7);
            if ( v55 < 0 && v55 != -2147467262 )
              WinAPI::Wrapper(v55);
            if ( !ppv )
              WinAPI::Wrapper(-2147467261);
            (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this);
            v56 = 0;
            LODWORD(v131) = 0;
            if ( ppv )
            {
              v57 = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(&ppv);
              v58 = (**v57)(v57, &unk_819088, &v138);
              if ( v58 >= 0 )
              {
                v59 = v138;
                Release2COM((int *)&v131);
                v56 = v59;
              }
              else
              {
                Release2COM((int *)&v131);
                v56 = 0;
              }
              LODWORD(v131) = v56;
              if ( v58 < 0 && v58 != -2147467262 )
                WinAPI::Wrapper(v58);
            }
            v60 = v130;
            if ( v130 != v56 )
            {
              v61 = v130;
              v130 = v56;
              CellClass::SetField2C(&v130);
              if ( v61 )
                (*(void (__stdcall **)(int))(*(_DWORD *)v61 + 8))(v61);
              v60 = v130;
              v56 = v131;
            }
            if ( v56 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v56 + 8))(v56);
              v60 = v130;
            }
            if ( v60 )
            {
              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v60 + 12))(v60, *v44);
              v62 = *v44;
              v63 = ppv;
              if ( *v44 != ppv )
              {
                *v44 = ppv;
                if ( v63 )
                  (*(void (__stdcall **)(int))(*(_DWORD *)v63 + 4))(v63);
                if ( v62 )
                  (*(void (__stdcall **)(int))(*(_DWORD *)v62 + 8))(v62);
              }
              v60 = v130;
            }
            if ( ppv )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)ppv + 8))(ppv);
              v60 = v130;
            }
            if ( v60 )
              (*(void (__stdcall **)(int))(*(_DWORD *)v60 + 8))(v60);
          }
          goto LABEL_226;
        }
        v49 = *v44;
        v130 = 0;
        if ( v49 )
        {
          v50 = StreamClass::Set(&v130, this + 413);
          if ( v50 < 0 && v50 != -2147467262 )
            WinAPI::Wrapper(v50);
          if ( v130 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 28))(v130) )
          {
            if ( !v130 )
              WinAPI::Wrapper(-2147467261);
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 20))(v130) )
            {
              if ( *v44 )
                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 8))(*v44);
              v51 = v130;
              *v44 = 0;
              if ( !v51 )
                WinAPI::Wrapper(-2147467261);
              (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v51 + 16))(v51, this + 413);
              goto LABEL_179;
            }
          }
          if ( *v44 )
          {
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 72))(*v44);
            (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, -1);
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 7, 0);
            *((_BYTE *)this + 1708) = 1;
            *((_BYTE *)this + 504) = 1;
LABEL_179:
            if ( v130 )
              (*(void (__stdcall **)(int))(*(_DWORD *)v130 + 8))(v130);
            goto LABEL_181;
          }
        }
        WinAPI::Wrapper(-2147467261);
      }
LABEL_128:
      if ( !BYTE4(a2) )
        goto LABEL_143;
      (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354);
      goto LABEL_130;
    }
LABEL_49:
    v13 = 0;
    goto LABEL_36;
  }
}

/* ASM:
ppv             = dword ptr -68h
var_64          = dword ptr -64h
var_60          = dword ptr -60h
var_5C          = dword ptr -5Ch
var_58          = dword ptr -58h
var_54          = qword ptr -54h
var_4C          = dword ptr -4Ch
var_48          = dword ptr -48h
var_44          = byte ptr -44h
var_40          = dword ptr -40h
var_3C          = dword ptr -3Ch
var_38          = dword ptr -38h
var_34          = dword ptr -34h
var_30          = word ptr -30h
var_28          = dword ptr -28h
var_20          = byte ptr -20h
var_10          = byte ptr -10h
arg_0           = qword ptr  4

sub     esp, 80h
push    ebx
push    ebp
mov     ebp, ecx
mov     ebx, dword ptr [esp+88h+arg_0]
push    esi
push    edi
mov     eax, [ebp+6C4h]
mov     cl, [eax+0D6Ah]
test    cl, cl
jz      loc_741A80
test    ebx, ebx
jnz     loc_741A80
mov     ecx, [ebp+5A4h]
test    ecx, ecx
jz      loc_741A80
mov     eax, [ebp+2B4h]
test    eax, eax
jz      loc_741A80
cmp     ecx, eax
jz      loc_741A52
test    ecx, ecx
jz      short loc_741A01
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 0Bh
jnz     short loc_741A01
mov     esi, [ebp+5A4h]
test    esi, esi
jnz     short loc_7419DF
xor     eax, eax
jmp     short loc_7419F1
; ---------------------------------------------------------------------------

loc_7419DF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+69↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
sub     eax, 0Bh
neg     eax
sbb     eax, eax
not     eax
and     eax, esi

loc_7419F1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+6D↑j
mov     ecx, [eax+0E4h]
mov     eax, [ebp+2B4h]
cmp     ecx, eax
jz      short loc_741A52

loc_741A01:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+55↑j
; UnitClass__AssignDestination_SyncLog+5F↑j
lea     edx, [esp+90h+var_54]
lea     ecx, [ebp+388h]
push    edx
mov     word ptr [esp+94h+var_5C], 4000h
call    ProgressTimer__GetValue
mov     esi, eax
mov     eax, [ebp+2B4h]
lea     ecx, [esp+90h+var_60]
push    eax
push    ecx
mov     ecx, ebp
call    ObjectClass__CalcTargetFacing
mov     dx, [eax]
lea     ecx, [esp+90h+var_58]
sub     dx, [esi]
push    ecx
lea     ecx, [esp+94h+var_5C]
mov     word ptr [esp+94h+var_58], dx
mov     eax, [esp+94h+var_58]
mov     [esp+94h+var_58], eax
call    UnitClass__CompareCoordinateMagnitude
test    al, al
jz      short loc_741A80

loc_741A52:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+4D↑j
; UnitClass__AssignDestination_SyncLog+8F↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 1
jz      loc_74317A
mov     eax, [ebp+0]
push    1
mov     ecx, ebp
call    dword ptr [eax+1F0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_741A80:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+21↑j
; UnitClass__AssignDestination_SyncLog+29↑j ...
cmp     ebx, [ebp+5A4h]
jnz     short loc_741A96
mov     al, [ebp+1F8h]
test    al, al
jz      loc_74317A

loc_741A96:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+116↑j
mov     al, [ebp+6E0h]
mov     byte ptr [ebp+1F8h], 0
test    al, al
jnz     short loc_741AC3
mov     cl, [ebp+6E1h]
test    cl, cl
jnz     short loc_741ABB
mov     cl, [ebp+6E2h]
test    cl, cl
jz      short loc_741AD1

loc_741ABB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+13F↑j
test    al, al
jz      loc_743173

loc_741AC3:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+135↑j
mov     eax, [ebp+2B0h]
test    eax, eax
jz      loc_743173

loc_741AD1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+149↑j
mov     ecx, ebp
call    Team__AllMembersValid
test    al, al
jz      short loc_741B28
mov     ecx, [ebp+6C4h]
mov     eax, [ecx+5E0h]
test    eax, eax
jle     short loc_741B28
push    0
mov     ecx, ebp
call    Team__GetMember
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_741B28
test    ebx, ebx
jz      loc_741C9D
test    byte ptr [ebx+14h], 1
jz      short loc_741B28
push    ebx
mov     ecx, ebp
call    Array__Contains
test    al, al
jnz     short loc_741B28
mov     eax, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [eax+274h]

loc_741B28:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+16A↑j
; UnitClass__AssignDestination_SyncLog+17A↑j ...
test    ebx, ebx
jz      loc_741C9D
mov     ecx, ebp
call    Team__AllMembersValid
test    al, al
jz      short loc_741BAA
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
test    eax, eax
jnz     short loc_741BAA
mov     al, [ebp+418h]
test    al, al
jz      short loc_741BAA
push    0
mov     ecx, ebp
call    Team__GetMember
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 2
jnz     short loc_741BAA
push    0
mov     ecx, ebp
call    Team__GetMember
mov     ecx, [eax+6C4h]
mov     dl, [ecx+0DFCh]
test    dl, dl
jz      short loc_741BAA
mov     edx, [eax]
push    1
push    0
mov     ecx, eax
call    dword ptr [edx+480h]
mov     eax, [ebp+0]
push    19h
mov     ecx, ebp
call    dword ptr [eax+274h]
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]

loc_741BAA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1C9↑j
; UnitClass__AssignDestination_SyncLog+1D8↑j ...
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2Ch]
mov     esi, eax
sub     esi, 6
neg     esi
sbb     esi, esi
not     esi
and     esi, ebx

loc_741BBE:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+32F↓j
mov     edx, [ebp+0]
mov     ecx, ebp
mov     [esp+90h+var_58], esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jz      short loc_741BDB
cmp     dword ptr [ebp+0B4h], 10h
jnz     short loc_741C4F

loc_741BDB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+260↑j
mov     eax, [ebp+0]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1B8h]
mov     dx, [eax]
mov     ax, [eax+2]
add     dx, ds:89F6A0h
add     ax, ds:89F6A2h
mov     word ptr [esp+90h+var_60], dx
mov     word ptr [esp+90h+var_60+2], ax
mov     ecx, [esp+90h+var_60]
lea     edx, [esp+90h+var_5C]
mov     [esp+90h+var_5C], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_741C4F
mov     ecx, [ebp+6C4h]
mov     dl, [ecx+0E0Eh]
test    dl, dl
jz      short loc_741C4F
mov     ecx, [eax+584h]
test    ecx, ecx
jz      short loc_741C4F
push    0Ah
mov     ecx, eax
call    BuildingClass__ClearAnims

loc_741C4F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+269↑j
; UnitClass__AssignDestination_SyncLog+2BA↑j ...
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
or      edi, 0FFFFFFFFh
cmp     eax, 7
jz      short loc_741C6F
cmp     dword ptr [ebp+0B4h], 7
jnz     loc_741E88

loc_741C6F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+2F0↑j
mov     ecx, ebp
call    Team__AllMembersValid
test    al, al
jnz     loc_741E88
mov     ecx, ebx
call    AbstractClass__IsTechnoType
test    eax, eax
jz      short loc_741CD1
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_741CD1
test    ebx, ebx
jnz     short loc_741CA4
xor     eax, eax
jmp     short loc_741CB4
; ---------------------------------------------------------------------------

loc_741C9D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+193↑j
; UnitClass__AssignDestination_SyncLog+1BA↑j
xor     esi, esi
jmp     loc_741BBE
; ---------------------------------------------------------------------------

loc_741CA4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+327↑j
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2Ch]
dec     eax
neg     eax
sbb     eax, eax
not     eax
and     eax, ebx

loc_741CB4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+32B↑j
push    0
mov     ecx, ebp
mov     [ebp+500h], eax
call    TechnoClass__SetFocus
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741CD1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+317↑j
; UnitClass__AssignDestination_SyncLog+323↑j
test    esi, esi
jz      loc_741E35
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_741D12
mov     eax, [esi+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jz      short loc_741D12
push    0
mov     ecx, ebp
mov     [ebp+500h], esi
call    TechnoClass__SetFocus
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741D12:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+373↑j
; UnitClass__AssignDestination_SyncLog+383↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_741E35
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jz      loc_741DCC
mov     eax, [esi+520h]
mov     cl, [eax+16ABh]
test    cl, cl
jnz     short loc_741D49
push    ebx
mov     ecx, ebp
call    TechnoClass__SetFocus

loc_741D49:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+3CF↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16ABh]
test    al, al
jz      short loc_741D6F
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx

loc_741D6F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+3E7↑j
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jz      loc_741E8E
mov     ecx, ebp
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+16F8h]
fnstsw  ax
test    ah, 1
jz      short loc_741DB1
xor     ebx, ebx
mov     [ebp+500h], esi
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741DB1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+42B↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741DCC:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+3BB↑j
mov     eax, [ebp+0]
mov     edi, [ebp+5A4h]
push    esi
push    0Eh
mov     ecx, ebp
call    dword ptr [eax+278h]
cmp     eax, 1
jz      short loc_741E10
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jz      loc_741E8E
push    ebx
mov     ecx, ebp
call    TechnoClass__SetFocus
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E10:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+473↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16B3h]
test    al, al
jz      short loc_741E8E
mov     eax, [ebp+5A4h]
cmp     eax, edi
jz      short loc_741E8E
mov     ebx, eax
mov     dword ptr [esp+90h+arg_0], ebx
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E35:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+363↑j
; UnitClass__AssignDestination_SyncLog+3AC↑j
test    ebx, ebx
jz      short loc_741E8E
test    byte ptr [ebx+14h], 1
jz      short loc_741E8E
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jz      short loc_741E54
push    ebx
mov     ecx, ebp
call    TechnoClass__SetFocus
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E54:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+4D8↑j
mov     edx, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [edx+278h]
cmp     eax, 1
jnz     short loc_741E8E
mov     eax, [ebp+0]
push    0Eh
mov     ecx, ebp
call    dword ptr [eax+274h]
cmp     eax, 1
jz      short loc_741E8E
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E88:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+2F9↑j
; UnitClass__AssignDestination_SyncLog+308↑j
mov     [ebp+5E0h], edi

loc_741E8E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+35C↑j
; UnitClass__AssignDestination_SyncLog+39D↑j ...
test    ebx, ebx
mov     byte ptr [esp+90h+var_7C+1], 0
jz      loc_74208A
mov     eax, [ebp+6C4h]
mov     cl, [eax+0D2Ch]
test    cl, cl
jz      loc_74208A
mov     eax, [ebp+674h]
lea     esi, [ebp+674h]
test    eax, eax
jnz     short loc_741EC9
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_741EC9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+54D↑j
mov     eax, [esi]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      loc_74208A
mov     eax, [esi]
mov     [esp+90h+var_60], 0
test    eax, eax
jz      short loc_741F0A
push    esi
lea     ecx, [esp+94h+var_60]
call    StreamClass__Set2
test    eax, eax
jge     short loc_741F02
cmp     eax, 80004002h
jz      short loc_741F02
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_741F02:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+583↑j
; UnitClass__AssignDestination_SyncLog+58A↑j
mov     eax, [esp+90h+var_60]
test    eax, eax
jnz     short loc_741F18

loc_741F0A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+575↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_60]

loc_741F18:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+598↑j
mov     edx, [eax]
lea     ecx, [esp+90h+var_20]
push    ecx
push    eax
call    dword ptr [edx+0Ch]
mov     ecx, 4
mov     edi, offset stru_7E9A30
lea     esi, [esp+90h+var_20]
xor     edx, edx
repe cmpsd
jnz     loc_74207C
mov     ecx, [ebp+5B4h]
mov     eax, [ebp+5BCh]
lea     esi, [ebp+5ACh]
cmp     eax, ecx
jl      short loc_741F73
mov     al, [esi+0Dh]
test    al, al
jnz     short loc_741F5C
test    ecx, ecx
jnz     short loc_741F9A

loc_741F5C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5E6↑j
mov     eax, [esi+14h]
test    eax, eax
jle     short loc_741F9A
mov     edx, [esi]
add     ecx, eax
push    0
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_741F9A

loc_741F73:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5DF↑j
mov     ecx, [esi+10h]
test    ecx, ecx
jz      short loc_741F8E
mov     eax, [esi+4]
shl     ecx, 2
push    ecx             ; Size
push    eax             ; Src
add     eax, 4
push    eax             ; void *
call    _memcpy
add     esp, 0Ch

loc_741F8E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+608↑j
mov     edx, [esi+4]
mov     [edx], ebx
mov     eax, [esi+10h]
inc     eax
mov     [esi+10h], eax

loc_741F9A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5EA↑j
; UnitClass__AssignDestination_SyncLog+5F1↑j ...
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1C4h]
mov     ebx, eax
mov     byte ptr [esp+90h+arg_0+4], 0
test    ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jz      loc_74207C
mov     eax, [ebx+140h]
test    ah, 1
jz      loc_74207C
mov     eax, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [eax+0BCh]
test    al, al
jnz     loc_74207C
xor     edi, edi
mov     eax, [ebp+6C4h]
push    edi
mov     word ptr [esp+94h+var_64], di
mov     word ptr [esp+94h+var_64+2], di
push    edi
mov     eax, [eax+5B4h]
lea     edi, [esp+98h+var_64]
push    edi
mov     ecx, 1
push    0
push    0
mov     edx, ecx
push    ecx
push    0
push    edx
push    ecx
push    0
push    eax
lea     esi, [ebx+24h]
push    0
push    eax
push    esi
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
push    eax
push    1
lea     ecx, [esp+0C4h+var_54]
push    esi
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+90h+var_5C], eax
jnz     short loc_742064
mov     dx, word ptr [esp+90h+var_5C+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      short loc_74207C

loc_742064:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+6E4↑j
lea     eax, [esp+90h+var_5C]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebx, eax
mov     dword ptr [esp+90h+arg_0], ebx

loc_74207C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5C5↑j
; UnitClass__AssignDestination_SyncLog+657↑j ...
mov     eax, [esp+90h+var_60]
test    eax, eax
jz      short loc_74208A
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_74208A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+525↑j
; UnitClass__AssignDestination_SyncLog+539↑j ...
test    ebx, ebx
mov     [esp+90h+var_7D], 0
jz      loc_7423BE
mov     edx, [ebp+6C4h]
mov     al, [edx+0D2Ch]
test    al, al
jz      loc_7422D9
mov     al, byte ptr [esp+90h+arg_0+4]
test    al, al
jz      loc_7423CD
mov     eax, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [eax+0BCh]
mov     edx, [ebp+0]
mov     byte ptr [esp+90h+var_7C], al
lea     eax, [esp+90h+var_3C]
push    0
push    eax
mov     ecx, ebp
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_74], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+90h+var_64]
sar     eax, 8
mov     word ptr [esp+90h+var_74+2], ax
mov     ecx, dword ptr [esp+90h+var_74]
mov     [esp+90h+var_64], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBuildableAdvanced
mov     edi, dword ptr [esp+90h+arg_0]
lea     ecx, [esp+90h+var_3C]
mov     byte ptr [esp+90h+var_7C+2], al
push    ecx
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_74], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, 87F7E8h
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_74+2], ax
mov     edx, dword ptr [esp+90h+var_74]
lea     eax, [esp+90h+ppv]
mov     [esp+90h+ppv], edx
push    eax
call    CellCoord__To_CellObj
mov     ebx, [eax+140h]
mov     ecx, eax
shr     ebx, 8
and     bl, 1
call    Cell__IsBuildableAdvanced
mov     edx, [ebp+0]
mov     ecx, ebp
mov     byte ptr [esp+90h+var_7C+3], al
call    dword ptr [edx+1C8h]
mov     [esp+90h+var_78], eax
mov     al, byte ptr [esp+90h+var_7C]
test    al, al
jz      loc_742298
test    bl, bl
jz      loc_74228C
push    0
lea     eax, [esp+94h+var_64]
push    3
push    eax
mov     ecx, 87F7E8h
call    GetRegionMap
push    0
lea     ecx, [esp+94h+ppv]
push    3
push    ecx
mov     ecx, 87F7E8h
mov     esi, eax
call    GetRegionMap
cmp     esi, eax
jnz     loc_74228C
cmp     esi, 0FFFFFFFFh
jz      loc_74228C
mov     edx, ds:87F83Ch
shl     esi, 4
mov     al, [esi+edx+8]
test    al, al
jnz     loc_742287
lea     eax, [esp+90h+var_64]
lea     ecx, [esp+90h+var_64]
push    eax
lea     edx, [esp+94h+var_54]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    Pathfinding__SelectRegionPath
mov     esi, [eax]
lea     eax, [esp+90h+ppv]
lea     ecx, [esp+90h+ppv]
push    eax
lea     edx, [esp+94h+var_54]
push    ecx
push    edx
mov     ecx, 87F7E8h
mov     dword ptr [esp+9Ch+var_74], esi
call    Pathfinding__SelectRegionPath
mov     eax, [eax]
sub     esp, 8
mov     dword ptr [esp+98h+var_54], eax
mov     ebx, dword ptr [esp+98h+var_54+2]
sub     esi, eax
mov     eax, dword ptr [esp+98h+var_74+2]
sub     eax, ebx
movsx   ecx, si
movsx   edx, ax
mov     dword ptr [esp+98h+var_74], ecx
fild    dword ptr [esp+98h+var_74]
mov     dword ptr [esp+98h+var_74], edx
fild    dword ptr [esp+98h+var_74]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fstp    [esp+98h+var_98] ; double
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     ax, 2
jg      short loc_74228C

loc_742287:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+88A↑j
mov     [esp+90h+var_7D], 1

loc_74228C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+83C↑j
; UnitClass__AssignDestination_SyncLog+86C↑j ...
mov     al, [esp+90h+var_7D]
test    al, al
jnz     short loc_7422A0
mov     al, 1
jmp     short loc_7422A4
; ---------------------------------------------------------------------------

loc_742298:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+834↑j
test    bl, bl
jz      short loc_7422A0
mov     al, 1
jmp     short loc_7422A4
; ---------------------------------------------------------------------------

loc_7422A0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+922↑j
; UnitClass__AssignDestination_SyncLog+92A↑j
mov     al, byte ptr [esp+90h+var_7C+1]

loc_7422A4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+926↑j
; UnitClass__AssignDestination_SyncLog+92E↑j
mov     cl, byte ptr [esp+90h+var_7C+2]
test    cl, cl
jnz     short loc_7422B4
mov     ecx, [esp+90h+var_78]
test    ecx, ecx
jge     short loc_7422BC

loc_7422B4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+93A↑j
mov     cl, byte ptr [esp+90h+var_7C+3]
test    cl, cl
jnz     short loc_7422C4

loc_7422BC:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+942↑j
mov     cl, [esp+90h+var_7D]
test    cl, cl
jz      short loc_7422C8

loc_7422C4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+94A↑j
test    al, al
jz      short loc_7422D9

loc_7422C8:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+952↑j
push    edi
mov     ecx, ebp
call    BuildingClass__FindPlacementCells
mov     dword ptr [esp+90h+arg_0], eax
jmp     short loc_7422F7
; ---------------------------------------------------------------------------

loc_7422D9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+735↑j
; UnitClass__AssignDestination_SyncLog+956↑j
mov     al, byte ptr [esp+90h+arg_0+4]
test    al, al
jz      loc_7423CD
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]

loc_7422F7:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+967↑j
mov     eax, [ebp+674h]
test    eax, eax
jnz     short loc_74230B
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_74230B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+98F↑j
mov     eax, [ebp+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+98h]
test    al, al
jz      loc_7423CD
mov     ecx, [ebp+590h]
mov     eax, [ebp+598h]
lea     esi, [ebp+588h]
cmp     eax, ecx
jl      short loc_74235A
mov     al, [esi+0Dh]
test    al, al
jnz     short loc_742343
test    ecx, ecx
jnz     short loc_742388

loc_742343:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9CD↑j
mov     eax, [esi+14h]
test    eax, eax
jle     short loc_742388
mov     edx, [esi]
add     ecx, eax
push    0
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_742388

loc_74235A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9C6↑j
mov     ecx, [esi+10h]
test    ecx, ecx
jz      short loc_742375
mov     eax, [esi+4]
shl     ecx, 2
push    ecx             ; Size
push    eax             ; Src
add     eax, 4
push    eax             ; void *
call    _memcpy
add     esp, 0Ch

loc_742375:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9EF↑j
mov     edx, [esi+4]
mov     eax, dword ptr [esp+90h+arg_0]
mov     [edx], eax
mov     eax, [esi+10h]
inc     eax
mov     [esi+10h], eax

loc_742388:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9D1↑j
; UnitClass__AssignDestination_SyncLog+9D8↑j ...
lea     ecx, [ebp+9Ch]
mov     edx, [ebp+9Ch]
mov     [esp+90h+var_3C], edx
lea     edx, [esp+90h+var_3C]
mov     eax, [ecx+4]
push    edx
mov     [esp+94h+var_38], eax
mov     ecx, [ecx+8]
mov     [esp+94h+var_34], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     dword ptr [esp+90h+arg_0], eax
jmp     short loc_7423CD
; ---------------------------------------------------------------------------

loc_7423BE:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+721↑j
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]

loc_7423CD:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+744↑j
; UnitClass__AssignDestination_SyncLog+972↑j ...
mov     ecx, [ebp+6C4h]
mov     al, [ecx+0CD4h]
test    al, al
jz      loc_7427C0
mov     al, [ebp+27Ch]
test    al, al
jnz     loc_7427C0
mov     eax, [ebp+2B0h]
test    eax, eax
jnz     loc_7427C0
mov     al, [ebp+6ADh]
test    al, al
jnz     loc_7427C0
push    0
mov     ecx, ebp
call    Team__GetMember
lea     ebx, [ebp+674h]
mov     edi, eax
mov     [esp+90h+var_64], 0
cmp     dword ptr [ebx], 0
jz      short loc_74244C
push    ebx
lea     ecx, [esp+94h+var_64]
call    StreamClass__Set2
test    eax, eax
jge     short loc_742444
cmp     eax, 80004002h
jz      short loc_742444
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742444:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AC5↑j
; UnitClass__AssignDestination_SyncLog+ACC↑j
mov     eax, [esp+90h+var_64]
test    eax, eax
jnz     short loc_74245A

loc_74244C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AB7↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_74245A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+ADA↑j
mov     edx, [eax]
lea     ecx, [esp+90h+var_30]
push    ecx
push    eax
call    dword ptr [edx+0Ch]
test    edi, edi
mov     byte ptr [esp+90h+var_7C], 1
jz      loc_7425E6
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_7425DB
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
mov     esi, eax
sub     esi, 6
neg     esi
sbb     esi, esi
not     esi
and     esi, edi
mov     edi, dword ptr [esp+90h+arg_0]
test    edi, edi
jnz     short loc_7424A5
xor     eax, eax
jmp     short loc_7424B7
; ---------------------------------------------------------------------------

loc_7424A5:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B2F↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 0Bh
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_7424B7:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B33↑j
mov     ecx, [esi+520h]
mov     dl, [ecx+16B3h]
test    dl, dl
jz      loc_7425DB
test    eax, eax
jz      loc_7425DB
push    0
mov     ecx, eax
call    CellClass__FindBuilding
test    eax, eax
jnz     loc_7425DB
mov     ecx, 4
mov     edi, offset g_CLSID_HoverLocomotion
lea     esi, [esp+90h+var_30]
xor     edx, edx
repe cmpsd
mov     byte ptr [esp+90h+var_7C], al
jz      loc_7425DB
mov     eax, [ebx]
mov     [esp+90h+var_78], edx
test    eax, eax
jz      loc_742591
push    ebx
lea     ecx, [esp+94h+var_78]
call    StreamClass__Set
test    eax, eax
jge     short loc_742529
cmp     eax, 80004002h
jz      short loc_742529
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742529:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BAA↑j
; UnitClass__AssignDestination_SyncLog+BB1↑j
mov     eax, [esp+90h+var_78]
test    eax, eax
jz      short loc_74258C
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+1Ch]
test    al, al
jz      short loc_74258C
mov     eax, [esp+90h+var_78]
test    eax, eax
jnz     short loc_742551
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742551:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BD1↑j
mov     edx, [eax]
push    eax
call    dword ptr [edx+14h]
test    al, al
jz      short loc_74258C
mov     eax, [ebx]
test    eax, eax
jz      short loc_742567
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742567:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BEF↑j
mov     eax, [esp+90h+var_78]
mov     dword ptr [ebx], 0
test    eax, eax
jnz     short loc_742583
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742583:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C03↑j
mov     edx, [eax]
push    ebx
push    eax
call    dword ptr [edx+10h]
jmp     short loc_7425CD
; ---------------------------------------------------------------------------

loc_74258C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BBF↑j
; UnitClass__AssignDestination_SyncLog+BC9↑j ...
cmp     dword ptr [ebx], 0
jnz     short loc_74259B

loc_742591:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B98↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_74259B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C1F↑j
mov     eax, [ebx]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+48h]
mov     edx, [ebp+0]
push    0FFFFFFFFh
mov     ecx, ebp
call    dword ptr [edx+1F0h]
mov     eax, [ebp+0]
push    0
push    7
mov     ecx, ebp
call    dword ptr [eax+1E8h]
mov     byte ptr [ebp+6ACh], 1
mov     byte ptr [ebp+1F8h], 1

loc_7425CD:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C1A↑j
mov     eax, [esp+90h+var_78]
test    eax, eax
jz      short loc_7425DB
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_7425DB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B0C↑j
; UnitClass__AssignDestination_SyncLog+B55↑j ...
cmp     byte ptr [esp+90h+var_7C], 1
jnz     loc_7427B2

loc_7425E6:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AFC↑j
mov     ecx, 4
mov     edi, offset stru_7E9A30
lea     esi, [esp+90h+var_30]
xor     edx, edx
repe cmpsd
jz      loc_7427B2
mov     eax, [ebx]
mov     [esp+90h+var_78], edx
test    eax, eax
jz      short loc_742684
push    ebx
lea     ecx, [esp+94h+var_78]
call    StreamClass__Set
test    eax, eax
jge     short loc_742623
cmp     eax, 80004002h
jz      short loc_742623
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742623:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CA4↑j
; UnitClass__AssignDestination_SyncLog+CAB↑j
mov     eax, [esp+90h+var_78]
test    eax, eax
jz      short loc_742684
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+1Ch]
test    al, al
jz      short loc_742684
mov     eax, [esp+90h+var_78]
test    eax, eax
jnz     short loc_74264B
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_74264B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CCB↑j
mov     edx, [eax]
push    eax
call    dword ptr [edx+14h]
test    al, al
jz      short loc_742684
mov     eax, [ebx]
test    eax, eax
jz      short loc_742661
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742661:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CE9↑j
mov     eax, [esp+90h+var_78]
mov     dword ptr [ebx], 0
test    eax, eax
jnz     short loc_74267D
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_74267D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CFD↑j
mov     edx, [eax]
push    ebx
push    eax
call    dword ptr [edx+10h]

loc_742684:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C96↑j
; UnitClass__AssignDestination_SyncLog+CB9↑j ...
push    7               ; dwClsContext
push    0               ; pUnkOuter
push    offset stru_7E9A30 ; rclsid
lea     ecx, [esp+9Ch+ppv] ; ppv
mov     [esp+9Ch+ppv], 0
call    CreateInstanceCOM
test    eax, eax
jge     short loc_7426AF
cmp     eax, 80004002h
jz      short loc_7426AF
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_7426AF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D30↑j
; UnitClass__AssignDestination_SyncLog+D37↑j
mov     eax, [esp+90h+ppv]
test    eax, eax
jnz     short loc_7426C5
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+ppv]

loc_7426C5:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D45↑j
mov     ecx, [eax]
push    ebp
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, [esp+90h+ppv]
xor     eax, eax
test    ecx, ecx
mov     dword ptr [esp+90h+var_74], eax
jz      short loc_74272E
lea     ecx, [esp+90h+ppv]
call    Stream__GetChecked
mov     edx, [eax]
lea     ecx, [esp+90h+var_54]
push    ecx
push    offset unk_819088
push    eax
call    dword ptr [edx]
mov     esi, eax
test    esi, esi
jge     short loc_742705
lea     ecx, [esp+90h+var_74]
call    Release2COM
xor     eax, eax
jmp     short loc_742714
; ---------------------------------------------------------------------------

loc_742705:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D86↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+var_74]
call    Release2COM
mov     eax, edi

loc_742714:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D93↑j
test    esi, esi
mov     dword ptr [esp+90h+var_74], eax
jge     short loc_74272E
cmp     esi, 80004002h
jz      short loc_74272E
push    esi
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, dword ptr [esp+90h+var_74]

loc_74272E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D68↑j
; UnitClass__AssignDestination_SyncLog+DAA↑j ...
mov     ecx, [esp+90h+var_78]
cmp     ecx, eax
jz      short loc_742757
mov     esi, ecx
lea     ecx, [esp+90h+var_78]
mov     [esp+90h+var_78], eax
call    CellClass__SetField2C
test    esi, esi
jz      short loc_74274F
mov     edx, [esi]
push    esi
call    dword ptr [edx+8]

loc_74274F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DD7↑j
mov     ecx, [esp+90h+var_78]
mov     eax, dword ptr [esp+90h+var_74]

loc_742757:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DC4↑j
test    eax, eax
jz      short loc_742765
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_742765:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DE9↑j
test    ecx, ecx
jz      short loc_742796
mov     eax, [ebx]
mov     edx, [ecx]
push    eax
push    ecx
call    dword ptr [edx+0Ch]
mov     esi, [ebx]
mov     eax, [esp+90h+ppv]
cmp     esi, eax
jz      short loc_742792
test    eax, eax
mov     [ebx], eax
jz      short loc_742788
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+4]

loc_742788:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E10↑j
test    esi, esi
jz      short loc_742792
mov     edx, [esi]
push    esi
call    dword ptr [edx+8]

loc_742792:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E0A↑j
; UnitClass__AssignDestination_SyncLog+E1A↑j
mov     ecx, [esp+90h+var_78]

loc_742796:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DF7↑j
mov     eax, [esp+90h+ppv]
test    eax, eax
jz      short loc_7427A8
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_7427A8:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E2C↑j
test    ecx, ecx
jz      short loc_7427B2
mov     edx, [ecx]
push    ecx
call    dword ptr [edx+8]

loc_7427B2:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C70↑j
; UnitClass__AssignDestination_SyncLog+C88↑j ...
mov     eax, [esp+90h+var_64]
test    eax, eax
jz      short loc_7427C0
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_7427C0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+A6B↑j
; UnitClass__AssignDestination_SyncLog+A79↑j ...
mov     ebx, dword ptr [esp+90h+arg_0]
test    ebx, ebx
jz      loc_742C14
mov     eax, [ebp+674h]
lea     esi, [ebp+674h]
test    eax, eax
jnz     short loc_7427E9
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_7427E9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E6D↑j
mov     eax, [esi]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     loc_742C14
mov     eax, [esi]
mov     [esp+90h+var_64], 0
test    eax, eax
jz      short loc_74285D
mov     ecx, esi
call    Stream__GetChecked
mov     ecx, [eax]
lea     edx, [esp+90h+var_54]
push    edx
push    offset unk_818858
push    eax
call    dword ptr [ecx]
mov     esi, eax
test    esi, esi
jge     short loc_742830
lea     ecx, [esp+90h+var_64]
call    ComPtr__Release_Alt
xor     eax, eax
jmp     short loc_74283F
; ---------------------------------------------------------------------------

loc_742830:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+EB1↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+var_64]
call    ComPtr__Release_Alt
mov     eax, edi

loc_74283F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+EBE↑j
test    esi, esi
mov     [esp+90h+var_64], eax
jge     short loc_742859
cmp     esi, 80004002h
jz      short loc_742859
push    esi
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_742859:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+ED5↑j
; UnitClass__AssignDestination_SyncLog+EDD↑j
test    eax, eax
jnz     short loc_74286B

loc_74285D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E95↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_74286B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+EEB↑j
mov     ecx, [eax]
lea     edx, [esp+90h+var_10]
push    edx
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, 4
mov     edi, offset stru_7E9A50
lea     esi, [esp+90h+var_10]
xor     eax, eax
repe cmpsd
jnz     loc_742C06
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1C8h]
test    eax, eax
jnz     loc_742C06
mov     eax, [ebx]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, ebx
call    dword ptr [eax+48h]
mov     edx, [eax]
mov     [esp+90h+var_48], edx
mov     ecx, [eax+4]
mov     dword ptr [esp+90h+var_44], ecx
mov     ecx, 87F7E8h
mov     edx, [eax+8]
lea     eax, [esp+90h+var_48]
push    eax
mov     [esp+94h+var_40], edx
call    Cell__GetGroundHeight
cmp     [esp+90h+var_40], eax
jge     short loc_7428E0
mov     [esp+90h+var_40], eax

loc_7428E0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F6A↑j
mov     al, [esp+90h+var_7D]
test    al, al
jnz     loc_7429D4
mov     edx, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [edx+0BCh]
test    al, al
jnz     loc_7429D4
mov     eax, [ebx]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, ebx
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [eax+140h]
test    ch, 1
jnz     loc_7429D4
mov     edx, [ebp+0]
lea     eax, [esp+90h+var_74]
push    0
push    eax
mov     ecx, ebp
call    dword ptr [edx+4Ch]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBuildableAdvanced
test    al, al
jz      loc_7429D4
mov     edx, [ebx]
lea     eax, [esp+90h+var_30]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBuildableAdvanced
test    al, al
jz      short loc_7429D4
mov     edx, [ebx]
lea     eax, [esp+90h+var_30]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+94h+var_6C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+94h+var_58]
sar     eax, 8
mov     word ptr [esp+94h+var_6C+2], ax
mov     ecx, [esp+94h+var_6C]
mov     eax, [ebp+0]
mov     [esp+94h+var_58], ecx
lea     ecx, [esp+94h+var_78]
push    edx
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1C0h]
push    eax
mov     ecx, ebp
call    BuildingTypeClass__IsPlacementValid
test    al, al
jnz     loc_742C06

loc_7429D4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F76↑j
; UnitClass__AssignDestination_SyncLog+F8B↑j ...
mov     eax, [ebp+674h]
lea     ebx, [ebp+674h]
test    eax, eax
mov     [esp+90h+var_78], 0
jz      loc_742A7F
mov     ecx, ebx
call    Stream__GetChecked
mov     edx, [eax]
lea     ecx, [esp+90h+var_54]
push    ecx
push    offset unk_819088
push    eax
call    dword ptr [edx]
mov     esi, eax
test    esi, esi
jge     short loc_742A19
lea     ecx, [esp+90h+var_78]
call    Release2COM
xor     eax, eax
jmp     short loc_742A28
; ---------------------------------------------------------------------------

loc_742A19:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+109A↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+var_78]
call    Release2COM
mov     eax, edi

loc_742A28:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10A7↑j
test    esi, esi
mov     [esp+90h+var_78], eax
jge     short loc_742A42
cmp     esi, 80004002h
jz      short loc_742A42
push    esi
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742A42:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10BE↑j
; UnitClass__AssignDestination_SyncLog+10C6↑j
test    eax, eax
jz      short loc_742A7F
mov     edx, [eax]
push    eax
call    dword ptr [edx+1Ch]
test    al, al
jz      short loc_742A7F
mov     eax, [ebx]
test    eax, eax
jz      short loc_742A5C
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742A5C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10E4↑j
mov     eax, [esp+90h+var_78]
mov     dword ptr [ebx], 0
test    eax, eax
jnz     short loc_742A78
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742A78:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10F8↑j
mov     edx, [eax]
push    ebx
push    eax
call    dword ptr [edx+10h]

loc_742A7F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+107A↑j
; UnitClass__AssignDestination_SyncLog+10D4↑j ...
push    7               ; dwClsContext
push    0               ; pUnkOuter
push    offset stru_7E9A30 ; rclsid
lea     ecx, [esp+9Ch+var_74] ; ppv
mov     dword ptr [esp+9Ch+var_74], 0
call    CreateInstanceCOM
test    eax, eax
jge     short loc_742AAA
cmp     eax, 80004002h
jz      short loc_742AAA
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742AAA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+112B↑j
; UnitClass__AssignDestination_SyncLog+1132↑j
mov     eax, dword ptr [esp+90h+var_74]
test    eax, eax
jnz     short loc_742AC0
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, dword ptr [esp+90h+var_74]

loc_742AC0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1140↑j
mov     ecx, [eax]
push    ebp
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, dword ptr [esp+90h+var_74]
xor     eax, eax
test    ecx, ecx
mov     [esp+90h+ppv], eax
jz      short loc_742B29
lea     ecx, [esp+90h+var_74]
call    Stream__GetChecked
mov     edx, [eax]
lea     ecx, [esp+90h+var_54]
push    ecx
push    offset unk_819088
push    eax
call    dword ptr [edx]
mov     esi, eax
test    esi, esi
jge     short loc_742B00
lea     ecx, [esp+90h+ppv]
call    Release2COM
xor     eax, eax
jmp     short loc_742B0F
; ---------------------------------------------------------------------------

loc_742B00:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1181↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+ppv]
call    Release2COM
mov     eax, edi

loc_742B0F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+118E↑j
test    esi, esi
mov     [esp+90h+ppv], eax
jge     short loc_742B29
cmp     esi, 80004002h
jz      short loc_742B29
push    esi
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+ppv]

loc_742B29:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1163↑j
; UnitClass__AssignDestination_SyncLog+11A5↑j ...
mov     ecx, [esp+90h+var_78]
cmp     ecx, eax
jz      short loc_742B5D
mov     esi, ecx
mov     ecx, eax
test    eax, eax
mov     [esp+90h+var_78], ecx
jz      short loc_742B4B
mov     edx, [eax]
push    eax
call    dword ptr [edx+4]
mov     ecx, [esp+90h+var_78]
mov     eax, [esp+90h+ppv]

loc_742B4B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11CB↑j
test    esi, esi
jz      short loc_742B5D
mov     eax, [esi]
push    esi
call    dword ptr [eax+8]
mov     ecx, [esp+90h+var_78]
mov     eax, [esp+90h+ppv]

loc_742B5D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11BF↑j
; UnitClass__AssignDestination_SyncLog+11DD↑j
test    eax, eax
jz      short loc_742B6B
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_742B6B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11EF↑j
test    ecx, ecx
jz      short loc_742BEA
mov     eax, [ebx]
mov     edx, [ecx]
push    eax
push    ecx
call    dword ptr [edx+0Ch]
mov     esi, [ebx]
mov     eax, dword ptr [esp+90h+var_74]
cmp     esi, eax
jz      short loc_742B98
test    eax, eax
mov     [ebx], eax
jz      short loc_742B8E
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+4]

loc_742B8E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1216↑j
test    esi, esi
jz      short loc_742B98
mov     edx, [esi]
push    esi
call    dword ptr [edx+8]

loc_742B98:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1210↑j
; UnitClass__AssignDestination_SyncLog+1220↑j
lea     eax, [ebp+9Ch]
mov     ecx, [ebp+9Ch]
mov     dword ptr [esp+90h+var_54], ecx
mov     edx, [eax+4]
mov     dword ptr [esp+90h+var_54+4], edx
mov     eax, [eax+8]
mov     [esp+90h+var_4C], eax
mov     eax, [ebx]
test    eax, eax
jnz     short loc_742BC6
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742BC6:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+124A↑j
mov     esi, [ebx]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, 87F7E8h
mov     edi, [esi]
call    Coord__To_Cell
xor     edx, edx
mov     dl, [eax+11Ch]
push    edx
push    esi
call    dword ptr [edi+7Ch]
mov     ecx, [esp+90h+var_78]

loc_742BEA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11FD↑j
mov     eax, dword ptr [esp+90h+var_74]
test    eax, eax
jz      short loc_742BFC
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_742BFC:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1280↑j
test    ecx, ecx
jz      short loc_742C06
mov     edx, [ecx]
push    ecx
call    dword ptr [edx+8]

loc_742C06:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F1E↑j
; UnitClass__AssignDestination_SyncLog+F31↑j ...
mov     eax, [esp+90h+var_64]
test    eax, eax
jz      short loc_742C14
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742C14:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E59↑j
; UnitClass__AssignDestination_SyncLog+E83↑j ...
mov     ebx, [esp+90h+var_58]
test    ebx, ebx
jz      loc_742D3F
mov     edx, [ebx+520h]
mov     al, [edx+16A9h]
test    al, al
jz      short loc_742CA8
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jz      short loc_742C59
push    0
mov     ecx, ebx
call    Team__GetMember
cmp     eax, ebp
jz      short loc_742C59
mov     edi, dword ptr [esp+90h+arg_0]
mov     ecx, ebp
push    edi
call    TechnoClass__SetFocus
jmp     short loc_742CAF
; ---------------------------------------------------------------------------

loc_742C59:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12C9↑j
; UnitClass__AssignDestination_SyncLog+12D6↑j
mov     eax, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     short loc_742CA8
mov     edx, [ebp+0]
push    0Eh
mov     ecx, ebp
call    dword ptr [edx+274h]
cmp     eax, 1
jnz     short loc_742C90
mov     eax, dword ptr [esp+90h+arg_0+4]
mov     ecx, dword ptr [esp+90h+arg_0]
push    eax
push    ecx
jmp     short loc_742D09
; ---------------------------------------------------------------------------

loc_742C90:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+130C↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     edi, edi
mov     dword ptr [esp+90h+arg_0], edi
jmp     short loc_742CAF
; ---------------------------------------------------------------------------

loc_742CA8:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12BE↑j
; UnitClass__AssignDestination_SyncLog+12FA↑j
mov     edi, dword ptr [esp+90h+arg_0]

loc_742CAF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12E7↑j
; UnitClass__AssignDestination_SyncLog+1336↑j
mov     eax, [ebx+520h]
mov     cl, [eax+16ABh]
test    cl, cl
jz      loc_742D46
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jz      short loc_742CDB
push    0
mov     ecx, ebx
call    Team__GetMember
cmp     eax, ebp
jnz     short loc_742D46

loc_742CDB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+135C↑j
mov     edx, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [edx+278h]
cmp     eax, 1
jnz     short loc_742D46
mov     eax, [ebp+0]
push    0Eh
mov     ecx, ebp
call    dword ptr [eax+274h]
cmp     eax, 1
jnz     short loc_742D27
mov     ecx, dword ptr [esp+90h+arg_0+4]
push    ecx
push    edi

loc_742D09:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+131E↑j
mov     ecx, ebp
call    FootClass__AssignDestination
pop     edi
mov     dword ptr [ebp+5E0h], 0FFFFFFFFh
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_742D27:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+138E↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     edi, edi
mov     dword ptr [esp+90h+arg_0], edi
jmp     short loc_742D46
; ---------------------------------------------------------------------------

loc_742D3F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12AA↑j
mov     edi, dword ptr [esp+90h+arg_0]

loc_742D46:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+134D↑j
; UnitClass__AssignDestination_SyncLog+1369↑j ...
push    0
mov     ecx, ebp
call    Team__GetMember
mov     esi, eax
test    esi, esi
jz      loc_742E47
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     loc_742E47
mov     ecx, [esi+520h]
mov     al, [ecx+16BDh]
test    al, al
jz      loc_742E47
cmp     dword ptr [ebp+0ACh], 7
jz      loc_742E47
mov     eax, [ebp+2B0h]
test    eax, eax
jnz     loc_742E3A
add     esi, 9Ch
mov     eax, [esi]
mov     ecx, [esi+4]
mov     edx, [esi+8]
mov     [esp+90h+var_28], edx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_54], ax
mov     eax, ecx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_54+2], ax
mov     eax, dword ptr [esp+90h+var_54]
mov     ecx, dword ptr [esp+90h+var_54+2]
add     eax, 4
inc     ecx
mov     word ptr [esp+90h+var_58], ax
mov     word ptr [esp+90h+var_58+2], cx
mov     edx, [esp+90h+var_58]
lea     eax, [esp+90h+var_54]
mov     ecx, 87F7E8h
push    eax
mov     dword ptr [esp+94h+var_54], edx
call    CellCoord__To_CellObj
cmp     edi, eax
jz      short loc_742E47
mov     edx, [ebp+5ACh]
lea     ecx, [ebp+5ACh]
call    dword ptr [edx+0Ch]
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]
test    edi, edi
jz      loc_74317A
push    edi
mov     ecx, ebp
call    BuildingClass__AddToProductionQueue
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_742E3A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1422↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]

loc_742E47:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+13E3↑j
; UnitClass__AssignDestination_SyncLog+13F3↑j ...
test    ebx, ebx
jz      loc_742F48
mov     ecx, [ebp+6C4h]
mov     eax, [ecx+3F8h]
test    eax, eax
jle     loc_742F48
mov     edx, [ecx+3F8h]
xor     eax, eax
test    edx, edx
jle     loc_742F48
mov     esi, [ebx+520h]
mov     ecx, [ecx+3ECh]

loc_742E7F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1519↓j
cmp     [ecx], esi
jz      short loc_742E90
inc     eax
add     ecx, 4
cmp     eax, edx
jl      short loc_742E7F
jmp     loc_742F48
; ---------------------------------------------------------------------------

loc_742E90:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1511↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     loc_742F48
mov     eax, [ebp+6C4h]
mov     cl, [eax+0E0Eh]
test    cl, cl
jnz     short loc_742EBF
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      loc_742F48

loc_742EBF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+153F↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 10h
jz      short loc_742F48
push    0
mov     ecx, ebp
call    Team__GetMember
cmp     eax, ebx
jz      loc_742FE9
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jnz     loc_742FE9
mov     eax, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     loc_742FE9
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 7
jz      loc_742FE9
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+184h]
cmp     eax, 0Ah
jz      loc_742FE9
mov     edx, [ebp+0]
push    0
push    7
mov     ecx, ebp
call    dword ptr [edx+1E8h]

loc_742F3D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+179E↓j
mov     dword ptr [esp+90h+arg_0], 0

loc_742F48:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+14D9↑j
; UnitClass__AssignDestination_SyncLog+14ED↑j ...
mov     eax, [ebp+674h]
test    eax, eax
jnz     short loc_742F5C
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742F5C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+15E0↑j
mov     eax, [ebp+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+60h]
test    al, al
jnz     loc_74314F
mov     ecx, [ebp+21Ch]
call    HouseClass__IonSensitivesShouldBeOffline
test    al, al
jnz     loc_74314F
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1BCh]
mov     ecx, [eax+140h]
test    ch, 1
jnz     loc_74314F
mov     esi, [eax+0E4h]
test    esi, esi
jz      loc_74314F

loc_742FAB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1672↓j
cmp     esi, ebp
jz      short loc_742FDD
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_742FDD
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jnz     loc_74312F
mov     cl, [eax+16ABh]
test    cl, cl
jnz     loc_74312F

loc_742FDD:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+163D↑j
; UnitClass__AssignDestination_SyncLog+1649↑j
mov     esi, [esi+30h]
test    esi, esi
jnz     short loc_742FAB
jmp     loc_74314F
; ---------------------------------------------------------------------------

loc_742FE9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+156A↑j
; UnitClass__AssignDestination_SyncLog+1579↑j ...
mov     eax, dword ptr [esp+90h+arg_0]
test    eax, eax
jz      loc_742F48
mov     ecx, eax
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     loc_742F48
push    0
mov     ecx, ebp
call    Team__GetMember
cmp     eax, dword ptr [esp+90h+arg_0]
jz      loc_742F48
lea     ecx, [ebx+9Ch]
xor     eax, eax
mov     edx, ecx
mov     word ptr [esp+90h+var_5C], ax
mov     word ptr [esp+90h+var_5C+2], ax
push    0
mov     eax, [edx]
push    0
mov     esi, 1
mov     ebx, [edx+4]
mov     edi, esi
mov     edx, [edx+8]
mov     [esp+98h+var_28], edx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+98h+var_58], ax
mov     eax, ebx
cdq
and     edx, 0FFh
mov     ebx, [ecx+4]
add     eax, edx
sar     eax, 8
mov     word ptr [esp+98h+var_58+2], ax
mov     eax, [esp+98h+var_58]
mov     dword ptr [esp+98h+var_54], eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
mov     ecx, [ecx+8]
add     eax, edx
mov     [esp+98h+var_28], ecx
sar     eax, 8
mov     word ptr [esp+98h+var_58], ax
mov     eax, ebx
cdq
and     edx, 0FFh
lea     ecx, [esp+98h+var_5C]
add     eax, edx
push    ecx
sar     eax, 8
push    0
mov     word ptr [esp+0A0h+var_58+2], ax
mov     edx, [esp+0A0h+var_58]
mov     eax, [ebp+6C4h]
push    0
push    esi
push    0
mov     [esp+0ACh+var_60], edx
mov     eax, [eax+5B4h]
push    edi
push    esi
push    0
push    eax
push    0
lea     edx, [esp+0C0h+var_54]
push    eax
push    edx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
push    eax
lea     eax, [esp+0C0h+var_60]
push    2
lea     ecx, [esp+0C4h+var_64]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+90h+var_58], eax
jnz     short loc_743114
mov     dx, word ptr [esp+90h+var_58+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      loc_742F3D

loc_743114:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1790↑j
lea     eax, [esp+90h+var_58]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     dword ptr [esp+90h+arg_0], eax
jmp     loc_742F48
; ---------------------------------------------------------------------------

loc_74312F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1659↑j
; UnitClass__AssignDestination_SyncLog+1667↑j
mov     eax, [ebp+674h]
test    eax, eax
jnz     short loc_743143
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_743143:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+17C7↑j
mov     eax, [ebp+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+58h]

loc_74314F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+15FA↑j
; UnitClass__AssignDestination_SyncLog+160D↑j ...
mov     edx, dword ptr [esp+90h+arg_0+4]
mov     eax, dword ptr [esp+90h+arg_0]
push    edx
push    eax
mov     ecx, ebp
call    FootClass__AssignDestination
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_743173:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+14D↑j
; UnitClass__AssignDestination_SyncLog+15B↑j
mov     ecx, ebp
call    FootClass__ClearPathIndex

loc_74317A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F0↑j
; UnitClass__AssignDestination_SyncLog+120↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
*/
}

// IDA: 0x7414E0 (ApproachTarget_DisallowMoving, 435B)
// 0x7414e0
int UnitClass::ApproachTarget_DisallowMoving()
{
// [IDA decompile]
void *__thiscall UnitClass::ApproachTarget_DisallowMoving(_DWORD *this, char a2)
{
  int v3; // eax
  _BYTE *v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v10; // eax

  if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135))
    || (v3 = *(this + 173)) == 0
    || *(this + 361)
    || (v4 = (*(_BYTE *)(v3 + 20) & 1) != 0 ? (_BYTE *)v3 : 0, !*(_BYTE *)(*(this + 433) + 3368))
    && !TechnoTypeClass::HasVoiceResponse((float *)this, 17)
    || ObjectClass::DistanceTo(this, *(this + 173)) >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5928)
    || !v4
    || !ObjectClass::IsCrushable(v4, (_DWORD **)this)
    || !*(_BYTE *)(*(this + 433) + 3373) && (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
  {
    if ( *(_BYTE *)(*(this + 433) + 3434) )
    {
      v5 = *this;
      v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 740))(this, *(this + 173));
      v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(v5 + 1016))(this, v6);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 160);
        if ( v8 )
        {
          if ( *(_BYTE *)(v8 + 704) )
          {
            if ( !a2 )
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
            return (void *)*(this + 173);
          }
        }
      }
    }
    if ( !*(_BYTE *)(*(this + 433) + 3369) )
      return FootClass::CalculateApproachPath(this, 0);
    v10 = (_BYTE *)*(this + 173);
    if ( !v10 || *(_BYTE *)(*(this + 135) + 492) && *((_BYTE *)this + 1292) )
      return FootClass::CalculateApproachPath(this, 0);
    if ( (v10[20] & 2) == 0 || !ObjectClass::IsCrushable((v10[20] & 2) != 0 ? v10 : 0, (_DWORD **)this) )
      return FootClass::CalculateApproachPath(this, 0);
  }
  if ( !a2 )
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
  return (void *)*(this + 173);
}

/* ASM:
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_741599
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_741599
mov     ecx, [esi+5A4h]
test    ecx, ecx
jnz     loc_741599
test    eax, eax
jnz     short loc_74151B
xor     edi, edi
jmp     short loc_741529
; ---------------------------------------------------------------------------

loc_74151B:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+35↑j
mov     cl, [eax+14h]
and     cl, 1
neg     cl
sbb     ecx, ecx
and     ecx, eax
mov     edi, ecx

loc_741529:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+39↑j
mov     edx, [esi+6C4h]
mov     al, [edx+0D28h]
test    al, al
jnz     short loc_741546
push    11h
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_741599

loc_741546:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+57↑j
mov     eax, [esi+2B4h]
mov     ecx, esi
push    eax
call    ObjectClass__DistanceTo
mov     ecx, ds:8871E0h
cmp     eax, [ecx+1728h]
jge     short loc_741599
test    edi, edi
jz      short loc_741599
push    esi
mov     ecx, edi
call    ObjectClass__IsCrushable
test    al, al
jz      short loc_741599
mov     edx, [esi+6C4h]
mov     al, [edx+0D2Dh]
test    al, al
jnz     loc_74165F
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      loc_74165F

loc_741599:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+11↑j
; UnitClass__ApproachTarget_DisallowMoving+1F↑j ...
mov     edx, [esi+6C4h]
mov     al, [edx+0D6Ah]
test    al, al
jz      short loc_741603
mov     eax, [esi+2B4h]
mov     edi, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3F8h]
mov     eax, [eax]
test    eax, eax
jz      short loc_741603
mov     eax, [eax+0A0h]
test    eax, eax
jz      short loc_741603
mov     cl, [eax+2C0h]
test    cl, cl
jz      short loc_741603
mov     al, [esp+8+arg_0]
test    al, al
jnz     short loc_7415F8
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]

loc_7415F8:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+103↑j
mov     eax, [esi+2B4h]
pop     edi
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_741603:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+C7↑j
; UnitClass__ApproachTarget_DisallowMoving+E7↑j ...
mov     ecx, [esi+6C4h]
mov     al, [ecx+0D29h]
test    al, al
jz      short loc_741685
mov     eax, [esi+2B4h]
test    eax, eax
jz      short loc_741685
mov     edx, [esi+21Ch]
mov     cl, [edx+1ECh]
test    cl, cl
jz      short loc_741637
mov     cl, [esi+50Ch]
test    cl, cl
jnz     short loc_741685

loc_741637:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+14B↑j
test    eax, eax
jz      short loc_741685
test    byte ptr [eax+14h], 2
jz      short loc_741685
test    eax, eax
jnz     short loc_741649
xor     ecx, ecx
jmp     short loc_741655
; ---------------------------------------------------------------------------

loc_741649:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+163↑j
mov     cl, [eax+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, eax

loc_741655:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+167↑j
push    esi
call    ObjectClass__IsCrushable
test    al, al
jz      short loc_741685

loc_74165F:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+A0↑j
; UnitClass__ApproachTarget_DisallowMoving+B3↑j
mov     al, [esp+8+arg_0]
test    al, al
jnz     short loc_74167A
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]

loc_74167A:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+185↑j
mov     eax, [esi+2B4h]
pop     edi
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_741685:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+131↑j
; UnitClass__ApproachTarget_DisallowMoving+13B↑j ...
push    0
mov     ecx, esi
call    FootClass__CalculateApproachPath
pop     edi
pop     esi
retn    4
*/
}

// IDA: 0x736990 (UpdateRotation_TurretFacing_EMP, 639B)
// 0x736990
int UnitClass::UpdateRotation_TurretFacing_EMP()
{
// [IDA decompile]
char __thiscall UnitClass::UpdateRotation_TurretFacing_EMP(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  bool v7; // al
  int v8; // edi
  bool v9; // cl
  _WORD *v10; // eax
  int v11; // eax
  _WORD *Value; // [esp-4h] [ebp-14h]
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 692);
  if ( v2 && !*(_BYTE *)(this + 1711) )
  {
    v3 = *ObjectClass::CalcTargetFacing((void *)this, &v15, v2);
    v4 = *(_DWORD *)(this + 1732);
    v14 = v3;
    if ( *(_BYTE *)(v4 + 3233) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1012))(this);
      if ( IsNonNullPtr((_DWORD *)v5) && !*(_BYTE *)(*(_DWORD *)v5 + 299) )
      {
        if ( *(_BYTE *)(v5 + 24) )
        {
          Value = ProgressTimer::GetValue((_WORD *)(this + 904), &v15);
          FacingClass::Update((char *)(this + 928), Value);
        }
        else
        {
          FacingClass::Update((char *)(this + 928), &v14);
        }
      }
    }
    else if ( *(_DWORD *)(v4 + 1660) == 1 && !*(_DWORD *)(this + 1444) )
    {
      if ( !*(_DWORD *)(this + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652))
        && *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 904), &v15) == (_WORD)v14 )
      {
        FacingClass::Update((char *)(this + 904), &v14);
      }
    }
  }
  v6 = *(_DWORD *)(this + 1732);
  if ( *(_BYTE *)(v6 + 3361) )
  {
    LOWORD(v14) = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 928), &v15) >> 7) + 1) >> 1)
                 + 8) << 8;
    FacingClass::Update((char *)(this + 928), &v14);
    goto LABEL_38;
  }
  *(_BYTE *)(this + 1711) = 0;
  if ( *(_BYTE *)(v6 + 3233) )
  {
    if ( TimerClass::Active(this + 928) )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3361) )
        *(_BYTE *)(this + 1711) = TimerClass::Active(this + 928);
    }
    else if ( !*(_DWORD *)(this + 692) )
    {
      v7 = dword_A8ED54[12] - *(_DWORD *)(this + 288) >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3588) + 5;
      if ( *(_DWORD *)(this + 740) )
        v7 = 0;
      if ( (!*(_BYTE *)(*(_DWORD *)(this + 1732) + 3603) || !*(_BYTE *)(this + 1760)) && v7 )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1012))(this);
        v9 = IsNonNullPtr((_DWORD *)v8) && *(_BYTE *)(v8 + 24);
        if ( !*(_DWORD *)(this + 1444) || v9 )
        {
          v10 = ProgressTimer::GetValue((_WORD *)(this + 904), &v15);
        }
        else
        {
          if ( *(_BYTE *)(this + 1709) )
            goto LABEL_38;
          v10 = ObjectClass::CalcTargetFacing((void *)this, &v15, *(_DWORD *)(this + 1444));
        }
        FacingClass::Update((char *)(this + 928), v10);
      }
    }
  }
LABEL_38:
  LOBYTE(v11) = *(_BYTE *)(*(_DWORD *)(this + 1732) + 3233);
  if ( (_BYTE)v11 )
  {
    v11 = TimerClass::Active(this + 928);
    *(_DWORD *)(this + 1184) = v11;
  }
  return v11;
}

/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_736A8E
mov     cl, [esi+6AFh]
test    cl, cl
jnz     loc_736A8E
push    eax
lea     eax, [esp+14h+var_4]
push    eax
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
mov     ecx, [eax]
mov     eax, [esi+6C4h]
mov     [esp+10h+var_8], ecx
mov     cl, [eax+0CA1h]
test    cl, cl
jz      short loc_736A2F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3F4h]
mov     edi, eax
mov     ecx, esi
push    edi
call    IsNonNullPtr
test    al, al
jz      loc_736A8E
mov     eax, [edi]
mov     cl, [eax+12Bh]
test    cl, cl
jnz     loc_736A8E
mov     al, [edi+18h]
test    al, al
jz      short loc_736A22
lea     ecx, [esp+10h+var_4]
push    ecx
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue
push    eax
lea     ecx, [esi+3A0h]
jmp     short loc_736A89
; ---------------------------------------------------------------------------

loc_736A22:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+77↑j
lea     edx, [esp+10h+var_8]
lea     ecx, [esi+3A0h]
push    edx
jmp     short loc_736A89
; ---------------------------------------------------------------------------

loc_736A2F:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+44↑j
cmp     dword ptr [eax+67Ch], 1
jnz     short loc_736A8E
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_736A8E
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_736A56
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_736A56:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+BA↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_736A8E
lea     edi, [esi+388h]
lea     edx, [esp+10h+var_4]
push    edx
mov     ecx, edi
call    ProgressTimer__GetValue
mov     ax, [eax]
cmp     ax, word ptr [esp+10h+var_8]
jnz     short loc_736A8E
lea     ecx, [esp+10h+var_8]
push    ecx
mov     ecx, edi

loc_736A89:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+90↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+9D↑j
call    FacingClass__Update

loc_736A8E:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+F↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+1D↑j ...
mov     eax, [esi+6C4h]
push    ebx
mov     cl, [eax+0D21h]
test    cl, cl
jz      short loc_736AD5
lea     edi, [esi+3A0h]
lea     edx, [esp+14h+var_4]
push    edx
mov     ecx, edi
call    ProgressTimer__GetValue
mov     eax, [eax]
lea     ecx, [esp+14h+var_8]
shr     eax, 7
inc     eax
push    ecx
shr     eax, 1
and     eax, 0FFh
mov     ecx, edi
add     eax, 8
shl     eax, 8
mov     word ptr [esp+18h+var_8], ax
jmp     loc_736BDD
; ---------------------------------------------------------------------------

loc_736AD5:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+10D↑j
mov     byte ptr [esi+6AFh], 0
mov     cl, [eax+0CA1h]
test    cl, cl
jz      loc_736BE2
lea     ebx, [esi+3A0h]
mov     ecx, ebx
call    TimerClass__Active
test    al, al
jz      short loc_736B21
mov     edx, [esi+6C4h]
mov     al, [edx+0D21h]
test    al, al
jnz     loc_736BE2
mov     ecx, ebx
call    TimerClass__Active
mov     [esi+6AFh], al
jmp     loc_736BE2
; ---------------------------------------------------------------------------

loc_736B21:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+169↑j
mov     eax, [esi+2B4h]
test    eax, eax
jnz     loc_736BE2
mov     ecx, dword_A8ED54+30h
mov     edx, [esi+120h]
sub     ecx, edx
mov     edx, ds:8871E0h
mov     al, 1
mov     edx, [edx+0E04h]
add     edx, 5
cmp     ecx, edx
jge     short loc_736B54
xor     al, al

loc_736B54:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+1C0↑j
mov     ecx, [esi+2E4h]
test    ecx, ecx
jz      short loc_736B60
xor     al, al

loc_736B60:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+1CC↑j
mov     ecx, [esi+6C4h]
mov     dl, [ecx+0E13h]
test    dl, dl
jz      short loc_736B7A
mov     cl, [esi+6E0h]
test    cl, cl
jnz     short loc_736BE2

loc_736B7A:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+1DE↑j
test    al, al
jz      short loc_736BE2
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3F4h]
mov     edi, eax
mov     ecx, esi
push    edi
call    IsNonNullPtr
test    al, al
jz      short loc_736BA1
mov     al, [edi+18h]
test    al, al
jz      short loc_736BA1
mov     cl, 1
jmp     short loc_736BA3
; ---------------------------------------------------------------------------

loc_736BA1:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+204↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+20B↑j
xor     cl, cl

loc_736BA3:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+20F↑j
mov     eax, [esi+5A4h]
test    eax, eax
jz      short loc_736BCA
test    cl, cl
jnz     short loc_736BCA
mov     cl, [esi+6ADh]
test    cl, cl
jnz     short loc_736BE2
push    eax
lea     eax, [esp+18h+var_4]
push    eax
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
jmp     short loc_736BDA
; ---------------------------------------------------------------------------

loc_736BCA:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+21B↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+21F↑j
lea     ecx, [esp+14h+var_4]
push    ecx
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue

loc_736BDA:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+238↑j
push    eax
mov     ecx, ebx

loc_736BDD:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+140↑j
call    FacingClass__Update

loc_736BE2:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+154↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+179↑j ...
mov     edx, [esi+6C4h]
pop     ebx
mov     al, [edx+0CA1h]
test    al, al
jz      short loc_736C09
lea     ecx, [esi+3A0h]
call    TimerClass__Active
and     eax, 0FFh
mov     [esi+4A0h], eax

loc_736C09:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+261↑j
pop     edi
pop     esi
add     esp, 8
retn
*/
}

// IDA: 0x743A50 (Scatter, 1622B)
// 0x743a50
int UnitClass::Scatter(CellStruct* threatPos, bool a3, bool a4)
{
// [IDA decompile]
int __thiscall UnitClass::Scatter(_DWORD *this, int *a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int *v9; // esi
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // esi
  void *v13; // eax
  double v14; // st7
  char v15; // al
  char v16; // di
  unsigned int v17; // esi
  int v18; // edx
  int v19; // edi
  _DWORD *v20; // eax
  char *v21; // esi
  int v22; // esi
  int v23; // eax
  char v24; // si
  int v25; // esi
  int v26; // ecx
  __int16 v27; // ax
  void *v28; // edi
  int v29; // ebx
  int LandHeight; // eax
  int v31; // kr04_4
  _DWORD *v32; // eax
  unsigned __int16 v33; // ax
  int v34; // [esp+44h] [ebp-48h] BYREF
  unsigned int v35; // [esp+48h] [ebp-44h] BYREF
  int *v36; // [esp+4Ch] [ebp-40h] BYREF
  int v37; // [esp+50h] [ebp-3Ch]
  unsigned int v38; // [esp+54h] [ebp-38h] BYREF
  int v39; // [esp+58h] [ebp-34h] BYREF
  int v40; // [esp+5Ch] [ebp-30h] BYREF
  int v41; // [esp+60h] [ebp-2Ch] BYREF
  int v42; // [esp+64h] [ebp-28h] BYREF
  int v43; // [esp+68h] [ebp-24h]
  int v44; // [esp+6Ch] [ebp-20h]
  _BYTE v45[8]; // [esp+70h] [ebp-1Ch] BYREF
  int v46; // [esp+78h] [ebp-14h]
  _DWORD v47[4]; // [esp+7Ch] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 652))(this);
  if ( !(_BYTE)result )
    return result;
  v6 = *(this + 413);
  v7 = this + 413;
  v34 = 0;
  if ( !v6 )
    goto LABEL_7;
  v8 = StreamClass::Set2(&v34, this + 413);
  if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  if ( !v34 )
LABEL_7:
    WinAPI::Wrapper(-2147467261);
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v34 + 12))(v34, v47);
  if ( !memcmp(v47, &g_CLSID_HoverLocomotion, 0x10u) )
    goto LABEL_66;
  if ( !MissionClass::GetMissionControl(this)[9] && !(_BYTE)a3 )
  {
    result = v34;
    if ( v34 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    return result;
  }
  if ( TimerClass::Active((int)(this + 226)) )
    goto LABEL_66;
  if ( *(this + 361) && !(_BYTE)a4 )
  {
    result = v34;
    if ( v34 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    return result;
  }
  if ( *((_BYTE *)this + 1760) || *((_BYTE *)this + 1761) || *((_BYTE *)this + 1762) )
  {
    result = v34;
    if ( v34 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    return result;
  }
  if ( !*v7 )
    WinAPI::Wrapper(-2147467261);
  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 96))(*v7) )
  {
    result = v34;
    if ( v34 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    return result;
  }
  v9 = a2;
  if ( *a2 == dword_A8ED54[145573] && a2[1] == dword_A8ED54[145574] && a2[2] == dword_A8ED54[145575] )
  {
    a3 = 0;
    v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 76))(this, v45, 0);
    v11 = (int)v10;
    LOWORD(a4) = *v10 / 256;
    LOBYTE(v11) = *((_BYTE *)this + 140);
    HIWORD(a4) = v10[1] / 256;
    v39 = a4;
    a2 = (int *)*LayerClass::Pathfinding_Find(
                   MEMORY[0x87F7E8],
                   (int)&v38,
                   &v38,
                   (__int16 *)&v39,
                   *(_DWORD *)(*(this + 433) + 1660),
                   -1,
                   0,
                   v11,
                   1,
                   1,
                   0,
                   1,
                   0,
                   1,
                   (__int16 *)&a3,
                   0,
                   0);
    if ( a2 != (int *)dword_A8ED54[145561] )
    {
      v12 = *this;
      v13 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a2);
      goto LABEL_65;
    }
    goto LABEL_66;
  }
  if ( MissionClass::GetMissionControl(this)[7] )
  {
    result = v34;
    if ( v34 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
    return result;
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 1 && *((_BYTE *)this + 1745)
    || *(this + 361) && (!(_BYTE)a4 || *((_BYTE *)this + 1711))
    || *(this + 173) && !(_BYTE)a3 && Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 1, 4) != 1 )
  {
    goto LABEL_66;
  }
  a4 = *v9;
  if ( a4 == dword_A8ED54[145573] && v9[1] == dword_A8ED54[145574] && v9[2] == dword_A8ED54[145575] )
  {
    v17 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v40) >> 12) + 1) >> 1) & 7;
    v16 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2) + v17 - 1;
  }
  else
  {
    v42 = *(this + 39);
    v43 = *(this + 40);
    v44 = *(this + 41);
    v14 = Math::CalcAngle((double)v9[1] - (double)v43, (double)v42 - (double)(int)a4);
    LOWORD(a4) = Math::RoundToInt((v14 - 1.570796326794897) * -10430.06004058427);
    v15 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
    v16 = v15 + (((a4 >> 12) + 1) >> 1) - 1;
  }
  v18 = *this;
  v19 = v16 & 7;
  v37 = v19;
  a2 = 0;
  a3 = 0;
  v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(v18 + 76))(this, v45, 0);
  LOWORD(a4) = *v20 / 256;
  HIWORD(a4) = v20[1] / 256;
  v35 = a4;
  v21 = (char *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v35);
  v22 = v21[283] + (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) != 0 ? 4 : 0;
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 76))(this, v45, 0);
  v23 = v22 * dword_A8ED54[145625];
  v24 = 0;
  v46 = v23;
  v39 = 0;
  while ( 1 )
  {
    v25 = ((_BYTE)v19 + v24) & 7;
    v26 = v25 & 7;
    v27 = HIWORD(MEMORY[0x87F7E8][v26 + 32680]);
    LOWORD(v38) = LOWORD(MEMORY[0x87F7E8][v26 + 32680]) + v35;
    HIWORD(v38) = HIWORD(v35) + v27;
    a4 = v38;
    v28 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a4);
    if ( !LayerClass::IsWithinUsableArea(MEMORY[0x87F7E8], (__int16 *)&a4, 1) )
      goto LABEL_56;
    v29 = *this;
    LandHeight = ObjectClass::GetLandHeight(this);
    if ( (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v29 + 428))(this, v28, v25, LandHeight, 0, 1) )
      goto LABEL_56;
    v31 = dword_A8ED54[145561];
    if ( a2 == (int *)dword_A8ED54[145561] )
      a2 = (int *)a4;
    if ( !dword_A8ED54[145561] )
      break;
LABEL_57:
    v24 = ++v39;
    if ( v39 >= 8 )
      goto LABEL_60;
    LOBYTE(v19) = v37;
  }
  v43 = (SHIWORD(a4) << 8) + 128;
  v42 = ((__int16)a4 << 8) + 128;
  v44 = v46;
  v32 = Terrain::ClimbCheck(&v41, &v42);
  if ( a4 != *v32 || (*((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a4) + 80) & 0x100) != 0 )
  {
LABEL_56:
    v31 = dword_A8ED54[145561];
    goto LABEL_57;
  }
  a3 = a4;
  v31 = dword_A8ED54[145561];
LABEL_60:
  v33 = a3;
  v36 = (int *)a3;
  if ( (_WORD)a3 != (_WORD)v31 )
    goto LABEL_64;
  if ( HIWORD(a3) == HIWORD(v31) )
  {
    v33 = (unsigned __int16)a2;
    v36 = a2;
  }
  if ( __PAIR32__(HIWORD(v36), v33) != v31 )
  {
LABEL_64:
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 2, 0);
    v12 = *this;
    v13 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v36);
LABEL_65:
    (*(void (__thiscall **)(_DWORD *, void *, int))(v12 + 1152))(this, v13, 1);
  }
LABEL_66:
  result = v34;
  if ( v34 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
  return result;
}

/* ASM:
sub     esp, 48h
push    ebx
push    ebp
mov     ebp, ecx
push    esi
push    edi
mov     eax, [ebp+0]
call    dword ptr [eax+28Ch]
test    al, al
jz      loc_74409C
mov     eax, [ebp+674h]
lea     ebx, [ebp+674h]
test    eax, eax
mov     [esp+58h+var_48], 0
jz      short loc_743AA5
push    ebx
lea     ecx, [esp+5Ch+var_48]
call    StreamClass__Set2
test    eax, eax
jge     short loc_743A9D
cmp     eax, 80004002h
jz      short loc_743A9D
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_743A9D:                             ; CODE XREF: UnitClass__Scatter+3E↑j
; UnitClass__Scatter+45↑j
mov     eax, [esp+58h+var_48]
test    eax, eax
jnz     short loc_743AB3

loc_743AA5:                             ; CODE XREF: UnitClass__Scatter+30↑j
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+58h+var_48]

loc_743AB3:                             ; CODE XREF: UnitClass__Scatter+53↑j
mov     ecx, [eax]
lea     edx, [esp+58h+var_10]
push    edx
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, 4
mov     edi, offset g_CLSID_HoverLocomotion
lea     esi, [esp+58h+var_10]
xor     eax, eax
repe cmpsd
jz      loc_744076
mov     ecx, ebp
call    MissionClass__GetMissionControl
mov     cl, [eax+9]
test    cl, cl
jnz     short loc_743B08
mov     al, byte ptr [esp+58h+arg_4]
test    al, al
jnz     short loc_743B08
mov     eax, [esp+58h+var_48]
test    eax, eax
jz      loc_74409C
mov     edx, [eax]
push    eax
call    dword ptr [edx+8]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 48h
retn    0Ch
; ---------------------------------------------------------------------------

loc_743B08:                             ; CODE XREF: UnitClass__Scatter+92↑j
; UnitClass__Scatter+9A↑j
lea     edi, [ebp+388h]
mov     ecx, edi
call    TimerClass__Active
test    al, al
jnz     loc_744076
mov     eax, [ebp+5A4h]
test    eax, eax
jz      short loc_743B4B
mov     al, byte ptr [esp+58h+arg_8]
test    al, al
jnz     short loc_743B4B
mov     eax, [esp+58h+var_48]
test    eax, eax
jz      loc_74409C
mov     edx, [eax]
push    eax
call    dword ptr [edx+8]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 48h
retn    0Ch
; ---------------------------------------------------------------------------

loc_743B4B:                             ; CODE XREF: UnitClass__Scatter+D5↑j
; UnitClass__Scatter+DD↑j
mov     al, [ebp+6E0h]
test    al, al
jnz     loc_74408E
mov     al, [ebp+6E1h]
test    al, al
jnz     loc_74408E
mov     al, [ebp+6E2h]
test    al, al
jnz     loc_74408E
cmp     dword ptr [ebx], 0
jnz     short loc_743B84
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_743B84:                             ; CODE XREF: UnitClass__Scatter+128↑j
mov     eax, [ebx]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+60h]
test    al, al
jnz     short loc_743BAC
mov     eax, [esp+58h+var_48]
test    eax, eax
jz      loc_74409C
mov     edx, [eax]
push    eax
call    dword ptr [edx+8]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 48h
retn    0Ch
; ---------------------------------------------------------------------------

loc_743BAC:                             ; CODE XREF: UnitClass__Scatter+13E↑j
mov     esi, [esp+58h+arg_0]
mov     ecx, dword_A8ED54+8E294h
mov     eax, [esi]
cmp     eax, ecx
jnz     loc_743CA0
mov     ecx, [esi+4]
mov     eax, dword_A8ED54+8E298h
cmp     ecx, eax
jnz     loc_743CA0
mov     edx, [esi+8]
mov     eax, dword_A8ED54+8E29Ch
cmp     edx, eax
jnz     loc_743CA0
xor     eax, eax
lea     ecx, [esp+58h+var_1C]
mov     word ptr [esp+58h+arg_4], ax
mov     word ptr [esp+58h+arg_4+2], ax
mov     eax, [ebp+0]
push    0
mov     esi, 1
push    ecx
mov     ecx, ebp
mov     edi, esi
call    dword ptr [eax+4Ch]
mov     ecx, eax
push    0
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+60h+arg_8], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     cl, [ebp+8Ch]
add     eax, edx
sar     eax, 8
mov     word ptr [esp+60h+arg_8+2], ax
mov     edx, [esp+60h+arg_8]
lea     eax, [esp+60h+arg_4]
mov     [esp+60h+var_34], edx
mov     edx, [ebp+6C4h]
push    eax
push    esi
push    0
mov     eax, [edx+67Ch]
push    esi
push    0
push    edi
push    esi
push    ecx
push    0
push    0FFFFFFFFh
lea     ecx, [esp+88h+var_34]
push    eax
lea     edx, [esp+8Ch+var_38]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+58h+arg_0], eax
jnz     short loc_743C91
mov     ax, word ptr [esp+58h+arg_0+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_744076

loc_743C91:                             ; CODE XREF: UnitClass__Scatter+22D↑j
mov     esi, [ebp+0]
lea     ecx, [esp+58h+arg_0]
push    1
push    ecx
jmp     loc_744063
; ---------------------------------------------------------------------------

loc_743CA0:                             ; CODE XREF: UnitClass__Scatter+16A↑j
; UnitClass__Scatter+17A↑j ...
mov     ecx, ebp
call    MissionClass__GetMissionControl
mov     cl, [eax+7]
test    cl, cl
jz      short loc_743CCA
mov     eax, [esp+58h+var_48]
test    eax, eax
jz      loc_74409C
mov     edx, [eax]
push    eax
call    dword ptr [edx+8]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 48h
retn    0Ch
; ---------------------------------------------------------------------------

loc_743CCA:                             ; CODE XREF: UnitClass__Scatter+25C↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     short loc_743CE5
mov     al, [ebp+6D1h]
test    al, al
jnz     loc_744076

loc_743CE5:                             ; CODE XREF: UnitClass__Scatter+285↑j
mov     eax, [ebp+5A4h]
xor     ebx, ebx
cmp     eax, ebx
jz      short loc_743D0B
mov     al, byte ptr [esp+58h+arg_8]
test    al, al
jz      loc_744076
mov     al, [ebp+6AFh]
test    al, al
jnz     loc_744076

loc_743D0B:                             ; CODE XREF: UnitClass__Scatter+29F↑j
cmp     [ebp+2B4h], ebx
jz      short loc_743D39
mov     al, byte ptr [esp+58h+arg_4]
test    al, al
jnz     short loc_743D39
mov     ecx, ds:0A8B230h
push    4
push    1
add     ecx, 218h
call    Random__Range
cmp     eax, 1
jnz     loc_744076

loc_743D39:                             ; CODE XREF: UnitClass__Scatter+2C1↑j
; UnitClass__Scatter+2C9↑j
mov     eax, [esi]
mov     ecx, dword_A8ED54+8E294h
cmp     eax, ecx
mov     [esp+58h+arg_8], eax
jnz     short loc_743D62
mov     edx, [esi+4]
mov     eax, dword_A8ED54+8E298h
cmp     edx, eax
jnz     short loc_743D62
mov     eax, [esi+8]
mov     ecx, dword_A8ED54+8E29Ch
cmp     eax, ecx
jz      short loc_743DDA

loc_743D62:                             ; CODE XREF: UnitClass__Scatter+2F7↑j
; UnitClass__Scatter+303↑j
lea     ecx, [ebp+9Ch]
sub     esp, 8
sub     esp, 8
mov     edx, [ecx]
mov     [esp+68h+var_28], edx
fild    [esp+68h+var_28]
mov     eax, [ecx+4]
mov     [esp+68h+var_24], eax
fisub   [esp+68h+arg_8]
mov     ecx, [ecx+8]
mov     [esp+68h+var_20], ecx
fstp    [esp+68h+var_60] ; double
fild    dword ptr [esi+4]
fisub   [esp+68h+var_24]
fstp    [esp+68h+var_6C+4] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     edx, ds:0A8B230h
push    2
push    ebx
mov     word ptr [esp+60h+arg_8], ax
lea     ecx, [edx+218h]
call    Random__Range
mov     ecx, [esp+58h+arg_8]
shr     ecx, 0Ch
inc     ecx
shr     ecx, 1
lea     edi, [eax+ecx-1]
jmp     short loc_743E08
; ---------------------------------------------------------------------------

loc_743DDA:                             ; CODE XREF: UnitClass__Scatter+310↑j
lea     edx, [esp+58h+var_30]
mov     ecx, edi
push    edx
call    ProgressTimer__GetValue
mov     esi, [eax]
mov     eax, ds:0A8B230h
shr     esi, 0Ch
inc     esi
push    2
shr     esi, 1
push    ebx
lea     ecx, [eax+218h]
and     esi, 7
call    Random__Range
lea     edi, [eax+esi-1]

loc_743E08:                             ; CODE XREF: UnitClass__Scatter+388↑j
mov     edx, [ebp+0]
lea     eax, [esp+58h+var_1C]
and     edi, 7
push    ebx
push    eax
mov     ecx, ebp
mov     [esp+60h+var_3C], edi
mov     word ptr [esp+60h+arg_0], bx
mov     word ptr [esp+60h+arg_0+2], bx
mov     word ptr [esp+60h+arg_4], bx
mov     word ptr [esp+60h+arg_4+2], bx
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+arg_8], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+58h+var_44]
sar     eax, 8
mov     word ptr [esp+58h+arg_8+2], ax
mov     ecx, [esp+58h+arg_8]
mov     [esp+58h+var_44], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     esi, eax
mov     eax, [ebp+0]
push    ebx
mov     ecx, ebp
call    dword ptr [eax+0BCh]
movsx   ecx, byte ptr [esi+11Bh]
and     eax, 0FFh
mov     edx, [ebp+0]
add     eax, ecx
push    ebx
neg     eax
sbb     eax, eax
mov     ecx, ebp
and     eax, 4
mov     esi, eax
lea     eax, [esp+5Ch+var_1C]
push    eax
call    dword ptr [edx+4Ch]
mov     eax, dword_A8ED54+8E364h
imul    eax, esi
xor     esi, esi
mov     [esp+58h+var_14], eax
mov     [esp+58h+var_34], esi
jmp     short loc_743EBC
; ---------------------------------------------------------------------------

loc_743EB8:                             ; CODE XREF: UnitClass__Scatter+5B5↓j
mov     edi, [esp+58h+var_3C]

loc_743EBC:                             ; CODE XREF: UnitClass__Scatter+466↑j
add     esi, edi
mov     dx, word ptr [esp+58h+var_44]
and     esi, 7
mov     ecx, esi
and     ecx, 7
add     dx, ds:89F688h[ecx*4]
lea     eax, ds:89F688h[ecx*4]
mov     ax, ds:89F68Ah[ecx*4]
mov     word ptr [esp+58h+var_38], dx
add     ax, word ptr [esp+58h+var_44+2]
lea     edx, [esp+58h+arg_8]
push    edx
mov     word ptr [esp+5Ch+var_38+2], ax
mov     ecx, [esp+5Ch+var_38]
mov     [esp+5Ch+arg_8], ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     edi, eax
lea     eax, [esp+58h+arg_8]
push    1
push    eax
mov     ecx, 87F7E8h
call    LayerClass__IsWithinUsableArea
test    al, al
jz      loc_743FEC
mov     ebx, [ebp+0]
push    1
push    0
mov     ecx, ebp
call    ObjectClass__GetLandHeight
push    eax
push    esi
push    edi
mov     ecx, ebp
call    dword ptr [ebx+1ACh]
test    eax, eax
jnz     loc_743FEC
mov     ecx, dword_A8ED54+8E264h
mov     eax, [esp+58h+arg_8]
cmp     word ptr [esp+58h+arg_0], cx
mov     dx, word ptr dword_A8ED54+8E266h
jnz     short loc_743F67
cmp     word ptr [esp+58h+arg_0+2], dx
jnz     short loc_743F67
mov     [esp+58h+arg_0], eax

loc_743F67:                             ; CODE XREF: UnitClass__Scatter+50A↑j
; UnitClass__Scatter+511↑j
test    cx, cx
jnz     loc_743FF9
test    dx, dx
jnz     loc_743FF9
movsx   ecx, word ptr [esp+58h+arg_8+2]
movsx   eax, ax
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
xor     edx, edx
add     eax, 80h
mov     [esp+58h+var_24], ecx
mov     ecx, [esp+58h+var_14]
mov     [esp+58h+var_20], edx
mov     [esp+58h+var_28], eax
lea     edx, [esp+58h+var_28]
lea     eax, [esp+58h+var_2C]
mov     [esp+58h+var_20], ecx
mov     ecx, ds:887324h
push    edx
push    eax
call    Terrain__ClimbCheck
mov     cx, word ptr [esp+58h+arg_8]
cmp     cx, [eax]
jnz     short loc_743FEC
mov     dx, word ptr [esp+58h+arg_8+2]
cmp     dx, [eax+2]
jnz     short loc_743FEC
lea     eax, [esp+58h+arg_8]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [eax+140h]
test    ch, 1
jz      short loc_74400D

loc_743FEC:                             ; CODE XREF: UnitClass__Scatter+4CD↑j
; UnitClass__Scatter+4EE↑j ...
mov     ecx, dword_A8ED54+8E264h
mov     dx, word ptr dword_A8ED54+8E266h

loc_743FF9:                             ; CODE XREF: UnitClass__Scatter+51A↑j
; UnitClass__Scatter+523↑j
mov     esi, [esp+58h+var_34]
inc     esi
cmp     esi, 8
mov     [esp+58h+var_34], esi
jl      loc_743EB8
jmp     short loc_744022
; ---------------------------------------------------------------------------

loc_74400D:                             ; CODE XREF: UnitClass__Scatter+59A↑j
mov     ecx, [esp+58h+arg_8]
mov     dx, word ptr dword_A8ED54+8E266h
mov     [esp+58h+arg_4], ecx
mov     ecx, dword_A8ED54+8E264h

loc_744022:                             ; CODE XREF: UnitClass__Scatter+5BB↑j
mov     eax, [esp+58h+arg_4]
cmp     ax, cx
mov     [esp+58h+var_40], eax
jnz     short loc_74404A
cmp     word ptr [esp+58h+arg_4+2], dx
jnz     short loc_74403E
mov     eax, [esp+58h+arg_0]
mov     [esp+58h+var_40], eax

loc_74403E:                             ; CODE XREF: UnitClass__Scatter+5E4↑j
cmp     ax, cx
jnz     short loc_74404A
cmp     word ptr [esp+58h+var_40+2], dx
jz      short loc_744076

loc_74404A:                             ; CODE XREF: UnitClass__Scatter+5DD↑j
; UnitClass__Scatter+5F1↑j
mov     edx, [ebp+0]
push    0
push    2
mov     ecx, ebp
call    dword ptr [edx+1E8h]
mov     esi, [ebp+0]
lea     eax, [esp+58h+var_40]
push    1
push    eax

loc_744063:                             ; CODE XREF: UnitClass__Scatter+24B↑j
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, ebp
call    dword ptr [esi+480h]

loc_744076:                             ; CODE XREF: UnitClass__Scatter+80↑j
; UnitClass__Scatter+C7↑j ...
mov     eax, [esp+58h+var_48]
test    eax, eax
jz      short loc_74409C
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 48h
retn    0Ch
; ---------------------------------------------------------------------------

loc_74408E:                             ; CODE XREF: UnitClass__Scatter+103↑j
; UnitClass__Scatter+111↑j ...
mov     eax, [esp+58h+var_48]
test    eax, eax
jz      short loc_74409C
mov     edx, [eax]
push    eax
call    dword ptr [edx+8]

loc_74409C:                             ; CODE XREF: UnitClass__Scatter+14↑j
; UnitClass__Scatter+A2↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 48h
retn    0Ch
*/
}

// IDA: 0x458A00 (IsCellBlockedByBridge, 121B)
// 0x458a00
int UnitClass::IsCellBlockedByBridge()
{
// [IDA decompile]
bool __thiscall sub_458A00(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v5; // eax
  int v6; // edi

  v2 = a2;
  if ( Cell::IsBridge(a2) != this )
    return 0;
  v5 = *(this + 328);
  if ( *(_DWORD *)(v5 + 5664) == -1 )
    return 1;
  if ( *(_BYTE *)(v5 + 5803) && *(this + 185) )
    return 1;
  v6 = *((__int16 *)v2 + 18);
  return *(__int16 *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 440))(this, &a2)
       + *(_DWORD *)(*(this + 328) + 5664) > v6;
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
mov     ecx, edi
call    Cell__IsBridge
cmp     eax, esi
jz      short loc_458A1A
pop     edi
xor     al, al
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_458A1A:                             ; CODE XREF: UnitClass__IsCellBlockedByBridge+11↑j
mov     eax, [esi+520h]
cmp     dword ptr [eax+1620h], 0FFFFFFFFh
jnz     short loc_458A30
pop     edi
mov     al, 1
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_458A30:                             ; CODE XREF: UnitClass__IsCellBlockedByBridge+27↑j
mov     cl, [eax+16ABh]
test    cl, cl
jz      short loc_458A4B
mov     eax, [esi+2E4h]
test    eax, eax
jz      short loc_458A4B
pop     edi
mov     al, 1
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_458A4B:                             ; CODE XREF: UnitClass__IsCellBlockedByBridge+38↑j
; UnitClass__IsCellBlockedByBridge+42↑j
mov     eax, [esi]
lea     ecx, [esp+8+arg_0]
movsx   edi, word ptr [edi+24h]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     edx, [esi+520h]
movsx   eax, word ptr [eax]
mov     ecx, [edx+1620h]
add     ecx, eax
cmp     ecx, edi
pop     edi
setnle  al
pop     esi
retn    4
*/
}

// IDA: 0x4D03D0 (CompareCoordinateMagnitude, 36B)
// 0x4d03d0
int UnitClass::CompareCoordinateMagnitude()
{
// [IDA decompile]
bool __thiscall sub_4D03D0(__int16 *this, __int16 *a2)
{
  return abs16(*this) >= (int)abs16(*a2);
}

/* ASM:
mov     eax, [esp+arg_0]
push    esi
movsx   eax, word ptr [eax]
cdq
mov     esi, eax
movsx   eax, word ptr [ecx]
xor     esi, edx
xor     ecx, ecx
sub     esi, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, esi
pop     esi
setnl   cl
mov     al, cl
retn    4
*/
}

// IDA: 0x7178B0 (processEnterTarget, 14B)
// 0x7178b0
int UnitClass::processEnterTarget()
{
// [IDA decompile]
int __thiscall sub_7178B0(_DWORD *this, int a2)
{
  return *(this + a2 + 517);
}

/* ASM:
mov     eax, [esp+arg_0]
mov     eax, [ecx+eax*4+814h]
retn    4
*/
}

// IDA: 0x7468C0 (CheckForNearbyEnemies, 606B)
// 0x7468c0
int UnitClass::CheckForNearbyEnemies()
{
// [IDA decompile]
int __thiscall UnitClass::CheckForNearbyEnemies(int *this)
{
  #72 *v2; // ecx
  int v3; // ebp
  int *v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *ObjectByType; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int result; // eax
  int TechLevel; // ecx
  bool v17; // [esp+Dh] [ebp-19h]
  int v18; // [esp+Eh] [ebp-18h]
  int v19; // [esp+12h] [ebp-14h] BYREF
  _DWORD v20[4]; // [esp+16h] [ebp-10h] BYREF

  v17 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) )
  {
    if ( !*(this + 413) )
      WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413))
      && *(_BYTE *)(*(this + 433) + 3378) )
    {
      v17 = Team::GetMember(this, 0) == 0;
    }
  }
  if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
  {
LABEL_30:
    (*(void (__thiscall **)(int *))(*this + 1136))(this);
    goto LABEL_25;
  }
  v2 = (#72 *)dword_A8ED54[12];
  if ( dword_A8ED54[12] % 8 )
  {
    v3 = *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*this + 440))(this, v20);
    v4 = (int *)(*(int (__thiscall **)(int *))(*this + 444))(this);
    LOBYTE(v20[0]) = Cell::IsInRange(v4);
    v5 = 0;
    while ( 1 )
    {
      v6 = v5 & 7;
      LOWORD(v18) = v3 + LOWORD(MEMORY[0x87F7E8][v6 + 32680]);
      HIWORD(v18) = HIWORD(v3) + HIWORD(MEMORY[0x87F7E8][v6 + 32680]);
      v19 = v18;
      v7 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v19);
      ObjectByType = WTFMode::FindObjectByType(v7, v20[0]);
      if ( ObjectByType )
      {
        if ( !Object::IsAlliedWithObjectHouse((_DWORD *)*(this + 135), (int)ObjectByType) )
          break;
      }
      if ( ++v5 >= 8 )
      {
        v2 = (#72 *)dword_A8ED54[12];
        goto LABEL_16;
      }
    }
    TechLevel = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4116);
    *(this + 120) = dword_A8ED54[12];
    *(this + 121) = v20[2];
    *(this + 122) = TechLevel;
    goto LABEL_30;
  }
LABEL_16:
  if ( !v17 )
    goto LABEL_25;
  v9 = *(this + 120);
  v10 = *(this + 122);
  if ( v9 == -1 )
    goto LABEL_20;
  v11 = (int)v2 - v9;
  if ( v11 < v10 )
  {
    v10 -= v11;
LABEL_20:
    if ( v10 )
      goto LABEL_25;
  }
  v12 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4104) - 1);
  if ( v12 >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4104) - 1 )
    v12 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4104) - 1;
  v13 = *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 4092) + 4 * v12);
  if ( v13 )
  {
    v14 = *this;
    *(this + 326) = v13;
    *(this + 327) = 0;
    *((_BYTE *)this + 472) = 1;
    *(this + 119) = dword_A8ED54[12];
    (*(void (__thiscall **)(int *))(v14 + 1180))(this);
  }
LABEL_25:
  result = *(this + 178);
  if ( result )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this)
      || (unsigned __int8)House::IsHumanPlayer((#375 *)*(this + 135)) )
    {
      *(_BYTE *)(*(this + 178) + 413) = 0;
      return 0;
    }
    else
    {
      *(_BYTE *)(*(this + 178) + 413) = 1;
      return 1;
    }
  }
  return result;
}

/* ASM:
sub     esp, 1Ch
push    esi
mov     esi, ecx
mov     byte ptr [esp+20h+var_1C+3], 0
mov     eax, [esi]
call    dword ptr [eax+0C4h]
test    al, al
jnz     short loc_74691D
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_7468EB
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_7468EB:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+1F↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_74691D
mov     edx, [esi+6C4h]
mov     al, [edx+0D32h]
test    al, al
jz      short loc_74691D
push    0
mov     ecx, esi
call    Team__GetMember
test    eax, eax
jnz     short loc_74691D
mov     byte ptr [esp+20h+var_1C+3], 1

loc_74691D:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+15↑j
; UnitClass__CheckForNearbyEnemies+39↑j ...
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_746931
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_746931:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+65↑j
mov     eax, [esi+674h]
push    ebx
push    ebp
push    edi
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+10h]
test    al, al
jnz     loc_746AFF
mov     ecx, dword_A8ED54+30h
mov     edx, ecx
and     edx, 80000007h
jns     short loc_74695D
dec     edx
or      edx, 0FFFFFFF8h
inc     edx

loc_74695D:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+96↑j
jz      loc_746A07
mov     eax, [esi]
lea     ecx, [esp+2Ch+var_10]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     ebp, [eax]
mov     edx, [esi]
mov     ecx, esi
mov     dword ptr [esp+2Ch+var_18], ebp
call    dword ptr [edx+1BCh]
mov     ecx, eax
call    Cell__IsInRange
mov     bx, [esp+2Ch+var_16]
mov     byte ptr [esp+2Ch+var_10], al
xor     edi, edi

loc_746994:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+13F↓j
mov     eax, edi
and     eax, 7
mov     cx, ds:89F688h[eax*4]
mov     dx, ds:89F68Ah[eax*4]
lea     eax, ds:89F688h[eax*4]
add     cx, bp
mov     word ptr [esp+2Ch+var_18], cx
add     dx, bx
lea     ecx, [esp+2Ch+var_14]
mov     [esp+2Ch+var_16], dx
mov     eax, dword ptr [esp+2Ch+var_18]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+30h+var_14], eax
call    CellCoord__To_CellObj
mov     edx, [esp+2Ch+var_10]
mov     ecx, eax
push    edx
call    WTFMode__FindObjectByType
test    eax, eax
jz      short loc_7469FB
mov     ecx, [esi+21Ch]
push    eax
call    Object__IsAlliedWithObjectHouse
test    al, al
jz      loc_746ADC

loc_7469FB:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+125↑j
inc     edi
cmp     edi, 8
jl      short loc_746994
mov     ecx, dword_A8ED54+30h

loc_746A07:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies:loc_74695D↑j
mov     al, byte ptr [esp+2Ch+var_1C+3]
test    al, al
jz      loc_746A9C
mov     edx, [esi+1E0h]
mov     eax, [esi+1E8h]
cmp     edx, 0FFFFFFFFh
jz      short loc_746A2C
sub     ecx, edx
cmp     ecx, eax
jge     short loc_746A30
sub     eax, ecx

loc_746A2C:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+162↑j
test    eax, eax
jnz     short loc_746A9C

loc_746A30:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+168↑j
mov     eax, ds:8871E0h
mov     ecx, ds:0A8B230h
add     ecx, 218h
mov     eax, [eax+1008h]
dec     eax
push    eax
push    0
call    Random__Range
mov     edx, ds:8871E0h
mov     ecx, [edx+1008h]
dec     ecx
cmp     eax, ecx
jl      short loc_746A63
mov     eax, ecx

loc_746A63:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+19F↑j
mov     edx, [edx+0FFCh]
mov     eax, [edx+eax*4]
test    eax, eax
jz      short loc_746A9C
mov     edx, [esi]
mov     [esi+518h], eax
mov     dword ptr [esi+51Ch], 0
mov     byte ptr [esi+1D8h], 1
mov     eax, dword_A8ED54+30h
mov     ecx, esi
mov     [esi+1DCh], eax
call    dword ptr [edx+49Ch]

loc_746A9C:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+14D↑j
; UnitClass__CheckForNearbyEnemies+16E↑j ...
mov     eax, [esi+2C8h]
pop     edi
pop     ebp
pop     ebx
test    eax, eax
jz      short loc_746B19
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0C4h]
test    al, al
jz      short loc_746B0B
mov     ecx, [esi+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jnz     short loc_746B0B
mov     ecx, [esi+2C8h]
mov     eax, 1
pop     esi
mov     [ecx+19Dh], al
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_746ADC:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+135↑j
mov     ecx, ds:8871E0h
mov     eax, dword_A8ED54+30h
lea     edx, [esi+1E0h]
mov     ecx, [ecx+1014h]
mov     [edx], eax
mov     eax, [esp+2Ch+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx

loc_746AFF:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+82↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+470h]
jmp     short loc_746A9C
; ---------------------------------------------------------------------------

loc_746B0B:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+1F5↑j
; UnitClass__CheckForNearbyEnemies+204↑j
mov     ecx, [esi+2C8h]
xor     eax, eax
mov     [ecx+19Dh], al

loc_746B19:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+1E7↑j
pop     esi
add     esp, 1Ch
retn
*/
}

// IDA: 0x737C90 (OnUnderAttack, 2540B)
// 0x737c90
int UnitClass::OnUnderAttack(ObjectClass* attacker, int damage, int weaponIdx, CellStruct* sourceCell, int a8, bool a9, void* a10)
{
// [IDA decompile]
#375 *__userpurge UnitClass::OnUnderAttack@<eax>(
{
  int v11; // ebx
  _DWORD *v12; // eax
  #375 *result; // eax
  _BYTE *v14; // ebx
  int v15; // edi
  int *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // edx
  void **v20; // eax
  void **v21; // eax
  int v22; // edx
  int v23; // ebp
  int v24; // edi
  int *v25; // eax
  int v26; // ebx
  void *v27; // eax
  int v28; // eax
  bool v29; // bl
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // edx
  char v35; // al
  int *v36; // eax
  _DWORD *Value; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // eax
  _DWORD *v44; // edi
  int v45; // edx
  _DWORD *v46; // ecx
  int v47; // eax
  int v48; // eax
  __int16 *v49; // eax
  int v50; // eax
  _DWORD *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // edi
  int v55; // ebp
  int v56; // [esp+2Ah] [ebp-4Ch]
  char v58; // [esp+45h] [ebp-31h]
  int v59; // [esp+46h] [ebp-30h] BYREF
  int v60; // [esp+4Ah] [ebp-2Ch] BYREF
  int v61; // [esp+4Eh] [ebp-28h]
  int v62; // [esp+52h] [ebp-24h] BYREF
  int v63; // [esp+56h] [ebp-20h]
  int v64; // [esp+5Ah] [ebp-1Ch]
  int v65; // [esp+62h] [ebp-14h] BYREF
  _BYTE v66[4]; // [esp+6Ah] [ebp-Ch] BYREF
  int v67; // [esp+6Eh] [ebp-8h] BYREF

  if ( !*((_BYTE *)a1 + 131) || (v58 = 1, !(unsigned __int8)House::IsHumanPlayer((#375 *)a1[135])) )
    v58 = 0;
  v11 = a8;
  if ( !(_BYTE)a8 )
  {
    Member = (_DWORD *)Team::GetMember(a1, 0);
    if ( Member )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) == 6 )
      {
        if ( *(_BYTE *)(Member[328] + 5821) )
        {
          v59 = a1[39];
          v60 = a1[40];
          v61 = a1[41];
          v12 = Coord::To_Cell(MEMORY[0x87F7E8], &v59);
          if ( Cell::IsBridge(v12) == Member )
            return 0;
        }
      }
    }
  }
  v56 = v11;
  v14 = a7;
  result = (#375 *)FootClass::ProcessDeploy(a1, (int)Member, a4, a5, a6, (int)a7, v56, a9, a10);
  a10 = result;
  if ( result != (#375 *)5 )
  {
    if ( result != (#375 *)4 )
    {
      if ( result )
      {
        if ( *(_BYTE *)(a1[433] + 3598) )
        {
          if ( a1[135] == MEMORY[0x87F7E8][528729] )
          {
            v51 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, _DWORD))(*a1 + 76))(a1, v66, 0);
            LOWORD(a8) = *v51 / 256;
            HIWORD(a8) = v51[1] / 256;
            if ( CreateTriggerClassIfFarEnough(4, a8, a8) )
              VoxClass::FindAndPlay(g_Str_EVA_OreMinerUnderAttack, -1);
          }
        }
      }
      if ( !a1[373]
        && v14
        && !*((_BYTE *)a1 + 1048)
        && !Object::IsAlliedWithObjectHouse((_DWORD *)a1[135], (int)v14)
        && !(unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) )
      {
        if ( UnitClass::CanCrushTarget((int)a1, v14) )
        {
          (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 1152))(a1, v14, 1);
          (*(void (__thiscall **)(int *, int, _DWORD))(*a1 + 488))(a1, 2, 0);
          return a10;
        }
        v52 = a1[433];
        if ( (*(_BYTE *)(v52 + 3598) || *(_BYTE *)(v52 + 3599))
          && (*(int (__thiscall **)(int *))(*a1 + 696))(a1) > 0
          && BuildingClass::GetHealthRatio(a1) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888) )
        {
          v53 = a1[433];
          v54 = 0;
          if ( *(int *)(v53 + 1016) > 0 )
          {
            while ( 1 )
            {
              v55 = (*(int (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a1 + 1328))(
                      a1,
                      *(_DWORD *)(*(_DWORD *)(v53 + 1004) + 4 * v54),
                      0,
                      0);
              if ( v55 )
                break;
              v53 = a1[433];
              if ( ++v54 >= *(_DWORD *)(v53 + 1016) )
                return a10;
            }
            if ( !Array::Contains(a1, v55) && (*(int (__thiscall **)(int *, int, int))(*a1 + 632))(a1, 2, v55) == 1 )
              (*(void (__thiscall **)(int *, int, _DWORD))(*a1 + 488))(a1, 7, 0);
          }
        }
      }
      return a10;
    }
    v15 = a1[185];
    if ( v15 )
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(a1[185]) == 6 ? (int *)v15 : 0;
      BuildingClass::UpdateDamageAnim(v16);
    }
    v17 = a1[433];
    if ( *(int *)(v17 + 3616) <= 0 )
    {
      if ( !*(_BYTE *)(v17 + 3278)
        || *(_BYTE *)(v17 + 3433)
        || *(_BYTE *)(v17 + 3479)
        || *(double *)(v17 + 880) < *(double *)(MEMORY[0x87F7E8][7806] + 1584)
        || *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 444))(a1) + 236) != 2
        || *((_BYTE *)a1 + 625) )
      {
        (*(void (__thiscall **)(int *, _BYTE *))(*a1 + 952))(a1, v14);
        if ( (*(int (__thiscall **)(int *))(*a1 + 456))(a1) <= 10
          && *((_BYTE *)a1 + 143)
          && (v15 = (int)(a1 + 39),
              v59 = a1[39],
              v60 = a1[40],
              v61 = a1[41],
              *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v59) + 59) == 2) )
        {
          v20 = (void **)__2_YAPAXI_Z(456);
          if ( v20 )
          {
            v59 = *(_DWORD *)v15;
            v60 = a1[40];
            v61 = a1[41];
            AnimClass::ctor(v20, *(void **)(MEMORY[0x87F7E8][7806] + 148), &v59, 0, 1, (void *)0x600, 0, 0);
          }
          v21 = (void **)__2_YAPAXI_Z(456);
          if ( v21 )
          {
            v22 = *(_DWORD *)v15;
            v23 = a1[40];
            v24 = a1[41];
            v59 = v22;
            v15 = v24 + 5;
            v60 = v23;
            v61 = v15;
            AnimClass::ctor(
              v21,
              *(void **)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 3012) + 4 * *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3024) - 4),
              &v59,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          TechnoClass::CreateDeathAnim((int)a1);
        }
      }
      else
      {
        (*(void (__thiscall **)(int *, _BYTE *))(*a1 + 952))(a1, v14);
        v19 = *a1;
        a1[27] = 1;
        *((_BYTE *)a1 + 144) = 1;
        *((_BYTE *)a1 + 973) = 1;
        (*(void (__thiscall **)(int *))(v19 + 928))(a1);
      }
    }
    else
    {
      if ( a1[438] == -1 )
      {
        v18 = *a1;
        a1[438] = 0;
        (*(void (__thiscall **)(int *, _BYTE *))(v18 + 952))(a1, v14);
      }
      a1[27] = 1;
      *((_BYTE *)a1 + 144) = 1;
    }
    (*(void (__thiscall **)(int *, _DWORD))(*a1 + 292))(a1, 0);
    if ( *(_BYTE *)(a1[433] + 1508) )
      TechnoClass::MarkPassengersAsExited(a1);
    if ( (*(int (__thiscall **)(int *))(*a1 + 456))(a1) > 208 )
      TechnoClass::CleanupAll(a1, (int)v14);
    if ( !*(_BYTE *)(a1[433] + 3477) && a1[70] )
    {
      do
      {
        v25 = (int *)FootClass::PopAndProcess(a1);
        v15 = (int)v25;
        if ( !v25 )
          break;
        v26 = *v25;
        v62 = a1[39];
        v63 = a1[40];
        v64 = a1[41];
        v27 = Coord::To_Cell(MEMORY[0x87F7E8], &v62);
        v28 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int, int))(v26 + 428))(v15, v27, -1, -1, 0, 1, a2);
        v29 = !v28 || v28 == 2;
        ++MEMORY[0x87F7E8][539633];
        *(_BYTE *)(v15 + 140) = *((_BYTE *)a1 + 140);
        v30 = a1[39];
        v31 = a1[41];
        v61 = a1[40];
        v32 = *a1;
        v60 = v30;
        v62 = v31;
        v33 = (*(int (__thiscall **)(int *))(v32 + 444))(a1);
        v34 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v33 + 72))(v33, &v65) + 8);
        v35 = *((_BYTE *)a1 + 140);
        v62 = v34;
        if ( v35 )
        {
          v36 = (int *)(*(int (__thiscall **)(int *, int *))(*a1 + 88))(a1, &v67);
          v60 = *v36;
          v61 = v36[1];
          v62 = v36[2];
        }
        if ( (_BYTE)a9
          || *((_BYTE *)a1 + 143)
          || !v29
          || (Value = ProgressTimer::GetValue((_WORD *)a1 + 452, &a7),
              !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v15 + 216))(
                 v15,
                 &v60,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          a2 = a8;
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 224))(v15);
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 248))(v15);
        }
        else
        {
          *(_DWORD *)(v15 + 284) = 0;
          if ( *(_BYTE *)(a1[433] + 1508) && a1[135] != *(_DWORD *)(v15 + 540) )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 968))(v15, 0);
          a2 = 0;
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v15 + 372))(v15, &dword_A8ED54[145573], 1);
          if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(v15 + 540)) )
          {
            v38 = a1[373];
            if ( v38 )
              TeamClass::AddMember(v38, v15, 0);
            else
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 488))(v15, 15, 0);
          }
          if ( v58 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 332))(v15);
        }
        --MEMORY[0x87F7E8][539633];
      }
      while ( a1[70] );
    }
    if ( a1[206] != -1 )
      goto LABEL_67;
    if ( (_BYTE)a9 )
      goto LABEL_83;
    v39 = a1[433];
    if ( !*(_BYTE *)(v39 + 3277) )
      goto LABEL_83;
    if ( *(_DWORD *)(v39 + 1504) )
      goto LABEL_83;
    a8 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2147483646);
    if ( (double)a8 * 4.656612877414201e-10 >= *(double *)(MEMORY[0x87F7E8][7806] + 1472) )
      goto LABEL_83;
    if ( a1[206] == -1 )
    {
      v42 = (*(int (__thiscall **)(int *))(*a1 + 780))(a1);
      if ( !v42 )
        goto LABEL_83;
      v43 = __2_YAPAXI_Z(1776);
      if ( !v43 )
        goto LABEL_83;
      v41 = InfantryClass::Construct(v43, v42, v42, (#37 *)a1[135]);
    }
    else
    {
LABEL_67:
      v40 = __2_YAPAXI_Z(1776);
      if ( !v40 )
        goto LABEL_83;
      v41 = InfantryClass::Construct(v40, v15, *(_DWORD *)(MEMORY[0x87F7E8][539353] + 4 * a1[206]), (#37 *)a1[135]);
    }
    v44 = (_DWORD *)v41;
    if ( v41 )
    {
      *(_BYTE *)(v41 + 140) = *((_BYTE *)a1 + 140);
      v62 = a1[39];
      v63 = a1[40];
      v45 = *(_DWORD *)v41;
      v64 = a1[41];
      if ( (*(unsigned __int8 (__thiscall **)(int, int *, _DWORD, int))(v45 + 216))(v41, &v62, 0, a2) )
      {
        v44[27] = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 5, *(_DWORD *)(v44[432] + 160) / 2);
        (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*v44 + 372))(v44, &dword_A8ED54[145573], 1, 0);
        if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) )
          (*(void (__thiscall **)(_DWORD *, int))(*v44 + 488))(v44, 5);
        else
          (*(void (__thiscall **)(_DWORD *, int))(*v44 + 488))(v44, 15);
        if ( v58 )
          (*(void (__thiscall **)(_DWORD *))(*v44 + 332))(v44);
        v46 = (_DWORD *)a1[13];
        if ( v46 && TechnoClass::HasAnyMission(v46) )
          ObjectClass::SetReference(v44, a1[13]);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v44 + 32))(v44, 1);
      }
    }
LABEL_83:
    v47 = a1[433];
    if ( *(_BYTE *)(v47 + 3610)
      && (*(_BYTE *)(MEMORY[0x87F7E8][536210] + 13489) && !*(_BYTE *)(v47 + 3220)
       || *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13477) && *(_BYTE *)(v47 + 3220)) )
    {
      v48 = *a1;
      a8 = 0;
      v49 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE **))(v48 + 440))(a1, &a7);
      v50 = *LayerClass::Pathfinding_Find(
               MEMORY[0x87F7E8],
               (int)&a9,
               &a9,
               v49,
               1,
               -1,
               0,
               0,
               1,
               1,
               1,
               0,
               0,
               1,
               (__int16 *)&a8,
               0,
               0);
      a8 = v50;
      if ( v50 != dword_A8ED54[145561] )
      {
        if ( BYTE1(MEMORY[0x87F7E8][536222]) )
          BuildingClass::SearchPlacement(MEMORY[0x87F7E8], v50, 20);
      }
    }
    if ( *(_BYTE *)(a1[433] + 3477) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*a1 + 988))(a1, 0) )
      {
LABEL_93:
        (*(void (__thiscall **)(int *))(*a1 + 248))(a1);
        return a10;
      }
    }
    else if ( !*((_BYTE *)a1 + 973) )
    {
      goto LABEL_93;
    }
    return a10;
  }
  return result;
}

/* ASM:
sub     esp, 34h
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     al, [esi+83h]
test    al, al
jz      short loc_737CB6
mov     ecx, [esi+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
mov     byte ptr [esp+40h+var_34+3], 1
jnz     short loc_737CBB

loc_737CB6:                             ; CODE XREF: UnitClass__OnUnderAttack+10↑j
mov     byte ptr [esp+40h+var_34+3], 0

loc_737CBB:                             ; CODE XREF: UnitClass__OnUnderAttack+24↑j
mov     ebx, [esp+40h+arg_10]
test    bl, bl
jnz     short loc_737D31
push    0
mov     ecx, esi
call    Team__GetMember
mov     edi, eax
test    edi, edi
jz      short loc_737D31
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_737D31
mov     ecx, [edi+520h]
mov     al, [ecx+16BDh]
test    al, al
jz      short loc_737D31
lea     edx, [esi+9Ch]
mov     eax, [esi+9Ch]
mov     [esp+40h+var_30], eax
lea     eax, [esp+40h+var_30]
mov     ecx, [edx+4]
push    eax
mov     [esp+44h+var_2C], ecx
mov     ecx, 87F7E8h
mov     edx, [edx+8]
mov     [esp+44h+var_28], edx
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBridge
cmp     eax, edi
jnz     short loc_737D31
pop     edi
pop     esi
xor     eax, eax
pop     ebx
add     esp, 34h
retn    1Ch
; ---------------------------------------------------------------------------

loc_737D31:                             ; CODE XREF: UnitClass__OnUnderAttack+31↑j
; UnitClass__OnUnderAttack+40↑j ...
mov     ecx, [esp+40h+arg_18]
mov     edx, [esp+40h+arg_14]
mov     eax, [esp+40h+arg_8]
push    ecx
mov     ecx, [esp+44h+arg_4]
push    edx
mov     edx, [esp+48h+arg_0]
push    ebx
mov     ebx, [esp+4Ch+arg_C]
push    ebx
push    eax
push    ecx
push    edx
mov     ecx, esi
call    FootClass__ProcessDeploy
cmp     eax, 5
mov     [esp+40h+arg_18], eax
jnz     short loc_737D69
pop     edi
pop     esi
pop     ebx
add     esp, 34h
retn    1Ch
; ---------------------------------------------------------------------------

loc_737D69:                             ; CODE XREF: UnitClass__OnUnderAttack+CE↑j
cmp     eax, 4
push    ebp
jnz     loc_7384B9
mov     edi, [esi+2E4h]
test    edi, edi
jz      short loc_737D9C
jnz     short loc_737D83
xor     eax, eax
jmp     short loc_737D95
; ---------------------------------------------------------------------------

loc_737D83:                             ; CODE XREF: UnitClass__OnUnderAttack+ED↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_737D95:                             ; CODE XREF: UnitClass__OnUnderAttack+F1↑j
mov     ecx, eax
call    BuildingClass__UpdateDamageAnim

loc_737D9C:                             ; CODE XREF: UnitClass__OnUnderAttack+EB↑j
mov     eax, [esi+6C4h]
mov     ebp, 2
mov     ecx, [eax+0E20h]
test    ecx, ecx
jle     short loc_737DE2
cmp     dword ptr [esi+6D8h], 0FFFFFFFFh
jnz     short loc_737DCF
mov     edx, [esi]
push    ebx
mov     ecx, esi
mov     dword ptr [esi+6D8h], 0
call    dword ptr [edx+3B8h]

loc_737DCF:                             ; CODE XREF: UnitClass__OnUnderAttack+128↑j
mov     dword ptr [esi+6Ch], 1
mov     byte ptr [esi+90h], 1
jmp     loc_737F74
; ---------------------------------------------------------------------------

loc_737DE2:                             ; CODE XREF: UnitClass__OnUnderAttack+11F↑j
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_737E63
mov     cl, [eax+0D69h]
test    cl, cl
jnz     short loc_737E63
mov     cl, [eax+0D97h]
test    cl, cl
jnz     short loc_737E63
fld     qword ptr [eax+370h]
mov     eax, ds:8871E0h
fcomp   qword ptr [eax+630h]
fnstsw  ax
test    ah, 1
jnz     short loc_737E63
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1BCh]
cmp     [eax+0ECh], ebp
jnz     short loc_737E63
mov     al, [esi+271h]
test    al, al
jnz     short loc_737E63
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3B8h]
mov     edx, [esi]
mov     ecx, esi
mov     dword ptr [esi+6Ch], 1
mov     byte ptr [esi+90h], 1
mov     byte ptr [esi+3CDh], 1
call    dword ptr [edx+3A0h]
jmp     loc_737F74
; ---------------------------------------------------------------------------

loc_737E63:                             ; CODE XREF: UnitClass__OnUnderAttack+15A↑j
; UnitClass__OnUnderAttack+164↑j ...
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3B8h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
cmp     eax, 0Ah
jg      loc_737F6D
mov     al, [esi+8Fh]
test    al, al
jz      loc_737F6D
lea     edi, [esi+9Ch]
mov     eax, edi
mov     ecx, [eax]
mov     [esp+44h+var_30], ecx
lea     ecx, [esp+44h+var_30]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+48h+var_2C], edx
mov     eax, [eax+8]
mov     [esp+48h+var_28], eax
call    Coord__To_Cell
cmp     [eax+0ECh], ebp
jnz     loc_737F6D
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_737F13
mov     edx, edi
push    0               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    1               ; int
mov     [esp+54h+var_30], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+58h+var_2C], ecx
lea     ecx, [esp+58h+var_30]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+5Ch+var_28], edx
mov     edx, ds:8871E0h
mov     ecx, [edx+94h]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_737F13:                             ; CODE XREF: UnitClass__OnUnderAttack+245↑j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_737F74
mov     edx, [edi]
mov     ebp, [edi+4]
mov     edi, [edi+8]
push    0               ; char
push    0               ; int
mov     [esp+4Ch+var_30], edx
push    600h            ; int
push    1               ; int
lea     edx, [esp+54h+var_30]
push    0               ; int
push    edx             ; int
mov     edx, ds:8871E0h
add     edi, 5
mov     [esp+5Ch+var_2C], ebp
mov     [esp+5Ch+var_28], edi
mov     ecx, [edx+0BD0h]
mov     edx, [edx+0BC4h]
mov     ecx, [edx+ecx*4-4]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     short loc_737F74
; ---------------------------------------------------------------------------

loc_737F6D:                             ; CODE XREF: UnitClass__OnUnderAttack+1EB↑j
; UnitClass__OnUnderAttack+1F9↑j ...
mov     ecx, esi
call    TechnoClass__CreateDeathAnim

loc_737F74:                             ; CODE XREF: UnitClass__OnUnderAttack+14D↑j
; UnitClass__OnUnderAttack+1CE↑j ...
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+124h]
mov     eax, [esi+6C4h]
mov     cl, [eax+5E4h]
test    cl, cl
jz      short loc_737F97
mov     ecx, esi
call    TechnoClass__MarkPassengersAsExited

loc_737F97:                             ; CODE XREF: UnitClass__OnUnderAttack+2FE↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
cmp     eax, 0D0h
jle     short loc_737FB0
push    ebx
mov     ecx, esi
call    TechnoClass__CleanupAll

loc_737FB0:                             ; CODE XREF: UnitClass__OnUnderAttack+316↑j
mov     eax, [esi+6C4h]
mov     cl, [eax+0D95h]
test    cl, cl
jnz     loc_7381BC
mov     eax, [esi+118h]
test    eax, eax
jz      loc_7381BC

loc_737FD2:                             ; CODE XREF: UnitClass__OnUnderAttack+526↓j
mov     ecx, esi
call    FootClass__PopAndProcess
mov     edi, eax
test    edi, edi
jz      loc_7381BC
lea     ebp, [esi+9Ch]
mov     ebx, [edi]
mov     ecx, ebp
push    1
push    0
push    0FFFFFFFFh
mov     edx, [ecx]
push    0FFFFFFFFh
mov     [esp+54h+var_24], edx
lea     edx, [esp+54h+var_24]
mov     eax, [ecx+4]
push    edx
mov     [esp+58h+var_20], eax
mov     ecx, [ecx+8]
mov     [esp+58h+var_1C], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
push    eax
mov     ecx, edi
call    dword ptr [ebx+1ACh]
test    eax, eax
jz      short loc_73802E
cmp     eax, 2
jz      short loc_73802E
xor     bl, bl
jmp     short loc_738030
; ---------------------------------------------------------------------------

loc_73802E:                             ; CODE XREF: UnitClass__OnUnderAttack+393↑j
; UnitClass__OnUnderAttack+398↑j
mov     bl, 1

loc_738030:                             ; CODE XREF: UnitClass__OnUnderAttack+39C↑j
mov     eax, ds:0A8E7ACh
inc     eax
mov     ds:0A8E7ACh, eax
mov     al, [esi+8Ch]
mov     [edi+8Ch], al
mov     edx, [ebp+4]
mov     ecx, [ebp+0]
mov     eax, [ebp+8]
mov     [esp+40h+var_28], edx
mov     edx, [esi]
mov     [esp+40h+var_2C], ecx
mov     ecx, esi
mov     [esp+40h+var_24], eax
call    dword ptr [edx+1BCh]
mov     edx, [eax]
lea     ecx, [esp+40h+var_14]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
mov     edx, [eax+8]
mov     al, [esi+8Ch]
test    al, al
mov     [esp+40h+var_24], edx
jz      short loc_7380A3
mov     eax, [esi]
lea     ecx, [esp+40h+var_8]
push    ecx
mov     ecx, esi
call    dword ptr [eax+58h]
mov     edx, [eax]
mov     [esp+40h+var_2C], edx
mov     ecx, [eax+4]
mov     [esp+40h+var_28], ecx
mov     edx, [eax+8]
mov     [esp+40h+var_24], edx

loc_7380A3:                             ; CODE XREF: UnitClass__OnUnderAttack+3F1↑j
mov     al, byte ptr [esp+40h+arg_14]
test    al, al
jnz     loc_738188
mov     al, [esi+8Fh]
test    al, al
jnz     loc_738188
test    bl, bl
jz      loc_738188
lea     eax, [esp+40h+arg_C]
lea     ecx, [esi+388h]
push    eax
call    ProgressTimer__GetValue
mov     eax, [eax]
mov     edx, [edi]
shr     eax, 7
inc     eax
mov     ecx, edi
shr     eax, 1
and     eax, 0FFh
push    eax
lea     eax, [esp+44h+var_2C]
push    eax
call    dword ptr [edx+0D8h]
test    al, al
jz      loc_738188
mov     dword ptr [edi+11Ch], 0
mov     ecx, [esi+6C4h]
mov     al, [ecx+5E4h]
test    al, al
jz      short loc_738130
mov     edx, [esi+21Ch]
mov     eax, [edi+21Ch]
cmp     edx, eax
jz      short loc_738130
mov     eax, [edi]
push    0
mov     ecx, edi
call    dword ptr [eax+3C8h]

loc_738130:                             ; CODE XREF: UnitClass__OnUnderAttack+482↑j
; UnitClass__OnUnderAttack+492↑j
mov     edx, [edi]
push    0
push    1
push    (offset dword_A8ED54+8E294h)
mov     ecx, edi
call    dword ptr [edx+174h]
mov     ecx, [edi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_738174
mov     ecx, [esi+5D4h]
test    ecx, ecx
jz      short loc_738166
push    0
push    edi
call    TeamClass__AddMember
jmp     short loc_738174
; ---------------------------------------------------------------------------

loc_738166:                             ; CODE XREF: UnitClass__OnUnderAttack+4CA↑j
mov     eax, [edi]
push    0
push    0Fh
mov     ecx, edi
call    dword ptr [eax+1E8h]

loc_738174:                             ; CODE XREF: UnitClass__OnUnderAttack+4C0↑j
; UnitClass__OnUnderAttack+4D4↑j
mov     al, byte ptr [esp+44h+var_34+3]
test    al, al
jz      short loc_7381A1
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+14Ch]
jmp     short loc_7381A1
; ---------------------------------------------------------------------------

loc_738188:                             ; CODE XREF: UnitClass__OnUnderAttack+419↑j
; UnitClass__OnUnderAttack+427↑j ...
mov     ecx, [esp+40h+arg_10]
mov     eax, [edi]
push    ecx
mov     ecx, edi
call    dword ptr [eax+0E0h]
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+0F8h]

loc_7381A1:                             ; CODE XREF: UnitClass__OnUnderAttack+4EA↑j
; UnitClass__OnUnderAttack+4F6↑j
mov     ecx, ds:0A8E7ACh
dec     ecx
mov     ds:0A8E7ACh, ecx
mov     eax, [esi+118h]
test    eax, eax
jnz     loc_737FD2

loc_7381BC:                             ; CODE XREF: UnitClass__OnUnderAttack+32E↑j
; UnitClass__OnUnderAttack+33C↑j ...
mov     eax, [esi+338h]
or      ebx, 0FFFFFFFFh
cmp     eax, ebx
jnz     short loc_73823B
mov     al, byte ptr [esp+44h+arg_14]
test    al, al
jnz     loc_73838A
mov     eax, [esi+6C4h]
mov     cl, [eax+0CCDh]
test    cl, cl
jz      loc_73838A
mov     ecx, [eax+5E0h]
test    ecx, ecx
jnz     loc_73838A
mov     eax, ds:0A8B230h
push    7FFFFFFEh
push    0
lea     ecx, [eax+218h]
call    Random__Range
mov     ecx, ds:8871E0h
mov     [esp+44h+arg_10], eax
fild    [esp+44h+arg_10]
fmul    ds:dbl_7E3570
fcomp   qword ptr [ecx+5C0h]
fnstsw  ax
test    ah, 1
jz      loc_73838A
cmp     [esi+338h], ebx
jz      short loc_738269

loc_73823B:                             ; CODE XREF: UnitClass__OnUnderAttack+537↑j
push    6F0h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      loc_73838A
mov     edx, [esi+21Ch]
mov     ecx, [esi+338h]
push    edx
mov     edx, ds:0A8E34Ch
mov     ecx, [edx+ecx*4]
push    ecx
jmp     short loc_73829A
; ---------------------------------------------------------------------------

loc_738269:                             ; CODE XREF: UnitClass__OnUnderAttack+5A9↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+30Ch]
mov     edi, eax
test    edi, edi
jz      loc_73838A
push    6F0h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      loc_73838A
mov     ecx, [esi+21Ch]
push    ecx             ; ppv
push    edi             ; int

loc_73829A:                             ; CODE XREF: UnitClass__OnUnderAttack+5D7↑j
mov     ecx, eax
call    InfantryClass__Construct
mov     edi, eax
test    edi, edi
jz      loc_73838A
mov     dl, [esi+8Ch]
lea     eax, [esi+9Ch]
mov     [edi+8Ch], dl
push    0
mov     ecx, [eax]
mov     [esp+48h+var_24], ecx
mov     ecx, edi
mov     edx, [eax+4]
mov     [esp+48h+var_20], edx
mov     edx, [edi]
mov     eax, [eax+8]
mov     [esp+48h+var_1C], eax
lea     eax, [esp+48h+var_24]
push    eax
call    dword ptr [edx+0D8h]
test    al, al
jz      loc_738381
mov     ecx, [edi+6C0h]
mov     eax, [ecx+0A0h]
cdq
sub     eax, edx
mov     edx, ds:0A8B230h
sar     eax, 1
push    eax
push    5
lea     ecx, [edx+218h]
call    Random__Range
mov     [edi+6Ch], eax
mov     eax, [edi]
push    0
push    1
push    (offset dword_A8ED54+8E294h)
mov     ecx, edi
call    dword ptr [eax+174h]
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_738344
mov     edx, [edi]
push    0
push    0Fh
mov     ecx, edi
call    dword ptr [edx+1E8h]
jmp     short loc_738352
; ---------------------------------------------------------------------------

loc_738344:                             ; CODE XREF: UnitClass__OnUnderAttack+6A2↑j
mov     eax, [edi]
push    0
push    5
mov     ecx, edi
call    dword ptr [eax+1E8h]

loc_738352:                             ; CODE XREF: UnitClass__OnUnderAttack+6B2↑j
mov     al, byte ptr [esp+44h+var_34+3]
test    al, al
jz      short loc_738364
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+14Ch]

loc_738364:                             ; CODE XREF: UnitClass__OnUnderAttack+6C8↑j
mov     ecx, [esi+34h]
test    ecx, ecx
jz      short loc_73838A
call    TechnoClass__HasAnyMission
test    al, al
jz      short loc_73838A
mov     eax, [esi+34h]
mov     ecx, edi
push    eax
call    ObjectClass__SetReference
jmp     short loc_73838A
; ---------------------------------------------------------------------------

loc_738381:                             ; CODE XREF: UnitClass__OnUnderAttack+654↑j
mov     edx, [edi]
push    1
mov     ecx, edi
call    dword ptr [edx+20h]

loc_73838A:                             ; CODE XREF: UnitClass__OnUnderAttack+53F↑j
; UnitClass__OnUnderAttack+553↑j ...
mov     eax, [esi+6C4h]
mov     cl, [eax+0E1Ah]
test    cl, cl
jz      loc_738457
mov     ecx, ds:0A8B230h
mov     dl, [ecx+34B1h]
test    dl, dl
jz      short loc_7383B8
mov     dl, [eax+0C94h]
test    dl, dl
jz      short loc_7383D4

loc_7383B8:                             ; CODE XREF: UnitClass__OnUnderAttack+71C↑j
mov     dl, [ecx+34A5h]
test    dl, dl
jz      loc_738457
mov     cl, [eax+0C94h]
test    cl, cl
jz      loc_738457

loc_7383D4:                             ; CODE XREF: UnitClass__OnUnderAttack+726↑j
xor     edx, edx
lea     edi, [esp+44h+arg_10]
push    edx
mov     eax, 1
push    edx
push    edi
push    eax
push    edx
mov     ecx, eax
push    edx
push    eax
push    ecx
push    eax
push    edx
push    edx
push    ebx
lea     ecx, [esp+74h+arg_C]
push    eax
mov     eax, [esi]
push    ecx
mov     ecx, esi
mov     word ptr [esp+7Ch+arg_10], dx
mov     word ptr [esp+7Ch+arg_10+2], dx
call    dword ptr [eax+1B8h]
lea     edx, [esp+78h+arg_14]
push    eax
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+44h+arg_10], eax
jnz     short loc_738440
mov     cx, word ptr [esp+44h+arg_10+2]
cmp     cx, word ptr dword_A8ED54+8E266h
jz      short loc_738457

loc_738440:                             ; CODE XREF: UnitClass__OnUnderAttack+7A0↑j
mov     cl, ds:0A8B261h
test    cl, cl
jz      short loc_738457
push    14h
push    eax
mov     ecx, 87F7E8h
call    BuildingClass__SearchPlacement

loc_738457:                             ; CODE XREF: UnitClass__OnUnderAttack+708↑j
; UnitClass__OnUnderAttack+730↑j ...
mov     edx, [esi+6C4h]
mov     al, [edx+0D95h]
test    al, al
jz      short loc_738493
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3DCh]
test    al, al
jnz     loc_73866E
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0F8h]
mov     eax, [esp+44h+arg_18]
pop     ebp
pop     edi
pop     esi
pop     ebx
add     esp, 34h
retn    1Ch
; ---------------------------------------------------------------------------

loc_738493:                             ; CODE XREF: UnitClass__OnUnderAttack+7D5↑j
mov     al, [esi+3CDh]
test    al, al
jnz     loc_73866E
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0F8h]
mov     eax, [esp+44h+arg_18]
pop     ebp
pop     edi
pop     esi
pop     ebx
add     esp, 34h
retn    1Ch
; ---------------------------------------------------------------------------

loc_7384B9:                             ; CODE XREF: UnitClass__OnUnderAttack+DD↑j
test    eax, eax
jz      short loc_738535
mov     ecx, [esi+6C4h]
mov     al, [ecx+0E0Eh]
test    al, al
jz      short loc_738535
mov     edx, [esi+21Ch]
mov     eax, ds:0A83D4Ch
cmp     edx, eax
jnz     short loc_738535
mov     eax, [esi]
lea     ecx, [esp+44h+var_C]
push    0
push    ecx
mov     ecx, esi
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+44h+arg_10], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, 4
add     eax, edx
sar     eax, 8
mov     word ptr [esp+44h+arg_10+2], ax
mov     edx, [esp+44h+arg_10]
push    edx
call    CreateTriggerClassIfFarEnough
test    al, al
jz      short loc_738535
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset g_Str_EVA_OreMinerUnderAttack ; "EVA_OreMinerUnderAttack"
call    VoxClass__FindAndPlay

loc_738535:                             ; CODE XREF: UnitClass__OnUnderAttack+82B↑j
; UnitClass__OnUnderAttack+83B↑j ...
mov     eax, [esi+5D4h]
test    eax, eax
jnz     loc_73866E
test    ebx, ebx
jz      loc_73866E
mov     al, [esi+418h]
test    al, al
jnz     loc_73866E
mov     ecx, [esi+21Ch]
push    ebx
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     loc_73866E
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_73866E
push    ebx
mov     ecx, esi
call    UnitClass__CanCrushTarget
test    al, al
jz      short loc_7385B5
mov     eax, [esi]
push    1
push    ebx
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    0
push    2
mov     ecx, esi
call    dword ptr [edx+1E8h]
mov     eax, [esp+44h+arg_18]
pop     ebp
pop     edi
pop     esi
pop     ebx
add     esp, 34h
retn    1Ch
; ---------------------------------------------------------------------------

loc_7385B5:                             ; CODE XREF: UnitClass__OnUnderAttack+8FA↑j
mov     eax, [esi+6C4h]
mov     cl, [eax+0E0Eh]
test    cl, cl
jnz     short loc_7385D3
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      loc_73866E

loc_7385D3:                             ; CODE XREF: UnitClass__OnUnderAttack+933↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2B8h]
test    eax, eax
jle     loc_73866E
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_73866E
mov     eax, [esi+6C4h]
xor     edi, edi
mov     ecx, [eax+3F8h]
test    ecx, ecx
jle     short loc_73866E

loc_738611:                             ; CODE XREF: UnitClass__OnUnderAttack+9AC↓j
mov     eax, [eax+3ECh]
mov     edx, [esi]
push    0
push    0
mov     ecx, [eax+edi*4]
push    ecx
mov     ecx, esi
call    dword ptr [edx+530h]
mov     ebp, eax
test    ebp, ebp
jnz     short loc_738642
mov     eax, [esi+6C4h]
inc     edi
cmp     edi, [eax+3F8h]
jl      short loc_738611
test    ebp, ebp
jz      short loc_73866E

loc_738642:                             ; CODE XREF: UnitClass__OnUnderAttack+99D↑j
push    ebp
mov     ecx, esi
call    Array__Contains
test    al, al
jnz     short loc_73866E
mov     edx, [esi]
push    ebp
push    2
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jnz     short loc_73866E
mov     eax, [esi]
push    0
push    7
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_73866E:                             ; CODE XREF: UnitClass__OnUnderAttack+7E5↑j
; UnitClass__OnUnderAttack+80B↑j ...
mov     eax, [esp+44h+arg_18]
pop     ebp
pop     edi
pop     esi
pop     ebx
add     esp, 34h
retn    1Ch
*/
}

// ============================================================
// Phase 3: Weapon Switching
// ============================================================

// IDA: 0x70DC70 (SetTurret, 110B)
// 0x70dc70
int UnitClass::SetTurret()
{
// [IDA decompile]
int __thiscall UnitClass_SetTurret(_DWORD *this, unsigned int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this);
  if ( !*(_BYTE *)(result + 2064) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 132))(this);
    if ( a2 > 0x11 )
    {
      result = UnitClass::processEnterTarget(0);
      *(this + 73) = result;
      *(this + 78) = 0;
    }
    else
    {
      result = UnitClass::processEnterTarget(a2);
      *(this + 78) = a2;
      *(this + 73) = result;
    }
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     cl, [eax+810h]
test    cl, cl
jnz     short loc_70DCD9
mov     edi, [esp+8+arg_0]
test    edi, edi
jl      short loc_70DCB6
cmp     edi, 12h
jge     short loc_70DCB6
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, eax
call    UnitClass__processEnterTarget
mov     [esi+138h], edi
mov     [esi+124h], eax
pop     edi
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_70DCB6:                             ; CODE XREF: UnitClass__SetTurret+1C↑j
; UnitClass__SetTurret+21↑j
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+84h]
mov     ecx, eax
call    UnitClass__processEnterTarget
mov     [esi+124h], eax
mov     dword ptr [esi+138h], 0

loc_70DCD9:                             ; CODE XREF: UnitClass__SetTurret+14↑j
pop     edi
pop     esi
retn    4
*/
}

// IDA: 0x73F0A0 (EvaluateTarget, 3238B)
// 0x73f0a0
int UnitClass::EvaluateTarget()
{
// [IDA decompile]
int __thiscall UnitClass::EvaluateTarget(int this, int a2, int a3, int a4, int a5, char a6)
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  int Type; // esi
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  __int16 *NeighbourContent; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  bool v24; // al
  int v25; // ebp
  int v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  _BYTE *v30; // esi
  int v31; // eax
  int v32; // ecx
  _WORD *v33; // edi
  _WORD *v34; // eax
  _DWORD *v35; // eax
  int v36; // eax
  _BYTE *v37; // eax
  _BYTE *v38; // eax
  int v39; // ecx
  __int16 v40; // dx
  _DWORD *v41; // eax
  int v42; // eax
  unsigned int v43; // ebp
  __int16 v44; // cx
  int v45; // eax
  int v46; // edx
  unsigned int v47; // edi
  double v48; // st7
  _DWORD *v49; // edi
  _DWORD *v50; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  double v55; // st7
  _BYTE *v56; // edi
  _DWORD *v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  _BYTE *Building; // eax
  bool v63; // [esp+47h] [ebp-7Dh] BYREF
  char v64; // [esp+48h] [ebp-7Ch]
  bool v65; // [esp+49h] [ebp-7Bh]
  char v66; // [esp+4Ah] [ebp-7Ah]
  char v67; // [esp+4Bh] [ebp-79h]
  int v68; // [esp+4Ch] [ebp-78h]
  int v69; // [esp+50h] [ebp-74h]
  int v70; // [esp+54h] [ebp-70h]
  _BYTE *v71; // [esp+58h] [ebp-6Ch]
  _BYTE *v72; // [esp+5Ch] [ebp-68h] BYREF
  int v73; // [esp+60h] [ebp-64h] BYREF
  unsigned int v74; // [esp+64h] [ebp-60h]
  unsigned int v75; // [esp+68h] [ebp-5Ch]
  int v76; // [esp+6Ch] [ebp-58h] BYREF
  int v77; // [esp+70h] [ebp-54h] BYREF
  int v78; // [esp+74h] [ebp-50h] BYREF
  int v79; // [esp+78h] [ebp-4Ch] BYREF
  int v80; // [esp+7Ch] [ebp-48h]
  int v81; // [esp+80h] [ebp-44h]
  int v82; // [esp+84h] [ebp-40h]
  int v83; // [esp+88h] [ebp-3Ch]
  int v84; // [esp+8Ch] [ebp-38h]
  int v85; // [esp+90h] [ebp-34h]
  int v86; // [esp+94h] [ebp-30h]
  int v87; // [esp+98h] [ebp-2Ch]
  int v88; // [esp+9Ch] [ebp-28h]
  _BYTE v89[12]; // [esp+A0h] [ebp-24h] BYREF
  _BYTE v90[12]; // [esp+ACh] [ebp-18h] BYREF
  _BYTE v91[12]; // [esp+B8h] [ebp-Ch] BYREF

  v63 = (*(_DWORD *)(a2 + 320) & 0x100) != 0
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84);
  v64 = *(_BYTE *)(a2 + 292);
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0;
  v69 = v8;
  v65 = v9;
  Type = InfantryClass::GetType((__int16 *)a2);
  v11 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 3580);
  if ( v11 == -1 )
    goto LABEL_26;
  v12 = *(_DWORD *)(a2 + 236);
  if ( v12 != 10 )
    goto LABEL_19;
  v13 = *(_DWORD *)(MEMORY[0x87F7E8][539985] + 4 * *(_DWORD *)(a2 + 56));
  v14 = *(_DWORD *)(v13 + 740);
  if ( v14 == 5 && *(_DWORD *)(v13 + 744) == 3 || v14 == 4 && *(_DWORD *)(v13 + 744) == 3 )
  {
    if ( *(_BYTE *)(a2 + 282) != 2 )
      return 7;
    goto LABEL_19;
  }
  if ( v14 != 3 || *(_DWORD *)(v13 + 744) != 4 && *(_DWORD *)(v13 + 744) != 5 )
  {
LABEL_19:
    v16 = a2;
    goto LABEL_20;
  }
  v16 = a2;
  if ( *(_BYTE *)(a2 + 282) != 6 )
    return 7;
LABEL_20:
  if ( v12 != v11 && v12 != 10 )
  {
    v17 = *(_DWORD *)(v16 + 68);
    if ( v17 < 237 || v17 > 238 || a4 == *(char *)(v16 + 283) )
      return 7;
  }
LABEL_26:
  if ( a3 == 8 )
  {
    if ( Type && *(_DWORD *)(Type + 40) )
      return 0;
    return 7;
  }
  if ( Type )
  {
    v18 = abs32(a3 - *(_DWORD *)(Type + 44));
    if ( v18 > 2 && v18 < 6 && a3 != -1 )
      return 7;
  }
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7);
  v20 = InfantryClass::GetType(NeighbourContent);
  if ( v20 )
  {
    v21 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v20 + 44));
    if ( v21 > 2 && v21 < 6 && a3 != -1 )
      return 7;
  }
  v22 = a5;
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(_DWORD *)this + 432))(
             this,
             a2,
             a3,
             &a4,
             &v63,
             a5);
  if ( result != 7 )
  {
    v23 = a4;
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 )
    {
      v64 = *(_BYTE *)(a2 + 296);
      v24 = (*(_DWORD *)(a2 + 296) & 0x20) != 0;
      v69 = *(_DWORD *)(a2 + 88);
      v65 = v24;
    }
    if ( !MEMORY[0x87F7E8][539633] )
    {
      if ( !Type::CheckAmbiguity(MEMORY[0x87F7E8], a2, 1)
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 800))(this)
        && *(_BYTE *)(this + 981) )
      {
        return 7;
      }
      v23 = a4;
    }
    result = FootClass::Destru_vt107((_DWORD *)this, a2, a3, v23, v22, a6);
    v25 = result;
    v68 = result;
    if ( result != 7 )
    {
      v26 = a2;
      v27 = *(_DWORD *)(a2 + 68);
      if ( v27 != -1 )
      {
        v28 = *(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v27);
        if ( *(_BYTE *)(v28 + 682)
          && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
          && !MEMORY[0x87F7E8][536212] )
        {
          return 7;
        }
        if ( *(_BYTE *)(v28 + 680) )
        {
          if ( *(_BYTE *)(v28 + 557)
            && (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
            || *(_BYTE *)(v28 + 680) && *(_DWORD *)(*(_DWORD *)(this + 1732) + 1460) == 12 )
          {
            if ( !HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)) )
              goto LABEL_74;
            goto LABEL_71;
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
            return 7;
          v29 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) + 172);
          if ( !*(_BYTE *)(v29 + 324) && (!*(_BYTE *)(v29 + 327) || *(_DWORD *)(v28 + 156) != 6) )
            return 7;
          if ( HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)) )
          {
LABEL_71:
            if ( v25 >= 4 )
              goto LABEL_74;
            v25 = 4;
            goto LABEL_73;
          }
          if ( v25 < 5 )
          {
            v25 = 5;
LABEL_73:
            v68 = v25;
          }
        }
      }
LABEL_74:
      v67 = 0;
      if ( v63 )
        v30 = *(_BYTE **)(a2 + 232);
      else
        v30 = *(_BYTE **)(a2 + 228);
      if ( v30 )
      {
        while ( 1 )
        {
          if ( (_BYTE *)this == v30 )
          {
            v65 = 0;
            v64 &= ~0x20u;
            goto LABEL_153;
          }
          v31 = *(_DWORD *)(this + 1692);
          if ( v31 )
          {
            v32 = *(_DWORD *)(v31 + 40);
            if ( v32 )
            {
              v33 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v32 + 440))(v32, &v76);
              v34 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v30 + 440))(v30, &v77);
              if ( *v34 == *v33 && v34[1] == v33[1] )
                return 0;
              v26 = a2;
            }
          }
          if ( Array::Contains((int *)this, (v30[20] & 1) != 0 ? (unsigned int)v30 : 0)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6
            && !UnitClass::IsCellBlockedByBridge(v30, (_DWORD *)v26) )
          {
            goto LABEL_153;
          }
          if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3608)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1
            && *(_BYTE *)(*((_DWORD *)v30 + 433) + 3608) )
          {
            return 0;
          }
          if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7
              && v30 == *(_BYTE **)(this + 1444)
              && *(_BYTE *)(*((_DWORD *)v30 + 328) + 5806)
              && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 468))(v30)
              || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 9
              && v30 == *(_BYTE **)(this + 1444)
              && *(_BYTE *)(*((_DWORD *)v30 + 328) + 5805)
              && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 468))(v30) )
            {
              return 0;
            }
            if ( *(_BYTE *)(*((_DWORD *)v30 + 328) + 5805) )
            {
              v35 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v89);
              LOWORD(v70) = *v35 / 256;
              HIWORD(v70) = v35[1] / 256;
              v73 = v70;
              v36 = *((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v73) + 57);
              if ( v36 )
              {
                while ( (_BYTE *)v36 != v30 )
                {
                  v36 = *(_DWORD *)(v36 + 48);
                  if ( !v36 )
                    goto LABEL_105;
                }
                return 0;
              }
            }
LABEL_105:
            v37 = (_BYTE *)*((_DWORD *)v30 + 328);
            if ( v37[5815] )
            {
              if ( !BuildingClass::IsPoweredOn(v30) )
              {
                if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v30 + 135), *(#375 **)(this + 540)) )
                {
                  if ( v25 < 3 )
                  {
                    v25 = 3;
                    v68 = 3;
                  }
                }
                else
                {
                  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
                    return 7;
                  if ( v25 < 5 )
                  {
                    v25 = 5;
                    v68 = 5;
                  }
                }
              }
              goto LABEL_153;
            }
            if ( (v37[5801] || v37[5803])
              && Cell::IsBridge((_DWORD *)v26) == (_DWORD *)v30
              && !UnitClass::IsCellBlockedByBridge(v30, (_DWORD *)v26) )
            {
              goto LABEL_153;
            }
            v38 = (_BYTE *)*((_DWORD *)v30 + 328);
            if ( v38[5889] )
              goto LABEL_153;
            if ( v38[5823] )
            {
              v39 = *((_DWORD *)v30 + 390);
              if ( v39 == 12 || v39 == 8 )
                goto LABEL_153;
            }
            if ( v38[5824] )
            {
              if ( *(_BYTE *)(*((_DWORD *)v30 + 135) + 506) )
                return 7;
              goto LABEL_153;
            }
            if ( v38[5488] )
            {
              v40 = HIWORD(MEMORY[0x87F7E8][32682]) + *(_WORD *)(v26 + 38);
              LOWORD(v71) = LOWORD(MEMORY[0x87F7E8][32682]) + *(_WORD *)(v26 + 36);
              HIWORD(v71) = v40;
              v72 = v71;
              v41 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v72);
              if ( Cell::IsBridge(v41) != (_DWORD *)v30 )
                goto LABEL_153;
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7
            && v30 == *(_BYTE **)(this + 1444)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1 )
          {
            return 0;
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11 && *(_BYTE **)(this + 536) == v30 )
            return 7;
          if ( (v30[20] & 4) == 0 )
            break;
          v42 = *((_DWORD *)v30 + 361);
          v72 = v30;
          if ( !v42 && !TimerClass::Active((int)(v30 + 904)) )
          {
            if ( !*((_DWORD *)v30 + 413) )
              WinAPI::Wrapper(-2147467261);
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)v30 + 413) + 16))(*((_DWORD *)v30 + 413)) )
              goto LABEL_139;
          }
          v66 = 1;
LABEL_140:
          if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v30) )
          {
            if ( v66 )
            {
              v43 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v78) >> 12) + 1) >> 1) & 7;
              v44 = *(_WORD *)ProgressTimer::GetValue((_WORD *)v30 + 452, &v79) + 0x7FFF;
              v45 = *((_DWORD *)v30 + 39);
              LOWORD(v74) = v44;
              v86 = v45;
              v87 = *((_DWORD *)v30 + 40);
              v46 = *((_DWORD *)v30 + 41);
              v83 = *(_DWORD *)(this + 156);
              v88 = v46;
              v84 = *(_DWORD *)(this + 160);
              v85 = *(_DWORD *)(this + 164);
              v47 = (((v74 >> 12) + 1) >> 1) & 7;
              v48 = Math::CalcAngle((double)v84 - (double)v87, (double)v45 - (double)v83);
              LOWORD(v75) = Math::RoundToInt((v48 - 1.570796326794897) * -10430.06004058427);
              if ( v43 == v47 )
              {
                v49 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v30 + 72))(v30, v90);
                v50 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v91);
                v51 = *v50 - *v49;
                v52 = v50[1];
                v53 = v50[2];
                v80 = v51;
                v54 = v49[2];
                v81 = v52 - v49[1];
                v82 = v53 - v54;
                v55 = Math::Sqrt(
                        (double)v80 * (double)v80
                      + (double)(v53 - v54) * (double)(v53 - v54)
                      + (double)v81 * (double)v81);
                if ( (int)Math::RoundToInt(v55) <= 511 && ((((v75 >> 12) + 1) >> 1) & 7) == v43 )
                  return 7;
              }
              v56 = v72;
              if ( v72[1718] && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v72 + 44))(v72) != 15 )
                goto LABEL_150;
              if ( !*((_DWORD *)v56 + 413) )
                WinAPI::Wrapper(-2147467261);
              if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)v56 + 413) + 164))(*((_DWORD *)v56 + 413)) )
              {
LABEL_150:
                if ( v68 < 2 )
                  v68 = 2;
              }
            }
            else
            {
              if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6 )
                return 7;
              if ( v25 < 6 )
              {
                v25 = 6;
                v68 = 6;
                goto LABEL_153;
              }
            }
          }
          else
          {
            v57 = AbstractClass::IsTechno(v30);
            if ( v57 && v57[136] == 2 )
            {
              if ( v25 < 1 )
              {
                v25 = 1;
                v68 = 1;
                goto LABEL_153;
              }
            }
            else if ( (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368)
                    || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
                   && ObjectClass::IsCrushable(v30, (_DWORD **)this) )
            {
              if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v30) )
              {
                v67 = 1;
                goto LABEL_153;
              }
            }
            else
            {
              if ( !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0)
                && !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3220) )
              {
                return 7;
              }
              v58 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30);
              if ( v58 == 6 )
              {
                if ( *(_BYTE *)(*((_DWORD *)v30 + 328) + 5814) )
                  return 7;
              }
              else if ( v58 == 36 )
              {
                v59 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 740))(this, v30);
                v60 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v59);
                if ( !v60 )
                  return 7;
                v61 = *(_DWORD *)(v60 + 172);
                if ( !v61 || !*(_BYTE *)(v61 + 327) )
                  return 7;
              }
              if ( v25 < 5 )
              {
                v25 = 5;
                v68 = 5;
                goto LABEL_153;
              }
            }
          }
          v25 = v68;
          v26 = a2;
LABEL_153:
          v30 = (_BYTE *)*((_DWORD *)v30 + 12);
          if ( !v30 )
            goto LABEL_154;
        }
        v72 = 0;
LABEL_139:
        v66 = 0;
        goto LABEL_140;
      }
LABEL_154:
      if ( !v63
        && *(float *)&MEMORY[0x87F7E8][9 * *(_DWORD *)(v26 + 236) + 31894 + *(_DWORD *)(*(_DWORD *)(this + 1732) + 1660)] == 0.0 )
      {
        return 7;
      }
      if ( !v25 )
      {
        if ( v67 )
        {
          if ( v65 )
          {
            if ( !CellClass::FindBuilding((_DWORD *)v26, 0) )
              return 2;
            Building = CellClass::FindBuilding((_DWORD *)v26, 0);
            if ( !ObjectClass::IsCrushable(Building, (_DWORD **)this) )
              return 2;
          }
        }
        else if ( (v64 & 0x3F) != 0 )
        {
          if ( v65 || v69 != -1 && HouseClass::IsAllied(*(_DWORD **)(this + 540), v69) )
          {
            return 2;
          }
          else if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368)
                 && !TechnoTypeClass::HasVoiceResponse((float *)this, 17) )
          {
            if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3220)
              || *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0)
              && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(
                                                     this,
                                                     0)
                                      + 160)
                          + 677) )
            {
              return 5;
            }
            return 7;
          }
        }
      }
      return v25;
    }
  }
  return result;
}

/* ASM:
sub     esp, 80h
push    ebx
mov     ebx, ecx
mov     ecx, [esp+84h+arg_0]
push    ebp
mov     ebp, 100h
push    esi
mov     eax, [ecx+140h]
push    edi
test    ebp, eax
jz      short loc_73F0E8
mov     eax, [esp+90h+arg_8]
cmp     eax, 0FFFFFFFFh
jz      short loc_73F0E1
movsx   edx, byte ptr [ecx+11Bh]
sub     eax, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 1
jle     short loc_73F0E8

loc_73F0E1:                             ; CODE XREF: UnitClass__EvaluateTarget+2C↑j
mov     [esp+90h+var_7D], 1
jmp     short loc_73F0ED
; ---------------------------------------------------------------------------

loc_73F0E8:                             ; CODE XREF: UnitClass__EvaluateTarget+20↑j
; UnitClass__EvaluateTarget+3F↑j
mov     [esp+90h+var_7D], 0

loc_73F0ED:                             ; CODE XREF: UnitClass__EvaluateTarget+46↑j
mov     al, [ecx+124h]
mov     edx, [ecx+54h]
mov     [esp+90h+var_7C], al
mov     eax, [ecx+124h]
shr     eax, 5
and     al, 1
mov     [esp+90h+var_74], edx
mov     [esp+90h+var_7B], al
call    InfantryClass__GetType
mov     esi, eax
mov     eax, [ebx+6C4h]
mov     eax, [eax+0DFCh]
cmp     eax, 0FFFFFFFFh
jz      loc_73F211
mov     ecx, [esp+90h+arg_0]
mov     edi, [ecx+0ECh]
cmp     edi, 0Ah
jnz     loc_73F1CE
mov     edx, ecx
mov     ecx, [edx+38h]
mov     edx, ds:0A8ED2Ch
mov     ecx, [edx+ecx*4]
mov     edx, [ecx+2E4h]
cmp     edx, 5
jnz     short loc_73F161
cmp     dword ptr [ecx+2E8h], 3
jz      short loc_73F16F

loc_73F161:                             ; CODE XREF: UnitClass__EvaluateTarget+B6↑j
cmp     edx, 4
jnz     short loc_73F191
cmp     dword ptr [ecx+2E8h], 3
jnz     short loc_73F191

loc_73F16F:                             ; CODE XREF: UnitClass__EvaluateTarget+BF↑j
mov     ecx, [esp+90h+arg_0]
cmp     byte ptr [ecx+11Ah], 2
jz      short loc_73F1CE
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F191:                             ; CODE XREF: UnitClass__EvaluateTarget+C4↑j
; UnitClass__EvaluateTarget+CD↑j
cmp     edx, 3
jnz     short loc_73F1CE
cmp     dword ptr [ecx+2E8h], 4
jz      short loc_73F1AC
cmp     edx, edx
jnz     short loc_73F1CE
cmp     dword ptr [ecx+2E8h], 5
jnz     short loc_73F1CE

loc_73F1AC:                             ; CODE XREF: UnitClass__EvaluateTarget+FD↑j
mov     ecx, [esp+90h+arg_0]
cmp     byte ptr [ecx+11Ah], 6
jz      short loc_73F1D5
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F1CE:                             ; CODE XREF: UnitClass__EvaluateTarget+99↑j
; UnitClass__EvaluateTarget+DD↑j ...
mov     ecx, [esp+90h+arg_0]

loc_73F1D5:                             ; CODE XREF: UnitClass__EvaluateTarget+11A↑j
cmp     edi, eax
jz      short loc_73F211
cmp     edi, 0Ah
jz      short loc_73F211
mov     eax, [ecx+44h]
cmp     eax, 0EDh
jl      short loc_73F1FF
cmp     eax, 0EEh
jg      short loc_73F1FF
movsx   edx, byte ptr [ecx+11Bh]
cmp     [esp+90h+arg_8], edx
jnz     short loc_73F211

loc_73F1FF:                             ; CODE XREF: UnitClass__EvaluateTarget+146↑j
; UnitClass__EvaluateTarget+14D↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F211:                             ; CODE XREF: UnitClass__EvaluateTarget+83↑j
; UnitClass__EvaluateTarget+137↑j ...
mov     edi, [esp+90h+arg_4]
cmp     edi, 8
jnz     short loc_73F24B
test    esi, esi
jz      loc_73FCD0
mov     esi, [esi+28h]
test    si, si
mov     [esp+90h+var_68], esi
jnz     short loc_73F23C
cmp     word ptr [esp+90h+var_68+2], si
jz      loc_73FCD0

loc_73F23C:                             ; CODE XREF: UnitClass__EvaluateTarget+18F↑j
; UnitClass__EvaluateTarget+4CF↓j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F24B:                             ; CODE XREF: UnitClass__EvaluateTarget+17B↑j
test    esi, esi
jz      short loc_73F27C
mov     edx, [esi+2Ch]
mov     eax, edi
sub     eax, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 2
jle     short loc_73F27C
cmp     eax, 6
jge     short loc_73F27C
cmp     edi, 0FFFFFFFFh
jz      short loc_73F27C
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F27C:                             ; CODE XREF: UnitClass__EvaluateTarget+1AD↑j
; UnitClass__EvaluateTarget+1BE↑j ...
mov     ecx, [esp+90h+arg_0]
lea     esi, [edi-4]
and     esi, 7
push    esi
call    Cell__GetNeighbourContent
mov     ecx, eax
call    InfantryClass__GetType
mov     ecx, eax
test    ecx, ecx
jz      short loc_73F2C9
mov     edx, [ecx+2Ch]
mov     eax, esi
sub     eax, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, 2
jle     short loc_73F2C9
cmp     eax, 6
jge     short loc_73F2C9
cmp     edi, 0FFFFFFFFh
jz      short loc_73F2C9
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F2C9:                             ; CODE XREF: UnitClass__EvaluateTarget+1FA↑j
; UnitClass__EvaluateTarget+20B↑j ...
mov     esi, [esp+90h+arg_C]
mov     eax, [ebx]
lea     ecx, [esp+90h+var_7D]
push    esi
lea     edx, [esp+94h+arg_8]
push    ecx
mov     ecx, [esp+98h+arg_0]
push    edx
push    edi
push    ecx
mov     ecx, ebx
call    dword ptr [eax+1B0h]
cmp     eax, 7
jnz     short loc_73F303
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F303:                             ; CODE XREF: UnitClass__EvaluateTarget+254↑j
mov     ecx, [esp+90h+arg_8]
cmp     ecx, 0FFFFFFFFh
jz      short loc_73F34C
mov     edx, [esp+90h+arg_0]
test    [edx+140h], ebp
jz      short loc_73F34C
movsx   eax, byte ptr [edx+11Bh]
add     eax, 4
cmp     ecx, eax
jnz     short loc_73F34C
mov     al, [edx+128h]
mov     [esp+90h+var_7C], al
mov     eax, [edx+128h]
mov     edx, [edx+58h]
shr     eax, 5
and     al, 1
mov     [esp+90h+var_74], edx
mov     [esp+90h+var_7B], al

loc_73F34C:                             ; CODE XREF: UnitClass__EvaluateTarget+26D↑j
; UnitClass__EvaluateTarget+27C↑j ...
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_73F39E
mov     eax, [esp+90h+arg_0]
push    1
push    eax
mov     ecx, 87F7E8h
call    Type__CheckAmbiguity
test    al, al
jnz     short loc_73F397
mov     edx, [ebx]
mov     ecx, ebx
call    dword ptr [edx+320h]
test    al, al
jnz     short loc_73F397
mov     al, [ebx+3D5h]
test    al, al
jz      short loc_73F397
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F397:                             ; CODE XREF: UnitClass__EvaluateTarget+2CB↑j
; UnitClass__EvaluateTarget+2D9↑j ...
mov     ecx, [esp+90h+arg_8]

loc_73F39E:                             ; CODE XREF: UnitClass__EvaluateTarget+2B3↑j
mov     eax, [esp+90h+arg_10]
push    eax
push    esi
push    ecx
mov     ecx, [esp+9Ch+arg_0]
push    edi
push    ecx
mov     ecx, ebx
call    FootClass__Destru_vt107
mov     ebp, eax
cmp     ebp, 7
mov     [esp+90h+var_78], ebp
jnz     short loc_73F3D0
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F3D0:                             ; CODE XREF: UnitClass__EvaluateTarget+321↑j
mov     edi, [esp+90h+arg_0]
mov     eax, [edi+44h]
cmp     eax, 0FFFFFFFFh
jz      loc_73F4F9
mov     edx, ds:0A83D84h
mov     esi, [edx+eax*4]
mov     al, [esi+2AAh]
test    al, al
jz      short loc_73F420
mov     ecx, [ebx+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_73F420
mov     eax, ds:0A8B238h
test    eax, eax
jnz     short loc_73F420
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F420:                             ; CODE XREF: UnitClass__EvaluateTarget+354↑j
; UnitClass__EvaluateTarget+363↑j ...
mov     al, [esi+2A8h]
test    al, al
jz      loc_73F4F9
mov     al, [esi+22Dh]
test    al, al
jz      short loc_73F455
mov     eax, [ebx+6C4h]
mov     cl, [eax+0D28h]
test    cl, cl
jnz     short loc_73F46E
push    11h
mov     ecx, ebx
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jnz     short loc_73F46E

loc_73F455:                             ; CODE XREF: UnitClass__EvaluateTarget+396↑j
mov     al, [esi+2A8h]
test    al, al
jz      short loc_73F483
mov     ecx, [ebx+6C4h]
cmp     dword ptr [ecx+5B4h], 0Ch
jnz     short loc_73F483

loc_73F46E:                             ; CODE XREF: UnitClass__EvaluateTarget+3A6↑j
; UnitClass__EvaluateTarget+3B3↑j
mov     edx, [edi+50h]
mov     ecx, [ebx+21Ch]
push    edx
call    HouseClass__IsAllied
test    al, al
jz      short loc_73F4F9
jmp     short loc_73F4EB
; ---------------------------------------------------------------------------

loc_73F483:                             ; CODE XREF: UnitClass__EvaluateTarget+3BD↑j
; UnitClass__EvaluateTarget+3CC↑j
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2ACh]
test    al, al
jz      loc_73FCD0
mov     edx, [ebx]
push    0
mov     ecx, ebx
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     eax, [eax+0ACh]
mov     cl, [eax+144h]
test    cl, cl
jnz     short loc_73F4D8
mov     cl, [eax+147h]
test    cl, cl
jz      short loc_73F4C6
cmp     dword ptr [esi+9Ch], 6
jz      short loc_73F4D8

loc_73F4C6:                             ; CODE XREF: UnitClass__EvaluateTarget+41B↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73F4D8:                             ; CODE XREF: UnitClass__EvaluateTarget+411↑j
; UnitClass__EvaluateTarget+424↑j
mov     ecx, [edi+50h]
push    ecx
mov     ecx, [ebx+21Ch]
call    HouseClass__IsAllied
test    al, al
jz      short loc_73F50E

loc_73F4EB:                             ; CODE XREF: UnitClass__EvaluateTarget+3E1↑j
cmp     ebp, 4
jge     short loc_73F4F9
mov     ebp, 4

loc_73F4F5:                             ; CODE XREF: UnitClass__EvaluateTarget+478↓j
mov     [esp+90h+var_78], ebp

loc_73F4F9:                             ; CODE XREF: UnitClass__EvaluateTarget+33D↑j
; UnitClass__EvaluateTarget+388↑j ...
mov     al, [esp+90h+var_7D]
mov     [esp+90h+var_79], 0
test    al, al
jz      short loc_73F51A
mov     esi, [edi+0E8h]
jmp     short loc_73F520
; ---------------------------------------------------------------------------

loc_73F50E:                             ; CODE XREF: UnitClass__EvaluateTarget+449↑j
cmp     ebp, 5
jge     short loc_73F4F9
mov     ebp, 5
jmp     short loc_73F4F5
; ---------------------------------------------------------------------------

loc_73F51A:                             ; CODE XREF: UnitClass__EvaluateTarget+464↑j
mov     esi, [edi+0E4h]

loc_73F520:                             ; CODE XREF: UnitClass__EvaluateTarget+46C↑j
test    esi, esi
jz      loc_73FA92

loc_73F528:                             ; CODE XREF: UnitClass__EvaluateTarget+9EC↓j
cmp     ebx, esi
jz      loc_73FC10
mov     eax, [ebx+69Ch]
test    eax, eax
jz      short loc_73F57C
mov     ecx, [eax+28h]
test    ecx, ecx
jz      short loc_73F57C
mov     edx, [ecx]
lea     eax, [esp+90h+var_58]
push    eax
call    dword ptr [edx+1B8h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+90h+var_54]
mov     ecx, esi
push    eax
call    dword ptr [edx+1B8h]
mov     cx, [eax]
cmp     cx, [edi]
jnz     short loc_73F575
mov     dx, [eax+2]
cmp     dx, [edi+2]
jz      loc_73F23C

loc_73F575:                             ; CODE XREF: UnitClass__EvaluateTarget+4C5↑j
mov     edi, [esp+90h+arg_0]

loc_73F57C:                             ; CODE XREF: UnitClass__EvaluateTarget+498↑j
; UnitClass__EvaluateTarget+49F↑j
mov     al, [esi+14h]
mov     ecx, ebx
and     al, 1
neg     al
sbb     eax, eax
and     eax, esi
push    eax
call    Array__Contains
test    al, al
jz      short loc_73F5AF
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_73F5AF
push    edi
mov     ecx, esi
call    UnitClass__IsCellBlockedByBridge
test    al, al
jz      loc_73FA87

loc_73F5AF:                             ; CODE XREF: UnitClass__EvaluateTarget+4F1↑j
; UnitClass__EvaluateTarget+4FD↑j
mov     ecx, [ebx+6C4h]
mov     al, [ecx+0E18h]
test    al, al
jz      short loc_73F5DF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_73F5DF
mov     eax, [esi+6C4h]
mov     cl, [eax+0E18h]
test    cl, cl
jnz     loc_73F23C

loc_73F5DF:                             ; CODE XREF: UnitClass__EvaluateTarget+51D↑j
; UnitClass__EvaluateTarget+529↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_73F823
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+184h]
cmp     eax, 7
jnz     short loc_73F628
cmp     esi, [ebx+5A4h]
jnz     short loc_73F628
mov     ecx, [esi+520h]
mov     al, [ecx+16AEh]
test    al, al
jz      short loc_73F628
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jz      loc_73F23C

loc_73F628:                             ; CODE XREF: UnitClass__EvaluateTarget+55C↑j
; UnitClass__EvaluateTarget+564↑j ...
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+184h]
cmp     eax, 9
jnz     short loc_73F661
cmp     esi, [ebx+5A4h]
jnz     short loc_73F661
mov     ecx, [esi+520h]
mov     al, [ecx+16ADh]
test    al, al
jz      short loc_73F661
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jz      loc_73F23C

loc_73F661:                             ; CODE XREF: UnitClass__EvaluateTarget+595↑j
; UnitClass__EvaluateTarget+59D↑j ...
mov     eax, [esi+520h]
mov     cl, [eax+16ADh]
test    cl, cl
jz      short loc_73F6D6
mov     edx, [ebx]
lea     eax, [esp+90h+var_24]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_70], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+90h+var_64]
sar     eax, 8
mov     word ptr [esp+90h+var_70+2], ax
mov     ecx, [esp+90h+var_70]
mov     [esp+90h+var_64], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     eax, [eax+0E4h]
test    eax, eax
jz      short loc_73F6D6

loc_73F6C7:                             ; CODE XREF: UnitClass__EvaluateTarget+634↓j
cmp     eax, esi
jz      loc_73F23C
mov     eax, [eax+30h]
test    eax, eax
jnz     short loc_73F6C7

loc_73F6D6:                             ; CODE XREF: UnitClass__EvaluateTarget+5CF↑j
; UnitClass__EvaluateTarget+625↑j
mov     eax, [esi+520h]
mov     cl, [eax+16B7h]
test    cl, cl
jz      short loc_73F74B
mov     ecx, esi
call    BuildingClass__IsPoweredOn
test    al, al
jnz     loc_73FA87
mov     eax, [ebx+21Ch]
mov     ecx, [esi+21Ch] ; this
push    eax             ; other
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_73F722
cmp     ebp, 3
jge     loc_73FA87
mov     ebp, 3
mov     [esp+90h+var_78], ebp
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73F722:                             ; CODE XREF: UnitClass__EvaluateTarget+669↑j
mov     edx, [ebx]
mov     ecx, ebx
call    dword ptr [edx+2ACh]
test    al, al
jz      loc_73FCD0
cmp     ebp, 5
jge     loc_73FA87
mov     ebp, 5
mov     [esp+90h+var_78], ebp
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73F74B:                             ; CODE XREF: UnitClass__EvaluateTarget+644↑j
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_73F75F
mov     cl, [eax+16ABh]
test    cl, cl
jz      short loc_73F77A

loc_73F75F:                             ; CODE XREF: UnitClass__EvaluateTarget+6B3↑j
mov     ecx, edi
call    Cell__IsBridge
cmp     eax, esi
jnz     short loc_73F77A
push    edi
mov     ecx, esi
call    UnitClass__IsCellBlockedByBridge
test    al, al
jz      loc_73FA87

loc_73F77A:                             ; CODE XREF: UnitClass__EvaluateTarget+6BD↑j
; UnitClass__EvaluateTarget+6C8↑j
mov     eax, [esi+520h]
mov     cl, [eax+1701h]
test    cl, cl
jnz     loc_73FA87
mov     cl, [eax+16BFh]
test    cl, cl
jz      short loc_73F7B0
mov     ecx, [esi+618h]
cmp     ecx, 0Ch
jz      loc_73FA87
cmp     ecx, 8
jz      loc_73FA87

loc_73F7B0:                             ; CODE XREF: UnitClass__EvaluateTarget+6F6↑j
mov     cl, [eax+16C0h]
test    cl, cl
jz      short loc_73F7D3
mov     eax, [esi+21Ch]
mov     cl, [eax+1FAh]
test    cl, cl
jnz     loc_73FCD0
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73F7D3:                             ; CODE XREF: UnitClass__EvaluateTarget+718↑j
mov     cl, [eax+1570h]
test    cl, cl
jz      short loc_73F823
mov     cx, [edi+24h]
mov     dx, [edi+26h]
add     cx, ds:89F690h
add     dx, ds:89F692h
mov     word ptr [esp+90h+var_6C], cx
lea     ecx, [esp+90h+var_68]
mov     word ptr [esp+90h+var_6C+2], dx
mov     eax, [esp+90h+var_6C]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+94h+var_68], eax
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBridge
cmp     eax, esi
jnz     loc_73FA87

loc_73F823:                             ; CODE XREF: UnitClass__EvaluateTarget+549↑j
; UnitClass__EvaluateTarget+73B↑j
mov     edx, [ebx]
mov     ecx, ebx
call    dword ptr [edx+184h]
cmp     eax, 7
jnz     short loc_73F84A
cmp     esi, [ebx+5A4h]
jnz     short loc_73F84A
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 1
jz      loc_73F23C

loc_73F84A:                             ; CODE XREF: UnitClass__EvaluateTarget+790↑j
; UnitClass__EvaluateTarget+798↑j
mov     edx, [ebx]
mov     ecx, ebx
call    dword ptr [edx+184h]
cmp     eax, 0Bh
jnz     short loc_73F865
cmp     [ebx+218h], esi
jz      loc_73FCD0

loc_73F865:                             ; CODE XREF: UnitClass__EvaluateTarget+7B7↑j
test    byte ptr [esi+14h], 4
jz      short loc_73F8B3
mov     eax, [esi+5A4h]
mov     [esp+90h+var_68], esi
test    eax, eax
jnz     short loc_73F8AC
lea     ecx, [esi+388h]
call    TimerClass__Active
test    al, al
jnz     short loc_73F8AC
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_73F89C
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_73F89C:                             ; CODE XREF: UnitClass__EvaluateTarget+7F0↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      short loc_73F8BB

loc_73F8AC:                             ; CODE XREF: UnitClass__EvaluateTarget+7D7↑j
; UnitClass__EvaluateTarget+7E6↑j
mov     [esp+90h+var_7A], 1
jmp     short loc_73F8C0
; ---------------------------------------------------------------------------

loc_73F8B3:                             ; CODE XREF: UnitClass__EvaluateTarget+7C9↑j
mov     [esp+90h+var_68], 0

loc_73F8BB:                             ; CODE XREF: UnitClass__EvaluateTarget+80A↑j
mov     [esp+90h+var_7A], 0

loc_73F8C0:                             ; CODE XREF: UnitClass__EvaluateTarget+811↑j
mov     ecx, [ebx+21Ch]
push    esi
call    Object__IsAlliedWithObjectHouse
test    al, al
jz      loc_73FAFF
mov     al, [esp+90h+var_7A]
test    al, al
jz      loc_73FADF
lea     edx, [esp+90h+var_50]
lea     ecx, [ebx+388h]
push    edx
call    ProgressTimer__GetValue
mov     ebp, [eax]
lea     eax, [esp+90h+var_4C]
shr     ebp, 0Ch
inc     ebp
push    eax
shr     ebp, 1
lea     ecx, [esi+388h]
and     ebp, 7
call    ProgressTimer__GetValue
mov     cx, [eax]
lea     edx, [esi+9Ch]
add     cx, 7FFFh
sub     esp, 8
mov     eax, [edx]
mov     word ptr [esp+98h+var_60], cx
mov     [esp+98h+var_30], eax
lea     eax, [ebx+9Ch]
mov     ecx, [edx+4]
mov     edi, [esp+98h+var_60]
fild    [esp+98h+var_30]
mov     [esp+98h+var_2C], ecx
mov     ecx, [eax]
mov     edx, [edx+8]
mov     [esp+98h+var_3C], ecx
fisub   [esp+98h+var_3C]
mov     [esp+98h+var_28], edx
mov     edx, [eax+4]
mov     [esp+98h+var_38], edx
sub     esp, 8
mov     eax, [eax+8]
shr     edi, 0Ch
inc     edi
mov     [esp+0A0h+var_34], eax
shr     edi, 1
fstp    [esp+0A0h+var_98] ; double
fild    [esp+0A0h+var_38]
and     edi, 7
fisub   [esp+0A0h+var_2C]
fstp    [esp+0A0h+var_A0] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
cmp     ebp, edi
mov     word ptr [esp+90h+var_5C], ax
jnz     loc_73FA2C
mov     edx, [esi]
lea     eax, [esp+90h+var_18]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     edx, [ebx]
mov     edi, eax
lea     eax, [esp+90h+var_C]
mov     ecx, ebx
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [edi]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+90h+var_48], ecx
mov     ecx, [edi+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [edi+8]
mov     [esp+98h+var_44], edx
sub     eax, ecx
fild    [esp+98h+var_44]
mov     [esp+98h+var_40], eax
fild    [esp+98h+var_40]
fild    [esp+98h+var_48]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+98h+var_98] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 1FFh
jg      short loc_73FA2C
mov     ecx, [esp+90h+var_5C]
shr     ecx, 0Ch
inc     ecx
shr     ecx, 1
and     ecx, 7
cmp     ecx, ebp
jz      loc_73FCD0

loc_73FA2C:                             ; CODE XREF: UnitClass__EvaluateTarget+8F6↑j
; UnitClass__EvaluateTarget+975↑j
mov     edi, [esp+90h+var_68]
mov     al, [edi+6B6h]
test    al, al
jz      short loc_73FA46
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_73FA6D

loc_73FA46:                             ; CODE XREF: UnitClass__EvaluateTarget+998↑j
mov     eax, [edi+674h]
test    eax, eax
jnz     short loc_73FA5A
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_73FA5A:                             ; CODE XREF: UnitClass__EvaluateTarget+9AE↑j
mov     eax, [edi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+0A4h]
test    al, al
jz      short loc_73FA7C

loc_73FA6D:                             ; CODE XREF: UnitClass__EvaluateTarget+9A4↑j
cmp     [esp+90h+var_78], 2
jge     short loc_73FA7C
mov     [esp+90h+var_78], 2

loc_73FA7C:                             ; CODE XREF: UnitClass__EvaluateTarget+9CB↑j
; UnitClass__EvaluateTarget+9D2↑j ...
mov     ebp, [esp+90h+var_78]
mov     edi, [esp+90h+arg_0]

loc_73FA87:                             ; CODE XREF: UnitClass__EvaluateTarget+509↑j
; UnitClass__EvaluateTarget+64F↑j ...
mov     esi, [esi+30h]
test    esi, esi
jnz     loc_73F528

loc_73FA92:                             ; CODE XREF: UnitClass__EvaluateTarget+482↑j
mov     al, [esp+90h+var_7D]
test    al, al
jnz     loc_73FC24
mov     eax, [edi+0ECh]
mov     edx, [ebx+6C4h]
lea     ecx, [eax+eax*8]
mov     eax, [edx+67Ch]
add     ecx, eax
fld     dword ptr ds:89EA40h[ecx*4]
fcomp   ds:flt_7E1748
fnstsw  ax
test    ah, 40h
jz      loc_73FC24
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73FADF:                             ; CODE XREF: UnitClass__EvaluateTarget+83A↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jz      loc_73FCD0
cmp     ebp, 6
jge     short loc_73FA7C
mov     ebp, 6
mov     [esp+90h+var_78], ebp
jmp     short loc_73FA87
; ---------------------------------------------------------------------------

loc_73FAFF:                             ; CODE XREF: UnitClass__EvaluateTarget+82E↑j
mov     ecx, esi
call    AbstractClass__IsTechno
test    eax, eax
jz      short loc_73FB2A
cmp     dword ptr [eax+220h], 2
jnz     short loc_73FB2A
cmp     ebp, 1
jge     loc_73FA7C
mov     ebp, 1
mov     [esp+90h+var_78], ebp
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73FB2A:                             ; CODE XREF: UnitClass__EvaluateTarget+A68↑j
; UnitClass__EvaluateTarget+A71↑j
mov     eax, [ebx+6C4h]
mov     cl, [eax+0D28h]
test    cl, cl
jnz     short loc_73FB47
push    11h
mov     ecx, ebx
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_73FB71

loc_73FB47:                             ; CODE XREF: UnitClass__EvaluateTarget+A98↑j
push    ebx
mov     ecx, esi
call    ObjectClass__IsCrushable
test    al, al
jz      short loc_73FB71
mov     ecx, [ebx+21Ch]
push    esi
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     loc_73FA7C
mov     [esp+90h+var_79], 1
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73FB71:                             ; CODE XREF: UnitClass__EvaluateTarget+AA5↑j
; UnitClass__EvaluateTarget+AB1↑j
mov     edx, [ebx]
push    0
mov     ecx, ebx
call    dword ptr [edx+3F8h]
cmp     dword ptr [eax], 0
jnz     short loc_73FB96
mov     eax, [ebx+6C4h]
mov     cl, [eax+0C94h]
test    cl, cl
jz      loc_73FCD0

loc_73FB96:                             ; CODE XREF: UnitClass__EvaluateTarget+AE0↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jz      short loc_73FBFA
cmp     eax, 24h ; '$'
jnz     short loc_73FBE3
mov     eax, [ebx]
push    esi
mov     ecx, ebx
call    dword ptr [eax+2E4h]
mov     edx, [ebx]
push    eax
mov     ecx, ebx
call    dword ptr [edx+3F8h]
mov     eax, [eax]
test    eax, eax
jz      loc_73FCD0
mov     eax, [eax+0ACh]
test    eax, eax
jz      loc_73FCD0
mov     cl, [eax+147h]
test    cl, cl
jz      loc_73FCD0

loc_73FBE3:                             ; CODE XREF: UnitClass__EvaluateTarget+B05↑j
; UnitClass__EvaluateTarget+B6E↓j
cmp     ebp, 5
jge     loc_73FA7C
mov     ebp, 5
mov     [esp+90h+var_78], ebp
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73FBFA:                             ; CODE XREF: UnitClass__EvaluateTarget+B00↑j
mov     eax, [esi+520h]
mov     cl, [eax+16B6h]
test    cl, cl
jnz     loc_73FCD0
jmp     short loc_73FBE3
; ---------------------------------------------------------------------------

loc_73FC10:                             ; CODE XREF: UnitClass__EvaluateTarget+48A↑j
mov     al, [esp+90h+var_7C]
mov     [esp+90h+var_7B], 0
and     al, 0DFh
mov     [esp+90h+var_7C], al
jmp     loc_73FA87
; ---------------------------------------------------------------------------

loc_73FC24:                             ; CODE XREF: UnitClass__EvaluateTarget+9F8↑j
; UnitClass__EvaluateTarget+A27↑j
test    ebp, ebp
jnz     loc_73FD37
mov     al, [esp+90h+var_79]
test    al, al
jnz     loc_73FCF6
test    [esp+90h+var_7C], 3Fh
jz      loc_73FD37
mov     al, [esp+90h+var_7B]
test    al, al
jnz     loc_73FD32
mov     eax, [esp+90h+var_74]
cmp     eax, 0FFFFFFFFh
jz      short loc_73FC6C
mov     ecx, [ebx+21Ch]
push    eax
call    HouseClass__IsAllied
test    al, al
jnz     loc_73FD32

loc_73FC6C:                             ; CODE XREF: UnitClass__EvaluateTarget+BB6↑j
mov     ecx, [ebx+6C4h]
mov     al, [ecx+0D28h]
test    al, al
jnz     loc_73FD37
push    11h
mov     ecx, ebx
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jnz     loc_73FD37
mov     edx, [ebx+6C4h]
mov     al, [edx+0C94h]
test    al, al
jnz     short loc_73FCE2
mov     eax, [ebx]
push    0
mov     ecx, ebx
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_73FCD0
mov     edx, [ebx]
push    0
mov     ecx, ebx
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A5h]
test    al, al
jnz     short loc_73FCE2

loc_73FCD0:                             ; CODE XREF: UnitClass__EvaluateTarget+17F↑j
; UnitClass__EvaluateTarget+196↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 7
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73FCE2:                             ; CODE XREF: UnitClass__EvaluateTarget+BFF↑j
; UnitClass__EvaluateTarget+C2E↑j
mov     ebp, 5
pop     edi
mov     eax, ebp
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73FCF6:                             ; CODE XREF: UnitClass__EvaluateTarget+B92↑j
mov     al, [esp+90h+var_7B]
test    al, al
jz      short loc_73FD37
push    0
mov     ecx, edi
call    CellClass__FindBuilding
test    eax, eax
jz      short loc_73FD20
push    ebx
push    0
mov     ecx, edi
call    CellClass__FindBuilding
mov     ecx, eax
call    ObjectClass__IsCrushable
test    al, al
jnz     short loc_73FD37

loc_73FD20:                             ; CODE XREF: UnitClass__EvaluateTarget+C69↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 80h
retn    14h
; ---------------------------------------------------------------------------

loc_73FD32:                             ; CODE XREF: UnitClass__EvaluateTarget+BA9↑j
; UnitClass__EvaluateTarget+BC6↑j
mov     ebp, 2

loc_73FD37:                             ; CODE XREF: UnitClass__EvaluateTarget+B86↑j
; UnitClass__EvaluateTarget+B9D↑j ...
pop     edi
mov     eax, ebp
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    14h
*/
}

// IDA: 0x7438F0 (CanCrushTarget, 339B)
// 0x7438f0
bool UnitClass::CanCrushTarget()
{
// [IDA decompile]
bool __thiscall sub_7438F0(int this, _BYTE *a2)
{
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  double v5; // st7
  int v6; // ecx
  bool result; // al
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+34h] [ebp-Ch] BYREF

  result = (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
        && a2
        && ObjectClass::IsCrushable(a2, (_DWORD **)this)
        && (v3 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v10),
            v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v11),
            v8 = v4[1] - v3[1],
            v9 = v4[2] - v3[2],
            v5 = Math::Sqrt((double)(*v4 - *v3) * (double)(*v4 - *v3) + (double)v9 * (double)v9 + (double)v8
                                                                                                * (double)v8),
            (int)Math::RoundToInt(v5) <= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5928))
        && (!(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
         || *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6123)
         || *(_BYTE *)(*(_DWORD *)(this + 1732) + 3373))
        && (v6 = *(_DWORD *)(this + 540), *(_DWORD *)(v6 + 388) != 2)
        && ((unsigned __int8)House::IsCurrentPlayer((#375 *)v6)
         || *(_DWORD *)(*(_DWORD *)(this + 540) + 588) >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5192))
        && (*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a2 + 200))(a2, *(_DWORD *)(this + 540)) == 0;
  return result;
}

/* ASM:
sub     esp, 24h
push    ebx
push    esi
mov     esi, ecx
mov     eax, [esi+6C4h]
mov     cl, [eax+0D28h]
test    cl, cl
jnz     short loc_743918
push    11h
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      loc_743A39

loc_743918:                             ; CODE XREF: UnitClass__CanCrushTarget+15↑j
mov     ebx, [esp+2Ch+arg_0]
test    ebx, ebx
jz      loc_743A39
push    esi
mov     ecx, ebx
call    ObjectClass__IsCrushable
test    al, al
jz      loc_743A39
mov     edx, [ebx]
lea     eax, [esp+2Ch+var_18]
push    edi
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+30h+var_C]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [edi]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+30h+var_24], ecx
mov     ecx, [edi+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [edi+8]
mov     [esp+38h+var_20], edx
sub     eax, ecx
fild    [esp+38h+var_20]
mov     [esp+38h+var_1C], eax
fild    [esp+38h+var_1C]
fild    [esp+38h+var_24]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+38h+var_38] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
mov     ecx, ds:8871E0h
pop     edi
cmp     eax, [ecx+1728h]
jg      loc_743A39
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_7439E8
mov     edx, ds:8871E0h
mov     al, [edx+17EBh]
test    al, al
jnz     short loc_7439E8
mov     eax, [esi+6C4h]
mov     cl, [eax+0D2Dh]
test    cl, cl
jz      short loc_743A39

loc_7439E8:                             ; CODE XREF: UnitClass__CanCrushTarget+D6↑j
; UnitClass__CanCrushTarget+E6↑j
mov     ecx, [esi+21Ch] ; this
cmp     dword ptr [ecx+184h], 2
jz      short loc_743A39
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_743A1B
mov     ecx, [esi+21Ch]
mov     eax, ds:8871E0h
mov     edx, [ecx+24Ch]
mov     ecx, [eax+1448h]
cmp     edx, ecx
jl      short loc_743A39

loc_743A1B:                             ; CODE XREF: UnitClass__CanCrushTarget+10E↑j
mov     eax, [esi+21Ch]
mov     edx, [ebx]
push    eax
mov     ecx, ebx
call    dword ptr [edx+0C8h]
test    al, al
pop     esi
pop     ebx
setz    al
add     esp, 24h
retn    4
; ---------------------------------------------------------------------------

loc_743A39:                             ; CODE XREF: UnitClass__CanCrushTarget+22↑j
; UnitClass__CanCrushTarget+2E↑j ...
pop     esi
xor     al, al
pop     ebx
add     esp, 24h
retn    4
*/
}

// IDA: 0x70FBD0 (IsDeactivated, 7B)
// 0x70fbd0
int UnitClass::IsDeactivated()
{
// [IDA decompile]
char __thiscall UnitClass::IsDeactivated(_BYTE *this)
{
  return *(this + 456);
}

/* ASM:
mov     al, [ecx+1C8h]
retn
*/
}

// ============================================================
// Phase 3: Construction & Destruct
// ============================================================

// IDA: 0x6B4A50 (Create, 234B static)
// 0x6b4a50
int UnitClass::Create()
{
// [IDA decompile]
void **__thiscall UnitClass::Create(void **this, void *a2, _DWORD *a3, int a4)
{
  int v5; // eax

  ObjectClass::ctor(this);
  *this = &SmudgeClass::`vftable';
  *(this + 43) = a2;
  *(this + 2) = &SmudgeClass::`vftable';
  *(this + 1) = &SmudgeClass::`vftable';
  *(this + 3) = &SmudgeClass::`vftable';
  AbstractClass::GenerateUniqueID((int)(this + 1));
  if ( MEMORY[0xA8B1F0] < MEMORY[0xA8B1E8]
    || (MEMORY[0xA8B1ED] || !MEMORY[0xA8B1E8])
    && MEMORY[0xA8B1F4] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8B1E0] + 8))(
         &MEMORY[0xA8B1E0],
         MEMORY[0xA8B1E8] + MEMORY[0xA8B1F4],
         0) )
  {
    v5 = MEMORY[0xA8B1F0]++;
    *((_DWORD *)MEMORY[0xA8B1E4] + v5) = this;
  }
  if ( *a3 != MEMORY[0xB0B728] || a3[1] != MEMORY[0xB0B72C] || a3[2] != MEMORY[0xB0B730] )
  {
    dword_83FFD8 = a4;
    if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) )
    {
      ObjectClass::Destroy((#374 *)this);
      return this;
    }
    dword_83FFD8 = -1;
  }
  return this;
}

/* ASM:
push    esi
mov     esi, ecx
call    ObjectClass__ctor
mov     eax, [esp+4+arg_0]
mov     dword ptr [esi], offset ??_7SmudgeClass@@6B@ ; const SmudgeClass::`vftable'
mov     [esi+0ACh], eax
lea     eax, [esi+4]
push    eax
mov     dword ptr [esi+8], offset ??_7SmudgeClass@@6B@_0 ; const SmudgeClass::`vftable'
mov     dword ptr [eax], offset ??_7SmudgeClass@@6B@_1 ; const SmudgeClass::`vftable'
mov     dword ptr [esi+0Ch], offset ??_7SmudgeClass@@6B@_2 ; const SmudgeClass::`vftable'
call    AbstractClass__GenerateUniqueID
mov     eax, ds:0A8B1E8h
mov     ecx, ds:0A8B1F0h
cmp     ecx, eax
jl      short loc_6B4AC3
mov     cl, ds:0A8B1EDh
test    cl, cl
jnz     short loc_6B4AA2
test    eax, eax
jnz     short loc_6B4ADB

loc_6B4AA2:                             ; CODE XREF: UnitClass__Create+4C↑j
mov     ecx, ds:0A8B1F4h
test    ecx, ecx
jle     short loc_6B4ADB
mov     edx, ds:0A8B1E0h
add     ecx, eax
push    0
push    ecx
mov     ecx, 0A8B1E0h
call    dword ptr [edx+8]
test    al, al
jz      short loc_6B4ADB

loc_6B4AC3:                             ; CODE XREF: UnitClass__Create+42↑j
mov     ecx, ds:0A8B1F0h
mov     eax, ecx
inc     ecx
mov     ds:0A8B1F0h, ecx
mov     ecx, ds:0A8B1E4h
mov     [ecx+eax*4], esi

loc_6B4ADB:                             ; CODE XREF: UnitClass__Create+50↑j
; UnitClass__Create+5A↑j ...
mov     eax, [esp+4+arg_4]
mov     ecx, dword_A8ED54+7C9D4h
mov     edx, [eax]
cmp     edx, ecx
jnz     short loc_6B4B05
mov     ecx, [eax+4]
mov     edx, dword_A8ED54+7C9D8h
cmp     ecx, edx
jnz     short loc_6B4B05
mov     edx, [eax+8]
mov     ecx, dword_A8ED54+7C9DCh
cmp     edx, ecx
jz      short loc_6B4B34

loc_6B4B05:                             ; CODE XREF: UnitClass__Create+99↑j
; UnitClass__Create+A6↑j
mov     ecx, [esp+4+arg_8]
push    0
mov     dword_83FFD8, ecx
push    eax
mov     ecx, esi        ; this
call    ObjectClass__Deploy
test    al, al
jnz     short loc_6B4B2A
mov     ecx, esi        ; this
call    ObjectClass__Destroy
mov     eax, esi
pop     esi
retn    0Ch
; ---------------------------------------------------------------------------

loc_6B4B2A:                             ; CODE XREF: UnitClass__Create+CB↑j
mov     dword_83FFD8, 0FFFFFFFFh

loc_6B4B34:                             ; CODE XREF: UnitClass__Create+B3↑j
mov     eax, esi
pop     esi
retn    0Ch
*/
}

// IDA: 0x6B4C80 (ReadINI, 322B)
// 0x6b4c80
int UnitClass::ReadINI()
{
// [IDA decompile]
int __thiscall UnitClass::ReadINI(char *this)
{
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int _6B5440; // esi
  char *v7; // eax
  __int16 v8; // di
  char *v9; // eax
  __int16 v10; // bx
  char *v11; // eax
  void **v12; // eax
  int i; // [esp+4h] [ebp-94h]
  int v14; // [esp+8h] [ebp-90h]
  int v15[3]; // [esp+Ch] [ebp-8Ch] BYREF
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this);
  result = INIClass::GetKeyCount(this, (unsigned __int8 *)aSmudge);
  v3 = 0;
  v14 = result;
  for ( i = 0; i < v14; ++i )
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aSmudge, v3);
    INIClass::GetString((unsigned __int8 ***)this, (unsigned __int8 **)aSmudge, StringByIndex, 0, String, 128);
    v5 = strtok(String, Delimiter);
    _6B5440 = Object_Read_6B5440(v5);
    if ( _6B5440 != -1 )
    {
      v7 = strtok(0, Delimiter);
      if ( v7 )
      {
        v8 = atoi(v7);
        v9 = strtok(0, Delimiter);
        v10 = atoi(v9);
        v11 = strtok(0, Delimiter);
        if ( !v11 || !atoi(v11) )
        {
          v12 = (void **)__2_YAPAXI_Z(176);
          if ( v12 )
          {
            v15[0] = (v8 << 8) + 128;
            v15[1] = (v10 << 8) + 128;
            v15[2] = 0;
            UnitClass::Create(v12, *(void **)(MEMORY[0x87F7E8][539917] + 4 * _6B5440), v15, -1);
          }
        }
      }
    }
    result = v14;
    v3 = i + 1;
  }
  return result;
}

/* ASM:
String          = byte ptr -80h

sub     esp, 94h
push    ebp
mov     ebp, ecx
call    INIClass__ResetSection
mov     eax, ds:off_7F32C8 ; "Smudge"
mov     ecx, ebp
push    eax
call    INIClass__GetKeyCount
xor     ecx, ecx
test    eax, eax
mov     [esp+98h+var_90], eax
mov     [esp+98h+var_94], ecx
jle     loc_6B4DBA
push    ebx
push    esi
push    edi

loc_6B4CB0:                             ; CODE XREF: UnitClass__ReadINI+131↓j
push    ecx
mov     ecx, ds:off_7F32C8 ; "Smudge"
push    ecx
mov     ecx, ebp
call    INIClass__GetStringByIndex
lea     edx, [esp+0A4h+String]
mov     ecx, ebp
push    80h             ; Count
push    edx             ; Destination
push    0               ; Source
push    eax             ; int
mov     eax, ds:off_7F32C8 ; "Smudge"
push    eax             ; int
call    INIClass__GetString
lea     ecx, [esp+0A4h+String]
push    offset Delimiter ; ","
push    ecx             ; String
call    _strtok
add     esp, 8
mov     ecx, eax        ; void *
call    Object_Read_6B5440
mov     esi, eax
cmp     esi, 0FFFFFFFFh
jz      loc_6B4DA2
push    offset Delimiter ; ","
push    0               ; String
call    _strtok
add     esp, 8
test    eax, eax
jz      loc_6B4DA2
push    eax             ; String
call    _atoi
push    offset Delimiter ; ","
push    0               ; String
mov     edi, eax
call    _strtok
push    eax             ; String
call    _atoi
push    offset Delimiter ; ","
push    0               ; String
mov     bx, ax
call    _strtok
add     esp, 18h
test    eax, eax
jz      short loc_6B4D51
push    eax             ; String
call    _atoi
add     esp, 4
test    eax, eax
jnz     short loc_6B4DA2

loc_6B4D51:                             ; CODE XREF: UnitClass__ReadINI+C2↑j
push    0B0h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_6B4DA2
movsx   edx, di
movsx   ecx, bx
shl     edx, 8
shl     ecx, 8
add     edx, 80h
add     ecx, 80h
mov     [esp+0A4h+var_8C], edx
mov     [esp+0A4h+var_88], ecx
mov     ecx, ds:0A8EC1Ch
lea     edx, [esp+0A4h+var_8C]
push    0FFFFFFFFh      ; int
mov     [esp+0A8h+var_84], 0
push    edx             ; int
mov     edx, [ecx+esi*4]
push    edx             ; int
mov     ecx, eax        ; void **
call    UnitClass__Create

loc_6B4DA2:                             ; CODE XREF: UnitClass__ReadINI+77↑j
; UnitClass__ReadINI+8E↑j ...
mov     ecx, [esp+0A4h+var_94]
mov     eax, [esp+0A4h+var_90]
inc     ecx
cmp     ecx, eax
mov     [esp+0A4h+var_94], ecx
jl      loc_6B4CB0
pop     edi
pop     esi
pop     ebx

loc_6B4DBA:                             ; CODE XREF: UnitClass__ReadINI+27↑j
pop     ebp
add     esp, 94h
retn
*/
}

// IDA: 0x6B4FA0 (DestroySmudge, 167B)
// 0x6b4fa0
int UnitClass::DestroySmudge()
{
// [IDA decompile]
void **__thiscall UnitClass::DestroySmudge(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &SmudgeClass::`vftable';
  *(Block + 1) = &SmudgeClass::`vftable';
  *(Block + 2) = &SmudgeClass::`vftable';
  *(Block + 3) = &SmudgeClass::`vftable';
  AbstractClass::AnnounceExpiredPointer(Block);
  v5 = Block;
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8B1E0] + 16))(&MEMORY[0xA8B1E0], &v5);
  if ( v3 != -1 && v3 < MEMORY[0xA8B1F0] && v3 < --MEMORY[0xA8B1F0] )
  {
    do
    {
      ++v3;
      *((_DWORD *)MEMORY[0xA8B1E4] + v3 - 1) = *((_DWORD *)MEMORY[0xA8B1E4] + v3);
    }
    while ( v3 < MEMORY[0xA8B1F0] );
  }
  if ( MEMORY[0xA8E9A0] )
    ObjectClass::Undeploy((#374 *)Block);
  *(Block + 43) = 0;
  ObjectClass::Dtor(Block);
  if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
  return Block;
}

/* ASM:
push    ecx
push    esi
mov     esi, ecx
mov     dl, 1
mov     dword ptr [esi], offset ??_7SmudgeClass@@6B@ ; const SmudgeClass::`vftable'
mov     dword ptr [esi+4], offset ??_7SmudgeClass@@6B@_1 ; const SmudgeClass::`vftable'
mov     dword ptr [esi+8], offset ??_7SmudgeClass@@6B@_0 ; const SmudgeClass::`vftable'
mov     dword ptr [esi+0Ch], offset ??_7SmudgeClass@@6B@_2 ; const SmudgeClass::`vftable'
call    AbstractClass__AnnounceExpiredPointer
mov     edx, ds:0A8B1E0h
lea     eax, [esp+8+var_4]
push    eax
mov     ecx, 0A8B1E0h
mov     [esp+0Ch+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_6B500F
mov     ecx, ds:0A8B1F0h
cmp     eax, ecx
jge     short loc_6B500F
dec     ecx
cmp     eax, ecx
mov     ds:0A8B1F0h, ecx
jge     short loc_6B500F

loc_6B4FF7:                             ; CODE XREF: UnitClass__DestroySmudge+6D↓j
mov     ecx, ds:0A8B1E4h
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, ds:0A8B1F0h
cmp     eax, ecx
jl      short loc_6B4FF7

loc_6B500F:                             ; CODE XREF: UnitClass__DestroySmudge+40↑j
; UnitClass__DestroySmudge+4A↑j ...
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_6B501F
mov     ecx, esi        ; this
call    ObjectClass__Undeploy

loc_6B501F:                             ; CODE XREF: UnitClass__DestroySmudge+76↑j
mov     ecx, esi
mov     dword ptr [esi+0ACh], 0
call    ObjectClass__Dtor
test    [esp+8+arg_0], 1
jz      short loc_6B5040
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_6B5040:                             ; CODE XREF: UnitClass__DestroySmudge+95↑j
mov     eax, esi
pop     esi
pop     ecx
retn    4
*/
}

// IDA: 0x735780 (Destructor, 622B)
// 0x735780
void UnitClass::Destructor()
{
// [IDA decompile]
int __thiscall UnitClass::Destructor(void **this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int **v7; // edi
  __int16 *v8; // eax
  int v9; // eax
  int Vtable3; // eax
  int v11; // ebx
  int v12; // ebp
  int v13; // edi
  void **v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // eax
  void **v20; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 439);
  *this = &UnitClass::`vftable';
  *(this + 1) = &UnitClass::`vftable';
  *(this + 2) = &UnitClass::`vftable';
  *(this + 3) = &off_7F5C44;
  if ( v2 )
  {
    UnitClass::updateHarvesting(v2);
    *(this + 439) = 0;
  }
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) )
  {
    v3 = (int)*(this + 433);
    if ( v3 )
    {
      if ( HouseClass::CanBuild(*(this + 135), v3, 0, 0) == -1 )
        *((_BYTE *)*(this + 135) + 508) = 1;
      v4 = (int)*(this + 373);
      if ( v4 )
      {
        TeamClass::LiberateMember_Start(v4, (int)this, 0xFFFFFFFF, 0);
        *(this + 373) = 0;
      }
      HouseClass::DecrementUnitCount(*(this + 135), this);
      if ( !MEMORY[0x87F7E8][539633] && *(this + 70) )
      {
        do
        {
          v5 = LinkedList::Pop(this + 69);
          if ( v5 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1);
        }
        while ( *(this + 70) );
      }
      if ( (unsigned __int8)TechnoClass::CleanupDirection(this) )
      {
        v6 = (int)*(this + 435);
        if ( v6 != -1 )
        {
          v7 = (int **)(MEMORY[0x87F7E8][524945] + 4 * v6);
          v8 = (__int16 *)(*((int (__thiscall **)(void **, void ***))*this + 110))(this, &v20);
          HouseClass::DroppedFlag(*v7, v8, 0);
          *(this + 435) = (void *)-1;
        }
      }
    }
  }
  AbstractClass::AnnounceExpiredPointer(this, 1);
  v20 = this;
  v9 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][53832] + 16))(&MEMORY[0x87F7E8][53832], &v20);
  if ( v9 != -1 && v9 < MEMORY[0x87F7E8][53836] )
  {
    --MEMORY[0x87F7E8][53836];
    for ( ;
          v9 < MEMORY[0x87F7E8][53836];
          *(_DWORD *)(MEMORY[0x87F7E8][53833] + 4 * v9 - 4) = *(_DWORD *)(MEMORY[0x87F7E8][53833] + 4 * v9) )
    {
      ++v9;
    }
  }
  Vtable3 = AbstractClass::GetVtable3((int)(this + 1));
  v11 = dword_A8ED54[130748];
  v20 = (void **)Vtable3;
  if ( dword_A8ED54[130748] )
  {
    if ( !LOBYTE(dword_A8ED54[130750]) )
    {
      qsort((void *)dword_A8ED54[130747], dword_A8ED54[130748], 8, CompareFunction);
      v11 = dword_A8ED54[130748];
      dword_A8ED54[130751] = 0;
      LOBYTE(dword_A8ED54[130750]) = 1;
    }
    v12 = dword_A8ED54[130747];
    v13 = v11;
    while ( v13 > 0 )
    {
      v14 = *(void ***)(v12 + 8 * (v13 / 2));
      v15 = v12 + 8 * (v13 / 2);
      if ( (int)v20 >= (int)v14 )
      {
        if ( v14 == v20 )
        {
          if ( v15 )
          {
            v16 = (v15 - dword_A8ED54[130747]) >> 3;
            if ( v16 != -1 )
            {
              v17 = v16 + 1;
              if ( v17 < v11 )
              {
                do
                {
                  v18 = (_DWORD *)(dword_A8ED54[130747] + 8 * v17++);
                  *(v18 - 2) = *v18;
                  *(v18 - 1) = v18[1];
                  v11 = dword_A8ED54[130748];
                }
                while ( v17 < dword_A8ED54[130748] );
              }
              dword_A8ED54[130748] = v11 - 1;
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0;
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0;
              dword_A8ED54[130751] = 0;
            }
          }
          break;
        }
        v12 = v15 + 8;
        v13 += -1 - v13 / 2;
      }
      else
      {
        v13 /= 2;
      }
    }
  }
  *((_BYTE *)this + 144) = 0;
  return FootClass::Destruct(this);
}

/* ASM:
push    ecx
push    ebx
push    ebp
push    esi
mov     esi, ecx
xor     ebp, ebp
push    edi
mov     ecx, [esi+6DCh]
lea     ebx, [esi+4]
cmp     ecx, ebp
mov     dword ptr [esi], offset ??_7UnitClass@@6B@ ; const UnitClass::`vftable'
mov     dword ptr [ebx], offset ??_7UnitClass@@6B@_0 ; const UnitClass::`vftable'
mov     dword ptr [esi+8], offset ??_7UnitClass@@6B@_1 ; const UnitClass::`vftable'
mov     dword ptr [esi+0Ch], offset off_7F5C44
jz      short loc_7357BB
call    UnitClass__updateHarvesting
mov     [esi+6DCh], ebp

loc_7357BB:                             ; CODE XREF: UnitClass__Destructor+2E↑j
mov     al, ds:0A8E9A0h
test    al, al
jz      loc_73588E
mov     eax, [esi+6C4h]
cmp     eax, ebp
jz      loc_73588E
mov     ecx, [esi+21Ch]
push    ebp
push    ebp
push    eax
call    HouseClass__CanBuild
cmp     eax, 0FFFFFFFFh
jnz     short loc_7357F6
mov     eax, [esi+21Ch]
mov     byte ptr [eax+1FCh], 1

loc_7357F6:                             ; CODE XREF: UnitClass__Destructor+67↑j
mov     ecx, [esi+5D4h]
cmp     ecx, ebp
jz      short loc_73580F
push    ebp
push    0FFFFFFFFh
push    esi
call    TeamClass__LiberateMember_Start
mov     [esi+5D4h], ebp

loc_73580F:                             ; CODE XREF: UnitClass__Destructor+7E↑j
mov     ecx, [esi+21Ch]
push    esi
call    HouseClass__DecrementUnitCount
cmp     ds:0A8E7ACh, ebp
jnz     short loc_73584D
cmp     [esi+118h], ebp
jz      short loc_73584D
lea     edi, [esi+114h]

loc_735831:                             ; CODE XREF: UnitClass__Destructor+CB↓j
mov     ecx, edi
call    LinkedList__Pop
cmp     eax, ebp
jz      short loc_735845
mov     edx, [eax]
push    1
mov     ecx, eax
call    dword ptr [edx+20h]

loc_735845:                             ; CODE XREF: UnitClass__Destructor+BA↑j
cmp     [esi+118h], ebp
jnz     short loc_735831

loc_73584D:                             ; CODE XREF: UnitClass__Destructor+A1↑j
; UnitClass__Destructor+A9↑j
mov     ecx, esi
call    TechnoClass__CleanupDirection
test    al, al
jz      short loc_73588E
mov     eax, [esi+6CCh]
cmp     eax, 0FFFFFFFFh
jz      short loc_73588E
mov     ecx, ds:0A8022Ch
mov     edx, [esi]
push    ebp
lea     edi, [ecx+eax*4]
lea     eax, [esp+18h+var_4]
push    eax
mov     ecx, esi
call    dword ptr [edx+1B8h]
mov     ecx, [edi]
push    eax
call    HouseClass__DroppedFlag
mov     dword ptr [esi+6CCh], 0FFFFFFFFh

loc_73588E:                             ; CODE XREF: UnitClass__Destructor+42↑j
; UnitClass__Destructor+50↑j ...
mov     dl, 1
mov     ecx, esi        ; void **
call    AbstractClass__AnnounceExpiredPointer
mov     edx, ds:8B4108h
lea     ecx, [esp+14h+var_4]
push    ecx
mov     ecx, 8B4108h
mov     [esp+18h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_7358E0
mov     ecx, ds:8B4118h
cmp     eax, ecx
jge     short loc_7358E0
dec     ecx
cmp     eax, ecx
mov     ds:8B4118h, ecx
jge     short loc_7358E0

loc_7358C8:                             ; CODE XREF: UnitClass__Destructor+15E↓j
mov     ecx, ds:8B410Ch
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, ds:8B4118h
cmp     eax, ecx
jl      short loc_7358C8

loc_7358E0:                             ; CODE XREF: UnitClass__Destructor+131↑j
; UnitClass__Destructor+13B↑j ...
push    ebx
call    AbstractClass__GetVtable3
mov     ebx, dword_A8ED54+7FAF0h
mov     [esp+14h+var_4], eax
cmp     ebx, ebp
jz      loc_7359DA
mov     al, byte ptr dword_A8ED54+7FAF8h
test    al, al
jnz     short loc_73592A
mov     eax, dword_A8ED54+7FAECh
push    offset CompareFunction ; CompareFunction
push    8               ; SizeOfElements
push    ebx             ; NumOfElements
push    eax             ; Base
call    _qsort
mov     ebx, dword_A8ED54+7FAF0h
add     esp, 10h
mov     dword_A8ED54+7FAFCh, ebp
mov     byte ptr dword_A8ED54+7FAF8h, 1

loc_73592A:                             ; CODE XREF: UnitClass__Destructor+17F↑j
mov     ebp, dword_A8ED54+7FAECh
mov     edi, ebx
test    edi, edi
jle     loc_7359DA

loc_73593A:                             ; CODE XREF: UnitClass__Destructor+1E5↓j
mov     eax, edi
cdq
sub     eax, edx
sar     eax, 1
mov     edx, [ebp+eax*8+0]
lea     ecx, [ebp+eax*8+0]
cmp     [esp+14h+var_4], edx
jge     short loc_735953
mov     edi, eax
jmp     short loc_735963
; ---------------------------------------------------------------------------

loc_735953:                             ; CODE XREF: UnitClass__Destructor+1CD↑j
cmp     edx, [esp+14h+var_4]
jz      short loc_73597B
lea     ebp, [ecx+8]
or      ecx, 0FFFFFFFFh
sub     ecx, eax
add     edi, ecx

loc_735963:                             ; CODE XREF: UnitClass__Destructor+1D1↑j
test    edi, edi
jg      short loc_73593A
mov     ecx, esi
mov     byte ptr [esi+90h], 0
call    FootClass__Destruct
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
; ---------------------------------------------------------------------------

loc_73597B:                             ; CODE XREF: UnitClass__Destructor+1D7↑j
test    ecx, ecx
jz      short loc_7359DA
sub     ecx, dword_A8ED54+7FAECh
sar     ecx, 3
cmp     ecx, 0FFFFFFFFh
jz      short loc_7359DA
inc     ecx
cmp     ecx, ebx
jge     short loc_7359B1

loc_735992:                             ; CODE XREF: UnitClass__Destructor+22F↓j
mov     edx, dword_A8ED54+7FAECh
lea     eax, [edx+ecx*8]
inc     ecx
mov     edx, [eax]
mov     [eax-8], edx
mov     edx, [eax+4]
mov     [eax-4], edx
mov     ebx, dword_A8ED54+7FAF0h
cmp     ecx, ebx
jl      short loc_735992

loc_7359B1:                             ; CODE XREF: UnitClass__Destructor+210↑j
mov     edx, dword_A8ED54+7FAECh
dec     ebx
xor     ecx, ecx
xor     eax, eax
mov     dword_A8ED54+7FAF0h, ebx
mov     [edx+ebx*8], eax
mov     eax, dword_A8ED54+7FAF0h
mov     edx, dword_A8ED54+7FAECh
mov     [edx+eax*8+4], ecx
mov     dword_A8ED54+7FAFCh, ecx

loc_7359DA:                             ; CODE XREF: UnitClass__Destructor+172↑j
; UnitClass__Destructor+1B4↑j ...
mov     ecx, esi
mov     byte ptr [esi+90h], 0
call    FootClass__Destruct
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
*/
}

// ============================================================
// Phase 3: Stream & Save
// ============================================================

// IDA: 0x744470 (LoadFromStream, 391B)
// 0x744470
int UnitClass::LoadFromStream()
{
// [IDA decompile]
int __stdcall UnitClass::LoadFromStream(int a1, int pStm)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char *v4; // eax
  int v5; // eax
  int v6; // ecx
  int i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  v2 = (_DWORD *)a1;
  v3 = a1 + 4;
  a1 = (*(int (__stdcall **)(int))(*(_DWORD *)(a1 + 4) + 16))(a1 + 4);
  v4 = BuildingTypeClass::Dequeue((char **)&dword_A8ED54[130747], &a1);
  if ( v4 )
  {
    v5 = (int)&v4[-dword_A8ED54[130747]] >> 3;
    if ( v5 != -1 )
    {
      v6 = v5 + 1;
      for ( i = dword_A8ED54[130748]; v6 < dword_A8ED54[130748]; i = dword_A8ED54[130748] )
      {
        v8 = (_DWORD *)(dword_A8ED54[130747] + 8 * v6++);
        *(v8 - 2) = *v8;
        *(v8 - 1) = v8[1];
      }
      dword_A8ED54[130748] = i - 1;
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0;
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0;
      dword_A8ED54[130751] = 0;
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm);
  if ( result >= 0 )
  {
    v10 = v2[413];
    if ( v2 )
    {
      FootClass::PostLoadInit(v2, (int)&a1);
      *v2 = &UnitClass::`vftable';
      *(_DWORD *)v3 = &UnitClass::`vftable';
      v2[2] = &UnitClass::`vftable';
      v2[3] = &off_7F5C44;
    }
    v11 = v2[413];
    if ( v11 != v10 )
    {
      v2[413] = v10;
      if ( v10 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10);
      if ( v11 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11);
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 16))(v3);
    v13 = dword_A8ED54[130749];
    if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] )
      goto LABEL_18;
    if ( !dword_A8ED54[130749] )
      v13 = 10;
    if ( BuildingTypeClass::Enqueue((int)&dword_A8ED54[130747], v13) )
    {
LABEL_18:
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = v12;
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = v2;
      LOBYTE(dword_A8ED54[130750]) = 0;
      ++dword_A8ED54[130748];
    }
    ObjectPtr::RegisterForTracking((int)&dword_A8ED54[128239], v2 + 433);
    ObjectPtr::RegisterForTracking((int)&dword_A8ED54[128239], v2 + 434);
    v2[439] = 0;
    return 0;
  }
  return result;
}

/* ASM:
pStm            = dword ptr  8

push    ebx
push    esi
mov     esi, [esp+8+arg_0]
push    edi
mov     eax, [esi+4]
lea     ebx, [esi+4]
push    ebx
call    dword ptr [eax+10h]
lea     ecx, [esp+0Ch+arg_0]
push    ecx
mov     ecx, (offset dword_A8ED54+7FAECh)
mov     [esp+10h+arg_0], eax
call    BuildingTypeClass__Dequeue
test    eax, eax
jz      short loc_7444F8
sub     eax, dword_A8ED54+7FAECh
sar     eax, 3
cmp     eax, 0FFFFFFFFh
jz      short loc_7444F8
lea     ecx, [eax+1]
mov     eax, dword_A8ED54+7FAF0h
cmp     ecx, eax
jge     short loc_7444D0

loc_7444B2:                             ; CODE XREF: UnitClass__LoadFromStream+5E↓j
mov     edx, dword_A8ED54+7FAECh
lea     eax, [edx+ecx*8]
inc     ecx
mov     edx, [eax]
mov     [eax-8], edx
mov     edx, [eax+4]
mov     [eax-4], edx
mov     eax, dword_A8ED54+7FAF0h
cmp     ecx, eax
jl      short loc_7444B2

loc_7444D0:                             ; CODE XREF: UnitClass__LoadFromStream+40↑j
mov     edi, dword_A8ED54+7FAECh
dec     eax
xor     ecx, ecx
mov     dword_A8ED54+7FAF0h, eax
mov     [edi+eax*8], ecx
mov     eax, dword_A8ED54+7FAF0h
mov     ecx, dword_A8ED54+7FAECh
xor     edx, edx
mov     [ecx+eax*8+4], edx
mov     dword_A8ED54+7FAFCh, edx

loc_7444F8:                             ; CODE XREF: UnitClass__LoadFromStream+26↑j
; UnitClass__LoadFromStream+34↑j
mov     edx, [esp+0Ch+pStm]
push    edx             ; pStm
push    esi             ; int
call    ObjectClass__LoadFromStream_Common
test    eax, eax
jl      loc_7445F1
mov     edi, [esi+674h]
test    esi, esi
jz      short loc_74453B
lea     eax, [esp+0Ch+arg_0]
mov     ecx, esi
push    eax
call    FootClass__PostLoadInit
mov     dword ptr [esi], offset ??_7UnitClass@@6B@ ; const UnitClass::`vftable'
mov     dword ptr [ebx], offset ??_7UnitClass@@6B@_0 ; const UnitClass::`vftable'
mov     dword ptr [esi+8], offset ??_7UnitClass@@6B@_1 ; const UnitClass::`vftable'
mov     dword ptr [esi+0Ch], offset off_7F5C44

loc_74453B:                             ; CODE XREF: UnitClass__LoadFromStream+A3↑j
push    ebp
mov     ebp, [esi+674h]
cmp     ebp, edi
jz      short loc_744561
test    edi, edi
mov     [esi+674h], edi
jz      short loc_744556
mov     ecx, [edi]
push    edi
call    dword ptr [ecx+4]

loc_744556:                             ; CODE XREF: UnitClass__LoadFromStream+DE↑j
test    ebp, ebp
jz      short loc_744561
mov     edx, [ebp+0]
push    ebp
call    dword ptr [edx+8]

loc_744561:                             ; CODE XREF: UnitClass__LoadFromStream+D4↑j
; UnitClass__LoadFromStream+E8↑j
mov     eax, [edi]
push    edi
call    dword ptr [eax+8]
mov     ecx, [ebx]
push    ebx
call    dword ptr [ecx+10h]
mov     edx, dword_A8ED54+7FAF0h
mov     edi, eax
mov     eax, dword_A8ED54+7FAF4h
inc     edx
cmp     edx, eax
pop     ebp
jle     short loc_744598
test    eax, eax
jnz     short loc_744589
mov     eax, 0Ah

loc_744589:                             ; CODE XREF: UnitClass__LoadFromStream+112↑j
push    eax
mov     ecx, (offset dword_A8ED54+7FAECh)
call    BuildingTypeClass__Enqueue
test    al, al
jz      short loc_7445C7

loc_744598:                             ; CODE XREF: UnitClass__LoadFromStream+10E↑j
mov     eax, dword_A8ED54+7FAECh
mov     ecx, dword_A8ED54+7FAF0h
mov     [eax+ecx*8], edi
mov     edx, dword_A8ED54+7FAF0h
mov     eax, dword_A8ED54+7FAECh
mov     [eax+edx*8+4], esi
mov     eax, dword_A8ED54+7FAF0h
inc     eax
mov     byte ptr dword_A8ED54+7FAF8h, 0
mov     dword_A8ED54+7FAF0h, eax

loc_7445C7:                             ; CODE XREF: UnitClass__LoadFromStream+126↑j
lea     ecx, [esi+6C4h]
push    ecx
push    (offset dword_A8ED54+7D3BCh)
call    ObjectPtr__RegisterForTracking
lea     edx, [esi+6C8h]
push    edx
push    (offset dword_A8ED54+7D3BCh)
call    ObjectPtr__RegisterForTracking
xor     eax, eax
mov     [esi+6DCh], eax

loc_7445F1:                             ; CODE XREF: UnitClass__LoadFromStream+95↑j
pop     edi
pop     esi
pop     ebx
retn    8
*/
}

// IDA: 0x6B4EA0 (SaveLoadData, 90B)
// 0x6b4ea0
int UnitClass::SaveLoadData()
{
// [IDA decompile]
int __thiscall UnitClass::SaveLoadData(#374 *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register(this);
  if ( Register >= 0 )
  {
    if ( a2 )
    {
      ObjectClass::Init(a2, (int)&a3);
      *a2 = &SmudgeClass::`vftable';
      a2[1] = &SmudgeClass::`vftable';
      a2[2] = &SmudgeClass::`vftable';
      a2[3] = &SmudgeClass::`vftable';
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a2 + 43);
  }
  return Register;
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
mov     esi, [esp+4+arg_0]
push    edi
push    eax
push    esi
call    BuildingClass__SaveLoad_Register
mov     edi, eax
test    edi, edi
jl      short loc_6B4EF3
test    esi, esi
jz      short loc_6B4EE2
lea     ecx, [esp+8+arg_4]
push    ecx
mov     ecx, esi
call    ObjectClass__Init
mov     dword ptr [esi], offset ??_7SmudgeClass@@6B@ ; const SmudgeClass::`vftable'
mov     dword ptr [esi+4], offset ??_7SmudgeClass@@6B@_1 ; const SmudgeClass::`vftable'
mov     dword ptr [esi+8], offset ??_7SmudgeClass@@6B@_0 ; const SmudgeClass::`vftable'
mov     dword ptr [esi+0Ch], offset ??_7SmudgeClass@@6B@_2 ; const SmudgeClass::`vftable'

loc_6B4EE2:                             ; CODE XREF: UnitClass__SaveLoadData+19↑j
add     esi, 0ACh
push    esi
push    (offset dword_A8ED54+7D3BCh)
call    ObjectPtr__RegisterForTracking

loc_6B4EF3:                             ; CODE XREF: UnitClass__SaveLoadData+15↑j
mov     eax, edi
pop     edi
pop     esi
retn    8
*/
}

// IDA: 0x6B4F00 (SaveState, 23B)
// 0x6b4f00
int UnitClass::SaveState()
{
// [IDA decompile]
int __stdcall UnitClass::_vt06(int *a1, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

/* ASM:
mov     eax, [esp+arg_8]
mov     ecx, [esp+arg_4]
mov     edx, [esp+arg_0]
push    eax
push    ecx
push    edx
call    AbstractClass__SaveLoad_Prefix
retn    0Ch
*/
}

// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// IDA: 0x744640 (PowerDrainUpdate, 159B)
// 0x744640
int UnitClass::PowerDrainUpdate(int a2)
{
// [IDA decompile]
int __thiscall UnitClass_PowerDrainUpdate(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  FootClass::BeginPowerUpdate(a2);
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1732) + 44))(*(_DWORD *)(this + 1732));
  Power::TimerProcess(v3);
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 1732) + 4) + 16))(*(_DWORD *)(this + 1732) + 4);
  Power::TimerProcess(v4);
  v5 = *(_DWORD *)(this + 1736);
  if ( v5 )
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
  }
  Power::TimerProcess(*(_DWORD *)(this + 1740));
  LOBYTE(v7) = *(_BYTE *)(this + 1744);
  Power::FlagProcess(a2, v7);
  LOBYTE(v8) = *(_BYTE *)(this + 1745);
  v9 = Power::FlagProcess(a2, v8);
  LOBYTE(v9) = *(_BYTE *)(this + 1746);
  Power::FlagProcess(a2, v9);
  LOBYTE(v10) = *(_BYTE *)(this + 1671);
  return Power::FlagProcess(a2, v10);
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
push    edi
call    FootClass__BeginPowerUpdate
mov     ecx, [esi+6C4h]
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     eax, [esi+6C4h]
add     eax, 4
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     eax, [esi+6C8h]
test    eax, eax
jz      short loc_744694
mov     edx, [eax+4]
add     eax, 4
push    eax
call    dword ptr [edx+10h]
push    eax
mov     ecx, edi
call    Power__TimerProcess

loc_744694:                             ; CODE XREF: UnitClass__PowerDrainUpdate+40↑j
mov     eax, [esi+6CCh]
mov     ecx, edi
push    eax
call    Power__TimerProcess
mov     cl, [esi+6D0h]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6D1h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6D2h]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+687h]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
pop     edi
pop     esi
retn    4
*/
}

// IDA: 0x746810 (PerFrameUpdate, 167B)
// 0x746810
int UnitClass::PerFrameUpdate()
{
// [IDA decompile]
_DWORD *__usercall UnitClass_PerFrameUpdate@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  _DWORD *result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax

  result = TechnoClass::Update((int)a1, a2);
  v4 = a1[433];
  if ( v4 )
  {
    v5 = a1[135];
    if ( v5 )
    {
      v6 = 0;
      v7 = *(_DWORD *)(v5 + 52) + 360;
      v8 = *(_DWORD *)(v7 + 16);
      if ( v8 > 0 )
      {
        v9 = *(_DWORD **)(v7 + 4);
        while ( *v9 != v4 )
        {
          ++v6;
          ++v9;
          if ( v6 >= v8 )
            goto LABEL_9;
        }
        Power::ChangedHouse(a1 + 84, 1);
      }
    }
LABEL_9:
    v10 = a1[135];
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 704) )
      {
        v11 = a1[433];
        if ( !*(_BYTE *)(v11 + 3278) )
        {
          if ( *(_BYTE *)(v11 + 3214) )
            Power::ChangedHouse(a1 + 84, 1);
        }
      }
    }
    result = (_DWORD *)a1[433];
    if ( *((_BYTE *)result + 2053) )
      return (_DWORD *)UnitClass::SetTurret(0);
  }
  return result;
}

/* ASM:
push    esi
push    edi
mov     esi, ecx
call    TechnoClass__Update
mov     edi, [esi+6C4h]
test    edi, edi
jz      loc_7468B4
mov     eax, [esi+21Ch]
test    eax, eax
jz      short loc_746860
mov     eax, [eax+34h]
xor     ecx, ecx
add     eax, 168h
mov     edx, [eax+10h]
test    edx, edx
jle     short loc_746860
mov     eax, [eax+4]

loc_746845:                             ; CODE XREF: UnitClass__PerFrameUpdate+3F↓j
cmp     [eax], edi
jz      short loc_746853
inc     ecx
add     eax, 4
cmp     ecx, edx
jl      short loc_746845
jmp     short loc_746860
; ---------------------------------------------------------------------------

loc_746853:                             ; CODE XREF: UnitClass__PerFrameUpdate+37↑j
push    1
lea     ecx, [esi+150h]
call    Power__ChangedHouse

loc_746860:                             ; CODE XREF: UnitClass__PerFrameUpdate+1F↑j
; UnitClass__PerFrameUpdate+30↑j ...
mov     eax, [esi+21Ch]
test    eax, eax
jz      short loc_74689B
mov     cl, [eax+2C0h]
test    cl, cl
jz      short loc_74689B
mov     eax, [esi+6C4h]
mov     cl, [eax+0CCEh]
test    cl, cl
jnz     short loc_74689B
mov     cl, [eax+0C8Eh]
test    cl, cl
jz      short loc_74689B
push    1
lea     ecx, [esi+150h]
call    Power__ChangedHouse

loc_74689B:                             ; CODE XREF: UnitClass__PerFrameUpdate+58↑j
; UnitClass__PerFrameUpdate+62↑j ...
mov     eax, [esi+6C4h]
mov     cl, [eax+805h]
test    cl, cl
jz      short loc_7468B4
push    0
mov     ecx, esi
call    UnitClass__SetTurret

loc_7468B4:                             ; CODE XREF: UnitClass__PerFrameUpdate+11↑j
; UnitClass__PerFrameUpdate+99↑j
pop     edi
pop     esi
retn
*/
}

// IDA: 0x7446E0 (HandleTargetDestroyed, 56B)
// 0x7446e0
int UnitClass::HandleTargetDestroyed()
{
// [IDA decompile]
int __thiscall UnitClass::HandleTargetDestroyed(int *this, int *a2, int *a3)
{
  int result; // eax

  FootClass::HandleTargetDestroyed(this, a2, a3);
  result = 0;
  if ( (int *)*(this + 434) == a2 )
    *(this + 434) = 0;
  if ( (int *)*(this + 433) == a2 )
    *(this + 433) = 0;
  return result;
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
push    edi
mov     edi, [esp+8+arg_0]
push    eax
mov     esi, ecx
push    edi
call    FootClass__HandleTargetDestroyed
mov     ecx, [esi+6C8h]
xor     eax, eax
cmp     ecx, edi
jnz     short loc_744705
mov     [esi+6C8h], eax

loc_744705:                             ; CODE XREF: UnitClass__HandleTargetDestroyed+1D↑j
cmp     [esi+6C4h], edi
jnz     short loc_744713
mov     [esi+6C4h], eax

loc_744713:                             ; CODE XREF: UnitClass__HandleTargetDestroyed+2B↑j
pop     edi
pop     esi
retn    8
*/
}

// IDA: 0x6B4F20 (CheckStatus, 7B) — returns Type pointer (vtable entry)
// 0x6b4f20
int UnitClass::CheckStatus()
{
    return (int)(Type);
}

// IDA: 0x6B7C60 (ClearTargetRef, 206B)
// 0x6b7c60
int UnitClass::ClearTargetRef()
{
// [IDA decompile]
void __thiscall sub_6B7C60(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  _DWORD **v6; // ecx
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // [esp+10h] [ebp-8h]

  if ( a2 == *(this + 26) )
  {
    v3 = *(this + 27);
    *(this + 26) = 0;
    if ( !v3 )
      UnitClass::ProcessIdleOrders(this);
  }
  else if ( a2 == *(this + 27) )
  {
    *(this + 27) = 0;
  }
  else
  {
    v4 = *(this + 18) - 1;
    if ( v4 < 0 )
    {
LABEL_10:
      if ( a2 == *(this + 9) )
      {
        TaskManager::Update(this);
        UnitClass::ProcessIdleOrders(this);
      }
    }
    else
    {
      v5 = *(this + 15);
      v6 = (_DWORD **)(v5 + 4 * v4);
      while ( a2 != **v6 )
      {
        --v4;
        --v6;
        if ( v4 < 0 )
          goto LABEL_10;
      }
      v7 = *(_DWORD **)(v5 + 4 * v4);
      if ( *(int *)(*v7 + 108) <= 0 || *(_BYTE *)(*v7 + 1738) || v7[5] == 1 )
      {
        *v7 = 0;
        *(_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v4) + 4) = 7;
        v8 = *(this + 12);
        v9 = (_DWORD *)(*(_DWORD *)(*(this + 15) + 4 * v4) + 8);
        *v9 = MEMORY[0xA8ED84];
        v9[1] = v10;
        v9[2] = v8;
      }
    }
  }
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+18h+arg_0]
cmp     edi, [esi+68h]
jnz     short loc_6B7C8D
mov     eax, [esi+6Ch]
mov     dword ptr [esi+68h], 0
test    eax, eax
jnz     short loc_6B7CCF
call    UnitClass__ProcessIdleOrders
pop     edi
pop     esi
pop     ebx
add     esp, 0Ch
retn    4
; ---------------------------------------------------------------------------

loc_6B7C8D:                             ; CODE XREF: UnitClass__ClearTargetRef+F↑j
cmp     edi, [esi+6Ch]
jnz     short loc_6B7CA2
mov     dword ptr [esi+6Ch], 0
pop     edi
pop     esi
pop     ebx
add     esp, 0Ch
retn    4
; ---------------------------------------------------------------------------

loc_6B7CA2:                             ; CODE XREF: UnitClass__ClearTargetRef+30↑j
mov     eax, [esi+48h]
dec     eax
js      short loc_6B7CBC
mov     edx, [esi+3Ch]
lea     ecx, [edx+eax*4]

loc_6B7CAE:                             ; CODE XREF: UnitClass__ClearTargetRef+5A↓j
mov     ebx, [ecx]
cmp     edi, [ebx]
jz      short loc_6B7CD8
dec     eax
sub     ecx, 4
test    eax, eax
jge     short loc_6B7CAE

loc_6B7CBC:                             ; CODE XREF: UnitClass__ClearTargetRef+46↑j
cmp     edi, [esi+24h]
jnz     short loc_6B7CCF
mov     ecx, esi
call    TaskManager__Update
mov     ecx, esi
call    UnitClass__ProcessIdleOrders

loc_6B7CCF:                             ; CODE XREF: UnitClass__ClearTargetRef+1D↑j
; UnitClass__ClearTargetRef+5F↑j ...
pop     edi
pop     esi
pop     ebx
add     esp, 0Ch
retn    4
; ---------------------------------------------------------------------------

loc_6B7CD8:                             ; CODE XREF: UnitClass__ClearTargetRef+52↑j
mov     ecx, [edx+eax*4]
mov     edx, [ecx]
mov     edi, [edx+6Ch]
test    edi, edi
jle     short loc_6B7CF4
mov     bl, [edx+6CAh]
test    bl, bl
jnz     short loc_6B7CF4
cmp     dword ptr [ecx+14h], 1
jnz     short loc_6B7CCF

loc_6B7CF4:                             ; CODE XREF: UnitClass__ClearTargetRef+82↑j
; UnitClass__ClearTargetRef+8C↑j
mov     dword ptr [ecx], 0
mov     ecx, [esi+3Ch]
pop     edi
mov     edx, [ecx+eax*4]
mov     dword ptr [edx+4], 7
mov     edx, [esi+30h]
mov     esi, [esi+3Ch]
mov     ecx, dword_A8ED54+30h
mov     eax, [esi+eax*4]
pop     esi
add     eax, 8
pop     ebx
mov     [eax], ecx
mov     ecx, [esp+0Ch+var_8]
mov     [eax+4], ecx
mov     [eax+8], edx
add     esp, 0Ch
retn    4
*/
}

// IDA: 0x6B7BB0 (ProcessIdleOrders, 133B)
// 0x6b7bb0
int UnitClass::ProcessIdleOrders()
{
// [IDA decompile]
void __thiscall UnitClass_ProcessIdleOrders(_DWORD *this)
{
  int i; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < *(this + 18); ++i )
  {
    v3 = *(int **)(*(this + 15) + 4 * i);
    if ( v3[1] == 2 )
    {
      v4 = *v3;
      if ( *(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3432) )
      {
        UnitClass::GetExitCell(v4, *(this + 26));
        MEMORY[0xABC5F8] = (int)MEMORY[0xA8ED84];
        MEMORY[0xABC5FC] = v5;
        MEMORY[0xABC600] = 2;
        UnitClass::ClearTargetRef(**(_DWORD **)(*(this + 15) + 4 * i));
      }
    }
  }
  *(this + 28) = 0;
  *(this + 27) = 0;
  *(this + 26) = 0;
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
xor     edi, edi
cmp     [esi+48h], edi
jle     short loc_6B7C26
push    ebp
mov     ebp, [esp+18h+var_8]

loc_6B7BC3:                             ; CODE XREF: UnitClass__ProcessIdleOrders+71↓j
mov     eax, [esi+3Ch]
mov     eax, [eax+edi*4]
cmp     dword ptr [eax+4], 2
jnz     short loc_6B7C1B
mov     eax, [eax]
mov     ecx, [eax+6C4h]
mov     dl, [ecx+0D68h]
test    dl, dl
jz      short loc_6B7C1B
mov     edx, [esi+68h]
mov     ecx, (offset dword_A8ED54+2D8A4h)
push    edx
push    eax
call    UnitClass__GetExitCell
mov     eax, dword_A8ED54+30h
mov     ecx, 2
mov     dword_A8ED54+2D8A4h, eax
mov     dword_A8ED54+2D8A8h, ebp
mov     dword_A8ED54+2D8ACh, ecx
mov     eax, [esi+3Ch]
mov     ecx, [eax+edi*4]
mov     edx, [ecx]
mov     ecx, esi
push    edx
call    UnitClass__ClearTargetRef

loc_6B7C1B:                             ; CODE XREF: UnitClass__ProcessIdleOrders+1D↑j
; UnitClass__ProcessIdleOrders+2F↑j
mov     eax, [esi+48h]
inc     edi
cmp     edi, eax
jl      short loc_6B7BC3
xor     edi, edi
pop     ebp

loc_6B7C26:                             ; CODE XREF: UnitClass__ProcessIdleOrders+C↑j
mov     [esi+70h], edi
mov     [esi+6Ch], edi
mov     [esi+68h], edi
pop     edi
pop     esi
add     esp, 0Ch
retn
*/
}

// IDA: 0x6B4F30 (StubReturn176, 6B)
// 0x6b4f30
int UnitClass::StubReturn176()
{
// [IDA decompile]
int UnitClass::_vt12()
{
  return 176;
}

/* ASM:
mov     eax, 0B0h
retn
*/
}

// IDA: 0x6B4F40 (StubReturn29, 6B)
// 0x6b4f40
int UnitClass::StubReturn29()
{
// [IDA decompile]
int UnitClass::_vt11()
{
  return 29;
}

/* ASM:
mov     eax, 1Dh
retn
*/
}

// ============================================================
// Phase 3: Approach Evaluate
// ============================================================

// IDA: 0x4D4280 (ApproachEvaluate, 2177B)
// 0x4d4280
int UnitClass::ApproachEvaluate()
{
// [IDA decompile]
int __thiscall UnitClass_ApproachEvaluate(_DWORD *this)
{
  int v2; // eax
  int v3; // ebp
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char *MissionControl; // eax
  int v20; // esi
  int v21; // eax
  #375 **v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  int v28; // edi
  _DWORD *v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int16 *v38; // ebp
  char v39; // al
  int v40; // ecx
  _DWORD *v41; // eax
  void *v42; // edi
  int v43; // eax
  int v44; // ebx
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v48; // edx
  int v49; // edi
  int v50; // eax
  int v51; // ebx
  int v52; // edi
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // ebx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // eax
  int TileIndex; // [esp-4h] [ebp-D0h]
  int v61; // [esp+0h] [ebp-CCh]
  int v62; // [esp+24h] [ebp-A8h]
  int v63; // [esp+34h] [ebp-98h]
  int v64; // [esp+38h] [ebp-94h]
  int v65; // [esp+38h] [ebp-94h]
  int v66; // [esp+38h] [ebp-94h]
  int v67; // [esp+3Ch] [ebp-90h] BYREF
  int v68; // [esp+40h] [ebp-8Ch]
  int v69; // [esp+44h] [ebp-88h] BYREF
  int v70; // [esp+48h] [ebp-84h] BYREF
  int v71; // [esp+4Ch] [ebp-80h] BYREF
  __int16 v72; // [esp+50h] [ebp-7Ch] BYREF
  int v73; // [esp+54h] [ebp-78h] BYREF
  int v74; // [esp+58h] [ebp-74h] BYREF
  _DWORD v75[3]; // [esp+5Ch] [ebp-70h] BYREF
  int v76; // [esp+68h] [ebp-64h] BYREF
  _BYTE v77[12]; // [esp+6Ch] [ebp-60h] BYREF
  _BYTE v78[4]; // [esp+78h] [ebp-54h] BYREF
  _BYTE v79[20]; // [esp+7Ch] [ebp-50h] BYREF
  _BYTE v80[12]; // [esp+90h] [ebp-3Ch] BYREF
  _BYTE v81[12]; // [esp+9Ch] [ebp-30h] BYREF
  _BYTE v82[12]; // [esp+A8h] [ebp-24h] BYREF
  _BYTE v83[12]; // [esp+B4h] [ebp-18h] BYREF
  _BYTE v84[12]; // [esp+C0h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 796))(this, 2);
  *((_BYTE *)this + 1072) = 1;
  v3 = v2 / 256 + 6;
  switch ( *(this + 47) )
  {
    case 0:
      v75[0] = *(this + 39);
      v5 = *this;
      v75[1] = *(this + 40);
      v75[2] = *(this + 41);
      v6 = (*(int (__thiscall **)(_DWORD *, int, _DWORD *, _DWORD))(v5 + 964))(this, 2, v75, 0);
      v68 = v6;
      if ( v6 )
        v7 = (*(_BYTE *)(v6 + 20) & 2) != 0 ? v6 : 0;
      else
        v7 = 0;
      v8 = (*(int (__thiscall **)(_DWORD *, int))(*this + 740))(this, v7);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 936))(this, v7, v8) )
          goto LABEL_10;
        v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7);
        LOWORD(v63) = *v9 / 256;
        HIWORD(v63) = v9[1] / 256;
        v10 = *this;
        v70 = v63;
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(v10 + 76))(this, v79, 0);
        LOWORD(v63) = *v11 / 256;
        HIWORD(v63) = v11[1] / 256;
        v71 = v63;
        v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 188))(v7, 0, -1);
        v13 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 188))(this, 0, v12);
        if ( Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], (__int16 *)&v73, &v72, (int)this, v13, (int)v81, 0) < v3 )
        {
LABEL_10:
          v14 = (*(int (__thiscall **)(_DWORD *))(*this + 452))(this);
          *(this + 375) = v14;
          if ( (*(_DWORD *)(v14 + 320) & 0x100) != 0
            && !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) )
          {
            v15 = *this;
            v69 = 0;
            v61 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v15 + 132))(this) + 1460);
            v16 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this);
            TileIndex = MapClass::GetTileIndex(
                          MEMORY[0x87F7E8],
                          (__int16 *)(*(this + 375) + 36),
                          *(_DWORD *)(v16 + 1460),
                          0);
            v17 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this);
            v67 = *LayerClass::Pathfinding_Find(
                     MEMORY[0x87F7E8],
                     (int)&v76,
                     &v76,
                     (__int16 *)(*(this + 375) + 36),
                     *(_DWORD *)(v17 + 1660),
                     TileIndex,
                     v61,
                     0,
                     1,
                     1,
                     0,
                     1,
                     0,
                     0,
                     (__int16 *)&v69,
                     0,
                     0);
            if ( v67 == MEMORY[0x87F7E8][53608] )
            {
              *(this + 375) = 0;
              return 60;
            }
            *(this + 375) = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v67);
          }
          if ( !*(this + 134) )
          {
            v18 = *(this + 358);
            if ( v18 <= 0 )
            {
              if ( *(this + 361) )
                TechnoClass::SetFocus(this, *(this + 361));
              else
                TechnoClass::SetFocus(this, *(this + 375));
            }
            else
            {
              TechnoClass::SetFocus(this, *(_DWORD *)(*(this + 355) + 4 * v18 - 4));
            }
          }
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1);
          (*(void (__thiscall **)(_DWORD *, int))(*this + 968))(this, v68);
          goto LABEL_22;
        }
      }
      if ( !*(this + 361) )
        goto LABEL_28;
      if ( !*(this + 413) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
      {
LABEL_28:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1);
        goto LABEL_70;
      }
LABEL_23:
      MissionControl = MissionClass::GetMissionControl(this);
      v20 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
      return v20 + Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
    case 1:
      v21 = *(this + 173);
      if ( v21 )
        v22 = (*(_BYTE *)(v21 + 20) & 2) != 0 ? (#375 **)v21 : 0;
      else
        v22 = 0;
      v23 = (*(int (__thiscall **)(_DWORD *, #375 **))(*this + 740))(this, v22);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 816))(this) )
        goto LABEL_41;
      if ( !v22 )
        goto LABEL_38;
      if ( (*((int (__thiscall **)(#375 **))*v22 + 11))(v22) == 6
        && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)*(this + 135), v22[135])
        && BuildingClass::GetHealthRatio((int *)v22) > *(double *)(MEMORY[0x87F7E8][7806] + 5896) )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, 0);
      }
      else
      {
LABEL_41:
        if ( v22 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, #375 **, int))(*this + 936))(this, v22, v23) )
            goto LABEL_44;
          v29 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*v22 + 19))(v22, v83);
          v30 = *(this + 375);
          LOWORD(v64) = *v29 / 256;
          HIWORD(v64) = v29[1] / 256;
          v69 = v64;
          v62 = (*((int (__thiscall **)(#375 **, _DWORD, int))*v22 + 47))(v22, 0, -1);
          v31 = *(_DWORD *)(v30 + 320) >> 8;
          LOBYTE(v31) = v31 & 1;
          if ( Pathfinding::CalcDistance(
                 (int)MEMORY[0x87E8B8],
                 (__int16 *)(v30 + 36),
                 (__int16 *)&v70,
                 (int)this,
                 v31,
                 v62,
                 0) < v3 )
          {
LABEL_44:
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1340))(this, 0);
            if ( *(this + 173) )
              goto LABEL_23;
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 134), 1);
            TechnoClass::SetFocus(this, 0);
            *(this + 375) = 0;
            *(this + 47) = 0;
            return 45;
          }
        }
      }
LABEL_38:
      if ( !*(this + 173) )
      {
        v24 = *this;
        v25 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD))(*(_DWORD *)*(this + 375) + 72))(*(this + 375), v77, 0);
        v26 = (*(int (__thiscall **)(_DWORD *, int, int))(v24 + 964))(this, 2, v25);
        v27 = v26;
        v68 = v26;
        v28 = v26 ? ((*(_BYTE *)(v26 + 20) & 2) != 0 ? v26 : 0) : 0;
        v32 = (*(int (__thiscall **)(_DWORD *, int))(*this + 740))(this, v28);
        if ( v28 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 936))(this, v28, v32) )
          {
LABEL_51:
            (*(void (__thiscall **)(_DWORD *, int))(*this + 968))(this, v27);
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1);
            return 1;
          }
          v33 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v28 + 76))(v28, v78);
          v34 = *(this + 375);
          LOWORD(v65) = *v33 / 256;
          HIWORD(v65) = v33[1] / 256;
          v70 = v65;
          v35 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v28 + 188))(v28, 0, -1);
          v36 = *(_DWORD *)(v34 + 320) >> 8;
          LOBYTE(v36) = v36 & 1;
          if ( Pathfinding::CalcDistance(
                 (int)MEMORY[0x87E8B8],
                 (__int16 *)(v34 + 36),
                 (__int16 *)&v71,
                 (int)this,
                 v36,
                 v35,
                 0) < v3 )
          {
            v27 = v68;
            goto LABEL_51;
          }
        }
      }
      v37 = *this;
      *(this + 47) = 2;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v37 + 968))(this, 0);
      if ( *(this + 134) )
      {
        v38 = (__int16 *)(*(int (__thiscall **)(_DWORD *))(*this + 452))(this);
        v39 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
        v40 = *(this + 134);
        LOBYTE(v68) = v39;
        v41 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v40 + 72))(v40, v80);
        v42 = Coord::To_Cell(MEMORY[0x87F7E8], v41);
        v43 = *(this + 375);
        v44 = v68;
        v45 = *(_DWORD *)(v43 + 320) >> 8;
        LOBYTE(v45) = v45 & 1;
        v38 += 18;
        v46 = Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v38, (__int16 *)(v43 + 36), (int)this, v68, v45, -1);
        v47 = *((_DWORD *)v42 + 80) >> 8;
        LOBYTE(v47) = v47 & 1;
        v68 = v46;
        if ( v46 >= Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v38, (__int16 *)v42 + 18, (int)this, v44, v47, -1) )
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 134), 1);
        else
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 375), 1);
        return 1;
      }
      else
      {
        v48 = *this;
        *(this + 47) = 0;
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(v48 + 1156))(this, 0, 1);
        *(this + 47) = 3;
        return 1;
      }
    case 2:
      v49 = *this;
      v50 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD))(*(_DWORD *)*(this + 375) + 72))(*(this + 375), v82, 0);
      v51 = (*(int (__thiscall **)(_DWORD *, int, int))(v49 + 964))(this, 2, v50);
      v68 = v51;
      if ( v51 )
        v52 = (*(_BYTE *)(v51 + 20) & 2) != 0 ? v51 : 0;
      else
        v52 = 0;
      v53 = (*(int (__thiscall **)(_DWORD *, int))(*this + 740))(this, v52);
      if ( !v52 )
        goto LABEL_66;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 936))(this, v52, v53) )
        goto LABEL_65;
      v54 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v52 + 76))(v52, v84);
      v55 = *(this + 375);
      LOWORD(v66) = *v54 / 256;
      HIWORD(v66) = v54[1] / 256;
      v73 = v66;
      v56 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v52 + 188))(v52, 0, -1);
      v57 = *(_DWORD *)(v55 + 320) >> 8;
      LOBYTE(v57) = v57 & 1;
      if ( Pathfinding::CalcDistance(
             (int)MEMORY[0x87E8B8],
             (__int16 *)(v55 + 36),
             (__int16 *)&v74,
             (int)this,
             v57,
             v56,
             0) < v3 )
      {
        v51 = v68;
LABEL_65:
        (*(void (__thiscall **)(_DWORD *, int))(*this + 968))(this, v51);
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1);
LABEL_22:
        *(this + 47) = 1;
        goto LABEL_23;
      }
LABEL_66:
      if ( *(this + 361) )
        goto LABEL_23;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, 0);
      v58 = *(this + 134);
      if ( v58 )
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 1152))(this, v58, 1);
        TechnoClass::SetFocus(this, 0);
        *(this + 47) = 0;
        *(this + 375) = 0;
        goto LABEL_23;
      }
      v59 = *this;
      *(this + 47) = 0;
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(v59 + 1156))(this, 0, 1);
LABEL_70:
      *(this + 47) = 3;
      return 1;
    case 3:
      if ( !*(this + 361) )
        goto LABEL_23;
      *(this + 47) = 0;
      return 1;
    default:
      goto LABEL_23;
  }
}

/* ASM:
sub     esp, 90h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
push    2
mov     eax, [esi]
call    dword ptr [eax+31Ch]
cdq
and     edx, 0FFh
mov     byte ptr [esi+430h], 1
add     eax, edx
mov     ebp, eax
mov     eax, [esi+0BCh]
sar     ebp, 8
add     ebp, 6
cmp     eax, 3          ; switch 4 cases
ja      def_4D42BD      ; jumptable 004D42BD default case
jmp     ds:jpt_4D42BD[eax*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4D42C4:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
mov     eax, [esi+5A4h] ; jumptable 004D42BD case 3
test    eax, eax
jz      def_4D42BD      ; jumptable 004D42BD default case
mov     dword ptr [esi+0BCh], 0
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D42EC:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
lea     ecx, [esi+9Ch]  ; jumptable 004D42BD case 0
xor     ebx, ebx
push    ebx
mov     edx, [ecx]
mov     [esp+0A4h+var_70], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+0A4h+var_6C], eax
lea     eax, [esp+0A4h+var_70]
mov     ecx, [ecx+8]
push    eax
mov     [esp+0A8h+var_68], ecx
push    2
mov     ecx, esi
call    dword ptr [edx+3C4h]
cmp     eax, ebx
mov     [esp+0A0h+var_8C], eax
jnz     short loc_4D4326
xor     edi, edi
jmp     short loc_4D4334
; ---------------------------------------------------------------------------

loc_4D4326:                             ; CODE XREF: UnitClass__ApproachEvaluate+A0↑j
mov     cl, [eax+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, eax
mov     edi, ecx

loc_4D4334:                             ; CODE XREF: UnitClass__ApproachEvaluate+A4↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
cmp     edi, ebx
jz      loc_4D45A2
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     loc_4D440E
mov     eax, [edi]
lea     ecx, [esp+0A0h+var_30]
push    ebx
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
push    ebx
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_98], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+0ACh+var_50]
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+0B0h+var_98+2], ax
mov     edx, [esp+0B0h+var_98]
mov     eax, [esi]
mov     ecx, esi
mov     [esp+0B0h+var_84], edx
call    dword ptr [eax+4Ch]
mov     ecx, eax
push    0FFFFFFFFh
push    ebx
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0B0h+var_98], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, edi
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0B0h+var_98+2], ax
mov     edx, [esp+0B0h+var_98]
mov     [esp+0B0h+var_80], edx
mov     eax, [edi]
call    dword ptr [eax+0BCh]
mov     edx, [esi]
push    eax
push    ebx
mov     ecx, esi
call    dword ptr [edx+0BCh]
push    eax
lea     eax, [esp+0ACh+var_7C]
push    esi
lea     ecx, [esp+0B0h+var_78]
push    eax
push    ecx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     loc_4D45A2

loc_4D440E:                             ; CODE XREF: UnitClass__ApproachEvaluate+D5↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C4h]
mov     [esi+5DCh], eax
mov     ecx, [eax+140h]
test    ch, 1
jz      loc_4D44F3
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+0BCh]
test    al, al
jnz     loc_4D44F3
push    ebx
lea     edx, [esp+0A4h+var_88]
push    ebx
push    edx
mov     eax, 1
push    ebx
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
mov     eax, [esi]
push    ebx
mov     ecx, esi
mov     word ptr [esp+0C8h+var_88], bx
mov     word ptr [esp+0C8h+var_88+2], bx
call    dword ptr [eax+84h]
mov     ecx, [eax+5B4h]
mov     edx, [esi]
push    ecx
push    ebx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [esi+5DCh]
mov     eax, [eax+5B4h]
add     ecx, 24h ; '$'
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [esi+5DCh]
mov     eax, [eax+67Ch]
add     ecx, 24h ; '$'
push    eax
lea     edx, [esp+0D4h+var_64]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, ds:8B3D88h
mov     [esp+0A0h+var_90], eax
jnz     short loc_4D44DE
mov     ax, word ptr [esp+0A0h+var_90+2]
cmp     ax, ds:8B3D8Ah
jz      short loc_4D4512

loc_4D44DE:                             ; CODE XREF: UnitClass__ApproachEvaluate+24E↑j
lea     ecx, [esp+0A0h+var_90]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     [esi+5DCh], eax

loc_4D44F3:                             ; CODE XREF: UnitClass__ApproachEvaluate+1A7↑j
; UnitClass__ApproachEvaluate+1BA↑j
cmp     [esi+218h], ebx
jnz     short loc_4D4543
mov     eax, [esi+598h]
cmp     eax, ebx
jle     short loc_4D4528
mov     edx, [esi+58Ch]
mov     eax, [edx+eax*4-4]
push    eax
jmp     short loc_4D453C
; ---------------------------------------------------------------------------

loc_4D4512:                             ; CODE XREF: UnitClass__ApproachEvaluate+25C↑j
mov     [esi+5DCh], ebx
pop     edi
pop     esi
pop     ebp
mov     eax, 3Ch ; '<'
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4528:                             ; CODE XREF: UnitClass__ApproachEvaluate+283↑j
mov     eax, [esi+5A4h]
cmp     eax, ebx
jz      short loc_4D4535
push    eax
jmp     short loc_4D453C
; ---------------------------------------------------------------------------

loc_4D4535:                             ; CODE XREF: UnitClass__ApproachEvaluate+2B0↑j
mov     ecx, [esi+5DCh]
push    ecx

loc_4D453C:                             ; CODE XREF: UnitClass__ApproachEvaluate+290↑j
; UnitClass__ApproachEvaluate+2B3↑j
mov     ecx, esi
call    TechnoClass__SetFocus

loc_4D4543:                             ; CODE XREF: UnitClass__ApproachEvaluate+279↑j
mov     edx, [esi]
push    1
push    ebx
mov     ecx, esi
call    dword ptr [edx+480h]
mov     ecx, [esp+0A0h+var_8C]

loc_4D4554:                             ; DATA XREF: .rdata:off_7E1BC6↓o
; .data:off_83646C↓o
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+3C8h]

loc_4D455F:                             ; CODE XREF: UnitClass__ApproachEvaluate+804↓j
mov     dword ptr [esi+0BCh], 1

def_4D42BD:                             ; CODE XREF: UnitClass__ApproachEvaluate+37↑j
; UnitClass__ApproachEvaluate+4C↑j ...
mov     ecx, esi        ; jumptable 004D42BD default case
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    2
push    0
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D45A2:                             ; CODE XREF: UnitClass__ApproachEvaluate+C1↑j
; UnitClass__ApproachEvaluate+188↑j
cmp     [esi+5A4h], ebx
jz      short loc_4D45CE
cmp     [esi+674h], ebx
jnz     short loc_4D45BC
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4D45BC:                             ; CODE XREF: UnitClass__ApproachEvaluate+330↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short def_4D42BD ; jumptable 004D42BD default case
xor     ebx, ebx

loc_4D45CE:                             ; CODE XREF: UnitClass__ApproachEvaluate+328↑j
mov     eax, [esi]
push    1
push    ebx
jmp     loc_4D4ADF
; ---------------------------------------------------------------------------

loc_4D45D8:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
mov     eax, [esi+2B4h] ; jumptable 004D42BD case 1
test    eax, eax
jnz     short loc_4D45E6
xor     edi, edi
jmp     short loc_4D45F4
; ---------------------------------------------------------------------------

loc_4D45E6:                             ; CODE XREF: UnitClass__ApproachEvaluate+360↑j
mov     cl, [eax+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, eax
mov     edi, ecx

loc_4D45F4:                             ; CODE XREF: UnitClass__ApproachEvaluate+364↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
mov     ebx, eax
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+330h]
test    al, al
jz      loc_4D46A1
test    edi, edi
jz      short loc_4D465F
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_4D46A1
mov     eax, [edi+21Ch]
mov     ecx, [esi+21Ch] ; this
push    eax             ; other
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_4D46A1
mov     ecx, edi
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+1708h]
fnstsw  ax
test    ah, 41h
jnz     short loc_4D46A1
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3C8h]

loc_4D465F:                             ; CODE XREF: UnitClass__ApproachEvaluate+395↑j
; UnitClass__ApproachEvaluate+423↓j ...
mov     eax, [esi+2B4h]
test    eax, eax
jnz     loc_4D485E
mov     ecx, [esi+5DCh]
mov     edi, [esi]
lea     eax, [esp+0A0h+var_60]
push    0
mov     edx, [ecx]
push    eax
call    dword ptr [edx+48h]
push    eax
push    2
mov     ecx, esi
call    dword ptr [edi+3C4h]
mov     ebx, eax
test    ebx, ebx
mov     [esp+0A0h+var_8C], ebx
jnz     loc_4D4787
xor     edi, edi
jmp     loc_4D4795
; ---------------------------------------------------------------------------

loc_4D46A1:                             ; CODE XREF: UnitClass__ApproachEvaluate+38D↑j
; UnitClass__ApproachEvaluate+3A1↑j ...
test    edi, edi
jz      short loc_4D465F
mov     eax, [esi]
push    ebx
push    edi
mov     ecx, esi
call    dword ptr [eax+3A8h]
test    al, al
jnz     short loc_4D4734
mov     edx, [edi]
lea     eax, [esp+0A0h+var_18]
push    0
push    eax
mov     ecx, edi
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     ebx, [esi+5DCh]
push    0FFFFFFFFh
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94+2], ax
mov     ecx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_88], ecx
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+0BCh]
push    eax
mov     eax, [ebx+140h]
shr     eax, 8
and     al, 1
lea     ecx, [esp+0A8h+var_84]
push    eax
push    esi
add     ebx, 24h ; '$'
push    ecx
push    ebx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     loc_4D465F

loc_4D4734:                             ; CODE XREF: UnitClass__ApproachEvaluate+433↑j
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+53Ch]
mov     eax, [esi+2B4h]
test    eax, eax
jnz     def_4D42BD      ; jumptable 004D42BD default case
mov     ecx, [esi+218h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
xor     edi, edi
mov     ecx, esi
push    edi
call    TechnoClass__SetFocus
mov     [esi+5DCh], edi
mov     [esi+0BCh], edi
pop     edi
pop     esi
pop     ebp
mov     eax, 2Dh ; '-'
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4787:                             ; CODE XREF: UnitClass__ApproachEvaluate+414↑j
mov     cl, [ebx+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, ebx
mov     edi, ecx

loc_4D4795:                             ; CODE XREF: UnitClass__ApproachEvaluate+41C↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
test    edi, edi
jz      loc_4D485E
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     short loc_4D4835
mov     eax, [edi]
lea     ecx, [esp+0A0h+var_54]
push    0
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     ebx, [esi+5DCh]
push    0FFFFFFFFh
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, edi
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94+2], ax
mov     edx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_84], edx
mov     eax, [edi]
call    dword ptr [eax+0BCh]
mov     ecx, [ebx+140h]
push    eax
shr     ecx, 8
and     cl, 1
lea     edx, [esp+0A8h+var_80]
push    ecx
push    esi
add     ebx, 24h ; '$'
push    edx
push    ebx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     short loc_4D485E
mov     ebx, [esp+0A0h+var_8C]

loc_4D4835:                             ; CODE XREF: UnitClass__ApproachEvaluate+536↑j
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D485E:                             ; CODE XREF: UnitClass__ApproachEvaluate+3E7↑j
; UnitClass__ApproachEvaluate+522↑j ...
mov     eax, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 2
call    dword ptr [eax+3C8h]
mov     eax, [esi+218h]
test    eax, eax
jz      loc_4D4958
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C4h]
mov     ebp, eax
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+0BCh]
mov     ecx, [esi+218h]
mov     byte ptr [esp+0A0h+var_8C], al
lea     eax, [esp+0A0h+var_3C]
mov     edx, [ecx]
push    eax
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     edi, eax
mov     eax, [esi+5DCh]
mov     ebx, [esp+0A0h+var_8C]
push    0FFFFFFFFh
mov     ecx, [eax+140h]
add     eax, 24h ; '$'
shr     ecx, 8
and     cl, 1
add     ebp, 24h ; '$'
push    ecx
push    ebx
push    esi
push    eax
push    ebp
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
mov     edx, [edi+140h]
push    0FFFFFFFFh
shr     edx, 8
and     dl, 1
add     edi, 24h ; '$'
push    edx
push    ebx
push    esi
push    edi
push    ebp
mov     ecx, 87E8B8h
mov     [esp+0B8h+var_8C], eax
call    Pathfinding__CalcDistance
cmp     [esp+0A0h+var_8C], eax
jge     short loc_4D4935
mov     ecx, [esi+5DCh]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4935:                             ; CODE XREF: UnitClass__ApproachEvaluate+690↑j
mov     eax, [esi+218h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4958:                             ; CODE XREF: UnitClass__ApproachEvaluate+5FC↑j
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 0
call    dword ptr [edx+484h]
mov     dword ptr [esi+0BCh], 3
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D498A:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
mov     ecx, [esi+5DCh] ; jumptable 004D42BD case 2
mov     edi, [esi]
lea     edx, [esp+0A0h+var_24]
push    0
mov     eax, [ecx]
push    edx
call    dword ptr [eax+48h]
push    eax
push    2
mov     ecx, esi
call    dword ptr [edi+3C4h]
mov     ebx, eax
test    ebx, ebx
mov     [esp+0A0h+var_8C], ebx
jnz     short loc_4D49B7
xor     edi, edi
jmp     short loc_4D49C4
; ---------------------------------------------------------------------------

loc_4D49B7:                             ; CODE XREF: UnitClass__ApproachEvaluate+731↑j
mov     al, [ebx+14h]
and     al, 2
neg     al
sbb     eax, eax
and     eax, ebx
mov     edi, eax

loc_4D49C4:                             ; CODE XREF: UnitClass__ApproachEvaluate+735↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
test    edi, edi
jz      loc_4D4A89
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     loc_4D4A6B
mov     eax, [edi]
lea     ecx, [esp+0A0h+var_C]
push    0
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     ebx, [esi+5DCh]
push    0FFFFFFFFh
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, edi
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94+2], ax
mov     edx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_78], edx
mov     eax, [edi]
call    dword ptr [eax+0BCh]
mov     ecx, [ebx+140h]
push    eax
shr     ecx, 8
and     cl, 1
lea     edx, [esp+0A8h+var_74]
push    ecx
push    esi
add     ebx, 24h ; '$'
push    edx
push    ebx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     short loc_4D4A89
mov     ebx, [esp+0A0h+var_8C]

loc_4D4A6B:                             ; CODE XREF: UnitClass__ApproachEvaluate+765↑j
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
jmp     loc_4D455F
; ---------------------------------------------------------------------------

loc_4D4A89:                             ; CODE XREF: UnitClass__ApproachEvaluate+751↑j
; UnitClass__ApproachEvaluate+7E5↑j
mov     eax, [esi+5A4h]
test    eax, eax
jnz     def_4D42BD      ; jumptable 004D42BD default case
mov     eax, [esi]
xor     edi, edi
push    edi
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     eax, [esi+218h]
cmp     eax, edi
jz      short loc_4D4AD4
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
push    edi
mov     ecx, esi
call    TechnoClass__SetFocus
mov     [esi+0BCh], edi
mov     [esi+5DCh], edi
jmp     def_4D42BD      ; jumptable 004D42BD default case
; ---------------------------------------------------------------------------

loc_4D4AD4:                             ; CODE XREF: UnitClass__ApproachEvaluate+82C↑j
mov     eax, [esi]
push    1
mov     [esi+0BCh], edi
push    edi

loc_4D4ADF:                             ; CODE XREF: UnitClass__ApproachEvaluate+353↑j
mov     ecx, esi
call    dword ptr [eax+484h]
mov     dword ptr [esi+0BCh], 3
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
*/
}

// ============================================================
// Phase 3: Drawing
// ============================================================

void UnitClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    if (!screen_pos || !Type)
        return;

    (void)bounds;
}

void UnitClass::DrawVoxel(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

void UnitClass::DrawPlacementPreview(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "structure/unit.hpp"

namespace gamemd {

// --- UnitClass ---

// 0x6b4f50
HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID) {
// [IDA decompile]
int __stdcall UnitClass::GetClassID(int a1, _DWORD *a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448645;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

/* ASM:
mov     eax, [esp+arg_4]
test    eax, eax
jnz     short loc_6B4F60
mov     eax, 80004003h
retn    8
; ---------------------------------------------------------------------------

loc_6B4F60:                             ; CODE XREF: UnitClass__GetClassID+6↑j
mov     ecx, ds:dword_7E9690
mov     [eax], ecx
mov     edx, ds:dword_7E9694
mov     [eax+4], edx
mov     ecx, ds:dword_7E9698
mov     [eax+8], ecx
mov     edx, ds:dword_7E969C
mov     [eax+0Ch], edx
xor     eax, eax
retn    8
*/
}
HRESULT __stdcall UnitClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall UnitClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall UnitClass::whatAmI() const { return kObjectTypeId; }
int UnitClass::objectSize() const { return sizeof(UnitClass); }
void UnitClass::DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}
void UnitClass::DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}

} // namespace gamemd
