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

// 0x47D2B0
namespace gamemd {
void House::AnnounceUpgrade(IUnknown * aP1)
{
  int16_t *v3; // edi
  unsigned char *v4; // ebx
  int v5; // ecx
  void * v6;
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
  IUnknown * v18;
  char v19; // al
  int16_t v20; // cx
  int16_t v21; // ax
  int16_t v22; // cx
  int16_t v23; // cx
  int16_t v24; // cx
  int16_t v25; // cx
  unsigned char *v26; // eax
  void * v27;
  int16_t v28; // ax
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // eax
  void ** v33;
  int v34; // ebx
  unsigned int *v35; // eax
  void ** v36;
  int v37; // ecx
  void ** v38;
  void **v39; // eax
  IUnknown * v40;
  void *v41; // ecx
  unsigned short *v42; // ebx
  int v43; // eax
  int v44; // eax
  int16_t v45; // dx
  int16_t v46; // cx
  int16_t v47; // dx
  int16_t v48; // dx
  int16_t v49; // dx
  int16_t v50; // dx
  int v51; // eax
  unsigned char *v52; // eax
  int v53; // [esp-8h] [ebp-50h]
  IUnknown * v54;
  int v57; // [esp+1Ch] [ebp-2Ch] BYREF
  char v58[4]; // [esp+20h] [ebp-28h] BYREF
  int v59[5]; // [esp+24h] [ebp-24h] BYREF
  int v60; // [esp+38h] [ebp-10h]
  char v61[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( (void *)this == &g_CellClassArray ) /*0x47d2bf*/
    return; /*0x47d2bf*/
  v3 = (int16_t *)(&this->u32_C6); /*0x47d2c5*/
  v4 = (unsigned char *)(dword_87F850 + 4 * CellToTileIndexMap(&this->u32_C6)); /*0x47d2da*/
  v4 = v4; /*0x47d2e2*/
  v5 = dword_87F858 + 10 * CellToTileIndexMap(&this->u32_C6); /*0x47d2f3*/
  v6 = this->ptr_44; /*0x47d2f6*/
  v5 = v5; /*0x47d2fc*/
  if ( v6 != -1 ) /*0x47d300*/
  {
    v7 = *((unsigned int *)g_BuildingTypeClass_Array + v6); /*0x47d30c*/
    v8 = *(unsigned int *)(v7 + 664); /*0x47d30f*/
    this->u32_EC = v8; /*0x47d318*/
    if ( v8 == 4 || v8 == 9 || *(unsigned char *)(v7 + 684) ) /*0x47d325*/
    {
      v9 = this->q038; /*0x47d333*/
      if ( v9 != 0xFFFF && v9 < g_TechnoClassCount ) /*0x47d343*/
        this->u8_11C = HouseClass::GetCameoTypeIndex(*(uint8_t *)(&this->u32_702)); /*0x47d35e*/
      if ( this->u8_11C && *(unsigned char *)(v7 + 681) ) /*0x47d36e*/
      {
        this->ptr_44 = -1; /*0x47d378*/
        this->u8_11E = 0; /*0x47d37f*/
      }
      if ( *((unsigned char *)g_RulesClass_Instance + 1636) ) /*0x47d38b*/
      {
        v10 = this->u16_26; /*0x47d39c*/
        IDA_LOWORD(aP1) = *v3; /*0x47d3a0*/
        IDA_HIWORD(aP1) = v10 - 1; /*0x47d3ab*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47d3d6*/
          goto LABEL_19; /*0x47d3d6*/
        v11 = *v3 - 1; /*0x47d3e3*/
        IDA_HIWORD(aP1) = this->u16_26; /*0x47d3e5*/
        IDA_LOWORD(aP1) = v11; /*0x47d3ea*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47d419*/
          goto LABEL_19; /*0x47d419*/
        v12 = this->u16_26 + 2; /*0x47d42a*/
        IDA_LOWORD(aP1) = *v3 + 2; /*0x47d42e*/
        IDA_HIWORD(aP1) = v12; /*0x47d437*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47d462*/
          goto LABEL_19; /*0x47d462*/
        v13 = this->u16_26 + 1; /*0x47d471*/
        IDA_LOWORD(aP1) = *v3 + 1; /*0x47d473*/
        IDA_HIWORD(aP1) = v13; /*0x47d47c*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) /*0x47d52d*/
          || (v14 = this->u16_26 + 1,
              IDA_LOWORD(aP1) = *v3 - 1,
              IDA_HIWORD(aP1) = v14,
              this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283))
          || (v15 = this->u16_26 - 1,
              IDA_LOWORD(aP1) = *v3 + 1,
              IDA_HIWORD(aP1) = v15,
              this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283)) )
        {
  LABEL_19:
          if ( *((unsigned char *)g_RulesClass_Instance + 1636) == 2 ) /*0x47d53c*/
            this->u32_EC = 3; /*0x47d53e*/
        }
      }
      CellClass::DetermineTileType(); /*0x47d54a*/
      BuildingClass::DetermineVisualState(); /*0x47d551*/
      v16 = v5; /*0x47d55c*/
      v4[1] = this->u32_11B; /*0x47d560*/
      *(unsigned char *)(v16 + 8) = this->u32_11B; /*0x47d569*/
      *v4 = this->u8_4C; /*0x47d571*/
      return; /*0x47d578*/
    }
  }
  if ( this->q038 >= g_TechnoClassCount ) /*0x47d58b*/
    this->q038 = 0xFFFF; /*0x47d58d*/
  v17 = this->q038; /*0x47d590*/
  if ( v17 != 0xFFFF ) /*0x47d595*/
  {
    v18 = (IUnknown *)((unsigned int)((IUnknown *)(*((unsigned int *)g_FrameCounter + v17))));
    v53 = (unsigned int)(*(uint8_t *)(&this->u32_702));
    v54 = (IUnknown *)(v18);
    v19 = House::LoadMapFileData(v53, 0); /*0x47d5b5*/
    if ( this->u8_11C ) /*0x47d5ba*/
    {
      if ( v19 ) /*0x47d5c6*/
      {
  LABEL_40:
        this->u8_11C = HouseClass::GetCameoTypeIndex(*(uint8_t *)(&this->u32_702)); /*0x47d7fb*/
        CellClass::DetermineTileType(); /*0x47d813*/
        v27 = this->ptr_44; /*0x47d818*/
        if ( v27 == -1 ) /*0x47d81e*/
          goto LABEL_47; /*0x47d81e*/
        if ( FindBuildingByTiberiumType(v27) != -1 ) /*0x47d828*/
        {
          if ( this->u8_11C <= 4u ) /*0x47d831*/
          {
            if ( !*(unsigned int *)(*((unsigned int *)g_BuildingTypeClass_Array + this->ptr_44) + 664) ) /*0x47d864*/
              this->u32_EC = 5; /*0x47d86e*/
          }
          else
          {
            this->u32_EC = House::LookupObject(*(uint8_t *)(&this->u32_702)); /*0x47d843*/
            this->ptr_44 = -1; /*0x47d849*/
            this->u8_11E = 0; /*0x47d850*/
          }
          goto LABEL_48; /*0x47d857*/
        }
        if ( !*(unsigned char *)(*((unsigned int *)g_BuildingTypeClass_Array + this->ptr_44) + 684) ) /*0x47d885*/
  LABEL_47:
          this->u32_EC = House::LookupObject(*(uint8_t *)(&this->u32_702)); /*0x47d8aa*/
  LABEL_48:
        if ( this->u32_EC == 10 ) /*0x47d8b7*/
        {
          v28 = this->u32_116; /*0x47d8bd*/
          if ( v28 < 0 || v28 >= g_UnitTypeCount ) /*0x47d8d2*/
          {
            if ( (v29 = this->q038, v30 = dword_AA1054, v29 >= dword_AA1054) && v29 <= dword_AA1054 + 3 /*0x47d919*/
              || (v30 = dword_ABB108, v29 >= dword_ABB108) && v29 <= dword_ABB108 + 3
              || (v30 = dword_AA10B4, v29 >= dword_AA10B4) && v29 <= dword_AA10B4 + 3
              || (v30 = dword_ABAD2C, v29 >= dword_ABAD2C) && v29 <= dword_ABAD2C + 3 )
            {
              v31 = v29 - v30; /*0x47d91d*/
              if ( v29 - v30 != -1 ) /*0x47d922*/
              {
                if ( operator new(0x1C4u) ) /*0x47d929*/
                  TubeClass::Construct(&this->q024, dword_81CC20[v31]); /*0x47d940*/
              }
            }
          }
        }
        if ( aP1 != -1 ) /*0x47d94c*/
          this->u32_11B = aP1; /*0x47d94e*/
        TechnoClass::GetTileAnimationData(*(uint8_t *)(&this->u32_702), v58, &v57); /*0x47d969*/
        v32 = this->q140; /*0x47d988*/
        this->u8_11D = (v57 - 30) / 15; /*0x47d993*/
        if ( (v32 & 0x20000) == 0 /*0x47d9bc*/
          && v18->qB20 != -1
          && *(unsigned int *)(v18 + 724) == *(uint8_t *)(&this->u32_702) )
        {
          v33 = (void **)((int)((void **)(*v3)));
          v34 = (void **)(*(int16_t *)(&this->u32_C8));
          v60 = (void **)(dword_89E7C0 * this->u32_11B);
          v35 = (void **)((unsigned int *)Matrix3x4::TransformCell(v61, v54 + 716));
          v36 = (void **)((int)((void **)(v35[1])));
          v37 = (void **)((v33 << 8) + 128 + *v35);
          v38 = (void **)((int)((void **)(v60 + v35[2])));
          v59[0] = (int)((void **)(v37));
          v59[1] = (int)((void **)((v34 << 8) + 128 + v36));
          v59[2] = (int)((void **)(v38));
          v39 = (void *)operator new(0x1C8u); /*0x47da2b*/
          if ( v39 ) /*0x47da35*/
            v40 = AnimClass::ctor( /*0x47da5f*/
                    v39,
                    *((void **)g_AnimTypeCount + v54->qB20),
                    (int)v59,
                    0,
                    -1,
                    (void *)0x1600,
                    0,
                    0);
          else
            v40 = 0; /*0x47da66*/
          v18 = v54; /*0x47da6c*/
          v41 = v54->q2D8; /*0x47da6e*/
          *((unsigned char *)v40 + 406) = 1; /*0x47da74*/
          v40[64] = v41; /*0x47da7b*/
          *((unsigned char *)v40 + 407) = 1; /*0x47da81*/
          this->q140 |= 0x20000u; /*0x47da88*/
        }
        if ( *(unsigned char *)(v18 + 737) ) /*0x47da92*/
        {
          v42 = (unsigned short *)InitCoordinateOffsetsMap(v18); /*0x47daa7*/
          if ( v42 ) /*0x47daab*/
          {
            while ( (*v42 != 0x7FFF || v42[1] != 0x7FFF) && *(unsigned int *)v42 != dword_89E748 ) /*0x47dacf*/
            {
              IDA_LOWORD(aP1) = *v3 + *v42; /*0x47dae6*/
              IDA_HIWORD(aP1) = v42[1] + this->u16_26; /*0x47daf3*/
              v54 = aP1; /*0x47dafc*/
              v43 = CellCoord::To_CellObj(&v54); /*0x47db05*/
              v42 += 2; /*0x47db1b*/
              *(unsigned int *)(v43 + 320) |= 0x10000u; /*0x47db1e*/
            }
          }
        }
        goto LABEL_82; /*0x47dacf*/
      }
      v19 = House::LoadMapFileData(*(uint8_t *)(&this->u32_702), 1); /*0x47d5d9*/
    }
    if ( !v19 ) /*0x47d5e0*/
    {
      this->q038 = 0xFFFF; /*0x47d5e6*/
      this->u32_11A = 0; /*0x47d5e9*/
      this->u32_EC = 0; /*0x47d5ef*/
      this->u8_11C = 0; /*0x47d5f9*/
      if ( *((unsigned char *)g_RulesClass_Instance + 1636) ) /*0x47d605*/
      {
        v20 = this->u16_26 - 1; /*0x47d61a*/
        IDA_LOWORD(aP1) = *v3; /*0x47d61c*/
        IDA_HIWORD(aP1) = v20; /*0x47d621*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47d650*/
          goto LABEL_98; /*0x47d650*/
        v21 = *v3 - 1; /*0x47d65d*/
        IDA_HIWORD(aP1) = this->u16_26; /*0x47d65f*/
        IDA_LOWORD(aP1) = v21; /*0x47d664*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47d693*/
          goto LABEL_98; /*0x47d693*/
        v22 = this->u16_26; /*0x47d69c*/
        IDA_LOWORD(aP1) = *v3 + 2; /*0x47d6a8*/
        IDA_HIWORD(aP1) = v22 + 2; /*0x47d6ad*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47d6dc*/
          goto LABEL_98; /*0x47d6dc*/
        v23 = this->u16_26 + 1; /*0x47d6eb*/
        IDA_LOWORD(aP1) = *v3 + 1; /*0x47d6ed*/
        IDA_HIWORD(aP1) = v23; /*0x47d6f2*/
        if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) /*0x47d7a7*/
          || (v24 = this->u16_26 + 1,
              IDA_LOWORD(aP1) = *v3 - 1,
              IDA_HIWORD(aP1) = v24,
              this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283))
          || (v25 = this->u16_26 - 1,
              IDA_LOWORD(aP1) = *v3 + 1,
              IDA_HIWORD(aP1) = v25,
              this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283)) )
        {
  LABEL_98:
          if ( *((unsigned char *)g_RulesClass_Instance + 1636) == 2 && !this->u32_EC ) /*0x47d7b7*/
            this->u32_EC = 3; /*0x47d7c1*/
        }
      }
      BuildingClass::DetermineVisualState(); /*0x47d7cd*/
      v26 = v4; /*0x47d7d2*/
      v4[1] = this->u32_11B; /*0x47d7dd*/
      *(unsigned char *)(v5 + 8) = this->u32_11B; /*0x47d7ea*/
      *v26 = this->u8_4C; /*0x47d7f2*/
      return; /*0x47d7f8*/
    }
    goto LABEL_40; /*0x47d5e0*/
  }
  if ( v6 == -1 || (v44 = *((unsigned int *)g_BuildingTypeClass_Array + v6), *(unsigned char *)(v44 + 684)) ) /*0x47db30*/
    this->u32_EC = 0; /*0x47db48*/
  else
    this->u32_EC = *(unsigned int *)(v44 + 664); /*0x47db40*/
  this->u8_11C = 0; /*0x47db52*/
  LABEL_82:
  if ( *((unsigned char *)g_RulesClass_Instance + 1636) ) /*0x47db5e*/
  {
    v45 = this->u16_26; /*0x47db6f*/
    IDA_LOWORD(aP1) = *v3; /*0x47db73*/
    IDA_HIWORD(aP1) = v45 - 1; /*0x47db7e*/
    if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47dba9*/
      goto LABEL_89; /*0x47dba9*/
    v46 = *v3 - 1; /*0x47dbb6*/
    IDA_HIWORD(aP1) = this->u16_26; /*0x47dbb8*/
    IDA_LOWORD(aP1) = v46; /*0x47dbbd*/
    if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47dbec*/
      goto LABEL_89; /*0x47dbec*/
    v47 = this->u16_26 + 2; /*0x47dbfd*/
    IDA_LOWORD(aP1) = *v3 + 2; /*0x47dc01*/
    IDA_HIWORD(aP1) = v47; /*0x47dc0a*/
    if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) ) /*0x47dc35*/
      goto LABEL_89; /*0x47dc35*/
    v48 = this->u16_26 + 1; /*0x47dc44*/
    IDA_LOWORD(aP1) = *v3 + 1; /*0x47dc46*/
    IDA_HIWORD(aP1) = v48; /*0x47dc4f*/
    if ( this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283) /*0x47dd00*/
      || (v49 = this->u16_26 + 1,
          IDA_LOWORD(aP1) = *v3 - 1,
          IDA_HIWORD(aP1) = v49,
          this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283))
      || (v50 = this->u16_26 - 1,
          IDA_LOWORD(aP1) = *v3 + 1,
          IDA_HIWORD(aP1) = v50,
          this->u32_11B + 4 <= *(char *)(CellCoord::To_CellObj(&aP1) + 283)) )
    {
  LABEL_89:
      if ( *((unsigned char *)g_RulesClass_Instance + 1636) == 2 ) /*0x47dd0f*/
      {
        v51 = this->u32_EC; /*0x47dd11*/
        if ( !v51 || v51 == 2 || v51 == 6 || v51 == 8 ) /*0x47dd28*/
          this->u32_EC = 3; /*0x47dd2a*/
      }
    }
  }
  BuildingClass::DetermineVisualState(); /*0x47dd36*/
  v52 = v4; /*0x47dd3b*/
  v4[1] = this->u32_11B; /*0x47dd45*/
  *v52 = this->u8_4C; /*0x47dd4b*/
  *(unsigned char *)(v5 + 8) = this->u32_11B; /*0x47dd57*/
}
}
// 0x47FB90
namespace gamemd {
unsigned int * House::GetStartCoords(IUnknown * aP1)
{
  int v3; // ecx
  unsigned char *v4; // ebp
  int v5; // eax
  unsigned int *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // kr08_4
  int v12; // kr00_4
  unsigned int *v13; // eax
  int v14; // esi
  int v16; // edi
  int v17; // esi
  unsigned int *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // [esp+10h] [ebp-20h] BYREF
  int v24; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  unsigned int v27[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = this->q044; /*0x47fb99*/
  if ( v3 == -1 ) /*0x47fb9f*/
    goto LABEL_13; /*0x47fb9f*/
  v24 = *(uint8_t *)(&this->q0706); /*0x47fbb5*/
  v4 = (unsigned char *)*((unsigned int *)g_BuildingTypeClass_Array + v3); /*0x47fbb9*/
  v23 = 0; /*0x47fbbc*/
  if ( v4[681] ) /*0x47fbc0*/
  {
    v5 = FindBuildingByTiberiumType(v3); /*0x47fbce*/
    if ( v5 == -1 ) /*0x47fbd6*/
      goto LABEL_12; /*0x47fbd6*/
    v6 = (unsigned int *)*((unsigned int *)BuildingClass_InstanceArray + v5); /*0x47fbe2*/
    if ( this->u8_11C ) /*0x47fbe5*/
    {
      v7 = *((unsigned int *)g_BuildingTypeClass_Array /*0x47fc36*/
           + v6[58]
           + *(unsigned int *)(v6[56] + 660)
           + v6[59] / 4 * (*(uint8_t *)(&this->q0704) - 1)
           + *(int16_t *)(&this->q00C6) * *(int16_t *)(&this->q00C8) % (v6[59] / 4));
      v23 = (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 156))(v7); /*0x47fc41*/
      goto LABEL_12; /*0x47fc47*/
    }
    v8 = *((unsigned int *)g_BuildingTypeClass_Array /*0x47fc6f*/
         + *(unsigned int *)(v6[56] + 660)
         + *(int16_t *)(&this->q00C6) * *(int16_t *)(&this->q00C8) % v6[58]);
    v9 = (*(int (__thiscall **)(int))(*(unsigned int *)v8 + 156))(v8); /*0x47fc74*/
    goto LABEL_11; /*0x47fc7a*/
  }
  if ( !v4[692] ) /*0x47fc84*/
  {
    v9 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v4 + 156))(v4); /*0x47fca7*/
  LABEL_11:
    v23 = v9; /*0x47fcad*/
    goto LABEL_12; /*0x47fcad*/
  }
  v10 = this->q040; /*0x47fc86*/
  v23 = 0; /*0x47fc89*/
  if ( v10 ) /*0x47fc8f*/
    BuildingClass::GetPlacementCoords(&v23, &v24); /*0x47fc9b*/
  LABEL_12:
  v11 = (*(int16_t *)(&this->q00C6) << 8) + 128; /*0x47fcb1*/
  v12 = (*(int16_t *)(&this->q00C8) << 8) + 128; /*0x47fce0*/
  v27[2] = 0; /*0x47fce2*/
  v27[0] = (v11 / 256) << 8; /*0x47fd02*/
  v27[1] = (v12 / 256) << 8; /*0x47fd06*/
  Coord::To_Screen(v27, &v25); /*0x47fd0a*/
  v13 = (unsigned int *)BuildingClass::CalcDrawPos(v27); /*0x47fd16*/
  v25 += *v13; /*0x47fd27*/
  v14 = v13[1] + v14; /*0x47fd31*/
  v25 -= 30; /*0x47fd33*/
  v14 = v14; /*0x47fd3d*/
  if ( !v23 ) /*0x47fd41*/
  {
  LABEL_13:
    *(unsigned int *)aP1 = 0; /*0x47fd43*/
    aP1[1] = 0; /*0x47fd53*/
    aP1[2] = 0; /*0x47fd56*/
    aP1[3] = 0; /*0x47fd59*/
    return aP1; /*0x47fd63*/
  }
  House::Constructor(); /*0x47fd66*/
  if ( v4[682] ) /*0x47fd6b*/
    v24 = 0; /*0x47fd75*/
  v16 = v25 - v23->vtable3 / 2; /*0x47fd93*/
  v17 = v14 - v23->vtable2 / 2; /*0x47fd9f*/
  v18 = (unsigned int *)Building::GetFoundationSize(v27, v24); /*0x47fda7*/
  v19 = v16 + *v18; /*0x47fdb1*/
  v20 = v17 + v18[1]; /*0x47fdb7*/
  v21 = v18[2]; /*0x47fdb9*/
  v22 = v18[3]; /*0x47fdbc*/
  *(unsigned int *)aP1 = v19; /*0x47fdc1*/
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
  v3 = this->q5640; /*0x4fd50f*/
  v4 = this->u32_5648; /*0x4fd515*/
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
      IDA_LODWORD(v8) = (*(int (__thiscall **)(void *, unsigned int *))(*(unsigned int *)v6 + 72))(v6, v39); /*0x4fd5b4*/
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
                  v16 = (int *)(*(int (__thiscall **)(void *, unsigned char *))(*(unsigned int *)v15 + 72))(v15, v40); /*0x4fd69b*/
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
  v18 = this->u32_5600; /*0x4fd723*/
  if ( v18 != -1 ) /*0x4fd72c*/
  {
    v19 = *(unsigned int *)&HouseClass_Array->gap0[4 * v18]; /*0x4fd734*/
    if ( v19->defeated ) /*0x4fd737*/
    {
      v20 = this->u32_5614; /*0x4fd741*/
      v21 = 0; /*0x4fd747*/
      if ( v20 > 0 ) /*0x4fd74b*/
      {
        v22 = *(unsigned int **)(&this->u32_22684); /*0x4fd753*/
        while ( *v22 != v19 ) /*0x4fd757*/
        {
          ++v21; /*0x4fd759*/
          v22 += 2; /*0x4fd75a*/
          if ( v21 >= v20 ) /*0x4fd75f*/
            goto LABEL_37; /*0x4fd75f*/
        }
        v33 = -*(unsigned int *)(this->u32_5608 + 8 * v21 + 4); /*0x4fd76a*/
        UpdateHouseClassAnger(v33, v33, v19); /*0x4fd76d*/
      }
  LABEL_37:
      this->u32_5600 = -1; /*0x4fd772*/
    }
  }
  if ( g_GameMode_Current[0] || this->u32_24C >= g_RulesClass_Instance[1].AttackingAircraftSightRange ) /*0x4fd797*/
    HouseClass::UpdateAITryFireSW(); /*0x4fd79b*/
  v23 = this->u32_250; /*0x4fd7a0*/
  if ( v23 == 4 ) /*0x4fd7ae*/
  {
    (*(void (__stdcall **)(unsigned int))(this->q024 + 52))(&this->u32_C6); /*0x4fd7b7*/
    (*(void (__stdcall **)(unsigned int))(this->q024 + 56))(&this->u32_C6); /*0x4fd7bd*/
  }
  else
  {
    if ( !v23 && (*(int (__stdcall **)(unsigned int))(this->q024 + 24))(&this->u32_C6) < 25 ) /*0x4fd7d8*/
      this->u32_250 = 1; /*0x4fd7da*/
    if ( this->u32_250 == 1 /*0x4fd7fa*/
      && (*(int (__stdcall **)(unsigned int))(this->q024 + 24))(&this->u32_C6) >= 25 )
    {
      this->u32_250 = 0; /*0x4fd7fc*/
    }
    if ( this->u32_250 != 3 ) /*0x4fd808*/
      goto LABEL_53; /*0x4fd808*/
    if ( this->u32_54D8 + 900 < (int)g_CurrentFrame ) /*0x4fd81d*/
      this->u32_250 = 0; /*0x4fd81f*/
    if ( this->u32_250 != 3 ) /*0x4fd82b*/
    {
  LABEL_53:
      if ( this->u32_54D8 + 900 > (int)g_CurrentFrame ) /*0x4fd840*/
        this->u32_250 = 3; /*0x4fd842*/
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
      if ( this->u32_250 == 3 ) /*0x4fd87f*/
        goto LABEL_70; /*0x4fd87f*/
      v25 = this->q078; /*0x4fd881*/
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
                (*(void (__stdcall **)(unsigned int))(this->q024 + 52))(&this->u32_C6); /*0x4fd8fe*/
                (*(void (__stdcall **)(unsigned int))(this->q024 + 56))(&this->u32_C6); /*0x4fd904*/
              }
            }
          }
        }
        return Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 1, 7) + 105; /*0x4fd911*/
      }
    }
    v27 = *(int **)(&this->q0288); /*0x4fd88a*/
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

  v0 = g_SelectionManager; /*0x501a21*/
  if ( g_SelectionManager ) /*0x501a2a*/
  {
    v1 = 0; /*0x501a2c*/
    if ( (int)g_SelectionManager > 0 ) /*0x501a30*/
    {
      do /*0x501a92*/
      {
        v2 = *((unsigned int *)g_ObjectClass_CurrentCount + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v2 + 44))(*((unsigned int *)g_ObjectClass_CurrentCount + v1)) == 6
          && !*(unsigned char *)(v2 + 1050)
          && *(int *)(*(unsigned int *)(v2 + 1312) + 3808) > 0
          && ((1 << *(unsigned int *)(*((unsigned int *)HouseClass_Player + 13) + 184)) & *(unsigned int *)(v2 + 528)) != 0 )
        {
          (*(void (__thiscall **)(int, int))(*(unsigned int *)v2 + 292))(v2, 2); /*0x501a89*/
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
  if ( g_GameMode_Current[0] ) /*0x50b6f7*/
    return this == HouseClass_Player; /*0x50b720*/
  return this->u32_1EC || this->u32_1ED; /*0x50b70f*/
}
}
// 0x50B730
namespace gamemd {
int House::IsCurrentPlayer()
{
  int result; // eax

  result = g_GameMode_Current[0]; /*0x50b730*/
  IDA_LOBYTE(result) = this->q1EC; /*0x50b737*/
  if ( !g_GameMode_Current[0] ) /*0x50b73d*/
    IDA_LOBYTE(result) = (unsigned char)result || this->q7B4; /*0x50b750*/
  return result; /*0x50b74f*/
}
}
// 0x50DB00
namespace gamemd {
AbstractClass * * House::ChooseHouseEnemy(BuildingClass * aP1)
{
  int v2; // edx
  int v3; // ebx
  int *v4; // esi
  int v5; // edi
  int v6; // ebp
  int *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int *v11; // ecx
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
  int v33; // [esp+20h] [ebp-24h] BYREF
  int v34; // [esp+24h] [ebp-20h]
  unsigned int v35[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v36; // [esp+38h] [ebp-Ch] BYREF
  int v37; // [esp+3Ch] [ebp-8h]
  int v38; // [esp+40h] [ebp-4h]
  int v39; // [esp+48h] [ebp+4h]
  int v40; // [esp+48h] [ebp+4h]

  v2 = g_ControlGroupLimit; /*0x50db03*/
  v3 = g_ControlGroupConfig; /*0x50db0a*/
  v4 = this; /*0x50db12*/
  v5 = g_ControlGroupPool; /*0x50db19*/
  v36 = g_ControlGroupPool; /*0x50db25*/
  v37 = g_ControlGroupConfig; /*0x50db29*/
  v38 = g_ControlGroupLimit; /*0x50db2d*/
  v6 = g_ControlGroupLimit; /*0x50db31*/
  if ( aP1 && *(unsigned char *)(aP1 + 979) && *(unsigned int *)(*(unsigned int *)(aP1 + 1312) + 3768) == 7 ) /*0x50db4c*/
  {
    v7 = (int *)(*(int (__stdcall **)(unsigned int *))(*(unsigned int *)aP1 + 72))(v35); /*0x50db58*/
    v8 = *v7; /*0x50db5a*/
    v36 = *v7; /*0x50db5c*/
    v37 = v7[1]; /*0x50db63*/
    v38 = v7[2]; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !this->u32_2F0 || (v9 = 0, v39 = 0, this->q078 <= 0) ) /*0x50db8c*/
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
    v10 = *(unsigned int *)(v4->u32_6C + 4 * v9); /*0x50dba1*/
    if ( !v10 || *(unsigned char *)(v10 + 129) ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(unsigned char *)(*(unsigned int *)(v10 + 1312) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v5 == g_ControlGroupPool && v3 == g_ControlGroupConfig && v6 == v2 ) /*0x50dc06*/
    {
      v12 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v10 + 72))(v10, &v33); /*0x50dc11*/
      v5 = *v12; /*0x50dc14*/
      v3 = v12[1]; /*0x50dc16*/
      v6 = v12[2]; /*0x50dc19*/
    }
  LABEL_18:
    v9 = v39 + 1; /*0x50dc1c*/
    v39 = v9; /*0x50dc28*/
    if ( v9 >= this->q078 ) /*0x50dc2e*/
    {
      v8 = v36; /*0x50dc34*/
      v4 = this; /*0x50dc38*/
      goto LABEL_20; /*0x50dc38*/
    }
    v4 = this; /*0x50db94*/
    v2 = g_ControlGroupLimit; /*0x50db98*/
  }
  v11 = (int *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v10 + 72))(v10, v35); /*0x50dbce*/
  v8 = *v11; /*0x50dbd0*/
  v36 = *v11; /*0x50dbd2*/
  v37 = v11[1]; /*0x50dbd9*/
  v38 = v11[2]; /*0x50dbe0*/
  if ( !*(unsigned char *)(v10 + 979) ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  v4 = this; /*0x50dca9*/
  LABEL_20:
  if ( v8 == g_ControlGroupPool ) /*0x50dc40*/
  {
    v2 = g_ControlGroupLimit; /*0x50dc4e*/
    if ( v37 == g_ControlGroupConfig && v38 == g_ControlGroupLimit ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
  LABEL_24:
    if ( v8 == g_ControlGroupPool && v37 == g_ControlGroupConfig && v38 == v2 ) /*0x50dc84*/
    {
      result = v4->q577C; /*0x50dc86*/
      if ( result >= 0 ) /*0x50dc8e*/
      {
        if ( result > 3 ) /*0x50dc97*/
          return 0; /*0x50dca0*/
        return result; /*0x50dca6*/
      }
      return 0; /*0x50dede*/
    }
  }
  v14 = (int16_t *)Coord::To_Cell(&MapClass_Instance, &v36); /*0x50dcb9*/
  v15 = v14[18]; /*0x50dcbe*/
  v16 = v14[19]; /*0x50dcc2*/
  v33 = dword_87F8EC / 2; /*0x50dcd9*/
  v34 = 1; /*0x50dce3*/
  v17 = HexCoord::Convert(&MapClass_Instance, v35, &v33); /*0x50dceb*/
  v18 = v17[1]; /*0x50dcfd*/
  v33 = v15 - *v17; /*0x50dd00*/
  v34 = v16 - v18; /*0x50dd06*/
  v19 = Math::Sqrt((double)v33 * (double)v33 + (double)(v16 - v18) * (double)(v16 - v18)); /*0x50dd23*/
  v20 = Math::RoundToInt(v19); /*0x50dd3c*/
  v33 = dword_87F8EC; /*0x50dd3e*/
  v34 = dword_87F8F0; /*0x50dd51*/
  v21 = HexCoord::Convert(&MapClass_Instance, v35, &v33); /*0x50dd55*/
  v22 = v21[1]; /*0x50dd61*/
  v33 = v15 - *v21; /*0x50dd6c*/
  v34 = v16 - v22; /*0x50dd70*/
  v23 = Math::Sqrt((double)v33 * (double)v33 + (double)(v16 - v22) * (double)(v16 - v22)); /*0x50dd8d*/
  v24 = Math::RoundToInt(v23); /*0x50dd9a*/
  v33 = dword_87F8EC / 2; /*0x50dda6*/
  v34 = 2 * dword_87F8F0; /*0x50ddc2*/
  v25 = HexCoord::Convert(&MapClass_Instance, v35, &v33); /*0x50ddc6*/
  v26 = v25[1]; /*0x50ddd2*/
  v33 = v15 - *v25; /*0x50dddd*/
  v34 = v16 - v26; /*0x50dde1*/
  v27 = Math::Sqrt((double)v33 * (double)v33 + (double)(v16 - v26) * (double)(v16 - v26)); /*0x50ddfe*/
  v40 = Math::RoundToInt(v27); /*0x50de11*/
  v34 = dword_87F8F0; /*0x50de1d*/
  v33 = 0; /*0x50de28*/
  v28 = HexCoord::Convert(&MapClass_Instance, v35, &v33); /*0x50de30*/
  v29 = v28[1]; /*0x50de3e*/
  v33 = v15 - *v28; /*0x50de41*/
  v34 = v16 - v29; /*0x50de47*/
  v30 = Math::Sqrt((double)v33 * (double)v33 + (double)(v16 - v29) * (double)(v16 - v29)); /*0x50de64*/
  v31 = Math::RoundToInt(v30); /*0x50de6c*/
  if ( v20 > v24 || v20 > v40 || v20 > v31 ) /*0x50de7f*/
  {
    if ( v24 > v40 || v24 > v31 ) /*0x50de97*/
    {
      if ( v40 > v31 ) /*0x50deab*/
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
// 0x544BE0
namespace gamemd {
int House::LookupObject(int a2)
{
  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*(int (__thiscall **)(void *))(*(unsigned int *)((char *)&this->q264 + 12)))(this); /*0x544be2*/
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

  if ( a3 && !this->u32_A4 && *(unsigned char *)&this->u8_2F4 ) /*0x544c35*/
    MapClass::LoadFileData(); /*0x544c3f*/
  v4 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*&this->u32_9C))(this); /*0x544c48*/
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

  if ( *(unsigned short *)this == 0xFFFF && !*(unsigned char *)&this->q010 ) /*0x69e09c*/
  {
    CCFileClass::Construct(v3, this->q008); /*0x69e0ab*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v3); /*0x69e0b4*/
    if ( EntireFile ) /*0x69e0bb*/
    {
      this->u32_C = EntireFile; /*0x69e0bd*/
      *(unsigned char *)&this->q010 = 1; /*0x69e0c0*/
    }
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
  int v35; // [esp+14h] [ebp+4h]

  RadioClass::PowerDrainUpdate(aP1); /*0x70c27b*/
  Power::TimerProcess(this->controlGroup); /*0x70c289*/
  Checksummer::Add_double(this->alignmentPadding154, this->armorMultiplier); /*0x70c29e*/
  Checksummer::Add_double(this->q160, this->firepowerMultiplier); /*0x70c2b3*/
  v3 = this->q168; /*0x70c2b8*/
  v4 = this->q170; /*0x70c2be*/
  if ( v3 != -1 ) /*0x70c2c7*/
  {
    if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x70c2d3*/
      v4 = 0; /*0x70c2d9*/
    else
      v4 -= (int)g_CurrentFrame - v3; /*0x70c2d5*/
  }
  Power::TimerProcess(v4); /*0x70c2de*/
  Power::TimerProcess(this->displayProductionTo); /*0x70c2ec*/
  Power::TimerProcess(this->cloakState); /*0x70c2fa*/
  v5 = this->q240; /*0x70c2ff*/
  v6 = this->q248; /*0x70c305*/
  if ( v5 != -1 ) /*0x70c30e*/
  {
    if ( (int)g_CurrentFrame - v5 >= v6 ) /*0x70c31a*/
      v6 = 0; /*0x70c320*/
    else
      v6 -= (int)g_CurrentFrame - v5; /*0x70c31c*/
  }
  Power::TimerProcess(v6); /*0x70c325*/
  Checksummer::Add_float(this->q24C); /*0x70c333*/
  IDA_LOBYTE(v7) = this->isChronosphereImmune; /*0x70c338*/
  Power::FlagProcess(v7); /*0x70c341*/
  Power::TimerProcess(this->lastSightRange); /*0x70c34f*/
  Checksummer::Add_float(this->pitchAngle); /*0x70c35d*/
  v8 = this->diskLaserTimer; /*0x70c362*/
  v9 = this->q2F4; /*0x70c368*/
  if ( v8 != -1 ) /*0x70c371*/
  {
    if ( (int)g_CurrentFrame - v8 >= v9 ) /*0x70c37d*/
      v9 = 0; /*0x70c383*/
    else
      v9 -= (int)g_CurrentFrame - v8; /*0x70c37f*/
  }
  Power::TimerProcess(v9); /*0x70c388*/
  Power::TimerProcess(this->ammo); /*0x70c396*/
  v10 = this->reloadTimer; /*0x70c39b*/
  v11 = this->q204; /*0x70c3a1*/
  if ( v10 != -1 ) /*0x70c3aa*/
  {
    if ( (int)g_CurrentFrame - v10 >= v11 ) /*0x70c3b6*/
      v11 = 0; /*0x70c3bc*/
    else
      v11 -= (int)g_CurrentFrame - v10; /*0x70c3b8*/
  }
  Power::TimerProcess(v11); /*0x70c3c1*/
  Power::TimerProcess(this->unitValue); /*0x70c3cf*/
  Checksummer::Add_float(this->q328); /*0x70c3dd*/
  Checksummer::Add_float(this->auxParticles1); /*0x70c3eb*/
  Checksummer::Add_float(this->auxParticles2); /*0x70c3f9*/
  Checksummer::Add_float(this->firingParticles); /*0x70c407*/
  IDA_LOBYTE(v12) = this->q3CD; /*0x70c40c*/
  v13 = Power::FlagProcess(v12); /*0x70c415*/
  IDA_LOBYTE(v13) = this->q3CF; /*0x70c41a*/
  Power::FlagProcess(v13); /*0x70c423*/
  IDA_LOBYTE(v14) = this->isUseless; /*0x70c428*/
  Power::FlagProcess(v14); /*0x70c431*/
  IDA_LOBYTE(v15) = this->q3D1; /*0x70c436*/
  v16 = Power::FlagProcess(v15); /*0x70c43f*/
  IDA_LOBYTE(v16) = this->q3D2; /*0x70c444*/
  Power::FlagProcess(v16); /*0x70c44d*/
  IDA_LOBYTE(v17) = this->q3D3; /*0x70c452*/
  Power::FlagProcess(v17); /*0x70c45b*/
  IDA_LOBYTE(v18) = this->isALoaner; /*0x70c460*/
  v19 = Power::FlagProcess(v18); /*0x70c469*/
  IDA_LOBYTE(v19) = this->q3D5; /*0x70c46e*/
  Power::FlagProcess(v19); /*0x70c477*/
  IDA_LOBYTE(v20) = this->isTether; /*0x70c47c*/
  Power::FlagProcess(v20); /*0x70c485*/
  IDA_LOBYTE(v21) = this->isAlternativeTether; /*0x70c48a*/
  Power::FlagProcess(v21); /*0x70c493*/
  v22 = g_GameMode_Current; /*0x70c498*/
  if ( !g_GameMode_Current || g_GameMode_Current == 5 ) /*0x70c4a4*/
  {
    IDA_LOBYTE(v22) = this->isOwnedByCurrentPlayer; /*0x70c4a6*/
    Power::FlagProcess(v22); /*0x70c4af*/
    IDA_LOBYTE(v23) = this->isDiscoveredByCurrentPlayer; /*0x70c4b4*/
    Power::FlagProcess(v23); /*0x70c4bd*/
    IDA_LOBYTE(v24) = this->q41C; /*0x70c4c2*/
    v22 = Power::FlagProcess(v24); /*0x70c4cb*/
  }
  IDA_LOBYTE(v22) = this->q41D; /*0x70c4d0*/
  Power::FlagProcess(v22); /*0x70c4d9*/
  Power::TimerProcess(this->empLockRemaining); /*0x70c4e7*/
  Power::TimerProcess(*(uint8_t *)(&this->u32_1A44)); /*0x70c4f7*/
  Power::TimerProcess(*(uint8_t *)(&this->u32_1A45)); /*0x70c507*/
  IDA_LOBYTE(v25) = this->q420; /*0x70c50c*/
  Power::FinalizeDrain(v25); /*0x70c515*/
  v26 = this->q468; /*0x70c51a*/
  Power::TimerProcess(v26); /*0x70c523*/
  for ( i = 0; i < v26; ++i ) /*0x70c52c*/
  {
    v35 = *(unsigned int *)(this->vecInt_Items + 4 * i); /*0x70c543*/
    v33 = *(unsigned int *)(this->attackedTargets + 4 * i) + 4; /*0x70c547*/
    v28 = (*(int (__stdcall **)(int))(*(unsigned int *)v33 + 16))(v33); /*0x70c54a*/
    Power::TimerProcess(v28); /*0x70c550*/
    Power::TimerProcess(v35); /*0x70c55c*/
  }
  v29 = this->q480; /*0x70c566*/
  result = Power::TimerProcess(v29); /*0x70c56f*/
  for ( j = 0; j < v29; ++j ) /*0x70c578*/
  {
    v34 = *(unsigned int *)(this->audioLoopIndex3 + 4 * j) + 4; /*0x70c586*/
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
  if ( *((unsigned int *)g_ScenarioClass_Instance + 3374) == 2 ) /*0x72f377*/
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
  result = SetupScreenBuffers(g_CommandLineFlags, g_CommandLineParam); /*0x72f415*/
  byte_B0FC0C = 1; /*0x72f41a*/
  return result; /*0x72f421*/
}
}
// 0x6D1660
namespace gamemd {
void House_Play_6D1660()
{
  char result; // al
  int *v4; // esi
  int *v5; // esi
  int v6; // eax
  char *v7; // eax
  int v8; // edx
  int v9; // edx
  unsigned int v11[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v12; // [esp+24h] [ebp-4h]

  result = a1[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    v4 = (int *)&unk_B0C1C0; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (__thiscall **)(unsigned char *, int *))(*(unsigned int *)a1 + 52))(a1, v4); /*0x6d167f*/
      v4 += 24; /*0x6d1682*/
    }
    while ( (int)v4 < (int)&dword_B0CB20 ); /*0x6d168b*/
    (*(void (__thiscall **)(unsigned char *, unsigned int *, int))(*(unsigned int *)a1 + 52))(a1, dword_B0CCB0, a2); /*0x6d1696*/
    v5 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v6 = *v5; /*0x6d169e*/
      if ( *v5 >= 0 && v6 < 25 ) /*0x6d16a7*/
      {
        v7 = (char *)&unk_B0C1C0 + 96 * v6; /*0x6d16af*/
        if ( v7 ) /*0x6d16b6*/
          HashTable::Remove((int *)g_TacticalRender, *((unsigned int *)v7 + 9)); /*0x6d16c2*/
      }
      ++v5; /*0x6d16c7*/
    }
    while ( (int)v5 < (int)byte_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove((int *)g_TacticalRender, 240); /*0x6d16dd*/
    v8 = *(unsigned int *)a1; /*0x6d16e2*/
    a1[21828] = 0; /*0x6d16eb*/
    (*(void (__thiscall **)(unsigned char *, unsigned int *))(v8 + 48))(a1, dword_B0CC40); /*0x6d16f2*/
    if ( dword_B0CC40 ) /*0x6d16fd*/
    {
      v11[1] = dword_B0CC4C; /*0x6d1710*/
      v11[2] = dword_B0CC50; /*0x6d171a*/
      v11[3] = dword_B0CC54; /*0x6d1724*/
      v12 = 0; /*0x6d172f*/
      v11[0] = dword_B0CC64; /*0x6d1734*/
      v11[5] = g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v11[4] = dword_B0CC58; /*0x6d1740*/
      HashTable::Remove((int *)g_TacticalRender, dword_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(g_TacticalRender, (int)v11); /*0x6d1754*/
    }
    v9 = *(unsigned int *)a1; /*0x6d1759*/
    a1[21829] = 1; /*0x6d175f*/
    return (*(int (__thiscall **)(unsigned char *, unsigned int))(v9 + 56))(a1, 0); /*0x6d1766*/
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
    EventClass::AddEvent(v3, *((unsigned int *)HouseClass_Player + 12), 0x2Bu); /*0x637a30*/
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
    g_ScriptPool = 0; /*0x637a52*/
    g_ScriptState = 0; /*0x637a58*/
    g_ScriptActionPool = 0; /*0x637a5e*/
    byte_AC4CF4 = 0; /*0x637a64*/
    result = PlayVocClass(g_RulesClass_Instance->ChronoInSound, 0x2000, 1.0, 0); /*0x637a7b*/
    if ( dword_AC4B80 ) /*0x637a88*/
      return (**(int (__thiscall ***)(int, int, unsigned int))dword_AC4B80)(dword_AC4B80, 4552, 0); /*0x637a92*/
  }
  return result; /*0x637a94*/
}
} // namespace gamemd
