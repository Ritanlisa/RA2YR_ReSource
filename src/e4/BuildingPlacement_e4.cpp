// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x4FB840
namespace gamemd {
void* BuildingPlacement::Activate(int a2, unsigned int * a3)
{

  int v4; // edi
  unsigned int *v5; // esi
  int v6; // eax
  const void *v7; // eax
  unsigned int *v8; // eax

  if ( (void *)this != HouseClass_Player ) /*0x4fb84c*/
    return 0; /*0x4fb84c*/
  if ( g_abs_880990 ) /*0x4fb859*/
    return 0; /*0x4fb859*/
  v4 = a2; /*0x4fb85f*/
  if ( !a2 ) /*0x4fb865*/
    return 0; /*0x4fb865*/
  v5 = a3; /*0x4fb86b*/
  if ( !a3 ) /*0x4fb871*/
    return 0; /*0x4fb919*/
  MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4fb877*/
  BuildingClass::TogglePower2(&g_abs_87F7E8, 0); /*0x4fb883*/
  BuildingClass::TogglePower(&g_abs_87F7E8, 0); /*0x4fb88f*/
  g_abs_88099A = 0; /*0x4fb894*/
  g_abs_88099B = 0; /*0x4fb89b*/
  g_abs_88099C = 0; /*0x4fb8a2*/
  g_abs_8809A0 = -1; /*0x4fb8a9*/
  v6 = v5[328]; /*0x4fb8b3*/
  g_abs_88098C = (int)v5; /*0x4fb8b9*/
  g_abs_880990 = v6; /*0x4fb8bf*/
  g_abs_880994 = *((unsigned int *)this + 12); /*0x4fb8c7*/
  v7 = (const void *)(*(int (**)(unsigned int *, int))(*v5 + 264))(v5, 1); /*0x4fb8d3*/
  Mouse::SetBounds((int)&g_abs_87F7E8, v7); /*0x4fb8df*/
  v8 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)v4 + 440))(v4, &a2); /*0x4fb8ed*/
  Tactical::MouseMove((int)&g_abs_87F7E8, &a3, v8); /*0x4fb8fe*/
  (*(void (**)(int, int))(*(unsigned int *)v4 + 292))(v4, 2); /*0x4fb909*/
  return 1; /*0x4fb90f*/

}
} // namespace gamemd
// 0x54C550
namespace gamemd {
VectorClass_flat * * BuildingPlacement::ProcessBuildingPlacementAction()
{

  unsigned int *v2; // ebp
  unsigned int *v3; // eax
  int v4; // ecx
  unsigned int *v5; // edi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int *v8; // eax
  int v9; // ebx
  void *NeighbourContent; // eax
  unsigned char *v11; // ecx
  char *v12; // eax
  unsigned int *v13; // eax
  unsigned char *v14; // ecx
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  unsigned int *v19; // ecx
  int v20; // ecx
  unsigned int *v21; // edi
  int DeployDir; // ebx
  unsigned int *Value; // eax
  int16_t v24; // cx
  int16_t v25; // dx
  int v26; // ecx
  int v27; // edi
  int *v28; // eax
  unsigned char *v29; // ecx
  int *v30; // eax
  int v31; // edi
  int *v32; // edx
  int v33; // ecx
  unsigned char *v34; // ecx
  unsigned char *v35; // ecx
  int v36; // eax
  int v37; // edi
  unsigned int *v38; // eax
  int v39; // ecx
  unsigned int *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  int v45; // [esp+44h] [ebp-28h]
  int v46; // [esp+48h] [ebp-24h]
  char v47; // [esp+5Bh] [ebp-11h]
  int v48; // [esp+5Ch] [ebp-10h] BYREF
  int v49; // [esp+60h] [ebp-Ch] BYREF
  int v50; // [esp+64h] [ebp-8h]
  int v51; // [esp+68h] [ebp-4h]

  v2 = (unsigned int *)((char *)this + 64); /*0x54c55e*/
  v3 = Coord::To_Cell(&g_abs_87F7E8, (unsigned int *)((char *)this + 64)); /*0x54c562*/
  v4 = *((unsigned int *)this + 3); /*0x54c567*/
  v5 = v3; /*0x54c56a*/
  if ( !*(unsigned char *)(v4 + 1709) ) /*0x54c56c*/
  {
    v6 = v3[59]; /*0x54c57a*/
    if ( (v6 == 2 || v6 == 6) /*0x54c5a6*/
      && *(unsigned int *)(v4 + 180) != 7
      && (*(int (**)(int))(*(unsigned int *)v4 + 388))(v4) != 7 )
    {
      if ( ObjectClass::HasLinkedObject(*((unsigned int *)this + 3)) ) /*0x54c5b5*/
      {
        v7 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, 7); /*0x54c5d6*/
        v8 = (unsigned int *)(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 444))(*((unsigned int *)this + 3)); /*0x54c5da*/
        v9 = **(unsigned int **)((char *)this + 12); /*0x54c5e6*/
        NeighbourContent = Cell::GetNeighbourContent(v8, v7); /*0x54c5ea*/
        (*(void (**)(unsigned int, void *, int))(v9 + 1152))(*((unsigned int *)this + 3), NeighbourContent, 1); /*0x54c5f3*/
        v11 = *(unsigned char **)((char *)this + 12); /*0x54c5f9*/
        IDA_LOBYTE(v9) = v11[116]; /*0x54c600*/
        (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v11 + 292))(v11, 0); /*0x54c603*/
        v12 = *(char **)((char *)this + 12); /*0x54c609*/
        v12[116] = v9; /*0x54c60d*/
        *((unsigned int *)this + 20) = 3; /*0x54c610*/
      }
      else
      {
        v13 = (unsigned int *)(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 444))(*((unsigned int *)this + 3)); /*0x54c624*/
        CellClass::AttachObject(v13, v46); /*0x54c62c*/
        v14 = *(unsigned char **)((char *)this + 12); /*0x54c631*/
        v15 = v14[116]; /*0x54c638*/
        IDA_LOBYTE(v12) = (*(int (**)(unsigned char *, unsigned int))(*(unsigned int *)v14 + 292))(v14, 0); /*0x54c63b*/
        *(unsigned char *)(*((unsigned int *)this + 3) + 116) = v15; /*0x54c645*/
        v16 = *((unsigned int *)this + 11); /*0x54c648*/
        *((unsigned int *)this + 20) = 2; /*0x54c64b*/
        *((unsigned int *)this + 32) = v16; /*0x54c652*/
      }
      return (char)v12; /*0x54c61d*/
    }
    v48 = (*(int (**)(unsigned int, unsigned int *, int, int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 428))( /*0x54c675*/
            *((unsigned int *)this + 3),
            v5,
            -1,
            -1,
            0,
            1);
    IDA_LOBYTE(v17) = Input::OffsetToDirection((unsigned int *)((char *)this + 64)); /*0x54c679*/
    v18 = v17; /*0x54c684*/
    if ( (uint8_t)BuildingPlacement::IsPlacementFlagSet(v17, IDA_BYTE1(v5[80]) & 1) /*0x54c699*/
      || (v47 = 0, *((unsigned char *)this + 144)) )
    {
      v47 = 1; /*0x54c6a8*/
    }
    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1 && !v18 ) /*0x54c6bc*/
      v47 = 1; /*0x54c6be*/
    v19 = *(unsigned int **)((char *)this + 12); /*0x54c6c2*/
    if ( v19[45] != 7 && (*(int (**)(unsigned int *))(*v19 + 388))(v19) != 7 ) /*0x54c6d9*/
    {
      if ( !v47 /*0x54c70c*/
        || (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (unsigned int *)((char *)this + 64)) + 80) & 0x100) == 0
        && (v48 > 2 || v48 == 2 && !*((unsigned char *)this + 144)) )
      {
        IDA_LOBYTE(v12) = (*(int (**)(int))(*((unsigned int *)this + 1) + 72))((char *)this + 4); /*0x54ca43*/
        return (char)v12; /*0x54ca4d*/
      }
      if ( !*((unsigned char *)this + 144) ) /*0x54c71a*/
      {
        v20 = *((unsigned int *)this + 3); /*0x54c724*/
        *((unsigned char *)this + 144) = 1; /*0x54c727*/
        (*(void (**)(int, int))(*(unsigned int *)v20 + 240))(v20, (char *)this + 64); /*0x54c731*/
      }
    }
  }
  v21 = *(unsigned int **)((char *)this + 12); /*0x54c737*/
  if ( v21 ) /*0x54c73c*/
  {
    if ( (*(int (**)(unsigned int))(*v21 + 44))(*((unsigned int *)this + 3)) == 1 ) /*0x54c748*/
    {
      if ( *(unsigned char *)(v21[433] + 3603) ) /*0x54c750*/
      {
        if ( !*(unsigned char *)(*((unsigned int *)this + 3) + 1709) ) /*0x54c75d*/
        {
          DeployDir = g_abs_8871E0->DeployDir; /*0x54c776*/
          Value = ProgressTimer::GetValue((unsigned short *)((char *)this + 84), &v48); /*0x54c77a*/
          IDA_LOBYTE(v24) = 0; /*0x54c77f*/
          IDA_HIBYTE(v24) = DeployDir; /*0x54c781*/
          if ( *(unsigned short *)Value != v24 ) /*0x54c786*/
          {
            IDA_LOBYTE(v25) = 0; /*0x54c78d*/
            IDA_HIBYTE(v25) = g_abs_8871E0->DeployDir; /*0x54c793*/
            IDA_LOWORD(v48) = v25; /*0x54c799*/
            FacingClass::Update((char *)((char *)this + 84), &v48); /*0x54c79e*/
          }
        }
      }
    }
  }
  v26 = *((unsigned int *)this + 3); /*0x54c7a3*/
  *((unsigned int *)this + 32) = 0; /*0x54c7a6*/
  v27 = (*(int (**)(int))(*(unsigned int *)v26 + 456))(v26); /*0x54c7b8*/
  v12 = *(char **)((char *)this + 12); /*0x54c7ba*/
  if ( !v12[140] ) /*0x54c7bd*/
  {
    v28 = (int *)(v12 + 156); /*0x54c7c7*/
    v49 = *v28; /*0x54c7ce*/
    v50 = v28[1]; /*0x54c7da*/
    v51 = v28[2]; /*0x54c7e6*/
    v12 = (char *)Coord::To_Cell(&g_abs_87F7E8, &v49); /*0x54c7ea*/
    if ( (*((unsigned int *)v12 + 80) & 0x100) != 0 ) /*0x54c7f8*/
    {
      IDA_LOBYTE(v12) = dword_ABC5DC; /*0x54c7fa*/
      if ( v27 >= dword_ABC5DC ) /*0x54c801*/
        v27 -= dword_ABC5DC; /*0x54c803*/
    }
  }
  if ( !v27 )
  {
    (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(*((unsigned int *)this + 3), 0, 0); /*0x54c814*/
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 0); /*0x54c820*/
    v29 = *(unsigned char **)((char *)this + 12); /*0x54c826*/
    if ( !v29[1709] ) /*0x54c829*/
      (*(void (**)(unsigned char *, int))(*(unsigned int *)v29 + 436))(v29, (char *)this + 64); /*0x54c836*/
    v30 = (int *)(*((unsigned int *)this + 3) + 156); /*0x54c83f*/
    v49 = *v30; /*0x54c848*/
    v50 = v30[1]; /*0x54c84f*/
    v31 = v30[2]; /*0x54c853*/
    v49 = *v30; /*0x54c858*/
    v50 = v30[1]; /*0x54c863*/
    v51 = v30[2]; /*0x54c870*/
    if ( v31 > Cell::GetGroundHeight(&v49) ) /*0x54c87b*/
    {
      v32 = (int *)(*((unsigned int *)this + 3) + 156); /*0x54c880*/
      v49 = *v32; /*0x54c888*/
      v50 = v32[1]; /*0x54c894*/
      v51 = v32[2]; /*0x54c8a0*/
      if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v49) + 80) & 0x100) != 0 ) /*0x54c8b2*/
        *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 1; /*0x54c8b7*/
    }
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1); /*0x54c8c5*/
    *v2 = dword_ABC5A8; /*0x54c8d2*/
    *((unsigned int *)this + 17) = dword_ABC5AC; /*0x54c8db*/
    v33 = *((unsigned int *)this + 3); /*0x54c8e4*/
    *((unsigned int *)this + 18) = dword_ABC5B0; /*0x54c8e7*/
    *((unsigned char *)this + 76) = 0; /*0x54c8ea*/
    (*(void (**)(int, int))(*(unsigned int *)v33 + 396))(v33, 2); /*0x54c8f0*/
    (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(*((unsigned int *)this + 3), 0, 1); /*0x54c8ff*/
    v34 = *(unsigned char **)((char *)this + 12); /*0x54c905*/
    IDA_LOBYTE(v12) = v34[144]; /*0x54c908*/
    if ( (unsigned char)v12 )
    {
      IDA_LOBYTE(v12) = v34[129]; /*0x54c916*/
      if ( !(unsigned char)v12 )
      {
        IDA_LOBYTE(v12) = v34[141]; /*0x54c924*/
        if ( !(unsigned char)v12 )
        {
          (*(void (**)(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v34 + 1164))(v34, 0, 0, 0, 0); /*0x54c93c*/
          v35 = *(unsigned char **)((char *)this + 12); /*0x54c942*/
          if ( v35[144] ) /*0x54c945*/
            (*(void (**)(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v35 + 1160))( /*0x54c95b*/
              v35,
              0,
              0,
              0,
              0,
              0);
          v36 = *((unsigned int *)this + 3); /*0x54c961*/
          if ( *(unsigned char *)(v36 + 144) ) /*0x54c964*/
          {
            v49 = *(unsigned int *)(v36 + 156); /*0x54c978*/
            v50 = *(unsigned int *)(v36 + 160); /*0x54c97f*/
            v51 = *(unsigned int *)(v36 + 164); /*0x54c986*/
            MapClass::RevealArea2(&v49, *(unsigned int *)(v36 + 608) - 3, *(unsigned int *)(v36 + 608) + 3, 0); /*0x54c9a2*/
          }
          v48 = *((unsigned int *)this + 3); /*0x54c9ac*/
          v37 = v48; /*0x54c9aa*/
          if ( *(unsigned int *)((*(int (**)(void))(*(unsigned int *)v48 + 444))() + 224) == v37 ) /*0x54c9be*/
          {
            v38 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v37 + 444))(v37); /*0x54c9c6*/
            CellClass::AttachObject(v38, 0); /*0x54c9ce*/
          }
          GadgetGrid::RemoveItem(g_abs_887888, *((unsigned int *)this + 3)); /*0x54c9dc*/
          v39 = *((unsigned int *)this + 3); /*0x54c9e1*/
          *((unsigned int *)this + 20) = 0; /*0x54c9e4*/
          v45 = v39; /*0x54c9eb*/
          v40 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v39 + 444))(v39); /*0x54c9ee*/
          CrateClass::ProcessPickup(v40, v45); /*0x54c9f6*/
          v12 = *(char **)((char *)this + 12); /*0x54c9fb*/
          v12[1710] = 1; /*0x54c9fe*/
          *(unsigned char *)(*((unsigned int *)this + 3) + 1063) = 0; /*0x54ca08*/
          *(unsigned char *)(*((unsigned int *)this + 3) + 1061) = 0; /*0x54ca12*/
          v41 = *((unsigned int *)this + 3); /*0x54ca19*/
          *((unsigned char *)this + 144) = 0; /*0x54ca1e*/
          if ( v41 )
          {
            v12 = (char *)(*(int (**)(int))(*(unsigned int *)v41 + 44))(v41); /*0x54ca29*/
            if ( v12 == (char *)1 )
            {
              v42 = *((unsigned int *)this + 3); /*0x54ca31*/
              if ( v42 )
                v43 = (*(int (**)(unsigned int))(*(unsigned int *)v42 + 44))(*((unsigned int *)this + 3)) == 1 ? v42 : 0;
              else
                v43 = 0; /*0x54ca38*/
              v12 = (char *)(*(int (**)(int))(*(unsigned int *)v43 + 132))(v43); /*0x54ca62*/
              if ( v12[1709] ) /*0x54ca68*/
              {
                v12 = *(char **)((char *)this + 12); /*0x54ca72*/
                v12[308] = 0; /*0x54ca75*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v12; /*0x54c60c*/

}
} // namespace gamemd
// 0x594F40
namespace gamemd {
unsigned int * BuildingPlacement::SelectBuildingPlacementCells(int a2)
{

  int v2; // esi
  int v3; // eax
  int v4; // ebx
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  int v8; // edx
  unsigned int *v9; // edi
  int v10; // ecx
  int v11; // ebx
  int v12; // esi
  double v13; // st7
  unsigned int *v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // eax
  unsigned int *v21; // ebx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  int v27; // esi
  double v28; // st7
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // [esp+14h] [ebp-34h]
  int v34; // [esp+14h] [ebp-34h]
  unsigned int *v35; // [esp+18h] [ebp-30h]
  int v36; // [esp+1Ch] [ebp-2Ch]
  int v37; // [esp+20h] [ebp-28h]
  double v38; // [esp+20h] [ebp-28h]
  int v39; // [esp+2Ch] [ebp-1Ch]
  int v40; // [esp+2Ch] [ebp-1Ch]
  int v41; // [esp+30h] [ebp-18h]
  int v42; // [esp+30h] [ebp-18h]
  int v43; // [esp+34h] [ebp-14h]
  int v44; // [esp+34h] [ebp-14h]
  int v45; // [esp+38h] [ebp-10h]
  int v46; // [esp+38h] [ebp-10h]
  int v47; // [esp+3Ch] [ebp-Ch]
  unsigned int *v48; // [esp+3Ch] [ebp-Ch]
  double v49; // [esp+40h] [ebp-8h]
  double v50; // [esp+40h] [ebp-8h]

  v2 = *((char *)this + 8); /*0x594f51*/
  v49 = -1.0; /*0x594f5f*/
  v41 = -1; /*0x594f6f*/
  v3 = Math::RoundToInt(((double)dword_ABE030 * 0.01 * 12.0 / (double)dword_ABE028 + 2.0) * (double)v2); /*0x594f8d*/
  v4 = a2; /*0x594f92*/
  v36 = v3; /*0x594f99*/
  if ( !v2 && *(int *)(a2 + 16) > 0 ) /*0x594fa4*/
  {
    v36 = *(unsigned int *)(a2 + 16); /*0x594fa6*/
    v3 = v36; /*0x594faa*/
  }
  if ( v3 > *(unsigned int *)(a2 + 16) || !v3 ) /*0x594fb5*/
  {
    if ( !v2 ) /*0x594fb9*/
      return 0; /*0x594fc3*/
    v36 = *(unsigned int *)(a2 + 16); /*0x594fc6*/
  }
  v6 = RA2_OPNEW(0x18u); /*0x594fcc*/
  v7 = v6; /*0x594fd1*/
  if ( v6 ) /*0x594fd8*/
  {
    VectorClass::CellConstructor(v6, 0, 0); /*0x594fde*/
    *v7 = &vt_DynamicVectorClass_Cell; /*0x594fe3*/
    v7[5] = 10; /*0x594fe9*/
    v7[4] = 0; /*0x594ff0*/
    v35 = v7; /*0x594ff3*/
  }
  else
  {
    v35 = 0; /*0x594ff9*/
    v7 = 0; /*0x594ffd*/
  }
  v8 = *(unsigned int *)(a2 + 16); /*0x594fff*/
  v33 = 0; /*0x595002*/
  v9 = g_MapTileArray; /*0x595006*/
  if ( v8 - 1 > 0 )
  {
    while ( 1 )
    {
      v10 = *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * v33); /*0x595025*/
      if ( v9 ) /*0x59502c*/
        v39 = v9[20 * (int16_t)v10 + 14 + 20 * unk_89C2DC * IDA_SHIWORD(v10)]; /*0x595053*/
      else
        v39 = -1; /*0x59502e*/
      v11 = v33 + 1; /*0x59505b*/
      if ( v33 + 1 < v8 )
      {
        v43 = (int16_t)v10; /*0x595072*/
        v45 = IDA_SHIWORD(v10); /*0x595076*/
        do
        {
          v37 = *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v11); /*0x59508b*/
          if ( v9 ) /*0x59509d*/
            v12 = v9[20 * (int16_t)v37 + 14 + 20 * unk_89C2DC * IDA_SHIWORD(v37)]; /*0x5950b3*/
          else
            v12 = -1; /*0x59509f*/
          v13 = Math::Sqrt((double)((v43 - (int16_t)v37) * (v43 - (int16_t)v37)
                                  + (v45 - IDA_SHIWORD(v37)) * (v45 - IDA_SHIWORD(v37))))
              + (double)(v39 != v12 ? 0x14 : 0);
          if ( v11 && v13 > v49 ) /*0x5950fd*/
          {
            v49 = v13; /*0x595103*/
            v41 = v33; /*0x595107*/
          }
          v9 = g_MapTileArray; /*0x595112*/
          ++v11; /*0x595118*/
        }
        while ( v11 < *(unsigned int *)(a2 + 16) );
        v11 = v33 + 1; /*0x595122*/
        v7 = v35; /*0x595126*/
      }
      v33 = v11; /*0x59512d*/
      v8 = *(unsigned int *)(a2 + 16); /*0x595131*/
      if ( v11 >= v8 - 1 ) /*0x595139*/
        break; /*0x595139*/
      v4 = a2; /*0x595019*/
    }
    if ( v41 != -1 ) /*0x595146*/
    {
      v14 = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v41); /*0x595155*/
      v15 = v7[2]; /*0x595158*/
      if ( v7[4] < v15 ) /*0x59515d*/
        goto LABEL_35; /*0x59515d*/
      if ( !*((unsigned char *)v7 + 13) && v15 ) /*0x595168*/
        goto LABEL_37; /*0x595168*/
      v16 = v7[5]; /*0x59516a*/
      if ( v16 <= 0 ) /*0x59516f*/
        goto LABEL_37; /*0x59516f*/
      if ( (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v7 + 8))(v7, v15 + v16, 0) ) /*0x59517a*/
      {
LABEL_35:
        v17 = v7[4]; /*0x595181*/
        v18 = v7[1]; /*0x595184*/
        v7[4] = v17 + 1; /*0x59518a*/
        *(unsigned int *)(v18 + 4 * v17) = *v14; /*0x59518f*/
      }
      v9 = g_MapTileArray; /*0x595192*/
LABEL_37:
      v4 = a2; /*0x595198*/
      goto LABEL_38; /*0x595198*/
    }
    v4 = a2; /*0x5951d7*/
  }
  if ( !*(unsigned int *)(v4 + 16) )
  {
LABEL_38:
    v19 = v7[4]; /*0x59519b*/
    if ( v19 < v36 )
    {
      while ( 1 )
      {
        v50 = -1.0; /*0x5951ad*/
        v40 = -1; /*0x5951bf*/
        v34 = 0; /*0x5951c7*/
        if ( *(int *)(v4 + 16) > 0 )
        {
          while ( 1 )
          {
            v25 = *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * v34); /*0x595244*/
            if ( v9 ) /*0x595250*/
              v42 = v9[20 * (int16_t)v25 + 14 + 20 * unk_89C2DC * IDA_SHIWORD(v25)]; /*0x595275*/
            else
              v42 = -1; /*0x595252*/
            v26 = 0; /*0x595279*/
            v38 = 9999999.0; /*0x59527b*/
            if ( v19 > 0 )
            {
              v47 = (int16_t)v25; /*0x595299*/
              v44 = IDA_SHIWORD(v25); /*0x59529d*/
              do
              {
                v46 = *(unsigned int *)(v35[1] + 4 * v26); /*0x5952b3*/
                if ( v9 ) /*0x5952c5*/
                  v27 = v9[20 * (int16_t)v46 + 14 + 20 * unk_89C2DC * IDA_SHIWORD(v46)]; /*0x5952db*/
                else
                  v27 = -1; /*0x5952c7*/
                v28 = Math::Sqrt((double)((v47 - (int16_t)v46) * (v47 - (int16_t)v46)
                                        + (v44 - IDA_SHIWORD(v46)) * (v44 - IDA_SHIWORD(v46))))
                    + (double)(v42 != v27 ? 0x14 : 0);
                if ( v28 < v38 ) /*0x595321*/
                  v38 = v28; /*0x595323*/
                v9 = g_MapTileArray; /*0x59532f*/
                ++v26; /*0x595335*/
                v19 = v35[4]; /*0x595336*/
              }
              while ( v26 < v19 );
            }
            if ( v38 > v50 ) /*0x59534e*/
            {
              v50 = v38; /*0x595358*/
              v40 = v34; /*0x595364*/
            }
            if ( ++v34 >= *(unsigned int *)(a2 + 16) ) /*0x595379*/
              break; /*0x595379*/
            v4 = a2; /*0x595238*/
          }
          v7 = v35; /*0x59537f*/
          v4 = a2; /*0x595383*/
        }
        v29 = v7[2]; /*0x59538f*/
        v48 = (unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * v40); /*0x595392*/
        if ( v7[4] < v29 ) /*0x59539b*/
          goto LABEL_70; /*0x59539b*/
        if ( !*((unsigned char *)v7 + 13) && v29 ) /*0x5953a6*/
          goto LABEL_72; /*0x5953a6*/
        v30 = v7[5]; /*0x5953a8*/
        if ( v30 <= 0 ) /*0x5953ad*/
          goto LABEL_72; /*0x5953ad*/
        if ( (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v7 + 8))(v7, v29 + v30, 0) ) /*0x5953b8*/
        {
LABEL_70:
          v31 = v7[4]; /*0x5953bf*/
          v32 = v7[1]; /*0x5953c2*/
          v7[4] = v31 + 1; /*0x5953c8*/
          *(unsigned int *)(v32 + 4 * v31) = *v48; /*0x5953d1*/
        }
        v9 = g_MapTileArray; /*0x5953d4*/
LABEL_72:
        v19 = v7[4]; /*0x5953da*/
        if ( v19 >= v36 ) /*0x5953e3*/
          return v7; /*0x5953e3*/
      }
    }
    return v7; /*0x5951a4*/
  }
  v20 = v7[2]; /*0x5951e1*/
  v21 = *(unsigned int **)(v4 + 4); /*0x5951e7*/
  if ( v7[4] < v20 /*0x595211*/
    || (*((unsigned char *)v7 + 13) || !v20)
    && (v22 = v7[5], v22 > 0)
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v7 + 8))(v7, v20 + v22, 0) )
  {
    v23 = v7[4]; /*0x59521c*/
    v24 = v7[1]; /*0x59521f*/
    v7[4] = v23 + 1; /*0x595225*/
    *(unsigned int *)(v24 + 4 * v23) = *v21; /*0x59522a*/
    return v7; /*0x595235*/
  }
  return v7; /*0x594fbd*/

}
} // namespace gamemd
// 0x500200
namespace gamemd {
unsigned int * BuildingPlacement::FindPosition(int * a0, IUnknown * aP1, IUnknown a3)
{

  int *v3; // ecx
  IUnknown *v4; // esi
  int *v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int *AttackCoords; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // esi
  IUnknown *TileIndex; // eax
  int v14; // ecx
  unsigned short v16[2]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  unsigned char v18[12]; // [esp+14h] [ebp-10h] BYREF
  int v19; // [esp+20h] [ebp-4h]

  v4 = aP1; /*0x500205*/
  v5 = v3; /*0x50020a*/
  v6 = (*(int (**)(IUnknown *))(aP1->field_0 + 732))(aP1); /*0x50021a*/
  v7 = (*(int (**)(IUnknown *))(v4->field_0 + 728))(v4) + v6; /*0x500222*/
  if ( (*(int (**)(IUnknown *))(v4->field_0 + 724))(v4) + v7 ) /*0x50022e*/
    v8 = Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)4); /*0x50024b*/
  else
    v8 = 0; /*0x500237*/
  AttackCoords = HouseClass::GenerateAttackCoords(v5, (MouseClass *)&aP1, v8); /*0x500258*/
  v10 = &v4->field_9C; /*0x500265*/
  v17 = *AttackCoords; /*0x500267*/
  v11 = v4->field_9C; /*0x500271*/
  v16[0] = 0; /*0x500276*/
  v12 = *(unsigned int *)v4->__pad_A0; /*0x50027b*/
  v16[1] = 0; /*0x50027e*/
  v19 = v10[2]; /*0x500286*/
  IDA_LOWORD(aP1) = v11 / 256; /*0x500296*/
  IDA_HIWORD(aP1) = v12 / 256; /*0x5002b2*/
  TileIndex = (IUnknown *)MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1, 0, 0); /*0x5002cf*/
  v14 = *LayerClass::Pathfinding_Find( /*0x5002ea*/
           (IUnknown *)&stru_87C374.__pad_14B0[8132],
           (IUnknown *)v18,
           (IUnknown *)v18,
           (IUnknown *)&v17,
           (IUnknown *)1,
           TileIndex,
           0,
           0,
           (IUnknown *)1,
           (IUnknown *)1,
           0,
           0,
           0,
           (IUnknown *)1,
           (IUnknown *)v16,
           0,
           0);
  *a0 = v14; /*0x5002f2*/
  return a0; /*0x5002f0*/

}
} // namespace gamemd