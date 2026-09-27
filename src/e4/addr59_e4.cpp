// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_592AF0_e4.hpp"
#include "e4/classes/E4Recv_593030_e4.hpp"
#include "e4/classes/E4Recv_593AF0_e4.hpp"
#include "e4/classes/E4Recv_5942F0_e4.hpp"
#include "e4/classes/E4Recv_594870_e4.hpp"
#include "e4/classes/E4Recv_595400_e4.hpp"
#include "e4/classes/E4Recv_5980A0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"

// 0x5904B0
namespace gamemd {
void PlaceCabhutMap(FootClass * aP0)
{
  int v2; // ebx
  int v3; // edi
  unsigned int *v4; // eax
  void *v7; // eax
  int Owner; // edi
  int IndexByName; // ebx
  void *v10; // eax
  int *v11; // eax
  int v12; // edx
  int v13; // edx
  unsigned int v14[3]; // [esp+10h] [ebp-Ch] BYREF

  aP0 = (gamemd::FootClass *)((int)(aP0));
  v2 = (int)(aP0[1]);
  if ( v2 >= aP0[3] + v2 + 1 ) /*0x5904c7*/
    return 0; /*0x59052b*/
  while ( 1 ) /*0x5904c9*/
  {
    v3 = (int)(*aP0);
    if ( *aP0 < aP0[2] + *aP0 + 1 ) /*0x5904d5*/
      break; /*0x5904d5*/
  LABEL_7:
    if ( ++v2 >= aP0[3] + aP0[1] + 1 ) /*0x590529*/
      return 0; /*0x590529*/
  }
  while ( 1 ) /*0x5904db*/
  {
    IDA_LOWORD(aP0) = v3; /*0x5904db*/
    IDA_HIWORD(aP0) = v2; /*0x5904e6*/
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP0); /*0x5904eb*/
    v4 = v4; /*0x5904f0*/
    if ( v4[17] == -1 && Cell::IsEmpty(v4) && !v4[57] ) /*0x590503*/
      break; /*0x590503*/
    if ( ++v3 >= aP0[2] + *aP0 + 1 ) /*0x59051a*/
      goto LABEL_7; /*0x59051a*/
  }
  v7 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x59053c*/
  Owner = HouseClass::FindOwner(v7); /*0x59054d*/
  IndexByName = BuildingTypeClass::FindIndexByName(aCabhut); /*0x590559*/
  v10 = operator new(0x720u); /*0x59055b*/
  if ( v10 ) /*0x590565*/
    v11 = (int *)BuildingClass::Construct((int)v10, *((unsigned int *)g_TriggerTypeCount + IndexByName), Owner); /*0x590574*/
  else
    v11 = 0; /*0x59057b*/
  v12 = *((int16_t *)v4 + 18) << 8; /*0x590588*/
  v14[1] = (*((int16_t *)v4 + 19) << 8) + 128; /*0x590597*/
  v14[0] = v12 + 128; /*0x59059f*/
  v13 = *v11; /*0x5905a3*/
  v14[2] = 0; /*0x5905aa*/
  v11->COMStub_54(v14, 0); /*0x5905b2*/
  return 1; /*0x59052b*/
}
}
// 0x594190
namespace gamemd {
void sub_594190(int * a1, int a2)
{
  int *v2; // ebp
  int v3; // esi
  int result; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // ebp
  unsigned char *v10; // eax
  int v11; // ecx
  char *v12; // esi
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]
  int16_t v15[2]; // [esp+10h] [ebp-4h] BYREF

  v2 = a1; /*0x594194*/
  v3 = a1[1]; /*0x594199*/
  result = v3 + a1[3]; /*0x59419f*/
  v14 = v3; /*0x5941a1*/
  if ( v3 < result ) /*0x5941a7*/
  {
    v5 = g_MapCellHeight_Value; /*0x5941ad*/
    do /*0x5942d7*/
    {
      v6 = *v2; /*0x5941b5*/
      v13 = *v2; /*0x5941bd*/
      if ( *v2 < *v2 + v2[2] ) /*0x5941c3*/
      {
        v7 = (int16_t)v3; /*0x5941c9*/
        do /*0x5942c2*/
        {
          v15[0] = v6; /*0x5941cf*/
          v15[1] = v3; /*0x5941d4*/
          v8 = v7 + (int16_t)v6; /*0x5941d9*/
          if ( v8 > v5 ) /*0x5941de*/
          {
            if ( (int16_t)v6 - v7 >= v5 || v7 - (int16_t)v6 >= v5 || v8 > g_MapCellCount ) /*0x594202*/
            {
              v2 = a1; /*0x5942af*/
            }
            else
            {
              if ( g_MapTileArray ) /*0x594210*/
              {
                v7 = (int16_t)v3; /*0x594215*/
                v9 = a2; /*0x59421e*/
                *((unsigned int *)g_MapTileArray + 20 * (int16_t)v6 + 20 * g_MapCellWidth * (int16_t)v3 + 14) = a2; /*0x59422a*/
              }
              else
              {
                v9 = a2; /*0x594230*/
              }
              v10 = CellCoord::To_CellObj(&MapClass_Instance, v15); /*0x59423e*/
              v11 = 0; /*0x594249*/
              if ( g_RandomMap_TileData <= 0 ) /*0x59424d*/
              {
                v2 = a1; /*0x594298*/
  LABEL_19:
                v10[283] = MEMORY[0x10]; /*0x59429c*/
                v5 = g_MapCellHeight_Value; /*0x5942a7*/
              }
              else
              {
                v12 = (char *)g_RandomMap_TerrainState; /*0x59424f*/
                while ( *(unsigned int *)(v12->vtable3 != v9 ) /*0x59425a*/
                {
                  ++v11; /*0x59425c*/
                  v12 += 4; /*0x59425d*/
                  if ( v11 >= g_RandomMap_TileData ) /*0x594262*/
                  {
                    v3 = v14; /*0x594264*/
                    v2 = a1; /*0x594268*/
                    v6 = v13; /*0x59426c*/
                    goto LABEL_19; /*0x594270*/
                  }
                }
                v3 = v14; /*0x594278*/
                v2 = a1; /*0x59427c*/
                v6 = v13; /*0x594280*/
                v10[283] = *(unsigned char *)(*((unsigned int *)g_RandomMap_TerrainState + v11) + 16); /*0x59428a*/
                v5 = g_MapCellHeight_Value; /*0x594290*/
              }
            }
          }
          ++v6; /*0x5942b9*/
          result = *v2 + v2[2]; /*0x5942ba*/
          v13 = v6; /*0x5942be*/
        }
        while ( v6 < result ); /*0x5942c2*/
      }
      v14 = ++v3; /*0x5942d3*/
    }
    while ( v3 < v2[1] + v2[3] ); /*0x5942d7*/
  }
  return result; /*0x5942df*/
}
}
// 0x594420
namespace gamemd {
void FloodFillRandomMapTerrain(int a1, IUnknown * a2, int a3)
{
  unsigned int *v4; // eax
  unsigned int *v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned int *v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // eax
  int16_t *v20; // eax
  int v21; // edx
  int v22; // ecx
  int16_t *v23; // esi
  char *v24; // edi
  int v25; // eax
  int v26; // [esp+10h] [ebp-30h]
  unsigned int *v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h] BYREF
  int v31; // [esp+24h] [ebp-1Ch]
  void **v32; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  char v35; // [esp+35h] [ebp-Bh]
  int v36; // [esp+38h] [ebp-8h]
  int v37; // [esp+3Ch] [ebp-4h]

  v31 = a2; /*0x594426*/
  v4 = operator new(0x50u); /*0x59442e*/
  if ( v4 ) /*0x594438*/
    v5 = RandomMap::TerrainTileDataConstructor(v4, *(unsigned int *)(a1 + 36)); /*0x594445*/
  else
    v5 = 0; /*0x594449*/
  v6 = v5[2]; /*0x59444b*/
  v27 = v5; /*0x594456*/
  v29 = v6; /*0x59445a*/
  VectorClass::CellConstructor(&v32, 0, 0); /*0x59445e*/
  v7 = *(int16_t *)(a1 + 36) + g_MapCellWidth * *(int16_t *)(a1 + 38); /*0x594478*/
  v36 = 0; /*0x594482*/
  v37 = 20000; /*0x59448d*/
  *((unsigned int *)g_MapTileArray + 20 * v7 + 15) = v6; /*0x594498*/
  if ( v36 < v34 /*0x5944c7*/
    || (v35 || !v34) && v37 > 0 && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v32[2])(&v32, v37 + v34, 0) )
  {
    v8 = v36++; /*0x5944d6*/
    *((unsigned int *)Block + v8) = *(unsigned int *)(a1 + 36); /*0x5944e0*/
  }
  v9 = v36; /*0x5944e3*/
  v10 = v36; /*0x5944e7*/
  if ( v36 > 0 ) /*0x5944eb*/
  {
    while ( 1 ) /*0x5944fc*/
    {
      v11 = Block; /*0x5944fc*/
      v12 = v10 - 1; /*0x594500*/
      v13 = *((unsigned int *)Block + v12); /*0x594503*/
      v26 = v13; /*0x594506*/
      if ( v12 < v9 ) /*0x59450a*/
      {
        v36 = v9 - 1; /*0x59450f*/
        if ( v12 < v9 - 1 ) /*0x594513*/
        {
          while ( 1 ) /*0x59451f*/
          {
            v11[v12] = v11[v12 + 1]; /*0x59451f*/
            if ( ++v12 >= v36 ) /*0x594529*/
              break; /*0x594529*/
            v11 = Block; /*0x594517*/
          }
        }
      }
      *((unsigned int *)g_MapTileArray + 20 * (int16_t)v13 + 20 * g_MapCellWidth * IDA_SHIWORD(v13) + 14) = v6; /*0x59454a*/
      ++v5[3]; /*0x594552*/
      v14 = v5[12]; /*0x594555*/
      if ( v5[14] < v14 /*0x594578*/
        || (*((unsigned char *)v5 + 53) || !v14)
        && (v15 = v5[15], v15 > 0)
        && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(v5[10] + 8))(v5 + 10, v14 + v15, 0) )
      {
        v16 = v5[14]; /*0x59457f*/
        v17 = v5[11]; /*0x594582*/
        v5[14] = v16 + 1; /*0x594588*/
        *(unsigned int *)(v17 + 4 * v16) = v13; /*0x59458b*/
      }
      v18 = 0; /*0x59458e*/
      while ( 1 ) /*0x594598*/
      {
        v19 = v18 & 7; /*0x594598*/
        IDA_LOWORD(v28) = v13 + IDA_LOWORD(Direction_X_Offsets[v19]); /*0x5945ba*/
        IDA_HIWORD(v28) = IDA_HIWORD(v26) + IDA_HIWORD(Direction_X_Offsets[v19]); /*0x5945c3*/
        v30 = v28; /*0x5945d2*/
        v20 = (int16_t *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v30); /*0x5945d6*/
        v21 = v20[18]; /*0x5945db*/
        v22 = v20[19]; /*0x5945df*/
        v23 = v20 + 18; /*0x5945e3*/
        if ( v21 + v22 > g_MapCellHeight_Value /*0x59461d*/
          && v21 - v22 < g_MapCellHeight_Value
          && v22 - v21 < g_MapCellHeight_Value
          && v21 + v22 <= g_MapCellCount )
        {
          v24 = (char *)g_MapTileArray + 80 * v20[18] + 80 * g_MapCellWidth * v20[19]; /*0x594642*/
          if ( !*((unsigned int *)v20 + 19) /*0x594664*/
            && MapClass::GetTileIndex(&MapClass_Instance, v23, v31, 0) == a3
            && *((unsigned int *)v24 + 15) == -1 )
          {
            *((unsigned int *)v24 + 15) = v29; /*0x59466a*/
            if ( v36 < v34 /*0x594698*/
              || (v35 || !v34)
              && v37 > 0
              && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v32[2])(&v32, v37 + v34, 0) )
            {
              v25 = v36++; /*0x5946a7*/
              *((unsigned int *)Block + v25) = *(unsigned int *)v23; /*0x5946b0*/
            }
          }
        }
        if ( ++v18 >= 8 ) /*0x5946b7*/
          break; /*0x5946b7*/
        IDA_LOWORD(v13) = v26; /*0x594592*/
      }
      v9 = v36; /*0x5946bd*/
      v10 = v36; /*0x5946c1*/
      if ( v36 <= 0 ) /*0x5946c5*/
        break; /*0x5946c5*/
      v5 = v27; /*0x5944f4*/
      v6 = v29; /*0x5944f8*/
    }
  }
  if ( Block ) /*0x5946dd*/
  {
    if ( v35 ) /*0x5946e5*/
      RA2_OPDEL(Block); /*0x5946e8*/
  }
}
}
// 0x594B50
namespace gamemd {
ObjectClass * * RandomMap_DistributeTerrain()
{
  double v0; // st7
  int v1; // eax
  int v2; // ebx
  int v3; // ebp
  int i; // esi
  int v6; // edi
  unsigned int v7;
  unsigned int *v8; // ecx
  void *v9; // esi
  int j; // edi
  int v11; // esi
  unsigned int *v12; // ebp
  size_t v13; // eax
  signed int k; // edi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int *v18; // ecx
  int v20; // edi
  int v21; // ebx
  int v22; // ebp
  int v23; // esi
  int v24; // edi
  int v25; // eax
  int v26; // edi
  int n; // esi
  int ii; // esi
  int v30; // [esp+10h] [ebp-54h]
  int64_t m; // [esp+14h] [ebp-50h]
  int v32; // [esp+18h] [ebp-4Ch]
  signed int NumOfElements; // [esp+28h] [ebp-3Ch]
  char v34; // [esp+30h] [ebp-34h]
  unsigned int v35[5]; // [esp+38h] [ebp-2Ch]
  void* v36;
  void *Block; // [esp+50h] [ebp-14h]
  int v38; // [esp+54h] [ebp-10h]
  char v39; // [esp+59h] [ebp-Bh]
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  v35[0] = 5; /*0x594b60*/
  v35[1] = 5; /*0x594b6a*/
  v35[2] = 5; /*0x594b6e*/
  v35[3] = 0; /*0x594b76*/
  v35[4] = 0; /*0x594b7a*/
  v0 = (double)dword_ABE15C * (double)dword_ABE158 * 0.03; /*0x594b7e*/
  if ( v0 < 400.0 ) /*0x594b91*/
    v0 = 400.0; /*0x594b95*/
  v32 = Math::RoundToInt(v0); /*0x594ba5*/
  v1 = Terrain::ConnectivityGraph(&MapClass_Instance); /*0x594ba9*/
  IDA_HIWORD(v3) = 0; /*0x594bb4*/
  v2 = v35[dword_ABE014]; /*0x594bb6*/
  IDA_LOWORD(v3) = *(unsigned short *)(dword_87F800[v2] + 2 * v1); /*0x594bc1*/
  Map_Helper_58CE90(); /*0x594bc5*/
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x594bcf*/
  for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x594be2*/
  {
    if ( MapSeed::IsCellInBounds((int16_t *)(i + 36)) /*0x594c2b*/
      && *((unsigned int *)g_MapTileArray + 20 * *(int16_t *)(i + 36) + 20 * g_MapCellWidth * *(int16_t *)(i + 38) + 14) == -1
      && !*(unsigned int *)(i + 76)
      && MapClass::GetTileIndex(&MapClass_Instance, (int16_t *)(i + 36), v2, 0) == v3 )
    {
      FloodFillRandomMapTerrain(v3); /*0x594c32*/
    }
  }
  g_RandomMap_TileData = g_RandomMap_TileData; /*0x594c4f*/
  v6 = g_RandomMap_TileData - 1; /*0x594c51*/
  if ( g_RandomMap_TileData - 1 >= 0 ) /*0x594c54*/
  {
    v7 = g_RandomMap_TerrainState; /*0x594c56*/
    do /*0x594c81*/
    {
      v8 = (unsigned int *)v7[v6]; /*0x594c5b*/
      if ( v8[3] < v32 ) /*0x594c65*/
      {
        v9 = (void *)v7[v6]; /*0x594c67*/
        if ( v8 ) /*0x594c6b*/
        {
          TileNode::Cleanup(v8); /*0x594c6d*/
          RA2_OPDEL(v9); /*0x594c73*/
          v7 = g_RandomMap_TerrainState; /*0x594c78*/
        }
      }
      --v6; /*0x594c80*/
    }
    while ( v6 >= 0 ); /*0x594c81*/
  }
  TileSystem::Constructor(0, 0); /*0x594c89*/
  v36 = (void **)&off_7ED858; /*0x594c92*/
  v41 = 10; /*0x594c9a*/
  NumOfElements = 0; /*0x594ca6*/
  v34 = 0; /*0x594cae*/
  v40 = 0; /*0x594cb7*/
  VectorClass_ptr_MapRegionClass::Remove(&v36); /*0x594cbb*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x594cc9*/
  {
    v11 = *(unsigned int *)(*((unsigned int *)g_RandomMap_TerrainState + j) + 8) /*0x594ce8*/
        + g_RandomMap_TileData * (500000 - *(unsigned int *)(*((unsigned int *)g_RandomMap_TerrainState + j) + 12));
    v12 = (unsigned int *)((char *)g_RandomMap_TerrainState + 4 * j);
    if ( NumOfElements + 1 <= 0 || (uint8_t)Map_Helper_5AD930(10) ) /*0x594d06*/
    {
      *(unsigned int *)(8 * NumOfElements) = v11; /*0x594d17*/
      *(unsigned int *)(8 * NumOfElements + 4) = *v12; /*0x594d25*/
      v34 = 0; /*0x594d2e*/
      ++NumOfElements; /*0x594d33*/
    }
  }
  v13 = NumOfElements; /*0x594d43*/
  for ( k = 0; k < NumOfElements; ++k ) /*0x594d4b*/
  {
    if ( !v34 ) /*0x594d53*/
    {
      qsort(0, v13, 8u, sub_5AD9C0); /*0x594d62*/
      v34 = 1; /*0x594d6e*/
    }
    if ( v40 < v38 /*0x594da7*/
      || (v39 || !v38) && v41 > 0 && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v36[2])(&v36, v41 + v38, 0) )
    {
      v15 = v40++; /*0x594db6*/
      *((unsigned int *)Block + v15) = *(unsigned int *)(8 * k + 4); /*0x594dbf*/
    }
    v13 = NumOfElements; /*0x594dc2*/
  }
  v16 = v40; /*0x594dcb*/
  v17 = 0; /*0x594dcf*/
  v30 = 0; /*0x594dd3*/
  if ( v40 > 0 ) /*0x594dd7*/
  {
    v18 = (int *)Block; /*0x594dd9*/
    v40 = v40; /*0x594ddd*/
    do /*0x594dea*/
    {
      v20 = *v18++; /*0x594ddf*/
      v17 += v20->vtable4; /*0x594de7*/
      --v40; /*0x594de9*/
    }
    while ( v40 ); /*0x594dea*/
    v30 = v17; /*0x594dec*/
  }
  v21 = 0; /*0x594df6*/
  v22 = 0; /*0x594df8*/
  v23 = 0; /*0x594dfa*/
  for ( m = (unsigned int)dword_ABE028; v23 < v40; IDA_HIDWORD(m) = v22 ) /*0x594e06*/
  {
    v24 = *((unsigned int *)Block + v23); /*0x594e0c*/
    v21 += *(unsigned int *)(v24 + 12); /*0x594e12*/
    if ( v23 == v16 - 1 ) /*0x594e1b*/
      v25 = m - v22; /*0x594e21*/
    else
      v25 = Math::RoundToInt((double)v21 / (double)v30 * (double)(int)m + 0.5 - (double)IDA_SHIDWORD(m)); /*0x594e3b*/
    *(unsigned int *)(v24 + 32) = v25; /*0x594e40*/
    v22 += v25; /*0x594e43*/
    v16 = v40; /*0x594e45*/
    ++v23; /*0x594e49*/
  }
  v26 = 0; /*0x594e56*/
  for ( n = 0; n < v40; ++n ) /*0x594e5c*/
  {
    PlaceRandomWaypoints(v26); /*0x594e66*/
    v26 += *(unsigned int *)(*((unsigned int *)Block + n) + 32); /*0x594e79*/
  }
  if ( !dword_ABE014 ) /*0x594e87*/
  {
    for ( ii = 0; ii < v40; ++ii ) /*0x594e91*/
    {
      if ( !*(unsigned int *)(*((unsigned int *)Block + ii) + 32) /*0x594ecc*/
        && (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 < 0.5 )
      {
        PlaceNeutralBuilding(*((unsigned int *)Block + ii)); /*0x594ed5*/
      }
    }
  }
  ComputeMapCameraBounds(); /*0x594ee3*/
  RA2_OPDEL(0); /*0x594eed*/
  if ( Block && v39 ) /*0x594f25*/
    RA2_OPDEL(Block); /*0x594f28*/
  return 1; /*0x594f03*/
}
}
// 0x595CE0
namespace gamemd {
AbstractTypeClass * * CleanupRandomMapCache()
{
  struct _WIN32_FIND_DATAA *i; // esi
  HANDLE FirstFileA; // edi
  _WIN32_FIND_DATAA * v2;
  _WIN32_FIND_DATAA * v3;
  int v4; // eax
  int v5; // edi
  int v6; // esi
  void **v7; // eax
  char *v8; // ecx
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  FILETIME FileTime2; // [esp+10h] [ebp-20h] BYREF
  void* v14;
  void *Block; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h]
  char v17; // [esp+25h] [ebp-Bh]
  int j; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  Map_Cleanup(0, 0); /*0x595cef*/
  v19 = 10; /*0x595cfc*/
  j = 0; /*0x595d09*/
  i = (struct _WIN32_FIND_DATAA *)operator new(0x140u); /*0x595d19*/
  FirstFileA = FindFirstFileA(aRmcacheMmp, i); /*0x595d27*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x595d2c*/
  {
    if ( j < v16 || (v17 || !v16) && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v14[2])(&v14, v19 + v16, 0) ) /*0x595d5f*/
    {
      v2 = (_WIN32_FIND_DATAA *)(j++);
      *((unsigned int *)Block + v2) = i; /*0x595d75*/
    }
    for ( i = (struct _WIN32_FIND_DATAA *)operator new(0x140u); /*0x595d8f*/
          FindNextFileA(FirstFileA, i);
          i = (struct _WIN32_FIND_DATAA *)operator new(0x140u) )
    {
      if ( j < v16 /*0x595dc2*/
        || (v17 || !v16)
        && v19 > 0
        && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v14[2])(&v14, v19 + v16, 0) )
      {
        v3 = (_WIN32_FIND_DATAA *)(j++);
        *((unsigned int *)Block + v3) = i; /*0x595dd8*/
      }
    }
    FindClose(FirstFileA); /*0x595df3*/
  }
  RA2_OPDEL(i); /*0x595dfa*/
  v4 = j; /*0x595dff*/
  if ( j <= 70 ) /*0x595e09*/
  {
  LABEL_36:
    v7 = (void **)Block; /*0x595f3d*/
    goto LABEL_37; /*0x595f3d*/
  }
  while ( 2 ) /*0x595e1b*/
  {
    v5 = -1; /*0x595e1b*/
    v6 = 0; /*0x595e1e*/
    FileTime2.dwLowDateTime = -1; /*0x595e22*/
    FileTime2.dwHighDateTime = 0x7FFFFFFF; /*0x595e26*/
    if ( v4 <= 0 ) /*0x595e2e*/
      goto LABEL_36; /*0x595e2e*/
    v7 = (void **)Block; /*0x595e34*/
    do /*0x595ee3*/
    {
      v8 = (char *)v7[v6]; /*0x595e38*/
      if ( *((unsigned int *)v8 + 4) ) /*0x595e3b*/
      {
        if ( CompareFileTime((const FILETIME *)(v8 + 12), &FileTime2) == -1 ) /*0x595e50*/
        {
          v7 = (void **)Block; /*0x595e56*/
          v5 = v6; /*0x595e5a*/
          FileTime2 = *(FILETIME *)(*((unsigned int *)Block + v6) + 12); /*0x595e62*/
          goto LABEL_29; /*0x595e70*/
        }
      }
      else if ( *((unsigned int *)v8 + 2) ) /*0x595e72*/
      {
        if ( CompareFileTime((const FILETIME *)(v8 + 4), &FileTime2) == -1 ) /*0x595e87*/
        {
          v7 = (void **)Block; /*0x595e89*/
          v5 = v6; /*0x595e8d*/
          FileTime2 = *(FILETIME *)(*((unsigned int *)Block + v6) + 4); /*0x595e95*/
          goto LABEL_29; /*0x595ea3*/
        }
      }
      else
      {
        if ( !*((unsigned int *)v8 + 6) ) /*0x595eaa*/
          goto LABEL_29; /*0x595eaa*/
        if ( CompareFileTime((const FILETIME *)(v8 + 20), &FileTime2) == -1 ) /*0x595eba*/
        {
          v7 = (void **)Block; /*0x595ebc*/
          v5 = v6; /*0x595ec0*/
          FileTime2 = *(FILETIME *)(*((unsigned int *)Block + v6) + 20); /*0x595ec8*/
          goto LABEL_29; /*0x595ed6*/
        }
      }
      v7 = (void **)Block; /*0x595ed8*/
  LABEL_29:
      ++v6; /*0x595edc*/
    }
    while ( v6 < j ); /*0x595ee3*/
    if ( v5 != -1 ) /*0x595eec*/
    {
      if ( !DeleteFileA((LPCSTR)v7[v5] + 44) ) /*0x595ef5*/
        goto LABEL_36; /*0x595ef5*/
      RA2_OPDEL(*((void **)Block + v5)); /*0x595f03*/
      v9 = j; /*0x595f08*/
      if ( v5 < j ) /*0x595f11*/
      {
        v9 = j - 1; /*0x595f13*/
        v10 = v5; /*0x595f14*/
        for ( j = v9; v10 < j; v9 = j ) /*0x595f1c*/
        {
          ++v10; /*0x595f22*/
          *((unsigned int *)Block + v10 - 1) = *((unsigned int *)Block + v10); /*0x595f26*/
        }
      }
      v4 = v9; /*0x595f32*/
      if ( v9 <= 70 ) /*0x595f37*/
        goto LABEL_36; /*0x595f37*/
      continue; /*0x595f37*/
    }
    break;
  }
  LABEL_37:
  if ( j ) /*0x595f4b*/
  {
    do /*0x595f85*/
    {
      RA2_OPDEL(*v7); /*0x595f50*/
      v11 = j == 0; /*0x595f5c*/
      if ( j > 0 ) /*0x595f5e*/
      {
        v12 = 0; /*0x595f61*/
        v11 = j-- == 1; /*0x595f63*/
        if ( j > 0 ) /*0x595f69*/
        {
          do /*0x595f7d*/
          {
            ++v12; /*0x595f6f*/
            *((unsigned int *)Block + v12 - 1) = *((unsigned int *)Block + v12); /*0x595f73*/
          }
          while ( v12 < j ); /*0x595f7d*/
          v11 = j == 0; /*0x595f7f*/
        }
      }
      v7 = (void **)Block; /*0x595f81*/
    }
    while ( !v11 ); /*0x595f85*/
  }
  if ( v7 ) /*0x595f91*/
  {
    if ( v17 ) /*0x595f99*/
      RA2_OPDEL(v7); /*0x595f9c*/
  }
}
}
// 0x595FB0
namespace gamemd {
unsigned int * GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)() a2)
{
  unsigned int *v4; // eax
  char *v5; // esi
  void *v6; // eax
  void *v7; // eax
  void *v8; // esi
  void *v9; // esi
  void *v10; // eax
  HWND *v11; // eax
  int v12; // ecx
  unsigned int *v13; // esi
  unsigned int v15[2]; // [esp+10h] [ebp-260h] BYREF
  unsigned int v16[2]; // [esp+18h] [ebp-258h] BYREF
  int v17[9]; // [esp+20h] [ebp-250h] BYREF
  unsigned int v18[22]; // [esp+44h] [ebp-22Ch] BYREF
  unsigned char v19[12]; // [esp+9Ch] [ebp-1D4h] BYREF
  int v20; // [esp+A8h] [ebp-1C8h]
  char Destination[128]; // [esp+B0h] [ebp-1C0h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+130h] [ebp-140h] BYREF

  ComPtr::Constructor(v15); /*0x595fc2*/
  if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x595fe5*/
  {
    v4 = FindWDTTerritoryClass(v16, *(int *)g_GameDifficulty); /*0x595ff1*/
    ComPtr::Set(v15, v4[1]); /*0x595ffe*/
    ComPtr::Release(v16); /*0x59600b*/
  }
  if ( v15[1] ) /*0x596016*/
    dword_ABE028 = 4; /*0x596018*/
  v5 = GameConfig::ComputeCRC(); /*0x596023*/
  memset(Destination, 0, sizeof(Destination)); /*0x596033*/
  strncpy(Destination, aRmcache, 0x80u); /*0x596047*/
  strncat(Destination, v5, 0x80u); /*0x59605a*/
  RA2_OPDEL(v5); /*0x596060*/
  strncat(Destination, aMmp, 0x80u); /*0x596077*/
  CCFileClass::Construct(v18, Destination); /*0x59608b*/
  if ( CCFileClass::Open(v18, 0) ) /*0x596097*/
  {
    v6 = g_Map_TiberiumConfig; /*0x5960a4*/
    if ( !g_Map_TiberiumConfig ) /*0x5960ab*/
    {
      v7 = operator new(4u); /*0x5960af*/
      if ( v7 ) /*0x5960b9*/
        v6 = (void *)unknown_libname_27(v7); /*0x5960bd*/
      else
        v6 = 0; /*0x5960c4*/
      g_Map_TiberiumConfig = v6; /*0x5960c6*/
    }
    if ( Surface::LoadToSurfaceSHP((char **)v6, Destination) ) /*0x5960d5*/
    {
      RawFileClass::Construct(v17, (int)ExistingFileName); /*0x5960e7*/
      CompressScreenshot(v17, *(int **)g_Map_TiberiumConfig, &FileSystem_TEMPERAT_PAL); /*0x5960fc*/
      v8 = g_Map_TiberiumConfig; /*0x596101*/
      if ( g_Map_TiberiumConfig ) /*0x596109*/
      {
        ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59610d*/
        RA2_OPDEL(v8); /*0x596113*/
      }
      g_Map_TiberiumConfig = 0; /*0x59611f*/
      RawFileClass::Dtor(v17); /*0x596125*/
      goto LABEL_39; /*0x59612a*/
    }
    v9 = g_Map_TiberiumConfig; /*0x59612f*/
    if ( g_Map_TiberiumConfig ) /*0x596137*/
    {
      ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59613b*/
      RA2_OPDEL(v9); /*0x596141*/
    }
    g_Map_TiberiumConfig = 0; /*0x596149*/
  }
  off_82AF14 = a2; /*0x596154*/
  dword_ABDFEC = (int)a2; /*0x59615d*/
  if ( dword_ABE04C == -1 ) /*0x596163*/
    dword_ABE04C = Random::Range(Randomizer_Global, 0, 0xFFFF); /*0x596175*/
  RandomMap::Generate((int *)dword_ABDFD8, 1, hDlg); /*0x596182*/
  MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59618d*/
  if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x5961a2*/
    MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x5961aa*/
  if ( dword_ABE150 ) /*0x5961b7*/
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5961bd*/
  v10 = new MapSeedClass; /*0x5961c4*/
  if ( v10 ) /*0x5961ce*/
    v11 = (HWND *)MapSeedClass::Constructor(v10); /*0x5961d2*/
  else
    v11 = 0; /*0x5961d9*/
  dword_ABE150 = (int)v11; /*0x5961e7*/
  qmemcpy(v11, dword_ABDFD8, 0x178u); /*0x5961ec*/
  ScenarioClass::SetFileName((char *)g_ScenarioClass_Instance, g_INI_Key_RandomMap); /*0x5961f9*/
  IDA_LOBYTE(v12) = 0; /*0x5961fe*/
  ScreenSaver::Process(v12); /*0x596200*/
  v13 = g_Map_TiberiumConfig; /*0x596205*/
  if ( g_Map_TiberiumConfig ) /*0x59620f*/
  {
    if ( *(unsigned int *)g_Map_TiberiumConfig ) /*0x596215*/
    {
      RawFileClass::Construct(v17, (int)ExistingFileName); /*0x596222*/
      CompressScreenshot(v17, *(int **)g_Map_TiberiumConfig, &FileSystem_TEMPERAT_PAL); /*0x596237*/
      if ( FindFirstFileA(PathName, &FindFileData) == (HANDLE)-1 ) /*0x596252*/
        CreateDirectoryA(PathName, 0); /*0x59625a*/
      CopyFileA(ExistingFileName, Destination, 0); /*0x59626e*/
      CleanupRandomMapCache(); /*0x596274*/
      RawFileClass::Dtor(v17); /*0x59627d*/
      v13 = g_Map_TiberiumConfig; /*0x596282*/
    }
    if ( v13 ) /*0x59628a*/
    {
      ComPtr::Dtor(v13); /*0x59628e*/
      RA2_OPDEL(v13); /*0x596294*/
    }
    g_Map_TiberiumConfig = 0; /*0x59629c*/
  }
  if ( dword_ABE150 ) /*0x5962aa*/
  {
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5962b0*/
    dword_ABE150 = 0; /*0x5962b2*/
  }
  LABEL_39:
  v20 = 0; /*0x5962c7*/
  Vector::Clear((int)v19); /*0x5962ce*/
  v18[0] = &off_7E1668; /*0x5962d7*/
  BufferIOFileClass::Dtor(v18); /*0x5962df*/
  return ComPtr::Release(v15); /*0x5962f5*/
}
}
// 0x59A8F0
namespace gamemd {
AbstractClass * * ArrangeBuildingPlacementGrid(int a1, int a2, MapResourceClass * aP2)
{
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int *v7; // ebp
  int v8; // esi
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // esi
  signed int v15; // eax
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int *v21; // edx
  bool v22; // zf
  int v23; // [esp+18h] [ebp-74h]
  int v24; // [esp+1Ch] [ebp-70h]
  int64_t v25; // [esp+20h] [ebp-6Ch]
  int v26; // [esp+28h] [ebp-64h]
  int v27; // [esp+2Ch] [ebp-60h]
  int v28; // [esp+30h] [ebp-5Ch]
  int v29; // [esp+38h] [ebp-54h]
  int v30; // [esp+3Ch] [ebp-50h]
  int v31; // [esp+40h] [ebp-4Ch]
  int j; // [esp+40h] [ebp-4Ch]
  int v33; // [esp+44h] [ebp-48h]
  int v34; // [esp+48h] [ebp-44h]
  int64_t v35; // [esp+4Ch] [ebp-40h]
  double v36; // [esp+54h] [ebp-38h]
  void **v37; // [esp+5Ch] [ebp-30h] BYREF
  void *Block; // [esp+60h] [ebp-2Ch]
  int v39; // [esp+64h] [ebp-28h]
  int v40; // [esp+68h] [ebp-24h]
  int i; // [esp+6Ch] [ebp-20h]
  int v42; // [esp+70h] [ebp-1Ch]
  void **v43; // [esp+74h] [ebp-18h] BYREF
  void *v44; // [esp+78h] [ebp-14h]
  int v45; // [esp+7Ch] [ebp-10h]
  char v46; // [esp+81h] [ebp-Bh]
  int v47; // [esp+84h] [ebp-8h]
  int v48; // [esp+88h] [ebp-4h]

  v3 = Math::Sqrt((double)a2); /*0x59a901*/
  v4 = Math::RoundToInt(v3); /*0x59a909*/
  v31 = v4; /*0x59a91c*/
  if ( v4 * v4 == a2 ) /*0x59a920*/
  {
    v5 = v4; /*0x59a922*/
    v26 = v4; /*0x59a924*/
  }
  else
  {
    v26 = v4 + 1; /*0x59a92d*/
    v5 = v4 + 1; /*0x59a931*/
  }
  if ( v4 * v5 < a2 ) /*0x59a93a*/
  {
    v23 = v5; /*0x59a944*/
    v6 = v5; /*0x59a948*/
  }
  else
  {
    v6 = v4; /*0x59a93c*/
    v23 = v4; /*0x59a93e*/
  }
  v7 = aP2; /*0x59a94a*/
  v24 = aP2[2] / v5; /*0x59a95c*/
  v25 = (unsigned int)(aP2[3] / v5); /*0x59a966*/
  v29 = 0; /*0x59a96c*/
  v30 = 0; /*0x59a970*/
  v27 = 0; /*0x59a978*/
  if ( (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 >= 0.5 ) /*0x59a9a2*/
  {
    IDA_HIDWORD(v25) = v24; /*0x59a9c6*/
    IDA_LODWORD(v25) = aP2[3] / v6; /*0x59a9ca*/
    v30 = v25; /*0x59a9ce*/
  }
  else
  {
    v27 = v25; /*0x59a9ae*/
    v24 = aP2[2] / v6; /*0x59a9b2*/
    v29 = v24; /*0x59a9b6*/
  }
  v8 = v5 * v6 - a2; /*0x59a9db*/
  v9 = 0; /*0x59a9dd*/
  v34 = aP2[1]; /*0x59a9df*/
  v33 = *aP2; /*0x59a9e9*/
  VectorClass::Construct(&v43, 0, 0); /*0x59a9ed*/
  v48 = 10; /*0x59aa00*/
  v47 = 0; /*0x59aa0b*/
  VectorClass::Construct(&v37, 0, 0); /*0x59aa12*/
  v10 = 0; /*0x59aa1b*/
  v42 = 10; /*0x59aa27*/
  i = 0; /*0x59aa2f*/
  if ( v23 > 0 ) /*0x59aa33*/
  {
    do /*0x59aacf*/
    {
      if ( v47 < v45 /*0x59aa69*/
        || (v46 || !v45)
        && v48 > 0
        && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v43[2])(&v43, v48 + v45, 0) )
      {
        v11 = v47++; /*0x59aa74*/
        *((unsigned int *)v44 + v11) = v5; /*0x59aa7f*/
      }
      if ( i < v39 /*0x59aaaf*/
        || (IDA_BYTE1(v40) || !v39)
        && v42 > 0
        && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v37[2])(&v37, v42 + v39, 0) )
      {
        v12 = i++; /*0x59aaba*/
        *((unsigned int *)Block + v12) = v9; /*0x59aac5*/
      }
      ++v9; /*0x59aacc*/
    }
    while ( v9 < v23 ); /*0x59aacf*/
    v10 = i; /*0x59aad5*/
  }
  if ( v8 > 0 ) /*0x59aadb*/
  {
    v13 = v8; /*0x59aae1*/
    do /*0x59ab62*/
    {
      v14 = v10 - 1; /*0x59aae3*/
      v36 = (double)v10; /*0x59aaf9*/
      do /*0x59ab28*/
      {
        v35 = (unsigned int)Random::State(&g_Randomizer); /*0x59ab07*/
        v15 = Math::RoundToInt((double)v35 * v36 * 2.328306437080797e-10); /*0x59ab21*/
      }
      while ( v15 > v14 ); /*0x59ab28*/
      *((unsigned int *)v44 + *((unsigned int *)Block + v15)) = v31; /*0x59ab39*/
      v10 = i; /*0x59ab3c*/
      if ( v15 < i ) /*0x59ab42*/
      {
        v10 = i - 1; /*0x59ab44*/
        for ( i = v10; v15 < i; v10 = i ) /*0x59ab4b*/
        {
          ++v15; /*0x59ab51*/
          *((unsigned int *)Block + v15 - 1) = *((unsigned int *)Block + v15); /*0x59ab55*/
        }
      }
      --v13; /*0x59ab61*/
    }
    while ( v13 ); /*0x59ab62*/
  }
  v16 = 0; /*0x59ab6c*/
  for ( j = 0; v16 < v23; j = v16 ) /*0x59ab74*/
  {
    v17 = *((unsigned int *)v44 + v16); /*0x59ab85*/
    if ( v17 < v5 ) /*0x59ab8a*/
    {
      if ( IDA_SHIDWORD(v25) <= 0 ) /*0x59ab92*/
        v34 += (int)v25 / 2; /*0x59abb8*/
      else
        v33 += v24 / 2; /*0x59aba3*/
    }
    if ( v17 > 0 ) /*0x59abbe*/
    {
      v28 = *((unsigned int *)v44 + v16); /*0x59abc8*/
      do /*0x59ac53*/
      {
        v18 = *(unsigned int *)(a1 + 8); /*0x59abda*/
        if ( *(unsigned int *)(a1 + 16) < v18 /*0x59ac02*/
          || (*(unsigned char *)(a1 + 13) || !v18)
          && (v19 = *(unsigned int *)(a1 + 20), v19 > 0)
          && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)a1 + 8))(a1, v18 + v19, 0) )
        {
          v20 = *(unsigned int *)(a1 + 16); /*0x59ac09*/
          *(unsigned int *)(a1 + 16) = v20 + 1; /*0x59ac0f*/
          v21 = (unsigned int *)(*(unsigned int *)(a1 + 4) + 16 * v20); /*0x59ac1a*/
          *v21 = v33 + 2; /*0x59ac23*/
          v21[1] = v34 + 2; /*0x59ac25*/
          v21[2] = v24 - 4; /*0x59ac28*/
          v21[3] = v25 - 4; /*0x59ac2b*/
        }
        v33 += IDA_HIDWORD(v25); /*0x59ac40*/
        v22 = v28 == 1; /*0x59ac4a*/
        v34 += v27; /*0x59ac4b*/
        --v28; /*0x59ac4f*/
      }
      while ( !v22 ); /*0x59ac53*/
      v5 = v26; /*0x59ac59*/
      v7 = aP2; /*0x59ac5d*/
      v16 = j; /*0x59ac64*/
    }
    v33 += v29; /*0x59ac7a*/
    v34 += v30; /*0x59ac86*/
    if ( IDA_SHIDWORD(v25) <= 0 ) /*0x59ac8a*/
      v34 = v7[1]; /*0x59ac98*/
    else
      v33 = *v7; /*0x59ac8f*/
    ++v16; /*0x59aca0*/
  }
  if ( Block && IDA_BYTE1(v40) ) /*0x59acc4*/
  {
    RA2_OPDEL(Block); /*0x59acc7*/
    Block = 0; /*0x59accf*/
  }
  IDA_BYTE1(v40) = 0; /*0x59ace2*/
  v39 = 0; /*0x59ace9*/
  if ( v44 ) /*0x59acf2*/
  {
    if ( v46 ) /*0x59acfa*/
      RA2_OPDEL(v44); /*0x59acfd*/
  }
}
}
// 0x59C630
namespace gamemd {
int sub_59C630()
{
  int result; // eax
  int i; // esi
  unsigned int *NeighbourContent; // edi
  unsigned int *v3; // ebp
  unsigned int *v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  int64_t v10; // [esp+8h] [ebp-18h]
  int64_t v11; // [esp+10h] [ebp-10h]
  int64_t v12; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x59c63a*/
  result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x59c644*/
  for ( i = result; result; i = result ) /*0x59c64f*/
  {
    if ( *(unsigned int *)(i + 56) == g_CellPassabilityLUT && !*(unsigned char *)(i + 282) ) /*0x59c668*/
    {
      NeighbourContent = Cell::GetNeighbourContent((unsigned int *)i, 2u); /*0x59c681*/
      v3 = Cell::GetNeighbourContent((unsigned int *)i, 4u); /*0x59c68c*/
      v4 = Cell::GetNeighbourContent((unsigned int *)i, 3u); /*0x59c68e*/
      if ( NeighbourContent[14] != g_CellPassabilityLUT /*0x59c6ce*/
        || *((unsigned char *)NeighbourContent + 282)
        || v3[14] != g_CellPassabilityLUT
        || *((unsigned char *)v3 + 282)
        || v4[14] != g_CellPassabilityLUT
        || *((unsigned char *)v4 + 282) )
      {
        goto LABEL_25; /*0x59c6ce*/
      }
      do /*0x59c704*/
      {
        v10 = (unsigned int)Random::State(&g_Randomizer); /*0x59c6e4*/
        v5 = Math::RoundToInt((double)v10 * 0.000000002328306437080797 + 1.0); /*0x59c6fc*/
      }
      while ( v5 > 0xA ); /*0x59c704*/
      if ( v5 == 1 ) /*0x59c709*/
      {
  LABEL_25:
        do /*0x59c7c5*/
        {
          v12 = (unsigned int)Random::State(&g_Randomizer); /*0x59c7a6*/
          v9 = Math::RoundToInt((double)v12 * 0.00000004679895938532403); /*0x59c7bd*/
        }
        while ( v9 > 0xC8 ); /*0x59c7c5*/
        *(unsigned int *)(i + 56) = v9 / 0x28 + g_CellPassabilityLUT + 8; /*0x59c7da*/
      }
      else
      {
        do /*0x59c738*/
        {
          v11 = (unsigned int)Random::State(&g_Randomizer); /*0x59c719*/
          v6 = Math::RoundToInt((double)v11 * 0.0000000563450157773553); /*0x59c72b*/
        }
        while ( (unsigned int)v6 > 0xF1 ); /*0x59c738*/
        if ( v6 < 240 ) /*0x59c740*/
          v7 = v6 / 40; /*0x59c75c*/
        else
          v7 = 247 - v6; /*0x59c747*/
        if ( g_MapTileArray ) /*0x59c769*/
          v8 = *((unsigned int *)g_MapTileArray + 20 * *(int16_t *)(i + 36) + 20 * g_MapCellWidth * *(int16_t *)(i + 38) + 14); /*0x59c786*/
        else
          v8 = -1; /*0x59c76b*/
        PlaceMapSeedClassBuildings(v7 + g_CellPassabilityLUT, (unsigned short *)(i + 36), v8, -1); /*0x59c795*/
      }
    }
    result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x59c7e2*/
  }
  return result; /*0x59c7f3*/
}
}
// 0x5942F0
namespace gamemd {
int E4Recv_5942F0::sub_5942F0(int * a2)
{
  int *v2; // ebp
  int v3; // ebx
  int result; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  unsigned char *v9; // eax
  int v10; // [esp+8h] [ebp-Ch]
  int16_t v11[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x5942f5*/
  v3 = a2[1]; /*0x5942fd*/
  result = v3 + a2[3]; /*0x594303*/
  v10 = v3; /*0x594305*/
  if ( v3 < result ) /*0x59430b*/
  {
    v5 = g_MapCellHeight_Value; /*0x594311*/
    do /*0x5943c8*/
    {
      v6 = *v2; /*0x594319*/
      if ( *v2 < *v2 + v2[2] ) /*0x594323*/
      {
        v7 = (int16_t)v3; /*0x594329*/
        do /*0x5943b3*/
        {
          v11[0] = v6; /*0x59432f*/
          v11[1] = v3; /*0x594334*/
          v8 = v7 + (int16_t)v6; /*0x594339*/
          if ( v8 > v5 ) /*0x59433e*/
          {
            if ( (int16_t)v6 - v7 < v5 && v7 - (int16_t)v6 < v5 && v8 <= g_MapCellCount ) /*0x594356*/
            {
              if ( g_MapTileArray ) /*0x594360*/
                *((unsigned int *)g_MapTileArray + 20 * (int16_t)v6 + 20 * g_MapCellWidth * v7 + 14) = this->vtable3; /*0x59437a*/
              v9 = CellCoord::To_CellObj(&MapClass_Instance, v11); /*0x594388*/
              v9[283] = this->uniqueId; /*0x594394*/
              v5 = g_MapCellHeight_Value; /*0x59439a*/
            }
            v3 = v10; /*0x5943a0*/
            v2 = a2; /*0x5943a4*/
          }
          ++v6; /*0x5943ae*/
          result = *v2 + v2[2]; /*0x5943af*/
        }
        while ( v6 < result ); /*0x5943b3*/
      }
      v10 = ++v3; /*0x5943c4*/
    }
    while ( v3 < v2[1] + v2[3] ); /*0x5943c8*/
  }
  return result; /*0x5943d0*/
}
} // namespace gamemd

// 0x597D40
namespace gamemd {
int j_Options_GetValue(const char ** dwNewLong)
{
  return Options::PrepareSaveLoadDlg(dwNewLong);
}
// 0x598000
namespace gamemd {
double sub_598000()
{
  return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10; /*0x598023*/
}
} // namespace gamemd
}

// 0x5980A0
namespace gamemd {
unsigned int * E4Recv_5980A0::sub_5980A0(int a2)
{
  this->M8 = 0; /*0x5980a4*/
  *(unsigned char *)this = 0; /*0x5980a7*/
  this->M12 = 0; /*0x5980a9*/
  *(unsigned int *)&this->M16 = a2; /*0x5980b0*/
  return this; /*0x5980b3*/
}
} // namespace gamemd

// 0x59D480
namespace gamemd {
double sub_59D480(short * a1, short * a2, int a3)
{
  int v3; // eax
  int v4; // edx
  float v6; // [esp+18h] [ebp+4h]

  v3 = *a1 - *a2; /*0x59d49c*/
  v4 = a1[1] - a2[1]; /*0x59d49e*/
  v6 = Math::Sqrt((double)(v3 * v3 + v4 * v4)); /*0x59d4bd*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 10.0 /*0x59d503*/
       + 0.5 * v6
       - (double)a3 * 0.02;
}
} // namespace gamemd
