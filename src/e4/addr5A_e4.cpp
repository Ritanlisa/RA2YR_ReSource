// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5A1C70_e4.hpp"
#include "e4/classes/E4Recv_5A6BA0_e4.hpp"
#include "e4/classes/E4Recv_5A9920_e4.hpp"
#include "e4/classes/E4Recv_5A9960_e4.hpp"
#include "e4/classes/E4Recv_5A9980_e4.hpp"
#include "e4/classes/E4Recv_5A99F0_e4.hpp"
#include "e4/classes/E4Recv_5A9BF0_e4.hpp"
#include "e4/classes/E4Recv_5AE500_e4.hpp"
#include "e4/classes/E4Recv_5AE530_e4.hpp"
#include "e4/classes/E4Recv_5AEC40_e4.hpp"
#include "e4/classes/E4Recv_5AED50_e4.hpp"
#include "e4/classes/E4Recv_5AEE50_e4.hpp"
#include "e4/classes/E4Recv_5AF000_e4.hpp"
#include "e4/classes/E4Recv_5AF120_e4.hpp"
#include "e4/classes/E4Recv_5AF2C0_e4.hpp"
#include "e4/classes/E4Recv_5AF310_e4.hpp"
#include "e4/classes/E4Recv_5AF360_e4.hpp"
#include "e4/classes/E4Recv_5AF3B0_e4.hpp"
#include "e4/classes/E4Recv_5AF470_e4.hpp"
#include "e4/classes/E4Recv_5AF550_e4.hpp"
#include "e4/classes/E4Recv_5AFF50_e4.hpp"

// 0x5A1350
namespace gamemd {
int Terrain_SelectTileVariant(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Terrain_SelectTileVariant(int a1)
{
  int v1; // eax
  unsigned int v2; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ecx
  __int64 v20; // [esp+4h] [ebp-8h]
  __int64 v21; // [esp+4h] [ebp-8h]
  __int64 v22; // [esp+4h] [ebp-8h]
  __int64 v23; // [esp+4h] [ebp-8h]
  __int64 v24; // [esp+4h] [ebp-8h]
  __int64 v25; // [esp+4h] [ebp-8h]
  __int64 v26; // [esp+4h] [ebp-8h]
  __int64 v27; // [esp+4h] [ebp-8h]
  __int64 v28; // [esp+4h] [ebp-8h]
  __int64 v29; // [esp+4h] [ebp-8h]
  __int64 v30; // [esp+4h] [ebp-8h]
  __int64 v31; // [esp+4h] [ebp-8h]
  __int64 v32; // [esp+4h] [ebp-8h]
  __int64 v33; // [esp+4h] [ebp-8h]
  __int64 v34; // [esp+4h] [ebp-8h]

  v1 = a1 - unk_AA1020; /*0x5a135e*/
  switch ( a1 - unk_AA1020 ) /*0x5a1374*/
  {
    case 4: /*0x5a1374*/
      do /*0x5a13a7*/
      {
        v20 = (unsigned int)Random::State(&g_Randomizer); /*0x5a137d*/
        v2 = Math::RoundToInt((double)v20 * 4.656612874161595e-10 + 1.0); /*0x5a139f*/
      }
      while ( v2 > 2 ); /*0x5a13a7*/
      return unk_AA1020 + v2 + 4; /*0x5a13b8*/
    case 5: /*0x5a1374*/
      do /*0x5a13e1*/
      {
        v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5a13bd*/
        v4 = Math::RoundToInt((double)v21 * 4.656612874161595e-10); /*0x5a13d9*/
      }
      while ( v4 > 1 ); /*0x5a13e1*/
      return unk_AA1020 + 2 * v4 + 4; /*0x5a13f3*/
    case 6: /*0x5a1374*/
      do /*0x5a141c*/
      {
        v22 = (unsigned int)Random::State(&g_Randomizer); /*0x5a13f8*/
        v5 = Math::RoundToInt((double)v22 * 4.656612874161595e-10); /*0x5a1414*/
      }
      while ( v5 > 1 ); /*0x5a141c*/
      return unk_AA1020 + v5 + 4; /*0x5a142d*/
    case 8: /*0x5a1374*/
      do /*0x5a145c*/
      {
        v23 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1432*/
        v6 = Math::RoundToInt((double)v23 * 4.656612874161595e-10 + 1.0); /*0x5a1454*/
      }
      while ( v6 > 2 ); /*0x5a145c*/
      return unk_AA1020 + v6 + 8; /*0x5a146d*/
    case 9: /*0x5a1374*/
      do /*0x5a1496*/
      {
        v24 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1472*/
        v7 = Math::RoundToInt((double)v24 * 4.656612874161595e-10); /*0x5a148e*/
      }
      while ( v7 > 1 ); /*0x5a1496*/
      return unk_AA1020 + 2 * v7 + 8; /*0x5a14a8*/
    case 10: /*0x5a1374*/
      do /*0x5a14d1*/
      {
        v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a14ad*/
        v8 = Math::RoundToInt((double)v25 * 4.656612874161595e-10); /*0x5a14c9*/
      }
      while ( v8 > 1 ); /*0x5a14d1*/
      return unk_AA1020 + v8 + 8; /*0x5a14e2*/
    case 11: /*0x5a1374*/
      do /*0x5a1511*/
      {
        v26 = (unsigned int)Random::State(&g_Randomizer); /*0x5a14e7*/
        v9 = Math::RoundToInt((double)v26 * 4.656612874161595e-10 + 1.0); /*0x5a1509*/
      }
      while ( v9 > 2 ); /*0x5a1511*/
      return unk_AA1020 + v9 + 11; /*0x5a1522*/
    case 12: /*0x5a1374*/
      do /*0x5a154b*/
      {
        v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1527*/
        v10 = Math::RoundToInt((double)v27 * 4.656612874161595e-10); /*0x5a1543*/
      }
      while ( v10 > 1 ); /*0x5a154b*/
      return unk_AA1020 + 2 * v10 + 11; /*0x5a155d*/
    case 13: /*0x5a1374*/
      do /*0x5a1586*/
      {
        v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1562*/
        v11 = Math::RoundToInt((double)v28 * 4.656612874161595e-10); /*0x5a157e*/
      }
      while ( v11 > 1 ); /*0x5a1586*/
      return unk_AA1020 + v11 + 11; /*0x5a1597*/
    case 14: /*0x5a1374*/
      do /*0x5a15c6*/
      {
        v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a159c*/
        v12 = Math::RoundToInt((double)v29 * 4.656612874161595e-10 + 1.0); /*0x5a15be*/
      }
      while ( v12 > 2 ); /*0x5a15c6*/
      return unk_AA1020 + v12 + 14; /*0x5a15d7*/
    case 15: /*0x5a1374*/
      do /*0x5a1600*/
      {
        v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a15dc*/
        v13 = Math::RoundToInt((double)v30 * 4.656612874161595e-10); /*0x5a15f8*/
      }
      while ( v13 > 1 ); /*0x5a1600*/
      return unk_AA1020 + 2 * v13 + 14; /*0x5a1612*/
    case 16: /*0x5a1374*/
      do /*0x5a163b*/
      {
        v31 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1617*/
        v14 = Math::RoundToInt((double)v31 * 4.656612874161595e-10); /*0x5a1633*/
      }
      while ( v14 > 1 ); /*0x5a163b*/
      return unk_AA1020 + v14 + 14; /*0x5a164c*/
    case 22: /*0x5a1374*/
      do /*0x5a167b*/
      {
        v32 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1651*/
        v15 = Math::RoundToInt((double)v32 * 4.656612874161595e-10 + 1.0); /*0x5a1673*/
      }
      while ( v15 > 2 ); /*0x5a167b*/
      return unk_AA1020 + v15 + 22; /*0x5a168c*/
    case 23: /*0x5a1374*/
      do /*0x5a16b5*/
      {
        v33 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1691*/
        v16 = Math::RoundToInt((double)v33 * 4.656612874161595e-10); /*0x5a16ad*/
      }
      while ( v16 > 1 ); /*0x5a16b5*/
      return unk_AA1020 + 2 * v16 + 22; /*0x5a16c7*/
    case 24: /*0x5a1374*/
      do /*0x5a16f0*/
      {
        v34 = (unsigned int)Random::State(&g_Randomizer); /*0x5a16cc*/
        v17 = Math::RoundToInt((double)v34 * 4.656612874161595e-10); /*0x5a16e8*/
      }
      while ( v17 > 1 ); /*0x5a16f0*/
      return unk_AA1020 + v17 + 22; /*0x5a1701*/
    case 28: /*0x5a1374*/
      return unk_AA1020 + 29; /*0x5a1715*/
    case 29: /*0x5a1374*/
      return unk_AA1020 + 28; /*0x5a1729*/
    case 34: /*0x5a1374*/
      v18 = 2; /*0x5a172c*/
      v19 = 1; /*0x5a1731*/
      goto LABEL_37; /*0x5a1736*/
    case 35: /*0x5a1374*/
      return unk_AA1020 + 2 * Range_RandomInt(0, 1u) + 34; /*0x5a1754*/
    case 36: /*0x5a1374*/
      v18 = 1; /*0x5a1757*/
      v19 = 0; /*0x5a175c*/
LABEL_37:
      v1 = Range_RandomInt(v19, v18) + 34; /*0x5a175e*/
      return unk_AA1020 + v1; /*0x5a1763*/
    default:
      return unk_AA1020 + v1;
  }
}
}
} // namespace gamemd

// 0x5A19E0
namespace gamemd {
int ProcessRandomMapCellAdjacency()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ProcessRandomMapCellAdjacency()
{
  int result; // eax
  int i; // esi
  void *v2; // ebx
  __int16 *v3; // ebp
  __int16 *v4; // edi
  int AdjacencyFlags; // eax
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  void *NeighbourContent; // [esp+4h] [ebp-18h]
  void *v14; // [esp+8h] [ebp-14h]
  __int64 v15; // [esp+Ch] [ebp-10h]
  __int64 v16; // [esp+14h] [ebp-8h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a19e9*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a19f3*/
  for ( i = result; result; i = result )
  {
    NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 5u); /*0x5a1a12*/
    v14 = Cell::GetNeighbourContent((_DWORD *)i, 1u); /*0x5a1a1f*/
    v2 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x5a1a2c*/
    v3 = (__int16 *)Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x5a1a37*/
    v4 = (__int16 *)Cell::GetNeighbourContent((_DWORD *)i, 6u); /*0x5a1a44*/
    AdjacencyFlags = Cell::GetAdjacencyFlags(i); /*0x5a1a46*/
    if ( AdjacencyFlags == 131 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 131 || !Cell::IsEmpty(v3) ) /*0x5a1a6e*/
        goto LABEL_32; /*0x5a1a6e*/
      do /*0x5a1aa3*/
      {
        v15 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1a85*/
        v6 = Math::RoundToInt((double)v15 * 4.656612874161595e-10); /*0x5a1a9b*/
      }
      while ( v6 > 1 ); /*0x5a1aa3*/
      if ( v6 ) /*0x5a1aa7*/
        goto LABEL_32; /*0x5a1aa7*/
      *((_BYTE *)v3 + 283) -= 4; /*0x5a1ab6*/
      v7 = g_MapTileArray; /*0x5a1abc*/
      v8 = g_MapTileArray
         ? *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !g_MapTileArray ) /*0x5a1aea*/
        goto LABEL_32; /*0x5a1aea*/
      v9 = v3[18]; /*0x5a1af4*/
      v10 = unk_89C2DC * v3[19]; /*0x5a1af8*/
    }
    else if ( AdjacencyFlags == 56 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 56 || !Cell::IsEmpty(v4) ) /*0x5a1b1f*/
        goto LABEL_32; /*0x5a1b1f*/
      do /*0x5a1b54*/
      {
        v16 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1b36*/
        v11 = Math::RoundToInt((double)v16 * 4.656612874161595e-10); /*0x5a1b4c*/
      }
      while ( v11 > 1 ); /*0x5a1b54*/
      if ( v11 ) /*0x5a1b58*/
        goto LABEL_32; /*0x5a1b58*/
      *((_BYTE *)v4 + 283) -= 4; /*0x5a1b67*/
      v7 = g_MapTileArray; /*0x5a1b6d*/
      v8 = g_MapTileArray
         ? *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14)
         : -1;
      if ( !g_MapTileArray ) /*0x5a1b9b*/
        goto LABEL_32; /*0x5a1b9b*/
      v9 = v4[18]; /*0x5a1ba5*/
      v10 = unk_89C2DC * v4[19]; /*0x5a1ba9*/
    }
    else
    {
      if ( AdjacencyFlags != 224 /*0x5a1bea*/
        || Cell::GetAdjacencyFlags((int)NeighbourContent) != 224
        || Cell::GetAdjacencyFlags((int)v14) != 224
        || !Cell::IsEmpty((_DWORD *)i) )
      {
        goto LABEL_32; /*0x5a1bea*/
      }
      *(_BYTE *)(i + 283) += 4; /*0x5a1bfc*/
      v7 = g_MapTileArray; /*0x5a1c02*/
      v8 = g_MapTileArray ? *((_DWORD *)g_MapTileArray + 20 * v4[18] + 20 * unk_89C2DC * v4[19] + 14) : -1;
      if ( !g_MapTileArray ) /*0x5a1c30*/
        goto LABEL_32; /*0x5a1c30*/
      v12 = *(__int16 *)(i + 38); /*0x5a1c32*/
      v9 = *(__int16 *)(i + 36); /*0x5a1c36*/
      v10 = unk_89C2DC * v12; /*0x5a1c3a*/
    }
    v7[20 * v9 + 14 + 20 * v10] = v8; /*0x5a1c45*/
LABEL_32:
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a1c49*/
  }
  return result; /*0x5a1c60*/
}
}
} // namespace gamemd

// 0x5A1C70
namespace gamemd {
int E4Recv_5A1C70::sub_5A1C70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5A1C70(_DWORD *this)
{
  int v1; // ecx
  int v2; // eax
  int i; // edi
  void *v4; // esi
  int v5; // esi
  int v6; // ebp
  int *v7; // edi
  int j; // edi
  int v9; // esi
  int v10; // eax
  bool v11; // al
  int result; // eax
  int v13; // esi
  int v14; // edi
  void *v15; // eax
  int v16; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+Ch] [ebp-4h]

  v17 = this; /*0x5a1c7c*/
  if ( g_MapTileArray ) /*0x5a1c80*/
  {
    v1 = unk_89C2DC * unk_89C2DC; /*0x5a1c88*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1c8d*/
    {
      v2 = 0; /*0x5a1c8f*/
      do /*0x5a1cac*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v2 + 56) = -1; /*0x5a1c9a*/
        *(_DWORD *)((char *)g_MapTileArray + v2 + 60) = -1; /*0x5a1ca4*/
        v2 += 80; /*0x5a1ca8*/
        --v1; /*0x5a1cab*/
      }
      while ( v1 ); /*0x5a1cac*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x5a1cb8*/
  {
    v4 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x5a1cc0*/
    if ( v4 ) /*0x5a1cc5*/
    {
      TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + i)); /*0x5a1cc9*/
      __3_YAXPAX_Z(v4); /*0x5a1ccf*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x5a1ce5*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1cef*/
  {
    v5 = 0; /*0x5a1cf1*/
    v6 = unk_89C2DC * unk_89C2DC; /*0x5a1cf3*/
    do /*0x5a1d4f*/
    {
      v16 = *(_DWORD *)((char *)g_MapTileArray + v5); /*0x5a1d08*/
      v7 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x5a1d11*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v5 + 56) == -1 /*0x5a1d3b*/
        && (*(_WORD *)((char *)g_MapTileArray + v5) || *(_WORD *)((char *)g_MapTileArray + v5 + 2))
        && (Cell::IsGroundTypeRange(v7) || Cell::IsShore(v7)) )
      {
        RandomMap::GenerateTerrain((int)v7); /*0x5a1d46*/
      }
      v5 += 80; /*0x5a1d4b*/
      --v6; /*0x5a1d4e*/
    }
    while ( v6 ); /*0x5a1d4f*/
  }
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x5a1d5a*/
  {
    v9 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x5a1d67*/
    if ( *(_BYTE *)(v9 + 20) ) /*0x5a1d6a*/
    {
      v10 = v17[15]; /*0x5a1d75*/
      v11 = v10 == 3 || v10 == 4; /*0x5a1d86*/
      RandomMap::CollectTerrainCells( /*0x5a1da3*/
        *((_DWORD **)g_RandomMap_TerrainState + j),
        (*(_DWORD *)(v9 + 12) > 8000) + !v11 + 4);
      RandomMap::PlaceRandomMapTerrain((_DWORD *)v9); /*0x5a1daa*/
    }
  }
  result = unk_89C2DC * unk_89C2DC; /*0x5a1dbf*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1dc4*/
  {
    v13 = 0; /*0x5a1dc6*/
    v14 = unk_89C2DC * unk_89C2DC; /*0x5a1dc8*/
    do /*0x5a1e07*/
    {
      result = (int)g_MapTileArray + v13; /*0x5a1dd0*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v13 + 56) == -1 && (*(_WORD *)result || *(_WORD *)(result + 2)) ) /*0x5a1de2*/
      {
        v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)((char *)g_MapTileArray + v13)); /*0x5a1def*/
        result = RandomMap::GenerateTerrain((int)v15); /*0x5a1df6*/
        if ( result ) /*0x5a1dfd*/
          *(_BYTE *)(result + 26) = 0; /*0x5a1dff*/
      }
      v13 += 80; /*0x5a1e03*/
      --v14; /*0x5a1e06*/
    }
    while ( v14 ); /*0x5a1e07*/
  }
  return result; /*0x5a1e09*/
}
}
} // namespace gamemd

// 0x5A33F0
namespace gamemd {
int GenerateTerrainHeightMapInternal()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int GenerateTerrainHeightMapInternal()
{
  int result; // eax
  int *i; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // esi
  int j; // ebp
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // [esp+4h] [ebp-Ch] BYREF
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5a33f9*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a3403*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x5a340c*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x5a3417*/
    {
      v2 = g_MapCellHeight_Value; /*0x5a3424*/
      v3 = 0; /*0x5a342a*/
      while ( 1 ) /*0x5a3431*/
      {
        v4 = v3 & 7; /*0x5a3431*/
        v16 = i[9]; /*0x5a3434*/
        v5 = LOWORD(MEMORY[0x89F688][v4]) + v16; /*0x5a3438*/
        LOWORD(v4) = HIWORD(MEMORY[0x89F688][v4]); /*0x5a3447*/
        LOWORD(v17) = v5; /*0x5a344b*/
        HIWORD(v17) = HIWORD(v16) + v4; /*0x5a3455*/
        v16 = v17; /*0x5a345e*/
        v6 = SHIWORD(v17) + v5; /*0x5a3468*/
        if ( v6 > v2 && v5 - SHIWORD(v17) < v2 && SHIWORD(v17) - v5 < v2 && v6 <= g_MapCellCount ) /*0x5a3483*/
        {
          v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x5a348f*/
          if ( Cell::IsEmpty(v7) ) /*0x5a3496*/
          {
            v8 = 80 * ((__int16)v16 + unk_89C2DC * SHIWORD(v16)); /*0x5a34cb*/
            *(_DWORD *)((char *)g_MapTileArray + v8 + 8) = 0; /*0x5a34ce*/
            *(_DWORD *)((char *)g_MapTileArray + v8 + 12) = 1071644672; /*0x5a34dc*/
            *((_BYTE *)g_MapTileArray + 80 * (__int16)v16 + 80 * unk_89C2DC * SHIWORD(v16) + 69) = 1; /*0x5a3503*/
            goto LABEL_24; /*0x5a3508*/
          }
          v2 = g_MapCellHeight_Value; /*0x5a349f*/
        }
        if ( ++v3 >= 8 ) /*0x5a34a9*/
          goto LABEL_24; /*0x5a34a9*/
      }
    }
    if ( CellLand::IsBuildable((int)i) ) /*0x5a350f*/
    {
      v9 = g_MapCellHeight_Value; /*0x5a351c*/
      for ( j = 0; j < 8; ++j ) /*0x5a3522*/
      {
        v11 = j & 7; /*0x5a3529*/
        v16 = i[9]; /*0x5a352c*/
        v12 = HIWORD(v16) + HIWORD(MEMORY[0x89F688][v11]); /*0x5a3543*/
        LOWORD(v18) = v16 + LOWORD(MEMORY[0x89F688][v11]); /*0x5a354b*/
        HIWORD(v18) = v12; /*0x5a3550*/
        v16 = v18; /*0x5a3559*/
        v13 = v12; /*0x5a3560*/
        v14 = v12 + (__int16)v18; /*0x5a3563*/
        if ( v14 > v9 && (__int16)v18 - v13 < v9 && v13 - (__int16)v18 < v9 && v14 <= g_MapCellCount ) /*0x5a357e*/
        {
          v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x5a358a*/
          if ( Cell::IsEmpty(v15) ) /*0x5a3591*/
          {
            *((_BYTE *)g_MapTileArray + 80 * (__int16)v16 + 80 * unk_89C2DC * SHIWORD(v16) + 69) = 1; /*0x5a35ca*/
            break; /*0x5a35ca*/
          }
          v9 = g_MapCellHeight_Value; /*0x5a359a*/
        }
      }
    }
LABEL_24:
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5a35cf*/
  }
  return result; /*0x5a35e6*/
}
}
} // namespace gamemd

// 0x5A45E0
namespace gamemd {
int ScatterTerrainTrees(IUnknown * aP0, int a2, double a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ScatterTerrainTrees(IUnknown *aP0, int a2, double a3)
{
  int v3; // edi
  AbstractClass *v4; // eax
  AbstractClass *v5; // ebx
  int v6; // eax
  AbstractClass *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int i; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  __int16 *v17; // eax
  int v18; // eax
  __int16 *v19; // edi
  Random *v20; // ebx
  unsigned int v21; // eax
  TerrainClass *v22; // edi
  int v23; // eax
  char v24; // al
  int v25; // eax
  __int16 v26; // dx
  int v27; // ecx
  int v28; // eax
  char *v29; // edi
  TerrainClass **v30; // ebx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  unsigned int v33; // edx
  int v34; // ebx
  unsigned int v35; // eax
  int v36; // eax
  __int16 *v37; // edi
  __int16 *v39; // [esp+18h] [ebp-58h]
  AbstractClass *v40; // [esp+1Ch] [ebp-54h]
  int v41; // [esp+20h] [ebp-50h]
  int v42; // [esp+24h] [ebp-4Ch]
  TerrainClass *v43; // [esp+2Ch] [ebp-44h]
  TerrainClass **v44; // [esp+30h] [ebp-40h]
  double v45; // [esp+30h] [ebp-40h]
  float v46; // [esp+38h] [ebp-38h]
  int v47; // [esp+38h] [ebp-38h]
  int Random_field_0x04; // [esp+3Ch] [ebp-34h] BYREF
  float v49; // [esp+40h] [ebp-30h]
  __int64 v50; // [esp+44h] [ebp-2Ch]
  __int64 v51; // [esp+4Ch] [ebp-24h]
  __int64 v52; // [esp+54h] [ebp-1Ch]
  char Buffer[20]; // [esp+5Ch] [ebp-14h] BYREF

  v3 = 25 * a2; /*0x5a45f2*/
  v4 = (AbstractClass *)__2_YAPAXI_Z(200 * a2); /*0x5a4601*/
  if ( v4 ) /*0x5a460b*/
  {
    v5 = v4; /*0x5a4610*/
    LODWORD(v49) = v3 - 1; /*0x5a4612*/
    v40 = v4; /*0x5a4616*/
  }
  else
  {
    v40 = 0; /*0x5a461c*/
    v5 = 0; /*0x5a4624*/
  }
  v6 = __2_YAPAXI_Z(0x14u); /*0x5a462a*/
  v7 = (AbstractClass *)v6; /*0x5a462f*/
  if ( v6 ) /*0x5a4636*/
  {
    *(_DWORD *)(v6 + 12) = 0; /*0x5a463f*/
    *(_DWORD *)(v6 + 16) = -1; /*0x5a4647*/
    *(_DWORD *)v6 = 0; /*0x5a464e*/
    *(_DWORD *)(v6 + 4) = v3; /*0x5a4654*/
    v8 = __2_YAPAXI_Z(100 * a2 + 4); /*0x5a4657*/
    v9 = *(_DWORD *)&v7->__pad_0[4]; /*0x5a465c*/
    *(_DWORD *)&v7->__pad_0[8] = v8; /*0x5a465f*/
    v10 = 0; /*0x5a4665*/
    if ( v9 >= 0 ) /*0x5a4669*/
    {
      do /*0x5a467c*/
      {
        ++v10; /*0x5a466e*/
        *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v10 - 4) = 0; /*0x5a466f*/
      }
      while ( v10 <= *(_DWORD *)&v7->__pad_0[4] ); /*0x5a467c*/
    }
  }
  else
  {
    v7 = 0; /*0x5a4680*/
  }
  for ( i = 0; i <= *(_DWORD *)v7->__pad_0; *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * i - 4) = 0 ) /*0x5a4688*/
    ++i; /*0x5a468d*/
  *(_DWORD *)v7->__pad_0 = 0; /*0x5a469f*/
  v41 = 1; /*0x5a46a5*/
  *(_DWORD *)v5->__pad_0 = aP0->field_24; /*0x5a46b0*/
  *(_DWORD *)&v5->__pad_0[4] = 0; /*0x5a46b2*/
  *((_BYTE *)g_MapTileArray + 80 * (__int16)aP0->field_24 + 80 * unk_89C2DC * (__int16)HIWORD(aP0->field_24) + 71) = 1; /*0x5a46dc*/
  v12 = *(_DWORD *)v7->__pad_0 + 1; /*0x5a46e6*/
  v46 = *(float *)&v5->__pad_0[4]; /*0x5a46e9*/
  v13 = v12 >> 1; /*0x5a46f0*/
  if ( v12 < *(_DWORD *)&v7->__pad_0[4] ) /*0x5a46f4*/
  {
    if ( v12 > 1 ) /*0x5a46f9*/
    {
      do /*0x5a4719*/
      {
        v14 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a46fb*/
        v15 = *(_DWORD *)(v14 + 4 * v13); /*0x5a46fe*/
        if ( *(float *)(v15 + 4) <= (double)v46 ) /*0x5a470d*/
          break; /*0x5a470d*/
        *(_DWORD *)(v14 + 4 * v12) = v15; /*0x5a470f*/
        v12 = v13; /*0x5a4712*/
        v13 >>= 1; /*0x5a4714*/
      }
      while ( v12 > 1 ); /*0x5a4719*/
      v5 = v40; /*0x5a471b*/
      v3 = 25 * a2; /*0x5a471f*/
    }
    *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v12) = v5; /*0x5a4726*/
    v16 = *(_DWORD *)&v7->__pad_0[12]; /*0x5a472b*/
    ++*(_DWORD *)v7->__pad_0; /*0x5a4731*/
    if ( (unsigned int)v5 > v16 ) /*0x5a4733*/
      *(_DWORD *)&v7->__pad_0[12] = v5; /*0x5a4735*/
    if ( (unsigned int)v5 < v7->uniqueId ) /*0x5a473b*/
      v7->uniqueId = (int)v5; /*0x5a473d*/
  }
  if ( *(_DWORD *)v7->__pad_0 ) /*0x5a4740*/
  {
    v18 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a474e*/
    v19 = *(__int16 **)(v18 + 4); /*0x5a4756*/
    *(_DWORD *)(v18 + 4) = *(_DWORD *)(v18 + 4 * *(_DWORD *)v7->__pad_0); /*0x5a4759*/
    *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * (*(_DWORD *)v7->__pad_0)--) = 0; /*0x5a4761*/
    Heap::SiftDown((int *)v7->__pad_0, 1); /*0x5a476f*/
    v39 = v19; /*0x5a4774*/
    v3 = 25 * a2; /*0x5a4778*/
    v17 = v39; /*0x5a477c*/
  }
  else
  {
    v17 = 0; /*0x5a4746*/
    v39 = 0; /*0x5a4748*/
  }
  v42 = 0; /*0x5a4783*/
  if ( a2 > 0 ) /*0x5a478d*/
  {
    while ( v17 && v41 < v3 ) /*0x5a479f*/
    {
      v20 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v17); /*0x5a47ba*/
      if ( Cell::IsEmpty(v20) /*0x5a47ec*/
        && !v20[14].Random_field_0x04
        && v20[4].Random_field_0x04 == -1
        && v20[14].Random_field_0x0C != 3 )
      {
        v50 = (unsigned int)Random::State(&g_Randomizer); /*0x5a47fc*/
        if ( (double)v50 * 2.328306437080797e-10 < a3 ) /*0x5a4816*/
        {
          do /*0x5a4848*/
          {
            v51 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4826*/
            v21 = Math::RoundToInt((double)v51 * 0.000000005820766092701993 + 1.0); /*0x5a483e*/
          }
          while ( v21 > 0x19 ); /*0x5a4848*/
          sprintf(Buffer, (ObjectClass *)&stru_82C090.__pad_0[12], (INIClass *)((int)v21 / 10)); /*0x5a486f*/
          v22 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a487e*/
          if ( v22 ) /*0x5a4885*/
          {
            Random_field_0x04 = v20[2].Random_field_0x04; /*0x5a488e*/
            v23 = Terrain::LookupByName(Buffer); /*0x5a4892*/
            TerrainClass::Construct( /*0x5a48aa*/
              (void **)v22,
              *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v23),
              (TerrainClass *)&Random_field_0x04);
          }
          ++v42; /*0x5a48af*/
        }
      }
      v24 = 0; /*0x5a48bb*/
      v47 = 0; /*0x5a48c0*/
      v44 = (TerrainClass **)((char *)v40 + 8 * v41); /*0x5a48c4*/
      do /*0x5a4a61*/
      {
        v25 = v24 & 7; /*0x5a48cc*/
        v26 = v39[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v25 + 162]; /*0x5a48de*/
        LOWORD(v25) = *v39 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v25 + 160]; /*0x5a48e5*/
        HIWORD(v43) = v26; /*0x5a48ee*/
        v27 = (__int16)v25; /*0x5a48f3*/
        LOWORD(v43) = v25; /*0x5a48f9*/
        v28 = v26 + (__int16)v25; /*0x5a48fe*/
        if ( v28 > g_MapCellHeight_Value /*0x5a492d*/
          && v27 - v26 < g_MapCellHeight_Value
          && v26 - v27 < g_MapCellHeight_Value
          && v28 <= g_MapCellCount )
        {
          v29 = (char *)g_MapTileArray + 80 * v27 + 80 * unk_89C2DC * v26; /*0x5a494a*/
          if ( !v29[71] && !v29[69] && v41 < 25 * a2 ) /*0x5a496c*/
          {
            v30 = v44; /*0x5a4972*/
            *v44 = v43; /*0x5a497d*/
            v45 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(((__int16)aP0->field_24 - v27) /*0x5a49b1*/
                                                                           * ((__int16)aP0->field_24 - v27)
                                                                           + ((__int16)HIWORD(aP0->field_24) - v26)
                                                                           * ((__int16)HIWORD(aP0->field_24) - v26))));
            v52 = (unsigned int)Random::State(&g_Randomizer); /*0x5a49c2*/
            ++v41; /*0x5a49dd*/
            *((float *)v30 + 1) = (double)v52 * 5.0 * 2.328306437080797e-10 + v45; /*0x5a49eb*/
            v29[71] = 1; /*0x5a49ee*/
            v31 = (unsigned int)v30; /*0x5a49f4*/
            v32 = *(_DWORD *)v7->__pad_0 + 1; /*0x5a49f9*/
            v44 = v30 + 2; /*0x5a49fa*/
            v49 = *((float *)v30 + 1); /*0x5a4a03*/
            v33 = v32 >> 1; /*0x5a4a0a*/
            if ( v32 < *(_DWORD *)&v7->__pad_0[4] ) /*0x5a4a0e*/
            {
              for ( ; v32 > 1; v33 >>= 1 ) /*0x5a4a13*/
              {
                v34 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a4a15*/
                if ( *(float *)(*(_DWORD *)(v34 + 4 * v33) + 4) <= (double)v49 ) /*0x5a4a27*/
                  break; /*0x5a4a27*/
                *(_DWORD *)(v34 + 4 * v32) = *(_DWORD *)(v34 + 4 * v33); /*0x5a4a2c*/
                v32 = v33; /*0x5a4a2f*/
              }
              *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v32) = v31; /*0x5a4a3b*/
              v35 = *(_DWORD *)&v7->__pad_0[12]; /*0x5a4a40*/
              ++*(_DWORD *)v7->__pad_0; /*0x5a4a46*/
              if ( v31 > v35 ) /*0x5a4a48*/
                *(_DWORD *)&v7->__pad_0[12] = v31; /*0x5a4a4a*/
              if ( v31 < v7->uniqueId ) /*0x5a4a50*/
                v7->uniqueId = v31; /*0x5a4a52*/
            }
          }
        }
        v24 = ++v47; /*0x5a4a59*/
      }
      while ( v47 < 8 ); /*0x5a4a61*/
      if ( *(_DWORD *)v7->__pad_0 ) /*0x5a4a67*/
      {
        v36 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a4a73*/
        v37 = *(__int16 **)(v36 + 4); /*0x5a4a7b*/
        *(_DWORD *)(v36 + 4) = *(_DWORD *)(v36 + 4 * *(_DWORD *)v7->__pad_0); /*0x5a4a7e*/
        *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * (*(_DWORD *)v7->__pad_0)--) = 0; /*0x5a4a86*/
        Heap::SiftDown((int *)v7->__pad_0, 1); /*0x5a4a94*/
        v39 = v37; /*0x5a4a99*/
      }
      else
      {
        v39 = 0; /*0x5a4a6d*/
      }
      v5 = v40; /*0x5a4aa4*/
      if ( v42 >= a2 ) /*0x5a4aaa*/
        break; /*0x5a4aaa*/
      v3 = 25 * a2; /*0x5a4795*/
      v17 = v39; /*0x5a4799*/
    }
  }
  __3_YAXPAX_Z(v5); /*0x5a4ab1*/
  if ( v7 ) /*0x5a4abb*/
    Scalar::Dtor((void **)v7, 1); /*0x5a4ac1*/
  return v42; /*0x5a4aca*/
}
}
} // namespace gamemd

// 0x5A4B60
namespace gamemd {
void FloodFillPathfinding(Random * aP0, int a2, CellClass * aP2, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall FloodFillPathfinding(Random *aP0, int a2, CellClass *aP2, int a4, char a5)
{
  int v5; // edi
  AbstractClass *v6; // eax
  AbstractClass *v7; // ebx
  int v8; // eax
  AbstractClass *v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  bool v14; // sf
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  int v18; // ebx
  unsigned int v19; // eax
  __int16 *v20; // eax
  int v21; // eax
  AbstractClass *v22; // edi
  _DWORD *v23; // eax
  Random *v24; // edx
  char v25; // al
  float *v26; // edi
  Random *v27; // ebx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  unsigned int v31; // ebx
  float v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // edi
  AbstractClass *v38; // eax
  int v39; // [esp+14h] [ebp-34h] BYREF
  AbstractClass *v40; // [esp+18h] [ebp-30h]
  AbstractClass *v41; // [esp+1Ch] [ebp-2Ch]
  Random *v42; // [esp+20h] [ebp-28h]
  Random *v43; // [esp+24h] [ebp-24h]
  int Random_field_0x04; // [esp+28h] [ebp-20h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  double v46; // [esp+30h] [ebp-18h]
  float v47; // [esp+38h] [ebp-10h]
  int v48; // [esp+3Ch] [ebp-Ch] BYREF
  __int64 v49; // [esp+40h] [ebp-8h]

  v5 = 10 * (_DWORD)aP2; /*0x5a4b72*/
  v6 = (AbstractClass *)__2_YAPAXI_Z(80 * (_DWORD)aP2); /*0x5a4b7c*/
  if ( v6 ) /*0x5a4b86*/
  {
    v7 = v6; /*0x5a4b8b*/
    LODWORD(v47) = v5 - 1; /*0x5a4b8d*/
    v41 = v6; /*0x5a4b91*/
  }
  else
  {
    v41 = 0; /*0x5a4b97*/
    v7 = 0; /*0x5a4b9f*/
  }
  v8 = __2_YAPAXI_Z(0x14u); /*0x5a4ba5*/
  v9 = (AbstractClass *)v8; /*0x5a4baa*/
  if ( v8 ) /*0x5a4bb3*/
  {
    *(_DWORD *)(v8 + 12) = 0; /*0x5a4bb5*/
    *(_DWORD *)v8 = 0; /*0x5a4bb8*/
    *(_DWORD *)(v8 + 16) = -1; /*0x5a4bc1*/
    *(_DWORD *)(v8 + 4) = v5; /*0x5a4bc9*/
    v10 = __2_YAPAXI_Z(40 * (_DWORD)aP2 + 4); /*0x5a4bcc*/
    v11 = *(_DWORD *)&v9->__pad_0[4]; /*0x5a4bd1*/
    *(_DWORD *)&v9->__pad_0[8] = v10; /*0x5a4bd4*/
    v12 = 0; /*0x5a4bda*/
    if ( v11 >= 0 ) /*0x5a4bde*/
    {
      do /*0x5a4bf1*/
      {
        ++v12; /*0x5a4be3*/
        *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v12 - 4) = 0; /*0x5a4be4*/
      }
      while ( v12 <= *(_DWORD *)&v9->__pad_0[4] ); /*0x5a4bf1*/
    }
  }
  else
  {
    v9 = 0; /*0x5a4bf7*/
  }
  v13 = 0; /*0x5a4bfb*/
  v14 = *(int *)v9->__pad_0 < 0; /*0x5a4bfd*/
  v45 = 0; /*0x5a4bff*/
  if ( !v14 ) /*0x5a4c03*/
  {
    do /*0x5a4c11*/
    {
      ++v13; /*0x5a4c08*/
      *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v13 - 4) = 0; /*0x5a4c09*/
    }
    while ( v13 <= *(_DWORD *)v9->__pad_0 ); /*0x5a4c11*/
  }
  *(_DWORD *)v9->__pad_0 = 0; /*0x5a4c16*/
  v42 = (Random *)1; /*0x5a4c18*/
  *(_DWORD *)v7->__pad_0 = aP0[2].Random_field_0x04; /*0x5a4c23*/
  *(_DWORD *)&v7->__pad_0[4] = 0; /*0x5a4c25*/
  Random_field_0x04 = aP0[2].Random_field_0x04; /*0x5a4c2b*/
  *((_DWORD *)g_MapTileArray + 20 * (__int16)Random_field_0x04 + 20 * unk_89C2DC * SHIWORD(Random_field_0x04) + 15) = a4; /*0x5a4c4f*/
  v15 = *(_DWORD *)v9->__pad_0 + 1; /*0x5a4c58*/
  Random_field_0x04 = *(int *)&v7->__pad_0[4]; /*0x5a4c5b*/
  v16 = v15 >> 1; /*0x5a4c62*/
  if ( v15 < *(_DWORD *)&v9->__pad_0[4] ) /*0x5a4c66*/
  {
    if ( v15 > 1 ) /*0x5a4c6b*/
    {
      do /*0x5a4c8b*/
      {
        v17 = *(_DWORD *)&v9->__pad_0[8]; /*0x5a4c6d*/
        v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a4c70*/
        if ( *(float *)(v18 + 4) <= (double)*(float *)&Random_field_0x04 ) /*0x5a4c7f*/
          break; /*0x5a4c7f*/
        *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a4c81*/
        v15 = v16; /*0x5a4c84*/
        v16 >>= 1; /*0x5a4c86*/
      }
      while ( v15 > 1 ); /*0x5a4c8b*/
      v7 = v41; /*0x5a4c8d*/
    }
    *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v15) = v7; /*0x5a4c94*/
    v19 = *(_DWORD *)&v9->__pad_0[12]; /*0x5a4c99*/
    ++*(_DWORD *)v9->__pad_0; /*0x5a4c9f*/
    if ( (unsigned int)v7 > v19 ) /*0x5a4ca1*/
      *(_DWORD *)&v9->__pad_0[12] = v7; /*0x5a4ca3*/
    if ( (unsigned int)v7 < v9->uniqueId ) /*0x5a4ca9*/
      v9->uniqueId = (int)v7; /*0x5a4cab*/
  }
  if ( *(_DWORD *)v9->__pad_0 ) /*0x5a4cae*/
  {
    v21 = *(_DWORD *)&v9->__pad_0[8]; /*0x5a4cbc*/
    v22 = *(AbstractClass **)(v21 + 4); /*0x5a4cc4*/
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *(_DWORD *)v9->__pad_0); /*0x5a4cc7*/
    *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * (*(_DWORD *)v9->__pad_0)--) = 0; /*0x5a4ccf*/
    Heap::SiftDown((int *)v9->__pad_0, 1); /*0x5a4cdd*/
    v40 = v22; /*0x5a4ce2*/
    v20 = (__int16 *)v22; /*0x5a4ce6*/
  }
  else
  {
    v20 = 0; /*0x5a4cb4*/
    v40 = 0; /*0x5a4cb6*/
  }
  if ( (int)aP2 > 0 ) /*0x5a4ced*/
  {
    while ( v20 ) /*0x5a4cfb*/
    {
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v20); /*0x5a4d07*/
      v24 = v42; /*0x5a4d0f*/
      v23[14] = a2; /*0x5a4d13*/
      v25 = 0; /*0x5a4d16*/
      *(float *)&Random_field_0x04 = 0.0; /*0x5a4d18*/
      v26 = (float *)&v7->__pad_0[8 * (_DWORD)v24]; /*0x5a4d1c*/
      do /*0x5a4f42*/
      {
        v39 = CellStruct::Add(v40, (IUnknown *)&v48, (IUnknown *)(4 * (v25 & 7) + 9041544))->field_0; /*0x5a4d44*/
        v43 = (Random *)(SHIWORD(v39) + (__int16)v39); /*0x5a4d55*/
        if ( (int)v43 > g_MapCellHeight_Value /*0x5a4d81*/
          && (__int16)v39 - SHIWORD(v39) < g_MapCellHeight_Value
          && SHIWORD(v39) - (__int16)v39 < g_MapCellHeight_Value
          && (int)v43 <= g_MapCellCount )
        {
          v27 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v39); /*0x5a4d96*/
          v43 = v27; /*0x5a4d9a*/
          if ( Cell::IsEmpty(v27) /*0x5a4dbf*/
            || a5 && (CellClass::InBounds((int *)v27->__pad_0) || CellClass::InMapDataRange((int *)v27->__pad_0)) )
          {
            v28 = SHIWORD(v39); /*0x5a4dcc*/
            LODWORD(v46) = (__int16)v39; /*0x5a4de4*/
            if ( *((_DWORD *)g_MapTileArray + 20 * (__int16)v39 + 20 * unk_89C2DC * SHIWORD(v39) + 15) != a4 /*0x5a4e1a*/
              && !LOBYTE(v43[17].Random_field_0x0C)
              && v43[4].Random_field_0x04 == -1
              && !v43[14].Random_field_0x04 )
            {
              *(_DWORD *)v26 = v39; /*0x5a4e2f*/
              v43 = (Random *)aP0[2].Random_field_0x04; /*0x5a4e3b*/
              LODWORD(v46) = ((__int16)v43 - LODWORD(v46)) * ((__int16)v43 - LODWORD(v46)) /*0x5a4e57*/
                           + (SHIWORD(v43) - v28) * (SHIWORD(v43) - v28);
              v46 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)SLODWORD(v46))); /*0x5a4e67*/
              v49 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4e78*/
              v29 = SHIWORD(v39); /*0x5a4e88*/
              v30 = (__int16)v39; /*0x5a4e93*/
              v26[1] = (double)v49 * 5.0 * 2.328306437080797e-10 + v46; /*0x5a4ea2*/
              *((_DWORD *)g_MapTileArray + 20 * v30 + 20 * unk_89C2DC * v29 + 15) = a4; /*0x5a4eba*/
              v31 = (unsigned int)v26; /*0x5a4ec3*/
              v42 = (Random *)((char *)v42 + 1); /*0x5a4ec5*/
              v32 = v26[1]; /*0x5a4ecb*/
              v26 += 2; /*0x5a4ece*/
              v33 = *(_DWORD *)v9->__pad_0 + 1; /*0x5a4ed1*/
              v47 = v32; /*0x5a4ed2*/
              v34 = *(_DWORD *)&v9->__pad_0[4]; /*0x5a4ed6*/
              v35 = v33 >> 1; /*0x5a4edb*/
              v43 = (Random *)v31; /*0x5a4edf*/
              if ( v33 < v34 ) /*0x5a4ee3*/
              {
                for ( ; v33 > 1; v35 >>= 1 ) /*0x5a4ee8*/
                {
                  LODWORD(v46) = *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v35); /*0x5a4ef0*/
                  if ( *(float *)(LODWORD(v46) + 4) <= (double)v47 ) /*0x5a4f00*/
                    break; /*0x5a4f00*/
                  *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v33) = LODWORD(v46); /*0x5a4f09*/
                  v31 = (unsigned int)v43; /*0x5a4f0c*/
                  v33 = v35; /*0x5a4f10*/
                }
                *(_DWORD *)(*(_DWORD *)&v9->__pad_0[8] + 4 * v33) = v31; /*0x5a4f1c*/
                v36 = *(_DWORD *)&v9->__pad_0[12]; /*0x5a4f21*/
                ++*(_DWORD *)v9->__pad_0; /*0x5a4f27*/
                if ( v31 > v36 ) /*0x5a4f29*/
                  *(_DWORD *)&v9->__pad_0[12] = v31; /*0x5a4f2b*/
                if ( v31 < v9->uniqueId ) /*0x5a4f31*/
                  v9->uniqueId = v31; /*0x5a4f33*/
              }
            }
          }
        }
        v25 = ++Random_field_0x04; /*0x5a4f3a*/
      }
      while ( Random_field_0x04 < 8 ); /*0x5a4f42*/
      v37 = ++v45; /*0x5a4f4e*/
      v38 = (AbstractClass *)PriorityQueue::Pop((int *)v9->__pad_0); /*0x5a4f53*/
      v7 = v41; /*0x5a4f58*/
      v40 = v38; /*0x5a4f5c*/
      if ( v37 >= (int)aP2 ) /*0x5a4f63*/
        break; /*0x5a4f63*/
      v20 = (__int16 *)v40; /*0x5a4cf5*/
    }
  }
  __3_YAXPAX_Z(v7); /*0x5a4f6a*/
  if ( v9 ) /*0x5a4f74*/
  {
    __3_YAXPAX_Z(*(void **)&v9->__pad_0[8]); /*0x5a4f7a*/
    __3_YAXPAX_Z(v9); /*0x5a4f80*/
  }
}
}
} // namespace gamemd

// 0x5A6510
namespace gamemd {
void MapSeed_PlaceBuildingsScatter2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall MapSeed_PlaceBuildingsScatter2(int a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // st7
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  char **v9; // esi
  int v10; // eax
  void *v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // eax
  int IndexByName; // esi
  void *v15; // eax
  int v16; // ebp
  unsigned int v17; // esi
  unsigned int v18; // eax
  int v19; // ebx
  _WORD *v20; // edi
  int *v21; // esi
  int v22; // edx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // [esp+18h] [ebp-6Eh]
  char v27; // [esp+19h] [ebp-6Dh]
  int v28; // [esp+1Ah] [ebp-6Ch]
  int v29; // [esp+1Eh] [ebp-68h]
  int v30; // [esp+22h] [ebp-64h]
  int v31; // [esp+26h] [ebp-60h]
  int v32; // [esp+2Eh] [ebp-58h]
  int v33; // [esp+32h] [ebp-54h]
  int Owner; // [esp+36h] [ebp-50h]
  double v35[2]; // [esp+3Ah] [ebp-4Ch] BYREF
  __int64 v36; // [esp+4Ah] [ebp-3Ch]
  __int64 v37; // [esp+52h] [ebp-34h]
  __int64 v38; // [esp+5Ah] [ebp-2Ch]
  _DWORD v39[3]; // [esp+62h] [ebp-24h] BYREF
  void **v40; // [esp+6Eh] [ebp-18h] BYREF
  void *Block; // [esp+72h] [ebp-14h]
  int v42; // [esp+76h] [ebp-10h]
  char v43; // [esp+7Bh] [ebp-Bh]
  int v44; // [esp+7Eh] [ebp-8h]
  int v45; // [esp+82h] [ebp-4h]

  v1 = a1; /*0x5a6514*/
  v2 = *(_DWORD *)(a1 + 16) / 10; /*0x5a6534*/
  v3 = *(_DWORD *)(a1 + 16) / 20; /*0x5a6542*/
  *(_QWORD *)&v35[0] = v2 - v3 + 1; /*0x5a6549*/
  *(double *)&v4 = (double)*(__int64 *)&v35[0]; /*0x5a6551*/
  LODWORD(v35[0]) = v3; /*0x5a6555*/
  v38 = v4; /*0x5a655d*/
  *(double *)&v37 = (double)*(__int64 *)&v35[0]; /*0x5a6565*/
  do /*0x5a6594*/
  {
    *(_QWORD *)&v35[0] = (unsigned int)Random::State(&g_Randomizer); /*0x5a6573*/
    v5 = Math::RoundToInt((double)*(__int64 *)&v35[0] * *(double *)&v38 * 2.328306437080797e-10 + *(double *)&v37); /*0x5a658d*/
  }
  while ( v5 > v2 ); /*0x5a6594*/
  v6 = v5 >> 1; /*0x5a6598*/
  v33 = v5 >> 1; /*0x5a65a0*/
  v29 = 0; /*0x5a65a4*/
  v30 = 0; /*0x5a65a8*/
  StringVector::Construct(&v40, 0, 0); /*0x5a65ac*/
  v7 = v42; /*0x5a65b1*/
  v8 = 10; /*0x5a65b5*/
  v40 = &vt_DynamicVectorClass_char; /*0x5a65ba*/
  v45 = 10; /*0x5a65c2*/
  v44 = 0; /*0x5a65c6*/
  v9 = off_82B138; /*0x5a65ca*/
  while ( 1 ) /*0x5a65d5*/
  {
    if ( v44 < v7 ) /*0x5a65d9*/
      goto LABEL_10; /*0x5a65d9*/
    if ( (v43 || !v7) && v8 > 0 ) /*0x5a65e9*/
    {
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v8 + v7, 0) ) /*0x5a65f7*/
      {
LABEL_10:
        v10 = v44++; /*0x5a65fe*/
        *((_DWORD *)Block + v10) = *v9; /*0x5a660f*/
      }
      v7 = v42; /*0x5a6612*/
    }
    if ( (int)++v9 >= (int)&off_82B180 ) /*0x5a661f*/
      break; /*0x5a661f*/
    v8 = v45; /*0x5a65d1*/
  }
  v11 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a6626*/
  Owner = HouseClass::FindOwner(v11); /*0x5a6634*/
  if ( v6 > 0 )
  {
    while ( v29 < 2 * v6 && v44 > 1 )
    {
      v12 = v44 - 1; /*0x5a6661*/
      *(_QWORD *)&v35[1] = (unsigned int)v44; /*0x5a6669*/
      v35[0] = (double)(unsigned int)v44; /*0x5a6671*/
      do /*0x5a66a0*/
      {
        v36 = (unsigned int)Random::State(&g_Randomizer); /*0x5a667f*/
        v13 = Math::RoundToInt((double)v36 * v35[0] * 2.328306437080797e-10); /*0x5a6695*/
        v32 = v13; /*0x5a669c*/
      }
      while ( v13 > v12 ); /*0x5a66a0*/
      IndexByName = BuildingTypeClass::FindIndexByName(*((void **)Block + v13)); /*0x5a66b5*/
      v15 = __2_YAPAXI_Z(0x720u); /*0x5a66b7*/
      v16 = v15 ? BuildingClass::Construct((int)v15, *((_DWORD *)g_TriggerTypeCount + IndexByName), Owner) : 0;
      v28 = 0; /*0x5a66db*/
      v27 = 0; /*0x5a66df*/
      while ( v28 < 60 ) /*0x5a6701*/
      {
        v17 = *(_DWORD *)(v1 + 16) - 1; /*0x5a670e*/
        v37 = *(unsigned int *)(v1 + 16); /*0x5a6712*/
        v35[0] = (double)v37; /*0x5a671a*/
        do /*0x5a6745*/
        {
          v38 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6728*/
          v18 = Math::RoundToInt((double)v38 * v35[0] * 2.328306437080797e-10); /*0x5a673e*/
        }
        while ( v18 > v17 ); /*0x5a6745*/
        v19 = *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * v18); /*0x5a674c*/
        v20 = (_WORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v16 + 1312) + 144))( /*0x5a6761*/
                         *(_DWORD *)(v16 + 1312),
                         1);
        v26 = 1; /*0x5a6763*/
        while ( *v20 != 0x7FFF || v20[1] != 0x7FFF ) /*0x5a6775*/
        {
          LOWORD(v31) = v19 + *v20; /*0x5a6781*/
          HIWORD(v31) = HIWORD(v19) + v20[1]; /*0x5a6790*/
          LODWORD(v35[0]) = v31; /*0x5a6799*/
          v21 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v35); /*0x5a67a7*/
          if ( !CellClass::InBounds(v21) && !CellClass::InMapDataRange(v21) /*0x5a67da*/
            || v21[57]
            || v21[59] == 3
            || !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)v21, 1) )
          {
            v26 = 0; /*0x5a67e3*/
          }
          v20 += 2; /*0x5a67ec*/
          if ( !v26 ) /*0x5a67f1*/
            goto LABEL_44; /*0x5a67f1*/
        }
        v22 = *(_DWORD *)v16; /*0x5a6810*/
        v39[2] = 0; /*0x5a681d*/
        v39[0] = ((__int16)v19 << 8) + 128; /*0x5a6828*/
        v39[1] = (SHIWORD(v19) << 8) + 128; /*0x5a6836*/
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(v22 + 216))(v16, v39, 0) ) /*0x5a683d*/
        {
          v23 = *(_DWORD *)v16; /*0x5a684d*/
          v24 = *(_DWORD *)(*(_DWORD *)(v16 + 1312) + 160); /*0x5a6852*/
          *(_DWORD *)(v16 + 108) = v24; /*0x5a685a*/
          *(_DWORD *)(v16 + 112) = v24; /*0x5a685d*/
          (*(void (__thiscall **)(int, int))(v23 + 292))(v16, 2); /*0x5a6860*/
          v25 = v32; /*0x5a686a*/
          v27 = 1; /*0x5a6872*/
          ++v30; /*0x5a6877*/
          if ( v32 > 17 && v32 < v44 && v32 < --v44 ) /*0x5a688c*/
          {
            do /*0x5a68a0*/
            {
              ++v25; /*0x5a6892*/
              *((_DWORD *)Block + v25 - 1) = *((_DWORD *)Block + v25); /*0x5a6896*/
            }
            while ( v25 < v44 ); /*0x5a68a0*/
          }
        }
LABEL_44:
        ++v28; /*0x5a68a2*/
        if ( v27 ) /*0x5a68b1*/
        {
          v1 = a1; /*0x5a68b7*/
          goto LABEL_48; /*0x5a68c0*/
        }
        v1 = a1; /*0x5a66f3*/
      }
      if ( v16 ) /*0x5a68cc*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 32))(v16, 1); /*0x5a68d5*/
LABEL_48:
      ++v29; /*0x5a68e1*/
      if ( v30 >= v33 ) /*0x5a68eb*/
        break; /*0x5a68eb*/
      v6 = v33; /*0x5a6640*/
    }
  }
  v40 = &vt_VectorClass_char; /*0x5a68f5*/
  if ( Block ) /*0x5a6903*/
  {
    if ( v43 ) /*0x5a690b*/
      __3_YAXPAX_Z(Block); /*0x5a690e*/
  }
}
}
} // namespace gamemd

// 0x5A6920
namespace gamemd {
int PlaceRandomNeutralUnits(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall PlaceRandomNeutralUnits(int a1)
{
  void *v1; // eax
  IUnknown *Owner; // ebp
  int result; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int ExitCellByName; // eax
  _DWORD *v8; // esi
  void *v9; // edi
  int Index; // eax
  int v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  char v17; // [esp+13h] [ebp-4Dh]
  int v18; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+18h] [ebp-48h]
  int v20; // [esp+1Ch] [ebp-44h]
  __int64 v21; // [esp+20h] [ebp-40h]
  IUnknown *v22; // [esp+28h] [ebp-38h]
  __int64 v23; // [esp+2Ch] [ebp-34h]
  __int64 v24; // [esp+34h] [ebp-2Ch]
  __int64 v25; // [esp+3Ch] [ebp-24h]
  __int64 v26; // [esp+44h] [ebp-1Ch]
  double v27; // [esp+4Ch] [ebp-14h]
  _DWORD v28[3]; // [esp+54h] [ebp-Ch] BYREF

  v1 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a692c*/
  Owner = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a6938*/
  v22 = Owner; /*0x5a693c*/
  do /*0x5a696e*/
  {
    v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5a694a*/
    result = Math::RoundToInt((double)v21 * 0.000000001164153218540399 + 1.0); /*0x5a6962*/
    v20 = result; /*0x5a696a*/
  }
  while ( (unsigned int)result > 5 ); /*0x5a696e*/
  v19 = 0; /*0x5a6972*/
  LODWORD(v21) = 0; /*0x5a6976*/
  if ( result > 0 ) /*0x5a697a*/
  {
    while ( 1 ) /*0x5a698e*/
    {
      result = 2 * v20; /*0x5a698e*/
      if ( v19 >= 2 * v20 ) /*0x5a6992*/
        return result; /*0x5a6992*/
      do /*0x5a69be*/
      {
        v23 = (unsigned int)Random::State(&g_Randomizer); /*0x5a69a2*/
        v4 = Math::RoundToInt((double)v23 * 0.000000001629814505956558); /*0x5a69b4*/
        v5 = v4; /*0x5a69b9*/
      }
      while ( (unsigned int)v4 > 6 ); /*0x5a69be*/
      if ( v4 > 2 ) /*0x5a69c3*/
      {
        v9 = __2_YAPAXI_Z(0x8E8u); /*0x5a6a04*/
        if ( !v9 ) /*0x5a6a0b*/
        {
LABEL_13:
          v8 = 0; /*0x5a6a2f*/
          goto LABEL_14; /*0x5a6a2f*/
        }
        Index = BuildingTypeClass::FindIndex(*(&off_82B180 + v5)); /*0x5a6a14*/
        v8 = (_DWORD *)UnitClass::Construct((int)v9, *((_DWORD *)g_UnitTypeCount2 + Index), Owner); /*0x5a6a2b*/
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a69cf*/
        if ( !v6 ) /*0x5a69d6*/
          goto LABEL_13; /*0x5a69d6*/
        ExitCellByName = Factory::FindExitCellByName(*(&off_82B180 + v5)); /*0x5a69df*/
        v8 = (_DWORD *)InfantryClass::Construct((int)v6, *((_DWORD *)MEMORY[0xA8E34C] + ExitCellByName), Owner); /*0x5a69f6*/
      }
LABEL_14:
      v11 = 0; /*0x5a6a31*/
      v17 = 0; /*0x5a6a33*/
      while ( v11 < 60 ) /*0x5a6a3a*/
      {
        v12 = *(_DWORD *)(a1 + 16) - 1; /*0x5a6a4b*/
        v24 = *(unsigned int *)(a1 + 16); /*0x5a6a4f*/
        v27 = (double)v24; /*0x5a6a57*/
        do /*0x5a6a82*/
        {
          v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6a65*/
          v13 = Math::RoundToInt((double)v25 * v27 * 2.328306437080797e-10); /*0x5a6a7b*/
        }
        while ( v13 > v12 ); /*0x5a6a82*/
        v18 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v13); /*0x5a6a9a*/
        if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v18, 1) /*0x5a6aba*/
          && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18) + 57) )
        {
          do /*0x5a6aea*/
          {
            v26 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6ad0*/
            v14 = Math::RoundToInt((double)v26 * 0.000000001862645149664638); /*0x5a6ae2*/
          }
          while ( v14 > 7 ); /*0x5a6aea*/
          v28[0] = ((__int16)v18 << 8) + 128; /*0x5a6b0c*/
          v15 = *v8; /*0x5a6b10*/
          v28[1] = (SHIWORD(v18) << 8) + 128; /*0x5a6b16*/
          v28[2] = 0; /*0x5a6b1d*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(v15 + 216))(v8, v28, 32 * v14) ) /*0x5a6b21*/
          {
            v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 160); /*0x5a6b35*/
            v8[27] = v16; /*0x5a6b3d*/
            v8[28] = v16; /*0x5a6b40*/
            (*(void (__thiscall **)(_DWORD *, int))(*v8 + 292))(v8, 2); /*0x5a6b47*/
            v17 = 1; /*0x5a6b51*/
            LODWORD(v21) = v21 + 1; /*0x5a6b57*/
          }
        }
        ++v11; /*0x5a6b5f*/
        if ( v17 ) /*0x5a6b62*/
          goto LABEL_27; /*0x5a6b62*/
      }
      if ( v8 ) /*0x5a6b72*/
        (*(void (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x5a6b7a*/
LABEL_27:
      result = v20; /*0x5a6b7d*/
      ++v19; /*0x5a6b8c*/
      if ( (int)v21 >= v20 ) /*0x5a6b90*/
        return result; /*0x5a6b90*/
      Owner = v22; /*0x5a6982*/
    }
  }
  return result; /*0x5a6b96*/
}
}
} // namespace gamemd

// 0x5A6BA0
namespace gamemd {
char E4Recv_5A6BA0::sub_5A6BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5A6BA0(__int16 *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  void *v8; // eax
  __int16 v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v1 = *(this + 1); /*0x5a6ba3*/
  v2 = *this; /*0x5a6ba7*/
  v3 = v2 + 7; /*0x5a6bae*/
  v4 = v2 - 7; /*0x5a6bb1*/
  v5 = v1 - 7; /*0x5a6bb6*/
  v11 = v2 + 7; /*0x5a6bb9*/
  v6 = v1 + 7; /*0x5a6bbd*/
  if ( __OFSUB__(v2 - 7, v2 + 7) ) /*0x5a6bc0*/
    return 1; /*0x5a6bfa*/
  while ( 1 ) /*0x5a6bc4*/
  {
    v7 = v5; /*0x5a6bc4*/
    if ( v5 < v6 ) /*0x5a6bc6*/
      break; /*0x5a6bc6*/
LABEL_6:
    if ( ++v4 >= v3 ) /*0x5a6bf8*/
      return 1; /*0x5a6bf8*/
  }
  while ( 1 ) /*0x5a6bd2*/
  {
    v10[0] = v4; /*0x5a6bd2*/
    v10[1] = v7; /*0x5a6bd7*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v10); /*0x5a6bdc*/
    if ( CellLand::IsBuildable((int)v8) ) /*0x5a6be3*/
      return 0; /*0x5a6bfa*/
    if ( ++v7 >= v6 ) /*0x5a6bef*/
    {
      v3 = v11; /*0x5a6bf1*/
      goto LABEL_6; /*0x5a6bf1*/
    }
  }
}
}
} // namespace gamemd

// 0x5A6C10
namespace gamemd {
int PlaceMapSeedClassBuildings(ObjectClass * aP0, ObjectClass * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall PlaceMapSeedClassBuildings(ObjectClass *aP0, ObjectClass *aP1, int a3, int a4)
{
  _DWORD *v4; // ebp
  int result; // eax
  int v6; // ebx
  int v7; // esi
  int i; // edi
  __int16 v9; // cx
  int v10; // eax
  int v11; // ecx
  _BYTE *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch]
  ObjectClass *v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]

  v19 = aP1; /*0x5a6c1a*/
  v4 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] + 4 * (_DWORD)aP0); /*0x5a6c1e*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a6c26*/
  v20 = result; /*0x5a6c2e*/
  if ( result ) /*0x5a6c32*/
  {
    result = v4[186]; /*0x5a6c38*/
    v6 = 0; /*0x5a6c3e*/
    v17 = 0; /*0x5a6c42*/
    if ( result > 0 ) /*0x5a6c46*/
    {
      v7 = g_MapCellHeight_Value; /*0x5a6c4d*/
      do /*0x5a6d66*/
      {
        for ( i = 0; i < v4[185]; ++i ) /*0x5a6c5e*/
        {
          v9 = *(_WORD *)&v19->__pad_0[2] + v6; /*0x5a6c6e*/
          LOWORD(v18) = i + *(_WORD *)v19->__pad_0; /*0x5a6c75*/
          HIWORD(v18) = v9; /*0x5a6c7a*/
          v16 = v18; /*0x5a6c83*/
          v10 = v9; /*0x5a6c8a*/
          v11 = v9 + (__int16)v18; /*0x5a6c8d*/
          if ( v11 > v7 ) /*0x5a6c92*/
          {
            if ( (__int16)v18 - v10 >= v7 || v10 - (__int16)v18 >= v7 || v11 > g_MapCellCount ) /*0x5a6cb4*/
            {
              v6 = v17; /*0x5a6d46*/
            }
            else
            {
              v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v16); /*0x5a6cc4*/
              v6 = v17; /*0x5a6ccf*/
              v13 = i + v17 * v4[185]; /*0x5a6cda*/
              v14 = *(_DWORD *)(v20 + 4 * v13 + 16); /*0x5a6cdc*/
              if ( v14 ) /*0x5a6ce2*/
              {
                v15 = v4[165]; /*0x5a6ce4*/
                v12[282] = v13; /*0x5a6cea*/
                *((_DWORD *)v12 + 14) = v15; /*0x5a6cf4*/
                if ( a4 != -1 ) /*0x5a6cfa*/
                  v12[283] = a4 + *(_BYTE *)(v14 + 40) - 4; /*0x5a6d04*/
                v12[284] = *(_BYTE *)(v14 + 42); /*0x5a6d0d*/
                if ( g_MapTileArray ) /*0x5a6d1b*/
                  *((_DWORD *)g_MapTileArray + 20 * (__int16)v16 + 20 * unk_89C2DC * SHIWORD(v16) + 14) = a3; /*0x5a6d3a*/
              }
              v7 = g_MapCellHeight_Value; /*0x5a6d3e*/
            }
          }
        }
        result = v4[186]; /*0x5a6d59*/
        v17 = ++v6; /*0x5a6d62*/
      }
      while ( v6 < result ); /*0x5a6d66*/
    }
  }
  return result; /*0x5a6d6e*/
}
}
} // namespace gamemd

// 0x5A6D80
namespace gamemd {
unsigned int * FindClearPlacementCell(unsigned int * a0, MapSeedClass * aP1, MapSeedClass * aP2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall FindClearPlacementCell(_DWORD *a0, MapSeedClass *aP1, MapSeedClass *aP2, int a4)
{
  MapSeedClass *v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  __int16 v11; // ax
  int v12; // eax
  MapSeedClass *v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  _WORD *v18; // esi
  __int16 v19; // cx
  MapSeedClass *v20; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  char v24[8]; // [esp+20h] [ebp-18h]
  double v25; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  MapSeedClass *aP1a; // [esp+40h] [ebp+8h]
  MapSeedClass *aP2a; // [esp+44h] [ebp+Ch]
  MapSeedClass *aP2b; // [esp+44h] [ebp+Ch]
  int v31; // [esp+48h] [ebp+10h]

  v4 = *(MapSeedClass **)aP1->__pad_0; /*0x5a6d8d*/
  v5 = 0; /*0x5a6d91*/
  v24[0] = a4 == 4; /*0x5a6d96*/
  v20 = v4; /*0x5a6da0*/
  v23 = 0; /*0x5a6da4*/
  v21 = 0; /*0x5a6da8*/
  v22 = 0; /*0x5a6dac*/
  v25 = 0.0; /*0x5a6dbe*/
  if ( a4 == 2 ) /*0x5a6db0*/
  {
    v6 = 1; /*0x5a6dc6*/
    v7 = 3; /*0x5a6dc8*/
    v23 = -3; /*0x5a6dca*/
    v22 = 6; /*0x5a6dd2*/
  }
  else
  {
    v6 = 3; /*0x5a6df0*/
    v7 = 1; /*0x5a6df2*/
    v5 = -3; /*0x5a6df4*/
    v21 = 6; /*0x5a6df9*/
  }
  while ( 1 ) /*0x5a6e05*/
  {
    if ( (__int16)v20 >= *(_DWORD *)aP2->__pad_0 + aP2->MapSeedClass_field_0x08 /*0x5a6e24*/
      || SHIWORD(v20) >= aP2->MapSeedClass_field_0x04 + aP2->MapSeedClass_field_0x0C )
    {
      *a0 = 0; /*0x5a6e90*/
      return a0; /*0x5a6e96*/
    }
    if ( *((CCINIClass **)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v20) + 14) == dword_ABC2B0 ) /*0x5a6e3f*/
      break; /*0x5a6e3f*/
    v9 = a4 & 7; /*0x5a6e45*/
    LOWORD(aP2a) = (_WORD)v20 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 160]; /*0x5a6e65*/
    HIWORD(aP2a) = HIWORD(v20) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 162]; /*0x5a6e6a*/
    v20 = aP2a; /*0x5a6e73*/
  }
  v11 = (__int16)v20; /*0x5a6e99*/
  while ( 1 ) /*0x5a6e9d*/
  {
    if ( v11 >= *(_DWORD *)aP2->__pad_0 + aP2->MapSeedClass_field_0x08 /*0x5a6ebc*/
      || SHIWORD(v20) >= aP2->MapSeedClass_field_0x04 + aP2->MapSeedClass_field_0x0C )
    {
      *a0 = 0; /*0x5a6f4c*/
      return a0; /*0x5a6f52*/
    }
    LODWORD(v25) = v5 + v11; /*0x5a6ec0*/
    HIDWORD(v25) = v23 + SHIWORD(v20); /*0x5a6ece*/
    v26 = v6 + v21; /*0x5a6edc*/
    v27 = v7 + v22; /*0x5a6ee4*/
    if ( IsAreaClearMap((MapClass *)&v25, v24[0], v24[0]) ) /*0x5a6eed*/
      break; /*0x5a6eed*/
    v12 = a4 & 7; /*0x5a6efa*/
    HIWORD(aP2b) = HIWORD(v20) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v12 + 162]; /*0x5a6f23*/
    v11 = (_WORD)v20 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v12 + 160]; /*0x5a6f28*/
    LOWORD(aP2b) = v11; /*0x5a6f1e*/
    v20 = aP2b; /*0x5a6f2c*/
  }
  v13 = v20; /*0x5a6f67*/
  v14 = (__int16)v20 - *(__int16 *)aP1->__pad_0; /*0x5a6f6e*/
  if ( SHIWORD(v20) - *(__int16 *)&aP1->__pad_0[2] > v14 ) /*0x5a6f72*/
    v14 = SHIWORD(v20) - *(__int16 *)&aP1->__pad_0[2]; /*0x5a6f74*/
  if ( v14 > 0 ) /*0x5a6f78*/
  {
    *(_QWORD *)v24 = (unsigned int)(v14 + 1); /*0x5a6f89*/
    v25 = (double)*(__int64 *)v24; /*0x5a6f91*/
    do /*0x5a6fc0*/
    {
      *(_QWORD *)v24 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6f9f*/
      v15 = Math::RoundToInt((double)*(__int64 *)v24 * v25 * 2.328306437080797e-10); /*0x5a6fb9*/
    }
    while ( v15 > (unsigned int)v14 ); /*0x5a6fc0*/
    aP1a = (MapSeedClass *)v15; /*0x5a6fc4*/
    if ( v15 > 0 ) /*0x5a6fc8*/
    {
      v16 = v21 + v6; /*0x5a6fe0*/
      v17 = v22 + v7; /*0x5a6fe2*/
      v18 = (_WORD *)(4 * (((_BYTE)a4 - 4) & 7) + 9041544); /*0x5a6fe4*/
      v19 = (__int16)v20; /*0x5a6feb*/
      while ( 1 ) /*0x5a7000*/
      {
        LOWORD(v31) = v19 + *v18; /*0x5a7000*/
        HIWORD(v31) = HIWORD(v20) + v18[1]; /*0x5a700b*/
        LODWORD(v25) = v5 + (__int16)v31; /*0x5a7018*/
        HIDWORD(v25) = v23 + SHIWORD(v31); /*0x5a7022*/
        v26 = v16; /*0x5a7026*/
        v27 = v17; /*0x5a702a*/
        if ( !IsAreaClearMap((MapClass *)&v25, 0, 0) ) /*0x5a702e*/
          break; /*0x5a702e*/
        v19 = v31; /*0x5a703b*/
        v20 = (MapSeedClass *)v31; /*0x5a7040*/
        aP1a = (MapSeedClass *)((char *)aP1a - 1); /*0x5a7046*/
        if ( (int)aP1a <= 0 ) /*0x5a704a*/
        {
          *a0 = v31; /*0x5a7053*/
          return a0; /*0x5a7059*/
        }
      }
    }
    v13 = v20; /*0x5a705c*/
  }
  *a0 = v13; /*0x5a7067*/
  return a0; /*0x5a6e7b*/
}
}
} // namespace gamemd

// 0x5A7070
namespace gamemd {
unsigned int * globalHelper_0A7070(MapSeedClass * aP0, short * a1, MapSeedClass * aP2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall globalHelper_0A7070(MapSeedClass *aP0, __int16 *a1, MapSeedClass *aP2, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int16 *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // si
  int v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch]
  MapClass *v19; // [esp+1Ch] [ebp-28h]
  __int64 v20; // [esp+24h] [ebp-20h]
  int v21; // [esp+2Ch] [ebp-18h]
  __int16 v22; // [esp+2Eh] [ebp-16h]
  int v23; // [esp+34h] [ebp-10h] BYREF
  int v24; // [esp+38h] [ebp-Ch]
  int v25; // [esp+3Ch] [ebp-8h]
  char *v26; // [esp+40h] [ebp-4h]
  int v27; // [esp+54h] [ebp+10h]
  int v28; // [esp+54h] [ebp+10h]

  v4 = *(_DWORD *)a1; /*0x5a7080*/
  v21 = *(_DWORD *)a1; /*0x5a708e*/
  v16 = 0; /*0x5a7092*/
  v17 = 0; /*0x5a7096*/
  v18 = 0; /*0x5a709a*/
  v19 = 0; /*0x5a709e*/
  if ( a4 == 2 ) /*0x5a70a2*/
  {
    v5 = 1; /*0x5a70a6*/
    v6 = 3; /*0x5a70ab*/
    v23 = 0; /*0x5a70b0*/
    v24 = 0; /*0x5a70b4*/
    v17 = -3; /*0x5a70b8*/
    v19 = (MapClass *)6; /*0x5a70c0*/
  }
  else
  {
    v5 = 3; /*0x5a70cc*/
    v6 = 1; /*0x5a70d1*/
    v23 = 0; /*0x5a70d6*/
    v24 = 0; /*0x5a70da*/
    v16 = -3; /*0x5a70de*/
    v18 = 6; /*0x5a70e6*/
  }
  while ( (__int16)v4 < aP2->MapSeedClass_field_0x08 + *(_DWORD *)aP2->__pad_0 + 1 ) /*0x5a70f2*/
  {
    if ( SHIWORD(v21) >= aP2->MapSeedClass_field_0x0C + aP2->MapSeedClass_field_0x04 + 1 ) /*0x5a7117*/
      break; /*0x5a7117*/
    v23 = v16 + (__int16)v4; /*0x5a711f*/
    v24 = v17 + SHIWORD(v21); /*0x5a712d*/
    v25 = v5 + v18; /*0x5a713b*/
    v26 = (char *)v19 + v6; /*0x5a7143*/
    if ( !IsAreaClearMap((MapClass *)&v23, a4 == 4, a4 == 4) ) /*0x5a714c*/
      break; /*0x5a714c*/
    v7 = a4 & 7; /*0x5a7159*/
    LOWORD(v4) = v4 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 160]; /*0x5a7185*/
    HIWORD(v21) += *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 162]; /*0x5a7189*/
  }
  v8 = ((_BYTE)a4 - 4) & 7; /*0x5a719d*/
  v9 = (__int16 *)(4 * v8 + 9041544); /*0x5a71ac*/
  HIWORD(v27) = HIWORD(v21) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v8 + 162]; /*0x5a71c1*/
  LOWORD(v27) = v4 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v8 + 160]; /*0x5a71c6*/
  v10 = v27; /*0x5a71cb*/
  v11 = (__int16)v27 - *a1; /*0x5a71d7*/
  v22 = HIWORD(v27); /*0x5a71db*/
  if ( v11 <= SHIWORD(v27) - a1[1] ) /*0x5a71df*/
    v11 = SHIWORD(v27) - a1[1]; /*0x5a71e1*/
  if ( v11 > 6 ) /*0x5a71e6*/
  {
    do /*0x5a720e*/
    {
      v20 = (unsigned int)Random::State(&g_Randomizer); /*0x5a71f4*/
      v12 = Math::RoundToInt((double)v20 * 9.31322574832319e-10); /*0x5a7206*/
    }
    while ( (unsigned int)v12 > 3 ); /*0x5a720e*/
    if ( v12 > 0 ) /*0x5a7212*/
    {
      v13 = *v9; /*0x5a7214*/
      v14 = v9[1]; /*0x5a7217*/
      do /*0x5a7237*/
      {
        LOWORD(v28) = v13 + v10; /*0x5a721e*/
        --v12; /*0x5a7229*/
        HIWORD(v28) = v14 + v22; /*0x5a722a*/
        v10 = v28; /*0x5a722f*/
        v22 += v14; /*0x5a7233*/
      }
      while ( v12 ); /*0x5a7237*/
    }
  }
  *(_DWORD *)aP0->__pad_0 = v10; /*0x5a723d*/
  return aP0->__pad_0; /*0x5a723f*/
}
}
} // namespace gamemd

// 0x5A7250
namespace gamemd {
char IsAreaClearMap(MapClass * aP0, char a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall IsAreaClearMap(MapClass *aP0, char a2, char a3)
{
  int v4; // eax
  int v5; // esi
  void *v6; // edx
  int v7; // edi
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int *v12; // esi
  void *v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  char *v17; // [esp+1Ch] [ebp-4h]

  v4 = aP0->field_0; /*0x5a7262*/
  v5 = (__int16)aP0->field_0; /*0x5a7268*/
  v15 = aP0->field_4; /*0x5a726f*/
  v16 = (__int16)v15 + v5; /*0x5a7278*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a727c*/
    return 0; /*0x5a727c*/
  if ( v5 - (__int16)v15 >= g_MapCellHeight_Value ) /*0x5a7288*/
    return 0; /*0x5a7288*/
  if ( (__int16)v15 - v5 >= g_MapCellHeight_Value ) /*0x5a7292*/
    return 0; /*0x5a7292*/
  if ( v16 > g_MapCellCount ) /*0x5a72a4*/
    return 0; /*0x5a72a4*/
  v6 = aP0->field_8; /*0x5a72aa*/
  v7 = (__int16)(v4 + (_WORD)v6 - 1); /*0x5a72b1*/
  v16 = (__int16)v15 + v7; /*0x5a72bc*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a72c0*/
    return 0; /*0x5a72c0*/
  if ( v7 - (__int16)v15 >= g_MapCellHeight_Value ) /*0x5a72cc*/
    return 0; /*0x5a72cc*/
  if ( (__int16)v15 - v7 >= g_MapCellHeight_Value ) /*0x5a72d6*/
    return 0; /*0x5a72d6*/
  if ( v16 > g_MapCellCount ) /*0x5a72e8*/
    return 0; /*0x5a72e8*/
  v17 = (char *)aP0->field_C + (unsigned int)v15 - 1; /*0x5a72f9*/
  v16 = (__int16)v17 + (__int16)v4; /*0x5a7308*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a730c*/
    return 0; /*0x5a730c*/
  if ( (__int16)v4 - (__int16)v17 >= g_MapCellHeight_Value ) /*0x5a7318*/
    return 0; /*0x5a7318*/
  if ( (__int16)v17 - (__int16)v4 >= g_MapCellHeight_Value ) /*0x5a7322*/
    return 0; /*0x5a7322*/
  if ( v16 > g_MapCellCount ) /*0x5a7334*/
    return 0; /*0x5a7334*/
  v8 = (__int16)(v4 + (_WORD)v6 - 1); /*0x5a733e*/
  v9 = (__int16)v17; /*0x5a7341*/
  v17 = (char *)((__int16)v17 + v8); /*0x5a734b*/
  if ( (int)v17 <= g_MapCellHeight_Value /*0x5a7377*/
    || v8 - v9 >= g_MapCellHeight_Value
    || v9 - v8 >= g_MapCellHeight_Value
    || (int)v17 > g_MapCellCount )
  {
    return 0; /*0x5a742a*/
  }
  v10 = (int)v15; /*0x5a7384*/
  if ( (int)v15 < (int)((int)v15 + (unsigned int)aP0->field_C) ) /*0x5a738a*/
  {
    do /*0x5a7418*/
    {
      v11 = v4; /*0x5a7390*/
      if ( v4 < (int)v6 + v4 ) /*0x5a7397*/
      {
        do /*0x5a73a3*/
        {
          LOWORD(v15) = v11; /*0x5a73a3*/
          HIWORD(v15) = v10; /*0x5a73a8*/
          v12 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v15); /*0x5a73b2*/
          if ( sub_4866D0(v12) ) /*0x5a73b6*/
          {
            if ( !a2 ) /*0x5a73c5*/
              return 0; /*0x5a73c5*/
          }
          else if ( sub_4866F0(v12) ) /*0x5a73cb*/
          {
            if ( !a3 ) /*0x5a73da*/
              return 0; /*0x5a73da*/
          }
          else if ( !Cell::IsEmpty(v12) && !CellClass::InMapDataRange(v12) && !CellClass::InBounds(v12) ) /*0x5a73fd*/
          {
            return 0; /*0x5a73fd*/
          }
          v6 = aP0->field_8; /*0x5a73ff*/
          v4 = aP0->field_0; /*0x5a7402*/
          ++v11; /*0x5a7405*/
        }
        while ( v11 < (int)v6 + aP0->field_0 ); /*0x5a73a3*/
      }
      ++v10; /*0x5a740d*/
    }
    while ( v10 < (int)((int)aP0->field_C + (unsigned int)aP0->field_4) ); /*0x5a7418*/
  }
  return 1; /*0x5a741e*/
}
}
} // namespace gamemd

// 0x5A7440
namespace gamemd {
char MapClass_IsAreaUniform(int * a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall MapClass_IsAreaUniform(int *a1, char a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  char *v7; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebp
  char *v11; // esi
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v3 = *a1; /*0x5a7452*/
  v4 = a1[1]; /*0x5a7454*/
  v5 = (__int16)*a1; /*0x5a7457*/
  v14 = (__int16)v4 + v5; /*0x5a7462*/
  if ( v14 > g_MapCellHeight_Value /*0x5a748e*/
    && v5 - (__int16)v4 < g_MapCellHeight_Value
    && (__int16)v4 - v5 < g_MapCellHeight_Value
    && v14 <= g_MapCellCount )
  {
    v15 = a1[2] + v3 - 1; /*0x5a749b*/
    v14 = (__int16)v4 + (__int16)v15; /*0x5a74aa*/
    if ( v14 > g_MapCellHeight_Value /*0x5a74d6*/
      && (__int16)v15 - (__int16)v4 < g_MapCellHeight_Value
      && (__int16)v4 - (__int16)v15 < g_MapCellHeight_Value
      && v14 <= g_MapCellCount )
    {
      v16 = a1[3] + v4 - 1; /*0x5a74e3*/
      v14 = (__int16)v16 + (__int16)v3; /*0x5a74f2*/
      if ( v14 > g_MapCellHeight_Value /*0x5a751e*/
        && (__int16)v3 - (__int16)v16 < g_MapCellHeight_Value
        && (__int16)v16 - (__int16)v3 < g_MapCellHeight_Value
        && v14 <= g_MapCellCount )
      {
        v6 = (__int16)v16; /*0x5a7529*/
        v16 = (__int16)v16 + (__int16)v15; /*0x5a7533*/
        if ( v16 > g_MapCellHeight_Value /*0x5a755f*/
          && (__int16)v15 - v6 < g_MapCellHeight_Value
          && v6 - (__int16)v15 < g_MapCellHeight_Value
          && v16 <= g_MapCellCount )
        {
          LOWORD(v14) = v3; /*0x5a756f*/
          HIWORD(v14) = v4; /*0x5a7574*/
          v7 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x5a7579*/
          v8 = a1[1]; /*0x5a757e*/
          v9 = v8 + a1[3]; /*0x5a758b*/
          v16 = v7[283]; /*0x5a758d*/
          if ( v8 >= v9 ) /*0x5a7593*/
            return 1; /*0x5a7635*/
          while ( 1 ) /*0x5a7599*/
          {
            v10 = *a1; /*0x5a7599*/
            if ( *a1 < *a1 + a1[2] ) /*0x5a75a2*/
              break; /*0x5a75a2*/
LABEL_28:
            if ( ++v8 >= a1[3] + a1[1] ) /*0x5a7626*/
              return 1; /*0x5a7626*/
          }
          while ( 1 ) /*0x5a75a8*/
          {
            LOWORD(v14) = v10; /*0x5a75a8*/
            HIWORD(v14) = v8; /*0x5a75b3*/
            v11 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x5a75bd*/
            if ( v11[283] != v16 ) /*0x5a75cc*/
              break; /*0x5a75cc*/
            if ( (unsigned __int8)sub_4866D0(v11) || (unsigned __int8)sub_4866F0(v11) ) /*0x5a75db*/
            {
              if ( !a2 ) /*0x5a760d*/
                return 0; /*0x5a760d*/
            }
            else if ( !Cell::IsEmpty(v11) /*0x5a7603*/
                   && !(unsigned __int8)CellClass::InMapDataRange(v11)
                   && !(unsigned __int8)CellClass::InBounds(v11) )
            {
              return 0; /*0x5a7603*/
            }
            if ( ++v10 >= *a1 + a1[2] ) /*0x5a7619*/
              goto LABEL_28; /*0x5a7619*/
          }
        }
      }
    }
  }
  return 0; /*0x5a762c*/
}
}
} // namespace gamemd

// 0x5A78D0
namespace gamemd {
unsigned int PlaceMapSeedBuildingsStrategic(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __stdcall PlaceMapSeedBuildingsStrategic(int a1)
{
  int v1; // edi
  int v2; // ecx
  unsigned int result; // eax
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // edi
  char v10; // bl
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // edi
  int v18; // ebp
  int v19; // ecx
  int v20; // esi
  int v21; // [esp+10h] [ebp-94h]
  double v22; // [esp+14h] [ebp-90h]
  int *v23; // [esp+14h] [ebp-90h]
  int v24; // [esp+1Ch] [ebp-88h] BYREF
  int v25; // [esp+20h] [ebp-84h]
  int v26; // [esp+24h] [ebp-80h]
  int v27; // [esp+28h] [ebp-7Ch]
  _WORD v28[2]; // [esp+2Ch] [ebp-78h] BYREF
  int v29; // [esp+30h] [ebp-74h]
  int v30; // [esp+34h] [ebp-70h]
  int v31; // [esp+38h] [ebp-6Ch]
  __int64 v32; // [esp+3Ch] [ebp-68h]
  __int64 v33; // [esp+44h] [ebp-60h]
  __int64 v34; // [esp+4Ch] [ebp-58h]
  int v35; // [esp+54h] [ebp-50h]
  int v36; // [esp+58h] [ebp-4Ch]
  int v37; // [esp+5Ch] [ebp-48h]
  _DWORD v38[17]; // [esp+60h] [ebp-44h] BYREF

  v37 = 6; /*0x5a78e3*/
  v38[0] = 4; /*0x5a78e7*/
  v1 = a1; /*0x5a78f3*/
  v38[4] = 6; /*0x5a78fa*/
  v38[8] = 4; /*0x5a7902*/
  v38[3] = 4; /*0x5a7910*/
  v38[7] = 4; /*0x5a7914*/
  v38[11] = 4; /*0x5a7918*/
  v35 = 0; /*0x5a791f*/
  v36 = 0; /*0x5a7923*/
  v38[1] = 0; /*0x5a7927*/
  v38[2] = 0; /*0x5a792b*/
  v38[5] = 0; /*0x5a792f*/
  v38[6] = 0; /*0x5a7933*/
  v38[9] = 0; /*0x5a7937*/
  v38[10] = 0; /*0x5a793e*/
  v38[13] = 0; /*0x5a7947*/
  v38[14] = 0; /*0x5a794e*/
  v2 = *(_DWORD *)(a1 + 16); /*0x5a7955*/
  v38[15] = 2; /*0x5a795d*/
  v38[12] = 2; /*0x5a796b*/
  result = (unsigned int)((unsigned __int64)(1374389535LL * v2) >> 32) >> 31; /*0x5a7972*/
  v4 = v2 / 50; /*0x5a797c*/
  v38[16] = 4; /*0x5a797e*/
  v30 = v2 / 50; /*0x5a7987*/
  v21 = 0; /*0x5a798f*/
  v5 = 10 * (v2 / 50); /*0x5a7993*/
  v29 = 0; /*0x5a7997*/
  v31 = v5; /*0x5a799b*/
  if ( v5 > 0 ) /*0x5a799f*/
  {
    while ( v21 < v4 ) /*0x5a79b2*/
    {
      v6 = *(_DWORD *)(v1 + 16) - 1; /*0x5a79c3*/
      v34 = *(unsigned int *)(v1 + 16); /*0x5a79c7*/
      v22 = (double)v34; /*0x5a79cf*/
      do /*0x5a79fe*/
      {
        v33 = (unsigned int)Random::State(&g_Randomizer); /*0x5a79dd*/
        v7 = Math::RoundToInt((double)v33 * v22 * 2.328306437080797e-10); /*0x5a79f7*/
      }
      while ( v7 > v6 ); /*0x5a79fe*/
      v8 = *(_DWORD *)(v1 + 4); /*0x5a7a00*/
      v9 = 0; /*0x5a7a03*/
      v10 = 0; /*0x5a7a05*/
      v11 = *(_DWORD *)(v8 + 4 * v7); /*0x5a7a07*/
      v12 = SHIWORD(v11); /*0x5a7a0e*/
      v24 = (__int16)v11; /*0x5a7a16*/
      v26 = 0; /*0x5a7a1c*/
      v27 = 0; /*0x5a7a20*/
      v13 = v38; /*0x5a7a24*/
      v25 = v12; /*0x5a7a28*/
      v23 = v38; /*0x5a7a2c*/
      while ( v9 < 5 ) /*0x5a7a39*/
      {
        v14 = *(v13 - 1); /*0x5a7a3b*/
        v15 = *v13; /*0x5a7a3e*/
        v26 = v14; /*0x5a7a44*/
        v27 = v15; /*0x5a7a48*/
        if ( (unsigned __int8)CellClass::ProcessUpdate(&v24) ) /*0x5a7a4c*/
          v10 = 1; /*0x5a7a55*/
        ++v9; /*0x5a7a5b*/
        v23 += 4; /*0x5a7a61*/
        if ( v10 ) /*0x5a7a65*/
        {
          do /*0x5a7a99*/
          {
            v32 = (unsigned int)Random::State(&g_Randomizer); /*0x5a7a7b*/
            v16 = Math::RoundToInt((double)v32 * 0.000000001396983862248478); /*0x5a7a91*/
          }
          while ( v16 > 5 ); /*0x5a7a99*/
          v17 = 0; /*0x5a7aa1*/
          v18 = v16 + unk_AA10A4 + 8; /*0x5a7aa3*/
          if ( v27 / 2 > 0 ) /*0x5a7ab2*/
          {
            v19 = v26; /*0x5a7ab4*/
            do /*0x5a7b08*/
            {
              v20 = 0; /*0x5a7aba*/
              if ( v19 / 2 > 0 ) /*0x5a7ac3*/
              {
                do /*0x5a7afa*/
                {
                  v28[1] = v25 + 2 * v17; /*0x5a7ad7*/
                  v28[0] = v24 + 2 * v20; /*0x5a7ae2*/
                  PlaceMapSeedClassBuildings(v18, v28, -1, -1); /*0x5a7ae7*/
                  v19 = v26; /*0x5a7aec*/
                  ++v20; /*0x5a7af0*/
                }
                while ( v20 < v26 / 2 ); /*0x5a7afa*/
              }
              ++v17; /*0x5a7b00*/
            }
            while ( v17 < v27 / 2 ); /*0x5a7b08*/
            v5 = v31; /*0x5a7b0a*/
          }
          v4 = v30; /*0x5a7b12*/
          ++v21; /*0x5a7b17*/
          break; /*0x5a7b17*/
        }
        v13 = v23; /*0x5a7a32*/
      }
      result = ++v29; /*0x5a7b1f*/
      if ( v29 >= v5 ) /*0x5a7b26*/
        break; /*0x5a7b26*/
      v1 = a1; /*0x5a79a7*/
    }
  }
  return result; /*0x5a7b2c*/
}
}
} // namespace gamemd

// 0x5A7FA0
namespace gamemd {
int IsoTile_Draw(int a1, unsigned short * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall IsoTile_Draw(int a1, _WORD *a2, char a3)
{
  _WORD *v3; // esi
  _DWORD *v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // edi
  int i; // ebx
  __int16 v9; // dx
  int v10; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // [esp+8h] [ebp-10h]
  _DWORD *v14; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x5a7faa*/
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + a1); /*0x5a7fac*/
  v14 = v4; /*0x5a7fb5*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a7fbb*/
  v16 = result; /*0x5a7fc3*/
  if ( result ) /*0x5a7fc7*/
  {
    result = 0; /*0x5a7fd3*/
    v13 = 0; /*0x5a7fd7*/
    if ( (int)v4[186] > 0 ) /*0x5a7fdb*/
    {
      v6 = g_MapCellHeight_Value; /*0x5a7fe3*/
      while ( 1 ) /*0x5a7fef*/
      {
        v7 = v4[185]; /*0x5a7fef*/
        for ( i = 0; i < v7; v7 = v14[185] ) /*0x5a7ff9*/
        {
          v9 = v3[1] + result; /*0x5a8005*/
          v10 = (__int16)(i + *v3); /*0x5a800c*/
          v11 = v9; /*0x5a800f*/
          v12 = v9 + v10; /*0x5a8012*/
          if ( v12 > v6 ) /*0x5a8017*/
          {
            if ( v10 - v11 >= v6 || v11 - v10 >= v6 || v12 > g_MapCellCount ) /*0x5a802f*/
            {
              result = v13; /*0x5a806a*/
            }
            else
            {
              result = v13; /*0x5a8031*/
              if ( *(_DWORD *)(v16 + 4 * (i + v13 * v7) + 16) ) /*0x5a803e*/
              {
                *((_BYTE *)g_MapTileArray + 80 * v10 + 80 * unk_89C2DC * v11 + 70) = a3; /*0x5a805e*/
                v6 = g_MapCellHeight_Value; /*0x5a8062*/
              }
            }
          }
          v3 = a2; /*0x5a8072*/
          ++i; /*0x5a8076*/
        }
        v13 = ++result; /*0x5a808a*/
        if ( result >= v14[186] ) /*0x5a8094*/
          break; /*0x5a8094*/
        v4 = v14; /*0x5a7feb*/
      }
    }
  }
  return result; /*0x5a809c*/
}
}
} // namespace gamemd

// 0x5A8720
namespace gamemd {
int PlaceNeutralCreeps(unsigned short * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall PlaceNeutralCreeps(_WORD *a1)
{
  void *v1; // eax
  IUnknown *OwnerHouseClass; // ebp
  int result; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int ExitCellByNameFactory; // eax
  _DWORD *v8; // esi
  void *v9; // edi
  int IndexBuildingTypeClass; // eax
  int v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int16 v14; // cx
  __int16 v15; // di
  __int16 v16; // ax
  unsigned int v17; // eax
  int v18; // edx
  int v19; // eax
  char v20; // [esp+13h] [ebp-49h]
  int v21; // [esp+14h] [ebp-48h] BYREF
  int v22; // [esp+18h] [ebp-44h]
  int v23; // [esp+1Ch] [ebp-40h]
  int v24; // [esp+20h] [ebp-3Ch]
  __int64 v25; // [esp+24h] [ebp-38h]
  IUnknown *v26; // [esp+2Ch] [ebp-30h]
  __int64 v27; // [esp+30h] [ebp-2Ch]
  __int64 v28; // [esp+38h] [ebp-24h]
  __int64 v29; // [esp+40h] [ebp-1Ch]
  __int64 v30; // [esp+48h] [ebp-14h]
  _DWORD v31[3]; // [esp+50h] [ebp-Ch] BYREF

  v1 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a872c*/
  OwnerHouseClass = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a8738*/
  v26 = OwnerHouseClass; /*0x5a873c*/
  do /*0x5a876e*/
  {
    v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a874a*/
    result = Math::RoundToInt((double)v25 * 9.31322574832319e-10 + 1.0); /*0x5a8762*/
    v23 = result; /*0x5a876a*/
  }
  while ( (unsigned int)result > 4 ); /*0x5a876e*/
  v22 = 0; /*0x5a8772*/
  v24 = 0; /*0x5a8776*/
  if ( result > 0 ) /*0x5a877a*/
  {
    while ( 1 ) /*0x5a878e*/
    {
      result = 2 * v23; /*0x5a878e*/
      if ( v22 >= 2 * v23 ) /*0x5a8792*/
        return result; /*0x5a8792*/
      do /*0x5a87be*/
      {
        v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a87a2*/
        v4 = Math::RoundToInt((double)v27 * 0.000000001396983862248478); /*0x5a87b4*/
        v5 = v4; /*0x5a87b9*/
      }
      while ( (unsigned int)v4 > 5 ); /*0x5a87be*/
      if ( v4 > 2 ) /*0x5a87c3*/
      {
        v9 = __2_YAPAXI_Z(0x8E8u); /*0x5a8804*/
        if ( !v9 ) /*0x5a880b*/
        {
LABEL_13:
          v8 = 0; /*0x5a882f*/
          goto LABEL_14; /*0x5a882f*/
        }
        IndexBuildingTypeClass = BuildingTypeClass::FindIndex(*(&off_82B240 + v5)); /*0x5a8814*/
        v8 = (_DWORD *)UnitClass::Construct( /*0x5a882b*/
                         (int)v9,
                         *((_DWORD *)g_UnitTypeCount2 + IndexBuildingTypeClass),
                         OwnerHouseClass);
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a87cf*/
        if ( !v6 ) /*0x5a87d6*/
          goto LABEL_13; /*0x5a87d6*/
        ExitCellByNameFactory = Factory::FindExitCellByName(*(&off_82B240 + v5)); /*0x5a87df*/
        v8 = (_DWORD *)InfantryClass::Construct( /*0x5a87f6*/
                         (int)v6,
                         *((_DWORD *)MEMORY[0xA8E34C] + ExitCellByNameFactory),
                         OwnerHouseClass);
      }
LABEL_14:
      v11 = 0; /*0x5a8831*/
      v20 = 0; /*0x5a8833*/
      while ( v11 < 60 ) /*0x5a883a*/
      {
        do /*0x5a8866*/
        {
          v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a884a*/
          v12 = Math::RoundToInt((double)v28 * 0.000000003958120943037356); /*0x5a8861*/
        }
        while ( v12 > 0x10 ); /*0x5a8866*/
        do /*0x5a888c*/
        {
          v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8872*/
          v13 = Math::RoundToInt((double)v29 * 0.000000003958120943037356); /*0x5a8884*/
        }
        while ( v13 > 0x10 ); /*0x5a888c*/
        v14 = v12 - 8; /*0x5a8892*/
        v15 = v13 - 8 + *a1; /*0x5a889d*/
        v16 = v14 + a1[1]; /*0x5a88a4*/
        LOWORD(v25) = v15; /*0x5a88a7*/
        WORD1(v25) = v16; /*0x5a88ac*/
        v21 = v25; /*0x5a88b9*/
        if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v21, 1) /*0x5a88df*/
          && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21) + 57) )
        {
          do /*0x5a890f*/
          {
            v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a88f5*/
            v17 = Math::RoundToInt((double)v30 * 0.000000001862645149664638); /*0x5a8907*/
          }
          while ( v17 > 7 ); /*0x5a890f*/
          v31[1] = (SHIWORD(v21) << 8) + 128; /*0x5a8931*/
          v18 = *v8; /*0x5a8935*/
          v31[0] = ((__int16)v21 << 8) + 128; /*0x5a893b*/
          v31[2] = 0; /*0x5a8942*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(v18 + 216))(v8, v31, 32 * v17) ) /*0x5a8946*/
          {
            v19 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 160); /*0x5a895a*/
            v8[27] = v19; /*0x5a8962*/
            v8[28] = v19; /*0x5a8965*/
            (*(void (__thiscall **)(_DWORD *, int))(*v8 + 292))(v8, 2); /*0x5a896c*/
            v20 = 1; /*0x5a8976*/
            ++v24; /*0x5a897c*/
          }
        }
        ++v11; /*0x5a8984*/
        if ( v20 ) /*0x5a8987*/
          goto LABEL_27; /*0x5a8987*/
      }
      if ( v8 ) /*0x5a8997*/
        (*(void (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x5a899f*/
LABEL_27:
      result = v23; /*0x5a89a2*/
      ++v22; /*0x5a89b1*/
      if ( v24 >= v23 ) /*0x5a89b5*/
        return result; /*0x5a89b5*/
      OwnerHouseClass = v26; /*0x5a8782*/
    }
  }
  return result; /*0x5a89bb*/
}
}
} // namespace gamemd

// 0x5A89D0
namespace gamemd {
bool MapSeed_ScheduleBuildings(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall MapSeed_ScheduleBuildings(int *a1)
{
  int v1; // ebx
  _DWORD *v2; // esi
  int v3; // edi
  unsigned int v4; // edi
  int v5; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // ebx
  int v17; // esi
  _DWORD *v18; // ebp
  int v19; // eax
  _DWORD *v20; // esi
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  bool v24; // cc
  char *v25; // edi
  int v26; // edx
  __int16 v27; // ax
  char *v28; // ebx
  int v29; // eax
  int v30; // ebp
  char *v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  bool v37; // zf
  char v38; // [esp+13h] [ebp-6055h]
  _DWORD v39[5]; // [esp+14h] [ebp-6054h] BYREF
  void *Block; // [esp+28h] [ebp-6040h]
  int v41; // [esp+2Ch] [ebp-603Ch]
  int v42; // [esp+30h] [ebp-6038h]
  int v43; // [esp+34h] [ebp-6034h] BYREF
  int v44; // [esp+38h] [ebp-6030h]
  int v45; // [esp+3Ch] [ebp-602Ch]
  int v46; // [esp+40h] [ebp-6028h]
  _DWORD *v47; // [esp+44h] [ebp-6024h]
  __int64 v48; // [esp+48h] [ebp-6020h] BYREF
  int v49; // [esp+50h] [ebp-6018h]
  int v50; // [esp+54h] [ebp-6014h]
  __int16 v51; // [esp+58h] [ebp-6010h] BYREF
  int v52; // [esp+5Ch] [ebp-600Ch]
  int v53; // [esp+60h] [ebp-6008h]
  int v54; // [esp+64h] [ebp-6004h]
  _DWORD v55[6144]; // [esp+68h] [ebp-6000h] BYREF

  v1 = 0; /*0x5a89dd*/
  v52 = 0; /*0x5a89e0*/
  v2 = v55; /*0x5a89e4*/
  v3 = 1024; /*0x5a89e8*/
  do /*0x5a89f8*/
  {
    Object_Helper_5A99B0(v2); /*0x5a89ef*/
    v2 += 5; /*0x5a89f4*/
    --v3; /*0x5a89f7*/
  }
  while ( v3 ); /*0x5a89f8*/
  v52 = 0; /*0x5a89fa*/
  v53 = 0; /*0x5a89fe*/
  v54 = 0; /*0x5a8a02*/
  v42 = 0; /*0x5a8a06*/
  do /*0x5a8a30*/
  {
    v48 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8a14*/
    v4 = Math::RoundToInt((double)v48 * 0.000000002561137080788877); /*0x5a8a2b*/
  }
  while ( v4 > 0xA ); /*0x5a8a30*/
  while ( 1 ) /*0x5a8a52*/
  {
    v5 = dword_ABAD20 + (int)(v4 + v1) % 11; /*0x5a8a52*/
    if ( (unsigned __int8)Map_Helper_5A7D00(0, 0) ) /*0x5a8a56*/
      break; /*0x5a8a56*/
    if ( ++v1 >= 11 ) /*0x5a8a63*/
      return 0; /*0x5a8a63*/
  }
  v7 = *a1; /*0x5a8a74*/
  v39[0] = v5; /*0x5a8a77*/
  v39[1] = v7; /*0x5a8a7b*/
  v39[3] = v7; /*0x5a8a7f*/
  v39[2] = 0xFFFF; /*0x5a8a87*/
  v39[4] = -1; /*0x5a8a94*/
  qmemcpy(&v55[5 * v54], v39, 0x14u); /*0x5a8ab2*/
  v55[v54 + 5120] = timeGetTime(); /*0x5a8abe*/
  v54 = ((_WORD)v54 + 1) & 0x3FF; /*0x5a8ad5*/
  v8 = ++v52; /*0x5a8ad4*/
  if ( !v52 ) /*0x5a8adf*/
    return 0; /*0x5a8adf*/
  while ( v8 < 1020 ) /*0x5a8ae6*/
  {
    v38 = 1; /*0x5a8af0*/
    v9 = v55[5 * v53]; /*0x5a8af8*/
    v10 = &v55[5 * v53]; /*0x5a8afc*/
    v39[0] = v9; /*0x5a8b00*/
    v39[1] = v10[1]; /*0x5a8b0d*/
    v11 = v10[2]; /*0x5a8b11*/
    v39[2] = v11; /*0x5a8b14*/
    v39[3] = v10[3]; /*0x5a8b1b*/
    v39[4] = v10[4]; /*0x5a8b22*/
    v12 = 0; /*0x5a8b29*/
    v41 = 0; /*0x5a8b2d*/
    Block = 0; /*0x5a8b31*/
    if ( v9 == 0xFFFF ) /*0x5a8b35*/
      goto LABEL_48; /*0x5a8b35*/
    if ( v11 != 0xFFFF ) /*0x5a8b41*/
    {
      DrawIsoTile(v11, &v39[3], 0); /*0x5a8b4a*/
      v9 = v39[0]; /*0x5a8b4f*/
    }
    PlaceMapSeedClassBuildings(v9, &v39[1], -1, -1); /*0x5a8b5b*/
    v9 = v39[0]; /*0x5a8b60*/
    if ( v39[0] < dword_ABC1D4 || v39[0] >= dword_ABC1D4 + 101 ) /*0x5a8b73*/
    {
      if ( v39[0] < dword_ABBEC0 || v39[0] >= dword_ABBEC0 + 8 ) /*0x5a8b8a*/
        v13 = 0; /*0x5a8b95*/
      else
        v13 = v39[0] - dword_ABBEC0 + 101; /*0x5a8b90*/
    }
    else
    {
      v13 = v39[0] - dword_ABC1D4; /*0x5a8b77*/
    }
    v14 = 3 * v13; /*0x5a8b97*/
    v15 = dword_ABE370[3 * v13]; /*0x5a8b9a*/
    v16 = (_DWORD *)(4 * v14 + 11264880); /*0x5a8ba4*/
    v47 = v16; /*0x5a8bab*/
    if ( v15 > 1 ) /*0x5a8baf*/
    {
      v17 = v15 - (v39[4] != -1); /*0x5a8bc3*/
      v18 = __2_YAPAXI_Z(20 * v17); /*0x5a8bd1*/
      if ( v18 ) /*0x5a8bd8*/
      {
        v19 = v17 - 1; /*0x5a8bde*/
        if ( v17 - 1 >= 0 ) /*0x5a8be3*/
        {
          v20 = v18 + 2; /*0x5a8be5*/
          v21 = v19 + 1; /*0x5a8be8*/
          do /*0x5a8c27*/
          {
            *(v20 - 2) = 0xFFFF; /*0x5a8bf3*/
            *(v20 - 1) = *(_DWORD *)CellStruct::Set(&v51, 0, 0); /*0x5a8c09*/
            *v20 = 0xFFFF; /*0x5a8c0c*/
            v22 = *(_DWORD *)CellStruct::Set(&v48, 0, 0); /*0x5a8c17*/
            v20[2] = -1; /*0x5a8c19*/
            v20[1] = v22; /*0x5a8c20*/
            v20 += 5; /*0x5a8c23*/
            --v21; /*0x5a8c26*/
          }
          while ( v21 ); /*0x5a8c27*/
          v12 = v41; /*0x5a8c29*/
        }
        v23 = 0; /*0x5a8c2f*/
        v24 = *v16 <= 0; /*0x5a8c31*/
        Block = v18; /*0x5a8c33*/
        v44 = 0; /*0x5a8c37*/
        if ( !v24 ) /*0x5a8c3b*/
        {
          v25 = (char *)(v18 + 1); /*0x5a8c41*/
          while ( 1 ) /*0x5a8c44*/
          {
            if ( v23 != v39[4] ) /*0x5a8c48*/
            {
              v26 = v16[1]; /*0x5a8c4e*/
              v49 = *(_DWORD *)(v26 + 8 * v23); /*0x5a8c62*/
              v50 = *(_DWORD *)(v26 + 8 * v23 + 4); /*0x5a8c6b*/
              v27 = HIWORD(MEMORY[0x89F688][v50 & 7]); /*0x5a8c90*/
              LOWORD(v45) = LOWORD(v39[1]) + v49 + LOWORD(MEMORY[0x89F688][v50 & 7]); /*0x5a8c94*/
              HIWORD(v45) = HIWORD(v39[1]) + HIWORD(v49) + v27; /*0x5a8ca0*/
              v46 = v45; /*0x5a8cae*/
              v43 = 0; /*0x5a8cbb*/
              if ( !(unsigned __int8)PlaceRandomTerrainFeatures(1, v25 + 4, v25 + 8, &v43) ) /*0x5a8cca*/
              {
                v9 = v39[0]; /*0x5a8dc0*/
                v12 = v41; /*0x5a8dc4*/
                v38 = 0; /*0x5a8dc8*/
                goto LABEL_34; /*0x5a8dcd*/
              }
              if ( (unsigned __int8)PlaceRandomTerrainFeatures(4, v25 - 4, v25, v25 + 12) ) /*0x5a8ce1*/
                DrawIsoTile(*((_DWORD *)v25 - 1), v25, 1); /*0x5a8d80*/
              else
                *((_DWORD *)v25 + 3) = v43; /*0x5a8cf2*/
              DrawIsoTile(*((_DWORD *)v25 + 1), (_WORD *)v25 + 4, 1); /*0x5a8d8b*/
              v16 = v47; /*0x5a8d94*/
              v23 = v44; /*0x5a8d98*/
              ++v41; /*0x5a8d9d*/
              v25 += 20; /*0x5a8da1*/
            }
            v24 = ++v23 < *v16; /*0x5a8da7*/
            v44 = v23; /*0x5a8da9*/
            if ( !v24 ) /*0x5a8dad*/
            {
              v9 = v39[0]; /*0x5a8db3*/
              v12 = v41; /*0x5a8db7*/
              goto LABEL_34; /*0x5a8dbb*/
            }
          }
        }
      }
      else
      {
        Block = 0; /*0x5a8cfa*/
      }
      v9 = v39[0]; /*0x5a8d02*/
    }
LABEL_34:
    if ( !v38 ) /*0x5a8d0c*/
    {
      v11 = v39[2]; /*0x5a8dd2*/
LABEL_48:
      if ( v9 != 0xFFFF ) /*0x5a8ddc*/
      {
        Object_Helper_5A7E90(v9, &v39[1]); /*0x5a8de2*/
        if ( v12 > 0 ) /*0x5a8de9*/
        {
          v31 = (char *)Block + 8; /*0x5a8def*/
          do /*0x5a8e1f*/
          {
            v32 = *((_DWORD *)v31 - 2); /*0x5a8df2*/
            if ( v32 != 0xFFFF ) /*0x5a8dfb*/
              DrawIsoTile(v32, (_WORD *)v31 - 2, 0); /*0x5a8e02*/
            if ( *(_DWORD *)v31 != 0xFFFF ) /*0x5a8e0f*/
              DrawIsoTile(*(_DWORD *)v31, (_WORD *)v31 + 2, 0); /*0x5a8e16*/
            v31 += 20; /*0x5a8e1b*/
            --v12; /*0x5a8e1e*/
          }
          while ( v12 ); /*0x5a8e1f*/
        }
        v11 = v39[2]; /*0x5a8e21*/
      }
      if ( v11 != 0xFFFF ) /*0x5a8e2b*/
        PlaceMapSeedClassBuildings(v11, &v39[3], -1, -1); /*0x5a8e37*/
LABEL_59:
      if ( Block ) /*0x5a8e42*/
        __3_YAXPAX_Z(Block); /*0x5a8e45*/
      goto LABEL_61; /*0x5a8e45*/
    }
    v28 = (char *)Block; /*0x5a8d12*/
    if ( Block ) /*0x5a8d18*/
    {
      if ( v12 > 0 ) /*0x5a8d20*/
      {
        v29 = v54; /*0x5a8d26*/
        v30 = v12; /*0x5a8d2a*/
        do /*0x5a8d72*/
        {
          if ( v52 < 1024 ) /*0x5a8d34*/
          {
            qmemcpy(&v55[5 * v29], v28, 0x14u); /*0x5a8d44*/
            v55[v54 + 5120] = timeGetTime(); /*0x5a8d50*/
            v29 = ((_WORD)v54 + 1) & 0x3FF; /*0x5a8d60*/
            v54 = v29; /*0x5a8d66*/
            ++v52; /*0x5a8d6a*/
          }
          v28 += 20; /*0x5a8d6e*/
          --v30; /*0x5a8d71*/
        }
        while ( v30 ); /*0x5a8d72*/
      }
      goto LABEL_59; /*0x5a8d72*/
    }
LABEL_61:
    v8 = v52; /*0x5a8e4d*/
    if ( v52 ) /*0x5a8e53*/
    {
      v8 = v52 - 1; /*0x5a8e60*/
      v53 = ((_WORD)v53 + 1) & 0x3FF; /*0x5a8e61*/
      --v52; /*0x5a8e65*/
    }
    ++v42; /*0x5a8e70*/
    if ( !v8 ) /*0x5a8e74*/
      return v42 > 1; /*0x5a8e74*/
  }
  v33 = v53; /*0x5a8e80*/
  do /*0x5a8edd*/
  {
    v34 = 5 * v33; /*0x5a8e84*/
    v35 = v55[v34]; /*0x5a8e8b*/
    v36 = &v55[v34]; /*0x5a8e8f*/
    v39[0] = v35; /*0x5a8e93*/
    v39[1] = v36[1]; /*0x5a8e9a*/
    v39[2] = v36[2]; /*0x5a8ea1*/
    v39[3] = v36[3]; /*0x5a8ea8*/
    v39[4] = v36[4]; /*0x5a8eb3*/
    PlaceMapSeedClassBuildings(v39[2], &v39[3], -1, -1); /*0x5a8eb7*/
    if ( !v52 ) /*0x5a8ec2*/
      break; /*0x5a8ec2*/
    v33 = ((_WORD)v53 + 1) & 0x3FF; /*0x5a8ecf*/
    v37 = v52 == 1; /*0x5a8ed4*/
    v53 = v33; /*0x5a8ed5*/
    --v52; /*0x5a8ed9*/
  }
  while ( !v37 ); /*0x5a8edd*/
  return v42 > 1; /*0x5a8ee4*/
}
}
} // namespace gamemd

// 0x5A8F00
namespace gamemd {
char PlaceRandomTerrainFeatures(int a1, unsigned short * a2, int a3, unsigned int * a4, unsigned int * a5, int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall PlaceRandomTerrainFeatures(int a1, _WORD *a2, int a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // esi
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-60h]
  unsigned int v20; // [esp+14h] [ebp-5Ch]
  int v22; // [esp+24h] [ebp-4Ch]
  double v23; // [esp+24h] [ebp-4Ch]
  double v25; // [esp+30h] [ebp-40h]
  int v26; // [esp+30h] [ebp-40h]
  double v27; // [esp+38h] [ebp-38h]
  __int64 v28; // [esp+50h] [ebp-20h]
  __int64 v29; // [esp+60h] [ebp-10h]
  int v30; // [esp+68h] [ebp-8h]
  int v31; // [esp+74h] [ebp+4h]

  v6 = 1; /*0x5a8f0b*/
  v19 = 1; /*0x5a8f1a*/
  v22 = 1; /*0x5a8f1e*/
  if ( a3 <= 1 ) /*0x5a8f22*/
    goto LABEL_8; /*0x5a8f22*/
  v27 = 0.5; /*0x5a8f2c*/
  v25 = 2.0; /*0x5a8f3c*/
  v23 = (double)a3; /*0x5a8f4c*/
  if ( v23 < 1.5 ) /*0x5a8f5f*/
  {
    v27 = (v23 - 2.0) * 0.5; /*0x5a8f71*/
    v25 = v27 + 2.0; /*0x5a8f7b*/
  }
  do /*0x5a8fab*/
  {
    do /*0x5a8fa0*/
      v7 = Random::Gaussian((double *)&g_TileSystemInit) * v27 + v25; /*0x5a8f91*/
    while ( v7 < 2.0 ); /*0x5a8fa0*/
  }
  while ( v7 > v23 ); /*0x5a8fab*/
  v19 = Math::RoundToInt(v7); /*0x5a8fb2*/
  v22 = v19; /*0x5a8fb6*/
  while ( 1 ) /*0x5a8fba*/
  {
    v6 = v19; /*0x5a8fba*/
LABEL_8:
    v8 = v6 + 4 * a1; /*0x5a8fc5*/
    v9 = (int)(&off_82B5B0)[v8]; /*0x5a8fd1*/
    v26 = dword_82B530[v8]; /*0x5a8fd7*/
    if ( v6 == 2 ) /*0x5a8fdb*/
    {
      v10 = 0; /*0x5a8fe7*/
      if ( (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 < 0.7 ) /*0x5a9006*/
      {
        do /*0x5a904b*/
        {
          v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a9028*/
          v11 = Math::RoundToInt((double)v28 * (double)(unsigned int)(v9 - 7) * 2.328306437080797e-10 + 7.0); /*0x5a9044*/
        }
        while ( v11 > v9 - 1 ); /*0x5a904b*/
        goto LABEL_14; /*0x5a904b*/
      }
    }
    else
    {
      v10 = 0; /*0x5a904f*/
    }
    do /*0x5a908e*/
    {
      v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a9071*/
      v11 = Math::RoundToInt((double)v29 * (double)(unsigned int)v9 * 2.328306437080797e-10); /*0x5a9087*/
    }
    while ( v11 > v9 - 1 ); /*0x5a908e*/
LABEL_14:
    v20 = v11; /*0x5a9092*/
    if ( v9 > 0 ) /*0x5a9096*/
      break; /*0x5a9096*/
LABEL_22:
    v17 = (v6 + 1) % (a3 + 1); /*0x5a912c*/
    v19 = v17; /*0x5a913b*/
    if ( !v17 ) /*0x5a913f*/
    {
      v19 = 1; /*0x5a9141*/
      v17 = 1; /*0x5a9149*/
    }
    if ( v17 == v22 ) /*0x5a9151*/
    {
      *a4 = 0xFFFF; /*0x5a91bd*/
      *a5 = 0; /*0x5a91cb*/
      *a6 = -1; /*0x5a91ce*/
      return 0; /*0x5a91d5*/
    }
  }
  while ( 1 ) /*0x5a90a0*/
  {
    v12 = 0; /*0x5a90a0*/
    v13 = *(_DWORD *)(v26 + 4 * ((int)(v10 + v20) % v9)); /*0x5a90ac*/
    v14 = 12 * v13 + 11264880; /*0x5a90b2*/
    v15 = dword_ABE370[3 * v13]; /*0x5a90b9*/
    if ( v15 > 0 ) /*0x5a90c2*/
    {
      v16 = (_DWORD *)(dword_ABE374[3 * v13] + 4); /*0x5a90c7*/
      do /*0x5a90d8*/
      {
        if ( *v16 == a1 ) /*0x5a90d0*/
          break; /*0x5a90d0*/
        ++v12; /*0x5a90d2*/
        v16 += 2; /*0x5a90d3*/
      }
      while ( v12 < v15 ); /*0x5a90d8*/
    }
    if ( (unsigned __int8)Map_Helper_5A7D00(1, 1) ) /*0x5a9114*/
      break; /*0x5a9114*/
    if ( ++v10 >= v9 ) /*0x5a9120*/
    {
      v6 = v19; /*0x5a9126*/
      goto LABEL_22; /*0x5a9126*/
    }
  }
  v30 = *(_DWORD *)(*(_DWORD *)(v14 + 4) + 8 * v12); /*0x5a9165*/
  LOWORD(v31) = *a2 - v30; /*0x5a9179*/
  HIWORD(v31) = a2[1] - HIWORD(v30); /*0x5a917e*/
  *a5 = v31; /*0x5a9187*/
  *a4 = *(_DWORD *)(v14 + 8); /*0x5a9197*/
  *a6 = v12; /*0x5a919a*/
  return 1; /*0x5a9199*/
}
}
} // namespace gamemd

// 0x5A9920
namespace gamemd {
ObjectClass * E4Recv_5A9920::sub_5A9920(unsigned int * a1, ObjectClass * aP2)
{
{
    *(void**)this = *a1;
    this->M4 = aP2;
    return (ObjectClass *)this;
}
}
} // namespace gamemd

// 0x5A9960
namespace gamemd {
ObjectClass * E4Recv_5A9960::sub_5A9960(unsigned int * a1)
{
{
    *(void**)this = *a1;
    this->M4 = *((int*)(a1) + 1);
    return (ObjectClass *)this;
}
}
} // namespace gamemd

// 0x5A9BF0
namespace gamemd {
Concurrency::details::_ReaderWriterLock * E4Recv_5A9BF0::__0_ReaderWriterLock_details_Concurrency__QAE_XZ()
{
{
    *(int *)this = 0;
    this->M4 = 0;
    return this;
}
}
} // namespace gamemd

// 0x5A9C40
namespace gamemd {
unsigned int * InitializePathData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// _DWORD *InitializePathData()
// {
//   int v0; // eax
//   int v1; // ebp
//   int v2; // eax
//   int v3; // eax
//   int v4; // ebp
//   int v5; // eax
//   rc_ptr_base *v6; // eax
//   rc_ptr_base *v7; // eax
//   rc_ptr_base *v8; // eax
//   rc_ptr_base *v9; // eax
//   rc_ptr_base *v10; // eax
//   rc_ptr_base *v11; // eax
//   rc_ptr_base *v12; // eax
//   rc_ptr_base *v13; // eax
//   rc_ptr_base *v14; // eax
//   rc_ptr_base *v15; // eax
//   rc_ptr_base *v16; // eax
//   rc_ptr_base *v17; // eax
//   rc_ptr_base *v18; // eax
//   rc_ptr_base *v19; // eax
//   rc_ptr_base *v20; // eax
//   rc_ptr_base *v21; // eax
//   rc_ptr_base *v22; // eax
//   rc_ptr_base *v23; // eax
//   rc_ptr_base *v24; // eax
//   rc_ptr_base *v25; // eax
//   rc_ptr_base *v26; // eax
//   rc_ptr_base *v27; // eax
//   rc_ptr_base *v28; // eax
//   rc_ptr_base *v29; // eax
//   rc_ptr_base *v30; // eax
//   rc_ptr_base *v31; // eax
//   rc_ptr_base *v32; // eax
//   rc_ptr_base *v33; // eax
//   rc_ptr_base *v34; // eax
//   rc_ptr_base *v35; // eax
//   rc_ptr_base *v36; // eax
//   rc_ptr_base *v37; // eax
//   rc_pt... [53007 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x5AD9C0
namespace gamemd {
int sub_5AD9C0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_5AD9C0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x5ad9d0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x5AE530
namespace gamemd {
DWORD E4Recv_5AE530::sub_5AE530(ObjectClass * aP1, ObjectClass * aP2)
{
{
    ObjectClass *v3;
    DWORD result;
    int v5;
    v3 = (ObjectClass *)this;
    String::Reassign(this + 50, (AbstractClass *)aP1);
    result = Timer::GetTicks();
    v3 = (ObjectClass *)((char *)(v3) + 204);
    *(int *)v3->__pad_0 = result;
    *(int *)&v3->__pad_0[4] = v5;
    *(int *)&v3->__pad_0[8] = aP2;
    return result;
}
}
} // namespace gamemd

// 0x5AEC40
namespace gamemd {
int E4Recv_5AEC40::sub_5AEC40(float a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    int result;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v2 = a2;
    v14 = Math::SinCos(a2);
    v4 = Math::ArcTan2(v2);
    v10 = this->M20;
    v5 = -v14;
    v8 = this->M32;
    v11 = this->M24;
    v6 = this->M16;
    v9 = this->M36;
    v13 = this->M28;
    result = this->M40;
    v12 = this->M44;
    this->M16 = v8 * v5 + v6 * v4;
    this->M20 = v9 * v5 + v10 * v4;
    this->M24 = *(float *)&result * v5 + v11 * v4;
    this->M28 = v12 * v5 + v13 * v4;
    this->M32 = v8 * v4 + v6 * v14;
    this->M36 = v9 * v4 + v10 * v14;
    this->M40 = *(float *)&result * v4 + v11 * v14;
    this->M44 = v12 * v4 + v13 * v14;
    return result;
}
}
} // namespace gamemd

// 0x5AF550
namespace gamemd {
void E4Recv_5AF550::sub_5AF550(float * a2, float * a3, AbstractClass * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5AF550(int this, float *a2, float *a3, AbstractClass *a4)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float aP1; // [esp+0h] [ebp-28h]
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+10h] [ebp-18h]
  float v14; // [esp+14h] [ebp-14h]
  float v15; // [esp+14h] [ebp-14h]
  float v16; // [esp+14h] [ebp-14h]
  float aP2a; // [esp+18h] [ebp-10h]
  float aP2; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+1Ch] [ebp-Ch]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+2Ch] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+4h]
  int v25; // [esp+30h] [ebp+8h]

  v12 = *a3 - *a2; /*0x5af566*/
  *(float *)&v25 = a3[1] - a2[1]; /*0x5af570*/
  v7 = a3[2] - a2[2]; /*0x5af577*/
  v14 = v7; /*0x5af57a*/
  v19 = v7 * v14; /*0x5af582*/
  aP2a = v12 * v12; /*0x5af58e*/
  v23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(*(float *)&v25 * *(float *)&v25 + aP2a + v19)); /*0x5af5aa*/
  v8 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(aP2a + v19)); /*0x5af5b9*/
  if ( v23 == 0.0 ) /*0x5af5d0*/
  {
    v21 = 0.0; /*0x5af5ea*/
    aP2 = 1.0; /*0x5af5f2*/
  }
  else
  {
    v21 = *(float *)&v25 / v23; /*0x5af5da*/
    aP2 = v8 / v23; /*0x5af5e4*/
  }
  if ( v8 == 0.0 ) /*0x5af605*/
  {
    v20 = 0.0; /*0x5af621*/
    v24 = 1.0; /*0x5af629*/
  }
  else
  {
    v20 = v12 / v8; /*0x5af60d*/
    v24 = v14 / v8; /*0x5af617*/
  }
  *(_DWORD *)this = 1065353216; /*0x5af638*/
  this->M4 = 0; /*0x5af63a*/
  this->M8 = 0; /*0x5af63d*/
  this->M12 = 0; /*0x5af640*/
  this->M16 = 0; /*0x5af643*/
  this->M20 = 1065353216; /*0x5af646*/
  this->M24 = 0; /*0x5af649*/
  this->M28 = 0; /*0x5af64c*/
  this->M32 = 0; /*0x5af64f*/
  this->M36 = 0; /*0x5af652*/
  this->M40 = 1065353216; /*0x5af655*/
  this->M44 = 0; /*0x5af658*/
  v9 = *a2; /*0x5af65b*/
  *(float *)(this + 12) = *a2; /*0x5af669*/
  *(float *)(this + 28) = 0.0; /*0x5af677*/
  *(float *)(this + 44) = 0.0; /*0x5af67a*/
  v10 = v9 + 0.0; /*0x5af680*/
  v15 = a2[1]; /*0x5af684*/
  *(float *)(this + 12) = v10; /*0x5af68d*/
  v16 = v15 + *(float *)(this + 28); /*0x5af697*/
  *(float *)(this + 28) = v16; /*0x5af69b*/
  v13 = (float)0.0 + 0.0; /*0x5af6ae*/
  *(float *)(this + 44) = v13; /*0x5af6b2*/
  v22 = a2[2]; /*0x5af6be*/
  *(float *)(this + 12) = v10 + 0.0; /*0x5af6c4*/
  *(float *)(this + 28) = v16 + 0.0; /*0x5af6d1*/
  *(float *)(this + 44) = v13 + v22; /*0x5af6dc*/
  sub_5AF120((float *)this, v20, v24); /*0x5af6df*/
  aP1 = -v21; /*0x5af6f0*/
  sub_5AF000((float *)this, (ObjectClass *)LODWORD(aP1), (ObjectClass *)LODWORD(aP2)); /*0x5af6f5*/
  Matrix2D::Rotate((float *)this, a4); /*0x5af701*/
}
}
} // namespace gamemd

// 0x5AF980
namespace gamemd {
float * MultiplyMatrix3x4(ObjectClass * aP0, float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall MultiplyMatrix3x4(ObjectClass *aP0, float *a1, float *a2)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  float v11; // esi
  float v12; // [esp+8h] [ebp-68h]
  float v13; // [esp+Ch] [ebp-64h]
  float v14; // [esp+10h] [ebp-60h]
  float v15; // [esp+14h] [ebp-5Ch]
  float v16; // [esp+18h] [ebp-58h]
  float v17; // [esp+1Ch] [ebp-54h]
  float v18; // [esp+20h] [ebp-50h]
  float v19; // [esp+24h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-48h]
  float v21; // [esp+2Ch] [ebp-44h]
  float v22; // [esp+30h] [ebp-40h]
  float v23; // [esp+34h] [ebp-3Ch]
  float v24; // [esp+3Ch] [ebp-34h]
  float v25[12]; // [esp+40h] [ebp-30h] BYREF
  float a2a; // [esp+74h] [ebp+4h]

  result = (float *)aP0; /*0x5af983*/
  v14 = a1[4]; /*0x5af98a*/
  v13 = a1[5]; /*0x5af991*/
  v4 = *a1; /*0x5af998*/
  v12 = a1[6]; /*0x5af99a*/
  v5 = a1[1]; /*0x5af9a1*/
  v6 = a1[2]; /*0x5af9a4*/
  v17 = a1[8]; /*0x5af9a7*/
  v16 = a1[9]; /*0x5af9ae*/
  v15 = a1[10]; /*0x5af9b5*/
  v8 = *a2; /*0x5af9bd*/
  v9 = a2[4]; /*0x5af9bf*/
  v10 = a2[8]; /*0x5af9c2*/
  v19 = a2[1]; /*0x5af9d0*/
  v22 = a2[2]; /*0x5af9dd*/
  v24 = a2[3]; /*0x5af9e4*/
  v18 = a2[5]; /*0x5af9ed*/
  v21 = a2[6]; /*0x5af9f4*/
  v11 = a2[7]; /*0x5af9f8*/
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  a2a = a2[9]; /*0x5afa12*/
  v20 = a2[10]; /*0x5afa1c*/
  v23 = a2[11]; /*0x5afa28*/
  v25[4] = v10 * v12 + v9 * v13 + v8 * v14; /*0x5afa2e*/
  v25[8] = v10 * v15 + v9 * v16 + v8 * v17; /*0x5afa46*/
  v25[1] = a2a * v6 + v18 * v5 + v19 * v4; /*0x5afa60*/
  v25[5] = a2a * v12 + v18 * v13 + v19 * v14; /*0x5afa8b*/
  v25[9] = a2a * v15 + v18 * v16 + v19 * v17; /*0x5afaab*/
  v25[2] = v20 * v6 + v21 * v5 + v22 * v4; /*0x5afac5*/
  v25[6] = v20 * v12 + v21 * v13 + v22 * v14; /*0x5afae5*/
  v25[10] = v20 * v15 + v21 * v16 + v22 * v17; /*0x5afb05*/
  v25[3] = v23 * v6 + v11 * v5 + v24 * v4 + a1[3]; /*0x5afb22*/
  v25[7] = v23 * v12 + v11 * v13 + v24 * v14 + a1[7]; /*0x5afb4b*/
  v25[11] = v23 * v15 + v11 * v16 + v24 * v17 + a1[11]; /*0x5afb6e*/
  qmemcpy(result, v25, 0x30u); /*0x5afb72*/
  return result; /*0x5afb74*/
}
}
} // namespace gamemd

// 0x5A1190
namespace gamemd {
double sub_5A1190(short * a1, short * a2, double a3)
{
{
    int v3;
    double v4;
    double v5;
    char v7;
    double v9;
    v3 = *a2 - *a1;
    if ( v3 )
  {
    v4 = Math::ArcTan(-((double)(*((int*)(a2) + 1) - *((int*)(a1) + 1)) / (double)v3));
    if ( v3 < 0 )
    v4 = v4 + 3.141592653589793;
  }
    else
  {
    v4 = 1.570796326794897;
  }
    v5 = fabs(v4 - a3);
    v9 = v5;
    if ( !v7 )
  {
    do
    v5 = v5 - 6.283185307179586;
    while ( v5 >= 6.283185307179586 );
    v9 = v5;
  }
    if ( v5 > 3.141592653589793 )
    v9 = 6.283185307179586 - v5;
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 2.0 + 1.5 * v9;
}
}
} // namespace gamemd

// 0x5A2ED0
namespace gamemd {
double sub_5A2ED0(short * a1, short * a2)
{
{
    int v2;
    int v3;
    double v5;
    v2 = *a1 - *a2;
    v3 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5;
}
}
} // namespace gamemd

// 0x5A4AE0
namespace gamemd {
double sub_5A4AE0(short * a1, short * a2)
{
{
    int v2;
    int v3;
    double v5;
    v2 = *a1 - *a2;
    v3 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5;
}
}
} // namespace gamemd

// 0x5A4FA0
namespace gamemd {
double sub_5A4FA0(short * a1, short * a2)
{
{
    int v2;
    int v3;
    double v5;
    v2 = *a1 - *a2;
    v3 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5;
}
}
} // namespace gamemd

// 0x5A5AE0
namespace gamemd {
double sub_5A5AE0(short * a1, short * a2)
{
{
    signed int v2;
    __int64 v3;
    int v5;
    v2 = abs32(*((int*)(a1) + 1) - *((int*)(a2) + 1));
    v3 = *a1 - *a2;
    v5 = (HIDWORD(v3) ^ v3) - HIDWORD(v3);
    if ( v5 <= v2 )
    v5 = v2;
    return (double)(unsigned int)Random::State(&g_Randomizer) * 3.0 * 2.328306437080797e-10 + (double)v5;
}
}
} // namespace gamemd

// 0x5A7640
namespace gamemd {
unsigned int * globalHelper_0A7640(unsigned int * a0, MapSeedClass * aP1)
{
{
    short v2;
    short v3;
    short v4;
    int v5;
    short v6;
    bool v7;
    int *v9;
    int MapSeedClass_field_0x10;
    int v11;
    v2 = 0;
    v3 = 999;
    v4 = 0;
    v5 = aP1->MapSeedClass_field_0x10 - 1;
    v6 = 999;
    if ( v5 >= 0 )
  {
    v9 = (int *)(aP1->MapSeedClass_field_0x04 + 4 * v5);
    MapSeedClass_field_0x10 = aP1->MapSeedClass_field_0x10;
    do
    {
    v11 = *v9;
    if ( (short)*v9 < v3 )
    v3 = *v9;
    if ( SHIWORD(v11) < v6 )
    v6 = HIWORD(*v9);
    if ( (short)*v9 > v2 )
    v2 = *v9;
    if ( SHIWORD(v11) > v4 )
    v4 = HIWORD(*v9);
    v7 = MapSeedClass_field_0x10 == 1;
    --v9;
    --MapSeedClass_field_0x10;
    }
    while ( !v7 );
  }
    *a0 = v3;
    *((int*)(a0) + 1) = v6;
    *((int*)(a0) + 2) = v2 - v3 + 1;
    *((int*)(a0) + 3) = v4 - v6 + 1;
    return a0;
}
}
} // namespace gamemd

// 0x5A9980
namespace gamemd {
unsigned int * E4Recv_5A9980::sub_5A9980(int a2, unsigned int * a3, int a4, unsigned int * a5, int a6)
{
{
    *(void**)this = a2;
    this->M4 = *a3;
    this->M8 = a4;
    this->M12 = *a5;
    this->M16 = a6;
    return this;
}
}
} // namespace gamemd

// 0x5A99F0
namespace gamemd {
unsigned int * E4Recv_5A99F0::sub_5A99F0(unsigned int * a2)
{
{
    *(void**)this = *a2;
    this->M4 = *((int*)(a2) + 1);
    this->M8 = *((int*)(a2) + 2);
    this->M12 = *((int*)(a2) + 3);
    this->M16 = *((int*)(a2) + 4);
    return this;
}
}
} // namespace gamemd

// 0x5A9C20
namespace gamemd {
int sub_5A9C20()
{
{
    InitializePathData();
    return atexit(sub_5AC190);
}
}
} // namespace gamemd

// 0x5AC190
namespace gamemd {
void sub_5AC190()
{
{
    int *v0;
    int v1;
    void *v2;
    v0 = &g_Randomizer;
    v1 = 109;
    do
  {
    v2 = (void *)*(v0 - 3);
    v0 -= 3;
    __3_YAXPAX_Z(v2);
    --v1;
    *v0 = 0;
  }
    while ( v1 );
}
}
} // namespace gamemd

// 0x5ADB00
namespace gamemd {
int sub_5ADB00()
{
{
    DataGlobal_ABED60 = 0;
    DataGlobal_ABED64 = 0;
    DataGlobal_ABED68 = 0;
    DataGlobal_ABED6C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5ADB20
namespace gamemd {
void sub_5ADB20()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABED78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5ADB50
namespace gamemd {
void sub_5ADB50()
{
{
    DataGlobal_ABEDC8 = DataGlobal_ABED78 / 60.0;
}
}
} // namespace gamemd

// 0x5ADB70
namespace gamemd {
void sub_5ADB70()
{
{
    DataGlobal_ABEDB0 = 1.0 / DataGlobal_ABEDC8;
}
}
} // namespace gamemd

// 0x5ADB90
namespace gamemd {
void sub_5ADB90()
{
{
    DataGlobal_ABEDA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5ADBB0
namespace gamemd {
void sub_5ADBB0()
{
{
    DataGlobal_ABED80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5ADBD0
namespace gamemd {
void sub_5ADBD0()
{
{
    DataGlobal_ABED58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5ADBF0
namespace gamemd {
long long sub_5ADBF0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABED58 - DataGlobal_ABED80);
    result = Math::RoundToInt(v0 * DataGlobal_ABED78 * 0.5);
    DataGlobal_ABEDD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5ADC30
namespace gamemd {
void sub_5ADC30()
{
{
    DataGlobal_ABED88 = Math::ArcTan((double)DataGlobal_ABEDD0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5ADC60
namespace gamemd {
void sub_5ADC60()
{
{
    DataGlobal_ABEDA0 = Math::ArcTan((double)(2 * DataGlobal_ABEDD0) / DataGlobal_ABED78);
}
}
} // namespace gamemd

// 0x5ADC90
namespace gamemd {
long long sub_5ADC90()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABEDD0) + 0.5);
    DataGlobal_ABEDC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x5ADCC0
namespace gamemd {
int sub_5ADCC0()
{
{
    DataGlobal_ABED70 = 0;
    DataGlobal_ABED72 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5ADCD0
namespace gamemd {
int sub_5ADCD0()
{
{
    DataGlobal_ABED90 = 0;
    DataGlobal_ABED94 = 0;
    DataGlobal_ABED98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5ADCF0
namespace gamemd {
int sub_5ADCF0()
{
{
    DataGlobal_ABEDC0 = 0;
    DataGlobal_ABEDB8 = 128;
    DataGlobal_ABEDBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5AE4F0
namespace gamemd {
int sub_5AE4F0(int a1)
{
return 0;
}
} // namespace gamemd

// 0x5AE500
namespace gamemd {
char E4Recv_5AE500::sub_5AE500(const char ** a2)
{
{
    const char **v3;
    LOBYTE(v3) = String::NotEquals(a2, 0);
    if ( (char)v3 )
  {
    v3 = sub_5CF840(this + 20, a2);
    if ( v3 )
    LOBYTE(v3) = nullsub_24(v3);
  }
    return (char)v3;
}
}
} // namespace gamemd

// 0x5AE570
namespace gamemd {
void nullsub_170(int a1)
{
  ;
}
} // namespace gamemd

// 0x5AE580
namespace gamemd {
void nullsub_171(int a1)
{
  ;
}
} // namespace gamemd

// 0x5AED50
namespace gamemd {
int E4Recv_5AED50::sub_5AED50(float a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    double v7;
    int result;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v2 = a2;
    v14 = Math::SinCos(a2);
    v4 = Math::ArcTan2(v2);
    v5 = -v14;
    v6 = *(void**)this;
    v7 = this->M32;
    v9 = this->M4;
    result = this->M36;
    v10 = this->M8;
    v11 = this->M40;
    v12 = this->M12;
    *(void**)this = v7 * v14 + v6 * v4;
    v13 = this->M44;
    this->M4 = *(float *)&result * v14 + v9 * v4;
    this->M8 = v11 * v14 + v10 * v4;
    this->M12 = v13 * v14 + v12 * v4;
    this->M32 = v6 * v5 + v7 * v4;
    this->M36 = v9 * v5 + *(float *)&result * v4;
    this->M40 = v10 * v5 + v11 * v4;
    this->M44 = v12 * v5 + v13 * v4;
    return result;
}
}
} // namespace gamemd

// 0x5AEE50
namespace gamemd {
int E4Recv_5AEE50::sub_5AEE50(float a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    int result;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v2 = a2;
    v14 = Math::SinCos(a2);
    v4 = Math::ArcTan2(v2);
    v10 = this->M4;
    v5 = -v14;
    v8 = this->M16;
    v11 = this->M8;
    v6 = *(void**)this;
    v9 = this->M20;
    v13 = this->M12;
    result = this->M24;
    v12 = this->M28;
    *(void**)this = v8 * v5 + v6 * v4;
    this->M4 = v9 * v5 + v10 * v4;
    this->M8 = *(float *)&result * v5 + v11 * v4;
    this->M12 = v12 * v5 + v13 * v4;
    this->M16 = v8 * v4 + v6 * v14;
    this->M20 = v9 * v4 + v10 * v14;
    this->M24 = *(float *)&result * v4 + v11 * v14;
    this->M28 = v12 * v4 + v13 * v14;
    return result;
}
}
} // namespace gamemd

// 0x5AF000
namespace gamemd {
void E4Recv_5AF000::sub_5AF000(ObjectClass * aP1, ObjectClass * aP2)
{
{
    double v3;
    double v4;
    double v5;
    double v6;
    double v7;
    double v8;
    v3 = this->M4;
    v4 = this->M8;
    this->M4 = v4 * *(float *)&aP1 + v3 * *(float *)&aP2;
    this->M8 = v4 * *(float *)&aP2 - v3 * *(float *)&aP1;
    v5 = this->M20;
    v6 = this->M24;
    this->M20 = v6 * *(float *)&aP1 + v5 * *(float *)&aP2;
    this->M24 = v6 * *(float *)&aP2 - v5 * *(float *)&aP1;
    v7 = this->M36;
    v8 = this->M40;
    this->M36 = v8 * *(float *)&aP1 + v7 * *(float *)&aP2;
    this->M40 = v8 * *(float *)&aP2 - v7 * *(float *)&aP1;
}
}
} // namespace gamemd

// 0x5AF120
namespace gamemd {
void E4Recv_5AF120::sub_5AF120(float a2, float a3)
{
{
    double v3;
    double v4;
    double v5;
    double v6;
    double v7;
    double v8;
    v3 = *(void**)this;
    v4 = this->M8;
    *(void**)this = v3 * a3 - v4 * a2;
    this->M8 = v3 * a2 + v4 * a3;
    v5 = this->M16;
    v6 = this->M24;
    this->M16 = v5 * a3 - v6 * a2;
    this->M24 = v5 * a2 + v6 * a3;
    v7 = this->M32;
    v8 = this->M40;
    this->M32 = v7 * a3 - v8 * a2;
    this->M40 = v7 * a2 + v8 * a3;
}
}
} // namespace gamemd

// 0x5AF2C0
namespace gamemd {
double E4Recv_5AF2C0::sub_5AF2C0()
{
{
    int v2[3];
    float v3[3];
    memset(v2, 0, sizeof(v2));
    return *TransformMatrix3x4Point((AbstractClass *)v3, this, (IUnknown *)v2);
}
}
} // namespace gamemd

// 0x5AF310
namespace gamemd {
double E4Recv_5AF310::sub_5AF310()
{
{
    float *v1;
    int v3[4];
    float v4[3];
    memset(v3, 0, 12);
    v1 = TransformMatrix3x4Point((AbstractClass *)v4, this, (IUnknown *)v3);
    *(float *)&v3[3] = *v1;
    return v1[1];
}
}
} // namespace gamemd

// 0x5AF360
namespace gamemd {
double E4Recv_5AF360::sub_5AF360()
{
{
    float *v1;
    int v3[5];
    float v4[3];
    memset(v3, 0, 12);
    v1 = TransformMatrix3x4Point((AbstractClass *)v4, this, (IUnknown *)v3);
    *(float *)&v3[3] = *v1;
    *(float *)&v3[4] = v1[1];
    return v1[2];
}
}
} // namespace gamemd

// 0x5AF3B0
namespace gamemd {
double E4Recv_5AF3B0::sub_5AF3B0()
{
{
    float *v1;
    __int128 aP0;
    int v4[3];
    float v5[3];
    v4[0] = 0;
    v4[1] = 1065353216;
    v4[2] = 0;
    v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4);
    *((double *)&aP0 + 1) = v1[1];
    *(double *)&aP0 = v1[2];
    return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4));
}
}
} // namespace gamemd

// 0x5AF470
namespace gamemd {
double E4Recv_5AF470::sub_5AF470()
{
{
    float *v1;
    __int128 aP0;
    int v4[3];
    float v5[3];
    v4[0] = 1065353216;
    v4[1] = 0;
    v4[2] = 0;
    v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4);
    *((double *)&aP0 + 1) = *v1;
    *(double *)&aP0 = v1[1];
    return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4));
}
}
} // namespace gamemd

// 0x5AFB80
namespace gamemd {
float * TransformMatrix3x4Point(AbstractClass * aP0, IUnknown * aP1, IUnknown * aP2)
{
{
    double v4;
    float v5;
    float v6;
    float v7;
    v5 = *(float *)&aP1->field_8 * *(float *)&aP2->field_8 + *(float *)&aP1->field_4 * *(float *)&aP2->field_4 + *(float *)&aP1->field_0 * *(float *)&aP2->field_0 + *(float *)&aP1->field_C;
    v6 = *(float *)aP1->__pad_10 * *(float *)&aP2->field_0 + *(float *)&aP1->__pad_10[8] * *(float *)&aP2->field_8 + *(float *)&aP1->__pad_10[4] * *(float *)&aP2->field_4 + *(float *)&aP1->field_1C;
    v4 = *(float *)&aP1->field_20 * *(float *)&aP2->field_0 + *(float *)aP1->__pad_28 * *(float *)&aP2->field_8 + *(float *)&aP1->field_24 * *(float *)&aP2->field_4 + *(float *)&aP1->__pad_28[4];
    *(float *)aP0->__pad_0 = v5;
    v7 = v4;
    *(float *)&aP0->__pad_0[4] = v6;
    *(float *)&aP0->__pad_0[8] = v7;
    return (float *)aP0->__pad_0;
}
}
} // namespace gamemd

// 0x5AFC20
namespace gamemd {
float * Matrix3x3_InvertSigns(float * a1, float * a2)
{
{
    double v3;
    double v4;
    double v5;
    double v6;
    float v7[12];
    v7[0] = *a2;
    v3 = v7[0] * *((int*)(a2) + 3);
    v7[1] = *((int*)(a2) + 4);
    v7[2] = *((int*)(a2) + 8);
    v4 = v7[2] * *((int*)(a2) + 11);
    v7[4] = *((int*)(a2) + 1);
    v7[5] = *((int*)(a2) + 5);
    v5 = v3 + v4;
    v6 = v7[1] * *((int*)(a2) + 7);
    v7[6] = *((int*)(a2) + 9);
    v7[8] = *((int*)(a2) + 2);
    v7[9] = *((int*)(a2) + 6);
    v7[10] = *((int*)(a2) + 10);
    v7[3] = -(v5 + v6);
    v7[7] = -(v7[4] * *((int*)(a2) + 3) + v7[6] * *((int*)(a2) + 11) + v7[5] * *((int*)(a2) + 7));
    v7[11] = -(v7[8] * *((int*)(a2) + 3) + v7[10] * *((int*)(a2) + 11) + v7[9] * *((int*)(a2) + 7));
    qmemcpy(a1, v7, 0x30u);
    return a1;
}
}
} // namespace gamemd

// 0x5AFCE0
namespace gamemd {
void sub_5AFCE0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABEDF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5AFD10
namespace gamemd {
void sub_5AFD10()
{
{
    DataGlobal_ABEE48 = DataGlobal_ABEDF8 / 60.0;
}
}
} // namespace gamemd

// 0x5AFD30
namespace gamemd {
void sub_5AFD30()
{
{
    DataGlobal_ABEE30 = 1.0 / DataGlobal_ABEE48;
}
}
} // namespace gamemd

// 0x5AFD50
namespace gamemd {
void sub_5AFD50()
{
{
    DataGlobal_ABEE28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5AFD70
namespace gamemd {
void sub_5AFD70()
{
{
    DataGlobal_ABEE00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5AFD90
namespace gamemd {
void sub_5AFD90()
{
{
    DataGlobal_ABEDD8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5AFDB0
namespace gamemd {
long long sub_5AFDB0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABEDD8 - DataGlobal_ABEE00);
    result = Math::RoundToInt(v0 * DataGlobal_ABEDF8 * 0.5);
    DataGlobal_ABEE50 = result;
    return result;
}
}
} // namespace gamemd

// 0x5AFDF0
namespace gamemd {
void sub_5AFDF0()
{
{
    DataGlobal_ABEE08 = Math::ArcTan((double)DataGlobal_ABEE50 * 0.00390625);
}
}
} // namespace gamemd

// 0x5AFE20
namespace gamemd {
void sub_5AFE20()
{
{
    DataGlobal_ABEE20 = Math::ArcTan((double)(2 * DataGlobal_ABEE50) / DataGlobal_ABEDF8);
}
}
} // namespace gamemd

// 0x5AFE50
namespace gamemd {
long long sub_5AFE50()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABEE50) + 0.5);
    DataGlobal_ABEE44 = result;
    return result;
}
}
} // namespace gamemd

// 0x5AFE80
namespace gamemd {
int sub_5AFE80()
{
{
    DataGlobal_ABEDF0 = 0;
    DataGlobal_ABEDF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5AFE90
namespace gamemd {
int sub_5AFE90()
{
{
    g_MatrixTransformState = 0;
    DataGlobal_ABEE14 = 0;
    DataGlobal_ABEE18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5AFEB0
namespace gamemd {
int sub_5AFEB0()
{
{
    DataGlobal_ABEE40 = 0;
    DataGlobal_ABEE38 = 128;
    DataGlobal_ABEE3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5AFED0
namespace gamemd {
int sub_5AFED0()
{
{
    DataGlobal_ABEDE0 = 0;
    DataGlobal_ABEDE4 = 0;
    DataGlobal_ABEDE8 = 0;
    DataGlobal_ABEDEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5AFF50
namespace gamemd {
void E4Recv_5AFF50::sub_5AFF50()
{
{
    *(void**)this = vt_MechLocomotionClass;
    this->M4 = &vt_MechLocomotionClass;
    LocomotionClass::Construct(this);
}
}
} // namespace gamemd
