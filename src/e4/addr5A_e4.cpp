// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5A1C70_e4.hpp"
#include "e4/classes/E4Recv_5A1FB0_e4.hpp"
#include "e4/classes/E4Recv_5A2F50_e4.hpp"
#include "e4/classes/E4Recv_5A35F0_e4.hpp"
#include "e4/classes/E4Recv_5A6BA0_e4.hpp"
#include "e4/classes/E4Recv_5A82E0_e4.hpp"
#include "e4/classes/E4Recv_5A95B0_e4.hpp"
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
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x5A1350
namespace gamemd {
void Terrain_SelectTileVariant(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = a1 - unk_AA1020; /*0x5a135e*/
  switch ( a1 - unk_AA1020 ) /*0x5a1374*/
  {
  unsigned int v17; // eax
  unsigned int v16; // eax
  unsigned int v15; // eax
  unsigned int v14; // eax
  unsigned int v13; // eax
  unsigned int v12; // eax
  unsigned int v11; // eax
  unsigned int v10; // eax
  unsigned int v9; // eax
  unsigned int v8; // eax
  unsigned int v7; // eax
  unsigned int v6; // eax
  unsigned int v5; // eax
  unsigned int v4; // eax
  unsigned int v2; // eax
    case 4: /*0x5a1374*/
      do /*0x5a13a7*/
      {
        __int64 v20 = (unsigned int)Random::State(&g_Randomizer); /*0x5a137d*/
        v2 = Math::RoundToInt((double)v20 * 4.656612874161595e-10 + 1.0); /*0x5a139f*/
      }
      while ( v2 > 2 ); /*0x5a13a7*/
      return unk_AA1020 + v2 + 4; /*0x5a13b8*/
    case 5: /*0x5a1374*/
      do /*0x5a13e1*/
      {
        __int64 v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5a13bd*/
        v4 = Math::RoundToInt((double)v21 * 4.656612874161595e-10); /*0x5a13d9*/
      }
      while ( v4 > 1 ); /*0x5a13e1*/
      return unk_AA1020 + 2 * v4 + 4; /*0x5a13f3*/
    case 6: /*0x5a1374*/
      do /*0x5a141c*/
      {
        __int64 v22 = (unsigned int)Random::State(&g_Randomizer); /*0x5a13f8*/
        v5 = Math::RoundToInt((double)v22 * 4.656612874161595e-10); /*0x5a1414*/
      }
      while ( v5 > 1 ); /*0x5a141c*/
      return unk_AA1020 + v5 + 4; /*0x5a142d*/
    case 8: /*0x5a1374*/
      do /*0x5a145c*/
      {
        __int64 v23 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1432*/
        v6 = Math::RoundToInt((double)v23 * 4.656612874161595e-10 + 1.0); /*0x5a1454*/
      }
      while ( v6 > 2 ); /*0x5a145c*/
      return unk_AA1020 + v6 + 8; /*0x5a146d*/
    case 9: /*0x5a1374*/
      do /*0x5a1496*/
      {
        __int64 v24 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1472*/
        v7 = Math::RoundToInt((double)v24 * 4.656612874161595e-10); /*0x5a148e*/
      }
      while ( v7 > 1 ); /*0x5a1496*/
      return unk_AA1020 + 2 * v7 + 8; /*0x5a14a8*/
    case 10: /*0x5a1374*/
      do /*0x5a14d1*/
      {
        __int64 v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a14ad*/
        v8 = Math::RoundToInt((double)v25 * 4.656612874161595e-10); /*0x5a14c9*/
      }
      while ( v8 > 1 ); /*0x5a14d1*/
      return unk_AA1020 + v8 + 8; /*0x5a14e2*/
    case 11: /*0x5a1374*/
      do /*0x5a1511*/
      {
        __int64 v26 = (unsigned int)Random::State(&g_Randomizer); /*0x5a14e7*/
        v9 = Math::RoundToInt((double)v26 * 4.656612874161595e-10 + 1.0); /*0x5a1509*/
      }
      while ( v9 > 2 ); /*0x5a1511*/
      return unk_AA1020 + v9 + 11; /*0x5a1522*/
    case 12: /*0x5a1374*/
      do /*0x5a154b*/
      {
        __int64 v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1527*/
        v10 = Math::RoundToInt((double)v27 * 4.656612874161595e-10); /*0x5a1543*/
      }
      while ( v10 > 1 ); /*0x5a154b*/
      return unk_AA1020 + 2 * v10 + 11; /*0x5a155d*/
    case 13: /*0x5a1374*/
      do /*0x5a1586*/
      {
        __int64 v28 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1562*/
        v11 = Math::RoundToInt((double)v28 * 4.656612874161595e-10); /*0x5a157e*/
      }
      while ( v11 > 1 ); /*0x5a1586*/
      return unk_AA1020 + v11 + 11; /*0x5a1597*/
    case 14: /*0x5a1374*/
      do /*0x5a15c6*/
      {
        __int64 v29 = (unsigned int)Random::State(&g_Randomizer); /*0x5a159c*/
        v12 = Math::RoundToInt((double)v29 * 4.656612874161595e-10 + 1.0); /*0x5a15be*/
      }
      while ( v12 > 2 ); /*0x5a15c6*/
      return unk_AA1020 + v12 + 14; /*0x5a15d7*/
    case 15: /*0x5a1374*/
      do /*0x5a1600*/
      {
        __int64 v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a15dc*/
        v13 = Math::RoundToInt((double)v30 * 4.656612874161595e-10); /*0x5a15f8*/
      }
      while ( v13 > 1 ); /*0x5a1600*/
      return unk_AA1020 + 2 * v13 + 14; /*0x5a1612*/
    case 16: /*0x5a1374*/
      do /*0x5a163b*/
      {
        __int64 v31 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1617*/
        v14 = Math::RoundToInt((double)v31 * 4.656612874161595e-10); /*0x5a1633*/
      }
      while ( v14 > 1 ); /*0x5a163b*/
      return unk_AA1020 + v14 + 14; /*0x5a164c*/
    case 22: /*0x5a1374*/
      do /*0x5a167b*/
      {
        __int64 v32 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1651*/
        v15 = Math::RoundToInt((double)v32 * 4.656612874161595e-10 + 1.0); /*0x5a1673*/
      }
      while ( v15 > 2 ); /*0x5a167b*/
      return unk_AA1020 + v15 + 22; /*0x5a168c*/
    case 23: /*0x5a1374*/
      do /*0x5a16b5*/
      {
        __int64 v33 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1691*/
        v16 = Math::RoundToInt((double)v33 * 4.656612874161595e-10); /*0x5a16ad*/
      }
      while ( v16 > 1 ); /*0x5a16b5*/
      return unk_AA1020 + 2 * v16 + 22; /*0x5a16c7*/
    case 24: /*0x5a1374*/
      do /*0x5a16f0*/
      {
        __int64 v34 = (unsigned int)Random::State(&g_Randomizer); /*0x5a16cc*/
        v17 = Math::RoundToInt((double)v34 * 4.656612874161595e-10); /*0x5a16e8*/
      }
      while ( v17 > 1 ); /*0x5a16f0*/
      return unk_AA1020 + v17 + 22; /*0x5a1701*/
    case 28: /*0x5a1374*/
      return unk_AA1020 + 29; /*0x5a1715*/
    case 29: /*0x5a1374*/
      return unk_AA1020 + 28; /*0x5a1729*/
    case 34: /*0x5a1374*/
      unsigned int v18 = 2; /*0x5a172c*/
      int v19 = 1; /*0x5a1731*/
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
{
  int result; // eax
  int i; // esi
  __int16 *v3; // ebp
  __int16 *v4; // edi
  int AdjacencyFlags; // eax
  void *NeighbourContent; // [esp+4h] [ebp-18h]

  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a19e9*/
  result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a19f3*/
  for ( i = result; result; i = result )
  {
  int v10; // eax
  int v9; // esi
  int v8; // edx
  _DWORD *v7; // ecx
    NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 5u); /*0x5a1a12*/
    void * v14 = Cell::GetNeighbourContent((_DWORD *)i, 1u); /*0x5a1a1f*/
    void * v2 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x5a1a2c*/
    v3 = (__int16 *)Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x5a1a37*/
    v4 = (__int16 *)Cell::GetNeighbourContent((_DWORD *)i, 6u); /*0x5a1a44*/
    AdjacencyFlags = Cell::GetAdjacencyFlags(i); /*0x5a1a46*/
    if ( AdjacencyFlags == 131 )
    {
  unsigned int v6; // eax
      if ( Cell::GetAdjacencyFlags((int)v2) != 131 || !Cell::IsEmpty(v3) ) /*0x5a1a6e*/
        goto LABEL_32; /*0x5a1a6e*/
      do /*0x5a1aa3*/
      {
        __int64 v15 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1a85*/
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
  unsigned int v11; // eax
      if ( Cell::GetAdjacencyFlags((int)v2) != 56 || !Cell::IsEmpty(v4) ) /*0x5a1b1f*/
        goto LABEL_32; /*0x5a1b1f*/
      do /*0x5a1b54*/
      {
        __int64 v16 = (unsigned int)Random::State(&g_Randomizer); /*0x5a1b36*/
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
      int v12 = *(__int16 *)(i + 38); /*0x5a1c32*/
      v9 = *(__int16 *)(i + 36); /*0x5a1c36*/
      v10 = unk_89C2DC * v12; /*0x5a1c3a*/
    }
    v7[20 * v9 + 14 + 20 * v10] = v8; /*0x5a1c45*/
LABEL_32:
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a1c49*/
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
{
  int i; // edi
  int j; // edi
  int result; // eax

  E4Recv_5A1C70 *v17 = this; /*0x5a1c7c*/
  if ( g_MapTileArray ) /*0x5a1c80*/
  {
    int v1 = unk_89C2DC * unk_89C2DC; /*0x5a1c88*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1c8d*/
    {
      int v2 = 0; /*0x5a1c8f*/
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
    void * v4 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x5a1cc0*/
    if ( v4 ) /*0x5a1cc5*/
    {
      TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + i)); /*0x5a1cc9*/
      __3_YAXPAX_Z(v4); /*0x5a1ccf*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x5a1ce5*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1cef*/
  {
    int v5 = 0; /*0x5a1cf1*/
    int v6 = unk_89C2DC * unk_89C2DC; /*0x5a1cf3*/
    do /*0x5a1d4f*/
    {
      int v16 = *(_DWORD *)((char *)g_MapTileArray + v5); /*0x5a1d08*/
      int * v7 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v16); /*0x5a1d11*/
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
    int v9 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x5a1d67*/
    if ( *(_BYTE *)(v9 + 20) ) /*0x5a1d6a*/
    {
      int v10 = v17[15]; /*0x5a1d75*/
      bool v11 = v10 == 3 || v10 == 4; /*0x5a1d86*/
      RandomMap::CollectTerrainCells( /*0x5a1da3*/
        *((_DWORD **)g_RandomMap_TerrainState + j),
        (*(_DWORD *)(v9 + 12) > 8000) + !v11 + 4);
      RandomMap::PlaceRandomMapTerrain((_DWORD *)v9); /*0x5a1daa*/
    }
  }
  result = unk_89C2DC * unk_89C2DC; /*0x5a1dbf*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5a1dc4*/
  {
    int v13 = 0; /*0x5a1dc6*/
    int v14 = unk_89C2DC * unk_89C2DC; /*0x5a1dc8*/
    do /*0x5a1e07*/
    {
      result = (int)g_MapTileArray + v13; /*0x5a1dd0*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v13 + 56) == -1 && (*(_WORD *)result || *(_WORD *)(result + 2)) ) /*0x5a1de2*/
      {
        void * v15 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)((char *)g_MapTileArray + v13)); /*0x5a1def*/
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
void GenerateTerrainHeightMapInternal()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int *i; // edi
  __int16 v5; // ax
  int j; // ebp
  __int16 v12; // cx
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a33f9*/
  result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a3403*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x5a340c*/
  {
  int v16; // [esp+4h] [ebp-Ch] BYREF
    if ( CellClass::IsTerrainType(i) ) /*0x5a3417*/
    {
      int v2 = g_MapCellHeight_Value; /*0x5a3424*/
      int v3 = 0; /*0x5a342a*/
      while ( 1 ) /*0x5a3431*/
      {
        int v4 = v3 & 7; /*0x5a3431*/
        v16 = i[9]; /*0x5a3434*/
        v5 = LOWORD(Direction_X_Offsets[v4]) + v16; /*0x5a3438*/
        LOWORD(v4) = HIWORD(Direction_X_Offsets[v4]); /*0x5a3447*/
  int v17; // [esp+8h] [ebp-8h]
        LOWORD(v17) = v5; /*0x5a344b*/
        HIWORD(v17) = HIWORD(v16) + v4; /*0x5a3455*/
        v16 = v17; /*0x5a345e*/
        int v6 = SHIWORD(v17) + v5; /*0x5a3468*/
        if ( v6 > v2 && v5 - SHIWORD(v17) < v2 && SHIWORD(v17) - v5 < v2 && v6 <= g_MapCellCount ) /*0x5a3483*/
        {
          _DWORD * v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v16); /*0x5a348f*/
          if ( Cell::IsEmpty(v7) ) /*0x5a3496*/
          {
            int v8 = 80 * ((__int16)v16 + unk_89C2DC * SHIWORD(v16)); /*0x5a34cb*/
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
      int v9 = g_MapCellHeight_Value; /*0x5a351c*/
      for ( j = 0; j < 8; ++j ) /*0x5a3522*/
      {
        int v11 = j & 7; /*0x5a3529*/
        v16 = i[9]; /*0x5a352c*/
        v12 = HIWORD(v16) + HIWORD(Direction_X_Offsets[v11]); /*0x5a3543*/
  int v18; // [esp+Ch] [ebp-4h]
        LOWORD(v18) = v16 + LOWORD(Direction_X_Offsets[v11]); /*0x5a354b*/
        HIWORD(v18) = v12; /*0x5a3550*/
        v16 = v18; /*0x5a3559*/
        int v13 = v12; /*0x5a3560*/
        int v14 = v12 + (__int16)v18; /*0x5a3563*/
        if ( v14 > v9 && (__int16)v18 - v13 < v9 && v13 - (__int16)v18 < v9 && v14 <= g_MapCellCount ) /*0x5a357e*/
        {
          _DWORD * v15 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v16); /*0x5a358a*/
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
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a35cf*/
  }
  return result; /*0x5a35e6*/
}
}
} // namespace gamemd

// 0x5A45E0
namespace gamemd {
void ScatterTerrainTrees(IUnknown * aP0, int a2, double a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v4; // eax
  AbstractClass *v5; // ebx
  AbstractClass *v7; // esi
  int i; // eax
  __int16 *v17; // eax
  __int16 *v19; // edi
  Random *v20; // ebx
  TerrainClass *v22; // edi
  __int16 v26; // dx
  TerrainClass **v30; // ebx
  __int16 *v37; // edi
  __int16 *v39; // [esp+18h] [ebp-58h]
  AbstractClass *v40; // [esp+1Ch] [ebp-54h]
  TerrainClass *v43; // [esp+2Ch] [ebp-44h]
  TerrainClass **v44; // [esp+30h] [ebp-40h]
  int Random_field_0x04; // [esp+3Ch] [ebp-34h] BYREF
  float v49; // [esp+40h] [ebp-30h]
  __int64 v50; // [esp+44h] [ebp-2Ch]
  __int64 v51; // [esp+4Ch] [ebp-24h]
  __int64 v52; // [esp+54h] [ebp-1Ch]
  char Buffer[20]; // [esp+5Ch] [ebp-14h] BYREF

  int v3 = 25 * a2; /*0x5a45f2*/
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
  int v6 = __2_YAPAXI_Z(0x14u); /*0x5a462a*/
  v7 = (AbstractClass *)v6; /*0x5a462f*/
  if ( v6 ) /*0x5a4636*/
  {
    *(_DWORD *)(v6 + 12) = 0; /*0x5a463f*/
    *(_DWORD *)(v6 + 16) = -1; /*0x5a4647*/
    *(_DWORD *)v6 = 0; /*0x5a464e*/
    *(_DWORD *)(v6 + 4) = v3; /*0x5a4654*/
    int v8 = __2_YAPAXI_Z(100 * a2 + 4); /*0x5a4657*/
    int v9 = *(_DWORD *)&v7->__pad_0[4]; /*0x5a465c*/
    *(_DWORD *)&v7->__pad_0[8] = v8; /*0x5a465f*/
    int v10 = 0; /*0x5a4665*/
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
  int v41 = 1; /*0x5a46a5*/
  *(_DWORD *)v5->__pad_0 = aP0->field_24; /*0x5a46b0*/
  *(_DWORD *)&v5->__pad_0[4] = 0; /*0x5a46b2*/
  *((_BYTE *)g_MapTileArray + 80 * (__int16)aP0->field_24 + 80 * unk_89C2DC * (__int16)HIWORD(aP0->field_24) + 71) = 1; /*0x5a46dc*/
  unsigned int v12 = *(_DWORD *)v7->__pad_0 + 1; /*0x5a46e6*/
  float v46 = *(float *)&v5->__pad_0[4]; /*0x5a46e9*/
  unsigned int v13 = v12 >> 1; /*0x5a46f0*/
  if ( v12 < *(_DWORD *)&v7->__pad_0[4] ) /*0x5a46f4*/
  {
    if ( v12 > 1 ) /*0x5a46f9*/
    {
      do /*0x5a4719*/
      {
        int v14 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a46fb*/
        int v15 = *(_DWORD *)(v14 + 4 * v13); /*0x5a46fe*/
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
    unsigned int v16 = *(_DWORD *)&v7->__pad_0[12]; /*0x5a472b*/
    ++*(_DWORD *)v7->__pad_0; /*0x5a4731*/
    if ( (unsigned int)v5 > v16 ) /*0x5a4733*/
      *(_DWORD *)&v7->__pad_0[12] = v5; /*0x5a4735*/
    if ( (unsigned int)v5 < v7->uniqueId ) /*0x5a473b*/
      v7->uniqueId = (int)v5; /*0x5a473d*/
  }
  if ( *(_DWORD *)v7->__pad_0 ) /*0x5a4740*/
  {
    int v18 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a474e*/
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
  int v42 = 0; /*0x5a4783*/
  if ( a2 > 0 ) /*0x5a478d*/
  {
    while ( v17 && v41 < v3 ) /*0x5a479f*/
    {
      v20 = (Random *)CellCoord::To_CellObj(&stru_87C374[13428], v17); /*0x5a47ba*/
      if ( Cell::IsEmpty(v20) /*0x5a47ec*/
        && !v20[14].Random_field_0x04
        && v20[4].Random_field_0x04 == -1
        && v20[14].Random_field_0x0C != 3 )
      {
        v50 = (unsigned int)Random::State(&g_Randomizer); /*0x5a47fc*/
        if ( (double)v50 * 2.328306437080797e-10 < a3 ) /*0x5a4816*/
        {
  unsigned int v21; // eax
          do /*0x5a4848*/
          {
            v51 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4826*/
            v21 = Math::RoundToInt((double)v51 * 0.000000005820766092701993 + 1.0); /*0x5a483e*/
          }
          while ( v21 > 0x19 ); /*0x5a4848*/
          sprintf(Buffer, (ObjectClass *)&stru_82C090[12], (INIClass *)((int)v21 / 10)); /*0x5a486f*/
          v22 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a487e*/
          if ( v22 ) /*0x5a4885*/
          {
            Random_field_0x04 = v20[2].Random_field_0x04; /*0x5a488e*/
            int v23 = Terrain::LookupByName(Buffer); /*0x5a4892*/
            TerrainClass::Construct( /*0x5a48aa*/
              (void **)v22,
              *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player[42448] + 4 * v23),
              (TerrainClass *)&Random_field_0x04);
          }
          ++v42; /*0x5a48af*/
        }
      }
      char v24 = 0; /*0x5a48bb*/
      int v47 = 0; /*0x5a48c0*/
      v44 = (TerrainClass **)((char *)v40 + 8 * v41); /*0x5a48c4*/
      do /*0x5a4a61*/
      {
        int v25 = v24 & 7; /*0x5a48cc*/
        v26 = v39[1] + *(_WORD *)&stru_89E138[5296][4 * v25 + 162]; /*0x5a48de*/
        LOWORD(v25) = *v39 + *(_WORD *)&stru_89E138[5296][4 * v25 + 160]; /*0x5a48e5*/
        HIWORD(v43) = v26; /*0x5a48ee*/
        int v27 = (__int16)v25; /*0x5a48f3*/
        LOWORD(v43) = v25; /*0x5a48f9*/
        int v28 = v26 + (__int16)v25; /*0x5a48fe*/
        if ( v28 > g_MapCellHeight_Value /*0x5a492d*/
          && v27 - v26 < g_MapCellHeight_Value
          && v26 - v27 < g_MapCellHeight_Value
          && v28 <= g_MapCellCount )
        {
          char * v29 = (char *)g_MapTileArray + 80 * v27 + 80 * unk_89C2DC * v26; /*0x5a494a*/
          if ( !v29[71] && !v29[69] && v41 < 25 * a2 ) /*0x5a496c*/
          {
            v30 = v44; /*0x5a4972*/
            *v44 = v43; /*0x5a497d*/
  double v45; // [esp+30h] [ebp-40h]
            v45 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(((__int16)aP0->field_24 - v27) /*0x5a49b1*/
                                                                           * ((__int16)aP0->field_24 - v27)
                                                                           + ((__int16)HIWORD(aP0->field_24) - v26)
                                                                           * ((__int16)HIWORD(aP0->field_24) - v26))));
            v52 = (unsigned int)Random::State(&g_Randomizer); /*0x5a49c2*/
            ++v41; /*0x5a49dd*/
            *((float *)v30 + 1) = (double)v52 * 5.0 * 2.328306437080797e-10 + v45; /*0x5a49eb*/
            v29[71] = 1; /*0x5a49ee*/
            unsigned int v31 = (unsigned int)v30; /*0x5a49f4*/
            unsigned int v32 = *(_DWORD *)v7->__pad_0 + 1; /*0x5a49f9*/
            v44 = v30 + 2; /*0x5a49fa*/
            v49 = *((float *)v30 + 1); /*0x5a4a03*/
            unsigned int v33 = v32 >> 1; /*0x5a4a0a*/
            if ( v32 < *(_DWORD *)&v7->__pad_0[4] ) /*0x5a4a0e*/
            {
              for ( ; v32 > 1; v33 >>= 1 ) /*0x5a4a13*/
              {
                int v34 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a4a15*/
                if ( *(float *)(*(_DWORD *)(v34 + 4 * v33) + 4) <= (double)v49 ) /*0x5a4a27*/
                  break; /*0x5a4a27*/
                *(_DWORD *)(v34 + 4 * v32) = *(_DWORD *)(v34 + 4 * v33); /*0x5a4a2c*/
                v32 = v33; /*0x5a4a2f*/
              }
              *(_DWORD *)(*(_DWORD *)&v7->__pad_0[8] + 4 * v32) = v31; /*0x5a4a3b*/
              unsigned int v35 = *(_DWORD *)&v7->__pad_0[12]; /*0x5a4a40*/
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
        int v36 = *(_DWORD *)&v7->__pad_0[8]; /*0x5a4a73*/
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
{
  AbstractClass *v6; // eax
  AbstractClass *v7; // ebx
  AbstractClass *v9; // esi
  __int16 *v20; // eax
  AbstractClass *v22; // edi
  Random *v24; // edx
  Random *v27; // ebx
  AbstractClass *v38; // eax
  AbstractClass *v40; // [esp+18h] [ebp-30h]
  AbstractClass *v41; // [esp+1Ch] [ebp-2Ch]
  Random *v42; // [esp+20h] [ebp-28h]
  Random *v43; // [esp+24h] [ebp-24h]
  int Random_field_0x04; // [esp+28h] [ebp-20h]
  float v47; // [esp+38h] [ebp-10h]
  int v48; // [esp+3Ch] [ebp-Ch] BYREF
  __int64 v49; // [esp+40h] [ebp-8h]
  int v5 = 10 * (_DWORD)aP2; /*0x5a4b72*/
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
  int v8 = __2_YAPAXI_Z(0x14u); /*0x5a4ba5*/
  v9 = (AbstractClass *)v8; /*0x5a4baa*/
  if ( v8 ) /*0x5a4bb3*/
  {
    *(_DWORD *)(v8 + 12) = 0; /*0x5a4bb5*/
    *(_DWORD *)v8 = 0; /*0x5a4bb8*/
    *(_DWORD *)(v8 + 16) = -1; /*0x5a4bc1*/
    *(_DWORD *)(v8 + 4) = v5; /*0x5a4bc9*/
    int v10 = __2_YAPAXI_Z(40 * (_DWORD)aP2 + 4); /*0x5a4bcc*/
    int v11 = *(_DWORD *)&v9->__pad_0[4]; /*0x5a4bd1*/
    *(_DWORD *)&v9->__pad_0[8] = v10; /*0x5a4bd4*/
    int v12 = 0; /*0x5a4bda*/
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
  int v13 = 0; /*0x5a4bfb*/
  bool v14 = *(int *)v9->__pad_0 < 0; /*0x5a4bfd*/
  int v45 = 0; /*0x5a4bff*/
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
  unsigned int v15 = *(_DWORD *)v9->__pad_0 + 1; /*0x5a4c58*/
  Random_field_0x04 = *(int *)&v7->__pad_0[4]; /*0x5a4c5b*/
  unsigned int v16 = v15 >> 1; /*0x5a4c62*/
  if ( v15 < *(_DWORD *)&v9->__pad_0[4] ) /*0x5a4c66*/
  {
    if ( v15 > 1 ) /*0x5a4c6b*/
    {
      do /*0x5a4c8b*/
      {
        int v17 = *(_DWORD *)&v9->__pad_0[8]; /*0x5a4c6d*/
        int v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a4c70*/
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
    unsigned int v19 = *(_DWORD *)&v9->__pad_0[12]; /*0x5a4c99*/
    ++*(_DWORD *)v9->__pad_0; /*0x5a4c9f*/
    if ( (unsigned int)v7 > v19 ) /*0x5a4ca1*/
      *(_DWORD *)&v9->__pad_0[12] = v7; /*0x5a4ca3*/
    if ( (unsigned int)v7 < v9->uniqueId ) /*0x5a4ca9*/
      v9->uniqueId = (int)v7; /*0x5a4cab*/
  }
  if ( *(_DWORD *)v9->__pad_0 ) /*0x5a4cae*/
  {
    int v21 = *(_DWORD *)&v9->__pad_0[8]; /*0x5a4cbc*/
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
      _DWORD * v23 = CellCoord::To_CellObj(&stru_87C374[13428], v20); /*0x5a4d07*/
      v24 = v42; /*0x5a4d0f*/
      v23[14] = a2; /*0x5a4d13*/
      char v25 = 0; /*0x5a4d16*/
      *(float *)&Random_field_0x04 = 0.0; /*0x5a4d18*/
      float * v26 = (float *)&v7->__pad_0[8 * (_DWORD)v24]; /*0x5a4d1c*/
      do /*0x5a4f42*/
      {
        int v39 = CellStruct::Add(v40, (IUnknown *)&v48, (IUnknown *)(4 * (v25 & 7) + 9041544))->field_0; /*0x5a4d44*/
        v43 = (Random *)(SHIWORD(v39) + (__int16)v39); /*0x5a4d55*/
        if ( (int)v43 > g_MapCellHeight_Value /*0x5a4d81*/
          && (__int16)v39 - SHIWORD(v39) < g_MapCellHeight_Value
          && SHIWORD(v39) - (__int16)v39 < g_MapCellHeight_Value
          && (int)v43 <= g_MapCellCount )
        {
          v27 = (Random *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v39); /*0x5a4d96*/
          v43 = v27; /*0x5a4d9a*/
          if ( Cell::IsEmpty(v27) /*0x5a4dbf*/
            || a5 && (CellClass::InBounds((int *)v27->__pad_0) || CellClass::InMapDataRange((int *)v27->__pad_0)) )
          {
            int v28 = SHIWORD(v39); /*0x5a4dcc*/
  double v46; // [esp+30h] [ebp-18h]
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
              int v29 = SHIWORD(v39); /*0x5a4e88*/
              int v30 = (__int16)v39; /*0x5a4e93*/
              v26[1] = (double)v49 * 5.0 * 2.328306437080797e-10 + v46; /*0x5a4ea2*/
              *((_DWORD *)g_MapTileArray + 20 * v30 + 20 * unk_89C2DC * v29 + 15) = a4; /*0x5a4eba*/
              unsigned int v31 = (unsigned int)v26; /*0x5a4ec3*/
              v42 = (Random *)((char *)v42 + 1); /*0x5a4ec5*/
              float v32 = v26[1]; /*0x5a4ecb*/
              v26 += 2; /*0x5a4ece*/
              unsigned int v33 = *(_DWORD *)v9->__pad_0 + 1; /*0x5a4ed1*/
              v47 = v32; /*0x5a4ed2*/
              unsigned int v34 = *(_DWORD *)&v9->__pad_0[4]; /*0x5a4ed6*/
              unsigned int v35 = v33 >> 1; /*0x5a4edb*/
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
                unsigned int v36 = *(_DWORD *)&v9->__pad_0[12]; /*0x5a4f21*/
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
      int v37 = ++v45; /*0x5a4f4e*/
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
{
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
  int v1 = a1; /*0x5a6514*/
  unsigned int v2 = *(_DWORD *)(a1 + 16) / 10; /*0x5a6534*/
  int v3 = *(_DWORD *)(a1 + 16) / 20; /*0x5a6542*/
  *(_QWORD *)&v35[0] = v2 - v3 + 1; /*0x5a6549*/
  __int64 v4; // st7
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
          v21 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v35); /*0x5a67a7*/
          if ( !CellClass::InBounds(v21) && !CellClass::InMapDataRange(v21) /*0x5a67da*/
            || v21[57]
            || v21[59] == 3
            || !Type::CheckAmbiguity(&DataGlobal_87F7E8, (int)v21, 1) )
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
void PlaceRandomNeutralUnits(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *Owner; // ebp
  int result; // eax
  int ExitCellByName; // eax
  int Index; // eax
  int v20; // [esp+1Ch] [ebp-44h]
  __int64 v21; // [esp+20h] [ebp-40h]
  IUnknown *v22; // [esp+28h] [ebp-38h]
  __int64 v23; // [esp+2Ch] [ebp-34h]
  __int64 v24; // [esp+34h] [ebp-2Ch]
  __int64 v25; // [esp+3Ch] [ebp-24h]
  __int64 v26; // [esp+44h] [ebp-1Ch]
  double v27; // [esp+4Ch] [ebp-14h]
  _DWORD v28[3]; // [esp+54h] [ebp-Ch] BYREF

  void * v1 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a692c*/
  Owner = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a6938*/
  v22 = Owner; /*0x5a693c*/
  do /*0x5a696e*/
  {
    v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5a694a*/
    result = Math::RoundToInt((double)v21 * 0.000000001164153218540399 + 1.0); /*0x5a6962*/
    v20 = result; /*0x5a696a*/
  }
  while ( (unsigned int)result > 5 ); /*0x5a696e*/
  int v19 = 0; /*0x5a6972*/
  LODWORD(v21) = 0; /*0x5a6976*/
  if ( result > 0 ) /*0x5a697a*/
  {
    while ( 1 ) /*0x5a698e*/
    {
  _DWORD *v8; // esi
  int v5; // esi
  int v4; // eax
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
        void * v9 = __2_YAPAXI_Z(0x8E8u); /*0x5a6a04*/
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
        void * v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a69cf*/
        if ( !v6 ) /*0x5a69d6*/
          goto LABEL_13; /*0x5a69d6*/
        ExitCellByName = Factory::FindExitCellByName(*(&off_82B180 + v5)); /*0x5a69df*/
        v8 = (_DWORD *)InfantryClass::Construct((int)v6, *((_DWORD *)Factory_ExitCellTable + ExitCellByName), Owner); /*0x5a69f6*/
      }
LABEL_14:
      int v11 = 0; /*0x5a6a31*/
      char v17 = 0; /*0x5a6a33*/
      while ( v11 < 60 ) /*0x5a6a3a*/
      {
  unsigned int v13; // eax
        unsigned int v12 = *(_DWORD *)(a1 + 16) - 1; /*0x5a6a4b*/
        v24 = *(unsigned int *)(a1 + 16); /*0x5a6a4f*/
        v27 = (double)v24; /*0x5a6a57*/
        do /*0x5a6a82*/
        {
          v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6a65*/
          v13 = Math::RoundToInt((double)v25 * v27 * 2.328306437080797e-10); /*0x5a6a7b*/
        }
        while ( v13 > v12 ); /*0x5a6a82*/
        int v18 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v13); /*0x5a6a9a*/
        if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v18, 1) /*0x5a6aba*/
          && !*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v18) + 57) )
        {
  unsigned int v14; // eax
          do /*0x5a6aea*/
          {
            v26 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6ad0*/
            v14 = Math::RoundToInt((double)v26 * 0.000000001862645149664638); /*0x5a6ae2*/
          }
          while ( v14 > 7 ); /*0x5a6aea*/
          v28[0] = ((__int16)v18 << 8) + 128; /*0x5a6b0c*/
          int v15 = *v8; /*0x5a6b10*/
          v28[1] = (SHIWORD(v18) << 8) + 128; /*0x5a6b16*/
          v28[2] = 0; /*0x5a6b1d*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(v15 + 216))(v8, v28, 32 * v14) ) /*0x5a6b21*/
          {
            int v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 160); /*0x5a6b35*/
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
int E4Recv_5A6BA0::sub_5A6BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v7; // esi
  void *v8; // eax
  __int16 v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]
  int v1 = *(this + 1); /*0x5a6ba3*/
  int v2 = *this; /*0x5a6ba7*/
  int v3 = v2 + 7; /*0x5a6bae*/
  int v4 = v2 - 7; /*0x5a6bb1*/
  int v5 = v1 - 7; /*0x5a6bb6*/
  v11 = v2 + 7; /*0x5a6bb9*/
  int v6 = v1 + 7; /*0x5a6bbd*/
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
    v8 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v10); /*0x5a6bdc*/
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
void PlaceMapSeedClassBuildings(ObjectClass * aP0, ObjectClass * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // edi
  __int16 v9; // cx
  ObjectClass *v19; // [esp+14h] [ebp-8h]

  v19 = aP1; /*0x5a6c1a*/
  _DWORD * v4 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player[45024] + 4 * (_DWORD)aP0); /*0x5a6c1e*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a6c26*/
  int v20 = result; /*0x5a6c2e*/
  if ( result ) /*0x5a6c32*/
  {
    result = v4[186]; /*0x5a6c38*/
    int v6 = 0; /*0x5a6c3e*/
    int v17 = 0; /*0x5a6c42*/
    if ( result > 0 ) /*0x5a6c46*/
    {
      int v7 = g_MapCellHeight_Value; /*0x5a6c4d*/
      do /*0x5a6d66*/
      {
        for ( i = 0; i < v4[185]; ++i ) /*0x5a6c5e*/
        {
          v9 = *(_WORD *)&v19->__pad_0[2] + v6; /*0x5a6c6e*/
  int v18; // [esp+10h] [ebp-Ch]
          LOWORD(v18) = i + *(_WORD *)v19->__pad_0; /*0x5a6c75*/
          HIWORD(v18) = v9; /*0x5a6c7a*/
          int v16 = v18; /*0x5a6c83*/
          int v10 = v9; /*0x5a6c8a*/
          int v11 = v9 + (__int16)v18; /*0x5a6c8d*/
          if ( v11 > v7 ) /*0x5a6c92*/
          {
            if ( (__int16)v18 - v10 >= v7 || v10 - (__int16)v18 >= v7 || v11 > g_MapCellCount ) /*0x5a6cb4*/
            {
              v6 = v17; /*0x5a6d46*/
            }
            else
            {
              _BYTE * v12 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v16); /*0x5a6cc4*/
              v6 = v17; /*0x5a6ccf*/
              int v13 = i + v17 * v4[185]; /*0x5a6cda*/
              int v14 = *(_DWORD *)(v20 + 4 * v13 + 16); /*0x5a6cdc*/
              if ( v14 ) /*0x5a6ce2*/
              {
                int v15 = v4[165]; /*0x5a6ce4*/
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
{
  MapSeedClass *v4; // ecx
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
  int v5 = 0; /*0x5a6d91*/
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
    if ( *((CCINIClass **)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v20) + 14) == dword_ABC2B0 ) /*0x5a6e3f*/
      break; /*0x5a6e3f*/
    v9 = a4 & 7; /*0x5a6e45*/
    LOWORD(aP2a) = (_WORD)v20 + *(_WORD *)&stru_89E138[5296][4 * v9 + 160]; /*0x5a6e65*/
    HIWORD(aP2a) = HIWORD(v20) + *(_WORD *)&stru_89E138[5296][4 * v9 + 162]; /*0x5a6e6a*/
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
    HIWORD(aP2b) = HIWORD(v20) + *(_WORD *)&stru_89E138[5296][4 * v12 + 162]; /*0x5a6f23*/
    v11 = (_WORD)v20 + *(_WORD *)&stru_89E138[5296][4 * v12 + 160]; /*0x5a6f28*/
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
{
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
  int v4 = *(_DWORD *)a1; /*0x5a7080*/
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
    LOWORD(v4) = v4 + *(_WORD *)&stru_89E138[5296][4 * v7 + 160]; /*0x5a7185*/
    HIWORD(v21) += *(_WORD *)&stru_89E138[5296][4 * v7 + 162]; /*0x5a7189*/
  }
  v8 = ((_BYTE)a4 - 4) & 7; /*0x5a719d*/
  v9 = (__int16 *)(4 * v8 + 9041544); /*0x5a71ac*/
  HIWORD(v27) = HIWORD(v21) + *(_WORD *)&stru_89E138[5296][4 * v8 + 162]; /*0x5a71c1*/
  LOWORD(v27) = v4 + *(_WORD *)&stru_89E138[5296][4 * v8 + 160]; /*0x5a71c6*/
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
void IsAreaClearMap(MapClass * aP0, char a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = aP0->field_0; /*0x5a7262*/
  int v5 = (__int16)aP0->field_0; /*0x5a7268*/
  void * v15 = aP0->field_4; /*0x5a726f*/
  int v16 = (__int16)v15 + v5; /*0x5a7278*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a727c*/
    return 0; /*0x5a727c*/
  if ( v5 - (__int16)v15 >= g_MapCellHeight_Value ) /*0x5a7288*/
    return 0; /*0x5a7288*/
  if ( (__int16)v15 - v5 >= g_MapCellHeight_Value ) /*0x5a7292*/
    return 0; /*0x5a7292*/
  if ( v16 > g_MapCellCount ) /*0x5a72a4*/
    return 0; /*0x5a72a4*/
  void * v6 = aP0->field_8; /*0x5a72aa*/
  int v7 = (__int16)(v4 + (_WORD)v6 - 1); /*0x5a72b1*/
  v16 = (__int16)v15 + v7; /*0x5a72bc*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a72c0*/
    return 0; /*0x5a72c0*/
  if ( v7 - (__int16)v15 >= g_MapCellHeight_Value ) /*0x5a72cc*/
    return 0; /*0x5a72cc*/
  if ( (__int16)v15 - v7 >= g_MapCellHeight_Value ) /*0x5a72d6*/
    return 0; /*0x5a72d6*/
  if ( v16 > g_MapCellCount ) /*0x5a72e8*/
    return 0; /*0x5a72e8*/
  char * v17 = (char *)aP0->field_C + (unsigned int)v15 - 1; /*0x5a72f9*/
  v16 = (__int16)v17 + (__int16)v4; /*0x5a7308*/
  if ( v16 <= g_MapCellHeight_Value ) /*0x5a730c*/
    return 0; /*0x5a730c*/
  if ( (__int16)v4 - (__int16)v17 >= g_MapCellHeight_Value ) /*0x5a7318*/
    return 0; /*0x5a7318*/
  if ( (__int16)v17 - (__int16)v4 >= g_MapCellHeight_Value ) /*0x5a7322*/
    return 0; /*0x5a7322*/
  if ( v16 > g_MapCellCount ) /*0x5a7334*/
    return 0; /*0x5a7334*/
  int v8 = (__int16)(v4 + (_WORD)v6 - 1); /*0x5a733e*/
  int v9 = (__int16)v17; /*0x5a7341*/
  v17 = (char *)((__int16)v17 + v8); /*0x5a734b*/
  if ( (int)v17 <= g_MapCellHeight_Value /*0x5a7377*/
    || v8 - v9 >= g_MapCellHeight_Value
    || v9 - v8 >= g_MapCellHeight_Value
    || (int)v17 > g_MapCellCount )
  {
    return 0; /*0x5a742a*/
  }
  int v10 = (int)v15; /*0x5a7384*/
  if ( (int)v15 < (int)((int)v15 + (unsigned int)aP0->field_C) ) /*0x5a738a*/
  {
    do /*0x5a7418*/
    {
      int v11 = v4; /*0x5a7390*/
      if ( v4 < (int)v6 + v4 ) /*0x5a7397*/
      {
        do /*0x5a73a3*/
        {
          LOWORD(v15) = v11; /*0x5a73a3*/
          HIWORD(v15) = v10; /*0x5a73a8*/
          int * v12 = (int *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v15); /*0x5a73b2*/
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
void MapClass_IsAreaUniform(int * a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = *a1; /*0x5a7452*/
  int v4 = a1[1]; /*0x5a7454*/
  int v5 = (__int16)*a1; /*0x5a7457*/
  int v14 = (__int16)v4 + v5; /*0x5a7462*/
  if ( v14 > g_MapCellHeight_Value /*0x5a748e*/
    && v5 - (__int16)v4 < g_MapCellHeight_Value
    && (__int16)v4 - v5 < g_MapCellHeight_Value
    && v14 <= g_MapCellCount )
  {
    int v15 = a1[2] + v3 - 1; /*0x5a749b*/
    v14 = (__int16)v4 + (__int16)v15; /*0x5a74aa*/
    if ( v14 > g_MapCellHeight_Value /*0x5a74d6*/
      && (__int16)v15 - (__int16)v4 < g_MapCellHeight_Value
      && (__int16)v4 - (__int16)v15 < g_MapCellHeight_Value
      && v14 <= g_MapCellCount )
    {
      int v16 = a1[3] + v4 - 1; /*0x5a74e3*/
      v14 = (__int16)v16 + (__int16)v3; /*0x5a74f2*/
      if ( v14 > g_MapCellHeight_Value /*0x5a751e*/
        && (__int16)v3 - (__int16)v16 < g_MapCellHeight_Value
        && (__int16)v16 - (__int16)v3 < g_MapCellHeight_Value
        && v14 <= g_MapCellCount )
      {
        int v6 = (__int16)v16; /*0x5a7529*/
        v16 = (__int16)v16 + (__int16)v15; /*0x5a7533*/
        if ( v16 > g_MapCellHeight_Value /*0x5a755f*/
          && (__int16)v15 - v6 < g_MapCellHeight_Value
          && v6 - (__int16)v15 < g_MapCellHeight_Value
          && v16 <= g_MapCellCount )
        {
  int v10; // ebp
          LOWORD(v14) = v3; /*0x5a756f*/
          HIWORD(v14) = v4; /*0x5a7574*/
          char * v7 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14); /*0x5a7579*/
          int v8 = a1[1]; /*0x5a757e*/
          int v9 = v8 + a1[3]; /*0x5a758b*/
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
            char * v11 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14); /*0x5a75bd*/
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
void int PlaceMapSeedBuildingsStrategic(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int result; // eax

  int v37 = 6; /*0x5a78e3*/
  _DWORD v38[17]; // [esp+60h] [ebp-44h] BYREF
  v38[0] = 4; /*0x5a78e7*/
  int v1 = a1; /*0x5a78f3*/
  v38[4] = 6; /*0x5a78fa*/
  v38[8] = 4; /*0x5a7902*/
  v38[3] = 4; /*0x5a7910*/
  v38[7] = 4; /*0x5a7914*/
  v38[11] = 4; /*0x5a7918*/
  int v35 = 0; /*0x5a791f*/
  int v36 = 0; /*0x5a7923*/
  v38[1] = 0; /*0x5a7927*/
  v38[2] = 0; /*0x5a792b*/
  v38[5] = 0; /*0x5a792f*/
  v38[6] = 0; /*0x5a7933*/
  v38[9] = 0; /*0x5a7937*/
  v38[10] = 0; /*0x5a793e*/
  v38[13] = 0; /*0x5a7947*/
  v38[14] = 0; /*0x5a794e*/
  int v2 = *(_DWORD *)(a1 + 16); /*0x5a7955*/
  v38[15] = 2; /*0x5a795d*/
  v38[12] = 2; /*0x5a796b*/
  result = (unsigned int)((unsigned __int64)(1374389535LL * v2) >> 32) >> 31; /*0x5a7972*/
  int v4 = v2 / 50; /*0x5a797c*/
  v38[16] = 4; /*0x5a797e*/
  int v30 = v2 / 50; /*0x5a7987*/
  int v21 = 0; /*0x5a798f*/
  int v5 = 10 * (v2 / 50); /*0x5a7993*/
  int v29 = 0; /*0x5a7997*/
  int v31 = v5; /*0x5a799b*/
  if ( v5 > 0 ) /*0x5a799f*/
  {
    while ( v21 < v4 ) /*0x5a79b2*/
    {
  unsigned int v7; // eax
      unsigned int v6 = *(_DWORD *)(v1 + 16) - 1; /*0x5a79c3*/
      __int64 v34 = *(unsigned int *)(v1 + 16); /*0x5a79c7*/
      double v22 = (double)v34; /*0x5a79cf*/
      do /*0x5a79fe*/
      {
        __int64 v33 = (unsigned int)Random::State(&g_Randomizer); /*0x5a79dd*/
        v7 = Math::RoundToInt((double)v33 * v22 * 2.328306437080797e-10); /*0x5a79f7*/
      }
      while ( v7 > v6 ); /*0x5a79fe*/
      int v8 = *(_DWORD *)(v1 + 4); /*0x5a7a00*/
      int v9 = 0; /*0x5a7a03*/
      char v10 = 0; /*0x5a7a05*/
      int v11 = *(_DWORD *)(v8 + 4 * v7); /*0x5a7a07*/
      int v12 = SHIWORD(v11); /*0x5a7a0e*/
      int v24 = (__int16)v11; /*0x5a7a16*/
      int v26 = 0; /*0x5a7a1c*/
      int v27 = 0; /*0x5a7a20*/
      int * v13 = v38; /*0x5a7a24*/
      int v25 = v12; /*0x5a7a28*/
      int * v23 = v38; /*0x5a7a2c*/
      while ( v9 < 5 ) /*0x5a7a39*/
      {
        int v14 = *(v13 - 1); /*0x5a7a3b*/
        int v15 = *v13; /*0x5a7a3e*/
        v26 = v14; /*0x5a7a44*/
        v27 = v15; /*0x5a7a48*/
        if ( (unsigned __int8)CellClass::ProcessUpdate(&v24) ) /*0x5a7a4c*/
          v10 = 1; /*0x5a7a55*/
        ++v9; /*0x5a7a5b*/
        v23 += 4; /*0x5a7a61*/
        if ( v10 ) /*0x5a7a65*/
        {
  unsigned int v16; // eax
          do /*0x5a7a99*/
          {
            __int64 v32 = (unsigned int)Random::State(&g_Randomizer); /*0x5a7a7b*/
            v16 = Math::RoundToInt((double)v32 * 0.000000001396983862248478); /*0x5a7a91*/
          }
          while ( v16 > 5 ); /*0x5a7a99*/
          int v17 = 0; /*0x5a7aa1*/
          int v18 = v16 + unk_AA10A4 + 8; /*0x5a7aa3*/
          if ( v27 / 2 > 0 ) /*0x5a7ab2*/
          {
            int v19 = v26; /*0x5a7ab4*/
            do /*0x5a7b08*/
            {
              int v20 = 0; /*0x5a7aba*/
              if ( v19 / 2 > 0 ) /*0x5a7ac3*/
              {
                do /*0x5a7afa*/
                {
  _WORD v28[2]; // [esp+2Ch] [ebp-78h] BYREF
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
void IsoTile_Draw(int a1, unsigned short * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  __int16 v9; // dx

  _WORD * v3 = a2; /*0x5a7faa*/
  _DWORD * v4 = (_DWORD *)*((_DWORD *)g_FrameCounter + a1); /*0x5a7fac*/
  _DWORD * v14 = v4; /*0x5a7fb5*/
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 156))(v4); /*0x5a7fbb*/
  int v16 = result; /*0x5a7fc3*/
  if ( result ) /*0x5a7fc7*/
  {
    result = 0; /*0x5a7fd3*/
    int v13 = 0; /*0x5a7fd7*/
    if ( (int)v4[186] > 0 ) /*0x5a7fdb*/
    {
      int v6 = g_MapCellHeight_Value; /*0x5a7fe3*/
      while ( 1 ) /*0x5a7fef*/
      {
        int v7 = v4[185]; /*0x5a7fef*/
        for ( i = 0; i < v7; v7 = v14[185] ) /*0x5a7ff9*/
        {
          v9 = v3[1] + result; /*0x5a8005*/
          int v10 = (__int16)(i + *v3); /*0x5a800c*/
          int v11 = v9; /*0x5a800f*/
          int v12 = v9 + v10; /*0x5a8012*/
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
void PlaceNeutralCreeps(unsigned short * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *OwnerHouseClass; // ebp
  int result; // eax
  int ExitCellByNameFactory; // eax
  int IndexBuildingTypeClass; // eax
  __int16 v14; // cx
  __int16 v15; // di
  __int16 v16; // ax
  int v23; // [esp+1Ch] [ebp-40h]
  int v24; // [esp+20h] [ebp-3Ch]
  __int64 v25; // [esp+24h] [ebp-38h]
  IUnknown *v26; // [esp+2Ch] [ebp-30h]
  __int64 v27; // [esp+30h] [ebp-2Ch]
  __int64 v28; // [esp+38h] [ebp-24h]
  __int64 v29; // [esp+40h] [ebp-1Ch]
  __int64 v30; // [esp+48h] [ebp-14h]
  _DWORD v31[3]; // [esp+50h] [ebp-Ch] BYREF

  void * v1 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x5a872c*/
  OwnerHouseClass = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a8738*/
  v26 = OwnerHouseClass; /*0x5a873c*/
  do /*0x5a876e*/
  {
    v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a874a*/
    result = Math::RoundToInt((double)v25 * 9.31322574832319e-10 + 1.0); /*0x5a8762*/
    v23 = result; /*0x5a876a*/
  }
  while ( (unsigned int)result > 4 ); /*0x5a876e*/
  int v22 = 0; /*0x5a8772*/
  v24 = 0; /*0x5a8776*/
  if ( result > 0 ) /*0x5a877a*/
  {
    while ( 1 ) /*0x5a878e*/
    {
  _DWORD *v8; // esi
  int v5; // esi
  int v4; // eax
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
        void * v9 = __2_YAPAXI_Z(0x8E8u); /*0x5a8804*/
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
        void * v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a87cf*/
        if ( !v6 ) /*0x5a87d6*/
          goto LABEL_13; /*0x5a87d6*/
        ExitCellByNameFactory = Factory::FindExitCellByName(*(&off_82B240 + v5)); /*0x5a87df*/
        v8 = (_DWORD *)InfantryClass::Construct( /*0x5a87f6*/
                         (int)v6,
                         *((_DWORD *)Factory_ExitCellTable + ExitCellByNameFactory),
                         OwnerHouseClass);
      }
LABEL_14:
      int v11 = 0; /*0x5a8831*/
      char v20 = 0; /*0x5a8833*/
      while ( v11 < 60 ) /*0x5a883a*/
      {
  unsigned int v13; // eax
  unsigned int v12; // edi
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
        int v21 = v25; /*0x5a88b9*/
        if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v21, 1) /*0x5a88df*/
          && !*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v21) + 57) )
        {
  unsigned int v17; // eax
          do /*0x5a890f*/
          {
            v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a88f5*/
            v17 = Math::RoundToInt((double)v30 * 0.000000001862645149664638); /*0x5a8907*/
          }
          while ( v17 > 7 ); /*0x5a890f*/
          v31[1] = (SHIWORD(v21) << 8) + 128; /*0x5a8931*/
          int v18 = *v8; /*0x5a8935*/
          v31[0] = ((__int16)v21 << 8) + 128; /*0x5a893b*/
          v31[2] = 0; /*0x5a8942*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(v18 + 216))(v8, v31, 32 * v17) ) /*0x5a8946*/
          {
            int v19 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 160); /*0x5a895a*/
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
void MapSeed_ScheduleBuildings(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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

  int v1 = 0; /*0x5a89dd*/
  v52 = 0; /*0x5a89e0*/
  _DWORD * v2 = v55; /*0x5a89e4*/
  int v3 = 1024; /*0x5a89e8*/
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
              v27 = HIWORD(Direction_X_Offsets[v50 & 7]); /*0x5a8c90*/
              LOWORD(v45) = LOWORD(v39[1]) + v49 + LOWORD(Direction_X_Offsets[v50 & 7]); /*0x5a8c94*/
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
void PlaceRandomTerrainFeatures(int a1, unsigned short * a2, int a3, unsigned int * a4, unsigned int * a5, int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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

  int v6 = 1; /*0x5a8f0b*/
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

// 0x5A9C40
namespace gamemd {
unsigned int * InitializePathData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebp
  rc_ptr_base *v5; // eax
  rc_ptr_base *v6; // eax
  rc_ptr_base *v7; // eax
  rc_ptr_base *v8; // eax
  rc_ptr_base *v9; // eax
  rc_ptr_base *v10; // eax
  rc_ptr_base *v11; // eax
  rc_ptr_base *v12; // eax
  rc_ptr_base *v13; // eax
  rc_ptr_base *v14; // eax
  rc_ptr_base *v15; // eax
  rc_ptr_base *v16; // eax
  rc_ptr_base *v17; // eax
  rc_ptr_base *v18; // eax
  rc_ptr_base *v19; // eax
  rc_ptr_base *v20; // eax
  rc_ptr_base *v21; // eax
  rc_ptr_base *v22; // eax
  rc_ptr_base *v23; // eax
  rc_ptr_base *v24; // eax
  rc_ptr_base *v25; // eax
  rc_ptr_base *v26; // eax
  rc_ptr_base *v27; // eax
  rc_ptr_base *v28; // eax
  rc_ptr_base *v29; // eax
  rc_ptr_base *v30; // eax
  rc_ptr_base *v31; // eax
  rc_ptr_base *v32; // eax
  rc_ptr_base *v33; // eax
  rc_ptr_base *v34; // eax
  rc_ptr_base *v35; // eax
  rc_ptr_base *v36; // eax
  rc_ptr_base *v37; // eax
  rc_ptr_base *v38; // eax
  rc_ptr_base *v39; // eax
  rc_ptr_base *v40; // eax
  rc_ptr_base *v41; // eax
  rc_ptr_base *v42; // eax
  rc_ptr_base *v43; // eax
  rc_ptr_base *v44; // eax
  rc_ptr_base *v45; // eax
  rc_ptr_base *v46; // eax
  rc_ptr_base *v47; // eax
  rc_ptr_base *v48; // eax
  rc_ptr_base *v49; // eax
  rc_ptr_base *v50; // eax
  rc_ptr_base *v51; // eax
  void *v52; // eax
  TechnoTypeClass *vfptr; // eax
  void *v54; // eax
  TechnoTypeClass *v55; // eax
  void *v56; // eax
  TechnoTypeClass *v57; // eax
  void *v58; // eax
  TechnoTypeClass *v59; // eax
  void *v60; // eax
  TechnoTypeClass *v61; // eax
  rc_ptr_base *v62; // eax
  void *v63; // eax
  TechnoTypeClass *v64; // eax
  rc_ptr_base *v65; // eax
  void *v66; // eax
  TechnoTypeClass *v67; // eax
  rc_ptr_base *v68; // eax
  void *v69; // eax
  TechnoTypeClass *v70; // eax
  void *v71; // eax
  TechnoTypeClass *v72; // eax
  rc_ptr_base *v73; // eax
  void *v74; // eax
  TechnoTypeClass *v75; // eax
  void *v76; // eax
  TechnoTypeClass *v77; // eax
  void *v78; // eax
  TechnoTypeClass *v79; // eax
  void *v80; // eax
  TechnoTypeClass *v81; // eax
  void *v82; // eax
  TechnoTypeClass *v83; // eax
  void *v84; // eax
  TechnoTypeClass *v85; // eax
  void *v86; // eax
  TechnoTypeClass *v87; // eax
  void *v88; // eax
  TechnoTypeClass *v89; // eax
  void *v90; // eax
  rc_ptr_base *v91; // eax
  void *v92; // eax
  rc_ptr_base *v93; // eax
  void *v94; // eax
  rc_ptr_base *v95; // eax
  void *v96; // eax
  rc_ptr_base *v97; // eax
  void *v98; // eax
  rc_ptr_base *v99; // eax
  void *v100; // eax
  rc_ptr_base *v101; // eax
  void *v102; // eax
  TechnoTypeClass *v103; // eax
  void *v104; // eax
  TechnoTypeClass *v105; // eax
  void *v106; // eax
  TechnoTypeClass *v107; // eax
  void *v108; // eax
  TechnoTypeClass *v109; // eax
  void *v110; // eax
  TechnoTypeClass *v111; // eax
  void *v112; // eax
  rc_ptr_base *v113; // eax
  rc_ptr_base *v114; // eax
  rc_ptr_base *v115; // ecx
  rc_ptr_base *v116; // edx
  rc_ptr_base *v118; // [esp+14h] [ebp-20h] BYREF
  int v119; // [esp+18h] [ebp-1Ch]
  rc_ptr_base *v120; // [esp+1Ch] [ebp-18h] BYREF
  int v121; // [esp+20h] [ebp-14h]
  rc_ptr_base aP2; // [esp+24h] [ebp-10h] BYREF
  int v123; // [esp+28h] [ebp-Ch]
  rc_ptr_base aP1; // [esp+2Ch] [ebp-8h] BYREF
  int v125; // [esp+30h] [ebp-4h]
  v118 = (rc_ptr_base *)2;
  dword_ABE378 = 0;
  dword_ABE370[0] = 2;
  int v0 = __2_YAPAXI_Z(0x10u);
  int v1 = v0;
  if ( v0 )
  {
    Array::ForEach(v0, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v2 = v1;
  }
  else
  {
    v2 = 0;
  }
  dword_ABE374 = (TechnoTypeClass *)v2;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)&dword_ABE374->vtable0[8] = v118;
  *(_DWORD *)&dword_ABE374->vtable0[12] = 1;
  v118 = 0;
  dword_ABE384 = 0;
  dword_ABE37C = 2;
  v3 = __2_YAPAXI_Z(0x10u);
  v4 = v3;
  if ( v3 )
  {
    Array::ForEach(v3, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  dword_ABE380 = (TechnoTypeClass *)v5;
  *(_DWORD *)v5 = v118;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)&dword_ABE380->vtable0[8] = 1;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE380->vtable0[12] = 2;
  HIWORD(v120) = 1;
  dword_ABE390 = 0;
  dword_ABE388 = 2;
  v6 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v118 = v6;
  if ( v6 )
  {
    Array::ForEach((int)v6, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v7 = v118;
  }
  else
  {
    v7 = 0;
  }
  dword_ABE38C = (TechnoTypeClass *)v7;
  v7->vfptr = 0;
  v7[1].vfptr = 0;
  *(_DWORD *)&dword_ABE38C->vtable0[8] = v120;
  *(_DWORD *)&dword_ABE38C->vtable0[12] = 3;
  v118 = 0;
  dword_ABE39C = 0;
  dword_ABE394 = 2;
  v8 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v8;
  if ( v8 )
  {
    Array::ForEach((int)v8, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v9 = v120;
  }
  else
  {
    v9 = 0;
  }
  dword_ABE398 = (TechnoTypeClass *)v9;
  v9->vfptr = v118;
  v9[1].vfptr = 0;
  *(_DWORD *)&dword_ABE398->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE398->vtable0[12] = 5;
  v118 = 0;
  dword_ABE3A8 = 0;
  dword_ABE3A0 = 2;
  v10 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v10;
  if ( v10 )
  {
    Array::ForEach((int)v10, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v11 = v120;
  }
  else
  {
    v11 = 0;
  }
  dword_ABE3A4 = (TechnoTypeClass *)v11;
  v11->vfptr = v118;
  v11[1].vfptr = 0;
  *(_DWORD *)&dword_ABE3A4->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE3A4->vtable0[12] = 6;
  v118 = (rc_ptr_base *)1;
  dword_ABE3B4 = 0;
  dword_ABE3AC = 2;
  v12 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v12;
  if ( v12 )
  {
    Array::ForEach((int)v12, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v13 = v120;
  }
  else
  {
    v13 = 0;
  }
  dword_ABE3B0 = (TechnoTypeClass *)v13;
  v13->vfptr = v118;
  v13[1].vfptr = 0;
  *(_DWORD *)&dword_ABE3B0->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3B0->vtable0[12] = 7;
  v118 = (rc_ptr_base *)1;
  dword_ABE3C0 = 0;
  dword_ABE3B8 = 2;
  v14 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v14;
  if ( v14 )
  {
    Array::ForEach((int)v14, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v15 = v120;
  }
  else
  {
    v15 = 0;
  }
  dword_ABE3BC = (TechnoTypeClass *)v15;
  v15->vfptr = v118;
  v15[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3BC->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3BC->vtable0[12] = 2;
  v118 = (rc_ptr_base *)1;
  dword_ABE3CC = 0;
  dword_ABE3C4 = 2;
  v16 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v16;
  if ( v16 )
  {
    Array::ForEach((int)v16, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v17 = v120;
  }
  else
  {
    v17 = 0;
  }
  dword_ABE3C8 = (TechnoTypeClass *)v17;
  v17->vfptr = v118;
  v17[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3C8->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3C8->vtable0[12] = 3;
  v118 = (rc_ptr_base *)1;
  dword_ABE3D8 = 0;
  dword_ABE3D0 = 2;
  v18 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v18;
  if ( v18 )
  {
    Array::ForEach((int)v18, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v19 = v120;
  }
  else
  {
    v19 = 0;
  }
  dword_ABE3D4 = (TechnoTypeClass *)v19;
  v19->vfptr = v118;
  v19[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3D4->vtable0[8] = 0x10000;
  *(_DWORD *)&dword_ABE3D4->vtable0[12] = 4;
  v118 = (rc_ptr_base *)1;
  dword_ABE3E4 = 0;
  dword_ABE3DC = 2;
  v20 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v20;
  if ( v20 )
  {
    Array::ForEach((int)v20, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v21 = v120;
  }
  else
  {
    v21 = 0;
  }
  dword_ABE3E0 = (TechnoTypeClass *)v21;
  v21->vfptr = v118;
  v21[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3E0->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE3E0->vtable0[12] = 6;
  v118 = (rc_ptr_base *)2;
  dword_ABE3F0 = 0;
  dword_ABE3E8 = 2;
  v22 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v22;
  if ( v22 )
  {
    Array::ForEach((int)v22, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v23 = v120;
  }
  else
  {
    v23 = 0;
  }
  dword_ABE3EC = (TechnoTypeClass *)v23;
  v23->vfptr = v118;
  v23[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3EC->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE3EC->vtable0[12] = 7;
  v118 = (rc_ptr_base *)2;
  dword_ABE3FC = 0;
  dword_ABE3F4 = 2;
  v24 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v24;
  if ( v24 )
  {
    Array::ForEach((int)v24, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v25 = v120;
  }
  else
  {
    v25 = 0;
  }
  dword_ABE3F8 = (TechnoTypeClass *)v25;
  v25->vfptr = v118;
  v25[1].vfptr = (void *)1;
  *(_DWORD *)&dword_ABE3F8->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE3F8->vtable0[12] = 0;
  v118 = (rc_ptr_base *)1;
  dword_ABE408 = 0;
  dword_ABE400 = 2;
  v26 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v26;
  if ( v26 )
  {
    Array::ForEach((int)v26, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v27 = v120;
  }
  else
  {
    v27 = 0;
  }
  dword_ABE404 = (TechnoTypeClass *)v27;
  v27->vfptr = v118;
  v27[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE404->vtable0[8] = 131073;
  *(_DWORD *)&dword_ABE404->vtable0[12] = 3;
  v118 = (rc_ptr_base *)1;
  dword_ABE414 = 0;
  dword_ABE40C = 2;
  v28 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v28;
  if ( v28 )
  {
    Array::ForEach((int)v28, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v29 = v120;
  }
  else
  {
    v29 = 0;
  }
  dword_ABE410 = (TechnoTypeClass *)v29;
  v29->vfptr = v118;
  v29[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE410->vtable0[8] = 0x10000;
  *(_DWORD *)&dword_ABE410->vtable0[12] = 4;
  v118 = (rc_ptr_base *)1;
  dword_ABE420 = 0;
  dword_ABE418 = 2;
  v30 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v30;
  if ( v30 )
  {
    Array::ForEach((int)v30, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v31 = v120;
  }
  else
  {
    v31 = 0;
  }
  dword_ABE41C = (TechnoTypeClass *)v31;
  v31->vfptr = v118;
  v31[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE41C->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE41C->vtable0[12] = 5;
  v118 = (rc_ptr_base *)1;
  dword_ABE42C = 0;
  dword_ABE424 = 2;
  v32 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v32;
  if ( v32 )
  {
    Array::ForEach((int)v32, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v33 = v120;
  }
  else
  {
    v33 = 0;
  }
  dword_ABE428 = (TechnoTypeClass *)v33;
  v33->vfptr = v118;
  v33[1].vfptr = (void *)2;
  *(_DWORD *)&dword_ABE428->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE428->vtable0[12] = 7;
  v118 = (rc_ptr_base *)65538;
  dword_ABE438 = 0;
  dword_ABE430 = 2;
  v34 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v34;
  if ( v34 )
  {
    Array::ForEach((int)v34, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v35 = v120;
  }
  else
  {
    v35 = 0;
  }
  dword_ABE434 = (TechnoTypeClass *)v35;
  v35->vfptr = v118;
  v35[1].vfptr = (void *)3;
  *(_DWORD *)&dword_ABE434->vtable0[8] = 0x10000;
  *(_DWORD *)&dword_ABE434->vtable0[12] = 4;
  v118 = (rc_ptr_base *)65537;
  dword_ABE444 = 0;
  dword_ABE43C = 2;
  v36 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v36;
  if ( v36 )
  {
    Array::ForEach((int)v36, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v37 = v120;
  }
  else
  {
    v37 = 0;
  }
  dword_ABE440 = (TechnoTypeClass *)v37;
  v37->vfptr = v118;
  v37[1].vfptr = (void *)3;
  *(_DWORD *)&dword_ABE440->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE440->vtable0[12] = 5;
  v118 = (rc_ptr_base *)65537;
  dword_ABE450 = 0;
  dword_ABE448 = 2;
  v38 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v38;
  if ( v38 )
  {
    Array::ForEach((int)v38, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v39 = v120;
  }
  else
  {
    v39 = 0;
  }
  dword_ABE44C = (TechnoTypeClass *)v39;
  v39->vfptr = v118;
  v39[1].vfptr = (void *)3;
  *(_DWORD *)&dword_ABE44C->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE44C->vtable0[12] = 6;
  v118 = (rc_ptr_base *)65537;
  dword_ABE45C = 0;
  dword_ABE454 = 2;
  v40 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v40;
  if ( v40 )
  {
    Array::ForEach((int)v40, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v41 = v120;
  }
  else
  {
    v41 = 0;
  }
  dword_ABE458 = (TechnoTypeClass *)v41;
  v41->vfptr = v118;
  v41[1].vfptr = (void *)4;
  *(_DWORD *)&dword_ABE458->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE458->vtable0[12] = 5;
  v118 = (rc_ptr_base *)0x10000;
  dword_ABE468 = 0;
  dword_ABE460 = 2;
  v42 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v42;
  if ( v42 )
  {
    Array::ForEach((int)v42, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v43 = v120;
  }
  else
  {
    v43 = 0;
  }
  dword_ABE464 = (TechnoTypeClass *)v43;
  v43->vfptr = v118;
  v43[1].vfptr = (void *)4;
  *(_DWORD *)&dword_ABE464->vtable0[8] = 0;
  *(_DWORD *)&dword_ABE464->vtable0[12] = 6;
  v118 = (rc_ptr_base *)0x10000;
  dword_ABE474 = 0;
  dword_ABE46C = 2;
  v44 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v44;
  if ( v44 )
  {
    Array::ForEach((int)v44, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v45 = v120;
  }
  else
  {
    v45 = 0;
  }
  dword_ABE470 = (TechnoTypeClass *)v45;
  v45->vfptr = v118;
  v45[1].vfptr = (void *)4;
  *(_DWORD *)&dword_ABE470->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE470->vtable0[12] = 7;
  v118 = (rc_ptr_base *)65537;
  dword_ABE480 = 0;
  dword_ABE478 = 2;
  v46 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v46;
  if ( v46 )
  {
    Array::ForEach((int)v46, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v47 = v120;
  }
  else
  {
    v47 = 0;
  }
  dword_ABE47C = (TechnoTypeClass *)v47;
  v47->vfptr = v118;
  v47[1].vfptr = (void *)5;
  *(_DWORD *)&dword_ABE47C->vtable0[8] = 65537;
  *(_DWORD *)&dword_ABE47C->vtable0[12] = 7;
  v118 = (rc_ptr_base *)0x10000;
  dword_ABE48C = 0;
  dword_ABE484 = 2;
  v48 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
  v120 = v48;
  if ( v48 )
  {
    Array::ForEach((int)v48, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v49 = v120;
  }
  else
  {
    v49 = 0;
  }
  dword_ABE488 = (TechnoTypeClass *)v49;
  v49->vfptr = v118;
  v49[1].vfptr = (void *)6;
  *(_DWORD *)&dword_ABE488->vtable0[8] = 65537;
  LOWORD(aP2.vfptr) = 0;
  *(_DWORD *)&dword_ABE488->vtable0[12] = 7;
  HIWORD(aP2.vfptr) = 1;
  v118 = 0;
  dword_ABE498 = 0;
  dword_ABE490 = 3;
  v50 = (rc_ptr_base *)__2_YAPAXI_Z(0x18u);
  v120 = v50;
  if ( v50 )
  {
    Array::ForEach((int)v50, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v51 = v120;
  }
  else
  {
    v51 = 0;
  }
  dword_ABE494 = (TechnoTypeClass *)v51;
  v51->vfptr = v118;
  v51[1].vfptr = 0;
  *(_DWORD *)&dword_ABE494->vtable0[8] = 1;
  *(_DWORD *)&dword_ABE494->vtable0[12] = 2;
  dword_ABE494->uniqueId = (int)aP2.vfptr;
  LOWORD(v118) = 0;
  dword_ABE494->abstractFlags = 4;
  HIWORD(v118) = 1;
  v120 = (rc_ptr_base *)1;
  dword_ABE4A4 = 0;
  dword_ABE49C = 3;
  v52 = (void *)__2_YAPAXI_Z(0x18u);
  aP2.vfptr = v52;
  if ( v52 )
  {
    Array::ForEach((int)v52, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    vfptr = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    vfptr = 0;
  }
  dword_ABE4A0 = vfptr;
  *(_DWORD *)vfptr->vtable0 = v120;
  *(_DWORD *)&vfptr->vtable0[4] = 2;
  *(_DWORD *)&dword_ABE4A0->vtable0[8] = v118;
  LOWORD(v118) = 0;
  *(_DWORD *)&dword_ABE4A0->vtable0[12] = 4;
  dword_ABE4A0->uniqueId = 0;
  dword_ABE4A0->abstractFlags = 6;
  HIWORD(v118) = 1;
  v120 = 0;
  dword_ABE4B0 = 0;
  dword_ABE4A8 = 3;
  v54 = (void *)__2_YAPAXI_Z(0x18u);
  aP2.vfptr = v54;
  if ( v54 )
  {
    Array::ForEach((int)v54, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v55 = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    v55 = 0;
  }
  dword_ABE4AC = v55;
  *(_DWORD *)v55->vtable0 = v120;
  *(_DWORD *)&v55->vtable0[4] = 0;
  *(_DWORD *)&dword_ABE4AC->vtable0[8] = v118;
  LOWORD(v118) = 1;
  *(_DWORD *)&dword_ABE4AC->vtable0[12] = 4;
  dword_ABE4AC->uniqueId = 0;
  dword_ABE4AC->abstractFlags = 6;
  HIWORD(v118) = 0;
  v120 = 0;
  dword_ABE4BC = 0;
  dword_ABE4B4 = 3;
  v56 = (void *)__2_YAPAXI_Z(0x18u);
  aP2.vfptr = v56;
  if ( v56 )
  {
    Array::ForEach((int)v56, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v57 = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    v57 = 0;
  }
  dword_ABE4B8 = v57;
  *(_DWORD *)v57->vtable0 = v120;
  *(_DWORD *)&v57->vtable0[4] = 0;
  *(_DWORD *)&dword_ABE4B8->vtable0[8] = v118;
  LOWORD(aP1.vfptr) = 0;
  *(_DWORD *)&dword_ABE4B8->vtable0[12] = 2;
  HIWORD(aP1.vfptr) = 0;
  dword_ABE4B8->uniqueId = 0;
  dword_ABE4B8->abstractFlags = 6;
  v118 = (rc_ptr_base *)1;
  v120 = 0;
  dword_ABE4C8 = 0;
  dword_ABE4C0 = 4;
  v58 = (void *)__2_YAPAXI_Z(0x20u);
  aP2.vfptr = v58;
  if ( v58 )
  {
    Array::ForEach((int)v58, 8, 4, (int (__thiscall *)(int))Cell::Clear);
    v59 = (TechnoTypeClass *)aP2.vfptr;
  }
  else
  {
    v59 = 0;
  }
  dword_ABE4C4 = v59;
  *(_DWORD *)v59->vtable0 = v120;
  *(_DWORD *)&v59->vtable0[4] = 0;
  *(_DWORD *)&dword_ABE4C4->vtable0[8] = v118;
  LOWORD(v118) = 1;
  *(_DWORD *)&dword_ABE4C4->vtable0[12] = 2;
  HIWORD(v118) = 1;
  dword_ABE4C4->uniqueId = 0x10000;
  LOWORD(v120) = 2;
  dword_ABE4C4->abstractFlags = 4;
  HIWORD(v120) = 2;
  dword_ABE4C4->nextArrayIndex = (int)aP1.vfptr;
  LOWORD(aP2.vfptr) = 2;
  dword_ABE4C4->referenceCount = 6;
  HIWORD(aP2.vfptr) = 0;
  dword_ABE4D4 = 0;
  dword_ABE4CC = 3;
  v60 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v60;
  if ( v60 )
  {
    Array::ForEach((int)v60, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v61 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v61 = 0;
  }
  dword_ABE4D0 = v61;
  *(rc_ptr_base *)v61->vtable0 = aP2;
  *(_DWORD *)&v61->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE4D0->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE4D0->vtable0[12] = 3;
  v62 = v118;
  LOWORD(v118) = 2;
  dword_ABE4D0->uniqueId = (int)v62;
  HIWORD(v118) = 2;
  dword_ABE4D0->abstractFlags = 5;
  HIWORD(v120) = 1;
  aP2.vfptr = (void *)65537;
  dword_ABE4E0 = 0;
  dword_ABE4D8 = 3;
  v63 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v63;
  if ( v63 )
  {
    Array::ForEach((int)v63, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v64 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v64 = 0;
  }
  dword_ABE4DC = v64;
  *(rc_ptr_base *)v64->vtable0 = aP2;
  *(_DWORD *)&v64->vtable0[4] = 7;
  *(_DWORD *)&dword_ABE4DC->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE4DC->vtable0[12] = 5;
  v65 = v118;
  LOWORD(v118) = 1;
  dword_ABE4DC->uniqueId = (int)v65;
  HIWORD(v118) = 1;
  dword_ABE4DC->abstractFlags = 3;
  HIWORD(v120) = 1;
  aP2.vfptr = (void *)2;
  dword_ABE4EC = 0;
  dword_ABE4E4 = 3;
  v66 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v66;
  if ( v66 )
  {
    Array::ForEach((int)v66, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v67 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v67 = 0;
  }
  dword_ABE4E8 = v67;
  *(rc_ptr_base *)v67->vtable0 = aP2;
  *(_DWORD *)&v67->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE4E8->vtable0[8] = v120;
  LOWORD(v120) = 2;
  *(_DWORD *)&dword_ABE4E8->vtable0[12] = 7;
  v68 = v118;
  LOWORD(v118) = 2;
  dword_ABE4E8->uniqueId = (int)v68;
  HIWORD(v118) = 2;
  dword_ABE4E8->abstractFlags = 5;
  HIWORD(v120) = 0;
  aP2.vfptr = (void *)65537;
  dword_ABE4F8 = 0;
  dword_ABE4F0 = 3;
  v69 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v69;
  if ( v69 )
  {
    Array::ForEach((int)v69, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v70 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v70 = 0;
  }
  dword_ABE4F4 = v70;
  *(rc_ptr_base *)v70->vtable0 = aP2;
  *(_DWORD *)&v70->vtable0[4] = 7;
  *(_DWORD *)&dword_ABE4F4->vtable0[8] = v120;
  *(_DWORD *)&dword_ABE4F4->vtable0[12] = 1;
  dword_ABE4F4->uniqueId = (int)v118;
  LOWORD(v118) = 2;
  dword_ABE4F4->abstractFlags = 3;
  HIWORD(v118) = 0;
  v120 = (rc_ptr_base *)65537;
  aP2.vfptr = (void *)65537;
  dword_ABE504 = 0;
  dword_ABE4FC = 4;
  v71 = (void *)__2_YAPAXI_Z(0x20u);
  aP1.vfptr = v71;
  if ( v71 )
  {
    Array::ForEach((int)v71, 8, 4, (int (__thiscall *)(int))Cell::Clear);
    v72 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v72 = 0;
  }
  dword_ABE500 = v72;
  *(rc_ptr_base *)v72->vtable0 = aP2;
  *(_DWORD *)&v72->vtable0[4] = 7;
  *(_DWORD *)&dword_ABE500->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE500->vtable0[12] = 5;
  v73 = v118;
  LOWORD(v118) = 0;
  dword_ABE500->uniqueId = (int)v73;
  HIWORD(v118) = 2;
  dword_ABE500->abstractFlags = 1;
  HIWORD(v120) = 2;
  dword_ABE500->nextArrayIndex = 131074;
  LOWORD(aP2.vfptr) = 3;
  dword_ABE500->referenceCount = 3;
  HIWORD(aP2.vfptr) = 0;
  dword_ABE510 = 0;
  dword_ABE508 = 3;
  v74 = (void *)__2_YAPAXI_Z(0x18u);
  aP1.vfptr = v74;
  if ( v74 )
  {
    Array::ForEach((int)v74, 8, 3, (int (__thiscall *)(int))Cell::Clear);
    v75 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v75 = 0;
  }
  dword_ABE50C = v75;
  *(rc_ptr_base *)v75->vtable0 = aP2;
  *(_DWORD *)&v75->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE50C->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE50C->vtable0[12] = 2;
  HIWORD(v120) = 2;
  dword_ABE50C->uniqueId = (int)v118;
  LOWORD(aP2.vfptr) = 3;
  dword_ABE50C->abstractFlags = 6;
  HIWORD(aP2.vfptr) = 0;
  dword_ABE51C = 0;
  dword_ABE514 = 2;
  v76 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v76;
  if ( v76 )
  {
    Array::ForEach((int)v76, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v77 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v77 = 0;
  }
  dword_ABE518 = v77;
  *(rc_ptr_base *)v77->vtable0 = aP2;
  *(_DWORD *)&v77->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE518->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE518->vtable0[12] = 5;
  HIWORD(v120) = 2;
  aP2.vfptr = (void *)3;
  dword_ABE528 = 0;
  dword_ABE520 = 2;
  v78 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v78;
  if ( v78 )
  {
    Array::ForEach((int)v78, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v79 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v79 = 0;
  }
  dword_ABE524 = v79;
  *(rc_ptr_base *)v79->vtable0 = aP2;
  *(_DWORD *)&v79->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE524->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE524->vtable0[12] = 5;
  HIWORD(v120) = 2;
  aP2.vfptr = (void *)3;
  dword_ABE534 = 0;
  dword_ABE52C = 2;
  v80 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v80;
  if ( v80 )
  {
    Array::ForEach((int)v80, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v81 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v81 = 0;
  }
  dword_ABE530 = v81;
  *(rc_ptr_base *)v81->vtable0 = aP2;
  *(_DWORD *)&v81->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE530->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE530->vtable0[12] = 5;
  HIWORD(v120) = 2;
  aP2.vfptr = (void *)3;
  dword_ABE540 = 0;
  dword_ABE538 = 2;
  v82 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v82;
  if ( v82 )
  {
    Array::ForEach((int)v82, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v83 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v83 = 0;
  }
  dword_ABE53C = v83;
  *(rc_ptr_base *)v83->vtable0 = aP2;
  *(_DWORD *)&v83->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE53C->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE53C->vtable0[12] = 5;
  HIWORD(v120) = 1;
  aP2.vfptr = (void *)2;
  dword_ABE54C = 0;
  dword_ABE544 = 2;
  v84 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v84;
  if ( v84 )
  {
    Array::ForEach((int)v84, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v85 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v85 = 0;
  }
  dword_ABE548 = v85;
  *(rc_ptr_base *)v85->vtable0 = aP2;
  *(_DWORD *)&v85->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE548->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE548->vtable0[12] = 5;
  HIWORD(v120) = 0;
  aP2.vfptr = (void *)1;
  dword_ABE558 = 0;
  dword_ABE550 = 2;
  v86 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v86;
  if ( v86 )
  {
    Array::ForEach((int)v86, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v87 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v87 = 0;
  }
  dword_ABE554 = v87;
  *(rc_ptr_base *)v87->vtable0 = aP2;
  *(_DWORD *)&v87->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE554->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE554->vtable0[12] = 5;
  HIWORD(v120) = 0;
  aP2.vfptr = (void *)1;
  dword_ABE564 = 0;
  dword_ABE55C = 2;
  v88 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v88;
  if ( v88 )
  {
    Array::ForEach((int)v88, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v89 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v89 = 0;
  }
  dword_ABE560 = v89;
  *(rc_ptr_base *)v89->vtable0 = aP2;
  *(_DWORD *)&v89->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE560->vtable0[8] = v120;
  LOWORD(aP2.vfptr) = 1;
  *(_DWORD *)&dword_ABE560->vtable0[12] = 5;
  HIWORD(aP2.vfptr) = 2;
  dword_ABE570 = 0;
  dword_ABE568 = (IUnknown *)1;
  v90 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v90;
  if ( v90 )
  {
    Array::ForEach((int)v90, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v91 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v91 = 0;
  }
  dword_ABE56C = (int)v91;
  v91->vfptr = aP2.vfptr;
  v91[1].vfptr = (void *)5;
  aP2.vfptr = (void *)65537;
  dword_ABE57C = 0;
  dword_ABE574 = (IUnknown *)1;
  v92 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v92;
  if ( v92 )
  {
    Array::ForEach((int)v92, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v93 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v93 = 0;
  }
  dword_ABE578 = (int)v93;
  v93->vfptr = aP2.vfptr;
  v93[1].vfptr = (void *)5;
  aP2.vfptr = (void *)65537;
  dword_ABE588 = 0;
  dword_ABE580 = (IUnknown *)1;
  v94 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v94;
  if ( v94 )
  {
    Array::ForEach((int)v94, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v95 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v95 = 0;
  }
  dword_ABE584 = (int)v95;
  v95->vfptr = aP2.vfptr;
  v95[1].vfptr = (void *)5;
  aP2.vfptr = (void *)3;
  dword_ABE594 = 0;
  dword_ABE58C = (IUnknown *)1;
  v96 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v96;
  if ( v96 )
  {
    Array::ForEach((int)v96, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v97 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v97 = 0;
  }
  dword_ABE590 = (int)v97;
  v97->vfptr = aP2.vfptr;
  v97[1].vfptr = (void *)1;
  aP2.vfptr = (void *)2;
  dword_ABE5A0 = 0;
  dword_ABE598 = (IUnknown *)1;
  v98 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v98;
  if ( v98 )
  {
    Array::ForEach((int)v98, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v99 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v99 = 0;
  }
  dword_ABE59C = (int)v99;
  v99->vfptr = aP2.vfptr;
  v99[1].vfptr = (void *)1;
  aP2.vfptr = (void *)2;
  dword_ABE5AC = 0;
  dword_ABE5A4 = (IUnknown *)1;
  v100 = (void *)__2_YAPAXI_Z(8u);
  aP1.vfptr = v100;
  if ( v100 )
  {
    Array::ForEach((int)v100, 8, 1, (int (__thiscall *)(int))Cell::Clear);
    v101 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v101 = 0;
  }
  dword_ABE5A8 = (int)v101;
  v101->vfptr = aP2.vfptr;
  v101[1].vfptr = (void *)1;
  v120 = (rc_ptr_base *)65537;
  aP2.vfptr = (void *)4;
  dword_ABE5B8 = 0;
  dword_ABE5B0 = 2;
  v102 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v102;
  if ( v102 )
  {
    Array::ForEach((int)v102, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v103 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v103 = 0;
  }
  dword_ABE5B4 = v103;
  *(rc_ptr_base *)v103->vtable0 = aP2;
  *(_DWORD *)&v103->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE5B4->vtable0[8] = v120;
  LOWORD(v120) = 1;
  *(_DWORD *)&dword_ABE5B4->vtable0[12] = 5;
  HIWORD(v120) = 3;
  v119 = 5;
  aP2.vfptr = (void *)2;
  dword_ABE5C4 = 0;
  dword_ABE5BC = 2;
  v104 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v104;
  if ( v104 )
  {
    Array::ForEach((int)v104, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v105 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v105 = 0;
  }
  dword_ABE5C0 = v105;
  *(rc_ptr_base *)v105->vtable0 = aP2;
  *(_DWORD *)&v105->vtable0[4] = 1;
  *(_DWORD *)&dword_ABE5C0->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5C0->vtable0[12] = v119;
  dword_ABE5C8 = 0;
  dword_ABE5CC = 0;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE5DC = 0;
  dword_ABE5D4 = 2;
  v106 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v106;
  if ( v106 )
  {
    Array::ForEach((int)v106, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v107 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v107 = 0;
  }
  dword_ABE5D8 = v107;
  *(rc_ptr_base *)v107->vtable0 = aP2;
  *(_DWORD *)&v107->vtable0[4] = 6;
  *(_DWORD *)&dword_ABE5D8->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5D8->vtable0[12] = 2;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE5E8 = 0;
  dword_ABE5E0 = 2;
  v108 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v108;
  if ( v108 )
  {
    Array::ForEach((int)v108, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v109 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v109 = 0;
  }
  dword_ABE5E4 = v109;
  *(rc_ptr_base *)v109->vtable0 = aP2;
  *(_DWORD *)&v109->vtable0[4] = 6;
  *(_DWORD *)&dword_ABE5E4->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5E4->vtable0[12] = 2;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE5F4 = 0;
  dword_ABE5EC = 2;
  v110 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v110;
  if ( v110 )
  {
    Array::ForEach((int)v110, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v111 = (TechnoTypeClass *)aP1.vfptr;
  }
  else
  {
    v111 = 0;
  }
  dword_ABE5F0 = v111;
  *(rc_ptr_base *)v111->vtable0 = aP2;
  *(_DWORD *)&v111->vtable0[4] = 6;
  *(_DWORD *)&dword_ABE5F0->vtable0[8] = v120;
  LOWORD(v120) = 3;
  *(_DWORD *)&dword_ABE5F0->vtable0[12] = 2;
  HIWORD(v120) = 0;
  aP2.vfptr = 0;
  dword_ABE600 = 0;
  dword_ABE5F8 = 2;
  v112 = (void *)__2_YAPAXI_Z(0x10u);
  aP1.vfptr = v112;
  if ( v112 )
  {
    Array::ForEach((int)v112, 8, 2, (int (__thiscall *)(int))Cell::Clear);
    v113 = (rc_ptr_base *)aP1.vfptr;
  }
  else
  {
    v113 = 0;
  }
  dword_ABE5FC = (int)v113;
  v113->vfptr = aP2.vfptr;
  v113[1].vfptr = (void *)6;
  LOWORD(aP1.vfptr) = 2;
  *(_DWORD *)(dword_ABE5FC + 8) = v120;
  HIWORD(aP1.vfptr) = 0;
  *(_DWORD *)(dword_ABE5FC + 12) = 2;
  v114 = (rc_ptr_base *)aP1.vfptr;
  aP1.vfptr = 0;
  aP2.vfptr = v114;
  v123 = 2;
  v125 = 6;
  WaypointPath::Constructor(dword_ABE604, &aP1, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE610, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE61C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v115 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  v118 = v115;
  WaypointPath::Constructor(dword_ABE628, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 6;
  ListNode::Alloc(dword_ABE634, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 6;
  ListNode::Alloc(dword_ABE640, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 1);
  v123 = 6;
  ListNode::Alloc(dword_ABE64C, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 2, 0);
  v123 = 2;
  ListNode::Alloc(dword_ABE658, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 0);
  v123 = 2;
  ListNode::Alloc(dword_ABE664, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 0);
  v123 = 2;
  ListNode::Alloc(dword_ABE670, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 1);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE67C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 1);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE688, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  dword_ABE694 = 0;
  dword_ABE698 = 0;
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6A0, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6AC, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v116 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v120 = v116;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6B8, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 3, 3);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6C4, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 2, 2);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6D0, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 1);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6DC, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 1);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE6E8, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 1);
  v123 = 7;
  ListNode::Alloc(dword_ABE6F4, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 1);
  v123 = 7;
  ListNode::Alloc(dword_ABE700, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 1);
  v123 = 7;
  ListNode::Alloc(dword_ABE70C, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 3, 3);
  v123 = 3;
  ListNode::Alloc(dword_ABE718, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 1, 2);
  v123 = 3;
  ListNode::Alloc(dword_ABE724, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 2, 2);
  v123 = 3;
  ListNode::Alloc(dword_ABE730, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 4, 2);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE73C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 2, 4);
  v121 = 3;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 1);
  v119 = 7;
  WaypointPath::Constructor(dword_ABE748, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  dword_ABE754 = 0;
  dword_ABE758 = 0;
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE760, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE76C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE778, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE784, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 2);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE790, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 1);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE79C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE7A8, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE7B4, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 3);
  v123 = 4;
  ListNode::Alloc(dword_ABE7C0, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 2);
  v123 = 4;
  ListNode::Alloc(dword_ABE7CC, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 2);
  v123 = 4;
  ListNode::Alloc(dword_ABE7D8, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 0;
  ListNode::Alloc(dword_ABE7E4, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 0;
  ListNode::Alloc(dword_ABE7F0, &aP2);
  aP2.vfptr = *(void **)CellStruct::Set(&aP1, 0, 0);
  v123 = 0;
  ListNode::Alloc(dword_ABE7FC, &aP2);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 1, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE808, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 1, 3);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE814, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  dword_ABE820 = 0;
  dword_ABE824 = 0;
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE82C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE838, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE844, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE850, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE85C, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 2;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 6;
  WaypointPath::Constructor(dword_ABE868, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  WaypointPath::Constructor(dword_ABE874, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
  v120 = *(rc_ptr_base **)CellStruct::Set(&aP1, 0, 0);
  v121 = 4;
  v118 = *(rc_ptr_base **)CellStruct::Set(&aP2, 0, 0);
  v119 = 0;
  return WaypointPath::Constructor(dword_ABE880, (rc_ptr_base *)&v118, (rc_ptr_base *)&v120);
}

}
} // namespace gamemd

// 0x5AD9C0
namespace gamemd {
int sub_5AD9C0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( *a1 == *a2 )
    return 0; /*0x5ad9d0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x5AF550
namespace gamemd {
void E4Recv_5AF550::sub_5AF550(float * a2, float * a3, AbstractClass * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  float aP2a; // [esp+18h] [ebp-10h]
  float aP2; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+1Ch] [ebp-Ch]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+2Ch] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+4h]
  int v25; // [esp+30h] [ebp+8h]
  float v12 = *a3 - *a2; /*0x5af566*/
  *(float *)&v25 = a3[1] - a2[1]; /*0x5af570*/
  double v7 = a3[2] - a2[2]; /*0x5af577*/
  float v14 = v7; /*0x5af57a*/
  v19 = v7 * v14; /*0x5af582*/
  aP2a = v12 * v12; /*0x5af58e*/
  v23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(*(float *)&v25 * *(float *)&v25 + aP2a + v19)); /*0x5af5aa*/
  double v8 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(aP2a + v19)); /*0x5af5b9*/
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
  double v9 = *a2; /*0x5af65b*/
  *(float *)(this + 12) = *a2; /*0x5af669*/
  *(float *)(this + 28) = 0.0; /*0x5af677*/
  *(float *)(this + 44) = 0.0; /*0x5af67a*/
  double v10 = v9 + 0.0; /*0x5af680*/
  float v15 = a2[1]; /*0x5af684*/
  *(float *)(this + 12) = v10; /*0x5af68d*/
  float v16 = v15 + *(float *)(this + 28); /*0x5af697*/
  *(float *)(this + 28) = v16; /*0x5af69b*/
  float v13 = (float)0.0 + 0.0; /*0x5af6ae*/
  *(float *)(this + 44) = v13; /*0x5af6b2*/
  v22 = a2[2]; /*0x5af6be*/
  *(float *)(this + 12) = v10 + 0.0; /*0x5af6c4*/
  *(float *)(this + 28) = v16 + 0.0; /*0x5af6d1*/
  *(float *)(this + 44) = v13 + v22; /*0x5af6dc*/
  sub_5AF120((float *)this, v20, v24); /*0x5af6df*/
  float aP1 = -v21; /*0x5af6f0*/
  sub_5AF000((float *)this, (ObjectClass *)LODWORD(aP1), (ObjectClass *)LODWORD(aP2)); /*0x5af6f5*/
  Matrix2D::Rotate((float *)this, a4); /*0x5af701*/
}
}
} // namespace gamemd

// 0x5AF980
namespace gamemd {
void * MultiplyMatrix3x4(ObjectClass * aP0, float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  float *result; // eax
  float a2a; // [esp+74h] [ebp+4h]

  result = (float *)aP0; /*0x5af983*/
  float v14 = a1[4]; /*0x5af98a*/
  float v13 = a1[5]; /*0x5af991*/
  double v4 = *a1; /*0x5af998*/
  float v12 = a1[6]; /*0x5af99a*/
  double v5 = a1[1]; /*0x5af9a1*/
  double v6 = a1[2]; /*0x5af9a4*/
  float v17 = a1[8]; /*0x5af9a7*/
  float v16 = a1[9]; /*0x5af9ae*/
  float v15 = a1[10]; /*0x5af9b5*/
  double v8 = *a2; /*0x5af9bd*/
  double v9 = a2[4]; /*0x5af9bf*/
  double v10 = a2[8]; /*0x5af9c2*/
  float v19 = a2[1]; /*0x5af9d0*/
  float v22 = a2[2]; /*0x5af9dd*/
  float v24 = a2[3]; /*0x5af9e4*/
  float v18 = a2[5]; /*0x5af9ed*/
  float v21 = a2[6]; /*0x5af9f4*/
  float v11 = a2[7]; /*0x5af9f8*/
  float v25[12]; // [esp+40h] [ebp-30h] BYREF
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  a2a = a2[9]; /*0x5afa12*/
  float v20 = a2[10]; /*0x5afa1c*/
  float v23 = a2[11]; /*0x5afa28*/
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
int E4Recv_5AF470::sub_5AF470()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int128 aP0; // [esp+0h] [ebp-34h]

  _DWORD v4[3]; // [esp+1Ch] [ebp-18h] BYREF
  v4[0] = 1065353216; /*0x5af47e*/
  v4[1] = 0; /*0x5af486*/
  v4[2] = 0; /*0x5af48e*/
  float v5[3]; // [esp+28h] [ebp-Ch] BYREF
  float * v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4); /*0x5af496*/
  *((double *)&aP0 + 1) = *v1; /*0x5af4ae*/
  *(double *)&aP0 = v1[1]; /*0x5af4c1*/
  return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x5af4cc*/
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
