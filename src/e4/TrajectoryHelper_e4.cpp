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
namespace gamemd {  // G42.18 ns repair
unsigned int * TrajectoryHelper::FindFirstObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{

  unsigned int *result; // eax
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]
  int v32; // [esp+40h] [ebp-4h]

  if ( !*(unsigned char *)(arg0 + 662) && !*(unsigned char *)(arg0 + 664) ) /*0x4cc11d*/
    return 0; /*0x4cc11d*/
  int v5 = *a1; // esi /*0x4cc12d*/
  int v6; // edi
  v6 = a1[1]; /*0x4cc136*/
  int v21; // [esp+18h] [ebp-2Ch]
  LOWORD(v21) = *aP0 / 256; /*0x4cc151*/
  HIWORD(v21) = aP0[1] / 256; /*0x4cc156*/
  int v25; // [esp+24h] [ebp-20h] BYREF
  v25 = v21; /*0x4cc15f*/
  int v18; // [esp+10h] [ebp-34h]
  (v18) = ((v18) & ~0xFFFF) | ((v5 / 256) & 0xFFFF); /*0x4cc171*/
  (v18) = ((v18) & ~(0xFFFF << 16)) | (((v6 / 256) & 0xFFFF) << 16); /*0x4cc184*/
  int v26; // [esp+28h] [ebp-1Ch] BYREF
  v26 = v18; /*0x4cc18d*/
  int v7; // ebp
  v7 = abs32((__int16)v21 - (__int16)v18); /*0x4cc1aa*/
  signed int v8; // eax
  v8 = abs32((short)(((v21) >> 16) & 0xFFFF) - (short)(((v18) >> 16) & 0xFFFF)); /*0x4cc1af*/
  if ( v7 <= v8 ) /*0x4cc1b3*/
    v7 = v8; /*0x4cc1b5*/
  int v9; // edi
  v9 = v6 - aP0[1]; /*0x4cc1bf*/
  int v10 = v5 - *aP0; // esi /*0x4cc1c5*/
  int v11; // ecx
  v11 = a1[2] - aP0[2]; /*0x4cc1ca*/
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
  unsigned char *v12; // esi
  v12 = (unsigned char *)((&dword_87F7E8)->To_CellObj((__int16 *)&v25)); /*0x4cc216*/
  unsigned char *v28; // [esp+30h] [ebp-14h]
  v28 = v12; /*0x4cc21e*/
  unsigned char *v27; // [esp+2Ch] [ebp-18h]
  v27 = (unsigned char *)((&dword_87F7E8)->To_CellObj((__int16 *)&v26)); /*0x4cc229*/
  void *v13 = v12; // eax /*0x4cc22f*/
  int v24; // [esp+20h] [ebp-24h]
  v24 = 0; /*0x4cc231*/
  if ( v7 <= 0 ) /*0x4cc235*/
    return 0; /*0x4cc302*/
  int v22; // [esp+18h] [ebp-2Ch]
  v22 = 0; /*0x4cc23b*/
  int v20; // [esp+14h] [ebp-30h]
  v20 = 0; /*0x4cc23f*/
  int v19; // [esp+10h] [ebp-34h]
  v19 = 0; /*0x4cc243*/
  while ( 1 ) /*0x4cc254*/
  {
    int v14 = *aP0 + v19; // esi /*0x4cc254*/
    int v15; // edi
    v15 = v20 + aP0[1]; /*0x4cc259*/
    result = TrajectoryHelper::GetObstacle(v28, v27, (int)v13, v14, v15, aP0[2] + v22, arg0, a3); /*0x4cc281*/
    if ( result ) /*0x4cc288*/
      break; /*0x4cc288*/
    int v23; // [esp+1Ch] [ebp-28h]
    (v23) = ((v23) & ~0xFFFF) | ((v14 / 256) & 0xFFFF); /*0x4cc2a2*/
    (v23) = ((v23) & ~(0xFFFF << 16)) | (((v15 / 256) & 0xFFFF) << 16); /*0x4cc2b5*/
    int v29; // [esp+34h] [ebp-10h] BYREF
    v29 = v23; /*0x4cc2be*/
    v13 = (&dword_87F7E8)->To_CellObj((__int16 *)&v29); /*0x4cc2c2*/
    v19 += v30; /*0x4cc2dd*/
    bool v17; // cc
    v17 = ++v24 < v7; /*0x4cc2ee*/
    v20 += v31; /*0x4cc2f4*/
    v22 += v32; /*0x4cc2f8*/
    if ( !v17 ) /*0x4cc2fc*/
      return 0; /*0x4cc2fc*/
  }
  return result; /*0x4cc304*/

}
}  // G42.18 ns repair
// 0x4CC360
namespace gamemd {
unsigned int * TrajectoryHelper::GetObstacle(unsigned char * a1, unsigned char * a2, int a3, int a4, int a5, int a6, int a7, void * other)
{

  unsigned char *v9; // ebx
  unsigned int *v11; // esi
  int SlopeIndex; // ebx
  int v13; // ebx
  int v14; // eax
  bool v15; // al
  HouseClass *v16; // ecx
  unsigned int *v17; // eax
  int v18; // edi
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // esi
  int v24; // ebp
  int v25; // edx
  int v26; // eax
  int *v27; // eax
  int v28; // ecx
  signed int v29; // ecx
  signed int v30; // esi
  signed int v31; // edi
  signed int v32; // eax
  bool v33; // cc
  unsigned int *v34; // esi
  int v35; // ebx
  int v36; // ebx
  int v38; // eax
  bool v39; // al
  HouseClass *v40; // ecx
  unsigned __int16 *v41; // [esp+20h] [ebp-24h]
  unsigned int *v43; // [esp+20h] [ebp-24h]
  __int16 v44[2]; // [esp+24h] [ebp-20h] BYREF
  unsigned char *v45; // [esp+28h] [ebp-1Ch]
  int v46; // [esp+2Ch] [ebp-18h] BYREF
  int v47; // [esp+30h] [ebp-14h]
  int v48; // [esp+34h] [ebp-10h]
  char v49[12]; // [esp+38h] [ebp-Ch] BYREF

  v9 = a2; /*0x4cc36b*/
  LOWORD(v41) = a5 / 256; /*0x4cc382*/
  HIWORD(v41) = a6 / 256; /*0x4cc3a0*/
  v45 = a1; /*0x4cc3a9*/
  *(unsigned int *)v44 = v41; /*0x4cc3ad*/
  v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v44); /*0x4cc3b6*/
  v43 = v11; /*0x4cc3bc*/
  if ( *(unsigned char *)(a8 + 662) ) /*0x4cc3c0*/
  {
    SlopeIndex = Cell::GetSlopeIndex((int)v11); /*0x4cc3d5*/
    if ( SlopeIndex - Cell::GetSlopeIndex(a4) >= 4 ) /*0x4cc3e1*/
    {
      v13 = Cell::GetSlopeIndex((int)v11); /*0x4cc3ec*/
      if ( v13 - Cell::GetSlopeIndex((int)a1) > 0 ) /*0x4cc3f7*/
        goto LABEL_16; /*0x4cc3f7*/
    }
    v9 = a2; /*0x4cc3fd*/
  }
  if ( *(unsigned char *)(a8 + 664) ) /*0x4cc405*/
  {
    v14 = v11->u32_44; /*0x4cc413*/
    v15 = v14 != -1 && *(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v14) + 680); /*0x4cc432*/
    if ( v11 != (unsigned int *)v9 /*0x4cc47c*/
      && v15
      && a1->u32_11B <= v9->u32_11B
      && (!LOBYTE(dword_8871E0->ForceShieldColor)
       || (v16 = (HouseClass *)*(&dword_A8022C->vfptr + v11->u32_50)) == 0
       || !(unsigned __int8)HouseClass::IsAlliedWith(v16)) )
    {
LABEL_16:
      v17 = (unsigned int *)v11->vt_slot_72(&v46); /*0x4cc489*/
      v18 = a5 - *v17; /*0x4cc49c*/
      v19 = v17[1]; /*0x4cc4a2*/
      v20 = v17[2]; /*0x4cc4a7*/
      v47 = a6 - v19; /*0x4cc4ae*/
      v48 = a7 - v20; /*0x4cc4b8*/
      v46 = v18; /*0x4cc4bc*/
      Math::Sqrt((double)v18 * (double)v18 + (double)(a7 - v20) * (double)(a7 - v20) + (double)(a6 - v19) /*0x4cc4e1*/
                                                                                     * (double)(a6 - v19));
      LOWORD(v21) = Math::RoundToInt(a3); /*0x4cc4e9*/
      if ( v21 <= 85 ) /*0x4cc4f1*/
        return v11; /*0x4cc665*/
      v22 = (int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)a1 + 72))(a1, &v46); /*0x4cc501*/
      v23 = *v22; /*0x4cc504*/
      v24 = v22[1]; /*0x4cc50a*/
      v25 = v22[2]; /*0x4cc50d*/
      v26 = *(unsigned int *)a2; /*0x4cc510*/
      v48 = v25; /*0x4cc512*/
      v27 = (int *)(*(int (**)(unsigned char *, char *))(v26 + 72))(a2, v49); /*0x4cc51b*/
      v28 = *v27; /*0x4cc51e*/
      v47 = v27[1]; /*0x4cc523*/
      v48 = v27[2]; /*0x4cc52a*/
      v29 = abs32(v23 - v28); /*0x4cc539*/
      v30 = abs32(v24 - v47); /*0x4cc548*/
      v31 = abs32(v18); /*0x4cc555*/
      v32 = abs32(a6 - v19); /*0x4cc55a*/
      v33 = v30 <= v29; /*0x4cc55c*/
      if ( v30 < v29 ) /*0x4cc55e*/
      {
        if ( v32 > v31 ) /*0x4cc562*/
        {
LABEL_22:
          v34 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v44); /*0x4cc574*/
          if ( *(unsigned char *)(a8 + 662) ) /*0x4cc589*/
          {
            v35 = Cell::GetSlopeIndex(a4); /*0x4cc59e*/
            if ( Cell::GetSlopeIndex((int)v34) - v35 >= 4 ) /*0x4cc5aa*/
            {
              v36 = Cell::GetSlopeIndex((int)v45); /*0x4cc5b7*/
              if ( Cell::GetSlopeIndex((int)v34) - v36 > 0 ) /*0x4cc5c2*/
                return v43; /*0x4cc5cf*/
            }
          }
          if ( *(unsigned char *)(a8 + 664) ) /*0x4cc5d2*/
          {
            v38 = v34[17]; /*0x4cc5e0*/
            v39 = v38 != -1 && *(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v38) + 680); /*0x4cc5ff*/
            if ( v34 != (unsigned int *)a2 && v39 && v45->u32_11B <= a2[283] ) /*0x4cc61f*/
            {
              if ( !LOBYTE(dword_8871E0->ForceShieldColor) ) /*0x4cc627*/
                return v43; /*0x4cc627*/
              v40 = (HouseClass *)*(&dword_A8022C->vfptr + v34[20]); /*0x4cc639*/
              if ( !v40 || !(unsigned __int8)HouseClass::IsAlliedWith(v40) ) /*0x4cc645*/
                return v43; /*0x4cc64c*/
            }
          }
          return 0; /*0x4cc64c*/
        }
        v33 = v30 <= v29; /*0x4cc564*/
      }
      if ( v33 || v31 <= v32 ) /*0x4cc56e*/
        return v43; /*0x4cc659*/
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
  FirstObstacle = TrajectoryHelper::FindFirstObstacle(aP0, a1, *(unsigned int *)(arg0 + 160), a3); /*0x4cc322*/
  unsigned int *v5 = FirstObstacle; // esi /*0x4cc327*/
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
