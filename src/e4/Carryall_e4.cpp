// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"

// 0x416D50
FootClass * * Carryall::MissionStateMachine()
{
  void *v2; // ecx
  char *MissionControl; // eax
  int v4; // esi
  _BYTE *v6; // edi
  _DWORD *v7; // eax
  int v8; // edi
  void *NearbyCell; // eax
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  _DWORD *v23; // eax
  _BYTE *Building; // edi
  int v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+20h] [ebp-24h] BYREF
  _BYTE v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( *(_DWORD *)(this + 188) ) /*0x416d64*/
  {
    case 0: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = *(void **)(this + 1444); /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
  LABEL_4:
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( *(_DWORD *)(this + 280) ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 60))(v6); /*0x416e15*/
        if ( !Object::IsAlliedWithObjectHouse(v7, this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (_BYTE *)Team::GetMember((_DWORD *)this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)this + 632))(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 7); /*0x416ec3*/
  LABEL_18:
        v8 = *(_DWORD *)this; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell((_DWORD *)this, *(_DWORD *)(this + 1444)); /*0x416ed6*/
        (*(void (__thiscall **)(int, void *, int))(v8 + 1152))(this, NearbyCell, 1); /*0x416ede*/
        v10 = *(_DWORD *)(this + 1492); /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, *(_DWORD *)(this + 1444)); /*0x416ef5*/
        *(_DWORD *)(this + 188) = 1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 3); /*0x416ea4*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x416eb2*/
      }
  LABEL_5:
      MissionControl = MissionClass::GetMissionControl((_DWORD *)this); /*0x416d9d*/
      v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dc2*/
      return v4 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
    case 1: /*0x416d64*/
      v11 = *(_DWORD *)(this + 1444); /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v11 + 72))(v11, v29); /*0x416f54*/
        if ( !*(_DWORD *)(this + 1652) ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 1652) + 68))( /*0x416f89*/
          *(_DWORD *)(this + 1652),
          *v12,
          v12[1],
          v12[2]);
        *(_DWORD *)(this + 188) = 2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
      v13 = *(_DWORD *)(this + 1444); /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 11
        && Team::GetMember((_DWORD *)this, 0) != *(_DWORD *)(this + 1444) )
      {
        Debug::Log(); /*0x416fce*/
        *(_DWORD *)(this + 188) = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = *(_DWORD *)(this + 1444); /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 11
        && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1360))(this, *(_DWORD *)(this + 1444)) )
      {
        *(_DWORD *)(this + 188) = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !*(_DWORD *)(this + 1652) ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 144))(*(_DWORD *)(this + 1652)) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = *(_DWORD *)(this + 1444); /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) != 1
        || (v16 = *(_DWORD *)(this + 156),
            v17 = *(_DWORD *)(this + 160),
            v30 = *(_DWORD *)(this + 164),
            v18 = v16 / 256,
            v19 = *(_DWORD *)(*(_DWORD *)(this + 1444) + 156),
            v20 = *(_DWORD *)(*(_DWORD *)(this + 1444) + 160),
            v30 = *(_DWORD *)(*(_DWORD *)(this + 1444) + 164),
            (unsigned __int16)(v19 / 256) == (_WORD)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        *(_BYTE *)(this + 1748) = 0; /*0x41710f*/
  LABEL_44:
        if ( !*(_DWORD *)(this + 1652) ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          *(_DWORD *)(this + 188) = 3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        *(_DWORD *)(this + 188) = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( *(_DWORD *)(this + 280) ) /*0x417168*/
      {
        if ( *(_DWORD *)(this + 1280) ) /*0x417177*/
        {
          *(_BYTE *)(this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 292))(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((int *)this); /*0x4171a4*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 292))(this, 1); /*0x4171af*/
          *(_DWORD *)(this + 188) = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 292))(this, 0); /*0x4171da*/
        v27[0] = *(_DWORD *)(this + 156); /*0x4171ea*/
        v27[1] = *(_DWORD *)(this + 160); /*0x4171f1*/
        v21 = *(_DWORD *)(this + 164); /*0x4171f7*/
        v28[0] = *(_DWORD *)(this + 156); /*0x4171fa*/
        v22 = *(_DWORD *)(this + 164); /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = *(_DWORD *)(this + 160); /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = BYTE1(*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v27) + 80)) & 1; /*0x41722f*/
        v23 = Coord::To_Cell(&MapClass_Instance, v28); /*0x417236*/
        Building = CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (_BYTE *)Team::GetMember((_DWORD *)this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
          CellClass::AddObject((_DWORD *)(this + 276), Building); /*0x41729e*/
        }
        else
        {
          *(_DWORD *)(this + 188) = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 292))(this, 1); /*0x4172bd*/
        v25 = *(_DWORD *)this; /*0x4172c3*/
        *(_BYTE *)(this + 1748) = 1; /*0x4172ca*/
        (*(void (__thiscall **)(int, _DWORD, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}