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
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoTypeClass_e4.hpp"  // G42.36 C2027 supply

// 0x4717D0
namespace gamemd {  // G42.18 ns repair
CaptureManagerClass::CaptureManagerClass(int a2, int a3, char a4)
{


  ((AbstractClass *)this)->Constructor(); /*0x4717d3*/
  this->owner = (gamemd::TechnoClass *)(1); /*0x4717e2*/
  this->controlNodeCount = 0; /*0x4717e6*/
  this->controlNodeCapacity = 0; /*0x4717e9*/
  this->CaptureManagerClass_field_31 = 0; /*0x4717ec*/
  this->controlNodes = (unsigned int)(&vt_DynamicVectorClass); /*0x4717ef*/
  this->CaptureManagerClass_field_30 = 10; /*0x4717f6*/
  this->originalOwner = 0; /*0x4717fd*/
  this->overloadCount = a2; /*0x471800*/
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x471807) */
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x47180d) */
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x471814) */
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x47181b) */
  this->originalOwner = (gamemd::HouseClass *)(a3); /*0x471822*/
  this->CaptureManagerClass_field_40 = a4; /*0x471825*/
  this->CaptureManagerClass_field_41 = 0; /*0x471828*/
  this->linkCount = 30; /*0x47182b*/
  this->overloadLimit = 0; /*0x471832*/
  if ( dword_89E100 < dword_89E0F8 /*0x471868*/
    || (byte_89E0FD || !dword_89E0F8)
    && dword_89E104 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_89E0F0 + 8))(
         &dword_89E0F0,
         dword_89E0F8 + dword_89E104,
         0) )
  {
  int v5; // eax
    v5 = dword_89E100++; /*0x471875*/
    *((unsigned int *)dword_89E0F4 + v5) = (unsigned int)(this); /*0x471884*/
  }
  return this; /*0x471889*/

}
} // namespace ra2

// 0x471A50
namespace gamemd {
ScenarioClass * * CaptureManagerClass::HandleOverload()
{

  int v8; // ebp
  int v24; // [esp+28h] [ebp-24h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]

  int v2; // eax
  LOBYTE(v2) = this->CaptureManagerClass_field_40; /*0x471a59*/
  if ( (unsigned char)v2 ) /*0x471a5e*/
  {
  int overloadLimit; // eax
    overloadLimit = (int)(this->overloadLimit); /*0x471a64*/
    if ( overloadLimit > 0 ) /*0x471a69*/
      this->overloadLimit = overloadLimit - 1; /*0x471a6c*/
  int linkCount; // eax
    linkCount = (int)(this->linkCount); /*0x471a6f*/
    if ( linkCount <= 0 ) /*0x471a74*/
    {
  HouseClass *originalOwner; // edx
      originalOwner = this->originalOwner; /*0x471a88*/
  int v6; // eax
      v6 = 0; /*0x471a8b*/
  unsigned int *v7; // ecx
      v7 = *(unsigned int **)(*(unsigned int *)&g_RulesClass_Instance + 3820); /*0x471a8d*/
  int v20; // [esp+1Ch] [ebp-30h]
      v20 = 0; /*0x471a93*/
      if ( (int)originalOwner > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3832) - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( (int)originalOwner > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      this->linkCount = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3876) + 4 * v6); /*0x471abe*/
      v2 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3848) + 4 * v6); /*0x471acd*/
  int v23; // [esp+24h] [ebp-28h] BYREF
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        this->CaptureManagerClass_field_41 = 0; /*0x471c83*/
      }
      else
      {
  int overloadCount; // ecx
        overloadCount = (int)(this->overloadCount); /*0x471adc*/
        this->overloadLimit = 10; /*0x471adf*/
        (*(void (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)overloadCount /*0x471b04*/
                                                                                           + 364))(
          overloadCount,
          &v23,
          0,
          *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
          0,
          0,
          0,
          0);
        if ( !this->CaptureManagerClass_field_41 ) /*0x471b0a*/
        {
  int *v10; // eax
          v10 = (int *)(this->overloadCount + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 600),(unsigned int *)(&v24), 0); /*0x471b3f*/
          this->CaptureManagerClass_field_41 = 1; /*0x471b44*/
        }
  int v22; // [esp+20h] [ebp-2Ch]
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
  int *v11; // eax
          v11 = (int *)(this->overloadCount + 156); /*0x471b58*/
  int v12; // ebx
          v12 = *(unsigned int *)(this->overloadCount + 160); /*0x471b64*/
  int v28; // [esp+40h] [ebp-Ch]
          v28 = *v11; /*0x471b69*/
  int v29; // [esp+44h] [ebp-8h]
          v29 = v11[1]; /*0x471b70*/
  int v13; // edi
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
  int v30; // [esp+48h] [ebp-4h]
          v30 = v13; /*0x471b8c*/
  int v14; // ebp
          v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471b98*/
  int *v15; // edx
          v15 = (int *)(this->overloadCount + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
  int v16; // eax
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471bc9*/
  int v27[3]; // [esp+34h] [ebp-18h] BYREF
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
  int *v17; // eax
          v17 = (int *)__2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            (/*0x471c15*/ v17)->Constructor(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4128), v27, 0, 0, &dword_89E138, 0);
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(unsigned char *)(this->overloadCount + 144) ) /*0x471c34*/
        {
  float v21; // [esp+1Ch] [ebp-30h]
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 100); /*0x471c62*/
  double v18; // st7
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(this->overloadCount + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = linkCount - 1; /*0x471a76*/
      this->linkCount = v2; /*0x471a78*/
    }
  }
  return (gamemd::ScenarioClass **)(v2); /*0x471a77*/

}
} // namespace ra2

// 0x471C90
namespace gamemd {
bool CaptureManagerClass::CanCapture(unsigned int *a2, void *a2_1)
{


  bool result; // al
  result = 0; /*0x471d36*/
  if ( a2 ) /*0x471c9a*/
  {
  int v3; // edi
    v3 = (int)(this->overloadCount); /*0x471ca4*/
  int v4; // ebp
    v4 = (*(int (**)(unsigned int *))(*a2 + 60))(a2); /*0x471cb0*/
    if ( v4 != (*(int (**)(int))(*(unsigned int *)v3 + 60))(v3) /*0x471cfe*/
      && !*(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3381)
      && (!a2[185] || (*(int (**)(unsigned int *))(*a2 + 44))(a2) != 1)
      && !BuildingClass::IsBeingRepairedOrCaptured((BuildingClass *)a2)
      && !a2[179]
      && !(*(unsigned __int8 (**)(unsigned int *))(*a2 + 352))(a2) )
    {
  int v5; // eax
      if ( this->CaptureManagerClass_field_40 || (v5 = this->originalOwner, this->originalOwner < v5) || v5 == 1 ) /*0x471d1c*/
      {
  int v6; // esi
        v6 = a2[43]; /*0x471d1e*/
        if ( v6 != 19 && v6 != 18 ) /*0x471d2c*/
          return 1; /*0x471ce3*/
      }
    }
  }
  return result; /*0x471d2e*/

}
} // namespace ra2

// 0x471D40
namespace gamemd {
void CaptureManagerClass::CaptureUnit(int a1, int a2, int a3, int aP1, int aP0)
{

  int v21; // ebx
  int v22; // edi

  if ( !a3 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  unsigned int *v5; // esi
  v5 = (*(unsigned char *)(a3 + 20) & 1) != 0 ? (unsigned int *)a3 : 0;
  char result; // al
  result = CaptureManagerClass::CanCapture((unsigned int *)(a1), v5); /*0x471d6e*/
  if ( result )
  {
    if ( a1->u32_3C == 1 ) /*0x471d85*/
    {
  int i; // edi
  unsigned int *v29; // [esp+4h] [ebp-28h]
  int v30; // [esp+8h] [ebp-24h]
  unsigned int *v31; // [esp+Ch] [ebp-20h]
      for ( i = a1->ptr_34 - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit(**(CaptureManagerClass ***)(a1->u32_28 + 4 * i), a1, a2, v29, v30, v31); /*0x471d98*/
    }
  int v7; // eax
    v7 = (*(int (**)(unsigned int *))(*v5 + 60))(v5); /*0x471da4*/
  int v8; // ebp
    v8 = *v5; /*0x471daa*/
  int v9; // edi
    v9 = v7; /*0x471dac*/
  int v10; // eax
    v10 = (*(int (**)(unsigned int, int))(**&a1->u32_48 + 60))(*(unsigned int *)(a1 + 72), 1); /*0x471db2*/
    result = (*(int (**)(unsigned int *, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
  int v11; // eax
      v11 = (int)(__2_YAPAXI_Z(0x14u)); /*0x471dce*/
  unsigned int *v12; // ebp
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
  int v13; // ecx
        v13 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x471ddc*/
        *(unsigned int *)(v11 + 16) = 0; /*0x471de2*/
        *(unsigned int *)(v11 + 8) = v13; /*0x471de5*/
        v12 = (unsigned int *)v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = (unsigned int)(v5); /*0x471df0*/
  int v14; // eax
      v14 = *(unsigned int *)(a1 + 44); /*0x471df3*/
  int v15; // ecx
      if ( *(unsigned int *)(a1 + 52) < v14 /*0x471e18*/
        || (a1->q031 || !v14)
        && (v15 = a1->u32_38, v15 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(a1->ptr_24 + 8))(a1 + 36, v14 + v15, 0) )
      {
  int v16; // eax
        v16 = *&a1->ptr_34; /*0x471e1f*/
  int v17; // edx
        v17 = *&a1->u32_28; /*0x471e22*/
        *(unsigned int *)(a1 + 52) = v16 + 1; /*0x471e28*/
        *(unsigned int *)(v17 + 4 * v16) = (unsigned int)(v12); /*0x471e2b*/
      }
  unsigned int *v18; // ebp
      v18 = v12 + 2; /*0x471e31*/
      v5[176] = *(unsigned int *)(a1 + 72); /*0x471e34*/
  int v19; // ecx
      v19 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 784); /*0x471e45*/
      *v18 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x471e4b*/
  int v33; // [esp+18h] [ebp-14h]
      v18[1] = v33; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (**)(unsigned int *))(*v5 + 44))(v5) != 1
        || !*(unsigned char *)(*((*(int (**)(unsigned int *))(*v5 + 44))(v5) == 1 ? v5 + 433 : (unsigned int *)1732) + 3603)
        || v5[43] != 16 )
      {
  int v20; // eax
        v20 = v5[43]; /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (**)(unsigned int *))(*v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((int)((CaptureManagerClass *)a1), (int)v5); /*0x471eae*/
      if ( (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3) == 6 ) /*0x471ec1*/
      {
        v21 = a3; /*0x471ecb*/
        v22 = dword_89E178 * *(unsigned int *)(*(unsigned int *)(a3 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(unsigned int *)((*(int (**)(unsigned int *))(*v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
  int *v23; // eax
  int v35[3]; // [esp+20h] [ebp-Ch] BYREF
      v23 = (int *)(*(int (**)(unsigned int *, int *))(*v5 + 72))(v5, v35); /*0x471ee1*/
  int v24; // ecx
      v24 = *v23; /*0x471f04*/
  int v25; // edx
      v25 = v23[1]; /*0x471f06*/
  int v26; // eax
      v26 = v22 + v23[2]; /*0x471f11*/
  int v32; // [esp+14h] [ebp-18h] BYREF
      v32 = v24; /*0x471f13*/
      v33 = v25; /*0x471f17*/
  int v34; // [esp+1Ch] [ebp-10h]
      v34 = v26; /*0x471f1b*/
  AnimClass *v27; // eax
      v27 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
  BuildingClass *v28; // eax
      if ( v27 ) /*0x471f29*/
                v28 = (BuildingClass *)AnimClass::ctor( /*0x471f4c*/                                  v27,(int *)(*(void **)(*(unsigned int *)&g_RulesClass_Instance + 800)),                                  &v32,                                  0,                                  1,                                  (void *)0x600,                                  0,                                  0);
      else
        v28 = 0; /*0x471f53*/
      v5[178] = (unsigned int)(v28); /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(unsigned int *)(v5[178] + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/

}
} // namespace ra2

// 0x471FF0
namespace gamemd {
char CaptureManagerClass::FreeUnit(int a2, int a3, unsigned int *a1, int aP1, unsigned int *aP0, int a5)
{

  int (**vtable0)(CaptureManagerClass *); // edx
  int v13; // eax
  int controlNodeCount; // ecx
  HouseClass *originalOwner; // eax
  HouseClass *v16; // ecx
  int v17; // eax
  unsigned int v20[3]; // [esp+10h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  CaptureManagerClass *v6; // ecx
  CaptureManagerClass *v7; // edi
  v7 = v6; /*0x471ff9*/
  if ( !a2 ) /*0x471ffd*/
    return 0; /*0x472000*/
  int i; // ebx
  for ( i = (int)&v6->originalOwner[-1].HouseClass_field_160B4 + 3; i >= 0; --i ) /*0x47200e*/
  {
  int v10; // ebp
    v10 = *(unsigned int *)(v7->controlNodeCount + 4 * i); /*0x472018*/
    if ( *(CaptureManagerClass **)v10 == a2 ) /*0x472022*/
    {
  int v11; // ecx
      v11 = a2->u64_2C8; /*0x472028*/
      if ( v11 ) /*0x472030*/
      {
        (*(void (**)(int))(*(unsigned int *)v11 + 248))(v11); /*0x472034*/
        a2->u64_2C8 = 0; /*0x47203a*/
      }
      if ( *(unsigned int *)((*((int (**)(CaptureManagerClass *, int, int))a2->AbstractClass + 33))(a2, a3, a2) /*0x472059*/
                     + 1456) == -1 )
      {
        if ( *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 612) != -1 ) /*0x4720a3*/
        {
          v21 = a2->Coord_9C; /*0x4720af*/
          retaddr = (_UNKNOWN *)*((unsigned int *)a2 + 40); /*0x4720b6*/
          StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 612),(unsigned int *)(&v21), 0); /*0x4720cb*/
        }
      }
      else
      {
        v20[0] = a2->Coord_9C; /*0x472069*/
        vtable0 = (int (**)(CaptureManagerClass *))a2->AbstractClass; /*0x47206d*/
        v20[1] = *((unsigned int *)a2 + 40); /*0x472072*/
        v20[2] = *((unsigned int *)a2 + 41); /*0x472079*/
        v13 = vtable0[33](a2); /*0x47207f*/
        StartAudioControllerAt(*(unsigned int *)(v13 + 1456), v20, 0); /*0x47208d*/
        v10 = (int)(aP0); /*0x472092*/
      }
      a2 = 1; /*0x4720d5*/
      a3 = *(unsigned int *)(v10 + 4); /*0x4720d7*/
      (*((void (**)(CaptureManagerClass *))a2->AbstractClass + 245))(a2); /*0x4720da*/
      CaptureManagerClass::DecideUnitFate((int)(v7), (int)a2); /*0x4720e3*/
      a2->q2C0 = 0; /*0x4720e8*/
      controlNodeCount = (int)(v7->controlNodeCount); /*0x4720f2*/
      if ( *(unsigned int *)(controlNodeCount + 4 * i) ) /*0x4720f5*/
        __3_YAXPAX_Z(*(void **)(controlNodeCount + 4 * i)); /*0x4720fd*/
      originalOwner = v7->originalOwner; /*0x472105*/
      if ( i < (int)originalOwner ) /*0x47210a*/
      {
        v16 = (HouseClass *)((char *)originalOwner - 1); /*0x47210c*/
        v17 = i; /*0x47210f*/
        for ( v7->originalOwner = v16; /*0x472116*/
              v17 < (int)v7->originalOwner;
              *(unsigned int *)(v7->controlNodeCount + 4 * v17 - 4) = *(unsigned int *)(v7->controlNodeCount + 4 * v17) )
        {
          ++v17; /*0x47211b*/
        }
      }
    }
  }
  return 1; /*0x471fff*/

}
} // namespace ra2

// 0x472160
namespace gamemd {
int CaptureManagerClass::DrawLinks(int a1, ...)
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
  unsigned int *v13; // ecx
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
  v3 = *(unsigned int *)(v1 + 72); /*0x47216e*/
  (*(((unsigned char *)&(v20)) + (sizeof(v20) - 1))) = v3->u8_83 != 0; /*0x47217b*/
  v4 = *(unsigned int *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(v2->controlNodeCount + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
  LABEL_7:
      if ( *(unsigned char *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = v2->overloadCount; /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          (*((unsigned char *)&(v3))) = (*(((unsigned char *)&(v20)) + (sizeof(v20) - 1))); /*0x4721d6*/
          if ( (*(((unsigned char *)&(v20)) + (sizeof(v20) - 1))) || v5 ) /*0x4721e0*/
          {
            v10 = *(unsigned int *)(v7 + 156); /*0x4721ec*/
            v11 = *(unsigned int *)(v7 + 164); /*0x4721f9*/
            v12 = (*(int (**)(int, int, int, void *, int, int))(*(unsigned int *)v7 + 132))( /*0x4721fe*/
                    v7,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20);
            v13 = v2->overloadCount; /*0x47220c*/
            (*(((unsigned char *)&(v20)) + (sizeof(v20) - 1))) = (*(((unsigned char *)&(v13)) + (sizeof(v13) - 1))); /*0x47220f*/
            (*((unsigned short *)&(v20))) = *(unsigned short *)(v13[135] + 22265); /*0x472223*/
            (((unsigned char *)&(v20))[2]) = *(unsigned char *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(unsigned int *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (**)(unsigned int *))(*v13 + 176))(v13); /*0x472264*/
            (*((unsigned char *)&(v3))) = (unsigned char)(DrawTacticalLaserLine(*v14,(void *)(v14[1]), v14[2], (int)va, -1 - v21 % 5, 0, 0)); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v9; /*0x4721af*/
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

  return !this->CaptureManagerClass_field_40 && (int)this->originalOwner >= *(unsigned int *)this->originalOwner; /*0x4722a7*/

}
} // namespace ra2

// 0x4723B0
namespace gamemd {
void CaptureManagerClass::DecideUnitFate(int aP1, void *a2)
{

  int v3; // edi
  int *v5; // ecx
  FactoryClass *v6; // ecx
  int v7; // ecx
  int v8; // eax
  unsigned int *v9; // esi
  int v13; // ebp
  int v14; // eax
  bool v15; // cc
  int v16; // esi
  int overloadCount; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  CaptureManagerClass *v21; // ecx
  char v22; // al
  int v23; // [esp-4h] [ebp-24h]
  int v24; // [esp+10h] [ebp-10h]
  int v25; // [esp+10h] [ebp-10h]
  int v27; // [esp+18h] [ebp-8h]
  bool v29; // [esp+24h] [ebp+4h]

  _EBX = (unsigned char *)aP1; /*0x4723b4*/
  v3 = 0; /*0x4723bb*/
  if ( !aP1 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (aP1->u32_14 & 4) != 0 ) /*0x4723cf*/
  {
    v5 = aP1->u32_5D4; /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      (v5)->LiberateMember_Start(aP1, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = aP1->q274; /*0x4723e4*/
  if ( v6 && v6->production[1] ) /*0x4723ee*/
    (v6)->CompleteItem(); /*0x4723f3*/
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)aP1 + 132))(aP1) + 1508) ) /*0x472402*/
    ((CCINIClass *)aP1)->IterateNodes(0); /*0x47240f*/
  v7 = aP1->q21C; /*0x472417*/
  v8 = *(unsigned int *)(this->overloadCount + 540); /*0x472422*/
  v29 = v7 != v8; /*0x47242c*/
  if ( *(unsigned char *)(v7 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v24 = 0; /*0x472446*/
  if ( (*(int (**)(int))(*(unsigned int *)(v8 + 36) + 24))(v8 + 36) >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance /*0x472459*/
                                                                                     + 3772) )
  {
    HouseClass::GetPowerRatio(*(HouseClass **)(this->overloadCount + 540)); /*0x472470*/
    __asm /*0x472475*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x472480*/
    {
      v9 = (unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3716); /*0x47248f*/
    }
    else
    {
      __asm { fild dword ptr [ebx+6Ch] } /*0x472497*/
      __asm { fstp [esp+20h+var_8] }
      _EAX = (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 132))(_EBX); /*0x4724a2*/
      __asm { fild dword ptr [eax+0A0h] } /*0x4724a8*/
      _ESI = *(unsigned int *)&g_RulesClass_Instance; /*0x4724ae*/
      __asm /*0x4724b4*/
      {
        fdivr [esp+20h+var_8]
        fcomp dword ptr [esi+0EC0h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x4724c3*/
        v9 = (unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3688); /*0x4724cd*/
      else
        v9 = (unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3660); /*0x4724dd*/
    }
  }
  else
  {
    v9 = (unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3744); /*0x47245f*/
  }
  v13 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 100); /*0x4724f7*/
  v27 = 0; /*0x4724f9*/
  if ( v13 <= 0 )
  {
LABEL_22:
    v16 = v24; /*0x472537*/
    (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 132))(_EBX); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    overloadCount = (int)(this->overloadCount); /*0x47256f*/
    if ( overloadCount ) /*0x472574*/
    {
      if ( (*(unsigned char *)(overloadCount + 20) & 4) != 0 ) /*0x47257a*/
      {
        v18 = *(unsigned int *)(overloadCount + 1492); /*0x47257c*/
        if ( v18 ) /*0x472584*/
        {
          v19 = *(unsigned int *)(v18 + 36); /*0x472586*/
          if ( *(unsigned int *)(v19 + 192) ) /*0x472589*/
          {
            v25 = *(unsigned int *)(v19 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v16 = v25; /*0x4725a9*/
          }
        }
      }
    }
    switch ( v16 )
    {
      case 1:
        if ( !v29 )
        {
          v20 = (int)(this->overloadCount); /*0x4725bd*/
          if ( v20 )
          {
            if ( (*(unsigned char *)(v20 + 20) & 4) != 0 )
            {
              v21 = *(CaptureManagerClass **)(v20 + 1492); /*0x4725ca*/
              if ( v21 )
              {
                v22 = (unsigned int)(CaptureManagerClass::AddMember(v21, (_EBX[20] & 4) != 0 ? (unsigned int)_EBX : 0));
                break; /*0x4725e0*/
              }
            }
          }
        }
LABEL_34:
        Debug::Log(); /*0x4725e9*/
        (*(void (**)(unsigned char *, int, unsigned int))(*(unsigned int *)_EBX + 488))(_EBX, 15, 0); /*0x4725fe*/
        return; /*0x4725fe*/
      case 2:
        v22 = (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 828))(_EBX); /*0x472617*/
        break;
      case 3:
        v22 = (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 832))(_EBX); /*0x472628*/
        break;
      case 5:
        return; /*0x472633*/
      default:
        goto LABEL_34; /*0x472633*/
    }
    if ( v22 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v24 != 6 && v3 != v9[4] ) /*0x47250f*/
  {
    ++v24; /*0x47251e*/
    v23 = v3++; /*0x472524*/
    v14 = (*(int (**)(unsigned int *, int))(*v9 + 24))(v9, v23); /*0x472526*/
    v15 = v13 <= v14 + v27; /*0x47252f*/
    v27 += v14; /*0x472531*/
    if ( v15 ) /*0x472535*/
      goto LABEL_22; /*0x472535*/
  }

}
} // namespace ra2

// 0x472640
namespace gamemd {
int CaptureManagerClass::NeedsToDrawLinks()
{
  int overloadCount; // eax
  int v3; // eax
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx

  overloadCount = (int)(this->overloadCount); /*0x472640*/
  if ( overloadCount->q083 ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = overloadCount->q11C; /*0x472656*/
  if ( v3 && *(unsigned char *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = this->controlNodeCount + 4 * v4; ; i -= 4 ) /*0x47267f*/
    {
      v6 = *(unsigned int *)i; /*0x472682*/
      if ( *(unsigned char *)(**(unsigned int **)i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = *(unsigned int *)(v6 + 8); /*0x472690*/
      v8 = *(unsigned int *)(v6 + 16); /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
  LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v7; /*0x4726a3*/
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
  if ( !this->CaptureManagerClass_field_40 || this->originalOwner <= this->originalOwner ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = this->overloadLimit > 0; /*0x4726dd*/
  return 1; /*0x4726e1*/
}
} // namespace ra2

// 0x472720
namespace gamemd {
TechnoClass * * CaptureManagerClass::LoadFromStream(int a1, int * a2)
{
  int *v2; // ebx
  CaptureManagerClass *v3; // ebp
  int result; // eax
  unsigned int *v5; // edi
  int v6; // edx
  CaptureManagerClass *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int controlNodeCapacity; // eax
  int v12; // ecx
  HouseClass *originalOwner; // eax
  int controlNodeCount; // edx
  int v15; // esi
  int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = (gamemd::CaptureManagerClass *)(a1); /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, (int)a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x47274b*/
      ((CaptureManagerClass *)v3->controlNodes)->Constructor_473140(0, 0); /*0x472757*/
      v3->controlNodes[0] = (int)&vt_DynamicVectorClass; /*0x47275c*/
      *(unsigned int *)&v3->CaptureManagerClass_field_30 = 10; /*0x472762*/
      v3->originalOwner = 0; /*0x472769*/
      /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x47276c) */
      /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x472773) */
      /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x47277a) */
      /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x472781) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&v3->overloadCount)); /*0x472791*/
    v6 = *v2; /*0x472796*/
    a1 = 0; /*0x4727a1*/
    result = (*(int (__stdcall **)(int *, CaptureManagerClass **, int, unsigned int))(v6 + 12))(v2, &a1, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = (gamemd::CaptureManagerClass *)(a1); /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( (int)a1 <= 0 ) /*0x4727be*/
      {
  LABEL_19:
        v15 = 0; /*0x472894*/
        if ( (int)v7 > 0 ) /*0x472898*/
        {
          do /*0x4728c4*/
          {
            ObjectPtr::RegisterForTracking( /*0x4728a9*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(unsigned int *)(v3->controlNodeCount + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking( /*0x4728ba*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v3->controlNodeCount + 4 * v15++));
          }
          while ( v15 < (int)a1 ); /*0x4728c4*/
        }
        return (gamemd::TechnoClass **)(v18); /*0x4728c6*/
      }
      else
      {
        while ( 1 ) /*0x4727ca*/
        {
          v8 = (int)(operator new(0x14u)); /*0x4727ca*/
          if ( v8 ) /*0x4727d4*/
          {
            v9 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4727d6*/
            *(unsigned int *)(v8 + 16) = 0; /*0x4727dc*/
            *(unsigned int *)(v8 + 8) = v9; /*0x4727df*/
            v5 = (unsigned int *)v8; /*0x4727e2*/
          }
          v10 = *v2; /*0x4727e4*/
          a2 = 0; /*0x4727f1*/
          v16 = 0; /*0x4727f5*/
          result = (*(int (__stdcall **)(int *, int **, int, unsigned int))(v10 + 12))(v2, &a2, 4, 0); /*0x4727f9*/
          if ( result < 0 ) /*0x4727fe*/
            break; /*0x4727fe*/
          result = v2->vt_entry_68(&v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = (unsigned int)(a2); /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          controlNodeCapacity = (int)(v3->controlNodeCapacity); /*0x472844*/
          if ( (int)v3->originalOwner < controlNodeCapacity /*0x472867*/
            || ((((unsigned char *)&(v3->owner))[1]) || !controlNodeCapacity)
            && (v12 = *(unsigned int *)&v3->CaptureManagerClass_field_30, v12 > 0)
            && (*(uint8_t (**)(int *, int, unsigned int))(v3->controlNodes[0] + 8))(
                 v3->controlNodes,
                 controlNodeCapacity + v12,
                 0) )
          {
            originalOwner = v3->originalOwner; /*0x47286e*/
            controlNodeCount = (int)(v3->controlNodeCount); /*0x472871*/
            v3->originalOwner = (HouseClass *)originalOwner->vtable1 + 1); /*0x472877*/
            *(unsigned int *)(controlNodeCount + 4 * (unsigned int)originalOwner) = (unsigned int)(v5); /*0x47287a*/
          }
          v7 = (gamemd::CaptureManagerClass *)(a1); /*0x472881*/
          if ( ++v17 >= (int)a1 ) /*0x47288c*/
            goto LABEL_19; /*0x47288c*/
          v5 = 0; /*0x4727c6*/
        }
      }
    }
  }
  return (gamemd::TechnoClass **)(result); /*0x4728ca*/
}
} // namespace ra2

// 0x4728E0
namespace gamemd {
int CaptureManagerClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int Prefix; // edi
  Prefix = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x4728f8*/
  int *v9; // [esp+30h] [ebp+8h]
  v9 = (int *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  int v5; // edx
  v5 = *a1; /*0x472905*/
  aP2 = (int)aP0->aP2; /*0x472911*/
  int result; // eax
  result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v5 + 16))(a1, &aP2, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  int v7; // ebp
  v7 = 0; /*0x472920*/
  if ( aP2 <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
  int v8; // edi
    v8 = *(unsigned int *)(aP0->controlNodeCount + 4 * v7); /*0x47292f*/
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*a1 + 16))(a1, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*a1 + 16))(a1, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= aP2 ) /*0x472950*/
      return (int)v9; /*0x472952*/
  }
  return result; /*0x472958*/
}
} // namespace ra2

// 0x472D70
namespace gamemd {
int CaptureManagerClass::Capture(unsigned int * a2)
{


  int m_10; // edx
  m_10 = (int)(this->uniqueId); /*0x472d70*/
  int result; // eax
  result = 0; /*0x472d73*/
  if ( m_10 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  unsigned int *i; // ecx
  for ( i = *&this->vtable2; *i != *a2; ++i ) /*0x472d7e*/
  {
    if ( ++result >= m_10 ) /*0x472d8d*/
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
  v2 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  int controlNodeCount; // edx
  controlNodeCount = (int)(this->controlNodeCount); /*0x4722f8*/
  unsigned int **i; // ecx
  for ( i = (unsigned int **)(controlNodeCount + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(unsigned int *)(*(unsigned int *)(controlNodeCount + 4 * v2) + 4); /*0x472310*/
}
} // namespace gamemd

// 0x4726F0
namespace gamemd {
int CaptureManagerClass::PowerDrainUpdate(int a2)
{


  int result; // eax
  result = ((AbstractClass *)this)->ProcessPower(); /*0x4726f9*/
  int overloadCount; // esi
  overloadCount = (int)(this->overloadCount); /*0x4726fe*/
  if ( overloadCount ) /*0x472703*/
  {
  int v5; // eax
    v5 = (*(int (**)(int))(*(unsigned int *)(overloadCount + 4) + 16))(overloadCount + 4); /*0x47270c*/
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
  a2[3] = unk_7E988C; /*0x472990*/
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
CaptureManagerClass * CaptureManagerClass::ddtor(unsigned int * Block, char a2)
{

  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x4729cd) */
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x4729d3) */
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x4729da) */
  /* X11: vtable install elided (implicit via CaptureManagerClass virtuals 0x4729e1) */
  CaptureManagerClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = (gamemd::CaptureManagerClass *)(Block); /*0x4729ef*/
  int v3; // eax
  v3 = (*(int (**)(int *, CaptureManagerClass **))(dword_89E0F0 + 16))(&dword_89E0F0, &v6); /*0x4729f3*/
  if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 ) /*0x472a0e*/
  {
    do /*0x472a26*/
    {
      ++v3; /*0x472a16*/
      *((unsigned int *)dword_89E0F4 + v3 - 1) = *((unsigned int *)dword_89E0F4 + v3); /*0x472a1a*/
    }
    while ( v3 < dword_89E100 ); /*0x472a26*/
  }
  void *controlNodeCount; // eax
  controlNodeCount = (void *)Block->controlNodeCount; /*0x472a28*/
  Block->controlNodes[0] = (int)&vt_VectorClass; /*0x472a2b*/
  if ( controlNodeCount && (Block->u8_101) ) /*0x472a36*/
  {
    operator delete((void *)(controlNodeCount)); /*0x472a3e*/
    Block->controlNodeCount = 0; /*0x472a46*/
  }
  (Block->u8_101) = 0; /*0x472a4f*/
  Block->controlNodeCapacity = 0; /*0x472a53*/
  ((AbstractClass *)Block)->DTOR(); /*0x472a5a*/
  if ( (a2 & 1) != 0 ) /*0x472a64*/
    operator delete((void *)(Block)); /*0x472a67*/
  return &Block->vfptr; /*0x472a71*/
}
} // namespace gamemd

// 0x472AB0
namespace gamemd {
unsigned int CaptureManagerClass::LoadTypeData(int a2)
{

  if ( LOBYTE(this->vtable4) ) /*0x472ab0*/
    return (unsigned int)(a2 - *&this->vtable2) >> 2; /*0x472ac5*/
  else
    return 0; /*0x472ab7*/

}
} // namespace gamemd

// 0x472B40
namespace gamemd {
char CaptureManagerClass::AddRef(int a2)
{


  int m_8; // esi
  m_8 = (int)(this->vtable3); /*0x472b42*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x472b4d*/
  {
  int v3; // edx
    v3 = 0; /*0x472b4f*/
    if ( m_8 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
  unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->vtable2); /*0x472b55*/
  int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x472b5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x472b64*/
    {
      ++v3; /*0x472b66*/
      ++v4; /*0x472b67*/
      if ( v3 >= m_8 ) /*0x472b6c*/
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


  if ( a2 ) /*0x472b8c*/
  {
    LOBYTE(this->vtable4) = 0; /*0x472b96*/
  unsigned int *v4; // edi
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x472bae*/
    LOBYTE(this->vtable4) = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( *&this->vtable2 ) /*0x472bc5*/
      {
  int m_8; // ecx
        m_8 = this->vtable3; /*0x472bcc*/
        if ( a2 < m_8 ) /*0x472bd1*/
          m_8 = a2; /*0x472bd3*/
  int i; // eax
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->vtable2 + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( BYTE1(this->vtable4) ) /*0x472beb*/
        {
          __3_YAXPAX_Z(*&this->vtable2); /*0x472bf6*/
          *&this->vtable2 = 0; /*0x472bfe*/
        }
      }
      *&this->vtable2 = v4; /*0x472c07*/
      this->vtable3 = a2; /*0x472c0f*/
      BYTE1(this->vtable4) = a3 == 0; /*0x472c12*/
      return 1; /*0x472c18*/
    }
    else
    {
      return 0; /*0x472bbf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAUControlNode *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }

}
} // namespace gamemd

// 0x472C30
namespace gamemd {
void CaptureManagerClass::Destroy(void *a1)
{
  if ( *(unsigned int *)&a1->m_1[3] && (((unsigned char *)&(a1->m_C))[1]) ) /*0x472c3d*/
  {
    operator delete((void *)(*(void **)&a1->vtable2)); /*0x472c43*/
    *(unsigned int *)&a1->vtable2 = 0; /*0x472c4b*/
  }
  (((unsigned char *)&(a1->vtable4))[1]) = 0; /*0x472c4e*/
  *(unsigned int *)&a1->vtable3 = 0; /*0x472c51*/
}
} // namespace gamemd

// 0x472C60
namespace gamemd {
int CaptureManagerClass::IndexOf(unsigned int * a2)
{


  if ( !LOBYTE(this->vtable4) ) /*0x472c60*/
    return 0; /*0x472c68*/
  int m_8; // edx
  m_8 = this->vtable3; /*0x472c6e*/
  int result; // eax
  result = 0; /*0x472c71*/
  if ( m_8 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  unsigned int *i; // ecx
  for ( i = *&this->vtable2; *i != *a2; ++i ) /*0x472c7b*/
  {
    if ( ++result >= m_8 ) /*0x472c8a*/
      return -1; /*0x472c8a*/
  }
  return result; /*0x472c6a*/

}
} // namespace gamemd

// 0x472CA0
namespace gamemd {
unsigned int CaptureManagerClass::PointerToIndex(int a2)
{

  if ( LOBYTE(this->vtable4) ) /*0x472ca0*/
    return (unsigned int)(a2 - *&this->vtable2) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/

}
} // namespace gamemd

// 0x472CC0
namespace gamemd {
char CaptureManagerClass::Release(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x472ccc*/
  {
    LOBYTE(this->vtable4) = 0; /*0x472cd2*/
  unsigned int *v4; // edi
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x472cea*/
    LOBYTE(this->vtable4) = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( *&this->vtable2 ) /*0x472cf8*/
    {
  int m_8; // ecx
      m_8 = this->vtable3; /*0x472cff*/
      if ( a2 < m_8 ) /*0x472d04*/
        m_8 = a2; /*0x472d06*/
  int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->vtable2 + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( BYTE1(this->vtable4) ) /*0x472d1e*/
      {
        __3_YAXPAX_Z(*&this->vtable2); /*0x472d29*/
        *&this->vtable2 = 0; /*0x472d31*/
      }
    }
    *&this->vtable2 = v4; /*0x472d3a*/
    this->vtable3 = a2; /*0x472d42*/
    BYTE1(this->vtable4) = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUControlNode *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x472d4e*/
  }
  int v7; // eax
  v7 = this->vtable3; /*0x472d51*/
  if ( v7 < this->uniqueId ) /*0x472d59*/
    this->uniqueId = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/

}
} // namespace gamemd

// 0x473000
namespace gamemd {
VectorClass_flat * CaptureManagerClass::Constructor_VectorClass_ControlNode___(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = *&Block->u32_100; /*0x473003*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x473006*/
  if ( v3 && (Block->u32_D) ) /*0x473010*/
  {
    operator delete((void *)(v3)); /*0x473018*/
    *&Block->u32_100 = 0; /*0x473020*/
  }
  (Block->u8_101) = 0; /*0x47302b*/
  *&Block->u32_100 = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    operator delete((void *)(Block)); /*0x47303b*/
  return Block->tail_0; /*0x473045*/
}
} // namespace gamemd

// 0x473050
namespace gamemd {
DynamicVector * CaptureManagerClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = *&Block->u32_100; /*0x473053*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x473056*/
  if ( v3 && (Block->u32_D) ) /*0x473060*/
  {
    operator delete((void *)(v3)); /*0x473068*/
    *&Block->u32_100 = 0; /*0x473070*/
  }
  (Block->u8_101) = 0; /*0x47307b*/
  *&Block->u32_100 = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    operator delete((void *)(Block)); /*0x47308b*/
  return Block->tail_0; /*0x473095*/
}
} // namespace gamemd

// 0x473140
namespace gamemd {
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{

  this->vtable2 = 0; /*0x47314b*/
  this->vtable3 = (void *)a2; /*0x47314e*/
  LOBYTE(this->vtable4) = 1; /*0x473151*/
  BYTE1(this->IsAllocated) = 0; /*0x473155*/
  this->AbstractClass = &vt_VectorClass; /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      this->vtable2 = (void *)a3; /*0x473168*/
      return &this->AbstractClass; /*0x47316e*/
    }
    this->vtable2 = (void *)__2_YAPAXI_Z(4 * a2); /*0x47317d*/
    BYTE1(this->IsAllocated) = 1; /*0x473180*/
  }
  return &this->AbstractClass; /*0x47316d*/

}
} // namespace gamemd

// 0x6EA4F0
namespace gamemd {
char CaptureManagerClass::AddMember(TechnoClass * aP1, void *a2, void *a3)
{
  return (a2)->AddMember(1); /*0x6ea4fc*/
}
} // namespace gamemd
