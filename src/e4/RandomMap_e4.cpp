// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x486790
namespace gamemd {
int RandomMap::Check()
{

  int v1; // eax

  v1 = *((char *)this + 14); /*0x486790*/
  return v1 >= unk_AA0E24 && v1 < unk_AA0E24 + 16; /*0x4867a6*/

}
}
// 0x58BF70
namespace gamemd {
unsigned int * RandomMap::TerrainTileDataConstructor(int a2)
{

  int *v3; // eax
  bool IsGroundTypeRange; // al
  int v5; // ecx
  int v6; // eax

  *this = 0; /*0x58bf7a*/
  *((unsigned int *)this + 1) = 0; /*0x58bf7c*/
  *((unsigned int *)this + 2) = g_MapTileArrayEnd; /*0x58bf8a*/
  *((unsigned int *)this + 3) = 0; /*0x58bf8d*/
  *((unsigned int *)this + 4) = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a2) + 283); /*0x58bfa6*/
  v3 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a2); /*0x58bfa9*/
  IsGroundTypeRange = Cell::IsGroundTypeRange(v3); /*0x58bfb0*/
  v5 = a2; /*0x58bfb5*/
  *((unsigned char *)this + 20) = IsGroundTypeRange; /*0x58bfb9*/
  *(unsigned int *)((char *)this + 22) = v5; /*0x58bfbe*/
  *((unsigned char *)this + 26) = 0; /*0x58bfc1*/
  *((unsigned char *)this + 27) = 1; /*0x58bfc4*/
  *((unsigned int *)this + 7) = 0; /*0x58bfc7*/
  *((unsigned int *)this + 8) = 0; /*0x58bfca*/
  *((unsigned char *)this + 36) = 0; /*0x58bfcd*/
  *((unsigned int *)this + 11) = 0; /*0x58bfd0*/
  *((unsigned int *)this + 12) = 0; /*0x58bfd3*/
  *((unsigned char *)this + 52) = 1; /*0x58bfd6*/
  *((unsigned char *)this + 53) = 0; /*0x58bfd9*/
  *((unsigned int *)this + 10) = &vt_DynamicVectorClass_Cell; /*0x58bfdc*/
  *((unsigned int *)this + 15) = 10; /*0x58bfe3*/
  *((unsigned int *)this + 14) = 0; /*0x58bfea*/
  *((unsigned int *)this + 16) = 0; /*0x58bfed*/
  *((unsigned int *)this + 17) = 0; /*0x58bff0*/
  *((unsigned int *)this + 18) = 0; /*0x58bff3*/
  *((unsigned int *)this + 19) = 0; /*0x58bff6*/
  *((unsigned int *)this + 15) = 100000; /*0x58bff9*/
  ++g_MapTileArrayEnd; /*0x58c014*/
  if ( g_RandomMap_TileData < dword_ABDF98 /*0x58c041*/
    || (byte_ABDF9D || !dword_ABDF98)
    && dword_ABDFA4 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_RandomMap_BuildObject + 8))(
         &g_RandomMap_BuildObject,
         dword_ABDF98 + dword_ABDFA4,
         0) )
  {
    v6 = g_RandomMap_TileData++; /*0x58c04e*/
    *((unsigned int *)g_RandomMap_TerrainState + v6) = this; /*0x58c05d*/
  }
  return this; /*0x58c062*/

}
}
// 0x58C800
namespace gamemd {
int RandomMap::GenerateTerrain()
{

  int v2; // esi
  int v3; // eax
  int v4; // edx
  size_t v5; // edx
  int i; // ebx
  int v7; // edi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  char v16; // bl
  int v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // edi
  int v21; // edx
  unsigned char *v22; // esi
  int *v23; // eax
  int v24; // esi
  int j; // eax
  char *v26; // ecx
  char v27; // cl
  int v29; // edx
  int16_t v30; // bp
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  int v34; // edi
  int v35; // esi
  int Bit; // eax
  size_t v37; // ebx
  char *v38; // ecx
  char v39; // cl
  int v40; // esi
  char v41; // al
  int v42; // edi
  int v43; // ebp
  int v44; // [esp+10h] [ebp-44h] BYREF
  int v45; // [esp+14h] [ebp-40h] BYREF
  size_t v46; // [esp+18h] [ebp-3Ch] BYREF
  int v47; // [esp+1Ch] [ebp-38h]
  int v48; // [esp+20h] [ebp-34h] BYREF
  int v49; // [esp+24h] [ebp-30h]
  int v50; // [esp+28h] [ebp-2Ch] BYREF
  double v51; // [esp+2Ch] [ebp-28h]
  int64_t v52; // [esp+34h] [ebp-20h] BYREF
  void **v53; // [esp+3Ch] [ebp-18h] BYREF
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  char v56; // [esp+49h] [ebp-Bh]
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]

  v49 = this; /*0x58c816*/
  v46 = g_MapTileArrayEnd; /*0x58c81a*/
  VectorClass::CellConstructor(&v53, 0, 0); /*0x58c81e*/
  v2 = *((unsigned int *)this + 9); /*0x58c823*/
  v53 = &vt_DynamicVectorClass_Cell; /*0x58c826*/
  v57 = 0; /*0x58c832*/
  v58 = 50000; /*0x58c838*/
  if ( v55 > 0 || (v56 || !v55) && (uint8_t)VectorClass::ResizeEx(v55 + 50000, 0) ) /*0x58c859*/
  {
    v3 = v57++; /*0x58c867*/
    *(unsigned int *)(v54 + 4 * v3) = v2; /*0x58c872*/
  }
  if ( Cell::IsGroundTypeRange((int *)this) || (IDA_LOBYTE(v47) = 0, Cell::IsShore((int *)this)) ) /*0x58c882*/
    IDA_LOBYTE(v47) = 1; /*0x58c890*/
  v50 = *((char *)this + 283); /*0x58c89c*/
  v4 = v57; /*0x58c8a0*/
  v48 = 0; /*0x58c8a6*/
  if ( v57 ) /*0x58c8aa*/
  {
    do /*0x58ca9c*/
    {
      v44 = *(unsigned int *)(v54 + 4 * v4 - 4); /*0x58c8b8*/
      if ( v4 - 1 < v4 ) /*0x58c8c1*/
        v57 = v4 - 1; /*0x58c8c7*/
      v5 = v46; /*0x58c8f4*/
      *((unsigned int *)g_MapTileArray + 20 * (int16_t)v44 + 20 * unk_89C2DC * SHIWORD(v44) + 15) = v46; /*0x58c906*/
      if ( g_MapTileArray ) /*0x58c912*/
        *((unsigned int *)g_MapTileArray + 20 * (int16_t)v44 + 20 * unk_89C2DC * SHIWORD(v44) + 14) = v5; /*0x58c92d*/
      for ( i = 0; i < 8; ++i ) /*0x58c931*/
      {
        IDA_LODWORD(v51) = *CellStruct::Add(&v44, &v52, (unsigned short *)(4 * (i & 7) + 9041544)); /*0x58c956*/
        v45 = IDA_LODWORD(v51); /*0x58c95a*/
        v7 = g_MapCellHeight_Value; /*0x58c968*/
        v8 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58c97d*/
        v9 = SWORD1(v51) + SLOWORD(v51); /*0x58c97f*/
        if ( v9 > g_MapCellHeight_Value /*0x58c9bf*/
          && SLOWORD(v51) - SWORD1(v51) < g_MapCellHeight_Value
          && SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v9 <= g_MapCellCount
          && *((unsigned int *)v8 + 14) == -1
          && *((unsigned int *)v8 + 15) != v46 )
        {
          *((unsigned int *)v8 + 15) = v46; /*0x58c9c5*/
          v10 = (char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v45); /*0x58c9d2*/
          if ( v10[283] == v50 ) /*0x58c9e2*/
          {
            v11 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v45); /*0x58c9f2*/
            v13 = 1; /*0x58ca20*/
            if ( !Cell::IsGroundTypeRange(v11) ) /*0x58c9f9*/
            {
              v12 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v45); /*0x58ca0c*/
              if ( !Cell::IsShore(v12) ) /*0x58ca13*/
                v13 = 0; /*0x58c9f9*/
            }
            if ( v13 == (uint8_t)v47 /*0x58ca60*/
              && (v57 < v55
               || (v56 || !v55)
               && v58 > 0
               && ((uint8_t (*)(void ***, int, unsigned int))v53[2])(&v53, v58 + v55, 0)) )
            {
              v14 = v57++; /*0x58ca6f*/
              *(unsigned int *)(v54 + 4 * v14) = v45; /*0x58ca7a*/
            }
          }
          v7 = g_MapCellHeight_Value; /*0x58ca7d*/
        }
      }
      v4 = v57; /*0x58ca91*/
      v15 = ++v48; /*0x58ca95*/
    }
    while ( v57 ); /*0x58ca9c*/
    if ( v15 >= 75 ) /*0x58caa7*/
      goto LABEL_84; /*0x58caa7*/
  }
  else
  {
    v7 = g_MapCellHeight_Value; /*0x58caaf*/
  }
  if ( !(unsigned char)v47 ) /*0x58cabb*/
  {
    v16 = 0; /*0x58cac5*/
    if ( v46 ) /*0x58cac9*/
    {
      v29 = *(unsigned int *)(v49 + 36); /*0x58cca4*/
      IDA_LODWORD(v51) = v29; /*0x58cca9*/
      IDA_HIWORD(v48) = IDA_HIWORD(v29); /*0x58ccb3*/
      IDA_LOWORD(v48) = v29 - 1; /*0x58ccb8*/
      v30 = v29 - 1; /*0x58ccbd*/
      v31 = (int16_t)(v29 - 1); /*0x58ccc1*/
      v32 = SHIWORD(v29) + v31; /*0x58cccb*/
      if ( v32 <= v7 || v31 - SWORD1(v51) >= v7 || SWORD1(v51) - v31 >= v7 || v32 > g_MapCellCount ) /*0x58cce6*/
      {
        IDA_LODWORD(v52) = v29; /*0x58cce8*/
        v48 = v29 - 0x10000; /*0x58ccf6*/
        v30 = v29; /*0x58ccfb*/
      }
      v33 = v30 + SHIWORD(v48); /*0x58cd0b*/
      if ( v33 > v7 && v30 - SHIWORD(v48) < v7 && SHIWORD(v48) - v30 < v7 && v33 <= g_MapCellCount ) /*0x58cd34*/
      {
        if ( g_MapTileArray ) /*0x58cd44*/
          v34 = *((unsigned int *)g_MapTileArray + 20 * v30 + 20 * unk_89C2DC * SHIWORD(v48) + 14); /*0x58cd5a*/
        else
          v34 = -1; /*0x58cd46*/
        v35 = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v48) + 283); /*0x58cd6d*/
        LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x58cd79*/
        Bit = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x58cd83*/
        if ( Bit ) /*0x58cd8a*/
        {
          v37 = v46; /*0x58cd90*/
          do /*0x58cdef*/
          {
            IDA_LODWORD(v51) = *(unsigned int *)(Bit + 36); /*0x58cd97*/
            v38 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58cdb8*/
            if ( *((unsigned int *)v38 + 14) == v37 ) /*0x58cdbd*/
            {
              *((unsigned int *)v38 + 14) = v34; /*0x58cdbf*/
              v38[75] = 0; /*0x58cdc2*/
              *(unsigned int *)(Bit + 56) = 0; /*0x58cdc6*/
              *(unsigned char *)(Bit + 282) = 0; /*0x58cdc9*/
              v39 = dword_ABE2E4; /*0x58cdd0*/
              if ( v35 != -1 ) /*0x58cdd9*/
                v39 = v35; /*0x58cddb*/
              *(unsigned char *)(Bit + 283) = v39; /*0x58cddd*/
            }
            Bit = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x58cde8*/
          }
          while ( Bit ); /*0x58cdef*/
        }
        goto LABEL_63; /*0x58cdef*/
      }
      goto LABEL_84; /*0x58cd34*/
    }
    v17 = RandomMap::CellListAlloc(0); /*0x58cadc*/
    v45 = v17; /*0x58cae2*/
    v18 = *(unsigned int *)(v17 + 16) - 1; /*0x58cae9*/
    v52 = *(unsigned int *)(v17 + 16); /*0x58caed*/
    v51 = (double)v52; /*0x58caf5*/
    do /*0x58cb20*/
    {
      v52 = (unsigned int)Random::State(&g_Randomizer); /*0x58cb03*/
      v19 = Math::RoundToInt((double)v52 * v51 * 2.328306437080797e-10); /*0x58cb19*/
    }
    while ( v19 > v18 ); /*0x58cb20*/
    v20 = 0; /*0x58cb25*/
    v46 = *(unsigned int *)(*(unsigned int *)(v17 + 4) + 4 * v19); /*0x58cb2a*/
    while ( 1 ) /*0x58cb51*/
    {
      IDA_LODWORD(v51) = *CellStruct::Add(&v46, &v52, (unsigned short *)(4 * (v20 & 7) + 9041544)); /*0x58cb51*/
      v48 = IDA_LODWORD(v51); /*0x58cb55*/
      v21 = SWORD1(v51) + SLOWORD(v51); /*0x58cb61*/
      if ( v21 > g_MapCellHeight_Value ) /*0x58cb66*/
      {
        if ( SLOWORD(v51) - SWORD1(v51) < g_MapCellHeight_Value /*0x58cb7c*/
          && SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v21 <= g_MapCellCount )
        {
          v22 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v48); /*0x58cb91*/
          if ( v22[283] != *((unsigned char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v46) + 283) ) /*0x58cbac*/
          {
            v23 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v48); /*0x58cbb8*/
            if ( !Cell::IsGroundTypeRange(v23) ) /*0x58cbc6*/
            {
              v24 = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v48) + 283); /*0x58cbea*/
              LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x58cbf6*/
              for ( j = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x58cc09*/
                    j;
                    j = LayerClass::CellIteratorNext(&g_abs_87F7E8) )
              {
                IDA_LODWORD(v51) = *(unsigned int *)(j + 36); /*0x58cc17*/
                v26 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58cc32*/
                if ( !*((unsigned int *)v26 + 14) ) /*0x58cc34*/
                {
                  *((unsigned int *)v26 + 14) = -1; /*0x58cc39*/
                  v26[75] = 0; /*0x58cc3c*/
                  *(unsigned int *)(j + 56) = 0; /*0x58cc40*/
                  *(unsigned char *)(j + 282) = 0; /*0x58cc43*/
                  v27 = dword_ABE2E4; /*0x58cc4a*/
                  if ( v24 != -1 ) /*0x58cc52*/
                    v27 = v24; /*0x58cc54*/
                  *(unsigned char *)(j + 283) = v27; /*0x58cc56*/
                }
              }
              v17 = v45; /*0x58cc6a*/
              v16 = 1; /*0x58cc6e*/
LABEL_60:
              if ( v17 ) /*0x58cc72*/
                (**(void (***)(int, int))v17)(v17, 1); /*0x58cc7b*/
              if ( v16 ) /*0x58cc7f*/
              {
LABEL_63:
                v53 = &vt_VectorClass_Cell; /*0x58cc85*/
                Buffer::Cleanup((int)&v53); /*0x58cc91*/
                return 0; /*0x58cc9f*/
              }
              break; /*0x58cc7f*/
            }
          }
        }
        v17 = v45; /*0x58cbc8*/
      }
      if ( ++v20 >= 8 ) /*0x58cbd0*/
        goto LABEL_60; /*0x58cbd0*/
    }
  }
LABEL_84:
  if ( RA2_OPNEW(0x50u) ) /*0x58cdf8*/
    v40 = RandomMap::TerrainTileDataConstructor(*(unsigned int *)(v49 + 36)); /*0x58ce13*/
  else
    v40 = 0; /*0x58ce17*/
  v41 = v47; /*0x58ce1d*/
  *(unsigned int *)(v40 + 16) = v50; /*0x58ce21*/
  *(unsigned char *)(v40 + 20) = v41; /*0x58ce24*/
  *(unsigned int *)(v40 + 12) = 0; /*0x58ce27*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58ce38*/
  {
    v42 = 0; /*0x58ce3c*/
    v43 = unk_89C2DC * unk_89C2DC; /*0x58ce3e*/
    do /*0x58ce71*/
    {
      if ( *(unsigned int *)((char *)g_MapTileArray + v42 + 56) == *(unsigned int *)(v40 + 8) ) /*0x58ce50*/
      {
        v50 = 0; /*0x58ce56*/
        if ( (uint8_t)Coord::Compare2D(&v50) ) /*0x58ce61*/
          ++*(unsigned int *)(v40 + 12); /*0x58ce6a*/
      }
      v42 += 80; /*0x58ce6d*/
      --v43; /*0x58ce70*/
    }
    while ( v43 ); /*0x58ce71*/
  }
  v53 = &vt_VectorClass_Cell; /*0x58ce77*/
  Buffer::Cleanup((int)&v53); /*0x58ce7f*/
  return v40; /*0x58cc98*/

}
}
// 0x58D1C0
namespace gamemd {
MapClass * * RandomMap::ExpandTerrainCells(int a2, int a3)
{

  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // edi
  int i; // esi
  int v9; // ecx
  unsigned int *v10; // eax
  unsigned int *v11; // esi
  unsigned int *v12; // ebx
  int v13; // edi
  int v14; // edx
  char v15; // al
  int16_t v16; // cx
  int v17; // eax
  int v18; // ecx
  char *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // [esp+Ch] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-18h]
  int v27; // [esp+14h] [ebp-14h]
  int v28; // [esp+18h] [ebp-10h]
  int j; // [esp+1Ch] [ebp-Ch]
  int v30; // [esp+20h] [ebp-8h]

  result = (int)RandomMap::TerrainAlloc(this); /*0x58d1c9*/
  v4 = a2; /*0x58d1ce*/
  v5 = result; /*0x58d1d2*/
  v25 = result; /*0x58d1d7*/
  if ( a2 > 1 ) /*0x58d1db*/
  {
    v6 = unk_89C2DC * unk_89C2DC; /*0x58d1e3*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d1e8*/
    {
      result = 0; /*0x58d1ea*/
      do /*0x58d1fe*/
      {
        result += 80; /*0x58d1f2*/
        --v6; /*0x58d1f5*/
        *(unsigned int *)((char *)g_MapTileArray + result - 20) = -1; /*0x58d1f6*/
      }
      while ( v6 ); /*0x58d1fe*/
    }
  }
  v7 = 0; /*0x58d201*/
  v26 = 0; /*0x58d205*/
  if ( a2 > 0 ) /*0x58d209*/
  {
    do /*0x58d3c5*/
    {
      for ( i = *(unsigned int *)(v5 + 16) - 1; i >= 0; --i ) /*0x58d214*/
      {
        result = *(unsigned int *)(v5 + 4); /*0x58d216*/
        v9 = *(unsigned int *)(result + 4 * i); /*0x58d221*/
        if ( g_MapTileArray ) /*0x58d228*/
        {
          result = 80 * ((int16_t)v9 + unk_89C2DC * SHIWORD(v9)); /*0x58d242*/
          *(unsigned int *)((char *)g_MapTileArray + result + 56) = a3; /*0x58d245*/
        }
      }
      if ( v7 < v4 - 1 ) /*0x58d251*/
      {
        v10 = RA2_OPNEW(0x18u); /*0x58d259*/
        v11 = v10; /*0x58d25e*/
        v12 = 0; /*0x58d260*/
        if ( v10 ) /*0x58d267*/
        {
          VectorClass::CellConstructor(v10, 0, 0); /*0x58d26d*/
          v11[4] = 0; /*0x58d272*/
          *v11 = &vt_DynamicVectorClass_Cell; /*0x58d275*/
          v11[5] = 10; /*0x58d27b*/
          v12 = v11; /*0x58d282*/
        }
        v12[5] = *(unsigned int *)(v5 + 16); /*0x58d287*/
        result = *(unsigned int *)(v5 + 16) - 1; /*0x58d28d*/
        v30 = result; /*0x58d28e*/
        if ( result >= 0 ) /*0x58d292*/
        {
          v13 = g_MapCellHeight_Value; /*0x58d298*/
          do /*0x58d39d*/
          {
            v14 = *(unsigned int *)(*(unsigned int *)(v5 + 4) + 4 * result); /*0x58d2a1*/
            v15 = 0; /*0x58d2a4*/
            v27 = v14; /*0x58d2a6*/
            for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
            {
              v16 = IDA_HIWORD(v27) + IDA_HIWORD(g_abs_89F688[v15 & 7]); /*0x58d2c4*/
              IDA_LOWORD(v28) = IDA_LOWORD(g_abs_89F688[v15 & 7]) + v27; /*0x58d2c9*/
              v17 = v16; /*0x58d2d1*/
              IDA_HIWORD(v28) = v16; /*0x58d2d4*/
              v18 = v16 + (int16_t)v28; /*0x58d2d9*/
              if ( v18 > v13 && (int16_t)v28 - v17 < v13 && v17 - (int16_t)v28 < v13 && v18 <= g_MapCellCount ) /*0x58d302*/
              {
                v19 = (char *)g_MapTileArray + 80 * (int16_t)v28 + 80 * unk_89C2DC * v17; /*0x58d31f*/
                if ( *((unsigned int *)v19 + 14) == *((unsigned int *)this + 2) ) /*0x58d326*/
                {
                  if ( *((unsigned int *)v19 + 15) != v26 + 1 ) /*0x58d334*/
                  {
                    v20 = v12[2]; /*0x58d336*/
                    if ( v12[4] < v20 /*0x58d35b*/
                      || (*((unsigned char *)v12 + 13) || !v20)
                      && (v21 = v12[5], v21 > 0)
                      && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v12 + 8))(v12, v20 + v21, 0) )
                    {
                      v22 = v12[4]; /*0x58d362*/
                      v23 = v12[1]; /*0x58d365*/
                      v12[4] = v22 + 1; /*0x58d36b*/
                      *(unsigned int *)(v23 + 4 * v22) = v28; /*0x58d372*/
                    }
                    *((unsigned int *)v19 + 15) = v26 + 1; /*0x58d375*/
                    v13 = g_MapCellHeight_Value; /*0x58d378*/
                  }
                  v5 = v25; /*0x58d37e*/
                }
              }
              v15 = j + 1; /*0x58d386*/
            }
            result = --v30; /*0x58d398*/
          }
          while ( v30 >= 0 ); /*0x58d39d*/
          v7 = v26; /*0x58d3a3*/
        }
        if ( v5 ) /*0x58d3a9*/
          result = (**(int (***)(int, int))v5)(v5, 1); /*0x58d3b2*/
        v25 = (int)v12; /*0x58d3b4*/
        v5 = (int)v12; /*0x58d3b8*/
        v4 = a2; /*0x58d3ba*/
      }
      v26 = ++v7; /*0x58d3c1*/
    }
    while ( v7 < v4 ); /*0x58d3c5*/
  }
  if ( v5 ) /*0x58d3cf*/
    result = (**(int (***)(int, int))v5)(v5, 1); /*0x58d3d8*/
  if ( v4 > 1 ) /*0x58d3df*/
  {
    v24 = unk_89C2DC * unk_89C2DC; /*0x58d3e7*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d3ec*/
    {
      result = 0; /*0x58d3ee*/
      do /*0x58d402*/
      {
        result += 80; /*0x58d3f6*/
        --v24; /*0x58d3f9*/
        *(unsigned int *)((char *)g_MapTileArray + result - 20) = -1; /*0x58d3fa*/
      }
      while ( v24 ); /*0x58d402*/
    }
  }
  return result; /*0x58d3da*/

}
}
// 0x58D410
namespace gamemd {
unsigned int * RandomMap::TerrainAlloc()
{

  unsigned int *v1; // eax
  unsigned int *v2; // esi
  unsigned int *v3; // ebx
  unsigned int *Bit; // ebp
  int v5; // ecx
  int v6; // eax
  signed int i; // edi
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  char v16; // [esp+Fh] [ebp-Dh]
  unsigned int *v17; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  v1 = RA2_OPNEW(0x18u); /*0x58d41c*/
  v2 = v1; /*0x58d421*/
  if ( v1 ) /*0x58d428*/
  {
    VectorClass::CellConstructor(v1, 0, 0); /*0x58d430*/
    *v2 = &vt_DynamicVectorClass_Cell; /*0x58d435*/
    v2[5] = 10; /*0x58d43b*/
    v2[4] = 0; /*0x58d442*/
    v3 = v2; /*0x58d449*/
  }
  else
  {
    v3 = 0; /*0x58d44d*/
  }
  v17 = v3; /*0x58d454*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x58d458*/
  Bit = (unsigned int *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x58d467*/
  if ( !Bit ) /*0x58d46b*/
    return v3; /*0x58d592*/
  do
  {
    v5 = Bit[9]; /*0x58d478*/
    if ( g_MapTileArray ) /*0x58d481*/
      v6 = *((unsigned int *)g_MapTileArray + 20 * (int16_t)v5 + 20 * unk_89C2DC * SHIWORD(v5) + 14); /*0x58d49f*/
    else
      v6 = -1; /*0x58d483*/
    if ( v6 == *((unsigned int *)this + 2) )
    {
      v16 = 0; /*0x58d4b0*/
      for ( i = 0; i < 8; ++i )
      {
        v19 = *((unsigned int *)Cell::GetNeighbourContent(Bit, i) + 9); /*0x58d4c8*/
        v8 = SHIWORD(v19) + (int16_t)v19; /*0x58d4d4*/
        if ( v8 > g_MapCellHeight_Value )
        {
          if ( (int16_t)v19 - SHIWORD(v19) < g_MapCellHeight_Value
            && SHIWORD(v19) - (int16_t)v19 < g_MapCellHeight_Value
            && v8 <= g_MapCellCount )
          {
            v9 = g_MapTileArray
               ? *((unsigned int *)g_MapTileArray + 20 * (int16_t)v19 + 20 * unk_89C2DC * SHIWORD(v19) + 14)
               : -1;
            if ( v9 != *((unsigned int *)this + 2) ) /*0x58d51c*/
              v16 = 1; /*0x58d51e*/
          }
          v3 = v17; /*0x58d523*/
        }
      }
      if ( v16 ) /*0x58d533*/
      {
        v10 = v3[2]; /*0x58d535*/
        v11 = Bit[9]; /*0x58d53b*/
        if ( v3[4] < v10 /*0x58d55d*/
          || (*((unsigned char *)v3 + 13) || !v10)
          && (v12 = v3[5], v12 > 0)
          && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v3 + 8))(v3, v10 + v12, 0) )
        {
          v13 = v3[4]; /*0x58d564*/
          v14 = v3[1]; /*0x58d567*/
          v3[4] = v13 + 1; /*0x58d56d*/
          *(unsigned int *)(v14 + 4 * v13) = v11; /*0x58d570*/
        }
      }
    }
    Bit = (unsigned int *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x58d57d*/
  }
  while ( Bit );
  return v3; /*0x58d588*/

}
}
// 0x58E740
namespace gamemd {
RandomMap * * RandomMap::CollectTerrainCells(int a2)
{

  unsigned int *v2; // eax
  unsigned int *v3; // esi
  unsigned int *v4; // ebp
  unsigned int *v5; // ecx
  int v6; // esi
  int v7; // ebx
  unsigned short *v8; // eax
  int16_t v9; // dx
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  char *v13; // esi
  int v14; // edi
  unsigned int *v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  unsigned int *v21; // edi
  int v22; // edx
  int v24; // [esp+10h] [ebp-18h] BYREF
  unsigned int *v25; // [esp+14h] [ebp-14h]
  unsigned int *v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v26 = this; /*0x58e747*/
  v25 = RandomMap::TerrainAlloc(this); /*0x58e750*/
  for ( i = 0; i < a2; ++i ) /*0x58e760*/
  {
    v2 = RA2_OPNEW(0x18u); /*0x58e768*/
    v3 = v2; /*0x58e76d*/
    if ( v2 ) /*0x58e774*/
    {
      VectorClass::CellConstructor(v2, 0, 0); /*0x58e77a*/
      *v3 = &vt_DynamicVectorClass_Cell; /*0x58e77f*/
      v3[5] = 10; /*0x58e785*/
      v3[4] = 0; /*0x58e78c*/
      v4 = v3; /*0x58e78f*/
    }
    else
    {
      v4 = 0; /*0x58e793*/
    }
    v5 = v25; /*0x58e795*/
    v27 = 0; /*0x58e799*/
    v4[5] = 3 * v25[4]; /*0x58e7a3*/
    if ( (int)v5[4] > 0 ) /*0x58e7ab*/
    {
      v6 = g_MapCellHeight_Value; /*0x58e7b1*/
      while ( 2 ) /*0x58e7b7*/
      {
        v7 = 0; /*0x58e7b7*/
        while ( 1 ) /*0x58e7d2*/
        {
          v8 = (unsigned short *)(v5[1] + 4 * v27); /*0x58e7d2*/
          v9 = v8[1] + IDA_HIWORD(g_abs_89F688[v7 & 7]); /*0x58e7e5*/
          IDA_LOWORD(v28) = IDA_LOWORD(g_abs_89F688[v7 & 7]) + *v8; /*0x58e7e9*/
          IDA_HIWORD(v28) = v9; /*0x58e7ee*/
          v24 = v28; /*0x58e7f7*/
          v10 = v9; /*0x58e7fe*/
          v11 = v9 + (int16_t)v28; /*0x58e801*/
          if ( v11 > v6 && (int16_t)v28 - v10 < v6 && v10 - (int16_t)v28 < v6 && v11 <= g_MapCellCount ) /*0x58e828*/
          {
            v12 = (char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v24); /*0x58e838*/
            if ( v12[283] == v26[4] ) /*0x58e84b*/
            {
              v13 = (char *)g_MapTileArray + 80 * (int16_t)v24 + 80 * unk_89C2DC * SHIWORD(v24); /*0x58e870*/
              v14 = *((unsigned int *)v13 + 14); /*0x58e872*/
              if ( v14 == -1 /*0x58e8a9*/
                && ((v15 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v24), Cell::IsEmpty(v15))
                 || (v16 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v24), Cell::IsShore(v16))) )
              {
                v17 = v4[2]; /*0x58e8b2*/
                if ( v4[4] < v17 /*0x58e8d8*/
                  || (*((unsigned char *)v4 + 13) || !v17)
                  && (v18 = v4[5], v18 > 0)
                  && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v4 + 8))(v4, v17 + v18, 0) )
                {
                  v19 = v4[4]; /*0x58e8df*/
                  v20 = v4[1]; /*0x58e8e2*/
                  v4[4] = v19 + 1; /*0x58e8e8*/
                  *(unsigned int *)(v20 + 4 * v19) = v24; /*0x58e8ef*/
                }
                v21 = v26; /*0x58e8f2*/
                *((unsigned int *)v13 + 14) = v26[2]; /*0x58e903*/
                *((unsigned char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v24) + 283) = *((unsigned char *)v21 + 16); /*0x58e90e*/
              }
              else if ( v14 != v26[2] ) /*0x58e91d*/
              {
                if ( v25 ) /*0x58e98c*/
                  (*(void (**)(unsigned int *, int))*v25)(v25, 1); /*0x58e992*/
                if ( v4 ) /*0x58e996*/
                  (*(void (**)(unsigned int *, int))*v4)(v4, 1); /*0x58e99f*/
                return 0; /*0x58e9a4*/
              }
            }
            v6 = g_MapCellHeight_Value; /*0x58e91f*/
          }
          if ( ++v7 >= 8 ) /*0x58e929*/
            break; /*0x58e929*/
          v5 = v25; /*0x58e7bb*/
        }
        v5 = v25; /*0x58e92f*/
        v22 = v25[4]; /*0x58e938*/
        if ( ++v27 < v22 ) /*0x58e941*/
          continue; /*0x58e941*/
        break;
      }
    }
    if ( v5 ) /*0x58e94b*/
      (*(void (**)(unsigned int *, int))*v5)(v5, 1); /*0x58e951*/
    v25 = v4; /*0x58e95c*/
  }
  if ( v25 ) /*0x58e972*/
    (*(void (**)(unsigned int *, int))*v25)(v25, 1); /*0x58e978*/
  return 1; /*0x58e97a*/

}
}
// 0x58E9B0
namespace gamemd {
AbstractClass * * RandomMap::PlaceRandomMapTerrain()
{

  unsigned int *v1; // esi
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  unsigned int *v5; // edi
  int v6; // eax
  int v7; // ecx
  int i; // eax
  int v9; // eax
  int v10; // ebx
  int k; // esi
  int v12; // eax
  int v13; // ecx
  char *v14; // eax
  int v15; // eax
  int v17; // [esp+14h] [ebp-24h]
  void **v19; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  char v22; // [esp+2Dh] [ebp-Bh]
  int j; // [esp+30h] [ebp-8h]
  int v24; // [esp+34h] [ebp-4h]

  v1 = RandomMap::TerrainAlloc(this); /*0x58e9c7*/
  VectorClass::CellConstructor(&v19, 0, 0); /*0x58e9c9*/
  v2 = 50000; /*0x58e9ce*/
  v19 = &vt_DynamicVectorClass_Cell; /*0x58e9d3*/
  j = 0; /*0x58e9db*/
  v24 = 50000; /*0x58e9e3*/
  v3 = 0; /*0x58e9ea*/
  if ( (int)v1[4] > 0 ) /*0x58e9ee*/
  {
    v4 = v21; /*0x58e9f0*/
    while ( 1 ) /*0x58e9fd*/
    {
      v5 = (unsigned int *)(v1[1] + 4 * v3); /*0x58e9fd*/
      if ( j < v4 ) /*0x58ea06*/
        goto LABEL_9; /*0x58ea06*/
      if ( (v22 || !v4) && v2 > 0 ) /*0x58ea16*/
        break; /*0x58ea16*/
LABEL_11:
      if ( ++v3 >= v1[4] ) /*0x58ea4a*/
        goto LABEL_12; /*0x58ea4a*/
      v2 = v24; /*0x58e9f6*/
    }
    if ( ((uint8_t (*)(void ***, int, unsigned int))v19[2])(&v19, v2 + v4, 0) ) /*0x58ea25*/
    {
LABEL_9:
      v6 = j++; /*0x58ea2c*/
      *((unsigned int *)Block + v6) = *v5; /*0x58ea3d*/
    }
    v4 = v21; /*0x58ea40*/
    goto LABEL_11; /*0x58ea40*/
  }
LABEL_12:
  if ( v1 ) /*0x58ea4e*/
    (*(void (**)(unsigned int *, int))*v1)(v1, 1); /*0x58ea56*/
  v7 = j; /*0x58ea58*/
  for ( i = j; j > 0; i = j ) /*0x58ea60*/
  {
    v9 = i - 1; /*0x58ea6b*/
    v10 = *((unsigned int *)Block + v9); /*0x58ea6e*/
    if ( v9 < v7 ) /*0x58ea75*/
    {
      for ( j = v7 - 1; v9 < j; *((unsigned int *)Block + v9 - 1) = *((unsigned int *)Block + v9) ) /*0x58ea7e*/
        ++v9; /*0x58ea84*/
    }
    for ( k = 0; k < 8; ++k ) /*0x58ea99*/
    {
      v12 = k & 7; /*0x58eaa3*/
      IDA_LOWORD(v17) = v10 + IDA_LOWORD(g_abs_89F688[v12]); /*0x58eabf*/
      IDA_HIWORD(v17) = IDA_HIWORD(v10) + IDA_HIWORD(g_abs_89F688[v12]); /*0x58eac4*/
      v13 = SHIWORD(v17) + (int16_t)v17; /*0x58eacf*/
      if ( v13 > g_MapCellHeight_Value /*0x58eafc*/
        && (int16_t)v17 - SHIWORD(v17) < g_MapCellHeight_Value
        && SHIWORD(v17) - (int16_t)v17 < g_MapCellHeight_Value
        && v13 <= g_MapCellCount )
      {
        v14 = (char *)g_MapTileArray + 80 * (int16_t)v17 + 80 * unk_89C2DC * SHIWORD(v17); /*0x58eb13*/
        if ( *((unsigned int *)v14 + 14) == -1 ) /*0x58eb19*/
        {
          if ( v14[75] ) /*0x58eb1b*/
          {
            *((unsigned int *)v14 + 14) = *((unsigned int *)this + 2); /*0x58eb29*/
            if ( j < v21 /*0x58eb57*/
              || (v22 || !v21)
              && v24 > 0
              && ((uint8_t (*)(void ***, int, unsigned int))v19[2])(&v19, v24 + v21, 0) )
            {
              v15 = j++; /*0x58eb66*/
              *((unsigned int *)Block + v15) = v17; /*0x58eb71*/
            }
          }
        }
      }
    }
    v7 = j; /*0x58eb7e*/
  }
  v19 = &vt_VectorClass_Cell; /*0x58eb93*/
  if ( Block && v22 ) /*0x58eba6*/
    RA2_OPDEL(Block); /*0x58eba9*/
  return 1; /*0x58eb91*/

}
}
// 0x58F0C0
namespace gamemd {
void* RandomMap::CollectBorderCells()
{

  unsigned int *v1; // ebx
  unsigned int *v2; // eax
  unsigned int *v3; // esi
  unsigned char *v4; // ecx
  signed int v5; // eax
  unsigned int *v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // ebp
  int v11; // edx
  int16_t v12; // cx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  signed int i; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // esi
  char *v26; // edx
  unsigned char *Block; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  unsigned int *v29; // [esp+1Ch] [ebp-8h]

  v1 = this; /*0x58f0c7*/
  v2 = RA2_OPNEW(0x18u); /*0x58f0cf*/
  v3 = v2; /*0x58f0d4*/
  if ( v2 ) /*0x58f0db*/
  {
    VectorClass::Construct(v2, 0, 0); /*0x58f0e3*/
    *v3 = &vt_DynamicVectorClass_int; /*0x58f0e8*/
    v3[5] = 10; /*0x58f0ee*/
    v3[4] = 0; /*0x58f0f5*/
  }
  else
  {
    v3 = 0; /*0x58f0fe*/
  }
  v1[1] = v3; /*0x58f100*/
  v4 = RA2_OPNEW(g_MapTileArrayEnd); /*0x58f114*/
  v5 = 0; /*0x58f119*/
  for ( Block = v4; v5 < (int)g_MapTileArrayEnd; ++v5 ) /*0x58f121*/
    v4[v5] = 0; /*0x58f123*/
  v6 = RandomMap::TerrainAlloc(v1); /*0x58f139*/
  v7 = 0; /*0x58f13b*/
  v29 = v6; /*0x58f13d*/
  v28 = 0; /*0x58f141*/
  if ( (int)v6[4] > 0 ) /*0x58f14a*/
  {
    v8 = g_MapCellHeight_Value; /*0x58f150*/
    do /*0x58f1ee*/
    {
      v9 = 0; /*0x58f159*/
      v10 = *(unsigned int *)(v6[1] + 4 * v7); /*0x58f15b*/
      do /*0x58f1da*/
      {
        v11 = v9 & 7; /*0x58f164*/
        v12 = IDA_HIWORD(v10) + IDA_HIWORD(g_abs_89F688[v11]); /*0x58f17d*/
        v13 = (int16_t)(v10 + IDA_LOWORD(g_abs_89F688[v11])); /*0x58f182*/
        v14 = v12; /*0x58f185*/
        v15 = v12 + v13; /*0x58f188*/
        if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MapCellCount ) /*0x58f1a5*/
        {
          if ( g_MapTileArray ) /*0x58f1af*/
          {
            v16 = *((unsigned int *)g_MapTileArray + 20 * v13 + 20 * unk_89C2DC * v14 + 14); /*0x58f1c0*/
            if ( v16 >= 0 ) /*0x58f1c6*/
            {
              Block[v16] = 1; /*0x58f1cc*/
              v8 = g_MapCellHeight_Value; /*0x58f1d0*/
            }
          }
        }
        ++v9; /*0x58f1d6*/
      }
      while ( v9 < 8 ); /*0x58f1da*/
      v6 = v29; /*0x58f1dc*/
      v7 = v28 + 1; /*0x58f1e4*/
      v28 = v7; /*0x58f1e8*/
    }
    while ( v7 < v29[4] ); /*0x58f1ee*/
    v1 = this; /*0x58f1f4*/
  }
  for ( i = 0; i < (int)g_MapTileArrayEnd; ++i ) /*0x58f201*/
  {
    if ( Block[i] && i != v1[2] ) /*0x58f210*/
    {
      v18 = v1[1]; /*0x58f212*/
      v19 = *(unsigned int *)(v18 + 8); /*0x58f215*/
      if ( *(unsigned int *)(v18 + 16) < v19 /*0x58f23a*/
        || (*(unsigned char *)(v18 + 13) || !v19)
        && (v20 = *(unsigned int *)(v18 + 20), v20 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v18 + 8))(v18, v19 + v20, 0) )
      {
        v21 = *(unsigned int *)(v18 + 16); /*0x58f241*/
        v22 = *(unsigned int *)(v18 + 4); /*0x58f244*/
        *(unsigned int *)(v18 + 16) = v21 + 1; /*0x58f24a*/
        *(unsigned int *)(v22 + 4 * v21) = i; /*0x58f24d*/
      }
    }
  }
  v23 = 0; /*0x58f25a*/
  v1[3] = 0; /*0x58f25c*/
  v24 = unk_89C2DC * unk_89C2DC; /*0x58f265*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58f26a*/
  {
    v25 = v1[2]; /*0x58f26c*/
    v26 = (char *)g_MapTileArray; /*0x58f26f*/
    do /*0x58f29b*/
    {
      if ( *(unsigned int *)&v26[v23 + 56] == v25 && (*(unsigned short *)&v26[v23] || *(unsigned short *)&v26[v23 + 2]) ) /*0x58f282*/
      {
        ++v1[3]; /*0x58f28e*/
        v26 = (char *)g_MapTileArray; /*0x58f291*/
      }
      v23 += 80; /*0x58f297*/
      --v24; /*0x58f29a*/
    }
    while ( v24 ); /*0x58f29b*/
  }
  if ( v6 ) /*0x58f29f*/
    (*(void (**)(unsigned int *, int))*v6)(v6, 1); /*0x58f2a8*/
  RA2_OPDEL(Block); /*0x58f2af*/

}
}
// 0x58F2C0
namespace gamemd {
void* RandomMap::PlaceBuildings(int a2, int a3)
{

  int v4; // eax
  int v5; // ecx
  char result; // al
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // ebp
  unsigned short *v11; // eax
  void *v12; // esi
  void *v13; // ebp
  void *v14; // esi
  void *v15; // ebp
  void *v16; // esi
  void *v17; // ebp
  void *v18; // esi
  void *v19; // ebp
  int v20; // ebx
  int v21; // ebp
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  char v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // ebp
  int v31; // edx
  int v32; // ebx
  int v33; // ecx
  int v34; // eax
  int v35; // esi
  int16_t v36; // di
  char v37; // bl
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // ebp
  int v42; // edx
  int v43; // eax
  int v44; // ebx
  int16_t v45; // si
  int16_t v46; // di
  unsigned int v47; // eax
  unsigned int v48; // eax
  char v49; // [esp+11h] [ebp-207h]
  char v50; // [esp+12h] [ebp-206h]
  char v51; // [esp+13h] [ebp-205h]
  char v52; // [esp+13h] [ebp-205h]
  int v53; // [esp+14h] [ebp-204h] BYREF
  int v54; // [esp+18h] [ebp-200h]
  int v55; // [esp+1Ch] [ebp-1FCh]
  int v56; // [esp+20h] [ebp-1F8h]
  unsigned int *v57; // [esp+24h] [ebp-1F4h]
  double v58; // [esp+28h] [ebp-1F0h]
  int16_t v59[2]; // [esp+30h] [ebp-1E8h] BYREF
  int v60; // [esp+34h] [ebp-1E4h]
  int16_t v61[2]; // [esp+38h] [ebp-1E0h] BYREF
  int16_t v62[2]; // [esp+3Ch] [ebp-1DCh] BYREF
  int16_t v63[2]; // [esp+40h] [ebp-1D8h] BYREF
  int v64; // [esp+44h] [ebp-1D4h]
  int16_t v65[2]; // [esp+48h] [ebp-1D0h] BYREF
  int16_t v66[2]; // [esp+4Ch] [ebp-1CCh] BYREF
  int v67; // [esp+50h] [ebp-1C8h]
  int16_t v68[2]; // [esp+54h] [ebp-1C4h] BYREF
  int v69; // [esp+58h] [ebp-1C0h]
  int16_t v70[2]; // [esp+5Ch] [ebp-1BCh] BYREF
  int v71; // [esp+60h] [ebp-1B8h] BYREF
  int v72; // [esp+64h] [ebp-1B4h]
  int v73; // [esp+68h] [ebp-1B0h]
  int v74; // [esp+6Ch] [ebp-1ACh]
  int v75; // [esp+70h] [ebp-1A8h] BYREF
  int v76; // [esp+74h] [ebp-1A4h]
  int v77; // [esp+78h] [ebp-1A0h]
  int v78; // [esp+7Ch] [ebp-19Ch]
  int v79; // [esp+80h] [ebp-198h] BYREF
  int v80; // [esp+84h] [ebp-194h]
  int v81; // [esp+88h] [ebp-190h]
  int v82; // [esp+8Ch] [ebp-18Ch]
  int v83; // [esp+90h] [ebp-188h] BYREF
  int v84; // [esp+94h] [ebp-184h]
  int v85; // [esp+98h] [ebp-180h]
  int v86; // [esp+9Ch] [ebp-17Ch]
  unsigned short v87[2]; // [esp+A0h] [ebp-178h] BYREF
  int16_t v88[2]; // [esp+A4h] [ebp-174h] BYREF
  unsigned short v89[2]; // [esp+A8h] [ebp-170h] BYREF
  int16_t v90[2]; // [esp+ACh] [ebp-16Ch] BYREF
  unsigned short v91[2]; // [esp+B0h] [ebp-168h] BYREF
  int16_t v92[2]; // [esp+B4h] [ebp-164h] BYREF
  int16_t v93[2]; // [esp+B8h] [ebp-160h] BYREF
  unsigned short v94[2]; // [esp+BCh] [ebp-15Ch] BYREF
  int16_t v95[2]; // [esp+C0h] [ebp-158h] BYREF
  unsigned short v96[2]; // [esp+C4h] [ebp-154h] BYREF
  int16_t v97[2]; // [esp+C8h] [ebp-150h] BYREF
  unsigned short v98[2]; // [esp+CCh] [ebp-14Ch] BYREF
  unsigned short v99[2]; // [esp+D0h] [ebp-148h] BYREF
  int v100; // [esp+D4h] [ebp-144h]
  int16_t v101[2]; // [esp+D8h] [ebp-140h] BYREF
  unsigned short v102[2]; // [esp+DCh] [ebp-13Ch] BYREF
  int16_t v103[2]; // [esp+E0h] [ebp-138h] BYREF
  int64_t v104; // [esp+E4h] [ebp-134h]
  int64_t v105; // [esp+ECh] [ebp-12Ch]
  int64_t v106; // [esp+F4h] [ebp-124h]
  int64_t v107; // [esp+FCh] [ebp-11Ch]
  int64_t v108; // [esp+104h] [ebp-114h]
  int64_t v109; // [esp+10Ch] [ebp-10Ch]
  int v110[4]; // [esp+114h] [ebp-104h] BYREF
  int v111[4]; // [esp+124h] [ebp-F4h] BYREF
  int v112[4]; // [esp+134h] [ebp-E4h] BYREF
  int v113[4]; // [esp+144h] [ebp-D4h] BYREF
  int v114[4]; // [esp+154h] [ebp-C4h] BYREF
  int v115[4]; // [esp+164h] [ebp-B4h] BYREF
  int v116[4]; // [esp+174h] [ebp-A4h] BYREF
  int v117[4]; // [esp+184h] [ebp-94h] BYREF
  int v118[4]; // [esp+194h] [ebp-84h] BYREF
  int v119[4]; // [esp+1A4h] [ebp-74h] BYREF
  int v120[4]; // [esp+1B4h] [ebp-64h] BYREF
  int v121[4]; // [esp+1C4h] [ebp-54h] BYREF
  int v122[4]; // [esp+1D4h] [ebp-44h] BYREF
  int v123[4]; // [esp+1E4h] [ebp-34h] BYREF
  int v124[4]; // [esp+1F4h] [ebp-24h] BYREF
  int v125[4]; // [esp+204h] [ebp-14h] BYREF
  int16_t v126; // [esp+214h] [ebp-4h] BYREF

  v4 = *(unsigned int *)(a3 + 8);
  v100 = *(unsigned int *)(a2 + 8);
  v5 = unk_89C2DC;
  v57 = this;
  v69 = v4;
  v64 = 0;
  v51 = 0;
  while ( 1 )
  {
    result = v51;
    if ( v51 )
      return result;
    v7 = v5 * v5;
    while ( 1 )
    {
      v105 = (unsigned int)v7;
      v58 = (double)(unsigned int)v7;
      do
      {
        v106 = (unsigned int)Random::State(&g_Randomizer);
        v8 = Math::RoundToInt((double)v106 * v58 * 2.328306437080797e-10);
        v9 = v8;
      }
      while ( v8 > v7 - 1 );
      v10 = 80 * v8;
      if ( *((unsigned int *)g_MapTileArray + 20 * v8 + 14) == *((unsigned int *)this + 2) )
      {
        v11 = CellStruct::Set(&v126, 0, 0);
        if ( !CellStruct::Equals((char *)g_MapTileArray + v10, v11) )
          break;
      }
    }
    IDA_LODWORD(v58) = *((unsigned int *)g_MapTileArray + 20 * v9);
    v76 = SWORD1(v58);
    v80 = SWORD1(v58);
    v75 = SLOWORD(v58) - 1;
    v79 = v75;
    v84 = SWORD1(v58) - 1;
    v85 = 1;
    v72 = v84;
    v73 = 1;
    v77 = 3;
    v78 = 1;
    v81 = 3;
    v82 = 1;
    v83 = SLOWORD(v58);
    v86 = 3;
    v71 = SLOWORD(v58);
    v74 = 3;
    v50 = 1;
    v49 = 1;
    if ( IsAreaClearMap(&v75, 0, 0) )
    {
LABEL_15:
      v110[0] = v75;
      v110[1] = v76 - 3;
      v110[2] = 3;
      v110[3] = 3;
      if ( IsAreaClearMap(v110, 0, 0) )
      {
        if ( IsAreaClearMap(&v79, 0, 0) )
        {
LABEL_22:
          v113[0] = v79;
          v113[1] = v80 + 1;
          v113[2] = 3;
          v113[3] = 3;
          if ( IsAreaClearMap(v113, 0, 0) )
            goto LABEL_24;
        }
        else
        {
          while ( 1 )
          {
            v68[0] = v79;
            v61[0] = v79 + 2;
            v68[1] = ++v80;
            v61[1] = v80;
            v14 = CellCoord::To_CellObj(&g_abs_87F7E8, v68);
            v15 = CellCoord::To_CellObj(&g_abs_87F7E8, v61);
            if ( !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v68, 1)
              || !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v61, 1)
              || CellLand::IsBuildable((int)v14)
              || CellLand::IsBuildable((int)v15) )
            {
              break;
            }
            if ( IsAreaClearMap(&v79, 0, 0) )
              goto LABEL_22;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v62[0] = v75;
        v66[0] = v75 + 2;
        v62[1] = --v76;
        v66[1] = v76;
        v12 = CellCoord::To_CellObj(&g_abs_87F7E8, v62);
        v13 = CellCoord::To_CellObj(&g_abs_87F7E8, v66);
        if ( !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v62, 1)
          || !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v66, 1)
          || CellLand::IsBuildable((int)v12)
          || CellLand::IsBuildable((int)v13) )
        {
          break;
        }
        if ( IsAreaClearMap(&v75, 0, 0) )
          goto LABEL_15;
      }
    }
    v49 = 0;
LABEL_24:
    if ( IsAreaClearMap(&v71, 0, 0) )
    {
LABEL_30:
      v119[0] = v71 - 3;
      v119[1] = v72;
      v119[2] = 3;
      v119[3] = 3;
      if ( IsAreaClearMap(v119, 0, 0) )
      {
        if ( IsAreaClearMap(&v83, 0, 0) )
        {
LABEL_37:
          v115[0] = v83 + 1;
          v115[1] = v84;
          v115[2] = 3;
          v115[3] = 3;
          if ( IsAreaClearMap(v115, 0, 0) )
            goto LABEL_39;
        }
        else
        {
          while ( 1 )
          {
            v59[1] = v84;
            v65[1] = v84 + 2;
            v59[0] = ++v83;
            v65[0] = v83;
            v18 = CellCoord::To_CellObj(&g_abs_87F7E8, v59);
            v19 = CellCoord::To_CellObj(&g_abs_87F7E8, v65);
            if ( !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v59, 1)
              || !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v65, 1)
              || CellLand::IsBuildable((int)v18)
              || CellLand::IsBuildable((int)v19) )
            {
              break;
            }
            if ( IsAreaClearMap(&v83, 0, 0) )
              goto LABEL_37;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v70[1] = v72;
        v63[1] = v72 + 2;
        v70[0] = --v71;
        v63[0] = v71;
        v16 = CellCoord::To_CellObj(&g_abs_87F7E8, v70);
        v17 = CellCoord::To_CellObj(&g_abs_87F7E8, v63);
        if ( !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v70, 1)
          || !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, v63, 1)
          || CellLand::IsBuildable((int)v16)
          || CellLand::IsBuildable((int)v17) )
        {
          break;
        }
        if ( IsAreaClearMap(&v71, 0, 0) )
          goto LABEL_30;
      }
    }
    v50 = 0;
LABEL_39:
    v20 = -1;
    IDA_LODWORD(v58) = 999;
    v60 = 999;
    v21 = -1;
    v67 = -1;
    v22 = -1;
    if ( v49 )
    {
      IDA_LODWORD(v58) = abs32(v80 - v76);
      if ( g_MapTileArray )
      {
        v20 = *((unsigned int *)g_MapTileArray + 20 * (int16_t)v75 + 20 * unk_89C2DC * (int16_t)v76 + 14);
        v21 = *((unsigned int *)g_MapTileArray + 20 * (int16_t)v79 + 20 * unk_89C2DC * (int16_t)v80 + 14);
      }
      else
      {
        v21 = -1;
      }
    }
    if ( v50 )
    {
      v60 = abs32(v83 - v71);
      if ( g_MapTileArray )
      {
        v67 = *((unsigned int *)g_MapTileArray + 20 * (int16_t)v83 + 20 * unk_89C2DC * (int16_t)v84 + 14);
        v22 = *((unsigned int *)g_MapTileArray + 20 * (int16_t)v71 + 20 * unk_89C2DC * (int16_t)v72 + 14);
      }
      else
      {
        v67 = -1;
        v22 = -1;
      }
    }
    if ( v49 )
    {
      v23 = v100;
      v24 = v69;
      if ( (v20 != v100 || v21 != v69) && (v20 != v69 || v21 != v100) )
        v49 = 0;
    }
    else
    {
      v24 = v69;
      v23 = v100;
    }
    v25 = v50;
    if ( v50 )
    {
      if ( v67 == v23 && v22 == v24 || v67 == v24 && v22 == v23 )
      {
        if ( v49 )
        {
          if ( IDA_SLODWORD(v58) >= v60 )
          {
            v49 = 0;
          }
          else
          {
            v25 = 0;
            v50 = 0;
          }
        }
      }
      else
      {
        v25 = 0;
        v50 = 0;
      }
    }
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v26 = v64 / 25 + 8;
    if ( v25 && v60 < v26 )
    {
      v27 = 3;
      v53 = v71;
      v28 = v72;
      v29 = v83 - v71 + 1;
    }
    else
    {
      if ( !v49 || IDA_SLODWORD(v58) >= v26 )
        goto LABEL_129;
      v28 = v76;
      v29 = 3;
      v27 = v80 - v76 + 1;
      v53 = v75;
    }
    v54 = v28;
    v55 = v29;
    v56 = v27;
    if ( v29 > 0 && v27 > 0 )
    {
      if ( v50 )
      {
        if ( !(uint8_t)Object_Helper(&v53) )
          goto LABEL_129;
        v30 = v54;
        v31 = v55;
        v32 = v54;
        v33 = v53;
        for ( IDA_LODWORD(v58) = v54; v32 < v30 + v56; IDA_LODWORD(v58) = v32 )
        {
          v34 = v31 + v33;
          v35 = v33;
          if ( v33 < v31 + v33 )
          {
            while ( 1 )
            {
              if ( v35 == v33 )
              {
                v36 = v32;
                v97[0] = v35;
                v97[1] = v32;
                *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, v97) + 17) = 94;
              }
              else
              {
                v36 = v32;
                if ( v35 == v34 - 1 )
                {
                  v88[0] = v35;
                  v88[1] = v32;
                  *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, v88) + 17) = 92;
                }
                else
                {
                  v90[0] = v35;
                  v90[1] = v32;
                  *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, v90) + 17) = v35 % 4 + 74;
                }
              }
              v92[0] = v35;
              v92[1] = v36;
              v37 = v32 - v54;
              *((unsigned char *)CellCoord::To_CellObj(&g_abs_87F7E8, v92) + 286) = v37;
              v31 = v55;
              v33 = v53;
              ++v35;
              v34 = v55 + v53;
              if ( v35 >= v55 + v53 )
                break;
              IDA_LOWORD(v32) = IDA_LOWORD(v58);
            }
            v30 = v54;
            v32 = IDA_LODWORD(v58);
          }
          ++v32;
        }
        v124[0] = v33 + v31;
        v124[1] = v30 - 2;
        v124[2] = 6;
        v124[3] = 6;
        if ( !IsMapClassAreaUniform(v124, 0) )
          goto LABEL_91;
        do
        {
          v108 = (unsigned int)Random::State(&g_Randomizer);
          v38 = Math::RoundToInt((double)v108 * 4.656612874161595e-10);
        }
        while ( v38 > 1 );
        if ( v38 )
        {
          v94[0] = v53 + v55;
          v94[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, v94, -1, -1);
        }
        else
        {
LABEL_91:
          v89[1] = v54;
          v89[0] = v53 + v55;
          PlaceMapSeedClassBuildings(dword_ABBEC4, v89, -1, -1);
        }
        v117[0] = v53 - 6;
        v117[1] = v54 - 2;
        v117[2] = 6;
        v117[3] = 6;
        if ( !IsMapClassAreaUniform(v117, 0) )
          goto LABEL_96;
        do
        {
          v104 = (unsigned int)Random::State(&g_Randomizer);
          v39 = Math::RoundToInt((double)v104 * 4.656612874161595e-10);
        }
        while ( v39 > 1 );
        if ( v39 )
        {
          v99[0] = v53 - 4;
          v99[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, v99, -1, -1);
        }
        else
        {
LABEL_96:
          v91[0] = v53 - 1;
          v91[1] = v54;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 2, v91, -1, -1);
        }
        v122[0] = v53;
        v122[1] = v54 - 1;
        v122[2] = 2;
        v122[3] = 5;
        if ( !PlaceCabhutMap(v122) )
        {
          v111[0] = v53 - 1;
          v111[1] = v54 - 2;
          v111[2] = 3;
          v111[3] = 7;
          PlaceCabhutMap(v111);
        }
        v112[2] = 2;
        v112[3] = 5;
        v112[1] = v54 - 1;
        v112[0] = v55 + v53 - 2;
        if ( !PlaceCabhutMap(v112) )
        {
          v114[2] = 3;
          v114[3] = 7;
          v114[0] = v55 + v53 - 2;
          v114[1] = v54 - 2;
          PlaceCabhutMap(v114);
        }
        goto LABEL_128;
      }
      if ( v49 && (uint8_t)Object_Helper(&v53) )
      {
        v40 = v54;
        v41 = v54;
        IDA_LODWORD(v58) = v54;
        if ( v54 >= v54 + v56 )
        {
          v43 = v53;
        }
        else
        {
          v42 = v55;
          v43 = v53;
          do
          {
            v44 = v43;
            if ( v43 < v42 + v43 )
            {
              do
              {
                if ( v41 == v40 )
                {
                  v45 = v44;
                  v46 = v41;
                  v101[0] = v44;
                  v101[1] = v41;
                  *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, v101) + 17) = 96;
                }
                else
                {
                  v45 = v44;
                  v46 = v41;
                  if ( v41 == v56 + v40 - 1 )
                  {
                    v93[0] = v44;
                    v93[1] = v41;
                    *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, v93) + 17) = 98;
                  }
                  else
                  {
                    v103[0] = v44;
                    v103[1] = v41;
                    *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, v103) + 17) = v41 % 4 + 83;
                    v41 = IDA_LODWORD(v58);
                  }
                }
                v95[0] = v45;
                v95[1] = v46;
                v52 = v44++ - v53;
                *((unsigned char *)CellCoord::To_CellObj(&g_abs_87F7E8, v95) + 286) = v52;
                v42 = v55;
                v43 = v53;
                v40 = v54;
              }
              while ( v44 < v55 + v53 );
            }
            IDA_LODWORD(v58) = ++v41;
          }
          while ( v41 < v40 + v56 );
        }
        v116[1] = v40 - 6;
        v116[0] = v43 - 2;
        v116[2] = 7;
        v116[3] = 6;
        if ( !IsMapClassAreaUniform(v116, 0) )
          goto LABEL_118;
        do
        {
          v107 = (unsigned int)Random::State(&g_Randomizer);
          v47 = Math::RoundToInt((double)v107 * 4.656612874161595e-10);
        }
        while ( v47 > 1 );
        if ( v47 )
        {
          v87[0] = v53;
          v87[1] = v54 - 4;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, v87, -1, -1);
        }
        else
        {
LABEL_118:
          v96[0] = v53;
          v96[1] = v54 - 1;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 1, v96, -1, -1);
        }
        v118[0] = v53 - 2;
        v118[1] = v54 + v56;
        v118[2] = 7;
        v118[3] = 6;
        if ( !IsMapClassAreaUniform(v118, 0) )
          goto LABEL_123;
        do
        {
          v109 = (unsigned int)Random::State(&g_Randomizer);
          v48 = Math::RoundToInt((double)v109 * 4.656612874161595e-10);
        }
        while ( v48 > 1 );
        if ( v48 )
        {
          v98[1] = v56 + v54;
          v98[0] = v53;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, v98, -1, -1);
        }
        else
        {
LABEL_123:
          v102[0] = v53;
          v102[1] = v56 + v54;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, v102, -1, -1);
        }
        v121[0] = v53 - 1;
        v121[1] = v54;
        v121[2] = 5;
        v121[3] = 2;
        if ( !PlaceCabhutMap(v121) )
        {
          v123[0] = v53 - 2;
          v123[1] = v54 - 1;
          v123[2] = 7;
          v123[3] = 3;
          PlaceCabhutMap(v123);
        }
        v125[0] = v53 - 1;
        v125[2] = 5;
        v125[1] = v56 + v54 - 2;
        v125[3] = 2;
        if ( !PlaceCabhutMap(v125) )
        {
          v120[0] = v53 - 2;
          v120[2] = 7;
          v120[1] = v56 + v54 - 2;
          v120[3] = 3;
          PlaceCabhutMap(v120);
        }
LABEL_128:
        v51 = 1;
      }
    }
LABEL_129:
    if ( ++v64 >= 200 )
      return v51;
    v5 = unk_89C2DC;
    this = v57;
  }

}
} // namespace gamemd

// 0x5905D0
namespace gamemd {
int RandomMap::AllocateArea()
{

  unsigned int *v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int *v5; // ebx
  int v6; // ebp
  int v7; // eax
  unsigned int *v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  unsigned int *v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  char *v21; // ecx
  int v22; // esi
  int v23; // ebp
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // eax
  char *v30; // ecx
  unsigned int *v31; // ebp
  unsigned int *v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // eax
  int v35; // edx
  float v37; // [esp+0h] [ebp-58h]
  unsigned int *v39; // [esp+18h] [ebp-40h]
  int v40; // [esp+18h] [ebp-40h]
  int v41; // [esp+1Ch] [ebp-3Ch] BYREF
  int v42; // [esp+20h] [ebp-38h]
  int v43; // [esp+24h] [ebp-34h]
  int v44; // [esp+28h] [ebp-30h]
  int v45; // [esp+2Ch] [ebp-2Ch]
  int64_t v46; // [esp+30h] [ebp-28h]
  int64_t v47; // [esp+38h] [ebp-20h]
  int64_t v48; // [esp+40h] [ebp-18h]
  int64_t v49; // [esp+48h] [ebp-10h]
  double v50; // [esp+50h] [ebp-8h]

  v1 = (unsigned int *)this; /*0x5905d6*/
  IDA_LOBYTE(v2) = *((unsigned char *)this + 20); /*0x5905dd*/
  if ( (unsigned char)v2 ) /*0x5905e2*/
  {
    v3 = *((unsigned int *)this + 1); /*0x5905e8*/
    v4 = *(unsigned int *)(v3 + 16); /*0x5905eb*/
    IDA_LOBYTE(v2) = v4 - 1; /*0x5905ee*/
    if ( v4 - 1 > 0 ) /*0x5905f3*/
    {
      v5 = g_RandomMap_TerrainState; /*0x5905f9*/
      v6 = g_RandomMap_TileData; /*0x5905ff*/
      v42 = 1; /*0x590605*/
      v41 = 0; /*0x59060d*/
      while ( 1 ) /*0x590615*/
      {
        v7 = 0; /*0x590615*/
        if ( v6 <= 0 ) /*0x590619*/
        {
LABEL_9:
          v39 = 0; /*0x590640*/
        }
        else
        {
          v8 = v5; /*0x590625*/
          while ( *(unsigned int *)(*v8 + 8) != *(unsigned int *)(*(unsigned int *)(v3 + 4) + v41) ) /*0x59062c*/
          {
            ++v7; /*0x59062e*/
            ++v8; /*0x59062f*/
            if ( v7 >= v6 ) /*0x590634*/
            {
              v5 = g_RandomMap_TerrainState; /*0x590636*/
              v1 = (unsigned int *)this; /*0x59063c*/
              goto LABEL_9; /*0x59063c*/
            }
          }
          v5 = g_RandomMap_TerrainState; /*0x59068e*/
          v1 = (unsigned int *)this; /*0x590694*/
          v39 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + v7); /*0x59069b*/
        }
        if ( *(int *)(v39[1] + 16) <= 1 && (int)v39[3] <= 50 ) /*0x590659*/
          goto LABEL_28; /*0x590659*/
        v9 = v42; /*0x59065f*/
        v43 = v42; /*0x590665*/
        if ( v42 < v4 ) /*0x590669*/
          break; /*0x590669*/
LABEL_29:
        v41 += 4; /*0x590701*/
        v3 = v1[1]; /*0x59070d*/
        v42 = v9 + 1; /*0x590710*/
        v4 = *(unsigned int *)(v3 + 16); /*0x590715*/
        IDA_LOBYTE(v2) = v4 - 1; /*0x590718*/
        if ( v9 >= v4 - 1 ) /*0x59071d*/
          return v2; /*0x59071d*/
      }
      do /*0x5906f7*/
      {
        v10 = 0; /*0x59066f*/
        if ( v6 <= 0 ) /*0x590673*/
        {
LABEL_20:
          v13 = 0; /*0x5906a6*/
        }
        else
        {
          v11 = *(unsigned int *)(*(unsigned int *)(v3 + 4) + 4 * v9); /*0x590678*/
          v12 = v5; /*0x59067b*/
          while ( *(unsigned int *)(*v12 + 8) != v11 ) /*0x590682*/
          {
            ++v10; /*0x590684*/
            ++v12; /*0x590685*/
            if ( v10 >= v6 ) /*0x59068a*/
              goto LABEL_20; /*0x59068a*/
          }
          v13 = v5[v10]; /*0x5906a1*/
        }
        if ( (*(int *)(*(unsigned int *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(unsigned char *)(v13 + 20) ) /*0x5906b7*/
        {
          v14 = v39[4]; /*0x5906c5*/
          if ( *(unsigned int *)(v13 + 16) == v14 && v14 == v1[4] ) /*0x5906cf*/
          {
            RandomMap::PlaceBuildings(v1, (int)v39, v13); /*0x5906d5*/
            v5 = g_RandomMap_TerrainState; /*0x5906da*/
            v6 = g_RandomMap_TileData; /*0x5906e0*/
          }
        }
        v3 = v1[1]; /*0x5906e6*/
        v9 = v43 + 1; /*0x5906ed*/
        v15 = *(unsigned int *)(v3 + 16); /*0x5906ee*/
        v43 = v9; /*0x5906f1*/
      }
      while ( v9 < v15 ); /*0x5906f7*/
LABEL_28:
      v9 = v42; /*0x5906fd*/
      goto LABEL_29; /*0x5906fd*/
    }
  }
  else
  {
    v16 = *((unsigned int *)this + 1); /*0x59072b*/
    v17 = 0; /*0x59072e*/
    v42 = 0; /*0x590730*/
    if ( *(int *)(v16 + 16) > 0 ) /*0x590737*/
    {
      v18 = g_RandomMap_TileData; /*0x59073d*/
      do /*0x590952*/
      {
        v19 = 0; /*0x590743*/
        if ( v18 <= 0 ) /*0x590747*/
        {
LABEL_37:
          v22 = 0; /*0x59076e*/
        }
        else
        {
          v20 = *(unsigned int *)(*(unsigned int *)(v16 + 4) + 4 * v42); /*0x590756*/
          v21 = (char *)g_RandomMap_TerrainState; /*0x590759*/
          while ( *(unsigned int *)(*(unsigned int *)v21 + 8) != v20 ) /*0x590760*/
          {
            ++v19; /*0x590766*/
            v21 += 4; /*0x590767*/
            if ( v19 >= v18 ) /*0x59076c*/
              goto LABEL_37; /*0x59076c*/
          }
          v22 = *((unsigned int *)g_RandomMap_TerrainState + v19); /*0x5907ee*/
        }
        v23 = this; /*0x590770*/
        if ( *(unsigned int *)(v22 + 8) > *((unsigned int *)this + 2) && *(unsigned int *)(v22 + 16) != *((unsigned int *)this + 4) ) /*0x590788*/
        {
          v40 = 0; /*0x59078e*/
          do /*0x5907b6*/
          {
            v46 = (unsigned int)Random::State(&g_Randomizer); /*0x59079c*/
            v24 = Math::RoundToInt((double)v46 * 0.00000002351589501451605); /*0x5907ae*/
          }
          while ( v24 > 0x64 ); /*0x5907b6*/
          if ( (int)v24 >= dword_ABE044 ) /*0x5907be*/
          {
            v25 = 0; /*0x5907f6*/
          }
          else
          {
            do /*0x5907ea*/
            {
              v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5907ca*/
              v25 = Math::RoundToInt((double)v47 * 4.656612874161595e-10 + 1.0); /*0x5907e2*/
            }
            while ( v25 > 2 ); /*0x5907ea*/
          }
          v26 = *((unsigned int *)this + 4); /*0x5907f8*/
          v45 = v25 + 1; /*0x5907fc*/
          v27 = *(unsigned int *)(v22 + 16); /*0x590800*/
          v44 = 0; /*0x590805*/
          if ( v27 <= v26 ) /*0x590809*/
            v28 = *((unsigned int *)this + 2); /*0x590810*/
          else
            v28 = *(unsigned int *)(v22 + 8); /*0x59080b*/
          if ( v27 <= v26 ) /*0x590815*/
            v43 = *(unsigned int *)(v22 + 8); /*0x590823*/
          else
            v43 = *((unsigned int *)this + 2); /*0x59081a*/
          v29 = 0; /*0x59082d*/
          if ( g_RandomMap_TileData <= 0 ) /*0x590831*/
          {
LABEL_57:
            v31 = 0; /*0x59084e*/
          }
          else
          {
            v30 = (char *)g_RandomMap_TerrainState; /*0x590839*/
            while ( *(unsigned int *)(*(unsigned int *)v30 + 8) != v28 ) /*0x590840*/
            {
              ++v29; /*0x590846*/
              v30 += 4; /*0x590847*/
              if ( v29 >= g_RandomMap_TileData ) /*0x59084c*/
                goto LABEL_57; /*0x59084c*/
            }
            v31 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + v29); /*0x590960*/
          }
          v32 = RandomMap::TerrainAlloc(v31); /*0x590857*/
          if ( v45 <= 0 ) /*0x59085f*/
            goto LABEL_66; /*0x59085f*/
          do /*0x590913*/
          {
            if ( v17 >= 100 ) /*0x590868*/
              break; /*0x590868*/
            v33 = v32[4] - 1; /*0x590879*/
            v48 = (unsigned int)v32[4]; /*0x59087d*/
            v50 = (double)v48; /*0x590885*/
            do /*0x5908b4*/
            {
              v49 = (unsigned int)Random::State(&g_Randomizer); /*0x590893*/
              v34 = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
            }
            while ( v34 > v33 ); /*0x5908b4*/
            v41 = *(unsigned int *)(v32[1] + 4 * v34); /*0x5908c8*/
            if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (int16_t *)&v41, 1) ) /*0x5908cc*/
            {
              v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
              v40 += (uint8_t)RandomMap::CheckCellPlacement((int)&v41, v43, v37) != 0; /*0x590900*/
            }
            v44 = ++v17; /*0x59090f*/
          }
          while ( v40 < v45 ); /*0x590913*/
          if ( !v40 ) /*0x59091f*/
LABEL_66:
            *((unsigned char *)this + 27) = 0; /*0x590925*/
          if ( v32 ) /*0x59092b*/
            (*(void (**)(unsigned int *, int))*v32)(v32, 1); /*0x590933*/
          v18 = g_RandomMap_TileData; /*0x590935*/
          v23 = this; /*0x59093b*/
          v17 = 0; /*0x59093f*/
        }
        v16 = *(unsigned int *)(v23 + 4); /*0x590941*/
        v2 = v42 + 1; /*0x590948*/
        v35 = *(unsigned int *)(v16 + 16); /*0x590949*/
        v42 = v2; /*0x59094c*/
      }
      while ( v2 < v35 ); /*0x590952*/
    }
  }
  return v2; /*0x590723*/

}
}
// 0x590970
namespace gamemd {
int RandomMap::CheckCellPlacement(short * a1, void * a2, DynamicVector * aP3)
{

  int16_t *v4; // esi
  void *v5; // edi
  DynamicVector *v7; // ebx
  char v9; // cl
  int16_t v10; // ax
  int16_t v11; // cx
  int16_t v12; // ax
  int16_t v13; // cx
  int16_t v14; // ax
  int16_t v15; // cx
  int16_t v16; // ax
  int16_t v17; // cx
  int16_t v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // eax
  int16_t v21; // cx
  unsigned int v22; // eax
  unsigned int v23; // eax
  int16_t v24; // cx
  int16_t v25; // ax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int16_t v28; // cx
  int16_t v29; // ax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int16_t v32; // dx
  int16_t v33; // cx
  int16_t v34; // cx
  int16_t v35; // cx
  int16_t v36; // ax
  int16_t v37; // ax
  int16_t v38; // si
  unsigned char v39[5]; // [esp+13h] [ebp-Dh] BYREF
  int64_t v40; // [esp+18h] [ebp-8h]

  v4 = a1; /*0x59097a*/
  v5 = a2; /*0x59097f*/
  v39[0] = 1; /*0x59098f*/
  v7 = (DynamicVector *)RandomMap::CheckNeighborhoodCompatibility(this, a1, (DynamicVector *)v39, (int)a2, aP3); /*0x590999*/
  if ( !v39[0] ) /*0x5909a1*/
    return 0; /*0x5909a6*/
  v9 = 0; /*0x5909af*/
  if ( v7 == (DynamicVector *)255 ) /*0x5909b7*/
    return 0; /*0x5909bc*/
  if ( ((uint8_t)v7 & 0x82) != 0x82 || ((uint8_t)v7 & 0x38) != 0 ) /*0x5909d5*/
    goto LABEL_86; /*0x5909d5*/
  v10 = *v4; /*0x5909d7*/
  *(unsigned short *)&v39[1] = *v4 - 1; /*0x5909e0*/
  v11 = v4[1]; /*0x5909e5*/
  IDA_LOWORD(a1) = v10 + 5; /*0x5909e9*/
  *(unsigned short *)&v39[3] = v11 - 5; /*0x5909f5*/
  IDA_HIWORD(a1) = v11 + 1; /*0x5909fa*/
  if ( ((uint8_t)v7 & 0x40) != 0 ) /*0x5909ff*/
    ++*(unsigned short *)&v39[3]; /*0x590a01*/
  if ( ((uint8_t)v7 & 4) != 0 ) /*0x590a09*/
    IDA_LOWORD(a1) = (unsigned short)a1 - 1; /*0x590a0b*/
  v9 = PlaceMapSeedCityBlockVariant2(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590a22*/
  if ( !v9 ) /*0x590a26*/
  {
LABEL_86:
    if ( ((uint8_t)v7 & 0xA) != 0xA || ((uint8_t)v7 & 0x11) != 0 ) /*0x590a39*/
      goto LABEL_87; /*0x590a39*/
    v12 = *v4; /*0x590a3b*/
    *(unsigned short *)&v39[1] = *v4 + 5; /*0x590a42*/
    v13 = v4[1]; /*0x590a47*/
    IDA_LOWORD(a1) = v12 - 1; /*0x590a4b*/
    *(unsigned short *)&v39[3] = v13 - 1; /*0x590a59*/
    IDA_HIWORD(a1) = v13 + 5; /*0x590a5e*/
    if ( ((uint8_t)v7 & 0x10) != 0 ) /*0x590a63*/
      --IDA_HIWORD(a1); /*0x590a65*/
    if ( ((uint8_t)v7 & 1) != 0 ) /*0x590a6d*/
      --*(unsigned short *)&v39[1]; /*0x590a6f*/
    v9 = MapSeed::PlaceCityBlock2(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590a86*/
    if ( !v9 ) /*0x590a8a*/
    {
LABEL_87:
      if ( ((uint8_t)v7 & 0x28) != 0x28 || ((uint8_t)v7 & 0x83) != 0 ) /*0x590a9d*/
        goto LABEL_88; /*0x590a9d*/
      v14 = *v4; /*0x590a9f*/
      *(unsigned short *)&v39[1] = *v4 + 1; /*0x590aa8*/
      v15 = v4[1]; /*0x590aad*/
      IDA_LOWORD(a1) = v14 - 5; /*0x590ab1*/
      *(unsigned short *)&v39[3] = v15 + 5; /*0x590abd*/
      IDA_HIWORD(a1) = v15 - 1; /*0x590ac2*/
      if ( ((uint8_t)v7 & 0x40) != 0 ) /*0x590ac7*/
        IDA_LOWORD(a1) = (unsigned short)a1 - 1; /*0x590ac9*/
      if ( ((uint8_t)v7 & 4) != 0 ) /*0x590ad1*/
        --*(unsigned short *)&v39[3]; /*0x590ad3*/
      v9 = PlaceMapSeedCityBlockDiagonal(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590aea*/
      if ( !v9 ) /*0x590aee*/
      {
LABEL_88:
        if ( ((uint8_t)v7 & 0xA0) != 0xA0 || ((uint8_t)v7 & 0xE) != 0 ) /*0x590b04*/
          goto LABEL_89; /*0x590b04*/
        v16 = *v4; /*0x590b06*/
        *(unsigned short *)&v39[1] = *v4 - 5; /*0x590b0d*/
        v17 = v4[1]; /*0x590b12*/
        IDA_LOWORD(a1) = v16 + 1; /*0x590b16*/
        *(unsigned short *)&v39[3] = v17 + 1; /*0x590b24*/
        IDA_HIWORD(a1) = v17 - 5; /*0x590b29*/
        if ( ((uint8_t)v7 & 1) != 0 ) /*0x590b2e*/
          ++IDA_HIWORD(a1); /*0x590b30*/
        if ( ((uint8_t)v7 & 0x10) != 0 ) /*0x590b38*/
          ++*(unsigned short *)&v39[1]; /*0x590b3a*/
        v9 = PlaceMapSeedCityBlockDiagonal(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590b51*/
        if ( !v9 ) /*0x590b55*/
        {
LABEL_89:
          if ( ((uint8_t)v7 & 0x70) != 0 || ((uint8_t)v7 & 0x88) == 0 ) /*0x590b67*/
            goto LABEL_90; /*0x590b67*/
          v18 = v4[1]; /*0x590b6d*/
          *(unsigned short *)&v39[1] = *v4 - 1; /*0x590b7f*/
          *(unsigned short *)&v39[3] = v18 - 4; /*0x590b84*/
          IDA_LOWORD(a1) = *(unsigned short *)&v39[1]; /*0x590b89*/
          IDA_HIWORD(a1) = v18 + 4; /*0x590b8e*/
          if ( (char)v7 < 0 ) /*0x590b93*/
          {
            ++*(unsigned short *)&v39[3]; /*0x590b95*/
            ++IDA_HIWORD(a1); /*0x590b9a*/
          }
          if ( ((uint8_t)v7 & 8) != 0 ) /*0x590ba2*/
          {
            --IDA_HIWORD(a1); /*0x590ba4*/
            --*(unsigned short *)&v39[3]; /*0x590ba9*/
          }
          do /*0x590bd6*/
          {
            v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590bb8*/
            v19 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
          }
          while ( v19 > 1 ); /*0x590bd6*/
          *(unsigned short *)&v39[1] += v19; /*0x590bd8*/
          do /*0x590c05*/
          {
            v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590be7*/
            v20 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
          }
          while ( v20 > 1 ); /*0x590c05*/
          IDA_LOWORD(a1) = v20 + (unsigned short)a1; /*0x590c07*/
          v9 = RandomMap::CheckPlacementArea(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590c1e*/
          if ( !v9 ) /*0x590c22*/
          {
LABEL_90:
            if ( ((uint8_t)v7 & 7) != 0 || ((uint8_t)v7 & 0x88) == 0 ) /*0x590c34*/
              goto LABEL_91; /*0x590c34*/
            v21 = v4[1]; /*0x590c3a*/
            *(unsigned short *)&v39[1] = *v4 + 1; /*0x590c4c*/
            *(unsigned short *)&v39[3] = v21 + 4; /*0x590c51*/
            IDA_LOWORD(a1) = *(unsigned short *)&v39[1]; /*0x590c56*/
            IDA_HIWORD(a1) = v21 - 4; /*0x590c5b*/
            if ( (char)v7 < 0 ) /*0x590c60*/
            {
              ++IDA_HIWORD(a1); /*0x590c62*/
              ++*(unsigned short *)&v39[3]; /*0x590c67*/
            }
            if ( ((uint8_t)v7 & 8) != 0 ) /*0x590c6f*/
            {
              --*(unsigned short *)&v39[3]; /*0x590c71*/
              --IDA_HIWORD(a1); /*0x590c76*/
            }
            do /*0x590ca3*/
            {
              v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590c85*/
              v22 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
            }
            while ( v22 > 1 ); /*0x590ca3*/
            *(unsigned short *)&v39[1] += v22 - 1; /*0x590ca6*/
            do /*0x590cd3*/
            {
              v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590cb5*/
              v23 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
            }
            while ( v23 > 1 ); /*0x590cd3*/
            IDA_LOWORD(a1) = v23 - 1 + (unsigned short)a1; /*0x590cd7*/
            v9 = PlaceMapSeedCityArea(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590ced*/
            if ( !v9 ) /*0x590cf1*/
            {
LABEL_91:
              if ( ((uint8_t)v7 & 0xC1) != 0 || ((uint8_t)v7 & 0x22) == 0 ) /*0x590d03*/
                goto LABEL_64; /*0x590d03*/
              v24 = *v4; /*0x590d09*/
              v25 = v4[1] - 1; /*0x590d10*/
              *(unsigned short *)&v39[1] = *v4 + 4; /*0x590d1b*/
              *(unsigned short *)&v39[3] = v25; /*0x590d20*/
              IDA_LOWORD(a1) = v24 - 4; /*0x590d25*/
              IDA_HIWORD(a1) = v25; /*0x590d2a*/
              if ( ((uint8_t)v7 & 0x20) != 0 ) /*0x590d2f*/
              {
                IDA_LOWORD(a1) = (unsigned short)a1 + 1; /*0x590d31*/
                ++*(unsigned short *)&v39[1]; /*0x590d36*/
              }
              if ( ((uint8_t)v7 & 2) != 0 ) /*0x590d3e*/
              {
                --*(unsigned short *)&v39[1]; /*0x590d40*/
                IDA_LOWORD(a1) = (unsigned short)a1 - 1; /*0x590d45*/
              }
              do /*0x590d72*/
              {
                v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590d54*/
                v26 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
              }
              while ( v26 > 1 ); /*0x590d72*/
              *(unsigned short *)&v39[3] += v26; /*0x590d74*/
              do /*0x590da1*/
              {
                v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590d83*/
                v27 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
              }
              while ( v27 > 1 ); /*0x590da1*/
              IDA_HIWORD(a1) += v27; /*0x590da3*/
              v9 = MapSeed::PlaceCityBuildings(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590dba*/
              if ( !v9 ) /*0x590dbe*/
              {
LABEL_64:
                if ( ((uint8_t)v7 & 0x1C) == 0 && ((uint8_t)v7 & 0x22) != 0 ) /*0x590dd0*/
                {
                  v28 = *v4; /*0x590dd6*/
                  v29 = v4[1] + 1; /*0x590ddd*/
                  *(unsigned short *)&v39[1] = *v4 - 4; /*0x590de8*/
                  *(unsigned short *)&v39[3] = v29; /*0x590ded*/
                  IDA_LOWORD(a1) = v28 + 4; /*0x590df2*/
                  IDA_HIWORD(a1) = v29; /*0x590df7*/
                  if ( ((uint8_t)v7 & 0x20) != 0 ) /*0x590dfc*/
                  {
                    ++*(unsigned short *)&v39[1]; /*0x590dfe*/
                    IDA_LOWORD(a1) = (unsigned short)a1 + 1; /*0x590e03*/
                  }
                  if ( ((uint8_t)v7 & 2) != 0 ) /*0x590e0b*/
                  {
                    IDA_LOWORD(a1) = (unsigned short)a1 - 1; /*0x590e0d*/
                    --*(unsigned short *)&v39[1]; /*0x590e12*/
                  }
                  do /*0x590e3f*/
                  {
                    v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590e21*/
                    v30 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                  }
                  while ( v30 > 1 ); /*0x590e3f*/
                  *(unsigned short *)&v39[3] += v30 - 1; /*0x590e42*/
                  do /*0x590e6f*/
                  {
                    v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590e51*/
                    v31 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                  }
                  while ( v31 > 1 ); /*0x590e6f*/
                  IDA_HIWORD(a1) += v31 - 1; /*0x590e73*/
                  v9 = MapSeed::PlaceCityBlock(this, (int16_t *)&v39[1], (int16_t *)&a1, v5); /*0x590e89*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *(float *)&aP3 > 0.5 && !v9 ) /*0x590ea2*/
  {
    if ( ((uint8_t)v7 & 8) != 0 /*0x590eec*/
      || (v32 = *v4 - 4,
          v33 = *v4 + 4,
          IDA_HIWORD(a1) = v4[1] + 1,
          IDA_HIWORD(aP3) = IDA_HIWORD(a1),
          IDA_LOWORD(aP3) = v33,
          IDA_LOWORD(a1) = v32,
          (v9 = MapSeed::PlaceCityBlock(this, (int16_t *)&a1, (int16_t *)&aP3, a2)) == 0) )
    {
      if ( ((uint8_t)v7 & 2) != 0 /*0x590f34*/
        || (v34 = v4[1],
            IDA_LOWORD(a1) = *v4 + 1,
            IDA_LOWORD(aP3) = (unsigned short)a1,
            IDA_HIWORD(aP3) = v34 - 4,
            IDA_HIWORD(a1) = v34 + 4,
            (v9 = PlaceMapSeedCityArea(this, (int16_t *)&a1, (int16_t *)&aP3, a2)) == 0) )
      {
        if ( ((uint8_t)v7 & 8) != 0 /*0x590f7b*/
          || (v35 = *v4 - 4,
              IDA_LOWORD(a1) = *v4 + 4,
              v36 = v4[1] - 1,
              IDA_LOWORD(aP3) = v35,
              IDA_HIWORD(a1) = v36,
              IDA_HIWORD(aP3) = v36,
              (v9 = MapSeed::PlaceCityBuildings(this, (int16_t *)&a1, (int16_t *)&aP3, a2)) == 0) )
        {
          if ( ((uint8_t)v7 & 0x20) == 0 ) /*0x590f80*/
          {
            v37 = *v4; /*0x590f82*/
            v38 = v4[1]; /*0x590f85*/
            IDA_LOWORD(a1) = v37 - 1; /*0x590f92*/
            IDA_LOWORD(aP3) = v37 - 1; /*0x590f97*/
            IDA_HIWORD(a1) = v38 - 4; /*0x590f9c*/
            IDA_HIWORD(aP3) = v38 + 4; /*0x590fb1*/
            return RandomMap::CheckPlacementArea(this, (int16_t *)&a1, (int16_t *)&aP3, a2); /*0x590fbb*/
          }
        }
      }
    }
  }
  return v9; /*0x5909a3*/

}
}
// 0x590FD0
namespace gamemd {
int RandomMap::CheckNeighborhoodCompatibility(unsigned short * a1, DynamicVector * aP2, int a4, DynamicVector * aP4)
{

  int16_t v6; // cx
  DynamicVector *v7; // ebx
  int v8; // edx
  int v10; // esi
  int v11; // edi
  DynamicVector *v12; // ebx
  int v13; // edx
  int v14; // [esp+0h] [ebp-18h]
  DynamicVector *v15; // [esp+4h] [ebp-14h]
  DynamicVector *v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]
  DynamicVector *a1a; // [esp+1Ch] [ebp+4h]
  int aP4a; // [esp+28h] [ebp+10h]

  v15 = (DynamicVector *)Math::RoundToInt((15.0 - 5.0) * (1.0 - *(float *)&aP4) + 5.0); /*0x591000*/
  v6 = a1[1] - 2; /*0x591010*/
  v7 = (DynamicVector *)(int16_t)(*a1 - 2); /*0x591014*/
  v8 = *((char *)this + 2); /*0x59101a*/
  v14 = v6; /*0x59101d*/
  v17 = v6; /*0x591021*/
  v18 = 5; /*0x59102a*/
  v19 = 5; /*0x59102e*/
  a1a = v7; /*0x59103b*/
  v16 = v7; /*0x59103f*/
  if ( Map_Check((int16_t *)&v16, v8, a4, (int)v15) ) /*0x591043*/
  {
    v10 = 0; /*0x59105d*/
    aP4a = 0; /*0x591060*/
    while ( 1 ) /*0x59106a*/
    {
      v11 = 0; /*0x59106a*/
      v12 = (DynamicVector *)((char *)v7 - 5); /*0x59106c*/
      do /*0x5910d1*/
      {
        if ( v10 != 1 || v11 != 1 ) /*0x591076*/
        {
          v16 = v12; /*0x59107c*/
          v13 = *((char *)this + 2); /*0x591088*/
          v18 = 5; /*0x591094*/
          v19 = 5; /*0x591098*/
          v17 = v10 + v14 + 4 * v10 - 5; /*0x5910a0*/
          if ( Map_Check((int16_t *)&v16, v13, a4, (int)v15) ) /*0x5910a9*/
            aP4a |= dword_82AF18[2 * v10 + v11 + v10]; /*0x5910c6*/
        }
        ++v11; /*0x5910ca*/
        v12 = (DynamicVector *)((char *)v12 + 5); /*0x5910cb*/
      }
      while ( v11 < 3 ); /*0x5910d1*/
      if ( ++v10 >= 3 ) /*0x5910d7*/
        break; /*0x5910d7*/
      v7 = a1a; /*0x591066*/
    }
    return aP4a; /*0x5910d9*/
  }
  else
  {
    aP2->__pad_0[0] = 0; /*0x591052*/
    return 0; /*0x591054*/
  }

}
}
// 0x592440
namespace gamemd {
ObjectClass * * RandomMap::CheckPlacementArea(short * a2, short * a3, ObjectClass * aP2)
{

  int16_t v5; // ax
  int16_t v6; // bp
  int16_t v7; // si
  int v8; // eax
  char result; // al
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  ObjectClass *v14; // ecx
  int v15; // esi
  int v16; // kr00_4
  int v17; // ebx
  char *v18; // ebp
  int v19; // esi
  unsigned char *v20; // ebp
  int v21; // edx
  int v22; // ebp
  int v23; // esi
  int v24; // esi
  unsigned char *v25; // ebp
  int v26; // ebp
  int v27; // edx
  int v28; // esi
  unsigned char *v29; // eax
  int16_t *v30; // ebp
  int v31; // esi
  char *v32; // edx
  int v33; // ecx
  int v34; // ebx
  int16_t v35; // dx
  int v36; // edx
  int16_t v37; // dx
  int v38; // ecx
  int16_t v39; // dx
  int v40; // ecx
  int v41; // esi
  int v42; // ebx
  unsigned int v43; // eax
  BOOL v44; // ecx
  int16_t v45; // bp
  char *v46; // esi
  int v47; // ebx
  bool v48; // zf
  int16_t v49; // cx
  int16_t v50; // dx
  int16_t v51; // ax
  unsigned char *v52; // eax
  char v53; // dl
  uint8_t v54; // cl
  CCINIClass *v55; // edx
  bool v56; // cc
  int v57; // esi
  int16_t v58; // bp
  int16_t v59; // dx
  int16_t v60; // ax
  int16_t v61; // ax
  unsigned char *v62; // eax
  char v63; // dl
  char v64; // dl
  int v66; // [esp+14h] [ebp-54h] BYREF
  int v67; // [esp+18h] [ebp-50h]
  char *v68; // [esp+1Ch] [ebp-4Ch]
  ObjectClass *v69; // [esp+20h] [ebp-48h]
  int v70; // [esp+24h] [ebp-44h] BYREF
  int v71; // [esp+28h] [ebp-40h] BYREF
  int v72; // [esp+2Ch] [ebp-3Ch] BYREF
  int v73; // [esp+30h] [ebp-38h]
  int v74; // [esp+38h] [ebp-30h]
  int16_t v75; // [esp+40h] [ebp-28h]
  int16_t v76; // [esp+42h] [ebp-26h]
  int64_t v77; // [esp+48h] [ebp-20h]
  ObjectClass *v78; // [esp+50h] [ebp-18h]
  ObjectClass *v79; // [esp+58h] [ebp-10h] BYREF
  char *v80; // [esp+5Ch] [ebp-Ch]
  int v81; // [esp+60h] [ebp-8h]
  int v82; // [esp+64h] [ebp-4h]
  ObjectClass *v83; // [esp+6Ch] [ebp+4h]

  v5 = *a2; /*0x592456*/
  v6 = *a2; /*0x59245c*/
  if ( *a2 <= *a3 ) /*0x59245e*/
    v6 = *a3; /*0x592460*/
  v7 = *a2; /*0x592465*/
  if ( v5 >= *a3 ) /*0x592467*/
  {
    v7 = *a3; /*0x592469*/
    v5 = *a3; /*0x592470*/
  }
  v79 = (ObjectClass *)(v5 - 7); /*0x592478*/
  v8 = a2[1]; /*0x59247c*/
  v80 = (char *)(v8 - 4); /*0x592483*/
  v82 = a3[1] - v8 + 9; /*0x59249f*/
  v81 = v6 - v7 + 11; /*0x5924a9*/
  result = BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v79, aP2); /*0x5924ad*/
  if ( result ) /*0x5924b4*/
  {
    v10 = *a2; /*0x5924c0*/
    v11 = a3[1]; /*0x5924c8*/
    v71 = *a3 - v10; /*0x5924cc*/
    v12 = v11 - a2[1]; /*0x5924d9*/
    v83 = (ObjectClass *)abs32(v71); /*0x5924db*/
    if ( (int)v83 <= v12 - 5 ) /*0x5924e4*/
    {
      v13 = v12 + 1; /*0x5924f2*/
      v14 = v79; /*0x5924f5*/
      v15 = v10 - (unsigned int)v79; /*0x5924fc*/
      v16 = v13; /*0x5924fe*/
      v17 = v13 / 2 + 2; /*0x592506*/
      v18 = v80; /*0x592509*/
      IDA_LODWORD(v77) = v79; /*0x59250b*/
      v68 = v80; /*0x59250f*/
      v70 = (int)&v80[v17 + 2]; /*0x592519*/
      if ( (int)v80 < v70 ) /*0x59251d*/
      {
        v67 = (int)&v79->__pad_0[v15]; /*0x592521*/
        do /*0x592596*/
        {
          v19 = v77; /*0x592525*/
          if ( (int)v77 < v67 ) /*0x592531*/
          {
            do /*0x592585*/
            {
              IDA_LOWORD(v66) = v19; /*0x592537*/
              IDA_HIWORD(v66) = (unsigned short)v18; /*0x59253c*/
              if ( MapSeed::IsCellInBounds((int16_t *)&v66) ) /*0x592541*/
              {
                SetLayerDataMap((int16_t *)&v66, (int)aP2); /*0x592552*/
                v20 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v66); /*0x59256a*/
                v20[283] = *(unsigned char *)(List::FindByValue(aP2) + 16); /*0x592574*/
                v18 = v68; /*0x59257a*/
              }
              ++v19; /*0x592582*/
            }
            while ( v19 < v67 ); /*0x592585*/
            v14 = v79; /*0x592587*/
          }
          v68 = ++v18; /*0x592592*/
        }
        while ( (int)v18 < v70 ); /*0x592596*/
      }
      IDA_LODWORD(v77) = v14; /*0x59259c*/
      v21 = *a3 - (unsigned int)v14; /*0x5925a9*/
      v23 = a3[1] + 5; /*0x5925b0*/
      v67 = a3[1] - v17 + 3; /*0x5925b4*/
      v22 = v67; /*0x5925ae*/
      v70 = v23; /*0x5925ba*/
      if ( v67 < v23 ) /*0x5925be*/
      {
        v68 = &v14->__pad_0[v21]; /*0x5925c2*/
        do /*0x592635*/
        {
          v24 = v77; /*0x5925c6*/
          if ( (int)v77 < (int)v68 ) /*0x5925d0*/
          {
            do /*0x592624*/
            {
              IDA_LOWORD(v66) = v24; /*0x5925d6*/
              IDA_HIWORD(v66) = v22; /*0x5925db*/
              if ( MapSeed::IsCellInBounds((int16_t *)&v66) ) /*0x5925e0*/
              {
                SetLayerDataMap((int16_t *)&v66, (int)aP2); /*0x5925f1*/
                v25 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v66); /*0x592609*/
                v25[283] = *(unsigned char *)(List::FindByValue(aP2) + 16); /*0x592613*/
                v22 = v67; /*0x592619*/
              }
              ++v24; /*0x592621*/
            }
            while ( v24 < (int)v68 ); /*0x592624*/
            v14 = v79; /*0x592626*/
          }
          v67 = ++v22; /*0x592631*/
        }
        while ( v22 < v70 ); /*0x592635*/
      }
      v26 = *a2; /*0x592637*/
      v27 = v81; /*0x59263a*/
      v70 = v26; /*0x59263e*/
      v67 = a2[1]; /*0x592648*/
      v78 = (ObjectClass *)((char *)v14 + v81 - v26 - 1); /*0x592652*/
      v69 = (ObjectClass *)(v17 + v67 - 1); /*0x59265c*/
      if ( v67 < (int)v69 ) /*0x592660*/
      {
        v68 = &v78->__pad_0[v26]; /*0x592668*/
        do /*0x5926de*/
        {
          v28 = v26; /*0x592670*/
          if ( v26 < (int)v68 ) /*0x592674*/
          {
            do /*0x5926c5*/
            {
              IDA_LOWORD(v66) = v28; /*0x59267b*/
              IDA_HIWORD(v66) = v67; /*0x592680*/
              if ( MapSeed::IsCellInBounds((int16_t *)&v66) ) /*0x592689*/
              {
                SetLayerDataMap((int16_t *)&v66, *((unsigned int *)this + 2)); /*0x59269d*/
                v29 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v66); /*0x5926ac*/
                v26 = v70; /*0x5926b4*/
                v29[283] = *((unsigned char *)this + 16); /*0x5926b8*/
              }
              ++v28; /*0x5926c2*/
            }
            while ( v28 < (int)v68 ); /*0x5926c5*/
            v27 = v81; /*0x5926c7*/
            v14 = v79; /*0x5926cb*/
          }
          ++v67; /*0x5926da*/
        }
        while ( v67 < (int)v69 ); /*0x5926de*/
      }
      v30 = a3; /*0x5926e0*/
      v31 = *a3; /*0x5926e8*/
      v32 = &v14->__pad_0[v27 - v31 - 1]; /*0x5926f3*/
      v67 = a3[1] - v17 + 3; /*0x5926f7*/
      v33 = v16 / 2 + v67; /*0x5926fb*/
      v70 = v33; /*0x592701*/
      if ( v67 < v33 ) /*0x592705*/
      {
        v68 = &v32[v31]; /*0x592709*/
        do /*0x592777*/
        {
          v34 = v31; /*0x592711*/
          if ( v31 < (int)v68 ) /*0x592715*/
          {
            do /*0x592766*/
            {
              IDA_LOWORD(v66) = v34; /*0x592720*/
              IDA_HIWORD(v66) = v67; /*0x592725*/
              if ( MapSeed::IsCellInBounds((int16_t *)&v66) ) /*0x59272a*/
              {
                SetLayerDataMap((int16_t *)&v66, *((unsigned int *)this + 2)); /*0x59273e*/
                *((unsigned char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v66) + 283) = *((unsigned char *)this + 16); /*0x592759*/
              }
              ++v34; /*0x592763*/
            }
            while ( v34 < (int)v68 ); /*0x592766*/
            v33 = v70; /*0x592768*/
          }
          ++v67; /*0x592773*/
        }
        while ( v67 < v33 ); /*0x592777*/
      }
      v35 = *a2 - 3; /*0x592788*/
      IDA_HIWORD(v68) = a2[1]; /*0x59278c*/
      IDA_LOWORD(v68) = v35; /*0x592796*/
      v36 = *((unsigned int *)this + 4); /*0x59279f*/
      v70 = (int)v68; /*0x5927a2*/
      PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode + 3, &v70, (int)aP2, v36); /*0x5927af*/
      v37 = a3[1] - 2; /*0x5927c0*/
      IDA_LOWORD(v68) = *a3 - 3; /*0x5927c4*/
      v38 = *((unsigned int *)this + 4); /*0x5927c9*/
      IDA_HIWORD(v68) = v37; /*0x5927cc*/
      v70 = (int)v68; /*0x5927d5*/
      PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1], &v70, (int)aP2, v38); /*0x5927e7*/
      v39 = a3[1] - 1; /*0x5927f6*/
      IDA_LOWORD(v68) = *a3 - 1; /*0x5927f8*/
      v40 = *((unsigned int *)this + 4); /*0x5927fd*/
      IDA_HIWORD(v68) = v39; /*0x592800*/
      v70 = (int)v68; /*0x592809*/
      PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1] + 1, &v70, (int)aP2, v40); /*0x59281b*/
      v41 = v71; /*0x592820*/
      v42 = 0; /*0x592824*/
      v73 = 0; /*0x592828*/
      if ( v71 ) /*0x592832*/
      {
        do /*0x59285c*/
        {
          v77 = (unsigned int)Random::State(&g_Randomizer); /*0x592842*/
          v43 = Math::RoundToInt((double)v77 * 4.656612874161595e-10); /*0x592854*/
        }
        while ( v43 > 1 ); /*0x59285c*/
        v44 = v41 > 0; /*0x592862*/
        v68 = (char *)v44; /*0x59286f*/
        v74 = v44; /*0x592873*/
        if ( v43 == 1 ) /*0x59287d*/
        {
          IDA_LOWORD(v73) = v41; /*0x592884*/
          IDA_HIWORD(v73) = (unsigned short)v83; /*0x592889*/
        }
        else
        {
          IDA_HIWORD(v74) = a3[1] - (unsigned short)v83 - a2[1] - 5; /*0x5928a0*/
        }
        v66 = 0; /*0x5928a9*/
        if ( (int)v83 > 0 ) /*0x5928af*/
        {
          v67 = 0; /*0x5928b5*/
          while ( 1 ) /*0x5928c4*/
          {
            v45 = 0; /*0x5928c4*/
            v46 = (char *)&unk_82AFF0; /*0x5928c6*/
            v47 = 20 * v44 + 8564740; /*0x5928cb*/
            while ( 1 ) /*0x5928d8*/
            {
              v48 = !v44; /*0x5928d8*/
              v49 = v66; /*0x5928da*/
              if ( v48 ) /*0x5928de*/
                v49 = v67; /*0x5928e0*/
              v50 = *a2; /*0x5928e4*/
              IDA_LOWORD(v71) = -v45; /*0x5928eb*/
              v51 = a2[1] + 3; /*0x5928f4*/
              v75 = v50; /*0x5928f8*/
              v76 = v51; /*0x5928fd*/
              IDA_LOWORD(v77) = v50 - v45; /*0x592910*/
              IDA_WORD1(v77) = v66 + v51; /*0x59291f*/
              IDA_LOWORD(v69) = v74 + v50 - v45; /*0x59292e*/
              IDA_HIWORD(v69) = v66 + v51 + IDA_HIWORD(v74); /*0x592939*/
              IDA_LOWORD(v70) = v49 + (unsigned short)v69; /*0x592948*/
              IDA_HIWORD(v70) = IDA_HIWORD(v69); /*0x59294d*/
              v72 = v70; /*0x59295c*/
              v52 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v72); /*0x592960*/
              v53 = *v46; /*0x592969*/
              v46 += 4; /*0x59296b*/
              v47 += 4; /*0x59296e*/
              v52[283] = *((unsigned char *)this + 16) + v53 - 4; /*0x592977*/
              v54 = *(unsigned char *)(v47 - 4); /*0x59297d*/
              v52[284] = v54; /*0x592980*/
              v55 = g_CellTileLookup; /*0x592986*/
              ++v45; /*0x592992*/
              v52[282] = 0; /*0x592999*/
              *((unsigned int *)v52 + 14) = &v55->__pad_0[v54 - 1]; /*0x5929a4*/
              if ( (int)v46 >= (int)byte_82B004 ) /*0x5929a7*/
                break; /*0x5929a7*/
              v44 = (BOOL)v68; /*0x5928d4*/
            }
            v56 = ++v66 < (int)v83; /*0x5929bb*/
            --v67; /*0x5929c1*/
            if ( !v56 ) /*0x5929c5*/
              break; /*0x5929c5*/
            v44 = (BOOL)v68; /*0x5928bb*/
          }
          v30 = a3; /*0x5929cb*/
          v42 = 0; /*0x5929cf*/
        }
      }
      v57 = 0; /*0x5929e1*/
      if ( v30[1] - a2[1] - (int)v83 - 5 > 0 ) /*0x5929e8*/
      {
        v58 = IDA_HIWORD(v73); /*0x5929ee*/
        while ( 1 ) /*0x592ab2*/
        {
          do /*0x592ab2*/
          {
            v59 = *a2; /*0x5929fa*/
            v60 = a2[1] + 3; /*0x5929ff*/
            IDA_LOWORD(v72) = -(int16_t)v42; /*0x592a05*/
            IDA_LOWORD(v77) = v59; /*0x592a0a*/
            IDA_WORD1(v77) = v60; /*0x592a13*/
            v75 = v59 - v42; /*0x592a28*/
            v76 = v57 + v60; /*0x592a2d*/
            v61 = v58 + v57 + v60; /*0x592a3c*/
            IDA_LOWORD(v70) = v73 + v59 - v42; /*0x592a3e*/
            IDA_HIWORD(v70) = v58 + v76; /*0x592a43*/
            v71 = v70; /*0x592a4c*/
            if ( g_MapTileArray ) /*0x592a58*/
              *((unsigned int *)g_MapTileArray + 20 * (int16_t)(v73 + v59 - v42) + 20 * unk_89C2DC * v61 + 14) = aP2; /*0x592a73*/
            v62 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v71); /*0x592a81*/
            v63 = *((unsigned char *)this + 16); /*0x592a8a*/
            v62[284] = 1; /*0x592a8d*/
            v64 = v63 - v42++ - 1; /*0x592a96*/
            v62[283] = v64; /*0x592a99*/
            *((unsigned int *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
            v62[282] = 0; /*0x592aab*/
          }
          while ( v42 < 4 ); /*0x592ab2*/
          if ( ++v57 >= a3[1] - a2[1] - (int)v83 - 5 ) /*0x592ad2*/
            break; /*0x592ad2*/
          v42 = 0; /*0x5929f4*/
        }
      }
      return 1; /*0x592adb*/
    }
    else
    {
      return 0; /*0x5924e9*/
    }
  }
  return result; /*0x5924b6*/

}
}
// 0x5958E0
namespace gamemd {
CampaignClass * * RandomMap::CleanupRandomMapData()
{

  int v2; // ecx
  int v3; // eax
  int i; // ebp
  void *v5; // edi
  void (***v6)(unsigned int, int); // ecx
  void *v7; // edi
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax

  if ( g_MapTileArray ) /*0x5958ee*/
  {
    v2 = unk_89C2DC * unk_89C2DC; /*0x5958f6*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5958fb*/
    {
      v3 = 0; /*0x5958fd*/
      do /*0x59591a*/
      {
        v3 += 80; /*0x595908*/
        --v2; /*0x59590b*/
        *(unsigned int *)((char *)g_MapTileArray + v3 - 24) = -1; /*0x59590c*/
        *(unsigned int *)((char *)g_MapTileArray + v3 - 20) = -1; /*0x595916*/
      }
      while ( v2 ); /*0x59591a*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x595927*/
  {
    v5 = (void *)*((unsigned int *)g_RandomMap_TerrainState + i); /*0x59592f*/
    if ( v5 ) /*0x595934*/
    {
      TileNode::Cleanup(*((unsigned int **)g_RandomMap_TerrainState + i)); /*0x595938*/
      RA2_OPDEL(v5); /*0x59593e*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59594e*/
  if ( g_MapTileArray ) /*0x595957*/
  {
    RA2_OPDEL(g_MapTileArray); /*0x59595a*/
    g_MapTileArray = 0; /*0x595962*/
  }
  v6 = *(void (****)(unsigned int, int))((char *)this + 376); /*0x595968*/
  if ( v6 ) /*0x595970*/
  {
    (**v6)(v6, 1); /*0x595976*/
    *((unsigned int *)this + 94) = 0; /*0x595978*/
  }
  v7 = *(void **)((char *)this + 380); /*0x59597e*/
  if ( v7 ) /*0x595986*/
  {
    ComPtr::Dtor(*(unsigned int **)((char *)this + 380)); /*0x59598a*/
    RA2_OPDEL(v7); /*0x595990*/
    *((unsigned int *)this + 95) = 0; /*0x595998*/
  }
  *((unsigned int *)this + 184) = &vt_VectorClass_BuildingTypeClass_const; /*0x5959a4*/
  DynamicVectorClass::Destroy((char *)this + 736); /*0x5959aa*/
  *((unsigned int *)this + 177) = &vt_VectorClass_BuildingTypeClass_const; /*0x5959b5*/
  DynamicVectorClass::Destroy((char *)this + 708); /*0x5959bb*/
  *((unsigned int *)this + 168) = &vt_VectorClass_int; /*0x5959cb*/
  VectorClass::Destroy((char *)this + 672); /*0x5959cd*/
  *((unsigned int *)this + 161) = &vt_VectorClass_int; /*0x5959d8*/
  VectorClass::Destroy((char *)this + 644); /*0x5959da*/
  v8 = *(void **)((char *)this + 620); /*0x5959df*/
  *((unsigned int *)this + 154) = &vt_VectorClass_int; /*0x5959e5*/
  if ( v8 && *((unsigned char *)this + 629) ) /*0x5959ef*/
  {
    RA2_OPDEL(v8); /*0x5959f8*/
    *((unsigned int *)this + 155) = 0; /*0x595a00*/
  }
  *((unsigned char *)this + 629) = 0; /*0x595a06*/
  *((unsigned int *)this + 156) = 0; /*0x595a0c*/
  v9 = *(void **)((char *)this + 592); /*0x595a12*/
  *((unsigned int *)this + 147) = &vt_VectorClass_int; /*0x595a18*/
  if ( v9 && *((unsigned char *)this + 601) ) /*0x595a22*/
  {
    RA2_OPDEL(v9); /*0x595a2b*/
    *((unsigned int *)this + 148) = 0; /*0x595a33*/
  }
  *((unsigned char *)this + 601) = 0; /*0x595a39*/
  *((unsigned int *)this + 149) = 0; /*0x595a3f*/
  v10 = *(void **)((char *)this + 564); /*0x595a45*/
  *((unsigned int *)this + 140) = &vt_VectorClass_int; /*0x595a4b*/
  if ( v10 && *((unsigned char *)this + 573) ) /*0x595a55*/
  {
    RA2_OPDEL(v10); /*0x595a5e*/
    *((unsigned int *)this + 141) = 0; /*0x595a66*/
  }
  *((unsigned char *)this + 573) = 0; /*0x595a6c*/
  *((unsigned int *)this + 142) = 0; /*0x595a72*/
  v11 = *(void **)((char *)this + 536); /*0x595a78*/
  *((unsigned int *)this + 133) = &vt_VectorClass_int; /*0x595a7e*/
  if ( v11 && *((unsigned char *)this + 545) ) /*0x595a88*/
  {
    RA2_OPDEL(v11); /*0x595a91*/
    *((unsigned int *)this + 134) = 0; /*0x595a99*/
  }
  *((unsigned char *)this + 545) = 0; /*0x595a9f*/
  *((unsigned int *)this + 135) = 0; /*0x595aa5*/
  v12 = *(void **)((char *)this + 508); /*0x595aab*/
  *((unsigned int *)this + 126) = &vt_VectorClass_int; /*0x595ab1*/
  if ( v12 && *((unsigned char *)this + 517) ) /*0x595abb*/
  {
    RA2_OPDEL(v12); /*0x595ac4*/
    *((unsigned int *)this + 127) = 0; /*0x595acc*/
  }
  *((unsigned char *)this + 517) = 0; /*0x595ad2*/
  *((unsigned int *)this + 128) = 0; /*0x595ad8*/
  v13 = *(void **)((char *)this + 480); /*0x595ade*/
  *((unsigned int *)this + 119) = &vt_VectorClass_int; /*0x595ae4*/
  if ( v13 && *((unsigned char *)this + 489) ) /*0x595aee*/
  {
    RA2_OPDEL(v13); /*0x595af7*/
    *((unsigned int *)this + 120) = 0; /*0x595aff*/
  }
  *((unsigned char *)this + 489) = 0; /*0x595b05*/
  *((unsigned int *)this + 121) = 0; /*0x595b0b*/
  v14 = *(void **)((char *)this + 452); /*0x595b11*/
  *((unsigned int *)this + 112) = &vt_VectorClass_int; /*0x595b17*/
  if ( v14 && *((unsigned char *)this + 461) ) /*0x595b21*/
  {
    RA2_OPDEL(v14); /*0x595b2a*/
    *((unsigned int *)this + 113) = 0; /*0x595b32*/
  }
  *((unsigned char *)this + 461) = 0; /*0x595b38*/
  *((unsigned int *)this + 114) = 0; /*0x595b3e*/
  v15 = *(void **)((char *)this + 424); /*0x595b44*/
  *((unsigned int *)this + 105) = &vt_VectorClass_int; /*0x595b4a*/
  if ( v15 && *((unsigned char *)this + 433) ) /*0x595b54*/
  {
    RA2_OPDEL(v15); /*0x595b5d*/
    *((unsigned int *)this + 106) = 0; /*0x595b65*/
  }
  *((unsigned char *)this + 433) = 0; /*0x595b6b*/
  *((unsigned int *)this + 107) = 0; /*0x595b71*/
  v16 = *(void **)((char *)this + 396); /*0x595b77*/
  *((unsigned int *)this + 98) = &vt_VectorClass_int; /*0x595b7d*/
  if ( v16 && *((unsigned char *)this + 405) ) /*0x595b87*/
  {
    RA2_OPDEL(v16); /*0x595b90*/
    *((unsigned int *)this + 99) = 0; /*0x595b98*/
  }
  *((unsigned char *)this + 405) = 0; /*0x595ba0*/
  *((unsigned int *)this + 100) = 0; /*0x595ba6*/
  LoadOptions::Cleanup((unsigned int *)this); /*0x595bac*/

}
}
// 0x596E50
namespace gamemd {
int RandomMap::SetupDialog(HWND hDlg)
{

  HWND i; // edi
  LPARAM v3; // ebp
  wchar_t **v4; // ebx
  wchar_t *String; // eax
  LRESULT v6; // eax
  wchar_t *v7; // eax
  LRESULT v8; // eax
  HWND j; // edi
  LPARAM v10; // ebp
  wchar_t **v11; // ebx
  wchar_t *v12; // eax
  LRESULT v13; // eax
  wchar_t *v14; // eax
  LRESULT v15; // eax
  HWND k; // edi
  LPARAM v17; // ebp
  wchar_t **v18; // ebx
  wchar_t *v19; // eax
  LRESULT v20; // eax
  wchar_t *v21; // eax
  LRESULT v22; // eax
  HWND m; // edi
  LPARAM v24; // ebp
  wchar_t *v25; // ebx
  wchar_t *v26; // eax
  LRESULT v27; // eax
  unsigned int *v28; // ebp
  wchar_t *v29; // eax
  LRESULT v30; // eax
  HWND n; // edi
  wchar_t **v32; // ebx
  wchar_t *v33; // eax
  LRESULT v34; // eax
  wchar_t *v35; // eax
  LRESULT v36; // eax
  HWND DlgItem; // edi
  HWND v38; // eax
  LPARAM v39; // ebx
  HWND v40; // edi
  LRESULT result; // eax
  LPARAM lParama; // [esp+10h] [ebp-4h]

  SettingsClass::ClampValues(this); /*0x596e59*/
  for ( i = GetDlgItem(hDlg, 1002); SendMessageA(i, 0x146u, 0, 0) > 0; SendMessageA(i, 0x144u, 0, 0) ) /*0x596e76*/
    ; /*0x596e90*/
  v3 = 0; /*0x596ea2*/
  v4 = &off_82B060; /*0x596ea4*/
  do /*0x596edb*/
  {
    String = GetStringCSF(*v4, 0, g_Str_File_MapGen_cpp, 4883); /*0x596eb7*/
    v6 = SendMessageA(i, 0x4C2u, 0, (LPARAM)String); /*0x596ec5*/
    SendMessageA(i, 0x151u, v6, v3); /*0x596ecf*/
    ++v4; /*0x596ed1*/
    ++v3; /*0x596ed4*/
  }
  while ( (int)v4 < (int)&off_82B070 ); /*0x596edb*/
  v7 = GetStringCSF((&off_82B060)[*((unsigned int *)this + 18)], 0, g_Str_File_MapGen_cpp, 4887); /*0x596ef7*/
  v8 = SendMessageA(i, 0x4BEu, 0, (LPARAM)v7); /*0x596f05*/
  SendMessageA(i, 0x14Eu, v8, 0); /*0x596f10*/
  for ( j = GetDlgItem(hDlg, 1030); SendMessageA(j, 0x146u, 0, 0) > 0; SendMessageA(j, 0x144u, 0, 0) ) /*0x596f24*/
    ; /*0x596f3e*/
  v10 = 0; /*0x596f50*/
  v11 = &off_82B070; /*0x596f52*/
  do /*0x596f89*/
  {
    v12 = GetStringCSF(*v11, 0, g_Str_File_MapGen_cpp, 4898); /*0x596f65*/
    v13 = SendMessageA(j, 0x4C2u, 0, (LPARAM)v12); /*0x596f73*/
    SendMessageA(j, 0x151u, v13, v10); /*0x596f7d*/
    ++v11; /*0x596f7f*/
    ++v10; /*0x596f82*/
  }
  while ( (int)v11 < (int)&dword_82B080 ); /*0x596f89*/
  v14 = GetStringCSF((&off_82B070)[*((unsigned int *)this + 25)], 0, g_Str_File_MapGen_cpp, 4902); /*0x596fa5*/
  v15 = SendMessageA(j, 0x4BEu, 0, (LPARAM)v14); /*0x596fb3*/
  SendMessageA(j, 0x14Eu, v15, 0); /*0x596fbe*/
  for ( k = GetDlgItem(hDlg, 1029); SendMessageA(k, 0x146u, 0, 0) > 0; SendMessageA(k, 0x144u, 0, 0) ) /*0x596fd2*/
    ; /*0x596fec*/
  v17 = 1; /*0x596ffe*/
  v18 = (wchar_t **)off_82B038; /*0x597003*/
  do /*0x59703a*/
  {
    v19 = GetStringCSF(*v18, 0, g_Str_File_MapGen_cpp, 4914); /*0x597016*/
    v20 = SendMessageA(k, 0x4C2u, 0, (LPARAM)v19); /*0x597024*/
    SendMessageA(k, 0x151u, v20, v17); /*0x59702e*/
    ++v18; /*0x597030*/
    ++v17; /*0x597033*/
  }
  while ( (int)v18 < (int)&off_82B048 ); /*0x59703a*/
  v21 = GetStringCSF((&off_82B034)[*((unsigned int *)this + 15)], 0, g_Str_File_MapGen_cpp, 4918); /*0x597056*/
  v22 = SendMessageA(k, 0x4BEu, 0, (LPARAM)v21); /*0x597064*/
  SendMessageA(k, 0x14Eu, v22, 0); /*0x59706f*/
  for ( m = GetDlgItem(hDlg, 1031); SendMessageA(m, 0x146u, 0, 0) > 0; SendMessageA(m, 0x144u, 0, 0) ) /*0x597083*/
    ; /*0x59709d*/
  v24 = 0; /*0x5970af*/
  v25 = (wchar_t *)"Name:Temperate"; /*0x5970b1*/
  do /*0x5970e8*/
  {
    v26 = GetStringCSF(v25, 0, g_Str_File_MapGen_cpp, 4930); /*0x5970c4*/
    v27 = SendMessageA(m, 0x4C2u, 0, (LPARAM)v26); /*0x5970d2*/
    SendMessageA(m, 0x151u, v27, v24); /*0x5970dc*/
    v25 += 56; /*0x5970de*/
    ++v24; /*0x5970e1*/
  }
  while ( (int)v25 < (int)"Name:Urban" ); /*0x5970e8*/
  v28 = this; /*0x5970ea*/
  v29 = GetStringCSF((wchar_t *)&aNameTemperate[56 * *((unsigned int *)this + 14)], 0, g_Str_File_MapGen_cpp, 4934); /*0x59710f*/
  v30 = SendMessageA(m, 0x4BEu, 0, (LPARAM)v29); /*0x59711d*/
  SendMessageA(m, 0x14Eu, v30, 0); /*0x597128*/
  for ( n = GetDlgItem(hDlg, 1032); SendMessageA(n, 0x146u, 0, 0) > 0; SendMessageA(n, 0x144u, 0, 0) ) /*0x59713c*/
    ; /*0x597156*/
  lParama = 0; /*0x597168*/
  v32 = &off_82B048; /*0x597170*/
  do /*0x5971b3*/
  {
    v33 = GetStringCSF(*v32, 0, g_Str_File_MapGen_cpp, 4945); /*0x597183*/
    v34 = SendMessageA(n, 0x4C2u, 0, (LPARAM)v33); /*0x597191*/
    SendMessageA(n, 0x151u, v34, lParama); /*0x59719f*/
    ++v32; /*0x5971a5*/
    ++lParama; /*0x5971af*/
  }
  while ( (int)v32 < (int)off_82B058 ); /*0x5971b3*/
  v35 = GetStringCSF((&off_82B048)[v28[16]], 0, g_Str_File_MapGen_cpp, 4949); /*0x5971cb*/
  v36 = SendMessageA(n, 0x4BEu, 0, (LPARAM)v35); /*0x5971d9*/
  SendMessageA(n, 0x14Eu, v36, 0); /*0x5971e4*/
  DlgItem = GetDlgItem(hDlg, 1019); /*0x5971f9*/
  sprintf(Buffer, g_abs_817F6C, v28[29]); /*0x597206*/
  SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)Buffer); /*0x59721b*/
  v38 = GetDlgItem(hDlg, 1003); /*0x597223*/
  v39 = v28[20]; /*0x597229*/
  v40 = v38; /*0x597231*/
  SendMessageA(v38, 0x406u, 1u, 524290); /*0x59723b*/
  result = SendMessageA(v40, 0x405u, 1u, v39); /*0x597246*/
  v28[20] = v39; /*0x597249*/
  return result; /*0x597248*/

}
}
// 0x597D60
namespace gamemd {
AbstractClass * * RandomMap::LoadInfo(wchar_t * Destination, int a2)
{

  void *v2; // edi
  void *v4[4]; // [esp+Ch] [ebp-1ACh] BYREF
  unsigned int v5[3]; // [esp+1Ch] [ebp-19Ch] BYREF
  unsigned int v6[6]; // [esp+28h] [ebp-190h] BYREF
  char v7; // [esp+40h] [ebp-178h]
  int v8; // [esp+44h] [ebp-174h]
  int v9; // [esp+48h] [ebp-170h]
  unsigned int v10[22]; // [esp+4Ch] [ebp-16Ch] BYREF
  unsigned char v11[12]; // [esp+A4h] [ebp-114h] BYREF
  int v12; // [esp+B0h] [ebp-108h]
  wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

  if ( !Destination ) /*0x597d74*/
    return 0; /*0x597d74*/
  if ( !a2 ) /*0x597d83*/
    return 0; /*0x597d83*/
  v2 = (void *)(a2 + 44); /*0x597d89*/
  if ( !_strcmpi((const void *)(a2 + 44), aRandmapSed) || !_strcmpi(v2, g_abs_82BC24) ) /*0x597da8*/
    return 0; /*0x597db2*/
  CCFileClass::Construct(v10, (char *)v2); /*0x597dbd*/
  v4[1] = 0; /*0x597dc6*/
  v4[2] = 0; /*0x597dca*/
  GenericNode::Constructor(v5); /*0x597dce*/
  GenericNode::Constructor(v6); /*0x597dd7*/
  LinkedList::Prepend(v5, (int)v6); /*0x597ded*/
  v4[3] = &vt_List_INIClass_INISection; /*0x597dfc*/
  memset(&v6[3], 0, 12); /*0x597e04*/
  v7 = 0; /*0x597e10*/
  v8 = 0; /*0x597e14*/
  v9 = 0; /*0x597e18*/
  v4[0] = &vt_INIClass; /*0x597e1c*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x597e2b*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x597f38*/
    v10[0] = &vt_CCFileClass; /*0x597f44*/
    v12 = 0; /*0x597f4c*/
    Vector::Clear((int)v11); /*0x597f53*/
    v10[0] = &off_7E1668; /*0x597f5c*/
    BufferIOFileClass::Dtor(v10); /*0x597f64*/
    return 0; /*0x597f6b*/
  }
  if ( INIClass::ParseValue_Wide((int)g_INI_Key_RandomMap, (int)stru_81B1A4, &g_abs_887734, Source, 0x80u) <= 0 ) /*0x597e58*/
  {
    *Destination = 0; /*0x597e7f*/
    *((unsigned char *)Destination + 437) = 1; /*0x597e82*/
    *((unsigned char *)Destination + 436) = 0; /*0x597e89*/
  }
  else
  {
    wcsncpy(Destination, Source, 0x80u); /*0x597e68*/
    *((unsigned char *)Destination + 437) = 0; /*0x597e70*/
    *((unsigned char *)Destination + 436) = 1; /*0x597e76*/
  }
  *((unsigned int *)Destination + 72) = 0; /*0x597e9a*/
  *((unsigned int *)Destination + 73) = 0; /*0x597ea0*/
  strncpy((char *)Destination + 256, (const char *)v2, 0x20u); /*0x597ea6*/
  if ( !strlen((const char *)Destination + 256) ) /*0x597ead*/
    strncpy((char *)Destination + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
  *((unsigned int *)Destination + 108) = *(unsigned int *)(a2 + 24); /*0x597ee5*/
  *((unsigned int *)Destination + 107) = *(unsigned int *)(a2 + 20); /*0x597eee*/
  HashTable::DestroyHashTableINIClass(v4); /*0x597ef4*/
  v10[0] = &vt_CCFileClass; /*0x597f00*/
  v12 = 0; /*0x597f08*/
  Vector::Clear((int)v11); /*0x597f0f*/
  v10[0] = &off_7E1668; /*0x597f18*/
  BufferIOFileClass::Dtor(v10); /*0x597f20*/
  return 1; /*0x597f26*/

}
}
// 0x5981F0
namespace gamemd {
WeaponStruct * * RandomMap::LoadConfig()
{

  unsigned int *v2; // eax
  unsigned int *v3; // edi
  int v4; // eax
  int v5; // edx
  int Int_Overwrite; // eax
  int v7; // edx
  void ***v8; // eax
  void ***v9; // eax
  void ***v10; // eax
  void ***v11; // eax
  void ***v12; // eax
  void ***v13; // eax
  void ***v14; // eax
  void ***v15; // eax
  void ***v16; // eax
  void ***v17; // eax
  void ***v18; // eax
  char *i; // eax
  unsigned int *v20; // esi
  char *j; // eax
  unsigned int *v22; // esi
  void **v24; // [esp-1Ch] [ebp-15Ch] BYREF
  void *v25; // [esp-18h] [ebp-158h]
  int v26; // [esp-14h] [ebp-154h]
  int16_t v27; // [esp-10h] [ebp-150h]
  int v28; // [esp-Ch] [ebp-14Ch]
  int v29; // [esp-8h] [ebp-148h]
  int v30; // [esp-4h] [ebp-144h]
  void ***IntList; // [esp+10h] [ebp-130h] BYREF
  int v32; // [esp+14h] [ebp-12Ch] BYREF
  void *Block; // [esp+18h] [ebp-128h]
  char v34; // [esp+21h] [ebp-11Fh]
  unsigned int *v35; // [esp+30h] [ebp-110h]
  unsigned int *v36; // [esp+34h] [ebp-10Ch]
  unsigned int v37[6]; // [esp+38h] [ebp-108h] BYREF
  int v38; // [esp+50h] [ebp-F0h]
  unsigned int v39[27]; // [esp+54h] [ebp-ECh] BYREF
  char String[128]; // [esp+C0h] [ebp-80h] BYREF

  CCFileClass::Construct(v39, g_abs_82BDCC); /*0x598205*/
  v2 = RA2_OPNEW(0x58u); /*0x59820c*/
  v3 = v2; /*0x598211*/
  if ( v2 ) /*0x598218*/
  {
    INIClass::INIClass(v2); /*0x59821c*/
    *((unsigned char *)v3 + 64) = 0; /*0x598221*/
    *v3 = &CCINIClass_Vtable; /*0x598225*/
  }
  else
  {
    v3 = 0; /*0x59822d*/
  }
  INIClass::ResetSection(v3); /*0x598231*/
  CCINIClass::Load(v3, (int)v39, 0, 0); /*0x598241*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 98) + 12))((unsigned int *)this + 98); /*0x598254*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 161) + 12))((unsigned int *)this + 161); /*0x598265*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 168) + 12))((unsigned int *)this + 168); /*0x598274*/
  v4 = *((unsigned int *)this + 177); /*0x598277*/
  v36 = (unsigned int *)this + 177; /*0x598283*/
  (*(void (**)(void))(v4 + 12))(); /*0x598287*/
  v5 = *((unsigned int *)this + 184); /*0x59828a*/
  v35 = (unsigned int *)this + 184; /*0x598296*/
  (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 105) + 12))((unsigned int *)this + 105); /*0x5982a9*/
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 112) + 12))((unsigned int *)this + 112); /*0x5982b8*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(off_82B134, g_abs_82BDB8, *((unsigned int *)this + 175)); /*0x5982d0*/
  v7 = *((unsigned int *)this + 176); /*0x5982d5*/
  *((unsigned int *)this + 175) = Int_Overwrite; /*0x5982db*/
  *((unsigned int *)this + 176) = INIClass::ReadInt_Overwrite(off_82B134, stru_82BDA4, v7); /*0x5982f7*/
  IntList = &v24; /*0x598300*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 98); /*0x598304*/
  *IntList = &vt_TypeList_int; /*0x598316*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59832e*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aRmglevellights,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 98, IntList); /*0x598332*/
  v8 = IntList; /*0x598337*/
  *((unsigned int *)this + 102) = IntList[4]; /*0x59833e*/
  *((unsigned int *)this + 103) = v8[5]; /*0x598344*/
  *((unsigned int *)this + 104) = v8[6]; /*0x59834a*/
  v32 = (int)&vt_VectorClass_int; /*0x598356*/
  VectorClass::Destroy((int)&v32); /*0x59835a*/
  IntList = &v24; /*0x598364*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 161); /*0x598369*/
  *IntList = &vt_TypeList_int; /*0x59837b*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598393*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aRmgvegetationm,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 161, IntList); /*0x598397*/
  v9 = IntList; /*0x59839c*/
  *((unsigned int *)this + 165) = IntList[4]; /*0x5983a3*/
  *((unsigned int *)this + 166) = v9[5]; /*0x5983a9*/
  *((unsigned int *)this + 167) = v9[6]; /*0x5983b3*/
  v32 = (int)&vt_VectorClass_int; /*0x5983b6*/
  VectorClass::Destroy((int)&v32); /*0x5983ba*/
  IntList = &v24; /*0x5983cb*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 168); /*0x5983cf*/
  *IntList = &vt_TypeList_int; /*0x5983e1*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5983f9*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aRmgvegetationm_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 168, IntList); /*0x5983fd*/
  v10 = IntList; /*0x598402*/
  *((unsigned int *)this + 172) = IntList[4]; /*0x598409*/
  *((unsigned int *)this + 173) = v10[5]; /*0x59840f*/
  *((unsigned int *)this + 174) = v10[6]; /*0x598419*/
  v32 = (int)&vt_VectorClass_int; /*0x59841c*/
  VectorClass::Destroy((int)&v32); /*0x598420*/
  IntList = &v24; /*0x598431*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 105); /*0x598435*/
  *IntList = &vt_TypeList_int; /*0x598447*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59845f*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aTemperateambie,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 105, IntList); /*0x598463*/
  v11 = IntList; /*0x598468*/
  *((unsigned int *)this + 109) = IntList[4]; /*0x59846f*/
  *((unsigned int *)this + 110) = v11[5]; /*0x598475*/
  *((unsigned int *)this + 111) = v11[6]; /*0x59847b*/
  v32 = (int)&vt_VectorClass_int; /*0x59847e*/
  VectorClass::Destroy((int)&v32); /*0x598486*/
  IntList = &v24; /*0x598497*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 112); /*0x59849b*/
  *IntList = &vt_TypeList_int; /*0x5984ad*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5984c5*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aSnowambientlig,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 112, IntList); /*0x5984c9*/
  v12 = IntList; /*0x5984ce*/
  *((unsigned int *)this + 116) = IntList[4]; /*0x5984d5*/
  *((unsigned int *)this + 117) = v12[5]; /*0x5984db*/
  *((unsigned int *)this + 118) = v12[6]; /*0x5984e5*/
  v32 = (int)&vt_VectorClass_int; /*0x5984e8*/
  VectorClass::Destroy((int)&v32); /*0x5984ec*/
  IntList = &v24; /*0x5984fd*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 119); /*0x598501*/
  *IntList = &vt_TypeList_int; /*0x598513*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59852b*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aTemperateambie_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 119, IntList); /*0x59852f*/
  v13 = IntList; /*0x598534*/
  *((unsigned int *)this + 123) = IntList[4]; /*0x59853b*/
  *((unsigned int *)this + 124) = v13[5]; /*0x598541*/
  *((unsigned int *)this + 125) = v13[6]; /*0x59854b*/
  v32 = (int)&vt_VectorClass_int; /*0x59854e*/
  VectorClass::Destroy((int)&v32); /*0x598552*/
  IntList = &v24; /*0x598563*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 126); /*0x598567*/
  *IntList = &vt_TypeList_int; /*0x598579*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598591*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)aTemperateambie_1,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 126, IntList); /*0x598595*/
  v14 = IntList; /*0x59859a*/
  *((unsigned int *)this + 130) = IntList[4]; /*0x5985a1*/
  *((unsigned int *)this + 131) = v14[5]; /*0x5985a7*/
  *((unsigned int *)this + 132) = v14[6]; /*0x5985b1*/
  v32 = (int)&vt_VectorClass_int; /*0x5985b4*/
  VectorClass::Destroy((int)&v32); /*0x5985b8*/
  IntList = &v24; /*0x5985c9*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 133); /*0x5985cd*/
  *IntList = &vt_TypeList_int; /*0x5985df*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5985f7*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)g_abs_82BCEC,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 133, IntList); /*0x5985fb*/
  v15 = IntList; /*0x598600*/
  *((unsigned int *)this + 137) = IntList[4]; /*0x598607*/
  *((unsigned int *)this + 138) = v15[5]; /*0x59860d*/
  *((unsigned int *)this + 139) = v15[6]; /*0x598617*/
  v32 = (int)&vt_VectorClass_int; /*0x59861a*/
  VectorClass::Destroy((int)&v32); /*0x59861e*/
  IntList = &v24; /*0x59862f*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 140); /*0x598633*/
  *IntList = &vt_TypeList_int; /*0x598645*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59865d*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)g_abs_82BCDC,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 140, IntList); /*0x598661*/
  v16 = IntList; /*0x598666*/
  *((unsigned int *)this + 144) = IntList[4]; /*0x59866d*/
  *((unsigned int *)this + 145) = v16[5]; /*0x598673*/
  *((unsigned int *)this + 146) = v16[6]; /*0x59867d*/
  v32 = (int)&vt_VectorClass_int; /*0x598680*/
  VectorClass::Destroy((int)&v32); /*0x598684*/
  IntList = &v24; /*0x598695*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 147); /*0x598699*/
  *IntList = &vt_TypeList_int; /*0x5986ab*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5986c3*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)g_abs_82BCC8,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 147, IntList); /*0x5986c7*/
  v17 = IntList; /*0x5986cc*/
  *((unsigned int *)this + 151) = IntList[4]; /*0x5986d3*/
  *((unsigned int *)this + 152) = v17[5]; /*0x5986d9*/
  *((unsigned int *)this + 153) = v17[6]; /*0x5986df*/
  v32 = (int)&vt_VectorClass_int; /*0x5986e8*/
  if ( Block && v34 ) /*0x5986f4*/
    RA2_OPDEL(Block); /*0x5986f7*/
  IntList = &v24; /*0x59870b*/
  DynamicVectorClass::Copy(&v24, (unsigned int *)this + 154); /*0x59870f*/
  *IntList = &vt_TypeList_int; /*0x598721*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598739*/
                        (uint8_t ***)v3,
                        (int)&v32,
                        (uint8_t *)off_82B134,
                        (uint8_t *)g_abs_82BCB8,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy((unsigned int *)this + 154, IntList); /*0x59873d*/
  v18 = IntList; /*0x598742*/
  *((unsigned int *)this + 158) = IntList[4]; /*0x598749*/
  *((unsigned int *)this + 159) = v18[5]; /*0x59874f*/
  *((unsigned int *)this + 160) = v18[6]; /*0x598759*/
  v32 = (int)&vt_VectorClass_int; /*0x59875c*/
  VectorClass::Destroy((int)&v32); /*0x598760*/
  *((unsigned int *)this + 191) = INIClass::ReadInt_Overwrite(off_82B134, stru_82BCAC, *((unsigned int *)this + 191)); /*0x59877f*/
  if ( INIClass::GetString( /*0x5987a5*/
         (uint8_t ***)v3,
         (uint8_t *)off_82B134,
         (uint8_t *)aTemperateorepa,
         &g_abs_889F64,
         String,
         128) )
  {
    TypeList::BuildingTypeConstructor(&v32); /*0x5987b7*/
    for ( i = strtok(String, g_abs_817F70); i; i = strtok(0, g_abs_817F70) ) /*0x5987d3*/
    {
      if ( !*i ) /*0x5987d5*/
        break; /*0x5987d8*/
      IntList = (void ***)BuildingTypeClass::FindOrCreate(i); /*0x5987e3*/
      if ( IntList ) /*0x5987e7*/
        DynamicVector::Add_Alt3(&v32, &IntList); /*0x5987f2*/
    }
    TypeList::BuildingTypeCopy(v37, &v32); /*0x598813*/
    v32 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x59881c*/
    DynamicVectorClass::Destroy((int)&v32); /*0x598820*/
    v20 = v36; /*0x598825*/
  }
  else
  {
    v20 = v36; /*0x59882b*/
    TypeList::BuildingTypeCopy(v37, v36); /*0x598834*/
  }
  DynamicVector::Copy(v20, v37); /*0x598840*/
  v20[6] = v38; /*0x59884d*/
  v37[0] = &vt_VectorClass_BuildingTypeClass_const; /*0x598850*/
  DynamicVectorClass::Destroy((int)v37); /*0x598854*/
  if ( INIClass::GetString( /*0x598879*/
         (uint8_t ***)v3,
         (uint8_t *)off_82B134,
         (uint8_t *)aSnoworepatchla,
         &g_abs_889F64,
         String,
         128) )
  {
    TypeList::BuildingTypeConstructor(&v32); /*0x598886*/
    for ( j = strtok(String, g_abs_817F70); j; j = strtok(0, g_abs_817F70) ) /*0x5988a2*/
    {
      if ( !*j ) /*0x5988a4*/
        break; /*0x5988a7*/
      IntList = (void ***)BuildingTypeClass::FindOrCreate(j); /*0x5988b2*/
      if ( IntList ) /*0x5988b6*/
        DynamicVector::Add_Alt3(&v32, &IntList); /*0x5988c1*/
    }
    TypeList::BuildingTypeCopy(v37, &v32); /*0x5988e2*/
    v32 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x5988eb*/
    DynamicVectorClass::Destroy((int)&v32); /*0x5988ef*/
    v22 = v35; /*0x5988f4*/
  }
  else
  {
    v22 = v35; /*0x5988fa*/
    TypeList::BuildingTypeCopy(v37, v35); /*0x598903*/
  }
  DynamicVector::Copy(v22, v37); /*0x59890f*/
  v37[0] = &vt_VectorClass_BuildingTypeClass_const; /*0x598918*/
  v22[6] = v38; /*0x59891c*/
  DynamicVectorClass::Destroy((int)v37); /*0x598923*/
  if ( v3 ) /*0x59892a*/
    (*(void (**)(unsigned int *, int))*v3)(v3, 1); /*0x598932*/
  CCFileClass::Reset(v39); /*0x598938*/
  return CCFileClass::Destruct(v39); /*0x598946*/

}
}
// 0x598960
namespace gamemd {
AbstractClass * * RandomMap::Generate(char a2, HWND hDlg)
{

  HWND DlgItem; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  void *v9; // ecx
  void *v10; // ecx
  int j; // edi
  int v12; // esi
  int v13; // eax
  bool v14; // al
  int v15; // eax
  int k; // eax
  int v17; // ecx
  int v18; // eax
  int m; // edi
  unsigned int *v20; // esi
  int v21; // eax
  void *v22; // eax
  int n; // eax
  void (*v24)(HWND, UINT, WPARAM, LPARAM); // esi
  int ii; // eax
  int *v26; // edi
  int jj; // eax
  unsigned int *v28; // eax
  int kk; // eax
  int mm; // edi
  unsigned int *v31; // esi
  int v32; // eax
  char result; // al
  HWND v34; // eax
  bool v35; // [esp+11h] [ebp-415h]
  unsigned int *v36; // [esp+12h] [ebp-414h] BYREF
  int *v37; // [esp+16h] [ebp-410h]
  unsigned int v38[6]; // [esp+1Ah] [ebp-40Ch] BYREF
  int v39[253]; // [esp+32h] [ebp-3F4h] BYREF

  v37 = this; /*0x598973*/
  if ( off_82AF14 ) /*0x598977*/
    off_82AF14(); /*0x598979*/
  qmemcpy(&g_Randomizer, SeedInitRNG(v39, *((char *)this + 29)), 0x3F4u); /*0x59899b*/
  IDA_LOBYTE(v38[0]) = 0; /*0x5989ab*/
  v38[2] = 0; /*0x5989af*/
  v38[3] = 0; /*0x5989b7*/
  v38[4] = sub_598000; /*0x5989bf*/
  qmemcpy(&g_TileSystemInit, v38, 0x18u); /*0x5989c9*/
  if ( off_82AF14 ) /*0x5989cb*/
    off_82AF14(); /*0x5989cd*/
  v35 = *((unsigned char *)g_abs_A8B230 + 13720) == 0; /*0x5989e7*/
  if ( !*((unsigned char *)g_abs_A8B230 + 13720) ) /*0x5989dc*/
  {
    ProgressAnim::Init(0, 1079574528, 1, hDlg); /*0x5989fb*/
    SHPClass::Load(aProgbar2Shp, 0, 0); /*0x598a0c*/
    TextRenderer::MeasureBuilding(-1, -1, 0, 0, 1); /*0x598a22*/
    LoadScreen::Render((int)g_abs_AC4F58, 0, (int)this, NAN); /*0x598a34*/
    DlgItem = GetDlgItem(hDlg, 1592); /*0x598a3f*/
    if ( DlgItem ) /*0x598a47*/
      ShowWindow(DlgItem, 5); /*0x598a4c*/
  }
  if ( off_82AF14 ) /*0x598a59*/
    off_82AF14(); /*0x598a5b*/
  Debug::Log(); /*0x598a62*/
  RandomMap::SetupTheater(a2); /*0x598a74*/
  if ( off_82AF14 ) /*0x598a80*/
    off_82AF14(); /*0x598a82*/
  ++g_abs_A8E7AC; /*0x598a9a*/
  if ( a2 ) /*0x598aa0*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598aa8*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598ab2*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x598ac4*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598acc*/
  }
  if ( off_82AF14 ) /*0x598ad8*/
    off_82AF14(); /*0x598ada*/
  RandomMap::LoadConfig(this); /*0x598ade*/
  Debug::Log(); /*0x598ae8*/
  v5 = *((char *)this + 15); /*0x598aed*/
  if ( v5 == 3 || v5 == 4 ) /*0x598afb*/
  {
    if ( *((char *)this + 19) ) /*0x598b06*/
      RandomMap::GrowTiberium(this); /*0x598b0d*/
  }
  else
  {
    RandomMap::FinalizeMapData(this); /*0x598aff*/
  }
  FindMapCell(this); /*0x598b14*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x598b1e*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 154); /*0x598b30*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 55.0, NAN); /*0x598b4b*/
  if ( off_82AF14 ) /*0x598b57*/
    off_82AF14(); /*0x598b59*/
  if ( a2 ) /*0x598b62*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598b6a*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598b74*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x598b86*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598b8e*/
  }
  if ( off_82AF14 ) /*0x598b9a*/
    off_82AF14(); /*0x598b9c*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x598ba4*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 159); /*0x598bb6*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 60.0, NAN); /*0x598bd1*/
  if ( off_82AF14 ) /*0x598bdd*/
    off_82AF14(); /*0x598bdf*/
  if ( a2 ) /*0x598be8*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598bf0*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598bfa*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x598c0c*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598c14*/
  }
  if ( off_82AF14 ) /*0x598c20*/
    off_82AF14(); /*0x598c22*/
  Debug::Log(); /*0x598c29*/
  if ( g_MapTileArray ) /*0x598c38*/
  {
    v6 = unk_89C2DC * unk_89C2DC; /*0x598c40*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x598c45*/
    {
      v7 = 0; /*0x598c47*/
      do /*0x598c64*/
      {
        *(unsigned int *)((char *)g_MapTileArray + v7 + 56) = -1; /*0x598c52*/
        *(unsigned int *)((char *)g_MapTileArray + v7 + 60) = -1; /*0x598c5c*/
        v7 += 80; /*0x598c60*/
        --v6; /*0x598c63*/
      }
      while ( v6 ); /*0x598c64*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x598c71*/
  {
    v9 = (void *)*((unsigned int *)g_RandomMap_TerrainState + i); /*0x598c78*/
    if ( v9 ) /*0x598c7d*/
      RandomMap::Constructor_VectorClass_Cell_(v9, 1); /*0x598c81*/
  }
  g_MapTileArrayEnd = 0; /*0x598c89*/
  RandomMap::GenerateTerrainForAllCells(); /*0x598c8f*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x598c9d*/
  {
    v10 = g_RandomMap_TerrainState; /*0x598ca4*/
    v12 = *((unsigned int *)g_RandomMap_TerrainState + j); /*0x598caa*/
    if ( *(unsigned char *)(v12 + 20) ) /*0x598cad*/
    {
      v13 = v37[15]; /*0x598cb6*/
      v14 = v13 == 3 || v13 == 4; /*0x598cc7*/
      RandomMap::CollectTerrainCells((*(unsigned int *)(v12 + 12) > 8000) + !v14 + 4); /*0x598ce4*/
      RandomMap::PlaceRandomMapTerrain(v12); /*0x598ceb*/
    }
  }
  IDA_LOBYTE(v10) = 0; /*0x598cfa*/
  Map_Helper_58D010(v10); /*0x598cfc*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x598d07*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 164); /*0x598d19*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 65.0, NAN); /*0x598d34*/
  if ( off_82AF14 ) /*0x598d40*/
    off_82AF14(); /*0x598d42*/
  Debug::Log(); /*0x598d49*/
  v15 = v37[15]; /*0x598d55*/
  if ( v15 == 4 || v15 == 3 ) /*0x598d60*/
  {
    BuildRandomMapTiles(); /*0x598d62*/
    ResetMapState(); /*0x598d67*/
    ProcessRandomMapCellAdjacency(v37); /*0x598d6e*/
    CreateMapObject(0, -1); /*0x598d7b*/
    MapClass::FindPassableNeighbor(v37); /*0x598d82*/
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x598d8d*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 169); /*0x598d9f*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 70.0, NAN); /*0x598dba*/
  if ( off_82AF14 ) /*0x598dc6*/
    off_82AF14(); /*0x598dc8*/
  if ( a2 ) /*0x598dd1*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598dd9*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598dea*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x598e00*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598e08*/
  }
  if ( off_82AF14 ) /*0x598e14*/
    off_82AF14(); /*0x598e16*/
  RandomMap::PlaceShoreObjects(v37); /*0x598e1a*/
  Debug::Log(); /*0x598e24*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x598e31*/
  for ( k = LayerClass::CellIteratorNext(&g_abs_87F7E8); k; k = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x598e42*/
    House::AnnounceUpgrade(k, -1); /*0x598e48*/
  if ( off_82AF14 ) /*0x598e62*/
    off_82AF14(); /*0x598e64*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x598e6c*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 174); /*0x598e7e*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 75.0, NAN); /*0x598e99*/
  Debug::Log(); /*0x598ea3*/
  do /*0x598ebd*/
  {
    while ( !(uint8_t)DistributeRandomMapTerrain() ) /*0x598eb2*/
      ; /*0x598eab*/
  }
  while ( !(uint8_t)SpreadMapSeedTerrainFromWaypoints(v37) ); /*0x598ebd*/
  Debug::Log(); /*0x598ec4*/
  if ( v37[15] ) /*0x598ec9*/
    PlaceRandomAIBuildings(v37); /*0x598ed5*/
  if ( off_82AF14 ) /*0x598ee1*/
    off_82AF14(); /*0x598ee3*/
  Debug::Log(); /*0x598eea*/
  RandomMap::PlaceRandomMapTiberium(v37); /*0x598ef4*/
  if ( off_82AF14 ) /*0x598f00*/
    off_82AF14(); /*0x598f02*/
  if ( g_MapTileArray ) /*0x598f0a*/
  {
    v17 = unk_89C2DC * unk_89C2DC; /*0x598f12*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x598f17*/
    {
      v18 = 0; /*0x598f19*/
      do /*0x598f36*/
      {
        *(unsigned int *)((char *)g_MapTileArray + v18 + 56) = -1; /*0x598f24*/
        *(unsigned int *)((char *)g_MapTileArray + v18 + 60) = -1; /*0x598f2e*/
        v18 += 80; /*0x598f32*/
        --v17; /*0x598f35*/
      }
      while ( v17 ); /*0x598f36*/
    }
  }
  for ( m = g_RandomMap_TileData - 1; m >= 0; --m ) /*0x598f48*/
  {
    v20 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + m); /*0x598f4f*/
    if ( v20 ) /*0x598f54*/
    {
      if ( *v20 ) /*0x598f56*/
      {
        (**(void (***)(unsigned int, int))*v20)(*v20, 1); /*0x598f60*/
        *v20 = 0; /*0x598f62*/
      }
      v36 = v20; /*0x598f74*/
      v21 = (*(int (**)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x598f78*/
      if ( v21 != -1 ) /*0x598f7e*/
        Vector4::EraseAt(v21); /*0x598f86*/
      v22 = (void *)v20[11]; /*0x598f8b*/
      v20[10] = &vt_VectorClass_Cell; /*0x598f8e*/
      if ( v22 && *((unsigned char *)v20 + 53) ) /*0x598f95*/
      {
        RA2_OPDEL(v22); /*0x598f9b*/
        v20[11] = 0; /*0x598fa3*/
      }
      *((unsigned char *)v20 + 53) = 0; /*0x598fa7*/
      v20[12] = 0; /*0x598faa*/
      RA2_OPDEL(v20); /*0x598fad*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x598fbd*/
  Debug::Log(); /*0x598fc3*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x598fd0*/
  for ( n = LayerClass::CellIteratorNext(&g_abs_87F7E8); n; n = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x598fe1*/
    House::AnnounceUpgrade(n, -1); /*0x598fe7*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x598fff*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 179); /*0x599011*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 80.0, NAN); /*0x59902c*/
  if ( off_82AF14 ) /*0x599038*/
    off_82AF14(); /*0x59903a*/
  if ( a2 ) /*0x599043*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59904b*/
    v24 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599057*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x599062*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x599079*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599081*/
  }
  else
  {
    v24 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599088*/
  }
  if ( off_82AF14 ) /*0x59909a*/
    off_82AF14(); /*0x59909c*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x5990a4*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 184); /*0x5990b6*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 85.0, NAN); /*0x5990d1*/
  if ( off_82AF14 ) /*0x5990dd*/
    off_82AF14(); /*0x5990df*/
  if ( a2 ) /*0x5990e8*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x5990f0*/
    v24(hDlg, 0xFu, 0, 0); /*0x599101*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x599112*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x59911a*/
  }
  if ( off_82AF14 ) /*0x599126*/
    off_82AF14(); /*0x599128*/
  Debug::Log(); /*0x59912f*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59913c*/
  for ( ii = LayerClass::CellIteratorNext(&g_abs_87F7E8); ii; ii = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59914d*/
    House::AnnounceUpgrade(ii, -1); /*0x599153*/
  if ( off_82AF14 ) /*0x59916d*/
    off_82AF14(); /*0x59916f*/
  Debug::Log(); /*0x599176*/
  v26 = v37; /*0x59917b*/
  GenerateTerrainHeightMap(v37); /*0x599184*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x59918f*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 189); /*0x5991a1*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 90.0, NAN); /*0x5991bc*/
  if ( off_82AF14 ) /*0x5991c8*/
    off_82AF14(); /*0x5991ca*/
  if ( a2 ) /*0x5991d3*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x5991db*/
    v24(hDlg, 0xFu, 0, 0); /*0x5991ec*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x5991fd*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599205*/
  }
  if ( off_82AF14 ) /*0x599211*/
    off_82AF14(); /*0x599213*/
  Debug::Log(); /*0x59921a*/
  if ( v26[14] ) /*0x59921f*/
  {
    LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59923e*/
    for ( jj = LayerClass::CellIteratorNext(&g_abs_87F7E8); jj; jj = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59924f*/
    {
      v36 = *(unsigned int **)(jj + 36); /*0x59925a*/
      v28 = (char *)g_MapTileArray + 80 * (int16_t)v36 + 80 * unk_89C2DC * SHIWORD(v36); /*0x59927b*/
      v28[10] = 1202590843; /*0x599283*/
      v28[11] = 1064598241; /*0x599286*/
      v28[8] = -755914244; /*0x599295*/
      v28[9] = 1062232653; /*0x599298*/
    }
    RandomMap::GenerateRandomMapTerrain(v26); /*0x5992ab*/
  }
  else
  {
    CellClass::Reset(v26); /*0x59922b*/
    RandomMap::PlaceResources(v26); /*0x599232*/
  }
  if ( off_82AF14 ) /*0x5992b7*/
    off_82AF14(); /*0x5992b9*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x5992c1*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 194); /*0x5992d3*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 95.0, NAN); /*0x5992ee*/
  if ( off_82AF14 ) /*0x5992fa*/
    off_82AF14(); /*0x5992fc*/
  if ( a2 ) /*0x599305*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59930d*/
    v24(hDlg, 0xFu, 0, 0); /*0x59931e*/
    if ( g_abs_A8B238 == 4 && g_abs_A8B244 == 3 ) /*0x59932f*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599337*/
  }
  --g_abs_A8E7AC; /*0x59934a*/
  if ( off_82AF14 ) /*0x599350*/
    off_82AF14(); /*0x599352*/
  Debug::Log(); /*0x599359*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x599366*/
  for ( kk = LayerClass::CellIteratorNext(&g_abs_87F7E8); kk; kk = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x599377*/
    House::AnnounceUpgrade(kk, -1); /*0x59937d*/
  if ( off_82AF14 ) /*0x599397*/
    off_82AF14(); /*0x599399*/
  BuildingClass::ClearOccupancyData(); /*0x59939b*/
  BuildingClass::ClearFactoryData(); /*0x5993a0*/
  Debug::Log(); /*0x5993aa*/
  v26[193] = 0; /*0x5993af*/
  v26[194] = 0; /*0x5993b5*/
  if ( g_MapTileArray ) /*0x5993c5*/
  {
    RA2_OPDEL(g_MapTileArray); /*0x5993c8*/
    g_MapTileArray = 0; /*0x5993d0*/
  }
  for ( mm = g_RandomMap_TileData - 1; mm >= 0; --mm ) /*0x5993e1*/
  {
    v31 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + mm); /*0x5993e9*/
    if ( v31 ) /*0x5993ee*/
    {
      if ( *v31 ) /*0x5993f0*/
      {
        (**(void (***)(unsigned int, int))*v31)(*v31, 1); /*0x5993fa*/
        *v31 = 0; /*0x5993fc*/
      }
      v36 = v31; /*0x59940e*/
      v32 = (*(int (**)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x599412*/
      if ( v32 != -1 ) /*0x599418*/
        Vector4::EraseAt(v32); /*0x599420*/
      v31[10] = &vt_VectorClass_Cell; /*0x599428*/
      Buffer::Cleanup((int)(v31 + 10)); /*0x59942e*/
      RA2_OPDEL(v31); /*0x599434*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x599446*/
  MapClass::PostProcessReveal(1); /*0x59944c*/
  Debug::Log(); /*0x599456*/
  Shroud::ProcessCellVisibility(&g_abs_87F7E8, (int)&g_abs_87F8E4); /*0x599468*/
  RadarClass::RecreateSurface((int)&g_abs_87F7E8, 0); /*0x599472*/
  if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x59947e*/
    Multiplayer::ShowProgress(&g_abs_A8B238, 199); /*0x599490*/
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 100.0, NAN); /*0x5994ab*/
  Debug::Log(); /*0x5994b5*/
  result = v35; /*0x5994ba*/
  if ( v35 ) /*0x5994c3*/
  {
    v34 = GetDlgItem(hDlg, 1592); /*0x5994d2*/
    if ( v34 ) /*0x5994da*/
      ShowWindow(v34, 0); /*0x5994de*/
    if ( *((unsigned char *)g_abs_A8B230 + 13720) ) /*0x5994ea*/
      Multiplayer::ShowProgress(&g_abs_A8B238, 99); /*0x5994f9*/
    else
      Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 0.0, NAN); /*0x599510*/
    return VtableStub::643E70(g_abs_AC4F58); /*0x59951a*/
  }
  return result; /*0x59951f*/

}
}
// 0x599650
namespace gamemd {
AbstractClass * * RandomMap::SetupTheater(char a2)
{

  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  double v9; // rdi
  double v10; // st7
  int *Waypoint_Location; // eax
  int16_t *v12; // eax
  unsigned int *v13; // eax
  unsigned int *WorldCoords; // eax
  MapResourceClass *v15; // esi
  unsigned int *v16; // eax
  ObjectClass *v17; // eax
  unsigned int *v18; // eax
  MapResourceClass v19; // ecx
  int v20; // edi
  IUnknown *v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  void *v28; // eax
  IPersistStream *v29; // eax
  int i; // eax
  int v31; // ecx
  ObjectClass *j; // eax
  int v33; // ecx
  int k; // eax
  int v35; // ecx
  int m; // eax
  int v37; // ecx
  int n; // eax
  int *v39; // eax
  int16_t *v40; // eax
  unsigned int *v41; // eax
  unsigned int *v42; // eax
  int v43; // esi
  MapResourceClass *v44; // edi
  IUnknown *v45; // eax
  int v46; // esi
  void *v47; // eax
  int v48; // eax
  int v49; // ecx
  MapResourceClass *v50; // edi
  int v51; // esi
  char *v52; // eax
  int v53; // esi
  char *v54; // ecx
  int v55; // edx
  int ii; // eax
  unsigned int *v57; // esi
  int v58; // eax
  void *v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  wchar_t *StringCSF; // eax
  void *v66; // [esp+18h] [ebp-B0h]
  bool v67; // [esp+27h] [ebp-A1h]
  float v68; // [esp+28h] [ebp-A0h]
  int v69; // [esp+28h] [ebp-A0h]
  int v70; // [esp+28h] [ebp-A0h]
  int jj; // [esp+28h] [ebp-A0h]
  MapResourceClass *v72; // [esp+2Ch] [ebp-9Ch] BYREF
  double v73[2]; // [esp+30h] [ebp-98h] BYREF
  MapResourceClass *v74; // [esp+40h] [ebp-88h]
  int v75[2]; // [esp+44h] [ebp-84h] BYREF
  int v76; // [esp+4Ch] [ebp-7Ch]
  int v77; // [esp+50h] [ebp-78h]
  int v78[4]; // [esp+54h] [ebp-74h] BYREF
  void *v79[3]; // [esp+64h] [ebp-64h] BYREF
  int v80[7]; // [esp+70h] [ebp-58h] BYREF
  unsigned int v81[6]; // [esp+8Ch] [ebp-3Ch] BYREF
  char v82; // [esp+A4h] [ebp-24h]
  int v83[3]; // [esp+BCh] [ebp-Ch] BYREF

  v74 = (MapResourceClass *)this;
  *(float *)&v72 = (double)*((char *)this + 25) * 0.33333334;
  v68 = (double)*((char *)this + 26) * 0.33333334;
  RandomMap::LoadConfig(this);
  v3 = *((char *)this + 15);
  if ( v3 == 3 || v3 == 4 )
  {
    v5 = v68;
  }
  else
  {
    if ( *(float *)&v72 >= 1.2 )
      v4 = 1.2;
    else
      v4 = *(float *)&v72;
    *(float *)&v72 = v4;
    if ( v68 >= 1.2 )
      v5 = 1.2;
    else
      v5 = v68;
  }
  *((char *)this + 96) = Math::RoundToInt(v5);
  v6 = Math::RoundToInt(v5);
  v76 = *((char *)this + 96);
  v78[2] = v76 + 4;
  *((char *)this + 97) = v6;
  v78[0] = 0;
  v78[1] = 0;
  v78[3] = v6 + 12;
  v75[0] = 2;
  v75[1] = 5;
  v77 = v6;
  *((char *)this + 195) = 4;
  v79[1] = 0;
  v79[2] = 0;
  INISectionList::Constructor(v80);
  Node::Init(v81);
  v81[5] = 0;
  v82 = 0;
  v79[0] = &CCINIClass_Vtable;
  INIClass::ClearSection((int)v79, 0, 0);
  v7 = *((char *)this + 14);
  *((char *)this + 195) = 4;
  INIClass::SetString((char *)v79, (uint8_t *)&g_abs_81FFF0, unk_818658, &Theater_Array[112 * v7]);
  INIClass::SetRect((char *)v79, (uint8_t *)&g_abs_81FFF0, g_INI_Key_Size, v78);
  INIClass::SetRect((char *)v79, (uint8_t *)&g_abs_81FFF0, g_INI_Key_LocalSize, v75);
  INIClass::SetInt((char *)v79, (uint8_t *)&g_abs_81FFF0, aLevel, *((char *)this + 195), 0);
  INIClass::SetString(
    (char *)v79,
    (uint8_t *)(*(unsigned int *)g_SuperWeaponTypeCount + 36),
    aTechlevel,
    g_abs_82BFAC);
  INIClass::SetString(
    (char *)v79,
    (uint8_t *)g_abs_82BF9C,
    g_abs_82BFA4,
    (char *)(*(unsigned int *)g_SuperWeaponTypeCount + 36));
  if ( *((char *)this + 14) )
    v8 = *((char *)this + 113);
  else
    v8 = *((char *)this + 106);
  v73[0] = (double)*(int *)(v8 + 4 * *((char *)this + 18)) * 0.01;
  v9 = v73[0];
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_abs_82BF94, v73[0]);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, aRedtint, 1.0);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, aGreentint, 1.0);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, aBluetint, 1.0);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_Ground, 0.0);
  IDA_LODWORD(v73[0]) = *(unsigned int *)(*(unsigned int *)&v74[99] + 4 * *(unsigned int *)&v74[18]) / 100;
  v10 = (double)IDA_SLODWORD(v73[0]);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, aLevel, v10);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_IonAmbient, v9);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_IonRed, 0.3);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_IonGreen, 0.4);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_IonBlue, 0.75);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_IonGround, 0.0);
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_IonLevel, 0.0);
  if ( !*((unsigned char *)g_abs_A8B230 + 13720) )
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 1.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  BuildingClass::FreeUpgradeQueue();
  BuildingClass::FreeUpgradeQueue2();
  if ( !a2 )
  {
    ++g_abs_A8E7AC;
    ScenarioClass::SetFileName((char *)g_abs_A8B230, &g_abs_889F64);
    if ( g_abs_A8ED6B )
      ResetScenario();
    ScenarioClass::LoadMap(1, (int)v79, v10);
    PostLoadInitScenario(IDA_SLODWORD(v9));
    IDA_HIWORD(v69) = g_abs_87F8E0 / 2 + g_abs_87F8DC / 2;
    IDA_LOWORD(v69) = IDA_HIWORD(v69) + 1;
    ScenarioClass::Set_Waypoint((char *)g_abs_A8B230, 700, v69);
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)g_abs_A8B230, v73, 700);
    ScenarioClass::Set_Waypoint((char *)g_abs_A8B230, *((unsigned int *)g_abs_A8B230 + 131), *Waypoint_Location);
    v12 = (int16_t *)ScenarioClass::Get_Waypoint_Location(
                       (char *)g_abs_A8B230,
                       v73,
                       *((unsigned int *)g_abs_A8B230 + 131));
    v13 = CellCoord::To_CellObj(&g_abs_87F7E8, v12);
    v13[80] |= 4u;
    WorldCoords = Cell::GetWorldCoords((int16_t *)g_abs_A8B230, v73, *((unsigned int *)g_abs_A8B230 + 131));
    TacticalClass::SetPositionThunk((int)WorldCoords);
    goto LABEL_153;
  }
  ScenarioClass::InitTimer((int)g_abs_A8B230);
  v15 = v74;
  if ( !*(unsigned int *)&v74[95] )
  {
    v16 = RA2_OPNEW(4u);
    if ( v16 )
      v17 = (ObjectClass *)unknown_libname_27(v16);
    else
      v17 = 0;
    v74[95] = (MapResourceClass)v17;
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 101);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 2.0, NAN);
  v18 = (unsigned int *)v15[94];
  v19 = v15[14];
  v20 = *((unsigned int *)g_abs_A8B230 + 1174);
  IDA_LODWORD(v73[0]) = v19;
  v67 = 1;
  v70 = v20;
  if ( v18 )
  {
    v20 = v18[14];
    v70 = v20;
    if ( v18[25] == *(unsigned int *)&v15[25] && v18[26] == *(unsigned int *)&v15[26] && v20 == v19 )
      v67 = v18[20] != *(unsigned int *)&v15[20];
  }
  v21 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v21 = (IUnknown *)off_82AF14;
    v19 = (MapResourceClass)IDA_LODWORD(v73[0]);
  }
  if ( !*(unsigned int *)&v15[94] || v19 != v20 || v67 )
  {
    v22 = g_abs_A8E978 - 1;
    if ( g_abs_A8E978 - 1 >= 0 )
    {
      do
      {
        if ( (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)g_abs_A8E96C + v22) + 4) + 12))(*((unsigned int *)g_abs_A8E96C + v22) + 4) == 18
          && v22 < g_abs_A8E978 )
        {
          v23 = v22;
          if ( v22 < --g_abs_A8E978 )
          {
            do
            {
              ++v23;
              *((unsigned int *)g_abs_A8E96C + v23 - 1) = *((unsigned int *)g_abs_A8E96C + v23);
            }
            while ( v23 < g_abs_A8E978 );
          }
        }
        --v22;
      }
      while ( v22 >= 0 );
      v21 = (IUnknown *)off_82AF14;
    }
    if ( v21 )
      ((void (*)())v21)();
    Game::DestroyAllObjects();
    if ( off_82AF14 )
      off_82AF14();
    v24 = 0;
    if ( g_abs_A8ED38 > 0 )
    {
      v25 = g_abs_A8E970;
      do
      {
        v26 = *((unsigned int *)g_abs_A8ED2C + v24);
        if ( g_abs_A8E978 < v25 )
          goto LABEL_57;
        if ( !g_abs_A8E975 && v25 || g_abs_A8E97C <= 0 )
          goto LABEL_59;
        if ( (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A8E968 + 8))(
               &g_abs_A8E968,
               g_abs_A8E97C + v25,
               0) )
        {
LABEL_57:
          v27 = g_abs_A8E978++;
          *((unsigned int *)g_abs_A8E96C + v27) = v26;
        }
        v25 = g_abs_A8E970;
LABEL_59:
        ++v24;
      }
      while ( v24 < g_abs_A8ED38 );
    }
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 104);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 5.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( v67 )
  {
    MouseClass::HandleClick((int)&g_abs_87F7E8);
    CellClass::DrawWrapper(&g_abs_87F7E8, v78, 1, 0, 1);
    Shroud::ProcessCellVisibility(&g_abs_87F7E8, (int)v75);
    if ( g_abs_887324 )
      (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)g_abs_887324 + 32))(g_abs_887324, 1);
    v28 = RA2_OPNEW(0xE18u);
    if ( v28 )
      v29 = (IPersistStream *)TacticalMap::Construct((int)v28);
    else
      v29 = 0;
    g_abs_887324 = v29;
    Map_Setup_6DA980();
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 109);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 10.0, NAN);
  for ( i = g_abs_8B4118; g_abs_8B4118 > 0; i = g_abs_8B4118 )
  {
    v31 = *((unsigned int *)g_abs_8B410C + i - 1);
    if ( v31 )
      (*(void (**)(int, int))(*(unsigned int *)v31 + 32))(v31, 1);
  }
  for ( j = (ObjectClass *)g_abs_A83DF8; g_abs_A83DF8 > 0; j = (ObjectClass *)g_abs_A83DF8 )
  {
    v33 = *((unsigned int *)g_abs_A83DEC + (unsigned int)j - 1);
    if ( v33 )
      (*(void (**)(int, int))(*(unsigned int *)v33 + 32))(v33, 1);
  }
  for ( k = g_abs_A8EB50; g_abs_A8EB50 > 0; k = g_abs_A8EB50 )
  {
    v35 = *((unsigned int *)g_abs_A8EB44 + k - 1);
    if ( v35 )
      (*(void (**)(int, int))(*(unsigned int *)v35 + 32))(v35, 1);
  }
  for ( m = g_abs_A8E998; g_abs_A8E998 > 0; m = g_abs_A8E998 )
  {
    v37 = *((unsigned int *)g_abs_A8E98C + m - 1);
    if ( v37 )
      (*(void (**)(int, int))(*(unsigned int *)v37 + 32))(v37, 1);
  }
  if ( off_82AF14 )
    off_82AF14();
  LayerClass::CellIteratorReset(&g_abs_87F7E8);
  for ( n = LayerClass::CellIteratorNext(&g_abs_87F7E8); n; n = LayerClass::CellIteratorNext(&g_abs_87F7E8) )
  {
    *(unsigned char *)(n + 284) = 0;
    *(unsigned char *)(n + 283) = 4;
    *(unsigned int *)(n + 56) = 0;
    *(unsigned char *)(n + 282) = 0;
    *(unsigned int *)(n + 68) = -1;
    *(unsigned char *)(n + 286) = 0;
  }
  if ( off_82AF14 )
    off_82AF14();
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 114);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 15.0, NAN);
  MapClass::ProcessRegion(&g_abs_87F7E8);
  Terrain::ConnectivityGraph(&g_abs_87F7E8);
  MapClass::BuildSubzones(&g_abs_87F7E8);
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 119);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 20.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  ScenarioClass::ClearAllWaypoints((char *)g_abs_A8B230);
  IDA_HIWORD(v72) = g_abs_87F8E0 / 2 + g_abs_87F8DC / 2;
  IDA_LOWORD(v72) = IDA_HIWORD(v72) + 1;
  ScenarioClass::Set_Waypoint((char *)g_abs_A8B230, 700, (int)v72);
  v39 = ScenarioClass::Get_Waypoint_Location((char *)g_abs_A8B230, &v72, 700);
  ScenarioClass::Set_Waypoint((char *)g_abs_A8B230, 699, *v39);
  v40 = (int16_t *)ScenarioClass::Get_Waypoint_Location((char *)g_abs_A8B230, &v72, 699);
  v41 = CellCoord::To_CellObj(&g_abs_87F7E8, v40);
  v41[80] |= 4u;
  v42 = Cell::GetWorldCoords((int16_t *)g_abs_A8B230, v83, 699);
  TacticalClass::SetPositionThunk((int)v42);
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 124);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 25.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v43 = IDA_LODWORD(v73[0]);
  ++g_abs_A8E7AC;
  if ( IDA_LODWORD(v73[0]) != *((unsigned int *)g_abs_A8B230 + 1174) )
  {
    LoadTheaterClassMIX(IDA_SLODWORD(v73[0]));
    *((unsigned int *)g_abs_A8B230 + 1174) = v43;
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 129);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 30.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v44 = v74;
  if ( !*(unsigned int *)&v74[94] || v43 != v70 || v67 )
  {
    ResetRules(g_abs_8871E0);
    ScenarioClass::ReadGlobalVariables((char *)g_abs_A8B230, (char *)g_abs_887048);
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 134);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 35.0, NAN);
  v45 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v45 = (IUnknown *)off_82AF14;
  }
  if ( !*(unsigned int *)&v44[94] || v43 != v70 || v67 )
  {
    if ( !HouseClass_Count )
    {
      v46 = 0;
      if ( g_SuperWeaponTypeArray > 0 )
      {
        do
        {
          v47 = RA2_OPNEW(0x160B8u);
          if ( v47 )
            v48 = HouseClass::Construct((int)v47, *((unsigned int *)g_SuperWeaponTypeCount + v46));
          else
            v48 = 0;
          HouseClass::ReadFromINI(v48, (uint8_t ***)v79);
          ++v46;
        }
        while ( v46 < g_SuperWeaponTypeArray );
        v45 = (IUnknown *)off_82AF14;
      }
    }
    if ( v45 )
      ((void (*)())v45)();
    LoadObjectTypeClassTheaterSHP(*((unsigned int *)g_abs_A8B230 + 1174));
    v49 = *((unsigned int *)g_abs_A8B230 + 1174);
    if ( v49 == dword_822CF8 )
      ResetAllTechnoField776();
    else
      LoadTerrainTypeClassTheatre(v49, 1);
    LoadBuildingTypeClassSHPs(*((unsigned int *)g_abs_A8B230 + 1174));
    if ( off_82AF14 )
    {
      off_82AF14();
      if ( off_82AF14 )
      {
        off_82AF14();
        if ( off_82AF14 )
          off_82AF14();
      }
    }
    BuildingTypeClass::LoadRepairAnimations(v66);
    if ( off_82AF14 )
      off_82AF14();
    LoadBuildingTypeClassTheatreSHP(*((unsigned int *)g_abs_A8B230 + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadFactoryClassTheaterSHP(*((unsigned int *)g_abs_A8B230 + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadMapClassIsometricTiles(0, 1);
  }
  dword_822CF8 = *((unsigned int *)g_abs_A8B230 + 1174);
LABEL_153:
  v50 = v74;
  --g_abs_A8E7AC;
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 139);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 40.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( g_MapTileArray )
    RA2_OPDEL(g_MapTileArray);
  v51 = unk_89C2DC * unk_89C2DC;
  v52 = (char *)RA2_OPNEW(80 * unk_89C2DC * unk_89C2DC);
  if ( v52 )
  {
    v53 = v51 - 1;
    if ( v53 >= 0 )
    {
      v54 = v52 + 8;
      v55 = v53 + 1;
      do
      {
        *((unsigned short *)v54 - 4) = 0;
        *((unsigned short *)v54 - 3) = 0;
        *(unsigned int *)v54 = 0;
        *((unsigned int *)v54 + 2) = 0;
        *((unsigned int *)v54 + 4) = 0;
        *((unsigned int *)v54 + 6) = 0;
        *((unsigned int *)v54 + 8) = 0;
        *((unsigned int *)v54 + 10) = 0;
        *((unsigned int *)v54 + 1) = 0;
        *((unsigned int *)v54 + 3) = 0;
        *((unsigned int *)v54 + 5) = 0;
        *((unsigned int *)v54 + 7) = 0;
        *((unsigned int *)v54 + 9) = 0;
        *((unsigned int *)v54 + 11) = 0;
        *((unsigned int *)v54 + 12) = 0;
        *((unsigned int *)v54 + 13) = 0;
        *((unsigned int *)v54 + 14) = -1;
        v54[60] = 0;
        v54[61] = 0;
        v54[62] = 0;
        v54[63] = 0;
        v54[64] = 0;
        v54[65] = 0;
        v54[66] = 1;
        v54[67] = 0;
        v54 += 80;
        --v55;
      }
      while ( v55 );
    }
    g_MapTileArray = v52;
  }
  else
  {
    g_MapTileArray = 0;
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8);
  for ( ii = LayerClass::CellIteratorNext(&g_abs_87F7E8); ii; ii = LayerClass::CellIteratorNext(&g_abs_87F7E8) )
  {
    IDA_LODWORD(v73[0]) = *(unsigned int *)(ii + 36);
    *((unsigned int *)g_MapTileArray + 20 * SLOWORD(v73[0]) + 20 * unk_89C2DC * SWORD1(v73[0])) = IDA_LODWORD(v73[0]);
    *(unsigned char *)(ii + 283) = v50[195].__tail_0[0];
  }
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 144);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 45.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  g_MapTileArrayEnd = 0;
  for ( jj = g_RandomMap_TileData - 1; jj >= 0; --jj )
  {
    v57 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + jj);
    if ( v57 )
    {
      if ( *v57 )
      {
        (**(void (***)(unsigned int, int))*v57)(*v57, 1);
        *v57 = 0;
      }
      IDA_LODWORD(v73[0]) = v57;
      v58 = (*(int (**)(int *, double *))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, v73);
      if ( v58 != -1 )
        Vector4::EraseAt(&g_RandomMap_BuildObject, v58);
      v59 = (void *)v57[11];
      v57[10] = &vt_VectorClass_Cell;
      if ( v59 && *((unsigned char *)v57 + 53) )
      {
        RA2_OPDEL(v59);
        v57[11] = 0;
      }
      *((unsigned char *)v57 + 53) = 0;
      v57[12] = 0;
      RA2_OPDEL(v57);
    }
  }
  v50[193] = 0;
  v50[194] = 0;
  *(unsigned long long *)&v73[0] = (unsigned int)Random::State(&g_Randomizer);
  v50[196].__tail_0[0] = (double)*(int64_t *)&v73[0] * 2.328306437080797e-10 < 0.25;
  TacticalClass::FreeResources((int)&g_abs_87F7E8);
  Shroud::ProcessCellVisibility(&g_abs_87F7E8, (int)v75);
  RandomMap::PlaceTileSet(&g_abs_87F7E8);
  RadarClass::RecreateSurface((int)&g_abs_87F7E8, 0);
  if ( v50[14] )
    v60 = *(unsigned int *)(*(unsigned int *)&v50[113] + 4 * *(unsigned int *)&v50[18]);
  else
    v60 = *(unsigned int *)(*(unsigned int *)&v50[106] + 4 * *(unsigned int *)&v50[18]);
  *((unsigned int *)g_abs_A8B230 + 3402) = v60;
  *((unsigned int *)g_abs_A8B230 + 3409) = *(unsigned int *)(*(unsigned int *)&v50[99] + 4 * *(unsigned int *)&v50[18]);
  if ( v50[14] )
    v61 = *(unsigned int *)(*(unsigned int *)&v50[141] + 4 * *(unsigned int *)&v50[18]);
  else
    v61 = *(unsigned int *)(*(unsigned int *)&v50[120] + 4 * *(unsigned int *)&v50[18]);
  *((unsigned int *)g_abs_A8B230 + 3405) = v61;
  if ( v50[14] )
    v62 = *(unsigned int *)(*(unsigned int *)&v50[148] + 4 * *(unsigned int *)&v50[18]);
  else
    v62 = *(unsigned int *)(*(unsigned int *)&v50[127] + 4 * *(unsigned int *)&v50[18]);
  *((unsigned int *)g_abs_A8B230 + 3406) = v62;
  if ( v50[14] )
    v63 = *(unsigned int *)(*(unsigned int *)&v50[155] + 4 * *(unsigned int *)&v50[18]);
  else
    v63 = *(unsigned int *)(*(unsigned int *)&v50[134] + 4 * *(unsigned int *)&v50[18]);
  *((unsigned int *)g_abs_A8B230 + 3407) = v63;
  if ( *((unsigned char *)g_abs_A8B230 + 13720) )
    Multiplayer::ShowProgress(g_abs_A8B238, 149);
  else
    Network::UpdateLatencyDisplay((int)g_abs_AC4F58, 0, 50.0, NAN);
  if ( !wcslen((const wchar_t *)&v50[30]) )
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 6746);
    wcscpy((wchar_t *)&v50[30], StringCSF);
  }
  return HashTable::DestroyHashTableINIClass(v79);

}
} // namespace gamemd

// 0x59A6C0
namespace gamemd {
int RandomMap::FinalizeMapData()
{

  int i; // eax
  int v3; // eax
  int v4; // eax
  unsigned int *j; // edi
  char v6; // bl
  signed int k; // esi
  unsigned int *NeighbourContent; // eax
  int v9; // ecx
  int v10; // eax
  int m; // ebx
  unsigned int *v12; // esi
  int v13; // eax
  void *v14; // eax
  int result; // eax
  int *n; // ebp
  signed int ii; // esi
  unsigned int *v18; // edi
  unsigned int *v19; // [esp+10h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59a6cc*/
  for ( i = LayerClass::CellIteratorNext(&g_abs_87F7E8); i; i = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59a6dd*/
    *(unsigned int *)(i + 56) = dword_AA0738; /*0x59a6e5*/
  v3 = *((char *)this + 15); /*0x59a6f6*/
  if ( v3 ) /*0x59a6fc*/
  {
    v4 = v3 - 1; /*0x59a6fe*/
    if ( v4 ) /*0x59a6ff*/
    {
      if ( v4 == 1 ) /*0x59a702*/
        RandomMap::PlaceTerrainFeatures(this); /*0x59a706*/
    }
    else
    {
      RandomMap::FillTerrainProgressively(this); /*0x59a70f*/
    }
  }
  else
  {
    RandomMap::ArrangeBuildingGrid(this); /*0x59a718*/
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59a722*/
  for ( j = (unsigned int *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x59a735*/
        j;
        j = (unsigned int *)LayerClass::CellIteratorNext(&g_abs_87F7E8) )
  {
    if ( j[14] == dword_AA0738 ) /*0x59a741*/
    {
      v6 = 1; /*0x59a743*/
      for ( k = 0; k < 8; k += 2 ) /*0x59a745*/
      {
        NeighbourContent = Cell::GetNeighbourContent(j, k); /*0x59a74a*/
        if ( !Cell::IsEmpty(NeighbourContent) ) /*0x59a751*/
          v6 = 0; /*0x59a75a*/
      }
      if ( v6 ) /*0x59a766*/
        j[14] = 0; /*0x59a768*/
    }
  }
  MapClass::InitTileData(0, 0); /*0x59a788*/
  if ( g_MapTileArray ) /*0x59a794*/
  {
    v9 = unk_89C2DC * unk_89C2DC; /*0x59a79c*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x59a7a1*/
    {
      v10 = 0; /*0x59a7a3*/
      do /*0x59a7c0*/
      {
        *(unsigned int *)((char *)g_MapTileArray + v10 + 56) = -1; /*0x59a7ae*/
        *(unsigned int *)((char *)g_MapTileArray + v10 + 60) = -1; /*0x59a7b8*/
        v10 += 80; /*0x59a7bc*/
        --v9; /*0x59a7bf*/
      }
      while ( v9 ); /*0x59a7c0*/
    }
  }
  for ( m = g_RandomMap_TileData - 1; m >= 0; --m ) /*0x59a7cc*/
  {
    v12 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + m); /*0x59a7df*/
    if ( v12 ) /*0x59a7e4*/
    {
      if ( *v12 ) /*0x59a7ea*/
      {
        (**(void (***)(unsigned int, int))*v12)(*v12, 1); /*0x59a7f4*/
        *v12 = 0; /*0x59a7f6*/
      }
      v19 = v12; /*0x59a808*/
      v13 = (*(int (**)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v19); /*0x59a80c*/
      if ( v13 != -1 && v13 < g_RandomMap_TileData && v13 < --g_RandomMap_TileData ) /*0x59a827*/
      {
        do /*0x59a83f*/
        {
          ++v13; /*0x59a82f*/
          *((unsigned int *)g_RandomMap_TerrainState + v13 - 1) = *((unsigned int *)g_RandomMap_TerrainState + v13); /*0x59a833*/
        }
        while ( v13 < g_RandomMap_TileData ); /*0x59a83f*/
      }
      v14 = (void *)v12[11]; /*0x59a841*/
      v12[10] = &vt_VectorClass_Cell; /*0x59a844*/
      if ( v14 && *((unsigned char *)v12 + 53) ) /*0x59a84b*/
      {
        RA2_OPDEL(v14); /*0x59a853*/
        v12[11] = 0; /*0x59a85b*/
      }
      *((unsigned char *)v12 + 53) = 0; /*0x59a85f*/
      v12[12] = 0; /*0x59a863*/
      RA2_OPDEL(v12); /*0x59a866*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59a87a*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59a884*/
  result = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x59a88e*/
  for ( n = (int *)result; result; n = (int *)result ) /*0x59a897*/
  {
    if ( CellClass::IsTerrainType(n) ) /*0x59a89b*/
    {
      for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
      {
        v18 = Cell::GetNeighbourContent(n, ii); /*0x59a8ae*/
        if ( Cell::IsEmpty(v18) ) /*0x59a8b2*/
          v18[14] = unk_AA0E18; /*0x59a8c0*/
      }
    }
    result = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x59a8d0*/
  }
  return result; /*0x59a8db*/

}
}
// 0x59AD10
namespace gamemd {
void RandomMap::ArrangeBuildingGrid()
{

  int v2; // eax
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  MapResourceClass *i; // eax
  int v8; // eax
  BuildingTypeClass *v9; // esi
  int v10; // edi
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int *v16; // esi
  unsigned int *v17; // edx
  MapResourceClass aP5; // [esp+10h] [ebp-50h] BYREF
  BuildingTypeClass *v19; // [esp+14h] [ebp-4Ch]
  MapResourceClass aP3[2]; // [esp+18h] [ebp-48h] BYREF
  double v21; // [esp+20h] [ebp-40h]
  MapResourceClass aP2; // [esp+28h] [ebp-38h] BYREF
  CCINIClass *v23; // [esp+2Ch] [ebp-34h]
  int v24; // [esp+30h] [ebp-30h]
  BuildingTypeClass *v25; // [esp+34h] [ebp-2Ch]
  int v26[4]; // [esp+38h] [ebp-28h] BYREF
  void **v27; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  char v29; // [esp+55h] [ebp-Bh]
  int v30; // [esp+58h] [ebp-8h]
  int v31; // [esp+5Ch] [ebp-4h]

  *((char *)this + 194) = 1; /*0x59ad27*/
  RandomMap::Constructor_0(&v27, 0, 0); /*0x59ad31*/
  v2 = *((char *)this + 20); /*0x59ad36*/
  v27 = &vt_DynamicVectorClass_TRect_int; /*0x59ad39*/
  v31 = 10; /*0x59ad44*/
  v3 = v2 / 2; /*0x59ad4c*/
  v30 = 0; /*0x59ad51*/
  v4 = 2; /*0x59ad55*/
  if ( v3 >= 2 ) /*0x59ad5a*/
    v4 = v3; /*0x59ad5c*/
  *(unsigned long long *)aP3[0].__tail_0 = v4; /*0x59ad5e*/
  v21 = (double)v4; /*0x59ad6a*/
  do /*0x59ad9b*/
  {
    *(unsigned long long *)aP3[0].__tail_0 = (unsigned int)Random::State(&g_Randomizer); /*0x59ad78*/
    v5 = Math::RoundToInt((double)*(int64_t *)aP3[0].__tail_0 * v21 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
  }
  while ( v5 > v4 ); /*0x59ad9b*/
  v26[1] = (int)g_abs_87F8E4; /*0x59ada9*/
  v26[0] = g_abs_87F8E4; /*0x59adb3*/
  v26[3] = (int)g_abs_87F8E4; /*0x59adbd*/
  v6 = *((char *)this + 20); /*0x59adc1*/
  v26[2] = (int)g_abs_87F8E4; /*0x59adc4*/
  ArrangeBuildingPlacementGrid((int)&v27, v5 + v6, v26); /*0x59add7*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59ade1*/
  for ( i = (MapResourceClass *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x59adf2*/
        i;
        i = (MapResourceClass *)LayerClass::CellIteratorNext(&g_abs_87F7E8) )
  {
    aP5 = i[9]; /*0x59adf7*/
    *((unsigned int *)g_MapTileArray + 20 * *(int16_t *)aP5.__tail_0 + 20 * unk_89C2DC * *(int16_t *)&aP5.__tail_0[2] + 15) = 0; /*0x59ae1c*/
  }
  while ( v30 > 0 ) /*0x59ae2d*/
  {
    aP2 = *(MapResourceClass *)Block; /*0x59ae3d*/
    v23 = (CCINIClass *)*((unsigned int *)Block + 1); /*0x59ae44*/
    v24 = *((unsigned int *)Block + 2); /*0x59ae4b*/
    v25 = (BuildingTypeClass *)*((unsigned int *)Block + 3); /*0x59ae57*/
    v8 = Random::State(&g_Randomizer); /*0x59ae5b*/
    v9 = v25; /*0x59ae60*/
    v10 = v24; /*0x59ae68*/
    *(unsigned long long *)&v21 = (unsigned int)v8; /*0x59ae6e*/
    v19 = (BuildingTypeClass *)(2 * v24 * (unsigned int)v25); /*0x59ae8d*/
    v11 = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)(int)v19); /*0x59ae9c*/
    aP3[0] = (MapResourceClass)&v23->__pad_0[*(unsigned int *)&aP2 + 1 + v10 / 2 + (int)v9 / 2]; /*0x59aecd*/
    aP3[1] = (MapResourceClass)&v23->__pad_0[g_abs_87F8DC + (int)v9 / 2 - v10 / 2 - *(unsigned int *)&aP2]; /*0x59aed1*/
    v12 = 0; /*0x59aed5*/
    do /*0x59af1f*/
    {
      if ( v12 >= 10 ) /*0x59aeda*/
        break; /*0x59aeda*/
      *(unsigned short *)aP5.__tail_0 = *(unsigned short *)aP3[0].__tail_0; /*0x59aef1*/
      *(unsigned short *)&aP5.__tail_0[2] = *(unsigned short *)aP3[1].__tail_0; /*0x59aef8*/
      v13 = RandomMap::PlaceTerrain(this, v11, &aP2, aP3, 1, &aP5, 0.25, 0); /*0x59af0d*/
      if ( !v13 ) /*0x59af14*/
        ++*((char *)this + 194); /*0x59af16*/
      ++v12; /*0x59af1c*/
    }
    while ( !v13 ); /*0x59af1f*/
    if ( v30 <= 0 ) /*0x59af27*/
      break; /*0x59af27*/
    v14 = 0; /*0x59af2a*/
    if ( --v30 <= 0 ) /*0x59af32*/
      break; /*0x59af32*/
    v15 = 0; /*0x59af34*/
    do /*0x59af60*/
    {
      v16 = (char *)Block + v15 + 16; /*0x59af3a*/
      v17 = (char *)Block + v15; /*0x59af3e*/
      ++v14; /*0x59af40*/
      v15 += 16; /*0x59af41*/
      *v17 = *v16; /*0x59af46*/
      v17[1] = v16[1]; /*0x59af4b*/
      v17[2] = v16[2]; /*0x59af51*/
      v17[3] = v16[3]; /*0x59af57*/
    }
    while ( v14 < v30 ); /*0x59af60*/
  }
  v27 = &vt_VectorClass_TRect_int; /*0x59af70*/
  if ( Block ) /*0x59af7a*/
  {
    if ( v29 ) /*0x59af82*/
      RA2_OPDEL(Block); /*0x59af85*/
  }

}
}
// 0x59AFA0
namespace gamemd {
void RandomMap::FillTerrainProgressively()
{

  MapResourceClass *v1; // edi
  int v2; // eax
  double v3; // st7
  int v4; // ebx
  MapResourceClass *i; // eax
  int v6; // eax
  int v7; // edi
  int j; // ecx
  int64_t v9; // rax
  int v10; // esi
  int v11; // [esp+10h] [ebp-48h]
  int v12; // [esp+14h] [ebp-44h]
  int v13; // [esp+18h] [ebp-40h]
  MapResourceClass aP5; // [esp+1Ch] [ebp-3Ch] BYREF
  MapResourceClass *v15; // [esp+20h] [ebp-38h]
  int v16; // [esp+24h] [ebp-34h]
  MapResourceClass aP3; // [esp+28h] [ebp-30h] BYREF
  int v18; // [esp+2Ch] [ebp-2Ch]
  double v19; // [esp+30h] [ebp-28h]
  double v20; // [esp+38h] [ebp-20h]
  double v21; // [esp+40h] [ebp-18h]
  MapResourceClass aP2; // [esp+48h] [ebp-10h] BYREF
  char *v23; // [esp+4Ch] [ebp-Ch]
  char *v24; // [esp+50h] [ebp-8h]
  char *v25; // [esp+54h] [ebp-4h]

  v1 = this; /*0x59afad*/
  v15 = this; /*0x59afaf*/
  *((unsigned int *)this + 194) = 1; /*0x59afb3*/
  v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
  v3 = (double)(int)v1[19]; /*0x59afc2*/
  aP5 = (MapResourceClass)v2; /*0x59afc5*/
  v12 = 0; /*0x59afcb*/
  v13 = 0; /*0x59afcf*/
  v19 = 0.0; /*0x59afd9*/
  v20 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
  v21 = (double)v2; /*0x59b003*/
  v16 = Math::RoundToInt(v21 * 0.03 * v20); /*0x59b016*/
  v4 = g_abs_87F8E0 / 2 + g_abs_87F8DC / 2; /*0x59b030*/
  v18 = v4; /*0x59b038*/
  aP3 = (MapResourceClass)(v4 + 1); /*0x59b03f*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59b043*/
  for ( i = (MapResourceClass *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x59b054*/
        i;
        i = (MapResourceClass *)LayerClass::CellIteratorNext(&g_abs_87F7E8) )
  {
    aP5 = i[9]; /*0x59b059*/
    *((unsigned int *)g_MapTileArray + 20 * *(int16_t *)aP5.__tail_0 + 20 * unk_89C2DC * *(int16_t *)&aP5.__tail_0[2] + 15) = 0; /*0x59b07a*/
  }
  aP2 = (MapResourceClass)(g_abs_87F8E4 + 1); /*0x59b0af*/
  v23 = (char *)g_abs_87F8E4 + 1; /*0x59b0bb*/
  v24 = (char *)g_abs_87F8E4 - 2; /*0x59b0c2*/
  v25 = (char *)g_abs_87F8E4 - 2; /*0x59b0c6*/
  if ( v20 > 0.0 ) /*0x59b0ca*/
  {
    while ( v13 < 100 ) /*0x59b0db*/
    {
      v6 = Math::RoundToInt((v20 - v19) * v21); /*0x59b0ed*/
      if ( v6 >= v16 ) /*0x59b0f8*/
        v6 = v16; /*0x59b0fa*/
      *(unsigned short *)aP5.__tail_0 = v4 + 1; /*0x59b119*/
      *(unsigned short *)&aP5.__tail_0[2] = v4; /*0x59b11e*/
      v12 += RandomMap::PlaceTerrain((int *)v1, v6, &aP2, &aP3, 1, &aP5, 0.75, 1); /*0x59b133*/
      ++v13; /*0x59b137*/
      v7 = 50000; /*0x59b144*/
      v11 = 0; /*0x59b149*/
      v19 = (double)v12 / v21; /*0x59b15b*/
      LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59b15f*/
      for ( j = LayerClass::CellIteratorNext(&g_abs_87F7E8); j; j = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59b172*/
      {
        if ( !*((unsigned int *)g_MapTileArray + 20 * *(int16_t *)(j + 36) + 20 * unk_89C2DC * *(int16_t *)(j + 38) + 15) ) /*0x59b191*/
        {
          v9 = *(int16_t *)(j + 36) - (v4 + 1); /*0x59b1ac*/
          v10 = (IDA_HIDWORD(v9) ^ v9) - IDA_HIDWORD(v9) + abs32(*(int16_t *)(j + 38) - v4); /*0x59b1b1*/
          if ( v10 < v7 ) /*0x59b1b5*/
          {
            v7 = v10; /*0x59b1ba*/
            v11 = *(unsigned int *)(j + 36); /*0x59b1bc*/
          }
        }
      }
      aP3 = (MapResourceClass)(int16_t)v11; /*0x59b1e2*/
      v18 = SHIWORD(v11); /*0x59b1e6*/
      if ( v19 >= v20 ) /*0x59b1ef*/
        break; /*0x59b1ef*/
      v1 = v15; /*0x59b0d2*/
    }
  }

}
}
// 0x59B200
namespace gamemd {
int RandomMap::PlaceTerrainFeatures()
{

  int i; // eax
  int v3; // esi
  double v4; // st7
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  int16_t *v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int64_t v14; // rax
  int v15; // eax
  bool v16; // zf
  int result; // eax
  int v18; // [esp+10h] [ebp-B8h]
  int v19; // [esp+10h] [ebp-B8h]
  int v20; // [esp+14h] [ebp-B4h]
  double v21; // [esp+18h] [ebp-B0h]
  int v22; // [esp+20h] [ebp-A8h]
  int v23; // [esp+24h] [ebp-A4h]
  int v24; // [esp+28h] [ebp-A0h]
  int *v25; // [esp+2Ch] [ebp-9Ch]
  int v26; // [esp+30h] [ebp-98h] BYREF
  int v27; // [esp+34h] [ebp-94h]
  int v28; // [esp+38h] [ebp-90h]
  int v29; // [esp+3Ch] [ebp-8Ch]
  double v30; // [esp+40h] [ebp-88h]
  int v31; // [esp+4Ch] [ebp-7Ch] BYREF
  int v32; // [esp+50h] [ebp-78h]
  int v33; // [esp+54h] [ebp-74h]
  int v34; // [esp+58h] [ebp-70h]
  int *v35; // [esp+5Ch] [ebp-6Ch]
  int v36; // [esp+60h] [ebp-68h] BYREF
  int v37; // [esp+64h] [ebp-64h]
  double v38; // [esp+68h] [ebp-60h]
  double v39; // [esp+70h] [ebp-58h]
  unsigned int v40[2]; // [esp+78h] [ebp-50h] BYREF
  int v41; // [esp+80h] [ebp-48h]
  int v42; // [esp+84h] [ebp-44h]
  int v43; // [esp+88h] [ebp-40h]
  int v44; // [esp+8Ch] [ebp-3Ch]
  int v45; // [esp+90h] [ebp-38h]
  int v46; // [esp+94h] [ebp-34h]
  int v47; // [esp+98h] [ebp-30h]
  int v48; // [esp+9Ch] [ebp-2Ch]
  double v49; // [esp+A0h] [ebp-28h]
  double v50; // [esp+A8h] [ebp-20h]
  int v51; // [esp+B4h] [ebp-14h]
  double v52; // [esp+B8h] [ebp-10h]
  double v53; // [esp+C0h] [ebp-8h]

  v35 = this; /*0x59b212*/
  *((char *)this + 194) = 1; /*0x59b216*/
  v18 = Object::ComputeAllocationSize(); /*0x59b228*/
  v23 = 0; /*0x59b22e*/
  v38 = (1.0 - (double)*((char *)this + 19) * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
  v50 = (double)v18; /*0x59b25a*/
  v48 = Math::RoundToInt(v50 * 0.06 * v38); /*0x59b275*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59b27c*/
  for ( i = LayerClass::CellIteratorNext(&g_abs_87F7E8); i; i = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59b28d*/
    *((unsigned int *)g_MapTileArray /*0x59b2b7*/
    + 20 * (int16_t)*(unsigned int *)(i + 36)
    + 20 * unk_89C2DC * (int16_t)IDA_HIWORD(*(unsigned int *)(i + 36))
    + 15) = 0;
  *(unsigned long long *)&v30 = (unsigned int)Random::State(&g_Randomizer); /*0x59b2ce*/
  v40[0] = g_abs_87F8E4; /*0x59b2fe*/
  v40[1] = g_abs_87F8E8; /*0x59b30d*/
  if ( (double)((long long)(v30)) * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
  {
    v41 = g_abs_87F8EC; /*0x59b35c*/
    v42 = g_abs_87F8F0 / 2 - 1; /*0x59b36a*/
    v43 = g_abs_87F8E4; /*0x59b371*/
    v44 = g_abs_87F8F0 / 2 + g_abs_87F8E8 + 1; /*0x59b378*/
    v45 = g_abs_87F8EC; /*0x59b37f*/
    v46 = v42; /*0x59b386*/
  }
  else
  {
    v42 = g_abs_87F8F0; /*0x59b311*/
    v41 = g_abs_87F8EC / 2 - 1; /*0x59b31f*/
    v43 = g_abs_87F8EC / 2 + g_abs_87F8E4 + 1; /*0x59b326*/
    v44 = g_abs_87F8E8; /*0x59b32d*/
    v45 = v41; /*0x59b334*/
    v46 = g_abs_87F8F0; /*0x59b33b*/
  }
  v19 = 2; /*0x59b391*/
  v25 = v40; /*0x59b399*/
  do /*0x59b6c1*/
  {
    v22 = 0; /*0x59b3a5*/
    v39 = 0.0; /*0x59b3a9*/
    v26 = *v25; /*0x59b3bb*/
    v27 = v25[1]; /*0x59b3c2*/
    v28 = v25[2]; /*0x59b3cb*/
    v29 = v25[3]; /*0x59b3d5*/
    v3 = v27 + g_abs_87F8DC + v29 / 2 - v28 / 2 - v26; /*0x59b3fd*/
    v32 = v26 + v29 / 2 + v28 / 2 + v27 + 1; /*0x59b3ff*/
    v33 = v3; /*0x59b403*/
    v36 = v32; /*0x59b407*/
    v37 = v3; /*0x59b40b*/
    if ( v29 <= v28 ) /*0x59b40f*/
    {
      v4 = (double)v28; /*0x59b445*/
      v30 = 1.0; /*0x59b44d*/
      v21 = (double)v29; /*0x59b45d*/
      v49 = v4 / v21 * 1.2; /*0x59b46d*/
    }
    else
    {
      v49 = 1.0; /*0x59b415*/
      v21 = (double)v29; /*0x59b42b*/
      v4 = (double)v28; /*0x59b42f*/
      v30 = v21 / v4 * 1.2; /*0x59b43f*/
    }
    v53 = 1.0 / (v4 * 0.5 * (v4 * 0.5)); /*0x59b484*/
    v52 = 1.0 / (v21 * 0.5 * (v21 * 0.5)); /*0x59b4a1*/
    if ( v38 > 0.0 ) /*0x59b4b9*/
    {
      do /*0x59b6a7*/
      {
        if ( v23 >= 100 ) /*0x59b4c4*/
          break; /*0x59b4c4*/
        v5 = Math::RoundToInt((v38 - v39) * v50); /*0x59b4d9*/
        if ( v5 >= v48 ) /*0x59b4e7*/
          v5 = v48; /*0x59b4e9*/
        IDA_LOWORD(v31) = v32; /*0x59b4fd*/
        IDA_HIWORD(v31) = v3; /*0x59b515*/
        v22 += RandomMap::PlaceTerrain(v35, v5, &v26, (int)&v36, 1, (int)&v31, 0.75, 1); /*0x59b52d*/
        v20 = 0; /*0x59b540*/
        ++v23; /*0x59b55a*/
        v6 = 2 * v26 - g_abs_87F8DC + 1; /*0x59b562*/
        v7 = 50000; /*0x59b563*/
        v47 = v6 + 2 * v28 + 2; /*0x59b572*/
        v8 = g_abs_87F8DC + 2 * v27 + 1; /*0x59b57d*/
        v51 = v8 + 2 * v29 + 2; /*0x59b585*/
        v39 = (double)v22 / v50; /*0x59b58c*/
        if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x59b590*/
        {
          v24 = 0; /*0x59b596*/
          v34 = unk_89C2DC * unk_89C2DC; /*0x59b59e*/
          do /*0x59b67e*/
          {
            v9 = (int16_t *)((char *)g_MapTileArray + v24); /*0x59b5ab*/
            v10 = *(int16_t *)((char *)g_MapTileArray + v24 + 2); /*0x59b5ae*/
            v11 = *(int16_t *)((char *)g_MapTileArray + v24); /*0x59b5b3*/
            v12 = v11 + v10; /*0x59b5b6*/
            v13 = v11 - v10; /*0x59b5b9*/
            if ( v12 >= v8 /*0x59b618*/
              && v12 <= v51
              && v13 >= v6
              && v13 <= v47
              && !*((unsigned int *)v9 + 15)
              && (uint8_t)Map_Helper_59BAB0((int)g_MapTileArray + v24, (int)&v26, 1, v53, v52) )
            {
              v14 = v9[1] - v33; /*0x59b629*/
              v15 = Math::RoundToInt((double)(int)((IDA_HIDWORD(v14) ^ v14) - IDA_HIDWORD(v14)) * v49 + (double)(int)abs32(*v9 - v32) /*0x59b659*/
                                                                                              * v30);
              if ( v15 < v7 ) /*0x59b660*/
              {
                v7 = v15; /*0x59b664*/
                v20 = *(unsigned int *)v9; /*0x59b666*/
              }
            }
            v16 = v34 == 1; /*0x59b675*/
            v24 += 80; /*0x59b676*/
            --v34; /*0x59b67a*/
          }
          while ( !v16 ); /*0x59b67e*/
          IDA_LOWORD(v3) = v33; /*0x59b684*/
        }
        v36 = (int16_t)v20; /*0x59b69a*/
        v37 = SHIWORD(v20); /*0x59b69e*/
      }
      while ( v39 < v38 ); /*0x59b6a7*/
    }
    result = v19 - 1; /*0x59b6b8*/
    v16 = v19 == 1; /*0x59b6b8*/
    v25 += 4; /*0x59b6b9*/
    --v19; /*0x59b6bd*/
  }
  while ( !v16 ); /*0x59b6c1*/
  return result; /*0x59b6c7*/

}
}
// 0x59B740
namespace gamemd {
void RandomMap::PlaceShoreObjects()
{

  int *i; // ebp
  signed int j; // edi
  unsigned int *NeighbourContent; // esi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // esi
  signed int v6; // eax
  unsigned int *v7; // ecx
  unsigned int *v8; // ebp
  signed int v9; // edi
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-34h]
  int64_t v13; // [esp+1Ch] [ebp-28h]
  double v14; // [esp+24h] [ebp-20h]
  void **v15; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v17; // [esp+34h] [ebp-10h]
  char v18; // [esp+39h] [ebp-Bh]
  signed int v19; // [esp+3Ch] [ebp-8h]
  int v20; // [esp+40h] [ebp-4h]

  RandomMap::Constructor(0, 0); /*0x59b74f*/
  v15 = &vt_DynamicVectorClass_CellClass; /*0x59b759*/
  v19 = 0; /*0x59b761*/
  v20 = 10000; /*0x59b765*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59b76d*/
  for ( i = (int *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x59b780*/
        i;
        i = (int *)LayerClass::CellIteratorNext(&g_abs_87F7E8) )
  {
    if ( Cell::IsShore(i) ) /*0x59b784*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b78d*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b797*/
        if ( Cell::IsEmpty(NeighbourContent) /*0x59b7ce*/
          && (v19 < v17
           || (v18 || !v17)
           && v20 > 0
           && ((uint8_t (*)(void ***, int, unsigned int))v15[2])(&v15, v20 + v17, 0)) )
        {
          v3 = v19++; /*0x59b7d9*/
          *((unsigned int *)Block + v3) = NeighbourContent; /*0x59b7e4*/
        }
      }
    }
  }
  v4 = v19 / 3; /*0x59b80d*/
  if ( v19 / 3 > 1000 ) /*0x59b815*/
    v4 = 1000; /*0x59b817*/
  if ( v4 > 0 ) /*0x59b81e*/
  {
    v12 = v4; /*0x59b824*/
    do /*0x59b90c*/
    {
      v5 = v19 - 1; /*0x59b830*/
      v14 = (double)(unsigned int)v19; /*0x59b83e*/
      do /*0x59b869*/
      {
        v13 = (unsigned int)Random::State(&g_Randomizer); /*0x59b84c*/
        v6 = Math::RoundToInt((double)v13 * v14 * 2.328306437080797e-10); /*0x59b862*/
      }
      while ( v6 > v5 ); /*0x59b869*/
      v7 = Block; /*0x59b86b*/
      v8 = (unsigned int *)*((unsigned int *)Block + v6); /*0x59b875*/
      if ( v6 < v19 && v6 < --v19 ) /*0x59b881*/
      {
        while ( 1 ) /*0x59b88d*/
        {
          v7[v6] = v7[v6 + 1]; /*0x59b88d*/
          if ( ++v6 >= v19 ) /*0x59b897*/
            break; /*0x59b897*/
          v7 = Block; /*0x59b885*/
        }
      }
      v9 = 0; /*0x59b89e*/
      v8[14] = unk_AA0E18; /*0x59b8a0*/
      do /*0x59b901*/
      {
        v10 = Cell::GetNeighbourContent(v8, v9); /*0x59b8ab*/
        if ( Cell::IsEmpty(v10) /*0x59b8e2*/
          && (v19 < v17
           || (v18 || !v17)
           && v20 > 0
           && ((uint8_t (*)(void ***, int, unsigned int))v15[2])(&v15, v20 + v17, 0)) )
        {
          v11 = v19++; /*0x59b8ed*/
          *((unsigned int *)Block + v11) = v10; /*0x59b8f8*/
        }
        v9 += 2; /*0x59b8fb*/
      }
      while ( v9 < 8 ); /*0x59b901*/
      --v12; /*0x59b908*/
    }
    while ( v12 ); /*0x59b90c*/
  }
  v15 = &vt_VectorClass_CellClass; /*0x59b916*/
  if ( Block ) /*0x59b920*/
  {
    if ( v18 ) /*0x59b926*/
      RA2_OPDEL(Block); /*0x59b929*/
  }

}
}
// 0x59BBC0
namespace gamemd {
int RandomMap::PlaceTerrain(int a2, MapResourceClass * aP2, MapResourceClass * aP3, int a5, MapResourceClass * aP5, double a7, char a8)
{

  int v8; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // eax
  AbstractClass *v12; // esi
  int v13; // eax
  MapResourceClass *v14; // ecx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int16_t v18; // di
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int16_t v21; // cx
  int16_t v22; // ax
  int *v23; // eax
  int result; // eax
  int16_t v25; // dx
  MapResourceClass *v26; // eax
  MapResourceClass *v27; // edx
  int v28; // eax
  MapResourceClass *v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // ebx
  MapResourceClass *v33; // eax
  int16_t *v34; // edi
  int v35; // eax
  double v36; // st6
  unsigned int *v37; // eax
  char *v38; // ecx
  int v39; // edx
  int v40; // ebx
  char v41; // al
  int v42; // eax
  int16_t v43; // cx
  int v44; // eax
  int v45; // ecx
  char *v46; // edi
  int *v47; // eax
  unsigned int v48; // ebx
  double v49; // st7
  int16_t v50; // ax
  double v51; // st7
  int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  MapResourceClass *v56; // edi
  unsigned int edx65; // edx
  int v57; // edi
  int v58; // ebx
  MapResourceClass *v60; // ecx
  double st7_76; // st7
  double v61; // st7
  MapResourceClass *v63; // ecx
  bool zf76; // zf
  int v64; // eax
  int v65; // eax
  MapResourceClass *v67; // edi
  Random *v68; // ebx
  char *edi82; // edi
  int v69; // eax
  int i; // eax
  Random *v72; // ecx
  Random *v73; // esi
  int edi97; // edi
  int j; // eax
  char *v75; // ecx
  char inited; // [esp+17h] [ebp-81h]
  MapResourceClass *v78; // [esp+1Ch] [ebp-7Ch] BYREF
  int v79; // [esp+20h] [ebp-78h] BYREF
  MapResourceClass *v81; // [esp+24h] [ebp-74h]
  int var70; // [esp+28h] [ebp-70h]
  int v82; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  float v84; // [esp+34h] [ebp-64h]
  float v85; // [esp+38h] [ebp-60h]
  MapResourceClass *v86; // [esp+3Ch] [ebp-5Ch]
  MapResourceClass *v88; // [esp+40h] [ebp-58h]
  int var54; // [esp+44h] [ebp-54h]
  int64_t v89; // [esp+48h] [ebp-50h]
  int64_t v90; // [esp+50h] [ebp-48h]
  int v91; // [esp+58h] [ebp-40h] BYREF
  float v92; // [esp+60h] [ebp-38h]
  double v93; // [esp+68h] [ebp-30h]
  double v94; // [esp+70h] [ebp-28h]
  double v95; // [esp+78h] [ebp-20h]
  double v96; // [esp+80h] [ebp-18h]
  double v97; // [esp+88h] [ebp-10h]
  double v98; // [esp+90h] [ebp-8h]

  v8 = a2; /*0x59bbcc*/
  if ( a2 <= 400 ) /*0x59bbdb*/
  {
    v8 = 400; /*0x59bbdd*/
    a2 = 400; /*0x59bbe2*/
  }
  v9 = 8 * v8 + 2; /*0x59bbe5*/
  if ( v9 <= 100 ) /*0x59bbef*/
    v9 = 100; /*0x59bbf1*/
  var54 = v9; /*0x59bbfd*/
  v10 = (void *)RA2_OPNEW(8 * v9); /*0x59bc02*/
  if ( v10 ) /*0x59bc0e*/
  {
    Block = v10; /*0x59bc13*/
    IDA_LODWORD(v93) = v9 - 1; /*0x59bc17*/
  }
  else
  {
    Block = 0; /*0x59bc1d*/
  }
  v11 = RA2_OPNEW(0x14u); /*0x59bc23*/
  v12 = (AbstractClass *)v11; /*0x59bc28*/
  if ( v11 ) /*0x59bc2f*/
  {
    *(unsigned int *)(v11 + 12) = 0; /*0x59bc38*/
    *(unsigned int *)(v11 + 16) = -1; /*0x59bc3c*/
    *(unsigned int *)v11 = 0; /*0x59bc43*/
    *(unsigned int *)(v11 + 4) = v9; /*0x59bc45*/
    v13 = RA2_OPNEW(4 * v9 + 4); /*0x59bc48*/
    v14 = *(MapResourceClass **)&v12->__pad_0[4]; /*0x59bc4d*/
    *(unsigned int *)&v12->__pad_0[8] = v13; /*0x59bc50*/
    v15 = 0; /*0x59bc56*/
    if ( (int)v14 >= 0 ) /*0x59bc5a*/
    {
      do /*0x59bc69*/
      {
        ++v15; /*0x59bc5f*/
        *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * v15 - 4) = 0; /*0x59bc60*/
      }
      while ( v15 <= *(unsigned int *)&v12->__pad_0[4] ); /*0x59bc69*/
    }
  }
  else
  {
    v12 = 0; /*0x59bc6d*/
  }
  if ( *(unsigned int *)aP3 || *(unsigned int *)&aP3[1] ) /*0x59bc7c*/
  {
    v25 = *(unsigned short *)aP3[1].__tail_0; /*0x59bdec*/
    IDA_LOWORD(v86) = *aP3; /*0x59bdf0*/
    IDA_HIWORD(v86) = v25; /*0x59bdf5*/
    v78 = v86; /*0x59bdfe*/
LABEL_27:
    v85 = 0.0; /*0x59be02*/
    v84 = 0.0; /*0x59be13*/
    if ( *aP2 != dword_ABE2F0 /*0x59be46*/
      || *(unsigned int *)&aP2[1] != dword_ABE2F4
      || *(unsigned int *)&aP2[2] != dword_ABE2F8
      || *(unsigned int *)&aP2[3] != dword_ABE2FC )
    {
      v26 = (MapResourceClass *)aP2[3]; /*0x59be4b*/
      v82 = (int)aP2[2]; /*0x59be50*/
      v86 = v26; /*0x59be54*/
      if ( v82 <= (int)v26 ) /*0x59be58*/
      {
        v84 = 1.0; /*0x59be7a*/
        v85 = (double)(int)v86 / (double)v82 * 1.2; /*0x59be8c*/
      }
      else
      {
        v85 = 1.0; /*0x59be5e*/
        v84 = (double)v82 / (double)(int)v86 * 1.2; /*0x59be70*/
      }
    }
    IDA_LODWORD(v90) = (int16_t)v78; /*0x59be9a*/
    v27 = *(MapResourceClass **)v12->__pad_0; /*0x59be9e*/
    IDA_LODWORD(v90) = SHIWORD(v78); /*0x59bea4*/
    v28 = 0; /*0x59beaa*/
    v94 = (double)(int16_t)v78; /*0x59beae*/
    v81 = 0; /*0x59beb6*/
    v95 = (double)SHIWORD(v78); /*0x59beba*/
    if ( (int)v27 >= 0 ) /*0x59bebe*/
    {
      do /*0x59becc*/
      {
        ++v28; /*0x59bec3*/
        *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * v28 - 4) = 0; /*0x59bec4*/
      }
      while ( v28 <= *(unsigned int *)v12->__pad_0 ); /*0x59becc*/
    }
    v29 = (MapResourceClass *)Block; /*0x59bece*/
    *(unsigned int *)v12->__pad_0 = 0; /*0x59bed2*/
    var70 = 1; /*0x59bed8*/
    *v29 = (MapResourceClass)v78; /*0x59bee0*/
    v29[1] = 0; /*0x59bee2*/
    *((unsigned int *)g_MapTileArray + 20 * (int16_t)v78 + 20 * unk_89C2DC * SHIWORD(v78) + 15) = *((char *)this + 194); /*0x59bf0d*/
    v30 = *(unsigned int *)v12->__pad_0 + 1; /*0x59bf16*/
    IDA_LODWORD(v90) = v29[1]; /*0x59bf19*/
    v31 = v30 >> 1; /*0x59bf20*/
    if ( v30 < *(unsigned int *)&v12->__pad_0[4] ) /*0x59bf24*/
    {
      for ( ; v30 > 1; v31 >>= 1 ) /*0x59bf29*/
      {
        v32 = *(unsigned int *)&v12->__pad_0[8]; /*0x59bf2b*/
        if ( *(float *)(*(unsigned int *)(v32 + 4 * v31) + 4) <= (double)*(float *)&v90 ) /*0x59bf3d*/
          break; /*0x59bf3d*/
        *(unsigned int *)(v32 + 4 * v30) = *(unsigned int *)(v32 + 4 * v31); /*0x59bf42*/
        v30 = v31; /*0x59bf45*/
      }
      *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * v30) = v29; /*0x59bf51*/
      v33 = *(MapResourceClass **)&v12->__pad_0[12]; /*0x59bf56*/
      ++*(unsigned int *)v12->__pad_0; /*0x59bf5c*/
      if ( v29 > v33 ) /*0x59bf5e*/
        *(unsigned int *)&v12->__pad_0[12] = v29; /*0x59bf60*/
      if ( (unsigned int)v29 < v12->uniqueId ) /*0x59bf66*/
        v12->uniqueId = (int)v29; /*0x59bf68*/
    }
    if ( *(unsigned int *)v12->__pad_0 ) /*0x59bf6b*/
    {
      v35 = *(unsigned int *)&v12->__pad_0[8]; /*0x59bf75*/
      v34 = *(int16_t **)(v35 + 4); /*0x59bf7d*/
      *(unsigned int *)(v35 + 4) = *(unsigned int *)(v35 + 4 * *(unsigned int *)v12->__pad_0); /*0x59bf80*/
      *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * (*(unsigned int *)v12->__pad_0)--) = 0; /*0x59bf88*/
      Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59bf96*/
    }
    else
    {
      v34 = 0; /*0x59bf71*/
    }
    v82 = (int)v34; /*0x59bf9e*/
    v36 = (double)(int)aP2[2] * 0.5; /*0x59bfab*/
    v97 = 1.0 / (v36 * v36); /*0x59bfb5*/
    v96 = 1.0 / ((double)(int)aP2[3] * 0.5 * ((double)(int)aP2[3] * 0.5)); /*0x59bfd6*/
    do /*0x59c32c*/
    {
      if ( !v34 ) /*0x59bfe4*/
        break; /*0x59bfe4*/
      if ( g_MapTileArray ) /*0x59bff2*/
        *((unsigned int *)g_MapTileArray + 20 * *v34 + 20 * unk_89C2DC * v34[1] + 14) = *((char *)this + 194); /*0x59c014*/
      v37 = CellCoord::To_CellObj(&g_abs_87F7E8, v34); /*0x59c01e*/
      v38 = (char *)Block; /*0x59c023*/
      v39 = var70; /*0x59c027*/
      v37[14] = 0; /*0x59c02b*/
      v40 = g_MapCellHeight_Value; /*0x59c032*/
      v41 = 0; /*0x59c038*/
      IDA_LODWORD(v90) = 0; /*0x59c03d*/
      IDA_LODWORD(v89) = &v38[8 * v39]; /*0x59c041*/
      while ( 1 ) /*0x59c04b*/
      {
        v42 = v41 & 7; /*0x59c04b*/
        v43 = v34[1] + *((unsigned short *)&g_abs_89F68A + 2 * v42); /*0x59c064*/
        IDA_LOWORD(v88) = *v34 + *((unsigned short *)&g_abs_89F688 + 2 * v42); /*0x59c068*/
        IDA_HIWORD(v88) = v43; /*0x59c06d*/
        v79 = (int)v88; /*0x59c076*/
        v44 = v43; /*0x59c07d*/
        v45 = v43 + (int16_t)v88; /*0x59c080*/
        if ( v45 > v40 && (int16_t)v88 - v44 < v40 && v44 - (int16_t)v88 < v40 && v45 <= g_MapCellCount ) /*0x59c0a9*/
        {
          v46 = (char *)g_MapTileArray + 80 * (int16_t)v88 + 80 * unk_89C2DC * v44; /*0x59c0c4*/
          if ( !*((unsigned int *)v46 + 14) && *((unsigned int *)v46 + 15) != *((char *)this + 194) ) /*0x59c0de*/
          {
            v47 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v79); /*0x59c0ee*/
            if ( Cell::IsGroundTypeRange(v47) /*0x59c13d*/
              && var70 < var54
              && Map_Helper_59BAB0((int16_t *)&v79, (int *)aP2, a5, v97, v96) )
            {
              v48 = v89; /*0x59c14e*/
              v49 = v94 + 0.5; /*0x59c156*/
              *(unsigned int *)v89 = v79; /*0x59c15c*/
              IDA_LOWORD(v86) = Math::RoundToInt(v49); /*0x59c16d*/
              v50 = Math::RoundToInt(v95 + 0.5); /*0x59c172*/
              IDA_HIWORD(v86) = v50; /*0x59c177*/
              v91 = (int)v86; /*0x59c180*/
              if ( a8 ) /*0x59c189*/
              {
                v51 = Map_Helper_59B940((int16_t *)&v91, (int16_t *)&v79, aP2, (int16_t *)aP5, v85, v84); /*0x59c1ab*/
              }
              else
              {
                IDA_LODWORD(v89) = (SHIWORD(v79) - v50) * (SHIWORD(v79) - v50) /*0x59c1d7*/
                             + ((int16_t)v79 - (int16_t)v86) * ((int16_t)v79 - (int16_t)v86);
                v93 = Math::Sqrt((double)(int)v89); /*0x59c1e7*/
                *(unsigned long long *)&v98 = (unsigned int)Random::State(&g_Randomizer); /*0x59c1f8*/
                v51 = (double)((long long)(v98)) * 5.0 * 2.328306437080797e-10 + v93; /*0x59c21d*/
              }
              v52 = var70; /*0x59c225*/
              *(float *)(v48 + 4) = v51; /*0x59c229*/
              *((unsigned int *)v46 + 15) = *((char *)this + 194); /*0x59c233*/
              v53 = v48; /*0x59c236*/
              var70 = v52 + 1; /*0x59c238*/
              v54 = *(unsigned int *)v12->__pad_0 + 1; /*0x59c244*/
              v92 = *(float *)(v48 + 4); /*0x59c245*/
              v56 = *(MapResourceClass **)&v12->__pad_0[4]; /*0x59c249*/
              edx65 = v54 >> 1; /*0x59c24e*/
              IDA_LODWORD(v93) = v48; /*0x59c252*/
              IDA_LODWORD(v89) = v48 + 8; /*0x59c256*/
              if ( v54 < (unsigned int)v56 ) /*0x59c25a*/
              {
                if ( v54 > 1 ) /*0x59c25f*/
                {
                  do /*0x59c27f*/
                  {
                    v57 = *(unsigned int *)&v12->__pad_0[8]; /*0x59c261*/
                    v58 = *(unsigned int *)(v57 + 4 * edx65); /*0x59c264*/
                    if ( *(float *)(v58 + 4) <= (double)v92 ) /*0x59c273*/
                      break; /*0x59c273*/
                    *(unsigned int *)(v57 + 4 * v54) = v58; /*0x59c275*/
                    v54 = edx65; /*0x59c278*/
                    edx65 >>= 1; /*0x59c27a*/
                  }
                  while ( v54 > 1 ); /*0x59c27f*/
                  v53 = IDA_LODWORD(v93); /*0x59c281*/
                }
                *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * v54) = v53; /*0x59c288*/
                v60 = *(MapResourceClass **)&v12->__pad_0[12]; /*0x59c28d*/
                ++*(unsigned int *)v12->__pad_0; /*0x59c293*/
                if ( v53 > (unsigned int)v60 ) /*0x59c295*/
                  *(unsigned int *)&v12->__pad_0[12] = v53; /*0x59c297*/
                if ( v53 < v12->uniqueId ) /*0x59c29d*/
                  v12->uniqueId = v53; /*0x59c29f*/
              }
            }
            v40 = g_MapCellHeight_Value; /*0x59c2a2*/
          }
        }
        v41 = v90 + 2; /*0x59c2ac*/
        IDA_LODWORD(v90) = v90 + 2; /*0x59c2b2*/
        if ( (int)v90 >= 8 ) /*0x59c2b6*/
          break; /*0x59c2b6*/
        v34 = (int16_t *)v82; /*0x59c047*/
      }
      st7_76 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2c1*/
      v94 = st7_76 * a7 + v94; /*0x59c2d2*/
      v61 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2d6*/
      v81 = (MapResourceClass *)((char *)v81 + 1); /*0x59c2e7*/
      v63 = *(MapResourceClass **)v12->__pad_0; /*0x59c2eb*/
      zf76 = *(unsigned int *)v12->__pad_0 == 0; /*0x59c2ed*/
      v95 = v61 * a7 + v95; /*0x59c2ef*/
      if ( zf76 ) /*0x59c2f3*/
      {
        v34 = 0; /*0x59c2f5*/
      }
      else
      {
        v64 = *(unsigned int *)&v12->__pad_0[8]; /*0x59c2f9*/
        v34 = *(int16_t **)(v64 + 4); /*0x59c301*/
        *(unsigned int *)(v64 + 4) = *(unsigned int *)(v64 + 4 * (unsigned int)v63); /*0x59c304*/
        *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * (*(unsigned int *)v12->__pad_0)--) = 0; /*0x59c30c*/
        Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c31a*/
      }
      v82 = (int)v34; /*0x59c328*/
    }
    while ( (int)v81 < a2 ); /*0x59c32c*/
    if ( *(unsigned int *)v12->__pad_0 ) /*0x59c332*/
    {
      v65 = *(unsigned int *)&v12->__pad_0[8]; /*0x59c33c*/
      v67 = *(MapResourceClass **)(v65 + 4); /*0x59c344*/
      *(unsigned int *)(v65 + 4) = *(unsigned int *)(v65 + 4 * *(unsigned int *)v12->__pad_0); /*0x59c347*/
      *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * (*(unsigned int *)v12->__pad_0)--) = 0; /*0x59c34f*/
      Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c35d*/
      for ( ; v67; v81 = (MapResourceClass *)((char *)v81 + 1) ) /*0x59c364*/
      {
        v68 = (Random *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)v67); /*0x59c375*/
        edi82 = (char *)g_MapTileArray /*0x59c393*/
              + 80 * *(int16_t *)v67->__tail_0
              + 80 * unk_89C2DC * *(int16_t *)&v67->__tail_0[2];
        if ( !*((unsigned int *)edi82 + 14) && Cell::IsGroundTypeRange((int *)v68->__pad_0) ) /*0x59c39e*/
        {
          v68[3].Random_field_0x08 = 0; /*0x59c3ab*/
          *((unsigned int *)edi82 + 14) = *((char *)this + 194); /*0x59c3b8*/
        }
        if ( *(unsigned int *)v12->__pad_0 ) /*0x59c3bb*/
        {
          v69 = *(unsigned int *)&v12->__pad_0[8]; /*0x59c3c5*/
          v67 = *(MapResourceClass **)(v69 + 4); /*0x59c3cd*/
          *(unsigned int *)(v69 + 4) = *(unsigned int *)(v69 + 4 * *(unsigned int *)v12->__pad_0); /*0x59c3d0*/
          *(unsigned int *)(*(unsigned int *)&v12->__pad_0[8] + 4 * (*(unsigned int *)v12->__pad_0)--) = 0; /*0x59c3d8*/
          Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c3e6*/
        }
        else
        {
          v67 = 0; /*0x59c3c1*/
        }
      }
    }
    RA2_OPDEL(Block); /*0x59c405*/
    if ( v12 ) /*0x59c411*/
    {
      RA2_OPDEL(*(void **)&v12->__pad_0[8]); /*0x59c417*/
      RA2_OPDEL(v12); /*0x59c41d*/
    }
    inited = MapClass::InitTileData(*((char *)this + 194), 1); /*0x59c43d*/
    LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59c441*/
    for ( i = LayerClass::CellIteratorNext(&g_abs_87F7E8); i; i = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59c452*/
    {
      v72 = *(Random **)(i + 56); /*0x59c454*/
      if ( (int)v72 >= dword_ABAD28 && (int)v72 < dword_ABAD28 + 42 ) /*0x59c466*/
      {
        *(unsigned int *)(i + 56) = 0; /*0x59c468*/
        *(unsigned char *)(i + 282) = 0; /*0x59c46b*/
      }
    }
    if ( inited ) /*0x59c486*/
    {
      result = (int)v81; /*0x59c51b*/
      ++*((char *)this + 194); /*0x59c521*/
    }
    else
    {
      v73 = *(Random **)&g_abs_A8D63C; /*0x59c48c*/
      edi97 = *((char *)this + 194); /*0x59c492*/
      LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x59c49d*/
      for ( j = LayerClass::CellIteratorNext(&g_abs_87F7E8); j; j = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x59c4ae*/
      {
        IDA_LODWORD(v93) = *(unsigned int *)(j + 36); /*0x59c4b3*/
        v75 = (char *)g_MapTileArray + 80 * SLOWORD(v93) + 80 * unk_89C2DC * SWORD1(v93); /*0x59c4d4*/
        if ( *((unsigned int *)v75 + 14) == edi97 ) /*0x59c4d9*/
        {
          *((unsigned int *)v75 + 14) = 0; /*0x59c4db*/
          v75[75] = 0; /*0x59c4e2*/
          *(unsigned int *)(j + 56) = v73; /*0x59c4e6*/
          *(unsigned char *)(j + 282) = 0; /*0x59c4e9*/
          *(unsigned char *)(j + 283) = *((char *)this + 195); /*0x59c4f6*/
        }
      }
      return 0; /*0x59c50a*/
    }
  }
  else
  {
    v82 = 0; /*0x59bc85*/
    while ( 1 ) /*0x59bc97*/
    {
      v16 = g_abs_87F8DC - 1; /*0x59bc97*/
      *(unsigned long long *)&v95 = (unsigned int)g_abs_87F8DC; /*0x59bc9d*/
      v98 = (double)(unsigned int)g_abs_87F8DC; /*0x59bca5*/
      do /*0x59bcdc*/
      {
        *(unsigned long long *)&v94 = (unsigned int)Random::State(&g_Randomizer); /*0x59bcb6*/
        v17 = Math::RoundToInt((double)((long long)(v94)) * v98 * 2.328306437080797e-10); /*0x59bcd3*/
        v18 = v17; /*0x59bcd8*/
      }
      while ( v17 > v16 ); /*0x59bcdc*/
      v19 = g_abs_87F8E0 - 1; /*0x59bcec*/
      v90 = (unsigned int)g_abs_87F8E0; /*0x59bcf2*/
      v98 = (double)(unsigned int)g_abs_87F8E0; /*0x59bcfa*/
      do /*0x59bd2f*/
      {
        v89 = (unsigned int)Random::State(&g_Randomizer); /*0x59bd0b*/
        v20 = Math::RoundToInt((double)v89 * v98 * 2.328306437080797e-10); /*0x59bd28*/
      }
      while ( v20 > v19 ); /*0x59bd2f*/
      IDA_HIWORD(v91) = -v18; /*0x59bd3c*/
      IDA_HIWORD(v92) = g_abs_87F8DC; /*0x59bd41*/
      IDA_LOWORD(v93) = v18 + 1; /*0x59bd51*/
      IDA_WORD1(v93) = g_abs_87F8DC - v18; /*0x59bd56*/
      v21 = v20 + v18 + 1; /*0x59bd63*/
      v22 = g_abs_87F8DC - v18 + v20; /*0x59bd65*/
      IDA_LOWORD(v86) = v21; /*0x59bd67*/
      IDA_HIWORD(v86) = v22; /*0x59bd6c*/
      v78 = v86; /*0x59bd75*/
      if ( ++v82 >= 200 ) /*0x59bd88*/
        return 0; /*0x59bde1*/
      if ( g_MapTileArray ) /*0x59bd92*/
      {
        if ( !*((unsigned int *)g_MapTileArray + 20 * v21 + 20 * unk_89C2DC * v22 + 14) ) /*0x59bdad*/
        {
          v23 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v78); /*0x59bdc3*/
          if ( Cell::IsGroundTypeRange(v23) ) /*0x59bdca*/
          {
            if ( v82 < 200 ) /*0x59bddf*/
              goto LABEL_27; /*0x59bddf*/
            return 0; /*0x59bddf*/
          }
        }
      }
    }
  }
  return result; /*0x59bde3*/

}
}
// 0x59C580
namespace gamemd {
int RandomMap::GrowTiberium()
{

  int v2; // eax
  int v3; // edi
  int v4; // edi
  char result; // al
  MapResourceClass aP1; // [esp+Ch] [ebp-4h] BYREF

  v2 = *((char *)this + 15); /*0x59c594*/
  ++*((char *)this + 194); /*0x59c59b*/
  if ( (v2 == 3 || v2 == 4) && *((char *)this + 19) > 20 ) /*0x59c5ac*/
  {
    v3 = 0; /*0x59c5ae*/
    while ( v3 < 10 ) /*0x59c5b5*/
    {
      *(unsigned short *)aP1.__tail_0 = 0; /*0x59c5c1*/
      *(unsigned short *)&aP1.__tail_0[2] = 0; /*0x59c5c6*/
      ++v3; /*0x59c5d0*/
      if ( Tiberium::ProcessGrowth(this, (int)&aP1, 0, 0) ) /*0x59c5cb*/
      {
        ++*((char *)this + 194); /*0x59c5db*/
        break; /*0x59c5db*/
      }
    }
  }
  v4 = 0; /*0x59c5e1*/
  result = 0; /*0x59c5e3*/
  while ( v4 < 10 ) /*0x59c5e8*/
  {
    *(unsigned short *)aP1.__tail_0 = 0; /*0x59c5ee*/
    *(unsigned short *)&aP1.__tail_0[2] = 0; /*0x59c5f6*/
    result = TiberiumClass::Grow(this, &aP1); /*0x59c5fb*/
    ++v4; /*0x59c600*/
    if ( result ) /*0x59c603*/
    {
      ++*((char *)this + 194); /*0x59c605*/
      return result; /*0x59c605*/
    }
  }
  return result; /*0x59c60b*/

}
}
// 0x5A0700
namespace gamemd {
unsigned int * RandomMap::CellListAlloc(int a2)
{

  unsigned int *v3; // eax
  unsigned int *v4; // ebx
  int v5; // ecx
  unsigned int *v6; // ebp
  int v7; // edi
  int16_t v8; // dx
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int16_t v12; // ax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  bool v21; // zf
  unsigned int *v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-4h]

  v3 = RA2_OPNEW(0x18u); /*0x5a070a*/
  v4 = v3; /*0x5a070f*/
  if ( v3 ) /*0x5a0718*/
  {
    VectorClass::CellConstructor(v3, 0, 0); /*0x5a071e*/
    *v4 = &vt_DynamicVectorClass_Cell; /*0x5a0723*/
    v4[5] = 10; /*0x5a0729*/
    v4[4] = 0; /*0x5a0730*/
  }
  else
  {
    v4 = 0; /*0x5a0735*/
  }
  v23 = v4; /*0x5a073d*/
  v4[5] = *((unsigned int *)this + 96) * *((unsigned int *)this + 97); /*0x5a0748*/
  v5 = unk_89C2DC; /*0x5a074b*/
  if ( unk_89C2DC * unk_89C2DC <= 0 ) /*0x5a0758*/
    return v4; /*0x5a08c1*/
  v6 = g_MapTileArray; /*0x5a075f*/
  v24 = 0; /*0x5a0765*/
  v25 = unk_89C2DC * unk_89C2DC; /*0x5a0769*/
  while ( 2 )
  {
    v7 = v6[v24]; /*0x5a0775*/
    v8 = IDA_HIWORD(v7); /*0x5a0780*/
    if ( !v7 ) /*0x5a0788*/
      goto LABEL_33; /*0x5a0788*/
    v9 = v6 ? v6[20 * (int16_t)v7 + 14 + 20 * v5 * SHIWORD(v7)] : -1;
    if ( v9 != a2 ) /*0x5a07b5*/
      goto LABEL_33; /*0x5a07b5*/
    v10 = 0; /*0x5a07bb*/
    while ( 1 ) /*0x5a07c9*/
    {
      v11 = v10 & 7; /*0x5a07c9*/
      v12 = IDA_LOWORD(g_abs_89F688[v11]) + v7; /*0x5a07cc*/
      IDA_LOWORD(v11) = v8 + IDA_HIWORD(g_abs_89F688[v11]); /*0x5a07df*/
      v13 = v12; /*0x5a07e2*/
      v14 = (int16_t)v11; /*0x5a07e5*/
      v15 = v13 + (int16_t)v11; /*0x5a07e8*/
      if ( v15 <= g_MapCellHeight_Value ) /*0x5a07f1*/
        goto LABEL_23; /*0x5a07f1*/
      if ( v13 - v14 < g_MapCellHeight_Value && v14 - v13 < g_MapCellHeight_Value && v15 <= g_MapCellCount ) /*0x5a080f*/
        break; /*0x5a080f*/
      v4 = v23; /*0x5a0849*/
      v6 = g_MapTileArray; /*0x5a084d*/
LABEL_23:
      if ( ++v10 >= 8 ) /*0x5a0841*/
        goto LABEL_33; /*0x5a0841*/
      v8 = IDA_HIWORD(v7); /*0x5a07bf*/
    }
    v6 = g_MapTileArray; /*0x5a0811*/
    if ( g_MapTileArray ) /*0x5a0819*/
      v16 = *((unsigned int *)g_MapTileArray + 20 * v13 + 20 * unk_89C2DC * v14 + 14); /*0x5a082f*/
    else
      v16 = -1; /*0x5a081b*/
    if ( v16 == a2 ) /*0x5a0837*/
    {
      v4 = v23; /*0x5a0839*/
      goto LABEL_23; /*0x5a0839*/
    }
    v4 = v23; /*0x5a0855*/
    v17 = v23[2]; /*0x5a0859*/
    if ( v23[4] < v17 ) /*0x5a0861*/
      goto LABEL_31; /*0x5a0861*/
    if ( *((unsigned char *)v23 + 13) || !v17 ) /*0x5a086c*/
    {
      v18 = v23[5]; /*0x5a086e*/
      if ( v18 > 0 ) /*0x5a0873*/
      {
        if ( (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v23 + 8))(v23, v17 + v18, 0) ) /*0x5a087e*/
        {
LABEL_31:
          v19 = v23[4]; /*0x5a0885*/
          v20 = v23[1]; /*0x5a0888*/
          v23[4] = v19 + 1; /*0x5a088e*/
          *(unsigned int *)(v20 + 4 * v19) = v7; /*0x5a0891*/
        }
        v6 = g_MapTileArray; /*0x5a0894*/
      }
    }
LABEL_33:
    v21 = v25 == 1; /*0x5a089a*/
    v24 += 20; /*0x5a08a6*/
    --v25; /*0x5a08aa*/
    if ( !v21 ) /*0x5a08ae*/
    {
      v5 = unk_89C2DC; /*0x5a076f*/
      continue; /*0x5a076f*/
    }
    return v4; /*0x5a08b5*/
  }

}
}
// 0x5A08D0
namespace gamemd {
int RandomMap::SpreadArea(MouseClass * aP1, float a3, MapResourceClass * aP3, short * a4, char a6)
{

  int v7; // eax
  int v8; // esi
  MapResourceClass *v9; // eax
  AbstractClass *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  MapResourceClass *v15; // ebx
  int i; // eax
  MouseClass *v17; // eax
  int v18; // ecx
  MapResourceClass *v19; // edi
  MouseClass *v20; // edx
  int v21; // ecx
  int v22; // eax
  MapResourceClass v23; // edx
  MapResourceClass *v24; // ebx
  int v25; // ecx
  double v26; // st7
  double v27; // st7
  char v29; // c0
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // ecx
  long double v36; // st7
  unsigned int v37; // eax
  int16_t *v38; // ecx
  int v39; // eax
  int16_t *v40; // edi
  char *v41; // edi
  unsigned int *v42; // eax
  char v43; // al
  int v44; // eax
  unsigned int *v45; // edi
  char *v46; // eax
  MapResourceClass v47; // ecx
  unsigned int *v48; // eax
  MapResourceClass *v49; // ebx
  int16_t v50; // ax
  MapResourceClass *v51; // edi
  int v52; // ecx
  double v53; // st7
  double v54; // st7
  char v56; // c0
  int v57; // eax
  int v58; // edx
  MapResourceClass *v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // edi
  unsigned int v62; // edx
  int v63; // edi
  int v64; // ebx
  unsigned int v65; // ecx
  int v66; // eax
  double v67; // st7
  int16_t *v68; // ecx
  bool v69; // zf
  int v70; // eax
  int16_t *v71; // edi
  int v72; // eax
  int16_t *v73; // edi
  int16_t *v74; // ecx
  int v75; // eax
  int v76; // ecx
  MouseClass **v77; // eax
  int v78; // eax
  int16_t *v79; // edi
  char v81; // [esp+1Bh] [ebp-49h]
  unsigned short *v82; // [esp+1Ch] [ebp-48h]
  int16_t *v83; // [esp+1Ch] [ebp-48h]
  MouseClass *v84; // [esp+20h] [ebp-44h] BYREF
  int v85; // [esp+24h] [ebp-40h]
  int v86; // [esp+28h] [ebp-3Ch]
  MapResourceClass *Block; // [esp+2Ch] [ebp-38h]
  int v88; // [esp+30h] [ebp-34h]
  MapResourceClass *v89; // [esp+34h] [ebp-30h]
  int v90; // [esp+38h] [ebp-2Ch]
  double v91; // [esp+3Ch] [ebp-28h]
  int64_t v92; // [esp+44h] [ebp-20h]
  double v93; // [esp+4Ch] [ebp-18h] BYREF
  double v94; // [esp+54h] [ebp-10h]
  int64_t v95; // [esp+5Ch] [ebp-8h]

  v7 = *((unsigned int *)this + 96); /*0x5a08de*/
  v89 = (MapResourceClass *)this; /*0x5a08e4*/
  v8 = 2 * *((unsigned int *)this + 97) * v7; /*0x5a08f4*/
  if ( v8 <= 100 ) /*0x5a08f6*/
    v8 = 100; /*0x5a08f8*/
  v9 = (MapResourceClass *)RA2_OPNEW(8 * v8); /*0x5a0905*/
  if ( v9 ) /*0x5a0911*/
  {
    Block = v9; /*0x5a0914*/
    IDA_LODWORD(v92) = v8 - 1; /*0x5a0918*/
  }
  else
  {
    Block = 0; /*0x5a091e*/
  }
  v10 = (AbstractClass *)RA2_OPNEW(0x14u); /*0x5a0929*/
  if ( v10 ) /*0x5a0930*/
  {
    v11 = 2 * *((unsigned int *)this + 97) * *((unsigned int *)this + 96); /*0x5a093f*/
    if ( v11 <= 100 ) /*0x5a0944*/
      v11 = 100; /*0x5a0946*/
    *(unsigned int *)&v10->__pad_0[12] = 0; /*0x5a0952*/
    v10->uniqueId = -1; /*0x5a0956*/
    *(unsigned int *)v10->__pad_0 = 0; /*0x5a095d*/
    *(unsigned int *)&v10->__pad_0[4] = v11; /*0x5a095f*/
    v12 = RA2_OPNEW(4 * v11 + 4); /*0x5a0962*/
    v13 = *(unsigned int *)&v10->__pad_0[4]; /*0x5a0967*/
    *(unsigned int *)&v10->__pad_0[8] = v12; /*0x5a096a*/
    v14 = 0; /*0x5a0970*/
    if ( v13 >= 0 ) /*0x5a0974*/
    {
      do /*0x5a0983*/
      {
        ++v14; /*0x5a0979*/
        *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * v14 - 4) = 0; /*0x5a097a*/
      }
      while ( v14 <= *(unsigned int *)&v10->__pad_0[4] ); /*0x5a0983*/
    }
  }
  else
  {
    v10 = 0; /*0x5a0987*/
  }
  v15 = aP3; /*0x5a0989*/
  v85 = 0; /*0x5a098c*/
  v81 = 1; /*0x5a0990*/
  v94 = 0.0; /*0x5a0995*/
  if ( *aP3 ) /*0x5a099d*/
  {
    v94 = 0.0; /*0x5a09b0*/
  }
  else if ( *(unsigned int *)&aP3[2] != 512 ) /*0x5a09c5*/
  {
    v94 = 3.141592653589793; /*0x5a09c7*/
  }
  if ( aP3[1] ) /*0x5a09d7*/
  {
    v94 = 4.71238898038469; /*0x5a09dc*/
  }
  else if ( *(unsigned int *)&aP3[3] != 512 ) /*0x5a09f1*/
  {
    v94 = 1.570796326794897; /*0x5a09f3*/
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a0a08*/
  for ( i = LayerClass::CellIteratorNext(&g_abs_87F7E8); i; i = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x5a0a19*/
  {
    v90 = *(unsigned int *)(i + 36); /*0x5a0a1e*/
    *((unsigned int *)g_MapTileArray + 20 * (int16_t)v90 + 20 * unk_89C2DC * SHIWORD(v90) + 15) = 0; /*0x5a0a43*/
  }
  v17 = (MouseClass *)RandomMap::CellListAlloc(v89, (int)aP1); /*0x5a0a58*/
  v18 = (int)v17->field_10; /*0x5a0a5d*/
  v84 = v17; /*0x5a0a60*/
  v82 = (unsigned short *)v18; /*0x5a0a66*/
  v86 = 0; /*0x5a0a6a*/
  if ( v18 > 0 ) /*0x5a0a6e*/
  {
    v19 = Block; /*0x5a0a74*/
    while ( 1 ) /*0x5a0a83*/
    {
      v20 = (MouseClass *)*v15; /*0x5a0a83*/
      v88 = *((unsigned int *)v84->field_4 + v86); /*0x5a0a88*/
      v21 = SHIWORD(v88); /*0x5a0a8c*/
      v22 = (int16_t)v88; /*0x5a0a91*/
      if ( (int16_t)v88 >= (int)v20 ) /*0x5a0a96*/
      {
        if ( (int16_t)v88 >= (int)v20 + *(unsigned int *)&v15[2] ) /*0x5a0aa3*/
          goto LABEL_48; /*0x5a0aa3*/
        v15 = aP3; /*0x5a0aa9*/
        v23 = aP3[1]; /*0x5a0aac*/
        if ( SHIWORD(v88) >= *(int *)&v23 ) /*0x5a0ab1*/
          break; /*0x5a0ab1*/
      }
LABEL_49:
      if ( ++v86 >= (int)v82 ) /*0x5a0c28*/
      {
        v17 = v84; /*0x5a0c2e*/
        goto LABEL_51; /*0x5a0c2e*/
      }
    }
    if ( SHIWORD(v88) < *(unsigned int *)&v23 + *(unsigned int *)&aP3[3] ) /*0x5a0abe*/
    {
      *v19 = (MapResourceClass)v88; /*0x5a0ac8*/
      v24 = (MapResourceClass *)(v22 - *a4); /*0x5a0ad2*/
      v25 = v21 - a4[1]; /*0x5a0ad8*/
      v89 = v24; /*0x5a0ada*/
      v90 = v25; /*0x5a0ae0*/
      if ( v24 ) /*0x5a0ae4*/
      {
        v26 = Math::ArcTan(-((double)v90 / (double)(int)v89)); /*0x5a0afa*/
        if ( (int)v24 < 0 ) /*0x5a0b04*/
          v26 = v26 + 3.141592653589793; /*0x5a0b06*/
      }
      else
      {
        v26 = 1.570796326794897; /*0x5a0be9*/
      }
      v27 = fabs(v26 - v94); /*0x5a0b10*/
      v93 = v27; /*0x5a0b18*/
      if ( !v29 ) /*0x5a0b21*/
      {
        do /*0x5a0b34*/
          v27 = v27 - 6.283185307179586; /*0x5a0b23*/
        while ( v27 >= 6.283185307179586 ); /*0x5a0b34*/
        v93 = v27; /*0x5a0b36*/
      }
      if ( v27 > 3.141592653589793 ) /*0x5a0b45*/
        v93 = 6.283185307179586 - v27; /*0x5a0b4f*/
      v92 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0b5f*/
      v30 = (unsigned int)v19; /*0x5a0b73*/
      v19 += 2; /*0x5a0b76*/
      ++v85; /*0x5a0b91*/
      v90 = v30; /*0x5a0b95*/
      v89 = v19; /*0x5a0b99*/
      *(float *)&v19[-1] = v93 * 1.5 + (double)v92 * 2.328306437080797e-10 * 2.0; /*0x5a0b9f*/
      v31 = *(unsigned int *)v10->__pad_0 + 1; /*0x5a0ba7*/
      IDA_LODWORD(v91) = *(unsigned int *)(v30 + 4); /*0x5a0ba8*/
      v32 = v31 >> 1; /*0x5a0bb1*/
      if ( v31 < *(unsigned int *)&v10->__pad_0[4] ) /*0x5a0bb5*/
      {
        if ( v31 <= 1 ) /*0x5a0bba*/
        {
          v15 = aP3; /*0x5a0bf4*/
        }
        else
        {
          do /*0x5a0bda*/
          {
            v33 = *(unsigned int *)&v10->__pad_0[8]; /*0x5a0bbc*/
            v34 = *(unsigned int *)(v33 + 4 * v32); /*0x5a0bbf*/
            if ( *(float *)(v34 + 4) <= (double)*(float *)&v91 ) /*0x5a0bce*/
              break; /*0x5a0bce*/
            *(unsigned int *)(v33 + 4 * v31) = v34; /*0x5a0bd0*/
            v31 = v32; /*0x5a0bd3*/
            v32 >>= 1; /*0x5a0bd5*/
          }
          while ( v31 > 1 ); /*0x5a0bda*/
          v15 = aP3; /*0x5a0bdc*/
          v30 = v90; /*0x5a0bdf*/
          v19 = v89; /*0x5a0be3*/
        }
        *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * v31) = v30; /*0x5a0bfa*/
        v35 = *(unsigned int *)&v10->__pad_0[12]; /*0x5a0bff*/
        ++*(unsigned int *)v10->__pad_0; /*0x5a0c05*/
        if ( v30 > v35 ) /*0x5a0c07*/
          *(unsigned int *)&v10->__pad_0[12] = v30; /*0x5a0c09*/
        if ( v30 < v10->uniqueId ) /*0x5a0c0f*/
          v10->uniqueId = v30; /*0x5a0c11*/
        goto LABEL_49; /*0x5a0c14*/
      }
    }
LABEL_48:
    v15 = aP3; /*0x5a0c16*/
    goto LABEL_49; /*0x5a0c16*/
  }
LABEL_51:
  if ( v17 ) /*0x5a0c36*/
    (*(void (**)(MouseClass *, int))v17->field_0)(v17, 1); /*0x5a0c3e*/
  v36 = __FYL2X__((double)(int)v82, 0.6931471805599453094); /*0x5a0c46*/
  if ( v36 < 1.0 ) /*0x5a0c55*/
    v36 = 1.0; /*0x5a0c59*/
  v86 = Math::RoundToInt(1.0 / (1.0 / v36 * a3) * 0.5); /*0x5a0c79*/
  *(double *)&v95 = (double)(unsigned int)(v86 / 2 + 1); /*0x5a0c95*/
  do /*0x5a0cc0*/
  {
    *(unsigned long long *)&v93 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0ca3*/
    v37 = Math::RoundToInt((double)((long long)(v93)) * *(double *)&v95 * 2.328306437080797e-10); /*0x5a0cb9*/
  }
  while ( v37 > v86 / 2 ); /*0x5a0cc0*/
  v86 += v37; /*0x5a0cc8*/
  if ( *(unsigned int *)v10->__pad_0 ) /*0x5a0ccc*/
  {
    v39 = *(unsigned int *)&v10->__pad_0[8]; /*0x5a0cda*/
    v40 = *(int16_t **)(v39 + 4); /*0x5a0ce2*/
    *(unsigned int *)(v39 + 4) = *(unsigned int *)(v39 + 4 * *(unsigned int *)v10->__pad_0); /*0x5a0ce5*/
    *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * (*(unsigned int *)v10->__pad_0)--) = 0; /*0x5a0ced*/
    Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a0cf7*/
    v83 = v40; /*0x5a0cfc*/
    v38 = v40; /*0x5a0d00*/
  }
  else
  {
    v38 = 0; /*0x5a0cd2*/
    v83 = 0; /*0x5a0cd4*/
  }
  v88 = 0; /*0x5a0d06*/
  if ( v86 <= 0 ) /*0x5a0d0c*/
    goto LABEL_113; /*0x5a0d0c*/
  while ( v81 && v38 ) /*0x5a0d26*/
  {
    v41 = (char *)g_MapTileArray + 80 * *v38 + 80 * unk_89C2DC * v38[1]; /*0x5a0d48*/
    if ( !*((unsigned int *)v41 + 14) ) /*0x5a0d4a*/
    {
      v42 = CellCoord::To_CellObj(&g_abs_87F7E8, v38); /*0x5a0d57*/
      if ( Cell::IsEmpty(v42) ) /*0x5a0d5e*/
      {
        v41[75] = 1; /*0x5a0d6a*/
        *((unsigned int *)v41 + 14) = aP1; /*0x5a0d6e*/
      }
      v38 = v83; /*0x5a0d71*/
    }
    v43 = 0; /*0x5a0d7d*/
    v90 = 0; /*0x5a0d82*/
    v89 = &Block[2 * v85]; /*0x5a0d86*/
    while ( 1 ) /*0x5a0df4*/
    {
      IDA_LODWORD(v91) = CellStruct::Add(v38, (IUnknown *)&v93, (IUnknown *)(4 * (v43 & 7) + 9041544))->field_0; /*0x5a0dad*/
      v84 = (MouseClass *)IDA_LODWORD(v91); /*0x5a0db1*/
      v44 = SWORD1(v91) + SLOWORD(v91); /*0x5a0dbd*/
      if ( v44 <= g_MapCellHeight_Value /*0x5a0de6*/
        || SLOWORD(v91) - SWORD1(v91) >= g_MapCellHeight_Value
        || SWORD1(v91) - SLOWORD(v91) >= g_MapCellHeight_Value
        || v44 > g_MapCellCount )
      {
        goto LABEL_108; /*0x5a0de6*/
      }
      v45 = g_MapTileArray; /*0x5a0dec*/
      if ( !g_MapTileArray ) /*0x5a0df4*/
        goto LABEL_105; /*0x5a0df4*/
      v46 = (char *)g_MapTileArray + 80 * SLOWORD(v91) + 80 * unk_89C2DC * SWORD1(v91); /*0x5a0e0b*/
      if ( !*((unsigned int *)v46 + 14) && *((MouseClass **)v46 + 15) != aP1 && SLOWORD(v91) >= *(int *)aP3 ) /*0x5a0e2d*/
      {
        if ( SLOWORD(v91) < *(unsigned int *)aP3 + *(unsigned int *)&aP3[2] ) /*0x5a0e3a*/
        {
          v47 = aP3[1]; /*0x5a0e40*/
          if ( SWORD1(v91) >= *(int *)&v47 && SWORD1(v91) < *(unsigned int *)&v47 + *(unsigned int *)&aP3[3] ) /*0x5a0e52*/
          {
            v48 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v84); /*0x5a0e62*/
            if ( Cell::IsEmpty(v48) ) /*0x5a0e69*/
            {
              v49 = v89; /*0x5a0e76*/
              v50 = (int16_t)v84; /*0x5a0e7a*/
              *v89 = (MapResourceClass)v84; /*0x5a0e81*/
              v52 = SHIWORD(v84) - a4[1]; /*0x5a0e94*/
              v89 = (MapResourceClass *)(v50 - *a4); /*0x5a0e98*/
              v51 = v89; /*0x5a0e92*/
              IDA_LODWORD(v91) = v52; /*0x5a0e9c*/
              if ( v89 ) /*0x5a0ea0*/
              {
                v53 = Math::ArcTan(-((double)IDA_SLODWORD(v91) / (double)(int)v89)); /*0x5a0eb6*/
                if ( (int)v51 < 0 ) /*0x5a0ec0*/
                  v53 = v53 + 3.141592653589793; /*0x5a0ec2*/
              }
              else
              {
                v53 = 1.570796326794897; /*0x5a0fe5*/
              }
              v54 = fabs(v53 - v94); /*0x5a0ecc*/
              v91 = v54; /*0x5a0ed4*/
              if ( !v56 ) /*0x5a0edd*/
              {
                do /*0x5a0ef0*/
                  v54 = v54 - 6.283185307179586; /*0x5a0edf*/
                while ( v54 >= 6.283185307179586 ); /*0x5a0ef0*/
                v91 = v54; /*0x5a0ef2*/
              }
              if ( v54 > 3.141592653589793 ) /*0x5a0f01*/
                v91 = 6.283185307179586 - v54; /*0x5a0f0b*/
              v95 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0f1b*/
              v57 = SHIWORD(v84); /*0x5a0f2b*/
              v58 = (int16_t)v84; /*0x5a0f48*/
              *(float *)&v49[1] = v91 * 1.5 + (double)v95 * 2.328306437080797e-10 * 2.0; /*0x5a0f4f*/
              *((unsigned int *)g_MapTileArray + 20 * v58 + 20 * unk_89C2DC * v57 + 15) = aP1; /*0x5a0f6a*/
              v59 = v49; /*0x5a0f73*/
              ++v85; /*0x5a0f75*/
              v60 = *(unsigned int *)v10->__pad_0 + 1; /*0x5a0f81*/
              IDA_LODWORD(v92) = v49[1]; /*0x5a0f82*/
              v61 = *(unsigned int *)&v10->__pad_0[4]; /*0x5a0f86*/
              v62 = v60 >> 1; /*0x5a0f8b*/
              IDA_LODWORD(v91) = v49; /*0x5a0f8f*/
              v89 = v49 + 2; /*0x5a0f93*/
              if ( v60 < v61 ) /*0x5a0f97*/
              {
                if ( v60 > 1 ) /*0x5a0fa0*/
                {
                  do /*0x5a0fc0*/
                  {
                    v63 = *(unsigned int *)&v10->__pad_0[8]; /*0x5a0fa2*/
                    v64 = *(unsigned int *)(v63 + 4 * v62); /*0x5a0fa5*/
                    if ( *(float *)(v64 + 4) <= (double)*(float *)&v92 ) /*0x5a0fb4*/
                      break; /*0x5a0fb4*/
                    *(unsigned int *)(v63 + 4 * v60) = v64; /*0x5a0fb6*/
                    v60 = v62; /*0x5a0fb9*/
                    v62 >>= 1; /*0x5a0fbb*/
                  }
                  while ( v60 > 1 ); /*0x5a0fc0*/
                  v59 = (MapResourceClass *)IDA_LODWORD(v91); /*0x5a0fc2*/
                }
                *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * v60) = v59; /*0x5a0fc9*/
                v65 = *(unsigned int *)&v10->__pad_0[12]; /*0x5a0fce*/
                ++*(unsigned int *)v10->__pad_0; /*0x5a0fd4*/
                if ( (unsigned int)v59 > v65 ) /*0x5a0fd6*/
                  *(unsigned int *)&v10->__pad_0[12] = v59; /*0x5a0fd8*/
                if ( (unsigned int)v59 < v10->uniqueId ) /*0x5a0fde*/
                  v10->uniqueId = (int)v59; /*0x5a0fe0*/
              }
              goto LABEL_108; /*0x5a0fe3*/
            }
          }
        }
        v45 = g_MapTileArray; /*0x5a0ff0*/
      }
      if ( v45 ) /*0x5a0ff8*/
      {
        v66 = v45[20 * (int16_t)v84 + 14 + 20 * unk_89C2DC * SHIWORD(v84)]; /*0x5a1013*/
        if ( !v66 ) /*0x5a1019*/
          goto LABEL_108; /*0x5a1019*/
      }
      else
      {
LABEL_105:
        v66 = -1; /*0x5a101d*/
      }
      if ( (MouseClass *)v66 != aP1 ) /*0x5a1023*/
        v81 = 0; /*0x5a1025*/
LABEL_108:
      v43 = v90 + 2; /*0x5a102e*/
      v90 += 2; /*0x5a1034*/
      if ( v90 >= 8 ) /*0x5a1038*/
        break; /*0x5a1038*/
      v38 = v83; /*0x5a0d8c*/
    }
    ++v88; /*0x5a1043*/
    v67 = Random::Gaussian((double *)&g_TileSystemInit); /*0x5a104c*/
    v68 = *(int16_t **)v10->__pad_0; /*0x5a1057*/
    v69 = *(unsigned int *)v10->__pad_0 == 0; /*0x5a1059*/
    v94 = v67 * 0.7853981633974483 + v94; /*0x5a105f*/
    if ( v69 ) /*0x5a1063*/
    {
      v83 = v68; /*0x5a1065*/
    }
    else
    {
      v70 = *(unsigned int *)&v10->__pad_0[8]; /*0x5a106b*/
      v71 = *(int16_t **)(v70 + 4); /*0x5a1073*/
      *(unsigned int *)(v70 + 4) = *(unsigned int *)(v70 + 4 * (unsigned int)v68); /*0x5a1076*/
      *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * (*(unsigned int *)v10->__pad_0)--) = 0; /*0x5a107e*/
      Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a108c*/
      v83 = v71; /*0x5a1091*/
    }
    if ( v88 < v86 ) /*0x5a109f*/
    {
      v38 = v83; /*0x5a0d14*/
      continue; /*0x5a0d14*/
    }
    break;
  }
LABEL_113:
  if ( a6 ) /*0x5a10aa*/
  {
    if ( *(unsigned int *)v10->__pad_0 ) /*0x5a10b0*/
    {
      v72 = *(unsigned int *)&v10->__pad_0[8]; /*0x5a10ba*/
      v73 = *(int16_t **)(v72 + 4); /*0x5a10c2*/
      *(unsigned int *)(v72 + 4) = *(unsigned int *)(v72 + 4 * *(unsigned int *)v10->__pad_0); /*0x5a10c5*/
      *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * (*(unsigned int *)v10->__pad_0)--) = 0; /*0x5a10cd*/
      Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a10db*/
      v74 = v73; /*0x5a10e2*/
      if ( v73 ) /*0x5a10e4*/
      {
        while ( v81 ) /*0x5a10ef*/
        {
          if ( g_MapTileArray ) /*0x5a10f9*/
          {
            v75 = 80 * (*v74 + unk_89C2DC * v74[1]); /*0x5a110e*/
            v76 = *(unsigned int *)((char *)g_MapTileArray + v75 + 56); /*0x5a1111*/
            v77 = (MouseClass **)((char *)g_MapTileArray + v75 + 56); /*0x5a1115*/
            if ( !v76 ) /*0x5a111b*/
            {
              *v77 = aP1; /*0x5a111d*/
              goto LABEL_123; /*0x5a111f*/
            }
          }
          else
          {
            v76 = -1; /*0x5a1121*/
          }
          if ( (MouseClass *)v76 != aP1 ) /*0x5a1126*/
            v81 = 0; /*0x5a1128*/
LABEL_123:
          if ( !*(unsigned int *)v10->__pad_0 ) /*0x5a112d*/
            break; /*0x5a112d*/
          v78 = *(unsigned int *)&v10->__pad_0[8]; /*0x5a1133*/
          v79 = *(int16_t **)(v78 + 4); /*0x5a113b*/
          *(unsigned int *)(v78 + 4) = *(unsigned int *)(v78 + 4 * *(unsigned int *)v10->__pad_0); /*0x5a113e*/
          *(unsigned int *)(*(unsigned int *)&v10->__pad_0[8] + 4 * (*(unsigned int *)v10->__pad_0)--) = 0; /*0x5a1148*/
          Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a1154*/
          v74 = v79; /*0x5a115b*/
          if ( !v79 ) /*0x5a115d*/
            break; /*0x5a115d*/
          continue; /*0x5a115d*/
        }
      }
    }
  }
  RA2_OPDEL(Block); /*0x5a115f*/
  if ( v10 ) /*0x5a116e*/
    Scalar::Dtor((void **)v10, 1); /*0x5a1174*/
  return v81; /*0x5a117d*/

}
}
// 0x5A23A0
namespace gamemd {
int RandomMap::PlaceRandomMapTiberium()
{

  int *v1; // esi
  int16_t v2; // bx
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int *v6; // edi
  int16_t v7; // bp
  int v8; // esi
  int v9; // ecx
  int16_t v10; // bx
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // ebp
  int v16; // eax
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int *Waypoint_Location; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // esi
  int v28; // ebx
  int v29; // ebp
  int v30; // eax
  double v31; // st7
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  double *v35; // edx
  unsigned int *v36; // ecx
  int v37; // esi
  int v38; // ebp
  int v39; // eax
  int v40; // esi
  int v41; // ebp
  int16_t *v42; // eax
  int v43; // [esp-4h] [ebp-9Ch]
  bool v44; // [esp+1Fh] [ebp-79h]
  int v45; // [esp+20h] [ebp-78h]
  int *v46; // [esp+24h] [ebp-74h]
  int v47; // [esp+28h] [ebp-70h]
  int v48; // [esp+28h] [ebp-70h]
  double v49; // [esp+28h] [ebp-70h]
  int v50; // [esp+34h] [ebp-64h]
  int v51; // [esp+34h] [ebp-64h]
  char v52; // [esp+38h] [ebp-60h]
  int v53; // [esp+3Ch] [ebp-5Ch]
  double v54; // [esp+40h] [ebp-58h]
  int v55; // [esp+40h] [ebp-58h]
  double v56; // [esp+40h] [ebp-58h]
  char v57[4]; // [esp+4Ch] [ebp-4Ch] BYREF
  char v58[4]; // [esp+50h] [ebp-48h] BYREF
  char v59[4]; // [esp+54h] [ebp-44h] BYREF
  double v60; // [esp+58h] [ebp-40h]
  double v61; // [esp+60h] [ebp-38h]
  double v62; // [esp+68h] [ebp-30h]
  int64_t v63; // [esp+70h] [ebp-28h]
  int64_t v64; // [esp+78h] [ebp-20h]
  void **v65; // [esp+80h] [ebp-18h] BYREF
  void *Block; // [esp+84h] [ebp-14h]
  int v67; // [esp+88h] [ebp-10h]
  char v68; // [esp+8Dh] [ebp-Bh]
  int v69; // [esp+90h] [ebp-8h]
  int v70; // [esp+94h] [ebp-4h]

  v1 = this; /*0x5a23af*/
  v2 = 0; /*0x5a23b1*/
  v3 = *((char *)this + 15); /*0x5a23b4*/
  v4 = *((char *)this + 16); /*0x5a23b7*/
  v46 = v1; /*0x5a23bd*/
  v45 = 0; /*0x5a23c1*/
  switch ( v3 ) /*0x5a23c7*/
  {
    case 0: /*0x5a23c7*/
      v44 = v4 == 3; /*0x5a23d1*/
      break; /*0x5a23d6*/
    case 1: /*0x5a23c7*/
    case 3: /*0x5a23c7*/
    case 4: /*0x5a23c7*/
      v44 = v4 != 3; /*0x5a23db*/
      break; /*0x5a23e0*/
    case 2: /*0x5a23c7*/
      v44 = 1; /*0x5a23e2*/
      break; /*0x5a23e7*/
    default:
      v44 = 0; /*0x5a23e9*/
      break; /*0x5a23e9*/
  }
  result = 0; /*0x5a23f4*/
  v53 = 0; /*0x5a23f8*/
  if ( g_RandomMap_TileData > 0 ) /*0x5a23fc*/
  {
    while ( 1 ) /*0x5a240c*/
    {
      v6 = (int *)*((unsigned int *)g_RandomMap_TerrainState + result); /*0x5a240c*/
      if ( *v6 ) /*0x5a240f*/
      {
        v50 = -1; /*0x5a241b*/
        if ( v44 ) /*0x5a2425*/
        {
          v7 = 0; /*0x5a242e*/
          if ( v6[8] <= 0 ) /*0x5a2433*/
          {
            v12 = v6[14] - 1; /*0x5a2484*/
            v63 = (unsigned int)v6[14]; /*0x5a2488*/
            v54 = (double)v63; /*0x5a2490*/
            do /*0x5a24bb*/
            {
              v64 = (unsigned int)Random::State(&g_Randomizer); /*0x5a249e*/
              v11 = Math::RoundToInt((double)v64 * v54 * 2.328306437080797e-10); /*0x5a24b4*/
            }
            while ( v11 > v12 ); /*0x5a24bb*/
            v47 = *(unsigned int *)(v6[11] + 4 * v11); /*0x5a24c3*/
            IDA_LOWORD(v11) = IDA_HIWORD(v47); /*0x5a24c7*/
            v10 = v47; /*0x5a24cc*/
          }
          else
          {
            v8 = 0; /*0x5a2435*/
            do /*0x5a2467*/
            {
              IDA_LODWORD(v60) = *(unsigned int *)ScenarioClass::Get_Waypoint_Location(v57, v8 + v45); /*0x5a2455*/
              v7 += IDA_WORD1(v60); /*0x5a2459*/
              v2 += IDA_LOWORD(v60); /*0x5a245e*/
              ++v8; /*0x5a2464*/
            }
            while ( v8 < v6[8] ); /*0x5a2467*/
            v9 = v6[8]; /*0x5a2469*/
            v10 = v2 / v9; /*0x5a2472*/
            v11 = v7 / v9; /*0x5a2479*/
          }
          v13 = *v6; /*0x5a24cf*/
          v14 = 0; /*0x5a24d1*/
          v48 = 500000; /*0x5a24d3*/
          if ( *(int *)(*v6 + 16) > 0 ) /*0x5a24e0*/
          {
            v15 = (int16_t)v11; /*0x5a24e5*/
            do /*0x5a2546*/
            {
              v16 = *(unsigned int *)(*(unsigned int *)(v13 + 4) + 4 * v14); /*0x5a24ee*/
              v17 = Math::Sqrt((double)(((int16_t)v16 - v10) * ((int16_t)v16 - v10) /*0x5a2518*/
                                      + (SHIWORD(v16) - v15) * (SHIWORD(v16) - v15)));
              if ( v17 < (double)v48 ) /*0x5a252d*/
              {
                v48 = Math::RoundToInt(v17); /*0x5a2534*/
                v50 = v14; /*0x5a2538*/
              }
              v13 = *v6; /*0x5a2540*/
              ++v14; /*0x5a2542*/
            }
            while ( v14 < *(unsigned int *)(*v6 + 16) ); /*0x5a2546*/
          }
          v1 = v46; /*0x5a2548*/
        }
        Math::RoundToInt((double)v1[21] * 0.01 * (double)(v1[176] - v1[175]) + (double)v1[175]); /*0x5a2575*/
        v18 = (double)v6[8]; /*0x5a257a*/
        if ( v18 < 0.5 ) /*0x5a258e*/
          v18 = 0.5; /*0x5a2592*/
        v19 = Math::RoundToInt(v18); /*0x5a259e*/
        v20 = *(unsigned int *)(*v6 + 16); /*0x5a25a7*/
        if ( v20 && v19 ) /*0x5a25b4*/
        {
          v21 = 0; /*0x5a25bd*/
          v22 = 0; /*0x5a25bf*/
          v55 = v19 / v20; /*0x5a25c3*/
          if ( v20 > 0 ) /*0x5a25c7*/
          {
            do /*0x5a2638*/
            {
              do /*0x5a25f9*/
              {
                do /*0x5a25e8*/
                  v49 = Random::Gaussian((double *)&g_TileSystemInit) * 50.0; /*0x5a25d9*/
                while ( v49 < -100.0 ); /*0x5a25e8*/
              }
              while ( v49 > 100.0 ); /*0x5a25f9*/
              v23 = Math::RoundToInt((double)v55 + v49); /*0x5a2603*/
              if ( v23 >= 0 ) /*0x5a260a*/
                Terrain::PlaceTiberiumTrees((int16_t *)(*(unsigned int *)(*v6 + 4) + 4 * v22), v23, v22 + v45 + 1, v22 == v50); /*0x5a262d*/
              ++v22; /*0x5a2634*/
            }
            while ( v22 < *(unsigned int *)(*v6 + 16) ); /*0x5a2638*/
          }
          RandomMap::Constructor_1(0, 0); /*0x5a2643*/
          v65 = &vt_DynamicVectorClass_double; /*0x5a2648*/
          v70 = 10; /*0x5a2650*/
          v69 = 0; /*0x5a265b*/
          v51 = 0; /*0x5a2667*/
          if ( v6[8] > 0 ) /*0x5a266b*/
          {
            do /*0x5a2779*/
            {
              v62 = 0.0; /*0x5a2679*/
              Waypoint_Location = (int *)ScenarioClass::Get_Waypoint_Location(v58, v21 + v45); /*0x5a2694*/
              v25 = *v6; /*0x5a2699*/
              v26 = *Waypoint_Location; /*0x5a269b*/
              v27 = 0; /*0x5a269d*/
              if ( *(int *)(*v6 + 16) > 0 ) /*0x5a26a8*/
              {
                v28 = SHIWORD(v26); /*0x5a26aa*/
                v29 = (int16_t)v26; /*0x5a26af*/
                do /*0x5a26fa*/
                {
                  v30 = *(unsigned int *)(*(unsigned int *)(v25 + 4) + 4 * v27); /*0x5a26b8*/
                  v31 = Math::Sqrt((double)(((int16_t)v30 - v29) * ((int16_t)v30 - v29) /*0x5a26e2*/
                                          + (SHIWORD(v30) - v28) * (SHIWORD(v30) - v28)));
                  v25 = *v6; /*0x5a26e7*/
                  v32 = *(unsigned int *)(*v6 + 16); /*0x5a26f0*/
                  ++v27; /*0x5a26f3*/
                  v62 = v31 + v62; /*0x5a26f6*/
                }
                while ( v27 < v32 ); /*0x5a26fa*/
                v21 = v51; /*0x5a26fc*/
              }
              v56 = v62 / (double)*(int *)(*v6 + 16); /*0x5a2719*/
              if ( v69 < v67 /*0x5a274c*/
                || (v68 || !v67)
                && v70 > 0
                && ((uint8_t (*)(void ***, int, unsigned int))v65[2])(&v65, v70 + v67, 0) )
              {
                v33 = v69++; /*0x5a275e*/
                *((double *)Block + v33) = v56; /*0x5a276c*/
              }
              v51 = ++v21; /*0x5a2775*/
            }
            while ( v21 < v6[8] ); /*0x5a2779*/
          }
          v34 = v6[8]; /*0x5a277f*/
          v35 = (double *)Block; /*0x5a2782*/
          v61 = 9999999.0; /*0x5a2788*/
          if ( v34 > 0 ) /*0x5a2798*/
          {
            v36 = Block; /*0x5a279a*/
            v37 = v34; /*0x5a279c*/
            do /*0x5a27bc*/
            {
              if ( *(double *)v36 < v61 ) /*0x5a27a9*/
              {
                v38 = v36[1]; /*0x5a27ad*/
                IDA_LODWORD(v61) = *v36; /*0x5a27b0*/
                IDA_HIDWORD(v61) = v38; /*0x5a27b4*/
              }
              v36 += 2; /*0x5a27b8*/
              --v37; /*0x5a27bb*/
            }
            while ( v37 ); /*0x5a27bc*/
          }
          v52 = 0; /*0x5a27da*/
          if ( v46[16] == 3 ) /*0x5a27c6*/
          {
            v39 = v46[15]; /*0x5a27c8*/
            if ( v39 == 1 || v39 == 3 || v39 == 4 ) /*0x5a27d8*/
              v52 = 1; /*0x5a27c6*/
          }
          v40 = 0; /*0x5a27e6*/
          if ( v34 > 0 ) /*0x5a27ea*/
          {
            v41 = v45; /*0x5a27ec*/
            do /*0x5a2837*/
            {
              v43 = Math::RoundToInt((v35[v40] - v61) * 15.0) + 500; /*0x5a2816*/
              v42 = (int16_t *)ScenarioClass::Get_Waypoint_Location(v59, v41); /*0x5a281d*/
              Terrain::PlaceTiberiumTrees(v42, v43, v41 + 1, v52); /*0x5a2827*/
              v35 = (double *)Block; /*0x5a282f*/
              ++v40; /*0x5a2833*/
              ++v41; /*0x5a2834*/
            }
            while ( v40 < v6[8] ); /*0x5a2837*/
          }
          v45 += v6[8]; /*0x5a2846*/
          v65 = &vt_VectorClass_double; /*0x5a284a*/
          if ( v35 ) /*0x5a2852*/
          {
            if ( v68 ) /*0x5a285d*/
            {
              RA2_OPDEL(v35); /*0x5a2860*/
              Block = 0; /*0x5a2868*/
            }
          }
          v67 = 0; /*0x5a286c*/
          v1 = v46; /*0x5a2873*/
          v68 = 0; /*0x5a2877*/
        }
      }
      result = ++v53; /*0x5a2889*/
      if ( v53 >= g_RandomMap_TileData ) /*0x5a2890*/
        break; /*0x5a2890*/
      v2 = 0; /*0x5a2404*/
    }
  }
  return result; /*0x5a2896*/

}
}
// 0x5A3AE0
namespace gamemd {
VectorClass_flat * * RandomMap::PlaceResources()
{

  int *v1; // esi
  int i; // eax
  int Bit; // edi
  double *v4; // ebp
  int v5; // esi
  int j; // eax
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // esi
  unsigned short *v10; // eax
  unsigned int *v11; // eax
  int v12; // eax
  void *v13; // eax
  int v14; // eax
  bool v15; // cc
  unsigned int v16; // esi
  unsigned int v17; // eax
  signed int v18; // ebp
  int result; // eax
  unsigned int v20; // edi
  unsigned int v21; // esi
  unsigned short *v22; // eax
  unsigned int *v23; // eax
  int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // [esp-Ch] [ebp-74h]
  int v29; // [esp-Ch] [ebp-74h]
  int v30; // [esp-Ch] [ebp-74h]
  int v31; // [esp-Ch] [ebp-74h]
  double v32; // [esp-8h] [ebp-70h]
  int v33; // [esp+14h] [ebp-54h]
  int v34; // [esp+14h] [ebp-54h]
  int v35; // [esp+14h] [ebp-54h]
  signed int v37; // [esp+18h] [ebp-50h]
  int v38; // [esp+1Ch] [ebp-4Ch] BYREF
  double v39; // [esp+20h] [ebp-48h]
  int v40; // [esp+2Ch] [ebp-3Ch] BYREF
  double v41; // [esp+30h] [ebp-38h] BYREF
  double v42; // [esp+38h] [ebp-30h] BYREF
  double v43; // [esp+40h] [ebp-28h]
  double v44; // [esp+48h] [ebp-20h]
  int64_t v45; // [esp+50h] [ebp-18h]
  int64_t v46; // [esp+58h] [ebp-10h]
  int64_t v47; // [esp+60h] [ebp-8h]

  v1 = this; /*0x5a3aec*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a3af8*/
  for ( i = LayerClass::CellIteratorNext(&g_abs_87F7E8); i; i = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x5a3b0b*/
  {
    IDA_LODWORD(v39) = *(unsigned int *)(i + 36); /*0x5a3b10*/
    *((unsigned int *)g_MapTileArray + 20 * SLOWORD(v39) + 20 * unk_89C2DC * SWORD1(v39) + 15) = 0; /*0x5a3b35*/
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a3b47*/
  Bit = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x5a3b56*/
  do /*0x5a3b86*/
  {
    *(unsigned long long *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3b62*/
    v38 = Math::RoundToInt((double)((long long)(v44)) * 0.000000004889443517869674 + 20.0); /*0x5a3b82*/
  }
  while ( (unsigned int)v38 > 0x28 ); /*0x5a3b86*/
  do /*0x5a3bb6*/
  {
    *(unsigned long long *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3b92*/
    v33 = Math::RoundToInt((double)((long long)(v44)) * 0.000000004889443517869674 + 20.0); /*0x5a3bb2*/
  }
  while ( (unsigned int)v33 > 0x28 ); /*0x5a3bb6*/
  do /*0x5a3be6*/
  {
    *(unsigned long long *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3bc2*/
    v40 = Math::RoundToInt((double)((long long)(v44)) * 0.000000004889443517869674 + 20.0); /*0x5a3be2*/
  }
  while ( (unsigned int)v40 > 0x28 ); /*0x5a3be6*/
  if ( Bit ) /*0x5a3bea*/
  {
    do /*0x5a3f0a*/
    {
      IDA_LODWORD(v39) = *(unsigned int *)(Bit + 36); /*0x5a3bf9*/
      v4 = (double *)((char *)g_MapTileArray + 80 * SLOWORD(v39) + 80 * unk_89C2DC * SWORD1(v39)); /*0x5a3c16*/
      if ( Cell::IsEmpty((unsigned int *)Bit) /*0x5a3c47*/
        && !*(unsigned char *)(Bit + 284)
        && *(unsigned int *)(Bit + 68) == -1
        && !*(unsigned int *)(Bit + 228)
        && !*((unsigned char *)v4 + 69) )
      {
        IDA_LODWORD(v39) = *(unsigned int *)(Bit + 36); /*0x5a3c58*/
        v5 = SLOWORD(v39) + (SWORD1(v39) << 9); /*0x5a3c67*/
        v45 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3c6e*/
        if ( (double)v45 * 2.328306437080797e-10 >= v4[3] ) /*0x5a3c88*/
        {
          v46 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3d49*/
          if ( (double)v46 * 2.328306437080797e-10 >= v4[5] ) /*0x5a3d63*/
          {
            v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3e25*/
            if ( (double)v47 * 2.328306437080797e-10 < v4[4] ) /*0x5a3e3f*/
            {
              v44 = 20.0; /*0x5a3e49*/
              v42 = (double)v40; /*0x5a3e59*/
              if ( v42 - 20.0 > 80.0 || v42 + 20.0 < 4.0 ) /*0x5a3e89*/
              {
                v44 = 38.0; /*0x5a3e8b*/
                v42 = 42.0; /*0x5a3e9b*/
              }
              do /*0x5a3edd*/
              {
                do /*0x5a3ecc*/
                  v39 = Random::Gaussian((double *)&g_TileSystemInit) * v44 + v42; /*0x5a3ebd*/
                while ( v39 < 4.0 ); /*0x5a3ecc*/
              }
              while ( v39 > 80.0 ); /*0x5a3edd*/
              v30 = Math::RoundToInt(v39); /*0x5a3ef0*/
              FloodFillPathfinding(Bit, unk_AA0E18, v30, v5, 0); /*0x5a3ef7*/
            }
          }
          else
          {
            v43 = 20.0; /*0x5a3d6d*/
            v42 = (double)v33; /*0x5a3d7d*/
            if ( v42 - 20.0 > 80.0 || v42 + 20.0 < 4.0 ) /*0x5a3dad*/
            {
              v43 = 38.0; /*0x5a3daf*/
              v42 = 42.0; /*0x5a3dbf*/
            }
            do /*0x5a3e01*/
            {
              do /*0x5a3df0*/
                v39 = Random::Gaussian((double *)&g_TileSystemInit) * v43 + v42; /*0x5a3de1*/
              while ( v39 < 4.0 ); /*0x5a3df0*/
            }
            while ( v39 > 80.0 ); /*0x5a3e01*/
            v29 = Math::RoundToInt(v39); /*0x5a3e14*/
            FloodFillPathfinding(Bit, dword_ABB104, v29, v5, 0); /*0x5a3e16*/
          }
        }
        else
        {
          v41 = 20.0; /*0x5a3c92*/
          v42 = (double)v38; /*0x5a3ca2*/
          if ( v42 - 20.0 > 80.0 || v42 + 20.0 < 4.0 ) /*0x5a3cd2*/
          {
            v41 = 38.0; /*0x5a3cd4*/
            v42 = 42.0; /*0x5a3ce4*/
          }
          do /*0x5a3d26*/
          {
            do /*0x5a3d15*/
              v39 = Random::Gaussian((double *)&g_TileSystemInit) * v41 + v42; /*0x5a3d06*/
            while ( v39 < 4.0 ); /*0x5a3d15*/
          }
          while ( v39 > 80.0 ); /*0x5a3d26*/
          v28 = Math::RoundToInt(v39); /*0x5a3d33*/
          FloodFillPathfinding(Bit, dword_ABC2B8, v28, v5, 0); /*0x5a3d3a*/
        }
      }
      Bit = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x5a3f06*/
    }
    while ( Bit ); /*0x5a3f0a*/
    v1 = this; /*0x5a3f10*/
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a3f19*/
  for ( j = LayerClass::CellIteratorNext(&g_abs_87F7E8); j; j = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x5a3f2a*/
    CellClass::DetermineTileType(j); /*0x5a3f2e*/
  IDA_LODWORD(v39) = Math::RoundToInt(((double)v1[25] * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1[191]); /*0x5a3f68*/
  v34 = 0; /*0x5a3f6c*/
  if ( IDA_SLODWORD(v39) > 0 ) /*0x5a3f70*/
  {
    do /*0x5a40bd*/
    {
      if ( v34 >= 100 ) /*0x5a3f7b*/
        break; /*0x5a3f7b*/
      v7 = 0; /*0x5a3f81*/
      do /*0x5a3fe9*/
      {
        v8 = unk_89C2DC * unk_89C2DC - 1; /*0x5a3f8b*/
        do /*0x5a3fb3*/
        {
          v9 = Range_RandomInt(0, v8); /*0x5a3f9d*/
          v10 = CellStruct::Set(&v41, 0, 0); /*0x5a3f9f*/
        }
        while ( CellStruct::Equals((unsigned short *)g_MapTileArray + 40 * v9, v10) ); /*0x5a3fb3*/
        ++v7; /*0x5a3fc8*/
        v38 = *((unsigned int *)g_MapTileArray + 20 * v9); /*0x5a3fd2*/
        if ( v7 > 200 ) /*0x5a3fd6*/
        {
          v12 = *(unsigned int *)CellStruct::Set(&v42, 0, 0); /*0x5a3fff*/
          goto LABEL_48; /*0x5a4001*/
        }
        v11 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v38); /*0x5a3fe2*/
      }
      while ( !Cell::IsEmpty(v11) ); /*0x5a3fe9*/
      v12 = v38; /*0x5a4003*/
LABEL_48:
      v40 = v12; /*0x5a4007*/
      do /*0x5a4041*/
      {
        do /*0x5a4030*/
          v44 = Random::Gaussian((double *)&g_TileSystemInit) * 0.1 + 0.2; /*0x5a4021*/
        while ( v44 < 0.05 ); /*0x5a4030*/
      }
      while ( v44 > 0.4 ); /*0x5a4041*/
      do /*0x5a4079*/
      {
        do /*0x5a4068*/
          v43 = Random::Gaussian((double *)&g_TileSystemInit) * 10.0 + 25.0; /*0x5a4059*/
        while ( v43 < 10.0 ); /*0x5a4068*/
      }
      while ( v43 > 35.0 ); /*0x5a4079*/
      v32 = v44; /*0x5a4088*/
      v31 = Math::RoundToInt(v43); /*0x5a4092*/
      v13 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v40); /*0x5a4099*/
      v14 = ScatterTerrainTrees((int)v13, v31, v32); /*0x5a40a3*/
      v15 = IDA_LODWORD(v39) - v14 <= 0; /*0x5a40b3*/
      IDA_LODWORD(v39) -= v14; /*0x5a40b5*/
      ++v34; /*0x5a40b9*/
    }
    while ( !v15 ); /*0x5a40bd*/
  }
  v16 = Object::ComputeAllocationSize() / 200; /*0x5a40df*/
  v47 = v16 + 1; /*0x5a40e4*/
  *(double *)&v46 = (double)v47; /*0x5a40ec*/
  do /*0x5a4119*/
  {
    v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5a40fa*/
    v17 = Math::RoundToInt((double)v47 * *(double *)&v46 * 2.328306437080797e-10); /*0x5a4110*/
    v18 = v17; /*0x5a4115*/
  }
  while ( v17 > v16 ); /*0x5a4119*/
  result = 5 * v17; /*0x5a411b*/
  v37 = 0; /*0x5a411f*/
  v35 = 0; /*0x5a4125*/
  if ( 5 * v18 > 0 ) /*0x5a4129*/
  {
    while ( 1 ) /*0x5a412f*/
    {
      if ( v37 >= v18 ) /*0x5a4133*/
        return result; /*0x5a4133*/
      v20 = unk_89C2DC * unk_89C2DC - 1; /*0x5a4141*/
      do /*0x5a419c*/
      {
        v47 = v20 + 1; /*0x5a414b*/
        v43 = (double)v47; /*0x5a4153*/
        do /*0x5a4180*/
        {
          v46 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4161*/
          v21 = Math::RoundToInt((double)v46 * v43 * 2.328306437080797e-10); /*0x5a417c*/
        }
        while ( v21 > v20 ); /*0x5a4180*/
        v22 = CellStruct::Set(&v42, 0, 0); /*0x5a4188*/
      }
      while ( CellStruct::Equals((unsigned short *)g_MapTileArray + 40 * v21, v22) ); /*0x5a419c*/
      v40 = *((unsigned int *)g_MapTileArray + 20 * v21); /*0x5a41be*/
      v23 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v40); /*0x5a41c2*/
      v24 = (int)v23; /*0x5a41c7*/
      if ( v23[17] == -1 ) /*0x5a41cd*/
        break; /*0x5a41cd*/
LABEL_72:
      result = ++v35; /*0x5a4262*/
      if ( v35 >= 5 * v18 ) /*0x5a4271*/
        return result; /*0x5a4271*/
    }
    if ( (uint8_t)RandomMap::Check(v23) ) /*0x5a41d5*/
    {
      do /*0x5a4202*/
      {
        v45 = (unsigned int)Random::State(&g_Randomizer); /*0x5a41e8*/
        v25 = Math::RoundToInt((double)v45 * 0.000000001164153218540399); /*0x5a41fa*/
      }
      while ( v25 > 4 ); /*0x5a4202*/
      v26 = v25 + 168; /*0x5a4204*/
    }
    else
    {
      if ( !Cell::IsEmpty((unsigned int *)v24) && !Cell::IsShore((int *)v24) ) /*0x5a421f*/
        goto LABEL_71; /*0x5a421f*/
      do /*0x5a4245*/
      {
        *(unsigned long long *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a422b*/
        v27 = Math::RoundToInt((double)((long long)(v44)) * 0.000000001164153218540399); /*0x5a423d*/
      }
      while ( v27 > 4 ); /*0x5a4245*/
      v26 = v27 + 173; /*0x5a4247*/
    }
    *(unsigned int *)(v24 + 68) = v26; /*0x5a424c*/
LABEL_71:
    *(unsigned char *)(v24 + 286) = 0; /*0x5a424f*/
    House::AnnounceUpgrade(v24, -1); /*0x5a4259*/
    ++v37; /*0x5a425e*/
    goto LABEL_72; /*0x5a425e*/
  }
  return result; /*0x5a4277*/

}
}
// 0x5A4280
namespace gamemd {
int RandomMap::GenerateRandomMapTerrain()
{

  int *v1; // edi
  int i; // eax
  int BitLCW; // esi
  double *v4; // ebp
  int v5; // eax
  int j; // eax
  int result; // eax
  int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned short *v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  void *v14; // eax
  bool v15; // cc
  int v16; // [esp-Ch] [ebp-5Ch]
  double v17; // [esp-8h] [ebp-58h]
  int v19; // [esp+18h] [ebp-38h]
  int v20; // [esp+20h] [ebp-30h] BYREF
  int v21; // [esp+24h] [ebp-2Ch]
  int v22; // [esp+28h] [ebp-28h] BYREF
  int16_t v23; // [esp+2Ch] [ebp-24h] BYREF
  double v24; // [esp+30h] [ebp-20h]
  double v25; // [esp+38h] [ebp-18h]
  int64_t v26; // [esp+40h] [ebp-10h]
  int64_t v27; // [esp+48h] [ebp-8h]

  v1 = this; /*0x5a428d*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a4298*/
  for ( i = LayerClass::CellIteratorNext(&g_abs_87F7E8); i; i = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x5a42ab*/
  {
    v21 = *(unsigned int *)(i + 36); /*0x5a42b0*/
    *((unsigned int *)g_MapTileArray + 20 * (int16_t)v21 + 20 * unk_89C2DC * SHIWORD(v21) + 15) = 0; /*0x5a42d5*/
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a42e7*/
  BitLCW = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x5a42f6*/
  if ( BitLCW ) /*0x5a42fa*/
  {
    do /*0x5a43e6*/
    {
      v21 = *(unsigned int *)(BitLCW + 36); /*0x5a4309*/
      v4 = (double *)((char *)g_MapTileArray + 80 * (int16_t)v21 + 80 * unk_89C2DC * SHIWORD(v21)); /*0x5a4326*/
      if ( Cell::IsEmpty((unsigned int *)BitLCW) && !*(unsigned char *)(BitLCW + 284) && !*((unsigned char *)v4 + 69) ) /*0x5a4341*/
      {
        v21 = *(unsigned int *)(BitLCW + 36); /*0x5a4352*/
        *(unsigned long long *)&v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4368*/
        if ( (double)((long long)(v25)) * 2.328306437080797e-10 < v4[5] ) /*0x5a4382*/
        {
          do /*0x5a43ba*/
          {
            do /*0x5a43a9*/
              v24 = Random::Gaussian((double *)&g_TileSystemInit) * 15.0 + 20.0; /*0x5a439a*/
            while ( v24 < 4.0 ); /*0x5a43a9*/
          }
          while ( v24 > 60.0 ); /*0x5a43ba*/
          v5 = Math::RoundToInt(v24); /*0x5a43c2*/
          FloodFillPathfinding(BitLCW, dword_ABC2B8, v5, (int16_t)v21 + (SHIWORD(v21) << 9), 0); /*0x5a43d3*/
        }
      }
      BitLCW = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x5a43e2*/
    }
    while ( BitLCW ); /*0x5a43e6*/
    v1 = this; /*0x5a43ec*/
  }
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x5a43f5*/
  for ( j = LayerClass::CellIteratorNext(&g_abs_87F7E8); j; j = LayerClass::CellIteratorNext(&g_abs_87F7E8) ) /*0x5a4406*/
    CellClass::DetermineTileType(j); /*0x5a440a*/
  result = Math::RoundToInt(((double)v1[25] * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1[191]); /*0x5a443d*/
  v21 = result; /*0x5a4444*/
  v19 = 0; /*0x5a4448*/
  if ( result > 0 ) /*0x5a444c*/
  {
    do /*0x5a45cf*/
    {
      if ( v19 >= 100 ) /*0x5a4457*/
        break; /*0x5a4457*/
      v8 = 0; /*0x5a445d*/
      do /*0x5a44f7*/
      {
        v9 = unk_89C2DC * unk_89C2DC - 1; /*0x5a4467*/
        do /*0x5a44c2*/
        {
          v26 = v9 + 1; /*0x5a4471*/
          v25 = (double)v26; /*0x5a4479*/
          do /*0x5a44a6*/
          {
            v27 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4487*/
            v10 = Math::RoundToInt((double)v27 * v25 * 2.328306437080797e-10); /*0x5a44a2*/
          }
          while ( v10 > v9 ); /*0x5a44a6*/
          v11 = CellStruct::Set(&v23, 0, 0); /*0x5a44ae*/
        }
        while ( CellStruct::Equals((unsigned short *)g_MapTileArray + 40 * v10, v11) ); /*0x5a44c2*/
        ++v8; /*0x5a44d6*/
        v20 = *((unsigned int *)g_MapTileArray + 20 * v10); /*0x5a44e0*/
        if ( v8 > 200 ) /*0x5a44e4*/
        {
          v13 = 0; /*0x5a450f*/
          goto LABEL_27; /*0x5a4513*/
        }
        v12 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v20); /*0x5a44f0*/
      }
      while ( !Cell::IsEmpty(v12) ); /*0x5a44f7*/
      v13 = v20; /*0x5a4515*/
LABEL_27:
      v22 = v13; /*0x5a4519*/
      do /*0x5a4553*/
      {
        do /*0x5a4542*/
          v24 = Random::Gaussian((double *)&g_TileSystemInit) * 0.1 + 0.2; /*0x5a4533*/
        while ( v24 < 0.05 ); /*0x5a4542*/
      }
      while ( v24 > 0.4 ); /*0x5a4553*/
      do /*0x5a458b*/
      {
        do /*0x5a457a*/
          v25 = Random::Gaussian((double *)&g_TileSystemInit) * 10.0 + 25.0; /*0x5a456b*/
        while ( v25 < 10.0 ); /*0x5a457a*/
      }
      while ( v25 > 35.0 ); /*0x5a458b*/
      v17 = v24; /*0x5a459a*/
      v16 = Math::RoundToInt(v25); /*0x5a45a4*/
      v14 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v22); /*0x5a45ab*/
      result = ScatterTerrainTrees((int)v14, v16, v17); /*0x5a45b5*/
      v15 = v21 - result <= 0; /*0x5a45c5*/
      v21 -= result; /*0x5a45c7*/
      ++v19; /*0x5a45cb*/
    }
    while ( !v15 ); /*0x5a45cf*/
  }
  return result; /*0x5a45d5*/

}
}
// 0x5A80B0
namespace gamemd {
VectorClass_flat * * RandomMap::PlaceMapSeedBuildings()
{

  int v1; // edx
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  int *v8; // eax
  int v9; // edi
  int result; // eax
  int v11; // esi
  int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned short *v15; // eax
  unsigned int *v16; // eax
  int v17; // eax
  int *v18; // esi
  int v19; // [esp+10h] [ebp-4Ch] BYREF
  int v20; // [esp+14h] [ebp-48h]
  int v21; // [esp+18h] [ebp-44h]
  int v22; // [esp+1Ch] [ebp-40h]
  int v23; // [esp+20h] [ebp-3Ch] BYREF
  double v24; // [esp+24h] [ebp-38h]
  int v25; // [esp+2Ch] [ebp-30h]
  int v26; // [esp+30h] [ebp-2Ch]
  int *v27; // [esp+34h] [ebp-28h]
  int16_t v28; // [esp+38h] [ebp-24h] BYREF
  int64_t v29; // [esp+3Ch] [ebp-20h]
  int64_t v30; // [esp+44h] [ebp-18h]
  int v31[4]; // [esp+4Ch] [ebp-10h] BYREF

  v1 = dword_ABC1D4; /*0x5a80b3*/
  v27 = this; /*0x5a80c1*/
  v3 = 0; /*0x5a80c5*/
  v4 = &dword_ABE378; /*0x5a80c7*/
  do /*0x5a80da*/
  {
    v5 = v1 + v3++; /*0x5a80cc*/
    *v4 = v5; /*0x5a80d0*/
    v4 += 3; /*0x5a80d2*/
  }
  while ( (int)v4 < (int)&dword_ABE834 ); /*0x5a80da*/
  v6 = dword_ABBEC0; /*0x5a80dc*/
  v7 = 0; /*0x5a80e2*/
  v8 = &dword_ABE834; /*0x5a80e4*/
  do /*0x5a80f7*/
  {
    v9 = v6 + v7++; /*0x5a80e9*/
    *v8 = v9; /*0x5a80ed*/
    v8 += 3; /*0x5a80ef*/
  }
  while ( (int)v8 < (int)dword_ABE894 ); /*0x5a80f7*/
  v26 = Math::RoundToInt((double)*((char *)this + 24) + 0.49 + (double)*((char *)this + 24) + 0.49); /*0x5a8109*/
  v25 = 0; /*0x5a810d*/
  v21 = 0; /*0x5a8111*/
  do /*0x5a82c4*/
  {
    result = v26; /*0x5a8115*/
    if ( v21 >= v26 ) /*0x5a811f*/
      break; /*0x5a811f*/
    v19 = 0; /*0x5a8125*/
    v20 = 0; /*0x5a812f*/
LABEL_8:
    v11 = unk_89C2DC; /*0x5a8133*/
    while ( 1 ) /*0x5a8139*/
    {
      v12 = 0; /*0x5a8139*/
      while ( 1 ) /*0x5a8140*/
      {
        v13 = v11 * v11 - 1; /*0x5a8140*/
        do /*0x5a819b*/
        {
          v29 = v13 + 1; /*0x5a814a*/
          v24 = (double)v29; /*0x5a8152*/
          do /*0x5a817f*/
          {
            v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8160*/
            v14 = Math::RoundToInt((double)v30 * v24 * 2.328306437080797e-10); /*0x5a817b*/
          }
          while ( v14 > v13 ); /*0x5a817f*/
          v15 = CellStruct::Set(&v28, 0, 0); /*0x5a8187*/
        }
        while ( CellStruct::Equals((unsigned short *)g_MapTileArray + 40 * v14, v15) ); /*0x5a819b*/
        ++v12; /*0x5a81af*/
        v23 = *((unsigned int *)g_MapTileArray + 20 * v14); /*0x5a81b9*/
        if ( v12 > 200 ) /*0x5a81bd*/
        {
          v22 = 0; /*0x5a81e4*/
          v17 = 0; /*0x5a81ee*/
          goto LABEL_19; /*0x5a81f2*/
        }
        v16 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v23); /*0x5a81c9*/
        if ( Cell::IsEmpty(v16) ) /*0x5a81d0*/
          break; /*0x5a81d0*/
        v11 = unk_89C2DC; /*0x5a81d9*/
      }
      v17 = v23; /*0x5a81f4*/
LABEL_19:
      IDA_LODWORD(v24) = v17; /*0x5a81fc*/
      v19 = v17; /*0x5a8201*/
      if ( ++v20 >= 20 ) /*0x5a820c*/
        break; /*0x5a820c*/
      v11 = unk_89C2DC; /*0x5a8213*/
      if ( !*((unsigned char *)g_MapTileArray + 80 * (int16_t)v17 + 80 * unk_89C2DC * SWORD1(v24) + 69) ) /*0x5a822f*/
      {
        v31[0] = (int16_t)v17 - 4; /*0x5a823f*/
        v31[1] = SWORD1(v24) - 4; /*0x5a8243*/
        v31[2] = 8; /*0x5a8253*/
        v31[3] = 8; /*0x5a8257*/
        if ( !IsAreaClearMap(v31, 0, 0) || !LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (int16_t *)&v19, 1) ) /*0x5a8274*/
          goto LABEL_8; /*0x5a827b*/
        break; /*0x5a827b*/
      }
    }
    if ( v20 != 20 ) /*0x5a8286*/
    {
      v18 = v27; /*0x5a8288*/
      if ( ScheduleMapSeedBuildings(&v19) ) /*0x5a8293*/
      {
        ScatterMapSeedBuildings(v18, (int16_t *)&v19); /*0x5a82a3*/
        PlaceNeutralCreeps(&v19); /*0x5a82af*/
        ++v21; /*0x5a82b4*/
      }
    }
    result = ++v25; /*0x5a82bc*/
  }
  while ( v25 < 10 ); /*0x5a82c4*/
  return result; /*0x5a82ca*/

}
}
// 0x5B9C90
namespace gamemd {
AbstractClass * * RandomMap::RegenerateRandomMapPreview()
{

  void *v2; // esi
  HWND DlgItem; // eax
  char v4; // bl
  int v5; // esi
  char *v6; // eax
  char *v7; // edi
  wchar_t *v8; // eax
  wchar_t *v9; // ebx
  int v10; // eax
  char *v11; // eax
  unsigned int *v12; // eax
  char v13; // bl
  void *v14; // eax
  void *v15; // eax
  unsigned int v17[22]; // [esp+8h] [ebp-6Ch] BYREF
  unsigned char v18[12]; // [esp+60h] [ebp-14h] BYREF
  int v19; // [esp+6Ch] [ebp-8h]

  Debug::Log(); /*0x5b9c9f*/
  g_abs_8316D4 = 0; /*0x5b9cac*/
  if ( CCFileClass::Load(&loc_5BB260) == 1 ) /*0x5b9cbb*/
  {
    g_abs_8316D4 = 1; /*0x5b9ccd*/
    MapSeed::ValidateName(aRandmapSed); /*0x5b9cd2*/
    v2 = g_abs_AC1154; /*0x5b9cd7*/
    if ( g_abs_AC1154 ) /*0x5b9cdf*/
    {
      ComPtr::Dtor(g_abs_AC1154); /*0x5b9ce3*/
      RA2_OPDEL(v2); /*0x5b9ce9*/
      g_abs_AC1154 = 0; /*0x5b9cf1*/
    }
    DlgItem = GetDlgItem(*(HWND *)this, 1448); /*0x5b9d03*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&word_ABE050); /*0x5b9d16*/
    v4 = 0; /*0x5b9d21*/
    v5 = 0; /*0x5b9d23*/
    if ( g_abs_A8B8D8 > 0 ) /*0x5b9d27*/
    {
      while ( _strcmpi((const void *)(*(unsigned int *)(g_abs_A8B8CC + 4 * v5) + 88), aRandmapSed) ) /*0x5b9d44*/
      {
        if ( ++v5 >= g_abs_A8B8D8 ) /*0x5b9d4e*/
          goto LABEL_9; /*0x5b9d4e*/
      }
      v4 = 1; /*0x5b9d52*/
    }
LABEL_9:
    v6 = GameConfig::ComputeCRC(); /*0x5b9d54*/
    v7 = v6; /*0x5b9d5b*/
    if ( v4 ) /*0x5b9d5d*/
    {
      GameOption::SetDigest(v6); /*0x5b9df6*/
      GameOption::SetDescriptionWStr(*(wchar_t **)(g_abs_A8B8CC + 4 * v5), &word_ABE050); /*0x5b9e08*/
    }
    else
    {
      v8 = (wchar_t *)RA2_OPNEW(0x1BCu); /*0x5b9d68*/
      if ( v8 ) /*0x5b9d72*/
        v9 = SessionClass::ParseGameInfo(v8, aRandmapSed, &word_ABE050, v7, 1, 0, 2, 4); /*0x5b9d8e*/
      else
        v9 = 0; /*0x5b9d92*/
      if ( g_abs_A8B8D8 < g_abs_A8B8D0 /*0x5b9dcb*/
        || (g_abs_A8B8D5 || !g_abs_A8B8D0)
        && g_abs_A8B8DC > 0
        && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A8B8C8 + 8))(
             &g_abs_A8B8C8,
             g_abs_A8B8D0 + g_abs_A8B8DC,
             0) )
      {
        v10 = g_abs_A8B8D8++; /*0x5b9dd8*/
        *(unsigned int *)(g_abs_A8B8CC + 4 * v10) = v9; /*0x5b9de7*/
      }
    }
    RA2_OPDEL(v7); /*0x5b9e0e*/
    if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
    {
      g_abs_A8B254 = v5; /*0x5b9e2f*/
      v11 = (char *)g_abs_A8B230; /*0x5b9e3b*/
      strcpy(&g_abs_A8B8E0, aRandmapSed); /*0x5b9e51*/
      strcpy(v11 + 4700, &g_abs_A8B8E0); /*0x5b9e79*/
      v12 = CCFileClass::Construct(v17, &g_abs_A8B8E0); /*0x5b9e86*/
      v13 = (*(int (**)(unsigned int *, unsigned int))(*v12 + 20))(v12, 0); /*0x5b9e98*/
      v17[0] = &vt_CCFileClass; /*0x5b9e9a*/
      v19 = 0; /*0x5b9ea2*/
      Vector::Clear((int)v18); /*0x5b9eaa*/
      v17[0] = &off_7E1668; /*0x5b9eb3*/
      BufferIOFileClass::Dtor(v17); /*0x5b9ebb*/
      if ( v13 ) /*0x5b9ec2*/
      {
        v14 = RA2_OPNEW(4u); /*0x5b9ec6*/
        if ( v14 ) /*0x5b9ed0*/
          v15 = (void *)unknown_libname_27(v14); /*0x5b9ed4*/
        else
          v15 = 0; /*0x5b9edb*/
        g_abs_AC1154 = v15; /*0x5b9ee4*/
        Surface::LoadToSurfaceSHP((char **)v15, stru_829ABC); /*0x5b9ee9*/
        PostMessageA(*(HWND *)this, 0xFu, 0, 0); /*0x5b9efb*/
      }
    }
    *((unsigned char *)this + 9) = 1; /*0x5b9f07*/
  }
  g_abs_8316D4 = 1; /*0x5b9f10*/
  Debug::Log(); /*0x5b9f17*/

}
}
// 0x6558D0
namespace gamemd {
unsigned int * RandomMap::PlaceTileSet()
{

  unsigned int *v1; // ebp
  unsigned int *result; // eax
  unsigned int *v3; // esi
  int v4; // ebx
  unsigned int *v5; // eax
  unsigned int *v6; // ebp
  unsigned int *v7; // eax
  int v8; // ecx
  unsigned int *v9; // eax
  int v10; // ecx

  v1 = this; /*0x6558d4*/
  result = RA2_OPNEW(0x10u); /*0x6558dc*/
  v3 = result; /*0x6558e1*/
  v4 = 0; /*0x6558e3*/
  if ( result ) /*0x6558ea*/
  {
    result[1] = Radar::PixelIndex; /*0x6558fb*/
    result[2] = 256; /*0x655902*/
    result[3] = 10; /*0x655909*/
    v5 = RA2_OPNEW(0x1804u); /*0x65590c*/
    if ( v5 ) /*0x655916*/
    {
      v6 = v5 + 1; /*0x655918*/
      *v5 = 256; /*0x65591b*/
      v7 = v5 + 1; /*0x655921*/
      v8 = 256; /*0x655923*/
      do /*0x65594c*/
      {
        v7[1] = 0; /*0x65592a*/
        v7[2] = 0; /*0x65592d*/
        *((unsigned char *)v7 + 12) = 1; /*0x655930*/
        *((unsigned char *)v7 + 13) = 0; /*0x655933*/
        *v7 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x655936*/
        *v7 = &vt_DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x65593c*/
        v7[5] = 10; /*0x655942*/
        v7[4] = 0; /*0x655945*/
        v7 += 6; /*0x655948*/
        --v8; /*0x65594b*/
      }
      while ( v8 ); /*0x65594c*/
      v9 = v6; /*0x65594e*/
      v1 = this; /*0x655950*/
    }
    else
    {
      v9 = 0; /*0x655956*/
    }
    v10 = v3[2]; /*0x655958*/
    *v3 = v9; /*0x65595b*/
    result = 0; /*0x65595d*/
    if ( v10 > 0 ) /*0x655961*/
    {
      do /*0x655972*/
      {
        result = (unsigned int *)((char *)result + 1); /*0x655965*/
        *(unsigned int *)(v4 + *v3 + 20) = 10; /*0x655966*/
        v4 += 24; /*0x65596d*/
      }
      while ( (int)result < v3[2] ); /*0x655972*/
    }
    v1[1174] = v3; /*0x655974*/
  }
  else
  {
    v1[1174] = 0; /*0x655980*/
  }
  return result; /*0x65597b*/

}
}
// 0x74EF10
namespace gamemd {
int RandomMap::RemoveMatching(IUnknown * aP1)
{

  IUnknown *v2; // ebp
  int VeinholeMonsterClass_field_0x28; // eax
  VeinholeMonsterClass *v4; // ebx
  signed int i; // esi
  unsigned char *NeighbourContent; // eax
  uint8_t v7; // al
  bool v8; // cl
  signed int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  int *v12; // edi
  int v13; // esi
  int *v14; // esi
  int v15; // ecx
  int v16; // eax
  unsigned int **v17; // edi
  int v18; // ebx
  int v19; // edx
  int v20; // edi
  int v21; // ebp
  int v22; // ecx
  int v23; // edi
  int v24; // ecx
  int v25; // edi
  int v26; // ebp
  int v27; // edi
  int v28; // eax
  unsigned int *v29; // esi
  unsigned int v30; // ebp
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // eax
  int j; // [esp+10h] [ebp-1Ch]
  float v39; // [esp+18h] [ebp-14h]
  int v40; // [esp+1Ch] [ebp-10h]
  int v41; // [esp+20h] [ebp-Ch]
  int v42; // [esp+24h] [ebp-8h]
  float aP1a; // [esp+30h] [ebp+4h]

  v2 = aP1; /*0x74ef15*/
  VeinholeMonsterClass_field_0x28 = aP1->field_44; /*0x74ef20*/
  v4 = (VeinholeMonsterClass *)this; /*0x74ef23*/
  if ( VeinholeMonsterClass_field_0x28 == 126 && aP1->__pad_11C[2] >= 0x30u ) /*0x74ef38*/
  {
    for ( i = 0; i < 8; i += 2 ) /*0x74ef3e*/
    {
      NeighbourContent = Cell::GetNeighbourContent(aP1, i); /*0x74ef43*/
      v8 = 0; /*0x74ef5b*/
      if ( *((unsigned int *)NeighbourContent + 17) == 126 ) /*0x74ef4b*/
      {
        v7 = NeighbourContent[286]; /*0x74ef4d*/
        if ( v7 < 0x30u || v7 > 0x33u ) /*0x74ef59*/
          v8 = 1; /*0x74ef4b*/
      }
      v9 = i; /*0x74ef64*/
      *((unsigned char *)&v41 + v9 / 2) = v8; /*0x74ef71*/
    }
    CellClass::ProcessBridgeRepair(aP1); /*0x74ef79*/
    --v4[5].VeinholeMonsterClass_field_0x28; /*0x74ef85*/
    v10 = 0; /*0x74ef8b*/
    for ( j = 0; j < 8; j += 2 ) /*0x74ef8d*/
    {
      v11 = (char *)Cell::GetNeighbourContent(v2, v10); /*0x74ef94*/
      if ( *((unsigned int *)v11 + 17) == -1 ) /*0x74ef9d*/
      {
        v12 = (int *)(v11 + 36); /*0x74efa3*/
        v13 = Cell::PosToIndex((int16_t *)v11 + 18); /*0x74efad*/
        if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() ) /*0x74efba*/
        {
          *(unsigned char *)(v4[4].VeinholeMonsterClass_field_0x14 + v13) = 0; /*0x74efc2*/
          *(unsigned char *)(*(unsigned int *)&stru_B1D188.__pad_164[4] + v13) = 0; /*0x74efcc*/
        }
        if ( *((unsigned char *)&v41 + j / 2) == 1 && !IDA_LOBYTE(v4[5].VeinholeMonsterClass_field_0x24) ) /*0x74efe4*/
        {
          v14 = *(int **)v4[4].__pad_0; /*0x74eff2*/
          v15 = 1; /*0x74effa*/
          v42 = *v12; /*0x74efff*/
          v16 = *v14; /*0x74f003*/
          if ( *v14 < 1 ) /*0x74f007*/
          {
LABEL_39:
            Debug::Log(); /*0x74f138*/
          }
          else
          {
            v40 = v14[2]; /*0x74f010*/
            v17 = (unsigned int **)(v40 + 4); /*0x74f014*/
            while ( **v17 != v42 ) /*0x74f021*/
            {
              ++v15; /*0x74f02e*/
              ++v17; /*0x74f02f*/
              if ( v15 > v16 ) /*0x74f034*/
              {
                v2 = aP1; /*0x74f134*/
                goto LABEL_39; /*0x74f134*/
              }
            }
            if ( v15 == v16 ) /*0x74f03e*/
            {
              *v14 = v16 - 1; /*0x74f041*/
            }
            else
            {
              v18 = *(unsigned int *)(v40 + 4 * v16); /*0x74f04c*/
              v39 = *(float *)(v18 + 4); /*0x74f052*/
              v19 = v15 >> 1; /*0x74f058*/
              *v14 = v16 - 1; /*0x74f05e*/
              if ( v15 == 1 || *(float *)(*(unsigned int *)(v40 + 4 * v19) + 4) < (double)v39 ) /*0x74f071*/
              {
                *(unsigned int *)(v40 + 4 * v15) = v18; /*0x74f0d9*/
                Heap::SiftDown(v14, v15); /*0x74f0df*/
                if ( *v14 >= 1 ) /*0x74f0e9*/
                {
                  v24 = v14[2] + 4; /*0x74f0f1*/
                  v25 = *v14; /*0x74f0f4*/
                  do /*0x74f11b*/
                  {
                    v24 += 4; /*0x74f117*/
                    --v25; /*0x74f11a*/
                  }
                  while ( v25 ); /*0x74f11b*/
                }
              }
              else
              {
                for ( ; (unsigned int)v15 > 1; v19 >>= 1 ) /*0x74f076*/
                {
                  v20 = v14[2]; /*0x74f078*/
                  v21 = *(unsigned int *)(v20 + 4 * v19); /*0x74f07b*/
                  if ( *(float *)(v21 + 4) <= (double)v39 ) /*0x74f08a*/
                    break; /*0x74f08a*/
                  *(unsigned int *)(v20 + 4 * v15) = v21; /*0x74f08c*/
                  v15 = v19; /*0x74f08f*/
                }
                *(unsigned int *)(v14[2] + 4 * v15) = v18; /*0x74f09b*/
                if ( *v14 >= 1 ) /*0x74f0a3*/
                {
                  v22 = v14[2] + 4; /*0x74f0ab*/
                  v23 = *v14; /*0x74f0ae*/
                  do /*0x74f0d5*/
                  {
                    v22 += 4; /*0x74f0d1*/
                    --v23; /*0x74f0d4*/
                  }
                  while ( v23 ); /*0x74f0d5*/
                }
              }
              v4 = (VeinholeMonsterClass *)this; /*0x74f11d*/
            }
            Debug::Log(); /*0x74f126*/
            v2 = aP1; /*0x74f12b*/
          }
        }
      }
      v10 = j + 2; /*0x74f149*/
    }
    v26 = v2->field_44; /*0x74f15d*/
    VeinholeMonsterClass_field_0x28 = Cell::PosToIndex((int16_t *)&aP1->field_24); /*0x74f165*/
    v27 = VeinholeMonsterClass_field_0x28; /*0x74f16a*/
    v41 = VeinholeMonsterClass_field_0x28; /*0x74f16e*/
    if ( VeinholeMonsterClass_field_0x28 >= 0 ) /*0x74f172*/
    {
      VeinholeMonsterClass_field_0x28 = Object::ComputeAllocationSize(); /*0x74f178*/
      if ( v27 < VeinholeMonsterClass_field_0x28 ) /*0x74f17f*/
      {
        if ( v26 == -1 ) /*0x74f188*/
        {
          *(unsigned char *)(v4[4].VeinholeMonsterClass_field_0x14 + v27) = 0; /*0x74f190*/
          *(unsigned char *)(*(unsigned int *)&stru_B1D188.__pad_164[4] + v27) = 0; /*0x74f19a*/
        }
        else
        {
          IDA_LOBYTE(VeinholeMonsterClass_field_0x28) = v4[5].VeinholeMonsterClass_field_0x24; /*0x74f1a8*/
          if ( !(unsigned char)VeinholeMonsterClass_field_0x28 ) /*0x74f1b0*/
          {
            VeinholeMonsterClass_field_0x28 = v4[3].VeinholeMonsterClass_field_0x28; /*0x74f1bc*/
            if ( VeinholeMonsterClass_field_0x28 < *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 220) ) /*0x74f1c8*/
            {
              *(unsigned int *)(v4[4].VeinholeMonsterClass_field_0x04 + 8 * VeinholeMonsterClass_field_0x28) = aP1->field_24; /*0x74f1d6*/
              *(float *)(v4[4].VeinholeMonsterClass_field_0x04 + 8 * v4[3].VeinholeMonsterClass_field_0x28 + 4) = (float)(int)(*(unsigned int *)&HouseClass_Player.__pad_5568[23248] / 50 + abs32(Random::State((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536)) % 50) + 1); /*0x74f22a*/
              v28 = v4[3].VeinholeMonsterClass_field_0x28; /*0x74f22e*/
              v29 = *(unsigned int **)v4[4].__pad_0; /*0x74f23a*/
              v30 = v4[4].VeinholeMonsterClass_field_0x04 + 8 * v28; /*0x74f240*/
              v4[3].VeinholeMonsterClass_field_0x28 = v28 + 1; /*0x74f244*/
              v31 = *v29 + 1; /*0x74f24f*/
              aP1a = *(float *)(v30 + 4); /*0x74f252*/
              v32 = v31 >> 1; /*0x74f259*/
              if ( v31 < v29[1] ) /*0x74f25d*/
              {
                if ( v31 > 1 ) /*0x74f262*/
                {
                  do /*0x74f282*/
                  {
                    v33 = v29[2]; /*0x74f264*/
                    v34 = *(unsigned int *)(v33 + 4 * v32); /*0x74f267*/
                    if ( *(float *)(v34 + 4) <= (double)aP1a ) /*0x74f276*/
                      break; /*0x74f276*/
                    *(unsigned int *)(v33 + 4 * v31) = v34; /*0x74f278*/
                    v31 = v32; /*0x74f27b*/
                    v32 >>= 1; /*0x74f27d*/
                  }
                  while ( v31 > 1 ); /*0x74f282*/
                  v4 = (VeinholeMonsterClass *)this; /*0x74f284*/
                  v27 = v41; /*0x74f288*/
                }
                *(unsigned int *)(v29[2] + 4 * v31) = v30; /*0x74f28f*/
                v35 = v29[3]; /*0x74f294*/
                ++*v29; /*0x74f29a*/
                if ( v30 > v35 ) /*0x74f29c*/
                  v29[3] = v30; /*0x74f29e*/
                if ( v30 < v29[4] ) /*0x74f2a4*/
                  v29[4] = v30; /*0x74f2a6*/
              }
              VeinholeMonsterClass_field_0x28 = v4[4].VeinholeMonsterClass_field_0x14; /*0x74f2a9*/
              *(unsigned char *)(VeinholeMonsterClass_field_0x28 + v27) = 1; /*0x74f2af*/
              *(unsigned char *)(*(unsigned int *)&stru_B1D188.__pad_164[4] + v27) = 1; /*0x74f2b9*/
            }
          }
        }
      }
    }
  }
  return VeinholeMonsterClass_field_0x28; /*0x74f19e*/

}
}
// 0x42F420
namespace gamemd {
void RandomMap::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x42f426*/
  *((unsigned int *)this + 4) = 0; /*0x42f429*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x42f430*/
  {
    RA2_OPDEL(v2); /*0x42f436*/
    *((unsigned int *)this + 1) = 0; /*0x42f43e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x42f441*/
  *((unsigned int *)this + 2) = 0; /*0x42f444*/

}
} // namespace gamemd

// 0x42F450
namespace gamemd {
unsigned int RandomMap::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x42f450*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x42f465*/
  else
    return 0; /*0x42f457*/

}
} // namespace gamemd

// 0x42F470
namespace gamemd {
unsigned int * RandomMap::Seek(unsigned int * a2, int a3)
{

  *a2 = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a3); /*0x42f47e*/
  return a2; /*0x42f480*/

}
} // namespace gamemd

// 0x42F620
namespace gamemd {
char RandomMap::AddRef(int a2)
{

  int v2; // edi
  int v3; // esi
  int v4; // edx
  unsigned short *v5; // eax
  unsigned short *v6; // ecx
  int v7; // edx

  v2 = *((char *)this + 2); /*0x42f627*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x42f62f*/
  {
    v3 = 0; /*0x42f631*/
    if ( v2 <= 0 ) /*0x42f635*/
      return 1; /*0x42f664*/
    v4 = *(unsigned int *)(a2 + 4); /*0x42f637*/
    v5 = (unsigned short *)*((char *)this + 1); /*0x42f63a*/
    v6 = (unsigned short *)(v4 + 2); /*0x42f63d*/
    v7 = v4 - (unsigned int)v5; /*0x42f640*/
    while ( *v5 == *(unsigned short *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x42f652*/
    {
      ++v3; /*0x42f654*/
      v6 += 2; /*0x42f655*/
      v5 += 2; /*0x42f658*/
      if ( v3 >= v2 ) /*0x42f65d*/
        return 1; /*0x42f65d*/
    }
  }
  return 0; /*0x42f65f*/

}
} // namespace gamemd

// 0x42F930
namespace gamemd {
int RandomMap::Read(unsigned short * a2)
{

  int v2; // edx
  int result; // eax
  unsigned short *i; // ecx

  v2 = *((char *)this + 4); /*0x42f930*/
  result = 0; /*0x42f934*/
  if ( v2 <= 0 ) /*0x42f93a*/
    return -1; /*0x42f95d*/
  for ( i = (unsigned short *)*((char *)this + 1); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f940*/
  {
    if ( ++result >= v2 ) /*0x42f95b*/
      return -1; /*0x42f95b*/
  }
  return result; /*0x42f960*/

}
}
// 0x42FBF0
namespace gamemd {
DynamicVector * RandomMap::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x42fbf3*/
  *Block = &vt_VectorClass_Cell; /*0x42fbf6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x42fc00*/
  {
    RA2_OPDEL(v3); /*0x42fc08*/
    *(Block + 1) = 0; /*0x42fc10*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x42fc1b*/
  *(Block + 2) = 0; /*0x42fc21*/
  if ( (Block & 1) != 0 ) /*0x42fc28*/
    RA2_OPDEL(Block); /*0x42fc2b*/
  return (DynamicVector *)Block; /*0x42fc35*/

}
} // namespace gamemd

// 0x58CF90
namespace gamemd {
int RandomMap::GenerateTerrainForAllCells()
{

  int result; // eax
  int v2; // ebx
  int v3; // esi
  int *v4; // edi
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x58cf90*/
  result = unk_89C2DC * unk_89C2DC; /*0x58cf96*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58cf9b*/
  {
    v2 = unk_89C2DC * unk_89C2DC; /*0x58cf9f*/
    result = (int)g_MapTileArray; /*0x58cfa1*/
    v3 = 0; /*0x58cfa7*/
    do /*0x58d002*/
    {
      v5 = *(void **)(v3 + result); /*0x58cfb6*/
      v4 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v5); /*0x58cfbf*/
      result = (int)g_MapTileArray; /*0x58cfc1*/
      if ( *(unsigned int *)((char *)g_MapTileArray + v3 + 56) == -1 /*0x58cfd4*/
        && (*(unsigned short *)((char *)g_MapTileArray + v3) || *(unsigned short *)((char *)g_MapTileArray + v3 + 2)) )
      {
        if ( Cell::IsGroundTypeRange(v4) || Cell::IsShore(v4) ) /*0x58cfe9*/
          RandomMap::GenerateTerrain((int)v4); /*0x58cff4*/
        result = (int)g_MapTileArray; /*0x58cff9*/
      }
      v3 += 80; /*0x58cffe*/
      --v2; /*0x58d001*/
    }
    while ( v2 ); /*0x58d002*/
  }
  return result; /*0x58d008*/

}
} // namespace gamemd

// 0x5AC290
namespace gamemd {
unsigned int * RandomMap::Constructor_VectorClass_Cell_(unsigned int * Block, char a2)
{

  void (***v3)(unsigned int, int); // ecx
  int v4; // eax
  void *v5; // eax
  unsigned int *v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (void (***)(unsigned int, int))*Block; /*0x5ac294*/
  if ( v3 ) /*0x5ac298*/
  {
    (**v3)(v3, 1); /*0x5ac29e*/
    *Block = 0; /*0x5ac2a0*/
  }
  v7 = Block; /*0x5ac2b6*/
  v4 = (*(int (**)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v7); /*0x5ac2ba*/
  if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData ) /*0x5ac2d5*/
  {
    do /*0x5ac2ed*/
    {
      ++v4; /*0x5ac2dd*/
      *((unsigned int *)g_RandomMap_TerrainState + v4 - 1) = *((unsigned int *)g_RandomMap_TerrainState + v4); /*0x5ac2e1*/
    }
    while ( v4 < g_RandomMap_TileData ); /*0x5ac2ed*/
  }
  v5 = (void *)*(Block + 11); /*0x5ac2ef*/
  *(Block + 10) = &vt_VectorClass_Cell; /*0x5ac2f2*/
  if ( v5 && *((unsigned char *)Block + 53) ) /*0x5ac2fd*/
  {
    RA2_OPDEL(v5); /*0x5ac305*/
    *(Block + 11) = 0; /*0x5ac30d*/
  }
  *((unsigned char *)Block + 53) = 0; /*0x5ac318*/
  *(Block + 12) = 0; /*0x5ac31e*/
  if ( (Block & 1) != 0 ) /*0x5ac325*/
    RA2_OPDEL(Block); /*0x5ac328*/
  return Block; /*0x5ac332*/

}
} // namespace gamemd

// 0x5AD820
namespace gamemd {
unsigned int * RandomMap::Constructor(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x5ad82b*/
  *((unsigned int *)this + 2) = a2; /*0x5ad82e*/
  *((unsigned char *)this + 12) = 1; /*0x5ad831*/
  *((unsigned char *)this + 13) = 0; /*0x5ad835*/
  *this = &vt_VectorClass_CellClass; /*0x5ad838*/
  if ( a2 ) /*0x5ad83e*/
  {
    if ( a3 ) /*0x5ad846*/
    {
      *((unsigned int *)this + 1) = a3; /*0x5ad848*/
      return this; /*0x5ad84e*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x5ad85d*/
    *((unsigned char *)this + 13) = 1; /*0x5ad860*/
  }
  return this; /*0x5ad84d*/

}
} // namespace gamemd

// 0x5ADA40
namespace gamemd {
unsigned int * RandomMap::Constructor_0(int a2, int a3)
{

  void *v5; // eax

  *((unsigned int *)this + 1) = 0; /*0x5ada4a*/
  *((unsigned int *)this + 2) = a2; /*0x5ada51*/
  *((unsigned char *)this + 12) = 1; /*0x5ada54*/
  *((unsigned char *)this + 13) = 0; /*0x5ada58*/
  *this = &vt_VectorClass_TRect_int; /*0x5ada5c*/
  if ( a2 ) /*0x5ada62*/
  {
    if ( a3 ) /*0x5ada6a*/
    {
      *((unsigned int *)this + 1) = a3; /*0x5ada6d*/
      return this; /*0x5ada78*/
    }
    v5 = RA2_OPNEW(16 * a2); /*0x5ada81*/
    if ( v5 ) /*0x5ada8b*/
    {
      *((unsigned int *)this + 1) = v5; /*0x5ada8e*/
      *((unsigned char *)this + 13) = 1; /*0x5ada95*/
      return this; /*0x5ada9d*/
    }
    *((unsigned char *)this + 13) = 1; /*0x5adaa2*/
    *((unsigned int *)this + 1) = 0; /*0x5adaa6*/
  }
  return this; /*0x5ada76*/

}
} // namespace gamemd

// 0x5ADAB0
namespace gamemd {
unsigned int * RandomMap::Constructor_1(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x5adabb*/
  *((unsigned int *)this + 2) = a2; /*0x5adabe*/
  *((unsigned char *)this + 12) = 1; /*0x5adac1*/
  *((unsigned char *)this + 13) = 0; /*0x5adac5*/
  *this = &vt_VectorClass_double; /*0x5adac8*/
  if ( a2 ) /*0x5adace*/
  {
    if ( a3 ) /*0x5adad6*/
    {
      *((unsigned int *)this + 1) = a3; /*0x5adad8*/
      return this; /*0x5adade*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(8 * a2); /*0x5adaed*/
    *((unsigned char *)this + 13) = 1; /*0x5adaf0*/
  }
  return this; /*0x5adadd*/

}
} // namespace gamemd
