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

  switch ( this->q0BC ) /*0x416d64*/
  {
    case 0: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = this->q5A4; /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
  LABEL_4:
        (*(void (__thiscall **)(int, unsigned int, int))(*(unsigned int *)((char *)&this->q1047 + 457)))(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = (unsigned char *)(AbstractClass::IsTechnoType(v2));
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( this->q046 ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !Object::IsAlliedWithObjectHouse(this->__pad_087, (int)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (unsigned int *)(*(int (__thiscall **)(unsigned char *))(v6->q03C)(v6); /*0x416e15*/
        if ( !Object::IsAlliedWithObjectHouse(v7, this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(unsigned char *))(v6->q02C)(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (unsigned char *)Team::GetMember((unsigned int *)this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(int, int))(this->q274)(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(int, int, unsigned char *))(this->q278)(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        (*(void (__thiscall **)(int, unsigned int, int))(*(unsigned int *)((char *)&this->q1047 + 441)))(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(int, int))(this->q274)(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(int, int))(this->q274)(this, 7); /*0x416ec3*/
  LABEL_18:
        v8 = *(unsigned int *)this; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell((unsigned int *)this, this->q5A4); /*0x416ed6*/
        (*(void (__thiscall **)(int, void *, int))(v8 + 1152))(this, NearbyCell, 1); /*0x416ede*/
        v10 = this->__pad_1750; /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, this->q5A4); /*0x416ef5*/
        this->q0BC = 1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(int, int))(this->q274)(this, 3); /*0x416ea4*/
        (*(void (__thiscall **)(int, unsigned int, int))(*(unsigned int *)((char *)&this->q1047 + 457)))(this, 0, 1); /*0x416eb2*/
      }
  LABEL_5:
      MissionControl = MissionClass::GetMissionControl((unsigned int *)this); /*0x416d9d*/
      v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dc2*/
      return v4 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
    case 1: /*0x416d64*/
      v11 = this->q5A4; /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(v11->q048)(v11, v29); /*0x416f54*/
        if ( !this->q19D ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(unsigned int, unsigned int, unsigned int, unsigned int))(*this->q19D + 68))( /*0x416f89*/
          this->q19D,
          *v12,
          v12[1],
          v12[2]);
        this->q0BC = 2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (__thiscall **)(int, unsigned int, int))(*(unsigned int *)((char *)&this->q1047 + 457)))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
      v13 = this->q5A4; /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(int))(v13->fallRate)(v13) != 11
        && Team::GetMember((unsigned int *)this, 0) != this->q5A4 )
      {
        Debug::Log(); /*0x416fce*/
        this->q0BC = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = this->q5A4; /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(int))(v14->fallRate)(v14) == 11
        && !(*(uint8_t (__thiscall **)(int, unsigned int))(*(unsigned int *)((char *)&this->__pad_1536 + 10)))(this, this->q5A4) )
      {
        this->q0BC = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !this->q19D ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(unsigned int))(*this->q19D + 144))(this->q19D) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = this->q5A4; /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(int))(v15->fallRate)(v15) != 1
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
        this->u8_6D4 = 0; /*0x41710f*/
  LABEL_44:
        if ( !this->q19D ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(uint8_t (__stdcall **)(unsigned int))(*this->q19D + 16))(this->q19D) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          this->q0BC = 3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        this->q0BC = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( this->q046 ) /*0x417168*/
      {
        if ( this->q140 ) /*0x417177*/
        {
          this->u8_6D4 = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)&this->q0742))(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand(); /*0x4171a4*/
          (*(void (__thiscall **)(int, int))(*(unsigned int *)&this->q0742))(this, 1); /*0x4171af*/
          this->q0BC = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)&this->q0742))(this, 0); /*0x4171da*/
        v27[0] = this->q027; /*0x4171ea*/
        v27[1] = this->q028; /*0x4171f1*/
        v21 = this->q029; /*0x4171f7*/
        v28[0] = this->q027; /*0x4171fa*/
        v22 = this->q029; /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = this->q028; /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = IDA_BYTE1(*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v27) + 80)) & 1; /*0x41722f*/
        v23 = Coord::To_Cell(&MapClass_Instance, v28); /*0x417236*/
        Building = CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (unsigned char *)Team::GetMember((unsigned int *)this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(int, int))(this->q274)(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(unsigned char *))(*(unsigned int *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
          CellClass::AddObject((unsigned int *)((char *)&this->q417 + 57), Building); /*0x41729e*/
        }
        else
        {
          this->q0BC = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(int, int))(this->q274)(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(int, int))(*(unsigned int *)&this->q0742))(this, 1); /*0x4172bd*/
        v25 = *(unsigned int *)this; /*0x4172c3*/
        this->u8_6D4 = 1; /*0x4172ca*/
        (*(void (__thiscall **)(int, unsigned int, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}
} // namespace gamemd