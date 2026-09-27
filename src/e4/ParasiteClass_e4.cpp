// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x629210
namespace gamemd {
int ParasiteClass::Constructor()
{
  ParasiteClass * v3;

  AbstractClass::Constructor(); /*0x629213*/
  this->q02C = g_CurrentFrame; /*0x62921f*/
  this->ParasiteClass_field_34 = 0; /*0x629222*/
  g_CurrentFrame = g_CurrentFrame; /*0x629225*/
  this->ParasiteClass_field_40 = 0; /*0x62922b*/
  this->u32_38 = g_CurrentFrame; /*0x62922e*/
  if ( dword_AC4920 < dword_AC4918 /*0x62927e*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v3 = (gamemd::ParasiteClass *)(dword_AC4920++);
    *((unsigned int *)dword_AC4914 + v3) = this; /*0x62929a*/
  }
  return (int)(this);
}
} // namespace ra2

// 0x6292B0
namespace gamemd {
ParasiteClass::ParasiteClass(TechnoClass * aP1)
{
  ParasiteClass * v4;
  int v6; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor(); /*0x6292b6*/
  this->q02C = g_CurrentFrame; /*0x6292c4*/
  this->ParasiteClass_field_34 = 0; /*0x6292c9*/
  this->u32_38 = g_CurrentFrame; /*0x6292d2*/
  this->ParasiteClass_field_40 = 0; /*0x6292d5*/
  this->creationFrame = aP1; /*0x6292f3*/
  this->q028 = 0; /*0x6292f6*/
  this->u32_38 = g_CurrentFrame; /*0x629303*/
  this->ParasiteClass_field_3C = v6; /*0x62930a*/
  this->ParasiteClass_field_40 = 0; /*0x62930d*/
  g_CurrentFrame = g_CurrentFrame; /*0x629310*/
  this->q054 = 0; /*0x629316*/
  this->q02C = g_CurrentFrame; /*0x629319*/
  this->ParasiteClass_field_30 = v6; /*0x62931c*/
  this->ParasiteClass_field_34 = 0; /*0x62931f*/
  this->q04C = 0; /*0x629322*/
  this->u32_50 = 0; /*0x629325*/
  this->q044 = 0; /*0x629328*/
  this->q048 = 0; /*0x62932b*/
  if ( dword_AC4920 < dword_AC4918 /*0x629360*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v4 = (gamemd::ParasiteClass *)(dword_AC4920++);
    *((unsigned int *)dword_AC4914 + v4) = this; /*0x62937c*/
  }
  return this; /*0x629381*/
}
} // namespace ra2

// 0x6294D0
namespace gamemd {
int ParasiteClass::Attach(int * a2)
{
  IUnknown * v3;
  int v4; // eax
  int v5; // edx

  AbstractClass::ProcessPower(); /*0x6294d9*/
  v3 = this->q044; /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (__stdcall **)(int))(v3->u32_4 + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(this->q048); /*0x6294fd*/
  Power::TimerProcess(this->q04C); /*0x629508*/
  Power::TimerProcess(this->u32_50); /*0x629513*/
  IDA_LOBYTE(v5) = this->q054; /*0x629518*/
  return Power::FlagProcess(a2, v5); /*0x629523*/
}
} // namespace ra2

// 0x6297F0
namespace gamemd {
void ParasiteClass::DeploySquad()
{
  unsigned int *v2; // eax
  int *v3; // ecx
  int v4; // edi
  int *v5; // eax
  int v6; // esi
  unsigned int *v8; // esi
  int v9; // ecx
  unsigned int *v10; // edx
  int Index; // eax
  void *v12; // edi
  void **v13; // eax
  void **v14; // eax
  ParasiteClass * v15;
  int v16; // eax
  int v17; // ebx
  double v18; // st7
  int v19; // edi
  int v20; // eax
  void **v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  unsigned char *v27; // edi
  int v28; // eax
  IUnknown * v29;
  int v30; // eax
  unsigned int *v31; // edx
  int v32; // ecx
  int v33; // eax
  unsigned int *v34; // edi
  int v35; // ecx
  int v36; // ebp
  void * v37;
  int v38; // eax
  int v39; // [esp-4h] [ebp-6Ch]
  double v40; // [esp+10h] [ebp-58h]
  double v41; // [esp+10h] [ebp-58h]
  int i; // [esp+10h] [ebp-58h]
  unsigned int v43[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v44; // [esp+28h] [ebp-40h] BYREF
  int v45; // [esp+2Ch] [ebp-3Ch] BYREF
  double v46; // [esp+30h] [ebp-38h]
  double v47; // [esp+38h] [ebp-30h]
  double v48; // [esp+40h] [ebp-28h]
  double v49; // [esp+48h] [ebp-20h]
  int v50; // [esp+50h] [ebp-18h] BYREF
  int v51; // [esp+54h] [ebp-14h]
  int v52; // [esp+58h] [ebp-10h]
  int v53; // [esp+5Ch] [ebp-Ch] BYREF
  int v54; // [esp+60h] [ebp-8h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  v2 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)(&this->vtable46) + 1016))(this->creationFrame, 0); /*0x629807*/
  v3 = *(int **)(&this->uniqueId0); /*0x62980d*/
  v43[1] = *v2; /*0x629812*/
  v4 = *(unsigned int *)(v43[1] + 172); /*0x629816*/
  v43[0] = v4; /*0x629822*/
  v50 = v3[39]; /*0x629828*/
  v51 = v3[40]; /*0x62982f*/
  v52 = v3[41]; /*0x629836*/
  v5 = (int *)(*(int (__thiscall **)(int *))(*v3 + 444))(v3); /*0x62983c*/
  v40 = 1.0; /*0x629844*/
  if ( !v5 || Cell::IsValidHeight(v5) ) /*0x629854*/
  {
    v9 = *(unsigned int *)(v4 + 368); /*0x629898*/
    v10 = (unsigned int *)(this->q028 + 1696); /*0x62989e*/
    *v10 = g_CurrentFrame; /*0x6298a4*/
    v10[1] = v54; /*0x6298aa*/
    v10[2] = v9; /*0x6298ad*/
    switch ( this->q048 ) /*0x6298bc*/
    {
      case 0: /*0x6298bc*/
        *(unsigned int *)(this->q028 + 808) = 0; /*0x6298c6*/
        Index = AnimTypeClass::FindIndex(aSqdg); /*0x6298d1*/
        if ( Index != -1 ) /*0x6298d9*/
        {
          v12 = (void *)*((unsigned int *)g_AnimTypeCount + Index); /*0x6298e5*/
          if ( v12 ) /*0x6298ea*/
          {
            v13 = (void *)operator new(0x1C8u); /*0x6298f5*/
            if ( v13 ) /*0x6298ff*/
            {
              v14 = AnimClass::ctor(v13, v12, &v50, 0, 1, (void *)0x600, 0, 0); /*0x629913*/
              if ( v14 ) /*0x62991a*/
              {
                this->q044 = v14; /*0x62991c*/
                if ( g_BuildingTypeInstanceCount < dword_B0F5C0 /*0x629953*/
                  || (byte_B0F5C5 || !dword_B0F5C0)
                  && dword_B0F5CC > 0
                  && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingInstanceCount + 8))(
                       &g_BuildingInstanceCount,
                       dword_B0F5CC + dword_B0F5C0,
                       0) )
                {
                  v15 = (gamemd::ParasiteClass *)(g_BuildingTypeInstanceCount++);
                  *((unsigned int *)g_BuildingClassPoolManager + v15) = this; /*0x62996f*/
                }
              }
            }
          }
        }
        this->q048 = 1; /*0x629974*/
        this->u32_50 = 0; /*0x62997b*/
        this->q04C = 0; /*0x62997e*/
        BuildingClass::AnimController(); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1: /*0x6298bc*/
        if ( BuildingClass::AnimController((int *)this) ) /*0x62998d*/
        {
          v16 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 1); /*0x6299a9*/
          this->u32_50 = 0; /*0x6299b7*/
          this->q048 = 3 - (v16 != 0); /*0x6299ba*/
          this->q04C = 0; /*0x6299bd*/
          BuildingClass::AnimController(); /*0x6299c0*/
          FootClass::CreateWakes(v50, v51, v52); /*0x6299e1*/
        }
        goto LABEL_47; /*0x6299e6*/
      case 2: /*0x6298bc*/
        v40 = -1.0; /*0x6299eb*/
        goto LABEL_20; /*0x6299eb*/
      case 3: /*0x6298bc*/
  LABEL_20:
        if ( BuildingClass::AnimController((int *)this) ) /*0x6299fd*/
        {
          this->q048 = 4; /*0x629a08*/
          this->u32_50 = 0; /*0x629a0f*/
          this->q04C = 0; /*0x629a12*/
          BuildingClass::AnimController(); /*0x629a15*/
        }
        *(double *)&v43[1] = (double)this->q04C * v40 * 0.3141592653589793; /*0x629a27*/
        *(float *)(this->q028 + 808) = Math::SinCos(*(double *)&v43[1]) * 0.78539819; /*0x629a46*/
        goto LABEL_47; /*0x629a4c*/
      case 4: /*0x6298bc*/
        *(unsigned int *)(this->q028 + 808) = 0; /*0x629a59*/
        v17 = *((unsigned int *)g_RulesClass_Instance + 756); /*0x629a67*/
        v41 = -((double)(*(int16_t *)ProgressTimer::GetValue((unsigned short *)(this->q028 + 904), &v45) - 0x3FFF) /*0x629a91*/
              * -0.00009587672516830327);
        v49 = Math::ArcTan2(v41); /*0x629aa4*/
        v48 = Math::SinCos(v41); /*0x629aaf*/
        for ( i = 0; i < 3; ++i ) /*0x629ab8*/
        {
          v46 = (void **)(64.0);
          v47 = (void **)((double)i * 128.0 - 128.0);
          if ( Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 1) ) /*0x629aee*/
            v18 = -64.0; /*0x629af7*/
          else
            v18 = v46; /*0x629aff*/
          v19 = Math::RoundToInt(v18); /*0x629b26*/
          v20 = Math::RoundToInt(v47 * v48 + v18 * v49); /*0x629b2a*/
          v53 = v19 + v50; /*0x629b44*/
          v54 = v51 + v20; /*0x629b48*/
          v52 = v52; /*0x629b4c*/
          v21 = (void *)operator new(0x1C8u); /*0x629b55*/
          if ( v21 ) /*0x629b5c*/
          {
            v22 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v17 - 1); /*0x629b6f*/
            AnimClass::ctor( /*0x629b97*/
              v21,
              *(void **)(*((unsigned int *)g_RulesClass_Instance + 753) + 4 * v22),
              &v53,
              (void *)2,
              1,
              (void *)0x600,
              (void *)0xFFFFFFF6,
              0);
          }
        }
        if ( *(unsigned char *)(v43[0] + 372) /*0x629be6*/
          && (!BuildingClass::GetSellPriority(*(int **)(&this->uniqueId0))
           || BuildingClass::GetSellPriority(*(int **)(&this->uniqueId0)) == 1
           && Audio::IsLoud((float *)(this->creationFrame + 336))) )
        {
          if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame) + 3214) ) /*0x629bfe*/
          {
            v23 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 132))(this->q028); /*0x629c16*/
            v24 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame); /*0x629c23*/
            v39 = *(unsigned int *)(this->q028 + 540); /*0x629c2f*/
            v25 = (*(int (__thiscall **)(int))(*(unsigned int *)v23 + 132))(v23); /*0x629c30*/
            v26 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v24 + 132))( /*0x629c46*/
                    v24,
                    *(unsigned int *)(this->creationFrame + 540),
                    v25);
            HouseClass::AccumulateScore((float *)(this->creationFrame + 336), v26, v39); /*0x629c56*/
          }
          v27 = (unsigned char *)((IUnknown *)(*(unsigned char **)(&this->uniqueId0)));
          BuildingClass::Deploy(0, (int)v27); /*0x629c62*/
          v28 = *(unsigned int *)v27; /*0x629c67*/
          v27[973] = 1; /*0x629c69*/
          (*(void (__thiscall **)(unsigned char *, unsigned int))(v28 + 952))(v27, this->creationFrame); /*0x629c76*/
          (*(void (__thiscall **)(unsigned char *))(*(unsigned int *)v27 + 928))(v27); /*0x629c80*/
          v29 = this->q044; /*0x629c86*/
          this->q04C = 0; /*0x629c89*/
          this->u32_50 = 0; /*0x629c8e*/
          this->q048 = 0; /*0x629c91*/
          if ( v29 ) /*0x629c94*/
          {
            (*(void (__thiscall **)(int))(v29->q0F8)(v29); /*0x629c98*/
            this->q044 = 0; /*0x629c9e*/
          }
          if ( this->q054 ) /*0x629ca1*/
          {
            v43[0] = (unsigned int)(this);
            v30 = (*(int (__thiscall **)(int *, unsigned int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, v43); /*0x629cbc*/
            if ( v30 != -1 && v30 < g_BuildingTypeInstanceCount && v30 < --g_BuildingTypeInstanceCount ) /*0x629cd7*/
            {
              do /*0x629cef*/
              {
                ++v30; /*0x629cdf*/
                *((unsigned int *)g_BuildingClassPoolManager + v30 - 1) = *((unsigned int *)g_BuildingClassPoolManager + v30); /*0x629ce3*/
              }
              while ( v30 < g_BuildingTypeInstanceCount ); /*0x629cef*/
            }
            this->q054 = 0; /*0x629cf1*/
          }
          v31 = (unsigned int *)(this->creationFrame + 1696); /*0x629cff*/
          *v31 = g_CurrentFrame; /*0x629d05*/
          v31[1] = v54; /*0x629d0b*/
          v31[2] = 0; /*0x629d0e*/
        }
        else
        {
          v32 = this->q028; /*0x629d27*/
          v44 = *(unsigned int *)(v43[1] + 164); /*0x629d2a*/
          (*(void (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int))(*(unsigned int *)v32 + 364))( /*0x629d3b*/
            v32,
            &v44,
            0,
            v43[0],
            this->creationFrame,
            0,
            1,
            0);
          if ( this->q028 ) /*0x629d41*/
          {
            v33 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 1); /*0x629d58*/
            this->u32_50 = 0; /*0x629d66*/
            this->q048 = 3 - (v33 != 0); /*0x629d69*/
            this->q04C = 0; /*0x629d6c*/
            BuildingClass::AnimController(); /*0x629d6f*/
            FootClass::CreateWakes(v50, v51, v52); /*0x629d90*/
          }
          else
          {
            v37 = this->q044; /*0x629df3*/
            this->q04C = 0; /*0x629df6*/
            this->u32_50 = 0; /*0x629dfb*/
            this->q048 = 0; /*0x629dfe*/
            if ( v37 ) /*0x629e01*/
            {
              (*(void (__thiscall **)(int))(v37->q0F8)(v37); /*0x629e05*/
              this->q044 = 0; /*0x629e0b*/
            }
            if ( this->q054 ) /*0x629e0e*/
            {
              v43[1] = (unsigned int)(this);
              v38 = (*(int (__thiscall **)(int *, unsigned int *))(g_BuildingInstanceCount + 16))( /*0x629e29*/
                      &g_BuildingInstanceCount,
                      &v43[1]);
              if ( v38 != -1 && v38 < g_BuildingTypeInstanceCount && v38 < --g_BuildingTypeInstanceCount ) /*0x629e44*/
              {
                do /*0x629e5c*/
                {
                  ++v38; /*0x629e4c*/
                  *((unsigned int *)g_BuildingClassPoolManager + v38 - 1) = *((unsigned int *)g_BuildingClassPoolManager + v38); /*0x629e50*/
                }
                while ( v38 < g_BuildingTypeInstanceCount ); /*0x629e5c*/
              }
              this->q054 = 0; /*0x629e5e*/
            }
          }
  LABEL_47:
          v34 = *(unsigned int **)(&this->nextArrayIndex8); /*0x629d97*/
          if ( v34 ) /*0x629d9c*/
          {
            if ( this->creationFrame ) /*0x629d9e*/
            {
              v35 = this->q028; /*0x629da3*/
              if ( v35 ) /*0x629da8*/
              {
                v36 = (*(int (__thiscall **)(int))(*(unsigned int *)v35 + 444))(v35); /*0x629db8*/
                if ( this->q028 != v34[51] ) /*0x629dbf*/
                {
                  BuildingClass::AimTurret(v34, *(unsigned char **)(&this->uniqueId0)); /*0x629dc4*/
                  v34[53] = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 484))(this->creationFrame); /*0x629dd6*/
                  if ( v36 ) /*0x629ddc*/
                    v34[63] = *(int16_t *)(v36 + 266); /*0x629de5*/
                }
              }
            }
          }
        }
        break; /*0x629d18*/
      default:
        BuildingClass::Deploy((int)&savedregs, v4); /*0x629e69*/
        goto LABEL_47; /*0x629e6e*/
    }
  }
  else
  {
    BuildingClass::Deploy((int)&savedregs, v4); /*0x62985f*/
    v6 = this->creationFrame; /*0x629864*/
    if ( v6 ) /*0x629869*/
    {
      v54 = v54; /*0x629874*/
      v8 = (unsigned int *)(v6 + 1696); /*0x62987a*/
      *v8 = g_CurrentFrame; /*0x629880*/
      v8[1] = v54; /*0x629882*/
      v8[2] = 0; /*0x629885*/
    }
  }
}
} // namespace ra2

// 0x629FD0
namespace gamemd {
void ParasiteClass::TickDamage()
{
  int v2; // eax
  int *v3; // ecx
  unsigned int *v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  unsigned int * v8;
  int v9; // edx
  unsigned int *v10; // ecx
  unsigned int *v11; // ecx
  void *v12; // eax
  unsigned int v13; // ebx
  void *v14; // ebp
  void **v15; // eax
  int v16; // eax
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  int v21; // eax
  unsigned int v22[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v23; // [esp+1Ch] [ebp-30h] BYREF
  double v25; // [esp+24h] [ebp-28h]
  double v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+38h] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-10h]
  int v30; // [esp+40h] [ebp-Ch] BYREF
  int v32; // [esp+48h] [ebp-4h]

  if ( !this->q028 ) /*0x629fde*/
    return; /*0x629fde*/
  if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame) + 3278) /*0x62a004*/
    && *(unsigned char *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame) + 3479) )
  {
    ParasiteClass::DeploySquad(); /*0x62a010*/
    return; /*0x62a01c*/
  }
  v2 = (*(int (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)(&this->vtable46) + 1016))(this->creationFrame, 0); /*0x62a024*/
  v3 = *(int **)(&this->uniqueId0); /*0x62a02a*/
  v4 = *(unsigned int **)v2; /*0x62a02d*/
  v5 = *(unsigned int *)(*(unsigned int *)v2 + 172); /*0x62a02f*/
  v5 = v5; /*0x62a03b*/
  v27 = v3[39]; /*0x62a041*/
  v28 = v3[40]; /*0x62a048*/
  v6 = this->ParasiteClass_field_40; /*0x62a04c*/
  v29 = v3[41]; /*0x62a052*/
  v7 = this->u32_38; /*0x62a056*/
  if ( v7 == -1 ) /*0x62a05c*/
    goto LABEL_8; /*0x62a05c*/
  if ( (int)g_CurrentFrame - v7 < v6 ) /*0x62a068*/
  {
    v6 -= (int)g_CurrentFrame - v7; /*0x62a06a*/
  LABEL_8:
    if ( v6 ) /*0x62a06e*/
      return; /*0x62a06e*/
  }
  v8 = (int)((unsigned int *)(v4[44]));
  this->u32_38 = (unsigned int *)(g_CurrentFrame);
  this->ParasiteClass_field_3C = (unsigned int *)(v23);
  this->ParasiteClass_field_40 = (unsigned int *)(v8);
  v9 = *(unsigned int *)(v5 + 368); /*0x62a092*/
  v10 = v3 + 424; /*0x62a098*/
  *v10 = g_CurrentFrame; /*0x62a09e*/
  v10[1] = v23; /*0x62a0a4*/
  v10[2] = v9; /*0x62a0a7*/
  if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 44))(this->q028) == 15 ) /*0x62a0b5*/
  {
    v11 = *(unsigned int **)(&this->uniqueId0); /*0x62a0b7*/
    v22[0] = v11[27]; /*0x62a0c3*/
    (*(void (__stdcall **)(unsigned int *, unsigned int, int, unsigned int, int, int, unsigned int))(*v11 + 364))( /*0x62a0ce*/
      v22,
      0,
      v5,
      this->creationFrame,
      1,
      1,
      0);
  }
  else
  {
    v12 = operator new(0x100u); /*0x62a0d8*/
    if ( v12 ) /*0x62a0e2*/
      ParticleSystemClass::Constructor((int)v12, g_RulesClass_Instance->AIPlayers, &v27, 0, 0, &dword_AC4948, 0); /*0x62a103*/
    v13 = *ProgressTimer::GetValue((unsigned short *)(this->q028 + 904), &v23); /*0x62a11b*/
    if ( v4[65] ) /*0x62a11d*/
    {
      v14 = *(void **)(v4[62] + 4 * ((((v13 >> 12) + 1) >> 1) & 7)); /*0x62a138*/
      if ( v14 ) /*0x62a13d*/
      {
        v15 = (void *)operator new(0x1C8u); /*0x62a144*/
        if ( v15 ) /*0x62a14e*/
          AnimClass::ctor(v15, v14, &v27, 0, 1, (void *)0x600, 0, 0); /*0x62a165*/
      }
    }
    v16 = -(Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 1) != 0); /*0x62a189*/
    v22[1] = (int16_t)(v13 - 0x3FFF) - 0x3FFF; /*0x62a191*/
    IDA_LOBYTE(v16) = v16 & 0xFC; /*0x62a195*/
    v29 = v29; /*0x62a19e*/
    v23 = v16 + 2; /*0x62a1a2*/
    *(double *)&v22[1] = (double)v22[1] * -0.00009587672516830327; /*0x62a1ac*/
    v26 = (double)v28; /*0x62a1be*/
    v25 = (double)(v16 + 2); /*0x62a1c6*/
    v18 = Math::SinCos(*(double *)&v22[1]); /*0x62a1ca*/
    v23 = Math::RoundToInt(v26 - v18 * v25); /*0x62a1dc*/
    v19 = Math::ArcTan2(*(double *)&v22[1]); /*0x62a1e6*/
    v30 = Math::RoundToInt(v19 * v25 + (double)v27); /*0x62a1ff*/
    v23 = v23; /*0x62a203*/
    v20 = this->q028; /*0x62a207*/
    v32 = v29; /*0x62a20a*/
    (*(void (__thiscall **)(int, int *, int, unsigned int))(*(unsigned int *)v20 + 984))(v20, &v30, 1069547520, 0); /*0x62a21c*/
    v21 = this->creationFrame; /*0x62a228*/
    v22[0] = v4[41]; /*0x62a22f*/
    (*(void (__stdcall **)(unsigned int *, unsigned int, int, int, unsigned int, int, unsigned int))(**(unsigned int **)(&this->uniqueId0) + 364))( /*0x62a247*/
      v22,
      0,
      v5,
      v21,
      0,
      1,
      0);
  }
}
} // namespace ra2

// 0x62A980
namespace gamemd {
AbstractClass * * ParasiteClass::TryInfect(unsigned int * a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // eax
  int v6; // ebx
  int v7; // eax
  char v8; // al
  int v9; // ecx
  int result; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // edi
  int v13; // ebx
  ParasiteClass * v14;
  int v15; // [esp+20h] [ebp-Ch] BYREF
  int v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h]

  v3 = *(unsigned int *)&this->q110; /*0x62a98b*/
  this->q130 = 0; /*0x62a98e*/
  this->q140 = 0; /*0x62a993*/
  this->q120 = 0; /*0x62a996*/
  if ( v3 ) /*0x62a999*/
  {
    (*(void (__thiscall **)(int))(*(unsigned int *)v3 + 248))(v3); /*0x62a99d*/
    *(unsigned int *)&this->q110 = 0; /*0x62a9a3*/
  }
  if ( *(unsigned char *)&this->q054 ) /*0x62a9a6*/
  {
    v14 = this; /*0x62a9bd*/
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem(&g_BuildingInstanceCount, v4); /*0x62a9cf*/
    *(unsigned char *)&this->q054 = 0; /*0x62a9d4*/
  }
  this->q0E0 = g_CurrentFrame; /*0x62a9e6*/
  this->q0F0 = v16; /*0x62a9ed*/
  this->q100 = 0; /*0x62a9f0*/
  if ( ParasiteClass::CanInfect((unsigned int *)this, a2) ) /*0x62a9f5*/
  {
    v12 = (unsigned int *)(*(unsigned int *)&this->q090 + 1652); /*0x62aae2*/
    v13 = a2[39]; /*0x62aae8*/
    v16 = a2[40]; /*0x62aaed*/
    v17 = a2[41]; /*0x62aaf4*/
    if ( !*v12 ) /*0x62aaf8*/
      WinAPI::Wrapper(-2147467261); /*0x62ab03*/
    result = (*(int (__stdcall **)(unsigned int, int, int, int, int))(*(unsigned int *)*v12 + 112))(*v12, -1, v13, v16, v17); /*0x62ab24*/
    a2[421] = *(unsigned int *)&this->q090; /*0x62ab2b*/
    *(unsigned int *)((char *)&this->u32_9C + 4) = a2; /*0x62ab31*/
  }
  else
  {
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(*(unsigned int *)&this->q090 + 1372)); /*0x62aa11*/
    v6 = **(unsigned int *)&this->q090; /*0x62aa1f*/
    v7 = (*(int (__thiscall **)(void *, int *, unsigned int))(*(unsigned int *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
    v8 = (*(int (__thiscall **)(unsigned int, int))(v6 + 216))(*(unsigned int *)&this->q090, v7); /*0x62aa2c*/
    v9 = *(unsigned int *)&this->q090; /*0x62aa32*/
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      v11 = *(unsigned int *)&this->q090; /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2(&MapClass_Instance, &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
      if ( !(*(uint8_t (__thiscall **)(unsigned int))(**(unsigned int *)&this->q090 + 1196))(*(unsigned int *)&this->q090) ) /*0x62aa9b*/
      {
        (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int *)&this->q090 + 968))(*(unsigned int *)&this->q090, 0); /*0x62aaab*/
        (*(void (__thiscall **)(unsigned int, unsigned int, int))(**(unsigned int *)&this->q090 + 1152))(*(unsigned int *)&this->q090, 0, 1); /*0x62aab9*/
      }
      return (*(int (__thiscall **)(unsigned int, unsigned int, int))(**(unsigned int *)&this->q090 + 1156))( /*0x62aac9*/
               *(unsigned int *)&this->q090,
               0,
               1);
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(unsigned int *)v9 + 248))(v9); /*0x62aa3b*/
    }
  }
  return result; /*0x62aa41*/
}
} // namespace ra2

// 0x62AB40
namespace gamemd {
int ParasiteClass::CanExistOnVictimCell()
{
  int v2; // ecx
  int v4; // ecx
  unsigned int *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  unsigned int *v9; // eax

  v2 = this->q028; /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(uint8_t (__thiscall **)(int))(*(unsigned int *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  v4 = this->creationFrame; /*0x62ab77*/
  if ( v4 ) /*0x62ab7c*/
  {
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(v4) == 1 ) /*0x62ab86*/
    {
      v5 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028); /*0x62ab8f*/
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(unsigned int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(unsigned int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028) + 320) /*0x62abdc*/
        & 0x100) == 0;
    v8 = *(unsigned int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
  LABEL_20:
  v9 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028); /*0x62ac14*/
  return Cell::IsBridge(v9) == 0; /*0x62ab4b*/
}
} // namespace ra2

// 0x62AF70
namespace gamemd {
void * ParasiteClass::UpdateParasite(char a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int *v7; // [esp+8h] [ebp-4h] BYREF

  v3 = *(&this->vtable27); /*0x62af77*/
  *(&this->vtable29) = 0; /*0x62af97*/
  *(&this->vtable30) = 0; /*0x62af9a*/
  *(&this->vtable28) = 0; /*0x62af9d*/
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (__thiscall **)(int))(v3->q0F8)(v3); /*0x62afa4*/
    *(&this->vtable27) = 0; /*0x62afaa*/
  }
  if ( this->q054 ) /*0x62afad*/
  {
    v4 = (*(int (__thiscall **)(int *, unsigned int **))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &this); /*0x62afc6*/
    if ( v4 != -1 && v4 < g_BuildingTypeInstanceCount && v4 < --g_BuildingTypeInstanceCount ) /*0x62afe1*/
    {
      do /*0x62aff9*/
      {
        ++v4; /*0x62afe9*/
        *((unsigned int *)g_BuildingClassPoolManager + v4 - 1) = *((unsigned int *)g_BuildingClassPoolManager + v4); /*0x62afed*/
      }
      while ( v4 < g_BuildingTypeInstanceCount ); /*0x62aff9*/
    }
    this->q054 = 0; /*0x62affb*/
  }
  v5 = (*(int (__thiscall **)(int *, unsigned int **))(dword_AC4910 + 16))(&dword_AC4910, &this); /*0x62b012*/
  if ( v5 != -1 && v5 < dword_AC4920 && v5 < --dword_AC4920 ) /*0x62b02d*/
  {
    do /*0x62b045*/
    {
      ++v5; /*0x62b035*/
      *((unsigned int *)dword_AC4914 + v5 - 1) = *((unsigned int *)dword_AC4914 + v5); /*0x62b039*/
    }
    while ( v5 < dword_AC4920 ); /*0x62b045*/
  }
  AbstractClass::DTOR(); /*0x62b049*/
  if ( (a2 & 1) != 0 ) /*0x62b053*/
    RA2_OPDEL(); /*0x62b056*/
  return this; /*0x62b060*/
}
} // namespace ra2

// 0x62BD50
namespace gamemd {
Coord * * ParasiteClass::Update()
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int *v8; // ebx
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int v12; // eax
  unsigned int *v13; // esi
  double v14; // st7
  unsigned int *v15; // edi
  int Byte284; // eax
  float *v17; // eax
  double v18; // st7
  int v19; // edx
  float *v20; // eax
  float *v21; // eax
  float v22; // edx
  int v24; // eax
  int v25; // eax
  int *v26; // esi
  int v27; // edx
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  int *v31; // edi
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ebx
  int64_t v37; // rax
  int v38; // edi
  int v39; // ebx
  char result; // al
  int v41; // [esp-Ch] [ebp-100h]
  int v42; // [esp+0h] [ebp-F4h]
  int v43; // [esp+0h] [ebp-F4h]
  int v44; // [esp+0h] [ebp-F4h]
  int v45; // [esp+4h] [ebp-F0h]
  int v46; // [esp+4h] [ebp-F0h]
  bool v48; // [esp+19h] [ebp-DBh]
  char v49; // [esp+1Ah] [ebp-DAh]
  char v50; // [esp+1Bh] [ebp-D9h]
  int v51; // [esp+1Ch] [ebp-D8h] BYREF
  float v52; // [esp+20h] [ebp-D4h]
  float v53; // [esp+24h] [ebp-D0h]
  float v54; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v58; // [esp+38h] [ebp-BCh]
  int v59; // [esp+3Ch] [ebp-B8h]
  unsigned int v60[2]; // [esp+40h] [ebp-B4h] BYREF
  int v61; // [esp+48h] [ebp-ACh]
  unsigned int v62[3]; // [esp+4Ch] [ebp-A8h] BYREF
  float v63[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v64; // [esp+60h] [ebp-94h]
  float v65[12]; // [esp+64h] [ebp-90h] BYREF
  float v66[12]; // [esp+94h] [ebp-60h] BYREF
  float v67[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( ((uint8_t)g_CurrentFrame & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
  v51 = this->u32_9C; /*0x62bd75*/
  v52 = this->q0A0; /*0x62bd88*/
  v53 = this->q0A4; /*0x62bd8f*/
  if ( (abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((unsigned int *)g_ScenarioClass_Instance + 134)) % 3 - 1; /*0x62bde2*/
    v4 = v2 + this->q0C0; /*0x62be11*/
    v5 = v3 + this->q0C4; /*0x62be1b*/
    this->q0C0 = v4; /*0x62be1f*/
    this->q0C4 = v5; /*0x62be25*/
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
        this->q0C0 = 2; /*0x62be3e*/
    }
    else
    {
      this->q0C0 = -2; /*0x62be32*/
    }
    v6 = this->q0C4; /*0x62be44*/
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
        this->q0C4 = 2; /*0x62be5a*/
    }
    else
    {
      this->q0C4 = -2; /*0x62be4e*/
    }
  }
  v7 = (double)v51; /*0x62be60*/
  v8 = (int *)(&this->u32_504); /*0x62be64*/
  v51 = 0; /*0x62be6a*/
  v7 = v7; /*0x62be78*/
  v9 = (double)IDA_SLODWORD(v52); /*0x62be7c*/
  v52 = 0.0; /*0x62be80*/
  this->q0CC = 0; /*0x62be8c*/
  v9 = v9; /*0x62be8e*/
  v10 = (double)IDA_SLODWORD(v53); /*0x62be92*/
  v53 = -2.0; /*0x62be96*/
  this->q0D0 = 0; /*0x62bea2*/
  v58 = v10; /*0x62bea5*/
  this->q0D4 = -1073741824; /*0x62bea9*/
  this->q0D4 = this->q0D4 - (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x62bebd*/
  v45 = Math::RoundToInt(v58); /*0x62becd*/
  v42 = Math::RoundToInt(v9); /*0x62bed7*/
  v11 = Math::RoundToInt(v7); /*0x62bed8*/
  Coord3D::Set(v60, v11, v42, v45); /*0x62bee2*/
  Vector3::AddAssign(&this->u32_504); /*0x62beec*/
  v46 = Math::RoundToInt(v58); /*0x62befe*/
  v43 = Math::RoundToInt(v9); /*0x62bf08*/
  v12 = Math::RoundToInt(v7); /*0x62bf09*/
  Coord3D::Set(v62, v12, v43, v46); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(v62); /*0x62bf2d*/
  v59 = dword_AC4A0C + GroundHeight; /*0x62bf3d*/
  v13 = Coord::To_Cell(&MapClass_Instance, v62); /*0x62bf46*/
  v50 = 0; /*0x62bf4d*/
  v49 = 0; /*0x62bf52*/
  if ( (v13[80] & 0x100) != 0 || (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v60) + 80) & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v62[2] < v59 ) /*0x62bf84*/
    {
      if ( v61 >= v59 ) /*0x62bf93*/
        v50 = 1; /*0x62bf95*/
    }
    else if ( v61 < v59 ) /*0x62bf88*/
    {
      v49 = 1; /*0x62bf8a*/
    }
  }
  v48 = 0; /*0x62bf9e*/
  if ( !v50 && !v49 ) /*0x62bfb1*/
  {
    v14 = (double)GroundHeight; /*0x62bfb7*/
    if ( v58 >= v14 && v58 - 150.0 < v14 ) /*0x62bfdb*/
    {
      v15 = Cell::IsBridge(v13); /*0x62bfe4*/
      if ( v15 || BuildingPlacement::ValidateType(v13, -1, -1) ) /*0x62bff0*/
      {
        v48 = 1; /*0x62c001*/
        if ( v15 ) /*0x62c006*/
        {
          if ( *(unsigned char *)(v15[328] + 5823) ) /*0x62c00e*/
            v48 = v15[390] < 8; /*0x62c021*/
          if ( (*(uint8_t (__thiscall **)(unsigned int *))(*v15 + 128))(v15) ) /*0x62c02a*/
            v48 = 0; /*0x62c034*/
        }
      }
      else
      {
        v48 = 0; /*0x62bff9*/
      }
    }
  }
  v54 = (float)GroundHeight; /*0x62c041*/
  if ( v58 < (double)v54 ) /*0x62c056*/
  {
    if ( !v50 ) /*0x62c1b7*/
    {
      if ( !v49 ) /*0x62c1cc*/
      {
  LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v58 ) /*0x62c094*/
          v58 = v54; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v50 ) /*0x62c05e*/
  {
    if ( !v49 ) /*0x62c06a*/
    {
      if ( !v48 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
  LABEL_47:
    IDA_LODWORD(v54) = v59 - 20; /*0x62c1d2*/
    v58 = (float)(v59 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v58 = (float)v59; /*0x62c1bd*/
  LABEL_39:
  Byte284 = CellClass::GetByte284(v62); /*0x62c09e*/
  qmemcpy(v65, CopyAudioData((char *)v67, Byte284), sizeof(v65)); /*0x62c0cb*/
  v17 = InvertMatrix3x3Signs(v67, v65); /*0x62c0d4*/
  v18 = this->q0D0; /*0x62c0d9*/
  v19 = *v8; /*0x62c0ea*/
  qmemcpy(v66, v17, sizeof(v66)); /*0x62c0ec*/
  *(float *)&v44 = -v18; /*0x62c0f9*/
  Triple::Set(&v51, v19, v44, this->q0D4); /*0x62c0fd*/
  v20 = Matrix3x3::TransformPoint(v66, v63, (float *)&v51); /*0x62c113*/
  v51 = *(unsigned int *)v20; /*0x62c11f*/
  v52 = v20[1]; /*0x62c126*/
  v53 = v20[2]; /*0x62c131*/
  Coord::Scale((float *)&v51, 1.0); /*0x62c135*/
  v53 = -v53; /*0x62c14a*/
  v21 = Matrix3x3::TransformPoint(v65, v63, (float *)&v51); /*0x62c152*/
  v51 = *(unsigned int *)v21; /*0x62c159*/
  v52 = v21[1]; /*0x62c160*/
  v22 = v21[2]; /*0x62c164*/
  v51 = v51; /*0x62c167*/
  this->q0D0 = -v52; /*0x62c171*/
  v53 = v22; /*0x62c176*/
  *v8 = v51; /*0x62c17a*/
  this->q0D4 = v22; /*0x62c17c*/
  LABEL_40:
  if ( (*(int (__thiscall **)(char *))(*(unsigned int *)&this->q0B46))(this) <= 5 || (int)g_CurrentFrame % 2 )
  {
    v24 = this->q0C8 <= 0 ? 0 : this->q0C8;
  }
  else
  {
    v24 = this->q0C8 - 1; /*0x62c1a8*/
    if ( v24 < -5 ) /*0x62c1ac*/
      v24 = -5; /*0x62c1ae*/
  }
  this->q0C8 = v24; /*0x62c1fa*/
  LABEL_50:
  if ( !--this->q12A ) /*0x62c207*/
  {
    v25 = this->q0AC; /*0x62c215*/
    if ( *(unsigned int *)(v25 + 744) ) /*0x62c21b*/
    {
      this->q12A = *(unsigned short *)(v25 + 732); /*0x62c236*/
      v60[0] = this->u32_9C; /*0x62c23f*/
      v60[1] = this->q0A0; /*0x62c250*/
      v61 = this->q0A4; /*0x62c257*/
      v26 = (int *)*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v60) + 57); /*0x62c260*/
      if ( v26 ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v27 = v26[39]; /*0x62c276*/
          v28 = v26[40]; /*0x62c278*/
          v64 = v26[41]; /*0x62c286*/
          v29 = this->u32_9C - v27; /*0x62c28c*/
          v30 = this->q0A0 - v28; /*0x62c291*/
          v31 = (int *)v26[12]; /*0x62c293*/
          v64 = this->q0A4; /*0x62c299*/
          v32 = abs32(v29) + abs32(v30); /*0x62c2af*/
          if ( *((unsigned char *)v26 + 144) && v26[27] > 0 ) /*0x62c2c0*/
          {
            v33 = this->q124; /*0x62c2c2*/
            if ( v33 ) /*0x62c2ca*/
              v34 = *(unsigned int *)(v33 + 252); /*0x62c2cc*/
            else
              v34 = 0; /*0x62c2d4*/
            v35 = this->q0AC; /*0x62c2d6*/
            v34 = v34; /*0x62c2dc*/
            v54 = *(float *)(v35 + 744); /*0x62c2e9*/
            v36 = *v26; /*0x62c2f3*/
            v41 = *(unsigned int *)(v35 + 740); /*0x62c2f5*/
            v37 = ZCoordToScreenY(v32); /*0x62c2f6*/
            (*(void (__fastcall **)(int *, unsigned int, float *, unsigned int, int, unsigned int, unsigned int, unsigned int, int))(v36 + 364))( /*0x62c303*/
              v26,
              IDA_HIDWORD(v37),
              &v54,
              v37,
              v41,
              0,
              0,
              0,
              v34);
          }
          v26 = v31; /*0x62c30b*/
        }
        while ( v31 ); /*0x62c30d*/
      }
    }
  }
  v38 = this->q0AC; /*0x62c316*/
  v39 = *(unsigned int *)(v38 + 736) /*0x62c33f*/
      - *((uint16_t *)&this->q0388)
      + (*(int (__stdcall **)(char *))(this->vtable2 + 16))&this->uniqueId;
  if ( !(v39 % (*(char *)(v38 + 779) + ((*(int (__stdcall **)(char *))(this->vtable2 + 16))&this->uniqueId & 1))) ) /*0x62c355*/
    ++*(&this->spawnStatus2); /*0x62c35b*/
  result = *(&this->spawnStatus2); /*0x62c361*/
  if ( result == *(unsigned char *)(v38 + 777) ) /*0x62c36f*/
  {
    result = *(unsigned char *)(v38 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
      *(&this->spawnStatus5) = 1; /*0x62c37c*/
    else
      *(&this->spawnStatus2) = 0; /*0x62c38d*/
  }
  return result; /*0x62c37b*/
}
} // namespace ra2

// 0x6295B0
namespace gamemd {
int ParasiteClass::LoadParasite(int * a0, AbstractClass * aP1)
{
  int result; // eax
  int v3; // ebp
  wchar_t *v4; // edx
  int v5; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a0, aP1); /*0x6295bc*/
  v3 = result; /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( a0 ) /*0x6295cd*/
    {
      AbstractClass::InitVtables(a0, (int)&aP1); /*0x6295d6*/
      v4 = g_CurrentFrame; /*0x6295db*/
      a0[13] = 0; /*0x6295e1*/
      a0[11] = (int)v4; /*0x6295e8*/
      a0[14] = (int)g_CurrentFrame; /*0x6295f0*/
      a0[16] = 0; /*0x6295f3*/
      *a0 = (int)&ParasiteClass_vftable; /*0x6295fa*/
      a0[1] = (int)&ParasiteClass_vftable; /*0x629600*/
      a0[2] = (int)&ParasiteClass_vftable; /*0x629607*/
      a0[3] = (int)&ParasiteClass_vftable; /*0x62960e*/
    }
    if ( a0[17] /*0x629657*/
      && (g_BuildingTypeInstanceCount < dword_B0F5C0
       || (byte_B0F5C5 || !dword_B0F5C0)
       && dword_B0F5CC > 0
       && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingInstanceCount + 8))(
            &g_BuildingInstanceCount,
            dword_B0F5C0 + dword_B0F5CC,
            0)) )
    {
      v5 = g_BuildingTypeInstanceCount++; /*0x629664*/
      *((unsigned int *)g_BuildingClassPoolManager + v5) = a0; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a0 + 9); /*0x62967f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a0 + 10); /*0x62968d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a0 + 17); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}
} // namespace gamemd

// 0x6296B0
namespace gamemd {
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6296c4*/
}
} // namespace gamemd

// 0x6296D0
namespace gamemd {
int ParasiteClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = 1822515787; /*0x629700*/
  return 0; /*0x6296dd*/
}
} // namespace gamemd

// 0x62A8E0
namespace gamemd {
bool ParasiteClass::CanInfect(unsigned int * a2)
{
  int v3; // ecx
  int *v4; // eax
  bool result; // al

  result = 0; /*0x62a977*/
  if ( a2 ) /*0x62a8ea*/
  {
    if ( !*((unsigned char *)a2 + 129) ) /*0x62a8f0*/
    {
      if ( *((unsigned char *)a2 + 144) ) /*0x62a8fa*/
      {
        if ( a2[27] ) /*0x62a904*/
        {
          if ( !a2[421] ) /*0x62a90b*/
          {
            if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                v3 = this->creationFrame; /*0x62a933*/
                if ( !v3 ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)v3 + 132))(v3) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (__thiscall **)(unsigned int *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (int *)(*(int (__thiscall **)(unsigned int *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( Cell::IsValidHeight(v4) ) /*0x62a966*/
                  return 1; /*0x62a8ea*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x62a96f*/
}
} // namespace gamemd
