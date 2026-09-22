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
int Carryall::MissionStateMachine()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Carryall::MissionStateMachine(FootClass **this)
{
  FootClass *v2; // ecx
  char *MissionControl; // eax
  TechnoClass *v6; // edi
  FootClass *v8; // edi
  void *NearbyCell; // eax
  FootClass *v11; // ecx
  FootClass *v13; // ecx
  FootClass *v14; // ecx
  FootClass *v15; // ecx
  IUnknown *Building; // edi
  FootClass *v25; // eax
  switch ( (unsigned int)this->q0BC ) /*0x416d64*/
  {
    case 0u: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = this->q5A4; /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
LABEL_4:
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[2])(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = (TechnoClass *)AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( this->q046 ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !Object::IsAlliedWithObjectHouse(this->q087, (IUnknown *)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6->abstractFlags & 1) != 0 ) /*0x416e0e*/
      {
        _DWORD * v7 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v6->__pad_0 + 60))(v6); /*0x416e15*/
        if ( !Object::IsAlliedWithObjectHouse(v7, (IUnknown *)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v6->__pad_0 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (TechnoClass *)Team::GetMember(this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(FootClass **, int, TechnoClass *))&(*this)->__pad_26A[14])(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[1])(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 7); /*0x416ec3*/
LABEL_18:
        v8 = *this; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell(this, (IUnknown *)this->q5A4); /*0x416ed6*/
        ((void (__thiscall *)(FootClass **, void *, int))v8->audioController4[1])(this, NearbyCell, 1); /*0x416ede*/
        int v10 = (int)this->q175; /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, (AbstractClass *)this->q5A4); /*0x416ef5*/
        this->q0BC = (FootClass *)1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x416ea4*/
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[2])(this, 0, 1); /*0x416eb2*/
      }
LABEL_5:
      MissionControl = MissionClass::GetMissionControl(this); /*0x416d9d*/
      int v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dc2*/
      return v4 + Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)2);
    case 1u: /*0x416d64*/
      v11 = this->q5A4; /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
  _BYTE v29[20]; // [esp+2Ch] [ebp-18h] BYREF
        _DWORD * v12 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v11->__pad_0 + 72))(v11, v29); /*0x416f54*/
        if ( !this->q19D ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(this->q19D)->__pad_0 + 68))( /*0x416f89*/
          this->q19D,
          *v12,
          v12[1],
          v12[2]);
        this->q0BC = (FootClass *)2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[2])(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2u: /*0x416d64*/
      v13 = this->q5A4; /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v13->__pad_0 + 44))(v13) != 11
        && (FootClass *)Team::GetMember(this, 0) != this->q5A4 )
      {
        Debug::Log(); /*0x416fce*/
        this->q0BC = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = this->q5A4; /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v14->__pad_0 + 44))(v14) == 11
        && !((unsigned __int8 (__thiscall *)(FootClass **, _DWORD))(*this)->audioController7[3])(this, this->q5A4) )
      {
        this->q0BC = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !this->q19D ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)(this->q19D)->__pad_0 + 144))(this->q19D) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = this->q5A4; /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v15->__pad_0 + 44))(v15) != 1
  int v16; // eax
        || (v16 = (int)this->q027,
  int v17; // edi
            v17 = (int)this->q028,
  int v30; // [esp+40h] [ebp-4h]
            v30 = (int)this->q029,
  int v18; // ecx
            v18 = v16 / 256,
  int v19; // eax
            v19 = (this->q5A4)->location[0],
  int v20; // ebx
            v20 = (this->q5A4)->location[1],
            v30 = (this->q5A4)->location[2],
            (unsigned __int16)(v19 / 256) == (_WORD)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        *((_BYTE *)this + 1748) = 0; /*0x41710f*/
LABEL_44:
        if ( !this->q19D ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)(this->q19D)->__pad_0 + 16))(this->q19D) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          this->q0BC = (FootClass *)3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        this->q0BC = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3u: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( this->q046 ) /*0x417168*/
      {
        if ( this->q140 ) /*0x417177*/
        {
          *((_BYTE *)this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(FootClass **, _DWORD))&(*this)->__pad_115[15])(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((int *)this); /*0x4171a4*/
          (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_115[15])(this, 1); /*0x4171af*/
          this->q0BC = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(FootClass **, _DWORD))&(*this)->__pad_115[15])(this, 0); /*0x4171da*/
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
        v27[0] = this->q027; /*0x4171ea*/
        v27[1] = this->q028; /*0x4171f1*/
        int v21 = (int)this->q029; /*0x4171f7*/
  _DWORD v28[3]; // [esp+20h] [ebp-24h] BYREF
        v28[0] = this->q027; /*0x4171fa*/
        int v22 = (int)this->q029; /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = this->q028; /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        char v26 = BYTE1(*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v27) + 80)) & 1; /*0x41722f*/
        _DWORD * v23 = Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v28); /*0x417236*/
        Building = (IUnknown *)CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (IUnknown *)Team::GetMember(this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(IUnknown *))(Building->field_0 + 212))(Building); /*0x417283*/
          Building->__pad_8C[0] = 0; /*0x417290*/
          Building->__pad_3BC[104] = 1; /*0x417297*/
          CellClass::AddObject(this + 69, Building); /*0x41729e*/
        }
        else
        {
          this->q0BC = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_115[15])(this, 1); /*0x4172bd*/
        v25 = *this; /*0x4172c3*/
        *((_BYTE *)this + 1748) = 1; /*0x4172ca*/
        ((void (__thiscall *)(FootClass **, _DWORD, int))v25->audioController4[2])(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}
}
