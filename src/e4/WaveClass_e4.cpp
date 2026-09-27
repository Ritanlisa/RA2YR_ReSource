// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"

// 0x75F650
namespace gamemd {
int WaveClass::LoadWaveData(int a2, int a3)
{
  int v4; // edi
  int Register; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v13; // [esp+28h] [ebp-4h] BYREF

  a3 = a3; /*0x75f652*/
  v4 = a2; /*0x75f659*/
  Register = BuildingClass::SaveLoad_Register(this); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ObjectClass::Init((unsigned int *)v4, (int)&a3); /*0x75f67b*/
      v4->q14C = 0; /*0x75f680*/
      v4->q6A0 = 0; /*0x75f68c*/
      FrameSnapshot::Init((unsigned short *)(v4 + 472)); /*0x75f692*/
      WaveClass::Constructor_7632D0((unsigned int *)(v4 + 496), 0, 0); /*0x75f69f*/
      v4->vtable4 = &off_7F6BC8; /*0x75f6b8*/
    }
    v4->q14C = v4->q0B0 == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172)); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 468)); /*0x75f6ff*/
    Register = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)a3 + 12))(a3, &a2, 4, 0); /*0x75f712*/
    if ( Register >= 0 ) /*0x75f716*/
    {
      v6 = a2; /*0x75f71c*/
      a3 = 0; /*0x75f720*/
      if ( a2 <= 0 ) /*0x75f726*/
      {
  LABEL_17:
        v11 = 0; /*0x75f799*/
        if ( v6 > 0 ) /*0x75f79d*/
        {
          do /*0x75f7b8*/
            ObjectPtr::RegisterForTracking( /*0x75f7ae*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(v4->u32_1F4 + 4 * v11++));
          while ( v11 < a2 ); /*0x75f7b8*/
        }
      }
      else
      {
        while ( 1 ) /*0x75f737*/
        {
          Register = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)a3 + 12))(a3, &v13, 4, 0); /*0x75f737*/
          if ( Register < 0 ) /*0x75f73b*/
            break; /*0x75f73b*/
          v7 = v4->u32_1F8; /*0x75f73d*/
          if ( v4->q200 < v7 /*0x75f76e*/
            || (v4->u8_1FD || !v7)
            && (v8 = v4->q204, v8 > 0)
            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(v4->q7C0 + 8))(v4 + 496, v7 + v8, 0) )
          {
            v9 = v4->q200; /*0x75f775*/
            v10 = v4->u32_1F4; /*0x75f778*/
            v4->q200 = v9 + 1; /*0x75f77e*/
            *(unsigned int *)(v10 + 4 * v9) = v13; /*0x75f785*/
          }
          v6 = a2; /*0x75f78c*/
          if ( ++a3 >= a2 ) /*0x75f797*/
            goto LABEL_17; /*0x75f797*/
        }
      }
    }
  }
  return Register; /*0x75f7ba*/
}
}
// 0x763200
namespace gamemd {
WaveClass * WaveClass::ddtor(char a2)
{
  int v3; // eax
  void *v4; // eax

  this->vtable4 = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x763221*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A8EC38 + 16))(&dword_A8EC38, &this); /*0x76323a*/
  if ( v3 != -1 && v3 < dword_A8EC48 && v3 < --dword_A8EC48 ) /*0x763255*/
  {
    do /*0x76326d*/
    {
      ++v3; /*0x76325d*/
      *((unsigned int *)dword_A8EC3C + v3 - 1) = *((unsigned int *)dword_A8EC3C + v3); /*0x763261*/
    }
    while ( v3 < dword_A8EC48 ); /*0x76326d*/
  }
  (*((void (__thiscall **)(char *))*(&this->WaveClass_field_DC4) + 3))((char *)&this->WaveClass_field_1706); /*0x76327e*/
  v4 = *(&this->WaveClass_field_DC5); /*0x763281*/
  if ( v4 && this->q1FD ) /*0x76328e*/
  {
    RA2_OPDEL(v4); /*0x763296*/
    *(&this->WaveClass_field_DC5) = 0; /*0x76329e*/
  }
  this->q1FD = 0; /*0x7632a7*/
  *(&this->WaveClass_field_DC6) = 0; /*0x7632ab*/
  ObjectClass::Dtor(); /*0x7632b2*/
  if ( (a2 & 1) != 0 ) /*0x7632be*/
    RA2_OPDEL(); /*0x7632c1*/
  return this; /*0x7632cb*/
}
} // namespace gamemd

// 0x75F330
namespace gamemd {
char WaveClass::DamageArea(ObjectClass * aP1)
{
  int v3; // eax
  unsigned int *v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // edx
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  v3 = *(&this->fallRate7); /*0x75f338*/
  if ( v3 ) /*0x75f340*/
  {
    aP1 = aP1; /*0x75f346*/
    IDA_LOWORD(aP1) = *aP1 / 256; /*0x75f359*/
    IDA_HIWORD(aP1) = aP1[1] / 256; /*0x75f372*/
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1); /*0x75f391*/
    v6 = (*(int (__thiscall **)(unsigned int, unsigned int))(*(unsigned int *)*(&this->fallRate7) + 1016))(*(&this->fallRate7), 0); /*0x75f395*/
    v7 = *(unsigned int *)v6; /*0x75f39b*/
    v15 = *(unsigned int *)(*(unsigned int *)v6 + 172); /*0x75f3a9*/
    v16 = *(unsigned int *)(*(unsigned int *)v6 + 152); /*0x75f3ad*/
    if ( (v5[80] & 0x100) != 0 && *(&this->uniqueId7) >= dword_B725C8 * (*((char *)v5 + 283) + 4) ) /*0x75f3d5*/
      v8 = v5[58]; /*0x75f3d7*/
    else
      v8 = v5[57]; /*0x75f3df*/
    for ( ; v8; v8 = *(unsigned int *)(v8 + 48) ) /*0x75f3e7*/
    {
      v9 = *(&this->fallRate7); /*0x75f3e9*/
      if ( v8 != v9 && *(unsigned char *)(v8 + 144) && *(unsigned char *)(v8 + 116) && !*(unsigned char *)(v8 + 129) && *(int *)(v8 + 108) > 0 ) /*0x75f413*/
        (*(void (__thiscall **)(int, int *, unsigned int, int, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v8 + 364))( /*0x75f42c*/
          v8,
          &v16,
          0,
          v15,
          v9,
          0,
          0,
          0);
    }
    v10 = v5[17]; /*0x75f439*/
    if ( v10 != -1 ) /*0x75f43f*/
    {
      v11 = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * v10]; /*0x75f447*/
      if ( *(unsigned char *)(v11 + 689) ) /*0x75f44a*/
      {
        aP1 = (gamemd::ObjectClass *)((unsigned int *)v5[9]);
        CellChainReact(&aP1); /*0x75f45f*/
      }
      if ( *(unsigned char *)(v11 + 680) ) /*0x75f464*/
        BuildingClass::SellEffects((int)v5, *(unsigned int *)(v7 + 152)); /*0x75f477*/
    }
    IDA_LOBYTE(v3) = CellClass::IsActiveOrNext(v5); /*0x75f47e*/
    if ( (unsigned char)v3 ) /*0x75f486*/
    {
      v12 = g_RulesClass_Instance[1].RadarEventVisibilityDurations[0]; /*0x75f497*/
      v3 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 99); /*0x75f4a3*/
      if ( v3 < v12 ) /*0x75f4aa*/
        IDA_LOBYTE(v3) = LayerClass::DestroyCliff((int *)&MapClass_Instance, v13, (int)v5); /*0x75f4b2*/
    }
  }
  return v3; /*0x75f4b7*/
}
} // namespace gamemd

// 0x75F7D0
namespace gamemd {
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{
  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = a1[128]; /*0x75f7f9*/
  result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1[125] + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/
}
} // namespace gamemd

// 0x75F840
namespace gamemd {
int WaveClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x75f846*/
    return -2147467261; /*0x75f848*/
  *a2 = 237448653; /*0x75f856*/
  a2[1] = 298949647; /*0x75f85e*/
  a2[2] = -1610610249; /*0x75f867*/
  a2[3] = -777003740; /*0x75f870*/
  return 0; /*0x75f84d*/
}
} // namespace gamemd

// 0x75F880
namespace gamemd {
int WaveClass::GetObjectSize()
{
  return 576; /*0x75f885*/
}
} // namespace gamemd

// 0x75F890
namespace gamemd {
int WaveClass::CheckStateFlag()
{
  return 3; /*0x75f895*/
}
} // namespace gamemd

// 0x75F8A0
namespace gamemd {
int WaveClass::StubReturnFalse()
{
  return 0; /*0x75f8a2*/
}
} // namespace gamemd

// 0x7631F0
namespace gamemd {
int WaveClass::GetTypeIdentifier()
{
  return 43; /*0x7631f5*/
}
} // namespace gamemd
