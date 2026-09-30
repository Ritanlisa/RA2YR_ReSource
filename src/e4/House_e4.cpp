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
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"

// 0x47D2B0
namespace gamemd {
int House::AnnounceUpgrade( IUnknown * aP1)
{

  IUnknown *v3; // edi
  unsigned char *v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  int16_t v10; // dx
  int16_t v11; // cx
  int16_t v12; // dx
  int16_t v13; // dx
  int16_t v14; // dx
  int16_t v15; // dx
  int v16; // ecx
  int v17; // ecx
  int v18; // ebp
  bool MapFileData; // al
  int16_t v20; // cx
  int16_t v21; // ax
  int16_t v22; // cx
  int16_t v23; // cx
  int16_t v24; // cx
  int16_t v25; // cx
  unsigned char *v26; // eax
  int v27; // ecx
  int16_t v28; // ax
  int v29; // eax
  CCINIClass *v30; // ecx
  TubeClass *v31; // ebx
  AbstractClass *v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  unsigned int *v36; // eax
  int v37; // edx
  int ecx67; // ecx
  AnimClass *v38; // eax
  void **v40; // eax
  AnimClass *v41; // eax
  int v42; // ecx
  IUnknown **inited; // ebx
  unsigned int *v44; // eax
  int v45; // eax
  int16_t v46; // dx
  int16_t v47; // cx
  int16_t v48; // dx
  int16_t v49; // dx
  int16_t v50; // dx
  int16_t v51; // dx
  int v52; // eax
  unsigned char *v53; // eax
  int v54; // [esp-8h] [ebp-50h]
  IUnknown *v55; // [esp+10h] [ebp-38h] BYREF
  int v56; // [esp+14h] [ebp-34h]
  unsigned char *v57; // [esp+18h] [ebp-30h]
  int var2C; // [esp+1Ch] [ebp-2Ch] BYREF
  Tactical *v58; // [esp+20h] [ebp-28h] BYREF
  CoordStruct aP2; // [esp+24h] [ebp-24h] BYREF
  int v61; // [esp+38h] [ebp-10h]
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (unsigned int *)this == (unsigned int *)(g_CellClassArray) ) /*0x47d2bf*/
    return; /*0x47d2bf*/
  v3 = (IUnknown *)(this + 36); /*0x47d2c5*/
  v4 = (unsigned char *)(g_abs_87F850 + 4 * CellToTileIndexMap((int *)&g_abs_87F7E8, (IUnknown *)(this + 36))); /*0x47d2da*/
  v57 = v4; /*0x47d2e2*/
  v5 = g_abs_87F858 + 10 * CellToTileIndexMap((int *)&g_abs_87F7E8, (IUnknown *)(this + 36)); /*0x47d2f3*/
  v6 = *(unsigned int *)(this + 68); /*0x47d2f6*/
  v56 = v5; /*0x47d2fc*/
  if ( v6 != -1 ) /*0x47d300*/
  {
    v7 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * v6]; /*0x47d30c*/
    v8 = *(unsigned int *)(v7 + 664); /*0x47d30f*/
    *(unsigned int *)(this + 236) = v8; /*0x47d318*/
    if ( v8 == 4 || v8 == 9 || *(unsigned char *)(v7 + 684) ) /*0x47d325*/
    {
      v9 = *(unsigned int *)(this + 56); /*0x47d333*/
      if ( v9 != 0xFFFF && v9 < *(int *)&g_abs_A8D63C ) /*0x47d343*/
                *(unsigned char *)(this + 284) = ((HouseClass *)((int)(/*0x47d35e*/                                    *(void **)(*(unsigned int *)&g_abs_A8D63C + 4 * v9))))->GetCameoTypeIndex(*(uint8_t *)(this + 282));
      if ( *(unsigned char *)(this + 284) && *(unsigned char *)(v7 + 681) ) /*0x47d36e*/
      {
        *(unsigned int *)(this + 68) = -1; /*0x47d378*/
        *(unsigned char *)(this + 286) = 0; /*0x47d37f*/
      }
      if ( *(unsigned char *)(*(unsigned int *)&g_abs_87F8E4 + 1636) ) /*0x47d38b*/
      {
        v10 = *(unsigned short *)(this + 38); /*0x47d39c*/
        IDA_LOWORD(aP1) = v3->field_0; /*0x47d3a0*/
        IDA_HIWORD(aP1) = v10 - 1; /*0x47d3ab*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47d3d6*/
          goto LABEL_19; /*0x47d3d6*/
        v11 = IDA_LOWORD(v3->field_0) - 1; /*0x47d3e3*/
        IDA_HIWORD(aP1) = *(unsigned short *)(this + 38); /*0x47d3e5*/
        IDA_LOWORD(aP1) = v11; /*0x47d3ea*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47d419*/
          goto LABEL_19; /*0x47d419*/
        v12 = *(unsigned short *)(this + 38) + 2; /*0x47d42a*/
        IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 2; /*0x47d42e*/
        IDA_HIWORD(aP1) = v12; /*0x47d437*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47d462*/
          goto LABEL_19; /*0x47d462*/
        v13 = *(unsigned short *)(this + 38) + 1; /*0x47d471*/
        IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 1; /*0x47d473*/
        IDA_HIWORD(aP1) = v13; /*0x47d47c*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) /*0x47d52d*/
          || (v14 = *(unsigned short *)(this + 38) + 1,
              IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) - 1,
              IDA_HIWORD(aP1) = v14,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283))
          || (v15 = *(unsigned short *)(this + 38) - 1,
              IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 1,
              IDA_HIWORD(aP1) = v15,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283)) )
        {
LABEL_19:
          if ( *(unsigned char *)(*(unsigned int *)&g_abs_87F8E4 + 1636) == 2 ) /*0x47d53c*/
            *(unsigned int *)(this + 236) = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType(this); /*0x47d54a*/
      BuildingClass::DetermineVisualState(this); /*0x47d551*/
      v16 = v56; /*0x47d55c*/
      v4[1] = *(unsigned char *)(this + 283); /*0x47d560*/
      *(unsigned char *)(v16 + 8) = *(unsigned char *)(this + 283); /*0x47d569*/
      *v4 = *(unsigned char *)(this + 76); /*0x47d571*/
      return; /*0x47d578*/
    }
  }
  if ( *(unsigned int *)(this + 56) >= *(int *)&g_abs_A8D63C ) /*0x47d58b*/
    *(unsigned int *)(this + 56) = 0xFFFF; /*0x47d58d*/
  v17 = *(unsigned int *)(this + 56); /*0x47d590*/
  if ( v17 != 0xFFFF ) /*0x47d595*/
  {
    v18 = *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v17); /*0x47d5ab*/
    v54 = *(uint8_t *)(this + 282); /*0x47d5ae*/
    v55 = (IUnknown *)v18; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((unsigned int *)v18, v54, 0); /*0x47d5b5*/
    if ( *(unsigned char *)(this + 284) ) /*0x47d5ba*/
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
LABEL_40:
        *(unsigned char *)(this + 284) = ((HouseClass *)((int)((void *)v18)))->GetCameoTypeIndex(*(uint8_t *)(this + 282)); /*0x47d7fb*/
        CellClass::DetermineTileType(this); /*0x47d813*/
        v27 = *(unsigned int *)(this + 68); /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType((IUnknown *)(v27)) != -1 ) /*0x47d828*/
        {
          if ( *(unsigned char *)(this + 284) <= 4u ) /*0x47d831*/
          {
            if ( !*(unsigned int *)(*(unsigned int *)&g_abs_A83D84->__pad_0[4 * *(unsigned int *)(this + 68)] + 664) ) /*0x47d864*/
              *(unsigned int *)(this + 236) = 5; /*0x47d86e*/
          }
          else
          {
            *(unsigned int *)(this + 236) = ((House *)((int)((void *)v18)))->LookupObject(*(uint8_t *)(this + 282)); /*0x47d843*/
            *(unsigned int *)(this + 68) = -1; /*0x47d849*/
            *(unsigned char *)(this + 286) = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(unsigned char *)(*(unsigned int *)&g_abs_A83D84->__pad_0[4 * *(unsigned int *)(this + 68)] + 684) ) /*0x47d885*/
LABEL_47:
          *(unsigned int *)(this + 236) = ((House *)((int)((void *)v18)))->LookupObject(*(uint8_t *)(this + 282)); /*0x47d8aa*/
LABEL_48:
        if ( *(unsigned int *)(this + 236) == 10 ) /*0x47d8b7*/
        {
          v28 = *(unsigned short *)(this + 278); /*0x47d8bd*/
          if ( v28 < 0 || v28 >= *(int *)&g_abs_89F690 ) /*0x47d8d2*/
          {
            if ( (v29 = *(unsigned int *)(this + 56), /*0x47d919*/
                  v30 = *(CCINIClass **)&g_abs_A8D63C,
                  v29 >= *(int *)&g_abs_A8D63C)
              && v29 <= *(unsigned int *)&g_abs_A8D63C + 3
              || (v30 = dword_ABB108, v29 >= (int)dword_ABB108) && v29 <= (int)&dword_ABB108->__pad_0[3]
              || (v30 = *(CCINIClass **)&g_abs_A8D63C,
                  v29 >= *(int *)&g_abs_A8D63C)
              && v29 <= *(unsigned int *)&g_abs_A8D63C + 3
              || (v30 = dword_ABAD2C, v29 >= (int)dword_ABAD2C) && v29 <= (int)&dword_ABAD2C->__pad_0[3] )
            {
              v31 = (gamemd::TubeClass *)((gamemd::CCINIClass *)((TubeClass *)(v29 - (unsigned int)v30)));
              if ( v29 - (unsigned int)v30 != -1 ) /*0x47d922*/
              {
                v32 = (AbstractClass *)RA2_OPNEW(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                  ((TubeClass *)(v32))->Construct((int16_t *)(this + 36), dword_81CC20[(unsigned int)v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( aP1 != (IUnknown *)-1 ) /*0x47d94c*/
          *(unsigned char *)(this + 283) = (unsigned char)aP1; /*0x47d94e*/
        TechnoClass::GetTileAnimationData((void *)v18, *(uint8_t *)(this + 282), &v58, &var2C); /*0x47d969*/
        v33 = *(unsigned int *)(this + 320); /*0x47d988*/
        *(unsigned char *)(this + 285) = (var2C - 30) / 15; /*0x47d993*/
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(unsigned int *)(v18 + 712) != -1
          && *(unsigned int *)(v18 + 724) == *(uint8_t *)(this + 282) )
        {
          v34 = SLOWORD(v3->field_0); /*0x47d9d0*/
          v35 = *(int16_t *)(this + 38); /*0x47d9d3*/
          v61 = g_abs_89E7C0 * *(char *)(this + 283); /*0x47d9e1*/
          v36 = Matrix3x4::TransformCell( /*0x47da03*/
                  *(float **)&g_abs_87F8E4,
                  (AbstractClass *)v62,
                  (AbstractClass *)&v55->__pad_2B8[20]);
          v37 = v36[1]; /*0x47da0a*/
          ecx67 = (v34 << 8) + 128 + *v36; /*0x47da10*/
          v38 = (AnimClass *)(v61 + v36[2]); /*0x47da18*/
          aP2.X = ecx67; /*0x47da1f*/
          aP2.Y = (v35 << 8) + 128 + v37; /*0x47da23*/
          aP2.Z = (int)v38; /*0x47da27*/
          v40 = (void **)RA2_OPNEW(0x1C8u); /*0x47da2b*/
          if ( v40 ) /*0x47da35*/
            v41 = AnimClass::ctor( /*0x47da5f*/
                    v40,
                    *(CoordStruct **)(*(unsigned int *)&g_abs_89F690 + 4
                                                                                     * *(unsigned int *)&v55->__pad_2B8[16]),
                    &aP2,
                    0,
                    (CoordStruct *)0xFFFFFFFF,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v18 = (int)v55; /*0x47da6c*/
          v42 = *(unsigned int *)&v55->__pad_2B8[32]; /*0x47da6e*/
          v41-((unsigned int *)(>__pad_194))[2] = 1; /*0x47da74*/
          v41->field_100 = v42; /*0x47da7b*/
          v41-((unsigned int *)(>__pad_194))[3] = 1; /*0x47da81*/
          *(unsigned int *)(this + 320) |= 0x20000u; /*0x47da88*/
        }
        if ( *(unsigned char *)(v18 + 737) ) /*0x47da92*/
        {
          inited = (IUnknown **)InitCoordinateOffsetsMap(v18); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*(unsigned short *)inited != 0x7FFF || *((unsigned short *)inited + 1) != 0x7FFF) && *inited != g_abs_89E748 ) /*0x47dacf*/
            {
              IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + *(unsigned short *)inited; /*0x47dae6*/
              IDA_HIWORD(aP1) = *((unsigned short *)inited + 1) + *(unsigned short *)(this + 38); /*0x47daf3*/
              v55 = aP1; /*0x47dafc*/
              v44 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v55); /*0x47db05*/
              ++inited; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      MapFileData = House::LoadMapFileData((unsigned int *)v18, *(uint8_t *)(this + 282), 1); /*0x47d5d9*/
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
      *(unsigned int *)(this + 56) = 0xFFFF; /*0x47d5e6*/
      *(unsigned char *)(this + 282) = 0; /*0x47d5e9*/
      *(unsigned int *)(this + 236) = 0; /*0x47d5ef*/
      *(unsigned char *)(this + 284) = 0; /*0x47d5f9*/
      if ( *(unsigned char *)(*(unsigned int *)&g_abs_87F8E4 + 1636) ) /*0x47d605*/
      {
        v20 = *(unsigned short *)(this + 38) - 1; /*0x47d61a*/
        IDA_LOWORD(aP1) = v3->field_0; /*0x47d61c*/
        IDA_HIWORD(aP1) = v20; /*0x47d621*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47d650*/
          goto LABEL_98; /*0x47d650*/
        v21 = IDA_LOWORD(v3->field_0) - 1; /*0x47d65d*/
        IDA_HIWORD(aP1) = *(unsigned short *)(this + 38); /*0x47d65f*/
        IDA_LOWORD(aP1) = v21; /*0x47d664*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47d693*/
          goto LABEL_98; /*0x47d693*/
        v22 = *(unsigned short *)(this + 38); /*0x47d69c*/
        IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 2; /*0x47d6a8*/
        IDA_HIWORD(aP1) = v22 + 2; /*0x47d6ad*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47d6dc*/
          goto LABEL_98; /*0x47d6dc*/
        v23 = *(unsigned short *)(this + 38) + 1; /*0x47d6eb*/
        IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 1; /*0x47d6ed*/
        IDA_HIWORD(aP1) = v23; /*0x47d6f2*/
        if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) /*0x47d7a7*/
          || (v24 = *(unsigned short *)(this + 38) + 1,
              IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) - 1,
              IDA_HIWORD(aP1) = v24,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283))
          || (v25 = *(unsigned short *)(this + 38) - 1,
              IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 1,
              IDA_HIWORD(aP1) = v25,
              *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283)) )
        {
LABEL_98:
          if ( *(unsigned char *)(*(unsigned int *)&g_abs_87F8E4 + 1636) == 2 && !*(unsigned int *)(this + 236) ) /*0x47d7b7*/
            *(unsigned int *)(this + 236) = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState(this); /*0x47d7cd*/
      v26 = v57; /*0x47d7d2*/
      v57[1] = *(unsigned char *)(this + 283); /*0x47d7dd*/
      *(unsigned char *)(v56 + 8) = *(unsigned char *)(this + 283); /*0x47d7ea*/
      *v26 = *(unsigned char *)(this + 76); /*0x47d7f2*/
      return; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v6 == -1 || (v45 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * v6], *(unsigned char *)(v45 + 684)) ) /*0x47db30*/
    *(unsigned int *)(this + 236) = 0; /*0x47db48*/
  else
    *(unsigned int *)(this + 236) = *(unsigned int *)(v45 + 664); /*0x47db40*/
  *(unsigned char *)(this + 284) = 0; /*0x47db52*/
LABEL_82:
  if ( *(unsigned char *)(*(unsigned int *)&g_abs_87F8E4 + 1636) ) /*0x47db5e*/
  {
    v46 = *(unsigned short *)(this + 38); /*0x47db6f*/
    IDA_LOWORD(aP1) = v3->field_0; /*0x47db73*/
    IDA_HIWORD(aP1) = v46 - 1; /*0x47db7e*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47dba9*/
      goto LABEL_89; /*0x47dba9*/
    v47 = IDA_LOWORD(v3->field_0) - 1; /*0x47dbb6*/
    IDA_HIWORD(aP1) = *(unsigned short *)(this + 38); /*0x47dbb8*/
    IDA_LOWORD(aP1) = v47; /*0x47dbbd*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47dbec*/
      goto LABEL_89; /*0x47dbec*/
    v48 = *(unsigned short *)(this + 38) + 2; /*0x47dbfd*/
    IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 2; /*0x47dc01*/
    IDA_HIWORD(aP1) = v48; /*0x47dc0a*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) ) /*0x47dc35*/
      goto LABEL_89; /*0x47dc35*/
    v49 = *(unsigned short *)(this + 38) + 1; /*0x47dc44*/
    IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 1; /*0x47dc46*/
    IDA_HIWORD(aP1) = v49; /*0x47dc4f*/
    if ( *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283) /*0x47dd00*/
      || (v50 = *(unsigned short *)(this + 38) + 1,
          IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) - 1,
          IDA_HIWORD(aP1) = v50,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283))
      || (v51 = *(unsigned short *)(this + 38) - 1,
          IDA_LOWORD(aP1) = IDA_LOWORD(v3->field_0) + 1,
          IDA_HIWORD(aP1) = v51,
          *(char *)(this + 283) + 4 <= *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1) + 283)) )
    {
LABEL_89:
      if ( *(unsigned char *)(*(unsigned int *)&g_abs_87F8E4 + 1636) == 2 ) /*0x47dd0f*/
      {
        v52 = *(unsigned int *)(this + 236); /*0x47dd11*/
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
          *(unsigned int *)(this + 236) = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState(this); /*0x47dd36*/
  v53 = v57; /*0x47dd3b*/
  v57[1] = *(unsigned char *)(this + 283); /*0x47dd45*/
  *v53 = *(unsigned char *)(this + 76); /*0x47dd4b*/
  *(unsigned char *)(v56 + 8) = *(unsigned char *)(this + 283); /*0x47dd57*/

}
}
// 0x47FB90
namespace gamemd {
unsigned int * House::GetStartCoords(IUnknown * aP1)
{

  int v3; // ecx
  unsigned char *v4; // ebp
  int BuildingByTiberiumType; // eax
  unsigned int *v6; // edi
  int v7; // ecx
  int v8; // ecx
  char **v9; // eax
  int *v10; // ecx
  int v11; // kr08_4
  int v12; // kr00_4
  unsigned int *v13; // eax
  int v14; // esi
  int v16; // edi
  int v17; // esi
  unsigned int *FoundationSize; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // eax
  char **v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int a2; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  unsigned int a1[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = *((unsigned int *)this + 17); /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  a2 = *(uint8_t *)((char *)this + 286); /*0x47fbb5*/
  v4 = *(unsigned char **)&g_abs_A83D84->__pad_0[4 * v3]; /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = *(unsigned int **)(*(unsigned int *)&g_abs_B077F8 + 4 * BuildingByTiberiumType); /*0x47fbe2*/
    if ( *((unsigned char *)this + 284) ) /*0x47fbe5*/
    {
      v7 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * v6[58] /*0x47fc36*/
                                               + 4 * *(unsigned int *)(v6[56] + 660)
                                               + 4 * v6[59] / 4 * (*(uint8_t *)((char *)this + 284) - 1)
                                               + 4 * (*(int16_t *)((char *)this + 36) * *(int16_t *)((char *)this + 38) % (v6[59] / 4))];
      v23 = (char **)(*(int (**)(int))(*(unsigned int *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * *(unsigned int *)(v6[56] + 660) /*0x47fc6f*/
                                             + 4 * (*(int16_t *)((char *)this + 36) * *(int16_t *)((char *)this + 38) % v6[58])];
    v9 = (char **)(*(int (**)(int))(*(unsigned int *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (char **)(*(int (**)(unsigned char *))(*(unsigned int *)v4 + 156))(v4); /*0x47fca7*/
LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  v10 = *(int **)((char *)this + 64); /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (BuildingTypeClass *)&v23, &a2); /*0x47fc9b*/
LABEL_12:
  v11 = (*(int16_t *)((char *)this + 36) << 8) + 128; /*0x47fcb1*/
  v12 = (*(int16_t *)((char *)this + 38) << 8) + 128; /*0x47fce0*/
  a1[2] = 0; /*0x47fce2*/
  a1[0] = (v11 / 256) << 8; /*0x47fd02*/
  a1[1] = (v12 / 256) << 8; /*0x47fd06*/
  Coord::To_Screen(*(unsigned int **)&g_abs_87F8E4, a1, (IUnknown *)&v25); /*0x47fd0a*/
  v13 = BuildingClass::CalcDrawPos(this, (IUnknown *)a1); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  v14 = v13[1] + v26; /*0x47fd31*/
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
  v16 = v25 - *((int16_t *)v23 + 1) / 2; /*0x47fd93*/
  v17 = v26 - *((int16_t *)v23 + 2) / 2; /*0x47fd9f*/
  FoundationSize = Building::GetFoundationSize(a1, a2); /*0x47fda7*/
  v19 = v16 + *FoundationSize; /*0x47fdb1*/
  v20 = v17 + FoundationSize[1]; /*0x47fdb7*/
  v21 = FoundationSize[2]; /*0x47fdb9*/
  v22 = FoundationSize[3]; /*0x47fdbc*/
  aP1->field_0 = v19; /*0x47fdc1*/
  aP1->field_4 = v20; /*0x47fdc3*/
  aP1->field_8 = v21; /*0x47fdc6*/
  aP1->field_C = v22; /*0x47fdc9*/
  return &aP1->field_0; /*0x47fd5c*/

}
}
// 0x4FD500
namespace gamemd {
int House::UpdateHouseAI()
{

  HouseClass *v2; // ebp
  int v3; // edx
  int v4; // eax
  CellStruct *v5; // eax
  void *v6; // eax
  unsigned int v7; // ecx
  int64_t v8; // rax
  int v9; // edi
  HouseClass *v10; // esi
  CellStruct *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  void *v15; // eax
  int *v16; // edx
  double v17; // st7
  int v18; // eax
  HouseClass *v19; // esi
  int v20; // edx
  int v21; // eax
  HouseClass **v22; // ecx
  int v23; // eax
  int v24; // edi
  int v25; // esi
  int v26; // ecx
  HouseClass *v27; // edx
  int v28; // eax
  int v29; // eax
  int i; // ebp
  int j; // edi
  int aP0; // [esp+8h] [ebp-48h]
  CellStruct *v34; // [esp+20h] [ebp-30h] BYREF
  unsigned int v35[2]; // [esp+24h] [ebp-2Ch] BYREF
  int v36; // [esp+2Ch] [ebp-24h]
  unsigned int v37; // [esp+30h] [ebp-20h]
  int v38; // [esp+34h] [ebp-1Ch]
  unsigned int v39[3]; // [esp+38h] [ebp-18h] BYREF
  unsigned char v40[12]; // [esp+44h] [ebp-Ch] BYREF

  v2 = 0; /*0x4fd50d*/
  v3 = *((unsigned int *)this + 5520); /*0x4fd50f*/
  v4 = *((unsigned int *)this + 5522); /*0x4fd515*/
  if ( v3 == -1 ) /*0x4fd520*/
  {
LABEL_4:
    if ( v4 ) /*0x4fd532*/
      goto LABEL_29; /*0x4fd532*/
    goto LABEL_5; /*0x4fd532*/
  }
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - v3 < v4 ) /*0x4fd52c*/
  {
    v4 -= *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - v3; /*0x4fd52e*/
    goto LABEL_4; /*0x4fd52e*/
  }
LABEL_5:
  if ( *((unsigned int *)this + 5504) == -1
    && *(unsigned int *)&HouseClass_Player.__pad_5568[8068]
    && !*(unsigned char *)(*((unsigned int *)this + 13) + 422) )
  {
    v5 = CellStruct::Equals((unsigned short *)((char *)this + 21652), &HouseClass_Player.__pad_5568[23780])
       ? *(CellStruct **)((char *)this + 21648)
       : *(CellStruct **)((char *)this + 21652);
    v34 = v5; /*0x4fd58b*/
    if ( !CellStruct::Equals(&v34, &HouseClass_Player.__pad_5568[23780]) )
    {
      v6 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v34); /*0x4fd5a6*/
      IDA_LODWORD(v8) = (*(int (**)(void *, unsigned int *))(*(unsigned int *)v6 + 72))(v6, v39); /*0x4fd5b4*/
      v36 = *(unsigned int *)v8; /*0x4fd5c3*/
      v7 = *(unsigned int *)(v8 + 4); /*0x4fd5c7*/
      v37 = v7; /*0x4fd5ca*/
      IDA_HIDWORD(v8) = *(unsigned int *)(v8 + 8); /*0x4fd5ce*/
      v38 = IDA_HIDWORD(v8); /*0x4fd5d1*/
      if ( v36 != *(unsigned int *)&HouseClass_Player.__pad_5568[23876]
        || __PAIR64__(IDA_HIDWORD(v8), v7) != *(unsigned long long *)&HouseClass_Player.__pad_5568[23880] )
      {
        v9 = 0x7FFFFFFF; /*0x4fd5f0*/
        v34 = 0; /*0x4fd5f7*/
        if ( (int)HouseClass_Count > 0 )
        {
          do
          {
            v10 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * (unsigned int)v34]; /*0x4fd60b*/
            if ( v10 != (HouseClass *)this )
            {
              IDA_HIDWORD(v8) = v10->relatedTagsCapacity; /*0x4fd616*/
              if ( !*(unsigned char *)(IDA_HIDWORD(v8) + 422) && !v10->defeated )
              {
                v11 = CellStruct::Equals((unsigned short *)((char *)this + 21652), &HouseClass_Player.__pad_5568[23780])
                    ? *(CellStruct **)((char *)this + 21648)
                    : *(CellStruct **)((char *)this + 21652);
                v35[0] = v11; /*0x4fd660*/
                if ( CellStruct::Equals(v35, &HouseClass_Player.__pad_5568[23780]) ) /*0x4fd664*/
                {
                  v12 = *(unsigned int *)&HouseClass_Player.__pad_5568[23876]; /*0x4fd66d*/
                  v13 = *(unsigned int *)&HouseClass_Player.__pad_5568[23880]; /*0x4fd672*/
                  v14 = *(unsigned int *)&HouseClass_Player.__pad_5568[23884]; /*0x4fd678*/
                }
                else
                {
                  v15 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)v35); /*0x4fd68a*/
                  v16 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v15 + 72))(v15, v40); /*0x4fd69b*/
                  v12 = *v16; /*0x4fd69d*/
                  v13 = v16[1]; /*0x4fd69f*/
                  v14 = v16[2]; /*0x4fd6a2*/
                }
                v39[0] = v12 - v36; /*0x4fd6ac*/
                v39[1] = v13 - v37; /*0x4fd6b6*/
                v39[2] = v14 - v38; /*0x4fd6c4*/
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
            UpdateHouseClassAnger((IUnknown *)this, (HouseClass *)IDA_HIDWORD(v8), 1, (int)v2); /*0x4fd71e*/
        }
      }
    }
  }
LABEL_29:
  v18 = *((unsigned int *)this + 5504); /*0x4fd723*/
  if ( v18 != -1 ) /*0x4fd72c*/
  {
    v19 = *(HouseClass **)&HouseClass_Array->__pad_0[4 * v18]; /*0x4fd734*/
    if ( v19->defeated ) /*0x4fd737*/
    {
      v20 = *((unsigned int *)this + 5509); /*0x4fd741*/
      v21 = 0; /*0x4fd747*/
      if ( v20 > 0 ) /*0x4fd74b*/
      {
        v22 = *(HouseClass ***)((char *)this + 22024); /*0x4fd753*/
        while ( *v22 != v19 ) /*0x4fd757*/
        {
          ++v21; /*0x4fd759*/
          v22 += 2; /*0x4fd75a*/
          if ( v21 >= v20 ) /*0x4fd75f*/
            goto LABEL_37; /*0x4fd75f*/
        }
        aP0 = -*(unsigned int *)(*((unsigned int *)this + 5506) + 8 * v21 + 4); /*0x4fd76a*/
        UpdateHouseClassAnger((IUnknown *)this, (HouseClass *)aP0, aP0, (int)v19); /*0x4fd76d*/
      }
LABEL_37:
      *((unsigned int *)this + 5504) = -1; /*0x4fd772*/
    }
  }
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] /*0x4fd797*/
    || *((unsigned int *)this + 147) >= *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5176) )
  {
    HouseClass::UpdateAITryFireSW(this); /*0x4fd79b*/
  }
  v23 = *((unsigned int *)this + 148); /*0x4fd7a0*/
  if ( v23 == 4 ) /*0x4fd7ae*/
  {
    (*(void (**)(int))(*((unsigned int *)this + 9) + 52))((char *)this + 36); /*0x4fd7b7*/
    (*(void (**)(int))(*((unsigned int *)this + 9) + 56))((char *)this + 36); /*0x4fd7bd*/
  }
  else
  {
    if ( !v23 && (*(int (**)(int))(*((unsigned int *)this + 9) + 24))((char *)this + 36) < 25 ) /*0x4fd7d8*/
      *((unsigned int *)this + 148) = 1; /*0x4fd7da*/
    if ( *((unsigned int *)this + 148) == 1 && (*(int (**)(int))(*((unsigned int *)this + 9) + 24))((char *)this + 36) >= 25 ) /*0x4fd7fa*/
      *((unsigned int *)this + 148) = 0; /*0x4fd7fc*/
    if ( *((unsigned int *)this + 148) != 3 ) /*0x4fd808*/
      goto LABEL_53; /*0x4fd808*/
    if ( *((unsigned int *)this + 5430) + 900 < *(int *)&HouseClass_Player.__pad_5568[23248] ) /*0x4fd81d*/
      *((unsigned int *)this + 148) = 0; /*0x4fd81f*/
    if ( *((unsigned int *)this + 148) != 3 ) /*0x4fd82b*/
    {
LABEL_53:
      if ( *((unsigned int *)this + 5430) + 900 > *(int *)&HouseClass_Player.__pad_5568[23248] ) /*0x4fd840*/
        *((unsigned int *)this + 148) = 3; /*0x4fd842*/
    }
  }
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] ) /*0x4fd851*/
  {
    v24 = 0; /*0x4fd857*/
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
      if ( *((unsigned int *)this + 148) == 3 ) /*0x4fd87f*/
        goto LABEL_70; /*0x4fd87f*/
      v25 = *((unsigned int *)this + 30); /*0x4fd881*/
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
                (*(void (**)(int))(*((unsigned int *)this + 9) + 52))((char *)this + 36); /*0x4fd8fe*/
                (*(void (**)(int))(*((unsigned int *)this + 9) + 56))((char *)this + 36); /*0x4fd904*/
              }
            }
          }
        }
        return Random::Range( /*0x4fd911*/
                 (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                 (IUnknown *)1,
                 (IUnknown *)7)
             + 105;
      }
    }
    v27 = *(HouseClass **)((char *)this + 108); /*0x4fd88a*/
    while ( 1 ) /*0x4fd88d*/
    {
      v28 = *(unsigned int *)v27->__pad_0; /*0x4fd88d*/
      if ( *(unsigned int *)v27->__pad_0 ) /*0x4fd88d*/
      {
        if ( *(unsigned char *)(v28 + 144) && !*(unsigned char *)(v28 + 129) && *(unsigned int *)(*(unsigned int *)(v28 + 1312) + 3768) ) /*0x4fd8ab*/
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
  return Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)7) /*0x4fd927*/
       + 105;

}
}
// 0x501A20
namespace gamemd {
void sub_501A20()
{
  wchar_t *v0; // ebx
  int v1; // edi
  int v2; // esi

  v0 = dword_A8ECC8; /*0x501a21*/
  if ( dword_A8ECC8 ) /*0x501a2a*/
  {
    v1 = 0; /*0x501a2c*/
    if ( (int)dword_A8ECC8 > 0 ) /*0x501a30*/
    {
      do /*0x501a92*/
      {
        v2 = *((unsigned int *)dword_A8ECBC + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (**)(unsigned int))(*(unsigned int *)v2 + 44))(*((unsigned int *)dword_A8ECBC + v1)) == 6
          && !*(unsigned char *)(v2 + 1050)
          && *(int *)(*(unsigned int *)(v2 + 1312) + 3808) > 0
          && ((1 << *(unsigned int *)(*((unsigned int *)dword_A83D4C + 13) + 184)) & *(unsigned int *)(v2 + 528)) != 0 )
        {
          (*(void (**)(int, int))(*(unsigned int *)v2 + 292))(v2, 2); /*0x501a89*/
        }
        ++v1; /*0x501a8f*/
      }
      while ( v1 < (int)v0 ); /*0x501a92*/
    }
  }
}
}
// 0x50B6F0
namespace gamemd {
int House::IsHumanPlayer()
{

  if ( g_abs_A8B238[0] ) /*0x50b6f7*/
    return this == HouseClass_Player; /*0x50b720*/
  return *((unsigned char *)this + 492) || *((unsigned char *)this + 493); /*0x50b70f*/

}
}
// 0x50B730
namespace gamemd {
int House::IsCurrentPlayer()
{

  int result; // eax

  result = g_abs_A8B238[0]; /*0x50b730*/
  IDA_LOBYTE(result) = *((unsigned char *)this + 492); /*0x50b737*/
  if ( !g_abs_A8B238[0] ) /*0x50b73d*/
    IDA_LOBYTE(result) = (unsigned char)result || *((unsigned char *)this + 493); /*0x50b750*/
  return result; /*0x50b74f*/

}
}
// 0x50DB00
namespace gamemd {
AbstractClass * * House::ChooseHouseEnemy(BuildingClass * aP1)
{

  void *v2; // edx
  void *v3; // ebx
  int *v4; // esi
  int v5; // edi
  void *v6; // ebp
  MouseClass *v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned char *v10; // esi
  MouseClass *v11; // ecx
  int *v12; // eax
  int result; // eax
  int16_t *v14; // eax
  int v15; // esi
  int v16; // edi
  unsigned int *v17; // eax
  int v18; // ecx
  double v19; // st7
  int v20; // ebp
  unsigned int *v21; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // ebx
  unsigned int *v25; // eax
  int v26; // ecx
  double v27; // st7
  unsigned int *v28; // eax
  int v29; // ecx
  double v30; // st7
  int v31; // eax
  MouseClass *v33; // [esp+20h] [ebp-24h] BYREF
  int v34; // [esp+24h] [ebp-20h]
  unsigned int v35[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v36; // [esp+38h] [ebp-Ch] BYREF
  void *v37; // [esp+3Ch] [ebp-8h]
  void *v38; // [esp+40h] [ebp-4h]
  BuildingClass *aP1a; // [esp+48h] [ebp+4h]
  BuildingClass *aP1b; // [esp+48h] [ebp+4h]

  v2 = *(void **)&g_abs_A8D63C; /*0x50db03*/
  v3 = *(void **)&g_abs_A8D63C; /*0x50db0a*/
  v4 = this; /*0x50db12*/
  v5 = *(unsigned int *)&g_abs_A8D63C; /*0x50db19*/
  v36 = *(unsigned int *)&g_abs_A8D63C; /*0x50db25*/
  v37 = *(void **)&g_abs_A8D63C; /*0x50db29*/
  v38 = *(void **)&g_abs_A8D63C; /*0x50db2d*/
  v6 = *(void **)&g_abs_A8D63C; /*0x50db31*/
  if ( aP1 && IDA_HIBYTE(aP1->barrelRecoil[5]) && *((unsigned int *)aP1->Type + 942) == 7 ) /*0x50db4c*/
  {
    v7 = (MouseClass *)(*(int (**)(unsigned int *))(*(unsigned int *)aP1->__pad_0 + 72))(v35); /*0x50db58*/
    v8 = v7->field_0; /*0x50db5a*/
    v36 = v7->field_0; /*0x50db5c*/
    v37 = v7->field_4; /*0x50db63*/
    v38 = v7->field_8; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !*((char *)this + 188) || (v9 = 0, aP1a = 0, *((char *)this + 30) <= 0) ) /*0x50db8c*/
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
    v10 = *(unsigned char **)(v4[27] + 4 * v9); /*0x50dba1*/
    if ( !v10 || v10[129] ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(unsigned char *)(*((unsigned int *)v10 + 328) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v5 == *(unsigned int *)&g_abs_A8D63C /*0x50dc06*/
      && v3 == *(void **)&g_abs_A8D63C
      && v6 == v2 )
    {
      v12 = (int *)(*(int (**)(unsigned char *, MouseClass **))(*(unsigned int *)v10 + 72))(v10, &v33); /*0x50dc11*/
      v5 = *v12; /*0x50dc14*/
      v3 = (void *)v12[1]; /*0x50dc16*/
      v6 = (void *)v12[2]; /*0x50dc19*/
    }
LABEL_18:
    v9 = (int)&aP1a->__pad_0[1]; /*0x50dc1c*/
    aP1a = (BuildingClass *)v9; /*0x50dc28*/
    if ( v9 >= *((char *)this + 30) ) /*0x50dc2e*/
    {
      v8 = v36; /*0x50dc34*/
      v4 = this; /*0x50dc38*/
      goto LABEL_20; /*0x50dc38*/
    }
    v4 = this; /*0x50db94*/
    v2 = *(void **)&g_abs_A8D63C; /*0x50db98*/
  }
  v11 = (MouseClass *)(*(int (**)(unsigned char *, unsigned int *))(*(unsigned int *)v10 + 72))(v10, v35); /*0x50dbce*/
  v8 = v11->field_0; /*0x50dbd0*/
  v36 = v11->field_0; /*0x50dbd2*/
  v37 = v11->field_4; /*0x50dbd9*/
  v38 = v11->field_8; /*0x50dbe0*/
  if ( !v10[979] ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  v4 = this; /*0x50dca9*/
LABEL_20:
  if ( v8 == *(unsigned int *)&g_abs_A8D63C ) /*0x50dc40*/
  {
    v2 = *(void **)&g_abs_A8D63C; /*0x50dc4e*/
    if ( v37 == *(void **)&g_abs_A8D63C && v38 == *(void **)&g_abs_A8D63C ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
LABEL_24:
    if ( v8 == *(unsigned int *)&g_abs_A8D63C /*0x50dc84*/
      && v37 == *(void **)&g_abs_A8D63C
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
  v14 = (int16_t *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&v36); /*0x50dcb9*/
  v15 = v14[18]; /*0x50dcbe*/
  v16 = v14[19]; /*0x50dcc2*/
  v33 = (MouseClass *)((int)g_abs_87F8E4 / 2); /*0x50dcd9*/
  v34 = 1; /*0x50dce3*/
  v17 = HexCoord::Convert(&g_abs_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50dceb*/
  v18 = v17[1]; /*0x50dcfd*/
  v33 = (MouseClass *)(v15 - *v17); /*0x50dd00*/
  v34 = v16 - v18; /*0x50dd06*/
  v19 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v18) * (double)(v16 - v18)); /*0x50dd23*/
  v20 = Math::RoundToInt(v19); /*0x50dd3c*/
  v33 = (MouseClass *)g_abs_87F8E4; /*0x50dd3e*/
  v34 = (int)g_abs_87F8E4; /*0x50dd51*/
  v21 = HexCoord::Convert(&g_abs_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50dd55*/
  v22 = v21[1]; /*0x50dd61*/
  v33 = (MouseClass *)(v15 - *v21); /*0x50dd6c*/
  v34 = v16 - v22; /*0x50dd70*/
  v23 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v22) * (double)(v16 - v22)); /*0x50dd8d*/
  v24 = Math::RoundToInt(v23); /*0x50dd9a*/
  v33 = (MouseClass *)((int)g_abs_87F8E4 / 2); /*0x50dda6*/
  v34 = 2 * (int)g_abs_87F8E4; /*0x50ddc2*/
  v25 = HexCoord::Convert(&g_abs_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50ddc6*/
  v26 = v25[1]; /*0x50ddd2*/
  v33 = (MouseClass *)(v15 - *v25); /*0x50dddd*/
  v34 = v16 - v26; /*0x50dde1*/
  v27 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v26) * (double)(v16 - v26)); /*0x50ddfe*/
  aP1b = (BuildingClass *)Math::RoundToInt(v27); /*0x50de11*/
  v34 = (int)g_abs_87F8E4; /*0x50de1d*/
  v33 = 0; /*0x50de28*/
  v28 = HexCoord::Convert(&g_abs_87F7E8, (IUnknown *)v35, (IUnknown *)&v33); /*0x50de30*/
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
        *((char *)this + 5599) = 3; /*0x50dec1*/
      else
        *((char *)this + 5599) = 2; /*0x50deb1*/
    }
    else
    {
      *((char *)this + 5599) = 1; /*0x50de9d*/
    }
  }
  else
  {
    *((char *)this + 5599) = 0; /*0x50de85*/
  }
  result = *((char *)this + 5599); /*0x50decf*/
  if ( (unsigned int)result >= 4 ) /*0x50ded7*/
    return 0; /*0x50ded7*/
  return result; /*0x50dc9d*/

}
}
// 0x544BE0
namespace gamemd {
int House::LookupObject(int a2)
{

  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)this + 156))(this); /*0x544be2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x544c03*/
    return dword_8288E4[*(char *)(v3 + 41)]; /*0x544c09*/
  else
    return 0; /*0x544c13*/

}
}
// 0x544C20
namespace gamemd {
int House::LoadMapFileData(int a2, char a3)
{

  unsigned int *v4; // eax

  if ( a3 && !*((unsigned int *)this + 41) && *((unsigned char *)this + 756) ) /*0x544c35*/
    MapClass::LoadFileData((int)this); /*0x544c3f*/
  v4 = (unsigned int *)(*(int (**)(unsigned int *))(*(unsigned int *)this + 624))(this); /*0x544c48*/
  return v4 && a2 < *v4 * v4[1] && v4[a2 + 4]; /*0x544c50*/

}
}
// 0x69E090
namespace gamemd {
void House::Constructor()
{

  char *EntireFile; // eax
  unsigned int v3[22]; // [esp+4h] [ebp-6Ch] BYREF
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v5; // [esp+68h] [ebp-8h]

  if ( *(unsigned short *)this == 0xFFFF && !*((unsigned char *)this + 16) ) /*0x69e09c*/
  {
    CCFileClass::Construct(v3, *((unsigned int *)this + 2)); /*0x69e0ab*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v3); /*0x69e0b4*/
    if ( EntireFile ) /*0x69e0bb*/
    {
      *((unsigned int *)this + 3) = EntireFile; /*0x69e0bd*/
      *((unsigned char *)this + 16) = 1; /*0x69e0c0*/
    }
    v3[0] = &vt_CCFileClass; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    v3[0] = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor(v3); /*0x69e0e9*/
  }

}
}
// 0x70C270
namespace gamemd {
int House::PowerBeginUpdate(AbstractClass * aP1)
{

  int v3; // edx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  CellStruct *v22; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ebp
  int i; // ebx
  int v20; // ebp
  int result; // eax
  int j; // ebx
  AbstractClass *v33; // [esp-4h] [ebp-14h]
  AbstractClass *v34; // [esp-4h] [ebp-14h]

  RadioClass::PowerDrainUpdate((int *)this, aP1); /*0x70c27b*/
  Power::TimerProcess(aP1); /*0x70c289*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 344), *(AbstractClass **)((char *)this + 348)); /*0x70c29e*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 352), *(AbstractClass **)((char *)this + 356)); /*0x70c2b3*/
  Power::TimerProcess(aP1); /*0x70c2de*/
  Power::TimerProcess(aP1); /*0x70c2ec*/
  Power::TimerProcess(aP1); /*0x70c2fa*/
  Power::TimerProcess(aP1); /*0x70c325*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)((char *)this + 588)); /*0x70c333*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 592); /*0x70c338*/
  Power::FlagProcess(aP1, v3); /*0x70c341*/
  Power::TimerProcess(aP1); /*0x70c34f*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)((char *)this + 744)); /*0x70c35d*/
  Power::TimerProcess(aP1); /*0x70c388*/
  Power::TimerProcess(aP1); /*0x70c396*/
  Power::TimerProcess(aP1); /*0x70c3c1*/
  Power::TimerProcess(aP1); /*0x70c3cf*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)((char *)this + 808)); /*0x70c3dd*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)((char *)this + 812)); /*0x70c3eb*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)((char *)this + 816)); /*0x70c3f9*/
  Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)((char *)this + 820)); /*0x70c407*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 973); /*0x70c40c*/
  v5 = Power::FlagProcess(aP1, v4); /*0x70c415*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 975); /*0x70c41a*/
  Power::FlagProcess(aP1, v5); /*0x70c423*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 976); /*0x70c428*/
  Power::FlagProcess(aP1, v6); /*0x70c431*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 977); /*0x70c436*/
  v8 = Power::FlagProcess(aP1, v7); /*0x70c43f*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 978); /*0x70c444*/
  Power::FlagProcess(aP1, v8); /*0x70c44d*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 979); /*0x70c452*/
  Power::FlagProcess(aP1, v9); /*0x70c45b*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 980); /*0x70c460*/
  v11 = Power::FlagProcess(aP1, v10); /*0x70c469*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 981); /*0x70c46e*/
  Power::FlagProcess(aP1, v11); /*0x70c477*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 1048); /*0x70c47c*/
  Power::FlagProcess(aP1, v12); /*0x70c485*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 1049); /*0x70c48a*/
  Power::FlagProcess(aP1, v13); /*0x70c493*/
  v22 = g_abs_A8B238; /*0x70c498*/
  if ( !g_abs_A8B238 || g_abs_A8B238 == (CellStruct *)5 ) /*0x70c4a4*/
  {
    IDA_LOBYTE(v22) = *((unsigned char *)this + 1050); /*0x70c4a6*/
    Power::FlagProcess(aP1, (int)v22); /*0x70c4af*/
    IDA_LOBYTE(v15) = *((unsigned char *)this + 1051); /*0x70c4b4*/
    Power::FlagProcess(aP1, v15); /*0x70c4bd*/
    IDA_LOBYTE(v16) = *((unsigned char *)this + 1052); /*0x70c4c2*/
    v22 = (CellStruct *)Power::FlagProcess(aP1, v16); /*0x70c4cb*/
  }
  IDA_LOBYTE(v22) = *((unsigned char *)this + 1053); /*0x70c4d0*/
  Power::FlagProcess(aP1, (int)v22); /*0x70c4d9*/
  Power::TimerProcess(aP1); /*0x70c4e7*/
  Power::TimerProcess(aP1); /*0x70c4f7*/
  Power::TimerProcess(aP1); /*0x70c507*/
  IDA_LOBYTE(v17) = *((unsigned char *)this + 1056); /*0x70c50c*/
  Power::FinalizeDrain(aP1, v17); /*0x70c515*/
  v18 = *((unsigned int *)this + 282); /*0x70c51a*/
  Power::TimerProcess(aP1); /*0x70c523*/
  for ( i = 0; i < v18; ++i ) /*0x70c52c*/
  {
    v33 = (AbstractClass *)(*(unsigned int *)(*((unsigned int *)this + 279) + 4 * i) + 4); /*0x70c547*/
    (*(void (**)(AbstractClass *))(*(unsigned int *)v33->__pad_0 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(aP1); /*0x70c550*/
    Power::TimerProcess(aP1); /*0x70c55c*/
  }
  v20 = *((unsigned int *)this + 288); /*0x70c566*/
  result = Power::TimerProcess(aP1); /*0x70c56f*/
  for ( j = 0; j < v20; ++j ) /*0x70c578*/
  {
    v34 = (AbstractClass *)(*(unsigned int *)(*((unsigned int *)this + 285) + 4 * j) + 4); /*0x70c586*/
    (*(void (**)(AbstractClass *))(*(unsigned int *)v34->__pad_0 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(aP1); /*0x70c58f*/
  }
  return result; /*0x70c599*/

}
}
// 0x72F350
namespace gamemd {
unsigned int * sub_72F350()
{
  unsigned int *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  byte_B0FC0C = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((unsigned int *)dword_A8B230 + 3374) == 2 ) /*0x72f377*/
  {
    LoadPaletteSimple(off_844BF8, &dword_B0FBEC, &dword_B0FBF0); /*0x72f389*/
    LoadPaletteSimple(off_844BFC[0], &dword_B0FBF4, &dword_B0FBF8); /*0x72f39e*/
  }
  else
  {
    LoadPaletteSimple(off_844C00, &dword_B0FBF4, &dword_B0FBF8); /*0x72f3b0*/
    LoadPaletteSimple(off_844BF4, &dword_B0FBEC, &dword_B0FBF0); /*0x72f3c5*/
  }
  LoadPaletteSimple(off_844BF0, &dword_B0FBE4, &dword_B0FBE8); /*0x72f3da*/
  LoadPaletteSimple(off_844C04, &dword_B0FBFC, &dword_B0FC00); /*0x72f3ef*/
  LoadPaletteSimple(off_844C08, &dword_B0FC04, &dword_B0FC08); /*0x72f404*/
  result = SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f415*/
  byte_B0FC0C = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}
}
// 0x6D1660
namespace gamemd {
void House_Play_6D1660()
{
  unsigned char *v2; // ecx
  unsigned char *v3; // edi
  char result; // al
  ShapeButtonClass *v5; // esi
  int *v6; // esi
  int v7; // eax
  ShapeButtonClass *v8; // eax
  int v9; // edx
  int v10; // edx
  int v12[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v13; // [esp+24h] [ebp-4h]

  v3 = v2; /*0x6d1664*/
  result = v2[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    v5 = &stru_B0C1C0; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (**)(unsigned char *, ShapeButtonClass *))(*(unsigned int *)v3 + 52))(v3, v5); /*0x6d167f*/
      v5 += 8; /*0x6d1682*/
    }
    while ( (int)v5 < (int)&dword_B0CB20 ); /*0x6d168b*/
    (*(void (**)(unsigned char *, GadgetClass *, int))(*(unsigned int *)v3 + 52))(v3, &stru_B0CCB0, a2); /*0x6d1696*/
    v6 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v7 = *v6; /*0x6d169e*/
      if ( *v6 >= 0 && v7 < 25 ) /*0x6d16a7*/
      {
        v8 = &stru_B0C1C0 + 8 * v7; /*0x6d16af*/
        if ( v8 ) /*0x6d16b6*/
          HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(unsigned int *)v8[3].__pad_0); /*0x6d16c2*/
      }
      ++v6; /*0x6d16c7*/
    }
    while ( (int)v6 < (int)byte_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d16dd*/
    v9 = *(unsigned int *)v3; /*0x6d16e2*/
    v3[21828] = 0; /*0x6d16eb*/
    (*(void (**)(unsigned char *, GadgetClass *))(v9 + 48))(v3, &stru_B0CC40); /*0x6d16f2*/
    if ( &stru_B0CC40 ) /*0x6d16fd*/
    {
      v12[1] = stru_B0CC40.Width; /*0x6d1710*/
      v12[2] = stru_B0CC40.Height; /*0x6d171a*/
      v12[3] = *(unsigned int *)&stru_B0CC40.Visible; /*0x6d1724*/
      v13 = 0; /*0x6d172f*/
      v12[0] = dword_B0CC64; /*0x6d1734*/
      v12[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v12[4] = stru_B0CC40.ID; /*0x6d1740*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v12); /*0x6d1754*/
    }
    v10 = *(unsigned int *)v3; /*0x6d1759*/
    v3[21829] = 1; /*0x6d175f*/
    return (*(char (**)(unsigned char *, unsigned int))(v10 + 56))(v3, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}
}
// 0x637A10
namespace gamemd {
char sub_637A10()
{
  char result; // al
  unsigned char v1[108]; // [esp-70h] [ebp-ECh] BYREF
  int v2; // [esp-4h] [ebp-80h]
  char v3[108]; // [esp+Ch] [ebp-70h] BYREF
  int16_t v4; // [esp+78h] [ebp-4h]
  char v5; // [esp+7Ah] [ebp-2h]

  result = byte_AC4CF4; /*0x637a10*/
  if ( byte_AC4CF4 ) /*0x637a1f*/
  {
    EventClass::AddEvent(v3, *((unsigned int *)dword_A83D4C + 12), 0x2Bu); /*0x637a30*/
    qmemcpy(v1, v3, sizeof(v1)); /*0x637a43*/
    IDA_LOWORD(v2) = v4; /*0x637a45*/
    IDA_BYTE2(v2) = v5; /*0x637a47*/
    Network::RecordEvent( /*0x637a48*/
      *(int64_t *)v1,
      *(int *)&v1[8],
      *(int *)&v1[12],
      *(int *)&v1[16],
      *(int *)&v1[20],
      *(int *)&v1[24],
      *(int *)&v1[28],
      *(int *)&v1[32],
      *(int *)&v1[36],
      *(int *)&v1[40],
      *(int *)&v1[44],
      *(int *)&v1[48],
      *(int *)&v1[52],
      *(int *)&v1[56],
      *(int *)&v1[60],
      *(int *)&v1[64],
      *(int *)&v1[68],
      *(int *)&v1[72],
      *(int *)&v1[76],
      *(int *)&v1[80],
      *(int *)&v1[84],
      *(int *)&v1[88],
      *(int *)&v1[92],
      *(int *)&v1[96],
      *(int *)&v1[100],
      *(int *)&v1[104],
      v2);
    dword_AC4CCC = 0; /*0x637a52*/
    dword_AC4C38 = 0; /*0x637a58*/
    dword_AC4BF0 = 0; /*0x637a5e*/
    byte_AC4CF4 = 0; /*0x637a64*/
    result = PlayVocClass(dword_8871E0->EnterBioReactorSound, 0x2000, 1.0, 0); /*0x637a7b*/
    if ( dword_AC4B80 ) /*0x637a88*/
      return (**(int (***)(int, int, unsigned int))dword_AC4B80)(dword_AC4B80, 4552, 0); /*0x637a92*/
  }
  return result; /*0x637a94*/
}
} // namespace gamemd
