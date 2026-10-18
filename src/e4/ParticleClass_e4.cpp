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
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/PingPongBuffer_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x62CEC0
namespace gamemd {  // G42.18 ns repair
void ParticleClass::DrawParticle(int * a2, int * a3)
{


  if ( *(unsigned int *)&g_MissionQueueFrame.waypoints[282] >= (unsigned int)PingPongBuffer::GetWriteOffset() /*0x62cedc*/
    || *((unsigned int *)this->u32_AC + 186) )
  {
    int v4; // eax
    if ( stru_A8EB00.ObjectTypeClass[30] || (v4 = *((unsigned int *)this->u32_AC + 197), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      int v29; // [esp+28h] [ebp-Ch] BYREF
      int v30; // [esp+2Ch] [ebp-8h]
      int v31; // [esp+30h] [ebp-4h]
      if ( byte_A8ED6B /*0x62cf58*/
        || !g_hWnd
        || ((int)dword_A8B230[0].vtable0 & 0x1000) == 0
        || (v29 = *&this->Coord_9C,
            v30 = *&this->u32_A0,
            v31 = *&this->u32_A4,
            !(unsigned __int8)Game::Stub3((IUnknown*)(&v29))) )
      {
        int v5; // eax
        v5 = *((unsigned int *)this->u32_AC + 197); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
          int v28[3]; // [esp+1Ch] [ebp-18h] BYREF
          v28[0] = *&this->Coord_9C; /*0x62d036*/
          v28[1] = *&this->u32_A0; /*0x62d048*/
          v28[2] = *&this->u32_A4; /*0x62d054*/
          ((Coord *)g_TacticalClass_Instance)->To_Screen(v28, &v29); /*0x62d058*/
          char *v12; // eax
          v12 = (char *)DSurface_ViewBounds.field_4 + v30; /*0x62d06b*/
          v30 += (int)DSurface_ViewBounds.field_4; /*0x62d071*/
          if ( v29 >= *a3 && v29 < *a3 + a3[2] ) /*0x62d086*/
          {
            int v13; // edx
            v13 = a3[1]; /*0x62d08c*/
            if ( (int)v12 >= v13 && (int)v12 < v13 + a3[3] ) /*0x62d09e*/
            {
              int v14; // ebx
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek((int)(/*0x62d0b6*/                                            *(int **)&g_VisibleSurfaceDescriptor),                                            v29,                                            (int)&v12[-*(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 4)]);
              if ( (unsigned short)v14 ) /*0x62d0bb*/
              {
                int v15 = v30 - g_ZBufferDescriptor->Stream_field_04; // ebp /*0x62d0d4*/
                v28[0] = v29; /*0x62d0d9*/
                int v16; // eax
                v16 = ZCoordToScreenY(*&this->u32_A4); /*0x62d0e8*/
                int v17; // esi
                v17 = (unsigned __int16)(LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x62d10f*/
                + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                - v30)
                - v16
                - 50;
                if ( v17 < *(unsigned __int16 *)((int *)g_ZBufferDescriptor)->GetSamplePosition(v28[0], v15) ) /*0x62d11e*/
                {
                  IUnknown *ParticleClass_field_0xB4; // ecx
                  ParticleClass_field_0xB4 = (IUnknown *)(this->u32_B4); /*0x62d124*/
                  char *pad_B0; // eax
                  if ( ParticleClass_field_0xB4 ) /*0x62d12c*/
                    pad_B0 = (char *)(*((unsigned int *)this->u32_AC + 175) /*0x62d13f*/
                  + 3 * (unsigned int)ParticleClass_field_0xB4);
                  else
                    pad_B0 = this->q_B0; /*0x62d12e*/
                  __int16 v20; // dx
                  v20 = *(unsigned short *)pad_B0; /*0x62d145*/
                  char v21; // al
                  v21 = pad_B0[2]; /*0x62d148*/
                  LOWORD(v28[0]) = v20; /*0x62d14b*/
                  BYTE2(v28[0]) = v21; /*0x62d15a*/
                  double v22 = 1.0 - *&this->q0B8; // st7 /*0x62d16d*/
                  int v23; // eax
                  LOWORD(v23) = Math::RoundToInt(v22); /*0x62d1ac*/
                  int v24 = v23; // esi /*0x62d1c9*/
                  int v25; // eax
                  LOWORD(v25) = Math::RoundToInt(v22); /*0x62d1e1*/
                  int v26 = v25; // ebp /*0x62d1ea*/
                  int v27; // eax
                  LOWORD(v27) = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v24 = (v14 * v24) >> 7; /*0x62d22a*/
                    v26 = (v14 * v26) >> 7; /*0x62d22d*/
                    v27 = (v14 * v27) >> 7; /*0x62d230*/
                  }
                  (*(void (**)(AudioStream *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 36))( /*0x62d288*/
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
          int v6; // eax
          v6 = (*(int (**)(ParticleClass *))(*(unsigned int *)this->vtable1 + 464))(this); /*0x62cf87*/
          int v7; // ebx
          v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          int v8; // ebp
          v8 = (*(int (**)(ParticleClass *))(*(unsigned int *)this->vtable1 + 108))(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            int v9 = 10240; // esi /*0x62cfb0*/
            unsigned int v10; // eax
            v10 = (*(int (**)(ParticleClass *))(*(unsigned int *)this->vtable1 + 488))(this); /*0x62cfb5*/
            if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x62cfc2*/
            {
              char v11 = this->Translucency; // cl /*0x62cfc4*/
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
              *(int *)&DataGlobal_87F6C0,
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
}  // G42.18 ns repair
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
  return (int *)(&dword_AC49D0); /*0x62d752*/

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
  result = ((BuildingClass *)((ObjectClass *)this))->SaveLoad_Register(); /*0x62d7ab*/
  if ( result >= 0 ) /*0x62d7b2*/
  {
    if ( aP1 ) /*0x62d7b6*/
    {
      ((ObjectClass *)aP1)->Init((int)&aP1a); /*0x62d7bf*/
      /* X11: vtable install elided (X67 star-deref, RHS vt_ParticleClass) */  /*0x62d7c4*/
      aP1[1] = &vt_ParticleClass; /*0x62d7ca*/
      aP1[2] = &vt_ParticleClass; /*0x62d7d1*/
      aP1[3] = &vt_ParticleClass; /*0x62d7d8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance,&aP1->q02B); /*0x62d7eb*/
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
  result = AbstractClass::SaveLoad_Prefix((int *)aP0->vfptr, a1, aP2); /*0x62d820*/
  aP0->q130 = 1; /*0x62d825*/
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
