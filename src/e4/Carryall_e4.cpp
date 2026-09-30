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

// 0x416D50
namespace gamemd {
FootClass * * Carryall::MissionStateMachine()
{

  FootClass *v2; // ecx
  char *MissionControl; // eax
  int v4; // esi
  TechnoClass *v6; // edi
  unsigned int *v7; // eax
  FootClass *v8; // edi
  void *NearbyCell; // eax
  int v10; // ecx
  FootClass *v11; // ecx
  unsigned int *v12; // eax
  FootClass *v13; // ecx
  FootClass *v14; // ecx
  FootClass *v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  unsigned int *v23; // eax
  IUnknown *Building; // edi
  FootClass *v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  unsigned int v27[3]; // [esp+14h] [ebp-30h] BYREF
  unsigned int v28[3]; // [esp+20h] [ebp-24h] BYREF
  unsigned char v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( (unsigned int)*((unsigned int *)this + 47) ) /*0x416d64*/
  {
    case 0u: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = *((unsigned int *)this + 361); /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
LABEL_4:
        ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[2])(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = (TechnoClass *)AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( *((unsigned int *)this + 70) ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !Object::IsAlliedWithObjectHouse(*((unsigned int *)this + 135), (IUnknown *)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6->abstractFlags & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (unsigned int *)(*(int (**)(TechnoClass *))(*(unsigned int *)v6->__pad_0 + 60))(v6); /*0x416e15*/
        if ( !Object::IsAlliedWithObjectHouse(v7, (IUnknown *)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (**)(TechnoClass *))(*(unsigned int *)v6->__pad_0 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (TechnoClass *)Team::GetMember(this, 0) != v6 ) /*0x416e4f*/
        (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x416e57*/
      if ( (*(int (**)(FootClass **, int, TechnoClass *))&(*this)->__pad_26A[14])(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[1])(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 7); /*0x416ec3*/
LABEL_18:
        v8 = *this; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell(this, (IUnknown *)*((unsigned int *)this + 361)); /*0x416ed6*/
        ((void (*)(FootClass **, void *, int))v8->audioController4[1])(this, NearbyCell, 1); /*0x416ede*/
        v10 = (int)*((unsigned int *)this + 373); /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, (AbstractClass *)*((unsigned int *)this + 361)); /*0x416ef5*/
        *((unsigned int *)this + 47) = (FootClass *)1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x416ea4*/
        ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[2])(this, 0, 1); /*0x416eb2*/
      }
LABEL_5:
      MissionControl = MissionClass::GetMissionControl(this); /*0x416d9d*/
      v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dc2*/
      return v4 + Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2);
    case 1u: /*0x416d64*/
      v11 = *((unsigned int *)this + 361); /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *))(*(unsigned int *)v11->__pad_0 + 72))(v11, v29); /*0x416f54*/
        if ( !*((unsigned int *)this + 413) ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (**)(unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)(*((unsigned int *)this + 413))->__pad_0 + 68))( /*0x416f89*/
          *((unsigned int *)this + 413),
          *v12,
          v12[1],
          v12[2]);
        *((unsigned int *)this + 47) = (FootClass *)2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[2])(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2u: /*0x416d64*/
      v13 = *((unsigned int *)this + 361); /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (**)(FootClass *))(*(unsigned int *)v13->__pad_0 + 44))(v13) != 11
        && (FootClass *)Team::GetMember(this, 0) != *((unsigned int *)this + 361) )
      {
        Debug::Log(); /*0x416fce*/
        *((unsigned int *)this + 47) = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = *((unsigned int *)this + 361); /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (**)(FootClass *))(*(unsigned int *)v14->__pad_0 + 44))(v14) == 11
        && !((unsigned __int8 (*)(FootClass **, unsigned int))(*this)->audioController7[3])(this, *((unsigned int *)this + 361)) )
      {
        *((unsigned int *)this + 47) = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !*((unsigned int *)this + 413) ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (**)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 413))->__pad_0 + 144))(*((unsigned int *)this + 413)) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = *((unsigned int *)this + 361); /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (**)(FootClass *))(*(unsigned int *)v15->__pad_0 + 44))(v15) != 1
        || (v16 = (int)*((unsigned int *)this + 39),
            v17 = (int)*((unsigned int *)this + 40),
            v30 = (int)*((unsigned int *)this + 41),
            v18 = v16 / 256,
            v19 = (*((unsigned int *)this + 361))->location[0],
            v20 = (*((unsigned int *)this + 361))->location[1],
            v30 = (*((unsigned int *)this + 361))->location[2],
            (unsigned __int16)(v19 / 256) == (unsigned short)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        *((unsigned char *)this + 1748) = 0; /*0x41710f*/
LABEL_44:
        if ( !*((unsigned int *)this + 413) ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (**)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 413))->__pad_0 + 16))(*((unsigned int *)this + 413)) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          *((unsigned int *)this + 47) = (FootClass *)3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        *((unsigned int *)this + 47) = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3u: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( *((unsigned int *)this + 70) ) /*0x417168*/
      {
        if ( *((unsigned int *)this + 320) ) /*0x417177*/
        {
          *((unsigned char *)this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (**)(FootClass **, unsigned int))&(*this)->__pad_115[15])(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((int *)this); /*0x4171a4*/
          (*(void (**)(FootClass **, int))&(*this)->__pad_115[15])(this, 1); /*0x4171af*/
          *((unsigned int *)this + 47) = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (**)(FootClass **, unsigned int))&(*this)->__pad_115[15])(this, 0); /*0x4171da*/
        v27[0] = *((unsigned int *)this + 39); /*0x4171ea*/
        v27[1] = *((unsigned int *)this + 40); /*0x4171f1*/
        v21 = (int)*((unsigned int *)this + 41); /*0x4171f7*/
        v28[0] = *((unsigned int *)this + 39); /*0x4171fa*/
        v22 = (int)*((unsigned int *)this + 41); /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = *((unsigned int *)this + 40); /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = BYTE1(*((unsigned int *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v27) + 80)) & 1; /*0x41722f*/
        v23 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v28); /*0x417236*/
        Building = (IUnknown *)CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (IUnknown *)Team::GetMember(this, 0)
          && (Debug::Log(), (*(int (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (**)(IUnknown *))(Building->field_0 + 212))(Building); /*0x417283*/
          Building->__pad_8C[0] = 0; /*0x417290*/
          Building->__pad_3BC[104] = 1; /*0x417297*/
          CellClass::AddObject((unsigned int *)this + 69, Building); /*0x41729e*/
        }
        else
        {
          *((unsigned int *)this + 47) = 0; /*0x4172a5*/
        }
        (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x4172b1*/
        (*(void (**)(FootClass **, int))&(*this)->__pad_115[15])(this, 1); /*0x4172bd*/
        v25 = *this; /*0x4172c3*/
        *((unsigned char *)this + 1748) = 1; /*0x4172ca*/
        ((void (*)(FootClass **, unsigned int, int))v25->audioController4[2])(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }

}
} // namespace gamemd