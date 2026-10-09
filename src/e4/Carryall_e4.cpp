// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"

// 0x416D50
namespace gamemd {
FootClass * * Carryall::MissionStateMachine()
{
  AbstractClass *v2; // ecx
  char *MissionControl; // eax
  int v4; // eax
  _BYTE *v6; // edi
  Object *v7; // eax
  int Carryall_field_00; // edi
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
  CellClass *v23; // eax
  _BYTE *Building; // edi
  int v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+20h] [ebp-24h] BYREF
  _BYTE v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( this->u32_BC ) /*0x416d64*/
  {
    case 0: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = (AbstractClass *)this->u32_5A4; /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
  LABEL_4:
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( this->u32_118 ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*((Object **)this + 135), (int)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (Object *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 60))(v6); /*0x416e15*/
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(v7, (int)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (_BYTE *)Team::GetMember((Team *)this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(Carryall *, int, _BYTE *))(this->Carryall_field_00 + 632))(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1152))(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 7); /*0x416ec3*/
  LABEL_18:
        Carryall_field_00 = this->Carryall_field_00; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)this, this->u32_5A4); /*0x416ed6*/
        (*(void (__thiscall **)(Carryall *, void *, int))(Carryall_field_00 + 1152))(this, NearbyCell, 1); /*0x416ede*/
        v10 = this->u32_5D4; /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, this->u32_5A4); /*0x416ef5*/
        this->u32_BC = 1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416ea4*/
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416eb2*/
      }
  LABEL_5:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x416d9d*/
      IDA_LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dad*/
      return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
    case 1: /*0x416d64*/
      v11 = this->u32_5A4; /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(v11->q048)(v11, v29); /*0x416f54*/
        if ( !this->u32_674 ) /*0x416f5f*/
          sub_7DC720(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 413) + 68))( /*0x416f89*/
          this->u32_674,
          *v12,
          v12[1],
          v12[2]);
        this->u32_BC = 2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
      v13 = this->u32_5A4; /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(int))(v13->fallRate)(v13) != 11
        && Team::GetMember((Team *)this, 0) != this->u32_5A4 )
      {
        Debug::Log(); /*0x416fce*/
        this->u32_BC = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = this->u32_5A4; /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(int))(v14->fallRate)(v14) == 11
        && !(*(unsigned __int8 (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 1360))(
              this,
              this->u32_5A4) )
      {
        this->u32_BC = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !this->u32_674 ) /*0x417025*/
        sub_7DC720(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 144))(this->u32_674) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = this->u32_5A4; /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(int))(v15->fallRate)(v15) != 1
        || (v16 = this->u32_9C,
            v17 = this->u32_A0,
            v30 = this->u32_A4,
            v18 = v16 / 256,
            v19 = *(_DWORD *)(this->u32_5A4 + 156),
            v20 = *(_DWORD *)(this->u32_5A4 + 160),
            v30 = *(_DWORD *)(this->u32_5A4 + 164),
            (unsigned __int16)(v19 / 256) == (_WORD)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        this->u32_6D4 = 0; /*0x41710f*/
  LABEL_44:
        if ( !this->u32_674 ) /*0x417116*/
          sub_7DC720(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(this->u32_674) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          this->u32_BC = 3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        this->u32_BC = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( this->u32_118 ) /*0x417168*/
      {
        if ( this->u32_500 ) /*0x417177*/
        {
          this->u32_6D4 = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 292))(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand(); /*0x4171a4*/
          (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4171af*/
          this->u32_BC = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 292))(this, 0); /*0x4171da*/
        v27[0] = this->u32_9C; /*0x4171ea*/
        v27[1] = this->u32_A0; /*0x4171f1*/
        v21 = this->u32_A4; /*0x4171f7*/
        v28[0] = this->u32_9C; /*0x4171fa*/
        v22 = this->u32_A4; /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = this->u32_A0; /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = IDA_BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27)->flags[0]) & 1; /*0x41722f*/
        v23 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v28); /*0x417236*/
        Building = CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (_BYTE *)Team::GetMember((Team *)this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
          CellClass::AddObject((CellClass *)(this + 69), Building); /*0x41729e*/
        }
        else
        {
          this->u32_BC = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4172bd*/
        v25 = this->Carryall_field_00; /*0x4172c3*/
        this->u32_6D4 = 1; /*0x4172ca*/
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}
} // namespace gamemd