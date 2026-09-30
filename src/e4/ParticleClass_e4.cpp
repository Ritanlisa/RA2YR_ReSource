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
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  __int16 v20; // dx
  char v21; // al
  double v22; // st7
  int v23; // esi
  int v24; // ebp
  int v25; // eax
  int v26[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v27; // [esp+28h] [ebp-Ch] BYREF
  int v28; // [esp+2Ch] [ebp-8h]
  int v29; // [esp+30h] [ebp-4h]

  if ( (unsigned int)dword_ABCD44 >= PingPongBuffer::GetWriteOffset() || *(unsigned int *)(*((unsigned int *)this + 43) + 744) ) /*0x62cedc*/
  {
    if ( MEMORY[0xA8EB78] || (v4 = *(unsigned int *)(*((unsigned int *)this + 43) + 788), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      if ( MEMORY[0xA8ED6B] /*0x62cf58*/
        || !g_hWnd
        || (*(unsigned int *)MEMORY[0xA8B230] & 0x1000) == 0
        || (v27 = *((unsigned int *)this + 39),
            v28 = *((unsigned int *)this + 40),
            v29 = *((unsigned int *)this + 41),
            !Game::Stub3((int)&v27)) )
      {
        v5 = *(unsigned int *)(*((unsigned int *)this + 43) + 788); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
          v26[0] = *((unsigned int *)this + 39); /*0x62d036*/
          v26[1] = *((unsigned int *)this + 40); /*0x62d048*/
          v26[2] = *((unsigned int *)this + 41); /*0x62d054*/
          Coord::To_Screen(MEMORY[0x887324], v26, &v27); /*0x62d058*/
          v12 = MEMORY[0x886FA4] + v28; /*0x62d06b*/
          v28 += MEMORY[0x886FA4]; /*0x62d071*/
          if ( v27 >= *a3 && v27 < *a3 + a3[2] ) /*0x62d086*/
          {
            v13 = a3[1]; /*0x62d08c*/
            if ( v12 >= v13 && v12 < v13 + a3[3] ) /*0x62d09e*/
            {
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek( /*0x62d0b6*/
                                           (int)MEMORY[0x87E8A4],
                                           v27,
                                           v12 - *((unsigned int *)MEMORY[0x87E8A4] + 1));
              if ( (unsigned short)v14 ) /*0x62d0bb*/
              {
                v15 = v28 - *((unsigned int *)MEMORY[0x887644] + 1); /*0x62d0d4*/
                v26[0] = v27; /*0x62d0d9*/
                v16 = ZCoordToScreenY(*((unsigned int *)this + 41)); /*0x62d0e8*/
                v17 = (unsigned __int16)(*((unsigned short *)MEMORY[0x887644] + 2) + *((unsigned short *)MEMORY[0x887644] + 18) - v28) /*0x62d10f*/
                    - v16
                    - 50;
                if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int)MEMORY[0x887644], v26[0], v15) ) /*0x62d11e*/
                {
                  v18 = *((unsigned int *)this + 45); /*0x62d124*/
                  if ( v18 ) /*0x62d12c*/
                    v19 = *(unsigned int *)(*((unsigned int *)this + 43) + 700) + 3 * v18; /*0x62d13f*/
                  else
                    v19 = (int)(unsigned int *)this + 176; /*0x62d12e*/
                  v20 = *(unsigned short *)v19; /*0x62d145*/
                  v21 = *(unsigned char *)(v19 + 2); /*0x62d148*/
                  LOWORD(v26[0]) = v20; /*0x62d14b*/
                  BYTE2(v26[0]) = v21; /*0x62d15a*/
                  v22 = 1.0 - *((double *)this + 23); /*0x62d16d*/
                  v23 = Math::RoundToInt(v22); /*0x62d1c9*/
                  v24 = Math::RoundToInt(v22); /*0x62d1ea*/
                  v25 = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v23 = (v14 * v23) >> 7; /*0x62d22a*/
                    v24 = (v14 * v24) >> 7; /*0x62d22d*/
                    v25 = (v14 * v25) >> 7; /*0x62d230*/
                  }
                  (*(void (**)(int, int *, int))(*(unsigned int *)MEMORY[0x887314] + 36))( /*0x62d288*/
                    MEMORY[0x887314],
                    &v27,
                    (unsigned __int16)(v23 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                  | (unsigned __int16)(v24 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | (unsigned __int16)(v25 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
                }
              }
            }
          }
        }
        else
        {
          v6 = (*(int (**)(void *))(*(unsigned int *)this + 464))(this); /*0x62cf87*/
          v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          v8 = (*(int (**)(void *))(*(unsigned int *)this + 108))(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            v9 = 10240; /*0x62cfb0*/
            v10 = (*(int (**)(void *))(*(unsigned int *)this + 488))(this); /*0x62cfb5*/
            if ( MEMORY[0xA8EB78] == 2 ) /*0x62cfc2*/
            {
              v11 = *((unsigned char *)this + 303); /*0x62cfc4*/
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
              MEMORY[0x887314],
              MEMORY[0x87F6C0],
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
  double v4; // st7
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int GroundHeight; // edi
  MouseClass *v10; // [esp+4h] [ebp-18h] BYREF
  int var14; // [esp+8h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-10h]
  unsigned int v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *((unsigned int *)this->field_AC + 197); /*0x62d5ec*/
  if ( v2 ) /*0x62d5f5*/
  {
    v3 = v2 - 1; /*0x62d5fb*/
    if ( v3 ) /*0x62d5fc*/
    {
      if ( v3 == 1 ) /*0x62d603*/
      {
        v4 = *(float *)this->__pad_E4; /*0x62d609*/
        v12[0] = *(unsigned int *)&this-((unsigned int *)(>__pad_28))[116]; /*0x62d623*/
        v5 = *(unsigned int *)&this-((unsigned int *)(>__pad_28))[120]; /*0x62d627*/
        v12[2] = *(unsigned int *)&this-((unsigned int *)(>__pad_28))[124]; /*0x62d630*/
        v6 = *(unsigned int *)&this-((unsigned int *)(>__pad_28))[124]; /*0x62d636*/
        v10 = (MouseClass *)v12[0]; /*0x62d639*/
        var14 = v5; /*0x62d640*/
        v11 = v6; /*0x62d644*/
        v12[1] = v5; /*0x62d648*/
        if ( v4 > 0.0 ) /*0x62d64c*/
        {
          v7 = *(unsigned int *)&this-((unsigned int *)(>__pad_E4))[36]; /*0x62d654*/
          v10 = (MouseClass *)(*(unsigned int *)&this-((unsigned int *)(>__pad_E4))[28] + v12[0]); /*0x62d65c*/
          var14 = *(unsigned int *)&this-((unsigned int *)(>__pad_E4))[32] + v5; /*0x62d66a*/
          v11 = v7 + v6; /*0x62d66e*/
        }
        if ( *(float *)this->__pad_E4 > 0.0 ) /*0x62d683*/
        {
          GroundHeight = Cell::GetGroundHeight((IUnknown *)v12); /*0x62d69e*/
          if ( Cell::GetGroundHeight((IUnknown *)&v10) > GroundHeight ) /*0x62d6a7*/
          {
            this-((unsigned int *)(>__pad_128))[5] = 1; /*0x62d6ab*/
            this-((unsigned int *)(>__pad_128))[9] = 1; /*0x62d6b1*/
          }
        }
        (*(void (**)(ParticleClass *, MouseClass **))(*(unsigned int *)this->__pad_0 + 436))(this, &v10); /*0x62d6c0*/
      }
    }
    else
    {
      ParticleClass::CheckWaterImpact(this); /*0x62d6cf*/
    }
  }
  else
  {
    BuildingClass::UpdateFloatPosition(this); /*0x62d6db*/
  }

}
// 0x62D710
namespace gamemd {
int * ParticleClass::CheckDrawFlags(int a1)
{

  if ( ((unsigned int)(g_abs_AC4998)& 1) == 0 ) /*0x62d71b*/
  {
    (unsigned int)(g_abs_AC4998)|= 1u; /*0x62d739*/
    g_abs_AC49D0 = 2147450879; /*0x62d73f*/
    atexit(nullsub_214); /*0x62d744*/
  }
  return &g_abs_AC49D0; /*0x62d752*/

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

  result = ((BuildingClass *)((void *)this))->SaveLoad_Register(); /*0x62d7ab*/
  if ( result >= 0 ) /*0x62d7b2*/
  {
    if ( aP1 ) /*0x62d7b6*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x62d7bf*/
      *(unsigned int *)aP1->__pad_0 = &vt_ParticleClass; /*0x62d7c4*/
      *(unsigned int *)&aP1->__pad_0[4] = &vt_ParticleClass; /*0x62d7ca*/
      *(unsigned int *)&aP1->__pad_0[8] = &vt_ParticleClass; /*0x62d7d1*/
      *(unsigned int *)&aP1->__pad_0[12] = &vt_ParticleClass; /*0x62d7d8*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]); /*0x62d7eb*/
    ObjectPtr::RegisterForTracking( /*0x62d7fc*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].spawnStatus);
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

  result = ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x62d820*/
  IDA_LOBYTE(aP0->ChargerBarrels[11]) = 1; /*0x62d825*/
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
  a2[3] = -777003740; /*0x62d960*/
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
