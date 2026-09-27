// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x48B720
namespace gamemd {
int Terrain::GetTileIndex(int a2)
{
  return (int)((*(unsigned int *)(this->q024 + 36 * *(unsigned int *)(*(&this->q0042) + 4 * a2)) & 1) != 0 ? this->q024 + 36 * *(unsigned int *)(*(&this->q0042) + 4 * a2) : 0);
}
}
// 0x48B9E0
namespace gamemd {
int Terrain::GetTileType(AnimClass * aP1)
{
  return (*(unsigned int *)(*(&this->q0043) + 24 * *(unsigned int *)(*(&this->q0046) + 4 * aP1)) & 1) != 0
       ? *(&this->q0043) + 24 * *(unsigned int *)(*(&this->q0046) + 4 * aP1)
       : 0;
}
}
// 0x568E40
namespace gamemd {
AbstractClass * * Terrain::PlaceCliffs(int a2, int a3, IUnknown * aP3)
{
  unsigned int v5; // eax
  unsigned int *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  unsigned int *v12; // eax
  int v13; // esi
  char v14; // al
  unsigned int v15; // eax
  unsigned char *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  unsigned char *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  unsigned char *v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  unsigned char *v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  unsigned char *v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  unsigned char *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  char v40; // al
  unsigned int v42; // eax
  unsigned int *v43; // eax
  unsigned int *v44; // esi
  int *v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  unsigned int *v50; // eax
  unsigned int *v51; // eax
  int v52; // eax
  int v53; // eax
  unsigned int *v54; // eax
  unsigned int v55; // edx
  char *v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // edi
  int v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  unsigned int *v64; // [esp+14h] [ebp-60h]
  int v65; // [esp+14h] [ebp-60h]
  int i; // [esp+18h] [ebp-5Ch]
  int v67; // [esp+1Ch] [ebp-58h]
  int v68; // [esp+20h] [ebp-54h]
  int v69; // [esp+24h] [ebp-50h]
  int v70; // [esp+24h] [ebp-50h]
  int v71; // [esp+30h] [ebp-44h] BYREF
  int v72; // [esp+34h] [ebp-40h] BYREF
  int v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  int v75; // [esp+40h] [ebp-34h] BYREF
  int v76; // [esp+44h] [ebp-30h]
  int16_t v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  int v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  void* v81;
  void *Block; // [esp+60h] [ebp-14h]
  int v83; // [esp+64h] [ebp-10h]
  char v84; // [esp+69h] [ebp-Bh]
  int v85; // [esp+6Ch] [ebp-8h]
  int v86; // [esp+70h] [ebp-4h]
  int v87; // [esp+78h] [ebp+4h]
  int v88; // [esp+78h] [ebp+4h]

  *(unsigned int *)v77 = g_MapSeedState; /*0x568e4b*/
  v5 = (int16_t)*(unsigned int *)(a2 + 36) + ((int16_t)IDA_HIWORD(*(unsigned int *)(a2 + 36)) << 9); /*0x568e6c*/
  if ( v5 < 0x40000 && (v6 = *(unsigned int **)(g_Shroud_CellArray + 4 * v5)) != 0 ) /*0x568e82*/
  {
    v64 = v6; /*0x568e84*/
  }
  else
  {
    g_Map_GlobalCellIndex = *(unsigned int *)(a2 + 36); /*0x568e8a*/
    v64 = &g_CellClassArray; /*0x568e90*/
  }
  v63 = 0; /*0x568ea0*/
  VectorClass::CellConstructor(&v81, 0, 0); /*0x568ea5*/
  v7 = g_TerrainSoundTable2; /*0x568eae*/
  v8 = g_TerrainSoundConfig; /*0x568eb4*/
  v86 = 10; /*0x568ec5*/
  v85 = 0; /*0x568ed4*/
  for ( i = 1; i < 30; ++i ) /*0x568edc*/
  {
    v65 = v64[9]; /*0x568ef3*/
    IDA_LOWORD(v67) = IDA_LOWORD(Direction_X_Offsets[a3 & 7]) + v65; /*0x568f06*/
    IDA_HIWORD(v67) = IDA_HIWORD(Direction_X_Offsets[a3 & 7]) + IDA_HIWORD(v65); /*0x568f0e*/
    v9 = IDA_SHIWORD(v67) << 9; /*0x568f1a*/
    v10 = (int16_t)v67 + v9 < 0; /*0x568f1d*/
    v11 = (int16_t)v67 + v9; /*0x568f1d*/
    *(unsigned int *)v77 = v67; /*0x568f1f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(unsigned int **)(g_Shroud_CellArray + 4 * v11)) == 0 ) /*0x568f37*/
    {
      g_Map_GlobalCellIndex = (int)((unsigned int *)(v67));
      v64 = (unsigned int *)(&g_CellClassArray);
    }
    else
    {
      v64 = v12; /*0x568f39*/
    }
    v13 = v64[14] - g_Cell_BuildabilityLUT + 1; /*0x568f60*/
    if ( a3 == 2 ) /*0x568f64*/
    {
      if ( v13 != dword_ABC1E8 || *((unsigned char *)v64 + 282) != 4 ) /*0x568f79*/
      {
        if ( v13 != dword_AA0E38 || *((unsigned char *)v64 + 282) != 4 ) /*0x568f8e*/
        {
          if ( v13 != v7 && v13 != v7 + 3 && v13 != v7 + 4 && v13 != v7 + 1 && v13 != v7 + 2 /*0x568fbf*/
            || *((unsigned char *)v64 + 282) != 4 )
          {
            continue; /*0x568fbf*/
          }
          Cell::SetTileType(v77, v7 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x568fdd*/
          v14 = InvalidateTileRegionMap(v77); /*0x568fe9*/
          v7 = g_TerrainSoundTable2; /*0x568fee*/
          v63 |= v14; /*0x568ffd*/
          if ( v13 != g_TerrainSoundTable2 + 4 ) /*0x569003*/
            goto LABEL_44; /*0x569003*/
          v15 = v77[0] + (v77[1] << 9); /*0x569018*/
          if ( v15 >= 0x40000 || (v16 = *(unsigned char **)(g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x56902e*/
          {
            g_Map_GlobalCellIndex = *(unsigned int *)v77; /*0x569030*/
            v16 = &g_CellClassArray; /*0x569036*/
          }
          v16[283] += 4; /*0x569049*/
          v17 = *CellStruct::Add(v77, &v72, Direction_X_Offsets); /*0x56905d*/
          v71 = v17; /*0x56905f*/
          v18 = (int16_t)v17 + (IDA_SHIWORD(v17) << 9); /*0x56906e*/
          if ( v18 >= 0x40000 || (v19 = *(unsigned char **)(g_Shroud_CellArray + 4 * v18)) == 0 ) /*0x569084*/
          {
            g_Map_GlobalCellIndex = (int)((unsigned char *)(v17));
            v19 = (unsigned char *)(&g_CellClassArray);
          }
          v19[283] += 4; /*0x56909f*/
          v20 = *CellStruct::Add(v77, &v73, &g_DirectionOffsetPool); /*0x5690b3*/
          v71 = v20; /*0x5690b5*/
          v21 = (int16_t)v20 + (IDA_SHIWORD(v20) << 9); /*0x5690c4*/
          if ( v21 >= 0x40000 || (v22 = *(unsigned char **)(g_Shroud_CellArray + 4 * v21)) == 0 ) /*0x5690da*/
          {
            g_Map_GlobalCellIndex = (int)((unsigned char *)(v20));
            v22 = (unsigned char *)(&g_CellClassArray);
          }
          v23 = 0; /*0x5690f0*/
          v22[283] += 4; /*0x5690f2*/
          v24 = v83; /*0x5690f8*/
  LABEL_33:
          v25 = -2; /*0x5690fc*/
          while ( 1 ) /*0x56910e*/
          {
            IDA_LOWORD(v68) = v23 + v77[0]; /*0x56910e*/
            IDA_HIWORD(v68) = v25 + v77[1]; /*0x569113*/
            if ( v85 < v24 ) /*0x56911e*/
              goto LABEL_39; /*0x56911e*/
            if ( !v84 && v24 || v86 <= 0 ) /*0x569132*/
              goto LABEL_41; /*0x569132*/
            if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v81[2])(&v81, v86 + v24, 0) ) /*0x569141*/
            {
  LABEL_39:
              v26 = v85++; /*0x569150*/
              *((unsigned int *)Block + v26) = v68; /*0x56915b*/
            }
            v24 = v83; /*0x56915e*/
  LABEL_41:
            if ( ++v25 >= 3 ) /*0x569166*/
            {
              if ( ++v23 >= 2 ) /*0x56916c*/
                goto LABEL_43; /*0x56916c*/
              goto LABEL_33; /*0x56916c*/
            }
          }
        }
        Cell::UpdateTileType(v77, 0, 0); /*0x5693de*/
        v71 = *CellStruct::Add(v77, &v75, &Direction_Y_Offsets); /*0x5693fc*/
        v40 = InvalidateTileRegionMap(&v71); /*0x569401*/
  LABEL_86:
        v63 |= v40; /*0x569468*/
        break; /*0x569468*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x5693ac*/
      v71 = *CellStruct::Add(v77, &v75, &Direction_Y_Offsets); /*0x5693ca*/
  LABEL_85:
      v40 = InvalidateTileRegionMap(&v71); /*0x569460*/
      goto LABEL_86; /*0x569463*/
    }
    if ( a3 != 4 ) /*0x569194*/
      continue; /*0x569194*/
    if ( v13 == dword_ABC1D0 && *((unsigned char *)v64 + 282) == 2 ) /*0x5691a5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56940e*/
      v71 = *CellStruct::Add(v77, &v75, Direction_X_Offsets); /*0x56942c*/
      v40 = InvalidateTileRegionMap(&v71); /*0x569431*/
      goto LABEL_86; /*0x569431*/
    }
    if ( v13 == dword_AA1540 && *((unsigned char *)v64 + 282) == 2 ) /*0x5691ba*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56943e*/
      v71 = *CellStruct::Add(v77, &v75, Direction_X_Offsets); /*0x56945c*/
      goto LABEL_85; /*0x56945c*/
    }
    if ( v13 != v8 && v13 != v8 + 3 && v13 != v8 + 4 && v13 != v8 + 2 && v13 != v8 + 1 || *((unsigned char *)v64 + 282) != 2 ) /*0x5691e7*/
      continue; /*0x5691e7*/
    Cell::SetTileType(v77, g_Cell_BuildabilityLUT + v8 - 1, -1, -1, 0); /*0x569200*/
    v27 = InvalidateTileRegionMap(v77); /*0x56920c*/
    v8 = g_TerrainSoundConfig; /*0x569215*/
    v63 |= v27; /*0x56921d*/
    if ( v13 != g_TerrainSoundConfig + 4 ) /*0x569226*/
    {
      v7 = g_TerrainSoundTable2; /*0x569396*/
      continue; /*0x56939c*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x56923b*/
    if ( v28 >= 0x40000 || (v29 = *(unsigned char **)(g_Shroud_CellArray + 4 * v28)) == 0 ) /*0x569251*/
    {
      g_Map_GlobalCellIndex = *(unsigned int *)v77; /*0x569253*/
      v29 = &g_CellClassArray; /*0x569259*/
    }
    v29[283] += 4; /*0x56926c*/
    v30 = *CellStruct::Add(v77, &v74, &g_CellDirectionOffsets); /*0x569280*/
    v71 = v30; /*0x569282*/
    v31 = (int16_t)v30 + (IDA_SHIWORD(v30) << 9); /*0x569291*/
    if ( v31 >= 0x40000 || (v32 = *(unsigned char **)(g_Shroud_CellArray + 4 * v31)) == 0 ) /*0x5692a7*/
    {
      g_Map_GlobalCellIndex = (int)((unsigned char *)(v30));
      v32 = (unsigned char *)(&g_CellClassArray);
    }
    v32[283] += 4; /*0x5692c2*/
    v33 = *CellStruct::Add(v77, &v75, &Direction_Y_Offsets); /*0x5692d6*/
    v71 = v33; /*0x5692d8*/
    v34 = (int16_t)v33 + (IDA_SHIWORD(v33) << 9); /*0x5692e7*/
    if ( v34 >= 0x40000 || (v35 = *(unsigned char **)(g_Shroud_CellArray + 4 * v34)) == 0 ) /*0x5692fd*/
    {
      g_Map_GlobalCellIndex = (int)((unsigned char *)(v33));
      v35 = (unsigned char *)(&g_CellClassArray);
    }
    v36 = 0; /*0x569313*/
    v35[283] += 4; /*0x569315*/
    v37 = v83; /*0x56931b*/
    do /*0x56938f*/
    {
      v38 = -2; /*0x56931f*/
      do /*0x569389*/
      {
        IDA_LOWORD(v69) = v38 + v77[0]; /*0x569331*/
        IDA_HIWORD(v69) = v36 + v77[1]; /*0x569336*/
        if ( v85 < v37 ) /*0x569341*/
          goto LABEL_75; /*0x569341*/
        if ( (v84 || !v37) && v86 > 0 ) /*0x569355*/
        {
          if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v81[2])(&v81, v86 + v37, 0) ) /*0x569364*/
          {
  LABEL_75:
            v39 = v85++; /*0x56936b*/
            *((unsigned int *)Block + v39) = v69; /*0x56937e*/
          }
          v37 = v83; /*0x569381*/
        }
        ++v38; /*0x569385*/
      }
      while ( v38 < 3 ); /*0x569389*/
      ++v36; /*0x56938b*/
    }
    while ( v36 < 2 ); /*0x56938f*/
  LABEL_43:
    v7 = g_TerrainSoundTable2; /*0x56916e*/
  LABEL_44:
    v8 = g_TerrainSoundConfig; /*0x569174*/
  }
  if ( i == 30 ) /*0x569473*/
  {
    Buffer::Cleanup((int)&v81); /*0x569481*/
  }
  else
  {
    v42 = (int16_t)*(unsigned int *)(a2 + 36) + ((int16_t)IDA_HIWORD(*(unsigned int *)(a2 + 36)) << 9); /*0x5694a6*/
    if ( v42 < 0x40000 && (v43 = *(unsigned int **)(g_Shroud_CellArray + 4 * v42)) != 0 ) /*0x5694bc*/
    {
      v44 = v43; /*0x5694be*/
    }
    else
    {
      g_Map_GlobalCellIndex = *(unsigned int *)(a2 + 36); /*0x5694c2*/
      v44 = &g_CellClassArray; /*0x5694c8*/
    }
    v45 = (int *)(aP3);
    if ( aP3 ) /*0x5694d6*/
    {
      v87 = *(unsigned int *)(a2 + 36); /*0x5694e7*/
      v78 = ((int16_t)*(unsigned int *)(a2 + 36) << 8) + 128; /*0x5694f0*/
      v46 = g_MapRenderState * *(char *)(a2 + 283); /*0x5694fb*/
      v79 = (IDA_SHIWORD(v87) << 8) + 128; /*0x56950e*/
      v80 = v46; /*0x569516*/
      Coord::To_Screen(g_TacticalClass_Instance, &v78, &v75); /*0x569522*/
      v47 = v76; /*0x56952b*/
      *v45 = v75; /*0x56952f*/
      v45[1] = v47; /*0x569532*/
    }
    if ( i > 0 ) /*0x569537*/
    {
      v48 = i; /*0x56953d*/
      do /*0x569633*/
      {
        v49 = v44[14] - g_Cell_BuildabilityLUT + 1; /*0x569554*/
        if ( (v49 != g_TerrainSoundTable2 || (*((unsigned char *)v44 + 282) & 1) != 0) /*0x569570*/
          && (v49 != g_TerrainSoundConfig || *((unsigned char *)v44 + 282) >= 5u) )
        {
          if ( a3 == 2 ) /*0x56957e*/
          {
            v50 = (unsigned int *)(operator new(0xB0u));
            if ( v50 ) /*0x56958a*/
            {
              aP3 = (IUnknown *)((int *)v44[9]);
              Object::SpawnAtCell(v50, *((unsigned int *)g_BuildingTypeClass_Array + 24), (int16_t *)&aP3, -1); /*0x5695a9*/
            }
          }
          else
          {
            v51 = (unsigned int *)(operator new(0xB0u));
            if ( v51 ) /*0x5695b5*/
            {
              v71 = v44[9]; /*0x5695be*/
              Object::SpawnAtCell(v51, *((unsigned int *)g_BuildingTypeClass_Array + 25), (int16_t *)&v71, -1); /*0x5695d1*/
            }
          }
        }
        v70 = v44[9]; /*0x5695dd*/
        IDA_LOWORD(v88) = IDA_LOWORD(Direction_X_Offsets[a3 & 7]) + v70; /*0x5695f0*/
        IDA_HIWORD(v88) = IDA_HIWORD(Direction_X_Offsets[a3 & 7]) + IDA_HIWORD(v70); /*0x5695f8*/
        v52 = IDA_SHIWORD(v88) << 9; /*0x569604*/
        v10 = (int16_t)v88 + v52 < 0; /*0x569607*/
        v53 = (int16_t)v88 + v52; /*0x569607*/
        *(unsigned int *)v77 = v88; /*0x569609*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(unsigned int **)(g_Shroud_CellArray + 4 * v53)) == 0 ) /*0x569621*/
        {
          g_Map_GlobalCellIndex = (int)((unsigned int *)(v88));
          v44 = (unsigned int *)(&g_CellClassArray);
        }
        else
        {
          v44 = v54; /*0x569623*/
        }
        --v48; /*0x569632*/
      }
      while ( v48 ); /*0x569633*/
    }
    if ( v45 ) /*0x56963b*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569652*/
      if ( v55 >= 0x40000 || (v56 = *(char **)(g_Shroud_CellArray + 4 * v55)) == 0 ) /*0x569669*/
      {
        g_Map_GlobalCellIndex = *(unsigned int *)v77; /*0x56966b*/
        v56 = (char *)&g_CellClassArray; /*0x569671*/
      }
      v80 = g_MapRenderState * v56[283]; /*0x56968f*/
      v79 = (v77[1] << 8) + 128; /*0x569699*/
      v78 = (v77[0] << 8) + 128; /*0x5696a5*/
      Coord::To_Screen(g_TacticalClass_Instance, &v78, &v75); /*0x5696b1*/
      v57 = *v45; /*0x5696b6*/
      v58 = v75; /*0x5696b9*/
      v59 = v45[1]; /*0x5696bd*/
      v60 = *v45; /*0x5696c2*/
      if ( *v45 >= v75 ) /*0x5696c4*/
        v60 = v75; /*0x5696c6*/
      v61 = v45[1]; /*0x5696cb*/
      *v45 = v60 - 64; /*0x5696cd*/
      v62 = v76; /*0x5696d0*/
      if ( v59 >= v76 ) /*0x5696d6*/
        v61 = v76; /*0x5696d8*/
      v45[1] = v61 - 64; /*0x5696e2*/
      v45[2] = abs32(v57 - v58) + 128; /*0x5696ec*/
      v45[3] = abs32(v59 - v62) + 128; /*0x5696fd*/
    }
    if ( v63 ) /*0x569706*/
      Terrain::ConnectivityGraph(); /*0x56970c*/
    if ( v85 > 0 ) /*0x569717*/
      LayerClass::Update_Pathfinding_2(&v81); /*0x569722*/
    if ( Block ) /*0x569735*/
    {
      if ( v84 ) /*0x56973d*/
        RA2_OPDEL(Block); /*0x569740*/
    }
  }
}
}
// 0x56C510
namespace gamemd {
AbstractClass * * Terrain::ConnectivityGraph()
{
  unsigned int *v1; // ebp
  unsigned int *v2; // esi
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edi
  void **v7; // esi
  int v8; // edi
  unsigned int i; // eax
  int v10; // edi
  int v11; // eax
  uint8_t *v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int16_t *v19; // esi
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  int v29; // esi
  int v30; // edx
  unsigned int *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  bool v37; // zf
  unsigned short *v38; // eax
  int v39; // ecx
  unsigned short *v40; // ebx
  int v41; // eax
  unsigned short *v42; // ecx
  int j; // edi
  int v44; // eax
  int v45; // esi
  int *v46; // edx
  int v47; // ecx
  int v50; // eax
  unsigned short *v51; // ecx
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  char *v59; // esi
  int v60; // ecx
  int *v61; // edi
  int16_t *v62; // eax
  int v63; // ecx
  int v65; // ecx
  int v66; // eax
  int16_t *v67; // ecx
  int v68; // esi
  unsigned short *v69; // edx
  uint16_t v70; // ax
  uint16_t *v71; // edi
  int v72; // ecx
  int v73; // edx
  int v74; // esi
  void **v75; // edi
  unsigned int *v77; // [esp+10h] [ebp-54h]
  int16_t v78; // [esp+14h] [ebp-50h]
  int *Block; // [esp+18h] [ebp-4Ch]
  uint8_t *Blocka; // [esp+18h] [ebp-4Ch]
  int v81; // [esp+1Ch] [ebp-48h]
  int16_t *v82; // [esp+20h] [ebp-44h]
  int16_t **v83; // [esp+24h] [ebp-40h]
  int v84; // [esp+28h] [ebp-3Ch]
  int v85; // [esp+28h] [ebp-3Ch]
  int *v86; // [esp+28h] [ebp-3Ch]
  uint8_t *v87; // [esp+2Ch] [ebp-38h]
  char *v88; // [esp+2Ch] [ebp-38h]
  char *v89; // [esp+2Ch] [ebp-38h]
  char *v90; // [esp+2Ch] [ebp-38h]
  unsigned short *v91; // [esp+2Ch] [ebp-38h]
  int v92; // [esp+30h] [ebp-34h] BYREF
  int v94; // [esp+38h] [ebp-2Ch]
  int v95; // [esp+3Ch] [ebp-28h]
  int v96; // [esp+40h] [ebp-24h]
  void* v99;
  void *v100; // [esp+50h] [ebp-14h]
  int v101; // [esp+54h] [ebp-10h]
  int v102; // [esp+58h] [ebp-Ch]
  int v103; // [esp+5Ch] [ebp-8h]
  int v104; // [esp+60h] [ebp-4h]

  v1 = (unsigned int *)(this);
  v81 = -1; /*0x56c51a*/
  v95 = -1; /*0x56c51e*/
  v2 = (unsigned int *)this->q014; /*0x56c529*/
  v3 = 0; /*0x56c52c*/
  v4 = *(&this->u32_86) + 4 * *(&this->u32_87); /*0x56c52e*/
  v100 = 0; /*0x56c531*/
  v101 = 0; /*0x56c535*/
  IDA_LOWORD(v102) = 1; /*0x56c539*/
  v103 = 0; /*0x56c54a*/
  v104 = 300; /*0x56c54e*/
  v5 = v2[2]; /*0x56c556*/
  v87 = (uint8_t *)v4; /*0x56c560*/
  if ( v5 > 0 ) /*0x56c564*/
  {
    v6 = 0; /*0x56c566*/
    do /*0x56c57c*/
    {
      (*(void (__thiscall **)(int))(*(unsigned int *)(*v2 + v6) + 12))(*v2 + v6); /*0x56c570*/
      ++v3; /*0x56c576*/
      v6 += 24; /*0x56c577*/
    }
    while ( v3 < v2[2] ); /*0x56c57c*/
  }
  v7 = (void **)(v1 + 6); /*0x56c57e*/
  v8 = 13; /*0x56c581*/
  do /*0x56c59f*/
  {
    if ( *v7 ) /*0x56c586*/
    {
      RA2_OPDEL(*v7); /*0x56c58d*/
      *v7 = 0; /*0x56c595*/
    }
    ++v7; /*0x56c59b*/
    --v8; /*0x56c59e*/
  }
  while ( v8 ); /*0x56c59f*/
  for ( i = v1->q068; i < (unsigned int)v87; i += 4 ) /*0x56c5aa*/
    *(unsigned short *)(i + 2) = 0; /*0x56c5ac*/
  v10 = 1; /*0x56c5c3*/
  if ( v103 < v101 /*0x56c5eb*/
    || (IDA_BYTE1(v102) || !v101)
    && v104 > 0
    && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v99[2])(&v99, v104 + v101, 0) )
  {
    v11 = v103++; /*0x56c5f6*/
    *((unsigned int *)v100 + v11) = 7; /*0x56c601*/
  }
  v12 = (uint8_t *)v1->q068; /*0x56c608*/
  v92 = 0; /*0x56c60b*/
  if ( v12 < v87 ) /*0x56c615*/
  {
    v13 = v95; /*0x56c61b*/
    do /*0x56c6bc*/
    {
      v14 = *v12; /*0x56c621*/
      v95 = v14; /*0x56c626*/
      if ( v14 == 7 || *((unsigned short *)v12 + 1) ) /*0x56c630*/
      {
        v12 += 4; /*0x56c6b5*/
      }
      else
      {
        dword_ABDE8C = 0; /*0x56c640*/
        v15 = Terrain::FloodFillConnectivity(v12, v10, &v92); /*0x56c64a*/
        if ( v15 > v13 ) /*0x56c651*/
        {
          v13 = v15; /*0x56c655*/
          v81 = (uint16_t)v10; /*0x56c65d*/
        }
        if ( v103 < v101 /*0x56c68e*/
          || (IDA_BYTE1(v102) || !v101)
          && v104 > 0
          && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v99[2])(&v99, v104 + v101, 0) )
        {
          v16 = v103++; /*0x56c69d*/
          *((unsigned int *)v100 + v16) = v95; /*0x56c6a8*/
        }
        ++v10; /*0x56c6af*/
        v12 += 4 * v92; /*0x56c6b0*/
      }
    }
    while ( v12 < v87 ); /*0x56c6bc*/
  }
  v1->q04C = (uint16_t)v10; /*0x56c6c8*/
  v17 = v1->u32_60 - 1; /*0x56c6ce*/
  if ( v17 >= 0 ) /*0x56c6cf*/
  {
    v18 = 16 * v17; /*0x56c6d7*/
    v88 = (char *)(16 * v17); /*0x56c6db*/
    v84 = v1->u32_60; /*0x56c6df*/
    do /*0x56c7e0*/
    {
      v19 = (int16_t *)(v1->q054 + v18); /*0x56c6ea*/
      if ( *((unsigned char *)v19 + 8) ) /*0x56c6e6*/
      {
        v20 = v1->u32_F8 + v1->u32_F4 + 1; /*0x56c704*/
        v21 = *v19 + v20 * v19[1]; /*0x56c70f*/
        if ( v21 >= 0 ) /*0x56c711*/
        {
          v22 = v1->u32_6C; /*0x56c717*/
          if ( v21 >= v22 ) /*0x56c71c*/
            v21 = v22 - 1; /*0x56c71e*/
        }
        else
        {
          v21 = 0; /*0x56c713*/
        }
        v23 = v1->q068; /*0x56c725*/
        v24 = *(uint16_t *)(v23 + 4 * v21 + 2); /*0x56c72d*/
        v25 = v19[2] + v20 * v19[3]; /*0x56c736*/
        if ( v25 >= 0 ) /*0x56c738*/
        {
          v26 = v1->u32_6C; /*0x56c73e*/
          if ( v25 >= v26 ) /*0x56c743*/
            v25 = v26 - 1; /*0x56c745*/
        }
        else
        {
          v25 = 0; /*0x56c73a*/
        }
        v27 = *(uint16_t *)(v23 + 4 * v25 + 2); /*0x56c74a*/
        if ( (uint16_t)v27 != v24 ) /*0x56c751*/
        {
          if ( (uint16_t)v27 < v24 ) /*0x56c753*/
          {
            v27 = v24; /*0x56c757*/
            v24 = *(uint16_t *)(v23 + 4 * v25 + 2); /*0x56c759*/
          }
          v28 = v27 | (v24 << 16); /*0x56c763*/
          v29 = *(unsigned int *)v1->q014 + 24 * (v27 & 0xF | (16 * (v24 & 0xF))); /*0x56c775*/
          v30 = *(unsigned int *)(v29 + 16); /*0x56c778*/
          v31 = *(unsigned int **)(v29 + 4); /*0x56c77c*/
          v32 = v30 - 1; /*0x56c77f*/
          if ( v30 - 1 < 0 ) /*0x56c784*/
          {
  LABEL_48:
            v33 = *(unsigned int *)(v29 + 8); /*0x56c790*/
            if ( v30 < v33 /*0x56c7b2*/
              || (*(unsigned char *)(v29 + 13) || !v33)
              && (v34 = *(unsigned int *)(v29 + 20), v34 > 0)
              && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v29 + 8))(v29, v33 + v34, 0) )
            {
              v35 = *(unsigned int *)(v29 + 16); /*0x56c7b9*/
              v36 = *(unsigned int *)(v29 + 4); /*0x56c7bc*/
              *(unsigned int *)(v29 + 16) = v35 + 1; /*0x56c7c2*/
              *(unsigned int *)(v36 + 8 * v35) = v28; /*0x56c7c5*/
              *(unsigned int *)(v36 + 8 * v35 + 4) = v28; /*0x56c7c8*/
            }
          }
          else
          {
            while ( v28 != *v31 ) /*0x56c788*/
            {
              v31 += 2; /*0x56c78a*/
              if ( --v32 < 0 ) /*0x56c78e*/
                goto LABEL_48; /*0x56c78e*/
            }
          }
        }
      }
      v18 = (int)(v88 - 16); /*0x56c7d4*/
      v37 = v84 == 1; /*0x56c7d7*/
      v88 -= 16; /*0x56c7d8*/
      --v84; /*0x56c7dc*/
    }
    while ( !v37 ); /*0x56c7e0*/
  }
  v38 = operator new(2 * v1->q04C); /*0x56c7ec*/
  v39 = v1->q04C; /*0x56c7f1*/
  v40 = v38; /*0x56c7f4*/
  v41 = 0; /*0x56c7f9*/
  v40 = v40; /*0x56c7fd*/
  if ( v39 > 0 ) /*0x56c801*/
  {
    v42 = v40; /*0x56c803*/
    do /*0x56c813*/
    {
      *v42 = 0; /*0x56c805*/
      ++v41; /*0x56c80d*/
      ++v42; /*0x56c80e*/
    }
    while ( v41 < v1->q04C ); /*0x56c813*/
  }
  for ( j = 0; j < 6144; j += 24 ) /*0x56c815*/
  {
    v44 = j + *(unsigned int *)v1->q014; /*0x56c81c*/
    v45 = *(unsigned int *)(v44 + 16); /*0x56c81e*/
    if ( v45 > 0 ) /*0x56c823*/
    {
      v46 = (int *)(*(unsigned int *)(v44 + 4) + 4); /*0x56c828*/
      do /*0x56c84f*/
      {
        v47 = *v46; /*0x56c82b*/
        v46 += 2; /*0x56c82d*/
        ++v40[(uint16_t)v47]; /*0x56c83b*/
        ++v40[IDA_HIWORD(v47)]; /*0x56c844*/
        --v45; /*0x56c84e*/
      }
      while ( v45 ); /*0x56c84f*/
    }
  }
  v77 = operator new(4 * v1->q04C); /*0x56c868*/
  v89 = 0; /*0x56c872*/
  if ( (int)v1->q04C > 0 ) /*0x56c87c*/
  {
    v77 = v77; /*0x56c87e*/
    v40 = v40; /*0x56c882*/
    do /*0x56c8aa*/
    {
      *v77++ = operator new(2 * *v40++); /*0x56c891*/
      ++v89; /*0x56c8a6*/
    }
    while ( (int)v89 < v1->q04C ); /*0x56c8aa*/
  }
  v50 = 0; /*0x56c8af*/
  if ( (int)v1->q04C > 0 ) /*0x56c8b3*/
  {
    v51 = v40; /*0x56c8b5*/
    do /*0x56c8c5*/
    {
      *v51 = 0; /*0x56c8b7*/
      ++v50; /*0x56c8bf*/
      ++v51; /*0x56c8c0*/
    }
    while ( v50 < v1->q04C ); /*0x56c8c5*/
  }
  v52 = 0; /*0x56c8c7*/
  v85 = 0; /*0x56c8c9*/
  do /*0x56c953*/
  {
    v53 = *(unsigned int *)v1->q014; /*0x56c8d0*/
    v54 = *(unsigned int *)(v53 + v52 + 16); /*0x56c8d2*/
    v55 = v52 + v53; /*0x56c8d6*/
    if ( v54 > 0 ) /*0x56c8da*/
    {
      v90 = (char *)v54; /*0x56c8df*/
      Block = (int *)(*(unsigned int *)(v55 + 4) + 4); /*0x56c8e6*/
      do /*0x56c940*/
      {
        v56 = *Block; /*0x56c8f4*/
        v57 = (uint16_t)*Block; /*0x56c8fa*/
        v58 = IDA_HIWORD(*Block); /*0x56c8ff*/
        *(unsigned short *)(v77[v57] + 2 * (uint16_t)v40[v57]) = v58; /*0x56c909*/
        *(unsigned short *)(v77[(uint16_t)v58] + 2 * (uint16_t)v40[(uint16_t)v58]) = v56; /*0x56c920*/
        ++v40[v57]; /*0x56c924*/
        ++v40[(uint16_t)v58]; /*0x56c928*/
        v37 = v90 == (char *)1; /*0x56c937*/
        Block += 2; /*0x56c938*/
        --v90; /*0x56c93c*/
      }
      while ( !v37 ); /*0x56c940*/
      v52 = v85; /*0x56c942*/
    }
    v52 += 24; /*0x56c946*/
    v85 = v52; /*0x56c94f*/
  }
  while ( v52 < 6144 ); /*0x56c953*/
  v59 = (char *)operator new(v1->q04C); /*0x56c962*/
  v60 = 0; /*0x56c96a*/
  for ( Blocka = (uint8_t *)v59; v60 < v1->q04C; v59[v60 - 1] = *((char *)v100 + 4 * v60 - 4) ) /*0x56c972*/
    ++v60; /*0x56c978*/
  v91 = operator new(2 * v1->q04C); /*0x56c993*/
  v61 = &dword_82A594; /*0x56c997*/
  v86 = &dword_82A594; /*0x56c9a2*/
  v83 = (int16_t **)(v1 + 6); /*0x56c9a6*/
  do /*0x56cb01*/
  {
    v78 = 2; /*0x56c9ad*/
    v62 = (int16_t *)operator new(2 * v1->q04C); /*0x56c9b8*/
    v82 = v62; /*0x56c9c4*/
    *v83 = v62; /*0x56c9c8*/
    v63 = 0; /*0x56c9cd*/
    if ( (int)v1->q04C > 0 ) /*0x56c9d1*/
    {
      v62 = v62; /*0x56c9d3*/
      do /*0x56c9f3*/
        *v62++ = v61[Blocka[v63++]] != 1; /*0x56c9e7*/
      while ( v63 < v1->q04C ); /*0x56c9f3*/
    }
    v65 = v1->q04C; /*0x56c9f5*/
    v66 = 0; /*0x56c9f8*/
    v94 = 0; /*0x56c9fc*/
    if ( v65 > 0 ) /*0x56ca00*/
    {
      v67 = v82; /*0x56ca06*/
      v95 = (int)v82; /*0x56ca0a*/
      do /*0x56cada*/
      {
        if ( !*v67 ) /*0x56ca0e*/
        {
          v68 = 1; /*0x56ca1c*/
          *v91 = v66; /*0x56ca21*/
          *v67 = v78; /*0x56ca29*/
          v96 = v61[Blocka[v66]]; /*0x56ca38*/
          do /*0x56cab2*/
          {
            v69 = &v91[--v68]; /*0x56ca45*/
            v70 = v40[(uint16_t)*v69]; /*0x56ca52*/
            if ( v70 - 1 >= 0 ) /*0x56ca59*/
            {
              v71 = (uint16_t *)(v77[(uint16_t)*v69] + 2 * (v70 - 1)); /*0x56ca5f*/
              v70 = v70; /*0x56ca63*/
              do /*0x56caa6*/
              {
                v72 = *v71; /*0x56ca6d*/
                if ( v86[Blocka[v72]] == v96 && !v82[v72] ) /*0x56ca83*/
                {
                  *v69 = v72; /*0x56ca8f*/
                  ++v68; /*0x56ca92*/
                  ++v69; /*0x56ca93*/
                  v82[v72] = v78; /*0x56ca96*/
                }
                --v71; /*0x56ca9e*/
                --v70; /*0x56caa2*/
              }
              while ( v70 ); /*0x56caa6*/
              v40 = v40; /*0x56caa8*/
              v1 = this; /*0x56caac*/
            }
          }
          while ( v68 ); /*0x56cab2*/
          v61 = v86; /*0x56cab8*/
          v67 = (int16_t *)v95; /*0x56cabc*/
          ++v78; /*0x56cac1*/
          v66 = v94; /*0x56cac5*/
        }
        v73 = v1->q04C; /*0x56cac9*/
        ++v66; /*0x56cacc*/
        ++v67; /*0x56cacd*/
        v94 = v66; /*0x56cad2*/
        v95 = (int)v67; /*0x56cad6*/
      }
      while ( v66 < v73 ); /*0x56cada*/
    }
    v61 += 8; /*0x56cae8*/
    *v82 = -1; /*0x56caf4*/
    ++v83; /*0x56caf9*/
    v86 = v61; /*0x56cafd*/
  }
  while ( (int)v61 < (int)&dword_82A734 ); /*0x56cb01*/
  v74 = 0; /*0x56cb0a*/
  if ( (int)v1->q04C > 0 ) /*0x56cb0e*/
  {
    v75 = (void **)v77; /*0x56cb10*/
    do /*0x56cb28*/
    {
      RA2_OPDEL(*v75); /*0x56cb17*/
      ++v74; /*0x56cb22*/
      ++v75; /*0x56cb23*/
    }
    while ( v74 < v1->q04C ); /*0x56cb28*/
  }
  RA2_OPDEL(Blocka); /*0x56cb2f*/
  RA2_OPDEL(v77); /*0x56cb39*/
  RA2_OPDEL(v40); /*0x56cb3f*/
  RA2_OPDEL(v91); /*0x56cb49*/
  if ( v100 && IDA_BYTE1(v102) ) /*0x56cb6b*/
    RA2_OPDEL(v100); /*0x56cb6e*/
  return v81; /*0x56cb57*/
}
}
// 0x56CB90
namespace gamemd {
int Terrain::FloodFillConnectivity(unsigned char * a1, IUnknown * aP2, AbstractClass * aP3)
{
  uint8_t *v4; // ebx
  int v5; // edi
  uint8_t *v6; // ebp
  int v7; // ecx
  uint8_t *v8; // esi
  int64_t v9; // rax
  int v10; // edx
  int v11; // edi
  int64_t v12; // rax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  unsigned int *v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int64_t v24; // rax
  int v25; // edi
  int64_t v26; // rax
  int v27; // ebx
  int v28; // ecx
  int v29; // edx
  int v30; // edi
  int v31; // eax
  unsigned int *v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  uint8_t *v37; // ebp
  uint8_t *v38; // esi
  int v39; // eax
  int v40; // edx
  uint8_t *v41; // edi
  int v42; // ebx
  int v43; // esi
  int64_t v44; // rax
  int64_t v45; // rax
  int v46; // ebp
  int v47; // ecx
  int v48; // edx
  int v49; // esi
  int v50; // eax
  unsigned int *v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // edx
  uint8_t *v56; // ebp
  unsigned int v57; // esi
  int v58; // ebx
  int v59; // eax
  int v60; // ecx
  int64_t v61; // rax
  int64_t v62; // rax
  int v63; // edi
  int v64; // ecx
  int v65; // edx
  int v66; // esi
  int v67; // eax
  unsigned int *v68; // ecx
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // edx
  bool v74; // [esp+1Bh] [ebp-21h]
  int v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+20h] [ebp-1Ch]
  int v78; // [esp+24h] [ebp-18h]
  int v79; // [esp+24h] [ebp-18h]
  int v82; // [esp+2Ch] [ebp-10h] BYREF
  int v83; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v84; // [esp+34h] [ebp-8h]
  int v85; // [esp+38h] [ebp-4h]
  unsigned int v87; // [esp+48h] [ebp+Ch]

  v4 = a1; /*0x56cb94*/
  v5 = *a1; /*0x56cb9f*/
  v74 = v5 == 6; /*0x56cba8*/
  a1 = a1; /*0x56cbaf*/
  v7 = a1[1]; /*0x56cbb1*/
  v8 = a1; /*0x56cbb4*/
  v5 = v5; /*0x56cbb6*/
  do /*0x56cbe7*/
  {
    v9 = (unsigned short)(a1[1] - v7);
    if ( (int)((IDA_HIDWORD(v9) ^ v9) - IDA_HIDWORD(v9)) >= 2 ) /*0x56cbcd*/
      break; /*0x56cbcd*/
    *((unsigned short *)a1 + 1) = aP2; /*0x56cbd6*/
    v10 = *(a1 - 4); /*0x56cbda*/
    v7 = a1[1]; /*0x56cbdf*/
    a1 -= 4; /*0x56cbe2*/
  }
  while ( v10 == v5 ); /*0x56cbe7*/
  v76 = v7; /*0x56cbeb*/
  v11 = *((uint16_t *)a1 + 1); /*0x56cbef*/
  v78 = (uint16_t)v11; /*0x56cbf5*/
  if ( (unsigned short)v11 ) /*0x56cbf9*/
  {
    v12 = a1[1] - v7; /*0x56cc06*/
    if ( ((int)((IDA_HIDWORD(v12) ^ v12) - IDA_HIDWORD(v12)) < 2 || v74) && v11 != dword_ABDE8C && v11 != (uint16_t)aP2 ) /*0x56cc34*/
    {
      v13 = (uint16_t)aP2 | ((uint16_t)v11 << 16); /*0x56cc46*/
      v14 = **(unsigned int **)(&this->q0080); /*0x56cc5a*/
      v15 = *(unsigned int *)(v14 + 24 * (aP2 & 0xF | (16 * (v11 & 0xF))) + 16); /*0x56cc5c*/
      v16 = v14 + 24 * (aP2 & 0xF | (16 * (v11 & 0xF))); /*0x56cc60*/
      v17 = v15 - 1; /*0x56cc63*/
      v18 = *(unsigned int **)(v16 + 4); /*0x56cc68*/
      if ( v15 - 1 < 0 ) /*0x56cc6b*/
      {
  LABEL_12:
        v19 = *(unsigned int *)(v16 + 8); /*0x56cc77*/
        if ( v15 < v19 /*0x56cc99*/
          || (*(unsigned char *)(v16 + 13) || !v19)
          && (v20 = *(unsigned int *)(v16 + 20), v20 > 0)
          && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v16 + 8))(v16, v19 + v20, 0) )
        {
          v21 = *(unsigned int *)(v16 + 16); /*0x56cca0*/
          v22 = *(unsigned int *)(v16 + 4); /*0x56cca3*/
          *(unsigned int *)(v16 + 16) = v21 + 1; /*0x56cca9*/
          *(unsigned int *)(v22 + 8 * v21) = v13; /*0x56ccac*/
          *(unsigned int *)(v22 + 8 * v21 + 4) = v13; /*0x56ccaf*/
        }
      }
      else
      {
        while ( v13 != *v18 ) /*0x56cc6f*/
        {
          v18 += 2; /*0x56cc71*/
          if ( --v17 < 0 ) /*0x56cc75*/
            goto LABEL_12; /*0x56cc75*/
        }
      }
      v4 = a1; /*0x56ccb7*/
      dword_ABDE8C = v78; /*0x56ccbb*/
    }
  }
  if ( *v4 == v5 ) /*0x56ccca*/
  {
    v23 = v76; /*0x56ccd0*/
    do /*0x56ccfd*/
    {
      v24 = (unsigned short)(v8[1] - v23);
      if ( (int)((IDA_HIDWORD(v24) ^ v24) - IDA_HIDWORD(v24)) >= 4 ) /*0x56cce5*/
        break; /*0x56cce5*/
      *((unsigned short *)v8 + 1) = aP2; /*0x56cce9*/
      v23 = v8[1]; /*0x56cced*/
      v8 += 4; /*0x56ccf0*/
      v76 = v23; /*0x56ccf5*/
    }
    while ( *v8 == v5 ); /*0x56ccfd*/
  }
  v25 = *((uint16_t *)v8 + 1); /*0x56cd01*/
  v79 = (uint16_t)v25; /*0x56cd07*/
  if ( (unsigned short)v25 ) /*0x56cd0b*/
  {
    v26 = v8[1] - v76; /*0x56cd1c*/
    if ( ((int)((IDA_HIDWORD(v26) ^ v26) - IDA_HIDWORD(v26)) < 2 || v74) && v25 != dword_ABDE8C && v25 != (uint16_t)aP2 ) /*0x56cd4a*/
    {
      v27 = (uint16_t)aP2 | ((uint16_t)v25 << 16); /*0x56cd5c*/
      v28 = **(unsigned int **)(&this->q0080); /*0x56cd70*/
      v29 = *(unsigned int *)(v28 + 24 * (aP2 & 0xF | (16 * (v25 & 0xF))) + 16); /*0x56cd72*/
      v30 = v28 + 24 * (aP2 & 0xF | (16 * (v25 & 0xF))); /*0x56cd76*/
      v31 = v29 - 1; /*0x56cd79*/
      v32 = *(unsigned int **)(v30 + 4); /*0x56cd7e*/
      if ( v29 - 1 < 0 ) /*0x56cd81*/
      {
  LABEL_31:
        v33 = *(unsigned int *)(v30 + 8); /*0x56cd8d*/
        if ( v29 < v33 /*0x56cdaf*/
          || (*(unsigned char *)(v30 + 13) || !v33)
          && (v34 = *(unsigned int *)(v30 + 20), v34 > 0)
          && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v30 + 8))(v30, v33 + v34, 0) )
        {
          v35 = *(unsigned int *)(v30 + 16); /*0x56cdb6*/
          v36 = *(unsigned int *)(v30 + 4); /*0x56cdb9*/
          *(unsigned int *)(v30 + 16) = v35 + 1; /*0x56cdbf*/
          *(unsigned int *)(v36 + 8 * v35) = v27; /*0x56cdc2*/
          *(unsigned int *)(v36 + 8 * v35 + 4) = v27; /*0x56cdc5*/
        }
      }
      else
      {
        while ( v27 != *v32 ) /*0x56cd85*/
        {
          v32 += 2; /*0x56cd87*/
          if ( --v31 < 0 ) /*0x56cd8b*/
            goto LABEL_31; /*0x56cd8b*/
        }
      }
      dword_ABDE8C = v79; /*0x56cdcd*/
    }
  }
  v77 = ((v8 - a1) >> 2) - 1; /*0x56cde6*/
  v37 = a1 + 4; /*0x56cdec*/
  v82 = 0; /*0x56cdf2*/
  v83 = 0; /*0x56cdf6*/
  *(unsigned int *)aP3 = ((v8 - a1) >> 2) - 1; /*0x56cdff*/
  v38 = v8 - 4; /*0x56ce01*/
  v39 = this->q0F8 + this->u32_F4 + 1; /*0x56ce12*/
  v40 = 4 * v39 + 4; /*0x56ce16*/
  v39 *= 4; /*0x56ce1d*/
  v40 = v40; /*0x56ce20*/
  v41 = &v37[-v40]; /*0x56ce24*/
  v85 = (int)&v37[v39 - 4]; /*0x56ce2c*/
  v39 = v39; /*0x56ce34*/
  v84 = (unsigned int)&v38[v40]; /*0x56ce3b*/
  v87 = (unsigned int)&v38[-v39 + 4]; /*0x56ce41*/
  if ( (unsigned int)&v37[-v40] <= v87 )
  {
    while ( 1 )
    {
      v42 = *((uint16_t *)v41 + 1); /*0x56ce51*/
      if ( (unsigned int)v41 >= v87 - 4 )
        v43 = (int)(v41 == (uint8_t *)(v87 - 4) ? &v41[v39] : &v41[v39 - 4]);
      else
        v43 = (int)&v41[v40]; /*0x56ce60*/
      if ( *((unsigned short *)v41 + 1) ) /*0x56ce4f*/
        break; /*0x56ce4f*/
      if ( *v41 != v5 ) /*0x56ce86*/
        goto LABEL_62; /*0x56ce86*/
      v44 = v41[1] - *(uint8_t *)(v43 + 1); /*0x56ce98*/
      if ( (int)((IDA_HIDWORD(v44) ^ v44) - IDA_HIDWORD(v44)) >= 2 ) /*0x56cea0*/
        goto LABEL_62; /*0x56cea0*/
      v77 += Terrain::FloodFillConnectivity(v41, aP2, &v82); /*0x56cec0*/
      v41 += 4 * v82; /*0x56cec8*/
  LABEL_63:
      if ( (unsigned int)v41 > v87 ) /*0x56cf90*/
        goto LABEL_64; /*0x56cf90*/
    }
    if ( v42 != (uint16_t)aP2 && v42 != dword_ABDE8C ) /*0x56cee8*/
    {
      v45 = v41[1] - *(uint8_t *)(v43 + 1); /*0x56cefa*/
      if ( (int)((IDA_HIDWORD(v45) ^ v45) - IDA_HIDWORD(v45)) < 2 || v74 ) /*0x56cf0a*/
      {
        v46 = (uint16_t)aP2 | (v42 << 16); /*0x56cf16*/
        v47 = **(unsigned int **)(&this->q0080); /*0x56cf2a*/
        v48 = *(unsigned int *)(v47 + 24 * (aP2 & 0xF | (16 * (v42 & 0xF))) + 16); /*0x56cf2c*/
        v49 = v47 + 24 * (aP2 & 0xF | (16 * (v42 & 0xF))); /*0x56cf30*/
        v50 = v48 - 1; /*0x56cf33*/
        v51 = *(unsigned int **)(v49 + 4); /*0x56cf38*/
        if ( v48 - 1 < 0 ) /*0x56cf3b*/
        {
  LABEL_55:
          v52 = *(unsigned int *)(v49 + 8); /*0x56cf47*/
          if ( v48 < v52 /*0x56cf69*/
            || (*(unsigned char *)(v49 + 13) || !v52)
            && (v53 = *(unsigned int *)(v49 + 20), v53 > 0)
            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v49 + 8))(v49, v52 + v53, 0) )
          {
            v54 = *(unsigned int *)(v49 + 16); /*0x56cf70*/
            v55 = *(unsigned int *)(v49 + 4); /*0x56cf73*/
            *(unsigned int *)(v49 + 16) = v54 + 1; /*0x56cf79*/
            *(unsigned int *)(v55 + 8 * v54) = v46; /*0x56cf7c*/
            *(unsigned int *)(v55 + 8 * v54 + 4) = v46; /*0x56cf7f*/
          }
        }
        else
        {
          while ( v46 != *v51 ) /*0x56cf3f*/
          {
            v51 += 2; /*0x56cf41*/
            if ( --v50 < 0 ) /*0x56cf45*/
              goto LABEL_55; /*0x56cf45*/
          }
        }
        dword_ABDE8C = v42; /*0x56cf83*/
      }
    }
  LABEL_62:
    v41 += 4; /*0x56cf89*/
    goto LABEL_63; /*0x56cf89*/
  }
  LABEL_64:
  v56 = (uint8_t *)v85; /*0x56cf96*/
  v57 = v84; /*0x56cf9a*/
  if ( v85 <= v84 ) /*0x56cfa0*/
  {
    do /*0x56d0e6*/
    {
      v58 = *((uint16_t *)v56 + 1); /*0x56cfab*/
      if ( (unsigned int)v56 >= v57 - 4 ) /*0x56cfb3*/
      {
        v60 = v39; /*0x56cfbe*/
        if ( v56 != (uint8_t *)(v57 - 4) ) /*0x56cfc2*/
          v60 = v40; /*0x56cfc4*/
        v59 = (int)&v56[-v60]; /*0x56cfc8*/
      }
      else
      {
        v59 = (int)&v56[-v39 + 4]; /*0x56cfb9*/
      }
      if ( *((unsigned short *)v56 + 1) ) /*0x56cfa9*/
      {
        if ( v58 != (uint16_t)aP2 && v58 != dword_ABDE8C ) /*0x56d03c*/
        {
          v62 = v56[1] - *(uint8_t *)(v59 + 1); /*0x56d04e*/
          if ( (int)((IDA_HIDWORD(v62) ^ v62) - IDA_HIDWORD(v62)) < 2 || v74 ) /*0x56d05e*/
          {
            v63 = (uint16_t)aP2 | (v58 << 16); /*0x56d06a*/
            v64 = **(unsigned int **)(&this->q0080); /*0x56d07e*/
            v65 = *(unsigned int *)(v64 + 24 * (aP2 & 0xF | (16 * (v58 & 0xF))) + 16); /*0x56d080*/
            v66 = v64 + 24 * (aP2 & 0xF | (16 * (v58 & 0xF))); /*0x56d084*/
            v67 = v65 - 1; /*0x56d087*/
            v68 = *(unsigned int **)(v66 + 4); /*0x56d08c*/
            if ( v65 - 1 < 0 ) /*0x56d08f*/
            {
  LABEL_82:
              v69 = *(unsigned int *)(v66 + 8); /*0x56d09b*/
              if ( v65 < v69 /*0x56d0bd*/
                || (*(unsigned char *)(v66 + 13) || !v69)
                && (v70 = *(unsigned int *)(v66 + 20), v70 > 0)
                && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v66 + 8))(v66, v69 + v70, 0) )
              {
                v71 = *(unsigned int *)(v66 + 16); /*0x56d0c4*/
                v72 = *(unsigned int *)(v66 + 4); /*0x56d0c7*/
                *(unsigned int *)(v66 + 16) = v71 + 1; /*0x56d0cd*/
                *(unsigned int *)(v72 + 8 * v71) = v63; /*0x56d0d0*/
                *(unsigned int *)(v72 + 8 * v71 + 4) = v63; /*0x56d0d3*/
              }
            }
            else
            {
              while ( v63 != *v68 ) /*0x56d093*/
              {
                v68 += 2; /*0x56d095*/
                if ( --v67 < 0 ) /*0x56d099*/
                  goto LABEL_82; /*0x56d099*/
              }
            }
            dword_ABDE8C = v58; /*0x56d0d7*/
          }
        }
        v57 = v84; /*0x56d0dd*/
        v56 += 4; /*0x56d0e1*/
      }
      else if ( *v56 == v5 /*0x56cfef*/
             && (v61 = v56[1] - *(uint8_t *)(v59 + 1), (int)((IDA_HIDWORD(v61) ^ v61) - IDA_HIDWORD(v61)) < 2) )
      {
        v77 += Terrain::FloodFillConnectivity(v56, aP2, &v83); /*0x56d00f*/
        v56 += 4 * v83; /*0x56d013*/
      }
      else
      {
        v56 += 4; /*0x56d01c*/
      }
    }
    while ( (unsigned int)v56 <= v57 ); /*0x56d0e6*/
  }
  return v77; /*0x56d0f0*/
}
}
// 0x570050
namespace gamemd {
AbstractClass * * Terrain::ProcessCellModification(IUnknown * aP1)
{
  int16_t *v2; // ebp
  int v3; // edi
  int v4; // esi
  int16_t v5; // cx
  int v6; // eax
  int16_t v7; // si
  unsigned int v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  char v11; // bl
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int *v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int *v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  bool v26; // sf
  int v27; // eax
  unsigned int *v28; // eax
  int v29; // eax
  int v30; // esi
  int v31; // ebp
  int v32; // edi
  unsigned int v33; // eax
  unsigned int *v34; // eax
  unsigned int *v35; // edx
  int v36; // eax
  unsigned int v37; // eax
  unsigned int *v38; // eax
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int *v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int *v44; // eax
  int v45; // ecx
  unsigned int v46; // eax
  unsigned int *v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // esi
  int v51; // eax
  unsigned int v53; // eax
  unsigned int *v54; // eax
  unsigned int v55; // eax
  unsigned int *v56; // eax
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int *v60; // eax
  int v61; // ecx
  unsigned int v62; // eax
  unsigned int *v63; // eax
  int v64; // ecx
  unsigned int v65; // eax
  unsigned int *v66; // eax
  int v67; // eax
  int v68; // edi
  int v69; // esi
  int v70; // eax
  unsigned int v71; // eax
  unsigned int *v72; // eax
  int v74; // [esp+14h] [ebp-4Ch] BYREF
  int i; // [esp+18h] [ebp-48h] BYREF
  int v76; // [esp+1Ch] [ebp-44h] BYREF
  int v77; // [esp+20h] [ebp-40h] BYREF
  int16_t v78[4]; // [esp+24h] [ebp-3Ch] BYREF
  int v79; // [esp+2Ch] [ebp-34h] BYREF
  int16_t v80[4]; // [esp+30h] [ebp-30h] BYREF
  int v81; // [esp+38h] [ebp-28h] BYREF
  int v82; // [esp+3Ch] [ebp-24h]
  int v83; // [esp+40h] [ebp-20h]
  int v84; // [esp+44h] [ebp-1Ch]
  void **v85; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  int v87; // [esp+50h] [ebp-10h]
  char v88; // [esp+55h] [ebp-Bh]
  int v89; // [esp+58h] [ebp-8h]
  int v90; // [esp+5Ch] [ebp-4h]

  aP1 = aP1; /*0x570055*/
  v3 = -2; /*0x570061*/
  do /*0x5700b1*/
  {
    v4 = -2; /*0x570066*/
    do /*0x5700ab*/
    {
      v5 = aP1[1] + v4; /*0x570075*/
      IDA_LOWORD(aP1) = *aP1 + v3; /*0x570079*/
      IDA_HIWORD(aP1) = v5; /*0x57007e*/
      i = (int)aP1; /*0x570091*/
      v6 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&i) + 17); /*0x57009a*/
      if ( v6 >= 74 && v6 <= 101 ) /*0x5700a5*/
      {
        v7 = aP1[1] + v4; /*0x5700b9*/
        IDA_LOWORD(aP1) = *aP1 + v3; /*0x5700c1*/
        IDA_HIWORD(aP1) = v7; /*0x5700c6*/
        CellClass::ApplyCliffTileModifications(&aP1); /*0x5700d6*/
        return; /*0x5700e2*/
      }
      ++v4; /*0x5700a7*/
    }
    while ( v4 < 3 ); /*0x5700ab*/
    ++v3; /*0x5700ad*/
  }
  while ( v3 < 3 ); /*0x5700b1*/
  v8 = *aP1 + (aP1[1] << 9); /*0x5700f0*/
  if ( v8 < 0x40000 && (v9 = *(unsigned int **)(g_Shroud_CellArray + 4 * v8)) != 0 ) /*0x570106*/
  {
    v10 = v9; /*0x570108*/
  }
  else
  {
    v10 = g_CellClassArray; /*0x57010f*/
    g_Map_GlobalCellIndex = *(unsigned int *)aP1; /*0x570114*/
  }
  v11 = 0; /*0x57011f*/
  if ( (v10[80] & 0x500) == 0 ) /*0x570124*/
  {
    for ( i = 0; i < 8; ++i ) /*0x57012a*/
    {
      v12 = *CellStruct::Add(aP1, &v77, (unsigned short *)(4 * (v11 & 7) + 9041544)); /*0x570147*/
      v76 = v12; /*0x570149*/
      aP1 = (int16_t *)v12; /*0x57014d*/
      v13 = (int16_t)v12 + (IDA_SHIWORD(v12) << 9); /*0x57015c*/
      if ( v13 < 0x40000 && (v14 = *(unsigned int **)(g_Shroud_CellArray + 4 * v13)) != 0 ) /*0x570172*/
      {
        v10 = v14; /*0x570174*/
      }
      else
      {
        g_Map_GlobalCellIndex = v12; /*0x570178*/
        v10 = g_CellClassArray; /*0x57017e*/
      }
      if ( (v10[80] & 0x500) != 0 ) /*0x57018c*/
        break; /*0x57018c*/
      v15 = *CellStruct::Add(&aP1, v78, (unsigned short *)(4 * (v11 & 7) + 9041544)); /*0x5701a1*/
      v76 = v15; /*0x5701a3*/
      aP1 = (int16_t *)v15; /*0x5701a7*/
      v16 = (int16_t)v15 + (IDA_SHIWORD(v15) << 9); /*0x5701b6*/
      if ( v16 < 0x40000 && (v17 = *(unsigned int **)(g_Shroud_CellArray + 4 * v16)) != 0 ) /*0x5701cc*/
      {
        v10 = v17; /*0x5701ce*/
      }
      else
      {
        g_Map_GlobalCellIndex = v15; /*0x5701d2*/
        v10 = g_CellClassArray; /*0x5701d8*/
      }
      if ( (v10[80] & 0x500) != 0 ) /*0x5701e6*/
        break; /*0x5701e6*/
      v18 = *CellStruct::Add(&aP1, &v79, (unsigned short *)(4 * (v11 & 7) + 9041544)); /*0x5701f7*/
      v76 = v18; /*0x5701f9*/
      aP1 = (int16_t *)v18; /*0x5701fd*/
      v19 = (int16_t)v18 + (IDA_SHIWORD(v18) << 9); /*0x57020c*/
      if ( v19 < 0x40000 && (v20 = *(unsigned int **)(g_Shroud_CellArray + 4 * v19)) != 0 ) /*0x570222*/
      {
        v10 = v20; /*0x570224*/
      }
      else
      {
        g_Map_GlobalCellIndex = v18; /*0x570228*/
        v10 = g_CellClassArray; /*0x57022e*/
      }
      if ( (v10[80] & 0x500) != 0 ) /*0x57023c*/
        break; /*0x57023c*/
      v11 = (v11 + 1) & 7; /*0x570243*/
    }
  }
  v21 = v10[80]; /*0x570254*/
  if ( (v21 & 0x100) != 0 || (v21 & 0x400) != 0 )
  {
    if ( (v10[80] & 0x100) != 0 )
    {
      if ( (v21 & 0x80u) == 0 ) /*0x570273*/
        v22 = *(unsigned int *)(v10[11] + 36); /*0x570280*/
      else
        v22 = v10[9]; /*0x570275*/
    }
    else
    {
      i = 0; /*0x57028d*/
      v23 = (v21 & 0x800) != 0 ? 4 : 2;
      v74 = v10[9]; /*0x5702a6*/
      while ( 1 ) /*0x5702c3*/
      {
        v24 = *CellStruct::Add(&v74, &v79, (unsigned short *)(4 * (v23 & 7) + 9041544)); /*0x5702c3*/
        v76 = v24; /*0x5702c5*/
        v25 = IDA_SHIWORD(v24) << 9; /*0x5702d4*/
        v26 = (int16_t)v24 + v25 < 0; /*0x5702d7*/
        v27 = (int16_t)v24 + v25; /*0x5702d7*/
        v74 = v24; /*0x5702d9*/
        if ( v26 || v27 >= 0x40000 || (v28 = *(unsigned int **)(g_Shroud_CellArray + 4 * v27)) == 0 ) /*0x5702f1*/
        {
          g_Map_GlobalCellIndex = v24; /*0x5702f3*/
          v28 = g_CellClassArray; /*0x5702f9*/
        }
        if ( (v28[80] & 0x400) == 0 ) /*0x570307*/
          break; /*0x570307*/
        if ( ++i >= 4 ) /*0x570315*/
          return; /*0x570315*/
      }
      v29 = ((unsigned char)v23 - 4) & 7; /*0x570327*/
      IDA_LOWORD(i) = IDA_LOWORD(Direction_X_Offsets[v29]) + v24; /*0x57033a*/
      IDA_HIWORD(i) = IDA_HIWORD(v24) + IDA_HIWORD(Direction_X_Offsets[v29]); /*0x57034a*/
      v76 = i; /*0x570358*/
      v22 = *CellStruct::Add(&v76, &v79, (unsigned short *)(4 * v29 + 9041544)); /*0x570361*/
    }
    v74 = v22; /*0x570363*/
    v30 = (v10[80] & 0x800) != 0 ? 6 : 0;
    *(unsigned int *)v80 = v22; /*0x570382*/
    IDA_LOBYTE(aP1) = 0; /*0x570386*/
    VectorClass::CellConstructor(&v85, 0, 0); /*0x57038b*/
    v31 = *(unsigned int *)v80; /*0x570390*/
    v90 = 10; /*0x57039c*/
    v89 = 0; /*0x5703a4*/
    while ( 1 ) /*0x5703ba*/
    {
      v32 = v80[1] + (int16_t)v31; /*0x5703ba*/
      if ( v32 <= g_Cell_PositionLUT /*0x5703e8*/
        || (int16_t)v31 - v80[1] >= g_Cell_PositionLUT
        || v80[1] - (int16_t)v31 >= g_Cell_PositionLUT
        || v32 > g_Cell_PositionLUT + 2 * g_CellPositionOffset )
      {
        goto LABEL_139; /*0x5703e8*/
      }
      v33 = (int16_t)v31 + (v80[1] << 9); /*0x5703f1*/
      if ( !*(unsigned int *)(*(&this->referenceCount9) + 4 * v33) ) /*0x570401*/
        goto LABEL_74; /*0x570401*/
      if ( v33 < 0x40000 && (v34 = *(unsigned int **)(g_Shroud_CellArray + 4 * v33)) != 0 ) /*0x57041d*/
      {
        v35 = v34; /*0x57041f*/
      }
      else
      {
        g_Map_GlobalCellIndex = v31; /*0x570423*/
        v35 = g_CellClassArray; /*0x570429*/
      }
      v36 = v35[14] - g_TerrainBridgeIndex + 1; /*0x57043f*/
      if ( (v36 == dword_ABC2B4 || v36 == dword_AA1130) && *((unsigned char *)v35 + 282) == 8 ) /*0x570453*/
      {
        Cell::UpdateTileType(v80, 0, 0); /*0x570511*/
        v37 = v80[0] + (v80[1] << 9); /*0x570525*/
        if ( v37 >= 0x40000 || (v38 = *(unsigned int **)(g_Shroud_CellArray + 4 * v37)) == 0 ) /*0x57053b*/
        {
          g_Map_GlobalCellIndex = *(unsigned int *)v80; /*0x57053d*/
          v38 = g_CellClassArray; /*0x570543*/
        }
        DestroyCliffMap((int)v38, 2, &v81); /*0x57054f*/
        goto LABEL_109; /*0x57054f*/
      }
      if ( (v36 == g_TerrainSoundTable2 /*0x570486*/
         || v36 == g_TerrainSoundTable2 + 3
         || v36 == g_TerrainSoundTable2 + 4
         || v36 == g_TerrainSoundTable2 + 1
         || v36 == g_TerrainSoundTable2 + 2)
        && *((unsigned char *)v35 + 282) == 5 )
      {
        break; /*0x570486*/
      }
      if ( (v36 == dword_AA1548 || v36 == dword_AA0740) && *((unsigned char *)v35 + 282) == 12 ) /*0x5704a3*/
      {
        Cell::UpdateTileType(v80, 0, 0); /*0x5707b7*/
        v55 = v80[0] + (v80[1] << 9); /*0x5707cb*/
        if ( v55 >= 0x40000 || (v56 = *(unsigned int **)(g_Shroud_CellArray + 4 * v55)) == 0 ) /*0x5707e1*/
        {
          g_Map_GlobalCellIndex = *(unsigned int *)v80; /*0x5707e3*/
          v56 = g_CellClassArray; /*0x5707e9*/
        }
        DestroyCliffMap((int)v56, 4, &v81); /*0x5707f8*/
  LABEL_109:
        Cell::CreateCrater(v81, v82, v83, v84, 0); /*0x5707fd*/
        goto LABEL_139; /*0x57082a*/
      }
      if ( (v36 == g_TerrainSoundConfig /*0x5704d6*/
         || v36 == g_TerrainSoundConfig + 3
         || v36 == g_TerrainSoundConfig + 4
         || v36 == g_TerrainSoundConfig + 1
         || v36 == g_TerrainSoundConfig + 2)
        && *((unsigned char *)v35 + 282) == 7 )
      {
        if ( v36 != g_TerrainSoundConfig + 4 ) /*0x570834*/
        {
          goto LABEL_133; /*0x5709e9*/
        }
        Cell::SetTileType(v80, g_TerrainSoundConfig + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570850*/
        v58 = *CellStruct::Add(v80, &aP1, Direction_X_Offsets); /*0x570868*/
        aP1 = (int16_t *)v58; /*0x57086a*/
        *(unsigned int *)v78 = v58; /*0x57086e*/
        v59 = (int16_t)v58 + (IDA_SHIWORD(v58) << 9); /*0x57087d*/
        if ( v59 >= 0x40000 || (v60 = *(unsigned int **)(g_Shroud_CellArray + 4 * v59)) == 0 ) /*0x570893*/
        {
          g_Map_GlobalCellIndex = v58; /*0x570895*/
          v60 = g_CellClassArray; /*0x57089b*/
        }
        *((unsigned char *)v60 + 283) += 4; /*0x5708ae*/
        v61 = *CellStruct::Add(v78, &v79, &g_CellDirectionOffsets); /*0x5708c2*/
        aP1 = (int16_t *)v61; /*0x5708c4*/
        v62 = (int16_t)v61 + (IDA_SHIWORD(v61) << 9); /*0x5708d3*/
        if ( v62 >= 0x40000 || (v63 = *(unsigned int **)(g_Shroud_CellArray + 4 * v62)) == 0 ) /*0x5708e9*/
        {
          g_Map_GlobalCellIndex = v61; /*0x5708eb*/
          v63 = g_CellClassArray; /*0x5708f1*/
        }
        *((unsigned char *)v63 + 283) += 4; /*0x570904*/
        v64 = *CellStruct::Add(v78, &v79, &Direction_Y_Offsets); /*0x570918*/
        aP1 = (int16_t *)v64; /*0x57091a*/
        v65 = (int16_t)v64 + (IDA_SHIWORD(v64) << 9); /*0x570929*/
        if ( v65 >= 0x40000 || (v66 = *(unsigned int **)(g_Shroud_CellArray + 4 * v65)) == 0 ) /*0x57093f*/
        {
          g_Map_GlobalCellIndex = v64; /*0x570941*/
          v66 = g_CellClassArray; /*0x570947*/
        }
        *((unsigned char *)v66 + 283) += 4; /*0x570957*/
        IDA_LOBYTE(v78); /*0x570967*/
        v67 = v87; /*0x57096b*/
        v68 = 0; /*0x57096f*/
        while ( 1 ) /*0x570971*/
        {
          v69 = -2; /*0x570971*/
          do /*0x5709db*/
          {
            IDA_LOWORD(i) = v69 + v78[0]; /*0x570983*/
            IDA_HIWORD(i) = v68 + v78[1]; /*0x570988*/
            if ( v89 < v67 ) /*0x570993*/
              goto LABEL_127; /*0x570993*/
            if ( (v88 || !v67) && v90 > 0 ) /*0x5709a7*/
            {
              if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v85[2])(&v85, v90 + v67, 0) ) /*0x5709b6*/
              {
  LABEL_127:
                v70 = v89++; /*0x5709bd*/
                *((unsigned int *)Block + v70) = i; /*0x5709d0*/
              }
              v67 = v87; /*0x5709d3*/
            }
            ++v69; /*0x5709d7*/
          }
          while ( v69 < 3 ); /*0x5709db*/
          if ( ++v68 >= 2 ) /*0x5709e1*/
          {
            IDA_LOWORD(v31) = v80[0]; /*0x5709e3*/
  LABEL_133:
            IDA_LOWORD(i) = v31; /*0x5709ed*/
            IDA_HIWORD(i) = v80[1] - 2; /*0x5709fd*/
            v76 = i; /*0x570a06*/
            Terrain::ProcessCellModification(&v76); /*0x570a0d*/
            v71 = v80[0] + (v80[1] << 9); /*0x570a21*/
            if ( v71 >= 0x40000 || (v72 = *(unsigned int **)(g_Shroud_CellArray + 4 * v71)) == 0 ) /*0x570a37*/
            {
              g_Map_GlobalCellIndex = *(unsigned int *)v80; /*0x570a39*/
              v72 = g_CellClassArray; /*0x570a3f*/
            }
            DestroyCliffMap(this, (int)v72, 4, &v81); /*0x570a4e*/
            Cell::CreateCrater(v81, v82, v83, v84, 0); /*0x570a7b*/
  LABEL_137:
            if ( (unsigned char)aP1 ) /*0x570a8a*/
              Terrain::ConnectivityGraph(this); /*0x570a8e*/
  LABEL_139:
            if ( v89 > 0 ) /*0x570a99*/
              LayerClass::Update_Pathfinding_2((int)&v85); /*0x570aa4*/
            if ( Block ) /*0x570ab7*/
            {
              if ( v88 ) /*0x570abf*/
                RA2_OPDEL(Block); /*0x570ac2*/
            }
            return; /*0x570ac2*/
          }
        }
      }
  LABEL_74:
      v31 = *CellStruct::Add(v80, &v79, (unsigned short *)(4 * (v30 & 7) + 9041544)); /*0x5704dc*/
      *(unsigned int *)v80 = v31; /*0x5704f9*/
    }
    if ( v36 != g_TerrainSoundTable2 + 4 ) /*0x570559*/
      goto LABEL_101; /*0x570559*/
    Cell::SetTileType(v80, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570573*/
    v39 = *CellStruct::Add(v80, &aP1, &Direction_Y_Offsets); /*0x57058b*/
    aP1 = (int16_t *)v39; /*0x57058d*/
    *(unsigned int *)v78 = v39; /*0x570591*/
    v40 = (int16_t)v39 + (IDA_SHIWORD(v39) << 9); /*0x5705a0*/
    if ( v40 >= 0x40000 || (v41 = *(unsigned int **)(g_Shroud_CellArray + 4 * v40)) == 0 ) /*0x5705b6*/
    {
      g_Map_GlobalCellIndex = v39; /*0x5705b8*/
      v41 = g_CellClassArray; /*0x5705be*/
    }
    *((unsigned char *)v41 + 283) += 4; /*0x5705d2*/
    v42 = *CellStruct::Add(v78, &v79, Direction_X_Offsets); /*0x5705e6*/
    aP1 = (int16_t *)v42; /*0x5705e8*/
    v43 = (int16_t)v42 + (IDA_SHIWORD(v42) << 9); /*0x5705f7*/
    if ( v43 >= 0x40000 || (v44 = *(unsigned int **)(g_Shroud_CellArray + 4 * v43)) == 0 ) /*0x57060d*/
    {
      g_Map_GlobalCellIndex = v42; /*0x57060f*/
      v44 = g_CellClassArray; /*0x570615*/
    }
    *((unsigned char *)v44 + 283) += 4; /*0x570627*/
    v45 = *CellStruct::Add(v78, &v79, &g_DirectionOffsetPool); /*0x57063b*/
    aP1 = (int16_t *)v45; /*0x57063d*/
    v46 = (int16_t)v45 + (IDA_SHIWORD(v45) << 9); /*0x57064c*/
    if ( v46 >= 0x40000 || (v47 = *(unsigned int **)(g_Shroud_CellArray + 4 * v46)) == 0 ) /*0x570662*/
    {
      g_Map_GlobalCellIndex = v45; /*0x570664*/
      v47 = g_CellClassArray; /*0x57066a*/
    }
    *((unsigned char *)v47 + 283) += 4; /*0x57067b*/
    IDA_LOBYTE(v78); /*0x57068b*/
    v48 = v87; /*0x57068f*/
    v49 = 0; /*0x570693*/
  LABEL_90:
    v50 = -2; /*0x570695*/
    while ( 1 ) /*0x5706a7*/
    {
      IDA_LOWORD(i) = v49 + v78[0]; /*0x5706a7*/
      IDA_HIWORD(i) = v50 + v78[1]; /*0x5706ac*/
      if ( v89 < v48 ) /*0x5706b7*/
        goto LABEL_96; /*0x5706b7*/
      if ( !v88 && v48 || v90 <= 0 ) /*0x5706cb*/
        goto LABEL_98; /*0x5706cb*/
      if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v85[2])(&v85, v90 + v48, 0) ) /*0x5706da*/
      {
  LABEL_96:
        v51 = v89++; /*0x5706e9*/
        *((unsigned int *)Block + v51) = i; /*0x5706f4*/
      }
      v48 = v87; /*0x5706f7*/
  LABEL_98:
      if ( ++v50 >= 3 ) /*0x5706ff*/
      {
        if ( ++v49 >= 2 ) /*0x570705*/
        {
          IDA_LOWORD(v31) = v80[0]; /*0x570707*/
  LABEL_101:
          IDA_HIWORD(i) = v80[1]; /*0x570717*/
          IDA_LOWORD(i) = v31 - 2; /*0x57071c*/
          v76 = i; /*0x570729*/
          Terrain::ProcessCellModification(&v76); /*0x570730*/
          v53 = v80[0] + (v80[1] << 9); /*0x570744*/
          if ( v53 >= 0x40000 || (v54 = *(unsigned int **)(g_Shroud_CellArray + 4 * v53)) == 0 ) /*0x57075a*/
          {
            g_Map_GlobalCellIndex = *(unsigned int *)v80; /*0x57075c*/
            v54 = g_CellClassArray; /*0x570762*/
          }
          DestroyCliffMap((int)v54, 2, &v81); /*0x570771*/
          Cell::CreateCrater(v81, v82, v83, v84, 0); /*0x57079e*/
          goto LABEL_137; /*0x5707a3*/
        }
        goto LABEL_90; /*0x570705*/
      }
    }
  }
}
}
// 0x573540
namespace gamemd {
AbstractClass * * Terrain::RecursiveModify(IUnknown * aP1)
{
  int v3; // edi
  int v4; // esi
  int16_t v5; // cx
  int v6; // eax
  int16_t v7; // si
  unsigned int v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // edx
  char v11; // di
  int i; // ebp
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int *v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ebp
  int16_t v25; // di
  int v26; // ecx
  bool v27; // sf
  int v28; // ecx
  unsigned int *v29; // ecx
  int v30; // eax
  int16_t v31; // cx
  unsigned short *v32; // eax
  int16_t v33; // si
  int16_t v34; // di
  int16_t v35; // cx
  int v36; // esi
  int v37; // ebx
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int *v41; // eax
  unsigned int *v42; // edx
  int v43; // eax
  unsigned int v44; // eax
  unsigned int *v45; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  unsigned int *v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  unsigned int *v53; // eax
  int v54; // ecx
  unsigned int v55; // eax
  unsigned int *v56; // eax
  int v57; // eax
  int v58; // edi
  int v59; // esi
  int v60; // eax
  unsigned int v61; // eax
  unsigned int *v62; // eax
  unsigned int v63; // eax
  unsigned int *v64; // eax
  int v66; // ecx
  unsigned int v67; // eax
  unsigned int *v68; // eax
  int v69; // ecx
  unsigned int v70; // eax
  unsigned int *v71; // eax
  int v72; // ecx
  unsigned int v73; // eax
  unsigned int *v74; // eax
  int v75; // eax
  int v76; // edi
  int v77; // esi
  int v78; // eax
  unsigned int v79; // eax
  unsigned int *v80; // eax
  int v82; // [esp+14h] [ebp-44h] BYREF
  int16_t v83[4]; // [esp+18h] [ebp-40h] BYREF
  int v84; // [esp+20h] [ebp-38h] BYREF
  int v85; // [esp+24h] [ebp-34h] BYREF
  int16_t v86[4]; // [esp+28h] [ebp-30h] BYREF
  int v87; // [esp+30h] [ebp-28h] BYREF
  int v88; // [esp+34h] [ebp-24h]
  int v89; // [esp+38h] [ebp-20h]
  int v90; // [esp+3Ch] [ebp-1Ch]
  void **v91; // [esp+40h] [ebp-18h] BYREF
  void *Block; // [esp+44h] [ebp-14h]
  int v93; // [esp+48h] [ebp-10h]
  char v94; // [esp+4Dh] [ebp-Bh]
  int v95; // [esp+50h] [ebp-8h]
  int v96; // [esp+54h] [ebp-4h]

  v2 = (int16_t *)aP1; /*0x573544*/
  v3 = -2; /*0x573551*/
  do /*0x5735a4*/
  {
    v4 = -2; /*0x573556*/
    do /*0x57359e*/
    {
      v5 = v2[1] + v4; /*0x573564*/
      IDA_LOWORD(aP1) = *v2 + v3; /*0x573568*/
      IDA_HIWORD(aP1) = v5; /*0x57356d*/
      v84 = aP1; /*0x573580*/
      v6 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v84) + 17); /*0x573589*/
      if ( v6 >= 205 && v6 <= 232 ) /*0x573598*/
      {
        v7 = v2[1] + v4; /*0x5735ab*/
        IDA_LOWORD(aP1) = *v2 + v3; /*0x5735b3*/
        IDA_HIWORD(aP1) = v7; /*0x5735b8*/
        CellClass::ApplyTileMod58(&aP1); /*0x5735c8*/
        return; /*0x5735d4*/
      }
      ++v4; /*0x57359a*/
    }
    while ( v4 < 3 ); /*0x57359e*/
    ++v3; /*0x5735a0*/
  }
  while ( v3 < 3 ); /*0x5735a4*/
  v8 = *v2 + (v2[1] << 9); /*0x5735e1*/
  if ( v8 < 0x40000 && (v9 = *(unsigned int **)(g_Shroud_CellArray + 4 * v8)) != 0 ) /*0x5735f7*/
  {
    v10 = v9; /*0x5735f9*/
  }
  else
  {
    v10 = g_CellClassArray; /*0x5735ff*/
    g_Map_GlobalCellIndex = *(unsigned int *)v2; /*0x573604*/
  }
  v11 = 0; /*0x57360f*/
  if ( (v10[80] & 0x500) == 0 ) /*0x573614*/
  {
    for ( i = 0; i < 8; ++i ) /*0x57361a*/
    {
      v13 = *CellStruct::Add(v2, &v85, (unsigned short *)(4 * (v11 & 7) + 9041544)); /*0x573635*/
      v84 = v13; /*0x573637*/
      aP1 = v13; /*0x57363b*/
      v14 = (int16_t)v13 + (IDA_SHIWORD(v13) << 9); /*0x57364a*/
      if ( v14 < 0x40000 && (v15 = *(unsigned int **)(g_Shroud_CellArray + 4 * v14)) != 0 ) /*0x573660*/
      {
        v10 = v15; /*0x573662*/
      }
      else
      {
        g_Map_GlobalCellIndex = v13; /*0x573666*/
        v10 = g_CellClassArray; /*0x57366c*/
      }
      if ( (v10[80] & 0x500) != 0 ) /*0x57367a*/
        break; /*0x57367a*/
      v16 = *CellStruct::Add(&aP1, v83, (unsigned short *)(4 * (v11 & 7) + 9041544)); /*0x57368f*/
      v84 = v16; /*0x573691*/
      aP1 = v16; /*0x573695*/
      v17 = (int16_t)v16 + (IDA_SHIWORD(v16) << 9); /*0x5736a4*/
      if ( v17 < 0x40000 && (v18 = *(unsigned int **)(g_Shroud_CellArray + 4 * v17)) != 0 ) /*0x5736ba*/
      {
        v10 = v18; /*0x5736bc*/
      }
      else
      {
        g_Map_GlobalCellIndex = v16; /*0x5736c0*/
        v10 = g_CellClassArray; /*0x5736c6*/
      }
      if ( (v10[80] & 0x500) != 0 ) /*0x5736d4*/
        break; /*0x5736d4*/
      v19 = *CellStruct::Add(&aP1, &v82, (unsigned short *)(4 * (v11 & 7) + 9041544)); /*0x5736e5*/
      v84 = v19; /*0x5736e7*/
      aP1 = v19; /*0x5736eb*/
      v20 = (int16_t)v19 + (IDA_SHIWORD(v19) << 9); /*0x5736fa*/
      if ( v20 < 0x40000 && (v21 = *(unsigned int **)(g_Shroud_CellArray + 4 * v20)) != 0 ) /*0x573710*/
      {
        v10 = v21; /*0x573712*/
      }
      else
      {
        g_Map_GlobalCellIndex = v19; /*0x573716*/
        v10 = g_CellClassArray; /*0x57371c*/
      }
      if ( (v10[80] & 0x500) != 0 ) /*0x57372a*/
        break; /*0x57372a*/
      v11 = (v11 + 1) & 7; /*0x57372d*/
    }
  }
  v22 = v10[80]; /*0x57373a*/
  if ( (v22 & 0x100) != 0 || (v22 & 0x400) != 0 )
  {
    if ( (v10[80] & 0x100) != 0 )
    {
      if ( (v22 & 0x80u) == 0 ) /*0x573759*/
        v23 = *(unsigned int *)(v10[11] + 36); /*0x573766*/
      else
        v23 = v10[9]; /*0x57375b*/
    }
    else
    {
      v24 = v10[9]; /*0x573773*/
      *(unsigned int *)v83 = v24; /*0x57377a*/
      v84 = 0; /*0x573781*/
      v85 = (v22 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x5737a2*/
      {
        v25 = IDA_HIWORD(Direction_X_Offsets[v85 & 7]) + v83[1]; /*0x5737a2*/
        IDA_LOWORD(v82) = IDA_LOWORD(Direction_X_Offsets[v85 & 7]) + v24; /*0x5737af*/
        IDA_HIWORD(v82) = v25; /*0x5737b4*/
        IDA_LOWORD(v24) = v82; /*0x5737b9*/
        v26 = v25 << 9; /*0x5737bd*/
        v27 = (int16_t)v82 + v26 < 0; /*0x5737c0*/
        v28 = (int16_t)v82 + v26; /*0x5737c0*/
        *(unsigned int *)v83 = v82; /*0x5737c2*/
        if ( v27 || v28 >= 0x40000 || (v29 = *(unsigned int **)(g_Shroud_CellArray + 4 * v28)) == 0 ) /*0x5737db*/
        {
          g_Map_GlobalCellIndex = v82; /*0x5737e1*/
          v29 = g_CellClassArray; /*0x5737e7*/
        }
        if ( (v29[80] & 0x400) == 0 ) /*0x5737f5*/
          break; /*0x5737f5*/
        if ( ++v84 >= 4 ) /*0x573803*/
          return; /*0x573803*/
      }
      v30 = ((unsigned char)v85 - 4) & 7; /*0x573819*/
      v31 = Direction_X_Offsets[v30]; /*0x57381c*/
      v32 = (unsigned short *)(4 * v30 + 9041544); /*0x573824*/
      v33 = v25 + v32[1]; /*0x573832*/
      v34 = v82 + v31 + *v32; /*0x573838*/
      v35 = v32[1]; /*0x57383b*/
      IDA_LOWORD(v84) = v34; /*0x573842*/
      IDA_HIWORD(v84) = v33 + v35; /*0x573847*/
      v23 = v84; /*0x57384c*/
    }
    v36 = (v10[80] & 0x800) != 0 ? 6 : 0;
    *(unsigned int *)v86 = v23; /*0x57386b*/
    VectorClass::CellConstructor(&v91, 0, 0); /*0x57386f*/
    v37 = *(unsigned int *)v86; /*0x573874*/
    v38 = *(&this->referenceCount3); /*0x57387f*/
    v96 = 10; /*0x57388f*/
    v95 = 0; /*0x573897*/
    IDA_LOBYTE(aP1) = 0; /*0x57389f*/
    if ( v86[0] < v38 ) /*0x5738a4*/
      goto LABEL_141; /*0x5738a4*/
    while ( 1 ) /*0x5738aa*/
    {
      if ( (int16_t)v37 > v38 + *(&this->referenceCount5) ) /*0x5738bb*/
        goto LABEL_141; /*0x5738bb*/
      v39 = *(&this->referenceCount4); /*0x5738ca*/
      if ( v86[1] < v39 || v86[1] > v39 + *(&this->referenceCount6) ) /*0x5738e6*/
        goto LABEL_141; /*0x5738e6*/
      v40 = (int16_t)v37 + (v86[1] << 9); /*0x5738ef*/
      if ( *(unsigned int *)(*(&this->referenceCount9) + 4 * v40) ) /*0x5738fb*/
      {
        if ( v40 < 0x40000 && (v41 = *(unsigned int **)(g_Shroud_CellArray + 4 * v40)) != 0 ) /*0x57391b*/
        {
          v42 = v41; /*0x57391d*/
        }
        else
        {
          g_Map_GlobalCellIndex = v37; /*0x573921*/
          v42 = g_CellClassArray; /*0x573927*/
        }
        v43 = v42[14] - g_Cell_BuildabilityLUT + 1; /*0x57393d*/
        if ( (v43 == dword_ABC2B4 || v43 == dword_AA1130) && *((unsigned char *)v42 + 282) == 8 ) /*0x573951*/
        {
          Cell::UpdateTileType(v86, 0, 0); /*0x573a26*/
          v44 = v86[0] + (v86[1] << 9); /*0x573a3a*/
          if ( v44 >= 0x40000 || (v45 = *(unsigned int **)(g_Shroud_CellArray + 4 * v44)) == 0 ) /*0x573a50*/
          {
            g_Map_GlobalCellIndex = *(unsigned int *)v86; /*0x573a52*/
            v45 = g_CellClassArray; /*0x573a58*/
          }
          Terrain::PlaceCliffs((int)v45, 2, &v87); /*0x573a64*/
          goto LABEL_111; /*0x573a64*/
        }
        if ( (v43 == g_TerrainSoundTable2 /*0x573984*/
           || v43 == g_TerrainSoundTable2 + 3
           || v43 == g_TerrainSoundTable2 + 4
           || v43 == g_TerrainSoundTable2 + 1
           || v43 == g_TerrainSoundTable2 + 2)
          && *((unsigned char *)v42 + 282) == 5 )
        {
          if ( v43 != g_TerrainSoundTable2 + 4 ) /*0x573a6e*/
          {
  LABEL_103:
            IDA_LOWORD(v84) = v37 - 2; /*0x573c32*/
            IDA_HIWORD(v84) = v86[1]; /*0x573c3f*/
            v85 = v84; /*0x573c4c*/
            Terrain::RecursiveModify(&v85); /*0x573c53*/
            v61 = v86[0] + (v86[1] << 9); /*0x573c67*/
            if ( v61 >= 0x40000 || (v62 = *(unsigned int **)(g_Shroud_CellArray + 4 * v61)) == 0 ) /*0x573c7d*/
            {
              g_Map_GlobalCellIndex = *(unsigned int *)v86; /*0x573c7f*/
              v62 = g_CellClassArray; /*0x573c85*/
            }
            Terrain::PlaceCliffs(this, (int)v62, 2, &v87); /*0x573c94*/
            Cell::CreateCrater(v87, v88, v89, v90, 0); /*0x573cc1*/
            goto LABEL_139; /*0x573cc6*/
          }
          Cell::SetTileType(v86, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573a8a*/
          IDA_LOWORD(aP1) = v86[0] + Direction_Y_Offsets; /*0x573aa7*/
          v47 = (int16_t)(v86[0] + Direction_Y_Offsets); /*0x573aac*/
          IDA_HIWORD(aP1) = IDA_HIWORD(Direction_Y_Offsets) + v86[1]; /*0x573aaf*/
          v48 = (int16_t)(IDA_HIWORD(Direction_Y_Offsets) + v86[1]) << 9; /*0x573abb*/
          v27 = v47 + v48 < 0; /*0x573abe*/
          v49 = v47 + v48; /*0x573abe*/
          *(unsigned int *)v83 = aP1; /*0x573ac0*/
          if ( v27 || v49 >= 0x40000 || (v50 = *(unsigned int **)(g_Shroud_CellArray + 4 * v49)) == 0 ) /*0x573ad8*/
          {
            g_Map_GlobalCellIndex = aP1; /*0x573ada*/
            v50 = g_CellClassArray; /*0x573ae0*/
          }
          *((unsigned char *)v50 + 283) += 4; /*0x573af7*/
          v51 = *CellStruct::Add(v83, &v85, Direction_X_Offsets); /*0x573b07*/
          aP1 = v51; /*0x573b09*/
          v52 = (int16_t)v51 + (IDA_SHIWORD(v51) << 9); /*0x573b18*/
          if ( v52 >= 0x40000 || (v53 = *(unsigned int **)(g_Shroud_CellArray + 4 * v52)) == 0 ) /*0x573b2e*/
          {
            g_Map_GlobalCellIndex = v51; /*0x573b30*/
            v53 = g_CellClassArray; /*0x573b36*/
          }
          *((unsigned char *)v53 + 283) += 4; /*0x573b49*/
          v54 = *CellStruct::Add(v83, &v85, &g_DirectionOffsetPool); /*0x573b5d*/
          aP1 = v54; /*0x573b5f*/
          v55 = (int16_t)v54 + (IDA_SHIWORD(v54) << 9); /*0x573b6e*/
          if ( v55 >= 0x40000 || (v56 = *(unsigned int **)(g_Shroud_CellArray + 4 * v55)) == 0 ) /*0x573b84*/
          {
            g_Map_GlobalCellIndex = v54; /*0x573b86*/
            v56 = g_CellClassArray; /*0x573b8c*/
          }
          *((unsigned char *)v56 + 283) += 4; /*0x573b9c*/
          IDA_LOBYTE(v83); /*0x573bac*/
          v57 = v93; /*0x573bb0*/
          v58 = 0; /*0x573bb4*/
          while ( 2 ) /*0x573bb6*/
          {
            v59 = -2; /*0x573bb6*/
  LABEL_92:
            IDA_LOWORD(v84) = v58 + v83[0]; /*0x573bbb*/
            IDA_HIWORD(v84) = v59 + v83[1]; /*0x573bcd*/
            if ( v95 >= v57 ) /*0x573bd8*/
            {
              if ( (v94 || !v57) && v96 > 0 ) /*0x573bec*/
              {
                if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v91[2])(&v91, v96 + v57, 0) ) /*0x573bfb*/
                  break; /*0x573c00*/
  LABEL_98:
                v57 = v93; /*0x573c18*/
              }
              if ( ++v59 >= 3 ) /*0x573c20*/
              {
                if ( ++v58 >= 2 ) /*0x573c26*/
                {
                  IDA_LOWORD(v37) = v86[0]; /*0x573c28*/
                  goto LABEL_103; /*0x573c2c*/
                }
                continue; /*0x573c26*/
              }
              goto LABEL_92; /*0x573c20*/
            }
            break;
          }
          v60 = v95++; /*0x573c02*/
          *((unsigned int *)Block + v60) = v84; /*0x573c15*/
          goto LABEL_98; /*0x573c15*/
        }
        if ( (v43 == dword_AA1548 || v43 == dword_AA0740) && *((unsigned char *)v42 + 282) == 12 ) /*0x5739a1*/
        {
          Cell::UpdateTileType(v86, 0, 0); /*0x573cda*/
          v63 = v86[0] + (v86[1] << 9); /*0x573cee*/
          if ( v63 >= 0x40000 || (v64 = *(unsigned int **)(g_Shroud_CellArray + 4 * v63)) == 0 ) /*0x573d04*/
          {
            g_Map_GlobalCellIndex = *(unsigned int *)v86; /*0x573d06*/
            v64 = g_CellClassArray; /*0x573d0c*/
          }
          Terrain::PlaceCliffs((int)v64, 4, &v87); /*0x573d1b*/
  LABEL_111:
          Cell::CreateCrater(v87, v88, v89, v90, 0); /*0x573d20*/
          goto LABEL_141; /*0x573d4d*/
        }
        if ( (v43 == g_TerrainSoundConfig /*0x5739d4*/
           || v43 == g_TerrainSoundConfig + 3
           || v43 == g_TerrainSoundConfig + 4
           || v43 == g_TerrainSoundConfig + 1
           || v43 == g_TerrainSoundConfig + 2)
          && *((unsigned char *)v42 + 282) == 7 )
        {
          break; /*0x5739d4*/
        }
      }
      v37 = *CellStruct::Add(v86, &v85, (unsigned short *)(4 * (v36 & 7) + 9041544)); /*0x5739fb*/
      v38 = *(&this->referenceCount3); /*0x5739fd*/
      *(unsigned int *)v86 = v37; /*0x573a03*/
      if ( (int16_t)v37 < v38 ) /*0x573a0c*/
        goto LABEL_141; /*0x573a0c*/
    }
    if ( v43 != g_TerrainSoundConfig + 4 ) /*0x573d57*/
    {
      goto LABEL_135; /*0x573f0c*/
    }
    Cell::SetTileType(v86, g_TerrainSoundConfig + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573d73*/
    v66 = *CellStruct::Add(v86, &aP1, Direction_X_Offsets); /*0x573d8b*/
    aP1 = v66; /*0x573d8d*/
    *(unsigned int *)v83 = v66; /*0x573d91*/
    v67 = (int16_t)v66 + (IDA_SHIWORD(v66) << 9); /*0x573da0*/
    if ( v67 >= 0x40000 || (v68 = *(unsigned int **)(g_Shroud_CellArray + 4 * v67)) == 0 ) /*0x573db6*/
    {
      g_Map_GlobalCellIndex = v66; /*0x573db8*/
      v68 = g_CellClassArray; /*0x573dbe*/
    }
    *((unsigned char *)v68 + 283) += 4; /*0x573dd1*/
    v69 = *CellStruct::Add(v83, &v85, &g_CellDirectionOffsets); /*0x573de5*/
    aP1 = v69; /*0x573de7*/
    v70 = (int16_t)v69 + (IDA_SHIWORD(v69) << 9); /*0x573df6*/
    if ( v70 >= 0x40000 || (v71 = *(unsigned int **)(g_Shroud_CellArray + 4 * v70)) == 0 ) /*0x573e0c*/
    {
      g_Map_GlobalCellIndex = v69; /*0x573e0e*/
      v71 = g_CellClassArray; /*0x573e14*/
    }
    *((unsigned char *)v71 + 283) += 4; /*0x573e27*/
    v72 = *CellStruct::Add(v83, &v85, &Direction_Y_Offsets); /*0x573e3b*/
    aP1 = v72; /*0x573e3d*/
    v73 = (int16_t)v72 + (IDA_SHIWORD(v72) << 9); /*0x573e4c*/
    if ( v73 >= 0x40000 || (v74 = *(unsigned int **)(g_Shroud_CellArray + 4 * v73)) == 0 ) /*0x573e62*/
    {
      g_Map_GlobalCellIndex = v72; /*0x573e64*/
      v74 = g_CellClassArray; /*0x573e6a*/
    }
    *((unsigned char *)v74 + 283) += 4; /*0x573e7a*/
    IDA_LOBYTE(v83); /*0x573e8a*/
    v75 = v93; /*0x573e8e*/
    v76 = 0; /*0x573e92*/
  LABEL_123:
    v77 = -2; /*0x573e94*/
    while ( 1 ) /*0x573ea6*/
    {
      IDA_LOWORD(v84) = v77 + v83[0]; /*0x573ea6*/
      IDA_HIWORD(v84) = v76 + v83[1]; /*0x573eab*/
      if ( v95 < v75 ) /*0x573eb6*/
        goto LABEL_129; /*0x573eb6*/
      if ( !v94 && v75 || v96 <= 0 ) /*0x573eca*/
        goto LABEL_131; /*0x573eca*/
      if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v91[2])(&v91, v96 + v75, 0) ) /*0x573ed9*/
      {
  LABEL_129:
        v78 = v95++; /*0x573ee8*/
        *((unsigned int *)Block + v78) = v84; /*0x573ef3*/
      }
      v75 = v93; /*0x573ef6*/
  LABEL_131:
      if ( ++v77 >= 3 ) /*0x573efe*/
      {
        if ( ++v76 >= 2 ) /*0x573f04*/
        {
          IDA_LOWORD(v37) = v86[0]; /*0x573f06*/
  LABEL_135:
          IDA_LOWORD(v84) = v37; /*0x573f10*/
          IDA_HIWORD(v84) = v86[1] - 2; /*0x573f20*/
          v85 = v84; /*0x573f29*/
          Terrain::RecursiveModify(&v85); /*0x573f30*/
          v79 = v86[0] + (v86[1] << 9); /*0x573f44*/
          if ( v79 >= 0x40000 || (v80 = *(unsigned int **)(g_Shroud_CellArray + 4 * v79)) == 0 ) /*0x573f5a*/
          {
            g_Map_GlobalCellIndex = *(unsigned int *)v86; /*0x573f5c*/
            v80 = g_CellClassArray; /*0x573f62*/
          }
          Terrain::PlaceCliffs(this, (int)v80, 4, &v87); /*0x573f71*/
          Cell::CreateCrater(v87, v88, v89, v90, 0); /*0x573f9e*/
  LABEL_139:
          if ( (unsigned char)aP1 ) /*0x573fad*/
            Terrain::ConnectivityGraph(this); /*0x573fb1*/
  LABEL_141:
          if ( v95 > 0 ) /*0x573fbc*/
            LayerClass::Update_Pathfinding_2((int)&v91); /*0x573fc7*/
          if ( Block ) /*0x573fda*/
          {
            if ( v94 ) /*0x573fe2*/
              RA2_OPDEL(Block); /*0x573fe5*/
          }
          return; /*0x573fe5*/
        }
        goto LABEL_123; /*0x573f04*/
      }
    }
  }
}
}
// 0x576770
namespace gamemd {
int Terrain::CreateCrater(IUnknown * aP1)
{
  unsigned short *v2; // edi
  char v3; // si
  int i; // ebx
  int v5; // eax
  int16_t v6; // dx
  unsigned int v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int16_t v13; // dx
  int v14; // esi
  bool v15; // sf
  int v16; // esi
  unsigned int *v17; // esi
  int v18; // eax
  int16_t v19; // si
  int v20; // ebp
  int v21; // edi
  int v22; // ebp
  int v23; // esi
  unsigned int v24; // eax
  unsigned int *v25; // eax
  unsigned int *v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  int16_t v33; // [esp+16h] [ebp-1Eh]
  int v34; // [esp+18h] [ebp-1Ch]
  int v36; // [esp+1Ch] [ebp-18h]
  int v37; // [esp+20h] [ebp-14h]

  v2 = (unsigned short *)aP1; /*0x576781*/
  v3 = 0; /*0x576785*/
  for ( i = 0; i < 8; ++i ) /*0x576787*/
  {
    v5 = v3 & 7; /*0x57678b*/
    v6 = Direction_X_Offsets[v5]; /*0x57678e*/
    IDA_LOWORD(v5) = v2[1] + IDA_HIWORD(Direction_X_Offsets[v5]); /*0x5767a4*/
    IDA_LOWORD(aP1) = *v2 + v6; /*0x5767a8*/
    IDA_HIWORD(aP1) = v5; /*0x5767b0*/
    v7 = (int16_t)aP1 + ((int16_t)v5 << 9); /*0x5767bb*/
    if ( v7 < 0x40000 && (v8 = *(unsigned int **)(g_Shroud_CellArray + 4 * v7)) != 0 ) /*0x5767cb*/
    {
      v9 = v8; /*0x5767cd*/
    }
    else
    {
      v9 = &g_CellClassArray; /*0x5767d5*/
      g_Map_GlobalCellIndex = aP1; /*0x5767da*/
    }
    v9 = v9; /*0x5767e5*/
    if ( (v9[80] & 0x500) != 0 ) /*0x5767ec*/
      break; /*0x5767ec*/
    v3 = (v3 + 1) & 7; /*0x5767ef*/
  }
  v10 = v9[80]; /*0x5767f8*/
  if ( (v10 & 0x100) == 0 && (v10 & 0x400) == 0 ) /*0x57680b*/
    return v10; /*0x57680b*/
  if ( (v9[80] & 0x100) != 0 )
  {
    if ( (v10 & 0x80u) == 0 ) /*0x576817*/
      v11 = *(unsigned int *)(v9[11] + 36); /*0x576824*/
    else
      v11 = v9[9]; /*0x576819*/
  }
  else
  {
    v12 = v9[9]; /*0x576831*/
    v33 = IDA_HIWORD(v12); /*0x576838*/
    v34 = 0; /*0x57683f*/
    v37 = (v10 & 0x800) != 0 ? 4 : 2;
    while ( 1 ) /*0x57685c*/
    {
      v13 = v12 + IDA_LOWORD(Direction_X_Offsets[v37 & 7]); /*0x57685c*/
      IDA_LOWORD(aP1) = v13; /*0x57685f*/
      IDA_HIWORD(aP1) = v33 + IDA_HIWORD(Direction_X_Offsets[v37 & 7]); /*0x576873*/
      IDA_LOWORD(v12) = v13; /*0x576878*/
      v14 = IDA_SHIWORD(aP1) << 9; /*0x57687c*/
      v15 = v13 + v14 < 0; /*0x57687f*/
      v16 = v13 + v14; /*0x57687f*/
      v33 = IDA_HIWORD(aP1); /*0x576881*/
      if ( v15 || v16 >= 0x40000 || (v17 = *(unsigned int **)(g_Shroud_CellArray + 4 * v16)) == 0 ) /*0x57689a*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x57689c*/
        v17 = &g_CellClassArray; /*0x5768a2*/
      }
      if ( (v17[80] & 0x400) == 0 ) /*0x5768b0*/
        break; /*0x5768b0*/
      IDA_LOBYTE(v10) = ++v34; /*0x5768b6*/
      if ( v34 >= 4 ) /*0x5768be*/
        return v10; /*0x5768be*/
    }
    v18 = ((unsigned char)v37 - 4) & 7; /*0x5768d4*/
    v19 = IDA_HIWORD(aP1) + IDA_HIWORD(Direction_X_Offsets[v18]); /*0x5768f9*/
    IDA_LOWORD(aP1) = IDA_LOWORD(Direction_X_Offsets[v18]) + v13 + IDA_LOWORD(Direction_X_Offsets[v18]); /*0x5768fc*/
    IDA_HIWORD(aP1) = v19 + IDA_HIWORD(Direction_X_Offsets[v18]); /*0x576908*/
    v11 = aP1; /*0x57690d*/
    v9 = v9; /*0x576911*/
  }
  v20 = v9[80]; /*0x576915*/
  v21 = v11; /*0x576933*/
  aP1 = v11; /*0x57693a*/
  dword_ABD470 = dword_ABD470; /*0x576940*/
  dword_ABD474 = dword_ABD474; /*0x57694b*/
  v22 = (v20 & 0x800) != 0 ? 6 : 0;
  dword_ABD478 = dword_ABD478; /*0x576952*/
  dword_ABD47C = dword_ABD47C; /*0x576956*/
  while ( 1 ) /*0x57695a*/
  {
    IDA_LOBYTE(v10) = IDA_BYTE2(aP1); /*0x57695a*/
    v23 = IDA_SHIWORD(aP1) + (int16_t)v21; /*0x576962*/
    if ( v23 <= g_Cell_PositionLUT /*0x576990*/
      || (int16_t)v21 - IDA_SHIWORD(aP1) >= g_Cell_PositionLUT
      || IDA_SHIWORD(aP1) - (int16_t)v21 >= g_Cell_PositionLUT
      || v23 > g_Cell_PositionLUT + 2 * g_CellPositionOffset )
    {
      return v10; /*0x576990*/
    }
    v24 = (int16_t)v21 + (IDA_SHIWORD(aP1) << 9); /*0x57699d*/
    if ( !*(unsigned int *)(*(&this->referenceCount9) + 4 * v24) ) /*0x5769a9*/
      goto LABEL_49; /*0x5769a9*/
    if ( v24 < 0x40000 && (v25 = *(unsigned int **)(g_Shroud_CellArray + 4 * v24)) != 0 ) /*0x5769c5*/
    {
      v26 = v25; /*0x5769c7*/
    }
    else
    {
      g_Map_GlobalCellIndex = v21; /*0x5769cb*/
      v26 = &g_CellClassArray; /*0x5769d1*/
    }
    v27 = v26[14] - g_Cell_BuildabilityLUT + 1; /*0x5769e7*/
    if ( (v27 == dword_ABC2B4 || v27 == dword_AA1130) && *((unsigned char *)v26 + 282) == 8 ) /*0x5769fb*/
      break; /*0x5769fb*/
    if ( (v27 == g_TerrainSoundTable2 /*0x576a27*/
       || v27 == g_TerrainSoundTable2 + 3
       || v27 == g_TerrainSoundTable2 + 1
       || v27 == g_TerrainSoundTable2 + 2)
      && *((unsigned char *)v26 + 282) == 5 )
    {
      break; /*0x576a27*/
    }
    if ( (v27 == dword_AA1548 || v27 == dword_AA0740) && *((unsigned char *)v26 + 282) == 12 ) /*0x576a44*/
    {
      IDA_LOBYTE(v10) = CellClass::RecursiveCraterUpdate(&aP1, 4, &dword_ABD470); /*0x576b26*/
      goto LABEL_51; /*0x576b26*/
    }
    if ( (v27 == g_TerrainSoundConfig /*0x576a6e*/
       || v27 == g_TerrainSoundConfig + 3
       || v27 == g_TerrainSoundConfig + 2
       || v27 == g_TerrainSoundConfig + 1)
      && *((unsigned char *)v26 + 282) == 7 )
    {
      IDA_LOBYTE(v10) = CellClass::RecursiveCraterUpdate(&aP1, 4, &dword_ABD470); /*0x576b38*/
      if ( (unsigned char)v10 ) /*0x576b3f*/
      {
        v10 = dword_ABD470; /*0x576b41*/
        v29 = dword_ABD474; /*0x576b4b*/
        v30 = dword_ABD47C; /*0x576b4f*/
        v31 = dword_ABD478; /*0x576b55*/
        if ( dword_ABD470 != dword_ABD470 || dword_ABD474 != dword_ABD474 || dword_ABD478 != dword_ABD478 || dword_ABD47C != dword_ABD47C ) /*0x576b71*/
          goto LABEL_64; /*0x576b71*/
      }
      return v10; /*0x576b71*/
    }
  LABEL_49:
    v28 = v22 & 7; /*0x576a74*/
    IDA_LOWORD(v36) = v21 + IDA_LOWORD(Direction_X_Offsets[v28]); /*0x576a8f*/
    IDA_HIWORD(v36) = IDA_HIWORD(aP1) + IDA_HIWORD(Direction_X_Offsets[v28]); /*0x576a99*/
    v21 = v36; /*0x576a9e*/
    aP1 = v36; /*0x576aa2*/
  }
  IDA_LOBYTE(v10) = CellClass::RecursiveCraterUpdate(&aP1, 2, &dword_ABD470); /*0x576ab7*/
  LABEL_51:
  if ( (unsigned char)v10 ) /*0x576abe*/
  {
    v10 = dword_ABD470; /*0x576ac4*/
    v29 = dword_ABD474; /*0x576ace*/
    v30 = dword_ABD47C; /*0x576ad2*/
    v31 = dword_ABD478; /*0x576ad8*/
    if ( dword_ABD470 != dword_ABD470 || dword_ABD474 != dword_ABD474 || dword_ABD478 != dword_ABD478 || dword_ABD47C != dword_ABD47C ) /*0x576afc*/
  LABEL_64:
      IDA_LOBYTE(v10) = Cell::CreateCrater(v10, v29, v31, v30, 0); /*0x576b73*/
  }
  return v10; /*0x5768c0*/
}
}
// 0x579620
namespace gamemd {
VectorClass_flat * * Terrain::SelectTileType(Random * aP0, IUnknown * aP1)
{
  int v2; // eax
  int v3; // ebp
  int AdjacencyFlags; // ebx
  unsigned int v5; // eax
  unsigned int *v6; // eax
  char v7; // bl
  unsigned int v8; // eax
  unsigned int *v9; // eax
  char v10; // al
  int v11; // edx
  unsigned int v12; // eax
  unsigned int *v13; // eax
  char v14; // si
  unsigned int v15; // eax
  unsigned int *v16; // eax
  char v17; // al
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  unsigned int *v23; // eax
  char v24; // si
  unsigned int v25; // eax
  unsigned int *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  unsigned int *v29; // eax
  char v30; // al
  int v31; // eax
  int16_t v32; // cx
  int16_t v33; // dx
  char v35; // [esp-10h] [ebp-34h]
  int v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+14h] [ebp-10h] BYREF
  int v38; // [esp+1Ch] [ebp-8h] BYREF

  v2 = Range_RandomInt(0, 5u); /*0x579630*/
  v3 = aP0; /*0x579635*/
  v36 = v2; /*0x57963c*/
  AdjacencyFlags = Cell::GetAdjacencyFlags(aP0); /*0x579645*/
  v38 = AdjacencyFlags; /*0x57964e*/
  if ( (AdjacencyFlags & 0xA0) == 0xA0 ) /*0x579652*/
  {
    v37 = *(unsigned int *)(v3 + 36); /*0x57965b*/
    aP0 = v37 + 0x10000; /*0x57966b*/
    v5 = (int16_t)v37 + ((int16_t)(IDA_HIWORD(v37) + 1) << 9); /*0x579679*/
    if ( v5 >= 0x40000 || (v6 = *(unsigned int **)(g_Shroud_CellArray + 4 * v5)) == 0 ) /*0x57968f*/
    {
      g_Map_GlobalCellIndex = aP0; /*0x579695*/
      v6 = g_CellClassArray; /*0x57969a*/
    }
    v7 = Cell::GetAdjacencyFlags((int)v6); /*0x5796a7*/
    v37 = *(unsigned int *)(v3 + 36); /*0x5796ac*/
    IDA_HIWORD(aP0) = IDA_HIWORD(v37); /*0x5796b8*/
    IDA_LOWORD(aP0) = v37 + 1; /*0x5796bd*/
    v8 = (int16_t)(v37 + 1) + (IDA_SHIWORD(v37) << 9); /*0x5796cb*/
    if ( v8 >= 0x40000 || (v9 = *(unsigned int **)(g_Shroud_CellArray + 4 * v8)) == 0 ) /*0x5796e1*/
    {
      g_Map_GlobalCellIndex = aP0; /*0x5796e7*/
      v9 = g_CellClassArray; /*0x5796ec*/
    }
    v10 = Cell::GetAdjacencyFlags((int)v9); /*0x5796f4*/
    if ( (v7 & 0x20) != 0 || v10 < 0 ) /*0x579704*/
    {
      v11 = 34; /*0x5797fc*/
      goto LABEL_82; /*0x579801*/
    }
    v11 = v36 % 3 + 9; /*0x579716*/
    if ( v36 % 3 != -10 ) /*0x57971c*/
      goto LABEL_81; /*0x57971c*/
    IDA_LOBYTE(AdjacencyFlags) = v38; /*0x579722*/
  }
  else
  {
    if ( (AdjacencyFlags & 0x82) == 0x82 ) /*0x579811*/
    {
      v11 = 39; /*0x579813*/
      goto LABEL_82; /*0x579818*/
    }
    if ( (AdjacencyFlags & 0xA) == 0xA ) /*0x579824*/
    {
      v11 = 33; /*0x579826*/
      goto LABEL_82; /*0x57982b*/
    }
    if ( (AdjacencyFlags & 0x28) == 0x28 ) /*0x579838*/
    {
      v11 = 40; /*0x57983e*/
      goto LABEL_82; /*0x579843*/
    }
  }
  if ( (AdjacencyFlags & 2) == 0 ) /*0x579729*/
  {
    if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57986f*/
    {
      v38 = *(unsigned int *)(v3 + 36); /*0x579878*/
      aP0 = v38 + 0x10000; /*0x579888*/
      v19 = (int16_t)v38 + ((int16_t)(IDA_HIWORD(v38) + 1) << 9); /*0x579896*/
      if ( v19 >= 0x40000 || (v20 = *(unsigned int **)(g_Shroud_CellArray + 4 * v19)) == 0 ) /*0x5798ac*/
      {
        g_Map_GlobalCellIndex = aP0; /*0x5798b2*/
        v20 = g_CellClassArray; /*0x5798b7*/
      }
      v21 = Cell::GetAdjacencyFlags((int)v20); /*0x5798bf*/
      if ( (AdjacencyFlags & 0x10) == 0 || (AdjacencyFlags & 0xC) != 0 || (v21 & 0x28) == 0x28 ) /*0x5798d3*/
      {
        v11 = 18; /*0x5798f6*/
        goto LABEL_82; /*0x5798fb*/
      }
      v11 = v36 % 3 + 15; /*0x5798e1*/
    }
    else if ( (AdjacencyFlags & 8) != 0 ) /*0x579903*/
    {
      v38 = *(unsigned int *)(v3 + 36); /*0x57990c*/
      IDA_HIWORD(aP0) = IDA_HIWORD(v38); /*0x579918*/
      IDA_LOWORD(aP0) = v38 + 1; /*0x57991d*/
      v22 = (int16_t)(v38 + 1) + (IDA_SHIWORD(v38) << 9); /*0x57992b*/
      if ( v22 >= 0x40000 || (v23 = *(unsigned int **)(g_Shroud_CellArray + 4 * v22)) == 0 ) /*0x579941*/
      {
        v23 = g_CellClassArray; /*0x579947*/
        g_Map_GlobalCellIndex = aP0; /*0x57994c*/
      }
      v24 = Cell::GetAdjacencyFlags((int)v23); /*0x57995a*/
      v38 = *(unsigned int *)(v3 + 36); /*0x57995f*/
      IDA_LOWORD(aP0) = v38 + 1; /*0x57996b*/
      IDA_HIWORD(aP0) = IDA_HIWORD(v38) + 1; /*0x579970*/
      v25 = (int16_t)(v38 + 1) + ((int16_t)(IDA_HIWORD(v38) + 1) << 9); /*0x57997e*/
      if ( v25 >= 0x40000 || (v26 = *(unsigned int **)(g_Shroud_CellArray + 4 * v25)) == 0 ) /*0x579994*/
      {
        g_Map_GlobalCellIndex = aP0; /*0x57999a*/
        v26 = g_CellClassArray; /*0x57999f*/
      }
      v27 = Cell::GetAdjacencyFlags((int)v26); /*0x5799a7*/
      if ( (AdjacencyFlags & 4) == 0 || (AdjacencyFlags & 3) != 0 || (v24 & 0xA) == 0xA ) /*0x5799be*/
      {
        if ( (AdjacencyFlags & 6) != 0 || (v27 & 8) != 0 || (v36 & 1) == 0 ) /*0x5799e2*/
          v11 = 26; /*0x5799ee*/
        else
          v11 = 21; /*0x5799e4*/
        goto LABEL_82; /*0x5799e9*/
      }
      v11 = v36 % 3 + 23; /*0x5799cc*/
    }
    else
    {
      if ( (AdjacencyFlags & 0x80u) == 0 ) /*0x5799fb*/
      {
        v18 = v36; /*0x579a7c*/
  LABEL_73:
        if ( (AdjacencyFlags & 1) != 0 ) /*0x579a83*/
        {
          v11 = 2; /*0x579a85*/
          goto LABEL_82; /*0x579a8a*/
        }
        if ( (AdjacencyFlags & 4) != 0 ) /*0x579a8f*/
        {
          v11 = (v18 & 1) + 29; /*0x579a97*/
        }
        else
        {
          if ( (AdjacencyFlags & 0x10) != 0 ) /*0x579a9e*/
          {
            v11 = 22; /*0x579aa0*/
            goto LABEL_82; /*0x579aa5*/
          }
          if ( (AdjacencyFlags & 0x40) == 0 ) /*0x579aaa*/
            return 1; /*0x579aaa*/
          v11 = v18 % 3 + 12; /*0x579aba*/
        }
  LABEL_81:
        if ( v11 <= 0 ) /*0x579abf*/
          return 1; /*0x579abf*/
        goto LABEL_82; /*0x579abf*/
      }
      v38 = *(unsigned int *)(v3 + 36); /*0x579a00*/
      IDA_HIWORD(aP0) = IDA_HIWORD(v38); /*0x579a0c*/
      IDA_LOWORD(aP0) = v38 + 1; /*0x579a11*/
      v28 = (int16_t)(v38 + 1) + (IDA_SHIWORD(v38) << 9); /*0x579a1f*/
      if ( v28 >= 0x40000 || (v29 = *(unsigned int **)(g_Shroud_CellArray + 4 * v28)) == 0 ) /*0x579a35*/
      {
        v29 = g_CellClassArray; /*0x579a3b*/
        g_Map_GlobalCellIndex = aP0; /*0x579a40*/
      }
      v30 = Cell::GetAdjacencyFlags((int)v29); /*0x579a49*/
      if ( (AdjacencyFlags & 1) == 0 || (AdjacencyFlags & 6) != 0 || (v30 & 0x82) == 0x82 ) /*0x579a5f*/
      {
        v11 = 8; /*0x579a75*/
        goto LABEL_82; /*0x579a7a*/
      }
      v11 = v36 % 3 + 5; /*0x579a6d*/
    }
    v18 = v36; /*0x5798e4*/
  LABEL_44:
    if ( v11 != -1 ) /*0x5798eb*/
      goto LABEL_81; /*0x5798eb*/
    goto LABEL_73; /*0x5798eb*/
  }
  v38 = *(unsigned int *)(v3 + 36); /*0x579732*/
  aP0 = v38 + 0x10000; /*0x579742*/
  v12 = (int16_t)v38 + ((int16_t)(IDA_HIWORD(v38) + 1) << 9); /*0x579750*/
  if ( v12 >= 0x40000 || (v13 = *(unsigned int **)(g_Shroud_CellArray + 4 * v12)) == 0 ) /*0x579766*/
  {
    g_Map_GlobalCellIndex = aP0; /*0x57976c*/
    v13 = g_CellClassArray; /*0x579771*/
  }
  v14 = Cell::GetAdjacencyFlags((int)v13); /*0x57977e*/
  v38 = *(unsigned int *)(v3 + 36); /*0x579783*/
  IDA_LOWORD(aP0) = v38 + 1; /*0x579791*/
  IDA_HIWORD(aP0) = IDA_HIWORD(v38) + 1; /*0x579796*/
  v15 = (int16_t)(v38 + 1) + ((int16_t)(IDA_HIWORD(v38) + 1) << 9); /*0x5797a4*/
  if ( v15 >= 0x40000 || (v16 = *(unsigned int **)(g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x5797ba*/
  {
    g_Map_GlobalCellIndex = aP0; /*0x5797c0*/
    v16 = g_CellClassArray; /*0x5797c5*/
  }
  v17 = Cell::GetAdjacencyFlags((int)v16); /*0x5797cd*/
  if ( (AdjacencyFlags & 4) != 0 && (AdjacencyFlags & 0x18) == 0 && (v14 & 0xA) != 0xA ) /*0x5797e4*/
  {
    v18 = v36; /*0x5797e6*/
    v11 = v36 % 3 + 35; /*0x5797f4*/
    goto LABEL_44; /*0x5797f7*/
  }
  if ( (AdjacencyFlags & 0xC) != 0 || (v17 & 2) != 0 || (v36 & 1) == 0 ) /*0x579856*/
    v11 = 38; /*0x579862*/
  else
    v11 = 1; /*0x579858*/
  LABEL_82:
  g_RadarBlipManager = *((unsigned int *)g_FrameCounter + v11 + g_TerrainBuildConfig - 1); /*0x579ac5*/
  v31 = *(unsigned int *)(v3 + 36); /*0x579adb*/
  v32 = word_ABDDA4[2 * v11]; /*0x579ade*/
  v33 = word_ABDDA6[2 * v11]; /*0x579ae6*/
  IDA_LOWORD(aP0) = v31 + v32; /*0x579afa*/
  IDA_HIWORD(aP0) = IDA_HIWORD(v31) + v33; /*0x579aff*/
  v38 = aP0; /*0x579b17*/
  Tactical::MouseMove((int)&MapClass_Instance, &v37, &v38); /*0x579b1b*/
  v35 = *(unsigned char *)(v3 + 283); /*0x579b33*/
  IDA_LOBYTE(aP0) = 1; /*0x579b3a*/
  return GenerateTerrainMap(0, 0, v35, aP1, &aP0, 0) || (unsigned char)aP0; /*0x579b4e*/
}
}
// 0x5A28C0
namespace gamemd {
void Terrain::PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4)
{
  int16_t *v4; // ebx
  int v5; // edi
  void *v6; // eax
  int *v7; // eax
  int *v8; // esi
  void *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  bool v13; // sf
  int i; // eax
  int j; // eax
  char *v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // eax
  int16_t *v23; // ebx
  int v24; // edx
  unsigned int *v25; // ecx
  int v26; // eax
  int k; // eax
  unsigned int v28; // eax
  void **v29; // edi
  int v30; // eax
  unsigned int v31; // eax
  uint8_t v32; // al
  float *v33; // edi
  int v34; // ecx
  int16_t v35; // ax
  unsigned int *v36; // ebx
  unsigned int *v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  float *v41; // ebx
  float v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v45; // eax
  int v46; // eax
  int16_t *v47; // edi
  char v48; // [esp+1Bh] [ebp-6Dh]
  int16_t *v49; // [esp+1Ch] [ebp-6Ch]
  unsigned int *v50; // [esp+20h] [ebp-68h] BYREF
  void *Block; // [esp+24h] [ebp-64h]
  int v52; // [esp+28h] [ebp-60h] BYREF
  int v53; // [esp+2Ch] [ebp-5Ch]
  int v54; // [esp+30h] [ebp-58h]
  int v55; // [esp+34h] [ebp-54h]
  int v56; // [esp+38h] [ebp-50h]
  unsigned int *v57; // [esp+3Ch] [ebp-4Ch]
  int v58; // [esp+40h] [ebp-48h]
  float v59; // [esp+44h] [ebp-44h]
  int v60; // [esp+48h] [ebp-40h]
  float v61; // [esp+4Ch] [ebp-3Ch]
  double v62; // [esp+50h] [ebp-38h]
  int64_t v63; // [esp+5Ch] [ebp-2Ch]
  int64_t v64; // [esp+64h] [ebp-24h]
  int64_t v65; // [esp+6Ch] [ebp-1Ch]
  char Buffer[20]; // [esp+74h] [ebp-14h] BYREF

  v4 = 0; /*0x5a28cf*/
  v53 = 0; /*0x5a28d4*/
  v5 = 10 * a2; /*0x5a28d8*/
  v6 = operator new(80 * a2); /*0x5a28e2*/
  if ( v6 ) /*0x5a28ec*/
  {
    Block = v6; /*0x5a28f1*/
    IDA_LODWORD(v62) = v5 - 1; /*0x5a28f5*/
  }
  else
  {
    Block = 0; /*0x5a28fb*/
  }
  v7 = (int *)operator new(0x14u); /*0x5a2901*/
  v8 = v7; /*0x5a2906*/
  if ( v7 ) /*0x5a290d*/
  {
    v7[3] = 0; /*0x5a2916*/
    v7[4] = -1; /*0x5a291a*/
    *v7 = 0; /*0x5a2921*/
    v7[1] = v5; /*0x5a2923*/
    v9 = operator new(40 * a2 + 4); /*0x5a2926*/
    v10 = v8[1]; /*0x5a292b*/
    v8[2] = (int)v9; /*0x5a292e*/
    v11 = 0; /*0x5a2934*/
    if ( v10 >= 0 ) /*0x5a2938*/
    {
      do /*0x5a2947*/
      {
        ++v11; /*0x5a293d*/
        *(unsigned int *)(v8[2] + 4 * v11 - 4) = 0; /*0x5a293e*/
      }
      while ( v11 <= v8[1] ); /*0x5a2947*/
    }
  }
  else
  {
    v8 = 0; /*0x5a294b*/
  }
  v48 = 0; /*0x5a2957*/
  v52 = *(unsigned int *)aP0; /*0x5a295e*/
  v12 = 0; /*0x5a2965*/
  v54 = 0; /*0x5a296a*/
  v60 = a4 != 0 ? 27 : 102;
  v13 = *v8 < 0; /*0x5a2974*/
  v55 = 0; /*0x5a2976*/
  if ( !v13 ) /*0x5a297a*/
  {
    do /*0x5a2988*/
    {
      ++v12; /*0x5a297f*/
      *(unsigned int *)(v8[2] + 4 * v12 - 4) = 0; /*0x5a2980*/
    }
    while ( v12 <= *v8 ); /*0x5a2988*/
  }
  *v8 = 0; /*0x5a298d*/
  v49 = 0; /*0x5a2991*/
  if ( a2 <= 0 ) /*0x5a2995*/
    goto LABEL_72; /*0x5a2995*/
  while ( v55 < 10 ) /*0x5a29a6*/
  {
    if ( v4 ) /*0x5a29b0*/
    {
      v16 = (char *)Block; /*0x5a2b08*/
    }
    else
    {
      for ( i = 0; i <= *v8; *(unsigned int *)(v8[2] + 4 * i - 4) = 0 ) /*0x5a29bc*/
        ++i; /*0x5a29c1*/
      *v8 = 0; /*0x5a29d1*/
      LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a29d3*/
      for ( j = LayerClass::CellIteratorNext(&MapClass_Instance); j; j = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x5a29e4*/
      {
        v58 = *(unsigned int *)(j + 36); /*0x5a29e9*/
        *((unsigned int *)g_MapTileArray + 20 * (int16_t)v58 + 20 * g_MapCellWidth * IDA_SHIWORD(v58) + 15) = 0; /*0x5a2a0a*/
      }
      v16 = (char *)Block; /*0x5a2a1f*/
      v53 = 1; /*0x5a2a25*/
      *(unsigned int *)Block = *(unsigned int *)aP0; /*0x5a2a2f*/
      *((unsigned int *)v16 + 1) = 0; /*0x5a2a31*/
      *((unsigned int *)g_MapTileArray + 20 * *aP0 + 20 * g_MapCellWidth * aP0[1] + 15) = a3; /*0x5a2a56*/
      v17 = *v8 + 1; /*0x5a2a5f*/
      v59 = *((float *)v16 + 1); /*0x5a2a62*/
      v18 = v17 >> 1; /*0x5a2a69*/
      if ( v17 < v8[1] ) /*0x5a2a6d*/
      {
        if ( v17 > 1 ) /*0x5a2a72*/
        {
          do /*0x5a2a92*/
          {
            v19 = v8[2]; /*0x5a2a74*/
            v20 = *(unsigned int *)(v19 + 4 * v18); /*0x5a2a77*/
            if ( *(float *)(v20 + 4) <= (double)v59 ) /*0x5a2a86*/
              break; /*0x5a2a86*/
            *(unsigned int *)(v19 + 4 * v17) = v20; /*0x5a2a88*/
            v17 = v18; /*0x5a2a8b*/
            v18 >>= 1; /*0x5a2a8d*/
          }
          while ( v17 > 1 ); /*0x5a2a92*/
          v16 = (char *)Block; /*0x5a2a94*/
        }
        *(unsigned int *)(v8[2] + 4 * v17) = v16; /*0x5a2a9b*/
        v21 = v8[3]; /*0x5a2aa0*/
        ++*v8; /*0x5a2aa6*/
        if ( (unsigned int)v16 > v21 ) /*0x5a2aa8*/
          v8[3] = (int)v16; /*0x5a2aaa*/
        if ( (unsigned int)v16 < v8[4] ) /*0x5a2ab0*/
          v8[4] = (int)v16; /*0x5a2ab2*/
      }
      if ( *v8 ) /*0x5a2ab5*/
      {
        v22 = v8[2]; /*0x5a2ac1*/
        v23 = *(int16_t **)(v22 + 4); /*0x5a2ac9*/
        *(unsigned int *)(v22 + 4) = *(unsigned int *)(v22 + 4 * *v8); /*0x5a2acc*/
        *(unsigned int *)(v8[2] + 4 * (*v8)--) = 0; /*0x5a2ad4*/
        Heap::SiftDown(v8, 1); /*0x5a2ae2*/
        v49 = v23; /*0x5a2ae7*/
      }
      else
      {
        v49 = 0; /*0x5a2abb*/
      }
      v4 = v49; /*0x5a2af2*/
      v24 = *(unsigned int *)aP0; /*0x5a2af7*/
      v48 = 0; /*0x5a2af9*/
      ++v55; /*0x5a2afe*/
      v52 = v24; /*0x5a2b02*/
    }
    v25 = CellCoord::To_CellObj(&MapClass_Instance, v4); /*0x5a2b17*/
    v26 = *v4 + g_MapCellWidth * v4[1]; /*0x5a2b27*/
    v50 = v25; /*0x5a2b2f*/
    if ( *((unsigned char *)g_MapTileArray + 80 * v26 + 69) ) /*0x5a2b39*/
      goto LABEL_49; /*0x5a2b3e*/
    if ( !v48 ) /*0x5a2b4a*/
    {
      v48 = 1; /*0x5a2b52*/
      v52 = *(unsigned int *)v4; /*0x5a2b57*/
      for ( k = 0; k <= *v8; *(unsigned int *)(v8[2] + 4 * k - 4) = 0 ) /*0x5a2b61*/
        ++k; /*0x5a2b66*/
      *v8 = 0; /*0x5a2b78*/
      v53 = 0; /*0x5a2b80*/
      if ( !a4 ) /*0x5a2b88*/
      {
        do /*0x5a2bbc*/
        {
          v63 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2b98*/
          v28 = Math::RoundToInt((double)v63 * 6.984919311242392e-10 + 1.0); /*0x5a2bb4*/
        }
        while ( v28 > 3 ); /*0x5a2bbc*/
        sprintf(Buffer, "TIBTRE0%d", (int)v28 % 10); /*0x5a2bd1*/
        v29 = (void *)operator new(0xE0u); /*0x5a2be0*/
        if ( v29 ) /*0x5a2be7*/
        {
          v30 = Terrain::LookupByName(Buffer); /*0x5a2bed*/
          TerrainClass::Construct(v29, *((void **)dword_A8E31C + v30), (int16_t *)&v52); /*0x5a2c05*/
        }
        v16 = (char *)Block; /*0x5a2c0a*/
        v25 = v50; /*0x5a2c0e*/
      }
    }
    if ( v25[17] == -1 ) /*0x5a2c16*/
    {
      do /*0x5a2c40*/
      {
        v64 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2c22*/
        v31 = Math::RoundToInt((double)v64 * 0.000000002793967724496957); /*0x5a2c38*/
      }
      while ( v31 > 0xB ); /*0x5a2c40*/
      v50[17] = v60 + v31; /*0x5a2c4c*/
      goto LABEL_48; /*0x5a2c4f*/
    }
    v32 = *((unsigned char *)v25 + 286); /*0x5a2c51*/
    if ( v32 < 0xBu ) /*0x5a2c59*/
    {
      *((unsigned char *)v25 + 286) = v32 + 1; /*0x5a2c5d*/
  LABEL_48:
      ++v54; /*0x5a2c63*/
    }
  LABEL_49:
    v56 = 0; /*0x5a2c67*/
    v33 = (float *)&v16[8 * v53]; /*0x5a2c73*/
    do /*0x5a2e54*/
    {
      v34 = v56 & 7; /*0x5a2c7c*/
      v35 = v4[1] + IDA_HIWORD(Direction_X_Offsets[v34]); /*0x5a2c95*/
      IDA_LOWORD(v57) = *v4 + IDA_LOWORD(Direction_X_Offsets[v34]); /*0x5a2c99*/
      IDA_HIWORD(v57) = v35; /*0x5a2ca2*/
      v50 = v57; /*0x5a2cab*/
      if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&v50, 1) ) /*0x5a2cbc*/
        goto LABEL_67; /*0x5a2cbc*/
      v36 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v50); /*0x5a2cd1*/
      v58 = (int)v36; /*0x5a2cd5*/
      if ( Cell::IsEmpty(v36) ) /*0x5a2cd9*/
      {
        if ( v36[17] == -1 ) /*0x5a2cea*/
        {
          v37 = v50; /*0x5a2cf8*/
          if ( *((unsigned int *)g_MapTileArray + 20 * (int16_t)v50 + 20 * g_MapCellWidth * IDA_SHIWORD(v50) + 15) != a3 ) /*0x5a2d14*/
            goto LABEL_58; /*0x5a2d14*/
          v36 = (unsigned int *)v58; /*0x5a2d16*/
        }
        if ( *((unsigned char *)v36 + 286) < 0xBu && BuildingClass::FindByCellHash(v36) != -1 ) /*0x5a2d31*/
        {
          v37 = v50; /*0x5a2d37*/
  LABEL_58:
          v38 = IDA_SHIWORD(v50); /*0x5a2d3b*/
          *(unsigned int *)v33 = v37; /*0x5a2d40*/
          v58 = ((int16_t)v52 - (int16_t)v37) * ((int16_t)v52 - (int16_t)v37) /*0x5a2d62*/
              + (IDA_SHIWORD(v52) - v38) * (IDA_SHIWORD(v52) - v38);
          v62 = Math::Sqrt((double)v58); /*0x5a2d72*/
          v65 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2d83*/
          v39 = IDA_SHIWORD(v50); /*0x5a2d93*/
          v40 = (int16_t)v50; /*0x5a2d9e*/
          v41 = v33; /*0x5a2da9*/
          v33 += 2; /*0x5a2dab*/
          v58 = (int)v41; /*0x5a2dae*/
          *(v33 - 1) = (double)v65 * 5.0 * 2.328306437080797e-10 + v62; /*0x5a2db6*/
          *((unsigned int *)g_MapTileArray + 20 * v40 + 20 * g_MapCellWidth * v39 + 15) = a3; /*0x5a2dd1*/
          v42 = v41[1]; /*0x5a2dd9*/
          ++v53; /*0x5a2ddd*/
          v43 = *v8 + 1; /*0x5a2de3*/
          v61 = v42; /*0x5a2de4*/
          v44 = v43 >> 1; /*0x5a2ded*/
          if ( v43 < v8[1] ) /*0x5a2df1*/
          {
            for ( ; v43 > 1; v44 >>= 1 ) /*0x5a2df6*/
            {
              IDA_LODWORD(v62) = *(unsigned int *)(v8[2] + 4 * v44); /*0x5a2dfe*/
              if ( *(float *)(IDA_LODWORD(v62) + 4) <= (double)v61 ) /*0x5a2e0e*/
                break; /*0x5a2e0e*/
              *(unsigned int *)(v8[2] + 4 * v43) = IDA_LODWORD(v62); /*0x5a2e17*/
              v41 = (float *)v58; /*0x5a2e1a*/
              v43 = v44; /*0x5a2e1e*/
            }
            *(unsigned int *)(v8[2] + 4 * v43) = v41; /*0x5a2e2a*/
            v45 = v8[3]; /*0x5a2e2f*/
            ++*v8; /*0x5a2e35*/
            if ( (unsigned int)v41 > v45 ) /*0x5a2e37*/
              v8[3] = (int)v41; /*0x5a2e39*/
            if ( (unsigned int)v41 < v8[4] ) /*0x5a2e3f*/
              v8[4] = (int)v41; /*0x5a2e41*/
          }
        }
      }
      v4 = v49; /*0x5a2e44*/
  LABEL_67:
      ++v56; /*0x5a2e48*/
    }
    while ( v56 < 8 ); /*0x5a2e54*/
    if ( *v8 ) /*0x5a2e5a*/
    {
      v46 = v8[2]; /*0x5a2e66*/
      v47 = *(int16_t **)(v46 + 4); /*0x5a2e6e*/
      *(unsigned int *)(v46 + 4) = *(unsigned int *)(v46 + 4 * *v8); /*0x5a2e71*/
      *(unsigned int *)(v8[2] + 4 * (*v8)--) = 0; /*0x5a2e79*/
      Heap::SiftDown(v8, 1); /*0x5a2e87*/
      v49 = v47; /*0x5a2e8c*/
    }
    else
    {
      v49 = 0; /*0x5a2e60*/
    }
    if ( v54 < a2 ) /*0x5a2e99*/
    {
      v4 = v49; /*0x5a299d*/
      continue; /*0x5a299d*/
    }
    break;
  }
  LABEL_72:
  RA2_OPDEL(Block); /*0x5a2e9f*/
  if ( v8 ) /*0x5a2eae*/
  {
    RA2_OPDEL((void *)v8[2]); /*0x5a2eb4*/
    RA2_OPDEL(v8); /*0x5a2eba*/
  }
}
}
// 0x6D6410
namespace gamemd {
unsigned int * Terrain::ClimbCheck(AbstractClass * aP0, AbstractClass * aP1)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  bool v5; // bl
  int v6; // ebp
  int v7; // edi
  unsigned int *v8; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int *v12; // [esp+10h] [ebp-18h] BYREF
  unsigned int *v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v2 = *aP1 / 256; /*0x6d6434*/
  IDA_HIWORD(aP1) = aP1[1] / 256; /*0x6d6440*/
  IDA_LOWORD(aP1) = v2; /*0x6d6445*/
  v3 = ((int16_t)v2 << 8) + 128; /*0x6d6462*/
  v4 = (IDA_SHIWORD(aP1) << 8) + 128; /*0x6d6468*/
  v5 = (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1) + 80) & 0x1000) != 0; /*0x6d6486*/
  v6 = v4 + 1536; /*0x6d649d*/
  v14 = *((char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1) + 283); /*0x6d64a3*/
  v7 = v3 + 1536; /*0x6d64a7*/
  v15 = 0; /*0x6d64a9*/
  while ( 1 ) /*0x6d64b1*/
  {
    v7 -= 8; /*0x6d64b1*/
    v6 -= 8; /*0x6d64c1*/
    IDA_LOWORD(v13) = v7 / 256; /*0x6d64c9*/
    IDA_HIWORD(v13) = v6 / 256; /*0x6d64e0*/
    v12 = v13; /*0x6d64e9*/
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v12); /*0x6d64f3*/
    v9 = *((char *)v8 + 283) - v14; /*0x6d64ff*/
    if ( v5 ) /*0x6d6505*/
      v9 += 4 * ((v8[80] >> 8) & 1); /*0x6d6513*/
    v10 = v9 << 7; /*0x6d6516*/
    if ( (int16_t)((v7 - v10) / 256) <= (int16_t)aP1 && (int16_t)((v6 - v10) / 256) <= IDA_SHIWORD(aP1) ) /*0x6d654e*/
      break; /*0x6d654e*/
    if ( v12 == aP1 ) /*0x6d6555*/
    {
      *aP0 = aP1; /*0x6d6582*/
      return aP0; /*0x6d655b*/
    }
  }
  *aP0 = v12; /*0x6d6572*/
  return aP0; /*0x6d656f*/
}
} // namespace gamemd

// 0x71DD80
namespace gamemd {
int Terrain::LookupByName()
{
  int v2; // esi

  if ( !this ) /*0x71dd86*/
    return -1; /*0x71dd86*/
  v2 = 0; /*0x71dd8d*/
  if ( g_RulesClassInitState <= 0 ) /*0x71dd91*/
    return -1; /*0x71ddb6*/
  while ( _strcmpi(this, (const void *)(*((unsigned int *)dword_A8E31C + v2) + 36)) ) /*0x71ddaa*/
  {
    if ( ++v2 >= g_RulesClassInitState ) /*0x71ddb4*/
      return -1; /*0x71ddb4*/
  }
  return v2; /*0x71ddb6*/
}
} // namespace gamemd
