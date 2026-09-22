// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x425D10
namespace gamemd {
int * Building::ComputePosition(AnimClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall Building::ComputePosition(int *this, AnimClass *aP1)
{
  BuildingTypeClass *v8; // edi
  VectorClass *v13; // eax
  VectorClass *v14; // esi
  __int16 v19; // dx
  __int16 v20; // di
  __int16 v21; // di
  __int16 v22; // bx
  int v23; // ecx
  int v24; // edx
  AnimClass *v26; // edi
  int v27; // esi
  int v28; // edx
  __int16 v29; // cx
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  IUnknown *v32; // [esp+20h] [ebp-28h] BYREF
  _WORD v34[2]; // [esp+24h] [ebp-24h] BYREF
  __int16 v35[2]; // [esp+28h] [ebp-20h] BYREF
  int v36; // [esp+2Ch] [ebp-1Ch]
  IUnknown *v37; // [esp+30h] [ebp-18h] BYREF
  void *v38; // [esp+34h] [ebp-14h]
  char *v39; // [esp+3Ch] [ebp-Ch]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]
  int * v2 = this + 39; /*0x425d1d*/
  int v3 = v2[1]; /*0x425d29*/
  int v4 = (unsigned __int8)(*v2 >> 31) + *v2; /*0x425d32*/
  v36 = 10000; /*0x425d34*/
  v41 = v2[2]; /*0x425d3f*/
  int v5 = v4; /*0x425d43*/
  int v6 = v3; /*0x425d45*/
  v5 >>= 8; /*0x425d47*/
  int v7 = (__int16)v5; /*0x425d4b*/
  LOWORD(v38) = v5; /*0x425d54*/
  v8 = (BuildingTypeClass *)((__int16)v5 - 5); /*0x425d61*/
  int v9 = v6 / 256; /*0x425d67*/
  HIWORD(v38) = v9; /*0x425d6c*/
  v32 = (IUnknown *)dword_89A150; /*0x425d71*/
  v31 = (__int16)v5; /*0x425d75*/
  if ( (int)v8 < (__int16)v5 + 5 ) /*0x425d79*/
  {
    int v10 = (__int16)v9; /*0x425d7f*/
    v30 = (__int16)v9; /*0x425d82*/
    int v11 = (__int16)v9 + 5; /*0x425d86*/
    do /*0x425ec0*/
    {
      int v12 = v10 - 5; /*0x425d89*/
      if ( v10 - 5 < v11 ) /*0x425d8e*/
      {
        do /*0x425eb2*/
        {
          v34[0] = (_WORD)v8; /*0x425da0*/
          v34[1] = v12; /*0x425da5*/
          if ( LayerClass::IsWithinUsableArea(&stru_87C374[13428], (IUnknown *)v34, (TechnoClass *)1) ) /*0x425daa*/
          {
            v35[0] = (__int16)v8; /*0x425dbb*/
            v35[1] = v12; /*0x425dc6*/
            v13 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374[13428], v35); /*0x425dcb*/
            v14 = v13; /*0x425dd0*/
            if ( *(_DWORD *)&v13[14].IsInitialized == 2 /*0x425e18*/
              && ((int)v13[20].vtable0 & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v13, 6u) + 80) & 0x100) == 0
              && (*((_DWORD *)Cell::GetNeighbourContent(v14, 0) + 80) & 0x100) == 0 )
            {
  int v16; // eax
              if ( v14[2].Items == v38 ) /*0x425e27*/
              {
                v16 = 0; /*0x425e77*/
              }
              else
              {
                v40 = v12 - v30; /*0x425e44*/
                v39 = (char *)v8 - v31; /*0x425e48*/
                double v15 = ((double (__cdecl *)(double))Math::Sqrt)((double)((int)v8 - v31) * (double)((int)v8 - v31) + (double)(v12 - v30) * (double)(v12 - v30)); /*0x425e68*/
                v16 = Math::RoundToInt(v15); /*0x425e70*/
              }
              if ( (int)v8 > v31 || v12 > v30 ) /*0x425e83*/
                v16 -= 3; /*0x425e85*/
              if ( v16 < v36 ) /*0x425e8c*/
              {
                v36 = v16; /*0x425e8e*/
                LOWORD(v37) = (_WORD)v8; /*0x425e92*/
                HIWORD(v37) = v12; /*0x425e97*/
                v32 = v37; /*0x425ea0*/
              }
            }
            v7 = v31; /*0x425ea4*/
          }
          ++v12; /*0x425eac*/
          v11 = v30 + 5; /*0x425ead*/
        }
        while ( v12 < v30 + 5 ); /*0x425eb2*/
        v10 = v30; /*0x425eb8*/
      }
      v8 = (BuildingTypeClass *)((char *)v8 + 1); /*0x425eba*/
    }
    while ( (int)v8 < v7 + 5 ); /*0x425ec0*/
    if ( v32 != (IUnknown *)dword_89A150 ) /*0x425ed6*/
    {
      int v17 = (__int16)v32 - v7; /*0x425eeb*/
      int v18 = SHIWORD(v32) - v10; /*0x425eed*/
      v19 = 0; /*0x425ef1*/
      if ( v17 >= 0 ) /*0x425ef5*/
        v20 = v17 > 0; /*0x425efe*/
      else
        v20 = -1; /*0x425ef7*/
      if ( v18 >= 0 ) /*0x425f05*/
      {
        if ( v18 > 0 ) /*0x425f0c*/
          v19 = 1; /*0x425f0e*/
      }
      else
      {
        v19 = -1; /*0x425f07*/
      }
      v21 = (_WORD)v38 + v20; /*0x425f1b*/
      v22 = v19 + HIWORD(v38); /*0x425f21*/
      LOWORD(v37) = v21; /*0x425f28*/
      HIWORD(v37) = v19 + HIWORD(v38); /*0x425f2d*/
      if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v37) ) /*0x425f3b*/
      {
        v23 = (v21 << 8) + 128; /*0x425f4a*/
        v24 = v22; /*0x425f50*/
        goto LABEL_41; /*0x425f53*/
      }
      LOWORD(v37) = v21; /*0x425f5d*/
      HIWORD(v37) = HIWORD(v38); /*0x425f62*/
      if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v37) ) /*0x425f78*/
      {
        aP1->field_0 = (v21 << 8) + 128; /*0x425f99*/
        aP1->field_4 = (void *)((v30 << 8) + 128); /*0x425fa2*/
        aP1->field_8 = 0; /*0x425fa7*/
        return &aP1->field_0; /*0x425fb0*/
      }
      HIWORD(v37) = v22; /*0x425fb8*/
      LOWORD(v37) = (_WORD)v38; /*0x425fbd*/
      if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v37) ) /*0x425fd3*/
      {
        aP1->field_0 = (v7 << 8) + 128; /*0x425ff0*/
        aP1->field_4 = (void *)((v22 << 8) + 128); /*0x425ffa*/
        aP1->field_8 = 0; /*0x425ffd*/
        return &aP1->field_0; /*0x426006*/
      }
    }
  }
  if ( dword_89A150 ) /*0x426011*/
  {
LABEL_39:
    aP1->field_0 = unk_89A178; /*0x426090*/
    *(_QWORD *)&aP1->field_4 = qword_89A17C; /*0x4260a3*/
    return &aP1->field_0; /*0x4260b5*/
  }
  v26 = (AnimClass *)Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)7); /*0x426032*/
  v27 = 0; /*0x426034*/
  while ( 1 ) /*0x426046*/
  {
    v28 = (((int)v26 + v27) % 8) & 7; /*0x426046*/
    v29 = (_WORD)v38 + *(_WORD *)&stru_89E138[5296][4 * v28 + 160]; /*0x426058*/
    LOWORD(v28) = HIWORD(v38) + *(_WORD *)&stru_89E138[5296][4 * v28 + 162]; /*0x426061*/
    LOWORD(v37) = v29; /*0x426066*/
    HIWORD(v37) = v28; /*0x42606f*/
    v32 = v37; /*0x42607d*/
    if ( BuildingClass::IsCellPlaceable(this, (__int16 *)&v32) ) /*0x426081*/
      break; /*0x426081*/
    if ( ++v27 >= 8 ) /*0x42608e*/
      goto LABEL_39; /*0x42608e*/
  }
  v24 = SHIWORD(v32); /*0x4260bd*/
  v23 = ((__int16)v32 << 8) + 128; /*0x4260c5*/
LABEL_41:
  aP1->field_0 = v23; /*0x4260cb*/
  aP1->field_4 = (void *)((v24 << 8) + 128); /*0x4260dd*/
  aP1->field_8 = 0; /*0x4260e0*/
  return &aP1->field_0; /*0x425faa*/
}
}
} // namespace gamemd

// 0x485020
namespace gamemd {
int Building::GetNthOfType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Building_GetNthOfType(int this)
{

  int v2 = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x485026*/
  if ( v2 == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return (*(unsigned __int8 *)(this + 286) + 1) * *(_DWORD *)(*((_DWORD *)BuildingClass_InstanceArray + v2) + 184); /*0x48504f*/
}
}
} // namespace gamemd

// 0x772A90
namespace gamemd {
char Building::GetRenderType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Building_GetRenderType(_DWORD *this)
{
  char result; // al

  int v1 = this->q0A0; /*0x772a90*/
  result = 0; /*0x772a96*/
  if ( *(_BYTE *)(v1 + 676) ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( *(_BYTE *)(v1 + 677) ) /*0x772aa7*/
    return result | 0xB8; /*0x772ab1*/
  return result; /*0x772ab3*/
}
}
} // namespace gamemd

// 0x69E7E0
namespace gamemd {
unsigned int * Building::GetFoundationSize(unsigned int * a1, unsigned int a2)
{
{
    int v2;
    short *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v2 = MixFileClass::LoadSubFile();
    if ( v2 && a2 < *(short *)(v2 + 6) && (v3 = (short *)(v2 + 24 * a2 + 8)) != 0 )
  {
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    *a1 = v4;
    *((int*)(a1) + 1) = v5;
    *((int*)(a1) + 2) = v6;
    *((int*)(a1) + 3) = v7;
    return a1;
  }
    else
  {
    *a1 = DataGlobal_B077A0;
    *((int*)(a1) + 1) = DataGlobal_B077A4;
    *((int*)(a1) + 2) = DataGlobal_B077A8;
    *((int*)(a1) + 3) = DataGlobal_B077AC;
    return a1;
  }
}
}
} // namespace gamemd
