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
  unsigned char *v6; // edi
  Object *v7; // eax
  int Carryall_field_00; // edi
  void *NearbyCell; // eax
  int v10; // ecx
  int v11; // ecx
  unsigned int *v12; // eax
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
  unsigned char *Building; // edi
  int v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  unsigned int v27[3]; // [esp+14h] [ebp-30h] BYREF
  unsigned int v28[3]; // [esp+20h] [ebp-24h] BYREF
  unsigned char v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( *((unsigned int *)this + 47) ) /*0x416d64*/
  {
    case 0: /*0x416d64*/
      ((Debug *)this)->Log(); /*0x416d70*/
      v2 = (AbstractClass *)*((unsigned int *)this + 361); /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        ((Debug *)this)->Log(); /*0x416d87*/
LABEL_4:
        (*(void (**)(Carryall *, unsigned int, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = (unsigned char *)(AbstractClass::IsTechnoType(v2));
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( *((unsigned int *)this + 70) ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !(uint8_t)((Object *)(*((Object **)this + 135)))->IsAlliedWithObjectHouse((int)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (Object *)(*(int (**)(unsigned char *))(*(unsigned int *)v6 + 60))(v6); /*0x416e15*/
        if ( !(uint8_t)((Object *)(v7))->IsAlliedWithObjectHouse((int)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (**)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      ((Debug *)this)->Log(); /*0x416e3c*/
      if ( (unsigned char *)((Team *)((Team *)this))->GetMember(0) != v6 ) /*0x416e4f*/
        (*(void (**)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416e57*/
      if ( (*(int (**)(Carryall *, int, unsigned char *))(this->Carryall_field_00 + 632))(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        (*(void (**)(Carryall *, unsigned int, int))(this->Carryall_field_00 + 1152))(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      ((Debug *)this)->Log(); /*0x416e78*/
      if ( (*(int (**)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (**)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 7); /*0x416ec3*/
LABEL_18:
        Carryall_field_00 = (int)(this->Carryall_field_00); /*0x416ec9*/
        NearbyCell = ((InfantryClass *)((InfantryClass *)this))->FindNearbyCell(*((unsigned int *)this + 361)); /*0x416ed6*/
        (*(void (**)(Carryall *, void *, int))(Carryall_field_00 + 1152))(this, NearbyCell, 1); /*0x416ede*/
        v10 = *((unsigned int *)this + 373); /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember((gamemd::AbstractClass *)(v10), *((unsigned int *)this + 361)); /*0x416ef5*/
        *((unsigned int *)this + 47) = 1; /*0x416eff*/
        ((Debug *)this)->Log(); /*0x416f09*/
      }
      else
      {
        ((Debug *)this)->Log(); /*0x416e96*/
        (*(void (**)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416ea4*/
        (*(void (**)(Carryall *, unsigned int, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416eb2*/
      }
LABEL_5: MissionControl = (char *)(MissionClass::GetMissionControl((MissionClass *)this));
      LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dad*/
      return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
    case 1: /*0x416d64*/
      v11 = *((unsigned int *)this + 361); /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v11 + 72))(v11, v29); /*0x416f54*/
        if ( !*((unsigned int *)this + 413) ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (**)(unsigned int, unsigned int, unsigned int, unsigned int))(**((unsigned int **)this + 413) + 68))( /*0x416f89*/
          *((unsigned int *)this + 413),
          *v12,
          v12[1],
          v12[2]);
        *((unsigned int *)this + 47) = (gamemd::FootClass **)(2); /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (**)(Carryall *, unsigned int, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
      v13 = *((unsigned int *)this + 361); /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (**)(int))(*(unsigned int *)v13 + 44))(v13) != 11
        && ((Team *)((Team *)this))->GetMember(0) != *((unsigned int *)this + 361) )
      {
        ((Debug *)this)->Log(); /*0x416fce*/
        *((unsigned int *)this + 47) = (gamemd::FootClass **)(0); /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = *((unsigned int *)this + 361); /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (**)(int))(*(unsigned int *)v14 + 44))(v14) == 11
        && !(*(uint8_t (**)(Carryall *, unsigned int))(this->Carryall_field_00 + 1360))(
              this,
              *((unsigned int *)this + 361)) )
      {
        *((unsigned int *)this + 47) = (gamemd::FootClass **)(0); /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !*((unsigned int *)this + 413) ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (**)(unsigned int))(**((unsigned int **)this + 413) + 144))(*((unsigned int *)this + 413)) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      ((Debug *)this)->Log(); /*0x417054*/
      v15 = *((unsigned int *)this + 361); /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (**)(int))(*(unsigned int *)v15 + 44))(v15) != 1
        || (v16 = *((unsigned int *)this + 39),
            v17 = *((unsigned int *)this + 40),
            v30 = *((unsigned int *)this + 41),
            v18 = v16 / 256,
            v19 = *(unsigned int *)(*((unsigned int *)this + 361) + 156),
            v20 = *(unsigned int *)(*((unsigned int *)this + 361) + 160),
            v30 = *(unsigned int *)(*((unsigned int *)this + 361) + 164),
            (uint16_t)(v19 / 256) == (unsigned short)v18)
        && (uint16_t)(v20 / 256) == (uint16_t)(v17 / 256) )
      {
        *((unsigned char *)this + 1748) = 0; /*0x41710f*/
LABEL_44:
        if ( !*((unsigned int *)this + 413) ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(uint8_t (**)(unsigned int))(**((unsigned int **)this + 413) + 16))(*((unsigned int *)this + 413)) ) /*0x417133*/
        {
          ((Debug *)this)->Log(); /*0x41713f*/
          *((unsigned int *)this + 47) = 3; /*0x417147*/
        }
        return (gamemd::FootClass **)(1);
      }
      else
      {
        *((unsigned int *)this + 47) = 0; /*0x4170f0*/
        ((Debug *)this)->Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      ((Debug *)this)->Log(); /*0x417163*/
      if ( *((unsigned int *)this + 70) ) /*0x417168*/
      {
        if ( *((unsigned int *)this + 320) ) /*0x417177*/
        {
          *((unsigned char *)this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (**)(Carryall *, unsigned int))(this->Carryall_field_00 + 292))(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((FootClass *)this); /*0x4171a4*/
          (*(void (**)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4171af*/
          *((unsigned int *)this + 47) = 0; /*0x4171b5*/
        }
        return (gamemd::FootClass **)(1);
      }
      else
      {
        ((Debug *)this)->Log(); /*0x4171cd*/
        (*(void (**)(Carryall *, unsigned int))(this->Carryall_field_00 + 292))(this, 0); /*0x4171da*/
        v27[0] = *((unsigned int *)this + 39); /*0x4171ea*/
        v27[1] = *((unsigned int *)this + 40); /*0x4171f1*/
        v21 = *((unsigned int *)this + 41); /*0x4171f7*/
        v28[0] = *((unsigned int *)this + 39); /*0x4171fa*/
        v22 = *((unsigned int *)this + 41); /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = *((unsigned int *)this + 40); /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = BYTE1(((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v27)->flags[0]) & 1; /*0x41722f*/
        v23 = (unsigned char *)((gamemd::CellClass *)(((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v28))); /*0x417236*/
        Building = ((CellClass *)(v23))->FindBuilding(v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (unsigned char *)((Team *)((Team *)this))->GetMember(0)
          && (((Debug *)this)->Log(), (*(int (**)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 19) == 1) )
        {
          ((Debug *)this)->Log(); /*0x417277*/
          (*(void (**)(unsigned char *))(*(unsigned int *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
          ((CellClass *)((CellClass *)((unsigned int *)this + 69)))->AddObject(Building); /*0x41729e*/
        }
        else
        {
          *((unsigned int *)this + 47) = 0; /*0x4172a5*/
        }
        (*(void (**)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x4172b1*/
        (*(void (**)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4172bd*/
        v25 = (int)(this->Carryall_field_00); /*0x4172c3*/
        *((unsigned char *)this + 1748) = 1; /*0x4172ca*/
        (*(void (**)(Carryall *, unsigned int, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }

}
} // namespace gamemd