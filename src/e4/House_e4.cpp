// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x47D2B0
namespace gamemd {
void House::AnnounceUpgrade(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void House::AnnounceUpgrade(int this, IUnknown *aP1)
{
  IUnknown *v3; // edi
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // dx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // dx
  bool MapFileData; // al
  __int16 v20; // cx
  __int16 v21; // ax
  __int16 v22; // cx
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v28; // ax
  CCINIClass *v30; // ecx
  TubeClass *v31; // ebx
  AbstractClass *v32; // eax
  int ecx67; // ecx
  AnimClass *v38; // eax
  void **v40; // eax
  AnimClass *v41; // eax
  IUnknown **inited; // ebx
  __int16 v46; // dx
  __int16 v47; // cx
  __int16 v48; // dx
  __int16 v49; // dx
  __int16 v50; // dx
  __int16 v51; // dx
  IUnknown *v55; // [esp+10h] [ebp-38h] BYREF
  int var2C; // [esp+1Ch] [ebp-2Ch] BYREF
  Tactical *v58; // [esp+20h] [ebp-28h] BYREF
  CoordStruct aP2; // [esp+24h] [ebp-24h] BYREF

  if ( (_DWORD *)this == g_CellClassArray ) /*0x47d2bf*/
    return; /*0x47d2bf*/
  v3 = (IUnknown *)(this + 36); /*0x47d2c5*/
  _BYTE * v4 = (_BYTE *)(DataGlobal_87F850 + 4 * CellToTileIndexMap((int *)&DataGlobal_87F7E8, (IUnknown *)(this + 36))); /*0x47d2da*/
  _BYTE * v57 = v4; /*0x47d2e2*/
  int v5 = DataGlobal_87F858 + 10 * CellToTileIndexMap((int *)&DataGlobal_87F7E8, (IUnknown *)(this + 36)); /*0x47d2f3*/
  int v6 = *(_DWORD *)(this + 68); /*0x47d2f6*/
  int v56 = v5; /*0x47d2fc*/
  if ( v6 != -1 ) /*0x47d300*/
  {
    int v7 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v6]; /*0x47d30c*/
    int v8 = *(_DWORD *)(v7 + 664); /*0x47d30f*/
    *(_DWORD *)(this + 236) = v8; /*0x47d318*/
    if ( v8 == 4 || v8 == 9 || *(_BYTE *)(v7 + 684) ) /*0x47d325*/
    {
      int v9 = *(_DWORD *)(this + 56); /*0x47d333*/
      if ( v9 != 0xFFFF && v9 < *(int *)&g_NetworkPlayerBuffer[5884] ) /*0x47d343*/
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex( /*0x47d35e*/
                                   *(void **)(*(_DWORD *)&g_NetworkPlayerBuffer[5872] + 4 * v9),
                                   *(unsigned __int8 *)(this + 282));
      if ( *(_BYTE *)(this + 284) && *(_BYTE *)(v7 + 681) ) /*0x47d36e*/
      {
        *(_DWORD *)(this + 68) = -1; /*0x47d378*/
        *(_BYTE *)(this + 286) = 0; /*0x47d37f*/
      }
      if ( *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1636) ) /*0x47d38b*/
      {
        v10 = *(_WORD *)(this + 38); /*0x47d39c*/
        LOWORD(aP1) = v3->field_0; /*0x47d3a0*/
        HIWORD(aP1) = v10 - 1; /*0x47d3ab*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47d3d6*/
          goto LABEL_19; /*0x47d3d6*/
        v11 = LOWORD(v3->field_0) - 1; /*0x47d3e3*/
        HIWORD(aP1) = *(_WORD *)(this + 38); /*0x47d3e5*/
        LOWORD(aP1) = v11; /*0x47d3ea*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47d419*/
          goto LABEL_19; /*0x47d419*/
        v12 = *(_WORD *)(this + 38) + 2; /*0x47d42a*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 2; /*0x47d42e*/
        HIWORD(aP1) = v12; /*0x47d437*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47d462*/
          goto LABEL_19; /*0x47d462*/
        v13 = *(_WORD *)(this + 38) + 1; /*0x47d471*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 1; /*0x47d473*/
        HIWORD(aP1) = v13; /*0x47d47c*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) /*0x47d52d*/
          || (v14 = *(_WORD *)(this + 38) + 1,
              LOWORD(aP1) = LOWORD(v3->field_0) - 1,
              HIWORD(aP1) = v14,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283))
          || (v15 = *(_WORD *)(this + 38) - 1,
              LOWORD(aP1) = LOWORD(v3->field_0) + 1,
              HIWORD(aP1) = v15,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283)) )
        {
LABEL_19:
          if ( *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1636) == 2 ) /*0x47d53c*/
            *(_DWORD *)(this + 236) = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType(this); /*0x47d54a*/
      BuildingClass::DetermineVisualState(this); /*0x47d551*/
      int v16 = v56; /*0x47d55c*/
      v4[1] = *(_BYTE *)(this + 283); /*0x47d560*/
      *(_BYTE *)(v16 + 8) = *(_BYTE *)(this + 283); /*0x47d569*/
      *v4 = *(_BYTE *)(this + 76); /*0x47d571*/
      return; /*0x47d578*/
    }
  }
  if ( *(_DWORD *)(this + 56) >= *(int *)&g_NetworkPlayerBuffer[5884] ) /*0x47d58b*/
    *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d58d*/
  int v17 = *(_DWORD *)(this + 56); /*0x47d590*/
  if ( v17 != 0xFFFF ) /*0x47d595*/
  {
    int v18 = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872] + 4 * v17); /*0x47d5ab*/
    int v54 = *(unsigned __int8 *)(this + 282); /*0x47d5ae*/
    v55 = (IUnknown *)v18; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((_DWORD *)v18, v54, 0); /*0x47d5b5*/
    if ( *(_BYTE *)(this + 284) ) /*0x47d5ba*/
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
LABEL_40:
        *(_BYTE *)(this + 284) = HouseClass::GetCameoTypeIndex((void *)v18, *(unsigned __int8 *)(this + 282)); /*0x47d7fb*/
        CellClass::DetermineTileType(this); /*0x47d813*/
        int v27 = *(_DWORD *)(this + 68); /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType(v27) != -1 ) /*0x47d828*/
        {
          if ( *(_BYTE *)(this + 284) <= 4u ) /*0x47d831*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * *(_DWORD *)(this + 68)] + 664) ) /*0x47d864*/
              *(_DWORD *)(this + 236) = 5; /*0x47d86e*/
          }
          else
          {
            *(_DWORD *)(this + 236) = House::LookupObject((void *)v18, *(unsigned __int8 *)(this + 282)); /*0x47d843*/
            *(_DWORD *)(this + 68) = -1; /*0x47d849*/
            *(_BYTE *)(this + 286) = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * *(_DWORD *)(this + 68)] + 684) ) /*0x47d885*/
LABEL_47:
          *(_DWORD *)(this + 236) = House::LookupObject((void *)v18, *(unsigned __int8 *)(this + 282)); /*0x47d8aa*/
LABEL_48:
        if ( *(_DWORD *)(this + 236) == 10 ) /*0x47d8b7*/
        {
          v28 = *(_WORD *)(this + 278); /*0x47d8bd*/
          if ( v28 < 0 || v28 >= *(int *)&g_CellDirectionOffsets[84664] ) /*0x47d8d2*/
          {
  int v29; // eax
            if ( (v29 = *(_DWORD *)(this + 56), /*0x47d919*/
                  v30 = *(CCINIClass **)&g_NetworkPlayerBuffer[80408],
                  v29 >= *(int *)&g_NetworkPlayerBuffer[80408])
              && v29 <= *(_DWORD *)&g_NetworkPlayerBuffer[80408] + 3
              || (v30 = dword_ABB108, v29 >= (int)dword_ABB108) && v29 <= (int)&dword_ABB108->__pad_0[3]
              || (v30 = *(CCINIClass **)&g_NetworkPlayerBuffer[80504],
                  v29 >= *(int *)&g_NetworkPlayerBuffer[80504])
              && v29 <= *(_DWORD *)&g_NetworkPlayerBuffer[80504] + 3
              || (v30 = dword_ABAD2C, v29 >= (int)dword_ABAD2C) && v29 <= (int)&dword_ABAD2C->__pad_0[3] )
            {
              v31 = (TubeClass *)(v29 - (_DWORD)v30); /*0x47d91d*/
              if ( v29 - (_DWORD)v30 != -1 ) /*0x47d922*/
              {
                v32 = (AbstractClass *)__2_YAPAXI_Z(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                  TubeClass::Construct(v32, (__int16 *)(this + 36), dword_81CC20[(_DWORD)v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( aP1 != (IUnknown *)-1 ) /*0x47d94c*/
          *(_BYTE *)(this + 283) = (_BYTE)aP1; /*0x47d94e*/
        TechnoClass::GetTileAnimationData((void *)v18, *(unsigned __int8 *)(this + 282), &v58, &var2C); /*0x47d969*/
        int v33 = *(_DWORD *)(this + 320); /*0x47d988*/
        *(_BYTE *)(this + 285) = (var2C - 30) / 15; /*0x47d993*/
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(_DWORD *)(v18 + 712) != -1
          && *(_DWORD *)(v18 + 724) == *(unsigned __int8 *)(this + 282) )
        {
          int v34 = SLOWORD(v3->field_0); /*0x47d9d0*/
          int v35 = *(__int16 *)(this + 38); /*0x47d9d3*/
          int v61 = DataGlobal_89E7C0 * *(char *)(this + 283); /*0x47d9e1*/
  _DWORD *v36; // eax
          v36 = Matrix3x4::TransformCell( /*0x47da03*/
                  *(float **)&DataGlobal_87F8E4[31296],
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF
                  (AbstractClass *)v62,
                  (AbstractClass *)&v55->__pad_2B8[20]);
          int v37 = v36[1]; /*0x47da0a*/
          ecx67 = (v34 << 8) + 128 + *v36; /*0x47da10*/
          v38 = (AnimClass *)(v61 + v36[2]); /*0x47da18*/
          aP2.X = ecx67; /*0x47da1f*/
          aP2.Y = (v35 << 8) + 128 + v37; /*0x47da23*/
          aP2.Z = (int)v38; /*0x47da27*/
          v40 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x47da2b*/
          if ( v40 ) /*0x47da35*/
            v41 = AnimClass::ctor( /*0x47da5f*/
                    v40,
                    *(CoordStruct **)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4
                                                                                     * *(_DWORD *)&v55->__pad_2B8[16]),
                    &aP2,
                    0,
                    (CoordStruct *)0xFFFFFFFF,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v18 = (int)v55; /*0x47da6c*/
          int v42 = *(_DWORD *)&v55->__pad_2B8[32]; /*0x47da6e*/
          v41->__pad_194[2] = 1; /*0x47da74*/
          v41->field_100 = v42; /*0x47da7b*/
          v41->__pad_194[3] = 1; /*0x47da81*/
          *(_DWORD *)(this + 320) |= 0x20000u; /*0x47da88*/
        }
        if ( *(_BYTE *)(v18 + 737) ) /*0x47da92*/
        {
          inited = (IUnknown **)InitCoordinateOffsetsMap(v18); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*(_WORD *)inited != 0x7FFF || *((_WORD *)inited + 1) != 0x7FFF) && *inited != DataGlobal_89E748 ) /*0x47dacf*/
            {
              LOWORD(aP1) = LOWORD(v3->field_0) + *(_WORD *)inited; /*0x47dae6*/
              HIWORD(aP1) = *((_WORD *)inited + 1) + *(_WORD *)(this + 38); /*0x47daf3*/
              v55 = aP1; /*0x47dafc*/
              _DWORD * v44 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v55); /*0x47db05*/
              ++inited; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      MapFileData = House::LoadMapFileData((_DWORD *)v18, *(unsigned __int8 *)(this + 282), 1); /*0x47d5d9*/
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
      *(_DWORD *)(this + 56) = 0xFFFF; /*0x47d5e6*/
      *(_BYTE *)(this + 282) = 0; /*0x47d5e9*/
      *(_DWORD *)(this + 236) = 0; /*0x47d5ef*/
      *(_BYTE *)(this + 284) = 0; /*0x47d5f9*/
      if ( *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1636) ) /*0x47d605*/
      {
        v20 = *(_WORD *)(this + 38) - 1; /*0x47d61a*/
        LOWORD(aP1) = v3->field_0; /*0x47d61c*/
        HIWORD(aP1) = v20; /*0x47d621*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47d650*/
          goto LABEL_98; /*0x47d650*/
        v21 = LOWORD(v3->field_0) - 1; /*0x47d65d*/
        HIWORD(aP1) = *(_WORD *)(this + 38); /*0x47d65f*/
        LOWORD(aP1) = v21; /*0x47d664*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47d693*/
          goto LABEL_98; /*0x47d693*/
        v22 = *(_WORD *)(this + 38); /*0x47d69c*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 2; /*0x47d6a8*/
        HIWORD(aP1) = v22 + 2; /*0x47d6ad*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47d6dc*/
          goto LABEL_98; /*0x47d6dc*/
        v23 = *(_WORD *)(this + 38) + 1; /*0x47d6eb*/
        LOWORD(aP1) = LOWORD(v3->field_0) + 1; /*0x47d6ed*/
        HIWORD(aP1) = v23; /*0x47d6f2*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) /*0x47d7a7*/
          || (v24 = *(_WORD *)(this + 38) + 1,
              LOWORD(aP1) = LOWORD(v3->field_0) - 1,
              HIWORD(aP1) = v24,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283))
          || (v25 = *(_WORD *)(this + 38) - 1,
              LOWORD(aP1) = LOWORD(v3->field_0) + 1,
              HIWORD(aP1) = v25,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283)) )
        {
LABEL_98:
          if ( *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1636) == 2 && !*(_DWORD *)(this + 236) ) /*0x47d7b7*/
            *(_DWORD *)(this + 236) = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState(this); /*0x47d7cd*/
      _BYTE * v26 = v57; /*0x47d7d2*/
      v57[1] = *(_BYTE *)(this + 283); /*0x47d7dd*/
      *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47d7ea*/
      *v26 = *(_BYTE *)(this + 76); /*0x47d7f2*/
      return; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  int v45; // eax
  if ( v6 == -1 || (v45 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v6], *(_BYTE *)(v45 + 684)) ) /*0x47db30*/
    *(_DWORD *)(this + 236) = 0; /*0x47db48*/
  else
    *(_DWORD *)(this + 236) = *(_DWORD *)(v45 + 664); /*0x47db40*/
  *(_BYTE *)(this + 284) = 0; /*0x47db52*/
LABEL_82:
  if ( *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1636) ) /*0x47db5e*/
  {
    v46 = *(_WORD *)(this + 38); /*0x47db6f*/
    LOWORD(aP1) = v3->field_0; /*0x47db73*/
    HIWORD(aP1) = v46 - 1; /*0x47db7e*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47dba9*/
      goto LABEL_89; /*0x47dba9*/
    v47 = LOWORD(v3->field_0) - 1; /*0x47dbb6*/
    HIWORD(aP1) = *(_WORD *)(this + 38); /*0x47dbb8*/
    LOWORD(aP1) = v47; /*0x47dbbd*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47dbec*/
      goto LABEL_89; /*0x47dbec*/
    v48 = *(_WORD *)(this + 38) + 2; /*0x47dbfd*/
    LOWORD(aP1) = LOWORD(v3->field_0) + 2; /*0x47dc01*/
    HIWORD(aP1) = v48; /*0x47dc0a*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) ) /*0x47dc35*/
      goto LABEL_89; /*0x47dc35*/
    v49 = *(_WORD *)(this + 38) + 1; /*0x47dc44*/
    LOWORD(aP1) = LOWORD(v3->field_0) + 1; /*0x47dc46*/
    HIWORD(aP1) = v49; /*0x47dc4f*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283) /*0x47dd00*/
      || (v50 = *(_WORD *)(this + 38) + 1,
          LOWORD(aP1) = LOWORD(v3->field_0) - 1,
          HIWORD(aP1) = v50,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283))
      || (v51 = *(_WORD *)(this + 38) - 1,
          LOWORD(aP1) = LOWORD(v3->field_0) + 1,
          HIWORD(aP1) = v51,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 283)) )
    {
LABEL_89:
      if ( *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1636) == 2 ) /*0x47dd0f*/
      {
        int v52 = *(_DWORD *)(this + 236); /*0x47dd11*/
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
          *(_DWORD *)(this + 236) = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState(this); /*0x47dd36*/
  _BYTE * v53 = v57; /*0x47dd3b*/
  v57[1] = *(_BYTE *)(this + 283); /*0x47dd45*/
  *v53 = *(_BYTE *)(this + 76); /*0x47dd4b*/
  *(_BYTE *)(v56 + 8) = *(_BYTE *)(this + 283); /*0x47dd57*/
}
}
} // namespace gamemd

// 0x47FB90
namespace gamemd {
unsigned int * House::GetStartCoords(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall House::GetStartCoords(int this, IUnknown *aP1)
{
  int BuildingByTiberiumType; // eax
  char **v9; // eax
  _DWORD *FoundationSize; // eax
  char **v23; // [esp+10h] [ebp-20h] BYREF

  int v3 = *(_DWORD *)(this + 68); /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  unsigned int a2 = *(unsigned __int8 *)(this + 286); /*0x47fbb5*/
  _BYTE * v4 = *(_BYTE **)&g_BuildingTypeClass_Array->__pad_0[4 * v3]; /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    _DWORD * v6 = *(_DWORD **)(*(_DWORD *)&g_OverlayTypeConfig[31988] + 4 * BuildingByTiberiumType); /*0x47fbe2*/
    if ( *(_BYTE *)(this + 284) ) /*0x47fbe5*/
    {
  int v7; // ecx
      v7 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v6[58] /*0x47fc36*/
                                               + 4 * *(_DWORD *)(v6[56] + 660)
                                               + 4 * v6[59] / 4 * (*(unsigned __int8 *)(this + 284) - 1)
                                               + 4 * (*(__int16 *)(this + 36) * *(__int16 *)(this + 38) % (v6[59] / 4))];
      v23 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
  int v8; // ecx
    v8 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * *(_DWORD *)(v6[56] + 660) /*0x47fc6f*/
                                             + 4 * (*(__int16 *)(this + 36) * *(__int16 *)(this + 38) % v6[58])];
    v9 = (char **)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (char **)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47fca7*/
LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  int * v10 = *(int **)(this + 64); /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (BuildingTypeClass *)&v23, &a2); /*0x47fc9b*/
LABEL_12:
  int v11 = (*(__int16 *)(this + 36) << 8) + 128; /*0x47fcb1*/
  int v12 = (*(__int16 *)(this + 38) << 8) + 128; /*0x47fce0*/
  _DWORD a1[4]; // [esp+20h] [ebp-10h] BYREF
  a1[2] = 0; /*0x47fce2*/
  a1[0] = (v11 / 256) << 8; /*0x47fd02*/
  a1[1] = (v12 / 256) << 8; /*0x47fd06*/
  int v25; // [esp+18h] [ebp-18h] BYREF
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], a1, (IUnknown *)&v25); /*0x47fd0a*/
  _DWORD * v13 = BuildingClass::CalcDrawPos(this, (IUnknown *)a1); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  int v26; // [esp+1Ch] [ebp-14h]
  int v14 = v13[1] + v26; /*0x47fd31*/
  v25 -= 30; /*0x47fd33*/
  v26 = v14; /*0x47fd3d*/
  if ( !v23 ) /*0x47fd41*/
  {
LABEL_13:
    aP1->field_0 = 0; /*0x47fd43*/
    aP1->field_4 = 0; /*0x47fd53*/
    aP1->field_8 = 0; /*0x47fd56*/
    aP1->field_C = 0; /*0x47fd59*/
    return &aP1->field_0; /*0x47fd63*/
  }
  House::Constructor(v23); /*0x47fd66*/
  if ( v4[682] ) /*0x47fd6b*/
    a2 = 0; /*0x47fd75*/
  int v16 = v25 - *((__int16 *)v23 + 1) / 2; /*0x47fd93*/
  int v17 = v26 - *((__int16 *)v23 + 2) / 2; /*0x47fd9f*/
  FoundationSize = Building::GetFoundationSize(a1, a2); /*0x47fda7*/
  int v19 = v16 + *FoundationSize; /*0x47fdb1*/
  int v20 = v17 + FoundationSize[1]; /*0x47fdb7*/
  int v21 = FoundationSize[2]; /*0x47fdb9*/
  int v22 = FoundationSize[3]; /*0x47fdbc*/
  aP1->field_0 = v19; /*0x47fdc1*/
  aP1->field_4 = v20; /*0x47fdc3*/
  aP1->field_8 = v21; /*0x47fdc6*/
  aP1->field_C = v22; /*0x47fdc9*/
  return &aP1->field_0; /*0x47fd5c*/
}
}
} // namespace gamemd

// 0x4FD500
namespace gamemd {
int House::UpdateHouseAI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void House::UpdateHouseAI(int this)
{
  HouseClass *v2; // ebp
  CellStruct *v5; // eax
  HouseClass *v10; // esi
  CellStruct *v11; // eax
  HouseClass *v19; // esi
  HouseClass **v22; // ecx
  HouseClass *v27; // edx
  int i; // ebp
  int j; // edi
  CellStruct *v34; // [esp+20h] [ebp-30h] BYREF
  _DWORD v35[2]; // [esp+24h] [ebp-2Ch] BYREF
  int v36; // [esp+2Ch] [ebp-24h]
  unsigned int v37; // [esp+30h] [ebp-20h]
  int v38; // [esp+34h] [ebp-1Ch]
  _DWORD v39[3]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v40[12]; // [esp+44h] [ebp-Ch] BYREF

  v2 = 0; /*0x4fd50d*/
  int v3 = *(_DWORD *)(this + 22080); /*0x4fd50f*/
  int v4 = *(_DWORD *)(this + 22088); /*0x4fd515*/
  if ( v3 == -1 ) /*0x4fd520*/
  {
LABEL_4:
    if ( v4 ) /*0x4fd532*/
      goto LABEL_29; /*0x4fd532*/
    goto LABEL_5; /*0x4fd532*/
  }
  if ( *(_DWORD *)&HouseClass_Player[45112] - v3 < v4 ) /*0x4fd52c*/
  {
    v4 -= *(_DWORD *)&HouseClass_Player[45112] - v3; /*0x4fd52e*/
    goto LABEL_4; /*0x4fd52e*/
  }
LABEL_5:
  if ( *(_DWORD *)(this + 22016) == -1
    && *(_DWORD *)&HouseClass_Player[29932]
    && !*(_BYTE *)(*(_DWORD *)(this + 52) + 422) )
  {
    v5 = CellStruct::Equals((_WORD *)(this + 21652), &HouseClass_Player[45644])
       ? *(CellStruct **)(this + 21648)
       : *(CellStruct **)(this + 21652);
    v34 = v5; /*0x4fd58b*/
    if ( !CellStruct::Equals(&v34, &HouseClass_Player[45644]) )
    {
      void * v6 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v34); /*0x4fd5a6*/
  __int64 v8; // rax
      LODWORD(v8) = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v6 + 72))(v6, v39); /*0x4fd5b4*/
      v36 = *(_DWORD *)v8; /*0x4fd5c3*/
      unsigned int v7 = *(_DWORD *)(v8 + 4); /*0x4fd5c7*/
      v37 = v7; /*0x4fd5ca*/
      HIDWORD(v8) = *(_DWORD *)(v8 + 8); /*0x4fd5ce*/
      v38 = HIDWORD(v8); /*0x4fd5d1*/
      if ( v36 != *(_DWORD *)&HouseClass_Player[45740]
        || __PAIR64__(HIDWORD(v8), v7) != *(_QWORD *)&HouseClass_Player[45744] )
      {
        int v9 = 0x7FFFFFFF; /*0x4fd5f0*/
        v34 = 0; /*0x4fd5f7*/
        if ( (int)HouseClass_Count > 0 )
        {
          do
          {
            v10 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * (_DWORD)v34]; /*0x4fd60b*/
            if ( v10 != (HouseClass *)this )
            {
              HIDWORD(v8) = v10->relatedTagsCapacity; /*0x4fd616*/
              if ( !*(_BYTE *)(HIDWORD(v8) + 422) && !v10->defeated )
              {
  int v14; // edx
  int v13; // ecx
  int v12; // eax
                v11 = CellStruct::Equals((_WORD *)(this + 21652), &HouseClass_Player[45644])
                    ? *(CellStruct **)(this + 21648)
                    : *(CellStruct **)(this + 21652);
                v35[0] = v11; /*0x4fd660*/
                if ( CellStruct::Equals(v35, &HouseClass_Player[45644]) ) /*0x4fd664*/
                {
                  v12 = *(_DWORD *)&HouseClass_Player[45740]; /*0x4fd66d*/
                  v13 = *(_DWORD *)&HouseClass_Player[45744]; /*0x4fd672*/
                  v14 = *(_DWORD *)&HouseClass_Player[45748]; /*0x4fd678*/
                }
                else
                {
                  void * v15 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v35); /*0x4fd68a*/
                  int * v16 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v40); /*0x4fd69b*/
                  v12 = *v16; /*0x4fd69d*/
                  v13 = v16[1]; /*0x4fd69f*/
                  v14 = v16[2]; /*0x4fd6a2*/
                }
                v39[0] = v12 - v36; /*0x4fd6ac*/
                v39[1] = v13 - v37; /*0x4fd6b6*/
                v39[2] = v14 - v38; /*0x4fd6c4*/
  double v17; // st7
                v17 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x4fd6e9*/
                                                    (double)(v12 - v36) * (double)(v12 - v36)
                                                  + (double)(v14 - v38) * (double)(v14 - v38)
                                                  + (double)(int)(v13 - v37) * (double)(int)(v13 - v37)));
                v8 = Math::RoundToInt(v17); /*0x4fd6f1*/
                if ( (int)v8 < v9 ) /*0x4fd6f8*/
                {
                  v2 = v10; /*0x4fd6fa*/
                  v9 = v8; /*0x4fd6fc*/
                }
              }
            }
            v34 = (CellStruct *)((char *)v34 + 1); /*0x4fd70b*/
          }
          while ( (int)v34 < (int)HouseClass_Count );
          if ( v2 ) /*0x4fd717*/
            UpdateHouseClassAnger((IUnknown *)this, (HouseClass *)HIDWORD(v8), 1, (int)v2); /*0x4fd71e*/
        }
      }
    }
  }
LABEL_29:
  int v18 = *(_DWORD *)(this + 22016); /*0x4fd723*/
  if ( v18 != -1 ) /*0x4fd72c*/
  {
    v19 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * v18]; /*0x4fd734*/
    if ( v19->defeated ) /*0x4fd737*/
    {
      int v20 = *(_DWORD *)(this + 22036); /*0x4fd741*/
      int v21 = 0; /*0x4fd747*/
      if ( v20 > 0 ) /*0x4fd74b*/
      {
        v22 = *(HouseClass ***)(this + 22024); /*0x4fd753*/
        while ( *v22 != v19 ) /*0x4fd757*/
        {
          ++v21; /*0x4fd759*/
          v22 += 2; /*0x4fd75a*/
          if ( v21 >= v20 ) /*0x4fd75f*/
            goto LABEL_37; /*0x4fd75f*/
        }
        int aP0 = -*(_DWORD *)(*(_DWORD *)(this + 22024) + 8 * v21 + 4); /*0x4fd76a*/
        UpdateHouseClassAnger((IUnknown *)this, (HouseClass *)aP0, aP0, (int)v19); /*0x4fd76d*/
      }
LABEL_37:
      *(_DWORD *)(this + 22016) = -1; /*0x4fd772*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] /*0x4fd797*/
    || *(_DWORD *)(this + 588) >= *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 5176) )
  {
    HouseClass::UpdateAITryFireSW(this); /*0x4fd79b*/
  }
  int v23 = *(_DWORD *)(this + 592); /*0x4fd7a0*/
  if ( v23 == 4 ) /*0x4fd7ae*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)(this + 36) + 52))(this + 36); /*0x4fd7b7*/
    (*(void (__stdcall **)(int))(*(_DWORD *)(this + 36) + 56))(this + 36); /*0x4fd7bd*/
  }
  else
  {
    if ( !v23 && (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36) < 25 ) /*0x4fd7d8*/
      *(_DWORD *)(this + 592) = 1; /*0x4fd7da*/
    if ( *(_DWORD *)(this + 592) == 1 && (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36) >= 25 ) /*0x4fd7fa*/
      *(_DWORD *)(this + 592) = 0; /*0x4fd7fc*/
    if ( *(_DWORD *)(this + 592) != 3 ) /*0x4fd808*/
      goto LABEL_53; /*0x4fd808*/
    if ( *(_DWORD *)(this + 21720) + 900 < *(int *)&HouseClass_Player[45112] ) /*0x4fd81d*/
      *(_DWORD *)(this + 592) = 0; /*0x4fd81f*/
    if ( *(_DWORD *)(this + 592) != 3 ) /*0x4fd82b*/
    {
LABEL_53:
      if ( *(_DWORD *)(this + 21720) + 900 > *(int *)&HouseClass_Player[45112] ) /*0x4fd840*/
        *(_DWORD *)(this + 592) = 3; /*0x4fd842*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] ) /*0x4fd851*/
  {
  int v29; // eax
  int v26; // ecx
  int v25; // esi
    int v24 = 0; /*0x4fd857*/
    while ( 1 ) /*0x4fd85b*/
    {
      v35[v24] = 0; /*0x4fd85b*/
      if ( v24 ) /*0x4fd861*/
      {
        if ( v24 == 1 ) /*0x4fd864*/
          v35[1] = ValidateAIBuildAffordability(this); /*0x4fd873*/
        else
          v35[v24] = 0; /*0x4fd866*/
        goto LABEL_72; /*0x4fd86a*/
      }
      if ( *(_DWORD *)(this + 592) == 3 ) /*0x4fd87f*/
        goto LABEL_70; /*0x4fd87f*/
      v25 = this->House_field_0x78; /*0x4fd881*/
      v26 = 0; /*0x4fd884*/
      if ( v25 > 0 ) /*0x4fd888*/
        break; /*0x4fd888*/
LABEL_69:
      v29 = 4; /*0x4fd8bc*/
LABEL_71:
      v35[0] = v29; /*0x4fd8c5*/
LABEL_72:
      if ( ++v24 >= 2 ) /*0x4fd8cf*/
      {
        for ( i = 4; i >= 1; --i ) /*0x4fd8d1*/
        {
          for ( j = 0; j < 2; ++j ) /*0x4fd8d6*/
          {
            if ( v35[j] == i ) /*0x4fd8dc*/
            {
              if ( j ) /*0x4fd8e3*/
              {
                if ( j == 1 ) /*0x4fd8e6*/
                  HouseClass::ManageProduction(this, i); /*0x4fd8eb*/
              }
              else if ( i == 4 ) /*0x4fd8f5*/
              {
                (*(void (__stdcall **)(int))(*(_DWORD *)(this + 36) + 52))(this + 36); /*0x4fd8fe*/
                (*(void (__stdcall **)(int))(*(_DWORD *)(this + 36) + 56))(this + 36); /*0x4fd904*/
              }
            }
          }
        }
        return Random::Range( /*0x4fd911*/
                 (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                 (IUnknown *)1,
                 (IUnknown *)7)
             + 105;
      }
    }
    v27 = this->q06C; /*0x4fd88a*/
    while ( 1 ) /*0x4fd88d*/
    {
      int v28 = *(_DWORD *)v27->__pad_0; /*0x4fd88d*/
      if ( *(_DWORD *)v27->__pad_0 ) /*0x4fd88d*/
      {
        if ( *(_BYTE *)(v28 + 144) && !*(_BYTE *)(v28 + 129) && *(_DWORD *)(*(_DWORD *)(v28 + 1312) + 3768) ) /*0x4fd8ab*/
          break; /*0x4fd8ab*/
      }
      ++v26; /*0x4fd8b4*/
      v27 = (HouseClass *)((char *)v27 + 4); /*0x4fd8b5*/
      if ( v26 >= v25 ) /*0x4fd8ba*/
        goto LABEL_69; /*0x4fd8ba*/
    }
LABEL_70:
    v29 = 0; /*0x4fd8c3*/
    goto LABEL_71; /*0x4fd8c3*/
  }
  return Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536), (IUnknown *)1, (IUnknown *)7) /*0x4fd927*/
       + 105;
}
}
} // namespace gamemd

// 0x501A20
namespace gamemd {
void sub_501A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_501A20()
{
  wchar_t *v0; // ebx
  v0 = g_SelectionManager; /*0x501a21*/
  if ( g_SelectionManager ) /*0x501a2a*/
  {
    int v1 = 0; /*0x501a2c*/
    if ( (int)g_SelectionManager > 0 ) /*0x501a30*/
    {
      do /*0x501a92*/
      {
        int v2 = *((_DWORD *)g_ObjectClass_CurrentCount + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 44))(*((_DWORD *)g_ObjectClass_CurrentCount + v1)) == 6
          && !*(_BYTE *)(v2 + 1050)
          && *(int *)(*(_DWORD *)(v2 + 1312) + 3808) > 0
          && ((1 << *(_DWORD *)(*((_DWORD *)HouseClass_Player + 13) + 184)) & *(_DWORD *)(v2 + 528)) != 0 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 292))(v2, 2); /*0x501a89*/
        }
        ++v1; /*0x501a8f*/
      }
      while ( v1 < (int)v0 ); /*0x501a92*/
    }
  }
}
}
} // namespace gamemd

// 0x50B6F0
namespace gamemd {
int House::IsHumanPlayer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void House::IsHumanPlayer(#375 *this)
{
  if ( g_GameMode_Current[0] ) /*0x50b6f7*/
    return this == HouseClass_Player; /*0x50b720*/
  return (unsigned char)this->House_field_0x1EC || *((_BYTE *)this + 493); /*0x50b70f*/
}
}
} // namespace gamemd

// 0x50B730
namespace gamemd {
int House::IsCurrentPlayer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void House::IsCurrentPlayer(#375 *this)
{
  int result; // eax

  result = g_GameMode_Current[0]; /*0x50b730*/
  LOBYTE(result) = (unsigned char)this->House_field_0x1EC; /*0x50b737*/
  if ( !g_GameMode_Current[0] ) /*0x50b73d*/
    LOBYTE(result) = (_BYTE)result || *((_BYTE *)this + 493); /*0x50b750*/
  return result; /*0x50b74f*/
}
}
} // namespace gamemd

// 0x50DB00
namespace gamemd {
int House::ChooseHouseEnemy(BuildingClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void House::ChooseHouseEnemy(BuildingClass *aP1)
{
  MouseClass *v7; // ecx
  int v8; // eax
  int v9; // eax
  _BYTE *v10; // esi
  MouseClass *v11; // ecx
  int *v12; // eax
  int result; // eax
  __int16 *v14; // eax
  int v15; // esi
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // ecx
  double v19; // st7
  int v20; // ebp
  _DWORD *v21; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // ebx
  _DWORD *v25; // eax
  int v26; // ecx
  double v27; // st7
  _DWORD *v28; // eax
  int v29; // ecx
  double v30; // st7
  int v31; // eax
  MouseClass *v33; // [esp+20h] [ebp-24h] BYREF
  int v34; // [esp+24h] [ebp-20h]
  _DWORD v35[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v36; // [esp+38h] [ebp-Ch] BYREF
  void *v37; // [esp+3Ch] [ebp-8h]
  void *v38; // [esp+40h] [ebp-4h]
  BuildingClass *aP1a; // [esp+48h] [ebp+4h]
  BuildingClass *aP1b; // [esp+48h] [ebp+4h]

  void * v2 = *(void **)&g_NetworkPlayerBuffer[6596]; /*0x50db03*/
  void * v3 = *(void **)&g_NetworkPlayerBuffer[6592]; /*0x50db0a*/
  House *v4 = this; /*0x50db12*/
  int v5 = *(_DWORD *)&g_NetworkPlayerBuffer[6588]; /*0x50db19*/
  v36 = *(_DWORD *)&g_NetworkPlayerBuffer[6588]; /*0x50db25*/
  v37 = *(void **)&g_NetworkPlayerBuffer[6592]; /*0x50db29*/
  v38 = *(void **)&g_NetworkPlayerBuffer[6596]; /*0x50db2d*/
  void * v6 = *(void **)&g_NetworkPlayerBuffer[6596]; /*0x50db31*/
  if ( aP1 && HIBYTE(aP1->barrelRecoil[5]) && *((_DWORD *)aP1->Type + 942) == 7 ) /*0x50db4c*/
  {
    v7 = (MouseClass *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)aP1->__pad_0 + 72))(v35); /*0x50db58*/
    v8 = v7->field_0; /*0x50db5a*/
    v36 = v7->field_0; /*0x50db5c*/
    v37 = v7->field_4; /*0x50db63*/
    v38 = v7->field_8; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !this->q0BC || (v9 = 0, aP1a = 0, this->q078 <= 0) ) /*0x50db8c*/
  {
LABEL_23:
    v8 = v5; /*0x50dc5c*/
    v37 = v3; /*0x50dc5e*/
    v36 = v5; /*0x50dc62*/
    v38 = v6; /*0x50dc66*/
    goto LABEL_24; /*0x50dc66*/
  }
  while ( 1 ) /*0x50dba1*/
  {
    v10 = *(_BYTE **)(v4[27] + 4 * v9); /*0x50dba1*/
    if ( !v10 || v10[129] ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(_BYTE *)(*((_DWORD *)v10 + 328) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v5 == *(_DWORD *)&g_NetworkPlayerBuffer[6588] /*0x50dc06*/
      && v3 == *(void **)&g_NetworkPlayerBuffer[6592]
      && v6 == v2 )
    {
      v12 = (int *)(*(int (__thiscall **)(_BYTE *, MouseClass **))(*(_DWORD *)v10 + 72))(v10, &v33); /*0x50dc11*/
      v5 = *v12; /*0x50dc14*/
      v3 = (void *)v12[1]; /*0x50dc16*/
      v6 = (void *)v12[2]; /*0x50dc19*/
    }
LABEL_18:
    v9 = (int)&aP1a->__pad_0[1]; /*0x50dc1c*/
    aP1a = (BuildingClass *)v9; /*0x50dc28*/
    if ( v9 >= this->q078 ) /*0x50dc2e*/
    {
      v8 = v36; /*0x50dc34*/
      v4 = this; /*0x50dc38*/
      goto LABEL_20; /*0x50dc38*/
    }
    v4 = this; /*0x50db94*/
    v2 = *(void **)&g_NetworkPlayerBuffer[6596]; /*0x50db98*/
  }
  v11 = (MouseClass *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v10 + 72))(v10, v35); /*0x50dbce*/
  v8 = v11->field_0; /*0x50dbd0*/
  v36 = v11->field_0; /*0x50dbd2*/
  v37 = v11->field_4; /*0x50dbd9*/
  v38 = v11->field_8; /*0x50dbe0*/
  if ( !v10[979] ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  v4 = this; /*0x50dca9*/
LABEL_20:
  if ( v8 == *(_DWORD *)&g_NetworkPlayerBuffer[6588] ) /*0x50dc40*/
  {
    v2 = *(void **)&g_NetworkPlayerBuffer[6596]; /*0x50dc4e*/
    if ( v37 == *(void **)&g_NetworkPlayerBuffer[6592] && v38 == *(void **)&g_NetworkPlayerBuffer[6596] ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
LABEL_24:
    if ( v8 == *(_DWORD *)&g_NetworkPlayerBuffer[6588] /*0x50dc84*/
      && v37 == *(void **)&g_NetworkPlayerBuffer[6592]
      && v38 == v2 )
    {
      result = v4[5599]; /*0x50dc86*/
      if ( result >= 0 ) /*0x50dc8e*/
      {
        if ( result > 3 ) /*0x50dc97*/
          return 0; /*0x50dca0*/
        return result; /*0x50dca6*/
      }
      return 0; /*0x50dede*/
    }
  }
  v14 = (__int16 *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v36); /*0x50dcb9*/
  v15 = v14[18]; /*0x50dcbe*/
  v16 = v14[19]; /*0x50dcc2*/
  v33 = (MouseClass *)((int)DataGlobal_87F8E4.field_8 / 2); /*0x50dcd9*/
  v34 = 1; /*0x50dce3*/
  v17 = HexCoord::Convert(&DataGlobal_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50dceb*/
  v18 = v17[1]; /*0x50dcfd*/
  v33 = (MouseClass *)(v15 - *v17); /*0x50dd00*/
  v34 = v16 - v18; /*0x50dd06*/
  v19 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v18) * (double)(v16 - v18)); /*0x50dd23*/
  v20 = Math::RoundToInt(v19); /*0x50dd3c*/
  v33 = (MouseClass *)DataGlobal_87F8E4.field_8; /*0x50dd3e*/
  v34 = (int)DataGlobal_87F8E4.field_C; /*0x50dd51*/
  v21 = HexCoord::Convert(&DataGlobal_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50dd55*/
  v22 = v21[1]; /*0x50dd61*/
  v33 = (MouseClass *)(v15 - *v21); /*0x50dd6c*/
  v34 = v16 - v22; /*0x50dd70*/
  v23 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v22) * (double)(v16 - v22)); /*0x50dd8d*/
  v24 = Math::RoundToInt(v23); /*0x50dd9a*/
  v33 = (MouseClass *)((int)DataGlobal_87F8E4.field_8 / 2); /*0x50dda6*/
  v34 = 2 * (int)DataGlobal_87F8E4.field_C; /*0x50ddc2*/
  v25 = HexCoord::Convert(&DataGlobal_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50ddc6*/
  v26 = v25[1]; /*0x50ddd2*/
  v33 = (MouseClass *)(v15 - *v25); /*0x50dddd*/
  v34 = v16 - v26; /*0x50dde1*/
  v27 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v26) * (double)(v16 - v26)); /*0x50ddfe*/
  aP1b = (BuildingClass *)Math::RoundToInt(v27); /*0x50de11*/
  v34 = (int)DataGlobal_87F8E4.field_C; /*0x50de1d*/
  v33 = 0; /*0x50de28*/
  v28 = HexCoord::Convert(&DataGlobal_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50de30*/
  v29 = v28[1]; /*0x50de3e*/
  v33 = (MouseClass *)(v15 - *v28); /*0x50de41*/
  v34 = v16 - v29; /*0x50de47*/
  v30 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v29) * (double)(v16 - v29)); /*0x50de64*/
  v31 = Math::RoundToInt(v30); /*0x50de6c*/
  if ( v20 > v24 || v20 > (int)aP1b || v20 > v31 ) /*0x50de7f*/
  {
    if ( v24 > (int)aP1b || v24 > v31 ) /*0x50de97*/
    {
      if ( (int)aP1b > v31 ) /*0x50deab*/
        this->q577C = 3; /*0x50dec1*/
      else
        this->q577C = 2; /*0x50deb1*/
    }
    else
    {
      this->q577C = 1; /*0x50de9d*/
    }
  }
  else
  {
    this->q577C = 0; /*0x50de85*/
  }
  result = this->q577C; /*0x50decf*/
  if ( (unsigned int)result >= 4 ) /*0x50ded7*/
    return 0; /*0x50ded7*/
  return result; /*0x50dc9d*/
}
}
} // namespace gamemd

// 0x544BE0
namespace gamemd {
int House::LookupObject(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_544BE0(void *this, int a2)
{

  _DWORD * v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x544be2*/
  int v3; // ecx
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x544c03*/
    return dword_8288E4[*(char *)(v3 + 41)]; /*0x544c09*/
  else
    return 0; /*0x544c13*/
}
}
} // namespace gamemd

// 0x544C20
namespace gamemd {
bool House::LoadMapFileData(int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_544C20(_DWORD *this, int a2, char a3)
{

  if ( a3 && !this->__pad_029 && *((_BYTE *)this + 756) ) /*0x544c35*/
    MapClass::LoadFileData((int)this); /*0x544c3f*/
  _DWORD * v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 156))(this); /*0x544c48*/
  return v4 && a2 < *v4 * v4[1] && v4[a2 + 4]; /*0x544c50*/
}
}
} // namespace gamemd

// 0x69E090
namespace gamemd {
void House::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_69E090(char **this)
{
  char *EntireFile; // eax

  if ( *(_WORD *)this == 0xFFFF && !this->q004 ) /*0x69e09c*/
  {
  _DWORD v3[22]; // [esp+4h] [ebp-6Ch] BYREF
    CCFileClass::Construct(v3, this->q008); /*0x69e0ab*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v3); /*0x69e0b4*/
    if ( EntireFile ) /*0x69e0bb*/
    {
      this->q00C = EntireFile; /*0x69e0bd*/
      this->q004 = 1; /*0x69e0c0*/
    }
    v3[0] = &vt_CCFileClass; /*0x69e0c8*/
    int v5 = 0; /*0x69e0d0*/
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
    Vector::Clear((int)v4); /*0x69e0d8*/
    v3[0] = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor(v3); /*0x69e0e9*/
  }
}
}
} // namespace gamemd

// 0x70C270
namespace gamemd {
int House::PowerBeginUpdate(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void House::PowerBeginUpdate(int this, AbstractClass *aP1)
{
  CellStruct *v22; // eax
  int i; // ebx
  int result; // eax
  int j; // ebx
  AbstractClass *v33; // [esp-4h] [ebp-14h]
  AbstractClass *v34; // [esp-4h] [ebp-14h]
  RadioClass::PowerDrainUpdate((int *)this, aP1); /*0x70c27b*/
  Power::TimerProcess(aP1); /*0x70c289*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 344), *(AbstractClass **)(this + 348)); /*0x70c29e*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 352), *(AbstractClass **)(this + 356)); /*0x70c2b3*/
  Power::TimerProcess(aP1); /*0x70c2de*/
  Power::TimerProcess(aP1); /*0x70c2ec*/
  Power::TimerProcess(aP1); /*0x70c2fa*/
  Power::TimerProcess(aP1); /*0x70c325*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 588)); /*0x70c333*/
  int v3; // edx
  LOBYTE(v3) = *(_BYTE *)(this + 592); /*0x70c338*/
  Power::FlagProcess(aP1, v3); /*0x70c341*/
  Power::TimerProcess(aP1); /*0x70c34f*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 744)); /*0x70c35d*/
  Power::TimerProcess(aP1); /*0x70c388*/
  Power::TimerProcess(aP1); /*0x70c396*/
  Power::TimerProcess(aP1); /*0x70c3c1*/
  Power::TimerProcess(aP1); /*0x70c3cf*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 808)); /*0x70c3dd*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 812)); /*0x70c3eb*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 816)); /*0x70c3f9*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 820)); /*0x70c407*/
  int v4; // edx
  LOBYTE(v4) = *(_BYTE *)(this + 973); /*0x70c40c*/
  int v5 = Power::FlagProcess(aP1, v4); /*0x70c415*/
  LOBYTE(v5) = *(_BYTE *)(this + 975); /*0x70c41a*/
  Power::FlagProcess(aP1, v5); /*0x70c423*/
  int v6; // ecx
  LOBYTE(v6) = *(_BYTE *)(this + 976); /*0x70c428*/
  Power::FlagProcess(aP1, v6); /*0x70c431*/
  int v7; // edx
  LOBYTE(v7) = *(_BYTE *)(this + 977); /*0x70c436*/
  int v8 = Power::FlagProcess(aP1, v7); /*0x70c43f*/
  LOBYTE(v8) = *(_BYTE *)(this + 978); /*0x70c444*/
  Power::FlagProcess(aP1, v8); /*0x70c44d*/
  int v9; // ecx
  LOBYTE(v9) = (unsigned char)this->House_field_0x3D3; /*0x70c452*/
  Power::FlagProcess(aP1, v9); /*0x70c45b*/
  int v10; // edx
  LOBYTE(v10) = *(_BYTE *)(this + 980); /*0x70c460*/
  int v11 = Power::FlagProcess(aP1, v10); /*0x70c469*/
  LOBYTE(v11) = *(_BYTE *)(this + 981); /*0x70c46e*/
  Power::FlagProcess(aP1, v11); /*0x70c477*/
  int v12; // ecx
  LOBYTE(v12) = *(_BYTE *)(this + 1048); /*0x70c47c*/
  Power::FlagProcess(aP1, v12); /*0x70c485*/
  int v13; // edx
  LOBYTE(v13) = *(_BYTE *)(this + 1049); /*0x70c48a*/
  Power::FlagProcess(aP1, v13); /*0x70c493*/
  v22 = g_GameMode_Current; /*0x70c498*/
  if ( !g_GameMode_Current || g_GameMode_Current == (CellStruct *)5 ) /*0x70c4a4*/
  {
    LOBYTE(v22) = *(_BYTE *)(this + 1050); /*0x70c4a6*/
    Power::FlagProcess(aP1, (int)v22); /*0x70c4af*/
  int v15; // ecx
    LOBYTE(v15) = *(_BYTE *)(this + 1051); /*0x70c4b4*/
    Power::FlagProcess(aP1, v15); /*0x70c4bd*/
  int v16; // edx
    LOBYTE(v16) = *(_BYTE *)(this + 1052); /*0x70c4c2*/
    v22 = (CellStruct *)Power::FlagProcess(aP1, v16); /*0x70c4cb*/
  }
  LOBYTE(v22) = *(_BYTE *)(this + 1053); /*0x70c4d0*/
  Power::FlagProcess(aP1, (int)v22); /*0x70c4d9*/
  Power::TimerProcess(aP1); /*0x70c4e7*/
  Power::TimerProcess(aP1); /*0x70c4f7*/
  Power::TimerProcess(aP1); /*0x70c507*/
  int v17; // ecx
  LOBYTE(v17) = *(_BYTE *)(this + 1056); /*0x70c50c*/
  Power::FinalizeDrain(aP1, v17); /*0x70c515*/
  int v18 = *(_DWORD *)(this + 1128); /*0x70c51a*/
  Power::TimerProcess(aP1); /*0x70c523*/
  for ( i = 0; i < v18; ++i ) /*0x70c52c*/
  {
    v33 = (AbstractClass *)(*(_DWORD *)(*(_DWORD *)(this + 1116) + 4 * i) + 4); /*0x70c547*/
    (*(void (__stdcall **)(AbstractClass *))(*(_DWORD *)v33->__pad_0 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(aP1); /*0x70c550*/
    Power::TimerProcess(aP1); /*0x70c55c*/
  }
  int v20 = *(_DWORD *)(this + 1152); /*0x70c566*/
  result = Power::TimerProcess(aP1); /*0x70c56f*/
  for ( j = 0; j < v20; ++j ) /*0x70c578*/
  {
    v34 = (AbstractClass *)(*(_DWORD *)(*(_DWORD *)(this + 1140) + 4 * j) + 4); /*0x70c586*/
    (*(void (__stdcall **)(AbstractClass *))(*(_DWORD *)v34->__pad_0 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(aP1); /*0x70c58f*/
  }
  return result; /*0x70c599*/
}
}
} // namespace gamemd

// 0x72F350
namespace gamemd {
unsigned int * sub_72F350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *sub_72F350()
{
  _DWORD *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  DataGlobal_B0FC0C = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) == 2 ) /*0x72f377*/
  {
    LoadPaletteSimple(DataGlobal_844BF8, &DataGlobal_B0FBEC, &DataGlobal_B0FBF0); /*0x72f389*/
    LoadPaletteSimple(DataGlobal_844BFC[0], &DataGlobal_B0FBF4, &DataGlobal_B0FBF8); /*0x72f39e*/
  }
  else
  {
    LoadPaletteSimple(DataGlobal_844C00, &DataGlobal_B0FBF4, &DataGlobal_B0FBF8); /*0x72f3b0*/
    LoadPaletteSimple(DataGlobal_844BF4, &DataGlobal_B0FBEC, &DataGlobal_B0FBF0); /*0x72f3c5*/
  }
  LoadPaletteSimple(DataGlobal_844BF0, &DataGlobal_B0FBE4, &DataGlobal_B0FBE8); /*0x72f3da*/
  LoadPaletteSimple(DataGlobal_844C04, &DataGlobal_B0FBFC, &DataGlobal_B0FC00); /*0x72f3ef*/
  LoadPaletteSimple(DataGlobal_844C08, &DataGlobal_B0FC04, &DataGlobal_B0FC08); /*0x72f404*/
  result = SetupScreenBuffers(g_CommandLineFlags, DataGlobal_A8EB88); /*0x72f415*/
  DataGlobal_B0FC0C = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}
}
} // namespace gamemd

// 0x6D1660
namespace gamemd {
int House_Play_6D1660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_6D1660@<al>(_BYTE *a1@<ecx>, int a2@<esi>)
{
  char result; // al

  result = a1[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    int * v4 = (int *)&DataGlobal_B0C1C0; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a1 + 52))(a1, v4); /*0x6d167f*/
      v4 += 24; /*0x6d1682*/
    }
    while ( (int)v4 < (int)&DataGlobal_B0CB20 ); /*0x6d168b*/
    (*(void (__thiscall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a1 + 52))(a1, DataGlobal_B0CCB0, a2); /*0x6d1696*/
    int * v5 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      int v6 = *v5; /*0x6d169e*/
      if ( *v5 >= 0 && v6 < 25 ) /*0x6d16a7*/
      {
        char * v7 = (char *)&DataGlobal_B0C1C0 + 96 * v6; /*0x6d16af*/
        if ( v7 ) /*0x6d16b6*/
          HashTable::Remove((int *)g_TacticalRender, *((_DWORD *)v7 + 9)); /*0x6d16c2*/
      }
      ++v5; /*0x6d16c7*/
    }
    while ( (int)v5 < (int)DataGlobal_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove((int *)g_TacticalRender, 240); /*0x6d16dd*/
    int v8 = *(_DWORD *)a1; /*0x6d16e2*/
    a1[21828] = 0; /*0x6d16eb*/
    (*(void (__thiscall **)(_BYTE *, _DWORD *))(v8 + 48))(a1, DataGlobal_B0CC40); /*0x6d16f2*/
    if ( DataGlobal_B0CC40 ) /*0x6d16fd*/
    {
  _DWORD v11[6]; // [esp+Ch] [ebp-1Ch] BYREF
      v11[1] = DataGlobal_B0CC4C; /*0x6d1710*/
      v11[2] = DataGlobal_B0CC50; /*0x6d171a*/
      v11[3] = DataGlobal_B0CC54; /*0x6d1724*/
      char v12 = 0; /*0x6d172f*/
      v11[0] = DataGlobal_B0CC64; /*0x6d1734*/
      v11[5] = g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v11[4] = DataGlobal_B0CC58; /*0x6d1740*/
      HashTable::Remove((int *)g_TacticalRender, DataGlobal_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(g_TacticalRender, (int)v11); /*0x6d1754*/
    }
    int v9 = *(_DWORD *)a1; /*0x6d1759*/
    a1[21829] = 1; /*0x6d175f*/
    return (*(int (__thiscall **)(_BYTE *, _DWORD))(v9 + 56))(a1, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}
}
} // namespace gamemd

// 0x637A10
namespace gamemd {
char sub_637A10()
{
{
    char result;
    char v1[108];
    int v2;
    char v3[108];
    short v4;
    char v5;
    result = DataGlobal_AC4CF4;
    if ( DataGlobal_AC4CF4 )
  {
    EventClass::AddEvent(v3, *((int *)(HouseClass_Player) + 12), 0x2Bu);
    qmemcpy(v1, v3, sizeof(v1));
    LOWORD(v2) = v4;
    BYTE2(v2) = v5;
    Network::RecordEvent( *(__int64 *)v1, *(int *)&v1[8], *(int *)&v1[12], *(int *)&v1[16], *(int *)&v1[20], *(int *)&v1[24], *(int *)&v1[28], *(int *)&v1[32], *(int *)&v1[36], *(int *)&v1[40], *(int *)&v1[44], *(int *)&v1[48], *(int *)&v1[52], *(int *)&v1[56], *(int *)&v1[60], *(int *)&v1[64], *(int *)&v1[68], *(int *)&v1[72], *(int *)&v1[76], *(int *)&v1[80], *(int *)&v1[84], *(int *)&v1[88], *(int *)&v1[92], *(int *)&v1[96], *(int *)&v1[100], *(int *)&v1[104], v2);
    g_ScriptPool = 0;
    g_ScriptState = 0;
    g_ScriptActionPool = 0;
    DataGlobal_AC4CF4 = 0;
    result = PlayVocClass(g_RulesClass_Instance->EnterBioReactorSound, 0x2000, 1.0, 0);
    if ( DataGlobal_AC4B80 )
    return (**(int (__thiscall ***)(int, int, int))DataGlobal_AC4B80)(DataGlobal_AC4B80, 4552, 0);
  }
    return result;
}
}
} // namespace gamemd
