#include "structure/unit.hpp"
#include "structure/globals_structure.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals.hpp"

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
  _BYTE v32[4]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v33[4]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v34[4]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v35[12]; // [esp+24h] [ebp-Ch] BYREF

  switch ( *(&this->uniqueId7) )
  {
    case 0:
      if ( !this->GetZAboveGround()
        && this->q2E8 == 0.0
        && ((v2 = *(&this->isAliveFlag1)) == 0
         || (v3 = *(&this->vtable49),
             v4 = *(&this->uniqueId0),
             v5 = *(&this->uniqueId1),
             v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v35),
             v3 == *v6)
         && v4 == v6[1]
         && v5 == v6[2]) )
      {
        *(&this->uniqueId7) = 3; /*0x415250*/
      }
      else if ( *(&this->isAliveFlag1)
             || !*(_BYTE *)(*(&this->currentMission3) + 3221)
             || this->GetZAboveGround() <= 0 )
      {
        if ( *(&this->isAliveFlag1) )
        {
          if ( this->ValidateTargetCell(*(&this->isAliveFlag1)) )
          {
            DB = CCINIClass::GetDB(&this->nextArrayIndex9); /*0x415334*/
            v14 = DB; /*0x415339*/
            if ( DB /*0x415360*/
              && (v15 = *(_DWORD *)(DB + 1492)) != 0
              && *TechnoClass::GetWaypointCoords(*(_DWORD **)(v15 + 36), &v30) != g_AircraftStatusFlag )
            {
              v16 = *this; /*0x415375*/
              WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords( /*0x415381*/
                                            *(_DWORD **)(*(_DWORD *)(v14 + 1492) + 36),
                                            &v31);
              v18 = CellCoord::To_CellObj(&MapClass_Instance, WaypointCoords); /*0x41538c*/
              NearbyCell = InfantryClass::FindNearbyCell(this, (int)v18); /*0x415394*/
              this->AssignDestination(NearbyCell, 1); /*0x41539c*/
            }
            else
            {
              v20 = *this; /*0x4153ad*/
              Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(v32, 700); /*0x4153bb*/
              v22 = CellCoord::To_CellObj(&MapClass_Instance, Waypoint_Location); /*0x4153c6*/
              v23 = InfantryClass::FindNearbyCell(this, (int)v22); /*0x4153ce*/
              this->AssignDestination(v23, 1); /*0x4153d6*/
              v24 = *(&this->lastLayer3); /*0x4153dc*/
              if ( v24 ) /*0x4153e4*/
                TeamClass::SelectMember(v24, *(&this->isAliveFlag1)); /*0x4153f1*/
            }
          }
          else
          {
            v25 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(&this->currentMission3) + 188))(*(&this->currentMission3)); /*0x41540d*/
            *(&this->uniqueId7) = v25 != this->GetZAboveGround() ? 4 : 1;
          }
        }
        else
        {
          *(&this->uniqueId7) = 2; /*0x41530c*/
        }
      }
      else
      {
        v10 = this->FindBestMatch(*(&this->currentMission3) + 1000, 0, 0); /*0x4152cd*/
        if ( v10 ) /*0x4152d5*/
        {
          this->AssignDestination(v10, 1); /*0x4152de*/
        }
        else
        {
          v11 = *this; /*0x4152e9*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(this); /*0x4152ef*/
          this->AssignDestination(ClosestPlacementCell, 1); /*0x4152f7*/
        }
      }
      goto LABEL_9; /*0x415250*/
    case 1:
      if ( !*(&this->q0A43) ) /*0x41542a*/
        WinAPI::Wrapper(-2147467261); /*0x415439*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 16))(*(&this->q0A43)) ) /*0x415447*/
        *(&this->uniqueId7) = 2; /*0x41544e*/
      if ( !this->ValidateTargetCell(*(&this->isAliveFlag1)) ) /*0x415463*/
        *(&this->uniqueId7) = 0; /*0x415471*/
      goto LABEL_9; /*0x41547b*/
    case 2:
      if ( !*(&this->q0A43) ) /*0x415480*/
        WinAPI::Wrapper(-2147467261); /*0x41548f*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 16))(*(&this->q0A43)) ) /*0x41549d*/
        *(&this->uniqueId7) = 3; /*0x4154a4*/
      return 1; /*0x4154ba*/
    case 3:
      if ( !this->isTether ) /*0x4154bb*/
      {
        if ( *(&this->referenceCount0) ) /*0x4154c9*/
        {
          if ( *(_BYTE *)(*(&this->currentMission3) + 3580) ) /*0x4154dd*/
          {
            this->UpdateReveal(0); /*0x4154ed*/
            FootClass::MissionMoveCarryallLand(this); /*0x4154f5*/
            this->UpdateReveal(1); /*0x415500*/
          }
          else
          {
            v26 = LinkedList::Pop(&this->nextArrayIndex9); /*0x41551a*/
            v27 = (_WORD *)this->GetCellCoords_Alt(v33, this); /*0x415522*/
            MapClass::ApplyOverlayReveal(&MapClass_Instance, v27, v29); /*0x41552e*/
            if ( this->FindLandingCell(v26) ) /*0x41553e*/
              v26->q424 = 0; /*0x415548*/
            v28 = (_WORD *)this->GetCellCoords_Alt(v34); /*0x415559*/
            MapClass::FillRevealBuffer(&MapClass_Instance, v28, this); /*0x415565*/
            if ( !v26->q424 && v26->q5D4 ) /*0x415574*/
              TeamClass::AddMember(*(&this->lastLayer3), v26, 0); /*0x415587*/
            if ( !*(&this->referenceCount0) ) /*0x41558c*/
              this->ValidatePlacement(0, 1); /*0x4155a2*/
          }
        }
        else
        {
          this->ValidatePlacement(0, 1); /*0x4155b5*/
        }
      }
      goto LABEL_9; /*0x415506*/
    case 4:
      *(&this->uniqueId7) = 0; /*0x4155c0*/
      return 1; /*0x4155cd*/
    default:
  LABEL_9:
      MissionControl = MissionClass::GetMissionControl(this); /*0x41525a*/
      v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41527f*/
      return v8 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
  }
}
// IDA: 0x6B6080 (CreateUnloadPlacementCraters, 167B)
// 0x6b6080
int UnitClass::CreateUnloadPlacementCraters(CellStruct* cell)
{
  int result; // eax
  int i; // ebx
  _DWORD *v6; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v9; // [esp+10h] [ebp+4h]

  v7 = (int)(0);
  result = (int)(this->chronoDestCoords);
  if ( result > 0 ) /*0x6b6096*/
  {
    do /*0x6b611c*/
    {
      for ( i = 0; i < this->storedTiberium; ++i ) /*0x6b60ac*/
      {
        IDA_LOWORD(v9) = i + *cell; /*0x6b60bd*/
        IDA_HIWORD(v9) = v7 + cell[1]; /*0x6b60c6*/
        v9 = v9; /*0x6b60d5*/
        v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9); /*0x6b60d9*/
        v6[18] = this->hijackerInfantryType; /*0x6b60ea*/
        *((_BYTE *)v6 + 287) = i + this->storedTiberium * v7; /*0x6b60f5*/
        BuildingClass::CreatePlacementCrater(v6); /*0x6b60fb*/
      }
      result = ++v7; /*0x6b6115*/
    }
    while ( v7 < this->chronoDestCoords ); /*0x6b611c*/
  }
  return result; /*0x6b6120*/
}
// 0x54e3b0
int __thiscall UnitClass::GetExitCell(int this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v6; // eax
  bool v9; // zf
  unsigned int v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  a2 = a2; /*0x54e3b6*/
  if ( !*(_BYTE *)(a2[433] + 3432) ) /*0x54e3c2*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 988))(a2, 0); /*0x54e3d2*/
  v6 = RA2_OPNEW(8u); /*0x54e3e3*/
  a3 = a3; /*0x54e3e8*/
  v6 = v6; /*0x54e3ec*/
  v9 = a3 == 0; /*0x54e3f1*/
  *v6 = a2; /*0x54e3f3*/
  if ( v9 ) /*0x54e3f5*/
  {
    v10 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)a2 + 452, &a2) >> 12) + 1) >> 1) & 7; /*0x54e414*/
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2); /*0x54e417*/
    v6[1] = Cell::GetNeighbourContent(v11, v10); /*0x54e425*/
  }
  else
  {
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a3 + 72))(a3, v15); /*0x54e432*/
    IDA_LOWORD(a2) = *v12 / 256; /*0x54e445*/
    IDA_HIWORD(a2) = v12[1] / 256; /*0x54e45e*/
    a3 = a2; /*0x54e46c*/
    v6[1] = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3); /*0x54e475*/
  }
  *((_BYTE *)a2 + 1738) = 1; /*0x54e47d*/
  a2[191] = 1; /*0x54e483*/
  result = this->abstractFlags; /*0x54e489*/
  if ( this->referenceCount < result /*0x54e4b6*/
    || (this->q064 || !result)
    && (v13 = this->needsSave, v13 > 0)
    && (result = (*(int (__thiscall **)(int, int, _DWORD))(this->vtable4 + 8))(&this->u32_30, result + v13, 0),
        (_BYTE)result) )
  {
    result = this->referenceCount; /*0x54e4b8*/
    v14 = this->uniqueId; /*0x54e4bb*/
    this->referenceCount = result + 1; /*0x54e4c1*/
    *(_DWORD *, unsigned int a1)(v14 + 4 * result) = v6; /*0x54e4c4*/
  }
  return result; /*0x54e3d8*/
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

// ============================================================
// Phase 3: Deploy
// ============================================================

// IDA: 0x7192F0 (Deploy, 2302B)
// 0x7192f0
void* UnitClass::Deploy(void * a1)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  _DWORD *v6; // ecx
  _DWORD *v7; // ebp
  int i; // edi
  void **v9; // eax
  int *v10; // ecx
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  double v16; // st7
  int *v17; // edi
  int v18; // edx
  _DWORD *v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ebx
  int *v24; // eax
  _DWORD *v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int *v29; // edi
  int v30; // eax
  int *v31; // edi
  _DWORD *v32; // ebx
  int *v33; // edi
  int v34; // eax
  int *v35; // edi
  void **v36; // eax
  int *v37; // ecx
  void **v38; // eax
  int *v39; // edx
  int *v40; // edi
  int v41; // eax
  int *v42; // edi
  char PlacementPosition; // al
  int v44; // edi
  _DWORD *v45; // ebp
  int *v46; // edi
  int v47; // eax
  int *v48; // edi
  __int16 *v49; // eax
  _BYTE *v50; // ecx
  int v51; // ecx
  void **v52; // eax
  int *v53; // ecx
  _DWORD *v54; // [esp+28h] [ebp-20h] BYREF
  int v55; // [esp+2Ch] [ebp-1Ch] BYREF
  int v56; // [esp+30h] [ebp-18h]
  int v57; // [esp+34h] [ebp-14h]
  char v58[4]; // [esp+38h] [ebp-10h] BYREF
  int v59; // [esp+3Ch] [ebp-Ch]
  int v60; // [esp+44h] [ebp-4h]

  v1 = (_DWORD *)((int)(a1));
  v2 = (int)(a1[2]);
  v60 = (int)(0);
  if ( *(_BYTE *)(v2 + 625) && !a1[13] && !*(_DWORD *)(v2 + 640) ) /*0x719313*/
    goto LABEL_82; /*0x719319*/
  v3 = a1[13]; /*0x719331*/
  if ( !v3 ) /*0x719336*/
  {
    v4 = *(_DWORD *)(v2 + 640); /*0x719338*/
    if ( v4 ) /*0x719340*/
    {
      a1[13] = v4; /*0x719342*/
      return 0; /*0x71934e*/
    }
  }
  if ( *(_BYTE *)(v2 + 636) ) /*0x719351*/
  {
    if ( !v3 ) /*0x7197ce*/
    {
      *(_BYTE *, unsigned int a1)(v2 + 624) = 1; /*0x7197d0*/
      v1[14] = g_CurrentFrame; /*0x7197e4*/
      v1[15] = v59; /*0x7197ea*/
      v1[16] = 60; /*0x7197ed*/
      ++v1[13]; /*0x7197f4*/
      return 0; /*0x719800*/
    }
  }
  else if ( v3 <= 0 ) /*0x719361*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x71936a*/
    {
      v6 = (_DWORD *)v1[2]; /*0x719375*/
      v7 = v1 + 9; /*0x719378*/
      if ( v6[39] == v1[9] && v6[40] == v1[10] && v6[41] == v1[11] /*0x7193c1*/
        || *v7 == dword_B0EBF8 && v1[10] == dword_B0EBFC && v1[11] == dword_B0EC00 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v6 + 1152))(v6, 0, 1); /*0x7197b4*/
        (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1); /*0x7197bd*/
        return 0; /*0x7197c0*/
      }
      else
      {
        AbstractClass::ClearTargetToMeClearManagerTarget(v6); /*0x7193c7*/
        for ( i = dword_A8ED50 - 1; i >= 0; --i ) /*0x7193d6*/
        {
          if ( *(_DWORD *)(*((_DWORD *)dword_A8ED44 + i) + 268) == v1[2] ) /*0x7193ec*/
            BulletClass::LoseTarget(); /*0x7193ee*/
        }
        v9 = (void **)RA2_OPNEW(0x1C8u); /*0x7193fb*/
        if ( v9 ) /*0x719405*/
        {
          v10 = (int *)(v1[2] + 156); /*0x71940b*/
          v55 = *v10; /*0x71941c*/
          v56 = v10[1]; /*0x719423*/
          v57 = v10[2]; /*0x71942f*/
          AnimClass::ctor(v9, *((void **, unsigned int a1)g_RulesClass_Instance + 207), &v55, 0, 1, (void *)0x600, 0, 0); /*0x719442*/
        }
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)v1[2] + 72))(v1[2], v58); /*0x719451*/
        v12 = v1[11]; /*0x719459*/
        v13 = *v11 - *v7; /*0x71945c*/
        v14 = v11[1]; /*0x71945e*/
        v15 = v11[2]; /*0x719461*/
        v55 = v13; /*0x719464*/
        v56 = v14 - v1[10]; /*0x71946f*/
        v57 = v15 - v12; /*0x719473*/
        v16 = Math::Sqrt((double)v13 * (double)v13 + (double)(v15 - v12) * (double)(v15 - v12) + (double)v56 /*0x71949f*/
                                                                                               * (double)v56);
        v17 = (int *)((_DWORD *)(v1 + 14));
        v18 = (_DWORD *)(Math::RoundToInt(v16));
        a1 = (_DWORD *)v18; /*0x7194ba*/
        v1[14] = g_CurrentFrame; /*0x7194be*/
        v1[15] = v59; /*0x7194c4*/
        v1[16] = 0; /*0x7194c7*/
        v19 = g_RulesClass_Instance; /*0x7194ca*/
        if ( *((_BYTE *)g_RulesClass_Instance + 3064) ) /*0x7194d0*/
        {
          v20 = (int)((_DWORD *)(v18 / *((_DWORD *)g_RulesClass_Instance + 765)));
          *v17 = (int)((_DWORD *)((int)g_CurrentFrame));
          v1[15] = (_DWORD *)(v59);
          v1[16] = (_DWORD *)(v20);
          v19 = g_RulesClass_Instance; /*0x7194f7*/
        }
        v21 = *v17; /*0x7194fd*/
        v22 = v1[16]; /*0x7194ff*/
        if ( *v17 != -1 ) /*0x719505*/
        {
          if ( (int)g_CurrentFrame - v21 >= v22 ) /*0x719511*/
            v22 = 0; /*0x719517*/
          else
            v22 -= (int)g_CurrentFrame - v21; /*0x719513*/
        }
        v23 = v19[767]; /*0x719519*/
        if ( v22 <= v23 ) /*0x719521*/
        {
          v57 = v23; /*0x71952d*/
          v55 = (int)g_CurrentFrame; /*0x719531*/
          v24 = &v55; /*0x719535*/
        }
        else
        {
          v24 = (int *)(v1 + 14);
        }
        *v17 = (int)((_DWORD *)(*v24));
        v1[15] = (_DWORD *)(v24[1]);
        v25 = (_DWORD *)(a1);
        v1[16] = v24[2]; /*0x71954c*/
        if ( (int)v25 < *((_DWORD *)g_RulesClass_Instance + 768) ) /*0x71955b*/
        {
          v26 = *((_DWORD *)g_RulesClass_Instance + 767); /*0x719562*/
          *v17 = (int)g_CurrentFrame; /*0x71956a*/
          v1[15] = v59; /*0x719570*/
          v1[16] = v26; /*0x719573*/
        }
        *(_BYTE *)(v1[2] + 625) = 1; /*0x719579*/
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1[2] + 44))(v1[2]) == 1 /*0x719596*/
          && *(_BYTE *, void * a1)(*(_DWORD *)(v1[2] + 1732) + 3598) )
        {
          v27 = v59; /*0x7195a5*/
          *v17 = (int)g_CurrentFrame; /*0x7195ab*/
          v1[15] = v27; /*0x7195ad*/
          v1[16] = 0; /*0x7195b0*/
          *(_BYTE *)(v1[2] + 625) = 0; /*0x7195b6*/
        }
        v28 = *(_DWORD *)(v1[2] + 1684); /*0x7195bf*/
        if ( v28 ) /*0x7195c7*/
          BuildingClass::Deploy(*(_DWORD *)(v28 + 1692), (int)v7, (int)v17); /*0x7195cf*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 292))(v1[2], 0); /*0x7195db*/
        v29 = (int *)v1[2]; /*0x7195e1*/
        v30 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v29 + 132))(v29) + 1400); /*0x7195ee*/
        if ( v30 != -1 || (v30 = *((_DWORD *)g_RulesClass_Instance + 135), v30 != -1) ) /*0x719608*/
        {
          v31 = v29 + 39; /*0x71960a*/
          v55 = *v31; /*0x719614*/
          v56 = v31[1]; /*0x71961b*/
          v57 = v31[2]; /*0x719624*/
          StartAudioControllerAt(v30, (int, unsigned int a1)&v55, 0); /*0x71962c*/
        }
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9); /*0x719637*/
        IDA_LOWORD(a1) = *v7 / 256; /*0x71964c*/
        IDA_HIWORD(a1) = v1[10] / 256; /*0x719664*/
        v54 = a1; /*0x71966d*/
        v32 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v54); /*0x71967f*/
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9); /*0x719684*/
        *(_BYTE *)(v1[2] + 140) = (v32[80] & 0x100) != 0; /*0x719698*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0); /*0x7196b2*/
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1); /*0x7196bf*/
        v33 = (int *)v1[2]; /*0x7196c5*/
        v34 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v33 + 132))(v33) + 1396); /*0x7196d2*/
        if ( v34 != -1 || (v34 = *((_DWORD *)g_RulesClass_Instance + 134), v34 != -1) ) /*0x7196ec*/
        {
          v35 = v33 + 39; /*0x7196ee*/
          v55 = *v35; /*0x7196f8*/
          v56 = v35[1]; /*0x7196ff*/
          v57 = v35[2]; /*0x719708*/
          StartAudioControllerAt(v34, (int)&v55, 0); /*0x719710*/
        }
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 396))(v1[2], 2); /*0x71971c*/
        (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1); /*0x719725*/
        CrateClass::ProcessPickup(v32, v1[2]); /*0x71972e*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1); /*0x71973c*/
        v36 = (void **)RA2_OPNEW(0x1C8u); /*0x719747*/
        if ( v36 ) /*0x719751*/
        {
          v37 = (int *)(v1[2] + 156); /*0x719758*/
          v55 = *v37; /*0x71976b*/
          v56 = v37[1]; /*0x719772*/
          v57 = v37[2]; /*0x71977e*/
          AnimClass::ctor(v36, *((void **)g_RulesClass_Instance + 207), &v55, 0, 1, (void *)0x600, 0, 0); /*0x719791*/
        }
        *(_DWORD *, unsigned int a1)(v1[2] + 640) = 0; /*0x719799*/
        return 0; /*0x7197a3*/
      }
    }
    return 0; /*0x719be5*/
  }
  switch ( v3 ) /*0x719806*/
  {
    case 1: /*0x719806*/
  LABEL_82:
      (*(void (__stdcall **)(_DWORD *))(*(a1 - 1) + 40))(a1 - 1); /*0x719b99*/
      return 0; /*0x719bac*/
    case 2: /*0x719806*/
      v38 = (void **)RA2_OPNEW(0x1C8u); /*0x71982c*/
      if ( v38 ) /*0x719836*/
      {
        v39 = (int *)(v1[2] + 156); /*0x71983c*/
        v55 = *v39; /*0x71984d*/
        v56 = v39[1]; /*0x719854*/
        v57 = v39[2]; /*0x719860*/
        AnimClass::ctor(v38, *((void **)g_RulesClass_Instance + 207), &v55, 0, 1, (void *)0x600, 0, 0); /*0x719873*/
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 292))(v1[2], 0); /*0x71987e*/
      v40 = (int *)v1[2]; /*0x719884*/
      v41 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v40 + 132))(v40) + 1400); /*0x719891*/
      if ( v41 != -1 || (v41 = *((_DWORD *)g_RulesClass_Instance + 135), v41 != -1) ) /*0x7198ab*/
      {
        v42 = v40 + 39; /*0x7198ad*/
        v55 = *v42; /*0x7198b6*/
        v56 = v42[1]; /*0x7198bd*/
        v57 = v42[2]; /*0x7198c6*/
        StartAudioControllerAt(v41, (int)&v55, 0); /*0x7198ce*/
      }
      *(_BYTE *)(v1[2] + 625) = 1; /*0x7198da*/
      *(_BYTE *)(v1[2] + 636) = 0; /*0x7198e4*/
      *(_BYTE *)(v1[2] + 624) = 0; /*0x7198ee*/
      *(_BYTE *)(v1[2] + 140) = 0; /*0x7198fa*/
      PlacementPosition = ObjectClass::FindPlacementPosition( /*0x71991d*/
                            v1 - 1,
                            *(_DWORD *)(v1[2] + 648),
                            *(_DWORD *)(v1[2] + 652),
                            *(_DWORD *)(v1[2] + 656),
                            0);
      v44 = v1[13] + 1; /*0x719925*/
      v1[13] = v44; /*0x719928*/
      if ( PlacementPosition ) /*0x71992d*/
      {
        v1[13] = v44 + 1; /*0x719936*/
        return 0; /*0x719940*/
      }
      return 0; /*0x71992d*/
    case 3: /*0x719806*/
      if ( ObjectClass::FindPlacementPosition( /*0x719967*/
             a1 - 1,
             *(_DWORD *)(v2 + 648),
             *(_DWORD *)(v2 + 652),
             *(_DWORD *)(v2 + 656),
             0) )
      {
        ++v1[13]; /*0x719970*/
      }
      *(_DWORD *)(v1[2] + 644) = *((_DWORD *)g_RulesClass_Instance + 763); /*0x719983*/
      return 0; /*0x719990*/
    case 4: /*0x719806*/
      ObjectClass::FindPlacementPosition(a1 - 1, *(_DWORD *)(v2 + 648), *(_DWORD *)(v2 + 652), *(_DWORD *)(v2 + 656), 1); /*0x7199b8*/
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9); /*0x7199c6*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0); /*0x7199d2*/
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1); /*0x7199df*/
      ++v1[13]; /*0x7199e9*/
      return 0; /*0x7199f5*/
  }
  if ( v3 != 5 ) /*0x7199fb*/
  {
    if ( v3 != 6 ) /*0x719b97*/
    {
      if ( v3 == 7 ) /*0x719bb2*/
      {
        *(_BYTE *)(v2 + 625) = 0; /*0x719bb4*/
        TechnoClass::SetFocus((_DWORD *)v1[2], 0); /*0x719bbf*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1); /*0x719bcc*/
        *((_BYTE *)v1 + 48) = 0; /*0x719bd2*/
        *(_DWORD *, unsigned int a1)(v1[2] + 640) = 0; /*0x719bd9*/
        v1[13] = 0; /*0x719bdf*/
      }
      return 0; /*0x719bdf*/
    }
    goto LABEL_82; /*0x719b97*/
  }
  v45 = (_DWORD *)(a1 + 9);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 436))(v2, a1 + 9); /*0x719a07*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0); /*0x719a13*/
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1); /*0x719a20*/
  v46 = (int *)v1[2]; /*0x719a26*/
  v47 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v46 + 132))(v46) + 1396); /*0x719a33*/
  if ( v47 != -1 || (v47 = *((_DWORD *)g_RulesClass_Instance + 134), v47 != -1) ) /*0x719a4d*/
  {
    v48 = v46 + 39; /*0x719a4f*/
    v55 = *v48; /*0x719a58*/
    v56 = v48[1]; /*0x719a5f*/
    v57 = v48[2]; /*0x719a68*/
    StartAudioControllerAt(v47, (int, unsigned int a1)&v55, 0); /*0x719a70*/
  }
  v49 = (__int16 *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)v1[2] + 440))(v1[2], &a1); /*0x719a81*/
  if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, v49, 1) ) /*0x719a8d*/
    *(_BYTE *)(v1[2] + 981) = 0; /*0x719a99*/
  if ( !*(_DWORD *)(v1[2] + 640) ) /*0x719aa3*/
    ProcessUnitDeploymentAtCell(*v45, v1[10], v1[11]); /*0x719ac4*/
  v50 = (_BYTE *)v1[2]; /*0x719ac9*/
  if ( !v50[144] ) /*0x719ad4*/
    return 0; /*0x719ad4*/
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v50 + 396))(v50, 2); /*0x719ade*/
  (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1); /*0x719ae7*/
  *(_DWORD *)(v1[2] + 1064) = 0; /*0x719aee*/
  *(_DWORD *)(v1[2] + 1068) = 0; /*0x719af7*/
  TechnoClass::SetFocus((_DWORD *)v1[2], 0); /*0x719b00*/
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1); /*0x719b0d*/
  v51 = *(_DWORD *)(v1[2] + 644); /*0x719b23*/
  v1[14] = g_CurrentFrame; /*0x719b29*/
  v1[15] = v59; /*0x719b2f*/
  v1[16] = v51; /*0x719b32*/
  v52 = (void **)RA2_OPNEW(0x1C8u); /*0x719b35*/
  if ( v52 ) /*0x719b3f*/
  {
    v53 = (int *)(v1[2] + 156); /*0x719b45*/
    v55 = *v53; /*0x719b56*/
    v56 = v53[1]; /*0x719b5d*/
    v57 = v53[2]; /*0x719b69*/
    AnimClass::ctor(v52, *((void **)g_RulesClass_Instance + 207), &v55, 0, 1, (void *)0x600, 0, 0); /*0x719b7c*/
  }
  ++v1[13]; /*0x719b85*/
  return 0; /*0x719327*/
}
// 0x738d30
AbstractClass * * UnitClass::DeployToBuilding()
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
  _BYTE v30[4]; // [esp+24h] [ebp-10h] BYREF
  _BYTE v31[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(*(&this->currentMission3) + 1028) ) /*0x738d41*/
    return 1; /*0x738d52*/
  this->UpdateProdWithSound(0); /*0x738d58*/
  v3 = 0; /*0x738d64*/
  v4 = g_RulesClass_Instance->NeutralTechBuildings[1]; /*0x738d66*/
  if ( v4 <= 0 ) /*0x738d6e*/
    goto LABEL_7; /*0x738d6e*/
  v5 = (_DWORD *)g_RulesClass_Instance->BuildDummy[2]; /*0x738d76*/
  while ( *v5 != *(_DWORD *)(*(&this->currentMission3) + 1028) ) /*0x738d84*/
  {
    ++v3; /*0x738d8a*/
    ++v5; /*0x738d8b*/
    if ( v3 >= v4 ) /*0x738d90*/
      goto LABEL_7; /*0x738d90*/
  }
  if ( *(_BYTE *)(this->GetTarget() + 497) ) /*0x738e33*/
  {
    if ( !*(&this->isAliveFlag1) ) /*0x738e3f*/
    {
      v27 = 0; /*0x738e51*/
      BuildableFromArray = (_DWORD *)HouseClass::FirstBuildableFromArray(&g_RulesClass_Instance->NSGates[2]); /*0x738e68*/
      v10 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 1; /*0x738e8a*/
      v11 = HouseClass::FirstBuildableFromArray(&g_RulesClass_Instance->NSGates[2]); /*0x738e8b*/
      v25 = BuildingTypeClass::GetFoundationHeight(v11, 0) + 1; /*0x738ea6*/
      v12 = ((__int64 (__thiscall *)(_DWORD *, int *))*(_DWORD *)(*this + 440))(this, &v27); /*0x738eb7*/
      v26 = *LayerClass::Pathfinding_Find( /*0x738ee0*/
               &MapClass_Instance,
               IDA_SHIDWORD(v12),
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
      v27 = 0; /*0x738ee4*/
      v13 = (_DWORD *)HouseClass::FirstBuildableFromArray(&g_RulesClass_Instance->BuildDummy[1]); /*0x738eee*/
      v14 = BuildingTypeClass::GetFoundationWidth(v13) + 1; /*0x738f10*/
      v15 = HouseClass::FirstBuildableFromArray(&g_RulesClass_Instance->BuildDummy[1]); /*0x738f11*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0); /*0x738f18*/
      v26 = *LayerClass::Pathfinding_Find( /*0x738f4e*/
               &MapClass_Instance,
               (int)&v27,
               &v27,
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
      if ( v26 != g_UnitSelectionState ) /*0x738f52*/
      {
        v17 = *this; /*0x738f62*/
        v18 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v26); /*0x738f70*/
        this->Stub(v18, 1); /*0x738f78*/
      }
      *(_BYTE *)(this->GetTarget() + 497) = 0; /*0x738f85*/
    }
  }
  else
  {
  LABEL_7:
    if ( !*(&this->isAliveFlag1) ) /*0x738d92*/
    {
      v6 = (_DWORD *)this->GetCoords_0(v31); /*0x738da7*/
      IDA_LOWORD(v27) = *v6 / 256; /*0x738dbf*/
      IDA_HIWORD(v27) = v6[1] / 256; /*0x738dd7*/
      v26 = v27; /*0x738de4*/
      v7 = CellStruct::Add(&v26, &v27, &dword_89F6A4); /*0x738de9*/
      v8 = *(&this->currentMission3); /*0x738df0*/
      v28 = *v7; /*0x738df6*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(*v8->DeploysInto + 168))( /*0x738e08*/
             v8->DeploysInto,
             &v28,
             0) )
      {
        this->UpdateProdWithSound(1); /*0x738e1c*/
        return 1; /*0x738e2b*/
      }
      if ( !*(&this->isAliveFlag1) ) /*0x738f90*/
      {
        if ( (byte_B1CF9D & 1) == 0 ) /*0x738fa3*/
        {
          dword_B1D010 = -65536; /*0x738fbf*/
          byte_B1CF9D |= 1u; /*0x738fca*/
          dword_B1D014 = -131072; /*0x738fde*/
          dword_B1D018 = -131071; /*0x738ffc*/
          dword_B1D01C = -65537; /*0x73900f*/
          dword_B1D020 = -196608; /*0x739022*/
          dword_B1D024 = -196607; /*0x739035*/
          dword_B1D028 = -131073; /*0x739048*/
          dword_B1D02C = -196606; /*0x739065*/
          dword_B1D030 = -131074; /*0x73907b*/
          dword_B1D034 = -262144; /*0x739091*/
          dword_B1D038 = -262143; /*0x7390a7*/
          dword_B1D03C = -196609; /*0x7390bd*/
          dword_B1D040 = -262142; /*0x7390d3*/
          dword_B1D044 = -196610; /*0x7390e9*/
          dword_B1D048 = 0x10000; /*0x7390fd*/
          dword_B1D04C = 0x20000; /*0x739111*/
          dword_B1D050 = 131073; /*0x739125*/
          dword_B1D054 = 196607; /*0x739139*/
          dword_B1D058 = 196608; /*0x73914a*/
          dword_B1D05C = 196609; /*0x739160*/
          dword_B1D060 = 0x3FFFF; /*0x739176*/
          dword_B1D064 = 196610; /*0x73918c*/
          dword_B1D068 = 262142; /*0x7391a2*/
          dword_B1D06C = 0x40000; /*0x7391b8*/
          dword_B1D070 = 262145; /*0x7391ce*/
          dword_B1D074 = 327679; /*0x7391e4*/
          dword_B1D078 = 262146; /*0x7391fa*/
          dword_B1D07C = 327678; /*0x739210*/
          dword_B1D084 = 65534; /*0x739239*/
          dword_B1D088 = 65533; /*0x73924f*/
          dword_B1D08C = 65532; /*0x73927a*/
          dword_B1D090 = 1; /*0x739290*/
          v27 = 4; /*0x739296*/
          dword_B1D080 = 0xFFFF; /*0x7392ab*/
          dword_B1D094 = 2; /*0x7392b1*/
          dword_B1D098 = 3; /*0x7392b6*/
          dword_B1D09C = 4; /*0x7392bc*/
          atexit(nullsub_248); /*0x7392c2*/
        }
        v19 = &dword_B1D010; /*0x7392ca*/
        while ( 1 ) /*0x7392d8*/
        {
          v20 = (_WORD *)this->GetCellCoords_Alt(v30); /*0x7392d8*/
          v21 = v20[1] + *((_WORD *)v19 + 1); /*0x7392e8*/
          IDA_LOWORD(v27) = *v20 + *(_WORD *)v19; /*0x7392ed*/
          IDA_HIWORD(v27) = v21; /*0x7392f8*/
          v27 = v27; /*0x739308*/
          IDA_LOWORD(v26) = dword_89F6A4 + v27; /*0x73930e*/
          IDA_HIWORD(v26) = IDA_HIWORD(dword_89F6A4) + v21; /*0x739313*/
          v22 = *(&this->currentMission3); /*0x73931c*/
          v28 = v26; /*0x739322*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(*v22->DeploysInto + 168))( /*0x739333*/
                 v22->DeploysInto,
                 &v28,
                 0) )
          {
            break; /*0x739333*/
          }
          if ( (int)++v19 >= (int)&dword_B1D0A0 ) /*0x739346*/
            goto LABEL_23; /*0x739346*/
        }
        v23 = *this; /*0x73934a*/
        v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v27); /*0x739358*/
        this->Stub(v24, 1); /*0x739360*/
      }
    }
  }
  LABEL_23:
  this->UpdateProdWithSound(1); /*0x739366*/
  if ( !*(&this->isAliveFlag1) && !(unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x739380*/
    this->COMStub_Return0_93(&dword_B1CFE8, 0, 0); /*0x739394*/
  return 0; /*0x738d49*/
}
// 0x739ac0
char __thiscall UnitClass::SimpleDeployerDeploy(int *this)
{
  int v2; // eax
  int v3; // eax
  void **v4; // eax
  void **v5; // eax
  int v6; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+4h] [ebp-Ch] BYREF
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  v2 = *(&this->q02B3); /*0x739ac6*/
  if ( *(_BYTE *)(v2 + 3603) ) /*0x739acc*/
  {
    if ( this->GetZAboveGround() <= 0 /*0x739af2*/
      || (v2 = this->GetSpecialValue(), *(_BYTE *)(v2 + 1709)) )
    {
      IDA_LOBYTE(v2) = this->u32_1B8; /*0x739b00*/
      if ( !(_BYTE)v2 ) /*0x739b08*/
      {
        if ( !this->q134 && this->GetZAboveGround() > 0 ) /*0x739b2a*/
          this->q134 = 1; /*0x739b2c*/
        if ( this->u32_6E1 && (v3 = *(&this->u32_1C6)) != 0 ) /*0x739b44*/
        {
          if ( *(&this->q0182) >= *(_DWORD *)(*(_DWORD *)(v3 + 200) + 704) + *(_DWORD *)(*(_DWORD *)(v3 + 200) + 692) - 1 ) /*0x739b64*/
            this->u32_1B8 = 1; /*0x739b6a*/
        }
        else if ( !this->q134 ) /*0x739b7c*/
        {
          if ( *(_DWORD *)(*(&this->q02B3) + 1724) ) /*0x739b90*/
          {
            if ( !*(&this->u32_1C6) ) /*0x739b9e*/
            {
              v4 = (void **)RA2_OPNEW(0x1C8u); /*0x739bad*/
              if ( v4 ) /*0x739bb7*/
              {
                v12 = *(&this->q00C9); /*0x739bcb*/
                v13 = *(&this->q0100); /*0x739bd4*/
                v14 = *(&this->q0101); /*0x739be0*/
                v5 = AnimClass::ctor(v4, *(void **)(*(&this->q02B3) + 1724), &v12, 0, 1, (void *)0x600, 0, 0); /*0x739bf3*/
              }
              else
              {
                v5 = 0; /*0x739bfa*/
              }
              *(&this->u32_1C6) = (int)v5; /*0x739bff*/
              BuildingClass::AimTurret(v5, this); /*0x739c05*/
              *(_DWORD *)(*(&this->u32_1C6) + 212) = this->vt_slot_484(); /*0x739c1a*/
            }
            v6 = *(&this->u32_1C6); /*0x739c20*/
            *(&this->q0182) = *(_DWORD *)(v6->u32_C8 + 692); /*0x739c32*/
            g_CurrentFrame = g_CurrentFrame; /*0x739c3e*/
            v8 = *(_DWORD *)(v6->u32_C8 + 688); /*0x739c44*/
            *(&this->q0187) = v8; /*0x739c50*/
            *(&this->q0184) = (int)g_CurrentFrame; /*0x739c56*/
            *(&this->q0185) = v13; /*0x739c5c*/
            *(&this->q0186) = v8; /*0x739c5f*/
            this->u32_6E1 = 1; /*0x739c62*/
          }
          else
          {
            this->u32_1B8 = 1; /*0x739c6a*/
          }
        }
        v2 = this->GetSpecialValue(); /*0x739c74*/
        if ( *(_DWORD *)(v2 + 1388) != -1 ) /*0x739c84*/
        {
          v12 = *(&this->q00C9); /*0x739c95*/
          v13 = *(&this->q0100); /*0x739c9e*/
          v9 = *this; /*0x739ca2*/
          v14 = *(&this->q0101); /*0x739ca7*/
          v10 = this->GetSpecialValue(); /*0x739cab*/
          IDA_LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v10 + 1388), (int)&v12, 0); /*0x739cb9*/
        }
      }
    }
  }
  return v2; /*0x739cbf*/
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

// IDA: 0x739CD0 (SimpleDeployerUndeploy, 494B)
// 0x739cd0
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
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  IDA_LOBYTE(v2) = this->Deployed; /*0x739cd7*/
  if ( (_BYTE)v2 ) /*0x739cdf*/
  {
    if ( this->Undeploying && (v3 = this->deployAnim) != 0 ) /*0x739cf7*/
    {
      if ( this->radioContact >= *(_DWORD *)(*(_DWORD *)(v3 + 200) + 704) /*0x739d17*/
                                    + *(_DWORD *)(*(_DWORD *)(v3 + 200) + 692)
                                    - 2 )
      {
        v4 = *(_DWORD *)this; /*0x739d1d*/
        this->Deployed = 0; /*0x739d21*/
        this->Undeploying = 0; /*0x739d28*/
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(v4 + 132))(this) + 1709) ) /*0x739d35*/
        {
          v5 = *(_DWORD *)this; /*0x739d43*/
          PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v16, this); /*0x739d4f*/
          v7 = CellCoord::To_CellObj(&MapClass_Instance, PlacementCellsAlt); /*0x739d5a*/
          (*(void (__thiscall **)(int, void *, int))(v5 + 1152))(this, v7, 1); /*0x739d62*/
        }
      }
    }
    else if ( this->Type->q6BC ) /*0x739d73*/
    {
      if ( !this->deployAnim ) /*0x739d81*/
      {
        v8 = (void **)RA2_OPNEW(0x1C8u); /*0x739d90*/
        if ( v8 ) /*0x739d9a*/
        {
          v17 = this->location; /*0x739daf*/
          v18 = this->u32_A0; /*0x739db8*/
          v19 = this->u32_A4; /*0x739dc4*/
          v9 = AnimClass::ctor(v8, this->Type->q6BC, &v17, 0, 1, (void *)0x600, 0, 1); /*0x739dd7*/
        }
        else
        {
          v9 = 0; /*0x739dde*/
        }
        this->deployAnim = v9; /*0x739de3*/
        BuildingClass::AimTurret(v9, (_BYTE *)this); /*0x739de9*/
        this->deployAnim->q0D4 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->missionStartTime4))(this); /*0x739dfe*/
      }
      v10 = this->deployAnim; /*0x739e04*/
      this->radioContact = *(_DWORD *)(v10->q0C8 + 692); /*0x739e16*/
      g_CurrentFrame = g_CurrentFrame; /*0x739e22*/
      v12 = *(_DWORD *)(v10->q0C8 + 688); /*0x739e28*/
      this->u32_10C = v12; /*0x739e34*/
      this->radioCommand = g_CurrentFrame; /*0x739e3a*/
      this->radioTimer = v18; /*0x739e40*/
      this->q108 = v12; /*0x739e43*/
      this->Undeploying = 1; /*0x739e46*/
    }
    else
    {
      this->Deployed = 0; /*0x739e4f*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)&this->q04C6))(this) ) /*0x739e5a*/
      (*(void (__thiscall **)(int))(*(_DWORD *)&this->q1C46))(this); /*0x739e68*/
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->attachedTag2))(this); /*0x739e72*/
    if ( *(_DWORD *)(v2 + 1392) != -1 ) /*0x739e7f*/
    {
      v17 = this->location; /*0x739e8f*/
      v18 = this->u32_A0; /*0x739e98*/
      v13 = *(_DWORD *)this; /*0x739e9c*/
      v19 = this->u32_A4; /*0x739ea1*/
      v14 = (*(int (__thiscall **)(int))(v13 + 132))(this); /*0x739ea5*/
      IDA_LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v14 + 1392), (int)&v17, 0); /*0x739eb3*/
    }
  }
  return v2; /*0x739eb8*/
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

// IDA: 0x737430 (MissionDispatch, 1826B)
// 0x737430
int __thiscall UnitClass::MissionDispatch(int this, int *a2, int a3, _DWORD *a4)
{
  int v4; // ebp
  int result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int Member; // edi
  int v10; // edi
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // ebp
  int v14; // eax
  int TileIndex; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  double v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+10h] [ebp-24h]
  int v25; // [esp+18h] [ebp-1Ch] BYREF
  int v26; // [esp+1Ch] [ebp-18h] BYREF
  double v27; // [esp+20h] [ebp-14h]
  _DWORD v28[3]; // [esp+28h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h] BYREF
  int v30; // [esp+3Ch] [ebp+8h]
  int v31; // [esp+40h] [ebp+Ch]

  v4 = a3; /*0x737435*/
  switch ( a3 )
  {
    case 3:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 12 ) /*0x737b21*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 5, 0); /*0x737b2b*/
      FootClass::MissionDispatch((int *)this, (_DWORD *)a2, a3, a4); /*0x737b3e*/
      return 1; /*0x737b46*/
    case 7:
      FootClass::MissionDispatch((int *)this, (_DWORD *)a2, a3, a4); /*0x737517*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x737524*/
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x737530*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 488))(this, 0, 0); /*0x73753e*/
      FootClass::ClearSomeVector(this); /*0x737546*/
      if ( !*(_BYTE *)(this + 1048) || !Team::GetMember((_DWORD *)this, 0) ) /*0x737559*/
      {
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 2, a2); /*0x737569*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 24); /*0x737575*/
      }
      return 1; /*0x737587*/
    case 14:
      if ( !*(_DWORD *)(this + 1652) ) /*0x7377d8*/
        WinAPI::Wrapper(-2147467261); /*0x7377e7*/
      if ( ((*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) /*0x73780d*/
         || *(_DWORD *)(this + 1444))
        && *(_DWORD *)(this + 172) == 2 )
      {
        goto LABEL_54; /*0x73780d*/
      }
      if ( Team::GetMember((_DWORD *)this, 0) != a2 ) /*0x737829*/
      {
        v24 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x737841*/
        v11 = HouseClass::SumPowerDrain((int *)(this + 276)); /*0x737845*/
        v12 = *(_DWORD *)a2; /*0x73784a*/
        v27 = (double)v11; /*0x737856*/
        if ( (double)v24 < v27 + *(double *)((*(int (__thiscall **)(int))(v12 + 132))(a2) + 896) /*0x737898*/
          || *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732) + 904) )
        {
          goto LABEL_54; /*0x737898*/
        }
        if ( !Team::AllMembersValid((int *)this) ) /*0x7378a0*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 2, a2); /*0x7378b0*/
      }
      if ( *(_DWORD *)(this + 1444) ) /*0x7378b6*/
        goto LABEL_69; /*0x7378be*/
      retaddr = *(_UNKNOWN **)(*(int (__thiscall **)(int))(*(_DWORD *)this + 440))(this); /*0x7378df*/
      v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&retaddr); /*0x7378ee*/
      v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 132))(a2, 0); /*0x7378f0*/
      TileIndex = MapClass::GetTileIndex( /*0x73790e*/
                    &MapClass_Instance,
                    (__int16 *)(this + 1372),
                    *(_DWORD *)(v14 + 1460),
                    (char)&v26);
      v16 = -1; /*0x737910*/
      if ( a2 && (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x73791b*/
      {
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x737923*/
        v16 = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)(a2 + 1372), *(_DWORD *)(v17 + 1460), 0); /*0x73793c*/
      }
      if ( TileIndex == v16 && (*(_DWORD *)(this + 1444) || v13[59] != 2) ) /*0x737972*/
      {
        v4 = a3; /*0x737990*/
  LABEL_69:
        if ( *(int *)(*(_DWORD *)(this + 1732) + 1504) <= 0 ) /*0x7379a2*/
          return FootClass::MissionDispatch((int *)this, (_DWORD *)a2, v4, a4); /*0x7379a2*/
        v30 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x7379ae*/
        v18 = HouseClass::SumPowerDrain((int *)(this + 276)); /*0x7379b2*/
        v19 = *(_DWORD *)a2; /*0x7379b7*/
        v27 = (double)v18; /*0x7379c3*/
        v20 = (*(int (__thiscall **)(int))(v19 + 132))(a2); /*0x7379c7*/
        if ( (double)v30 < v27 + *(double *)(v20 + 896) /*0x737a09*/
          || *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732) + 904) )
        {
          return FootClass::MissionDispatch((int *)this, (_DWORD *)a2, v4, a4); /*0x737a09*/
        }
        FootClass::MissionDispatch((int *)this, (_DWORD *)a2, v4, a4); /*0x737a18*/
        if ( !*(_DWORD *)(this + 1652) ) /*0x737a1d*/
          WinAPI::Wrapper(-2147467261); /*0x737a2c*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) /*0x737a65*/
          && !*(_BYTE *)(this + 1711)
          && !*(_BYTE *)(this + 1048)
          && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 19, a2) == 1 )
        {
          *a4 = this; /*0x737a67*/
          if ( (*(int (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)this + 636))(this, 18, a4, a2) != 1 ) /*0x737a7a*/
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 3, a2); /*0x737a83*/
        }
        result = 1; /*0x737a8c*/
      }
      else
      {
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 1152))(this, a2, 1); /*0x73794c*/
        result = 14; /*0x737955*/
      }
      break; /*0x737a95*/
    case 15:
      if ( !*(_DWORD *)(*(_DWORD *)(this + 1732) + 1504) /*0x7375ad*/
        || !a2
        || !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), a2) )
      {
        goto LABEL_28; /*0x7375b4*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 468))(this) ) /*0x7375ba*/
      {
        result = 0; /*0x7375c7*/
      }
      else
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 444))(this); /*0x7375d4*/
        if ( Cell::IsBridge(v8) ) /*0x7375dc*/
        {
          result = 0; /*0x7375e8*/
        }
        else if ( BuildingClass::IsBeingRepairedOrCaptured(a2) /*0x737616*/
               || (*(_BYTE *)(a2 + 20) & 4) != 0 && *(_DWORD *)(a2 + 1684)
               || *(_DWORD *)(a2 + 700) && (unsigned __int8)CellClass::HasContent() )
        {
  LABEL_28:
          result = 0; /*0x73761f*/
        }
        else
        {
          v31 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x73763d*/
          v23 = (double)HouseClass::SumPowerDrain((int *)(this + 276)); /*0x737652*/
          if ( (double)v31 < v23 + *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 896) /*0x737698*/
            || *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732) + 904) )
          {
  LABEL_54:
            result = 10; /*0x73780f*/
          }
          else
          {
            result = 1; /*0x7376a1*/
          }
        }
      }
      break; /*0x7375cd*/
    case 21:
      v10 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x73779b*/
      if ( HouseClass::SumPowerDrain((int *)(this + 276)) == v10 ) /*0x7377a8*/
        Timer::StartDouble((_BYTE *)(this + 848), *(double *)(*(_DWORD *)(this + 1732) + 968)); /*0x7377c4*/
      return 5; /*0x7377d5*/
    case 22:
      FootClass::MissionDispatch((int *)this, (_DWORD *)a2, a3, a4); /*0x7376ba*/
      if ( *(_BYTE *)(this + 1711) || *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 904), &v25) == 0x4000 ) /*0x7376de*/
      {
        if ( !*(_DWORD *)(this + 1652) ) /*0x73771b*/
          WinAPI::Wrapper(-2147467261); /*0x73772a*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x737738*/
        {
          Member = Team::GetMember((_DWORD *)this, 0); /*0x737748*/
          if ( *(_BYTE *)(this + 1048) ) /*0x73774a*/
          {
            if ( Member /*0x737771*/
              && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6
              && (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 )
            {
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 21, Member); /*0x73777a*/
            }
          }
        }
        return 1; /*0x737783*/
      }
      else
      {
        IDA_LOWORD(a2) = 0x4000; /*0x7376e6*/
        if ( !*(_DWORD *)(this + 1652) ) /*0x7376e0*/
          WinAPI::Wrapper(-2147467261); /*0x7376f6*/
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 1652) + 76))(*(_DWORD *)(this + 1652), a2); /*0x737709*/
        return 1; /*0x73770f*/
      }
    case 23:
      v21 = *(_DWORD *)(this + 1732); /*0x737a98*/
      if ( *(_BYTE *)(v21 + 3598) || *(_BYTE *)(v21 + 3599) ) /*0x737aa8*/
      {
        if ( *(_BYTE *)(this + 1745) ) /*0x737ab2*/
        {
          v22 = *(_DWORD *)this; /*0x737abc*/
          *(_BYTE *)(this + 1745) = 0; /*0x737ac9*/
          (*(void (__thiscall **)(int, int *, int, _DWORD))(v22 + 372))(this, &dword_B1CFE8, 1, 0); /*0x737ad0*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 10, 0); /*0x737ade*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 512))(this) ) /*0x737ae8*/
            (*(void (__thiscall **)(int))(*(_DWORD *)this + 492))(this); /*0x737af6*/
        }
      }
      return FootClass::MissionDispatch((int *)this, (_DWORD *)a2, v4, a4); /*0x737af6*/
    case 36:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 468))(this) ) /*0x737460*/
        return 0; /*0x73746d*/
      v7 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this + 76))(this, v28, 0); /*0x737481*/
      if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v7) + 80) & 0x100) != 0 /*0x7374a0*/
        && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 188))(this, 0) )
      {
        return 10; /*0x7374ad*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 16 ) /*0x7374c6*/
        return 10; /*0x7374cb*/
      if ( *(_BYTE *)(this + 1048) ) /*0x7374d7*/
        return 10; /*0x7374e4*/
      return *(_BYTE *)(this + 1668) != 0xFF ? 10 : 1;
    default:
      return FootClass::MissionDispatch((int *)this, (_DWORD *)a2, v4, a4); /*0x737b11*/
  }
  return result; /*0x73746a*/
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

// ============================================================
// Phase 3: Movement
// ============================================================

// IDA: 0x7359F0 (CalcMoveTarget, 1730B)
// 0x7359f0
void UnitClass::CalcMoveTarget()
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

  if ( *(_DWORD *)(*((_DWORD *)g_PathClass_State + this->FootClass_field_684) + 4 * this->unknownBool685 + 48) != -1 ) /*0x735a20*/
  {
    v2 = (_DWORD *)this->GetCoords_0(); /*0x735a2f*/
    v3 = &this->FootClass_field_568; /*0x735a32*/
    v4 = Vector3::Subtract(v2, &v76, &this->parachute6); /*0x735a40*/
    Coord::Length(v4); /*0x735a47*/
    v5 = (_DWORD *)*((_DWORD *)g_PathClass_State + this->FootClass_field_684); /*0x735a5f*/
    v6 = (int *)this->GetCoords_0(&v82, &this->parachute6); /*0x735a69*/
    Height = Cell::GetHeight(v72, v6, &v83); /*0x735a71*/
    v8 = *(&this->currentMission3); /*0x735a76*/
    IDA_LODWORD(v72[0]) = *(_DWORD *)Height; /*0x735a7e*/
    v63 = Math::RoundToInt((double)v8->q678 * 1.5); /*0x735a93*/
    v65 = v5[10]; /*0x735a9a*/
    v74 = ((__int16)v65 << 8) + 128; /*0x735aae*/
    v9 = (__int16)v5[9]; /*0x735ab8*/
    v10 = (IDA_SHIWORD(v65) << 8) + 128; /*0x735abb*/
    v66 = v5[9]; /*0x735ac1*/
    v75 = (void *)v10; /*0x735aca*/
    v76 = 0; /*0x735ad9*/
    v79 = 0; /*0x735add*/
    v11 = v5[112]; /*0x735ae1*/
    v77 = (void **)((v9 << 8) + 128); /*0x735ae7*/
    v12 = (void *)((IDA_SHIWORD(v66) << 8) + 128); /*0x735af2*/
    v11 = v11; /*0x735af7*/
    Block = v12; /*0x735b01*/
    GroundHeight = Cell::GetGroundHeight(&v77); /*0x735b0a*/
    v68 = (Cell::GetGroundHeight(&v74) - GroundHeight) / v11; /*0x735b26*/
    if ( v69 > v63 ) /*0x735b30*/
    {
      v37 = v5[this->unknownBool685 + 12]; /*0x735d42*/
      v83 = *(&this->vtable49); /*0x735d48*/
      v84 = *(&this->uniqueId0); /*0x735d4f*/
      v38 = *(&this->uniqueId1); /*0x735d53*/
      IDA_LODWORD(v72[0]) = SLOWORD(v72[0]) - 0x3FFF; /*0x735d61*/
      v73 = (double)IDA_SLODWORD(v72[0]) * -0.00009587672516830327; /*0x735d6f*/
      v39 = IDA_HIDWORD(v73); /*0x735d77*/
      v71 = (double)v63; /*0x735d81*/
      v72[0] = (double)v84; /*0x735d8c*/
      v40 = Math::SinCos(v73); /*0x735d90*/
      IDA_LODWORD(v72[0]) = Math::RoundToInt(v72[0] - v40 * v71); /*0x735da8*/
      v41 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v39, IDA_LODWORD(v73)))); /*0x735dac*/
      v42 = Math::RoundToInt(v41 * v71 + (double)v83); /*0x735dbc*/
      Coord::Subtract(&v77, v42, IDA_SLODWORD(v72[0]), v38); /*0x735dcc*/
      v44 = v37 & 0x80000001; /*0x735ddd*/
      v43 = v44 == 0; /*0x735ddd*/
      v74 = (int)v77; /*0x735de3*/
      v75 = Block; /*0x735de7*/
      v76 = v79; /*0x735deb*/
      if ( v44 < 0 ) /*0x735def*/
        v43 = (((_BYTE)v44 - 1) | 0xFFFFFFFE) == -1; /*0x735df5*/
      if ( v43 ) /*0x735df6*/
        v45 = 256.0; /*0x735e00*/
      else
        v45 = 362.0386719675124; /*0x735df8*/
      v46 = Math::RoundToInt(v45); /*0x735e14*/
      v76 = v46; /*0x735e1d*/
      this->SetPositionAnimated(IDA_HIDWORD(v46), &v74); /*0x735e28*/
      return; /*0x735e35*/
    }
    v14 = *this; /*0x735b3c*/
    v15 = this->unknownBool685 + 1; /*0x735b3e*/
    this->unknownBool685 = v15; /*0x735b44*/
    v16 = v5[v15 + 12]; /*0x735b4c*/
    this->SetPositionAnimated(&this->parachute6); /*0x735b58*/
    if ( v16 != -1 ) /*0x735b64*/
    {
      v17 = Coord::Subtract( /*0x735b92*/
              &v83,
              dword_89F6D8[2 * (v16 & 7)] + *v3,
              *(&this->parachute7) + dword_89F6DC[2 * (v16 & 7)],
              *(&this->parachute8));
      v74 = *v17; /*0x735b99*/
      v75 = (void *)v17[1]; /*0x735ba5*/
      v76 = v17[2]; /*0x735bb2*/
      v18 = Coord::To_Cell(&MapClass_Instance, &this->parachute6); /*0x735bb6*/
      Coords = CellClass::GetCoords(v18, (int *)&v73); /*0x735bc2*/
      v20 = Coord::To_Cell(&MapClass_Instance, &v74); /*0x735bd3*/
      v21 = CellClass::GetCoords(v20, (int *)v72); /*0x735bda*/
      v22 = *v21 - *Coords + *v3; /*0x735bf2*/
      v23 = v21[1] - Coords[1] + *(&this->parachute7); /*0x735bf7*/
      v24 = *(&this->parachute8); /*0x735bf9*/
      *v3 = v22; /*0x735bfc*/
      *(&this->parachute7) = v23; /*0x735c00*/
      *(&this->parachute8) = v24; /*0x735c07*/
      *(&this->parachute8) += v68; /*0x735c16*/
      v25 = (int *)this->GetCoords_0(&v83); /*0x735c21*/
      v26 = (__int16)*(_DWORD *)Cell::GetHeight(v72, v25, &this->parachute6); /*0x735c36*/
      v83 = *(&this->vtable49); /*0x735c3b*/
      v84 = *(&this->uniqueId0); /*0x735c42*/
      v27 = *(&this->uniqueId1); /*0x735c4a*/
      IDA_LODWORD(v72[0]) = v63 - v69; /*0x735c5c*/
      v73 = (double)(v26 - 0x3FFF) * -0.00009587672516830327; /*0x735c6e*/
      v28 = IDA_HIDWORD(v73); /*0x735c76*/
      v64 = (double)(v63 - v69); /*0x735c80*/
      v70 = (double)v84; /*0x735c8b*/
      v29 = Math::SinCos(v73); /*0x735c8f*/
      IDA_LODWORD(v70) = Math::RoundToInt(v70 - v29 * v64); /*0x735ca7*/
      v30 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v28, IDA_LODWORD(v73)))); /*0x735cab*/
      v31 = Math::RoundToInt(v30 * v64 + (double)v83); /*0x735cbb*/
      Coord::Subtract(&v74, v31, IDA_SLODWORD(v70), v27); /*0x735ccb*/
      v33 = v16 & 0x80000001; /*0x735cdc*/
      v32 = v33 == 0; /*0x735cdc*/
      v77 = (void **)v74; /*0x735ce2*/
      Block = v75; /*0x735ce6*/
      v79 = v76; /*0x735cea*/
      if ( v33 < 0 ) /*0x735cee*/
        v32 = (((_BYTE)v33 - 1) | 0xFFFFFFFE) == -1; /*0x735cf4*/
      if ( v32 ) /*0x735cf5*/
        v34 = 256.0; /*0x735cff*/
      else
        v34 = 362.0386719675124; /*0x735cf7*/
      v35 = Math::RoundToInt(v34); /*0x735d13*/
      v36 = *this; /*0x735d18*/
      v79 = v35; /*0x735d1a*/
      this->SetPositionAnimated(&v77); /*0x735d27*/
      return; /*0x735d34*/
    }
  }
  v83 = *(&this->vtable49); /*0x735e40*/
  v84 = *(&this->uniqueId0); /*0x735e4c*/
  v85 = *(&this->uniqueId1); /*0x735e58*/
  v47 = Coord::To_Cell(&MapClass_Instance, &v83); /*0x735e64*/
  v48 = v47[57]; /*0x735e66*/
  if ( v48 ) /*0x735e6e*/
  {
    ObjectVector::Construct(&v77, 0, 0); /*0x735e7c*/
    v49 = v79; /*0x735e81*/
    v50 = 10; /*0x735e85*/
    v77 = &(void*)(void*)&DynamicVectorClass_ObjectClass___vftable; /*0x735e8c*/
    v82 = 10; /*0x735e94*/
    v81 = 0; /*0x735e98*/
    while ( 1 ) /*0x735ea2*/
    {
      if ( v81 < v49 ) /*0x735ea6*/
        goto LABEL_24; /*0x735ea6*/
      if ( (IDA_BYTE1(v80) || !v49) && v50 > 0 ) /*0x735eb6*/
        break; /*0x735eb6*/
  LABEL_26:
      v48 = *(_DWORD *)(v48 + 48); /*0x735ee1*/
      if ( !v48 ) /*0x735ee6*/
      {
        for ( i = 0; i < v81; ++i ) /*0x735ef0*/
        {
          v53 = (_DWORD *)*((_DWORD *)Block + i); /*0x735ef6*/
          if ( (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 1 /*0x735f0f*/
            || (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 15 )
          {
            if ( !v53[413] ) /*0x735f11*/
              WinAPI::Wrapper(-2147467261); /*0x735f1e*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v53[413] + 16))(v53[413]) ) /*0x735f2c*/
            {
              v54 = *v53; /*0x735f33*/
              v83 = 0; /*0x735f40*/
              v84 = 0; /*0x735f47*/
              v85 = 0; /*0x735f4e*/
              (*(void (__thiscall **)(_DWORD *, int *, int, int))(v54 + 372))(v53, &v83, 1, 1); /*0x735f55*/
            }
          }
        }
        this->Destru_vt337(0, 0); /*0x735f6a*/
        v77 = &(void*)(void*)&VectorClass_ObjectClass___vftable; /*0x735f74*/
        if ( Block && IDA_BYTE1(v80) ) /*0x735f8a*/
          RA2_OPDEL(Block); /*0x735f91*/
        return; /*0x735fa0*/
      }
      v50 = v82; /*0x735e9e*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v50 + v49, 0) ) /*0x735ec4*/
    {
  LABEL_24:
      v51 = v81++; /*0x735ecb*/
      *((_DWORD *)Block + v51) = v48; /*0x735eda*/
    }
    v49 = v79; /*0x735edd*/
    goto LABEL_26; /*0x735edd*/
  }
  v55 = *(&this->parachute8); /*0x735fb4*/
  IDA_LODWORD(v72[0]) = *(_DWORD *)(*((_DWORD *)g_PathClass_State + this->FootClass_field_684) + 40); /*0x735fba*/
  v85 = v55; /*0x735fbe*/
  v84 = (IDA_SWORD1(v72[0]) << 8) + 128; /*0x735fdb*/
  v83 = (SLOWORD(v72[0]) << 8) + 128; /*0x735fe3*/
  this->SetPositionAnimated(&v83); /*0x735fec*/
  v56 = *this; /*0x735ff2*/
  this->FootClass_field_684 = -1; /*0x735ff8*/
  this->ModifyCellTiles(1); /*0x735fff*/
  if ( (_DWORD *)*(&this->isAliveFlag1) == v47 ) /*0x73600b*/
  {
    v57 = *this; /*0x73600d*/
    v77 = 0; /*0x73601c*/
    Block = 0; /*0x736020*/
    v79 = 0; /*0x736024*/
    this->COMStub_Return0_93(&v77, 1, 1); /*0x736028*/
  }
  v58 = *this; /*0x736032*/
  this->q68B = 1; /*0x736038*/
  this->UpdateAI(2); /*0x73603f*/
  this->Destru_vt337(0, 1072693248); /*0x73604f*/
  v59 = (void *)*(&this->uniqueId0); /*0x736057*/
  v60 = *(&this->uniqueId1); /*0x73605a*/
  v77 = (void **)*(&this->vtable49); /*0x73605d*/
  Block = v59; /*0x736065*/
  v79 = v60; /*0x73606f*/
  v61 = (__int16 *)Coord::To_Cell(&MapClass_Instance, &v77); /*0x736073*/
  Type = InfantryClass::GetType(v61); /*0x73607a*/
  if ( Type ) /*0x736081*/
  {
    IDA_LOWORD(v72[0]) = (((unsigned __int16)*(_DWORD *)(Type + 44) << 13) - 24577) & 0xE000; /*0x7360a0*/
    FacingClass::Set_SyncLog(v72); /*0x7360a5*/
  }
}
// 0x741970
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
  if ( *(_BYTE *)(*(&this->currentMission3) + 3434) )
  {
    if ( !(_DWORD)a2 )
    {
      v4 = *(&this->isAliveFlag1);
      if ( v4 )
      {
        v5 = *(&this->u32_443);
        if ( v5 )
        {
          if ( v4 == v5
            || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 11
            && ((v6 = *(&this->isAliveFlag1)) != 0
              ? (v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(*(&this->isAliveFlag1)) == 11 ? v6 : 0)
              : (v7 = 0),
                *(_DWORD *)(v7 + 228) == *(&this->u32_443))
            || (IDA_LOWORD(v136) = 0x4000,
                Value = ProgressTimer::GetValue((_WORD *)&this->u32_710, &v138),
                IDA_LOWORD(v137) = *(_WORD *)ObjectClass::CalcTargetFacing(this, (int *)&v135, *(&this->u32_443))
                             - *(_WORD *)Value,
                UnitClass::CompareCoordinateMagnitude((__int16 *)&v136, (__int16 *)&v137)) )
          {
            if ( this->GetPrimaryOrFallback() != 1 )
              this->SetState(1);
            return;
          }
        }
      }
    }
  }
  if ( (_DWORD)a2 != *(&this->isAliveFlag1) || this->isTargetedByChrono )
  {
    v9 = this->Deployed;
    this->isTargetedByChrono = 0;
    if ( v9 )
    {
      if ( !*(&this->u32_442) )
      {
LABEL_366:
        FootClass::ClearPathIndex(this);
        return;
      }
    }
    else if ( this->Deploying || this->Undeploying )
    {
      goto LABEL_366;
    }
    if ( Team::AllMembersValid(this) )
    {
      if ( *(int *)(*(&this->currentMission3) + 1504) > 0 )
      {
        Member = Team::GetMember(this, 0);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 15 )
        {
          if ( !(_DWORD)a2 )
            goto LABEL_49;
          if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && !Array::Contains(this, a2) )
            this->ThunkTo159x4(3);
        }
      }
    }
    if ( (_DWORD)a2 )
    {
      if ( Team::AllMembersValid(this) )
      {
        if ( !this->GetPrimaryOrFallback() )
        {
          if ( this->voiceHandle )
          {
            v11 = Team::GetMember(this, 0);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 )
            {
              v12 = (_DWORD *)Team::GetMember(this, 0);
              if ( *(_BYTE *)(v12[433] + 3580) )
              {
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v12 + 1152))(v12, 0, 1);
                this->ThunkTo159x4(25);
                this->ThunkTo159x4(3);
              }
            }
          }
        }
      }
      v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 6 ? (int *)a2 : 0;
LABEL_36:
      v14 = *this;
      v137 = v13;
      if ( this->GetPrimaryOrFallback() == 16 || *(&this->uniqueId5) == 16 )
      {
        v15 = (__int16 *)this->GetCellCoords_Alt(&v138);
        v16 = *v15;
        IDA_LOWORD(v15) = IDA_HIWORD(DataGlobal_87F7E8[32686]) + v15[1];
        IDA_LOWORD(v135) = IDA_LOWORD(DataGlobal_87F7E8[32686]) + v16;
        IDA_HIWORD(v135) = (_WORD)v15;
        v136 = v135;
        v17 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v136);
        v18 = Cell::IsBridge(v17);
        if ( v18 )
        {
          if ( *(_BYTE *)(*(&this->currentMission3) + 3598) && v18[353] )
            BuildingClass::ClearAnims(v18, 10);
        }
      }
      if ( this->GetPrimaryOrFallback() != 7 && *(&this->uniqueId5) != 7
        || Team::AllMembersValid(this) )
      {
        *(&this->lastLayer6) = -1;
        goto LABEL_80;
      }
      v19 = AbstractClass::IsTechnoType((void *)a2);
      if ( v19 && (*(int (__thiscall **)(void *))(*(_DWORD *)v19 + 44))(v19) == 1 )
      {
        if ( (_DWORD)a2 )
          v20 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 1 ? a2 : 0;
        else
          v20 = 0;
        *(&this->needsRedraw0) = v20;
        TechnoClass::SetFocus(this, 0);
        v3 = 0;
        IDA_LODWORD(a2) = 0;
        goto LABEL_80;
      }
      if ( !v13 )
        goto LABEL_74;
      if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 && *(_BYTE *)(v13[328] + 5806) )
      {
        *(&this->needsRedraw0) = v13;
        TechnoClass::SetFocus(this, 0);
        v3 = 0;
        IDA_LODWORD(a2) = 0;
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
            this->ThunkTo159x4(3);
            v3 = 0;
            IDA_LODWORD(a2) = 0;
          }
          if ( *(_BYTE *)(v13[328] + 5801) )
          {
            if ( BuildingClass::GetHealthRatio(this) >= *(double *)(DataGlobal_87F7E8[7806] + 5880) )
            {
              this->ThunkTo159x4(3);
              v3 = 0;
            }
            else
            {
              v3 = 0;
              *(&this->needsRedraw0) = v13;
            }
            IDA_LODWORD(a2) = 0;
          }
          goto LABEL_80;
        }
        v21 = *(&this->isAliveFlag1);
        if ( this->ThunkTo636(14, v13) != 1 )
        {
          this->ThunkTo159x4(3);
          if ( !*(_BYTE *)(v13[328] + 5801) )
            goto LABEL_80;
          goto LABEL_69;
        }
        if ( *(_BYTE *)(v13[328] + 5811) && *(&this->isAliveFlag1) != v21 )
        {
          v3 = (__int16 *)*(&this->isAliveFlag1);
          IDA_LODWORD(a2) = v3;
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
        if ( this->ThunkTo636(2, a2) == 1
          && this->ThunkTo159x4(14) != 1 )
        {
          this->ThunkTo159x4(3);
        }
      }
LABEL_80:
      if ( v3 && *(_BYTE *)(*(&this->currentMission3) + 3372) )
      {
        v22 = &this->Locomotor;
        if ( !*(&this->u32_A43) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v22 + 16))(*v22) )
        {
          v23 = *v22;
          v135 = 0;
          if ( !v23 )
            goto LABEL_90;
          v24 = StreamClass::Set2(&v135, &this->u32_A43);
          if ( v24 < 0 && v24 != -2147467262 )
            WinAPI::Wrapper(v24);
          if ( !v135 )
LABEL_90:
            WinAPI::Wrapper(-2147467261);
          (*(void (__stdcall **)(int *, _BYTE *))(*v135 + 12))(v135, v145);
          if ( !memcmp(v145, &stru_7E9A30, 0x10u) )
          {
            v25 = *(&this->isAliveFlag5);
            if ( *(&this->isAliveFlag7) < v25
              || (this->u8_5B9 || !v25)
              && (v26 = *(&this->isAliveFlag8), v26 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(&this->isAliveFlag3) + 8))(
                   &this->FootClass_DVC_5AC,
                   v26 + v25,
                   0) )
            {
              v27 = *(&this->isAliveFlag7);
              if ( v27 )
                memcpy((void *)(*(&this->isAliveFlag4) + 4), (const void *)*(&this->isAliveFlag4), 4 * v27);
              *(_DWORD *)*(&this->isAliveFlag4) = v3;
              ++*(&this->isAliveFlag7);
            }
            (*(void (__thiscall **)(_DWORD *))(*(&this->onBridge4) + 12))(&this->onBridge4);
            v28 = this->GetCell();
            v3 = (__int16 *)v28;
            IDA_BYTE4(a2) = 0;
            IDA_LODWORD(a2) = v28;
            if ( v28 )
            {
              if ( (*(_DWORD *)(v28 + 320) & 0x100) != 0
                && !this->CheckHeightDiff(0) )
              {
                v29 = *(&this->currentMission3);
                v134 = 0;
                v123 = *(_DWORD *)(v29 + 1460);
                TileIndex = MapClass::GetTileIndex(DataGlobal_87F7E8, v3 + 18, v123, 0);
                v136 = (int *)*LayerClass::Pathfinding_Find(
                                 DataGlobal_87F7E8,
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
                  v3 = (__int16 *)CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v136);
                  IDA_LODWORD(a2) = v3;
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
        (*(void (__thiscall **)(_DWORD *))(*(&this->onBridge4) + 12))(&this->onBridge4);
        goto LABEL_143;
      }
      if ( !*(_BYTE *)(*(&this->currentMission3) + 3372) )
        goto LABEL_128;
      if ( !IDA_BYTE4(a2) )
        goto LABEL_143;
      v126 = this->CheckHeightDiff(0);
      v32 = (_DWORD *)this->GetDeployCoords(v142, 0);
      IDA_LOWORD(v131) = *v32 / 256;
      IDA_WORD1(v131) = v32[1] / 256;
      v134 = v131;
      v33 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v134);
      IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v33);
      v34 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v142);
      IDA_LOWORD(v131) = *v34 / 256;
      IDA_WORD1(v131) = v34[1] / 256;
      ppv = v131;
      v35 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&ppv);
      v36 = IDA_BYTE1(v35[80]) & 1;
      v129 = Cell::IsBuildableAdvanced((int)v35);
      v130 = this->GetZAboveGround();
      if ( v126 )
      {
        if ( v36 )
        {
          RegionMap = GetRegionMap(DataGlobal_87F7E8, (__int16 *)&v134, 3, 0);
          if ( RegionMap == GetRegionMap(DataGlobal_87F7E8, (__int16 *)&ppv, 3, 0) && RegionMap != -1 )
          {
            if ( *(_BYTE *)(16 * RegionMap + DataGlobal_87F7E8[21] + 8)
              || (v38 = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&v134, (int)&v134),
                  IDA_LODWORD(v131) = v38,
                  IDA_LODWORD(v138) = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&ppv, (int)&ppv),
                  IDA_LODWORD(v131) = (__int16)(IDA_HIWORD(v38) - IDA_WORD1(v138)),
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
        IDA_LODWORD(a2) = BuildingClass::FindPlacementCells(this, a2);
LABEL_130:
        if ( !*(&this->u32_A43) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->u32_A43) + 152))(*(&this->u32_A43)) )
        {
          v41 = *(&this->onBridge6);
          if ( *(&this->onBridge8) < v41
            || (this->u8_595 || !v41)
            && (v42 = *(&this->onBridge9), v42 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(&this->onBridge4) + 8))(&this->FootClass_DVC_588, v42 + v41, 0) )
          {
            v43 = *(&this->onBridge8);
            if ( v43 )
              memcpy((void *)(*(&this->onBridge5) + 4), (const void *)*(&this->onBridge5), 4 * v43);
            *(_DWORD *)*(&this->onBridge5) = a2;
            ++*(&this->onBridge8);
          }
          v142[0] = *(&this->vtable49);
          v142[1] = *(&this->uniqueId0);
          v142[2] = *(&this->uniqueId1);
          IDA_LODWORD(a2) = Coord::To_Cell(DataGlobal_87F7E8, v142);
        }
LABEL_143:
        if ( !*(_BYTE *)(*(&this->currentMission3) + 3284) || this->firingParticles || *(&this->u32_442) || this->isAttackedByLocomotor )
          goto LABEL_228;
        v44 = &this->Locomotor;
        v45 = Team::GetMember(this, 0);
        v134 = 0;
        if ( !*(&this->u32_A43) )
          goto LABEL_152;
        v46 = StreamClass::Set2(&v134, &this->u32_A43);
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
              v64 = &this->Locomotor;
              if ( !*(&this->u32_A43) )
                WinAPI::Wrapper(-2147467261);
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v64 + 16))(*v64) )
              {
                v65 = *v64;
                v134 = 0;
                if ( !v65 )
                  goto LABEL_240;
                Checked = (int (__stdcall ***)(_DWORD, void *, __int64 *))this->Stream_19D.GetChecked();
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
                if ( !memcmp(v146, &stru_7E9A50, 0x10u) && !this->GetZAboveGround() )
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
                  if ( this->CheckHeightDiff(0) )
                    goto LABEL_251;
                  v72 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int64 *))(*(_DWORD *)a2 + 72))(a2, &v138);
                  if ( (*((_DWORD *)Coord::To_Cell(DataGlobal_87F7E8, v72) + 80) & 0x100) != 0 )
                    goto LABEL_251;
                  v73 = (_DWORD *)this->GetDeployCoords(&v131, 0);
                  v74 = Coord::To_Cell(DataGlobal_87F7E8, v73);
                  if ( !Cell::IsBuildableAdvanced((int)v74) )
                    goto LABEL_251;
                  v75 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int16 *))(*(_DWORD *)a2 + 72))(a2, v143);
                  v76 = Coord::To_Cell(DataGlobal_87F7E8, v75);
                  if ( !Cell::IsBuildableAdvanced((int)v76)
                    || (v77 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 72))(a2),
                        IDA_LOWORD(v132) = *v77 / 256,
                        IDA_HIWORD(v132) = v77[1] / 256,
                        v78 = *this,
                        v137 = v132,
                        v79 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *, int **))(v78 + 448))(
                                           this,
                                           &v130,
                                           &v137),
                        !BuildingTypeClass::IsPlacementValid(this, v79, v143)) )
                  {
LABEL_251:
                    v80 = *(&this->u32_A43);
                    v81 = (int **)(&this->u32_A43);
                    v130 = 0;
                    if ( v80 )
                    {
                      v82 = (int (__stdcall ***)(_DWORD, void *, __int64 *))this->Stream_19D.GetChecked();
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
                        (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v86 + 16))(v86, &this->u32_A43);
                      }
                    }
                    IDA_LODWORD(v131) = 0;
                    InstanceCOM = CreateInstanceCOM((void *)&v131, (void *)&stru_7E9A30, 0, 7);
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
                      v138 = this->q027;
                      v139 = *(&this->uniqueId1);
                      if ( !*v81 )
                        WinAPI::Wrapper(-2147467261);
                      v96 = *v81;
                      v97 = **v81;
                      v98 = (unsigned __int8 *)Coord::To_Cell(DataGlobal_87F7E8, &v138);
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
              if ( this->ThunkTo636(2, v99) == 1 )
              {
                if ( this->ThunkTo159x4(14) == 1 )
                {
                  FootClass::AssignDestination((int)this, a2, IDA_SHIDWORD(a2));
LABEL_315:
                  *(&this->lastLayer6) = -1;
                  return;
                }
                this->ThunkTo159x4(3);
                v100 = 0;
                IDA_LODWORD(a2) = 0;
                goto LABEL_309;
              }
            }
            v100 = (void *)a2;
LABEL_309:
            if ( *(_BYTE *)(v99[328] + 5803)
              && (!Team::AllMembersValid(v99) || (_DWORD *)Team::GetMember(v99, 0) == this)
              && this->ThunkTo636(2, v99) == 1 )
            {
              if ( this->ThunkTo159x4(14) == 1 )
              {
                FootClass::AssignDestination((int)this, (int)v100, IDA_SHIDWORD(a2));
                goto LABEL_315;
              }
              this->ThunkTo159x4(3);
              v100 = 0;
              IDA_LODWORD(a2) = 0;
            }
LABEL_318:
            v101 = (int *)Team::GetMember(this, 0);
            if ( v101
              && (*(int (__thiscall **)(int *))(*v101 + 44))(v101) == 6
              && *(_BYTE *)(v101[328] + 5821)
              && *(&this->uniqueId3) != 7 )
            {
              if ( *(&this->u32_442) )
              {
                this->ThunkTo159x4(3);
              }
              else
              {
                v102 = v101 + 39;
                v103 = *v102;
                v104 = v102[1];
                v144 = v102[2];
                IDA_LOWORD(v138) = v103 / 256;
                IDA_WORD1(v138) = v104 / 256;
                IDA_LOWORD(v137) = v138 + 4;
                IDA_HIWORD(v137) = IDA_WORD1(v138) + 1;
                IDA_LODWORD(v138) = v137;
                if ( v100 != CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v138) )
                {
                  (*(void (__thiscall **)(_DWORD *))(*(&this->isAliveFlag3) + 12))(&this->isAliveFlag3);
                  (*(void (__thiscall **)(_DWORD *))(*(&this->onBridge4) + 12))(&this->onBridge4);
                  if ( v100 )
                    BuildingClass::AddToProductionQueue((int)this, (int)v100);
                  return;
                }
              }
            }
            if ( !v99 )
              goto LABEL_345;
            v105 = *(&this->currentMission3);
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
            if ( this->StubReturn1() != 1 )
              goto LABEL_345;
            v109 = *(&this->currentMission3);
            if ( !*(_BYTE *)(v109 + 3598) && !*(_BYTE *)(v109 + 3599) )
              goto LABEL_345;
            if ( this->GetPrimaryOrFallback() == 16 )
              goto LABEL_345;
            if ( (int *)Team::GetMember(this, 0) == v99
              || Team::AllMembersValid(v99)
              || this->ThunkTo636(2, v99) != 1
              || this->GetPrimaryOrFallback() == 7
              || this->GetPrimaryOrFallback() == 10 )
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
              IDA_LOWORD(v137) = v115 / 256;
              v117 = v116;
              v118 = v113[1];
              IDA_HIWORD(v137) = v117 / 256;
              IDA_LODWORD(v138) = v137;
              v119 = *v113;
              v144 = v113[2];
              IDA_LOWORD(v137) = v119 / 256;
              IDA_HIWORD(v137) = v118 / 256;
              v120 = *(&this->currentMission3);
              v135 = v137;
              v124 = *(_DWORD *)(v120 + 1460);
              v121 = MapClass::GetTileIndex(DataGlobal_87F7E8, (__int16 *)&v138, v124, 0);
              v137 = (int *)*LayerClass::Pathfinding_Find(
                               DataGlobal_87F7E8,
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
                IDA_LODWORD(a2) = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v137);
                goto LABEL_345;
              }
            }
            else
            {
              this->MissionDispatch(7, 0);
            }
            IDA_LODWORD(a2) = 0;
LABEL_345:
            if ( !*(&this->u32_A43) )
              WinAPI::Wrapper(-2147467261);
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->u32_A43) + 96))(*(&this->u32_A43))
              && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              v110 = this->GetCellCoords();
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
                  if ( !*(&this->u32_A43) )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->u32_A43) + 88))(*(&this->u32_A43));
                }
              }
            }
LABEL_365:
            FootClass::AssignDestination((int)this, a2, IDA_SHIDWORD(a2));
            return;
          }
LABEL_182:
          if ( memcmp(v143, &stru_7E9A30, 0x10u) )
          {
            v52 = *v44;
            v130 = 0;
            if ( v52 )
            {
              v53 = StreamClass::Set(&v130, &this->u32_A43);
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
                  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v54 + 16))(v54, &this->u32_A43);
                }
              }
            }
            ppv = 0;
            v55 = CreateInstanceCOM((void *)&ppv, (void *)&stru_7E9A30, 0, 7);
            if ( v55 < 0 && v55 != -2147467262 )
              WinAPI::Wrapper(v55);
            if ( !ppv )
              WinAPI::Wrapper(-2147467261);
            (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this);
            v56 = 0;
            IDA_LODWORD(v131) = 0;
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
              IDA_LODWORD(v131) = v56;
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
          v50 = StreamClass::Set(&v130, &this->u32_A43);
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
              (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v51 + 16))(v51, &this->u32_A43);
              goto LABEL_179;
            }
          }
          if ( *v44 )
          {
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 72))(*v44);
            this->SetState(-1);
            this->MissionDispatch(7, 0);
            this->q6AC = 1;
            this->isTargetedByChrono = 1;
LABEL_179:
            if ( v130 )
              (*(void (__stdcall **)(int))(*(_DWORD *)v130 + 8))(v130);
            goto LABEL_181;
          }
        }
        WinAPI::Wrapper(-2147467261);
      }
LABEL_128:
      if ( !IDA_BYTE4(a2) )
        goto LABEL_143;
      (*(void (__thiscall **)(_DWORD *))(*(&this->onBridge4) + 12))(&this->onBridge4);
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

// IDA: 0x7414E0 (ApproachTarget_DisallowMoving, 435B)
// 0x7414e0
void *__thiscall UnitClass::ApproachTarget_DisallowMoving(_DWORD *this, char a2)
{
  int v3; // eax
  _BYTE *v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v10; // eax

  if ( (unsigned __int8)House::IsCurrentPlayer((void *)*(this + 135))
    || (v3 = *(this + 173)) == 0
    || *(this + 361)
    || (v4 = (*(_BYTE *)(v3 + 20) & 1) != 0 ? (_BYTE *)v3 : 0, !*(_BYTE *)(*(this + 433) + 3368))
    && !TechnoTypeClass::HasVoiceResponse((float *)this, 17)
    || ObjectClass::DistanceTo(this, *(this + 173)) >= g_RulesClass_Instance[1].PrerequisitePower[3]
    || !v4
    || !ObjectClass::IsCrushable(v4, (_DWORD **)this)
    || !*(_BYTE *)(*(this + 433) + 3373) && (unsigned __int8)House::IsCurrentPlayer((void *)*(this + 135)) )
  {
    if ( *(_BYTE *)(*(this + 433) + 3434) ) /*0x74159f*/
    {
      v5 = *this; /*0x7415af*/
      v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 740))(this, *(this + 173)); /*0x7415b4*/
      v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(v5 + 1016))(this, v6); /*0x7415c3*/
      if ( v7 ) /*0x7415c7*/
      {
        v8 = *(_DWORD *)(v7 + 160); /*0x7415c9*/
        if ( v8 ) /*0x7415d1*/
        {
          if ( *(_BYTE *)(v8 + 704) ) /*0x7415d3*/
          {
            if ( !a2 ) /*0x7415e3*/
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1); /*0x7415f2*/
            return (void *)*(this + 173); /*0x741600*/
          }
        }
      }
    }
    if ( !*(_BYTE *)(*(this + 433) + 3369) ) /*0x741609*/
      return FootClass::CalculateApproachPath(this, 0); /*0x741609*/
    v10 = (_BYTE *)*(this + 173); /*0x741613*/
    if ( !v10 || *(_BYTE *)(*(this + 135) + 492) && *((_BYTE *)this + 1292) ) /*0x74162d*/
      return FootClass::CalculateApproachPath(this, 0); /*0x74162d*/
    if ( (v10[20] & 2) == 0 || !ObjectClass::IsCrushable((v10[20] & 2) != 0 ? v10 : 0, (_DWORD **)this) )
      return FootClass::CalculateApproachPath(this, 0); /*0x741689*/
  }
  if ( !a2 ) /*0x741665*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1); /*0x741674*/
  return (void *)*(this + 173); /*0x7415fe*/
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

// IDA: 0x736990 (UpdateRotation_TurretFacing_EMP, 639B)
// 0x736990
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
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->q2B4; /*0x736997*/
  if ( v2 && !this->q6AF ) /*0x7369a5*/
  {
    v3 = *ObjectClass::CalcTargetFacing((void *)this, &v15, v2); /*0x7369c0*/
    v4 = this->Type; /*0x7369c2*/
    v3 = v3; /*0x7369c8*/
    if ( v4->qCA1 ) /*0x7369cc*/
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->u32_1942))(this); /*0x7369e0*/
      if ( IsNonNullPtr((_DWORD *)v5) && !*(_BYTE *)(v5->u32_12B ) /*0x7369f4*/
      {
        if ( v5->nextArrayIndex ) /*0x736a02*/
        {
          Value = ProgressTimer::GetValue((_WORD *)(&this->idleActionTimer4), &v15); /*0x736a19*/
          FacingClass::Update((char *)(&this->q1708), Value); /*0x736a20*/
        }
        else
        {
          FacingClass::Update((char *)(&this->q1708), &v3); /*0x736a2d*/
        }
      }
    }
    else if ( v4->q67C == 1 && !this->FootClass_field_5A4 ) /*0x736a38*/
    {
      if ( !this->Locomotor ) /*0x736a42*/
        WinAPI::Wrapper(-2147467261); /*0x736a51*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(&this->hijackerInfantryType2) + 16))(this->Locomotor) /*0x736a80*/
        && *(_WORD *)ProgressTimer::GetValue((_WORD *)(&this->idleActionTimer4), &v15) == (_WORD)v3 )
      {
        FacingClass::Update((char *)(&this->idleActionTimer4), &v3); /*0x736a89*/
      }
    }
  }
  v6 = this->Type; /*0x736a8e*/
  if ( v6->qD21 ) /*0x736a95*/
  {
    IDA_LOWORD(v3) = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(&this->q1708), &v15) >> 7) + 1) >> 1) /*0x736acb*/
                 + 8) << 8;
    FacingClass::Update((char *)(&this->q1708), &v3); /*0x736ad0*/
    goto LABEL_38; /*0x736ad0*/
  }
  this->q6AF = 0; /*0x736ad5*/
  if ( v6->qCA1 ) /*0x736adc*/
  {
    if ( TimerClass::Active(&this->q1708) ) /*0x736af2*/
    {
      if ( !this->Type->qD21 ) /*0x736b01*/
        this->q6AF = TimerClass::Active(&this->q1708); /*0x736b16*/
    }
    else if ( !this->q2B4 ) /*0x736b21*/
    {
      v7 = (int)g_CurrentFrame - this->turretChargeTimer >= g_RulesClass_Instance->AIIonCannonEngineerValue[0] + 5; /*0x736b52*/
      if ( this->turretRecoil ) /*0x736b54*/
        v7 = 0; /*0x736b5e*/
      if ( (!this->Type->qE13 || !this->Deployed) && v7 ) /*0x736b7c*/
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->u32_1942))(this); /*0x736b88*/
        v9 = IsNonNullPtr((_DWORD *)v8) && v8->nextArrayIndex; /*0x736b9d*/
        if ( !this->FootClass_field_5A4 || v9 ) /*0x736baf*/
        {
          v10 = ProgressTimer::GetValue((_WORD *)(&this->idleActionTimer4), &v15); /*0x736bd5*/
        }
        else
        {
          if ( this->isAttackedByLocomotor ) /*0x736bb1*/
            goto LABEL_38; /*0x736bb9*/
          v10 = ObjectClass::CalcTargetFacing((void *)this, &v15, this->FootClass_field_5A4); /*0x736bc3*/
        }
        FacingClass::Update((char *)(&this->q1708), v10); /*0x736bdd*/
      }
    }
  }
  LABEL_38:
  IDA_LOBYTE(v11) = this->Type->qCA1; /*0x736be2*/
  if ( (_BYTE)v11 ) /*0x736bf1*/
  {
    v11 = TimerClass::Active(&this->q1708); /*0x736bfe*/
    this->turretIsRotating = v11; /*0x736c03*/
  }
  return v11; /*0x736c09*/
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

// IDA: 0x743A50 (Scatter, 1622B)
// 0x743a50
void* UnitClass::Scatter(CellStruct* threatPos, bool a3, bool a4)
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
  int *v36; // [esp+4Ch] [ebp-40h] BYREF
  int v38; // [esp+54h] [ebp-38h] BYREF
  int v39; // [esp+58h] [ebp-34h] BYREF
  int v40; // [esp+5Ch] [ebp-30h] BYREF
  int v41; // [esp+60h] [ebp-2Ch] BYREF
  int v42; // [esp+64h] [ebp-28h] BYREF
  int v43; // [esp+68h] [ebp-24h]
  int v44; // [esp+6Ch] [ebp-20h]
  _BYTE v45[8]; // [esp+70h] [ebp-1Ch] BYREF
  _DWORD v47[4]; // [esp+7Ch] [ebp-10h] BYREF

  result = this->IsNotAircraftOrBuilding(); /*0x743a5c*/
  if ( !(_BYTE)result ) /*0x743a64*/
    return result; /*0x743a64*/
  v6 = *(&this->locationZ3); /*0x743a6a*/
  v7 = &this->q674; /*0x743a70*/
  v34 = 0; /*0x743a78*/
  if ( !v6 ) /*0x743a80*/
    goto LABEL_7; /*0x743a80*/
  v8 = StreamClass::Set2(&v34, &this->locationZ3); /*0x743a87*/
  if ( v8 < 0 && v8 != -2147467262 ) /*0x743a95*/
    WinAPI::Wrapper(v8); /*0x743a98*/
  if ( !v34 ) /*0x743aa3*/
  LABEL_7:
    WinAPI::Wrapper(-2147467261); /*0x743aaa*/
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v34 + 12))(v34, v47); /*0x743abb*/
  if ( !memcmp(v47, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x743ad0*/
    goto LABEL_66; /*0x743ad0*/
  if ( !MissionClass::GetMissionControl(this)[9] && !(_BYTE)a3 ) /*0x743aea*/
  {
    result = v34; /*0x743aec*/
    if ( v34 ) /*0x743af2*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743af2*/
    return result; /*0x743af2*/
  }
  if ( TimerClass::Active((int)(&this->q0586)) ) /*0x743b10*/
    goto LABEL_66; /*0x743b17*/
  if ( *(&this->isAliveFlag1) && !(_BYTE)a4 ) /*0x743b2d*/
  {
    result = v34; /*0x743b2f*/
    if ( v34 ) /*0x743b35*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743b35*/
    return result; /*0x743b35*/
  }
  if ( this->u32_6E0 || this->u32_6E1 || this->u32_6E2 ) /*0x743b67*/
  {
    result = v34; /*0x74408e*/
    if ( v34 ) /*0x744094*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x744094*/
    return result; /*0x744094*/
  }
  if ( !*v7 ) /*0x743b75*/
    WinAPI::Wrapper(-2147467261); /*0x743b7f*/
  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->alignmentPadding1F9)(*v7) ) /*0x743b89*/
  {
    result = v34; /*0x743b90*/
    if ( v34 ) /*0x743b96*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743b96*/
    return result; /*0x743b96*/
  }
  threatPos = threatPos; /*0x743bac*/
  if ( *threatPos == dword_B1CFE8 && threatPos[1] == dword_B1CFEC && threatPos[2] == dword_B1CFF0 ) /*0x743bda*/
  {
    a3 = 0; /*0x743be6*/
    v10 = (_DWORD *)this->GetCoordsEx(v45, 0); /*0x743bff*/
    v11 = (int)v10; /*0x743c02*/
    IDA_LOWORD(a4) = *v10 / 256; /*0x743c16*/
    IDA_LOBYTE(v11) = this->onBridge; /*0x743c25*/
    IDA_HIWORD(a4) = v10[1] / 256; /*0x743c30*/
    v39 = a4; /*0x743c3d*/
    threatPos = (int *)*LayerClass::Pathfinding_Find( /*0x743c79*/
                   &MapClass_Instance,
                   (int)&v38,
                   &v38,
                   (__int16 *)&v39,
                   *(_DWORD *)(*(&this->currentMission3) + 1660),
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
    if ( threatPos != (int *)g_UnitSelectionState ) /*0x743c7d*/
    {
      v12 = *this; /*0x743c91*/
      v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&threatPos); /*0x743c9b*/
      goto LABEL_65; /*0x743c9b*/
    }
    goto LABEL_66; /*0x743c7d*/
  }
  if ( MissionClass::GetMissionControl(this)[7] ) /*0x743ca7*/
  {
    result = v34; /*0x743cae*/
    if ( v34 ) /*0x743cb4*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743cb4*/
    return result; /*0x743cb4*/
  }
  if ( this->getAltitude() == 1 && this->u8_6D1 /*0x743d33*/
    || *(&this->isAliveFlag1) && (!(_BYTE)a4 || this->u32_6AF)
    || *(&this->u32_443) && !(_BYTE)a3 && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 1, 4) != 1 )
  {
    goto LABEL_66; /*0x743d33*/
  }
  a4 = *threatPos; /*0x743d43*/
  if ( a4 == dword_B1CFE8 && threatPos[1] == dword_B1CFEC && threatPos[2] == dword_B1CFF0 ) /*0x743d60*/
  {
    v17 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)&this->u32_710, &v40) >> 12) + 1) >> 1) & 7; /*0x743dfc*/
    v16 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2) + v17 - 1; /*0x743e04*/
  }
  else
  {
    v42 = *(&this->vtable49); /*0x743d70*/
    v43 = *(&this->uniqueId0); /*0x743d7b*/
    v44 = *(&this->uniqueId1); /*0x743d86*/
    v14 = Math::CalcAngle((double)threatPos[1] - (double)v43, (double)v42 - (double)a4); /*0x743d98*/
    IDA_LOWORD(a4) = Math::RoundToInt((v14 - 1.570796326794897) * -10430.06004058427); /*0x743dba*/
    v15 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x743dc5*/
    v16 = v15 + ((((unsigned int)a4 >> 12) + 1) >> 1) - 1; /*0x743dd4*/
  }
  v18 = *this; /*0x743e08*/
  v19 = v16 & 7; /*0x743e0f*/
  v19 = v19; /*0x743e16*/
  threatPos = 0; /*0x743e1a*/
  a3 = 0; /*0x743e24*/
  v20 = (_DWORD *)this->GetCoordsEx(v45, 0); /*0x743e2e*/
  IDA_LOWORD(a4) = *v20 / 256; /*0x743e41*/
  IDA_HIWORD(a4) = v20[1] / 256; /*0x743e59*/
  a4 = a4; /*0x743e62*/
  v21 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x743e71*/
  v22 = v21[283] + this->CheckGroundHeightDiff(0) != 0 ? 4 : 0;
  this->GetCoordsEx(v45, 0); /*0x743ea1*/
  v23 = v22 * dword_B1D0B8; /*0x743ea9*/
  v24 = 0; /*0x743eac*/
  v23 = v23; /*0x743eae*/
  v39 = 0; /*0x743eb2*/
  while ( 1 ) /*0x743ec3*/
  {
    v25 = ((_BYTE)v19 + v24) & 7; /*0x743ec3*/
    v26 = v25 & 7; /*0x743ec8*/
    v27 = IDA_HIWORD(Direction_X_Offsets[v26]); /*0x743eda*/
    IDA_LOWORD(v38) = IDA_LOWORD(Direction_X_Offsets[v26]) + a4; /*0x743ee2*/
    IDA_HIWORD(v38) = IDA_HIWORD(a4) + v27; /*0x743ef1*/
    a4 = v38; /*0x743efa*/
    v28 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x743f08*/
    if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&a4, 1) ) /*0x743f16*/
      goto LABEL_56; /*0x743f16*/
    v29 = *this; /*0x743f23*/
    LandHeight = ObjectClass::GetLandHeight(this); /*0x743f2c*/
    if ( this->COMStub_107(v28, v25, LandHeight, 0, 1) ) /*0x743f36*/
      goto LABEL_56; /*0x743f3e*/
    v31 = g_UnitSelectionState; /*0x743f53*/
    if ( threatPos == (int *)g_UnitSelectionState ) /*0x743f5a*/
      threatPos = (int *)a4; /*0x743f63*/
    if ( !g_UnitSelectionState ) /*0x743f6a*/
      break; /*0x743f6a*/
  LABEL_57:
    v24 = ++v39; /*0x743ff9*/
    if ( v39 >= 8 ) /*0x744005*/
      goto LABEL_60; /*0x744005*/
    IDA_LOBYTE(v19) = v19; /*0x743eb8*/
  }
  v43 = (IDA_SHIWORD(a4) << 8) + 128; /*0x743f94*/
  v42 = ((__int16)a4 << 8) + 128; /*0x743fa0*/
  v44 = v23; /*0x743fac*/
  v32 = Terrain::ClimbCheck(&v41, &v42); /*0x743fb8*/
  if ( a4 != *v32 || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4) + 80) & 0x100) != 0 ) /*0x743fea*/
  {
  LABEL_56:
    v31 = g_UnitSelectionState; /*0x743fec*/
    goto LABEL_57; /*0x743ff2*/
  }
  a3 = a4; /*0x744018*/
  v31 = g_UnitSelectionState; /*0x74401c*/
  LABEL_60:
  v33 = a3; /*0x744022*/
  v36 = (int *)a3; /*0x744029*/
  if ( (_WORD)a3 != (_WORD)v31 ) /*0x74402d*/
    goto LABEL_64; /*0x74402d*/
  if ( IDA_HIWORD(a3) == IDA_HIWORD(v31) ) /*0x744034*/
  {
    v33 = (unsigned __int16)threatPos; /*0x744036*/
    v36 = threatPos; /*0x74403a*/
  }
  if ( IDA___PAIR32__(IDA_HIWORD(v36), v33) != v31 ) /*0x744041*/
  {
  LABEL_64:
    this->MissionDispatch(2, 0); /*0x744053*/
    v12 = *this; /*0x744059*/
    v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v36); /*0x744068*/
  LABEL_65:
    this->Stub(v13, 1); /*0x74406d*/
  }
  LABEL_66:
  result = v34; /*0x744076*/
  if ( v34 ) /*0x74407c*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x744096*/
  return result; /*0x743afe*/
}
// 0x458a00
int UnitClass::IsCellBlockedByBridge(void* aP1)
{
  int v5; // eax
  int v6; // edi

  aP1 = aP1; /*0x458a02*/
  if ( Cell::IsBridge(aP1) != this ) /*0x458a11*/
    return 0; /*0x458a14*/
  v5 = *(&this->needsRedraw8); /*0x458a1a*/
  if ( *(_DWORD *)(v5 + 5664) == -1 ) /*0x458a27*/
    return 1; /*0x458a2a*/
  if ( *(_BYTE *)(v5 + 5803) && *(this + 185) ) /*0x458a3a*/
    return 1; /*0x458a45*/
  v6 = *((__int16 *)v2 + 18); /*0x458a51*/
  return *(__int16 *)this->GetCellCoords_Alt(&aP1) /*0x458a13*/
       + *(_DWORD *)(*(&this->q0808) + 5664) > v6;
}
// 0x4d03d0
int UnitClass::CompareCoordinateMagnitude(short* a2)
{
  return abs16(*this) >= (int)abs16(*a2); /*0x4d03eb*/
}
// IDA: 0x7178B0 (processEnterTarget, 14B)
// 0x7178b0
int UnitClass::processEnterTarget(int a2)
{
  return *(this + a2 + 517); /*0x7178bb*/
}
// IDA: 0x7468C0 (CheckForNearbyEnemies, 606B)
// 0x7468c0
int __thiscall UnitClass::CheckForNearbyEnemies(int *this)
{
  wchar_t *v2; // ecx
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
  _DWORD v20[4]; // [esp+16h] [ebp-10h] BYREF

  v17 = 0; /*0x7468c6*/
  if ( !this->CheckReloadState() ) /*0x7468cd*/
  {
    if ( !*(&this->u32_A43) ) /*0x7468d7*/
      WinAPI::Wrapper(-2147467261); /*0x7468e6*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->u32_A43) + 16))(*(&this->u32_A43)) /*0x746901*/
      && *(_BYTE *)(*(&this->currentMission3) + 3378) )
    {
      v17 = Team::GetMember(this, 0) == 0; /*0x746918*/
    }
  }
  if ( !*(&this->u32_A43) ) /*0x74691d*/
    WinAPI::Wrapper(-2147467261); /*0x74692c*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->u32_A43) + 16))(*(&this->u32_A43)) ) /*0x74693d*/
  {
  LABEL_30:
    this->CheckAction(); /*0x746aff*/
    goto LABEL_25; /*0x746b09*/
  }
  v2 = g_CurrentFrame; /*0x746948*/
  if ( (int)g_CurrentFrame % 8 ) /*0x74695c*/
  {
    v3 = *(_DWORD *)this->GetCellCoords_Alt(v20); /*0x746972*/
    v4 = (int *)this->GetCellCoords(); /*0x74697c*/
    IDA_LOBYTE(v20[0]) = Cell::IsInRange(v4); /*0x74698e*/
    v5 = 0; /*0x746992*/
    while ( 1 ) /*0x746996*/
    {
      v6 = v5 & 7; /*0x746996*/
      IDA_LOWORD(v18) = v3 + IDA_LOWORD(Direction_X_Offsets[v6]); /*0x7469b3*/
      IDA_HIWORD(v18) = IDA_HIWORD(v3) + IDA_HIWORD(Direction_X_Offsets[v6]); /*0x7469bf*/
      v18 = v18; /*0x7469ce*/
      v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18); /*0x7469d2*/
      ObjectByType = WTFMode::FindObjectByType(v7, v20[0]); /*0x7469de*/
      if ( ObjectByType ) /*0x7469e5*/
      {
        if ( !Object::IsAlliedWithObjectHouse((_DWORD *)*(&this->attachedTag5), (int)ObjectByType) ) /*0x7469ee*/
          break; /*0x7469ee*/
      }
      if ( ++v5 >= 8 ) /*0x7469ff*/
      {
        v2 = g_CurrentFrame; /*0x746a01*/
        goto LABEL_16; /*0x746a01*/
      }
    }
    TechLevel = g_RulesClass_Instance->TechLevel; /*0x746aed*/
    *(&this->nextObject0) = (int)g_CurrentFrame; /*0x746af3*/
    *(&this->nextObject1) = v20[2]; /*0x746af9*/
    *(&this->nextObject2) = TechLevel; /*0x746afc*/
    goto LABEL_30; /*0x746afc*/
  }
  LABEL_16:
  if ( !v17 ) /*0x746a0d*/
    goto LABEL_25; /*0x746a0d*/
  v9 = *(&this->nextObject0); /*0x746a13*/
  v10 = *(&this->nextObject2); /*0x746a19*/
  if ( v9 == -1 ) /*0x746a22*/
    goto LABEL_20; /*0x746a22*/
  v11 = (int)v2 - v9; /*0x746a24*/
  if ( v11 < v10 ) /*0x746a28*/
  {
    v10 -= v11; /*0x746a2a*/
  LABEL_20:
    if ( v10 ) /*0x746a2e*/
      goto LABEL_25; /*0x746a2e*/
  }
  v12 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_RulesClass_Instance->MinUnitCount - 1); /*0x746a30*/
  if ( v12 >= g_RulesClass_Instance->MinUnitCount - 1 ) /*0x746a5f*/
    v12 = g_RulesClass_Instance->MinUnitCount - 1; /*0x746a61*/
  v13 = *(_DWORD *)(g_RulesClass_Instance->Money + 4 * v12); /*0x746a69*/
  if ( v13 ) /*0x746a6e*/
  {
    v14 = *this; /*0x746a70*/
    *(&this->needsRedraw6) = v13; /*0x746a72*/
    *(&this->needsRedraw7) = 0; /*0x746a78*/
    this->q1D8 = 1; /*0x746a82*/
    *(&this->fallRate9) = (int)g_CurrentFrame; /*0x746a90*/
    this->RevealOwnCell(); /*0x746a96*/
  }
  LABEL_25:
  result = *(&this->u32_448); /*0x746a9c*/
  if ( result ) /*0x746aa7*/
  {
    if ( !this->CheckReloadState() /*0x746abd*/
      || (unsigned __int8)House::IsHumanPlayer((void *)*(&this->attachedTag5)) )
    {
      *(_BYTE *)(*(&this->u32_448) + 413) = 0; /*0x746b13*/
      return 0; /*0x746b11*/
    }
    else
    {
      *(_BYTE *)(*(&this->u32_448) + 413) = 1; /*0x746ad2*/
      return 1; /*0x746acc*/
    }
  }
  return result; /*0x746ad1*/
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

// IDA: 0x737C90 (OnUnderAttack, 2540B)
// 0x737c90
int UnitClass::OnUnderAttack(ObjectClass* attacker, int damage, int weaponIdx, CellStruct* sourceCell, int a8, bool a9, void* a10)
{
  int v11; // ebx
  _DWORD *v12; // eax
  int result; // eax
  int v14; // ebx
  int v15; // edi
  int *v16; // eax
  int v17; // eax
  int v18; // edx
  int v18; // edx
  int *v20; // edi
  void **v21; // eax
  void **v22; // eax
  int v23; // edx
  int v24; // ebp
  int v25; // edi
  int *v26; // eax
  int v27; // edi
  int v28; // ebx
  void *v29; // eax
  int v30; // eax
  bool v31; // bl
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // edx
  char v37; // al
  int *v38; // eax
  _DWORD *Value; // eax
  int v40; // ecx
  int v41; // eax
  void *v42; // eax
  int v43; // eax
  int v44; // edi
  void *v45; // eax
  _DWORD *v46; // edi
  int v47; // edx
  _DWORD *v48; // ecx
  int v49; // eax
  int v50; // eax
  __int16 *v51; // eax
  int v52; // eax
  _DWORD *v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // edi
  int v57; // ebp
  int v58; // [esp+2Ah] [ebp-4Ch]
  char v60; // [esp+45h] [ebp-31h]
  int v61; // [esp+46h] [ebp-30h] BYREF
  int v62; // [esp+4Ah] [ebp-2Ch] BYREF
  int v63; // [esp+4Eh] [ebp-28h]
  int v64; // [esp+52h] [ebp-24h] BYREF
  int v65; // [esp+56h] [ebp-20h]
  int v66; // [esp+5Ah] [ebp-1Ch]
  int v67; // [esp+62h] [ebp-14h] BYREF
  _BYTE v68[4]; // [esp+6Ah] [ebp-Ch] BYREF
  int v69; // [esp+6Eh] [ebp-8h] BYREF

  if ( !*(_BYTE *)(a1 + 131) || (v60 = 1, !(unsigned __int8)House::IsHumanPlayer(*(void **)(a1 + 540))) ) /*0x737ca8*/
    v60 = 0; /*0x737cb6*/
  a8 = a8; /*0x737cbb*/
  if ( !(_BYTE)a8 ) /*0x737cc1*/
  {
    Member = (_DWORD *)Team::GetMember((_DWORD *)a1, 0); /*0x737ccc*/
    if ( Member ) /*0x737cd0*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) == 6 ) /*0x737cdc*/
      {
        if ( *(_BYTE *)(Member[328] + 5821) ) /*0x737ce4*/
        {
          v61 = *(_DWORD *)(a1 + 156); /*0x737cfa*/
          v62 = *(_DWORD *)(a1 + 160); /*0x737d06*/
          v63 = *(_DWORD *)(a1 + 164); /*0x737d12*/
          v12 = Coord::To_Cell(&MapClass_Instance, &v61); /*0x737d16*/
          if ( Cell::IsBridge(v12) == Member ) /*0x737d24*/
            return 0; /*0x737d2e*/
        }
      }
    }
  }
  v58 = a8; /*0x737d47*/
  sourceCell = sourceCell; /*0x737d48*/
  result = FootClass::ProcessDeploy((_DWORD *)a1, (int)Member, attacker, damage, weaponIdx, sourceCell, v58, a9, a10); /*0x737d52*/
  a10 = (void *)result; /*0x737d5a*/
  if ( result != 5 )
  {
    if ( result != 4 ) /*0x737d6d*/
    {
      if ( result ) /*0x7384bb*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3598) ) /*0x7384c3*/
        {
          if ( *(void **)(a1 + 540) == HouseClass_Player ) /*0x7384da*/
          {
            v53 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a1 + 76))(a1, v68, 0); /*0x7384e7*/
            IDA_LOWORD(a8) = *v53 / 256; /*0x7384fa*/
            IDA_HIWORD(a8) = v53[1] / 256; /*0x738513*/
            if ( CreateTriggerClassIfFarEnough(4, a8, a8) ) /*0x73851d*/
              VoxClass::FindAndPlay(g_Str_EVA_OreMinerUnderAttack, -1); /*0x738530*/
          }
        }
      }
      if ( !*(_DWORD *)(a1 + 1492) /*0x738573*/
        && sourceCell
        && !*(_BYTE *)(a1 + 1048)
        && !Object::IsAlliedWithObjectHouse(*(_DWORD **)(a1 + 540), sourceCell)
        && !(unsigned __int8)House::IsCurrentPlayer(*(void **)(a1 + 540)) )
      {
        if ( (unsigned __int8)UnitClass::CanCrushTarget(sourceCell) ) /*0x738583*/
        {
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1152))(a1, sourceCell, 1); /*0x738593*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 2, 0); /*0x7385a1*/
          return (int)a10; /*0x7385b2*/
        }
        v54 = *(_DWORD *)(a1 + 1732); /*0x7385b5*/
        if ( (*(_BYTE *)(v54 + 3598) || *(_BYTE *)(v54 + 3599)) /*0x7385fd*/
          && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 696))(a1) > 0
          && BuildingClass::GetHealthRatio((int *)a1) <= *((double *)g_RulesClass_Instance + 736) )
        {
          v55 = *(_DWORD *)(a1 + 1732); /*0x7385ff*/
          v56 = 0; /*0x738605*/
          if ( *(int *)(v55 + 1016) > 0 ) /*0x73860f*/
          {
            while ( 1 ) /*0x738629*/
            {
              v57 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1328))( /*0x738629*/
                      a1,
                      *(_DWORD *)(*(_DWORD *)(v55 + 1004) + 4 * v56),
                      0,
                      0);
              if ( v57 ) /*0x73862d*/
                break; /*0x73862d*/
              v55 = *(_DWORD *)(a1 + 1732); /*0x73862f*/
              if ( ++v56 >= *(_DWORD *)(v55 + 1016) ) /*0x73863c*/
                return (int)a10; /*0x73863c*/
            }
            if ( !Array::Contains((int *)a1, v57) /*0x73865e*/
              && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 632))(a1, 2, v57) == 1 )
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 7, 0); /*0x738668*/
            }
          }
        }
      }
      return (int)a10; /*0x738668*/
    }
    v15 = *(_DWORD *)(a1 + 740); /*0x737d73*/
    if ( v15 )
    {
      v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 44))(*(_DWORD *)(a1 + 740)) == 6 ? (int *)v15 : 0;
      BuildingClass::UpdateDamageAnim(v16); /*0x737d97*/
    }
    v17 = *(_DWORD *)(a1 + 1732); /*0x737d9c*/
    if ( *(int *)(v17 + 3616) <= 0 ) /*0x737daf*/
    {
      if ( !*(_BYTE *)(v17 + 3278) /*0x737e2a*/
        || *(_BYTE *)(v17 + 3433)
        || *(_BYTE *)(v17 + 3479)
        || *(double *)(v17 + 880) < *((double *)g_RulesClass_Instance + 198)
        || *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 236) != 2
        || *(_BYTE *)(a1 + 625) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 952))(a1, sourceCell); /*0x737e68*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) <= 10 /*0x737ec0*/
          && *(_BYTE *)(a1 + 143)
          && (v20 = (int *)(a1 + 156),
              v61 = *(_DWORD *)(a1 + 156),
              v62 = *(_DWORD *)(a1 + 160),
              v63 = *(_DWORD *)(a1 + 164),
              *((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v61) + 59) == 2) )
        {
          v21 = (void **)RA2_OPNEW(0x1C8u); /*0x737ecb*/
          if ( v21 ) /*0x737ed5*/
          {
            v61 = *v20; /*0x737ee6*/
            v62 = *(_DWORD *)(a1 + 160); /*0x737eef*/
            v63 = *(_DWORD *)(a1 + 164); /*0x737efb*/
            AnimClass::ctor(v21, *((void **)g_RulesClass_Instance + 37), &v61, 0, 1, (void *)0x600, 0, 0); /*0x737f0e*/
          }
          v22 = (void **)RA2_OPNEW(0x1C8u); /*0x737f18*/
          if ( v22 ) /*0x737f22*/
          {
            v23 = *v20; /*0x737f24*/
            v24 = *(_DWORD *)(a1 + 160); /*0x737f26*/
            v25 = *(_DWORD *)(a1 + 164); /*0x737f29*/
            v61 = v23; /*0x737f30*/
            v62 = v24; /*0x737f4b*/
            v63 = v25 + 5; /*0x737f4f*/
            AnimClass::ctor( /*0x737f66*/
              v22,
              *(void **)(*((_DWORD *)g_RulesClass_Instance + 753) + 4 * *((_DWORD *)g_RulesClass_Instance + 756) - 4),
              &v61,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          TechnoClass::CreateDeathAnim(a1); /*0x737f6f*/
        }
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 952))(a1, sourceCell); /*0x737e39*/
        v19 = *(_DWORD *)a1; /*0x737e3f*/
        *(_DWORD *)(a1 + 108) = 1; /*0x737e43*/
        *(_BYTE *)(a1 + 144) = 1; /*0x737e4a*/
        *(_BYTE *)(a1 + 973) = 1; /*0x737e51*/
        (*(void (__thiscall **)(int))(v19 + 928))(a1); /*0x737e58*/
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 1752) == -1 ) /*0x737db8*/
      {
        v18 = *(_DWORD *)a1; /*0x737dba*/
        *(_DWORD *)(a1 + 1752) = 0; /*0x737dbf*/
        (*(void (__thiscall **)(int, int))(v18 + 952))(a1, sourceCell); /*0x737dc9*/
      }
      *(_DWORD *)(a1 + 108) = 1; /*0x737dcf*/
      *(_BYTE *)(a1 + 144) = 1; /*0x737dd6*/
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 292))(a1, 0); /*0x737f7a*/
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 1508) ) /*0x737f86*/
      TechnoClass::MarkPassengersAsExited(a1); /*0x737f92*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) > 208 ) /*0x737fa6*/
      TechnoClass::CleanupAll((_DWORD *)a1, sourceCell); /*0x737fab*/
    if ( !*(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3477) && *(_DWORD *)(a1 + 280) ) /*0x737fc4*/
    {
      do /*0x7381ae*/
      {
        v26 = (int *)FootClass::PopAndProcess((_DWORD *)a1); /*0x737fd4*/
        v27 = (int)v26; /*0x737fd9*/
        if ( !v26 ) /*0x737fdd*/
          break; /*0x737fdd*/
        v28 = *v26; /*0x737fe9*/
        v64 = *(_DWORD *)(a1 + 156); /*0x737ff7*/
        v65 = *(_DWORD *)(a1 + 160); /*0x738003*/
        v66 = *(_DWORD *)(a1 + 164); /*0x73800a*/
        v29 = Coord::To_Cell(&MapClass_Instance, &v64); /*0x738013*/
        v30 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int, int))(v28 + 428))(v27, v29, -1, -1, 0, 1, a2); /*0x73801b*/
        v31 = !v30 || v30 == 2; /*0x73802e*/
        ++g_IKnowWhatImDoing; /*0x738036*/
        v27->onBridge = *(_BYTE *)(a1 + 140); /*0x738041*/
        v32 = *(_DWORD *)(a1 + 156); /*0x73804a*/
        v33 = *(_DWORD *)(a1 + 164); /*0x73804d*/
        v63 = *(_DWORD *)(a1 + 160); /*0x738050*/
        v34 = *(_DWORD *)a1; /*0x738054*/
        v62 = v32; /*0x738056*/
        v64 = v33; /*0x73805c*/
        v35 = (*(int (__thiscall **)(int))(v34 + 444))(a1); /*0x738060*/
        v36 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v35 + 72))(v35, &v67) + 8); /*0x738072*/
        v37 = *(_BYTE *)(a1 + 140); /*0x738075*/
        v64 = v36; /*0x73807d*/
        if ( v37 ) /*0x738081*/
        {
          v38 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 88))(a1, &v69); /*0x73808c*/
          v62 = *v38; /*0x738091*/
          v63 = v38[1]; /*0x738098*/
          v64 = v38[2]; /*0x73809f*/
        }
        if ( (_BYTE)a9 /*0x7380ec*/
          || *(_BYTE *)(a1 + 143)
          || !v31
          || (Value = ProgressTimer::GetValue((_WORD *)(a1 + 904), &sourceCell),
              !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(v27->u32_D8)(
                 v27,
                 &v62,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          a2 = a8; /*0x73818e*/
          (*(void (__thiscall **)(int))(v27->radioLinks)(v27); /*0x738191*/
          (*(void (__thiscall **)(int))(v27->q0F8)(v27); /*0x73819b*/
        }
        else
        {
          v27->q11C = 0; /*0x7380fa*/
          if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 1508) && *(_DWORD *)(a1 + 540) != v27->owner ) /*0x738122*/
            (*(void (__thiscall **)(int, _DWORD))(v27->unknown_short_3C8)(v27, 0); /*0x73812a*/
          a2 = 0; /*0x738132*/
          (*(void (__thiscall **)(int, int *, int))(v27->radarFlashTimer)(v27, &dword_B1CFE8, 1); /*0x73813d*/
          if ( !(unsigned __int8)House::IsCurrentPlayer(*(void **)(v27 + 540)) ) /*0x738149*/
          {
            v40 = *(_DWORD *)(a1 + 1492); /*0x738152*/
            if ( v40 ) /*0x73815a*/
              TeamClass::AddMember(v40, v27, 0); /*0x73815f*/
            else
              (*(void (__thiscall **)(int, int, _DWORD))(v27->q1E8)(v27, 15, 0); /*0x73816e*/
          }
          if ( v60 ) /*0x73817a*/
            (*(void (__thiscall **)(int))(v27->ammoReloadTimer)(v27); /*0x738180*/
        }
        --g_IKnowWhatImDoing; /*0x7381a8*/
      }
      while ( *(_DWORD *)(a1 + 280) ); /*0x7381ae*/
    }
    if ( *(_DWORD *)(a1 + 824) != -1 ) /*0x7381c7*/
      goto LABEL_67; /*0x7381c7*/
    if ( (_BYTE)a9 ) /*0x7381cf*/
      goto LABEL_83; /*0x7381cf*/
    v41 = *(_DWORD *)(a1 + 1732); /*0x7381d5*/
    if ( !*(_BYTE *)(v41 + 3277) ) /*0x7381db*/
      goto LABEL_83; /*0x7381db*/
    if ( *(_DWORD *)(v41 + 1504) ) /*0x7381e9*/
      goto LABEL_83; /*0x7381e9*/
    a8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646); /*0x738214*/
    if ( (double)a8 * 4.656612877414201e-10 >= *((double *)g_RulesClass_Instance + 184) ) /*0x73822d*/
      goto LABEL_83; /*0x73822d*/
    if ( *(_DWORD *)(a1 + 824) == -1 ) /*0x738239*/
    {
      v44 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 780))(a1); /*0x738273*/
      if ( !v44 ) /*0x738277*/
        goto LABEL_83; /*0x738277*/
      v45 = RA2_OPNEW(0x6F0u); /*0x738282*/
      if ( !v45 ) /*0x73828c*/
        goto LABEL_83; /*0x73828c*/
      v43 = InfantryClass::Construct((int)v45, v44, *(IUnknown **)(a1 + 540)); /*0x73829c*/
    }
    else
    {
  LABEL_67:
      v42 = RA2_OPNEW(0x6F0u); /*0x738240*/
      if ( !v42 ) /*0x73824a*/
        goto LABEL_83; /*0x73824a*/
      v43 = InfantryClass::Construct( /*0x738267*/
              (int)v42,
              *((_DWORD *)Factory_ExitCellTable + *(_DWORD *)(a1 + 824)),
              *(IUnknown **)(a1 + 540));
    }
    v46 = (_DWORD *)v43; /*0x7382a1*/
    if ( v43 ) /*0x7382a5*/
    {
      v43->q08C = *(_BYTE *)(a1 + 140); /*0x7382b7*/
      v64 = *(_DWORD *)(a1 + 156); /*0x7382c1*/
      v65 = *(_DWORD *)(a1 + 160); /*0x7382ca*/
      v47 = *(_DWORD *)v43; /*0x7382ce*/
      v66 = *(_DWORD *)(a1 + 164); /*0x7382d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int *, _DWORD, int))(v47 + 216))(v43, &v64, 0, a2) ) /*0x7382dc*/
      {
        v46[27] = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 5, *(_DWORD *)(v46[432] + 160) / 2); /*0x73830f*/
        (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*v46 + 372))(v46, &dword_B1CFE8, 1, 0); /*0x73831f*/
        if ( (unsigned __int8)House::IsCurrentPlayer(*(void **)(a1 + 540)) ) /*0x73832b*/
          (*(void (__thiscall **)(_DWORD *, int))(*v46 + 488))(v46, 5); /*0x73834c*/
        else
          (*(void (__thiscall **)(_DWORD *, int))(*v46 + 488))(v46, 15); /*0x73833c*/
        if ( v60 ) /*0x738358*/
          (*(void (__thiscall **)(_DWORD *))(*v46 + 332))(v46); /*0x73835e*/
        v48 = *(_DWORD **)(a1 + 52); /*0x738364*/
        if ( v48 && TechnoClass::HasAnyMission(v48) ) /*0x73836b*/
          ObjectClass::SetReference(v46, *(_DWORD *)(a1 + 52)); /*0x73837a*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v46 + 32))(v46, 1); /*0x738387*/
      }
    }
  LABEL_83:
    v49 = *(_DWORD *)(a1 + 1732); /*0x73838a*/
    if ( *(_BYTE *)(v49 + 3610) /*0x7383c6*/
      && (*((_BYTE *)g_ScenarioClass_Instance + 13489) && !*(_BYTE *)(v49 + 3220)
       || *((_BYTE *)g_ScenarioClass_Instance + 13477) && *(_BYTE *)(v49 + 3220)) )
    {
      v50 = *(_DWORD *)a1; /*0x7383f5*/
      a8 = 0; /*0x7383fa*/
      v51 = (__int16 *)(*(int (__thiscall **)(int, int *))(v50 + 440))(a1, &sourceCell); /*0x73840a*/
      v52 = *LayerClass::Pathfinding_Find( /*0x738423*/
               &MapClass_Instance,
               (int)&a9,
               &a9,
               v51,
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
      a8 = v52; /*0x73842c*/
      if ( v52 != g_UnitSelectionState ) /*0x738430*/
      {
        if ( Crates ) /*0x738448*/
          BuildingClass::SearchPlacement(&MapClass_Instance, v52, 20); /*0x738452*/
      }
    }
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3477) ) /*0x73845d*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 988))(a1, 0) ) /*0x73846d*/
      {
  LABEL_93:
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 248))(a1); /*0x73847b*/
        return (int)a10; /*0x738490*/
      }
    }
    else if ( !*(_BYTE *)(a1 + 973) ) /*0x738493*/
    {
      goto LABEL_93; /*0x73849b*/
    }
    return (int)a10; /*0x73866e*/
  }
  return result; /*0x737d26*/
}
// ============================================================
// Phase 3: Weapon Switching
// ============================================================

// IDA: 0x70DC70 (SetTurret, 110B)
// 0x70dc70
int UnitClass::SetTurret(unsigned int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70dc76*/
  if ( !*(_BYTE *)(result + 2064) ) /*0x70dc7c*/
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x70dc98*/
    if ( a2 > 0x11 ) /*0x70dc8c*/
    {
      result = UnitClass::processEnterTarget(0); /*0x70dcc4*/
      *(this + 73) = result; /*0x70dcc9*/
      *(this + 78) = 0; /*0x70dccf*/
    }
    else
    {
      result = UnitClass::processEnterTarget(a2); /*0x70dca0*/
      *(&this->referenceCount8) = a2; /*0x70dca5*/
      *(&this->referenceCount3) = result; /*0x70dcab*/
    }
  }
  return result; /*0x70dcb1*/
}
// 0x73f0a0
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
  unsigned int v74; // [esp+64h] [ebp-60h]
  unsigned int v75; // [esp+68h] [ebp-5Ch]
  int v76; // [esp+6Ch] [ebp-58h] BYREF
  int v77; // [esp+70h] [ebp-54h] BYREF
  int v78; // [esp+74h] [ebp-50h] BYREF
  int v79; // [esp+78h] [ebp-4Ch] BYREF
  int v81; // [esp+80h] [ebp-44h]
  int v82; // [esp+84h] [ebp-40h]
  int v83; // [esp+88h] [ebp-3Ch]
  int v84; // [esp+8Ch] [ebp-38h]
  int v85; // [esp+90h] [ebp-34h]
  int v87; // [esp+98h] [ebp-2Ch]
  _BYTE v89[12]; // [esp+A0h] [ebp-24h] BYREF
  _BYTE v90[12]; // [esp+ACh] [ebp-18h] BYREF
  _BYTE v91[12]; // [esp+B8h] [ebp-Ch] BYREF

  v63 = (*(_DWORD *)(a2 + 320) & 0x100) != 0 /*0x73f0e1*/
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((IDA_HIDWORD(v7) ^ v7) - IDA_HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84); /*0x73f0f3*/
  v64 = *(_BYTE *)(a2 + 292); /*0x73f0f6*/
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0; /*0x73f103*/
  v69 = v8; /*0x73f105*/
  v65 = v9; /*0x73f109*/
  Type = InfantryClass::GetType((__int16 *)a2); /*0x73f112*/
  v11 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 3580); /*0x73f11a*/
  if ( v11 == -1 ) /*0x73f123*/
    goto LABEL_26; /*0x73f123*/
  v12 = *(_DWORD *)(a2 + 236); /*0x73f130*/
  if ( v12 != 10 ) /*0x73f139*/
    goto LABEL_19; /*0x73f139*/
  v13 = *((_DWORD *)g_FrameCounter + *(_DWORD *)(a2 + 56)); /*0x73f14a*/
  v14 = *(_DWORD *)(v13 + 740); /*0x73f14d*/
  if ( v14 == 5 && *(_DWORD *)(v13 + 744) == 3 || v14 == 4 && *(_DWORD *)(v13 + 744) == 3 ) /*0x73f16d*/
  {
    if ( *(_BYTE *)(a2 + 282) != 2 ) /*0x73f17d*/
      return 7; /*0x73f18e*/
    goto LABEL_19; /*0x73f17d*/
  }
  if ( v14 != 3 || *(_DWORD *)(v13 + 744) != 4 && *(_DWORD *)(v13 + 744) != 5 ) /*0x73f1aa*/
  {
  LABEL_19:
    v16 = a2; /*0x73f1ce*/
    goto LABEL_20; /*0x73f1ce*/
  }
  v16 = a2; /*0x73f1ac*/
  if ( *(_BYTE *)(a2 + 282) != 6 ) /*0x73f1ba*/
    return 7; /*0x73f1cb*/
  LABEL_20:
  if ( v12 != v11 && v12 != 10 ) /*0x73f1dc*/
  {
    v17 = v16->q044; /*0x73f1de*/
    if ( v17 < 237 || v17 > 238 || a4 == v16->u32_46C ) /*0x73f1fd*/
      return 7; /*0x73f20e*/
  }
  LABEL_26:
  if ( a3 == 8 ) /*0x73f21b*/
  {
    if ( Type && *(_DWORD *)(Type + 40) ) /*0x73f22b*/
      return 0; /*0x73f22f*/
    return 7; /*0x73f22f*/
  }
  if ( Type ) /*0x73f24d*/
  {
    v18 = abs32(a3 - *(_DWORD *)(Type + 44)); /*0x73f259*/
    if ( v18 > 2 && v18 < 6 && a3 != -1 ) /*0x73f268*/
      return 7; /*0x73f279*/
  }
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7); /*0x73f28a*/
  v20 = InfantryClass::GetType(NeighbourContent); /*0x73f296*/
  if ( v20 ) /*0x73f29a*/
  {
    v21 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v20 + 44)); /*0x73f2a6*/
    if ( v21 > 2 && v21 < 6 && a3 != -1 ) /*0x73f2b5*/
      return 7; /*0x73f2c6*/
  }
  a5 = a5; /*0x73f2c9*/
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(_DWORD *)this + 432))( /*0x73f2eb*/
             this,
             a2,
             a3,
             &a4,
             &v63,
             a5);
  if ( result != 7 )
  {
    v23 = a4; /*0x73f303*/
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 ) /*0x73f32a*/
    {
      v64 = *(_BYTE *)(a2 + 296); /*0x73f332*/
      v24 = (*(_DWORD *)(a2 + 296) & 0x20) != 0; /*0x73f342*/
      v69 = *(_DWORD *)(a2 + 88); /*0x73f344*/
      v65 = v24; /*0x73f348*/
    }
    if ( !g_IKnowWhatImDoing ) /*0x73f353*/
    {
      if ( !Type::CheckAmbiguity(&MapClass_Instance, a2, 1) /*0x73f37b*/
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 800))(this)
        && *(_BYTE *)(this + 981) )
      {
        return 7; /*0x73f394*/
      }
      v23 = a4; /*0x73f397*/
    }
    result = FootClass::Destru_vt107(a2, a3, v23, a5, a6); /*0x73f3b3*/
    v25 = result; /*0x73f3b8*/
    v68 = result; /*0x73f3bd*/
    if ( result != 7 )
    {
      v26 = a2; /*0x73f3d0*/
      v27 = *(_DWORD *)(a2 + 68); /*0x73f3d7*/
      if ( v27 != -1 ) /*0x73f3dd*/
      {
        v28 = *(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 * v27]; /*0x73f3e9*/
        if ( *(_BYTE *)(v28 + 682) /*0x73f40c*/
          && !(unsigned __int8)House::IsCurrentPlayer(*(void **)(this + 540))
          && !g_GameMode_Current[0] )
        {
          return 7; /*0x73f41d*/
        }
        if ( *(_BYTE *)(v28 + 680) ) /*0x73f420*/
        {
          if ( *(_BYTE *)(v28 + 557) /*0x73f46c*/
            && (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
            || *(_BYTE *)(v28 + 680) && *(_DWORD *)(*(_DWORD *)(this + 1732) + 1460) == 12 )
          {
            if ( !HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)) ) /*0x73f47f*/
              goto LABEL_74; /*0x73f47f*/
            goto LABEL_71; /*0x73f47f*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x73f48f*/
            return 7; /*0x73f48f*/
          v29 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) + 172); /*0x73f4a3*/
          if ( !*(_BYTE *)(v29 + 324) && (!*(_BYTE *)(v29 + 327) || *(_DWORD *)(v28 + 156) != 6) ) /*0x73f4c4*/
            return 7; /*0x73f4d5*/
          if ( HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)) ) /*0x73f4e2*/
          {
  LABEL_71:
            if ( v25 >= 4 ) /*0x73f4ee*/
              goto LABEL_74; /*0x73f4ee*/
            v25 = 4; /*0x73f4f0*/
            goto LABEL_73; /*0x73f4f0*/
          }
          if ( v25 < 5 ) /*0x73f511*/
          {
            v25 = 5; /*0x73f513*/
  LABEL_73:
            v68 = v25; /*0x73f4f5*/
          }
        }
      }
  LABEL_74:
      v67 = 0; /*0x73f4f9*/
      if ( v63 ) /*0x73f504*/
        v30 = *(_BYTE **)(a2 + 232); /*0x73f506*/
      else
        v30 = *(_BYTE **)(a2 + 228); /*0x73f51a*/
      if ( v30 )
      {
        while ( 1 )
        {
          if ( (_BYTE *)this == v30 ) /*0x73f52a*/
          {
            v65 = 0; /*0x73fc14*/
            v64 &= ~0x20u; /*0x73fc1b*/
            goto LABEL_153; /*0x73fc1f*/
          }
          v31 = *(_DWORD *)(this + 1692); /*0x73f530*/
          if ( v31 ) /*0x73f538*/
          {
            v32 = *(_DWORD *)(v31 + 40); /*0x73f53a*/
            if ( v32 ) /*0x73f53f*/
            {
              v33 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v32 + 440))(v32, &v76); /*0x73f550*/
              v34 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v30 + 440))(v30, &v77); /*0x73f559*/
              if ( *v34 == *v33 && v34[1] == v33[1] ) /*0x73f56f*/
                return 0; /*0x73f56f*/
              v26 = a2; /*0x73f575*/
            }
          }
          if ( Array::Contains((int *)this, (v30[20] & 1) != 0 ? (unsigned int)v30 : 0)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6
            && !(unsigned __int8)UnitClass::IsCellBlockedByBridge(v26) )
          {
            goto LABEL_153; /*0x73f5a2*/
          }
          if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3608) /*0x73f5d1*/
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1
            && *(_BYTE *)(*((_DWORD *)v30 + 433) + 3608) )
          {
            return 0; /*0x73f5d9*/
          }
          if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6 ) /*0x73f5e9*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 /*0x73f653*/
              && v30 == *(_BYTE **)(this + 1444)
              && *(_BYTE *)(*((_DWORD *)v30 + 328) + 5806)
              && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 468))(v30)
              || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 9
              && v30 == *(_BYTE **)(this + 1444)
              && *(_BYTE *)(*((_DWORD *)v30 + 328) + 5805)
              && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 468))(v30) )
            {
              return 0; /*0x73f65b*/
            }
            if ( *(_BYTE *)(*((_DWORD *)v30 + 328) + 5805) ) /*0x73f667*/
            {
              v35 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v89); /*0x73f67a*/
              IDA_LOWORD(v70) = *v35 / 256; /*0x73f68d*/
              IDA_HIWORD(v70) = v35[1] / 256; /*0x73f6a5*/
              v70 = v70; /*0x73f6ae*/
              v36 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v70) + 57); /*0x73f6bd*/
              if ( v36 ) /*0x73f6c5*/
              {
                while ( (_BYTE *)v36 != v30 ) /*0x73f6c9*/
                {
                  v36 = *(_DWORD *)(v36 + 48); /*0x73f6cf*/
                  if ( !v36 ) /*0x73f6d4*/
                    goto LABEL_105; /*0x73f6d4*/
                }
                return 0; /*0x73f248*/
              }
            }
  LABEL_105:
            v37 = (_BYTE *)*((_DWORD *)v30 + 328); /*0x73f6d6*/
            if ( v37[5815] ) /*0x73f6dc*/
            {
              if ( !BuildingClass::IsPoweredOn(v30) ) /*0x73f6e8*/
              {
                if ( (unsigned __int8)HouseClass::IsAlliedWith(*((void **)v30 + 135), *(void **)(this + 540)) ) /*0x73f702*/
                {
                  if ( v25 < 3 ) /*0x73f70e*/
                  {
                    v25 = 3; /*0x73f714*/
                    v68 = 3; /*0x73f719*/
                  }
                }
                else
                {
                  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x73f72e*/
                    return 7; /*0x73f72e*/
                  if ( v25 < 5 ) /*0x73f737*/
                  {
                    v25 = 5; /*0x73f73d*/
                    v68 = 5; /*0x73f742*/
                  }
                }
              }
              goto LABEL_153; /*0x73f71d*/
            }
            if ( (v37[5801] || v37[5803]) /*0x73f76d*/
              && Cell::IsBridge((_DWORD *)v26) == (_DWORD *)v30
              && !(unsigned __int8)UnitClass::IsCellBlockedByBridge(v26) )
            {
              goto LABEL_153; /*0x73f76d*/
            }
            v38 = (_BYTE *)*((_DWORD *)v30 + 328); /*0x73f77a*/
            if ( v38[5889] ) /*0x73f780*/
              goto LABEL_153; /*0x73f780*/
            if ( v38[5823] ) /*0x73f78e*/
            {
              v39 = *((_DWORD *)v30 + 390); /*0x73f798*/
              if ( v39 == 12 || v39 == 8 ) /*0x73f7aa*/
                goto LABEL_153; /*0x73f7aa*/
            }
            if ( v38[5824] ) /*0x73f7b0*/
            {
              if ( *(_BYTE *)(*((_DWORD *)v30 + 135) + 506) ) /*0x73f7c0*/
                return 7; /*0x73f7c8*/
              goto LABEL_153; /*0x73f7c8*/
            }
            if ( v38[5488] ) /*0x73f7d3*/
            {
              v40 = IDA_HIWORD(g_CellDirectionOffsets) + v26->u32_98; /*0x73f7ec*/
              IDA_LOWORD(v71) = g_CellDirectionOffsets + v26->q024; /*0x73f7f3*/
              IDA_HIWORD(v71) = v40; /*0x73f7fc*/
              v72 = v71; /*0x73f80b*/
              v41 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v72); /*0x73f80f*/
              if ( Cell::IsBridge(v41) != (_DWORD *)v30 ) /*0x73f81d*/
                goto LABEL_153; /*0x73f81d*/
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 /*0x73f844*/
            && v30 == *(_BYTE **)(this + 1444)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1 )
          {
            return 0; /*0x73f844*/
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11 && *(_BYTE **)(this + 536) == v30 ) /*0x73f85f*/
            return 7; /*0x73f85f*/
          if ( (v30[20] & 4) == 0 ) /*0x73f869*/
            break; /*0x73f869*/
          v42 = *((_DWORD *)v30 + 361); /*0x73f86b*/
          v72 = v30; /*0x73f871*/
          if ( !v42 && !TimerClass::Active((int)(v30 + 904)) ) /*0x73f87f*/
          {
            if ( !*((_DWORD *)v30 + 413) ) /*0x73f888*/
              WinAPI::Wrapper(-2147467261); /*0x73f897*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)v30 + 413) + 16))(*((_DWORD *)v30 + 413)) ) /*0x73f8aa*/
              goto LABEL_139; /*0x73f8aa*/
          }
          v66 = 1; /*0x73f8ac*/
  LABEL_140:
          if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v30) ) /*0x73f8c7*/
          {
            if ( v66 ) /*0x73f8da*/
            {
              v43 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v78) >> 12) + 1) >> 1) & 7; /*0x73f903*/
              v44 = *(_WORD *)ProgressTimer::GetValue((_WORD *)v30 + 452, &v79) + 0x7FFF; /*0x73f914*/
              v45 = *((_DWORD *)v30 + 39); /*0x73f91c*/
              IDA_LOWORD(v74) = v44; /*0x73f91e*/
              v45 = v45; /*0x73f923*/
              v87 = *((_DWORD *)v30 + 40); /*0x73f938*/
              v46 = *((_DWORD *)v30 + 41); /*0x73f93e*/
              v83 = *(_DWORD *)(this + 156); /*0x73f941*/
              v46 = v46; /*0x73f949*/
              v84 = *(_DWORD *)(this + 160); /*0x73f950*/
              v85 = *(_DWORD *)(this + 164); /*0x73f95e*/
              v47 = (((v74 >> 12) + 1) >> 1) & 7; /*0x73f96c*/
              v48 = Math::CalcAngle((double)v84 - (double)v87, (double)v45 - (double)v83); /*0x73f976*/
              IDA_LOWORD(v75) = Math::RoundToInt((v48 - 1.570796326794897) * -10430.06004058427); /*0x73f991*/
              if ( v43 == v47 ) /*0x73f996*/
              {
                v49 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v30 + 72))(v30, v90); /*0x73f9aa*/
                v50 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v91); /*0x73f9b6*/
                v51 = *v50 - *v49; /*0x73f9bd*/
                v52 = v50[1]; /*0x73f9bf*/
                v53 = v50[2]; /*0x73f9c2*/
                v51 = v51; /*0x73f9c5*/
                v54 = v49[2]; /*0x73f9d1*/
                v81 = v52 - v49[1]; /*0x73f9d4*/
                v82 = v53 - v54; /*0x73f9de*/
                v55 = Math::Sqrt( /*0x73fa03*/
                        (double)v51 * (double)v51
                      + (double)(v53 - v54) * (double)(v53 - v54)
                      + (double)v81 * (double)v81);
                if ( (int)Math::RoundToInt(v55) <= 511 && ((((v75 >> 12) + 1) >> 1) & 7) == v43 ) /*0x73fa26*/
                  return 7; /*0x73fa26*/
              }
              v72 = v72; /*0x73fa2c*/
              if ( v72[1718] && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v72 + 44))(v72) != 15 ) /*0x73fa44*/
                goto LABEL_150; /*0x73fa44*/
              if ( !*((_DWORD *)v72 + 413) ) /*0x73fa46*/
                WinAPI::Wrapper(-2147467261); /*0x73fa55*/
              if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)v72 + 413) + 164))(*((_DWORD *)v72 + 413)) ) /*0x73fa63*/
              {
  LABEL_150:
                if ( v68 < 2 ) /*0x73fa72*/
                  v68 = 2; /*0x73fa74*/
              }
            }
            else
            {
              if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6 ) /*0x73fae9*/
                return 7; /*0x73fae9*/
              if ( v25 < 6 ) /*0x73faf2*/
              {
                v25 = 6; /*0x73faf4*/
                v68 = 6; /*0x73faf9*/
                goto LABEL_153; /*0x73fafd*/
              }
            }
          }
          else
          {
            v57 = AbstractClass::IsTechno(v30); /*0x73fb01*/
            if ( v57 && v57[136] == 2 ) /*0x73fb11*/
            {
              if ( v25 < 1 ) /*0x73fb16*/
              {
                v25 = 1; /*0x73fb1c*/
                v68 = 1; /*0x73fb21*/
                goto LABEL_153; /*0x73fb25*/
              }
            }
            else if ( (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) /*0x73fb4a*/
                    || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
                   && ObjectClass::IsCrushable(v30, (_DWORD **)this) )
            {
              if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v30) ) /*0x73fb5a*/
              {
                v67 = 1; /*0x73fb67*/
                goto LABEL_153; /*0x73fb6c*/
              }
            }
            else
            {
              if ( !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) /*0x73fb90*/
                && !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3220) )
              {
                return 7; /*0x73fb90*/
              }
              v58 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30); /*0x73fb9a*/
              if ( v58 == 6 ) /*0x73fba0*/
              {
                if ( *(_BYTE *)(*((_DWORD *)v30 + 328) + 5814) ) /*0x73fc00*/
                  return 7; /*0x73fc08*/
              }
              else if ( v58 == 36 ) /*0x73fba5*/
              {
                v59 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 740))(this, v30); /*0x73fbac*/
                v60 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v59); /*0x73fbbd*/
                if ( !v60 ) /*0x73fbc1*/
                  return 7; /*0x73fbc1*/
                v61 = *(_DWORD *)(v60 + 172); /*0x73fbc7*/
                if ( !v61 || !*(_BYTE *)(v61 + 327) ) /*0x73fbd5*/
                  return 7; /*0x73fbdd*/
              }
              if ( v25 < 5 ) /*0x73fbe6*/
              {
                v25 = 5; /*0x73fbec*/
                v68 = 5; /*0x73fbf1*/
                goto LABEL_153; /*0x73fbf5*/
              }
            }
          }
          v25 = v68; /*0x73fa7c*/
          v26 = a2; /*0x73fa80*/
  LABEL_153:
          v30 = (_BYTE *)*((_DWORD *)v30 + 12); /*0x73fa87*/
          if ( !v30 ) /*0x73fa8c*/
            goto LABEL_154; /*0x73fa8c*/
        }
        v72 = 0; /*0x73f8b3*/
  LABEL_139:
        v66 = 0; /*0x73f8bb*/
        goto LABEL_140; /*0x73f8bb*/
      }
  LABEL_154:
      if ( !v63 && flt_89EA40[9 * *(_DWORD *)(v26 + 236) + *(_DWORD *)(*(_DWORD *)(this + 1732) + 1660)] == 0.0 ) /*0x73fac7*/
        return 7; /*0x73fadc*/
      if ( !v25 ) /*0x73fc26*/
      {
        if ( v67 ) /*0x73fc32*/
        {
          if ( v65 ) /*0x73fcfc*/
          {
            if ( !CellClass::FindBuilding((_DWORD *)v26, 0) ) /*0x73fd02*/
              return 2; /*0x73fd02*/
            Building = CellClass::FindBuilding((_DWORD *)v26, 0); /*0x73fd10*/
            if ( !ObjectClass::IsCrushable(Building, (_DWORD **)this) ) /*0x73fd17*/
              return 2; /*0x73fd2f*/
          }
        }
        else if ( (v64 & 0x3F) != 0 ) /*0x73fc3d*/
        {
          if ( v65 || v69 != -1 && HouseClass::IsAllied(*(_DWORD **)(this + 540), v69) ) /*0x73fc5f*/
          {
            return 2; /*0x73fd32*/
          }
          else if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) /*0x73fc84*/
                 && !TechnoTypeClass::HasVoiceResponse((float *)this, 17) )
          {
            if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3220) /*0x73fcc6*/
              || *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0)
              && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(
                                                     this,
                                                     0)
                                      + 160)
                          + 677) )
            {
              return 5; /*0x73fcf3*/
            }
            return 7; /*0x73fcdf*/
          }
        }
      }
      return v25; /*0x73fd38*/
    }
  }
  return result; /*0x73f17f*/
}
// 0x47c520
              && Cell::IsBridge((_DWORD *)v26) == (_DWORD *)v30
              {
                _DWORD *v1; // esi

                if ( !g_WTFMode ) /*0x47c528*/
                  return 0; /*0x47c528*/
                v1 = (_DWORD *)v26->u32_E4; /*0x47c52a*/
                if ( !v1 ) /*0x47c532*/
                  return 0; /*0x47c547*/
                while ( (*(int (__thiscall **)(_DWORD *))(*v1 + 44))(v1) != 6 ) /*0x47c53e*/
                {
                  v1 = (_DWORD *)v1[12]; /*0x47c540*/
                  if ( !v1 ) /*0x47c545*/
                    return 0; /*0x47c545*/
                }
                return v1; /*0x47c549*/
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
              v40 = IDA_HIWORD(DataGlobal_87F7E8[32682]) + *(_WORD *)(v26 + 38);
              IDA_LOWORD(v71) = IDA_LOWORD(DataGlobal_87F7E8[32682]) + *(_WORD *)(v26 + 36);
              IDA_HIWORD(v71) = v40;
              v72 = v71;
              v41 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v72);
              if ( Cell::IsBridge(v41) != (_DWORD *)v30 )
                goto LABEL_153;
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)&this->q0988))(this) == 7
            && v30 == *(_BYTE **)(&this->u32_904)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1 )
          {
            return 0;
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)&this->q0988))(this) == 11 && this->q086 == v30 )
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
          if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(&this->q0360), (int)v30) )
          {
            if ( v66 )
            {
              v43 = ((unsigned int)((*ProgressTimer::GetValue(&this->primaryFacing, &v78) >> 12) + 1) >> 1) & 7;
              v44 = *(_WORD *)ProgressTimer::GetValue((_WORD *)v30 + 452, &v79) + 0x7FFF;
              v45 = *((_DWORD *)v30 + 39);
              IDA_LOWORD(v74) = v44;
              v86 = v45;
              v87 = *((_DWORD *)v30 + 40);
              v46 = *((_DWORD *)v30 + 41);
              v83 = this->location;
              v88 = v46;
              v84 = this->q0A0;
              v85 = this->q0A4;
              v47 = (((v74 >> 12) + 1) >> 1) & 7;
              v48 = Math::CalcAngle((double)v84 - (double)v87, (double)v45 - (double)v83);
              IDA_LOWORD(v75) = Math::RoundToInt((v48 - 1.570796326794897) * -10430.06004058427);
              if ( v43 == v47 )
              {
                v49 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v30 + 72))(v30, v90);
                v50 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)&this->u32_1C2))(this, v91);
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
            else if ( (*(_BYTE *)(this->Type + 3368)
                    || TechnoClass::HasVoiceResponse(this, 17))
// 0x5f6cd0
                   && ObjectClass::IsCrushable(v30, (_DWORD **)this) )
                   {
                     if ( this /*0x5f6d2e*/
                       && *(_BYTE *)(((int (__thiscall *)(_DWORD **))(*this)[33])(this) + 3369)
                       && v30
                       && (*(v30 + 20) & 1) != 0
                       && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 132))(v30) + 3370)
                       && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) != 6
                       && !Object::IsAlliedWithObjectHouse(this[135], (int)v30)
                       && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 352))(v30) )
                     {
                       return 1; /*0x5f6d39*/
                     }
                     return *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 136))(v30) + 557) /*0x5f6d7b*/
                         && v30
                         && (*(v30 + 20) & 1) != 0
                         && !*(v30 + 676)
                         && !Object::IsAlliedWithObjectHouse(this[135], (int)v30)
                         && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 352))(v30);
                   }
            else
            {
              if ( !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0)
                && !*(_BYTE *)(this->Type + 3220) )
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
                v59 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)&this->q1280))(this, v30);
                v60 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)&this->q1946))(this, v59);
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
          a2 = a2;
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
        && *(float *)&DataGlobal_87F7E8[9 * *(_DWORD *)(a2 + 236) + 31894 + *(_DWORD *)(this->Type + 1660)] == 0.0 )
      {
        return 7;
      }
      if ( !v25 )
      {
        if ( v67 )
        {
          if ( v65 )
          {
            if ( !CellClass::FindBuilding((_DWORD *)a2, 0) )
              return 2;
            Building = CellClass::FindBuilding((_DWORD *)a2, 0);
            if ( !ObjectClass::IsCrushable(Building, (_DWORD **)this) )
              return 2;
          }
        }
        else if ( (v64 & 0x3F) != 0 )
        {
          if ( v65 || v69 != -1 && HouseClass::IsAllied(*(_DWORD **)(&this->startingUnitsCapacity0), v69) )
          {
            return 2;
          }
          else if ( !*(_BYTE *)(this->Type + 3368)
                 && !TechnoClass::HasVoiceResponse(this, 17) )
          {
            if ( *(_BYTE *)(this->Type + 3220)
              || *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0)
              && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(
                                                     this,
                                                     0)
                                      + 160)
                          + 677) )
            {
              return 5;
            }
            return 7;
      return v25;
  return result;

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

// IDA: 0x7438F0 (CanCrushTarget, 339B)
// 0x7438f0
int UnitClass::CanCrushTarget(TechnoClass* aP1)
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

  result = (*(_BYTE *)(this->u32_6C4 + 3368) || TechnoTypeClass::HasVoiceResponse((float *)this, 17)) /*0x743a30*/
        && aP1
        && ObjectClass::IsCrushable(aP1, (_DWORD **)this)
        && (v3 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)aP1 + 72))(aP1, v10),
            v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)&this->u32_1C2))(this, v11),
            v8 = v4[1] - v3[1],
            v9 = v4[2] - v3[2],
            v5 = Math::Sqrt((double)(*v4 - *v3) * (double)(*v4 - *v3) + (double)v9 * (double)v9 + (double)v8
                                                                                                * (double)v8),
            (int)Math::RoundToInt(v5) <= g_RulesClass_Instance[1].PrerequisitePower[3])
        && (!(unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80))
         || IDA_HIBYTE(g_RulesClass_Instance[1].RadarEventDurations[3])
         || this->type->qD2D)
        && (v6 = this->owner, *(_DWORD *)(v6 + 388) != 2)
        && ((unsigned __int8)House::IsCurrentPlayer((void *)v6)
         || this->owner->iqLevel2 >= IDA_SLODWORD(g_RulesClass_Instance[1].TiberiumHeal))
        && (*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)aP1 + 200))(aP1, this->owner) == 0;
  return result; /*0x743a2e*/
}
// 0x70fbd0
bool UnitClass::IsDeactivated()
{
  return *(&this->queuedMission6); /*0x70fbd6*/
}
// ============================================================
// Phase 3: Construction & Destruct
// ============================================================

// IDA: 0x6B4A50 (Create, 234B static)
// 0x6b4a50
AbstractClass * * UnitClass::Create(void* aP0, void* aP1, int aP2)
{
  int v5; // eax

  ObjectClass::ctor(this); /*0x6b4a53*/
  *this = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4a5c*/
  *(&this->uniqueId3) = aP0; /*0x6b4a62*/
  this->vtable3 = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4a6c*/
  this->vtable2 = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4a73*/
  *(this + 3) = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4a79*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6b4a80*/
  if ( dword_A8B1F0 < dword_A8B1E8 /*0x6b4abc*/
    || (byte_A8B1ED || !dword_A8B1E8)
    && dword_A8B1F4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SmudgeClass_Array + 8))(
         &SmudgeClass_Array,
         dword_A8B1E8 + dword_A8B1F4,
         0) )
  {
    v5 = dword_A8B1F0++; /*0x6b4ac9*/
    *((_DWORD *)dword_A8B1E4 + v5) = this; /*0x6b4ad8*/
  }
  if ( *aP1 != dword_B0B728 || aP1[1] != dword_B0B72C || aP1[2] != dword_B0B730 ) /*0x6b4b03*/
  {
    dword_83FFD8 = aP2; /*0x6b4b0b*/
    if ( !(unsigned __int8)ObjectClass::Deploy((void *)this) ) /*0x6b4b14*/
    {
      ObjectClass::Destroy((void *)this); /*0x6b4b1f*/
      return this; /*0x6b4b27*/
    }
    dword_83FFD8 = -1; /*0x6b4b2a*/
  }
  return this; /*0x6b4b26*/
}
// 0x6b4c80
int UnitClass::ReadINI()
{
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // esi
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

  INIClass::ResetSection(this); /*0x6b4c89*/
  result = INIClass::GetKeyCount(this, (unsigned __int8 *)aSmudge); /*0x6b4c96*/
  v3 = 0; /*0x6b4c9b*/
  result = result; /*0x6b4c9f*/
  for ( i = 0; i < result; ++i ) /*0x6b4ca7*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aSmudge, v3); /*0x6b4cba*/
    INIClass::GetString((unsigned __int8 ***)this, (unsigned __int8 *)aSmudge, StringByIndex, 0, String, 128); /*0x6b4cd4*/
    v5 = strtok(String, Delimiter); /*0x6b4ce3*/
    v6 = Object_Read_6B5440(v5); /*0x6b4cf2*/
    if ( v6 != -1 ) /*0x6b4cf7*/
    {
      v7 = strtok(0, Delimiter); /*0x6b4d04*/
      if ( v7 ) /*0x6b4d0e*/
      {
        v8 = atoi(v7); /*0x6b4d21*/
        v9 = strtok(0, Delimiter); /*0x6b4d23*/
        v10 = atoi(v9); /*0x6b4d35*/
        v11 = strtok(0, Delimiter); /*0x6b4d38*/
        if ( !v11 || !atoi(v11) ) /*0x6b4d45*/
        {
          v12 = (void **)RA2_OPNEW(0xB0u); /*0x6b4d56*/
          if ( v12 ) /*0x6b4d60*/
          {
            v15[0] = (v8 << 8) + 128; /*0x6b4d7a*/
            v15[1] = (v10 << 8) + 128; /*0x6b4d7e*/
            v15[2] = 0; /*0x6b4d8e*/
            UnitClass::Create(v12, *((void **)FactoryClass_Array + v6), v15, -1); /*0x6b4d9d*/
          }
        }
      }
    }
    result = result; /*0x6b4da6*/
    v3 = i + 1; /*0x6b4daa*/
  }
  return result; /*0x6b4dba*/
}
// 0x6b4fa0
int UnitClass::DestroySmudge(char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4fa6*/
  this->u32_4 = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4fac*/
  this->q008 = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4fb3*/
  this->q00C = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4fba*/
  AbstractClass::AnnounceExpiredPointer(this); /*0x6b4fc1*/
  v5 = this; /*0x6b4fd6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(SmudgeClass_Array + 16))(&SmudgeClass_Array, &v5); /*0x6b4fda*/
  if ( v3 != -1 && v3 < dword_A8B1F0 && v3 < --dword_A8B1F0 ) /*0x6b4ff5*/
  {
    do /*0x6b500d*/
    {
      ++v3; /*0x6b4ffd*/
      *((_DWORD *)dword_A8B1E4 + v3 - 1) = *((_DWORD *)dword_A8B1E4 + v3); /*0x6b5001*/
    }
    while ( v3 < dword_A8B1F0 ); /*0x6b500d*/
  }
  if ( g_WTFMode ) /*0x6b5016*/
    ObjectClass::Undeploy((void *)this); /*0x6b501a*/
  *(&this->uniqueId3) = 0; /*0x6b5021*/
  ObjectClass::Dtor(this); /*0x6b502b*/
  if ( (a2 & 1) != 0 ) /*0x6b5035*/
    RA2_OPDEL(this); /*0x6b5038*/
  return this; /*0x6b5042*/
}
// 0x735780
int __thiscall UnitClass::Destructor(void **this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int Vtable3; // eax
  signed int v8; // ebx
  void *v9; // ebp
  int v10; // edi
  void **v11; // edx
  char *v12; // ecx
  int v13; // ecx
  signed int v14; // ecx
  _DWORD *v15; // eax
  void **v17; // [esp+10h] [ebp-4h] BYREF

  v2 = (int)*(&this->Type9); /*0x735789*/
  *this = &(void*)(void*)&UnitClass_vftable; /*0x735794*/
  this->vtable2 = &(void*)(void*)&UnitClass_vftable; /*0x73579a*/
  this->vtable3 = &(void*)(void*)&UnitClass_vftable; /*0x7357a0*/
  this->vtable4 = &off_7F5C44; /*0x7357a7*/
  if ( a1 ) /*0x7357ae*/
  {
    UnitClass::updateHarvesting(); /*0x7357b0*/
    *(&this->currentMission9) = 0; /*0x7357b5*/
  }
  if ( g_WTFMode ) /*0x7357c2*/
  {
    v3 = (int)*(&this->currentMission3); /*0x7357c8*/
    if ( v3 ) /*0x7357d0*/
    {
      if ( HouseClass::CanBuild(*(&this->attachedTag5), v3, 0, 0) == -1 ) /*0x7357e7*/
        *((_BYTE *)*(&this->attachedTag5) + 508) = 1; /*0x7357ef*/
      if ( *(&this->lastLayer3) ) /*0x7357f6*/
      {
        TeamClass::LiberateMember_Start(this, -1, 0); /*0x735804*/
        *(&this->lastLayer3) = 0; /*0x735809*/
      }
      HouseClass::DecrementUnitCount(*(&this->attachedTag5), this); /*0x735816*/
      if ( !g_IKnowWhatImDoing && *(&this->referenceCount0) ) /*0x735823*/
      {
        do /*0x735845*/
        {
          v4 = LinkedList::Pop(&this->nextArrayIndex9); /*0x735833*/
          if ( v4 ) /*0x73583a*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x735842*/
        }
        while ( *(&this->referenceCount0) ); /*0x735845*/
      }
      if ( (unsigned __int8)TechnoClass::CleanupDirection(this) && *(&this->currentMission5) != (void *)-1 ) /*0x735861*/
      {
        v5 = (*((int (__thiscall **)(void **, void ***))*this + 110))(this, &v17); /*0x735876*/
        HouseClass::DroppedFlag(v5, 0); /*0x73587f*/
        *(&this->currentMission5) = (void *)-1; /*0x735884*/
      }
    }
  }
  AbstractClass::AnnounceExpiredPointer(this); /*0x735892*/
  v17 = this; /*0x7358a7*/
  v6 = (*(int (__thiscall **)(int *, void ***))(UnitClass_Array + 16))(&UnitClass_Array, &v17); /*0x7358ab*/
  if ( v6 != -1 && v6 < g_HouseClass_BuildState && v6 < --g_HouseClass_BuildState ) /*0x7358c6*/
  {
    do /*0x7358de*/
    {
      ++v6; /*0x7358ce*/
      *((_DWORD *)g_UnitClassPool + v6 - 1) = *((_DWORD *)g_UnitClassPool + v6); /*0x7358d2*/
    }
    while ( v6 < g_HouseClass_BuildState ); /*0x7358de*/
  }
  Vtable3 = AbstractClass::GetVtable3((int)(this + 1)); /*0x7358e1*/
  v8 = g_BuildingLoadQueue_Count; /*0x7358e6*/
  v17 = (void **)Vtable3; /*0x7358ec*/
  if ( g_BuildingLoadQueue_Count ) /*0x7358f2*/
  {
    if ( !g_BuildingLoadQueue_Dirty ) /*0x7358ff*/
    {
      qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x73590f*/
      v8 = g_BuildingLoadQueue_Count; /*0x735914*/
      g_BuildingLoadQueue_Active = 0; /*0x73591d*/
      g_BuildingLoadQueue_Dirty = 1; /*0x735923*/
    }
    v9 = g_BuildingLoadQueue_Array; /*0x73592a*/
    v8 = v8; /*0x735930*/
    while ( v8 > 0 ) /*0x735934*/
    {
      v11 = (void **)*((_DWORD *)v9 + 2 * (v8 / 2)); /*0x735941*/
      v12 = (char *)v9 + 8 * (v8 / 2); /*0x735945*/
      if ( (int)v17 >= (int)v11 ) /*0x73594d*/
      {
        if ( v11 == v17 ) /*0x735957*/
        {
          if ( v12 ) /*0x73597d*/
          {
            v13 = (v12 - (char *)g_BuildingLoadQueue_Array) >> 3; /*0x735985*/
            if ( v13 != -1 ) /*0x73598b*/
            {
              v14 = v13 + 1; /*0x73598d*/
              if ( v14 < v8 ) /*0x735990*/
              {
                do /*0x7359af*/
                {
                  v15 = (_DWORD *)((char *)g_BuildingLoadQueue_Array + 8 * v14++); /*0x735998*/
                  *(v15 - 2) = *v15; /*0x73599e*/
                  *(v15 - 1) = v15[1]; /*0x7359a4*/
                  v8 = g_BuildingLoadQueue_Count; /*0x7359a7*/
                }
                while ( v14 < (int)g_BuildingLoadQueue_Count ); /*0x7359af*/
              }
              g_BuildingLoadQueue_Count = v8 - 1; /*0x7359bc*/
              *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x7359c2*/
              *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x7359d0*/
              g_BuildingLoadQueue_Active = 0; /*0x7359d4*/
            }
          }
          break; /*0x7359d4*/
        }
        v9 = (void *)(v12 + 8); /*0x735959*/
        v8 += -1 - v8 / 2; /*0x735961*/
      }
      else
      {
        v8 /= 2; /*0x73594f*/
      }
    }
  }
  this->isAliveFlag = 0; /*0x7359da*/
  return FootClass::Destruct(this); /*0x735975*/
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
mov     dword ptr [esi], offset ??_7UnitClass@@6B@ ; const UnitClass_vftable
mov     dword ptr [ebx], offset ??_7UnitClass@@6B@_0 ; const UnitClass_vftable
mov     dword ptr [esi+8], offset ??_7UnitClass@@6B@_1 ; const UnitClass_vftable
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

// ============================================================
// Phase 3: Stream & Save
// ============================================================

// IDA: 0x744470 (LoadFromStream, 391B)
// 0x744470
int __stdcall UnitClass::LoadFromStream(int a1, int pStm)
{
  _DWORD *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  signed int v6; // ecx
  size_t i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  a1 = a1; /*0x744472*/
  v3 = a1 + 1; /*0x74447a*/
  a1 = (_DWORD *)(*(int (__stdcall **)(_DWORD *))(a1[1] + 16))(a1 + 1); /*0x74448b*/
  v4 = BuildingTypeClass::Dequeue((char **)&g_BuildingLoadQueue_Array, (int *)&a1); /*0x74448f*/
  if ( v4 ) /*0x744496*/
  {
    v5 = (int)(v4 - (_DWORD)g_BuildingLoadQueue_Array) >> 3; /*0x74449e*/
    if ( v5 != -1 ) /*0x7444a4*/
    {
      v6 = v5 + 1; /*0x7444a6*/
      for ( i = g_BuildingLoadQueue_Count; v6 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x7444b0*/
      {
        v8 = (char *)g_BuildingLoadQueue_Array + 8 * v6++; /*0x7444b8*/
        *(v8 - 2) = *v8; /*0x7444be*/
        *(v8 - 1) = v8[1]; /*0x7444c4*/
      }
      g_BuildingLoadQueue_Count = i - 1; /*0x7444d9*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x7444de*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x7444ee*/
      g_BuildingLoadQueue_Active = 0; /*0x7444f2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x7444fe*/
  if ( result >= 0 ) /*0x744505*/
  {
    v10 = v2[413]; /*0x74450b*/
    if ( v2 ) /*0x744513*/
    {
      FootClass::PostLoadInit(&a1); /*0x74451c*/
      *v2 = &(void*)(void*)&UnitClass_vftable; /*0x744521*/
      *v3 = &(void*)(void*)&UnitClass_vftable; /*0x744527*/
      v2[2] = &(void*)(void*)&UnitClass_vftable; /*0x74452d*/
      v2[3] = &off_7F5C44; /*0x744534*/
    }
    v11 = v2[413]; /*0x74453c*/
    if ( v11 != v10 ) /*0x744544*/
    {
      v2[413] = v10; /*0x744548*/
      if ( v10 ) /*0x74454e*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x744553*/
      if ( v11 ) /*0x744558*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x74455e*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x744564*/
    v12 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x744573*/
    v13 = g_BuildingLoadQueue_Capacity; /*0x744575*/
    if ( (int)(g_BuildingLoadQueue_Count + 1) <= g_BuildingLoadQueue_Capacity ) /*0x74457e*/
      goto LABEL_18; /*0x74457e*/
    if ( !g_BuildingLoadQueue_Capacity ) /*0x744582*/
      v13 = 10; /*0x744584*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, v13) ) /*0x74458f*/
    {
  LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = v12; /*0x7445a3*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = v2; /*0x7445b1*/
      g_BuildingLoadQueue_Dirty = 0; /*0x7445bb*/
      ++g_BuildingLoadQueue_Count; /*0x7445c2*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 433); /*0x7445d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 434); /*0x7445e4*/
    v2[439] = 0; /*0x7445eb*/
    return 0; /*0x7445e9*/
  }
  return result; /*0x7445f1*/
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
mov     dword ptr [esi], offset ??_7UnitClass@@6B@ ; const UnitClass_vftable
mov     dword ptr [ebx], offset ??_7UnitClass@@6B@_0 ; const UnitClass_vftable
mov     dword ptr [esi+8], offset ??_7UnitClass@@6B@_1 ; const UnitClass_vftable
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

// IDA: 0x6B4EA0 (SaveLoadData, 90B)
// 0x6b4ea0
int UnitClass::SaveLoadData(ObjectClass* aP1, int aP1a)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register(this); /*0x6b4eb1*/
  if ( Register >= 0 ) /*0x6b4eb5*/
  {
    if ( aP1 ) /*0x6b4eb9*/
    {
      ObjectClass::Init(aP1, (int)&aP1a); /*0x6b4ec2*/
      *aP1 = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4ec7*/
      aP1[1] = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4ecd*/
      aP1[2] = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4ed4*/
      aP1[3] = &(void*)(void*)&SmudgeClass_vftable; /*0x6b4edb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 43); /*0x6b4eee*/
  }
  return Register; /*0x6b4ef5*/
}
// 0x6b4f00
int UnitClass::SaveState(void* aP0, void* a1, void* aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6b4f14*/
}
// 0x744640
int UnitClass::PowerDrainUpdate(int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  FootClass::BeginPowerUpdate(a2); /*0x744649*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q2B42) + 44))(this->q6C4); /*0x744656*/
  Power::TimerProcess(v3); /*0x74465c*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->q6C4 + 4) + 16))(this->q6C4 + 4); /*0x74466d*/
  Power::TimerProcess(v4); /*0x744673*/
  v5 = *(_DWORD *)(this + 1736); /*0x744678*/
  if ( v5 ) /*0x744680*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x744689*/
    Power::TimerProcess(v6); /*0x74468f*/
  }
  Power::TimerProcess(this->u32_6CC); /*0x74469d*/
  IDA_LOBYTE(v7) = this->u32_6D0; /*0x7446a2*/
  Power::FlagProcess(a2, v7); /*0x7446ab*/
  IDA_LOBYTE(v8) = this->u32_6D1; /*0x7446b0*/
  v9 = Power::FlagProcess(a2, v8); /*0x7446b9*/
  IDA_LOBYTE(v9) = this->u32_6D2; /*0x7446be*/
  Power::FlagProcess(a2, v9); /*0x7446c7*/
  IDA_LOBYTE(v10) = this->u32_687; /*0x7446cc*/
  return Power::FlagProcess(a2, v10); /*0x7446da*/
}
// IDA: 0x746810 (PerFrameUpdate, 167B)
// 0x746810
UnitTypeClass * * UnitClass::PerFrameUpdate(int _DWORD *a1@<ecx>, int int a2@<edi>)
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

  result = TechnoClass::Update((int)a1, a2); /*0x746814*/
  v4 = a1[433]; /*0x746819*/
  if ( v4 ) /*0x746821*/
  {
    v5 = a1[135]; /*0x746827*/
    if ( v5 ) /*0x74682f*/
    {
      v6 = 0; /*0x746834*/
      v7 = *(_DWORD *)(v5 + 52) + 360; /*0x746836*/
      v8 = *(_DWORD *)(v7 + 16); /*0x74683b*/
      if ( v8 > 0 ) /*0x746840*/
      {
        v9 = *(_DWORD **)(v7 + 4); /*0x746842*/
        while ( *v9 != v4 ) /*0x746847*/
        {
          ++v6; /*0x746849*/
          ++v9; /*0x74684a*/
          if ( v6 >= v8 ) /*0x74684f*/
            goto LABEL_9; /*0x74684f*/
        }
        Power::ChangedHouse(a1 + 84, 1); /*0x74685b*/
      }
    }
  LABEL_9:
    v10 = a1[135]; /*0x746860*/
    if ( v10 ) /*0x746868*/
    {
      if ( *(_BYTE *)(v10 + 704) ) /*0x74686a*/
      {
        v11 = a1[433]; /*0x746874*/
        if ( !v11->Naval ) /*0x74687a*/
        {
          if ( v11->qC8E ) /*0x746884*/
            Power::ChangedHouse(a1 + 84, 1); /*0x746896*/
        }
      }
    }
    result = (_DWORD *)a1[433]; /*0x74689b*/
    if ( *((_BYTE *)result + 2053) ) /*0x7468a1*/
      return (_DWORD *)UnitClass::SetTurret(0); /*0x7468af*/
  }
  return result; /*0x7468b4*/
}
// 0x7446e0
int UnitClass::HandleTargetDestroyed(void* a1, void* aP2)
{
  int result; // eax

  FootClass::HandleTargetDestroyed(this, a1, aP2); /*0x7446ee*/
  result = 0; /*0x7446f9*/
  if ( (int *)*(&this->currentMission4) == a1 ) /*0x7446fd*/
    *(&this->currentMission4) = 0; /*0x7446ff*/
  if ( (int *)*(&this->currentMission3) == a1 ) /*0x74470b*/
    *(&this->currentMission3) = 0; /*0x74470d*/
  return result; /*0x744713*/
}
// 0x6b4f20
int UnitClass::CheckStatus()
{
  return *(&this->uniqueId3); /*0x6b4f26*/
}
// IDA: 0x6B7C60 (ClearTargetRef, 206B)
// 0x6b7c60
void UnitClass::ClearTargetRef(int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  _DWORD **v6; // ecx
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // [esp+10h] [ebp-8h]

  if ( a2 == *(&this->vtable36) ) /*0x6b7c6f*/
  {
    v3 = *(&this->vtable37); /*0x6b7c71*/
    *(&this->vtable36) = 0; /*0x6b7c74*/
    if ( !v3 ) /*0x6b7c7d*/
      UnitClass::ProcessIdleOrders(this); /*0x6b7c7f*/
  }
  else if ( a2 == *(&this->vtable37) ) /*0x6b7c90*/
  {
    *(this + 27) = 0; /*0x6b7c92*/
  }
  else
  {
    v4 = *(&this->vtable28) - 1; /*0x6b7ca5*/
    if ( v4 < 0 ) /*0x6b7ca6*/
    {
  LABEL_10:
      if ( a2 == this->owner ) /*0x6b7cbf*/
      {
        TaskManager::Update(this); /*0x6b7cc3*/
        UnitClass::ProcessIdleOrders(this); /*0x6b7cca*/
      }
    }
    else
    {
      v5 = *(&this->vtable25); /*0x6b7ca8*/
      v6 = (_DWORD **)(v5 + 4 * v4); /*0x6b7cab*/
      while ( a2 != **v6 ) /*0x6b7cb2*/
      {
        --v4; /*0x6b7cb4*/
        --v6; /*0x6b7cb5*/
        if ( v4 < 0 ) /*0x6b7cba*/
          goto LABEL_10; /*0x6b7cba*/
      }
      v7 = *(_DWORD **)(v5 + 4 * v4); /*0x6b7cd8*/
      if ( *(int *)(*v7 + 108) <= 0 || *(_BYTE *)(*v7 + 1738) || v7[5] == 1 ) /*0x6b7cf2*/
      {
        *v7 = 0; /*0x6b7cf4*/
        *(_DWORD *)(*(_DWORD *)(*(&this->vtable25) + 4 * v4) + 4) = 7; /*0x6b7d01*/
        v8 = *(&this->vtable22); /*0x6b7d08*/
        v9 = (_DWORD *)(*(_DWORD *)(*(&this->vtable25) + 4 * v4) + 8); /*0x6b7d18*/
        *v9 = g_CurrentFrame; /*0x6b7d1c*/
        v9[1] = v10; /*0x6b7d22*/
        v9[2] = v8; /*0x6b7d25*/
      }
    }
  }
}
// 0x4d4280
AbstractClass * * UnitClass::ApproachEvaluate()
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
  void **v22; // edi
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
  __int16 v72; // [esp+50h] [ebp-7Ch] BYREF
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

  v2 = this->ComputeScanDistance(2); /*0x4d4290*/
  this->q430 = 1; /*0x4d429d*/
  v3 = v2 / 256 + 6; /*0x4d42b1*/
  switch ( *(&this->uniqueId7) )
  {
    case 0:
      v75[0] = *(&this->vtable49); /*0x4d42f7*/
      v5 = *this; /*0x4d42fb*/
      v75[1] = *(&this->uniqueId0); /*0x4d4300*/
      v75[2] = *(&this->uniqueId1); /*0x4d430c*/
      v6 = this->SelectAutoTarget_Cloaked(2, v75, 0); /*0x4d4314*/
      v68 = v6; /*0x4d431c*/
      if ( v6 )
        v7 = (*(_BYTE *)(v6 + 20) & 2) != 0 ? v6 : 0;
      else
        v7 = 0; /*0x4d4322*/
      v8 = this->SelectWeapon(v7); /*0x4d4339*/
      if ( v7 ) /*0x4d4341*/
      {
        if ( this->ValidateTarget(v7, v8) ) /*0x4d434d*/
          goto LABEL_10; /*0x4d434d*/
        v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7); /*0x4d4365*/
        IDA_LOWORD(v63) = *v9 / 256; /*0x4d4379*/
        IDA_HIWORD(v63) = v9[1] / 256; /*0x4d4392*/
        v10 = *this; /*0x4d439b*/
        v70 = v63; /*0x4d439f*/
        v11 = (_DWORD *)this->GetDeployCoords(v79, 0); /*0x4d43a3*/
        IDA_LOWORD(v63) = *v11 / 256; /*0x4d43b9*/
        IDA_HIWORD(v63) = v11[1] / 256; /*0x4d43cf*/
        v63 = v63; /*0x4d43d8*/
        v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 188))(v7, 0, -1); /*0x4d43de*/
        v13 = this->CheckHeightDiff(0, v12); /*0x4d43ea*/
        if ( Pathfinding::CalcDistance((int)g_AudioInitFlag, (__int16 *)&v66, &v72, (int)this, v13, (int)v81, 0) < v3 ) /*0x4d4408*/
        {
  LABEL_10:
          v14 = this->GetCell(); /*0x4d4412*/
          *(&this->lastLayer5) = v14; /*0x4d4418*/
          if ( (*(_DWORD *)(v14 + 320) & 0x100) != 0 /*0x4d4432*/
            && !this->CheckHeightDiff(0) )
          {
            v15 = *this; /*0x4d4454*/
            v69 = 0; /*0x4d4459*/
            v61 = *(_DWORD *)(this->Vt34Thunk() + 1460); /*0x4d4471*/
            v16 = this->Vt34Thunk(); /*0x4d4475*/
            TileIndex = MapClass::GetTileIndex( /*0x4d4498*/
                          &MapClass_Instance,
                          (__int16 *)(*(&this->lastLayer5) + 36),
                          *(_DWORD *)(v16 + 1460),
                          0);
            v17 = this->Vt34Thunk(); /*0x4d449b*/
            v67 = *LayerClass::Pathfinding_Find( /*0x4d44ca*/
                     &MapClass_Instance,
                     (int)&v76,
                     &v76,
                     (__int16 *)(*(&this->lastLayer5) + 36),
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
            if ( v67 == g_FootClass_Pool ) /*0x4d44ce*/
            {
              *(&this->lastLayer5) = 0; /*0x4d4512*/
              return 60; /*0x4d4527*/
            }
            *(&this->lastLayer5) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v67); /*0x4d44ed*/
          }
          if ( !*(&this->attachedTag4) ) /*0x4d44f3*/
          {
            v18 = *(&this->onBridge8); /*0x4d44fb*/
            if ( v18 <= 0 ) /*0x4d4503*/
            {
              if ( *(&this->isAliveFlag1) ) /*0x4d4528*/
                TechnoClass::SetFocus(this, *(&this->isAliveFlag1)); /*0x4d4533*/
              else
                TechnoClass::SetFocus(this, *(&this->lastLayer5)); /*0x4d453e*/
            }
            else
            {
              TechnoClass::SetFocus(this, *(_DWORD *)(*(&this->onBridge5) + 4 * v18 - 4)); /*0x4d4510*/
            }
          }
          this->AssignDestination(0, 1); /*0x4d454a*/
          this->AssignTarget_SyncLog(v68); /*0x4d4559*/
          goto LABEL_22; /*0x4d4559*/
        }
      }
      if ( !*(&this->isAliveFlag1) ) /*0x4d45a2*/
        goto LABEL_28; /*0x4d45a2*/
      if ( !*(&this->q0A43) ) /*0x4d45aa*/
        WinAPI::Wrapper(-2147467261); /*0x4d45b7*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 16))(*(&this->q0A43)) ) /*0x4d45c5*/
      {
  LABEL_28:
        this->ValidatePlacement(0, 1); /*0x4d45d3*/
        goto LABEL_70; /*0x4d45d3*/
      }
  LABEL_23:
      MissionControl = MissionClass::GetMissionControl(this); /*0x4d4569*/
      v20 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d458e*/
      return v20 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x4d45a1*/
    case 1:
      v21 = *(&this->q0443); /*0x4d45d8*/
      if ( v21 )
        v22 = (v21->abstractFlags & 2) != 0 ? (void **)v21 : 0;
      else
        v22 = 0; /*0x4d45e2*/
      v23 = this->SelectWeapon(v22); /*0x4d45ff*/
      if ( !this->vt_entry_1FC() ) /*0x4d460d*/
        goto LABEL_41; /*0x4d460d*/
      if ( !v22 ) /*0x4d4615*/
        goto LABEL_38; /*0x4d4615*/
      if ( (*((int (__thiscall **)(void **))*v22 + 11))(v22) == 6 /*0x4d4651*/
        && (unsigned __int8)HouseClass::IsAlliedWith((void *)*(&this->attachedTag5), v22[135])
        && BuildingClass::GetHealthRatio((int *)v22) > *(double *)&g_RulesClass_Instance[1].ChronoSparkle1 )
      {
        this->AssignTarget_SyncLog(0); /*0x4d4659*/
      }
      else
      {
  LABEL_41:
        if ( v22 ) /*0x4d46a3*/
        {
          if ( this->ValidateTarget(v22, v23) ) /*0x4d46ab*/
            goto LABEL_44; /*0x4d46ab*/
          v29 = (_DWORD *)(*((int (__thiscall **)(void **, _BYTE *))*v22 + 19))(v22, v83); /*0x4d46c3*/
          v30 = *(&this->lastLayer5); /*0x4d46c8*/
          IDA_LOWORD(v64) = *v29 / 256; /*0x4d46e0*/
          IDA_HIWORD(v64) = v29[1] / 256; /*0x4d46f4*/
          v69 = v64; /*0x4d46fd*/
          v62 = (*((int (__thiscall **)(void **, _DWORD, int))*v22 + 47))(v22, 0, -1); /*0x4d470b*/
          v31 = *(_DWORD *)(v30 + 320) >> 8; /*0x4d4712*/
          IDA_LOBYTE(v31) = v31 & 1; /*0x4d4715*/
          if ( Pathfinding::CalcDistance( /*0x4d472e*/
                 (int)g_AudioInitFlag,
                 (__int16 *)(v30 + 36),
                 (__int16 *)&v70,
                 (int)this,
                 v31,
                 v62,
                 0) < v3 )
          {
  LABEL_44:
            this->CalculateApproachPath(0); /*0x4d473a*/
            if ( *(&this->q0443) ) /*0x4d4740*/
              goto LABEL_23; /*0x4d4748*/
            this->AssignDestination(*(&this->attachedTag4), 1); /*0x4d475b*/
            TechnoClass::SetFocus(this, 0); /*0x4d4766*/
            *(&this->lastLayer5) = 0; /*0x4d476b*/
            *(&this->uniqueId7) = 0; /*0x4d4771*/
            return 45; /*0x4d4786*/
          }
        }
      }
  LABEL_38:
      if ( !*(&this->q0443) )
      {
        v24 = *this; /*0x4d4673*/
        v25 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD))(*(_DWORD *)*(&this->lastLayer5) + 72))(*(&this->lastLayer5), v77, 0); /*0x4d467e*/
        v26 = this->SelectAutoTarget_Cloaked(2, v25); /*0x4d4686*/
        v27 = v26; /*0x4d468c*/
        v68 = v26; /*0x4d4690*/
        v28 = v26 ? ((*(_BYTE *)(v26 + 20) & 2) != 0 ? v26 : 0) : 0;
        v32 = this->SelectWeapon(v28); /*0x4d479a*/
        if ( v28 ) /*0x4d47a2*/
        {
          if ( this->ValidateTarget(v28, v32) ) /*0x4d47ae*/
          {
  LABEL_51:
            this->AssignTarget_SyncLog(v27); /*0x4d4835*/
            this->AssignDestination(0, 1); /*0x4d4848*/
            return 1; /*0x4d485d*/
          }
          v33 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v28 + 76))(v28, v78); /*0x4d47c3*/
          v34 = *(&this->lastLayer5); /*0x4d47c8*/
          IDA_LOWORD(v65) = *v33 / 256; /*0x4d47e0*/
          IDA_HIWORD(v65) = v33[1] / 256; /*0x4d47f6*/
          v70 = v65; /*0x4d47ff*/
          v35 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v28 + 188))(v28, 0, -1); /*0x4d4805*/
          v36 = *(_DWORD *)(v34 + 320) >> 8; /*0x4d4812*/
          IDA_LOBYTE(v36) = v36 & 1; /*0x4d4815*/
          if ( Pathfinding::CalcDistance( /*0x4d482f*/
                 (int)g_AudioInitFlag,
                 (__int16 *)(v34 + 36),
                 (__int16 *)&v63,
                 (int)this,
                 v36,
                 v35,
                 0) < v3 )
          {
            v27 = v68; /*0x4d4831*/
            goto LABEL_51; /*0x4d4831*/
          }
        }
      }
      v37 = *this; /*0x4d485e*/
      *(&this->uniqueId7) = 2; /*0x4d4864*/
      this->AssignTarget_SyncLog(0); /*0x4d486e*/
      if ( *(&this->attachedTag4) ) /*0x4d4874*/
      {
        v38 = (__int16 *)this->GetCell(); /*0x4d488c*/
        v39 = this->CheckHeightDiff(0); /*0x4d4894*/
        v40 = *(&this->attachedTag4); /*0x4d489a*/
        IDA_LOBYTE(v68) = v39; /*0x4d48a0*/
        v41 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(v40->q048)(v40, v80); /*0x4d48ab*/
        v42 = Coord::To_Cell(&MapClass_Instance, v41); /*0x4d48b9*/
        v43 = *(&this->lastLayer5); /*0x4d48bb*/
        v68 = v68; /*0x4d48c1*/
        v45 = *(_DWORD *)(v43 + 320) >> 8; /*0x4d48d0*/
        IDA_LOBYTE(v45) = v45 & 1; /*0x4d48d3*/
        v38 += 18; /*0x4d48d6*/
        v46 = Pathfinding::CalcDistance((int)g_AudioInitFlag, v38, (__int16 *)(v43 + 36), (int)this, v68, v45, -1); /*0x4d48e3*/
        v47 = *((_DWORD *)v42 + 80) >> 8; /*0x4d48f0*/
        IDA_LOBYTE(v47) = v47 & 1; /*0x4d48f3*/
        v68 = v46; /*0x4d4903*/
        if ( v46 >= Pathfinding::CalcDistance((int)g_AudioInitFlag, v38, (__int16 *)v42 + 18, (int)this, v68, v47, -1) ) /*0x4d4910*/
          this->AssignDestination(*(&this->attachedTag4), 1); /*0x4d4942*/
        else
          this->AssignDestination(*(&this->lastLayer5), 1); /*0x4d491f*/
        return 1; /*0x4d4928*/
      }
      else
      {
        v48 = *this; /*0x4d4958*/
        *(&this->uniqueId7) = 0; /*0x4d4960*/
        this->ValidatePlacement(0, 1); /*0x4d496a*/
        *(&this->uniqueId7) = 3; /*0x4d4970*/
        return 1; /*0x4d497d*/
      }
    case 2:
      v49 = *this; /*0x4d4990*/
      v50 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD))(*(_DWORD *)*(&this->lastLayer5) + 72))(*(&this->lastLayer5), v82, 0); /*0x4d499b*/
      v51 = this->SelectAutoTarget_Cloaked(2, v50); /*0x4d49a9*/
      v68 = v51; /*0x4d49ad*/
      if ( v51 )
        v52 = (v51->u32_14 & 2) != 0 ? v51 : 0;
      else
        v52 = 0; /*0x4d49b3*/
      v53 = this->SelectWeapon(v52); /*0x4d49c9*/
      if ( !v52 ) /*0x4d49d1*/
        goto LABEL_66; /*0x4d49d1*/
      if ( this->ValidateTarget(v52, v53) ) /*0x4d49dd*/
        goto LABEL_65; /*0x4d49e5*/
      v54 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v52 + 76))(v52, v84); /*0x4d49f9*/
      v55 = *(&this->lastLayer5); /*0x4d49fe*/
      IDA_LOWORD(v66) = *v54 / 256; /*0x4d4a16*/
      IDA_HIWORD(v66) = v54[1] / 256; /*0x4d4a2c*/
      v66 = v66; /*0x4d4a35*/
      v56 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v52 + 188))(v52, 0, -1); /*0x4d4a3b*/
      v57 = *(_DWORD *)(v55 + 320) >> 8; /*0x4d4a48*/
      IDA_LOBYTE(v57) = v57 & 1; /*0x4d4a4b*/
      if ( Pathfinding::CalcDistance( /*0x4d4a65*/
             (int)g_AudioInitFlag,
             (__int16 *)(v55 + 36),
             (__int16 *)&v74,
             (int)this,
             v57,
             v56,
             0) < v3 )
      {
        v51 = v68; /*0x4d4a67*/
  LABEL_65:
        this->AssignTarget_SyncLog(v51); /*0x4d4a6b*/
        this->AssignDestination(0, 1); /*0x4d4a7e*/
  LABEL_22:
        *(&this->uniqueId7) = 1; /*0x4d455f*/
        goto LABEL_23; /*0x4d455f*/
      }
  LABEL_66:
      if ( *(&this->isAliveFlag1) ) /*0x4d4a89*/
        goto LABEL_23; /*0x4d4a91*/
      this->AssignTarget_SyncLog(0); /*0x4d4a9e*/
      v58 = *(&this->attachedTag4); /*0x4d4aa4*/
      if ( v58 ) /*0x4d4aac*/
      {
        this->AssignDestination(v58, 1); /*0x4d4ab5*/
        TechnoClass::SetFocus(this, 0); /*0x4d4abe*/
        *(&this->uniqueId7) = 0; /*0x4d4ac3*/
        *(&this->lastLayer5) = 0; /*0x4d4ac9*/
        goto LABEL_23; /*0x4d4acf*/
      }
      v59 = *this; /*0x4d4ad4*/
      *(&this->uniqueId7) = 0; /*0x4d4ad8*/
      this->ValidatePlacement(0, 1); /*0x4d4ae1*/
  LABEL_70:
      *(&this->uniqueId7) = 3; /*0x4d4ae7*/
      return 1; /*0x4d4af4*/
    case 3:
      if ( !*(&this->isAliveFlag1) ) /*0x4d42cc*/
        goto LABEL_23; /*0x4d42cc*/
      *(&this->uniqueId7) = 0; /*0x4d42d2*/
      return 1; /*0x4d42eb*/
    default:
      goto LABEL_23;
  }
}
// 0x5f5c60
        && BuildingClass::GetHealthRatio((int *)v22) > *(double *)(DataGlobal_87F7E8[7806] + 5896) )
        {
          double v2; // [esp+0h] [ebp-8h]

          v2 = (double)*(v22 + 27); /*0x5f5c68*/
          return v2 / (double)*(int *)((*(int (__thiscall **)(int *))(*v22 + 136))(v22) + 160); /*0x5f5c7c*/
        }
      else
      {
LABEL_41:
        if ( v22 )
        {
          if ( this->ValidateTarget(v22, v23) )
            goto LABEL_44;
  _BYTE v83[12]; // [esp+B4h] [ebp-18h] BYREF
          _DWORD * v29 = (_DWORD *)(*((int (__thiscall **)(void **, _BYTE *))*v22 + 19))(v22, v83);
          int v30 = this->FootClass_field_5DC;
  int v64; // [esp+38h] [ebp-94h]
          IDA_LOWORD(v64) = *v29 / 256;
          IDA_HIWORD(v64) = v29[1] / 256;
          v69 = v64;
          int v62 = (*((int (__thiscall **)(void **, _DWORD, int))*v22 + 47))(v22, 0, -1);
          int v31 = *(_DWORD *)(v30 + 320) >> 8;
          IDA_LOBYTE(v31) = v31 & 1;
          if ( Pathfinding::CalcDistance(
                 (int)g_AudioInitFlag,
                 (__int16 *)(v30 + 36),
                 (__int16 *)&v70,
                 (int)this,
                 v31,
                 v62,
                 0) < v3 )
          {
LABEL_44:
            this->CalculateApproachPath(0);
            if ( this->q2B4 )
              goto LABEL_23;
            this->AssignDestination(this->focus, 1);
            TechnoClass::SetFocus(this, 0);
            this->FootClass_field_5DC = 0;
            this->missionStatus = 0;
            return 45;
          }
        }
      }
LABEL_38:
      if ( !this->q2B4 )
      {
        int v24 = *this;
  _BYTE v77[12]; // [esp+6Ch] [ebp-60h] BYREF
        int v25 = *(_DWORD *)this->FootClass_field_5DC->vt_slot_72(this->FootClass_field_5DC, v77, 0);
        int v26 = this->SelectAutoTarget_Cloaked(2, v25);
        int v27 = v26;
        v68 = v26;
        int v28 = v26 ? ((*(_BYTE *)(v26 + 20) & 2) != 0 ? v26 : 0) : 0;
        int v32 = this->SelectWeapon(v28);
        if ( v28 )
        {
          if ( this->ValidateTarget(v28, v32) )
          {
LABEL_51:
            this->AssignTarget_SyncLog(v27);
            this->AssignDestination(0, 1);
            return 1;
          }
  _BYTE v78[4]; // [esp+78h] [ebp-54h] BYREF
          _DWORD * v33 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v28 + 76))(v28, v78);
          int v34 = this->FootClass_field_5DC;
  int v65; // [esp+38h] [ebp-94h]
          IDA_LOWORD(v65) = *v33 / 256;
          IDA_HIWORD(v65) = v33[1] / 256;
          v70 = v65;
          int v35 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v28 + 188))(v28, 0, -1);
          int v36 = *(_DWORD *)(v34 + 320) >> 8;
          IDA_LOBYTE(v36) = v36 & 1;
          if ( Pathfinding::CalcDistance(
                 (int)g_AudioInitFlag,
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
      int v37 = *this;
      this->missionStatus = 2;
      this->AssignTarget_SyncLog(0);
      if ( this->focus )
      {
        v38 = (__int16 *)this->GetCell();
        char v39 = this->CheckHeightDiff(0);
        AbstractClass *v40 = this->focus;
        IDA_LOBYTE(v68) = v39;
  _BYTE v80[12]; // [esp+90h] [ebp-3Ch] BYREF
        _DWORD * v41 = (_DWORD *)v40->GetInvalidCoord(v80);
        void * v42 = Coord::To_Cell(DataGlobal_87F7E8, v41);
        int v43 = this->FootClass_field_5DC;
        int v44 = v68;
        int v45 = *(_DWORD *)(v43 + 320) >> 8;
        IDA_LOBYTE(v45) = v45 & 1;
        v38 += 18;
        int v46 = Pathfinding::CalcDistance((int)g_AudioInitFlag, v38, (__int16 *)(v43 + 36), (int)this, v68, v45, -1);
        int v47 = *((_DWORD *)v42 + 80) >> 8;
        IDA_LOBYTE(v47) = v47 & 1;
        v68 = v46;
        if ( v46 >= Pathfinding::CalcDistance((int)g_AudioInitFlag, v38, (__int16 *)v42 + 18, (int)this, v44, v47, -1) )
          this->AssignDestination(this->focus, 1);
        else
          this->AssignDestination(this->FootClass_field_5DC, 1);
        return 1;
      }
      else
      {
        int v48 = *this;
        this->missionStatus = 0;
        this->ValidatePlacement(0, 1);
        this->missionStatus = 3;
        return 1;
      }
    case 2:
      int v49 = *this;
  _BYTE v82[12]; // [esp+A8h] [ebp-24h] BYREF
      int v50 = *(_DWORD *)this->FootClass_field_5DC->vt_slot_72(this->FootClass_field_5DC, v82, 0);
      int v51 = this->SelectAutoTarget_Cloaked(2, v50);
      v68 = v51;
      if ( v51 )
        int v52 = (*(_BYTE *)(v51 + 20) & 2) != 0 ? v51 : 0;
      else
        v52 = 0;
      int v53 = this->SelectWeapon(v52);
      if ( !v52 )
        goto LABEL_66;
      if ( this->ValidateTarget(v52, v53) )
        goto LABEL_65;
  _BYTE v84[12]; // [esp+C0h] [ebp-Ch] BYREF
      _DWORD * v54 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v52 + 76))(v52, v84);
      int v55 = this->FootClass_field_5DC;
  int v66; // [esp+38h] [ebp-94h]
      IDA_LOWORD(v66) = *v54 / 256;
      IDA_HIWORD(v66) = v54[1] / 256;
      v73 = v66;
      int v56 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v52 + 188))(v52, 0, -1);
      int v57 = *(_DWORD *)(v55 + 320) >> 8;
      IDA_LOBYTE(v57) = v57 & 1;
      if ( Pathfinding::CalcDistance(
             (int)g_AudioInitFlag,
             (__int16 *)(v55 + 36),
  int v74; // [esp+58h] [ebp-74h] BYREF
             (__int16 *)&v74,
             (int)this,
             v57,
             v56,
             0) < v3 )
      {
        v51 = v68;
LABEL_65:
        this->AssignTarget_SyncLog(v51);
        this->AssignDestination(0, 1);
LABEL_22:
        this->missionStatus = 1;
        goto LABEL_23;
      }
LABEL_66:
      if ( this->FootClass_field_5A4 )
        goto LABEL_23;
      this->AssignTarget_SyncLog(0);
      AbstractClass *v58 = this->focus;
      if ( v58 )
      {
        this->AssignDestination(v58, 1);
        TechnoClass::SetFocus(this, 0);
        this->missionStatus = 0;
        this->FootClass_field_5DC = 0;
        goto LABEL_23;
      }
      int v59 = *this;
      this->missionStatus = 0;
      this->ValidatePlacement(0, 1);
LABEL_70:
      this->missionStatus = 3;
      return 1;
    case 3:
      if ( !this->FootClass_field_5A4 )
        goto LABEL_23;
      this->missionStatus = 0;
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

void UnitClass::DrawPlacementPreview(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;

} // namespace gamemd

#include "structure/unit.hpp"

namespace gamemd {

// --- UnitClass ---

// 0x6b4f50
HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID) {
  if ( !pClassID ) /*0x6b4f56*/
    return -2147467261; /*0x6b4f58*/
  *pClassID = 237448645; /*0x6b4f66*/
  pClassID[1] = 298949647; /*0x6b4f6e*/
  pClassID[2] = -1610610249; /*0x6b4f77*/
  pClassID[3] = -777003740; /*0x6b4f80*/
  return 0; /*0x6b4f5d*/
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
HRESULT __stdcall UnitClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall UnitClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall UnitClass::whatAmI() const { return kObjectTypeId; }
int UnitClass::objectSize() const { return sizeof(UnitClass); }
void UnitClass::DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}
void UnitClass::DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {

} // namespace gamemd
}
