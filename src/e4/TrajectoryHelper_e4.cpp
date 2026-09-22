// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x4CC100
namespace gamemd {
unsigned int * TrajectoryHelper::FindFirstObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{
{
  _DWORD *result; // eax
  int v30; // [esp+38h] [ebp-Ch]
  int v31; // [esp+3Ch] [ebp-8h]
  int v32; // [esp+40h] [ebp-4h]
  if ( !*(_BYTE *)(arg0 + 662) && !*(_BYTE *)(arg0 + 664) ) /*0x4cc11d*/
    return 0; /*0x4cc11d*/
  int v5 = *a1; /*0x4cc12d*/
  int v6 = a1[1]; /*0x4cc136*/
  int v21; // [esp+18h] [ebp-2Ch]
  LOWORD(v21) = aP0->field_0 / 256; /*0x4cc151*/
  HIWORD(v21) = aP0->field_4 / 256; /*0x4cc156*/
  int v25 = v21; /*0x4cc15f*/
  int v18; // [esp+10h] [ebp-34h]
  LOWORD(v18) = v5 / 256; /*0x4cc171*/
  HIWORD(v18) = v6 / 256; /*0x4cc184*/
  int v26 = v18; /*0x4cc18d*/
  int v7 = abs32((__int16)v21 - (__int16)v18); /*0x4cc1aa*/
  signed int v8 = abs32(SHIWORD(v21) - SHIWORD(v18)); /*0x4cc1af*/
  if ( v7 <= v8 ) /*0x4cc1b3*/
    v7 = v8; /*0x4cc1b5*/
  int v9 = v6 - aP0->field_4; /*0x4cc1bf*/
  int v10 = v5 - aP0->field_0; /*0x4cc1c5*/
  int v11 = a1[2] - aP0->field_8; /*0x4cc1ca*/
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
  _BYTE * v12 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v25); /*0x4cc216*/
  _BYTE * v28 = v12; /*0x4cc21e*/
  _BYTE * v27 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v26); /*0x4cc229*/
  void * v13 = v12; /*0x4cc22f*/
  int v24 = 0; /*0x4cc231*/
  if ( v7 <= 0 ) /*0x4cc235*/
    return 0; /*0x4cc302*/
  int v22 = 0; /*0x4cc23b*/
  int v20 = 0; /*0x4cc23f*/
  int v19 = 0; /*0x4cc243*/
  while ( 1 ) /*0x4cc254*/
  {
    int v14 = aP0->field_0 + v19; /*0x4cc254*/
    int v15 = v20 + aP0->field_4; /*0x4cc259*/
    result = TrajectoryHelper::GetObstacle(v28, v27, (int)v13, v14, v15, aP0->field_8 + v22, arg0, (#375 *)a3); /*0x4cc281*/
    if ( result ) /*0x4cc288*/
      break; /*0x4cc288*/
  int v23; // [esp+1Ch] [ebp-28h]
    LOWORD(v23) = v14 / 256; /*0x4cc2a2*/
    HIWORD(v23) = v15 / 256; /*0x4cc2b5*/
    int v29 = v23; /*0x4cc2be*/
    v13 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v29); /*0x4cc2c2*/
    v19 += v30; /*0x4cc2dd*/
    bool v17 = ++v24 < v7; /*0x4cc2ee*/
    v20 += v31; /*0x4cc2f4*/
    v22 += v32; /*0x4cc2f8*/
    if ( !v17 ) /*0x4cc2fc*/
      return 0; /*0x4cc2fc*/
  }
  return result; /*0x4cc304*/
}
} // namespace gamemd
}

// 0x4CC360
namespace gamemd {
unsigned int * TrajectoryHelper::GetObstacle(unsigned char * a1, unsigned char * a2, int a3, int a4, int a5, int a6, int a7, void * other)
{
{
  int SlopeIndex; // ebx
  #375 *v15; // ecx
  #375 *v39; // ecx

  IUnknown *v8 = a2; /*0x4cc36b*/
  int v41; // [esp+20h] [ebp-24h]
  LOWORD(v41) = a4 / 256; /*0x4cc382*/
  HIWORD(v41) = a5 / 256; /*0x4cc3a0*/
  _BYTE * v44 = a1; /*0x4cc3a9*/
  int v43 = v41; /*0x4cc3ad*/
  IUnknown *v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v43); /*0x4cc3b6*/
  IUnknown *v42 = v10; /*0x4cc3bc*/
  if ( *(_BYTE *)(a7 + 662) ) /*0x4cc3c0*/
  {
    SlopeIndex = Cell::GetSlopeIndex((int)v10); /*0x4cc3d5*/
    if ( SlopeIndex - Cell::GetSlopeIndex(a3) >= 4 ) /*0x4cc3e1*/
    {
      int v12 = Cell::GetSlopeIndex((int)v10); /*0x4cc3ec*/
      if ( v12 - Cell::GetSlopeIndex((int)a1) > 0 ) /*0x4cc3f7*/
        goto LABEL_16; /*0x4cc3f7*/
    }
    v8 = a2; /*0x4cc3fd*/
  }
  if ( *(_BYTE *)(a7 + 664) ) /*0x4cc405*/
  {
    int v13 = v10[17]; /*0x4cc413*/
    bool v14 = v13 != -1 && *(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->vtable0[4 * v13] + 680); /*0x4cc432*/
    if ( v10 != (_DWORD *)v8 /*0x4cc47c*/
      && v14
      && a1[283] <= v8[283]
      && (!LOBYTE(g_RulesClass_Instance[1].?[3])
       || (v15 = *(#375 **)&HouseClass_Array->__pad_0[4 * v10[20]]) == 0
       || !(unsigned __int8)HouseClass::IsAlliedWith(v15, other)) )
    {
LABEL_16:
  int v45; // [esp+2Ch] [ebp-18h] BYREF
      _DWORD * v16 = (_DWORD *)v10->vt_slot_72(&v45); /*0x4cc489*/
      int v17 = a4 - *v16; /*0x4cc49c*/
      int v18 = v16[1]; /*0x4cc4a2*/
      int v19 = v16[2]; /*0x4cc4a7*/
      int v46 = a5 - v18; /*0x4cc4ae*/
      int v47 = a6 - v19; /*0x4cc4b8*/
      v45 = v17; /*0x4cc4bc*/
  double v20; // st7
      v20 = Math::Sqrt( /*0x4cc4e1*/
              (double)v17 * (double)v17
            + (double)(a6 - v19) * (double)(a6 - v19)
            + (double)(a5 - v18) * (double)(a5 - v18));
      if ( (int)Math::RoundToInt(v20) <= 85 ) /*0x4cc4f1*/
        return v10; /*0x4cc665*/
      int * v21 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a1 + 72))(a1, &v45); /*0x4cc501*/
      int v22 = *v21; /*0x4cc504*/
      int v23 = v21[1]; /*0x4cc50a*/
      int v24 = v21[2]; /*0x4cc50d*/
      int v25 = *(_DWORD *)a2; /*0x4cc510*/
      v47 = v24; /*0x4cc512*/
  char v48[12]; // [esp+38h] [ebp-Ch] BYREF
      int * v26 = (int *)(*(int (__thiscall **)(_BYTE *, char *))(v25 + 72))(a2, v48); /*0x4cc51b*/
      int v27 = *v26; /*0x4cc51e*/
      v46 = v26[1]; /*0x4cc523*/
      v47 = v26[2]; /*0x4cc52a*/
      signed int v28 = abs32(v22 - v27); /*0x4cc539*/
      signed int v29 = abs32(v23 - v46); /*0x4cc548*/
      signed int v30 = abs32(v17); /*0x4cc555*/
      signed int v31 = abs32(a5 - v18); /*0x4cc55a*/
      bool v32 = v29 <= v28; /*0x4cc55c*/
      if ( v29 < v28 ) /*0x4cc55e*/
      {
        if ( v31 > v30 ) /*0x4cc562*/
        {
LABEL_22:
          _DWORD * v33 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v43); /*0x4cc574*/
          if ( *(_BYTE *)(a7 + 662) ) /*0x4cc589*/
          {
            int v34 = Cell::GetSlopeIndex(a3); /*0x4cc59e*/
            if ( Cell::GetSlopeIndex((int)v33) - v34 >= 4 ) /*0x4cc5aa*/
            {
              int v35 = Cell::GetSlopeIndex((int)v44); /*0x4cc5b7*/
              if ( Cell::GetSlopeIndex((int)v33) - v35 > 0 ) /*0x4cc5c2*/
                return v42; /*0x4cc5cf*/
            }
          }
          if ( *(_BYTE *)(a7 + 664) ) /*0x4cc5d2*/
          {
            int v37 = v33[17]; /*0x4cc5e0*/
            bool v38 = v37 != -1 && *(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->vtable0[4 * v37] + 680); /*0x4cc5ff*/
            if ( v33 != (_DWORD *)a2 && v38 && v44[283] <= a2[283] ) /*0x4cc61f*/
            {
              if ( !LOBYTE(g_RulesClass_Instance[1].?[3]) ) /*0x4cc627*/
                return v42; /*0x4cc627*/
              v39 = *(#375 **)&HouseClass_Array->__pad_0[4 * v33[20]]; /*0x4cc639*/
              if ( !v39 || !(unsigned __int8)HouseClass::IsAlliedWith(v39, other) ) /*0x4cc645*/
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
} // namespace gamemd
}

// 0x4CC310
namespace gamemd {
unsigned int * TrajectoryHelper::FindFirstImpenetrableObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{
{
    IUnknown *FirstObstacle;
    IUnknown *v5;
    FirstObstacle = (IUnknown *)TrajectoryHelper::FindFirstObstacle(aP0, a1, *(int *)(arg0 + 160), a3);
    v5 = FirstObstacle;
    if ( FirstObstacle && BuildingPlacement::ValidateType(FirstObstacle, (AbstractClass *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF) && *(char *)(*(int *)(arg0 + 172) + 324) )
  {
    return 0;
  }
    else
  {
    return &v5->field_0;
  }
}
}
} // namespace gamemd
