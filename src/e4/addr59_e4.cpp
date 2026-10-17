// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
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
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/RAMFileClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/E4Recv_583AD0_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/TileNode_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/GameConfig_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MapResourceClass_e4.hpp"
#include "e4/classes/MiniMap_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TileSystem_e4.hpp"  // G57w10 D supply
#include "e4/classes/MapPreview_e4.hpp"  // G57w10 D supply
#include "e4/classes/j_Options_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int PlaceNeutralBuilding(TechnoClass *p_this);  // x4:ida@0x595400
int PlaceRandomWaypoints(int p0);  // x4:signals@0x594870
} // namespace gamemd

// 0x5904B0
namespace gamemd {  // G42.18 ns repair
char PlaceCabhutMap(FootClass * aP0)
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
  v2 = (int)(aP0[1]); /*0x5904bb*/
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
    (*((unsigned short *)&(aP0))) = v3; /*0x5904db*/
    (*(((unsigned short *)&(aP0)) + 1)) = v2; /*0x5904e6*/
    v4 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&aP0)); /*0x5904eb*/
    v4 = v4; /*0x5904f0*/
    if ( v4->u32_44 == -1 && (v4)->IsEmpty() && !v4->u32_E4 ) /*0x590503*/
      break; /*0x590503*/
    if ( ++v3 >= aP0[2] + *aP0 + 1 ) /*0x59051a*/
      goto LABEL_7; /*0x59051a*/
  }
  v7 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x59053c*/
  Owner = (v7)->FindOwner(); /*0x59054d*/
  IndexByName = BuildingTypeClass::FindIndexByName(stru_82BA00); /*0x590559*/
  v10 = operator new(0x720u); /*0x59055b*/
  if ( v10 ) /*0x590565*/
    v11 = (int *)BuildingClass::Construct((int)v10, *((unsigned int *)dword_A83C6C + IndexByName), Owner); /*0x590574*/
  else
    v11 = 0; /*0x59057b*/
  v12 = v4->q048 << 8; /*0x590588*/
  v14[1] = (v4->u32_4C << 8) + 128; /*0x590597*/
  v14[0] = v12 + 128; /*0x59059f*/
  v13 = *v11; /*0x5905a3*/
  v14[2] = 0; /*0x5905aa*/
  v11->COMStub_54(v14, 0); /*0x5905b2*/
  return 1; /*0x59052b*/
}
}  // G42.18 ns repair
// 0x594190
namespace gamemd {
int sub_594190(int * a1, int a2)
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
    v5 = dword_ABED04; /*0x5941ad*/
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
            if ( (int16_t)v6 - v7 >= v5 || v7 - (int16_t)v6 >= v5 || v8 > dword_ABED08 ) /*0x594202*/
            {
              v2 = a1; /*0x5942af*/
            }
            else
            {
              if ( dword_ABED10 ) /*0x594210*/
              {
                v7 = (int16_t)v3; /*0x594215*/
                v9 = a2; /*0x59421e*/
                *((unsigned int *)dword_ABED10 + 20 * (int16_t)v6 + 20 * g_MapCellWidth * (int16_t)v3 + 14) = a2; /*0x59422a*/
              }
              else
              {
                v9 = a2; /*0x594230*/
              }
              v10 = (unsigned char *)(((CellCoord *)(&dword_87F7E8))->To_CellObj(v15)); /*0x59423e*/
              v11 = 0; /*0x594249*/
              if ( dword_ABDFA0 <= 0 ) /*0x59424d*/
              {
                v2 = a1; /*0x594298*/
                LABEL_19:
                v10->u32_11B = g_abs_10; /*0x59429c*/
                v5 = dword_ABED04; /*0x5942a7*/
              }
              else
              {
                v12 = (char *)dword_ABDF94; /*0x59424f*/
                while ( *(unsigned int *)(v12->vtable3 != v9 ) /*0x59425a*/
                {
                  ++v11; /*0x59425c*/
                  v12 += 4; /*0x59425d*/
                  if ( v11 >= dword_ABDFA0 ) /*0x594262*/
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
                v10->u32_11B = *(unsigned char *)(*((unsigned int *)dword_ABDF94 + v11) + 16); /*0x59428a*/
                v5 = dword_ABED04; /*0x594290*/
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
void FloodFillRandomMapTerrain(int a1, int a2, int a3)
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

  v31 = (unsigned int *)(a2);
  v4 = (unsigned int *)(operator new(0x50u)); /*0x59442e*/
  if ( v4 ) /*0x594438*/
    v5 = RandomMap::TerrainTileDataConstructor(v4, *(unsigned int *)(a1 + 36)); /*0x594445*/
  else
    v5 = 0; /*0x594449*/
  v6 = v5->__pad_008; /*0x59444b*/
  v27 = v5; /*0x594456*/
  v29 = v6; /*0x59445a*/
  VectorClass::CellConstructor(&v32, 0, 0); /*0x59445e*/
  v7 = *(int16_t *)(a1 + 36) + g_MapCellWidth * *(int16_t *)(a1 + 38); /*0x594478*/
  v32 = &vt_DynamicVectorClass; /*0x59447a*/
  v36 = 0; /*0x594482*/
  v37 = 20000; /*0x59448d*/
  *((unsigned int *)dword_ABED10 + 20 * v7 + 15) = v6; /*0x594498*/
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
      v11 = (unsigned int *)(Block);
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
            v11[v12] = (unsigned int *)(v11[v12 + 1]);
            if ( ++v12 >= v36 ) /*0x594529*/
              break; /*0x594529*/
            v11 = (unsigned int *)(Block); /*0x594517*/
          }
        }
      }
      *((unsigned int *)dword_ABED10 + 20 * (int16_t)v13 + 20 * g_MapCellWidth * (*((signed short *)(((unsigned char *)&(v13)) + 2))) + 14) = v6; /*0x59454a*/
      ++v5->q00C; /*0x594552*/
      v14 = v5[12]; /*0x594555*/
      if ( v5[14] < v14 /*0x594578*/
        || (v5->u32_35 || !v14)
        && (v15 = v5->u32_3C, v15 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(v5[10] + 8))(v5 + 10, v14 + v15, 0) )
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
        (*((unsigned short *)&(v28))) = v13 + (*((unsigned short *)&(((unsigned int *)(dword_89F688))[v19]))); /*0x5945ba*/
        (*(((unsigned short *)&(v28)) + 1)) = (*(((unsigned short *)&(v26)) + 1)) + (*(((unsigned short *)&(((unsigned int *)(dword_89F688))[v19])) + 1)); /*0x5945c3*/
        v30 = v28; /*0x5945d2*/
        v20 = (int16_t *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v30); /*0x5945d6*/
        v21 = v20[18]; /*0x5945db*/
        v22 = v20[19]; /*0x5945df*/
        v23 = v20 + 18; /*0x5945e3*/
        if ( v21 + v22 > dword_ABED04 /*0x59461d*/
          && v21 - v22 < dword_ABED04
          && v22 - v21 < dword_ABED04
          && v21 + v22 <= dword_ABED08 )
        {
          v24 = (char *)dword_ABED10 + 80 * v20[18] + 80 * g_MapCellWidth * v20[19]; /*0x594642*/
          if ( !*((unsigned int *)v20 + 19) /*0x594664*/
            && ((MapClass *)(&dword_87F7E8))->GetTileIndex(v23, v31, 0) == a3
            && v24->u32_3C == -1 )
          {
            *(&v24->u32_3C) = v29; /*0x59466a*/
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
        (*((unsigned short *)&(v13))) = v26; /*0x594592*/
      }
      v9 = v36; /*0x5946bd*/
      v10 = v36; /*0x5946c1*/
      if ( v36 <= 0 ) /*0x5946c5*/
        break; /*0x5946c5*/
      v5 = v27; /*0x5944f4*/
      v6 = v29; /*0x5944f8*/
    }
  }
  v32 = &vt_VectorClass; /*0x5946d2*/
  if ( Block ) /*0x5946dd*/
  {
    if ( v35 ) /*0x5946e5*/
      operator delete((Block)); /*0x5946e8*/
  }
}
}
// 0x594B50
namespace gamemd {
ObjectClass * * RandomMap_DistributeTerrain()
{

  double v1; // st7
  unsigned __int16 *v2; // eax
  int v3; // eax
  int v4; // ebx
  unsigned __int16 *v5; // ebp
  int i; // esi
  int v7; // ebx
  int v8; // edi
  int Vector4_field_0x04; // eax
  TileNode *v10; // ecx
  void *v11; // esi
  int j; // edi
  int v13; // esi
  unsigned int *v14; // ebp
  int v15; // eax
  size_t v16; // eax
  signed int k; // edi
  unsigned int *v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int *v22; // ecx
  int v23; // esi
  int v24; // edi
  int v25; // ebx
  int v26; // ebp
  int v27; // esi
  unsigned int *v28; // edi
  unsigned int v29; // eax
  int v30; // edi
  int n; // esi
  int ii; // esi
  ObjectClass *v34; // [esp+0h] [ebp-64h]
  ObjectClass *v35; // [esp+0h] [ebp-64h]
  int v36; // [esp+10h] [ebp-54h]
  __int64 m; // [esp+14h] [ebp-50h]
  unsigned __int16 *v38; // [esp+18h] [ebp-4Ch]
  void *Base; // [esp+24h] [ebp-40h] BYREF
  size_t NumOfElements; // [esp+28h] [ebp-3Ch]
  signed int v41; // [esp+2Ch] [ebp-38h]
  char v42; // [esp+30h] [ebp-34h]
  int v43; // [esp+34h] [ebp-30h]
  int v44[5]; // [esp+38h] [ebp-2Ch]
  _VectorClass_PAVMapRegionClass v45; // [esp+4Ch] [ebp-18h] BYREF
  int v46; // [esp+60h] [ebp-4h]

  v44[0] = 5; /*0x594b60*/
  v44[1] = 5; /*0x594b6a*/
  v44[2] = 5; /*0x594b6e*/
  v44[3] = 0; /*0x594b76*/
  v44[4] = 0; /*0x594b7a*/
  v1 = (double)dword_ABE15C * (double)dword_ABE158 * 0.03; /*0x594b7e*/
  if ( v1 < 400.0 ) /*0x594b91*/
    v1 = 400.0; /*0x594b95*/
  LOWORD(v2) = Math::RoundToInt(v1); /*0x594b9b*/
  v38 = v2; /*0x594ba5*/
  v3 = Terrain::ConnectivityGraph((Terrain *)&dword_87F7E8); /*0x594ba9*/
  HIWORD(v5) = 0; /*0x594bb4*/
  v4 = v44[dword_ABE014]; /*0x594bb6*/
  LOWORD(v5) = *(unsigned short *)(dword_87F800[v4] + 2 * v3); /*0x594bc1*/
  Map_Helper_58CE90(v34); /*0x594bc5*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x594bcf*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x594be2*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
  {
    if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)(i + 36)) /*0x594c2b*/
      && *(unsigned int *)&dword_ABED10[40 * *(__int16 *)(i + 36) + 28 + 40 * g_MapCellWidth * *(__int16 *)(i + 38)] == -1
      && !*(unsigned int *)(i + 76)
      && (unsigned __int16 *)MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (__int16 *)(i + 36), v4, 0) == v5 )
    {
      FloodFillRandomMapTerrain(i, v4, (int)v5); /*0x594c32*/
    }
  }
  v7 = dword_ABDFA0; /*0x594c4f*/
  v8 = dword_ABDFA0 - 1; /*0x594c51*/
  if ( dword_ABDFA0 - 1 >= 0 ) /*0x594c54*/
  {
    Vector4_field_0x04 = stru_ABDF90.Vector4_field_0x04; /*0x594c56*/
    do /*0x594c81*/
    {
      v10 = *(TileNode **)(Vector4_field_0x04 + 4 * v8); /*0x594c5b*/
      if ( *(unsigned int *)&v10[3] < (int)v38 ) /*0x594c65*/
      {
        v11 = *(void **)(Vector4_field_0x04 + 4 * v8); /*0x594c67*/
        if ( v10 ) /*0x594c6b*/
        {
          TileNode::Cleanup(v10); /*0x594c6d*/
          __3_YAXPAX_Z(v11); /*0x594c73*/
          Vector4_field_0x04 = stru_ABDF90.Vector4_field_0x04; /*0x594c78*/
        }
      }
      --v8; /*0x594c80*/
    }
    while ( v8 >= 0 ); /*0x594c81*/
  }
  TileSystem::Constructor((TileSystem *)&v45, 0, 0); /*0x594c89*/
  *(unsigned int *)v45.__pad_0 = &off_7ED858; /*0x594c92*/
  v46 = 10; /*0x594c9a*/
  Base = 0; /*0x594ca2*/
  NumOfElements = 0; /*0x594ca6*/
  v41 = 0; /*0x594caa*/
  v42 = 0; /*0x594cae*/
  v43 = 0; /*0x594cb3*/
  *(unsigned int *)v45.__tail_10 = 0; /*0x594cb7*/
  VectorClass_ptr_MapRegionClass::Remove(&v45); /*0x594cbb*/
  for ( j = 0; j < dword_ABDFA0; ++j ) /*0x594cc9*/
  {
    v13 = *(unsigned int *)(*(unsigned int *)(stru_ABDF90.Vector4_field_0x04 + 4 * j) + 8) /*0x594ce8*/
        + v7 * (500000 - *(unsigned int *)(*(unsigned int *)(stru_ABDF90.Vector4_field_0x04 + 4 * j) + 12));
    v14 = (unsigned int *)(stru_ABDF90.Vector4_field_0x04 + 4 * j); /*0x594cea*/
    v15 = v41; /*0x594cf0*/
    if ( (int)(NumOfElements + 1) > v41 ) /*0x594cf6*/
    {
      if ( !v41 ) /*0x594cfa*/
        v15 = 10; /*0x594cfc*/
      if ( !Map_Helper_5AD930((int)&Base, v15) ) /*0x594d06*/
        continue; /*0x594d06*/
    }
    *((unsigned int *)Base + 2 * NumOfElements) = v13; /*0x594d17*/
    *((unsigned int *)Base + 2 * NumOfElements + 1) = *v14; /*0x594d25*/
    v42 = 0; /*0x594d2e*/
    ++NumOfElements; /*0x594d33*/
  }
  v16 = NumOfElements; /*0x594d43*/
  for ( k = 0; k < (int)NumOfElements; ++k ) /*0x594d4b*/
  {
    if ( !v42 ) /*0x594d53*/
    {
      qsort(Base, v16, 8u, sub_5AD9C0); /*0x594d62*/
      v43 = 0; /*0x594d6a*/
      v42 = 1; /*0x594d6e*/
    }
    v18 = (char *)Base + 8 * k + 4; /*0x594d81*/
    if ( *(int *)v45.__tail_10 < v45.m_8 /*0x594da7*/
      || (BYTE1(v45.m_C) || !v45.m_8)
      && v46 > 0
      && (*(unsigned __int8 (**)(_VectorClass_PAVMapRegionClass *, int, unsigned int))(*(unsigned int *)v45.__pad_0 + 8))(
           &v45,
           v46 + v45.m_8,
           0) )
    {
      v19 = (*(unsigned int *)v45.__tail_10)++; /*0x594db6*/
      *(unsigned int *)(*(unsigned int *)&v45.m_1[3] + 4 * v19) = *v18; /*0x594dbf*/
    }
    v16 = NumOfElements; /*0x594dc2*/
  }
  v20 = *(unsigned int *)v45.__tail_10; /*0x594dcb*/
  v21 = 0; /*0x594dcf*/
  v36 = 0; /*0x594dd3*/
  if ( *(int *)v45.__tail_10 > 0 ) /*0x594dd7*/
  {
    v22 = *(int **)&v45.m_1[3]; /*0x594dd9*/
    v23 = *(unsigned int *)v45.__tail_10; /*0x594ddd*/
    do /*0x594dea*/
    {
      v24 = *v22++; /*0x594ddf*/
      v21 += *(unsigned int *)(v24 + 12); /*0x594de7*/
      --v23; /*0x594de9*/
    }
    while ( v23 ); /*0x594dea*/
    v36 = v21; /*0x594dec*/
  }
  v25 = 0; /*0x594df6*/
  v26 = 0; /*0x594df8*/
  v27 = 0; /*0x594dfa*/
  for ( m = (unsigned int)dword_ABE028; v27 < *(int *)v45.__tail_10; HIDWORD(m) = v26 ) /*0x594e06*/
  {
    v28 = *(unsigned int **)(*(unsigned int *)&v45.m_1[3] + 4 * v27); /*0x594e0c*/
    v25 += v28[3]; /*0x594e12*/
    if ( v27 == v20 - 1 ) /*0x594e1b*/
      v29 = m - v26; /*0x594e21*/
    else
      LOWORD(v29) = Math::RoundToInt((double)v25 / (double)v36 * (double)(int)m + 0.5 - (double)(int)(((m) >> 32) & 0xFFFFFFFFu)); /*0x594e3b*/
    v28[8] = v29; /*0x594e40*/
    v26 += v29; /*0x594e43*/
    v20 = *(unsigned int *)v45.__tail_10; /*0x594e45*/
    ++v27; /*0x594e49*/
  }
  v30 = 0; /*0x594e56*/
  for ( n = 0; n < *(int *)v45.__tail_10; ++n ) /*0x594e5c*/
  {
    PlaceRandomWaypoints(*(ObjectClass **)(*(unsigned int *)&v45.m_1[3] + 4 * n), v30); /*0x594e66*/
    v30 += *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v45.m_1[3] + 4 * n) + 32); /*0x594e79*/
  }
  if ( !dword_ABE014 ) /*0x594e87*/
  {
    for ( ii = 0; ii < *(int *)v45.__tail_10; ++ii ) /*0x594e91*/
    {
      if ( !*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v45.m_1[3] + 4 * ii) + 32) /*0x594ecc*/
        && (double)(unsigned int)Random::State((Random *)&stru_ABE890) * 2.328306437080797e-10 < 0.5 )
      {
        PlaceNeutralBuilding(*(TechnoClass **)(*(unsigned int *)&v45.m_1[3] + 4 * ii)); /*0x594ed5*/
      }
    }
  }
  ComputeMapCameraBounds(v35); /*0x594ee3*/
  __3_YAXPAX_Z(Base); /*0x594eed*/
  *(unsigned int *)v45.__pad_0 = &vt_VectorClass_MapRegionClass; /*0x594efb*/
  Base = 0; /*0x594f08*/
  NumOfElements = 0; /*0x594f0c*/
  v41 = 0; /*0x594f10*/
  v42 = 0; /*0x594f14*/
  v43 = 0; /*0x594f18*/
  if ( *(unsigned int *)&v45.m_1[3] && BYTE1(v45.m_C) ) /*0x594f25*/
    __3_YAXPAX_Z(*(void **)&v45.m_1[3]); /*0x594f28*/
  return 1; /*0x594f03*/

}
}
// 0x595CE0
namespace gamemd {
AbstractTypeClass * * CleanupRandomMapCache()
{

  struct _WIN32_FIND_DATAA *i; // esi
  HANDLE FirstFileA; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  void **Items; // eax
  char *v9; // ecx
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  FILETIME FileTime2; // [esp+10h] [ebp-20h] BYREF
  VectorClass v15; // [esp+18h] [ebp-18h] BYREF
  int j; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  Map_Cleanup(&v15, 0, 0); /*0x595cef*/
  v15.vfptr = &vt_DynamicVectorClass_WIN32_FIND_DATAA; /*0x595cf4*/
  v17 = 10; /*0x595cfc*/
  j = 0; /*0x595d09*/
  i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d19*/
  FirstFileA = FindFirstFileA((LPCSTR)&stru_82BA00.ChargerBarrels[2], i); /*0x595d27*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x595d2c*/
  {
    if ( j < v15.Capacity /*0x595d5f*/
      || (v15.IsAllocated || !v15.Capacity)
      && v17 > 0
      && (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v15.vfptr + 2))(&v15, v17 + v15.Capacity, 0) )
    {
      v3 = j++; /*0x595d6a*/
      *((unsigned int *)v15.Items + v3) = i; /*0x595d75*/
    }
    for ( i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d8f*/
          FindNextFileA(FirstFileA, i);
          i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u) )
    {
      if ( j < v15.Capacity /*0x595dc2*/
        || (v15.IsAllocated || !v15.Capacity)
        && v17 > 0
        && (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v15.vfptr + 2))(&v15, v17 + v15.Capacity, 0) )
      {
        v4 = j++; /*0x595dcd*/
        *((unsigned int *)v15.Items + v4) = i; /*0x595dd8*/
      }
    }
    FindClose(FirstFileA); /*0x595df3*/
  }
  __3_YAXPAX_Z(i); /*0x595dfa*/
  v5 = j; /*0x595dff*/
  if ( j <= 70 ) /*0x595e09*/
  {
LABEL_37:
    Items = (void **)v15.Items; /*0x595f3d*/
    goto LABEL_38; /*0x595f3d*/
  }
  while ( 2 ) /*0x595e1b*/
  {
    v6 = -1; /*0x595e1b*/
    v7 = 0; /*0x595e1e*/
    FileTime2.dwLowDateTime = -1; /*0x595e22*/
    FileTime2.dwHighDateTime = 0x7FFFFFFF; /*0x595e26*/
    if ( v5 <= 0 ) /*0x595e2e*/
      goto LABEL_37; /*0x595e2e*/
    Items = (void **)v15.Items; /*0x595e34*/
    do /*0x595ee3*/
    {
      v9 = (char *)Items[v7]; /*0x595e38*/
      if ( *((unsigned int *)v9 + 4) ) /*0x595e3b*/
      {
        if ( CompareFileTime((const FILETIME *)(v9 + 12), &FileTime2) == -1 ) /*0x595e50*/
        {
          Items = (void **)v15.Items; /*0x595e56*/
          v6 = v7; /*0x595e5a*/
          FileTime2 = *(FILETIME *)(*((unsigned int *)v15.Items + v7) + 12); /*0x595e62*/
          goto LABEL_30; /*0x595e70*/
        }
      }
      else if ( *((unsigned int *)v9 + 2) ) /*0x595e72*/
      {
        if ( CompareFileTime((const FILETIME *)(v9 + 4), &FileTime2) == -1 ) /*0x595e87*/
        {
          Items = (void **)v15.Items; /*0x595e89*/
          v6 = v7; /*0x595e8d*/
          FileTime2 = *(FILETIME *)(*((unsigned int *)v15.Items + v7) + 4); /*0x595e95*/
          goto LABEL_30; /*0x595ea3*/
        }
      }
      else
      {
        if ( !*((unsigned int *)v9 + 6) ) /*0x595eaa*/
          goto LABEL_30; /*0x595eaa*/
        if ( CompareFileTime((const FILETIME *)(v9 + 20), &FileTime2) == -1 ) /*0x595eba*/
        {
          Items = (void **)v15.Items; /*0x595ebc*/
          v6 = v7; /*0x595ec0*/
          FileTime2 = *(FILETIME *)(*((unsigned int *)v15.Items + v7) + 20); /*0x595ec8*/
          goto LABEL_30; /*0x595ed6*/
        }
      }
      Items = (void **)v15.Items; /*0x595ed8*/
LABEL_30:
      ++v7; /*0x595edc*/
    }
    while ( v7 < j ); /*0x595ee3*/
    if ( v6 != -1 ) /*0x595eec*/
    {
      if ( !DeleteFileA((LPCSTR)Items[v6] + 44) ) /*0x595ef5*/
        goto LABEL_37; /*0x595ef5*/
      __3_YAXPAX_Z(*((void **)v15.Items + v6)); /*0x595f03*/
      v10 = j; /*0x595f08*/
      if ( v6 < j ) /*0x595f11*/
      {
        v10 = j - 1; /*0x595f13*/
        v11 = v6; /*0x595f14*/
        for ( j = v10; v11 < j; v10 = j ) /*0x595f1c*/
        {
          ++v11; /*0x595f22*/
          *((unsigned int *)v15.Items + v11 - 1) = *((unsigned int *)v15.Items + v11); /*0x595f26*/
        }
      }
      v5 = v10; /*0x595f32*/
      if ( v10 <= 70 ) /*0x595f37*/
        goto LABEL_37; /*0x595f37*/
      continue; /*0x595f37*/
    }
    break;
  }
LABEL_38:
  if ( j ) /*0x595f4b*/
  {
    do /*0x595f85*/
    {
      __3_YAXPAX_Z(*Items); /*0x595f50*/
      v12 = j == 0; /*0x595f5c*/
      if ( j > 0 ) /*0x595f5e*/
      {
        v13 = 0; /*0x595f61*/
        v12 = j-- == 1; /*0x595f63*/
        if ( j > 0 ) /*0x595f69*/
        {
          do /*0x595f7d*/
          {
            ++v13; /*0x595f6f*/
            *((unsigned int *)v15.Items + v13 - 1) = *((unsigned int *)v15.Items + v13); /*0x595f73*/
          }
          while ( v13 < j ); /*0x595f7d*/
          v12 = j == 0; /*0x595f7f*/
        }
      }
      Items = (void **)v15.Items; /*0x595f81*/
    }
    while ( !v12 ); /*0x595f85*/
  }
  v15.vfptr = &vt_VectorClass_WIN32_FIND_DATAA; /*0x595f89*/
  if ( Items ) /*0x595f91*/
  {
    if ( v15.IsAllocated ) /*0x595f99*/
      __3_YAXPAX_Z(Items); /*0x595f9c*/
  }

}
}
// 0x595FB0
namespace gamemd {
unsigned int * GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)())
{

  unsigned int *WDTTerritoryClass; // eax
  char *v5; // esi
  ComPtr *v6; // eax
  ObjectClass *v7; // eax
  ComPtr *v8; // esi
  ComPtr *v9; // esi
  int v10; // eax
  MapResourceClass *v11; // eax
  TechnoTypeClass *v12; // ecx
  ComPtr *v13; // esi
  int v15; // [esp+0h] [ebp-270h]
  ObjectClass *v16; // [esp+0h] [ebp-270h]
  ComPtr v17; // [esp+10h] [ebp-260h] BYREF
  CCFileClass v18; // [esp+44h] [ebp-22Ch] BYREF
  int v19[3]; // [esp+9Ch] [ebp-1D4h] BYREF
  int v20; // [esp+A8h] [ebp-1C8h]
  char Destination[128]; // [esp+B0h] [ebp-1C0h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+130h] [ebp-140h] BYREF

  ComPtr::Constructor(&v17); /*0x595fc2*/
  *(unsigned int *)v17.__pad_0 = &vt_rc_ptr_WDTTerritory; /*0x595fd8*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x595fe5*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass((rc_ptr *)&v17.ComPtr_field_0x08, *(int *)dword_A8B240); /*0x595ff1*/
    ComPtr::Set(&v17, WDTTerritoryClass->u32_4); /*0x595ffe*/
    v17.ComPtr_field_0x08 = (int)&vt_rc_ptr_WDTTerritory; /*0x596007*/
    ComPtr::Release((ComPtr *)&v17.ComPtr_field_0x08); /*0x59600b*/
  }
  if ( v17.ComPtr_field_0x04 ) /*0x596016*/
    dword_ABE028 = 4; /*0x596018*/
  v5 = GameConfig::ComputeCRC(); /*0x596023*/
  memset(Destination, 0, sizeof(Destination)); /*0x596033*/
  strncpy(Destination, aRmcache, 0x80u); /*0x596047*/
  strncat(Destination, v5, 0x80u); /*0x59605a*/
  __3_YAXPAX_Z(v5); /*0x596060*/
  strncat(Destination, aMmp, 0x80u); /*0x596077*/
  CCFileClass::Construct(&v18, Destination); /*0x59608b*/
  if ( (unsigned __int8)CCFileClass::Open(&v18, 0) ) /*0x596097*/
  {
    v6 = dword_ABE154; /*0x5960a4*/
    if ( !dword_ABE154 ) /*0x5960ab*/
    {
      v7 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5960af*/
      if ( v7 ) /*0x5960b9*/
        v6 = (ComPtr *)unknown_libname_27(v7); /*0x5960bd*/
      else
        v6 = 0; /*0x5960c4*/
      dword_ABE154 = v6; /*0x5960c6*/
    }
    if ( Surface::LoadToSurfaceSHP((Surface *)v6, Destination) ) /*0x5960d5*/
    {
      RawFileClass::Construct((BufferIOFileClass *)&v17.ComPtr_field_0x10, (int)ExistingFileName); /*0x5960e7*/
      CompressScreenshot(&v17.ComPtr_field_0x10, *(int **)dword_ABE154->__pad_0, &FileSystem_TEMPERAT_PAL); /*0x5960fc*/
      v8 = dword_ABE154; /*0x596101*/
      if ( dword_ABE154 ) /*0x596109*/
      {
        ComPtr::Dtor(dword_ABE154); /*0x59610d*/
        __3_YAXPAX_Z(v8); /*0x596113*/
      }
      dword_ABE154 = 0; /*0x59611f*/
      RawFileClass::Dtor((BufferIOFileClass *)&v17.ComPtr_field_0x10); /*0x596125*/
      goto LABEL_39; /*0x59612a*/
    }
    v9 = dword_ABE154; /*0x59612f*/
    if ( dword_ABE154 ) /*0x596137*/
    {
      ComPtr::Dtor(dword_ABE154); /*0x59613b*/
      __3_YAXPAX_Z(v9); /*0x596141*/
    }
    dword_ABE154 = 0; /*0x596149*/
  }
  off_82AF14 = a2; /*0x596154*/
  dword_ABDFEC = (int)a2; /*0x59615d*/
  if ( dword_ABE04C == -1 ) /*0x596163*/
    dword_ABE04C = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x596175*/
  RandomMap::Generate((RandomMap *)&stru_ABDFD8, 1, hDlg); /*0x596182*/
  MiniMap::Render((MiniMap *)dword_ABE154); /*0x59618d*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5961a2*/
    MapPreview::Upload((MapPreview *)dword_ABE154); /*0x5961aa*/
  if ( dword_ABE150 ) /*0x5961b7*/
    (**(void (***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5961bd*/
  v10 = __2_YAPAXI_Z(0x178u); /*0x5961c4*/
  if ( v10 ) /*0x5961ce*/
    v11 = (MapResourceClass *)MapSeedClass::Constructor(v10); /*0x5961d2*/
  else
    v11 = 0; /*0x5961d9*/
  dword_ABE150 = (int)v11; /*0x5961e7*/
  qmemcpy(v11, &stru_ABDFD8, 0x178u); /*0x5961ec*/
  ScenarioClass::SetFileName((char *)dword_A8B230, aRandommap); /*0x5961f9*/
  LOBYTE(v12) = 0; /*0x5961fe*/
  ScreenSaver::Process(v12, v15); /*0x596200*/
  v13 = dword_ABE154; /*0x596205*/
  if ( dword_ABE154 ) /*0x59620f*/
  {
    if ( *(unsigned int *)dword_ABE154->__pad_0 ) /*0x596215*/
    {
      RawFileClass::Construct((BufferIOFileClass *)&v17.ComPtr_field_0x10, (int)ExistingFileName); /*0x596222*/
      CompressScreenshot(&v17.ComPtr_field_0x10, *(int **)dword_ABE154->__pad_0, &FileSystem_TEMPERAT_PAL); /*0x596237*/
      if ( FindFirstFileA(PathName, &FindFileData) == (HANDLE)-1 ) /*0x596252*/
        CreateDirectoryA(PathName, 0); /*0x59625a*/
      CopyFileA(ExistingFileName, Destination, 0); /*0x59626e*/
      CleanupRandomMapCache(v16); /*0x596274*/
      RawFileClass::Dtor((BufferIOFileClass *)&v17.ComPtr_field_0x10); /*0x59627d*/
      v13 = dword_ABE154; /*0x596282*/
    }
    if ( v13 ) /*0x59628a*/
    {
      ComPtr::Dtor(v13); /*0x59628e*/
      __3_YAXPAX_Z(v13); /*0x596294*/
    }
    dword_ABE154 = 0; /*0x59629c*/
  }
  if ( dword_ABE150 ) /*0x5962aa*/
  {
    (**(void (***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5962b0*/
    dword_ABE150 = 0; /*0x5962b2*/
  }
LABEL_39:
  *(unsigned int *)v18.__tail_0 = &vt_CCFileClass; /*0x5962b8*/
  v20 = 0; /*0x5962c7*/
  Vector::Clear((int)v19); /*0x5962ce*/
  *(unsigned int *)v18.__tail_0 = &off_7E1668; /*0x5962d7*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v18); /*0x5962df*/
  *(unsigned int *)v17.__pad_0 = &vt_rc_ptr_WDTTerritory; /*0x5962e8*/
  return ComPtr::Release(&v17); /*0x5962f5*/

}
}
// 0x59A8F0
namespace gamemd {
AbstractClass * * ArrangeBuildingPlacementGrid(int a1, int a2, MapResourceClass * aP2)
{

  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int *v7; // ebp
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int *v22; // edx
  bool v23; // zf
  double v24; // [esp+0h] [ebp-8Ch]
  int v25; // [esp+18h] [ebp-74h]
  int v26; // [esp+1Ch] [ebp-70h]
  __int64 v27; // [esp+20h] [ebp-6Ch]
  int v28; // [esp+28h] [ebp-64h]
  int v29; // [esp+2Ch] [ebp-60h]
  __int64 v30; // [esp+30h] [ebp-5Ch]
  int v31; // [esp+30h] [ebp-5Ch]
  int v32; // [esp+38h] [ebp-54h]
  int v33; // [esp+3Ch] [ebp-50h]
  int v34; // [esp+40h] [ebp-4Ch]
  int j; // [esp+40h] [ebp-4Ch]
  __int64 v36; // [esp+44h] [ebp-48h]
  int v37; // [esp+44h] [ebp-48h]
  int v38; // [esp+48h] [ebp-44h]
  __int64 v39; // [esp+4Ch] [ebp-40h]
  VectorClass v41; // [esp+5Ch] [ebp-30h] BYREF
  int i; // [esp+6Ch] [ebp-20h]
  int v43; // [esp+70h] [ebp-1Ch]
  VectorClass v44; // [esp+74h] [ebp-18h] BYREF
  int v45; // [esp+84h] [ebp-8h]
  int v46; // [esp+88h] [ebp-4h]

  __asm { fild [esp+74h+arg_4] } /*0x59a8f3*/
  __asm { fstp [esp+8Ch+var_8C]; double }
  Math::Sqrt(v24); /*0x59a901*/
  LOWORD(v4) = Math::RoundToInt(a1); /*0x59a909*/
  v34 = v4; /*0x59a91c*/
  if ( v4 * v4 == aP2 ) /*0x59a920*/
  {
    v5 = v4; /*0x59a922*/
    v28 = v4; /*0x59a924*/
  }
  else
  {
    v28 = v4 + 1; /*0x59a92d*/
    v5 = v4 + 1; /*0x59a931*/
  }
  if ( v4 * v5 < aP2 ) /*0x59a93a*/
  {
    v25 = v5; /*0x59a944*/
    v6 = v5; /*0x59a948*/
  }
  else
  {
    v6 = v4; /*0x59a93c*/
    v25 = v4; /*0x59a93e*/
  }
  v7 = a4; /*0x59a94a*/
  v26 = a4[2] / v5; /*0x59a95c*/
  v27 = (unsigned int)(a4[3] / v5); /*0x59a966*/
  v32 = 0; /*0x59a96c*/
  v33 = 0; /*0x59a970*/
  v29 = 0; /*0x59a978*/
  v36 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x59a981*/
  __asm /*0x59a98d*/
  {
    fild [esp+84h+var_48]
    fmul ds:dbl_7ED898
    fcomp ds:dbl_7E1738
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x59a9a2*/
  {
    v29 = v27; /*0x59a9ae*/
    v26 = a4[2] / v6; /*0x59a9b2*/
    v32 = v26; /*0x59a9b6*/
  }
  else
  {
    (v27) = ((v27) & 0xFFFFFFFFull) | ((unsigned long long)((v26) & 0xFFFFFFFFull) << 32); /*0x59a9c6*/
    LODWORD(v27) = a4[3] / v6; /*0x59a9ca*/
    v33 = v27; /*0x59a9ce*/
  }
  v9 = v5 * v6 - aP2; /*0x59a9db*/
  v10 = 0; /*0x59a9dd*/
  v38 = a4[1]; /*0x59a9df*/
  v37 = *a4; /*0x59a9e9*/
  VectorClass::Construct(&v44, 0, 0); /*0x59a9ed*/
  v44.vfptr = (int)&vt_DynamicVectorClass_int; /*0x59a9f8*/
  v46 = 10; /*0x59aa00*/
  v45 = 0; /*0x59aa0b*/
  VectorClass::Construct(&v41, 0, 0); /*0x59aa12*/
  v11 = 0; /*0x59aa1b*/
  v41.vfptr = (int)&vt_DynamicVectorClass_int; /*0x59aa1f*/
  v43 = 10; /*0x59aa27*/
  i = 0; /*0x59aa2f*/
  if ( v25 > 0 ) /*0x59aa33*/
  {
    do /*0x59aacf*/
    {
      if ( v45 < v44.Capacity /*0x59aa69*/
        || (v44.IsAllocated[0] || !v44.Capacity)
        && v46 > 0
        && (*(unsigned __int8 (**)(VectorClass *, int, unsigned int))(v44.vfptr + 8))(&v44, v46 + v44.Capacity, 0) )
      {
        v12 = v45++; /*0x59aa74*/
        *(unsigned int *)(v44.Items + 4 * v12) = v5; /*0x59aa7f*/
      }
      if ( i < v41.Capacity /*0x59aaaf*/
        || (v41.IsAllocated[0] || !v41.Capacity)
        && v43 > 0
        && (*(unsigned __int8 (**)(VectorClass *, int, unsigned int))(v41.vfptr + 8))(&v41, v43 + v41.Capacity, 0) )
      {
        v13 = i++; /*0x59aaba*/
        *(unsigned int *)(v41.Items + 4 * v13) = v10; /*0x59aac5*/
      }
      ++v10; /*0x59aacc*/
    }
    while ( v10 < v25 ); /*0x59aacf*/
    v11 = i; /*0x59aad5*/
  }
  if ( v9 > 0 ) /*0x59aadb*/
  {
    v14 = v9; /*0x59aae1*/
    do /*0x59ab62*/
    {
      v15 = v11 - 1; /*0x59aae3*/
      v30 = (unsigned int)v11; /*0x59aaf1*/
      __asm /*0x59aaf5*/
      {
        fild [esp+84h+var_5C]
        fstp [esp+84h+var_38]
      }
      do /*0x59ab28*/
      {
        v39 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x59ab07*/
        __asm /*0x59ab13*/
        {
          fild [esp+84h+var_40]
          fmul [esp+84h+var_38]
          fmul ds:dbl_7ED898
        }
        LOWORD(v16) = Math::RoundToInt(a1); /*0x59ab21*/
      }
      while ( v16 > v15 ); /*0x59ab28*/
      *(unsigned int *)(v44.Items + 4 * *(unsigned int *)(v41.Items + 4 * v16)) = v34; /*0x59ab39*/
      v11 = i; /*0x59ab3c*/
      if ( v16 < i ) /*0x59ab42*/
      {
        v11 = i - 1; /*0x59ab44*/
        for ( i = v11; v16 < i; v11 = i ) /*0x59ab4b*/
        {
          ++v16; /*0x59ab51*/
          *(unsigned int *)(v41.Items + 4 * v16 - 4) = *(unsigned int *)(v41.Items + 4 * v16); /*0x59ab55*/
        }
      }
      --v14; /*0x59ab61*/
    }
    while ( v14 ); /*0x59ab62*/
  }
  v17 = 0; /*0x59ab6c*/
  for ( j = 0; v17 < v25; j = v17 ) /*0x59ab74*/
  {
    v18 = *(unsigned int *)(v44.Items + 4 * v17); /*0x59ab85*/
    if ( v18 < v5 ) /*0x59ab8a*/
    {
      if ( (int)(((v27) >> 32) & 0xFFFFFFFFu) <= 0 ) /*0x59ab92*/
        v38 += (int)v27 / 2; /*0x59abb8*/
      else
        v37 += v26 / 2; /*0x59aba3*/
    }
    if ( v18 > 0 ) /*0x59abbe*/
    {
      v31 = *(unsigned int *)(v44.Items + 4 * v17); /*0x59abc8*/
      do /*0x59ac53*/
      {
        v19 = *(unsigned int *)(a2 + 8); /*0x59abda*/
        if ( *(unsigned int *)(a2 + 16) < v19 /*0x59ac02*/
          || (*(unsigned char *)(a2 + 13) || !v19)
          && (v20 = *(unsigned int *)(a2 + 20), v20 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)a2 + 8))(a2, v19 + v20, 0) )
        {
          v21 = *(unsigned int *)(a2 + 16); /*0x59ac09*/
          *(unsigned int *)(a2 + 16) = v21 + 1; /*0x59ac0f*/
          v22 = (unsigned int *)(*(unsigned int *)(a2 + 4) + 16 * v21); /*0x59ac1a*/
          *v22 = v37 + 2; /*0x59ac23*/
          v22[1] = v38 + 2; /*0x59ac25*/
          v22[2] = v26 - 4; /*0x59ac28*/
          v22[3] = v27 - 4; /*0x59ac2b*/
        }
        v37 += (((v27) >> 32) & 0xFFFFFFFFu); /*0x59ac40*/
        v23 = v31 == 1; /*0x59ac4a*/
        v38 += v29; /*0x59ac4b*/
        --v31; /*0x59ac4f*/
      }
      while ( !v23 ); /*0x59ac53*/
      v5 = v28; /*0x59ac59*/
      v7 = a4; /*0x59ac5d*/
      v17 = j; /*0x59ac64*/
    }
    v37 += v32; /*0x59ac7a*/
    v38 += v33; /*0x59ac86*/
    if ( (int)(((v27) >> 32) & 0xFFFFFFFFu) <= 0 ) /*0x59ac8a*/
      v38 = v7[1]; /*0x59ac98*/
    else
      v37 = *v7; /*0x59ac8f*/
    ++v17; /*0x59aca0*/
  }
  v41.vfptr = (int)&vt_VectorClass_int; /*0x59acb8*/
  if ( v41.Items && v41.IsAllocated[0] ) /*0x59acc4*/
  {
    __3_YAXPAX_Z((void *)v41.Items); /*0x59acc7*/
    v41.Items = 0; /*0x59accf*/
  }
  v44.vfptr = (int)&vt_VectorClass_int; /*0x59acdb*/
  v41.IsAllocated[0] = 0; /*0x59ace2*/
  v41.Capacity = 0; /*0x59ace9*/
  if ( v44.Items ) /*0x59acf2*/
  {
    if ( v44.IsAllocated[0] ) /*0x59acfa*/
      __3_YAXPAX_Z((void *)v44.Items); /*0x59acfd*/
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
  __int64 v10; // [esp+8h] [ebp-18h]
  __int64 v11; // [esp+10h] [ebp-10h]
  __int64 v12; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59c63a*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59c644*/
  for ( i = result; result; i = result ) /*0x59c64f*/
  {
    if ( *(unsigned int *)(i + 56) == g_CellPassabilityLUT && !*(unsigned char *)(i + 282) ) /*0x59c668*/
    {
      NeighbourContent = Cell::GetNeighbourContent((unsigned int *)i, 2u); /*0x59c681*/
      v3 = Cell::GetNeighbourContent((unsigned int *)i, 4u); /*0x59c68c*/
      v4 = Cell::GetNeighbourContent((unsigned int *)i, 3u); /*0x59c68e*/
      if ( NeighbourContent->Cell_field_0x38 != g_CellPassabilityLUT /*0x59c6ce*/
        || NeighbourContent->u32_11A
        || v3[14] != g_CellPassabilityLUT
        || *((unsigned char *)v3 + 282)
        || v4->Cell_field_0x38 != g_CellPassabilityLUT
        || v4->u32_11A )
      {
        goto LABEL_25; /*0x59c6ce*/
      }
      do /*0x59c704*/
      {
        v10 = (unsigned int)Random::State(&stru_ABE890); /*0x59c6e4*/
        v5 = Math::RoundToInt((double)v10 * 0.000000002328306437080797 + 1.0); /*0x59c6fc*/
      }
      while ( v5 > 0xA ); /*0x59c704*/
      if ( v5 == 1 ) /*0x59c709*/
      {
LABEL_25:
        do /*0x59c7c5*/
        {
          v12 = (unsigned int)Random::State(&stru_ABE890); /*0x59c7a6*/
          v9 = Math::RoundToInt((double)v12 * 0.00000004679895938532403); /*0x59c7bd*/
        }
        while ( v9 > 0xC8 ); /*0x59c7c5*/
        *(unsigned int *)(i + 56) = v9 / 0x28 + g_CellPassabilityLUT + 8; /*0x59c7da*/
      }
      else
      {
        do /*0x59c738*/
        {
          v11 = (unsigned int)Random::State(&stru_ABE890); /*0x59c719*/
          v6 = Math::RoundToInt((double)v11 * 0.0000000563450157773553); /*0x59c72b*/
        }
        while ( (unsigned int)v6 > 0xF1 ); /*0x59c738*/
        if ( v6 < 240 ) /*0x59c740*/
          v7 = v6 / 40; /*0x59c75c*/
        else
          v7 = 247 - v6; /*0x59c747*/
        if ( dword_ABED10 ) /*0x59c769*/
          v8 = *((unsigned int *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14); /*0x59c786*/
        else
          v8 = -1; /*0x59c76b*/
        PlaceMapSeedClassBuildings(v7 + g_CellPassabilityLUT, (unsigned short *)(i + 36), v8, -1); /*0x59c795*/
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59c7e2*/
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
  ObjectClass *v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x5942f5*/
  v12 = this; /*0x5942f9*/
  v3 = a2[1]; /*0x5942fd*/
  result = v3 + a2[3]; /*0x594303*/
  v10 = v3; /*0x594305*/
  if ( v3 < result ) /*0x59430b*/
  {
    v5 = g_MissionQueueFrame.localVariables[160]; /*0x594311*/
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
            if ( (int16_t)v6 - v7 < v5 && v7 - (int16_t)v6 < v5 && v8 <= g_MissionQueueFrame.localVariables[161] ) /*0x594356*/
            {
              if ( g_MissionQueueFrame.localVariables[163] ) /*0x594360*/
                *(unsigned int *)(80 * ((int16_t)v6 + g_MapCellWidth * v7) + g_MissionQueueFrame.localVariables[163] + 56) = v12->vfptr2; /*0x59437a*/
              v9 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v11); /*0x594388*/
              v9->u32_11B = v12->uniqueId; /*0x594394*/
              v5 = g_MissionQueueFrame.localVariables[160]; /*0x59439a*/
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
int j_Options::j_Options_GetValue(const char ** dwNewLong)
{
  return Options::PrepareSaveLoadDlg((Options *)dwNewLong);
}
}
// 0x598000
namespace gamemd {  // G42.18 ns repair
double sub_598000()
{
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10; /*0x598023*/
}
}  // G42.18 ns repair
// 0x5980A0
namespace gamemd {
unsigned int * E4Recv_5980A0::sub_5980A0(int a2)
{
  this->M8 = 0; /*0x5980a4*/
  *(unsigned char *)this = 0; /*0x5980a7*/
  this->M12 = 0; /*0x5980a9*/
  this->M16 = a2; /*0x5980b0*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 10.0 + 0.5 * v6 - (double)a3 * 0.02; /*0x59d503*/
}
} // namespace gamemd
