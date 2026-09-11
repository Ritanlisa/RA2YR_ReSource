// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_578B70_e4.hpp"
#include "e4/classes/E4Recv_578C50_e4.hpp"

// 0x572230
namespace gamemd {
char globalHelper_072230(ObjectClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall globalHelper_072230(ObjectClass *aP0, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572239*/
  v3 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x57223c*/
  LOWORD(v2) = *(_WORD *)&aP0->__pad_0[2] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x572252*/
  LOWORD(a2) = *(_WORD *)aP0->__pad_0 + v3; /*0x572256*/
  HIWORD(a2) = v2; /*0x57225e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57226d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x572287*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2; /*0x572289*/
    v5 = g_CellClassArray; /*0x57228f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57229b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x57229d*/
    if ( v6 <= 3u ) /*0x5722a6*/
    {
      *((_BYTE *)v5 + 286) = 4; /*0x5722b6*/
    }
    else if ( v6 == 5 ) /*0x5722ab*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x5722ad*/
    }
  }
  v7 = v5[14] - unk_AA0E28 + 1; /*0x5722ce*/
  if ( v7 == dword_ABC1E8 || v7 == unk_AA0E38 ) /*0x5722d9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0); /*0x572327*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5722e3*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x5722f3*/
                   (IUnknown *)&a2,
                   (IUnknown *)(unk_AA0E28 + g_TerrainSoundTable2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x572303*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x572315*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x5722f8*/
}
}
} // namespace gamemd

// 0x572330
namespace gamemd {
char globalHelper_072330(IUnknown * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall globalHelper_072330(IUnknown *aP0, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572339*/
  v3 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x57233c*/
  LOWORD(v2) = HIWORD(aP0->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x572352*/
  LOWORD(a2) = LOWORD(aP0->field_0) + v3; /*0x572356*/
  HIWORD(a2) = v2; /*0x57235e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57236d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x572387*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2; /*0x572389*/
    v5 = g_CellClassArray; /*0x57238f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57239b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x57239d*/
    if ( v6 <= 3u ) /*0x5723a6*/
    {
      *((_BYTE *)v5 + 286) = 5; /*0x5723b6*/
    }
    else if ( v6 == 4 ) /*0x5723ab*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x5723ad*/
    }
  }
  v7 = v5[14] - unk_AA0E28 + 1; /*0x5723ce*/
  if ( v7 == dword_ABC2B4 || v7 == unk_AA1130 ) /*0x5723d9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0); /*0x572429*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5723e3*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x5723f5*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 1),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x572405*/
  {
    LOBYTE(v7) = Cell::SetTileType( /*0x572417*/
                   (IUnknown *)&a2,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x5723fa*/
}
}
} // namespace gamemd

// 0x574600
namespace gamemd {
bool sub_574600(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_574600(int a1, int a2, int a3)
{
  char v3; // bl
  int v4; // edx
  int v5; // eax

  v3 = 2; /*0x574601*/
  if ( a2 == 2 ) /*0x574609*/
  {
    v4 = a3; /*0x574610*/
    v3 = 4; /*0x574616*/
    if ( a1 == dword_ABC1E8 && *(_BYTE *)(a3 + 282) == 4 || a1 == unk_AA0E38 && *(_BYTE *)(a3 + 282) == 4 ) /*0x574634*/
      return 1; /*0x574634*/
    v5 = g_TerrainSoundTable2; /*0x574636*/
    if ( a1 != g_TerrainSoundTable2 && a1 != g_TerrainSoundTable2 + 3 && a1 != g_TerrainSoundTable2 + 1 ) /*0x57464b*/
    {
LABEL_20:
      if ( a1 != v5 + 2 ) /*0x5746a3*/
        return 0; /*0x5746a3*/
    }
  }
  else
  {
    if ( a2 != 4 ) /*0x574652*/
      return 0; /*0x574652*/
    v4 = a3; /*0x574659*/
    if ( a1 == dword_ABC1D0 && *(_BYTE *)(a3 + 282) == 2 ) /*0x574667*/
      return 1; /*0x57466d*/
    if ( a1 == unk_AA1540 && *(_BYTE *)(a3 + 282) == 2 ) /*0x57467e*/
      return 1; /*0x574684*/
    v5 = unk_AA1028; /*0x574687*/
    if ( a1 != unk_AA1028 && a1 != unk_AA1028 + 3 && a1 != unk_AA1028 + 1 ) /*0x57469c*/
      goto LABEL_20; /*0x57469c*/
  }
  return *(_BYTE *)(v4 + 282) == v3; /*0x574669*/
}
}
} // namespace gamemd

// 0x5746C0
namespace gamemd {
bool sub_5746C0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_5746C0(int a1, int a2)
{
  if ( a1 == unk_AA1548 && *(_BYTE *)(a2 + 282) == 12 ) /*0x5746d3*/
    return 1; /*0x5746d6*/
  if ( a1 == unk_AA0740 && *(_BYTE *)(a2 + 282) == 12 ) /*0x5746e7*/
    return 1; /*0x5746ea*/
  if ( (a1 == g_TerrainSoundTable2 /*0x574712*/
     || a1 == g_TerrainSoundTable2 + 3
     || a1 == g_TerrainSoundTable2 + 1
     || a1 == g_TerrainSoundTable2 + 2)
    && *(_BYTE *)(a2 + 282) == 4 )
  {
    return 1; /*0x574715*/
  }
  if ( a1 == dword_ABC2B4 && *(_BYTE *)(a2 + 282) == 8 ) /*0x57472a*/
    return 1; /*0x57472d*/
  if ( a1 == unk_AA1130 && *(_BYTE *)(a2 + 282) == 8 ) /*0x57473e*/
    return 1; /*0x574741*/
  return (a1 == unk_AA1028 || a1 == unk_AA1028 + 3 || a1 == unk_AA1028 + 1 || a1 == unk_AA1028 + 2) /*0x5746d5*/
      && *(_BYTE *)(a2 + 282) == 2;
}
}
} // namespace gamemd

// 0x575EE0
namespace gamemd {
char sub_575EE0(void * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_575EE0(void *a1, int a2)
{
  unsigned __int16 v2; // bp
  char v3; // bl
  void *v4; // eax
  unsigned __int16 v5; // di
  unsigned int v6; // eax
  void *v7; // eax
  void **v8; // ecx
  unsigned int v9; // eax
  void *v10; // eax
  void **v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // esi
  void **v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  void **v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  void *v22; // eax
  void **v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // esi
  void **v28; // ecx
  void **v29; // ecx
  int v31; // [esp+14h] [ebp-18h] BYREF
  int v32; // [esp+18h] [ebp-14h] BYREF
  int v33; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+20h] [ebp-Ch] BYREF
  int v35; // [esp+24h] [ebp-8h] BYREF
  int v36; // [esp+28h] [ebp-4h] BYREF
  int v37; // [esp+30h] [ebp+4h]

  v2 = HIWORD(a2); /*0x575eea*/
  v3 = 0; /*0x575eef*/
  if ( HIWORD(a1) == HIWORD(a2) ) /*0x575ef6*/
  {
    v4 = a1; /*0x575ef8*/
    v5 = a2; /*0x575efc*/
    v3 = 1; /*0x575f03*/
    if ( (__int16)a1 > (__int16)a2 ) /*0x575f05*/
    {
      v4 = (void *)a2; /*0x575f09*/
      v2 = HIWORD(a1); /*0x575f11*/
      v5 = (unsigned __int16)a1; /*0x575f11*/
    }
  }
  else if ( SHIWORD(a1) <= SHIWORD(a2) ) /*0x575f18*/
  {
    v5 = a2; /*0x575f2f*/
    v4 = a1; /*0x575f33*/
  }
  else
  {
    v4 = (void *)a2; /*0x575f1e*/
    v5 = (unsigned __int16)a1; /*0x575f22*/
    a2 = (int)a1; /*0x575f24*/
    v2 = HIWORD(a1); /*0x575f28*/
  }
  a2 = (int)v4; /*0x575f37*/
  while ( a2 != __PAIR32__(v2, v5) ) /*0x575f43*/
  {
    v6 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x575f5b*/
    if ( v6 >= 0x40000 || (v7 = *(void **)(MEMORY[0x87F924] + 4 * v6)) == 0 ) /*0x575f71*/
    {
      g_Map_GlobalCellIndex = a2; /*0x575f77*/
      v7 = &g_CellClassArray; /*0x575f7c*/
    }
    v8 = (void **)*((_DWORD *)v7 + 15); /*0x575f81*/
    if ( v8 ) /*0x575f86*/
      TeamClass::Update_0(v8, 31, 0, g_MapSeedState, 0, 0); /*0x575f97*/
    if ( v3 ) /*0x575f9e*/
    {
      v9 = (__int16)(MEMORY[0x89F698] + a2) + ((__int16)(HIWORD(a2) + HIWORD(MEMORY[0x89F698])) << 9); /*0x575fcd*/
      if ( v9 >= 0x40000 || (v10 = *(void **)(MEMORY[0x87F924] + 4 * v9)) == 0 ) /*0x575fe3*/
      {
        v10 = &g_CellClassArray; /*0x575fe9*/
        LOWORD(v37) = MEMORY[0x89F698] + a2; /*0x575fba*/
        HIWORD(v37) = HIWORD(a2) + HIWORD(MEMORY[0x89F698]); /*0x575fc2*/
        g_Map_GlobalCellIndex = v37; /*0x575fee*/
      }
      v11 = (void **)*((_DWORD *)v10 + 15); /*0x575ff4*/
      if ( v11 ) /*0x575ff9*/
        TeamClass::Update_0(v11, 31, 0, g_MapSeedState, 0, 0); /*0x576009*/
      v12 = *CellStruct::Add(&a2, &v32, MEMORY[0x89F688]); /*0x576021*/
      v13 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x576032*/
      if ( v13 < 0x40000 && (v14 = *(void **)(MEMORY[0x87F924] + 4 * v13)) != 0 ) /*0x576048*/
      {
        v15 = v14; /*0x57604a*/
      }
      else
      {
        g_Map_GlobalCellIndex = v12; /*0x57604e*/
        v15 = &g_CellClassArray; /*0x576054*/
      }
      v16 = (void **)*((_DWORD *)v15 + 15); /*0x576059*/
      if ( v16 ) /*0x57605e*/
        TeamClass::Update_0(v16, 31, 0, g_MapSeedState, 0, 0); /*0x57606e*/
      v17 = *CellStruct::Add((_WORD *)v15 + 18, &v33, MEMORY[0x89F688]); /*0x576085*/
      v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x576096*/
      if ( v18 >= 0x40000 || (v4 = *(void **)(MEMORY[0x87F924] + 4 * v18)) == 0 ) /*0x5760ac*/
      {
        g_Map_GlobalCellIndex = v17; /*0x5760ae*/
        v4 = &g_CellClassArray; /*0x5760b4*/
      }
      v19 = (void **)*((_DWORD *)v4 + 15); /*0x5760b9*/
      if ( v19 ) /*0x5760be*/
        LOBYTE(v4) = TeamClass::Update_0(v19, 31, 0, g_MapSeedState, 0, 0); /*0x5760ce*/
      LOWORD(a2) = a2 + 1; /*0x5760d3*/
    }
    else
    {
      v20 = *CellStruct::Add(&a2, &v34, &MEMORY[0x89F690]); /*0x5760f0*/
      v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x576101*/
      if ( v21 >= 0x40000 || (v22 = *(void **)(MEMORY[0x87F924] + 4 * v21)) == 0 ) /*0x576117*/
      {
        g_Map_GlobalCellIndex = v20; /*0x576119*/
        v22 = &g_CellClassArray; /*0x57611f*/
      }
      v23 = (void **)*((_DWORD *)v22 + 15); /*0x576124*/
      if ( v23 ) /*0x576129*/
        TeamClass::Update_0(v23, 31, 0, g_MapSeedState, 0, 0); /*0x576139*/
      v24 = *CellStruct::Add(&a2, &v35, &MEMORY[0x89F6A0]); /*0x576151*/
      v25 = (__int16)v24 + (SHIWORD(v24) << 9); /*0x576162*/
      if ( v25 < 0x40000 && (v26 = *(void **)(MEMORY[0x87F924] + 4 * v25)) != 0 ) /*0x576178*/
      {
        v27 = v26; /*0x57617a*/
      }
      else
      {
        g_Map_GlobalCellIndex = v24; /*0x57617e*/
        v27 = &g_CellClassArray; /*0x576184*/
      }
      v28 = (void **)*((_DWORD *)v27 + 15); /*0x576189*/
      if ( v28 ) /*0x57618e*/
        TeamClass::Update_0(v28, 31, 0, g_MapSeedState, 0, 0); /*0x57619e*/
      v31 = *CellStruct::Add((_WORD *)v27 + 18, &v36, &MEMORY[0x89F6A0]); /*0x5761c1*/
      v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v31); /*0x5761c5*/
      v29 = (void **)*((_DWORD *)v4 + 15); /*0x5761ca*/
      if ( v29 ) /*0x5761cf*/
        LOBYTE(v4) = TeamClass::Update_0(v29, 31, 0, g_MapSeedState, 0, 0); /*0x5761e0*/
      ++HIWORD(a2); /*0x5761e5*/
    }
  }
  return (char)v4; /*0x5761ef*/
}
}
} // namespace gamemd

// 0x578B70
namespace gamemd {
int E4Recv_578B70::sub_578B70(short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_578B70(_DWORD *this, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  __int16 v4; // ax
  __int16 v5; // bp
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // eax

  v2 = *(this + 64); /*0x578b77*/
  v3 = *(this + 63); /*0x578b80*/
  v4 = v2 + *(this + 61) - v3; /*0x578b89*/
  v5 = v2 + v3 + 1; /*0x578b8b*/
  v6 = *(this + 65); /*0x578b8f*/
  v7 = *(this + 66); /*0x578b95*/
  v8 = *a2; /*0x578bac*/
  v9 = a2[1]; /*0x578baf*/
  v10 = (v8 + v4 - ((2 * v6 - 1) % 3 != 0) - v5 - v9) / ((2 * v6 - 1) / 3); /*0x578bf4*/
  v11 = v9 - ((2 * v7 - 1) % 3 != 0) - v4 - v5; /*0x578c0d*/
  v12 = (unsigned __int64)(1431655766LL * (2 * v7 - 1)) >> 32; /*0x578c16*/
  v13 = (v8 + v11) / (int)((v12 >> 31) + v12); /*0x578c24*/
  if ( v10 == 3 ) /*0x578c28*/
    v10 = 2; /*0x578c2a*/
  if ( v13 == 3 ) /*0x578c32*/
    v13 = 2; /*0x578c34*/
  return v13 + v10 + 2 * v13 + 1; /*0x578c3c*/
}
}
} // namespace gamemd

// 0x578C50
namespace gamemd {
unsigned int * E4Recv_578C50::sub_578C50(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_578C50(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // edx
  __int16 v8; // [esp+12h] [ebp-Eh]
  int v9; // [esp+28h] [ebp+8h]

  v3 = ((2 * *(this + 65) - 1) % 3 != 0) + (2 * *(this + 65) - 1) / 3 * ((a3 - 1) % 3); /*0x578ca4*/
  v4 = *(this + 64); /*0x578ccc*/
  v5 = ((2 * *(this + 66) - 1) % 3 != 0) + (a3 - 1) / 3 * ((2 * *(this + 66) - 1) / 3); /*0x578cd8*/
  v6 = *(this + 63); /*0x578cda*/
  v8 = v4 + *(this + 61) - v6; /*0x578cf0*/
  LOWORD(v9) = v4 + v6 + 1 + (v3 + (v5 & 1) + v5 + (v3 & 1)) / 2; /*0x578d34*/
  HIWORD(v9) = (v5 - v3) / 2 + v8; /*0x578d3f*/
  *a2 = v9; /*0x578d4b*/
  return a2; /*0x578d48*/
}
}
} // namespace gamemd

// 0x578E60
namespace gamemd {
char CreateMapObject(ProgressScreenClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall CreateMapObject(ProgressScreenClass *aP0, int aP1)
{
  char v2; // bl
  int v3; // esi
  AbstractClass *v4; // ebp
  AbstractClass *v5; // edi
  int v6; // edi
  int i; // esi
  char *TileDataEntry; // eax
  MapClass *j; // eax
  Random *k; // esi
  char v12; // [esp+13h] [ebp-5h]

  v2 = 1; /*0x578e72*/
  v12 = 0; /*0x578e74*/
  if ( !g_MapTileArray ) /*0x578e79*/
  {
    v3 = unk_89C2DC * unk_89C2DC; /*0x578e81*/
    v4 = (AbstractClass *)__2_YAPAXI_Z(80 * unk_89C2DC * unk_89C2DC); /*0x578e90*/
    if ( v4 ) /*0x578e97*/
    {
      v5 = v4; /*0x578e9c*/
      if ( v3 - 1 >= 0 ) /*0x578ea0*/
      {
        do /*0x578eb0*/
        {
          TileData::Constructor(v5); /*0x578ea7*/
          v5 = (AbstractClass *)((char *)v5 + 80); /*0x578eac*/
          --v3; /*0x578eaf*/
        }
        while ( v3 ); /*0x578eb0*/
      }
      g_MapTileArray = v4; /*0x578eb2*/
    }
    else
    {
      g_MapTileArray = 0; /*0x578eba*/
    }
    v12 = 1; /*0x578ec4*/
  }
  v6 = unk_89C2DC * unk_89C2DC; /*0x578ed1*/
  for ( i = 0; i < v6; TileDataEntry[74] = 1 ) /*0x578ed8*/
    TileDataEntry = GetTileDataEntry(i++); /*0x578edc*/
  Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0); /*0x578ef0*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8404] = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x578f00*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8400] = 1; /*0x578f0d*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8408] = *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1; /*0x578f16*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8412] = (*(_DWORD *)&stru_87C374.__pad_14B0[8376] << 11) /*0x578f25*/
                                           + *(_DWORD *)&stru_87C374.__pad_14B0[8448]
                                           + 4;
  for ( j = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x578f35*/
        j;
        j = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
  {
    if ( !v2 ) /*0x578f39*/
      break; /*0x578f39*/
    v2 = Cliff::ProcessTransitions(j, (BombClass *)aP1); /*0x578f4b*/
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[8404] = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x578f61*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8400] = 1; /*0x578f66*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8408] = *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1; /*0x578f72*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8412] = (*(_DWORD *)&stru_87C374.__pad_14B0[8376] << 11) /*0x578f81*/
                                           + *(_DWORD *)&stru_87C374.__pad_14B0[8448]
                                           + 4;
  for ( k = (Random *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x578f8f*/
        k;
        k = (Random *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
  {
    if ( !v2 ) /*0x578f93*/
      break; /*0x578f93*/
    if ( !LOBYTE(k[17].Random_field_0x0C) && Cell::IsEmpty(k) ) /*0x578fa1*/
      v2 = Terrain::SelectTileType(k, (IUnknown *)aP1); /*0x578fb5*/
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0; /*0x578fcd*/
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[12648] ) /*0x578fd5*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_14B0[12648] + 32))( /*0x578fdb*/
      *(_DWORD *)&stru_87C374.__pad_14B0[12648],
      1);
    *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0; /*0x578fde*/
  }
  if ( v12 ) /*0x578fea*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x578ff2*/
    g_MapTileArray = 0; /*0x578ffa*/
  }
  return v2; /*0x579000*/
}
}
} // namespace gamemd

// 0x579320
namespace gamemd {
int InitializeTileNeighborTable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int InitializeTileNeighborTable()
{
  int result; // eax
  int v1; // [esp+4h] [ebp-4h] BYREF

  MEMORY[0xABDDA8] = 0; /*0x57934e*/
  MEMORY[0xABDDAC] = 0; /*0x579361*/
  MEMORY[0xABDDB0] = 0; /*0x579375*/
  MEMORY[0xABDDB4] = 0; /*0x579389*/
  v1 = 0; /*0x57938e*/
  MEMORY[0xABDDB8] = 0; /*0x57939c*/
  MEMORY[0xABDDC4] = 0; /*0x5793b1*/
  MEMORY[0xABDDBC] = 0; /*0x5793bc*/
  MEMORY[0xABDDC0] = 0; /*0x5793c2*/
  dword_ABDDC8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793d4*/
  dword_ABDDCC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793e7*/
  dword_ABDDD0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793f4*/
  dword_ABDDD4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57940c*/
  dword_ABDDD8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57941f*/
  dword_ABDDDC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57942c*/
  dword_ABDDE0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579444*/
  dword_ABDDE4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579457*/
  dword_ABDDE8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579464*/
  dword_ABDDEC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57947c*/
  dword_ABDDF0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57948f*/
  dword_ABDDF4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57949c*/
  dword_ABDDF8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794b4*/
  dword_ABDDFC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794c7*/
  dword_ABDE00 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794d4*/
  dword_ABDE04 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794ec*/
  dword_ABDE08 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794ff*/
  dword_ABDE0C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57950c*/
  dword_ABDE10 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579524*/
  dword_ABDE14 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579537*/
  dword_ABDE18 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579544*/
  dword_ABDE1C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57955c*/
  dword_ABDE20 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579570*/
  dword_ABDE24 = *(_DWORD *)CellStruct::Set(&v1, 1, 0); /*0x57957d*/
  dword_ABDE28 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579595*/
  dword_ABDE2C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795a8*/
  dword_ABDE30 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795b5*/
  dword_ABDE34 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795cd*/
  dword_ABDE38 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795e0*/
  dword_ABDE3C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795ed*/
  dword_ABDE40 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579605*/
  result = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579610*/
  dword_ABDE44 = result; /*0x579613*/
  return result; /*0x579612*/
}
}
} // namespace gamemd

// 0x57A430
namespace gamemd {
char RecursiveCellClassNeighbourUpdate(MapClass * aP0, IUnknown * aP1, IUnknown * aP2, int aP1a, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall RecursiveCellClassNeighbourUpdate(MapClass *aP0, IUnknown *aP1, IUnknown *aP2, int aP1a, int a5)
{
  IUnknown *v5; // ebp
  MapClass *v7; // eax
  MapClass *CellData; // esi
  MapClass *TerrainMask; // eax
  char v10; // bl
  unsigned int v11; // eax
  IUnknown *v12; // eax
  unsigned int v13; // eax
  IUnknown *v14; // eax
  char v15; // al
  unsigned int v16; // eax
  IUnknown *v17; // eax
  char v18; // bl
  unsigned int v19; // eax
  IUnknown *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  IUnknown *v23; // eax
  char v24; // bl
  unsigned int v25; // eax
  IUnknown *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  IUnknown *v29; // eax
  char v30; // bl
  unsigned int v31; // eax
  IUnknown *v32; // eax
  char v33; // al
  int TileDataField14; // eax
  MapClass *v35; // edx
  char v36; // cl
  Random *v38; // eax
  MapClass *v39; // eax
  MapClass *NeighbourContent; // esi
  MapClass *v41; // edx
  int v42; // edi
  char *v43; // eax
  IUnknown *v44; // edx
  MapClass *v45; // ecx
  char var15; // [esp+13h] [ebp-15h]
  MapClass *v46; // [esp+14h] [ebp-14h]
  MapClass *v47; // [esp+14h] [ebp-14h]
  MapClass *v48; // [esp+14h] [ebp-14h]
  MapClass *v49; // [esp+14h] [ebp-14h]
  MapClass *var10; // [esp+18h] [ebp-10h]
  MapClass *v51; // [esp+18h] [ebp-10h]
  MapClass *v53; // [esp+1Ch] [ebp-Ch] BYREF
  MapClass *aP0a; // [esp+24h] [ebp-4h]

  v5 = aP2; /*0x57a435*/
  v7 = (MapClass *)aP2->field_24; /*0x57a43d*/
  aP0a = aP0; /*0x57a444*/
  var15 = 0; /*0x57a448*/
  aP2 = (IUnknown *)v7; /*0x57a44d*/
  CellData = (MapClass *)Tactical::GetCellData((__int16 *)&aP2); /*0x57a45b*/
  *(_DWORD *)&CellData->__pad_30[16] = Cell::GetTerrainMask(aP0, v5, 2); /*0x57a467*/
  TerrainMask = (MapClass *)Cell::GetTerrainMask(aP0, v5, 0); /*0x57a46a*/
  v10 = (char)TerrainMask; /*0x57a46f*/
  aP2 = (IUnknown *)TerrainMask; /*0x57a473*/
  if ( (int)TerrainMask > 0 ) /*0x57a477*/
  {
    if ( TerrainMask == (MapClass *)11 || TerrainMask == (MapClass *)26 ) /*0x57a485*/
      var15 = 1; /*0x57a487*/
    if ( ((unsigned __int8)TerrainMask & 0xA0) == 0xA0 && ((unsigned __int8)TerrainMask & 0x11) == 0 /*0x57a4cb*/
      || ((unsigned __int8)TerrainMask & 0x82) == 0x82 && ((unsigned __int8)TerrainMask & 0x44) == 0
      || ((unsigned __int8)TerrainMask & 0xA) == 0xA && ((unsigned __int8)TerrainMask & 0x11) == 0
      || ((unsigned __int8)TerrainMask & 0x28) == 0x28 && ((unsigned __int8)TerrainMask & 0x44) == 0 )
    {
      var15 = 1; /*0x57a4cd*/
    }
    if ( ((unsigned __int8)TerrainMask & 0x20) != 0 ) /*0x57a4d5*/
    {
      var10 = (MapClass *)v5->field_24; /*0x57a4de*/
      v11 = (__int16)((_WORD)var10 + 1) + (SHIWORD(var10) << 9); /*0x57a4fd*/
      if ( v11 >= 0x40000 || (v12 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) == 0 ) /*0x57a513*/
      {
        v12 = (IUnknown *)g_CellClassArray; /*0x57a519*/
        LOWORD(v46) = (_WORD)var10 + 1; /*0x57a4ef*/
        HIWORD(v46) = HIWORD(v5->field_24); /*0x57a4ea*/
        g_Map_GlobalCellIndex = (IUnknown *)v46; /*0x57a51e*/
      }
      v53 = (MapClass *)Cell::GetTerrainMask(aP0, v12, 0); /*0x57a52e*/
      v51 = (MapClass *)v5->field_24; /*0x57a535*/
      v13 = (__int16)((_WORD)v51 + 2) + (SHIWORD(v51) << 9); /*0x57a554*/
      if ( v13 >= 0x40000 || (v14 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) == 0 ) /*0x57a56a*/
      {
        LOWORD(v47) = (_WORD)v51 + 2; /*0x57a546*/
        HIWORD(v47) = HIWORD(v5->field_24); /*0x57a541*/
        g_Map_GlobalCellIndex = (IUnknown *)v47; /*0x57a570*/
        v14 = (IUnknown *)g_CellClassArray; /*0x57a575*/
      }
      v15 = Cell::GetTerrainMask(aP0, v14, 0); /*0x57a57f*/
      if ( ((unsigned __int8)v53 & 2) != 0 || (v15 & 2) != 0 ) /*0x57a58d*/
        var15 = 1; /*0x57a58f*/
    }
    if ( (v10 & 2) != 0 ) /*0x57a597*/
    {
      v53 = (MapClass *)v5->field_24; /*0x57a5a0*/
      HIWORD(v48) = HIWORD(v53); /*0x57a5ac*/
      v16 = (__int16)((_WORD)v53 - 1) + (SHIWORD(v53) << 9); /*0x57a5bf*/
      if ( v16 >= 0x40000 || (v17 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) == 0 ) /*0x57a5d5*/
      {
        LOWORD(v48) = (_WORD)v53 - 1; /*0x57a5b1*/
        g_Map_GlobalCellIndex = (IUnknown *)v48; /*0x57a5db*/
        v17 = (IUnknown *)g_CellClassArray; /*0x57a5e0*/
      }
      v18 = Cell::GetTerrainMask(aP0, v17, 0); /*0x57a5ef*/
      v53 = (MapClass *)v5->field_24; /*0x57a5f4*/
      HIWORD(v49) = HIWORD(v53); /*0x57a600*/
      v19 = (__int16)((_WORD)v53 - 2) + (SHIWORD(v53) << 9); /*0x57a613*/
      if ( v19 >= 0x40000 || (v20 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v19)) == 0 ) /*0x57a629*/
      {
        LOWORD(v49) = (_WORD)v53 - 2; /*0x57a605*/
        g_Map_GlobalCellIndex = (IUnknown *)v49; /*0x57a62f*/
        v20 = (IUnknown *)g_CellClassArray; /*0x57a634*/
      }
      v21 = Cell::GetTerrainMask(aP0, v20, 0); /*0x57a63e*/
      if ( (v18 & 0x20) != 0 || (v21 & 0x20) != 0 ) /*0x57a64a*/
        var15 = 1; /*0x57a64c*/
      v10 = (char)aP2; /*0x57a651*/
    }
    if ( (v10 & 8) != 0 ) /*0x57a658*/
    {
      v53 = (MapClass *)v5->field_24; /*0x57a661*/
      v22 = (__int16)v53 + ((__int16)(HIWORD(v53) - 1) << 9); /*0x57a67f*/
      if ( v22 >= 0x40000 || (v23 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x57a695*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)&v53[-12].__pad_D80[944]; /*0x57a69b*/
        v23 = (IUnknown *)g_CellClassArray; /*0x57a6a0*/
      }
      v24 = Cell::GetTerrainMask(aP0, v23, 0); /*0x57a6b2*/
      v53 = (MapClass *)v5->field_24; /*0x57a6b4*/
      v25 = (__int16)v53 + ((__int16)(HIWORD(v53) - 2) << 9); /*0x57a6d2*/
      if ( v25 >= 0x40000 || (v26 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) == 0 ) /*0x57a6e8*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)&v53[-23].__pad_30C[2192]; /*0x57a6ee*/
        v26 = (IUnknown *)g_CellClassArray; /*0x57a6f3*/
      }
      v27 = Cell::GetTerrainMask(aP0, v26, 0); /*0x57a6fd*/
      if ( v24 < 0 || v27 < 0 ) /*0x57a709*/
        var15 = 1; /*0x57a70b*/
      v10 = (char)aP2; /*0x57a710*/
    }
    if ( v10 < 0 ) /*0x57a717*/
    {
      v53 = (MapClass *)v5->field_24; /*0x57a720*/
      v28 = (__int16)v53 + ((__int16)(HIWORD(v53) + 1) << 9); /*0x57a73e*/
      if ( v28 >= 0x40000 || (v29 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v28)) == 0 ) /*0x57a754*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)&v53[11].__pad_30C[648]; /*0x57a75a*/
        v29 = (IUnknown *)g_CellClassArray; /*0x57a75f*/
      }
      v30 = Cell::GetTerrainMask(aP0, v29, 0); /*0x57a771*/
      v53 = (MapClass *)v5->field_24; /*0x57a773*/
      v31 = (__int16)v53 + ((__int16)(HIWORD(v53) + 2) << 9); /*0x57a791*/
      if ( v31 >= 0x40000 || (v32 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v31)) == 0 ) /*0x57a7a7*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)&v53[22].__pad_30C[2076]; /*0x57a7ad*/
        v32 = (IUnknown *)g_CellClassArray; /*0x57a7b2*/
      }
      v33 = Cell::GetTerrainMask(aP0, v32, 0); /*0x57a7bc*/
      if ( (v30 & 8) != 0 || (v33 & 8) != 0 ) /*0x57a7c8*/
        var15 = 1; /*0x57a7ca*/
      v10 = (char)aP2; /*0x57a7cf*/
    }
    if ( (v10 & 0x88) == 0x88 || (v10 & 0x22) == 0x22 || var15 ) /*0x57a7ee*/
    {
      aP2 = (IUnknown *)v5->field_24; /*0x57a801*/
      TileDataField14 = MapClass::GetTileDataField14((MapResourceClass *)&aP2); /*0x57a805*/
      v35 = (MapClass *)aP1a; /*0x57a80a*/
      v36 = a5; /*0x57a80e*/
      if ( TileDataField14 > 0 && TileDataField14 != aP1a && !(_BYTE)a5 ) /*0x57a81c*/
        return 0; /*0x57a827*/
      v38 = (Random *)dword_AA0738; /*0x57a82a*/
      BYTE2(v5->field_118) = 0; /*0x57a82f*/
      v5->field_38 = (int)v38; /*0x57a838*/
      aP2 = (IUnknown *)v5->field_24; /*0x57a846*/
      if ( v36 ) /*0x57a83b*/
        MapClass::SetObstruction((__int16 *)&aP2, 0); /*0x57a84b*/
      else
        MapClass::SetObstruction((__int16 *)&aP2, v35); /*0x57a85f*/
      v39 = 0; /*0x57a864*/
      for ( aP2 = 0; (int)aP2 < 8; aP2 = (IUnknown *)((char *)aP2 + 1) ) /*0x57a866*/
      {
        NeighbourContent = (MapClass *)Cell::GetNeighbourContent(v5, (unsigned int)v39); /*0x57a872*/
        v41 = *(MapClass **)&NeighbourContent->__pad_18[12]; /*0x57a87a*/
        v53 = v41; /*0x57a87f*/
        v42 = SHIWORD(v41) + (__int16)v41; /*0x57a88b*/
        if ( v42 > g_MapCellHeight_Value /*0x57a8b0*/
          && (__int16)v53 - SHIWORD(v53) < g_MapCellHeight_Value
          && SHIWORD(v53) - (__int16)v53 < g_MapCellHeight_Value
          && v42 <= g_MapCellCount )
        {
          v53 = v41; /*0x57a8b6*/
          v43 = Tactical::GetCellData((__int16 *)&v53); /*0x57a8ba*/
          v44 = (IUnknown *)a5; /*0x57a8bf*/
          v45 = aP0a; /*0x57a8c3*/
          *((_DWORD *)v43 + 16) = -1; /*0x57a8c7*/
          RecursiveCellClassNeighbourUpdate(v45, v44, (IUnknown *)NeighbourContent, aP1a, (int)v44); /*0x57a8d5*/
        }
        v39 = (MapClass *)((char *)&aP2->field_0 + 1); /*0x57a8de*/
      }
    }
  }
  return 1; /*0x57a81e*/
}
}
} // namespace gamemd

// 0x57A900
namespace gamemd {
int sub_57A900(unsigned int * a1, signed int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_57A900(_DWORD *a1, signed int a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  int *NeighbourContent; // esi
  int *v6; // edi
  bool IsValidHeight; // al
  bool v8; // bl
  bool v10; // [esp+13h] [ebp-15h]
  int v11; // [esp+14h] [ebp-14h]
  _DWORD v12[4]; // [esp+18h] [ebp-10h]

  v12[1] = 4; /*0x57a913*/
  v12[3] = 4; /*0x57a917*/
  v12[0] = 2; /*0x57a91d*/
  v12[2] = 2; /*0x57a921*/
  v3 = 1; /*0x57a928*/
  v4 = v12[a2 / 2]; /*0x57a92f*/
  NeighbourContent = (int *)Cell::GetNeighbourContent(a1, v4); /*0x57a939*/
  v6 = (int *)Cell::GetNeighbourContent(NeighbourContent, a2); /*0x57a945*/
  v10 = !Cell::IsValidHeight(NeighbourContent); /*0x57a950*/
  IsValidHeight = Cell::IsValidHeight(v6); /*0x57a955*/
  if ( v10 ) /*0x57a960*/
  {
    while ( IsValidHeight ) /*0x57a96a*/
    {
      v11 = v3 + 1; /*0x57a970*/
      NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v4); /*0x57a97b*/
      v6 = (int *)Cell::GetNeighbourContent(v6, v4); /*0x57a985*/
      v8 = !Cell::IsValidHeight(NeighbourContent); /*0x57a990*/
      IsValidHeight = Cell::IsValidHeight(v6); /*0x57a993*/
      if ( !v8 ) /*0x57a99a*/
        return v11; /*0x57a9a7*/
      v3 = v11; /*0x57a964*/
    }
  }
  return v3; /*0x57a9a0*/
}
}
} // namespace gamemd

// 0x57A9C0
namespace gamemd {
int * InitializeCliffRampTable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *InitializeCliffRampTable()
{
  int *result; // eax
  int v1; // [esp+8h] [ebp-4h] BYREF

  dword_ABDB68 = -65536; /*0x57a9f2*/
  dword_ABDB6C = -65536; /*0x57aa05*/
  dword_ABDB70 = -65536; /*0x57aa1b*/
  v1 = -1; /*0x57aa21*/
  dword_ABDB74 = -65536; /*0x57aa31*/
  dword_ABDB78 = -131072; /*0x57aa44*/
  dword_ABDB7C = -65537; /*0x57aa50*/
  dword_ABDB80 = -1; /*0x57aa56*/
  dword_ABDB84 = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57aa63*/
  dword_ABDB88 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa7b*/
  dword_ABDB8C = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa8e*/
  dword_ABDB90 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa9b*/
  dword_ABDB94 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aab4*/
  dword_ABDB98 = *(_DWORD *)CellStruct::Set(&v1, -2, -1); /*0x57aac8*/
  dword_ABDB9C = *(_DWORD *)CellStruct::Set(&v1, -2, 0); /*0x57aad5*/
  dword_ABDBA0 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aae8*/
  dword_ABDBA4 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ab00*/
  dword_ABDBA8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab0d*/
  dword_ABDBAC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab25*/
  dword_ABDBB0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab38*/
  dword_ABDBB4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab45*/
  dword_ABDBB8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab5d*/
  dword_ABDBBC = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ab70*/
  dword_ABDBC0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab7d*/
  dword_ABDBC4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab95*/
  dword_ABDBC8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57aba8*/
  dword_ABDBCC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abb5*/
  dword_ABDBD0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abcd*/
  dword_ABDBD4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abe0*/
  dword_ABDBD8 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57abed*/
  dword_ABDBDC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac05*/
  dword_ABDBE0 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57ac18*/
  dword_ABDBE4 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57ac25*/
  dword_ABDBE8 = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57ac3d*/
  dword_ABDBEC = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57ac50*/
  dword_ABDBF0 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ac5d*/
  dword_ABDBF4 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ac75*/
  dword_ABDBF8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac88*/
  dword_ABDBFC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac95*/
  dword_ABDC00 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57acad*/
  dword_ABDC04 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57acc0*/
  dword_ABDC08 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57accd*/
  result = (int *)CellStruct::Set(&v1, 0, 0); /*0x57acd8*/
  dword_ABDC0C = *result; /*0x57ace0*/
  return result; /*0x57acdf*/
}
}
} // namespace gamemd

// 0x57ACF0
namespace gamemd {
int GenerateMapClassCliffTransitions()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
bool __fastcall GenerateMapClassCliffTransitions(_DWORD *a0, int a2, IUnknown *aP2, IUnknown *aP3, int a5, char aP5)
{
  int v7; // eax
  IUnknown *v8; // edi
  int v9; // ebp
  int TerrainMask; // eax
  char v11; // bl
  int v12; // ebp
  int v13; // eax
  VectorClass *NeighbourContent; // esi
  VectorClass *v15; // edi
  bool IsValidHeight; // al
  VectorClass *v17; // esi
  VectorClass *v18; // edi
  bool v19; // al
  VectorClass *v20; // esi
  VectorClass *v21; // edi
  bool v22; // al
  VectorClass *v23; // esi
  VectorClass *v24; // edi
  bool v25; // al
  IUnknown *v26; // esi
  int v27; // ecx
  __int16 v28; // dx
  __int16 v29; // ax
  bool v31; // [esp+13h] [ebp-Dh]
  bool v32; // [esp+13h] [ebp-Dh]
  bool v33; // [esp+13h] [ebp-Dh]
  bool v34; // [esp+13h] [ebp-Dh]
  bool v35; // [esp+13h] [ebp-Dh]
  bool v36; // [esp+13h] [ebp-Dh]
  bool v37; // [esp+13h] [ebp-Dh]
  bool v38; // [esp+13h] [ebp-Dh]
  _DWORD v39[2]; // [esp+14h] [ebp-Ch] BYREF
  int v40; // [esp+1Ch] [ebp-4h] BYREF

  v39[1] = a0; /*0x57ad00*/
  v7 = Range_RandomInt(0, (MapClass *)5); /*0x57ad04*/
  v8 = aP3; /*0x57ad09*/
  v9 = v7; /*0x57ad0d*/
  if ( aP3 == (IUnknown *)2 ) /*0x57ad12*/
    TerrainMask = Cell::GetTerrainMask(a0, aP2, 1); /*0x57ad1b*/
  else
    TerrainMask = Cell::GetTerrainMask(a0, aP2, 0); /*0x57ad26*/
  v11 = TerrainMask; /*0x57ad2b*/
  if ( !TerrainMask ) /*0x57ad2f*/
    return 1; /*0x57ad2f*/
  if ( v8 != (IUnknown *)2 ) /*0x57ad38*/
  {
    if ( (TerrainMask & 2) != 0 ) /*0x57ae12*/
    {
      v39[0] = 1; /*0x57ae1e*/
      NeighbourContent = (VectorClass *)Cell::GetNeighbourContent(aP2, 4u); /*0x57ae2b*/
      v15 = (VectorClass *)Cell::GetNeighbourContent(NeighbourContent, 2u); /*0x57ae38*/
      v31 = !Cell::IsValidHeight((int *)NeighbourContent->__pad_0); /*0x57ae43*/
      IsValidHeight = Cell::IsValidHeight((int *)v15->__pad_0); /*0x57ae48*/
      if ( v31 ) /*0x57ae53*/
      {
        do /*0x57ae93*/
        {
          if ( !IsValidHeight ) /*0x57ae57*/
            break; /*0x57ae57*/
          ++v39[0]; /*0x57ae62*/
          NeighbourContent = (VectorClass *)Cell::GetNeighbourContent(NeighbourContent, 4u); /*0x57ae6f*/
          v15 = (VectorClass *)Cell::GetNeighbourContent(v15, 4u); /*0x57ae78*/
          v32 = !Cell::IsValidHeight((int *)NeighbourContent->__pad_0); /*0x57ae83*/
          IsValidHeight = Cell::IsValidHeight((int *)v15->__pad_0); /*0x57ae88*/
        }
        while ( v32 ); /*0x57ae93*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 4) == 0 || (v11 & 0x18) != 0 ) /*0x57aeb3*/
      {
        v13 = 12; /*0x57aea1*/
        goto LABEL_71; /*0x57aea6*/
      }
      v13 = abs32(v9 % 3) + 9; /*0x57aec6*/
    }
    else if ( (TerrainMask & 0x20) != 0 ) /*0x57aed1*/
    {
      v39[0] = 1; /*0x57aedd*/
      v17 = (VectorClass *)Cell::GetNeighbourContent(aP2, 4u); /*0x57aeea*/
      v18 = (VectorClass *)Cell::GetNeighbourContent(v17, 6u); /*0x57aef7*/
      v33 = !Cell::IsValidHeight((int *)v17->__pad_0); /*0x57af02*/
      v19 = Cell::IsValidHeight((int *)v18->__pad_0); /*0x57af07*/
      if ( v33 ) /*0x57af12*/
      {
        do /*0x57af52*/
        {
          if ( !v19 ) /*0x57af16*/
            break; /*0x57af16*/
          ++v39[0]; /*0x57af21*/
          v17 = (VectorClass *)Cell::GetNeighbourContent(v17, 4u); /*0x57af2e*/
          v18 = (VectorClass *)Cell::GetNeighbourContent(v18, 4u); /*0x57af37*/
          v34 = !Cell::IsValidHeight((int *)v17->__pad_0); /*0x57af42*/
          v19 = Cell::IsValidHeight((int *)v18->__pad_0); /*0x57af47*/
        }
        while ( v34 ); /*0x57af52*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 0x10) == 0 || (v11 & 0xC) != 0 ) /*0x57af72*/
      {
        v13 = 28; /*0x57af60*/
        goto LABEL_71; /*0x57af65*/
      }
      v13 = v9 % 3 + 25; /*0x57af80*/
    }
    else if ( (TerrainMask & 8) != 0 ) /*0x57af8b*/
    {
      v39[0] = 1; /*0x57af97*/
      v20 = (VectorClass *)Cell::GetNeighbourContent(aP2, 2u); /*0x57afa4*/
      v21 = (VectorClass *)Cell::GetNeighbourContent(v20, 4u); /*0x57afb1*/
      v35 = !Cell::IsValidHeight((int *)v20->__pad_0); /*0x57afbc*/
      v22 = Cell::IsValidHeight((int *)v21->__pad_0); /*0x57afc1*/
      if ( v35 ) /*0x57afcc*/
      {
        do /*0x57b00c*/
        {
          if ( !v22 ) /*0x57afd0*/
            break; /*0x57afd0*/
          ++v39[0]; /*0x57afdb*/
          v20 = (VectorClass *)Cell::GetNeighbourContent(v20, 2u); /*0x57afe8*/
          v21 = (VectorClass *)Cell::GetNeighbourContent(v21, 2u); /*0x57aff1*/
          v36 = !Cell::IsValidHeight((int *)v20->__pad_0); /*0x57affc*/
          v22 = Cell::IsValidHeight((int *)v21->__pad_0); /*0x57b001*/
        }
        while ( v36 ); /*0x57b00c*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 4) == 0 || (v11 & 3) != 0 ) /*0x57b027*/
      {
        v13 = 4; /*0x57b015*/
        goto LABEL_71; /*0x57b01a*/
      }
      v13 = v9 % 3 + 1; /*0x57b035*/
    }
    else
    {
      if ( (TerrainMask & 0x80u) == 0 ) /*0x57b03e*/
      {
LABEL_61:
        if ( (v11 & 1) != 0 ) /*0x57b0f0*/
        {
          v12 = (v9 & 1) + 35; /*0x57b0f5*/
        }
        else if ( (v11 & 4) != 0 ) /*0x57b0fd*/
        {
          v12 = (v9 & 1) + 33; /*0x57b102*/
        }
        else if ( (v11 & 0x10) != 0 ) /*0x57b10a*/
        {
          v12 = (v9 & 1) + 39; /*0x57b10f*/
        }
        else
        {
          if ( (v11 & 0x40) == 0 ) /*0x57b117*/
            return 1; /*0x57b117*/
          v12 = (v9 & 1) + 37; /*0x57b120*/
        }
        goto LABEL_69; /*0x57b0f8*/
      }
      v39[0] = 1; /*0x57b04a*/
      v23 = (VectorClass *)Cell::GetNeighbourContent(aP2, 2u); /*0x57b057*/
      v24 = (VectorClass *)Cell::GetNeighbourContent(v23, 0); /*0x57b064*/
      v37 = !Cell::IsValidHeight((int *)v23->__pad_0); /*0x57b06f*/
      v25 = Cell::IsValidHeight((int *)v24->__pad_0); /*0x57b074*/
      if ( v37 ) /*0x57b07f*/
      {
        do /*0x57b0bf*/
        {
          if ( !v25 ) /*0x57b083*/
            break; /*0x57b083*/
          ++v39[0]; /*0x57b08e*/
          v23 = (VectorClass *)Cell::GetNeighbourContent(v23, 2u); /*0x57b09b*/
          v24 = (VectorClass *)Cell::GetNeighbourContent(v24, 2u); /*0x57b0a4*/
          v38 = !Cell::IsValidHeight((int *)v23->__pad_0); /*0x57b0af*/
          v25 = Cell::IsValidHeight((int *)v24->__pad_0); /*0x57b0b4*/
        }
        while ( v38 ); /*0x57b0bf*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 1) == 0 || (v11 & 6) != 0 ) /*0x57b0d7*/
      {
        v13 = 20; /*0x57b0c8*/
        goto LABEL_71; /*0x57b0cd*/
      }
      v13 = v9 % 3 + 17; /*0x57b0e5*/
    }
    if ( v13 != -1 ) /*0x57b0eb*/
      goto LABEL_70; /*0x57b0eb*/
    goto LABEL_61; /*0x57b0eb*/
  }
  if ( (TerrainMask & 0xA0) == 0xA0 )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57ad50*/
    {
      v12 = (v9 & 1) + 23; /*0x57ad55*/
LABEL_69:
      v13 = v12; /*0x57b123*/
LABEL_70:
      if ( v13 <= 0 ) /*0x57b127*/
        return 1; /*0x57b127*/
      goto LABEL_71; /*0x57b127*/
    }
    v13 = (TerrainMask & 1) != 0 ? 21 : 30;
  }
  else if ( (TerrainMask & 0x82) == 0x82 )
  {
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57ad86*/
    {
      v12 = (v9 & 1) + 15; /*0x57ad8b*/
      goto LABEL_69; /*0x57ad8e*/
    }
    v13 = (TerrainMask & 4) != 0 ? 14 : 22;
  }
  else if ( (TerrainMask & 0xA) == 0xA )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57adb8*/
    {
      v12 = (v9 & 1) + 7; /*0x57adbd*/
      goto LABEL_69; /*0x57adc0*/
    }
    v13 = (TerrainMask & 1) != 0 ? 13 : 6;
  }
  else
  {
    if ( (TerrainMask & 0x28) != 0x28 ) /*0x57ade1*/
      return 1; /*0x57ade1*/
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57adee*/
    {
      v12 = (v9 & 1) + 31; /*0x57adf3*/
      goto LABEL_69; /*0x57adf6*/
    }
    v13 = (TerrainMask & 4) != 0 ? 5 : 29;
  }
LABEL_71:
  v26 = aP2; /*0x57b12d*/
  *(_DWORD *)&stru_87C374.__pad_14B0[12652] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] /*0x57b143*/
                                                        + 4 * ((_DWORD)dword_ABAD28 + v13)
                                                        - 4);
  v27 = aP2->field_24; /*0x57b149*/
  v28 = word_ABDB64[2 * v13]; /*0x57b14c*/
  v29 = word_ABDB66[2 * v13]; /*0x57b154*/
  LOWORD(aP2) = v27 + v28; /*0x57b168*/
  HIWORD(aP2) = HIWORD(v27) + v29; /*0x57b16d*/
  v39[0] = aP2; /*0x57b17e*/
  Tactical::MouseMove((int)&stru_87C374.__pad_14B0[8132], (MouseClass *)&v40, (MouseClass *)v39); /*0x57b189*/
  LOBYTE(aP2) = 1; /*0x57b192*/
  if ( aP3 == (IUnknown *)1 ) /*0x57b19a*/
  {
    GenerateTerrainMap( /*0x57b1b7*/
      0,
      0,
      (MouseClass *)SHIBYTE(v26->field_118),
      (MouseClass *)a5,
      (MouseClass *)&aP2,
      (MouseClass *)aP5);
  }
  else
  {
    if ( aP3 != (IUnknown *)2 ) /*0x57b1bc*/
      return 1; /*0x57b1bc*/
    GenerateTerrainMap( /*0x57b1e3*/
      dword_ABAD28,
      (MouseClass *)((char *)&dword_ABAD28->field_28 + 1),
      (MouseClass *)SHIBYTE(v26->field_118),
      (MouseClass *)a5,
      (MouseClass *)&aP2,
      (MouseClass *)aP5);
  }
  return (_BYTE)aP2 != 0; /*0x57b1ee*/
}
}
} // namespace gamemd

// 0x57B440
namespace gamemd {
char GenerateTerrainMap(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall GenerateTerrainMap(
        MouseClass *aP0,
        MouseClass *aP1,
        MouseClass *aP2,
        MouseClass *aP3,
        MouseClass *aP4,
        MouseClass *aP5)
{
  MouseClass *v6; // ebp
  int v7; // edi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  _DWORD *v14; // esi
  unsigned int v15; // ebx
  int v16; // ebp
  MouseClass *TileDataField14; // eax
  MapClass *v18; // edi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v28; // eax
  MouseClass *v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  __int16 a0[2]; // [esp+18h] [ebp-14h] BYREF
  int v32; // [esp+1Ch] [ebp-10h]
  IUnknown *v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+28h] [ebp-4h]

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_14B0[12652] + 44))(*(_DWORD *)&stru_87C374.__pad_14B0[12652]) != 18 ) /*0x57b455*/
    return 0; /*0x57b455*/
  if ( (_BYTE)aP5 ) /*0x57b461*/
    aP3 = 0; /*0x57b463*/
  v6 = *(MouseClass **)&stru_87C374.__pad_14B0[12652]; /*0x57b46b*/
  v29 = *(MouseClass **)&stru_87C374.__pad_14B0[12652]; /*0x57b473*/
  v34 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_14B0[12652] + 156))(*(_DWORD *)&stru_87C374.__pad_14B0[12652]); /*0x57b482*/
  if ( !v34 ) /*0x57b486*/
    return 0; /*0x57b486*/
  v30 = 0; /*0x57b492*/
  if ( *(int *)&v6->__pad_1D4[276] <= 0 ) /*0x57b49c*/
    return 1; /*0x57b70e*/
  v7 = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x57b4a2*/
  while ( 1 ) /*0x57b4a8*/
  {
    v8 = *(_DWORD *)&v6->__pad_1D4[272]; /*0x57b4a8*/
    v9 = 0; /*0x57b4ae*/
    v32 = 0; /*0x57b4b2*/
    if ( v8 > 0 ) /*0x57b4b6*/
      break; /*0x57b4b6*/
LABEL_39:
    if ( ++v30 >= *(_DWORD *)&v6->__pad_1D4[276] ) /*0x57b6a4*/
      return 1; /*0x57b6b3*/
  }
  while ( 1 ) /*0x57b4d0*/
  {
    LOWORD(v33) = v9 + *(_WORD *)&stru_87C374.__pad_14B0[12600]; /*0x57b4d0*/
    v10 = (__int16)(v9 + *(_WORD *)&stru_87C374.__pad_14B0[12600]); /*0x57b4d5*/
    HIWORD(v33) = *(_WORD *)&stru_87C374.__pad_14B0[12602] + v30; /*0x57b4d8*/
    v11 = (__int16)(*(_WORD *)&stru_87C374.__pad_14B0[12602] + v30); /*0x57b4e1*/
    *(_DWORD *)a0 = v33; /*0x57b4e4*/
    v12 = (__int16)v10 + v11; /*0x57b4e8*/
    if ( v12 <= v7 || v10 - v11 >= v7 || v11 - v10 >= v7 || v12 > v7 + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8380] ) /*0x57b516*/
      goto LABEL_38; /*0x57b516*/
    v13 = v10 + (v11 << 9); /*0x57b51f*/
    if ( v13 >= 0x40000 || (v14 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) == 0 ) /*0x57b535*/
    {
      g_Map_GlobalCellIndex = v33; /*0x57b537*/
      v14 = g_CellClassArray; /*0x57b53d*/
    }
    v15 = v32 + v30 * *(_DWORD *)&v6->__pad_1D4[272]; /*0x57b555*/
    v35 = *(_DWORD *)(v34 + 4 * v15 + 16); /*0x57b55d*/
    v16 = v35; /*0x57b557*/
    if ( v35 ) /*0x57b561*/
      break; /*0x57b561*/
LABEL_37:
    v6 = v29; /*0x57b678*/
LABEL_38:
    v26 = *(_DWORD *)&v6->__pad_1D4[272]; /*0x57b67c*/
    v9 = ++v32; /*0x57b686*/
    if ( v32 >= v26 ) /*0x57b68d*/
      goto LABEL_39; /*0x57b68d*/
  }
  TileDataField14 = (MouseClass *)MapClass::GetTileDataField14((MapResourceClass *)a0); /*0x57b571*/
  if ( (_BYTE)aP5 ) /*0x57b57c*/
  {
    TileDataField14 = 0; /*0x57b57e*/
LABEL_18:
    v18 = (MapClass *)aP3; /*0x57b580*/
    goto LABEL_19; /*0x57b580*/
  }
  if ( (int)TileDataField14 <= 0 ) /*0x57b5e0*/
    goto LABEL_18; /*0x57b5e0*/
  v18 = (MapClass *)aP3; /*0x57b5e2*/
  if ( TileDataField14 == aP3 ) /*0x57b5e8*/
    goto LABEL_20; /*0x57b5e8*/
  if ( aP3 != (MouseClass *)-1 ) /*0x57b5ed*/
  {
    v23 = v14[14] - (_DWORD)dword_ABAD28; /*0x57b603*/
    v24 = *(_DWORD *)&v29->__pad_1D4[192] - (_DWORD)dword_ABAD28; /*0x57b605*/
    if ( !Cell::IsEmpty(v14) ) /*0x57b60e*/
    {
      if ( v23 < 0 || v24 < 0 || v23 > 41 || v24 > 41 || dword_82A7F4[v23] != dword_82A7F4[v24] ) /*0x57b703*/
      {
        LOBYTE(aP4->field_0) = 0; /*0x57b718*/
        return 0; /*0x57b721*/
      }
      return 1; /*0x57b703*/
    }
    MapClass::SetObstruction(a0, (MapClass *)aP3); /*0x57b623*/
    v16 = v35; /*0x57b628*/
    goto LABEL_32; /*0x57b628*/
  }
LABEL_19:
  if ( TileDataField14 == (MouseClass *)v18 ) /*0x57b586*/
  {
LABEL_20:
    v19 = v14[14] - (_DWORD)dword_ABAD28; /*0x57b58c*/
    v20 = *(_DWORD *)&v29->__pad_1D4[192] - (_DWORD)dword_ABAD28; /*0x57b5a1*/
    if ( v19 >= 0 && v20 >= 0 && v19 <= 41 && v20 <= 41 ) /*0x57b5b7*/
    {
      v21 = dword_82A89C[v19] - dword_82A89C[v20]; /*0x57b5c9*/
      v22 = (HIDWORD(v21) ^ v21) - HIDWORD(v21); /*0x57b5cc*/
      if ( v22 >= 3 && v22 <= 5 ) /*0x57b5d6*/
      {
        LOBYTE(aP4->field_0) = 0; /*0x57b72b*/
        return 0; /*0x57b734*/
      }
    }
    goto LABEL_32; /*0x57b5d6*/
  }
  if ( !Cell::IsEmpty(v14) ) /*0x57b6bf*/
  {
    if ( v18 != (MapClass *)-1 ) /*0x57b6d9*/
      goto LABEL_58; /*0x57b6d9*/
    goto LABEL_36; /*0x57b6d9*/
  }
  MapClass::SetObstruction(a0, v18); /*0x57b6cc*/
LABEL_32:
  if ( Cell::IsEmpty(v14) || (v25 = v14[14], v25 >= (int)aP0) && v25 <= (int)aP1 ) /*0x57b64a*/
  {
    v14[14] = *(_DWORD *)&v29->__pad_1D4[192]; /*0x57b65e*/
    *((_BYTE *)v14 + 282) = v15; /*0x57b661*/
    *((_BYTE *)v14 + 283) = (_BYTE)aP2 + *(_BYTE *)(v16 + 40); /*0x57b66c*/
LABEL_36:
    v7 = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x57b672*/
    goto LABEL_37; /*0x57b672*/
  }
  if ( CellClass::IsTerrainType(v14) && Map_Helper(*(_DWORD *)&v29->__pad_1D4[192], v15) /*0x57b774*/
    || (v28 = *(_DWORD *)&v29->__pad_1D4[192], v28 >= (int)dword_ABAD28)
    && v28 < (int)&dword_ABAD28->field_28 + 2
    && CellLand::IsBuildable((int)v14) )
  {
LABEL_58:
    LOBYTE(aP4->field_0) = 0; /*0x57b77d*/
  }
  return 0; /*0x57b6aa*/
}
}
} // namespace gamemd

// 0x57C870
namespace gamemd {
char sub_57C870(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_57C870(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c877*/
  v2 = a1; /*0x57c885*/
  do /*0x57c8e3*/
  {
    v3 = HIWORD(a1) + HIWORD(MEMORY[0x89F688][0]); /*0x57c895*/
    LOWORD(v15) = LOWORD(MEMORY[0x89F688][0]) + v2; /*0x57c89a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(MEMORY[0x89F688][0]); /*0x57c8a5*/
    v2 += LOWORD(MEMORY[0x89F688][0]); /*0x57c8aa*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(MEMORY[0x89F688][0])) << 9; /*0x57c8ae*/
    v5 = v2 + v4 < 0; /*0x57c8b1*/
    v6 = v2 + v4; /*0x57c8b1*/
    HIWORD(a1) += HIWORD(MEMORY[0x89F688][0]); /*0x57c8b3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v6)) == 0 ) /*0x57c8cb*/
    {
      g_Map_GlobalCellIndex = v15; /*0x57c8cd*/
      v7 = g_CellClassArray; /*0x57c8d3*/
    }
    v8 = v7[17]; /*0x57c8d8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57c8e3*/
  v19 = HIWORD(v1); /*0x57c8eb*/
  LOWORD(v17) = v15 + MEMORY[0x89F698]; /*0x57c8f9*/
  HIWORD(v17) = v3 + HIWORD(MEMORY[0x89F698]); /*0x57c904*/
  do /*0x57c95d*/
  {
    v9 = v19 + HIWORD(MEMORY[0x89F698]); /*0x57c90f*/
    LOWORD(v16) = v1 + MEMORY[0x89F698]; /*0x57c914*/
    HIWORD(v16) = v19 + HIWORD(MEMORY[0x89F698]); /*0x57c91f*/
    LOWORD(v1) = v1 + MEMORY[0x89F698]; /*0x57c924*/
    v10 = (__int16)(v19 + HIWORD(MEMORY[0x89F698])) << 9; /*0x57c928*/
    v5 = (__int16)v1 + v10 < 0; /*0x57c92b*/
    v11 = (__int16)v1 + v10; /*0x57c92b*/
    v19 += HIWORD(MEMORY[0x89F698]); /*0x57c92d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v11)) == 0 ) /*0x57c945*/
    {
      g_Map_GlobalCellIndex = v16; /*0x57c947*/
      v12 = g_CellClassArray; /*0x57c94d*/
    }
    v13 = v12[17]; /*0x57c952*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57c95d*/
  LOWORD(v18) = LOWORD(MEMORY[0x89F688][0]) + v16; /*0x57c968*/
  HIWORD(v18) = HIWORD(MEMORY[0x89F688][0]) + v9; /*0x57c96d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57c985*/
}
}
} // namespace gamemd

// 0x57C990
namespace gamemd {
char sub_57C990(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_57C990(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c997*/
  v2 = a1; /*0x57c9a5*/
  do /*0x57ca03*/
  {
    v3 = HIWORD(a1) + HIWORD(MEMORY[0x89F6A0]); /*0x57c9b5*/
    LOWORD(v15) = MEMORY[0x89F6A0] + v2; /*0x57c9ba*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(MEMORY[0x89F6A0]); /*0x57c9c5*/
    v2 += MEMORY[0x89F6A0]; /*0x57c9ca*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(MEMORY[0x89F6A0])) << 9; /*0x57c9ce*/
    v5 = v2 + v4 < 0; /*0x57c9d1*/
    v6 = v2 + v4; /*0x57c9d1*/
    HIWORD(a1) += HIWORD(MEMORY[0x89F6A0]); /*0x57c9d3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v6)) == 0 ) /*0x57c9eb*/
    {
      g_Map_GlobalCellIndex = v15; /*0x57c9ed*/
      v7 = g_CellClassArray; /*0x57c9f3*/
    }
    v8 = v7[17]; /*0x57c9f8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57ca03*/
  v19 = HIWORD(v1); /*0x57ca0b*/
  LOWORD(v17) = v15 + MEMORY[0x89F690]; /*0x57ca19*/
  HIWORD(v17) = v3 + HIWORD(MEMORY[0x89F690]); /*0x57ca24*/
  do /*0x57ca7d*/
  {
    v9 = v19 + HIWORD(MEMORY[0x89F690]); /*0x57ca2f*/
    LOWORD(v16) = v1 + MEMORY[0x89F690]; /*0x57ca34*/
    HIWORD(v16) = v19 + HIWORD(MEMORY[0x89F690]); /*0x57ca3f*/
    LOWORD(v1) = v1 + MEMORY[0x89F690]; /*0x57ca44*/
    v10 = (__int16)(v19 + HIWORD(MEMORY[0x89F690])) << 9; /*0x57ca48*/
    v5 = (__int16)v1 + v10 < 0; /*0x57ca4b*/
    v11 = (__int16)v1 + v10; /*0x57ca4b*/
    v19 += HIWORD(MEMORY[0x89F690]); /*0x57ca4d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v11)) == 0 ) /*0x57ca65*/
    {
      g_Map_GlobalCellIndex = v16; /*0x57ca67*/
      v12 = g_CellClassArray; /*0x57ca6d*/
    }
    v13 = v12[17]; /*0x57ca72*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57ca7d*/
  LOWORD(v18) = MEMORY[0x89F6A0] + v16; /*0x57ca88*/
  HIWORD(v18) = HIWORD(MEMORY[0x89F6A0]) + v9; /*0x57ca8d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57caa5*/
}
}
} // namespace gamemd

// 0x57DAF0
namespace gamemd {
char sub_57DAF0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_57DAF0(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57daf7*/
  v2 = a1; /*0x57db05*/
  do /*0x57db67*/
  {
    v3 = HIWORD(a1) + HIWORD(MEMORY[0x89F688][0]); /*0x57db15*/
    LOWORD(v15) = LOWORD(MEMORY[0x89F688][0]) + v2; /*0x57db1a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(MEMORY[0x89F688][0]); /*0x57db25*/
    v2 += LOWORD(MEMORY[0x89F688][0]); /*0x57db2a*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(MEMORY[0x89F688][0])) << 9; /*0x57db2e*/
    v5 = v2 + v4 < 0; /*0x57db31*/
    v6 = v2 + v4; /*0x57db31*/
    HIWORD(a1) += HIWORD(MEMORY[0x89F688][0]); /*0x57db33*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v6)) == 0 ) /*0x57db4b*/
    {
      g_Map_GlobalCellIndex = v15; /*0x57db4d*/
      v7 = g_CellClassArray; /*0x57db53*/
    }
    v8 = v7[17]; /*0x57db58*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57db67*/
  v19 = HIWORD(v1); /*0x57db6f*/
  LOWORD(v17) = v15 + MEMORY[0x89F698]; /*0x57db7d*/
  HIWORD(v17) = v3 + HIWORD(MEMORY[0x89F698]); /*0x57db88*/
  do /*0x57dbe5*/
  {
    v9 = v19 + HIWORD(MEMORY[0x89F698]); /*0x57db93*/
    LOWORD(v16) = v1 + MEMORY[0x89F698]; /*0x57db98*/
    HIWORD(v16) = v19 + HIWORD(MEMORY[0x89F698]); /*0x57dba3*/
    LOWORD(v1) = v1 + MEMORY[0x89F698]; /*0x57dba8*/
    v10 = (__int16)(v19 + HIWORD(MEMORY[0x89F698])) << 9; /*0x57dbac*/
    v5 = (__int16)v1 + v10 < 0; /*0x57dbaf*/
    v11 = (__int16)v1 + v10; /*0x57dbaf*/
    v19 += HIWORD(MEMORY[0x89F698]); /*0x57dbb1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v11)) == 0 ) /*0x57dbc9*/
    {
      g_Map_GlobalCellIndex = v16; /*0x57dbcb*/
      v12 = g_CellClassArray; /*0x57dbd1*/
    }
    v13 = v12[17]; /*0x57dbd6*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dbe5*/
  LOWORD(v18) = LOWORD(MEMORY[0x89F688][0]) + v16; /*0x57dbf0*/
  HIWORD(v18) = HIWORD(MEMORY[0x89F688][0]) + v9; /*0x57dbf5*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dc0d*/
}
}
} // namespace gamemd

// 0x57DC20
namespace gamemd {
char sub_57DC20(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_57DC20(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57dc27*/
  v2 = a1; /*0x57dc35*/
  do /*0x57dc97*/
  {
    v3 = HIWORD(a1) + HIWORD(MEMORY[0x89F6A0]); /*0x57dc45*/
    LOWORD(v15) = MEMORY[0x89F6A0] + v2; /*0x57dc4a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(MEMORY[0x89F6A0]); /*0x57dc55*/
    v2 += MEMORY[0x89F6A0]; /*0x57dc5a*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(MEMORY[0x89F6A0])) << 9; /*0x57dc5e*/
    v5 = v2 + v4 < 0; /*0x57dc61*/
    v6 = v2 + v4; /*0x57dc61*/
    HIWORD(a1) += HIWORD(MEMORY[0x89F6A0]); /*0x57dc63*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v6)) == 0 ) /*0x57dc7b*/
    {
      g_Map_GlobalCellIndex = v15; /*0x57dc7d*/
      v7 = g_CellClassArray; /*0x57dc83*/
    }
    v8 = v7[17]; /*0x57dc88*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57dc97*/
  v19 = HIWORD(v1); /*0x57dc9f*/
  LOWORD(v17) = v15 + MEMORY[0x89F690]; /*0x57dcad*/
  HIWORD(v17) = v3 + HIWORD(MEMORY[0x89F690]); /*0x57dcb8*/
  do /*0x57dd15*/
  {
    v9 = v19 + HIWORD(MEMORY[0x89F690]); /*0x57dcc3*/
    LOWORD(v16) = v1 + MEMORY[0x89F690]; /*0x57dcc8*/
    HIWORD(v16) = v19 + HIWORD(MEMORY[0x89F690]); /*0x57dcd3*/
    LOWORD(v1) = v1 + MEMORY[0x89F690]; /*0x57dcd8*/
    v10 = (__int16)(v19 + HIWORD(MEMORY[0x89F690])) << 9; /*0x57dcdc*/
    v5 = (__int16)v1 + v10 < 0; /*0x57dcdf*/
    v11 = (__int16)v1 + v10; /*0x57dcdf*/
    v19 += HIWORD(MEMORY[0x89F690]); /*0x57dce1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v11)) == 0 ) /*0x57dcf9*/
    {
      g_Map_GlobalCellIndex = v16; /*0x57dcfb*/
      v12 = g_CellClassArray; /*0x57dd01*/
    }
    v13 = v12[17]; /*0x57dd06*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dd15*/
  LOWORD(v18) = MEMORY[0x89F6A0] + v16; /*0x57dd20*/
  HIWORD(v18) = HIWORD(MEMORY[0x89F6A0]) + v9; /*0x57dd25*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dd3d*/
}
}
} // namespace gamemd

// 0x57DD50
namespace gamemd {
int CreateCliffRampMap(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall CreateCliffRampMap(IUnknown *aP0)
{
  IUnknown *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  ObjectClass *v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // eax
  IUnknown *PlacementRect; // esi
  ObjectClass **StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  ObjectClass *v16; // edi
  int v17; // eax
  int v18; // esi
  ObjectClass *v19; // ecx
  unsigned int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  IUnknown *v24; // edi
  int v25; // edx
  IUnknown *v26; // esi
  int *v27; // eax
  ObjectClass *left; // edx
  int v29; // edi
  ObjectClass *v30; // ecx
  int v31; // esi
  int v32; // eax
  IUnknown *v33; // esi
  IUnknown *v34; // esi
  int v35; // eax
  _DWORD *v36; // eax
  IUnknown *v37; // eax
  AbstractClass *v38; // eax
  IUnknown *v39; // eax
  int v40; // ebp
  IUnknown *v41; // esi
  AbstractClass *v42; // [esp-8h] [ebp-E4h]
  ObjectClass *v43; // [esp-4h] [ebp-E0h]
  IUnknown *v44; // [esp+0h] [ebp-DCh]
  IUnknown *v45; // [esp+4h] [ebp-D8h]
  IUnknown *v46; // [esp+10h] [ebp-CCh]
  _DWORD *v47; // [esp+10h] [ebp-CCh]
  IUnknown *right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  AbstractClass aP1; // [esp+1Ch] [ebp-C0h] BYREF
  IUnknown *v51; // [esp+40h] [ebp-9Ch]
  _DWORD v52[2]; // [esp+44h] [ebp-98h] BYREF
  int v53; // [esp+4Ch] [ebp-90h]
  IUnknown *bottom; // [esp+50h] [ebp-8Ch]
  ObjectClass *v58; // [esp+54h] [ebp-88h]
  int v56; // [esp+58h] [ebp-84h]
  ObjectClass *v57; // [esp+5Ch] [ebp-80h]
  int var7C; // [esp+60h] [ebp-7Ch]
  _DWORD v59[2]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v60[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v61[4]; // [esp+ACh] [ebp-30h] BYREF
  int v62[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57dd5d*/
  result = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0) + 17); /*0x57dd6c*/
  if ( result >= 74 && result <= 101 ) /*0x57dd7b*/
  {
    v3 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x57dd92*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x57dda2*/
    {
      v5 = (_DWORD *)v4; /*0x57dda4*/
      v49 = v4; /*0x57dda6*/
    }
    else
    {
      v6 = (ObjectClass *)aP0->field_0; /*0x57ddac*/
      v49 = (int)g_CellClassArray; /*0x57ddaf*/
      v5 = g_CellClassArray; /*0x57ddb7*/
      g_Map_GlobalCellIndex = (IUnknown *)v6; /*0x57ddbb*/
    }
    v46 = (IUnknown *)(aP0->field_0 - 0x10000); /*0x57ddcf*/
    v7 = SLOWORD(aP0->field_0) + (SHIWORD(v46) << 9); /*0x57dddd*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) != 0 ) /*0x57dded*/
    {
      *(_DWORD *)&aP1.__pad_0[8] = v8; /*0x57ddef*/
    }
    else
    {
      *(_DWORD *)&aP1.__pad_0[8] = g_CellClassArray; /*0x57ddf9*/
      g_Map_GlobalCellIndex = v46; /*0x57de01*/
    }
    v9 = SLOWORD(aP0->field_0) + ((__int16)((unsigned int)(aP0->field_0 + 0x10000) >> 16) << 9); /*0x57de23*/
    if ( v9 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v9)) != 0 ) /*0x57de33*/
    {
      v47 = v10; /*0x57de35*/
    }
    else
    {
      v47 = g_CellClassArray; /*0x57de3f*/
      g_Map_GlobalCellIndex = (IUnknown *)(aP0->field_0 + 0x10000); /*0x57de47*/
    }
    LOBYTE(v51) = 0; /*0x57de54*/
    PlacementRect = (IUnknown *)BuildingClass::GetPlacementRect((int)v5, (IUnknown *)v52); /*0x57de62*/
    StartCoords = (ObjectClass **)House::GetStartCoords((int)v5, (IUnknown *)&aP1.abstractFlags); /*0x57de67*/
    if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x57de7c*/
    {
      v19 = (ObjectClass *)PlacementRect->field_0; /*0x57df02*/
      v15 = PlacementRect->field_4; /*0x57df04*/
      v16 = (ObjectClass *)PlacementRect->field_8; /*0x57df07*/
      v17 = PlacementRect->field_C; /*0x57df0a*/
    }
    else
    {
      right = (IUnknown *)PlacementRect->field_8; /*0x57de87*/
      if ( (int)right <= 0 || (*(_DWORD *)aP1.__pad_0 = PlacementRect->field_C, *(int *)aP1.__pad_0 <= 0) ) /*0x57de96*/
      {
        v19 = *StartCoords; /*0x57def5*/
        v15 = (int)StartCoords[1]; /*0x57def7*/
        v16 = StartCoords[2]; /*0x57defa*/
        v17 = (int)StartCoords[3]; /*0x57defd*/
      }
      else
      {
        v13 = (int)*StartCoords; /*0x57de98*/
        v14 = PlacementRect->field_0; /*0x57de9a*/
        v15 = (int)StartCoords[1]; /*0x57de9c*/
        v16 = StartCoords[2]; /*0x57de9f*/
        v17 = (int)StartCoords[3]; /*0x57dea2*/
        if ( v13 > PlacementRect->field_0 ) /*0x57dea7*/
        {
          v16 = (ObjectClass *)((char *)v16 + v13 - v14); /*0x57deab*/
          v13 = PlacementRect->field_0; /*0x57dead*/
        }
        v18 = PlacementRect->field_4; /*0x57deaf*/
        *(_DWORD *)&aP1.__pad_0[12] = v18; /*0x57deb4*/
        if ( v15 > v18 ) /*0x57deb8*/
        {
          v17 += v15 - v18; /*0x57debc*/
          v15 = v18; /*0x57debe*/
        }
        if ( (int)&v16->__pad_0[v13] < (int)right + v14 ) /*0x57dec8*/
          v16 = (ObjectClass *)((char *)&right->field_0 + v14 - v13 + 1); /*0x57ded0*/
        if ( v17 + v15 < *(_DWORD *)aP1.__pad_0 + *(_DWORD *)&aP1.__pad_0[12] ) /*0x57dee3*/
          v17 = *(_DWORD *)aP1.__pad_0 + *(_DWORD *)&aP1.__pad_0[12] - v15 + 1; /*0x57dee8*/
        v19 = (ObjectClass *)v13; /*0x57deea*/
        v1 = aP0; /*0x57deec*/
      }
    }
    v58 = v19; /*0x57df0d*/
    v60[2] = 82; /*0x57df16*/
    v60[6] = 82; /*0x57df1a*/
    var7C = v17; /*0x57df26*/
    v60[8] = 81; /*0x57df2d*/
    v60[9] = 81; /*0x57df34*/
    v56 = v15; /*0x57df3d*/
    v57 = v16; /*0x57df41*/
    v60[0] = -1; /*0x57df45*/
    v60[1] = 79; /*0x57df49*/
    v60[3] = -1; /*0x57df51*/
    v60[4] = 78; /*0x57df55*/
    v60[5] = 80; /*0x57df5d*/
    v60[7] = -1; /*0x57df68*/
    v60[10] = 100; /*0x57df6f*/
    memset(&v60[11], 255, 20); /*0x57df7a*/
    result = Map_Create(v1); /*0x57df9d*/
    v20 = SLOWORD(v1->field_0) + (SHIWORD(v1->field_0) << 9); /*0x57dfad*/
    if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x57dfc4*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v1->field_0; /*0x57dfc9*/
      v21 = g_CellClassArray; /*0x57dfcf*/
    }
    v22 = v21[17]; /*0x57dfd4*/
    if ( result > 0 ) /*0x57dfd9*/
    {
      if ( v22 < 92 ) /*0x57dfe2*/
      {
        v23 = v60[result]; /*0x57dffd*/
        if ( v22 == v23 ) /*0x57e003*/
          return result; /*0x57e003*/
      }
      else if ( v22 == 92 ) /*0x57dfe4*/
      {
        v23 = 93; /*0x57dfe6*/
      }
      else
      {
        if ( v22 != 94 ) /*0x57dff0*/
          return result; /*0x57dff0*/
        v23 = 95; /*0x57dff6*/
      }
      v24 = (IUnknown *)v49; /*0x57e009*/
      v25 = *(_DWORD *)&aP1.__pad_0[8]; /*0x57e00d*/
      *(_DWORD *)(v49 + 68) = v23; /*0x57e015*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57e018*/
      v47[17] = v23; /*0x57e01b*/
      v59[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x57e029*/
      v59[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x57e034*/
      v26 = (IUnknown *)House::GetStartCoords((int)v24, (IUnknown *)v62); /*0x57e04a*/
      v27 = BuildingClass::GetPlacementRect((int)v24, (IUnknown *)v61); /*0x57e04c*/
      if ( v26->field_8 <= 0 || v26->field_C <= 0 ) /*0x57e061*/
      {
        aP1.abstractFlags = *v27; /*0x57e136*/
        aP1.nextArrayIndex = v27[1]; /*0x57e13d*/
        aP1.referenceCount = v27[2]; /*0x57e144*/
        aP1.NeedsSaveOrLink = (void *)v27[3]; /*0x57e14b*/
      }
      else
      {
        right = (IUnknown *)v27[2]; /*0x57e06c*/
        if ( (int)right <= 0 || (*(_DWORD *)&aP1.__pad_0[12] = v27[3], *(int *)&aP1.__pad_0[12] <= 0) ) /*0x57e07f*/
        {
          aP1.abstractFlags = v26->field_0; /*0x57e119*/
          aP1.nextArrayIndex = v26->field_4; /*0x57e120*/
          aP1.referenceCount = v26->field_8; /*0x57e127*/
          aP1.NeedsSaveOrLink = (void *)v26->field_C; /*0x57e12e*/
        }
        else
        {
          left = (ObjectClass *)v26->field_0; /*0x57e088*/
          v29 = v26->field_4; /*0x57e08a*/
          v53 = v26->field_8; /*0x57e08d*/
          bottom = (IUnknown *)v26->field_C; /*0x57e094*/
          v30 = (ObjectClass *)*v27; /*0x57e098*/
          if ( (int)left > *v27 ) /*0x57e09c*/
          {
            v31 = (char *)left - (char *)v30 + v53; /*0x57e0a4*/
            left = (ObjectClass *)*v27; /*0x57e0a6*/
            v53 = v31; /*0x57e0a8*/
          }
          v32 = v27[1]; /*0x57e0ac*/
          *(_DWORD *)aP1.__pad_0 = v32; /*0x57e0b1*/
          if ( v29 > v32 ) /*0x57e0b5*/
          {
            v33 = (IUnknown *)((char *)bottom + v29 - v32); /*0x57e0bd*/
            v29 = v32; /*0x57e0bf*/
            bottom = v33; /*0x57e0c1*/
          }
          if ( (int)&left->__pad_0[v53] < (int)((char *)right + (int)v30) ) /*0x57e0d3*/
            v53 = (int)&right->field_0 + (char *)v30 - (char *)left + 1; /*0x57e0df*/
          v34 = bottom; /*0x57e0eb*/
          if ( (int)bottom + v29 < *(_DWORD *)&aP1.__pad_0[12] + *(_DWORD *)aP1.__pad_0 ) /*0x57e0f6*/
            v34 = (IUnknown *)(*(_DWORD *)&aP1.__pad_0[12] + *(_DWORD *)aP1.__pad_0 - v29 + 1); /*0x57e0fb*/
          aP1.abstractFlags = (int)left; /*0x57e0fd*/
          aP1.nextArrayIndex = v29; /*0x57e105*/
          v24 = (IUnknown *)v49; /*0x57e109*/
          aP1.referenceCount = v53; /*0x57e10d*/
          aP1.NeedsSaveOrLink = v34; /*0x57e111*/
        }
      }
      v35 = Rect::Union((IUnknown *)&aP1.abstractFlags, (const RECT *)v44, (const RECT *)v45); /*0x57e15f*/
      v43 = *(ObjectClass **)(v35 + 12); /*0x57e16a*/
      v42 = *(AbstractClass **)(v35 + 8); /*0x57e16f*/
      v36 = CellStruct::Copy((int *)v35, (IUnknown *)&aP1.__pad_0[12]); /*0x57e17d*/
      v37 = (IUnknown *)Coord2D::Sub(v36, &aP1, (IUnknown *)v59); /*0x57e184*/
      v38 = Rect::Construct(v52, v37, v42, (AbstractClass *)v43); /*0x57e18e*/
      v58 = *(ObjectClass **)v38->__pad_0; /*0x57e19c*/
      v56 = *(_DWORD *)&v38->__pad_0[4]; /*0x57e1a3*/
      v57 = *(ObjectClass **)&v38->__pad_0[8]; /*0x57e1aa*/
      var7C = *(_DWORD *)&v38->__pad_0[12]; /*0x57e1b3*/
      Cell::CreateCrater( /*0x57e1d3*/
        *(_DWORD *)v38->__pad_0,
        *(_DWORD *)&v38->__pad_0[4],
        *(_DWORD *)&v38->__pad_0[8],
        *(_DWORD *)&v38->__pad_0[12],
        0);
      if ( v23 == 100 ) /*0x57e1db*/
      {
        LOBYTE(v51) = 1; /*0x57e1e8*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], v1); /*0x57e1ec*/
        right = (IUnknown *)0x10000; /*0x57e1fd*/
        *(_DWORD *)aP1.__pad_0 = CellStruct::Add(v1, (IUnknown *)&aP1.__pad_0[12], (IUnknown *)&right)->field_0; /*0x57e21a*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57e21e*/
        v39 = (IUnknown *)CellStruct::Set((rc_ptr_base *)&aP1.__pad_0[12], 0, 1); /*0x57e22a*/
        *(_DWORD *)aP1.__pad_0 = CellStruct::Sub((__int16 *)v1, (IUnknown *)&right, v39)->field_0; /*0x57e248*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57e24c*/
      }
      House::AnnounceUpgrade((int)v24, (IUnknown *)0xFFFFFFFF); /*0x57e255*/
      v40 = *(_DWORD *)&aP1.__pad_0[8]; /*0x57e25a*/
      House::AnnounceUpgrade(*(int *)&aP1.__pad_0[8], (IUnknown *)0xFFFFFFFF); /*0x57e262*/
      House::AnnounceUpgrade((int)v47, (IUnknown *)0xFFFFFFFF); /*0x57e26f*/
      v41 = v51; /*0x57e274*/
      Cell::SearchEnemies((int)v24, v51); /*0x57e27b*/
      Cell::SearchEnemies(v40, v41); /*0x57e283*/
      return Cell::SearchEnemies((int)v47, v41); /*0x57e28b*/
    }
  }
  return result; /*0x57e290*/
}
}
} // namespace gamemd

// 0x57E2A0
namespace gamemd {
char CreateCliffStraightMap(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall CreateCliffStraightMap(IUnknown *aP0)
{
  IUnknown *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  ObjectClass *v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  ObjectClass *v11; // eax
  ObjectClass *v12; // edx
  int *PlacementRect; // esi
  IUnknown **StartCoords; // eax
  IUnknown *v15; // ebp
  int v16; // ecx
  int v17; // edx
  char *v18; // edi
  int v19; // eax
  int v20; // esi
  IUnknown *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  ObjectClass *v24; // edx
  ObjectClass *v25; // eax
  IUnknown *v26; // esi
  int *v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // ebp
  int v31; // edi
  IUnknown *bottom; // esi
  bool v33; // cc
  int v34; // eax
  char *v35; // ecx
  int *v36; // eax
  _DWORD *v37; // eax
  IUnknown *v38; // eax
  AbstractClass *v39; // eax
  __int16 v40; // cx
  ObjectClass *v41; // ebx
  ObjectClass *v42; // edi
  IUnknown *v43; // esi
  AbstractClass *v45; // [esp-8h] [ebp-E4h]
  AbstractClass *v46; // [esp-4h] [ebp-E0h]
  ObjectClass *v47; // [esp+0h] [ebp-DCh]
  MouseClass *v48; // [esp+4h] [ebp-D8h]
  ObjectClass *right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  AbstractClass aP1; // [esp+18h] [ebp-C4h] BYREF
  _DWORD v52[2]; // [esp+3Ch] [ebp-A0h] BYREF
  IUnknown *v57; // [esp+44h] [ebp-98h]
  int v54; // [esp+48h] [ebp-94h]
  char *v55; // [esp+4Ch] [ebp-90h]
  int v56; // [esp+50h] [ebp-8Ch]
  _DWORD var88[2]; // [esp+54h] [ebp-88h] BYREF
  _DWORD v58[2]; // [esp+5Ch] [ebp-80h] BYREF
  char *v59; // [esp+64h] [ebp-78h]
  _DWORD v60[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v61[4]; // [esp+ACh] [ebp-30h] BYREF
  int v62[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57e2ac*/
  v2 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0) + 17); /*0x57e2bc*/
  if ( v2 >= 74 && v2 <= 101 ) /*0x57e2cb*/
  {
    v3 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x57e2e6*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x57e2f6*/
    {
      v5 = v4; /*0x57e2f8*/
    }
    else
    {
      v5 = g_CellClassArray; /*0x57e2fe*/
      g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x57e300*/
    }
    v6 = LOWORD(aP0->field_0) - 1; /*0x57e30c*/
    HIWORD(v50) = HIWORD(aP0->field_0); /*0x57e30e*/
    LOWORD(v50) = v6; /*0x57e316*/
    *(_DWORD *)&aP1.__pad_0[12] = v5; /*0x57e31b*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57e325*/
    if ( v7 < 0x40000 && (v8 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) != 0 ) /*0x57e335*/
    {
      *(_DWORD *)&aP1.__pad_0[8] = v8; /*0x57e337*/
    }
    else
    {
      *(_DWORD *)&aP1.__pad_0[8] = g_CellClassArray; /*0x57e341*/
      g_Map_GlobalCellIndex = (IUnknown *)v50; /*0x57e345*/
    }
    v9 = LOWORD(aP0->field_0) + 1; /*0x57e351*/
    HIWORD(v50) = HIWORD(aP0->field_0); /*0x57e353*/
    LOWORD(v50) = v9; /*0x57e35b*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57e366*/
    if ( v10 < 0x40000 && (v11 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x57e376*/
    {
      v50 = (int)v11; /*0x57e378*/
    }
    else
    {
      v12 = (ObjectClass *)v50; /*0x57e37e*/
      v50 = (int)g_CellClassArray; /*0x57e382*/
      g_Map_GlobalCellIndex = (IUnknown *)v12; /*0x57e386*/
    }
    LOBYTE(aP1.NeedsSaveOrLink) = 0; /*0x57e393*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, (IUnknown *)v58); /*0x57e3a1*/
    StartCoords = (IUnknown **)House::GetStartCoords((int)v5, (IUnknown *)&aP1.uniqueId); /*0x57e3a6*/
    if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x57e3bb*/
    {
      v21 = (IUnknown *)*PlacementRect; /*0x57e448*/
      v17 = PlacementRect[1]; /*0x57e44a*/
      v18 = (char *)PlacementRect[2]; /*0x57e44d*/
      v19 = PlacementRect[3]; /*0x57e450*/
    }
    else
    {
      right = (ObjectClass *)PlacementRect[2]; /*0x57e3c6*/
      if ( (int)right <= 0 || (*(_DWORD *)aP1.__pad_0 = PlacementRect[3], *(int *)aP1.__pad_0 <= 0) ) /*0x57e3d5*/
      {
        v21 = *StartCoords; /*0x57e43b*/
        v17 = (int)StartCoords[1]; /*0x57e43d*/
        v18 = (char *)StartCoords[2]; /*0x57e440*/
        v19 = (int)StartCoords[3]; /*0x57e443*/
      }
      else
      {
        v15 = *StartCoords; /*0x57e3d7*/
        v16 = *PlacementRect; /*0x57e3d9*/
        v17 = (int)StartCoords[1]; /*0x57e3db*/
        v18 = (char *)StartCoords[2]; /*0x57e3de*/
        v19 = (int)StartCoords[3]; /*0x57e3e1*/
        if ( (int)v15 > *PlacementRect ) /*0x57e3e6*/
        {
          v18 = &v18[(_DWORD)v15 - v16]; /*0x57e3ea*/
          v15 = (IUnknown *)*PlacementRect; /*0x57e3ec*/
        }
        v20 = PlacementRect[1]; /*0x57e3ee*/
        v52[0] = v20; /*0x57e3f3*/
        if ( v17 > v20 ) /*0x57e3f7*/
        {
          v19 += v17 - v20; /*0x57e3fb*/
          v17 = v20; /*0x57e3fd*/
        }
        if ( (int)((char *)v15 + (int)v18) < (int)&right->__pad_0[v16] ) /*0x57e40a*/
          v18 = &right->__pad_0[v16 - (_DWORD)v15 + 1]; /*0x57e412*/
        if ( v19 + v17 < *(_DWORD *)aP1.__pad_0 + v52[0] ) /*0x57e425*/
          v19 = *(_DWORD *)aP1.__pad_0 + v52[0] - v17 + 1; /*0x57e42a*/
        v1 = aP0; /*0x57e42c*/
        v21 = v15; /*0x57e433*/
        v5 = *(_DWORD **)&aP1.__pad_0[12]; /*0x57e435*/
      }
    }
    v56 = v19; /*0x57e453*/
    v55 = v18; /*0x57e45c*/
    v60[2] = 91; /*0x57e460*/
    v60[6] = 91; /*0x57e464*/
    v57 = v21; /*0x57e46b*/
    v54 = v17; /*0x57e479*/
    v60[0] = -1; /*0x57e47d*/
    v60[1] = 88; /*0x57e481*/
    v60[3] = -1; /*0x57e489*/
    v60[4] = 87; /*0x57e48d*/
    v60[5] = 89; /*0x57e495*/
    v60[7] = -1; /*0x57e4a0*/
    v60[8] = 90; /*0x57e4a7*/
    v60[9] = 90; /*0x57e4ae*/
    v60[10] = 101; /*0x57e4b5*/
    memset(&v60[11], 255, 20); /*0x57e4c0*/
    LOBYTE(v2) = Map_Create_57B990((__int16 *)v1); /*0x57e4e3*/
    v22 = v5[17]; /*0x57e4e8*/
    if ( v2 > 0 ) /*0x57e4ed*/
    {
      if ( v22 < 96 ) /*0x57e4f6*/
      {
        v23 = v60[v2]; /*0x57e511*/
        if ( v23 == v22 ) /*0x57e517*/
          return v2; /*0x57e517*/
      }
      else if ( v22 == 96 ) /*0x57e4f8*/
      {
        v23 = 97; /*0x57e4fa*/
      }
      else
      {
        if ( v22 != 98 ) /*0x57e504*/
          return v2; /*0x57e504*/
        v23 = 99; /*0x57e50a*/
      }
      v24 = *(ObjectClass **)&aP1.__pad_0[8]; /*0x57e51d*/
      v25 = (ObjectClass *)v50; /*0x57e521*/
      v5[17] = v23; /*0x57e525*/
      v24->ambientSoundController[2] = v23; /*0x57e528*/
      v25->ambientSoundController[2] = v23; /*0x57e52b*/
      var88[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x57e539*/
      var88[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x57e547*/
      v26 = (IUnknown *)House::GetStartCoords((int)v5, (IUnknown *)v62); /*0x57e55a*/
      v27 = BuildingClass::GetPlacementRect((int)v5, (IUnknown *)v61); /*0x57e55c*/
      if ( v26->field_8 <= 0 || v26->field_C <= 0 ) /*0x57e571*/
      {
        aP1.uniqueId = *v27; /*0x57e62b*/
        aP1.abstractFlags = v27[1]; /*0x57e632*/
        aP1.nextArrayIndex = v27[2]; /*0x57e639*/
        aP1.referenceCount = v27[3]; /*0x57e640*/
      }
      else
      {
        right = (ObjectClass *)v27[2]; /*0x57e57c*/
        if ( (int)right <= 0 || (v52[0] = v27[3], v52[0] <= 0) ) /*0x57e58f*/
        {
          aP1.uniqueId = v26->field_0; /*0x57e60e*/
          aP1.abstractFlags = v26->field_4; /*0x57e615*/
          aP1.nextArrayIndex = v26->field_8; /*0x57e61c*/
          aP1.referenceCount = v26->field_C; /*0x57e623*/
        }
        else
        {
          v28 = v26->field_0; /*0x57e591*/
          v29 = *v27; /*0x57e593*/
          v30 = v26->field_8; /*0x57e595*/
          v31 = v26->field_4; /*0x57e598*/
          bottom = (IUnknown *)v26->field_C; /*0x57e59b*/
          v33 = v28 <= *v27; /*0x57e59e*/
          v59 = (char *)v30; /*0x57e5a0*/
          if ( !v33 ) /*0x57e5a4*/
          {
            v30 += v28 - v29; /*0x57e5a8*/
            v28 = v29; /*0x57e5aa*/
            v59 = (char *)v30; /*0x57e5ac*/
          }
          v34 = v27[1]; /*0x57e5b0*/
          *(_DWORD *)aP1.__pad_0 = v34; /*0x57e5b5*/
          if ( v31 > v34 ) /*0x57e5b9*/
          {
            bottom = (IUnknown *)((char *)bottom + v31 - v34); /*0x57e5bd*/
            v31 = v34; /*0x57e5bf*/
          }
          if ( v28 + v30 >= (int)&right->__pad_0[v29] ) /*0x57e5cb*/
            v35 = v59; /*0x57e5d9*/
          else
            v35 = &right->__pad_0[v29 - v28 + 1]; /*0x57e5d3*/
          if ( (int)bottom + v31 < v52[0] + *(_DWORD *)aP1.__pad_0 ) /*0x57e5ec*/
            bottom = (IUnknown *)(v52[0] + *(_DWORD *)aP1.__pad_0 - v31 + 1); /*0x57e5f1*/
          v5 = *(_DWORD **)&aP1.__pad_0[12]; /*0x57e5f3*/
          aP1.abstractFlags = v31; /*0x57e5f7*/
          aP1.uniqueId = v28; /*0x57e5fb*/
          aP1.nextArrayIndex = (int)v35; /*0x57e5ff*/
          aP1.referenceCount = (int)bottom; /*0x57e603*/
        }
      }
      v36 = (int *)Rect::Union((IUnknown *)&aP1.uniqueId, (const RECT *)v47, (const RECT *)v48); /*0x57e654*/
      v46 = (AbstractClass *)v36[3]; /*0x57e65f*/
      v45 = (AbstractClass *)v36[2]; /*0x57e664*/
      v37 = CellStruct::Copy(v36, (IUnknown *)v52); /*0x57e672*/
      v38 = (IUnknown *)Coord2D::Sub(v37, &aP1, (IUnknown *)var88); /*0x57e679*/
      v39 = Rect::Construct(v58, v38, v45, v46); /*0x57e683*/
      v57 = *(IUnknown **)v39->__pad_0; /*0x57e691*/
      v54 = *(_DWORD *)&v39->__pad_0[4]; /*0x57e698*/
      v55 = *(char **)&v39->__pad_0[8]; /*0x57e69f*/
      v56 = *(_DWORD *)&v39->__pad_0[12]; /*0x57e6a8*/
      Cell::CreateCrater( /*0x57e6c8*/
        *(_DWORD *)v39->__pad_0,
        *(_DWORD *)&v39->__pad_0[4],
        *(_DWORD *)&v39->__pad_0[8],
        *(_DWORD *)&v39->__pad_0[12],
        0);
      if ( v23 == 101 ) /*0x57e6d0*/
      {
        LOBYTE(aP1.NeedsSaveOrLink) = 1; /*0x57e6e4*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], aP0); /*0x57e6e8*/
        v40 = LOWORD(aP0->field_0) + 1; /*0x57e6f4*/
        HIWORD(right) = HIWORD(aP0->field_0); /*0x57e6f6*/
        LOWORD(right) = v40; /*0x57e6fb*/
        *(_DWORD *)aP1.__pad_0 = right; /*0x57e708*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57e712*/
        right = (ObjectClass *)1; /*0x57e723*/
        *(_DWORD *)aP1.__pad_0 = CellStruct::Sub((__int16 *)aP0, (IUnknown *)v52, (IUnknown *)&right)->field_0; /*0x57e73a*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57e744*/
      }
      House::AnnounceUpgrade((int)v5, (IUnknown *)0xFFFFFFFF); /*0x57e74c*/
      v41 = *(ObjectClass **)&aP1.__pad_0[8]; /*0x57e751*/
      House::AnnounceUpgrade(*(int *)&aP1.__pad_0[8], (IUnknown *)0xFFFFFFFF); /*0x57e758*/
      v42 = (ObjectClass *)v50; /*0x57e75e*/
      House::AnnounceUpgrade(v50, (IUnknown *)0xFFFFFFFF); /*0x57e764*/
      v43 = (IUnknown *)aP1.NeedsSaveOrLink; /*0x57e769*/
      Cell::SearchEnemies((int)v5, (IUnknown *)aP1.NeedsSaveOrLink); /*0x57e770*/
      Cell::SearchEnemies((int)v41, v43); /*0x57e778*/
      LOBYTE(v2) = Cell::SearchEnemies((int)v42, v43); /*0x57e780*/
    }
  }
  return v2; /*0x57e785*/
}
}
} // namespace gamemd

// 0x57E7A0
namespace gamemd {
int CreateCliffBridgeMap(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall CreateCliffBridgeMap(IUnknown *aP0)
{
  IUnknown *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  ObjectClass *v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // eax
  IUnknown *PlacementRect; // esi
  ObjectClass **StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  ObjectClass *v16; // edi
  int v17; // eax
  int v18; // esi
  ObjectClass *v19; // ecx
  unsigned int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  IUnknown *v24; // edi
  int v25; // edx
  IUnknown *v26; // esi
  int *v27; // eax
  ObjectClass *left; // edx
  int v29; // edi
  ObjectClass *v30; // ecx
  int v31; // esi
  int v32; // eax
  IUnknown *v33; // esi
  IUnknown *v34; // esi
  int v35; // eax
  _DWORD *v36; // eax
  IUnknown *v37; // eax
  AbstractClass *v38; // eax
  IUnknown *v39; // eax
  int v40; // ebp
  IUnknown *v41; // esi
  AbstractClass *v42; // [esp-8h] [ebp-E4h]
  ObjectClass *v43; // [esp-4h] [ebp-E0h]
  IUnknown *v44; // [esp+0h] [ebp-DCh]
  IUnknown *v45; // [esp+4h] [ebp-D8h]
  IUnknown *v46; // [esp+10h] [ebp-CCh]
  _DWORD *v47; // [esp+10h] [ebp-CCh]
  IUnknown *right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  AbstractClass aP1; // [esp+1Ch] [ebp-C0h] BYREF
  IUnknown *v51; // [esp+40h] [ebp-9Ch]
  _DWORD v52[2]; // [esp+44h] [ebp-98h] BYREF
  int v53; // [esp+4Ch] [ebp-90h]
  IUnknown *bottom; // [esp+50h] [ebp-8Ch]
  ObjectClass *v58; // [esp+54h] [ebp-88h]
  int v56; // [esp+58h] [ebp-84h]
  ObjectClass *v57; // [esp+5Ch] [ebp-80h]
  int var7C; // [esp+60h] [ebp-7Ch]
  _DWORD v59[2]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v60[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v61[4]; // [esp+ACh] [ebp-30h] BYREF
  int v62[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57e7ad*/
  result = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0) + 17); /*0x57e7bc*/
  if ( result >= 205 && result <= 232 ) /*0x57e7cf*/
  {
    v3 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x57e7e6*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x57e7f6*/
    {
      v5 = (_DWORD *)v4; /*0x57e7f8*/
      v49 = v4; /*0x57e7fa*/
    }
    else
    {
      v6 = (ObjectClass *)aP0->field_0; /*0x57e800*/
      v49 = (int)g_CellClassArray; /*0x57e803*/
      v5 = g_CellClassArray; /*0x57e80b*/
      g_Map_GlobalCellIndex = (IUnknown *)v6; /*0x57e80f*/
    }
    v46 = (IUnknown *)(aP0->field_0 - 0x10000); /*0x57e823*/
    v7 = SLOWORD(aP0->field_0) + (SHIWORD(v46) << 9); /*0x57e831*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) != 0 ) /*0x57e841*/
    {
      *(_DWORD *)&aP1.__pad_0[8] = v8; /*0x57e843*/
    }
    else
    {
      *(_DWORD *)&aP1.__pad_0[8] = g_CellClassArray; /*0x57e84d*/
      g_Map_GlobalCellIndex = v46; /*0x57e855*/
    }
    v9 = SLOWORD(aP0->field_0) + ((__int16)((unsigned int)(aP0->field_0 + 0x10000) >> 16) << 9); /*0x57e877*/
    if ( v9 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v9)) != 0 ) /*0x57e887*/
    {
      v47 = v10; /*0x57e889*/
    }
    else
    {
      v47 = g_CellClassArray; /*0x57e893*/
      g_Map_GlobalCellIndex = (IUnknown *)(aP0->field_0 + 0x10000); /*0x57e89b*/
    }
    LOBYTE(v51) = 0; /*0x57e8a8*/
    PlacementRect = (IUnknown *)BuildingClass::GetPlacementRect((int)v5, (IUnknown *)v52); /*0x57e8b6*/
    StartCoords = (ObjectClass **)House::GetStartCoords((int)v5, (IUnknown *)&aP1.abstractFlags); /*0x57e8bb*/
    if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x57e8d0*/
    {
      v19 = (ObjectClass *)PlacementRect->field_0; /*0x57e956*/
      v15 = PlacementRect->field_4; /*0x57e958*/
      v16 = (ObjectClass *)PlacementRect->field_8; /*0x57e95b*/
      v17 = PlacementRect->field_C; /*0x57e95e*/
    }
    else
    {
      right = (IUnknown *)PlacementRect->field_8; /*0x57e8db*/
      if ( (int)right <= 0 || (*(_DWORD *)aP1.__pad_0 = PlacementRect->field_C, *(int *)aP1.__pad_0 <= 0) ) /*0x57e8ea*/
      {
        v19 = *StartCoords; /*0x57e949*/
        v15 = (int)StartCoords[1]; /*0x57e94b*/
        v16 = StartCoords[2]; /*0x57e94e*/
        v17 = (int)StartCoords[3]; /*0x57e951*/
      }
      else
      {
        v13 = (int)*StartCoords; /*0x57e8ec*/
        v14 = PlacementRect->field_0; /*0x57e8ee*/
        v15 = (int)StartCoords[1]; /*0x57e8f0*/
        v16 = StartCoords[2]; /*0x57e8f3*/
        v17 = (int)StartCoords[3]; /*0x57e8f6*/
        if ( v13 > PlacementRect->field_0 ) /*0x57e8fb*/
        {
          v16 = (ObjectClass *)((char *)v16 + v13 - v14); /*0x57e8ff*/
          v13 = PlacementRect->field_0; /*0x57e901*/
        }
        v18 = PlacementRect->field_4; /*0x57e903*/
        *(_DWORD *)&aP1.__pad_0[12] = v18; /*0x57e908*/
        if ( v15 > v18 ) /*0x57e90c*/
        {
          v17 += v15 - v18; /*0x57e910*/
          v15 = v18; /*0x57e912*/
        }
        if ( (int)&v16->__pad_0[v13] < (int)right + v14 ) /*0x57e91c*/
          v16 = (ObjectClass *)((char *)&right->field_0 + v14 - v13 + 1); /*0x57e924*/
        if ( v17 + v15 < *(_DWORD *)aP1.__pad_0 + *(_DWORD *)&aP1.__pad_0[12] ) /*0x57e937*/
          v17 = *(_DWORD *)aP1.__pad_0 + *(_DWORD *)&aP1.__pad_0[12] - v15 + 1; /*0x57e93c*/
        v19 = (ObjectClass *)v13; /*0x57e93e*/
        v1 = aP0; /*0x57e940*/
      }
    }
    v58 = v19; /*0x57e961*/
    v60[2] = 213; /*0x57e96a*/
    v60[6] = 213; /*0x57e96e*/
    var7C = v17; /*0x57e97a*/
    v60[8] = 212; /*0x57e981*/
    v60[9] = 212; /*0x57e988*/
    v56 = v15; /*0x57e991*/
    v57 = v16; /*0x57e995*/
    v60[0] = -1; /*0x57e999*/
    v60[1] = 210; /*0x57e99d*/
    v60[3] = -1; /*0x57e9a5*/
    v60[4] = 209; /*0x57e9a9*/
    v60[5] = 211; /*0x57e9b1*/
    v60[7] = -1; /*0x57e9bc*/
    v60[10] = 231; /*0x57e9c3*/
    memset(&v60[11], 255, 20); /*0x57e9ce*/
    result = Map_Create_57CAB0(v1); /*0x57e9f1*/
    v20 = SLOWORD(v1->field_0) + (SHIWORD(v1->field_0) << 9); /*0x57ea01*/
    if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x57ea18*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v1->field_0; /*0x57ea1d*/
      v21 = g_CellClassArray; /*0x57ea23*/
    }
    v22 = v21[17]; /*0x57ea28*/
    if ( result > 0 ) /*0x57ea2d*/
    {
      if ( v22 < 223 ) /*0x57ea39*/
      {
        v23 = v60[result]; /*0x57ea57*/
        if ( v22 == v23 ) /*0x57ea5d*/
          return result; /*0x57ea5d*/
      }
      else if ( v22 == 223 ) /*0x57ea3b*/
      {
        v23 = 224; /*0x57ea3d*/
      }
      else
      {
        if ( v22 != 225 ) /*0x57ea4a*/
          return result; /*0x57ea4a*/
        v23 = 226; /*0x57ea50*/
      }
      v24 = (IUnknown *)v49; /*0x57ea63*/
      v25 = *(_DWORD *)&aP1.__pad_0[8]; /*0x57ea67*/
      *(_DWORD *)(v49 + 68) = v23; /*0x57ea6f*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57ea72*/
      v47[17] = v23; /*0x57ea75*/
      v59[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x57ea83*/
      v59[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x57ea8e*/
      v26 = (IUnknown *)House::GetStartCoords((int)v24, (IUnknown *)v62); /*0x57eaa4*/
      v27 = BuildingClass::GetPlacementRect((int)v24, (IUnknown *)v61); /*0x57eaa6*/
      if ( v26->field_8 <= 0 || v26->field_C <= 0 ) /*0x57eabb*/
      {
        aP1.abstractFlags = *v27; /*0x57eb90*/
        aP1.nextArrayIndex = v27[1]; /*0x57eb97*/
        aP1.referenceCount = v27[2]; /*0x57eb9e*/
        aP1.NeedsSaveOrLink = (void *)v27[3]; /*0x57eba5*/
      }
      else
      {
        right = (IUnknown *)v27[2]; /*0x57eac6*/
        if ( (int)right <= 0 || (*(_DWORD *)&aP1.__pad_0[12] = v27[3], *(int *)&aP1.__pad_0[12] <= 0) ) /*0x57ead9*/
        {
          aP1.abstractFlags = v26->field_0; /*0x57eb73*/
          aP1.nextArrayIndex = v26->field_4; /*0x57eb7a*/
          aP1.referenceCount = v26->field_8; /*0x57eb81*/
          aP1.NeedsSaveOrLink = (void *)v26->field_C; /*0x57eb88*/
        }
        else
        {
          left = (ObjectClass *)v26->field_0; /*0x57eae2*/
          v29 = v26->field_4; /*0x57eae4*/
          v53 = v26->field_8; /*0x57eae7*/
          bottom = (IUnknown *)v26->field_C; /*0x57eaee*/
          v30 = (ObjectClass *)*v27; /*0x57eaf2*/
          if ( (int)left > *v27 ) /*0x57eaf6*/
          {
            v31 = (char *)left - (char *)v30 + v53; /*0x57eafe*/
            left = (ObjectClass *)*v27; /*0x57eb00*/
            v53 = v31; /*0x57eb02*/
          }
          v32 = v27[1]; /*0x57eb06*/
          *(_DWORD *)aP1.__pad_0 = v32; /*0x57eb0b*/
          if ( v29 > v32 ) /*0x57eb0f*/
          {
            v33 = (IUnknown *)((char *)bottom + v29 - v32); /*0x57eb17*/
            v29 = v32; /*0x57eb19*/
            bottom = v33; /*0x57eb1b*/
          }
          if ( (int)&left->__pad_0[v53] < (int)((char *)right + (int)v30) ) /*0x57eb2d*/
            v53 = (int)&right->field_0 + (char *)v30 - (char *)left + 1; /*0x57eb39*/
          v34 = bottom; /*0x57eb45*/
          if ( (int)bottom + v29 < *(_DWORD *)&aP1.__pad_0[12] + *(_DWORD *)aP1.__pad_0 ) /*0x57eb50*/
            v34 = (IUnknown *)(*(_DWORD *)&aP1.__pad_0[12] + *(_DWORD *)aP1.__pad_0 - v29 + 1); /*0x57eb55*/
          aP1.abstractFlags = (int)left; /*0x57eb57*/
          aP1.nextArrayIndex = v29; /*0x57eb5f*/
          v24 = (IUnknown *)v49; /*0x57eb63*/
          aP1.referenceCount = v53; /*0x57eb67*/
          aP1.NeedsSaveOrLink = v34; /*0x57eb6b*/
        }
      }
      v35 = Rect::Union((IUnknown *)&aP1.abstractFlags, (const RECT *)v44, (const RECT *)v45); /*0x57ebb9*/
      v43 = *(ObjectClass **)(v35 + 12); /*0x57ebc4*/
      v42 = *(AbstractClass **)(v35 + 8); /*0x57ebc9*/
      v36 = CellStruct::Copy((int *)v35, (IUnknown *)&aP1.__pad_0[12]); /*0x57ebd7*/
      v37 = (IUnknown *)Coord2D::Sub(v36, &aP1, (IUnknown *)v59); /*0x57ebde*/
      v38 = Rect::Construct(v52, v37, v42, (AbstractClass *)v43); /*0x57ebe8*/
      v58 = *(ObjectClass **)v38->__pad_0; /*0x57ebf6*/
      v56 = *(_DWORD *)&v38->__pad_0[4]; /*0x57ebfd*/
      v57 = *(ObjectClass **)&v38->__pad_0[8]; /*0x57ec04*/
      var7C = *(_DWORD *)&v38->__pad_0[12]; /*0x57ec0d*/
      Cell::CreateCrater( /*0x57ec2d*/
        *(_DWORD *)v38->__pad_0,
        *(_DWORD *)&v38->__pad_0[4],
        *(_DWORD *)&v38->__pad_0[8],
        *(_DWORD *)&v38->__pad_0[12],
        0);
      if ( v23 == 231 ) /*0x57ec38*/
      {
        LOBYTE(v51) = 1; /*0x57ec45*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], v1); /*0x57ec49*/
        right = (IUnknown *)0x10000; /*0x57ec5a*/
        *(_DWORD *)aP1.__pad_0 = CellStruct::Add(v1, (IUnknown *)&aP1.__pad_0[12], (IUnknown *)&right)->field_0; /*0x57ec77*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57ec7b*/
        v39 = (IUnknown *)CellStruct::Set((rc_ptr_base *)&aP1.__pad_0[12], 0, 1); /*0x57ec87*/
        *(_DWORD *)aP1.__pad_0 = CellStruct::Sub((__int16 *)v1, (IUnknown *)&right, v39)->field_0; /*0x57eca5*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57eca9*/
      }
      House::AnnounceUpgrade((int)v24, (IUnknown *)0xFFFFFFFF); /*0x57ecb2*/
      v40 = *(_DWORD *)&aP1.__pad_0[8]; /*0x57ecb7*/
      House::AnnounceUpgrade(*(int *)&aP1.__pad_0[8], (IUnknown *)0xFFFFFFFF); /*0x57ecbf*/
      House::AnnounceUpgrade((int)v47, (IUnknown *)0xFFFFFFFF); /*0x57eccc*/
      v41 = v51; /*0x57ecd1*/
      Cell::SearchEnemies((int)v24, v51); /*0x57ecd8*/
      Cell::SearchEnemies(v40, v41); /*0x57ece0*/
      return Cell::SearchEnemies((int)v47, v41); /*0x57ece8*/
    }
  }
  return result; /*0x57eced*/
}
}
} // namespace gamemd

// 0x57ED00
namespace gamemd {
char CreateCliffStraightBridgeMap(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall CreateCliffStraightBridgeMap(IUnknown *aP0)
{
  IUnknown *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  ObjectClass *v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  ObjectClass *v11; // eax
  ObjectClass *v12; // edx
  int *PlacementRect; // esi
  IUnknown **StartCoords; // eax
  IUnknown *v15; // ebp
  int v16; // ecx
  int v17; // edx
  char *v18; // edi
  int v19; // eax
  int v20; // esi
  IUnknown *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  ObjectClass *v24; // edx
  ObjectClass *v25; // eax
  IUnknown *v26; // esi
  int *v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // ebp
  int v31; // edi
  IUnknown *bottom; // esi
  bool v33; // cc
  int v34; // eax
  char *v35; // ecx
  int *v36; // eax
  _DWORD *v37; // eax
  IUnknown *v38; // eax
  AbstractClass *v39; // eax
  __int16 v40; // cx
  ObjectClass *v41; // ebx
  ObjectClass *v42; // edi
  IUnknown *v43; // esi
  AbstractClass *v45; // [esp-8h] [ebp-E4h]
  AbstractClass *v46; // [esp-4h] [ebp-E0h]
  ObjectClass *v47; // [esp+0h] [ebp-DCh]
  MouseClass *v48; // [esp+4h] [ebp-D8h]
  ObjectClass *right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  AbstractClass aP1; // [esp+18h] [ebp-C4h] BYREF
  _DWORD v52[2]; // [esp+3Ch] [ebp-A0h] BYREF
  IUnknown *v57; // [esp+44h] [ebp-98h]
  int v54; // [esp+48h] [ebp-94h]
  char *v55; // [esp+4Ch] [ebp-90h]
  int v56; // [esp+50h] [ebp-8Ch]
  _DWORD var88[2]; // [esp+54h] [ebp-88h] BYREF
  _DWORD v58[2]; // [esp+5Ch] [ebp-80h] BYREF
  char *v59; // [esp+64h] [ebp-78h]
  _DWORD v60[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v61[4]; // [esp+ACh] [ebp-30h] BYREF
  int v62[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57ed0c*/
  v2 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0) + 17); /*0x57ed1c*/
  if ( v2 >= 205 && v2 <= 232 ) /*0x57ed2f*/
  {
    v3 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x57ed4a*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x57ed5a*/
    {
      v5 = v4; /*0x57ed5c*/
    }
    else
    {
      v5 = g_CellClassArray; /*0x57ed62*/
      g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x57ed64*/
    }
    v6 = LOWORD(aP0->field_0) - 1; /*0x57ed70*/
    HIWORD(v50) = HIWORD(aP0->field_0); /*0x57ed72*/
    LOWORD(v50) = v6; /*0x57ed7a*/
    *(_DWORD *)&aP1.__pad_0[12] = v5; /*0x57ed7f*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57ed89*/
    if ( v7 < 0x40000 && (v8 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) != 0 ) /*0x57ed99*/
    {
      *(_DWORD *)&aP1.__pad_0[8] = v8; /*0x57ed9b*/
    }
    else
    {
      *(_DWORD *)&aP1.__pad_0[8] = g_CellClassArray; /*0x57eda5*/
      g_Map_GlobalCellIndex = (IUnknown *)v50; /*0x57eda9*/
    }
    v9 = LOWORD(aP0->field_0) + 1; /*0x57edb5*/
    HIWORD(v50) = HIWORD(aP0->field_0); /*0x57edb7*/
    LOWORD(v50) = v9; /*0x57edbf*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57edca*/
    if ( v10 < 0x40000 && (v11 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x57edda*/
    {
      v50 = (int)v11; /*0x57eddc*/
    }
    else
    {
      v12 = (ObjectClass *)v50; /*0x57ede2*/
      v50 = (int)g_CellClassArray; /*0x57ede6*/
      g_Map_GlobalCellIndex = (IUnknown *)v12; /*0x57edea*/
    }
    LOBYTE(aP1.NeedsSaveOrLink) = 0; /*0x57edf7*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, (IUnknown *)v58); /*0x57ee05*/
    StartCoords = (IUnknown **)House::GetStartCoords((int)v5, (IUnknown *)&aP1.uniqueId); /*0x57ee0a*/
    if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x57ee1f*/
    {
      v21 = (IUnknown *)*PlacementRect; /*0x57eeac*/
      v17 = PlacementRect[1]; /*0x57eeae*/
      v18 = (char *)PlacementRect[2]; /*0x57eeb1*/
      v19 = PlacementRect[3]; /*0x57eeb4*/
    }
    else
    {
      right = (ObjectClass *)PlacementRect[2]; /*0x57ee2a*/
      if ( (int)right <= 0 || (*(_DWORD *)aP1.__pad_0 = PlacementRect[3], *(int *)aP1.__pad_0 <= 0) ) /*0x57ee39*/
      {
        v21 = *StartCoords; /*0x57ee9f*/
        v17 = (int)StartCoords[1]; /*0x57eea1*/
        v18 = (char *)StartCoords[2]; /*0x57eea4*/
        v19 = (int)StartCoords[3]; /*0x57eea7*/
      }
      else
      {
        v15 = *StartCoords; /*0x57ee3b*/
        v16 = *PlacementRect; /*0x57ee3d*/
        v17 = (int)StartCoords[1]; /*0x57ee3f*/
        v18 = (char *)StartCoords[2]; /*0x57ee42*/
        v19 = (int)StartCoords[3]; /*0x57ee45*/
        if ( (int)v15 > *PlacementRect ) /*0x57ee4a*/
        {
          v18 = &v18[(_DWORD)v15 - v16]; /*0x57ee4e*/
          v15 = (IUnknown *)*PlacementRect; /*0x57ee50*/
        }
        v20 = PlacementRect[1]; /*0x57ee52*/
        v52[0] = v20; /*0x57ee57*/
        if ( v17 > v20 ) /*0x57ee5b*/
        {
          v19 += v17 - v20; /*0x57ee5f*/
          v17 = v20; /*0x57ee61*/
        }
        if ( (int)((char *)v15 + (int)v18) < (int)&right->__pad_0[v16] ) /*0x57ee6e*/
          v18 = &right->__pad_0[v16 - (_DWORD)v15 + 1]; /*0x57ee76*/
        if ( v19 + v17 < *(_DWORD *)aP1.__pad_0 + v52[0] ) /*0x57ee89*/
          v19 = *(_DWORD *)aP1.__pad_0 + v52[0] - v17 + 1; /*0x57ee8e*/
        v1 = aP0; /*0x57ee90*/
        v21 = v15; /*0x57ee97*/
        v5 = *(_DWORD **)&aP1.__pad_0[12]; /*0x57ee99*/
      }
    }
    v56 = v19; /*0x57eeb7*/
    v55 = v18; /*0x57eec0*/
    v60[2] = 222; /*0x57eec4*/
    v60[6] = 222; /*0x57eec8*/
    v57 = v21; /*0x57eecf*/
    v54 = v17; /*0x57eedd*/
    v60[0] = -1; /*0x57eee1*/
    v60[1] = 219; /*0x57eee5*/
    v60[3] = -1; /*0x57eeed*/
    v60[4] = 218; /*0x57eef1*/
    v60[5] = 220; /*0x57eef9*/
    v60[7] = -1; /*0x57ef04*/
    v60[8] = 221; /*0x57ef0b*/
    v60[9] = 221; /*0x57ef12*/
    v60[10] = 232; /*0x57ef19*/
    memset(&v60[11], 255, 20); /*0x57ef24*/
    LOBYTE(v2) = Map_Create_57CBE0((__int16 *)v1); /*0x57ef47*/
    v22 = v5[17]; /*0x57ef4c*/
    if ( v2 > 0 ) /*0x57ef51*/
    {
      if ( v22 < 227 ) /*0x57ef5d*/
      {
        v23 = v60[v2]; /*0x57ef7b*/
        if ( v23 == v22 ) /*0x57ef81*/
          return v2; /*0x57ef81*/
      }
      else if ( v22 == 227 ) /*0x57ef5f*/
      {
        v23 = 228; /*0x57ef61*/
      }
      else
      {
        if ( v22 != 229 ) /*0x57ef6e*/
          return v2; /*0x57ef6e*/
        v23 = 230; /*0x57ef74*/
      }
      v24 = *(ObjectClass **)&aP1.__pad_0[8]; /*0x57ef87*/
      v25 = (ObjectClass *)v50; /*0x57ef8b*/
      v5[17] = v23; /*0x57ef8f*/
      v24->ambientSoundController[2] = v23; /*0x57ef92*/
      v25->ambientSoundController[2] = v23; /*0x57ef95*/
      var88[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x57efa3*/
      var88[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x57efb1*/
      v26 = (IUnknown *)House::GetStartCoords((int)v5, (IUnknown *)v62); /*0x57efc4*/
      v27 = BuildingClass::GetPlacementRect((int)v5, (IUnknown *)v61); /*0x57efc6*/
      if ( v26->field_8 <= 0 || v26->field_C <= 0 ) /*0x57efdb*/
      {
        aP1.uniqueId = *v27; /*0x57f095*/
        aP1.abstractFlags = v27[1]; /*0x57f09c*/
        aP1.nextArrayIndex = v27[2]; /*0x57f0a3*/
        aP1.referenceCount = v27[3]; /*0x57f0aa*/
      }
      else
      {
        right = (ObjectClass *)v27[2]; /*0x57efe6*/
        if ( (int)right <= 0 || (v52[0] = v27[3], v52[0] <= 0) ) /*0x57eff9*/
        {
          aP1.uniqueId = v26->field_0; /*0x57f078*/
          aP1.abstractFlags = v26->field_4; /*0x57f07f*/
          aP1.nextArrayIndex = v26->field_8; /*0x57f086*/
          aP1.referenceCount = v26->field_C; /*0x57f08d*/
        }
        else
        {
          v28 = v26->field_0; /*0x57effb*/
          v29 = *v27; /*0x57effd*/
          v30 = v26->field_8; /*0x57efff*/
          v31 = v26->field_4; /*0x57f002*/
          bottom = (IUnknown *)v26->field_C; /*0x57f005*/
          v33 = v28 <= *v27; /*0x57f008*/
          v59 = (char *)v30; /*0x57f00a*/
          if ( !v33 ) /*0x57f00e*/
          {
            v30 += v28 - v29; /*0x57f012*/
            v28 = v29; /*0x57f014*/
            v59 = (char *)v30; /*0x57f016*/
          }
          v34 = v27[1]; /*0x57f01a*/
          *(_DWORD *)aP1.__pad_0 = v34; /*0x57f01f*/
          if ( v31 > v34 ) /*0x57f023*/
          {
            bottom = (IUnknown *)((char *)bottom + v31 - v34); /*0x57f027*/
            v31 = v34; /*0x57f029*/
          }
          if ( v28 + v30 >= (int)&right->__pad_0[v29] ) /*0x57f035*/
            v35 = v59; /*0x57f043*/
          else
            v35 = &right->__pad_0[v29 - v28 + 1]; /*0x57f03d*/
          if ( (int)bottom + v31 < v52[0] + *(_DWORD *)aP1.__pad_0 ) /*0x57f056*/
            bottom = (IUnknown *)(v52[0] + *(_DWORD *)aP1.__pad_0 - v31 + 1); /*0x57f05b*/
          v5 = *(_DWORD **)&aP1.__pad_0[12]; /*0x57f05d*/
          aP1.abstractFlags = v31; /*0x57f061*/
          aP1.uniqueId = v28; /*0x57f065*/
          aP1.nextArrayIndex = (int)v35; /*0x57f069*/
          aP1.referenceCount = (int)bottom; /*0x57f06d*/
        }
      }
      v36 = (int *)Rect::Union((IUnknown *)&aP1.uniqueId, (const RECT *)v47, (const RECT *)v48); /*0x57f0be*/
      v46 = (AbstractClass *)v36[3]; /*0x57f0c9*/
      v45 = (AbstractClass *)v36[2]; /*0x57f0ce*/
      v37 = CellStruct::Copy(v36, (IUnknown *)v52); /*0x57f0dc*/
      v38 = (IUnknown *)Coord2D::Sub(v37, &aP1, (IUnknown *)var88); /*0x57f0e3*/
      v39 = Rect::Construct(v58, v38, v45, v46); /*0x57f0ed*/
      v57 = *(IUnknown **)v39->__pad_0; /*0x57f0fb*/
      v54 = *(_DWORD *)&v39->__pad_0[4]; /*0x57f102*/
      v55 = *(char **)&v39->__pad_0[8]; /*0x57f109*/
      v56 = *(_DWORD *)&v39->__pad_0[12]; /*0x57f112*/
      Cell::CreateCrater( /*0x57f132*/
        *(_DWORD *)v39->__pad_0,
        *(_DWORD *)&v39->__pad_0[4],
        *(_DWORD *)&v39->__pad_0[8],
        *(_DWORD *)&v39->__pad_0[12],
        0);
      if ( v23 == 232 ) /*0x57f13d*/
      {
        LOBYTE(aP1.NeedsSaveOrLink) = 1; /*0x57f151*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], aP0); /*0x57f155*/
        v40 = LOWORD(aP0->field_0) + 1; /*0x57f161*/
        HIWORD(right) = HIWORD(aP0->field_0); /*0x57f163*/
        LOWORD(right) = v40; /*0x57f168*/
        *(_DWORD *)aP1.__pad_0 = right; /*0x57f175*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57f17f*/
        right = (ObjectClass *)1; /*0x57f190*/
        *(_DWORD *)aP1.__pad_0 = CellStruct::Sub((__int16 *)aP0, (IUnknown *)v52, (IUnknown *)&right)->field_0; /*0x57f1a7*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x57f1b1*/
      }
      House::AnnounceUpgrade((int)v5, (IUnknown *)0xFFFFFFFF); /*0x57f1b9*/
      v41 = *(ObjectClass **)&aP1.__pad_0[8]; /*0x57f1be*/
      House::AnnounceUpgrade(*(int *)&aP1.__pad_0[8], (IUnknown *)0xFFFFFFFF); /*0x57f1c5*/
      v42 = (ObjectClass *)v50; /*0x57f1cb*/
      House::AnnounceUpgrade(v50, (IUnknown *)0xFFFFFFFF); /*0x57f1d1*/
      v43 = (IUnknown *)aP1.NeedsSaveOrLink; /*0x57f1d6*/
      Cell::SearchEnemies((int)v5, (IUnknown *)aP1.NeedsSaveOrLink); /*0x57f1dd*/
      Cell::SearchEnemies((int)v41, v43); /*0x57f1e5*/
      LOBYTE(v2) = Cell::SearchEnemies((int)v42, v43); /*0x57f1ed*/
    }
  }
  return v2; /*0x57f1f2*/
}
}
} // namespace gamemd
