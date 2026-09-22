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

// 0x486790
namespace gamemd {
void RandomMap::Check()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->q038; /*0x486790*/
  return v1 >= unk_AA0E24 && v1 < unk_AA0E24 + 16; /*0x4867a6*/
}
}
} // namespace gamemd

// 0x58BF70
namespace gamemd {
unsigned int * RandomMap::TerrainTileDataConstructor(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool IsGroundTypeRange; // al

  *this = 0; /*0x58bf7a*/
  this->Items = 0; /*0x58bf7c*/
  this->q008 = g_MapTileArrayEnd; /*0x58bf8a*/
  this->q00C = 0; /*0x58bf8d*/
  this->q010 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2) + 283); /*0x58bfa6*/
  int * v3 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2); /*0x58bfa9*/
  IsGroundTypeRange = Cell::IsGroundTypeRange(v3); /*0x58bfb0*/
  int v5 = a2; /*0x58bfb5*/
  this->q014 = IsGroundTypeRange; /*0x58bfb9*/
  *(_DWORD *)((char *)this + 22) = v5; /*0x58bfbe*/
  *((_BYTE *)this + 26) = 0; /*0x58bfc1*/
  *((_BYTE *)this + 27) = 1; /*0x58bfc4*/
  this->q01C = 0; /*0x58bfc7*/
  this->q020 = 0; /*0x58bfca*/
  this->q024 = 0; /*0x58bfcd*/
  this->q02C = 0; /*0x58bfd0*/
  this->q030 = 0; /*0x58bfd3*/
  this->q034 = 1; /*0x58bfd6*/
  *((_BYTE *)this + 53) = 0; /*0x58bfd9*/
  this->q028 = &vt_DynamicVectorClass_Cell; /*0x58bfdc*/
  this->q03C = 10; /*0x58bfe3*/
  this->q038 = 0; /*0x58bfea*/
  this->q040 = 0; /*0x58bfed*/
  this->__pad_044 = 0; /*0x58bff0*/
  this->q048 = 0; /*0x58bff3*/
  this->__pad_04C = 0; /*0x58bff6*/
  this->q03C = 100000; /*0x58bff9*/
  ++g_MapTileArrayEnd; /*0x58c014*/
  if ( g_RandomMap_TileData < dword_ABDF98 /*0x58c041*/
    || (byte_ABDF9D || !dword_ABDF98)
    && dword_ABDFA4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_RandomMap_BuildObject + 8))(
         &g_RandomMap_BuildObject,
         dword_ABDF98 + dword_ABDFA4,
         0) )
  {
    int v6 = g_RandomMap_TileData++; /*0x58c04e*/
    *((_DWORD *)g_RandomMap_TerrainState + v6) = this; /*0x58c05d*/
  }
  return this; /*0x58c062*/
}
}
} // namespace gamemd

// 0x58C800
namespace gamemd {
void RandomMap::GenerateTerrain()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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
  _BYTE *v22; // esi
  int *v23; // eax
  int v24; // esi
  int j; // eax
  char *v26; // ecx
  char v27; // cl
  int v29; // edx
  __int16 v30; // bp
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
  RandomMap *v49; // [esp+24h] [ebp-30h]
  int v50; // [esp+28h] [ebp-2Ch] BYREF
  double v51; // [esp+2Ch] [ebp-28h]
  __int64 v52; // [esp+34h] [ebp-20h] BYREF
  void **v53; // [esp+3Ch] [ebp-18h] BYREF
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  char v56; // [esp+49h] [ebp-Bh]
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]
  v49 = this; /*0x58c816*/
  v46 = g_MapTileArrayEnd; /*0x58c81a*/
  VectorClass::CellConstructor(&v53, 0, 0); /*0x58c81e*/
  int v2 = this->RandomMap_field_0x24; /*0x58c823*/
  v53 = &vt_DynamicVectorClass_Cell; /*0x58c826*/
  v57 = 0; /*0x58c832*/
  v58 = 50000; /*0x58c838*/
  if ( v55 > 0 || (v56 || !v55) && (unsigned __int8)VectorClass::ResizeEx(v55 + 50000, 0) ) /*0x58c859*/
  {
    int v3 = v57++; /*0x58c867*/
    *(_DWORD *)(v54 + 4 * v3) = v2; /*0x58c872*/
  }
  if ( Cell::IsGroundTypeRange((int *)this) || (LOBYTE(v47) = 0, Cell::IsShore((int *)this)) ) /*0x58c882*/
    LOBYTE(v47) = 1; /*0x58c890*/
  v50 = *(char *)(this + 283); /*0x58c89c*/
  int v4 = v57; /*0x58c8a0*/
  v48 = 0; /*0x58c8a6*/
  if ( v57 ) /*0x58c8aa*/
  {
    do /*0x58ca9c*/
    {
      v44 = *(_DWORD *)(v54 + 4 * v4 - 4); /*0x58c8b8*/
      if ( v4 - 1 < v4 ) /*0x58c8c1*/
        v57 = v4 - 1; /*0x58c8c7*/
      v5 = v46; /*0x58c8f4*/
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v44 + 20 * unk_89C2DC * SHIWORD(v44) + 15) = v46; /*0x58c906*/
      if ( g_MapTileArray ) /*0x58c912*/
        *((_DWORD *)g_MapTileArray + 20 * (__int16)v44 + 20 * unk_89C2DC * SHIWORD(v44) + 14) = v5; /*0x58c92d*/
      for ( i = 0; i < 8; ++i ) /*0x58c931*/
      {
        LODWORD(v51) = *CellStruct::Add(&v44, &v52, (_WORD *)(4 * (i & 7) + 9041544)); /*0x58c956*/
        v45 = LODWORD(v51); /*0x58c95a*/
        v7 = g_MapCellHeight_Value; /*0x58c968*/
        v8 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58c97d*/
        v9 = SWORD1(v51) + SLOWORD(v51); /*0x58c97f*/
        if ( v9 > g_MapCellHeight_Value /*0x58c9bf*/
          && SLOWORD(v51) - SWORD1(v51) < g_MapCellHeight_Value
          && SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v9 <= g_MapCellCount
          && *((_DWORD *)v8 + 14) == -1
          && *((_DWORD *)v8 + 15) != v46 )
        {
          *((_DWORD *)v8 + 15) = v46; /*0x58c9c5*/
          v10 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v45); /*0x58c9d2*/
          if ( v10[283] == v50 ) /*0x58c9e2*/
          {
            v11 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v45); /*0x58c9f2*/
            v13 = 1; /*0x58ca20*/
            if ( !Cell::IsGroundTypeRange(v11) ) /*0x58c9f9*/
            {
              v12 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v45); /*0x58ca0c*/
              if ( !Cell::IsShore(v12) ) /*0x58ca13*/
                v13 = 0; /*0x58c9f9*/
            }
            if ( v13 == (unsigned __int8)v47 /*0x58ca60*/
              && (v57 < v55
               || (v56 || !v55)
               && v58 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v53[2])(&v53, v58 + v55, 0)) )
            {
              v14 = v57++; /*0x58ca6f*/
              *(_DWORD *)(v54 + 4 * v14) = v45; /*0x58ca7a*/
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
  if ( !(_BYTE)v47 ) /*0x58cabb*/
  {
    v16 = 0; /*0x58cac5*/
    if ( v46 ) /*0x58cac9*/
    {
      v29 = v49->q024; /*0x58cca4*/
      LODWORD(v51) = v29; /*0x58cca9*/
      HIWORD(v48) = HIWORD(v29); /*0x58ccb3*/
      LOWORD(v48) = v29 - 1; /*0x58ccb8*/
      v30 = v29 - 1; /*0x58ccbd*/
      v31 = (__int16)(v29 - 1); /*0x58ccc1*/
      v32 = SHIWORD(v29) + v31; /*0x58cccb*/
      if ( v32 <= v7 || v31 - SWORD1(v51) >= v7 || SWORD1(v51) - v31 >= v7 || v32 > g_MapCellCount ) /*0x58cce6*/
      {
        LODWORD(v52) = v29; /*0x58cce8*/
        v48 = v29 - 0x10000; /*0x58ccf6*/
        v30 = v29; /*0x58ccfb*/
      }
      v33 = v30 + SHIWORD(v48); /*0x58cd0b*/
      if ( v33 > v7 && v30 - SHIWORD(v48) < v7 && SHIWORD(v48) - v30 < v7 && v33 <= g_MapCellCount ) /*0x58cd34*/
      {
        if ( g_MapTileArray ) /*0x58cd44*/
          v34 = *((_DWORD *)g_MapTileArray + 20 * v30 + 20 * unk_89C2DC * SHIWORD(v48) + 14); /*0x58cd5a*/
        else
          v34 = -1; /*0x58cd46*/
        v35 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v48) + 283); /*0x58cd6d*/
        LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x58cd79*/
        Bit = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x58cd83*/
        if ( Bit ) /*0x58cd8a*/
        {
          v37 = v46; /*0x58cd90*/
          do /*0x58cdef*/
          {
            LODWORD(v51) = *(_DWORD *)(Bit + 36); /*0x58cd97*/
            v38 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58cdb8*/
            if ( *((_DWORD *)v38 + 14) == v37 ) /*0x58cdbd*/
            {
              *((_DWORD *)v38 + 14) = v34; /*0x58cdbf*/
              v38[75] = 0; /*0x58cdc2*/
              *(_DWORD *)(Bit + 56) = 0; /*0x58cdc6*/
              *(_BYTE *)(Bit + 282) = 0; /*0x58cdc9*/
              v39 = dword_ABE2E4; /*0x58cdd0*/
              if ( v35 != -1 ) /*0x58cdd9*/
                v39 = v35; /*0x58cddb*/
              *(_BYTE *)(Bit + 283) = v39; /*0x58cddd*/
            }
            Bit = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x58cde8*/
          }
          while ( Bit ); /*0x58cdef*/
        }
        goto LABEL_63; /*0x58cdef*/
      }
      goto LABEL_84; /*0x58cd34*/
    }
    v17 = RandomMap::CellListAlloc(0); /*0x58cadc*/
    v45 = v17; /*0x58cae2*/
    v18 = *(_DWORD *)(v17 + 16) - 1; /*0x58cae9*/
    v52 = *(unsigned int *)(v17 + 16); /*0x58caed*/
    v51 = (double)v52; /*0x58caf5*/
    do /*0x58cb20*/
    {
      v52 = (unsigned int)Random::State(&g_Randomizer); /*0x58cb03*/
      v19 = Math::RoundToInt((double)v52 * v51 * 2.328306437080797e-10); /*0x58cb19*/
    }
    while ( v19 > v18 ); /*0x58cb20*/
    v20 = 0; /*0x58cb25*/
    v46 = *(_DWORD *)(*(_DWORD *)(v17 + 4) + 4 * v19); /*0x58cb2a*/
    while ( 1 ) /*0x58cb51*/
    {
      LODWORD(v51) = *CellStruct::Add(&v46, &v52, (_WORD *)(4 * (v20 & 7) + 9041544)); /*0x58cb51*/
      v48 = LODWORD(v51); /*0x58cb55*/
      v21 = SWORD1(v51) + SLOWORD(v51); /*0x58cb61*/
      if ( v21 > g_MapCellHeight_Value ) /*0x58cb66*/
      {
        if ( SLOWORD(v51) - SWORD1(v51) < g_MapCellHeight_Value /*0x58cb7c*/
          && SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v21 <= g_MapCellCount )
        {
          v22 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v48); /*0x58cb91*/
          if ( v22[283] != *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v46) + 283) ) /*0x58cbac*/
          {
            v23 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v48); /*0x58cbb8*/
            if ( !Cell::IsGroundTypeRange(v23) ) /*0x58cbc6*/
            {
              v24 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v48) + 283); /*0x58cbea*/
              LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x58cbf6*/
              for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x58cc09*/
                    j;
                    j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
              {
                LODWORD(v51) = *(_DWORD *)(j + 36); /*0x58cc17*/
                v26 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58cc32*/
                if ( !*((_DWORD *)v26 + 14) ) /*0x58cc34*/
                {
                  *((_DWORD *)v26 + 14) = -1; /*0x58cc39*/
                  v26[75] = 0; /*0x58cc3c*/
                  *(_DWORD *)(j + 56) = 0; /*0x58cc40*/
                  *(_BYTE *)(j + 282) = 0; /*0x58cc43*/
                  v27 = dword_ABE2E4; /*0x58cc4a*/
                  if ( v24 != -1 ) /*0x58cc52*/
                    v27 = v24; /*0x58cc54*/
                  *(_BYTE *)(j + 283) = v27; /*0x58cc56*/
                }
              }
              v17 = v45; /*0x58cc6a*/
              v16 = 1; /*0x58cc6e*/
LABEL_60:
              if ( v17 ) /*0x58cc72*/
                (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x58cc7b*/
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
  if ( __2_YAPAXI_Z(0x50u) ) /*0x58cdf8*/
    v40 = RandomMap::TerrainTileDataConstructor(v49->q024); /*0x58ce13*/
  else
    v40 = 0; /*0x58ce17*/
  v41 = v47; /*0x58ce1d*/
  *(_DWORD *)(v40 + 16) = v50; /*0x58ce21*/
  *(_BYTE *)(v40 + 20) = v41; /*0x58ce24*/
  *(_DWORD *)(v40 + 12) = 0; /*0x58ce27*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58ce38*/
  {
    v42 = 0; /*0x58ce3c*/
    v43 = unk_89C2DC * unk_89C2DC; /*0x58ce3e*/
    do /*0x58ce71*/
    {
      if ( *(_DWORD *)((char *)g_MapTileArray + v42 + 56) == *(_DWORD *)(v40 + 8) ) /*0x58ce50*/
      {
        v50 = 0; /*0x58ce56*/
        if ( (unsigned __int8)Coord::Compare2D(&v50) ) /*0x58ce61*/
          ++*(_DWORD *)(v40 + 12); /*0x58ce6a*/
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
} // namespace gamemd

// 0x58D1C0
namespace gamemd {
void RandomMap::ExpandTerrainCells(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // esi
  __int16 v16; // cx
  int j; // [esp+1Ch] [ebp-Ch]

  result = (int)RandomMap::TerrainAlloc(this); /*0x58d1c9*/
  int v4 = a2; /*0x58d1ce*/
  int v5 = result; /*0x58d1d2*/
  int v25 = result; /*0x58d1d7*/
  if ( a2 > 1 ) /*0x58d1db*/
  {
    int v6 = unk_89C2DC * unk_89C2DC; /*0x58d1e3*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d1e8*/
    {
      result = 0; /*0x58d1ea*/
      do /*0x58d1fe*/
      {
        result += 80; /*0x58d1f2*/
        --v6; /*0x58d1f5*/
        *(_DWORD *)((char *)g_MapTileArray + result - 20) = -1; /*0x58d1f6*/
      }
      while ( v6 ); /*0x58d1fe*/
    }
  }
  int v7 = 0; /*0x58d201*/
  int v26 = 0; /*0x58d205*/
  if ( a2 > 0 ) /*0x58d209*/
  {
    do /*0x58d3c5*/
    {
      for ( i = *(_DWORD *)(v5 + 16) - 1; i >= 0; --i ) /*0x58d214*/
      {
        result = *(_DWORD *)(v5 + 4); /*0x58d216*/
        int v9 = *(_DWORD *)(result + 4 * i); /*0x58d221*/
        if ( g_MapTileArray ) /*0x58d228*/
        {
          result = 80 * ((__int16)v9 + unk_89C2DC * SHIWORD(v9)); /*0x58d242*/
          *(_DWORD *)((char *)g_MapTileArray + result + 56) = a3; /*0x58d245*/
        }
      }
      if ( v7 < v4 - 1 ) /*0x58d251*/
      {
        _DWORD * v10 = __2_YAPAXI_Z(0x18u); /*0x58d259*/
        _DWORD * v11 = v10; /*0x58d25e*/
        _DWORD * v12 = 0; /*0x58d260*/
        if ( v10 ) /*0x58d267*/
        {
          VectorClass::CellConstructor(v10, 0, 0); /*0x58d26d*/
          v11[4] = 0; /*0x58d272*/
          *v11 = &vt_DynamicVectorClass_Cell; /*0x58d275*/
          v11[5] = 10; /*0x58d27b*/
          v12 = v11; /*0x58d282*/
        }
        v12[5] = *(_DWORD *)(v5 + 16); /*0x58d287*/
        result = *(_DWORD *)(v5 + 16) - 1; /*0x58d28d*/
        int v30 = result; /*0x58d28e*/
        if ( result >= 0 ) /*0x58d292*/
        {
          int v13 = g_MapCellHeight_Value; /*0x58d298*/
          do /*0x58d39d*/
          {
            int v14 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * result); /*0x58d2a1*/
            char v15 = 0; /*0x58d2a4*/
            int v27 = v14; /*0x58d2a6*/
            for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
            {
              v16 = HIWORD(v27) + HIWORD(Direction_X_Offsets[v15 & 7]); /*0x58d2c4*/
  int v28; // [esp+18h] [ebp-10h]
              LOWORD(v28) = LOWORD(Direction_X_Offsets[v15 & 7]) + v27; /*0x58d2c9*/
              int v17 = v16; /*0x58d2d1*/
              HIWORD(v28) = v16; /*0x58d2d4*/
              int v18 = v16 + (__int16)v28; /*0x58d2d9*/
              if ( v18 > v13 && (__int16)v28 - v17 < v13 && v17 - (__int16)v28 < v13 && v18 <= g_MapCellCount ) /*0x58d302*/
              {
                char * v19 = (char *)g_MapTileArray + 80 * (__int16)v28 + 80 * unk_89C2DC * v17; /*0x58d31f*/
                if ( *((_DWORD *)v19 + 14) == this->q008 ) /*0x58d326*/
                {
                  if ( *((_DWORD *)v19 + 15) != v26 + 1 ) /*0x58d334*/
                  {
                    int v20 = v12[2]; /*0x58d336*/
                    if ( v12[4] < v20 /*0x58d35b*/
                      || (*((_BYTE *)v12 + 13) || !v20)
  int v21; // eax
                      && (v21 = v12[5], v21 > 0)
                      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v12 + 8))(v12, v20 + v21, 0) )
                    {
                      int v22 = v12[4]; /*0x58d362*/
                      int v23 = v12[1]; /*0x58d365*/
                      v12[4] = v22 + 1; /*0x58d36b*/
                      *(_DWORD *)(v23 + 4 * v22) = v28; /*0x58d372*/
                    }
                    *((_DWORD *)v19 + 15) = v26 + 1; /*0x58d375*/
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
          result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x58d3b2*/
        v25 = (int)v12; /*0x58d3b4*/
        v5 = (int)v12; /*0x58d3b8*/
        v4 = a2; /*0x58d3ba*/
      }
      v26 = ++v7; /*0x58d3c1*/
    }
    while ( v7 < v4 ); /*0x58d3c5*/
  }
  if ( v5 ) /*0x58d3cf*/
    result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x58d3d8*/
  if ( v4 > 1 ) /*0x58d3df*/
  {
    int v24 = unk_89C2DC * unk_89C2DC; /*0x58d3e7*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d3ec*/
    {
      result = 0; /*0x58d3ee*/
      do /*0x58d402*/
      {
        result += 80; /*0x58d3f6*/
        --v24; /*0x58d3f9*/
        *(_DWORD *)((char *)g_MapTileArray + result - 20) = -1; /*0x58d3fa*/
      }
      while ( v24 ); /*0x58d402*/
    }
  }
  return result; /*0x58d3da*/
}
}
} // namespace gamemd

// 0x58D410
namespace gamemd {
unsigned int * RandomMap::TerrainAlloc()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v3; // ebx
  _DWORD *Bit; // ebp
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
  _DWORD *v17; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  _DWORD * v1 = __2_YAPAXI_Z(0x18u); /*0x58d41c*/
  _DWORD * v2 = v1; /*0x58d421*/
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
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x58d458*/
  Bit = (_DWORD *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x58d467*/
  if ( !Bit ) /*0x58d46b*/
    return v3; /*0x58d592*/
  do
  {
    v5 = Bit[9]; /*0x58d478*/
    if ( g_MapTileArray ) /*0x58d481*/
      v6 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v5 + 20 * unk_89C2DC * SHIWORD(v5) + 14); /*0x58d49f*/
    else
      v6 = -1; /*0x58d483*/
    if ( v6 == this->q008 )
    {
      v16 = 0; /*0x58d4b0*/
      for ( i = 0; i < 8; ++i )
      {
        v19 = *((_DWORD *)Cell::GetNeighbourContent(Bit, i) + 9); /*0x58d4c8*/
        v8 = SHIWORD(v19) + (__int16)v19; /*0x58d4d4*/
        if ( v8 > g_MapCellHeight_Value )
        {
          if ( (__int16)v19 - SHIWORD(v19) < g_MapCellHeight_Value
            && SHIWORD(v19) - (__int16)v19 < g_MapCellHeight_Value
            && v8 <= g_MapCellCount )
          {
            v9 = g_MapTileArray
               ? *((_DWORD *)g_MapTileArray + 20 * (__int16)v19 + 20 * unk_89C2DC * SHIWORD(v19) + 14)
               : -1;
            if ( v9 != this->q008 ) /*0x58d51c*/
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
          || (*((_BYTE *)v3 + 13) || !v10)
          && (v12 = v3[5], v12 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v10 + v12, 0) )
        {
          v13 = v3[4]; /*0x58d564*/
          v14 = v3[1]; /*0x58d567*/
          v3[4] = v13 + 1; /*0x58d56d*/
          *(_DWORD *)(v14 + 4 * v13) = v11; /*0x58d570*/
        }
      }
    }
    Bit = (_DWORD *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x58d57d*/
  }
  while ( Bit );
  return v3; /*0x58d588*/
}
}
} // namespace gamemd

// 0x58E740
namespace gamemd {
void RandomMap::CollectTerrainCells(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v9; // dx
  int i; // [esp+24h] [ebp-4h]

  RandomMap *v26 = this; /*0x58e747*/
  _DWORD * v25 = RandomMap::TerrainAlloc(this); /*0x58e750*/
  for ( i = 0; i < a2; ++i ) /*0x58e760*/
  {
  _DWORD *v4; // ebp
    _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x58e768*/
    _DWORD * v3 = v2; /*0x58e76d*/
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
    _DWORD * v5 = v25; /*0x58e795*/
    int v27 = 0; /*0x58e799*/
    v4[5] = 3 * v25[4]; /*0x58e7a3*/
    if ( (int)v5[4] > 0 ) /*0x58e7ab*/
    {
      int v6 = g_MapCellHeight_Value; /*0x58e7b1*/
      while ( 2 ) /*0x58e7b7*/
      {
        int v7 = 0; /*0x58e7b7*/
        while ( 1 ) /*0x58e7d2*/
        {
          _WORD * v8 = (_WORD *)(v5[1] + 4 * v27); /*0x58e7d2*/
          v9 = v8[1] + HIWORD(Direction_X_Offsets[v7 & 7]); /*0x58e7e5*/
  int v28; // [esp+20h] [ebp-8h]
          LOWORD(v28) = LOWORD(Direction_X_Offsets[v7 & 7]) + *v8; /*0x58e7e9*/
          HIWORD(v28) = v9; /*0x58e7ee*/
          int v24 = v28; /*0x58e7f7*/
          int v10 = v9; /*0x58e7fe*/
          int v11 = v9 + (__int16)v28; /*0x58e801*/
          if ( v11 > v6 && (__int16)v28 - v10 < v6 && v10 - (__int16)v28 < v6 && v11 <= g_MapCellCount ) /*0x58e828*/
          {
            char * v12 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v24); /*0x58e838*/
            if ( v12[283] == v26[4] ) /*0x58e84b*/
            {
              char * v13 = (char *)g_MapTileArray + 80 * (__int16)v24 + 80 * unk_89C2DC * SHIWORD(v24); /*0x58e870*/
              int v14 = *((_DWORD *)v13 + 14); /*0x58e872*/
              if ( v14 == -1 /*0x58e8a9*/
  _DWORD *v15; // eax
                && ((v15 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v24), Cell::IsEmpty(v15))
  int *v16; // eax
                 || (v16 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v24), Cell::IsShore(v16))) )
              {
                int v17 = v4[2]; /*0x58e8b2*/
                if ( v4[4] < v17 /*0x58e8d8*/
                  || (*((_BYTE *)v4 + 13) || !v17)
  int v18; // eax
                  && (v18 = v4[5], v18 > 0)
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v17 + v18, 0) )
                {
                  int v19 = v4[4]; /*0x58e8df*/
                  int v20 = v4[1]; /*0x58e8e2*/
                  v4[4] = v19 + 1; /*0x58e8e8*/
                  *(_DWORD *)(v20 + 4 * v19) = v24; /*0x58e8ef*/
                }
                RandomMap *v21 = v26; /*0x58e8f2*/
                *((_DWORD *)v13 + 14) = v26[2]; /*0x58e903*/
                *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v24) + 283) = v21->q010; /*0x58e90e*/
              }
              else if ( v14 != v26[2] ) /*0x58e91d*/
              {
                if ( v25 ) /*0x58e98c*/
                  (*(void (__thiscall **)(_DWORD *, int))*v25)(v25, 1); /*0x58e992*/
                if ( v4 ) /*0x58e996*/
                  (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x58e99f*/
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
        int v22 = v25[4]; /*0x58e938*/
        if ( ++v27 < v22 ) /*0x58e941*/
          continue; /*0x58e941*/
        break;
      }
    }
    if ( v5 ) /*0x58e94b*/
      (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x58e951*/
    v25 = v4; /*0x58e95c*/
  }
  if ( v25 ) /*0x58e972*/
    (*(void (__thiscall **)(_DWORD *, int))*v25)(v25, 1); /*0x58e978*/
  return 1; /*0x58e97a*/
}
}
} // namespace gamemd

// 0x58E9B0
namespace gamemd {
void RandomMap::PlaceRandomMapTerrain()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  int k; // esi
  void **v19; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  char v22; // [esp+2Dh] [ebp-Bh]
  int j; // [esp+30h] [ebp-8h]
  int v24; // [esp+34h] [ebp-4h]
  _DWORD * v1 = RandomMap::TerrainAlloc(this); /*0x58e9c7*/
  VectorClass::CellConstructor(&v19, 0, 0); /*0x58e9c9*/
  int v2 = 50000; /*0x58e9ce*/
  v19 = &vt_DynamicVectorClass_Cell; /*0x58e9d3*/
  j = 0; /*0x58e9db*/
  v24 = 50000; /*0x58e9e3*/
  int v3 = 0; /*0x58e9ea*/
  if ( (int)v1[4] > 0 ) /*0x58e9ee*/
  {
  _DWORD *v5; // edi
    int v4 = v21; /*0x58e9f0*/
    while ( 1 ) /*0x58e9fd*/
    {
      v5 = (_DWORD *)(v1[1] + 4 * v3); /*0x58e9fd*/
      if ( j < v4 ) /*0x58ea06*/
        goto LABEL_9; /*0x58ea06*/
      if ( (v22 || !v4) && v2 > 0 ) /*0x58ea16*/
        break; /*0x58ea16*/
LABEL_11:
      if ( ++v3 >= v1[4] ) /*0x58ea4a*/
        goto LABEL_12; /*0x58ea4a*/
      v2 = v24; /*0x58e9f6*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v19[2])(&v19, v2 + v4, 0) ) /*0x58ea25*/
    {
LABEL_9:
      int v6 = j++; /*0x58ea2c*/
      *((_DWORD *)Block + v6) = *v5; /*0x58ea3d*/
    }
    v4 = v21; /*0x58ea40*/
    goto LABEL_11; /*0x58ea40*/
  }
LABEL_12:
  if ( v1 ) /*0x58ea4e*/
    (*(void (__thiscall **)(_DWORD *, int))*v1)(v1, 1); /*0x58ea56*/
  int v7 = j; /*0x58ea58*/
  for ( i = j; j > 0; i = j ) /*0x58ea60*/
  {
    int v9 = i - 1; /*0x58ea6b*/
    int v10 = *((_DWORD *)Block + v9); /*0x58ea6e*/
    if ( v9 < v7 ) /*0x58ea75*/
    {
      for ( j = v7 - 1; v9 < j; *((_DWORD *)Block + v9 - 1) = *((_DWORD *)Block + v9) ) /*0x58ea7e*/
        ++v9; /*0x58ea84*/
    }
    for ( k = 0; k < 8; ++k ) /*0x58ea99*/
    {
      int v12 = k & 7; /*0x58eaa3*/
  int v17; // [esp+14h] [ebp-24h]
      LOWORD(v17) = v10 + LOWORD(Direction_X_Offsets[v12]); /*0x58eabf*/
      HIWORD(v17) = HIWORD(v10) + HIWORD(Direction_X_Offsets[v12]); /*0x58eac4*/
      int v13 = SHIWORD(v17) + (__int16)v17; /*0x58eacf*/
      if ( v13 > g_MapCellHeight_Value /*0x58eafc*/
        && (__int16)v17 - SHIWORD(v17) < g_MapCellHeight_Value
        && SHIWORD(v17) - (__int16)v17 < g_MapCellHeight_Value
        && v13 <= g_MapCellCount )
      {
        char * v14 = (char *)g_MapTileArray + 80 * (__int16)v17 + 80 * unk_89C2DC * SHIWORD(v17); /*0x58eb13*/
        if ( *((_DWORD *)v14 + 14) == -1 ) /*0x58eb19*/
        {
          if ( v14[75] ) /*0x58eb1b*/
          {
            *((_DWORD *)v14 + 14) = this->q008; /*0x58eb29*/
            if ( j < v21 /*0x58eb57*/
              || (v22 || !v21)
              && v24 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v19[2])(&v19, v24 + v21, 0) )
            {
              int v15 = j++; /*0x58eb66*/
              *((_DWORD *)Block + v15) = v17; /*0x58eb71*/
            }
          }
        }
      }
    }
    v7 = j; /*0x58eb7e*/
  }
  v19 = &vt_VectorClass_Cell; /*0x58eb93*/
  if ( Block && v22 ) /*0x58eba6*/
    __3_YAXPAX_Z(Block); /*0x58eba9*/
  return 1; /*0x58eb91*/
}
}
} // namespace gamemd

// 0x58F0C0
namespace gamemd {
void RandomMap::CollectBorderCells()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v12; // cx
  signed int i; // edi
  _BYTE *Block; // [esp+10h] [ebp-14h]

  RandomMap *v1 = this; /*0x58f0c7*/
  _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x58f0cf*/
  _DWORD * v3 = v2; /*0x58f0d4*/
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
  _BYTE * v4 = __2_YAPAXI_Z(g_MapTileArrayEnd); /*0x58f114*/
  signed int v5 = 0; /*0x58f119*/
  for ( Block = v4; v5 < (int)g_MapTileArrayEnd; ++v5 ) /*0x58f121*/
    v4[v5] = 0; /*0x58f123*/
  _DWORD * v6 = RandomMap::TerrainAlloc(v1); /*0x58f139*/
  int v7 = 0; /*0x58f13b*/
  _DWORD * v29 = v6; /*0x58f13d*/
  int v28 = 0; /*0x58f141*/
  if ( (int)v6[4] > 0 ) /*0x58f14a*/
  {
    int v8 = g_MapCellHeight_Value; /*0x58f150*/
    do /*0x58f1ee*/
    {
      int v9 = 0; /*0x58f159*/
      int v10 = *(_DWORD *)(v6[1] + 4 * v7); /*0x58f15b*/
      do /*0x58f1da*/
      {
        int v11 = v9 & 7; /*0x58f164*/
        v12 = HIWORD(v10) + HIWORD(Direction_X_Offsets[v11]); /*0x58f17d*/
        int v13 = (__int16)(v10 + LOWORD(Direction_X_Offsets[v11])); /*0x58f182*/
        int v14 = v12; /*0x58f185*/
        int v15 = v12 + v13; /*0x58f188*/
        if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MapCellCount ) /*0x58f1a5*/
        {
          if ( g_MapTileArray ) /*0x58f1af*/
          {
            int v16 = *((_DWORD *)g_MapTileArray + 20 * v13 + 20 * unk_89C2DC * v14 + 14); /*0x58f1c0*/
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
      int v18 = v1[1]; /*0x58f212*/
      int v19 = *(_DWORD *)(v18 + 8); /*0x58f215*/
      if ( *(_DWORD *)(v18 + 16) < v19 /*0x58f23a*/
        || (*(_BYTE *)(v18 + 13) || !v19)
  int v20; // eax
        && (v20 = *(_DWORD *)(v18 + 20), v20 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v19 + v20, 0) )
      {
        int v21 = *(_DWORD *)(v18 + 16); /*0x58f241*/
        int v22 = *(_DWORD *)(v18 + 4); /*0x58f244*/
        *(_DWORD *)(v18 + 16) = v21 + 1; /*0x58f24a*/
        *(_DWORD *)(v22 + 4 * v21) = i; /*0x58f24d*/
      }
    }
  }
  int v23 = 0; /*0x58f25a*/
  v1[3] = 0; /*0x58f25c*/
  int v24 = unk_89C2DC * unk_89C2DC; /*0x58f265*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58f26a*/
  {
    int v25 = v1[2]; /*0x58f26c*/
    char * v26 = (char *)g_MapTileArray; /*0x58f26f*/
    do /*0x58f29b*/
    {
      if ( *(_DWORD *)&v26[v23 + 56] == v25 && (*(_WORD *)&v26[v23] || *(_WORD *)&v26[v23 + 2]) ) /*0x58f282*/
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
    (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x58f2a8*/
  __3_YAXPAX_Z(Block); /*0x58f2af*/
}
}
} // namespace gamemd

// 0x58F2C0
namespace gamemd {
void RandomMap::PlaceBuildings(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  __int16 v36; // di
  __int16 v45; // si
  __int16 v46; // di
  __int16 v59[2]; // [esp+30h] [ebp-1E8h] BYREF
  __int16 v61[2]; // [esp+38h] [ebp-1E0h] BYREF
  __int16 v62[2]; // [esp+3Ch] [ebp-1DCh] BYREF
  __int16 v63[2]; // [esp+40h] [ebp-1D8h] BYREF
  __int16 v65[2]; // [esp+48h] [ebp-1D0h] BYREF
  __int16 v66[2]; // [esp+4Ch] [ebp-1CCh] BYREF
  __int16 v68[2]; // [esp+54h] [ebp-1C4h] BYREF
  __int16 v70[2]; // [esp+5Ch] [ebp-1BCh] BYREF
  __int16 v88[2]; // [esp+A4h] [ebp-174h] BYREF
  __int16 v90[2]; // [esp+ACh] [ebp-16Ch] BYREF
  __int16 v92[2]; // [esp+B4h] [ebp-164h] BYREF
  __int16 v93[2]; // [esp+B8h] [ebp-160h] BYREF
  __int16 v95[2]; // [esp+C0h] [ebp-158h] BYREF
  __int16 v97[2]; // [esp+C8h] [ebp-150h] BYREF
  __int16 v101[2]; // [esp+D8h] [ebp-140h] BYREF
  __int16 v103[2]; // [esp+E0h] [ebp-138h] BYREF
  __int16 v126; // [esp+214h] [ebp-4h] BYREF
  int v4 = *(_DWORD *)(a3 + 8);
  int v100 = *(_DWORD *)(a2 + 8);
  int v5 = unk_89C2DC;
  RandomMap *v57 = this;
  int v69 = v4;
  int v64 = 0;
  char v51 = 0;
  while ( 1 )
  {
  double v58; // [esp+28h] [ebp-1F0h]
  int v29; // eax
  int v28; // edx
  int v27; // ecx
  int v24; // eax
  int v23; // ecx
  unsigned int v9; // esi
    result = v51;
    if ( v51 )
      return result;
    int v7 = v5 * v5;
    while ( 1 )
    {
  unsigned int v8; // eax
      __int64 v105 = (unsigned int)v7;
      v58 = (double)(unsigned int)v7;
      do
      {
        __int64 v106 = (unsigned int)Random::State(&g_Randomizer);
        v8 = Math::RoundToInt((double)v106 * v58 * 2.328306437080797e-10);
        v9 = v8;
      }
      while ( v8 > v7 - 1 );
      int v10 = 80 * v8;
      if ( *((_DWORD *)g_MapTileArray + 20 * v8 + 14) == this->q008 )
      {
        _WORD * v11 = CellStruct::Set(&v126, 0, 0);
        if ( !CellStruct::Equals((char *)g_MapTileArray + v10, v11) )
          break;
      }
    }
    LODWORD(v58) = *((_DWORD *)g_MapTileArray + 20 * v9);
    int v76 = SWORD1(v58);
    int v80 = SWORD1(v58);
    int v75 = SLOWORD(v58) - 1;
    int v79 = v75;
    int v84 = SWORD1(v58) - 1;
    int v85 = 1;
    int v72 = v84;
    int v73 = 1;
    int v77 = 3;
    int v78 = 1;
    int v81 = 3;
    int v82 = 1;
    int v83 = SLOWORD(v58);
    int v86 = 3;
    int v71 = SLOWORD(v58);
    int v74 = 3;
    char v50 = 1;
    char v49 = 1;
    if ( IsAreaClearMap(&v75, 0, 0) )
    {
LABEL_15:
  int v110[4]; // [esp+114h] [ebp-104h] BYREF
      v110[0] = v75;
      v110[1] = v76 - 3;
      v110[2] = 3;
      v110[3] = 3;
      if ( IsAreaClearMap(v110, 0, 0) )
      {
        if ( IsAreaClearMap(&v79, 0, 0) )
        {
LABEL_22:
  int v113[4]; // [esp+144h] [ebp-D4h] BYREF
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
            void * v14 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v68);
            void * v15 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v61);
            if ( !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v68, 1)
              || !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v61, 1)
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
        void * v12 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v62);
        void * v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v66);
        if ( !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v62, 1)
          || !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v66, 1)
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
  int v119[4]; // [esp+1A4h] [ebp-74h] BYREF
      v119[0] = v71 - 3;
      v119[1] = v72;
      v119[2] = 3;
      v119[3] = 3;
      if ( IsAreaClearMap(v119, 0, 0) )
      {
        if ( IsAreaClearMap(&v83, 0, 0) )
        {
LABEL_37:
  int v115[4]; // [esp+164h] [ebp-B4h] BYREF
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
            void * v18 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v59);
            void * v19 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v65);
            if ( !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v59, 1)
              || !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v65, 1)
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
        void * v16 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v70);
        void * v17 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v63);
        if ( !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v70, 1)
          || !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, v63, 1)
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
    int v20 = -1;
    LODWORD(v58) = 999;
    int v60 = 999;
    int v21 = -1;
    int v67 = -1;
    int v22 = -1;
    if ( v49 )
    {
      LODWORD(v58) = abs32(v80 - v76);
      if ( g_MapTileArray )
      {
        v20 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v75 + 20 * unk_89C2DC * (__int16)v76 + 14);
        v21 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v79 + 20 * unk_89C2DC * (__int16)v80 + 14);
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
        v67 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v83 + 20 * unk_89C2DC * (__int16)v84 + 14);
        v22 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v71 + 20 * unk_89C2DC * (__int16)v72 + 14);
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
    char v25 = v50;
    if ( v50 )
    {
      if ( v67 == v23 && v22 == v24 || v67 == v24 && v22 == v23 )
      {
        if ( v49 )
        {
          if ( SLODWORD(v58) >= v60 )
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
    int v53 = 0;
    int v54 = 0;
    int v55 = 0;
    int v56 = 0;
    int v26 = v64 / 25 + 8;
    if ( v25 && v60 < v26 )
    {
      v27 = 3;
      v53 = v71;
      v28 = v72;
      v29 = v83 - v71 + 1;
    }
    else
    {
      if ( !v49 || SLODWORD(v58) >= v26 )
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
  unsigned int v39; // eax
  unsigned int v38; // eax
        if ( !(unsigned __int8)Object_Helper(&v53) )
          goto LABEL_129;
        int v30 = v54;
        int v31 = v55;
        int v32 = v54;
        int v33 = v53;
        for ( LODWORD(v58) = v54; v32 < v30 + v56; LODWORD(v58) = v32 )
        {
          int v34 = v31 + v33;
          int v35 = v33;
          if ( v33 < v31 + v33 )
          {
            while ( 1 )
            {
              if ( v35 == v33 )
              {
                v36 = v32;
                v97[0] = v35;
                v97[1] = v32;
                *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v97) + 17) = 94;
              }
              else
              {
                v36 = v32;
                if ( v35 == v34 - 1 )
                {
                  v88[0] = v35;
                  v88[1] = v32;
                  *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v88) + 17) = 92;
                }
                else
                {
                  v90[0] = v35;
                  v90[1] = v32;
                  *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v90) + 17) = v35 % 4 + 74;
                }
              }
              v92[0] = v35;
              v92[1] = v36;
              char v37 = v32 - v54;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v92) + 286) = v37;
              v31 = v55;
              v33 = v53;
              ++v35;
              v34 = v55 + v53;
              if ( v35 >= v55 + v53 )
                break;
              LOWORD(v32) = LOWORD(v58);
            }
            v30 = v54;
            v32 = LODWORD(v58);
          }
          ++v32;
        }
  int v124[4]; // [esp+1F4h] [ebp-24h] BYREF
        v124[0] = v33 + v31;
        v124[1] = v30 - 2;
        v124[2] = 6;
        v124[3] = 6;
        if ( !IsMapClassAreaUniform(v124, 0) )
          goto LABEL_91;
        do
        {
          __int64 v108 = (unsigned int)Random::State(&g_Randomizer);
          v38 = Math::RoundToInt((double)v108 * 4.656612874161595e-10);
        }
        while ( v38 > 1 );
        if ( v38 )
        {
  _WORD v94[2]; // [esp+BCh] [ebp-15Ch] BYREF
          v94[0] = v53 + v55;
          v94[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, v94, -1, -1);
        }
        else
        {
LABEL_91:
  _WORD v89[2]; // [esp+A8h] [ebp-170h] BYREF
          v89[1] = v54;
          v89[0] = v53 + v55;
          PlaceMapSeedClassBuildings(dword_ABBEC4, v89, -1, -1);
        }
  int v117[4]; // [esp+184h] [ebp-94h] BYREF
        v117[0] = v53 - 6;
        v117[1] = v54 - 2;
        v117[2] = 6;
        v117[3] = 6;
        if ( !IsMapClassAreaUniform(v117, 0) )
          goto LABEL_96;
        do
        {
          __int64 v104 = (unsigned int)Random::State(&g_Randomizer);
          v39 = Math::RoundToInt((double)v104 * 4.656612874161595e-10);
        }
        while ( v39 > 1 );
        if ( v39 )
        {
  _WORD v99[2]; // [esp+D0h] [ebp-148h] BYREF
          v99[0] = v53 - 4;
          v99[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, v99, -1, -1);
        }
        else
        {
LABEL_96:
  _WORD v91[2]; // [esp+B0h] [ebp-168h] BYREF
          v91[0] = v53 - 1;
          v91[1] = v54;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 2, v91, -1, -1);
        }
  int v122[4]; // [esp+1D4h] [ebp-44h] BYREF
        v122[0] = v53;
        v122[1] = v54 - 1;
        v122[2] = 2;
        v122[3] = 5;
        if ( !PlaceCabhutMap(v122) )
        {
  int v111[4]; // [esp+124h] [ebp-F4h] BYREF
          v111[0] = v53 - 1;
          v111[1] = v54 - 2;
          v111[2] = 3;
          v111[3] = 7;
          PlaceCabhutMap(v111);
        }
  int v112[4]; // [esp+134h] [ebp-E4h] BYREF
        v112[2] = 2;
        v112[3] = 5;
        v112[1] = v54 - 1;
        v112[0] = v55 + v53 - 2;
        if ( !PlaceCabhutMap(v112) )
        {
  int v114[4]; // [esp+154h] [ebp-C4h] BYREF
          v114[2] = 3;
          v114[3] = 7;
          v114[0] = v55 + v53 - 2;
          v114[1] = v54 - 2;
          PlaceCabhutMap(v114);
        }
        goto LABEL_128;
      }
      if ( v49 && (unsigned __int8)Object_Helper(&v53) )
      {
  unsigned int v48; // eax
  unsigned int v47; // eax
  int v43; // eax
        int v40 = v54;
        int v41 = v54;
        LODWORD(v58) = v54;
        if ( v54 >= v54 + v56 )
        {
          v43 = v53;
        }
        else
        {
          int v42 = v55;
          v43 = v53;
          do
          {
            int v44 = v43;
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
                  *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v101) + 17) = 96;
                }
                else
                {
                  v45 = v44;
                  v46 = v41;
                  if ( v41 == v56 + v40 - 1 )
                  {
                    v93[0] = v44;
                    v93[1] = v41;
                    *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v93) + 17) = 98;
                  }
                  else
                  {
                    v103[0] = v44;
                    v103[1] = v41;
                    *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v103) + 17) = v41 % 4 + 83;
                    v41 = LODWORD(v58);
                  }
                }
                v95[0] = v45;
                v95[1] = v46;
                char v52 = v44++ - v53;
                *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v95) + 286) = v52;
                v42 = v55;
                v43 = v53;
                v40 = v54;
              }
              while ( v44 < v55 + v53 );
            }
            LODWORD(v58) = ++v41;
          }
          while ( v41 < v40 + v56 );
        }
  int v116[4]; // [esp+174h] [ebp-A4h] BYREF
        v116[1] = v40 - 6;
        v116[0] = v43 - 2;
        v116[2] = 7;
        v116[3] = 6;
        if ( !IsMapClassAreaUniform(v116, 0) )
          goto LABEL_118;
        do
        {
          __int64 v107 = (unsigned int)Random::State(&g_Randomizer);
          v47 = Math::RoundToInt((double)v107 * 4.656612874161595e-10);
        }
        while ( v47 > 1 );
        if ( v47 )
        {
  _WORD v87[2]; // [esp+A0h] [ebp-178h] BYREF
          v87[0] = v53;
          v87[1] = v54 - 4;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, v87, -1, -1);
        }
        else
        {
LABEL_118:
  _WORD v96[2]; // [esp+C4h] [ebp-154h] BYREF
          v96[0] = v53;
          v96[1] = v54 - 1;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 1, v96, -1, -1);
        }
  int v118[4]; // [esp+194h] [ebp-84h] BYREF
        v118[0] = v53 - 2;
        v118[1] = v54 + v56;
        v118[2] = 7;
        v118[3] = 6;
        if ( !IsMapClassAreaUniform(v118, 0) )
          goto LABEL_123;
        do
        {
          __int64 v109 = (unsigned int)Random::State(&g_Randomizer);
          v48 = Math::RoundToInt((double)v109 * 4.656612874161595e-10);
        }
        while ( v48 > 1 );
        if ( v48 )
        {
  _WORD v98[2]; // [esp+CCh] [ebp-14Ch] BYREF
          v98[1] = v56 + v54;
          v98[0] = v53;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, v98, -1, -1);
        }
        else
        {
LABEL_123:
  _WORD v102[2]; // [esp+DCh] [ebp-13Ch] BYREF
          v102[0] = v53;
          v102[1] = v56 + v54;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, v102, -1, -1);
        }
  int v121[4]; // [esp+1C4h] [ebp-54h] BYREF
        v121[0] = v53 - 1;
        v121[1] = v54;
        v121[2] = 5;
        v121[3] = 2;
        if ( !PlaceCabhutMap(v121) )
        {
  int v123[4]; // [esp+1E4h] [ebp-34h] BYREF
          v123[0] = v53 - 2;
          v123[1] = v54 - 1;
          v123[2] = 7;
          v123[3] = 3;
          PlaceCabhutMap(v123);
        }
  int v125[4]; // [esp+204h] [ebp-14h] BYREF
        v125[0] = v53 - 1;
        v125[2] = 5;
        v125[1] = v56 + v54 - 2;
        v125[3] = 2;
        if ( !PlaceCabhutMap(v125) )
        {
  int v120[4]; // [esp+1B4h] [ebp-64h] BYREF
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
}
} // namespace gamemd

// 0x5905D0
namespace gamemd {
void RandomMap::AllocateArea()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  RandomMap *v23; // ebp
  int v41; // [esp+1Ch] [ebp-3Ch] BYREF
  int v42; // [esp+20h] [ebp-38h]
  int v43; // [esp+24h] [ebp-34h]
  int v44; // [esp+28h] [ebp-30h]
  int v45; // [esp+2Ch] [ebp-2Ch]
  __int64 v46; // [esp+30h] [ebp-28h]
  __int64 v47; // [esp+38h] [ebp-20h]
  __int64 v48; // [esp+40h] [ebp-18h]
  __int64 v49; // [esp+48h] [ebp-10h]
  double v50; // [esp+50h] [ebp-8h]
  RandomMap *v1 = (_DWORD *)this; /*0x5905d6*/
  int v2; // eax
  LOBYTE(v2) = (unsigned char)this->RandomMap_field_0x14; /*0x5905dd*/
  if ( (_BYTE)v2 ) /*0x5905e2*/
  {
    int v3 = this->Items; /*0x5905e8*/
    int v4 = *(_DWORD *)(v3 + 16); /*0x5905eb*/
    LOBYTE(v2) = v4 - 1; /*0x5905ee*/
    if ( v4 - 1 > 0 ) /*0x5905f3*/
    {
  _DWORD *v39; // [esp+18h] [ebp-40h]
  int v15; // eax
  int v9; // edx
      _DWORD * v5 = g_RandomMap_TerrainState; /*0x5905f9*/
      int v6 = g_RandomMap_TileData; /*0x5905ff*/
      v42 = 1; /*0x590605*/
      v41 = 0; /*0x59060d*/
      while ( 1 ) /*0x590615*/
      {
        int v7 = 0; /*0x590615*/
        if ( v6 <= 0 ) /*0x590619*/
        {
LABEL_9:
          v39 = 0; /*0x590640*/
        }
        else
        {
          _DWORD * v8 = v5; /*0x590625*/
          while ( *(_DWORD *)(*v8 + 8) != *(_DWORD *)(*(_DWORD *)(v3 + 4) + v41) ) /*0x59062c*/
          {
            ++v7; /*0x59062e*/
            ++v8; /*0x59062f*/
            if ( v7 >= v6 ) /*0x590634*/
            {
              v5 = g_RandomMap_TerrainState; /*0x590636*/
              v1 = (_DWORD *)this; /*0x59063c*/
              goto LABEL_9; /*0x59063c*/
            }
          }
          v5 = g_RandomMap_TerrainState; /*0x59068e*/
          v1 = (_DWORD *)this; /*0x590694*/
          v39 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + v7); /*0x59069b*/
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
        v4 = *(_DWORD *)(v3 + 16); /*0x590715*/
        LOBYTE(v2) = v4 - 1; /*0x590718*/
        if ( v9 >= v4 - 1 ) /*0x59071d*/
          return v2; /*0x59071d*/
      }
      do /*0x5906f7*/
      {
  int v13; // eax
        int v10 = 0; /*0x59066f*/
        if ( v6 <= 0 ) /*0x590673*/
        {
LABEL_20:
          v13 = 0; /*0x5906a6*/
        }
        else
        {
          int v11 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * v9); /*0x590678*/
          _DWORD * v12 = v5; /*0x59067b*/
          while ( *(_DWORD *)(*v12 + 8) != v11 ) /*0x590682*/
          {
            ++v10; /*0x590684*/
            ++v12; /*0x590685*/
            if ( v10 >= v6 ) /*0x59068a*/
              goto LABEL_20; /*0x59068a*/
          }
          v13 = v5[v10]; /*0x5906a1*/
        }
        if ( (*(int *)(*(_DWORD *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(_BYTE *)(v13 + 20) ) /*0x5906b7*/
        {
          int v14 = v39[4]; /*0x5906c5*/
          if ( *(_DWORD *)(v13 + 16) == v14 && v14 == v1[4] ) /*0x5906cf*/
          {
            RandomMap::PlaceBuildings(v1, (int)v39, v13); /*0x5906d5*/
            v5 = g_RandomMap_TerrainState; /*0x5906da*/
            v6 = g_RandomMap_TileData; /*0x5906e0*/
          }
        }
        v3 = v1[1]; /*0x5906e6*/
        v9 = v43 + 1; /*0x5906ed*/
        v15 = *(_DWORD *)(v3 + 16); /*0x5906ee*/
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
    int v16 = this->Items; /*0x59072b*/
    int v17 = 0; /*0x59072e*/
    v42 = 0; /*0x590730*/
    if ( *(int *)(v16 + 16) > 0 ) /*0x590737*/
    {
  int v35; // edx
      int v18 = g_RandomMap_TileData; /*0x59073d*/
      do /*0x590952*/
      {
  int v22; // esi
        int v19 = 0; /*0x590743*/
        if ( v18 <= 0 ) /*0x590747*/
        {
LABEL_37:
          v22 = 0; /*0x59076e*/
        }
        else
        {
          int v20 = *(_DWORD *)(*(_DWORD *)(v16 + 4) + 4 * v42); /*0x590756*/
          char * v21 = (char *)g_RandomMap_TerrainState; /*0x590759*/
          while ( *(_DWORD *)(*(_DWORD *)v21 + 8) != v20 ) /*0x590760*/
          {
            ++v19; /*0x590766*/
            v21 += 4; /*0x590767*/
            if ( v19 >= v18 ) /*0x59076c*/
              goto LABEL_37; /*0x59076c*/
          }
          v22 = *((_DWORD *)g_RandomMap_TerrainState + v19); /*0x5907ee*/
        }
        v23 = this; /*0x590770*/
        if ( *(_DWORD *)(v22 + 8) > this->RandomMap_field_0x8 && *(_DWORD *)(v22 + 16) != this->RandomMap_field_0x10 ) /*0x590788*/
        {
  _DWORD *v31; // ebp
  unsigned int v25; // eax
  unsigned int v24; // eax
          int v40 = 0; /*0x59078e*/
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
          int v26 = this->RandomMap_field_0x10; /*0x5907f8*/
          v45 = v25 + 1; /*0x5907fc*/
          int v27 = *(_DWORD *)(v22 + 16); /*0x590800*/
          v44 = 0; /*0x590805*/
          if ( v27 <= v26 ) /*0x590809*/
            int v28 = this->RandomMap_field_0x8; /*0x590810*/
          else
            v28 = *(_DWORD *)(v22 + 8); /*0x59080b*/
          if ( v27 <= v26 ) /*0x590815*/
            v43 = *(_DWORD *)(v22 + 8); /*0x590823*/
          else
            v43 = this->RandomMap_field_0x8; /*0x59081a*/
          int v29 = 0; /*0x59082d*/
          if ( g_RandomMap_TileData <= 0 ) /*0x590831*/
          {
LABEL_57:
            v31 = 0; /*0x59084e*/
          }
          else
          {
            char * v30 = (char *)g_RandomMap_TerrainState; /*0x590839*/
            while ( *(_DWORD *)(*(_DWORD *)v30 + 8) != v28 ) /*0x590840*/
            {
              ++v29; /*0x590846*/
              v30 += 4; /*0x590847*/
              if ( v29 >= g_RandomMap_TileData ) /*0x59084c*/
                goto LABEL_57; /*0x59084c*/
            }
            v31 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + v29); /*0x590960*/
          }
          _DWORD * v32 = RandomMap::TerrainAlloc(v31); /*0x590857*/
          if ( v45 <= 0 ) /*0x59085f*/
            goto LABEL_66; /*0x59085f*/
          do /*0x590913*/
          {
  unsigned int v34; // eax
            if ( v17 >= 100 ) /*0x590868*/
              break; /*0x590868*/
            unsigned int v33 = v32[4] - 1; /*0x590879*/
            v48 = (unsigned int)v32[4]; /*0x59087d*/
            v50 = (double)v48; /*0x590885*/
            do /*0x5908b4*/
            {
              v49 = (unsigned int)Random::State(&g_Randomizer); /*0x590893*/
              v34 = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
            }
            while ( v34 > v33 ); /*0x5908b4*/
            v41 = *(_DWORD *)(v32[1] + 4 * v34); /*0x5908c8*/
            if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v41, 1) ) /*0x5908cc*/
            {
              float v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
              v40 += (unsigned __int8)RandomMap::CheckCellPlacement((int)&v41, v43, v37) != 0; /*0x590900*/
            }
            v44 = ++v17; /*0x59090f*/
          }
          while ( v40 < v45 ); /*0x590913*/
          if ( !v40 ) /*0x59091f*/
LABEL_66:
            *(_BYTE *)(this + 27) = 0; /*0x590925*/
          if ( v32 ) /*0x59092b*/
            (*(void (__thiscall **)(_DWORD *, int))*v32)(v32, 1); /*0x590933*/
          v18 = g_RandomMap_TileData; /*0x590935*/
          v23 = this; /*0x59093b*/
          v17 = 0; /*0x59093f*/
        }
        v16 = v23->Items; /*0x590941*/
        v2 = v42 + 1; /*0x590948*/
        v35 = *(_DWORD *)(v16 + 16); /*0x590949*/
        v42 = v2; /*0x59094c*/
      }
      while ( v2 < v35 ); /*0x590952*/
    }
  }
  return v2; /*0x590723*/
}
}
} // namespace gamemd

// 0x590970
namespace gamemd {
void RandomMap::CheckCellPlacement(short * a1, void * a2, DynamicVector * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 *v4; // esi
  DynamicVector *v7; // ebx
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // ax
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // cx
  __int16 v18; // cx
  __int16 v21; // cx
  __int16 v24; // cx
  __int16 v25; // ax
  __int16 v28; // cx
  __int16 v29; // ax
  __int16 v32; // dx
  __int16 v33; // cx
  __int16 v34; // cx
  __int16 v35; // cx
  __int16 v36; // ax
  __int16 v37; // ax
  __int16 v38; // si
  v4 = a1; /*0x59097a*/
  void * v5 = a2; /*0x59097f*/
  _BYTE v39[5]; // [esp+13h] [ebp-Dh] BYREF
  v39[0] = 1; /*0x59098f*/
  v7 = (DynamicVector *)RandomMap::CheckNeighborhoodCompatibility(this, a1, (DynamicVector *)v39, (int)a2, aP3); /*0x590999*/
  if ( !v39[0] ) /*0x5909a1*/
    return 0; /*0x5909a6*/
  char v9 = 0; /*0x5909af*/
  if ( v7 == (DynamicVector *)255 ) /*0x5909b7*/
    return 0; /*0x5909bc*/
  if ( ((unsigned __int8)v7 & 0x82) != 0x82 || ((unsigned __int8)v7 & 0x38) != 0 ) /*0x5909d5*/
    goto LABEL_86; /*0x5909d5*/
  v10 = *v4; /*0x5909d7*/
  *(_WORD *)&v39[1] = *v4 - 1; /*0x5909e0*/
  v11 = v4[1]; /*0x5909e5*/
  LOWORD(a1) = v10 + 5; /*0x5909e9*/
  *(_WORD *)&v39[3] = v11 - 5; /*0x5909f5*/
  HIWORD(a1) = v11 + 1; /*0x5909fa*/
  if ( ((unsigned __int8)v7 & 0x40) != 0 ) /*0x5909ff*/
    ++*(_WORD *)&v39[3]; /*0x590a01*/
  if ( ((unsigned __int8)v7 & 4) != 0 ) /*0x590a09*/
    LOWORD(a1) = (_WORD)a1 - 1; /*0x590a0b*/
  v9 = PlaceMapSeedCityBlockVariant2(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590a22*/
  if ( !v9 ) /*0x590a26*/
  {
LABEL_86:
    if ( ((unsigned __int8)v7 & 0xA) != 0xA || ((unsigned __int8)v7 & 0x11) != 0 ) /*0x590a39*/
      goto LABEL_87; /*0x590a39*/
    v12 = *v4; /*0x590a3b*/
    *(_WORD *)&v39[1] = *v4 + 5; /*0x590a42*/
    v13 = v4[1]; /*0x590a47*/
    LOWORD(a1) = v12 - 1; /*0x590a4b*/
    *(_WORD *)&v39[3] = v13 - 1; /*0x590a59*/
    HIWORD(a1) = v13 + 5; /*0x590a5e*/
    if ( ((unsigned __int8)v7 & 0x10) != 0 ) /*0x590a63*/
      --HIWORD(a1); /*0x590a65*/
    if ( ((unsigned __int8)v7 & 1) != 0 ) /*0x590a6d*/
      --*(_WORD *)&v39[1]; /*0x590a6f*/
    v9 = MapSeed::PlaceCityBlock2(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590a86*/
    if ( !v9 ) /*0x590a8a*/
    {
LABEL_87:
      if ( ((unsigned __int8)v7 & 0x28) != 0x28 || ((unsigned __int8)v7 & 0x83) != 0 ) /*0x590a9d*/
        goto LABEL_88; /*0x590a9d*/
      v14 = *v4; /*0x590a9f*/
      *(_WORD *)&v39[1] = *v4 + 1; /*0x590aa8*/
      v15 = v4[1]; /*0x590aad*/
      LOWORD(a1) = v14 - 5; /*0x590ab1*/
      *(_WORD *)&v39[3] = v15 + 5; /*0x590abd*/
      HIWORD(a1) = v15 - 1; /*0x590ac2*/
      if ( ((unsigned __int8)v7 & 0x40) != 0 ) /*0x590ac7*/
        LOWORD(a1) = (_WORD)a1 - 1; /*0x590ac9*/
      if ( ((unsigned __int8)v7 & 4) != 0 ) /*0x590ad1*/
        --*(_WORD *)&v39[3]; /*0x590ad3*/
      v9 = PlaceMapSeedCityBlockDiagonal(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590aea*/
      if ( !v9 ) /*0x590aee*/
      {
LABEL_88:
        if ( ((unsigned __int8)v7 & 0xA0) != 0xA0 || ((unsigned __int8)v7 & 0xE) != 0 ) /*0x590b04*/
          goto LABEL_89; /*0x590b04*/
        v16 = *v4; /*0x590b06*/
        *(_WORD *)&v39[1] = *v4 - 5; /*0x590b0d*/
        v17 = v4[1]; /*0x590b12*/
        LOWORD(a1) = v16 + 1; /*0x590b16*/
        *(_WORD *)&v39[3] = v17 + 1; /*0x590b24*/
        HIWORD(a1) = v17 - 5; /*0x590b29*/
        if ( ((unsigned __int8)v7 & 1) != 0 ) /*0x590b2e*/
          ++HIWORD(a1); /*0x590b30*/
        if ( ((unsigned __int8)v7 & 0x10) != 0 ) /*0x590b38*/
          ++*(_WORD *)&v39[1]; /*0x590b3a*/
        v9 = PlaceMapSeedCityBlockDiagonal(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590b51*/
        if ( !v9 ) /*0x590b55*/
        {
  __int64 v40; // [esp+18h] [ebp-8h]
  unsigned int v20; // eax
  unsigned int v19; // eax
LABEL_89:
          if ( ((unsigned __int8)v7 & 0x70) != 0 || ((unsigned __int8)v7 & 0x88) == 0 ) /*0x590b67*/
            goto LABEL_90; /*0x590b67*/
          v18 = v4[1]; /*0x590b6d*/
          *(_WORD *)&v39[1] = *v4 - 1; /*0x590b7f*/
          *(_WORD *)&v39[3] = v18 - 4; /*0x590b84*/
          LOWORD(a1) = *(_WORD *)&v39[1]; /*0x590b89*/
          HIWORD(a1) = v18 + 4; /*0x590b8e*/
          if ( (char)v7 < 0 ) /*0x590b93*/
          {
            ++*(_WORD *)&v39[3]; /*0x590b95*/
            ++HIWORD(a1); /*0x590b9a*/
          }
          if ( ((unsigned __int8)v7 & 8) != 0 ) /*0x590ba2*/
          {
            --HIWORD(a1); /*0x590ba4*/
            --*(_WORD *)&v39[3]; /*0x590ba9*/
          }
          do /*0x590bd6*/
          {
            v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590bb8*/
            v19 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
          }
          while ( v19 > 1 ); /*0x590bd6*/
          *(_WORD *)&v39[1] += v19; /*0x590bd8*/
          do /*0x590c05*/
          {
            v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590be7*/
            v20 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
          }
          while ( v20 > 1 ); /*0x590c05*/
          LOWORD(a1) = v20 + (_WORD)a1; /*0x590c07*/
          v9 = RandomMap::CheckPlacementArea(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590c1e*/
          if ( !v9 ) /*0x590c22*/
          {
  unsigned int v23; // eax
  unsigned int v22; // eax
LABEL_90:
            if ( ((unsigned __int8)v7 & 7) != 0 || ((unsigned __int8)v7 & 0x88) == 0 ) /*0x590c34*/
              goto LABEL_91; /*0x590c34*/
            v21 = v4[1]; /*0x590c3a*/
            *(_WORD *)&v39[1] = *v4 + 1; /*0x590c4c*/
            *(_WORD *)&v39[3] = v21 + 4; /*0x590c51*/
            LOWORD(a1) = *(_WORD *)&v39[1]; /*0x590c56*/
            HIWORD(a1) = v21 - 4; /*0x590c5b*/
            if ( (char)v7 < 0 ) /*0x590c60*/
            {
              ++HIWORD(a1); /*0x590c62*/
              ++*(_WORD *)&v39[3]; /*0x590c67*/
            }
            if ( ((unsigned __int8)v7 & 8) != 0 ) /*0x590c6f*/
            {
              --*(_WORD *)&v39[3]; /*0x590c71*/
              --HIWORD(a1); /*0x590c76*/
            }
            do /*0x590ca3*/
            {
              v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590c85*/
              v22 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
            }
            while ( v22 > 1 ); /*0x590ca3*/
            *(_WORD *)&v39[1] += v22 - 1; /*0x590ca6*/
            do /*0x590cd3*/
            {
              v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590cb5*/
              v23 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
            }
            while ( v23 > 1 ); /*0x590cd3*/
            LOWORD(a1) = v23 - 1 + (_WORD)a1; /*0x590cd7*/
            v9 = PlaceMapSeedCityArea(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590ced*/
            if ( !v9 ) /*0x590cf1*/
            {
  unsigned int v27; // eax
  unsigned int v26; // eax
LABEL_91:
              if ( ((unsigned __int8)v7 & 0xC1) != 0 || ((unsigned __int8)v7 & 0x22) == 0 ) /*0x590d03*/
                goto LABEL_64; /*0x590d03*/
              v24 = *v4; /*0x590d09*/
              v25 = v4[1] - 1; /*0x590d10*/
              *(_WORD *)&v39[1] = *v4 + 4; /*0x590d1b*/
              *(_WORD *)&v39[3] = v25; /*0x590d20*/
              LOWORD(a1) = v24 - 4; /*0x590d25*/
              HIWORD(a1) = v25; /*0x590d2a*/
              if ( ((unsigned __int8)v7 & 0x20) != 0 ) /*0x590d2f*/
              {
                LOWORD(a1) = (_WORD)a1 + 1; /*0x590d31*/
                ++*(_WORD *)&v39[1]; /*0x590d36*/
              }
              if ( ((unsigned __int8)v7 & 2) != 0 ) /*0x590d3e*/
              {
                --*(_WORD *)&v39[1]; /*0x590d40*/
                LOWORD(a1) = (_WORD)a1 - 1; /*0x590d45*/
              }
              do /*0x590d72*/
              {
                v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590d54*/
                v26 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
              }
              while ( v26 > 1 ); /*0x590d72*/
              *(_WORD *)&v39[3] += v26; /*0x590d74*/
              do /*0x590da1*/
              {
                v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590d83*/
                v27 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
              }
              while ( v27 > 1 ); /*0x590da1*/
              HIWORD(a1) += v27; /*0x590da3*/
              v9 = MapSeed::PlaceCityBuildings(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590dba*/
              if ( !v9 ) /*0x590dbe*/
              {
LABEL_64:
                if ( ((unsigned __int8)v7 & 0x1C) == 0 && ((unsigned __int8)v7 & 0x22) != 0 ) /*0x590dd0*/
                {
  unsigned int v31; // eax
  unsigned int v30; // eax
                  v28 = *v4; /*0x590dd6*/
                  v29 = v4[1] + 1; /*0x590ddd*/
                  *(_WORD *)&v39[1] = *v4 - 4; /*0x590de8*/
                  *(_WORD *)&v39[3] = v29; /*0x590ded*/
                  LOWORD(a1) = v28 + 4; /*0x590df2*/
                  HIWORD(a1) = v29; /*0x590df7*/
                  if ( ((unsigned __int8)v7 & 0x20) != 0 ) /*0x590dfc*/
                  {
                    ++*(_WORD *)&v39[1]; /*0x590dfe*/
                    LOWORD(a1) = (_WORD)a1 + 1; /*0x590e03*/
                  }
                  if ( ((unsigned __int8)v7 & 2) != 0 ) /*0x590e0b*/
                  {
                    LOWORD(a1) = (_WORD)a1 - 1; /*0x590e0d*/
                    --*(_WORD *)&v39[1]; /*0x590e12*/
                  }
                  do /*0x590e3f*/
                  {
                    v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590e21*/
                    v30 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                  }
                  while ( v30 > 1 ); /*0x590e3f*/
                  *(_WORD *)&v39[3] += v30 - 1; /*0x590e42*/
                  do /*0x590e6f*/
                  {
                    v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590e51*/
                    v31 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                  }
                  while ( v31 > 1 ); /*0x590e6f*/
                  HIWORD(a1) += v31 - 1; /*0x590e73*/
                  v9 = MapSeed::PlaceCityBlock(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590e89*/
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
    if ( ((unsigned __int8)v7 & 8) != 0 /*0x590eec*/
      || (v32 = *v4 - 4,
          v33 = *v4 + 4,
          HIWORD(a1) = v4[1] + 1,
          HIWORD(aP3) = HIWORD(a1),
          LOWORD(aP3) = v33,
          LOWORD(a1) = v32,
          (v9 = MapSeed::PlaceCityBlock(this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
    {
      if ( ((unsigned __int8)v7 & 2) != 0 /*0x590f34*/
        || (v34 = v4[1],
            LOWORD(a1) = *v4 + 1,
            LOWORD(aP3) = (_WORD)a1,
            HIWORD(aP3) = v34 - 4,
            HIWORD(a1) = v34 + 4,
            (v9 = PlaceMapSeedCityArea(this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
      {
        if ( ((unsigned __int8)v7 & 8) != 0 /*0x590f7b*/
          || (v35 = *v4 - 4,
              LOWORD(a1) = *v4 + 4,
              v36 = v4[1] - 1,
              LOWORD(aP3) = v35,
              HIWORD(a1) = v36,
              HIWORD(aP3) = v36,
              (v9 = MapSeed::PlaceCityBuildings(this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
        {
          if ( ((unsigned __int8)v7 & 0x20) == 0 ) /*0x590f80*/
          {
            v37 = *v4; /*0x590f82*/
            v38 = v4[1]; /*0x590f85*/
            LOWORD(a1) = v37 - 1; /*0x590f92*/
            LOWORD(aP3) = v37 - 1; /*0x590f97*/
            HIWORD(a1) = v38 - 4; /*0x590f9c*/
            HIWORD(aP3) = v38 + 4; /*0x590fb1*/
            return RandomMap::CheckPlacementArea(this, (__int16 *)&a1, (__int16 *)&aP3, a2); /*0x590fbb*/
          }
        }
      }
    }
  }
  return v9; /*0x5909a3*/
}
}
} // namespace gamemd

// 0x590FD0
namespace gamemd {
void RandomMap::CheckNeighborhoodCompatibility(unsigned short * a1, DynamicVector * aP2, int a4, DynamicVector * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v6; // cx
  DynamicVector *v7; // ebx
  DynamicVector *v12; // ebx
  DynamicVector *v15; // [esp+4h] [ebp-14h]
  DynamicVector *v16; // [esp+8h] [ebp-10h] BYREF
  DynamicVector *a1a; // [esp+1Ch] [ebp+4h]
  int aP4a; // [esp+28h] [ebp+10h]

  v15 = (DynamicVector *)Math::RoundToInt((15.0 - 5.0) * (1.0 - *(float *)&aP4) + 5.0); /*0x591000*/
  v6 = a1[1] - 2; /*0x591010*/
  v7 = (DynamicVector *)(__int16)(*a1 - 2); /*0x591014*/
  AbstractClass *v8 = this->q008; /*0x59101a*/
  int v14 = v6; /*0x59101d*/
  int v17 = v6; /*0x591021*/
  int v18 = 5; /*0x59102a*/
  int v19 = 5; /*0x59102e*/
  a1a = v7; /*0x59103b*/
  v16 = v7; /*0x59103f*/
  if ( Map_Check((__int16 *)&v16, v8, a4, (int)v15) ) /*0x591043*/
  {
    int v10 = 0; /*0x59105d*/
    aP4a = 0; /*0x591060*/
    while ( 1 ) /*0x59106a*/
    {
      int v11 = 0; /*0x59106a*/
      v12 = (DynamicVector *)((char *)v7 - 5); /*0x59106c*/
      do /*0x5910d1*/
      {
        if ( v10 != 1 || v11 != 1 ) /*0x591076*/
        {
          v16 = v12; /*0x59107c*/
          AbstractClass *v13 = this->q008; /*0x591088*/
          v18 = 5; /*0x591094*/
          v19 = 5; /*0x591098*/
          v17 = v10 + v14 + 4 * v10 - 5; /*0x5910a0*/
          if ( Map_Check((__int16 *)&v16, v13, a4, (int)v15) ) /*0x5910a9*/
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
} // namespace gamemd

// 0x592440
namespace gamemd {
void RandomMap::CheckPlacementArea(short * a2, short * a3, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v5; // ax
  __int16 v6; // bp
  __int16 v7; // si
  char result; // al
  ObjectClass *v14; // ecx
  __int16 *v30; // ebp
  __int16 v35; // dx
  __int16 v37; // dx
  __int16 v39; // dx
  __int16 v45; // bp
  __int16 v49; // cx
  __int16 v50; // dx
  __int16 v51; // ax
  unsigned __int8 v54; // cl
  CCINIClass *v55; // edx
  __int16 v58; // bp
  __int16 v59; // dx
  __int16 v60; // ax
  __int16 v61; // ax
  ObjectClass *v69; // [esp+20h] [ebp-48h]
  __int16 v75; // [esp+40h] [ebp-28h]
  __int16 v76; // [esp+42h] [ebp-26h]
  ObjectClass *v78; // [esp+50h] [ebp-18h]
  ObjectClass *v79; // [esp+58h] [ebp-10h] BYREF
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
  int v8 = a2[1]; /*0x59247c*/
  char * v80 = (char *)(v8 - 4); /*0x592483*/
  int v82 = a3[1] - v8 + 9; /*0x59249f*/
  int v81 = v6 - v7 + 11; /*0x5924a9*/
  result = BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v79, aP2); /*0x5924ad*/
  if ( result ) /*0x5924b4*/
  {
    int v10 = *a2; /*0x5924c0*/
    int v11 = a3[1]; /*0x5924c8*/
    int v71 = *a3 - v10; /*0x5924cc*/
    int v12 = v11 - a2[1]; /*0x5924d9*/
    v83 = (ObjectClass *)abs32(v71); /*0x5924db*/
    if ( (int)v83 <= v12 - 5 ) /*0x5924e4*/
    {
  int v72; // [esp+2Ch] [ebp-3Ch] BYREF
  int v67; // [esp+18h] [ebp-50h]
  int v66; // [esp+14h] [ebp-54h] BYREF
      int v13 = v12 + 1; /*0x5924f2*/
      v14 = v79; /*0x5924f5*/
      int v15 = v10 - (_DWORD)v79; /*0x5924fc*/
      int v16 = v13; /*0x5924fe*/
      int v17 = v13 / 2 + 2; /*0x592506*/
      char * v18 = v80; /*0x592509*/
  __int64 v77; // [esp+48h] [ebp-20h]
      LODWORD(v77) = v79; /*0x59250b*/
      char * v68 = v80; /*0x59250f*/
      int v70 = (int)&v80[v17 + 2]; /*0x592519*/
      if ( (int)v80 < v70 ) /*0x59251d*/
      {
        v67 = (int)&v79->__pad_0[v15]; /*0x592521*/
        do /*0x592596*/
        {
          int v19 = v77; /*0x592525*/
          if ( (int)v77 < v67 ) /*0x592531*/
          {
            do /*0x592585*/
            {
              LOWORD(v66) = v19; /*0x592537*/
              HIWORD(v66) = (_WORD)v18; /*0x59253c*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x592541*/
              {
                SetLayerDataMap((__int16 *)&v66, (int)aP2); /*0x592552*/
                _BYTE * v20 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v66); /*0x59256a*/
                v20[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x592574*/
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
      LODWORD(v77) = v14; /*0x59259c*/
      int v21 = *a3 - (_DWORD)v14; /*0x5925a9*/
      int v23 = a3[1] + 5; /*0x5925b0*/
      v67 = a3[1] - v17 + 3; /*0x5925b4*/
      int v22 = v67; /*0x5925ae*/
      v70 = v23; /*0x5925ba*/
      if ( v67 < v23 ) /*0x5925be*/
      {
        v68 = &v14->__pad_0[v21]; /*0x5925c2*/
        do /*0x592635*/
        {
          int v24 = v77; /*0x5925c6*/
          if ( (int)v77 < (int)v68 ) /*0x5925d0*/
          {
            do /*0x592624*/
            {
              LOWORD(v66) = v24; /*0x5925d6*/
              HIWORD(v66) = v22; /*0x5925db*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x5925e0*/
              {
                SetLayerDataMap((__int16 *)&v66, (int)aP2); /*0x5925f1*/
                _BYTE * v25 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v66); /*0x592609*/
                v25[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x592613*/
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
      int v26 = *a2; /*0x592637*/
      int v27 = v81; /*0x59263a*/
      v70 = v26; /*0x59263e*/
      v67 = a2[1]; /*0x592648*/
      v78 = (ObjectClass *)((char *)v14 + v81 - v26 - 1); /*0x592652*/
      v69 = (ObjectClass *)(v17 + v67 - 1); /*0x59265c*/
      if ( v67 < (int)v69 ) /*0x592660*/
      {
        v68 = &v78->__pad_0[v26]; /*0x592668*/
        do /*0x5926de*/
        {
          int v28 = v26; /*0x592670*/
          if ( v26 < (int)v68 ) /*0x592674*/
          {
            do /*0x5926c5*/
            {
              LOWORD(v66) = v28; /*0x59267b*/
              HIWORD(v66) = v67; /*0x592680*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x592689*/
              {
                SetLayerDataMap((__int16 *)&v66, this->q008); /*0x59269d*/
                _BYTE * v29 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v66); /*0x5926ac*/
                v26 = v70; /*0x5926b4*/
                v29[283] = (unsigned char)this->RandomMap_field_0x10; /*0x5926b8*/
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
      int v31 = *a3; /*0x5926e8*/
      char * v32 = &v14->__pad_0[v27 - v31 - 1]; /*0x5926f3*/
      v67 = a3[1] - v17 + 3; /*0x5926f7*/
      int v33 = v16 / 2 + v67; /*0x5926fb*/
      v70 = v33; /*0x592701*/
      if ( v67 < v33 ) /*0x592705*/
      {
        v68 = &v32[v31]; /*0x592709*/
        do /*0x592777*/
        {
          int v34 = v31; /*0x592711*/
          if ( v31 < (int)v68 ) /*0x592715*/
          {
            do /*0x592766*/
            {
              LOWORD(v66) = v34; /*0x592720*/
              HIWORD(v66) = v67; /*0x592725*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x59272a*/
              {
                SetLayerDataMap((__int16 *)&v66, this->q008); /*0x59273e*/
                *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v66) + 283) = (unsigned char)this->RandomMap_field_0x10; /*0x592759*/
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
      HIWORD(v68) = a2[1]; /*0x59278c*/
      LOWORD(v68) = v35; /*0x592796*/
      int v36 = this->q010; /*0x59279f*/
      v70 = (int)v68; /*0x5927a2*/
      PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode + 3, &v70, (int)aP2, v36); /*0x5927af*/
      v37 = a3[1] - 2; /*0x5927c0*/
      LOWORD(v68) = *a3 - 3; /*0x5927c4*/
      int v38 = this->q010; /*0x5927c9*/
      HIWORD(v68) = v37; /*0x5927cc*/
      v70 = (int)v68; /*0x5927d5*/
      PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1], &v70, (int)aP2, v38); /*0x5927e7*/
      v39 = a3[1] - 1; /*0x5927f6*/
      LOWORD(v68) = *a3 - 1; /*0x5927f8*/
      int v40 = this->q010; /*0x5927fd*/
      HIWORD(v68) = v39; /*0x592800*/
      v70 = (int)v68; /*0x592809*/
      PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1] + 1, &v70, (int)aP2, v40); /*0x59281b*/
      int v41 = v71; /*0x592820*/
      int v42 = 0; /*0x592824*/
      int v73 = 0; /*0x592828*/
      if ( v71 ) /*0x592832*/
      {
  unsigned int v43; // eax
        do /*0x59285c*/
        {
          v77 = (unsigned int)Random::State(&g_Randomizer); /*0x592842*/
          v43 = Math::RoundToInt((double)v77 * 4.656612874161595e-10); /*0x592854*/
        }
        while ( v43 > 1 ); /*0x59285c*/
        BOOL v44 = v41 > 0; /*0x592862*/
        v68 = (char *)v44; /*0x59286f*/
        int v74 = v44; /*0x592873*/
        if ( v43 == 1 ) /*0x59287d*/
        {
          LOWORD(v73) = v41; /*0x592884*/
          HIWORD(v73) = (_WORD)v83; /*0x592889*/
        }
        else
        {
          HIWORD(v74) = a3[1] - (_WORD)v83 - a2[1] - 5; /*0x5928a0*/
        }
        v66 = 0; /*0x5928a9*/
        if ( (int)v83 > 0 ) /*0x5928af*/
        {
          v67 = 0; /*0x5928b5*/
          while ( 1 ) /*0x5928c4*/
          {
            v45 = 0; /*0x5928c4*/
            char * v46 = (char *)&unk_82AFF0; /*0x5928c6*/
            int v47 = 20 * v44 + 8564740; /*0x5928cb*/
            while ( 1 ) /*0x5928d8*/
            {
              bool v48 = !v44; /*0x5928d8*/
              v49 = v66; /*0x5928da*/
              if ( v48 ) /*0x5928de*/
                v49 = v67; /*0x5928e0*/
              v50 = *a2; /*0x5928e4*/
              LOWORD(v71) = -v45; /*0x5928eb*/
              v51 = a2[1] + 3; /*0x5928f4*/
              v75 = v50; /*0x5928f8*/
              v76 = v51; /*0x5928fd*/
              LOWORD(v77) = v50 - v45; /*0x592910*/
              WORD1(v77) = v66 + v51; /*0x59291f*/
              LOWORD(v69) = v74 + v50 - v45; /*0x59292e*/
              HIWORD(v69) = v66 + v51 + HIWORD(v74); /*0x592939*/
              LOWORD(v70) = v49 + (_WORD)v69; /*0x592948*/
              HIWORD(v70) = HIWORD(v69); /*0x59294d*/
              v72 = v70; /*0x59295c*/
              _BYTE * v52 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v72); /*0x592960*/
              char v53 = *v46; /*0x592969*/
              v46 += 4; /*0x59296b*/
              v47 += 4; /*0x59296e*/
              v52[283] = (unsigned char)this->RandomMap_field_0x10 + v53 - 4; /*0x592977*/
              v54 = *(_BYTE *)(v47 - 4); /*0x59297d*/
              v52[284] = v54; /*0x592980*/
              v55 = g_CellTileLookup; /*0x592986*/
              ++v45; /*0x592992*/
              v52[282] = 0; /*0x592999*/
              *((_DWORD *)v52 + 14) = &v55->__pad_0[v54 - 1]; /*0x5929a4*/
              if ( (int)v46 >= (int)byte_82B004 ) /*0x5929a7*/
                break; /*0x5929a7*/
              v44 = (BOOL)v68; /*0x5928d4*/
            }
            bool v56 = ++v66 < (int)v83; /*0x5929bb*/
            --v67; /*0x5929c1*/
            if ( !v56 ) /*0x5929c5*/
              break; /*0x5929c5*/
            v44 = (BOOL)v68; /*0x5928bb*/
          }
          v30 = a3; /*0x5929cb*/
          v42 = 0; /*0x5929cf*/
        }
      }
      int v57 = 0; /*0x5929e1*/
      if ( v30[1] - a2[1] - (int)v83 - 5 > 0 ) /*0x5929e8*/
      {
        v58 = HIWORD(v73); /*0x5929ee*/
        while ( 1 ) /*0x592ab2*/
        {
          do /*0x592ab2*/
          {
            v59 = *a2; /*0x5929fa*/
            v60 = a2[1] + 3; /*0x5929ff*/
            LOWORD(v72) = -(__int16)v42; /*0x592a05*/
            LOWORD(v77) = v59; /*0x592a0a*/
            WORD1(v77) = v60; /*0x592a13*/
            v75 = v59 - v42; /*0x592a28*/
            v76 = v57 + v60; /*0x592a2d*/
            v61 = v58 + v57 + v60; /*0x592a3c*/
            LOWORD(v70) = v73 + v59 - v42; /*0x592a3e*/
            HIWORD(v70) = v58 + v76; /*0x592a43*/
            v71 = v70; /*0x592a4c*/
            if ( g_MapTileArray ) /*0x592a58*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)(v73 + v59 - v42) + 20 * unk_89C2DC * v61 + 14) = aP2; /*0x592a73*/
            _BYTE * v62 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v71); /*0x592a81*/
            char v63 = (unsigned char)this->RandomMap_field_0x10; /*0x592a8a*/
            v62[284] = 1; /*0x592a8d*/
            char v64 = v63 - v42++ - 1; /*0x592a96*/
            v62[283] = v64; /*0x592a99*/
            *((_DWORD *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
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
} // namespace gamemd

// 0x5958E0
namespace gamemd {
void RandomMap::CleanupRandomMapData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ebp
  void (__thiscall ***v6)(_DWORD, int); // ecx

  if ( g_MapTileArray ) /*0x5958ee*/
  {
    int v2 = unk_89C2DC * unk_89C2DC; /*0x5958f6*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5958fb*/
    {
      int v3 = 0; /*0x5958fd*/
      do /*0x59591a*/
      {
        v3 += 80; /*0x595908*/
        --v2; /*0x59590b*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 24) = -1; /*0x59590c*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 20) = -1; /*0x595916*/
      }
      while ( v2 ); /*0x59591a*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x595927*/
  {
    void * v5 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x59592f*/
    if ( v5 ) /*0x595934*/
    {
      TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + i)); /*0x595938*/
      __3_YAXPAX_Z(v5); /*0x59593e*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59594e*/
  if ( g_MapTileArray ) /*0x595957*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x59595a*/
    g_MapTileArray = 0; /*0x595962*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))(this + 376); /*0x595968*/
  if ( v6 ) /*0x595970*/
  {
    (**v6)(v6, 1); /*0x595976*/
    *(_DWORD *)(this + 376) = 0; /*0x595978*/
  }
  void * v7 = this->q17C; /*0x59597e*/
  if ( v7 ) /*0x595986*/
  {
    ComPtr::Dtor(this->q17C); /*0x59598a*/
    __3_YAXPAX_Z(v7); /*0x595990*/
    this->q17C = 0; /*0x595998*/
  }
  *(_DWORD *)(this + 736) = &vt_VectorClass_BuildingTypeClass_const; /*0x5959a4*/
  DynamicVectorClass::Destroy(this + 736); /*0x5959aa*/
  *(_DWORD *)(this + 708) = &vt_VectorClass_BuildingTypeClass_const; /*0x5959b5*/
  DynamicVectorClass::Destroy(this + 708); /*0x5959bb*/
  *(_DWORD *)(this + 672) = &vt_VectorClass_int; /*0x5959cb*/
  VectorClass::Destroy(this + 672); /*0x5959cd*/
  *(_DWORD *)(this + 644) = &vt_VectorClass_int; /*0x5959d8*/
  VectorClass::Destroy(this + 644); /*0x5959da*/
  void * v8 = this->q26C; /*0x5959df*/
  this->q268 = &vt_VectorClass_int; /*0x5959e5*/
  if ( v8 && *(_BYTE *)(this + 629) ) /*0x5959ef*/
  {
    __3_YAXPAX_Z(v8); /*0x5959f8*/
    this->q26C = 0; /*0x595a00*/
  }
  *(_BYTE *)(this + 629) = 0; /*0x595a06*/
  this->q270 = 0; /*0x595a0c*/
  CampaignClass *v9 = this->q250; /*0x595a12*/
  this->q24C = &vt_VectorClass_int; /*0x595a18*/
  if ( v9 && *(_BYTE *)(this + 601) ) /*0x595a22*/
  {
    __3_YAXPAX_Z(v9); /*0x595a2b*/
    this->q250 = 0; /*0x595a33*/
  }
  *(_BYTE *)(this + 601) = 0; /*0x595a39*/
  this->q254 = 0; /*0x595a3f*/
  CampaignClass *v10 = this->q234; /*0x595a45*/
  this->q230 = &vt_VectorClass_int; /*0x595a4b*/
  if ( v10 && *(_BYTE *)(this + 573) ) /*0x595a55*/
  {
    __3_YAXPAX_Z(v10); /*0x595a5e*/
    this->q234 = 0; /*0x595a66*/
  }
  *(_BYTE *)(this + 573) = 0; /*0x595a6c*/
  this->q238 = 0; /*0x595a72*/
  CampaignClass *v11 = this->q218; /*0x595a78*/
  this->q214 = &vt_VectorClass_int; /*0x595a7e*/
  if ( v11 && *(_BYTE *)(this + 545) ) /*0x595a88*/
  {
    __3_YAXPAX_Z(v11); /*0x595a91*/
    this->q218 = 0; /*0x595a99*/
  }
  *(_BYTE *)(this + 545) = 0; /*0x595a9f*/
  this->q21C = 0; /*0x595aa5*/
  void * v12 = this->q1FC; /*0x595aab*/
  this->q1F8 = &vt_VectorClass_int; /*0x595ab1*/
  if ( v12 && *(_BYTE *)(this + 517) ) /*0x595abb*/
  {
    __3_YAXPAX_Z(v12); /*0x595ac4*/
    this->q1FC = 0; /*0x595acc*/
  }
  *(_BYTE *)(this + 517) = 0; /*0x595ad2*/
  this->q200 = 0; /*0x595ad8*/
  void * v13 = this->q1E0; /*0x595ade*/
  this->q1DC = &vt_VectorClass_int; /*0x595ae4*/
  if ( v13 && *(_BYTE *)(this + 489) ) /*0x595aee*/
  {
    __3_YAXPAX_Z(v13); /*0x595af7*/
    this->q1E0 = 0; /*0x595aff*/
  }
  *(_BYTE *)(this + 489) = 0; /*0x595b05*/
  this->q1E4 = 0; /*0x595b0b*/
  void * v14 = this->q1C4; /*0x595b11*/
  this->q1C0 = &vt_VectorClass_int; /*0x595b17*/
  if ( v14 && *(_BYTE *)(this + 461) ) /*0x595b21*/
  {
    __3_YAXPAX_Z(v14); /*0x595b2a*/
    this->q1C4 = 0; /*0x595b32*/
  }
  *(_BYTE *)(this + 461) = 0; /*0x595b38*/
  this->q1C8 = 0; /*0x595b3e*/
  void * v15 = this->q1A8; /*0x595b44*/
  this->q1A4 = &vt_VectorClass_int; /*0x595b4a*/
  if ( v15 && *(_BYTE *)(this + 433) ) /*0x595b54*/
  {
    __3_YAXPAX_Z(v15); /*0x595b5d*/
    this->q1A8 = 0; /*0x595b65*/
  }
  *(_BYTE *)(this + 433) = 0; /*0x595b6b*/
  this->q1AC = 0; /*0x595b71*/
  void * v16 = this->q18C; /*0x595b77*/
  this->q188 = &vt_VectorClass_int; /*0x595b7d*/
  if ( v16 && *(_BYTE *)(this + 405) ) /*0x595b87*/
  {
    __3_YAXPAX_Z(v16); /*0x595b90*/
    this->q18C = 0; /*0x595b98*/
  }
  *(_BYTE *)(this + 405) = 0; /*0x595ba0*/
  this->q190 = 0; /*0x595ba6*/
  LoadOptions::Cleanup((_DWORD *)this); /*0x595bac*/
}
}
} // namespace gamemd

// 0x596E50
namespace gamemd {
void RandomMap::SetupDialog(HWND hDlg)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  v7 = GetStringCSF((&off_82B060)[this->q048], 0, g_Str_File_MapGen_cpp, 4887); /*0x596ef7*/
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
  v14 = GetStringCSF((&off_82B070)[this->q190], 0, g_Str_File_MapGen_cpp, 4902); /*0x596fa5*/
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
  v21 = GetStringCSF((&off_82B034)[this->q03C], 0, g_Str_File_MapGen_cpp, 4918); /*0x597056*/
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
  RandomMap *v28 = this; /*0x5970ea*/
  v29 = GetStringCSF((wchar_t *)&aNameTemperate[56 * this->q038], 0, g_Str_File_MapGen_cpp, 4934); /*0x59710f*/
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
  sprintf(Buffer, g_Str_Trace__d, v28[29]); /*0x597206*/
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
} // namespace gamemd

// 0x597D60
namespace gamemd {
void RandomMap::LoadInfo(wchar_t * Destination, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _BYTE v11[12]; // [esp+A4h] [ebp-114h] BYREF
  int v12; // [esp+B0h] [ebp-108h]
  wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

  if ( !Destination ) /*0x597d74*/
    return 0; /*0x597d74*/
  if ( !a2 ) /*0x597d83*/
    return 0; /*0x597d83*/
  void * v2 = (void *)(a2 + 44); /*0x597d89*/
  if ( !_strcmpi((const void *)(a2 + 44), aRandmapSed) || !_strcmpi(v2, DataGlobal_82BC24) ) /*0x597da8*/
    return 0; /*0x597db2*/
  _DWORD v10[22]; // [esp+4Ch] [ebp-16Ch] BYREF
  CCFileClass::Construct(v10, (char *)v2); /*0x597dbd*/
  void *v4[4]; // [esp+Ch] [ebp-1ACh] BYREF
  v4[1] = 0; /*0x597dc6*/
  v4[2] = 0; /*0x597dca*/
  _DWORD v5[3]; // [esp+1Ch] [ebp-19Ch] BYREF
  GenericNode::Constructor(v5); /*0x597dce*/
  _DWORD v6[6]; // [esp+28h] [ebp-190h] BYREF
  GenericNode::Constructor(v6); /*0x597dd7*/
  LinkedList::Prepend(v5, (int)v6); /*0x597ded*/
  v4[3] = &vt_List_INIClass_INISection; /*0x597dfc*/
  memset(&v6[3], 0, 12); /*0x597e04*/
  char v7 = 0; /*0x597e10*/
  int v8 = 0; /*0x597e14*/
  int v9 = 0; /*0x597e18*/
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
  if ( INIClass::ParseValue_Wide((int)g_INI_Key_RandomMap, (int)stru_81B1A4, &g_TypeClass_DefaultString, Source, 0x80u) <= 0 ) /*0x597e58*/
  {
    *Destination = 0; /*0x597e7f*/
    *((_BYTE *)Destination + 437) = 1; /*0x597e82*/
    *((_BYTE *)Destination + 436) = 0; /*0x597e89*/
  }
  else
  {
    wcsncpy(Destination, Source, 0x80u); /*0x597e68*/
    *((_BYTE *)Destination + 437) = 0; /*0x597e70*/
    *((_BYTE *)Destination + 436) = 1; /*0x597e76*/
  }
  *((_DWORD *)Destination + 72) = 0; /*0x597e9a*/
  *((_DWORD *)Destination + 73) = 0; /*0x597ea0*/
  strncpy((char *)Destination + 256, (const char *)v2, 0x20u); /*0x597ea6*/
  if ( !strlen((const char *)Destination + 256) ) /*0x597ead*/
    strncpy((char *)Destination + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
  *((_DWORD *)Destination + 108) = *(_DWORD *)(a2 + 24); /*0x597ee5*/
  *((_DWORD *)Destination + 107) = *(_DWORD *)(a2 + 20); /*0x597eee*/
  HashTable::DestroyHashTableINIClass(v4); /*0x597ef4*/
  v10[0] = &vt_CCFileClass; /*0x597f00*/
  v12 = 0; /*0x597f08*/
  Vector::Clear((int)v11); /*0x597f0f*/
  v10[0] = &off_7E1668; /*0x597f18*/
  BufferIOFileClass::Dtor(v10); /*0x597f20*/
  return 1; /*0x597f26*/
}
}
} // namespace gamemd

// 0x5981F0
namespace gamemd {
void RandomMap::LoadConfig()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int Int_Overwrite; // eax
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
  _DWORD *v20; // esi
  char *j; // eax
  _DWORD *v22; // esi
  void **v24; // [esp-1Ch] [ebp-15Ch] BYREF
  void *v25; // [esp-18h] [ebp-158h]
  int v26; // [esp-14h] [ebp-154h]
  __int16 v27; // [esp-10h] [ebp-150h]
  int v28; // [esp-Ch] [ebp-14Ch]
  int v29; // [esp-8h] [ebp-148h]
  int v30; // [esp-4h] [ebp-144h]
  void ***IntList; // [esp+10h] [ebp-130h] BYREF
  int v32; // [esp+14h] [ebp-12Ch] BYREF
  void *Block; // [esp+18h] [ebp-128h]
  char v34; // [esp+21h] [ebp-11Fh]
  _DWORD *v35; // [esp+30h] [ebp-110h]
  _DWORD *v36; // [esp+34h] [ebp-10Ch]
  _DWORD v37[6]; // [esp+38h] [ebp-108h] BYREF
  int v38; // [esp+50h] [ebp-F0h]
  _DWORD v39[27]; // [esp+54h] [ebp-ECh] BYREF
  char String[128]; // [esp+C0h] [ebp-80h] BYREF

  CCFileClass::Construct(v39, DataGlobal_82BDCC); /*0x598205*/
  _DWORD * v2 = __2_YAPAXI_Z(0x58u); /*0x59820c*/
  _DWORD * v3 = v2; /*0x598211*/
  if ( v2 ) /*0x598218*/
  {
    INIClass::INIClass(v2); /*0x59821c*/
    *((_BYTE *)v3 + 64) = 0; /*0x598221*/
    *v3 = &CCINIClass_Vtable; /*0x598225*/
  }
  else
  {
    v3 = 0; /*0x59822d*/
  }
  INIClass::ResetSection(v3); /*0x598231*/
  CCINIClass::Load(v3, (int)v39, 0, 0); /*0x598241*/
  (*(void (__thiscall **)(_DWORD *))(this->q188 + 12))(this + 98); /*0x598254*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 161) + 12))(this + 161); /*0x598265*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 168) + 12))(this + 168); /*0x598274*/
  int v4 = *(this + 177); /*0x598277*/
  v36 = this + 177; /*0x598283*/
  (*(void (**)(void))(v4 + 12))(); /*0x598287*/
  int v5 = *(this + 184); /*0x59828a*/
  v35 = this + 184; /*0x598296*/
  (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
  (*(void (__thiscall **)(_DWORD *))(this->q1A4 + 12))(this + 105); /*0x5982a9*/
  (*(void (__thiscall **)(_DWORD *))(this->q1C0 + 12))(this + 112); /*0x5982b8*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(off_82B134, DataGlobal_82BDB8, *(this + 175)); /*0x5982d0*/
  int v7 = this->q02C; /*0x5982d5*/
  *(this + 175) = Int_Overwrite; /*0x5982db*/
  this->q02C = INIClass::ReadInt_Overwrite(off_82B134, stru_82BDA4, v7); /*0x5982f7*/
  IntList = &v24; /*0x598300*/
  DynamicVectorClass::Copy(&v24, this + 98); /*0x598304*/
  *IntList = &vt_TypeList_int; /*0x598316*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59832e*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aRmglevellights,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 98, IntList); /*0x598332*/
  v8 = IntList; /*0x598337*/
  *(this + 102) = IntList[4]; /*0x59833e*/
  *(this + 103) = v8[5]; /*0x598344*/
  *(this + 104) = v8[6]; /*0x59834a*/
  v32 = (int)&vt_VectorClass_int; /*0x598356*/
  VectorClass::Destroy((int)&v32); /*0x59835a*/
  IntList = &v24; /*0x598364*/
  DynamicVectorClass::Copy(&v24, this + 161); /*0x598369*/
  *IntList = &vt_TypeList_int; /*0x59837b*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598393*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aRmgvegetationm,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 161, IntList); /*0x598397*/
  v9 = IntList; /*0x59839c*/
  *(this + 165) = IntList[4]; /*0x5983a3*/
  *(this + 166) = v9[5]; /*0x5983a9*/
  *(this + 167) = v9[6]; /*0x5983b3*/
  v32 = (int)&vt_VectorClass_int; /*0x5983b6*/
  VectorClass::Destroy((int)&v32); /*0x5983ba*/
  IntList = &v24; /*0x5983cb*/
  DynamicVectorClass::Copy(&v24, this + 168); /*0x5983cf*/
  *IntList = &vt_TypeList_int; /*0x5983e1*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5983f9*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aRmgvegetationm_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 168, IntList); /*0x5983fd*/
  v10 = IntList; /*0x598402*/
  *(this + 172) = IntList[4]; /*0x598409*/
  *(this + 173) = v10[5]; /*0x59840f*/
  *(this + 174) = v10[6]; /*0x598419*/
  v32 = (int)&vt_VectorClass_int; /*0x59841c*/
  VectorClass::Destroy((int)&v32); /*0x598420*/
  IntList = &v24; /*0x598431*/
  DynamicVectorClass::Copy(&v24, this + 105); /*0x598435*/
  *IntList = &vt_TypeList_int; /*0x598447*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59845f*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aTemperateambie,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 105, IntList); /*0x598463*/
  v11 = IntList; /*0x598468*/
  *(this + 109) = IntList[4]; /*0x59846f*/
  *(this + 110) = v11[5]; /*0x598475*/
  *(this + 111) = v11[6]; /*0x59847b*/
  v32 = (int)&vt_VectorClass_int; /*0x59847e*/
  VectorClass::Destroy((int)&v32); /*0x598486*/
  IntList = &v24; /*0x598497*/
  DynamicVectorClass::Copy(&v24, this + 112); /*0x59849b*/
  *IntList = &vt_TypeList_int; /*0x5984ad*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5984c5*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aSnowambientlig,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 112, IntList); /*0x5984c9*/
  v12 = IntList; /*0x5984ce*/
  *(this + 116) = IntList[4]; /*0x5984d5*/
  *(this + 117) = v12[5]; /*0x5984db*/
  *(this + 118) = v12[6]; /*0x5984e5*/
  v32 = (int)&vt_VectorClass_int; /*0x5984e8*/
  VectorClass::Destroy((int)&v32); /*0x5984ec*/
  IntList = &v24; /*0x5984fd*/
  DynamicVectorClass::Copy(&v24, this + 119); /*0x598501*/
  *IntList = &vt_TypeList_int; /*0x598513*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59852b*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aTemperateambie_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 119, IntList); /*0x59852f*/
  v13 = IntList; /*0x598534*/
  *(this + 123) = IntList[4]; /*0x59853b*/
  *(this + 124) = v13[5]; /*0x598541*/
  *(this + 125) = v13[6]; /*0x59854b*/
  v32 = (int)&vt_VectorClass_int; /*0x59854e*/
  VectorClass::Destroy((int)&v32); /*0x598552*/
  IntList = &v24; /*0x598563*/
  DynamicVectorClass::Copy(&v24, this + 126); /*0x598567*/
  *IntList = &vt_TypeList_int; /*0x598579*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598591*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aTemperateambie_1,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 126, IntList); /*0x598595*/
  v14 = IntList; /*0x59859a*/
  *(this + 130) = IntList[4]; /*0x5985a1*/
  this->q20C = v14[5]; /*0x5985a7*/
  this->q210 = v14[6]; /*0x5985b1*/
  v32 = (int)&vt_VectorClass_int; /*0x5985b4*/
  VectorClass::Destroy((int)&v32); /*0x5985b8*/
  IntList = &v24; /*0x5985c9*/
  DynamicVectorClass::Copy(&v24, this + 133); /*0x5985cd*/
  *IntList = &vt_TypeList_int; /*0x5985df*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5985f7*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)DataGlobal_82BCEC,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 133, IntList); /*0x5985fb*/
  v15 = IntList; /*0x598600*/
  *(this + 137) = IntList[4]; /*0x598607*/
  *(this + 138) = v15[5]; /*0x59860d*/
  *(this + 139) = v15[6]; /*0x598617*/
  v32 = (int)&vt_VectorClass_int; /*0x59861a*/
  VectorClass::Destroy((int)&v32); /*0x59861e*/
  IntList = &v24; /*0x59862f*/
  DynamicVectorClass::Copy(&v24, this + 140); /*0x598633*/
  *IntList = &vt_TypeList_int; /*0x598645*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59865d*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)DataGlobal_82BCDC,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 140, IntList); /*0x598661*/
  v16 = IntList; /*0x598666*/
  this->q024 = IntList[4]; /*0x59866d*/
  *(this + 145) = v16[5]; /*0x598673*/
  *(this + 146) = v16[6]; /*0x59867d*/
  v32 = (int)&vt_VectorClass_int; /*0x598680*/
  VectorClass::Destroy((int)&v32); /*0x598684*/
  IntList = &v24; /*0x598695*/
  DynamicVectorClass::Copy(&v24, this + 147); /*0x598699*/
  *IntList = &vt_TypeList_int; /*0x5986ab*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5986c3*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)DataGlobal_82BCC8,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 147, IntList); /*0x5986c7*/
  v17 = IntList; /*0x5986cc*/
  *(this + 151) = IntList[4]; /*0x5986d3*/
  *(this + 152) = v17[5]; /*0x5986d9*/
  *(this + 153) = v17[6]; /*0x5986df*/
  v32 = (int)&vt_VectorClass_int; /*0x5986e8*/
  if ( Block && v34 ) /*0x5986f4*/
    __3_YAXPAX_Z(Block); /*0x5986f7*/
  IntList = &v24; /*0x59870b*/
  DynamicVectorClass::Copy(&v24, this + 154); /*0x59870f*/
  *IntList = &vt_TypeList_int; /*0x598721*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598739*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)DataGlobal_82BCB8,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 154, IntList); /*0x59873d*/
  v18 = IntList; /*0x598742*/
  *(this + 158) = IntList[4]; /*0x598749*/
  *(this + 159) = v18[5]; /*0x59874f*/
  this->q028 = v18[6]; /*0x598759*/
  v32 = (int)&vt_VectorClass_int; /*0x59875c*/
  VectorClass::Destroy((int)&v32); /*0x598760*/
  *(this + 191) = INIClass::ReadInt_Overwrite(off_82B134, stru_82BCAC, *(this + 191)); /*0x59877f*/
  if ( INIClass::GetString( /*0x5987a5*/
         (unsigned __int8 ***)v3,
         (unsigned __int8 *)off_82B134,
         (unsigned __int8 *)aTemperateorepa,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    TypeList::BuildingTypeConstructor(&v32); /*0x5987b7*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x5987d3*/
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
         (unsigned __int8 ***)v3,
         (unsigned __int8 *)off_82B134,
         (unsigned __int8 *)aSnoworepatchla,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    TypeList::BuildingTypeConstructor(&v32); /*0x598886*/
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) ) /*0x5988a2*/
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
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x598932*/
  CCFileClass::Reset(v39); /*0x598938*/
  return CCFileClass::Destruct(v39); /*0x598946*/
}
}
} // namespace gamemd

// 0x598960
namespace gamemd {
void RandomMap::Generate(char a2, HWND hDlg)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND DlgItem; // eax
  int i; // esi
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
  _DWORD *v20; // esi
  int v21; // eax
  void *v22; // eax
  int n; // eax
  void (__stdcall *v24)(HWND, UINT, WPARAM, LPARAM); // esi
  int ii; // eax
  RandomMap *v26; // edi
  int jj; // eax
  _DWORD *v28; // eax
  int kk; // eax
  int mm; // edi
  _DWORD *v31; // esi
  int v32; // eax
  char result; // al
  HWND v34; // eax
  bool v35; // [esp+11h] [ebp-415h]
  _DWORD *v36; // [esp+12h] [ebp-414h] BYREF
  RandomMap *v37; // [esp+16h] [ebp-410h]
  _DWORD v38[6]; // [esp+1Ah] [ebp-40Ch] BYREF
  int v39[253]; // [esp+32h] [ebp-3F4h] BYREF

  v37 = this; /*0x598973*/
  if ( off_82AF14 ) /*0x598977*/
    off_82AF14(); /*0x598979*/
  qmemcpy(&g_Randomizer, SeedInitRNG(v39, *(this + 29)), 0x3F4u); /*0x59899b*/
  LOBYTE(v38[0]) = 0; /*0x5989ab*/
  v38[2] = 0; /*0x5989af*/
  v38[3] = 0; /*0x5989b7*/
  v38[4] = sub_598000; /*0x5989bf*/
  qmemcpy(&g_TileSystemInit, v38, 0x18u); /*0x5989c9*/
  if ( off_82AF14 ) /*0x5989cb*/
    off_82AF14(); /*0x5989cd*/
  v35 = *((_BYTE *)g_ScenarioClass_Instance + 13720) == 0; /*0x5989e7*/
  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x5989dc*/
  {
    ProgressAnim::Init(0, 1079574528, 1, hDlg); /*0x5989fb*/
    SHPClass::Load(aProgbar2Shp, 0, 0); /*0x598a0c*/
    TextRenderer::MeasureBuilding(-1, -1, 0, 0, 1); /*0x598a22*/
    LoadScreen::Render((int)g_UIManager, 0, (int)this, NAN); /*0x598a34*/
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
  ++g_IKnowWhatImDoing; /*0x598a9a*/
  if ( a2 ) /*0x598aa0*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598aa8*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598ab2*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x598ac4*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598acc*/
  }
  if ( off_82AF14 ) /*0x598ad8*/
    off_82AF14(); /*0x598ada*/
  RandomMap::LoadConfig(this); /*0x598ade*/
  Debug::Log(); /*0x598ae8*/
  int v5 = this->q03C; /*0x598aed*/
  if ( v5 == 3 || v5 == 4 ) /*0x598afb*/
  {
    if ( this->__pad_04C ) /*0x598b06*/
      RandomMap::GrowTiberium(this); /*0x598b0d*/
  }
  else
  {
    RandomMap::FinalizeMapData(this); /*0x598aff*/
  }
  FindMapCell(this); /*0x598b14*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x598b1e*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 154); /*0x598b30*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 55.0, NAN); /*0x598b4b*/
  if ( off_82AF14 ) /*0x598b57*/
    off_82AF14(); /*0x598b59*/
  if ( a2 ) /*0x598b62*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598b6a*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598b74*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x598b86*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598b8e*/
  }
  if ( off_82AF14 ) /*0x598b9a*/
    off_82AF14(); /*0x598b9c*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x598ba4*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 159); /*0x598bb6*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 60.0, NAN); /*0x598bd1*/
  if ( off_82AF14 ) /*0x598bdd*/
    off_82AF14(); /*0x598bdf*/
  if ( a2 ) /*0x598be8*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598bf0*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598bfa*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x598c0c*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598c14*/
  }
  if ( off_82AF14 ) /*0x598c20*/
    off_82AF14(); /*0x598c22*/
  Debug::Log(); /*0x598c29*/
  if ( g_MapTileArray ) /*0x598c38*/
  {
    int v6 = unk_89C2DC * unk_89C2DC; /*0x598c40*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x598c45*/
    {
      int v7 = 0; /*0x598c47*/
      do /*0x598c64*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v7 + 56) = -1; /*0x598c52*/
        *(_DWORD *)((char *)g_MapTileArray + v7 + 60) = -1; /*0x598c5c*/
        v7 += 80; /*0x598c60*/
        --v6; /*0x598c63*/
      }
      while ( v6 ); /*0x598c64*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x598c71*/
  {
    void * v9 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x598c78*/
    if ( v9 ) /*0x598c7d*/
      RandomMap::Constructor_VectorClass_Cell_(v9, 1); /*0x598c81*/
  }
  g_MapTileArrayEnd = 0; /*0x598c89*/
  RandomMap::GenerateTerrainForAllCells(); /*0x598c8f*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x598c9d*/
  {
    v10 = g_RandomMap_TerrainState; /*0x598ca4*/
    v12 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x598caa*/
    if ( *(_BYTE *)(v12 + 20) ) /*0x598cad*/
    {
      v13 = v37[15]; /*0x598cb6*/
      v14 = v13 == 3 || v13 == 4; /*0x598cc7*/
      RandomMap::CollectTerrainCells((*(_DWORD *)(v12 + 12) > 8000) + !v14 + 4); /*0x598ce4*/
      RandomMap::PlaceRandomMapTerrain(v12); /*0x598ceb*/
    }
  }
  LOBYTE(v10) = 0; /*0x598cfa*/
  Map_Helper_58D010(v10); /*0x598cfc*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x598d07*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 164); /*0x598d19*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 65.0, NAN); /*0x598d34*/
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
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x598d8d*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 169); /*0x598d9f*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 70.0, NAN); /*0x598dba*/
  if ( off_82AF14 ) /*0x598dc6*/
    off_82AF14(); /*0x598dc8*/
  if ( a2 ) /*0x598dd1*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598dd9*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598dea*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x598e00*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598e08*/
  }
  if ( off_82AF14 ) /*0x598e14*/
    off_82AF14(); /*0x598e16*/
  RandomMap::PlaceShoreObjects(v37); /*0x598e1a*/
  Debug::Log(); /*0x598e24*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x598e31*/
  for ( k = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); k; k = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x598e42*/
    House::AnnounceUpgrade(k, -1); /*0x598e48*/
  if ( off_82AF14 ) /*0x598e62*/
    off_82AF14(); /*0x598e64*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x598e6c*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 174); /*0x598e7e*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 75.0, NAN); /*0x598e99*/
  Debug::Log(); /*0x598ea3*/
  do /*0x598ebd*/
  {
    while ( !(unsigned __int8)DistributeRandomMapTerrain() ) /*0x598eb2*/
      ; /*0x598eab*/
  }
  while ( !(unsigned __int8)SpreadMapSeedTerrainFromWaypoints(v37) ); /*0x598ebd*/
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
        *(_DWORD *)((char *)g_MapTileArray + v18 + 56) = -1; /*0x598f24*/
        *(_DWORD *)((char *)g_MapTileArray + v18 + 60) = -1; /*0x598f2e*/
        v18 += 80; /*0x598f32*/
        --v17; /*0x598f35*/
      }
      while ( v17 ); /*0x598f36*/
    }
  }
  for ( m = g_RandomMap_TileData - 1; m >= 0; --m ) /*0x598f48*/
  {
    v20 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + m); /*0x598f4f*/
    if ( v20 ) /*0x598f54*/
    {
      if ( *v20 ) /*0x598f56*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v20)(*v20, 1); /*0x598f60*/
        *v20 = 0; /*0x598f62*/
      }
      v36 = v20; /*0x598f74*/
      v21 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x598f78*/
      if ( v21 != -1 ) /*0x598f7e*/
        Vector4::EraseAt(v21); /*0x598f86*/
      v22 = (void *)v20[11]; /*0x598f8b*/
      v20[10] = &vt_VectorClass_Cell; /*0x598f8e*/
      if ( v22 && *((_BYTE *)v20 + 53) ) /*0x598f95*/
      {
        __3_YAXPAX_Z(v22); /*0x598f9b*/
        v20[11] = 0; /*0x598fa3*/
      }
      *((_BYTE *)v20 + 53) = 0; /*0x598fa7*/
      v20[12] = 0; /*0x598faa*/
      __3_YAXPAX_Z(v20); /*0x598fad*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x598fbd*/
  Debug::Log(); /*0x598fc3*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x598fd0*/
  for ( n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); n; n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x598fe1*/
    House::AnnounceUpgrade(n, -1); /*0x598fe7*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x598fff*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 179); /*0x599011*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 80.0, NAN); /*0x59902c*/
  if ( off_82AF14 ) /*0x599038*/
    off_82AF14(); /*0x59903a*/
  if ( a2 ) /*0x599043*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59904b*/
    v24 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599057*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x599062*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x599079*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599081*/
  }
  else
  {
    v24 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599088*/
  }
  if ( off_82AF14 ) /*0x59909a*/
    off_82AF14(); /*0x59909c*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x5990a4*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 184); /*0x5990b6*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 85.0, NAN); /*0x5990d1*/
  if ( off_82AF14 ) /*0x5990dd*/
    off_82AF14(); /*0x5990df*/
  if ( a2 ) /*0x5990e8*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x5990f0*/
    v24(hDlg, 0xFu, 0, 0); /*0x599101*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x599112*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x59911a*/
  }
  if ( off_82AF14 ) /*0x599126*/
    off_82AF14(); /*0x599128*/
  Debug::Log(); /*0x59912f*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59913c*/
  for ( ii = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); ii; ii = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59914d*/
    House::AnnounceUpgrade(ii, -1); /*0x599153*/
  if ( off_82AF14 ) /*0x59916d*/
    off_82AF14(); /*0x59916f*/
  Debug::Log(); /*0x599176*/
  v26 = v37; /*0x59917b*/
  GenerateTerrainHeightMap(v37); /*0x599184*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x59918f*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 189); /*0x5991a1*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 90.0, NAN); /*0x5991bc*/
  if ( off_82AF14 ) /*0x5991c8*/
    off_82AF14(); /*0x5991ca*/
  if ( a2 ) /*0x5991d3*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x5991db*/
    v24(hDlg, 0xFu, 0, 0); /*0x5991ec*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x5991fd*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599205*/
  }
  if ( off_82AF14 ) /*0x599211*/
    off_82AF14(); /*0x599213*/
  Debug::Log(); /*0x59921a*/
  if ( v26[14] ) /*0x59921f*/
  {
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59923e*/
    for ( jj = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); jj; jj = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59924f*/
    {
      v36 = *(_DWORD **)(jj + 36); /*0x59925a*/
      v28 = (char *)g_MapTileArray + 80 * (__int16)v36 + 80 * unk_89C2DC * SHIWORD(v36); /*0x59927b*/
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
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x5992c1*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 194); /*0x5992d3*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 95.0, NAN); /*0x5992ee*/
  if ( off_82AF14 ) /*0x5992fa*/
    off_82AF14(); /*0x5992fc*/
  if ( a2 ) /*0x599305*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59930d*/
    v24(hDlg, 0xFu, 0, 0); /*0x59931e*/
    if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x59932f*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599337*/
  }
  --g_IKnowWhatImDoing; /*0x59934a*/
  if ( off_82AF14 ) /*0x599350*/
    off_82AF14(); /*0x599352*/
  Debug::Log(); /*0x599359*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x599366*/
  for ( kk = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); kk; kk = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x599377*/
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
    __3_YAXPAX_Z(g_MapTileArray); /*0x5993c8*/
    g_MapTileArray = 0; /*0x5993d0*/
  }
  for ( mm = g_RandomMap_TileData - 1; mm >= 0; --mm ) /*0x5993e1*/
  {
    v31 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + mm); /*0x5993e9*/
    if ( v31 ) /*0x5993ee*/
    {
      if ( *v31 ) /*0x5993f0*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v31)(*v31, 1); /*0x5993fa*/
        *v31 = 0; /*0x5993fc*/
      }
      v36 = v31; /*0x59940e*/
      v32 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x599412*/
      if ( v32 != -1 ) /*0x599418*/
        Vector4::EraseAt(v32); /*0x599420*/
      v31[10] = &vt_VectorClass_Cell; /*0x599428*/
      Buffer::Cleanup((int)(v31 + 10)); /*0x59942e*/
      __3_YAXPAX_Z(v31); /*0x599434*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x599446*/
  MapClass::PostProcessReveal(1); /*0x59944c*/
  Debug::Log(); /*0x599456*/
  Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)&DataGlobal_87F8E4); /*0x599468*/
  RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, 0); /*0x599472*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x59947e*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 199); /*0x599490*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 100.0, NAN); /*0x5994ab*/
  Debug::Log(); /*0x5994b5*/
  result = v35; /*0x5994ba*/
  if ( v35 ) /*0x5994c3*/
  {
    v34 = GetDlgItem(hDlg, 1592); /*0x5994d2*/
    if ( v34 ) /*0x5994da*/
      ShowWindow(v34, 0); /*0x5994de*/
    if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) ) /*0x5994ea*/
      Multiplayer::ShowProgress(&g_GameMode_Current, 99); /*0x5994f9*/
    else
      Network::UpdateLatencyDisplay((int)g_UIManager, 0, 0.0, NAN); /*0x599510*/
    return VtableStub::643E70(g_UIManager); /*0x59951a*/
  }
  return result; /*0x59951f*/
}
}
} // namespace gamemd

// 0x599650
namespace gamemd {
void * RandomMap::SetupTheater(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  double v9; // rdi
  double v10; // st7
  int *Waypoint_Location; // eax
  __int16 *v12; // eax
  _DWORD *v13; // eax
  _DWORD *WorldCoords; // eax
  MapResourceClass *v15; // esi
  _DWORD *v16; // eax
  ObjectClass *v17; // eax
  _DWORD *v18; // eax
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
  __int16 *v40; // eax
  _DWORD *v41; // eax
  _DWORD *v42; // eax
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
  _DWORD *v57; // esi
  int v58; // eax
  void *v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  wchar_t *StringCSF; // eax
  #376 *v66; // [esp+18h] [ebp-B0h]
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
  _DWORD v81[6]; // [esp+8Ch] [ebp-3Ch] BYREF
  char v82; // [esp+A4h] [ebp-24h]
  int v83[3]; // [esp+BCh] [ebp-Ch] BYREF

  v74 = (MapResourceClass *)this;
  *(float *)&v72 = (double)this->q190 * 0.33333334;
  v68 = (double)*(this + 26) * 0.33333334;
  RandomMap::LoadConfig(this);
  int v3 = this->q03C;
  if ( v3 == 3 || v3 == 4 )
  {
    v5 = v68;
  }
  else
  {
    if ( *(float *)&v72 >= 1.2 )
      double v4 = 1.2;
    else
      v4 = *(float *)&v72;
    *(float *)&v72 = v4;
    if ( v68 >= 1.2 )
      v5 = 1.2;
    else
      v5 = v68;
  }
  this->q180 = Math::RoundToInt(v5);
  v6 = Math::RoundToInt(v5);
  v76 = this->q180;
  v78[2] = v76 + 4;
  *(this + 97) = v6;
  v78[0] = 0;
  v78[1] = 0;
  v78[3] = v6 + 12;
  v75[0] = 2;
  v75[1] = 5;
  v77 = v6;
  *(this + 195) = 4;
  v79[1] = 0;
  v79[2] = 0;
  INISectionList::Constructor(v80);
  Node::Init(v81);
  v81[5] = 0;
  v82 = 0;
  v79[0] = &CCINIClass_Vtable;
  INIClass::ClearSection((int)v79, 0, 0);
  v7 = this->q038;
  *(this + 195) = 4;
  INIClass::SetString((char *)v79, (unsigned __int8 *)&DataGlobal_81FFF0, unk_818658, &Theater_Array[112 * v7]);
  INIClass::SetRect((char *)v79, (unsigned __int8 *)&DataGlobal_81FFF0, g_INI_Key_Size, v78);
  INIClass::SetRect((char *)v79, (unsigned __int8 *)&DataGlobal_81FFF0, g_INI_Key_LocalSize, v75);
  INIClass::SetInt((char *)v79, (unsigned __int8 *)&DataGlobal_81FFF0, aLevel, *(this + 195), 0);
  INIClass::SetString(
    (char *)v79,
    (unsigned __int8 *)(*(_DWORD *)g_SuperWeaponTypeCount + 36),
    aTechlevel,
    DataGlobal_82BFAC);
  INIClass::SetString(
    (char *)v79,
    (unsigned __int8 *)g_INI_Key_Basic,
    g_INI_Key_Player,
    (char *)(*(_DWORD *)g_SuperWeaponTypeCount + 36));
  if ( this->q038 )
    v8 = this->q1C4;
  else
    v8 = this->q1A8;
  v73[0] = (double)*(int *)(v8 + 4 * this->q048) * 0.01;
  v9 = v73[0];
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_Ambient, v73[0]);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aRedtint, 1.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aGreentint, 1.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aBluetint, 1.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_Ground, 0.0);
  LODWORD(v73[0]) = *(_DWORD *)(*(_DWORD *)&v74[99] + 4 * *(_DWORD *)&v74[18]) / 100;
  v10 = (double)SLODWORD(v73[0]);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aLevel, v10);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonAmbient, v9);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonRed, 0.3);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonGreen, 0.4);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonBlue, 0.75);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonGround, 0.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonLevel, 0.0);
  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 1.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  BuildingClass::FreeUpgradeQueue();
  BuildingClass::FreeUpgradeQueue2();
  if ( !a2 )
  {
    ++g_IKnowWhatImDoing;
    ScenarioClass::SetFileName((char *)g_ScenarioClass_Instance, &g_INI_DefaultBuffer);
    if ( ArmageddonMode )
      ResetScenario();
    ScenarioClass::LoadMap(1, (int)v79, v10);
    PostLoadInitScenario(SLODWORD(v9));
    HIWORD(v69) = g_CellPositionOffset / 2 + g_Cell_PositionLUT / 2;
    LOWORD(v69) = HIWORD(v69) + 1;
    ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, 700, v69);
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, v73, 700);
    ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, *((_DWORD *)g_ScenarioClass_Instance + 131), *Waypoint_Location);
    v12 = (__int16 *)ScenarioClass::Get_Waypoint_Location(
                       (char *)g_ScenarioClass_Instance,
                       v73,
                       *((_DWORD *)g_ScenarioClass_Instance + 131));
    v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v12);
    v13[80] |= 4u;
    WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v73, *((_DWORD *)g_ScenarioClass_Instance + 131));
    TacticalClass::SetPositionThunk((int)WorldCoords);
    goto LABEL_153;
  }
  ScenarioClass::InitTimer((int)g_ScenarioClass_Instance);
  v15 = v74;
  if ( !*(_DWORD *)&v74[95] )
  {
    v16 = __2_YAPAXI_Z(4u);
    if ( v16 )
      v17 = (ObjectClass *)unknown_libname_27(v16);
    ObjectClass *v17 = 0;
    v74[95] = (MapResourceClass)v17;
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 101);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 2.0, NAN);
  v18 = (_DWORD *)v15[94];
  v19 = v15[14];
  v20 = *((_DWORD *)g_ScenarioClass_Instance + 1174);
  LODWORD(v73[0]) = v19;
  v67 = 1;
  v70 = v20;
  if ( v18 )
  {
    v20 = v18[14];
    v70 = v20;
    if ( v18[25] == *(_DWORD *)&v15[25] && v18[26] == *(_DWORD *)&v15[26] && v20 == v19 )
      v67 = v18[20] != *(_DWORD *)&v15[20];
  }
  v21 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v21 = (IUnknown *)off_82AF14;
    v19 = (MapResourceClass)LODWORD(v73[0]);
  }
  if ( !*(_DWORD *)&v15[94] || v19 != v20 || v67 )
  {
    v22 = g_AbstractTypePool - 1;
    if ( g_AbstractTypePool - 1 >= 0 )
    {
      do
      {
        if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)DataGlobal_A8E96C + v22) + 4) + 12))(*((_DWORD *)DataGlobal_A8E96C + v22) + 4) == 18
          && v22 < g_AbstractTypePool )
        {
          v23 = v22;
          if ( v22 < --g_AbstractTypePool )
          {
            do
            {
              ++v23;
              *((_DWORD *)DataGlobal_A8E96C + v23 - 1) = *((_DWORD *)DataGlobal_A8E96C + v23);
            }
            while ( v23 < g_AbstractTypePool );
          }
        }
        --v22;
      }
      while ( v22 >= 0 );
      v21 = (IUnknown *)off_82AF14;
    }
    if ( v21 )
      ((void (__stdcall *)())v21)();
    Game::DestroyAllObjects();
    if ( off_82AF14 )
      off_82AF14();
    v24 = 0;
    if ( g_TechnoClassCount > 0 )
    {
      v25 = DataGlobal_A8E970;
      do
      {
        v26 = *((_DWORD *)g_FrameCounter + v24);
        if ( g_AbstractTypePool < v25 )
          goto LABEL_57;
        if ( !DataGlobal_A8E975 && v25 || DataGlobal_A8E97C <= 0 )
          goto LABEL_59;
        if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A8E968 + 8))(
               &DataGlobal_A8E968,
               DataGlobal_A8E97C + v25,
               0) )
        {
LABEL_57:
          v27 = g_AbstractTypePool++;
          *((_DWORD *)DataGlobal_A8E96C + v27) = v26;
        }
        v25 = DataGlobal_A8E970;
LABEL_59:
        ++v24;
      }
      while ( v24 < g_TechnoClassCount );
    }
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 104);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 5.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( v67 )
  {
    MouseClass::HandleClick((int)&DataGlobal_87F7E8);
    CellClass::DrawWrapper(&DataGlobal_87F7E8.field_0, v78, 1, 0, 1);
    Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)v75);
    if ( g_TacticalClass_Instance )
      (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)g_TacticalClass_Instance + 32))(g_TacticalClass_Instance, 1);
    v28 = __2_YAPAXI_Z(0xE18u);
    if ( v28 )
      v29 = (IPersistStream *)TacticalMap::Construct((int)v28);
    IPersistStream *v29 = 0;
    g_TacticalClass_Instance = v29;
    Map_Setup_6DA980();
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 109);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 10.0, NAN);
  for ( i = g_HouseClass_BuildState; g_HouseClass_BuildState > 0; i = g_HouseClass_BuildState )
  {
    v31 = *((_DWORD *)g_UnitClassPool + i - 1);
    if ( v31 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1);
  }
  for ( j = (ObjectClass *)g_BuildingClass_Count; g_BuildingClass_Count > 0; j = (ObjectClass *)g_BuildingClass_Count )
  {
    v33 = *((_DWORD *)g_InfantryClassLimit + (_DWORD)j - 1);
    if ( v33 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 32))(v33, 1);
  }
  for ( k = g_BuildingProductionState; g_BuildingProductionState > 0; k = g_BuildingProductionState )
  {
    v35 = *((_DWORD *)g_BuildingClass_InstanceCount + k - 1);
    if ( v35 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v35 + 32))(v35, 1);
  }
  for ( m = DataGlobal_A8E998; DataGlobal_A8E998 > 0; m = DataGlobal_A8E998 )
  {
    v37 = *((_DWORD *)DataGlobal_A8E98C + m - 1);
    if ( v37 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v37 + 32))(v37, 1);
  }
  if ( off_82AF14 )
    off_82AF14();
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
  for ( n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); n; n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    *(_BYTE *)(n + 284) = 0;
    *(_BYTE *)(n + 283) = 4;
    *(_DWORD *)(n + 56) = 0;
    *(_BYTE *)(n + 282) = 0;
    *(_DWORD *)(n + 68) = -1;
    *(_BYTE *)(n + 286) = 0;
  }
  if ( off_82AF14 )
    off_82AF14();
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 114);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 15.0, NAN);
  MapClass::ProcessRegion(&DataGlobal_87F7E8);
  Terrain::ConnectivityGraph(&DataGlobal_87F7E8);
  MapClass::BuildSubzones(&DataGlobal_87F7E8);
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 119);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 20.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  ScenarioClass::ClearAllWaypoints((char *)g_ScenarioClass_Instance);
  HIWORD(v72) = g_CellPositionOffset / 2 + g_Cell_PositionLUT / 2;
  LOWORD(v72) = HIWORD(v72) + 1;
  ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, 700, (int)v72);
  v39 = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v72, 700);
  ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, 699, *v39);
  v40 = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v72, 699);
  v41 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v40);
  v41[80] |= 4u;
  v42 = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v83, 699);
  TacticalClass::SetPositionThunk((int)v42);
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 124);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 25.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v43 = LODWORD(v73[0]);
  ++g_IKnowWhatImDoing;
  if ( LODWORD(v73[0]) != *((_DWORD *)g_ScenarioClass_Instance + 1174) )
  {
    LoadTheaterClassMIX(SLODWORD(v73[0]));
    *((_DWORD *)g_ScenarioClass_Instance + 1174) = v43;
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 129);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 30.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v44 = v74;
  if ( !*(_DWORD *)&v74[94] || v43 != v70 || v67 )
  {
    ResetRules(g_RulesClass_Instance);
    ScenarioClass::ReadGlobalVariables((char *)g_ScenarioClass_Instance, (char *)DataGlobal_887048);
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 134);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 35.0, NAN);
  v45 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v45 = (IUnknown *)off_82AF14;
  }
  if ( !*(_DWORD *)&v44[94] || v43 != v70 || v67 )
  {
    if ( !HouseClass_Count )
    {
      v46 = 0;
      if ( g_SuperWeaponTypeArray > 0 )
      {
        do
        {
          v47 = __2_YAPAXI_Z(0x160B8u);
          if ( v47 )
            v48 = HouseClass::Construct((int)v47, *((_DWORD *)g_SuperWeaponTypeCount + v46));
          else
            v48 = 0;
          HouseClass::ReadFromINI(v48, (unsigned __int8 ***)v79);
          ++v46;
        }
        while ( v46 < g_SuperWeaponTypeArray );
        v45 = (IUnknown *)off_82AF14;
      }
    }
    if ( v45 )
      ((void (__stdcall *)())v45)();
    LoadObjectTypeClassTheaterSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174));
    v49 = *((_DWORD *)g_ScenarioClass_Instance + 1174);
    if ( v49 == dword_822CF8 )
      ResetAllTechnoField776();
    else
      LoadTerrainTypeClassTheatre(v49, 1);
    LoadBuildingTypeClassSHPs(*((_DWORD *)g_ScenarioClass_Instance + 1174));
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
    LoadBuildingTypeClassTheatreSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadFactoryClassTheaterSHP(*((_DWORD *)g_ScenarioClass_Instance + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadMapClassIsometricTiles(0, 1);
  }
  dword_822CF8 = *((_DWORD *)g_ScenarioClass_Instance + 1174);
LABEL_153:
  v50 = v74;
  --g_IKnowWhatImDoing;
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 139);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 40.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( g_MapTileArray )
    __3_YAXPAX_Z(g_MapTileArray);
  v51 = unk_89C2DC * unk_89C2DC;
  v52 = (char *)__2_YAPAXI_Z(80 * unk_89C2DC * unk_89C2DC);
  if ( v52 )
  {
    v53 = v51 - 1;
    if ( v53 >= 0 )
    {
      v54 = v52 + 8;
      v55 = v53 + 1;
      do
      {
        *((_WORD *)v54 - 4) = 0;
        *((_WORD *)v54 - 3) = 0;
        *(_DWORD *)v54 = 0;
        *((_DWORD *)v54 + 2) = 0;
        *((_DWORD *)v54 + 4) = 0;
        *((_DWORD *)v54 + 6) = 0;
        *((_DWORD *)v54 + 8) = 0;
        *((_DWORD *)v54 + 10) = 0;
        *((_DWORD *)v54 + 1) = 0;
        *((_DWORD *)v54 + 3) = 0;
        *((_DWORD *)v54 + 5) = 0;
        *((_DWORD *)v54 + 7) = 0;
        *((_DWORD *)v54 + 9) = 0;
        *((_DWORD *)v54 + 11) = 0;
        *((_DWORD *)v54 + 12) = 0;
        *((_DWORD *)v54 + 13) = 0;
        *((_DWORD *)v54 + 14) = -1;
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
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
  for ( ii = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); ii; ii = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    LODWORD(v73[0]) = *(_DWORD *)(ii + 36);
    *((_DWORD *)g_MapTileArray + 20 * SLOWORD(v73[0]) + 20 * unk_89C2DC * SWORD1(v73[0])) = LODWORD(v73[0]);
    *(_BYTE *)(ii + 283) = v50[195].__tail_0[0];
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 144);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 45.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  g_MapTileArrayEnd = 0;
  for ( jj = g_RandomMap_TileData - 1; jj >= 0; --jj )
  {
    v57 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + jj);
    if ( v57 )
    {
      if ( *v57 )
      {
        (**(void (__thiscall ***)(_DWORD, int))*v57)(*v57, 1);
        *v57 = 0;
      }
      LODWORD(v73[0]) = v57;
      v58 = (*(int (__thiscall **)(int *, double *))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, v73);
      if ( v58 != -1 )
        Vector4::EraseAt(&g_RandomMap_BuildObject, v58);
      v59 = (void *)v57[11];
      v57[10] = &vt_VectorClass_Cell;
      if ( v59 && *((_BYTE *)v57 + 53) )
      {
        __3_YAXPAX_Z(v59);
        v57[11] = 0;
      }
      *((_BYTE *)v57 + 53) = 0;
      v57[12] = 0;
      __3_YAXPAX_Z(v57);
    }
  }
  v50[193] = 0;
  v50[194] = 0;
  *(_QWORD *)&v73[0] = (unsigned int)Random::State(&g_Randomizer);
  v50[196].__tail_0[0] = (double)*(__int64 *)&v73[0] * 2.328306437080797e-10 < 0.25;
  TacticalClass::FreeResources((int)&DataGlobal_87F7E8);
  Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)v75);
  RandomMap::PlaceTileSet(&DataGlobal_87F7E8);
  RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, 0);
  if ( v50[14] )
    v60 = *(_DWORD *)(*(_DWORD *)&v50[113] + 4 * *(_DWORD *)&v50[18]);
  else
    v60 = *(_DWORD *)(*(_DWORD *)&v50[106] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)g_ScenarioClass_Instance + 3402) = v60;
  *((_DWORD *)g_ScenarioClass_Instance + 3409) = *(_DWORD *)(*(_DWORD *)&v50[99] + 4 * *(_DWORD *)&v50[18]);
  if ( v50[14] )
    v61 = *(_DWORD *)(*(_DWORD *)&v50[141] + 4 * *(_DWORD *)&v50[18]);
  else
    v61 = *(_DWORD *)(*(_DWORD *)&v50[120] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)g_ScenarioClass_Instance + 3405) = v61;
  if ( v50[14] )
    v62 = *(_DWORD *)(*(_DWORD *)&v50[148] + 4 * *(_DWORD *)&v50[18]);
  else
    v62 = *(_DWORD *)(*(_DWORD *)&v50[127] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)g_ScenarioClass_Instance + 3406) = v62;
  if ( v50[14] )
    v63 = *(_DWORD *)(*(_DWORD *)&v50[155] + 4 * *(_DWORD *)&v50[18]);
  else
    v63 = *(_DWORD *)(*(_DWORD *)&v50[134] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)g_ScenarioClass_Instance + 3407) = v63;
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 149);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 50.0, NAN);
  if ( !wcslen((const wchar_t *)&v50[30]) )
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 6746);
    wcscpy((wchar_t *)&v50[30], StringCSF);
  }
  return HashTable::DestroyHashTableINIClass(v79);
}
}
} // namespace gamemd

// 0x59A6C0
namespace gamemd {
void RandomMap::FinalizeMapData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  _DWORD *j; // edi
  signed int k; // esi
  _DWORD *NeighbourContent; // eax
  int m; // ebx
  int result; // eax
  int *n; // ebp
  signed int ii; // esi

  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59a6cc*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59a6dd*/
    *(_DWORD *)(i + 56) = dword_AA0738; /*0x59a6e5*/
  int v3 = this->q03C; /*0x59a6f6*/
  if ( v3 ) /*0x59a6fc*/
  {
    int v4 = v3 - 1; /*0x59a6fe*/
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
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59a722*/
  for ( j = (_DWORD *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x59a735*/
        j;
        j = (_DWORD *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    if ( j[14] == dword_AA0738 ) /*0x59a741*/
    {
      char v6 = 1; /*0x59a743*/
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
    int v9 = unk_89C2DC * unk_89C2DC; /*0x59a79c*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x59a7a1*/
    {
      int v10 = 0; /*0x59a7a3*/
      do /*0x59a7c0*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v10 + 56) = -1; /*0x59a7ae*/
        *(_DWORD *)((char *)g_MapTileArray + v10 + 60) = -1; /*0x59a7b8*/
        v10 += 80; /*0x59a7bc*/
        --v9; /*0x59a7bf*/
      }
      while ( v9 ); /*0x59a7c0*/
    }
  }
  for ( m = g_RandomMap_TileData - 1; m >= 0; --m ) /*0x59a7cc*/
  {
    _DWORD * v12 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + m); /*0x59a7df*/
    if ( v12 ) /*0x59a7e4*/
    {
      if ( *v12 ) /*0x59a7ea*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v12)(*v12, 1); /*0x59a7f4*/
        *v12 = 0; /*0x59a7f6*/
      }
      _DWORD * v19 = v12; /*0x59a808*/
      int v13 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v19); /*0x59a80c*/
      if ( v13 != -1 && v13 < g_RandomMap_TileData && v13 < --g_RandomMap_TileData ) /*0x59a827*/
      {
        do /*0x59a83f*/
        {
          ++v13; /*0x59a82f*/
          *((_DWORD *)g_RandomMap_TerrainState + v13 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v13); /*0x59a833*/
        }
        while ( v13 < g_RandomMap_TileData ); /*0x59a83f*/
      }
      void * v14 = (void *)v12[11]; /*0x59a841*/
      v12[10] = &vt_VectorClass_Cell; /*0x59a844*/
      if ( v14 && *((_BYTE *)v12 + 53) ) /*0x59a84b*/
      {
        __3_YAXPAX_Z(v14); /*0x59a853*/
        v12[11] = 0; /*0x59a85b*/
      }
      *((_BYTE *)v12 + 53) = 0; /*0x59a85f*/
      v12[12] = 0; /*0x59a863*/
      __3_YAXPAX_Z(v12); /*0x59a866*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59a87a*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59a884*/
  result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x59a88e*/
  for ( n = (int *)result; result; n = (int *)result ) /*0x59a897*/
  {
    if ( CellClass::IsTerrainType(n) ) /*0x59a89b*/
    {
      for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
      {
        _DWORD * v18 = Cell::GetNeighbourContent(n, ii); /*0x59a8ae*/
        if ( Cell::IsEmpty(v18) ) /*0x59a8b2*/
          v18[14] = unk_AA0E18; /*0x59a8c0*/
      }
    }
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x59a8d0*/
  }
  return result; /*0x59a8db*/
}
}
} // namespace gamemd

// 0x59AD10
namespace gamemd {
void RandomMap::ArrangeBuildingGrid()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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
  _DWORD *v16; // esi
  _DWORD *v17; // edx
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
  *(this + 194) = 1; /*0x59ad27*/
  RandomMap::Constructor_0(&v27, 0, 0); /*0x59ad31*/
  int v2 = this->q014; /*0x59ad36*/
  v27 = &vt_DynamicVectorClass_TRect_int; /*0x59ad39*/
  v31 = 10; /*0x59ad44*/
  int v3 = v2 / 2; /*0x59ad4c*/
  v30 = 0; /*0x59ad51*/
  unsigned int v4 = 2; /*0x59ad55*/
  if ( v3 >= 2 ) /*0x59ad5a*/
    v4 = v3; /*0x59ad5c*/
  *(_QWORD *)aP3[0].__tail_0 = v4; /*0x59ad5e*/
  v21 = (double)v4; /*0x59ad6a*/
  do /*0x59ad9b*/
  {
    *(_QWORD *)aP3[0].__tail_0 = (unsigned int)Random::State(&g_Randomizer); /*0x59ad78*/
    v5 = Math::RoundToInt((double)*(__int64 *)aP3[0].__tail_0 * v21 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
  }
  while ( v5 > v4 ); /*0x59ad9b*/
  v26[1] = (int)DataGlobal_87F8E4.field_4; /*0x59ada9*/
  v26[0] = DataGlobal_87F8E4.field_0; /*0x59adb3*/
  v26[3] = (int)DataGlobal_87F8E4.field_C; /*0x59adbd*/
  v6 = this->q014; /*0x59adc1*/
  v26[2] = (int)DataGlobal_87F8E4.field_8; /*0x59adc4*/
  ArrangeBuildingPlacementGrid((int)&v27, v5 + v6, v26); /*0x59add7*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59ade1*/
  for ( i = (MapResourceClass *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x59adf2*/
        i;
        i = (MapResourceClass *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    aP5 = i[9]; /*0x59adf7*/
    *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)aP5.__tail_0 + 20 * unk_89C2DC * *(__int16 *)&aP5.__tail_0[2] + 15) = 0; /*0x59ae1c*/
  }
  while ( v30 > 0 ) /*0x59ae2d*/
  {
    aP2 = *(MapResourceClass *)Block; /*0x59ae3d*/
    v23 = (CCINIClass *)*((_DWORD *)Block + 1); /*0x59ae44*/
    v24 = *((_DWORD *)Block + 2); /*0x59ae4b*/
    v25 = (BuildingTypeClass *)*((_DWORD *)Block + 3); /*0x59ae57*/
    v8 = Random::State(&g_Randomizer); /*0x59ae5b*/
    v9 = v25; /*0x59ae60*/
    v10 = v24; /*0x59ae68*/
    *(_QWORD *)&v21 = (unsigned int)v8; /*0x59ae6e*/
    v19 = (BuildingTypeClass *)(2 * v24 * (_DWORD)v25); /*0x59ae8d*/
    v11 = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)(int)v19); /*0x59ae9c*/
    aP3[0] = (MapResourceClass)&v23->__pad_0[*(_DWORD *)&aP2 + 1 + v10 / 2 + (int)v9 / 2]; /*0x59aecd*/
    aP3[1] = (MapResourceClass)&v23->__pad_0[g_Cell_PositionLUT + (int)v9 / 2 - v10 / 2 - *(_DWORD *)&aP2]; /*0x59aed1*/
    v12 = 0; /*0x59aed5*/
    do /*0x59af1f*/
    {
      if ( v12 >= 10 ) /*0x59aeda*/
        break; /*0x59aeda*/
      *(_WORD *)aP5.__tail_0 = *(_WORD *)aP3[0].__tail_0; /*0x59aef1*/
      *(_WORD *)&aP5.__tail_0[2] = *(_WORD *)aP3[1].__tail_0; /*0x59aef8*/
      v13 = RandomMap::PlaceTerrain(this, v11, &aP2, aP3, 1, &aP5, 0.25, 0); /*0x59af0d*/
      if ( !v13 ) /*0x59af14*/
        ++*(this + 194); /*0x59af16*/
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
      __3_YAXPAX_Z(Block); /*0x59af85*/
  }
}
}
} // namespace gamemd

// 0x59AFA0
namespace gamemd {
void RandomMap::FillTerrainProgressively()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  RandomMap *v1; // edi
  MapResourceClass *i; // eax
  int j; // ecx
  MapResourceClass aP5; // [esp+1Ch] [ebp-3Ch] BYREF
  RandomMap *v15; // [esp+20h] [ebp-38h]
  MapResourceClass aP3; // [esp+28h] [ebp-30h] BYREF
  MapResourceClass aP2; // [esp+48h] [ebp-10h] BYREF

  v1 = this; /*0x59afad*/
  v15 = this; /*0x59afaf*/
  *((_DWORD *)this + 194) = 1; /*0x59afb3*/
  int v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
  double v3 = (double)(int)v1[19]; /*0x59afc2*/
  aP5 = (MapResourceClass)v2; /*0x59afc5*/
  int v12 = 0; /*0x59afcb*/
  int v13 = 0; /*0x59afcf*/
  double v19 = 0.0; /*0x59afd9*/
  double v20 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
  double v21 = (double)v2; /*0x59b003*/
  int v16 = Math::RoundToInt(v21 * 0.03 * v20); /*0x59b016*/
  int v4 = g_CellPositionOffset / 2 + g_Cell_PositionLUT / 2; /*0x59b030*/
  int v18 = v4; /*0x59b038*/
  aP3 = (MapResourceClass)(v4 + 1); /*0x59b03f*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59b043*/
  for ( i = (MapResourceClass *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x59b054*/
        i;
        i = (MapResourceClass *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    aP5 = i[9]; /*0x59b059*/
    *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)aP5.__tail_0 + 20 * unk_89C2DC * *(__int16 *)&aP5.__tail_0[2] + 15) = 0; /*0x59b07a*/
  }
  aP2 = (MapResourceClass)(DataGlobal_87F8E4.field_0 + 1); /*0x59b0af*/
  char * v23 = (char *)DataGlobal_87F8E4.field_4 + 1; /*0x59b0bb*/
  char * v24 = (char *)DataGlobal_87F8E4.field_8 - 2; /*0x59b0c2*/
  char * v25 = (char *)DataGlobal_87F8E4.field_C - 2; /*0x59b0c6*/
  if ( v20 > 0.0 ) /*0x59b0ca*/
  {
    while ( v13 < 100 ) /*0x59b0db*/
    {
      int v6 = Math::RoundToInt((v20 - v19) * v21); /*0x59b0ed*/
      if ( v6 >= v16 ) /*0x59b0f8*/
        v6 = v16; /*0x59b0fa*/
      *(_WORD *)aP5.__tail_0 = v4 + 1; /*0x59b119*/
      *(_WORD *)&aP5.__tail_0[2] = v4; /*0x59b11e*/
      v12 += RandomMap::PlaceTerrain((int *)v1, v6, &aP2, &aP3, 1, &aP5, 0.75, 1); /*0x59b133*/
      ++v13; /*0x59b137*/
      int v7 = 50000; /*0x59b144*/
      int v11 = 0; /*0x59b149*/
      v19 = (double)v12 / v21; /*0x59b15b*/
      LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59b15f*/
      for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); j; j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59b172*/
      {
        if ( !*((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(j + 36) + 20 * unk_89C2DC * *(__int16 *)(j + 38) + 15) ) /*0x59b191*/
        {
          __int64 v9 = *(__int16 *)(j + 36) - (v4 + 1); /*0x59b1ac*/
          int v10 = (HIDWORD(v9) ^ v9) - HIDWORD(v9) + abs32(*(__int16 *)(j + 38) - v4); /*0x59b1b1*/
          if ( v10 < v7 ) /*0x59b1b5*/
          {
            v7 = v10; /*0x59b1ba*/
            v11 = *(_DWORD *)(j + 36); /*0x59b1bc*/
          }
        }
      }
      aP3 = (MapResourceClass)(__int16)v11; /*0x59b1e2*/
      v18 = SHIWORD(v11); /*0x59b1e6*/
      if ( v19 >= v20 ) /*0x59b1ef*/
        break; /*0x59b1ef*/
      v1 = v15; /*0x59b0d2*/
    }
  }
}
}
} // namespace gamemd

// 0x59B200
namespace gamemd {
void RandomMap::PlaceTerrainFeatures()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  __int16 *v9; // esi
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
  RandomMap *v35; // [esp+5Ch] [ebp-6Ch]
  int v36; // [esp+60h] [ebp-68h] BYREF
  int v37; // [esp+64h] [ebp-64h]
  double v38; // [esp+68h] [ebp-60h]
  double v39; // [esp+70h] [ebp-58h]
  _DWORD v40[2]; // [esp+78h] [ebp-50h] BYREF
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
  *(this + 194) = 1; /*0x59b216*/
  v18 = Object::ComputeAllocationSize(); /*0x59b228*/
  v23 = 0; /*0x59b22e*/
  v38 = (1.0 - (double)this->__pad_04C * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
  v50 = (double)v18; /*0x59b25a*/
  v48 = Math::RoundToInt(v50 * 0.06 * v38); /*0x59b275*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59b27c*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59b28d*/
    *((_DWORD *)g_MapTileArray /*0x59b2b7*/
    + 20 * (__int16)*(_DWORD *)(i + 36)
    + 20 * unk_89C2DC * (__int16)HIWORD(*(_DWORD *)(i + 36))
    + 15) = 0;
  *(_QWORD *)&v30 = (unsigned int)Random::State(&g_Randomizer); /*0x59b2ce*/
  v40[0] = DataGlobal_87F8E4; /*0x59b2fe*/
  v40[1] = DataGlobal_87F8E8; /*0x59b30d*/
  if ( (double)*(__int64 *)&v30 * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
  {
    v41 = DataGlobal_87F8EC; /*0x59b35c*/
    v42 = DataGlobal_87F8F0 / 2 - 1; /*0x59b36a*/
    v43 = DataGlobal_87F8E4; /*0x59b371*/
    v44 = DataGlobal_87F8F0 / 2 + DataGlobal_87F8E8 + 1; /*0x59b378*/
    v45 = DataGlobal_87F8EC; /*0x59b37f*/
    v46 = v42; /*0x59b386*/
  }
  else
  {
    v42 = DataGlobal_87F8F0; /*0x59b311*/
    v41 = DataGlobal_87F8EC / 2 - 1; /*0x59b31f*/
    v43 = DataGlobal_87F8EC / 2 + DataGlobal_87F8E4 + 1; /*0x59b326*/
    v44 = DataGlobal_87F8E8; /*0x59b32d*/
    v45 = v41; /*0x59b334*/
    v46 = DataGlobal_87F8F0; /*0x59b33b*/
  }
  v19 = 2; /*0x59b391*/
  v25 = v40; /*0x59b399*/
  do /*0x59b6c1*/
  {
  double v4; // st7
    v22 = 0; /*0x59b3a5*/
    v39 = 0.0; /*0x59b3a9*/
    v26 = *v25; /*0x59b3bb*/
    v27 = v25[1]; /*0x59b3c2*/
    v28 = v25[2]; /*0x59b3cb*/
    v29 = v25[3]; /*0x59b3d5*/
    int v3 = v27 + g_Cell_PositionLUT + v29 / 2 - v28 / 2 - v26; /*0x59b3fd*/
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
        int v5 = Math::RoundToInt((v38 - v39) * v50); /*0x59b4d9*/
        if ( v5 >= v48 ) /*0x59b4e7*/
          v5 = v48; /*0x59b4e9*/
        LOWORD(v31) = v32; /*0x59b4fd*/
        HIWORD(v31) = v3; /*0x59b515*/
        v22 += RandomMap::PlaceTerrain(v35, v5, &v26, (int)&v36, 1, (int)&v31, 0.75, 1); /*0x59b52d*/
        v20 = 0; /*0x59b540*/
        ++v23; /*0x59b55a*/
        int v6 = 2 * v26 - g_Cell_PositionLUT + 1; /*0x59b562*/
        int v7 = 50000; /*0x59b563*/
        v47 = v6 + 2 * v28 + 2; /*0x59b572*/
        int v8 = g_Cell_PositionLUT + 2 * v27 + 1; /*0x59b57d*/
        v51 = v8 + 2 * v29 + 2; /*0x59b585*/
        v39 = (double)v22 / v50; /*0x59b58c*/
        if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x59b590*/
        {
          v24 = 0; /*0x59b596*/
          v34 = unk_89C2DC * unk_89C2DC; /*0x59b59e*/
          do /*0x59b67e*/
          {
            v9 = (__int16 *)((char *)g_MapTileArray + v24); /*0x59b5ab*/
            int v10 = *(__int16 *)((char *)g_MapTileArray + v24 + 2); /*0x59b5ae*/
            int v11 = *(__int16 *)((char *)g_MapTileArray + v24); /*0x59b5b3*/
            int v12 = v11 + v10; /*0x59b5b6*/
            int v13 = v11 - v10; /*0x59b5b9*/
            if ( v12 >= v8 /*0x59b618*/
              && v12 <= v51
              && v13 >= v6
              && v13 <= v47
              && !*((_DWORD *)v9 + 15)
              && (unsigned __int8)Map_Helper_59BAB0((int)g_MapTileArray + v24, (int)&v26, 1, v53, v52) )
            {
              __int64 v14 = v9[1] - v33; /*0x59b629*/
  int v15; // eax
              v15 = Math::RoundToInt((double)(int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) * v49 + (double)(int)abs32(*v9 - v32) /*0x59b659*/
                                                                                              * v30);
              if ( v15 < v7 ) /*0x59b660*/
              {
                v7 = v15; /*0x59b664*/
                v20 = *(_DWORD *)v9; /*0x59b666*/
              }
            }
            v16 = v34 == 1; /*0x59b675*/
            v24 += 80; /*0x59b676*/
            --v34; /*0x59b67a*/
          }
          while ( !v16 ); /*0x59b67e*/
          LOWORD(v3) = v33; /*0x59b684*/
        }
        v36 = (__int16)v20; /*0x59b69a*/
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
} // namespace gamemd

// 0x59B740
namespace gamemd {
void RandomMap::PlaceShoreObjects()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *i; // ebp
  signed int j; // edi
  _DWORD *NeighbourContent; // esi
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
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59b76d*/
  for ( i = (int *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x59b780*/
        i;
        i = (int *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
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
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v20 + v17, 0)) )
        {
          int v3 = v19++; /*0x59b7d9*/
          *((_DWORD *)Block + v3) = NeighbourContent; /*0x59b7e4*/
        }
      }
    }
  }
  int v4 = v19 / 3; /*0x59b80d*/
  if ( v19 / 3 > 1000 ) /*0x59b815*/
    v4 = 1000; /*0x59b817*/
  if ( v4 > 0 ) /*0x59b81e*/
  {
    int v12 = v4; /*0x59b824*/
    do /*0x59b90c*/
    {
  signed int v6; // eax
      unsigned int v5 = v19 - 1; /*0x59b830*/
      double v14 = (double)(unsigned int)v19; /*0x59b83e*/
      do /*0x59b869*/
      {
        __int64 v13 = (unsigned int)Random::State(&g_Randomizer); /*0x59b84c*/
        v6 = Math::RoundToInt((double)v13 * v14 * 2.328306437080797e-10); /*0x59b862*/
      }
      while ( v6 > v5 ); /*0x59b869*/
      _DWORD * v7 = Block; /*0x59b86b*/
      _DWORD * v8 = (_DWORD *)*((_DWORD *)Block + v6); /*0x59b875*/
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
      signed int v9 = 0; /*0x59b89e*/
      v8[14] = unk_AA0E18; /*0x59b8a0*/
      do /*0x59b901*/
      {
        _DWORD * v10 = Cell::GetNeighbourContent(v8, v9); /*0x59b8ab*/
        if ( Cell::IsEmpty(v10) /*0x59b8e2*/
          && (v19 < v17
           || (v18 || !v17)
           && v20 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v20 + v17, 0)) )
        {
          int v11 = v19++; /*0x59b8ed*/
          *((_DWORD *)Block + v11) = v10; /*0x59b8f8*/
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
      __3_YAXPAX_Z(Block); /*0x59b929*/
  }
}
}
} // namespace gamemd

// 0x59BBC0
namespace gamemd {
void RandomMap::PlaceTerrain(int a2, MapResourceClass * aP2, MapResourceClass * aP3, int a5, MapResourceClass * aP5, double a7, char a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v12; // esi
  MapResourceClass *v14; // ecx
  __int16 v18; // di
  __int16 v21; // cx
  __int16 v22; // ax
  int result; // eax
  __int16 v25; // dx
  MapResourceClass *v26; // eax
  MapResourceClass *v27; // edx
  MapResourceClass *v29; // edi
  MapResourceClass *v33; // eax
  __int16 *v34; // edi
  __int16 v43; // cx
  __int16 v50; // ax
  MapResourceClass *v56; // edi
  unsigned int edx65; // edx
  MapResourceClass *v60; // ecx
  double st7_76; // st7
  MapResourceClass *v63; // ecx
  bool zf76; // zf
  MapResourceClass *v67; // edi
  Random *v68; // ebx
  char *edi82; // edi
  int i; // eax
  Random *v72; // ecx
  Random *v73; // esi
  int edi97; // edi
  int j; // eax
  char inited; // [esp+17h] [ebp-81h]
  MapResourceClass *v78; // [esp+1Ch] [ebp-7Ch] BYREF
  MapResourceClass *v81; // [esp+24h] [ebp-74h]
  int var70; // [esp+28h] [ebp-70h]
  int v82; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  float v84; // [esp+34h] [ebp-64h]
  float v85; // [esp+38h] [ebp-60h]
  MapResourceClass *v86; // [esp+3Ch] [ebp-5Ch]
  MapResourceClass *v88; // [esp+40h] [ebp-58h]
  int var54; // [esp+44h] [ebp-54h]
  __int64 v89; // [esp+48h] [ebp-50h]
  __int64 v90; // [esp+50h] [ebp-48h]
  int v91; // [esp+58h] [ebp-40h] BYREF
  float v92; // [esp+60h] [ebp-38h]
  double v93; // [esp+68h] [ebp-30h]
  double v94; // [esp+70h] [ebp-28h]
  double v95; // [esp+78h] [ebp-20h]
  double v96; // [esp+80h] [ebp-18h]
  double v97; // [esp+88h] [ebp-10h]
  double v98; // [esp+90h] [ebp-8h]
  int v8 = a2; /*0x59bbcc*/
  if ( a2 <= 400 ) /*0x59bbdb*/
  {
    v8 = 400; /*0x59bbdd*/
    a2 = 400; /*0x59bbe2*/
  }
  int v9 = 8 * v8 + 2; /*0x59bbe5*/
  if ( v9 <= 100 ) /*0x59bbef*/
    v9 = 100; /*0x59bbf1*/
  var54 = v9; /*0x59bbfd*/
  void * v10 = (void *)__2_YAPAXI_Z(8 * v9); /*0x59bc02*/
  if ( v10 ) /*0x59bc0e*/
  {
    Block = v10; /*0x59bc13*/
    LODWORD(v93) = v9 - 1; /*0x59bc17*/
  }
  else
  {
    Block = 0; /*0x59bc1d*/
  }
  int v11 = __2_YAPAXI_Z(0x14u); /*0x59bc23*/
  v12 = (AbstractClass *)v11; /*0x59bc28*/
  if ( v11 ) /*0x59bc2f*/
  {
    *(_DWORD *)(v11 + 12) = 0; /*0x59bc38*/
    *(_DWORD *)(v11 + 16) = -1; /*0x59bc3c*/
    *(_DWORD *)v11 = 0; /*0x59bc43*/
    *(_DWORD *)(v11 + 4) = v9; /*0x59bc45*/
    int v13 = __2_YAPAXI_Z(4 * v9 + 4); /*0x59bc48*/
    v14 = *(MapResourceClass **)&v12->__pad_0[4]; /*0x59bc4d*/
    *(_DWORD *)&v12->__pad_0[8] = v13; /*0x59bc50*/
    int v15 = 0; /*0x59bc56*/
    if ( (int)v14 >= 0 ) /*0x59bc5a*/
    {
      do /*0x59bc69*/
      {
        ++v15; /*0x59bc5f*/
        *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v15 - 4) = 0; /*0x59bc60*/
      }
      while ( v15 <= *(_DWORD *)&v12->__pad_0[4] ); /*0x59bc69*/
    }
  }
  else
  {
    v12 = 0; /*0x59bc6d*/
  }
  if ( *(_DWORD *)aP3 || *(_DWORD *)&aP3[1] ) /*0x59bc7c*/
  {
    v25 = *(_WORD *)aP3[1].__tail_0; /*0x59bdec*/
    LOWORD(v86) = *aP3; /*0x59bdf0*/
    HIWORD(v86) = v25; /*0x59bdf5*/
    v78 = v86; /*0x59bdfe*/
LABEL_27:
    v85 = 0.0; /*0x59be02*/
    v84 = 0.0; /*0x59be13*/
    if ( *aP2 != dword_ABE2F0 /*0x59be46*/
      || *(_DWORD *)&aP2[1] != dword_ABE2F4
      || *(_DWORD *)&aP2[2] != dword_ABE2F8
      || *(_DWORD *)&aP2[3] != dword_ABE2FC )
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
    LODWORD(v90) = (__int16)v78; /*0x59be9a*/
    v27 = *(MapResourceClass **)v12->__pad_0; /*0x59be9e*/
    LODWORD(v90) = SHIWORD(v78); /*0x59bea4*/
    int v28 = 0; /*0x59beaa*/
    v94 = (double)(__int16)v78; /*0x59beae*/
    v81 = 0; /*0x59beb6*/
    v95 = (double)SHIWORD(v78); /*0x59beba*/
    if ( (int)v27 >= 0 ) /*0x59bebe*/
    {
      do /*0x59becc*/
      {
        ++v28; /*0x59bec3*/
        *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v28 - 4) = 0; /*0x59bec4*/
      }
      while ( v28 <= *(_DWORD *)v12->__pad_0 ); /*0x59becc*/
    }
    v29 = (MapResourceClass *)Block; /*0x59bece*/
    *(_DWORD *)v12->__pad_0 = 0; /*0x59bed2*/
    var70 = 1; /*0x59bed8*/
    *v29 = (MapResourceClass)v78; /*0x59bee0*/
    v29[1] = 0; /*0x59bee2*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v78 + 20 * unk_89C2DC * SHIWORD(v78) + 15) = *(this + 194); /*0x59bf0d*/
    unsigned int v30 = *(_DWORD *)v12->__pad_0 + 1; /*0x59bf16*/
    LODWORD(v90) = v29[1]; /*0x59bf19*/
    unsigned int v31 = v30 >> 1; /*0x59bf20*/
    if ( v30 < *(_DWORD *)&v12->__pad_0[4] ) /*0x59bf24*/
    {
      for ( ; v30 > 1; v31 >>= 1 ) /*0x59bf29*/
      {
        int v32 = *(_DWORD *)&v12->__pad_0[8]; /*0x59bf2b*/
        if ( *(float *)(*(_DWORD *)(v32 + 4 * v31) + 4) <= (double)*(float *)&v90 ) /*0x59bf3d*/
          break; /*0x59bf3d*/
        *(_DWORD *)(v32 + 4 * v30) = *(_DWORD *)(v32 + 4 * v31); /*0x59bf42*/
        v30 = v31; /*0x59bf45*/
      }
      *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v30) = v29; /*0x59bf51*/
      v33 = *(MapResourceClass **)&v12->__pad_0[12]; /*0x59bf56*/
      ++*(_DWORD *)v12->__pad_0; /*0x59bf5c*/
      if ( v29 > v33 ) /*0x59bf5e*/
        *(_DWORD *)&v12->__pad_0[12] = v29; /*0x59bf60*/
      if ( (unsigned int)v29 < v12->uniqueId ) /*0x59bf66*/
        v12->uniqueId = (int)v29; /*0x59bf68*/
    }
    if ( *(_DWORD *)v12->__pad_0 ) /*0x59bf6b*/
    {
      int v35 = *(_DWORD *)&v12->__pad_0[8]; /*0x59bf75*/
      v34 = *(__int16 **)(v35 + 4); /*0x59bf7d*/
      *(_DWORD *)(v35 + 4) = *(_DWORD *)(v35 + 4 * *(_DWORD *)v12->__pad_0); /*0x59bf80*/
      *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59bf88*/
      Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59bf96*/
    }
    else
    {
      v34 = 0; /*0x59bf71*/
    }
    v82 = (int)v34; /*0x59bf9e*/
    double v36 = (double)(int)aP2[2] * 0.5; /*0x59bfab*/
    v97 = 1.0 / (v36 * v36); /*0x59bfb5*/
    v96 = 1.0 / ((double)(int)aP2[3] * 0.5 * ((double)(int)aP2[3] * 0.5)); /*0x59bfd6*/
    do /*0x59c32c*/
    {
      if ( !v34 ) /*0x59bfe4*/
        break; /*0x59bfe4*/
      if ( g_MapTileArray ) /*0x59bff2*/
        *((_DWORD *)g_MapTileArray + 20 * *v34 + 20 * unk_89C2DC * v34[1] + 14) = *(this + 194); /*0x59c014*/
      _DWORD * v37 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v34); /*0x59c01e*/
      char * v38 = (char *)Block; /*0x59c023*/
      int v39 = var70; /*0x59c027*/
      v37[14] = 0; /*0x59c02b*/
      int v40 = g_MapCellHeight_Value; /*0x59c032*/
      char v41 = 0; /*0x59c038*/
      LODWORD(v90) = 0; /*0x59c03d*/
      LODWORD(v89) = &v38[8 * v39]; /*0x59c041*/
      while ( 1 ) /*0x59c04b*/
      {
        int v42 = v41 & 7; /*0x59c04b*/
        v43 = v34[1] + *((_WORD *)&DataGlobal_89F68A + 2 * v42); /*0x59c064*/
        LOWORD(v88) = *v34 + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v42); /*0x59c068*/
        HIWORD(v88) = v43; /*0x59c06d*/
        int v79 = (int)v88; /*0x59c076*/
        int v44 = v43; /*0x59c07d*/
        int v45 = v43 + (__int16)v88; /*0x59c080*/
        if ( v45 > v40 && (__int16)v88 - v44 < v40 && v44 - (__int16)v88 < v40 && v45 <= g_MapCellCount ) /*0x59c0a9*/
        {
          char * v46 = (char *)g_MapTileArray + 80 * (__int16)v88 + 80 * unk_89C2DC * v44; /*0x59c0c4*/
          if ( !*((_DWORD *)v46 + 14) && *((_DWORD *)v46 + 15) != *(this + 194) ) /*0x59c0de*/
          {
            int * v47 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v79); /*0x59c0ee*/
            if ( Cell::IsGroundTypeRange(v47) /*0x59c13d*/
              && var70 < var54
              && Map_Helper_59BAB0((__int16 *)&v79, (int *)aP2, a5, v97, v96) )
            {
  double v51; // st7
              unsigned int v48 = v89; /*0x59c14e*/
              double v49 = v94 + 0.5; /*0x59c156*/
              *(_DWORD *)v89 = v79; /*0x59c15c*/
              LOWORD(v86) = Math::RoundToInt(v49); /*0x59c16d*/
              v50 = Math::RoundToInt(v95 + 0.5); /*0x59c172*/
              HIWORD(v86) = v50; /*0x59c177*/
              v91 = (int)v86; /*0x59c180*/
              if ( a8 ) /*0x59c189*/
              {
                v51 = Map_Helper_59B940((__int16 *)&v91, (__int16 *)&v79, aP2, (__int16 *)aP5, v85, v84); /*0x59c1ab*/
              }
              else
              {
                LODWORD(v89) = (SHIWORD(v79) - v50) * (SHIWORD(v79) - v50) /*0x59c1d7*/
                             + ((__int16)v79 - (__int16)v86) * ((__int16)v79 - (__int16)v86);
                v93 = Math::Sqrt((double)(int)v89); /*0x59c1e7*/
                *(_QWORD *)&v98 = (unsigned int)Random::State(&g_Randomizer); /*0x59c1f8*/
                v51 = (double)*(__int64 *)&v98 * 5.0 * 2.328306437080797e-10 + v93; /*0x59c21d*/
              }
              int v52 = var70; /*0x59c225*/
              *(float *)(v48 + 4) = v51; /*0x59c229*/
              *((_DWORD *)v46 + 15) = *(this + 194); /*0x59c233*/
              unsigned int v53 = v48; /*0x59c236*/
              var70 = v52 + 1; /*0x59c238*/
              unsigned int v54 = *(_DWORD *)v12->__pad_0 + 1; /*0x59c244*/
              v92 = *(float *)(v48 + 4); /*0x59c245*/
              v56 = *(MapResourceClass **)&v12->__pad_0[4]; /*0x59c249*/
              edx65 = v54 >> 1; /*0x59c24e*/
              LODWORD(v93) = v48; /*0x59c252*/
              LODWORD(v89) = v48 + 8; /*0x59c256*/
              if ( v54 < (unsigned int)v56 ) /*0x59c25a*/
              {
                if ( v54 > 1 ) /*0x59c25f*/
                {
                  do /*0x59c27f*/
                  {
                    int v57 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c261*/
                    int v58 = *(_DWORD *)(v57 + 4 * edx65); /*0x59c264*/
                    if ( *(float *)(v58 + 4) <= (double)v92 ) /*0x59c273*/
                      break; /*0x59c273*/
                    *(_DWORD *)(v57 + 4 * v54) = v58; /*0x59c275*/
                    v54 = edx65; /*0x59c278*/
                    edx65 >>= 1; /*0x59c27a*/
                  }
                  while ( v54 > 1 ); /*0x59c27f*/
                  v53 = LODWORD(v93); /*0x59c281*/
                }
                *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v54) = v53; /*0x59c288*/
                v60 = *(MapResourceClass **)&v12->__pad_0[12]; /*0x59c28d*/
                ++*(_DWORD *)v12->__pad_0; /*0x59c293*/
                if ( v53 > (unsigned int)v60 ) /*0x59c295*/
                  *(_DWORD *)&v12->__pad_0[12] = v53; /*0x59c297*/
                if ( v53 < v12->uniqueId ) /*0x59c29d*/
                  v12->uniqueId = v53; /*0x59c29f*/
              }
            }
            v40 = g_MapCellHeight_Value; /*0x59c2a2*/
          }
        }
        v41 = v90 + 2; /*0x59c2ac*/
        LODWORD(v90) = v90 + 2; /*0x59c2b2*/
        if ( (int)v90 >= 8 ) /*0x59c2b6*/
          break; /*0x59c2b6*/
        v34 = (__int16 *)v82; /*0x59c047*/
      }
      st7_76 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2c1*/
      v94 = st7_76 * a7 + v94; /*0x59c2d2*/
      double v61 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2d6*/
      v81 = (MapResourceClass *)((char *)v81 + 1); /*0x59c2e7*/
      v63 = *(MapResourceClass **)v12->__pad_0; /*0x59c2eb*/
      zf76 = *(_DWORD *)v12->__pad_0 == 0; /*0x59c2ed*/
      v95 = v61 * a7 + v95; /*0x59c2ef*/
      if ( zf76 ) /*0x59c2f3*/
      {
        v34 = 0; /*0x59c2f5*/
      }
      else
      {
        int v64 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c2f9*/
        v34 = *(__int16 **)(v64 + 4); /*0x59c301*/
        *(_DWORD *)(v64 + 4) = *(_DWORD *)(v64 + 4 * (_DWORD)v63); /*0x59c304*/
        *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59c30c*/
        Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c31a*/
      }
      v82 = (int)v34; /*0x59c328*/
    }
    while ( (int)v81 < a2 ); /*0x59c32c*/
    if ( *(_DWORD *)v12->__pad_0 ) /*0x59c332*/
    {
      int v65 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c33c*/
      v67 = *(MapResourceClass **)(v65 + 4); /*0x59c344*/
      *(_DWORD *)(v65 + 4) = *(_DWORD *)(v65 + 4 * *(_DWORD *)v12->__pad_0); /*0x59c347*/
      *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59c34f*/
      Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c35d*/
      for ( ; v67; v81 = (MapResourceClass *)((char *)v81 + 1) ) /*0x59c364*/
      {
        v68 = (Random *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v67); /*0x59c375*/
        edi82 = (char *)g_MapTileArray /*0x59c393*/
              + 80 * *(__int16 *)v67->__tail_0
              + 80 * unk_89C2DC * *(__int16 *)&v67->__tail_0[2];
        if ( !*((_DWORD *)edi82 + 14) && Cell::IsGroundTypeRange((int *)v68->__pad_0) ) /*0x59c39e*/
        {
          v68[3].Random_field_0x08 = 0; /*0x59c3ab*/
          *((_DWORD *)edi82 + 14) = *(this + 194); /*0x59c3b8*/
        }
        if ( *(_DWORD *)v12->__pad_0 ) /*0x59c3bb*/
        {
          int v69 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c3c5*/
          v67 = *(MapResourceClass **)(v69 + 4); /*0x59c3cd*/
          *(_DWORD *)(v69 + 4) = *(_DWORD *)(v69 + 4 * *(_DWORD *)v12->__pad_0); /*0x59c3d0*/
          *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59c3d8*/
          Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c3e6*/
        }
        else
        {
          v67 = 0; /*0x59c3c1*/
        }
      }
    }
    __3_YAXPAX_Z(Block); /*0x59c405*/
    if ( v12 ) /*0x59c411*/
    {
      __3_YAXPAX_Z(*(void **)&v12->__pad_0[8]); /*0x59c417*/
      __3_YAXPAX_Z(v12); /*0x59c41d*/
    }
    inited = MapClass::InitTileData(*(this + 194), 1); /*0x59c43d*/
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59c441*/
    for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59c452*/
    {
      v72 = *(Random **)(i + 56); /*0x59c454*/
      if ( (int)v72 >= dword_ABAD28 && (int)v72 < dword_ABAD28 + 42 ) /*0x59c466*/
      {
        *(_DWORD *)(i + 56) = 0; /*0x59c468*/
        *(_BYTE *)(i + 282) = 0; /*0x59c46b*/
      }
    }
    if ( inited ) /*0x59c486*/
    {
      result = (int)v81; /*0x59c51b*/
      ++*(this + 194); /*0x59c521*/
    }
    else
    {
      v73 = *(Random **)&g_NetworkPlayerBuffer[78076]; /*0x59c48c*/
      edi97 = *(this + 194); /*0x59c492*/
      LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x59c49d*/
      for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); j; j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x59c4ae*/
      {
        LODWORD(v93) = *(_DWORD *)(j + 36); /*0x59c4b3*/
        char * v75 = (char *)g_MapTileArray + 80 * SLOWORD(v93) + 80 * unk_89C2DC * SWORD1(v93); /*0x59c4d4*/
        if ( *((_DWORD *)v75 + 14) == edi97 ) /*0x59c4d9*/
        {
          *((_DWORD *)v75 + 14) = 0; /*0x59c4db*/
          v75[75] = 0; /*0x59c4e2*/
          *(_DWORD *)(j + 56) = v73; /*0x59c4e6*/
          *(_BYTE *)(j + 282) = 0; /*0x59c4e9*/
          *(_BYTE *)(j + 283) = *(this + 195); /*0x59c4f6*/
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
  unsigned int v20; // eax
  unsigned int v17; // eax
      unsigned int v16 = g_Cell_PositionLUT - 1; /*0x59bc97*/
      *(_QWORD *)&v95 = (unsigned int)g_Cell_PositionLUT; /*0x59bc9d*/
      v98 = (double)(unsigned int)g_Cell_PositionLUT; /*0x59bca5*/
      do /*0x59bcdc*/
      {
        *(_QWORD *)&v94 = (unsigned int)Random::State(&g_Randomizer); /*0x59bcb6*/
        v17 = Math::RoundToInt((double)*(__int64 *)&v94 * v98 * 2.328306437080797e-10); /*0x59bcd3*/
        v18 = v17; /*0x59bcd8*/
      }
      while ( v17 > v16 ); /*0x59bcdc*/
      unsigned int v19 = g_CellPositionOffset - 1; /*0x59bcec*/
      v90 = (unsigned int)g_CellPositionOffset; /*0x59bcf2*/
      v98 = (double)(unsigned int)g_CellPositionOffset; /*0x59bcfa*/
      do /*0x59bd2f*/
      {
        v89 = (unsigned int)Random::State(&g_Randomizer); /*0x59bd0b*/
        v20 = Math::RoundToInt((double)v89 * v98 * 2.328306437080797e-10); /*0x59bd28*/
      }
      while ( v20 > v19 ); /*0x59bd2f*/
      HIWORD(v91) = -v18; /*0x59bd3c*/
      HIWORD(v92) = g_Cell_PositionLUT; /*0x59bd41*/
      LOWORD(v93) = v18 + 1; /*0x59bd51*/
      WORD1(v93) = g_Cell_PositionLUT - v18; /*0x59bd56*/
      v21 = v20 + v18 + 1; /*0x59bd63*/
      v22 = g_Cell_PositionLUT - v18 + v20; /*0x59bd65*/
      LOWORD(v86) = v21; /*0x59bd67*/
      HIWORD(v86) = v22; /*0x59bd6c*/
      v78 = v86; /*0x59bd75*/
      if ( ++v82 >= 200 ) /*0x59bd88*/
        return 0; /*0x59bde1*/
      if ( g_MapTileArray ) /*0x59bd92*/
      {
        if ( !*((_DWORD *)g_MapTileArray + 20 * v21 + 20 * unk_89C2DC * v22 + 14) ) /*0x59bdad*/
        {
          int * v23 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v78); /*0x59bdc3*/
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
} // namespace gamemd

// 0x59C580
namespace gamemd {
void RandomMap::GrowTiberium()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  MapResourceClass aP1; // [esp+Ch] [ebp-4h] BYREF

  int v2 = this->q03C; /*0x59c594*/
  ++*(this + 194); /*0x59c59b*/
  if ( (v2 == 3 || v2 == 4) && this->__pad_04C > 20 ) /*0x59c5ac*/
  {
    int v3 = 0; /*0x59c5ae*/
    while ( v3 < 10 ) /*0x59c5b5*/
    {
      *(_WORD *)aP1.__tail_0 = 0; /*0x59c5c1*/
      *(_WORD *)&aP1.__tail_0[2] = 0; /*0x59c5c6*/
      ++v3; /*0x59c5d0*/
      if ( Tiberium::ProcessGrowth(this, (int)&aP1, 0, 0) ) /*0x59c5cb*/
      {
        ++*(this + 194); /*0x59c5db*/
        break; /*0x59c5db*/
      }
    }
  }
  int v4 = 0; /*0x59c5e1*/
  result = 0; /*0x59c5e3*/
  while ( v4 < 10 ) /*0x59c5e8*/
  {
    *(_WORD *)aP1.__tail_0 = 0; /*0x59c5ee*/
    *(_WORD *)&aP1.__tail_0[2] = 0; /*0x59c5f6*/
    result = TiberiumClass::Grow(this, &aP1); /*0x59c5fb*/
    ++v4; /*0x59c600*/
    if ( result ) /*0x59c603*/
    {
      ++*(this + 194); /*0x59c605*/
      return result; /*0x59c605*/
    }
  }
  return result; /*0x59c60b*/
}
}
} // namespace gamemd

// 0x5A0700
namespace gamemd {
unsigned int * RandomMap::CellListAlloc(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v8; // dx
  __int16 v12; // ax

  _DWORD * v3 = __2_YAPAXI_Z(0x18u); /*0x5a070a*/
  _DWORD * v4 = v3; /*0x5a070f*/
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
  _DWORD * v23 = v4; /*0x5a073d*/
  v4[5] = this->q180 * *(this + 97); /*0x5a0748*/
  int v5 = unk_89C2DC; /*0x5a074b*/
  if ( unk_89C2DC * unk_89C2DC <= 0 ) /*0x5a0758*/
    return v4; /*0x5a08c1*/
  _DWORD * v6 = g_MapTileArray; /*0x5a075f*/
  int v24 = 0; /*0x5a0765*/
  int v25 = unk_89C2DC * unk_89C2DC; /*0x5a0769*/
  while ( 2 )
  {
  int v14; // eax
  int v13; // edx
    int v7 = v6[v24]; /*0x5a0775*/
    v8 = HIWORD(v7); /*0x5a0780*/
    if ( !v7 ) /*0x5a0788*/
      goto LABEL_33; /*0x5a0788*/
    int v9 = v6 ? v6[20 * (__int16)v7 + 14 + 20 * v5 * SHIWORD(v7)] : -1;
    if ( v9 != a2 ) /*0x5a07b5*/
      goto LABEL_33; /*0x5a07b5*/
    int v10 = 0; /*0x5a07bb*/
    while ( 1 ) /*0x5a07c9*/
    {
      int v11 = v10 & 7; /*0x5a07c9*/
      v12 = LOWORD(Direction_X_Offsets[v11]) + v7; /*0x5a07cc*/
      LOWORD(v11) = v8 + HIWORD(Direction_X_Offsets[v11]); /*0x5a07df*/
      v13 = v12; /*0x5a07e2*/
      v14 = (__int16)v11; /*0x5a07e5*/
      int v15 = v13 + (__int16)v11; /*0x5a07e8*/
      if ( v15 <= g_MapCellHeight_Value ) /*0x5a07f1*/
        goto LABEL_23; /*0x5a07f1*/
      if ( v13 - v14 < g_MapCellHeight_Value && v14 - v13 < g_MapCellHeight_Value && v15 <= g_MapCellCount ) /*0x5a080f*/
        break; /*0x5a080f*/
      v4 = v23; /*0x5a0849*/
      v6 = g_MapTileArray; /*0x5a084d*/
LABEL_23:
      if ( ++v10 >= 8 ) /*0x5a0841*/
        goto LABEL_33; /*0x5a0841*/
      v8 = HIWORD(v7); /*0x5a07bf*/
    }
    v6 = g_MapTileArray; /*0x5a0811*/
    if ( g_MapTileArray ) /*0x5a0819*/
      int v16 = *((_DWORD *)g_MapTileArray + 20 * v13 + 20 * unk_89C2DC * v14 + 14); /*0x5a082f*/
    else
      v16 = -1; /*0x5a081b*/
    if ( v16 == a2 ) /*0x5a0837*/
    {
      v4 = v23; /*0x5a0839*/
      goto LABEL_23; /*0x5a0839*/
    }
    v4 = v23; /*0x5a0855*/
    int v17 = v23[2]; /*0x5a0859*/
    if ( v23[4] < v17 ) /*0x5a0861*/
      goto LABEL_31; /*0x5a0861*/
    if ( *((_BYTE *)v23 + 13) || !v17 ) /*0x5a086c*/
    {
      int v18 = v23[5]; /*0x5a086e*/
      if ( v18 > 0 ) /*0x5a0873*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v23 + 8))(v23, v17 + v18, 0) ) /*0x5a087e*/
        {
LABEL_31:
          int v19 = v23[4]; /*0x5a0885*/
          int v20 = v23[1]; /*0x5a0888*/
          v23[4] = v19 + 1; /*0x5a088e*/
          *(_DWORD *)(v20 + 4 * v19) = v7; /*0x5a0891*/
        }
        v6 = g_MapTileArray; /*0x5a0894*/
      }
    }
LABEL_33:
    bool v21 = v25 == 1; /*0x5a089a*/
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
} // namespace gamemd

// 0x5A08D0
namespace gamemd {
void RandomMap::SpreadArea(MouseClass * aP1, float a3, MapResourceClass * aP3, short * a4, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MapResourceClass *v9; // eax
  AbstractClass *v10; // esi
  MapResourceClass *v15; // ebx
  int i; // eax
  MouseClass *v17; // eax
  MapResourceClass *v19; // edi
  MouseClass *v20; // edx
  MapResourceClass v23; // edx
  MapResourceClass *v24; // ebx
  unsigned int v37; // eax
  __int16 *v38; // ecx
  int v39; // eax
  __int16 *v40; // edi
  char *v41; // edi
  _DWORD *v42; // eax
  char v43; // al
  int v44; // eax
  _DWORD *v45; // edi
  char *v46; // eax
  MapResourceClass v47; // ecx
  _DWORD *v48; // eax
  MapResourceClass *v49; // ebx
  __int16 v50; // ax
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
  __int16 *v68; // ecx
  bool v69; // zf
  int v70; // eax
  __int16 *v71; // edi
  int v72; // eax
  __int16 *v73; // edi
  __int16 *v74; // ecx
  int v75; // eax
  int v76; // ecx
  MouseClass **v77; // eax
  int v78; // eax
  __int16 *v79; // edi
  char v81; // [esp+1Bh] [ebp-49h]
  _WORD *v82; // [esp+1Ch] [ebp-48h]
  __int16 *v83; // [esp+1Ch] [ebp-48h]
  MouseClass *v84; // [esp+20h] [ebp-44h] BYREF
  int v85; // [esp+24h] [ebp-40h]
  int v86; // [esp+28h] [ebp-3Ch]
  MapResourceClass *Block; // [esp+2Ch] [ebp-38h]
  int v88; // [esp+30h] [ebp-34h]
  MapResourceClass *v89; // [esp+34h] [ebp-30h]
  int v90; // [esp+38h] [ebp-2Ch]
  double v91; // [esp+3Ch] [ebp-28h]
  __int64 v92; // [esp+44h] [ebp-20h]
  double v93; // [esp+4Ch] [ebp-18h] BYREF
  double v94; // [esp+54h] [ebp-10h]
  __int64 v95; // [esp+5Ch] [ebp-8h]
  int v7 = this->q180; /*0x5a08de*/
  v89 = (MapResourceClass *)this; /*0x5a08e4*/
  int v8 = 2 * *(this + 97) * v7; /*0x5a08f4*/
  if ( v8 <= 100 ) /*0x5a08f6*/
    v8 = 100; /*0x5a08f8*/
  v9 = (MapResourceClass *)__2_YAPAXI_Z(8 * v8); /*0x5a0905*/
  if ( v9 ) /*0x5a0911*/
  {
    Block = v9; /*0x5a0914*/
    LODWORD(v92) = v8 - 1; /*0x5a0918*/
  }
  else
  {
    Block = 0; /*0x5a091e*/
  }
  v10 = (AbstractClass *)__2_YAPAXI_Z(0x14u); /*0x5a0929*/
  if ( v10 ) /*0x5a0930*/
  {
    int v11 = 2 * *(this + 97) * this->q180; /*0x5a093f*/
    if ( v11 <= 100 ) /*0x5a0944*/
      v11 = 100; /*0x5a0946*/
    *(_DWORD *)&v10->__pad_0[12] = 0; /*0x5a0952*/
    v10->uniqueId = -1; /*0x5a0956*/
    *(_DWORD *)v10->__pad_0 = 0; /*0x5a095d*/
    *(_DWORD *)&v10->__pad_0[4] = v11; /*0x5a095f*/
    int v12 = __2_YAPAXI_Z(4 * v11 + 4); /*0x5a0962*/
    int v13 = *(_DWORD *)&v10->__pad_0[4]; /*0x5a0967*/
    *(_DWORD *)&v10->__pad_0[8] = v12; /*0x5a096a*/
    int v14 = 0; /*0x5a0970*/
    if ( v13 >= 0 ) /*0x5a0974*/
    {
      do /*0x5a0983*/
      {
        ++v14; /*0x5a0979*/
        *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * v14 - 4) = 0; /*0x5a097a*/
      }
      while ( v14 <= *(_DWORD *)&v10->__pad_0[4] ); /*0x5a0983*/
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
  else if ( *(_DWORD *)&aP3[2] != 512 ) /*0x5a09c5*/
  {
    v94 = 3.141592653589793; /*0x5a09c7*/
  }
  if ( aP3[1] ) /*0x5a09d7*/
  {
    v94 = 4.71238898038469; /*0x5a09dc*/
  }
  else if ( *(_DWORD *)&aP3[3] != 512 ) /*0x5a09f1*/
  {
    v94 = 1.570796326794897; /*0x5a09f3*/
  }
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a0a08*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a0a19*/
  {
    v90 = *(_DWORD *)(i + 36); /*0x5a0a1e*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v90 + 20 * unk_89C2DC * SHIWORD(v90) + 15) = 0; /*0x5a0a43*/
  }
  v17 = (MouseClass *)RandomMap::CellListAlloc(v89, (int)aP1); /*0x5a0a58*/
  int v18 = (int)v17->field_10; /*0x5a0a5d*/
  v84 = v17; /*0x5a0a60*/
  v82 = (_WORD *)v18; /*0x5a0a66*/
  v86 = 0; /*0x5a0a6a*/
  if ( v18 > 0 ) /*0x5a0a6e*/
  {
  int v22; // eax
  int v21; // ecx
    v19 = Block; /*0x5a0a74*/
    while ( 1 ) /*0x5a0a83*/
    {
      v20 = (MouseClass *)*v15; /*0x5a0a83*/
      v88 = *((_DWORD *)v84->field_4 + v86); /*0x5a0a88*/
      v21 = SHIWORD(v88); /*0x5a0a8c*/
      v22 = (__int16)v88; /*0x5a0a91*/
      if ( (__int16)v88 >= (int)v20 ) /*0x5a0a96*/
      {
        if ( (__int16)v88 >= (int)v20 + *(_DWORD *)&v15[2] ) /*0x5a0aa3*/
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
    if ( SHIWORD(v88) < *(_DWORD *)&v23 + *(_DWORD *)&aP3[3] ) /*0x5a0abe*/
    {
  double v26; // st7
      *v19 = (MapResourceClass)v88; /*0x5a0ac8*/
      v24 = (MapResourceClass *)(v22 - *a4); /*0x5a0ad2*/
      int v25 = v21 - a4[1]; /*0x5a0ad8*/
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
      double v27 = fabs(v26 - v94); /*0x5a0b10*/
      v93 = v27; /*0x5a0b18*/
  char v29; // c0
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
      unsigned int v30 = (unsigned int)v19; /*0x5a0b73*/
      v19 += 2; /*0x5a0b76*/
      ++v85; /*0x5a0b91*/
      v90 = v30; /*0x5a0b95*/
      v89 = v19; /*0x5a0b99*/
      *(float *)&v19[-1] = v93 * 1.5 + (double)v92 * 2.328306437080797e-10 * 2.0; /*0x5a0b9f*/
      unsigned int v31 = *(_DWORD *)v10->__pad_0 + 1; /*0x5a0ba7*/
      LODWORD(v91) = *(_DWORD *)(v30 + 4); /*0x5a0ba8*/
      unsigned int v32 = v31 >> 1; /*0x5a0bb1*/
      if ( v31 < *(_DWORD *)&v10->__pad_0[4] ) /*0x5a0bb5*/
      {
        if ( v31 <= 1 ) /*0x5a0bba*/
        {
          v15 = aP3; /*0x5a0bf4*/
        }
        else
        {
          do /*0x5a0bda*/
          {
            int v33 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a0bbc*/
            int v34 = *(_DWORD *)(v33 + 4 * v32); /*0x5a0bbf*/
            if ( *(float *)(v34 + 4) <= (double)*(float *)&v91 ) /*0x5a0bce*/
              break; /*0x5a0bce*/
            *(_DWORD *)(v33 + 4 * v31) = v34; /*0x5a0bd0*/
            v31 = v32; /*0x5a0bd3*/
            v32 >>= 1; /*0x5a0bd5*/
          }
          while ( v31 > 1 ); /*0x5a0bda*/
          v15 = aP3; /*0x5a0bdc*/
          v30 = v90; /*0x5a0bdf*/
          v19 = v89; /*0x5a0be3*/
        }
        *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * v31) = v30; /*0x5a0bfa*/
        unsigned int v35 = *(_DWORD *)&v10->__pad_0[12]; /*0x5a0bff*/
        ++*(_DWORD *)v10->__pad_0; /*0x5a0c05*/
        if ( v30 > v35 ) /*0x5a0c07*/
          *(_DWORD *)&v10->__pad_0[12] = v30; /*0x5a0c09*/
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
    (*(void (__thiscall **)(MouseClass *, int))v17->field_0)(v17, 1); /*0x5a0c3e*/
  long double v36 = __FYL2X__((double)(int)v82, 0.6931471805599453094); /*0x5a0c46*/
  if ( v36 < 1.0 ) /*0x5a0c55*/
    v36 = 1.0; /*0x5a0c59*/
  v86 = Math::RoundToInt(1.0 / (1.0 / v36 * a3) * 0.5); /*0x5a0c79*/
  *(double *)&v95 = (double)(unsigned int)(v86 / 2 + 1); /*0x5a0c95*/
  do /*0x5a0cc0*/
  {
    *(_QWORD *)&v93 = (unsigned int)Random::State(&g_Randomizer); /*0x5a0ca3*/
    v37 = Math::RoundToInt((double)*(__int64 *)&v93 * *(double *)&v95 * 2.328306437080797e-10); /*0x5a0cb9*/
  }
  while ( v37 > v86 / 2 ); /*0x5a0cc0*/
  v86 += v37; /*0x5a0cc8*/
  if ( *(_DWORD *)v10->__pad_0 ) /*0x5a0ccc*/
  {
    v39 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a0cda*/
    v40 = *(__int16 **)(v39 + 4); /*0x5a0ce2*/
    *(_DWORD *)(v39 + 4) = *(_DWORD *)(v39 + 4 * *(_DWORD *)v10->__pad_0); /*0x5a0ce5*/
    *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a0ced*/
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
    if ( !*((_DWORD *)v41 + 14) ) /*0x5a0d4a*/
    {
      v42 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v38); /*0x5a0d57*/
      if ( Cell::IsEmpty(v42) ) /*0x5a0d5e*/
      {
        v41[75] = 1; /*0x5a0d6a*/
        *((_DWORD *)v41 + 14) = aP1; /*0x5a0d6e*/
      }
      v38 = v83; /*0x5a0d71*/
    }
    v43 = 0; /*0x5a0d7d*/
    v90 = 0; /*0x5a0d82*/
    v89 = &Block[2 * v85]; /*0x5a0d86*/
    while ( 1 ) /*0x5a0df4*/
    {
      LODWORD(v91) = CellStruct::Add(v38, (IUnknown *)&v93, (IUnknown *)(4 * (v43 & 7) + 9041544))->field_0; /*0x5a0dad*/
      v84 = (MouseClass *)LODWORD(v91); /*0x5a0db1*/
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
      if ( !*((_DWORD *)v46 + 14) && *((MouseClass **)v46 + 15) != aP1 && SLOWORD(v91) >= *(int *)aP3 ) /*0x5a0e2d*/
      {
        if ( SLOWORD(v91) < *(_DWORD *)aP3 + *(_DWORD *)&aP3[2] ) /*0x5a0e3a*/
        {
          v47 = aP3[1]; /*0x5a0e40*/
          if ( SWORD1(v91) >= *(int *)&v47 && SWORD1(v91) < *(_DWORD *)&v47 + *(_DWORD *)&aP3[3] ) /*0x5a0e52*/
          {
            v48 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v84); /*0x5a0e62*/
            if ( Cell::IsEmpty(v48) ) /*0x5a0e69*/
            {
              v49 = v89; /*0x5a0e76*/
              v50 = (__int16)v84; /*0x5a0e7a*/
              *v89 = (MapResourceClass)v84; /*0x5a0e81*/
              v52 = SHIWORD(v84) - a4[1]; /*0x5a0e94*/
              v89 = (MapResourceClass *)(v50 - *a4); /*0x5a0e98*/
              v51 = v89; /*0x5a0e92*/
              LODWORD(v91) = v52; /*0x5a0e9c*/
              if ( v89 ) /*0x5a0ea0*/
              {
                v53 = Math::ArcTan(-((double)SLODWORD(v91) / (double)(int)v89)); /*0x5a0eb6*/
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
              v58 = (__int16)v84; /*0x5a0f48*/
              *(float *)&v49[1] = v91 * 1.5 + (double)v95 * 2.328306437080797e-10 * 2.0; /*0x5a0f4f*/
              *((_DWORD *)g_MapTileArray + 20 * v58 + 20 * unk_89C2DC * v57 + 15) = aP1; /*0x5a0f6a*/
              v59 = v49; /*0x5a0f73*/
              ++v85; /*0x5a0f75*/
              v60 = *(_DWORD *)v10->__pad_0 + 1; /*0x5a0f81*/
              LODWORD(v92) = v49[1]; /*0x5a0f82*/
              v61 = *(_DWORD *)&v10->__pad_0[4]; /*0x5a0f86*/
              v62 = v60 >> 1; /*0x5a0f8b*/
              LODWORD(v91) = v49; /*0x5a0f8f*/
              v89 = v49 + 2; /*0x5a0f93*/
              if ( v60 < v61 ) /*0x5a0f97*/
              {
                if ( v60 > 1 ) /*0x5a0fa0*/
                {
                  do /*0x5a0fc0*/
                  {
                    v63 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a0fa2*/
                    v64 = *(_DWORD *)(v63 + 4 * v62); /*0x5a0fa5*/
                    if ( *(float *)(v64 + 4) <= (double)*(float *)&v92 ) /*0x5a0fb4*/
                      break; /*0x5a0fb4*/
                    *(_DWORD *)(v63 + 4 * v60) = v64; /*0x5a0fb6*/
                    v60 = v62; /*0x5a0fb9*/
                    v62 >>= 1; /*0x5a0fbb*/
                  }
                  while ( v60 > 1 ); /*0x5a0fc0*/
                  v59 = (MapResourceClass *)LODWORD(v91); /*0x5a0fc2*/
                }
                *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * v60) = v59; /*0x5a0fc9*/
                v65 = *(_DWORD *)&v10->__pad_0[12]; /*0x5a0fce*/
                ++*(_DWORD *)v10->__pad_0; /*0x5a0fd4*/
                if ( (unsigned int)v59 > v65 ) /*0x5a0fd6*/
                  *(_DWORD *)&v10->__pad_0[12] = v59; /*0x5a0fd8*/
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
        v66 = v45[20 * (__int16)v84 + 14 + 20 * unk_89C2DC * SHIWORD(v84)]; /*0x5a1013*/
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
    v68 = *(__int16 **)v10->__pad_0; /*0x5a1057*/
    v69 = *(_DWORD *)v10->__pad_0 == 0; /*0x5a1059*/
    v94 = v67 * 0.7853981633974483 + v94; /*0x5a105f*/
    if ( v69 ) /*0x5a1063*/
    {
      v83 = v68; /*0x5a1065*/
    }
    else
    {
      v70 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a106b*/
      v71 = *(__int16 **)(v70 + 4); /*0x5a1073*/
      *(_DWORD *)(v70 + 4) = *(_DWORD *)(v70 + 4 * (_DWORD)v68); /*0x5a1076*/
      *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a107e*/
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
    if ( *(_DWORD *)v10->__pad_0 ) /*0x5a10b0*/
    {
      v72 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a10ba*/
      v73 = *(__int16 **)(v72 + 4); /*0x5a10c2*/
      *(_DWORD *)(v72 + 4) = *(_DWORD *)(v72 + 4 * *(_DWORD *)v10->__pad_0); /*0x5a10c5*/
      *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a10cd*/
      Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a10db*/
      v74 = v73; /*0x5a10e2*/
      if ( v73 ) /*0x5a10e4*/
      {
        while ( v81 ) /*0x5a10ef*/
        {
          if ( g_MapTileArray ) /*0x5a10f9*/
          {
            v75 = 80 * (*v74 + unk_89C2DC * v74[1]); /*0x5a110e*/
            v76 = *(_DWORD *)((char *)g_MapTileArray + v75 + 56); /*0x5a1111*/
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
          if ( !*(_DWORD *)v10->__pad_0 ) /*0x5a112d*/
            break; /*0x5a112d*/
          v78 = *(_DWORD *)&v10->__pad_0[8]; /*0x5a1133*/
          v79 = *(__int16 **)(v78 + 4); /*0x5a113b*/
          *(_DWORD *)(v78 + 4) = *(_DWORD *)(v78 + 4 * *(_DWORD *)v10->__pad_0); /*0x5a113e*/
          *(_DWORD *)(*(_DWORD *)&v10->__pad_0[8] + 4 * (*(_DWORD *)v10->__pad_0)--) = 0; /*0x5a1148*/
          Heap::SiftDown((int *)v10->__pad_0, 1); /*0x5a1154*/
          v74 = v79; /*0x5a115b*/
          if ( !v79 ) /*0x5a115d*/
            break; /*0x5a115d*/
          continue; /*0x5a115d*/
        }
      }
    }
  }
  __3_YAXPAX_Z(Block); /*0x5a115f*/
  if ( v10 ) /*0x5a116e*/
    Scalar::Dtor((void **)v10, 1); /*0x5a1174*/
  return v81; /*0x5a117d*/
}
}
} // namespace gamemd

// 0x5A23A0
namespace gamemd {
void RandomMap::PlaceRandomMapTiberium()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v2; // bx
  int result; // eax
  __int16 v7; // bp
  __int16 v10; // bx
  int *Waypoint_Location; // eax
  __int16 *v42; // eax
  bool v44; // [esp+1Fh] [ebp-79h]
  int v45; // [esp+20h] [ebp-78h]
  RandomMap *v46; // [esp+24h] [ebp-74h]
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
  __int64 v63; // [esp+70h] [ebp-28h]
  __int64 v64; // [esp+78h] [ebp-20h]
  void **v65; // [esp+80h] [ebp-18h] BYREF
  void *Block; // [esp+84h] [ebp-14h]
  int v67; // [esp+88h] [ebp-10h]
  char v68; // [esp+8Dh] [ebp-Bh]
  int v69; // [esp+90h] [ebp-8h]
  int v70; // [esp+94h] [ebp-4h]
  RandomMap *v1 = this; /*0x5a23af*/
  v2 = 0; /*0x5a23b1*/
  int v3 = this->q03C; /*0x5a23b4*/
  int v4 = this->q010; /*0x5a23b7*/
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
      int * v6 = (int *)*((_DWORD *)g_RandomMap_TerrainState + result); /*0x5a240c*/
      if ( *v6 ) /*0x5a240f*/
      {
        v50 = -1; /*0x5a241b*/
        if ( v44 ) /*0x5a2425*/
        {
  unsigned int v11; // eax
          v7 = 0; /*0x5a242e*/
          if ( v6[8] <= 0 ) /*0x5a2433*/
          {
            unsigned int v12 = v6[14] - 1; /*0x5a2484*/
            v63 = (unsigned int)v6[14]; /*0x5a2488*/
            v54 = (double)v63; /*0x5a2490*/
            do /*0x5a24bb*/
            {
              v64 = (unsigned int)Random::State(&g_Randomizer); /*0x5a249e*/
              v11 = Math::RoundToInt((double)v64 * v54 * 2.328306437080797e-10); /*0x5a24b4*/
            }
            while ( v11 > v12 ); /*0x5a24bb*/
            v47 = *(_DWORD *)(v6[11] + 4 * v11); /*0x5a24c3*/
            LOWORD(v11) = HIWORD(v47); /*0x5a24c7*/
            v10 = v47; /*0x5a24cc*/
          }
          else
          {
            int v8 = 0; /*0x5a2435*/
            do /*0x5a2467*/
            {
              LODWORD(v60) = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(v57, v8 + v45); /*0x5a2455*/
              v7 += WORD1(v60); /*0x5a2459*/
              v2 += LOWORD(v60); /*0x5a245e*/
              ++v8; /*0x5a2464*/
            }
            while ( v8 < v6[8] ); /*0x5a2467*/
            int v9 = v6[8]; /*0x5a2469*/
            v10 = v2 / v9; /*0x5a2472*/
            v11 = v7 / v9; /*0x5a2479*/
          }
          int v13 = *v6; /*0x5a24cf*/
          int v14 = 0; /*0x5a24d1*/
          v48 = 500000; /*0x5a24d3*/
          if ( *(int *)(*v6 + 16) > 0 ) /*0x5a24e0*/
          {
            int v15 = (__int16)v11; /*0x5a24e5*/
            do /*0x5a2546*/
            {
              int v16 = *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v14); /*0x5a24ee*/
  double v17; // st7
              v17 = Math::Sqrt((double)(((__int16)v16 - v10) * ((__int16)v16 - v10) /*0x5a2518*/
                                      + (SHIWORD(v16) - v15) * (SHIWORD(v16) - v15)));
              if ( v17 < (double)v48 ) /*0x5a252d*/
              {
                v48 = Math::RoundToInt(v17); /*0x5a2534*/
                v50 = v14; /*0x5a2538*/
              }
              v13 = *v6; /*0x5a2540*/
              ++v14; /*0x5a2542*/
            }
            while ( v14 < *(_DWORD *)(*v6 + 16) ); /*0x5a2546*/
          }
          v1 = v46; /*0x5a2548*/
        }
        Math::RoundToInt((double)v1[21] * 0.01 * (double)(v1[176] - v1[175]) + (double)v1[175]); /*0x5a2575*/
        double v18 = (double)v6[8]; /*0x5a257a*/
        if ( v18 < 0.5 ) /*0x5a258e*/
          v18 = 0.5; /*0x5a2592*/
        int v19 = Math::RoundToInt(v18); /*0x5a259e*/
        int v20 = *(_DWORD *)(*v6 + 16); /*0x5a25a7*/
        if ( v20 && v19 ) /*0x5a25b4*/
        {
          int v21 = 0; /*0x5a25bd*/
          int v22 = 0; /*0x5a25bf*/
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
              int v23 = Math::RoundToInt((double)v55 + v49); /*0x5a2603*/
              if ( v23 >= 0 ) /*0x5a260a*/
                Terrain::PlaceTiberiumTrees((__int16 *)(*(_DWORD *)(*v6 + 4) + 4 * v22), v23, v22 + v45 + 1, v22 == v50); /*0x5a262d*/
              ++v22; /*0x5a2634*/
            }
            while ( v22 < *(_DWORD *)(*v6 + 16) ); /*0x5a2638*/
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
              int v25 = *v6; /*0x5a2699*/
              int v26 = *Waypoint_Location; /*0x5a269b*/
              int v27 = 0; /*0x5a269d*/
              if ( *(int *)(*v6 + 16) > 0 ) /*0x5a26a8*/
              {
  int v32; // eax
                int v28 = SHIWORD(v26); /*0x5a26aa*/
                int v29 = (__int16)v26; /*0x5a26af*/
                do /*0x5a26fa*/
                {
                  int v30 = *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * v27); /*0x5a26b8*/
  double v31; // st7
                  v31 = Math::Sqrt((double)(((__int16)v30 - v29) * ((__int16)v30 - v29) /*0x5a26e2*/
                                          + (SHIWORD(v30) - v28) * (SHIWORD(v30) - v28)));
                  v25 = *v6; /*0x5a26e7*/
                  v32 = *(_DWORD *)(*v6 + 16); /*0x5a26f0*/
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
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v65[2])(&v65, v70 + v67, 0) )
              {
                int v33 = v69++; /*0x5a275e*/
                *((double *)Block + v33) = v56; /*0x5a276c*/
              }
              v51 = ++v21; /*0x5a2775*/
            }
            while ( v21 < v6[8] ); /*0x5a2779*/
          }
          int v34 = v6[8]; /*0x5a277f*/
          double * v35 = (double *)Block; /*0x5a2782*/
          v61 = 9999999.0; /*0x5a2788*/
          if ( v34 > 0 ) /*0x5a2798*/
          {
            _DWORD * v36 = Block; /*0x5a279a*/
            int v37 = v34; /*0x5a279c*/
            do /*0x5a27bc*/
            {
              if ( *(double *)v36 < v61 ) /*0x5a27a9*/
              {
                int v38 = v36[1]; /*0x5a27ad*/
                LODWORD(v61) = *v36; /*0x5a27b0*/
                HIDWORD(v61) = v38; /*0x5a27b4*/
              }
              v36 += 2; /*0x5a27b8*/
              --v37; /*0x5a27bb*/
            }
            while ( v37 ); /*0x5a27bc*/
          }
          v52 = 0; /*0x5a27da*/
          if ( v46[16] == 3 ) /*0x5a27c6*/
          {
            int v39 = v46[15]; /*0x5a27c8*/
            if ( v39 == 1 || v39 == 3 || v39 == 4 ) /*0x5a27d8*/
              v52 = 1; /*0x5a27c6*/
          }
          int v40 = 0; /*0x5a27e6*/
          if ( v34 > 0 ) /*0x5a27ea*/
          {
            int v41 = v45; /*0x5a27ec*/
            do /*0x5a2837*/
            {
              int v43 = Math::RoundToInt((v35[v40] - v61) * 15.0) + 500; /*0x5a2816*/
              v42 = (__int16 *)ScenarioClass::Get_Waypoint_Location(v59, v41); /*0x5a281d*/
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
              __3_YAXPAX_Z(v35); /*0x5a2860*/
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
} // namespace gamemd

// 0x5A3AE0
namespace gamemd {
void RandomMap::PlaceResources()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  int Bit; // edi
  int j; // eax
  unsigned int v17; // eax
  signed int v18; // ebp
  int result; // eax
  unsigned int v20; // edi
  unsigned int v21; // esi
  _WORD *v22; // eax
  _DWORD *v23; // eax
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
  __int64 v45; // [esp+50h] [ebp-18h]
  __int64 v46; // [esp+58h] [ebp-10h]
  __int64 v47; // [esp+60h] [ebp-8h]
  RandomMap *v1 = this; /*0x5a3aec*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a3af8*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a3b0b*/
  {
    LODWORD(v39) = *(_DWORD *)(i + 36); /*0x5a3b10*/
    *((_DWORD *)g_MapTileArray + 20 * SLOWORD(v39) + 20 * unk_89C2DC * SWORD1(v39) + 15) = 0; /*0x5a3b35*/
  }
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a3b47*/
  Bit = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a3b56*/
  do /*0x5a3b86*/
  {
    *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3b62*/
    v38 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000004889443517869674 + 20.0); /*0x5a3b82*/
  }
  while ( (unsigned int)v38 > 0x28 ); /*0x5a3b86*/
  do /*0x5a3bb6*/
  {
    *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3b92*/
    v33 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000004889443517869674 + 20.0); /*0x5a3bb2*/
  }
  while ( (unsigned int)v33 > 0x28 ); /*0x5a3bb6*/
  do /*0x5a3be6*/
  {
    *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a3bc2*/
    v40 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000004889443517869674 + 20.0); /*0x5a3be2*/
  }
  while ( (unsigned int)v40 > 0x28 ); /*0x5a3be6*/
  if ( Bit ) /*0x5a3bea*/
  {
    do /*0x5a3f0a*/
    {
      LODWORD(v39) = *(_DWORD *)(Bit + 36); /*0x5a3bf9*/
      double * v4 = (double *)((char *)g_MapTileArray + 80 * SLOWORD(v39) + 80 * unk_89C2DC * SWORD1(v39)); /*0x5a3c16*/
      if ( Cell::IsEmpty((_DWORD *)Bit) /*0x5a3c47*/
        && !*(_BYTE *)(Bit + 284)
        && *(_DWORD *)(Bit + 68) == -1
        && !*(_DWORD *)(Bit + 228)
        && !*((_BYTE *)v4 + 69) )
      {
        LODWORD(v39) = *(_DWORD *)(Bit + 36); /*0x5a3c58*/
        int v5 = SLOWORD(v39) + (SWORD1(v39) << 9); /*0x5a3c67*/
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
      Bit = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a3f06*/
    }
    while ( Bit ); /*0x5a3f0a*/
    v1 = this; /*0x5a3f10*/
  }
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a3f19*/
  for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); j; j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a3f2a*/
    CellClass::DetermineTileType(j); /*0x5a3f2e*/
  LODWORD(v39) = Math::RoundToInt(((double)v1[25] * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1[191]); /*0x5a3f68*/
  v34 = 0; /*0x5a3f6c*/
  if ( SLODWORD(v39) > 0 ) /*0x5a3f70*/
  {
  bool v15; // cc
    do /*0x5a40bd*/
    {
  int v12; // eax
  _DWORD *v11; // eax
      if ( v34 >= 100 ) /*0x5a3f7b*/
        break; /*0x5a3f7b*/
      int v7 = 0; /*0x5a3f81*/
      do /*0x5a3fe9*/
      {
  _WORD *v10; // eax
  int v9; // esi
        unsigned int v8 = unk_89C2DC * unk_89C2DC - 1; /*0x5a3f8b*/
        do /*0x5a3fb3*/
        {
          v9 = Range_RandomInt(0, v8); /*0x5a3f9d*/
          v10 = CellStruct::Set(&v41, 0, 0); /*0x5a3f9f*/
        }
        while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v9, v10) ); /*0x5a3fb3*/
        ++v7; /*0x5a3fc8*/
        v38 = *((_DWORD *)g_MapTileArray + 20 * v9); /*0x5a3fd2*/
        if ( v7 > 200 ) /*0x5a3fd6*/
        {
          v12 = *(_DWORD *)CellStruct::Set(&v42, 0, 0); /*0x5a3fff*/
          goto LABEL_48; /*0x5a4001*/
        }
        v11 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v38); /*0x5a3fe2*/
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
      void * v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v40); /*0x5a4099*/
      int v14 = ScatterTerrainTrees((int)v13, v31, v32); /*0x5a40a3*/
      v15 = LODWORD(v39) - v14 <= 0; /*0x5a40b3*/
      LODWORD(v39) -= v14; /*0x5a40b5*/
      ++v34; /*0x5a40b9*/
    }
    while ( !v15 ); /*0x5a40bd*/
  }
  unsigned int v16 = Object::ComputeAllocationSize() / 200; /*0x5a40df*/
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
      while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v21, v22) ); /*0x5a419c*/
      v40 = *((_DWORD *)g_MapTileArray + 20 * v21); /*0x5a41be*/
      v23 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v40); /*0x5a41c2*/
      v24 = (int)v23; /*0x5a41c7*/
      if ( v23[17] == -1 ) /*0x5a41cd*/
        break; /*0x5a41cd*/
LABEL_72:
      result = ++v35; /*0x5a4262*/
      if ( v35 >= 5 * v18 ) /*0x5a4271*/
        return result; /*0x5a4271*/
    }
    if ( (unsigned __int8)RandomMap::Check(v23) ) /*0x5a41d5*/
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
      if ( !Cell::IsEmpty((_DWORD *)v24) && !Cell::IsShore((int *)v24) ) /*0x5a421f*/
        goto LABEL_71; /*0x5a421f*/
      do /*0x5a4245*/
      {
        *(_QWORD *)&v44 = (unsigned int)Random::State(&g_Randomizer); /*0x5a422b*/
        v27 = Math::RoundToInt((double)*(__int64 *)&v44 * 0.000000001164153218540399); /*0x5a423d*/
      }
      while ( v27 > 4 ); /*0x5a4245*/
      v26 = v27 + 173; /*0x5a4247*/
    }
    *(_DWORD *)(v24 + 68) = v26; /*0x5a424c*/
LABEL_71:
    *(_BYTE *)(v24 + 286) = 0; /*0x5a424f*/
    House::AnnounceUpgrade(v24, -1); /*0x5a4259*/
    ++v37; /*0x5a425e*/
    goto LABEL_72; /*0x5a425e*/
  }
  return result; /*0x5a4277*/
}
}
} // namespace gamemd

// 0x5A4280
namespace gamemd {
void RandomMap::GenerateRandomMapTerrain()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  int BitLCW; // esi
  int j; // eax
  int result; // eax
  int v21; // [esp+24h] [ebp-2Ch]
  int v22; // [esp+28h] [ebp-28h] BYREF
  __int16 v23; // [esp+2Ch] [ebp-24h] BYREF
  double v24; // [esp+30h] [ebp-20h]
  double v25; // [esp+38h] [ebp-18h]
  __int64 v26; // [esp+40h] [ebp-10h]
  __int64 v27; // [esp+48h] [ebp-8h]
  RandomMap *v1 = this; /*0x5a428d*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a4298*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a42ab*/
  {
    v21 = *(_DWORD *)(i + 36); /*0x5a42b0*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v21 + 20 * unk_89C2DC * SHIWORD(v21) + 15) = 0; /*0x5a42d5*/
  }
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a42e7*/
  BitLCW = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a42f6*/
  if ( BitLCW ) /*0x5a42fa*/
  {
    do /*0x5a43e6*/
    {
      v21 = *(_DWORD *)(BitLCW + 36); /*0x5a4309*/
      double * v4 = (double *)((char *)g_MapTileArray + 80 * (__int16)v21 + 80 * unk_89C2DC * SHIWORD(v21)); /*0x5a4326*/
      if ( Cell::IsEmpty((_DWORD *)BitLCW) && !*(_BYTE *)(BitLCW + 284) && !*((_BYTE *)v4 + 69) ) /*0x5a4341*/
      {
        v21 = *(_DWORD *)(BitLCW + 36); /*0x5a4352*/
        *(_QWORD *)&v25 = (unsigned int)Random::State(&g_Randomizer); /*0x5a4368*/
        if ( (double)*(__int64 *)&v25 * 2.328306437080797e-10 < v4[5] ) /*0x5a4382*/
        {
          do /*0x5a43ba*/
          {
            do /*0x5a43a9*/
              v24 = Random::Gaussian((double *)&g_TileSystemInit) * 15.0 + 20.0; /*0x5a439a*/
            while ( v24 < 4.0 ); /*0x5a43a9*/
          }
          while ( v24 > 60.0 ); /*0x5a43ba*/
          int v5 = Math::RoundToInt(v24); /*0x5a43c2*/
          FloodFillPathfinding(BitLCW, dword_ABC2B8, v5, (__int16)v21 + (SHIWORD(v21) << 9), 0); /*0x5a43d3*/
        }
      }
      BitLCW = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a43e2*/
    }
    while ( BitLCW ); /*0x5a43e6*/
    v1 = this; /*0x5a43ec*/
  }
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a43f5*/
  for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); j; j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a4406*/
    CellClass::DetermineTileType(j); /*0x5a440a*/
  result = Math::RoundToInt(((double)v1[25] * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1[191]); /*0x5a443d*/
  v21 = result; /*0x5a4444*/
  int v19 = 0; /*0x5a4448*/
  if ( result > 0 ) /*0x5a444c*/
  {
  bool v15; // cc
    do /*0x5a45cf*/
    {
  int v20; // [esp+20h] [ebp-30h] BYREF
  int v13; // eax
  _DWORD *v12; // eax
      if ( v19 >= 100 ) /*0x5a4457*/
        break; /*0x5a4457*/
      int v8 = 0; /*0x5a445d*/
      do /*0x5a44f7*/
      {
  _WORD *v11; // eax
  unsigned int v10; // esi
        unsigned int v9 = unk_89C2DC * unk_89C2DC - 1; /*0x5a4467*/
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
        while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v10, v11) ); /*0x5a44c2*/
        ++v8; /*0x5a44d6*/
        v20 = *((_DWORD *)g_MapTileArray + 20 * v10); /*0x5a44e0*/
        if ( v8 > 200 ) /*0x5a44e4*/
        {
          v13 = 0; /*0x5a450f*/
          goto LABEL_27; /*0x5a4513*/
        }
        v12 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v20); /*0x5a44f0*/
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
      double v17 = v24; /*0x5a459a*/
      int v16 = Math::RoundToInt(v25); /*0x5a45a4*/
      void * v14 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v22); /*0x5a45ab*/
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
} // namespace gamemd

// 0x5A80B0
namespace gamemd {
void RandomMap::PlaceMapSeedBuildings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  __int16 v28; // [esp+38h] [ebp-24h] BYREF
  int v1 = dword_ABC1D4; /*0x5a80b3*/
  RandomMap *v27 = this; /*0x5a80c1*/
  int v3 = 0; /*0x5a80c5*/
  int * v4 = &dword_ABE378; /*0x5a80c7*/
  do /*0x5a80da*/
  {
    int v5 = v1 + v3++; /*0x5a80cc*/
    *v4 = v5; /*0x5a80d0*/
    v4 += 3; /*0x5a80d2*/
  }
  while ( (int)v4 < (int)&dword_ABE834 ); /*0x5a80da*/
  int v6 = dword_ABBEC0; /*0x5a80dc*/
  int v7 = 0; /*0x5a80e2*/
  int * v8 = &dword_ABE834; /*0x5a80e4*/
  do /*0x5a80f7*/
  {
    int v9 = v6 + v7++; /*0x5a80e9*/
    *v8 = v9; /*0x5a80ed*/
    v8 += 3; /*0x5a80ef*/
  }
  while ( (int)v8 < (int)dword_ABE894 ); /*0x5a80f7*/
  int v26 = Math::RoundToInt((double)this->q018 + 0.49 + (double)this->q018 + 0.49); /*0x5a8109*/
  int v25 = 0; /*0x5a810d*/
  int v21 = 0; /*0x5a8111*/
  do /*0x5a82c4*/
  {
    result = v26; /*0x5a8115*/
    if ( v21 >= v26 ) /*0x5a811f*/
      break; /*0x5a811f*/
    int v19 = 0; /*0x5a8125*/
    int v20 = 0; /*0x5a812f*/
LABEL_8:
    int v11 = unk_89C2DC; /*0x5a8133*/
    while ( 1 ) /*0x5a8139*/
    {
  double v24; // [esp+24h] [ebp-38h]
  int v23; // [esp+20h] [ebp-3Ch] BYREF
  int v17; // eax
      int v12 = 0; /*0x5a8139*/
      while ( 1 ) /*0x5a8140*/
      {
  _WORD *v15; // eax
  unsigned int v14; // esi
        unsigned int v13 = v11 * v11 - 1; /*0x5a8140*/
        do /*0x5a819b*/
        {
          __int64 v29 = v13 + 1; /*0x5a814a*/
          v24 = (double)v29; /*0x5a8152*/
          do /*0x5a817f*/
          {
            __int64 v30 = (unsigned int)Random::State(&g_Randomizer); /*0x5a8160*/
            v14 = Math::RoundToInt((double)v30 * v24 * 2.328306437080797e-10); /*0x5a817b*/
          }
          while ( v14 > v13 ); /*0x5a817f*/
          v15 = CellStruct::Set(&v28, 0, 0); /*0x5a8187*/
        }
        while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v14, v15) ); /*0x5a819b*/
        ++v12; /*0x5a81af*/
        v23 = *((_DWORD *)g_MapTileArray + 20 * v14); /*0x5a81b9*/
        if ( v12 > 200 ) /*0x5a81bd*/
        {
          int v22 = 0; /*0x5a81e4*/
          v17 = 0; /*0x5a81ee*/
          goto LABEL_19; /*0x5a81f2*/
        }
        _DWORD * v16 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v23); /*0x5a81c9*/
        if ( Cell::IsEmpty(v16) ) /*0x5a81d0*/
          break; /*0x5a81d0*/
        v11 = unk_89C2DC; /*0x5a81d9*/
      }
      v17 = v23; /*0x5a81f4*/
LABEL_19:
      LODWORD(v24) = v17; /*0x5a81fc*/
      v19 = v17; /*0x5a8201*/
      if ( ++v20 >= 20 ) /*0x5a820c*/
        break; /*0x5a820c*/
      v11 = unk_89C2DC; /*0x5a8213*/
      if ( !*((_BYTE *)g_MapTileArray + 80 * (__int16)v17 + 80 * unk_89C2DC * SWORD1(v24) + 69) ) /*0x5a822f*/
      {
  int v31[4]; // [esp+4Ch] [ebp-10h] BYREF
        v31[0] = (__int16)v17 - 4; /*0x5a823f*/
        v31[1] = SWORD1(v24) - 4; /*0x5a8243*/
        v31[2] = 8; /*0x5a8253*/
        v31[3] = 8; /*0x5a8257*/
        if ( !IsAreaClearMap(v31, 0, 0) || !LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v19, 1) ) /*0x5a8274*/
          goto LABEL_8; /*0x5a827b*/
        break; /*0x5a827b*/
      }
    }
    if ( v20 != 20 ) /*0x5a8286*/
    {
      RandomMap *v18 = v27; /*0x5a8288*/
      if ( ScheduleMapSeedBuildings(&v19) ) /*0x5a8293*/
      {
        ScatterMapSeedBuildings(v18, (__int16 *)&v19); /*0x5a82a3*/
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
} // namespace gamemd

// 0x5B9C90
namespace gamemd {
void RandomMap::RegenerateRandomMapPreview()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND DlgItem; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // ebx
  Debug::Log(); /*0x5b9c9f*/
  DataGlobal_8316D4 = 0; /*0x5b9cac*/
  if ( CCFileClass::Load(&loc_5BB260) == 1 ) /*0x5b9cbb*/
  {
    DataGlobal_8316D4 = 1; /*0x5b9ccd*/
    MapSeed::ValidateName(aRandmapSed); /*0x5b9cd2*/
    void * v2 = g_UIControlState; /*0x5b9cd7*/
    if ( g_UIControlState ) /*0x5b9cdf*/
    {
      ComPtr::Dtor(g_UIControlState); /*0x5b9ce3*/
      __3_YAXPAX_Z(v2); /*0x5b9ce9*/
      g_UIControlState = 0; /*0x5b9cf1*/
    }
    DlgItem = GetDlgItem(*(HWND *)this, 1448); /*0x5b9d03*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&word_ABE050); /*0x5b9d16*/
    char v4 = 0; /*0x5b9d21*/
    int v5 = 0; /*0x5b9d23*/
    if ( g_MultiplayerOptions > 0 ) /*0x5b9d27*/
    {
      while ( _strcmpi((const void *)(*(_DWORD *)(g_MultiplayerGameState + 4 * v5) + 88), aRandmapSed) ) /*0x5b9d44*/
      {
        if ( ++v5 >= g_MultiplayerOptions ) /*0x5b9d4e*/
          goto LABEL_9; /*0x5b9d4e*/
      }
      v4 = 1; /*0x5b9d52*/
    }
LABEL_9:
    char * v6 = GameConfig::ComputeCRC(); /*0x5b9d54*/
    char * v7 = v6; /*0x5b9d5b*/
    if ( v4 ) /*0x5b9d5d*/
    {
      GameOption::SetDigest(v6); /*0x5b9df6*/
      GameOption::SetDescriptionWStr(*(wchar_t **)(g_MultiplayerGameState + 4 * v5), &word_ABE050); /*0x5b9e08*/
    }
    else
    {
      v8 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x5b9d68*/
      if ( v8 ) /*0x5b9d72*/
        v9 = SessionClass::ParseGameInfo(v8, aRandmapSed, &word_ABE050, v7, 1, 0, 2, 4); /*0x5b9d8e*/
      else
        v9 = 0; /*0x5b9d92*/
      if ( g_MultiplayerOptions < DataGlobal_A8B8D0 /*0x5b9dcb*/
        || (DataGlobal_A8B8D5 || !DataGlobal_A8B8D0)
        && DataGlobal_A8B8DC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A8B8C8 + 8))(
             &DataGlobal_A8B8C8,
             DataGlobal_A8B8D0 + DataGlobal_A8B8DC,
             0) )
      {
        int v10 = g_MultiplayerOptions++; /*0x5b9dd8*/
        *(_DWORD *)(g_MultiplayerGameState + 4 * v10) = v9; /*0x5b9de7*/
      }
    }
    __3_YAXPAX_Z(v7); /*0x5b9e0e*/
    if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
    {
      g_GameRulesOptions = v5; /*0x5b9e2f*/
      char * v11 = (char *)g_ScenarioClass_Instance; /*0x5b9e3b*/
      strcpy(&Destination, aRandmapSed); /*0x5b9e51*/
      strcpy(v11 + 4700, &Destination); /*0x5b9e79*/
  _DWORD v17[22]; // [esp+8h] [ebp-6Ch] BYREF
      _DWORD * v12 = CCFileClass::Construct(v17, &Destination); /*0x5b9e86*/
      char v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v12 + 20))(v12, 0); /*0x5b9e98*/
      v17[0] = &vt_CCFileClass; /*0x5b9e9a*/
      int v19 = 0; /*0x5b9ea2*/
  _BYTE v18[12]; // [esp+60h] [ebp-14h] BYREF
      Vector::Clear((int)v18); /*0x5b9eaa*/
      v17[0] = &off_7E1668; /*0x5b9eb3*/
      BufferIOFileClass::Dtor(v17); /*0x5b9ebb*/
      if ( v13 ) /*0x5b9ec2*/
      {
        void * v14 = __2_YAPAXI_Z(4u); /*0x5b9ec6*/
        if ( v14 ) /*0x5b9ed0*/
          void * v15 = (void *)unknown_libname_27(v14); /*0x5b9ed4*/
        else
          v15 = 0; /*0x5b9edb*/
        g_UIControlState = v15; /*0x5b9ee4*/
        Surface::LoadToSurfaceSHP((char **)v15, stru_829ABC); /*0x5b9ee9*/
        PostMessageA(*(HWND *)this, 0xFu, 0, 0); /*0x5b9efb*/
      }
    }
    this->q024 = 1; /*0x5b9f07*/
  }
  DataGlobal_8316D4 = 1; /*0x5b9f10*/
  Debug::Log(); /*0x5b9f17*/
}
}
} // namespace gamemd

// 0x6558D0
namespace gamemd {
unsigned int * RandomMap::PlaceTileSet()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  RandomMap *v1 = this; /*0x6558d4*/
  result = __2_YAPAXI_Z(0x10u); /*0x6558dc*/
  _DWORD * v3 = result; /*0x6558e1*/
  int v4 = 0; /*0x6558e3*/
  if ( result ) /*0x6558ea*/
  {
  _DWORD *v9; // eax
    result[1] = Radar::PixelIndex; /*0x6558fb*/
    result[2] = 256; /*0x655902*/
    result[3] = 10; /*0x655909*/
    _DWORD * v5 = __2_YAPAXI_Z(0x1804u); /*0x65590c*/
    if ( v5 ) /*0x655916*/
    {
      _DWORD * v6 = v5 + 1; /*0x655918*/
      *v5 = 256; /*0x65591b*/
      _DWORD * v7 = v5 + 1; /*0x655921*/
      int v8 = 256; /*0x655923*/
      do /*0x65594c*/
      {
        v7[1] = 0; /*0x65592a*/
        v7[2] = 0; /*0x65592d*/
        *((_BYTE *)v7 + 12) = 1; /*0x655930*/
        *((_BYTE *)v7 + 13) = 0; /*0x655933*/
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
    int v10 = v3[2]; /*0x655958*/
    *v3 = v9; /*0x65595b*/
    result = 0; /*0x65595d*/
    if ( v10 > 0 ) /*0x655961*/
    {
      do /*0x655972*/
      {
        result = (_DWORD *)((char *)result + 1); /*0x655965*/
        *(_DWORD *)(v4 + *v3 + 20) = 10; /*0x655966*/
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
} // namespace gamemd

// 0x74EF10
namespace gamemd {
void RandomMap::RemoveMatching(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v2; // ebp
  int VeinholeMonsterClass_field_0x28; // eax
  VeinholeMonsterClass *v4; // ebx
  signed int i; // esi
  _BYTE *NeighbourContent; // eax
  unsigned __int8 v7; // al
  _DWORD **v17; // edi
  int j; // [esp+10h] [ebp-1Ch]
  float aP1a; // [esp+30h] [ebp+4h]

  v2 = aP1; /*0x74ef15*/
  VeinholeMonsterClass_field_0x28 = aP1->field_44; /*0x74ef20*/
  v4 = (VeinholeMonsterClass *)this; /*0x74ef23*/
  if ( VeinholeMonsterClass_field_0x28 == 126 && aP1->__pad_11C[2] >= 0x30u ) /*0x74ef38*/
  {
  int v41; // [esp+20h] [ebp-Ch]
    for ( i = 0; i < 8; i += 2 ) /*0x74ef3e*/
    {
      NeighbourContent = Cell::GetNeighbourContent(aP1, i); /*0x74ef43*/
      bool v8 = 0; /*0x74ef5b*/
      if ( *((_DWORD *)NeighbourContent + 17) == 126 ) /*0x74ef4b*/
      {
        v7 = NeighbourContent[286]; /*0x74ef4d*/
        if ( v7 < 0x30u || v7 > 0x33u ) /*0x74ef59*/
          v8 = 1; /*0x74ef4b*/
      }
      signed int v9 = i; /*0x74ef64*/
      *((_BYTE *)&v41 + v9 / 2) = v8; /*0x74ef71*/
    }
    CellClass::ProcessBridgeRepair(aP1); /*0x74ef79*/
    --v4[5].VeinholeMonsterClass_field_0x28; /*0x74ef85*/
    unsigned int v10 = 0; /*0x74ef8b*/
    for ( j = 0; j < 8; j += 2 ) /*0x74ef8d*/
    {
      char * v11 = (char *)Cell::GetNeighbourContent(v2, v10); /*0x74ef94*/
      if ( *((_DWORD *)v11 + 17) == -1 ) /*0x74ef9d*/
      {
        int * v12 = (int *)(v11 + 36); /*0x74efa3*/
        int v13 = Cell::PosToIndex((__int16 *)v11 + 18); /*0x74efad*/
        if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() ) /*0x74efba*/
        {
          *(_BYTE *)(v4[4].VeinholeMonsterClass_field_0x14 + v13) = 0; /*0x74efc2*/
          *(_BYTE *)(*(_DWORD *)&stru_B1D188[360] + v13) = 0; /*0x74efcc*/
        }
        if ( *((_BYTE *)&v41 + j / 2) == 1 && !LOBYTE(v4[5].VeinholeMonsterClass_field_0x24) ) /*0x74efe4*/
        {
          int * v14 = *(int **)v4[4].__pad_0; /*0x74eff2*/
          int v15 = 1; /*0x74effa*/
          int v42 = *v12; /*0x74efff*/
          int v16 = *v14; /*0x74f003*/
          if ( *v14 < 1 ) /*0x74f007*/
          {
LABEL_39:
            Debug::Log(); /*0x74f138*/
          }
          else
          {
            int v40 = v14[2]; /*0x74f010*/
            v17 = (_DWORD **)(v40 + 4); /*0x74f014*/
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
              int v18 = *(_DWORD *)(v40 + 4 * v16); /*0x74f04c*/
              float v39 = *(float *)(v18 + 4); /*0x74f052*/
              int v19 = v15 >> 1; /*0x74f058*/
              *v14 = v16 - 1; /*0x74f05e*/
              if ( v15 == 1 || *(float *)(*(_DWORD *)(v40 + 4 * v19) + 4) < (double)v39 ) /*0x74f071*/
              {
                *(_DWORD *)(v40 + 4 * v15) = v18; /*0x74f0d9*/
                Heap::SiftDown(v14, v15); /*0x74f0df*/
                if ( *v14 >= 1 ) /*0x74f0e9*/
                {
                  int v24 = v14[2] + 4; /*0x74f0f1*/
                  int v25 = *v14; /*0x74f0f4*/
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
                  int v20 = v14[2]; /*0x74f078*/
                  int v21 = *(_DWORD *)(v20 + 4 * v19); /*0x74f07b*/
                  if ( *(float *)(v21 + 4) <= (double)v39 ) /*0x74f08a*/
                    break; /*0x74f08a*/
                  *(_DWORD *)(v20 + 4 * v15) = v21; /*0x74f08c*/
                  v15 = v19; /*0x74f08f*/
                }
                *(_DWORD *)(v14[2] + 4 * v15) = v18; /*0x74f09b*/
                if ( *v14 >= 1 ) /*0x74f0a3*/
                {
                  int v22 = v14[2] + 4; /*0x74f0ab*/
                  int v23 = *v14; /*0x74f0ae*/
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
    int v26 = v2->field_44; /*0x74f15d*/
    VeinholeMonsterClass_field_0x28 = Cell::PosToIndex((__int16 *)&aP1->field_24); /*0x74f165*/
    int v27 = VeinholeMonsterClass_field_0x28; /*0x74f16a*/
    v41 = VeinholeMonsterClass_field_0x28; /*0x74f16e*/
    if ( VeinholeMonsterClass_field_0x28 >= 0 ) /*0x74f172*/
    {
      VeinholeMonsterClass_field_0x28 = Object::ComputeAllocationSize(); /*0x74f178*/
      if ( v27 < VeinholeMonsterClass_field_0x28 ) /*0x74f17f*/
      {
        if ( v26 == -1 ) /*0x74f188*/
        {
          *(_BYTE *)(v4[4].VeinholeMonsterClass_field_0x14 + v27) = 0; /*0x74f190*/
          *(_BYTE *)(*(_DWORD *)&stru_B1D188[360] + v27) = 0; /*0x74f19a*/
        }
        else
        {
          LOBYTE(VeinholeMonsterClass_field_0x28) = v4[5].VeinholeMonsterClass_field_0x24; /*0x74f1a8*/
          if ( !(_BYTE)VeinholeMonsterClass_field_0x28 ) /*0x74f1b0*/
          {
            VeinholeMonsterClass_field_0x28 = v4[3].VeinholeMonsterClass_field_0x28; /*0x74f1bc*/
            if ( VeinholeMonsterClass_field_0x28 < *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 220) ) /*0x74f1c8*/
            {
              *(_DWORD *)(v4[4].VeinholeMonsterClass_field_0x04 + 8 * VeinholeMonsterClass_field_0x28) = aP1->field_24; /*0x74f1d6*/
              *(float *)(v4[4].VeinholeMonsterClass_field_0x04 + 8 * v4[3].VeinholeMonsterClass_field_0x28 + 4) = (float)(int)(*(_DWORD *)&HouseClass_Player[45112] / 50 + abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536)) % 50) + 1); /*0x74f22a*/
              int v28 = v4[3].VeinholeMonsterClass_field_0x28; /*0x74f22e*/
              _DWORD * v29 = *(_DWORD **)v4[4].__pad_0; /*0x74f23a*/
              unsigned int v30 = v4[4].VeinholeMonsterClass_field_0x04 + 8 * v28; /*0x74f240*/
              v4[3].VeinholeMonsterClass_field_0x28 = v28 + 1; /*0x74f244*/
              unsigned int v31 = *v29 + 1; /*0x74f24f*/
              aP1a = *(float *)(v30 + 4); /*0x74f252*/
              unsigned int v32 = v31 >> 1; /*0x74f259*/
              if ( v31 < v29[1] ) /*0x74f25d*/
              {
                if ( v31 > 1 ) /*0x74f262*/
                {
                  do /*0x74f282*/
                  {
                    int v33 = v29[2]; /*0x74f264*/
                    int v34 = *(_DWORD *)(v33 + 4 * v32); /*0x74f267*/
                    if ( *(float *)(v34 + 4) <= (double)aP1a ) /*0x74f276*/
                      break; /*0x74f276*/
                    *(_DWORD *)(v33 + 4 * v31) = v34; /*0x74f278*/
                    v31 = v32; /*0x74f27b*/
                    v32 >>= 1; /*0x74f27d*/
                  }
                  while ( v31 > 1 ); /*0x74f282*/
                  v4 = (VeinholeMonsterClass *)this; /*0x74f284*/
                  v27 = v41; /*0x74f288*/
                }
                *(_DWORD *)(v29[2] + 4 * v31) = v30; /*0x74f28f*/
                unsigned int v35 = v29[3]; /*0x74f294*/
                ++*v29; /*0x74f29a*/
                if ( v30 > v35 ) /*0x74f29c*/
                  v29[3] = v30; /*0x74f29e*/
                if ( v30 < v29[4] ) /*0x74f2a4*/
                  v29[4] = v30; /*0x74f2a6*/
              }
              VeinholeMonsterClass_field_0x28 = v4[4].VeinholeMonsterClass_field_0x14; /*0x74f2a9*/
              *(_BYTE *)(VeinholeMonsterClass_field_0x28 + v27) = 1; /*0x74f2af*/
              *(_BYTE *)(*(_DWORD *)&stru_B1D188[360] + v27) = 1; /*0x74f2b9*/
            }
          }
        }
      }
    }
  }
  return VeinholeMonsterClass_field_0x28; /*0x74f19e*/
}
}
} // namespace gamemd

// 0x42F420
namespace gamemd {
void RandomMap::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->RandomMap_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->RandomMap_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x42F450
namespace gamemd {
unsigned int RandomMap::Write(int a2)
{
{
    if ( (unsigned char)this->RandomMap_field_0xC )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x42F470
namespace gamemd {
unsigned int * RandomMap::Seek(unsigned int * a2, int a3)
{
{
    *a2 = *(int *)(this->Items + 4 * a3);
    return a2;
}
}
} // namespace gamemd

// 0x42F620
namespace gamemd {
char RandomMap::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    short *v5;
    short *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (short *)this->Items;
    v6 = (short *)(v4 + 2);
    v7 = v4 - (int)v5;
    while ( *v5 == *(short *)((char *)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x42F930
namespace gamemd {
int RandomMap::Read(unsigned short * a2)
{
{
    int v2;
    int result;
    short *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (short *)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x42FBF0
namespace gamemd {
DynamicVector * RandomMap::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_Cell;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x58CF90
namespace gamemd {
int RandomMap::GenerateTerrainForAllCells()
{
{
    int result;
    int v2;
    int v3;
    int *v4;
    void *v5;
    v5 = this;
    result = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
  {
    v2 = g_MapCellWidth * g_MapCellWidth;
    result = (int)g_MapTileArray;
    v3 = 0;
    do
    {
    v5 = *(void **)(v3 + result);
    v4 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v5);
    result = (int)g_MapTileArray;
    if ( *(int *)((char *)(g_MapTileArray) + v3 + 56) == -1 && (*(short *)((char *)(g_MapTileArray) + v3) || *(short *)((char *)(g_MapTileArray) + v3 + 2)) )
      {
    if ( Cell::IsGroundTypeRange(v4) || Cell::IsShore(v4) )
    RandomMap::GenerateTerrain((int)v4);
    result = (int)g_MapTileArray;
      }
    v3 += 80;
    --v2;
    }
    while ( v2 );
  }
    return result;
}
}
} // namespace gamemd

// 0x5AC290
namespace gamemd {
unsigned int * RandomMap::Constructor_VectorClass_Cell_(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    int v4;
    void *v5;
    int *v7;
    v3 = (void (__thiscall ***)(int, int))*(void**)this;
    if ( v3 )
  {
    (**v3)(v3, 1);
    *(void**)this = 0;
  }
    v7 = this;
    v4 = (*(int (__thiscall **)(int *, int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v7);
    if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData )
  {
    do
    {
    ++v4;
    *((int *)(g_RandomMap_TerrainState) + v4 - 1) = *((int *)(g_RandomMap_TerrainState) + v4);
    }
    while ( v4 < g_RandomMap_TileData );
  }
    v5 = (void *)*(this + 11);
    *(this + 10) = &vt_VectorClass_Cell;
    if ( v5 && *((char *)(this) + 53) )
  {
    __3_YAXPAX_Z(v5);
    *(this + 11) = 0;
  }
    *((char *)(this) + 53) = 0;
    *(this + 12) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5AD820
namespace gamemd {
unsigned int * RandomMap::Constructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_CellClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x5ADA40
namespace gamemd {
unsigned int * RandomMap::Constructor_0(int a2, int a3)
{
{
    void *v5;
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TRect_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    v5 = __2_YAPAXI_Z(16 * a2);
    if ( v5 )
    {
    this->Items = v5;
    this->IsAllocated = 1;
    return this;
    }
    this->IsAllocated = 1;
    this->Items = 0;
  }
    return this;
}
}
} // namespace gamemd

// 0x5ADAB0
namespace gamemd {
unsigned int * RandomMap::Constructor_1(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_double;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(8 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace gamemd
