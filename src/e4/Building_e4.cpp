// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"

// 0x425D10
namespace gamemd {
AnimClass * * Building::ComputePosition(AnimClass * aP1)
{
    unsigned int v14 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */

  int *v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  BuildingTypeClass *v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ebx
  VectorClass *v13; // eax
  VectorClass *v14; // esi
  double v15; // st7
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int16_t v19; // dx
  int16_t v20; // di
  int16_t v21; // di
  int16_t v22; // bx
  int v23; // ecx
  int v24; // edx
  AnimClass *v26; // edi
  int v27; // esi
  int v28; // edx
  int16_t v29; // cx
  int v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  IUnknown *v32; // [esp+20h] [ebp-28h] BYREF
  unsigned short v34[2]; // [esp+24h] [ebp-24h] BYREF
  int16_t v35[2]; // [esp+28h] [ebp-20h] BYREF
  int v36; // [esp+2Ch] [ebp-1Ch]
  IUnknown *v37; // [esp+30h] [ebp-18h] BYREF
  void *v38; // [esp+34h] [ebp-14h]
  char *v39; // [esp+3Ch] [ebp-Ch]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v2 = (int *)((char *)this + 39);
  v3 = v2[1]; /*0x425d29*/
  v4 = (uint8_t)(*v2 >> 31) + *v2; /*0x425d32*/
  v36 = 10000; /*0x425d34*/
  v41 = v2[2]; /*0x425d3f*/
  v5 = v4; /*0x425d43*/
  v6 = v3; /*0x425d45*/
  v5 >>= 8; /*0x425d47*/
  v7 = (int16_t)v5; /*0x425d4b*/
  IDA_LOWORD(v38) = v5; /*0x425d54*/
  v8 = (BuildingTypeClass *)((int16_t)v5 - 5); /*0x425d61*/
  v9 = v6 / 256; /*0x425d67*/
  IDA_HIWORD(v38) = v9; /*0x425d6c*/
  v32 = (IUnknown *)dword_89A150; /*0x425d71*/
  v31 = (int16_t)v5; /*0x425d75*/
  if ( (int)v8 < (int16_t)v5 + 5 ) /*0x425d79*/
  {
    v10 = (int16_t)v9; /*0x425d7f*/
    v30 = (int16_t)v9; /*0x425d82*/
    v11 = (int16_t)v9 + 5; /*0x425d86*/
    do /*0x425ec0*/
    {
      v12 = v10 - 5; /*0x425d89*/
      if ( v10 - 5 < v11 ) /*0x425d8e*/
      {
        do /*0x425eb2*/
        {
          v34[0] = (unsigned short)v8; /*0x425da0*/
          v34[1] = v12; /*0x425da5*/
          if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v34, (TechnoClass *)1) ) /*0x425daa*/
          {
            v35[0] = (int16_t)v8; /*0x425dbb*/
            v35[1] = v12; /*0x425dc6*/
            v13 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v35); /*0x425dcb*/
            v14 = v13; /*0x425dd0*/
            if ( *(unsigned int *)&((unsigned int *)(v13))[14].IsInitialized == 2 /*0x425e18*/
              && ((int)((unsigned int *)(v13))[20].vtable0 & 0x100) == 0
              && (*((unsigned int *)Cell::GetNeighbourContent(v13, 6u) + 80) & 0x100) == 0
              && (*((unsigned int *)Cell::GetNeighbourContent(v14, 0) + 80) & 0x100) == 0 )
            {
              if ( ((unsigned int *)(v14))[2].Items == v38 ) /*0x425e27*/
              {
                v16 = 0; /*0x425e77*/
              }
              else
              {
                v40 = v12 - v30; /*0x425e44*/
                v39 = (char *)v8 - v31; /*0x425e48*/
                v15 = ((double (__cdecl *)(double))Math::Sqrt)((double)((int)v8 - v31) * (double)((int)v8 - v31) + (double)(v12 - v30) * (double)(v12 - v30)); /*0x425e68*/
                v16 = Math::RoundToInt(v15); /*0x425e70*/
              }
              if ( (int)v8 > v31 || v12 > v30 ) /*0x425e83*/
                v16 -= 3; /*0x425e85*/
              if ( v16 < v36 ) /*0x425e8c*/
              {
                v36 = v16; /*0x425e8e*/
                IDA_LOWORD(v37) = (unsigned short)v8; /*0x425e92*/
                IDA_HIWORD(v37) = v12; /*0x425e97*/
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
      v17 = (int16_t)v32 - v7; /*0x425eeb*/
      v18 = SHIWORD(v32) - v10; /*0x425eed*/
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
      v21 = (unsigned short)v38 + v20; /*0x425f1b*/
      v22 = v19 + IDA_HIWORD(v38); /*0x425f21*/
      IDA_LOWORD(v37) = v21; /*0x425f28*/
      IDA_HIWORD(v37) = v19 + IDA_HIWORD(v38); /*0x425f2d*/
      if ( BuildingClass::IsCellPlaceable(this, (int16_t *)&v37) ) /*0x425f3b*/
      {
        v23 = (v21 << 8) + 128; /*0x425f4a*/
        v24 = v22; /*0x425f50*/
        goto LABEL_41; /*0x425f53*/
      }
      IDA_LOWORD(v37) = v21; /*0x425f5d*/
      IDA_HIWORD(v37) = IDA_HIWORD(v38); /*0x425f62*/
      if ( BuildingClass::IsCellPlaceable(this, (int16_t *)&v37) ) /*0x425f78*/
      {
        aP1->field_0 = (unsigned int)((v21 << 8) + 128);
        aP1->field_4 = (unsigned int)((void *)((v30 << 8) + 128));
        aP1->field_8 = 0; /*0x425fa7*/
        return &aP1->field_0; /*0x425fb0*/
      }
      IDA_HIWORD(v37) = v22; /*0x425fb8*/
      IDA_LOWORD(v37) = (unsigned short)v38; /*0x425fbd*/
      if ( BuildingClass::IsCellPlaceable(this, (int16_t *)&v37) ) /*0x425fd3*/
      {
        aP1->field_0 = (unsigned int)((v7 << 8) + 128);
        aP1->field_4 = (unsigned int)((void *)((v22 << 8) + 128));
        aP1->field_8 = 0; /*0x425ffd*/
        return &aP1->field_0; /*0x426006*/
      }
    }
  }
  if ( dword_89A150 ) /*0x426011*/
  {
LABEL_39:
    aP1->field_0 = unk_89A178; /*0x426090*/
    *(unsigned long long *)&aP1->field_4 = qword_89A17C; /*0x4260a3*/
    return &aP1->field_0; /*0x4260b5*/
  }
  v26 = (AnimClass *)Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)7); /*0x426032*/
  v27 = 0; /*0x426034*/
  while ( 1 ) /*0x426046*/
  {
    v28 = (((int)v26 + v27) % 8) & 7; /*0x426046*/
    v29 = (unsigned short)v38 + *(unsigned short *)&stru_89E138.__pad_14B0[4 * v28 + 160]; /*0x426058*/
    IDA_LOWORD(v28) = IDA_HIWORD(v38) + *(unsigned short *)&stru_89E138.__pad_14B0[4 * v28 + 162]; /*0x426061*/
    IDA_LOWORD(v37) = v29; /*0x426066*/
    IDA_HIWORD(v37) = v28; /*0x42606f*/
    v32 = v37; /*0x42607d*/
    if ( BuildingClass::IsCellPlaceable(this, (int16_t *)&v32) ) /*0x426081*/
      break; /*0x426081*/
    if ( ++v27 >= 8 ) /*0x42608e*/
      goto LABEL_39; /*0x42608e*/
  }
  v24 = (unsigned int)(SHIWORD(v32));
  v23 = (unsigned int)(((int16_t)v32 << 8) + 128);
LABEL_41: aP1->field_0 = (unsigned int)(v23);
  aP1->field_4 = (unsigned int)((void *)((v24 << 8) + 128));
  aP1->field_8 = 0; /*0x4260e0*/
  return &aP1->field_0; /*0x425faa*/

}
}
// 0x485020
namespace gamemd {
int Building::GetNthOfType()
{

  int v2; // eax

  v2 = (int)(FindBuildingByTiberiumType(*((unsigned int *)this + 17)));
  if ( v2 == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return (*(uint8_t *)((char *)this + 286) + 1) * *(unsigned int *)(*((unsigned int *)g_abs_B0F4EC + v2) + 184); /*0x48504f*/

}
}
// 0x772A90
namespace gamemd {
int Building::GetRenderType()
{

  int v1; // ecx
  char result; // al

  v1 = *((unsigned int *)this + 40); /*0x772a90*/
  result = 0; /*0x772a96*/
  if ( *(unsigned char *)(v1 + 676) ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( *(unsigned char *)(v1 + 677) ) /*0x772aa7*/
    return result | 0xB8; /*0x772ab1*/
  return result; /*0x772ab3*/

}
}
// 0x69E7E0
namespace gamemd {
unsigned int * Building::GetFoundationSize(unsigned int * a1, unsigned int a2)
{

  int v2; // eax
  int16_t *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi

  v2 = MixFileClass::LoadSubFile(); /*0x69e7e0*/
  if ( v2 && a2 < *(int16_t *)(v2 + 6) && (v3 = (int16_t *)(v2 + 24 * a2 + 8)) != 0 ) /*0x69e7fe*/
  {
    v4 = *v3; /*0x69e800*/
    v5 = v3[1]; /*0x69e803*/
    v6 = v3[2]; /*0x69e809*/
    v7 = v3[3]; /*0x69e80e*/
    *a1 = v4; /*0x69e818*/
    a1[1] = v5; /*0x69e81a*/
    a1[2] = v6; /*0x69e81d*/
    a1[3] = v7; /*0x69e820*/
    return a1; /*0x69e812*/
  }
  else
  {
    *a1 = (unsigned int)(g_abs_B077A0);
    a1[1] = (unsigned int)(g_abs_B077A4);
    a1[2] = (unsigned int)(g_abs_B077A8);
    a1[3] = (unsigned int)(g_abs_B077AC);
    return a1; /*0x69e829*/
  }

}
} // namespace gamemd
