// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x436BE0
namespace gamemd {
unsigned int * BuildingLightClass::FindTarget(CCINIClass * aP1)
{

  CCINIClass *result; // eax
  BuildingLightClass *v3; // edi
  int v4; // edx
  ObjectClass *v5; // eax
  int v6; // ebx
  TechnoClass *v7; // esi
  int v8; // eax
  int *location; // ecx
  int v10; // edi
  int v11; // ebx
  unsigned int *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  TechnoClass *v16; // eax
  BuildingLightClass *v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  TechnoClass *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  TechnoClass *v22; // [esp+30h] [ebp-38h]
  int v23; // [esp+34h] [ebp-34h] BYREF
  unsigned int *nextArrayIndex; // [esp+38h] [ebp-30h] BYREF
  int v25; // [esp+3Ch] [ebp-2Ch]
  int v26; // [esp+44h] [ebp-24h]
  int v27; // [esp+48h] [ebp-20h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = aP1; /*0x436be9*/
  v3 = (BuildingLightClass *)this; /*0x436bef*/
  *((unsigned int *)this + 44) = 0; /*0x436bfa*/
  *((unsigned int *)this + 55) = aP1; /*0x436c00*/
  *((unsigned int *)this + 45) = 0; /*0x436c06*/
  if ( aP1 == (CCINIClass *)3 ) /*0x436c0c*/
  {
    v4 = *(unsigned int *)(*(int (**)(unsigned int *, unsigned int **))(*(unsigned int *)this + 1760))(this, &nextArrayIndex); /*0x436c21*/
    v5 = (ObjectClass *)v3->FollowingObject; /*0x436c23*/
    v25 = v4; /*0x436c29*/
    v19 = (TechnoClass *)&unk_98967F; /*0x436c2d*/
    v22 = 0; /*0x436c3b*/
    nextArrayIndex = (unsigned int *)v5[3].nextArrayIndex; /*0x436c3f*/
    v17 = (BuildingLightClass *)-1; /*0x436c43*/
    do /*0x436d74*/
    {
      v6 = -1; /*0x436c53*/
      v21 = -1; /*0x436c58*/
      IDA_LOWORD(v18) = v25 + (unsigned short)v17; /*0x436c5c*/
      do /*0x436d62*/
      {
        IDA_HIWORD(v18) = v6 + IDA_HIWORD(v25); /*0x436c6c*/
        v23 = v18; /*0x436c7b*/
        v7 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v23) + 57); /*0x436c84*/
        if ( v7 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (**)(TechnoClass *))(*(unsigned int *)v7->__pad_0 + 44))(v7) == 15 /*0x436cb9*/
               || (*(int (**)(TechnoClass *))(*(unsigned int *)v7->__pad_0 + 44))(v7) == 1)
              && !Object::IsAlliedWithObjectHouse(nextArrayIndex, (IUnknown *)v7) )
            {
              v8 = *(unsigned int *)v7->__pad_0; /*0x436ccc*/
              location = v3->location; /*0x436cce*/
              v10 = v3->location[0]; /*0x436cd0*/
              v11 = location[1]; /*0x436cd2*/
              v29 = location[2]; /*0x436cdf*/
              v12 = (unsigned int *)(*(int (**)(TechnoClass *, char *))(v8 + 72))(v7, v30); /*0x436ce3*/
              v13 = v12[1] - v11; /*0x436ced*/
              v26 = *v12 - v10; /*0x436cf3*/
              v14 = v12[2]; /*0x436cf7*/
              v27 = v13; /*0x436cfa*/
              v28 = v14 - v29; /*0x436d07*/
              v15 = Math::Sqrt((double)v26 * (double)v26 + (double)(v14 - v29) * (double)(v14 - v29) + (double)v13 * (double)v13); /*0x436d2c*/
              v16 = (TechnoClass *)Math::RoundToInt(v15); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v7; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v7 = (TechnoClass *)v7->nextObject; /*0x436d47*/
            if ( !v7 ) /*0x436d4c*/
              break; /*0x436d4c*/
            v3 = (BuildingLightClass *)this; /*0x436c94*/
          }
          v6 = v21; /*0x436d52*/
          v3 = (BuildingLightClass *)this; /*0x436d56*/
        }
        v21 = ++v6; /*0x436d5e*/
      }
      while ( v6 < 2 ); /*0x436d62*/
      v17 = (BuildingLightClass *)((char *)v17 + 1); /*0x436d70*/
    }
    while ( (int)v17 < 2 ); /*0x436d74*/
    result = (CCINIClass *)v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      v3->BuildingLightClass_field_E0 = (int)v22; /*0x436d82*/
  }
  return result->__pad_0; /*0x436d88*/

}
}
// 0x4370C0
namespace gamemd {
BuildingLightClass * BuildingLightClass::SDDTOR(void * Block, char a2)
{

  int v3; // eax
  void *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)Block = &vt_BuildingLightClass; /*0x4370c4*/
  *((unsigned int *)Block + 1) = &vt_BuildingLightClass; /*0x4370ca*/
  *((unsigned int *)Block + 2) = &vt_BuildingLightClass; /*0x4370d1*/
  *((unsigned int *)Block + 3) = &vt_BuildingLightClass; /*0x4370d8*/
  if ( (uint8_t)ObjectClass::Undeploy(Block) ) /*0x4370df*/
    VectorClass::RemoveItem((int *)&g_abs_87F778, (ObjectClass *)Block); /*0x4370ee*/
  v5 = Block; /*0x437103*/
  v3 = (*(int (**)(char *, void **))(*(unsigned int *)&g_abs_89F690 + 16))( /*0x437107*/
         &g_abs_89F690,
         &v5);
  if ( v3 != -1 && v3 < *(int *)&g_abs_89F690 ) /*0x437117*/
  {
    --*(unsigned int *)&g_abs_89F690; /*0x43711c*/
    for ( ; /*0x437122*/
          v3 < *(int *)&g_abs_89F690;
          *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&g_abs_89F690
                                                                                               + 4 * v3) )
    {
      ++v3; /*0x43712a*/
    }
  }
  ObjectClass::Dtor(Block); /*0x43713e*/
  if ( (Block & 1) != 0 ) /*0x437148*/
    OperatorDelete(Block); /*0x43714b*/
  return (BuildingLightClass *)Block; /*0x437155*/

}
} // namespace gamemd

// 0x513D20
namespace gamemd {
signed int BuildingLightClass::UpdateOscillation()
{

  int v2; // eax
  int *v3; // eax
  int GroundHeight; // edi
  int v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // edi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // ecx
  char v20; // bl
  signed int result; // eax
  RulesClass *v22; // ecx
  double v23; // st7
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+28h] [ebp-Ch] BYREF
  int v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+30h] [ebp-4h]

  v24 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 456))(*((unsigned int *)this + 3)); /*0x513d3a*/
  v26 = v24; /*0x513d3e*/
  v2 = *((unsigned int *)this + 3); /*0x513d42*/
  if ( *(unsigned int *)(v2 + 1504) != -1 ) /*0x513d4c*/
  {
    v3 = (int *)(v2 + 156); /*0x513d52*/
    v28 = *v3; /*0x513d59*/
    v29 = v3[1]; /*0x513d65*/
    v30 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v28); /*0x513d7a*/
    v5 = *((unsigned int *)this + 3); /*0x513d7c*/
    v6 = (int *)(v5 + 156); /*0x513d8b*/
    v7 = *(unsigned int *)(v5 + 1504) & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + g_abs_89F6D8[2 * v7]; /*0x513dab*/
    v29 = v9 + *(unsigned int *)(v11 + 4); /*0x513dad*/
    v28 = v12; /*0x513dbb*/
    v30 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v28) > GroundHeight ) /*0x513dca*/
      v26 = v24 - IDA_HIDWORD(g_abs_8871E0->ShakeScreen); /*0x513ddc*/
  }
  v25 = Math::RoundToInt((double)v24 + *(double *)((char *)this + 96)); /*0x513dec*/
  v13 = (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 3) + 4) + 16))(*((unsigned int *)this + 3) + 4); /*0x513df9*/
  if ( (v13 & 1) != 0 ) /*0x513dfe*/
    v14 = 1.0; /*0x513e00*/
  else
    v14 = 1.1; /*0x513e08*/
  v15 = (int)&g_abs_A8ED84[v13]; /*0x513e20*/
  v16 = v14 * *(double *)&g_abs_8871E0->HoverBob * 900.0; /*0x513e23*/
  v27 = v15 % (int)Math::RoundToInt(v16); /*0x513e3a*/
  v17 = Math::SinCos((double)v27 * 6.283185307179586 / v16); /*0x513e4f*/
  v18 = Math::RoundToInt(v17 + v17 + (double)v25); /*0x513e5d*/
  if ( v18 < 0 ) /*0x513e66*/
  {
    *((unsigned int *)this + 24) = 0; /*0x513e68*/
    *((unsigned int *)this + 25) = 0; /*0x513e6b*/
    v18 = 0; /*0x513e6e*/
  }
  v19 = *((unsigned int *)this + 3); /*0x513e70*/
  v20 = *(unsigned char *)(v19 + 116); /*0x513e74*/
  *(unsigned char *)(v19 + 116) = 0; /*0x513e77*/
  (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), v18); /*0x513e7f*/
  result = *((unsigned int *)this + 3); /*0x513e85*/
  *(unsigned char *)(result + 116) = v20; /*0x513e8c*/
  v22 = g_abs_8871E0; /*0x513e8f*/
  if ( v26 < IDA_SHIDWORD(g_abs_8871E0->ShakeScreen) ) /*0x513e9b*/
  {
    if ( StreamClass::GetDirty((char *)this + 4) ) /*0x513ea1*/
      *(double *)((char *)this + 96) = ((double)IDA_SHIDWORD(g_abs_8871E0->ShakeScreen) /*0x513ec8*/
                              + (double)IDA_SHIDWORD(g_abs_8871E0->ShakeScreen)
                              - (double)v26)
                             / (double)IDA_SHIDWORD(g_abs_8871E0->ShakeScreen)
                             * (double)g_abs_8871E0[1].?
                             + *(double *)((char *)this + 96);
    v22 = g_abs_8871E0; /*0x513ecd*/
    result = IDA_SHIDWORD(g_abs_8871E0->ShakeScreen) / 4; /*0x513edf*/
    if ( v26 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((uint64_t)(1431655766LL * g_abs_8871E0[1].?) >> 32) >> 31; /*0x513ef5*/
      *(double *)((char *)this + 96) = (double)(g_abs_8871E0[1].? / 3) + *(double *)((char *)this + 96); /*0x513f05*/
      v22 = g_abs_8871E0; /*0x513f08*/
    }
  }
  v23 = *(double *)((char *)this + 96) - (double)v22[1].?; /*0x513f15*/
  *(double *)((char *)this + 96) = v23; /*0x513f18*/
  *(double *)((char *)this + 96) = v23 * *(double *)&g_abs_8871E0->HoverDampen; /*0x513f27*/
  return result; /*0x513f2a*/

}
}
// 0x436900
namespace gamemd {
int BuildingLightClass::SD_vt12()
{

  return 232; /*0x436905*/

}
} // namespace gamemd

// 0x436910
namespace gamemd {
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = 2041169559; /*0x436940*/
  return 0; /*0x43691d*/

}
} // namespace gamemd

// 0x4369C0
namespace gamemd {
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4369d4*/

}
} // namespace gamemd

// 0x4369E0
namespace gamemd {
int BuildingLightClass::SD_vt34()
{

  return 0; /*0x4369e2*/

}
} // namespace gamemd

// 0x4369F0
namespace gamemd {
int BuildingLightClass::SD_vt30()
{

  return 3; /*0x4369f5*/

}
} // namespace gamemd

// 0x4370B0
namespace gamemd {
int BuildingLightClass::SD_vt11()
{

  return 19; /*0x4370b5*/

}
} // namespace gamemd
