// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4717D0
namespace gamemd {
CaptureManagerClass::CaptureManagerClass(TechnoClass * aP1, int a3, char a4)
{
  CaptureManagerClass * v5;

  AbstractClass::Constructor(); /*0x4717d3*/
  this->owner = 1; /*0x4717e2*/
  this->controlNodeCount = 0; /*0x4717e6*/
  this->controlNodeCapacity = 0; /*0x4717e9*/
  this->q031 = 0; /*0x4717ec*/
  this->controlNodes = (void*)&DynamicVectorClass_ControlNode___vftable; /*0x4717ef*/
  this->CaptureManagerClass_field_30 = 10; /*0x4717f6*/
  this->originalOwner = 0; /*0x4717fd*/
  this->overloadCount = aP1; /*0x471800*/
  *(void **)this = (void*)&CaptureManagerClass_vftable; /*0x471807*/
  this->vtable2 = (void*)&CaptureManagerClass_vftable; /*0x47180d*/
  this->vtable3 = (void*)&CaptureManagerClass_vftable; /*0x471814*/
  this->vtable4 = (void*)&CaptureManagerClass_vftable; /*0x47181b*/
  this->q03C = a3; /*0x471822*/
  this->CaptureManagerClass_field_40 = a4; /*0x471825*/
  this->CaptureManagerClass_field_41 = 0; /*0x471828*/
  this->linkCount = 30; /*0x47182b*/
  this->overloadLimit = 0; /*0x471832*/
  if ( dword_89E100 < dword_89E0F8 /*0x471868*/
    || (byte_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
    v5 = dword_89E100++; /*0x471875*/
    *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
  }
  return this; /*0x471889*/
}
} // namespace ra2

// 0x471A50
namespace gamemd {
ScenarioClass * * CaptureManagerClass::HandleOverload()
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  HouseClass * v5;
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  int *v15; // edx
  int v16; // eax
  void *v17; // eax
  double v18; // st7
  int v20; // [esp+1Ch] [ebp-30h]
  float v21; // [esp+1Ch] [ebp-30h]
  int v22; // [esp+20h] [ebp-2Ch]
  int v24; // [esp+28h] [ebp-24h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  int v27[3]; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+40h] [ebp-Ch]
  int v29; // [esp+44h] [ebp-8h]

  IDA_LOBYTE(v2) = this->CaptureManagerClass_field_40; /*0x471a59*/
  if ( (_BYTE)v2 ) /*0x471a5e*/
  {
    v3 = this->overloadLimit; /*0x471a64*/
    if ( v3 > 0 ) /*0x471a69*/
      this->overloadLimit = v3 - 1; /*0x471a6c*/
    v4 = this->linkCount; /*0x471a6f*/
    if ( v4 <= 0 ) /*0x471a74*/
    {
      v5 = this->originalOwner; /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = (_DWORD *)g_RulesClass_Instance->MinimumAIDefensiveTeams[1]; /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( v5 > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= g_RulesClass_Instance->MaximumAIDefensiveTeams[0] - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( v5 > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      this->linkCount = *(_DWORD *)(IDA_HIDWORD(g_RulesClass_Instance->AIUseTurbineUpgradeProbability) + 4 * v6); /*0x471abe*/
      v2 = *(_DWORD *)(g_RulesClass_Instance->TotalAITeamCap[0] + 4 * v6); /*0x471acd*/
      v2 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        this->CaptureManagerClass_field_41 = 0; /*0x471c83*/
      }
      else
      {
        v9 = this->overloadCount; /*0x471adc*/
        this->overloadLimit = 10; /*0x471adf*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 364))( /*0x471b04*/
          v9,
          &v2,
          0,
          g_RulesClass_Instance->SilverCrate[5],
          0,
          0,
          0,
          0);
        if ( !this->CaptureManagerClass_field_41 ) /*0x471b0a*/
        {
          v10 = (int *)(this->overloadCount + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(g_RulesClass_Instance->SpyPlaneCameraFrames, (int)&v24, 0); /*0x471b3f*/
          this->CaptureManagerClass_field_41 = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(this->overloadCount + 156); /*0x471b58*/
          v12 = *(_DWORD *)(this->overloadCount + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v13 = v13; /*0x471b8c*/
          v14 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -200, 200); /*0x471b98*/
          v15 = (int *)(this->overloadCount + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = RA2_OPNEW(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor((int)v17, g_RulesClass_Instance->AIPlayers, v27, 0, 0, &dword_89E138, 0); /*0x471c15*/
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(_BYTE *)(this->overloadCount + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 100); /*0x471c62*/
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(this->overloadCount + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = v4 - 1; /*0x471a76*/
      this->linkCount = v2; /*0x471a78*/
    }
  }
  return v2; /*0x471a77*/
}
} // namespace ra2

// 0x471C90
namespace gamemd {
int CaptureManagerClass::CanCapture(unsigned int * a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  bool result; // al

  result = 0; /*0x471d36*/
  if ( a2 ) /*0x471c9a*/
  {
    v3 = *(_DWORD *)(this + 72); /*0x471ca4*/
    v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 60))(a2); /*0x471cb0*/
    if ( v4 != (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3) /*0x471cfe*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3381)
      && (!a2[185] || (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) != 1)
      && !BuildingClass::IsBeingRepairedOrCaptured((int)a2)
      && !a2[179]
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 352))(a2) )
    {
      if ( *(_BYTE *)(this + 64) || (v5 = *(_DWORD *)(this + 60), *(_DWORD *)(this + 52) < v5) || v5 == 1 ) /*0x471d1c*/
      {
        v6 = a2[43]; /*0x471d1e*/
        if (v6 != 19 && v6 != 18, unsigned int a1) /*0x471d2c*/
          return 1; /*0x471ce3*/
      }
    }
  }
  return result; /*0x471d2e*/
}
} // namespace ra2

// 0x471D40
namespace gamemd {
void* CaptureManagerClass::CaptureUnit(int a2)
{
  char result; // al
  _DWORD *v5; // esi
  int i; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  unsigned int v13;
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // ebp
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  void **v27; // eax
  void **v28; // eax
  int v29; // [esp+4h] [ebp-28h]
  _DWORD *v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+14h] [ebp-18h] BYREF
  int v32; // [esp+18h] [ebp-14h]
  int v33; // [esp+1Ch] [ebp-10h]
  int v34[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(_BYTE *)(a2 + 20) & 1) != 0 ? (_DWORD *)a2 : 0;
  result = CaptureManagerClass::CanCapture(a1, v5); /*0x471d6e*/
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 60) == 1 ) /*0x471d85*/
    {
      for ( i = *(_DWORD *)(a1 + 52) - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit((_DWORD *, unsigned int a1)a1, a1, a2, **(_DWORD ***)(*(_DWORD *)(a1 + 40) + 4 * i), v29, v30); /*0x471d98*/
    }
    v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x471da4*/
    v8 = *v5; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 72) + 60))(*(_DWORD *)(a1 + 72), 1); /*0x471db2*/
    result = (*(int (__thiscall **)(_DWORD *, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = RA2_OPNEW(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = g_CurrentFrame; /*0x471ddc*/
        v11[4] = 0; /*0x471de2*/
        v11[2] = v13; /*0x471de5*/
        v12 = v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = v5; /*0x471df0*/
      v14 = *(_DWORD *)(a1 + 44); /*0x471df3*/
      if ( *(_DWORD *)(a1 + 52) < v14 /*0x471e18*/
        || (*(_BYTE *)(a1 + 49) || !v14)
        && (v15 = *(_DWORD *)(a1 + 56), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 36) + 8))(a1 + 36, v14 + v15, 0) )
      {
        v16 = *(_DWORD *)(a1 + 52); /*0x471e1f*/
        v17 = *(_DWORD *)(a1 + 40); /*0x471e22*/
        *(_DWORD *)(a1 + 52) = v16 + 1; /*0x471e28*/
        *(_DWORD *, unsigned int a1)(v17 + 4 * v16) = v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      v5[176] = *(_DWORD *)(a1 + 72); /*0x471e34*/
      v19 = g_RulesClass_Instance->PrerequisiteFactory[1]; /*0x471e45*/
      *v18 = g_CurrentFrame; /*0x471e4b*/
      v18[1] = v32; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 1
        || !*(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (_DWORD *)1732) + 3603)
        || v5[43] != 16 )
      {
        v20 = v5[43]; /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (__thiscall **, unsigned int a1)(_DWORD *))(*v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((_DWORD *)a1, (int)v5); /*0x471eae*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x471ec1*/
      {
        v21 = a2; /*0x471ecb*/
        v22 = dword_89E178 * *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*v5 + 72))(v5, v34); /*0x471ee1*/
      v24 = *v23; /*0x471f04*/
      v25 = v23[1]; /*0x471f06*/
      v26 = v22 + v23[2]; /*0x471f11*/
      v31 = v24; /*0x471f13*/
      v32 = v25; /*0x471f17*/
      v33 = v26; /*0x471f1b*/
      v27 = (void **)RA2_OPNEW(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = AnimClass::ctor( /*0x471f4c*/
                v27,
                (void *)g_RulesClass_Instance->PrerequisiteBarracks[1],
                &v31,
                0,
                1,
                (void *)0x600,
                0,
                0);
      else
        v28 = 0; /*0x471f53*/
      v5[178] = v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(_DWORD *, unsigned int a4, unsigned int a1, unsigned int a3)(v5[178] + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/
}
} // namespace ra2

// 0x471FF0
namespace gamemd {
AnimClass * * CaptureManagerClass::FreeUnit(IUnknown * aP0, int _28, IUnknown * a2, IUnknown * aP1, int _34, IUnknown ** a5)
{
  int i; // ebx
  _DWORD *v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD v19[3]; // [esp+10h] [ebp-10h] BYREF
  int v20; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  if ( !a4 ) /*0x471ffd*/
    return 0; /*0x472000*/
  for ( i = a1[13] - 1; i >= 0; --i ) /*0x47200e*/
  {
    v9 = *(_DWORD **)(a1[10] + 4 * i); /*0x472018*/
    if ( (_DWORD *)*v9 == a4 ) /*0x472022*/
    {
      v10 = a4[178]; /*0x472028*/
      if ( v10 ) /*0x472030*/
      {
        (*(void (__thiscall **, unsigned int a3, unsigned int a4)(int))(*(_DWORD *)v10 + 248))(v10); /*0x472034*/
        a4[178] = 0; /*0x47203a*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *, int, int))(*a4 + 132))(a4, a3, a2) + 1456) == -1 ) /*0x472059*/
      {
        if ( g_RulesClass_Instance->IonBeam != -1 ) /*0x4720a3*/
        {
          v20 = a4[39]; /*0x4720af*/
          retaddr = (_UNKNOWN *)a4[40]; /*0x4720b6*/
          StartAudioControllerAt(g_RulesClass_Instance->IonBeam, (int, unsigned int a4, unsigned int a6)&v20, 0); /*0x4720cb*/
        }
      }
      else
      {
        v19[0] = a4[39]; /*0x472069*/
        v11 = *a4; /*0x47206d*/
        v19[1] = a4[40]; /*0x472072*/
        v19[2] = a4[41]; /*0x472079*/
        v12 = (*(int (__thiscall **)(_DWORD *))(v11 + 132))(a4); /*0x47207f*/
        StartAudioControllerAt(*(_DWORD *, unsigned int a3, unsigned int a4, unsigned int a1)(v12 + 1456), (int)v19, 0); /*0x47208d*/
        v9 = a6; /*0x472092*/
      }
      a2 = 1; /*0x4720d5*/
      a3 = v9[1]; /*0x4720d7*/
      (*(void (__thiscall **)(_DWORD *))(*a4 + 980))(a4); /*0x4720da*/
      CaptureManagerClass::DecideUnitFate(a1, (int)a4); /*0x4720e3*/
      a4[176] = 0; /*0x4720e8*/
      v13 = a1[10]; /*0x4720f2*/
      if ( *(_DWORD *)(v13 + 4 * i) ) /*0x4720f5*/
        RA2_OPDEL(*(void **)(v13 + 4 * i)); /*0x4720fd*/
      v14 = a1[13]; /*0x472105*/
      if ( i < v14 ) /*0x47210a*/
      {
        v15 = v14 - 1; /*0x47210c*/
        v16 = i; /*0x47210f*/
        for ( a1[13] = v15; v16 < a1[13]; *(_DWORD *)(a1[10] + 4 * v16 - 4) = *(_DWORD *)(a1[10] + 4 * v16) ) /*0x472116*/
          ++v16; /*0x47211b*/
      }
    }
  }
  return 1; /*0x471fff*/
}
} // namespace ra2

// 0x472160
namespace gamemd {
int CaptureManagerClass::DrawLinks(int a1, ... a2)
{
  int v1; // ecx
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  char v5; // bl
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int *v14; // eax
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+28h] [ebp-8h]
  void *retaddr; // [esp+30h] [ebp+0h]
  va_list va; // [esp+38h] [ebp+8h] BYREF

  va_start(va, a1);
  v2 = v1; /*0x472167*/
  v3 = *(_DWORD *)(v1 + 72); /*0x47216e*/
  IDA_HIBYTE(v20) = *(_BYTE *)(v3 + 131) != 0; /*0x47217b*/
  v4 = *(_DWORD *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(*(_DWORD *)(v2 + 40) + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( (int)g_CurrentFrame - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
  LABEL_7:
      if ( *(_BYTE *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = *(_DWORD *)(v2 + 72); /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          IDA_LOBYTE(v3) = IDA_HIBYTE(v20); /*0x4721d6*/
          if ( IDA_HIBYTE(v20) || v5 ) /*0x4721e0*/
          {
            v10 = *(_DWORD *)(v7 + 156); /*0x4721ec*/
            v11 = *(_DWORD *)(v7 + 164); /*0x4721f9*/
            v12 = (*(int (__thiscall **)(int, int, int, void *, int, int))(*(_DWORD *)v7 + 132))( /*0x4721fe*/
                    v7,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20);
            v13 = *(_DWORD **)(v2 + 72); /*0x47220c*/
            IDA_HIBYTE(v20) = IDA_HIBYTE(v13); /*0x47220f*/
            IDA_LOWORD(v20) = *(_WORD *)(v13[135] + 22265); /*0x472223*/
            IDA_BYTE2(v20) = *(_BYTE *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(_DWORD *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (__thiscall **)(_DWORD *))(*v13 + 176))(v13); /*0x472264*/
            IDA_LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= (int)g_CurrentFrame - v9; /*0x4721af*/
  LABEL_5:
    if ( v8 > 0 ) /*0x4721b3*/
      v5 = 1; /*0x4721b5*/
    goto LABEL_7; /*0x4721b5*/
  }
  return v3; /*0x472292*/
}
} // namespace ra2

// 0x4722A0
namespace gamemd {
int CaptureManagerClass::CannotControlAnyMore()
{
  return !this->CaptureManagerClass_field_40 && this->originalOwner >= this->q03C; /*0x4722a7*/
}
} // namespace ra2

// 0x4723B0
namespace gamemd {
AbstractClass * * CaptureManagerClass::DecideUnitFate(IUnknown * aP1)
{
  int v3; // edi
  _DWORD *v5; // ecx
  int v6; // ecx
  int v7; // eax
  int *AIIonCannonTempleValue; // esi
  int v9; // ebp
  int v10; // eax
  bool v11; // cc
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  char v17; // al
  int v18; // [esp-4h] [ebp-24h]
  int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+10h] [ebp-10h]
  float v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+18h] [ebp-8h]
  bool v24; // [esp+24h] [ebp+4h]

  v3 = 0; /*0x4723bb*/
  if ( !aP1 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (*(_BYTE *)(aP1 + 20) & 4) != 0 && *(_DWORD *)(aP1 + 1492) ) /*0x4723d1*/
    TeamClass::LiberateMember_Start(aP1, -1, 0); /*0x4723df*/
  v5 = *(_DWORD **)(aP1 + 628); /*0x4723e4*/
  if ( v5 && v5[10] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v5); /*0x4723f3*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 132))(aP1) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes((_DWORD *)aP1, 0); /*0x47240f*/
  v6 = *(_DWORD *)(aP1 + 540); /*0x472417*/
  v7 = *(_DWORD *)(*(this + 18) + 540); /*0x472422*/
  v24 = v6 != v7; /*0x47242c*/
  if ( *(_BYTE *)(v6 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v19 = 0; /*0x472446*/
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 36) + 24))(v7 + 36) >= g_RulesClass_Instance->AISlaveMinerNumber[1] ) /*0x472459*/
  {
    if ( HouseClass::GetPowerRatio((int *)*(_DWORD *)(*(this + 18) + 540)) >= 1.0 ) /*0x472480*/
    {
      v21 = (float)*(int *)(aP1 + 108); /*0x47249e*/
      if ( v21 / (double)*(int *)((*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 132))(aP1) + 160) >= *(float *)&g_RulesClass_Instance->AISlaveMinerNumber[2] ) /*0x4724c3*/
        AIIonCannonTempleValue = &g_RulesClass_Instance->AIIonCannonAPCValue[2]; /*0x4724dd*/
      else
        AIIonCannonTempleValue = &g_RulesClass_Instance->AIIonCannonPlugValue[1]; /*0x4724cd*/
    }
    else
    {
      AIIonCannonTempleValue = g_RulesClass_Instance->AIIonCannonTempleValue; /*0x47248f*/
    }
  }
  else
  {
    AIIonCannonTempleValue = &g_RulesClass_Instance->MultiplayerAICM[2]; /*0x47245f*/
  }
  v9 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 1, 100); /*0x4724f7*/
  v22 = 0; /*0x4724f9*/
  if ( v9 <= 0 )
  {
  LABEL_22:
    v12 = v19; /*0x472537*/
    (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 132))(aP1); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    v13 = *(this + 18); /*0x47256f*/
    if ( v13 ) /*0x472574*/
    {
      if ( (*(_BYTE *)(v13 + 20) & 4) != 0 ) /*0x47257a*/
      {
        v14 = *(_DWORD *)(v13 + 1492); /*0x47257c*/
        if ( v14 ) /*0x472584*/
        {
          v15 = *(_DWORD *)(v14 + 36); /*0x472586*/
          if ( *(_DWORD *)(v15 + 192) ) /*0x472589*/
          {
            v20 = *(_DWORD *)(v15 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v12 = v20; /*0x4725a9*/
          }
        }
      }
    }
    switch ( v12 )
    {
      case 1:
        if ( !v24 )
        {
          v16 = *(this + 18); /*0x4725bd*/
          if ( v16 )
          {
            if ( (*(_BYTE *)(v16 + 20) & 4) != 0 && *(_DWORD *)(v16 + 1492) )
            {
              v17 = CaptureManagerClass::AddMember((*(_BYTE *)(aP1 + 20) & 4) != 0 ? aP1 : 0);
              break; /*0x4725e0*/
            }
          }
        }
  LABEL_34:
        Debug::Log(); /*0x4725e9*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)aP1 + 488))(aP1, 15, 0); /*0x4725fe*/
        return; /*0x4725fe*/
      case 2:
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 828))(aP1); /*0x472617*/
        break;
      case 3:
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 832))(aP1); /*0x472628*/
        break;
      case 5:
        return; /*0x472633*/
      default:
        goto LABEL_34; /*0x472633*/
    }
    if ( v17 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v19 != 6 && v3 != AIIonCannonTempleValue[4] ) /*0x47250f*/
  {
    ++v19; /*0x47251e*/
    v18 = v3++; /*0x472524*/
    v10 = (*(int (__thiscall **)(int *, int))(*AIIonCannonTempleValue + 24))(AIIonCannonTempleValue, v18); /*0x472526*/
    v11 = v9 <= v10 + v22; /*0x47252f*/
    v22 += v10; /*0x472531*/
    if ( v11 ) /*0x472535*/
      goto LABEL_22; /*0x472535*/
  }
}
} // namespace ra2

// 0x472640
namespace gamemd {
int CaptureManagerClass::NeedsToDrawLinks()
{
  int v1; // eax
  int v3; // eax
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx

  v1 = *(this + 18); /*0x472640*/
  if ( *(_BYTE *)(v1 + 131) ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = *(_DWORD *)(v1 + 284); /*0x472656*/
  if ( v3 && *(_BYTE *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = *(this + 13) - 1; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = *(this + 10) + 4 * v4; ; i -= 4 ) /*0x47267f*/
    {
      v6 = *(_DWORD *)i; /*0x472682*/
      if ( *(_BYTE *)(**(_DWORD **)i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = *(_DWORD *)(v6 + 8); /*0x472690*/
      v8 = *(_DWORD *)(v6 + 16); /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( (int)g_CurrentFrame - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
  LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= (int)g_CurrentFrame - v7; /*0x4726a3*/
  LABEL_12:
    if ( v8 > 0 ) /*0x4726a7*/
      return 1; /*0x4726a7*/
    goto LABEL_13; /*0x4726a7*/
  }
  return 0; /*0x472650*/
}
} // namespace ra2

// 0x4726C0
namespace gamemd {
int CaptureManagerClass::IsOverloading(bool * a2)
{
  if ( !*(_BYTE *)(this + 64) || *(_DWORD *)(this + 52) <= *(_DWORD *)(this + 60) ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = *(_DWORD *)(this + 68) > 0; /*0x4726dd*/
  return 1; /*0x4726e1*/
}
} // namespace ra2

// 0x472720
namespace gamemd {
TechnoClass * * CaptureManagerClass::LoadFromStream(int a1, int * a2)
{
  int *v2; // ebx
  int v3; // ebp
  int result; // eax
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  wchar_t *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = a1; /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((_DWORD *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140(0, 0); /*0x472757*/
      *(_DWORD *)(v3 + 36) = (void*)&DynamicVectorClass_ControlNode___vftable; /*0x47275c*/
      *(_DWORD *)(v3 + 56) = 10; /*0x472762*/
      *(_DWORD *)(v3 + 52) = 0; /*0x472769*/
      *(_DWORD *)v3 = (void*)&CaptureManagerClass_vftable; /*0x47276c*/
      *(_DWORD *)(v3 + 4) = (void*)&CaptureManagerClass_vftable; /*0x472773*/
      *(_DWORD *)(v3 + 8) = (void*)&CaptureManagerClass_vftable; /*0x47277a*/
      *(_DWORD *)(v3 + 12) = (void*)&CaptureManagerClass_vftable; /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 72)); /*0x472791*/
    v6 = *v2; /*0x472796*/
    a1 = 0; /*0x4727a1*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a1, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = a1; /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( a1 <= 0 ) /*0x4727be*/
      {
  LABEL_19:
        v15 = 0; /*0x472894*/
        if ( v7 > 0 ) /*0x472898*/
        {
          do /*0x4728c4*/
          {
            ObjectPtr::RegisterForTracking( /*0x4728a9*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)(*(_DWORD *)(v3 + 40) + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking( /*0x4728ba*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(*(_DWORD *)(v3 + 40) + 4 * v15++));
          }
          while ( v15 < a1 ); /*0x4728c4*/
        }
        return v18; /*0x4728c6*/
      }
      else
      {
        while ( 1 ) /*0x4727ca*/
        {
          v8 = RA2_OPNEW(0x14u); /*0x4727ca*/
          if ( v8 ) /*0x4727d4*/
          {
            v9 = g_CurrentFrame; /*0x4727d6*/
            v8[4] = 0; /*0x4727dc*/
            v8[2] = v9; /*0x4727df*/
            v5 = v8; /*0x4727e2*/
          }
          v10 = *v2; /*0x4727e4*/
          a2 = 0; /*0x4727f1*/
          v16 = 0; /*0x4727f5*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v10 + 12))(v2, &a2, 4, 0); /*0x4727f9*/
          if ( result < 0 ) /*0x4727fe*/
            break; /*0x4727fe*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*v2 + 12))(v2, &v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = a2; /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = g_CurrentFrame; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          v11 = *(_DWORD *)(v3 + 44); /*0x472844*/
          if ( *(_DWORD *)(v3 + 52) < v11 /*0x472867*/
            || (*(_BYTE *)(v3 + 49) || !v11)
            && (v12 = *(_DWORD *)(v3 + 56), v12 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 36) + 8))(v3 + 36, v11 + v12, 0) )
          {
            v13 = *(_DWORD *)(v3 + 52); /*0x47286e*/
            v14 = *(_DWORD *)(v3 + 40); /*0x472871*/
            *(_DWORD *)(v3 + 52) = v13 + 1; /*0x472877*/
            *(_DWORD *)(v14 + 4 * v13) = v5; /*0x47287a*/
          }
          v7 = a1; /*0x472881*/
          if ( ++v17 >= a1 ) /*0x47288c*/
            goto LABEL_19; /*0x47288c*/
          v5 = 0; /*0x4727c6*/
        }
      }
    }
  }
  return result; /*0x4728ca*/
}
} // namespace ra2

// 0x4728E0
namespace gamemd {
int CaptureManagerClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int Prefix; // edi
  int v5; // edx
  int result; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // [esp+30h] [ebp+8h]

  Prefix = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x4728f8*/
  v9 = Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  v5 = *a1; /*0x472905*/
  aP2 = aP0[13]; /*0x472911*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 16))(a1, &aP2, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  v7 = 0; /*0x472920*/
  if ( aP2 <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
    v8 = *(_DWORD *)(aP0[10] + 4 * v7); /*0x47292f*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= aP2 ) /*0x472950*/
      return v9; /*0x472952*/
  }
  return result; /*0x472958*/
}
} // namespace ra2

// 0x472D70
namespace gamemd {
int CaptureManagerClass::Capture(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x472d70*/
  result = 0; /*0x472d73*/
  if ( v2 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x472d7e*/
  {
    if ( ++result >= v2 ) /*0x472d8d*/
      return -1; /*0x472d8d*/
  }
  return result; /*0x472d92*/
}
} // namespace ra2

// 0x4722F0
namespace gamemd {
int CaptureManagerClass::GetOriginalOwner(int a2)
{
  int v2; // eax
  int v3; // edx
  _DWORD **i; // ecx

  v2 = *(this + 13) - 1; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  v3 = *(this + 10); /*0x4722f8*/
  for ( i = (_DWORD **)(v3 + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(_DWORD *)(*(_DWORD *)(v3 + 4 * v2) + 4); /*0x472310*/
}
} // namespace gamemd

// 0x4726F0
namespace gamemd {
int CaptureManagerClass::PowerDrainUpdate(int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax

  result = AbstractClass::ProcessPower((void *)this); /*0x4726f9*/
  v4 = this->overloadCount; /*0x4726fe*/
  if ( v4 ) /*0x472703*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x47270c*/
    return Power::TimerProcess(v5); /*0x472712*/
  }
  return result; /*0x472717*/
}
} // namespace gamemd

// 0x472960
namespace gamemd {
int CaptureManagerClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x472966*/
    return -2147467261; /*0x472968*/
  *a2 = 108652930; /*0x472976*/
  a2[1] = 299085213; /*0x47297e*/
  a2[2] = 268441278; /*0x472987*/
  a2[3] = 1822515787; /*0x472990*/
  return 0; /*0x47296d*/
}
} // namespace gamemd

// 0x4729A0
namespace gamemd {
int CaptureManagerClass::GetObjectSize()
{
  return 80; /*0x4729a5*/
}
} // namespace gamemd

// 0x4729B0
namespace gamemd {
int CaptureManagerClass::GetTypeIdentifier()
{
  return 66; /*0x4729b5*/
}
} // namespace gamemd

// 0x4729C0
namespace gamemd {
CaptureManagerClass * CaptureManagerClass::ddtor(char a2)
{
  int v3; // eax
  void *v4; // eax

  *this = (void*)&CaptureManagerClass_vftable; /*0x4729cd*/
  this->vtable2 = (void*)&CaptureManagerClass_vftable; /*0x4729d3*/
  this->vtable3 = (void*)&CaptureManagerClass_vftable; /*0x4729da*/
  this->vtable4 = (void*)&CaptureManagerClass_vftable; /*0x4729e1*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_89E0F0 + 16))(&dword_89E0F0, &this); /*0x4729f3*/
  if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 ) /*0x472a0e*/
  {
    do /*0x472a26*/
    {
      ++v3; /*0x472a16*/
      *((_DWORD *)dword_89E0F4 + v3 - 1) = *((_DWORD *)dword_89E0F4 + v3); /*0x472a1a*/
    }
    while ( v3 < dword_89E100 ); /*0x472a26*/
  }
  v4 = (void *)*(&this->vtable20); /*0x472a28*/
  this->controlNodes = (void*)&VectorClass_ControlNode___vftable; /*0x472a2b*/
  if ( v4 && this->q031 ) /*0x472a36*/
  {
    RA2_OPDEL(v4); /*0x472a3e*/
    *(&this->vtable20) = 0; /*0x472a46*/
  }
  this->q031 = 0; /*0x472a4f*/
  *(&this->vtable21) = 0; /*0x472a53*/
  AbstractClass::DTOR(); /*0x472a5a*/
  if ( (a2 & 1) != 0 ) /*0x472a64*/
    RA2_OPDEL(); /*0x472a67*/
  return this; /*0x472a71*/
}
} // namespace gamemd

// 0x472AB0
namespace gamemd {
unsigned int CaptureManagerClass::LoadTypeData(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x472ab0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x472ac5*/
  else
    return 0; /*0x472ab7*/
}
} // namespace gamemd

// 0x472B40
namespace gamemd {
char CaptureManagerClass::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x472b42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x472b4d*/
  {
    v3 = 0; /*0x472b4f*/
    if ( v2 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
    v4 = (_DWORD *)this->Items; /*0x472b55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x472b5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x472b64*/
    {
      ++v3; /*0x472b66*/
      ++v4; /*0x472b67*/
      if ( v3 >= v2 ) /*0x472b6c*/
        return 1; /*0x472b6c*/
    }
  }
  return 0; /*0x472b6e*/
}
} // namespace gamemd

// 0x472B80
namespace gamemd {
char CaptureManagerClass::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x472b8c*/
  {
    this->IsInitialized = 0; /*0x472b96*/
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x472bae*/
    this->IsInitialized = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( this->Items ) /*0x472bc5*/
      {
        v6 = this->Capacity; /*0x472bcc*/
        if ( a2 < v6 ) /*0x472bd1*/
          v6 = a2; /*0x472bd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( this->IsAllocated ) /*0x472beb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x472bf6*/
          this->Items = 0; /*0x472bfe*/
        }
      }
      this->Items = v4; /*0x472c07*/
      this->Capacity = a2; /*0x472c0f*/
      this->IsAllocated = a3 == 0; /*0x472c12*/
      return 1; /*0x472c18*/
    }
    else
    {
      return 0; /*0x472bbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }
}
} // namespace gamemd

// 0x472C30
namespace gamemd {
void CaptureManagerClass::Destroy()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x472c3d*/
  {
    RA2_OPDEL(this->Items); /*0x472c43*/
    this->Items = 0; /*0x472c4b*/
  }
  this->IsAllocated = 0; /*0x472c4e*/
  this->Capacity = 0; /*0x472c51*/
}
} // namespace gamemd

// 0x472C60
namespace gamemd {
int CaptureManagerClass::IndexOf(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x472c60*/
    return 0; /*0x472c68*/
  v3 = this->Capacity; /*0x472c6e*/
  result = 0; /*0x472c71*/
  if ( v3 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x472c7b*/
  {
    if ( ++result >= v3 ) /*0x472c8a*/
      return -1; /*0x472c8a*/
  }
  return result; /*0x472c6a*/
}
} // namespace gamemd

// 0x472CA0
namespace gamemd {
unsigned int CaptureManagerClass::PointerToIndex(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x472ca0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/
}
} // namespace gamemd

// 0x472CC0
namespace gamemd {
char CaptureManagerClass::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472ccc*/
  {
    this->IsInitialized = 0; /*0x472cd2*/
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x472cea*/
    this->IsInitialized = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( this->Items ) /*0x472cf8*/
    {
      v5 = this->q008; /*0x472cff*/
      if ( a2 < v5 ) /*0x472d04*/
        v5 = a2; /*0x472d06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( this->IsAllocated ) /*0x472d1e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x472d29*/
        this->Items = 0; /*0x472d31*/
      }
    }
    this->Items = v4; /*0x472d3a*/
    this->q008 = a2; /*0x472d42*/
    this->IsAllocated = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x472d4e*/
  }
  v7 = this->q008; /*0x472d51*/
  if ( v7 < this->q010 ) /*0x472d59*/
    this->q010 = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/
}
} // namespace gamemd

// 0x473000
namespace gamemd {
VectorClass_flat * CaptureManagerClass::Constructor_VectorClass_ControlNode___(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x473003*/
  *this = (void*)&VectorClass_ControlNode___vftable; /*0x473006*/
  if ( v3 && this->IsAllocated ) /*0x473010*/
  {
    RA2_OPDEL(v3); /*0x473018*/
    this->Items = 0; /*0x473020*/
  }
  this->IsAllocated = 0; /*0x47302b*/
  this->Capacity = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    RA2_OPDEL(); /*0x47303b*/
  return this; /*0x473045*/
}
} // namespace gamemd

// 0x473050
namespace gamemd {
DynamicVector * CaptureManagerClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x473053*/
  *this = (void*)&VectorClass_ControlNode___vftable; /*0x473056*/
  if ( v3 && this->IsAllocated ) /*0x473060*/
  {
    RA2_OPDEL(v3); /*0x473068*/
    this->Items = 0; /*0x473070*/
  }
  this->IsAllocated = 0; /*0x47307b*/
  this->q008 = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    RA2_OPDEL(); /*0x47308b*/
  return this; /*0x473095*/
}
} // namespace gamemd

// 0x473140
namespace gamemd {
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{
  *(this + 1) = 0; /*0x47314b*/
  *(this + 2) = a2; /*0x47314e*/
  this->IsInitialized = 1; /*0x473151*/
  this->IsAllocated = 0; /*0x473155*/
  *this = (void*)&VectorClass_ControlNode___vftable; /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      this->Items = a3; /*0x473168*/
      return this; /*0x47316e*/
    }
    this->Items = RA2_OPNEW(4 * a2); /*0x47317d*/
    this->IsAllocated = 1; /*0x473180*/
  }
  return this; /*0x47316d*/
}
} // namespace gamemd

// 0x6EA4F0
namespace gamemd {
char CaptureManagerClass::AddMember(TechnoClass * aP1)
{
  return TeamClass::AddMember(aP1, 1); /*0x6ea4fc*/
}
} // namespace gamemd
