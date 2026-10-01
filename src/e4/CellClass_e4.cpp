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
#include "e4/classes/CenterTeamCommand_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"

// 0x544C80
namespace gamemd {
int CellClass::EnsureFileLoaded()
{

  if ( !this->sensorsOfHouses[10] && *((unsigned char *)this + 756) ) /*0x544c8d*/
    MapClass::LoadFileData((MapClass *)this); /*0x544c97*/
  return this->sensorsOfHouses[10] != 0; /*0x544ca9*/

}
}
// 0x56EF50
namespace gamemd {
int CellClass::UpdateVariant3(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown * v2;
  void * v3;
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)(aP1);
  v3 = (IUnknown *)(*(unsigned int *)(((CellStruct *)(aP0)))->Add(&aP1, (unsigned short *)(4 * ((unsigned int)(aP1)& 7) + 9041544)));
  aP1 = (IUnknown *)((unsigned int)(v3));
  *(unsigned int *)v32 = (unsigned int)(v3); /*0x56ef7d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56ef8c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56efa2*/
  {
    v6 = v5; /*0x56efa4*/
  }
  else
  {
    dword_ABDC74 = (unsigned int)(v3);
    v6 = &unk_ABDC50; /*0x56efae*/
  }
  if ( (char)v6[320] < 0 ) /*0x56efba*/
  {
    v7 = v6[286]; /*0x56efbc*/
    if ( v7 <= 6u ) /*0x56efc4*/
    {
      v6[286] = 7; /*0x56f000*/
    }
    else if ( v7 == 8 ) /*0x56efc8*/
    {
      ((CellClass *)(v32))->UpdateVariant3(v2); /*0x56efd2*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56efdd*/
      v6[286] = 0; /*0x56efe5*/
      *((unsigned int *)v6 + 17) = -1; /*0x56eff2*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56eff9*/
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f018*/
  if ( v9 == dword_ABC1E8 || v9 == dword_AA0E38 ) /*0x56f027*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::UpdateTileType((IUnknown *)(v32), 1, 0)); /*0x56f2d7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x56f042*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0)); /*0x56f2be*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f04d*/
  {
    ((CellClass *)(v32))->UpdateVariant3(v2); /*0x56f05b*/
    if ( (v6[282] & 1) != 0 ) /*0x56f067*/
    {
      HIWORD(aP1) = v32[1]; /*0x56f078*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f07d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x56f08b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x56f0a1*/
      {
        v12 = v11; /*0x56f0a3*/
      }
      else
      {
        v12 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f0b5*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f0c6*/
      HIWORD(aP1) = v32[1] - 1; /*0x56f0cb*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x56f0d9*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x56f0ef*/
      {
        v15 = v14; /*0x56f0f1*/
      }
      else
      {
        v15 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f103*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f114*/
      HIWORD(aP1) = v32[1] + 1; /*0x56f119*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x56f127*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x56f13d*/
      {
        v18 = v17; /*0x56f13f*/
      }
      else
      {
        v18 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f151*/
      HIWORD(aP1) = v32[1]; /*0x56f15e*/
      v19 = (int16_t)(v32[0] - 1); /*0x56f167*/
      v20 = v32[1] << 9; /*0x56f16a*/
      v21 = v19 + v20 < 0; /*0x56f16d*/
      v22 = v19 + v20; /*0x56f16d*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f16f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x56f188*/
      {
        v23 = (char *)((unsigned int)((char *)&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
    }
    else
    {
      aP1 = (IUnknown *)(*(unsigned int *)v32);
      v24 = v32[0] + (v32[1] << 9); /*0x56f1e9*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x56f1ff*/
      {
        v26 = v25; /*0x56f201*/
      }
      else
      {
        v26 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f214*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x56f227*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x56f235*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x56f24b*/
      {
        v29 = v28; /*0x56f24d*/
      }
      else
      {
        v29 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f25f*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x56f277*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x56f28a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f291*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x56f2a2*/
    }
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3, -1, v23[283] - 4, 0)); /*0x56f1c0*/
  }
  return v9; /*0x56f1c5*/

}
}
// 0x56F2F0
namespace gamemd {
int CellClass::UpdateVariant4(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown * v2;
  void * v3;
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)(aP1);
  v3 = (IUnknown *)(*(unsigned int *)(((CellStruct *)(aP0)))->Add(&aP1, (unsigned short *)(4 * ((unsigned int)(aP1)& 7) + 9041544)));
  aP1 = (IUnknown *)((unsigned int)(v3));
  *(unsigned int *)v32 = (unsigned int)(v3); /*0x56f31d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56f32c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56f342*/
  {
    v6 = v5; /*0x56f344*/
  }
  else
  {
    dword_ABDC74 = (unsigned int)(v3);
    v6 = &unk_ABDC50; /*0x56f34e*/
  }
  if ( (char)v6[320] < 0 ) /*0x56f35a*/
  {
    v7 = v6[286]; /*0x56f35c*/
    if ( v7 <= 6u ) /*0x56f364*/
    {
      v6[286] = 8; /*0x56f3a0*/
    }
    else if ( v7 == 7 ) /*0x56f368*/
    {
      ((CellClass *)(v32))->UpdateVariant4(v2); /*0x56f372*/
      SetCellClassOccupancyFlags((int)v6, v8, 0, 0); /*0x56f37d*/
      v6[286] = 0; /*0x56f385*/
      *((unsigned int *)v6 + 17) = -1; /*0x56f392*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56f399*/
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f3b8*/
  if ( v9 == dword_ABC2B4 || v9 == dword_AA1130 ) /*0x56f3c7*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::UpdateTileType((IUnknown *)(v32), 1, 0)); /*0x56f677*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x56f3e2*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2, -1, -1, 0)); /*0x56f65e*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x56f3ed*/
  {
    ((CellClass *)(v32))->UpdateVariant4(v2); /*0x56f3fb*/
    if ( (v6[282] & 1) != 0 ) /*0x56f407*/
    {
      HIWORD(aP1) = v32[1]; /*0x56f418*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f41d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x56f42b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x56f441*/
      {
        v12 = v11; /*0x56f443*/
      }
      else
      {
        v12 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v12); /*0x56f455*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f466*/
      HIWORD(aP1) = v32[1] - 1; /*0x56f46b*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x56f479*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x56f48f*/
      {
        v15 = v14; /*0x56f491*/
      }
      else
      {
        v15 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v15); /*0x56f4a3*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f4b4*/
      HIWORD(aP1) = v32[1] + 1; /*0x56f4b9*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x56f4c7*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x56f4dd*/
      {
        v18 = v17; /*0x56f4df*/
      }
      else
      {
        v18 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v18); /*0x56f4f1*/
      HIWORD(aP1) = v32[1]; /*0x56f4fe*/
      v19 = (int16_t)(v32[0] - 1); /*0x56f507*/
      v20 = v32[1] << 9; /*0x56f50a*/
      v21 = v19 + v20 < 0; /*0x56f50d*/
      v22 = v19 + v20; /*0x56f50d*/
      LOWORD(aP1) = v32[0] - 1; /*0x56f50f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x56f528*/
      {
        v23 = (char *)((unsigned int)((char *)&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
    }
    else
    {
      aP1 = (IUnknown *)(*(unsigned int *)v32);
      v24 = v32[0] + (v32[1] << 9); /*0x56f589*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x56f59f*/
      {
        v26 = v25; /*0x56f5a1*/
      }
      else
      {
        v26 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v26); /*0x56f5b4*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x56f5c7*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x56f5d5*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x56f5eb*/
      {
        v29 = v28; /*0x56f5ed*/
      }
      else
      {
        v29 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v29); /*0x56f5ff*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x56f617*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x56f62a*/
      CellClass::UpdateAnimations((int)v30); /*0x56f631*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x56f642*/
    }
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_TerrainBridgeIndex + 3, -1, v23[283] - 4, 0)); /*0x56f560*/
  }
  return v9; /*0x56f565*/

}
}
// 0x56F8B0
namespace gamemd {
int CellClass::UpdateTerrain(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown * v2;
  void * v3;
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)(aP1);
  v3 = (IUnknown *)(*(unsigned int *)(((CellStruct *)(aP0)))->Add(&aP1, (unsigned short *)(4 * ((unsigned int)(aP1)& 7) + 9041544)));
  aP1 = (IUnknown *)((unsigned int)(v3));
  *(unsigned int *)v31 = (unsigned int)(v3); /*0x56f8dd*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56f8ec*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56f902*/
  {
    v6 = v5; /*0x56f904*/
  }
  else
  {
    dword_ABDC74 = (unsigned int)(v3);
    v6 = &unk_ABDC50; /*0x56f90e*/
  }
  if ( (char)v6[320] < 0 ) /*0x56f91a*/
  {
    v7 = v6[286]; /*0x56f91c*/
    if ( v7 >= 9u ) /*0x56f924*/
    {
      if ( v7 <= 0xFu ) /*0x56f928*/
      {
        v6[286] = 17; /*0x56f964*/
      }
      else if ( v7 == 16 ) /*0x56f92c*/
      {
        ((CellClass *)(v31))->UpdateTerrain(v2); /*0x56f936*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56f941*/
        v6[286] = 0; /*0x56f949*/
        *((unsigned int *)v6 + 17) = -1; /*0x56f956*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56f95d*/
      }
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56f97c*/
  if ( v9 == dword_ABC1D0 || v9 == dword_AA1540 ) /*0x56f98b*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::UpdateTileType((IUnknown *)(v31), 1, 0)); /*0x56fc66*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 2 ) /*0x56f9a6*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0)); /*0x56fc4d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x56f9b1*/
  {
    ((CellClass *)(v31))->UpdateTerrain(v2); /*0x56f9bf*/
    v10 = v31[0] - 1; /*0x56f9d0*/
    if ( v6[282] <= 4u ) /*0x56f9d3*/
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56fb39*/
      HIWORD(aP1) = v31[1]; /*0x56fb3e*/
      v22 = v10 + (v31[1] << 9); /*0x56fb4c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x56fb62*/
      {
        v24 = v23; /*0x56fb64*/
      }
      else
      {
        v24 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v24); /*0x56fb76*/
      aP1 = (IUnknown *)(*(unsigned int *)v31); /*0x56fb88*/
      v25 = v31[0] + (v31[1] << 9); /*0x56fb96*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x56fbac*/
      {
        v27 = v26; /*0x56fbae*/
      }
      else
      {
        v27 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v27); /*0x56fbc0*/
      HIWORD(aP1) = v31[1]; /*0x56fbcf*/
      LOWORD(aP1) = v31[0] + 1; /*0x56fbd4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x56fbeb*/
      CellClass::UpdateAnimations((int)v28); /*0x56fbf2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x56fc03*/
      LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v29[283] - 4, 0)); /*0x56fc2d*/
    }
    else
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56f9dd*/
      HIWORD(aP1) = v31[1] - 1; /*0x56f9e8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x56f9f3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56fa09*/
      {
        v13 = v12; /*0x56fa0b*/
      }
      else
      {
        v13 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fa1d*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56fa32*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56fa40*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x56fa56*/
      {
        v16 = v15; /*0x56fa58*/
      }
      else
      {
        v16 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fa6a*/
      LOWORD(aP1) = v31[0] + 1; /*0x56fa7b*/
      HIWORD(aP1) = v31[1] - 1; /*0x56fa80*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x56fa8e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x56faa4*/
      {
        v19 = v18; /*0x56faa6*/
      }
      else
      {
        v19 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1);
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fab8*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56facd*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56fadb*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x56faf1*/
      {
        dword_ABDC74 = (unsigned int)(aP1);
        v21 = (char *)&unk_ABDC50; /*0x56fafc*/
      }
      LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v21[283] - 4, 0)); /*0x56fb27*/
    }
  }
  return v9; /*0x56fb2c*/

}
}
// 0x56FC80
namespace gamemd {
int CellClass::UpdateTileVariant2(IUnknown * aP0, IUnknown * aP1)
{

  IUnknown * v2;
  void * v3;
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (IUnknown *)(aP1);
  v3 = (IUnknown *)(*(unsigned int *)(((CellStruct *)(aP0)))->Add(&aP1, (unsigned short *)(4 * ((unsigned int)(aP1)& 7) + 9041544)));
  aP1 = (IUnknown *)((unsigned int)(v3));
  *(unsigned int *)v31 = (unsigned int)(v3); /*0x56fcad*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x56fcbc*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x56fcd2*/
  {
    v6 = v5; /*0x56fcd4*/
  }
  else
  {
    dword_ABDC74 = (unsigned int)(v3);
    v6 = &unk_ABDC50; /*0x56fcde*/
  }
  if ( (char)v6[320] < 0 ) /*0x56fcea*/
  {
    v7 = v6[286]; /*0x56fcec*/
    if ( v7 >= 9u ) /*0x56fcf4*/
    {
      if ( v7 <= 0xFu ) /*0x56fcf8*/
      {
        v6[286] = 16; /*0x56fd34*/
      }
      else if ( v7 == 17 ) /*0x56fcfc*/
      {
        ((CellClass *)(v31))->UpdateTileVariant2(v2); /*0x56fd06*/
        SetCellClassOccupancyFlags((int)v6, v8, 6u, 0); /*0x56fd11*/
        v6[286] = 0; /*0x56fd19*/
        *((unsigned int *)v6 + 17) = -1; /*0x56fd26*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x56fd2d*/
      }
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_TerrainBridgeIndex + 1; /*0x56fd4c*/
  if ( v9 == dword_AA1548 || v9 == dword_AA0740 ) /*0x56fd5b*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::UpdateTileType((IUnknown *)(v31), 1, 0)); /*0x570036*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 1 ) /*0x56fd76*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0)); /*0x57001d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x56fd81*/
  {
    ((CellClass *)(v31))->UpdateTileVariant2(v2); /*0x56fd8f*/
    v10 = v31[0] - 1; /*0x56fda0*/
    if ( v6[282] <= 4u ) /*0x56fda3*/
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56ff09*/
      HIWORD(aP1) = v31[1]; /*0x56ff0e*/
      v22 = v10 + (v31[1] << 9); /*0x56ff1c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x56ff32*/
      {
        v24 = v23; /*0x56ff34*/
      }
      else
      {
        v24 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1); /*0x56ff41*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x56ff46*/
      aP1 = (IUnknown *)(*(unsigned int *)v31); /*0x56ff58*/
      v25 = v31[0] + (v31[1] << 9); /*0x56ff66*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x56ff7c*/
      {
        v27 = v26; /*0x56ff7e*/
      }
      else
      {
        v27 = (void *)((unsigned int)(&unk_ABDC50));
        dword_ABDC74 = (unsigned int)(aP1); /*0x56ff8b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x56ff90*/
      HIWORD(aP1) = v31[1]; /*0x56ff9f*/
      LOWORD(aP1) = v31[0] + 1; /*0x56ffa4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x56ffbb*/
      CellClass::UpdateAnimations((int)v28); /*0x56ffc2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x56ffd3*/
      LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v29[283] - 4, 0)); /*0x56fffd*/
    }
    else
    {
      LOWORD(aP1) = v31[0] - 1; /*0x56fdad*/
      HIWORD(aP1) = v31[1] - 1; /*0x56fdb8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x56fdc3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x56fdd9*/
      {
        v13 = v12; /*0x56fddb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x56fde3*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x56fde8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x56fded*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56fe02*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56fe10*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x56fe26*/
      {
        v16 = v15; /*0x56fe28*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x56fe30*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x56fe35*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x56fe3a*/
      LOWORD(aP1) = v31[0] + 1; /*0x56fe4b*/
      HIWORD(aP1) = v31[1] - 1; /*0x56fe50*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x56fe5e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x56fe74*/
      {
        v19 = v18; /*0x56fe76*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x56fe7e*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x56fe83*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x56fe88*/
      aP1 = (IUnknown *)(*(unsigned int *)v31 - 0x10000); /*0x56fe9d*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x56feab*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x56fec1*/
      {
        dword_ABDC74 = (unsigned int)(aP1); /*0x56fec7*/
        v21 = (char *)&unk_ABDC50; /*0x56fecc*/
      }
      LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_TerrainBridgeIndex + 3, -1, v21[283] - 4, 0)); /*0x56fef7*/
    }
  }
  return v9; /*0x56fefc*/

}
}
// 0x572440
namespace gamemd {
int CellClass::UpdateVariant7(IUnknown * aP0, IUnknown * aP1)
{

  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = (int)(aP1); /*0x572446*/
  v3 = *CellStruct::Add(aP0, &aP1, (unsigned short *)(4 * (aP1 & 7) + 9041544)); /*0x572467*/
  aP1 = (IUnknown *)(v3); /*0x572469*/
  *(unsigned int *)v32 = v3; /*0x57246d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x57247c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572492*/
  {
    v6 = v5; /*0x572494*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572498*/
    v6 = &unk_ABDC50; /*0x57249e*/
  }
  if ( (char)v6[320] < 0 ) /*0x5724aa*/
  {
    v7 = v6[286]; /*0x5724ac*/
    if ( v7 <= 6u ) /*0x5724b4*/
    {
      v6[286] = 7; /*0x5724f0*/
    }
    else if ( v7 == 8 ) /*0x5724b8*/
    {
      CellClass::UpdateVariant7((IUnknown *)(v32), v2); /*0x5724c2*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x5724cd*/
      v6[286] = 0; /*0x5724d5*/
      *((unsigned int *)v6 + 17) = -1; /*0x5724e2*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x5724e9*/
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x572508*/
  if ( v9 == dword_ABC1E8 || v9 == dword_AA0E38 ) /*0x572517*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::UpdateTileType((IUnknown *)(v32), 1, 0)); /*0x5727c7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x572532*/
  {
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0)); /*0x5727ae*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x57253d*/
  {
    CellClass::UpdateVariant7((IUnknown *)(v32), v2); /*0x57254b*/
    if ( (v6[282] & 1) != 0 ) /*0x572557*/
    {
      HIWORD(aP1) = v32[1]; /*0x572568*/
      LOWORD(aP1) = v32[0] - 1; /*0x57256d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x57257b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x572591*/
      {
        v12 = v11; /*0x572593*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x57259b*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x5725a0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x5725a5*/
      LOWORD(aP1) = v32[0] - 1; /*0x5725b6*/
      HIWORD(aP1) = v32[1] - 1; /*0x5725bb*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x5725c9*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x5725df*/
      {
        v15 = v14; /*0x5725e1*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x5725e9*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x5725ee*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x5725f3*/
      LOWORD(aP1) = v32[0] - 1; /*0x572604*/
      HIWORD(aP1) = v32[1] + 1; /*0x572609*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x572617*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x57262d*/
      {
        v18 = v17; /*0x57262f*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x572637*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x57263c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x572641*/
      HIWORD(aP1) = v32[1]; /*0x57264e*/
      v19 = (int16_t)(v32[0] - 1); /*0x572657*/
      v20 = v32[1] << 9; /*0x57265a*/
      v21 = v19 + v20 < 0; /*0x57265d*/
      v22 = v19 + v20; /*0x57265d*/
      LOWORD(aP1) = v32[0] - 1; /*0x57265f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x572678*/
      {
        v23 = (char *)&unk_ABDC50; /*0x57267e*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x572683*/
      }
    }
    else
    {
      aP1 = (IUnknown *)(*(unsigned int *)v32); /*0x5726cb*/
      v24 = v32[0] + (v32[1] << 9); /*0x5726d9*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x5726ef*/
      {
        v26 = v25; /*0x5726f1*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x5726f9*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x5726fe*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572704*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 - 0x10000); /*0x572717*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x572725*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x57273b*/
      {
        v29 = v28; /*0x57273d*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x572745*/
        dword_ABDC74 = (unsigned int)(aP1); /*0x57274a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x57274f*/
      aP1 = (IUnknown *)(*(unsigned int *)v32 + 0x10000); /*0x572767*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x57277a*/
      CellClass::UpdateAnimations((int)v30); /*0x572781*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x572792*/
    }
    LOBYTE(v9) = (unsigned char)(Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 3, -1, v23[283] - 4, 0)); /*0x5726b0*/
  }
  return v9; /*0x5726b5*/

}
}
// 0x5727E0
namespace gamemd {
int CellClass::UpdateVariant8(IUnknown * aP0, IUnknown * aP1)
{

  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  int16_t v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x5727e6*/
  v3 = *CellStruct::Add(aP0, &aP1, (unsigned short *)(4 * (aP1 & 7) + 9041544)); /*0x572807*/
  aP1 = v3; /*0x572809*/
  *(unsigned int *)v32 = v3; /*0x57280d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x57281c*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572832*/
  {
    v6 = v5; /*0x572834*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572838*/
    v6 = &unk_ABDC50; /*0x57283e*/
  }
  if ( (char)v6[320] < 0 ) /*0x57284a*/
  {
    v7 = v6[286]; /*0x57284c*/
    if ( v7 <= 6u ) /*0x572854*/
    {
      v6[286] = 8; /*0x572890*/
    }
    else if ( v7 == 7 ) /*0x572858*/
    {
      CellClass::UpdateVariant8((IUnknown *)(v32), v2); /*0x572862*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x57286d*/
      v6[286] = 0; /*0x572875*/
      *((unsigned int *)v6 + 17) = -1; /*0x572882*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x572889*/
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x5728a8*/
  if ( v9 == dword_ABC2B4 || v9 == dword_AA1130 ) /*0x5728b7*/
  {
    LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)(v32), 1, 0); /*0x572b67*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x5728d2*/
  {
    LOBYTE(v9) = Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572b4e*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x5728dd*/
  {
    CellClass::UpdateVariant8((IUnknown *)(v32), v2); /*0x5728eb*/
    if ( (v6[282] & 1) != 0 ) /*0x5728f7*/
    {
      HIWORD(aP1) = v32[1]; /*0x572908*/
      LOWORD(aP1) = v32[0] - 1; /*0x57290d*/
      v10 = (int16_t)(v32[0] - 1) + (v32[1] << 9); /*0x57291b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x572931*/
      {
        v12 = v11; /*0x572933*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x57293b*/
        dword_ABDC74 = aP1; /*0x572940*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x572945*/
      LOWORD(aP1) = v32[0] - 1; /*0x572956*/
      HIWORD(aP1) = v32[1] - 1; /*0x57295b*/
      v13 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] - 1) << 9); /*0x572969*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x57297f*/
      {
        v15 = v14; /*0x572981*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x572989*/
        dword_ABDC74 = aP1; /*0x57298e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x572993*/
      LOWORD(aP1) = v32[0] - 1; /*0x5729a4*/
      HIWORD(aP1) = v32[1] + 1; /*0x5729a9*/
      v16 = (int16_t)(v32[0] - 1) + ((int16_t)(v32[1] + 1) << 9); /*0x5729b7*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x5729cd*/
      {
        v18 = v17; /*0x5729cf*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x5729d7*/
        dword_ABDC74 = aP1; /*0x5729dc*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x5729e1*/
      HIWORD(aP1) = v32[1]; /*0x5729ee*/
      v19 = (int16_t)(v32[0] - 1); /*0x5729f7*/
      v20 = v32[1] << 9; /*0x5729fa*/
      v21 = v19 + v20 < 0; /*0x5729fd*/
      v22 = v19 + v20; /*0x5729fd*/
      LOWORD(aP1) = v32[0] - 1; /*0x5729ff*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x572a18*/
      {
        v23 = (char *)&unk_ABDC50; /*0x572a1e*/
        dword_ABDC74 = aP1; /*0x572a23*/
      }
    }
    else
    {
      aP1 = *(unsigned int *)v32; /*0x572a6b*/
      v24 = v32[0] + (v32[1] << 9); /*0x572a79*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x572a8f*/
      {
        v26 = v25; /*0x572a91*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x572a99*/
        dword_ABDC74 = aP1; /*0x572a9e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572aa4*/
      aP1 = *(unsigned int *)v32 - 0x10000; /*0x572ab7*/
      v27 = v32[0] + ((int16_t)(v32[1] - 1) << 9); /*0x572ac5*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x572adb*/
      {
        v29 = v28; /*0x572add*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x572ae5*/
        dword_ABDC74 = aP1; /*0x572aea*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x572aef*/
      aP1 = *(unsigned int *)v32 + 0x10000; /*0x572b07*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x572b1a*/
      CellClass::UpdateAnimations((int)v30); /*0x572b21*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x572b32*/
    }
    LOBYTE(v9) = Cell::SetTileType((IUnknown *)(v32), g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 3, -1, v23[283] - 4, 0); /*0x572a50*/
  }
  return v9; /*0x572a55*/

}
}
// 0x572DA0
namespace gamemd {
HouseClass * * CellClass::UpdateVariant5(IUnknown * aP0, IUnknown * aP1)
{

  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x572da6*/
  v3 = *CellStruct::Add(aP0, &aP1, (unsigned short *)(4 * (aP1 & 7) + 9041544)); /*0x572dc7*/
  aP1 = v3; /*0x572dc9*/
  *(unsigned int *)v31 = v3; /*0x572dcd*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x572ddc*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572df2*/
  {
    v6 = v5; /*0x572df4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572df8*/
    v6 = &unk_ABDC50; /*0x572dfe*/
  }
  if ( (char)v6[320] < 0 ) /*0x572e0a*/
  {
    v7 = v6[286]; /*0x572e0c*/
    if ( v7 >= 9u ) /*0x572e14*/
    {
      if ( v7 <= 0xFu ) /*0x572e18*/
      {
        v6[286] = 17; /*0x572e54*/
      }
      else if ( v7 == 16 ) /*0x572e1c*/
      {
        CellClass::UpdateVariant5((IUnknown *)(v31), v2); /*0x572e26*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x572e31*/
        v6[286] = 0; /*0x572e39*/
        *((unsigned int *)v6 + 17) = -1; /*0x572e46*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x572e4d*/
      }
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x572e6c*/
  if ( v9 == dword_ABC1D0 || v9 == dword_AA1540 ) /*0x572e7b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType((IUnknown *)(v31), 1, 0); /*0x573156*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 2 ) /*0x572e96*/
  {
    LOBYTE(v9) = Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x57313d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x572ea1*/
  {
    CellClass::UpdateVariant5((IUnknown *)(v31), v2); /*0x572eaf*/
    v10 = v31[0] - 1; /*0x572ec0*/
    if ( v6[282] <= 4u ) /*0x572ec3*/
    {
      LOWORD(aP1) = v31[0] - 1; /*0x573029*/
      HIWORD(aP1) = v31[1]; /*0x57302e*/
      v22 = v10 + (v31[1] << 9); /*0x57303c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x573052*/
      {
        v24 = v23; /*0x573054*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x57305c*/
        dword_ABDC74 = aP1; /*0x573061*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573066*/
      aP1 = *(unsigned int *)v31; /*0x573078*/
      v25 = v31[0] + (v31[1] << 9); /*0x573086*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x57309c*/
      {
        v27 = v26; /*0x57309e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x5730a6*/
        dword_ABDC74 = aP1; /*0x5730ab*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x5730b0*/
      HIWORD(aP1) = v31[1]; /*0x5730bf*/
      LOWORD(aP1) = v31[0] + 1; /*0x5730c4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x5730db*/
      CellClass::UpdateAnimations((int)v28); /*0x5730e2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x5730f3*/
      LOBYTE(v9) = Cell::SetTileType((IUnknown *)(v31), g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v29[283] - 4, 0); /*0x57311d*/
    }
    else
    {
      LOWORD(aP1) = v31[0] - 1; /*0x572ecd*/
      HIWORD(aP1) = v31[1] - 1; /*0x572ed8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x572ee3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x572ef9*/
      {
        v13 = v12; /*0x572efb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x572f03*/
        dword_ABDC74 = aP1; /*0x572f08*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x572f0d*/
      aP1 = *(unsigned int *)v31 - 0x10000; /*0x572f22*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x572f30*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x572f46*/
      {
        v16 = v15; /*0x572f48*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x572f50*/
        dword_ABDC74 = aP1; /*0x572f55*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x572f5a*/
      LOWORD(aP1) = v31[0] + 1; /*0x572f6b*/
      HIWORD(aP1) = v31[1] - 1; /*0x572f70*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x572f7e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x572f94*/
      {
        v19 = v18; /*0x572f96*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x572f9e*/
        dword_ABDC74 = aP1; /*0x572fa3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x572fa8*/
      aP1 = *(unsigned int *)v31 - 0x10000; /*0x572fbd*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x572fcb*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x572fe1*/
      {
        dword_ABDC74 = aP1; /*0x572fe7*/
        v21 = (char *)&unk_ABDC50; /*0x572fec*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v21[283] - 4, 0); /*0x573017*/
    }
  }
  return v9; /*0x57301c*/

}
}
// 0x573170
namespace gamemd {
HouseClass * * CellClass::UpdateVariant6(IUnknown * aP0, IUnknown * aP1)
{

  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  unsigned char *v5; // eax
  unsigned char *v6; // esi
  uint8_t v7; // al
  int v8; // edx
  int v9; // eax
  int16_t v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  int16_t v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = aP1; /*0x573176*/
  v3 = *CellStruct::Add(aP0, &aP1, (unsigned short *)(4 * (aP1 & 7) + 9041544)); /*0x573197*/
  aP1 = v3; /*0x573199*/
  *(unsigned int *)v31 = v3; /*0x57319d*/
  v4 = (int16_t)v3 + (SHIWORD(v3) << 9); /*0x5731ac*/
  if ( v4 < 0x40000 && (v5 = *(unsigned char **)(dword_87F924 + 4 * v4)) != 0 ) /*0x5731c2*/
  {
    v6 = v5; /*0x5731c4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x5731c8*/
    v6 = &unk_ABDC50; /*0x5731ce*/
  }
  if ( (char)v6[320] < 0 ) /*0x5731da*/
  {
    v7 = v6[286]; /*0x5731dc*/
    if ( v7 >= 9u ) /*0x5731e4*/
    {
      if ( v7 <= 0xFu ) /*0x5731e8*/
      {
        v6[286] = 16; /*0x573224*/
      }
      else if ( v7 == 17 ) /*0x5731ec*/
      {
        CellClass::UpdateVariant6(v31, v2); /*0x5731f6*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x573201*/
        v6[286] = 0; /*0x573209*/
        *((unsigned int *)v6 + 17) = -1; /*0x573216*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x57321d*/
      }
    }
  }
  v9 = *((unsigned int *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x57323c*/
  if ( v9 == dword_AA1548 || v9 == dword_AA0740 ) /*0x57324b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x573526*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 1 ) /*0x573266*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x57350d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x573271*/
  {
    CellClass::UpdateVariant6(v31, v2); /*0x57327f*/
    v10 = v31[0] - 1; /*0x573290*/
    if ( v6[282] <= 4u ) /*0x573293*/
    {
      LOWORD(aP1) = v31[0] - 1; /*0x5733f9*/
      HIWORD(aP1) = v31[1]; /*0x5733fe*/
      v22 = v10 + (v31[1] << 9); /*0x57340c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x573422*/
      {
        v24 = v23; /*0x573424*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x57342c*/
        dword_ABDC74 = aP1; /*0x573431*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573436*/
      aP1 = *(unsigned int *)v31; /*0x573448*/
      v25 = v31[0] + (v31[1] << 9); /*0x573456*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x57346c*/
      {
        v27 = v26; /*0x57346e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x573476*/
        dword_ABDC74 = aP1; /*0x57347b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x573480*/
      HIWORD(aP1) = v31[1]; /*0x57348f*/
      LOWORD(aP1) = v31[0] + 1; /*0x573494*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&aP1); /*0x5734ab*/
      CellClass::UpdateAnimations((int)v28); /*0x5734b2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x5734c3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v29[283] - 4, 0); /*0x5734ed*/
    }
    else
    {
      LOWORD(aP1) = v31[0] - 1; /*0x57329d*/
      HIWORD(aP1) = v31[1] - 1; /*0x5732a8*/
      v11 = v10 + ((int16_t)(v31[1] - 1) << 9); /*0x5732b3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x5732c9*/
      {
        v13 = v12; /*0x5732cb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x5732d3*/
        dword_ABDC74 = aP1; /*0x5732d8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x5732dd*/
      aP1 = *(unsigned int *)v31 - 0x10000; /*0x5732f2*/
      v14 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x573300*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x573316*/
      {
        v16 = v15; /*0x573318*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x573320*/
        dword_ABDC74 = aP1; /*0x573325*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x57332a*/
      LOWORD(aP1) = v31[0] + 1; /*0x57333b*/
      HIWORD(aP1) = v31[1] - 1; /*0x573340*/
      v17 = (int16_t)(v31[0] + 1) + ((int16_t)(v31[1] - 1) << 9); /*0x57334e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x573364*/
      {
        v19 = v18; /*0x573366*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x57336e*/
        dword_ABDC74 = aP1; /*0x573373*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x573378*/
      aP1 = *(unsigned int *)v31 - 0x10000; /*0x57338d*/
      v20 = v31[0] + ((int16_t)(v31[1] - 1) << 9); /*0x57339b*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x5733b1*/
      {
        dword_ABDC74 = aP1; /*0x5733b7*/
        v21 = (char *)&unk_ABDC50; /*0x5733bc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v21[283] - 4, 0); /*0x5733e7*/
    }
  }
  return v9; /*0x5733ec*/

}
}
// 0x57BAA0
namespace gamemd {
int CellClass::CheckTilePassable2(IUnknown * aP0)
{

  CellClass *v1; // ecx
  int16_t *v2; // esi
  CellClass *v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  int16_t v7; // dx
  int v8; // eax
  int16_t v9; // ax
  int16_t v10; // cx
  int v11; // eax
  int16_t v12; // dx
  int16_t v13; // dx
  int v14; // eax
  int16_t v15; // ax
  int16_t v16; // cx
  int v17; // eax
  int16_t v18[2]; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int16_t *)aP0; /*0x57baa4*/
  v3 = v1; /*0x57baa9*/
  v4 = *(int16_t *)aP0 + (*(int16_t *)(aP0 + 2) << 9); /*0x57bab5*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57bacb*/
  {
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP0; /*0x57bacf*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57bad4*/
  }
  result = v5[17]; /*0x57bad9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x57baf3*/
  {
    v7 = *(unsigned short *)(aP0 + 2); /*0x57bafc*/
    LOWORD(aP0) = *(unsigned short *)aP0; /*0x57bb00*/
    HIWORD(aP0) = v7 - 1; /*0x57bb0b*/
    v8 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57bb23*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57bb2e*/
    {
      v10 = v2[1] - 2; /*0x57bb66*/
      LOWORD(aP0) = *v2; /*0x57bb6a*/
      HIWORD(aP0) = v10; /*0x57bb6f*/
      v11 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57bb8b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x57bb96*/
      {
        v12 = v2[1]; /*0x57bbab*/
        LOWORD(aP0) = *v2; /*0x57bbaf*/
        HIWORD(aP0) = v12 - 1; /*0x57bbba*/
        LOBYTE(result) = CellClass::ApplyTileModification(v3, (int16_t *)&aP0); /*0x57bbca*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification(v3, v2); /*0x57bb9b*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57bb37*/
      LOWORD(aP0) = *v2; /*0x57bb39*/
      HIWORD(aP0) = v9; /*0x57bb3e*/
      LOBYTE(result) = CellClass::ApplyTileModification(v3, (int16_t *)&aP0); /*0x57bb52*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x57bbee*/
  {
    v13 = *(unsigned short *)aP0 - 1; /*0x57bbfb*/
    HIWORD(aP0) = *(unsigned short *)(aP0 + 2); /*0x57bbfd*/
    LOWORD(aP0) = v13; /*0x57bc02*/
    v14 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57bc1e*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x57bc29*/
    {
      v16 = *v2 - 2; /*0x57bc61*/
      HIWORD(aP0) = v2[1]; /*0x57bc65*/
      LOWORD(aP0) = v16; /*0x57bc6a*/
      v17 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57bc86*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x57bc91*/
      {
        aP0 = 1; /*0x57bcaf*/
        *(unsigned int *)v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &aP0); /*0x57bcc8*/
        LOBYTE(result) = CellClass::ApplyTileModification2(v3, v18); /*0x57bccf*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification2(v3, v2); /*0x57bc96*/
      }
    }
    else
    {
      v15 = *v2 + 1; /*0x57bc32*/
      HIWORD(aP0) = v2[1]; /*0x57bc34*/
      LOWORD(aP0) = v15; /*0x57bc39*/
      LOBYTE(result) = CellClass::ApplyTileModification2(v3, (int16_t *)&aP0); /*0x57bc4d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x57bcdd*/
  }
  return result; /*0x57bb57*/

}
}
// 0x57CCF0
namespace gamemd {
int CellClass::CheckTilePassable(IUnknown * aP0)
{

  CellClass *v1; // ecx
  int16_t *v2; // esi
  CellClass *v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  int16_t v7; // dx
  int v8; // eax
  int16_t v9; // ax
  int16_t v10; // cx
  int v11; // eax
  int16_t v12; // dx
  int16_t v13; // dx
  int v14; // eax
  int16_t v15; // ax
  int16_t v16; // cx
  int v17; // eax
  int16_t v18[2]; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int16_t *)aP0; /*0x57ccf4*/
  v3 = v1; /*0x57ccf9*/
  v4 = *(int16_t *)aP0 + (*(int16_t *)(aP0 + 2) << 9); /*0x57cd05*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cd1b*/
  {
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP0; /*0x57cd1f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cd24*/
  }
  result = v5[17]; /*0x57cd29*/
  if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 ) /*0x57cd4d*/
  {
    v7 = *(unsigned short *)(aP0 + 2); /*0x57cd56*/
    LOWORD(aP0) = *(unsigned short *)aP0; /*0x57cd5a*/
    HIWORD(aP0) = v7 - 1; /*0x57cd65*/
    v8 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57cd7d*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x57cd8c*/
    {
      v10 = v2[1] - 2; /*0x57cdc4*/
      LOWORD(aP0) = *v2; /*0x57cdc8*/
      HIWORD(aP0) = v10; /*0x57cdcd*/
      v11 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57cde9*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x57cdf8*/
      {
        v12 = v2[1]; /*0x57ce0d*/
        LOWORD(aP0) = *v2; /*0x57ce11*/
        HIWORD(aP0) = v12 - 1; /*0x57ce1c*/
        LOBYTE(result) = CellClass::ApplyTileModification3(v3, (int16_t *)&aP0); /*0x57ce2c*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification3(v3, v2); /*0x57cdfd*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57cd95*/
      LOWORD(aP0) = *v2; /*0x57cd97*/
      HIWORD(aP0) = v9; /*0x57cd9c*/
      LOBYTE(result) = CellClass::ApplyTileModification3(v3, (int16_t *)&aP0); /*0x57cdb0*/
    }
  }
  else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 ) /*0x57ce5a*/
  {
    v13 = *(unsigned short *)aP0 - 1; /*0x57ce67*/
    HIWORD(aP0) = *(unsigned short *)(aP0 + 2); /*0x57ce69*/
    LOWORD(aP0) = v13; /*0x57ce6e*/
    v14 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57ce8a*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x57ce99*/
    {
      v16 = *v2 - 2; /*0x57ced1*/
      HIWORD(aP0) = v2[1]; /*0x57ced5*/
      LOWORD(aP0) = v16; /*0x57ceda*/
      v17 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP0) + 17); /*0x57cef6*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x57cf05*/
      {
        aP0 = 1; /*0x57cf23*/
        *(unsigned int *)v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &aP0); /*0x57cf3c*/
        LOBYTE(result) = CellClass::ApplyTileModification4(v3, v18); /*0x57cf43*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification4(v3, v2); /*0x57cf0a*/
      }
    }
    else
    {
      v15 = *v2 + 1; /*0x57cea2*/
      HIWORD(aP0) = v2[1]; /*0x57cea4*/
      LOWORD(aP0) = v15; /*0x57cea9*/
      LOBYTE(result) = CellClass::ApplyTileModification4(v3, (int16_t *)&aP0); /*0x57cebd*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x57cf51*/
  }
  return result; /*0x57cdb5*/

}
}
// 0x65B510
namespace gamemd {
int CellClass::GetOccupiedRatio()
{

  int CellClass_field_6C; // esi

  CellClass_field_6C = this->CellClass_field_6C; /*0x65b511*/
  if ( CellClass_field_6C > 0 ) /*0x65b516*/
    return this->CellClass_field_4C * this->unknown70 / CellClass_field_6C; /*0x65b524*/
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

  return (int)this->rubble; /*0x48ba83*/

}
} // namespace gamemd

// 0x56BCD0
namespace gamemd {
int CellClass::GetTileData(IUnknown * aP0, IUnknown * aP1)
{

  unsigned int v2; // eax
  unsigned int *v3; // eax

  v2 = *aP0 + (aP0[1] << 9); /*0x56bcde*/
  if ( v2 >= 0x40000 || (v3 = *(unsigned int **)(dword_87F924 + 4 * v2)) == 0 ) /*0x56bcf4*/
  {
    dword_ABDC74 = *(unsigned int *)aP0; /*0x56bcf8*/
    v3 = &unk_ABDC50; /*0x56bcfd*/
  }
  return *(unsigned int *)(aP1 + 4 * ((int16_t)v3[9] / 4 + 130 * ((int16_t)HIWORD(v3[9]) / 4)) + 23024); /*0x56bd3a*/

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
  v3 = dword_89F688[v2]; /*0x572b8c*/
  LOWORD(v2) = aP0[1] + HIWORD(dword_89F688[v2]); /*0x572ba2*/
  LOWORD(a2) = *aP0 + v3; /*0x572ba6*/
  HIWORD(a2) = v2; /*0x572bae*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x572bbd*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572bd7*/
  {
    dword_ABDC74 = a2; /*0x572bd9*/
    v5 = unk_ABDC50; /*0x572bdf*/
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
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x572c23*/
  if ( v7 == dword_ABC1D0 || v7 == dword_AA1540 ) /*0x572c2e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((int16_t *)&a2, 1, 0); /*0x572c7c*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x572c38*/
  {
    LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundConfig, -1, -1, 0); /*0x572c48*/
  }
  else if ( v7 == g_TerrainSoundConfig + 2 ) /*0x572c58*/
  {
    LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572c6a*/
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
  v3 = dword_89F688[v2]; /*0x572c9c*/
  LOWORD(v2) = aP0[1] + HIWORD(dword_89F688[v2]); /*0x572cb2*/
  LOWORD(a2) = *aP0 + v3; /*0x572cb6*/
  HIWORD(a2) = v2; /*0x572cbe*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x572ccd*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572ce7*/
  {
    dword_ABDC74 = a2; /*0x572ce9*/
    v5 = unk_ABDC50; /*0x572cef*/
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
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x572d33*/
  if ( v7 == dword_AA1548 || v7 == dword_AA0740 ) /*0x572d3e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((int16_t *)&a2, 1, 0); /*0x572d8e*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x572d48*/
  {
    LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 1, -1, -1, 0); /*0x572d5a*/
  }
  else if ( v7 == g_TerrainSoundConfig + 1 ) /*0x572d6a*/
  {
    LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572d7c*/
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
  char *v7; // eax
  char *v8; // esi
  int result; // eax
  unsigned int v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp+4h]

  v11 = *(unsigned int *)(aP0 + 36); /*0x5865fe*/
  v3 = HIWORD(v11); /*0x586602*/
  v4 = 1; /*0x586607*/
  v5 = v11; /*0x58660c*/
  do /*0x5866aa*/
  {
    v6 = v5 + (v3 << 9); /*0x586618*/
    if ( v6 < 0x40000 && (v7 = *(char **)(dword_87F924 + 4 * v6)) != 0 ) /*0x58662e*/
    {
      v8 = v7; /*0x586630*/
    }
    else
    {
      v8 = (char *)&unk_ABDC50; /*0x586638*/
      dword_ABDC74 = v11; /*0x58663d*/
    }
    result = v8[283]; /*0x586643*/
    if ( result >= v4 - 2 && result <= v4 ) /*0x586653*/
    {
      if ( aP2 ) /*0x58665b*/
        CellClass::RevealFogRect(v8 + 36); /*0x586666*/
      v10[0] = 0; /*0x586670*/
      v10[1] = 0; /*0x586674*/
      result = Object::FindClosestObjectCell(v8, v10, 0, 0); /*0x58667e*/
      if ( result ) /*0x586685*/
        result = (*(int (**)(int, int))(*(unsigned int *)result + 408))(result, aP1); /*0x586690*/
    }
    ++v5; /*0x586696*/
    v4 += 2; /*0x586698*/
    ++v3; /*0x58669b*/
    LOWORD(v11) = v5; /*0x5866a0*/
    HIWORD(v11) = v3; /*0x5866a5*/
  }
  while ( v4 < 15 ); /*0x5866aa*/
  return result; /*0x5866b0*/

}
} // namespace gamemd

// 0x6D6AD0
namespace gamemd {
int CellClass::GetByte284(IUnknown * aP0)
{

  return *((uint8_t *)((Coord *)(&dword_87F7E8))->To_Cell(aP0) + 284); /*0x6d6ae9*/

}
} // namespace gamemd
