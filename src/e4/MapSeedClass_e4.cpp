// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapSeedClass_18_e4.hpp"

// 0x597FA0
wchar_t * MapSeedClass::GetCell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *MapSeedClass::_vt06()
{
  return GetStringCSF(aGuiSavemapmenu, 0, g_Str_File_MapGen_cpp, 5578); /*0x597fb6*/
}
}

// 0x597FC0
wchar_t * MapSeedClass::SetCell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *MapSeedClass::_vt07()
{
  return GetStringCSF(aGuiDeletemapme, 0, g_Str_File_MapGen_cpp, 5584); /*0x597fd6*/
}
}

// 0x597FE0
wchar_t * MapSeedClass::Validate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *MapSeedClass::_vt08()
{
  return GetStringCSF(aGuiMapsaved, 0, g_Str_File_MapGen_cpp, 5590); /*0x597ff6*/
}
}

// 0x5A5B50
short MapSeedClass::PlaceBuildingClusters(MapSeedClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall MapSeedClass::PlaceBuildingClusters(void *this, MapSeedClass *aP1)
{
  MapSeedClass **v2; // eax
  MapSeedClass *v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // ax
  __int16 uniqueId; // cx
  int i; // esi
  unsigned int v12; // eax
  int v13; // ebx
  char v14; // bl
  unsigned int v15; // eax
  int uniqueId_high; // ebx
  VectorClass *NeighbourContent; // esi
  unsigned int v18; // eax
  __int16 a1[4]; // [esp+10h] [ebp-118h] BYREF
  char v21; // [esp+1Ah] [ebp-10Eh]
  char v22; // [esp+1Bh] [ebp-10Dh]
  ObjectClass v23; // [esp+1Ch] [ebp-10Ch] BYREF
  int v24; // [esp+C8h] [ebp-60h]
  int v25; // [esp+CCh] [ebp-5Ch]
  int v26; // [esp+D0h] [ebp-58h]
  _DWORD v27[4]; // [esp+D4h] [ebp-54h] BYREF
  _DWORD v28[4]; // [esp+E4h] [ebp-44h] BYREF
  _DWORD v29[4]; // [esp+F4h] [ebp-34h] BYREF
  int v30[4]; // [esp+104h] [ebp-24h] BYREF
  _DWORD v31[4]; // [esp+114h] [ebp-14h] BYREF
  char v32[4]; // [esp+124h] [ebp-4h] BYREF

  v23.owningHouseIndex = (int)this; /*0x5a5b6a*/
  v2 = (MapSeedClass **)globalHelper_0A7640(&v23.spawnStatus, aP1); /*0x5a5b6e*/
  v3 = *v2; /*0x5a5b73*/
  v23.ambientSoundController[0] = (int)*v2; /*0x5a5b75*/
  v4 = (int)v2[1]; /*0x5a5b79*/
  v23.ambientSoundController[1] = v4; /*0x5a5b7c*/
  v23.ambientSoundController[2] = (int)v2[2]; /*0x5a5b83*/
  v5 = (int)v2[3]; /*0x5a5b87*/
  v23.ambientSoundController[3] = v5; /*0x5a5b8d*/
  if ( v5 > 5 ) /*0x5a5b91*/
  {
    v6 = v5 - 2; /*0x5a5b9a*/
    *(_WORD *)&v23.__pad_0[6] = v4 + 2; /*0x5a5b9d*/
    *(_WORD *)&v23.__pad_0[4] = (_WORD)v3; /*0x5a5ba9*/
    if ( v5 - 2 > 3 ) /*0x5a5bae*/
    {
      do /*0x5a5de6*/
      {
        *(_DWORD *)&v23.__pad_0[12] = *FindClearPlacementCell( /*0x5a5bd8*/
                                         &v23,
                                         (MapSeedClass *)&v23.__pad_0[4],
                                         (MapSeedClass *)v23.ambientSoundController,
                                         2);
        v7 = *globalHelper_0A7070( /*0x5a5bf0*/
                (MapSeedClass *)&v23.objectTypeFlags,
                (__int16 *)&v23.__pad_0[12],
                (MapSeedClass *)v23.ambientSoundController,
                2);
        v23.uniqueId = v7; /*0x5a5bf7*/
        if ( v7 /*0x5a5c28*/
          && (*(_WORD *)&v23.__pad_0[4] || *(_WORD *)&v23.__pad_0[6])
          && (__int16)v7 - *(__int16 *)&v23.__pad_0[4] >= 6 )
        {
          v23.customSound = *(__int16 *)&v23.__pad_0[14]; /*0x5a5c3b*/
          v23.customSound_controller[4] = *(__int16 *)&v23.__pad_0[12] - 4; /*0x5a5c4c*/
          *(_DWORD *)&v23.bombVisible = 4; /*0x5a5c53*/
          v23.health = 3; /*0x5a5c5e*/
          if ( !IsAreaClearMap((MapClass *)&v23.customSound_controller[4], 0, 0) ) /*0x5a5c65*/
            goto LABEL_11; /*0x5a5c65*/
          do /*0x5a5c92*/
          {
            *(_QWORD *)a1 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5c78*/
            v8 = Math::RoundToInt((double)*(__int64 *)a1 * 4.656612874161595e-10); /*0x5a5c8a*/
          }
          while ( v8 > 1 ); /*0x5a5c92*/
          if ( v8 ) /*0x5a5c96*/
          {
            HIWORD(v23.referenceCount) = *(_WORD *)&v23.__pad_0[14]; /*0x5a5ca4*/
            LOWORD(v23.referenceCount) = *(_WORD *)&v23.__pad_0[12] - 3; /*0x5a5cae*/
            v23.abstractFlags = v23.referenceCount; /*0x5a5cb9*/
            PlaceMapSeedClassBuildings( /*0x5a5cc6*/
              (ObjectClass *)((char *)&g_CellTileTypeCache->headNode[1] + 1),
              (ObjectClass *)&v23.abstractFlags,
              -1,
              -1);
          }
          else
          {
LABEL_11:
            PlaceMapSeedClassBuildings( /*0x5a5cd9*/
              (ObjectClass *)&dword_ABBEC4->__pad_0[2],
              (ObjectClass *)&v23.__pad_0[12],
              -1,
              -1);
          }
          v9 = *(_WORD *)&v23.__pad_0[12]; /*0x5a5cde*/
          uniqueId = v23.uniqueId; /*0x5a5ce2*/
          for ( i = 0; i < SLOWORD(v23.uniqueId) - *(__int16 *)&v23.__pad_0[12] - 1; ++i ) /*0x5a5cf3*/
          {
            LOWORD(v23.NeedsSaveOrLink) = i + 1; /*0x5a5cfa*/
            LOWORD(v23.nextArrayIndex) = v9 + i + 1; /*0x5a5d0a*/
            HIWORD(v23.nextArrayIndex) = *(_WORD *)&v23.__pad_0[14]; /*0x5a5d0f*/
            v23.abstractFlags = v23.nextArrayIndex; /*0x5a5d1a*/
            PlaceMapSeedClassBuildings((ObjectClass *)g_CellTileTypeCache, (ObjectClass *)&v23.abstractFlags, -1, -1); /*0x5a5d28*/
            v9 = *(_WORD *)&v23.__pad_0[12]; /*0x5a5d2d*/
            uniqueId = v23.uniqueId; /*0x5a5d31*/
          }
          v23.customSound_controller[1] = SHIWORD(v23.uniqueId); /*0x5a5d4b*/
          v23.customSound_controller[0] = uniqueId; /*0x5a5d56*/
          v23.customSound_controller[2] = 4; /*0x5a5d5a*/
          v23.customSound_controller[3] = 3; /*0x5a5d62*/
          if ( !IsAreaClearMap((MapClass *)v23.customSound_controller, 0, 0) ) /*0x5a5d6a*/
            goto LABEL_18; /*0x5a5d6a*/
          do /*0x5a5da0*/
          {
            *(_QWORD *)&v23.estimatedHealth = (unsigned int)Random::State(&g_Randomizer); /*0x5a5d7d*/
            v12 = Math::RoundToInt((double)*(__int64 *)&v23.estimatedHealth * 4.656612874161595e-10); /*0x5a5d98*/
          }
          while ( v12 > 1 ); /*0x5a5da0*/
          if ( v12 ) /*0x5a5da4*/
            PlaceMapSeedClassBuildings( /*0x5a5db6*/
              (ObjectClass *)((char *)&g_CellTileTypeCache->headNode[1] + 2),
              (ObjectClass *)&v23.uniqueId,
              -1,
              -1);
          else
LABEL_18:
            PlaceMapSeedClassBuildings((ObjectClass *)dword_ABBEC4, (ObjectClass *)&v23.uniqueId, -1, -1); /*0x5a5dc6*/
          v6 -= 10; /*0x5a5dcb*/
          *(_WORD *)&v23.__pad_0[6] += 10; /*0x5a5dce*/
        }
        else
        {
          *(_WORD *)&v23.__pad_0[6] += 2; /*0x5a5ddb*/
          v6 -= 2; /*0x5a5de1*/
        }
      }
      while ( v6 > 3 ); /*0x5a5de6*/
      LOWORD(v3) = v23.ambientSoundController[0]; /*0x5a5dec*/
      LOWORD(v4) = v23.ambientSoundController[1]; /*0x5a5df0*/
      v5 = v23.ambientSoundController[3]; /*0x5a5df4*/
    }
  }
  if ( v23.ambientSoundController[2] > 8 ) /*0x5a5e0a*/
  {
    v13 = v5 - 5; /*0x5a5e10*/
    *(_DWORD *)&v23.__pad_0[12] = v5 - 5; /*0x5a5e18*/
    *(_WORD *)&v23.__pad_0[4] = (_WORD)v3 + 5; /*0x5a5e1c*/
    *(_WORD *)&v23.__pad_0[6] = v4; /*0x5a5e21*/
    while ( v13 > 3 ) /*0x5a5e26*/
    {
      *(_DWORD *)a1 = *FindClearPlacementCell( /*0x5a5e4d*/
                         v32,
                         (MapSeedClass *)&v23.__pad_0[4],
                         (MapSeedClass *)v23.ambientSoundController,
                         4);
      v5 = *globalHelper_0A7070((MapSeedClass *)&v23.estimatedHealth, a1, (MapSeedClass *)v23.ambientSoundController, 4); /*0x5a5e68*/
      v23.uniqueId = v5; /*0x5a5e6a*/
      if ( v5 /*0x5a5ea1*/
        && ((LOWORD(v5) = *(_WORD *)&v23.__pad_0[6], *(_WORD *)&v23.__pad_0[4]) || *(_WORD *)&v23.__pad_0[6])
        && (LOWORD(v5) = *(_WORD *)&v23.__pad_0[6], SHIWORD(v5) - *(__int16 *)&v23.__pad_0[6] >= 6) )
      {
        LOWORD(v5) = a1[1]; /*0x5a5ea7*/
        v22 = 0; /*0x5a5eac*/
        v14 = 1; /*0x5a5eb4*/
        v21 = 0; /*0x5a5eb6*/
        v23.__pad_0[11] = 0; /*0x5a5ebb*/
        if ( a1[1] < SHIWORD(v5) ) /*0x5a5ec0*/
        {
          while ( 1 ) /*0x5a5ec6*/
          {
            if ( v22 ) /*0x5a5ed1*/
            {
              v27[0] = a1[0]; /*0x5a607e*/
              v27[1] = (__int16)v5; /*0x5a6085*/
              v27[2] = 3; /*0x5a609b*/
              v27[3] = 1; /*0x5a60a2*/
              if ( IsAreaClearMap((MapClass *)v27, 0, 0) ) /*0x5a60a9*/
              {
                PlaceMapSeedClassBuildings((ObjectClass *)&g_CellTileTypeCache->__pad_0[1], (ObjectClass *)a1, -1, -1); /*0x5a60c6*/
                if ( v21 ) /*0x5a60d1*/
                {
                  if ( v23.__pad_0[11] ) /*0x5a60dd*/
                  {
                    HIWORD(v23.attachedBomb) = a1[1]; /*0x5a60e9*/
                    LOWORD(v23.attachedBomb) = a1[0] + 1; /*0x5a60ee*/
                    *(_DWORD *)v23.__pad_0 = v23.attachedBomb; /*0x5a6108*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 5), &v23, -1, -1); /*0x5a610c*/
                    v23.__pad_0[11] = 0; /*0x5a6111*/
                  }
                  else
                  {
                    HIWORD(v23.ambientSoundController[4]) = a1[1]; /*0x5a6125*/
                    LOWORD(v23.ambientSoundController[4]) = a1[0] + 1; /*0x5a612f*/
                    *(_DWORD *)v23.__pad_0 = v23.ambientSoundController[4]; /*0x5a613a*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 4), &v23, -1, -1); /*0x5a6147*/
                  }
                }
              }
              else
              {
                *(_DWORD *)&v23.isInLogic = a1[0]; /*0x5a615f*/
                v23.location[0] = a1[1]; /*0x5a6168*/
                v23.location[1] = 3; /*0x5a616f*/
                v23.location[2] = 4; /*0x5a6176*/
                if ( v21 ) /*0x5a6181*/
                {
                  LOWORD(v23.attachedTag) = a1[0] + 1; /*0x5a618d*/
                  HIWORD(v23.attachedTag) = a1[1] - 1; /*0x5a6197*/
                  *(_DWORD *)v23.__pad_0 = v23.attachedTag; /*0x5a61a0*/
                  PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 3), &v23, -1, -1); /*0x5a61af*/
                  v21 = 0; /*0x5a61b4*/
                }
                if ( MapSeedClass::ValidateRectBounds((int *)&v23.isInLogic) ) /*0x5a61c0*/
                {
                  uniqueId_high = SHIWORD(v23.uniqueId); /*0x5a61cd*/
                  if ( SHIWORD(v23.uniqueId) - a1[1] < 4 ) /*0x5a61de*/
                  {
                    LOWORD(v5) = PlaceMapSeedClassBuildings( /*0x5a63e7*/
                                   (ObjectClass *)((char *)g_CellTileTypeCache->headNode + 3),
                                   (ObjectClass *)a1,
                                   -1,
                                   -1);
                    goto LABEL_73; /*0x5a63ec*/
                  }
                  v23.lineTrailer = (void *)a1[0]; /*0x5a61e9*/
                  v24 = a1[1] + 3; /*0x5a61fd*/
                  v25 = 3; /*0x5a6204*/
                  v26 = 2; /*0x5a620b*/
                  if ( IsAreaClearMap((MapClass *)&v23.lineTrailer, 0, 0) && uniqueId_high - a1[1] > 5 ) /*0x5a6229*/
                  {
                    v21 = 1; /*0x5a622b*/
                    v23.__pad_0[11] = 1; /*0x5a6230*/
                  }
                  PlaceMapSeedClassBuildings((ObjectClass *)&g_CellTileTypeCache->__pad_0[3], (ObjectClass *)a1, -1, -1); /*0x5a6246*/
                  v29[0] = a1[0] - 1; /*0x5a6257*/
                  v29[1] = a1[1]; /*0x5a6267*/
                  v29[2] = 1; /*0x5a626e*/
                  v29[3] = 3; /*0x5a6275*/
                  if ( IsAreaClearMap((MapClass *)v29, 1, 0) ) /*0x5a627c*/
                  {
                    HIWORD(v23.nextObject) = a1[1]; /*0x5a628f*/
                    LOWORD(v23.nextObject) = a1[0] - 1; /*0x5a6294*/
                    *(_DWORD *)v23.__pad_0 = v23.nextObject; /*0x5a62ae*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 12), &v23, -1, -1); /*0x5a62b2*/
                  }
                  v31[0] = a1[0] + 3; /*0x5a62c4*/
                  v31[1] = a1[1]; /*0x5a62d4*/
                  v31[2] = 1; /*0x5a62db*/
                  v31[3] = 3; /*0x5a62e2*/
                  if ( IsAreaClearMap((MapClass *)v31, 1, 0) ) /*0x5a62e9*/
                  {
                    HIWORD(v23.fallRate) = a1[1]; /*0x5a62fe*/
                    LOWORD(v23.fallRate) = a1[0] + 3; /*0x5a6303*/
                    *(_DWORD *)v23.__pad_0 = v23.fallRate; /*0x5a631d*/
                    PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 12), &v23, -1, -1); /*0x5a6321*/
                  }
                  a1[1] += 2; /*0x5a6326*/
                }
                else
                {
                  v23.objectTypeFlags = *(_DWORD *)a1 - 0x10000; /*0x5a6340*/
                  *(_DWORD *)v23.__pad_0 = *(_DWORD *)a1 - 0x10000; /*0x5a634e*/
                  PlaceMapSeedClassBuildings((ObjectClass *)&dword_ABBEC4->__pad_0[3], &v23, -1, -1); /*0x5a635d*/
                  LOWORD(v23.NeedsSaveOrLink) = a1[0] + 1; /*0x5a636e*/
                  HIWORD(v23.NeedsSaveOrLink) = a1[1] - 2; /*0x5a6377*/
                  *(_DWORD *)v23.__pad_0 = v23.NeedsSaveOrLink; /*0x5a6386*/
                  NeighbourContent = (VectorClass *)CellCoord::To_CellObj( /*0x5a638f*/
                                                      &stru_87C374.__pad_14B0[8132],
                                                      (__int16 *)v23.__pad_0);
                  if ( Value::InRange((int *)NeighbourContent->__pad_0) /*0x5a639e*/
                    && Value::InRange((int *)NeighbourContent->__pad_0) )
                  {
                    do /*0x5a63c4*/
                    {
                      *(_DWORD *)&NeighbourContent->__pad_34[4] = &g_CellTileTypeCache->__pad_0[1]; /*0x5a63b1*/
                      NeighbourContent->__pad_4C[206] = 1; /*0x5a63b4*/
                      NeighbourContent = (VectorClass *)Cell::GetNeighbourContent(NeighbourContent, 0); /*0x5a63c0*/
                    }
                    while ( Value::InRange((int *)NeighbourContent->__pad_0) ); /*0x5a63c4*/
                  }
                  v22 = 0; /*0x5a63cd*/
                }
              }
              goto LABEL_38; /*0x5a6116*/
            }
            v23.lastLayer = 2; /*0x5a5ede*/
            v30[2] = 3; /*0x5a5ee7*/
            *(_DWORD *)&v23.isAliveFlag = 3; /*0x5a5eee*/
            v23.parachute = (void *)a1[0]; /*0x5a5f0a*/
            *(_DWORD *)&v23.onBridge = (__int16)v5; /*0x5a5f11*/
            v30[0] = a1[0]; /*0x5a5f18*/
            v30[1] = (__int16)v5 - 3; /*0x5a5f1f*/
            v30[3] = 4; /*0x5a5f26*/
            if ( SHIWORD(v23.uniqueId) - (__int16)v5 < 2 ) /*0x5a5f2d*/
              goto LABEL_73; /*0x5a5f2d*/
            if ( !v14 ) /*0x5a5f35*/
              goto LABEL_79; /*0x5a5f35*/
            v28[0] = a1[0]; /*0x5a5f3b*/
            v28[1] = (__int16)v5 - 3; /*0x5a5f42*/
            v28[2] = 3; /*0x5a5f53*/
            v28[3] = 4; /*0x5a5f5e*/
            if ( !IsAreaClearMap((MapClass *)v28, 0, 0) ) /*0x5a5f65*/
              goto LABEL_79; /*0x5a5f65*/
            do /*0x5a5f96*/
            {
              *(_QWORD *)v23.customSound_controller = (unsigned int)Random::State(&g_Randomizer); /*0x5a5f7c*/
              v15 = Math::RoundToInt((double)*(__int64 *)v23.customSound_controller * 4.656612874161595e-10); /*0x5a5f8e*/
            }
            while ( v15 > 1 ); /*0x5a5f96*/
            if ( v15 ) /*0x5a5f9a*/
            {
              v23.nextArrayIndex = *(_DWORD *)a1 - 196608; /*0x5a5fb3*/
              *(_DWORD *)v23.__pad_0 = *(_DWORD *)a1 - 196608; /*0x5a5fbe*/
              PlaceMapSeedClassBuildings((ObjectClass *)((char *)&g_CellTileTypeCache->headNode[2] + 1), &v23, -1, -1); /*0x5a5fcb*/
            }
            else
            {
LABEL_79:
              if ( MapSeedClass::ValidateRectBounds(v30) ) /*0x5a5fff*/
              {
                v23.referenceCount = *(_DWORD *)a1 - 196608; /*0x5a6019*/
                *(_DWORD *)v23.__pad_0 = *(_DWORD *)a1 - 196608; /*0x5a6027*/
                PlaceMapSeedClassBuildings((ObjectClass *)((char *)g_CellTileTypeCache->headNode + 1), &v23, -1, -1); /*0x5a6036*/
                PlaceMapSeedClassBuildings((ObjectClass *)&g_CellTileTypeCache->__pad_0[1], (ObjectClass *)a1, -1, -1); /*0x5a604a*/
              }
              else
              {
                if ( !IsAreaClearMap((MapClass *)&v23.parachute, 0, 0) ) /*0x5a6060*/
                  goto LABEL_38; /*0x5a6060*/
                PlaceMapSeedClassBuildings((ObjectClass *)&dword_ABBEC4->__pad_0[1], (ObjectClass *)a1, -1, -1); /*0x5a6076*/
              }
            }
            v22 = 1; /*0x5a5fd0*/
LABEL_38:
            v14 = 0; /*0x5a5fda*/
            LOWORD(v5) = ++a1[1]; /*0x5a5fe1*/
            if ( a1[1] >= SHIWORD(v23.uniqueId) ) /*0x5a5fed*/
            {
              if ( v21 ) /*0x5a63f7*/
              {
                LOWORD(v23.abstractFlags) = a1[0] + 1; /*0x5a6403*/
                HIWORD(v23.abstractFlags) = a1[1] - 1; /*0x5a640e*/
                *(_DWORD *)v23.__pad_0 = v23.abstractFlags; /*0x5a6422*/
                PlaceMapSeedClassBuildings((ObjectClass *)(unk_AA0E20 + 3), &v23, -1, -1); /*0x5a6426*/
              }
              break; /*0x5a6426*/
            }
          }
        }
        v23.spawnStatus = a1[0]; /*0x5a642b*/
        v23.visibilityFlags = a1[1]; /*0x5a6446*/
        *(_DWORD *)&v23.needsRedraw = 3; /*0x5a644d*/
        *(_DWORD *)&v23.hasParachute = 4; /*0x5a6454*/
        if ( !IsAreaClearMap((MapClass *)&v23.spawnStatus, 0, 0) ) /*0x5a645f*/
          goto LABEL_72; /*0x5a645f*/
        do /*0x5a648f*/
        {
          *(_QWORD *)&v23.customSound_controller[4] = (unsigned int)Random::State(&g_Randomizer); /*0x5a6472*/
          v18 = Math::RoundToInt((double)*(__int64 *)&v23.customSound_controller[4] * 4.656612874161595e-10); /*0x5a6487*/
        }
        while ( v18 > 1 ); /*0x5a648f*/
        if ( v18 ) /*0x5a6493*/
          LOWORD(v5) = PlaceMapSeedClassBuildings( /*0x5a64a6*/
                         (ObjectClass *)&g_CellTileTypeCache->headNode[2],
                         (ObjectClass *)a1,
                         -1,
                         -1);
        else
LABEL_72:
          LOWORD(v5) = PlaceMapSeedClassBuildings((ObjectClass *)&dword_ABBEC4->__pad_0[3], (ObjectClass *)a1, -1, -1); /*0x5a64bd*/
LABEL_73:
        v13 = *(_DWORD *)&v23.__pad_0[12] - 10; /*0x5a64c9*/
        *(_WORD *)&v23.__pad_0[4] += 10; /*0x5a64d4*/
        *(_DWORD *)&v23.__pad_0[12] -= 10; /*0x5a64da*/
      }
      else
      {
        *(_WORD *)&v23.__pad_0[4] += 2; /*0x5a64e0*/
        v13 -= 2; /*0x5a64e6*/
        *(_DWORD *)&v23.__pad_0[12] = v13; /*0x5a64e9*/
      }
    }
  }
  return v5; /*0x5a64f5*/
}
}

// 0x5A76E0
char MapSeedClass::ValidateRectBounds()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5A76E0(int *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // edx
  int v5; // esi
  int *v6; // eax
  int v7; // edx
  int v8; // esi
  __int16 v9; // dx
  int *v10; // edi
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]

  v2 = *this; /*0x5a76ee*/
  v3 = *(this + 1); /*0x5a76f0*/
  v12 = (__int16)v3 + (__int16)v2; /*0x5a76fe*/
  if ( v12 > g_MapCellHeight_Value /*0x5a772a*/
    && (__int16)v2 - (__int16)v3 < g_MapCellHeight_Value
    && (__int16)v3 - (__int16)v2 < g_MapCellHeight_Value
    && v12 <= g_MapCellCount )
  {
    v13 = *(this + 2) + v2 - 1; /*0x5a7737*/
    v12 = (__int16)v3 + (__int16)v13; /*0x5a7746*/
    if ( v12 > g_MapCellHeight_Value /*0x5a7772*/
      && (__int16)v13 - (__int16)v3 < g_MapCellHeight_Value
      && (__int16)v3 - (__int16)v13 < g_MapCellHeight_Value
      && v12 <= g_MapCellCount )
    {
      v14 = *(this + 3) + v3 - 1; /*0x5a7782*/
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
              v9 = *(this + 1) + 3; /*0x5a786b*/
              LOWORD(v12) = v8; /*0x5a7874*/
              HIWORD(v12) = v9; /*0x5a7879*/
              v10 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x5a7883*/
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
              v5 = v2; /*0x5a7807*/
              if ( !__OFSUB__(v2, v2 + 3) ) /*0x5a780e*/
                break; /*0x5a780e*/
LABEL_23:
              if ( ++v3 >= *(this + 1) + 3 ) /*0x5a7859*/
                goto LABEL_24; /*0x5a7859*/
            }
            while ( 1 ) /*0x5a7814*/
            {
              LOWORD(v12) = v5; /*0x5a7814*/
              HIWORD(v12) = v3; /*0x5a781f*/
              v6 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x5a7824*/
              v7 = v6[14]; /*0x5a7829*/
              if ( (v7 < g_CellTileTypeCache || v7 > g_CellTileTypeCache + 1) && !Value::InRange(v6) ) /*0x5a783d*/
                break; /*0x5a783d*/
              v2 = *this; /*0x5a7846*/
              if ( ++v5 >= *this + 3 ) /*0x5a784e*/
                goto LABEL_23; /*0x5a784e*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x5a78b0*/
}
}

// 0x5AC270
MapSeedClass * MapSeedClass::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MapSeedClass *__thiscall MapSeedClass::QueryInterface(_DWORD *this, char a2)
{
  LoadOptions::Cleanup(this); /*0x5ac273*/
  if ( (a2 & 1) != 0 ) /*0x5ac27d*/
    __3_YAXPAX_Z(this); /*0x5ac280*/
  return (MapSeedClass *)this; /*0x5ac28a*/
}
}

// 0x5ACB80
int MapSeedClass::GenerateSeed(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapSeedClass_18_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->MapSeedClass_field_0x0C ) /*0x5acb80*/
    return 0; /*0x5acb88*/
  v3 = this->MapSeedClass_field_0x08; /*0x5acb8e*/
  result = 0; /*0x5acb91*/
  if ( v3 <= 0 ) /*0x5acb95*/
    return -1; /*0x5acbac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5acb9b*/
  {
    if ( ++result >= v3 ) /*0x5acbaa*/
      return -1; /*0x5acbaa*/
  }
  return result; /*0x5acb8a*/
}
}

// 0x5AC4C0
namespace gamemd {
void MapSeedClass_18::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MapSeedClass_18_::sub_5AC4C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac4c6*/
  this->MapSeedClass_18_field_0x10 = 0; /*0x5ac4c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac4d6*/
    this->MapSeedClass_18_field_0x4 = 0; /*0x5ac4de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac4e1*/
  this->MapSeedClass_18_field_0x8 = 0; /*0x5ac4e4*/
}
}
} // namespace gamemd

// 0x5AC4F0
namespace gamemd {
unsigned int MapSeedClass_18::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MapSeedClass_18_::sub_5AC4F0(int this, int a2)
{
  if ( (unsigned char)this->MapSeedClass_18_field_0xC ) /*0x5ac4f0*/
    return (unsigned int)(a2 - this->MapSeedClass_18_field_0x4) >> 2; /*0x5ac505*/
  else
    return 0; /*0x5ac4f7*/
}
}
} // namespace gamemd

// 0x5AC510
namespace gamemd {
int MapSeedClass_18::GetCell(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapSeedClass_18_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5ac51a*/
}
}
} // namespace gamemd

// 0x5ACA60
namespace gamemd {
char MapSeedClass_18::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapSeedClass_18_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5aca62*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5aca6d*/
  {
    v3 = 0; /*0x5aca6f*/
    if ( v2 <= 0 ) /*0x5aca73*/
      return 1; /*0x5aca93*/
    v4 = (_DWORD *)*(this + 1); /*0x5aca75*/
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
}
} // namespace gamemd

// 0x5ACAA0
namespace gamemd {
char MapSeedClass_18::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapSeedClass_18_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5acaac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5acab6*/
    if ( a3 ) /*0x5acabc*/
      v4 = a3; /*0x5acad2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5acace*/
    *((_BYTE *)this + 12) = 1; /*0x5acad6*/
    if ( v4 ) /*0x5acada*/
    {
      if ( this->MapSeedClass_18_field_0x4 ) /*0x5acae5*/
      {
        v6 = this->MapSeedClass_18_field_0x8; /*0x5acaec*/
        if ( a2 < v6 ) /*0x5acaf1*/
          v6 = a2; /*0x5acaf3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->MapSeedClass_18_field_0x4 + 4 * i - 4) ) /*0x5acaf9*/
          ++i; /*0x5acafe*/
        if ( *((_BYTE *)this + 13) ) /*0x5acb0b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acb16*/
          this->MapSeedClass_18_field_0x4 = 0; /*0x5acb1e*/
        }
      }
      this->MapSeedClass_18_field_0x4 = v4; /*0x5acb27*/
      this->MapSeedClass_18_field_0x8 = a2; /*0x5acb2f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5acb32*/
      return 1; /*0x5acb38*/
    }
    else
    {
      return 0; /*0x5acadf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5acb42*/
    return 1; /*0x5acb48*/
  }
}
}
} // namespace gamemd

// 0x5ACB50
namespace gamemd {
void MapSeedClass_18::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MapSeedClass_18_::_vt03(int this)
{
  if ( this->MapSeedClass_18_field_0x4 && *(_BYTE *)(this + 13) ) /*0x5acb5d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5acb63*/
    this->MapSeedClass_18_field_0x4 = 0; /*0x5acb6b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5acb6e*/
  this->MapSeedClass_18_field_0x8 = 0; /*0x5acb71*/
}
}
} // namespace gamemd

// 0x5ACBC0
namespace gamemd {
unsigned int MapSeedClass_18::Generate(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MapSeedClass_18_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->MapSeedClass_18_field_0xC ) /*0x5acbc0*/
    return (unsigned int)(a2 - this->MapSeedClass_18_field_0x4) >> 2; /*0x5acbd5*/
  else
    return 0; /*0x5acbc7*/
}
}
} // namespace gamemd

// 0x5ACBE0
namespace gamemd {
char MapSeedClass_18::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapSeedClass_18_::sub_5ACBE0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5acbec*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5acbf2*/
    if ( a3 ) /*0x5acbf8*/
      v4 = a3; /*0x5acc0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5acc0a*/
    *((_BYTE *)this + 12) = 1; /*0x5acc12*/
    if ( !v4 ) /*0x5acc16*/
      return 0; /*0x5acc8a*/
    if ( this->MapSeedClass_18_field_0x4 ) /*0x5acc18*/
    {
      v5 = this->MapSeedClass_18_field_0x8; /*0x5acc1f*/
      if ( a2 < v5 ) /*0x5acc24*/
        v5 = a2; /*0x5acc26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->MapSeedClass_18_field_0x4 + 4 * i - 4) ) /*0x5acc2c*/
        ++i; /*0x5acc31*/
      if ( *((_BYTE *)this + 13) ) /*0x5acc3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acc49*/
        this->MapSeedClass_18_field_0x4 = 0; /*0x5acc51*/
      }
    }
    this->MapSeedClass_18_field_0x4 = v4; /*0x5acc5a*/
    this->MapSeedClass_18_field_0x8 = a2; /*0x5acc62*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5acc65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5acc6e*/
  }
  v7 = this->MapSeedClass_18_field_0x8; /*0x5acc71*/
  if ( v7 < this->MapSeedClass_18_field_0x10 ) /*0x5acc79*/
    this->MapSeedClass_18_field_0x10 = v7; /*0x5acc7b*/
  return 1; /*0x5acc7e*/
}
}
} // namespace gamemd

// 0x5ACC90
namespace gamemd {
int MapSeedClass_18::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapSeedClass_18_::sub_5ACC90(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x5acc90*/
  result = 0; /*0x5acc93*/
  if ( v2 <= 0 ) /*0x5acc98*/
    return -1; /*0x5accaf*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5acc9e*/
  {
    if ( ++result >= v2 ) /*0x5accad*/
      return -1; /*0x5accad*/
  }
  return result; /*0x5accb2*/
}
}
} // namespace gamemd

// 0x5AD430
namespace gamemd {
VectorClass * MapSeedClass_18::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall MapSeedClass_18_::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5ad433*/
  *this = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ad436*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5ad440*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad448*/
    *(this + 1) = 0; /*0x5ad450*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5ad45b*/
  *(this + 2) = 0; /*0x5ad461*/
  if ( (a2 & 1) != 0 ) /*0x5ad468*/
    __3_YAXPAX_Z(this); /*0x5ad46b*/
  return (VectorClass *)this; /*0x5ad475*/
}
}
} // namespace gamemd

// 0x5AD480
namespace gamemd {
DynamicVector * MapSeedClass_18::Constructor_VectorClass__WIN32_FIND_DATAA___(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall MapSeedClass_18_::Constructor_VectorClass__WIN32_FIND_DATAA___(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5ad483*/
  *this = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x5ad486*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5ad490*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad498*/
    *(this + 1) = 0; /*0x5ad4a0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5ad4ab*/
  *(this + 2) = 0; /*0x5ad4b1*/
  if ( (a2 & 1) != 0 ) /*0x5ad4b8*/
    __3_YAXPAX_Z(this); /*0x5ad4bb*/
  return (DynamicVector *)this; /*0x5ad4c5*/
}
}
} // namespace gamemd
