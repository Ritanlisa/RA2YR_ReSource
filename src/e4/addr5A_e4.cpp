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
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/E4Recv_5D25D0_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/TileNode_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/StringVector_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/PriorityQueue_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/Heap_e4.hpp"
#include "e4/classes/Scalar_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/CellLand_e4.hpp"  // G57w10 D supply (IsBuildable 0x4863D0)
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Constructor(AudioController *p_this); }  // x4:ida@0x402040
namespace WaypointPath { int Constructor(AudioController *p_this); }  // x4:ida@0x402040
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_4866D0(int p0); }  // x4:signals@0x4866d0
namespace gamemd { int sub_4866F0(int p0); }  // x4:signals@0x4866f0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int DrawIsoTile(int p0, uint16_t* p1, char p2);  // x4:signals@0x5a7fa0
int Object_Helper_5A99B0(ObjectClass *p_this);  // x4:ida@0x5a99b0
} // namespace gamemd

// 0x5A1350
namespace gamemd {  // G42.18 ns repair
int Terrain_SelectTileVariant(int a1)
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
  int64_t v20; // [esp+4h] [ebp-8h]
  int64_t v21; // [esp+4h] [ebp-8h]
  int64_t v22; // [esp+4h] [ebp-8h]
  int64_t v23; // [esp+4h] [ebp-8h]
  int64_t v24; // [esp+4h] [ebp-8h]
  int64_t v25; // [esp+4h] [ebp-8h]
  int64_t v26; // [esp+4h] [ebp-8h]
  int64_t v27; // [esp+4h] [ebp-8h]
  int64_t v28; // [esp+4h] [ebp-8h]
  int64_t v29; // [esp+4h] [ebp-8h]
  int64_t v30; // [esp+4h] [ebp-8h]
  int64_t v31; // [esp+4h] [ebp-8h]
  int64_t v32; // [esp+4h] [ebp-8h]
  int64_t v33; // [esp+4h] [ebp-8h]
  int64_t v34; // [esp+4h] [ebp-8h]

  v1 = a1 - g_TerrainBuildConfig; /*0x5a135e*/
  switch ( a1 - g_TerrainBuildConfig ) /*0x5a1374*/
  {
    case 4: /*0x5a1374*/
      do /*0x5a13a7*/
      {
      v20 = (unsigned int)Random::State(&unk_ABE890); /*0x5a137d*/
      v2 = Math::RoundToInt((double)v20 * 4.656612874161595e-10 + 1.0); /*0x5a139f*/
    }
      while ( v2 > 2 ); /*0x5a13a7*/
      return g_TerrainBuildConfig + v2 + 4; /*0x5a13b8*/
    case 5: /*0x5a1374*/
      do /*0x5a13e1*/
      {
      v21 = (unsigned int)Random::State(&unk_ABE890); /*0x5a13bd*/
      v4 = Math::RoundToInt((double)v21 * 4.656612874161595e-10); /*0x5a13d9*/
    }
      while ( v4 > 1 ); /*0x5a13e1*/
      return g_TerrainBuildConfig + 2 * v4 + 4; /*0x5a13f3*/
    case 6: /*0x5a1374*/
      do /*0x5a141c*/
      {
      v22 = (unsigned int)Random::State(&unk_ABE890); /*0x5a13f8*/
      v5 = Math::RoundToInt((double)v22 * 4.656612874161595e-10); /*0x5a1414*/
    }
      while ( v5 > 1 ); /*0x5a141c*/
      return g_TerrainBuildConfig + v5 + 4; /*0x5a142d*/
    case 8: /*0x5a1374*/
      do /*0x5a145c*/
      {
      v23 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1432*/
      v6 = Math::RoundToInt((double)v23 * 4.656612874161595e-10 + 1.0); /*0x5a1454*/
    }
      while ( v6 > 2 ); /*0x5a145c*/
      return g_TerrainBuildConfig + v6 + 8; /*0x5a146d*/
    case 9: /*0x5a1374*/
      do /*0x5a1496*/
      {
      v24 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1472*/
      v7 = Math::RoundToInt((double)v24 * 4.656612874161595e-10); /*0x5a148e*/
    }
      while ( v7 > 1 ); /*0x5a1496*/
      return g_TerrainBuildConfig + 2 * v7 + 8; /*0x5a14a8*/
    case 10: /*0x5a1374*/
      do /*0x5a14d1*/
      {
      v25 = (unsigned int)Random::State(&unk_ABE890); /*0x5a14ad*/
      v8 = Math::RoundToInt((double)v25 * 4.656612874161595e-10); /*0x5a14c9*/
    }
      while ( v8 > 1 ); /*0x5a14d1*/
      return g_TerrainBuildConfig + v8 + 8; /*0x5a14e2*/
    case 11: /*0x5a1374*/
      do /*0x5a1511*/
      {
      v26 = (unsigned int)Random::State(&unk_ABE890); /*0x5a14e7*/
      v9 = Math::RoundToInt((double)v26 * 4.656612874161595e-10 + 1.0); /*0x5a1509*/
    }
      while ( v9 > 2 ); /*0x5a1511*/
      return g_TerrainBuildConfig + v9 + 11; /*0x5a1522*/
    case 12: /*0x5a1374*/
      do /*0x5a154b*/
      {
      v27 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1527*/
      v10 = Math::RoundToInt((double)v27 * 4.656612874161595e-10); /*0x5a1543*/
    }
      while ( v10 > 1 ); /*0x5a154b*/
      return g_TerrainBuildConfig + 2 * v10 + 11; /*0x5a155d*/
    case 13: /*0x5a1374*/
      do /*0x5a1586*/
      {
      v28 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1562*/
      v11 = Math::RoundToInt((double)v28 * 4.656612874161595e-10); /*0x5a157e*/
    }
      while ( v11 > 1 ); /*0x5a1586*/
      return g_TerrainBuildConfig + v11 + 11; /*0x5a1597*/
    case 14: /*0x5a1374*/
      do /*0x5a15c6*/
      {
      v29 = (unsigned int)Random::State(&unk_ABE890); /*0x5a159c*/
      v12 = Math::RoundToInt((double)v29 * 4.656612874161595e-10 + 1.0); /*0x5a15be*/
    }
      while ( v12 > 2 ); /*0x5a15c6*/
      return g_TerrainBuildConfig + v12 + 14; /*0x5a15d7*/
    case 15: /*0x5a1374*/
      do /*0x5a1600*/
      {
      v30 = (unsigned int)Random::State(&unk_ABE890); /*0x5a15dc*/
      v13 = Math::RoundToInt((double)v30 * 4.656612874161595e-10); /*0x5a15f8*/
    }
      while ( v13 > 1 ); /*0x5a1600*/
      return g_TerrainBuildConfig + 2 * v13 + 14; /*0x5a1612*/
    case 16: /*0x5a1374*/
      do /*0x5a163b*/
      {
      v31 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1617*/
      v14 = Math::RoundToInt((double)v31 * 4.656612874161595e-10); /*0x5a1633*/
    }
      while ( v14 > 1 ); /*0x5a163b*/
      return g_TerrainBuildConfig + v14 + 14; /*0x5a164c*/
    case 22: /*0x5a1374*/
      do /*0x5a167b*/
      {
      v32 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1651*/
      v15 = Math::RoundToInt((double)v32 * 4.656612874161595e-10 + 1.0); /*0x5a1673*/
    }
      while ( v15 > 2 ); /*0x5a167b*/
      return g_TerrainBuildConfig + v15 + 22; /*0x5a168c*/
    case 23: /*0x5a1374*/
      do /*0x5a16b5*/
      {
      v33 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1691*/
      v16 = Math::RoundToInt((double)v33 * 4.656612874161595e-10); /*0x5a16ad*/
    }
      while ( v16 > 1 ); /*0x5a16b5*/
      return g_TerrainBuildConfig + 2 * v16 + 22; /*0x5a16c7*/
    case 24: /*0x5a1374*/
      do /*0x5a16f0*/
      {
      v34 = (unsigned int)Random::State(&unk_ABE890); /*0x5a16cc*/
      v17 = Math::RoundToInt((double)v34 * 4.656612874161595e-10); /*0x5a16e8*/
    }
      while ( v17 > 1 ); /*0x5a16f0*/
      return g_TerrainBuildConfig + v17 + 22; /*0x5a1701*/
    case 28: /*0x5a1374*/
      return g_TerrainBuildConfig + 29; /*0x5a1715*/
    case 29: /*0x5a1374*/
      return g_TerrainBuildConfig + 28; /*0x5a1729*/
    case 34: /*0x5a1374*/
      v18 = 2; /*0x5a172c*/
      v19 = 1; /*0x5a1731*/
      goto LABEL_37; /*0x5a1736*/
    case 35: /*0x5a1374*/
      return g_TerrainBuildConfig + 2 * Range_RandomInt(0, 1u) + 34; /*0x5a1754*/
    case 36: /*0x5a1374*/
      v18 = 1; /*0x5a1757*/
      v19 = 0; /*0x5a175c*/
      LABEL_37:
      v1 = Range_RandomInt(v19, v18) + 34; /*0x5a175e*/
      return g_TerrainBuildConfig + v1; /*0x5a1763*/
    default:
      return g_TerrainBuildConfig + v1;
  }
}
}  // G42.18 ns repair
// 0x5A19E0
namespace gamemd {
int ProcessRandomMapCellAdjacency()
{
  int result; // eax
  int i; // esi
  void *v2; // ebx
  int16_t *v3; // ebp
  int16_t *v4; // edi
  int AdjacencyFlags; // eax
  unsigned int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  int v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  void *NeighbourContent; // [esp+4h] [ebp-18h]
  void *v14; // [esp+8h] [ebp-14h]
  int64_t v15; // [esp+Ch] [ebp-10h]
  int64_t v16; // [esp+14h] [ebp-8h]

  (&dword_87F7E8)->CellIteratorReset(); /*0x5a19e9*/
  result = (&dword_87F7E8)->CellIteratorNext(); /*0x5a19f3*/
  for ( i = result; result; i = result )
  {
    NeighbourContent = (void *)(Cell::GetNeighbourContent((unsigned int *)i, 5u)); /*0x5a1a12*/
    v14 = (void *)(Cell::GetNeighbourContent((unsigned int *)i, 1u)); /*0x5a1a1f*/
    v2 = (void *)(Cell::GetNeighbourContent((unsigned int *)i, 3u)); /*0x5a1a2c*/
    v3 = (int16_t *)Cell::GetNeighbourContent((unsigned int *)i, 2u); /*0x5a1a37*/
    v4 = (int16_t *)Cell::GetNeighbourContent((unsigned int *)i, 6u); /*0x5a1a44*/
    AdjacencyFlags = (int)(Cell::GetAdjacencyFlags(i)); /*0x5a1a46*/
    if ( AdjacencyFlags == 131 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 131 || !(v3)->IsEmpty() ) /*0x5a1a6e*/
        goto LABEL_32; /*0x5a1a6e*/
      do /*0x5a1aa3*/
      {
        v15 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1a85*/
        v6 = Math::RoundToInt((double)v15 * 4.656612874161595e-10); /*0x5a1a9b*/
      }
      while ( v6 > 1 ); /*0x5a1aa3*/
      if ( v6 ) /*0x5a1aa7*/
        goto LABEL_32; /*0x5a1aa7*/
      v3->u32_11B -= 4; /*0x5a1ab6*/
      v7 = (unsigned int *)(dword_ABED10); /*0x5a1abc*/
      v8 = dword_ABED10
      ? *((unsigned int *)dword_ABED10 + 20 * *(int16_t *)(i + 36) + 20 * g_MapCellWidth * *(int16_t *)(i + 38) + 14)
      : -1;
      if ( !dword_ABED10 ) /*0x5a1aea*/
        goto LABEL_32; /*0x5a1aea*/
      v9 = v3[18]; /*0x5a1af4*/
      v10 = g_MapCellWidth * v3[19]; /*0x5a1af8*/
    }
    else if ( AdjacencyFlags == 56 )
    {
      if ( Cell::GetAdjacencyFlags((int)v2) != 56 || !((Cell*)v4)->IsEmpty() ) /*0x5a1b1f*/
        goto LABEL_32; /*0x5a1b1f*/
      do /*0x5a1b54*/
      {
        v16 = (unsigned int)Random::State(&unk_ABE890); /*0x5a1b36*/
        v11 = Math::RoundToInt((double)v16 * 4.656612874161595e-10); /*0x5a1b4c*/
      }
      while ( v11 > 1 ); /*0x5a1b54*/
      if ( v11 ) /*0x5a1b58*/
        goto LABEL_32; /*0x5a1b58*/
      v4->u32_11B -= 4; /*0x5a1b67*/
      v7 = (unsigned int *)(dword_ABED10); /*0x5a1b6d*/
      v8 = dword_ABED10
      ? *((unsigned int *)dword_ABED10 + 20 * *(int16_t *)(i + 36) + 20 * g_MapCellWidth * *(int16_t *)(i + 38) + 14)
      : -1;
      if ( !dword_ABED10 ) /*0x5a1b9b*/
        goto LABEL_32; /*0x5a1b9b*/
      v9 = v4[18]; /*0x5a1ba5*/
      v10 = g_MapCellWidth * v4[19]; /*0x5a1ba9*/
    }
    else
    {
      if ( AdjacencyFlags != 224 /*0x5a1bea*/
        || Cell::GetAdjacencyFlags((int)NeighbourContent) != 224
        || Cell::GetAdjacencyFlags((int)v14) != 224
        || !((unsigned int *)i)->IsEmpty() )
      {
        goto LABEL_32; /*0x5a1bea*/
      }
      *(unsigned char *)(i + 283) += 4; /*0x5a1bfc*/
      v7 = (unsigned int *)(dword_ABED10); /*0x5a1c02*/
      v8 = dword_ABED10 ? *((unsigned int *)dword_ABED10 + 20 * v4[18] + 20 * g_MapCellWidth * v4[19] + 14) : -1;
      if ( !dword_ABED10 ) /*0x5a1c30*/
        goto LABEL_32; /*0x5a1c30*/
      v12 = *(int16_t *)(i + 38); /*0x5a1c32*/
      v9 = *(int16_t *)(i + 36); /*0x5a1c36*/
      v10 = g_MapCellWidth * v12; /*0x5a1c3a*/
    }
    v7[20 * v9 + 14 + 20 * v10] = v8; /*0x5a1c45*/
    LABEL_32:
    result = (&dword_87F7E8)->CellIteratorNext(); /*0x5a1c49*/
  }
  return result; /*0x5a1c60*/
}
}
// 0x5A1C70
namespace gamemd {
int E4Recv_5A1C70::sub_5A1C70()
{

  int v1; // ecx
  int v2; // eax
  int i; // edi
  void *v4; // esi
  int v5; // esi
  int v6; // ebp
  RandomMap *v7; // edi
  int j; // edi
  RandomMap *v9; // esi
  int v10; // eax
  bool v11; // al
  int result; // eax
  int v13; // esi
  int v14; // edi
  RandomMap *v15; // eax
  __int16 v16[2]; // [esp+8h] [ebp-8h] BYREF
  ObjectClass *v17; // [esp+Ch] [ebp-4h]

  v17 = this; /*0x5a1c7c*/
  if ( dword_ABED10 ) /*0x5a1c80*/
  {
    v1 = g_MapCellWidth * g_MapCellWidth; /*0x5a1c88*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1c8d*/
    {
      v2 = 0; /*0x5a1c8f*/
      do /*0x5a1cac*/
      {
        *(unsigned int *)&dword_ABED10[v2 + 28] = -1; /*0x5a1c9a*/
        *(unsigned int *)&dword_ABED10[v2 + 30] = -1; /*0x5a1ca4*/
        v2 += 40; /*0x5a1ca8*/
        --v1; /*0x5a1cab*/
      }
      while ( v1 ); /*0x5a1cac*/
    }
  }
  for ( i = dword_ABDFA0 - 1; i >= 0; --i ) /*0x5a1cb8*/
  {
    v4 = *(void **)(stru_ABDF90.Vector4_field_0x04 + 4 * i); /*0x5a1cc0*/
    if ( v4 ) /*0x5a1cc5*/
    {
      TileNode::Cleanup(*(TileNode **)(stru_ABDF90.Vector4_field_0x04 + 4 * i)); /*0x5a1cc9*/
      __3_YAXPAX_Z(v4); /*0x5a1ccf*/
    }
  }
  dword_ABED14 = 0; /*0x5a1ce5*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1cef*/
  {
    v5 = 0; /*0x5a1cf1*/
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x5a1cf3*/
    do /*0x5a1d4f*/
    {
      *(unsigned int *)v16 = *(unsigned int *)&dword_ABED10[v5]; /*0x5a1d08*/
      v7 = (RandomMap *)(((CellCoord *)&dword_87F7E8)->To_CellObj(v16); /*0x5a1d11*/
      if ( *(unsigned int *)&dword_ABED10[v5 + 28] == -1 /*0x5a1d3b*/
        && (dword_ABED10[v5] || dword_ABED10[v5 + 1])
        && ((unsigned __int8)Cell::IsGroundTypeRange((Cell *)v7) || (unsigned __int8)Cell::IsShore((Cell *)v7)) )
      {
        RandomMap::GenerateTerrain(v7); /*0x5a1d46*/
      }
      v5 += 40; /*0x5a1d4b*/
      --v6; /*0x5a1d4e*/
    }
    while ( v6 ); /*0x5a1d4f*/
  }
  for ( j = 0; j < dword_ABDFA0; ++j ) /*0x5a1d5a*/
  {
    v9 = *(RandomMap **)(stru_ABDF90.Vector4_field_0x04 + 4 * j); /*0x5a1d67*/
    if ( ((v9->q014) & 0xFF) ) /*0x5a1d6a*/
    {
      v10 = v17->ambientSoundController[0]; /*0x5a1d75*/
      v11 = v10 == 3 || v10 == 4; /*0x5a1d86*/
      RandomMap::CollectTerrainCells( /*0x5a1da3*/
        *(RandomMap **)(stru_ABDF90.Vector4_field_0x04 + 4 * j),
        (v9->q00C > 8000) + !v11 + 4);
      RandomMap::PlaceRandomMapTerrain(v9); /*0x5a1daa*/
    }
  }
  result = g_MapCellWidth * g_MapCellWidth; /*0x5a1dbf*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5a1dc4*/
  {
    v13 = 0; /*0x5a1dc6*/
    v14 = g_MapCellWidth * g_MapCellWidth; /*0x5a1dc8*/
    do /*0x5a1e07*/
    {
      result = (int)&dword_ABED10[v13]; /*0x5a1dd0*/
      if ( *(unsigned int *)&dword_ABED10[v13 + 28] == -1 && (*(unsigned short *)result || result->u32_2) ) /*0x5a1de2*/
      {
        v15 = (RandomMap *)((CellCoord *)&dword_87F7E8)->To_CellObj(&dword_ABED10[v13]); /*0x5a1def*/
        result = (int)RandomMap::GenerateTerrain(v15); /*0x5a1df6*/
        if ( result ) /*0x5a1dfd*/
          result->__pad_01A = 0; /*0x5a1dff*/
      }
      v13 += 40; /*0x5a1e03*/
      --v14; /*0x5a1e06*/
    }
    while ( v14 ); /*0x5a1e07*/
  }
  return result; /*0x5a1e09*/

}
}
// 0x5A33F0
namespace gamemd {
int GenerateTerrainHeightMapInternal()
{

  CellClass *result; // eax
  CellClass *i; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  Cell *v7; // eax
  int v8; // edx
  int v9; // esi
  int j; // ebp
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  int v14; // ecx
  Cell *v15; // eax
  __int16 v16[2]; // [esp+4h] [ebp-Ch] BYREF
  unsigned __int16 *v17; // [esp+8h] [ebp-8h]
  unsigned __int16 *v18; // [esp+Ch] [ebp-4h]

  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x5a33f9*/
  result = (CellClass *)((LayerClass *)&dword_87F7E8)->CellIteratorNext(); /*0x5a3403*/
  for ( i = result; result; i = result ) /*0x5a340c*/
  {
    if ( (unsigned __int8)CellClass::IsTerrainType(i) ) /*0x5a3417*/
    {
      v2 = dword_ABED04; /*0x5a3424*/
      v3 = 0; /*0x5a342a*/
      while ( 1 ) /*0x5a3431*/
      {
        v4 = v3 & 7; /*0x5a3431*/
        *(unsigned int *)v16 = i->smudgeTypeIndex; /*0x5a3434*/
        v5 = LOWORD(dword_89F688[v4]) + v16[0]; /*0x5a3438*/
        LOWORD(v4) = HIWORD(dword_89F688[v4]); /*0x5a3447*/
        LOWORD(v17) = v5; /*0x5a344b*/
        HIWORD(v17) = v16[1] + v4; /*0x5a3455*/
        *(unsigned int *)v16 = v17; /*0x5a345e*/
        v6 = SHIWORD(v17) + v5; /*0x5a3468*/
        if ( v6 > v2 && v5 - SHIWORD(v17) < v2 && SHIWORD(v17) - v5 < v2 && v6 <= dword_ABED08 ) /*0x5a3483*/
        {
          v7 = (Cell *)(((CellCoord *)&dword_87F7E8)->To_CellObj(v16); /*0x5a348f*/
          if ( (unsigned __int8)Cell::IsEmpty(v7) ) /*0x5a3496*/
          {
            v8 = 40 * (v16[0] + g_MapCellWidth * v16[1]); /*0x5a34cb*/
            *(unsigned int *)&dword_ABED10[v8 + 4] = 0; /*0x5a34ce*/
            *(unsigned int *)&dword_ABED10[v8 + 6] = 1071644672; /*0x5a34dc*/
            HIBYTE(dword_ABED10[40 * v16[0] + 34 + 40 * g_MapCellWidth * v16[1]]) = 1; /*0x5a3503*/
            goto LABEL_24; /*0x5a3508*/
          }
          v2 = dword_ABED04; /*0x5a349f*/
        }
        if ( ++v3 >= 8 ) /*0x5a34a9*/
          goto LABEL_24; /*0x5a34a9*/
      }
    }
    if ( (unsigned __int8)CellLand::IsBuildable((CellLand *)i) ) /*0x5a350f*/
    {
      v9 = dword_ABED04; /*0x5a351c*/
      for ( j = 0; j < 8; ++j ) /*0x5a3522*/
      {
        v11 = j & 7; /*0x5a3529*/
        *(unsigned int *)v16 = i->smudgeTypeIndex; /*0x5a352c*/
        v12 = v16[1] + HIWORD(dword_89F688[v11]); /*0x5a3543*/
        LOWORD(v18) = v16[0] + LOWORD(dword_89F688[v11]); /*0x5a354b*/
        HIWORD(v18) = v12; /*0x5a3550*/
        *(unsigned int *)v16 = v18; /*0x5a3559*/
        v13 = v12; /*0x5a3560*/
        v14 = v12 + (__int16)v18; /*0x5a3563*/
        if ( v14 > v9 && (__int16)v18 - v13 < v9 && v13 - (__int16)v18 < v9 && v14 <= dword_ABED08 ) /*0x5a357e*/
        {
          v15 = (Cell *)(((CellCoord *)&dword_87F7E8)->To_CellObj(v16); /*0x5a358a*/
          if ( (unsigned __int8)Cell::IsEmpty(v15) ) /*0x5a3591*/
          {
            HIBYTE(dword_ABED10[40 * v16[0] + 34 + 40 * g_MapCellWidth * v16[1]]) = 1; /*0x5a35ca*/
            break; /*0x5a35ca*/
          }
          v9 = dword_ABED04; /*0x5a359a*/
        }
      }
    }
LABEL_24:
    result = (CellClass *)((LayerClass *)&dword_87F7E8)->CellIteratorNext(); /*0x5a35cf*/
  }
  return result; /*0x5a35e6*/

}
}
// 0x5A45E0
namespace gamemd {
int ScatterTerrainTrees(IUnknown * aP0, int a2, double a3)
{

  int v4; // edi
  int v5; // eax
  unsigned int *v6; // ebx
  Heap *v7; // eax
  Heap *v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int i; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  Heap v15; // edi
  unsigned int v18; // eax
  __int16 *v19; // eax
  Heap v20; // eax
  __int16 *v21; // edi
  Cell *v22; // ebx
  signed int v24; // eax
  TerrainClass *v25; // edi
  int v26; // eax
  char v27; // al
  int v28; // eax
  __int16 v29; // dx
  int v30; // ecx
  int v31; // eax
  __int16 *v32; // edi
  unsigned int *v33; // ebx
  Heap v35; // edi
  unsigned int v36; // ecx
  unsigned int v37; // edx
  Heap v38; // ebx
  Heap v40; // eax
  Heap v41; // eax
  __int16 *v42; // edi
  double v44; // [esp+0h] [ebp-70h]
  __int16 *v45; // [esp+18h] [ebp-58h]
  unsigned int *v46; // [esp+1Ch] [ebp-54h]
  int var50; // [esp+20h] [ebp-50h]
  int v48; // [esp+24h] [ebp-4Ch]
  int v49; // [esp+2Ch] [ebp-44h]
  unsigned int *v50; // [esp+30h] [ebp-40h]
  int v51; // [esp+30h] [ebp-40h]
  int v53; // [esp+38h] [ebp-38h]
  unsigned int *v47; // [esp+38h] [ebp-38h]
  __int16 v55[2]; // [esp+3Ch] [ebp-34h] BYREF
  int v56; // [esp+40h] [ebp-30h]
  __int64 v57; // [esp+44h] [ebp-2Ch]
  __int64 v58; // [esp+4Ch] [ebp-24h]
  __int64 v59; // [esp+54h] [ebp-1Ch]
  char Buffer[20]; // [esp+5Ch] [ebp-14h] BYREF

  v4 = 25 * a3; /*0x5a45f2*/
  v5 = __2_YAPAXI_Z(200 * a3); /*0x5a4601*/
  if ( v5 ) /*0x5a460b*/
  {
    v6 = (unsigned int *)v5; /*0x5a4610*/
    v56 = v4 - 1; /*0x5a4612*/
    v46 = (unsigned int *)v5; /*0x5a4616*/
  }
  else
  {
    v46 = 0; /*0x5a461c*/
    v6 = 0; /*0x5a4624*/
  }
  v7 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a462a*/
  v8 = v7; /*0x5a462f*/
  if ( v7 ) /*0x5a4636*/
  {
    v7[3] = 0; /*0x5a463f*/
    v7[4] = (Heap)-1; /*0x5a4647*/
    *v7 = 0; /*0x5a464e*/
    v7[1] = (Heap)v4; /*0x5a4654*/
    v9 = __2_YAPAXI_Z(100 * a3 + 4); /*0x5a4657*/
    v10 = (int)v8[1]; /*0x5a465c*/
    v8[2] = (Heap)v9; /*0x5a465f*/
    v11 = 0; /*0x5a4665*/
    if ( v10 >= 0 ) /*0x5a4669*/
    {
      do /*0x5a467c*/
      {
        ++v11; /*0x5a466e*/
        *(unsigned int *)(*(unsigned int *)&v8[2] + 4 * v11 - 4) = 0; /*0x5a466f*/
      }
      while ( v11 <= *(unsigned int *)&v8[1] ); /*0x5a467c*/
    }
  }
  else
  {
    v8 = 0; /*0x5a4680*/
  }
  for ( i = 0; i <= *(unsigned int *)v8; *(unsigned int *)(*(unsigned int *)&v8[2] + 4 * i - 4) = 0 ) /*0x5a4688*/
    ++i; /*0x5a468d*/
  *v8 = 0; /*0x5a469f*/
  var50 = 1; /*0x5a46a5*/
  *v6 = *(unsigned int *)(a2 + 36); /*0x5a46b0*/
  v6->ptr_2 = 0; /*0x5a46b2*/
  HIBYTE(dword_ABED10[40 * (__int16)*(unsigned int *)(a2 + 36) /*0x5a46dc*/
                    + 35
                    + 40 * g_MapCellWidth * (__int16)HIWORD(*(unsigned int *)(a2 + 36))]) = 1;
  v13 = *(unsigned int *)v8 + 1; /*0x5a46e6*/
  v53 = v6->ptr_4; /*0x5a46e9*/
  v14 = v13 >> 1; /*0x5a46f0*/
  if ( v13 < *(unsigned int *)&v8[1] ) /*0x5a46f4*/
  {
    if ( v13 > 1 ) /*0x5a46f9*/
    {
      do /*0x5a4719*/
      {
        v15 = v8[2]; /*0x5a46fb*/
        _EBX = *(unsigned int *)(*(unsigned int *)&v15 + 4 * v14); /*0x5a46fe*/
        __asm /*0x5a4701*/
        {
          fld dword ptr [ebx+4]
          fcomp [esp+68h+var_38]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x5a470d*/
          break; /*0x5a470d*/
        *(unsigned int *)(*(unsigned int *)&v15 + 4 * v13) = _EBX; /*0x5a470f*/
        v13 = v14; /*0x5a4712*/
        v14 >>= 1; /*0x5a4714*/
      }
      while ( v13 > 1 ); /*0x5a4719*/
      v6 = v46; /*0x5a471b*/
      v4 = 25 * a3; /*0x5a471f*/
    }
    *(unsigned int *)(*(unsigned int *)&v8[2] + 4 * v13) = v6; /*0x5a4726*/
    v18 = (unsigned int)v8[3]; /*0x5a472b*/
    ++*(unsigned int *)v8; /*0x5a4731*/
    if ( (unsigned int)v6 > v18 ) /*0x5a4733*/
      v8[3] = (Heap)v6; /*0x5a4735*/
    if ( (unsigned int)v6 < *(unsigned int *)&v8[4] ) /*0x5a473b*/
      v8[4] = (Heap)v6; /*0x5a473d*/
  }
  if ( *v8 ) /*0x5a4740*/
  {
    v20 = v8[2]; /*0x5a474e*/
    v21 = *(__int16 **)(*(unsigned int *)&v20 + 4); /*0x5a4756*/
    *(unsigned int *)(*(unsigned int *)&v20 + 4) = *(unsigned int *)(*(unsigned int *)&v20 + 4 * *(unsigned int *)v8); /*0x5a4759*/
    *(unsigned int *)(*(unsigned int *)&v8[2] + 4 * (*(unsigned int *)v8)--) = 0; /*0x5a4761*/
    Heap::SiftDown(v8, 1); /*0x5a476f*/
    v45 = v21; /*0x5a4774*/
    v4 = 25 * a3; /*0x5a4778*/
    v19 = v45; /*0x5a477c*/
  }
  else
  {
    v19 = 0; /*0x5a4746*/
    v45 = 0; /*0x5a4748*/
  }
  v48 = 0; /*0x5a4783*/
  if ( a3 > 0 ) /*0x5a478d*/
  {
    while ( v19 && var50 < v4 ) /*0x5a479f*/
    {
      v22 = (Cell *)(((CellCoord *)&dword_87F7E8)->To_CellObj(v19); /*0x5a47ba*/
      if ( (unsigned __int8)Cell::IsEmpty(v22) ) /*0x5a47be*/
      {
        if ( !v22->q0E4 && *&v22->u32_44 == -1 && *&v22->u32_EC != 3 ) /*0x5a47ec*/
        {
          v57 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a47fc*/
          __asm /*0x5a4804*/
          {
            fild [esp+68h+var_2C]
            fmul ds:dbl_7ED898
            fcomp [ebp+arg_8]
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x5a4816*/
          {
            do /*0x5a4848*/
            {
              v58 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a4826*/
              __asm /*0x5a482e*/
              {
                fild [esp+68h+var_24]
                fmul ds:dbl_7EDAD8
                fadd ds:dbl_7E1718
              }
              (v24) = ((v24) & ~0xFFFF) | ((Math::RoundToInt(a1)) & 0xFFFF); /*0x5a483e*/
            }
            while ( (unsigned int)v24 > 0x19 ); /*0x5a4848*/
            sprintf(Buffer, "TREE%d%d", v24 / 10, v24 % 10); /*0x5a486f*/
            v25 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a487e*/
            if ( v25 ) /*0x5a4885*/
            {
              *(unsigned int *)v55 = *&v22->u32_24; /*0x5a488e*/
              v26 = ((Terrain *)Buffer)->LookupByName(); /*0x5a4892*/
              TerrainClass::Construct(v25, *((void **)dword_A8E31C + v26), v55); /*0x5a48aa*/
            }
            ++v48; /*0x5a48af*/
          }
        }
      }
      v27 = 0; /*0x5a48bb*/
      v47 = 0; /*0x5a48c0*/
      v50 = &v46[2 * var50]; /*0x5a48c4*/
      do /*0x5a4a61*/
      {
        v28 = v27 & 7; /*0x5a48cc*/
        v29 = v45[1] + HIWORD(dword_89F688[v28]); /*0x5a48de*/
        LOWORD(v28) = *v45 + LOWORD(dword_89F688[v28]); /*0x5a48e5*/
        (v49) = ((v49) & ~(0xFFFF << 16)) | (((v29) & 0xFFFF) << 16); /*0x5a48ee*/
        v30 = (__int16)v28; /*0x5a48f3*/
        (v49) = ((v49) & ~0xFFFF) | ((v28) & 0xFFFF); /*0x5a48f9*/
        v31 = v29 + (__int16)v28; /*0x5a48fe*/
        if ( v31 > dword_ABED04 && v30 - v29 < dword_ABED04 && v29 - v30 < dword_ABED04 && v31 <= dword_ABED08 ) /*0x5a492d*/
        {
          v32 = &dword_ABED10[40 * v30 + 40 * g_MapCellWidth * v29]; /*0x5a494a*/
          if ( !*((unsigned char *)v32 + 71) && !*((unsigned char *)v32 + 69) && var50 < 25 * a3 ) /*0x5a496c*/
          {
            v33 = v50; /*0x5a4972*/
            *v50 = v49; /*0x5a497d*/
            v51 = ((__int16)*(unsigned int *)(a2 + 36) - v30) * ((__int16)*(unsigned int *)(a2 + 36) - v30) /*0x5a49a1*/
                + ((__int16)HIWORD(*(unsigned int *)(a2 + 36)) - v29) * ((__int16)HIWORD(*(unsigned int *)(a2 + 36)) - v29);
            __asm /*0x5a49a5*/
            {
              fild dword ptr [esp+70h+var_40]
              fstp [esp+70h+var_70]; double
            }
            Math::Sqrt(v44); /*0x5a49ac*/
            __asm { fstp [esp+70h+var_40] } /*0x5a49b1*/
            v59 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a49c2*/
            __asm { fild [esp+68h+var_1C] } /*0x5a49ce*/
            __asm { fmul ds:dbl_7ED800 }
            ++var50; /*0x5a49dd*/
            __asm /*0x5a49e1*/
            {
              fmul ds:dbl_7ED898
              fadd [esp+68h+var_40]
              fstp dword ptr [ebx+4]
            }
            *((float *)v33 + 1) = _ET1; /*0x5a49eb*/
            *((unsigned char *)v32 + 71) = 1; /*0x5a49ee*/
            v35 = (Heap)v33; /*0x5a49f4*/
            v36 = *(unsigned int *)v8 + 1; /*0x5a49f9*/
            v50 = v33 + 2; /*0x5a49fa*/
            v56 = v33[1]; /*0x5a4a03*/
            v37 = v36 >> 1; /*0x5a4a0a*/
            if ( v36 < *(unsigned int *)&v8[1] ) /*0x5a4a0e*/
            {
              for ( ; v36 > 1; v37 >>= 1 ) /*0x5a4a13*/
              {
                v38 = v8[2]; /*0x5a4a15*/
                _EAX = *(unsigned int *)(*(unsigned int *)&v38 + 4 * v37); /*0x5a4a18*/
                __asm /*0x5a4a1b*/
                {
                  fld dword ptr [eax+4]
                  fcomp [esp+68h+var_30]
                  fnstsw ax
                }
                if ( (_EAX & 0x4100) != 0 ) /*0x5a4a27*/
                  break; /*0x5a4a27*/
                *(unsigned int *)(*(unsigned int *)&v38 + 4 * v36) = *(unsigned int *)(*(unsigned int *)&v38 + 4 * v37); /*0x5a4a2c*/
                v36 = v37; /*0x5a4a2f*/
              }
              *(Heap *)(*(unsigned int *)&v8[2] + 4 * v36) = v35; /*0x5a4a3b*/
              v40 = v8[3]; /*0x5a4a40*/
              ++*(unsigned int *)v8; /*0x5a4a46*/
              if ( *(unsigned int *)&v35 > *(unsigned int *)&v40 ) /*0x5a4a48*/
                v8[3] = v35; /*0x5a4a4a*/
              if ( *(unsigned int *)&v35 < *(unsigned int *)&v8[4] ) /*0x5a4a50*/
                v8[4] = v35; /*0x5a4a52*/
            }
          }
        }
        v27 = (unsigned char)v47 + 1; /*0x5a4a59*/
        v47 = (unsigned int *)((char *)v47 + 1); /*0x5a4a5d*/
      }
      while ( (int)v47 < 8 ); /*0x5a4a61*/
      if ( *v8 ) /*0x5a4a67*/
      {
        v41 = v8[2]; /*0x5a4a73*/
        v42 = *(__int16 **)(*(unsigned int *)&v41 + 4); /*0x5a4a7b*/
        *(unsigned int *)(*(unsigned int *)&v41 + 4) = *(unsigned int *)(*(unsigned int *)&v41 + 4 * *(unsigned int *)v8); /*0x5a4a7e*/
        *(unsigned int *)(*(unsigned int *)&v8[2] + 4 * (*(unsigned int *)v8)--) = 0; /*0x5a4a86*/
        Heap::SiftDown(v8, 1); /*0x5a4a94*/
        v45 = v42; /*0x5a4a99*/
      }
      else
      {
        v45 = 0; /*0x5a4a6d*/
      }
      v6 = v46; /*0x5a4aa4*/
      if ( v48 >= a3 ) /*0x5a4aaa*/
        break; /*0x5a4aaa*/
      v4 = 25 * a3; /*0x5a4795*/
      v19 = v45; /*0x5a4799*/
    }
  }
  __3_YAXPAX_Z(v6); /*0x5a4ab1*/
  if ( v8 ) /*0x5a4abb*/
    Scalar::Dtor((Scalar *)v8, 1); /*0x5a4ac1*/
  return v48; /*0x5a4aca*/

}
namespace gamemd {
void FloodFillPathfinding(Random * aP0, int a2, CellClass * aP2, int a4, char a5)
{
  float *v7; // ebx
  int16_t *v20; // eax
  int16_t *v40; // [esp+18h] [ebp-30h]
  float *v41; // [esp+1Ch] [ebp-2Ch]
  float v47; // [esp+38h] [ebp-10h]

  int v5 = 10 * aP2; // edi /*0x5a4b72*/
  float *v6; // eax
  v6 = (float *)operator new(80 * aP2); /*0x5a4b7c*/
  if ( v6 ) /*0x5a4b86*/
  {
    v7 = v6; /*0x5a4b8b*/
    (*((unsigned int *)&(v47))) = v5 - 1; /*0x5a4b8d*/
    v41 = v6; /*0x5a4b91*/
  }
  else
  {
    v41 = 0; /*0x5a4b97*/
    v7 = 0; /*0x5a4b9f*/
  }
  int *v8; // eax
  v8 = (int *)operator new(0x14u); /*0x5a4ba5*/
  int *v9 = v8; // esi /*0x5a4baa*/
  if ( v8 ) /*0x5a4bb3*/
  {
    v8[3] = 0; /*0x5a4bb5*/
    *v8 = 0; /*0x5a4bb8*/
    v8[4] = -1; /*0x5a4bc1*/
    v8[1] = v5; /*0x5a4bc9*/
    void *v10; // eax
    v10 = operator new(40 * aP2 + 4); /*0x5a4bcc*/
    int v11; // ecx
    v11 = v9[1]; /*0x5a4bd1*/
    v9[2] = (int)v10; /*0x5a4bd4*/
    int v12 = 0; // eax /*0x5a4bda*/
    if ( v11 >= 0 ) /*0x5a4bde*/
    {
      do /*0x5a4bf1*/
      {
        ++v12; /*0x5a4be3*/
        *(unsigned int *)(v9[2] + 4 * v12 - 4) = 0; /*0x5a4be4*/
      }
      while ( v12 <= v9[1] ); /*0x5a4bf1*/
    }
  }
  else
  {
    v9 = 0; /*0x5a4bf7*/
  }
  int v13 = 0; // eax /*0x5a4bfb*/
  bool v14 = *v9 < 0; // sf /*0x5a4bfd*/
  int v45; // [esp+2Ch] [ebp-1Ch]
  v45 = 0; /*0x5a4bff*/
  if ( !v14 ) /*0x5a4c03*/
  {
    do /*0x5a4c11*/
    {
      ++v13; /*0x5a4c08*/
      *(unsigned int *)(v9[2] + 4 * v13 - 4) = 0; /*0x5a4c09*/
    }
    while ( v13 <= *v9 ); /*0x5a4c11*/
  }
  *v9 = 0; /*0x5a4c16*/
  int v42; // [esp+20h] [ebp-28h]
  v42 = 1; /*0x5a4c18*/
  *v7 = aP0->u32_24; /*0x5a4c23*/
  v7[1] = 0.0; /*0x5a4c25*/
  float v44; // [esp+28h] [ebp-20h]
  v44 = aP0->u32_24; /*0x5a4c2b*/
  *((unsigned int *)dword_ABED10 + 20 * (*((signed short *)&(v44))) + 20 * g_MapCellWidth * (*((signed short *)(((unsigned char *)&(v44)) + 2))) + 15) = a4; /*0x5a4c4f*/
  unsigned int v15 = *v9 + 1; // ecx /*0x5a4c58*/
  v44 = v7[1]; /*0x5a4c5b*/
  unsigned int v16 = v15 >> 1; // edx /*0x5a4c62*/
  if ( v15 < v9[1] ) /*0x5a4c66*/
  {
    if ( v15 > 1 ) /*0x5a4c6b*/
    {
      do /*0x5a4c8b*/
      {
        int v17; // edi
        v17 = v9[2]; /*0x5a4c6d*/
        int v18; // ebx
        v18 = *(unsigned int *)(v17 + 4 * v16); /*0x5a4c70*/
        if ( *(float *)(v18 + 4) <= (double)v44 ) /*0x5a4c7f*/
          break; /*0x5a4c7f*/
        *(unsigned int *)(v17 + 4 * v15) = v18; /*0x5a4c81*/
        v15 = v16; /*0x5a4c84*/
        v16 >>= 1; /*0x5a4c86*/
      }
      while ( v15 > 1 ); /*0x5a4c8b*/
      v7 = v41; /*0x5a4c8d*/
    }
    *(unsigned int *)(v9[2] + 4 * v15) = v7; /*0x5a4c94*/
    unsigned int v19; // eax
    v19 = v9[3]; /*0x5a4c99*/
    ++*v9; /*0x5a4c9f*/
    if ( (unsigned int)v7 > v19 ) /*0x5a4ca1*/
      v9[3] = (int)v7; /*0x5a4ca3*/
    if ( (unsigned int)v7 < v9[4] ) /*0x5a4ca9*/
      v9[4] = (int)v7; /*0x5a4cab*/
  }
  if ( *v9 ) /*0x5a4cae*/
  {
    int v21; // eax
    v21 = v9[2]; /*0x5a4cbc*/
    int16_t *v22 = v21->u32_4; // edi /*0x5a4cc4*/
    v21->u32_4 = *(unsigned int *)(v21 + 4 * *v9); /*0x5a4cc7*/
    *(unsigned int *)(v9[2] + 4 * (*v9)--) = 0; /*0x5a4ccf*/
    Heap::SiftDown(v9, 1); /*0x5a4cdd*/
    v40 = v22; /*0x5a4ce2*/
    v20 = v22; /*0x5a4ce6*/
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
      unsigned int *v23; // eax
      v23 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj(v20)); /*0x5a4d07*/
      int v24 = v42; // edx /*0x5a4d0f*/
      v23[14] = a2; /*0x5a4d13*/
      char v25 = 0; // al /*0x5a4d16*/
      v44 = 0.0; /*0x5a4d18*/
      float *v26; // edi
      v26 = &v7[2 * v24]; /*0x5a4d1c*/
      do /*0x5a4f42*/
      {
        int v39; // [esp+14h] [ebp-34h] BYREF
        int v48; // [esp+3Ch] [ebp-Ch] BYREF
        v39 = (int)(*(unsigned int *)((CellStruct *)((CellStruct *)(v40)))->Add( (unsigned int *)(&v48), (unsigned short *)(4 * (v25 & 7) + 9041544))); /*0x5a4d44*/
        int v43; // [esp+24h] [ebp-24h]
        v43 = (*((signed short *)(((unsigned char *)&(v39)) + 2))) + (int16_t)v39; /*0x5a4d55*/
        if ( v43 > dword_ABED04 /*0x5a4d81*/
          && (int16_t)v39 - (*((signed short *)(((unsigned char *)&(v39)) + 2))) < dword_ABED04
          && (*((signed short *)(((unsigned char *)&(v39)) + 2))) - (int16_t)v39 < dword_ABED04
          && v43 <= dword_ABED08 )
        {
          int *v27; // ebx
          v27 = (int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v39); /*0x5a4d96*/
          v43 = (int)v27; /*0x5a4d9a*/
          if ( ((Cell*)v27)->IsEmpty() || a5 && (CellClass::InBounds((gamemd::CellClass *)(v27)) || CellClass::InMapDataRange((gamemd::CellClass *)(v27))) ) /*0x5a4dbf*/
          {
            int v28; // edx
            v28 = (*((signed short *)(((unsigned char *)&(v39)) + 2))); /*0x5a4dcc*/
            double v46; // [esp+30h] [ebp-18h]
            (*((unsigned int *)&(v46))) = (int16_t)v39; /*0x5a4de4*/
            if ( *((unsigned int *)dword_ABED10 + 20 * (int16_t)v39 + 20 * g_MapCellWidth * (*((signed short *)(((unsigned char *)&(v39)) + 2))) + 15) != a4 /*0x5a4e1a*/
              && !v43->q11C
              && v43->q044 == -1
              && !v43->q0E4 )
            {
              *(unsigned int *)v26 = v39; /*0x5a4e2f*/
              v43 = aP0->u32_24; /*0x5a4e3b*/
              (*((unsigned int *)&(v46))) = ((int16_t)v43 - (*((unsigned int *)&(v46)))) * ((int16_t)v43 - (*((unsigned int *)&(v46)))) /*0x5a4e57*/
              + ((*((signed short *)(((unsigned char *)&(v43)) + 2))) - v28) * ((*((signed short *)(((unsigned char *)&(v43)) + 2))) - v28);
              v46 = Math::Sqrt((double)(*((signed int *)&(v46)))); /*0x5a4e67*/
              int64_t v49; // [esp+40h] [ebp-8h]
              v49 = (unsigned int)((Random *)(&unk_ABE890))->State(); /*0x5a4e78*/
              int v29; // eax
              v29 = (*((signed short *)(((unsigned char *)&(v39)) + 2))); /*0x5a4e88*/
              int v30; // edx
              v30 = (int16_t)v39; /*0x5a4e93*/
              v26[1] = (double)v49 * 5.0 * 2.328306437080797e-10 + v46; /*0x5a4ea2*/
              *((unsigned int *)dword_ABED10 + 20 * v30 + 20 * g_MapCellWidth * v29 + 15) = a4; /*0x5a4eba*/
              unsigned int v31; // ebx
              v31 = (unsigned int)v26; /*0x5a4ec3*/
              ++v42; /*0x5a4ec5*/
              float v32; // eax
              v32 = v26[1]; /*0x5a4ecb*/
              v26 += 2; /*0x5a4ece*/
              unsigned int v33 = *v9 + 1; // ecx /*0x5a4ed1*/
              v47 = v32; /*0x5a4ed2*/
              unsigned int v34; // eax
              v34 = v9[1]; /*0x5a4ed6*/
              unsigned int v35 = v33 >> 1; // edx /*0x5a4edb*/
              v43 = v31; /*0x5a4edf*/
              if ( v33 < v34 ) /*0x5a4ee3*/
              {
                for ( ; v33 > 1; v35 >>= 1 ) /*0x5a4ee8*/
                {
                  (*((unsigned int *)&(v46))) = *(unsigned int *)(v9[2] + 4 * v35); /*0x5a4ef0*/
                  if ( *(float *)((*((unsigned int *)&(v46))) + 4) <= (double)v47 ) /*0x5a4f00*/
                    break; /*0x5a4f00*/
                  *(unsigned int *)(v9[2] + 4 * v33) = (*((unsigned int *)&(v46))); /*0x5a4f09*/
                  v31 = v43; /*0x5a4f0c*/
                  v33 = v35; /*0x5a4f10*/
                }
                *(unsigned int *)(v9[2] + 4 * v33) = v31; /*0x5a4f1c*/
                unsigned int v36; // eax
                v36 = v9[3]; /*0x5a4f21*/
                ++*v9; /*0x5a4f27*/
                if ( v31 > v36 ) /*0x5a4f29*/
                  v9[3] = v31; /*0x5a4f2b*/
                if ( v31 < v9[4] ) /*0x5a4f31*/
                  v9[4] = v31; /*0x5a4f33*/
              }
            }
          }
        }
        v25 = (*((unsigned char *)&(v44))) + 1; /*0x5a4f3a*/
        ++(*((unsigned int *)&(v44))); /*0x5a4f3e*/
      }
      while ( (*((signed int *)&(v44))) < 8 ); /*0x5a4f42*/
      int v37; // edi
      v37 = ++v45; /*0x5a4f4e*/
      int16_t *v38; // eax
      v38 = (int16_t *)PriorityQueue::Pop(v9); /*0x5a4f53*/
      v7 = v41; /*0x5a4f58*/
      v40 = v38; /*0x5a4f5c*/
      if ( v37 >= (unsigned int)aP2 ) /*0x5a4f63*/
        break; /*0x5a4f63*/
      v20 = v40; /*0x5a4cf5*/
    }
  }
  RA2_OPDEL(v7); /*0x5a4f6a*/
  if ( v9 ) /*0x5a4f74*/
  {
    RA2_OPDEL((void *)v9[2]); /*0x5a4f7a*/
    RA2_OPDEL(v9); /*0x5a4f80*/
  }
}
}
}
// 0x5A6510
namespace gamemd {
FootClass * * MapSeed_PlaceBuildingsScatter2(int a1)
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
  HouseClass *v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // eax
  int IndexByName; // esi
  int v15; // eax
  int v16; // ebp
  unsigned int v17; // esi
  unsigned int v18; // eax
  int v19; // ebx
  unsigned short *v20; // edi
  CellClass *v21; // esi
  int v22; // edx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // [esp+18h] [ebp-6Eh]
  char v27; // [esp+19h] [ebp-6Dh]
  int v28; // [esp+1Ah] [ebp-6Ch]
  int v29; // [esp+1Eh] [ebp-68h]
  int v30; // [esp+22h] [ebp-64h]
  unsigned __int16 *v31; // [esp+26h] [ebp-60h]
  int v32; // [esp+2Eh] [ebp-58h]
  int v33; // [esp+32h] [ebp-54h]
  int Owner; // [esp+36h] [ebp-50h]
  __int16 v35[4]; // [esp+3Ah] [ebp-4Ch] BYREF
  __int64 v36; // [esp+42h] [ebp-44h]
  __int64 v37; // [esp+4Ah] [ebp-3Ch]
  __int64 v38; // [esp+52h] [ebp-34h]
  __int64 v39; // [esp+5Ah] [ebp-2Ch]
  unsigned int v40[3]; // [esp+62h] [ebp-24h] BYREF
  unsigned char v41[24]; // [esp+6Eh] [ebp-18h] BYREF

  v1 = a1; /*0x5a6514*/
  v2 = *(unsigned int *)(a1 + 16) / 10; /*0x5a6534*/
  v3 = *(unsigned int *)(a1 + 16) / 20; /*0x5a6542*/
  *(unsigned long long *)v35 = v2 - v3 + 1; /*0x5a6549*/
  *(double *)&v4 = (double)*(__int64 *)v35; /*0x5a6551*/
  *(unsigned int *)v35 = v3; /*0x5a6555*/
  v39 = v4; /*0x5a655d*/
  *(double *)&v38 = (double)*(__int64 *)v35; /*0x5a6565*/
  do /*0x5a6594*/
  {
    *(unsigned long long *)v35 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a6573*/
    (v5) = ((v5) & ~0xFFFF) | ((Math::RoundToInt((double)*(__int64 *)v35 * *(double *)&v39 * 2.328306437080797e-10 + *(double *)&v38)) & 0xFFFF); /*0x5a658d*/
  }
  while ( v5 > v2 ); /*0x5a6594*/
  v6 = v5 >> 1; /*0x5a6598*/
  v33 = v5 >> 1; /*0x5a65a0*/
  v29 = 0; /*0x5a65a4*/
  v30 = 0; /*0x5a65a8*/
  StringVector::Construct((StringVector *)v41, 0, 0); /*0x5a65ac*/
  v7 = *(unsigned int *)&v41[8]; /*0x5a65b1*/
  v8 = 10; /*0x5a65b5*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E5BC4) */  /*0x5a65ba*/
  *(unsigned int *)&v41[20] = 10; /*0x5a65c2*/
  *(unsigned int *)&v41[16] = 0; /*0x5a65c6*/
  v9 = off_82B138; /*0x5a65ca*/
  while ( 1 ) /*0x5a65d5*/
  {
    if ( *(int *)&v41[16] < v7 ) /*0x5a65d9*/
      goto LABEL_10; /*0x5a65d9*/
    if ( (v41[13] || !v7) && v8 > 0 ) /*0x5a65e9*/
    {
      if ( (*(unsigned __int8 (**)(unsigned char *, int, unsigned int))(*(unsigned int *)v41 + 8))(v41, v8 + v7, 0) ) /*0x5a65f7*/
      {
LABEL_10:
        v10 = (*(unsigned int *)&v41[16])++; /*0x5a65fe*/
        *(unsigned int *)(*(unsigned int *)&v41[4] + 4 * v10) = *v9; /*0x5a660f*/
      }
      v7 = *(unsigned int *)&v41[8]; /*0x5a6612*/
    }
    if ( (int)++v9 >= (int)&off_82B180 ) /*0x5a661f*/
      break; /*0x5a661f*/
    v8 = *(unsigned int *)&v41[20]; /*0x5a65d1*/
  }
  v11 = (HouseClass *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a6626*/
  Owner = HouseClass::FindOwner(v11); /*0x5a6634*/
  if ( v6 > 0 )
  {
    while ( v29 < 2 * v6 && *(int *)&v41[16] > 1 )
    {
      v12 = *(unsigned int *)&v41[16] - 1; /*0x5a6661*/
      v36 = *(unsigned int *)&v41[16]; /*0x5a6669*/
      *(double *)v35 = (double)*(unsigned int *)&v41[16]; /*0x5a6671*/
      do /*0x5a66a0*/
      {
        v37 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a667f*/
        (v13) = ((v13) & ~0xFFFF) | ((Math::RoundToInt((double)v37 * *(double *)v35 * 2.328306437080797e-10)) & 0xFFFF); /*0x5a6695*/
        v32 = v13; /*0x5a669c*/
      }
      while ( v13 > v12 ); /*0x5a66a0*/
      IndexByName = BuildingTypeClass::FindIndexByName(*(BuildingTypeClass **)(*(unsigned int *)&v41[4] + 4 * v13)); /*0x5a66b5*/
      v15 = __2_YAPAXI_Z(0x720u); /*0x5a66b7*/
      v16 = v15 ? BuildingClass::Construct(v15, *((unsigned int *)dword_A83C6C + IndexByName), Owner) : 0;
      v28 = 0; /*0x5a66db*/
      v27 = 0; /*0x5a66df*/
      while ( v28 < 60 ) /*0x5a6701*/
      {
        v17 = v1->q010 - 1; /*0x5a670e*/
        v38 = *(unsigned int *)(v1 + 16); /*0x5a6712*/
        *(double *)v35 = (double)v38; /*0x5a671a*/
        do /*0x5a6745*/
        {
          v39 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a6728*/
          (v18) = ((v18) & ~0xFFFF) | ((Math::RoundToInt((double)v39 * *(double *)v35 * 2.328306437080797e-10)) & 0xFFFF); /*0x5a673e*/
        }
        while ( v18 > v17 ); /*0x5a6745*/
        v19 = *(unsigned int *)(v1->u32_4 + 4 * v18); /*0x5a674c*/
        v20 = (unsigned short *)(*(int (**)(unsigned int, int))(**(unsigned int **)(v16 + 1312) + 144))( /*0x5a6761*/
                         *(unsigned int *)(v16 + 1312),
                         1);
        v26 = 1; /*0x5a6763*/
        while ( *v20 != 0x7FFF || v20[1] != 0x7FFF ) /*0x5a6775*/
        {
          LOWORD(v31) = v19 + *v20; /*0x5a6781*/
          HIWORD(v31) = (((v19) >> 16) & 0xFFFF) + v20[1]; /*0x5a6790*/
          *(unsigned int *)v35 = v31; /*0x5a6799*/
          v21 = (CellClass *)(((CellCoord *)&dword_87F7E8)->To_CellObj(v35); /*0x5a67a7*/
          if ( !(unsigned __int8)CellClass::InBounds(v21) && !(unsigned __int8)CellClass::InMapDataRange(v21) /*0x5a67da*/
            || v21->firstObject
            || v21->landType == 3
            || !(unsigned __int8)((Type *)&dword_87F7E8)->CheckAmbiguity((int)v21, 1) )
          {
            v26 = 0; /*0x5a67e3*/
          }
          v20 += 2; /*0x5a67ec*/
          if ( !v26 ) /*0x5a67f1*/
            goto LABEL_44; /*0x5a67f1*/
        }
        v22 = *(unsigned int *)v16; /*0x5a6810*/
        v40[2] = 0; /*0x5a681d*/
        v40[0] = ((__int16)v19 << 8) + 128; /*0x5a6828*/
        v40[1] = ((short)(((v19) >> 16) & 0xFFFF) << 8) + 128; /*0x5a6836*/
        if ( (*(unsigned __int8 (**)(int, unsigned int *, unsigned int))(v22 + 216))(v16, v40, 0) ) /*0x5a683d*/
        {
          v23 = *(unsigned int *)v16; /*0x5a684d*/
          v24 = *(unsigned int *)(*(unsigned int *)(v16 + 1312) + 160); /*0x5a6852*/
          *(unsigned int *)(v16 + 108) = v24; /*0x5a685a*/
          *(unsigned int *)(v16 + 112) = v24; /*0x5a685d*/
          (*(void (**)(int, int))(v23 + 292))(v16, 2); /*0x5a6860*/
          v25 = v32; /*0x5a686a*/
          v27 = 1; /*0x5a6872*/
          ++v30; /*0x5a6877*/
          if ( v32 > 17 && v32 < *(int *)&v41[16] ) /*0x5a6883*/
          {
            --*(unsigned int *)&v41[16]; /*0x5a6888*/
            if ( v32 < *(int *)&v41[16] ) /*0x5a688c*/
            {
              do /*0x5a68a0*/
              {
                ++v25; /*0x5a6892*/
                *(unsigned int *)(*(unsigned int *)&v41[4] + 4 * v25 - 4) = *(unsigned int *)(*(unsigned int *)&v41[4] + 4 * v25); /*0x5a6896*/
              }
              while ( v25 < *(int *)&v41[16] ); /*0x5a68a0*/
            }
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
        (*(void (**)(int, int))(*(unsigned int *)v16 + 32))(v16, 1); /*0x5a68d5*/
LABEL_48:
      ++v29; /*0x5a68e1*/
      if ( v30 >= v33 ) /*0x5a68eb*/
        break; /*0x5a68eb*/
      v6 = v33; /*0x5a6640*/
    }
  }
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E5C24) */  /*0x5a68f5*/
  if ( *(unsigned int *)&v41[4] ) /*0x5a6903*/
  {
    if ( v41[13] ) /*0x5a690b*/
      __3_YAXPAX_Z(*(void **)&v41[4]); /*0x5a690e*/
  }

}
}
// 0x5A6920
namespace gamemd {
int PlaceRandomNeutralUnits(int a1)
{

  void *v1; // eax
  IUnknown *Owner; // ebp
  int result; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int ExitCellByName; // eax
  unsigned int *v8; // esi
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
  unsigned int v28[3]; // [esp+54h] [ebp-Ch] BYREF

  v1 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a692c*/
  Owner = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a6938*/
  v22 = Owner; /*0x5a693c*/
  do /*0x5a696e*/
  {
    v21 = (unsigned int)Random::State(&stru_ABE890); /*0x5a694a*/
    result = Math::RoundToInt((double)v21 * 0.000000001164153218540399 + 1.0); /*0x5a6962*/
    v20 = result; /*0x5a696a*/
  }
  while ( (unsigned int)result > 5 ); /*0x5a696e*/
  v19 = 0; /*0x5a6972*/
  (v21) = ((v21) & 0xFFFFFFFF00000000ull) | ((0) & 0xFFFFFFFFull); /*0x5a6976*/
  if ( result > 0 ) /*0x5a697a*/
  {
    while ( 1 ) /*0x5a698e*/
    {
      result = 2 * v20; /*0x5a698e*/
      if ( v19 >= 2 * v20 ) /*0x5a6992*/
        return result; /*0x5a6992*/
      do /*0x5a69be*/
      {
        v23 = (unsigned int)Random::State(&stru_ABE890); /*0x5a69a2*/
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
        v8 = (unsigned int *)UnitClass::Construct((int)v9, *((unsigned int *)MEMORY[0xA83CE4] + Index), Owner); /*0x5a6a2b*/
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a69cf*/
        if ( !v6 ) /*0x5a69d6*/
          goto LABEL_13; /*0x5a69d6*/
        ExitCellByName = Factory::FindExitCellByName(*(&off_82B180 + v5)); /*0x5a69df*/
        v8 = (unsigned int *)InfantryClass::Construct((int)v6, *((unsigned int *)dword_A8E34C + ExitCellByName), Owner); /*0x5a69f6*/
      }
LABEL_14:
      v11 = 0; /*0x5a6a31*/
      v17 = 0; /*0x5a6a33*/
      while ( v11 < 60 ) /*0x5a6a3a*/
      {
        v12 = *(unsigned int *)(a1 + 16) - 1; /*0x5a6a4b*/
        v24 = *(unsigned int *)(a1 + 16); /*0x5a6a4f*/
        v27 = (double)v24; /*0x5a6a57*/
        do /*0x5a6a82*/
        {
          v25 = (unsigned int)Random::State(&stru_ABE890); /*0x5a6a65*/
          v13 = Math::RoundToInt((double)v25 * v27 * 2.328306437080797e-10); /*0x5a6a7b*/
        }
        while ( v13 > v12 ); /*0x5a6a82*/
        v18 = *(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v13); /*0x5a6a9a*/
        if ( ((LayerClass *)&dword_87F7E8)->IsWithinUsableArea( (__int16 *)&v18, 1) /*0x5a6aba*/
          && !*((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((__int16 *)&v18) + 57) )
        {
          do /*0x5a6aea*/
          {
            v26 = (unsigned int)Random::State(&stru_ABE890); /*0x5a6ad0*/
            v14 = Math::RoundToInt((double)v26 * 0.000000001862645149664638); /*0x5a6ae2*/
          }
          while ( v14 > 7 ); /*0x5a6aea*/
          v28[0] = ((__int16)v18 << 8) + 128; /*0x5a6b0c*/
          v15 = *v8; /*0x5a6b10*/
          v28[1] = ((short)(((v18) >> 16) & 0xFFFF) << 8) + 128; /*0x5a6b16*/
          v28[2] = 0; /*0x5a6b1d*/
          if ( (*(unsigned __int8 (**)(unsigned int *, unsigned int *, unsigned int))(v15 + 216))(v8, v28, 32 * v14) ) /*0x5a6b21*/
          {
            v16 = *(unsigned int *)(v8->Vt34Thunk() + 160); /*0x5a6b35*/
            v8->health = v16; /*0x5a6b3d*/
            v8->estimatedHealth = v16; /*0x5a6b40*/
            v8->ModifyCellTiles(2); /*0x5a6b47*/
            v17 = 1; /*0x5a6b51*/
            (v21) = ((v21) & 0xFFFFFFFF00000000ull) | ((v21 + 1) & 0xFFFFFFFFull); /*0x5a6b57*/
          }
        }
        ++v11; /*0x5a6b5f*/
        if ( v17 ) /*0x5a6b62*/
          goto LABEL_27; /*0x5a6b62*/
      }
      if ( v8 ) /*0x5a6b72*/
        v8->Seek_0(1); /*0x5a6b7a*/
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
// 0x5A6BA0
namespace gamemd {
int E4Recv_5A6BA0::sub_5A6BA0()
{
  int vtable0_high; // eax
  int vtable0_low; // ecx
  int v3; // edx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  CellLand *v8; // eax
  int16_t v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  vtable0_high = (*((signed short *)(this->ptr_0 + 2))); /*0x5a6ba3*/
  vtable0_low = (this->ptr_0); /*0x5a6ba7*/
  v3 = vtable0_low + 7; /*0x5a6bae*/
  v4 = vtable0_low - 7; /*0x5a6bb1*/
  v5 = vtable0_high - 7; /*0x5a6bb6*/
  v11 = vtable0_low + 7; /*0x5a6bb9*/
  v6 = vtable0_high + 7; /*0x5a6bbd*/
  if ( (((((vtable0_low - 7) ^ (vtable0_low + 7)) & ((vtable0_low - 7) ^ ((vtable0_low - 7) - (vtable0_low + 7))))) < 0) ) /*0x5a6bc0*/
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
    v8 = (CellLand *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v10); /*0x5a6bdc*/
    if ( (uint8_t)CellLand::IsBuildable(v8) ) /*0x5a6be3*/
      return 0; /*0x5a6bfa*/
    if ( ++v7 >= v6 ) /*0x5a6bef*/
    {
      v3 = v11; /*0x5a6bf1*/
      goto LABEL_6; /*0x5a6bf1*/
    }
  }
}
}
// 0x5A6C10
namespace gamemd {
int PlaceMapSeedClassBuildings(int aP0, ObjectClass * aP1, int a3, int a4)
{

  unsigned int *v4; // ebp
  unsigned int *result; // eax
  unsigned int *v6; // ebx
  int v7; // esi
  int i; // edi
  __int16 v9; // cx
  int v10; // eax
  int v11; // ecx
  unsigned char *v12; // eax
  int v13; // ecx
  unsigned __int8 *v14; // esi
  int v15; // edx
  __int16 v16[2]; // [esp+8h] [ebp-14h] BYREF
  unsigned int *v17; // [esp+Ch] [ebp-10h]
  unsigned __int16 *v18; // [esp+10h] [ebp-Ch]
  unsigned short *v19; // [esp+14h] [ebp-8h]
  unsigned int *v20; // [esp+18h] [ebp-4h]

  v19 = aP1; /*0x5a6c1a*/
  v4 = *(unsigned int **)(*(unsigned int *)&stru_A8E960.random[440] + 4 * aP0); /*0x5a6c1e*/
  result = (unsigned int *)(*(int (**)(unsigned int *))(*v4 + 156))(v4); /*0x5a6c26*/
  v20 = result; /*0x5a6c2e*/
  if ( result ) /*0x5a6c32*/
  {
    result = (unsigned int *)v4[186]; /*0x5a6c38*/
    v6 = 0; /*0x5a6c3e*/
    v17 = 0; /*0x5a6c42*/
    if ( (int)result > 0 ) /*0x5a6c46*/
    {
      v7 = dword_ABED04; /*0x5a6c4d*/
      do /*0x5a6d66*/
      {
        for ( i = 0; i < v4[185]; ++i ) /*0x5a6c5e*/
        {
          v9 = v19[1] + (unsigned short)v6; /*0x5a6c6e*/
          LOWORD(v18) = i + *v19; /*0x5a6c75*/
          HIWORD(v18) = v9; /*0x5a6c7a*/
          *(unsigned int *)v16 = v18; /*0x5a6c83*/
          v10 = v9; /*0x5a6c8a*/
          v11 = v9 + (__int16)v18; /*0x5a6c8d*/
          if ( v11 > v7 ) /*0x5a6c92*/
          {
            if ( (__int16)v18 - v10 >= v7 || v10 - (__int16)v18 >= v7 || v11 > dword_ABED08 ) /*0x5a6cb4*/
            {
              v6 = v17; /*0x5a6d46*/
            }
            else
            {
              v12 = (((CellCoord *)&dword_87F7E8)->To_CellObj(v16); /*0x5a6cc4*/
              v6 = v17; /*0x5a6ccf*/
              v13 = i + (unsigned int)v17 * v4[185]; /*0x5a6cda*/
              v14 = (unsigned __int8 *)v20[v13 + 4]; /*0x5a6cdc*/
              if ( v14 ) /*0x5a6ce2*/
              {
                v15 = v4[165]; /*0x5a6ce4*/
                v12->Tactical_11A = v13; /*0x5a6cea*/
                v12->u32_38 = v15; /*0x5a6cf4*/
                if ( a4 != -1 ) /*0x5a6cfa*/
                  v12->u32_11B = a4 + v14[40] - 4; /*0x5a6d04*/
                v12->u32_11C = v14[42]; /*0x5a6d0d*/
                if ( dword_ABED10 ) /*0x5a6d1b*/
                  *(unsigned int *)&dword_ABED10[40 * v16[0] + 28 + 40 * g_MapCellWidth * v16[1]] = a3; /*0x5a6d3a*/
              }
              v7 = dword_ABED04; /*0x5a6d3e*/
            }
          }
        }
        result = (unsigned int *)v4[186]; /*0x5a6d59*/
        v6 = (unsigned int *)((char *)v6 + 1); /*0x5a6d5f*/
        v17 = v6; /*0x5a6d62*/
      }
      while ( (int)v6 < (int)result ); /*0x5a6d66*/
    }
  }
  return result; /*0x5a6d6e*/

}
}
// 0x5A6D80
namespace gamemd {
unsigned int * FindClearPlacementCell(unsigned int *a0, MapSeedClass * aP1, MapSeedClass * aP2, int a4)
{

  int v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  __int16 v11; // ax
  int v12; // eax
  unsigned __int16 *v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  unsigned short *v18; // esi
  __int16 v19; // cx
  __int16 v20[2]; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+14h] [ebp-24h]
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  char v24[8]; // [esp+20h] [ebp-18h]
  int v25[2]; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+30h] [ebp-8h]
  int v27; // [esp+34h] [ebp-4h]
  int v28; // [esp+40h] [ebp+8h]
  int v29; // [esp+44h] [ebp+Ch]
  unsigned __int16 *v30; // [esp+44h] [ebp+Ch]
  unsigned __int16 *v31; // [esp+48h] [ebp+10h]

  v4 = *(unsigned int *)aP1; /*0x5a6d8d*/
  v5 = 0; /*0x5a6d91*/
  v24[0] = a4 == 4; /*0x5a6d96*/
  *(unsigned int *)v20 = v4; /*0x5a6da0*/
  v23 = 0; /*0x5a6da4*/
  v21 = 0; /*0x5a6da8*/
  v22 = 0; /*0x5a6dac*/
  v25[0] = 0; /*0x5a6dbe*/
  v25[1] = 0; /*0x5a6dc2*/
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
    if ( v20[0] >= *aP2 + aP2[2] || v20[1] >= aP2[1] + aP2[3] ) /*0x5a6e24*/
    {
      *a0 = 0; /*0x5a6e90*/
      return a0; /*0x5a6e96*/
    }
    if ( *((unsigned int *)(((CellCoord *)&dword_87F7E8)->To_CellObj(v20) + 14) == dword_ABC2B0 ) /*0x5a6e3f*/
      break; /*0x5a6e3f*/
    v9 = a4 & 7; /*0x5a6e45*/
    LOWORD(v29) = v20[0] + LOWORD(dword_89F688[v9]); /*0x5a6e65*/
    HIWORD(v29) = v20[1] + HIWORD(dword_89F688[v9]); /*0x5a6e6a*/
    *(unsigned int *)v20 = v29; /*0x5a6e73*/
  }
  v11 = v20[0]; /*0x5a6e99*/
  while ( 1 ) /*0x5a6e9d*/
  {
    if ( v11 >= *aP2 + aP2[2] || v20[1] >= aP2[1] + aP2[3] ) /*0x5a6ebc*/
    {
      *a0 = 0; /*0x5a6f4c*/
      return a0; /*0x5a6f52*/
    }
    v25[0] = v5 + v11; /*0x5a6ec0*/
    v25[1] = v23 + v20[1]; /*0x5a6ece*/
    v26 = v6 + v21; /*0x5a6edc*/
    v27 = v7 + v22; /*0x5a6ee4*/
    if ( (unsigned __int8)IsAreaClearMap(v25, v24[0], v24[0]) ) /*0x5a6eed*/
      break; /*0x5a6eed*/
    v12 = a4 & 7; /*0x5a6efa*/
    HIWORD(v30) = v20[1] + HIWORD(dword_89F688[v12]); /*0x5a6f23*/
    v11 = v20[0] + LOWORD(dword_89F688[v12]); /*0x5a6f28*/
    LOWORD(v30) = v11; /*0x5a6f1e*/
    *(unsigned int *)v20 = v30; /*0x5a6f2c*/
  }
  v13 = *(unsigned __int16 **)v20; /*0x5a6f67*/
  v14 = v20[0] - *aP1; /*0x5a6f6e*/
  if ( v20[1] - aP1[1] > v14 ) /*0x5a6f72*/
    v14 = v20[1] - aP1[1]; /*0x5a6f74*/
  if ( v14 > 0 ) /*0x5a6f78*/
  {
    *(unsigned long long *)v24 = (unsigned int)(v14 + 1); /*0x5a6f89*/
    *(double *)v25 = (double)*(__int64 *)v24; /*0x5a6f91*/
    do /*0x5a6fc0*/
    {
      *(unsigned long long *)v24 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a6f9f*/
      (v15) = ((v15) & ~0xFFFF) | ((Math::RoundToInt((double)*(__int64 *)v24 * *(double *)v25 * 2.328306437080797e-10)) & 0xFFFF); /*0x5a6fb9*/
    }
    while ( v15 > (unsigned int)v14 ); /*0x5a6fc0*/
    v28 = v15; /*0x5a6fc4*/
    if ( v15 > 0 ) /*0x5a6fc8*/
    {
      v16 = v21 + v6; /*0x5a6fe0*/
      v17 = v22 + v7; /*0x5a6fe2*/
      v18 = (unsigned short *)(4 * (((unsigned char)a4 - 4) & 7) + 9041544); /*0x5a6fe4*/
      v19 = v20[0]; /*0x5a6feb*/
      while ( 1 ) /*0x5a7000*/
      {
        LOWORD(v31) = v19 + *v18; /*0x5a7000*/
        HIWORD(v31) = v20[1] + v18[1]; /*0x5a700b*/
        v25[0] = v5 + (__int16)v31; /*0x5a7018*/
        v25[1] = v23 + SHIWORD(v31); /*0x5a7022*/
        v26 = v16; /*0x5a7026*/
        v27 = v17; /*0x5a702a*/
        if ( !(unsigned __int8)IsAreaClearMap(v25, 0, 0) ) /*0x5a702e*/
          break; /*0x5a702e*/
        v19 = (__int16)v31; /*0x5a703b*/
        *(unsigned int *)v20 = v31; /*0x5a7040*/
        if ( --v28 <= 0 ) /*0x5a704a*/
        {
          *a0 = v31; /*0x5a7053*/
          return a0; /*0x5a7059*/
        }
      }
    }
    v13 = *(unsigned __int16 **)v20; /*0x5a705c*/
  }
  *a0 = v13; /*0x5a7067*/
  return a0; /*0x5a6e7b*/

}
}
// 0x5A7070
namespace gamemd {
unsigned int * globalHelper_0A7070(MapSeedClass * aP0, int16_t *a1, MapSeedClass * aP2, int a4)
{

  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int16 *v9; // esi
  unsigned __int16 *v10; // edi
  int v11; // eax
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // si
  int v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch]
  int v19; // [esp+1Ch] [ebp-28h]
  __int64 v20; // [esp+24h] [ebp-20h]
  int v21; // [esp+2Ch] [ebp-18h]
  __int16 v22; // [esp+2Eh] [ebp-16h]
  int v23; // [esp+34h] [ebp-10h] BYREF
  int v24; // [esp+38h] [ebp-Ch]
  int v25; // [esp+3Ch] [ebp-8h]
  int v26; // [esp+40h] [ebp-4h]
  unsigned __int16 *v27; // [esp+54h] [ebp+10h]
  unsigned __int16 *v28; // [esp+54h] [ebp+10h]

  v4 = *(unsigned int *)a1; /*0x5a7080*/
  v21 = *(unsigned int *)a1; /*0x5a708e*/
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
    v19 = 6; /*0x5a70c0*/
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
  while ( (__int16)v4 < aP2[2] + *aP2 + 1 ) /*0x5a70f2*/
  {
    if ( (short)(((v21) >> 16) & 0xFFFF) >= aP2[3] + aP2[1] + 1 ) /*0x5a7117*/
      break; /*0x5a7117*/
    v23 = v16 + (__int16)v4; /*0x5a711f*/
    v24 = v17 + (short)(((v21) >> 16) & 0xFFFF); /*0x5a712d*/
    v25 = v5 + v18; /*0x5a713b*/
    v26 = v6 + v19; /*0x5a7143*/
    if ( !(unsigned __int8)IsAreaClearMap(&v23, a4 == 4, a4 == 4) ) /*0x5a714c*/
      break; /*0x5a714c*/
    v7 = a4 & 7; /*0x5a7159*/
    LOWORD(v4) = v4 + LOWORD(dword_89F688[v7]); /*0x5a7185*/
    HIWORD(v21) += HIWORD(dword_89F688[v7]); /*0x5a7189*/
  }
  v8 = ((unsigned char)a4 - 4) & 7; /*0x5a719d*/
  v9 = (__int16 *)(4 * v8 + 9041544); /*0x5a71ac*/
  HIWORD(v27) = (((v21) >> 16) & 0xFFFF) + HIWORD(dword_89F688[v8]); /*0x5a71c1*/
  LOWORD(v27) = v4 + LOWORD(dword_89F688[v8]); /*0x5a71c6*/
  v10 = v27; /*0x5a71cb*/
  v11 = (__int16)v27 - *a1; /*0x5a71d7*/
  v22 = HIWORD(v27); /*0x5a71db*/
  if ( v11 <= SHIWORD(v27) - a1[1] ) /*0x5a71df*/
    v11 = SHIWORD(v27) - a1[1]; /*0x5a71e1*/
  if ( v11 > 6 ) /*0x5a71e6*/
  {
    do /*0x5a720e*/
    {
      v20 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a71f4*/
      (v12) = ((v12) & ~0xFFFF) | ((Math::RoundToInt((double)v20 * 9.31322574832319e-10)) & 0xFFFF); /*0x5a7206*/
    }
    while ( (unsigned int)v12 > 3 ); /*0x5a720e*/
    if ( v12 > 0 ) /*0x5a7212*/
    {
      v13 = *v9; /*0x5a7214*/
      v14 = v9[1]; /*0x5a7217*/
      do /*0x5a7237*/
      {
        LOWORD(v28) = v13 + (unsigned short)v10; /*0x5a721e*/
        --v12; /*0x5a7229*/
        HIWORD(v28) = v14 + v22; /*0x5a722a*/
        v10 = v28; /*0x5a722f*/
        v22 += v14; /*0x5a7233*/
      }
      while ( v12 ); /*0x5a7237*/
    }
  }
  *aP0 = v10; /*0x5a723d*/
  return aP0; /*0x5a723f*/

}
}
// 0x5A7250
namespace gamemd {
int IsAreaClearMap(MapClass * aP0, char a2, char a3)
{

  int result; // eax
  int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int *v12; // esi
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  result = *aP0; /*0x5a7262*/
  v5 = (__int16)*aP0; /*0x5a7268*/
  v14 = aP0[1]; /*0x5a726f*/
  v15 = (__int16)v14 + v5; /*0x5a7278*/
  if ( v15 <= dword_ABED04 ) /*0x5a727c*/
    goto LABEL_31; /*0x5a727c*/
  if ( v5 - (__int16)v14 >= dword_ABED04 ) /*0x5a7288*/
    goto LABEL_31; /*0x5a7288*/
  if ( (__int16)v14 - v5 >= dword_ABED04 ) /*0x5a7292*/
    goto LABEL_31; /*0x5a7292*/
  if ( v15 > dword_ABED08 ) /*0x5a72a4*/
    goto LABEL_31; /*0x5a72a4*/
  v6 = aP0[2]; /*0x5a72aa*/
  v7 = (__int16)(result + v6 - 1); /*0x5a72b1*/
  v15 = (__int16)v14 + v7; /*0x5a72bc*/
  if ( v15 <= dword_ABED04 /*0x5a7377*/
    || v7 - (__int16)v14 >= dword_ABED04
    || (__int16)v14 - v7 >= dword_ABED04
    || v15 > dword_ABED08
    || (v16 = aP0[3] + v14 - 1, v15 = (__int16)v16 + (__int16)result, v15 <= dword_ABED04)
    || (__int16)result - (__int16)v16 >= dword_ABED04
    || (__int16)v16 - (__int16)result >= dword_ABED04
    || v15 > dword_ABED08
    || (v8 = (__int16)(result + v6 - 1), v9 = (__int16)v16, v16 = (__int16)v16 + v8, v16 <= dword_ABED04)
    || v8 - v9 >= dword_ABED04
    || v9 - v8 >= dword_ABED04
    || v16 > dword_ABED08 )
  {
LABEL_31:
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5a742a*/
  }
  else
  {
    v10 = v14; /*0x5a7384*/
    if ( v14 < v14 + aP0[3] ) /*0x5a738a*/
    {
      do /*0x5a7418*/
      {
        v11 = result; /*0x5a7390*/
        if ( result < v6 + result ) /*0x5a7397*/
        {
          do /*0x5a73a3*/
          {
            (v14) = ((v14) & ~0xFFFF) | ((v11) & 0xFFFF); /*0x5a73a3*/
            (v14) = ((v14) & ~(0xFFFF << 16)) | (((v10) & 0xFFFF) << 16); /*0x5a73a8*/
            v12 = (int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((__int16 *)&v14); /*0x5a73b2*/
            if ( sub_4866D0(v12) ) /*0x5a73b6*/
            {
              if ( !a2 ) /*0x5a73c5*/
                goto LABEL_31; /*0x5a73c5*/
            }
            else if ( sub_4866F0(v12) ) /*0x5a73cb*/
            {
              if ( !a3 ) /*0x5a73da*/
                goto LABEL_31; /*0x5a73da*/
            }
            else if ( !(unsigned __int8)Cell::IsEmpty(v12) && !(unsigned __int8)CellClass::InMapDataRange(v12) ) /*0x5a73eb*/
            {
              result = CellClass::InBounds(v12); /*0x5a73f6*/
              if ( !(unsigned char)result ) /*0x5a73fd*/
                goto LABEL_31; /*0x5a73fd*/
            }
            v6 = aP0[2]; /*0x5a73ff*/
            result = *aP0; /*0x5a7402*/
            ++v11; /*0x5a7405*/
          }
          while ( v11 < v6 + *aP0 ); /*0x5a73a3*/
        }
        ++v10; /*0x5a740d*/
      }
      while ( v10 < aP0[3] + aP0[1] ); /*0x5a7418*/
    }
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5a7421*/
  }
  return result; /*0x5a741e*/

}
}
// 0x5A7440
namespace gamemd {
int MapClass_IsAreaUniform(int * a1, char a2)
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
  v5 = (int16_t)*a1; /*0x5a7457*/
  v14 = (int16_t)v4 + v5; /*0x5a7462*/
  if ( v14 > dword_ABED04 && v5 - (int16_t)v4 < dword_ABED04 && (int16_t)v4 - v5 < dword_ABED04 && v14 <= dword_ABED08 ) /*0x5a748e*/
  {
    v15 = a1[2] + v3 - 1; /*0x5a749b*/
    v14 = (int16_t)v4 + (int16_t)v15; /*0x5a74aa*/
    if ( v14 > dword_ABED04 /*0x5a74d6*/
      && (int16_t)v15 - (int16_t)v4 < dword_ABED04
      && (int16_t)v4 - (int16_t)v15 < dword_ABED04
      && v14 <= dword_ABED08 )
    {
      v16 = a1[3] + v4 - 1; /*0x5a74e3*/
      v14 = (int16_t)v16 + (int16_t)v3; /*0x5a74f2*/
      if ( v14 > dword_ABED04 /*0x5a751e*/
        && (int16_t)v3 - (int16_t)v16 < dword_ABED04
        && (int16_t)v16 - (int16_t)v3 < dword_ABED04
        && v14 <= dword_ABED08 )
      {
        v6 = (int16_t)v16; /*0x5a7529*/
        v16 = (int16_t)v16 + (int16_t)v15; /*0x5a7533*/
        if ( v16 > dword_ABED04 /*0x5a755f*/
          && (int16_t)v15 - v6 < dword_ABED04
          && v6 - (int16_t)v15 < dword_ABED04
          && v16 <= dword_ABED08 )
        {
          (*((unsigned short *)&(v14))) = v3; /*0x5a756f*/
          (*(((unsigned short *)&(v14)) + 1)) = v4; /*0x5a7574*/
          v7 = (char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v14); /*0x5a7579*/
          v8 = a1[1]; /*0x5a757e*/
          v9 = v8 + a1[3]; /*0x5a758b*/
          v16 = v7->u32_11B; /*0x5a758d*/
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
            (*((unsigned short *)&(v14))) = v10; /*0x5a75a8*/
            (*(((unsigned short *)&(v14)) + 1)) = v8; /*0x5a75b3*/
            v11 = (char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v14); /*0x5a75bd*/
            if ( v11->u32_11B != v16 ) /*0x5a75cc*/
              break; /*0x5a75cc*/
            if ( (uint8_t)sub_4866D0(v11) || (uint8_t)sub_4866F0(v11) ) /*0x5a75db*/
            {
              if ( !a2 ) /*0x5a760d*/
                return 0; /*0x5a760d*/
            }
            else if ( !(v11)->IsEmpty() /*0x5a7603*/
                   && !(uint8_t)CellClass::InMapDataRange(v11)
                   && !(uint8_t)CellClass::InBounds(v11) )
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
// 0x5A78D0
namespace gamemd {
unsigned int PlaceMapSeedBuildingsStrategic(int a1)
{

  unsigned int *v1; // edi
  signed int v2; // ecx
  unsigned int result; // eax
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int *v8; // edx
  int v9; // edi
  char v10; // bl
  unsigned int v11; // eax
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
  unsigned short v28[2]; // [esp+2Ch] [ebp-78h] BYREF
  int v29; // [esp+30h] [ebp-74h]
  int v30; // [esp+34h] [ebp-70h]
  int v31; // [esp+38h] [ebp-6Ch]
  __int64 v32; // [esp+3Ch] [ebp-68h]
  __int64 v33; // [esp+44h] [ebp-60h]
  __int64 v34; // [esp+4Ch] [ebp-58h]
  int v35; // [esp+54h] [ebp-50h]
  int v36; // [esp+58h] [ebp-4Ch]
  int v37; // [esp+5Ch] [ebp-48h]
  unsigned int v38[17]; // [esp+60h] [ebp-44h] BYREF

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
  v2 = a1[4]; /*0x5a7955*/
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
      v6 = v1[4] - 1; /*0x5a79c3*/
      v34 = v1[4]; /*0x5a79c7*/
      v22 = (double)v34; /*0x5a79cf*/
      do /*0x5a79fe*/
      {
        v33 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a79dd*/
        (v7) = ((v7) & ~0xFFFF) | ((Math::RoundToInt((double)v33 * v22 * 2.328306437080797e-10)) & 0xFFFF); /*0x5a79f7*/
      }
      while ( v7 > v6 ); /*0x5a79fe*/
      v8 = (unsigned int *)v1[1]; /*0x5a7a00*/
      v9 = 0; /*0x5a7a03*/
      v10 = 0; /*0x5a7a05*/
      v11 = v8[v7]; /*0x5a7a07*/
      v12 = (short)(((v11) >> 16) & 0xFFFF); /*0x5a7a0e*/
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
        if ( CellClass::ProcessUpdate((CellClass *)&v24) ) /*0x5a7a4c*/
          v10 = 1; /*0x5a7a55*/
        ++v9; /*0x5a7a5b*/
        v23 += 4; /*0x5a7a61*/
        if ( v10 ) /*0x5a7a65*/
        {
          do /*0x5a7a99*/
          {
            v32 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a7a7b*/
            (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt((double)v32 * 0.000000001396983862248478)) & 0xFFFF); /*0x5a7a91*/
          }
          while ( v16 > 5 ); /*0x5a7a99*/
          v17 = 0; /*0x5a7aa1*/
          v18 = v16 + dword_AA10A4 + 8; /*0x5a7aa3*/
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
// 0x5A7FA0
namespace gamemd {
int IsoTile_Draw(int a1, unsigned short * a2, char a3)
{

  unsigned short *v3; // esi
  unsigned int *v4; // edi
  unsigned int *result; // eax
  int v6; // ebp
  int v7; // edi
  int i; // ebx
  __int16 v9; // dx
  int v10; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // [esp+8h] [ebp-10h]
  unsigned int *v14; // [esp+Ch] [ebp-Ch]
  unsigned int *v16; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x5a7faa*/
  v4 = *(unsigned int **)(*(unsigned int *)&stru_A8E960.random[440] + 4 * a1); /*0x5a7fac*/
  v14 = v4; /*0x5a7fb5*/
  result = (unsigned int *)(*(int (**)(unsigned int *))(*v4 + 156))(v4); /*0x5a7fbb*/
  v16 = result; /*0x5a7fc3*/
  if ( result ) /*0x5a7fc7*/
  {
    result = 0; /*0x5a7fd3*/
    v13 = 0; /*0x5a7fd7*/
    if ( (int)v4[186] > 0 ) /*0x5a7fdb*/
    {
      v6 = dword_ABED04; /*0x5a7fe3*/
      while ( 1 ) /*0x5a7fef*/
      {
        v7 = v4[185]; /*0x5a7fef*/
        for ( i = 0; i < v7; v7 = v14[185] ) /*0x5a7ff9*/
        {
          v9 = v3[1] + (unsigned short)result; /*0x5a8005*/
          v10 = (__int16)(i + *v3); /*0x5a800c*/
          v11 = v9; /*0x5a800f*/
          v12 = v9 + v10; /*0x5a8012*/
          if ( v12 > v6 ) /*0x5a8017*/
          {
            if ( v10 - v11 >= v6 || v11 - v10 >= v6 || v12 > dword_ABED08 ) /*0x5a802f*/
            {
              result = (unsigned int *)v13; /*0x5a806a*/
            }
            else
            {
              result = (unsigned int *)v13; /*0x5a8031*/
              if ( v16[i + 4 + v13 * v7] ) /*0x5a803e*/
              {
                LOBYTE(dword_ABED10[40 * v10 + 35 + 40 * g_MapCellWidth * v11]) = a3; /*0x5a805e*/
                v6 = dword_ABED04; /*0x5a8062*/
              }
            }
          }
          v3 = a2; /*0x5a8072*/
          ++i; /*0x5a8076*/
        }
        result = (unsigned int *)((char *)result + 1); /*0x5a8089*/
        v13 = (int)result; /*0x5a808a*/
        if ( (int)result >= v14[186] ) /*0x5a8094*/
          break; /*0x5a8094*/
        v4 = v14; /*0x5a7feb*/
      }
    }
  }
  return result; /*0x5a809c*/

}
}
// 0x5A8720
namespace gamemd {
int PlaceNeutralCreeps(unsigned short * a1)
{

  void *v1; // eax
  IUnknown *OwnerHouseClass; // ebp
  int result; // eax
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int ExitCellByNameFactory; // eax
  unsigned int *v8; // esi
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
  unsigned int v31[3]; // [esp+50h] [ebp-Ch] BYREF

  v1 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a872c*/
  OwnerHouseClass = (IUnknown *)HouseClass::FindOwner(v1); /*0x5a8738*/
  v26 = OwnerHouseClass; /*0x5a873c*/
  do /*0x5a876e*/
  {
    v25 = (unsigned int)Random::State(&stru_ABE890); /*0x5a874a*/
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
        v27 = (unsigned int)Random::State(&stru_ABE890); /*0x5a87a2*/
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
        v8 = (unsigned int *)UnitClass::Construct( /*0x5a882b*/
                         (int)v9,
                         *((unsigned int *)MEMORY[0xA83CE4] + IndexBuildingTypeClass),
                         OwnerHouseClass);
      }
      else
      {
        v6 = __2_YAPAXI_Z(0x6F0u); /*0x5a87cf*/
        if ( !v6 ) /*0x5a87d6*/
          goto LABEL_13; /*0x5a87d6*/
        ExitCellByNameFactory = Factory::FindExitCellByName(*(&off_82B240 + v5)); /*0x5a87df*/
        v8 = (unsigned int *)InfantryClass::Construct( /*0x5a87f6*/
                         (int)v6,
                         *((unsigned int *)dword_A8E34C + ExitCellByNameFactory),
                         OwnerHouseClass);
      }
LABEL_14:
      v11 = 0; /*0x5a8831*/
      v20 = 0; /*0x5a8833*/
      while ( v11 < 60 ) /*0x5a883a*/
      {
        do /*0x5a8866*/
        {
          v28 = (unsigned int)Random::State(&stru_ABE890); /*0x5a884a*/
          v12 = Math::RoundToInt((double)v28 * 0.000000003958120943037356); /*0x5a8861*/
        }
        while ( v12 > 0x10 ); /*0x5a8866*/
        do /*0x5a888c*/
        {
          v29 = (unsigned int)Random::State(&stru_ABE890); /*0x5a8872*/
          v13 = Math::RoundToInt((double)v29 * 0.000000003958120943037356); /*0x5a8884*/
        }
        while ( v13 > 0x10 ); /*0x5a888c*/
        v14 = v12 - 8; /*0x5a8892*/
        v15 = v13 - 8 + *a1; /*0x5a889d*/
        v16 = v14 + a1->ptr_2; /*0x5a88a4*/
        (v25) = ((v25) & ~0xFFFF) | ((v15) & 0xFFFF); /*0x5a88a7*/
        (v25) = ((v25) & ~(0xFFFF << 16)) | (((v16) & 0xFFFF) << 16); /*0x5a88ac*/
        v21 = v25; /*0x5a88b9*/
        if ( ((LayerClass *)&dword_87F7E8)->IsWithinUsableArea( (__int16 *)&v21, 1) /*0x5a88df*/
          && !*((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((__int16 *)&v21) + 57) )
        {
          do /*0x5a890f*/
          {
            v30 = (unsigned int)Random::State(&stru_ABE890); /*0x5a88f5*/
            v17 = Math::RoundToInt((double)v30 * 0.000000001862645149664638); /*0x5a8907*/
          }
          while ( v17 > 7 ); /*0x5a890f*/
          v31[1] = ((short)(((v21) >> 16) & 0xFFFF) << 8) + 128; /*0x5a8931*/
          v18 = *v8; /*0x5a8935*/
          v31[0] = ((__int16)v21 << 8) + 128; /*0x5a893b*/
          v31[2] = 0; /*0x5a8942*/
          if ( (*(unsigned __int8 (**)(unsigned int *, unsigned int *, unsigned int))(v18 + 216))(v8, v31, 32 * v17) ) /*0x5a8946*/
          {
            v19 = *(unsigned int *)(v8->Vt34Thunk() + 160); /*0x5a895a*/
            v8->health = v19; /*0x5a8962*/
            v8->estimatedHealth = v19; /*0x5a8965*/
            v8->UpdateReveal(2); /*0x5a896c*/
            v20 = 1; /*0x5a8976*/
            ++v24; /*0x5a897c*/
          }
        }
        ++v11; /*0x5a8984*/
        if ( v20 ) /*0x5a8987*/
          goto LABEL_27; /*0x5a8987*/
      }
      if ( v8 ) /*0x5a8997*/
        v8->ScalarDtor_1(1); /*0x5a899f*/
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
// 0x5A89D0
namespace gamemd {
int MapSeed_ScheduleBuildings(int * a1)
{

  int v1; // ebx
  ObjectClass *v2; // esi
  int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  char *v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  unsigned int *v17; // ebx
  int v18; // esi
  unsigned int *v19; // ebp
  int v20; // eax
  unsigned int *v21; // esi
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  bool v25; // cc
  char *v26; // edi
  int v27; // edx
  int v28; // esi
  __int16 v29; // ax
  char *v30; // ebx
  int v31; // eax
  int v32; // ebp
  char *v33; // esi
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  char *v38; // eax
  bool v39; // zf
  char v40; // [esp+13h] [ebp-6055h]
  unsigned int v41[5]; // [esp+14h] [ebp-6054h] BYREF
  void *Block; // [esp+28h] [ebp-6040h]
  int v43; // [esp+2Ch] [ebp-603Ch]
  int v44; // [esp+30h] [ebp-6038h]
  int var6034; // [esp+34h] [ebp-6034h] BYREF
  int v46; // [esp+38h] [ebp-6030h]
  unsigned __int16 *v45; // [esp+3Ch] [ebp-602Ch]
  unsigned __int16 *v48; // [esp+40h] [ebp-6028h] BYREF
  unsigned int *v49; // [esp+44h] [ebp-6024h]
  CellStruct v50; // [esp+48h] [ebp-6020h] BYREF
  unsigned int v51[1024]; // [esp+5068h] [ebp-1000h]

  v1 = 0; /*0x5a89dd*/
  *(unsigned int *)&v50.q014 = 0; /*0x5a89e0*/
  v2 = (ObjectClass *)&v50.q020; /*0x5a89e4*/
  v3 = 1024; /*0x5a89e8*/
  do /*0x5a89f8*/
  {
    Object_Helper_5A99B0(v2); /*0x5a89ef*/
    v2 = &v2->abstractFlags; /*0x5a89f4*/
    --v3; /*0x5a89f7*/
  }
  while ( v3 ); /*0x5a89f8*/
  memset(&v50.q014, 0, 12); /*0x5a89fa*/
  v44 = 0; /*0x5a8a06*/
  do /*0x5a8a30*/
  {
    *(unsigned long long *)&v50.field_0 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a8a14*/
    (v4) = ((v4) & ~0xFFFF) | ((Math::RoundToInt((double)*(__int64 *)&v50.field_0 * 0.000000002561137080788877)) & 0xFFFF); /*0x5a8a26*/
    v5 = v4; /*0x5a8a2b*/
  }
  while ( v4 > 0xA ); /*0x5a8a30*/
  while ( 1 ) /*0x5a8a52*/
  {
    v6 = dword_ABAD20 + (int)(v5 + v1) % 11; /*0x5a8a52*/
    if ( Map_Helper_5A7D00(v6, a1, 0, 0) ) /*0x5a8a56*/
      break; /*0x5a8a56*/
    if ( ++v1 >= 11 ) /*0x5a8a63*/
      return 0; /*0x5a8a63*/
  }
  v8 = *a1; /*0x5a8a74*/
  v41[0] = v6; /*0x5a8a77*/
  v41[1] = v8; /*0x5a8a7b*/
  v41[3] = v8; /*0x5a8a7f*/
  v41[2] = 0xFFFF; /*0x5a8a87*/
  v41[4] = -1; /*0x5a8a94*/
  memcpy(&v50.__pad_8[20 * *(unsigned int *)&v50.__pad_8[20] + 24], v41, 0x14u); /*0x5a8ab2*/
  v51[*(unsigned int *)&v50.q01C] = timeGetTime(); /*0x5a8abe*/
  *(unsigned int *)&v50.q01C = (*(unsigned short *)&v50.q01C + 1) & 0x3FF; /*0x5a8ad5*/
  v9 = ++*(unsigned int *)&v50.q014; /*0x5a8ad4*/
  if ( !*(unsigned int *)&v50.q014 ) /*0x5a8adf*/
    return 0; /*0x5a8adf*/
  while ( v9 < 1020 ) /*0x5a8ae6*/
  {
    v40 = 1; /*0x5a8af0*/
    v10 = *(unsigned int *)&v50.__pad_8[20 * *(unsigned int *)&v50.__pad_8[16] + 24]; /*0x5a8af8*/
    v11 = &v50.__pad_8[20 * *(unsigned int *)&v50.__pad_8[16] + 24]; /*0x5a8afc*/
    v41[0] = v10; /*0x5a8b00*/
    v41[1] = *((unsigned int *)v11 + 1); /*0x5a8b0d*/
    v12 = *((unsigned int *)v11 + 2); /*0x5a8b11*/
    v41[2] = v12; /*0x5a8b14*/
    v41[3] = *((unsigned int *)v11 + 3); /*0x5a8b1b*/
    v41[4] = *((unsigned int *)v11 + 4); /*0x5a8b22*/
    v13 = 0; /*0x5a8b29*/
    v43 = 0; /*0x5a8b2d*/
    Block = 0; /*0x5a8b31*/
    if ( v10 == 0xFFFF ) /*0x5a8b35*/
      goto LABEL_48; /*0x5a8b35*/
    if ( v12 != 0xFFFF ) /*0x5a8b41*/
    {
      DrawIsoTile(v12, &v41[3], 0); /*0x5a8b4a*/
      v10 = v41[0]; /*0x5a8b4f*/
    }
    PlaceMapSeedClassBuildings(v10, &v41[1], -1, -1); /*0x5a8b5b*/
    v10 = v41[0]; /*0x5a8b60*/
    if ( v41[0] < dword_ABC1D4 || v41[0] >= dword_ABC1D4 + 101 ) /*0x5a8b73*/
    {
      if ( v41[0] < dword_ABBEC0 || v41[0] >= dword_ABBEC0 + 8 ) /*0x5a8b8a*/
        v14 = 0; /*0x5a8b95*/
      else
        v14 = v41[0] - dword_ABBEC0 + 101; /*0x5a8b90*/
    }
    else
    {
      v14 = v41[0] - dword_ABC1D4; /*0x5a8b77*/
    }
    v15 = 3 * v14; /*0x5a8b97*/
    v16 = dword_ABE370[3 * v14]; /*0x5a8b9a*/
    v17 = (unsigned int *)(4 * v15 + 11264880); /*0x5a8ba4*/
    v49 = v17; /*0x5a8bab*/
    if ( v16 > 1 ) /*0x5a8baf*/
    {
      v18 = v16 - (v41[4] != -1); /*0x5a8bc3*/
      v19 = (unsigned int *)__2_YAPAXI_Z(20 * v18); /*0x5a8bd1*/
      if ( v19 ) /*0x5a8bd8*/
      {
        v20 = v18 - 1; /*0x5a8bde*/
        if ( v18 - 1 >= 0 ) /*0x5a8be3*/
        {
          v21 = v19 + 2; /*0x5a8be5*/
          v22 = v20 + 1; /*0x5a8be8*/
          do /*0x5a8c27*/
          {
            *(v21 - 2) = 0xFFFF; /*0x5a8bf3*/
            *(v21 - 1) = *(unsigned int *)((CellStruct *)&v50.u8_10)->Set( 0, 0); /*0x5a8c09*/
            *v21 = 0xFFFF; /*0x5a8c0c*/
            v23 = *(unsigned int *)((CellStruct *)&v50)->Set( 0, 0); /*0x5a8c17*/
            v21[2] = -1; /*0x5a8c19*/
            v21[1] = v23; /*0x5a8c20*/
            v21 += 5; /*0x5a8c23*/
            --v22; /*0x5a8c26*/
          }
          while ( v22 ); /*0x5a8c27*/
          v13 = v43; /*0x5a8c29*/
        }
        v24 = 0; /*0x5a8c2f*/
        v25 = *v17 <= 0; /*0x5a8c31*/
        Block = v19; /*0x5a8c33*/
        v46 = 0; /*0x5a8c37*/
        if ( !v25 ) /*0x5a8c3b*/
        {
          v26 = (char *)(v19 + 1); /*0x5a8c41*/
          while ( 1 ) /*0x5a8c44*/
          {
            if ( v24 != v41[4] ) /*0x5a8c48*/
            {
              v27 = v17[1]; /*0x5a8c4e*/
              *(unsigned int *)v50.__pad_8 = *(unsigned int *)(v27 + 8 * v24); /*0x5a8c62*/
              *(unsigned int *)&v50.u32_C = *(unsigned int *)(v27 + 8 * v24 + 4); /*0x5a8c6b*/
              v28 = (v50.u32_C - 4) & 7; /*0x5a8c7b*/
              v29 = HIWORD(dword_89F688[v50.u32_C & 7]); /*0x5a8c90*/
              LOWORD(v45) = LOWORD(v41[1]) + *(unsigned short *)v50.__pad_8 + LOWORD(dword_89F688[v50.u32_C & 7]); /*0x5a8c94*/
              HIWORD(v45) = HIWORD(v41[1]) + *(unsigned short *)&v50.__pad_8[2] + v29; /*0x5a8ca0*/
              v48 = v45; /*0x5a8cae*/
              var6034 = 0; /*0x5a8cbb*/
              if ( !PlaceRandomTerrainFeatures(v28, &v48, 1, (unsigned int *)v26 + 1, (unsigned int *)v26 + 2, &var6034) ) /*0x5a8cca*/
              {
                v10 = v41[0]; /*0x5a8dc0*/
                v13 = v43; /*0x5a8dc4*/
                v40 = 0; /*0x5a8dc8*/
                goto LABEL_34; /*0x5a8dcd*/
              }
              if ( PlaceRandomTerrainFeatures(v28, &v48, 4, (unsigned int *)v26 - 1, v26, (int *)v26 + 3) ) /*0x5a8ce1*/
                DrawIsoTile(*((unsigned int *)v26 - 1), v26, 1); /*0x5a8d80*/
              else
                *((unsigned int *)v26 + 3) = var6034; /*0x5a8cf2*/
              DrawIsoTile(*((unsigned int *)v26 + 1), (unsigned short *)v26 + 4, 1); /*0x5a8d8b*/
              v17 = v49; /*0x5a8d94*/
              v24 = v46; /*0x5a8d98*/
              ++v43; /*0x5a8d9d*/
              v26 += 20; /*0x5a8da1*/
            }
            v25 = ++v24 < *v17; /*0x5a8da7*/
            v46 = v24; /*0x5a8da9*/
            if ( !v25 ) /*0x5a8dad*/
            {
              v10 = v41[0]; /*0x5a8db3*/
              v13 = v43; /*0x5a8db7*/
              goto LABEL_34; /*0x5a8dbb*/
            }
          }
        }
      }
      else
      {
        Block = 0; /*0x5a8cfa*/
      }
      v10 = v41[0]; /*0x5a8d02*/
    }
LABEL_34:
    if ( !v40 ) /*0x5a8d0c*/
    {
      v12 = v41[2]; /*0x5a8dd2*/
LABEL_48:
      if ( v10 != 0xFFFF ) /*0x5a8ddc*/
      {
        Object_Helper_5A7E90(v10, &v41[1]); /*0x5a8de2*/
        if ( v13 > 0 ) /*0x5a8de9*/
        {
          v33 = (char *)Block + 8; /*0x5a8def*/
          do /*0x5a8e1f*/
          {
            v34 = *((unsigned int *)v33 - 2); /*0x5a8df2*/
            if ( v34 != 0xFFFF ) /*0x5a8dfb*/
              DrawIsoTile(v34, (unsigned short *)v33 - 2, 0); /*0x5a8e02*/
            if ( *(unsigned int *)v33 != 0xFFFF ) /*0x5a8e0f*/
              DrawIsoTile(*(unsigned int *)v33, (unsigned short *)v33 + 2, 0); /*0x5a8e16*/
            v33 += 20; /*0x5a8e1b*/
            --v13; /*0x5a8e1e*/
          }
          while ( v13 ); /*0x5a8e1f*/
        }
        v12 = v41[2]; /*0x5a8e21*/
      }
      if ( v12 != 0xFFFF ) /*0x5a8e2b*/
        PlaceMapSeedClassBuildings(v12, &v41[3], -1, -1); /*0x5a8e37*/
LABEL_59:
      if ( Block ) /*0x5a8e42*/
        __3_YAXPAX_Z(Block); /*0x5a8e45*/
      goto LABEL_61; /*0x5a8e45*/
    }
    v30 = (char *)Block; /*0x5a8d12*/
    if ( Block ) /*0x5a8d18*/
    {
      if ( v13 > 0 ) /*0x5a8d20*/
      {
        v31 = *(unsigned int *)&v50.q01C; /*0x5a8d26*/
        v32 = v13; /*0x5a8d2a*/
        do /*0x5a8d72*/
        {
          if ( *(int *)&v50.q014 < 1024 ) /*0x5a8d34*/
          {
            memcpy(&v50.__pad_8[20 * v31 + 24], v30, 0x14u); /*0x5a8d44*/
            v51[*(unsigned int *)&v50.q01C] = timeGetTime(); /*0x5a8d50*/
            v31 = (*(unsigned short *)&v50.q01C + 1) & 0x3FF; /*0x5a8d60*/
            *(unsigned int *)&v50.q01C = v31; /*0x5a8d66*/
            ++*(unsigned int *)&v50.q014; /*0x5a8d6a*/
          }
          v30 += 20; /*0x5a8d6e*/
          --v32; /*0x5a8d71*/
        }
        while ( v32 ); /*0x5a8d72*/
      }
      goto LABEL_59; /*0x5a8d72*/
    }
LABEL_61:
    v9 = *(unsigned int *)&v50.q014; /*0x5a8e4d*/
    if ( *(unsigned int *)&v50.q014 ) /*0x5a8e53*/
    {
      v9 = *(unsigned int *)&v50.q014 - 1; /*0x5a8e60*/
      *(unsigned int *)&v50.q018 = (*(unsigned short *)&v50.q018 + 1) & 0x3FF; /*0x5a8e61*/
      --*(unsigned int *)&v50.q014; /*0x5a8e65*/
    }
    ++v44; /*0x5a8e70*/
    if ( !v9 ) /*0x5a8e74*/
      return v44 > 1; /*0x5a8e74*/
  }
  v35 = *(unsigned int *)&v50.q018; /*0x5a8e80*/
  do /*0x5a8edd*/
  {
    v36 = 5 * v35; /*0x5a8e84*/
    v37 = *(unsigned int *)&v50.__pad_8[4 * v36 + 24]; /*0x5a8e8b*/
    v38 = &v50.__pad_8[4 * v36 + 24]; /*0x5a8e8f*/
    v41[0] = v37; /*0x5a8e93*/
    v41[1] = *((unsigned int *)v38 + 1); /*0x5a8e9a*/
    v41[2] = *((unsigned int *)v38 + 2); /*0x5a8ea1*/
    v41[3] = *((unsigned int *)v38 + 3); /*0x5a8ea8*/
    v41[4] = *((unsigned int *)v38 + 4); /*0x5a8eb3*/
    PlaceMapSeedClassBuildings(v41[2], &v41[3], -1, -1); /*0x5a8eb7*/
    if ( !*(unsigned int *)&v50.q014 ) /*0x5a8ec2*/
      break; /*0x5a8ec2*/
    v35 = (*(unsigned short *)&v50.q018 + 1) & 0x3FF; /*0x5a8ecf*/
    v39 = *(unsigned int *)&v50.q014 == 1; /*0x5a8ed4*/
    *(unsigned int *)&v50.q018 = v35; /*0x5a8ed5*/
    --*(unsigned int *)&v50.q014; /*0x5a8ed9*/
  }
  while ( !v39 ); /*0x5a8edd*/
  return v44 > 1; /*0x5a8ee4*/

}
}
// 0x5A8F00
namespace gamemd {
char PlaceRandomTerrainFeatures(int a1, unsigned short * a2, int a3, unsigned int * a4, unsigned int * a5, int * a6)
{

  int v7; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  unsigned int v16; // eax
  int v17; // esi
  int v18; // edx
  int v19; // edi
  int v20; // ecx
  unsigned int *v21; // eax
  __int16 v22; // dx
  int v23; // edx
  __int16 v24; // dx
  int v26; // [esp+10h] [ebp-60h]
  unsigned int v29; // [esp+14h] [ebp-5Ch]
  int var50; // [esp+20h] [ebp-50h]
  int v32; // [esp+24h] [ebp-4Ch]
  double v35; // [esp+30h] [ebp-40h]
  int v36; // [esp+30h] [ebp-40h]
  double v37; // [esp+38h] [ebp-38h] BYREF
  __int64 v38; // [esp+40h] [ebp-30h]
  __int64 v39; // [esp+48h] [ebp-28h]
  __int64 v40; // [esp+50h] [ebp-20h]
  __int64 v41; // [esp+58h] [ebp-18h]
  __int64 v42; // [esp+60h] [ebp-10h]
  int v43; // [esp+68h] [ebp-8h]
  unsigned __int16 *v31; // [esp+74h] [ebp+4h]

  v7 = 1; /*0x5a8f0b*/
  v26 = 1; /*0x5a8f1a*/
  v32 = 1; /*0x5a8f1e*/
  if ( a4 <= 1 ) /*0x5a8f22*/
    goto LABEL_9; /*0x5a8f22*/
  __asm { fild [esp+70h+arg_0] } /*0x5a8f28*/
  v37 = 0.5; /*0x5a8f2c*/
  v35 = 2.0; /*0x5a8f3c*/
  __asm /*0x5a8f4c*/
  {
    fstp [esp+70h+var_4C]
    fld ds:dbl_7E48F0
    fcomp [esp+70h+var_4C]
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x5a8f5f*/
  {
    __asm /*0x5a8f61*/
    {
      fld [esp+70h+var_4C]
      fsub ds:dbl_7E1708
      fmul ds:dbl_7E1738
      fst [esp+70h+var_38]
      fadd ds:dbl_7E1708
      fstp [esp+70h+var_40]
    }
  }
  while ( 1 ) /*0x5a8f88*/
  {
    Random::Gaussian((int *)&byte_ABDFB8); /*0x5a8f88*/
    __asm /*0x5a8f8d*/
    {
      fmul [esp+70h+var_38]
      fadd [esp+70h+var_40]
      fcom ds:dbl_7E1708
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x5a8fa0*/
    {
      __asm /*0x5a8fa2*/
      {
        fcom [esp+70h+var_4C]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a8fab*/
        break; /*0x5a8fab*/
    }
    __asm { fstp st } /*0x5a8f81*/
  }
  (v11) = ((v11) & ~0xFFFF) | ((Math::RoundToInt(a3)) & 0xFFFF); /*0x5a8fad*/
  v26 = v11; /*0x5a8fb2*/
  v32 = v11; /*0x5a8fb6*/
  while ( 1 ) /*0x5a8fba*/
  {
    v7 = v26; /*0x5a8fba*/
LABEL_9:
    v12 = v7 + 4 * a1; /*0x5a8fc5*/
    v13 = (int)(&off_82B5B0)[v12]; /*0x5a8fd1*/
    v36 = dword_82B530[v12]; /*0x5a8fd7*/
    if ( v7 == 2 ) /*0x5a8fdb*/
    {
      v14 = 0; /*0x5a8fe7*/
      v38 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a8fe9*/
      __asm /*0x5a8ff1*/
      {
        fild [esp+70h+var_30]
        fmul ds:dbl_7ED898
        fcomp ds:dbl_7ED838
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a9006*/
      {
        v39 = (unsigned int)(v13 - 7); /*0x5a9012*/
        __asm /*0x5a9016*/
        {
          fild [esp+70h+var_28]
          fstp [esp+70h+var_5C]
        }
        do /*0x5a904b*/
        {
          v40 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a9028*/
          __asm /*0x5a9030*/
          {
            fild [esp+70h+var_20]
            fmul [esp+70h+var_5C]
            fmul ds:dbl_7ED898
            fadd ds:dbl_7E7FB0
          }
          (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt(a3)) & 0xFFFF); /*0x5a9044*/
        }
        while ( v16 > v13 - 1 ); /*0x5a904b*/
        goto LABEL_17; /*0x5a904b*/
      }
    }
    else
    {
      v14 = 0; /*0x5a904f*/
    }
    v41 = (unsigned int)v13; /*0x5a905b*/
    __asm /*0x5a905f*/
    {
      fild [esp+70h+var_18]
      fstp [esp+70h+var_5C]
    }
    do /*0x5a908e*/
    {
      v42 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a9071*/
      __asm /*0x5a9079*/
      {
        fild [esp+70h+var_10]
        fmul [esp+70h+var_5C]
        fmul ds:dbl_7ED898
      }
      (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt(a3)) & 0xFFFF); /*0x5a9087*/
    }
    while ( v16 > v13 - 1 ); /*0x5a908e*/
LABEL_17:
    v29 = v16; /*0x5a9092*/
    if ( v13 > 0 ) /*0x5a9096*/
      break; /*0x5a9096*/
LABEL_25:
    v23 = (v7 + 1) % (a4 + 1); /*0x5a912c*/
    v26 = v23; /*0x5a913b*/
    if ( !v23 ) /*0x5a913f*/
    {
      v26 = 1; /*0x5a9141*/
      v23 = 1; /*0x5a9149*/
    }
    if ( v23 == v32 ) /*0x5a9151*/
    {
      *a5 = 0xFFFF; /*0x5a91bd*/
      *a6 = 0; /*0x5a91cb*/
      *a7 = -1; /*0x5a91ce*/
      return 0; /*0x5a91d5*/
    }
  }
  while ( 1 ) /*0x5a90a0*/
  {
    v17 = 0; /*0x5a90a0*/
    v18 = *(unsigned int *)(v36 + 4 * ((int)(v14 + v29) % v13)); /*0x5a90ac*/
    v19 = 12 * v18 + 11264880; /*0x5a90b2*/
    v20 = dword_ABE370[3 * v18]; /*0x5a90b9*/
    if ( v20 > 0 ) /*0x5a90c2*/
    {
      v21 = (unsigned int *)(dword_ABE374[3 * v18] + 4); /*0x5a90c7*/
      do /*0x5a90d8*/
      {
        if ( *v21 == a1 ) /*0x5a90d0*/
          break; /*0x5a90d0*/
        ++v17; /*0x5a90d2*/
        v21 += 2; /*0x5a90d3*/
      }
      while ( v17 < v20 ); /*0x5a90d8*/
    }
    v22 = *a2; /*0x5a90e8*/
    v43 = *(unsigned int *)(*(unsigned int *)(v19 + 4) + 8 * v17); /*0x5a90eb*/
    (var50) = ((var50) & ~0xFFFF) | ((v22 - v43) & 0xFFFF); /*0x5a90f6*/
    HIWORD(var50) = a2[1] - (((v43) >> 16) & 0xFFFF); /*0x5a9104*/
    LODWORD(v37) = var50; /*0x5a910d*/
    if ( Map_Helper_5A7D00(*(unsigned int *)(v19 + 8), &v37, 1, 1) ) /*0x5a9114*/
      break; /*0x5a9114*/
    if ( ++v14 >= v13 ) /*0x5a9120*/
    {
      v7 = v26; /*0x5a9126*/
      goto LABEL_25; /*0x5a9126*/
    }
  }
  v24 = *a2; /*0x5a9162*/
  v43 = *(unsigned int *)(*(unsigned int *)(v19 + 4) + 8 * v17); /*0x5a9165*/
  LOWORD(v31) = v24 - v43; /*0x5a9179*/
  HIWORD(v31) = a2[1] - (((v43) >> 16) & 0xFFFF); /*0x5a917e*/
  *a6 = v31; /*0x5a9187*/
  *a5 = *(unsigned int *)(v19 + 8); /*0x5a9197*/
  *a7 = v17; /*0x5a919a*/
  return 1; /*0x5a9199*/

}
}
// 0x5A9C40
namespace gamemd {
unsigned int * InitializePathData()
{

  int *v1; // eax
  int *v2; // ebp
  int *v3; // eax
  int *v4; // eax
  int *v5; // ebp
  int *v6; // eax
  int *v7; // eax
  unsigned int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int *v27; // eax
  int *v28; // eax
  int *v29; // eax
  int *v30; // eax
  int *v31; // eax
  int *v32; // eax
  int *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int *v37; // eax
  int *v38; // eax
  int *v39; // eax
  int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int *v43; // eax
  int *v44; // eax
  int *v45; // eax
  int *v46; // eax
  int *v47; // eax
  int *v48; // eax
  int *v49; // eax
  int *v50; // eax
  int *v51; // eax
  int *v52; // eax
  int *v53; // eax
  int *v54; // eax
  int *v55; // eax
  int *v56; // eax
  int *v57; // eax
  int *v58; // eax
  int *v59; // eax
  int *v60; // eax
  int *v61; // eax
  int *v62; // eax
  int v63; // eax
  int *v64; // eax
  int *v65; // eax
  int v66; // eax
  int *v67; // eax
  int *v68; // eax
  int v69; // eax
  int *v70; // eax
  int *v71; // eax
  int *v72; // eax
  int *v73; // eax
  int v74; // eax
  int *v75; // eax
  int *v76; // eax
  int *v77; // eax
  int *v78; // eax
  int *v79; // eax
  int *v80; // eax
  int *v81; // eax
  int *v82; // eax
  int *v83; // eax
  int *v84; // eax
  int *v85; // eax
  int *v86; // eax
  int *v87; // eax
  int *v88; // eax
  int *v89; // eax
  int *v90; // eax
  int *v91; // eax
  int *v92; // eax
  int *v93; // eax
  int *v94; // eax
  int *v95; // eax
  int *v96; // eax
  int *v97; // eax
  int *v98; // eax
  int *v99; // eax
  int *v100; // eax
  int *v101; // eax
  int *v102; // eax
  int *v103; // eax
  int *v104; // eax
  int *v105; // eax
  int *v106; // eax
  int *v107; // eax
  int *v108; // eax
  int *v109; // eax
  int *v110; // eax
  int *v111; // eax
  int *v112; // eax
  int *v113; // eax
  int *v114; // eax
  int v115; // eax
  int v116; // ecx
  int v117; // edx
  int v119; // [esp+14h] [ebp-20h] BYREF
  int v120; // [esp+18h] [ebp-1Ch]
  int v121; // [esp+1Ch] [ebp-18h] BYREF
  int v122; // [esp+20h] [ebp-14h]
  int v123; // [esp+24h] [ebp-10h] BYREF
  int v124; // [esp+28h] [ebp-Ch]
  unsigned int v125[2]; // [esp+2Ch] [ebp-8h] BYREF

  v119 = 2; /*0x5a9c50*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[248] = 0; /*0x5a9c69*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[240] = 2; /*0x5a9c6f*/
  v1 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9c75*/
  v2 = v1; /*0x5a9c7a*/
  if ( v1 ) /*0x5a9c81*/
  {
    Array::ForEach(v1, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9c8c*/
    v3 = v2; /*0x5a9c91*/
  }
  else
  {
    v3 = 0; /*0x5a9c95*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[244] = v3; /*0x5a9c9b*/
  *v3 = 0; /*0x5a9ca0*/
  v3[1] = 0; /*0x5a9ca4*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[244] + 8) = v119; /*0x5a9cb3*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[244] + 12) = 1; /*0x5a9cc6*/
  v119 = 0; /*0x5a9cce*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[260] = 0; /*0x5a9cd8*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[252] = 2; /*0x5a9cde*/
  v4 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9ce4*/
  v5 = v4; /*0x5a9ce9*/
  if ( v4 ) /*0x5a9cf0*/
  {
    Array::ForEach(v4, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9cfb*/
    v6 = v5; /*0x5a9d00*/
  }
  else
  {
    v6 = 0; /*0x5a9d04*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[256] = v6; /*0x5a9d0a*/
  *v6 = v119; /*0x5a9d0f*/
  v6[1] = 0; /*0x5a9d13*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[256] + 8) = 1; /*0x5a9d22*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5a9d30*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[256] + 12) = 2; /*0x5a9d35*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5a9d38*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[272] = 0; /*0x5a9d4c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[264] = 2; /*0x5a9d52*/
  v7 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9d58*/
  v119 = (int)v7; /*0x5a9d62*/
  if ( v7 ) /*0x5a9d66*/
  {
    Array::ForEach(v7, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9d71*/
    v8 = (unsigned int *)v119; /*0x5a9d76*/
  }
  else
  {
    v8 = 0; /*0x5a9d7c*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[268] = v8; /*0x5a9d82*/
  *v8 = 0; /*0x5a9d87*/
  v8->ptr_2 = 0; /*0x5a9d8b*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[268] + 8) = v121; /*0x5a9d9a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[268] + 12) = 3; /*0x5a9dad*/
  v119 = 0; /*0x5a9db5*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[284] = 0; /*0x5a9dbf*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[276] = 2; /*0x5a9dc5*/
  v9 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9dcb*/
  v121 = (int)v9; /*0x5a9dd5*/
  if ( v9 ) /*0x5a9dd9*/
  {
    Array::ForEach(v9, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9de4*/
    v10 = (int *)v121; /*0x5a9de9*/
  }
  else
  {
    v10 = 0; /*0x5a9def*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[280] = v10; /*0x5a9df5*/
  *v10 = v119; /*0x5a9dfa*/
  v10->ptr_2 = 0; /*0x5a9dfe*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[280] + 8) = 1; /*0x5a9e0d*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[280] + 12) = 5; /*0x5a9e20*/
  v119 = 0; /*0x5a9e28*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[296] = 0; /*0x5a9e32*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[288] = 2; /*0x5a9e38*/
  v11 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9e3e*/
  v121 = (int)v11; /*0x5a9e48*/
  if ( v11 ) /*0x5a9e4c*/
  {
    Array::ForEach(v11, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9e57*/
    v12 = (int *)v121; /*0x5a9e5c*/
  }
  else
  {
    v12 = 0; /*0x5a9e62*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[292] = v12; /*0x5a9e68*/
  *v12 = v119; /*0x5a9e6d*/
  v12->ptr_2 = 0; /*0x5a9e71*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[292] + 8) = 0; /*0x5a9e80*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[292] + 12) = 6; /*0x5a9e93*/
  v119 = 1; /*0x5a9e9b*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[308] = 0; /*0x5a9ea5*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[300] = 2; /*0x5a9eab*/
  v13 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9eb1*/
  v121 = (int)v13; /*0x5a9ebb*/
  if ( v13 ) /*0x5a9ebf*/
  {
    Array::ForEach(v13, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9eca*/
    v14 = (int *)v121; /*0x5a9ecf*/
  }
  else
  {
    v14 = 0; /*0x5a9ed5*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[304] = v14; /*0x5a9edb*/
  *v14 = v119; /*0x5a9ee0*/
  v14->ptr_2 = 0; /*0x5a9ee4*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[304] + 8) = 65537; /*0x5a9ef3*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[304] + 12) = 7; /*0x5a9f06*/
  v119 = 1; /*0x5a9f0e*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[320] = 0; /*0x5a9f18*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[312] = 2; /*0x5a9f1e*/
  v15 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9f24*/
  v121 = (int)v15; /*0x5a9f2e*/
  if ( v15 ) /*0x5a9f32*/
  {
    Array::ForEach(v15, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9f3d*/
    v16 = (int *)v121; /*0x5a9f42*/
  }
  else
  {
    v16 = 0; /*0x5a9f48*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[316] = v16; /*0x5a9f4e*/
  *v16 = v119; /*0x5a9f53*/
  v16->ptr_2 = 1; /*0x5a9f5a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[316] + 8) = 65537; /*0x5a9f69*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[316] + 12) = 2; /*0x5a9f7c*/
  v119 = 1; /*0x5a9f84*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[332] = 0; /*0x5a9f8e*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[324] = 2; /*0x5a9f94*/
  v17 = (int *)__2_YAPAXI_Z(0x10u); /*0x5a9f9a*/
  v121 = (int)v17; /*0x5a9fa4*/
  if ( v17 ) /*0x5a9fa8*/
  {
    Array::ForEach(v17, 8, 2, (int (*)(int))Cell::Clear); /*0x5a9fb3*/
    v18 = (int *)v121; /*0x5a9fb8*/
  }
  else
  {
    v18 = 0; /*0x5a9fbe*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[328] = v18; /*0x5a9fc4*/
  *v18 = v119; /*0x5a9fc9*/
  v18->ptr_2 = 1; /*0x5a9fd0*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[328] + 8) = 65537; /*0x5a9fdf*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[328] + 12) = 3; /*0x5a9ff2*/
  v119 = 1; /*0x5a9ffa*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[344] = 0; /*0x5aa004*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[336] = 2; /*0x5aa00a*/
  v19 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa010*/
  v121 = (int)v19; /*0x5aa01a*/
  if ( v19 ) /*0x5aa01e*/
  {
    Array::ForEach(v19, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa029*/
    v20 = (int *)v121; /*0x5aa02e*/
  }
  else
  {
    v20 = 0; /*0x5aa034*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[340] = v20; /*0x5aa03a*/
  *v20 = v119; /*0x5aa03f*/
  v20->ptr_2 = 1; /*0x5aa046*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[340] + 8) = 0x10000; /*0x5aa055*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[340] + 12) = 4; /*0x5aa068*/
  v119 = 1; /*0x5aa070*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[356] = 0; /*0x5aa07a*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[348] = 2; /*0x5aa080*/
  v21 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa086*/
  v121 = (int)v21; /*0x5aa090*/
  if ( v21 ) /*0x5aa094*/
  {
    Array::ForEach(v21, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa09f*/
    v22 = (int *)v121; /*0x5aa0a4*/
  }
  else
  {
    v22 = 0; /*0x5aa0aa*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[352] = v22; /*0x5aa0b0*/
  *v22 = v119; /*0x5aa0b5*/
  v22->ptr_2 = 1; /*0x5aa0bc*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[352] + 8) = 0; /*0x5aa0cb*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[352] + 12) = 6; /*0x5aa0de*/
  v119 = 2; /*0x5aa0e6*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[368] = 0; /*0x5aa0f0*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[360] = 2; /*0x5aa0f6*/
  v23 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa0fc*/
  v121 = (int)v23; /*0x5aa106*/
  if ( v23 ) /*0x5aa10a*/
  {
    Array::ForEach(v23, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa115*/
    v24 = (int *)v121; /*0x5aa11a*/
  }
  else
  {
    v24 = 0; /*0x5aa120*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[364] = v24; /*0x5aa126*/
  *v24 = v119; /*0x5aa12b*/
  v24->ptr_2 = 1; /*0x5aa132*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[364] + 8) = 65537; /*0x5aa141*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[364] + 12) = 7; /*0x5aa154*/
  v119 = 2; /*0x5aa15c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[380] = 0; /*0x5aa166*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[372] = 2; /*0x5aa16c*/
  v25 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa172*/
  v121 = (int)v25; /*0x5aa17c*/
  if ( v25 ) /*0x5aa180*/
  {
    Array::ForEach(v25, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa18b*/
    v26 = (int *)v121; /*0x5aa190*/
  }
  else
  {
    v26 = 0; /*0x5aa196*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[376] = v26; /*0x5aa19c*/
  *v26 = v119; /*0x5aa1a1*/
  v26->ptr_2 = 1; /*0x5aa1a8*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[376] + 8) = 0; /*0x5aa1b7*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[376] + 12) = 0; /*0x5aa1c7*/
  v119 = 1; /*0x5aa1cf*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[392] = 0; /*0x5aa1d9*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[384] = 2; /*0x5aa1df*/
  v27 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa1e5*/
  v121 = (int)v27; /*0x5aa1ef*/
  if ( v27 ) /*0x5aa1f3*/
  {
    Array::ForEach(v27, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa1fe*/
    v28 = (int *)v121; /*0x5aa203*/
  }
  else
  {
    v28 = 0; /*0x5aa209*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[388] = v28; /*0x5aa20f*/
  *v28 = v119; /*0x5aa214*/
  v28[1] = 2; /*0x5aa21b*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[388] + 8) = 131073; /*0x5aa22a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[388] + 12) = 3; /*0x5aa23d*/
  v119 = 1; /*0x5aa245*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[404] = 0; /*0x5aa24f*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[396] = 2; /*0x5aa255*/
  v29 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa25b*/
  v121 = (int)v29; /*0x5aa265*/
  if ( v29 ) /*0x5aa269*/
  {
    Array::ForEach(v29, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa274*/
    v30 = (int *)v121; /*0x5aa279*/
  }
  else
  {
    v30 = 0; /*0x5aa27f*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[400] = v30; /*0x5aa285*/
  *v30 = v119; /*0x5aa28a*/
  v30[1] = 2; /*0x5aa291*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[400] + 8) = 0x10000; /*0x5aa2a0*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[400] + 12) = 4; /*0x5aa2b3*/
  v119 = 1; /*0x5aa2bb*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[416] = 0; /*0x5aa2c5*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[408] = 2; /*0x5aa2cb*/
  v31 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa2d1*/
  v121 = (int)v31; /*0x5aa2db*/
  if ( v31 ) /*0x5aa2df*/
  {
    Array::ForEach(v31, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa2ea*/
    v32 = (int *)v121; /*0x5aa2ef*/
  }
  else
  {
    v32 = 0; /*0x5aa2f5*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[412] = v32; /*0x5aa2fb*/
  *v32 = v119; /*0x5aa300*/
  v32[1] = 2; /*0x5aa307*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[412] + 8) = 1; /*0x5aa316*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[412] + 12) = 5; /*0x5aa329*/
  v119 = 1; /*0x5aa331*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[428] = 0; /*0x5aa33b*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[420] = 2; /*0x5aa341*/
  v33 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa347*/
  v121 = (int)v33; /*0x5aa351*/
  if ( v33 ) /*0x5aa355*/
  {
    Array::ForEach(v33, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa360*/
    v34 = (int *)v121; /*0x5aa365*/
  }
  else
  {
    v34 = 0; /*0x5aa36b*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[424] = v34; /*0x5aa371*/
  *v34 = v119; /*0x5aa376*/
  v34[1] = 2; /*0x5aa37d*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[424] + 8) = 65537; /*0x5aa38c*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[424] + 12) = 7; /*0x5aa39f*/
  v119 = 65538; /*0x5aa3a7*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[440] = 0; /*0x5aa3b1*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[432] = 2; /*0x5aa3b7*/
  v35 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa3bd*/
  v121 = (int)v35; /*0x5aa3c7*/
  if ( v35 ) /*0x5aa3cb*/
  {
    Array::ForEach(v35, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa3d6*/
    v36 = (int *)v121; /*0x5aa3db*/
  }
  else
  {
    v36 = 0; /*0x5aa3e1*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[436] = v36; /*0x5aa3e7*/
  *v36 = v119; /*0x5aa3ec*/
  v36[1] = 3; /*0x5aa3f3*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[436] + 8) = 0x10000; /*0x5aa402*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[436] + 12) = 4; /*0x5aa415*/
  v119 = 65537; /*0x5aa41d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[452] = 0; /*0x5aa427*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[444] = 2; /*0x5aa42d*/
  v37 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa433*/
  v121 = (int)v37; /*0x5aa43d*/
  if ( v37 ) /*0x5aa441*/
  {
    Array::ForEach(v37, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa44c*/
    v38 = (int *)v121; /*0x5aa451*/
  }
  else
  {
    v38 = 0; /*0x5aa457*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[448] = v38; /*0x5aa45d*/
  *v38 = v119; /*0x5aa462*/
  v38[1] = 3; /*0x5aa469*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[448] + 8) = 1; /*0x5aa478*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[448] + 12) = 5; /*0x5aa48b*/
  v119 = 65537; /*0x5aa493*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[464] = 0; /*0x5aa49d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[456] = 2; /*0x5aa4a3*/
  v39 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa4a9*/
  v121 = (int)v39; /*0x5aa4b3*/
  if ( v39 ) /*0x5aa4b7*/
  {
    Array::ForEach(v39, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa4c2*/
    v40 = (int *)v121; /*0x5aa4c7*/
  }
  else
  {
    v40 = 0; /*0x5aa4cd*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[460] = v40; /*0x5aa4d3*/
  *v40 = v119; /*0x5aa4d8*/
  v40[1] = 3; /*0x5aa4df*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[460] + 8) = 0; /*0x5aa4ee*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[460] + 12) = 6; /*0x5aa501*/
  v119 = 65537; /*0x5aa509*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[476] = 0; /*0x5aa513*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[468] = 2; /*0x5aa519*/
  v41 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa51f*/
  v121 = (int)v41; /*0x5aa529*/
  if ( v41 ) /*0x5aa52d*/
  {
    Array::ForEach(v41, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa538*/
    v42 = (int *)v121; /*0x5aa53d*/
  }
  else
  {
    v42 = 0; /*0x5aa543*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[472] = v42; /*0x5aa549*/
  *v42 = v119; /*0x5aa54e*/
  v42[1] = 4; /*0x5aa555*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[472] + 8) = 1; /*0x5aa564*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[472] + 12) = 5; /*0x5aa577*/
  v119 = 0x10000; /*0x5aa57f*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[488] = 0; /*0x5aa589*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[480] = 2; /*0x5aa58f*/
  v43 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa595*/
  v121 = (int)v43; /*0x5aa59f*/
  if ( v43 ) /*0x5aa5a3*/
  {
    Array::ForEach(v43, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa5ae*/
    v44 = (int *)v121; /*0x5aa5b3*/
  }
  else
  {
    v44 = 0; /*0x5aa5b9*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[484] = v44; /*0x5aa5bf*/
  *v44 = v119; /*0x5aa5c4*/
  v44[1] = 4; /*0x5aa5cb*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[484] + 8) = 0; /*0x5aa5da*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[484] + 12) = 6; /*0x5aa5ed*/
  v119 = 0x10000; /*0x5aa5f5*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[500] = 0; /*0x5aa5ff*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[492] = 2; /*0x5aa605*/
  v45 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa60b*/
  v121 = (int)v45; /*0x5aa615*/
  if ( v45 ) /*0x5aa619*/
  {
    Array::ForEach(v45, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa624*/
    v46 = (int *)v121; /*0x5aa629*/
  }
  else
  {
    v46 = 0; /*0x5aa62f*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[496] = v46; /*0x5aa635*/
  *v46 = v119; /*0x5aa63a*/
  v46[1] = 4; /*0x5aa641*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[496] + 8) = 65537; /*0x5aa650*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[496] + 12) = 7; /*0x5aa663*/
  v119 = 65537; /*0x5aa66b*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[512] = 0; /*0x5aa675*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[504] = 2; /*0x5aa67b*/
  v47 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa681*/
  v121 = (int)v47; /*0x5aa68b*/
  if ( v47 ) /*0x5aa68f*/
  {
    Array::ForEach(v47, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa69a*/
    v48 = (int *)v121; /*0x5aa69f*/
  }
  else
  {
    v48 = 0; /*0x5aa6a5*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[508] = v48; /*0x5aa6ab*/
  *v48 = v119; /*0x5aa6b0*/
  v48[1] = 5; /*0x5aa6b7*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[508] + 8) = 65537; /*0x5aa6c6*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[508] + 12) = 7; /*0x5aa6d9*/
  v119 = 0x10000; /*0x5aa6e1*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[524] = 0; /*0x5aa6eb*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[516] = 2; /*0x5aa6f1*/
  v49 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aa6f7*/
  v121 = (int)v49; /*0x5aa701*/
  if ( v49 ) /*0x5aa705*/
  {
    Array::ForEach(v49, 8, 2, (int (*)(int))Cell::Clear); /*0x5aa710*/
    v50 = (int *)v121; /*0x5aa715*/
  }
  else
  {
    v50 = 0; /*0x5aa71b*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[520] = v50; /*0x5aa721*/
  *v50 = v119; /*0x5aa726*/
  v50[1] = 6; /*0x5aa72d*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[520] + 8) = 65537; /*0x5aa73c*/
  (v123) = ((v123) & ~0xFFFF) | ((0) & 0xFFFF); /*0x5aa74a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[520] + 12) = 7; /*0x5aa74f*/
  (v123) = ((v123) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aa752*/
  v119 = 0; /*0x5aa761*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[536] = 0; /*0x5aa76b*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[528] = 3; /*0x5aa771*/
  v51 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aa777*/
  v121 = (int)v51; /*0x5aa781*/
  if ( v51 ) /*0x5aa785*/
  {
    Array::ForEach(v51, 8, 3, (int (*)(int))Cell::Clear); /*0x5aa790*/
    v52 = (int *)v121; /*0x5aa795*/
  }
  else
  {
    v52 = 0; /*0x5aa79b*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[532] = v52; /*0x5aa7a1*/
  *v52 = v119; /*0x5aa7a6*/
  v52[1] = 0; /*0x5aa7aa*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[532] + 8) = 1; /*0x5aa7b9*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[532] + 12) = 2; /*0x5aa7cc*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[532] + 16) = v123; /*0x5aa7de*/
  (v119) = ((v119) & ~0xFFFF) | ((0) & 0xFFFF); /*0x5aa7ec*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[532] + 20) = 4; /*0x5aa7f1*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aa7f4*/
  v121 = 1; /*0x5aa7f9*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[548] = 0; /*0x5aa803*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[540] = 3; /*0x5aa809*/
  v53 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aa80f*/
  v123 = (int)v53; /*0x5aa819*/
  if ( v53 ) /*0x5aa81d*/
  {
    Array::ForEach(v53, 8, 3, (int (*)(int))Cell::Clear); /*0x5aa828*/
    v54 = (int *)v123; /*0x5aa82d*/
  }
  else
  {
    v54 = 0; /*0x5aa833*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[544] = v54; /*0x5aa839*/
  *v54 = v121; /*0x5aa83e*/
  v54[1] = 2; /*0x5aa845*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[544] + 8) = v119; /*0x5aa854*/
  (v119) = ((v119) & ~0xFFFF) | ((0) & 0xFFFF); /*0x5aa862*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[544] + 12) = 4; /*0x5aa867*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[544] + 16) = 0; /*0x5aa879*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[544] + 20) = 6; /*0x5aa88c*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aa88f*/
  v121 = 0; /*0x5aa894*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[560] = 0; /*0x5aa89e*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[552] = 3; /*0x5aa8a4*/
  v55 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aa8aa*/
  v123 = (int)v55; /*0x5aa8b4*/
  if ( v55 ) /*0x5aa8b8*/
  {
    Array::ForEach(v55, 8, 3, (int (*)(int))Cell::Clear); /*0x5aa8c3*/
    v56 = (int *)v123; /*0x5aa8c8*/
  }
  else
  {
    v56 = 0; /*0x5aa8ce*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[556] = v56; /*0x5aa8d4*/
  *v56 = v121; /*0x5aa8d9*/
  v56[1] = 0; /*0x5aa8dd*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[556] + 8) = v119; /*0x5aa8ec*/
  (v119) = ((v119) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aa8fa*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[556] + 12) = 4; /*0x5aa8ff*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[556] + 16) = 0; /*0x5aa911*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[556] + 20) = 6; /*0x5aa924*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5aa927*/
  v121 = 0; /*0x5aa92c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[572] = 0; /*0x5aa936*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[564] = 3; /*0x5aa93c*/
  v57 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aa942*/
  v123 = (int)v57; /*0x5aa94c*/
  if ( v57 ) /*0x5aa950*/
  {
    Array::ForEach(v57, 8, 3, (int (*)(int))Cell::Clear); /*0x5aa95b*/
    v58 = (int *)v123; /*0x5aa960*/
  }
  else
  {
    v58 = 0; /*0x5aa966*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[568] = v58; /*0x5aa96c*/
  *v58 = v121; /*0x5aa971*/
  v58[1] = 0; /*0x5aa975*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[568] + 8) = v119; /*0x5aa984*/
  LOWORD(v125[0]) = 0; /*0x5aa992*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[568] + 12) = 2; /*0x5aa997*/
  HIWORD(v125[0]) = 0; /*0x5aa9a4*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[568] + 16) = 0; /*0x5aa9a9*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[568] + 20) = 6; /*0x5aa9bc*/
  v119 = 1; /*0x5aa9c4*/
  v121 = 0; /*0x5aa9ce*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[584] = 0; /*0x5aa9d8*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[576] = 4; /*0x5aa9de*/
  v59 = (int *)__2_YAPAXI_Z(0x20u); /*0x5aa9e8*/
  v123 = (int)v59; /*0x5aa9f2*/
  if ( v59 ) /*0x5aa9f6*/
  {
    Array::ForEach(v59, 8, 4, (int (*)(int))Cell::Clear); /*0x5aaa02*/
    v60 = (int *)v123; /*0x5aaa07*/
  }
  else
  {
    v60 = 0; /*0x5aaa0d*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[580] = v60; /*0x5aaa13*/
  *v60 = v121; /*0x5aaa18*/
  v60[1] = 0; /*0x5aaa1c*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[580] + 8) = v119; /*0x5aaa2b*/
  (v119) = ((v119) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aaa39*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[580] + 12) = 2; /*0x5aaa3e*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aaa4b*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[580] + 16) = 0x10000; /*0x5aaa50*/
  (v121) = ((v121) & ~0xFFFF) | ((2) & 0xFFFF); /*0x5aaa5e*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[580] + 20) = 4; /*0x5aaa63*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aaa70*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[580] + 24) = v125[0]; /*0x5aaa75*/
  (v123) = ((v123) & ~0xFFFF) | ((2) & 0xFFFF); /*0x5aaa83*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[580] + 28) = 6; /*0x5aaa88*/
  (v123) = ((v123) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5aaa8b*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[596] = 0; /*0x5aaa90*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[588] = 3; /*0x5aaa96*/
  v61 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aaa9c*/
  v125[0] = v61; /*0x5aaaa6*/
  if ( v61 ) /*0x5aaaaa*/
  {
    Array::ForEach(v61, 8, 3, (int (*)(int))Cell::Clear); /*0x5aaab5*/
    v62 = (int *)v125[0]; /*0x5aaaba*/
  }
  else
  {
    v62 = 0; /*0x5aaac0*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[592] = v62; /*0x5aaac6*/
  *v62 = v123; /*0x5aaacb*/
  v62[1] = 1; /*0x5aaad2*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[592] + 8) = v121; /*0x5aaae1*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aaaef*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[592] + 12) = 3; /*0x5aaaf4*/
  v63 = v119; /*0x5aaafd*/
  (v119) = ((v119) & ~0xFFFF) | ((2) & 0xFFFF); /*0x5aab01*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[592] + 16) = v63; /*0x5aab06*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aab14*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[592] + 20) = 5; /*0x5aab19*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aab1c*/
  v123 = 65537; /*0x5aab21*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[608] = 0; /*0x5aab2b*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[600] = 3; /*0x5aab31*/
  v64 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aab37*/
  v125[0] = v64; /*0x5aab41*/
  if ( v64 ) /*0x5aab45*/
  {
    Array::ForEach(v64, 8, 3, (int (*)(int))Cell::Clear); /*0x5aab50*/
    v65 = (int *)v125[0]; /*0x5aab55*/
  }
  else
  {
    v65 = 0; /*0x5aab5b*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[604] = v65; /*0x5aab61*/
  *v65 = v123; /*0x5aab66*/
  v65[1] = 7; /*0x5aab6d*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[604] + 8) = v121; /*0x5aab7c*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aab8a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[604] + 12) = 5; /*0x5aab8f*/
  v66 = v119; /*0x5aab98*/
  (v119) = ((v119) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aab9c*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[604] + 16) = v66; /*0x5aaba1*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aabaf*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[604] + 20) = 3; /*0x5aabb4*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5aabb7*/
  v123 = 2; /*0x5aabbc*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[620] = 0; /*0x5aabc6*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[612] = 3; /*0x5aabcc*/
  v67 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aabd2*/
  v125[0] = v67; /*0x5aabdc*/
  if ( v67 ) /*0x5aabe0*/
  {
    Array::ForEach(v67, 8, 3, (int (*)(int))Cell::Clear); /*0x5aabeb*/
    v68 = (int *)v125[0]; /*0x5aabf0*/
  }
  else
  {
    v68 = 0; /*0x5aabf6*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[616] = v68; /*0x5aabfc*/
  *v68 = v123; /*0x5aac01*/
  v68[1] = 1; /*0x5aac08*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[616] + 8) = v121; /*0x5aac17*/
  (v121) = ((v121) & ~0xFFFF) | ((2) & 0xFFFF); /*0x5aac25*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[616] + 12) = 7; /*0x5aac2a*/
  v69 = v119; /*0x5aac33*/
  (v119) = ((v119) & ~0xFFFF) | ((2) & 0xFFFF); /*0x5aac37*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[616] + 16) = v69; /*0x5aac3c*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aac4a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[616] + 20) = 5; /*0x5aac4f*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5aac52*/
  v123 = 65537; /*0x5aac57*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[632] = 0; /*0x5aac61*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[624] = 3; /*0x5aac67*/
  v70 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aac6d*/
  v125[0] = v70; /*0x5aac77*/
  if ( v70 ) /*0x5aac7b*/
  {
    Array::ForEach(v70, 8, 3, (int (*)(int))Cell::Clear); /*0x5aac86*/
    v71 = (int *)v125[0]; /*0x5aac8b*/
  }
  else
  {
    v71 = 0; /*0x5aac91*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[628] = v71; /*0x5aac97*/
  *v71 = v123; /*0x5aac9c*/
  v71[1] = 7; /*0x5aaca3*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[628] + 8) = v121; /*0x5aacb2*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[628] + 12) = 1; /*0x5aacc5*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[628] + 16) = v119; /*0x5aacd7*/
  (v119) = ((v119) & ~0xFFFF) | ((2) & 0xFFFF); /*0x5aace5*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[628] + 20) = 3; /*0x5aacea*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5aaced*/
  v121 = 65537; /*0x5aacf2*/
  v123 = 65537; /*0x5aacfc*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[644] = 0; /*0x5aad06*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[636] = 4; /*0x5aad0c*/
  v72 = (int *)__2_YAPAXI_Z(0x20u); /*0x5aad16*/
  v125[0] = v72; /*0x5aad20*/
  if ( v72 ) /*0x5aad24*/
  {
    Array::ForEach(v72, 8, 4, (int (*)(int))Cell::Clear); /*0x5aad30*/
    v73 = (int *)v125[0]; /*0x5aad35*/
  }
  else
  {
    v73 = 0; /*0x5aad3b*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[640] = v73; /*0x5aad41*/
  *v73 = v123; /*0x5aad46*/
  v73[1] = 7; /*0x5aad4d*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[640] + 8) = v121; /*0x5aad5c*/
  (v121) = ((v121) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5aad6a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[640] + 12) = 5; /*0x5aad6f*/
  v74 = v119; /*0x5aad78*/
  (v119) = ((v119) & ~0xFFFF) | ((0) & 0xFFFF); /*0x5aad7c*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[640] + 16) = v74; /*0x5aad81*/
  (v119) = ((v119) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aad8f*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[640] + 20) = 1; /*0x5aad94*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aada1*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[640] + 24) = 131074; /*0x5aada6*/
  (v123) = ((v123) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5aadb4*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[640] + 28) = 3; /*0x5aadb9*/
  (v123) = ((v123) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5aadbc*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[656] = 0; /*0x5aadc1*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[648] = 3; /*0x5aadc7*/
  v75 = (int *)__2_YAPAXI_Z(0x18u); /*0x5aadcd*/
  v125[0] = v75; /*0x5aadd7*/
  if ( v75 ) /*0x5aaddb*/
  {
    Array::ForEach(v75, 8, 3, (int (*)(int))Cell::Clear); /*0x5aade6*/
    v76 = (int *)v125[0]; /*0x5aadeb*/
  }
  else
  {
    v76 = 0; /*0x5aadf1*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[652] = v76; /*0x5aadf7*/
  *v76 = v123; /*0x5aadfc*/
  v76[1] = 1; /*0x5aae03*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[652] + 8) = v121; /*0x5aae12*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aae20*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[652] + 12) = 2; /*0x5aae25*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aae32*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[652] + 16) = v119; /*0x5aae37*/
  (v123) = ((v123) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5aae45*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[652] + 20) = 6; /*0x5aae4a*/
  (v123) = ((v123) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5aae4d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[668] = 0; /*0x5aae52*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[660] = 2; /*0x5aae58*/
  v77 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aae5e*/
  v125[0] = v77; /*0x5aae68*/
  if ( v77 ) /*0x5aae6c*/
  {
    Array::ForEach(v77, 8, 2, (int (*)(int))Cell::Clear); /*0x5aae77*/
    v78 = (int *)v125[0]; /*0x5aae7c*/
  }
  else
  {
    v78 = 0; /*0x5aae82*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[664] = v78; /*0x5aae88*/
  *v78 = v123; /*0x5aae8d*/
  v78[1] = 1; /*0x5aae94*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[664] + 8) = v121; /*0x5aaea3*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aaeb1*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[664] + 12) = 5; /*0x5aaeb6*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aaeb9*/
  v123 = 3; /*0x5aaebe*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[680] = 0; /*0x5aaec8*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[672] = 2; /*0x5aaece*/
  v79 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aaed4*/
  v125[0] = v79; /*0x5aaede*/
  if ( v79 ) /*0x5aaee2*/
  {
    Array::ForEach(v79, 8, 2, (int (*)(int))Cell::Clear); /*0x5aaeed*/
    v80 = (int *)v125[0]; /*0x5aaef2*/
  }
  else
  {
    v80 = 0; /*0x5aaef8*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[676] = v80; /*0x5aaefe*/
  *v80 = v123; /*0x5aaf03*/
  v80[1] = 1; /*0x5aaf0a*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[676] + 8) = v121; /*0x5aaf19*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aaf27*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[676] + 12) = 5; /*0x5aaf2c*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aaf2f*/
  v123 = 3; /*0x5aaf34*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[692] = 0; /*0x5aaf3e*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[684] = 2; /*0x5aaf44*/
  v81 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aaf4a*/
  v125[0] = v81; /*0x5aaf54*/
  if ( v81 ) /*0x5aaf58*/
  {
    Array::ForEach(v81, 8, 2, (int (*)(int))Cell::Clear); /*0x5aaf63*/
    v82 = (int *)v125[0]; /*0x5aaf68*/
  }
  else
  {
    v82 = 0; /*0x5aaf6e*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[688] = v82; /*0x5aaf74*/
  *v82 = v123; /*0x5aaf79*/
  v82[1] = 1; /*0x5aaf80*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[688] + 8) = v121; /*0x5aaf8f*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5aaf9d*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[688] + 12) = 5; /*0x5aafa2*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5aafa5*/
  v123 = 3; /*0x5aafaa*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[704] = 0; /*0x5aafb4*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[696] = 2; /*0x5aafba*/
  v83 = (int *)__2_YAPAXI_Z(0x10u); /*0x5aafc0*/
  v125[0] = v83; /*0x5aafca*/
  if ( v83 ) /*0x5aafce*/
  {
    Array::ForEach(v83, 8, 2, (int (*)(int))Cell::Clear); /*0x5aafd9*/
    v84 = (int *)v125[0]; /*0x5aafde*/
  }
  else
  {
    v84 = 0; /*0x5aafe4*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[700] = v84; /*0x5aafea*/
  *v84 = v123; /*0x5aafef*/
  v84[1] = 1; /*0x5aaff6*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[700] + 8) = v121; /*0x5ab005*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5ab013*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[700] + 12) = 5; /*0x5ab018*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((1) & 0xFFFF) << 16); /*0x5ab01b*/
  v123 = 2; /*0x5ab020*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[716] = 0; /*0x5ab02a*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[708] = 2; /*0x5ab030*/
  v85 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab036*/
  v125[0] = v85; /*0x5ab040*/
  if ( v85 ) /*0x5ab044*/
  {
    Array::ForEach(v85, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab04f*/
    v86 = (int *)v125[0]; /*0x5ab054*/
  }
  else
  {
    v86 = 0; /*0x5ab05a*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[712] = v86; /*0x5ab060*/
  *v86 = v123; /*0x5ab065*/
  v86[1] = 1; /*0x5ab06c*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[712] + 8) = v121; /*0x5ab07b*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5ab089*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[712] + 12) = 5; /*0x5ab08e*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5ab091*/
  v123 = 1; /*0x5ab096*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[728] = 0; /*0x5ab0a0*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[720] = 2; /*0x5ab0a6*/
  v87 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab0ac*/
  v125[0] = v87; /*0x5ab0b6*/
  if ( v87 ) /*0x5ab0ba*/
  {
    Array::ForEach(v87, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab0c5*/
    v88 = (int *)v125[0]; /*0x5ab0ca*/
  }
  else
  {
    v88 = 0; /*0x5ab0d0*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[724] = v88; /*0x5ab0d6*/
  *v88 = v123; /*0x5ab0db*/
  v88[1] = 1; /*0x5ab0e2*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[724] + 8) = v121; /*0x5ab0f1*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5ab0ff*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[724] + 12) = 5; /*0x5ab104*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5ab107*/
  v123 = 1; /*0x5ab10c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[740] = 0; /*0x5ab116*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[732] = 2; /*0x5ab11c*/
  v89 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab122*/
  v125[0] = v89; /*0x5ab12c*/
  if ( v89 ) /*0x5ab130*/
  {
    Array::ForEach(v89, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab13b*/
    v90 = (int *)v125[0]; /*0x5ab140*/
  }
  else
  {
    v90 = 0; /*0x5ab146*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[736] = v90; /*0x5ab14c*/
  *v90 = v123; /*0x5ab151*/
  v90[1] = 1; /*0x5ab158*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[736] + 8) = v121; /*0x5ab167*/
  (v123) = ((v123) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5ab175*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[736] + 12) = 5; /*0x5ab17a*/
  (v123) = ((v123) & ~(0xFFFF << 16)) | (((2) & 0xFFFF) << 16); /*0x5ab17d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[752] = 0; /*0x5ab182*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[744] = 1; /*0x5ab188*/
  v91 = (int *)__2_YAPAXI_Z(8u); /*0x5ab18e*/
  v125[0] = v91; /*0x5ab198*/
  if ( v91 ) /*0x5ab19c*/
  {
    Array::ForEach(v91, 8, 1, (int (*)(int))Cell::Clear); /*0x5ab1a7*/
    v92 = (int *)v125[0]; /*0x5ab1ac*/
  }
  else
  {
    v92 = 0; /*0x5ab1b2*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[748] = v92; /*0x5ab1b8*/
  *v92 = v123; /*0x5ab1bd*/
  v92[1] = 5; /*0x5ab1c4*/
  v123 = 65537; /*0x5ab1c9*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[764] = 0; /*0x5ab1d3*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[756] = 1; /*0x5ab1d9*/
  v93 = (int *)__2_YAPAXI_Z(8u); /*0x5ab1df*/
  v125[0] = v93; /*0x5ab1e9*/
  if ( v93 ) /*0x5ab1ed*/
  {
    Array::ForEach(v93, 8, 1, (int (*)(int))Cell::Clear); /*0x5ab1fa*/
    v94 = (int *)v125[0]; /*0x5ab1ff*/
  }
  else
  {
    v94 = 0; /*0x5ab205*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[760] = v94; /*0x5ab20b*/
  *v94 = v123; /*0x5ab210*/
  v94[1] = 5; /*0x5ab217*/
  v123 = 65537; /*0x5ab21c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[776] = 0; /*0x5ab226*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[768] = 1; /*0x5ab22c*/
  v95 = (int *)__2_YAPAXI_Z(8u); /*0x5ab232*/
  v125[0] = v95; /*0x5ab23c*/
  if ( v95 ) /*0x5ab240*/
  {
    Array::ForEach(v95, 8, 1, (int (*)(int))Cell::Clear); /*0x5ab24d*/
    v96 = (int *)v125[0]; /*0x5ab252*/
  }
  else
  {
    v96 = 0; /*0x5ab258*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[772] = v96; /*0x5ab25e*/
  *v96 = v123; /*0x5ab263*/
  v96[1] = 5; /*0x5ab26a*/
  v123 = 3; /*0x5ab26f*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[788] = 0; /*0x5ab279*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[780] = 1; /*0x5ab27f*/
  v97 = (int *)__2_YAPAXI_Z(8u); /*0x5ab285*/
  v125[0] = v97; /*0x5ab28f*/
  if ( v97 ) /*0x5ab293*/
  {
    Array::ForEach(v97, 8, 1, (int (*)(int))Cell::Clear); /*0x5ab29e*/
    v98 = (int *)v125[0]; /*0x5ab2a3*/
  }
  else
  {
    v98 = 0; /*0x5ab2a9*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[784] = v98; /*0x5ab2af*/
  *v98 = v123; /*0x5ab2b4*/
  v98[1] = 1; /*0x5ab2bb*/
  v123 = 2; /*0x5ab2c0*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[800] = 0; /*0x5ab2ca*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[792] = 1; /*0x5ab2d0*/
  v99 = (int *)__2_YAPAXI_Z(8u); /*0x5ab2d6*/
  v125[0] = v99; /*0x5ab2e0*/
  if ( v99 ) /*0x5ab2e4*/
  {
    Array::ForEach(v99, 8, 1, (int (*)(int))Cell::Clear); /*0x5ab2f1*/
    v100 = (int *)v125[0]; /*0x5ab2f6*/
  }
  else
  {
    v100 = 0; /*0x5ab2fc*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[796] = v100; /*0x5ab302*/
  *v100 = v123; /*0x5ab307*/
  v100[1] = 1; /*0x5ab30e*/
  v123 = 2; /*0x5ab313*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[812] = 0; /*0x5ab31d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[804] = 1; /*0x5ab323*/
  v101 = (int *)__2_YAPAXI_Z(8u); /*0x5ab329*/
  v125[0] = v101; /*0x5ab333*/
  if ( v101 ) /*0x5ab337*/
  {
    Array::ForEach(v101, 8, 1, (int (*)(int))Cell::Clear); /*0x5ab344*/
    v102 = (int *)v125[0]; /*0x5ab349*/
  }
  else
  {
    v102 = 0; /*0x5ab34f*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[808] = v102; /*0x5ab355*/
  *v102 = v123; /*0x5ab35a*/
  v102[1] = 1; /*0x5ab361*/
  v121 = 65537; /*0x5ab366*/
  v123 = 4; /*0x5ab370*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[824] = 0; /*0x5ab37c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[816] = 2; /*0x5ab382*/
  v103 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab388*/
  v125[0] = v103; /*0x5ab392*/
  if ( v103 ) /*0x5ab396*/
  {
    Array::ForEach(v103, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab3a1*/
    v104 = (int *)v125[0]; /*0x5ab3a6*/
  }
  else
  {
    v104 = 0; /*0x5ab3ac*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[820] = v104; /*0x5ab3b2*/
  *v104 = v123; /*0x5ab3b7*/
  v104[1] = 1; /*0x5ab3be*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[820] + 8) = v121; /*0x5ab3cd*/
  (v121) = ((v121) & ~0xFFFF) | ((1) & 0xFFFF); /*0x5ab3db*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[820] + 12) = 5; /*0x5ab3e0*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((3) & 0xFFFF) << 16); /*0x5ab3e3*/
  v120 = 5; /*0x5ab3e8*/
  v123 = 2; /*0x5ab3ec*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[836] = 0; /*0x5ab3f6*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[828] = 2; /*0x5ab3fc*/
  v105 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab402*/
  v125[0] = v105; /*0x5ab40c*/
  if ( v105 ) /*0x5ab410*/
  {
    Array::ForEach(v105, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab41b*/
    v106 = (int *)v125[0]; /*0x5ab420*/
  }
  else
  {
    v106 = 0; /*0x5ab426*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[832] = v106; /*0x5ab42c*/
  *v106 = v123; /*0x5ab431*/
  v106[1] = 1; /*0x5ab438*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[832] + 8) = v121; /*0x5ab447*/
  (v121) = ((v121) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5ab454*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[832] + 12) = v120; /*0x5ab459*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[840] = 0; /*0x5ab45c*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[844] = 0; /*0x5ab462*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5ab468*/
  v123 = 0; /*0x5ab46d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[860] = 0; /*0x5ab477*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[852] = 2; /*0x5ab47d*/
  v107 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab483*/
  v125[0] = v107; /*0x5ab48d*/
  if ( v107 ) /*0x5ab491*/
  {
    Array::ForEach(v107, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab49e*/
    v108 = (int *)v125[0]; /*0x5ab4a3*/
  }
  else
  {
    v108 = 0; /*0x5ab4a9*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[856] = v108; /*0x5ab4af*/
  *v108 = v123; /*0x5ab4b4*/
  v108[1] = 6; /*0x5ab4bb*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[856] + 8) = v121; /*0x5ab4ca*/
  (v121) = ((v121) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5ab4d8*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[856] + 12) = 2; /*0x5ab4dd*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5ab4e0*/
  v123 = 0; /*0x5ab4e5*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[872] = 0; /*0x5ab4ef*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[864] = 2; /*0x5ab4f5*/
  v109 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab4fb*/
  v125[0] = v109; /*0x5ab505*/
  if ( v109 ) /*0x5ab509*/
  {
    Array::ForEach(v109, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab516*/
    v110 = (int *)v125[0]; /*0x5ab51b*/
  }
  else
  {
    v110 = 0; /*0x5ab521*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[868] = v110; /*0x5ab527*/
  *v110 = v123; /*0x5ab52c*/
  v110[1] = 6; /*0x5ab533*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[868] + 8) = v121; /*0x5ab542*/
  (v121) = ((v121) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5ab550*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[868] + 12) = 2; /*0x5ab555*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5ab558*/
  v123 = 0; /*0x5ab55d*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[884] = 0; /*0x5ab567*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[876] = 2; /*0x5ab56d*/
  v111 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab573*/
  v125[0] = v111; /*0x5ab57d*/
  if ( v111 ) /*0x5ab581*/
  {
    Array::ForEach(v111, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab58c*/
    v112 = (int *)v125[0]; /*0x5ab591*/
  }
  else
  {
    v112 = 0; /*0x5ab597*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[880] = v112; /*0x5ab59d*/
  *v112 = v123; /*0x5ab5a2*/
  v112[1] = 6; /*0x5ab5a9*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[880] + 8) = v121; /*0x5ab5b8*/
  (v121) = ((v121) & ~0xFFFF) | ((3) & 0xFFFF); /*0x5ab5c6*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[880] + 12) = 2; /*0x5ab5cb*/
  (v121) = ((v121) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x5ab5ce*/
  v123 = 0; /*0x5ab5d3*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[896] = 0; /*0x5ab5dd*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[888] = 2; /*0x5ab5e3*/
  v113 = (int *)__2_YAPAXI_Z(0x10u); /*0x5ab5e9*/
  v125[0] = v113; /*0x5ab5f3*/
  if ( v113 ) /*0x5ab5f7*/
  {
    Array::ForEach(v113, 8, 2, (int (*)(int))Cell::Clear); /*0x5ab602*/
    v114 = (int *)v125[0]; /*0x5ab607*/
  }
  else
  {
    v114 = 0; /*0x5ab60d*/
  }
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[892] = v114; /*0x5ab613*/
  *v114 = v123; /*0x5ab618*/
  v114[1] = 6; /*0x5ab61f*/
  LOWORD(v125[0]) = 2; /*0x5ab62c*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[892] + 8) = v121; /*0x5ab631*/
  HIWORD(v125[0]) = 0; /*0x5ab63f*/
  *(unsigned int *)(*(unsigned int *)&g_MissionQueueFrame.globalVariables[892] + 12) = 2; /*0x5ab644*/
  v115 = v125[0]; /*0x5ab647*/
  v125[0] = 0; /*0x5ab64b*/
  v123 = v115; /*0x5ab659*/
  v124 = 2; /*0x5ab670*/
  v125[1] = 6; /*0x5ab674*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[900])->Constructor( v125, &v123); /*0x5ab67c*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 0); /*0x5ab68f*/
  v122 = 2; /*0x5ab698*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ab6b2*/
  v120 = 6; /*0x5ab6b6*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[912])->Constructor( &v119, &v121); /*0x5ab6be*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ab6d6*/
  v122 = 2; /*0x5ab6da*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ab6f4*/
  v120 = 6; /*0x5ab6f8*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[924])->Constructor( &v119, &v121); /*0x5ab700*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ab718*/
  v122 = 2; /*0x5ab71c*/
  v116 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ab725*/
  v120 = 6; /*0x5ab727*/
  v119 = v116; /*0x5ab72f*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[936])->Constructor( &v119, &v121); /*0x5ab742*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ab758*/
  v124 = 6; /*0x5ab762*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[948], &v123); /*0x5ab76a*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ab786*/
  v124 = 6; /*0x5ab78a*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[960], &v123); /*0x5ab792*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 1); /*0x5ab7ae*/
  v124 = 6; /*0x5ab7b2*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[972], &v123); /*0x5ab7ba*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 2, 0); /*0x5ab7d0*/
  v124 = 2; /*0x5ab7da*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[984], &v123); /*0x5ab7de*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 0); /*0x5ab7fa*/
  v124 = 2; /*0x5ab7fe*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[996], &v123); /*0x5ab802*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 0); /*0x5ab81e*/
  v124 = 2; /*0x5ab822*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1008], &v123); /*0x5ab826*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 1); /*0x5ab839*/
  v122 = 2; /*0x5ab83d*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ab85c*/
  v120 = 6; /*0x5ab860*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1020])->Constructor( &v119, &v121); /*0x5ab868*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 0); /*0x5ab880*/
  v122 = 2; /*0x5ab884*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 1); /*0x5ab89e*/
  v120 = 6; /*0x5ab8a2*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1032])->Constructor( &v119, &v121); /*0x5ab8aa*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[1044] = 0; /*0x5ab8b5*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[1048] = 0; /*0x5ab8bb*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 3); /*0x5ab8ce*/
  v122 = 3; /*0x5ab8d2*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5ab8e5*/
  v120 = 7; /*0x5ab8f0*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1056])->Constructor( &v119, &v121); /*0x5ab8f8*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 3); /*0x5ab90b*/
  v122 = 3; /*0x5ab914*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5ab92e*/
  v120 = 7; /*0x5ab932*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1068])->Constructor( &v119, &v121); /*0x5ab93a*/
  v117 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 3); /*0x5ab94a*/
  v122 = 3; /*0x5ab94c*/
  v121 = v117; /*0x5ab950*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5ab970*/
  v120 = 7; /*0x5ab974*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1080])->Constructor( &v119, &v121); /*0x5ab97c*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 3); /*0x5ab994*/
  v122 = 3; /*0x5ab998*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5ab9ab*/
  v120 = 7; /*0x5ab9b6*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1092])->Constructor( &v119, &v121); /*0x5ab9be*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 2, 2); /*0x5ab9d1*/
  v122 = 3; /*0x5ab9da*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5ab9f4*/
  v120 = 7; /*0x5ab9f8*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1104])->Constructor( &v119, &v121); /*0x5aba00*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 1); /*0x5aba18*/
  v122 = 3; /*0x5aba1c*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5aba36*/
  v120 = 7; /*0x5aba3a*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1116])->Constructor( &v119, &v121); /*0x5aba42*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 1); /*0x5aba55*/
  v122 = 3; /*0x5aba59*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5aba71*/
  v120 = 7; /*0x5aba7c*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1128])->Constructor( &v119, &v121); /*0x5aba84*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 1); /*0x5aba9a*/
  v124 = 7; /*0x5abaa4*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1140], &v123); /*0x5abaac*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 1); /*0x5abac8*/
  v124 = 7; /*0x5abacc*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1152], &v123); /*0x5abad4*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 1); /*0x5abaf0*/
  v124 = 7; /*0x5abaf4*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1164], &v123); /*0x5abafc*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 3, 3); /*0x5abb12*/
  v124 = 3; /*0x5abb1c*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1176], &v123); /*0x5abb20*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 2); /*0x5abb3c*/
  v124 = 3; /*0x5abb40*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1188], &v123); /*0x5abb44*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 2, 2); /*0x5abb60*/
  v124 = 3; /*0x5abb64*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1200], &v123); /*0x5abb68*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 4, 2); /*0x5abb7c*/
  v122 = 3; /*0x5abb85*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5abb9f*/
  v120 = 7; /*0x5abba3*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1212])->Constructor( &v119, &v121); /*0x5abbab*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 2, 4); /*0x5abbc4*/
  v122 = 3; /*0x5abbc8*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 1); /*0x5abbe2*/
  v120 = 7; /*0x5abbe6*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1224])->Constructor( &v119, &v121); /*0x5abbee*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[1236] = 0; /*0x5abbf9*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[1240] = 0; /*0x5abbff*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 3); /*0x5abc12*/
  v122 = 4; /*0x5abc16*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abc2d*/
  v120 = 0; /*0x5abc38*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1248])->Constructor( &v119, &v121); /*0x5abc3c*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 3); /*0x5abc4f*/
  v122 = 4; /*0x5abc58*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abc76*/
  v120 = 0; /*0x5abc7a*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1260])->Constructor( &v119, &v121); /*0x5abc7e*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 3); /*0x5abc96*/
  v122 = 4; /*0x5abc9a*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abcb8*/
  v120 = 0; /*0x5abcbc*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1272])->Constructor( &v119, &v121); /*0x5abcc0*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 3); /*0x5abcd8*/
  v122 = 4; /*0x5abcdc*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abcf3*/
  v120 = 0; /*0x5abcfe*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1284])->Constructor( &v119, &v121); /*0x5abd02*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 2); /*0x5abd15*/
  v122 = 4; /*0x5abd1e*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abd3c*/
  v120 = 0; /*0x5abd40*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1296])->Constructor( &v119, &v121); /*0x5abd44*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 1); /*0x5abd5c*/
  v122 = 4; /*0x5abd60*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abd7e*/
  v120 = 0; /*0x5abd82*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1308])->Constructor( &v119, &v121); /*0x5abd86*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abd9e*/
  v122 = 4; /*0x5abda2*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abdb9*/
  v120 = 0; /*0x5abdc4*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1320])->Constructor( &v119, &v121); /*0x5abdc8*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abddb*/
  v122 = 4; /*0x5abde4*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abe02*/
  v120 = 0; /*0x5abe06*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1332])->Constructor( &v119, &v121); /*0x5abe0a*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 3); /*0x5abe26*/
  v124 = 4; /*0x5abe2a*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1344], &v123); /*0x5abe32*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 2); /*0x5abe48*/
  v124 = 4; /*0x5abe52*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1356], &v123); /*0x5abe5a*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 2); /*0x5abe76*/
  v124 = 4; /*0x5abe7a*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1368], &v123); /*0x5abe82*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abe9e*/
  v124 = 0; /*0x5abea2*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1380], &v123); /*0x5abea6*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abebc*/
  v124 = 0; /*0x5abec6*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1392], &v123); /*0x5abeca*/
  v123 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abee6*/
  v124 = 0; /*0x5abeea*/
  ListNode::Alloc((ListNode *)&g_MissionQueueFrame.globalVariables[1404], &v123); /*0x5abeee*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 3); /*0x5abf06*/
  v122 = 4; /*0x5abf0a*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 1, 0); /*0x5abf28*/
  v120 = 0; /*0x5abf2c*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1416])->Constructor( &v119, &v121); /*0x5abf30*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 1, 3); /*0x5abf4d*/
  v122 = 4; /*0x5abf51*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abf64*/
  v120 = 0; /*0x5abf6f*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1428])->Constructor( &v119, &v121); /*0x5abf73*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[1440] = 0; /*0x5abf7e*/
  *(unsigned int *)&g_MissionQueueFrame.globalVariables[1444] = 0; /*0x5abf84*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abf92*/
  v122 = 2; /*0x5abf9b*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abfaf*/
  v120 = 6; /*0x5abfb3*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1452])->Constructor( &v119, &v121); /*0x5abfc2*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5abfda*/
  v122 = 2; /*0x5abfde*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5abff8*/
  v120 = 6; /*0x5abffc*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1464])->Constructor( &v119, &v121); /*0x5ac000*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ac018*/
  v122 = 4; /*0x5ac01c*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ac02f*/
  v120 = 0; /*0x5ac03a*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1476])->Constructor( &v119, &v121); /*0x5ac03e*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ac051*/
  v122 = 4; /*0x5ac05a*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ac074*/
  v120 = 0; /*0x5ac078*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1488])->Constructor( &v119, &v121); /*0x5ac07c*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ac094*/
  v122 = 2; /*0x5ac098*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ac0a7*/
  v120 = 6; /*0x5ac0ab*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1500])->Constructor( &v119, &v121); /*0x5ac0ba*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ac0d2*/
  v122 = 2; /*0x5ac0d6*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ac0e9*/
  v120 = 6; /*0x5ac0f4*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1512])->Constructor( &v119, &v121); /*0x5ac0f8*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ac10b*/
  v122 = 4; /*0x5ac114*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ac12e*/
  v120 = 0; /*0x5ac132*/
  ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1524])->Constructor( &v119, &v121); /*0x5ac136*/
  v121 = *(unsigned int *)((CellStruct *)v125)->Set( 0, 0); /*0x5ac14e*/
  v122 = 4; /*0x5ac152*/
  v119 = *(unsigned int *)((CellStruct *)&v123)->Set( 0, 0); /*0x5ac16c*/
  v120 = 0; /*0x5ac170*/
  return ((WaypointPath *)&g_MissionQueueFrame.globalVariables[1536])->Constructor( &v119, &v121); /*0x5ac179*/

}

} // namespace gamemd

// 0x5AD9C0
namespace gamemd {
int sub_5AD9C0(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x5ad9d0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x5AF550
namespace gamemd {
void E4Recv_5AF550::sub_5AF550(float * a2, float * a3, AbstractClass * a4)
{
  float v28; // [esp+18h] [ebp-10h]
  float v30; // [esp+1Ch] [ebp-Ch]
  float v34; // [esp+2Ch] [ebp+4h]

  _EAX = a3; /*0x5af553*/
  _EDI = a2; /*0x5af559*/
  __asm /*0x5af55d*/
  {
    fld dword ptr [eax]
    fsub dword ptr [edi]
  }
  _ESI = this; /*0x5af564*/
  __asm /*0x5af566*/
  {
    fstp [esp+28h+var_18]
    fld dword ptr [eax+4]
    fsub dword ptr [edi+4]
    fstp [esp+28h+arg_4]
    fld dword ptr [eax+8]
    fsub dword ptr [edi+8]
    fst [esp+28h+var_14]
    fmul [esp+28h+var_14]
    fstp [esp+28h+var_C]
    fld [esp+28h+var_18]
    fmul [esp+28h+var_18]
    fstp [esp+28h+var_10]
    fld [esp+28h+arg_4]
    fmul [esp+28h+arg_4]
    fadd [esp+28h+var_10]
    fadd [esp+28h+var_C]
    fstp [esp+28h+var_28]; double
  }
  double v18; // [esp+0h] [ebp-28h]
  Math::Sqrt(v18); /*0x5af5a5*/
  __asm /*0x5af5aa*/
  {
    fstp [esp+28h+arg_0]
    fld [esp+28h+var_10]
    fadd [esp+28h+var_C]
    fstp [esp+28h+var_28]; double
  }
  double v19; // [esp+0h] [ebp-28h]
  Math::Sqrt(v19); /*0x5af5b9*/
  __asm /*0x5af5be*/
  {
    fld [esp+28h+arg_0]
    fcomp ds:flt_7E1748
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x5af5d0*/
  {
    float v31; // [esp+20h] [ebp-8h]
    v31 = 0.0; /*0x5af5ea*/
    v28 = 1.0; /*0x5af5f2*/
  }
  else
  {
    __asm /*0x5af5d2*/
    {
      fld [esp+20h+arg_4]
      fdiv [esp+20h+arg_0]
      fstp [esp+20h+var_8]
      fld st
      fdiv [esp+20h+arg_0]
      fstp [esp+20h+var_10]
    }
  }
  __asm /*0x5af5fa*/
  {
    fcom ds:flt_7E1748
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x5af605*/
  {
    __asm { fstp st } /*0x5af61f*/
    v30 = 0.0; /*0x5af621*/
    v34 = 1.0; /*0x5af629*/
  }
  else
  {
    __asm /*0x5af607*/
    {
      fld [esp+20h+var_18]
      fdiv st, st(1)
      fstp [esp+20h+var_C]
      fld [esp+20h+var_14]
      fdiv st, st(1)
      fstp [esp+20h+arg_0]
      fstp st
    }
  }
  *&_ESI->ptr_0 = (void *)1065353216; /*0x5af638*/
  _ESI->ptr_1 = 0; /*0x5af63a*/
  _ESI->ptr_2 = 0; /*0x5af63d*/
  _ESI->ptr_3 = 0; /*0x5af640*/
  _ESI->uniqueId = 0; /*0x5af643*/
  _ESI->abstractFlags = 1065353216; /*0x5af646*/
  _ESI->nextArrayIndex = 0; /*0x5af649*/
  _ESI->referenceCount = 0; /*0x5af64c*/
  _ESI->NeedsSaveOrLink = 0; /*0x5af64f*/
  _ESI->occupant = 0; /*0x5af652*/
  _ESI->owningHouseIndex = 1065353216; /*0x5af655*/
  _ESI->fallRate = 0; /*0x5af658*/
  __asm { fld dword ptr [edi] } /*0x5af65b*/
  float *v36; // [esp+30h] [ebp+8h]
  v36 = 0; /*0x5af65d*/
  __asm { fst dword ptr [esi+0Ch] } /*0x5af669*/
  *&_ESI->M12 = _ET1; /*0x5af669*/
  __asm { fld ds:flt_7E1748 } /*0x5af66c*/
  __asm
  {
    fst [esp+24h+var_18]
    fst dword ptr [esi+1Ch]
  }
  *&_ESI->M28 = _ET1; /*0x5af677*/
  __asm { fstp dword ptr [esi+2Ch] } /*0x5af67a*/
  *&_ESI->M44 = _ET1; /*0x5af67a*/
  __asm { fadd [esp+24h+arg_4] } /*0x5af680*/
  int v25; // [esp+14h] [ebp-14h]
  v25 = *((unsigned int *)_EDI + 1); /*0x5af684*/
  __asm { fst dword ptr [esi+0Ch] } /*0x5af68d*/
  *&_ESI->M12 = _ET1; /*0x5af68d*/
  __asm /*0x5af690*/
  {
    fld [esp+28h+var_14]
    fadd dword ptr [esi+1Ch]
    fst [esp+28h+var_14]
    fstp dword ptr [esi+1Ch]
  }
  *&_ESI->M28 = _ET1; /*0x5af69b*/
  __asm /*0x5af69e*/
  {
    fld [esp+28h+arg_4]
    fadd [esp+28h+var_18]
  }
  float *v37; // [esp+30h] [ebp+8h]
  v37 = 0; /*0x5af6a6*/
  __asm /*0x5af6ae*/
  {
    fst [esp+28h+var_18]
    fstp dword ptr [esi+2Ch]
  }
  *&_ESI->M44 = _ET1; /*0x5af6b2*/
  __asm { fld [esp+28h+arg_4] } /*0x5af6b5*/
  __asm { fadd st, st(1) }
  int v32; // [esp+24h] [ebp-4h]
  v32 = *((unsigned int *)_EDI + 2); /*0x5af6be*/
  __asm { fstp dword ptr [esi+0Ch] } /*0x5af6c4*/
  *&_ESI->M12 = _ET1; /*0x5af6c4*/
  __asm /*0x5af6c7*/
  {
    fstp st
    fld [esp+28h+arg_4]
    fadd [esp+28h+var_14]
    fstp dword ptr [esi+1Ch]
  }
  *&_ESI->M28 = _ET1; /*0x5af6d1*/
  __asm /*0x5af6d4*/
  {
    fld [esp+28h+var_18]
    fadd [esp+28h+var_4]
    fstp dword ptr [esi+2Ch]
  }
  *&_ESI->M44 = _ET1; /*0x5af6dc*/
  sub_5AF120((float *)_ESI, v30, v34); /*0x5af6df*/
  __asm { fld [esp+20h+var_8] } /*0x5af6e8*/
  __asm
  {
    fchs
    fstp dword ptr [esp+28h+var_28]; float
  }
  float v20; // [esp+0h] [ebp-28h]
  sub_5AF000((float *)_ESI, v20, v28); /*0x5af6f5*/
  Matrix2D::Rotate((int *)_ESI, a4); /*0x5af701*/
}
}
// 0x5AF980
namespace gamemd {
float * MultiplyMatrix3x4(ObjectClass * aP0, float *a1, float *a2)
{

  float *result = aP0; // eax /*0x5af983*/
  float v14; // [esp+10h] [ebp-60h]
  v14 = a1[4]; /*0x5af98a*/
  float v13; // [esp+Ch] [ebp-64h]
  v13 = a1[5]; /*0x5af991*/
  double v4 = *a1; // st7 /*0x5af998*/
  float v12; // [esp+8h] [ebp-68h]
  v12 = a1[6]; /*0x5af99a*/
  double v5; // st6
  v5 = a1[1]; /*0x5af9a1*/
  double v6; // st5
  v6 = a1[2]; /*0x5af9a4*/
  float v17; // [esp+1Ch] [ebp-54h]
  v17 = a1[8]; /*0x5af9a7*/
  float v16; // [esp+18h] [ebp-58h]
  v16 = a1[9]; /*0x5af9ae*/
  float v15; // [esp+14h] [ebp-5Ch]
  v15 = a1[10]; /*0x5af9b5*/
  double v8 = *a2; // st4 /*0x5af9bd*/
  double v9; // st3
  v9 = a2[4]; /*0x5af9bf*/
  double v10; // st2
  v10 = a2[8]; /*0x5af9c2*/
  float v19; // [esp+24h] [ebp-4Ch]
  v19 = a2[1]; /*0x5af9d0*/
  float v22; // [esp+30h] [ebp-40h]
  v22 = a2[2]; /*0x5af9dd*/
  float v24; // [esp+3Ch] [ebp-34h]
  v24 = a2[3]; /*0x5af9e4*/
  float v18; // [esp+20h] [ebp-50h]
  v18 = a2[5]; /*0x5af9ed*/
  float v21; // [esp+2Ch] [ebp-44h]
  v21 = a2[6]; /*0x5af9f4*/
  float v11; // esi
  v11 = a2[7]; /*0x5af9f8*/
  float v25[12]; // [esp+40h] [ebp-30h] BYREF
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  float v26; // [esp+74h] [ebp+4h]
  v26 = a2[9]; /*0x5afa12*/
  float v20; // [esp+28h] [ebp-48h]
  v20 = a2[10]; /*0x5afa1c*/
  float v23; // [esp+34h] [ebp-3Ch]
  v23 = a2[11]; /*0x5afa28*/
  v25[4] = v10 * v12 + v9 * v13 + v8 * v14; /*0x5afa2e*/
  v25[8] = v10 * v15 + v9 * v16 + v8 * v17; /*0x5afa46*/
  v25[1] = v26 * v6 + v18 * v5 + v19 * v4; /*0x5afa60*/
  v25[5] = v26 * v12 + v18 * v13 + v19 * v14; /*0x5afa8b*/
  v25[9] = v26 * v15 + v18 * v16 + v19 * v17; /*0x5afaab*/
  v25[2] = v20 * v6 + v21 * v5 + v22 * v4; /*0x5afac5*/
  v25[6] = v20 * v12 + v21 * v13 + v22 * v14; /*0x5afae5*/
  v25[10] = v20 * v15 + v21 * v16 + v22 * v17; /*0x5afb05*/
  v25[3] = v23 * v6 + v11 * v5 + v24 * v4 + a1[3]; /*0x5afb22*/
  v25[7] = v23 * v12 + v11 * v13 + v24 * v14 + a1[7]; /*0x5afb4b*/
  v25[11] = v23 * v15 + v11 * v16 + v24 * v17 + a1[11]; /*0x5afb6e*/
  memcpy(result, v25, 0x30u); /*0x5afb72*/
  return result; /*0x5afb74*/
}
}
// 0x5A1190
namespace gamemd {  // G42.18 ns repair
double sub_5A1190(short * a1, short * a2, double a3)
{
  double v4; // st7

  int v3 = *a2 - *a1; // esi /*0x5a11aa*/
  if ( v3 ) /*0x5a11b8*/
  {
    v4 = Math::ArcTan(-((double)(a2[1] - a1[1]) / (double)v3)); /*0x5a11ce*/
    if ( v3 < 0 ) /*0x5a11d8*/
      v4 = v4 + 3.141592653589793; /*0x5a11da*/
  }
  else
  {
    v4 = 1.570796326794897; /*0x5a1262*/
  }
  double v5; // st7
  v5 = fabs(v4 - a3); /*0x5a11e5*/
  double v9; // [esp+20h] [ebp+Ch]
  v9 = v5; /*0x5a11ed*/
  char v7; // c0
  if ( !v7 ) /*0x5a11f6*/
  {
    do /*0x5a1209*/
      v5 = v5 - 6.283185307179586; /*0x5a11f8*/
    while ( v5 >= 6.283185307179586 ); /*0x5a1209*/
    v9 = v5; /*0x5a120b*/
  }
  if ( v5 > 3.141592653589793 ) /*0x5a121a*/
    v9 = 6.283185307179586 - v5; /*0x5a1224*/
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 2.0 + 1.5 * v9; /*0x5a125c*/
}
}  // G42.18 ns repair
// 0x5A2ED0
namespace gamemd {  // G42.18 ns repair
double sub_5A2ED0(short * a1, short * a2)
{

  int v2 = *a1 - *a2; // eax /*0x5a2eec*/
  int v3; // edx
  v3 = a1[1] - a2[1]; /*0x5a2eee*/
  double v5; // [esp+14h] [ebp-8h]
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a2f0d*/
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a2f3f*/
}
}  // G42.18 ns repair
// 0x5A4AE0
namespace gamemd {  // G42.18 ns repair
double sub_5A4AE0(short * a1, short * a2)
{

  int v2 = *a1 - *a2; // eax /*0x5a4afc*/
  int v3; // edx
  v3 = a1[1] - a2[1]; /*0x5a4afe*/
  double v5; // [esp+14h] [ebp-8h]
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a4b1d*/
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a4b4f*/
}
}  // G42.18 ns repair
// 0x5A4FA0
namespace gamemd {  // G42.18 ns repair
double sub_5A4FA0(short * a1, short * a2)
{

  int v2 = *a1 - *a2; // eax /*0x5a4fbc*/
  int v3; // edx
  v3 = a1[1] - a2[1]; /*0x5a4fbe*/
  double v5; // [esp+14h] [ebp-8h]
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a4fdd*/
  return (double)(unsigned int)Random::State(&unk_ABE890) * 5.0 * 2.328306437080797e-10 + v5; /*0x5a500f*/
}
}  // G42.18 ns repair
// 0x5A5AE0
namespace gamemd {  // G42.18 ns repair
double sub_5A5AE0(short * a1, short * a2)
{

  signed int v2; // ecx
  __int64 v3; // rax
  int v5; // [esp+10h] [ebp+4h]

  v2 = abs32(a1[1] - a2[1]); /*0x5a5b06*/
  v3 = *a1 - *a2; /*0x5a5b08*/
  v5 = ((((v3) >> 32) & 0xFFFFFFFFu) ^ v3) - (((v3) >> 32) & 0xFFFFFFFFu); /*0x5a5b0f*/
  if ( v5 <= v2 ) /*0x5a5b13*/
    v5 = v2; /*0x5a5b15*/
  return (double)(unsigned int)Random::State(&stru_ABE890) * 3.0 * 2.328306437080797e-10 + (double)v5; /*0x5a5b45*/

}
}  // G42.18 ns repair
// 0x5A7640
namespace gamemd {
unsigned int * globalHelper_0A7640(unsigned int *v3, int aP1)
{
  bool v7; // zf

  int16_t v2 = 0; // ax /*0x5a7643*/
  int16_t v3 = 999; // di /*0x5a764d*/
  int16_t v4 = 0; // bp /*0x5a7651*/
  int v5 = aP1->mode - 1; // esi /*0x5a7654*/
  int16_t v6 = 999; // bx /*0x5a7655*/
  if ( v5 >= 0 ) /*0x5a7658*/
  {
    int *v9; // [esp+10h] [ebp-Ch]
    v9 = (int *)(aP1->mode + 4 * v5); /*0x5a7661*/
    int v10; // [esp+14h] [ebp-8h]
    v10 = aP1->mode; /*0x5a7665*/
    do /*0x5a76ac*/
    {
      int v11; // [esp+18h] [ebp-4h]
      v11 = *v9; /*0x5a7672*/
      if ( (int16_t)*v9 < v3 ) /*0x5a7676*/
        v3 = *v9; /*0x5a7678*/
      if ( (*((signed short *)(((unsigned char *)&(v11)) + 2))) < v6 ) /*0x5a7683*/
        v6 = (*(((unsigned short *)&(*v9)) + 1)); /*0x5a7685*/
      if ( (int16_t)*v9 > v2 ) /*0x5a768b*/
        v2 = *v9; /*0x5a768d*/
      if ( (*((signed short *)(((unsigned char *)&(v11)) + 2))) > v4 ) /*0x5a7693*/
        v4 = (*(((unsigned short *)&(*v9)) + 1)); /*0x5a7695*/
      v7 = v10 == 1; /*0x5a76a3*/
      --v9; /*0x5a76a4*/
      --v10; /*0x5a76a8*/
    }
    while ( !v7 ); /*0x5a76ac*/
  }
  *v3 = v3; /*0x5a76bb*/
  v3[1] = v6; /*0x5a76c1*/
  v3[2] = v2 - v3 + 1; /*0x5a76c8*/
  v3[3] = v4 - v6 + 1; /*0x5a76cb*/
  return v3; /*0x5a76c7*/
}
} // namespace gamemd

namespace gamemd {
ObjectClass * E4Recv_5A9920::sub_5A9920(unsigned int * a1, ObjectClass * aP2)
{

  this->AbstractClass = (void *)*a2;
  this->ptr_0 = aP2; /*0x5a992e*/
  return this; /*0x5a9931*/

}
} // namespace gamemd

// 0x5A9960
namespace gamemd {
ObjectClass * E4Recv_5A9960::sub_5A9960(unsigned int * a1)
{

  this->AbstractClass = (void *)*a1; /*0x5a9968*/
  this->M4 = (void *)a1[1]; /*0x5a996d*/
  return &this->AbstractClass; /*0x5a9970*/

}
} // namespace gamemd

// 0x5A9980
namespace gamemd {
unsigned int * E4Recv_5A9980::sub_5A9980(int a2, unsigned int * a3, int a4, unsigned int * a5, int a6)
{
  *this = a2; /*0x5a998a*/
  this->M4 = *a3; /*0x5a9992*/
  this->M8 = a4; /*0x5a9999*/
  this->M12 = *a5; /*0x5a99a2*/
  *&this->M16 = a6; /*0x5a99a5*/
  return this; /*0x5a99a8*/
}
} // namespace gamemd

// 0x5A99F0
namespace gamemd {
unsigned int * E4Recv_5A99F0::sub_5A99F0(unsigned int * a2)
{

  this->AbstractClass = (void *)*a2; /*0x5a99f8*/
  this->M4 = (void *)a2[1]; /*0x5a99fd*/
  this->M8 = (void *)a2[2]; /*0x5a9a03*/
  this->M12 = (void *)a2[3]; /*0x5a9a09*/
  this->M16 = a2[4]; /*0x5a9a0f*/
  return &this->AbstractClass; /*0x5a9a12*/

}
} // namespace gamemd

// 0x5A9BF0
namespace gamemd {
Concurrency::details::_ReaderWriterLock * E4Recv_5A9BF0::__0_ReaderWriterLock_details_Concurrency__QAE_XZ()
{
  *(unsigned int *)this = 0; /*0x5a9bf2*/
  this->M4 = 0; /*0x5a9bf8*/
  return this; /*0x5a9bff*/
}
} // namespace gamemd

// 0x5A9C20
namespace gamemd {
int sub_5A9C20()
{
  InitializePathData(); /*0x5a9c20*/
  return atexit(sub_5AC190); /*0x5a9c30*/
}
} // namespace gamemd

// 0x5AC190
namespace gamemd {
void sub_5AC190()
{

  unsigned int *v0 = &unk_ABE890; // esi /*0x5ac192*/
  int v1 = 109; // edi /*0x5ac197*/
  do /*0x5ac1b2*/
  {
    void *v2; // eax
    v2 = (void *)*(v0 - 3); /*0x5ac19c*/
    v0 -= 3; /*0x5ac19f*/
    operator delete((v2)); /*0x5ac1a3*/
    --v1; /*0x5ac1ab*/
    *v0 = 0; /*0x5ac1ac*/
  }
  while ( v1 ); /*0x5ac1b2*/
}
} // namespace gamemd

// 0x5ADB00
namespace gamemd {
int sub_5ADB00()
{
  dword_ABED60 = 0; /*0x5adb02*/
  dword_ABED64 = 0; /*0x5adb07*/
  dword_ABED68 = 0; /*0x5adb0c*/
  dword_ABED6C = 0; /*0x5adb11*/
  return 0; /*0x5adb16*/
}
} // namespace gamemd

// 0x5ADB20
namespace gamemd {
void sub_5ADB20()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5adb2c*/
  dbl_ABED78 = Math::Sqrt(v0 + v0); /*0x5adb3e*/
}
} // namespace gamemd

// 0x5ADB50
namespace gamemd {
void sub_5ADB50()
{
  dbl_ABEDC8 = dbl_ABED78 / 60.0; /*0x5adb5c*/
}
} // namespace gamemd

// 0x5ADB70
namespace gamemd {
void sub_5ADB70()
{
  dbl_ABEDB0 = 1.0 / dbl_ABEDC8; /*0x5adb7c*/
}
} // namespace gamemd

// 0x5ADB90
namespace gamemd {
void sub_5ADB90()
{
  dbl_ABEDA8 = 0.0174532925199433 * 45.0; /*0x5adb9c*/
}
} // namespace gamemd

// 0x5ADBB0
namespace gamemd {
void sub_5ADBB0()
{
  dbl_ABED80 = 0.0174532925199433 * 60.0; /*0x5adbbc*/
}
} // namespace gamemd

// 0x5ADBD0
namespace gamemd {
void sub_5ADBD0()
{
  dbl_ABED58 = 0.0174532925199433 * 90.0; /*0x5adbdc*/
}
} // namespace gamemd

// 0x5ADBF0
namespace gamemd {
long long sub_5ADBF0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABED58 - dbl_ABED80); /*0x5adc02*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABED78 * 0.5); /*0x5adc16*/
  dword_ABEDD0 = result; /*0x5adc1b*/
  return result; /*0x5adc20*/
}
} // namespace gamemd

// 0x5ADC30
namespace gamemd {
void sub_5ADC30()
{
  dbl_ABED88 = Math::ArcTan((double)dword_ABEDD0 * 0.00390625); /*0x5adc47*/
}
} // namespace gamemd

// 0x5ADC60
namespace gamemd {
void sub_5ADC60()
{
  dbl_ABEDA0 = Math::ArcTan((double)(2 * dword_ABEDD0) / dbl_ABED78); /*0x5adc82*/
}
} // namespace gamemd

// 0x5ADC90
namespace gamemd {
long long sub_5ADC90()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABEDD0) + 0.5); /*0x5adcab*/
  dword_ABEDC4 = result; /*0x5adcb0*/
  return result; /*0x5adcb6*/
}
} // namespace gamemd

// 0x5ADCC0
namespace gamemd {
int sub_5ADCC0()
{
  word_ABED70 = 0; /*0x5adcc2*/
  word_ABED72 = 0; /*0x5adcc8*/
  return 0; /*0x5adcce*/
}
} // namespace gamemd

// 0x5ADCD0
namespace gamemd {
int sub_5ADCD0()
{
  dword_ABED90 = 0; /*0x5adcd2*/
  dword_ABED94 = 0; /*0x5adcd7*/
  dword_ABED98 = 0; /*0x5adcdc*/
  return 0; /*0x5adce1*/
}
} // namespace gamemd

// 0x5ADCF0
namespace gamemd {
int sub_5ADCF0()
{
  dword_ABEDC0 = 0; /*0x5adcf5*/
  dword_ABEDB8 = 128; /*0x5adcff*/
  dword_ABEDBC = 128; /*0x5add04*/
  return 128; /*0x5add09*/
}
} // namespace gamemd

// 0x5AE4F0
namespace gamemd {
int sub_5AE4F0(int a1)
{
  return 0; /*0x5ae4f2*/
}
} // namespace gamemd

// 0x5AE500
namespace gamemd {
char E4Recv_5AE500::sub_5AE500(const char ** a2)
{


  const char **result; // eax
  result = (const char **)String::NotEquals((String *)a2, 0); /*0x5ae50c*/
  if ( (unsigned char)result ) /*0x5ae513*/
  {
    result = sub_5CF840((ObjectClass *)this->customSound_controller, (const char **)a2); /*0x5ae519*/
    ObjectClass *v4; // [esp+0h] [ebp-8h]
    if ( result ) /*0x5ae520*/
      return (const char **)nullsub_24(v4); /*0x5ae524*/
  }
  return result; /*0x5ae529*/

}
} // namespace gamemd

// 0x5AE530
namespace gamemd {
DWORD E4Recv_5AE530::sub_5AE530(ObjectClass * aP1, ObjectClass * aP2)
{

  ObjectClass *v3 = this; // esi /*0x5ae538*/
  ((String *)this->String_50))->Reassign(aP1); /*0x5ae541*/
  DWORD result; // eax
  result = TimerGetTicks(); /*0x5ae54a*/
  v3 = (ObjectClass *)((char *)v3 + 204); /*0x5ae557*/
  v3->ptr_0 = (void *)result; /*0x5ae55d*/
  void *v5; // [esp+8h] [ebp-8h]
  v3->v5 = v5; /*0x5ae55f*/
  v3->ptr_8 = aP2; /*0x5ae562*/
  return result; /*0x5ae565*/
}
} // namespace gamemd

// 0x5AE570
namespace gamemd {
void nullsub_170(int a1)
{
  ; /*0x5ae570*/
}
} // namespace gamemd

// 0x5AE580
namespace gamemd {
void nullsub_171(int a1)
{
  ; /*0x5ae580*/
}
} // namespace gamemd

// 0x5AEC40
namespace gamemd {
int E4Recv_5AEC40::sub_5AEC40(float a2)
{


  __asm { fld [esp+24h+arg_0] } /*0x5aec43*/
  __asm { fstp [esp+2Ch+var_8] }
  double v19; // [esp+1Ch] [ebp-8h]
  Math::SinCos(v19); /*0x5aec5a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aec5f*/
  Math::ArcTan2(v19); /*0x5aec65*/
  __asm { fld [esp+40h+arg_0] } /*0x5aec70*/
  int abstractFlags; // [esp+Ch] [ebp-18h]
  abstractFlags = this->q050; /*0x5aec74*/
  __asm { fchs } /*0x5aec7b*/
  void *NeedsSaveOrLink; // [esp+0h] [ebp-24h]
  NeedsSaveOrLink = this->q050; /*0x5aec7d*/
  __asm /*0x5aec84*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  int uniqueId; // [esp+4h] [ebp-20h]
  uniqueId = this->q050; /*0x5aec8a*/
  int nextArrayIndex; // [esp+14h] [ebp-10h]
  nextArrayIndex = this->q050; /*0x5aec8e*/
  __asm { fld [esp+40h+var_20] } /*0x5aec92*/
  __asm { fmul st, st(3) }
  int occupant; // [esp+8h] [ebp-1Ch]
  occupant = this->occupant; /*0x5aec9e*/
  LODWORD(v19) = this->q050; /*0x5aeca2*/
  int result = this->owningHouseIndex; // eax /*0x5aeca6*/
  __asm { faddp st(1), st } /*0x5aecac*/
  int v16; // [esp+10h] [ebp-14h]
  v16 = result; /*0x5aecae*/
  int fallRate; // [esp+18h] [ebp-Ch]
  fallRate = this->fallRate; /*0x5aecb2*/
  __asm { fstp dword ptr [esi+10h] } /*0x5aecb9*/
  this->M16 = _ET1; /*0x5aecb9*/
  __asm /*0x5aecbc*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  this->M20 = _ET1; /*0x5aecca*/
  __asm /*0x5aeccd*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  this->q018 = _ET1; /*0x5aecdb*/
  __asm /*0x5aecde*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+1Ch]
  }
  this->M28 = _ET1; /*0x5aecec*/
  __asm /*0x5aecef*/
  {
    fstp st
    fld [esp+30h+var_24]
    fmul st, st(1)
    fld [esp+30h+var_20]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  this->q020 = _ET1; /*0x5aed01*/
  __asm /*0x5aed04*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  this->occupant = _ET1; /*0x5aed14*/
  __asm /*0x5aed17*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  this->owningHouseIndex = _ET1; /*0x5aed27*/
  __asm /*0x5aed2a*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+2Ch] }
  this->fallRate = _ET1; /*0x5aed3b*/
  __asm { fstp st } /*0x5aed40*/
  return result; /*0x5aed42*/

}
} // namespace gamemd

// 0x5AED50
namespace gamemd {
int E4Recv_5AED50::sub_5AED50(float a2)
{

  __asm { fld [esp+1Ch+arg_0] } /*0x5aed53*/
  __asm { fstp [esp+24h+var_8] }
  _ESI = this; /*0x5aed66*/
  double v17; // [esp+14h] [ebp-8h]
  Math::SinCos(v17); /*0x5aed6a*/
  __asm { fstp [esp+30h+arg_0] } /*0x5aed6f*/
  Math::ArcTan2(v17); /*0x5aed75*/
  __asm /*0x5aed7a*/
  {
    fld [esp+38h+arg_0]
    fchs
    fld dword ptr [esi]
    fld dword ptr [esi+20h]
    fld st
    fmul [esp+38h+arg_0]
  }
  __asm
  {
    fld st(2)
    fmul st, st(5)
  }
  void *ptr_0; // [esp+0h] [ebp-1Ch]
  ptr_0 = _ESI->ptr_4; /*0x5aed95*/
  int result = _ESI->occupant; // eax /*0x5aed99*/
  int v13; // [esp+4h] [ebp-18h]
  v13 = result; /*0x5aed9c*/
  void *ptr_4; // [esp+8h] [ebp-14h]
  ptr_4 = _ESI->ptr_8; /*0x5aeda0*/
  __asm { faddp st(1), st } /*0x5aeda4*/
  int owningHouseIndex; // [esp+Ch] [ebp-10h]
  owningHouseIndex = _ESI->owningHouseIndex; /*0x5aedac*/
  void *ptr_8; // [esp+10h] [ebp-Ch]
  ptr_8 = _ESI->ptr_C; /*0x5aedb0*/
  __asm { fstp dword ptr [esi] } /*0x5aedb4*/
  *&_ESI->ptr_0 = _ET1; /*0x5aedb4*/
  __asm /*0x5aedb6*/
  {
    fld [esp+38h+var_18]
    fmul [esp+38h+arg_0]
    fld [esp+38h+var_1C]
    fmul st, st(5)
  }
  (*((unsigned int *)&(v17))) = _ESI->fallRate; /*0x5aedca*/
  __asm /*0x5aedce*/
  {
    faddp st(1), st
    fstp dword ptr [esi+4]
  }
  *&_ESI->M4 = _ET1; /*0x5aedd0*/
  __asm /*0x5aedd3*/
  {
    fld [esp+28h+var_10]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_14]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  *&_ESI->M8 = _ET1; /*0x5aede3*/
  __asm /*0x5aede6*/
  {
    fld dword ptr [esp+28h+var_8]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_C]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  *&_ESI->M12 = _ET1; /*0x5aedf6*/
  __asm /*0x5aedf9*/
  {
    fxch st(1)
    fmul st, st(2)
    fxch st(1)
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  *&_ESI->M32 = _ET1; /*0x5aee03*/
  __asm /*0x5aee06*/
  {
    fld [esp+28h+var_1C]
    fmul st, st(1)
    fld [esp+28h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+24h]
  }
  *&_ESI->q024 = _ET1; /*0x5aee14*/
  __asm /*0x5aee17*/
  {
    fld [esp+28h+var_14]
    fmul st, st(1)
    fld [esp+28h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+28h]
  }
  *&_ESI->M40 = _ET1; /*0x5aee25*/
  __asm /*0x5aee28*/
  {
    fld [esp+28h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+28h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+2Ch]
  }
  *&_ESI->M44 = _ET1; /*0x5aee36*/
  __asm { fstp st } /*0x5aee39*/
  __asm { fstp st }
  return result; /*0x5aee40*/
}
} // namespace gamemd

// 0x5AEE50
namespace gamemd {
int E4Recv_5AEE50::sub_5AEE50(float a2)
{


  __asm { fld [esp+24h+arg_0] } /*0x5aee53*/
  __asm { fstp [esp+2Ch+var_8] }
  double v19; // [esp+1Ch] [ebp-8h]
  Math::SinCos(v19); /*0x5aee6a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aee6f*/
  Math::ArcTan2(v19); /*0x5aee75*/
  __asm { fld [esp+40h+arg_0] } /*0x5aee7f*/
  void *ptr_0; // [esp+Ch] [ebp-18h]
  ptr_0 = this->q050; /*0x5aee83*/
  __asm { fchs } /*0x5aee8a*/
  int uniqueId; // [esp+0h] [ebp-24h]
  uniqueId = this->q050; /*0x5aee8c*/
  __asm /*0x5aee93*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  void *ptr_0; // [esp+4h] [ebp-20h]
  ptr_0 = this->AbstractClass; /*0x5aee99*/
  void *ptr_4; // [esp+14h] [ebp-10h]
  ptr_4 = this->q050; /*0x5aee9d*/
  __asm { fld [esp+40h+var_20] } /*0x5aeea1*/
  __asm { fmul st, st(3) }
  int abstractFlags; // [esp+8h] [ebp-1Ch]
  abstractFlags = this->q050; /*0x5aeead*/
  LODWORD(v19) = this->q050; /*0x5aeeb1*/
  int result = this->q018; // eax /*0x5aeeb5*/
  __asm { faddp st(1), st } /*0x5aeebb*/
  int v16; // [esp+10h] [ebp-14h]
  v16 = result; /*0x5aeebd*/
  int referenceCount; // [esp+18h] [ebp-Ch]
  referenceCount = this->q050; /*0x5aeec1*/
  __asm { fstp dword ptr [esi] } /*0x5aeec8*/
  this->AbstractClass = _ET1; /*0x5aeec8*/
  __asm /*0x5aeeca*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+4]
  }
  this->M4 = _ET1; /*0x5aeed8*/
  __asm /*0x5aeedb*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  this->M8 = _ET1; /*0x5aeee9*/
  __asm /*0x5aeeec*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  this->M12 = _ET1; /*0x5aeefa*/
  __asm /*0x5aeefd*/
  {
    fstp st
    fld [esp+30h+var_24]
    fmul st, st(1)
    fld [esp+30h+var_20]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+10h]
  }
  this->M16 = _ET1; /*0x5aef0f*/
  __asm /*0x5aef12*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  this->M20 = _ET1; /*0x5aef22*/
  __asm /*0x5aef25*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  this->q018 = _ET1; /*0x5aef35*/
  __asm /*0x5aef38*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+1Ch] }
  this->M28 = _ET1; /*0x5aef49*/
  __asm { fstp st } /*0x5aef4e*/
  return result; /*0x5aef50*/

}
} // namespace gamemd

// 0x5AF000
namespace gamemd {
void E4Recv_5AF000::sub_5AF000(ObjectClass * aP1, ObjectClass * aP2)
{

  double v3 = this->M4; // st7 /*0x5af000*/
  double v4 = this->M8; // st6 /*0x5af003*/
  this->ptr_2 = v4 * aP1 + v3 * aP2; /*0x5af014*/
  this->ptr_3 = v4 * aP2 - v3 * aP1; /*0x5af023*/
  double v5 = this->abstractFlags; // st7 /*0x5af026*/
  double v6 = this->nextArrayIndex; // st6 /*0x5af029*/
  this->abstractFlags = v6 * aP1 + v5 * aP2; /*0x5af03a*/
  this->nextArrayIndex = v6 * aP2 - v5 * aP1; /*0x5af049*/
  double v7 = this->objectTypeFlags; // st7 /*0x5af04c*/
  double v8; // st6
  v8 = *(&this->ptr_20); /*0x5af04f*/
  this->objectTypeFlags = v8 * aP1 + v7 * aP2; /*0x5af060*/
  *(&this->ptr_20) = v8 * aP2 - v7 * aP1; /*0x5af06f*/
}
} // namespace gamemd

// 0x5AF120
namespace gamemd {
void E4Recv_5AF120::sub_5AF120(float a2, float a3)
{

  double v3 = *this; // st7 /*0x5af120*/
  double v4 = this->M16; // st6 /*0x5af122*/
  *this = v3 * a3 - v4 * a2; /*0x5af133*/
  this->ptr_3 = v3 * a2 + v4 * a3; /*0x5af143*/
  double v5 = this->uniqueId; // st7 /*0x5af146*/
  double v6 = this->nextArrayIndex; // st6 /*0x5af149*/
  this->uniqueId = v5 * a3 - v6 * a2; /*0x5af15a*/
  this->nextArrayIndex = v5 * a2 + v6 * a3; /*0x5af16b*/
  double v7 = this->NeedsSaveOrLink; // st7 /*0x5af16e*/
  double v8; // st6
  v8 = *(&this->ptr_20); /*0x5af171*/
  this->NeedsSaveOrLink = v7 * a3 - v8 * a2; /*0x5af182*/
  *(&this->ptr_20) = v7 * a2 + v8 * a3; /*0x5af193*/
}
} // namespace gamemd

// 0x5AF2C0
namespace gamemd {
double E4Recv_5AF2C0::sub_5AF2C0()
{

  float v2[3]; // [esp+0h] [ebp-24h] BYREF
  memset(v2, 0, sizeof(v2)); /*0x5af2ce*/
  float v3[3]; // [esp+18h] [ebp-Ch] BYREF
  return *TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af303*/
}
} // namespace gamemd

// 0x5AF310
namespace gamemd {
double E4Recv_5AF310::sub_5AF310()
{

  float v3[4]; // [esp+0h] [ebp-24h] BYREF
  memset(v3, 0, 12); /*0x5af31e*/
  float *v1; // eax
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af336*/
  v3[3] = *v1; /*0x5af33d*/
  return v1[1]; /*0x5af353*/
}
} // namespace gamemd

// 0x5AF360
namespace gamemd {
double E4Recv_5AF360::sub_5AF360()
{

  float v3[5]; // [esp+0h] [ebp-24h] BYREF
  memset(v3, 0, 12); /*0x5af36e*/
  float *v1; // eax
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af386*/
  v3[3] = *v1; /*0x5af38d*/
  v3[4] = v1[1]; /*0x5af394*/
  return v1[2]; /*0x5af3a3*/
}
} // namespace gamemd

// 0x5AF3B0
namespace gamemd {
double E4Recv_5AF3B0::sub_5AF3B0()
{

  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  v2[0] = 0.0; /*0x5af3be*/
  v2[1] = 1.0; /*0x5af3c6*/
  v2[2] = 0.0; /*0x5af3ce*/
  float *v1; // eax
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF
  v1 = TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af3d6*/
  Math::CalcAngle(v1[2], v1[1]); /*0x5af404*/
}
} // namespace gamemd

// 0x5AF470
namespace gamemd {
int E4Recv_5AF470::sub_5AF470()
{

  float v2[3]; // [esp+1Ch] [ebp-18h] BYREF
  v2[0] = 1.0; /*0x5af47e*/
  v2[1] = 0.0; /*0x5af486*/
  v2[2] = 0.0; /*0x5af48e*/
  float *v1; // eax
  float v3[3]; // [esp+28h] [ebp-Ch] BYREF
  v1 = TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af496*/
  Math::CalcAngle(v1[1], *v1); /*0x5af4c4*/
}
}
// 0x5AFB80
namespace gamemd {
float * TransformMatrix3x4Point(AbstractClass * aP0, IUnknown * aP1, IUnknown * aP2)
{

  float v5; // [esp+4h] [ebp-Ch]
  v5 = aP1[2] * aP2[2] + aP1[1] * aP2[1] + *aP1 * *aP2 + aP1[3]; /*0x5afba1*/
  float v6; // [esp+8h] [ebp-8h]
  v6 = aP1[4] * *aP2 + aP1[6] * aP2[2] + aP1[5] * aP2[1] + aP1[7]; /*0x5afbbd*/
  double v4; // st7
  v4 = aP1[8] * *aP2 + aP1[10] * aP2[2] + aP1[9] * aP2[1] + aP1[11]; /*0x5afbd7*/
  *aP0 = v5; /*0x5afbde*/
  float v7; // [esp+Ch] [ebp-4h]
  v7 = v4; /*0x5afbe4*/
  aP0[1] = v6; /*0x5afbe8*/
  aP0[2] = v7; /*0x5afbef*/
  return aP0; /*0x5afbf2*/
}
} // namespace gamemd

// 0x5AFC20
namespace gamemd {
float * Matrix3x3_InvertSigns(float * a1, float * a2)
{

  float v7[12]; // [esp+8h] [ebp-30h] BYREF
  v7[0] = *a2; /*0x5afc29*/
  double v3; // st7
  v3 = v7[0] * a2[3]; /*0x5afc34*/
  v7[1] = a2[4]; /*0x5afc37*/
  v7[2] = a2[8]; /*0x5afc3e*/
  double v4; // st6
  v4 = v7[2] * a2[11]; /*0x5afc49*/
  v7[4] = a2[1]; /*0x5afc4c*/
  v7[5] = a2[5]; /*0x5afc53*/
  double v5 = v3 + v4; // st7 /*0x5afc5a*/
  double v6; // st6
  v6 = v7[1] * a2[7]; /*0x5afc60*/
  v7[6] = a2[9]; /*0x5afc63*/
  v7[8] = a2[2]; /*0x5afc6a*/
  v7[9] = a2[6]; /*0x5afc73*/
  v7[10] = a2[10]; /*0x5afc7a*/
  v7[3] = -(v5 + v6); /*0x5afc85*/
  v7[7] = -(v7[4] * a2[3] + v7[6] * a2[11] + v7[5] * a2[7]); /*0x5afcaa*/
  v7[11] = -(v7[8] * a2[3] + v7[10] * a2[11] + v7[9] * a2[7]); /*0x5afcc9*/
  memcpy(a1, v7, 0x30u); /*0x5afccd*/
  return a1; /*0x5afccf*/
}
} // namespace gamemd

// 0x5AFCE0
namespace gamemd {
void sub_5AFCE0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5afcec*/
  dbl_ABEDF8 = Math::Sqrt(v0 + v0); /*0x5afcfe*/
}
} // namespace gamemd

// 0x5AFD10
namespace gamemd {
void sub_5AFD10()
{
  dbl_ABEE48 = dbl_ABEDF8 / 60.0; /*0x5afd1c*/
}
} // namespace gamemd

// 0x5AFD30
namespace gamemd {
void sub_5AFD30()
{
  dbl_ABEE30 = 1.0 / dbl_ABEE48; /*0x5afd3c*/
}
} // namespace gamemd

// 0x5AFD50
namespace gamemd {
void sub_5AFD50()
{
  dbl_ABEE28 = 0.0174532925199433 * 45.0; /*0x5afd5c*/
}
} // namespace gamemd

// 0x5AFD70
namespace gamemd {
void sub_5AFD70()
{
  dbl_ABEE00 = 0.0174532925199433 * 60.0; /*0x5afd7c*/
}
} // namespace gamemd

// 0x5AFD90
namespace gamemd {
void sub_5AFD90()
{
  dbl_ABEDD8 = 0.0174532925199433 * 90.0; /*0x5afd9c*/
}
} // namespace gamemd

// 0x5AFDB0
namespace gamemd {
long long sub_5AFDB0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABEDD8 - dbl_ABEE00); /*0x5afdc2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABEDF8 * 0.5); /*0x5afdd6*/
  dword_ABEE50 = result; /*0x5afddb*/
  return result; /*0x5afde0*/
}
} // namespace gamemd

// 0x5AFDF0
namespace gamemd {
void sub_5AFDF0()
{
  dbl_ABEE08 = Math::ArcTan((double)dword_ABEE50 * 0.00390625); /*0x5afe07*/
}
} // namespace gamemd

// 0x5AFE20
namespace gamemd {
void sub_5AFE20()
{
  dbl_ABEE20 = Math::ArcTan((double)(2 * dword_ABEE50) / dbl_ABEDF8); /*0x5afe42*/
}
} // namespace gamemd

// 0x5AFE50
namespace gamemd {
long long sub_5AFE50()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABEE50) + 0.5); /*0x5afe6b*/
  dword_ABEE44 = result; /*0x5afe70*/
  return result; /*0x5afe76*/
}
} // namespace gamemd

// 0x5AFE80
namespace gamemd {
int sub_5AFE80()
{
  word_ABEDF0 = 0; /*0x5afe82*/
  word_ABEDF2 = 0; /*0x5afe88*/
  return 0; /*0x5afe8e*/
}
} // namespace gamemd

// 0x5AFE90
namespace gamemd {
int sub_5AFE90()
{
  dword_ABEE10 = 0; /*0x5afe92*/
  dword_ABEE14 = 0; /*0x5afe97*/
  dword_ABEE18 = 0; /*0x5afe9c*/
  return 0; /*0x5afea1*/
}
} // namespace gamemd

// 0x5AFEB0
namespace gamemd {
int sub_5AFEB0()
{
  dword_ABEE40 = 0; /*0x5afeb5*/
  dword_ABEE38 = 128; /*0x5afebf*/
  dword_ABEE3C = 128; /*0x5afec4*/
  return 128; /*0x5afec9*/
}
} // namespace gamemd

// 0x5AFED0
namespace gamemd {
int sub_5AFED0()
{
  dword_ABEDE0 = 0; /*0x5afed2*/
  dword_ABEDE4 = 0; /*0x5afed7*/
  dword_ABEDE8 = 0; /*0x5afedc*/
  dword_ABEDEC = 0; /*0x5afee1*/
  return 0; /*0x5afee6*/
}
} // namespace gamemd

// 0x5AFF50
namespace gamemd {
void E4Recv_5AFF50::sub_5AFF50()
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EDB6C) */  /*0x5aff50*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EDB6C) */  /*0x5aff56*/
  LocomotionClass::Construct(); /*0x5aff5d*/
}
} // namespace gamemd
