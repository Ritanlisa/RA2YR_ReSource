// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapSeedClass_18_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Map_e4.hpp"

// 0x5A5B50
namespace gamemd {
MapSeedClass * * MapSeedClass::PlaceBuildingClusters(MapSeedClass * aP1)
{
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int i; // esi
  ObjectClass * v12;
  int v13; // ebx
  char v14; // bl
  unsigned int v15; // eax
  int v16; // ebx
  _DWORD *NeighbourContent; // esi
  unsigned int v18; // eax
  __int64 v20; // [esp+10h] [ebp-118h] BYREF
  char v21; // [esp+1Ah] [ebp-10Eh]
  char v22; // [esp+1Bh] [ebp-10Dh]
  int v23; // [esp+1Ch] [ebp-10Ch] BYREF
  __int16 v24; // [esp+20h] [ebp-108h] BYREF
  __int16 v25; // [esp+22h] [ebp-106h]
  char v26; // [esp+27h] [ebp-101h]
  int v27; // [esp+28h] [ebp-100h] BYREF
  int v28; // [esp+2Ch] [ebp-FCh] BYREF
  int v29; // [esp+30h] [ebp-F8h] BYREF
  int v30; // [esp+34h] [ebp-F4h]
  int v31; // [esp+38h] [ebp-F0h]
  int v32; // [esp+3Ch] [ebp-ECh]
  _DWORD v33[2]; // [esp+40h] [ebp-E8h] BYREF
  int v34; // [esp+48h] [ebp-E0h]
  int v35; // [esp+4Ch] [ebp-DCh]
  int v36; // [esp+50h] [ebp-D8h]
  int v37; // [esp+54h] [ebp-D4h]
  int v38; // [esp+58h] [ebp-D0h] BYREF
  int v39; // [esp+5Ch] [ebp-CCh]
  int v40; // [esp+60h] [ebp-C8h]
  int v41; // [esp+64h] [ebp-C4h]
  int v42; // [esp+68h] [ebp-C0h]
  __int64 v43; // [esp+6Ch] [ebp-BCh] BYREF
  int v44; // [esp+74h] [ebp-B4h]
  int v45; // [esp+78h] [ebp-B0h]
  __int64 v46; // [esp+7Ch] [ebp-ACh] BYREF
  int v47; // [esp+84h] [ebp-A4h]
  int v48; // [esp+88h] [ebp-A0h]
  __int64 v49; // [esp+8Ch] [ebp-9Ch] BYREF
  int v50[4]; // [esp+94h] [ebp-94h] BYREF
  int v51[4]; // [esp+A4h] [ebp-84h] BYREF
  _DWORD v52[4]; // [esp+B4h] [ebp-74h] BYREF
  int v53[4]; // [esp+C4h] [ebp-64h] BYREF
  int v54[4]; // [esp+D4h] [ebp-54h] BYREF
  int v55[4]; // [esp+E4h] [ebp-44h] BYREF
  int v56[4]; // [esp+F4h] [ebp-34h] BYREF
  _DWORD v57[4]; // [esp+104h] [ebp-24h] BYREF
  int v58[4]; // [esp+114h] [ebp-14h] BYREF
  char v59[4]; // [esp+124h] [ebp-4h] BYREF

  v33[1] = this; /*0x5a5b6a*/
  v2 = (int *)globalHelper_0A7640(v50, aP1); /*0x5a5b6e*/
  v3 = *v2; /*0x5a5b73*/
  v38 = *v2; /*0x5a5b75*/
  v4 = v2[1]; /*0x5a5b79*/
  v39 = v4; /*0x5a5b7c*/
  v40 = v2[2]; /*0x5a5b83*/
  v5 = v2[3]; /*0x5a5b87*/
  v41 = v5; /*0x5a5b8d*/
  if ( v5 > 5 ) /*0x5a5b91*/
  {
    v6 = v5 - 2; /*0x5a5b9a*/
    v25 = v4 + 2; /*0x5a5b9d*/
    v24 = v3; /*0x5a5ba9*/
    if ( v5 - 2 > 3 ) /*0x5a5bae*/
    {
      do /*0x5a5de6*/
      {
        v27 = *(_DWORD *)FindClearPlacementCell(&v23, &v24, &v38, 2); /*0x5a5bd8*/
        v7 = *(_DWORD *)globalHelper_0A7070(v33, &v27, &v38, 2); /*0x5a5bf0*/
        v28 = v7; /*0x5a5bf7*/
        if ( v7 && (v24 || v25) && (__int16)v7 - v24 >= 6 ) /*0x5a5c28*/
        {
          IDA_HIDWORD(v46) = IDA_SHIWORD(v27); /*0x5a5c3b*/
          IDA_LODWORD(v46) = (__int16)v27 - 4; /*0x5a5c4c*/
          v47 = 4; /*0x5a5c53*/
          v48 = 3; /*0x5a5c5e*/
          if ( !IsAreaClearMap((int *)&v46, 0, 0) ) /*0x5a5c65*/
            goto LABEL_11; /*0x5a5c65*/
          do /*0x5a5c92*/
          {
            v20 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5c78*/
            v8 = Math::RoundToInt((double)v20 * 4.656612874161595e-10); /*0x5a5c8a*/
          }
          while ( v8 > 1 ); /*0x5a5c92*/
          if ( v8 ) /*0x5a5c96*/
          {
            IDA_HIWORD(v31) = IDA_HIWORD(v27); /*0x5a5ca4*/
            IDA_LOWORD(v31) = v27 - 3; /*0x5a5cae*/
            v29 = v31; /*0x5a5cb9*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, &v29, -1, -1); /*0x5a5cc6*/
          }
          else
          {
  LABEL_11:
            PlaceMapSeedClassBuildings(dword_ABBEC4 + 2, &v27, -1, -1); /*0x5a5cd9*/
          }
          v9 = v27; /*0x5a5cde*/
          v10 = v28; /*0x5a5ce2*/
          for ( i = 0; i < (__int16)v28 - (__int16)v27 - 1; ++i ) /*0x5a5cf3*/
          {
            IDA_LOWORD(v32) = i + 1; /*0x5a5cfa*/
            IDA_LOWORD(v30) = v9 + i + 1; /*0x5a5d0a*/
            IDA_HIWORD(v30) = IDA_HIWORD(v27); /*0x5a5d0f*/
            v29 = v30; /*0x5a5d1a*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache, &v29, -1, -1); /*0x5a5d28*/
            v9 = v27; /*0x5a5d2d*/
            v10 = v28; /*0x5a5d31*/
          }
          IDA_HIDWORD(v43) = IDA_SHIWORD(v28); /*0x5a5d4b*/
          IDA_LODWORD(v43) = v10; /*0x5a5d56*/
          v44 = 4; /*0x5a5d5a*/
          v45 = 3; /*0x5a5d62*/
          if ( !IsAreaClearMap((int *)&v43, 0, 0) ) /*0x5a5d6a*/
            goto LABEL_18; /*0x5a5d6a*/
          do /*0x5a5da0*/
          {
            v49 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5d7d*/
            v12 = Math::RoundToInt((double)v49 * 4.656612874161595e-10); /*0x5a5d98*/
          }
          while ( v12 > 1 ); /*0x5a5da0*/
          if ( v12 ) /*0x5a5da4*/
            PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, &v28, -1, -1); /*0x5a5db6*/
          else
  LABEL_18:
            PlaceMapSeedClassBuildings(dword_ABBEC4, &v28, -1, -1); /*0x5a5dc6*/
          v6 -= 10; /*0x5a5dcb*/
          v25 += 10; /*0x5a5dce*/
        }
        else
        {
          v25 += 2; /*0x5a5ddb*/
          v6 -= 2; /*0x5a5de1*/
        }
      }
      while ( v6 > 3 ); /*0x5a5de6*/
      IDA_LOWORD(v3) = v38; /*0x5a5dec*/
      IDA_LOWORD(v4) = v39; /*0x5a5df0*/
      v5 = v41; /*0x5a5df4*/
    }
  }
  if ( v40 > 8 ) /*0x5a5e0a*/
  {
    v13 = v5 - 5; /*0x5a5e10*/
    v27 = v5 - 5; /*0x5a5e18*/
    v24 = v3 + 5; /*0x5a5e1c*/
    v25 = v4; /*0x5a5e21*/
    while ( v13 > 3 ) /*0x5a5e26*/
    {
      IDA_LODWORD(v20) = *(_DWORD *)FindClearPlacementCell(v59, &v24, &v38, 4); /*0x5a5e4d*/
      v5 = *(_DWORD *)globalHelper_0A7070(&v49, &v20, &v38, 4); /*0x5a5e68*/
      v28 = v5; /*0x5a5e6a*/
      if ( v5 && ((IDA_LOWORD(v5) = v25, v24) || v25) && (IDA_LOWORD(v5) = v25, IDA_SHIWORD(v5) - v25 >= 6) ) /*0x5a5ea1*/
      {
        IDA_LOWORD(v5) = IDA_WORD1(v20); /*0x5a5ea7*/
        v22 = 0; /*0x5a5eac*/
        v14 = 1; /*0x5a5eb4*/
        v21 = 0; /*0x5a5eb6*/
        v26 = 0; /*0x5a5ebb*/
        if ( IDA_SWORD1(v20) < IDA_SHIWORD(v5) ) /*0x5a5ec0*/
        {
          while ( 1 ) /*0x5a5ec6*/
          {
            if ( v22 ) /*0x5a5ed1*/
            {
              v54[0] = (__int16)v20; /*0x5a607e*/
              v54[1] = (__int16)v5; /*0x5a6085*/
              v54[2] = 3; /*0x5a609b*/
              v54[3] = 1; /*0x5a60a2*/
              if ( IsAreaClearMap(v54, 0, 0) ) /*0x5a60a9*/
              {
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 1, &v20, -1, -1); /*0x5a60c6*/
                if ( v21 ) /*0x5a60d1*/
                {
                  if ( v26 ) /*0x5a60dd*/
                  {
                    IDA_HIWORD(v37) = IDA_WORD1(v20); /*0x5a60e9*/
                    IDA_LOWORD(v37) = v20 + 1; /*0x5a60ee*/
                    v23 = v37; /*0x5a6108*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 5, &v23, -1, -1); /*0x5a610c*/
                    v26 = 0; /*0x5a6111*/
                  }
                  else
                  {
                    IDA_HIWORD(v42) = IDA_WORD1(v20); /*0x5a6125*/
                    IDA_LOWORD(v42) = v20 + 1; /*0x5a612f*/
                    v23 = v42; /*0x5a613a*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 4, &v23, -1, -1); /*0x5a6147*/
                  }
                }
              }
              else
              {
                v52[0] = (__int16)v20; /*0x5a615f*/
                v52[1] = IDA_SWORD1(v20); /*0x5a6168*/
                v52[2] = 3; /*0x5a616f*/
                v52[3] = 4; /*0x5a6176*/
                if ( v21 ) /*0x5a6181*/
                {
                  IDA_LOWORD(v36) = v20 + 1; /*0x5a618d*/
                  IDA_HIWORD(v36) = IDA_WORD1(v20) - 1; /*0x5a6197*/
                  v23 = v36; /*0x5a61a0*/
                  PlaceMapSeedClassBuildings(dword_AA0E20 + 3, &v23, -1, -1); /*0x5a61af*/
                  v21 = 0; /*0x5a61b4*/
                }
                if ( (unsigned __int8)MapSeedClass::ValidateRectBounds(v52) ) /*0x5a61c0*/
                {
                  v16 = IDA_SHIWORD(v28); /*0x5a61cd*/
                  if ( IDA_SHIWORD(v28) - IDA_SWORD1(v20) < 4 ) /*0x5a61de*/
                  {
                    IDA_LOWORD(v5) = PlaceMapSeedClassBuildings(g_CellTileTypeCache + 7, &v20, -1, -1); /*0x5a63e7*/
                    goto LABEL_73; /*0x5a63ec*/
                  }
                  v53[0] = (__int16)v20; /*0x5a61e9*/
                  v53[1] = IDA_SWORD1(v20) + 3; /*0x5a61fd*/
                  v53[2] = 3; /*0x5a6204*/
                  v53[3] = 2; /*0x5a620b*/
                  if ( IsAreaClearMap(v53, 0, 0) && v16 - IDA_SWORD1(v20) > 5 ) /*0x5a6229*/
                  {
                    v21 = 1; /*0x5a622b*/
                    v26 = 1; /*0x5a6230*/
                  }
                  PlaceMapSeedClassBuildings(g_CellTileTypeCache + 3, &v20, -1, -1); /*0x5a6246*/
                  v56[0] = (__int16)v20 - 1; /*0x5a6257*/
                  v56[1] = IDA_SWORD1(v20); /*0x5a6267*/
                  v56[2] = 1; /*0x5a626e*/
                  v56[3] = 3; /*0x5a6275*/
                  if ( IsAreaClearMap(v56, 1, 0) ) /*0x5a627c*/
                  {
                    IDA_HIWORD(v35) = IDA_WORD1(v20); /*0x5a628f*/
                    IDA_LOWORD(v35) = v20 - 1; /*0x5a6294*/
                    v23 = v35; /*0x5a62ae*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 12, &v23, -1, -1); /*0x5a62b2*/
                  }
                  v58[0] = (__int16)v20 + 3; /*0x5a62c4*/
                  v58[1] = IDA_SWORD1(v20); /*0x5a62d4*/
                  v58[2] = 1; /*0x5a62db*/
                  v58[3] = 3; /*0x5a62e2*/
                  if ( IsAreaClearMap(v58, 1, 0) ) /*0x5a62e9*/
                  {
                    IDA_HIWORD(v34) = IDA_WORD1(v20); /*0x5a62fe*/
                    IDA_LOWORD(v34) = v20 + 3; /*0x5a6303*/
                    v23 = v34; /*0x5a631d*/
                    PlaceMapSeedClassBuildings(dword_AA0E20 + 12, &v23, -1, -1); /*0x5a6321*/
                  }
                  IDA_WORD1(v20) += 2; /*0x5a6326*/
                }
                else
                {
                  v33[0] = v20 - 0x10000; /*0x5a6340*/
                  v23 = v20 - 0x10000; /*0x5a634e*/
                  PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, &v23, -1, -1); /*0x5a635d*/
                  IDA_LOWORD(v32) = v20 + 1; /*0x5a636e*/
                  IDA_HIWORD(v32) = IDA_WORD1(v20) - 2; /*0x5a6377*/
                  v23 = v32; /*0x5a6386*/
                  NeighbourContent = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23); /*0x5a638f*/
                  if ( Value::InRange(NeighbourContent) && Value::InRange(NeighbourContent) ) /*0x5a639e*/
                  {
                    do /*0x5a63c4*/
                    {
                      NeighbourContent[14] = g_CellTileTypeCache + 1; /*0x5a63b1*/
                      *((_BYTE *)NeighbourContent + 282) = 1; /*0x5a63b4*/
                      NeighbourContent = Cell::GetNeighbourContent(NeighbourContent, 0); /*0x5a63c0*/
                    }
                    while ( Value::InRange(NeighbourContent) ); /*0x5a63c4*/
                  }
                  v22 = 0; /*0x5a63cd*/
                }
              }
              goto LABEL_38; /*0x5a6116*/
            }
            v51[3] = 2; /*0x5a5ede*/
            v57[2] = 3; /*0x5a5ee7*/
            v51[2] = 3; /*0x5a5eee*/
            v51[0] = (__int16)v20; /*0x5a5f0a*/
            v51[1] = (__int16)v5; /*0x5a5f11*/
            v57[0] = (__int16)v20; /*0x5a5f18*/
            v57[1] = (__int16)v5 - 3; /*0x5a5f1f*/
            v57[3] = 4; /*0x5a5f26*/
            if ( IDA_SHIWORD(v28) - (__int16)v5 < 2 ) /*0x5a5f2d*/
              goto LABEL_73; /*0x5a5f2d*/
            if ( !v14 ) /*0x5a5f35*/
              goto LABEL_79; /*0x5a5f35*/
            v55[0] = (__int16)v20; /*0x5a5f3b*/
            v55[1] = (__int16)v5 - 3; /*0x5a5f42*/
            v55[2] = 3; /*0x5a5f53*/
            v55[3] = 4; /*0x5a5f5e*/
            if ( !IsAreaClearMap(v55, 0, 0) ) /*0x5a5f65*/
              goto LABEL_79; /*0x5a5f65*/
            do /*0x5a5f96*/
            {
              v43 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5f7c*/
              v15 = Math::RoundToInt((double)v43 * 4.656612874161595e-10); /*0x5a5f8e*/
            }
            while ( v15 > 1 ); /*0x5a5f96*/
            if ( v15 ) /*0x5a5f9a*/
            {
              v30 = v20 - 196608; /*0x5a5fb3*/
              v23 = v20 - 196608; /*0x5a5fbe*/
              PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, &v23, -1, -1); /*0x5a5fcb*/
            }
            else
            {
  LABEL_79:
              if ( (unsigned __int8)MapSeedClass::ValidateRectBounds(v57) ) /*0x5a5fff*/
              {
                v31 = v20 - 196608; /*0x5a6019*/
                v23 = v20 - 196608; /*0x5a6027*/
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 5, &v23, -1, -1); /*0x5a6036*/
                PlaceMapSeedClassBuildings(g_CellTileTypeCache + 1, &v20, -1, -1); /*0x5a604a*/
              }
              else
              {
                if ( !IsAreaClearMap(v51, 0, 0) ) /*0x5a6060*/
                  goto LABEL_38; /*0x5a6060*/
                PlaceMapSeedClassBuildings(dword_ABBEC4 + 1, &v20, -1, -1); /*0x5a6076*/
              }
            }
            v22 = 1; /*0x5a5fd0*/
  LABEL_38:
            v14 = 0; /*0x5a5fda*/
            IDA_LOWORD(v5) = ++IDA_WORD1(v20); /*0x5a5fe1*/
            if ( IDA_SWORD1(v20) >= IDA_SHIWORD(v28) ) /*0x5a5fed*/
            {
              if ( v21 ) /*0x5a63f7*/
              {
                IDA_LOWORD(v29) = v20 + 1; /*0x5a6403*/
                IDA_HIWORD(v29) = IDA_WORD1(v20) - 1; /*0x5a640e*/
                v23 = v29; /*0x5a6422*/
                PlaceMapSeedClassBuildings(dword_AA0E20 + 3, &v23, -1, -1); /*0x5a6426*/
              }
              break; /*0x5a6426*/
            }
          }
        }
        v50[0] = (__int16)v20; /*0x5a642b*/
        v50[1] = IDA_SWORD1(v20); /*0x5a6446*/
        v50[2] = 3; /*0x5a644d*/
        v50[3] = 4; /*0x5a6454*/
        if ( !IsAreaClearMap(v50, 0, 0) ) /*0x5a645f*/
          goto LABEL_72; /*0x5a645f*/
        do /*0x5a648f*/
        {
          v46 = (unsigned int)Random::State(&g_Randomizer); /*0x5a6472*/
          v18 = Math::RoundToInt((double)v46 * 4.656612874161595e-10); /*0x5a6487*/
        }
        while ( v18 > 1 ); /*0x5a648f*/
        if ( v18 ) /*0x5a6493*/
          IDA_LOWORD(v5) = PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, &v20, -1, -1); /*0x5a64a6*/
        else
  LABEL_72:
          IDA_LOWORD(v5) = PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, &v20, -1, -1); /*0x5a64bd*/
  LABEL_73:
        v13 = v27 - 10; /*0x5a64c9*/
        v24 += 10; /*0x5a64d4*/
        v27 -= 10; /*0x5a64da*/
      }
      else
      {
        v24 += 2; /*0x5a64e0*/
        v13 -= 2; /*0x5a64e6*/
        v27 = v13; /*0x5a64e9*/
      }
    }
  }
  return v5; /*0x5a64f5*/
}
} // namespace gamemd
// 0x5A76E0
namespace gamemd {
int MapSeedClass::ValidateRectBounds()
{
  int v2; // ecx
  int v3; // edi
  int v4; // edx
  int *v6; // eax
  int v7; // edx
  int v8; // esi
  __int16 v9; // dx
  int *v10; // edi
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]

  v2 = *this; /*0x5a76ee*/
  v3 = this->u32_4; /*0x5a76f0*/
  v12 = (__int16)v3 + (__int16)v2; /*0x5a76fe*/
  if ( v12 > g_MapCellHeight_Value /*0x5a772a*/
    && (__int16)v2 - (__int16)v3 < g_MapCellHeight_Value
    && (__int16)v3 - (__int16)v2 < g_MapCellHeight_Value
    && v12 <= g_MapCellCount )
  {
    v13 = this->q008 + v2 - 1; /*0x5a7737*/
    v12 = (__int16)v3 + (__int16)v13; /*0x5a7746*/
    if ( v12 > g_MapCellHeight_Value /*0x5a7772*/
      && (__int16)v13 - (__int16)v3 < g_MapCellHeight_Value
      && (__int16)v3 - (__int16)v13 < g_MapCellHeight_Value
      && v12 <= g_MapCellCount )
    {
      v14 = this->q00C + v3 - 1; /*0x5a7782*/
      v12 = (__int16)v14 + (__int16)v2; /*0x5a778e*/
      if ( v12 > g_MapCellHeight_Value /*0x5a77ba*/
        && (__int16)v2 - (__int16)v14 < g_MapCellHeight_Value
        && (__int16)v14 - (__int16)v2 < g_MapCellHeight_Value
        && v12 <= g_MapCellCount )
      {
        v4 = (__int16)v14; /*0x5a77c5*/
        v14 = (__int16)v14 + (__int16)v13; /*0x5a77cf*/
        if ( v14 > g_MapCellHeight_Value /*0x5a77fa*/
          && (__int16)v13 - v4 < g_MapCellHeight_Value
          && v4 - (__int16)v13 < g_MapCellHeight_Value
          && v14 <= g_MapCellCount )
        {
          if ( __OFSUB__(v3, v3 + 3) ) /*0x5a7805*/
          {
  LABEL_24:
            v8 = *this; /*0x5a785b*/
            if ( *this >= *this + 3 ) /*0x5a7862*/
              return 1; /*0x5a78b9*/
            while ( 1 ) /*0x5a786b*/
            {
              v9 = this->u32_4 + 3; /*0x5a786b*/
              IDA_LOWORD(v12) = v8; /*0x5a7874*/
              IDA_HIWORD(v12) = v9; /*0x5a7879*/
              v10 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v12); /*0x5a7883*/
              if ( !CellClass::InBounds(v10) && !Cell::IsEmpty(v10) && !CellClass::InMapDataRange(v10) ) /*0x5a789d*/
                break; /*0x5a789d*/
              if ( ++v8 >= *this + 3 ) /*0x5a78ae*/
                return 1; /*0x5a78ae*/
            }
          }
          else
          {
            while ( 1 ) /*0x5a7807*/
            {
              v2 = v2; /*0x5a7807*/
              if ( !__OFSUB__(v2, v2 + 3) ) /*0x5a780e*/
                break; /*0x5a780e*/
  LABEL_23:
              if ( ++v3 >= this->u32_4 + 3 ) /*0x5a7859*/
                goto LABEL_24; /*0x5a7859*/
            }
            while ( 1 ) /*0x5a7814*/
            {
              IDA_LOWORD(v12) = v2; /*0x5a7814*/
              IDA_HIWORD(v12) = v3; /*0x5a781f*/
              v6 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v12); /*0x5a7824*/
              v7 = v6[14]; /*0x5a7829*/
              if ( (v7 < g_CellTileTypeCache || v7 > g_CellTileTypeCache + 1) && !Value::InRange(v6) ) /*0x5a783d*/
                break; /*0x5a783d*/
              v2 = *this; /*0x5a7846*/
              if ( ++v2 >= *this + 3 ) /*0x5a784e*/
                goto LABEL_23; /*0x5a784e*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x5a78b0*/
}
} // namespace gamemd
// 0x597FA0
namespace gamemd {
wchar_t * MapSeedClass::GetCell()
{
  return GetStringCSF(aGuiSavemapmenu, 0, g_Str_File_MapGen_cpp, 5578); /*0x597fb6*/
}
} // namespace gamemd
// 0x597FC0
namespace gamemd {
wchar_t * MapSeedClass::SetCell()
{
  return GetStringCSF(aGuiDeletemapme, 0, g_Str_File_MapGen_cpp, 5584); /*0x597fd6*/
}
} // namespace gamemd
// 0x597FE0
namespace gamemd {
wchar_t * MapSeedClass::Validate()
{
  return GetStringCSF(aGuiMapsaved, 0, g_Str_File_MapGen_cpp, 5590); /*0x597ff6*/
}
} // namespace gamemd
// 0x5AC270
namespace gamemd {
MapSeedClass * MapSeedClass::QueryInterface(char a2)
{
  LoadOptions::Cleanup(); /*0x5ac273*/
  if ( (a2 & 1) != 0 ) /*0x5ac27d*/
    RA2_OPDEL(); /*0x5ac280*/
  return this; /*0x5ac28a*/
}
} // namespace gamemd
// 0x5AC4C0
namespace gamemd {
void MapSeedClass_18::ClearBuffer()
{
  void *v2; // eax

  v2 = this->Items; /*0x5ac4c6*/
  this->q010 = 0; /*0x5ac4c9*/
  if ( v2 && this->IsAllocated ) /*0x5ac4d0*/
  {
    RA2_OPDEL(v2); /*0x5ac4d6*/
    this->Items = 0; /*0x5ac4de*/
  }
  this->IsAllocated = 0; /*0x5ac4e1*/
  this->q008 = 0; /*0x5ac4e4*/
}
} // namespace gamemd

// 0x5AC4F0
namespace gamemd {
unsigned int MapSeedClass_18::PointerToIndex(int a2)
{
  if ( this->IsInitialized ) /*0x5ac4f0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5ac505*/
  else
    return 0; /*0x5ac4f7*/
}
} // namespace gamemd

// 0x5AC510
namespace gamemd {
int MapSeedClass_18::GetCell(int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5ac51a*/
}
} // namespace gamemd

// 0x5ACA60
namespace gamemd {
char MapSeedClass_18::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5aca62*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5aca6d*/
  {
    v3 = 0; /*0x5aca6f*/
    if ( v2 <= 0 ) /*0x5aca73*/
      return 1; /*0x5aca93*/
    v4 = (_DWORD *)this->Items; /*0x5aca75*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5aca7b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5aca84*/
    {
      ++v3; /*0x5aca86*/
      ++v4; /*0x5aca87*/
      if ( v3 >= v2 ) /*0x5aca8c*/
        return 1; /*0x5aca8c*/
    }
  }
  return 0; /*0x5aca8e*/
}
} // namespace gamemd

// 0x5ACAA0
namespace gamemd {
char MapSeedClass_18::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5acaac*/
  {
    this->IsInitialized = 0; /*0x5acab6*/
    if ( a3 ) /*0x5acabc*/
      v4 = a3; /*0x5acad2*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5acace*/
    this->IsInitialized = 1; /*0x5acad6*/
    if ( v4 ) /*0x5acada*/
    {
      if ( this->Items ) /*0x5acae5*/
      {
        v6 = this->Capacity; /*0x5acaec*/
        if ( a2 < v6 ) /*0x5acaf1*/
          v6 = a2; /*0x5acaf3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5acaf9*/
          ++i; /*0x5acafe*/
        if ( this->IsAllocated ) /*0x5acb0b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x5acb16*/
          this->Items = 0; /*0x5acb1e*/
        }
      }
      this->Items = v4; /*0x5acb27*/
      this->Capacity = a2; /*0x5acb2f*/
      this->IsAllocated = a3 == 0; /*0x5acb32*/
      return 1; /*0x5acb38*/
    }
    else
    {
      return 0; /*0x5acadf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x5acb42*/
    return 1; /*0x5acb48*/
  }
}
} // namespace gamemd

// 0x5ACB50
namespace gamemd {
void MapSeedClass_18::ddtor()
{
  if ( this->Items && this->IsAllocated ) /*0x5acb5d*/
  {
    RA2_OPDEL(this->Items); /*0x5acb63*/
    this->Items = 0; /*0x5acb6b*/
  }
  this->IsAllocated = 0; /*0x5acb6e*/
  this->Capacity = 0; /*0x5acb71*/
}
} // namespace gamemd

// 0x5ACB80
int MapSeedClass::GenerateSeed(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x5acb80*/
    return 0; /*0x5acb88*/
  v3 = this->Capacity; /*0x5acb8e*/
  result = 0; /*0x5acb91*/
  if ( v3 <= 0 ) /*0x5acb95*/
    return -1; /*0x5acbac*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x5acb9b*/
  {
    if ( ++result >= v3 ) /*0x5acbaa*/
      return -1; /*0x5acbaa*/
  }
  return result; /*0x5acb8a*/
}
// 0x5ACBC0
namespace gamemd {
unsigned int MapSeedClass_18::Generate(int a2)
{
  if ( this->IsInitialized ) /*0x5acbc0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5acbd5*/
  else
    return 0; /*0x5acbc7*/
}
} // namespace gamemd

// 0x5ACBE0
namespace gamemd {
char MapSeedClass_18::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5acbec*/
  {
    this->IsInitialized = 0; /*0x5acbf2*/
    if ( a3 ) /*0x5acbf8*/
      v4 = a3; /*0x5acc0e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5acc0a*/
    this->IsInitialized = 1; /*0x5acc12*/
    if ( !v4 ) /*0x5acc16*/
      return 0; /*0x5acc8a*/
    if ( this->Items ) /*0x5acc18*/
    {
      v5 = this->q008; /*0x5acc1f*/
      if ( a2 < v5 ) /*0x5acc24*/
        v5 = a2; /*0x5acc26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5acc2c*/
        ++i; /*0x5acc31*/
      if ( this->IsAllocated ) /*0x5acc3e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5acc49*/
        this->Items = 0; /*0x5acc51*/
      }
    }
    this->Items = v4; /*0x5acc5a*/
    this->q008 = a2; /*0x5acc62*/
    this->IsAllocated = a3 == 0; /*0x5acc65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x5acc6e*/
  }
  v7 = this->q008; /*0x5acc71*/
  if ( v7 < this->q010 ) /*0x5acc79*/
    this->q010 = v7; /*0x5acc7b*/
  return 1; /*0x5acc7e*/
}
} // namespace gamemd

// 0x5ACC90
namespace gamemd {
int MapSeedClass_18::FindItem(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x5acc90*/
  result = 0; /*0x5acc93*/
  if ( v2 <= 0 ) /*0x5acc98*/
    return -1; /*0x5accaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5acc9e*/
  {
    if ( ++result >= v2 ) /*0x5accad*/
      return -1; /*0x5accad*/
  }
  return result; /*0x5accb2*/
}
}
// 0x5AD430
namespace gamemd {
VectorClass_flat * MapSeedClass_18::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5ad433*/
  *this = (void*)&VectorClass__WIN32_FIND_DATAA___vftable; /*0x5ad436*/
  if ( v3 && this->IsAllocated ) /*0x5ad440*/
  {
    RA2_OPDEL(v3); /*0x5ad448*/
    this->Items = 0; /*0x5ad450*/
  }
  this->IsAllocated = 0; /*0x5ad45b*/
  this->Capacity = 0; /*0x5ad461*/
  if ( (a2 & 1) != 0 ) /*0x5ad468*/
    RA2_OPDEL(); /*0x5ad46b*/
  return this; /*0x5ad475*/
}
} // namespace gamemd

// 0x5AD480
namespace gamemd {
DynamicVector * MapSeedClass_18::Constructor_VectorClass__WIN32_FIND_DATAA___(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5ad483*/
  *this = (void*)&VectorClass__WIN32_FIND_DATAA___vftable; /*0x5ad486*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5ad490*/
  {
    RA2_OPDEL(v3); /*0x5ad498*/
    *(this + 1) = 0; /*0x5ad4a0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5ad4ab*/
  *(this + 2) = 0; /*0x5ad4b1*/
  if ( (a2 & 1) != 0 ) /*0x5ad4b8*/
    RA2_OPDEL(); /*0x5ad4bb*/
  return this; /*0x5ad4c5*/
}
} // namespace gamemd
