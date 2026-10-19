// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/_DynamicVectorClass_PAUControlNode_e4.hpp"  // X78 seed fix
#include "e4/classes/_VectorClass_PAUControlNode_e4.hpp"  // X78 seed fix
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
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x4717D0
namespace gamemd {  // G42.18 ns repair
CaptureManagerClass::CaptureManagerClass(int a2, int a3, char a4)
{


  ((AbstractClass *)this)->Constructor(); /*0x4717d3*/
  this->owner = (gamemd::TechnoClass *)(1); /*0x4717e2*/
  this->controlNodeCount = 0; /*0x4717e6*/
  this->controlNodeCapacity = 0; /*0x4717e9*/
  this->CaptureManagerClass_field_31 = 0; /*0x4717ec*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x4717ef*/
  this->CaptureManagerClass_field_30 = 10; /*0x4717f6*/
  this->originalOwner = 0; /*0x4717fd*/
  this->overloadCount = a2; /*0x471800*/
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x471807) */
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x47180d) */
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x471814) */
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x47181b) */
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

  int v2; // eax
  int overloadLimit; // eax
  int linkCount; // eax
  HouseClass *originalOwner; // edx
  int v6; // eax
  unsigned int *v7; // ecx
  int v8; // ebp
  int overloadCount; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  int *v15; // edx
  int v16; // eax
  int *v17; // eax
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

  (v2) = ((v2) & ~0xFF) | ((this->CaptureManagerClass_field_40) & 0xFF); /*0x471a59*/
  if ( (unsigned char)v2 ) /*0x471a5e*/
  {
    overloadLimit = this->overloadLimit; /*0x471a64*/
    if ( overloadLimit > 0 ) /*0x471a69*/
      this->overloadLimit = overloadLimit - 1; /*0x471a6c*/
    linkCount = this->linkCount; /*0x471a6f*/
    if ( linkCount <= 0 ) /*0x471a74*/
    {
      originalOwner = this->originalOwner; /*0x471a88*/
      v6 = 0; /*0x471a8b*/
      v7 = *(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3820); /*0x471a8d*/
      v20 = 0; /*0x471a93*/
      if ( (int)originalOwner > *v7 ) /*0x471a99*/
      {
        do /*0x471aaf*/
        {
          if ( v6 >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3832) - 1 ) /*0x471aa4*/
            break; /*0x471aa4*/
          v8 = v7[1]; /*0x471aa6*/
          ++v7; /*0x471aa9*/
          ++v6; /*0x471aac*/
        }
        while ( (int)originalOwner > v8 ); /*0x471aaf*/
        v20 = v6; /*0x471ab1*/
      }
      this->linkCount = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3876) + 4 * v6); /*0x471abe*/
      v2 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3848) + 4 * v6); /*0x471acd*/
      v23 = v2; /*0x471ad2*/
      if ( v2 <= 0 ) /*0x471ad6*/
      {
        this->CaptureManagerClass_field_41 = 0; /*0x471c83*/
      }
      else
      {
        overloadCount = this->overloadCount; /*0x471adc*/
        this->overloadLimit = 10; /*0x471adf*/
        (*(void (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)overloadCount /*0x471b04*/
                                                                                           + 364))(
          overloadCount,
          &v23,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
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
          StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 600), &v24, 0); /*0x471b3f*/
          this->CaptureManagerClass_field_41 = 1; /*0x471b44*/
        }
        v22 = 5; /*0x471b48*/
        do /*0x471c23*/
        {
          v11 = (int *)(this->overloadCount + 156); /*0x471b58*/
          v12 = *(unsigned int *)(this->overloadCount + 160); /*0x471b64*/
          v28 = *v11; /*0x471b69*/
          v29 = v11[1]; /*0x471b70*/
          v13 = v11[2]; /*0x471b7a*/
          v28 = *v11; /*0x471b88*/
          v30 = v13; /*0x471b8c*/
          v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471b98*/
          v15 = (int *)(this->overloadCount + 156); /*0x471b9a*/
          v24 = *v15; /*0x471bac*/
          v25 = v15[1]; /*0x471bb8*/
          v26 = v15[2]; /*0x471bc5*/
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -200, 200); /*0x471bc9*/
          v27[0] = v24 + v16; /*0x471bde*/
          v27[1] = v14 + v12; /*0x471be2*/
          v27[2] = v13 + 100; /*0x471be6*/
          v17 = (int *)__2_YAPAXI_Z(0x100u); /*0x471bea*/
          if ( v17 ) /*0x471bf4*/
            ParticleSystemClass::Constructor( /*0x471c15*/
              v17,
              *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
              v27,
              0,
              0,
              &dword_89E138,
              0);
          --v22; /*0x471c1f*/
        }
        while ( v22 ); /*0x471c23*/
        v2 = v20; /*0x471c29*/
        if ( v20 > 0 && *(unsigned char *)(this->overloadCount + 144) ) /*0x471c34*/
        {
          v21 = 0.015; /*0x471c41*/
          if ( v2 != 1 ) /*0x471c49*/
            v21 = 0.029999999; /*0x471c4b*/
          v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 100); /*0x471c62*/
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
  return v2; /*0x471a77*/

}
} // namespace ra2

// 0x471C90
namespace gamemd {
bool CaptureManagerClass::CanCapture(unsigned int *a2, void *a2_1)
{


  bool result = 0; // al /*0x471d36*/
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

  char result; // al
  BuildingClass *v5; // esi
  int i; // edi
  int v7; // eax
  int ptr_0; // ebp
  int v9; // edi
  int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // ebp
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int *v17; // edx
  unsigned int *v18; // ebp
  int v19; // ecx
  int currentMission; // eax
  int v21; // ebx
  int v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  AnimClass *v27; // eax
  void **v28; // eax
  unsigned int *v29; // [esp+4h] [ebp-28h]
  int v30; // [esp+8h] [ebp-24h]
  unsigned int *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h] BYREF
  int v33; // [esp+18h] [ebp-14h]
  int v34; // [esp+1Ch] [ebp-10h]
  int v35[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !a3 ) /*0x471d4f*/
    return 0; /*0x471d54*/
  v5 = (*(unsigned char *)(a3 + 20) & 1) != 0 ? (BuildingClass *)a3 : 0;
  result = CaptureManagerClass::CanCapture(a1, v5); /*0x471d6e*/
  if ( result )
  {
    if ( a1->u32_3C == 1 ) /*0x471d85*/
    {
      for ( i = a1->ptr_34 - 1; i >= 0; --i ) /*0x471d8b*/
        CaptureManagerClass::FreeUnit(**(CaptureManagerClass ***)(a1->u32_28 + 4 * i), a1, a2, v29, v30, v31); /*0x471d98*/
    }
    v7 = (*(int (**)(BuildingClass *))(v5->ptr_0 + 60))(v5); /*0x471da4*/
    ptr_0 = v5->ptr_0; /*0x471daa*/
    v9 = v7; /*0x471dac*/
    v10 = (*(int (**)(unsigned int, int))(**(unsigned int **)(a1 + 72) + 60))(*(unsigned int *)(a1 + 72), 1); /*0x471db2*/
    result = (*(int (**)(BuildingClass *, int))(ptr_0 + 980))(v5, v10); /*0x471db8*/
    if ( result )
    {
      v11 = (unsigned int *)__2_YAPAXI_Z(0x14u); /*0x471dce*/
      v12 = 0; /*0x471dd3*/
      if ( v11 ) /*0x471dda*/
      {
        v13 = *(unsigned int *)&stru_A8E960.random[528]; /*0x471ddc*/
        v11[4] = 0; /*0x471de2*/
        v11[2] = v13; /*0x471de5*/
        v12 = v11; /*0x471de8*/
      }
      v12[1] = v9; /*0x471dea*/
      *v12 = (unsigned int)v5; /*0x471df0*/
      v14 = *(unsigned int *)(a1 + 44); /*0x471df3*/
      if ( *(unsigned int *)(a1 + 52) < v14 /*0x471e18*/
        || (*(unsigned char *)(a1 + 49) || !v14)
        && (v15 = a1->u32_38, v15 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(a1->ptr_24 + 8))(a1 + 36, v14 + v15, 0) )
      {
        v16 = *(unsigned int *)(a1 + 52); /*0x471e1f*/
        v17 = *(unsigned int **)(a1 + 40); /*0x471e22*/
        *(unsigned int *)(a1 + 52) = v16 + 1; /*0x471e28*/
        v17[v16] = (unsigned int)v12; /*0x471e2b*/
      }
      v18 = v12 + 2; /*0x471e31*/
      v5->mindControlledBy = *(unsigned int *)(a1 + 72); /*0x471e34*/
      v19 = *&dword_8871E0->q310; /*0x471e45*/
      *v18 = *(unsigned int *)&stru_A8E960.random[528]; /*0x471e4b*/
      v18[1] = v33; /*0x471e52*/
      v18[2] = v19; /*0x471e57*/
      if ( !v5
        || (*(int (**)(BuildingClass *))(v5->ptr_0 + 44))(v5) != 1
        || !*(unsigned char *)(*((*(int (**)(BuildingClass *))(v5->ptr_0 + 44))(v5) == 1
                       ? (unsigned int *)&v5->__pad_6B8[12]
                       : (unsigned int *)1732)
                     + 3603)
        || v5->currentMission != 16 )
      {
        currentMission = v5->currentMission; /*0x471e91*/
        if ( currentMission != 19 && currentMission != 18 ) /*0x471e9f*/
          (*(void (**)(BuildingClass *))(v5->ptr_0 + 976))(v5); /*0x471ea5*/
      }
      ((CaptureManagerClass *)a1)->DecideUnitFate((int)v5); /*0x471eae*/
      if ( (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3) == 6 ) /*0x471ec1*/
      {
        v21 = a3; /*0x471ecb*/
        v22 = dword_89E178 * *(unsigned int *)(*(unsigned int *)(a3 + 1312) + 3828); /*0x471ed8*/
      }
      else
      {
        v21 = 0; /*0x471eea*/
        v22 = *(unsigned int *)((*(int (**)(BuildingClass *))(v5->ptr_0 + 132))(v5) + 1548); /*0x471ef2*/
      }
      v23 = (int *)(*(int (**)(BuildingClass *, int *))(v5->ptr_0 + 72))(v5, v35); /*0x471ee1*/
      v24 = *v23; /*0x471f04*/
      v25 = v23[1]; /*0x471f06*/
      v26 = v22 + v23[2]; /*0x471f11*/
      v32 = v24; /*0x471f13*/
      v33 = v25; /*0x471f17*/
      v34 = v26; /*0x471f1b*/
      v27 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x471f1f*/
      if ( v27 ) /*0x471f29*/
        v28 = AnimClass::ctor(v27, *&dword_8871E0->q320, &v32, 0, 1, (void *)0x600, 0, 0); /*0x471f4c*/
      else
        v28 = 0; /*0x471f53*/
      v5->mindControlRingAnim = (int)v28; /*0x471f57*/
      if ( v28 ) /*0x471f5d*/
      {
        BuildingClass::AimTurret((BuildingClass *)v28, v5); /*0x471f62*/
        if ( v21 ) /*0x471f69*/
          *(unsigned int *)(v5->mindControlRingAnim + 256) = -1024; /*0x471f71*/
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

  CaptureManagerClass *v6; // ecx
  CaptureManagerClass *v7; // edi
  int i; // ebx
  CaptureManagerClass **v10; // ebp
  int v11; // ecx
  int ptr_0; // edx
  int v13; // eax
  int controlNodeCount; // ecx
  int originalOwner; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v20[3]; // [esp+10h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h]

  v7 = v6; /*0x471ff9*/
  if ( !this ) /*0x471ffd*/
    return 0; /*0x472000*/
  for ( i = v6->originalOwner - 1; i >= 0; --i ) /*0x47200e*/
  {
    v10 = *(CaptureManagerClass ***)(v7->controlNodeCount + 4 * i); /*0x472018*/
    if ( *v10 == this ) /*0x472022*/
    {
      v11 = this->u32_2C8; /*0x472028*/
      if ( v11 ) /*0x472030*/
      {
        (*(void (**)(int))(*(unsigned int *)v11 + 248))(v11); /*0x472034*/
        this->u32_2C8 = 0; /*0x47203a*/
      }
      if ( *(unsigned int *)((*(int (**)(CaptureManagerClass *, int, int))(this->ptr_0 + 132))(this, a3, a2) + 1456) == -1 ) /*0x472059*/
      {
        if ( *&dword_8871E0->q264 != -1 ) /*0x4720a3*/
        {
          v21 = this->Coord_9C; /*0x4720af*/
          retaddr = (_UNKNOWN *)this->q0A0; /*0x4720b6*/
          StartAudioControllerAt(*&dword_8871E0->q264, &v21, 0); /*0x4720cb*/
        }
      }
      else
      {
        v20[0] = this->Coord_9C; /*0x472069*/
        ptr_0 = this->ptr_0; /*0x47206d*/
        v20[1] = this->q0A0; /*0x472072*/
        v20[2] = this->u32_A4; /*0x472079*/
        v13 = (*(int (**)(CaptureManagerClass *))(ptr_0 + 132))(this); /*0x47207f*/
        StartAudioControllerAt(*(unsigned int *)(v13 + 1456), v20, 0); /*0x47208d*/
        v10 = (CaptureManagerClass **)a5; /*0x472092*/
      }
      a2 = 1; /*0x4720d5*/
      a3 = (int)v10[1]; /*0x4720d7*/
      (*(void (**)(CaptureManagerClass *))(this->ptr_0 + 980))(this); /*0x4720da*/
      (v7)->DecideUnitFate((int)this); /*0x4720e3*/
      this->u32_2C0 = 0; /*0x4720e8*/
      controlNodeCount = v7->controlNodeCount; /*0x4720f2*/
      if ( *(unsigned int *)(controlNodeCount + 4 * i) ) /*0x4720f5*/
        __3_YAXPAX_Z(*(void **)(controlNodeCount + 4 * i)); /*0x4720fd*/
      originalOwner = v7->originalOwner; /*0x472105*/
      if ( i < originalOwner ) /*0x47210a*/
      {
        v16 = originalOwner - 1; /*0x47210c*/
        v17 = i; /*0x47210f*/
        for ( v7->originalOwner = v16; /*0x472116*/
              v17 < v7->originalOwner;
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

  unsigned int *v1; // ecx
  unsigned int *v2; // edi
  unsigned int v3; // eax
  signed int v4; // ebp
  char v5; // bl
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  unsigned int *v12; // eax
  unsigned int *v13; // ecx
  int *v14; // eax
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  unsigned __int8 *v20; // [esp+10h] [ebp-20h]
  signed int v21; // [esp+28h] [ebp-8h]
  void *retaddr; // [esp+30h] [ebp+0h]
  va_list va; // [esp+38h] [ebp+8h] BYREF

  va_start(va, this);
  v2 = v1; /*0x472167*/
  v3 = v1[18]; /*0x47216e*/
  HIBYTE(v20) = *(unsigned char *)(v3 + 131) != 0; /*0x47217b*/
  v4 = v1[13] - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(v2[10] + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( *(unsigned int *)&stru_A8E960.random[528] - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
LABEL_7:
      if ( *(unsigned char *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = v2->overloadCount; /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          LOBYTE(v3) = HIBYTE(v20); /*0x4721d6*/
          if ( HIBYTE(v20) || v5 ) /*0x4721e0*/
          {
            v10 = *(unsigned int *)(v7 + 156); /*0x4721ec*/
            v11 = *(unsigned int *)(v7 + 164); /*0x4721f9*/
            v12 = (unsigned int *)(*(int (**)(int, int, int, void *, int, unsigned __int8 *))(*(unsigned int *)v7 + 132))( /*0x4721fe*/
                                    v7,
                                    v16,
                                    v17,
                                    v18,
                                    v19,
                                    v20);
            v13 = v2->overloadCount; /*0x47220c*/
            HIBYTE(v20) = HIBYTE(v13); /*0x47220f*/
            LOWORD(v20) = *(unsigned short *)(v13[135] + 22265); /*0x472223*/
            BYTE2(v20) = *(unsigned char *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = v12[247] + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (**)(unsigned int *))(*v13 + 176))(v13); /*0x472264*/
            LOBYTE(v3) = DrawTacticalLaserLine(*v14, v14[1], v14[2], (int)va, -1 - v21 % 5, 0, 0); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= *(unsigned int *)&stru_A8E960.random[528] - v9; /*0x4721af*/
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
  unsigned __int8 *v7; // ecx
  int v8; // eax
  char *v9; // esi
  int v13; // ebp
  int v14; // eax
  bool v15; // cc
  unsigned int v16; // esi
  int overloadCount; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // ecx
  CaptureManagerClass **v20; // eax
  CaptureManagerClass *v21; // ecx
  char v22; // al
  int v23; // [esp-4h] [ebp-24h]
  unsigned int v24; // [esp+10h] [ebp-10h]
  unsigned int v25; // [esp+10h] [ebp-10h]
  int v27; // [esp+18h] [ebp-8h]
  bool v29; // [esp+24h] [ebp+4h]

  _EBX = (unsigned char *)a2; /*0x4723b4*/
  v3 = 0; /*0x4723bb*/
  if ( !a2 ) /*0x4723c5*/
    return; /*0x4723c5*/
  if ( (*(unsigned char *)(a2 + 20) & 4) != 0 ) /*0x4723cf*/
  {
    v5 = *(int **)(a2 + 1492); /*0x4723d1*/
    if ( v5 ) /*0x4723d9*/
      TeamClass::LiberateMember_Start(v5, a2, 0xFFFFFFFF, 0); /*0x4723df*/
  }
  v6 = *(FactoryClass **)(a2 + 628); /*0x4723e4*/
  if ( v6 && v6->production[1] ) /*0x4723ee*/
    FactoryClass::CompleteItem(v6); /*0x4723f3*/
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)a2 + 132))(a2) + 1508) ) /*0x472402*/
    CCINIClass::IterateNodes((CCINIClass *)a2, 0); /*0x47240f*/
  v7 = *(unsigned __int8 **)(a2 + 540); /*0x472417*/
  v8 = *(unsigned int *)(this->overloadCount + 540); /*0x472422*/
  v29 = v7 != (unsigned __int8 *)v8; /*0x47242c*/
  if ( v7[492] ) /*0x472431*/
    return; /*0x472439*/
  v24 = 0; /*0x472446*/
  if ( (*(int (**)(int))(*(unsigned int *)(v8 + 36) + 24))(v8 + 36) >= *&dword_8871E0->Color_EBC ) /*0x472459*/
  {
    HouseClass::GetPowerRatio(*(HouseClass **)(this->overloadCount + 540)); /*0x472470*/
    __asm /*0x472475*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x472480*/
    {
      v9 = &dword_8871E0->DynamicVector_E84; /*0x47248f*/
    }
    else
    {
      __asm { fild dword ptr [ebx+6Ch] } /*0x472497*/
      __asm { fstp [esp+20h+var_8] }
      _EAX = (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 132))(_EBX); /*0x4724a2*/
      __asm { fild dword ptr [eax+0A0h] } /*0x4724a8*/
      _ESI = dword_8871E0; /*0x4724ae*/
      __asm /*0x4724b4*/
      {
        fdivr [esp+20h+var_8]
        fcomp dword ptr [esi+0EC0h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x4724c3*/
        v9 = &dword_8871E0->DynamicVector_E68; /*0x4724cd*/
      else
        v9 = &dword_8871E0->DynamicVector_E4C; /*0x4724dd*/
    }
  }
  else
  {
    v9 = &dword_8871E0->DynamicVector_EA0; /*0x47245f*/
  }
  v13 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 100); /*0x4724f7*/
  v27 = 0; /*0x4724f9*/
  if ( v13 <= 0 )
  {
LABEL_22:
    v16 = v24; /*0x472537*/
    (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 132))(_EBX); /*0x47253b*/
    Debug::Log(); /*0x472563*/
    overloadCount = this->overloadCount; /*0x47256f*/
    if ( overloadCount ) /*0x472574*/
    {
      if ( (*(unsigned char *)(overloadCount + 20) & 4) != 0 ) /*0x47257a*/
      {
        v18 = *(unsigned int **)(overloadCount + 1492); /*0x47257c*/
        if ( v18 ) /*0x472584*/
        {
          v19 = (unsigned int *)v18[9]; /*0x472586*/
          if ( v19[48] ) /*0x472589*/
          {
            v25 = v19[48]; /*0x47259a*/
            Debug::Log(); /*0x4725a4*/
            v16 = v25; /*0x4725a9*/
          }
        }
      }
    }
    switch ( v16 )
    {
      case 1u:
        if ( !v29 )
        {
          v20 = (CaptureManagerClass **)this->overloadCount; /*0x4725bd*/
          if ( v20 )
          {
            if ( ((unsigned char)v20[5] & 4) != 0 )
            {
              v21 = v20[373]; /*0x4725ca*/
              if ( v21 )
              {
                v22 = CaptureManagerClass::AddMember(v21, (_EBX[20] & 4) != 0 ? (unsigned int)_EBX : 0);
                break; /*0x4725e0*/
              }
            }
          }
        }
LABEL_34:
        Debug::Log(); /*0x4725e9*/
        (*(void (**)(unsigned char *, int, unsigned int))(*(unsigned int *)_EBX + 488))(_EBX, 15, 0); /*0x4725fe*/
        return; /*0x4725fe*/
      case 2u:
        v22 = (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 828))(_EBX); /*0x472617*/
        break;
      case 3u:
        v22 = (*(int (**)(unsigned char *))(*(unsigned int *)_EBX + 832))(_EBX); /*0x472628*/
        break;
      case 5u:
        return; /*0x472633*/
      default:
        goto LABEL_34; /*0x472633*/
    }
    if ( v22 ) /*0x4725e7*/
      return; /*0x4725e7*/
    goto LABEL_34; /*0x4725e7*/
  }
  while ( v24 != 6 && v3 != *((unsigned int *)v9 + 4) ) /*0x47250f*/
  {
    ++v24; /*0x47251e*/
    v23 = v3++; /*0x472524*/
    v14 = (*(int (**)(char *, int))(*(unsigned int *)v9 + 24))(v9, v23); /*0x472526*/
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
  unsigned int **i; // edi
  unsigned int *v6; // eax
  unsigned int v7; // edx
  int v8; // ecx

  overloadCount = this->overloadCount; /*0x472640*/
  if ( overloadCount->q083 ) /*0x472646*/
    return 1; /*0x472655*/
  v3 = overloadCount->q11C; /*0x472656*/
  if ( v3 && *(unsigned char *)(v3 + 131) ) /*0x472660*/
    return 1; /*0x47266f*/
  v4 = this->originalOwner - 1; /*0x472673*/
  if ( v4 >= 0 ) /*0x472674*/
  {
    for ( i = (unsigned int **)(this->controlNodeCount + 4 * v4); ; --i ) /*0x47267f*/
    {
      v6 = *i; /*0x472682*/
      if ( *(unsigned char *)(**i + 131) ) /*0x472686*/
        return 1; /*0x47268e*/
      v7 = v6[2]; /*0x472690*/
      v8 = v6[4]; /*0x472693*/
      if ( v7 == -1 ) /*0x472699*/
        goto LABEL_12; /*0x472699*/
      if ( (int)(*(unsigned int *)&stru_A8E960.random[528] - v7) < v8 ) /*0x4726a1*/
        break; /*0x4726a1*/
LABEL_13:
      if ( --v4 < 0 ) /*0x4726af*/
        return 0; /*0x4726af*/
    }
    v8 -= *(unsigned int *)&stru_A8E960.random[528] - v7; /*0x4726a3*/
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
  unsigned int *v8; // eax
  unsigned int v9; // ecx
  int v10; // edx
  int controlNodeCapacity; // eax
  int v12; // ecx
  int originalOwner; // eax
  int controlNodeCount; // edx
  int v15; // esi
  unsigned int v16; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+38h] [ebp-14h]
  int v18; // [esp+3Ch] [ebp-10h]
  unsigned int v19; // [esp+44h] [ebp-8h]

  v2 = a2; /*0x472724*/
  v3 = this; /*0x472729*/
  result = AbstractClass::SaveLoad_Prefix_0(this, (int)a2); /*0x472731*/
  v5 = 0; /*0x472736*/
  if ( result >= 0 ) /*0x47273a*/
  {
    if ( v3 ) /*0x472742*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x47274b*/
      CaptureManagerClass::Constructor_473140(&v3->controlNodes, 0, 0); /*0x472757*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4BA4) */  /*0x47275c*/
      *(unsigned int *)v3->CaptureManagerClass_field_30 = 10; /*0x472762*/
      v3->originalOwner = 0; /*0x472769*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a777aa) */  /*0x47276c*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a777aa) */  /*0x472773*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a777aa) */  /*0x47277a*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a777aa) */  /*0x472781*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v3->overloadCount); /*0x472791*/
    v6 = *v2; /*0x472796*/
    this = 0; /*0x4727a1*/
    result = (*(int (**)(int *, CaptureManagerClass **, int, unsigned int))(v6 + 12))(v2, &this, 4, 0); /*0x4727a5*/
    v18 = result; /*0x4727aa*/
    if ( result >= 0 ) /*0x4727ae*/
    {
      v7 = this; /*0x4727b4*/
      v17 = 0; /*0x4727b8*/
      if ( (int)this <= 0 ) /*0x4727be*/
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
          while ( v15 < (int)this ); /*0x4728c4*/
        }
        return v18; /*0x4728c6*/
      }
      else
      {
        while ( 1 ) /*0x4727ca*/
        {
          v8 = (unsigned int *)__2_YAPAXI_Z(0x14u); /*0x4727ca*/
          if ( v8 ) /*0x4727d4*/
          {
            v9 = *(unsigned int *)&stru_A8E960.random[528]; /*0x4727d6*/
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
          result = v2->sub_47280F(&v16, 4, 0); /*0x47280f*/
          v18 = result; /*0x472814*/
          if ( result < 0 ) /*0x472818*/
            break; /*0x472818*/
          v5[1] = (unsigned int)a2; /*0x472825*/
          *v5 = v16; /*0x47282c*/
          v5[2] = *(unsigned int *)&stru_A8E960.random[528]; /*0x472833*/
          v5[3] = v19; /*0x47283e*/
          v5[4] = 0; /*0x472841*/
          controlNodeCapacity = v3->controlNodeCapacity; /*0x472844*/
          if ( v3->originalOwner < controlNodeCapacity /*0x472867*/
            || (BYTE1(v3->owner) || !controlNodeCapacity)
            && (v12 = *(unsigned int *)v3->CaptureManagerClass_field_30, v12 > 0)
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(v3->controlNodes + 8))(
                 &v3->controlNodes,
                 controlNodeCapacity + v12,
                 0) )
          {
            originalOwner = v3->originalOwner; /*0x47286e*/
            controlNodeCount = v3->controlNodeCount; /*0x472871*/
            v3->originalOwner = originalOwner + 1; /*0x472877*/
            *(unsigned int *)(controlNodeCount + 4 * originalOwner) = v5; /*0x47287a*/
          }
          v7 = this; /*0x472881*/
          if ( ++v17 >= (int)this ) /*0x47288c*/
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
  Prefix = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x4728f8*/
  int *v9; // [esp+30h] [ebp+8h]
  v9 = (int *)Prefix; /*0x4728fc*/
  if ( Prefix < 0 ) /*0x472900*/
    return Prefix; /*0x472900*/
  int v5 = *a1; // edx /*0x472905*/
  aP2 = (int)aP0->aP2; /*0x472911*/
  int result; // eax
  result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v5 + 16))(a1, &aP2, 4, 0); /*0x472915*/
  if ( result < 0 ) /*0x47291a*/
    return result; /*0x47291a*/
  int v7 = 0; // ebp /*0x472920*/
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
int _DynamicVectorClass_PAUControlNode::Capture(unsigned int * a2)
{


  int m_10; // edx
  m_10 = this->Count; /*0x472d70*/
  int result = 0; // eax /*0x472d73*/
  if ( m_10 <= 0 ) /*0x472d78*/
    return -1; /*0x472d8f*/
  unsigned int *i; // ecx
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x472d7e*/
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

  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x4729cd) */
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x4729d3) */
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x4729da) */
  /* X11: ptr_0 install elided (implicit via CaptureManagerClass virtuals 0x4729e1) */
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
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x472a2b*/
  if ( controlNodeCount && (Block->u8_101) ) /*0x472a36*/
  {
    operator delete((controlNodeCount)); /*0x472a3e*/
    Block->controlNodeCount = 0; /*0x472a46*/
  }
  (Block->u8_101) = 0; /*0x472a4f*/
  Block->controlNodeCapacity = 0; /*0x472a53*/
  ((AbstractClass *)Block)->DTOR(); /*0x472a5a*/
  if ( (a2 & 1) != 0 ) /*0x472a64*/
    operator delete((Block)); /*0x472a67*/
  return &Block->ptr_0; /*0x472a71*/
}
} // namespace gamemd

// 0x472AB0
namespace gamemd {
unsigned int _DynamicVectorClass_PAUControlNode::LoadTypeData(int a2)
{

  if ( this->IsInitialized ) /*0x472ab0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x472ac5*/
  else
    return 0; /*0x472ab7*/

}
} // namespace gamemd

// 0x472B40
namespace gamemd {
char _VectorClass_PAUControlNode::AddRef(int a2)
{


  int m_8; // esi
  m_8 = this->Capacity; /*0x472b42*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x472b4d*/
  {
    int v3 = 0; // edx /*0x472b4f*/
    if ( m_8 <= 0 ) /*0x472b53*/
      return 1; /*0x472b73*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->Items); /*0x472b55*/
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
char _VectorClass_PAUControlNode::SetCapacity(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x472b8c*/
  {
    this->IsInitialized = 0; /*0x472b96*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x472b9c*/
      v4 = a3; /*0x472bb2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x472bae*/
    this->IsInitialized = 1; /*0x472bb6*/
    if ( v4 ) /*0x472bba*/
    {
      if ( *&this->Items ) /*0x472bc5*/
      {
        int m_8 = this->Capacity; // ecx /*0x472bcc*/
        if ( a2 < m_8 ) /*0x472bd1*/
          m_8 = a2; /*0x472bd3*/
        int i; // eax
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x472bd9*/
          ++i; /*0x472bde*/
        if ( this->IsAllocated ) /*0x472beb*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x472bf6*/
          *&this->Items = 0; /*0x472bfe*/
        }
      }
      *&this->Items = v4; /*0x472c07*/
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
    (*(void (**)(_VectorClass_PAUControlNode *))(*(unsigned int *)this->ptr_0 + 12))(this); /*0x472c22*/
    return 1; /*0x472c28*/
  }

}
} // namespace gamemd

// 0x472C30
namespace gamemd {
void _VectorClass_PAUControlNode::Destroy()
{
  if ( *&this->Items && this->IsAllocated ) /*0x472c3d*/
  {
    operator delete((*&this->Items)); /*0x472c43*/
    *&this->Items = 0; /*0x472c4b*/
  }
  this->IsAllocated = 0; /*0x472c4e*/
  this->Capacity = 0; /*0x472c51*/
}
} // namespace gamemd

// 0x472C60
namespace gamemd {
int _VectorClass_PAUControlNode::IndexOf(unsigned int * a2)
{


  if ( !this->IsInitialized ) /*0x472c60*/
    return 0; /*0x472c68*/
  int m_8 = this->Capacity; // edx /*0x472c6e*/
  int result = 0; // eax /*0x472c71*/
  if ( m_8 <= 0 ) /*0x472c75*/
    return -1; /*0x472c8c*/
  unsigned int *i; // ecx
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x472c7b*/
  {
    if ( ++result >= m_8 ) /*0x472c8a*/
      return -1; /*0x472c8a*/
  }
  return result; /*0x472c6a*/

}
} // namespace gamemd

// 0x472CA0
namespace gamemd {
unsigned int _VectorClass_PAUControlNode::PointerToIndex(int a2)
{

  if ( this->IsInitialized ) /*0x472ca0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x472cb5*/
  else
    return 0; /*0x472ca7*/

}
} // namespace gamemd

// 0x472CC0
namespace gamemd {
char _DynamicVectorClass_PAUControlNode::Release(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x472ccc*/
  {
    this->IsInitialized = 0; /*0x472cd2*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x472cd8*/
      v4 = a3; /*0x472cee*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x472cea*/
    this->IsInitialized = 1; /*0x472cf2*/
    if ( !v4 ) /*0x472cf6*/
      return 0; /*0x472d6a*/
    if ( *&this->Items ) /*0x472cf8*/
    {
      int m_8 = this->Capacity; // ecx /*0x472cff*/
      if ( a2 < m_8 ) /*0x472d04*/
        m_8 = a2; /*0x472d06*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x472d0c*/
        ++i; /*0x472d11*/
      if ( this->IsAllocated ) /*0x472d1e*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x472d29*/
        *&this->Items = 0; /*0x472d31*/
      }
    }
    *&this->Items = v4; /*0x472d3a*/
    this->Capacity = a2; /*0x472d42*/
    this->IsAllocated = a3 == 0; /*0x472d45*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUControlNode *))(*(unsigned int *)this->ptr_0 + 12))(this); /*0x472d4e*/
  }
  int v7 = this->Capacity; // eax /*0x472d51*/
  if ( v7 < this->Count ) /*0x472d59*/
    this->Count = v7; /*0x472d5b*/
  return 1; /*0x472d5e*/

}
} // namespace gamemd

// 0x473000
namespace gamemd {
unsigned int * _VectorClass_PAUControlNode::Constructor_VectorClass_ControlNode___(char a2)
{

  void *v3 = *&this->Items; // eax /*0x473003*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x473006*/
  if ( v3 && this->IsAllocated ) /*0x473010*/
  {
    operator delete((v3)); /*0x473018*/
    *&this->Items = 0; /*0x473020*/
  }
  this->IsAllocated = 0; /*0x47302b*/
  this->Capacity = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    operator delete((this)); /*0x47303b*/
  return (unsigned int *)this; /*0x473045*/
}
} // namespace gamemd

// 0x473050
namespace gamemd {
DynamicVector * _DynamicVectorClass_PAUControlNode::QueryInterface(char a2)
{

  void *v3 = *&this->Items; // eax /*0x473053*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x473056*/
  if ( v3 && this->IsAllocated ) /*0x473060*/
  {
    operator delete((v3)); /*0x473068*/
    *&this->Items = 0; /*0x473070*/
  }
  this->IsAllocated = 0; /*0x47307b*/
  this->Count = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    operator delete((this)); /*0x47308b*/
  return (DynamicVector *)this; /*0x473095*/
}
} // namespace gamemd

// 0x473140
namespace gamemd {
unsigned int * _VectorClass_PAUControlNode::Constructor_473140(int a2, int a3)
{

  this->Items = 0; /*0x47314b*/
  this->Capacity = a2; /*0x47314e*/
  this->IsInitialized = 1; /*0x473151*/
  this->IsAllocated = 0; /*0x473155*/
  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7E8500) */  /*0x473158*/
  if ( a2 ) /*0x47315e*/
  {
    if ( a3 ) /*0x473166*/
    {
      this->Items = (void *)a3; /*0x473168*/
      return &this->ptr_0; /*0x47316e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x47317d*/
    this->IsAllocated = 1; /*0x473180*/
  }
  return &this->ptr_0; /*0x47316d*/

}
} // namespace gamemd

// 0x6EA4F0
namespace gamemd {
char CaptureManagerClass::AddMember(TechnoClass * aP1, void *a2, void *a3)
{
  return (a2)->AddMember(1); /*0x6ea4fc*/
}
} // namespace gamemd
