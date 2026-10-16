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
namespace gamemd {  // G42.18 ns repair
MapClass * * FogOfWar::RevealArea(int *a2, int *aP1, int a1)
{
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int *v12; // ebx
  int v13; // ebp
  int v14; // eax
  uint16_t v15; // ax
  int v16; // ebx
  int v17; // ebx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  bool v28; // cc
  int v29; // edi
  int v30; // ebx
  int v31; // ebp
  int v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  unsigned int v37[2]; // [esp+20h] [ebp-20h] BYREF
  int GroundHeight; // [esp+28h] [ebp-18h]
  int v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  int v41; // [esp+44h] [ebp+4h]
  char v42; // [esp+44h] [ebp+4h]
  int v43; // [esp+44h] [ebp+4h]

  result = (int)dword_A83D4C; /*0x655c50*/
  if ( !dword_A83D4C ) /*0x655c62*/
    return result; /*0x655c62*/
  result = (*(int (**)(unsigned int, char *))(*this->u32_121C + 120))(this->u32_121C, v40); /*0x655c75*/
  v5 = *a2; /*0x655c7e*/
  v41 = *a2; /*0x655c82*/
  if ( v41 < *(unsigned int *)result ) /*0x655c86*/
    return result; /*0x655c86*/
  if ( v5 >= *(unsigned int *)result + result->vtable3 ) /*0x655c93*/
    return result; /*0x655c93*/
  v6 = a2->__pad_004; /*0x655c99*/
  v7 = result->vtable2; /*0x655c9c*/
  if ( v6 < v7 ) /*0x655ca5*/
    return result; /*0x655ca5*/
  result = v7 + result->vtable4; /*0x655cae*/
  if ( v6 >= result ) /*0x655cb2*/
    return result; /*0x655cb2*/
  v8 = (double)v41 / this->u32_1488 - (double)this->u32_1490; /*0x655cc2*/
  v37[0] = ((int16_t)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((int16_t)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = Cell::GetGroundHeight(v37); /*0x655d38*/
  if ( !g_hWnd || (v42 = 1, !Cell::IsPassable(v37)) ) /*0x655d4f*/
    v42 = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !(uint8_t)FogOfWar_Get((IUnknown *)(v37))) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  v9 = *this->ptr_1258 + 24 * (uint8_t)(*a2 - 5 * a2[1]); /*0x655da7*/
  v10 = *(unsigned int *)(v9 + 16); /*0x655daa*/
  v11 = *(unsigned int *)(v9 + 4); /*0x655dae*/
  v10 = v10; /*0x655db3*/
  if ( v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  v12 = (unsigned int *)(v11 + 4); /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(v12 - 1); /*0x655dc4*/
    if ( *v12 != *a2 || v12[1] != a2->__pad_004 ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!v42 || (uint8_t)((House *)(*(void **)(v13 + 540)))->IsHumanPlayer()) /*0x655e10*/
      && (!*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(dword_A83D4C, v13)) )
    {
      if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = *(unsigned int *)(v13 + 540); /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(unsigned char *)(*(unsigned int *)(v14 + 52) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v10; /*0x655e66*/
    LABEL_25:
    v12 += 4; /*0x655e6a*/
    if ( ++v35 >= v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
    LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (**)(unsigned int, int *))(*this->ptr_1220 + 40))(this->ptr_1220, a2); /*0x655e93*/
      (*(void (**)(unsigned int, int *, unsigned int))(*this->u32_121C + 36))( /*0x655f40*/
        this->u32_121C,
        a2,
        ((unsigned int)((uint8_t)((uint8_t)(v15 >> g_BitShift_Red) << g_BitShift_Green_0) >> 1) >> g_BitShift_Green_0 << g_BitShift_Red)
      | ((unsigned int)((uint8_t)((uint8_t)(v15 >> g_BitMask_Green) << g_BitMask_Blue) >> 1) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned int)((uint8_t)((uint8_t)(v15 >> g_BitShift_Blue) << g_BitMask_Red) >> 1) >> g_BitMask_Red << g_BitShift_Blue));
    }
    else if ( v42 ) /*0x65605e*/
    {
      (*(void (__stdcall **)(int *, unsigned int))(*this->u32_121C + 36))(a2, 0); /*0x65608c*/
    }
    else
    {
      v20 = *this->u32_121C; /*0x65606f*/
      v21 = (*(int (**)(unsigned int, int *))(*this->ptr_1220 + 40))(this->ptr_1220, a2); /*0x656071*/
      (*(void (**)(unsigned int, int *, int))(v20 + 36))(this->u32_121C, a2, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = *(unsigned int *)(v13 + 540); /*0x655f50*/
  v43 = v16; /*0x655f5b*/
  if ( (*(uint8_t (**)(int))(*(unsigned int *)v13 + 196))(v13) ) /*0x655f5f*/
  {
    v43 = (*(int (**)(int, unsigned int))(*(unsigned int *)v13 + 208))(v13, 0); /*0x655f76*/
    v16 = v43; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
    v17 = (*(uint8_t *)(v43 + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x655fd2*/
  | (*(uint8_t *)(v43 + 22266) >> g_BitMask_Blue << g_BitMask_Green)
  | (*(uint8_t *)(v16 + 22267) >> g_BitMask_Red << g_BitShift_Blue);
  else
    v17 = *(unsigned int *)(FindBuildingAnimByName((gamemd::AbstractClass *)(g_INI_Key_LightGrey), 1) + 816); /*0x655fe5*/
  v18 = *(unsigned int *)(v13 + 372); /*0x655feb*/
  v19 = *(unsigned int *)(v13 + 380); /*0x655ff1*/
  if ( v18 == -1 ) /*0x655ffa*/
  {
    LABEL_37:
    if ( v19 <= 0 || (v19 - 1) / dword_8871E0->InfantryHeadPop % 2 != 1 || *(void **)(v13 + 540) != (void *)(dword_A83D4C) ) /*0x65603a*/
      goto LABEL_41; /*0x65603a*/
    (*(void (**)(unsigned int, int *, int))(*this->u32_121C + 36))(this->u32_121C, a2, ~v17); /*0x656048*/
  }
  else
  {
    if ( (int)dword_A8ED84 - v18 < v19 ) /*0x656006*/
    {
      v19 -= (int)dword_A8ED84 - v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
    LABEL_41:
    (*(void (__stdcall **)(int *, int))(*this->u32_121C + 36))(a2, v17); /*0x65604d*/
  }
  LABEL_45:
  v22 = this->u32_149C; /*0x65608f*/
  v23 = this->u32_14A0; /*0x656095*/
  v24 = &this->u32_4830; /*0x6560a0*/
  v25 = v22 + *a2; /*0x6560a6*/
  v26 = a2[1] + v23; /*0x6560a8*/
  if ( v24[2] <= 0 || v24[3] <= 0 ) /*0x6560be*/
  {
    v27 = v22 + *a2; /*0x656125*/
    v29 = a2[1] + v23; /*0x656127*/
    result = 1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *v24; /*0x6560c2*/
    v28 = *v24 <= v25; /*0x6560c5*/
    v29 = v24[1]; /*0x6560c7*/
    v30 = v24[2]; /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = v24[3]; /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 += v27 - v25; /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( v29 > v26 ) /*0x6560e6*/
    {
      v31 = v29 - v26 + v39; /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( v27 + v30 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = v25 - v27 + 2; /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( v39 + v29 < v26 + 1 ) /*0x656114*/
      v32 = v26 - v29 + 2; /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = v32; /*0x656121*/
  }
  *v24 = v27; /*0x65612d*/
  v24[1] = v29; /*0x65612f*/
  v24[2] = result; /*0x656132*/
  v24[3] = v33; /*0x656135*/
  return result; /*0x656138*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x656150
namespace gamemd {
int FogOfWar::RenderCell()
{
  int result; // eax

  int v2 = this->u32_121C; // esi /*0x65615f*/
  int v3; // edi
  v3 = (*(int (**)(int))(*(unsigned int *)v2 + 128))(v2); /*0x65616f*/
  int64_t v4; // rax
  v4 = v3 * (*(int (**)(int))(*(unsigned int *)v2 + 124))(v2); /*0x65617b*/
  char *v5; // edi
  v5 = (char *)this->u32_1274; /*0x65617f*/
  (*(((unsigned int *)&(v4)) + 1)) = ((((((unsigned char *)&(v4))[4]) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * ((*(((unsigned int *)&(v4)) + 1)) >> 2)); /*0x656194*/
  char *v6; // edi
  v6 = &v5[4 * ((*(((unsigned int *)&(v4)) + 1)) >> 2)]; /*0x656194*/
  unsigned int v7; // ecx
  v7 = (((unsigned char *)&(v4))[4]) & 3; /*0x656198*/
  int v8 = 0; // edx /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  int v23; // [esp+14h] [ebp-4h]
  v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    int v9 = v8 + *this->ptr_1258; // eax /*0x6561ab*/
    int v10; // ecx
    v10 = *(unsigned int *)(v9 + 16); /*0x6561ad*/
    result = *(unsigned int *)(v9 + 4); /*0x6561b0*/
    if ( v10 > 0 ) /*0x6561b5*/
    {
      unsigned int *v12 = &result->u32_4; // edi /*0x6561bb*/
      v10 = v10; /*0x6561be*/
      do /*0x65629e*/
      {
        unsigned int *v13; // esi
        v13 = (unsigned int *)*(v12 - 1); /*0x6561c8*/
        int v14; // edx
        v14 = *v12 /*0x6561d8*/
        + v12[1] * (*(int (**)(unsigned int))(*this->u32_121C + 124))(this->u32_121C);
        int v15; // eax
        v15 = 1 << (v14 & 7); /*0x6561e2*/
        unsigned char *v16; // edx
        v16 = (unsigned char *)(this->u32_1274 + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (uint8_t)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          int BuildingAnimByName; // ebx
          BuildingAnimByName = *(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable + 4 * *(unsigned int *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(uint8_t (**)(unsigned int *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (**)(unsigned int *, unsigned int))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable /*0x656248*/
            + 4
            * *(unsigned int *)((*(int (**)(unsigned int *, unsigned int))(*v13 + 208))(
                                                             v13,
                                                             0)
            + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x65625c*/
          }
          int v18; // ecx
          v18 = *(unsigned int *)(BuildingAnimByName + 816); /*0x65625e*/
          int v19; // ebx
          v19 = *(unsigned int *)(BuildingAnimByName + 780); /*0x656264*/
          int v20; // edx
          v20 = *(unsigned int *)(v19 + 372); /*0x65626d*/
          int v21; // eax
          if ( *(unsigned int *)(v19 + 4) == 1 ) /*0x656276*/
            v21 = *(uint8_t *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(uint16_t *)(v20 + 2 * v18); /*0x656281*/
          (*(void (**)(unsigned int, unsigned int *, int))(*this->u32_121C + 36))( /*0x65628f*/
            this->u32_121C,
            v12,
            v21);
        }
        v12 += 4; /*0x656296*/
        result = --v10; /*0x656299*/
      }
      while ( v10 ); /*0x65629e*/
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
void FogOfWar::RevealCell(unsigned int *aP1)
{

  if ( (int)*aP1 >= 0 /*0x656310*/
    && *aP1 < (*(int (**)(unsigned int))(*this->u32_121C + 124))(this->u32_121C)
    && (int)aP1[1] >= 0
    && aP1->u32_4 < (*(int (**)(unsigned int))(*this->u32_121C + 128))(this->u32_121C) )
  {
    int v3; // edx
    v3 = *aP1 + aP1->u32_4 * (*(int (**)(unsigned int))(*this->u32_121C + 124))(this->u32_121C); /*0x656329*/
    int v4; // eax
    v4 = 1 << (v3 & 7); /*0x656333*/
    unsigned char *v5; // edx
    v5 = (unsigned char *)(this->u32_1274 + (v3 >> 3)); /*0x65633e*/
    if ( (*v5 & (uint8_t)v4) == 0 ) /*0x656344*/
    {
      *v5 |= v4; /*0x65634f*/
      int v6 = this->u32_1264; // eax /*0x656351*/
      int v7; // ecx
      if ( this->u32_126C < v6 /*0x656376*/
        || (this->u32_1269 || !v6)
        && (v7 = this->u32_1270, v7 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(this->u32_125C + 8))(&this->u32_125C, v6 + v7, 0) )
      {
        int v8 = this->u32_126C; // eax /*0x65637d*/
        int v9 = this->u32_1260; // edx /*0x656380*/
        this->u32_126C = v8 + 1; /*0x656386*/
        *(unsigned int *)(v9 + 8 * v8) = *aP1; /*0x65638b*/
        *(unsigned int *)(v9 + 8 * v8 + 4) = aP1->u32_4; /*0x656391*/
      }
      this->u32_14D9 = 1; /*0x656395*/
    }
  }
}
} // namespace gamemd
// 0x657CE0
namespace gamemd {
int FogOfWar::Render(void *a1, void *a2, void *a3, void *a4)
{
  int result; // eax
  int v11[6]; // [esp+14h] [ebp-20h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    int v7; // ebp
    v7 = (*(int (**)(unsigned int))(*this->u32_121C + 124))(this->u32_121C); /*0x657d4e*/
    result = (*(int (**)(unsigned int))(*this->u32_121C + 128))(this->u32_121C); /*0x657d52*/
    int v8 = 0; // ebx /*0x657d58*/
    for ( result = result; v8 < result; ++v8 ) /*0x657d60*/
    {
      int v9 = 0; // esi /*0x657d62*/
      if ( v7 > 0 ) /*0x657d66*/
      {
        do /*0x657d7f*/
        {
          v11[0] = v9; /*0x657d6c*/
          v11[1] = v8; /*0x657d73*/
          FogOfWar::RevealArea(v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = result; /*0x657d81*/
      }
    }
  }
  else
  {
    int *v2; // esi
    v2 = (int *)this->u32_121C; /*0x657cf2*/
    int v3 = *v2; // ebx /*0x657d06*/
    int v4; // eax
    v4 = (*(int (**)(unsigned int, int *, unsigned int, int))(**&this->ptr_1220 + 120))( /*0x657d0d*/
           this->ptr_1220,
           v11,
           0,
           1);
    int v5; // eax
    unsigned char v12[8]; // [esp+2Ch] [ebp-8h] BYREF
    v5 = (*(int (**)(int *, unsigned char *, unsigned int, int))(*v2 + 120))(v2, v12, this->ptr_1220, v4); /*0x657d21*/
    (*(void (**)(unsigned int, int))(v3 + 8))(this->u32_121C, v5); /*0x657d2b*/
    return FogOfWar::RenderCell(); /*0x657d30*/
  }
  return result; /*0x657d35*/
}
} // namespace gamemd
// 0x5864A0
namespace gamemd {
bool FogOfWar_Get(IUnknown * aP0)
{
  unsigned int *NeighbourContent; // eax

  int v1; // eax
  v1 = aP0[2] / dword_ABDE88; /*0x5864ac*/
  if ( (v1 & 1) != 0 ) /*0x5864b5*/
  {
    int16_t v8; // [esp+4h] [ebp-8h]
    v8 = *aP0 / 256; /*0x5864cd*/
    int16_t v10; // [esp+6h] [ebp-6h]
    v10 = aP0[1] / 256; /*0x5864e3*/
    int v2 = v1 / 2 + 1; // ecx /*0x5864f0*/
    unsigned int v3; // eax
    v3 = (int16_t)(v8 - v2) + ((int16_t)(v10 - v2) << 9); /*0x586508*/
    unsigned int *v4; // eax
    if ( v3 >= 0x40000 || (v4 = *(unsigned int **)(dword_87F924 + 4 * v3)) == 0 ) /*0x58651e*/
    {
      int v11; // [esp+10h] [ebp+4h]
      (*((unsigned short *)&(v11))) = v8 - v2; /*0x5864fa*/
      (*(((unsigned short *)&(v11)) + 1)) = v10 - v2; /*0x5864f5*/
      dword_ABDC74 = v11; /*0x586524*/
      v4 = (unsigned int *)(unk_ABDC50); /*0x586529*/
    }
    if ( (int)v4[79] <= 0 ) /*0x586536*/
      return 0; /*0x586536*/
    NeighbourContent = (unsigned int *)(Cell::GetNeighbourContent(v4, 3u)); /*0x586540*/
  }
  else
  {
    int16_t v9; // [esp+4h] [ebp-8h]
    v9 = *aP0 / 256; /*0x586559*/
    int v12; // [esp+10h] [ebp+4h]
    (*(((unsigned short *)&(v12)) + 1)) = aP0[1] / 256 - v1 / 2; /*0x586580*/
    (*((unsigned short *)&(v12))) = v9 - v1 / 2; /*0x586585*/
    unsigned int v6; // eax
    v6 = (int16_t)v12 + ((*((signed short *)(((unsigned char *)&(v12)) + 2))) << 9); /*0x586593*/
    if ( v6 >= 0x40000 || (NeighbourContent = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x5865a9*/
    {
      dword_ABDC74 = (unsigned int)((unsigned int *)(v12));
      NeighbourContent = (unsigned int *)(unk_ABDC50); /*0x5865b4*/
    }
  }
  return (int)NeighbourContent[79] > 0; /*0x5865c5*/
}
} // namespace gamemd
