// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/ParticleClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ParticleSystemClass_32_e4.hpp"
#include "e4/classes/ParticleSystemClass_16_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/E4Recv_76AAF0_e4.hpp"

// 0x62CEC0
namespace gamemd {
void ParticleClass::DrawParticle(int * a2, int * a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  unsigned int v10; // eax
  char v11; // cl
  char *v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  IUnknown *ParticleClass_field_0xB4; // ecx
  char *pad_B0; // eax
  __int16 v20; // dx
  char v21; // al
  double v22; // st7
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebp
  int v27; // eax
  int v28[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[282] >= (unsigned int)PingPongBuffer::GetWriteOffset() /*0x62cedc*/
    || *((_DWORD *)this->ParticleClass_field_0xAC + 186) )
  {
    if ( stru_A8EB00.ObjectTypeClass[30] || (v4 = *((_DWORD *)this->ParticleClass_field_0xAC + 197), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      if ( stru_A8EB00.?[391] /*0x62cf58*/
        || !g_hWnd
        || ((int)dword_A8B230->vtable0 & 0x1000) == 0
        || (v29 = *(_DWORD *)&this->__pad_28[116],
            v30 = *(_DWORD *)&this->__pad_28[120],
            v31 = *(_DWORD *)&this->__pad_28[124],
            !(unsigned __int8)Game::Stub3((int)&v29)) )
      {
        v5 = *((_DWORD *)this->ParticleClass_field_0xAC + 197); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
          v28[0] = *(_DWORD *)&this->__pad_28[116]; /*0x62d036*/
          v28[1] = *(_DWORD *)&this->__pad_28[120]; /*0x62d048*/
          v28[2] = *(_DWORD *)&this->__pad_28[124]; /*0x62d054*/
          Coord::To_Screen((Coord *)g_TacticalClass_Instance, v28, &v29); /*0x62d058*/
          v12 = (char *)DSurface_ViewBounds.field_4 + v30; /*0x62d06b*/
          v30 += (int)DSurface_ViewBounds.field_4; /*0x62d071*/
          if ( v29 >= *a3 && v29 < *a3 + a3[2] ) /*0x62d086*/
          {
            v13 = a3[1]; /*0x62d08c*/
            if ( (int)v12 >= v13 && (int)v12 < v13 + a3[3] ) /*0x62d09e*/
            {
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek( /*0x62d0b6*/
                                           *(int **)&stru_87E790.__pad_D8[60],
                                           v29,
                                           (int)&v12[-*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4)]);
              if ( (_WORD)v14 ) /*0x62d0bb*/
              {
                v15 = v30 - g_ZBufferDescriptor->Stream_field_04; /*0x62d0d4*/
                v28[0] = v29; /*0x62d0d9*/
                v16 = ZCoordToScreenY(*(_DWORD *)&this->__pad_28[124]); /*0x62d0e8*/
                v17 = (unsigned __int16)(IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x62d10f*/
                                       + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                                       - v30)
                    - v16
                    - 50;
                if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v28[0], v15) ) /*0x62d11e*/
                {
                  ParticleClass_field_0xB4 = this->ParticleClass_field_0xB4; /*0x62d124*/
                  if ( ParticleClass_field_0xB4 ) /*0x62d12c*/
                    pad_B0 = (char *)(*((_DWORD *)this->ParticleClass_field_0xAC + 175) /*0x62d13f*/
                                    + 3 * (_DWORD)ParticleClass_field_0xB4);
                  else
                    pad_B0 = this->__pad_B0; /*0x62d12e*/
                  v20 = *(_WORD *)pad_B0; /*0x62d145*/
                  v21 = pad_B0[2]; /*0x62d148*/
                  IDA_LOWORD(v28[0]) = v20; /*0x62d14b*/
                  IDA_BYTE2(v28[0]) = v21; /*0x62d15a*/
                  v22 = 1.0 - *(double *)&this->ParticleClass_field_0xB8; /*0x62d16d*/
                  IDA_LOWORD(v23) = Math::RoundToInt(v22); /*0x62d1ac*/
                  v24 = v23; /*0x62d1c9*/
                  IDA_LOWORD(v25) = Math::RoundToInt(v22); /*0x62d1e1*/
                  v26 = v25; /*0x62d1ea*/
                  IDA_LOWORD(v27) = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v24 = (v14 * v24) >> 7; /*0x62d22a*/
                    v26 = (v14 * v26) >> 7; /*0x62d22d*/
                    v27 = (v14 * v27) >> 7; /*0x62d230*/
                  }
                  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 36))( /*0x62d288*/
                    g_DSurface_Hidden_2,
                    &v29,
                    (unsigned __int16)(v24 >> g_BitShift_Green_0 << g_BitShift_Red)
                  | (unsigned __int16)(v26 >> g_BitMask_Blue << g_BitMask_Green)
                  | (unsigned __int16)(v27 >> g_BitMask_Red << g_BitShift_Blue));
                }
              }
            }
          }
        }
        else
        {
          v6 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 464))(this); /*0x62cf87*/
          v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          v8 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 108))(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            v9 = 10240; /*0x62cfb0*/
            v10 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 488))(this); /*0x62cfb5*/
            if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x62cfc2*/
            {
              v11 = this->__pad_128[7]; /*0x62cfc4*/
              if ( v11 == 25 ) /*0x62cfcd*/
              {
                v9 = 10242; /*0x62cfcf*/
              }
              else if ( v11 == 50 ) /*0x62cfd9*/
              {
                v9 = 10244; /*0x62cfdb*/
              }
              else if ( v11 >= 75 ) /*0x62cfe5*/
              {
                v9 = 10246; /*0x62cfe7*/
              }
            }
            DrawToSurfaceSHP( /*0x62d01d*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[120],
              v8,
              v10,
              a2,
              a3,
              v9 | 0xE00,
              0,
              v7,
              2,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
        }
      }
    }
  }
}
}
// 0x62D5E0
namespace gamemd {
void ParticleClass::AdjustHeight()
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  double v5; // st7
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  void * GroundHeight;
  int v10; // [esp+4h] [ebp-18h] BYREF
  int v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  unsigned int v13[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(unsigned int *)(*(&this->q0103) + 788); /*0x62d5ec*/
  if ( !v2 ) /*0x62d5f5*/
    return BuildingClass::UpdateFloatPosition((BuildingClass *)this); /*0x62d6db*/
  v3 = v2 - 1; /*0x62d5fb*/
  if ( v3 ) /*0x62d5fc*/
  {
    result = v3 - 1; /*0x62d602*/
    if ( !result ) /*0x62d603*/
    {
      v5 = this->q0E4; /*0x62d609*/
      v13[0] = *(&this->vtable49); /*0x62d623*/
      v6 = *(&this->q0100); /*0x62d627*/
      v13[2] = *(&this->q0101); /*0x62d630*/
      v7 = *(&this->q0101); /*0x62d636*/
      v10 = v13[0]; /*0x62d639*/
      v11 = v6; /*0x62d640*/
      v12 = v7; /*0x62d644*/
      v13[1] = v6; /*0x62d648*/
      if ( v5 > 0.0 ) /*0x62d64c*/
      {
        v8 = *(&this->q0186); /*0x62d654*/
        v10 = *(&this->q0184) + v13[0]; /*0x62d65c*/
        v11 = *(&this->q0185) + v6; /*0x62d66a*/
        v12 = v8 + v7; /*0x62d66e*/
      }
      if ( this->q0E4 > 0.0 ) /*0x62d683*/
      {
        GroundHeight = (void *)((int)((void *)(Cell::GetGroundHeight(v13))));
        if ( (int)Cell::GetGroundHeight(&v10) > GroundHeight ) /*0x62d6a7*/
        {
          this->q12D = (unsigned int)((void *)(1));
          this->q4C4 = (void *)(1);
        }
      }
      return this->SetPosition(&v10); /*0x62d6c0*/
    }
  }
  else
  {
    ParticleClass::CheckWaterImpact((ParticleClass *)this); /*0x62d6cf*/
  }
  return result; /*0x62d6c8*/
}
// 0x62D710
namespace gamemd {
int * ParticleClass::CheckDrawFlags(int a1)
{
  if ( (byte_AC4998 & 1) == 0 ) /*0x62d71b*/
  {
    byte_AC4998 |= 1u; /*0x62d739*/
    dword_AC49D0 = 2147450879; /*0x62d73f*/
    atexit(nullsub_214); /*0x62d744*/
  }
  return &dword_AC49D0; /*0x62d752*/
}
} // namespace gamemd

// 0x62D770
namespace gamemd {
int ParticleClass::CheckStateFlag()
{
  return 3; /*0x62d775*/
}
} // namespace gamemd

// 0x62D7A0
namespace gamemd {
int ParticleClass::LoadParticleData(ObjectClass * aP1, int aP1a)
{
  int result; // eax

  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x62d7ab*/
  if ( result >= 0 ) /*0x62d7b2*/
  {
    if ( aP1 ) /*0x62d7b6*/
    {
      ObjectClass::Init((ObjectClass *)aP1, (int)&aP1a); /*0x62d7bf*/
      *aP1 = &(void*)(void*)&ParticleClass_vftable; /*0x62d7c4*/
      aP1[1] = &(void*)(void*)&ParticleClass_vftable; /*0x62d7ca*/
      aP1[2] = &(void*)(void*)&ParticleClass_vftable; /*0x62d7d1*/
      aP1[3] = &(void*)(void*)&ParticleClass_vftable; /*0x62d7d8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 43); /*0x62d7eb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 73); /*0x62d7fc*/
    return 0; /*0x62d801*/
  }
  return result; /*0x62d803*/
}
} // namespace gamemd

// 0x62D810
namespace gamemd {
int ParticleClass::CheckCollisionFlags(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0->__pad_0, a1, aP2); /*0x62d820*/
  aP0->__pad_128[8] = 1; /*0x62d825*/
  return result; /*0x62d82c*/
}
} // namespace gamemd

// 0x62D930
namespace gamemd {
int ParticleClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x62d936*/
    return -2147467261; /*0x62d938*/
  *a2 = 237448652; /*0x62d946*/
  a2[1] = 298949647; /*0x62d94e*/
  a2[2] = -1610610249; /*0x62d957*/
  a2[3] = unk_7E970C; /*0x62d960*/
  return 0; /*0x62d93d*/
}
} // namespace gamemd

// 0x62D970
namespace gamemd {
int ParticleClass::GetObjectSize()
{
  return 312; /*0x62d975*/
}
} // namespace gamemd

// 0x62D980
namespace gamemd {
int ParticleClass::GetTypeIdentifier()
{
  return 22; /*0x62d985*/
}
} // namespace gamemd
