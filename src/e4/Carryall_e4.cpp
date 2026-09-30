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
  void *v2; // ecx
  char *MissionControl; // eax
  int v4; // esi
  unsigned char *v6; // edi
  unsigned int *v7; // eax
  int v8; // edi
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
  unsigned int *v23; // eax
  unsigned char *Building; // edi
  int v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  unsigned int v27[3]; // [esp+14h] [ebp-30h] BYREF
  unsigned int v28[3]; // [esp+20h] [ebp-24h] BYREF
  unsigned char v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

    switch ( (unsigned int)*((unsigned int *)this + 188) )
  {
    case 0: /*0x416d64*/
            Debug::Log();
            v2 = *((unsigned int *)this + 1444);
      if ( !v2 ) /*0x416d80*/
      {
                Debug::Log();
  LABEL_4:
                ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[2])(this, 0, 1);
        goto LABEL_5; /*0x416d97*/
      }
      v6 = (unsigned char *)(AbstractClass::IsTechnoType(v2));
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
            if ( *((unsigned int *)this + 280) )
        goto LABEL_18; /*0x416de2*/
            if ( !Object::IsAlliedWithObjectHouse(*((unsigned int *)this + 540), (IUnknown *)v6) )
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (unsigned int *)(*(int (**)(unsigned char *))(v6->q03C)(v6); /*0x416e15*/
        if ( !Object::IsAlliedWithObjectHouse(v7, this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (**)(unsigned char *))(v6->q02C)(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
            Debug::Log();
      if ( (unsigned char *)Team::GetMember((unsigned int *)this, 0) != v6 ) /*0x416e4f*/
                (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3);
      if ( (*(int (**)(int, int, unsigned char *))(this->q278)(this, 2, v6) != 1 ) /*0x416e6d*/
      {
                ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[1])(this, 0, 1);
        goto LABEL_4; /*0x416f24*/
      }
            Debug::Log();
            if ( (*(int (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 36) == 1 )
      {
                (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 7);
  LABEL_18:
        v8 = *(unsigned int *)this; /*0x416ec9*/
                NearbyCell = InfantryClass::FindNearbyCell(this, (IUnknown *)*((unsigned int *)this + 1444));
        (*(void (**)(int, void *, int))(v8 + 1152))(this, NearbyCell, 1); /*0x416ede*/
                v10 = (int)*((unsigned int *)this + 1492);
        if ( v10 ) /*0x416eec*/
                    TeamClass::SelectMember(v10, (AbstractClass *)*((unsigned int *)this + 1444));
                *((unsigned int *)this + 188) = (FootClass *)1;
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
                (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3);
                ((void (*)(FootClass **, unsigned int, int))(*this)->audioController4[2])(this, 0, 1);
      }
  LABEL_5:
      MissionControl = MissionClass::GetMissionControl((unsigned int *)this); /*0x416d9d*/
      v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dc2*/
      return v4 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
    case 1: /*0x416d64*/
            v11 = *((unsigned int *)this + 1444);
      if ( v11 ) /*0x416f31*/
      {
        v12 = (unsigned int *)(*(int (**)(int, unsigned char *))(v11->q048)(v11, v29); /*0x416f54*/
                if ( !*((unsigned int *)this + 1652) )
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
                (*(void (__stdcall **)(unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)(*((unsigned int *)this + 1652))->__pad_0 + 68))(
          this->q19D,
          *v12,
          v12[1],
          v12[2]);
                *((unsigned int *)this + 188) = (FootClass *)2;
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (**)(int, unsigned int, int))(*(unsigned int *)((char *)&this->q1047 + 457)))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
            v13 = *((unsigned int *)this + 1444);
      if ( v13 /*0x416fc7*/
        && (*(int (**)(int))(v13->fallRate)(v13) != 11
// 0x65ad30
        && Team::GetMember((unsigned int *)this, 0) != this->q5A4 )
      {
        Debug::Log(); /*0x416fce*/
                *((unsigned int *)this + 188) = 0;
        return 1; /*0x416fe8*/
      }
            v14 = *((unsigned int *)this + 1444);
      if ( v14 /*0x417008*/
        && (*(int (**)(int))(v14->fallRate)(v14) == 11
        && !(*(uint8_t (**)(int, unsigned int))(*(unsigned int *)((char *)&this->__pad_1536 + 10)))(this, this->q5A4) )
      {
                *((unsigned int *)this + 188) = 0;
        return 1; /*0x417024*/
      }
            if ( !*((unsigned int *)this + 1652) )
        WinAPI::Wrapper(-2147467261); /*0x417032*/
            if ( (*(int (__stdcall **)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 1652))->__pad_0 + 144))(*((unsigned int *)this + 1652)) != 1 )
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
            v15 = *((unsigned int *)this + 1444);
      if ( !v15 /*0x4170e9*/
        || (*(int (**)(int))(v15->fallRate)(v15) != 1
        || (v16 = this->q027,
            v17 = this->q028,
            v30 = this->q029,
            v18 = v16 / 256,
            v19 = this->q5A4->location,
            v20 = this->q5A4->q0A0,
            v30 = this->q5A4->q0A4,
            (uint16_t)(v19 / 256) == (unsigned short)v18)
        && (uint16_t)(v20 / 256) == (uint16_t)(v17 / 256) )
      {
                *((unsigned char *)this + 1748) = 0;
  LABEL_44:
                if ( !*((unsigned int *)this + 1652) )
          WinAPI::Wrapper(-2147467261); /*0x417125*/
                if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 1652))->__pad_0 + 16))(*((unsigned int *)this + 1652)) )
        {
          Debug::Log(); /*0x41713f*/
                    *((unsigned int *)this + 188) = (FootClass *)3;
        }
        return 1; /*0x417151*/
      }
      else
      {
                *((unsigned int *)this + 188) = 0;
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      Debug::Log(); /*0x417163*/
            if ( *((unsigned int *)this + 280) )
      {
                if ( *((unsigned int *)this + 1280) )
        {
                    *((unsigned char *)this + 1748) = 1;
        }
        else
        {
                    (*(void (**)(FootClass **, unsigned int))&(*this)->__pad_115[15])(this, 0);
          FootClass::MissionMoveCarryallLand(); /*0x4171a4*/
                    (*(void (**)(FootClass **, int))&(*this)->__pad_115[15])(this, 1);
                    *((unsigned int *)this + 188) = 0;
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
                (*(void (**)(FootClass **, unsigned int))&(*this)->__pad_115[15])(this, 0);
                v27[0] = *((unsigned int *)this + 156);
                v27[1] = *((unsigned int *)this + 160);
                v21 = (int)*((unsigned int *)this + 164);
                v28[0] = *((unsigned int *)this + 156);
                v22 = (int)*((unsigned int *)this + 164);
        v27[2] = v21; /*0x417201*/
                v28[1] = *((unsigned int *)this + 160);
        v28[2] = v22; /*0x417216*/
        v26 = IDA_BYTE1(*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v27) + 80)) & 1; /*0x41722f*/
        v23 = Coord::To_Cell(&MapClass_Instance, v28); /*0x417236*/
        Building = CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (unsigned char *)Team::GetMember((unsigned int *)this, 0)
          && (Debug::Log(), (*(int (**)(int, int))(this->q274)(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (**)(unsigned char *))(*(unsigned int *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
                    CellClass::AddObject((char *)this + 276, Building);
        }
        else
        {
                    *((unsigned int *)this + 188) = 0;
        }
                (*(void (**)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3);
                (*(void (**)(FootClass **, int))&(*this)->__pad_115[15])(this, 1);
        v25 = *(unsigned int *)this; /*0x4172c3*/
                *((unsigned char *)this + 1748) = 1;
        (*(void (**)(int, unsigned int, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}
} // namespace gamemd