// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5942F0_e4.hpp"
#include "e4/classes/E4Recv_5980A0_e4.hpp"

// 0x5904B0
namespace gamemd {
char PlaceCabhutMap(FootClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall PlaceCabhutMap(FootClass *aP0)
{
  FootClass *v1; // ebp
  int v2; // ebx
  int v3; // edi
  Random *v4; // eax
  Random *v5; // esi
  void *v7; // eax
  AbstractClass *Owner; // edi
  FootClass *IndexByName; // ebx
  int v10; // eax
  BuildingClass *v11; // eax
  int v12; // edx
  int v13; // edx
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = aP0; /*0x5904b5*/
  v2 = *(_DWORD *)&aP0->__pad_0[4]; /*0x5904bb*/
  if ( v2 >= *(_DWORD *)&aP0->__pad_0[12] + v2 + 1 ) /*0x5904c7*/
    return 0; /*0x59052b*/
  while ( 1 ) /*0x5904c9*/
  {
    v3 = *(_DWORD *)v1->__pad_0; /*0x5904c9*/
    if ( *(_DWORD *)v1->__pad_0 < *(_DWORD *)&v1->__pad_0[8] + *(_DWORD *)v1->__pad_0 + 1 ) /*0x5904d5*/
      break; /*0x5904d5*/
LABEL_7:
    if ( ++v2 >= *(_DWORD *)&v1->__pad_0[12] + *(_DWORD *)&v1->__pad_0[4] + 1 ) /*0x590529*/
      return 0; /*0x590529*/
  }
  while ( 1 ) /*0x5904db*/
  {
    LOWORD(aP0) = v3; /*0x5904db*/
    HIWORD(aP0) = v2; /*0x5904e6*/
    v4 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP0); /*0x5904eb*/
    v5 = v4; /*0x5904f0*/
    if ( v4[4].Random_field_0x04 == -1 && Cell::IsEmpty(v4) && !v5[14].Random_field_0x04 ) /*0x590503*/
      break; /*0x590503*/
    if ( ++v3 >= *(_DWORD *)&v1->__pad_0[8] + *(_DWORD *)v1->__pad_0 + 1 ) /*0x59051a*/
      goto LABEL_7; /*0x59051a*/
  }
  v7 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x59053c*/
  Owner = (AbstractClass *)HouseClass::FindOwner(v7); /*0x59054d*/
  IndexByName = (FootClass *)BuildingTypeClass::FindIndexByName(aCabhut); /*0x590559*/
  v10 = __2_YAPAXI_Z(0x720u); /*0x59055b*/
  if ( v10 ) /*0x590565*/
    v11 = BuildingClass::Construct(v10, *((AbstractClass **)g_TriggerTypeCount + (_DWORD)IndexByName), Owner); /*0x590574*/
  else
    v11 = 0; /*0x59057b*/
  v12 = SLOWORD(v5[2].Random_field_0x04) << 8; /*0x590588*/
  v14[1] = (SHIWORD(v5[2].Random_field_0x04) << 8) + 128; /*0x590597*/
  v14[0] = v12 + 128; /*0x59059f*/
  v13 = *(_DWORD *)v11->__pad_0; /*0x5905a3*/
  v14[2] = 0; /*0x5905aa*/
  (*(void (__thiscall **)(BuildingClass *, _DWORD *, _DWORD))(v13 + 216))(v11, v14, 0); /*0x5905b2*/
  return 1; /*0x59052b*/
}
}
} // namespace gamemd

// 0x594190
namespace gamemd {
int sub_594190(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_594190(int *a1, int a2)
{
  int *v2; // ebp
  int v3; // esi
  int result; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // ebp
  _BYTE *v10; // eax
  int v11; // ecx
  char *v12; // esi
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]
  __int16 v15[2]; // [esp+10h] [ebp-4h] BYREF

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
        v7 = (__int16)v3; /*0x5941c9*/
        do /*0x5942c2*/
        {
          v15[0] = v6; /*0x5941cf*/
          v15[1] = v3; /*0x5941d4*/
          v8 = v7 + (__int16)v6; /*0x5941d9*/
          if ( v8 > v5 ) /*0x5941de*/
          {
            if ( (__int16)v6 - v7 >= v5 || v7 - (__int16)v6 >= v5 || v8 > g_MapCellCount ) /*0x594202*/
            {
              v2 = a1; /*0x5942af*/
            }
            else
            {
              if ( g_MapTileArray ) /*0x594210*/
              {
                v7 = (__int16)v3; /*0x594215*/
                v9 = a2; /*0x59421e*/
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v6 + 20 * unk_89C2DC * (__int16)v3 + 14) = a2; /*0x59422a*/
              }
              else
              {
                v9 = a2; /*0x594230*/
              }
              v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v15); /*0x59423e*/
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
                while ( *(_DWORD *)(*(_DWORD *)v12 + 8) != v9 ) /*0x59425a*/
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
                v10[283] = *(_BYTE *)(*((_DWORD *)g_RandomMap_TerrainState + v11) + 16); /*0x59428a*/
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
} // namespace gamemd

// 0x594420
namespace gamemd {
void FloodFillRandomMapTerrain(int a1, IUnknown * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall FloodFillRandomMapTerrain(int a1, IUnknown *a2, int a3)
{
  _DWORD *v4; // eax
  ObjectClass *v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  void *nextObject; // eax
  int v15; // ecx
  void *attachedBomb; // eax
  int fallRate; // edx
  int v18; // ebx
  int v19; // eax
  __int16 *v20; // eax
  int v21; // edx
  int v22; // ecx
  IUnknown *v23; // esi
  char *v24; // edi
  int v25; // eax
  int v26; // [esp+10h] [ebp-30h]
  ObjectClass *v27; // [esp+14h] [ebp-2Ch]
  IUnknown *v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  IUnknown *v30; // [esp+20h] [ebp-20h] BYREF
  IUnknown *aP2; // [esp+24h] [ebp-1Ch]
  void **v32; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  char v35; // [esp+35h] [ebp-Bh]
  int v36; // [esp+38h] [ebp-8h]
  int v37; // [esp+3Ch] [ebp-4h]

  aP2 = a2; /*0x594426*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x50u); /*0x59442e*/
  if ( v4 ) /*0x594438*/
    v5 = (ObjectClass *)RandomMap::TerrainTileDataConstructor(v4, *(_DWORD *)(a1 + 36)); /*0x594445*/
  else
    v5 = 0; /*0x594449*/
  v6 = *(_DWORD *)&v5->__pad_0[8]; /*0x59444b*/
  v27 = v5; /*0x594456*/
  v29 = v6; /*0x59445a*/
  VectorClass::CellConstructor(&v32, 0, 0); /*0x59445e*/
  v7 = *(__int16 *)(a1 + 36) + unk_89C2DC * *(__int16 *)(a1 + 38); /*0x594478*/
  v32 = &vt_DynamicVectorClass_Cell; /*0x59447a*/
  v36 = 0; /*0x594482*/
  v37 = 20000; /*0x59448d*/
  *((_DWORD *)g_MapTileArray + 20 * v7 + 15) = v6; /*0x594498*/
  if ( v36 < v34 /*0x5944c7*/
    || (v35 || !v34) && v37 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v37 + v34, 0) )
  {
    v8 = v36++; /*0x5944d6*/
    *((_DWORD *)Block + v8) = *(_DWORD *)(a1 + 36); /*0x5944e0*/
  }
  v9 = v36; /*0x5944e3*/
  v10 = v36; /*0x5944e7*/
  if ( v36 > 0 ) /*0x5944eb*/
  {
    while ( 1 ) /*0x5944fc*/
    {
      v11 = Block; /*0x5944fc*/
      v12 = v10 - 1; /*0x594500*/
      v13 = *((_DWORD *)Block + v12); /*0x594503*/
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
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v13 + 20 * unk_89C2DC * SHIWORD(v13) + 14) = v6; /*0x59454a*/
      ++*(_DWORD *)&v5->__pad_0[12]; /*0x594552*/
      nextObject = v5->nextObject; /*0x594555*/
      if ( (int)v5->attachedBomb < (int)nextObject /*0x594578*/
        || (BYTE1(v5->attachedTag) || !nextObject)
        && (v15 = v5->ambientSoundController[0], v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v5->owningHouseIndex + 8))(
             &v5->owningHouseIndex,
             (int)nextObject + v15,
             0) )
      {
        attachedBomb = v5->attachedBomb; /*0x59457f*/
        fallRate = v5->fallRate; /*0x594582*/
        v5->attachedBomb = (char *)attachedBomb + 1; /*0x594588*/
        *(_DWORD *)(fallRate + 4 * (_DWORD)attachedBomb) = v13; /*0x59458b*/
      }
      v18 = 0; /*0x59458e*/
      while ( 1 ) /*0x594598*/
      {
        v19 = v18 & 7; /*0x594598*/
        LOWORD(v28) = v13 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v19); /*0x5945ba*/
        HIWORD(v28) = HIWORD(v26) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v19); /*0x5945c3*/
        v30 = v28; /*0x5945d2*/
        v20 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x5945d6*/
        v21 = v20[18]; /*0x5945db*/
        v22 = v20[19]; /*0x5945df*/
        v23 = (IUnknown *)(v20 + 18); /*0x5945e3*/
        if ( v21 + v22 > g_MapCellHeight_Value /*0x59461d*/
          && v21 - v22 < g_MapCellHeight_Value
          && v22 - v21 < g_MapCellHeight_Value
          && v21 + v22 <= g_MapCellCount )
        {
          v24 = (char *)g_MapTileArray + 80 * v20[18] + 80 * unk_89C2DC * v20[19]; /*0x594642*/
          if ( !*((_DWORD *)v20 + 19) /*0x594664*/
            && MapClass::GetTileIndex(&MEMORY[0x87F7E8], v23, aP2, 0) == a3
            && *((_DWORD *)v24 + 15) == -1 )
          {
            *((_DWORD *)v24 + 15) = v29; /*0x59466a*/
            if ( v36 < v34 /*0x594698*/
              || (v35 || !v34)
              && v37 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v37 + v34, 0) )
            {
              v25 = v36++; /*0x5946a7*/
              *((_DWORD *)Block + v25) = v23->field_0; /*0x5946b0*/
            }
          }
        }
        if ( ++v18 >= 8 ) /*0x5946b7*/
          break; /*0x5946b7*/
        LOWORD(v13) = v26; /*0x594592*/
      }
      v9 = v36; /*0x5946bd*/
      v10 = v36; /*0x5946c1*/
      if ( v36 <= 0 ) /*0x5946c5*/
        break; /*0x5946c5*/
      v5 = v27; /*0x5944f4*/
      v6 = v29; /*0x5944f8*/
    }
  }
  v32 = &vt_VectorClass_Cell; /*0x5946d2*/
  if ( Block ) /*0x5946dd*/
  {
    if ( v35 ) /*0x5946e5*/
      __3_YAXPAX_Z(Block); /*0x5946e8*/
  }
}
}
} // namespace gamemd

// 0x594B50
namespace gamemd {
char RandomMap_DistributeTerrain()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char RandomMap_DistributeTerrain()
{
  double v0; // st7
  int v1; // eax
  int v2; // ebx
  int v3; // ebp
  int i; // esi
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  void *v9; // esi
  int j; // edi
  int v11; // esi
  _DWORD *v12; // ebp
  size_t v13; // eax
  signed int k; // edi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int *v18; // ecx
  int v19; // esi
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
  __int64 m; // [esp+14h] [ebp-50h]
  int v32; // [esp+18h] [ebp-4Ch]
  signed int NumOfElements; // [esp+28h] [ebp-3Ch]
  char v34; // [esp+30h] [ebp-34h]
  _DWORD v35[5]; // [esp+38h] [ebp-2Ch]
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
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
  v1 = Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x594ba9*/
  HIWORD(v3) = 0; /*0x594bb4*/
  v2 = v35[dword_ABE014]; /*0x594bb6*/
  LOWORD(v3) = *(_WORD *)(MEMORY[0x87F800][v2] + 2 * v1); /*0x594bc1*/
  Map_Helper_58CE90(); /*0x594bc5*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x594bcf*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x594be2*/
  {
    if ( MapSeed::IsCellInBounds((__int16 *)(i + 36)) /*0x594c2b*/
      && *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14) == -1
      && !*(_DWORD *)(i + 76)
      && MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)(i + 36), v2, 0) == v3 )
    {
      FloodFillRandomMapTerrain(v3); /*0x594c32*/
    }
  }
  v5 = g_RandomMap_TileData; /*0x594c4f*/
  v6 = g_RandomMap_TileData - 1; /*0x594c51*/
  if ( g_RandomMap_TileData - 1 >= 0 ) /*0x594c54*/
  {
    v7 = g_RandomMap_TerrainState; /*0x594c56*/
    do /*0x594c81*/
    {
      v8 = (_DWORD *)v7[v6]; /*0x594c5b*/
      if ( v8[3] < v32 ) /*0x594c65*/
      {
        v9 = (void *)v7[v6]; /*0x594c67*/
        if ( v8 ) /*0x594c6b*/
        {
          TileNode::Cleanup(v8); /*0x594c6d*/
          __3_YAXPAX_Z(v9); /*0x594c73*/
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
    v11 = *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + j) + 8) /*0x594ce8*/
        + v5 * (500000 - *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + j) + 12));
    v12 = (char *)g_RandomMap_TerrainState + 4 * j; /*0x594cea*/
    if ( NumOfElements + 1 <= 0 || (unsigned __int8)Map_Helper_5AD930(10) ) /*0x594d06*/
    {
      *(_DWORD *)(8 * NumOfElements) = v11; /*0x594d17*/
      *(_DWORD *)(8 * NumOfElements + 4) = *v12; /*0x594d25*/
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
      || (v39 || !v38) && v41 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0) )
    {
      v15 = v40++; /*0x594db6*/
      *((_DWORD *)Block + v15) = *(_DWORD *)(8 * k + 4); /*0x594dbf*/
    }
    v13 = NumOfElements; /*0x594dc2*/
  }
  v16 = v40; /*0x594dcb*/
  v17 = 0; /*0x594dcf*/
  v30 = 0; /*0x594dd3*/
  if ( v40 > 0 ) /*0x594dd7*/
  {
    v18 = (int *)Block; /*0x594dd9*/
    v19 = v40; /*0x594ddd*/
    do /*0x594dea*/
    {
      v20 = *v18++; /*0x594ddf*/
      v17 += *(_DWORD *)(v20 + 12); /*0x594de7*/
      --v19; /*0x594de9*/
    }
    while ( v19 ); /*0x594dea*/
    v30 = v17; /*0x594dec*/
  }
  v21 = 0; /*0x594df6*/
  v22 = 0; /*0x594df8*/
  v23 = 0; /*0x594dfa*/
  for ( m = (unsigned int)dword_ABE028; v23 < v40; HIDWORD(m) = v22 ) /*0x594e06*/
  {
    v24 = *((_DWORD *)Block + v23); /*0x594e0c*/
    v21 += *(_DWORD *)(v24 + 12); /*0x594e12*/
    if ( v23 == v16 - 1 ) /*0x594e1b*/
      v25 = m - v22; /*0x594e21*/
    else
      v25 = Math::RoundToInt((double)v21 / (double)v30 * (double)(int)m + 0.5 - (double)SHIDWORD(m)); /*0x594e3b*/
    *(_DWORD *)(v24 + 32) = v25; /*0x594e40*/
    v22 += v25; /*0x594e43*/
    v16 = v40; /*0x594e45*/
    ++v23; /*0x594e49*/
  }
  v26 = 0; /*0x594e56*/
  for ( n = 0; n < v40; ++n ) /*0x594e5c*/
  {
    PlaceRandomWaypoints(v26); /*0x594e66*/
    v26 += *(_DWORD *)(*((_DWORD *)Block + n) + 32); /*0x594e79*/
  }
  if ( !dword_ABE014 ) /*0x594e87*/
  {
    for ( ii = 0; ii < v40; ++ii ) /*0x594e91*/
    {
      if ( !*(_DWORD *)(*((_DWORD *)Block + ii) + 32) /*0x594ecc*/
        && (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 < 0.5 )
      {
        PlaceNeutralBuilding(*((_DWORD *)Block + ii)); /*0x594ed5*/
      }
    }
  }
  ComputeMapCameraBounds(); /*0x594ee3*/
  __3_YAXPAX_Z(0); /*0x594eed*/
  v36 = &vt_VectorClass_MapRegionClass; /*0x594efb*/
  if ( Block && v39 ) /*0x594f25*/
    __3_YAXPAX_Z(Block); /*0x594f28*/
  return 1; /*0x594f03*/
}
}
} // namespace gamemd

// 0x595CE0
namespace gamemd {
void CleanupRandomMapCache()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void CleanupRandomMapCache()
{
  struct _WIN32_FIND_DATAA *i; // esi
  HANDLE FirstFileA; // edi
  int v2; // eax
  int v3; // eax
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
  void **v14; // [esp+18h] [ebp-18h] BYREF
  void *Block; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h]
  char v17; // [esp+25h] [ebp-Bh]
  int j; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  Map_Cleanup(0, 0); /*0x595cef*/
  v14 = &vt_DynamicVectorClass_WIN32_FIND_DATAA; /*0x595cf4*/
  v19 = 10; /*0x595cfc*/
  j = 0; /*0x595d09*/
  i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d19*/
  FirstFileA = FindFirstFileA(aRmcacheMmp, i); /*0x595d27*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x595d2c*/
  {
    if ( j < v16 || (v17 || !v16) && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v14[2])(&v14, v19 + v16, 0) ) /*0x595d5f*/
    {
      v2 = j++; /*0x595d6a*/
      *((_DWORD *)Block + v2) = i; /*0x595d75*/
    }
    for ( i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d8f*/
          FindNextFileA(FirstFileA, i);
          i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u) )
    {
      if ( j < v16 /*0x595dc2*/
        || (v17 || !v16)
        && v19 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v14[2])(&v14, v19 + v16, 0) )
      {
        v3 = j++; /*0x595dcd*/
        *((_DWORD *)Block + v3) = i; /*0x595dd8*/
      }
    }
    FindClose(FirstFileA); /*0x595df3*/
  }
  __3_YAXPAX_Z(i); /*0x595dfa*/
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
      if ( *((_DWORD *)v8 + 4) ) /*0x595e3b*/
      {
        if ( CompareFileTime((const FILETIME *)(v8 + 12), &FileTime2) == -1 ) /*0x595e50*/
        {
          v7 = (void **)Block; /*0x595e56*/
          v5 = v6; /*0x595e5a*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)Block + v6) + 12); /*0x595e62*/
          goto LABEL_29; /*0x595e70*/
        }
      }
      else if ( *((_DWORD *)v8 + 2) ) /*0x595e72*/
      {
        if ( CompareFileTime((const FILETIME *)(v8 + 4), &FileTime2) == -1 ) /*0x595e87*/
        {
          v7 = (void **)Block; /*0x595e89*/
          v5 = v6; /*0x595e8d*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)Block + v6) + 4); /*0x595e95*/
          goto LABEL_29; /*0x595ea3*/
        }
      }
      else
      {
        if ( !*((_DWORD *)v8 + 6) ) /*0x595eaa*/
          goto LABEL_29; /*0x595eaa*/
        if ( CompareFileTime((const FILETIME *)(v8 + 20), &FileTime2) == -1 ) /*0x595eba*/
        {
          v7 = (void **)Block; /*0x595ebc*/
          v5 = v6; /*0x595ec0*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)Block + v6) + 20); /*0x595ec8*/
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
      __3_YAXPAX_Z(*((void **)Block + v5)); /*0x595f03*/
      v9 = j; /*0x595f08*/
      if ( v5 < j ) /*0x595f11*/
      {
        v9 = j - 1; /*0x595f13*/
        v10 = v5; /*0x595f14*/
        for ( j = v9; v10 < j; v9 = j ) /*0x595f1c*/
        {
          ++v10; /*0x595f22*/
          *((_DWORD *)Block + v10 - 1) = *((_DWORD *)Block + v10); /*0x595f26*/
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
      __3_YAXPAX_Z(*v7); /*0x595f50*/
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
            *((_DWORD *)Block + v12 - 1) = *((_DWORD *)Block + v12); /*0x595f73*/
          }
          while ( v12 < j ); /*0x595f7d*/
          v11 = j == 0; /*0x595f7f*/
        }
      }
      v7 = (void **)Block; /*0x595f81*/
    }
    while ( !v11 ); /*0x595f85*/
  }
  v14 = &vt_VectorClass_WIN32_FIND_DATAA; /*0x595f89*/
  if ( v7 ) /*0x595f91*/
  {
    if ( v17 ) /*0x595f99*/
      __3_YAXPAX_Z(v7); /*0x595f9c*/
  }
}
}
} // namespace gamemd

// 0x595FB0
namespace gamemd {
unsigned int * GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)() a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)())
{
  _DWORD *v4; // eax
  char *v5; // esi
  void *v6; // eax
  void *v7; // eax
  void *v8; // esi
  void *v9; // esi
  void *v10; // eax
  HWND *v11; // eax
  int v12; // ecx
  _DWORD *v13; // esi
  _DWORD v15[2]; // [esp+10h] [ebp-260h] BYREF
  _DWORD v16[2]; // [esp+18h] [ebp-258h] BYREF
  int v17[9]; // [esp+20h] [ebp-250h] BYREF
  _DWORD v18[22]; // [esp+44h] [ebp-22Ch] BYREF
  _BYTE v19[12]; // [esp+9Ch] [ebp-1D4h] BYREF
  int v20; // [esp+A8h] [ebp-1C8h]
  char Destination[128]; // [esp+B0h] [ebp-1C0h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+130h] [ebp-140h] BYREF

  ComPtr::Constructor(v15); /*0x595fc2*/
  v15[0] = &vt_rc_ptr_WDTTerritory; /*0x595fd8*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x595fe5*/
  {
    v4 = FindWDTTerritoryClass(v16, *(int *)MEMORY[0xA8B240]); /*0x595ff1*/
    ComPtr::Set(v15, v4[1]); /*0x595ffe*/
    v16[0] = &vt_rc_ptr_WDTTerritory; /*0x596007*/
    ComPtr::Release(v16); /*0x59600b*/
  }
  if ( v15[1] ) /*0x596016*/
    dword_ABE028 = 4; /*0x596018*/
  v5 = GameConfig::ComputeCRC(); /*0x596023*/
  memset(Destination, 0, sizeof(Destination)); /*0x596033*/
  strncpy(Destination, MEMORY[0x82BB38], 0x80u); /*0x596047*/
  strncat(Destination, v5, 0x80u); /*0x59605a*/
  __3_YAXPAX_Z(v5); /*0x596060*/
  strncat(Destination, MEMORY[0x82BB30], 0x80u); /*0x596077*/
  CCFileClass::Construct(v18, Destination); /*0x59608b*/
  if ( CCFileClass::Open(v18, 0) ) /*0x596097*/
  {
    v6 = g_Map_TiberiumConfig; /*0x5960a4*/
    if ( !g_Map_TiberiumConfig ) /*0x5960ab*/
    {
      v7 = __2_YAPAXI_Z(4u); /*0x5960af*/
      if ( v7 ) /*0x5960b9*/
        v6 = (void *)unknown_libname_27(v7); /*0x5960bd*/
      else
        v6 = 0; /*0x5960c4*/
      g_Map_TiberiumConfig = v6; /*0x5960c6*/
    }
    if ( Surface::LoadToSurfaceSHP((char **)v6, Destination) ) /*0x5960d5*/
    {
      RawFileClass::Construct(v17, (int)stru_829ABC); /*0x5960e7*/
      CompressScreenshot(v17, *(int **)g_Map_TiberiumConfig, &MEMORY[0x885780]); /*0x5960fc*/
      v8 = g_Map_TiberiumConfig; /*0x596101*/
      if ( g_Map_TiberiumConfig ) /*0x596109*/
      {
        ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59610d*/
        __3_YAXPAX_Z(v8); /*0x596113*/
      }
      g_Map_TiberiumConfig = 0; /*0x59611f*/
      RawFileClass::Dtor(v17); /*0x596125*/
      goto LABEL_39; /*0x59612a*/
    }
    v9 = g_Map_TiberiumConfig; /*0x59612f*/
    if ( g_Map_TiberiumConfig ) /*0x596137*/
    {
      ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59613b*/
      __3_YAXPAX_Z(v9); /*0x596141*/
    }
    g_Map_TiberiumConfig = 0; /*0x596149*/
  }
  off_82AF14 = a2; /*0x596154*/
  dword_ABDFEC = (int)a2; /*0x59615d*/
  if ( dword_ABE04C == -1 ) /*0x596163*/
    dword_ABE04C = Random::Range(MEMORY[0x886B88], 0, 0xFFFF); /*0x596175*/
  RandomMap::Generate((int *)dword_ABDFD8, 1, hDlg); /*0x596182*/
  MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59618d*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x5961a2*/
    MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x5961aa*/
  if ( dword_ABE150 ) /*0x5961b7*/
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5961bd*/
  v10 = __2_YAPAXI_Z(0x178u); /*0x5961c4*/
  if ( v10 ) /*0x5961ce*/
    v11 = (HWND *)MapSeedClass::Constructor(v10); /*0x5961d2*/
  else
    v11 = 0; /*0x5961d9*/
  dword_ABE150 = (int)v11; /*0x5961e7*/
  qmemcpy(v11, dword_ABDFD8, 0x178u); /*0x5961ec*/
  ScenarioClass::SetFileName((char *)MEMORY[0xA8B230], g_INI_Key_RandomMap); /*0x5961f9*/
  LOBYTE(v12) = 0; /*0x5961fe*/
  ScreenSaver::Process(v12); /*0x596200*/
  v13 = g_Map_TiberiumConfig; /*0x596205*/
  if ( g_Map_TiberiumConfig ) /*0x59620f*/
  {
    if ( *(_DWORD *)g_Map_TiberiumConfig ) /*0x596215*/
    {
      RawFileClass::Construct(v17, (int)stru_829ABC); /*0x596222*/
      CompressScreenshot(v17, *(int **)g_Map_TiberiumConfig, &MEMORY[0x885780]); /*0x596237*/
      if ( FindFirstFileA(PathName, &FindFileData) == (HANDLE)-1 ) /*0x596252*/
        CreateDirectoryA(PathName, 0); /*0x59625a*/
      CopyFileA(stru_829ABC, Destination, 0); /*0x59626e*/
      CleanupRandomMapCache(); /*0x596274*/
      RawFileClass::Dtor(v17); /*0x59627d*/
      v13 = g_Map_TiberiumConfig; /*0x596282*/
    }
    if ( v13 ) /*0x59628a*/
    {
      ComPtr::Dtor(v13); /*0x59628e*/
      __3_YAXPAX_Z(v13); /*0x596294*/
    }
    g_Map_TiberiumConfig = 0; /*0x59629c*/
  }
  if ( dword_ABE150 ) /*0x5962aa*/
  {
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5962b0*/
    dword_ABE150 = 0; /*0x5962b2*/
  }
LABEL_39:
  v18[0] = &vt_CCFileClass; /*0x5962b8*/
  v20 = 0; /*0x5962c7*/
  Vector::Clear((int)v19); /*0x5962ce*/
  v18[0] = &off_7E1668; /*0x5962d7*/
  BufferIOFileClass::Dtor(v18); /*0x5962df*/
  v15[0] = &vt_rc_ptr_WDTTerritory; /*0x5962e8*/
  return ComPtr::Release(v15); /*0x5962f5*/
}
}
} // namespace gamemd

// 0x5980A0
namespace gamemd {
unsigned int * E4Recv_5980A0::sub_5980A0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5980A0(_DWORD *this, int a2)
{
  *(this + 2) = 0; /*0x5980a4*/
  *(_BYTE *)this = 0; /*0x5980a7*/
  *(this + 3) = 0; /*0x5980a9*/
  *(this + 4) = a2; /*0x5980b0*/
  return this; /*0x5980b3*/
}
}
} // namespace gamemd

// 0x59A8F0
namespace gamemd {
void ArrangeBuildingPlacementGrid(int a1, int a2, MapResourceClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall ArrangeBuildingPlacementGrid(int a1, int a2, MapResourceClass *aP2)
{
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  MapResourceClass *v7; // ebp
  int v8; // esi
  int v9; // edi
  VectorClass *v10; // ecx
  int v11; // eax
  VectorClass *v12; // eax
  int v13; // edi
  char *v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edx
  bool v22; // zf
  int v23; // [esp+18h] [ebp-74h]
  int v24; // [esp+1Ch] [ebp-70h]
  __int64 v25; // [esp+20h] [ebp-6Ch]
  int v26; // [esp+28h] [ebp-64h]
  int v27; // [esp+2Ch] [ebp-60h]
  int v28; // [esp+30h] [ebp-5Ch]
  int v29; // [esp+38h] [ebp-54h]
  int v30; // [esp+3Ch] [ebp-50h]
  int v31; // [esp+40h] [ebp-4Ch]
  int j; // [esp+40h] [ebp-4Ch]
  MapResourceClass v33; // [esp+44h] [ebp-48h]
  MapResourceClass v34; // [esp+48h] [ebp-44h]
  __int64 v35; // [esp+4Ch] [ebp-40h]
  double v36; // [esp+54h] [ebp-38h]
  void **v37; // [esp+5Ch] [ebp-30h] BYREF
  void *Block; // [esp+60h] [ebp-2Ch]
  int v39; // [esp+64h] [ebp-28h]
  int v40; // [esp+68h] [ebp-24h]
  VectorClass *i; // [esp+6Ch] [ebp-20h]
  CCINIClass *v42; // [esp+70h] [ebp-1Ch]
  void **v43; // [esp+74h] [ebp-18h] BYREF
  void *v44; // [esp+78h] [ebp-14h]
  int v45; // [esp+7Ch] [ebp-10h]
  char v46; // [esp+81h] [ebp-Bh]
  int v47; // [esp+84h] [ebp-8h]
  int v48; // [esp+88h] [ebp-4h]

  v3 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)a2)); /*0x59a901*/
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
  v24 = *(_DWORD *)&aP2[2] / v5; /*0x59a95c*/
  v25 = (unsigned int)(*(_DWORD *)&aP2[3] / v5); /*0x59a966*/
  v29 = 0; /*0x59a96c*/
  v30 = 0; /*0x59a970*/
  v27 = 0; /*0x59a978*/
  if ( (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 >= 0.5 ) /*0x59a9a2*/
  {
    HIDWORD(v25) = v24; /*0x59a9c6*/
    LODWORD(v25) = *(_DWORD *)&aP2[3] / v6; /*0x59a9ca*/
    v30 = v25; /*0x59a9ce*/
  }
  else
  {
    v27 = v25; /*0x59a9ae*/
    v24 = *(_DWORD *)&aP2[2] / v6; /*0x59a9b2*/
    v29 = v24; /*0x59a9b6*/
  }
  v8 = v5 * v6 - a2; /*0x59a9db*/
  v9 = 0; /*0x59a9dd*/
  v34 = aP2[1]; /*0x59a9df*/
  v33 = *aP2; /*0x59a9e9*/
  VectorClass::Construct(&v43, 0, 0); /*0x59a9ed*/
  v43 = (void **)&vt_DynamicVectorClass_int; /*0x59a9f8*/
  v48 = 10; /*0x59aa00*/
  v47 = 0; /*0x59aa0b*/
  VectorClass::Construct(&v37, 0, 0); /*0x59aa12*/
  v10 = 0; /*0x59aa1b*/
  v37 = (void **)&vt_DynamicVectorClass_int; /*0x59aa1f*/
  v42 = (CCINIClass *)10; /*0x59aa27*/
  i = 0; /*0x59aa2f*/
  if ( v23 > 0 ) /*0x59aa33*/
  {
    do /*0x59aacf*/
    {
      if ( v47 < v45 /*0x59aa69*/
        || (v46 || !v45)
        && v48 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v43[2])(&v43, v48 + v45, 0) )
      {
        v11 = v47++; /*0x59aa74*/
        *((_DWORD *)v44 + v11) = v5; /*0x59aa7f*/
      }
      if ( (int)i < v39 /*0x59aaaf*/
        || (BYTE1(v40) || !v39)
        && (int)v42 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v37[2])(&v37, &v42->__pad_0[v39], 0) )
      {
        v12 = i; /*0x59aaba*/
        i = (VectorClass *)((char *)i + 1); /*0x59aabd*/
        *((_DWORD *)Block + (_DWORD)v12) = v9; /*0x59aac5*/
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
      v14 = &v10[-1].__tail_E[1]; /*0x59aae3*/
      v36 = (double)(unsigned int)v10; /*0x59aaf9*/
      do /*0x59ab28*/
      {
        v35 = (unsigned int)Random::State(&g_Randomizer); /*0x59ab07*/
        v15 = Math::RoundToInt((double)v35 * v36 * 2.328306437080797e-10); /*0x59ab21*/
      }
      while ( v15 > (unsigned int)v14 ); /*0x59ab28*/
      *((_DWORD *)v44 + *((_DWORD *)Block + v15)) = v31; /*0x59ab39*/
      v10 = i; /*0x59ab3c*/
      if ( v15 < (int)i ) /*0x59ab42*/
      {
        v10 = (VectorClass *)((char *)i - 1); /*0x59ab44*/
        for ( i = v10; v15 < (int)i; v10 = i ) /*0x59ab4b*/
        {
          ++v15; /*0x59ab51*/
          *((_DWORD *)Block + v15 - 1) = *((_DWORD *)Block + v15); /*0x59ab55*/
        }
      }
      --v13; /*0x59ab61*/
    }
    while ( v13 ); /*0x59ab62*/
  }
  v16 = 0; /*0x59ab6c*/
  for ( j = 0; v16 < v23; j = v16 ) /*0x59ab74*/
  {
    v17 = *((_DWORD *)v44 + v16); /*0x59ab85*/
    if ( v17 < v5 ) /*0x59ab8a*/
    {
      if ( SHIDWORD(v25) <= 0 ) /*0x59ab92*/
        *(_DWORD *)&v34 += (int)v25 / 2; /*0x59abb8*/
      else
        *(_DWORD *)&v33 += v24 / 2; /*0x59aba3*/
    }
    if ( v17 > 0 ) /*0x59abbe*/
    {
      v28 = *((_DWORD *)v44 + v16); /*0x59abc8*/
      do /*0x59ac53*/
      {
        v18 = *(_DWORD *)(a1 + 8); /*0x59abda*/
        if ( *(_DWORD *)(a1 + 16) < v18 /*0x59ac02*/
          || (*(_BYTE *)(a1 + 13) || !v18)
          && (v19 = *(_DWORD *)(a1 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v18 + v19, 0) )
        {
          v20 = *(_DWORD *)(a1 + 16); /*0x59ac09*/
          *(_DWORD *)(a1 + 16) = v20 + 1; /*0x59ac0f*/
          v21 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 16 * v20); /*0x59ac1a*/
          *v21 = *(_DWORD *)&v33 + 2; /*0x59ac23*/
          v21[1] = *(_DWORD *)&v34 + 2; /*0x59ac25*/
          v21[2] = v24 - 4; /*0x59ac28*/
          v21[3] = v25 - 4; /*0x59ac2b*/
        }
        *(_DWORD *)&v33 += HIDWORD(v25); /*0x59ac40*/
        v22 = v28 == 1; /*0x59ac4a*/
        *(_DWORD *)&v34 += v27; /*0x59ac4b*/
        --v28; /*0x59ac4f*/
      }
      while ( !v22 ); /*0x59ac53*/
      v5 = v26; /*0x59ac59*/
      v7 = aP2; /*0x59ac5d*/
      v16 = j; /*0x59ac64*/
    }
    *(_DWORD *)&v33 += v29; /*0x59ac7a*/
    *(_DWORD *)&v34 += v30; /*0x59ac86*/
    if ( SHIDWORD(v25) <= 0 ) /*0x59ac8a*/
      v34 = v7[1]; /*0x59ac98*/
    else
      v33 = *v7; /*0x59ac8f*/
    ++v16; /*0x59aca0*/
  }
  v37 = (void **)&vt_VectorClass_int; /*0x59acb8*/
  if ( Block && BYTE1(v40) ) /*0x59acc4*/
  {
    __3_YAXPAX_Z(Block); /*0x59acc7*/
    Block = 0; /*0x59accf*/
  }
  v43 = (void **)&vt_VectorClass_int; /*0x59acdb*/
  BYTE1(v40) = 0; /*0x59ace2*/
  v39 = 0; /*0x59ace9*/
  if ( v44 ) /*0x59acf2*/
  {
    if ( v46 ) /*0x59acfa*/
      __3_YAXPAX_Z(v44); /*0x59acfd*/
  }
}
}
} // namespace gamemd

// 0x59C630
namespace gamemd {
int sub_59C630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_59C630()
{
  int result; // eax
  int i; // esi
  _DWORD *NeighbourContent; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // [esp+8h] [ebp-18h]
  __int64 v11; // [esp+10h] [ebp-10h]
  __int64 v12; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59c63a*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59c644*/
  for ( i = result; result; i = result ) /*0x59c64f*/
  {
    if ( *(_DWORD *)(i + 56) == dword_AA0738 && !*(_BYTE *)(i + 282) ) /*0x59c668*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x59c681*/
      v3 = Cell::GetNeighbourContent((_DWORD *)i, 4u); /*0x59c68c*/
      v4 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x59c68e*/
      if ( NeighbourContent[14] != dword_AA0738 /*0x59c6ce*/
        || *((_BYTE *)NeighbourContent + 282)
        || v3[14] != dword_AA0738
        || *((_BYTE *)v3 + 282)
        || v4[14] != dword_AA0738
        || *((_BYTE *)v4 + 282) )
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
        *(_DWORD *)(i + 56) = v9 / 0x28 + dword_AA0738 + 8; /*0x59c7da*/
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
          v8 = *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14); /*0x59c786*/
        else
          v8 = -1; /*0x59c76b*/
        PlaceMapSeedClassBuildings(v7 + dword_AA0738, (_WORD *)(i + 36), v8, -1); /*0x59c795*/
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59c7e2*/
  }
  return result; /*0x59c7f3*/
}
}
} // namespace gamemd

// 0x5942F0
namespace gamemd {
int E4Recv_5942F0::sub_5942F0(int * a2)
{
{
    int *v2;
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    char *v9;
    int v10;
    short v11[2];
    int *v12;
    v2 = a2;
    v12 = this;
    v3 = *((int*)(a2) + 1);
    result = v3 + *((int*)(a2) + 3);
    v10 = v3;
    if ( v3 < result )
  {
    v5 = g_MapCellHeight_Value;
    do
    {
    v6 = *v2;
    if ( *v2 < *v2 + v2[2] )
      {
    v7 = (short)v3;
    do
        {
    v11[0] = v6;
    v11[1] = v3;
    v8 = v7 + (short)v6;
    if ( v8 > v5 )
          {
    if ( (short)v6 - v7 < v5 && v7 - (short)v6 < v5 && v8 <= g_MapCellCount )
            {
    if ( g_MapTileArray )
    *((int *)(g_MapTileArray) + 20 * (short)v6 + 20 * g_MapCellWidth * v7 + 14) = v12[2];
    v9 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v11);
    v9[283] = *((char *)(v12) + 16);
    v5 = g_MapCellHeight_Value;
            }
    v3 = v10;
    v2 = a2;
          }
    ++v6;
    result = *v2 + v2[2];
        }
    while ( v6 < result );
      }
    v10 = ++v3;
    }
    while ( v3 < v2[1] + v2[3] );
  }
    return result;
}
}
} // namespace gamemd

// 0x597D40
namespace gamemd {
int j_Options_GetValue()
{
// 0x597d40
    bool __thiscall j_Options::GetValue(const char **dwNewLong)
{
    return Options::PrepareSaveLoadDlg(dwNewLong);
}
}
} // namespace gamemd

// 0x598000
namespace gamemd {
double sub_598000()
{
{
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10;
}
}
} // namespace gamemd

// 0x59D480
namespace gamemd {
double sub_59D480(short * a1, short * a2, int a3)
{
{
    int v3;
    int v4;
    float v6;
    v3 = *a1 - *a2;
    v4 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v6 = Math::Sqrt((double)(v3 * v3 + v4 * v4));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 10.0 + 0.5 * v6 - (double)a3 * 0.02;
}
}
} // namespace gamemd
