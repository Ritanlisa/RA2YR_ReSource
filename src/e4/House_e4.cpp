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
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BufferIOFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RadioClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Checksummer_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FileTree_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LoadingScreen_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CommandClass_e4.hpp"  // G42.36 C2027 supply

// 0x47D2B0
namespace gamemd {
int House::AnnounceUpgrade(int aP1)
{
  int result; // eax
  __int16 *v4; // edi
  _BYTE *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // dx
  __int16 v16; // dx
  int v18; // ecx
  int v19; // ebp
  bool MapFileData; // al
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // cx
  int v27; // ecx
  __int16 v28; // ax
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  TubeClass *v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  _DWORD *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  AnimClass *v40; // eax
  void **v41; // eax
  void *v42; // ecx
  _WORD *inited; // ebx
  _DWORD *v44; // eax
  int v45; // eax
  __int16 v46; // dx
  __int16 v47; // cx
  __int16 v48; // dx
  __int16 v49; // dx
  __int16 v50; // dx
  __int16 v51; // dx
  int v52; // eax
  _BYTE *v53; // eax
  int v54; // [esp-8h] [ebp-50h]
  __int16 v55[2]; // [esp+10h] [ebp-38h] BYREF
  int v57; // [esp+18h] [ebp-30h]
  int v58; // [esp+1Ch] [ebp-2Ch] BYREF
  char v59[4]; // [esp+20h] [ebp-28h] BYREF
  int v60[5]; // [esp+24h] [ebp-24h] BYREF
  int v61; // [esp+38h] [ebp-10h]
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (int *)this == &g_MissionQueueFrame.briefing[130] ) /*0x47d2bf*/
    return result; /*0x47d2bf*/
  v4 = (__int16 *)(&this->u32_C6); /*0x47d2c5*/
  v5 = (_BYTE *)(*(_DWORD *)&stru_87F5F0.__pad_58[520] /*0x47d2da*/
               + 4 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(&this->u32_C6)));
  v57 = (int)v5; /*0x47d2e2*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[528] /*0x47d2f3*/
     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(&this->u32_C6));
  v7 = this->ptr_44; /*0x47d2f6*/
  v6 = v6; /*0x47d2fc*/
  if ( v7 != -1 ) /*0x47d300*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7); /*0x47d30c*/
    v9 = *(_DWORD *)(v8 + 664); /*0x47d30f*/
    this->u32_EC = v9; /*0x47d318*/
    if ( v9 == 4 || v9 == 9 || *(_BYTE *)(v8 + 684) ) /*0x47d325*/
    {
      v10 = this->q038; /*0x47d333*/
      if ( v10 != 0xFFFF && v10 < *(int *)&stru_A8EB00.?[340] ) /*0x47d343*/
        this->u8_11C = HouseClass::GetCameoTypeIndex( /*0x47d35e*/
                                   *(HouseClass **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v10),
                                   *(unsigned __int8 *)(&this->u32_702));
      if ( this->u8_11C && *(_BYTE *)(v8 + 681) ) /*0x47d36e*/
      {
        this->ptr_44 = -1; /*0x47d378*/
        this->u32_11E = 0; /*0x47d37f*/
      }
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d38b*/
      {
        v11 = this->u16_26; /*0x47d39c*/
        IDA_LOWORD(aP1) = *v4; /*0x47d3a0*/
        IDA_HIWORD(aP1) = v11 - 1; /*0x47d3ab*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d3d6*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283) )
          goto LABEL_19; /*0x47d3d6*/
        v12 = *v4 - 1; /*0x47d3e3*/
        IDA_HIWORD(aP1) = this->u16_26; /*0x47d3e5*/
        IDA_LOWORD(aP1) = v12; /*0x47d3ea*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d419*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283) )
          goto LABEL_19; /*0x47d419*/
        v13 = this->u16_26 + 2; /*0x47d42a*/
        IDA_LOWORD(aP1) = *v4 + 2; /*0x47d42e*/
        IDA_HIWORD(aP1) = v13; /*0x47d437*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d462*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283) )
          goto LABEL_19; /*0x47d462*/
        v14 = this->u16_26 + 1; /*0x47d471*/
        IDA_LOWORD(aP1) = *v4 + 1; /*0x47d473*/
        IDA_HIWORD(aP1) = v14; /*0x47d47c*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d52d*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283)
          || (v15 = this->u16_26 + 1,
              IDA_LOWORD(aP1) = *v4 - 1,
              IDA_HIWORD(aP1) = v15,
              this->aP1 + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&aP1)
                                           + 283))
          || (v16 = this->u16_26 - 1,
              IDA_LOWORD(aP1) = *v4 + 1,
              IDA_HIWORD(aP1) = v16,
              this->aP1 + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&aP1)
                                           + 283)) )
        {
  LABEL_19:
          if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47d53c*/
            this->u32_EC = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType(); /*0x47d54a*/
      BuildingClass::DetermineVisualState(); /*0x47d551*/
      v6 = v6; /*0x47d55c*/
      v5[1] = this->aP1; /*0x47d560*/
      IDA_LOBYTE(result) = this->aP1; /*0x47d563*/
      *(_BYTE *)(v6 + 8) = result; /*0x47d569*/
      *v5 = this->u32_4C; /*0x47d571*/
      return result; /*0x47d578*/
    }
  }
  if ( this->q038 >= *(int *)&stru_A8EB00.?[340] ) /*0x47d58b*/
    this->q038 = 0xFFFF; /*0x47d58d*/
  v18 = this->q038; /*0x47d590*/
  if ( v18 != 0xFFFF ) /*0x47d595*/
  {
    v19 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v18); /*0x47d5ab*/
    v54 = *(unsigned __int8 *)(&this->u32_702); /*0x47d5ae*/
    *(_DWORD *)v55 = v19; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((House *)v19, v54, 0); /*0x47d5b5*/
    if ( this->u8_11C ) /*0x47d5ba*/
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
  LABEL_40:
        this->u8_11C = HouseClass::GetCameoTypeIndex((HouseClass *)v19, *(unsigned __int8 *)(&this->u32_702)); /*0x47d7fb*/
        CellClass::DetermineTileType(); /*0x47d813*/
        v27 = this->ptr_44; /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType(v27) != -1 ) /*0x47d828*/
        {
          if ( this->u8_11C <= 4u ) /*0x47d831*/
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * this->ptr_44) + 664) ) /*0x47d864*/
              this->u32_EC = 5; /*0x47d86e*/
          }
          else
          {
            this->u32_EC = House::LookupObject((House *)v19, *(unsigned __int8 *)(&this->u32_702)); /*0x47d843*/
            this->ptr_44 = -1; /*0x47d849*/
            this->u32_11E = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * this->ptr_44) + 684) ) /*0x47d885*/
  LABEL_47:
          this->u32_EC = House::LookupObject((House *)v19, *(unsigned __int8 *)(&this->u32_702)); /*0x47d8aa*/
  LABEL_48:
        if ( this->u32_EC == 10 ) /*0x47d8b7*/
        {
          v28 = this->u32_116; /*0x47d8bd*/
          if ( v28 < 0 || v28 >= FootClass_Array.primaryFacing[0] ) /*0x47d8d2*/
          {
            if ( (v29 = this->q038, v30 = dword_AA1054, v29 >= dword_AA1054) && v29 <= dword_AA1054 + 3 /*0x47d919*/
              || (v30 = dword_ABB108, v29 >= dword_ABB108) && v29 <= dword_ABB108 + 3
              || (v30 = dword_AA10B4, v29 >= dword_AA10B4) && v29 <= dword_AA10B4 + 3
              || (v30 = dword_ABAD2C, v29 >= dword_ABAD2C) && v29 <= dword_ABAD2C + 3 )
            {
              v31 = v29 - v30; /*0x47d91d*/
              if ( v29 - v30 != -1 ) /*0x47d922*/
              {
                v32 = (TubeClass *)RA2_OPNEW(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                  TubeClass::Construct(v32, (__int16 *)(&this->u32_C6), dword_81CC20[v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( aP1 != -1 ) /*0x47d94c*/
          this->aP1 = aP1; /*0x47d94e*/
        TechnoClass::GetTileAnimationData((TechnoClass *)v19, *(unsigned __int8 *)(&this->u32_702), v59, &v58); /*0x47d969*/
        v33 = this->q140; /*0x47d988*/
        this->u32_11D = (v58 - 30) / 15; /*0x47d993*/
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(_DWORD *)(v19 + 712) != -1
          && *(_DWORD *)(v19 + 724) == *(unsigned __int8 *)(&this->u32_702) )
        {
          v34 = *v4; /*0x47d9d0*/
          v35 = *(__int16 *)(&this->u32_C8); /*0x47d9d3*/
          v61 = dword_89E7C0 * this->aP1; /*0x47d9e1*/
          v36 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v62, (int *)(v55->u32_2CC); /*0x47da03*/
          v37 = v36[1]; /*0x47da0a*/
          v38 = (v34 << 8) + 128 + *v36; /*0x47da10*/
          v39 = v61 + v36[2]; /*0x47da18*/
          v60[0] = v38; /*0x47da1f*/
          v60[1] = (v35 << 8) + 128 + v37; /*0x47da23*/
          v60[2] = v39; /*0x47da27*/
          v40 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x47da2b*/
          if ( v40 ) /*0x47da35*/
            v41 = AnimClass::ctor( /*0x47da5f*/
                    v40,
                    *(void **)(FootClass_Array.primaryFacing[3] + 4 * *(_DWORD *)(v55->u32_2C8),
                    v60,
                    0,
                    -1,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v19 = *(_DWORD *)v55; /*0x47da6c*/
          v42 = *(void **)(v55->u32_2D8; /*0x47da6e*/
          *((_BYTE *)v41 + 406) = 1; /*0x47da74*/
          v41[64] = v42; /*0x47da7b*/
          *((_BYTE *)v41 + 407) = 1; /*0x47da81*/
          this->q140 |= 0x20000u; /*0x47da88*/
        }
        if ( *(_BYTE *)(v19 + 737) ) /*0x47da92*/
        {
          inited = (_WORD *)InitCoordinateOffsetsMap(v19); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*inited != 0x7FFF || inited[1] != 0x7FFF) && *(_DWORD *)inited != dword_89E748 ) /*0x47dacf*/
            {
              IDA_LOWORD(aP1) = *v4 + *inited; /*0x47dae6*/
              IDA_HIWORD(aP1) = inited[1] + this->u16_26; /*0x47daf3*/
              *(_DWORD *)v55 = aP1; /*0x47dafc*/
              v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x47db05*/
              inited += 2; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      MapFileData = House::LoadMapFileData((House *)v19, *(unsigned __int8 *)(&this->u32_702), 1); /*0x47d5d9*/
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
      this->q038 = 0xFFFF; /*0x47d5e6*/
      this->u32_11A = 0; /*0x47d5e9*/
      this->u32_EC = 0; /*0x47d5ef*/
      this->u8_11C = 0; /*0x47d5f9*/
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d605*/
      {
        v21 = this->u16_26 - 1; /*0x47d61a*/
        IDA_LOWORD(aP1) = *v4; /*0x47d61c*/
        IDA_HIWORD(aP1) = v21; /*0x47d621*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d650*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283) )
          goto LABEL_98; /*0x47d650*/
        v22 = *v4 - 1; /*0x47d65d*/
        IDA_HIWORD(aP1) = this->u16_26; /*0x47d65f*/
        IDA_LOWORD(aP1) = v22; /*0x47d664*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d693*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283) )
          goto LABEL_98; /*0x47d693*/
        v23 = this->u16_26; /*0x47d69c*/
        IDA_LOWORD(aP1) = *v4 + 2; /*0x47d6a8*/
        IDA_HIWORD(aP1) = v23 + 2; /*0x47d6ad*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d6dc*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283) )
          goto LABEL_98; /*0x47d6dc*/
        v24 = this->u16_26 + 1; /*0x47d6eb*/
        IDA_LOWORD(aP1) = *v4 + 1; /*0x47d6ed*/
        IDA_HIWORD(aP1) = v24; /*0x47d6f2*/
        if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47d7a7*/
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (__int16 *)&aP1)
                                          + 283)
          || (v25 = this->u16_26 + 1,
              IDA_LOWORD(aP1) = *v4 - 1,
              IDA_HIWORD(aP1) = v25,
              this->aP1 + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&aP1)
                                           + 283))
          || (v26 = this->u16_26 - 1,
              IDA_LOWORD(aP1) = *v4 + 1,
              IDA_HIWORD(aP1) = v26,
              this->aP1 + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (__int16 *)&aP1)
                                           + 283)) )
        {
  LABEL_98:
          if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 && !this->u32_EC ) /*0x47d7b7*/
            this->u32_EC = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState(); /*0x47d7cd*/
      result = v57; /*0x47d7d2*/
      v57->u32_1 = this->aP1; /*0x47d7dd*/
      *(_BYTE *)(v6 + 8) = this->aP1; /*0x47d7ea*/
      *(_BYTE *)result = this->u32_4C; /*0x47d7f2*/
      return result; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v7 == -1 || (v45 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7), *(_BYTE *)(v45 + 684)) ) /*0x47db30*/
    this->u32_EC = 0; /*0x47db48*/
  else
    this->u32_EC = *(_DWORD *)(v45 + 664); /*0x47db40*/
  this->u8_11C = 0; /*0x47db52*/
  LABEL_82:
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47db5e*/
  {
    v46 = this->u16_26; /*0x47db6f*/
    IDA_LOWORD(aP1) = *v4; /*0x47db73*/
    IDA_HIWORD(aP1) = v46 - 1; /*0x47db7e*/
    if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dba9*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&aP1)
                                      + 283) )
      goto LABEL_89; /*0x47dba9*/
    v47 = *v4 - 1; /*0x47dbb6*/
    IDA_HIWORD(aP1) = this->u16_26; /*0x47dbb8*/
    IDA_LOWORD(aP1) = v47; /*0x47dbbd*/
    if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dbec*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&aP1)
                                      + 283) )
      goto LABEL_89; /*0x47dbec*/
    v48 = this->u16_26 + 2; /*0x47dbfd*/
    IDA_LOWORD(aP1) = *v4 + 2; /*0x47dc01*/
    IDA_HIWORD(aP1) = v48; /*0x47dc0a*/
    if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dc35*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&aP1)
                                      + 283) )
      goto LABEL_89; /*0x47dc35*/
    v49 = this->u16_26 + 1; /*0x47dc44*/
    IDA_LOWORD(aP1) = *v4 + 1; /*0x47dc46*/
    IDA_HIWORD(aP1) = v49; /*0x47dc4f*/
    if ( this->aP1 + 4 <= *((char *)CellCoord::To_CellObj( /*0x47dd00*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&aP1)
                                      + 283)
      || (v50 = this->u16_26 + 1,
          IDA_LOWORD(aP1) = *v4 - 1,
          IDA_HIWORD(aP1) = v50,
          this->aP1 + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&aP1)
                                       + 283))
      || (v51 = this->u16_26 - 1,
          IDA_LOWORD(aP1) = *v4 + 1,
          IDA_HIWORD(aP1) = v51,
          this->aP1 + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&aP1)
                                       + 283)) )
    {
  LABEL_89:
      if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47dd0f*/
      {
        v52 = this->u32_EC; /*0x47dd11*/
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
          this->u32_EC = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState(); /*0x47dd36*/
  v53 = (_BYTE *)v57; /*0x47dd3b*/
  v57->u32_1 = this->aP1; /*0x47dd45*/
  *v53 = this->u32_4C; /*0x47dd4b*/
  result = v6; /*0x47dd4d*/
  *(_BYTE *)(v6 + 8) = this->aP1; /*0x47dd57*/
  return result; /*0x47d56f*/
}
}
// 0x47FB90
namespace gamemd {
unsigned int * House::GetStartCoords(unsigned int *aP1)
{
  int v3; // ecx
  _BYTE *v4; // ebp
  int BuildingByTiberiumType; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // ecx
  House *v9; // eax
  BuildingClass *v10; // ecx
  int v11; // kr08_4
  int v12; // kr00_4
  _DWORD *v13; // eax
  int v14; // esi
  int v16; // edi
  int v17; // esi
  _DWORD *FoundationSize; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // eax
  House *v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int v24; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = *(_DWORD *)&this->__pad_2D[23]; /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  v24 = (unsigned __int8)this->__pad_7C[162]; /*0x47fbb5*/
  v4 = *(_BYTE **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v3); /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = *(_DWORD **)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * BuildingByTiberiumType); /*0x47fbe2*/
    if ( this->__pad_7C[160] ) /*0x47fbe5*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x47fc36*/
                     + 4
                     * (v6[58]
                      + *(_DWORD *)(v6[56] + 660)
                      + v6[59] / 4 * ((unsigned __int8)this->__pad_7C[160] - 1)
                      + *(__int16 *)&this->__pad_C[24] * *(__int16 *)&this->__pad_C[26] % (v6[59] / 4)));
      v23 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x47fc6f*/
                   + 4
                   * (*(_DWORD *)(v6[56] + 660)
                    + *(__int16 *)&this->__pad_C[24] * *(__int16 *)&this->__pad_C[26] % v6[58]));
    v9 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (House *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47fca7*/
  LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  v10 = *(BuildingClass **)&this->__pad_2D[19]; /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (int *)&v23, &v24); /*0x47fc9b*/
  LABEL_12:
  v11 = (*(__int16 *)&this->__pad_C[24] << 8) + 128; /*0x47fcb1*/
  v12 = (*(__int16 *)&this->__pad_C[26] << 8) + 128; /*0x47fce0*/
  v27[2] = 0; /*0x47fce2*/
  v27[0] = (v11 / 256) << 8; /*0x47fd02*/
  v27[1] = (v12 / 256) << 8; /*0x47fd06*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v27, &v25); /*0x47fd0a*/
  v13 = BuildingClass::CalcDrawPos((BuildingClass *)this, v27); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  v14 = v13[1] + v26; /*0x47fd31*/
  v25 -= 30; /*0x47fd33*/
  v26 = v14; /*0x47fd3d*/
  if ( !v23 ) /*0x47fd41*/
  {
  LABEL_13:
    *aP1 = 0; /*0x47fd43*/
    aP1[1] = 0; /*0x47fd53*/
    aP1[2] = 0; /*0x47fd56*/
    aP1[3] = 0; /*0x47fd59*/
    return aP1; /*0x47fd63*/
  }
  House::Constructor(v23); /*0x47fd66*/
  if ( v4[682] ) /*0x47fd6b*/
    v24 = 0; /*0x47fd75*/
  v16 = v25 - *(__int16 *)v23->House_field_0x2 / 2; /*0x47fd93*/
  v17 = v26 - *(__int16 *)&v23->House_field_0x2[2] / 2; /*0x47fd9f*/
  FoundationSize = Building::GetFoundationSize(v27, v24); /*0x47fda7*/
  v19 = v16 + *FoundationSize; /*0x47fdb1*/
  v20 = v17 + FoundationSize[1]; /*0x47fdb7*/
  v21 = FoundationSize[2]; /*0x47fdb9*/
  v22 = FoundationSize[3]; /*0x47fdbc*/
  *aP1 = v19; /*0x47fdc1*/
  aP1[1] = v20; /*0x47fdc3*/
  aP1[2] = v21; /*0x47fdc6*/
  aP1[3] = v22; /*0x47fdc9*/
  return aP1; /*0x47fd5c*/
}
}
// 0x4FD500
namespace gamemd {
int House::UpdateHouseAI()
{
  double v1; // st7
  int v3; // ebp
  int v4; // edx
  int v5; // eax
  int v6; // eax
  void *v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  void *v17; // eax
  int *v18; // edx
  int v19; // eax
  int v20; // kr00_4
  int v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // eax
  int v27; // edi
  int House_field_0x78; // esi
  int v29; // ecx
  int *v30; // edx
  int v31; // eax
  int v32; // eax
  int i; // ebp
  int j; // edi
  double v36; // [esp+8h] [ebp-48h]
  int v37; // [esp+8h] [ebp-48h]
  __int16 v38[2]; // [esp+20h] [ebp-30h] BYREF
  __int16 v39[2]; // [esp+24h] [ebp-2Ch] BYREF
  int v40; // [esp+28h] [ebp-28h]
  int v41; // [esp+2Ch] [ebp-24h]
  int v44; // [esp+38h] [ebp-18h] BYREF
  int v45; // [esp+3Ch] [ebp-14h]
  int v46; // [esp+40h] [ebp-10h]
  _BYTE v47[12]; // [esp+44h] [ebp-Ch] BYREF

  v3 = 0; /*0x4fd50d*/
  v4 = this->u32_5640; /*0x4fd50f*/
  v5 = this->u32_5648; /*0x4fd515*/
  if ( v4 == -1 ) /*0x4fd520*/
  {
  LABEL_4:
    if ( v5 ) /*0x4fd532*/
      goto LABEL_30; /*0x4fd532*/
    goto LABEL_5; /*0x4fd532*/
  }
  if ( (int)dword_A8ED84 - v4 < v5 ) /*0x4fd52c*/
  {
    v5 -= (int)dword_A8ED84 - v4; /*0x4fd52e*/
    goto LABEL_4; /*0x4fd52e*/
  }
  LABEL_5:
  if ( this->u32_5600 == -1 && *(_DWORD *)&dword_A8B238 && !*(_BYTE *)(*(_DWORD *)&this->__pad_2D[7] + 422) )
  {
    v6 = (unsigned __int8)CellStruct::Equals((CellStruct *)((char *)this + 21652), &dword_A8EF98)
       ? this->u32_5490
       : this->u32_5494;
    *(_DWORD *)v38 = v6; /*0x4fd58b*/
    if ( !(unsigned __int8)CellStruct::Equals((CellStruct *)v38, &dword_A8EF98) )
    {
      v7 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v38); /*0x4fd5a6*/
      v8 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v7 + 72))(v7, &v44); /*0x4fd5b4*/
      v41 = *v8; /*0x4fd5c3*/
      v9 = v8[1]; /*0x4fd5c7*/
      v9 = v9; /*0x4fd5ca*/
      v10 = v8[2]; /*0x4fd5ce*/
      v10 = v10; /*0x4fd5d1*/
      if ( v41 != dword_A8EFF8 || v9 != dword_A8EFFC || v10 != dword_A8F000 )
      {
        v11 = 0x7FFFFFFF; /*0x4fd5f0*/
        *(_DWORD *)v38 = 0; /*0x4fd5f7*/
        if ( dword_A80238 > 0 )
        {
          do
          {
            v12 = *(&dword_A8022C->vfptr + *(_DWORD *)v38); /*0x4fd60b*/
            if ()
            {
              v10 = v12->relatedTagsCapacity; /*0x4fd616*/
              if ( !*(_BYTE *)(v10 + 422) && !v12->defeated )
              {
                v13 = (unsigned __int8)CellStruct::Equals((CellStruct *)((char *)this + 21652), &dword_A8EF98)
                    ? this->u32_5490
                    : this->u32_5494;
                *(_DWORD *)v39 = v13; /*0x4fd660*/
                if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v39, &dword_A8EF98) ) /*0x4fd664*/
                {
                  v14 = dword_A8EFF8; /*0x4fd66d*/
                  v15 = dword_A8EFFC; /*0x4fd672*/
                  v16 = dword_A8F000; /*0x4fd678*/
                }
                else
                {
                  v17 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v39); /*0x4fd68a*/
                  v18 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v17 + 72))(v17, v47); /*0x4fd69b*/
                  v14 = *v18; /*0x4fd69d*/
                  v15 = v18[1]; /*0x4fd69f*/
                  v16 = v18[2]; /*0x4fd6a2*/
                }
                v44 = v14 - v41; /*0x4fd6ac*/
                v45 = v15 - v9; /*0x4fd6b6*/
                __asm { fild [esp+48h+var_14] } /*0x4fd6be*/
                v46 = v16 - v10; /*0x4fd6c4*/
                __asm /*0x4fd6c8*/
                {
                  fild [esp+48h+var_10]
                  fild [esp+48h+var_18]
                  fld st
                  fmul st, st(1)
                  fld st(2)
                  fmul st, st(3)
                  faddp st(1), st
                  fld st(3)
                  fmul st, st(4)
                  faddp st(1), st
                  fstp [esp+48h+var_48]; double
                  fstp st
                  fstp st
                  fstp st
                }
                Math::Sqrt(v36); /*0x4fd6e9*/
                v20 = Math::RoundToInt(v1); /*0x4fd6f1*/
                IDA_LOWORD(v10) = IDA_HIWORD(v20); /*0x4fd6f1*/
                IDA_LOWORD(v19) = v20; /*0x4fd6f1*/
                if ( v19 < v11 ) /*0x4fd6f8*/
                {
                  v3 = v12; /*0x4fd6fa*/
                  v11 = v19; /*0x4fd6fc*/
                }
              }
            }
            ++*(_DWORD *)v38; /*0x4fd70b*/
          }
          while ( *(int *)v38 < dword_A80238 );
          if ( v3 ) /*0x4fd717*/
            UpdateHouseClassAnger(v10, 1, v3); /*0x4fd71e*/
        }
      }
    }
  }
  LABEL_30:
  v21 = this->u32_5600; /*0x4fd723*/
  if ( v21 != -1 ) /*0x4fd72c*/
  {
    v22 = *(&dword_A8022C->vfptr + v21); /*0x4fd734*/
    if ( v22->defeated ) /*0x4fd737*/
    {
      v23 = this->u32_5614; /*0x4fd741*/
      v24 = 0; /*0x4fd747*/
      if ( v23 > 0 ) /*0x4fd74b*/
      {
        v25 = (_DWORD *)this->u32_5608; /*0x4fd753*/
        while ( *v25 != v22 ) /*0x4fd757*/
        {
          ++v24; /*0x4fd759*/
          v25 += 2; /*0x4fd75a*/
          if ( v24 >= v23 ) /*0x4fd75f*/
            goto LABEL_38; /*0x4fd75f*/
        }
        v37 = -*(_DWORD *)(this->u32_5608 + 8 * v24 + 4); /*0x4fd76a*/
        UpdateHouseClassAnger(v37, v37, v22); /*0x4fd76d*/
      }
  LABEL_38:
      this->u32_5600 = -1; /*0x4fd772*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 || *(_DWORD *)&this->__pad_1F0[92] >= *(_DWORD *)&dword_8871E0->__pad_13BC[124] ) /*0x4fd797*/
    HouseClass::UpdateAITryFireSW(); /*0x4fd79b*/
  v26 = *(_DWORD *)&this->__pad_1F0[96]; /*0x4fd7a0*/
  if ( v26 == 4 ) /*0x4fd7ae*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)&this->__pad_C[24] + 52))(&this->__pad_C[24]); /*0x4fd7b7*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)&this->__pad_C[24] + 56))(&this->__pad_C[24]); /*0x4fd7bd*/
  }
  else
  {
    if ( !v26 && (*(int (__stdcall **)(char *))(*(_DWORD *)&this->__pad_C[24] + 24))(&this->__pad_C[24]) < 25 ) /*0x4fd7d8*/
      *(_DWORD *)&this->__pad_1F0[96] = 1; /*0x4fd7da*/
    if ( *(_DWORD *)&this->__pad_1F0[96] == 1 /*0x4fd7fa*/
      && (*(int (__stdcall **)(char *))(*(_DWORD *)&this->__pad_C[24] + 24))(&this->__pad_C[24]) >= 25 )
    {
      *(_DWORD *)&this->__pad_1F0[96] = 0; /*0x4fd7fc*/
    }
    if ( *(_DWORD *)&this->__pad_1F0[96] != 3 ) /*0x4fd808*/
      goto LABEL_54; /*0x4fd808*/
    if ( this->u32_54D8 + 900 < (int)dword_A8ED84 ) /*0x4fd81d*/
      *(_DWORD *)&this->__pad_1F0[96] = 0; /*0x4fd81f*/
    if ( *(_DWORD *)&this->__pad_1F0[96] != 3 ) /*0x4fd82b*/
    {
  LABEL_54:
      if ( this->u32_54D8 + 900 > (int)dword_A8ED84 ) /*0x4fd840*/
        *(_DWORD *)&this->__pad_1F0[96] = 3; /*0x4fd842*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 ) /*0x4fd851*/
  {
    v27 = 0; /*0x4fd857*/
    while ( 1 ) /*0x4fd85b*/
    {
      *(_DWORD *)&v39[2 * v27] = 0; /*0x4fd85b*/
      if ( v27 ) /*0x4fd861*/
      {
        if ( v27 == 1 ) /*0x4fd864*/
          v40 = ValidateAIBuildAffordability((TechnoClass *)this); /*0x4fd873*/
        else
          *(_DWORD *)&v39[2 * v27] = 0; /*0x4fd866*/
        goto LABEL_73; /*0x4fd86a*/
      }
      if ( *(_DWORD *)&this->__pad_1F0[96] == 3 ) /*0x4fd87f*/
        goto LABEL_71; /*0x4fd87f*/
      House_field_0x78 = this->House_field_0x78; /*0x4fd881*/
      v29 = 0; /*0x4fd884*/
      if ( House_field_0x78 > 0 ) /*0x4fd888*/
        break; /*0x4fd888*/
  LABEL_70:
      v32 = 4; /*0x4fd8bc*/
  LABEL_72:
      *(_DWORD *)v39 = v32; /*0x4fd8c5*/
  LABEL_73:
      if ( ++v27 >= 2 ) /*0x4fd8cf*/
      {
        for ( i = 4; i >= 1; --i ) /*0x4fd8d1*/
        {
          for ( j = 0; j < 2; ++j ) /*0x4fd8d6*/
          {
            if ( *(_DWORD *)&v39[2 * j] == i ) /*0x4fd8dc*/
            {
              if ( j ) /*0x4fd8e3*/
              {
                if ( j == 1 ) /*0x4fd8e6*/
                  HouseClass::ManageProduction(i); /*0x4fd8eb*/
              }
              else if ( i == 4 ) /*0x4fd8f5*/
              {
                (*(void (__stdcall **)(char *))(*(_DWORD *)&this->__pad_C[24] + 52))(&this->__pad_C[24]); /*0x4fd8fe*/
                (*(void (__stdcall **)(char *))(*(_DWORD *)&this->__pad_C[24] + 56))(&this->__pad_C[24]); /*0x4fd904*/
              }
            }
          }
        }
        return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 7) + 105; /*0x4fd911*/
      }
    }
    v30 = *(int **)&this->__pad_2D[63]; /*0x4fd88a*/
    while ( 1 ) /*0x4fd88d*/
    {
      v31 = *v30; /*0x4fd88d*/
      if ( *v30 ) /*0x4fd88d*/
      {
        if ( *(_BYTE *)(v31 + 144) && !*(_BYTE *)(v31 + 129) && *(_DWORD *)(*(_DWORD *)(v31 + 1312) + 3768) ) /*0x4fd8ab*/
          break; /*0x4fd8ab*/
      }
      ++v29; /*0x4fd8b4*/
      ++v30; /*0x4fd8b5*/
      if ( v29 >= House_field_0x78 ) /*0x4fd8ba*/
        goto LABEL_70; /*0x4fd8ba*/
    }
  LABEL_71:
    v32 = 0; /*0x4fd8c3*/
    goto LABEL_72; /*0x4fd8c3*/
  }
  return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 7) + 105; /*0x4fd927*/
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
        v2 = *((_DWORD *)dword_A8ECBC + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 44))(*((_DWORD *)dword_A8ECBC + v1)) == 6
          && !*(_BYTE *)(v2 + 1050)
          && *(int *)(*(_DWORD *)(v2 + 1312) + 3808) > 0
          && ((1 << *(_DWORD *)(*((_DWORD *)dword_A83D4C + 13) + 184)) & *(_DWORD *)(v2 + 528)) != 0 )
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
// 0x50B6F0
namespace gamemd {
int House::IsHumanPlayer()
{
  if ( *(_DWORD *)&dword_A8B238 ) /*0x50b6f7*/
    return this == (House *)dword_A83D4C; /*0x50b720*/
  return IDA_LOBYTE(this->House_field_0x1EC) || IDA_BYTE1(this->House_field_0x1EC); /*0x50b70f*/
}
}
// 0x50B730
namespace gamemd {
int House::IsCurrentPlayer()
{
  int result; // eax

  result = *(_DWORD *)&dword_A8B238; /*0x50b730*/
  IDA_LOBYTE(result) = this->House_field_0x1EC; /*0x50b737*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50b73d*/
    IDA_LOBYTE(result) = (_BYTE)result || IDA_BYTE1(this->House_field_0x1EC); /*0x50b750*/
  return result; /*0x50b74f*/
}
}
// 0x50DB00
namespace gamemd {
AbstractClass * * House::ChooseHouseEnemy(BuildingClass * aP1)
{
  double v2; // st7
  int v3; // edx
  int v4; // ebx
  int v6; // edi
  int v7; // ebp
  int *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // ecx
  int *v13; // eax
  int result; // eax
  CellClass *v15; // eax
  int smudgeTypeIndex_low; // esi
  int smudgeTypeIndex_high; // edi
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v22; // eax
  int v23; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // eax
  double v32; // [esp+4h] [ebp-40h]
  double v33; // [esp+4h] [ebp-40h]
  double v34; // [esp+4h] [ebp-40h]
  double v35; // [esp+4h] [ebp-40h]
  int v37; // [esp+20h] [ebp-24h] BYREF
  int v38; // [esp+24h] [ebp-20h]
  _DWORD v39[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]
  int v43; // [esp+48h] [ebp+4h]

  v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db03*/
  v4 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50db0a*/
  v6 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50db19*/
  v40 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50db25*/
  v41 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50db29*/
  v42 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db2d*/
  v7 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db31*/
  if ( aP1 && aP1->q3D3 && aP1->Type->BuildingTypeClass_field_ED8 == 7 ) /*0x50db4c*/
  {
    v8 = (int *)(*(int (__stdcall **)(_DWORD *))(aP1->q048)(v39); /*0x50db58*/
    v9 = *v8; /*0x50db5a*/
    v40 = *v8; /*0x50db5c*/
    v41 = v8[1]; /*0x50db63*/
    v42 = v8[2]; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !*(_DWORD *)&this->__pad_2B0[64] || (v10 = 0, v43 = 0, (int)this->House_field_0x78 <= 0) ) /*0x50db8c*/
  {
  LABEL_23:
    v9 = v6; /*0x50dc5c*/
    v41 = v4; /*0x50dc5e*/
    v40 = v6; /*0x50dc62*/
    v42 = v7; /*0x50dc66*/
    goto LABEL_24; /*0x50dc66*/
  }
  while ( 1 ) /*0x50dba1*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&this->__pad_2D[63] + 4 * v10); /*0x50dba1*/
    if ( !v11 || *(_BYTE *)(v11 + 129) ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(_BYTE *)(*(_DWORD *)(v11 + 1312) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v6 == *(_DWORD *)&stru_A8EB00.?[1044] && v4 == *(_DWORD *)&stru_A8EB00.?[1048] && v7 == v3 ) /*0x50dc06*/
    {
      v13 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v11 + 72))(v11, &v37); /*0x50dc11*/
      v6 = *v13; /*0x50dc14*/
      v4 = v13[1]; /*0x50dc16*/
      v7 = v13[2]; /*0x50dc19*/
    }
  LABEL_18:
    v10 = v43 + 1; /*0x50dc1c*/
    v43 = v10; /*0x50dc28*/
    if ( v10 >= (int)this->House_field_0x78 ) /*0x50dc2e*/
    {
      v9 = v40; /*0x50dc34*/
      goto LABEL_20; /*0x50dc38*/
    }
    v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db98*/
  }
  v12 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v39); /*0x50dbce*/
  v9 = *v12; /*0x50dbd0*/
  v40 = *v12; /*0x50dbd2*/
  v41 = v12[1]; /*0x50dbd9*/
  v42 = v12[2]; /*0x50dbe0*/
  if ( !*(_BYTE *)(v11 + 979) ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  LABEL_20:
  if ( v9 == *(_DWORD *)&stru_A8EB00.?[1044] ) /*0x50dc40*/
  {
    v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50dc4e*/
    if ( v41 == *(_DWORD *)&stru_A8EB00.?[1048] && v42 == *(_DWORD *)&stru_A8EB00.?[1052] ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
  LABEL_24:
    if ( v9 == *(_DWORD *)&stru_A8EB00.?[1044] && v41 == *(_DWORD *)&stru_A8EB00.?[1048] && v42 == v3 ) /*0x50dc84*/
    {
      result = *(_DWORD *)&this->ptr_44.__pad_C[12]; /*0x50dc86*/
      if ( result >= 0 ) /*0x50dc8e*/
      {
        if ( result > 3 ) /*0x50dc97*/
          return 0; /*0x50dca0*/
        return result; /*0x50dca6*/
      }
      return 0; /*0x50dede*/
    }
  }
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v40); /*0x50dcb9*/
  smudgeTypeIndex_low = SLOWORD(v15->smudgeTypeIndex); /*0x50dcbe*/
  smudgeTypeIndex_high = IDA_SHIWORD(v15->smudgeTypeIndex); /*0x50dcc2*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dcd9*/
  v38 = 1; /*0x50dce3*/
  v18 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50dceb*/
  v19 = v18[1]; /*0x50dcfd*/
  v37 = smudgeTypeIndex_low - *v18; /*0x50dd00*/
  v38 = smudgeTypeIndex_high - v19; /*0x50dd06*/
  __asm /*0x50dd0a*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v32); /*0x50dd23*/
  IDA_LOWORD(v20) = Math::RoundToInt(v2); /*0x50dd2b*/
  v20 = v20; /*0x50dd3c*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x50dd3e*/
  v38 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50dd51*/
  v22 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50dd55*/
  v23 = v22[1]; /*0x50dd61*/
  v37 = smudgeTypeIndex_low - *v22; /*0x50dd6c*/
  v38 = smudgeTypeIndex_high - v23; /*0x50dd70*/
  __asm /*0x50dd74*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v33); /*0x50dd8d*/
  IDA_LOWORD(v24) = Math::RoundToInt(v2); /*0x50dd95*/
  v24 = v24; /*0x50dd9a*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dda6*/
  v38 = 2 * *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50ddc2*/
  v26 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50ddc6*/
  v27 = v26[1]; /*0x50ddd2*/
  v37 = smudgeTypeIndex_low - *v26; /*0x50dddd*/
  v38 = smudgeTypeIndex_high - v27; /*0x50dde1*/
  __asm /*0x50dde5*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x50ddfe*/
  IDA_LOWORD(v28) = Math::RoundToInt(v2); /*0x50de06*/
  v28 = v28; /*0x50de11*/
  v38 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50de1d*/
  v37 = 0; /*0x50de28*/
  v29 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50de30*/
  v30 = v29[1]; /*0x50de3e*/
  v37 = smudgeTypeIndex_low - *v29; /*0x50de41*/
  v38 = smudgeTypeIndex_high - v30; /*0x50de47*/
  __asm /*0x50de4b*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v35); /*0x50de64*/
  IDA_LOWORD(v31) = Math::RoundToInt(v2); /*0x50de6c*/
  if ( v20 > v24 || v20 > v28 || v20 > v31 ) /*0x50de7f*/
  {
    if ( v24 > v28 || v24 > v31 ) /*0x50de97*/
    {
      if ( v28 > v31 ) /*0x50deab*/
        this->u32_577C = 3; /*0x50dec1*/
      else
        this->u32_577C = 2; /*0x50deb1*/
    }
    else
    {
      this->u32_577C = 1; /*0x50de9d*/
    }
  }
  else
  {
    this->u32_577C = 0; /*0x50de85*/
  }
  result = this->u32_577C; /*0x50decf*/
  if ( (unsigned int)result >= 4 ) /*0x50ded7*/
    return 0; /*0x50ded7*/
  return result; /*0x50dc9d*/
}
}
// 0x544BE0
namespace gamemd {
int House::LookupObject(int a2, void *a2_2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(House *))(*(_DWORD *)a2_2->__pad_0 + 156))(a2_2); /*0x544be2*/
  if ( v2 && (v3 = v2[a2_2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x544c03*/
    return dword_8288E4[*(char *)(v3 + 41)]; /*0x544c09*/
  else
    return 0; /*0x544c13*/
}
}
// 0x544C20
namespace gamemd {
int House::LoadMapFileData(int a2, char a3)
{
  _DWORD *v4; // eax

  if ( a3 && !*(_DWORD *)&this->__pad_7C[40] && this->__pad_2B0[68] ) /*0x544c35*/
    MapClass::LoadFileData(); /*0x544c3f*/
  v4 = (_DWORD *)(*(int (__thiscall **)(House *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x544c48*/
  return v4 && a2 < *v4 * v4[1] && v4[a2 + 4]; /*0x544c50*/
}
}
// 0x69E090
namespace gamemd {
void House::Constructor()
{
  void *v2; // eax
  CCFileClass v3; // [esp+4h] [ebp-6Ch] BYREF
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v5; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this->__pad_0 == 0xFFFF && !this->__pad_C[4] ) /*0x69e09c*/
  {
    CCFileClass::Construct(&v3, (char *)this->House_field_0x8); /*0x69e0ab*/
    v2 = CCFileClass::ReadEntireFile(&v3); /*0x69e0b4*/
    if ( v2 ) /*0x69e0bb*/
    {
      *(_DWORD *)this->__pad_C = v2; /*0x69e0bd*/
      this->__pad_C[4] = 1; /*0x69e0c0*/
    }
    *(_DWORD *)v3.__tail_0 = &(void*)(void*)&CCFileClass_vftable; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    *(_DWORD *)v3.__tail_0 = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v3); /*0x69e0e9*/
  }
}
}
// 0x70C270
namespace gamemd {
int House::PowerBeginUpdate(AbstractClass * aP1)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // ebp
  int i; // ebx
  int v28; // eax
  int v29; // ebp
  int result; // eax
  int j; // ebx
  int v32; // eax
  int v33; // [esp-4h] [ebp-14h]
  int v34; // [esp-4h] [ebp-14h]
  Checksummer *v35; // [esp+14h] [ebp+4h]

  RadioClass::PowerDrainUpdate(aP1); /*0x70c27b*/
  Power::TimerProcess(this->controlGroup); /*0x70c289*/
  Checksummer::Add_double((Checksummer *)aP1, this->armorMultiplier[0], this->armorMultiplier[1]); /*0x70c29e*/
  Checksummer::Add_double((Checksummer *)aP1, this->firepowerMultiplier[0], this->firepowerMultiplier[1]); /*0x70c2b3*/
  v3 = this->idleActionTimer[0]; /*0x70c2b8*/
  v4 = this->idleActionTimer[2]; /*0x70c2be*/
  if ( v3 != -1 ) /*0x70c2c7*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 >= v4 ) /*0x70c2d3*/
      v4 = 0; /*0x70c2d9*/
    else
      v4 -= *(_DWORD *)&stru_A8EB00.?[416] - v3; /*0x70c2d5*/
  }
  Power::TimerProcess(v4); /*0x70c2de*/
  Power::TimerProcess(this->displayProductionTo[0]); /*0x70c2ec*/
  Power::TimerProcess(this->cloakState); /*0x70c2fa*/
  v5 = this->cloakDelayTimer[0]; /*0x70c2ff*/
  v6 = this->cloakDelayTimer[2]; /*0x70c305*/
  if ( v5 != -1 ) /*0x70c30e*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v5 >= v6 ) /*0x70c31a*/
      v6 = 0; /*0x70c320*/
    else
      v6 -= *(_DWORD *)&stru_A8EB00.?[416] - v5; /*0x70c31c*/
  }
  Power::TimerProcess(v6); /*0x70c325*/
  Checksummer::Add_float((Checksummer *)aP1, IDA_LODWORD(this->warpFactor)); /*0x70c333*/
  IDA_LOBYTE(v7) = this->isChronosphereImmune; /*0x70c338*/
  Power::FlagProcess((Power *)aP1, v7); /*0x70c341*/
  Power::TimerProcess(this->lastSightRange); /*0x70c34f*/
  Checksummer::Add_float((Checksummer *)aP1, IDA_LODWORD(this->pitchAngle)); /*0x70c35d*/
  v8 = this->diskLaserTimer[0]; /*0x70c362*/
  v9 = this->diskLaserTimer[2]; /*0x70c368*/
  if ( v8 != -1 ) /*0x70c371*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x70c37d*/
      v9 = 0; /*0x70c383*/
    else
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x70c37f*/
  }
  Power::TimerProcess(v9); /*0x70c388*/
  Power::TimerProcess(this->ammo); /*0x70c396*/
  v10 = this->reloadTimer[0]; /*0x70c39b*/
  v11 = this->reloadTimer[2]; /*0x70c3a1*/
  if ( v10 != -1 ) /*0x70c3aa*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x70c3b6*/
      v11 = 0; /*0x70c3bc*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x70c3b8*/
  }
  Power::TimerProcess(v11); /*0x70c3c1*/
  Power::TimerProcess(this->unitValue); /*0x70c3cf*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->railgunParticles_2); /*0x70c3dd*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->auxParticles1); /*0x70c3eb*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->auxParticles2); /*0x70c3f9*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->firingParticles); /*0x70c407*/
  IDA_LOBYTE(v12) = this->isSinking; /*0x70c40c*/
  v13 = Power::FlagProcess((Power *)aP1, v12); /*0x70c415*/
  IDA_LOBYTE(v13) = this->isReceivingDamageEffect; /*0x70c41a*/
  Power::FlagProcess((Power *)aP1, v13); /*0x70c423*/
  IDA_LOBYTE(v14) = this->isUseless; /*0x70c428*/
  Power::FlagProcess((Power *)aP1, v14); /*0x70c431*/
  IDA_LOBYTE(v15) = this->hasBeenAttacked; /*0x70c436*/
  v16 = Power::FlagProcess((Power *)aP1, v15); /*0x70c43f*/
  IDA_LOBYTE(v16) = this->isCloakableFlag; /*0x70c444*/
  Power::FlagProcess((Power *)aP1, v16); /*0x70c44d*/
  IDA_LOBYTE(v17) = this->isPrimaryFactory; /*0x70c452*/
  Power::FlagProcess((Power *)aP1, v17); /*0x70c45b*/
  IDA_LOBYTE(v18) = this->isALoaner; /*0x70c460*/
  v19 = Power::FlagProcess((Power *)aP1, v18); /*0x70c469*/
  IDA_LOBYTE(v19) = this->isInPlayfield; /*0x70c46e*/
  Power::FlagProcess((Power *)aP1, v19); /*0x70c477*/
  IDA_LOBYTE(v20) = this->isTether; /*0x70c47c*/
  Power::FlagProcess((Power *)aP1, v20); /*0x70c485*/
  IDA_LOBYTE(v21) = this->isAlternativeTether; /*0x70c48a*/
  Power::FlagProcess((Power *)aP1, v21); /*0x70c493*/
  v22 = *(_DWORD *)&dword_A8B238; /*0x70c498*/
  if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x70c4a4*/
  {
    IDA_LOBYTE(v22) = this->isOwnedByCurrentPlayer; /*0x70c4a6*/
    Power::FlagProcess((Power *)aP1, v22); /*0x70c4af*/
    IDA_LOBYTE(v23) = this->isDiscoveredByCurrentPlayer; /*0x70c4b4*/
    Power::FlagProcess((Power *)aP1, v23); /*0x70c4bd*/
    IDA_LOBYTE(v24) = this->isDiscoveredByComputer; /*0x70c4c2*/
    v22 = Power::FlagProcess((Power *)aP1, v24); /*0x70c4cb*/
  }
  IDA_LOBYTE(v22) = this->isSelectedByPlayer; /*0x70c4d0*/
  Power::FlagProcess((Power *)aP1, v22); /*0x70c4d9*/
  Power::TimerProcess(this->empLockRemaining); /*0x70c4e7*/
  Power::TimerProcess((unsigned __int8)this->isUnderCursor); /*0x70c4f7*/
  Power::TimerProcess((unsigned __int8)this->isCommandLineTarget); /*0x70c507*/
  IDA_LOBYTE(v25) = this->sightRangeBonus; /*0x70c50c*/
  Power::FinalizeDrain((Power *)aP1, v25); /*0x70c515*/
  v26 = this->currentTargets[4]; /*0x70c51a*/
  Power::TimerProcess(v26); /*0x70c523*/
  for ( i = 0; i < v26; ++i ) /*0x70c52c*/
  {
    v35 = *(Checksummer **)(this->currentTargetThreatValues[1] + 4 * i); /*0x70c543*/
    v33 = *(_DWORD *)(this->currentTargets[1] + 4 * i) + 4; /*0x70c547*/
    v28 = (*(int (__stdcall **)(int))(*(_DWORD *)v33 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(v28); /*0x70c550*/
    Power::TimerProcess((int)v35); /*0x70c55c*/
  }
  v29 = this->attackedTargets[4]; /*0x70c566*/
  result = Power::TimerProcess(v29); /*0x70c56f*/
  for ( j = 0; j < v29; ++j ) /*0x70c578*/
  {
    v34 = *(_DWORD *)(this->attackedTargets[1] + 4 * j) + 4; /*0x70c586*/
    v32 = (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(v32); /*0x70c58f*/
  }
  return result; /*0x70c599*/
}
}
// 0x72F350
namespace gamemd {
unsigned int * sub_72F350()
{
  _DWORD *result; // eax

  FileTree::CleanupAll(); /*0x72f350*/
  LoadingScreen::FreeResources(); /*0x72f355*/
  LoadingScreen::FreeResources2(); /*0x72f35a*/
  byte_B0FC0C = 0; /*0x72f35f*/
  LoadingScreen::LoadSHPs(); /*0x72f366*/
  if ( *((_DWORD *)dword_A8B230 + 3374) == 2 ) /*0x72f377*/
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
void House_Play_6D1660(int a2)
{
  _BYTE *v2; // ecx
  _BYTE *v3; // edi
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
      (*(void (__thiscall **)(_BYTE *, ShapeButtonClass *))(*(_DWORD *)v3 + 52))(v3, v5); /*0x6d167f*/
      v5 += 8; /*0x6d1682*/
    }
    while ( (int)v5 < (int)&dword_B0CB20 ); /*0x6d168b*/
    (*(void (__thiscall **)(_BYTE *, GadgetClass *, int))(*(_DWORD *)v3 + 52))(v3, &stru_B0CCB0, a2); /*0x6d1696*/
    v6 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v7 = *v6; /*0x6d169e*/
      if ( *v6 >= 0 && v7 < 25 ) /*0x6d16a7*/
      {
        v8 = &stru_B0C1C0 + 8 * v7; /*0x6d16af*/
        if ( v8 ) /*0x6d16b6*/
          HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(_DWORD *)v8[3].__pad_0); /*0x6d16c2*/
      }
      ++v6; /*0x6d16c7*/
    }
    while ( (int)v6 < (int)byte_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d16dd*/
    v9 = *(_DWORD *)v3; /*0x6d16e2*/
    v3[21828] = 0; /*0x6d16eb*/
    (*(void (__thiscall **)(_BYTE *, GadgetClass *))(v9 + 48))(v3, &stru_B0CC40); /*0x6d16f2*/
    if ( &stru_B0CC40 ) /*0x6d16fd*/
    {
      v12[1] = stru_B0CC40.Width; /*0x6d1710*/
      v12[2] = stru_B0CC40.Height; /*0x6d171a*/
      v12[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d1724*/
      v13 = 0; /*0x6d172f*/
      v12[0] = dword_B0CC64; /*0x6d1734*/
      v12[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v12[4] = stru_B0CC40.ID; /*0x6d1740*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v12); /*0x6d1754*/
    }
    v10 = *(_DWORD *)v3; /*0x6d1759*/
    v3[21829] = 1; /*0x6d175f*/
    return (*(char (__thiscall **)(_BYTE *, _DWORD))(v10 + 56))(v3, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}
}
// 0x637A10
namespace gamemd {
char sub_637A10()
{
  char result; // al
  _BYTE v1[108]; // [esp-70h] [ebp-ECh] BYREF
  int v2; // [esp-4h] [ebp-80h]
  char v3[108]; // [esp+Ch] [ebp-70h] BYREF
  __int16 v4; // [esp+78h] [ebp-4h]
  char v5; // [esp+7Ah] [ebp-2h]

  result = byte_AC4CF4; /*0x637a10*/
  if ( byte_AC4CF4 ) /*0x637a1f*/
  {
    EventClass::AddEvent(v3, *((_DWORD *)dword_A83D4C + 12), 0x2Bu); /*0x637a30*/
    qmemcpy(v1, v3, sizeof(v1)); /*0x637a43*/
    IDA_LOWORD(v2) = v4; /*0x637a45*/
    IDA_BYTE2(v2) = v5; /*0x637a47*/
    Network::RecordEvent( /*0x637a48*/
      *(__int64 *)v1,
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
      return (**(int (__thiscall ***)(int, int, _DWORD))dword_AC4B80)(dword_AC4B80, 4552, 0); /*0x637a92*/
  }
  return result; /*0x637a94*/
}
} // namespace gamemd
