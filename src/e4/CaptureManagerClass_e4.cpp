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

// 0x4717D0
namespace gamemd {
CaptureManagerClass::CaptureManagerClass(int a2, int a3, char a4)
{

  int v5; // eax

  AbstractClass::Constructor((#373 *)this); /*0x4717d3*/
  *((unsigned char *)this + 48) = 1; /*0x4717e2*/
  *((unsigned int *)this + 10) = 0; /*0x4717e6*/
  *((unsigned int *)this + 11) = 0; /*0x4717e9*/
  *((unsigned char *)this + 49) = 0; /*0x4717ec*/
  *((unsigned int *)this + 9) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
  *((unsigned int *)this + 14) = 10; /*0x4717f6*/
  *((unsigned int *)this + 13) = 0; /*0x4717fd*/
  *((unsigned int *)this + 18) = a2; /*0x471800*/
  *(unsigned int *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
  *((unsigned int *)this + 1) = &CaptureManagerClass::`vftable'; /*0x47180d*/
  *((unsigned int *)this + 2) = &CaptureManagerClass::`vftable'; /*0x471814*/
  *((unsigned int *)this + 3) = &CaptureManagerClass::`vftable'; /*0x47181b*/
  *((unsigned int *)this + 15) = a3; /*0x471822*/
  *((unsigned char *)this + 64) = a4; /*0x471825*/
  *((unsigned char *)this + 65) = 0; /*0x471828*/
  *((unsigned int *)this + 19) = 30; /*0x47182b*/
  *((unsigned int *)this + 17) = 0; /*0x471832*/
  if ( MEMORY[0x89E100] < MEMORY[0x89E0F8] /*0x471868*/
    || (MEMORY[0x89E0FD] || !MEMORY[0x89E0F8])
    && MEMORY[0x89E104] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(MEMORY[0x89E0F0] + 8))(
         &MEMORY[0x89E0F0],
         MEMORY[0x89E0F8] + MEMORY[0x89E104],
         0) )
  {
    v5 = MEMORY[0x89E100]++; /*0x471875*/
    *((unsigned int *)MEMORY[0x89E0F4] + v5) = this; /*0x471884*/
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
  int v5; // edx
  int v6; // eax
  unsigned int *v7; // ecx
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
  int v23; // [esp+24h] [ebp-28h] BYREF
  int v24; // [esp+28h] [ebp-24h] BYREF
  int v25; // [esp+2Ch] [ebp-20h]
  int v26; // [esp+30h] [ebp-1Ch]
  int v27[3]; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+40h] [ebp-Ch]
  int v29; // [esp+44h] [ebp-8h]
  int v30; // [esp+48h] [ebp-4h]

  LOBYTE(v2) = *((unsigned char *)this + 64); /*0x471a59*/
  if ( (unsigned char)v2 ) /*0x471a5e*/
  {
    v3 = *((unsigned int *)this + 17); /*0x471a64*/
    if ( v3 > 0 ) /*0x471a69*/
      *((unsigned int *)this + 17) = v3 - 1; /*0x471a6c*/
    v4 = *((unsigned int *)this + 19); /*0x471a6f*/
    if ( v4 <= 0 ) /*0x471a74*/
    {
      v5 = *((unsigned int *)this + 13); /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = (unsigned int *)MEMORY[0x8871E0]->?[1]; /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( v5 > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= MEMORY[0x8871E0]->?[0] - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( v5 > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      *((unsigned int *)this + 19) = *(unsigned int *)(HIDWORD(MEMORY[0x8871E0]->?) + 4 * v6); /*0x471abe*/
      v2 = *(unsigned int *)(MEMORY[0x8871E0]->?[0] + 4 * v6); /*0x471acd*/
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        *((unsigned char *)this + 65) = 0; /*0x471c83*/
      }
      else
      {
        v9 = *((unsigned int *)this + 18); /*0x471adc*/
        *((unsigned int *)this + 17) = 10; /*0x471adf*/
        (*(void (**)(int, int *, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v9 + 364))( /*0x471b04*/
          v9,
          &v23,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          0,
          0,
          0);
        if ( !*((unsigned char *)this + 65) ) /*0x471b0a*/
        {
          v10 = (int *)(*((unsigned int *)this + 18) + 156); /*0x471b16*/
          v24 = *v10; /*0x471b1d*/
          v25 = v10[1]; /*0x471b2a*/
          v26 = v10[2]; /*0x471b35*/
          StartAudioControllerAt(MEMORY[0x8871E0]->?, (int)&v24, 0); /*0x471b3f*/
          *((unsigned char *)this + 65) = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(*((unsigned int *)this + 18) + 156); /*0x471b58*/
          v12 = *(unsigned int *)(*((unsigned int *)this + 18) + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v30 = v13; /*0x471b8c*/
          v14 = Random::Range((unsigned int *)MEMORY[0xA8B230] + 134, -200, 200); /*0x471b98*/
          v15 = (int *)(*((unsigned int *)this + 18) + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((unsigned int *)MEMORY[0xA8B230] + 134, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = __2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor((int)v17, MEMORY[0x8871E0]->?, v27, 0, 0, &stru_89E138, 0); /*0x471c15*/
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(unsigned char *)(*((unsigned int *)this + 18) + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((unsigned int *)MEMORY[0xA8B230] + 134, 0, 100); /*0x471c62*/
          v18 = v21; /*0x471c67*/
          if ( v2 < 50 ) /*0x471c6e*/
            v18 = -v18; /*0x471c70*/
          *(float *)(*((unsigned int *)this + 18) + 816) = v18; /*0x471c78*/
        }
      }
    }
    else
    {
      v2 = v4 - 1; /*0x471a76*/
      *((unsigned int *)this + 19) = v2; /*0x471a78*/
    }
  }
  return (gamemd::ScenarioClass **)(v2);

}
} // namespace ra2

// 0x471C90
namespace gamemd {
void CaptureManagerClass::CanCapture(unsigned int * a2)
{

  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  bool result; // al

  result = 0; /*0x471d36*/
  if ( a2 ) /*0x471c9a*/
  {
    v3 = *((unsigned int *)this + 18); /*0x471ca4*/
    v4 = (*(int (**)(unsigned int *))(*a2 + 60))(a2); /*0x471cb0*/
    if ( v4 != (*(int (**)(int))(*(unsigned int *)v3 + 60))(v3) /*0x471cfe*/
      && !*(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3381)
      && (!a2[185] || (*(int (**)(unsigned int *))(*a2 + 44))(a2) != 1)
      && !BuildingClass::IsBeingRepairedOrCaptured((int)a2)
      && !a2[179]
      && !(*(uint8_t (**)(unsigned int *))(*a2 + 352))(a2) )
    {
      if ( *((unsigned char *)this + 64) || (v5 = *((unsigned int *)this + 15), *((unsigned int *)this + 13) < v5) || v5 == 1 ) /*0x471d1c*/
      {
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
void CaptureManagerClass::CaptureUnit(int a2)
{

  char result; // al
  int v5; // esi
  int i; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int *v12; // ebp
  IUnknown *v13; // ecx
  IUnknown *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned int *v18; // ebp
  int v19; // ecx
  int v20; // eax
  int v21; // ebx
  int v22; // edi
  int v23; // eax
  IUnknown *v24; // ecx
  int v25; // edx
  AnimClass *v26; // eax
  void **v27; // eax
  AnimClass *v28; // eax
  int v29; // [esp+4h] [ebp-28h]
  IUnknown *v30; // [esp+8h] [ebp-24h]
  IUnknown *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+10h] [ebp-1Ch]
  CoordStruct aP2; // [esp+14h] [ebp-18h] BYREF
  int v34[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(unsigned char *)(a2 + 20) & 1) != 0 ? a2 : 0;
  result = (char)(CaptureManagerClass::CanCapture(this, (unsigned int *)v5));
  if ( result )
  {
    if ( *((unsigned int *)this + 15) == 1 ) /*0x471d85*/
    {
      for ( i = *((unsigned int *)this + 13) - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit( /*0x471d98*/
          **(IUnknown ***)(*((unsigned int *)this + 10) + 4 * i),
          v29,
          v30,
          v31,
          v32,
          (IUnknown **)aP2.X);
    }
    v7 = (*(int (**)(int))(*(unsigned int *)v5 + 60))(v5); /*0x471da4*/
    v8 = *(unsigned int *)v5; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (**)(unsigned int, int))(**(unsigned int **)((char *)this + 72) + 60))(*((unsigned int *)this + 18), 1); /*0x471db2*/
    result = (*(int (**)(int, int))(v8 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = __2_YAPAXI_Z(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x471ddc*/
        *(unsigned int *)(v11 + 16) = 0; /*0x471de2*/
        *(unsigned int *)(v11 + 8) = v13; /*0x471de5*/
        v12 = (int *)v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = v5; /*0x471df0*/
      v14 = *(IUnknown **)((char *)this + 44); /*0x471df3*/
      if ( *((unsigned int *)this + 13) < (int)v14 /*0x471e18*/
        || (*((unsigned char *)this + 49) || !v14)
        && (v15 = *((unsigned int *)this + 14), v15 > 0)
        && (*(uint8_t (**)(int, char *, unsigned int))(*((unsigned int *)this + 9) + 8))(
             (char *)this + 36,
             (char *)v14 + v15,
             0) )
      {
        v16 = *((unsigned int *)this + 13); /*0x471e1f*/
        v17 = *((unsigned int *)this + 10); /*0x471e22*/
        *((unsigned int *)this + 13) = v16 + 1; /*0x471e28*/
        *(unsigned int *)(v17 + 4 * v16) = v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      *(unsigned int *)(v5 + 704) = *((unsigned int *)this + 18); /*0x471e34*/
      v19 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 784); /*0x471e45*/
      *v18 = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x471e4b*/
      v18[1] = aP2.Y; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) != 1
        || !*(unsigned char *)(*(unsigned int *)((*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 1 ? v5 + 0x6C4 : 1732) + 3603)
        || *(unsigned int *)(v5 + 172) != 16 )
      {
        v20 = *(unsigned int *)(v5 + 172); /*0x471e91*/
        if ( v20 != 19 && v20 != 18 ) /*0x471e9f*/
          (*(void (**)(int))(*(unsigned int *)v5 + 976))(v5); /*0x471ea5*/
      }
      CaptureManagerClass::DecideUnitFate((unsigned int *)this, (IUnknown *)v5); /*0x471eae*/
      if ( (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 6 ) /*0x471ec1*/
      {
        v21 = a2; /*0x471ecb*/
        v22 = stru_89E138.field_40 * *(unsigned int *)(*(unsigned int *)(a2 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v5 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (*(int (**)(int, int *))(*(unsigned int *)v5 + 72))(v5, v34); /*0x471ee1*/
      v24 = *(IUnknown **)v23; /*0x471f04*/
      v25 = *(unsigned int *)(v23 + 4); /*0x471f06*/
      v26 = (AnimClass *)(v22 + *(unsigned int *)(v23 + 8)); /*0x471f11*/
      aP2.X = (int)v24; /*0x471f13*/
      aP2.Y = v25; /*0x471f17*/
      aP2.Z = (int)v26; /*0x471f1b*/
      v27 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = AnimClass::ctor( /*0x471f4c*/
                v27,
                *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 800),
                &aP2,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
      else
        v28 = 0; /*0x471f53*/
      *(unsigned int *)(v5 + 712) = v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret(v28, (IUnknown *)v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(unsigned int *)(*(unsigned int *)(v5 + 712) + 256) = -1024; /*0x471f71*/
      }
      return 1; /*0x471f7e*/
    }
  }
  return result; /*0x471d51*/

}
} // namespace ra2

// 0x471FF0
namespace gamemd {
void CaptureManagerClass::FreeUnit(IUnknown * aP0, int _28, IUnknown * a2, IUnknown * aP1, int _34, IUnknown ** a5)
{

  unsigned int *v6; // ecx
  int v7; // ebx
  IUnknown *v8; // ebp
  unsigned int *v9; // edi
  int v11; // ebx
  IUnknown **v12; // ebp
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  IUnknown *v20; // [esp-8h] [ebp-28h]
  int v21; // [esp-4h] [ebp-24h]
  int v22[3]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+1Ch] [ebp-4h] BYREF
  void *retaddr; // [esp+20h] [ebp+0h]

  v9 = v6; /*0x471ff9*/
  if ( !aP0 ) /*0x471ffd*/
    return 0; /*0x472000*/
  v21 = v7; /*0x472009*/
  v11 = v6[13] - 1; /*0x47200d*/
  if ( v11 >= 0 ) /*0x47200e*/
  {
    v20 = v8; /*0x472014*/
    do /*0x47212b*/
    {
      v12 = *(IUnknown ***)(v9[10] + 4 * v11); /*0x472018*/
      if ( *v12 == aP0 ) /*0x472022*/
      {
        v13 = *(unsigned int *)&aP0->__pad_2B8[16]; /*0x472028*/
        if ( v13 ) /*0x472030*/
        {
          (*(void (**)(int))(*(unsigned int *)v13 + 248))(v13); /*0x472034*/
          *(unsigned int *)&aP0->__pad_2B8[16] = 0; /*0x47203a*/
        }
        if ( *(unsigned int *)((*(int (**)(IUnknown *, IUnknown *, int))(aP0->field_0 + 132))(aP0, v20, v21) + 1456) == -1 ) /*0x472059*/
        {
          if ( *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 612) != -1 ) /*0x4720a3*/
          {
            v23 = aP0->field_9C; /*0x4720af*/
            retaddr = *(void **)aP0->__pad_A0; /*0x4720b6*/
            StartAudioControllerAt(*(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 612), (int)&v23, 0); /*0x4720cb*/
          }
        }
        else
        {
          v22[0] = aP0->field_9C; /*0x472069*/
          v14 = aP0->field_0; /*0x47206d*/
          v22[1] = *(unsigned int *)aP0->__pad_A0; /*0x472072*/
          v22[2] = aP0->field_A4; /*0x472079*/
          v15 = (*(int (**)(IUnknown *))(v14 + 132))(aP0); /*0x47207f*/
          StartAudioControllerAt(*(AudioController **)(v15 + 1456), (int)v22, 0); /*0x47208d*/
          v12 = (IUnknown **)a2; /*0x472092*/
        }
        v21 = 1; /*0x4720d5*/
        v20 = v12[1]; /*0x4720d7*/
        (*(void (**)(IUnknown *))(aP0->field_0 + 980))(aP0); /*0x4720da*/
        CaptureManagerClass::DecideUnitFate(v9, aP0); /*0x4720e3*/
        *(unsigned int *)&aP0->__pad_2B8[8] = 0; /*0x4720e8*/
        v16 = v9[10]; /*0x4720f2*/
        if ( *(unsigned int *)(v16 + 4 * v11) ) /*0x4720f5*/
          RA2_OPDEL(*(void **)(v16 + 4 * v11)); /*0x4720fd*/
        v17 = v9[13]; /*0x472105*/
        if ( v11 < v17 ) /*0x47210a*/
        {
          v18 = v17 - 1; /*0x47210c*/
          v19 = v11; /*0x47210f*/
          for ( v9[13] = v18; v19 < v9[13]; *(unsigned int *)(v9[10] + 4 * v19 - 4) = *(unsigned int *)(v9[10] + 4 * v19) ) /*0x472116*/
            ++v19; /*0x47211b*/
        }
      }
      --v11; /*0x47212a*/
    }
    while ( v11 >= 0 ); /*0x47212b*/
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
  IDA_HIBYTE(v20) = *(unsigned char *)(v3 + 131) != 0; /*0x47217b*/
  v4 = *(unsigned int *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(*(unsigned int *)(v2 + 40) + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( (int)g_abs_A8ED84 - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
LABEL_7:
      if ( *(unsigned char *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = *(unsigned int *)(v2 + 72); /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          IDA_LOBYTE(v3) = IDA_HIBYTE(v20); /*0x4721d6*/
          if ( IDA_HIBYTE(v20) || v5 ) /*0x4721e0*/
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
            v13 = *(unsigned int **)(v2 + 72); /*0x47220c*/
            IDA_HIBYTE(v20) = IDA_HIBYTE(v13); /*0x47220f*/
            IDA_LOWORD(v20) = *(unsigned short *)(v13[135] + 22265); /*0x472223*/
            IDA_BYTE2(v20) = *(unsigned char *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(unsigned int *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (**)(unsigned int *))(*v13 + 176))(v13); /*0x472264*/
            IDA_LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= (int)g_abs_A8ED84 - v9; /*0x4721af*/
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

  return !*((unsigned char *)this + 64) && *((unsigned int *)this + 13) >= *((unsigned int *)this + 15); /*0x4722a7*/

}
} // namespace ra2

// 0x4723B0
namespace gamemd {
void CaptureManagerClass::DecideUnitFate(IUnknown * aP1)
{

  AbstractClass *v3; // edi
  int v5; // ecx
  unsigned int *v6; // ecx
  int v7; // ecx
  int v8; // eax
  AbstractClass **v9; // esi
  int v10; // ebp
  int v11; // eax
  bool cc21; // cc
  AbstractClass *v12; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  void *ecx31; // ecx
  char v19; // al
  AbstractClass *v18; // [esp-4h] [ebp-24h]
  AbstractClass *v21; // [esp+10h] [ebp-10h]
  AbstractClass *v22; // [esp+10h] [ebp-10h]
  float v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+18h] [ebp-8h]
  bool aP1a; // [esp+24h] [ebp+4h]

  v3 = 0; /*0x4723bb*/
  if ( !aP1 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (aP1->__pad_10[4] & 4) != 0 ) /*0x4723cf*/
  {
    v5 = *(unsigned int *)&aP1->__pad_524[176]; /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      TeamClass::LiberateMember_Start(v5, aP1, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = *(unsigned int **)&aP1->__pad_220[84]; /*0x4723e4*/
  if ( v6 && v6[10] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v6); /*0x4723f3*/
  if ( *(unsigned char *)((*(int (**)(IUnknown *))(aP1->field_0 + 132))(aP1) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes(aP1, 0); /*0x47240f*/
  v7 = aP1->field_21C; /*0x472417*/
  v8 = *(unsigned int *)(*((unsigned int *)this + 18) + 540); /*0x472422*/
  aP1a = v7 != v8; /*0x47242c*/
  if ( *(unsigned char *)(v7 + 492) ) /*0x472431*/
    return; /*0x472439*/
  v21 = 0; /*0x472446*/
  if ( (*(int (**)(int))(*(unsigned int *)(v8 + 36) + 24))(v8 + 36) >= *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 /*0x472459*/
                                                                                     + 3772) )
  {
    if ( HouseClass::GetPowerRatio((int *)*(unsigned int *)(*((unsigned int *)this + 18) + 540)) >= 1.0 ) /*0x472480*/
    {
      v23 = (float)*(int *)&aP1->__pad_68[4]; /*0x47249e*/
      if ( v23 / (double)*(int *)((*(int (**)(IUnknown *))(aP1->field_0 + 132))(aP1) + 160) >= *(float *)(*(unsigned int *)&g_abs_87F8E4 + 3776) ) /*0x4724c3*/
        v9 = (AbstractClass **)(*(unsigned int *)&g_abs_87F8E4 + 3660); /*0x4724dd*/
      else
        v9 = (AbstractClass **)(*(unsigned int *)&g_abs_87F8E4 + 3688); /*0x4724cd*/
    }
    else
    {
      v9 = (AbstractClass **)(*(unsigned int *)&g_abs_87F8E4 + 3716); /*0x47248f*/
    }
  }
  else
  {
    v9 = (AbstractClass **)(*(unsigned int *)&g_abs_87F8E4 + 3744); /*0x47245f*/
  }
  v10 = Random::Range(&g_abs_A8B230->random[1], (IUnknown *)1, (IUnknown *)0x64); /*0x4724f7*/
  v24 = 0; /*0x4724f9*/
  if ( v10 <= 0 )
  {
LABEL_22:
    v12 = v21; /*0x472537*/
    (*(int (**)(IUnknown *))(aP1->field_0 + 132))(aP1); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    v14 = *((unsigned int *)this + 18); /*0x47256f*/
    if ( v14 ) /*0x472574*/
    {
      if ( (*(unsigned char *)(v14 + 20) & 4) != 0 ) /*0x47257a*/
      {
        v15 = *(unsigned int *)(v14 + 1492); /*0x47257c*/
        if ( v15 ) /*0x472584*/
        {
          v16 = *(unsigned int *)(v15 + 36); /*0x472586*/
          if ( *(unsigned int *)(v16 + 192) ) /*0x472589*/
          {
            v22 = *(AbstractClass **)(v16 + 192); /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v12 = v22; /*0x4725a9*/
          }
        }
      }
    }
    if ( v12 == (AbstractClass *)1 )
    {
      if ( !aP1a )
      {
        v17 = *((unsigned int *)this + 18); /*0x4725bd*/
        if ( v17 )
        {
          if ( (*(unsigned char *)(v17 + 20) & 4) != 0 )
          {
            ecx31 = *(void **)(v17 + 1492); /*0x4725ca*/
            if ( ecx31 )
            {
              v19 = CaptureManagerClass::AddMember(ecx31, (aP1->__pad_10[4] & 4) != 0 ? (TechnoClass *)aP1 : 0);
              goto LABEL_33; /*0x4725e0*/
            }
          }
        }
      }
LABEL_34:
      Debug::Log(); /*0x4725e9*/
      (*(void (**)(IUnknown *, int, unsigned int))(aP1->field_0 + 488))(aP1, 15, 0); /*0x4725fe*/
      return; /*0x4725fe*/
    }
    if ( v12 == (AbstractClass *)2 ) /*0x472611*/
    {
      v19 = (*(int (**)(IUnknown *))(aP1->field_0 + 828))(aP1); /*0x472617*/
    }
    else
    {
      if ( v12 != (AbstractClass *)3 ) /*0x472622*/
      {
        if ( v12 == (AbstractClass *)5 ) /*0x472633*/
          return; /*0x472633*/
        goto LABEL_34; /*0x472633*/
      }
      v19 = (*(int (**)(IUnknown *))(aP1->field_0 + 832))(aP1); /*0x472628*/
    }
LABEL_33:
    if ( v19 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v21 != (AbstractClass *)6 && v3 != v9[4] ) /*0x47250f*/
  {
    v21 = (AbstractClass *)((char *)v21 + 1); /*0x47251e*/
    v18 = v3; /*0x472524*/
    v3 = (AbstractClass *)((char *)v3 + 1); /*0x472525*/
    v11 = ((int (*)(AbstractClass **, AbstractClass *))(*v9)->nextArrayIndex)(v9, v18); /*0x472526*/
    cc21 = v10 <= v11 + v24; /*0x47252f*/
    v24 += v11; /*0x472531*/
    if ( cc21 ) /*0x472535*/
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

  v1 = *((unsigned int *)this + 18); /*0x472640*/
  if ( *(unsigned char *)(v1 + 131) ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = *(unsigned int *)(v1 + 284); /*0x472656*/
  if ( v3 && *(unsigned char *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = *((unsigned int *)this + 13) - 1; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = *((unsigned int *)this + 10) + 4 * v4; ; i -= 4 ) /*0x47267f*/
    {
      v6 = *(unsigned int *)i; /*0x472682*/
      if ( *(unsigned char *)(**(unsigned int **)i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = *(unsigned int *)(v6 + 8); /*0x472690*/
      v8 = *(unsigned int *)(v6 + 16); /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( (int)g_abs_A8ED84 - v7 < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= (int)g_abs_A8ED84 - v7; /*0x4726a3*/
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

  if ( !*((unsigned char *)this + 64) || *((unsigned int *)this + 13) <= *((unsigned int *)this + 15) ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = *((unsigned int *)this + 17) > 0; /*0x4726dd*/
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
  unsigned int *v5; // edi
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // eax
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
      AbstractClass::InitVtables((unsigned int *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140(0, 0); /*0x472757*/
      *(unsigned int *)(v3 + 36) = &vt_DynamicVectorClass_ControlNode; /*0x47275c*/
      *(unsigned int *)(v3 + 56) = 10; /*0x472762*/
      *(unsigned int *)(v3 + 52) = 0; /*0x472769*/
      *(unsigned int *)v3 = &vt_CaptureManagerClass; /*0x47276c*/
      *(unsigned int *)(v3 + 4) = &vt_CaptureManagerClass; /*0x472773*/
      *(unsigned int *)(v3 + 8) = &vt_CaptureManagerClass; /*0x47277a*/
      *(unsigned int *)(v3 + 12) = &vt_CaptureManagerClass; /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v3 + 72)); /*0x472791*/
    v6 = *v2; /*0x472796*/
    a1 = 0; /*0x4727a1*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v6 + 12))(v2, &a1, 4, 0); /*0x4727a5*/
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
              (int)&g_abs_B0C110,
              (int *)(*(unsigned int *)(*(unsigned int *)(v3 + 40) + 4 * v15) + 4));
            ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, *(int **)(*(unsigned int *)(v3 + 40) + 4 * v15++)); /*0x4728ba*/
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
            v9 = g_abs_A8ED84; /*0x4727d6*/
            v8[4] = 0; /*0x4727dc*/
            v8[2] = v9; /*0x4727df*/
            v5 = v8; /*0x4727e2*/
          }
          v10 = *v2; /*0x4727e4*/
          a2 = 0; /*0x4727f1*/
          v16 = 0; /*0x4727f5*/
          result = (*(int (**)(int *, int **, int, unsigned int))(v10 + 12))(v2, &a2, 4, 0); /*0x4727f9*/
          if ( result < 0 ) /*0x4727fe*/
            break; /*0x4727fe*/
          result = (*(int (**)(int *, int *, int, unsigned int))(*v2 + 12))(v2, &v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = a2; /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = g_abs_A8ED84; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          v11 = *(unsigned int *)(v3 + 44); /*0x472844*/
          if ( *(unsigned int *)(v3 + 52) < v11 /*0x472867*/
            || (*(unsigned char *)(v3 + 49) || !v11)
            && (v12 = *(unsigned int *)(v3 + 56), v12 > 0)
            && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v3 + 36) + 8))(v3 + 36, v11 + v12, 0) )
          {
            v13 = *(unsigned int *)(v3 + 52); /*0x47286e*/
            v14 = *(unsigned int *)(v3 + 40); /*0x472871*/
            *(unsigned int *)(v3 + 52) = v13 + 1; /*0x472877*/
            *(unsigned int *)(v14 + 4 * v13) = v5; /*0x47287a*/
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
  ObjectTypeClass *aP1; // [esp+30h] [ebp+8h]

  Prefix = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4728f8*/
  aP1 = (ObjectTypeClass *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  v5 = *a1; /*0x472905*/
  aP2 = *(unsigned int *)&aP0->BarrelVoxel[16]; /*0x472911*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v5 + 16))(a1, &aP2, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  v7 = 0; /*0x472920*/
  if ( aP2 <= 0 ) /*0x472924*/
    return Prefix; /*0x472956*/
  while ( 1 ) /*0x47292f*/
  {
    v8 = *(unsigned int *)(*(unsigned int *)&aP0->BarrelVoxel[4] + 4 * v7); /*0x47292f*/
    (*(void (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, v8 + 4, 4, 0); /*0x472937*/
    result = (*(int (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, v8, 4, 0); /*0x472942*/
    if ( result < 0 ) /*0x472947*/
      break; /*0x472947*/
    if ( ++v7 >= aP2 ) /*0x472950*/
      return (int)aP1->__pad_0; /*0x472952*/
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
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x472d70*/
  result = 0; /*0x472d73*/
  if ( v2 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x472d7e*/
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
  unsigned int **i; // ecx

  v2 = *((unsigned int *)this + 13) - 1; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  v3 = *((unsigned int *)this + 10); /*0x4722f8*/
  for ( i = (unsigned int **)(v3 + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(unsigned int *)(*(unsigned int *)(v3 + 4 * v2) + 4); /*0x472310*/

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
  v4 = *((unsigned int *)this + 18); /*0x4726fe*/
  if ( v4 ) /*0x472703*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)(v4 + 4) + 16))(v4 + 4); /*0x47270c*/
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
CaptureManagerClass * CaptureManagerClass::ddtor(unsigned int * Block, char a2)
{

  int v3; // eax
  void *v4; // eax
  unsigned int *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_CaptureManagerClass; /*0x4729cd*/
  *(Block + 1) = &vt_CaptureManagerClass; /*0x4729d3*/
  *(Block + 2) = &vt_CaptureManagerClass; /*0x4729da*/
  *(Block + 3) = &vt_CaptureManagerClass; /*0x4729e1*/
  v6 = Block; /*0x4729ef*/
  v3 = (*(int (**)(int *, unsigned int **))(dword_89E0F0 + 16))(&dword_89E0F0, &v6); /*0x4729f3*/
  if ( v3 != -1 && v3 < dword_89E100 && v3 < --dword_89E100 ) /*0x472a0e*/
  {
    do /*0x472a26*/
    {
      ++v3; /*0x472a16*/
      *((unsigned int *)unk_89E0F4 + v3 - 1) = *((unsigned int *)unk_89E0F4 + v3); /*0x472a1a*/
    }
    while ( v3 < dword_89E100 ); /*0x472a26*/
  }
  v4 = (void *)*(Block + 10); /*0x472a28*/
  *(Block + 9) = &vt_VectorClass_ControlNode; /*0x472a2b*/
  if ( v4 && *((unsigned char *)Block + 49) ) /*0x472a36*/
  {
    RA2_OPDEL(v4); /*0x472a3e*/
    *(Block + 10) = 0; /*0x472a46*/
  }
  *((unsigned char *)Block + 49) = 0; /*0x472a4f*/
  *(Block + 11) = 0; /*0x472a53*/
  AbstractClass::DTOR(Block); /*0x472a5a*/
  if ( (Block & 1) != 0 ) /*0x472a64*/
    RA2_OPDEL(Block); /*0x472a67*/
  return (CaptureManagerClass *)Block; /*0x472a71*/

}
} // namespace gamemd

// 0x472AB0
namespace gamemd {
unsigned int CaptureManagerClass::LoadTypeData(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x472ab0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x472ac5*/
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
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x472b42*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x472b4d*/
  {
    v3 = 0; /*0x472b4f*/
    if ( v2 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x472b55*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x472b5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x472b64*/
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

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x472b8c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x472b96*/
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x472bae*/
    *((unsigned char *)this + 12) = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x472bc5*/
      {
        v6 = *((unsigned int *)this + 2); /*0x472bcc*/
        if ( a2 < v6 ) /*0x472bd1*/
          v6 = a2; /*0x472bd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( *((unsigned char *)this + 13) ) /*0x472beb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x472bf6*/
          *((unsigned int *)this + 1) = 0; /*0x472bfe*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x472c07*/
      *((unsigned int *)this + 2) = a2; /*0x472c0f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x472c12*/
      return 1; /*0x472c18*/
    }
    else
    {
      return 0; /*0x472bbf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }

}
} // namespace gamemd

// 0x472C30
namespace gamemd {
void CaptureManagerClass::Destroy()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x472c3d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x472c43*/
    *((unsigned int *)this + 1) = 0; /*0x472c4b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x472c4e*/
  *((unsigned int *)this + 2) = 0; /*0x472c51*/

}
} // namespace gamemd

// 0x472C60
namespace gamemd {
int CaptureManagerClass::IndexOf(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x472c60*/
    return 0; /*0x472c68*/
  v3 = *((unsigned int *)this + 2); /*0x472c6e*/
  result = 0; /*0x472c71*/
  if ( v3 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x472c7b*/
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

  if ( *((unsigned char *)this + 12) ) /*0x472ca0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/

}
} // namespace gamemd

// 0x472CC0
namespace gamemd {
char CaptureManagerClass::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x472ccc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x472cd2*/
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x472cea*/
    *((unsigned char *)this + 12) = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( *((unsigned int *)this + 1) ) /*0x472cf8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x472cff*/
      if ( a2 < v5 ) /*0x472d04*/
        v5 = a2; /*0x472d06*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( *((unsigned char *)this + 13) ) /*0x472d1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x472d29*/
        *((unsigned int *)this + 1) = 0; /*0x472d31*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x472d3a*/
    *((unsigned int *)this + 2) = a2; /*0x472d42*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x472d4e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x472d51*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x472d59*/
    *((unsigned int *)this + 4) = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/

}
} // namespace gamemd

// 0x473000
namespace gamemd {
VectorClass_flat * CaptureManagerClass::Constructor_VectorClass_ControlNode___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x473003*/
  *Block = &vt_VectorClass_ControlNode; /*0x473006*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x473010*/
  {
    RA2_OPDEL(v3); /*0x473018*/
    *(Block + 1) = 0; /*0x473020*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x47302b*/
  *(Block + 2) = 0; /*0x473031*/
  if ( (Block & 1) != 0 ) /*0x473038*/
    RA2_OPDEL(Block); /*0x47303b*/
  return (VectorClass *)Block; /*0x473045*/

}
} // namespace gamemd

// 0x473050
namespace gamemd {
DynamicVector * CaptureManagerClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x473053*/
  *Block = &vt_VectorClass_ControlNode; /*0x473056*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x473060*/
  {
    RA2_OPDEL(v3); /*0x473068*/
    *(Block + 1) = 0; /*0x473070*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x47307b*/
  *(Block + 2) = 0; /*0x473081*/
  if ( (Block & 1) != 0 ) /*0x473088*/
    RA2_OPDEL(Block); /*0x47308b*/
  return (DynamicVector *)Block; /*0x473095*/

}
} // namespace gamemd

// 0x473140
namespace gamemd {
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x47314b*/
  *((unsigned int *)this + 2) = a2; /*0x47314e*/
  *((unsigned char *)this + 12) = 1; /*0x473151*/
  *((unsigned char *)this + 13) = 0; /*0x473155*/
  *this = &vt_VectorClass_ControlNode; /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      *((unsigned int *)this + 1) = a3; /*0x473168*/
      return this; /*0x47316e*/
    }
    *((unsigned int *)this + 1) = OperatorNew(4 * a2); /*0x47317d*/
    *((unsigned char *)this + 13) = 1; /*0x473180*/
  }
  return this; /*0x47316d*/

}
} // namespace gamemd

// 0x6EA4F0
namespace gamemd {
char CaptureManagerClass::AddMember(TechnoClass * aP1)
{

  return TeamClass::AddMember((int)this, (IUnknown *)aP1, (IUnknown *)1); /*0x6ea4fc*/

}
} // namespace gamemd
