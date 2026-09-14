// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6B0A90_e4.hpp"
#include "e4/classes/E4Recv_6B1EE0_e4.hpp"
#include "e4/classes/E4Recv_6B93E0_e4.hpp"
#include "e4/classes/E4Recv_6B9450_e4.hpp"
#include "e4/classes/E4Recv_6B94E0_e4.hpp"
#include "e4/classes/E4Recv_6BB990_e4.hpp"
#include "e4/classes/E4Recv_6BEC50_e4.hpp"

// 0x6B2430
namespace gamemd {
unsigned int * sub_6B2430(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_6B2430(int *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  int v4; // edi
  int v6; // eax

  result = (_DWORD *)MEMORY[0xB0B658]; /*0x6b2430*/
  v3 = a1[1]; /*0x6b2436*/
  v4 = *a1; /*0x6b243b*/
  if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b2475*/
    || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
    && MEMORY[0xB0B664] > 0
    && (result = (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
                             &MEMORY[0xB0B650],
                             MEMORY[0xB0B658] + MEMORY[0xB0B664],
                             0),
        (_BYTE)result) )
  {
    v6 = MEMORY[0xB0B660]++; /*0x6b2483*/
    result = (char *)MEMORY[0xB0B654] + 12 * v6; /*0x6b248f*/
    *result = v4; /*0x6b2492*/
    result[1] = v3; /*0x6b2495*/
    result[2] = a2; /*0x6b2498*/
  }
  return result; /*0x6b249b*/
}
}
} // namespace gamemd

// 0x6B2700
namespace gamemd {
int InitializeBuildabilityGrid(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall InitializeBuildabilityGrid(int a1)
{
  int v1; // esi
  char *v2; // eax
  _BYTE *v3; // ecx
  int v4; // edx
  int result; // eax
  __int16 v6; // cx
  __int16 v7; // di
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  char *v12; // esi
  int v13; // eax
  __int16 v14; // dx
  int v15; // edi
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *v19; // eax
  int v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+2Ch] [ebp-10h] BYREF
  int v25; // [esp+30h] [ebp-Ch]
  unsigned __int16 v26[4]; // [esp+34h] [ebp-8h] BYREF

  if ( MEMORY[0xB0B6EC] ) /*0x6b2714*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b2717*/
    MEMORY[0xB0B6EC] = 0; /*0x6b271f*/
  }
  v1 = (MEMORY[0x87F914] + 1) * (MEMORY[0x87F918] + 1); /*0x6b2734*/
  v2 = (char *)__2_YAPAXI_Z(8 * v1); /*0x6b273f*/
  if ( v2 ) /*0x6b2749*/
  {
    if ( v1 - 1 >= 0 ) /*0x6b2750*/
    {
      v3 = v2 + 5; /*0x6b2752*/
      v4 = v1; /*0x6b2755*/
      do /*0x6b2764*/
      {
        *(_DWORD *)(v3 - 5) = 0; /*0x6b2756*/
        *(v3 - 1) = 0; /*0x6b2759*/
        *v3 = 0; /*0x6b275d*/
        v3 += 8; /*0x6b2760*/
        --v4; /*0x6b2763*/
      }
      while ( v4 ); /*0x6b2764*/
    }
    MEMORY[0xB0B6EC] = v2; /*0x6b2766*/
  }
  else
  {
    MEMORY[0xB0B6EC] = 0; /*0x6b276d*/
  }
  dword_8759A0 = MEMORY[0x87F918] + 1; /*0x6b2784*/
  dword_8759AC = MEMORY[0x87F910]; /*0x6b2790*/
  result = MEMORY[0x87F914] + 1; /*0x6b27e4*/
  dword_8759A4 = MEMORY[0x87F914] + 1; /*0x6b27ec*/
  v6 = MEMORY[0x87F914] - MEMORY[0x87F90C]; /*0x6b27f8*/
  dword_8759A8 = MEMORY[0x87F90C]; /*0x6b27fe*/
  v7 = (HIWORD(a1) - 14) & (((__int16)(HIWORD(a1) - 14) < 0) - 1); /*0x6b2804*/
  if ( MEMORY[0x87F914] - MEMORY[0x87F90C] >= (__int16)(a1 + 14) ) /*0x6b2807*/
    v6 = a1 + 14; /*0x6b2809*/
  LOWORD(v8) = MEMORY[0x87F918] - MEMORY[0x87F910]; /*0x6b2818*/
  if ( MEMORY[0x87F918] - MEMORY[0x87F910] >= (__int16)(HIWORD(a1) + 14) ) /*0x6b2821*/
    LOWORD(v8) = HIWORD(a1) + 14; /*0x6b2823*/
  v9 = v7; /*0x6b2826*/
  v8 = (__int16)v8; /*0x6b2829*/
  v20 = v7; /*0x6b282e*/
  v25 = (__int16)v8; /*0x6b2832*/
  if ( v7 <= (__int16)v8 ) /*0x6b2836*/
  {
    v23 = v6; /*0x6b2846*/
    do /*0x6b2a52*/
    {
      v10 = (__int16)((a1 - 14) & (((__int16)(a1 - 14) < 0) - 1)); /*0x6b284a*/
      if ( v10 <= v23 ) /*0x6b2854*/
      {
        do /*0x6b2a41*/
        {
          v11 = -1; /*0x6b2865*/
          v12 = (char *)MEMORY[0xB0B6EC] + 8 * v10 + 8 * v9 * result; /*0x6b2868*/
          v12[4] = 0; /*0x6b286b*/
          v12[5] = 0; /*0x6b286f*/
          v12[6] = 0; /*0x6b2873*/
          v26[0] = v10 + dword_8759A8; /*0x6b2884*/
          v13 = (__int16)(v10 + dword_8759A8); /*0x6b2889*/
          v14 = v9 + dword_8759AC; /*0x6b288c*/
          v26[1] = v9 + dword_8759AC; /*0x6b2897*/
          if ( v13 >= MEMORY[0x87F90C] ) /*0x6b289c*/
          {
            if ( v13 <= MEMORY[0x87F914] + MEMORY[0x87F90C] /*0x6b28cd*/
              && v14 >= MEMORY[0x87F910]
              && v14 <= MEMORY[0x87F918] + MEMORY[0x87F910] )
            {
              v15 = *((unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v26) + 284); /*0x6b28ef*/
              v11 = 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v26) + 283) /*0x6b291b*/
                  + *(_DWORD *)*(&MEMORY[0x83FF18] + v15);
              v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v26); /*0x6b291d*/
              if ( !CellClass::IsBuildable((int)v16) ) /*0x6b292a*/
                goto LABEL_24; /*0x6b292a*/
              v24 = *(_DWORD *)v26 - 0x10000; /*0x6b2959*/
              v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6b295d*/
              if ( !CellClass::IsBuildable((int)v17) ) /*0x6b2966*/
                goto LABEL_24; /*0x6b2966*/
              LOWORD(v21) = v26[0] - 1; /*0x6b2979*/
              HIWORD(v21) = v26[1] - 1; /*0x6b2982*/
              v24 = v21; /*0x6b2991*/
              v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6b2995*/
              if ( !CellClass::IsBuildable((int)v18) /*0x6b29d6*/
                || (HIWORD(v22) = v26[1],
                    LOWORD(v22) = v26[0] - 1,
                    v24 = v22,
                    v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24),
                    !CellClass::IsBuildable((int)v19)) )
              {
LABEL_24:
                v12[4] = 1; /*0x6b29df*/
              }
              if ( *(_DWORD *)v26 == a1 /*0x6b2a22*/
                || __PAIR32__(v26[1] - 1, v26[0]) == a1
                || v26[0] - 1 == (_WORD)a1 && (v26[1] - 1 == HIWORD(a1) || __PAIR32__(v26[1], v26[0] - 1) == a1) )
              {
                v12[6] = 1; /*0x6b2a2b*/
              }
            }
            v9 = v20; /*0x6b2a2f*/
          }
          ++v10; /*0x6b2a37*/
          *(_DWORD *)v12 = v11; /*0x6b2a38*/
          result = dword_8759A4; /*0x6b2a3c*/
        }
        while ( v10 <= v23 ); /*0x6b2a41*/
        v8 = v25; /*0x6b2a47*/
      }
      v20 = ++v9; /*0x6b2a4e*/
    }
    while ( v9 <= v8 ); /*0x6b2a52*/
  }
  return result; /*0x6b2a58*/
}
}
} // namespace gamemd

// 0x6B2A70
namespace gamemd {
int SlaveManager_InitGrid()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int SlaveManager_InitGrid()
{
  int v0; // esi
  char *v1; // eax
  _BYTE *v2; // ecx
  int v3; // edx
  int result; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  __int16 v8; // dx
  _WORD *j; // esi
  int v10; // ebp
  __int16 v11; // ax
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  _DWORD *v19; // esi
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  _DWORD *v23; // esi
  int v24; // esi
  int v25; // edx
  int v26; // esi
  void *v27; // eax
  int v28; // edx
  void *v29; // eax
  int v30; // edx
  char *v31; // [esp+8h] [ebp-4Ch]
  int v32; // [esp+Ch] [ebp-48h] BYREF
  int v33; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  int v35; // [esp+18h] [ebp-3Ch]
  int v36; // [esp+1Ch] [ebp-38h]
  int v37; // [esp+20h] [ebp-34h]
  _WORD v38[2]; // [esp+24h] [ebp-30h] BYREF
  int v39; // [esp+28h] [ebp-2Ch]
  int v40; // [esp+2Ch] [ebp-28h]
  int v41; // [esp+30h] [ebp-24h] BYREF
  int v42; // [esp+34h] [ebp-20h] BYREF
  int v43; // [esp+38h] [ebp-1Ch] BYREF
  int v44; // [esp+3Ch] [ebp-18h] BYREF
  __int16 v45[4]; // [esp+40h] [ebp-14h] BYREF
  _DWORD v46[3]; // [esp+48h] [ebp-Ch] BYREF

  if ( MEMORY[0xB0B6EC] ) /*0x6b2a7e*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b2a81*/
    MEMORY[0xB0B6EC] = 0; /*0x6b2a89*/
  }
  v0 = (MEMORY[0x87F914] + 1) * (MEMORY[0x87F918] + 1); /*0x6b2a9e*/
  v1 = (char *)__2_YAPAXI_Z(8 * v0); /*0x6b2aa9*/
  if ( v1 ) /*0x6b2ab3*/
  {
    if ( v0 - 1 >= 0 ) /*0x6b2aba*/
    {
      v2 = v1 + 5; /*0x6b2abc*/
      v3 = v0; /*0x6b2abf*/
      do /*0x6b2ace*/
      {
        *(_DWORD *)(v2 - 5) = 0; /*0x6b2ac0*/
        *(v2 - 1) = 0; /*0x6b2ac3*/
        *v2 = 0; /*0x6b2ac7*/
        v2 += 8; /*0x6b2aca*/
        --v3; /*0x6b2acd*/
      }
      while ( v3 ); /*0x6b2ace*/
    }
    MEMORY[0xB0B6EC] = v1; /*0x6b2ad0*/
  }
  else
  {
    MEMORY[0xB0B6EC] = 0; /*0x6b2ad7*/
  }
  dword_8759A8 = MEMORY[0x87F90C]; /*0x6b2ae8*/
  dword_8759AC = MEMORY[0x87F910]; /*0x6b2afa*/
  v46[0] = -65536; /*0x6b2b11*/
  result = MEMORY[0x87F914] + 1; /*0x6b2b23*/
  v5 = MEMORY[0x87F918] + 1; /*0x6b2b24*/
  v46[1] = -1; /*0x6b2b25*/
  v6 = 0; /*0x6b2b37*/
  dword_8759A4 = MEMORY[0x87F914] + 1; /*0x6b2b3b*/
  dword_8759A0 = MEMORY[0x87F918] + 1; /*0x6b2b40*/
  v46[2] = 0xFFFF; /*0x6b2b46*/
  for ( i = 0; v6 < v5; i = v6 ) /*0x6b2b4e*/
  {
    v7 = 0; /*0x6b2b56*/
    v40 = 0; /*0x6b2b5a*/
    if ( result > 0 ) /*0x6b2b5e*/
    {
      while ( 1 ) /*0x6b2b77*/
      {
        v39 = 0; /*0x6b2b77*/
        v33 = 0; /*0x6b2b7b*/
        v31 = (char *)MEMORY[0xB0B6EC] + 8 * v7 + 8 * v6 * result; /*0x6b2b82*/
        v31[4] = 0; /*0x6b2b86*/
        v31[5] = 0; /*0x6b2b8a*/
        v45[1] = dword_8759AC + v6; /*0x6b2ba8*/
        v8 = dword_8759A8 + v7; /*0x6b2bad*/
        v45[0] = v8; /*0x6b2ba3*/
        v32 = *(_DWORD *)v45; /*0x6b2bb1*/
        for ( j = v46; ; j += 2 ) /*0x6b2bb5*/
        {
          v10 = SHIWORD(v32) + v8; /*0x6b2bc1*/
          if ( v10 > g_MapCellHeight_Value /*0x6b2bdc*/
            && v8 - SHIWORD(v32) < g_MapCellHeight_Value
            && SHIWORD(v32) - v8 < g_MapCellHeight_Value
            && v10 <= g_MapCellCount )
          {
            break; /*0x6b2bdc*/
          }
          if ( v33 >= 3 ) /*0x6b2be3*/
            break; /*0x6b2be3*/
          v11 = v45[1] + j[1]; /*0x6b2bf1*/
          LOWORD(v35) = v45[0] + *j; /*0x6b2bfa*/
          HIWORD(v35) = v11; /*0x6b2bff*/
          v8 = v35; /*0x6b2c04*/
          v32 = v35; /*0x6b2c09*/
          ++v33; /*0x6b2c0d*/
        }
        v12 = v8; /*0x6b2c1b*/
        v13 = SHIWORD(v32) + v8; /*0x6b2c1e*/
        if ( v13 <= g_MapCellHeight_Value /*0x6b2c45*/
          || v12 - SHIWORD(v32) >= g_MapCellHeight_Value
          || SHIWORD(v32) - v12 >= g_MapCellHeight_Value
          || v13 > g_MapCellCount )
        {
          v31[4] = 1; /*0x6b2ee4*/
        }
        else
        {
          v14 = *((unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32) + 284); /*0x6b2c6c*/
          v15 = 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32) + 283) /*0x6b2c95*/
              + *(_DWORD *)*(&MEMORY[0x83FF18] + v14);
          v16 = g_MapCellHeight_Value; /*0x6b2c97*/
          v39 = v15; /*0x6b2c9c*/
          v17 = (__int16)(v45[1] - 1); /*0x6b2ca3*/
          v18 = v17 + v45[0]; /*0x6b2ca6*/
          if ( v18 > g_MapCellHeight_Value /*0x6b2ccd*/
            && v45[0] - v17 < g_MapCellHeight_Value
            && v17 - v45[0] < g_MapCellHeight_Value
            && v18 <= g_MapCellCount )
          {
            v36 = *(_DWORD *)v45 - 0x10000; /*0x6b2cdc*/
            v33 = *(_DWORD *)v45 - 0x10000; /*0x6b2ceb*/
            v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x6b2cf4*/
            v41 = v19[9]; /*0x6b2cfd*/
            if ( !MapSeed::IsCellInBounds((__int16 *)&v41) /*0x6b2d4e*/
              || v19[17] != -1
              || v19[57]
              || (v42 = v19[9], Tactical::GetCellData((__int16 *)&v42)[69])
              || (v20 = v19[14], v20 < MEMORY[0xA8ED38])
              && v20 != 0xFFFF
              && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v20) + 736) )
            {
              v31[4] = 1; /*0x6b2d5c*/
            }
            v16 = g_MapCellHeight_Value; /*0x6b2d60*/
          }
          v21 = (__int16)(v45[0] - 1); /*0x6b2d73*/
          v22 = (__int16)(v45[1] - 1); /*0x6b2d76*/
          if ( v22 + v21 > v16 && v21 - v22 < v16 && v22 - v21 < v16 && v22 + v21 <= g_MapCellCount ) /*0x6b2da0*/
          {
            LOWORD(v37) = v45[0] - 1; /*0x6b2daa*/
            HIWORD(v37) = v45[1] - 1; /*0x6b2daf*/
            v42 = v37; /*0x6b2dbe*/
            v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v42); /*0x6b2dc7*/
            v41 = v23[9]; /*0x6b2dd0*/
            if ( !MapSeed::IsCellInBounds((__int16 *)&v41) /*0x6b2e21*/
              || v23[17] != -1
              || v23[57]
              || (v33 = v23[9], Tactical::GetCellData((__int16 *)&v33)[69])
              || (v24 = v23[14], v24 < MEMORY[0xA8ED38])
              && v24 != 0xFFFF
              && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v24) + 736) )
            {
              v31[4] = 1; /*0x6b2e2f*/
            }
            v16 = g_MapCellHeight_Value; /*0x6b2e33*/
          }
          v25 = (__int16)(v45[0] - 1); /*0x6b2e3d*/
          v26 = v45[1] + v25; /*0x6b2e45*/
          if ( v26 > v16 && v25 - v45[1] < v16 && v45[1] - v25 < v16 && v26 <= g_MapCellCount ) /*0x6b2e60*/
          {
            v38[0] = -1; /*0x6b2e70*/
            v38[1] = 0; /*0x6b2e77*/
            v43 = *CellStruct::Add(v45, &v44, v38); /*0x6b2e89*/
            v27 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x6b2e93*/
            LOBYTE(v28) = 1; /*0x6b2e9a*/
            if ( !(unsigned __int8)System_Init_6B2520(v27, v28) ) /*0x6b2e9c*/
              v31[4] = 1; /*0x6b2ea9*/
          }
          if ( MapSeed::IsCellInBounds(v45) ) /*0x6b2eb1*/
          {
            v29 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v45); /*0x6b2ec4*/
            LOBYTE(v30) = 1; /*0x6b2ecb*/
            if ( !(unsigned __int8)System_Init_6B2520(v29, v30) ) /*0x6b2ecd*/
              v31[4] = 1; /*0x6b2eda*/
          }
        }
        *(_DWORD *)v31 = v39; /*0x6b2ef0*/
        result = dword_8759A4; /*0x6b2ef6*/
        v7 = ++v40; /*0x6b2efb*/
        if ( v40 >= dword_8759A4 ) /*0x6b2f02*/
          break; /*0x6b2f02*/
        v6 = i; /*0x6b2b66*/
      }
      v5 = dword_8759A0; /*0x6b2f08*/
      v6 = i; /*0x6b2f0e*/
    }
    ++v6; /*0x6b2f14*/
  }
  return result; /*0x6b2f23*/
}
}
} // namespace gamemd

// 0x6B2F30
namespace gamemd {
char sub_6B2F30(char a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_6B2F30(char a1, int a2, int a3)
{
  int v3; // esi
  __int16 v4; // bp
  __int16 v5; // bx
  __int16 v6; // di
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  void *v10; // eax
  __int16 v11; // di
  _DWORD *v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // edx
  int *v20; // esi
  int v21; // ebp
  int v22; // eax
  int i; // esi
  int v24; // eax
  int j; // esi
  int *ScreenRect; // eax
  int v27; // esi
  char v28; // dl
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  __int16 v32; // ax
  __int16 v33; // bp
  int v34; // esi
  int v35; // edx
  int v36; // edx
  int *v37; // eax
  int v38; // ecx
  int v39; // ebp
  int v40; // edx
  _DWORD *v41; // ecx
  _DWORD *v42; // eax
  int v43; // edi
  int v44; // ebx
  int v45; // ebp
  int v46; // esi
  int v47; // ecx
  int *v48; // eax
  int v49; // esi
  int v50; // edi
  int v51; // ecx
  int v52; // edx
  int v53; // ebp
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  int v60; // esi
  int v61; // eax
  int v62; // ecx
  void *v63; // edi
  int *v64; // eax
  int v65; // ebp
  int v66; // esi
  int v67; // ebx
  int *v68; // eax
  int v69; // edi
  int v70; // edx
  int v71; // ecx
  int v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // edx
  int v77; // [esp+10h] [ebp-ACh] BYREF
  __int16 v78; // [esp+14h] [ebp-A8h]
  __int16 v79; // [esp+16h] [ebp-A6h]
  __int16 v80; // [esp+18h] [ebp-A4h]
  __int16 v81; // [esp+1Ah] [ebp-A2h]
  int v82; // [esp+1Ch] [ebp-A0h]
  int v83; // [esp+20h] [ebp-9Ch]
  char v84; // [esp+27h] [ebp-95h]
  int v85; // [esp+28h] [ebp-94h]
  int v86; // [esp+2Ch] [ebp-90h]
  int v87; // [esp+30h] [ebp-8Ch]
  int v88; // [esp+34h] [ebp-88h]
  int v89; // [esp+38h] [ebp-84h]
  int v90; // [esp+40h] [ebp-7Ch]
  int v91; // [esp+44h] [ebp-78h]
  int k; // [esp+48h] [ebp-74h]
  int v93; // [esp+4Ch] [ebp-70h]
  int v94; // [esp+50h] [ebp-6Ch]
  int v95; // [esp+54h] [ebp-68h] BYREF
  int v96; // [esp+58h] [ebp-64h] BYREF
  int v97; // [esp+5Ch] [ebp-60h] BYREF
  int v98; // [esp+60h] [ebp-5Ch] BYREF
  int v99; // [esp+64h] [ebp-58h]
  int v100; // [esp+68h] [ebp-54h]
  void **v101; // [esp+6Ch] [ebp-50h] BYREF
  void *Block; // [esp+70h] [ebp-4Ch]
  int v103; // [esp+74h] [ebp-48h]
  char v104; // [esp+79h] [ebp-43h]
  int v105; // [esp+7Ch] [ebp-40h]
  int v106; // [esp+80h] [ebp-3Ch]
  int v107; // [esp+84h] [ebp-38h]
  int v108; // [esp+88h] [ebp-34h]
  int v109; // [esp+8Ch] [ebp-30h] BYREF
  int v110; // [esp+90h] [ebp-2Ch]
  int v111; // [esp+94h] [ebp-28h]
  int v112; // [esp+98h] [ebp-24h]
  int v113[4]; // [esp+9Ch] [ebp-20h] BYREF
  int v114[4]; // [esp+ACh] [ebp-10h] BYREF

  v84 = a1; /*0x6b2f46*/
  LOWORD(v77) = a3 - 14; /*0x6b2f51*/
  HIWORD(v77) = HIWORD(a3) - 14; /*0x6b2f56*/
  v3 = v77; /*0x6b2f5b*/
  HIWORD(v77) = HIWORD(a3) + 14; /*0x6b2f62*/
  v89 = v3; /*0x6b2f73*/
  LOWORD(v77) = a3 + 14; /*0x6b2f87*/
  HIWORD(v83) = HIWORD(a3) + 14; /*0x6b2f93*/
  v4 = (__int16)(a3 - 14) < 0 ? 0 : v3;
  v5 = v3 < 0 ? 0 : HIWORD(v3);
  LOWORD(v83) = MEMORY[0x87F914] - MEMORY[0x87F90C]; /*0x6b2fad*/
  if ( MEMORY[0x87F914] - MEMORY[0x87F90C] >= (__int16)(a3 + 14) ) /*0x6b2fb2*/
    LOWORD(v83) = a3 + 14; /*0x6b2fb4*/
  v6 = HIWORD(v83); /*0x6b2fc4*/
  if ( MEMORY[0x87F918] - MEMORY[0x87F910] < SHIWORD(v83) ) /*0x6b2fcd*/
    v6 = MEMORY[0x87F918] - MEMORY[0x87F910]; /*0x6b2fcf*/
  v7 = 0; /*0x6b2fd2*/
  v90 = 0; /*0x6b2fdf*/
  v91 = 0; /*0x6b2fe3*/
  k = 0; /*0x6b2fe7*/
  v93 = 0; /*0x6b2feb*/
  v78 = 0x7FFF; /*0x6b2fef*/
  v79 = 0x7FFF; /*0x6b2ff4*/
  v80 = 0; /*0x6b2ff9*/
  v81 = 0; /*0x6b2ffe*/
  ObjectVector::Construct(&v101, 0, 0); /*0x6b3003*/
  v8 = v5; /*0x6b3008*/
  v9 = v6; /*0x6b300b*/
  v101 = &vt_DynamicVectorClass_ObjectClass; /*0x6b3010*/
  v106 = 10; /*0x6b3018*/
  v105 = 0; /*0x6b3023*/
  v100 = v5; /*0x6b3027*/
  v108 = v6; /*0x6b302b*/
  if ( v5 <= v6 ) /*0x6b3032*/
  {
    v107 = v4; /*0x6b303b*/
    v98 = (__int16)v83; /*0x6b3047*/
    v10 = MEMORY[0xB0B6EC]; /*0x6b304b*/
    while ( 1 ) /*0x6b3050*/
    {
      v11 = v107; /*0x6b3050*/
      v83 = v107; /*0x6b305d*/
      if ( v107 <= v98 ) /*0x6b3061*/
        break; /*0x6b3061*/
LABEL_107:
      v100 = ++v8; /*0x6b361a*/
      if ( v8 > v9 ) /*0x6b361e*/
        goto LABEL_110; /*0x6b361e*/
    }
    while ( 1 ) /*0x6b3080*/
    {
      HIWORD(v96) = dword_8759AC + v8; /*0x6b3080*/
      LOWORD(v96) = dword_8759A8 + v11; /*0x6b308f*/
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v96); /*0x6b3099*/
      if ( !CellClass::IsBuildable((int)v12) ) /*0x6b30a8*/
        goto LABEL_104; /*0x6b30a8*/
      v13 = v100 * dword_8759A4 + v83; /*0x6b30c5*/
      v10 = MEMORY[0xB0B6EC]; /*0x6b30c8*/
      v14 = dword_8759A4 * (v100 + 1) + v83; /*0x6b30cd*/
      if ( *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v13 + 5) /*0x6b30e5*/
        || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v13 + 13)
        || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v14 + 13)
        || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v14 + 5) )
      {
        v15 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v13); /*0x6b30f0*/
        v110 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v13 + 2); /*0x6b30f7*/
        v16 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v14 + 2); /*0x6b30fe*/
        v17 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v14); /*0x6b3102*/
        v18 = 1000; /*0x6b3105*/
        v109 = v15; /*0x6b310a*/
        v112 = v17; /*0x6b3111*/
        v111 = v16; /*0x6b3118*/
        v82 = 1000; /*0x6b311f*/
        v19 = 0; /*0x6b3123*/
        v20 = &v109; /*0x6b3125*/
        v21 = 4; /*0x6b312c*/
        do /*0x6b3143*/
        {
          if ( *v20 < v18 ) /*0x6b3135*/
            v18 = *v20; /*0x6b3137*/
          if ( *v20 > v19 ) /*0x6b313b*/
            v19 = *v20; /*0x6b313d*/
          ++v20; /*0x6b313f*/
          --v21; /*0x6b3142*/
        }
        while ( v21 ); /*0x6b3143*/
        v82 = v18; /*0x6b3147*/
        if ( v19 - v18 <= 15 ) /*0x6b314e*/
          break; /*0x6b314e*/
      }
LABEL_105:
      if ( ++v83 > v98 ) /*0x6b3602*/
      {
        v8 = v100; /*0x6b3608*/
        v7 = v91; /*0x6b360c*/
        v9 = v108; /*0x6b3610*/
        goto LABEL_107; /*0x6b3610*/
      }
      v11 = v83; /*0x6b3069*/
      LOWORD(v8) = v100; /*0x6b306d*/
    }
    v105 = 0; /*0x6b315c*/
    if ( Block && v104 ) /*0x6b3168*/
    {
      __3_YAXPAX_Z(Block); /*0x6b316b*/
      Block = 0; /*0x6b3173*/
    }
    v22 = 0; /*0x6b3177*/
    v104 = 0; /*0x6b3179*/
    v103 = 0; /*0x6b317e*/
    for ( i = v12[57]; i; i = *(_DWORD *)(i + 48) ) /*0x6b318a*/
    {
      if ( v105 < v22 ) /*0x6b3190*/
        goto LABEL_31; /*0x6b3190*/
      if ( !v104 && v22 || v106 <= 0 ) /*0x6b31a7*/
        continue; /*0x6b31a7*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v101[2])(&v101, v106 + v22, 0) ) /*0x6b31b5*/
      {
LABEL_31:
        v24 = v105++; /*0x6b31c0*/
        *((_DWORD *)Block + v24) = i; /*0x6b31cb*/
      }
      v22 = v103; /*0x6b31ce*/
    }
    for ( j = 0; j < v105; ++j ) /*0x6b31e1*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)Block + j) + 292))(*((_DWORD *)Block + j), 0); /*0x6b31ee*/
    ScreenRect = CellClass::GetScreenRect((int)v12, v114); /*0x6b3205*/
    v85 = *ScreenRect; /*0x6b320c*/
    v86 = ScreenRect[1]; /*0x6b3213*/
    v87 = ScreenRect[2]; /*0x6b321e*/
    v88 = ScreenRect[3]; /*0x6b3225*/
    v27 = *((char *)v12 + 283); /*0x6b3232*/
    v28 = ((int)((unsigned __int64)(2290649225LL * v82) >> 32) >> 3 < 0) /*0x6b3241*/
        + ((int)((unsigned __int64)(2290649225LL * v82) >> 32) >> 3);
    *((_BYTE *)v12 + 283) = v28; /*0x6b3248*/
    Object_Create(v28); /*0x6b3252*/
    if ( v27 != *((char *)v12 + 283) ) /*0x6b3260*/
      CellClass::ClearCellContents(v12); /*0x6b3264*/
    House::AnnounceUpgrade((int)v12, -1); /*0x6b326d*/
    v29 = v12[18]; /*0x6b3272*/
    if ( v29 != -1 ) /*0x6b3278*/
    {
      v89 = v12[9]; /*0x6b3287*/
      v99 = 0; /*0x6b328b*/
      v30 = *((_DWORD *)MEMORY[0xA8EC1C] + v29); /*0x6b3293*/
      v31 = *(_DWORD *)(v30 + 664); /*0x6b329e*/
      v32 = *((unsigned __int8 *)v12 + 287) / v31; /*0x6b32af*/
      LOWORD(v89) = v89 - *((unsigned __int8 *)v12 + 287) % v31; /*0x6b32b1*/
      HIWORD(v89) -= v32; /*0x6b32b6*/
      if ( *(int *)(v30 + 668) > 0 ) /*0x6b32c3*/
      {
        v33 = v89; /*0x6b32c5*/
        do /*0x6b3320*/
        {
          v34 = 0; /*0x6b32c9*/
          if ( v31 > 0 ) /*0x6b32cd*/
          {
            HIWORD(v94) = v99 + HIWORD(v89); /*0x6b32d9*/
            do /*0x6b330d*/
            {
              LOWORD(v94) = v34 + v33; /*0x6b32e5*/
              v95 = v94; /*0x6b32ee*/
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95) + 18) = -1; /*0x6b32fd*/
              v31 = *(_DWORD *)(v30 + 664); /*0x6b3304*/
              ++v34; /*0x6b330a*/
            }
            while ( v34 < v31 ); /*0x6b330d*/
          }
          v35 = *(_DWORD *)(v30 + 668); /*0x6b3313*/
          ++v99; /*0x6b331c*/
        }
        while ( v99 < v35 ); /*0x6b3320*/
      }
    }
    v97 = v12[9]; /*0x6b332a*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&v97); /*0x6b3333*/
    if ( (__int16)v97 < v78 ) /*0x6b3341*/
      v78 = v97; /*0x6b3343*/
    if ( (__int16)v97 > v80 ) /*0x6b334d*/
      v80 = v97; /*0x6b334f*/
    if ( SHIWORD(v97) < v79 ) /*0x6b335e*/
      v79 = HIWORD(v97); /*0x6b3360*/
    if ( SHIWORD(v97) > v81 ) /*0x6b336a*/
      v81 = HIWORD(v97); /*0x6b336c*/
    v36 = v82; /*0x6b3371*/
    v37 = &v109; /*0x6b3375*/
    v38 = 4; /*0x6b337c*/
    do /*0x6b338c*/
    {
      v39 = *v37++; /*0x6b3381*/
      --v38; /*0x6b3388*/
      *(v37 - 1) = v39 - v36; /*0x6b3389*/
    }
    while ( v38 ); /*0x6b338c*/
    v40 = 0; /*0x6b339c*/
    v41 = &MEMORY[0x83FF18]; /*0x6b339e*/
    while ( 1 ) /*0x6b33a3*/
    {
      v42 = (_DWORD *)*v41; /*0x6b33a3*/
      if ( *(_DWORD *)*v41 == v109 && v42[1] == v110 && v42[2] == v111 && v42[3] == v112 ) /*0x6b33c4*/
        break; /*0x6b33c4*/
      ++v41; /*0x6b33c6*/
      ++v40; /*0x6b33c9*/
      if ( (int)v41 >= (int)&MEMORY[0x83FF64] ) /*0x6b33d0*/
      {
        v43 = v85; /*0x6b33d2*/
        v44 = k; /*0x6b33d6*/
        v45 = v86; /*0x6b33da*/
        v46 = v88; /*0x6b33de*/
        goto LABEL_88; /*0x6b33e2*/
      }
    }
    *((_BYTE *)v12 + 284) = v40; /*0x6b33e9*/
    if ( v40 ) /*0x6b33ef*/
      v47 = v40 + g_CellTileLookup - 1; /*0x6b33fe*/
    else
      v47 = unk_AA10B0; /*0x6b33f1*/
    v12[14] = v47; /*0x6b3402*/
    House::AnnounceUpgrade((int)v12, -1); /*0x6b3409*/
    v77 = v12[9]; /*0x6b341b*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&v77); /*0x6b341f*/
    v48 = CellClass::GetScreenRect((int)v12, v113); /*0x6b342e*/
    v49 = v87; /*0x6b3433*/
    if ( v87 <= 0 || v88 <= 0 ) /*0x6b3445*/
    {
      v55 = *v48; /*0x6b34c5*/
      v52 = v48[1]; /*0x6b34c7*/
      v49 = v48[2]; /*0x6b34ca*/
      v56 = v48[3]; /*0x6b34cd*/
    }
    else
    {
      v82 = v48[2]; /*0x6b344c*/
      if ( v82 <= 0 || (v99 = v48[3], v99 <= 0) ) /*0x6b345b*/
      {
        v55 = v85; /*0x6b34b9*/
        v52 = v86; /*0x6b34bd*/
        v56 = v88; /*0x6b34c1*/
      }
      else
      {
        v50 = v85; /*0x6b345d*/
        v51 = *v48; /*0x6b3461*/
        v52 = v86; /*0x6b3463*/
        v53 = v88; /*0x6b3467*/
        if ( v85 > *v48 ) /*0x6b346d*/
        {
          v49 = v85 + v87 - v51; /*0x6b3471*/
          v50 = *v48; /*0x6b3473*/
        }
        v54 = v48[1]; /*0x6b3475*/
        v95 = v54; /*0x6b347a*/
        if ( v86 > v54 ) /*0x6b347e*/
        {
          v53 = v86 - v54 + v88; /*0x6b3482*/
          v52 = v54; /*0x6b3484*/
        }
        if ( v49 + v50 < v51 + v82 ) /*0x6b3491*/
          v49 = v51 - v50 + v82 + 1; /*0x6b3499*/
        if ( v52 + v53 < v95 + v99 ) /*0x6b34ac*/
          v53 = v95 + v99 - v52 + 1; /*0x6b34b1*/
        v55 = v50; /*0x6b34b3*/
        v56 = v53; /*0x6b34b5*/
      }
    }
    v44 = k; /*0x6b34d0*/
    v87 = v49; /*0x6b34d4*/
    v46 = v56; /*0x6b34d8*/
    v43 = v55; /*0x6b34e3*/
    v45 = v52; /*0x6b34e5*/
    v85 = v55; /*0x6b34e7*/
    v86 = v52; /*0x6b34eb*/
    v88 = v56; /*0x6b34ef*/
    if ( (__int16)v77 < v78 ) /*0x6b34f3*/
      v78 = v77; /*0x6b34f5*/
    if ( (__int16)v77 > v80 ) /*0x6b34ff*/
      v80 = v77; /*0x6b3501*/
    if ( SHIWORD(v77) < v79 ) /*0x6b3510*/
      v79 = HIWORD(v77); /*0x6b3512*/
    if ( SHIWORD(v77) > v81 ) /*0x6b351c*/
      v81 = HIWORD(v77); /*0x6b351e*/
LABEL_88:
    if ( v44 <= 0 || v93 <= 0 ) /*0x6b352d*/
    {
      v59 = v87; /*0x6b35a3*/
      v57 = v43; /*0x6b35a7*/
      v58 = v45; /*0x6b35a9*/
    }
    else if ( v87 <= 0 || v46 <= 0 ) /*0x6b3539*/
    {
      v57 = v90; /*0x6b3593*/
      v58 = v91; /*0x6b3597*/
      v46 = v93; /*0x6b359b*/
      v59 = v44; /*0x6b359f*/
    }
    else
    {
      v57 = v90; /*0x6b353b*/
      v58 = v91; /*0x6b353f*/
      v46 = v93; /*0x6b3543*/
      v59 = v44; /*0x6b3549*/
      if ( v90 > v43 ) /*0x6b354b*/
      {
        v57 = v43; /*0x6b3551*/
        v59 = v90 + v44 - v43; /*0x6b3553*/
      }
      if ( v91 > v45 ) /*0x6b3557*/
      {
        v46 = v91 - v45 + v93; /*0x6b355b*/
        v58 = v45; /*0x6b355d*/
      }
      if ( v59 + v57 < v43 + v87 ) /*0x6b356a*/
        v59 = v87 - v57 + v43 + 1; /*0x6b3572*/
      if ( v46 + v58 < v86 + v88 ) /*0x6b3585*/
        v46 = v86 - v58 + v88 + 1; /*0x6b358d*/
    }
    v90 = v57; /*0x6b35ab*/
    v93 = v46; /*0x6b35b3*/
    v60 = 0; /*0x6b35b7*/
    v91 = v58; /*0x6b35bb*/
    for ( k = v59; v60 < v105; ++v60 ) /*0x6b35c3*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)Block + v60) + 292))(*((_DWORD *)Block + v60), 1); /*0x6b35d0*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)Block + v60) + 460))(*((_DWORD *)Block + v60), 0); /*0x6b35e1*/
    }
LABEL_104:
    v10 = MEMORY[0xB0B6EC]; /*0x6b35ee*/
    goto LABEL_105; /*0x6b35ee*/
  }
  v10 = MEMORY[0xB0B6EC]; /*0x6b3626*/
LABEL_110:
  __3_YAXPAX_Z(v10); /*0x6b362b*/
  MEMORY[0xB0B6EC] = 0; /*0x6b3649*/
  Cell::CreateCrater(v90, v7 - MEMORY[0x886FA4], k, v93, 0); /*0x6b366a*/
  v61 = v79 - 1; /*0x6b3679*/
  v62 = v81 + 1; /*0x6b367a*/
  v82 = v61; /*0x6b367d*/
  v97 = v62; /*0x6b3681*/
  if ( v61 <= v62 ) /*0x6b3685*/
  {
    v108 = v78 - 1; /*0x6b3691*/
    v96 = v80 + 1; /*0x6b369e*/
    do /*0x6b3811*/
    {
      v77 = v108; /*0x6b36af*/
      if ( v108 <= v96 ) /*0x6b36b3*/
      {
        do /*0x6b37fc*/
        {
          LOWORD(v98) = v77; /*0x6b36c7*/
          HIWORD(v98) = v82; /*0x6b36d2*/
          v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v98); /*0x6b36dc*/
          v64 = CellClass::GetScreenRect((int)v63, v113); /*0x6b36e8*/
          v65 = *v64; /*0x6b36ed*/
          v110 = v64[1]; /*0x6b36f2*/
          v66 = v64[2]; /*0x6b36fb*/
          v67 = v64[3]; /*0x6b36fe*/
          if ( CellClass::DetermineTileType((int)v63) ) /*0x6b3701*/
          {
            v68 = CellClass::GetScreenRect((int)v63, v114); /*0x6b3718*/
            if ( v66 <= 0 || v67 <= 0 ) /*0x6b3727*/
            {
              v71 = *v68; /*0x6b37ad*/
              v70 = v68[1]; /*0x6b37af*/
              v66 = v68[2]; /*0x6b37b2*/
              v73 = v68[3]; /*0x6b37b5*/
            }
            else
            {
              v94 = v68[2]; /*0x6b3732*/
              if ( v94 <= 0 || (v95 = v68[3], v95 <= 0) ) /*0x6b3741*/
              {
                v70 = v110; /*0x6b37a0*/
                v71 = v65; /*0x6b37a7*/
                v73 = v67; /*0x6b37a9*/
              }
              else
              {
                v69 = *v68; /*0x6b3743*/
                v70 = v110; /*0x6b3745*/
                v71 = v65; /*0x6b374e*/
                if ( v65 > *v68 ) /*0x6b3750*/
                {
                  v71 = *v68; /*0x6b3754*/
                  v66 = v65 + v66 - v69; /*0x6b3756*/
                }
                v72 = v68[1]; /*0x6b3758*/
                v107 = v72; /*0x6b375d*/
                if ( v110 > v72 ) /*0x6b3764*/
                {
                  v67 += v110 - v72; /*0x6b3768*/
                  v70 = v72; /*0x6b376a*/
                }
                if ( v66 + v71 < v69 + v94 ) /*0x6b3777*/
                  v66 = v69 - v71 + v94 + 1; /*0x6b377f*/
                if ( v67 + v70 < v107 + v95 ) /*0x6b3795*/
                  v67 = v107 + v95 - v70 + 1; /*0x6b379a*/
                v73 = v67; /*0x6b379c*/
              }
            }
            v74 = v71 - MEMORY[0x886FA0]; /*0x6b37c4*/
            v75 = v70 - MEMORY[0x886FA4]; /*0x6b37c6*/
            if ( v66 > 0 && v73 > 0 ) /*0x6b37ce*/
              Cell::CreateCrater(v74, v75, v66, v73, 0); /*0x6b37e8*/
          }
          ++v77; /*0x6b37f8*/
        }
        while ( v77 <= v96 ); /*0x6b37fc*/
        v62 = v97; /*0x6b3802*/
        v61 = v82; /*0x6b3806*/
      }
      v82 = ++v61; /*0x6b380d*/
    }
    while ( v61 <= v62 ); /*0x6b3811*/
  }
  v101 = &vt_VectorClass_ObjectClass; /*0x6b381b*/
  if ( Block && v104 ) /*0x6b382d*/
    __3_YAXPAX_Z(Block); /*0x6b3830*/
  return 1; /*0x6b3838*/
}
}
} // namespace gamemd

// 0x6B3850
namespace gamemd {
char ProcessSlaveManagerTerrain()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char ProcessSlaveManagerTerrain()
{
  int BitLCW; // eax
  int v1; // ebx
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int *v14; // eax
  int v15; // ebp
  int v16; // edx
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  int v19; // ecx
  int i; // [esp+0h] [ebp-18h]
  int v22; // [esp+4h] [ebp-14h] BYREF
  int v23; // [esp+8h] [ebp-10h] BYREF
  int v24; // [esp+Ch] [ebp-Ch]
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6b3858*/
  BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6b3862*/
  for ( i = BitLCW; BitLCW; i = BitLCW ) /*0x6b386d*/
  {
    v1 = *(_DWORD *)(BitLCW + 36); /*0x6b3877*/
    v22 = v1; /*0x6b3886*/
    v2 = (__int16)v1 - dword_8759A8; /*0x6b3892*/
    v3 = SHIWORD(v1) - dword_8759AC; /*0x6b389a*/
    v4 = v3 * dword_8759A4 + v2; /*0x6b38a5*/
    v5 = dword_8759A4 * (v3 + 1) + v2; /*0x6b38ad*/
    if ( *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 5) /*0x6b38c7*/
      || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 13)
      || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v5 + 13)
      || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v5 + 5) )
    {
      v6 = 4; /*0x6b38d6*/
      v23 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4); /*0x6b38db*/
      v24 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4 + 2); /*0x6b38e3*/
      v7 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v5); /*0x6b38eb*/
      v25 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v5 + 2); /*0x6b38ee*/
      v26 = v7; /*0x6b38f2*/
      v8 = 1000; /*0x6b38f6*/
      v9 = 0; /*0x6b38fb*/
      v10 = &v23; /*0x6b38fd*/
      do /*0x6b3913*/
      {
        if ( *v10 < v8 ) /*0x6b3905*/
          v8 = *v10; /*0x6b3907*/
        if ( *v10 > v9 ) /*0x6b390b*/
          v9 = *v10; /*0x6b390d*/
        ++v10; /*0x6b390f*/
        --v6; /*0x6b3912*/
      }
      while ( v6 ); /*0x6b3913*/
      if ( v9 - v8 <= 15 ) /*0x6b391a*/
      {
        v22 = v1; /*0x6b3928*/
        v11 = SHIWORD(v1) + (__int16)v1; /*0x6b3934*/
        if ( v11 > g_MapCellHeight_Value /*0x6b396f*/
          && (__int16)v1 - SHIWORD(v1) < g_MapCellHeight_Value
          && SHIWORD(v1) - (__int16)v1 < g_MapCellHeight_Value
          && v11 <= g_MapCellCount
          && *(_DWORD *)(i + 68) == -1
          && !*(_DWORD *)(i + 228) )
        {
          v22 = v1; /*0x6b3981*/
          if ( !Tactical::GetCellData((__int16 *)&v22)[69] ) /*0x6b398a*/
          {
            v12 = *(_DWORD *)(i + 56); /*0x6b3995*/
            if ( v12 >= MEMORY[0xA8ED38] || v12 == 0xFFFF || *(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v12) + 736) ) /*0x6b39b2*/
            {
              v13 = 4; /*0x6b39c5*/
              v14 = &v23; /*0x6b39d8*/
              *(_BYTE *)(i + 283) = v8 / 15; /*0x6b39dc*/
              do /*0x6b39ed*/
              {
                v15 = *v14++; /*0x6b39e2*/
                --v13; /*0x6b39e9*/
                *(v14 - 1) = v15 - v8; /*0x6b39ea*/
              }
              while ( v13 ); /*0x6b39ed*/
              v16 = 0; /*0x6b39f7*/
              v17 = &MEMORY[0x83FF18]; /*0x6b39f9*/
              while ( 1 ) /*0x6b39fe*/
              {
                v18 = (_DWORD *)*v17; /*0x6b39fe*/
                if ( *(_DWORD *)*v17 == v23 && v18[1] == v24 && v18[2] == v25 && v18[3] == v26 ) /*0x6b3a19*/
                  break; /*0x6b3a19*/
                ++v17; /*0x6b3a1b*/
                ++v16; /*0x6b3a1e*/
                if ( (int)v17 >= (int)&MEMORY[0x83FF64] ) /*0x6b3a25*/
                  goto LABEL_36; /*0x6b3a25*/
              }
              *(_BYTE *)(i + 284) = v16; /*0x6b3a2b*/
              if ( v16 ) /*0x6b3a31*/
                v19 = g_CellTileLookup + v16 - 1; /*0x6b3a40*/
              else
                v19 = unk_AA10B0; /*0x6b3a33*/
              *(_DWORD *)(i + 56) = v19; /*0x6b3a44*/
            }
          }
        }
      }
    }
LABEL_36:
    BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6b3a47*/
  }
  __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b3a68*/
  MEMORY[0xB0B6EC] = 0; /*0x6b3a6d*/
  return 1; /*0x6b3a7c*/
}
}
} // namespace gamemd

// 0x6B3A80
namespace gamemd {
char Terrain_FlowCompute(int a1, char a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Terrain_FlowCompute(int a1, char a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  char *v10; // esi
  int v11; // ebx
  int v12; // eax
  int *v13; // edx
  int v14; // eax
  int v15; // eax
  int *v16; // edx
  char v18; // [esp+13h] [ebp-19h]
  int v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h]
  int v22; // [esp+20h] [ebp-Ch]

  v4 = dword_8759A4; /*0x6b3a83*/
  v5 = -1; /*0x6b3aa3*/
  v6 = -1; /*0x6b3aa6*/
  v7 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * a3 + 2 * a4 * dword_8759A4); /*0x6b3aa9*/
  v18 = a2; /*0x6b3aac*/
  v19 = v7; /*0x6b3ab0*/
  v20 = -1; /*0x6b3ab4*/
  v22 = -1; /*0x6b3ab8*/
  while ( 1 ) /*0x6b3ae5*/
  {
    if ( !v6 && !v5 ) /*0x6b3aeb*/
      goto LABEL_39; /*0x6b3aeb*/
    v8 = a3 + v6; /*0x6b3af5*/
    v9 = a4 + v5; /*0x6b3afb*/
    if ( v8 >= 0 && v9 >= 0 && v8 < v4 && v9 < dword_8759A0 ) /*0x6b3b23*/
      break; /*0x6b3b23*/
    if ( !a2 ) /*0x6b3c8d*/
      return 0; /*0x6b3c8d*/
LABEL_39:
    v6 = ++v22; /*0x6b3c8f*/
    if ( v22 < 2 ) /*0x6b3c9b*/
    {
      a2 = v18; /*0x6b3ad4*/
      v7 = v19; /*0x6b3ad8*/
      v5 = v20; /*0x6b3adc*/
      v4 = dword_8759A4; /*0x6b3ae0*/
    }
    else
    {
      v5 = ++v20; /*0x6b3ca5*/
      if ( v20 >= 2 ) /*0x6b3cad*/
        return 1; /*0x6b3cbc*/
      a2 = v18; /*0x6b3abe*/
      v7 = v19; /*0x6b3ac2*/
      v4 = dword_8759A4; /*0x6b3ac6*/
      v6 = -1; /*0x6b3acb*/
      v22 = -1; /*0x6b3ace*/
    }
  }
  v10 = (char *)MEMORY[0xB0B6EC] + 8 * v8 + 8 * v9 * v4; /*0x6b3b34*/
  if ( v10[4] && (!a2 || !v10[6]) ) /*0x6b3b42*/
  {
    if ( (int)abs32(*(_DWORD *)v10 - v7) > 15 ) /*0x6b3b55*/
      return 0; /*0x6b3b55*/
    goto LABEL_39; /*0x6b3b55*/
  }
  v11 = *(_DWORD *)v10; /*0x6b3b60*/
  if ( (int)abs32(*(_DWORD *)v10 - v7) <= 15 ) /*0x6b3b6e*/
    goto LABEL_39; /*0x6b3b6e*/
  if ( a1 == 1 ) /*0x6b3b79*/
  {
    if ( v11 < v7 ) /*0x6b3b7d*/
    {
      if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b3bba*/
        || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
        && MEMORY[0xB0B664] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
             &MEMORY[0xB0B650],
             MEMORY[0xB0B658] + MEMORY[0xB0B664],
             0) )
      {
        v12 = MEMORY[0xB0B660]++; /*0x6b3bc7*/
        v13 = (int *)((char *)MEMORY[0xB0B654] + 12 * v12); /*0x6b3bd9*/
        *v13 = v8; /*0x6b3bdc*/
        v13[1] = v9; /*0x6b3bdf*/
        v13[2] = v11; /*0x6b3be2*/
      }
      v14 = v19 - 15; /*0x6b3be9*/
      goto LABEL_33; /*0x6b3bec*/
    }
  }
  else if ( v11 > v7 ) /*0x6b3bf0*/
  {
    if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b3c29*/
      || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
      && MEMORY[0xB0B664] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
           &MEMORY[0xB0B650],
           MEMORY[0xB0B664] + MEMORY[0xB0B658],
           0) )
    {
      v15 = MEMORY[0xB0B660]++; /*0x6b3c36*/
      v16 = (int *)((char *)MEMORY[0xB0B654] + 12 * v15); /*0x6b3c48*/
      *v16 = v8; /*0x6b3c4b*/
      v16[1] = v9; /*0x6b3c4e*/
      v16[2] = v11; /*0x6b3c51*/
    }
    v14 = v19 + 15; /*0x6b3c58*/
LABEL_33:
    *(_DWORD *)v10 = v14; /*0x6b3c5b*/
    v10[5] = 1; /*0x6b3c5d*/
  }
  if ( v10[4] || (unsigned __int8)FlowTerrainCompute(v8, v9) || v18 ) /*0x6b3c87*/
    goto LABEL_39; /*0x6b3c87*/
  return 0; /*0x6b3cb3*/
}
}
} // namespace gamemd

// 0x6B3CD0
namespace gamemd {
char sub_6B3CD0(int a1, char a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_6B3CD0(int a1, char a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v7; // ebp
  int v8; // ecx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  char *v13; // eax
  bool v14; // sf
  int v15; // ecx
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  int v20; // [esp+24h] [ebp+8h]

  MEMORY[0xB0B660] = 0; /*0x6b3ce6*/
  if ( MEMORY[0xB0B654] && MEMORY[0xB0B65D] ) /*0x6b3cf6*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b3cf9*/
    MEMORY[0xB0B654] = 0; /*0x6b3d01*/
  }
  MEMORY[0xB0B658] = 0; /*0x6b3d0b*/
  v5 = a3; /*0x6b3d11*/
  MEMORY[0xB0B65D] = 0; /*0x6b3d15*/
  InitializeBuildabilityGrid(a3); /*0x6b3d1d*/
  v20 = 1; /*0x6b3d32*/
  v7 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3d4d*/
  v8 = (__int16)a3 - dword_8759A8; /*0x6b3d59*/
  v18 = v8; /*0x6b3d5b*/
  v9 = SHIWORD(a3) - dword_8759AC; /*0x6b3d5f*/
  v10 = v9 + 2; /*0x6b3d61*/
  v19 = v9 + 2; /*0x6b3d66*/
  if ( !__OFSUB__(v9, v9 + 2) ) /*0x6b3d6a*/
  {
    v11 = v8 + 2; /*0x6b3d70*/
    do /*0x6b3df7*/
    {
      v12 = v8; /*0x6b3d75*/
      if ( v8 < v11 ) /*0x6b3d77*/
      {
        while ( 1 ) /*0x6b3d79*/
        {
          if ( (v7 & v20) != 0 ) /*0x6b3d7d*/
          {
            v13 = (char *)MEMORY[0xB0B6EC] + 8 * v12 + 8 * v9 * dword_8759A4; /*0x6b3d90*/
            if ( v13[4] && !a2 ) /*0x6b3da1*/
              goto LABEL_20; /*0x6b3da1*/
            v14 = 15 * a1 + *(_DWORD *)v13 < 0; /*0x6b3dab*/
            v15 = 15 * a1 + *(_DWORD *)v13; /*0x6b3dab*/
            *(_DWORD *)v13 = v15; /*0x6b3dad*/
            if ( v14 || v15 > 180 ) /*0x6b3db7*/
              *(_DWORD *)v13 = v15 - 15 * a1; /*0x6b3dbb*/
            v13[5] = 1; /*0x6b3dc5*/
            if ( !FlowTerrainCompute(a1, a2, v12, v9) && !a2 ) /*0x6b3dd8*/
            {
LABEL_20:
              __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b3dff*/
              MEMORY[0xB0B6EC] = 0; /*0x6b3e07*/
              return 0; /*0x6b3e1a*/
            }
            v8 = v18; /*0x6b3dda*/
          }
          v11 = v8 + 2; /*0x6b3de2*/
          ++v12; /*0x6b3de7*/
          v20 *= 2; /*0x6b3de8*/
          if ( v12 >= v8 + 2 ) /*0x6b3dee*/
          {
            v10 = v19; /*0x6b3df0*/
            break; /*0x6b3df0*/
          }
        }
      }
      ++v9; /*0x6b3df4*/
    }
    while ( v9 < v10 ); /*0x6b3df7*/
    v5 = a3; /*0x6b3e41*/
  }
  return ProcessBuildingClassConstruction(a2, v10, v5); /*0x6b3e13*/
}
}
} // namespace gamemd

// 0x6B3E60
namespace gamemd {
char ComputeTerrainFlowField(int a1, char a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ComputeTerrainFlowField(int a1, char a2, int a3, unsigned int a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // edi
  char *v11; // esi
  int v12; // ecx
  bool v13; // sf
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int *v17; // edx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+24h] [ebp-4h]
  int v29; // [esp+2Ch] [ebp+4h]
  int v30; // [esp+30h] [ebp+8h]

  v4 = a1; /*0x6b3e6d*/
  MEMORY[0xB0B660] = 0; /*0x6b3e7a*/
  if ( MEMORY[0xB0B654] && MEMORY[0xB0B65D] ) /*0x6b3e8a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b3e8d*/
    MEMORY[0xB0B654] = 0; /*0x6b3e95*/
  }
  v5 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3ebd*/
  v6 = (__int16)a3 - dword_8759A8; /*0x6b3ec4*/
  MEMORY[0xB0B658] = 0; /*0x6b3ec6*/
  MEMORY[0xB0B65D] = 0; /*0x6b3ed3*/
  v7 = SHIWORD(a3) - dword_8759AC; /*0x6b3eda*/
  v26 = v5; /*0x6b3edc*/
  v8 = v7 + 2; /*0x6b3ee0*/
  v25 = v6; /*0x6b3ee3*/
  v24 = 1; /*0x6b3ee9*/
  v30 = v7; /*0x6b3ef1*/
  v28 = v7 + 2; /*0x6b3ef5*/
  if ( __OFSUB__(v7, v7 + 2) ) /*0x6b3ef9*/
    return 1; /*0x6b4036*/
  v9 = v6 + 2; /*0x6b3eff*/
  while ( 1 ) /*0x6b3f02*/
  {
    v10 = v6; /*0x6b3f02*/
    v29 = v6; /*0x6b3f06*/
    if ( v6 < v9 ) /*0x6b3f0a*/
      break; /*0x6b3f0a*/
LABEL_27:
    v30 = ++v7; /*0x6b4023*/
    if ( v7 >= v8 ) /*0x6b4027*/
      return 1; /*0x6b4027*/
  }
  while ( 1 ) /*0x6b3f10*/
  {
    if ( (v5 & v24) == 0 ) /*0x6b3f14*/
      goto LABEL_25; /*0x6b3f14*/
    v11 = (char *)MEMORY[0xB0B6EC] + 8 * v10 + 8 * v7 * dword_8759A4; /*0x6b3f2a*/
    if ( v11[4] ) /*0x6b3f2d*/
      break; /*0x6b3f2d*/
    v12 = 15 * v4; /*0x6b3f3b*/
    v13 = 15 * v4 + *(_DWORD *)v11 < 0; /*0x6b3f40*/
    v14 = 15 * v4 + *(_DWORD *)v11; /*0x6b3f40*/
    *(_DWORD *)v11 = v14; /*0x6b3f42*/
    if ( v13 || v14 > 180 ) /*0x6b3f4f*/
    {
      *(_DWORD *)v11 = v14 - v12; /*0x6b3fe8*/
    }
    else
    {
      v15 = v14 - v12; /*0x6b3f5d*/
      if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b3f90*/
        || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
        && MEMORY[0xB0B664] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
             &MEMORY[0xB0B650],
             MEMORY[0xB0B658] + MEMORY[0xB0B664],
             0) )
      {
        v16 = MEMORY[0xB0B660]++; /*0x6b3f9d*/
        v17 = (int *)((char *)MEMORY[0xB0B654] + 12 * v16); /*0x6b3faf*/
        *v17 = v10; /*0x6b3fb2*/
        v17[1] = v7; /*0x6b3fb5*/
        v17[2] = v15; /*0x6b3fb8*/
      }
      v7 = v30; /*0x6b3fbb*/
      v10 = v29; /*0x6b3fbf*/
    }
    v4 = a1; /*0x6b3fc3*/
    v11[5] = 1; /*0x6b3fcf*/
    if ( !FlowTerrainCompute(a1, a2, v10, v7) && !a2 ) /*0x6b3fe2*/
    {
      if ( MEMORY[0xB0B660] - 1 >= 0 ) /*0x6b4045*/
      {
        v19 = MEMORY[0xB0B660]; /*0x6b404a*/
        v20 = 12 * (MEMORY[0xB0B660] - 1); /*0x6b404d*/
        do /*0x6b4078*/
        {
          v20 -= 12; /*0x6b4056*/
          --v19; /*0x6b4074*/
          *((_DWORD *)MEMORY[0xB0B6EC] /*0x6b4075*/
          + 2 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v20 + 12)
          + 2 * dword_8759A4 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v20 + 16)) = *(_DWORD *)((char *)MEMORY[0xB0B654]
                                                                                             + v20
                                                                                             + 20);
        }
        while ( v19 ); /*0x6b4078*/
      }
      goto LABEL_36; /*0x6b4078*/
    }
    v6 = v25; /*0x6b3ffa*/
    v5 = v26; /*0x6b3ffe*/
LABEL_25:
    v9 = v6 + 2; /*0x6b4002*/
    ++v10; /*0x6b400b*/
    v24 *= 2; /*0x6b400c*/
    v29 = v10; /*0x6b4012*/
    if ( v10 >= v6 + 2 ) /*0x6b4016*/
    {
      v8 = v28; /*0x6b401c*/
      goto LABEL_27; /*0x6b401c*/
    }
  }
  if ( a2 ) /*0x6b3ff2*/
    goto LABEL_25; /*0x6b3ff2*/
  if ( MEMORY[0xB0B660] - 1 >= 0 ) /*0x6b4089*/
  {
    v21 = 12 * (MEMORY[0xB0B660] - 1); /*0x6b408e*/
    v22 = MEMORY[0xB0B660]; /*0x6b4091*/
    do /*0x6b40ba*/
    {
      v21 -= 12; /*0x6b4098*/
      --v22; /*0x6b40b6*/
      *((_DWORD *)MEMORY[0xB0B6EC] /*0x6b40b7*/
      + 2 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v21 + 12)
      + 2 * dword_8759A4 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v21 + 16)) = *(_DWORD *)((char *)MEMORY[0xB0B654]
                                                                                         + v21
                                                                                         + 20);
    }
    while ( v22 ); /*0x6b40ba*/
  }
LABEL_36:
  MEMORY[0xB0B660] = 0; /*0x6b40bc*/
  if ( MEMORY[0xB0B654] ) /*0x6b40c9*/
  {
    if ( MEMORY[0xB0B65D] ) /*0x6b40d3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b40d6*/
      MEMORY[0xB0B654] = 0; /*0x6b40de*/
    }
  }
  MEMORY[0xB0B658] = 0; /*0x6b40e4*/
  MEMORY[0xB0B65D] = 0; /*0x6b40ed*/
  return 0; /*0x6b402d*/
}
}
} // namespace gamemd

// 0x6B5490
namespace gamemd {
int FactoryClass_LoadTheaterSHP(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FactoryClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  _DWORD v5[22]; // [esp+8h] [ebp-26Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-214h] BYREF
  int v7; // [esp+6Ch] [ebp-208h]
  char Buffer[512]; // [esp+74h] [ebp-200h] BYREF

  result = MEMORY[0xA8EC28]; /*0x6b5490*/
  for ( i = 0; i < MEMORY[0xA8EC28]; ++i ) /*0x6b54a3*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC1C] + i); /*0x6b54af*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x6b54b2*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x6b54dc*/
      CCFileClass::Construct(v5, Buffer); /*0x6b54ed*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x6b54ff*/
      v5[0] = &vt_CCFileClass; /*0x6b5505*/
      v7 = 0; /*0x6b550d*/
      Vector::Clear((int)v6); /*0x6b5515*/
      v5[0] = &off_7E1668; /*0x6b551e*/
      BufferIOFileClass::Dtor(v5); /*0x6b5526*/
    }
    result = MEMORY[0xA8EC28]; /*0x6b552b*/
  }
  return result; /*0x6b553a*/
}
}
} // namespace gamemd

// 0x6B59A0
namespace gamemd {
char StandardCreateUnitAtCoords(unsigned int * a0, IUnknown * aP1, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall StandardCreateUnitAtCoords(_DWORD *a0, IUnknown *aP1, int a3, char a4)
{
  IUnknown *v4; // ebp
  int v6; // edi
  SmudgeTypeClass *v7; // esi
  IUnknown *v8; // eax
  int v9; // ecx
  int v10; // edi
  IUnknown *v11; // edx
  IUnknown *v12; // eax
  int v13; // esi
  int v14; // edx
  CCINIClass *v15; // eax
  IUnknown *v16; // esi
  int v17; // eax
  void **v18; // esi
  int v19; // eax
  SmudgeClass *v20; // [esp+4h] [ebp-40h]
  SmudgeClass *v21; // [esp+8h] [ebp-3Ch] BYREF
  IUnknown *v22; // [esp+Ch] [ebp-38h]
  IUnknown *v23; // [esp+10h] [ebp-34h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  IUnknown *v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  CCINIClass *v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void **v30; // [esp+2Ch] [ebp-18h] BYREF
  IUnknown *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  IUnknown *i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = (IUnknown *)a0; /*0x6b59a4*/
  v22 = aP1; /*0x6b59a6*/
  v23 = (IUnknown *)a0; /*0x6b59aa*/
  if ( __PAIR32__(a0[1] / 256, *a0 / 256) == *(_DWORD *)&stru_B05488.__pad_579C[2916] ) /*0x6b59d5*/
    return 0; /*0x6b59e6*/
  Game::LockMutex(&v30, 0, 0); /*0x6b59f4*/
  v6 = 0; /*0x6b59fe*/
  v30 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5a02*/
  v35 = 10; /*0x6b5a0a*/
  for ( i = 0; v6 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++v6 ) /*0x6b5a16*/
  {
    v7 = *(SmudgeTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v6); /*0x6b5a21*/
    if ( v7[1].__pad_0[1] ) /*0x6b5a24*/
    {
      LOWORD(v20) = v4->field_0 / 256; /*0x6b5a3f*/
      HIWORD(v20) = v4->field_4 / 256; /*0x6b5a57*/
      v21 = v20; /*0x6b5a64*/
      if ( Cell::IsWalkable((int *)v7->__pad_0, &v21, a4) ) /*0x6b5a6c*/
      {
        if ( (int)i < v32 /*0x6b5a9f*/
          || (v33 || !v32)
          && v35 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i; /*0x6b5aaa*/
          i = (IUnknown *)((char *)i + 1); /*0x6b5aad*/
          *(&v31->field_0 + (_DWORD)v8) = (int)v7; /*0x6b5ab5*/
        }
      }
    }
  }
  Game::LockMutex(&v24, 0, 0); /*0x6b5acc*/
  v9 = 10; /*0x6b5ad1*/
  v10 = 0; /*0x6b5ad6*/
  v11 = i; /*0x6b5ad8*/
  v24 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5adc*/
  v29 = 10; /*0x6b5ae6*/
  v28 = 0; /*0x6b5aea*/
  if ( (int)i > 0 ) /*0x6b5aee*/
  {
    v12 = v26; /*0x6b5af4*/
    while ( 1 ) /*0x6b5b01*/
    {
      v13 = *(&v31->field_0 + v10); /*0x6b5b01*/
      v14 = *(_DWORD *)(v13 + 664); /*0x6b5b0a*/
      if ( !a4 ) /*0x6b5b10*/
        break; /*0x6b5b10*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5b5f*/
        goto LABEL_35; /*0x6b5b5f*/
      if ( (int)v28 < (int)v12 ) /*0x6b5b65*/
        goto LABEL_33; /*0x6b5b65*/
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b73*/
        goto LABEL_35; /*0x6b5b73*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5b81*/
        goto LABEL_33; /*0x6b5b86*/
LABEL_34:
      v12 = v26; /*0x6b5b9a*/
      v9 = v29; /*0x6b5b9e*/
LABEL_35:
      v11 = i; /*0x6b5ba2*/
      if ( ++v10 >= (int)i ) /*0x6b5ba9*/
      {
        v4 = v23; /*0x6b5baf*/
        goto LABEL_37; /*0x6b5baf*/
      }
    }
    if ( (v14 != 1 || *(_DWORD *)(v13 + 668) != 1) && ((int)v22 <= 60 || a3 <= 50) ) /*0x6b5b2a*/
      goto LABEL_35; /*0x6b5b2a*/
    if ( (int)v28 >= (int)v12 ) /*0x6b5b30*/
    {
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b3e*/
        goto LABEL_35; /*0x6b5b3e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5b51*/
        goto LABEL_34; /*0x6b5b51*/
    }
LABEL_33:
    v15 = v28; /*0x6b5b88*/
    v28 = (CCINIClass *)((char *)v28 + 1); /*0x6b5b8f*/
    *((_DWORD *)Block + (_DWORD)v15) = v13; /*0x6b5b97*/
    goto LABEL_34; /*0x6b5b97*/
  }
LABEL_37:
  if ( (int)v28 <= 0 ) /*0x6b5bb7*/
  {
    if ( (int)v11 > 0 ) /*0x6b5bf2*/
    {
      v18 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b5bfe*/
      if ( v18 ) /*0x6b5c05*/
      {
        v19 = Random::Range( /*0x6b5c1a*/
                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                0,
                (IUnknown *)((char *)i - 1));
        UnitClass::Create(v18, *((AbstractClass **)&v31->field_0 + v19), (AbstractClass *)v4, -1); /*0x6b5c2c*/
      }
    }
  }
  else
  {
    v16 = (IUnknown *)__2_YAPAXI_Z(0xB0u); /*0x6b5bc3*/
    if ( v16 ) /*0x6b5bca*/
    {
      v17 = Random::Range( /*0x6b5bde*/
              (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
              0,
              (IUnknown *)((char *)&v28[-1].unknown54 + 3));
      UnitClass::Create((void **)v16, *((AbstractClass **)Block + v17), (AbstractClass *)v4, -1); /*0x6b5bee*/
    }
  }
  v24 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5c3c*/
  if ( Block && BYTE1(v27) ) /*0x6b5c46*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5c49*/
    Block = 0; /*0x6b5c51*/
  }
  BYTE1(v27) = 0; /*0x6b5c59*/
  v26 = 0; /*0x6b5c5f*/
  v30 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5c63*/
  if ( v31 ) /*0x6b5c67*/
  {
    if ( v33 ) /*0x6b5c6d*/
      __3_YAXPAX_Z(v31); /*0x6b5c70*/
  }
  return 0; /*0x6b59e2*/
}
}
} // namespace gamemd

// 0x6B5C90
namespace gamemd {
char TimedCreateUnitAtCoords(unsigned int * a0, IUnknown * aP1, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall TimedCreateUnitAtCoords(_DWORD *a0, IUnknown *aP1, int a3, char a4)
{
  IUnknown *v4; // ebp
  int v6; // edi
  SmudgeTypeClass *v7; // esi
  IUnknown *v8; // eax
  int v9; // ecx
  int v10; // edi
  IUnknown *v11; // edx
  IUnknown *v12; // eax
  int v13; // esi
  int v14; // edx
  CCINIClass *v15; // eax
  IUnknown *v16; // esi
  int v17; // eax
  void **v18; // esi
  int v19; // eax
  SmudgeClass *v20; // [esp+4h] [ebp-40h]
  SmudgeClass *v21; // [esp+8h] [ebp-3Ch] BYREF
  IUnknown *v22; // [esp+Ch] [ebp-38h]
  IUnknown *v23; // [esp+10h] [ebp-34h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  IUnknown *v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  CCINIClass *v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void **v30; // [esp+2Ch] [ebp-18h] BYREF
  IUnknown *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  IUnknown *i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = (IUnknown *)a0; /*0x6b5c94*/
  v22 = aP1; /*0x6b5c96*/
  v23 = (IUnknown *)a0; /*0x6b5c9a*/
  if ( __PAIR32__(a0[1] / 256, *a0 / 256) == *(_DWORD *)&stru_B05488.__pad_579C[2916] ) /*0x6b5cc5*/
    return 0; /*0x6b5cd6*/
  Game::LockMutex(&v30, 0, 0); /*0x6b5ce4*/
  v6 = 0; /*0x6b5cee*/
  v30 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5cf2*/
  v35 = 10; /*0x6b5cfa*/
  for ( i = 0; v6 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++v6 ) /*0x6b5d06*/
  {
    v7 = *(SmudgeTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v6); /*0x6b5d11*/
    if ( v7[1].__pad_0[0] ) /*0x6b5d14*/
    {
      LOWORD(v20) = v4->field_0 / 256; /*0x6b5d2f*/
      HIWORD(v20) = v4->field_4 / 256; /*0x6b5d47*/
      v21 = v20; /*0x6b5d54*/
      if ( Cell::IsWalkable((int *)v7->__pad_0, &v21, a4) ) /*0x6b5d5c*/
      {
        if ( (int)i < v32 /*0x6b5d8f*/
          || (v33 || !v32)
          && v35 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i; /*0x6b5d9a*/
          i = (IUnknown *)((char *)i + 1); /*0x6b5d9d*/
          *(&v31->field_0 + (_DWORD)v8) = (int)v7; /*0x6b5da5*/
        }
      }
    }
  }
  Game::LockMutex(&v24, 0, 0); /*0x6b5dbc*/
  v9 = 10; /*0x6b5dc1*/
  v10 = 0; /*0x6b5dc6*/
  v11 = i; /*0x6b5dc8*/
  v24 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5dcc*/
  v29 = 10; /*0x6b5dd6*/
  v28 = 0; /*0x6b5dda*/
  if ( (int)i > 0 ) /*0x6b5dde*/
  {
    v12 = v26; /*0x6b5de4*/
    while ( 1 ) /*0x6b5df1*/
    {
      v13 = *(&v31->field_0 + v10); /*0x6b5df1*/
      v14 = *(_DWORD *)(v13 + 664); /*0x6b5dfa*/
      if ( !a4 ) /*0x6b5e00*/
        break; /*0x6b5e00*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5e4f*/
        goto LABEL_35; /*0x6b5e4f*/
      if ( (int)v28 < (int)v12 ) /*0x6b5e55*/
        goto LABEL_33; /*0x6b5e55*/
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5e63*/
        goto LABEL_35; /*0x6b5e63*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5e71*/
        goto LABEL_33; /*0x6b5e76*/
LABEL_34:
      v12 = v26; /*0x6b5e8a*/
      v9 = v29; /*0x6b5e8e*/
LABEL_35:
      v11 = i; /*0x6b5e92*/
      if ( ++v10 >= (int)i ) /*0x6b5e99*/
      {
        v4 = v23; /*0x6b5e9f*/
        goto LABEL_37; /*0x6b5e9f*/
      }
    }
    if ( (v14 != 1 || *(_DWORD *)(v13 + 668) != 1) && ((int)v22 <= 60 || a3 <= 50) ) /*0x6b5e1a*/
      goto LABEL_35; /*0x6b5e1a*/
    if ( (int)v28 >= (int)v12 ) /*0x6b5e20*/
    {
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5e2e*/
        goto LABEL_35; /*0x6b5e2e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5e41*/
        goto LABEL_34; /*0x6b5e41*/
    }
LABEL_33:
    v15 = v28; /*0x6b5e78*/
    v28 = (CCINIClass *)((char *)v28 + 1); /*0x6b5e7f*/
    *((_DWORD *)Block + (_DWORD)v15) = v13; /*0x6b5e87*/
    goto LABEL_34; /*0x6b5e87*/
  }
LABEL_37:
  if ( (int)v28 <= 0 ) /*0x6b5ea7*/
  {
    if ( (int)v11 > 0 ) /*0x6b5ee2*/
    {
      v18 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b5eee*/
      if ( v18 ) /*0x6b5ef5*/
      {
        v19 = Random::Range( /*0x6b5f0a*/
                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                0,
                (IUnknown *)((char *)i - 1));
        UnitClass::Create(v18, *((AbstractClass **)&v31->field_0 + v19), (AbstractClass *)v4, -1); /*0x6b5f1c*/
      }
    }
  }
  else
  {
    v16 = (IUnknown *)__2_YAPAXI_Z(0xB0u); /*0x6b5eb3*/
    if ( v16 ) /*0x6b5eba*/
    {
      v17 = Random::Range( /*0x6b5ece*/
              (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
              0,
              (IUnknown *)((char *)&v28[-1].unknown54 + 3));
      UnitClass::Create((void **)v16, *((AbstractClass **)Block + v17), (AbstractClass *)v4, -1); /*0x6b5ede*/
    }
  }
  v24 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5f2c*/
  if ( Block && BYTE1(v27) ) /*0x6b5f36*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5f39*/
    Block = 0; /*0x6b5f41*/
  }
  BYTE1(v27) = 0; /*0x6b5f49*/
  v26 = 0; /*0x6b5f4f*/
  v30 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5f53*/
  if ( v31 ) /*0x6b5f57*/
  {
    if ( v33 ) /*0x6b5f5d*/
      __3_YAXPAX_Z(v31); /*0x6b5f60*/
  }
  return 0; /*0x6b5cd2*/
}
}
} // namespace gamemd

// 0x6B6230
namespace gamemd {
void sub_6B6230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6B6230()
{
  unsigned __int16 v0; // cx
  HWND Dialog; // esi
  int v2; // ecx
  LONG dwNewLong; // [esp+0h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x6b624f*/
  Debug::Log(); /*0x6b6253*/
  MEMORY[0xB0B800] = 0; /*0x6b6262*/
  v0 = 214; /*0x6b6270*/
  if ( MEMORY[0xA8E9A0] ) /*0x6b6275*/
    v0 = 184; /*0x6b6277*/
  Dialog = (HWND)CreateDialog(v0, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))AudioSettings::DlgProc, 0); /*0x6b6281*/
  if ( Dialog ) /*0x6b6285*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x6b628f*/
    Dialog::Show(Dialog); /*0x6b6297*/
    while ( dwNewLong == -1 ) /*0x6b62a0*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x6b62a9*/
        dwNewLong = 2; /*0x6b62ab*/
      if ( !MEMORY[0xA8E9A0] ) /*0x6b62ba*/
      {
        LOBYTE(v2) = 0; /*0x6b62bc*/
        ScreenSaver::Process(v2); /*0x6b62be*/
      }
    }
    Dialog::Destroy(Dialog); /*0x6b62cb*/
  }
  Debug::Log(); /*0x6b62e9*/
}
}
} // namespace gamemd

// 0x6B8F00
namespace gamemd {
int Texture_DrawAffine(int a1, unsigned int * a2, int * a3, int a4, unsigned char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Texture_DrawAffine(int a1, _DWORD *a2, int *a3, int a4, unsigned __int8 a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  _BYTE *v22; // edx
  _DWORD *v23; // ebp
  int v24; // edi
  char v25; // al
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  bool v31; // cc
  _BYTE *v33; // edx
  int v34; // edi
  char v35; // al
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  int v41; // [esp+10h] [ebp-44h]
  int v42; // [esp+14h] [ebp-40h]
  int v43; // [esp+18h] [ebp-3Ch]
  int v44; // [esp+1Ch] [ebp-38h]
  int v46; // [esp+24h] [ebp-30h]
  int v47; // [esp+28h] [ebp-2Ch]
  int v48; // [esp+28h] [ebp-2Ch]
  int v50; // [esp+30h] [ebp-24h]
  int v51; // [esp+34h] [ebp-20h]
  int v52; // [esp+38h] [ebp-1Ch]
  int v53; // [esp+3Ch] [ebp-18h]
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  int v56; // [esp+48h] [ebp-Ch]
  int v57; // [esp+48h] [ebp-Ch]
  int v58; // [esp+48h] [ebp-Ch]
  int v59; // [esp+50h] [ebp-4h]
  int v60; // [esp+58h] [ebp+4h]
  int v61; // [esp+58h] [ebp+4h]
  int v62; // [esp+5Ch] [ebp+8h]
  int v63; // [esp+5Ch] [ebp+8h]
  int v64; // [esp+60h] [ebp+Ch]
  int v65; // [esp+60h] [ebp+Ch]

  v59 = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)a1 + 92))(0, 0); /*0x6b8f27*/
  v42 = 0; /*0x6b8f3a*/
  v6 = a5; /*0x6b8f3e*/
  v44 = 0; /*0x6b8f41*/
  v41 = 0; /*0x6b8f45*/
  v7 = MEMORY[0x84066C][v6]; /*0x6b8f49*/
  v8 = (a4 * *a2) >> 1; /*0x6b8f55*/
  v56 = MEMORY[0x84026C][v6]; /*0x6b8f59*/
  v9 = (a4 * a2[1]) >> 1; /*0x6b8f62*/
  v10 = v56 * v9; /*0x6b8f64*/
  v11 = v7 * v9; /*0x6b8f69*/
  v12 = (v56 * v8) >> 8; /*0x6b8f7e*/
  v64 = *a3; /*0x6b8f8a*/
  v13 = *a3 + (((v11 >> 8) - v12) >> 8); /*0x6b8f91*/
  v60 = a3[1]; /*0x6b8f9a*/
  v62 = (v7 * v8) >> 8; /*0x6b8fa5*/
  v14 = (v11 >> 8) + v12; /*0x6b8fbc*/
  v15 = v64 + (((-v11 >> 8) - v12) >> 8); /*0x6b8fe3*/
  v55 = v60 + (((v10 >> 8) - v62) >> 8); /*0x6b8ff7*/
  v43 = v64 + (v14 >> 8) - v13; /*0x6b8fff*/
  v16 = v60 + (((-v10 >> 8) - v62) >> 8); /*0x6b9003*/
  v17 = ((v62 + (-v10 >> 8)) >> 8) - (((-v10 >> 8) - v62) >> 8); /*0x6b9009*/
  v61 = 0; /*0x6b900b*/
  v51 = 1; /*0x6b9013*/
  v50 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b9022*/
  v18 = v15 - v13; /*0x6b902a*/
  v57 = v18; /*0x6b9030*/
  v46 = v55 - v16; /*0x6b9034*/
  v63 = 0; /*0x6b9038*/
  v52 = 1; /*0x6b9040*/
  v53 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b904d*/
  if ( v17 < 0 ) /*0x6b9051*/
  {
    v17 = -v17; /*0x6b9057*/
    v50 = -(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b9060*/
  }
  if ( v43 < 0 ) /*0x6b906a*/
  {
    v43 = -v43; /*0x6b906e*/
    v51 = -1; /*0x6b9072*/
  }
  if ( v46 < 0 ) /*0x6b9080*/
  {
    v46 = v16 - v55; /*0x6b908a*/
    v53 = -(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b9093*/
  }
  if ( v18 < 0 ) /*0x6b9099*/
  {
    v18 = -v18; /*0x6b909b*/
    v57 = v18; /*0x6b909d*/
    v52 = -1; /*0x6b90a1*/
  }
  v19 = v13 + v16 * (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b90b7*/
  v65 = v19; /*0x6b90b9*/
  if ( v19 >= 0 ) /*0x6b90bd*/
  {
    v20 = v43; /*0x6b90c3*/
    if ( v43 <= v17 ) /*0x6b90c9*/
    {
      v48 = 0; /*0x6b921e*/
      if ( v18 > 0 ) /*0x6b9222*/
      {
        while ( v19 >= 0 ) /*0x6b9230*/
        {
          if ( v17 <= 0 ) /*0x6b9238*/
          {
            v34 = v41; /*0x6b9343*/
          }
          else
          {
            v58 = v17; /*0x6b9242*/
            v33 = (_BYTE *)(v59 + v19); /*0x6b9246*/
            do /*0x6b92b1*/
            {
              v34 = v41; /*0x6b924c*/
              v35 = *(_BYTE *)(v41 + a2[2]); /*0x6b9253*/
              if ( v35 ) /*0x6b9258*/
                *v33 = v35; /*0x6b925a*/
              v42 += *a2; /*0x6b9265*/
              v36 = v42; /*0x6b9260*/
              if ( v42 > v17 ) /*0x6b9269*/
              {
                do /*0x6b9270*/
                {
                  v36 -= v17; /*0x6b926b*/
                  ++v34; /*0x6b926d*/
                }
                while ( v36 > v17 ); /*0x6b9270*/
                v42 = v36; /*0x6b9272*/
                v41 = v34; /*0x6b9276*/
              }
              v33 += v50; /*0x6b9282*/
              v61 += v43; /*0x6b928c*/
              if ( v61 > v17 ) /*0x6b9290*/
              {
                if ( v35 ) /*0x6b9294*/
                  *v33 = v35; /*0x6b9296*/
                v33 += v51; /*0x6b92a2*/
                v61 -= v17; /*0x6b92a4*/
              }
              --v58; /*0x6b92ad*/
            }
            while ( v58 ); /*0x6b92b1*/
          }
          v42 = 0; /*0x6b92be*/
          v37 = 1 - *a2 + v34; /*0x6b92c6*/
          v41 = v37; /*0x6b92cf*/
          v44 += a2[1]; /*0x6b92d5*/
          v38 = v44; /*0x6b92cc*/
          if ( v44 > v18 ) /*0x6b92d9*/
          {
            do /*0x6b92e1*/
            {
              v38 -= v18; /*0x6b92db*/
              v37 += *a2; /*0x6b92dd*/
            }
            while ( v38 > v18 ); /*0x6b92e1*/
            v44 = v38; /*0x6b92e3*/
            v41 = v37; /*0x6b92e7*/
          }
          v39 = v52 + v65; /*0x6b92f7*/
          v65 += v52; /*0x6b92fd*/
          v40 = v46 + v63; /*0x6b9301*/
          v61 = 0; /*0x6b9303*/
          v63 += v46; /*0x6b9309*/
          if ( v63 > v18 ) /*0x6b930d*/
          {
            v63 = v40 - v18; /*0x6b9311*/
            v65 = v53 + v39; /*0x6b931b*/
          }
          if ( ++v48 >= v18 ) /*0x6b932a*/
            break; /*0x6b932a*/
          v19 = v65; /*0x6b922a*/
        }
      }
    }
    else
    {
      v21 = v46; /*0x6b90cf*/
      v47 = 0; /*0x6b90d3*/
      if ( v46 > 0 ) /*0x6b90dd*/
      {
        while ( v19 >= 0 ) /*0x6b90ef*/
        {
          if ( v20 <= 0 ) /*0x6b90f7*/
          {
            v23 = a2; /*0x6b920d*/
            v24 = v41; /*0x6b9211*/
          }
          else
          {
            v54 = v20; /*0x6b9101*/
            v22 = (_BYTE *)(v59 + v19); /*0x6b9105*/
            do /*0x6b9172*/
            {
              v23 = a2; /*0x6b9107*/
              v24 = v41; /*0x6b910b*/
              v25 = *(_BYTE *)(v41 + a2[2]); /*0x6b9112*/
              if ( v25 ) /*0x6b9117*/
                *v22 = v25; /*0x6b9119*/
              v42 += *a2; /*0x6b912a*/
              v26 = v42; /*0x6b9122*/
              if ( v42 > v43 ) /*0x6b912e*/
              {
                do /*0x6b9135*/
                {
                  v26 -= v43; /*0x6b9130*/
                  ++v24; /*0x6b9132*/
                }
                while ( v26 > v43 ); /*0x6b9135*/
                v42 = v26; /*0x6b9137*/
                v41 = v24; /*0x6b913b*/
              }
              v22 += v51; /*0x6b9143*/
              v61 += v17; /*0x6b914d*/
              if ( v61 > v43 ) /*0x6b9151*/
              {
                if ( v25 ) /*0x6b9155*/
                  *v22 = v25; /*0x6b9157*/
                v22 += v50; /*0x6b9163*/
                v61 -= v43; /*0x6b9165*/
              }
              --v54; /*0x6b916e*/
            }
            while ( v54 ); /*0x6b9172*/
            v18 = v57; /*0x6b9174*/
            v21 = v46; /*0x6b9178*/
          }
          v42 = 0; /*0x6b9186*/
          v27 = 1 - *v23 + v24; /*0x6b918e*/
          v41 = v27; /*0x6b9197*/
          v44 += v23[1]; /*0x6b919d*/
          v28 = v44; /*0x6b9194*/
          if ( v44 > v21 ) /*0x6b91a1*/
          {
            do /*0x6b91a9*/
            {
              v28 -= v21; /*0x6b91a3*/
              v27 += *v23; /*0x6b91a5*/
            }
            while ( v28 > v21 ); /*0x6b91a9*/
            v44 = v28; /*0x6b91ab*/
            v41 = v27; /*0x6b91af*/
          }
          v29 = v53 + v65; /*0x6b91bb*/
          v30 = v18 + v63; /*0x6b91c1*/
          v61 = 0; /*0x6b91c3*/
          v31 = v18 + v63 <= v21; /*0x6b91cb*/
          v65 += v53; /*0x6b91cd*/
          v63 += v18; /*0x6b91d1*/
          if ( !v31 ) /*0x6b91d5*/
          {
            v63 = v30 - v21; /*0x6b91e1*/
            v65 = v52 + v29; /*0x6b91e5*/
          }
          if ( ++v47 >= v21 ) /*0x6b91f4*/
            break; /*0x6b91f4*/
          v19 = v65; /*0x6b90e5*/
          v20 = v43; /*0x6b90e9*/
        }
      }
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x6b9203*/
}
}
} // namespace gamemd

// 0x6B9D00
namespace gamemd {
char Palette_LoadFromFile(int a1, int a2, char * Source, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Palette_LoadFromFile(int a1, int a2, char *Source, int a4, int a5)
{
  int v5; // ebx
  _BYTE *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  _DWORD *v10; // ebp
  int v12; // eax
  _DWORD *v13; // esi
  _BYTE *v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // edx
  int *v18; // eax
  int v19; // esi
  int v20; // ebx
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // ebx
  int v29; // eax
  int v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int i; // esi
  int v36; // eax
  int v37; // eax
  void (__thiscall ***v38)(_DWORD, int); // edi
  int v39; // esi
  const void *v40; // esi
  _DWORD *v41; // eax
  _DWORD *v42; // ebp
  int v43; // edx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  double v47; // st7
  void *v48; // [esp+14h] [ebp-9ACh] BYREF
  __int64 v49; // [esp+18h] [ebp-9A8h]
  int v50; // [esp+24h] [ebp-99Ch]
  int v51; // [esp+28h] [ebp-998h]
  _BYTE v52[16]; // [esp+2Ch] [ebp-994h] BYREF
  int v53; // [esp+3Ch] [ebp-984h]
  int v54; // [esp+40h] [ebp-980h]
  _DWORD v55[22]; // [esp+4Ch] [ebp-974h] BYREF
  _WORD v56[6]; // [esp+A4h] [ebp-91Ch] BYREF
  int v57; // [esp+B0h] [ebp-910h]
  _DWORD v58[193]; // [esp+B8h] [ebp-908h] BYREF
  _BYTE v59[768]; // [esp+3BCh] [ebp-604h] BYREF
  _DWORD v60[193]; // [esp+6BCh] [ebp-304h] BYREF

  v5 = a1; /*0x6b9d08*/
  LODWORD(v49) = a1; /*0x6b9d0c*/
  v6 = &v59[2]; /*0x6b9d10*/
  v7 = 256; /*0x6b9d17*/
  do /*0x6b9d2b*/
  {
    *(v6 - 2) = 0; /*0x6b9d1c*/
    *(v6 - 1) = 0; /*0x6b9d20*/
    *v6 = 0; /*0x6b9d24*/
    v6 += 3; /*0x6b9d27*/
    --v7; /*0x6b9d2a*/
  }
  while ( v7 ); /*0x6b9d2b*/
  v60[0] = 0; /*0x6b9d3b*/
  CCFileClass::Construct(v55, Source); /*0x6b9d42*/
  v9 = DecodeFrameSHP(0, 0); /*0x6b9d59*/
  v10 = (_DWORD *)v9; /*0x6b9d5d*/
  if ( v9 ) /*0x6b9d5f*/
  {
    v12 = a4; /*0x6b9d9c*/
    if ( a4 == 2 ) /*0x6b9da6*/
    {
      v13 = v58; /*0x6b9dac*/
      v14 = &v59[1]; /*0x6b9db3*/
      v15 = 256; /*0x6b9dba*/
      do /*0x6b9e13*/
      {
        LOBYTE(v8) = v14[1] >> MEMORY[0x8A0DDC]; /*0x6b9dc8*/
        LOBYTE(v5) = *(v14 - 1); /*0x6b9dd0*/
        v14 += 3; /*0x6b9dd3*/
        v13 = (_DWORD *)((char *)v13 + 2); /*0x6b9dd6*/
        LOWORD(v8) = (unsigned __int8)v8; /*0x6b9dd9*/
        LOWORD(v5) = (unsigned __int8)((unsigned __int8)v5 >> MEMORY[0x8A0DD4]); /*0x6b9ded*/
        v16 = v5 << MEMORY[0x8A0DD0]; /*0x6b9df1*/
        v17 = v16 | (v8 << MEMORY[0x8A0DD8]); /*0x6b9df9*/
        LOWORD(v16) = (unsigned __int8)(*(v14 - 3) >> MEMORY[0x8A0DE4]); /*0x6b9e06*/
        v5 = v16 << MEMORY[0x8A0DE0]; /*0x6b9e0a*/
        v8 = v5 | v17; /*0x6b9e0c*/
        --v15; /*0x6b9e0e*/
        *((_WORD *)v13 - 1) = v8; /*0x6b9e0f*/
      }
      while ( v15 ); /*0x6b9e13*/
      v18 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 120))(v9, v52); /*0x6b9e1e*/
      v53 = *v18; /*0x6b9e25*/
      v54 = v18[1]; /*0x6b9e2c*/
      v19 = v18[2]; /*0x6b9e30*/
      v20 = v18[3]; /*0x6b9e33*/
      v21 = __2_YAPAXI_Z(0x20u); /*0x6b9e36*/
      v10 = v21; /*0x6b9e3b*/
      if ( v21 ) /*0x6b9e42*/
      {
        v21[1] = v19; /*0x6b9e51*/
        v21[2] = v20; /*0x6b9e54*/
        v21[3] = 0; /*0x6b9e57*/
        *v21 = &XSurface_Vtable; /*0x6b9e5e*/
        v21[4] = 2; /*0x6b9e65*/
        Buffer::Init(0, 2 * v20 * v19); /*0x6b9e6c*/
        *v10 = &BSurface_Vtable; /*0x6b9e71*/
      }
      else
      {
        v10 = 0; /*0x6b9e7a*/
      }
      v22 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v10 + 92))(v10, 0, 0); /*0x6b9e87*/
      v23 = *(_DWORD *)v9; /*0x6b9e8a*/
      v51 = v22; /*0x6b9e8c*/
      v24 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(v23 + 92))(v9, 0, 0); /*0x6b9e98*/
      v25 = 0; /*0x6b9e9d*/
      v26 = v20 * v19; /*0x6b9e9f*/
      if ( v20 * v19 > 0 ) /*0x6b9ea4*/
      {
        v27 = v51; /*0x6b9ea6*/
        do /*0x6b9ec1*/
        {
          v27 += 2; /*0x6b9eac*/
          v28 = *(unsigned __int8 *)(v24 + v25++); /*0x6b9eaf*/
          *(_WORD *)(v27 - 2) = *((_WORD *)v58 + v28); /*0x6b9ebd*/
        }
        while ( v25 < v26 ); /*0x6b9ec1*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6b9ec7*/
      (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10); /*0x6b9ecf*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x6b9ed8*/
      v5 = v49; /*0x6b9eda*/
      v12 = 2; /*0x6b9ede*/
    }
    else if ( a4 == 1 ) /*0x6b9eea*/
    {
      qmemcpy(&v60[1], v59, 0x300u); /*0x6b9eff*/
    }
    if ( a5 && v12 == 1 ) /*0x6b9f0f*/
    {
      v29 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v10 + 120))(v10, v52); /*0x6b9f1b*/
      v49 = *(_QWORD *)v29; /*0x6b9f20*/
      v30 = *v10; /*0x6b9f2e*/
      v31 = *(_DWORD *)(v29 + 8); /*0x6b9f31*/
      v50 = *(_DWORD *)(v29 + 12); /*0x6b9f39*/
      v32 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v30 + 92))(v10, 0, 0); /*0x6b9f40*/
      v33 = 0; /*0x6b9f47*/
      v34 = v31 * v50; /*0x6b9f49*/
      for ( i = v32; v33 < v34; *(_BYTE *)(i + v33 - 1) = v59[2 * v36 + v36] ) /*0x6b9f50*/
        v36 = *(unsigned __int8 *)(i + v33++); /*0x6b9f54*/
      (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10); /*0x6b9f71*/
    }
    v60[0] = v10; /*0x6b9f80*/
    String::Assign((char **)&v48, Source); /*0x6b9f87*/
    String::ToLower(&v48); /*0x6b9f90*/
    v37 = *(_DWORD *)(v5 + 4); /*0x6b9f95*/
    v38 = 0; /*0x6b9f98*/
    v58[0] = 0; /*0x6b9f9c*/
    if ( v37 ) /*0x6b9fa3*/
    {
      v39 = *(_DWORD *)(*(_DWORD *)v5 /*0x6b9fbf*/
                      + 4 * ((*(int (__thiscall **)(void **))(v5 + 24))(&v48) & ((1 << *(_DWORD *)(v5 + 12)) - 1)));
      if ( v39 ) /*0x6b9fc4*/
      {
        while ( !(unsigned __int8)String::Compare(&v48) ) /*0x6b9fd4*/
        {
          v39 = *(_DWORD *)(v39 + 776); /*0x6b9fd6*/
          if ( !v39 ) /*0x6b9fde*/
            goto LABEL_31; /*0x6b9fde*/
        }
        v40 = (const void *)(v39 + 4); /*0x6b9fe6*/
        if ( v40 ) /*0x6b9feb*/
        {
          qmemcpy(v58, v40, sizeof(v58)); /*0x6b9ff9*/
          v38 = (void (__thiscall ***)(_DWORD, int))v58[0]; /*0x6b9ffb*/
        }
        v58[0] = 0; /*0x6ba011*/
        HashTable::RemoveHashTableEntry(&v48, v58); /*0x6ba01c*/
        if ( v38 ) /*0x6ba023*/
          (**v38)(v38, 1); /*0x6ba02b*/
      }
    }
LABEL_31:
    v41 = __2_YAPAXI_Z(0x30Cu); /*0x6ba02d*/
    v42 = v41; /*0x6ba037*/
    if ( v41 ) /*0x6ba03e*/
    {
      unknown_libname_73(v41); /*0x6ba042*/
      v42[1] = 0; /*0x6ba047*/
    }
    else
    {
      v42 = 0; /*0x6ba050*/
    }
    String::Reassign(&v48); /*0x6ba059*/
    qmemcpy(v42 + 1, v60, 0x304u); /*0x6ba06d*/
    v42[194] = 0; /*0x6ba075*/
    v43 = (*(int (__thiscall **)(void **))(v5 + 24))(&v48) & ((1 << *(_DWORD *)(v5 + 12)) - 1); /*0x6ba08b*/
    v44 = *(_DWORD *)(*(_DWORD *)v5 + 4 * v43); /*0x6ba08d*/
    *(_DWORD *)(*(_DWORD *)v5 + 4 * v43) = v42; /*0x6ba095*/
    if ( v44 ) /*0x6ba097*/
      v42[194] = v44; /*0x6ba099*/
    v45 = *(_DWORD *)(v5 + 8); /*0x6ba0a2*/
    v46 = *(_DWORD *)(v5 + 4) + 1; /*0x6ba0a5*/
    v49 = (unsigned int)v46; /*0x6ba0aa*/
    *(_DWORD *)(v5 + 4) = v46; /*0x6ba0ae*/
    v47 = (double)v49; /*0x6ba0b1*/
    v49 = (unsigned int)v45; /*0x6ba0b5*/
    if ( v47 / (double)v45 >= *(double *)(v5 + 40) ) /*0x6ba0c9*/
      Render_Load_6BAFA0(v5); /*0x6ba0cd*/
    DeleteAndZero(&v48); /*0x6ba0d6*/
    v55[0] = &vt_CCFileClass; /*0x6ba0e2*/
    v57 = 0; /*0x6ba0ea*/
    Vector::Clear((int)v56); /*0x6ba0f1*/
    v55[0] = &off_7E1668; /*0x6ba0fa*/
    BufferIOFileClass::Dtor(v55); /*0x6ba102*/
    return 1; /*0x6ba10a*/
  }
  else
  {
    v55[0] = &vt_CCFileClass; /*0x6b9d68*/
    v57 = 0; /*0x6b9d70*/
    Vector::Clear((int)v56); /*0x6b9d77*/
    v55[0] = &off_7E1668; /*0x6b9d80*/
    BufferIOFileClass::Dtor(v55); /*0x6b9d88*/
    return 0; /*0x6b9d90*/
  }
}
}
} // namespace gamemd

// 0x6BB390
namespace gamemd {
int sub_6BB390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6BB390()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v6[16]; // [esp+0h] [ebp-2F0h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-2E0h] BYREF
  ITypeLib *pptlib; // [esp+14h] [ebp-2DCh] BYREF
  CHAR MultiByteStr[40]; // [esp+18h] [ebp-2D8h] BYREF
  CHAR String1[48]; // [esp+40h] [ebp-2B0h] BYREF
  CHAR SubKey[260]; // [esp+70h] [ebp-280h] BYREF
  CHAR String[40]; // [esp+174h] [ebp-17Ch] BYREF
  OLECHAR sz[40]; // [esp+19Ch] [ebp-154h] BYREF
  CHAR Filename[260]; // [esp+1ECh] [ebp-104h] BYREF

  GetModuleFileNameA(g_hInstance, Filename, 0x104u); /*0x6bb3ae*/
  StringFromGUID2(&rguid, sz, 39); /*0x6bb3c9*/
  WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 39, 0, 0); /*0x6bb3ea*/
  StringFromGUID2(&stru_7E9510, sz, 39); /*0x6bb3fb*/
  WideCharToMultiByte(0, 0, sz, -1, String, 39, 0, 0); /*0x6bb419*/
  lstrcpyA(String1, MEMORY[0x840B70]); /*0x6bb42b*/
  lstrcatA(String1, MultiByteStr); /*0x6bb43d*/
  lstrcpyA(SubKey, (LPCSTR)MEMORY[0x840B5C]); /*0x6bb449*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb472*/
  {
    if ( MEMORY[0x840B4C] ) /*0x6bb486*/
    {
      v0 = lstrlenA((LPCSTR)MEMORY[0x840B4C]); /*0x6bb48d*/
      RegSetValueExA(phkResult, 0, 0, 1u, MEMORY[0x840B4C], v0 + 1); /*0x6bb4a5*/
    }
    RegCloseKey(phkResult); /*0x6bb4ac*/
  }
  lstrcpyA(SubKey, (LPCSTR)MEMORY[0x840B5C]); /*0x6bb4bc*/
  if ( MEMORY[0x840B44] ) /*0x6bb4c5*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb4d1*/
    lstrcatA(SubKey, MEMORY[0x840B44]); /*0x6bb4dd*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb500*/
  {
    if ( v6 != (_BYTE *)-24 ) /*0x6bb50c*/
    {
      v1 = lstrlenA(MultiByteStr); /*0x6bb513*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v1 + 1); /*0x6bb52b*/
    }
    RegCloseKey(phkResult); /*0x6bb532*/
  }
  lstrcpyA(SubKey, MEMORY[0x840B34]); /*0x6bb542*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb562*/
  {
    if ( MEMORY[0x840B4C] ) /*0x6bb570*/
    {
      v2 = lstrlenA((LPCSTR)MEMORY[0x840B4C]); /*0x6bb577*/
      RegSetValueExA(phkResult, 0, 0, 1u, MEMORY[0x840B4C], v2 + 1); /*0x6bb58f*/
    }
    RegCloseKey(phkResult); /*0x6bb596*/
  }
  lstrcpyA(SubKey, MEMORY[0x840B34]); /*0x6bb5a6*/
  if ( MEMORY[0x840B2C] ) /*0x6bb5b0*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb5bc*/
    lstrcatA(SubKey, MEMORY[0x840B2C]); /*0x6bb5c8*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb5eb*/
  {
    if ( MEMORY[0x840B5C] ) /*0x6bb5f9*/
    {
      v3 = lstrlenA((LPCSTR)MEMORY[0x840B5C]); /*0x6bb600*/
      RegSetValueExA(phkResult, 0, 0, 1u, MEMORY[0x840B5C], v3 + 1); /*0x6bb618*/
    }
    RegCloseKey(phkResult); /*0x6bb61f*/
  }
  lstrcpyA(SubKey, MEMORY[0x840B34]); /*0x6bb62f*/
  if ( MEMORY[0x840B44] ) /*0x6bb639*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb645*/
    lstrcatA(SubKey, MEMORY[0x840B44]); /*0x6bb651*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb674*/
  {
    if ( v6 != (_BYTE *)-24 ) /*0x6bb680*/
    {
      v4 = lstrlenA(MultiByteStr); /*0x6bb687*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v4 + 1); /*0x6bb69f*/
    }
    RegCloseKey(phkResult); /*0x6bb6a6*/
  }
  WriteRegistryKeyCOM(String1, 0, (LPCSTR)MEMORY[0x840B4C]); /*0x6bb6b7*/
  WriteRegistryKeyCOM(String1, MEMORY[0x840B24], (LPCSTR)MEMORY[0x840B5C]); /*0x6bb6ca*/
  WriteRegistryKeyCOM(String1, MEMORY[0x840B08], MEMORY[0x840B34]); /*0x6bb6dd*/
  WriteRegistryKeyCOM(String1, MEMORY[0x840AF8], 0); /*0x6bb6ed*/
  WriteRegistryKeyCOM(String1, MEMORY[0x840AE8], Filename); /*0x6bb703*/
  WriteRegistryKeyCOM(String1, MEMORY[0x840AE0], String); /*0x6bb719*/
  pptlib = 0; /*0x6bb722*/
  LoadTypeLib(&MEMORY[0x840AD0], &pptlib); /*0x6bb730*/
  if ( pptlib ) /*0x6bb740*/
    pptlib->lpVtbl->Release(pptlib); /*0x6bb745*/
  return 0; /*0x6bb73a*/
}
}
} // namespace gamemd

// 0x6BB9A0
namespace gamemd {
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
// {
//   HWND WindowA; // eax
//   HWND v6; // esi
//   int v7; // edi
//   char *v8; // eax
//   char *v9; // esi
//   int v10; // esi
//   _DWORD *v11; // eax
//   CCINIClass *v12; // eax
//   int Int_Overwrite; // eax
//   int v14; // eax
//   int v15; // esi
//   char *i; // eax
//   _DWORD *v17; // eax
//   _DWORD *v18; // eax
//   _DWORD *v19; // esi
//   wchar_t *StringCSF; // eax
//   wchar_t *v21; // eax
//   IID **v22; // esi
//   int v23; // eax
//   HMODULE LibraryA; // eax
//   HMODULE v25; // edi
//   void (*ProcAddress)(void); // eax
//   TClassFactory_VCStreamClass__ *v27; // eax
//   IUnknown *v28; // eax
//   TClassFactory_VWaveClass__ *v29; // eax
//   IUnknown *v30; // eax
//   TClassFactory_VTerrainTypeClass__ *v31; // eax
//   IUnknown *v32; // eax
//   TClassFactory_VTerrainClass__ *v33; // eax
//   IUnknown *v34; // eax
//   TClassFactory_VSuperWeaponTypeClass__ *v35; // eax
//   IUnknown *v36; // eax
//   TClassFactory_VSuperClass__ *v37; // eax
//   IUnknown *v38; ... [65684 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6BE1C0
namespace gamemd {
void WinMain_Setup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl WinMain_Setup()
{
  void *v0; // esi
  void *v1; // esi
  bool v2; // zf
  int v3; // eax
  int v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *v6; // esi
  void *v7; // esi
  int i; // esi
  void (__thiscall ***v9)(_DWORD, int); // ecx
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // eax
  void *v16; // esi
  void *v17; // esi
  _DWORD *v18; // esi
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  int j; // esi

  v0 = MEMORY[0xA8F794]; /*0x6be1c2*/
  MEMORY[0xA8E9A0] = 0; /*0x6be1cc*/
  if ( MEMORY[0xA8F794] ) /*0x6be1d2*/
  {
    FileTreeNode::Destroy(MEMORY[0xA8F794]); /*0x6be1d6*/
    __3_YAXPAX_Z(v0); /*0x6be1dc*/
    MEMORY[0xA8F794] = 0; /*0x6be1e4*/
  }
  if ( MEMORY[0xA8F798] ) /*0x6be1f2*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xA8F798])(MEMORY[0xA8F798], 1); /*0x6be1f8*/
    MEMORY[0xA8F798] = 0; /*0x6be1fa*/
  }
  if ( MEMORY[0xA8F790] ) /*0x6be207*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8F790]); /*0x6be20a*/
    MEMORY[0xA8F790] = 0; /*0x6be212*/
  }
  WinMain::Constructor_VectorClass_Wstring_(&MEMORY[0xA8B238]); /*0x6be21d*/
  while ( MEMORY[0xB054E0] ) /*0x6be228*/
  {
    v1 = *(void **)MEMORY[0xB054D4]; /*0x6be230*/
    if ( *(_DWORD *)MEMORY[0xB054D4] ) /*0x6be230*/
    {
      ColorScheme::Destructor(*(_DWORD *)MEMORY[0xB054D4]); /*0x6be238*/
      __3_YAXPAX_Z(v1); /*0x6be23e*/
    }
  }
  MEMORY[0xB054E0] = 0; /*0x6be253*/
  if ( MEMORY[0xB054D4] && MEMORY[0xB054DD] ) /*0x6be263*/
  {
    __3_YAXPAX_Z(MEMORY[0xB054D4]); /*0x6be266*/
    MEMORY[0xB054D4] = 0; /*0x6be26e*/
  }
  MEMORY[0xB054DD] = 0; /*0x6be274*/
  MEMORY[0xB054D8] = 0; /*0x6be27a*/
  Game::DestroyAllObjects(); /*0x6be280*/
  MixFileClass::DestroyCache(); /*0x6be285*/
  MixFileClass::CleanupCache(); /*0x6be28a*/
  WinMainSetup_Setup_5B4310(); /*0x6be28f*/
  if ( MEMORY[0xABF3A0] ) /*0x6be29a*/
  {
    do /*0x6be2de*/
    {
      free(*(void **)MEMORY[0xABF394]); /*0x6be2a5*/
      v2 = MEMORY[0xABF3A0] == 0; /*0x6be2b3*/
      if ( MEMORY[0xABF3A0] > 0 ) /*0x6be2b5*/
      {
        v3 = 0; /*0x6be2b8*/
        v2 = MEMORY[0xABF3A0]-- == 1; /*0x6be2ba*/
        if ( MEMORY[0xABF3A0] > 0 ) /*0x6be2c2*/
        {
          do /*0x6be2da*/
          {
            ++v3; /*0x6be2ca*/
            *((_DWORD *)MEMORY[0xABF394] + v3 - 1) = *((_DWORD *)MEMORY[0xABF394] + v3); /*0x6be2ce*/
          }
          while ( v3 < MEMORY[0xABF3A0] ); /*0x6be2da*/
          v2 = MEMORY[0xABF3A0] == 0; /*0x6be2dc*/
        }
      }
    }
    while ( !v2 ); /*0x6be2de*/
  }
  MEMORY[0xABF3A0] = 0; /*0x6be2e5*/
  if ( MEMORY[0xABF394] && MEMORY[0xABF39D] ) /*0x6be2f5*/
  {
    __3_YAXPAX_Z(MEMORY[0xABF394]); /*0x6be2f8*/
    MEMORY[0xABF394] = 0; /*0x6be300*/
  }
  v4 = 0; /*0x6be30b*/
  MEMORY[0xABF39D] = 0; /*0x6be30f*/
  for ( MEMORY[0xABF398] = 0; v4 < MEMORY[0x87F668]; ++v4 ) /*0x6be31b*/
  {
    v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0x87F65C] + v4); /*0x6be322*/
    if ( v5 ) /*0x6be327*/
      (**v5)(v5, 1); /*0x6be32d*/
  }
  MEMORY[0x87F668] = 0; /*0x6be33e*/
  if ( MEMORY[0x87F65C] && MEMORY[0x87F665] ) /*0x6be34e*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F65C]); /*0x6be351*/
    MEMORY[0x87F65C] = 0; /*0x6be359*/
  }
  MEMORY[0x87F665] = 0; /*0x6be365*/
  MEMORY[0x87F660] = 0; /*0x6be36d*/
  if ( MEMORY[0x887048] ) /*0x6be373*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887048])(MEMORY[0x887048], 1); /*0x6be379*/
    MEMORY[0x887048] = 0; /*0x6be37b*/
  }
  INIClass::ClearSection(0, 0); /*0x6be388*/
  INIClass::ClearSection(0, 0); /*0x6be394*/
  INIClass::ClearSection(0, 0); /*0x6be3a0*/
  INIClass::ClearSection(0, 0); /*0x6be3ac*/
  INIClass::ClearSection(0, 0); /*0x6be3b8*/
  INIClass::ClearSection(0, 0); /*0x6be3c4*/
  WinMainSetup_Setup_5FF800(); /*0x6be3c9*/
  WinMainSetup_Setup(); /*0x6be3ce*/
  if ( MEMORY[0x887640] ) /*0x6be3db*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887640])(MEMORY[0x887640], 1); /*0x6be3e1*/
    MEMORY[0x887640] = 0; /*0x6be3e3*/
  }
  MapClass::FreeAllCells(&MEMORY[0x87F7E8]); /*0x6be3ee*/
  TacticalClass::FreeResources(&MEMORY[0x87F7E8]); /*0x6be3f8*/
  WinMainSetup_Setup_6BB8E0(); /*0x6be3fd*/
  v6 = MEMORY[0x887644]; /*0x6be402*/
  if ( MEMORY[0x887644] ) /*0x6be40a*/
  {
    Stream::GetField(MEMORY[0x887644]); /*0x6be40e*/
    __3_YAXPAX_Z(v6); /*0x6be414*/
    MEMORY[0x887644] = 0; /*0x6be41c*/
  }
  v7 = MEMORY[0x87E8A4]; /*0x6be422*/
  if ( MEMORY[0x87E8A4] ) /*0x6be42a*/
  {
    StreamObj::Release(MEMORY[0x87E8A4]); /*0x6be42e*/
    __3_YAXPAX_Z(v7); /*0x6be434*/
    MEMORY[0x87E8A4] = 0; /*0x6be43c*/
  }
  if ( unk_89C4B8 ) /*0x6be44a*/
  {
    (**(void (__thiscall ***)(int, int))unk_89C4B8)(unk_89C4B8, 1); /*0x6be450*/
    unk_89C4B8 = 0; /*0x6be452*/
  }
  if ( MEMORY[0x87F6B8] ) /*0x6be460*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6B8])(MEMORY[0x87F6B8], 1); /*0x6be466*/
    MEMORY[0x87F6B8] = 0; /*0x6be468*/
  }
  if ( MEMORY[0x87F6C0] ) /*0x6be476*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6C0])(MEMORY[0x87F6C0], 1); /*0x6be47c*/
    MEMORY[0x87F6C0] = 0; /*0x6be47e*/
  }
  if ( MEMORY[0x87F6C4] ) /*0x6be48c*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6C4])(MEMORY[0x87F6C4], 1); /*0x6be492*/
    MEMORY[0x87F6C4] = 0; /*0x6be494*/
  }
  if ( MEMORY[0x87F6B4] ) /*0x6be4a2*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6B4])(MEMORY[0x87F6B4], 1); /*0x6be4a8*/
    MEMORY[0x87F6B4] = 0; /*0x6be4aa*/
  }
  if ( MEMORY[0x87F6C8] ) /*0x6be4b8*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6C8])(MEMORY[0x87F6C8], 1); /*0x6be4be*/
    MEMORY[0x87F6C8] = 0; /*0x6be4c0*/
  }
  if ( MEMORY[0x87F6CC] ) /*0x6be4ce*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6CC])(MEMORY[0x87F6CC], 1); /*0x6be4d4*/
    MEMORY[0x87F6CC] = 0; /*0x6be4d6*/
  }
  if ( MEMORY[0x87F6D0] ) /*0x6be4e4*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6D0])(MEMORY[0x87F6D0], 1); /*0x6be4ea*/
    MEMORY[0x87F6D0] = 0; /*0x6be4ec*/
  }
  if ( MEMORY[0x87F6B0] ) /*0x6be4fa*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6B0])(MEMORY[0x87F6B0], 1); /*0x6be500*/
    MEMORY[0x87F6B0] = 0; /*0x6be502*/
  }
  if ( unk_B1D140 ) /*0x6be510*/
  {
    (**(void (__thiscall ***)(int, int))unk_B1D140)(unk_B1D140, 1); /*0x6be516*/
    unk_B1D140 = 0; /*0x6be518*/
  }
  if ( dword_B1D13C ) /*0x6be526*/
  {
    (**(void (__thiscall ***)(int, int))dword_B1D13C)(dword_B1D13C, 1); /*0x6be52c*/
    dword_B1D13C = 0; /*0x6be52e*/
  }
  if ( dword_89DDC0 ) /*0x6be53c*/
  {
    (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x6be542*/
    dword_89DDC0 = 0; /*0x6be544*/
  }
  if ( unk_89DDBC ) /*0x6be551*/
  {
    __3_YAXPAX_Z(unk_89DDBC); /*0x6be554*/
    unk_89DDBC = 0; /*0x6be55c*/
  }
  CleanupMapSystems(&MEMORY[0x87F7E8]); /*0x6be567*/
  for ( i = 0; i < MEMORY[0x87F6A8]; ++i ) /*0x6be575*/
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0x87F69C] + i); /*0x6be57c*/
    if ( v9 ) /*0x6be581*/
      (**v9)(v9, 1); /*0x6be587*/
  }
  MEMORY[0x87F6A8] = 0; /*0x6be598*/
  if ( MEMORY[0x87F69C] && MEMORY[0x87F6A5] ) /*0x6be5a8*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F69C]); /*0x6be5ab*/
    MEMORY[0x87F69C] = 0; /*0x6be5b3*/
  }
  MEMORY[0x87F6A5] = 0; /*0x6be5bf*/
  MEMORY[0x87F6A0] = 0; /*0x6be5c7*/
  if ( MEMORY[0x884E08] ) /*0x6be5cd*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E08])(MEMORY[0x884E08], 1); /*0x6be5d3*/
    MEMORY[0x884E08] = 0; /*0x6be5d5*/
  }
  if ( MEMORY[0x884E0C] ) /*0x6be5e3*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E0C])(MEMORY[0x884E0C], 1); /*0x6be5e9*/
    MEMORY[0x884E0C] = 0; /*0x6be5eb*/
  }
  if ( MEMORY[0x884E10] ) /*0x6be5f9*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E10])(MEMORY[0x884E10], 1); /*0x6be5ff*/
    MEMORY[0x884E10] = 0; /*0x6be601*/
  }
  if ( MEMORY[0x884E14] ) /*0x6be60f*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E14])(MEMORY[0x884E14], 1); /*0x6be615*/
    MEMORY[0x884E14] = 0; /*0x6be617*/
  }
  if ( MEMORY[0x884E18] ) /*0x6be625*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E18])(MEMORY[0x884E18], 1); /*0x6be62b*/
    MEMORY[0x884E18] = 0; /*0x6be62d*/
  }
  if ( MEMORY[0x884E1C] ) /*0x6be63b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E1C])(MEMORY[0x884E1C], 1); /*0x6be641*/
    MEMORY[0x884E1C] = 0; /*0x6be643*/
  }
  if ( MEMORY[0x884E20] ) /*0x6be651*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E20])(MEMORY[0x884E20], 1); /*0x6be657*/
    MEMORY[0x884E20] = 0; /*0x6be659*/
  }
  if ( MEMORY[0x884E24] ) /*0x6be667*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E24])(MEMORY[0x884E24], 1); /*0x6be66d*/
    MEMORY[0x884E24] = 0; /*0x6be66f*/
  }
  if ( MEMORY[0x884E28] ) /*0x6be67d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E28])(MEMORY[0x884E28], 1); /*0x6be683*/
    MEMORY[0x884E28] = 0; /*0x6be685*/
  }
  if ( lpBuffer ) /*0x6be692*/
  {
    __3_YAXPAX_Z(lpBuffer); /*0x6be695*/
    lpBuffer = 0; /*0x6be69d*/
  }
  if ( unk_AA1060 ) /*0x6be6aa*/
  {
    __3_YAXPAX_Z(unk_AA1060); /*0x6be6ad*/
    unk_AA1060 = 0; /*0x6be6b5*/
  }
  if ( unk_AA1064 ) /*0x6be6c2*/
  {
    __3_YAXPAX_Z(unk_AA1064); /*0x6be6c5*/
    unk_AA1064 = 0; /*0x6be6cd*/
  }
  if ( unk_AA1068 ) /*0x6be6da*/
  {
    __3_YAXPAX_Z(unk_AA1068); /*0x6be6dd*/
    unk_AA1068 = 0; /*0x6be6e5*/
  }
  if ( unk_AA106C ) /*0x6be6f2*/
  {
    __3_YAXPAX_Z(unk_AA106C); /*0x6be6f5*/
    unk_AA106C = 0; /*0x6be6fd*/
  }
  if ( MEMORY[0x887320] ) /*0x6be70b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887320])(MEMORY[0x887320], 1); /*0x6be711*/
    MEMORY[0x887320] = 0; /*0x6be713*/
  }
  if ( MEMORY[0x884E2C] ) /*0x6be721*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E2C])(MEMORY[0x884E2C], 1); /*0x6be727*/
    MEMORY[0x884E2C] = 0; /*0x6be729*/
  }
  if ( MEMORY[0x884E30] ) /*0x6be737*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E30])(MEMORY[0x884E30], 1); /*0x6be73d*/
    MEMORY[0x884E30] = 0; /*0x6be73f*/
  }
  if ( MEMORY[0x884E34] ) /*0x6be74d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E34])(MEMORY[0x884E34], 1); /*0x6be753*/
    MEMORY[0x884E34] = 0; /*0x6be755*/
  }
  if ( MEMORY[0x884E3C] ) /*0x6be763*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E3C])(MEMORY[0x884E3C], 1); /*0x6be769*/
    MEMORY[0x884E3C] = 0; /*0x6be76b*/
  }
  if ( MEMORY[0x884E38] ) /*0x6be779*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E38])(MEMORY[0x884E38], 1); /*0x6be77f*/
    MEMORY[0x884E38] = 0; /*0x6be781*/
  }
  if ( MEMORY[0x884E44] ) /*0x6be78f*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E44])(MEMORY[0x884E44], 1); /*0x6be795*/
    MEMORY[0x884E44] = 0; /*0x6be797*/
  }
  if ( MEMORY[0x884E40] ) /*0x6be7a5*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E40])(MEMORY[0x884E40], 1); /*0x6be7ab*/
    MEMORY[0x884E40] = 0; /*0x6be7ad*/
  }
  v10 = MEMORY[0x884DA0]; /*0x6be7b3*/
  if ( MEMORY[0x884DA0] > 0 ) /*0x6be7bb*/
  {
    v11 = MEMORY[0x884D94]; /*0x6be7bd*/
    do /*0x6be806*/
    {
      if ( *v11 ) /*0x6be7c3*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v11)(*v11, 1); /*0x6be7cd*/
        v11 = MEMORY[0x884D94]; /*0x6be7cf*/
        v10 = MEMORY[0x884DA0]; /*0x6be7d5*/
      }
      if ( v10 <= 0 ) /*0x6be7dd*/
        break; /*0x6be7dd*/
      v12 = 0; /*0x6be7e0*/
      MEMORY[0x884DA0] = v10 - 1; /*0x6be7e4*/
      if ( v10 - 1 <= 0 ) /*0x6be7ea*/
        break; /*0x6be7ea*/
      do /*0x6be802*/
      {
        v11[v12] = v11[v12 + 1]; /*0x6be7f0*/
        v10 = MEMORY[0x884DA0]; /*0x6be7f3*/
        v11 = MEMORY[0x884D94]; /*0x6be7f9*/
        ++v12; /*0x6be7ff*/
      }
      while ( v12 < MEMORY[0x884DA0] ); /*0x6be802*/
    }
    while ( MEMORY[0x884DA0] > 0 ); /*0x6be806*/
  }
  if ( MEMORY[0x884E4C] ) /*0x6be810*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E4C])(MEMORY[0x884E4C], 1); /*0x6be816*/
    MEMORY[0x884E4C] = 0; /*0x6be818*/
  }
  if ( MEMORY[0x884E48] ) /*0x6be826*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E48])(MEMORY[0x884E48], 1); /*0x6be82c*/
    MEMORY[0x884E48] = 0; /*0x6be82e*/
  }
  if ( MEMORY[0x884E54] ) /*0x6be83c*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E54])(MEMORY[0x884E54], 1); /*0x6be842*/
    MEMORY[0x884E54] = 0; /*0x6be844*/
  }
  if ( MEMORY[0x884E50] ) /*0x6be852*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E50])(MEMORY[0x884E50], 1); /*0x6be858*/
    MEMORY[0x884E50] = 0; /*0x6be85a*/
  }
  if ( MEMORY[0x884E5C] ) /*0x6be868*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E5C])(MEMORY[0x884E5C], 1); /*0x6be86e*/
    MEMORY[0x884E5C] = 0; /*0x6be870*/
  }
  if ( MEMORY[0x884E58] ) /*0x6be87e*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E58])(MEMORY[0x884E58], 1); /*0x6be884*/
    MEMORY[0x884E58] = 0; /*0x6be886*/
  }
  if ( MEMORY[0x884E68] ) /*0x6be894*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E68])(MEMORY[0x884E68], 1); /*0x6be89a*/
    MEMORY[0x884E68] = 0; /*0x6be89c*/
  }
  if ( MEMORY[0x884E6C] ) /*0x6be8aa*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E6C])(MEMORY[0x884E6C], 1); /*0x6be8b0*/
    MEMORY[0x884E6C] = 0; /*0x6be8b2*/
  }
  v13 = MEMORY[0x884DD0]; /*0x6be8b8*/
  if ( MEMORY[0x884DD0] > 0 ) /*0x6be8c0*/
  {
    v14 = MEMORY[0x884DC4]; /*0x6be8c2*/
    do /*0x6be90b*/
    {
      if ( *v14 ) /*0x6be8c8*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v14)(*v14, 1); /*0x6be8d2*/
        v14 = MEMORY[0x884DC4]; /*0x6be8d4*/
        v13 = MEMORY[0x884DD0]; /*0x6be8da*/
      }
      if ( v13 <= 0 ) /*0x6be8e2*/
        break; /*0x6be8e2*/
      v15 = 0; /*0x6be8e5*/
      MEMORY[0x884DD0] = v13 - 1; /*0x6be8e9*/
      if ( v13 - 1 <= 0 ) /*0x6be8ef*/
        break; /*0x6be8ef*/
      do /*0x6be907*/
      {
        v14[v15] = v14[v15 + 1]; /*0x6be8f5*/
        v13 = MEMORY[0x884DD0]; /*0x6be8f8*/
        v14 = MEMORY[0x884DC4]; /*0x6be8fe*/
        ++v15; /*0x6be904*/
      }
      while ( v15 < MEMORY[0x884DD0] ); /*0x6be907*/
    }
    while ( MEMORY[0x884DD0] > 0 ); /*0x6be90b*/
  }
  if ( MEMORY[0x884E64] ) /*0x6be915*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E64])(MEMORY[0x884E64], 1); /*0x6be91b*/
    MEMORY[0x884E64] = 0; /*0x6be91d*/
  }
  if ( MEMORY[0x884E60] ) /*0x6be92b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E60])(MEMORY[0x884E60], 1); /*0x6be931*/
    MEMORY[0x884E60] = 0; /*0x6be933*/
  }
  if ( MEMORY[0x884DDC] ) /*0x6be941*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DDC])(MEMORY[0x884DDC], 1); /*0x6be947*/
    MEMORY[0x884DDC] = 0; /*0x6be949*/
  }
  if ( MEMORY[0x884DD8] ) /*0x6be957*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DD8])(MEMORY[0x884DD8], 1); /*0x6be95d*/
    MEMORY[0x884DD8] = 0; /*0x6be95f*/
  }
  if ( MEMORY[0x884E74] ) /*0x6be96d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E74])(MEMORY[0x884E74], 1); /*0x6be973*/
    MEMORY[0x884E74] = 0; /*0x6be975*/
  }
  if ( MEMORY[0x884E70] ) /*0x6be983*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E70])(MEMORY[0x884E70], 1); /*0x6be989*/
    MEMORY[0x884E70] = 0; /*0x6be98b*/
  }
  if ( MEMORY[0x884E78] ) /*0x6be999*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E78])(MEMORY[0x884E78], 1); /*0x6be99f*/
    MEMORY[0x884E78] = 0; /*0x6be9a1*/
  }
  if ( MEMORY[0x884DFC] ) /*0x6be9af*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DFC])(MEMORY[0x884DFC], 1); /*0x6be9b5*/
    MEMORY[0x884DFC] = 0; /*0x6be9b7*/
  }
  if ( MEMORY[0x884DF8] ) /*0x6be9c5*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DF8])(MEMORY[0x884DF8], 1); /*0x6be9cb*/
    MEMORY[0x884DF8] = 0; /*0x6be9cd*/
  }
  if ( MEMORY[0x884E00] ) /*0x6be9db*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E00])(MEMORY[0x884E00], 1); /*0x6be9e1*/
    MEMORY[0x884E00] = 0; /*0x6be9e3*/
  }
  if ( MEMORY[0x884E04] ) /*0x6be9f1*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E04])(MEMORY[0x884E04], 1); /*0x6be9f7*/
    MEMORY[0x884E04] = 0; /*0x6be9f9*/
  }
  if ( MEMORY[0x887324] ) /*0x6bea07*/
  {
    ((void (__thiscall *)(LPPERSISTSTREAM, int))MEMORY[0x887324]->__tail_0[1].QueryInterface)(MEMORY[0x887324], 1); /*0x6bea0d*/
    MEMORY[0x887324] = 0; /*0x6bea10*/
  }
  WinMainSetup_Setup_65FD50(); /*0x6bea16*/
  TacticalClass::CleanupResources(&MEMORY[0x87F7E8]); /*0x6bea20*/
  WinMainSetup_Setup_626FF0(); /*0x6bea25*/
  _ioterm(); /*0x6bea2a*/
  ObjectTypeClass::UnloadPipsSHP(); /*0x6bea2f*/
  nullsub_31(); /*0x6bea34*/
  j_PlanningNodeClass_CleanupAll(); /*0x6bea39*/
  WinMainSetup_Setup_72AC40(); /*0x6bea3e*/
  WinMainSetup_Setup_730970(); /*0x6bea43*/
  LoadProgressMgr::Destroy(); /*0x6bea48*/
  WinMainSetup_Setup_5BE940(); /*0x6bea4d*/
  WinMainSetup_Setup_5DB6F0(); /*0x6bea52*/
  Audio::LoadSoundINI(); /*0x6bea57*/
  LoadINIEVA(); /*0x6bea5c*/
  sub_47ADC0(); /*0x6bea61*/
  if ( MEMORY[0x87F770] ) /*0x6bea6d*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F770]); /*0x6bea70*/
    MEMORY[0x87F770] = 0; /*0x6bea78*/
  }
  Network::ShutdownInterface(); /*0x6bea7e*/
  v16 = MEMORY[0xA83DB8]; /*0x6bea83*/
  if ( MEMORY[0xA83DB8] ) /*0x6bea8b*/
  {
    Vector::Clear(MEMORY[0xA83DB8]); /*0x6bea8f*/
    __3_YAXPAX_Z(v16); /*0x6bea95*/
    MEMORY[0xA83DB8] = 0; /*0x6bea9d*/
  }
  v17 = MEMORY[0x8871E0]; /*0x6beaa3*/
  if ( MEMORY[0x8871E0] ) /*0x6beaab*/
  {
    RulesClass::DTOR(MEMORY[0x8871E0]); /*0x6beaaf*/
    __3_YAXPAX_Z(v17); /*0x6beab5*/
    MEMORY[0x8871E0] = 0; /*0x6beabd*/
  }
  v18 = MEMORY[0xA8B230]; /*0x6beac3*/
  if ( MEMORY[0xA8B230] ) /*0x6beacc*/
  {
    v19 = (void *)*((_DWORD *)MEMORY[0xA8B230] + 3396); /*0x6bead2*/
    *((_DWORD *)MEMORY[0xA8B230] + 3395) = &vt_VectorClass_int; /*0x6beadf*/
    if ( v19 && *((_BYTE *)v18 + 13593) ) /*0x6beae7*/
    {
      __3_YAXPAX_Z(v19); /*0x6beaf0*/
      v18[3396] = 0; /*0x6beaf8*/
    }
    *((_BYTE *)v18 + 13593) = 0; /*0x6beafe*/
    v18[3397] = 0; /*0x6beb04*/
    v20 = (void *)v18[3389]; /*0x6beb0a*/
    v18[3388] = &vt_VectorClass_int; /*0x6beb10*/
    if ( v20 && *((_BYTE *)v18 + 13565) ) /*0x6beb1a*/
    {
      __3_YAXPAX_Z(v20); /*0x6beb23*/
      v18[3389] = 0; /*0x6beb2b*/
    }
    *((_BYTE *)v18 + 13565) = 0; /*0x6beb31*/
    v18[3390] = 0; /*0x6beb37*/
    v21 = (void *)v18[3382]; /*0x6beb3d*/
    v18[3381] = &vt_VectorClass_TechnoTypeClass; /*0x6beb43*/
    if ( v21 && *((_BYTE *)v18 + 13537) ) /*0x6beb51*/
    {
      __3_YAXPAX_Z(v21); /*0x6beb5a*/
      v18[3382] = 0; /*0x6beb62*/
    }
    *((_BYTE *)v18 + 13537) = 0; /*0x6beb69*/
    v18[3383] = 0; /*0x6beb6f*/
    __3_YAXPAX_Z(v18); /*0x6beb75*/
    MEMORY[0xA8B230] = 0; /*0x6beb7d*/
  }
  for ( j = 0; j < MEMORY[0xB0BC98]; ++j ) /*0x6beb8c*/
    CoRevokeClassObject(*((_DWORD *)MEMORY[0xB0BC8C] + j)); /*0x6beb9e*/
  MEMORY[0xB0BC98] = 0; /*0x6bebaf*/
  if ( MEMORY[0xB0BC8C] && MEMORY[0xB0BC95] ) /*0x6bebc0*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0BC8C]); /*0x6bebc3*/
    MEMORY[0xB0BC8C] = 0; /*0x6bebcb*/
  }
  MEMORY[0xB0BC95] = 0; /*0x6bebd8*/
  MEMORY[0xB0BC90] = 0; /*0x6bebde*/
  RevokeActiveObject(MEMORY[0xB0BCEC], 0); /*0x6bebe4*/
  if ( MEMORY[0x89F974] ) /*0x6bebf1*/
    FreeLibrary(MEMORY[0x89F974]); /*0x6bebf4*/
  if ( MEMORY[0xB0BCE8] ) /*0x6bec07*/
  {
    CloseHandle(MEMORY[0xB0BCE8]); /*0x6bec0a*/
    MEMORY[0xB0BCE8] = 0; /*0x6bec0c*/
  }
  if ( MEMORY[0xB0BCE4] ) /*0x6bec19*/
  {
    CloseHandle(MEMORY[0xB0BCE4]); /*0x6bec1c*/
    MEMORY[0xB0BCE4] = 0; /*0x6bec1e*/
  }
  Audio_Init(); /*0x6bec24*/
  ThemeManager::Cleanup(&g_BuildingTypeClass_Count); /*0x6bec2e*/
  Audio::Shutdown(); /*0x6bec33*/
  WinMain::ShutdownCleanup(); /*0x6bec38*/
  WinMain::CleanupResource(); /*0x6bec3d*/
  if ( dword_B7816C ) /*0x7b86be*/
  {
    dword_B78138 = 1; /*0x7b86c0*/
    while ( !dword_B78140 ) /*0x7b86d1*/
      Sleep(0); /*0x7b86dc*/
    WaitForSingleObject(dword_B78154, 0x1388u); /*0x7b86f3*/
    CloseHandle(dword_B78154); /*0x7b8700*/
    dword_B7816C = 0; /*0x7b8702*/
  }
  if ( hMutex ) /*0x7b8713*/
  {
    CloseHandle(hMutex); /*0x7b8716*/
    hMutex = 0; /*0x7b8718*/
  }
}
}
} // namespace gamemd

// 0x6B0A90
namespace gamemd {
unsigned int * E4Recv_6B0A90::sub_6B0A90(int a2)
{
{
    int *v2;
    int v3;
    int *result;
    int v5;
    v2 = *(int **)(this->M60 + 4 * a2);
    if ( *v2 )
    *(int *)(*v2 + 732) = 0;
    *v2 = 0;
    v2[1] = 6;
    v3 = this->M48;
    result = v2 + 2;
    *result = g_CurrentFrame;
    result[1] = v5;
    result[2] = v3;
    return result;
}
}
} // namespace gamemd

// 0x6B1B00
namespace gamemd {
int sub_6B1B00()
{
{
    DataGlobal_B0B638 = 0;
    DataGlobal_B0B63C = 0;
    DataGlobal_B0B640 = 0;
    DataGlobal_B0B644 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B1EE0
namespace gamemd {
long long E4Recv_6B1EE0::sub_6B1EE0()
{
{
    int v2;
    double v3;
    int v4;
    __int64 result;
    if ( (unsigned char)this->M46 )
    v2 = this->M20;
    else
    v2 = this->M24;
    v3 = (double)this->M48;
    v4 = Math::RoundToInt(v3);
    if ( v4 <= 4 )
    v4 = 4;
    this->M76 = v4;
    result = Math::RoundToInt(v3);
    if ( (int)result >= v2 - v4 )
    this->M80 = v2 - v4;
    else
    this->M80 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B21A0
namespace gamemd {
void sub_6B21A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B680 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6B21D0
namespace gamemd {
void sub_6B21D0()
{
{
    DataGlobal_B0B6D0 = DataGlobal_B0B680 / 60.0;
}
}
} // namespace gamemd

// 0x6B21F0
namespace gamemd {
void sub_6B21F0()
{
{
    DataGlobal_B0B6B8 = 1.0 / DataGlobal_B0B6D0;
}
}
} // namespace gamemd

// 0x6B2210
namespace gamemd {
void sub_6B2210()
{
{
    DataGlobal_B0B6B0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6B2230
namespace gamemd {
void sub_6B2230()
{
{
    DataGlobal_B0B688 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6B2250
namespace gamemd {
void sub_6B2250()
{
{
    DataGlobal_B0B648 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6B2270
namespace gamemd {
long long sub_6B2270()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B648 - DataGlobal_B0B688);
    result = Math::RoundToInt(v0 * DataGlobal_B0B680 * 0.5);
    DataGlobal_B0B6D8 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B22B0
namespace gamemd {
void sub_6B22B0()
{
{
    DataGlobal_B0B690 = Math::ArcTan((double)DataGlobal_B0B6D8 * 0.00390625);
}
}
} // namespace gamemd

// 0x6B22E0
namespace gamemd {
void sub_6B22E0()
{
{
    DataGlobal_B0B6A8 = Math::ArcTan((double)(2 * DataGlobal_B0B6D8) / DataGlobal_B0B680);
}
}
} // namespace gamemd

// 0x6B2310
namespace gamemd {
long long sub_6B2310()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B6D8) + 0.5);
    DataGlobal_B0B6CC = result;
    return result;
}
}
} // namespace gamemd

// 0x6B2340
namespace gamemd {
int sub_6B2340()
{
{
    DataGlobal_B0B678 = 0;
    DataGlobal_B0B67A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B2350
namespace gamemd {
int sub_6B2350()
{
{
    DataGlobal_B0B698 = 0;
    DataGlobal_B0B69C = 0;
    DataGlobal_B0B6A0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B2370
namespace gamemd {
int sub_6B2370()
{
{
    DataGlobal_B0B6C8 = 0;
    DataGlobal_B0B6C0 = 128;
    DataGlobal_B0B6C4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6B2390
namespace gamemd {
int sub_6B2390()
{
{
    DataGlobal_B0B668 = 0;
    DataGlobal_B0B66C = 0;
    DataGlobal_B0B670 = 0;
    DataGlobal_B0B674 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B23B0
namespace gamemd {
int sub_6B23B0()
{
{
    DataGlobal_B0B654 = 0;
    DataGlobal_B0B658 = 0;
    DataGlobal_B0B65C = 1;
    DataGlobal_B0B65D = 0;
    DataGlobal_B0B650 = (int)&vt_DynamicVectorClass_UndoInfoStruct;
    DataGlobal_B0B664 = 10;
    g_SlaveMgrPool = 0;
    return atexit(sub_6B23F0);
}
}
} // namespace gamemd

// 0x6B23F0
namespace gamemd {
void sub_6B23F0()
{
{
    DataGlobal_B0B650 = (int)&vt_VectorClass_UndoInfoStruct;
    if ( DataGlobal_B0B654 && DataGlobal_B0B65D )
  {
    __3_YAXPAX_Z(DataGlobal_B0B654);
    DataGlobal_B0B654 = 0;
  }
    DataGlobal_B0B65D = 0;
    DataGlobal_B0B658 = 0;
}
}
} // namespace gamemd

// 0x6B4840
namespace gamemd {
void sub_6B4840()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B710 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6B4870
namespace gamemd {
void sub_6B4870()
{
{
    DataGlobal_B0B760 = DataGlobal_B0B710 / 60.0;
}
}
} // namespace gamemd

// 0x6B4890
namespace gamemd {
void sub_6B4890()
{
{
    DataGlobal_B0B748 = 1.0 / DataGlobal_B0B760;
}
}
} // namespace gamemd

// 0x6B48B0
namespace gamemd {
void sub_6B48B0()
{
{
    DataGlobal_B0B740 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6B48D0
namespace gamemd {
void sub_6B48D0()
{
{
    DataGlobal_B0B718 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6B48F0
namespace gamemd {
void sub_6B48F0()
{
{
    DataGlobal_B0B6F0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6B4910
namespace gamemd {
long long sub_6B4910()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B6F0 - DataGlobal_B0B718);
    result = Math::RoundToInt(v0 * DataGlobal_B0B710 * 0.5);
    DataGlobal_B0B768 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B4950
namespace gamemd {
void sub_6B4950()
{
{
    DataGlobal_B0B720 = Math::ArcTan((double)DataGlobal_B0B768 * 0.00390625);
}
}
} // namespace gamemd

// 0x6B4980
namespace gamemd {
void sub_6B4980()
{
{
    DataGlobal_B0B738 = Math::ArcTan((double)(2 * DataGlobal_B0B768) / DataGlobal_B0B710);
}
}
} // namespace gamemd

// 0x6B49B0
namespace gamemd {
long long sub_6B49B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B768) + 0.5);
    DataGlobal_B0B75C = result;
    return result;
}
}
} // namespace gamemd

// 0x6B49E0
namespace gamemd {
int sub_6B49E0()
{
{
    DataGlobal_B0B708 = 0;
    DataGlobal_B0B70A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B49F0
namespace gamemd {
int sub_6B49F0()
{
{
    DataGlobal_B0B728 = 0;
    DataGlobal_B0B72C = 0;
    DataGlobal_B0B730 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B4A10
namespace gamemd {
int sub_6B4A10()
{
{
    DataGlobal_B0B758 = 0;
    DataGlobal_B0B750 = 128;
    DataGlobal_B0B754 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6B4A30
namespace gamemd {
int sub_6B4A30()
{
{
    DataGlobal_B0B6F8 = 0;
    DataGlobal_B0B6FC = 0;
    DataGlobal_B0B700 = 0;
    DataGlobal_B0B704 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B4C70
namespace gamemd {
void nullsub_232(int a1)
{
  ;
}
} // namespace gamemd

// 0x6B4F90
namespace gamemd {
void nullsub_233(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6B5050
namespace gamemd {
int sub_6B5050()
{
{
    DataGlobal_B0B778 = 0;
    DataGlobal_B0B77C = 0;
    DataGlobal_B0B780 = 0;
    DataGlobal_B0B784 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B5070
namespace gamemd {
void sub_6B5070()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B790 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6B50A0
namespace gamemd {
void sub_6B50A0()
{
{
    DataGlobal_B0B7E0 = DataGlobal_B0B790 / 60.0;
}
}
} // namespace gamemd

// 0x6B50C0
namespace gamemd {
void sub_6B50C0()
{
{
    DataGlobal_B0B7C8 = 1.0 / DataGlobal_B0B7E0;
}
}
} // namespace gamemd

// 0x6B50E0
namespace gamemd {
void sub_6B50E0()
{
{
    DataGlobal_B0B7C0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6B5100
namespace gamemd {
void sub_6B5100()
{
{
    DataGlobal_B0B798 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6B5120
namespace gamemd {
void sub_6B5120()
{
{
    DataGlobal_B0B770 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6B5140
namespace gamemd {
long long sub_6B5140()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B770 - DataGlobal_B0B798);
    result = Math::RoundToInt(v0 * DataGlobal_B0B790 * 0.5);
    DataGlobal_B0B7E8 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B5180
namespace gamemd {
void sub_6B5180()
{
{
    DataGlobal_B0B7A0 = Math::ArcTan((double)DataGlobal_B0B7E8 * 0.00390625);
}
}
} // namespace gamemd

// 0x6B51B0
namespace gamemd {
void sub_6B51B0()
{
{
    DataGlobal_B0B7B8 = Math::ArcTan((double)(2 * DataGlobal_B0B7E8) / DataGlobal_B0B790);
}
}
} // namespace gamemd

// 0x6B51E0
namespace gamemd {
long long sub_6B51E0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B7E8) + 0.5);
    DataGlobal_B0B7DC = result;
    return result;
}
}
} // namespace gamemd

// 0x6B5210
namespace gamemd {
int sub_6B5210()
{
{
    Map_BottomRightCell = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B5220
namespace gamemd {
int sub_6B5220()
{
{
    DataGlobal_B0B7A8 = 0;
    DataGlobal_B0B7AC = 0;
    DataGlobal_B0B7B0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B6210
namespace gamemd {
int sub_6B6210()
{
{
    DataGlobal_B0B7F0 = 0;
    DataGlobal_B0B7F4 = 0;
    DataGlobal_B0B7F8 = 0;
    DataGlobal_B0B7FC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B6A00
namespace gamemd {
void sub_6B6A00()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B828 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6B6A30
namespace gamemd {
void sub_6B6A30()
{
{
    DataGlobal_B0B878 = DataGlobal_B0B828 / 60.0;
}
}
} // namespace gamemd

// 0x6B6A50
namespace gamemd {
void sub_6B6A50()
{
{
    DataGlobal_B0B860 = 1.0 / DataGlobal_B0B878;
}
}
} // namespace gamemd

// 0x6B6A70
namespace gamemd {
void sub_6B6A70()
{
{
    DataGlobal_B0B858 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6B6A90
namespace gamemd {
void sub_6B6A90()
{
{
    DataGlobal_B0B830 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6B6AB0
namespace gamemd {
void sub_6B6AB0()
{
{
    DataGlobal_B0B808 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6B6AD0
namespace gamemd {
long long sub_6B6AD0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B808 - DataGlobal_B0B830);
    result = Math::RoundToInt(v0 * DataGlobal_B0B828 * 0.5);
    DataGlobal_B0B898 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B6B10
namespace gamemd {
void sub_6B6B10()
{
{
    DataGlobal_B0B838 = Math::ArcTan((double)DataGlobal_B0B898 * 0.00390625);
}
}
} // namespace gamemd

// 0x6B6B40
namespace gamemd {
void sub_6B6B40()
{
{
    DataGlobal_B0B850 = Math::ArcTan((double)(2 * DataGlobal_B0B898) / DataGlobal_B0B828);
}
}
} // namespace gamemd

// 0x6B6B70
namespace gamemd {
long long sub_6B6B70()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B898) + 0.5);
    DataGlobal_B0B874 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B6BA0
namespace gamemd {
int sub_6B6BA0()
{
{
    DataGlobal_B0B820 = 0;
    DataGlobal_B0B822 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B6BB0
namespace gamemd {
int sub_6B6BB0()
{
{
    DataGlobal_B0B840 = 0;
    DataGlobal_B0B844 = 0;
    DataGlobal_B0B848 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B6BD0
namespace gamemd {
int sub_6B6BD0()
{
{
    DataGlobal_B0B870 = 0;
    DataGlobal_B0B868 = 128;
    DataGlobal_B0B86C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6B6BF0
namespace gamemd {
int sub_6B6BF0()
{
{
    DataGlobal_B0B810 = 0;
    DataGlobal_B0B814 = 0;
    DataGlobal_B0B818 = 0;
    DataGlobal_B0B81C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B6C10
namespace gamemd {
int sub_6B6C10()
{
{
    DataGlobal_B0B884 = 0;
    DataGlobal_B0B888 = 0;
    DataGlobal_B0B88C = 1;
    DataGlobal_B0B88D = 0;
    SpawnManagerClass_Array = (int)&vt_DynamicVectorClass_SpawnManagerClass;
    DataGlobal_B0B894 = 10;
    DataGlobal_B0B890 = 0;
    return atexit(sub_6B6C50);
}
}
} // namespace gamemd

// 0x6B6C50
namespace gamemd {
void sub_6B6C50()
{
{
    SpawnManagerClass_Array = (int)&vt_VectorClass_SpawnManagerClass;
    if ( DataGlobal_B0B884 && DataGlobal_B0B88D )
  {
    __3_YAXPAX_Z(DataGlobal_B0B884);
    DataGlobal_B0B884 = 0;
  }
    DataGlobal_B0B88D = 0;
    DataGlobal_B0B888 = 0;
}
}
} // namespace gamemd

// 0x6B88D0
namespace gamemd {
int sub_6B88D0()
{
{
    DataGlobal_B0B8A8 = 0;
    DataGlobal_B0B8AC = 0;
    DataGlobal_B0B8B0 = 0;
    DataGlobal_B0B8B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B88F0
namespace gamemd {
void sub_6B88F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B8C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6B8920
namespace gamemd {
void sub_6B8920()
{
{
    DataGlobal_B0B910 = DataGlobal_B0B8C0 / 60.0;
}
}
} // namespace gamemd

// 0x6B8940
namespace gamemd {
void sub_6B8940()
{
{
    DataGlobal_B0B8F8 = 1.0 / DataGlobal_B0B910;
}
}
} // namespace gamemd

// 0x6B8960
namespace gamemd {
void sub_6B8960()
{
{
    DataGlobal_B0B8F0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6B8980
namespace gamemd {
void sub_6B8980()
{
{
    DataGlobal_B0B8C8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6B89A0
namespace gamemd {
void sub_6B89A0()
{
{
    DataGlobal_B0B8A0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6B89C0
namespace gamemd {
long long sub_6B89C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B8A0 - DataGlobal_B0B8C8);
    result = Math::RoundToInt(v0 * DataGlobal_B0B8C0 * 0.5);
    DataGlobal_B0B918 = result;
    return result;
}
}
} // namespace gamemd

// 0x6B8A00
namespace gamemd {
void sub_6B8A00()
{
{
    DataGlobal_B0B8D0 = Math::ArcTan((double)DataGlobal_B0B918 * 0.00390625);
}
}
} // namespace gamemd

// 0x6B8A30
namespace gamemd {
void sub_6B8A30()
{
{
    DataGlobal_B0B8E8 = Math::ArcTan((double)(2 * DataGlobal_B0B918) / DataGlobal_B0B8C0);
}
}
} // namespace gamemd

// 0x6B8A60
namespace gamemd {
long long sub_6B8A60()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B918) + 0.5);
    DataGlobal_B0B90C = result;
    return result;
}
}
} // namespace gamemd

// 0x6B8A90
namespace gamemd {
int sub_6B8A90()
{
{
    DataGlobal_B0B8B8 = 0;
    DataGlobal_B0B8BA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B8AA0
namespace gamemd {
int sub_6B8AA0()
{
{
    DataGlobal_B0B8D8 = 0;
    DataGlobal_B0B8DC = 0;
    DataGlobal_B0B8E0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B8AC0
namespace gamemd {
int sub_6B8AC0()
{
{
    DataGlobal_B0B908 = 0;
    DataGlobal_B0B900 = 128;
    DataGlobal_B0B904 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6B8B10
namespace gamemd {
void nullsub_37()
{
  ;
}
} // namespace gamemd

// 0x6B8B20
namespace gamemd {
void nullsub_38()
// 0x6b8b10
{
  ;
}
} // namespace gamemd

// 0x6B8EE0
namespace gamemd {
int sub_6B8EE0()
{
{
    DataGlobal_B0B920 = 0;
    DataGlobal_B0B924 = 0;
    DataGlobal_B0B928 = 0;
    DataGlobal_B0B92C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B9350
namespace gamemd {
int sub_6B9350()
{
{
    DataGlobal_B0B938 = 0;
    DataGlobal_B0B93C = 0;
    DataGlobal_B0B940 = 0;
    DataGlobal_B0B944 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6B93E0
namespace gamemd {
int E4Recv_6B93E0::sub_6B93E0()
{
{
    unsigned char *v1;
    int v2;
    int v3;
    unsigned char v4;
    int v5;
    int result;
    v1 = this + 2;
    v2 = 256;
    do
  {
    v3 = *v1;
    v4 = *(v1 - 2);
    LOBYTE(v5) = -1;
    if ( 15 * *(v1 - 1) / 10 <= 255 )
    v5 = 15 * *(v1 - 1) / 10;
    *(v1 - 2) = v5;
    *(v1 - 1) = v4;
    v1 += 3;
    result = v3 / 4;
    *(v1 - 3) = v3 / 4;
    --v2;
  }
    while ( v2 );
    return result;
}
}
} // namespace gamemd

// 0x6B9450
namespace gamemd {
unsigned int * E4Recv_6B9450::sub_6B9450()
{
{
    int v2;
    unsigned int v3;
    int v4;
    void *v5;
    unsigned int v6;
    this->M32 = -1717986918;
    this->M40 = -1717986918;
    this->M36 = 1070176665;
    this->M44 = 1072273817;
    this->M48 = 128;
    this->M16 = 128;
    this->M8 = 128;
    this->M12 = 0;
    v2 = 0;
    v3 = 128;
    do
  {
    ++v2;
    v3 >>= 1;
  }
    while ( v3 );
    this->M12 = v2;
    this->M16 = 0;
    v4 = 1 << (v2 - 1);
    this->M12 = v2 - 1;
    this->M4 = 0;
    this->M20 = 0;
    this->M8 = v4;
    v5 = __2_YAPAXI_Z(4 * v4);
    v6 = 4 *(void**)this->M8;
    *(void**)this = v5;
    memset(v5, 0, v6);
    this->M24 = sub_6B94E0;
    return this;
}
}
} // namespace gamemd

// 0x6B94E0
namespace gamemd {
unsigned int E4Recv_6B94E0::sub_6B94E0()
{
{
    unsigned int v2;
    unsigned int i;
    char *v4;
    v2 = String::Length(this);
    for ( i = 0; i < String::Length(this); ++i )
  {
    v4 = String::GetOrEmpty((char **)this);
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8);
  }
    return v2;
}
}
} // namespace gamemd

// 0x6BA220
namespace gamemd {
void nullsub_39()
{
  ;
}
} // namespace gamemd

// 0x6BA680
namespace gamemd {
char sub_6BA680(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x6BB050
namespace gamemd {
int sub_6BB050()
{
{
    DataGlobal_B0BC58 = 0;
    DataGlobal_B0BC5C = 0;
    DataGlobal_B0BC60 = 0;
    DataGlobal_B0BC64 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6BB070
namespace gamemd {
void sub_6BB070()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0BC70 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6BB0A0
namespace gamemd {
void sub_6BB0A0()
{
{
    DataGlobal_B0BCD8 = DataGlobal_B0BC70 / 60.0;
}
}
} // namespace gamemd

// 0x6BB0C0
namespace gamemd {
void sub_6BB0C0()
{
{
    DataGlobal_B0BCC0 = 1.0 / DataGlobal_B0BCD8;
}
}
} // namespace gamemd

// 0x6BB0E0
namespace gamemd {
void sub_6BB0E0()
{
{
    DataGlobal_B0BCB8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6BB100
namespace gamemd {
void sub_6BB100()
{
{
    DataGlobal_B0BC78 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6BB120
namespace gamemd {
void sub_6BB120()
{
{
    DataGlobal_B0BC50 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6BB140
namespace gamemd {
long long sub_6BB140()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0BC50 - DataGlobal_B0BC78);
    result = Math::RoundToInt(v0 * DataGlobal_B0BC70 * 0.5);
    DataGlobal_B0BCE0 = result;
    return result;
}
}
} // namespace gamemd

// 0x6BB180
namespace gamemd {
void sub_6BB180()
{
{
    DataGlobal_B0BC80 = Math::ArcTan((double)DataGlobal_B0BCE0 * 0.00390625);
}
}
} // namespace gamemd

// 0x6BB1B0
namespace gamemd {
void sub_6BB1B0()
{
{
    DataGlobal_B0BCB0 = Math::ArcTan((double)(2 * DataGlobal_B0BCE0) / DataGlobal_B0BC70);
}
}
} // namespace gamemd

// 0x6BB1E0
namespace gamemd {
long long sub_6BB1E0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0BCE0) + 0.5);
    DataGlobal_B0BCD4 = result;
    return result;
}
}
} // namespace gamemd

// 0x6BB210
namespace gamemd {
int sub_6BB210()
{
{
    DataGlobal_B0BC68 = 0;
    DataGlobal_B0BC6A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6BB220
namespace gamemd {
int sub_6BB220()
{
{
    DataGlobal_B0BCA0 = 0;
    DataGlobal_B0BCA4 = 0;
    DataGlobal_B0BCA8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6BB240
namespace gamemd {
int sub_6BB240()
{
{
    DataGlobal_B0BCD0 = 0;
    DataGlobal_B0BCC8 = 128;
    DataGlobal_B0BCCC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6BB260
namespace gamemd {
int sub_6BB260()
{
{
    DataGlobal_B0BC8C = 0;
    g_AnimClass_Capacity = 0;
    DataGlobal_B0BC94 = 1;
    DataGlobal_B0BC95 = 0;
    g_AnimationManager = (int)&vt_DynamicVectorClass_unsigned_long;
    DataGlobal_B0BC9C = 10;
    DataGlobal_B0BC98 = 0;
    return atexit(sub_6BB2A0);
}
}
} // namespace gamemd

// 0x6BB2A0
namespace gamemd {
void sub_6BB2A0()
{
{
    g_AnimationManager = (int)&vt_VectorClass_unsigned_long;
    if ( DataGlobal_B0BC8C && DataGlobal_B0BC95 )
  {
    __3_YAXPAX_Z(DataGlobal_B0BC8C);
    DataGlobal_B0BC8C = 0;
  }
    DataGlobal_B0BC95 = 0;
    g_AnimClass_Capacity = 0;
}
}
} // namespace gamemd

// 0x6BB2E0
namespace gamemd {
char WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR a2, LPCSTR lpString)
{
{
    char v4;
    int v5;
    HKEY phkResult;
    CHAR String1[260];
    v4 = 0;
    lstrcpyA(String1, lpString2);
    if ( a2 )
  {
    lstrcatA(String1, asc_815E74);
    lstrcatA(String1, a2);
  }
    if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) )
  {
    if ( !lpString || (v5 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v5 + 1)) )
    v4 = 1;
    RegCloseKey(phkResult);
  }
    return v4;
}
}
} // namespace gamemd

// 0x6BB760
namespace gamemd {
int sub_6BB760()
{
{
    CHAR String1[72];
    CHAR MultiByteStr[40];
    CHAR SubKey[300];
    OLECHAR sz[40];
    StringFromGUID2(&rguid, sz, 39);
    WideCharToMultiByte(0, 0x20u, sz, -1, MultiByteStr, 39, 0, 0);
    lstrcpyA(String1, DataGlobal_840B70);
    lstrcatA(String1, MultiByteStr);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, DataGlobal_840BB0);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, DataGlobal_840B98);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, g_Str_WW_TiberianSun);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, DataGlobal_840B80);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, (LPCSTR)g_Str_WW_TiberianSun_1);
    wsprintfA(SubKey, g_Str_Trace__s__s, String1, DataGlobal_840B24);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey);
    wsprintfA(SubKey, g_Str_Trace__s__s, String1, DataGlobal_840B08);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey);
    wsprintfA(SubKey, g_Str_Trace__s__s, String1, DataGlobal_840AF8);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey);
    wsprintfA(SubKey, g_Str_Trace__s__s, String1, DataGlobal_840AE8);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey);
    wsprintfA(SubKey, g_Str_Trace__s__s, String1, DataGlobal_840AE0);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey);
    RegDeleteKeyA(HKEY_CLASSES_ROOT, String1);
    return 0;
}
}
} // namespace gamemd

// 0x6BEC50
namespace gamemd {
void  __noreturn E4Recv_6BEC50::ExitProgram()
{
{
    exit((int)this);
}
}
} // namespace gamemd
