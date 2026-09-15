// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_580BC0_e4.hpp"
#include "e4/classes/E4Recv_581090_e4.hpp"
#include "e4/classes/E4Recv_583AD0_e4.hpp"
#include "e4/classes/E4Recv_583C60_e4.hpp"
#include "e4/classes/E4Recv_5840C0_e4.hpp"
#include "e4/classes/E4Recv_5851B0_e4.hpp"
#include "e4/classes/E4Recv_585930_e4.hpp"
#include "e4/classes/E4Recv_5868A0_e4.hpp"
#include "e4/classes/E4Recv_587C50_e4.hpp"
#include "e4/classes/E4Recv_58BE20_e4.hpp"
#include "e4/classes/E4Recv_58BEA0_e4.hpp"
#include "e4/classes/E4Recv_58C320_e4.hpp"
#include "e4/classes/E4Recv_58C3B0_e4.hpp"
#include "e4/classes/E4Recv_58C4A0_e4.hpp"
#include "e4/classes/E4Recv_58D120_e4.hpp"

// 0x5835D0
namespace gamemd {
int * FindCliffSeedCell(int * a0, IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__stdcall FindCliffSeedCell(int *a0, IUnknown *aP1, IUnknown *aP2)
{
  unsigned int v3; // eax
  VectorClass *v4; // eax
  VectorClass *v5; // ecx
  int v7; // eax
  TagClass *v8; // eax
  char *NeighbourContent; // edi
  VectorClass *v10; // ebp
  char *v11; // ebx
  VectorClass *v12; // esi
  TagClass *v13; // ebx
  IUnknown *v14; // esi
  double v15; // st7
  double v16; // st7
  __int16 v17; // di
  __int16 v18; // ax
  double v19; // st7
  double v20; // st7
  TagClass *v21; // [esp+18h] [ebp-Ch] BYREF
  TagClass *v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h]

  v3 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x5835e1*/
  if ( v3 < 0x40000 && (v4 = *(VectorClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x5835f7*/
  {
    v5 = v4; /*0x5835f9*/
  }
  else
  {
    v5 = (VectorClass *)g_CellClassArray; /*0x5835ff*/
    g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x583604*/
  }
  if ( ((int)v5[20].vtable0 & 0x100) != 0 ) /*0x583618*/
  {
    v7 = -(((int)v5[20].vtable0 & 0x800) != 0); /*0x583631*/
    LOBYTE(v7) = v7 & 0xFE; /*0x583634*/
    v8 = (TagClass *)(v7 + 4); /*0x583637*/
    NeighbourContent = (char *)v5; /*0x58363b*/
    v22 = v8; /*0x58363d*/
    v10 = v5 + 20; /*0x583644*/
    v11 = (char *)&v5[20]; /*0x583649*/
    v23 = ((_BYTE)v8 - 4) & 7; /*0x58364b*/
    v12 = v5; /*0x58364f*/
    aP1 = (IUnknown *)g_MapSeedState; /*0x583657*/
    v21 = g_MapSeedState; /*0x58365b*/
    while ( 1 ) /*0x583665*/
    {
      if ( ((int)v10->vtable0 & 0x100) != 0 ) /*0x58366b*/
      {
        NeighbourContent = (char *)Cell::GetNeighbourContent(NeighbourContent, (unsigned int)v8); /*0x583675*/
        v10 = (VectorClass *)(NeighbourContent + 320); /*0x583680*/
        if ( (*((_DWORD *)NeighbourContent + 80) & 0x100) == 0 /*0x5836a5*/
          && (Cell::IsInRange((int *)NeighbourContent) || Cell::IsInRange2((int *)NeighbourContent))
          && *((_DWORD *)NeighbourContent + 59) != 3 )
        {
          aP1 = (IUnknown *)*((_DWORD *)NeighbourContent + 9); /*0x5836aa*/
        }
      }
      if ( (*(_DWORD *)v11 & 0x100) == 0 ) /*0x5836b3*/
        goto LABEL_22; /*0x5836b3*/
      v12 = (VectorClass *)Cell::GetNeighbourContent(v12, v23); /*0x5836c1*/
      v11 = (char *)&v12[20]; /*0x5836cc*/
      if ( ((int)v12[20].vtable0 & 0x100) == 0 ) /*0x5836d2*/
      {
        if ( (Cell::IsInRange((int *)v12) || Cell::IsInRange2((int *)v12)) && *(_DWORD *)&v12[14].IsInitialized != 3 ) /*0x5836f1*/
          v21 = (TagClass *)v12[2].Items; /*0x5836f6*/
        if ( (*(_DWORD *)v11 & 0x100) == 0 ) /*0x5836ff*/
        {
LABEL_22:
          if ( ((int)v10->vtable0 & 0x100) == 0 ) /*0x58370b*/
            break; /*0x58370b*/
        }
      }
      v8 = v22; /*0x583661*/
    }
    v13 = g_MapSeedState; /*0x583711*/
    v22 = g_MapSeedState; /*0x583723*/
    if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x583727*/
    {
      v13 = (TagClass *)aP1; /*0x583730*/
      v22 = (TagClass *)aP1; /*0x583734*/
    }
    if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v21, (TechnoClass *)1) ) /*0x583744*/
    {
      if ( (TagClass *)__PAIR32__(HIWORD(v22), (unsigned __int16)v13) == g_MapSeedState ) /*0x583758*/
        goto LABEL_28; /*0x583758*/
      v14 = aP2; /*0x58376c*/
      v15 = (double)(__int16)(HIWORD(v21) - HIWORD(aP2->field_0)); /*0x58378e*/
      aP2 = (IUnknown *)(__int16)((_WORD)v21 - LOWORD(aP2->field_0)); /*0x583792*/
      v16 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)aP2 * (double)(int)aP2 + v15 * v15)); /*0x5837ab*/
      v17 = Math::RoundToInt(v16); /*0x5837ba*/
      v18 = (_WORD)aP1 - LOWORD(v14->field_0); /*0x5837c5*/
      aP2 = (IUnknown *)(__int16)(HIWORD(aP1) - HIWORD(v14->field_0)); /*0x5837ce*/
      v19 = (double)(int)aP2; /*0x5837d2*/
      aP2 = (IUnknown *)v18; /*0x5837d6*/
      v20 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v18 * (double)v18 + v19 * v19)); /*0x5837ef*/
      if ( v17 < (__int16)Math::RoundToInt(v20) ) /*0x5837ff*/
LABEL_28:
        v13 = v21; /*0x583801*/
    }
    *a0 = (int)v13; /*0x58380c*/
    return a0; /*0x583805*/
  }
  else
  {
    *a0 = (int)v5[2].Items; /*0x583621*/
    return a0; /*0x58361a*/
  }
}
}
} // namespace gamemd

// 0x583AD0
namespace gamemd {
int E4Recv_583AD0::sub_583AD0(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_583AD0(_DWORD *this, int *a2)
{
  _DWORD *i; // eax
  IUnknown *TileIndex; // eax
  IUnknown *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  void *v11; // ebp
  int v12; // esi
  int v13; // edx
  int v14; // eax
  CCINIClass *v15; // edi
  int v16; // esi
  void **v18; // [esp+10h] [ebp-18h] BYREF
  void *Block; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  char v21; // [esp+1Dh] [ebp-Bh]
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  VectorClass::Construct(&v18, 0, 0); /*0x583ae1*/
  v18 = &vt_DynamicVectorClass_int; /*0x583af1*/
  v23 = 10; /*0x583af9*/
  v22 = 0; /*0x583b05*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_18[8] = (char *)MEMORY[0x87F8E4].field_4 + MEMORY[0x87F8E4].field_0 + 1; /*0x583b0d*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_18[12] = (char *)MEMORY[0x87F8E4].field_4 /*0x583b22*/
                                            + MEMORY[0x87F8DC]
                                            - MEMORY[0x87F8E4].field_0;
  for ( i = MapClass::SpiralSearch(&MEMORY[0x87F7E8]); i; i = MapClass::SpiralSearch(&MEMORY[0x87F7E8]) ) /*0x583b2f*/
  {
    if ( i[19] == 4 ) /*0x583b39*/
    {
      TileIndex = (IUnknown *)MapClass::GetTileIndex(this, (IUnknown *)(i + 9), (IUnknown *)0xA, 0); /*0x583b49*/
      v5 = TileIndex; /*0x583b4e*/
      if ( (int)TileIndex >= 0 ) /*0x583b52*/
      {
        v6 = v22; /*0x583b54*/
        if ( (int)TileIndex >= v22 ) /*0x583b5a*/
        {
          v7 = (int)&TileIndex->field_0 - v22 + 1; /*0x583b5e*/
          if ( v7 > 0 ) /*0x583b61*/
          {
            v8 = v7; /*0x583b63*/
            v9 = v20; /*0x583b65*/
            while ( 1 ) /*0x583b6f*/
            {
              if ( v6 < v9 ) /*0x583b71*/
                goto LABEL_13; /*0x583b71*/
              if ( (v21 || !v9) && v23 > 0 ) /*0x583b85*/
                break; /*0x583b85*/
LABEL_15:
              if ( !--v8 ) /*0x583bb6*/
                goto LABEL_16; /*0x583bb6*/
              v6 = v22; /*0x583b6b*/
            }
            if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v18[2])(&v18, v23 + v9, 0) ) /*0x583b94*/
            {
LABEL_13:
              v10 = v22++; /*0x583b9b*/
              *((_DWORD *)Block + v10) = 0; /*0x583baa*/
            }
            v9 = v20; /*0x583bb1*/
            goto LABEL_15; /*0x583bb1*/
          }
        }
LABEL_16:
        ++*((_DWORD *)Block + (_DWORD)v5); /*0x583bb8*/
      }
    }
  }
  v11 = Block; /*0x583bd1*/
  v12 = -1; /*0x583bd9*/
  v13 = 0; /*0x583bdc*/
  v14 = 0; /*0x583bde*/
  if ( v22 > 0 ) /*0x583be2*/
  {
    v15 = (CCINIClass *)Block; /*0x583be4*/
    do /*0x583bf6*/
    {
      if ( *(_DWORD *)v15->__pad_0 > v13 ) /*0x583bea*/
      {
        v12 = v14; /*0x583bec*/
        v13 = *(_DWORD *)v15->__pad_0; /*0x583bee*/
      }
      ++v14; /*0x583bf0*/
      v15 = (CCINIClass *)((char *)v15 + 4); /*0x583bf1*/
    }
    while ( v14 < v22 ); /*0x583bf6*/
  }
  *a2 = v12; /*0x583bfe*/
  if ( v12 < 0 ) /*0x583c00*/
  {
    v18 = &vt_VectorClass_int; /*0x583c31*/
    if ( v11 && v21 ) /*0x583c41*/
      __3_YAXPAX_Z(v11); /*0x583c44*/
    return 0; /*0x583c4f*/
  }
  else
  {
    v16 = *((_DWORD *)v11 + v12); /*0x583c02*/
    v18 = &vt_VectorClass_int; /*0x583c06*/
    if ( v11 ) /*0x583c10*/
    {
      if ( v21 ) /*0x583c18*/
        __3_YAXPAX_Z(v11); /*0x583c1b*/
    }
    return v16; /*0x583c23*/
  }
}
}
} // namespace gamemd

// 0x585F40
namespace gamemd {
int InterpolateTerrainLighting(int a1, MouseClass * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall InterpolateTerrainLighting(int a1, MouseClass *aP1, int a3, int a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  unsigned int v7; // edx
  __int16 v8; // si
  __int16 v9; // di
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  unsigned int v13; // edx
  __int16 v14; // cx
  __int16 v15; // bx
  bool v16; // cc
  int v18; // eax
  int v19; // eax
  __int16 v20; // bp
  int v22; // eax
  int v23; // esi
  int v24; // edi
  int v25; // [esp+14h] [ebp+4h]
  __int16 aP1a; // [esp+18h] [ebp+8h]
  MouseClass *aP1b; // [esp+18h] [ebp+8h]
  int v28; // [esp+1Ch] [ebp+Ch]
  int v29; // [esp+20h] [ebp+10h]
  int v30; // [esp+20h] [ebp+10h]

  if ( !aP1 ) /*0x585f4b*/
    return 0; /*0x585f4b*/
  if ( aP1 == (MouseClass *)1 ) /*0x585f52*/
    return *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8300] + 36 * a4 + 32) + 22500); /*0x5862a9*/
  if ( aP1 != (MouseClass *)2 ) /*0x585f59*/
    return 0; /*0x5862af*/
  v4 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8324] + 36 * a3 + 32); /*0x585f71*/
  v5 = (v4 - 1) % 130; /*0x585f79*/
  v6 = 4 * v5; /*0x585f82*/
  v7 = (int)((unsigned __int64)(2114445439LL * (v4 - v5)) >> 32) >> 6; /*0x585f8b*/
  v28 = 4 * ((v7 >> 31) + v7) - 4; /*0x585fa2*/
  v8 = v6 - (v6 / 4 % 2 != 0); /*0x585fbf*/
  v9 = 4 * ((v7 >> 31) + v7) - 4 - (v28 / 4 % 2 != 0); /*0x585fde*/
  v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8324] + 36 * a4 + 32); /*0x585fe7*/
  v11 = (v10 - 1) % 130; /*0x585ff4*/
  v12 = 4 * v11; /*0x585ffd*/
  v13 = (int)((unsigned __int64)(2114445439LL * (v10 - v11)) >> 32) >> 6; /*0x586006*/
  aP1a = v12; /*0x58600b*/
  v29 = 4 * ((v13 >> 31) + v13) - 4; /*0x586021*/
  v14 = v12 - (v12 / 4 % 2 != 0); /*0x586042*/
  v15 = v29 - (v29 / 4 % 2 != 0); /*0x586061*/
  v16 = v14 <= v8; /*0x586063*/
  if ( v14 == v8 ) /*0x586066*/
  {
    if ( v9 == v15 ) /*0x58606b*/
      return (*(_DWORD *)(a1 + 4 * ((__int16)v6 / 4 + 130 * ((__int16)v28 / 4)) + 23024) /*0x5860d1*/
            + *(_DWORD *)(a1 + 4 * (aP1a / 4 + 130 * ((__int16)v29 / 4)) + 23024)) >> 1;
    v16 = v14 <= v8; /*0x5860d4*/
  }
  if ( v16 ) /*0x5860d7*/
  {
    if ( v15 <= v9 ) /*0x5860f5*/
      v18 = (v15 < v9) + 6; /*0x586106*/
    else
      v18 = 5; /*0x5860f7*/
  }
  else if ( v15 <= v9 ) /*0x5860dc*/
  {
    v18 = (v15 >= v9) + 1; /*0x5860ed*/
  }
  else
  {
    v18 = 3; /*0x5860de*/
  }
  v30 = v18; /*0x586117*/
  aP1b = *(MouseClass **)(a1 /*0x586174*/
                        + 4
                        * ((__int16)(LOWORD(dword_ABD460[dword_82A984[2 * v18]]) + v8) / 4
                         + 130 * ((__int16)(v9 + HIWORD(dword_ABD460[dword_82A984[2 * v18]])) / 4))
                        + 23024);
  v19 = dword_82A988[2 * v18]; /*0x586178*/
  v20 = v8 + LOWORD(dword_ABD460[v19]); /*0x58618e*/
  LOWORD(v19) = v9 + HIWORD(dword_ABD460[v19]); /*0x586195*/
  v22 = *(_DWORD *)(a1 + 4 * (v20 / 4 + 130 * ((__int16)v19 / 4)) + 23024); /*0x5861be*/
  v25 = (int)aP1b; /*0x5861cb*/
  if ( (int)aP1b >= v22 ) /*0x5861cf*/
    v25 = v22; /*0x5861d1*/
  v23 = *(_DWORD *)(a1 /*0x58622a*/
                  + 4
                  * ((__int16)(v14 + LOWORD(dword_ABD460[dword_82A9C4[2 * v30]])) / 4
                   + 130 * ((__int16)(v15 + HIWORD(dword_ABD460[dword_82A9C4[2 * v30]])) / 4))
                  + 23024);
  v24 = *(_DWORD *)(a1 /*0x58626d*/
                  + 4
                  * ((__int16)(LOWORD(dword_ABD460[dword_82A9C8[2 * v30]]) + v14) / 4
                   + 130 * ((__int16)(v15 + HIWORD(dword_ABD460[dword_82A9C8[2 * v30]])) / 4))
                  + 23024);
  if ( v23 >= v24 ) /*0x586276*/
    v23 = v24; /*0x586278*/
  return (v23 + v25) >> 1; /*0x586076*/
}
}
} // namespace gamemd

// 0x586BF0
namespace gamemd {
int MarkCliffEdgePassability(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall MarkCliffEdgePassability(int a1)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebp
  unsigned __int16 v4; // cx
  _WORD *v5; // ebx
  int i; // edx
  int v7; // esi
  unsigned int v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  _WORD *v13; // ebx
  int j; // edx
  bool v15; // zf
  unsigned int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // eax
  int v21; // [esp+0h] [ebp-34h]
  int v22; // [esp+4h] [ebp-30h]
  int v23; // [esp+8h] [ebp-2Ch]
  int v24; // [esp+10h] [ebp-24h]
  int v25; // [esp+14h] [ebp-20h]
  int v26; // [esp+18h] [ebp-1Ch]
  int v27; // [esp+1Ch] [ebp-18h]
  int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h] BYREF
  int v30; // [esp+28h] [ebp-Ch] BYREF
  int v31; // [esp+2Ch] [ebp-8h]

  v28 = a1; /*0x586bf6*/
  result = *(_DWORD *)(a1 + 96) - 1; /*0x586bfa*/
  if ( result >= 0 )
  {
    v2 = 16 * result; /*0x586c06*/
    v26 = 16 * result; /*0x586c0b*/
    v27 = *(_DWORD *)(a1 + 96); /*0x586c0f*/
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 84) + v2; /*0x586c19*/
      v21 = v3; /*0x586c1c*/
      if ( !*(_DWORD *)(v3 + 12) && !*(_BYTE *)(v3 + 8) )
      {
        v4 = *(_WORD *)(v3 + 4); /*0x586c3a*/
        if ( *(_WORD *)v3 == v4 )
        {
          v5 = (_WORD *)(4 * (*(_WORD *)(v3 + 2) >= *(_WORD *)(v3 + 6) ? 0 : 4) + 9041544);
          for ( i = *CellStruct::Add((_WORD *)v3, &v29, v5); i != *(_DWORD *)(v3 + 4); i = v23 ) /*0x586c71*/
          {
            v7 = SHIWORD(i) << 9; /*0x586c92*/
            v8 = v7 + (__int16)i; /*0x586c95*/
            if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v8)) == 0 ) /*0x586cab*/
            {
              g_Map_GlobalCellIndex = i; /*0x586cad*/
              v9 = g_CellClassArray; /*0x586cb3*/
            }
            if ( (v9[80] & 0x100) == 0 ) /*0x586cc1*/
            {
              v10 = -2; /*0x586cc3*/
              HIWORD(v22) = HIWORD(i); /*0x586cc8*/
              do /*0x586d1b*/
              {
                v11 = v7 + (__int16)(v10 + i); /*0x586cd8*/
                if ( v11 >= 0x40000 || (v12 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v11)) == 0 ) /*0x586cef*/
                {
                  LOWORD(v22) = v10 + i; /*0x586cd0*/
                  g_Map_GlobalCellIndex = v22; /*0x586cf5*/
                  v12 = g_CellClassArray; /*0x586cfa*/
                }
                ++v10; /*0x586d11*/
                v12[80] = v12[80] & 0xFFFFF3FF | 0x400; /*0x586d15*/
              }
              while ( v10 <= 1 ); /*0x586d1b*/
              v3 = v21; /*0x586d1d*/
            }
            LOWORD(v23) = i + *v5; /*0x586d2e*/
            HIWORD(v23) = HIWORD(i) + v5[1]; /*0x586d33*/
          }
        }
        else
        {
          v13 = (_WORD *)(4 * ((*(_WORD *)v3 >= v4 ? 6 : 2) & 7) + 9041544);
          for ( j = *CellStruct::Add((_WORD *)v3, &v30, v13); ; j = v25 ) /*0x586d69*/
          {
            v15 = (_WORD)j == *(_WORD *)(v3 + 4); /*0x586d6b*/
            v31 = j; /*0x586d6f*/
            if ( v15 && HIWORD(v31) == *(_WORD *)(v3 + 6) ) /*0x586d7d*/
              break; /*0x586d7d*/
            v16 = (__int16)j + (SHIWORD(v31) << 9); /*0x586d8c*/
            if ( v16 >= 0x40000 || (v17 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v16)) == 0 ) /*0x586da2*/
            {
              g_Map_GlobalCellIndex = j; /*0x586da4*/
              v17 = g_CellClassArray; /*0x586daa*/
            }
            if ( (v17[80] & 0x100) == 0 ) /*0x586db8*/
            {
              v18 = -2; /*0x586dba*/
              LOWORD(v24) = j; /*0x586dbf*/
              do /*0x586e08*/
              {
                v19 = (__int16)j + ((__int16)(HIWORD(j) + v18) << 9); /*0x586dd2*/
                if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v19), v3 = v21, !v20) ) /*0x586ded*/
                {
                  HIWORD(v24) = HIWORD(j) + v18; /*0x586dc7*/
                  g_Map_GlobalCellIndex = v24; /*0x586df3*/
                  v20 = g_CellClassArray; /*0x586df8*/
                }
                *((_BYTE *)v20 + 321) |= 0xCu; /*0x586dfd*/
                ++v18; /*0x586e04*/
              }
              while ( v18 <= 1 ); /*0x586e08*/
            }
            LOWORD(v25) = j + *v13; /*0x586e17*/
            HIWORD(v25) = HIWORD(j) + v13[1]; /*0x586e1c*/
          }
        }
      }
      v2 = v26 - 16; /*0x586e32*/
      result = v27 - 1; /*0x586e35*/
      v15 = v27 == 1; /*0x586e35*/
      v26 -= 16; /*0x586e36*/
      --v27; /*0x586e3a*/
      if ( v15 ) /*0x586e3e*/
        break; /*0x586e3e*/
      a1 = v28; /*0x586c15*/
    }
  }
  return result; /*0x586e48*/
}
}
} // namespace gamemd

// 0x588570
namespace gamemd {
char globalHelper_088570(MouseClass * aP0, VectorClass * aP1, MouseClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall globalHelper_088570(MouseClass *aP0, VectorClass *aP1, MouseClass *aP2)
{
  char v3; // cl
  MouseClass *v4; // ebp
  int v5; // eax
  _WORD *v6; // edi
  unsigned int v7; // esi
  _DWORD *v8; // ecx
  VectorClass *v9; // edx
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  int v12; // ebx
  __int16 v13; // si
  int *v14; // eax
  int v15; // edx
  int v17; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  __int16 v19; // [esp+16h] [ebp-22h]
  IUnknown *v20; // [esp+18h] [ebp-20h]
  int i; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  _DWORD v23[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x588575*/
  for ( i = 0; i < 8; i += 2 ) /*0x588579*/
  {
    v4 = aP2; /*0x588581*/
    v18 = 0; /*0x588585*/
    v5 = *(int *)&aP2->__pad_1D4[996] >> 8; /*0x588595*/
    v17 = aP0->field_0; /*0x58859a*/
    v22 = v5; /*0x58859e*/
    if ( v5 > 0 ) /*0x5885a2*/
    {
      v6 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x5885ab*/
      while ( 1 ) /*0x5885c3*/
      {
        HIWORD(v20) = HIWORD(v17) + v6[1]; /*0x5885c3*/
        LOWORD(v20) = v17 + *v6; /*0x5885c8*/
        v17 = (int)v20; /*0x5885da*/
        v7 = (SHIWORD(v20) << 9) + (__int16)v20; /*0x5885de*/
        if ( v7 >= 0x40000 || (v8 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) == 0 ) /*0x5885f7*/
        {
          g_Map_GlobalCellIndex = v20; /*0x5885f9*/
          v8 = g_CellClassArray; /*0x5885ff*/
        }
        v5 = (int)Cell::IsBridge(v8); /*0x588604*/
        if ( v5 ) /*0x58860b*/
        {
          if ( *(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5824) ) /*0x588613*/
          {
            v9 = *(VectorClass **)(v5 + 540); /*0x58861d*/
            LOBYTE(v5) = (_BYTE)aP1; /*0x588623*/
            if ( v9 == aP1 ) /*0x588629*/
              break; /*0x588629*/
          }
        }
        if ( v7 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) != 0 ) /*0x588641*/
        {
          v11 = v10; /*0x588643*/
        }
        else
        {
          g_Map_GlobalCellIndex = v20; /*0x588647*/
          v11 = g_CellClassArray; /*0x58864d*/
        }
        LOBYTE(v5) = CellClass::IsPassable( /*0x58865f*/
                       (int)v11,
                       *(IUnknown **)&aP2->__pad_1D4[1192],
                       (IUnknown *)aP2,
                       (IUnknown *)aP1);
        if ( (_BYTE)v5 ) /*0x588666*/
        {
          LOBYTE(v5) = ++v18; /*0x588674*/
          if ( v18 < v22 ) /*0x58867b*/
            continue; /*0x58867b*/
        }
        goto LABEL_21; /*0x58867b*/
      }
      v12 = v18; /*0x588686*/
      if ( v18 > 0 ) /*0x58868c*/
      {
        v13 = *v6 + LOWORD(aP0->field_0); /*0x5886ae*/
        v19 = HIWORD(aP0->field_0) + v6[1]; /*0x5886b4*/
        while ( 1 ) /*0x5886ca*/
        {
          v14 = (int *)(*(int (__thiscall **)(MouseClass *, VectorClass *))(v4->field_0 + 140))(v4, aP1); /*0x5886ca*/
          v23[1] = (v19 << 8) + 128; /*0x5886ef*/
          v23[0] = (v13 << 8) + 128; /*0x5886f7*/
          v15 = *v14; /*0x5886fb*/
          v23[2] = 0; /*0x588700*/
          (*(void (__thiscall **)(int *, _DWORD *, _DWORD))(v15 + 216))(v14, v23, 0); /*0x588708*/
          LOWORD(v5) = v19 + v6[1]; /*0x588718*/
          v13 += *v6; /*0x588725*/
          --v12; /*0x588729*/
          v19 = v5; /*0x58872a*/
          if ( !v12 ) /*0x58872e*/
            break; /*0x58872e*/
          v4 = aP2; /*0x5886bc*/
        }
      }
    }
LABEL_21:
    v3 = i + 2; /*0x588730*/
  }
  return v5; /*0x588744*/
}
}
} // namespace gamemd

// 0x588750
namespace gamemd {
int ScanBuildingPlacementCells(MouseClass * aP0, VectorClass * aP1, MouseClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ScanBuildingPlacementCells(MouseClass *aP0, VectorClass *aP1, MouseClass *aP2)
{
  MouseClass *v3; // edi
  int result; // eax
  int v5; // ebp
  int v6; // esi
  _WORD *v7; // ebx
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  int v13; // ebp
  __int16 v14; // si
  int v15; // eax
  int v16; // [esp+4h] [ebp-2Ch]
  IUnknown *v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  __int16 v20; // [esp+12h] [ebp-1Eh]
  int i; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+20h] [ebp-10h]
  _DWORD v23[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = aP2; /*0x588754*/
  result = *(_DWORD *)&aP2->__pad_1D4[3200]; /*0x588758*/
  v22 = result; /*0x588760*/
  if ( !result ) /*0x588764*/
    return result; /*0x588764*/
  LOBYTE(result) = 0; /*0x58876b*/
  for ( i = 0; i < 8; i += 2 ) /*0x58876f*/
  {
    v5 = *(int *)&v3->__pad_1D4[996] >> 8; /*0x58877d*/
    v6 = aP0->field_0; /*0x588780*/
    v19 = v5; /*0x588782*/
    v18 = aP0->field_0; /*0x588788*/
    v16 = 0; /*0x58878c*/
    if ( v5 <= 0 ) /*0x588794*/
      goto LABEL_24; /*0x588794*/
    v7 = (_WORD *)(4 * (result & 7) + 9041544); /*0x58879d*/
    while ( 1 ) /*0x5887b3*/
    {
      LOWORD(v17) = v6 + *v7; /*0x5887b3*/
      HIWORD(v17) = HIWORD(v18) + v7[1]; /*0x5887b8*/
      v8 = (SHIWORD(v17) << 9) + (__int16)v17; /*0x5887ca*/
      HIWORD(v18) = HIWORD(v17); /*0x5887d0*/
      LOWORD(v6) = (_WORD)v17; /*0x5887d0*/
      if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x5887e8*/
      {
        g_Map_GlobalCellIndex = v17; /*0x5887ea*/
        v9 = g_CellClassArray; /*0x5887f0*/
      }
      v10 = v9[17]; /*0x5887f5*/
      if ( v10 == -1 ) /*0x5887fb*/
        goto LABEL_15; /*0x5887fb*/
      if ( *(_DWORD *)(v22 + 660) == v10 ) /*0x588807*/
      {
        if ( v8 >= 0x40000 || (v11 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x58881f*/
        {
          g_Map_GlobalCellIndex = v17; /*0x588821*/
          v11 = g_CellClassArray; /*0x588827*/
        }
        if ( aP1[3].vtable0 == (void *)v11[20] ) /*0x588836*/
          break; /*0x588836*/
      }
      v5 = v19; /*0x588838*/
LABEL_15:
      if ( v8 >= 0x40000 || (v12 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x588852*/
      {
        g_Map_GlobalCellIndex = v17; /*0x588854*/
        v12 = g_CellClassArray; /*0x58885a*/
      }
      if ( CellClass::IsPassable((int)v12, *(IUnknown **)&v3->__pad_1D4[1192], (IUnknown *)v3, (IUnknown *)aP1) ) /*0x58886e*/
      {
        if ( ++v16 < v5 ) /*0x588886*/
          continue; /*0x588886*/
      }
      goto LABEL_24; /*0x588886*/
    }
    v13 = v16; /*0x588891*/
    if ( v16 > 0 ) /*0x588897*/
    {
      v14 = LOWORD(aP0->field_0) + *v7; /*0x5888bb*/
      v20 = HIWORD(aP0->field_0) + v7[1]; /*0x5888bf*/
      do /*0x588933*/
      {
        v15 = (*(int (__thiscall **)(MouseClass *, VectorClass *))(v3->field_0 + 140))(v3, aP1); /*0x5888ce*/
        v23[2] = 0; /*0x5888ea*/
        v23[0] = (v14 << 8) + 128; /*0x5888f5*/
        v23[1] = (v20 << 8) + 128; /*0x588903*/
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v15 + 216))(v15, v23, 0); /*0x58890c*/
        v3 = aP2; /*0x58891c*/
        v14 += *v7; /*0x58892a*/
        --v13; /*0x58892e*/
        v20 += v7[1]; /*0x58892f*/
      }
      while ( v13 ); /*0x588933*/
    }
LABEL_24:
    result = i + 2; /*0x588935*/
  }
  return result; /*0x58894c*/
}
}
} // namespace gamemd

// 0x588CE0
void unknown::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall unknown::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x588ce6*/
  *(_DWORD *)(this + 16) = 0; /*0x588ce9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588cf0*/
  {
    __3_YAXPAX_Z(v2); /*0x588cf6*/
    this->m_Position = 0; /*0x588cfe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588d01*/
  this->m_Size = 0; /*0x588d04*/
}
}

// 0x5896A0
int unknown::Read(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall unknown::_vt04(int *this, _WORD *a2)
{
  int v2; // esi
  int result; // eax
  _WORD *i; // ecx

  v2 = *(this + 4); /*0x5896a2*/
  result = 0; /*0x5896a5*/
  if ( v2 <= 0 ) /*0x5896aa*/
    return -1; /*0x5896e1*/
  for ( i = (_WORD *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 ) /*0x5896b0*/
  {
    if ( ++result >= v2 ) /*0x5896df*/
      return -1; /*0x5896df*/
  }
  return result; /*0x5896e4*/
}
}

// 0x58B7E0
namespace gamemd {
int sub_58B7E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_58B7E0()
{
  return dword_ABDFD4; /*0x58b7e5*/
}
}
} // namespace gamemd

// 0x58B7F0
namespace gamemd {
int sub_58B7F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_58B7F0()
{
  return dword_ABDFD0; /*0x58b7f5*/
}
}
} // namespace gamemd

// 0x58B800
namespace gamemd {
int sub_58B800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_58B800()
{
  return dword_ABEC90; /*0x58b805*/
}
}
} // namespace gamemd

// 0x58B810
namespace gamemd {
MapSeedClass * sub_58B810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MapSeedClass *sub_58B810()
{
  return dword_ABECD0; /*0x58b815*/
}
}
} // namespace gamemd

// 0x58B820
namespace gamemd {
void * ComputeMapCameraBounds()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *ComputeMapCameraBounds()
{
  void *result; // eax
  int v1; // ebp
  int i; // edi
  __int16 *WaypointLocationScenarioClass; // eax
  void *v4; // esi
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edx
  int v11; // edi
  int v12; // ebx
  __int16 *j; // esi
  int v14; // eax
  int *v15; // eax
  int v16; // edx
  int v17; // edi
  _DWORD *v18; // ebx
  int v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // edx
  int v23; // esi
  int v24; // [esp+10h] [ebp-28h] BYREF
  int v25; // [esp+14h] [ebp-24h] BYREF
  int *k; // [esp+18h] [ebp-20h] BYREF
  char v27[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  char v28[8]; // [esp+20h] [ebp-18h] BYREF
  char v29[4]; // [esp+28h] [ebp-10h] BYREF
  char v30[12]; // [esp+2Ch] [ebp-Ch] BYREF

  result = MEMORY[0xA8B230]; /*0x58b820*/
  v1 = 0; /*0x58b82a*/
  dword_ABED0C = 0; /*0x58b830*/
  if ( MEMORY[0xA8B230] && MEMORY[0x887324] ) /*0x58b842*/
  {
    for ( i = 0; i < 8; ++i ) /*0x58b848*/
    {
      if ( !(unsigned __int8)ScenarioClass::Is_Waypoint_Valid(i) ) /*0x58b851*/
        break; /*0x58b858*/
      WaypointLocationScenarioClass = (__int16 *)ScenarioClass::Get_Waypoint_Location(&k, i); /*0x58b86a*/
      v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], WaypointLocationScenarioClass); /*0x58b87e*/
      v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 72))(v4); /*0x58b88f*/
      v6 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v4 + 72))(v4, v29, *(_DWORD *)(v5 + 4)); /*0x58b89f*/
      IsoCoord::ToScreenOffset(*v6, (int)v28, &v24, &v25); /*0x58b8ab*/
      v7 = (int *)ScenarioClass::Get_Waypoint_Location(v27, i); /*0x58b8bc*/
      v8 = dword_ABED0C; /*0x58b8c1*/
      v9 = v24; /*0x58b8c9*/
      dword_ABE304[dword_ABED0C] = *v7; /*0x58b8d2*/
      v10 = (unsigned __int64)(2290649225LL * v25) >> 32; /*0x58b8f4*/
      dword_ABE328[2 * v8] = v9 / 60; /*0x58b8f6*/
      dword_ABE32C[2 * v8] = ((unsigned int)v10 >> 31) + (v10 >> 4); /*0x58b907*/
      dword_ABED0C = v8 + 1; /*0x58b910*/
    }
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58b924*/
    v11 = 10000; /*0x58b929*/
    v24 = 10000; /*0x58b933*/
    v12 = 0; /*0x58b937*/
    for ( j = (__int16 *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58b942*/
          j;
          j = (__int16 *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
    {
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], j + 18, 1) ) /*0x58b953*/
      {
        v14 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)j + 72))(j); /*0x58b973*/
        v15 = (int *)(*(int (__thiscall **)(__int16 *, char *, _DWORD))(*(_DWORD *)j + 72))( /*0x58b983*/
                       j,
                       v27,
                       *(_DWORD *)(v14 + 4));
        IsoCoord::ToScreenOffset(*v15, (int)v30, &v25, (int *)&k); /*0x58b98f*/
        v16 = (int)k / 30; /*0x58b9c2*/
        if ( v25 / 60 < v11 ) /*0x58b9c6*/
          v11 = v25 / 60; /*0x58b9c8*/
        if ( v25 / 60 > v1 ) /*0x58b9cc*/
          v1 = v25 / 60; /*0x58b9ce*/
        if ( v16 < v24 ) /*0x58b9d4*/
          v24 = (int)k / 30; /*0x58b9d6*/
        if ( v16 > v12 ) /*0x58b9dc*/
          v12 = (int)k / 30; /*0x58b9de*/
      }
    }
    dword_ABDFD0 = v24; /*0x58b9fa*/
    result = MEMORY[0xA8B230]; /*0x58ba01*/
    dword_ABDFD4 = v11; /*0x58ba06*/
    dword_ABEC90 = v1 - v11; /*0x58ba0e*/
    dword_ABECD0 = v12 - v24; /*0x58ba14*/
    if ( MEMORY[0xA8B230] ) /*0x58ba1a*/
    {
      v17 = 0; /*0x58ba26*/
      *((_DWORD *)MEMORY[0xA8B230] + 1103) = dword_ABED0C; /*0x58ba28*/
      v18 = MEMORY[0xA8B230]; /*0x58ba2e*/
      if ( *((int *)MEMORY[0xA8B230] + 1103) > 0 ) /*0x58ba3c*/
      {
        v19 = 1104; /*0x58ba3e*/
        v20 = &dword_ABE328[-1104]; /*0x58ba48*/
        v21 = 1136; /*0x58ba4f*/
        for ( k = &dword_ABE328[-1104]; ; v20 = k ) /*0x58ba54*/
        {
          if ( v19 < 1104 || v17 >= dword_ABED0C ) /*0x58ba71*/
          {
            v22 = 0; /*0x58ba7c*/
            v23 = 0; /*0x58ba7e*/
          }
          else
          {
            v22 = v20[v19]; /*0x58ba73*/
            v23 = v20[v19 + 1]; /*0x58ba76*/
          }
          v18[v19] = v22; /*0x58ba80*/
          ++v17; /*0x58ba89*/
          ++v21; /*0x58ba8a*/
          *(_DWORD *)((char *)MEMORY[0xA8B230] + v19 * 4 + 4) = v23; /*0x58ba8d*/
          v19 += 2; /*0x58ba9b*/
          *(_DWORD *)((char *)MEMORY[0xA8B230] + v21 * 4 - 4) = dword_ABE304[v21 - 1137]; /*0x58ba9e*/
          v18 = MEMORY[0xA8B230]; /*0x58baa2*/
          if ( v17 >= *((_DWORD *)MEMORY[0xA8B230] + 1103) ) /*0x58baae*/
            break; /*0x58baae*/
        }
      }
      v18[1099] = dword_ABDFD4; /*0x58bab5*/
      *((_DWORD *)MEMORY[0xA8B230] + 1100) = dword_ABDFD0; /*0x58bac7*/
      *((_DWORD *)MEMORY[0xA8B230] + 1101) = dword_ABEC90; /*0x58bad8*/
      result = (void *)dword_ABECD0; /*0x58bae4*/
      *((_DWORD *)MEMORY[0xA8B230] + 1102) = dword_ABECD0; /*0x58bae9*/
    }
  }
  return result; /*0x58baef*/
}
}
} // namespace gamemd

// 0x58EBC0
namespace gamemd {
int BuildRandomMapTiles()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int BuildRandomMapTiles()
{
  int i; // esi
  _DWORD *v1; // ecx
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int *v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  int v19; // esi
  bool v20; // zf
  double v21; // st7
  int v22; // ebx
  int result; // eax
  int j; // edi
  int v25; // esi
  int v26; // eax
  void *v27; // eax
  int v28; // [esp+10h] [ebp-Ch]
  int v29; // [esp+14h] [ebp-8h]
  int v30; // [esp+18h] [ebp-4h] BYREF

  for ( i = 0; i < g_RandomMap_TileData; v1[3] = 0 ) /*0x58ebd0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + i) + 40) + 12))(*((_DWORD *)g_RandomMap_TerrainState + i) + 40); /*0x58ebe9*/
    *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + i) + 12) = 0; /*0x58ebf4*/
    v1 = (_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + i++) + 64); /*0x58ec07*/
    *v1 = 9999; /*0x58ec0c*/
    v1[1] = 9999; /*0x58ec0e*/
    v1[2] = 0; /*0x58ec11*/
  }
  v2 = unk_89C2DC * unk_89C2DC - 1; /*0x58ec28*/
  if ( v2 >= 0 ) /*0x58ec29*/
  {
    v3 = g_MapCellHeight_Value; /*0x58ec2f*/
    v4 = 80 * v2; /*0x58ec38*/
    v28 = 80 * v2; /*0x58ec3c*/
    v30 = unk_89C2DC * unk_89C2DC; /*0x58ec40*/
    while ( 1 ) /*0x58ec49*/
    {
      v5 = *(_DWORD *)((char *)g_MapTileArray + v4); /*0x58ec49*/
      v29 = v5; /*0x58ec4c*/
      v6 = SHIWORD(v5); /*0x58ec50*/
      v7 = (__int16)v5; /*0x58ec55*/
      v8 = SHIWORD(v5) + (__int16)v5; /*0x58ec58*/
      if ( v8 > v3 && (__int16)v5 - SHIWORD(v5) < v3 && SHIWORD(v5) - (__int16)v5 < v3 && v8 <= g_MapCellCount ) /*0x58ec81*/
      {
        v9 = *(_DWORD *)((char *)g_MapTileArray + v4 + 56); /*0x58ec8c*/
        if ( v9 >= 0 && v9 < g_RandomMap_TileData ) /*0x58ec9e*/
          break; /*0x58ec9e*/
      }
LABEL_30:
      v4 -= 80; /*0x58ed73*/
      v20 = v30 == 1; /*0x58ed7a*/
      v28 = v4; /*0x58ed7b*/
      --v30; /*0x58ed7f*/
      if ( v20 ) /*0x58ed83*/
        goto LABEL_31; /*0x58ed83*/
    }
    ++*(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + v9) + 12); /*0x58ecb0*/
    v10 = *((_DWORD *)g_RandomMap_TerrainState + v9); /*0x58ecb8*/
    v11 = *(_DWORD *)(v10 + 48); /*0x58ecbb*/
    v12 = v10 + 40; /*0x58ecbe*/
    if ( *(_DWORD *)(v12 + 16) >= v11 ) /*0x58ecc4*/
    {
      if ( !*(_BYTE *)(v12 + 13) && v11 ) /*0x58eccf*/
        goto LABEL_19; /*0x58eccf*/
      v13 = *(_DWORD *)(v12 + 20); /*0x58ecd1*/
      if ( v13 <= 0 ) /*0x58ecd6*/
        goto LABEL_19; /*0x58ecd6*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 8))(v12, v11 + v13, 0) ) /*0x58ece6*/
      {
LABEL_18:
        v4 = v28; /*0x58ecfb*/
LABEL_19:
        v15 = (int *)(*((_DWORD *)g_RandomMap_TerrainState + v9) + 64); /*0x58ecff*/
        if ( !*(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + v9) + 72) ) /*0x58ed0a*/
        {
          *v15 = v7; /*0x58ed16*/
          v15[1] = v6; /*0x58ed18*/
          v15[2] = 1; /*0x58ed1b*/
          v15[3] = 1; /*0x58ed1e*/
        }
        v16 = *v15; /*0x58ed21*/
        if ( v7 >= v15[2] + *v15 ) /*0x58ed2c*/
          v15[2] = v7 - v16 + 1; /*0x58ed33*/
        if ( v7 < v16 ) /*0x58ed38*/
        {
          v17 = v15[2]; /*0x58ed3a*/
          *v15 = v7; /*0x58ed41*/
          v15[2] = v16 - v7 + v17; /*0x58ed43*/
        }
        v18 = v15[1]; /*0x58ed46*/
        if ( v6 >= v15[3] + v18 ) /*0x58ed52*/
          v15[3] = v6 - v18 + 1; /*0x58ed59*/
        if ( v6 < v18 ) /*0x58ed5e*/
        {
          v19 = v15[3]; /*0x58ed60*/
          v15[1] = v6; /*0x58ed67*/
          v15[3] = v18 - v6 + v19; /*0x58ed6a*/
        }
        v3 = g_MapCellHeight_Value; /*0x58ed6d*/
        goto LABEL_30; /*0x58ed6d*/
      }
      v5 = v29; /*0x58ece8*/
    }
    v14 = *(_DWORD *)(v12 + 16); /*0x58ecec*/
    *(_DWORD *)(v12 + 16) = v14 + 1; /*0x58ecf2*/
    *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * v14) = v5; /*0x58ecf8*/
    goto LABEL_18; /*0x58ecf8*/
  }
LABEL_31:
  v21 = ((double)dword_ABE048 * 0.005 + 0.05) * (double)dword_ABE15C * (double)dword_ABE158; /*0x58ed89*/
  v22 = Math::RoundToInt(v21 + v21); /*0x58edae*/
LABEL_32:
  result = g_RandomMap_TileData; /*0x58edb5*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x58edbe*/
  {
    v25 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x58edca*/
    if ( !*(_BYTE *)(v25 + 26) && !*(_BYTE *)(v25 + 20) ) /*0x58edd4*/
    {
      if ( *(_DWORD *)(v25 + 12) <= v22 ) /*0x58edde*/
      {
        *(_BYTE *)(v25 + 26) = 1; /*0x58eded*/
      }
      else if ( TileSystem::BuildNodes(*((_DWORD *)g_RandomMap_TerrainState + j)) ) /*0x58ede2*/
      {
        if ( v25 ) /*0x58ee03*/
        {
          if ( *(_DWORD *)v25 ) /*0x58ee05*/
          {
            (***(void (__thiscall ****)(_DWORD, int))v25)(*(_DWORD *)v25, 1); /*0x58ee11*/
            *(_DWORD *)v25 = 0; /*0x58ee13*/
          }
          v30 = v25; /*0x58ee25*/
          v26 = (*(int (__thiscall **)(int *, int *))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v30); /*0x58ee29*/
          if ( v26 != -1 && v26 < g_RandomMap_TileData && v26 < --g_RandomMap_TileData ) /*0x58ee44*/
          {
            do /*0x58ee5c*/
            {
              ++v26; /*0x58ee4c*/
              *((_DWORD *)g_RandomMap_TerrainState + v26 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v26); /*0x58ee50*/
            }
            while ( v26 < g_RandomMap_TileData ); /*0x58ee5c*/
          }
          v27 = *(void **)(v25 + 44); /*0x58ee5e*/
          *(_DWORD *)(v25 + 40) = &vt_VectorClass_Cell; /*0x58ee61*/
          if ( v27 ) /*0x58ee66*/
          {
            if ( *(_BYTE *)(v25 + 53) ) /*0x58ee68*/
            {
              __3_YAXPAX_Z(v27); /*0x58ee70*/
              *(_DWORD *)(v25 + 44) = 0; /*0x58ee78*/
            }
          }
          *(_BYTE *)(v25 + 53) = 0; /*0x58ee7c*/
          *(_DWORD *)(v25 + 48) = 0; /*0x58ee80*/
          __3_YAXPAX_Z((void *)v25); /*0x58ee83*/
        }
        goto LABEL_32; /*0x58ee8b*/
      }
    }
    result = g_RandomMap_TileData; /*0x58edf1*/
  }
  return result; /*0x58ee90*/
}
}
} // namespace gamemd

// 0x58EF10
namespace gamemd {
char sub_58EF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_58EF10()
{
  int i; // eax
  int v1; // ecx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  void *v5; // esi
  int v6; // esi
  int v7; // edi
  void *v8; // eax
  int Terrain; // eax
  int v10; // esi
  int v11; // esi
  int v12; // esi
  void (__thiscall ***v13)(_DWORD, int); // ecx
  char v15; // [esp+Fh] [ebp-5h]
  _WORD v16[2]; // [esp+10h] [ebp-4h] BYREF

  v15 = 1; /*0x58ef1e*/
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x58ef23*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58ef2d*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x58ef41*/
  {
    if ( !v15 ) /*0x58ef47*/
      break; /*0x58ef47*/
    v15 = Cliff::ProcessTransitions(i, -1); /*0x58ef5a*/
  }
  if ( g_MapTileArray ) /*0x58ef6d*/
  {
    v1 = unk_89C2DC * unk_89C2DC; /*0x58ef75*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58ef7a*/
    {
      v2 = 0; /*0x58ef7c*/
      do /*0x58ef96*/
      {
        v2 += 80; /*0x58ef84*/
        --v1; /*0x58ef87*/
        *(_DWORD *)((char *)g_MapTileArray + v2 - 24) = -1; /*0x58ef88*/
        *(_DWORD *)((char *)g_MapTileArray + v2 - 20) = -1; /*0x58ef92*/
      }
      while ( v1 ); /*0x58ef96*/
    }
  }
  v3 = g_RandomMap_TileData; /*0x58ef98*/
  v4 = g_RandomMap_TileData - 1; /*0x58ef9f*/
  if ( g_RandomMap_TileData - 1 >= 0 ) /*0x58efa4*/
  {
    do /*0x58efc3*/
    {
      v5 = (void *)*((_DWORD *)g_RandomMap_TerrainState + v4); /*0x58efab*/
      if ( v5 ) /*0x58efb0*/
      {
        TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + v4)); /*0x58efb4*/
        __3_YAXPAX_Z(v5); /*0x58efba*/
      }
      --v4; /*0x58efc2*/
    }
    while ( v4 >= 0 ); /*0x58efc3*/
    v3 = g_RandomMap_TileData; /*0x58efc5*/
  }
  g_MapTileArrayEnd = 0; /*0x58efd0*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58efdb*/
  {
    v6 = 0; /*0x58efdd*/
    v7 = unk_89C2DC * unk_89C2DC; /*0x58efdf*/
    do /*0x58f02b*/
    {
      if ( *(_DWORD *)((char *)g_MapTileArray + v6 + 56) == -1 ) /*0x58efec*/
      {
        v16[0] = 0; /*0x58eff2*/
        v16[1] = 0; /*0x58eff8*/
        if ( Coord::Compare2D((char *)g_MapTileArray + v6, v16) ) /*0x58effd*/
        {
          v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)((char *)g_MapTileArray + v6)); /*0x58f014*/
          Terrain = RandomMap::GenerateTerrain((int)v8); /*0x58f01b*/
          if ( Terrain ) /*0x58f022*/
            *(_BYTE *)(Terrain + 26) = 0; /*0x58f024*/
        }
      }
      v6 += 80; /*0x58f027*/
      --v7; /*0x58f02a*/
    }
    while ( v7 ); /*0x58f02b*/
    v3 = g_RandomMap_TileData; /*0x58f02d*/
  }
  if ( v15 ) /*0x58f03a*/
  {
    v10 = 0; /*0x58f03c*/
    if ( v3 > 0 ) /*0x58f040*/
    {
      do /*0x58f059*/
      {
        RandomMap::CollectBorderCells(*((_DWORD **)g_RandomMap_TerrainState + v10)); /*0x58f04b*/
        v3 = g_RandomMap_TileData; /*0x58f050*/
        ++v10; /*0x58f056*/
      }
      while ( v10 < g_RandomMap_TileData ); /*0x58f059*/
    }
    v11 = 0; /*0x58f05b*/
    if ( v3 > 0 ) /*0x58f05f*/
    {
      do /*0x58f077*/
      {
        RandomMap::AllocateArea(*((_DWORD *)g_RandomMap_TerrainState + v11)); /*0x58f069*/
        v3 = g_RandomMap_TileData; /*0x58f06e*/
        ++v11; /*0x58f074*/
      }
      while ( v11 < g_RandomMap_TileData ); /*0x58f077*/
    }
    v12 = 0; /*0x58f079*/
    if ( v3 > 0 ) /*0x58f07d*/
    {
      do /*0x58f0aa*/
      {
        v13 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)g_RandomMap_TerrainState + v12) + 4); /*0x58f088*/
        if ( v13 ) /*0x58f08d*/
          (**v13)(v13, 1); /*0x58f093*/
        *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + v12++) + 4) = 0; /*0x58f0a0*/
      }
      while ( v12 < g_RandomMap_TileData ); /*0x58f0aa*/
    }
  }
  return 1; /*0x58f0ac*/
}
}
} // namespace gamemd

// 0x585EE0
namespace gamemd {
int sub_585EE0()
{
{
    DataGlobal_ABD460[0] = 0;
    DataGlobal_ABD464 = 4;
    DataGlobal_ABD468 = 0x40000;
    DataGlobal_ABD46C = 262148;
    return 4;
}
}
} // namespace gamemd

// 0x5889F0
namespace gamemd {
int sub_5889F0(int a1, int a2)
{
{
    int *v2;
    int *v3;
    char v4;
    int *v5;
    int v6;
    int v7;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    v13 = -1;
    v12 = 0;
    v10 = 0;
    v2 = DataGlobal_82A594;
    do
  {
    v3 = &DataGlobal_82A594[8 * a2];
    v4 = 1;
    v9 = 0;
    v5 = &DataGlobal_82A594[8 * a1];
    v11 = 8;
    do
    {
    v6 = *v3;
    v7 = *v2;
    if ( (*v5 == 2 || v6 == 2) && v7 == 1 )
    v4 = 0;
    if ( *v5 == v7 && v6 == v7 && v7 == 1 )
    ++v9;
    ++v5;
    ++v3;
    ++v2;
    --v11;
    }
    while ( v11 );
    if ( v4 && v9 > v12 )
    {
    v12 = v9;
    v13 = v10;
    }
    ++v10;
  }
    while ( (int)v2 < (int)DataGlobal_82A734 );
    return v13;
}
}
} // namespace gamemd

// 0x588D10
unsigned int unknown::Write(int a2)
{
{
    if ( (unsigned char)this->unknown_field_0C )
    return (unsigned int)(a2 - this->m_Position) >> 4;
    else
    return 0;
}
}

// 0x588D30
int unknown::Seek(int a2, int a3)
{
{
    int v3;
    v3 = *(this + 1) + 16 * a3;
    *(int *)a2 = *(int *)v3;
    *(int *)(a2 + 4) = *(int *)(v3 + 4);
    *(char *)(a2 + 8) = *(char *)(v3 + 8);
    *(int *)(a2 + 12) = *(int *)(v3 + 12);
    return a2;
}
}

// 0x58B110
namespace gamemd {
int sub_58B110()
{
{
    DataGlobal_ABDE98 = 0;
    DataGlobal_ABDE9C = 0;
    DataGlobal_ABDEA0 = 0;
    DataGlobal_ABDEA4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B130
namespace gamemd {
void sub_58B130()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABDEB0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x58B160
namespace gamemd {
void sub_58B160()
{
{
    DataGlobal_ABDF00 = DataGlobal_ABDEB0 / 60.0;
}
}
} // namespace gamemd

// 0x58B180
namespace gamemd {
void sub_58B180()
{
{
    DataGlobal_ABDEE8 = 1.0 / DataGlobal_ABDF00;
}
}
} // namespace gamemd

// 0x58B1A0
namespace gamemd {
void sub_58B1A0()
{
{
    DataGlobal_ABDEE0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x58B1C0
namespace gamemd {
void sub_58B1C0()
{
{
    DataGlobal_ABDEB8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x58B1E0
namespace gamemd {
void sub_58B1E0()
{
{
    DataGlobal_ABDE90 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x58B200
namespace gamemd {
long long sub_58B200()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABDE90 - DataGlobal_ABDEB8);
    result = Math::RoundToInt(v0 * DataGlobal_ABDEB0 * 0.5);
    DataGlobal_ABDF08 = result;
    return result;
}
}
} // namespace gamemd

// 0x58B240
namespace gamemd {
void sub_58B240()
{
{
    DataGlobal_ABDEC0 = Math::ArcTan((double)DataGlobal_ABDF08 * 0.00390625);
}
}
} // namespace gamemd

// 0x58B270
namespace gamemd {
void sub_58B270()
{
{
    DataGlobal_ABDED8 = Math::ArcTan((double)(2 * DataGlobal_ABDF08) / DataGlobal_ABDEB0);
}
}
} // namespace gamemd

// 0x58B2A0
namespace gamemd {
long long sub_58B2A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABDF08) + 0.5);
    DataGlobal_ABDEFC = result;
    return result;
}
}
} // namespace gamemd

// 0x58B2D0
namespace gamemd {
int sub_58B2D0()
{
{
    DataGlobal_ABDEA8 = 0;
    DataGlobal_ABDEAA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B2E0
namespace gamemd {
int sub_58B2E0()
{
{
    DataGlobal_ABDEC8 = 0;
    DataGlobal_ABDECC = 0;
    DataGlobal_ABDED0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B300
namespace gamemd {
int sub_58B300()
{
{
    DataGlobal_ABDEF8 = 0;
    DataGlobal_ABDEF0 = 128;
    DataGlobal_ABDEF4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x58B320
namespace gamemd {
int sub_58B320()
{
{
    DataGlobal_ABDF18 = 0;
    DataGlobal_ABDF1C = 0;
    DataGlobal_ABDF20 = 0;
    DataGlobal_ABDF24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B340
namespace gamemd {
void sub_58B340()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABDF30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x58B370
namespace gamemd {
void sub_58B370()
{
{
    DataGlobal_ABDF80 = DataGlobal_ABDF30 / 60.0;
}
}
} // namespace gamemd

// 0x58B390
namespace gamemd {
void sub_58B390()
{
{
    DataGlobal_ABDF68 = 1.0 / DataGlobal_ABDF80;
}
}
} // namespace gamemd

// 0x58B3B0
namespace gamemd {
void sub_58B3B0()
{
{
    DataGlobal_ABDF60 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x58B3D0
namespace gamemd {
void sub_58B3D0()
{
{
    DataGlobal_ABDF38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x58B3F0
namespace gamemd {
void sub_58B3F0()
{
{
    DataGlobal_ABDF10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x58B410
namespace gamemd {
long long sub_58B410()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABDF10 - DataGlobal_ABDF38);
    result = Math::RoundToInt(v0 * DataGlobal_ABDF30 * 0.5);
    DataGlobal_ABDF88 = result;
    return result;
}
}
} // namespace gamemd

// 0x58B450
namespace gamemd {
void sub_58B450()
{
{
    DataGlobal_ABDF40 = Math::ArcTan((double)DataGlobal_ABDF88 * 0.00390625);
}
}
} // namespace gamemd

// 0x58B480
namespace gamemd {
void sub_58B480()
{
{
    DataGlobal_ABDF58 = Math::ArcTan((double)(2 * DataGlobal_ABDF88) / DataGlobal_ABDF30);
}
}
} // namespace gamemd

// 0x58B4B0
namespace gamemd {
long long sub_58B4B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABDF88) + 0.5);
    DataGlobal_ABDF7C = result;
    return result;
}
}
} // namespace gamemd

// 0x58B4E0
namespace gamemd {
int sub_58B4E0()
{
{
    DataGlobal_ABDF28 = 0;
    DataGlobal_ABDF2A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B4F0
namespace gamemd {
int sub_58B4F0()
{
{
    DataGlobal_ABDF48 = 0;
    DataGlobal_ABDF4C = 0;
    DataGlobal_ABDF50 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B510
namespace gamemd {
int sub_58B510()
{
{
    DataGlobal_ABDF78 = 0;
    DataGlobal_ABDF70 = 128;
    DataGlobal_ABDF74 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x58B530
namespace gamemd {
void sub_58B530()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABE368 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x58B560
namespace gamemd {
void sub_58B560()
{
{
    DataGlobal_ABECF8 = DataGlobal_ABE368 / 60.0;
}
}
} // namespace gamemd

// 0x58B580
namespace gamemd {
void sub_58B580()
{
{
    DataGlobal_ABECE0 = 1.0 / DataGlobal_ABECF8;
}
}
} // namespace gamemd

// 0x58B5A0
namespace gamemd {
void sub_58B5A0()
{
{
    DataGlobal_ABECD8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x58B5C0
namespace gamemd {
void sub_58B5C0()
{
{
    DataGlobal_ABEC88 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x58B5E0
namespace gamemd {
void sub_58B5E0()
{
{
    DataGlobal_ABDFA8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x58B640
namespace gamemd {
void sub_58B640()
{
{
    DataGlobal_ABEC98 = Math::ArcTan((double)DataGlobal_ABED00 * 0.00390625);
}
}
} // namespace gamemd

// 0x58B670
namespace gamemd {
void sub_58B670()
{
{
    *(double *)&Buffer[40] = Math::ArcTan((double)(2 * DataGlobal_ABED00) / DataGlobal_ABE368);
}
}
} // namespace gamemd

// 0x58B6A0
namespace gamemd {
long long sub_58B6A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABED00) + 0.5);
    DataGlobal_ABECF4 = result;
    return result;
}
}
} // namespace gamemd

// 0x58B6D0
namespace gamemd {
int sub_58B6D0()
{
{
    DataGlobal_ABE300 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B6E0
namespace gamemd {
int sub_58B6E0()
{
{
    *(int *)&Buffer[24] = 0;
    *(int *)&Buffer[28] = 0;
    *(int *)&Buffer[32] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B700
namespace gamemd {
int sub_58B700()
{
{
    DataGlobal_ABECF0 = 0;
    DataGlobal_ABECE8 = 128;
    DataGlobal_ABECEC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x58B720
namespace gamemd {
int sub_58B720()
{
{
    DataGlobal_ABE2F0 = 0;
    DataGlobal_ABE2F4 = 0;
    DataGlobal_ABE2F8 = 0;
    DataGlobal_ABE2FC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x58B740
namespace gamemd {
int sub_58B740()
{
{
    MapResourceClass::Constructor((int)DataGlobal_ABDFD8);
    return atexit(unknown_libname_23);
}
}
} // namespace gamemd

// 0x58B760
namespace gamemd {
int unknown_libname_23()
{
    void __cdecl unknown_libname_23()
{
    RandomMap::CleanupRandomMapData((int)DataGlobal_ABDFD8);
}
}
} // namespace gamemd

// 0x58B770
namespace gamemd {
int unknown_libname_24()
{
    int *unknown_libname_24()
{
    return SeedInitRNG(&g_Randomizer, 0);
}
}
} // namespace gamemd

// 0x58B780
namespace gamemd {
void sub_58B780()
{
{
    g_TileSystemInit = 0;
    DataGlobal_ABDFC0 = 0;
    DataGlobal_ABDFC4 = 0;
    DataGlobal_ABDFC8 = (int)sub_598000;
}
}
} // namespace gamemd

// 0x58BC30
namespace gamemd {
int sub_58BC30()
{
{
    g_RandomMap_TerrainState = 0;
    DataGlobal_ABDF98 = 0;
    DataGlobal_ABDF9C = 1;
    DataGlobal_ABDF9D = 0;
    g_RandomMap_BuildObject = (int)&DataGlobal_7ED858;
    DataGlobal_ABDFA4 = 10;
    g_RandomMap_TileData = 0;
    return atexit(sub_58BC70);
}
}
} // namespace gamemd

// 0x58BC70
namespace gamemd {
void sub_58BC70()
{
{
    if ( (DataGlobal_ABDFB0 & 1) == 0 )
  {
    g_RandomMap_BuildObject = (int)&vt_VectorClass_MapRegionClass;
    DataGlobal_ABDFB0 |= 1u;
    if ( g_RandomMap_TerrainState )
    {
    if ( DataGlobal_ABDF9D )
      {
    __3_YAXPAX_Z(g_RandomMap_TerrainState);
    g_RandomMap_TerrainState = 0;
      }
    }
    DataGlobal_ABDF9D = 0;
    DataGlobal_ABDF98 = 0;
  }
}
}
} // namespace gamemd

// 0x58BE20
namespace gamemd {
unsigned int * E4Recv_58BE20::sub_58BE20()
{
{
    unsigned int v2;
    unsigned int v3;
    short *v4;
    int v5;
    __int64 v7;
    v2 = g_MapCellWidth * g_MapCellWidth - 1;
    do
  {
    do
    {
    v7 = (unsigned int)Random::State(&g_Randomizer);
    v3 = Math::RoundToInt((double)v7 * (double)(v2 + 1) * 2.328306437080797e-10);
    }
    while ( v3 > v2 );
    v4 = (char *)(g_MapTileArray) + 80 * v3;
  }
    while ( !*v4 && !v4[1] );
    v5 = 80 * v3;
    *(void**)this = *(int *)((char *)(g_MapTileArray) + v5);
    return this;
}
}
} // namespace gamemd

// 0x58BEA0
namespace gamemd {
unsigned int * E4Recv_58BEA0::sub_58BEA0()
{
{
    int v2;
    unsigned int v3;
    unsigned int v4;
    short *v5;
    int *v6;
    int v8;
    __int64 v9;
    __int64 v10;
    double v11;
    v2 = 0;
    do
  {
    v3 = g_MapCellWidth * g_MapCellWidth - 1;
    do
    {
    v9 = v3 + 1;
    v11 = (double)v9;
    do
      {
    v10 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v10 * v11 * 2.328306437080797e-10);
      }
    while ( v4 > v3 );
    v5 = (char *)(g_MapTileArray) + 80 * v4;
    }
    while ( !*v5 && !v5[1] );
    ++v2;
    v8 = *((int *)(g_MapTileArray) + 20 * v4);
    if ( v2 > 200 )
    {
    v8 = 0;
    *(void**)this = 0;
    return this;
    }
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v8);
  }
    while ( !Cell::IsEmpty(v6) );
    *(void**)this = v8;
    return this;
}
}
} // namespace gamemd

// 0x58C100
namespace gamemd {
void sub_58C100()
{
{
    int v0;
    int *v1;
    int v2;
    void *v3;
    int *v4;
    v0 = g_RandomMap_TileData - 1;
    for ( g_MapTileArrayEnd = 0; v0 >= 0; --v0 )
  {
    v1 = (int *)*((int *)(g_RandomMap_TerrainState) + v0);
    if ( v1 )
    {
    if ( *v1 )
      {
    (**(void (__thiscall ***)(int, int))*v1)(*v1, 1);
    *v1 = 0;
      }
    v4 = v1;
    v2 = (*(int (__thiscall **)(int *, int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v4);
    if ( v2 != -1 && v2 < g_RandomMap_TileData && v2 < --g_RandomMap_TileData )
      {
    do
        {
    ++v2;
    *((int *)(g_RandomMap_TerrainState) + v2 - 1) = *((int *)(g_RandomMap_TerrainState) + v2);
        }
    while ( v2 < g_RandomMap_TileData );
      }
    v3 = (void *)v1[11];
    v1[10] = &vt_VectorClass_Cell;
    if ( v3 )
      {
    if ( *((char *)(v1) + 53) )
        {
    __3_YAXPAX_Z(v3);
    v1[11] = 0;
        }
      }
    *((char *)(v1) + 53) = 0;
    v1[12] = 0;
    __3_YAXPAX_Z(v1);
    }
  }
}
}
} // namespace gamemd

// 0x58C2C0
namespace gamemd {
char * TileData_GetEntry(int a1)
{
{
    return (char *)(g_MapTileArray) + 80 * a1;
}
}
} // namespace gamemd

// 0x58C320
namespace gamemd {
unsigned int * E4Recv_58C320::sub_58C320(unsigned int * a2)
{
{
    int v2;
    unsigned int v4;
    char *v5;
    int v6;
    __int64 v8;
    v2 = g_MapCellWidth * g_MapCellWidth;
    do
  {
    do
    {
    v8 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v8 * (double)(unsigned int)v2 * 2.328306437080797e-10);
    }
    while ( v4 > v2 - 1 );
    v5 = (char *)(g_MapTileArray) + 80 * v4;
  }
    while ( *((int *)(v5) + 14) != this->M8 || !*(short *)v5 && !*((short *)(v5) + 1) );
    v6 = *((int *)(g_MapTileArray) + 20 * v4);
    *a2 = v6;
    return a2;
}
}
} // namespace gamemd

// 0x58C3B0
namespace gamemd {
unsigned int * E4Recv_58C3B0::sub_58C3B0(unsigned int * a2)
{
{
    int v3;
    unsigned int v4;
    char *v5;
    int *v6;
    int v8;
    int v9;
    __int64 v10;
    __int64 v11;
    double v12;
    v8 = 0;
    do
  {
    v3 = g_MapCellWidth * g_MapCellWidth;
    do
    {
    v10 = (unsigned int)v3;
    v12 = (double)(unsigned int)v3;
    do
      {
    v11 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v11 * v12 * 2.328306437080797e-10);
      }
    while ( v4 > v3 - 1 );
    v5 = (char *)(g_MapTileArray) + 80 * v4;
    }
    while ( *((int *)(v5) + 14) != this->M8 || !*(short *)v5 && !*((short *)(v5) + 1) );
    v9 = *((int *)(g_MapTileArray) + 20 * v4);
    if ( ++v8 > 200 )
    {
    *a2 = 0;
    return a2;
    }
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v9);
  }
    while ( !Cell::IsEmpty(v6) );
    *a2 = v9;
    return a2;
}
}
} // namespace gamemd

// 0x58C4A0
namespace gamemd {
unsigned int * E4Recv_58C4A0::sub_58C4A0(ObjectClass * aP1)
{
{
    short *v2;
    int v3;
    unsigned int v4;
    int *v5;
    Random *v7;
    __int64 v9;
    v2 = g_MapTileArray;
    v7 = (Random *)(g_MapCellWidth * g_MapCellWidth);
    v3 = 0;
    while ( 1 )
  {
    do
    {
    v9 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v9 * (double)(unsigned int)v7 * 2.328306437080797e-10);
    }
    while ( v4 > (unsigned int)&v7[-1].Random_field_0x0C + 3 );
    ++v3;
    qmemcpy(v2, (char *)(g_MapTileArray) + 80 * v4, 0x50u);
    if ( v3 >= 100 )
    {
    *(int *)aP1->__pad_0 = 0;
    return aP1->__pad_0;
    }
    if ( *((int *)(v2) + 14) == this->M8 && (*v2 || v2[1]) )
    {
    if ( *((char *)(v2) + 68) )
      {
    v5 = CellCoord::To_CellObj(&DataGlobal_87C374.__pad_14B0[8132], v2);
    if ( Cell::IsEmpty(v5) )
    break;
      }
    }
  }
    *(int *)aP1->__pad_0 = *(int *)v2;
    return aP1->__pad_0;
}
}
} // namespace gamemd

// 0x58C5A0
namespace gamemd {
unsigned int * sub_58C5A0(unsigned int * a1, int a2, int a3)
{
{
    short *v3;
    unsigned int v4;
    bool v5;
    void *v6;
    int *v7;
    int v9;
    int v11;
    __int64 v13;
    v3 = g_MapTileArray;
    v11 = g_MapCellWidth * g_MapCellWidth;
    v9 = 0;
    do
  {
    do
    {
    v13 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v13 * (double)(unsigned int)v11 * 2.328306437080797e-10);
    }
    while ( v4 > v11 - 1 );
    v5 = v9 + 1 < 100;
    qmemcpy(v3, (char *)(g_MapTileArray) + 80 * v4, 0x50u);
    ++v9;
    if ( !v5 )
    {
    *a1 = 0;
    return a1;
    }
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v3);
    v7 = v6;
  }
    while ( !*v3 && !v3[1] || MapClass::GetTileIndex(&DataGlobal_87F7E8, (short *)(v6) + 18, 0, 0) != a2 || !Cell::IsEmpty(v7) || a3 != -1 && *((int *)(v3) + 14) != a3 );
    *a1 = *(int *)v3;
    return a1;
}
}
} // namespace gamemd

// 0x58D070
namespace gamemd {
int Map_SetLayerData(short * a1, int a2)
{
{
    int result;
    if ( g_MapTileArray )
  {
    result = 80 * (*a1 + g_MapCellWidth * *((int*)(a1) + 1));
    *(int *)((char *)(g_MapTileArray) + result + 56) = a2;
  }
    return result;
}
}
} // namespace gamemd

// 0x58D120
namespace gamemd {
int E4Recv_58D120::sub_58D120(int a2, int a3)
{
{
    int result;
    int v4;
    int v5;
    int *v6;
    int *v7;
    int v8;
    result = g_MapCellWidth * g_MapCellWidth;
    v7 = this;
    if ( g_MapCellWidth * g_MapCellWidth <= 0 )
  {
    this->M12 = 0;
  }
    else
  {
    v4 = a3;
    v5 = 0;
    v8 = g_MapCellWidth * g_MapCellWidth;
    do
    {
    if ( *(int *)((char *)(g_MapTileArray) + v5 + 56) == this->M8 )
      {
    *(int *)((char *)(g_MapTileArray) + v5 + 56) = a2;
    *((char *)(g_MapTileArray) + v5 + 75) = 0;
    a3 = *(int *)((char *)(g_MapTileArray) + v5);
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&a3);
    v6[14] = 0;
    *((char *)(v6) + 282) = 0;
    if ( v4 != -1 )
    *((char *)(v6) + 283) = v4;
    this = v7;
      }
    v5 += 80;
    result = --v8;
    }
    while ( v8 );
    this->M12 = 0;
  }
    return result;
}
}
} // namespace gamemd
