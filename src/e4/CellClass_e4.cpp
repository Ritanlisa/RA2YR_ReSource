// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x544C80
namespace gamemd {
int CellClass::EnsureFileLoaded()
{

  if ( !*((unsigned int *)this + 41) && *((unsigned char *)this + 756) ) /*0x544c8d*/
    MapClass::LoadFileData(this); /*0x544c97*/
  return *((unsigned int *)this + 41) != 0; /*0x544ca9*/

}
}
// 0x56EF50
namespace gamemd {
int CellClass::UpdateVariant3(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int * v6;
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  unsigned int *v23; // eax
  unsigned int v24; // eax
  unsigned int *v25; // eax
  unsigned int *v26; // ecx
  unsigned int v27; // eax
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)((unsigned int)(aP1));
  v3 = (unsigned int)((ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0);
  aP1 = (IUnknown *)v3; /*0x56ef79*/
  *(unsigned int *)v32 = v3; /*0x56ef7d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56ef8c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56efa2*/
  {
    v6 = (unsigned int)(v5);
  }
  else
  {
    g_Map_GlobalCellIndex = (int)((unsigned int *)((IUnknown *)v3));
    v6 = g_CellClassArray; /*0x56efae*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56efba*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x56efbc*/
    if ( v7 <= 6u ) /*0x56efc4*/
    {
      *((unsigned char *)v6 + 286) = 7; /*0x56f000*/
    }
    else if ( v7 == 8 ) /*0x56efc8*/
    {
      ((CellClass *)((IUnknown *)v32))->UpdateVariant3(v2); /*0x56efd2*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56efdd*/
      *((unsigned char *)v6 + 286) = 0; /*0x56efe5*/
      ((unsigned int *)(v6))[17] = -1; /*0x56eff2*/
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56eff9*/
    }
  }
  v9 = ((unsigned int *)(v6))[14] - g_TerrainBridgeIndex + 1; /*0x56f018*/
  if ( v9 == dword_ABC1E8 || v9 == (int)(unk_AA0E38) ) /*0x56f027*/
  {
    IDA_LOBYTE(v9) = ((Cell *)((IUnknown *)v32))->UpdateTileType((IUnknown *)1, 0); /*0x56f2d7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x56f042*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56f2be*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f04d*/
  {
    ((CellClass *)((IUnknown *)v32))->UpdateVariant3(v2); /*0x56f05b*/
    if ( (*((unsigned char *)v6 + 282) & 1) != 0 ) /*0x56f067*/
    {
      IDA_HIWORD(aP1) = v32[1]; /*0x56f078*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f07d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x56f08b*/
      if ( v10 < 0x40000 && (v11 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x56f0a1*/
      {
        v12 = v11; /*0x56f0a3*/
      }
      else
      {
        v12 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f0b5*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f0c6*/
      IDA_HIWORD(aP1) = v32[1] - 1; /*0x56f0cb*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x56f0d9*/
      if ( v13 < 0x40000 && (v14 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x56f0ef*/
      {
        v15 = v14; /*0x56f0f1*/
      }
      else
      {
        v15 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f103*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f114*/
      IDA_HIWORD(aP1) = v32[1] + 1; /*0x56f119*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x56f127*/
      if ( v16 < 0x40000 && (v17 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) != 0 ) /*0x56f13d*/
      {
        v18 = v17; /*0x56f13f*/
      }
      else
      {
        v18 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f151*/
      IDA_HIWORD(aP1) = v32[1]; /*0x56f15e*/
      v19 = (int16_t)(v32[0] - 1); /*0x56f167*/
      v20 = v32[1] << 9; /*0x56f16a*/
      v21 = v19 + v20 < 0; /*0x56f16d*/
      v22 = v19 + v20; /*0x56f16d*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f16f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56f188*/
      {
        v23 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
    }
    else
    {
      aP1 = *(IUnknown **)v32; /*0x56f1db*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f1e9*/
      if ( v24 < 0x40000 && (v25 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x56f1ff*/
      {
        v26 = v25; /*0x56f201*/
      }
      else
      {
        v26 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f214*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x56f227*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x56f235*/
      if ( v27 < 0x40000 && (v28 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) != 0 ) /*0x56f24b*/
      {
        v29 = v28; /*0x56f24d*/
      }
      else
      {
        v29 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f25f*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x56f277*/
      v30 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x56f28a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f291*/
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v32); /*0x56f2a2*/
    }
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56f1c0*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)(*((char *)v23 + 283) - 4),
                   0);
  }
  return v9; /*0x56f1c5*/

}
}
// 0x56F2F0
namespace gamemd {
int CellClass::UpdateVariant4(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int * v6;
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  unsigned int *v23; // eax
  unsigned int v24; // eax
  unsigned int *v25; // eax
  unsigned int *v26; // ecx
  unsigned int v27; // eax
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)((unsigned int)(aP1));
  v3 = (unsigned int)((ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0);
  aP1 = (IUnknown *)v3; /*0x56f319*/
  *(unsigned int *)v32 = v3; /*0x56f31d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56f32c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56f342*/
  {
    v6 = (unsigned int)(v5);
  }
  else
  {
    g_Map_GlobalCellIndex = (int)((unsigned int *)((IUnknown *)v3));
    v6 = g_CellClassArray; /*0x56f34e*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56f35a*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x56f35c*/
    if ( v7 <= 6u ) /*0x56f364*/
    {
      *((unsigned char *)v6 + 286) = 8; /*0x56f3a0*/
    }
    else if ( v7 == 7 ) /*0x56f368*/
    {
      ((CellClass *)((IUnknown *)v32))->UpdateVariant4(v2); /*0x56f372*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56f37d*/
      *((unsigned char *)v6 + 286) = 0; /*0x56f385*/
      ((unsigned int *)(v6))[17] = -1; /*0x56f392*/
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56f399*/
    }
  }
  v9 = ((unsigned int *)(v6))[14] - g_TerrainBridgeIndex + 1; /*0x56f3b8*/
  if ( v9 == dword_ABC2B4 || v9 == unk_AA1130 ) /*0x56f3c7*/
  {
    IDA_LOBYTE(v9) = ((Cell *)((IUnknown *)v32))->UpdateTileType((IUnknown *)1, 0); /*0x56f677*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x56f3e2*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56f65e*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f3ed*/
  {
    ((CellClass *)((IUnknown *)v32))->UpdateVariant4(v2); /*0x56f3fb*/
    if ( (*((unsigned char *)v6 + 282) & 1) != 0 ) /*0x56f407*/
    {
      IDA_HIWORD(aP1) = v32[1]; /*0x56f418*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f41d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x56f42b*/
      if ( v10 < 0x40000 && (v11 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x56f441*/
      {
        v12 = v11; /*0x56f443*/
      }
      else
      {
        v12 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f455*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f466*/
      IDA_HIWORD(aP1) = v32[1] - 1; /*0x56f46b*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x56f479*/
      if ( v13 < 0x40000 && (v14 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x56f48f*/
      {
        v15 = v14; /*0x56f491*/
      }
      else
      {
        v15 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f4a3*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f4b4*/
      IDA_HIWORD(aP1) = v32[1] + 1; /*0x56f4b9*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x56f4c7*/
      if ( v16 < 0x40000 && (v17 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) != 0 ) /*0x56f4dd*/
      {
        v18 = v17; /*0x56f4df*/
      }
      else
      {
        v18 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f4f1*/
      IDA_HIWORD(aP1) = v32[1]; /*0x56f4fe*/
      v19 = (int16_t)(v32[0] - 1); /*0x56f507*/
      v20 = v32[1] << 9; /*0x56f50a*/
      v21 = v19 + v20 < 0; /*0x56f50d*/
      v22 = v19 + v20; /*0x56f50d*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x56f50f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56f528*/
      {
        v23 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
    }
    else
    {
      aP1 = *(IUnknown **)v32; /*0x56f57b*/
      v24 = v32[0] + (v32[1] << 9); /*0x56f589*/
      if ( v24 < 0x40000 && (v25 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x56f59f*/
      {
        v26 = v25; /*0x56f5a1*/
      }
      else
      {
        v26 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f5b4*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x56f5c7*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x56f5d5*/
      if ( v27 < 0x40000 && (v28 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) != 0 ) /*0x56f5eb*/
      {
        v29 = v28; /*0x56f5ed*/
      }
      else
      {
        v29 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f5ff*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x56f617*/
      v30 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x56f62a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f631*/
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v32); /*0x56f642*/
    }
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56f560*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)(*((char *)v23 + 283) - 4),
                   0);
  }
  return v9; /*0x56f565*/

}
}
// 0x56F8B0
namespace gamemd {
int CellClass::UpdateTerrain(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int * v6;
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // ecx
  unsigned int v20; // eax
  unsigned int v21;
  unsigned int v22; // eax
  unsigned int *v23; // eax
  unsigned int *v24; // ecx
  unsigned int v25; // eax
  unsigned int *v26; // eax
  unsigned int *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)((unsigned int)(aP1));
  v3 = (unsigned int)((ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0);
  aP1 = (IUnknown *)v3; /*0x56f8d9*/
  *(unsigned int *)v31 = v3; /*0x56f8dd*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56f8ec*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56f902*/
  {
    v6 = (unsigned int)(v5);
  }
  else
  {
    g_Map_GlobalCellIndex = (int)((unsigned int *)((IUnknown *)v3));
    v6 = g_CellClassArray; /*0x56f90e*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56f91a*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x56f91c*/
    if ( v7 >= 9u ) /*0x56f924*/
    {
      if ( v7 <= 0xFu ) /*0x56f928*/
      {
        *((unsigned char *)v6 + 286) = 17; /*0x56f964*/
      }
      else if ( v7 == 16 ) /*0x56f92c*/
      {
        ((CellClass *)((IUnknown *)v31))->UpdateTerrain(v2); /*0x56f936*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56f941*/
        *((unsigned char *)v6 + 286) = 0; /*0x56f949*/
        ((unsigned int *)(v6))[17] = -1; /*0x56f956*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56f95d*/
      }
    }
  }
  v9 = ((unsigned int *)(v6))[14] - g_TerrainBridgeIndex + 1; /*0x56f97c*/
  if ( v9 == dword_ABC1D0 || v9 == unk_AA1540 ) /*0x56f98b*/
  {
    IDA_LOBYTE(v9) = ((Cell *)((IUnknown *)v31))->UpdateTileType((IUnknown *)1, 0); /*0x56fc66*/
  }
  else if ( v9 == unk_AA1028 || v9 == unk_AA1028 + 2 ) /*0x56f9a6*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56fc4d*/
                   (IUnknown *)v31,
                   (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == unk_AA1028 + 3 ) /*0x56f9b1*/
  {
    ((CellClass *)((IUnknown *)v31))->UpdateTerrain(v2); /*0x56f9bf*/
    v10 = v31[0] - 1; /*0x56f9d0*/
    if ( *((unsigned char *)v6 + 282) <= 4u ) /*0x56f9d3*/
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x56fb39*/
      IDA_HIWORD(aP1) = v31[1]; /*0x56fb3e*/
      v22 = v10 + (v31[1] << 9); /*0x56fb4c*/
      if ( v22 < 0x40000 && (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) != 0 ) /*0x56fb62*/
      {
        v24 = v23; /*0x56fb64*/
      }
      else
      {
        v24 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v24); /*0x56fb76*/
      aP1 = *(IUnknown **)v31; /*0x56fb88*/
      v25 = v31[0] + (v31[1] << 9); /*0x56fb96*/
      if ( v25 < 0x40000 && (v26 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) != 0 ) /*0x56fbac*/
      {
        v27 = v26; /*0x56fbae*/
      }
      else
      {
        v27 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v27); /*0x56fbc0*/
      IDA_HIWORD(aP1) = v31[1]; /*0x56fbcf*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x56fbd4*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x56fbeb*/
      CellClass::UpdateAnimations((int)v28); /*0x56fbf2*/
      v29 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31); /*0x56fc03*/
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56fc2d*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(v29[283] - 4),
                     0);
    }
    else
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x56f9dd*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x56f9e8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x56f9f3*/
      if ( v11 < 0x40000 && (v12 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x56fa09*/
      {
        v13 = v12; /*0x56fa0b*/
      }
      else
      {
        v13 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fa1d*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56fa32*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56fa40*/
      if ( v14 < 0x40000 && (v15 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v14)) != 0 ) /*0x56fa56*/
      {
        v16 = v15; /*0x56fa58*/
      }
      else
      {
        v16 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fa6a*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x56fa7b*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x56fa80*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x56fa8e*/
      if ( v17 < 0x40000 && (v18 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) != 0 ) /*0x56faa4*/
      {
        v19 = v18; /*0x56faa6*/
      }
      else
      {
        v19 = (unsigned int *)((int)(g_CellClassArray));
        g_Map_GlobalCellIndex = (int)(aP1);
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fab8*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56facd*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56fadb*/
      if ( v20 >= 0x40000 || (v21 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56faf1*/
      {
        g_Map_GlobalCellIndex = (int)((unsigned int *)(aP1));
        v21 = g_CellClassArray; /*0x56fafc*/
      }
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56fb27*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(*((char *)v21 + 283) - 4),
                     0);
    }
  }
  return v9; /*0x56fb2c*/

}
}
// 0x56FC80
namespace gamemd {
int CellClass::UpdateTileVariant2(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int v6;
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // eax
  unsigned int v22; // eax
  unsigned int *v23; // eax
  unsigned int *v24; // ecx
  unsigned int v25; // eax
  unsigned int *v26; // eax
  unsigned int *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (unsigned int)(aP1);
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0; /*0x56fca7*/
  aP1 = (IUnknown *)v3; /*0x56fca9*/
  *(unsigned int *)v31 = v3; /*0x56fcad*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56fcbc*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56fcd2*/
  {
    v6 = v5; /*0x56fcd4*/
  }
  else
  {
    g_Map_GlobalCellIndex = (unsigned int *)((IUnknown *)v3);
    v6 = g_CellClassArray; /*0x56fcde*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x56fcea*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x56fcec*/
    if ( v7 >= 9u ) /*0x56fcf4*/
    {
      if ( v7 <= 0xFu ) /*0x56fcf8*/
      {
        *((unsigned char *)v6 + 286) = 16; /*0x56fd34*/
      }
      else if ( v7 == 17 ) /*0x56fcfc*/
      {
        ((CellClass *)((IUnknown *)v31))->UpdateTileVariant2(v2); /*0x56fd06*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56fd11*/
        *((unsigned char *)v6 + 286) = 0; /*0x56fd19*/
        v6[17] = -1; /*0x56fd26*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56fd2d*/
      }
    }
  }
  v9 = v6[14] - g_TerrainBridgeIndex + 1; /*0x56fd4c*/
  if ( v9 == unk_AA1548 || v9 == unk_AA0740 ) /*0x56fd5b*/
  {
    IDA_LOBYTE(v9) = ((Cell *)((IUnknown *)v31))->UpdateTileType((IUnknown *)1, 0); /*0x570036*/
  }
  else if ( v9 == unk_AA1028 || v9 == unk_AA1028 + 1 ) /*0x56fd76*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x57001d*/
                   (IUnknown *)v31,
                   (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == unk_AA1028 + 3 ) /*0x56fd81*/
  {
    CellClass::UpdateTileVariant2((IUnknown *)v31, v2); /*0x56fd8f*/
    v10 = v31[0] - 1; /*0x56fda0*/
    if ( *((unsigned char *)v6 + 282) <= 4u ) /*0x56fda3*/
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x56ff09*/
      IDA_HIWORD(aP1) = v31[1]; /*0x56ff0e*/
      v22 = v10 + (v31[1] << 9); /*0x56ff1c*/
      if ( v22 < 0x40000 && (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) != 0 ) /*0x56ff32*/
      {
        v24 = v23; /*0x56ff34*/
      }
      else
      {
        v24 = g_CellClassArray; /*0x56ff3c*/
        g_Map_GlobalCellIndex = aP1; /*0x56ff41*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56ff46*/
      aP1 = *(IUnknown **)v31; /*0x56ff58*/
      v25 = v31[0] + (v31[1] << 9); /*0x56ff66*/
      if ( v25 < 0x40000 && (v26 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) != 0 ) /*0x56ff7c*/
      {
        v27 = v26; /*0x56ff7e*/
      }
      else
      {
        v27 = g_CellClassArray; /*0x56ff86*/
        g_Map_GlobalCellIndex = aP1; /*0x56ff8b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56ff90*/
      IDA_HIWORD(aP1) = v31[1]; /*0x56ff9f*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x56ffa4*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x56ffbb*/
      CellClass::UpdateAnimations((int)v28); /*0x56ffc2*/
      v29 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31); /*0x56ffd3*/
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56fffd*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(v29[283] - 4),
                     0);
    }
    else
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x56fdad*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x56fdb8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x56fdc3*/
      if ( v11 < 0x40000 && (v12 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x56fdd9*/
      {
        v13 = v12; /*0x56fddb*/
      }
      else
      {
        v13 = g_CellClassArray; /*0x56fde3*/
        g_Map_GlobalCellIndex = aP1; /*0x56fde8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fded*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56fe02*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56fe10*/
      if ( v14 < 0x40000 && (v15 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v14)) != 0 ) /*0x56fe26*/
      {
        v16 = v15; /*0x56fe28*/
      }
      else
      {
        v16 = g_CellClassArray; /*0x56fe30*/
        g_Map_GlobalCellIndex = aP1; /*0x56fe35*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fe3a*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x56fe4b*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x56fe50*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x56fe5e*/
      if ( v17 < 0x40000 && (v18 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) != 0 ) /*0x56fe74*/
      {
        v19 = v18; /*0x56fe76*/
      }
      else
      {
        v19 = g_CellClassArray; /*0x56fe7e*/
        g_Map_GlobalCellIndex = aP1; /*0x56fe83*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fe88*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56fe9d*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56feab*/
      if ( v20 >= 0x40000 || (v21 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56fec1*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x56fec7*/
        v21 = g_CellClassArray; /*0x56fecc*/
      }
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x56fef7*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + g_TerrainBridgeIndex + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(*((char *)v21 + 283) - 4),
                     0);
    }
  }
  return v9; /*0x56fefc*/

}
}
// 0x572440
namespace gamemd {
int CellClass::UpdateVariant7(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  unsigned int *v23; // eax
  unsigned int v24; // eax
  unsigned int *v25; // eax
  unsigned int *v26; // ecx
  unsigned int v27; // eax
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x572446*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0; /*0x572467*/
  aP1 = (IUnknown *)v3; /*0x572469*/
  *(unsigned int *)v32 = v3; /*0x57246d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x57247c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x572492*/
  {
    v6 = v5; /*0x572494*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x572498*/
    v6 = g_CellClassArray; /*0x57249e*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x5724aa*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x5724ac*/
    if ( v7 <= 6u ) /*0x5724b4*/
    {
      *((unsigned char *)v6 + 286) = 7; /*0x5724f0*/
    }
    else if ( v7 == 8 ) /*0x5724b8*/
    {
      CellClass::UpdateVariant7((IUnknown *)v32, v2); /*0x5724c2*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x5724cd*/
      *((unsigned char *)v6 + 286) = 0; /*0x5724d5*/
      v6[17] = -1; /*0x5724e2*/
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x5724e9*/
    }
  }
  v9 = v6[14] - unk_AA0E28 + 1; /*0x572508*/
  if ( v9 == dword_ABC1E8 || v9 == unk_AA0E38 ) /*0x572517*/
  {
    IDA_LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v32, (IUnknown *)1, 0); /*0x5727c7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x572532*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x5727ae*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x57253d*/
  {
    CellClass::UpdateVariant7((IUnknown *)v32, v2); /*0x57254b*/
    if ( (*((unsigned char *)v6 + 282) & 1) != 0 ) /*0x572557*/
    {
      IDA_HIWORD(aP1) = v32[1]; /*0x572568*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x57256d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x57257b*/
      if ( v10 < 0x40000 && (v11 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x572591*/
      {
        v12 = v11; /*0x572593*/
      }
      else
      {
        v12 = g_CellClassArray; /*0x57259b*/
        g_Map_GlobalCellIndex = aP1; /*0x5725a0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x5725a5*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x5725b6*/
      IDA_HIWORD(aP1) = v32[1] - 1; /*0x5725bb*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x5725c9*/
      if ( v13 < 0x40000 && (v14 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x5725df*/
      {
        v15 = v14; /*0x5725e1*/
      }
      else
      {
        v15 = g_CellClassArray; /*0x5725e9*/
        g_Map_GlobalCellIndex = aP1; /*0x5725ee*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x5725f3*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x572604*/
      IDA_HIWORD(aP1) = v32[1] + 1; /*0x572609*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x572617*/
      if ( v16 < 0x40000 && (v17 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) != 0 ) /*0x57262d*/
      {
        v18 = v17; /*0x57262f*/
      }
      else
      {
        v18 = g_CellClassArray; /*0x572637*/
        g_Map_GlobalCellIndex = aP1; /*0x57263c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x572641*/
      IDA_HIWORD(aP1) = v32[1]; /*0x57264e*/
      v19 = (int16_t)(v32[0] - 1); /*0x572657*/
      v20 = v32[1] << 9; /*0x57265a*/
      v21 = v19 + v20 < 0; /*0x57265d*/
      v22 = v19 + v20; /*0x57265d*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x57265f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x572678*/
      {
        v23 = g_CellClassArray; /*0x57267e*/
        g_Map_GlobalCellIndex = aP1; /*0x572683*/
      }
    }
    else
    {
      aP1 = *(IUnknown **)v32; /*0x5726cb*/
      v24 = v32[0] + (v32[1] << 9); /*0x5726d9*/
      if ( v24 < 0x40000 && (v25 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x5726ef*/
      {
        v26 = v25; /*0x5726f1*/
      }
      else
      {
        v26 = g_CellClassArray; /*0x5726f9*/
        g_Map_GlobalCellIndex = aP1; /*0x5726fe*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572704*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x572717*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x572725*/
      if ( v27 < 0x40000 && (v28 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) != 0 ) /*0x57273b*/
      {
        v29 = v28; /*0x57273d*/
      }
      else
      {
        v29 = g_CellClassArray; /*0x572745*/
        g_Map_GlobalCellIndex = aP1; /*0x57274a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x57274f*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x572767*/
      v30 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x57277a*/
      CellClass::UpdateAnimations((int)v30); /*0x572781*/
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v32); /*0x572792*/
    }
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x5726b0*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 3),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)(*((char *)v23 + 283) - 4),
                   0);
  }
  return v9; /*0x5726b5*/

}
}
// 0x5727E0
namespace gamemd {
int CellClass::UpdateVariant8(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  unsigned int *v23; // eax
  unsigned int v24; // eax
  unsigned int *v25; // eax
  unsigned int *v26; // ecx
  unsigned int v27; // eax
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x5727e6*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0; /*0x572807*/
  aP1 = (IUnknown *)v3; /*0x572809*/
  *(unsigned int *)v32 = v3; /*0x57280d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x57281c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x572832*/
  {
    v6 = v5; /*0x572834*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x572838*/
    v6 = g_CellClassArray; /*0x57283e*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x57284a*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x57284c*/
    if ( v7 <= 6u ) /*0x572854*/
    {
      *((unsigned char *)v6 + 286) = 8; /*0x572890*/
    }
    else if ( v7 == 7 ) /*0x572858*/
    {
      CellClass::UpdateVariant8((IUnknown *)v32, v2); /*0x572862*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x57286d*/
      *((unsigned char *)v6 + 286) = 0; /*0x572875*/
      v6[17] = -1; /*0x572882*/
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x572889*/
    }
  }
  v9 = v6[14] - unk_AA0E28 + 1; /*0x5728a8*/
  if ( v9 == dword_ABC2B4 || v9 == unk_AA1130 ) /*0x5728b7*/
  {
    IDA_LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v32, (IUnknown *)1, 0); /*0x572b67*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x5728d2*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x572b4e*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x5728dd*/
  {
    CellClass::UpdateVariant8((IUnknown *)v32, v2); /*0x5728eb*/
    if ( (*((unsigned char *)v6 + 282) & 1) != 0 ) /*0x5728f7*/
    {
      IDA_HIWORD(aP1) = v32[1]; /*0x572908*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x57290d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x57291b*/
      if ( v10 < 0x40000 && (v11 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) != 0 ) /*0x572931*/
      {
        v12 = v11; /*0x572933*/
      }
      else
      {
        v12 = g_CellClassArray; /*0x57293b*/
        g_Map_GlobalCellIndex = aP1; /*0x572940*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x572945*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x572956*/
      IDA_HIWORD(aP1) = v32[1] - 1; /*0x57295b*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x572969*/
      if ( v13 < 0x40000 && (v14 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x57297f*/
      {
        v15 = v14; /*0x572981*/
      }
      else
      {
        v15 = g_CellClassArray; /*0x572989*/
        g_Map_GlobalCellIndex = aP1; /*0x57298e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x572993*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x5729a4*/
      IDA_HIWORD(aP1) = v32[1] + 1; /*0x5729a9*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x5729b7*/
      if ( v16 < 0x40000 && (v17 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v16)) != 0 ) /*0x5729cd*/
      {
        v18 = v17; /*0x5729cf*/
      }
      else
      {
        v18 = g_CellClassArray; /*0x5729d7*/
        g_Map_GlobalCellIndex = aP1; /*0x5729dc*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x5729e1*/
      IDA_HIWORD(aP1) = v32[1]; /*0x5729ee*/
      v19 = (int16_t)(v32[0] - 1); /*0x5729f7*/
      v20 = v32[1] << 9; /*0x5729fa*/
      v21 = v19 + v20 < 0; /*0x5729fd*/
      v22 = v19 + v20; /*0x5729fd*/
      IDA_LOWORD(aP1) = v32[0] - 1; /*0x5729ff*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x572a18*/
      {
        v23 = g_CellClassArray; /*0x572a1e*/
        g_Map_GlobalCellIndex = aP1; /*0x572a23*/
      }
    }
    else
    {
      aP1 = *(IUnknown **)v32; /*0x572a6b*/
      v24 = v32[0] + (v32[1] << 9); /*0x572a79*/
      if ( v24 < 0x40000 && (v25 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x572a8f*/
      {
        v26 = v25; /*0x572a91*/
      }
      else
      {
        v26 = g_CellClassArray; /*0x572a99*/
        g_Map_GlobalCellIndex = aP1; /*0x572a9e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572aa4*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x572ab7*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x572ac5*/
      if ( v27 < 0x40000 && (v28 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v27)) != 0 ) /*0x572adb*/
      {
        v29 = v28; /*0x572add*/
      }
      else
      {
        v29 = g_CellClassArray; /*0x572ae5*/
        g_Map_GlobalCellIndex = aP1; /*0x572aea*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x572aef*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x572b07*/
      v30 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x572b1a*/
      CellClass::UpdateAnimations((int)v30); /*0x572b21*/
      v23 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v32); /*0x572b32*/
    }
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x572a50*/
                   (IUnknown *)v32,
                   (IUnknown *)(g_TerrainSoundTable2 + unk_AA0E28 + 3),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)(*((char *)v23 + 283) - 4),
                   0);
  }
  return v9; /*0x572a55*/

}
}
// 0x572DA0
namespace gamemd {
HouseClass * * CellClass::UpdateVariant5(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // eax
  unsigned int v22; // eax
  unsigned int *v23; // eax
  unsigned int *v24; // ecx
  unsigned int v25; // eax
  unsigned int *v26; // eax
  unsigned int *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x572da6*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0; /*0x572dc7*/
  aP1 = (IUnknown *)v3; /*0x572dc9*/
  *(unsigned int *)v31 = v3; /*0x572dcd*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x572ddc*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x572df2*/
  {
    v6 = v5; /*0x572df4*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x572df8*/
    v6 = g_CellClassArray; /*0x572dfe*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x572e0a*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x572e0c*/
    if ( v7 >= 9u ) /*0x572e14*/
    {
      if ( v7 <= 0xFu ) /*0x572e18*/
      {
        *((unsigned char *)v6 + 286) = 17; /*0x572e54*/
      }
      else if ( v7 == 16 ) /*0x572e1c*/
      {
        CellClass::UpdateVariant5((IUnknown *)v31, v2); /*0x572e26*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x572e31*/
        *((unsigned char *)v6 + 286) = 0; /*0x572e39*/
        v6[17] = -1; /*0x572e46*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x572e4d*/
      }
    }
  }
  v9 = v6[14] - unk_AA0E28 + 1; /*0x572e6c*/
  if ( v9 == dword_ABC1D0 || v9 == unk_AA1540 ) /*0x572e7b*/
  {
    IDA_LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v31, (IUnknown *)1, 0); /*0x573156*/
  }
  else if ( v9 == unk_AA1028 || v9 == unk_AA1028 + 2 ) /*0x572e96*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x57313d*/
                   (IUnknown *)v31,
                   (IUnknown *)(unk_AA1028 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == unk_AA1028 + 3 ) /*0x572ea1*/
  {
    CellClass::UpdateVariant5((IUnknown *)v31, v2); /*0x572eaf*/
    v10 = v31[0] - 1; /*0x572ec0*/
    if ( *((unsigned char *)v6 + 282) <= 4u ) /*0x572ec3*/
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x573029*/
      IDA_HIWORD(aP1) = v31[1]; /*0x57302e*/
      v22 = v10 + (v31[1] << 9); /*0x57303c*/
      if ( v22 < 0x40000 && (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) != 0 ) /*0x573052*/
      {
        v24 = v23; /*0x573054*/
      }
      else
      {
        v24 = g_CellClassArray; /*0x57305c*/
        g_Map_GlobalCellIndex = aP1; /*0x573061*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573066*/
      aP1 = *(IUnknown **)v31; /*0x573078*/
      v25 = v31[0] + (v31[1] << 9); /*0x573086*/
      if ( v25 < 0x40000 && (v26 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) != 0 ) /*0x57309c*/
      {
        v27 = v26; /*0x57309e*/
      }
      else
      {
        v27 = g_CellClassArray; /*0x5730a6*/
        g_Map_GlobalCellIndex = aP1; /*0x5730ab*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x5730b0*/
      IDA_HIWORD(aP1) = v31[1]; /*0x5730bf*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x5730c4*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x5730db*/
      CellClass::UpdateAnimations((int)v28); /*0x5730e2*/
      v29 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31); /*0x5730f3*/
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x57311d*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + unk_AA0E28 + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(v29[283] - 4),
                     0);
    }
    else
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x572ecd*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x572ed8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x572ee3*/
      if ( v11 < 0x40000 && (v12 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x572ef9*/
      {
        v13 = v12; /*0x572efb*/
      }
      else
      {
        v13 = g_CellClassArray; /*0x572f03*/
        g_Map_GlobalCellIndex = aP1; /*0x572f08*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x572f0d*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x572f22*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x572f30*/
      if ( v14 < 0x40000 && (v15 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v14)) != 0 ) /*0x572f46*/
      {
        v16 = v15; /*0x572f48*/
      }
      else
      {
        v16 = g_CellClassArray; /*0x572f50*/
        g_Map_GlobalCellIndex = aP1; /*0x572f55*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x572f5a*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x572f6b*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x572f70*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x572f7e*/
      if ( v17 < 0x40000 && (v18 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) != 0 ) /*0x572f94*/
      {
        v19 = v18; /*0x572f96*/
      }
      else
      {
        v19 = g_CellClassArray; /*0x572f9e*/
        g_Map_GlobalCellIndex = aP1; /*0x572fa3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x572fa8*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x572fbd*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x572fcb*/
      if ( v20 >= 0x40000 || (v21 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x572fe1*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x572fe7*/
        v21 = g_CellClassArray; /*0x572fec*/
      }
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x573017*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + unk_AA0E28 + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(*((char *)v21 + 283) - 4),
                     0);
    }
  }
  return v9; /*0x57301c*/

}
}
// 0x573170
namespace gamemd {
HouseClass * * CellClass::UpdateVariant6(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown *v2; // edi
  ObjectClass *v3; // ecx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // eax
  unsigned int v22; // eax
  unsigned int *v23; // eax
  unsigned int *v24; // ecx
  unsigned int v25; // eax
  unsigned int *v26; // eax
  unsigned int *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x573176*/
  v3 = (ObjectClass *)CellStruct::Add(aP0, (IUnknown *)&aP1, (IUnknown *)(4 * ((uint8_t)aP1 & 7) + 9041544))->field_0; /*0x573197*/
  aP1 = (IUnknown *)v3; /*0x573199*/
  *(unsigned int *)v31 = v3; /*0x57319d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x5731ac*/
  if ( v4 < 0x40000 && (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x5731c2*/
  {
    v6 = v5; /*0x5731c4*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x5731c8*/
    v6 = g_CellClassArray; /*0x5731ce*/
  }
  if ( *((char *)v6 + 320) < 0 ) /*0x5731da*/
  {
    v7 = *((unsigned char *)v6 + 286); /*0x5731dc*/
    if ( v7 >= 9u ) /*0x5731e4*/
    {
      if ( v7 <= 0xFu ) /*0x5731e8*/
      {
        *((unsigned char *)v6 + 286) = 16; /*0x573224*/
      }
      else if ( v7 == 17 ) /*0x5731ec*/
      {
        CellClass::UpdateVariant6((IUnknown *)v31, v2); /*0x5731f6*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x573201*/
        *((unsigned char *)v6 + 286) = 0; /*0x573209*/
        v6[17] = -1; /*0x573216*/
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x57321d*/
      }
    }
  }
  v9 = v6[14] - unk_AA0E28 + 1; /*0x57323c*/
  if ( v9 == unk_AA1548 || v9 == unk_AA0740 ) /*0x57324b*/
  {
    IDA_LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)v31, (IUnknown *)1, 0); /*0x573526*/
  }
  else if ( v9 == unk_AA1028 || v9 == unk_AA1028 + 1 ) /*0x573266*/
  {
    IDA_LOBYTE(v9) = Cell::SetTileType( /*0x57350d*/
                   (IUnknown *)v31,
                   (IUnknown *)(unk_AA1028 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v9 == unk_AA1028 + 3 ) /*0x573271*/
  {
    CellClass::UpdateVariant6((IUnknown *)v31, v2); /*0x57327f*/
    v10 = v31[0] - 1; /*0x573290*/
    if ( *((unsigned char *)v6 + 282) <= 4u ) /*0x573293*/
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x5733f9*/
      IDA_HIWORD(aP1) = v31[1]; /*0x5733fe*/
      v22 = v10 + (v31[1] << 9); /*0x57340c*/
      if ( v22 < 0x40000 && (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) != 0 ) /*0x573422*/
      {
        v24 = v23; /*0x573424*/
      }
      else
      {
        v24 = g_CellClassArray; /*0x57342c*/
        g_Map_GlobalCellIndex = aP1; /*0x573431*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573436*/
      aP1 = *(IUnknown **)v31; /*0x573448*/
      v25 = v31[0] + (v31[1] << 9); /*0x573456*/
      if ( v25 < 0x40000 && (v26 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v25)) != 0 ) /*0x57346c*/
      {
        v27 = v26; /*0x57346e*/
      }
      else
      {
        v27 = g_CellClassArray; /*0x573476*/
        g_Map_GlobalCellIndex = aP1; /*0x57347b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x573480*/
      IDA_HIWORD(aP1) = v31[1]; /*0x57348f*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x573494*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP1); /*0x5734ab*/
      CellClass::UpdateAnimations((int)v28); /*0x5734b2*/
      v29 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31); /*0x5734c3*/
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x5734ed*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + unk_AA0E28 + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(v29[283] - 4),
                     0);
    }
    else
    {
      IDA_LOWORD(aP1) = v31[0] - 1; /*0x57329d*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x5732a8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x5732b3*/
      if ( v11 < 0x40000 && (v12 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v11)) != 0 ) /*0x5732c9*/
      {
        v13 = v12; /*0x5732cb*/
      }
      else
      {
        v13 = g_CellClassArray; /*0x5732d3*/
        g_Map_GlobalCellIndex = aP1; /*0x5732d8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x5732dd*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x5732f2*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x573300*/
      if ( v14 < 0x40000 && (v15 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v14)) != 0 ) /*0x573316*/
      {
        v16 = v15; /*0x573318*/
      }
      else
      {
        v16 = g_CellClassArray; /*0x573320*/
        g_Map_GlobalCellIndex = aP1; /*0x573325*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x57332a*/
      IDA_LOWORD(aP1) = v31[0] + 1; /*0x57333b*/
      IDA_HIWORD(aP1) = v31[1] - 1; /*0x573340*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x57334e*/
      if ( v17 < 0x40000 && (v18 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) != 0 ) /*0x573364*/
      {
        v19 = v18; /*0x573366*/
      }
      else
      {
        v19 = g_CellClassArray; /*0x57336e*/
        g_Map_GlobalCellIndex = aP1; /*0x573373*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x573378*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x57338d*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x57339b*/
      if ( v20 >= 0x40000 || (v21 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x5733b1*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x5733b7*/
        v21 = g_CellClassArray; /*0x5733bc*/
      }
      IDA_LOBYTE(v9) = Cell::SetTileType( /*0x5733e7*/
                     (IUnknown *)v31,
                     (IUnknown *)(unk_AA1028 + unk_AA0E28 + 3),
                     (IUnknown *)0xFFFFFFFF,
                     (IUnknown *)(*((char *)v21 + 283) - 4),
                     0);
    }
  }
  return v9; /*0x5733ec*/

}
}
// 0x57BAA0
namespace gamemd {
int CellClass::CheckTilePassable2(IUnknown * aP0)
{

  int *v1; // ecx
  int16_t *v2; // esi
  int *v3; // edi
  unsigned int v4; // eax
  unsigned int *v5; // eax
  int v6; // eax
  int16_t v7; // dx
  int v8; // eax
  int16_t v9; // ax
  int16_t v11; // cx
  int v12; // eax
  int16_t v13; // dx
  int16_t v14; // dx
  int v15; // eax
  int16_t v16; // ax
  int16_t v17; // cx
  int v18; // eax
  int v19; // [esp+8h] [ebp-8h] BYREF
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int16_t *)aP0; /*0x57baa4*/
  v3 = v1; /*0x57baa9*/
  v4 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x57bab5*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x57bacb*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x57bacf*/
    v5 = g_CellClassArray; /*0x57bad4*/
  }
  v6 = v5[17]; /*0x57bad9*/
  if ( v6 >= 74 && v6 <= 82 || v6 >= 92 && v6 <= 95 || v6 == 100 ) /*0x57baf3*/
  {
    v7 = IDA_HIWORD(aP0->field_0); /*0x57bafc*/
    IDA_LOWORD(aP0) = aP0->field_0; /*0x57bb00*/
    IDA_HIWORD(aP0) = v7 - 1; /*0x57bb0b*/
    v8 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57bb23*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57bb2e*/
    {
      v11 = v2[1] - 2; /*0x57bb66*/
      IDA_LOWORD(aP0) = *v2; /*0x57bb6a*/
      IDA_HIWORD(aP0) = v11; /*0x57bb6f*/
      v12 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57bb8b*/
      if ( v12 >= 74 && v12 <= 101 ) /*0x57bb96*/
      {
        v13 = v2[1]; /*0x57bbab*/
        IDA_LOWORD(aP0) = *v2; /*0x57bbaf*/
        IDA_HIWORD(aP0) = v13 - 1; /*0x57bbba*/
        return CellClass::ApplyTileModification(v3, (int16_t *)&aP0); /*0x57bbca*/
      }
      else
      {
        return CellClass::ApplyTileModification(v3, v2); /*0x57bb9b*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57bb37*/
      IDA_LOWORD(aP0) = *v2; /*0x57bb39*/
      IDA_HIWORD(aP0) = v9; /*0x57bb3e*/
      return CellClass::ApplyTileModification(v3, (int16_t *)&aP0); /*0x57bb52*/
    }
  }
  else if ( v6 >= 83 && v6 <= 91 || v6 >= 96 && v6 <= 99 || v6 == 101 ) /*0x57bbee*/
  {
    v14 = IDA_LOWORD(aP0->field_0) - 1; /*0x57bbfb*/
    IDA_HIWORD(aP0) = IDA_HIWORD(aP0->field_0); /*0x57bbfd*/
    IDA_LOWORD(aP0) = v14; /*0x57bc02*/
    v15 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57bc1e*/
    if ( v15 >= 74 && v15 <= 101 ) /*0x57bc29*/
    {
      v17 = *v2 - 2; /*0x57bc61*/
      IDA_HIWORD(aP0) = v2[1]; /*0x57bc65*/
      IDA_LOWORD(aP0) = v17; /*0x57bc6a*/
      v18 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57bc86*/
      if ( v18 >= 74 && v18 <= 101 ) /*0x57bc91*/
      {
        aP0 = (IUnknown *)1; /*0x57bcaf*/
        v19 = CellStruct::Sub(v2, (IUnknown *)&v20, (IUnknown *)&aP0)->field_0; /*0x57bcc8*/
        return CellClass::ApplyTileModification2(v3, (int16_t *)&v19); /*0x57bccf*/
      }
      else
      {
        return CellClass::ApplyTileModification2(v3, v2); /*0x57bc96*/
      }
    }
    else
    {
      v16 = *v2 + 1; /*0x57bc32*/
      IDA_HIWORD(aP0) = v2[1]; /*0x57bc34*/
      IDA_LOWORD(aP0) = v16; /*0x57bc39*/
      return CellClass::ApplyTileModification2(v3, (int16_t *)&aP0); /*0x57bc4d*/
    }
  }
  else
  {
    return 0; /*0x57bcdd*/
  }

}
}
// 0x57CCF0
namespace gamemd {
int CellClass::CheckTilePassable(IUnknown * aP0)
{

  int *v1; // ecx
  int16_t *v2; // esi
  int *v3; // edi
  unsigned int v4; // eax
  unsigned int *v5; // eax
  int v6; // eax
  int16_t v7; // dx
  int v8; // eax
  int16_t v9; // ax
  int16_t v11; // cx
  int v12; // eax
  int16_t v13; // dx
  int16_t v14; // dx
  int v15; // eax
  int16_t v16; // ax
  int16_t v17; // cx
  int v18; // eax
  int v19; // [esp+8h] [ebp-8h] BYREF
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int16_t *)aP0; /*0x57ccf4*/
  v3 = v1; /*0x57ccf9*/
  v4 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x57cd05*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x57cd1b*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x57cd1f*/
    v5 = g_CellClassArray; /*0x57cd24*/
  }
  v6 = v5[17]; /*0x57cd29*/
  if ( v6 >= 205 && v6 <= 213 || v6 >= 223 && v6 <= 226 || v6 == 231 ) /*0x57cd4d*/
  {
    v7 = IDA_HIWORD(aP0->field_0); /*0x57cd56*/
    IDA_LOWORD(aP0) = aP0->field_0; /*0x57cd5a*/
    IDA_HIWORD(aP0) = v7 - 1; /*0x57cd65*/
    v8 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57cd7d*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x57cd8c*/
    {
      v11 = v2[1] - 2; /*0x57cdc4*/
      IDA_LOWORD(aP0) = *v2; /*0x57cdc8*/
      IDA_HIWORD(aP0) = v11; /*0x57cdcd*/
      v12 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57cde9*/
      if ( v12 >= 205 && v12 <= 232 ) /*0x57cdf8*/
      {
        v13 = v2[1]; /*0x57ce0d*/
        IDA_LOWORD(aP0) = *v2; /*0x57ce11*/
        IDA_HIWORD(aP0) = v13 - 1; /*0x57ce1c*/
        return CellClass::ApplyTileModification3(v3, (int16_t *)&aP0); /*0x57ce2c*/
      }
      else
      {
        return CellClass::ApplyTileModification3(v3, v2); /*0x57cdfd*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57cd95*/
      IDA_LOWORD(aP0) = *v2; /*0x57cd97*/
      IDA_HIWORD(aP0) = v9; /*0x57cd9c*/
      return CellClass::ApplyTileModification3(v3, (int16_t *)&aP0); /*0x57cdb0*/
    }
  }
  else if ( v6 >= 214 && v6 <= 222 || v6 >= 227 && v6 <= 230 || v6 == 232 ) /*0x57ce5a*/
  {
    v14 = IDA_LOWORD(aP0->field_0) - 1; /*0x57ce67*/
    IDA_HIWORD(aP0) = IDA_HIWORD(aP0->field_0); /*0x57ce69*/
    IDA_LOWORD(aP0) = v14; /*0x57ce6e*/
    v15 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57ce8a*/
    if ( v15 >= 205 && v15 <= 232 ) /*0x57ce99*/
    {
      v17 = *v2 - 2; /*0x57ced1*/
      IDA_HIWORD(aP0) = v2[1]; /*0x57ced5*/
      IDA_LOWORD(aP0) = v17; /*0x57ceda*/
      v18 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0) + 17); /*0x57cef6*/
      if ( v18 >= 205 && v18 <= 232 ) /*0x57cf05*/
      {
        aP0 = (IUnknown *)1; /*0x57cf23*/
        v19 = CellStruct::Sub(v2, (IUnknown *)&v20, (IUnknown *)&aP0)->field_0; /*0x57cf3c*/
        return CellClass::ApplyTileModification4(v3, (int16_t *)&v19); /*0x57cf43*/
      }
      else
      {
        return CellClass::ApplyTileModification4(v3, v2); /*0x57cf0a*/
      }
    }
    else
    {
      v16 = *v2 + 1; /*0x57cea2*/
      IDA_HIWORD(aP0) = v2[1]; /*0x57cea4*/
      IDA_LOWORD(aP0) = v16; /*0x57cea9*/
      return CellClass::ApplyTileModification4(v3, (int16_t *)&aP0); /*0x57cebd*/
    }
  }
  else
  {
    return 0; /*0x57cf51*/
  }

}
}
// 0x65B510
namespace gamemd {
int CellClass::GetOccupiedRatio()
{

  int v1; // esi

  v1 = *((char *)this + 27); /*0x65b511*/
  if ( v1 > 0 ) /*0x65b516*/
    return *((char *)this + 19) * *((char *)this + 28) / v1; /*0x65b524*/
  else
    return 0; /*0x65b518*/

}
}
// 0x487E60
namespace gamemd {
int CellClass::StubReturn11()
{

  return 11; /*0x487e65*/

}
} // namespace gamemd

// 0x487E70
namespace gamemd {
int CellClass::StubReturn328()
{

  return 328; /*0x487e75*/

}
} // namespace gamemd

// 0x48BA80
namespace gamemd {
int CellClass::GetBridgeIndex()
{

  return *((unsigned int *)this + 7); /*0x48ba83*/

}
} // namespace gamemd

// 0x56BCD0
namespace gamemd {
int CellClass::GetTileData(IUnknown * aP0, IUnknown * aP1)
{

  unsigned int v2; // eax
  unsigned int *v3; // eax

  v2 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x56bcde*/
  if ( v2 >= 0x40000 || (v3 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v2)) == 0 ) /*0x56bcf4*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x56bcf8*/
    v3 = g_CellClassArray; /*0x56bcfd*/
  }
  return *(unsigned int *)&aP1->__pad_579C[520 * ((int16_t)IDA_HIWORD(v3[9]) / 4) + 596 + 4 * ((int16_t)v3[9] / 4)]; /*0x56bd3a*/

}
} // namespace gamemd

// 0x572B80
namespace gamemd {
char CellClass::SetTileType13(IUnknown * aP0, int a2)
{

  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572b89*/
  v3 = *(unsigned short *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x572b8c*/
  IDA_LOWORD(v2) = IDA_HIWORD(aP0->field_0) + *(unsigned short *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x572ba2*/
  IDA_LOWORD(a2) = IDA_LOWORD(aP0->field_0) + v3; /*0x572ba6*/
  IDA_HIWORD(a2) = v2; /*0x572bae*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x572bbd*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x572bd7*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2; /*0x572bd9*/
    v5 = g_CellClassArray; /*0x572bdf*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x572beb*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x572bed*/
    if ( v6 >= 9u ) /*0x572bf6*/
    {
      if ( v6 <= 0xCu ) /*0x572bfb*/
      {
        *((unsigned char *)v5 + 286) = 14; /*0x572c0b*/
      }
      else if ( v6 == 13 ) /*0x572c00*/
      {
        *((unsigned char *)v5 + 286) = 15; /*0x572c02*/
      }
    }
  }
  v7 = v5[14] - unk_AA0E28 + 1; /*0x572c23*/
  if ( v7 == dword_ABC1D0 || v7 == unk_AA1540 ) /*0x572c2e*/
  {
    IDA_LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0); /*0x572c7c*/
  }
  else if ( v7 == unk_AA1028 ) /*0x572c38*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType( /*0x572c48*/
                   (IUnknown *)&a2,
                   (IUnknown *)(unk_AA0E28 + unk_AA1028),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == unk_AA1028 + 2 ) /*0x572c58*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType( /*0x572c6a*/
                   (IUnknown *)&a2,
                   (IUnknown *)(unk_AA1028 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x572c4d*/

}
} // namespace gamemd

// 0x572C90
namespace gamemd {
char CellClass::SetTileType14(IUnknown * aP0, int a2)
{

  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572c99*/
  v3 = *(unsigned short *)&stru_89E138.__pad_14B0[4 * v2 + 160]; /*0x572c9c*/
  IDA_LOWORD(v2) = IDA_HIWORD(aP0->field_0) + *(unsigned short *)&stru_89E138.__pad_14B0[4 * v2 + 162]; /*0x572cb2*/
  IDA_LOWORD(a2) = IDA_LOWORD(aP0->field_0) + v3; /*0x572cb6*/
  IDA_HIWORD(a2) = v2; /*0x572cbe*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x572ccd*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) == 0 ) /*0x572ce7*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2; /*0x572ce9*/
    v5 = g_CellClassArray; /*0x572cef*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x572cfb*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x572cfd*/
    if ( v6 >= 9u ) /*0x572d06*/
    {
      if ( v6 <= 0xCu ) /*0x572d0b*/
      {
        *((unsigned char *)v5 + 286) = 13; /*0x572d1b*/
      }
      else if ( v6 == 14 ) /*0x572d10*/
      {
        *((unsigned char *)v5 + 286) = 15; /*0x572d12*/
      }
    }
  }
  v7 = v5[14] - unk_AA0E28 + 1; /*0x572d33*/
  if ( v7 == unk_AA1548 || v7 == unk_AA0740 ) /*0x572d3e*/
  {
    IDA_LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0); /*0x572d8e*/
  }
  else if ( v7 == unk_AA1028 ) /*0x572d48*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType( /*0x572d5a*/
                   (IUnknown *)&a2,
                   (IUnknown *)(unk_AA1028 + unk_AA0E28 + 1),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  else if ( v7 == unk_AA1028 + 1 ) /*0x572d6a*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType( /*0x572d7c*/
                   (IUnknown *)&a2,
                   (IUnknown *)(unk_AA1028 + unk_AA0E28 + 2),
                   (IUnknown *)0xFFFFFFFF,
                   (IUnknown *)0xFFFFFFFF,
                   0);
  }
  return v7; /*0x572d5f*/

}
} // namespace gamemd

// 0x5865F0
namespace gamemd {
int CellClass::SpiralFindClosest(IUnknown * aP0, MouseClass * aP1, IUnknown * aP2)
{

  int16_t v3; // bx
  int v4; // edi
  int16_t v5; // bp
  unsigned int v6; // eax
  int16_t *v7; // eax
  int16_t *v8; // esi
  int result; // eax
  unsigned int v10[2]; // [esp+10h] [ebp-8h] BYREF
  IUnknown *aP0a; // [esp+1Ch] [ebp+4h]

  aP0a = (IUnknown *)aP0->field_24; /*0x5865fe*/
  v3 = IDA_HIWORD(aP0a); /*0x586602*/
  v4 = 1; /*0x586607*/
  v5 = (int16_t)aP0a; /*0x58660c*/
  do /*0x5866aa*/
  {
    v6 = v5 + (v3 << 9); /*0x586618*/
    if ( v6 < 0x40000 && (v7 = *(int16_t **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) != 0 ) /*0x58662e*/
    {
      v8 = v7; /*0x586630*/
    }
    else
    {
      v8 = (int16_t *)g_CellClassArray; /*0x586638*/
      g_Map_GlobalCellIndex = aP0a; /*0x58663d*/
    }
    result = *((char *)v8 + 283); /*0x586643*/
    if ( result >= v4 - 2 && result <= v4 ) /*0x586653*/
    {
      if ( (unsigned char)aP2 ) /*0x58665b*/
        CellClass::RevealFogRect((int)&stru_87C374.__pad_14B0[8132], v8 + 18); /*0x586666*/
      v10[0] = 0; /*0x586670*/
      v10[1] = 0; /*0x586674*/
      result = Object::FindClosestObjectCell(v8, (IUnknown *)v10, 0, 0); /*0x58667e*/
      if ( result ) /*0x586685*/
        result = (*(int (**)(int, MouseClass *))(*(unsigned int *)result + 408))(result, aP1); /*0x586690*/
    }
    ++v5; /*0x586696*/
    v4 += 2; /*0x586698*/
    ++v3; /*0x58669b*/
    IDA_LOWORD(aP0a) = v5; /*0x5866a0*/
    IDA_HIWORD(aP0a) = v3; /*0x5866a5*/
  }
  while ( v4 < 15 ); /*0x5866aa*/
  return result; /*0x5866b0*/

}
} // namespace gamemd

// 0x6D6AD0
namespace gamemd {
int CellClass::GetByte284(IUnknown * aP0)
{

  return *((uint8_t *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP0) + 284); /*0x6d6ae9*/

}
} // namespace gamemd
