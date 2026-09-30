// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/FlyLocomotionClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"

// 0x4CC9A0
namespace gamemd {
int FlyLocomotionClass::LocomotionClass()
{

  int v2; // edx

  LocomotionClass::Init((unsigned int *)this); /*0x4cc9a3*/
  *((unsigned char *)this + 24) = 0; /*0x4cc9ad*/
  *((unsigned int *)this + 7) = g_abs_8B3C78; /*0x4cc9b6*/
  *((unsigned int *)this + 8) = g_abs_8B3C7C; /*0x4cc9be*/
  *((unsigned int *)this + 9) = g_abs_8B3C80; /*0x4cc9c7*/
  *((unsigned int *)this + 10) = g_abs_8B3C78; /*0x4cc9d3*/
  *((unsigned int *)this + 11) = g_abs_8B3C7C; /*0x4cc9dc*/
  v2 = g_abs_8B3C80; /*0x4cc9df*/
  *((unsigned int *)this + 16) = 0; /*0x4cc9e5*/
  *((unsigned int *)this + 18) = 0; /*0x4cc9e8*/
  *((unsigned char *)this + 52) = 0; /*0x4cc9eb*/
  *((unsigned int *)this + 14) = 0; /*0x4cc9ee*/
  *((unsigned int *)this + 17) = 0; /*0x4cc9f1*/
  *((unsigned int *)this + 19) = 0; /*0x4cc9f4*/
  *((unsigned char *)this + 80) = 0; /*0x4cc9f7*/
  *((unsigned char *)this + 81) = 0; /*0x4cc9fa*/
  *((unsigned char *)this + 82) = 0; /*0x4cc9fd*/
  *((unsigned char *)this + 83) = 0; /*0x4cca00*/
  *((unsigned int *)this + 21) = 0; /*0x4cca03*/
  *((unsigned int *)this + 22) = 0; /*0x4cca06*/
  *((unsigned char *)this + 92) = 0; /*0x4cca09*/
  *(unsigned int *)this = &vt_FlyLocomotionClass; /*0x4cca0c*/
  *((unsigned int *)this + 1) = &vt_FlyLocomotionClass; /*0x4cca12*/
  *((unsigned int *)this + 12) = v2; /*0x4cca1b*/
  return this; /*0x4cca1e*/

}
} // namespace gamemd
// 0x4CFE80
namespace gamemd {
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{

  int v2; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  void **v10; // [esp+Ch] [ebp-30h] BYREF
  void *Block; // [esp+10h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-28h]
  char v13; // [esp+19h] [ebp-23h]
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  void **v16; // [esp+24h] [ebp-18h] BYREF
  void *v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  char v19; // [esp+31h] [ebp-Bh]
  int v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h]
  char v22; // [esp+40h] [ebp+4h]

  if ( *(unsigned int *)(*(unsigned int *)(a1 + 8) + 692) ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ((ObjectVector *)(&v16))->Construct(0, 0); /*0x4cfea2*/
  v16 = &vt_DynamicVectorClass_ObjectClass; /*0x4cfeb7*/
  v21 = 10; /*0x4cfebb*/
  v20 = 0; /*0x4cfebf*/
  ((ObjectVector *)(&v10))->Construct(0, 0); /*0x4cfec3*/
  v10 = &vt_DynamicVectorClass_ObjectClass; /*0x4cfecd*/
  v15 = 10; /*0x4cfed3*/
  v14 = 0; /*0x4cfed7*/
  if ( !g_abs_A8B238[0] /*0x4cfeef*/
    || (v2 = *(unsigned int *)(*(unsigned int *)(a1 + 8) + 540), *(unsigned int *)(v2 + 22016) == -1)
    || (v22 = 1, (uint8_t)House::IsCurrentPlayer((#375 *)v2)) )
  {
    v22 = 0; /*0x4cfefd*/
  }
  for ( i = g_abs_A8EC88 - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *((unsigned int *)g_abs_A8EC7C + i); /*0x4cff17*/
    if ( v22 ) /*0x4cff20*/
    {
      if ( *(unsigned int *)(v4 + 540) != *(unsigned int *)&HouseClass_Array->__pad_0[4 /*0x4cff5e*/
                                                                        * *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a1 + 8)
                                                                                                + 540)
                                                                                    + 22016)] )
        continue; /*0x4cff5e*/
    }
    else if ( (uint8_t)HouseClass::IsAlliedWith(*(#375 **)(*(unsigned int *)(a1 + 8) + 540), *(#375 **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(unsigned char *)(v4 + 129)
      && *(unsigned char *)(v4 + 144)
      && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3226)
      && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 561)
      && ((*(unsigned int *)g_abs_A8B230 & 0x800) == 0
       || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) != 1
       || !*(unsigned char *)(*(unsigned int *)(v4 + 1732) + 3598)) )
    {
      if ( g_abs_A8B238[0] /*0x4d003d*/
        && (uint8_t)House::IsCurrentPlayer(*(#375 **)(*(unsigned int *)(a1 + 8) + 540))
        && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(v4 + 540) + 52) + 422)
        && ((*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 1
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 6
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 15
         || (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 2) )
      {
        if ( v14 >= v12 /*0x4d0069*/
          && (!v13 && v12
           || v15 <= 0
           || !((uint8_t (*)(void ***, int, unsigned int))v10[2])(&v10, v15 + v12, 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = v14++; /*0x4d0074*/
        v6 = Block; /*0x4d007b*/
      }
      else
      {
        if ( v20 >= v18 /*0x4d00ab*/
          && (!v19 && v18
           || v21 <= 0
           || !((uint8_t (*)(void ***, int, unsigned int))v16[2])(&v16, v21 + v18, 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = v20++; /*0x4d00b6*/
        v6 = v17; /*0x4d00bd*/
      }
      v6[v5] = v4; /*0x4d00c1*/
    }
  }
  if ( v14 <= 0 ) /*0x4d00d1*/
  {
    if ( v20 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, v20 - 1); /*0x4d0109*/
    v8 = v17; /*0x4d0111*/
    v9 = **(unsigned int **)(a1 + 8); /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, v14 - 1); /*0x4d00e2*/
    v8 = Block; /*0x4d00ea*/
    v9 = **(unsigned int **)(a1 + 8); /*0x4d00ee*/
  }
  (*(void (**)(unsigned int))(v9 + 968))(v8[v7]); /*0x4d011b*/
LABEL_45:
  v10 = &vt_VectorClass_ObjectClass; /*0x4d0121*/
  if ( Block && v13 ) /*0x4d0136*/
  {
    RA2_OPDEL(Block); /*0x4d0139*/
    Block = 0; /*0x4d0141*/
  }
  v16 = &vt_VectorClass_ObjectClass; /*0x4d0149*/
  v13 = 0; /*0x4d0150*/
  v12 = 0; /*0x4d0154*/
  if ( v17 ) /*0x4d0159*/
  {
    if ( v19 ) /*0x4d015f*/
      RA2_OPDEL(v17); /*0x4d0162*/
  }

}
} // namespace gamemd
// 0x4CFC80
namespace gamemd {
int FlyLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *a2 = 1247291206; /*0x4cfc96*/
  a2[1] = 298948665; /*0x4cfc9e*/
  a2[2] = -1610610249; /*0x4cfca7*/
  a2[3] = -777003740; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/

}
} // namespace gamemd
// 0x4CFCC0
namespace gamemd {
int FlyLocomotionClass::BeginMove(int * a1, int * a2)
{

  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( a1 ) /*0x4cfcd6*/
    {
      *a1 = (int)&vt_FlyLocomotionClass; /*0x4cfcd8*/
      a1[1] = (int)&vt_FlyLocomotionClass; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/

}
} // namespace gamemd
// 0x4D0390
namespace gamemd {
int FlyLocomotionClass::StubReturn96()
{

  return 96; /*0x4d0395*/

}
} // namespace gamemd
// 0x4D03A0
namespace gamemd {
FlyLocomotionClass * FlyLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{

  *Block = &vt_FlyLocomotionClass; /*0x4d03a3*/
  *(Block + 1) = &vt_FlyLocomotionClass; /*0x4d03a9*/
  LocomotionClass::Construct(Block); /*0x4d03b0*/
  if ( (Block & 1) != 0 ) /*0x4d03ba*/
    RA2_OPDEL(Block); /*0x4d03bd*/
  return (FlyLocomotionClass *)Block; /*0x4d03c7*/

}
} // namespace gamemd