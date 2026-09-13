// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x413F80
namespace gamemd {
unsigned int * AircraftClass::Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall AircraftClass::Update(int *this)
{
  _DWORD *result; // eax
  AircraftTypeClass *v4; // edi
  HouseClass *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  AircraftTypeClass **v9; // eax
  DirStruct *Value; // eax
  int v11; // edi
  int v12; // eax
  AircraftTypeClass *v13; // eax
  int v14; // ecx
  HouseClass *v15; // ecx
  BuildingClass *v16; // [esp+0h] [ebp-Ch]
  FootClass *v17; // [esp+4h] [ebp-8h]
  _BYTE v18[4]; // [esp+8h] [ebp-4h] BYREF

  result = TechnoClass::Update(v16, v17); /*0x413f85*/
  v4 = (AircraftTypeClass *)this[433]; /*0x413f8a*/
  if ( v4 ) /*0x413f92*/
  {
    v5 = (HouseClass *)this[135]; /*0x413f98*/
    if ( v5 ) /*0x413fa1*/
    {
      v6 = 0; /*0x413fa6*/
      v7 = v5->relatedTagsCapacity + 388; /*0x413fa8*/
      v8 = *(_DWORD *)(v7 + 16); /*0x413fad*/
      if ( v8 > 0 ) /*0x413fb2*/
      {
        v9 = *(AircraftTypeClass ***)(v7 + 4); /*0x413fb4*/
        while ( *v9 != v4 ) /*0x413fb9*/
        {
          ++v6; /*0x413fbb*/
          ++v9; /*0x413fbc*/
          if ( v6 >= v8 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Power::ChangedHouse(this + 84, 1); /*0x413fcd*/
      }
    }
LABEL_9:
    BuildingTypeClass::GetPowerOutput((_WORD *)this + 452, *(ObjectClass **)(this[433] + 1820)); /*0x413fd2*/
    BuildingTypeClass::GetPowerOutput((_WORD *)this + 464, *(ObjectClass **)(this[433] + 1820)); /*0x414001*/
    Value = (DirStruct *)ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)v18); /*0x41400d*/
    FacingClass::Set_SyncLog((FacingClass *)(this + 232), Value); /*0x414015*/
    v11 = *this; /*0x414020*/
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this[433] + 188))(this[433]); /*0x414024*/
    (*(void (__thiscall **)(int *, int))(v11 + 460))(this, v12); /*0x41402d*/
    v13 = (AircraftTypeClass *)this[433]; /*0x414033*/
    v14 = *(_DWORD *)&v13[2].Name[28]; /*0x41403a*/
    if ( v14 == -1 ) /*0x414043*/
      v14 = *(_DWORD *)&v13[2].Name[32]; /*0x414045*/
    this[191] = v14; /*0x41404b*/
    result = (_DWORD *)v13->Strength; /*0x414051*/
    this[27] = (int)result; /*0x414057*/
    this[28] = (int)result; /*0x41405a*/
  }
  v15 = (HouseClass *)this[135]; /*0x41405d*/
  if ( v15 ) /*0x414065*/
    return (_DWORD *)BuildingClass::PowerUpdate(v15, (TechnoClass *)this); /*0x414068*/
  return result; /*0x41406d*/
}
}
} // namespace gamemd

// 0x415B10
namespace gamemd {
int AircraftClass::FindLandingCell(int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::FindLandingCell(_DWORD *this, int *a2, int a3)
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
    v7 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 440))(this, v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + LOWORD(MEMORY[0x89F688][v8]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    LOWORD(v22) = v10; /*0x415b6b*/
    HIWORD(v22) = v7[1] + *(_WORD *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x415b87*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  LOWORD(v22) = (unsigned __int16)dword_817A58[v19] << 13; /*0x415bc3*/
  v13 = *(this + 40); /*0x415bc8*/
  v21[0] = *(this + 39); /*0x415bcb*/
  v14 = *(this + 41); /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (unsigned __int8)(((v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x415c19*/
  (*(void (__thiscall **)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, a2) == 1 ) /*0x415c37*/
    (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 9); /*0x415c3f*/
  return 1; /*0x415c45*/
}
}
} // namespace gamemd

// 0x4165C0
namespace gamemd {
int AircraftClass_DeployWithAnim()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge AircraftClass::DeployWithAnim@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        IUnknown *aP0,
        FootClass *aP1,
        FootClass *aP2,
        FootClass *aP3,
        FootClass *aP4,
        FootClass *aP5,
        FootClass *aP6)
{
  int v11; // ebp
  AircraftTypeClass *v13; // ebx
  CoordStruct *v14; // edi
  CoordStruct *v15; // eax
  AircraftClass *v16; // [esp+0h] [ebp-14h]
  _BYTE v17[8]; // [esp+Ch] [ebp-8h] BYREF

  v11 = FootClass::ProcessDeploy(aP0, aP1, aP2, aP3, aP4, aP5, aP6, v16); /*0x4165f1*/
  if ( v11 == 4 ) /*0x4165f6*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 952))(a1, 0, a2); /*0x416613*/
    if ( *(int *)(a1[433] + 1852) > 0 ) /*0x416627*/
    {
      v13 = (AircraftTypeClass *)__2_YAPAXI_Z(0x1C8u); /*0x416633*/
      if ( v13 ) /*0x41663a*/
      {
        v14 = *(CoordStruct **)(*(_DWORD *)(a1[433] + 1840) /*0x416671*/
                              + 4
                              * ((unsigned int)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                      + 536))
                               % *(_DWORD *)(a1[433] + 1852)));
        v15 = (CoordStruct *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 164))(a1, v17); /*0x41667b*/
        AnimClass::ctor((void **)v13, v14, v15, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x416685*/
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, FootClass *))(*a1 + 988))(a1, aP4) ) /*0x416694*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 248))(a1); /*0x4166a3*/
  }
  else if ( v11 == 5 ) /*0x4165f9*/
  {
    return 5; /*0x416609*/
  }
  return v11; /*0x4165ff*/
}
}
} // namespace gamemd

// 0x417BD0
namespace gamemd {
char AircraftClass::ValidateMovement(int _10, int * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall AircraftClass::ValidateMovement(_DWORD *this, int _10, int *a2, int a4)
{
  FootClass *v5; // eax
  char result; // al

  v5 = (FootClass *)(*(unsigned int (__thiscall **)(_DWORD *, int *, int))(*this + 116))(this, a2, a4); /*0x417be1*/
  switch ( (unsigned int)v5 ) /*0x417bf4*/
  {
    case 2u: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3u: /*0x417bf4*/
      result = (*(char (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 7, 0, a2, 0); /*0x417c25*/
      break; /*0x417c2e*/
    case 4u: /*0x417bf4*/
      result = (*(char (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*this + 888))(this, 16, 0, 0, 0); /*0x417c3d*/
      break; /*0x417c46*/
    case 0x11u: /*0x417bf4*/
      result = (*(char (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 2, 0, a2, 0); /*0x417c06*/
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove(this, v5, a2, a4); /*0x417c4e*/
      break; /*0x417c4e*/
  }
  return result; /*0x417c0c*/
}
}
} // namespace gamemd

// 0x417CC0
namespace gamemd {
int AircraftClass::GetCursorOverObject(IUnknown * aP1, IUnknown * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::GetCursorOverObject(IUnknown *this, IUnknown *aP1, IUnknown *a3)
{
  IUnknown *v3; // ebp
  IUnknown *v4; // edi
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
  v4 = aP1; /*0x417ccb*/
  result = InfantryClass::GetCursorOverObject(this, aP1, (char)a3); /*0x417cd3*/
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && *(_BYTE *)(*(_DWORD *)&this->__pad_690[52] + 3597) ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_690[52] + 3580) /*0x417d16*/
    && (unsigned __int8)House::IsHumanPlayer((#375 *)this->field_21C) )
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( Object::IsAlliedWithObjectHouse((_DWORD *)this->field_21C, v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (LOBYTE(a3) = v4->__pad_10[4] & 1, !(_BYTE)a3)
        || (v8 = (_DWORD *)(*(int (__thiscall **)(IUnknown *))(v4->field_0 + 60))(v4),
            Object::IsAlliedWithObjectHouse(v8, this)) )
      {
        if ( !this->field_118 && (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))(v4->field_0 + 72))(v4, v18); /*0x417d89*/
    LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    v10 = this->field_0; /*0x417dc0*/
    aP1 = a3; /*0x417dc4*/
    v7 = (*(int (__thiscall **)(IUnknown *, IUnknown **, _DWORD, IUnknown *))(v10 + 112))(this, &aP1, 0, v3); /*0x417dcb*/
  }
LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( *(_DWORD *)&this->__pad_FC[24] ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 1016))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
LABEL_24:
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->field_21C) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4->field_520; /*0x417e16*/
      if ( *(_BYTE *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = *(_DWORD *)(*(_DWORD *)&this->__pad_690[52] + 1016); /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = *(_DWORD **)(*(_DWORD *)&this->__pad_690[52] + 1004); /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !Array::ContainsValue(&v4->field_0, this) /*0x417e76*/
          || v4->field_118
          || (v7 = 3, (*(int (__thiscall **)(IUnknown *, int, IUnknown *))(this->field_0 + 632))(this, 15, v4) != 1) )
        {
LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_690[52] + 3580) && v7 == 17 ) /*0x417e90*/
  {
    a3 = *(IUnknown **)(*(int (__thiscall **)(IUnknown *, IUnknown **))(v4->field_0 + 440))(v4, &aP1); /*0x417eaa*/
    if ( a3 != *(IUnknown **)&MEMORY[0x87F8E4].__pad_5568[20508] ) /*0x417eae*/
    {
      v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x417ecc*/
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
    if ( (*(unsigned __int8 (__thiscall **)(IUnknown *))(v4->field_0 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (__thiscall **)(IUnknown *, int))(v4->field_0 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (__thiscall **)(IUnknown *, int))(v4->field_0 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(v4->field_0 + 136))(v4) + 563) ) /*0x417f59*/
  {
    return 2; /*0x417f63*/
  }
  return v7; /*0x417cdf*/
}
}
} // namespace gamemd

// 0x417F80
namespace gamemd {
int AircraftClass::CanEnterCell(short * a1, IUnknown * aP2, InfantryClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::CanEnterCell(int this, __int16 *a1, IUnknown *aP2, InfantryClass *aP3)
{
  int v6; // edi

  if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((int *)this, a1, aP2, aP3); /*0x417faf*/
  if ( v6 == 5 && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/
}
}
} // namespace gamemd

// 0x4196B0
namespace gamemd {
int AircraftClass::ValidateLandingCell(unsigned int * a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::ValidateLandingCell(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // esi
  _DWORD *v10; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  v7 = this->team; /*0x4196bc*/
  if ( v7 && TechnoClass::IsWaypointHidden(v7) && !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)a2, 1) ) /*0x4196d7*/
    return 0; /*0x4196d7*/
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(_BYTE *)(v8 + 20) & 1) == 0
     || (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), *(#375 **)(this + 540))
     || *(_DWORD *)(v8 + 544) != 2
     && !MEMORY[0xA8E7AC]
     && ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3226)))
    && !Cell::IsBuildable((int)a2, 4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( MEMORY[0xA8B238][0] ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !*(_BYTE *)(this + 1050) ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( *(_BYTE *)(this + 980) ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !Cell::IsPassable(v10) ) /*0x419793*/
    return 0; /*0x4197ac*/
  else
    return 7; /*0x41979e*/
}
}
} // namespace gamemd

// 0x41A590
namespace gamemd {
char * AircraftClass::CheckLandingClearance(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall AircraftClass::_vt93(_DWORD *this, int a2, int a3, int a4)
{
  char *result; // eax

  result = MissionClass::GetMissionControl(this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (char *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/
}
}
} // namespace gamemd

// 0x41A940
namespace gamemd {
int AircraftClass::EvaluateTargetingState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt136(int *this)
{
  int v2; // edi

  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 433) + 188))(*(this + 433)); /*0x41a956*/
  if ( (*(int (__thiscall **)(int *))(*this + 456))(this) == v2 ) /*0x41a960*/
  {
    if ( !*(this + 373) ) /*0x41a962*/
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !*(this + 191) /*0x41a99c*/
      && (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this)
      && !Team::AllMembersValid(this) )
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x41a9ad*/
    }
    if ( *(this + 173) ) /*0x41a9b3*/
    {
      (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget(this); /*0x41a9d5*/
    }
  }
}
}
} // namespace gamemd

// 0x41AA80
namespace gamemd {
int AircraftClass_AssignDestination_SyncLog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __userpurge AircraftClass::AssignDestination_SyncLog@<al>(
        IUnknown *a1@<ecx>,
        int a2@<ebp>,
        IUnknown *aP1,
        TechnoClass *aP2)
{
  IUnknown *ClosestPlacementCell; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  ObjectClass *v10; // eax
  ObjectClass *v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax

  ClosestPlacementCell = aP1; /*0x41aa83*/
  if ( !aP1 ) /*0x41aa8b*/
  {
LABEL_53:
    LOBYTE(v6) = FootClass::AssignDestination((int)a1, (int)ClosestPlacementCell, aP2); /*0x41adac*/
    return v6; /*0x41adb4*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(IUnknown *))(aP1->field_0 + 84))(aP1) ) /*0x41aa9a*/
  {
    if ( (*(int (__stdcall **)(int *))(aP1->field_4 + 12))(&aP1->field_4) != 6 /*0x41aada*/
      || (*(int (__thiscall **)(IUnknown *))(a1->field_0 + 388))(a1) != 7 && *(_DWORD *)&a1->__pad_A8[12] != 7 )
    {
      goto LABEL_35; /*0x41aada*/
    }
    if ( Team::AllMembersValid(&a1->field_0) ) /*0x41aae8*/
    {
      v10 = (ObjectClass *)AbstractClass::IsTechnoType(aP1); /*0x41ac4e*/
      v11 = v10; /*0x41ac53*/
      if ( !v10 ) /*0x41ac57*/
        goto LABEL_35; /*0x41ac57*/
      if ( Array::ContainsValue((int *)v10->__pad_0, a1) ) /*0x41ac5c*/
      {
        if ( Array::Contains((int *)v11->__pad_0, a1) ) /*0x41ac72*/
          goto LABEL_35; /*0x41ac72*/
        v6 = (*(int (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 14); /*0x41ac81*/
        if ( v6 == 1 ) /*0x41ac8a*/
          return v6; /*0x41ac8a*/
        (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 3); /*0x41ac96*/
        v12 = aP1->field_520; /*0x41ac9c*/
        if ( !*(_BYTE *)(v12 + 5801) && !*(_BYTE *)(v12 + 5802) ) /*0x41acac*/
          goto LABEL_35; /*0x41acb4*/
        TechnoClass::SetFocus(a1, aP1); /*0x41acb9*/
        goto LABEL_34; /*0x41acb9*/
      }
    }
    else
    {
      if ( !Array::ContainsValue(&aP1->field_0, a1) ) /*0x41aaf8*/
      {
        TechnoClass::SetFocus(a1, aP1); /*0x41ab09*/
        if ( *(_BYTE *)(aP1->field_520 + 5835) ) /*0x41ab1a*/
        {
          ClosestPlacementCell = (IUnknown *)(*(int (__thiscall **)(IUnknown *, int, _DWORD, _DWORD, int))(a1->field_0 + 1320))( /*0x41ab4a*/
                                               a1,
                                               *(_DWORD *)&a1->__pad_690[52] + 1000,
                                               0,
                                               0,
                                               a2);
          (*(void (__thiscall **)(IUnknown *, _DWORD, int))(a1->field_0 + 1152))(a1, 0, 1); /*0x41ab4c*/
          v7 = 2; /*0x41ab54*/
          if ( ClosestPlacementCell /*0x41ab6b*/
            && (*(int (__thiscall **)(IUnknown *, int, IUnknown *))(a1->field_0 + 632))(a1, 15, ClosestPlacementCell) == 1 )
          {
            (*(void (__thiscall **)(IUnknown *, int, IUnknown *))(a1->field_0 + 632))(a1, 2, ClosestPlacementCell); /*0x41ab73*/
            v7 = 7; /*0x41ab79*/
          }
          else
          {
            ClosestPlacementCell = (IUnknown *)TechnoClass::FindClosestPlacementCell(&a1->field_0); /*0x41ab87*/
          }
          (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 488))(a1, v7); /*0x41ab90*/
          if ( (*(unsigned __int8 (__thiscall **)(IUnknown *))(a1->field_0 + 512))(a1) ) /*0x41ab9a*/
            (*(void (__thiscall **)(IUnknown *))(a1->field_0 + 492))(a1); /*0x41aba8*/
        }
        if ( *(_BYTE *)(aP1->field_520 + 5801) ) /*0x41abb2*/
        {
          *(_DWORD *)&a1->__pad_430[208] = aP1; /*0x41abc4*/
LABEL_34:
          ClosestPlacementCell = 0; /*0x41acbe*/
        }
LABEL_35:
        v13 = (*(int (__thiscall **)(IUnknown *))(a1->field_0 + 444))(a1); /*0x41acc0*/
        if ( (*(_DWORD *)(v13 + 320) & 0x100) == 0 ) /*0x41acd3*/
        {
          v14 = *(_DWORD *)(v13 + 228); /*0x41acd9*/
          if ( v14 ) /*0x41ace1*/
          {
            while ( (IUnknown *)v14 == a1 || (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 6 ) /*0x41acf5*/
            {
              v14 = *(_DWORD *)(v14 + 48); /*0x41acf7*/
              if ( !v14 ) /*0x41acfc*/
                goto LABEL_53; /*0x41acfc*/
            }
            v15 = *(_DWORD *)(v14 + 1312); /*0x41ad19*/
            if ( *(_BYTE *)(v15 + 5801) || *(_BYTE *)(v15 + 5802) ) /*0x41ad29*/
            {
              if ( !*(_DWORD *)&a1->__pad_524[336] ) /*0x41ad33*/
                WinAPI::Wrapper(-2147467261); /*0x41ad42*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&a1->__pad_524[336] + 96))(*(_DWORD *)&a1->__pad_524[336]) /*0x41ad5d*/
                && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( !*(_DWORD *)&a1->__pad_524[336] ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&a1->__pad_524[336] + 88))(*(_DWORD *)&a1->__pad_524[336]); /*0x41ad83*/
              }
              if ( Team::GetMember(a1, 0) == v14 && ClosestPlacementCell != (IUnknown *)Team::GetMember(a1, 0) ) /*0x41ad9e*/
                (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 3); /*0x41ada6*/
            }
          }
        }
        goto LABEL_53; /*0x41ada6*/
      }
      if ( (*(int (__thiscall **)(IUnknown *, int, IUnknown *))(a1->field_0 + 632))(a1, 14, aP1) != 1 ) /*0x41abdf*/
      {
        (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 3); /*0x41abe7*/
        v8 = aP1->field_520; /*0x41abed*/
        if ( *(_BYTE *)(v8 + 5801) || *(_BYTE *)(v8 + 5802) ) /*0x41abfd*/
        {
          TechnoClass::SetFocus(a1, aP1); /*0x41ac0a*/
          ClosestPlacementCell = 0; /*0x41ac0f*/
        }
      }
      v9 = aP1->field_520; /*0x41ac11*/
      if ( *(_BYTE *)(v9 + 5801) || *(_BYTE *)(v9 + 5802) ) /*0x41ac21*/
      {
        if ( *(_DWORD *)&a1->__pad_524[128] ) /*0x41ac38*/
          TechnoClass::SetFocus(a1, *(IUnknown **)&a1->__pad_524[128]); /*0x41ac45*/
        goto LABEL_35; /*0x41ac4a*/
      }
    }
    TechnoClass::SetFocus(a1, ClosestPlacementCell); /*0x41ac2e*/
    goto LABEL_35; /*0x41ac33*/
  }
  LOBYTE(v6) = FootClass::AssignDestination((int)a1, 0, aP2); /*0x41aaa6*/
  return v6; /*0x41aaab*/
}
}
} // namespace gamemd

// 0x41ADC0
namespace gamemd {
int AircraftClass::ProcessDockCheck()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt30(_DWORD *this)
{
  if ( !*(this + 413) ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 116))(*(this + 413)); /*0x41ade3*/
}
}
} // namespace gamemd

// 0x41ADF0
namespace gamemd {
int AircraftClass::RevealSight(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::RevealSight(int *this, int a2, int a3)
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

  v4 = *(_DWORD *)(*(this + 433) + 1512); /*0x41ae00*/
  if ( !(*(int (__thiscall **)(int *))(*this + 456))(this) ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
LABEL_4:
    v17 = *(this + 39); /*0x41ae1f*/
    v18 = *(this + 40); /*0x41ae40*/
    v5 = (#375 *)*(this + 135); /*0x41ae44*/
    v19 = *(this + 41); /*0x41ae4e*/
    MapClass::RevealArea1(&v17, v4, v5, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = *(this + 40); /*0x41ae65*/
    v7 = *(this + 41); /*0x41ae68*/
    v17 = *(this + 39); /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = (#375 *)*(this + 135); /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1(&v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = *(_DWORD *)MEMORY[0xA8B230]; /*0x41aeaa*/
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x41aeaf*/
  {
    CrateImg = MEMORY[0x8871E0]->GUIMainButtonSound; /*0x41aec5*/
    v17 = *(this + 39); /*0x41aecd*/
    v18 = *(this + 40); /*0x41aed6*/
    v11 = *this; /*0x41aeda*/
    v19 = *(this + 41); /*0x41aedf*/
    v12 = (*(int (__thiscall **)(int *))(v11 + 456))(this); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      &v17,
      CrateImg,
      (#375 *)*(this + 135),
      0,
      0,
      1,
      v12 < MEMORY[0x8871E0]->BuildWeapons[3] / 2,
      0);
    v13 = *(this + 40); /*0x41af21*/
    v14 = *(this + 41); /*0x41af24*/
    v17 = *(this + 39); /*0x41af27*/
    v15 = *this; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = (*(int (__thiscall **)(int *))(v15 + 456))(this); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             &v17,
             CrateImg,
             (#375 *)*(this + 135),
             0,
             0,
             1,
             v16 < MEMORY[0x8871E0]->BuildWeapons[3] / 2,
             1);
  }
  return result; /*0x41ae9b*/
}
}
} // namespace gamemd

// 0x41B430
namespace gamemd {
int AircraftClass::LoadFromStream(unsigned int * a0, FootClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AircraftClass::LoadFromStream(_DWORD *a0, FootClass *aP1)
{
  FootClass *v2; // esi
  _DWORD *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  int v6; // ecx
  IUnknown *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  AbstractClass *v13; // eax

  v2 = (FootClass *)a0; /*0x41b432*/
  v3 = a0 + 1; /*0x41b43a*/
  a0 = (_DWORD *)(*(int (__stdcall **)(_DWORD *))(a0[1] + 16))(a0 + 1); /*0x41b44b*/
  v4 = BuildingTypeClass::Dequeue((char **)&stru_B05488.__pad_579C[15388], (BuildingClass *)&a0); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (int)(v4 - *(_DWORD *)&stru_B05488.__pad_579C[15388]) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x41b470*/
            v6 < *(int *)&stru_B05488.__pad_579C[15392];
            i = *(IUnknown **)&stru_B05488.__pad_579C[15392] )
      {
        v8 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * v6++); /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      *(_DWORD *)&stru_B05488.__pad_579C[15392] = (char *)i - 1; /*0x41b499*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = 0; /*0x41b49e*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = 0; /*0x41b4ae*/
      *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common(v2, (LPSTREAM)aP1); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = v2->locomotor[0]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit(v2, (int)&a0); /*0x41b4dc*/
      *(_DWORD *)v2->__pad_0 = &AircraftClass::`vftable'; /*0x41b4e1*/
      *v3 = &AircraftClass::`vftable'; /*0x41b4e7*/
      *(_DWORD *)&v2->__pad_0[8] = &AircraftClass::`vftable'; /*0x41b4ed*/
      *(_DWORD *)&v2->__pad_0[12] = &AircraftClass::`vftable'; /*0x41b4f4*/
      *(_DWORD *)v2[1].__pad_0 = &vt_AircraftClass; /*0x41b4fb*/
    }
    v11 = v2->locomotor[0]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      v2->locomotor[0] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x41b53d*/
    v13 = *(AbstractClass **)&stru_B05488.__pad_579C[15396]; /*0x41b53f*/
    if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !*(_DWORD *)&stru_B05488.__pad_579C[15396] ) /*0x41b54c*/
      v13 = (AbstractClass *)10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&stru_B05488.__pad_579C[15388], (int)v13) ) /*0x41b559*/
    {
LABEL_18:
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = v12; /*0x41b56d*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = v2; /*0x41b57b*/
      stru_B05488.__pad_579C[15400] = 0; /*0x41b585*/
      ++*(_DWORD *)&stru_B05488.__pad_579C[15392]; /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking( /*0x41b59d*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x41b5ae*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2[1].__pad_0[12]);
    return 0; /*0x41b5b3*/
  }
  return result; /*0x41b5b5*/
}
}
} // namespace gamemd

// 0x41B5C0
namespace gamemd {
HRESULT AircraftClass::CheckPassengerCount(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall AircraftClass::CheckPassengerCount(IPersistStream *a0, FootClass *aP1, struct IPersistStreamVtbl *a2)
{
  return ObjectClass::SaveToStream_Common(a0, aP1, a2); /*0x41b5d4*/
}
}
} // namespace gamemd

// 0x41B980
namespace gamemd {
int AircraftClass::IsBelowScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::IsBelowScreen(#374 *this)
{
  AircraftTypeClass *v1; // eax

  v1 = (AircraftTypeClass *)this->Type; /*0x41b989*/
  if ( v1 != *(AircraftTypeClass **)&MEMORY[0x8871E0]->__pad_240[672] /*0x41b99d*/
    && v1 != *(AircraftTypeClass **)&MEMORY[0x8871E0]->__pad_240[724] )
  {
    return ObjectClass::IsBelowScreen(this); /*0x41b9a1*/
  }
  if ( !this->locomotor ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 128))(this->locomotor) == 0; /*0x41b9a6*/
}
}
} // namespace gamemd

// 0x41B9F0
namespace gamemd {
int AircraftClass::UpdateDocking(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt124(int this, int a2)
{
  int result; // eax

  switch ( this->currentMission ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( this->owningHouseIndex0 ) /*0x41ba12*/
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
} // namespace gamemd

// 0x41BB30
namespace gamemd {
int AircraftClass::OverrideMission_SyncLog(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::OverrideMission_SyncLog(int this, int a2, int a3, int a4)
{
  int result; // eax

  switch ( this->currentMission ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( this->owningHouseIndex0 ) /*0x41bb52*/
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
} // namespace gamemd

// 0x41BE80
namespace gamemd {
int AircraftClass::CheckStateFlag()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::CheckStateFlag(#374 *this)
{
  int result; // eax

  return result; /*0x41be80*/
}
}
} // namespace gamemd

// 0x41BE90
namespace gamemd {
int AircraftClass::CheckStateFlag2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::CheckStateFlag2(#374 *this)
{
  int result; // eax

  return result; /*0x41be90*/
}
}
} // namespace gamemd

// 0x41C010
namespace gamemd {
int AircraftClass::CheckReloadState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt49(#377 *this)
{
  int result; // eax

  LOBYTE(result) = (unsigned char)this->drainAnim; /*0x41c010*/
  return result; /*0x41c016*/
}
}
} // namespace gamemd

// 0x41C020
namespace gamemd {
int AircraftClass::CheckReloadTimer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt50(#377 *this)
{
  int result; // eax

  LOBYTE(result) = (unsigned char)this->drainAnim; /*0x41c020*/
  return result; /*0x41c026*/
}
}
} // namespace gamemd

// 0x41C070
namespace gamemd {
char AircraftClass::CheckDockState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MiniStub_41c070(_BYTE *this)
{
  return *(this + 1718); /*0x41c076*/
}
}
} // namespace gamemd

// 0x41C1D0
namespace gamemd {
int AircraftClass::CheckMissionAbort()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt36(_DWORD *this)
{
  return *(_DWORD *)(*(this + 433) + 96); /*0x41c1d9*/
}
}
} // namespace gamemd

// 0x41C200
namespace gamemd {
int AircraftClass::CheckMissionFail()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftClass::_vt34(_DWORD *this)
{
  return *(this + 433); /*0x41c206*/
}
}
} // namespace gamemd

// 0x41C210
namespace gamemd {
AircraftClass * AircraftClass::CheckActionStatus(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AircraftClass *__thiscall AircraftClass::CheckActionStatus(void **this, char a2)
{
  AircraftClass::Destruct(this); /*0x41c213*/
  if ( (a2 & 1) != 0 ) /*0x41c21d*/
    __3_YAXPAX_Z(this); /*0x41c220*/
  return (AircraftClass *)this; /*0x41c22a*/
}
}
} // namespace gamemd

// 0x41BE60
namespace gamemd {
int AircraftClass::LandingCheckStub()
{
return 0;
}
} // namespace gamemd

// 0x41C190
namespace gamemd {
int AircraftClass::PowerDrainProcess(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448642;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x5B2E90
namespace gamemd {
int AircraftClass::CheckMissionStatus()
{
return 450;
}
} // namespace gamemd

// 0x5B2F30
namespace gamemd {
int AircraftClass::CheckMissionStatus2()
{
return 450;
}
} // namespace gamemd
