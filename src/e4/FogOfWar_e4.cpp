// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x655C50
namespace gamemd {
MapClass * * FogOfWar::RevealArea(RadarClass * aP1)
{
    unsigned int v13 = 0;  /* G37 hoist */

  IUnknown *result; // eax
  int v5; // ecx
  IUnknown *v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  IUnknown *v10; // ecx
  int v11; // eax
  int v12; // ebx
  #375 **v13; // ebp
  #375 *v14; // eax
  uint16_t v15; // ax
  RadarClass *v16; // ebx
  int v17; // ebx
  #375 *v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // esi
  int v25; // eax
  RadarClass *v26; // ecx
  int v27; // edx
  bool v28; // cc
  RadarClass *v29; // edi
  IUnknown *v30; // ebx
  IUnknown *v31; // ebp
  IUnknown *v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  IUnknown *v36; // [esp+18h] [ebp-28h]
  unsigned int v37[2]; // [esp+20h] [ebp-20h] BYREF
  IUnknown *GroundHeight; // [esp+28h] [ebp-18h]
  IUnknown *v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  RadarClass *aP1a; // [esp+44h] [ebp+4h]
  char aP1b; // [esp+44h] [ebp+4h]
  RadarClass *aP1c; // [esp+44h] [ebp+4h]

  result = (IUnknown *)(HouseClass_Player);
  if ( !HouseClass_Player ) /*0x655c62*/
    return (int)result; /*0x655c62*/
  result = (IUnknown *)(*(int (**)(unsigned int, char *))(**(unsigned int **)((char *)this + 4636) + 120))( /*0x655c75*/
                         *((unsigned int *)this + 1159),
                         v40);
  v5 = aP1->field_0; /*0x655c7e*/
  aP1a = (RadarClass *)aP1->field_0; /*0x655c82*/
  if ( (int)aP1a < result->field_0 ) /*0x655c86*/
    return (int)result; /*0x655c86*/
  if ( v5 >= result->field_0 + result->field_8 ) /*0x655c93*/
    return (int)result; /*0x655c93*/
  v6 = (IUnknown *)aP1->field_4; /*0x655c99*/
  v7 = result->field_4; /*0x655c9c*/
  if ( (int)v6 < v7 ) /*0x655ca5*/
    return (int)result; /*0x655ca5*/
  result = (IUnknown *)(v7 + result->field_C); /*0x655cae*/
  if ( (int)v6 >= (int)result ) /*0x655cb2*/
    return (int)result; /*0x655cb2*/
  v8 = (double)(int)aP1a / *(float *)((char *)this + 5256) - (double)*((int *)this + 1316); /*0x655cc2*/
  v37[0] = ((int16_t)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((int16_t)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = (IUnknown *)((Cell *)(v37))->GetGroundHeight(); /*0x655d38*/
  if ( !g_hWnd || (aP1b = 1, !((Cell *)(v37))->IsPassable()) ) /*0x655d4f*/
    aP1b = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !FogOfWar_Get(v37)) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  v9 = **(unsigned int **)((char *)this + 4696) + 24 * (uint8_t)(aP1->field_0 - 5 * (int)aP1->field_4); /*0x655da7*/
  v10 = *(IUnknown **)(v9 + 16); /*0x655daa*/
  v11 = *(unsigned int *)(v9 + 4); /*0x655dae*/
  v36 = v10; /*0x655db3*/
  if ( (int)v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  v12 = v11 + 4; /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(#375 ***)(v12 - 4); /*0x655dc4*/
    if ( *(unsigned int *)v12 != aP1->field_0 || *(void **)(v12 + 4) != aP1->field_4 ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!aP1b || (uint8_t)House::IsHumanPlayer(v13[135])) /*0x655e10*/
      && (!*(unsigned char *)((*((int (**)(#375 **))*v13 + 33))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(HouseClass_Player, (IUnknown *)v13)) )
    {
      if ( !*(unsigned char *)((*((int (**)(#375 **))*v13 + 33))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(unsigned char *)((*((int (**)(#375 **))*v13 + 33))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = v13[135]; /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(unsigned char *)(*((unsigned int *)v14 + 13) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v36; /*0x655e66*/
LABEL_25:
    v12 += 16; /*0x655e6a*/
    if ( ++v35 >= (int)v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (**)(unsigned int, RadarClass *))(**(unsigned int **)((char *)this + 4640) + 40))( /*0x655e93*/
              *((unsigned int *)this + 1160),
              aP1);
      (*(void (**)(unsigned int, RadarClass *, unsigned int))(**(unsigned int **)((char *)this + 4636) + 36))( /*0x655f40*/
        *((unsigned int *)this + 1159),
        aP1,
        ((unsigned int)((uint8_t)((uint8_t)(v15 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) >> 1) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
      | ((unsigned int)((uint8_t)((uint8_t)(v15 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) >> 1) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
      | ((unsigned int)((uint8_t)((uint8_t)(v15 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) >> 1) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]));
    }
    else if ( aP1b ) /*0x65605e*/
    {
      (*(void (**)(RadarClass *, unsigned int))(**(unsigned int **)((char *)this + 4636) + 36))(aP1, 0); /*0x65608c*/
    }
    else
    {
      v20 = **(unsigned int **)((char *)this + 4636); /*0x65606f*/
      v21 = (*(int (**)(unsigned int, RadarClass *))(**(unsigned int **)((char *)this + 4640) + 40))( /*0x656071*/
              *((unsigned int *)this + 1160),
              aP1);
      (*(void (**)(unsigned int, RadarClass *, int))(v20 + 36))(*((unsigned int *)this + 1159), aP1, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = (RadarClass *)v13[135]; /*0x655f50*/
  aP1c = v16; /*0x655f5b*/
  if ( (*((uint8_t (**)(#375 **))*v13 + 49))(v13) ) /*0x655f5f*/
  {
    aP1c = (RadarClass *)(*((int (**)(#375 **, unsigned int))*v13 + 52))(v13, 0); /*0x655f76*/
    v16 = aP1c; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
    v17 = ((uint8_t)aP1c[1].__pad_16BB[2946] >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x655fd2*/
        | ((uint8_t)aP1c[1].__pad_16BB[2947] >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
        | ((uint8_t)v16[1].__pad_16BB[2948] >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
  else
    v17 = *(unsigned int *)(FindBuildingAnimByName(&stru_830620.__pad_579C[4368], 1) + 816); /*0x655fe5*/
  v18 = v13[93]; /*0x655feb*/
  v19 = (int)v13[95]; /*0x655ff1*/
  if ( v18 == (#375 *)-1 ) /*0x655ffa*/
  {
LABEL_37:
    if ( v19 <= 0 /*0x65603a*/
      || (v19 - 1) / *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 136) % 2 != 1
      || v13[135] != (#375 *)HouseClass_Player )
    {
      goto LABEL_41; /*0x65603a*/
    }
    (*(void (**)(unsigned int, RadarClass *, int))(**(unsigned int **)((char *)this + 4636) + 36))( /*0x656048*/
      *((unsigned int *)this + 1159),
      aP1,
      ~v17);
  }
  else
  {
    if ( *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v18 < v19 ) /*0x656006*/
    {
      v19 -= *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664] - (unsigned int)v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
LABEL_41:
    (*(void (**)(RadarClass *, int))(**(unsigned int **)((char *)this + 4636) + 36))(aP1, v17); /*0x65604d*/
  }
LABEL_45:
  v22 = *((unsigned int *)this + 1319); /*0x65608f*/
  v23 = *((unsigned int *)this + 1320); /*0x656095*/
  v24 = (char *)this + 4620; /*0x6560a0*/
  v25 = v22 + aP1->field_0; /*0x6560a6*/
  v26 = (RadarClass *)((char *)aP1->field_4 + v23); /*0x6560a8*/
  if ( *(int *)(v24 + 8) <= 0 || *(int *)(v24 + 12) <= 0 ) /*0x6560be*/
  {
    v27 = v22 + aP1->field_0; /*0x656125*/
    v29 = (RadarClass *)((char *)aP1->field_4 + v23); /*0x656127*/
    result = (IUnknown *)1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *(unsigned int *)v24; /*0x6560c2*/
    v28 = *(unsigned int *)v24 <= v25; /*0x6560c5*/
    v29 = *(RadarClass **)(v24 + 4); /*0x6560c7*/
    v30 = *(IUnknown **)(v24 + 8); /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = *(IUnknown **)(v24 + 12); /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 = (IUnknown *)((char *)v30 + v27 - v25); /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( (int)v29 > (int)v26 ) /*0x6560e6*/
    {
      v31 = (IUnknown *)((char *)v39 + (char *)v29 - (char *)v26); /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( (int)v30 + v27 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = (IUnknown *)(v25 - v27 + 2); /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( (int)v29 + (int)v39 < (int)&v26->field_0 + 1 ) /*0x656114*/
      v32 = (IUnknown *)((char *)v26 - (char *)v29 + 2); /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = (int)v32; /*0x656121*/
  }
  *(unsigned int *)v24 = v27; /*0x65612d*/
  *(unsigned int *)(v24 + 4) = v29; /*0x65612f*/
  *(unsigned int *)(v24 + 8) = result; /*0x656132*/
  *(unsigned int *)(v24 + 12) = v33; /*0x656135*/
  return (int)result; /*0x656138*/

}
} // namespace gamemd
// 0x656150
namespace gamemd {
int FogOfWar::RenderCell()
{

  int v2; // esi
  int v3; // edi
  int64_t v4; // rax
  char *v5; // edi
  char *v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int result; // eax
  unsigned int *v12; // edi
  unsigned int *v13; // esi
  int v14; // edx
  int v15; // eax
  unsigned char *v16; // edx
  int BuildingAnimByName; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // eax
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v2 = *((unsigned int *)this + 1159); /*0x65615f*/
  v3 = (*(int (**)(int))(*(unsigned int *)v2 + 128))(v2); /*0x65616f*/
  v4 = v3 * (*(int (**)(int))(*(unsigned int *)v2 + 124))(v2); /*0x65617b*/
  v5 = *(char **)((char *)this + 4724); /*0x65617f*/
  IDA_HIDWORD(v4) = (((IDA_BYTE4(v4) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * (IDA_HIDWORD(v4) >> 2)); /*0x656194*/
  v6 = &v5[4 * (IDA_HIDWORD(v4) >> 2)]; /*0x656194*/
  v7 = IDA_BYTE4(v4) & 3; /*0x656198*/
  v8 = 0; /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    v9 = v8 + **(unsigned int **)((char *)this + 4696); /*0x6561ab*/
    v10 = *(unsigned int *)(v9 + 16); /*0x6561ad*/
    result = *(unsigned int *)(v9 + 4); /*0x6561b0*/
    if ( v10 > 0 ) /*0x6561b5*/
    {
      v12 = (unsigned int *)(result + 4); /*0x6561bb*/
      v22 = v10; /*0x6561be*/
      do /*0x65629e*/
      {
        v13 = (unsigned int *)*(v12 - 1); /*0x6561c8*/
        v14 = *v12 /*0x6561d8*/
            + v12[1] * (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 4636) + 124))(*((unsigned int *)this + 1159));
        v15 = 1 << (v14 & 7); /*0x6561e2*/
        v16 = (unsigned char *)(*((unsigned int *)this + 1181) + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (uint8_t)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          BuildingAnimByName = *((unsigned int *)g_abs_B054D4 + *(unsigned int *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(uint8_t (**)(unsigned int *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (**)(unsigned int *, unsigned int))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *((unsigned int *)g_abs_B054D4 /*0x656248*/
                                   + *(unsigned int *)((*(int (**)(unsigned int *, unsigned int))(*v13 + 208))(v13, 0) + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(g_abs_836ECC, 1); /*0x65625c*/
          }
          v18 = *(unsigned int *)(BuildingAnimByName + 816); /*0x65625e*/
          v19 = *(unsigned int *)(BuildingAnimByName + 780); /*0x656264*/
          v20 = *(unsigned int *)(v19 + 372); /*0x65626d*/
          if ( *(unsigned int *)(v19 + 4) == 1 ) /*0x656276*/
            v21 = *(uint8_t *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(uint16_t *)(v20 + 2 * v18); /*0x656281*/
          (*(void (**)(unsigned int, unsigned int *, int))(**(unsigned int **)((char *)this + 4636) + 36))( /*0x65628f*/
            *((unsigned int *)this + 1159),
            v12,
            v21);
        }
        v12 += 4; /*0x656296*/
        result = --v22; /*0x656299*/
      }
      while ( v22 ); /*0x65629e*/
      v8 = v23; /*0x6562a4*/
    }
    v8 += 24; /*0x6562a8*/
    v23 = v8; /*0x6562b1*/
  }
  while ( v8 < 6144 ); /*0x6562b5*/
  return result; /*0x6562bb*/

}
} // namespace gamemd
// 0x6562D0
namespace gamemd {
AbstractClass * FogOfWar::RevealCell(IUnknown * aP1)
{

  int v3; // edx
  int v4; // eax
  unsigned char *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( aP1->field_0 >= 0 /*0x656310*/
    && aP1->field_0 < (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 4636) + 124))(*((unsigned int *)this + 1159))
    && aP1->field_4 >= 0
    && aP1->field_4 < (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 4636) + 128))(*((unsigned int *)this + 1159)) )
  {
    v3 = aP1->field_0 /*0x656329*/
       + aP1->field_4 * (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 4636) + 124))(*((unsigned int *)this + 1159));
    v4 = 1 << (v3 & 7); /*0x656333*/
    v5 = (unsigned char *)(*((unsigned int *)this + 1181) + (v3 >> 3)); /*0x65633e*/
    if ( (*v5 & (uint8_t)v4) == 0 ) /*0x656344*/
    {
      *v5 |= v4; /*0x65634f*/
      v6 = *((unsigned int *)this + 1177); /*0x656351*/
      if ( *((unsigned int *)this + 1179) < v6 /*0x656376*/
        || (*((unsigned char *)this + 4713) || !v6)
        && (v7 = *((unsigned int *)this + 1180), v7 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 1175) + 8))((char *)this + 4700, v6 + v7, 0) )
      {
        v8 = *((unsigned int *)this + 1179); /*0x65637d*/
        v9 = *((unsigned int *)this + 1176); /*0x656380*/
        *((unsigned int *)this + 1179) = v8 + 1; /*0x656386*/
        *(unsigned int *)(v9 + 8 * v8) = aP1->field_0; /*0x65638b*/
        *(unsigned int *)(v9 + 8 * v8 + 4) = aP1->field_4; /*0x656391*/
      }
      *((unsigned char *)this + 5337) = 1; /*0x656395*/
    }
  }

}
} // namespace gamemd
// 0x657CE0
namespace gamemd {
int FogOfWar::Render()
{

  int *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int i; // [esp+10h] [ebp-24h]
  unsigned int v11[6]; // [esp+14h] [ebp-20h] BYREF
  unsigned char v12[8]; // [esp+2Ch] [ebp-8h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    v7 = (*(int (**)(unsigned int))(**((unsigned int *)this + 1159) + 124))(*((unsigned int *)this + 1159)); /*0x657d4e*/
    result = (*(int (**)(unsigned int))(**((unsigned int *)this + 1159) + 128))(*((unsigned int *)this + 1159)); /*0x657d52*/
    v8 = 0; /*0x657d58*/
    for ( i = result; v8 < result; ++v8 ) /*0x657d60*/
    {
      v9 = 0; /*0x657d62*/
      if ( v7 > 0 ) /*0x657d66*/
      {
        do /*0x657d7f*/
        {
          v11[0] = v9; /*0x657d6c*/
          v11[1] = v8; /*0x657d73*/
          FogOfWar::RevealArea((int)this, (RadarClass *)v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = i; /*0x657d81*/
      }
    }
  }
  else
  {
    v2 = *((unsigned int *)this + 1159); /*0x657cf2*/
    v3 = *v2; /*0x657d06*/
    v4 = (*(int (**)(unsigned int, unsigned int *, unsigned int, int))(**((unsigned int *)this + 1160) + 120))(*((unsigned int *)this + 1160), v11, 0, 1); /*0x657d0d*/
    v5 = (*(int (**)(int *, unsigned char *, unsigned int, int))(*v2 + 120))(v2, v12, *((unsigned int *)this + 1160), v4); /*0x657d21*/
    (*(void (**)(unsigned int, int))(v3 + 8))(*((unsigned int *)this + 1159), v5); /*0x657d2b*/
    return FogOfWar::RenderCell((int)this); /*0x657d30*/
  }
  return result; /*0x657d35*/

}
} // namespace gamemd
// 0x5864A0
namespace gamemd {
bool FogOfWar_Get(IUnknown * aP0)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4;
  unsigned int * NeighbourContent;
  unsigned int v6; // eax
  int16_t v8; // [esp+4h] [ebp-8h]
  int16_t v9; // [esp+4h] [ebp-8h]
  int16_t v10; // [esp+6h] [ebp-6h]
  int v11; // [esp+10h] [ebp+4h]
  int v12; // [esp+10h] [ebp+4h]

  v1 = aP0[2] / dword_ABDE88; /*0x5864ac*/
  if ( (v1 & 1) != 0 ) /*0x5864b5*/
  {
    v8 = (unsigned int)(*aP0 / 256);
    v10 = (unsigned int)(aP0[1] / 256);
    v2 = (unsigned int)(v1 / 2 + 1);
    v3 = (unsigned int)((int16_t)(v8 - v2) + ((int16_t)(v10 - v2) << 9));
    if ( v3 >= 0x40000 || (v4 = *(unsigned int **)(dword_87F924 + 4 * v3)) == 0 ) /*0x58651e*/
    {
      IDA_LOWORD(v11) = v8 - v2; /*0x5864fa*/
      IDA_HIWORD(v11) = v10 - v2; /*0x5864f5*/
      dword_ABDC74 = v11; /*0x586524*/
      v4 = unk_ABDC50; /*0x586529*/
    }
    if ( (int)((unsigned int *)(v4))[79] <= 0 ) /*0x586536*/
      return 0; /*0x586536*/
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u); /*0x586540*/
  }
  else
  {
    v9 = (unsigned int)(*aP0 / 256);
    IDA_HIWORD(v12) = aP0[1] / 256 - v1 / 2; /*0x586580*/
    IDA_LOWORD(v12) = v9 - v1 / 2; /*0x586585*/
    v6 = (int16_t)v12 + (IDA_SHIWORD(v12) << 9); /*0x586593*/
    if ( v6 >= 0x40000 || (NeighbourContent = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x5865a9*/
    {
      dword_ABDC74 = (unsigned int *)(v12);
      NeighbourContent = (unsigned int *)(unk_ABDC50);
    }
  }
  return (int)((unsigned int *)(NeighbourContent))[79] > 0; /*0x5865c5*/
}
} // namespace gamemd
