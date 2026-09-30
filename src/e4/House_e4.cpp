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

// 0x47D2B0
namespace gamemd {
int House::AnnounceUpgrade()
{
  int result; // eax
  int16_t *v4; // edi
  unsigned char *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  int16_t v11; // dx
  int16_t v12; // cx
  int16_t v13; // dx
  int16_t v14; // dx
  int16_t v15; // dx
  int16_t v16; // dx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebp
  bool MapFileData; // al
  int16_t v21; // cx
  int16_t v22; // ax
  int16_t v23; // cx
  int16_t v24; // cx
  int16_t v25; // cx
  int16_t v26; // cx
  int v27; // ecx
  int16_t v28; // ax
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  TubeClass *v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  unsigned int *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  AnimClass *v40; // eax
  void **v41; // eax
  void *v42; // ecx
  unsigned short *inited; // ebx
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
  int16_t v55[2]; // [esp+10h] [ebp-38h] BYREF
  int v57; // [esp+18h] [ebp-30h]
  int v58; // [esp+1Ch] [ebp-2Ch] BYREF
  char v59[4]; // [esp+20h] [ebp-28h] BYREF
  int v60[5]; // [esp+24h] [ebp-24h] BYREF
  int v61; // [esp+38h] [ebp-10h]
  char v62[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (int *)this == &g_MissionQueueFrame.briefing[130] ) /*0x47d2bf*/
    return result; /*0x47d2bf*/
    v3 = (IUnknown *)((char *)this + 144);
  v5 = (unsigned char *)(*(unsigned int *)&stru_87F5F0.__pad_58[520] /*0x47d2da*/
               + 4 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (int16_t *)(&this->u32_C6)));
  v57 = (int)v5; /*0x47d2e2*/
  v6 = *(unsigned int *)&stru_87F5F0.__pad_58[528] /*0x47d2f3*/
     + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (int16_t *)(&this->u32_C6));
    v6 = *((unsigned int *)this + 272);
  v6 = v6; /*0x47d2fc*/
  if ( v7 != -1 ) /*0x47d300*/
  {
    v8 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v7); /*0x47d30c*/
    v9 = *(unsigned int *)(v8 + 664); /*0x47d30f*/
        *((unsigned int *)this + 944) = v8;
    if ( v9 == 4 || v9 == 9 || *(unsigned char *)(v8 + 684) ) /*0x47d325*/
    {
            v9 = *((unsigned int *)this + 224);
      if ( v10 != 0xFFFF && v10 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 340) ) /*0x47d343*/
                        *((unsigned char *)this + 1136) = HouseClass::GetCameoTypeIndex(
            if ( *((unsigned char *)this + 1136) && *(unsigned char *)(v7 + 681) )
      {
                *((unsigned int *)this + 272) = -1;
                *((unsigned char *)this + 1144) = 0;
      }
      if ( *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d38b*/
      {
                v10 = *((unsigned short *)this + 152);
        IDA_LOWORD(aP1) = *v4; /*0x47d3a0*/
        IDA_HIWORD(aP1) = v11 - 1; /*0x47d3ab*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283) )
          goto LABEL_19; /*0x47d3d6*/
        v12 = *v4 - 1; /*0x47d3e3*/
                HIWORD(aP1) = *((unsigned short *)this + 152);
        IDA_LOWORD(aP1) = v12; /*0x47d3ea*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283) )
          goto LABEL_19; /*0x47d419*/
                v12 = *((unsigned short *)this + 152) + 2;
        IDA_LOWORD(aP1) = *v4 + 2; /*0x47d42e*/
        IDA_HIWORD(aP1) = v13; /*0x47d437*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283) )
          goto LABEL_19; /*0x47d462*/
                v13 = *((unsigned short *)this + 152) + 1;
        IDA_LOWORD(aP1) = *v4 + 1; /*0x47d473*/
        IDA_HIWORD(aP1) = v14; /*0x47d47c*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283)
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283)
          || (v15 = this->u16_26 + 1,
              IDA_LOWORD(aP1) = *v4 - 1,
              IDA_HIWORD(aP1) = v15,
              this->u32_11B + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (int16_t *)&aP1)
                                           + 283))
          || (v16 = this->u16_26 - 1,
              IDA_LOWORD(aP1) = *v4 + 1,
              IDA_HIWORD(aP1) = v16,
              this->u32_11B + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (int16_t *)&aP1)
                                           + 283)) )
        {
  LABEL_19:
          if ( *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47d53c*/
                        *((unsigned int *)this + 944) = 3;
        }
      }
      CellClass::DetermineTileType(); /*0x47d54a*/
      BuildingClass::DetermineVisualState(); /*0x47d551*/
      v17 = v6; /*0x47d55c*/
            v4[1] = *((unsigned char *)this + 1132);
      IDA_LOBYTE(result) = this->u32_11B; /*0x47d563*/
      *(unsigned char *)(v17 + 8) = result; /*0x47d569*/
            *v4 = *((unsigned char *)this + 304);
      return result; /*0x47d578*/
    }
  }
    if ( *((unsigned int *)this + 224) >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[588] )
        *((unsigned int *)this + 224) = 0xFFFF;
    v17 = *((unsigned int *)this + 224);
  if ( v18 != 0xFFFF ) /*0x47d595*/
  {
    v19 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * v18); /*0x47d5ab*/
        v54 = *(unsigned __int8 *)((char *)this + 1128);
    *(unsigned int *)v55 = v19; /*0x47d5b1*/
    MapFileData = House::LoadMapFileData((House *)v19, v54, 0); /*0x47d5b5*/
        if ( *((unsigned char *)this + 1136) )
    {
      if ( MapFileData ) /*0x47d5c6*/
      {
  LABEL_40:
                *((unsigned char *)this + 1136) = HouseClass::GetCameoTypeIndex((void *)v18, *(unsigned __int8 *)((char *)this + 1128));
        CellClass::DetermineTileType(); /*0x47d813*/
                v27 = *((unsigned int *)this + 272);
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType((IUnknown *)(v27)) != -1 ) /*0x47d828*/
        {
                    if ( *((unsigned char *)this + 1136) <= 4u )
          {
                        if ( !*(unsigned int *)(*(unsigned int *)&MEMORY[0xA83D84]->__pad_0[4 * *((unsigned int *)this + 272)] + 664) )
                            *((unsigned int *)this + 944) = 5;
          }
          else
          {
                        *((unsigned int *)this + 944) = House::LookupObject((void *)v18, *(unsigned __int8 *)((char *)this + 1128));
                        *((unsigned int *)this + 272) = -1;
                        *((unsigned char *)this + 1144) = 0;
          }
          goto LABEL_48; /*0x47d857*/
        }
                if ( !*(unsigned char *)(*(unsigned int *)&MEMORY[0xA83D84]->__pad_0[4 * *((unsigned int *)this + 272)] + 684) )
  LABEL_47:
                    *((unsigned int *)this + 944) = House::LookupObject((void *)v18, *(unsigned __int8 *)((char *)this + 1128));
  LABEL_48:
                if ( *((unsigned int *)this + 944) == 10 )
        {
                    v28 = *((unsigned short *)this + 1112);
          if ( v28 < 0 || v28 >= *((unsigned int *)((char *)&FootClass_Array + 0)) ) /*0x47d8d2*/
          {
                        if ( (v29 = *((unsigned int *)this + 224),
              || (v30 = dword_ABB108, v29 >= dword_ABB108) && v29 <= dword_ABB108 + 3
              || (v30 = dword_AA10B4, v29 >= dword_AA10B4) && v29 <= dword_AA10B4 + 3
              || (v30 = dword_ABAD2C, v29 >= dword_ABAD2C) && v29 <= dword_ABAD2C + 3 )
            {
              v31 = v29 - v30; /*0x47d91d*/
              if ( v29 - v30 != -1 ) /*0x47d922*/
              {
                v32 = (TubeClass *)RA2_OPNEW(0x1C4u); /*0x47d929*/
                if ( v32 ) /*0x47d933*/
                                    TubeClass::Construct(v32, (__int16 *)((char *)this + 144), dword_81CC20[(unsigned int)v31]);
              }
            }
          }
        }
        if ( aP1 != (IUnknown *)(-1) ) /*0x47d94c*/
                    *((unsigned char *)this + 1132) = (unsigned char)aP1;
                TechnoClass::GetTileAnimationData((void *)v18, *(unsigned __int8 *)((char *)this + 1128), &v58, &var2C);
                v33 = *((unsigned int *)this + 1280);
                *((unsigned char *)this + 1140) = (var2C - 30) / 15;
        if ( (v33 & 0x20000) == 0 /*0x47d9bc*/
          && *(unsigned int *)(v19 + 712) != -1
          && *(unsigned int *)(v19 + 724) == *(uint8_t *)(&this->u32_702) )
        {
          v34 = *v4; /*0x47d9d0*/
                    v35 = *(__int16 *)((char *)this + 152);
                    v61 = MEMORY[0x89E7C0] * *((char *)this + 1132);
          v36 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v62, (int *)(*(unsigned int *)v55 + 716)); /*0x47da03*/
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
                    *(void **)(*((unsigned int *)((char *)&FootClass_Array + 3)) + 4 * *(unsigned int *)(*(unsigned int *)v55 + 712)),
                    v60,
                    0,
                    -1,
                    (void *)0x1600,
                    0,
                    0);
          else
            v41 = 0; /*0x47da66*/
          v19 = *(unsigned int *)v55; /*0x47da6c*/
          v42 = *(void **)(v55->u32_2D8; /*0x47da6e*/
          *((unsigned char *)v41 + 406) = 1; /*0x47da74*/
          v41[64] = v42; /*0x47da7b*/
          *((unsigned char *)v41 + 407) = 1; /*0x47da81*/
                    *((unsigned int *)this + 1280) |= 0x20000u;
        }
        if ( *(unsigned char *)(v19 + 737) ) /*0x47da92*/
        {
          inited = (unsigned short *)InitCoordinateOffsetsMap(v19); /*0x47daa7*/
          if ( inited ) /*0x47daab*/
          {
            while ( (*inited != 0x7FFF || inited[1] != 0x7FFF) && *(unsigned int *)inited != dword_89E748 ) /*0x47dacf*/
            {
              IDA_LOWORD(aP1) = *v4 + *inited; /*0x47dae6*/
                            HIWORD(aP1) = *((unsigned short *)inited + 1) + *((unsigned short *)this + 152);
              *(unsigned int *)v55 = aP1; /*0x47dafc*/
              v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x47db05*/
              inited += 2; /*0x47db1b*/
              v44[80] |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
            MapFileData = House::LoadMapFileData((unsigned int *)v18, *(unsigned __int8 *)((char *)this + 1128), 1);
    }
    if ( !MapFileData ) /*0x47d5e0*/
    {
            *((unsigned int *)this + 224) = 0xFFFF;
            *((unsigned char *)this + 1128) = 0;
            *((unsigned int *)this + 944) = 0;
            *((unsigned char *)this + 1136) = 0;
      if ( *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47d605*/
      {
                v20 = *((unsigned short *)this + 152) - 1;
        IDA_LOWORD(aP1) = *v4; /*0x47d61c*/
        IDA_HIWORD(aP1) = v21; /*0x47d621*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283) )
          goto LABEL_98; /*0x47d650*/
        v22 = *v4 - 1; /*0x47d65d*/
                HIWORD(aP1) = *((unsigned short *)this + 152);
        IDA_LOWORD(aP1) = v22; /*0x47d664*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283) )
          goto LABEL_98; /*0x47d693*/
                v22 = *((unsigned short *)this + 152);
        IDA_LOWORD(aP1) = *v4 + 2; /*0x47d6a8*/
        IDA_HIWORD(aP1) = v23 + 2; /*0x47d6ad*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283) )
          goto LABEL_98; /*0x47d6dc*/
                v23 = *((unsigned short *)this + 152) + 1;
        IDA_LOWORD(aP1) = *v4 + 1; /*0x47d6ed*/
        IDA_HIWORD(aP1) = v24; /*0x47d6f2*/
                if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283)
                                                      (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                      (int16_t *)&aP1)
                                          + 283)
          || (v25 = this->u16_26 + 1,
              IDA_LOWORD(aP1) = *v4 - 1,
              IDA_HIWORD(aP1) = v25,
              this->u32_11B + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (int16_t *)&aP1)
                                           + 283))
          || (v26 = this->u16_26 - 1,
              IDA_LOWORD(aP1) = *v4 + 1,
              IDA_HIWORD(aP1) = v26,
              this->u32_11B + 4 <= *((char *)CellCoord::To_CellObj(
                                                       (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                       (int16_t *)&aP1)
                                           + 283)) )
        {
  LABEL_98:
                    if ( *(unsigned char *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1636) == 2 && !*((unsigned int *)this + 944) )
                        *((unsigned int *)this + 944) = 3;
        }
      }
      BuildingClass::DetermineVisualState(); /*0x47d7cd*/
      result = v57; /*0x47d7d2*/
            v57[1] = *((unsigned char *)this + 1132);
            *(unsigned char *)(v56 + 8) = *((unsigned char *)this + 1132);
            *v26 = *((unsigned char *)this + 304);
      return result; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v7 == -1 || (v45 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v7), *(unsigned char *)(v45 + 684)) ) /*0x47db30*/
        *((unsigned int *)this + 944) = 0;
  else
        *((unsigned int *)this + 944) = *(unsigned int *)(v45 + 664);
    *((unsigned char *)this + 1136) = 0;
  LABEL_82:
  if ( *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1636) ) /*0x47db5e*/
  {
        v46 = *((unsigned short *)this + 152);
    IDA_LOWORD(aP1) = *v4; /*0x47db73*/
    IDA_HIWORD(aP1) = v46 - 1; /*0x47db7e*/
        if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (int16_t *)&aP1)
                                      + 283) )
      goto LABEL_89; /*0x47dba9*/
    v47 = *v4 - 1; /*0x47dbb6*/
        HIWORD(aP1) = *((unsigned short *)this + 152);
    IDA_LOWORD(aP1) = v47; /*0x47dbbd*/
        if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (int16_t *)&aP1)
                                      + 283) )
      goto LABEL_89; /*0x47dbec*/
        v48 = *((unsigned short *)this + 152) + 2;
    IDA_LOWORD(aP1) = *v4 + 2; /*0x47dc01*/
    IDA_HIWORD(aP1) = v48; /*0x47dc0a*/
        if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283) )
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (int16_t *)&aP1)
                                      + 283) )
      goto LABEL_89; /*0x47dc35*/
        v49 = *((unsigned short *)this + 152) + 1;
    IDA_LOWORD(aP1) = *v4 + 1; /*0x47dc46*/
    IDA_HIWORD(aP1) = v49; /*0x47dc4f*/
        if ( *((char *)this + 1132) + 4 <= *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 283)
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (int16_t *)&aP1)
                                      + 283)
      || (v50 = this->u16_26 + 1,
          IDA_LOWORD(aP1) = *v4 - 1,
          IDA_HIWORD(aP1) = v50,
          this->u32_11B + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (int16_t *)&aP1)
                                       + 283))
      || (v51 = this->u16_26 - 1,
          IDA_LOWORD(aP1) = *v4 + 1,
          IDA_HIWORD(aP1) = v51,
          this->u32_11B + 4 <= *((char *)CellCoord::To_CellObj(
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (int16_t *)&aP1)
                                       + 283)) )
    {
  LABEL_89:
      if ( *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1636) == 2 ) /*0x47dd0f*/
      {
                v52 = *((unsigned int *)this + 944);
        if ( !v52 || v52 == 2 || v52 == 6 || v52 == 8 ) /*0x47dd28*/
                    *((unsigned int *)this + 944) = 3;
      }
    }
  }
  BuildingClass::DetermineVisualState(); /*0x47dd36*/
  v53 = (unsigned char *)v57; /*0x47dd3b*/
    v57[1] = *((unsigned char *)this + 1132);
    *v53 = *((unsigned char *)this + 304);
  result = v6; /*0x47dd4d*/
    *(unsigned char *)(v56 + 8) = *((unsigned char *)this + 1132);
  return result; /*0x47d56f*/
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
  House *v9; // eax
  BuildingClass *v10; // ecx
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
  House *v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int v24; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h]
  unsigned int v27[4]; // [esp+20h] [ebp-10h] BYREF

    v3 = *((unsigned int *)this + 272);
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
    a2 = *(unsigned __int8 *)((char *)this + 1144);
  v4 = *(unsigned char **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v3); /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( BuildingByTiberiumType == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = *(unsigned int **)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) + 4 * BuildingByTiberiumType); /*0x47fbe2*/
        if ( *((unsigned char *)this + 1136) )
    {
      v7 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 /*0x47fc36*/
                     + 4
                     * (v6[58]
                      + *(unsigned int *)(v6[56] + 660)
                      + v6[59] / 4 * ((uint8_t)this->__pad_7C[160] - 1)
                      + *(int16_t *)&this->__pad_C[24] * *(int16_t *)&this->__pad_C[26] % (v6[59] / 4)));
      v23 = (House *)(*(int (**)(int))(*(unsigned int *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 /*0x47fc6f*/
                   + 4
                   * (*(unsigned int *)(v6[56] + 660)
                    + *(int16_t *)&this->__pad_C[24] * *(int16_t *)&this->__pad_C[26] % v6[58]));
    v9 = (House *)(*(int (**)(int))(*(unsigned int *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (House *)(*(int (**)(unsigned char *))(*(unsigned int *)v4 + 156))(v4); /*0x47fca7*/
  LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
    v10 = *(int **)((char *)this + 256);
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(v10, (int *)&v23, &v24); /*0x47fc9b*/
  LABEL_12:
    v11 = (*(__int16 *)((char *)this + 144) << 8) + 128;
    v12 = (*(__int16 *)((char *)this + 152) << 8) + 128;
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
    v16 = v25 - *((__int16 *)v23 + 1) / 2;
    v17 = v26 - *((__int16 *)v23 + 2) / 2;
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
  int v2; // ebp
  void * v3;
  int v4; // eax
  int v5; // eax
  void *v6; // eax
  unsigned int v7; // ecx
  int64_t v8; // rax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  void *v15; // eax
  int *v16; // edx
  double v17; // st7
  int v18; // eax
  int v19; // esi
  int v20; // edx
  int v21; // eax
  unsigned int *v22; // ecx
  int v23; // eax
  int v24; // edi
  int v25; // esi
  int v26; // ecx
  int *v27; // edx
  int v28; // eax
  int v29; // eax
  int i; // ebp
  int j; // edi
  int v33; // [esp+8h] [ebp-48h]
  int v34; // [esp+20h] [ebp-30h] BYREF
  unsigned int v35[2]; // [esp+24h] [ebp-2Ch] BYREF
  int v36; // [esp+2Ch] [ebp-24h]
  int v38; // [esp+34h] [ebp-1Ch]
  unsigned int v39[3]; // [esp+38h] [ebp-18h] BYREF
  unsigned char v40[12]; // [esp+44h] [ebp-Ch] BYREF

  v2 = 0; /*0x4fd50d*/
    v3 = *((unsigned int *)this + 88320);
    v4 = *((unsigned int *)this + 88352);
  if ( v3 == -1 ) /*0x4fd520*/
  {
  LABEL_4:
    if ( v4 ) /*0x4fd532*/
      goto LABEL_29; /*0x4fd532*/
    goto LABEL_5; /*0x4fd532*/
  }
  if ( (int)g_CurrentFrame - v3 < v4 ) /*0x4fd52c*/
  {
    v4 -= (int)g_CurrentFrame - v3; /*0x4fd52e*/
    goto LABEL_4; /*0x4fd52e*/
  }
  LABEL_5:
  if ( this->u32_5600 == -1 && g_GameMode_Current[0] && !*(unsigned char *)(this->u32_34 + 422) )
  {
    v5 = CellStruct::Equals((unsigned short *)(&this->u32_21D42), &g_ControlGroupState)
       ? this->u32_5490
       : this->q5494;
    v34 = v5; /*0x4fd58b*/
    if ( !CellStruct::Equals(&v34, &g_ControlGroupState) )
    {
      v6 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v34); /*0x4fd5a6*/
      IDA_LODWORD(v8) = (*(int (**)(void *, unsigned int *))(*(unsigned int *)v6 + 72))(v6, v39); /*0x4fd5b4*/
      v36 = *(unsigned int *)v8; /*0x4fd5c3*/
      v7 = *(unsigned int *)(v8 + 4); /*0x4fd5c7*/
      v7 = v7; /*0x4fd5ca*/
      IDA_HIDWORD(v8) = *(unsigned int *)(v8 + 8); /*0x4fd5ce*/
      v38 = IDA_HIDWORD(v8); /*0x4fd5d1*/
      if ( v36 != g_ControlGroupPool
        || IDA___PAIR64__(IDA_HIDWORD(v8), v7) != IDA___PAIR64__(g_ControlGroupLimit, g_ControlGroupConfig) )
      {
        v9 = 0x7FFFFFFF; /*0x4fd5f0*/
        v34 = 0; /*0x4fd5f7*/
        if ( HouseClass_Count > 0 )
        {
          do
          {
            v10 = *(unsigned int *)&HouseClass_Array->gap0[4 * v34]; /*0x4fd60b*/
            if ()
            {
              IDA_HIDWORD(v8) = v10->relatedTagsCapacity; /*0x4fd616*/
              if ( !*(unsigned char *)(IDA_HIDWORD(v8) + 422) && !v10->defeated )
              {
                v11 = CellStruct::Equals((unsigned short *)(&this->u32_21D42), &g_ControlGroupState)
                    ? this->u32_5490
                    : this->q5494;
                v35[0] = v11; /*0x4fd660*/
                if ( CellStruct::Equals(v35, &g_ControlGroupState) ) /*0x4fd664*/
                {
                  v12 = g_ControlGroupPool; /*0x4fd66d*/
                  v13 = g_ControlGroupConfig; /*0x4fd672*/
                  v14 = g_ControlGroupLimit; /*0x4fd678*/
                }
                else
                {
                  v15 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)v35); /*0x4fd68a*/
                  v16 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v15 + 72))(v15, v40); /*0x4fd69b*/
                  v12 = *v16; /*0x4fd69d*/
                  v13 = v16[1]; /*0x4fd69f*/
                  v14 = v16[2]; /*0x4fd6a2*/
                }
                v39[0] = v12 - v36; /*0x4fd6ac*/
                v39[1] = v13 - v7; /*0x4fd6b6*/
                v39[2] = v14 - v38; /*0x4fd6c4*/
                v17 = Math::Sqrt( /*0x4fd6e9*/
                        (double)(v12 - v36) * (double)(v12 - v36)
                      + (double)(v14 - v38) * (double)(v14 - v38)
                      + (double)(int)(v13 - v7) * (double)(int)(v13 - v7));
                v8 = Math::RoundToInt(v17); /*0x4fd6f1*/
                if ( (int)v8 < v9 ) /*0x4fd6f8*/
                {
                  v2 = v10; /*0x4fd6fa*/
                  v9 = v8; /*0x4fd6fc*/
                }
              }
            }
            ++v34; /*0x4fd70b*/
          }
          while ( v34 < HouseClass_Count );
          if ( v2 ) /*0x4fd717*/
            UpdateHouseClassAnger(IDA_SHIDWORD(v8), 1, v2); /*0x4fd71e*/
        }
      }
    }
  }
  LABEL_29:
    v18 = *((unsigned int *)this + 88064);
  if ( v18 != -1 ) /*0x4fd72c*/
  {
    v19 = *(unsigned int *)&HouseClass_Array->gap0[4 * v18]; /*0x4fd734*/
    if ( v19->defeated ) /*0x4fd737*/
    {
            v20 = *((unsigned int *)this + 88144);
      v21 = 0; /*0x4fd747*/
      if ( v20 > 0 ) /*0x4fd74b*/
      {
                v22 = *(HouseClass ***)((char *)this + 88096);
        while ( *v22 != v19 ) /*0x4fd757*/
        {
          ++v21; /*0x4fd759*/
          v22 += 2; /*0x4fd75a*/
          if ( v21 >= v20 ) /*0x4fd75f*/
            goto LABEL_37; /*0x4fd75f*/
        }
                aP0 = -*(unsigned int *)(*((unsigned int *)this + 88096) + 8 * v21 + 4);
        UpdateHouseClassAnger(v33, v33, v19); /*0x4fd76d*/
      }
  LABEL_37:
            *((unsigned int *)this + 88064) = -1;
    }
  }
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068]
    HouseClass::UpdateAITryFireSW(); /*0x4fd79b*/
    v23 = *((unsigned int *)this + 2368);
  if ( v23 == 4 ) /*0x4fd7ae*/
  {
        (*(void (__stdcall **)(int))(*((unsigned int *)this + 144) + 52))((char *)this + 144);
        (*(void (__stdcall **)(int))(*((unsigned int *)this + 144) + 56))((char *)this + 144);
  }
  else
  {
        if ( !v23 && (*(int (__stdcall **)(int))(*((unsigned int *)this + 144) + 24))((char *)this + 144) < 25 )
            *((unsigned int *)this + 2368) = 1;
        if ( *((unsigned int *)this + 2368) == 1 && (*(int (__stdcall **)(int))(*((unsigned int *)this + 144) + 24))((char *)this + 144) >= 25 )
      && (*(int (__stdcall **)(unsigned int))(this->q024 + 24))(&this->u32_C6) >= 25 )
    {
            *((unsigned int *)this + 2368) = 0;
    }
        if ( *((unsigned int *)this + 2368) != 3 )
      goto LABEL_53; /*0x4fd808*/
        if ( *((unsigned int *)this + 86880) + 900 < *(int *)&HouseClass_Player.__pad_5568[23248] )
            *((unsigned int *)this + 2368) = 0;
        if ( *((unsigned int *)this + 2368) != 3 )
    {
  LABEL_53:
            if ( *((unsigned int *)this + 86880) + 900 > *(int *)&HouseClass_Player.__pad_5568[23248] )
                *((unsigned int *)this + 2368) = 3;
    }
  }
  if ( g_GameMode_Current[0] ) /*0x4fd851*/
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
            if ( *((unsigned int *)this + 2368) == 3 )
        goto LABEL_70; /*0x4fd87f*/
            v25 = *((unsigned int *)this + 480);
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
                  HouseClass::ManageProduction(i); /*0x4fd8eb*/
              }
              else if ( i == 4 ) /*0x4fd8f5*/
              {
                                (*(void (__stdcall **)(int))(*((unsigned int *)this + 144) + 52))((char *)this + 144);
                                (*(void (__stdcall **)(int))(*((unsigned int *)this + 144) + 56))((char *)this + 144);
              }
            }
          }
        }
// 0x65c7e0
        return Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 1, 7) + 105; /*0x4fd911*/
      }
    }
        v27 = *(HouseClass **)((char *)this + 432);
    while ( 1 ) /*0x4fd88d*/
    {
      v28 = *v27; /*0x4fd88d*/
      if ( *v27 ) /*0x4fd88d*/
      {
        if ( *(unsigned char *)(v28 + 144) && !*(unsigned char *)(v28 + 129) && *(unsigned int *)(*(unsigned int *)(v28 + 1312) + 3768) ) /*0x4fd8ab*/
          break; /*0x4fd8ab*/
      }
      ++v26; /*0x4fd8b4*/
      ++v27; /*0x4fd8b5*/
      if ( v26 >= v25 ) /*0x4fd8ba*/
        goto LABEL_69; /*0x4fd8ba*/
    }
  LABEL_70:
    v29 = 0; /*0x4fd8c3*/
    goto LABEL_71; /*0x4fd8c3*/
  }
// 0x65c7e0
  return Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 1, 7) + 105; /*0x4fd927*/
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
  if ( *(unsigned int *)&dword_A8B238 ) /*0x50b6f7*/
    return this == (House *)dword_A83D4C; /*0x50b720*/
    return *((unsigned char *)this + 492) || *((unsigned char *)this + 493);
}
}
// 0x50B730
namespace gamemd {
int House::IsCurrentPlayer()
{
  int result; // eax

  result = *(unsigned int *)&dword_A8B238; /*0x50b730*/
    LOBYTE(result) = *((unsigned char *)this + 492);
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50b73d*/
        LOBYTE(result) = (unsigned char)result || *((unsigned char *)this + 493);
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
  unsigned int *v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int *v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned int *v26; // eax
  int v27; // ecx
  int v28; // eax
  unsigned int *v29; // eax
  int v30; // ecx
  int v31; // eax
  double v32; // [esp+4h] [ebp-40h]
  double v33; // [esp+4h] [ebp-40h]
  double v34; // [esp+4h] [ebp-40h]
  double v35; // [esp+4h] [ebp-40h]
  int v37; // [esp+20h] [ebp-24h] BYREF
  int v38; // [esp+24h] [ebp-20h]
  unsigned int v39[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]
  int v43; // [esp+48h] [ebp+4h]

  v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052); /*0x50db03*/
  v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048); /*0x50db0a*/
  v6 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044); /*0x50db19*/
  v40 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044); /*0x50db25*/
  v41 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048); /*0x50db29*/
  v42 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052); /*0x50db2d*/
  v7 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052); /*0x50db31*/
  if ( aP1 && *(unsigned char *)(aP1 + 979) && *(unsigned int *)(*(unsigned int *)(aP1 + 1312) + 3768) == 7 ) /*0x50db4c*/
  {
    v8 = (int *)(*(int (__stdcall **)(unsigned int *))(*(unsigned int *)aP1 + 72))(v39); /*0x50db58*/
    v9 = *v8; /*0x50db5a*/
    v40 = *v8; /*0x50db5c*/
    v41 = v8[1]; /*0x50db63*/
    v42 = v8[2]; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
    if ( !*((unsigned int *)this + 752) || (v9 = 0, aP1a = 0, *((unsigned int *)this + 120) <= 0) )
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
      while ( 1 )
    if ( !v11 || *(unsigned char *)(v11 + 129) ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(unsigned char *)(*(unsigned int *)(v11 + 1312) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v6 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044) && v4 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048) && v7 == v3 ) /*0x50dc06*/
    {
      v13 = (int *)(*(int (**)(int, int *))(*(unsigned int *)v11 + 72))(v11, &v37); /*0x50dc11*/
      v6 = *v13; /*0x50dc14*/
      v4 = v13[1]; /*0x50dc16*/
      v7 = v13[2]; /*0x50dc19*/
    }
  LABEL_18:
    v10 = v43 + 1; /*0x50dc1c*/
    v43 = v10; /*0x50dc28*/
        if ( v9 >= *((unsigned int *)this + 120) )
    {
      v9 = v40; /*0x50dc34*/
      goto LABEL_20; /*0x50dc38*/
    }
    v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052); /*0x50db98*/
  }
  v12 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)v11 + 72))(v11, v39); /*0x50dbce*/
  v9 = *v12; /*0x50dbd0*/
  v40 = *v12; /*0x50dbd2*/
  v41 = v12[1]; /*0x50dbd9*/
  v42 = v12[2]; /*0x50dbe0*/
  if ( !*(unsigned char *)(v11 + 979) ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  LABEL_20:
  if ( v9 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044) ) /*0x50dc40*/
  {
    v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052); /*0x50dc4e*/
    if ( v41 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048) && v42 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1052) ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
  LABEL_24:
    if ( v9 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1044) && v41 == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1048) && v42 == v3 ) /*0x50dc84*/
    {
      result = *(unsigned int *)&this->ptr_44.__pad_C[12]; /*0x50dc86*/
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
  v37 = *(unsigned int *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dcd9*/
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
  v37 = *(unsigned int *)&stru_87F5F0.__pad_58[676]; /*0x50dd3e*/
  v38 = *(unsigned int *)&stru_87F5F0.__pad_58[680]; /*0x50dd51*/
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
  v37 = *(unsigned int *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dda6*/
  v38 = 2 * *(unsigned int *)&stru_87F5F0.__pad_58[680]; /*0x50ddc2*/
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
  v38 = *(unsigned int *)&stru_87F5F0.__pad_58[680]; /*0x50de1d*/
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
                *((unsigned int *)this + 22396) = 3;
      else
                *((unsigned int *)this + 22396) = 2;
    }
    else
    {
            *((unsigned int *)this + 22396) = 1;
    }
  }
  else
  {
        *((unsigned int *)this + 22396) = 0;
  }
    result = *((unsigned int *)this + 22396);
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

    v2 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)this + 156))(this);
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

    if ( a3 && !*((unsigned int *)this + 164) && *((unsigned char *)this + 756) )
    MapClass::LoadFileData(); /*0x544c3f*/
    v4 = (unsigned int *)(*(int (**)(unsigned int *))(*(char *)this + 624))(this);
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

    if ( *(unsigned short *)this == 0xFFFF && !*((unsigned char *)this + 16) )
  {
        CCFileClass::Construct(v3, *((unsigned int *)this + 8));
    v2 = CCFileClass::ReadEntireFile(&v3); /*0x69e0b4*/
    if ( v2 ) /*0x69e0bb*/
    {
            *((unsigned int *)this + 12) = EntireFile;
            *((unsigned char *)this + 16) = 1;
    }
    *(unsigned int *)v3.CDFileClass = (void*)&CCFileClass_vftable; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    *(unsigned int *)v3.CDFileClass = &off_7E1668; /*0x69e0e1*/
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
    Power::TimerProcess(aP1);
  Checksummer::Add_double((Checksummer *)aP1, this->armorMultiplier[0], this->armorMultiplier[1]); /*0x70c29e*/
  Checksummer::Add_double((Checksummer *)aP1, this->firepowerMultiplier[0], this->firepowerMultiplier[1]); /*0x70c2b3*/
  v3 = this->idleActionTimer[0]; /*0x70c2b8*/
  v4 = this->idleActionTimer[2]; /*0x70c2be*/
  if ( v3 != -1 ) /*0x70c2c7*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v3 >= v4 ) /*0x70c2d3*/
      v4 = 0; /*0x70c2d9*/
    else
      v4 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v3; /*0x70c2d5*/
  }
  Power::TimerProcess(v4); /*0x70c2de*/
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
  v5 = this->cloakDelayTimer[0]; /*0x70c2ff*/
  v6 = this->cloakDelayTimer[2]; /*0x70c305*/
  if ( v5 != -1 ) /*0x70c30e*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v5 >= v6 ) /*0x70c31a*/
      v6 = 0; /*0x70c320*/
    else
      v6 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v5; /*0x70c31c*/
  }
  Power::TimerProcess(v6); /*0x70c325*/
  Checksummer::Add_float((Checksummer *)aP1, IDA_LODWORD(this->warpFactor)); /*0x70c333*/
    LOBYTE(v3) = *((unsigned char *)this + 2368);
  Power::FlagProcess((Power *)aP1, v7); /*0x70c341*/
    Power::TimerProcess(aP1);
  Checksummer::Add_float((Checksummer *)aP1, IDA_LODWORD(this->pitchAngle)); /*0x70c35d*/
  v8 = this->diskLaserTimer[0]; /*0x70c362*/
  v9 = this->diskLaserTimer[2]; /*0x70c368*/
  if ( v8 != -1 ) /*0x70c371*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v8 >= v9 ) /*0x70c37d*/
      v9 = 0; /*0x70c383*/
    else
      v9 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v8; /*0x70c37f*/
  }
  Power::TimerProcess(v9); /*0x70c388*/
    Power::TimerProcess(aP1);
  v10 = this->reloadTimer[0]; /*0x70c39b*/
  v11 = this->reloadTimer[2]; /*0x70c3a1*/
  if ( v10 != -1 ) /*0x70c3aa*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v10 >= v11 ) /*0x70c3b6*/
      v11 = 0; /*0x70c3bc*/
    else
      v11 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v10; /*0x70c3b8*/
  }
  Power::TimerProcess(v11); /*0x70c3c1*/
    Power::TimerProcess(aP1);
  Checksummer::Add_float((Checksummer *)aP1, (int)this->railgunParticles_2); /*0x70c3dd*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->auxParticles1); /*0x70c3eb*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->auxParticles2); /*0x70c3f9*/
  Checksummer::Add_float((Checksummer *)aP1, (int)this->firingParticles); /*0x70c407*/
    LOBYTE(v4) = *((unsigned char *)this + 3892);
  v13 = Power::FlagProcess((Power *)aP1, v12); /*0x70c415*/
    LOBYTE(v5) = *((unsigned char *)this + 3900);
  Power::FlagProcess((Power *)aP1, v13); /*0x70c423*/
    LOBYTE(v6) = *((unsigned char *)this + 3904);
  Power::FlagProcess((Power *)aP1, v14); /*0x70c431*/
    LOBYTE(v7) = *((unsigned char *)this + 3908);
  v16 = Power::FlagProcess((Power *)aP1, v15); /*0x70c43f*/
    LOBYTE(v8) = *((unsigned char *)this + 3912);
  Power::FlagProcess((Power *)aP1, v16); /*0x70c44d*/
    LOBYTE(v9) = *((unsigned char *)this + 3916);
  Power::FlagProcess((Power *)aP1, v17); /*0x70c45b*/
    LOBYTE(v10) = *((unsigned char *)this + 3920);
  v19 = Power::FlagProcess((Power *)aP1, v18); /*0x70c469*/
    LOBYTE(v11) = *((unsigned char *)this + 3924);
  Power::FlagProcess((Power *)aP1, v19); /*0x70c477*/
    LOBYTE(v12) = *((unsigned char *)this + 4192);
  Power::FlagProcess((Power *)aP1, v20); /*0x70c485*/
    LOBYTE(v13) = *((unsigned char *)this + 4196);
  Power::FlagProcess((Power *)aP1, v21); /*0x70c493*/
  v22 = *(unsigned int *)&dword_A8B238; /*0x70c498*/
  if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x70c4a4*/
  {
        LOBYTE(v22) = *((unsigned char *)this + 4200);
    Power::FlagProcess((Power *)aP1, v22); /*0x70c4af*/
        LOBYTE(v15) = *((unsigned char *)this + 4204);
    Power::FlagProcess((Power *)aP1, v23); /*0x70c4bd*/
        LOBYTE(v16) = *((unsigned char *)this + 4208);
    v22 = Power::FlagProcess((Power *)aP1, v24); /*0x70c4cb*/
  }
    LOBYTE(v22) = *((unsigned char *)this + 4212);
  Power::FlagProcess((Power *)aP1, v22); /*0x70c4d9*/
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    LOBYTE(v17) = *((unsigned char *)this + 4224);
  Power::FinalizeDrain((Power *)aP1, v25); /*0x70c515*/
    v18 = *((unsigned int *)this + 4512);
  Power::TimerProcess(v26); /*0x70c523*/
  for ( i = 0; i < v26; ++i ) /*0x70c52c*/
  {
    v35 = *(Checksummer **)(this->currentTargetThreatValues[1] + 4 * i); /*0x70c543*/
        v33 = (AbstractClass *)(*(unsigned int *)(*((unsigned int *)this + 4464) + 4 * i) + 4);
    v28 = (*(int (__stdcall **)(int))(*(unsigned int *)v33 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(v28); /*0x70c550*/
    Power::TimerProcess((int)v35); /*0x70c55c*/
  }
    v20 = *((unsigned int *)this + 4608);
  result = Power::TimerProcess(v29); /*0x70c56f*/
  for ( j = 0; j < v29; ++j ) /*0x70c578*/
  {
        v34 = (AbstractClass *)(*(unsigned int *)(*((unsigned int *)this + 4560) + 4 * j) + 4);
    v32 = (*(int (__stdcall **)(int))(*(unsigned int *)v34 + 16))(v34); /*0x70c589*/
    result = Power::TimerProcess(v32); /*0x70c58f*/
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
