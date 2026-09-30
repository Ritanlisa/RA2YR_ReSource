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
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Process_e4.hpp"

// 0x629210
namespace gamemd {
void ParasiteClass::Constructor()
{
  int v2; // ecx
  int v3; // eax

  AbstractClass::Constructor(); /*0x629213*/
    *((unsigned int *)this + 176) = MEMORY[0xA8ED84];
    *((unsigned int *)this + 208) = 0;
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x629225*/
    *((unsigned int *)this + 256) = 0;
    *((unsigned int *)this + 224) = v2;
    *(unsigned int *)this = &ParasiteClass::`vftable';
    *((unsigned int *)this + 16) = &ParasiteClass::`vftable';
    *((unsigned int *)this + 32) = &ParasiteClass::`vftable';
    *((unsigned int *)this + 48) = &vt_ParasiteClass;
  if ( dword_AC4920 < dword_AC4918 /*0x62927e*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v3 = (unsigned int)(dword_AC4920++);
    *((unsigned int *)dword_AC4914 + v3) = this; /*0x62929a*/
  }
  return (int)this; /*0x62929f*/
}
} // namespace ra2

// 0x6292B0
namespace gamemd {
ParasiteClass::ParasiteClass(TechnoClass * aP1)
{
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor(); /*0x6292b6*/
    *((unsigned int *)this + 176) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
    *((unsigned int *)this + 208) = 0;
    *((unsigned int *)this + 224) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
    *((unsigned int *)this + 256) = 0;
  *(unsigned int *)this = (void*)&ParasiteClass_vftable; /*0x6292d8*/
    *((unsigned int *)this + 16) = &ParasiteClass::`vftable';
    *((unsigned int *)this + 32) = &ParasiteClass::`vftable';
    *((unsigned int *)this + 48) = &vt_ParasiteClass;
  this->creationFrame = (unsigned int)(aP1);
  this->q028 = (int)((void *)(0));
  this->u32_38 = (unsigned int)((void *)(dword_A8ED84));
  this->ParasiteClass_field_3C = (unsigned int)((void *)(v6));
  this->ParasiteClass_field_40 = (unsigned int)((void *)(0));
  dword_A8ED84 = (void *)(dword_A8ED84);
    *((unsigned char *)this + 336) = 0;
    *((unsigned int *)this + 176) = v3;
    *((unsigned int *)this + 192) = v6;
    *((unsigned int *)this + 208) = 0;
    *((unsigned int *)this + 304) = 0;
    *((unsigned int *)this + 320) = 0;
    *((unsigned int *)this + 272) = 0;
    *((unsigned int *)this + 288) = 0;
  if ( dword_AC4920 < dword_AC4918 /*0x629360*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v4 = (unsigned int)(dword_AC4920++);
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
    v3 = *((unsigned int *)this + 272);
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (__stdcall **)(int))(v3->u32_4 + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
    Power::TimerProcess(*((unsigned int *)this + 288));
    Power::TimerProcess(*((unsigned int *)this + 304));
    Power::TimerProcess(*((unsigned int *)this + 320));
    LOBYTE(v5) = *((unsigned char *)this + 336);
// 0x4a1ca0
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

    v2 = (unsigned int *)(*(int (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 144) + 1016))(*((unsigned int *)this + 144), 0);
  v3 = *(int **)(&this->uniqueId0); /*0x62980d*/
  v43[1] = *v2; /*0x629812*/
  v4 = *(unsigned int *)(v43[1] + 172); /*0x629816*/
  v43[0] = v4; /*0x629822*/
  v50 = v3[39]; /*0x629828*/
  v51 = v3[40]; /*0x62982f*/
  v52 = v3[41]; /*0x629836*/
  v5 = (int *)(*(int (**)(int *))(*v3 + 444))(v3); /*0x62983c*/
  v40 = 1.0; /*0x629844*/
  if ( !v5 || Cell::IsValidHeight(v5) ) /*0x629854*/
  {
    v9 = *(unsigned int *)(v4 + 368); /*0x629898*/
        v10 = (unsigned int *)(*((unsigned int *)this + 160) + 1696);
    *v10 = g_CurrentFrame; /*0x6298a4*/
    v10[1] = v54; /*0x6298aa*/
    v10[2] = v9; /*0x6298ad*/
        switch ( *((unsigned int *)this + 288) )
    {
      case 0: /*0x6298bc*/
                *(unsigned int *)(*((unsigned int *)this + 160) + 808) = 0;
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
                this->q044 = (unsigned int)(v14);
                if ( g_BuildingTypeInstanceCount < dword_B0F5C0 /*0x629953*/
                  || (byte_B0F5C5 || !dword_B0F5C0)
                  && dword_B0F5CC > 0
                  && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingInstanceCount + 8))(
                       &g_BuildingInstanceCount,
                       dword_B0F5CC + dword_B0F5C0,
                       0) )
                {
                  v15 = (gamemd::ParasiteClass *)(g_BuildingTypeInstanceCount++);
                  *((unsigned int *)(unsigned int)(g_BuildingClassPoolManager)+ v15) = this; /*0x62996f*/
                }
              }
            }
          }
        }
                *((unsigned int *)this + 288) = 1;
                *((unsigned int *)this + 320) = 0;
                *((unsigned int *)this + 304) = 0;
        BuildingClass::AnimController(); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1: /*0x6298bc*/
        if ( BuildingClass::AnimController((int *)this) ) /*0x62998d*/
        {
          v16 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 1); /*0x6299a9*/
                    *((unsigned int *)this + 320) = 0;
                    *((unsigned int *)this + 288) = 3 - (v16 != 0);
                    *((unsigned int *)this + 304) = 0;
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
                    *((unsigned int *)this + 288) = 4;
                    *((unsigned int *)this + 320) = 0;
                    *((unsigned int *)this + 304) = 0;
          BuildingClass::AnimController(); /*0x629a15*/
        }
                *(double *)&v43[1] = (double)*((int *)this + 304) * v40 * 0.3141592653589793;
                *(float *)(*((unsigned int *)this + 160) + 808) = Math::SinCos(*(double *)&v43[1]) * 0.78539819;
        goto LABEL_47; /*0x629a4c*/
      case 4: /*0x6298bc*/
                *(unsigned int *)(*((unsigned int *)this + 160) + 808) = 0;
        v17 = *((unsigned int *)g_RulesClass_Instance + 756); /*0x629a67*/
                v41 = -((double)(*(__int16 *)ProgressTimer::GetValue((unsigned short *)(*((unsigned int *)this + 160) + 904), &v45) - 0x3FFF)
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
                    if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 132))(*((unsigned int *)this + 144)) + 3214) )
          {
                        v23 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 132))(*((unsigned int *)this + 160));
                        v24 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 132))(*((unsigned int *)this + 144));
                        v39 = *(unsigned int *)(*((unsigned int *)this + 160) + 540);
            v25 = (*(int (**)(int))(*(unsigned int *)v23 + 132))(v23); /*0x629c30*/
            v26 = (*(int (**)(int, unsigned int, int))(*(unsigned int *)v24 + 132))( /*0x629c46*/
                    v24,
                    *(unsigned int *)(this->creationFrame + 540),
                    v25);
                        VeterancyStruct::Accumulate((float *)(*((unsigned int *)this + 144) + 336), v26, v39);
          }
          v27 = (unsigned char *)((IUnknown *)(*(unsigned char **)(&this->uniqueId0)));
          BuildingClass::Deploy(0, (int)v27); /*0x629c62*/
          v28 = *(unsigned int *)v27; /*0x629c67*/
          v27[973] = 1; /*0x629c69*/
                    (*(void (**)(unsigned char *, unsigned int))(v28 + 952))(v27, *((unsigned int *)this + 144));
          (*(void (**)(unsigned char *))(*(unsigned int *)v27 + 928))(v27); /*0x629c80*/
                    v29 = *((unsigned int *)this + 272);
                    *((unsigned int *)this + 304) = 0;
                    *((unsigned int *)this + 320) = 0;
                    *((unsigned int *)this + 288) = 0;
          if ( v29 ) /*0x629c94*/
          {
            (*(void (**)(int))(v29->q0F8)(v29); /*0x629c98*/
                        *((unsigned int *)this + 272) = 0;
          }
                    if ( *((unsigned char *)this + 336) )
          {
            v43[0] = (unsigned int)(this);
            v30 = (*(int (**)(int *, unsigned int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, v43); /*0x629cbc*/
            if ( v30 != -1 && v30 < g_BuildingTypeInstanceCount && v30 < --g_BuildingTypeInstanceCount ) /*0x629cd7*/
            {
              do /*0x629cef*/
              {
                ++v30; /*0x629cdf*/
                *((unsigned int *)g_BuildingClassPoolManager + v30 - 1) = *((unsigned int *)g_BuildingClassPoolManager + v30); /*0x629ce3*/
              }
              while ( v30 < g_BuildingTypeInstanceCount ); /*0x629cef*/
            }
                        *((unsigned char *)this + 336) = 0;
          }
                    v31 = (unsigned int *)(*((unsigned int *)this + 144) + 1696);
          *v31 = g_CurrentFrame; /*0x629d05*/
          v31[1] = v54; /*0x629d0b*/
          v31[2] = 0; /*0x629d0e*/
        }
        else
        {
                    v32 = *((unsigned int *)this + 160);
          v44 = *(unsigned int *)(v43[1] + 164); /*0x629d2a*/
          (*(void (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int))(*(unsigned int *)v32 + 364))( /*0x629d3b*/
            v32,
            &v44,
            0,
            v43[0],
            this->creationFrame,
            0,
            1,
            0);
                    if ( *((unsigned int *)this + 160) )
          {
            v33 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 1); /*0x629d58*/
                        *((unsigned int *)this + 320) = 0;
                        *((unsigned int *)this + 288) = 3 - (v33 != 0);
                        *((unsigned int *)this + 304) = 0;
            BuildingClass::AnimController(); /*0x629d6f*/
            FootClass::CreateWakes(v50, v51, v52); /*0x629d90*/
          }
          else
          {
            v37 = (void *)(this->q044);
                        *((unsigned int *)this + 304) = 0;
                        *((unsigned int *)this + 320) = 0;
                        *((unsigned int *)this + 288) = 0;
            if ( v37 ) /*0x629e01*/
            {
              (*(void (**)(int))(v37->q0F8)(v37); /*0x629e05*/
                            *((unsigned int *)this + 272) = 0;
            }
                        if ( *((unsigned char *)this + 336) )
            {
              v43[1] = (unsigned int)(this);
              v38 = (*(int (**)(int *, unsigned int *))(g_BuildingInstanceCount + 16))( /*0x629e29*/
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
                            *((unsigned char *)this + 336) = 0;
            }
          }
  LABEL_47:
                    v34 = *(unsigned int **)((char *)this + 272);
          if ( v34 ) /*0x629d9c*/
          {
                        if ( *((unsigned int *)this + 144) )
            {
                            v35 = *((unsigned int *)this + 160);
              if ( v35 ) /*0x629da8*/
              {
                v36 = (*(int (**)(int))(*(unsigned int *)v35 + 444))(v35); /*0x629db8*/
                                if ( *((unsigned int *)this + 160) != v34[51] )
                {
                                    BuildingClass::AimTurret(v34, *(unsigned char **)((char *)this + 160));
                                    v34[53] = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 484))(*((unsigned int *)this + 144));
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
        v6 = *((unsigned int *)this + 144);
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

    if ( !*((unsigned int *)this + 160) )
    return; /*0x629fde*/
    if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 132))(*((unsigned int *)this + 144)) + 3278)
    && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame) + 3479) )
  {
    ParasiteClass::DeploySquad(); /*0x62a010*/
    return; /*0x62a01c*/
  }
    v2 = (*(int (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 144) + 1016))(*((unsigned int *)this + 144), 0);
  v3 = *(int **)(&this->uniqueId0); /*0x62a02a*/
  v4 = *(unsigned int **)v2; /*0x62a02d*/
  v5 = *(unsigned int *)(*(unsigned int *)v2 + 172); /*0x62a02f*/
  v5 = v5; /*0x62a03b*/
  v27 = v3[39]; /*0x62a041*/
  v28 = v3[40]; /*0x62a048*/
    v6 = *((unsigned int *)this + 256);
  v29 = v3[41]; /*0x62a052*/
    v7 = *((unsigned int *)this + 224);
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
    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 44))(*((unsigned int *)this + 160)) == 15 )
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
        v13 = *ProgressTimer::GetValue((unsigned short *)(*((unsigned int *)this + 160) + 904), &v23);
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
        v20 = *((unsigned int *)this + 160);
    v32 = v29; /*0x62a20a*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v20 + 984))(v20, &v30, 1069547520, 0); /*0x62a21c*/
        v21 = *((unsigned int *)this + 144);
    v22[0] = v4[41]; /*0x62a22f*/
        (*(void (__stdcall **)(unsigned int *, unsigned int, int, int, unsigned int, int, unsigned int))(**(unsigned int **)((char *)this + 160) + 364))(
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

    v3 = *((unsigned int *)this + 272);
    *((unsigned int *)this + 304) = 0;
    *((unsigned int *)this + 320) = 0;
    *((unsigned int *)this + 288) = 0;
  if ( v3 ) /*0x62a999*/
  {
    (*(void (**)(int))(*(unsigned int *)v3 + 248))(v3); /*0x62a99d*/
        *((unsigned int *)this + 272) = 0;
  }
    if ( *((unsigned char *)this + 336) )
  {
    v14 = this; /*0x62a9bd*/
    v4 = (*(int (**)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem(&g_BuildingInstanceCount, v4); /*0x62a9cf*/
        *((unsigned char *)this + 336) = 0;
  }
    *((unsigned int *)this + 224) = MEMORY[0xA8ED84];
    *((unsigned int *)this + 240) = v16;
    *((unsigned int *)this + 256) = 0;
  if ( ParasiteClass::CanInfect((unsigned int *)this, a2) ) /*0x62a9f5*/
  {
        v12 = (unsigned int *)(*((unsigned int *)this + 144) + 1652);
    v13 = a2[39]; /*0x62aae8*/
    v16 = a2[40]; /*0x62aaed*/
    v17 = a2[41]; /*0x62aaf4*/
    if ( !*v12 ) /*0x62aaf8*/
      WinAPI::Wrapper(-2147467261); /*0x62ab03*/
    result = (*(int (__stdcall **)(unsigned int, int, int, int, int))(*(unsigned int *)*v12 + 112))(*v12, -1, v13, v16, v17); /*0x62ab24*/
        a2[421] = *((unsigned int *)this + 144);
        *((unsigned int *)this + 160) = a2;
  }
  else
  {
        v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(*((unsigned int *)this + 144) + 1372));
    v6 = **(unsigned int *)&this->q090; /*0x62aa1f*/
    v7 = (*(int (**)(void *, int *, unsigned int))(*(unsigned int *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
        v8 = (*(int (**)(unsigned int, int))(v6 + 216))(*((unsigned int *)this + 144), v7);
        v9 = *((unsigned int *)this + 144);
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      v11 = *(unsigned int *)&this->q090; /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2(&MapClass_Instance, &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
            if ( !(*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 1196))(*((unsigned int *)this + 144)) )
      {
                (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 144) + 968))(*((unsigned int *)this + 144), 0);
                (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 144) + 1152))(*((unsigned int *)this + 144), 0, 1);
      }
      return (*(int (**)(unsigned int, unsigned int, int))(**(unsigned int *)&this->q090 + 1156))( /*0x62aac9*/
               *(unsigned int *)&this->q090,
               0,
               1);
    }
    else
    {
      return (*(int (**)(int))(*(unsigned int *)v9 + 248))(v9); /*0x62aa3b*/
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
  int creationFrame; // ecx
  CellClass *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  Cell *v9; // eax

    v2 = *((unsigned int *)this + 160);
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(uint8_t (**)(int))(*(unsigned int *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
    if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 132))(*((unsigned int *)this + 144)) + 3278) )
    goto LABEL_20; /*0x62ab69*/
    v4 = *((unsigned int *)this + 144);
  if ( creationFrame ) /*0x62ab7c*/
  {
    if ( (*(int (**)(int))(*(unsigned int *)creationFrame + 44))(creationFrame) == 1 ) /*0x62ab86*/
    {
            v5 = (unsigned int *)(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 444))(*((unsigned int *)this + 160));
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
    v6 = *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 444))(*((unsigned int *)this + 160)) + 236);
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
        v7 = (*(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 444))(*((unsigned int *)this + 160)) + 320)
                    + 320)
        & 0x100) == 0;
        v8 = *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 444))(*((unsigned int *)this + 160)) + 68);
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
  LABEL_20:
    v9 = (unsigned int *)(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 160) + 444))(*((unsigned int *)this + 160));
// 0x47c520
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

    v3 = *((unsigned int *)Block + 17);
    *(unsigned int *)Block->__pad_0 = &ParasiteClass::`vftable';
  *(void **)&this->vtable2 = (void*)&ParasiteClass_vftable; /*0x62af82*/
  *(void **)&this->vtable3 = (void*)&ParasiteClass_vftable; /*0x62af89*/
  *(void **)&this->vtable4 = (void*)&ParasiteClass_vftable; /*0x62af90*/
    *((unsigned int *)Block + 19) = 0;
    *((unsigned int *)Block + 20) = 0;
    *((unsigned int *)Block + 18) = 0;
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (**)(int))(v3->q0F8)(v3); /*0x62afa4*/
        *((unsigned int *)Block + 17) = 0;
  }
    if ( *((unsigned char *)Block + 84) )
  {
    v4 = (*(int (**)(int *, ParasiteClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x62afc6*/
           g_BuildingLoadQueue_Array.?,
           &this);
    if ( v4 != -1 && v4 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) ) /*0x62afd6*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x62afdb*/
      for ( ; /*0x62afe1*/
            v4 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1));
            *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * v4 - 4) = *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))
                                                                                 + 4 * v4) )
      {
        ++v4; /*0x62afe9*/
      }
    }
        *((unsigned char *)Block + 84) = 0;
  }
  v5 = (*(int (**)(int *, ParasiteClass **))(dword_AC4910 + 16))(&dword_AC4910, &this); /*0x62b012*/
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
    return Block;
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
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CellClass *v17; // esi
  double v18; // st7
  unsigned int *v19; // edi
  int Byte284; // eax
  float *v21; // eax
  double v22; // st7
  int v23; // edx
  int v24; // eax
  int v25; // eax
  float v26; // edx
  int v28; // eax
  int v29; // eax
  ObjectClass *firstObject; // esi
  int v31; // edx
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  ObjectClass *nextObject; // edi
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  void *vtable0; // ebx
  int64_t v41; // rax
  int v42; // edi
  int v43; // ebx
  char result; // al
  int v45; // [esp-Ch] [ebp-100h]
  int v48; // [esp+0h] [ebp-F4h]
  float *v52; // [esp+8h] [ebp-ECh]
  float *v53; // [esp+8h] [ebp-ECh]
  float v54; // [esp+8h] [ebp-ECh]
  float *v55; // [esp+8h] [ebp-ECh]
  bool v56; // [esp+19h] [ebp-DBh]
  char v57; // [esp+1Ah] [ebp-DAh]
  char v58; // [esp+1Bh] [ebp-D9h]
  int v59; // [esp+1Ch] [ebp-D8h] BYREF
  float v60; // [esp+20h] [ebp-D4h]
  float v61; // [esp+24h] [ebp-D0h]
  float v62; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v66; // [esp+38h] [ebp-BCh]
  int v67; // [esp+3Ch] [ebp-B8h]
  unsigned int v68[2]; // [esp+40h] [ebp-B4h] BYREF
  int v69; // [esp+48h] [ebp-ACh]
  int v70[3]; // [esp+4Ch] [ebp-A8h] BYREF
  int v71[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v72; // [esp+60h] [ebp-94h]
  float v73[12]; // [esp+64h] [ebp-90h] BYREF
  float v74[12]; // [esp+94h] [ebp-60h] BYREF
  float v75[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( ((uint8_t)dword_A8ED84 & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
    v51 = *((unsigned int *)this + 39);
    v52 = *((float *)this + 40);
    v53 = *((float *)this + 41);
  if ( (abs32(Random::State((unsigned int *)dword_A8B230 + 134)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((unsigned int *)dword_A8B230 + 134)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((unsigned int *)dword_A8B230 + 134)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((unsigned int *)dword_A8B230 + 134)) % 3 - 1; /*0x62bde2*/
        v4 = v2 + *((unsigned int *)this + 48);
        v5 = v3 + *((unsigned int *)this + 49);
        *((unsigned int *)this + 48) = v4;
        *((unsigned int *)this + 49) = v5;
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
                *((unsigned int *)this + 48) = 2;
    }
    else
    {
            *((unsigned int *)this + 48) = -2;
    }
        v6 = *((unsigned int *)this + 49);
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
                *((unsigned int *)this + 49) = 2;
    }
    else
    {
            *((unsigned int *)this + 49) = -2;
    }
  }
  v7 = (double)v59; /*0x62be60*/
    v8 = (int *)((char *)this + 816);
  v59 = 0; /*0x62be6a*/
  v7 = v7; /*0x62be78*/
  v9 = (double)IDA_SLODWORD(v60); /*0x62be7c*/
  v60 = 0.0; /*0x62be80*/
    *((unsigned int *)this + 51) = 0;
  v9 = v9; /*0x62be8e*/
  v10 = (double)IDA_SLODWORD(v61); /*0x62be92*/
  v61 = -2.0; /*0x62be96*/
    *((unsigned int *)this + 52) = 0;
  v66 = v10; /*0x62bea5*/
    *((unsigned int *)this + 53) = -1073741824;
    *((float *)this + 53) = *((float *)this + 53) - (double)MEMORY[0x8871E0][1].?;
  IDA_LOWORD(v11) = Math::RoundToInt(v66); /*0x62bec4*/
  v11 = v11; /*0x62becd*/
  IDA_LOWORD(v12) = Math::RoundToInt(v9); /*0x62bece*/
  v12 = v12; /*0x62bed7*/
  IDA_LOWORD(v13) = Math::RoundToInt(v7); /*0x62bed8*/
  Coord3D::Set(v68, v13, v12, v11); /*0x62bee2*/
  Vector3::AddAssign((int *)&this->q0CC, v52); /*0x62beec*/
  IDA_LOWORD(v14) = Math::RoundToInt(v66); /*0x62bef5*/
  v14 = v14; /*0x62befe*/
  IDA_LOWORD(v15) = Math::RoundToInt(v9); /*0x62beff*/
  v15 = v15; /*0x62bf08*/
  IDA_LOWORD(v16) = Math::RoundToInt(v7); /*0x62bf09*/
  Coord3D::Set(v70, v16, v15, v14); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(v70); /*0x62bf2d*/
  v67 = dword_AC4A0C + GroundHeight; /*0x62bf3d*/
  v17 = Coord::To_Cell(&dword_87F7E8, v70); /*0x62bf46*/
  v58 = 0; /*0x62bf4d*/
  v57 = 0; /*0x62bf52*/
  if ( (v17->flags[0] & 0x100) != 0 || (Coord::To_Cell(&dword_87F7E8, v68)->flags[0] & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v70[2] < v67 ) /*0x62bf84*/
    {
      if ( v69 >= v67 ) /*0x62bf93*/
        v58 = 1; /*0x62bf95*/
    }
    else if ( v69 < v67 ) /*0x62bf88*/
    {
      v57 = 1; /*0x62bf8a*/
    }
  }
  v56 = 0; /*0x62bf9e*/
  if ( !v58 && !v57 ) /*0x62bfb1*/
  {
    v18 = (double)GroundHeight; /*0x62bfb7*/
    if ( v66 >= v18 && v66 - 150.0 < v18 ) /*0x62bfdb*/
    {
      v19 = Cell::IsBridge(v17); /*0x62bfe4*/
      if ( v19 || (uint8_t)BuildingPlacement::ValidateType(v17, -1, -1) ) /*0x62bff0*/
      {
        v56 = 1; /*0x62c001*/
        if ( v19 ) /*0x62c006*/
        {
          if ( *(unsigned char *)(v19[328] + 5823) ) /*0x62c00e*/
            v56 = v19[390] < 8; /*0x62c021*/
          if ( (*(uint8_t (**)(unsigned int *))(*v19 + 128))(v19) ) /*0x62c02a*/
            v56 = 0; /*0x62c034*/
        }
      }
      else
      {
        v56 = 0; /*0x62bff9*/
      }
    }
  }
  v62 = (float)GroundHeight; /*0x62c041*/
  if ( v66 < (double)v62 ) /*0x62c056*/
  {
    if ( !v58 ) /*0x62c1b7*/
    {
      if ( !v57 ) /*0x62c1cc*/
      {
  LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v66 ) /*0x62c094*/
          v66 = v62; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v58 ) /*0x62c05e*/
  {
    if ( !v57 ) /*0x62c06a*/
    {
      if ( !v56 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
  LABEL_47:
    IDA_LODWORD(v62) = v67 - 20; /*0x62c1d2*/
    v66 = (float)(v67 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v66 = (float)v67; /*0x62c1bd*/
  LABEL_39:
  Byte284 = CellClass::GetByte284(v70); /*0x62c09e*/
  qmemcpy(v73, CopyAudioData((char *)v75, Byte284), sizeof(v73)); /*0x62c0cb*/
  v21 = InvertMatrix3x3Signs(v75, v73); /*0x62c0d4*/
    v18 = *((float *)this + 52);
  v23 = *v8; /*0x62c0ea*/
  qmemcpy(v74, v21, sizeof(v74)); /*0x62c0ec*/
  *(float *)&v48 = -v22; /*0x62c0f9*/
    Triple::Set(&v51, v19, v44, *((unsigned int *)this + 53));
  v24 = Matrix3x3::TransformPoint(v71, (float *)&v59, v53); /*0x62c113*/
  v59 = *(unsigned int *)v24; /*0x62c11f*/
  v60 = *(float *)(v24 + 4); /*0x62c126*/
  v61 = *(float *)(v24 + 8); /*0x62c131*/
  Coord::Scale((int *)0x3F800000, v54); /*0x62c135*/
  v61 = -v61; /*0x62c14a*/
  v25 = Matrix3x3::TransformPoint(v71, (float *)&v59, v55); /*0x62c152*/
  v59 = *(unsigned int *)v25; /*0x62c159*/
  v60 = *(float *)(v25 + 4); /*0x62c160*/
  v26 = *(float *)(v25 + 8); /*0x62c164*/
  v59 = v59; /*0x62c167*/
    *((float *)this + 52) = -v52;
  v61 = v26; /*0x62c176*/
  *v8 = v59; /*0x62c17a*/
    *((float *)this + 53) = v22;
  LABEL_40:
  if ( (*(int (**)(char *))(*(unsigned int *)&this->q0B46))(this) <= 5 || (int)dword_A8ED84 % 2 )
  {
    v28 = this->q0C8 <= 0 ? 0 : this->q0C8;
  }
  else
  {
        v24 = *((unsigned int *)this + 50) - 1;
    if ( v28 < -5 ) /*0x62c1ac*/
      v28 = -5; /*0x62c1ae*/
  }
    *((unsigned int *)this + 50) = v24;
  LABEL_50:
    if ( !--*((unsigned short *)this + 149) )
  {
        v25 = *((unsigned int *)this + 43);
    if ( *(unsigned int *)(v29 + 744) ) /*0x62c21b*/
    {
            *((unsigned short *)this + 149) = *(unsigned short *)(v25 + 732);
            v60[0] = *((unsigned int *)this + 39);
            v60[1] = *((unsigned int *)this + 40);
            v61 = *((unsigned int *)this + 41);
      firstObject = Coord::To_Cell(&dword_87F7E8, v68)->firstObject; /*0x62c260*/
      if ( firstObject ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v31 = firstObject->location[0]; /*0x62c276*/
          v32 = firstObject->location[1]; /*0x62c278*/
          v72 = firstObject->location[2]; /*0x62c286*/
                    v29 = *((unsigned int *)this + 39) - v27;
                    v30 = *((unsigned int *)this + 40) - v28;
          nextObject = firstObject->nextObject; /*0x62c293*/
                    v64 = *((unsigned int *)this + 41);
          v36 = abs32(v33) + abs32(v34); /*0x62c2af*/
          if ( firstObject->isAliveFlag && firstObject->health > 0 ) /*0x62c2c0*/
          {
                        v33 = *((unsigned int *)this + 73);
            if ( v37 ) /*0x62c2ca*/
              v38 = *(unsigned int *)(v37 + 252); /*0x62c2cc*/
            else
              v38 = 0; /*0x62c2d4*/
                        v35 = *((unsigned int *)this + 43);
            v38 = v38; /*0x62c2dc*/
            v62 = *(float *)(v39 + 744); /*0x62c2e9*/
            vtable0 = firstObject->AbstractClass; /*0x62c2f3*/
            v45 = *(unsigned int *)(v39 + 740); /*0x62c2f5*/
            v41 = ZCoordToScreenY(v36); /*0x62c2f6*/
            (*((void (__fastcall **)(ObjectClass *, unsigned int, float *, unsigned int, int, unsigned int, unsigned int, unsigned int, int))vtable0 /*0x62c303*/
             + 91))(
              firstObject,
              IDA_HIDWORD(v41),
              &v62,
              v41,
              v45,
              0,
              0,
              0,
              v38);
          }
          firstObject = nextObject; /*0x62c30b*/
        }
        while ( nextObject ); /*0x62c30d*/
      }
    }
  }
    v38 = *((unsigned int *)this + 43);
  v43 = *(unsigned int *)(v42 + 736) /*0x62c33f*/
      - *((uint16_t *)&this->q0388)
      + (*(int (__stdcall **)(char *))(this->vtable2 + 16))(this + 4);
    if ( !(v39 % (*(char *)(v38 + 779) + ((*(int (__stdcall **)(char *))(*((unsigned int *)this + 1) + 16))((char *)this + 16) & 1))) )
        ++*((unsigned int *)this + 1208);
    result = *((unsigned int *)this + 1208);
  if ( result == *(unsigned char *)(v42 + 777) ) /*0x62c36f*/
  {
    result = *(unsigned char *)(v42 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
            *((unsigned int *)this + 1220) = 1;
    else
            *((unsigned int *)this + 1208) = 0;
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
  int v4; // edx
  int v5; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a0, aP1); /*0x6295bc*/
  v3 = result; /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( a0 ) /*0x6295cd*/
    {
      AbstractClass::InitVtables((AbstractClass *)a0, (int)&aP1); /*0x6295d6*/
      v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6295db*/
      a0->ParasiteClass_field_34 = 0; /*0x6295e1*/
      *(unsigned int *)&a0->__pad_28[4] = v4; /*0x6295e8*/
      a0->ParasiteClass_field_38 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6295f0*/
      a0->ParasiteClass_field_40 = 0; /*0x6295f3*/
      a0->AbstractClass = (void*)&ParasiteClass_vftable; /*0x6295fa*/
      *(void **)&a0->vtable2 = (void*)&ParasiteClass_vftable; /*0x629600*/
      *(void **)&a0->vtable3 = (void*)&ParasiteClass_vftable; /*0x629607*/
      *(void **)&a0->vtable4 = (void*)&ParasiteClass_vftable; /*0x62960e*/
    }
    if ( *((unsigned int *)a0 + 17) /*0x629657*/
      && (*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) < g_BuildingLoadQueue_Array.?
       || (IDA_BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))) || !g_BuildingLoadQueue_Array.?)
       && *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) > 0
       && (*(uint8_t (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)),
            0)) )
    {
      v5 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1))++; /*0x629664*/
      *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * v5) = a0; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a0->creationFrame); /*0x62967f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a0->__pad_28); /*0x62968d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a0 + 17); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}
} // namespace gamemd

// 0x6296B0
namespace gamemd {
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
// 0x410320
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6296c4*/
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
  a2[3] = unk_7E98AC; /*0x629700*/
  return 0; /*0x6296dd*/
}
} // namespace gamemd

// 0x62A8E0
namespace gamemd {
bool ParasiteClass::CanInfect(unsigned int * a2)
{
  int creationFrame; // ecx
  Cell *v4; // eax
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
            if ( *(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                                v3 = *((unsigned int *)this + 36);
                if ( !creationFrame ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)creationFrame + 132))(creationFrame) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (**)(unsigned int *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (Cell *)(*(int (**)(unsigned int *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( (uint8_t)Cell::IsValidHeight(v4) ) /*0x62a966*/
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
