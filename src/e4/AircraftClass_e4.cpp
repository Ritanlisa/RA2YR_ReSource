// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Team_e4.hpp"

// 0x413F80
namespace gamemd {
unsigned int * AircraftClass::Update()
{
  _DWORD *result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // ecx
  _DWORD *v15; // ecx
  _BYTE v16[4]; // [esp+8h] [ebp-4h] BYREF

  result = TechnoClass::Update(a1, a2); /*0x413f85*/
  v4 = *(_DWORD *)(a1 + 1732); /*0x413f8a*/
  if ( v4 ) /*0x413f92*/
  {
    v5 = *(_DWORD *)(a1 + 540); /*0x413f98*/
    if ( v5 ) /*0x413fa1*/
    {
      v6 = 0; /*0x413fa6*/
      v7 = v5->relatedTagsCapacity + 388; /*0x413fa8*/
      v8 = *(_DWORD *)(v7 + 16); /*0x413fad*/
      if ( v8 > 0 ) /*0x413fb2*/
      {
        v9 = *(_DWORD **)(v7 + 4); /*0x413fb4*/
        while ( *v9 != v4 ) /*0x413fb9*/
        {
          ++v6; /*0x413fbb*/
          ++v9; /*0x413fbc*/
          if ( v6 >= v8 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Power::ChangedHouse((_DWORD *)(a1 + 336), 1); /*0x413fcd*/
      }
    }
  LABEL_9:
    BuildingTypeClass::GetPowerOutput((_WORD *)(a1 + 904), *(_DWORD *)(*(_DWORD *)(a1 + 1732) + 1820)); /*0x413fd2*/
    BuildingTypeClass::GetPowerOutput((_WORD *)(a1 + 928), *(_DWORD *)(*(_DWORD *)(a1 + 1732) + 1820)); /*0x414001*/
    v10 = ProgressTimer::GetValue(v16); /*0x41400d*/
    FacingClass::Set_SyncLog(v10); /*0x414015*/
    v11 = *(_DWORD *)a1; /*0x414020*/
    v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 1732) + 188))(*(_DWORD *)(a1 + 1732)); /*0x414024*/
    (*(void (__thiscall **)(int, int))(v11 + 460))(a1, v12); /*0x41402d*/
    v13 = *(_DWORD **)(a1 + 1732); /*0x414033*/
    v14 = v13[416]; /*0x41403a*/
    if ( v14 == -1 ) /*0x414043*/
      v14 = v13[417]; /*0x414045*/
    *(_DWORD *)(a1 + 764) = v14; /*0x41404b*/
    result = (_DWORD *)v13[40]; /*0x414051*/
    *(_DWORD *)(a1 + 108) = result; /*0x414057*/
    *(_DWORD *)(a1 + 112) = result; /*0x41405a*/
  }
  v15 = *(_DWORD **)(a1 + 540); /*0x41405d*/
  if ( v15 ) /*0x414065*/
    return (_DWORD *)BuildingClass::PowerUpdate(v15, (_BYTE *)a1); /*0x414068*/
  return result; /*0x41406d*/
}
}
// 0x415B10
namespace gamemd {
int AircraftClass::FindLandingCell(int * a2, int a3)
{
  int *v5; // ebp
  int v6; // esi
  _WORD *v7; // eax
  int v8; // esi
  int v9; // ecx
  __int16 v10; // dx
  int v11; // esi
  void *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  void *v16; // eax
  unsigned int v18; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+2Ch] [ebp-14h]
  char v20[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+34h] [ebp-Ch] BYREF
  unsigned int v22; // [esp+44h] [ebp+4h]

  v18 = 0; /*0x415b1f*/
  v19 = 0; /*0x415b29*/
  v5 = dword_817A58; /*0x415b2d*/
  do /*0x415bab*/
  {
    v6 = *v5; /*0x415b34*/
    v7 = (_WORD *)this->GetCellCoords_Alt(v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + LOWORD(Direction_X_Offsets[v8]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    LOWORD(v22) = v10; /*0x415b6b*/
    HIWORD(v22) = v7[1] + *(_WORD *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18); /*0x415b87*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  LOWORD(v22) = (unsigned __int16)dword_817A58[v19] << 13; /*0x415bc3*/
  v13 = *(&this->uniqueId0); /*0x415bc8*/
  v21[0] = *(&this->vtable49); /*0x415bcb*/
  v14 = *(&this->uniqueId1); /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (unsigned __int8)(((v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18); /*0x415c19*/
  (*(void (__thiscall **)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( this->ThunkTo636(2, a2) == 1 ) /*0x415c37*/
    this->ThunkTo159x4(9); /*0x415c3f*/
  return 1; /*0x415c45*/
}
}
// 0x4165C0
namespace gamemd {
void AircraftClass_DeployWithAnim()
{
  int v11; // ebp
  void **v13; // ebx
  void *v14; // edi
  int *v15; // eax
  _BYTE v16[8]; // [esp+Ch] [ebp-8h] BYREF

  v11 = FootClass::ProcessDeploy(a1, a3, a4, a5, a6, a7, a8, a9, a10); /*0x4165f1*/
  if ( v11 == 4 ) /*0x4165f6*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 952))(a1, 0, a2); /*0x416613*/
    if ( *(int *)(a1[433] + 1852) > 0 ) /*0x416627*/
    {
      v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x416633*/
      if ( v13 ) /*0x41663a*/
      {
        v14 = *(void **)(*(_DWORD *)(a1[433] + 1840) /*0x416671*/
                       + 4
                       * ((unsigned int)Random::State((_DWORD *)g_ScenarioClass_Instance + 134)
                        % *(_DWORD *)(a1[433] + 1852)));
        v15 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 164))(a1, v16); /*0x41667b*/
        AnimClass::ctor(v13, v14, v15, 0, 1, (void *)0x600, 0, 0); /*0x416685*/
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 988))(a1, a8) ) /*0x416694*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 248))(a1); /*0x4166a3*/
  }
  else if ( v11 == 5 ) /*0x4165f9*/
  {
    return 5; /*0x416609*/
  }
  return v11; /*0x4165ff*/
}
}
// 0x417CC0
namespace gamemd {
AircraftTypeClass * * AircraftClass::GetCursorOverObject(IUnknown * aP1, IUnknown * a3)
{
  int v3; // ebp
  int *v4; // edi
  int result; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  char v18[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a3; /*0x417cc5*/
  v4 = (int *)aP1; /*0x417ccb*/
  result = InfantryClass::GetCursorOverObject((void *)this, aP1, a3); /*0x417cd3*/
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && this->Type->qE0D ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( this->Type->qDFC && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(&this->u32_D80)) ) /*0x417d16*/
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(&this->u32_D80), (int)v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (LOBYTE(a3) = v4[5] & 1, !(_BYTE)a3)
        || (v8 = (_DWORD *)(*(int (__thiscall **)(int *))(*v4 + 60))(v4), Object::IsAlliedWithObjectHouse(v8, this)) )
      {
        if ( !this->q118 && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v4 + 72))(v4, v18); /*0x417d89*/
    LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    v10 = *(_DWORD *)this; /*0x417dc0*/
    aP1 = a3; /*0x417dc4*/
    v7 = (*(int (__thiscall **)(int, int *, _DWORD, int))(v10 + 112))(this, &aP1, 0, v3); /*0x417dcb*/
  }
  LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( this->inAirFlag ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
  LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
  LABEL_24:
  if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(&this->u32_D80)) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4[328]; /*0x417e16*/
      if ( *(_BYTE *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = this->Type->u32_3F8; /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = this->Type->BuildingTypeList_Items; /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !Array::ContainsValue(v4, this) /*0x417e76*/
          || v4[70]
          || (v7 = 3, (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)&this->transporter2))(this, 15, v4) != 1) )
        {
  LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( this->Type->qDFC && v7 == 17 ) /*0x417e90*/
  {
    a3 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*v4 + 440))(v4, &aP1); /*0x417eaa*/
    if ( a3 != g_AircraftStatusFlag ) /*0x417eae*/
    {
      v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3); /*0x417ecc*/
      v16 = Cell::IsBridge(v15); /*0x417ed3*/
      if ( v16 ) /*0x417eda*/
      {
        if ( *(_BYTE *)(v16[328] + 5821) ) /*0x417ee6*/
          return 0; /*0x417efb*/
      }
    }
  }
  else if ( v7 == 2 ) /*0x417f01*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (__thiscall **)(int *, int))(*v4 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (__thiscall **)(int *, int))(*v4 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(int *))(*v4 + 136))(v4) + 563) ) /*0x417f59*/
  {
    return 2; /*0x417f63*/
  }
  return v7; /*0x417cdf*/
}
}
// 0x4196B0
namespace gamemd {
int AircraftClass::ValidateLandingCell(unsigned int * a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // esi
  _DWORD *v10; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  v7 = this->team; /*0x4196bc*/
  if ( v7 && TechnoClass::IsWaypointHidden(v7) && !Type::CheckAmbiguity(&MapClass_Instance, (int)a2, 1) ) /*0x4196d7*/
    return 0; /*0x4196d7*/
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(_BYTE *)(v8 + 20) & 1) == 0
     || (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), *(#375 **)(&this->u32_D80))
     || *(_DWORD *)(v8 + 544) != 2
     && !g_IKnowWhatImDoing
     && ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3226)))
    && !Cell::IsBuildable((int)a2, 4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( g_GameMode_Current[0] ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !this->isOwnedByCurrentPlayer ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( this->isALoaner ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !Cell::IsPassable(v10) ) /*0x419793*/
    return 0; /*0x4197ac*/
  else
    return 7; /*0x41979e*/
}
}
// 0x41A940
namespace gamemd {
int AircraftClass::EvaluateTargetingState()
{
  int v2; // edi

  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(&this->currentMission3) + 188))(*(&this->currentMission3)); /*0x41a956*/
  if ( this->GetZAboveGround() == v2 ) /*0x41a960*/
  {
    if ( !*(&this->lastLayer3) ) /*0x41a962*/
      this->ValidatePlacement(0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !*(&this->q04C1) /*0x41a99c*/
      && this->HasActiveParam()
      && !Team::AllMembersValid(this) )
    {
      this->ValidatePlacement(0, 1); /*0x41a9ad*/
    }
    if ( *(&this->q0443) ) /*0x41a9b3*/
    {
      this->ProcessLanding(1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget(this); /*0x41a9d5*/
    }
  }
}
}
// 0x41AA80
namespace gamemd {
void* AircraftClass_AssignDestination_SyncLog()
{
  void *ClosestPlacementCell; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int *v11; // ebx
  int v12; // eax
  int v13; // eax
  int *v14; // ebx
  int v15; // eax

  ClosestPlacementCell = a3; /*0x41aa83*/
  if ( !a3 ) /*0x41aa8b*/
  {
  LABEL_53:
    LOBYTE(v6) = FootClass::AssignDestination((int)a1, (int)ClosestPlacementCell, a4); /*0x41adac*/
    return v6; /*0x41adb4*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 84))(a3) ) /*0x41aa9a*/
  {
    if ( (*(int (__stdcall **)(_DWORD *))(a3[1] + 12))(a3 + 1) != 6 /*0x41aada*/
      || (*(int (__thiscall **)(int *))(*a1 + 388))(a1) != 7 && a1[45] != 7 )
    {
      goto LABEL_35; /*0x41aada*/
    }
    if ( Team::AllMembersValid(a1) ) /*0x41aae8*/
    {
      v10 = (int *)AbstractClass::IsTechnoType(a3); /*0x41ac4e*/
      v11 = v10; /*0x41ac53*/
      if ( !v10 ) /*0x41ac57*/
        goto LABEL_35; /*0x41ac57*/
      if ( Array::ContainsValue(v10, (int)a1) ) /*0x41ac5c*/
      {
        if ( Array::Contains(v11, (int)a1) ) /*0x41ac72*/
          goto LABEL_35; /*0x41ac72*/
        v6 = (*(int (__thiscall **)(int *, int))(*a1 + 628))(a1, 14); /*0x41ac81*/
        if ( v6 == 1 ) /*0x41ac8a*/
          return v6; /*0x41ac8a*/
        (*(void (__thiscall **)(int *, int))(*a1 + 628))(a1, 3); /*0x41ac96*/
        v12 = a3[328]; /*0x41ac9c*/
        if ( !*(_BYTE *)(v12 + 5801) && !*(_BYTE *)(v12 + 5802) ) /*0x41acac*/
          goto LABEL_35; /*0x41acb4*/
        TechnoClass::SetFocus(a1, (int)a3); /*0x41acb9*/
        goto LABEL_34; /*0x41acb9*/
      }
    }
    else
    {
      if ( !Array::ContainsValue(a3, (int)a1) ) /*0x41aaf8*/
      {
        TechnoClass::SetFocus(a1, (int)a3); /*0x41ab09*/
        if ( *(_BYTE *)(a3[328] + 5835) ) /*0x41ab1a*/
        {
          ClosestPlacementCell = (void *)(*(int (__thiscall **)(int *, int, _DWORD, _DWORD, int))(*a1 + 1320))( /*0x41ab4a*/
                                           a1,
                                           a1[433] + 1000,
                                           0,
                                           0,
                                           a2);
          (*(void (__thiscall **)(int *, _DWORD, int))(*a1 + 1152))(a1, 0, 1); /*0x41ab4c*/
          v7 = 2; /*0x41ab54*/
          if ( ClosestPlacementCell /*0x41ab6b*/
            && (*(int (__thiscall **)(int *, int, void *))(*a1 + 632))(a1, 15, ClosestPlacementCell) == 1 )
          {
            (*(void (__thiscall **)(int *, int, void *))(*a1 + 632))(a1, 2, ClosestPlacementCell); /*0x41ab73*/
            v7 = 7; /*0x41ab79*/
          }
          else
          {
            ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(a1); /*0x41ab87*/
          }
          (*(void (__thiscall **)(int *, int))(*a1 + 488))(a1, v7); /*0x41ab90*/
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 512))(a1) ) /*0x41ab9a*/
            (*(void (__thiscall **)(int *))(*a1 + 492))(a1); /*0x41aba8*/
        }
        if ( *(_BYTE *)(a3[328] + 5801) ) /*0x41abb2*/
        {
          a1[320] = (int)a3; /*0x41abc4*/
  LABEL_34:
          ClosestPlacementCell = 0; /*0x41acbe*/
        }
  LABEL_35:
        v13 = (*(int (__thiscall **)(int *))(*a1 + 444))(a1); /*0x41acc0*/
        if ( (*(_DWORD *)(v13 + 320) & 0x100) == 0 ) /*0x41acd3*/
        {
          v14 = *(int **)(v13 + 228); /*0x41acd9*/
          if ( v14 ) /*0x41ace1*/
          {
            while ( v14 == a1 || (*(int (__thiscall **)(int *))(*v14 + 44))(v14) != 6 ) /*0x41acf5*/
            {
              v14 = (int *)v14[12]; /*0x41acf7*/
              if ( !v14 ) /*0x41acfc*/
                goto LABEL_53; /*0x41acfc*/
            }
            v15 = v14[328]; /*0x41ad19*/
            if ( *(_BYTE *)(v15 + 5801) || *(_BYTE *)(v15 + 5802) ) /*0x41ad29*/
            {
              if ( !a1[413] ) /*0x41ad33*/
                WinAPI::Wrapper(-2147467261); /*0x41ad42*/
              if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1[413] + 96))(a1[413]) /*0x41ad5d*/
                && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( !a1[413] ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (__stdcall **)(int))(*(_DWORD *)a1[413] + 88))(a1[413]); /*0x41ad83*/
              }
              if ( (int *)Team::GetMember(a1, 0) == v14 && ClosestPlacementCell != (void *)Team::GetMember(a1, 0) ) /*0x41ad9e*/
                (*(void (__thiscall **)(int *, int))(*a1 + 628))(a1, 3); /*0x41ada6*/
            }
          }
        }
        goto LABEL_53; /*0x41ada6*/
      }
      if ( (*(int (__thiscall **)(int *, int, _DWORD *))(*a1 + 632))(a1, 14, a3) != 1 ) /*0x41abdf*/
      {
        (*(void (__thiscall **)(int *, int))(*a1 + 628))(a1, 3); /*0x41abe7*/
        v8 = a3[328]; /*0x41abed*/
        if ( *(_BYTE *)(v8 + 5801) || *(_BYTE *)(v8 + 5802) ) /*0x41abfd*/
        {
          TechnoClass::SetFocus(a1, (int)a3); /*0x41ac0a*/
          ClosestPlacementCell = 0; /*0x41ac0f*/
        }
      }
      v9 = a3[328]; /*0x41ac11*/
      if ( *(_BYTE *)(v9 + 5801) || *(_BYTE *)(v9 + 5802) ) /*0x41ac21*/
      {
        if ( a1[361] ) /*0x41ac38*/
          TechnoClass::SetFocus(a1, a1[361]); /*0x41ac45*/
        goto LABEL_35; /*0x41ac4a*/
      }
    }
    TechnoClass::SetFocus(a1, (int)ClosestPlacementCell); /*0x41ac2e*/
    goto LABEL_35; /*0x41ac33*/
  }
  LOBYTE(v6) = FootClass::AssignDestination((int)a1, 0, a4); /*0x41aaa6*/
  return v6; /*0x41aaab*/
}
}
// 0x41ADF0
namespace gamemd {
int AircraftClass::RevealSight(int a2, int a3)
{
  int v4; // ebx
  #375 *v5; // edx
  int v6; // edx
  int v7; // eax
  #375 *v8; // edx
  int result; // eax
  int CrateImg; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(_DWORD *)(*(&this->currentMission3) + 1512); /*0x41ae00*/
  if ( !this->GetZAboveGround() ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
  LABEL_4:
    v17 = *(&this->vtable49); /*0x41ae1f*/
    v18 = *(&this->uniqueId0); /*0x41ae40*/
    v5 = (#375 *)*(&this->attachedTag5); /*0x41ae44*/
    v19 = *(&this->uniqueId1); /*0x41ae4e*/
    MapClass::RevealArea1(&v17, v4, v5, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = *(&this->uniqueId0); /*0x41ae65*/
    v7 = *(&this->uniqueId1); /*0x41ae68*/
    v17 = *(&this->vtable49); /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = (#375 *)*(&this->attachedTag5); /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1(&v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = *(_DWORD *)g_ScenarioClass_Instance; /*0x41aeaa*/
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x41aeaf*/
  {
    CrateImg = g_RulesClass_Instance->CrateImg; /*0x41aec5*/
    v17 = *(&this->vtable49); /*0x41aecd*/
    v18 = *(&this->uniqueId0); /*0x41aed6*/
    v11 = *this; /*0x41aeda*/
    v19 = *(&this->uniqueId1); /*0x41aedf*/
    v12 = this->GetZAboveGround(); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      &v17,
      CrateImg,
      (#375 *)*(&this->attachedTag5),
      0,
      0,
      1,
      v12 < g_RulesClass_Instance->BuildBarracks[3] / 2,
      0);
    v13 = *(&this->uniqueId0); /*0x41af21*/
    v14 = *(&this->uniqueId1); /*0x41af24*/
    v17 = *(&this->vtable49); /*0x41af27*/
    v15 = *this; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = this->GetZAboveGround(); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             &v17,
             CrateImg,
             (#375 *)*(&this->attachedTag5),
             0,
             0,
             1,
             v16 < g_RulesClass_Instance->BuildBarracks[3] / 2,
             1);
  }
  return result; /*0x41ae9b*/
}
}
// 0x41B430
namespace gamemd {
void* AircraftClass::LoadFromStream(unsigned int * a0, FootClass * aP1)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  signed int v6; // ecx
  size_t i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  v2 = a0; /*0x41b432*/
  v3 = a0 + 1; /*0x41b43a*/
  a0 = (_DWORD *)(*(int (__stdcall **)(_DWORD *))(a0[1] + 16))(a0 + 1); /*0x41b44b*/
  v4 = BuildingTypeClass::Dequeue((char **)&g_BuildingLoadQueue_Array, (int *)&a0); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (int)(v4 - (_DWORD)g_BuildingLoadQueue_Array) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = g_BuildingLoadQueue_Count; v6 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x41b470*/
      {
        v8 = (char *)g_BuildingLoadQueue_Array + 8 * v6++; /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      g_BuildingLoadQueue_Count = i - 1; /*0x41b499*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x41b49e*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x41b4ae*/
      g_BuildingLoadQueue_Active = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, aP1); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = v2[413]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit(&a0); /*0x41b4dc*/
      *v2 = &AircraftClass::`vftable'; /*0x41b4e1*/
      *v3 = &AircraftClass::`vftable'; /*0x41b4e7*/
      v2[2] = &AircraftClass::`vftable'; /*0x41b4ed*/
      v2[3] = &AircraftClass::`vftable'; /*0x41b4f4*/
      v2[432] = &AircraftClass::`vftable'; /*0x41b4fb*/
    }
    v11 = v2[413]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      v2[413] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x41b53d*/
    v13 = g_BuildingLoadQueue_Capacity; /*0x41b53f*/
    if ( (int)(g_BuildingLoadQueue_Count + 1) <= g_BuildingLoadQueue_Capacity ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !g_BuildingLoadQueue_Capacity ) /*0x41b54c*/
      v13 = 10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, v13) ) /*0x41b559*/
    {
  LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = v12; /*0x41b56d*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = v2; /*0x41b57b*/
      g_BuildingLoadQueue_Dirty = 0; /*0x41b585*/
      ++g_BuildingLoadQueue_Count; /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 433); /*0x41b59d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 435); /*0x41b5ae*/
    return 0; /*0x41b5b3*/
  }
  return result; /*0x41b5b5*/
}
}
// 0x41B9F0
namespace gamemd {
int AircraftClass::UpdateDocking(int a2)
{
  int result; // eax

  switch ( this->currentMission ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( this->airstrike ) /*0x41ba12*/
        goto LABEL_4; /*0x41ba1a*/
      result = a2 - 4; /*0x41ba1c*/
      switch ( a2 ) /*0x41ba2c*/
      {
        case 4: /*0x41ba2c*/
        case 26: /*0x41ba2c*/
        case 27: /*0x41ba2c*/
        case 30: /*0x41ba2c*/
        case 31: /*0x41ba2c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
  LABEL_4:
      result = MissionClass::SetState((#377 *)this); /*0x41ba33*/
      break; /*0x41ba34*/
  }
  return result; /*0x41ba39*/
}
}
// 0x41BB30
namespace gamemd {
int AircraftClass::OverrideMission_SyncLog(int a2, int a3, int a4)
{
  int result; // eax

  switch ( this->currentMission ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( this->airstrike ) /*0x41bb52*/
        goto LABEL_4; /*0x41bb5a*/
      result = a2 - 4; /*0x41bb5c*/
      switch ( a2 ) /*0x41bb6c*/
      {
        case 4: /*0x41bb6c*/
        case 26: /*0x41bb6c*/
        case 27: /*0x41bb6c*/
        case 30: /*0x41bb6c*/
        case 31: /*0x41bb6c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
  LABEL_4:
      result = FootClass::OverrideMission_SyncLog((#377 *)this, a2, a3, a4); /*0x41bb73*/
      break; /*0x41bb7e*/
  }
  return result; /*0x41bb83*/
}
}
// 0x417BD0
namespace gamemd {
char AircraftClass::ValidateMovement(int _10, int * a2, int a4)
{
  int v5; // eax
  char result; // al

  v5 = ((__int64 (__thiscall *)(_DWORD *, int *, int))*(_DWORD *)(*this + 116))(this, a2, a4); /*0x417be1*/
  switch ( v5 ) /*0x417bf4*/
  {
    case 2: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3: /*0x417bf4*/
      result = this->ExecuteMissionCmd(7, 0, a2, 0); /*0x417c25*/
      break; /*0x417c2e*/
    case 4: /*0x417bf4*/
      result = this->ExecuteMissionCmd(16, 0, 0, 0); /*0x417c3d*/
      break; /*0x417c46*/
    case 17: /*0x417bf4*/
      result = this->ExecuteMissionCmd(2, 0, a2, 0); /*0x417c06*/
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove(this, v5, a2, a4); /*0x417c4e*/
      break; /*0x417c4e*/
  }
  return result; /*0x417c0c*/
}
} // namespace gamemd

// 0x417F80
namespace gamemd {
int AircraftClass::CanEnterCell(short * a1, IUnknown * aP2, InfantryClass * aP3)
{
  int v6; // edi

  if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(&this->u32_D80)) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((int *)this, a1, aP2, aP3); /*0x417faf*/
  if ( v6 == 5 && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)&this->q1946))(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/
}
} // namespace gamemd

// 0x41A590
namespace gamemd {
char * AircraftClass::CheckLandingClearance(int a2, int a3, int a4)
{
  char *result; // eax

  result = MissionClass::GetMissionControl(this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (char *)this->ValidatePlacement(0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/
}
} // namespace gamemd

// 0x41ADC0
namespace gamemd {
int AircraftClass::ProcessDockCheck()
{
  if ( !*(&this->q0A43) ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(&this->q0A43) + 116))(*(&this->q0A43)); /*0x41ade3*/
}
} // namespace gamemd

// 0x41B5C0
namespace gamemd {
HRESULT AircraftClass::CheckPassengerCount(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2)
{
  return ObjectClass::SaveToStream_Common(a0, aP1, a2); /*0x41b5d4*/
}
} // namespace gamemd

// 0x41B980
namespace gamemd {
int AircraftClass::IsBelowScreen()
{
  int v1; // eax

  v1 = this->Type; /*0x41b989*/
  if ( v1 != LODWORD(g_RulesClass_Instance->MissileROTVar) && v1 != g_RulesClass_Instance->HoverHeight ) /*0x41b99d*/
    return ObjectClass::IsBelowScreen(this); /*0x41b9a1*/
  if ( !this->locomotor ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)&this->q0A43) + 128))(this->locomotor) == 0; /*0x41b9a6*/
}
} // namespace gamemd

// 0x41BE60
namespace gamemd {
int AircraftClass::LandingCheckStub()
{
  return 0; /*0x41be62*/
}
} // namespace gamemd

// 0x41BE80
namespace gamemd {
int AircraftClass::CheckStateFlag()
{
  int result; // eax

  return result; /*0x41be80*/
}
} // namespace gamemd

// 0x41BE90
namespace gamemd {
int AircraftClass::CheckStateFlag2()
{
  int result; // eax

  return result; /*0x41be90*/
}
} // namespace gamemd

// 0x41C020
namespace gamemd {
int AircraftClass::CheckReloadTimer()
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c020*/
  return result; /*0x41c026*/
}
} // namespace gamemd

// 0x41C070
namespace gamemd {
char AircraftClass::CheckDockState()
{
  return *(&this->isBerserk8); /*0x41c076*/
}
} // namespace gamemd

// 0x41C190
namespace gamemd {
int AircraftClass::PowerDrainProcess(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x41c196*/
    return -2147467261; /*0x41c198*/
  *a2 = 237448642; /*0x41c1a6*/
  a2[1] = 298949647; /*0x41c1ae*/
  a2[2] = -1610610249; /*0x41c1b7*/
  a2[3] = -777003740; /*0x41c1c0*/
  return 0; /*0x41c19d*/
}
} // namespace gamemd

// 0x41C1D0
namespace gamemd {
int AircraftClass::CheckMissionAbort()
{
  return *(_DWORD *)(*(&this->currentMission3) + 96); /*0x41c1d9*/
}
} // namespace gamemd

// 0x41C200
namespace gamemd {
int AircraftClass::CheckMissionFail()
{
  return *(&this->currentMission3); /*0x41c206*/
}
} // namespace gamemd

// 0x41C210
namespace gamemd {
AircraftClass * AircraftClass::CheckActionStatus(char a2)
{
  AircraftClass::Destruct(this); /*0x41c213*/
  if ( (a2 & 1) != 0 ) /*0x41c21d*/
    __3_YAXPAX_Z(this); /*0x41c220*/
  return this; /*0x41c22a*/
}
} // namespace gamemd

// 0x5B2E90
namespace gamemd {
int AircraftClass::CheckMissionStatus()
{
  return 450; /*0x5b2e95*/
}
} // namespace gamemd

// 0x5B2F30
namespace gamemd {
int AircraftClass::CheckMissionStatus2()
{
  return 450; /*0x5b2f35*/
}
} // namespace gamemd
