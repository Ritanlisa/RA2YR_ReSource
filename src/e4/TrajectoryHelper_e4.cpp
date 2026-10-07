// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TrajectoryHelper_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4CC100
namespace gamemd {
unsigned int * TrajectoryHelper::FindFirstObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{

  int v5; // esi
  int v6; // edi
  int v7; // ebp
  signed int v8; // eax
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  unsigned char *v12; // esi
  void *v13; // eax
  int v14; // esi
  int v15; // edi
  unsigned int *result; // eax
  bool v17; // cc
  int v18; // [esp+10h] [ebp-34h]
  int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h]
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-2Ch]
  int v23; // [esp+1Ch] [ebp-28h]
  int v24; // [esp+20h] [ebp-24h]
  int v25; // [esp+24h] [ebp-20h] BYREF
  int v26; // [esp+28h] [ebp-1Ch] BYREF
  unsigned char *v27; // [esp+2Ch] [ebp-18h]
  unsigned char *v28; // [esp+30h] [ebp-14h]
  int v29; // [esp+34h] [ebp-10h] BYREF
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]
  int v32; // [esp+40h] [ebp-4h]

  if ( !*(unsigned char *)(arg0 + 662) && !*(unsigned char *)(arg0 + 664) ) /*0x4cc11d*/
    return 0; /*0x4cc11d*/
  v5 = *a1; /*0x4cc12d*/
  v6 = a1[1]; /*0x4cc136*/
  LOWORD(v21) = *aP0 / 256; /*0x4cc151*/
  HIWORD(v21) = aP0[1] / 256; /*0x4cc156*/
  v25 = v21; /*0x4cc15f*/
  LOWORD(v18) = v5 / 256; /*0x4cc171*/
  HIWORD(v18) = v6 / 256; /*0x4cc184*/
  v26 = v18; /*0x4cc18d*/
  v7 = abs32((int16_t)v21 - (int16_t)v18); /*0x4cc1aa*/
  v8 = abs32(SHIWORD(v21) - SHIWORD(v18)); /*0x4cc1af*/
  if ( v7 <= v8 ) /*0x4cc1b3*/
    v7 = v8; /*0x4cc1b5*/
  v9 = v6 - ((unsigned int *)aP0)[1]; /*0x4cc1bf*/
  v10 = v5 - *(unsigned int *)aP0; /*0x4cc1c5*/
  v11 = ((int *)a1)[2] - ((unsigned int *)aP0)[2]; /*0x4cc1ca*/
  if ( v7 ) /*0x4cc1ce*/
  {
    v30 = v10 / v7; /*0x4cc1f0*/
    v31 = v9 / v7; /*0x4cc1fb*/
    v32 = v11 / v7; /*0x4cc1ff*/
  }
  else
  {
    v30 = 0; /*0x4cc1d6*/
    v31 = 0; /*0x4cc1da*/
    v32 = 0; /*0x4cc1de*/
  }
  v12 = (unsigned char *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v25));
  v28 = (unsigned char *)(v12);
  v27 = (unsigned char *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v26));
  v13 = (void *)(v12); /*0x4cc22f*/
  v24 = 0; /*0x4cc231*/
  if ( v7 <= 0 ) /*0x4cc235*/
    return 0; /*0x4cc302*/
  v22 = 0; /*0x4cc23b*/
  v20 = 0; /*0x4cc23f*/
  v19 = 0; /*0x4cc243*/
  while ( 1 ) /*0x4cc254*/
  {
    v14 = *(unsigned int *)aP0 + v19; /*0x4cc254*/
    v15 = v20 + ((unsigned int *)aP0)[1]; /*0x4cc259*/
    result = TrajectoryHelper::GetObstacle( (unsigned char *)(v28), (unsigned char *)(v27), (int)v13, v14, v15, ((unsigned int *)aP0)[2] + v22, arg0, (void *)(a3)); /*0x4cc281*/
    if ( result ) /*0x4cc288*/
      break; /*0x4cc288*/
    LOWORD(v23) = v14 / 256; /*0x4cc2a2*/
    HIWORD(v23) = v15 / 256; /*0x4cc2b5*/
    v29 = v23; /*0x4cc2be*/
    v13 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v29); /*0x4cc2c2*/
    v19 += v30; /*0x4cc2dd*/
    v17 = ++v24 < v7; /*0x4cc2ee*/
    v20 += v31; /*0x4cc2f4*/
    v22 += v32; /*0x4cc2f8*/
    if ( !v17 ) /*0x4cc2fc*/
      return 0; /*0x4cc2fc*/
  }
  return result; /*0x4cc304*/

}
}
// 0x4CC360
namespace gamemd {
unsigned int * TrajectoryHelper::GetObstacle(unsigned char * a1, unsigned char * a2, int a3, int a4, int a5, int a6, int a7, void * other)
{

  unsigned char *v8; // ebx
  unsigned int *v10; // esi
  int SlopeIndex; // ebx
  int v12; // ebx
  int v13; // eax
  bool v14; // al
  void *v15; // ecx
  unsigned int *v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  double v20; // st7
  int *v21; // eax
  int v22; // esi
  int v23; // ebp
  int v24; // edx
  int v25; // eax
  int *v26; // eax
  int v27; // ecx
  signed int v28; // ecx
  signed int v29; // esi
  signed int v30; // edi
  signed int v31; // eax
  bool v32; // cc
  unsigned int *v33; // esi
  int v34; // ebx
  int v35; // ebx
  int v37; // eax
  bool v38; // al
  void *v39; // ecx
  int v41; // [esp+20h] [ebp-24h]
  unsigned int *v42; // [esp+20h] [ebp-24h]
  int v43; // [esp+24h] [ebp-20h] BYREF
  unsigned char *v44; // [esp+28h] [ebp-1Ch]
  int v45; // [esp+2Ch] [ebp-18h] BYREF
  int v46; // [esp+30h] [ebp-14h]
  int v47; // [esp+34h] [ebp-10h]
  char v48[12]; // [esp+38h] [ebp-Ch] BYREF

  v8 = (unsigned char *)((unsigned int *)(a2));
  LOWORD(v41) = a4 / 256; /*0x4cc382*/
  HIWORD(v41) = a5 / 256; /*0x4cc3a0*/
  v44 = a1; /*0x4cc3a9*/
  v43 = v41; /*0x4cc3ad*/
  v10 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v43)); /*0x4cc3b6*/
  v42 = v10; /*0x4cc3bc*/
  if ( *(unsigned char *)(a7 + 662) ) /*0x4cc3c0*/
  {
    SlopeIndex = ((Cell *)((int)v10))->GetSlopeIndex(); /*0x4cc3d5*/
    if ( SlopeIndex - ((Cell *)(a3))->GetSlopeIndex() >= 4 ) /*0x4cc3e1*/
    {
      v12 = ((Cell *)((int)v10))->GetSlopeIndex(); /*0x4cc3ec*/
      if ( v12 - ((Cell *)((int)a1))->GetSlopeIndex() > 0 ) /*0x4cc3f7*/
        goto LABEL_16; /*0x4cc3f7*/
    }
    v8 = a2; /*0x4cc3fd*/
  }
  if ( *(unsigned char *)(a7 + 664) ) /*0x4cc405*/
  {
    v13 = v10[17]; /*0x4cc413*/
    v14 = v13 != -1 && *(unsigned char *)(*(unsigned int *)(&dword_A83D84)[4 * v13] + 680); /*0x4cc432*/
    if ( v10 != (unsigned int *)v8 /*0x4cc47c*/
      && v14
      && a1[283] <= v8[283]
      && (!LOBYTE((&dword_8871E0)[1][3])
       || (v15 = *(void **)(&dword_A8022C)[4 * v10[20]]) == 0
       || !(uint8_t)(((HouseClass *)(v15))->IsAlliedWith( (HouseClass *)(other)))) )
    {
LABEL_16:
      v16 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*v10 + 72))( (unsigned int *)(v10), (int *)(&v45)); /*0x4cc489*/
      v17 = a4 - *v16; /*0x4cc49c*/
      v18 = v16[1]; /*0x4cc4a2*/
      v19 = v16[2]; /*0x4cc4a7*/
      v46 = a5 - v18; /*0x4cc4ae*/
      v47 = a6 - v19; /*0x4cc4b8*/
      v45 = v17; /*0x4cc4bc*/
      v20 = Math::Sqrt( /*0x4cc4e1*/
              (double)v17 * (double)v17
            + (double)(a6 - v19) * (double)(a6 - v19)
            + (double)(a5 - v18) * (double)(a5 - v18));
      if ( (int)Math::RoundToInt(v20) <= 85 ) /*0x4cc4f1*/
        return v10; /*0x4cc665*/
      v21 = (int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)a1 + 72))( (unsigned char *)(a1), (int *)(&v45)); /*0x4cc501*/
      v22 = *v21; /*0x4cc504*/
      v23 = v21[1]; /*0x4cc50a*/
      v24 = v21[2]; /*0x4cc50d*/
      v25 = *(unsigned int *)a2; /*0x4cc510*/
      v47 = v24; /*0x4cc512*/
      v26 = (int *)(*(int (**)(unsigned char *, char *))(v25 + 72))( (unsigned char *)(a2), (char *)(v48)); /*0x4cc51b*/
      v27 = *v26; /*0x4cc51e*/
      v46 = v26[1]; /*0x4cc523*/
      v47 = v26[2]; /*0x4cc52a*/
      v28 = abs32(v22 - v27); /*0x4cc539*/
      v29 = abs32(v23 - v46); /*0x4cc548*/
      v30 = abs32(v17); /*0x4cc555*/
      v31 = abs32(a5 - v18); /*0x4cc55a*/
      v32 = v29 <= v28; /*0x4cc55c*/
      if ( v29 < v28 ) /*0x4cc55e*/
      {
        if ( v31 > v30 ) /*0x4cc562*/
        {
LABEL_22:
          v33 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v43)); /*0x4cc574*/
          if ( *(unsigned char *)(a7 + 662) ) /*0x4cc589*/
          {
            v34 = ((Cell *)(a3))->GetSlopeIndex(); /*0x4cc59e*/
            if ( ((Cell *)((int)v33))->GetSlopeIndex() - v34 >= 4 ) /*0x4cc5aa*/
            {
              v35 = ((Cell *)((int)v44))->GetSlopeIndex(); /*0x4cc5b7*/
              if ( ((Cell *)((int)v33))->GetSlopeIndex() - v35 > 0 ) /*0x4cc5c2*/
                return v42; /*0x4cc5cf*/
            }
          }
          if ( *(unsigned char *)(a7 + 664) ) /*0x4cc5d2*/
          {
            v37 = v33[17]; /*0x4cc5e0*/
            v38 = v37 != -1 && *(unsigned char *)(*(unsigned int *)(&dword_A83D84)[4 * v37] + 680); /*0x4cc5ff*/
            if ( v33 != (unsigned int *)a2 && v38 && v44[283] <= a2[283] ) /*0x4cc61f*/
            {
              if ( !LOBYTE((&dword_8871E0)[1][3]) ) /*0x4cc627*/
                return v42; /*0x4cc627*/
              v39 = *(void **)(&dword_A8022C)[4 * v33[20]]; /*0x4cc639*/
              if ( !v39 || !(uint8_t)(((HouseClass *)(v39))->IsAlliedWith( (HouseClass *)(other))) ) /*0x4cc645*/
                return v42; /*0x4cc64c*/
            }
          }
          return 0; /*0x4cc64c*/
        }
        v32 = v29 <= v28; /*0x4cc564*/
      }
      if ( v32 || v30 <= v31 ) /*0x4cc56e*/
        return v42; /*0x4cc659*/
      goto LABEL_22; /*0x4cc56e*/
    }
  }
  return 0; /*0x4cc5c8*/

}
}
// 0x4CC310
namespace gamemd {
unsigned int * TrajectoryHelper::FindFirstImpenetrableObstacle(unsigned int *aP0, int *a1, int arg0, void *a3)
{

  unsigned int *FirstObstacle; // eax
  unsigned int *v5; // esi

  FirstObstacle = TrajectoryHelper::FindFirstObstacle( (IUnknown *)(aP0), (int *)(a1), *(unsigned int *)(arg0 + 160), (void *)(a3)); /*0x4cc322*/
  v5 = FirstObstacle; /*0x4cc327*/
  if ( FirstObstacle /*0x4cc342*/
    && BuildingPlacement::ValidateType((gamemd::BuildingPlacement *)(FirstObstacle), -1, -1)
    && *(unsigned char *)(*(unsigned int *)(arg0 + 172) + 324) )
  {
    return 0; /*0x4cc34d*/
  }
  else
  {
    return v5; /*0x4cc353*/
  }

}
} // namespace gamemd
