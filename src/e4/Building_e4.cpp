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
#include "e4/classes/Random_e4.hpp"

// 0x425D10
namespace gamemd {  // G42.18 ns repair
AnimClass * * Building::ComputePosition(int *aP1)
{

  double v2; // st7
  int *v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  Cell *v14; // eax
  Cell *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 v19; // dx
  __int16 v20; // di
  __int16 v21; // di
  __int16 v22; // bx
  int v23; // ecx
  int v24; // edx
  int v26; // edi
  int v27; // esi
  int v28; // edx
  __int16 v29; // cx
  double v30; // [esp+0h] [ebp-48h]
  int v31; // [esp+14h] [ebp-34h]
  int v32; // [esp+18h] [ebp-30h]
  __int16 v34[2]; // [esp+20h] [ebp-28h] BYREF
  __int16 v35[2]; // [esp+24h] [ebp-24h] BYREF
  __int16 v36[2]; // [esp+28h] [ebp-20h] BYREF
  int v37; // [esp+2Ch] [ebp-1Ch]
  __int16 v38[2]; // [esp+30h] [ebp-18h] BYREF
  int v39; // [esp+34h] [ebp-14h]
  int v40; // [esp+3Ch] [ebp-Ch]
  int v41; // [esp+40h] [ebp-8h]
  int v42; // [esp+44h] [ebp-4h]

  v3 = &this->u32_9C; /*0x425d1d*/
  v4 = v3[1]; /*0x425d29*/
  v5 = (unsigned __int8)(*v3 >> 31) + *v3; /*0x425d32*/
  v37 = 10000; /*0x425d34*/
  v42 = v3[2]; /*0x425d3f*/
  v6 = v5; /*0x425d43*/
  v7 = v4; /*0x425d45*/
  v6 >>= 8; /*0x425d47*/
  v8 = (__int16)v6; /*0x425d4b*/
  (v39) = ((v39) & ~0xFFFF) | ((v6) & 0xFFFF); /*0x425d54*/
  v9 = (__int16)v6 - 5; /*0x425d61*/
  v10 = v7 / 256; /*0x425d67*/
  (v39) = ((v39) & ~(0xFFFF << 16)) | (((v10) & 0xFFFF) << 16); /*0x425d6c*/
  *(unsigned int *)v34 = dword_89A150; /*0x425d71*/
  v32 = (__int16)v6; /*0x425d75*/
  if ( v9 < (__int16)v6 + 5 ) /*0x425d79*/
  {
    v11 = (__int16)v10; /*0x425d7f*/
    v31 = (__int16)v10; /*0x425d82*/
    v12 = (__int16)v10 + 5; /*0x425d86*/
    do /*0x425ec0*/
    {
      v13 = v11 - 5; /*0x425d89*/
      if ( v11 - 5 < v12 ) /*0x425d8e*/
      {
        do /*0x425eb2*/
        {
          v35[0] = v9; /*0x425da0*/
          v35[1] = v13; /*0x425da5*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, v35, 1) ) /*0x425daa*/
          {
            v36[0] = v9; /*0x425dbb*/
            v36[1] = v13; /*0x425dc6*/
            v14 = (Cell *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v36); /*0x425dcb*/
            v15 = v14; /*0x425dd0*/
            if ( *&v14->u32_EC == 2 /*0x425e18*/
              && ((int)v14->u32_140 & 0x100) == 0
              && (*((unsigned int *)(v14)->GetNeighbourContent(6u) + 80) & 0x100) == 0
              && (*((unsigned int *)(v15)->GetNeighbourContent(0) + 80) & 0x100) == 0 )
            {
              if ( *&v15->u32_24 == v39 ) /*0x425e27*/
              {
                v16 = 0; /*0x425e77*/
              }
              else
              {
                v41 = v13 - v31; /*0x425e44*/
                v40 = v9 - v32; /*0x425e48*/
                __asm /*0x425e4c*/
                {
                  fild [esp+40h+var_8]
                  fild [esp+40h+var_C]
                }
                __asm
                {
                  fld st
                  fmul st, st(1)
                  fld st(2)
                  fmul st, st(3)
                  faddp st(1), st
                  fstp [esp+48h+var_48]; double
                  fstp st
                  fstp st
                }
                Math::Sqrt(v30); /*0x425e68*/
                LOWORD(v16) = Math::RoundToInt(v2); /*0x425e70*/
              }
              if ( v9 > v32 || v13 > v31 ) /*0x425e83*/
                v16 -= 3; /*0x425e85*/
              if ( v16 < v37 ) /*0x425e8c*/
              {
                v37 = v16; /*0x425e8e*/
                v38[0] = v9; /*0x425e92*/
                v38[1] = v13; /*0x425e97*/
                *(unsigned int *)v34 = *(unsigned int *)v38; /*0x425ea0*/
              }
            }
            v8 = v32; /*0x425ea4*/
          }
          ++v13; /*0x425eac*/
          v12 = v31 + 5; /*0x425ead*/
        }
        while ( v13 < v31 + 5 ); /*0x425eb2*/
        v11 = v31; /*0x425eb8*/
      }
      ++v9; /*0x425eba*/
    }
    while ( v9 < v8 + 5 ); /*0x425ec0*/
    if ( *(unsigned int *)v34 != dword_89A150 ) /*0x425ed6*/
    {
      v17 = v34[0] - v8; /*0x425eeb*/
      v18 = v34[1] - v11; /*0x425eed*/
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
      v21 = v39 + v20; /*0x425f1b*/
      v22 = v19 + (((v39) >> 16) & 0xFFFF); /*0x425f21*/
      v38[0] = v21; /*0x425f28*/
      v38[1] = v19 + (((v39) >> 16) & 0xFFFF); /*0x425f2d*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425f3b*/
      {
        v23 = (v21 << 8) + 128; /*0x425f4a*/
        v24 = v22; /*0x425f50*/
        goto LABEL_41; /*0x425f53*/
      }
      v38[0] = v21; /*0x425f5d*/
      v38[1] = (((v39) >> 16) & 0xFFFF); /*0x425f62*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425f78*/
      {
        *aP1 = (v21 << 8) + 128; /*0x425f99*/
        aP1->u32_4 = (v31 << 8) + 128; /*0x425fa2*/
        aP1->u32_8 = 0; /*0x425fa7*/
        return (gamemd::AnimClass **)(aP1); /*0x425fb0*/
      }
      v38[1] = v22; /*0x425fb8*/
      v38[0] = v39; /*0x425fbd*/
      if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v38) ) /*0x425fd3*/
      {
        *aP1 = (v8 << 8) + 128; /*0x425ff0*/
        aP1->u32_4 = (v22 << 8) + 128; /*0x425ffa*/
        aP1->u32_8 = 0; /*0x425ffd*/
        return (gamemd::AnimClass **)(aP1); /*0x426006*/
      }
    }
  }
  if ( dword_89A150 ) /*0x426011*/
  {
    LABEL_39:
    *aP1 = Map_InvalidCoord_X; /*0x426090*/
    aP1->u32_4 = Map_InvalidCoord_Y; /*0x4260a3*/
    aP1->u32_8 = Map_InvalidCoord_Z; /*0x4260ac*/
    return (gamemd::AnimClass **)(aP1); /*0x4260b5*/
  }
  v26 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x426032*/
  v27 = 0; /*0x426034*/
  while ( 1 ) /*0x426046*/
  {
    v28 = ((v27 + v26) % 8) & 7; /*0x426046*/
    v29 = v39 + LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x426058*/
    LOWORD(v28) = (((v39) >> 16) & 0xFFFF) + HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x426061*/
    v38[0] = v29; /*0x426066*/
    v38[1] = v28; /*0x42606f*/
    *(unsigned int *)v34 = *(unsigned int *)v38; /*0x42607d*/
    if ( (unsigned __int8)BuildingClass::IsCellPlaceable((BuildingClass *)this, v34) ) /*0x426081*/
      break; /*0x426081*/
    if ( ++v27 >= 8 ) /*0x42608e*/
      goto LABEL_39; /*0x42608e*/
  }
  v24 = v34[1]; /*0x4260bd*/
  v23 = (v34[0] << 8) + 128; /*0x4260c5*/
  LABEL_41:
  *aP1 = v23; /*0x4260cb*/
  aP1->u32_4 = (v24 << 8) + 128; /*0x4260dd*/
  aP1->u32_8 = 0; /*0x4260e0*/
  return (gamemd::AnimClass **)(aP1); /*0x425faa*/

}
}  // G42.18 ns repair
// 0x485020
namespace gamemd {
int Building::GetNthOfType()
{


  int BuildingByTiberiumType; // eax
  BuildingByTiberiumType = FindBuildingByTiberiumType(*&this->u32_44); /*0x485026*/
  if ( BuildingByTiberiumType == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return ((unsigned __int8)this->u32_11E + 1) /*0x48504f*/
  * *(unsigned int *)(*(unsigned int *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 184);

}
}
// 0x772A90
namespace gamemd {
int Building::GetRenderType()
{


  unsigned char *Building_field_0xA0; // ecx
  Building_field_0xA0 = (unsigned char *)(this->q0A0); /*0x772a90*/
  int result = 0; // eax /*0x772a96*/
  if ( Building_field_0xA0->q2A4 ) /*0x772a98*/
    result = 4; /*0x772aa2*/
  if ( Building_field_0xA0->u8_2A5 ) /*0x772aa7*/
    (result) = ((result) & ~0xFF) | ((result | 0xB8) & 0xFF); /*0x772ab1*/
  return result; /*0x772ab3*/

}
}
// 0x69E7E0
namespace gamemd {
unsigned int * Building::GetFoundationSize(unsigned int * a1, unsigned int a2)
{


  int v2; // eax
  v2 = (int)(MixFileClass::LoadSubFile()); /*0x69e7e0*/
  __int16 *v3; // eax
  if ( v2 && a2 < v2->u32_6 && (v3 = (__int16 *)(v2 + 24 * a2 + 8)) != 0 ) /*0x69e7fe*/
  {
    int v4 = *v3; // ecx /*0x69e800*/
    int v5; // edx
    v5 = v3[1]; /*0x69e803*/
    int v6; // esi
    v6 = v3[2]; /*0x69e809*/
    int v7; // edi
    v7 = v3[3]; /*0x69e80e*/
    *a1 = v4; /*0x69e818*/
    a1->ptr_2 = v5; /*0x69e81a*/
    a1->ptr_3 = v6; /*0x69e81d*/
    a1->ptr_4 = v7; /*0x69e820*/
    return a1; /*0x69e812*/
  }
  else
  {
    *a1 = dword_B077A0; /*0x69e835*/
    a1->ptr_2 = dword_B077A4; /*0x69e83d*/
    a1->ptr_3 = dword_B077A8; /*0x69e846*/
    a1->ptr_4 = dword_B077AC; /*0x69e84f*/
    return a1; /*0x69e829*/
  }

}
} // namespace gamemd
