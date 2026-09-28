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

// 0x486790
namespace gamemd {
int RandomMap::Check()
{
  int v1; // eax

  v1 = this->RandomMap_field_0x38[0]; /*0x486790*/
  return v1 >= dword_AA0E24 && v1 < dword_AA0E24 + 16; /*0x4867a6*/
}
}
// 0x58BF70
namespace gamemd {
unsigned int * RandomMap::TerrainTileDataConstructor(int a2)
{
  Cell *v3; // eax
  char IsGroundTypeRange; // al
  void *v5; // ecx
  int v6; // eax

  *(_DWORD *)this->__pad_0 = 0; /*0x58bf7a*/
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x58bf7c*/
  this->RandomMap_field_0x8 = (void *)g_MissionQueueFrame.localVariables[164]; /*0x58bf8a*/
  this->RandomMap_field_0xC = 0; /*0x58bf8d*/
  this->RandomMap_field_0x10 = (void *)*((char *)CellCoord::To_CellObj( /*0x58bfa6*/
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283);
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x58bfa9*/
  IsGroundTypeRange = Cell::IsGroundTypeRange(v3); /*0x58bfb0*/
  v5 = (void *)a2; /*0x58bfb5*/
  IDA_LOBYTE(this->RandomMap_field_0x14) = IsGroundTypeRange; /*0x58bfb9*/
  *(void **)((char *)&this->RandomMap_field_0x14 + 2) = v5; /*0x58bfbe*/
  IDA_BYTE2(this->RandomMap_field_0x18) = 0; /*0x58bfc1*/
  IDA_HIBYTE(this->RandomMap_field_0x18) = 1; /*0x58bfc4*/
  this->RandomMap_field_0x1C = 0; /*0x58bfc7*/
  this->RandomMap_field_0x20 = 0; /*0x58bfca*/
  IDA_LOBYTE(this->RandomMap_field_0x24[0]) = 0; /*0x58bfcd*/
  this->RandomMap_field_0x2C[0] = 0; /*0x58bfd0*/
  this->RandomMap_field_0x30 = 0; /*0x58bfd3*/
  IDA_LOBYTE(this->RandomMap_field_0x34[0]) = 1; /*0x58bfd6*/
  IDA_BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x58bfd9*/
  this->RandomMap_field_0x28[0] = (int)&(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x58bfdc*/
  this->RandomMap_field_0x3C[0] = 10; /*0x58bfe3*/
  this->RandomMap_field_0x38[0] = 0; /*0x58bfea*/
  this->RandomMap_field_0x40[0] = 0; /*0x58bfed*/
  *(_DWORD *)this->__pad_44 = 0; /*0x58bff0*/
  this->RandomMap_field_0x48 = 0; /*0x58bff3*/
  *(_DWORD *)this->__pad_4C = 0; /*0x58bff6*/
  this->RandomMap_field_0x3C[0] = 100000; /*0x58bff9*/
  ++g_MissionQueueFrame.localVariables[164]; /*0x58c014*/
  if ( g_MissionQueueFrame.briefing[342] < g_MissionQueueFrame.briefing[340] /*0x58c041*/
    || (IDA_BYTE1(g_MissionQueueFrame.briefing[341]) || !g_MissionQueueFrame.briefing[340])
    && g_MissionQueueFrame.briefing[343] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.briefing[338] + 8))(
         &g_MissionQueueFrame.briefing[338],
         g_MissionQueueFrame.briefing[340] + g_MissionQueueFrame.briefing[343],
         0) )
  {
    v6 = g_MissionQueueFrame.briefing[342]++; /*0x58c04e*/
    *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v6) = this; /*0x58c05d*/
  }
  return this->__pad_0; /*0x58c062*/
}
}
// 0x58C800
namespace gamemd {
int RandomMap::GenerateTerrain()
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
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
  unsigned int * v17;
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
  char *v38; // ecx
  char v39; // cl
  unsigned int * v40;
  int v42; // edi
  int v43; // ebp
  int v44; // [esp+10h] [ebp-44h] BYREF
  unsigned int * v45;
  size_t v46; // [esp+18h] [ebp-3Ch] BYREF
  int v47; // [esp+1Ch] [ebp-38h]
  int v48; // [esp+20h] [ebp-34h] BYREF
  int v50; // [esp+28h] [ebp-2Ch] BYREF
  double v51; // [esp+2Ch] [ebp-28h]
  int64_t v52; // [esp+34h] [ebp-20h] BYREF
  void* v53;
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  char v56; // [esp+49h] [ebp-Bh]
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]

  v46 = g_MapTileArrayEnd; /*0x58c81a*/
  VectorClass::CellConstructor(&v53, 0, 0); /*0x58c81e*/
  v2 = this->u32_24; /*0x58c823*/
  v57 = 0; /*0x58c832*/
  v58 = 50000; /*0x58c838*/
  if ( v55 > 0 || (v56 || !v55) && (uint8_t)VectorClass::ResizeEx(v55 + 50000, 0) ) /*0x58c859*/
  {
    v3 = v57++; /*0x58c867*/
    *(unsigned int *)(v54 + 4 * v3) = v2; /*0x58c872*/
  }
  if ( Cell::IsGroundTypeRange((int *)this) || (IDA_LOBYTE(v47) = 0, Cell::IsShore((int *)this)) ) /*0x58c882*/
    IDA_LOBYTE(v47) = 1; /*0x58c890*/
  v50 = this->u32_11B; /*0x58c89c*/
  v4 = v57; /*0x58c8a0*/
  v48 = 0; /*0x58c8a6*/
  if ( v57 ) /*0x58c8aa*/
  {
    do /*0x58ca9c*/
    {
      v44 = *(unsigned int *)(v54 + 4 * v4 - 4); /*0x58c8b8*/
      if ( v4 - 1 < v4 ) /*0x58c8c1*/
        v57 = v4 - 1; /*0x58c8c7*/
      v46 = v46; /*0x58c8f4*/
      *((unsigned int *)g_MapTileArray + 20 * (int16_t)v44 + 20 * g_MapCellWidth * IDA_SHIWORD(v44) + 15) = v46; /*0x58c906*/
      if ( g_MapTileArray ) /*0x58c912*/
        *((unsigned int *)g_MapTileArray + 20 * (int16_t)v44 + 20 * g_MapCellWidth * IDA_SHIWORD(v44) + 14) = v46; /*0x58c92d*/
      for ( i = 0; i < 8; ++i ) /*0x58c931*/
      {
        IDA_LODWORD(v51) = *CellStruct::Add(&v44, &v52, (unsigned short *)(4 * (i & 7) + 9041544)); /*0x58c956*/
        v45 = IDA_LODWORD(v51); /*0x58c95a*/
        v7 = g_MapCellHeight_Value; /*0x58c968*/
        v8 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * g_MapCellWidth * IDA_SWORD1(v51); /*0x58c97d*/
        v9 = IDA_SWORD1(v51) + SLOWORD(v51); /*0x58c97f*/
        if ( v9 > g_MapCellHeight_Value /*0x58c9bf*/
          && SLOWORD(v51) - IDA_SWORD1(v51) < g_MapCellHeight_Value
          && IDA_SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v9 <= g_MapCellCount
          && *((unsigned int *)v8 + 14) == -1
          && *((unsigned int *)v8 + 15) != v46 )
        {
          *((unsigned int *)v8 + 15) = v46; /*0x58c9c5*/
          v10 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v45); /*0x58c9d2*/
          if ( v10[283] == v50 ) /*0x58c9e2*/
          {
            v11 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v45); /*0x58c9f2*/
            v13 = 1; /*0x58ca20*/
            if ( !Cell::IsGroundTypeRange(v11) ) /*0x58c9f9*/
            {
              v12 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v45); /*0x58ca0c*/
              if ( !Cell::IsShore(v12) ) /*0x58ca13*/
                v13 = 0; /*0x58c9f9*/
            }
            if ( v13 == (uint8_t)v47 /*0x58ca60*/
              && (v57 < v55
               || (v56 || !v55)
               && v58 > 0
               && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v53[2])(&v53, v58 + v55, 0)) )
            {
              v14 = (unsigned int)(v57++);
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
      v29 = this->u32_24; /*0x58cca4*/
      IDA_LODWORD(v51) = v29; /*0x58cca9*/
      IDA_HIWORD(v48) = IDA_HIWORD(v29); /*0x58ccb3*/
      IDA_LOWORD(v48) = v29 - 1; /*0x58ccb8*/
      v30 = v29 - 1; /*0x58ccbd*/
      v31 = (int16_t)(v29 - 1); /*0x58ccc1*/
      v32 = IDA_SHIWORD(v29) + v31; /*0x58cccb*/
      if ( v32 <= v7 || v31 - IDA_SWORD1(v51) >= v7 || IDA_SWORD1(v51) - v31 >= v7 || v32 > g_MapCellCount ) /*0x58cce6*/
      {
        IDA_LODWORD(v52) = v29; /*0x58cce8*/
        v48 = v29 - 0x10000; /*0x58ccf6*/
        v30 = v29; /*0x58ccfb*/
      }
      v33 = v30 + IDA_SHIWORD(v48); /*0x58cd0b*/
      if ( v33 > v7 && v30 - IDA_SHIWORD(v48) < v7 && IDA_SHIWORD(v48) - v30 < v7 && v33 <= g_MapCellCount ) /*0x58cd34*/
      {
        if ( g_MapTileArray ) /*0x58cd44*/
          v34 = *((unsigned int *)g_MapTileArray + 20 * v30 + 20 * g_MapCellWidth * IDA_SHIWORD(v48) + 14); /*0x58cd5a*/
        else
          v34 = -1; /*0x58cd46*/
        v35 = *((char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48) + 283); /*0x58cd6d*/
        LayerClass::CellIteratorReset(&MapClass_Instance); /*0x58cd79*/
        Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x58cd83*/
        if ( Bit ) /*0x58cd8a*/
        {
          v46 = v46; /*0x58cd90*/
          do /*0x58cdef*/
          {
            IDA_LODWORD(v51) = *(unsigned int *)(Bit + 36); /*0x58cd97*/
            v38 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * g_MapCellWidth * IDA_SWORD1(v51); /*0x58cdb8*/
            if ( *((unsigned int *)v38 + 14) == v46 ) /*0x58cdbd*/
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
            Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x58cde8*/
          }
          while ( Bit ); /*0x58cdef*/
        }
        goto LABEL_63; /*0x58cdef*/
      }
      goto LABEL_84; /*0x58cd34*/
    }
    v17 = (int)((unsigned int *)(RandomMap::CellListAlloc(0)));
    v45 = (unsigned int)(v17);
    v18 = v17->q010 - 1; /*0x58cae9*/
    v52 = v17->q010; /*0x58caed*/
    v51 = (double)v52; /*0x58caf5*/
    do /*0x58cb20*/
    {
      v52 = (unsigned int)Random::State(&g_Randomizer); /*0x58cb03*/
      v19 = Math::RoundToInt((double)v52 * v51 * 2.328306437080797e-10); /*0x58cb19*/
    }
    while ( v19 > v18 ); /*0x58cb20*/
    v20 = 0; /*0x58cb25*/
    v46 = *(unsigned int *)(v17->Items + 4 * v19); /*0x58cb2a*/
    while ( 1 ) /*0x58cb51*/
    {
      IDA_LODWORD(v51) = *CellStruct::Add(&v46, &v52, (unsigned short *)(4 * (v20 & 7) + 9041544)); /*0x58cb51*/
      v48 = IDA_LODWORD(v51); /*0x58cb55*/
      v21 = IDA_SWORD1(v51) + SLOWORD(v51); /*0x58cb61*/
      if ( v21 > g_MapCellHeight_Value ) /*0x58cb66*/
      {
        if ( SLOWORD(v51) - IDA_SWORD1(v51) < g_MapCellHeight_Value /*0x58cb7c*/
          && IDA_SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v21 <= g_MapCellCount )
        {
          v22 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x58cb91*/
          if ( v22[283] != *((unsigned char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v46) + 283) ) /*0x58cbac*/
          {
            v23 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x58cbb8*/
            if ( !Cell::IsGroundTypeRange(v23) ) /*0x58cbc6*/
            {
              v24 = *((char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48) + 283); /*0x58cbea*/
              LayerClass::CellIteratorReset(&MapClass_Instance); /*0x58cbf6*/
              for ( j = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x58cc09*/
                    j;
                    j = LayerClass::CellIteratorNext(&MapClass_Instance) )
              {
                IDA_LODWORD(v51) = *(unsigned int *)(j + 36); /*0x58cc17*/
                v26 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * g_MapCellWidth * IDA_SWORD1(v51); /*0x58cc32*/
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
              v17 = (int)((unsigned int *)((int)(v45)));
              v16 = 1; /*0x58cc6e*/
  LABEL_60:
              if ( v17 ) /*0x58cc72*/
                (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x58cc7b*/
              if ( v16 ) /*0x58cc7f*/
              {
  LABEL_63:
                Buffer::Cleanup((int)&v53); /*0x58cc91*/
                return 0; /*0x58cc9f*/
              }
              break; /*0x58cc7f*/
            }
          }
        }
        v17 = (unsigned int *)((int)(v45));
      }
      if ( ++v20 >= 8 ) /*0x58cbd0*/
        goto LABEL_60; /*0x58cbd0*/
    }
  }
  LABEL_84:
  if ( operator new(0x50u) ) /*0x58cdf8*/
    v40 = RandomMap::TerrainTileDataConstructor(this->u32_24); /*0x58ce13*/
  else
    v40 = 0; /*0x58ce17*/
  v47 = v47; /*0x58ce1d*/
  *(unsigned int *)(v40 + 16) = v50; /*0x58ce21*/
  *(unsigned char *)(v40 + 20) = v47; /*0x58ce24*/
  *(unsigned int *)(v40 + 12) = 0; /*0x58ce27*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ce38*/
  {
    v42 = 0; /*0x58ce3c*/
    v43 = g_MapCellWidth * g_MapCellWidth; /*0x58ce3e*/
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
  VectorClass *v10; // eax
  VectorClass *v12; // ebx
  int v13; // edi
  int v14; // edx
  char v15; // al
  __int16 v16; // cx
  int v18; // ecx
  int v19; // esi
  int Capacity; // ecx
  int v21; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  int v24; // ecx
  int v25; // [esp+Ch] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-18h]
  int v28; // [esp+18h] [ebp-10h]
  int j; // [esp+1Ch] [ebp-Ch]

  result = (int)RandomMap::TerrainAlloc(this); /*0x58d1c9*/
  v4 = a2; /*0x58d1ce*/
  v5 = result; /*0x58d1d2*/
  v25 = result; /*0x58d1d7*/
  if ( a2 > 1 ) /*0x58d1db*/
  {
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x58d1e3*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d1e8*/
    {
      result = 0; /*0x58d1ea*/
      do /*0x58d1fe*/
      {
        result += 80; /*0x58d1f2*/
        --v6; /*0x58d1f5*/
        *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d1f6*/
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
      for ( i = v5->uniqueId - 1; i >= 0; --i ) /*0x58d214*/
      {
        result = v5->vtable2; /*0x58d216*/
        v9 = *(_DWORD *)(result + 4 * i); /*0x58d221*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d228*/
        {
          result = 80 * ((__int16)v9 + g_MapCellWidth * IDA_SHIWORD(v9)); /*0x58d242*/
          *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] + 56) = a3; /*0x58d245*/
        }
      }
      if ( v7 < v4 - 1 ) /*0x58d251*/
      {
        v10 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58d259*/
        v10 = v10; /*0x58d25e*/
        v12 = 0; /*0x58d260*/
        if ( v10 ) /*0x58d267*/
        {
          VectorClass::CellConstructor(v10, 0, 0); /*0x58d26d*/
          v10[1].vtable0 = 0; /*0x58d272*/
          v10->vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x58d275*/
          v10[1].Items = (void *)10; /*0x58d27b*/
          v12 = v10; /*0x58d282*/
        }
        v12[1].Items = v5->uniqueId; /*0x58d287*/
        result = v5->uniqueId - 1; /*0x58d28d*/
        result = result; /*0x58d28e*/
        if ( result >= 0 ) /*0x58d292*/
        {
          v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d298*/
          do /*0x58d39d*/
          {
            v14 = *(_DWORD *)(v5->vtable2 + 4 * result); /*0x58d2a1*/
            v15 = 0; /*0x58d2a4*/
            v14 = v14; /*0x58d2a6*/
            for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
            {
              v16 = IDA_HIWORD(v14) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]); /*0x58d2c4*/
              IDA_LOWORD(v28) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]) + v14; /*0x58d2c9*/
              v16 = v16; /*0x58d2d1*/
              IDA_HIWORD(v28) = v16; /*0x58d2d4*/
              v18 = v16 + (__int16)v28; /*0x58d2d9*/
              if ( v18 > v13 /*0x58d302*/
                && (__int16)v28 - v16 < v13
                && v16 - (__int16)v28 < v13
                && v18 <= g_MissionQueueFrame.localVariables[161] )
              {
                v19 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v28 + g_MapCellWidth * v16); /*0x58d31f*/
                if ( *(void **)(v19 + 56) == this->RandomMap_field_0x8 ) /*0x58d326*/
                {
                  if ( *(_DWORD *)(v19 + 60) != v26 + 1 ) /*0x58d334*/
                  {
                    Capacity = v12->Capacity; /*0x58d336*/
                    if ( (int)v12[1].vtable0 < Capacity /*0x58d35b*/
                      || (v12->IsAllocated || !Capacity)
                      && (v21 = (int)v12[1].Items, v21 > 0)
                      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v12->vtable0 + 2))(
                           v12,
                           Capacity + v21,
                           0) )
                    {
                      vtable0 = v12[1].vtable0; /*0x58d362*/
                      Items = v12->Items; /*0x58d365*/
                      v12[1].vtable0 = (char *)vtable0 + 1; /*0x58d36b*/
                      Items[(_DWORD)vtable0] = v28; /*0x58d372*/
                    }
                    *(_DWORD *)(v19 + 60) = v26 + 1; /*0x58d375*/
                    v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d378*/
                  }
                  v5 = v25; /*0x58d37e*/
                }
              }
              v15 = j + 1; /*0x58d386*/
            }
            result = --result; /*0x58d398*/
          }
          while ( result >= 0 ); /*0x58d39d*/
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
    v24 = g_MapCellWidth * g_MapCellWidth; /*0x58d3e7*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d3ec*/
    {
      result = 0; /*0x58d3ee*/
      do /*0x58d402*/
      {
        result += 80; /*0x58d3f6*/
        --v24; /*0x58d3f9*/
        *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d3fa*/
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
  VectorClass *v1; // eax
  VectorClass *v2; // esi
  VectorClass *v3; // ebx
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  signed int i; // edi
  int v8; // edx
  void *v9; // eax
  int Capacity; // eax
  int v11; // ebp
  int v12; // ecx
  void *vtable0; // eax
  _DWORD *Items; // edx
  char v16; // [esp+Fh] [ebp-Dh]
  VectorClass *v17; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  v1 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58d41c*/
  v2 = v1; /*0x58d421*/
  if ( v1 ) /*0x58d428*/
  {
    VectorClass::CellConstructor(v1, 0, 0); /*0x58d430*/
    v2->vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x58d435*/
    v2[1].Items = (void *)10; /*0x58d43b*/
    v2[1].vtable0 = 0; /*0x58d442*/
    v3 = v2; /*0x58d449*/
  }
  else
  {
    v3 = 0; /*0x58d44d*/
  }
  v17 = v3; /*0x58d454*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d458*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d467*/
  if ( !v4 ) /*0x58d46b*/
    return &v3->vtable0; /*0x58d592*/
  do
  {
    v5 = *(_DWORD *)(v4 + 36); /*0x58d478*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d481*/
      v6 = *(_DWORD *)(80 * ((__int16)v5 + g_MapCellWidth * IDA_SHIWORD(v5)) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58d49f*/
    else
      v6 = -1; /*0x58d483*/
    if ( (void *)v6 == this->RandomMap_field_0x8 )
    {
      v16 = 0; /*0x58d4b0*/
      for ( i = 0; i < 8; ++i )
      {
        v19 = *((_DWORD *)Cell::GetNeighbourContent((Cell *)v4, i) + 9); /*0x58d4c8*/
        v8 = IDA_SHIWORD(v19) + (__int16)v19; /*0x58d4d4*/
        if ( v8 > g_MissionQueueFrame.localVariables[160] )
        {
          if ( (__int16)v19 - IDA_SHIWORD(v19) < g_MissionQueueFrame.localVariables[160]
            && IDA_SHIWORD(v19) - (__int16)v19 < g_MissionQueueFrame.localVariables[160]
            && v8 <= g_MissionQueueFrame.localVariables[161] )
          {
            v9 = g_MissionQueueFrame.localVariables[163]
               ? *(void **)(80 * ((__int16)v19 + g_MapCellWidth * IDA_SHIWORD(v19))
                          + g_MissionQueueFrame.localVariables[163]
                          + 56)
               : (void *)-1;
            if ( v9 != this->RandomMap_field_0x8 ) /*0x58d51c*/
              v16 = 1; /*0x58d51e*/
          }
          v3 = v17; /*0x58d523*/
        }
      }
      if ( v16 ) /*0x58d533*/
      {
        Capacity = v3->Capacity; /*0x58d535*/
        v11 = *(_DWORD *)(v4 + 36); /*0x58d53b*/
        if ( (int)v3[1].vtable0 < Capacity /*0x58d55d*/
          || (v3->IsAllocated || !Capacity)
          && (v12 = (int)v3[1].Items, v12 > 0)
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v3->vtable0 + 2))(v3, Capacity + v12, 0) )
        {
          vtable0 = v3[1].vtable0; /*0x58d564*/
          Items = v3->Items; /*0x58d567*/
          v3[1].vtable0 = (char *)vtable0 + 1; /*0x58d56d*/
          Items[(_DWORD)vtable0] = v11; /*0x58d570*/
        }
      }
    }
    v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d57d*/
  }
  while ( v4 );
  return &v3->vtable0; /*0x58d588*/
}
}
// 0x58E740
namespace gamemd {
RandomMap * * RandomMap::CollectTerrainCells(int a2)
{
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  VectorClass *v4; // ebp
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // ebx
  _WORD *v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  int v13; // esi
  void *v14; // edi
  Cell *v15; // eax
  Cell *v16; // eax
  int Capacity; // ecx
  int v18; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  RandomMap *v21; // edi
  int v22; // edx
  __int16 v24[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD *p_vtable0; // [esp+14h] [ebp-14h]
  RandomMap *v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v26 = this; /*0x58e747*/
  p_vtable0 = RandomMap::TerrainAlloc(this); /*0x58e750*/
  for ( i = 0; i < a2; ++i ) /*0x58e760*/
  {
    v2 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58e768*/
    v3 = v2; /*0x58e76d*/
    if ( v2 ) /*0x58e774*/
    {
      VectorClass::CellConstructor(v2, 0, 0); /*0x58e77a*/
      v3->vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x58e77f*/
      v3[1].Items = (void *)10; /*0x58e785*/
      v3[1].vtable0 = 0; /*0x58e78c*/
      v4 = v3; /*0x58e78f*/
    }
    else
    {
      v4 = 0; /*0x58e793*/
    }
    v5 = p_vtable0; /*0x58e795*/
    v27 = 0; /*0x58e799*/
    v4[1].Items = (void *)(3 * p_vtable0[4]); /*0x58e7a3*/
    if ( (int)v5[4] > 0 ) /*0x58e7ab*/
    {
      v6 = g_MissionQueueFrame.localVariables[160]; /*0x58e7b1*/
      while ( 2 ) /*0x58e7b7*/
      {
        v7 = 0; /*0x58e7b7*/
        while ( 1 ) /*0x58e7d2*/
        {
          v8 = (_WORD *)(v5[1] + 4 * v27); /*0x58e7d2*/
          v9 = v8[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]); /*0x58e7e5*/
          IDA_LOWORD(v28) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]) + *v8; /*0x58e7e9*/
          IDA_HIWORD(v28) = v9; /*0x58e7ee*/
          *(_DWORD *)v24 = v28; /*0x58e7f7*/
          v10 = v9; /*0x58e7fe*/
          v11 = v9 + (__int16)v28; /*0x58e801*/
          if ( v11 > v6 /*0x58e828*/
            && (__int16)v28 - v10 < v6
            && v10 - (__int16)v28 < v6
            && v11 <= g_MissionQueueFrame.localVariables[161] )
          {
            v12 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x58e838*/
            if ( (void *)v12[283] == v26->RandomMap_field_0x10 ) /*0x58e84b*/
            {
              v13 = g_MissionQueueFrame.localVariables[163] + 80 * (v24[0] + g_MapCellWidth * v24[1]); /*0x58e870*/
              v14 = *(void **)(v13 + 56); /*0x58e872*/
              if ( v14 == (void *)-1 /*0x58e8a9*/
                && ((v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24),
                     (unsigned __int8)Cell::IsEmpty(v15))
                 || (v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24),
                     (unsigned __int8)Cell::IsShore(v16))) )
              {
                Capacity = v4->Capacity; /*0x58e8b2*/
                if ( (int)v4[1].vtable0 < Capacity /*0x58e8d8*/
                  || (v4->IsAllocated || !Capacity)
                  && (v18 = (int)v4[1].Items, v18 > 0)
                  && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v4->vtable0 + 2))(
                       v4,
                       Capacity + v18,
                       0) )
                {
                  vtable0 = v4[1].vtable0; /*0x58e8df*/
                  Items = v4->Items; /*0x58e8e2*/
                  v4[1].vtable0 = (char *)vtable0 + 1; /*0x58e8e8*/
                  Items[(_DWORD)vtable0] = *(_DWORD *)v24; /*0x58e8ef*/
                }
                v21 = v26; /*0x58e8f2*/
                *(_DWORD *)(v13 + 56) = v26->RandomMap_field_0x8; /*0x58e903*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24) + 283) = v21->RandomMap_field_0x10; /*0x58e90e*/
              }
              else if ( v14 != v26->RandomMap_field_0x8 ) /*0x58e91d*/
              {
                if ( p_vtable0 ) /*0x58e98c*/
                  (*(void (__thiscall **)(_DWORD *, int))*p_vtable0)(p_vtable0, 1); /*0x58e992*/
                if ( v4 ) /*0x58e996*/
                  (*(void (__thiscall **)(VectorClass *, int))v4->vtable0)(v4, 1); /*0x58e99f*/
                return 0; /*0x58e9a4*/
              }
            }
            v6 = g_MissionQueueFrame.localVariables[160]; /*0x58e91f*/
          }
          if ( ++v7 >= 8 ) /*0x58e929*/
            break; /*0x58e929*/
          v5 = p_vtable0; /*0x58e7bb*/
        }
        v5 = p_vtable0; /*0x58e92f*/
        v22 = p_vtable0[4]; /*0x58e938*/
        if ( ++v27 < v22 ) /*0x58e941*/
          continue; /*0x58e941*/
        break;
      }
    }
    if ( v5 ) /*0x58e94b*/
      (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x58e951*/
    p_vtable0 = &v4->vtable0; /*0x58e95c*/
  }
  if ( p_vtable0 ) /*0x58e972*/
    (*(void (__thiscall **)(_DWORD *, int))*p_vtable0)(p_vtable0, 1); /*0x58e978*/
  return 1; /*0x58e97a*/
}
}
// 0x58E9B0
namespace gamemd {
AbstractClass * * RandomMap::PlaceRandomMapTerrain()
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // ebx
  int Capacity; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // ecx
  int i; // eax
  int v9; // eax
  int v10; // ebx
  int k; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v17; // [esp+14h] [ebp-24h]
  VectorClass v19; // [esp+20h] [ebp-18h] BYREF
  int j; // [esp+30h] [ebp-8h]
  int v21; // [esp+34h] [ebp-4h]

  v1 = RandomMap::TerrainAlloc(this); /*0x58e9c7*/
  VectorClass::CellConstructor(&v19, 0, 0); /*0x58e9c9*/
  v2 = 50000; /*0x58e9ce*/
  v19.vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x58e9d3*/
  j = 0; /*0x58e9db*/
  v21 = 50000; /*0x58e9e3*/
  v3 = 0; /*0x58e9ea*/
  if ( (int)v1[4] > 0 ) /*0x58e9ee*/
  {
    Capacity = v19.Capacity; /*0x58e9f0*/
    while ( 1 ) /*0x58e9fd*/
    {
      v5 = (_DWORD *)(v1[1] + 4 * v3); /*0x58e9fd*/
      if ( j < Capacity ) /*0x58ea06*/
        goto LABEL_9; /*0x58ea06*/
      if ( (v19.IsAllocated || !Capacity) && v2 > 0 ) /*0x58ea16*/
        break; /*0x58ea16*/
  LABEL_11:
      if ( ++v3 >= v1[4] ) /*0x58ea4a*/
        goto LABEL_12; /*0x58ea4a*/
      v2 = v21; /*0x58e9f6*/
    }
    if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v19.vtable0 + 2))(&v19, v2 + Capacity, 0) ) /*0x58ea25*/
    {
  LABEL_9:
      v6 = j++; /*0x58ea2c*/
      *((_DWORD *)v19.Items + v6) = *v5; /*0x58ea3d*/
    }
    Capacity = v19.Capacity; /*0x58ea40*/
    goto LABEL_11; /*0x58ea40*/
  }
  LABEL_12:
  if ( v1 ) /*0x58ea4e*/
    (*(void (__thiscall **)(_DWORD *, int))*v1)(v1, 1); /*0x58ea56*/
  v7 = j; /*0x58ea58*/
  for ( i = j; j > 0; i = j ) /*0x58ea60*/
  {
    v9 = i - 1; /*0x58ea6b*/
    v10 = *((_DWORD *)v19.Items + v9); /*0x58ea6e*/
    if ( v9 < v7 ) /*0x58ea75*/
    {
      for ( j = v7 - 1; v9 < j; *((_DWORD *)v19.Items + v9 - 1) = *((_DWORD *)v19.Items + v9) ) /*0x58ea7e*/
        ++v9; /*0x58ea84*/
    }
    for ( k = 0; k < 8; ++k ) /*0x58ea99*/
    {
      v12 = k & 7; /*0x58eaa3*/
      IDA_LOWORD(v17) = v10 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x58eabf*/
      IDA_HIWORD(v17) = IDA_HIWORD(v10) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x58eac4*/
      v13 = IDA_SHIWORD(v17) + (__int16)v17; /*0x58eacf*/
      if ( v13 > g_MissionQueueFrame.localVariables[160] /*0x58eafc*/
        && (__int16)v17 - IDA_SHIWORD(v17) < g_MissionQueueFrame.localVariables[160]
        && IDA_SHIWORD(v17) - (__int16)v17 < g_MissionQueueFrame.localVariables[160]
        && v13 <= g_MissionQueueFrame.localVariables[161] )
      {
        v14 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v17 + g_MapCellWidth * IDA_SHIWORD(v17)); /*0x58eb13*/
        if ( *(_DWORD *)(v14 + 56) == -1 ) /*0x58eb19*/
        {
          if ( *(_BYTE *)(v14 + 75) ) /*0x58eb1b*/
          {
            *(_DWORD *)(v14 + 56) = this->RandomMap_field_0x8; /*0x58eb29*/
            if ( j < v19.Capacity /*0x58eb57*/
              || (v19.IsAllocated || !v19.Capacity)
              && v21 > 0
              && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v19.vtable0 + 2))(
                   &v19,
                   v21 + v19.Capacity,
                   0) )
            {
              v15 = j++; /*0x58eb66*/
              *((_DWORD *)v19.Items + v15) = v17; /*0x58eb71*/
            }
          }
        }
      }
    }
    v7 = j; /*0x58eb7e*/
  }
  v19.vtable0 = &(void*)(void*)&VectorClass_Cell_vftable; /*0x58eb93*/
  if ( v19.Items && v19.IsAllocated ) /*0x58eba6*/
    RA2_OPDEL(v19.Items); /*0x58eba9*/
  return 1; /*0x58eb91*/
}
}
// 0x58F0C0
namespace gamemd {
void* RandomMap::CollectBorderCells()
{
  RandomMap *v1; // ebx
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // ebp
  int v11; // edx
  __int16 v12; // cx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int i; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  void *RandomMap_field_0x8; // esi
  int v26; // edx
  _BYTE *Block; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  _DWORD *v29; // [esp+1Ch] [ebp-8h]

  v1 = this; /*0x58f0c7*/
  v2 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58f0cf*/
  v3 = v2; /*0x58f0d4*/
  if ( v2 ) /*0x58f0db*/
  {
    VectorClass::Construct(v2, 0, 0); /*0x58f0e3*/
    v3->vtable0 = &(void*)(void*)&DynamicVectorClass_int_vftable; /*0x58f0e8*/
    v3[1].Items = (void *)10; /*0x58f0ee*/
    v3[1].vtable0 = 0; /*0x58f0f5*/
  }
  else
  {
    v3 = 0; /*0x58f0fe*/
  }
  *(_DWORD *)&v1->RandomMap_field_0x2[2] = v3; /*0x58f100*/
  v4 = RA2_OPNEW(g_MissionQueueFrame.localVariables[164]); /*0x58f114*/
  v5 = 0; /*0x58f119*/
  for ( Block = (_BYTE *)v4; v5 < g_MissionQueueFrame.localVariables[164]; ++v5 ) /*0x58f121*/
    *(_BYTE *)(v5 + v4) = 0; /*0x58f123*/
  v6 = RandomMap::TerrainAlloc(v1); /*0x58f139*/
  v7 = 0; /*0x58f13b*/
  v29 = v6; /*0x58f13d*/
  v28 = 0; /*0x58f141*/
  if ( (int)v6[4] > 0 ) /*0x58f14a*/
  {
    v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f150*/
    do /*0x58f1ee*/
    {
      v9 = 0; /*0x58f159*/
      v10 = *(_DWORD *)(v6[1] + 4 * v7); /*0x58f15b*/
      do /*0x58f1da*/
      {
        v11 = v9 & 7; /*0x58f164*/
        v12 = IDA_HIWORD(v10) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x58f17d*/
        v13 = (__int16)(v10 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82])); /*0x58f182*/
        v14 = v12; /*0x58f185*/
        v15 = v12 + v13; /*0x58f188*/
        if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MissionQueueFrame.localVariables[161] ) /*0x58f1a5*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58f1af*/
          {
            v16 = *(_DWORD *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58f1c0*/
            if ( v16 >= 0 ) /*0x58f1c6*/
            {
              Block[v16] = 1; /*0x58f1cc*/
              v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f1d0*/
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
  for ( i = 0; i < g_MissionQueueFrame.localVariables[164]; ++i ) /*0x58f201*/
  {
    if ( Block[i] && (void *)i != v1->RandomMap_field_0x8 ) /*0x58f210*/
    {
      v18 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x58f212*/
      v19 = *(_DWORD *)(v18 + 8); /*0x58f215*/
      if ( *(_DWORD *)(v18 + 16) < v19 /*0x58f23a*/
        || (*(_BYTE *)(v18 + 13) || !v19)
        && (v20 = *(_DWORD *)(v18 + 20), v20 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v19 + v20, 0) )
      {
        v21 = *(_DWORD *)(v18 + 16); /*0x58f241*/
        v22 = *(_DWORD *)(v18 + 4); /*0x58f244*/
        *(_DWORD *)(v18 + 16) = v21 + 1; /*0x58f24a*/
        *(_DWORD *)(v22 + 4 * v21) = i; /*0x58f24d*/
      }
    }
  }
  v23 = 0; /*0x58f25a*/
  v1->RandomMap_field_0xC = 0; /*0x58f25c*/
  v24 = g_MapCellWidth * g_MapCellWidth; /*0x58f265*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58f26a*/
  {
    RandomMap_field_0x8 = v1->RandomMap_field_0x8; /*0x58f26c*/
    v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f26f*/
    do /*0x58f29b*/
    {
      if ( *(void **)(v23 + v26 + 56) == RandomMap_field_0x8 && (*(_WORD *)(v23 + v26) || *(_WORD *)(v23 + v26 + 2)) ) /*0x58f282*/
      {
        ++v1->RandomMap_field_0xC; /*0x58f28e*/
        v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f291*/
      }
      v23 += 80; /*0x58f297*/
      --v24; /*0x58f29a*/
    }
    while ( v24 ); /*0x58f29b*/
  }
  if ( v6 ) /*0x58f29f*/
    (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x58f2a8*/
  RA2_OPDEL(Block); /*0x58f2af*/
}
}
// 0x58F2C0
namespace gamemd {
void* RandomMap::PlaceBuildings(int a2, int a3)
{
  char result; // al
  int16_t v36; // di
  int16_t v45; // si
  int16_t v46; // di
  int16_t v59[2]; // [esp+30h] [ebp-1E8h] BYREF
  int16_t v61[2]; // [esp+38h] [ebp-1E0h] BYREF
  int16_t v62[2]; // [esp+3Ch] [ebp-1DCh] BYREF
  int16_t v63[2]; // [esp+40h] [ebp-1D8h] BYREF
  int16_t v65[2]; // [esp+48h] [ebp-1D0h] BYREF
  int16_t v66[2]; // [esp+4Ch] [ebp-1CCh] BYREF
  int16_t v68[2]; // [esp+54h] [ebp-1C4h] BYREF
  int16_t v70[2]; // [esp+5Ch] [ebp-1BCh] BYREF
  int16_t v88[2]; // [esp+A4h] [ebp-174h] BYREF
  int16_t v90[2]; // [esp+ACh] [ebp-16Ch] BYREF
  int16_t v92[2]; // [esp+B4h] [ebp-164h] BYREF
  int16_t v93[2]; // [esp+B8h] [ebp-160h] BYREF
  int16_t v95[2]; // [esp+C0h] [ebp-158h] BYREF
  int16_t v97[2]; // [esp+C8h] [ebp-150h] BYREF
  int16_t v101[2]; // [esp+D8h] [ebp-140h] BYREF
  int16_t v103[2]; // [esp+E0h] [ebp-138h] BYREF
  int16_t v126; // [esp+214h] [ebp-4h] BYREF
  int v4 = *(unsigned int *)(a3 + 8);
  int v100 = *(unsigned int *)(a2 + 8);
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
      int64_t v105 = (unsigned int)v7;
      v58 = (double)(unsigned int)v7;
      do
      {
        int64_t v106 = (unsigned int)Random::State(&g_Randomizer);
        v8 = Math::RoundToInt((double)v106 * v58 * 2.328306437080797e-10);
        v9 = v8;
      }
      while ( v8 > v7 - 1 );
      int v10 = 80 * v8;
      if ( *((unsigned int *)g_MapTileArray + 20 * v8 + 14) == this->q008 )
      {
        unsigned short * v11 = CellStruct::Set(&v126, 0, 0);
        if ( !CellStruct::Equals((char *)g_MapTileArray + v10, v11) )
          break;
      }
    }
    IDA_LODWORD(v58) = *((unsigned int *)g_MapTileArray + 20 * v9);
    int v76 = IDA_SWORD1(v58);
    int v80 = IDA_SWORD1(v58);
    int v75 = SLOWORD(v58) - 1;
    int v79 = v75;
    int v84 = IDA_SWORD1(v58) - 1;
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
    IDA_LODWORD(v58) = 999;
    int v60 = 999;
    int v21 = -1;
    int v67 = -1;
    int v22 = -1;
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
    char v25 = v50;
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
  unsigned int v39; // eax
  unsigned int v38; // eax
        if ( !(uint8_t)Object_Helper(&v53) )
          goto LABEL_129;
        int v30 = v54;
        int v31 = v55;
        int v32 = v54;
        int v33 = v53;
        for ( IDA_LODWORD(v58) = v54; v32 < v30 + v56; IDA_LODWORD(v58) = v32 )
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
                *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v97) + 17) = 94;
              }
              else
              {
                v36 = v32;
                if ( v35 == v34 - 1 )
                {
                  v88[0] = v35;
                  v88[1] = v32;
                  *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v88) + 17) = 92;
                }
                else
                {
                  v90[0] = v35;
                  v90[1] = v32;
                  *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v90) + 17) = v35 % 4 + 74;
                }
              }
              v92[0] = v35;
              v92[1] = v36;
              char v37 = v32 - v54;
              *((unsigned char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v92) + 286) = v37;
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
  int v124[4]; // [esp+1F4h] [ebp-24h] BYREF
        v124[0] = v33 + v31;
        v124[1] = v30 - 2;
        v124[2] = 6;
        v124[3] = 6;
        if ( !IsMapClassAreaUniform(v124, 0) )
          goto LABEL_91;
        do
        {
          int64_t v108 = (unsigned int)Random::State(&g_Randomizer);
          v38 = Math::RoundToInt((double)v108 * 4.656612874161595e-10);
        }
        while ( v38 > 1 );
        if ( v38 )
        {
  unsigned short v94[2]; // [esp+BCh] [ebp-15Ch] BYREF
          v94[0] = v53 + v55;
          v94[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, v94, -1, -1);
        }
        else
        {
LABEL_91:
  unsigned short v89[2]; // [esp+A8h] [ebp-170h] BYREF
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
          int64_t v104 = (unsigned int)Random::State(&g_Randomizer);
          v39 = Math::RoundToInt((double)v104 * 4.656612874161595e-10);
        }
        while ( v39 > 1 );
        if ( v39 )
        {
  unsigned short v99[2]; // [esp+D0h] [ebp-148h] BYREF
          v99[0] = v53 - 4;
          v99[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, v99, -1, -1);
        }
        else
        {
LABEL_96:
  unsigned short v91[2]; // [esp+B0h] [ebp-168h] BYREF
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
      if ( v49 && (uint8_t)Object_Helper(&v53) )
      {
  unsigned int v48; // eax
  unsigned int v47; // eax
  int v43; // eax
        int v40 = v54;
        int v41 = v54;
        IDA_LODWORD(v58) = v54;
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
                  *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v101) + 17) = 96;
                }
                else
                {
                  v45 = v44;
                  v46 = v41;
                  if ( v41 == v56 + v40 - 1 )
                  {
                    v93[0] = v44;
                    v93[1] = v41;
                    *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v93) + 17) = 98;
                  }
                  else
                  {
                    v103[0] = v44;
                    v103[1] = v41;
                    *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v103) + 17) = v41 % 4 + 83;
                    v41 = IDA_LODWORD(v58);
                  }
                }
                v95[0] = v45;
                v95[1] = v46;
                char v52 = v44++ - v53;
                *((unsigned char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v95) + 286) = v52;
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
  int v116[4]; // [esp+174h] [ebp-A4h] BYREF
        v116[1] = v40 - 6;
        v116[0] = v43 - 2;
        v116[2] = 7;
        v116[3] = 6;
        if ( !IsMapClassAreaUniform(v116, 0) )
          goto LABEL_118;
        do
        {
          int64_t v107 = (unsigned int)Random::State(&g_Randomizer);
          v47 = Math::RoundToInt((double)v107 * 4.656612874161595e-10);
        }
        while ( v47 > 1 );
        if ( v47 )
        {
  unsigned short v87[2]; // [esp+A0h] [ebp-178h] BYREF
          v87[0] = v53;
          v87[1] = v54 - 4;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, v87, -1, -1);
        }
        else
        {
LABEL_118:
  unsigned short v96[2]; // [esp+C4h] [ebp-154h] BYREF
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
          int64_t v109 = (unsigned int)Random::State(&g_Randomizer);
          v48 = Math::RoundToInt((double)v109 * 4.656612874161595e-10);
        }
        while ( v48 > 1 );
        if ( v48 )
        {
  unsigned short v98[2]; // [esp+CCh] [ebp-14Ch] BYREF
          v98[1] = v56 + v54;
          v98[0] = v53;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, v98, -1, -1);
        }
        else
        {
LABEL_123:
  unsigned short v102[2]; // [esp+DCh] [ebp-13Ch] BYREF
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
} // namespace gamemd

// 0x5905D0
namespace gamemd {
int RandomMap::AllocateArea()
{
  RandomMap *v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v13; // eax
  void *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  int v24; // eax
  unsigned int v25; // eax
  void *RandomMap_field_0x10; // ecx
  int v27; // eax
  void *RandomMap_field_0x8; // edi
  int v29; // eax
  int v30; // ecx
  RandomMap *v31; // ebp
  _DWORD *v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // eax
  int v35; // edx
  float v37; // [esp+0h] [ebp-58h]
  _DWORD *v39; // [esp+18h] [ebp-40h]
  int v40; // [esp+18h] [ebp-40h]
  __int16 v41[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v42; // [esp+20h] [ebp-38h]
  void *v43; // [esp+24h] [ebp-34h]
  int v44; // [esp+28h] [ebp-30h]
  int v45; // [esp+2Ch] [ebp-2Ch]
  __int64 v46; // [esp+30h] [ebp-28h]
  __int64 v47; // [esp+38h] [ebp-20h]
  __int64 v48; // [esp+40h] [ebp-18h]
  __int64 v49; // [esp+48h] [ebp-10h]
  double v50; // [esp+50h] [ebp-8h]

  IDA_LOBYTE(v2) = this->RandomMap_field_0x14; /*0x5905dd*/
  if ( (_BYTE)v2 ) /*0x5905e2*/
  {
    v3 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x5905e8*/
    v4 = *(_DWORD *)(v3 + 16); /*0x5905eb*/
    IDA_LOBYTE(v2) = v4 - 1; /*0x5905ee*/
    if ( v4 - 1 > 0 ) /*0x5905f3*/
    {
      v5 = g_MissionQueueFrame.briefing[339]; /*0x5905f9*/
      v6 = g_MissionQueueFrame.briefing[342]; /*0x5905ff*/
      v42 = 1; /*0x590605*/
      *(_DWORD *)v41 = 0; /*0x59060d*/
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
          v5 = v5; /*0x590625*/
          while ( *(_DWORD *)(v5->vtable3 != *(_DWORD *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v41) ) /*0x59062c*/
          {
            ++v7; /*0x59062e*/
            v5 += 4; /*0x59062f*/
            if ( v7 >= v6 ) /*0x590634*/
            {
              v5 = g_MissionQueueFrame.briefing[339]; /*0x590636*/
              goto LABEL_9; /*0x59063c*/
            }
          }
          v5 = g_MissionQueueFrame.briefing[339]; /*0x59068e*/
          v39 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * v7); /*0x59069b*/
        }
        if ( *(int *)(v39[1] + 16) <= 1 && (int)v39[3] <= 50 ) /*0x590659*/
          goto LABEL_28; /*0x590659*/
        v9 = v42; /*0x59065f*/
        v43 = (void *)v42; /*0x590665*/
        if ( v42 < v4 ) /*0x590669*/
          break; /*0x590669*/
  LABEL_29:
        *(_DWORD *)v41 += 4; /*0x590701*/
        v3 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x59070d*/
        v42 = v9 + 1; /*0x590710*/
        v4 = *(_DWORD *)(v3 + 16); /*0x590715*/
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
          v11 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * v9); /*0x590678*/
          v5 = v5; /*0x59067b*/
          while ( *(_DWORD *)(v5->vtable3 != v11 ) /*0x590682*/
          {
            ++v10; /*0x590684*/
            v5 += 4; /*0x590685*/
            if ( v10 >= v6 ) /*0x59068a*/
              goto LABEL_20; /*0x59068a*/
          }
          v13 = *(_DWORD *)(v5 + 4 * v10); /*0x5906a1*/
        }
        if ( (*(int *)(*(_DWORD *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(_BYTE *)(v13 + 20) ) /*0x5906b7*/
        {
          v14 = (void *)v39[4]; /*0x5906c5*/
          if ( *(void **)(v13 + 16) == v14 && v14 == this->RandomMap_field_0x10 ) /*0x5906cf*/
          {
            RandomMap::PlaceBuildings(this, (int)v39, v13); /*0x5906d5*/
            v5 = g_MissionQueueFrame.briefing[339]; /*0x5906da*/
            v6 = g_MissionQueueFrame.briefing[342]; /*0x5906e0*/
          }
        }
        v3 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x5906e6*/
        v9 = (int)v43 + 1; /*0x5906ed*/
        v15 = *(_DWORD *)(v3 + 16); /*0x5906ee*/
        v43 = (void *)v9; /*0x5906f1*/
      }
      while ( v9 < v15 ); /*0x5906f7*/
  LABEL_28:
      v9 = v42; /*0x5906fd*/
      goto LABEL_29; /*0x5906fd*/
    }
  }
  else
  {
    v16 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x59072b*/
    v17 = 0; /*0x59072e*/
    v42 = 0; /*0x590730*/
    if ( *(int *)(v16 + 16) > 0 ) /*0x590737*/
    {
      v18 = g_MissionQueueFrame.briefing[342]; /*0x59073d*/
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
          v20 = *(_DWORD *)(*(_DWORD *)(v16 + 4) + 4 * v42); /*0x590756*/
          v21 = g_MissionQueueFrame.briefing[339]; /*0x590759*/
          while ( *(_DWORD *)(v21->vtable3 != v20 ) /*0x590760*/
          {
            ++v19; /*0x590766*/
            v21 += 4; /*0x590767*/
            if ( v19 >= v18 ) /*0x59076c*/
              goto LABEL_37; /*0x59076c*/
          }
          v22 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v19); /*0x5907ee*/
        }
        if ( *(_DWORD *)(v22 + 8) > (int)this->RandomMap_field_0x8 && *(void **)(v22 + 16) != this->RandomMap_field_0x10 ) /*0x590788*/
        {
          v40 = 0; /*0x59078e*/
          do /*0x5907b6*/
          {
            v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59079c*/
            IDA_LOWORD(v24) = Math::RoundToInt((double)v46 * 0.00000002351589501451605); /*0x5907ae*/
          }
          while ( (unsigned int)v24 > 0x64 ); /*0x5907b6*/
          if ( v24 >= g_MissionQueueFrame.briefing[383] ) /*0x5907be*/
          {
            v25 = 0; /*0x5907f6*/
          }
          else
          {
            do /*0x5907ea*/
            {
              v47 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5907ca*/
              IDA_LOWORD(v25) = Math::RoundToInt((double)v47 * 4.656612874161595e-10 + 1.0); /*0x5907e2*/
            }
            while ( v25 > 2 ); /*0x5907ea*/
          }
          RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x5907f8*/
          v45 = v25 + 1; /*0x5907fc*/
          v27 = *(_DWORD *)(v22 + 16); /*0x590800*/
          v44 = 0; /*0x590805*/
          if ( v27 <= (int)RandomMap_field_0x10 ) /*0x590809*/
            RandomMap_field_0x8 = this->RandomMap_field_0x8; /*0x590810*/
          else
            RandomMap_field_0x8 = *(void **)(v22 + 8); /*0x59080b*/
          if ( v27 <= (int)RandomMap_field_0x10 ) /*0x590815*/
            v43 = *(void **)(v22 + 8); /*0x590823*/
          else
            v43 = this->RandomMap_field_0x8; /*0x59081a*/
          v29 = 0; /*0x59082d*/
          if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x590831*/
          {
  LABEL_57:
            v31 = 0; /*0x59084e*/
          }
          else
          {
            v30 = g_MissionQueueFrame.briefing[339]; /*0x590839*/
            while ( *(void **)(v30->vtable3 != RandomMap_field_0x8 ) /*0x590840*/
            {
              ++v29; /*0x590846*/
              v30 += 4; /*0x590847*/
              if ( v29 >= g_MissionQueueFrame.briefing[342] ) /*0x59084c*/
                goto LABEL_57; /*0x59084c*/
            }
            v31 = *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v29); /*0x590960*/
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
              v49 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590893*/
              IDA_LOWORD(v34) = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
            }
            while ( v34 > v33 ); /*0x5908b4*/
            *(_DWORD *)v41 = *(_DWORD *)(v32[1] + 4 * v34); /*0x5908c8*/
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v41, 1) ) /*0x5908cc*/
            {
              v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
              v40 += RandomMap::CheckCellPlacement(v31, v41, v43, v37) != 0; /*0x590900*/
            }
            v44 = ++v17; /*0x59090f*/
          }
          while ( v40 < v45 ); /*0x590913*/
          if ( !v40 ) /*0x59091f*/
  LABEL_66:
            IDA_HIBYTE(this->RandomMap_field_0x18) = 0; /*0x590925*/
          if ( v32 ) /*0x59092b*/
            (*(void (__thiscall **)(_DWORD *, int))*v32)(v32, 1); /*0x590933*/
          v18 = g_MissionQueueFrame.briefing[342]; /*0x590935*/
          v17 = 0; /*0x59093f*/
        }
        v16 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x590941*/
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
// 0x590970
namespace gamemd {
int RandomMap::CheckCellPlacement(short * a1, void * a2, DynamicVector * aP3)
{
  __int16 *v4; // esi
  void *v5; // edi
  int v7; // ebx
  char v9; // cl
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // ax
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // cx
  __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int16 v21; // cx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int16 v24; // cx
  __int16 v25; // ax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int16 v28; // cx
  __int16 v29; // ax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int16 v32; // dx
  __int16 v33; // cx
  __int16 v34; // cx
  __int16 v35; // cx
  __int16 v36; // ax
  __int16 v37; // ax
  __int16 v38; // si
  _BYTE v39[5]; // [esp+13h] [ebp-Dh] BYREF
  __int64 v40; // [esp+18h] [ebp-8h]

  v4 = a1; /*0x59097a*/
  v5 = a2; /*0x59097f*/
  v39[0] = 1; /*0x59098f*/
  v7 = RandomMap::CheckNeighborhoodCompatibility(this, a1, v39, (int)a2, aP3); /*0x590999*/
  if ( !v39[0] ) /*0x5909a1*/
    return 0; /*0x5909a6*/
  v9 = 0; /*0x5909af*/
  if ( v7 == 255 ) /*0x5909b7*/
    return 0; /*0x5909bc*/
  if ( (v7 & 0x82) != 0x82 || (v7 & 0x38) != 0 ) /*0x5909d5*/
    goto LABEL_86; /*0x5909d5*/
  v10 = *v4; /*0x5909d7*/
  *(_WORD *)&v39[1] = *v4 - 1; /*0x5909e0*/
  v11 = v4[1]; /*0x5909e5*/
  IDA_LOWORD(a1) = v10 + 5; /*0x5909e9*/
  *(_WORD *)&v39[3] = v11 - 5; /*0x5909f5*/
  IDA_HIWORD(a1) = v11 + 1; /*0x5909fa*/
  if ( (v7 & 0x40) != 0 ) /*0x5909ff*/
    ++*(_WORD *)&v39[3]; /*0x590a01*/
  if ( (v7 & 4) != 0 ) /*0x590a09*/
    IDA_LOWORD(a1) = (_WORD)a1 - 1; /*0x590a0b*/
  v9 = PlaceMapSeedCityBlockVariant2((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590a22*/
  if ( !v9 ) /*0x590a26*/
  {
  LABEL_86:
    if ( (v7 & 0xA) != 0xA || (v7 & 0x11) != 0 ) /*0x590a39*/
      goto LABEL_87; /*0x590a39*/
    v12 = *v4; /*0x590a3b*/
    *(_WORD *)&v39[1] = *v4 + 5; /*0x590a42*/
    v13 = v4[1]; /*0x590a47*/
    IDA_LOWORD(a1) = v12 - 1; /*0x590a4b*/
    *(_WORD *)&v39[3] = v13 - 1; /*0x590a59*/
    IDA_HIWORD(a1) = v13 + 5; /*0x590a5e*/
    if ( (v7 & 0x10) != 0 ) /*0x590a63*/
      --IDA_HIWORD(a1); /*0x590a65*/
    if ( (v7 & 1) != 0 ) /*0x590a6d*/
      --*(_WORD *)&v39[1]; /*0x590a6f*/
    v9 = MapSeed::PlaceCityBlock2((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590a86*/
    if ( !v9 ) /*0x590a8a*/
    {
  LABEL_87:
      if ( (v7 & 0x28) != 0x28 || (v7 & 0x83) != 0 ) /*0x590a9d*/
        goto LABEL_88; /*0x590a9d*/
      v14 = *v4; /*0x590a9f*/
      *(_WORD *)&v39[1] = *v4 + 1; /*0x590aa8*/
      v15 = v4[1]; /*0x590aad*/
      IDA_LOWORD(a1) = v14 - 5; /*0x590ab1*/
      *(_WORD *)&v39[3] = v15 + 5; /*0x590abd*/
      IDA_HIWORD(a1) = v15 - 1; /*0x590ac2*/
      if ( (v7 & 0x40) != 0 ) /*0x590ac7*/
        IDA_LOWORD(a1) = (_WORD)a1 - 1; /*0x590ac9*/
      if ( (v7 & 4) != 0 ) /*0x590ad1*/
        --*(_WORD *)&v39[3]; /*0x590ad3*/
      v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590aea*/
      if ( !v9 ) /*0x590aee*/
      {
  LABEL_88:
        if ( (v7 & 0xA0) != 0xA0 || (v7 & 0xE) != 0 ) /*0x590b04*/
          goto LABEL_89; /*0x590b04*/
        v16 = *v4; /*0x590b06*/
        *(_WORD *)&v39[1] = *v4 - 5; /*0x590b0d*/
        v17 = v4[1]; /*0x590b12*/
        IDA_LOWORD(a1) = v16 + 1; /*0x590b16*/
        *(_WORD *)&v39[3] = v17 + 1; /*0x590b24*/
        IDA_HIWORD(a1) = v17 - 5; /*0x590b29*/
        if ( (v7 & 1) != 0 ) /*0x590b2e*/
          ++IDA_HIWORD(a1); /*0x590b30*/
        if ( (v7 & 0x10) != 0 ) /*0x590b38*/
          ++*(_WORD *)&v39[1]; /*0x590b3a*/
        v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590b51*/
        if ( !v9 ) /*0x590b55*/
        {
  LABEL_89:
          if ( (v7 & 0x70) != 0 || (v7 & 0x88) == 0 ) /*0x590b67*/
            goto LABEL_90; /*0x590b67*/
          v18 = v4[1]; /*0x590b6d*/
          *(_WORD *)&v39[1] = *v4 - 1; /*0x590b7f*/
          *(_WORD *)&v39[3] = v18 - 4; /*0x590b84*/
          IDA_LOWORD(a1) = *(_WORD *)&v39[1]; /*0x590b89*/
          IDA_HIWORD(a1) = v18 + 4; /*0x590b8e*/
          if ( (v7 & 0x80u) != 0 ) /*0x590b93*/
          {
            ++*(_WORD *)&v39[3]; /*0x590b95*/
            ++IDA_HIWORD(a1); /*0x590b9a*/
          }
          if ( (v7 & 8) != 0 ) /*0x590ba2*/
          {
            --IDA_HIWORD(a1); /*0x590ba4*/
            --*(_WORD *)&v39[3]; /*0x590ba9*/
          }
          do /*0x590bd6*/
          {
            v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590bb8*/
            IDA_LOWORD(v19) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
          }
          while ( v19 > 1 ); /*0x590bd6*/
          *(_WORD *)&v39[1] += v19; /*0x590bd8*/
          do /*0x590c05*/
          {
            v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590be7*/
            IDA_LOWORD(v20) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
          }
          while ( v20 > 1 ); /*0x590c05*/
          IDA_LOWORD(a1) = v20 + (_WORD)a1; /*0x590c07*/
          v9 = RandomMap::CheckPlacementArea(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590c1e*/
          if ( !v9 ) /*0x590c22*/
          {
  LABEL_90:
            if ( (v7 & 7) != 0 || (v7 & 0x88) == 0 ) /*0x590c34*/
              goto LABEL_91; /*0x590c34*/
            v21 = v4[1]; /*0x590c3a*/
            *(_WORD *)&v39[1] = *v4 + 1; /*0x590c4c*/
            *(_WORD *)&v39[3] = v21 + 4; /*0x590c51*/
            IDA_LOWORD(a1) = *(_WORD *)&v39[1]; /*0x590c56*/
            IDA_HIWORD(a1) = v21 - 4; /*0x590c5b*/
            if ( (v7 & 0x80u) != 0 ) /*0x590c60*/
            {
              ++IDA_HIWORD(a1); /*0x590c62*/
              ++*(_WORD *)&v39[3]; /*0x590c67*/
            }
            if ( (v7 & 8) != 0 ) /*0x590c6f*/
            {
              --*(_WORD *)&v39[3]; /*0x590c71*/
              --IDA_HIWORD(a1); /*0x590c76*/
            }
            do /*0x590ca3*/
            {
              v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590c85*/
              IDA_LOWORD(v22) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
            }
            while ( v22 > 1 ); /*0x590ca3*/
            *(_WORD *)&v39[1] += v22 - 1; /*0x590ca6*/
            do /*0x590cd3*/
            {
              v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590cb5*/
              IDA_LOWORD(v23) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
            }
            while ( v23 > 1 ); /*0x590cd3*/
            IDA_LOWORD(a1) = v23 - 1 + (_WORD)a1; /*0x590cd7*/
            v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590ced*/
            if ( !v9 ) /*0x590cf1*/
            {
  LABEL_91:
              if ( (v7 & 0xC1) != 0 || (v7 & 0x22) == 0 ) /*0x590d03*/
                goto LABEL_64; /*0x590d03*/
              v24 = *v4; /*0x590d09*/
              v25 = v4[1] - 1; /*0x590d10*/
              *(_WORD *)&v39[1] = *v4 + 4; /*0x590d1b*/
              *(_WORD *)&v39[3] = v25; /*0x590d20*/
              IDA_LOWORD(a1) = v24 - 4; /*0x590d25*/
              IDA_HIWORD(a1) = v25; /*0x590d2a*/
              if ( (v7 & 0x20) != 0 ) /*0x590d2f*/
              {
                IDA_LOWORD(a1) = (_WORD)a1 + 1; /*0x590d31*/
                ++*(_WORD *)&v39[1]; /*0x590d36*/
              }
              if ( (v7 & 2) != 0 ) /*0x590d3e*/
              {
                --*(_WORD *)&v39[1]; /*0x590d40*/
                IDA_LOWORD(a1) = (_WORD)a1 - 1; /*0x590d45*/
              }
              do /*0x590d72*/
              {
                v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d54*/
                IDA_LOWORD(v26) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
              }
              while ( v26 > 1 ); /*0x590d72*/
              *(_WORD *)&v39[3] += v26; /*0x590d74*/
              do /*0x590da1*/
              {
                v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d83*/
                IDA_LOWORD(v27) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
              }
              while ( v27 > 1 ); /*0x590da1*/
              IDA_HIWORD(a1) += v27; /*0x590da3*/
              v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590dba*/
              if ( !v9 ) /*0x590dbe*/
              {
  LABEL_64:
                if ( (v7 & 0x1C) == 0 && (v7 & 0x22) != 0 ) /*0x590dd0*/
                {
                  v28 = *v4; /*0x590dd6*/
                  v29 = v4[1] + 1; /*0x590ddd*/
                  *(_WORD *)&v39[1] = *v4 - 4; /*0x590de8*/
                  *(_WORD *)&v39[3] = v29; /*0x590ded*/
                  IDA_LOWORD(a1) = v28 + 4; /*0x590df2*/
                  IDA_HIWORD(a1) = v29; /*0x590df7*/
                  if ( (v7 & 0x20) != 0 ) /*0x590dfc*/
                  {
                    ++*(_WORD *)&v39[1]; /*0x590dfe*/
                    IDA_LOWORD(a1) = (_WORD)a1 + 1; /*0x590e03*/
                  }
                  if ( (v7 & 2) != 0 ) /*0x590e0b*/
                  {
                    IDA_LOWORD(a1) = (_WORD)a1 - 1; /*0x590e0d*/
                    --*(_WORD *)&v39[1]; /*0x590e12*/
                  }
                  do /*0x590e3f*/
                  {
                    v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e21*/
                    IDA_LOWORD(v30) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                  }
                  while ( v30 > 1 ); /*0x590e3f*/
                  *(_WORD *)&v39[3] += v30 - 1; /*0x590e42*/
                  do /*0x590e6f*/
                  {
                    v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e51*/
                    IDA_LOWORD(v31) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                  }
                  while ( v31 > 1 ); /*0x590e6f*/
                  IDA_HIWORD(a1) += v31 - 1; /*0x590e73*/
                  v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590e89*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( aP3 > 0.5 && !v9 ) /*0x590ea2*/
  {
    if ( (v7 & 8) != 0 /*0x590eec*/
      || (v32 = *v4 - 4,
          v33 = *v4 + 4,
          IDA_HIWORD(a1) = v4[1] + 1,
          IDA_HIWORD(aP3) = IDA_HIWORD(a1),
          IDA_LOWORD(aP3) = v33,
          IDA_LOWORD(a1) = v32,
          (v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
    {
      if ( (v7 & 2) != 0 /*0x590f34*/
        || (v34 = v4[1],
            IDA_LOWORD(a1) = *v4 + 1,
            IDA_LOWORD(aP3) = (_WORD)a1,
            IDA_HIWORD(aP3) = v34 - 4,
            IDA_HIWORD(a1) = v34 + 4,
            (v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
      {
        if ( (v7 & 8) != 0 /*0x590f7b*/
          || (v35 = *v4 - 4,
              IDA_LOWORD(a1) = *v4 + 4,
              v36 = v4[1] - 1,
              IDA_LOWORD(aP3) = v35,
              IDA_HIWORD(a1) = v36,
              IDA_HIWORD(aP3) = v36,
              (v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
        {
          if ( (v7 & 0x20) == 0 ) /*0x590f80*/
          {
            v37 = *v4; /*0x590f82*/
            v38 = v4[1]; /*0x590f85*/
            IDA_LOWORD(a1) = v37 - 1; /*0x590f92*/
            IDA_LOWORD(aP3) = v37 - 1; /*0x590f97*/
            IDA_HIWORD(a1) = v38 - 4; /*0x590f9c*/
            IDA_HIWORD(aP3) = v38 + 4; /*0x590fb1*/
            return RandomMap::CheckPlacementArea((__int16 *)&a1, (__int16 *)&aP3, a2); /*0x590fbb*/
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
  int v6; // eax
  __int16 v7; // cx
  _WORD *v8; // ebx
  void *RandomMap_field_0x8; // edx
  int v11; // esi
  int v12; // edi
  char *v13; // ebx
  void *v14; // edx
  int v15; // [esp+0h] [ebp-18h]
  int v16; // [esp+4h] [ebp-14h]
  _WORD *v17; // [esp+8h] [ebp-10h] BYREF
  int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]
  _WORD *v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+28h] [ebp+10h]

  IDA_LOWORD(v6) = Math::RoundToInt((15.0 - 5.0) * (1.0 - aP4) + 5.0); /*0x590ff5*/
  v16 = v6; /*0x591000*/
  v7 = a1[1] - 2; /*0x591010*/
  v8 = (_WORD *)(__int16)(*a1 - 2); /*0x591014*/
  RandomMap_field_0x8 = this->RandomMap_field_0x8; /*0x59101a*/
  v15 = v7; /*0x59101d*/
  v18 = v7; /*0x591021*/
  v19 = 5; /*0x59102a*/
  v20 = 5; /*0x59102e*/
  v21 = v8; /*0x59103b*/
  v17 = v8; /*0x59103f*/
  if ( Map_Check((__int16 *)&v17, (int)RandomMap_field_0x8, a4, v6) ) /*0x591043*/
  {
    v11 = 0; /*0x59105d*/
    v22 = 0; /*0x591060*/
    while ( 1 ) /*0x59106a*/
    {
      v12 = 0; /*0x59106a*/
      v13 = (char *)v8 - 5; /*0x59106c*/
      do /*0x5910d1*/
      {
        if ( v11 != 1 || v12 != 1 ) /*0x591076*/
        {
          v17 = v13; /*0x59107c*/
          v14 = this->RandomMap_field_0x8; /*0x591088*/
          v19 = 5; /*0x591094*/
          v20 = 5; /*0x591098*/
          v18 = v11 + v15 + 4 * v11 - 5; /*0x5910a0*/
          if ( Map_Check((__int16 *)&v17, (int)v14, a4, v16) ) /*0x5910a9*/
            v22 |= *(_DWORD *)&stru_82ADA8.?[8 * v11 + 35 + 4 * v12 + 4 * v11]; /*0x5910c6*/
        }
        ++v12; /*0x5910ca*/
        v13 += 5; /*0x5910cb*/
      }
      while ( v12 < 3 ); /*0x5910d1*/
      if ( ++v11 >= 3 ) /*0x5910d7*/
        break; /*0x5910d7*/
      v8 = v21; /*0x591066*/
    }
    return v22; /*0x5910d9*/
  }
  else
  {
    *aP2 = 0; /*0x591052*/
    return 0; /*0x591054*/
  }
}
}
// 0x592440
namespace gamemd {
ObjectClass * * RandomMap::CheckPlacementArea(short * a2, short * a3, ObjectClass * aP2)
{
  __int16 v5; // ax
  __int16 v6; // bp
  __int16 v7; // si
  int v8; // eax
  char result; // al
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // kr00_4
  int v17; // ebx
  int MapSeed_field_0x08; // ebp
  int v19; // esi
  _BYTE *v20; // ebp
  int v21; // edx
  int MapSeed_field_0x04; // ebp
  int v23; // esi
  int v24; // esi
  _BYTE *v25; // ebp
  int MapSeed_field_0x10; // ebp
  int v27; // edx
  int v28; // esi
  _BYTE *v29; // eax
  __int16 *v30; // ebp
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // ebx
  __int16 v35; // dx
  void *RandomMap_field_0x10; // edx
  __int16 v37; // dx
  void *v38; // ecx
  __int16 v39; // dx
  void *v40; // ecx
  int MapSeed_field_0x14; // esi
  int v42; // ebx
  unsigned int v43; // eax
  int v44; // ecx
  __int16 v45; // bp
  int *v46; // esi
  int v47; // ebx
  bool v48; // zf
  __int16 v49; // cx
  __int16 v50; // dx
  __int16 v51; // ax
  _BYTE *v52; // eax
  char v53; // dl
  unsigned __int8 v54; // cl
  int v55; // edx
  bool v56; // cc
  int v57; // esi
  __int16 MapSeed_field_0x1C_high; // bp
  __int16 v59; // dx
  __int16 v60; // ax
  __int16 v61; // ax
  _BYTE *v62; // eax
  char v63; // dl
  char v64; // dl
  MapSeed v66; // [esp+14h] [ebp-54h] BYREF
  int v67; // [esp+38h] [ebp-30h]
  __int16 v68; // [esp+40h] [ebp-28h]
  __int16 v69; // [esp+42h] [ebp-26h]
  __int64 v70; // [esp+48h] [ebp-20h]
  int v71; // [esp+50h] [ebp-18h]
  int v72; // [esp+58h] [ebp-10h] BYREF
  int v73; // [esp+5Ch] [ebp-Ch]
  int v74; // [esp+60h] [ebp-8h]
  int v75; // [esp+64h] [ebp-4h]
  __int16 *v76; // [esp+6Ch] [ebp+4h]

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
  v72 = v5 - 7; /*0x592478*/
  v8 = a2[1]; /*0x59247c*/
  v73 = v8 - 4; /*0x592483*/
  v75 = a3[1] - v8 + 9; /*0x59249f*/
  v74 = v6 - v7 + 11; /*0x5924a9*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v72, (int)aP2); /*0x5924ad*/
  if ( result ) /*0x5924b4*/
  {
    v10 = *a2; /*0x5924c0*/
    v11 = a3[1]; /*0x5924c8*/
    v66.MapSeed_field_0x14 = *a3 - v10; /*0x5924cc*/
    v12 = v11 - a2[1]; /*0x5924d9*/
    v76 = (__int16 *)abs32(v66.MapSeed_field_0x14); /*0x5924db*/
    if ( (int)v76 <= v12 - 5 ) /*0x5924e4*/
    {
      v13 = v12 + 1; /*0x5924f2*/
      v14 = v72; /*0x5924f5*/
      v15 = v10 - v72; /*0x5924fc*/
      v16 = v13; /*0x5924fe*/
      v17 = v13 / 2 + 2; /*0x592506*/
      MapSeed_field_0x08 = v73; /*0x592509*/
      IDA_LODWORD(v70) = v72; /*0x59250b*/
      v66.MapSeed_field_0x08 = v73; /*0x59250f*/
      v66.MapSeed_field_0x10 = v17 + v73 + 2; /*0x592519*/
      if ( v73 < v66.MapSeed_field_0x10 ) /*0x59251d*/
      {
        v66.MapSeed_field_0x04 = v72 + v15; /*0x592521*/
        do /*0x592596*/
        {
          v19 = v70; /*0x592525*/
          if ( (int)v70 < v66.MapSeed_field_0x04 ) /*0x592531*/
          {
            do /*0x592585*/
            {
              *(_WORD *)v66.__pad_0 = v19; /*0x592537*/
              *(_WORD *)&v66.__pad_0[2] = MapSeed_field_0x08; /*0x59253c*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x592541*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)aP2); /*0x592552*/
                v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x59256a*/
                v20[283] = *(_BYTE *)(List::FindByValue((List *)aP2) + 16); /*0x592574*/
                MapSeed_field_0x08 = v66.MapSeed_field_0x08; /*0x59257a*/
              }
              ++v19; /*0x592582*/
            }
            while ( v19 < v66.MapSeed_field_0x04 ); /*0x592585*/
            v14 = v72; /*0x592587*/
          }
          v66.MapSeed_field_0x08 = ++MapSeed_field_0x08; /*0x592592*/
        }
        while ( MapSeed_field_0x08 < v66.MapSeed_field_0x10 ); /*0x592596*/
      }
      IDA_LODWORD(v70) = v14; /*0x59259c*/
      v21 = *a3 - v14; /*0x5925a9*/
      v23 = a3[1] + 5; /*0x5925b0*/
      v66.MapSeed_field_0x04 = a3[1] - v17 + 3; /*0x5925b4*/
      MapSeed_field_0x04 = v66.MapSeed_field_0x04; /*0x5925ae*/
      v66.MapSeed_field_0x10 = v23; /*0x5925ba*/
      if ( v66.MapSeed_field_0x04 < v23 ) /*0x5925be*/
      {
        v66.MapSeed_field_0x08 = v14 + v21; /*0x5925c2*/
        do /*0x592635*/
        {
          v24 = v70; /*0x5925c6*/
          if ( (int)v70 < v66.MapSeed_field_0x08 ) /*0x5925d0*/
          {
            do /*0x592624*/
            {
              *(_WORD *)v66.__pad_0 = v24; /*0x5925d6*/
              *(_WORD *)&v66.__pad_0[2] = MapSeed_field_0x04; /*0x5925db*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x5925e0*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)aP2); /*0x5925f1*/
                v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x592609*/
                v25[283] = *(_BYTE *)(List::FindByValue((List *)aP2) + 16); /*0x592613*/
                MapSeed_field_0x04 = v66.MapSeed_field_0x04; /*0x592619*/
              }
              ++v24; /*0x592621*/
            }
            while ( v24 < v66.MapSeed_field_0x08 ); /*0x592624*/
            v14 = v72; /*0x592626*/
          }
          v66.MapSeed_field_0x04 = ++MapSeed_field_0x04; /*0x592631*/
        }
        while ( MapSeed_field_0x04 < v66.MapSeed_field_0x10 ); /*0x592635*/
      }
      MapSeed_field_0x10 = *a2; /*0x592637*/
      v27 = v74; /*0x59263a*/
      v66.MapSeed_field_0x10 = MapSeed_field_0x10; /*0x59263e*/
      v66.MapSeed_field_0x04 = a2[1]; /*0x592648*/
      v71 = v74 - MapSeed_field_0x10 + v14 - 1; /*0x592652*/
      v66.MapSeed_field_0x0C = v17 + v66.MapSeed_field_0x04 - 1; /*0x59265c*/
      if ( v66.MapSeed_field_0x04 < v66.MapSeed_field_0x0C ) /*0x592660*/
      {
        v66.MapSeed_field_0x08 = MapSeed_field_0x10 + v71; /*0x592668*/
        do /*0x5926de*/
        {
          v28 = MapSeed_field_0x10; /*0x592670*/
          if ( MapSeed_field_0x10 < v66.MapSeed_field_0x08 ) /*0x592674*/
          {
            do /*0x5926c5*/
            {
              *(_WORD *)v66.__pad_0 = v28; /*0x59267b*/
              *(_WORD *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592680*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x592689*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59269d*/
                v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x5926ac*/
                MapSeed_field_0x10 = v66.MapSeed_field_0x10; /*0x5926b4*/
                v29[283] = this->RandomMap_field_0x10; /*0x5926b8*/
              }
              ++v28; /*0x5926c2*/
            }
            while ( v28 < v66.MapSeed_field_0x08 ); /*0x5926c5*/
            v27 = v74; /*0x5926c7*/
            v14 = v72; /*0x5926cb*/
          }
          ++v66.MapSeed_field_0x04; /*0x5926da*/
        }
        while ( v66.MapSeed_field_0x04 < v66.MapSeed_field_0x0C ); /*0x5926de*/
      }
      v30 = a3; /*0x5926e0*/
      v31 = *a3; /*0x5926e8*/
      v32 = v27 - v31 + v14 - 1; /*0x5926f3*/
      v66.MapSeed_field_0x04 = a3[1] - v17 + 3; /*0x5926f7*/
      v33 = v16 / 2 + v66.MapSeed_field_0x04; /*0x5926fb*/
      v66.MapSeed_field_0x10 = v33; /*0x592701*/
      if ( v66.MapSeed_field_0x04 < v33 ) /*0x592705*/
      {
        v66.MapSeed_field_0x08 = v31 + v32; /*0x592709*/
        do /*0x592777*/
        {
          v34 = v31; /*0x592711*/
          if ( v31 < v66.MapSeed_field_0x08 ) /*0x592715*/
          {
            do /*0x592766*/
            {
              *(_WORD *)v66.__pad_0 = v34; /*0x592720*/
              *(_WORD *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592725*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x59272a*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59273e*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0) + 283) = this->RandomMap_field_0x10; /*0x592759*/
              }
              ++v34; /*0x592763*/
            }
            while ( v34 < v66.MapSeed_field_0x08 ); /*0x592766*/
            v33 = v66.MapSeed_field_0x10; /*0x592768*/
          }
          ++v66.MapSeed_field_0x04; /*0x592773*/
        }
        while ( v66.MapSeed_field_0x04 < v33 ); /*0x592777*/
      }
      v35 = *a2 - 3; /*0x592788*/
      IDA_HIWORD(v66.MapSeed_field_0x08) = a2[1]; /*0x59278c*/
      IDA_LOWORD(v66.MapSeed_field_0x08) = v35; /*0x592796*/
      RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x59279f*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927a2*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &v66.MapSeed_field_0x10, (int)aP2, (int)RandomMap_field_0x10); /*0x5927af*/
      v37 = a3[1] - 2; /*0x5927c0*/
      IDA_LOWORD(v66.MapSeed_field_0x08) = *a3 - 3; /*0x5927c4*/
      v38 = this->RandomMap_field_0x10; /*0x5927c9*/
      IDA_HIWORD(v66.MapSeed_field_0x08) = v37; /*0x5927cc*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927d5*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 8, &v66.MapSeed_field_0x10, (int)aP2, (int)v38); /*0x5927e7*/
      v39 = a3[1] - 1; /*0x5927f6*/
      IDA_LOWORD(v66.MapSeed_field_0x08) = *a3 - 1; /*0x5927f8*/
      v40 = this->RandomMap_field_0x10; /*0x5927fd*/
      IDA_HIWORD(v66.MapSeed_field_0x08) = v39; /*0x592800*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x592809*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 9, &v66.MapSeed_field_0x10, (int)aP2, (int)v40); /*0x59281b*/
      MapSeed_field_0x14 = v66.MapSeed_field_0x14; /*0x592820*/
      v42 = 0; /*0x592824*/
      v66.MapSeed_field_0x1C = 0; /*0x592828*/
      if ( v66.MapSeed_field_0x14 ) /*0x592832*/
      {
        do /*0x59285c*/
        {
          v70 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x592842*/
          IDA_LOWORD(v43) = Math::RoundToInt((double)v70 * 4.656612874161595e-10); /*0x592854*/
        }
        while ( v43 > 1 ); /*0x59285c*/
        v44 = MapSeed_field_0x14 > 0; /*0x592862*/
        v66.MapSeed_field_0x08 = v44; /*0x59286f*/
        v67 = v44; /*0x592873*/
        if ( v43 == 1 ) /*0x59287d*/
        {
          IDA_LOWORD(v66.MapSeed_field_0x1C) = MapSeed_field_0x14; /*0x592884*/
          IDA_HIWORD(v66.MapSeed_field_0x1C) = (_WORD)v76; /*0x592889*/
        }
        else
        {
          IDA_HIWORD(v67) = a3[1] - (_WORD)v76 - a2[1] - 5; /*0x5928a0*/
        }
        *(_DWORD *)v66.__pad_0 = 0; /*0x5928a9*/
        if ( (int)v76 > 0 ) /*0x5928af*/
        {
          v66.MapSeed_field_0x04 = 0; /*0x5928b5*/
          while ( 1 ) /*0x5928c4*/
          {
            v45 = 0; /*0x5928c4*/
            v46 = &stru_82ADA8.?[1]; /*0x5928c6*/
            v47 = 20 * v44 + 8564740; /*0x5928cb*/
            while ( 1 ) /*0x5928d8*/
            {
              v48 = v44 == 0; /*0x5928d8*/
              v49 = *(_WORD *)v66.__pad_0; /*0x5928da*/
              if ( v48 ) /*0x5928de*/
                v49 = v66.MapSeed_field_0x04; /*0x5928e0*/
              v50 = *a2; /*0x5928e4*/
              IDA_LOWORD(v66.MapSeed_field_0x14) = -v45; /*0x5928eb*/
              v51 = a2[1] + 3; /*0x5928f4*/
              v68 = v50; /*0x5928f8*/
              v69 = v51; /*0x5928fd*/
              IDA_LOWORD(v70) = v50 - v45; /*0x592910*/
              IDA_WORD1(v70) = *(_WORD *)v66.__pad_0 + v51; /*0x59291f*/
              IDA_LOWORD(v66.MapSeed_field_0x0C) = v67 + v50 - v45; /*0x59292e*/
              IDA_HIWORD(v66.MapSeed_field_0x0C) = *(_WORD *)v66.__pad_0 + v51 + IDA_HIWORD(v67); /*0x592939*/
              IDA_LOWORD(v66.MapSeed_field_0x10) = v49 + IDA_LOWORD(v66.MapSeed_field_0x0C); /*0x592948*/
              IDA_HIWORD(v66.MapSeed_field_0x10) = IDA_HIWORD(v66.MapSeed_field_0x0C); /*0x59294d*/
              v66.MapSeed_field_0x18 = v66.MapSeed_field_0x10; /*0x59295c*/
              v52 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v66.MapSeed_field_0x18); /*0x592960*/
              v53 = *(_BYTE *)v46++; /*0x592969*/
              v47 += 4; /*0x59296e*/
              v52[283] = IDA_LOBYTE(this->RandomMap_field_0x10) + v53 - 4; /*0x592977*/
              v54 = *(_BYTE *)(v47 - 4); /*0x59297d*/
              v52[284] = v54; /*0x592980*/
              v55 = g_CellTileLookup; /*0x592986*/
              ++v45; /*0x592992*/
              v52[282] = 0; /*0x592999*/
              *((_DWORD *)v52 + 14) = v54 + v55 - 1; /*0x5929a4*/
              if ( (int)v46 >= (int)&stru_82ADA8.?[6] ) /*0x5929a7*/
                break; /*0x5929a7*/
              v44 = v66.MapSeed_field_0x08; /*0x5928d4*/
            }
            v56 = ++*(_DWORD *)v66.__pad_0 < (int)v76; /*0x5929bb*/
            --v66.MapSeed_field_0x04; /*0x5929c1*/
            if ( !v56 ) /*0x5929c5*/
              break; /*0x5929c5*/
            v44 = v66.MapSeed_field_0x08; /*0x5928bb*/
          }
          v30 = a3; /*0x5929cb*/
          v42 = 0; /*0x5929cf*/
        }
      }
      v57 = 0; /*0x5929e1*/
      if ( v30[1] - a2[1] - (int)v76 - 5 > 0 ) /*0x5929e8*/
      {
        MapSeed_field_0x1C_high = IDA_HIWORD(v66.MapSeed_field_0x1C); /*0x5929ee*/
        while ( 1 ) /*0x592ab2*/
        {
          do /*0x592ab2*/
          {
            v59 = *a2; /*0x5929fa*/
            v60 = a2[1] + 3; /*0x5929ff*/
            IDA_LOWORD(v66.MapSeed_field_0x18) = -(__int16)v42; /*0x592a05*/
            IDA_LOWORD(v70) = v59; /*0x592a0a*/
            IDA_WORD1(v70) = v60; /*0x592a13*/
            v68 = v59 - v42; /*0x592a28*/
            v69 = v57 + v60; /*0x592a2d*/
            v61 = MapSeed_field_0x1C_high + v57 + v60; /*0x592a3c*/
            IDA_LOWORD(v66.MapSeed_field_0x10) = IDA_LOWORD(v66.MapSeed_field_0x1C) + v59 - v42; /*0x592a3e*/
            IDA_HIWORD(v66.MapSeed_field_0x10) = MapSeed_field_0x1C_high + v69; /*0x592a43*/
            v66.MapSeed_field_0x14 = v66.MapSeed_field_0x10; /*0x592a4c*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592a58*/
              *(_DWORD *)(80 * ((__int16)(IDA_LOWORD(v66.MapSeed_field_0x1C) + v59 - v42) + g_MapCellWidth * v61) /*0x592a73*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = aP2;
            v62 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v66.MapSeed_field_0x14); /*0x592a81*/
            v63 = (char)this->RandomMap_field_0x10; /*0x592a8a*/
            v62[284] = 1; /*0x592a8d*/
            v64 = v63 - v42++ - 1; /*0x592a96*/
            v62[283] = v64; /*0x592a99*/
            *((_DWORD *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
            v62[282] = 0; /*0x592aab*/
          }
          while ( v42 < 4 ); /*0x592ab2*/
          if ( ++v57 >= a3[1] - a2[1] - (int)v76 - 5 ) /*0x592ad2*/
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
  void (__thiscall ***v6)(_DWORD, int); // ecx
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

  if ( g_MissionQueueFrame.localVariables[163] ) /*0x5958ee*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x5958f6*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5958fb*/
    {
      v3 = 0; /*0x5958fd*/
      do /*0x59591a*/
      {
        v3 += 80; /*0x595908*/
        --v2; /*0x59590b*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x59590c*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x595916*/
      }
      while ( v2 ); /*0x59591a*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x595927*/
  {
    v5 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x59592f*/
    if ( v5 ) /*0x595934*/
    {
      TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * i)); /*0x595938*/
      RA2_OPDEL(v5); /*0x59593e*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59594e*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x595957*/
  {
    RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x59595a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x595962*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))&this->__pad_4C[300]; /*0x595968*/
  if ( v6 ) /*0x595970*/
  {
    (**v6)(v6, 1); /*0x595976*/
    *(_DWORD *)&this->__pad_4C[300] = 0; /*0x595978*/
  }
  v7 = *(void **)&this->__pad_4C[304]; /*0x59597e*/
  if ( v7 ) /*0x595986*/
  {
    ComPtr::Dtor(*(ComPtr **)&this->__pad_4C[304]); /*0x59598a*/
    RA2_OPDEL(v7); /*0x595990*/
    *(_DWORD *)&this->__pad_4C[304] = 0; /*0x595998*/
  }
  this->u32_B8 = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5959a4*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)((char *)&this->u32_1246)); /*0x5959aa*/
  this->u32_2C4 = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5959b5*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)((char *)&this->q1188)); /*0x5959bb*/
  this->u32_2A0 = &(void*)(void*)&VectorClass_int_vftable; /*0x5959cb*/
  VectorClass::Destroy((int)&this->u32_10C2); /*0x5959cd*/
  this->u32_284 = &(void*)(void*)&VectorClass_int_vftable; /*0x5959d8*/
  VectorClass::Destroy((int)&this->q1004); /*0x5959da*/
  v8 = (void *)this->u32_26C; /*0x5959df*/
  this->u32_268 = &(void*)(void*)&VectorClass_int_vftable; /*0x5959e5*/
  if ( v8 && this->u32_275 ) /*0x5959ef*/
  {
    RA2_OPDEL(v8); /*0x5959f8*/
    this->u32_26C = 0; /*0x595a00*/
  }
  this->u32_275 = 0; /*0x595a06*/
  this->u32_9C = 0; /*0x595a0c*/
  v9 = (void *)this->u32_94; /*0x595a12*/
  this->u32_24C = &(void*)(void*)&VectorClass_int_vftable; /*0x595a18*/
  if ( v9 && this->u32_259 ) /*0x595a22*/
  {
    RA2_OPDEL(v9); /*0x595a2b*/
    this->u32_94 = 0; /*0x595a33*/
  }
  this->u32_259 = 0; /*0x595a39*/
  this->u32_254 = 0; /*0x595a3f*/
  v10 = (void *)this->u32_234; /*0x595a45*/
  this->u32_230 = &(void*)(void*)&VectorClass_int_vftable; /*0x595a4b*/
  if ( v10 && this->u32_23D ) /*0x595a55*/
  {
    RA2_OPDEL(v10); /*0x595a5e*/
    this->u32_234 = 0; /*0x595a66*/
  }
  this->u32_23D = 0; /*0x595a6c*/
  this->u32_238 = 0; /*0x595a72*/
  v11 = (void *)this->u32_218; /*0x595a78*/
  this->u32_214 = &(void*)(void*)&VectorClass_int_vftable; /*0x595a7e*/
  if ( v11 && this->u32_221 ) /*0x595a88*/
  {
    RA2_OPDEL(v11); /*0x595a91*/
    this->u32_218 = 0; /*0x595a99*/
  }
  this->u32_221 = 0; /*0x595a9f*/
  this->u32_21C = 0; /*0x595aa5*/
  v12 = *(void **)&this->__pad_4C[432]; /*0x595aab*/
  *(_DWORD *)&this->__pad_4C[428] = &(void*)(void*)&VectorClass_int_vftable; /*0x595ab1*/
  if ( v12 && this->__pad_4C[441] ) /*0x595abb*/
  {
    RA2_OPDEL(v12); /*0x595ac4*/
    *(_DWORD *)&this->__pad_4C[432] = 0; /*0x595acc*/
  }
  this->__pad_4C[441] = 0; /*0x595ad2*/
  *(_DWORD *)&this->__pad_4C[436] = 0; /*0x595ad8*/
  v13 = *(void **)&this->__pad_4C[404]; /*0x595ade*/
  *(_DWORD *)&this->__pad_4C[400] = &(void*)(void*)&VectorClass_int_vftable; /*0x595ae4*/
  if ( v13 && this->__pad_4C[413] ) /*0x595aee*/
  {
    RA2_OPDEL(v13); /*0x595af7*/
    *(_DWORD *)&this->__pad_4C[404] = 0; /*0x595aff*/
  }
  this->__pad_4C[413] = 0; /*0x595b05*/
  *(_DWORD *)&this->__pad_4C[408] = 0; /*0x595b0b*/
  v14 = *(void **)&this->__pad_4C[376]; /*0x595b11*/
  *(_DWORD *)&this->__pad_4C[372] = &(void*)(void*)&VectorClass_int_vftable; /*0x595b17*/
  if ( v14 && this->__pad_4C[385] ) /*0x595b21*/
  {
    RA2_OPDEL(v14); /*0x595b2a*/
    *(_DWORD *)&this->__pad_4C[376] = 0; /*0x595b32*/
  }
  this->__pad_4C[385] = 0; /*0x595b38*/
  *(_DWORD *)&this->__pad_4C[380] = 0; /*0x595b3e*/
  v15 = *(void **)&this->__pad_4C[348]; /*0x595b44*/
  *(_DWORD *)&this->__pad_4C[344] = &(void*)(void*)&VectorClass_int_vftable; /*0x595b4a*/
  if ( v15 && this->__pad_4C[357] ) /*0x595b54*/
  {
    RA2_OPDEL(v15); /*0x595b5d*/
    *(_DWORD *)&this->__pad_4C[348] = 0; /*0x595b65*/
  }
  this->__pad_4C[357] = 0; /*0x595b6b*/
  *(_DWORD *)&this->__pad_4C[352] = 0; /*0x595b71*/
  v16 = *(void **)&this->__pad_4C[320]; /*0x595b77*/
  *(_DWORD *)&this->__pad_4C[316] = &(void*)(void*)&VectorClass_int_vftable; /*0x595b7d*/
  if ( v16 && this->__pad_4C[329] ) /*0x595b87*/
  {
    RA2_OPDEL(v16); /*0x595b90*/
    *(_DWORD *)&this->__pad_4C[320] = 0; /*0x595b98*/
  }
  this->__pad_4C[329] = 0; /*0x595ba0*/
  *(_DWORD *)&this->__pad_4C[324] = 0; /*0x595ba6*/
  LoadOptions::Cleanup(); /*0x595bac*/
}
}
// 0x596E50
namespace gamemd {
int RandomMap::SetupDialog(HWND hDlg)
{
  HWND i; // edi
  LPARAM v3; // ebp
  int *p_LoopStart; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  wchar_t *v7; // eax
  LRESULT v8; // eax
  HWND j; // edi
  LPARAM v10; // ebp
  wchar_t **p_Next; // ebx
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
  RandomMap *v28; // ebp
  wchar_t *v29; // eax
  LRESULT v30; // eax
  HWND n; // edi
  char *pad_2A0; // ebx
  wchar_t *v33; // eax
  LRESULT v34; // eax
  wchar_t *v35; // eax
  LRESULT v36; // eax
  HWND DlgItem; // edi
  HWND v38; // eax
  LPARAM v39; // ebx
  HWND v40; // edi
  int result; // eax
  LPARAM lParama; // [esp+10h] [ebp-4h]

  SettingsClass::ClampValues(); /*0x596e59*/
  for ( i = GetDlgItem(hDlg, 1002); SendMessageA(i, 0x146u, 0, 0) > 0; SendMessageA(i, 0x144u, 0, 0) ) /*0x596e76*/
    ; /*0x596e90*/
  v3 = 0; /*0x596ea2*/
  p_LoopStart = &stru_82ADA8.LoopStart; /*0x596ea4*/
  do /*0x596edb*/
  {
    StringCSF = GetStringCSF((wchar_t *)*p_LoopStart, 0, &stru_82BA00.?[11], 4883); /*0x596eb7*/
    v6 = SendMessageA(i, 0x4C2u, 0, (LPARAM)StringCSF); /*0x596ec5*/
    SendMessageA(i, 0x151u, v6, v3); /*0x596ecf*/
    ++p_LoopStart; /*0x596ed1*/
    ++v3; /*0x596ed4*/
  }
  while ( (int)p_LoopStart < (int)&stru_82ADA8.Next ); /*0x596edb*/
  v7 = GetStringCSF( /*0x596ef7*/
         *((wchar_t **)&stru_82ADA8.LoopStart + (int)this->RandomMap_field_0x48),
         0,
         &stru_82BA00.?[11],
         4887);
  v8 = SendMessageA(i, 0x4BEu, 0, (LPARAM)v7); /*0x596f05*/
  SendMessageA(i, 0x14Eu, v8, 0); /*0x596f10*/
  for ( j = GetDlgItem(hDlg, 1030); SendMessageA(j, 0x146u, 0, 0) > 0; SendMessageA(j, 0x144u, 0, 0) ) /*0x596f24*/
    ; /*0x596f3e*/
  v10 = 0; /*0x596f50*/
  p_Next = (wchar_t **)&stru_82ADA8.Next; /*0x596f52*/
  do /*0x596f89*/
  {
    v12 = GetStringCSF(*p_Next, 0, &stru_82BA00.?[11], 4898); /*0x596f65*/
    v13 = SendMessageA(j, 0x4C2u, 0, (LPARAM)v12); /*0x596f73*/
    SendMessageA(j, 0x151u, v13, v10); /*0x596f7d*/
    ++p_Next; /*0x596f7f*/
    ++v10; /*0x596f82*/
  }
  while ( (int)p_Next < (int)&stru_82ADA8.TranslucencyDetailLevel ); /*0x596f89*/
  v14 = GetStringCSF(*((wchar_t **)&stru_82ADA8.Next + *(_DWORD *)&this->__pad_4C[24]), 0, &stru_82BA00.?[11], 4902); /*0x596fa5*/
  v15 = SendMessageA(j, 0x4BEu, 0, (LPARAM)v14); /*0x596fb3*/
  SendMessageA(j, 0x14Eu, v15, 0); /*0x596fbe*/
  for ( k = GetDlgItem(hDlg, 1029); SendMessageA(k, 0x146u, 0, 0) > 0; SendMessageA(k, 0x144u, 0, 0) ) /*0x596fd2*/
    ; /*0x596fec*/
  v17 = 1; /*0x596ffe*/
  v18 = (wchar_t **)&stru_82ADA8.?[19]; /*0x597003*/
  do /*0x59703a*/
  {
    v19 = GetStringCSF(*v18, 0, &stru_82BA00.?[11], 4914); /*0x597016*/
    v20 = SendMessageA(k, 0x4C2u, 0, (LPARAM)v19); /*0x597024*/
    SendMessageA(k, 0x151u, v20, v17); /*0x59702e*/
    ++v18; /*0x597030*/
    ++v17; /*0x597033*/
  }
  while ( (int)v18 < (int)stru_82ADA8.__pad_2A0 ); /*0x59703a*/
  v21 = GetStringCSF((wchar_t *)stru_82ADA8.?[this->RandomMap_field_0x3C[0] + 18], 0, &stru_82BA00.?[11], 4918); /*0x597056*/
  v22 = SendMessageA(k, 0x4BEu, 0, (LPARAM)v21); /*0x597064*/
  SendMessageA(k, 0x14Eu, v22, 0); /*0x59706f*/
  for ( m = GetDlgItem(hDlg, 1031); SendMessageA(m, 0x146u, 0, 0) > 0; SendMessageA(m, 0x144u, 0, 0) ) /*0x597083*/
    ; /*0x59709d*/
  v24 = 0; /*0x5970af*/
  v25 = (wchar_t *)"Name:Temperate"; /*0x5970b1*/
  do /*0x5970e8*/
  {
    v26 = GetStringCSF(v25, 0, &stru_82BA00.?[11], 4930); /*0x5970c4*/
    v27 = SendMessageA(m, 0x4C2u, 0, (LPARAM)v26); /*0x5970d2*/
    SendMessageA(m, 0x151u, v27, v24); /*0x5970dc*/
    v25 += 56; /*0x5970de*/
    ++v24; /*0x5970e1*/
  }
  while ( (int)v25 < (int)"Name:Urban" ); /*0x5970e8*/
  v28 = this; /*0x5970ea*/
  v29 = GetStringCSF((wchar_t *)&aNameTemperate[56 * this->RandomMap_field_0x38[0]], 0, &stru_82BA00.?[11], 4934); /*0x59710f*/
  v30 = SendMessageA(m, 0x4BEu, 0, (LPARAM)v29); /*0x59711d*/
  SendMessageA(m, 0x14Eu, v30, 0); /*0x597128*/
  for ( n = GetDlgItem(hDlg, 1032); SendMessageA(n, 0x146u, 0, 0) > 0; SendMessageA(n, 0x144u, 0, 0) ) /*0x59713c*/
    ; /*0x597156*/
  lParama = 0; /*0x597168*/
  pad_2A0 = stru_82ADA8.__pad_2A0; /*0x597170*/
  do /*0x5971b3*/
  {
    v33 = GetStringCSF(*(wchar_t **)pad_2A0, 0, &stru_82BA00.?[11], 4945); /*0x597183*/
    v34 = SendMessageA(n, 0x4C2u, 0, (LPARAM)v33); /*0x597191*/
    SendMessageA(n, 0x151u, v34, lParama); /*0x59719f*/
    pad_2A0 += 4; /*0x5971a5*/
    ++lParama; /*0x5971af*/
  }
  while ( (int)pad_2A0 < (int)&stru_82ADA8.Rate ); /*0x5971b3*/
  v35 = GetStringCSF(*(wchar_t **)&stru_82ADA8.__pad_2A0[4 * v28->RandomMap_field_0x40[0]], 0, &stru_82BA00.?[11], 4949); /*0x5971cb*/
  v36 = SendMessageA(n, 0x4BEu, 0, (LPARAM)v35); /*0x5971d9*/
  SendMessageA(n, 0x14Eu, v36, 0); /*0x5971e4*/
  DlgItem = GetDlgItem(hDlg, 1019); /*0x5971f9*/
  sprintf((char *const)&g_MissionQueueFrame.localVariables[135], "%d", *(_DWORD *)&v28->__pad_4C[40]); /*0x597206*/
  SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_MissionQueueFrame.localVariables[135]); /*0x59721b*/
  v38 = GetDlgItem(hDlg, 1003); /*0x597223*/
  v39 = *(_DWORD *)&v28->__pad_4C[4]; /*0x597229*/
  v40 = v38; /*0x597231*/
  SendMessageA(v38, 0x406u, 1u, 524290); /*0x59723b*/
  result = SendMessageA(v40, 0x405u, 1u, v39); /*0x597246*/
  *(_DWORD *)&v28->__pad_4C[4] = v39; /*0x597249*/
  return result; /*0x597248*/
}
}
// 0x597D60
namespace gamemd {
AbstractClass * * RandomMap::LoadInfo(wchar_t * Destination, int a2)
{
  char *v2; // edi
  INIClass v4; // [esp+Ch] [ebp-1ACh] BYREF
  CCFileClass v5; // [esp+4Ch] [ebp-16Ch] BYREF
  int v6[3]; // [esp+A4h] [ebp-114h] BYREF
  int v7; // [esp+B0h] [ebp-108h]
  wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

  if ( !Destination ) /*0x597d74*/
    return 0; /*0x597d74*/
  if ( !a2 ) /*0x597d83*/
    return 0; /*0x597d83*/
  v2 = (char *)(a2 + 44); /*0x597d89*/
  if ( !_strcmpi((char *)(a2 + 44), &stru_82BA00.?) || !_strcmpi(v2, &stru_82BA00.?[17]) ) /*0x597da8*/
    return 0; /*0x597db2*/
  CCFileClass::Construct(&v5, v2); /*0x597dbd*/
  v4.headNode[0] = 0; /*0x597dc6*/
  v4.headNode[1] = 0; /*0x597dca*/
  GenericNode::Constructor((GenericNode *)v4.sectionHead); /*0x597dce*/
  GenericNode::Constructor((GenericNode *)&v4.sectionCount); /*0x597dd7*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x597ded*/
  v4.headNode[2] = (int)&(void*)(void*)&List_INIClass_INISection___vftable; /*0x597dfc*/
  memset(&v4.__pad_20[8], 0, 13); /*0x597e04*/
  v4.unknown38 = 0; /*0x597e14*/
  v4.INIClass_field_3C = 0; /*0x597e18*/
  *(_DWORD *)v4.__pad_0 = &(void*)(void*)&INIClass_vftable; /*0x597e1c*/
  if ( !FileStraw::Open((FileStraw *)&v4, (int)&v5, 0) ) /*0x597e2b*/
  {
    HashTable::DestroyHashTableINIClass(&v4); /*0x597f38*/
    *(_DWORD *)v5.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x597f44*/
    v7 = 0; /*0x597f4c*/
    Vector::Clear((int)v6); /*0x597f53*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x597f5c*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x597f64*/
    return 0; /*0x597f6b*/
  }
  if ( INIClass::ParseValue_Wide( /*0x597e58*/
         &v4,
         (unsigned __int8 *)&stru_82BA00.?[8],
         (unsigned __int8 *)&stru_81AF8C.?[5],
         &g_TypeClass_DefaultString,
         Source,
         0x80u) <= 0 )
  {
    *(_WORD *)Destination->__pad_0 = 0; /*0x597e7f*/
    *((_BYTE *)Destination + 437) = 1; /*0x597e82*/
    *((_BYTE *)Destination + 436) = 0; /*0x597e89*/
  }
  else
  {
    wcsncpy((wchar_t *)Destination, Source, 0x80u); /*0x597e68*/
    *((_BYTE *)Destination + 437) = 0; /*0x597e70*/
    *((_BYTE *)Destination + 436) = 1; /*0x597e76*/
  }
  *((_DWORD *)Destination + 72) = 0; /*0x597e9a*/
  *((_DWORD *)Destination + 73) = 0; /*0x597ea0*/
  strncpy((char *)Destination + 256, v2, 0x20u); /*0x597ea6*/
  if ( !strlen((const char *)Destination + 256) ) /*0x597ead*/
    strncpy((char *)Destination + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
  *((_DWORD *)Destination + 108) = *(_DWORD *)(a2 + 24); /*0x597ee5*/
  *((_DWORD *)Destination + 107) = *(_DWORD *)(a2 + 20); /*0x597eee*/
  HashTable::DestroyHashTableINIClass(&v4); /*0x597ef4*/
  *(_DWORD *)v5.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x597f00*/
  v7 = 0; /*0x597f08*/
  Vector::Clear((int)v6); /*0x597f0f*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x597f18*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x597f20*/
  return 1; /*0x597f26*/
}
}
// 0x5981F0
namespace gamemd {
WeaponStruct * * RandomMap::LoadConfig()
{
  INIClass *v2; // eax
  INIClass *v3; // edi
  int v4; // eax
  int v5; // edx
  int Int_Overwrite; // eax
  int v7; // edx
  DynamicVectorClass *v8; // eax
  DynamicVectorClass *v9; // eax
  DynamicVectorClass *v10; // eax
  DynamicVectorClass *v11; // eax
  DynamicVectorClass *v12; // eax
  DynamicVectorClass *v13; // eax
  DynamicVectorClass *v14; // eax
  DynamicVectorClass *v15; // eax
  DynamicVectorClass *v16; // eax
  DynamicVectorClass *v17; // eax
  DynamicVectorClass *v18; // eax
  char *i; // eax
  int v20; // esi
  char *j; // eax
  AbstractClass *DynamicVector_field_0x1C; // esi
  DynamicVectorClass v24; // [esp-1Ch] [ebp-15Ch] BYREF
  int v25; // [esp-4h] [ebp-144h]
  DynamicVectorClass *IntList; // [esp+10h] [ebp-130h] BYREF
  DynamicVector v27; // [esp+14h] [ebp-12Ch] BYREF
  int v28; // [esp+50h] [ebp-F0h]
  CCFileClass v29; // [esp+54h] [ebp-ECh] BYREF
  char String[128]; // [esp+C0h] [ebp-80h] BYREF

  CCFileClass::Construct(&v29, (char *)&stru_82BA00.?[1]); /*0x598205*/
  v2 = (INIClass *)RA2_OPNEW(0x58u); /*0x59820c*/
  v3 = v2; /*0x598211*/
  if ( v2 ) /*0x598218*/
  {
    INIClass::INIClass(v2); /*0x59821c*/
    v3[1].__pad_0[0] = 0; /*0x598221*/
    *(_DWORD *)v3->__pad_0 = &CCINIClass_Vtable; /*0x598225*/
  }
  else
  {
    v3 = 0; /*0x59822d*/
  }
  INIClass::ResetSection(v3); /*0x598231*/
  CCINIClass::Load((CCINIClass *)v3, (int)&v29, 0, 0); /*0x598241*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[316] + 12))(&this->__pad_4C[316]); /*0x598254*/
  (*(void (__thiscall **)(char *))(this->u32_284 + 12))((char *)&this->q1004); /*0x598265*/
  (*(void (__thiscall **)(char *))(this->u32_2A0 + 12))((char *)&this->u32_10C2); /*0x598274*/
  v4 = this->u32_2C4; /*0x598277*/
  *(_DWORD *)v27.__pad_20 = (char *)this + 708; /*0x598283*/
  (*(void (**)(void))(v4 + 12))(); /*0x598287*/
  v5 = this->u32_B8; /*0x59828a*/
  v27.DynamicVector_field_0x1C = (AbstractClass *)((char *)&this->u32_1246); /*0x598296*/
  (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[344] + 12))(&this->__pad_4C[344]); /*0x5982a9*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[372] + 12))(&this->__pad_4C[372]); /*0x5982b8*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5982d0*/
                    (bool *)v3->__pad_0,
                    off_82B134,
                    (unsigned __int8 *)&stru_82BA00.?,
                    this->u32_2BC);
  v7 = this->u32_2C0; /*0x5982d5*/
  this->u32_2BC = Int_Overwrite; /*0x5982db*/
  this->u32_2C0 = INIClass::ReadInt_Overwrite( /*0x5982f7*/
                              (bool *)v3->__pad_0,
                              off_82B134,
                              (unsigned __int8 *)&stru_82BA00.?[1],
                              v7);
  IntList = &v24; /*0x598300*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[316]); /*0x598304*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x598316*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59832e*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[316], IntList); /*0x598332*/
  v8 = IntList; /*0x598337*/
  *(_DWORD *)&this->__pad_4C[332] = IntList->Count; /*0x59833e*/
  *(_DWORD *)&this->__pad_4C[336] = v8->CapacityIncrement; /*0x598344*/
  *(_DWORD *)&this->__pad_4C[340] = *(_DWORD *)v8[1].VectorClass; /*0x59834a*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x598356*/
  VectorClass::Destroy((int)&v27); /*0x59835a*/
  IntList = &v24; /*0x598364*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)&this->u32_401); /*0x598369*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x59837b*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598393*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 23, IntList); /*0x598397*/
  v9 = IntList; /*0x59839c*/
  this->u32_294 = IntList->Count; /*0x5983a3*/
  this->u32_298 = v9->CapacityIncrement; /*0x5983a9*/
  this->u32_29C = *(_DWORD *)v9[1].VectorClass; /*0x5983b3*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x5983b6*/
  VectorClass::Destroy((int)&v27); /*0x5983ba*/
  IntList = &v24; /*0x5983cb*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)&this->u32_408); /*0x5983cf*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x5983e1*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5983f9*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->q060, IntList); /*0x5983fd*/
  v10 = IntList; /*0x598402*/
  this->u32_AC = IntList->Count; /*0x598409*/
  this->u32_2B4 = v10->CapacityIncrement; /*0x59840f*/
  this->u32_2B8 = *(_DWORD *)v10[1].VectorClass; /*0x598419*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x59841c*/
  VectorClass::Destroy((int)&v27); /*0x598420*/
  IntList = &v24; /*0x598431*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[344]); /*0x598435*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x598447*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59845f*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[5],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[344], IntList); /*0x598463*/
  v11 = IntList; /*0x598468*/
  *(_DWORD *)&this->__pad_4C[360] = IntList->Count; /*0x59846f*/
  *(_DWORD *)&this->__pad_4C[364] = v11->CapacityIncrement; /*0x598475*/
  *(_DWORD *)&this->__pad_4C[368] = *(_DWORD *)v11[1].VectorClass; /*0x59847b*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x59847e*/
  VectorClass::Destroy((int)&v27); /*0x598486*/
  IntList = &v24; /*0x598497*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[372]); /*0x59849b*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x5984ad*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5984c5*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[372], IntList); /*0x5984c9*/
  v12 = IntList; /*0x5984ce*/
  *(_DWORD *)&this->__pad_4C[388] = IntList->Count; /*0x5984d5*/
  *(_DWORD *)&this->__pad_4C[392] = v12->CapacityIncrement; /*0x5984db*/
  *(_DWORD *)&this->__pad_4C[396] = *(_DWORD *)v12[1].VectorClass; /*0x5984e5*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x5984e8*/
  VectorClass::Destroy((int)&v27); /*0x5984ec*/
  IntList = &v24; /*0x5984fd*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[400]); /*0x598501*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x598513*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59852b*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[2],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[400], IntList); /*0x59852f*/
  v13 = IntList; /*0x598534*/
  *(_DWORD *)&this->__pad_4C[416] = IntList->Count; /*0x59853b*/
  *(_DWORD *)&this->__pad_4C[420] = v13->CapacityIncrement; /*0x598541*/
  *(_DWORD *)&this->__pad_4C[424] = *(_DWORD *)v13[1].VectorClass; /*0x59854b*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x59854e*/
  VectorClass::Destroy((int)&v27); /*0x598552*/
  IntList = &v24; /*0x598563*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[428]); /*0x598567*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x598579*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598591*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[428], IntList); /*0x598595*/
  v14 = IntList; /*0x59859a*/
  *(_DWORD *)&this->__pad_4C[444] = IntList->Count; /*0x5985a1*/
  this->RandomMap_field_0x20C = (void *)v14->CapacityIncrement; /*0x5985a7*/
  this->q084 = *(_DWORD *)v14[1].VectorClass; /*0x5985b1*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x5985b4*/
  VectorClass::Destroy((int)&v27); /*0x5985b8*/
  IntList = &v24; /*0x5985c9*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)&this->u8_343); /*0x5985cd*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x5985df*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5985f7*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->u32_4C, IntList); /*0x5985fb*/
  v15 = IntList; /*0x598600*/
  this->u32_224 = IntList->Count; /*0x598607*/
  this->u32_228 = v15->CapacityIncrement; /*0x59860d*/
  this->u32_22C = *(_DWORD *)v15[1].VectorClass; /*0x598617*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x59861a*/
  VectorClass::Destroy((int)&v27); /*0x59861e*/
  IntList = &v24; /*0x59862f*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)&this->u32_380); /*0x598633*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x598645*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59865d*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->q050, IntList); /*0x598661*/
  v16 = IntList; /*0x598666*/
  this->u32_240 = IntList->Count; /*0x59866d*/
  this->u32_244 = v16->CapacityIncrement; /*0x598673*/
  this->u32_248 = *(_DWORD *)v16[1].VectorClass; /*0x59867d*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x598680*/
  VectorClass::Destroy((int)&v27); /*0x598684*/
  IntList = &v24; /*0x598695*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)&this->u32_387); /*0x598699*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x5986ab*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5986c3*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->q054, IntList); /*0x5986c7*/
  v17 = IntList; /*0x5986cc*/
  this->u32_25C = IntList->Count; /*0x5986d3*/
  this->u32_98 = v17->CapacityIncrement; /*0x5986d9*/
  this->u32_264 = *(_DWORD *)v17[1].VectorClass; /*0x5986df*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x5986e8*/
  if ( *(_DWORD *)&v27.DynamicVector_field_0x1[3] && v27.__pad_C[1] ) /*0x5986f4*/
    RA2_OPDEL(*(void **)&v27.DynamicVector_field_0x1[3]); /*0x5986f7*/
  IntList = &v24; /*0x59870b*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)&this->u32_3C4); /*0x59870f*/
  *(_DWORD *)IntList->VectorClass = &(void*)(void*)&TypeList_int_vftable; /*0x598721*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598739*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[10],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->Count, IntList); /*0x59873d*/
  v18 = IntList; /*0x598742*/
  this->u32_278 = IntList->Count; /*0x598749*/
  this->u32_27C = v18->CapacityIncrement; /*0x59874f*/
  this->u32_A0 = *(_DWORD *)v18[1].VectorClass; /*0x598759*/
  *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_int_vftable; /*0x59875c*/
  VectorClass::Destroy((int)&v27); /*0x598760*/
  this->u32_2FC = INIClass::ReadInt_Overwrite( /*0x59877f*/
                              (bool *)v3->__pad_0,
                              off_82B134,
                              (unsigned __int8 *)&stru_82BA00.?[16],
                              this->u32_2FC);
  if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?, &g_INI_DefaultBuffer, String, 128) ) /*0x5987a5*/
  {
    TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x5987b7*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x5987d3*/
    {
      if ( !*i ) /*0x5987d5*/
        break; /*0x5987d8*/
      IntList = (DynamicVectorClass *)BuildingTypeClass::FindOrCreate(i); /*0x5987e3*/
      if ( IntList ) /*0x5987e7*/
        DynamicVector::Add_Alt3(&v27, &IntList); /*0x5987f2*/
    }
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x598813*/
    *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x59881c*/
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27); /*0x598820*/
    v20 = *(_DWORD *)v27.__pad_20; /*0x598825*/
  }
  else
  {
    v20 = *(_DWORD *)v27.__pad_20; /*0x59882b*/
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], *(_DWORD **)v27.__pad_20); /*0x598834*/
  }
  DynamicVector::Copy((DynamicVector *)v20, &v27.__pad_20[4]); /*0x598840*/
  *(_DWORD *)(v20 + 24) = v28; /*0x59884d*/
  *(_DWORD *)&v27.__pad_20[4] = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x598850*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4]); /*0x598854*/
  if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?[15], &g_INI_DefaultBuffer, String, 128) ) /*0x598879*/
  {
    TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x598886*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x5988a2*/
    {
      if ( !*j ) /*0x5988a4*/
        break; /*0x5988a7*/
      IntList = (DynamicVectorClass *)BuildingTypeClass::FindOrCreate(j); /*0x5988b2*/
      if ( IntList ) /*0x5988b6*/
        DynamicVector::Add_Alt3(&v27, &IntList); /*0x5988c1*/
    }
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x5988e2*/
    *(_DWORD *)v27.__pad_0 = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5988eb*/
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27); /*0x5988ef*/
    DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988f4*/
  }
  else
  {
    DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988fa*/
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27.DynamicVector_field_0x1C->vtable0); /*0x598903*/
  }
  DynamicVector::Copy((DynamicVector *)DynamicVector_field_0x1C, &v27.__pad_20[4]); /*0x59890f*/
  *(_DWORD *)&v27.__pad_20[4] = &(void*)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x598918*/
  DynamicVector_field_0x1C->v28 = v28; /*0x59891c*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4]); /*0x598923*/
  if ( v3 ) /*0x59892a*/
    (**(void (__thiscall ***)(INIClass *, int))v3->__pad_0)(v3, 1); /*0x598932*/
  CCFileClass::Reset(&v29); /*0x598938*/
  return CCFileClass::Destruct(&v29); /*0x598946*/
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
  void (__stdcall *v24)(HWND, UINT, WPARAM, LPARAM); // esi
  int ii; // eax
  int jj; // eax
  unsigned int *v28; // eax
  int kk; // eax
  int mm; // edi
  unsigned int *v31; // esi
  int v32; // eax
  HWND v34; // eax
  bool v35; // [esp+11h] [ebp-415h]
  unsigned int *v36; // [esp+12h] [ebp-414h] BYREF
  unsigned int v38[6]; // [esp+1Ah] [ebp-40Ch] BYREF
  int v39[253]; // [esp+32h] [ebp-3F4h] BYREF

  if ( off_82AF14 ) /*0x598977*/
    off_82AF14(); /*0x598979*/
  qmemcpy(&g_Randomizer, SeedInitRNG(v39, *(&this->q0089)), 0x3F4u); /*0x59899b*/
  IDA_LOBYTE(v38[0]) = 0; /*0x5989ab*/
  v38[2] = 0; /*0x5989af*/
  v38[3] = 0; /*0x5989b7*/
  v38[4] = sub_598000; /*0x5989bf*/
  qmemcpy(&g_TileSystemInit, v38, 0x18u); /*0x5989c9*/
  if ( off_82AF14 ) /*0x5989cb*/
    off_82AF14(); /*0x5989cd*/
  v35 = *((unsigned char *)g_ScenarioClass_Instance + 13720) == 0; /*0x5989e7*/
  if ( !*((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x5989dc*/
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
  RandomMap::LoadConfig(); /*0x598ade*/
  Debug::Log(); /*0x598ae8*/
  v5 = *(&this->q0045); /*0x598aed*/
  if ( v5 == 3 || v5 == 4 ) /*0x598afb*/
  {
    if ( *(&this->q0049) ) /*0x598b06*/
      RandomMap::GrowTiberium(); /*0x598b0d*/
  }
  else
  {
    RandomMap::FinalizeMapData(); /*0x598aff*/
  }
  FindMapCell(); /*0x598b14*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x598b1e*/
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
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x598ba4*/
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
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x598c40*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x598c45*/
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
    g_RandomMap_TerrainState = g_RandomMap_TerrainState; /*0x598ca4*/
    v12 = *((unsigned int *)g_RandomMap_TerrainState + j); /*0x598caa*/
    if ( v12->q014 ) /*0x598cad*/
    {
      v13 = this->q03C; /*0x598cb6*/
      v14 = v13 == 3 || v13 == 4; /*0x598cc7*/
      RandomMap::CollectTerrainCells((v12->q00C > 8000) + !v14 + 4); /*0x598ce4*/
      RandomMap::PlaceRandomMapTerrain(v12); /*0x598ceb*/
    }
  }
  IDA_LOBYTE(g_RandomMap_TerrainState) = 0; /*0x598cfa*/
  Map_Helper_58D010(g_RandomMap_TerrainState); /*0x598cfc*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x598d07*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 164); /*0x598d19*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 65.0, NAN); /*0x598d34*/
  if ( off_82AF14 ) /*0x598d40*/
    off_82AF14(); /*0x598d42*/
  Debug::Log(); /*0x598d49*/
  v15 = this->q03C; /*0x598d55*/
  if ( v15 == 4 || v15 == 3 ) /*0x598d60*/
  {
    BuildRandomMapTiles(); /*0x598d62*/
    ResetMapState(); /*0x598d67*/
    ProcessRandomMapCellAdjacency(); /*0x598d6e*/
    CreateMapObject(0, -1); /*0x598d7b*/
    MapClass::FindPassableNeighbor(); /*0x598d82*/
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x598d8d*/
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
  RandomMap::PlaceShoreObjects(); /*0x598e1a*/
  Debug::Log(); /*0x598e24*/
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x598e31*/
  for ( k = LayerClass::CellIteratorNext(&MapClass_Instance); k; k = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x598e42*/
    House::AnnounceUpgrade(k, -1); /*0x598e48*/
  if ( off_82AF14 ) /*0x598e62*/
    off_82AF14(); /*0x598e64*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x598e6c*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 174); /*0x598e7e*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 75.0, NAN); /*0x598e99*/
  Debug::Log(); /*0x598ea3*/
  do /*0x598ebd*/
  {
    while ( !(uint8_t)DistributeRandomMapTerrain() ) /*0x598eb2*/
      ; /*0x598eab*/
  }
  while ( !(uint8_t)SpreadMapSeedTerrainFromWaypoints(this) ); /*0x598ebd*/
  Debug::Log(); /*0x598ec4*/
  if ( this->q03C ) /*0x598ec9*/
    PlaceRandomAIBuildings(); /*0x598ed5*/
  if ( off_82AF14 ) /*0x598ee1*/
    off_82AF14(); /*0x598ee3*/
  Debug::Log(); /*0x598eea*/
  RandomMap::PlaceRandomMapTiberium(); /*0x598ef4*/
  if ( off_82AF14 ) /*0x598f00*/
    off_82AF14(); /*0x598f02*/
  if ( g_MapTileArray ) /*0x598f0a*/
  {
    v17 = g_MapCellWidth * g_MapCellWidth; /*0x598f12*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x598f17*/
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
        (**(void (__thiscall ***)(unsigned int, int))*v20)(*v20, 1); /*0x598f60*/
        *v20 = 0; /*0x598f62*/
      }
      v36 = v20; /*0x598f74*/
      v21 = (*(int (__thiscall **)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x598f78*/
      if ( v21 != -1 ) /*0x598f7e*/
        Vector4::EraseAt(v21); /*0x598f86*/
      v22 = (void *)v20[11]; /*0x598f8b*/
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
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x598fd0*/
  for ( n = LayerClass::CellIteratorNext(&MapClass_Instance); n; n = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x598fe1*/
    House::AnnounceUpgrade(n, -1); /*0x598fe7*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x598fff*/
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
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x5990a4*/
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
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x59913c*/
  for ( ii = LayerClass::CellIteratorNext(&MapClass_Instance); ii; ii = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x59914d*/
    House::AnnounceUpgrade(ii, -1); /*0x599153*/
  if ( off_82AF14 ) /*0x59916d*/
    off_82AF14(); /*0x59916f*/
  Debug::Log(); /*0x599176*/
  GenerateTerrainHeightMap(); /*0x599184*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x59918f*/
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
  if ( this->u32_38 ) /*0x59921f*/
  {
    LayerClass::CellIteratorReset(&MapClass_Instance); /*0x59923e*/
    for ( jj = LayerClass::CellIteratorNext(&MapClass_Instance); jj; jj = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x59924f*/
    {
      v36 = *(unsigned int **)(jj + 36); /*0x59925a*/
      v28 = (char *)g_MapTileArray + 80 * (int16_t)v36 + 80 * g_MapCellWidth * IDA_SHIWORD(v36); /*0x59927b*/
      v28[10] = 1202590843; /*0x599283*/
      v28[11] = 1064598241; /*0x599286*/
      v28[8] = -755914244; /*0x599295*/
      v28[9] = 1062232653; /*0x599298*/
    }
    RandomMap::GenerateRandomMapTerrain(); /*0x5992ab*/
  }
  else
  {
    CellClass::Reset(); /*0x59922b*/
    RandomMap::PlaceResources(); /*0x599232*/
  }
  if ( off_82AF14 ) /*0x5992b7*/
    off_82AF14(); /*0x5992b9*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x5992c1*/
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
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x599366*/
  for ( kk = LayerClass::CellIteratorNext(&MapClass_Instance); kk; kk = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x599377*/
    House::AnnounceUpgrade(kk, -1); /*0x59937d*/
  if ( off_82AF14 ) /*0x599397*/
    off_82AF14(); /*0x599399*/
  BuildingClass::ClearOccupancyData(); /*0x59939b*/
  BuildingClass::ClearFactoryData(); /*0x5993a0*/
  Debug::Log(); /*0x5993aa*/
  this->q304 = 0; /*0x5993af*/
  this->q308 = 0; /*0x5993b5*/
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
        (**(void (__thiscall ***)(unsigned int, int))*v31)(*v31, 1); /*0x5993fa*/
        *v31 = 0; /*0x5993fc*/
      }
      v36 = v31; /*0x59940e*/
      v32 = (*(int (__thiscall **)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x599412*/
      if ( v32 != -1 ) /*0x599418*/
        Vector4::EraseAt(v32); /*0x599420*/
      Buffer::Cleanup((int)(v31 + 10)); /*0x59942e*/
      RA2_OPDEL(v31); /*0x599434*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x599446*/
  MapClass::PostProcessReveal(1); /*0x59944c*/
  Debug::Log(); /*0x599456*/
  Shroud::ProcessCellVisibility(&MapClass_Instance, (int)&dword_87F8E4); /*0x599468*/
  RadarClass::RecreateSurface((int)&MapClass_Instance, 0); /*0x599472*/
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x59947e*/
    Multiplayer::ShowProgress(&g_GameMode_Current, 199); /*0x599490*/
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 100.0, NAN); /*0x5994ab*/
  Debug::Log(); /*0x5994b5*/
  v35 = v35; /*0x5994ba*/
  if ( v35 ) /*0x5994c3*/
  {
    v34 = GetDlgItem(hDlg, 1592); /*0x5994d2*/
    if ( v34 ) /*0x5994da*/
      ShowWindow(v34, 0); /*0x5994de*/
    if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) ) /*0x5994ea*/
      Multiplayer::ShowProgress(&g_GameMode_Current, 99); /*0x5994f9*/
    else
      Network::UpdateLatencyDisplay((int)g_UIManager, 0, 0.0, NAN); /*0x599510*/
    return VtableStub::643E70(g_UIManager); /*0x59951a*/
  }
}
}
// 0x599650
namespace gamemd {
AbstractClass * * RandomMap::SetupTheater(char a2)
{
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  double v9; // rdi
  int *Waypoint_Location; // eax
  int16_t *v12; // eax
  unsigned int *WorldCoords; // eax
  MapResourceClass *v15; // esi
  ObjectClass *v17; // eax
  unsigned int *v18; // eax
  MapResourceClass v19; // ecx
  int v20; // edi
  IUnknown *v21; // eax
  IPersistStream *v29; // eax
  int i; // eax
  ObjectClass *j; // eax
  int k; // eax
  int m; // eax
  int n; // eax
  int *v39; // eax
  int16_t *v40; // eax
  unsigned int *v41; // eax
  unsigned int *v42; // eax
  int v43; // esi
  MapResourceClass *v44; // edi
  IUnknown *v45; // eax
  int v51; // esi
  char *v52; // eax
  int ii; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  wchar_t *StringCSF; // eax
  void *v66; // [esp+18h] [ebp-B0h]
  bool v67; // [esp+27h] [ebp-A1h]
  float v68; // [esp+28h] [ebp-A0h]
  int v70; // [esp+28h] [ebp-A0h]
  int jj; // [esp+28h] [ebp-A0h]
  MapResourceClass *v72; // [esp+2Ch] [ebp-9Ch] BYREF
  double v73[2]; // [esp+30h] [ebp-98h] BYREF
  MapResourceClass *v74; // [esp+40h] [ebp-88h]
  int v75[2]; // [esp+44h] [ebp-84h] BYREF
  int v76; // [esp+4Ch] [ebp-7Ch]
  int v78[4]; // [esp+54h] [ebp-74h] BYREF
  void *v79[3]; // [esp+64h] [ebp-64h] BYREF
  int v80[7]; // [esp+70h] [ebp-58h] BYREF
  unsigned int v81[6]; // [esp+8Ch] [ebp-3Ch] BYREF
  char v82; // [esp+A4h] [ebp-24h]
  int v83[3]; // [esp+BCh] [ebp-Ch] BYREF

  v74 = (MapResourceClass *)this;
  *(float *)&v72 = (double)this->q190 * 0.33333334;
  v68 = (double)*(&this->q0086) * 0.33333334;
  RandomMap::LoadConfig();
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
  *(&this->u32_247) = v6;
  v78[0] = 0;
  v78[1] = 0;
  v78[3] = v6 + 12;
  v75[0] = 2;
  v75[1] = 5;
  v6 = v6;
  *(&this->u32_4C5) = 4;
  v79[1] = 0;
  v79[2] = 0;
  INISectionList::Constructor(v80);
  Node_flat::Init(v81);
  v81[5] = 0;
  v82 = 0;
  v79[0] = &CCINIClass_Vtable;
  INIClass::ClearSection((int)v79, 0, 0);
  v7 = this->q038;
  *(&this->u32_4C5) = 4;
  INIClass::SetString((char *)v79, (uint8_t *)&DataGlobal_81FFF0, unk_818658, &Theater_Array[112 * v7]);
  INIClass::SetRect((char *)v79, (uint8_t *)&DataGlobal_81FFF0, g_INI_Key_Size, v78);
  INIClass::SetRect((char *)v79, (uint8_t *)&DataGlobal_81FFF0, g_INI_Key_LocalSize, v75);
  INIClass::SetInt((char *)v79, (uint8_t *)&DataGlobal_81FFF0, aLevel, *(&this->u32_4C5), 0);
  INIClass::SetString(
    (char *)v79,
    (uint8_t *)(*(unsigned int *)g_SuperWeaponTypeCount + 36),
    aTechlevel,
    DataGlobal_82BFAC);
  INIClass::SetString(
    (char *)v79,
    (uint8_t *)g_INI_Key_Basic,
    g_INI_Key_Player,
    (char *)(*(unsigned int *)g_SuperWeaponTypeCount + 36));
  if ( this->q038 )
    v8 = this->q1C4;
  else
    v8 = this->q1A8;
  v73[0] = (double)*(int *)(v8 + 4 * this->q048) * 0.01;
  v9 = v73[0];
  INIClass::SetDouble((char *)v79, (uint8_t *)g_INI_Key_Lighting, g_INI_Key_Ambient, v73[0]);
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
  if ( !*((unsigned char *)g_ScenarioClass_Instance + 13720) )
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
    PostLoadInitScenario(IDA_SLODWORD(v9));
  int v69; // [esp+28h] [ebp-A0h]
    IDA_HIWORD(v69) = g_CellPositionOffset / 2 + g_Cell_PositionLUT / 2;
    IDA_LOWORD(v69) = IDA_HIWORD(v69) + 1;
    ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, 700, v69);
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, v73, 700);
    ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, *((unsigned int *)g_ScenarioClass_Instance + 131), *Waypoint_Location);
    v12 = (int16_t *)ScenarioClass::Get_Waypoint_Location(
                       (char *)g_ScenarioClass_Instance,
                       v73,
                       *((unsigned int *)g_ScenarioClass_Instance + 131));
    unsigned int * v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v12);
    v13[80] |= 4u;
    WorldCoords = Cell::GetWorldCoords((int16_t *)g_ScenarioClass_Instance, v73, *((unsigned int *)g_ScenarioClass_Instance + 131));
    TacticalClass::SetPositionThunk((int)WorldCoords);
    goto LABEL_153;
  }
  ScenarioClass::InitTimer((int)g_ScenarioClass_Instance);
  v74 = v74;
  if ( !*(unsigned int *)&v74[95] )
  {
    unsigned int * v16 = operator new(4u);
    if ( v16 )
      v17 = (ObjectClass *)unknown_libname_27(v16);
    ObjectClass *v17 = 0;
    v74[95] = (MapResourceClass)v17;
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 101);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 2.0, NAN);
  v18 = (unsigned int *)v74[94];
  v19 = v74[14];
  v20 = *((unsigned int *)g_ScenarioClass_Instance + 1174);
  IDA_LODWORD(v73[0]) = v19;
  v67 = 1;
  v70 = v20;
  if ( v18 )
  {
    v20 = v18[14];
    v70 = v20;
    if ( v18[25] == *(unsigned int *)&v74[25] && v18[26] == *(unsigned int *)&v74[26] && v20 == v19 )
      v67 = v18[20] != *(unsigned int *)&v74[20];
  }
  v21 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v21 = (IUnknown *)off_82AF14;
    v19 = (MapResourceClass)IDA_LODWORD(v73[0]);
  }
  if ( !*(unsigned int *)&v74[94] || v19 != v20 || v67 )
  {
    int v22 = g_AbstractTypePool - 1;
    if ( g_AbstractTypePool - 1 >= 0 )
    {
      do
      {
        if ( (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)DataGlobal_A8E96C + v22) + 4) + 12))(*((unsigned int *)DataGlobal_A8E96C + v22) + 4) == 18
          && v22 < g_AbstractTypePool )
        {
          int v22 = v22;
          if ( v22 < --g_AbstractTypePool )
          {
            do
            {
              ++v22;
              *((unsigned int *)DataGlobal_A8E96C + v22 - 1) = *((unsigned int *)DataGlobal_A8E96C + v22);
            }
            while ( v22 < g_AbstractTypePool );
          }
        }
        --v22;
      }
      while ( v22 >= 0 );
      v21 = (IUnknown *)off_82AF14;
    }
    if ( v21 )
      v21();
    Game::DestroyAllObjects();
    if ( off_82AF14 )
      off_82AF14();
    int v24 = 0;
    if ( g_TechnoClassCount > 0 )
    {
      int v25 = DataGlobal_A8E970;
      do
      {
        int v26 = *((unsigned int *)g_FrameCounter + v24);
        if ( g_AbstractTypePool < v25 )
          goto LABEL_57;
        if ( !DataGlobal_A8E975 && v25 || DataGlobal_A8E97C <= 0 )
          goto LABEL_59;
        if ( (*(uint8_t (__thiscall **)(int *, int, unsigned int))(DataGlobal_A8E968 + 8))(
               &DataGlobal_A8E968,
               DataGlobal_A8E97C + v25,
               0) )
        {
LABEL_57:
          int v27 = g_AbstractTypePool++;
          *((unsigned int *)DataGlobal_A8E96C + v27) = v26;
        }
        v25 = DataGlobal_A8E970;
LABEL_59:
        ++v24;
      }
      while ( v24 < g_TechnoClassCount );
    }
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
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
    if ( v29 )
      (*(void (__thiscall **)(LPPERSISTSTREAM, int))(v29->u32_20)(v29, 1);
    void * v28 = operator new(0xE18u);
    if ( v28 )
      v29 = (IPersistStream *)TacticalMap::Construct((int)v28);
    IPersistStream *v29 = 0;
    v29 = v29;
    Map_Setup_6DA980();
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 109);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 10.0, NAN);
  for ( i = g_HouseClass_BuildState; g_HouseClass_BuildState > 0; i = g_HouseClass_BuildState )
  {
    int v31 = *((unsigned int *)g_UnitClassPool + i - 1);
    if ( v31 )
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v31 + 32))(v31, 1);
  }
  for ( j = (ObjectClass *)g_BuildingClass_Count; g_BuildingClass_Count > 0; j = (ObjectClass *)g_BuildingClass_Count )
  {
    int v33 = *((unsigned int *)g_InfantryClassLimit + (unsigned int)j - 1);
    if ( v33 )
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v33 + 32))(v33, 1);
  }
  for ( k = g_BuildingProductionState; g_BuildingProductionState > 0; k = g_BuildingProductionState )
  {
    int v35 = *((unsigned int *)g_BuildingClass_InstanceCount + k - 1);
    if ( v35 )
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v35 + 32))(v35, 1);
  }
  for ( m = DataGlobal_A8E998; DataGlobal_A8E998 > 0; m = DataGlobal_A8E998 )
  {
    int v37 = *((unsigned int *)DataGlobal_A8E98C + m - 1);
    if ( v37 )
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v37 + 32))(v37, 1);
  }
  if ( off_82AF14 )
    off_82AF14();
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
  for ( n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); n; n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
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
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 114);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 15.0, NAN);
  MapClass::ProcessRegion(&DataGlobal_87F7E8);
  Terrain::ConnectivityGraph(&DataGlobal_87F7E8);
  MapClass::BuildSubzones(&DataGlobal_87F7E8);
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 119);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 20.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  ScenarioClass::ClearAllWaypoints((char *)g_ScenarioClass_Instance);
  IDA_HIWORD(v72) = g_CellPositionOffset / 2 + g_Cell_PositionLUT / 2;
  IDA_LOWORD(v72) = IDA_HIWORD(v72) + 1;
  ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, 700, (int)v72);
  v39 = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v72, 700);
  ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, 699, *v39);
  v40 = (int16_t *)ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v72, 699);
  v41 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v40);
  v41[80] |= 4u;
  v42 = Cell::GetWorldCoords((int16_t *)g_ScenarioClass_Instance, v83, 699);
  TacticalClass::SetPositionThunk((int)v42);
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 124);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 25.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v43 = IDA_LODWORD(v73[0]);
  ++g_IKnowWhatImDoing;
  if ( IDA_LODWORD(v73[0]) != *((unsigned int *)g_ScenarioClass_Instance + 1174) )
  {
    LoadTheaterClassMIX(IDA_SLODWORD(v73[0]));
    *((unsigned int *)g_ScenarioClass_Instance + 1174) = v43;
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 129);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 30.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v74 = v74;
  if ( !*(unsigned int *)&v74[94] || v43 != v70 || v67 )
  {
    ResetRules(g_RulesClass_Instance);
    ScenarioClass::ReadGlobalVariables((char *)g_ScenarioClass_Instance, (char *)DataGlobal_887048);
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 134);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 35.0, NAN);
  v45 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v45 = (IUnknown *)off_82AF14;
  }
  if ( !*(unsigned int *)&v74[94] || v43 != v70 || v67 )
  {
    if ( !HouseClass_Count )
    {
      int v46 = 0;
      if ( g_SuperWeaponTypeArray > 0 )
      {
        do
        {
          void * v47 = operator new(0x160B8u);
          if ( v47 )
            int v48 = HouseClass::Construct((int)v47, *((unsigned int *)g_SuperWeaponTypeCount + v46));
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
      v45();
    LoadObjectTypeClassTheaterSHP(*((unsigned int *)g_ScenarioClass_Instance + 1174));
    int v49 = *((unsigned int *)g_ScenarioClass_Instance + 1174);
    if ( v49 == dword_822CF8 )
      ResetAllTechnoField776();
    else
      LoadTerrainTypeClassTheatre(v49, 1);
    LoadBuildingTypeClassSHPs(*((unsigned int *)g_ScenarioClass_Instance + 1174));
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
    LoadBuildingTypeClassTheatreSHP(*((unsigned int *)g_ScenarioClass_Instance + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadFactoryClassTheaterSHP(*((unsigned int *)g_ScenarioClass_Instance + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadMapClassIsometricTiles(0, 1);
  }
  dword_822CF8 = *((unsigned int *)g_ScenarioClass_Instance + 1174);
LABEL_153:
  v74 = v74;
  --g_IKnowWhatImDoing;
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 139);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 40.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( g_MapTileArray )
    RA2_OPDEL(g_MapTileArray);
  v51 = unk_89C2DC * unk_89C2DC;
  v52 = (char *)operator new(80 * unk_89C2DC * unk_89C2DC);
  if ( v52 )
  {
    int v53 = v51 - 1;
    if ( v53 >= 0 )
    {
      char * v54 = v52 + 8;
      int v55 = v53 + 1;
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
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
  for ( ii = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); ii; ii = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    IDA_LODWORD(v73[0]) = *(unsigned int *)(ii + 36);
    *((unsigned int *)g_MapTileArray + 20 * SLOWORD(v73[0]) + 20 * unk_89C2DC * IDA_SWORD1(v73[0])) = IDA_LODWORD(v73[0]);
    *(unsigned char *)(ii + 283) = v74[195].__tail_0[0];
  }
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 144);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 45.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  g_MapTileArrayEnd = 0;
  for ( jj = g_RandomMap_TileData - 1; jj >= 0; --jj )
  {
    unsigned int * v57 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + jj);
    if ( v57 )
    {
      if ( *v57 )
      {
        (**(void (__thiscall ***)(unsigned int, int))*v57)(*v57, 1);
        *v57 = 0;
      }
      IDA_LODWORD(v73[0]) = v57;
      int v58 = (*(int (__thiscall **)(int *, double *))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, v73);
      if ( v58 != -1 )
        Vector4::EraseAt(&g_RandomMap_BuildObject, v58);
      void * v59 = (void *)v57[11];
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
  v74[193] = 0;
  v74[194] = 0;
  *(unsigned long long *)&v73[0] = (unsigned int)Random::State(&g_Randomizer);
  v74[196].__tail_0[0] = (double)*(int64_t *)&v73[0] * 2.328306437080797e-10 < 0.25;
  TacticalClass::FreeResources((int)&DataGlobal_87F7E8);
  Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)v75);
  RandomMap::PlaceTileSet(&DataGlobal_87F7E8);
  RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, 0);
  if ( v74[14] )
    v60 = *(unsigned int *)(*(unsigned int *)&v74[113] + 4 * *(unsigned int *)&v74[18]);
  else
    v60 = *(unsigned int *)(*(unsigned int *)&v74[106] + 4 * *(unsigned int *)&v74[18]);
  *((unsigned int *)g_ScenarioClass_Instance + 3402) = v60;
  *((unsigned int *)g_ScenarioClass_Instance + 3409) = *(unsigned int *)(*(unsigned int *)&v74[99] + 4 * *(unsigned int *)&v74[18]);
  if ( v74[14] )
    v61 = *(unsigned int *)(*(unsigned int *)&v74[141] + 4 * *(unsigned int *)&v74[18]);
  else
    v61 = *(unsigned int *)(*(unsigned int *)&v74[120] + 4 * *(unsigned int *)&v74[18]);
  *((unsigned int *)g_ScenarioClass_Instance + 3405) = v61;
  if ( v74[14] )
    v62 = *(unsigned int *)(*(unsigned int *)&v74[148] + 4 * *(unsigned int *)&v74[18]);
  else
    v62 = *(unsigned int *)(*(unsigned int *)&v74[127] + 4 * *(unsigned int *)&v74[18]);
  *((unsigned int *)g_ScenarioClass_Instance + 3406) = v62;
  if ( v74[14] )
    v63 = *(unsigned int *)(*(unsigned int *)&v74[155] + 4 * *(unsigned int *)&v74[18]);
  else
    v63 = *(unsigned int *)(*(unsigned int *)&v74[134] + 4 * *(unsigned int *)&v74[18]);
  *((unsigned int *)g_ScenarioClass_Instance + 3407) = v63;
  if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) )
    Multiplayer::ShowProgress(g_GameMode_Current, 149);
  else
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 50.0, NAN);
  if ( !wcslen((const wchar_t *)&v74[30]) )
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 6746);
    wcscpy((wchar_t *)&v74[30], StringCSF);
  }
  return HashTable_flat::DestroyHashTableINIClass(v79);
}
} // namespace gamemd

// 0x59A6C0
namespace gamemd {
int RandomMap::FinalizeMapData()
{
  int i; // eax
  int v3; // eax
  int v4; // eax
  Cell *j; // edi
  char v6; // bl
  signed int k; // esi
  Cell *NeighbourContent; // eax
  int v9; // ecx
  int v10; // eax
  int m; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  void *v14; // eax
  int result; // eax
  Cell *n; // ebp
  signed int ii; // esi
  Cell *v18; // edi
  _DWORD *v19; // [esp+10h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a6cc*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a6dd*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    *(_DWORD *)(i + 56) = g_CellPassabilityLUT; /*0x59a6e5*/
  }
  v3 = this->RandomMap_field_0x3C[0]; /*0x59a6f6*/
  if ( v3 ) /*0x59a6fc*/
  {
    v4 = v3 - 1; /*0x59a6fe*/
    if ( v4 ) /*0x59a6ff*/
    {
      if ( v4 == 1 ) /*0x59a702*/
        RandomMap::PlaceTerrainFeatures(); /*0x59a706*/
    }
    else
    {
      RandomMap::FillTerrainProgressively(); /*0x59a70f*/
    }
  }
  else
  {
    RandomMap::ArrangeBuildingGrid(); /*0x59a718*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a722*/
  for ( j = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a735*/
        j;
        j = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( j->Cell_field_0x38 == g_CellPassabilityLUT ) /*0x59a741*/
    {
      v6 = 1; /*0x59a743*/
      for ( k = 0; k < 8; k += 2 ) /*0x59a745*/
      {
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(j, k); /*0x59a74a*/
        if ( !(unsigned __int8)Cell::IsEmpty(NeighbourContent) ) /*0x59a751*/
          v6 = 0; /*0x59a75a*/
      }
      if ( v6 ) /*0x59a766*/
        j->Cell_field_0x38 = 0; /*0x59a768*/
    }
  }
  MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x59a788*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x59a794*/
  {
    v9 = g_MapCellWidth * g_MapCellWidth; /*0x59a79c*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59a7a1*/
    {
      v10 = 0; /*0x59a7a3*/
      do /*0x59a7c0*/
      {
        *(_DWORD *)(v10 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x59a7ae*/
        *(_DWORD *)(v10 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x59a7b8*/
        v10 += 80; /*0x59a7bc*/
        --v9; /*0x59a7bf*/
      }
      while ( v9 ); /*0x59a7c0*/
    }
  }
  for ( m = g_MissionQueueFrame.briefing[342] - 1; m >= 0; --m ) /*0x59a7cc*/
  {
    v12 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * m); /*0x59a7df*/
    if ( v12 ) /*0x59a7e4*/
    {
      if ( *v12 ) /*0x59a7ea*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v12)(*v12, 1); /*0x59a7f4*/
        *v12 = 0; /*0x59a7f6*/
      }
      v19 = v12; /*0x59a808*/
      v13 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59a80c*/
              &g_MissionQueueFrame.briefing[338],
              &v19);
      if ( v13 != -1 && v13 < g_MissionQueueFrame.briefing[342] ) /*0x59a81c*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x59a821*/
        for ( ; /*0x59a827*/
              v13 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                       + 4 * v13) )
        {
          ++v13; /*0x59a82f*/
        }
      }
      v14 = (void *)v12[11]; /*0x59a841*/
      v12[10] = &(void*)(void*)&VectorClass_Cell_vftable; /*0x59a844*/
      if ( v14 && *((_BYTE *)v12 + 53) ) /*0x59a84b*/
      {
        RA2_OPDEL(v14); /*0x59a853*/
        v12[11] = 0; /*0x59a85b*/
      }
      *((_BYTE *)v12 + 53) = 0; /*0x59a85f*/
      v12[12] = 0; /*0x59a863*/
      RA2_OPDEL(v12); /*0x59a866*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59a87a*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a884*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a88e*/
  for ( n = (Cell *)result; result; n = (Cell *)result ) /*0x59a897*/
  {
    if ( (unsigned __int8)CellClass::IsTerrainType((CellClass *)n) ) /*0x59a89b*/
    {
      for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
      {
        v18 = (Cell *)Cell::GetNeighbourContent(n, ii); /*0x59a8ae*/
        if ( (unsigned __int8)Cell::IsEmpty(v18) ) /*0x59a8b2*/
          v18->Cell_field_0x38 = dword_AA0E18; /*0x59a8c0*/
      }
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a8d0*/
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
  int i; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // edx
  int v19; // [esp+10h] [ebp-50h] BYREF
  int v20; // [esp+14h] [ebp-4Ch]
  int v21[2]; // [esp+18h] [ebp-48h] BYREF
  double v22; // [esp+20h] [ebp-40h]
  int v23; // [esp+28h] [ebp-38h] BYREF
  int v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  int v26; // [esp+34h] [ebp-2Ch]
  int v27[4]; // [esp+38h] [ebp-28h] BYREF
  void **v28; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  char v30; // [esp+55h] [ebp-Bh]
  int v31; // [esp+58h] [ebp-8h]
  int v32; // [esp+5Ch] [ebp-4h]

  this->u32_308 = 1; /*0x59ad27*/
  RandomMap::Constructor_0((RandomMap *)&v28, 0, 0); /*0x59ad31*/
  v2 = *(_DWORD *)&this->__pad_4C[4]; /*0x59ad36*/
  v28 = &(void*)(void*)&DynamicVectorClass_TRect_int_vftable; /*0x59ad39*/
  v32 = 10; /*0x59ad44*/
  v3 = v2 / 2; /*0x59ad4c*/
  v31 = 0; /*0x59ad51*/
  v4 = 2; /*0x59ad55*/
  if ( v3 >= 2 ) /*0x59ad5a*/
    v4 = v3; /*0x59ad5c*/
  *(_QWORD *)v21 = v4; /*0x59ad5e*/
  v22 = (double)v4; /*0x59ad6a*/
  do /*0x59ad9b*/
  {
    *(_QWORD *)v21 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ad78*/
    IDA_LOWORD(v5) = Math::RoundToInt((double)*(__int64 *)v21 * v22 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
  }
  while ( v5 > v4 ); /*0x59ad9b*/
  v27[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59ada9*/
  v27[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59adb3*/
  v27[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59adbd*/
  v6 = *(_DWORD *)&this->__pad_4C[4]; /*0x59adc1*/
  v27[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59adc4*/
  ArrangeBuildingPlacementGrid((int)&v28, v5 + v6, v27); /*0x59add7*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ade1*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59adf2*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v19 = *(_DWORD *)(i + 36); /*0x59adf7*/
    *(_DWORD *)(80 * ((__int16)v19 + g_MapCellWidth * IDA_SHIWORD(v19)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59ae1c*/
  }
  while ( v31 > 0 ) /*0x59ae2d*/
  {
    v23 = *(_DWORD *)Block; /*0x59ae3d*/
    v24 = *((_DWORD *)Block + 1); /*0x59ae44*/
    v25 = *((_DWORD *)Block + 2); /*0x59ae4b*/
    v26 = *((_DWORD *)Block + 3); /*0x59ae57*/
    v8 = Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ae5b*/
    v26 = v26; /*0x59ae60*/
    v25 = v25; /*0x59ae68*/
    *(_QWORD *)&v22 = (unsigned int)v8; /*0x59ae6e*/
    v20 = 2 * v25 * v26; /*0x59ae8d*/
    IDA_LOWORD(v11) = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)v20); /*0x59ae97*/
    v11 = v11; /*0x59ae9c*/
    v21[0] = v23 + v25 / 2 + v26 / 2 + v24 + 1; /*0x59aecd*/
    v21[1] = v24 + *(_DWORD *)&stru_87F5F0.__pad_58[660] + v26 / 2 - v25 / 2 - v23; /*0x59aed1*/
    v13 = 0; /*0x59aed5*/
    do /*0x59af1f*/
    {
      if ( v13 >= 10 ) /*0x59aeda*/
        break; /*0x59aeda*/
      IDA_LOWORD(v19) = v21[0]; /*0x59aef1*/
      IDA_HIWORD(v19) = v21[1]; /*0x59aef8*/
      v14 = RandomMap::PlaceTerrain(this, v11, &v23, (int)v21, 1, (int)&v19, 0.25, 0); /*0x59af0d*/
      if ( !v14 ) /*0x59af14*/
        ++this->u32_308; /*0x59af16*/
      ++v13; /*0x59af1c*/
    }
    while ( !v14 ); /*0x59af1f*/
    if ( v31 <= 0 ) /*0x59af27*/
      break; /*0x59af27*/
    v15 = 0; /*0x59af2a*/
    if ( --v31 <= 0 ) /*0x59af32*/
      break; /*0x59af32*/
    v16 = 0; /*0x59af34*/
    do /*0x59af60*/
    {
      v17 = (char *)Block + v16 + 16; /*0x59af3a*/
      v18 = (char *)Block + v16; /*0x59af3e*/
      ++v15; /*0x59af40*/
      v16 += 16; /*0x59af41*/
      *v18 = *v17; /*0x59af46*/
      v18[1] = v17[1]; /*0x59af4b*/
      v18[2] = v17[2]; /*0x59af51*/
      v18[3] = v17[3]; /*0x59af57*/
    }
    while ( v15 < v31 ); /*0x59af60*/
  }
  v28 = &(void*)(void*)&VectorClass_TRect_int_vftable; /*0x59af70*/
  if ( Block ) /*0x59af7a*/
  {
    if ( v30 ) /*0x59af82*/
      RA2_OPDEL(Block); /*0x59af85*/
  }
}
}
// 0x59AFA0
namespace gamemd {
void RandomMap::FillTerrainProgressively()
{
  RandomMap *v1; // edi
  int v2; // eax
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int i; // eax
  int v7; // eax
  int v8; // edi
  int j; // ecx
  __int64 v10; // rax
  int v11; // esi
  int v12; // [esp+10h] [ebp-48h]
  int v13; // [esp+14h] [ebp-44h]
  int v14; // [esp+18h] [ebp-40h]
  int v15; // [esp+1Ch] [ebp-3Ch] BYREF
  int v18; // [esp+28h] [ebp-30h] BYREF
  int v19; // [esp+2Ch] [ebp-2Ch]
  double v20; // [esp+30h] [ebp-28h]
  double v21; // [esp+38h] [ebp-20h]
  double v22; // [esp+40h] [ebp-18h]
  _DWORD v23[4]; // [esp+48h] [ebp-10h] BYREF

  v1 = this; /*0x59afad*/
  this->u32_308 = 1; /*0x59afb3*/
  v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
  v3 = (double)*(int *)v1->__pad_4C; /*0x59afc2*/
  v15 = v2; /*0x59afc5*/
  v13 = 0; /*0x59afcb*/
  v14 = 0; /*0x59afcf*/
  v20 = 0.0; /*0x59afd9*/
  v21 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
  v22 = (double)v2; /*0x59b003*/
  IDA_LOWORD(v4) = Math::RoundToInt(v22 * 0.03 * v21); /*0x59b011*/
  v4 = v4; /*0x59b016*/
  v5 = *(_DWORD *)&stru_87F5F0.__pad_58[664] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[660] / 2; /*0x59b030*/
  v19 = v5; /*0x59b038*/
  v18 = v5 + 1; /*0x59b03f*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b043*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b054*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v15 = *(_DWORD *)(i + 36); /*0x59b059*/
    *(_DWORD *)(80 * ((__int16)v15 + g_MapCellWidth * IDA_SHIWORD(v15)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59b07a*/
  }
  v23[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b0af*/
  v23[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b0bb*/
  v23[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676] - 2; /*0x59b0c2*/
  v23[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680] - 2; /*0x59b0c6*/
  if ( v21 > 0.0 ) /*0x59b0ca*/
  {
    while ( v14 < 100 ) /*0x59b0db*/
    {
      IDA_LOWORD(v7) = Math::RoundToInt((v21 - v20) * v22); /*0x59b0ed*/
      if ( v7 >= v4 ) /*0x59b0f8*/
        v7 = v4; /*0x59b0fa*/
      IDA_LOWORD(v15) = v5 + 1; /*0x59b119*/
      IDA_HIWORD(v15) = v5; /*0x59b11e*/
      v13 += RandomMap::PlaceTerrain(v1, v7, v23, (int)&v18, 1, (int)&v15, 0.75, 1); /*0x59b133*/
      ++v14; /*0x59b137*/
      v8 = 50000; /*0x59b144*/
      v12 = 0; /*0x59b149*/
      v20 = (double)v13 / v22; /*0x59b15b*/
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b15f*/
      for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b172*/
            j;
            j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        if ( !*(_DWORD *)(80 * (*(__int16 *)(j + 36) + g_MapCellWidth * *(__int16 *)(j + 38)) /*0x59b191*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 60) )
        {
          v10 = *(__int16 *)(j + 36) - (v5 + 1); /*0x59b1ac*/
          v11 = (IDA_HIDWORD(v10) ^ v10) - IDA_HIDWORD(v10) + abs32(*(__int16 *)(j + 38) - v5); /*0x59b1b1*/
          if ( v11 < v8 ) /*0x59b1b5*/
          {
            v8 = v11; /*0x59b1ba*/
            v12 = *(_DWORD *)(j + 36); /*0x59b1bc*/
          }
        }
      }
      v18 = (__int16)v12; /*0x59b1e2*/
      v19 = IDA_SHIWORD(v12); /*0x59b1e6*/
      if ( v20 >= v21 ) /*0x59b1ef*/
        break; /*0x59b1ef*/
      v1 = this; /*0x59b0d2*/
    }
  }
}
}
// 0x59B200
namespace gamemd {
int RandomMap::PlaceTerrainFeatures()
{
  int v2; // eax
  int i; // eax
  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  __int16 *v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  int result; // eax
  int v19; // [esp+10h] [ebp-B8h]
  int v20; // [esp+10h] [ebp-B8h]
  int v21; // [esp+14h] [ebp-B4h]
  double v22; // [esp+18h] [ebp-B0h]
  int v23; // [esp+20h] [ebp-A8h]
  int v24; // [esp+24h] [ebp-A4h]
  int v25; // [esp+28h] [ebp-A0h]
  int v27; // [esp+30h] [ebp-98h] BYREF
  int v28; // [esp+34h] [ebp-94h]
  int v29; // [esp+38h] [ebp-90h]
  int v30; // [esp+3Ch] [ebp-8Ch]
  double v31; // [esp+40h] [ebp-88h]
  int v32; // [esp+4Ch] [ebp-7Ch] BYREF
  int v33; // [esp+50h] [ebp-78h]
  int v35; // [esp+58h] [ebp-70h]
  int v37; // [esp+60h] [ebp-68h] BYREF
  int v38; // [esp+64h] [ebp-64h]
  double v39; // [esp+68h] [ebp-60h]
  double v40; // [esp+70h] [ebp-58h]
  _DWORD v41[2]; // [esp+78h] [ebp-50h] BYREF
  int v42; // [esp+80h] [ebp-48h]
  int v43; // [esp+84h] [ebp-44h]
  int v44; // [esp+88h] [ebp-40h]
  int v45; // [esp+8Ch] [ebp-3Ch]
  int v46; // [esp+90h] [ebp-38h]
  int v47; // [esp+94h] [ebp-34h]
  int v48; // [esp+98h] [ebp-30h]
  double v50; // [esp+A0h] [ebp-28h]
  double v51; // [esp+A8h] [ebp-20h]
  int v52; // [esp+B4h] [ebp-14h]
  double v53; // [esp+B8h] [ebp-10h]
  double v54; // [esp+C0h] [ebp-8h]

  this->u32_308 = 1; /*0x59b216*/
  v19 = Object::ComputeAllocationSize(); /*0x59b228*/
  v24 = 0; /*0x59b22e*/
  v39 = (1.0 - (double)*(int *)this->__pad_4C * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
  v51 = (double)v19; /*0x59b25a*/
  IDA_LOWORD(v2) = Math::RoundToInt(v51 * 0.06 * v39); /*0x59b26b*/
  v2 = v2; /*0x59b275*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b27c*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b28d*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    *(_DWORD *)(80 * ((__int16)*(_DWORD *)(i + 36) + g_MapCellWidth * (__int16)IDA_HIWORD(*(_DWORD *)(i + 36))) /*0x59b2b7*/
              + g_MissionQueueFrame.localVariables[163]
              + 60) = 0;
  }
  *(_QWORD *)&v31 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b2ce*/
  v41[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59b2fe*/
  v41[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59b30d*/
  if ( (double)*(__int64 *)&v31 * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
  {
    v42 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59b35c*/
    v43 = *(_DWORD *)&stru_87F5F0.__pad_58[680] / 2 - 1; /*0x59b36a*/
    v44 = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59b371*/
    v45 = *(_DWORD *)&stru_87F5F0.__pad_58[680] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b378*/
    v46 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59b37f*/
    v47 = v43; /*0x59b386*/
  }
  else
  {
    v43 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59b311*/
    v42 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2 - 1; /*0x59b31f*/
    v44 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b326*/
    v45 = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59b32d*/
    v46 = v42; /*0x59b334*/
    v47 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59b33b*/
  }
  v20 = 2; /*0x59b391*/
  v41 = v41; /*0x59b399*/
  do /*0x59b6c1*/
  {
    v23 = 0; /*0x59b3a5*/
    v40 = 0.0; /*0x59b3a9*/
    v27 = *v41; /*0x59b3bb*/
    v28 = v41[1]; /*0x59b3c2*/
    v29 = v41[2]; /*0x59b3cb*/
    v30 = v41[3]; /*0x59b3d5*/
    v4 = v28 + *(_DWORD *)&stru_87F5F0.__pad_58[660] + v30 / 2 - v29 / 2 - v27; /*0x59b3fd*/
    v33 = v27 + v30 / 2 + v29 / 2 + v28 + 1; /*0x59b3ff*/
    v4 = v4; /*0x59b403*/
    v37 = v33; /*0x59b407*/
    v38 = v4; /*0x59b40b*/
    if ( v30 <= v29 ) /*0x59b40f*/
    {
      v5 = (double)v29; /*0x59b445*/
      v31 = 1.0; /*0x59b44d*/
      v22 = (double)v30; /*0x59b45d*/
      v50 = v5 / v22 * 1.2; /*0x59b46d*/
    }
    else
    {
      v50 = 1.0; /*0x59b415*/
      v22 = (double)v30; /*0x59b42b*/
      v5 = (double)v29; /*0x59b42f*/
      v31 = v22 / v5 * 1.2; /*0x59b43f*/
    }
    v54 = 1.0 / (v5 * 0.5 * (v5 * 0.5)); /*0x59b484*/
    v53 = 1.0 / (v22 * 0.5 * (v22 * 0.5)); /*0x59b4a1*/
    if ( v39 > 0.0 ) /*0x59b4b9*/
    {
      do /*0x59b6a7*/
      {
        if ( v24 >= 100 ) /*0x59b4c4*/
          break; /*0x59b4c4*/
        IDA_LOWORD(v6) = Math::RoundToInt((v39 - v40) * v51); /*0x59b4d9*/
        if ( v6 >= v2 ) /*0x59b4e7*/
          v6 = v2; /*0x59b4e9*/
        IDA_LOWORD(v32) = v33; /*0x59b4fd*/
        IDA_HIWORD(v32) = v4; /*0x59b515*/
        v23 += RandomMap::PlaceTerrain(this, v6, &v27, (int)&v37, 1, (int)&v32, 0.75, 1); /*0x59b52d*/
        v21 = 0; /*0x59b540*/
        ++v24; /*0x59b55a*/
        v7 = 2 * v27 - *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x59b562*/
        v8 = 50000; /*0x59b563*/
        v48 = v7 + 2 * v29 + 2; /*0x59b572*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * v28 + 1; /*0x59b57d*/
        v52 = v9 + 2 * v30 + 2; /*0x59b585*/
        v40 = (double)v23 / v51; /*0x59b58c*/
        if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59b590*/
        {
          v25 = 0; /*0x59b596*/
          v35 = g_MapCellWidth * g_MapCellWidth; /*0x59b59e*/
          do /*0x59b67e*/
          {
            v10 = (__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]); /*0x59b5ab*/
            v11 = *(__int16 *)(v25 + g_MissionQueueFrame.localVariables[163] + 2); /*0x59b5ae*/
            v12 = *(__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]); /*0x59b5b3*/
            v13 = v12 + v11; /*0x59b5b6*/
            v14 = v12 - v11; /*0x59b5b9*/
            if ( v13 >= v9 /*0x59b618*/
              && v13 <= v52
              && v14 >= v7
              && v14 <= v48
              && !*((_DWORD *)v10 + 15)
              && Map_Helper_59BAB0((__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]), &v27, 1, v54, v53) )
            {
              v15 = v10[1] - v4; /*0x59b629*/
              IDA_LOWORD(v16) = Math::RoundToInt( /*0x59b659*/
                              (double)(int)((IDA_HIDWORD(v15) ^ v15) - IDA_HIDWORD(v15)) * v50
                            + (double)(int)abs32(*v10 - v33) * v31);
              if ( v16 < v8 ) /*0x59b660*/
              {
                v8 = v16; /*0x59b664*/
                v21 = *(_DWORD *)v10; /*0x59b666*/
              }
            }
            v17 = v35 == 1; /*0x59b675*/
            v25 += 80; /*0x59b676*/
            --v35; /*0x59b67a*/
          }
          while ( !v17 ); /*0x59b67e*/
          IDA_LOWORD(v4) = v4; /*0x59b684*/
        }
        v37 = (__int16)v21; /*0x59b69a*/
        v38 = IDA_SHIWORD(v21); /*0x59b69e*/
      }
      while ( v40 < v39 ); /*0x59b6a7*/
    }
    result = v20 - 1; /*0x59b6b8*/
    v17 = v20 == 1; /*0x59b6b8*/
    v41 += 4; /*0x59b6b9*/
    --v20; /*0x59b6bd*/
  }
  while ( !v17 ); /*0x59b6c1*/
  return result; /*0x59b6c7*/
}
}
// 0x59B740
namespace gamemd {
void RandomMap::PlaceShoreObjects()
{
  Cell *i; // ebp
  signed int j; // edi
  Cell *NeighbourContent; // esi
  int v4; // eax
  int v5; // edx
  unsigned int v6; // esi
  signed int v7; // eax
  _DWORD *v8; // ecx
  Cell *v9; // ebp
  signed int v10; // edi
  Cell *v11; // esi
  int v12; // eax
  int v13; // [esp+10h] [ebp-34h]
  __int64 v14; // [esp+1Ch] [ebp-28h]
  double v15; // [esp+24h] [ebp-20h]
  void **v16; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v18; // [esp+34h] [ebp-10h]
  char v19; // [esp+39h] [ebp-Bh]
  signed int v20; // [esp+3Ch] [ebp-8h]
  int v21; // [esp+40h] [ebp-4h]

  RandomMap::Constructor((RandomMap *)&v16, 0, 0); /*0x59b74f*/
  v16 = &(void*)(void*)&DynamicVectorClass_CellClass___vftable; /*0x59b759*/
  v20 = 0; /*0x59b761*/
  v21 = 10000; /*0x59b765*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b76d*/
  for ( i = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b780*/
        i;
        i = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)Cell::IsShore(i) ) /*0x59b784*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b78d*/
      {
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(i, j); /*0x59b797*/
        if ( (unsigned __int8)Cell::IsEmpty(NeighbourContent) /*0x59b7ce*/
          && (v20 < v18
           || (v19 || !v18)
           && v21 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          v4 = v20++; /*0x59b7d9*/
          *((_DWORD *)Block + v4) = NeighbourContent; /*0x59b7e4*/
        }
      }
    }
  }
  v5 = v20 / 3; /*0x59b80d*/
  if ( v20 / 3 > 1000 ) /*0x59b815*/
    v5 = 1000; /*0x59b817*/
  if ( v5 > 0 ) /*0x59b81e*/
  {
    v13 = v5; /*0x59b824*/
    do /*0x59b90c*/
    {
      v6 = v20 - 1; /*0x59b830*/
      v15 = (double)(unsigned int)v20; /*0x59b83e*/
      do /*0x59b869*/
      {
        v14 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b84c*/
        IDA_LOWORD(v7) = Math::RoundToInt((double)v14 * v15 * 2.328306437080797e-10); /*0x59b862*/
      }
      while ( v7 > v6 ); /*0x59b869*/
      v8 = Block; /*0x59b86b*/
      v9 = (Cell *)*((_DWORD *)Block + v7); /*0x59b875*/
      if ( v7 < v20 && v7 < --v20 ) /*0x59b881*/
      {
        while ( 1 ) /*0x59b88d*/
        {
          v8[v7] = v8[v7 + 1]; /*0x59b88d*/
          if ( ++v7 >= v20 ) /*0x59b897*/
            break; /*0x59b897*/
          v8 = Block; /*0x59b885*/
        }
      }
      v10 = 0; /*0x59b89e*/
      v9->Cell_field_0x38 = dword_AA0E18; /*0x59b8a0*/
      do /*0x59b901*/
      {
        v11 = (Cell *)Cell::GetNeighbourContent(v9, v10); /*0x59b8ab*/
        if ( (unsigned __int8)Cell::IsEmpty(v11) /*0x59b8e2*/
          && (v20 < v18
           || (v19 || !v18)
           && v21 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          v12 = v20++; /*0x59b8ed*/
          *((_DWORD *)Block + v12) = v11; /*0x59b8f8*/
        }
        v10 += 2; /*0x59b8fb*/
      }
      while ( v10 < 8 ); /*0x59b901*/
      --v13; /*0x59b908*/
    }
    while ( v13 ); /*0x59b90c*/
  }
  v16 = &(void*)(void*)&VectorClass_CellClass___vftable; /*0x59b916*/
  if ( Block ) /*0x59b920*/
  {
    if ( v19 ) /*0x59b926*/
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
  int *v11; // eax
  int *v12; // esi
  void *v13; // eax
  int v14; // ecx
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
  int v26; // eax
  int v27; // edx
  int v28; // eax
  unsigned int *v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // ebx
  unsigned int v33; // eax
  int16_t *v34; // edi
  int v35; // eax
  double v36; // st6
  unsigned int *v37; // eax
  char *v38; // ecx
  int v40; // ebx
  char v41; // al
  int v42; // eax
  int16_t v43; // cx
  int v45; // ecx
  char *v46; // edi
  int *v47; // eax
  double v49; // st7
  int16_t v50; // ax
  double v51; // st7
  int16_t v52; // ax
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // edi
  unsigned int v57; // edx
  int v58; // edi
  int v59; // ebx
  unsigned int v60; // ecx
  double v61; // st7
  double v62; // st7
  int v63; // ecx
  bool v64; // zf
  int v65; // eax
  int v66; // eax
  int16_t *v67; // edi
  int *v68; // ebx
  char *v69; // edi
  int v70; // eax
  int i; // eax
  int v72; // ecx
  int v74; // edi
  int j; // eax
  char *v76; // ecx
  char inited; // [esp+17h] [ebp-81h]
  int v79; // [esp+1Ch] [ebp-7Ch] BYREF
  int v81; // [esp+24h] [ebp-74h]
  int v82; // [esp+28h] [ebp-70h]
  int v83; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  float v85; // [esp+34h] [ebp-64h]
  float v86; // [esp+38h] [ebp-60h]
  int v88; // [esp+40h] [ebp-58h]
  int64_t v90; // [esp+48h] [ebp-50h]
  int64_t v91; // [esp+50h] [ebp-48h]
  int v92; // [esp+58h] [ebp-40h] BYREF
  float v93; // [esp+60h] [ebp-38h]
  double v94; // [esp+68h] [ebp-30h]
  double v95; // [esp+70h] [ebp-28h]
  double v96; // [esp+78h] [ebp-20h]
  double v97; // [esp+80h] [ebp-18h]
  double v98; // [esp+88h] [ebp-10h]
  double v99; // [esp+90h] [ebp-8h]

  v8 = a2; /*0x59bbcc*/
  if ( a2 <= 400 ) /*0x59bbdb*/
  {
    v8 = 400; /*0x59bbdd*/
    a2 = 400; /*0x59bbe2*/
  }
  v9 = 8 * v8 + 2; /*0x59bbe5*/
  if ( v9 <= 100 ) /*0x59bbef*/
    v9 = 100; /*0x59bbf1*/
  v9 = v9; /*0x59bbfd*/
  v10 = operator new(8 * v9); /*0x59bc02*/
  if ( v10 ) /*0x59bc0e*/
  {
    Block = v10; /*0x59bc13*/
    IDA_LODWORD(v94) = v9 - 1; /*0x59bc17*/
  }
  else
  {
    Block = 0; /*0x59bc1d*/
  }
  v11 = (int *)operator new(0x14u); /*0x59bc23*/
  v12 = v11; /*0x59bc28*/
  if ( v11 ) /*0x59bc2f*/
  {
    v11[3] = 0; /*0x59bc38*/
    v11[4] = -1; /*0x59bc3c*/
    *v11 = 0; /*0x59bc43*/
    v11[1] = v9; /*0x59bc45*/
    v13 = operator new(4 * v9 + 4); /*0x59bc48*/
    v14 = v12[1]; /*0x59bc4d*/
    v12[2] = (int)v13; /*0x59bc50*/
    v15 = 0; /*0x59bc56*/
    if ( v14 >= 0 ) /*0x59bc5a*/
    {
      do /*0x59bc69*/
      {
        ++v15; /*0x59bc5f*/
        *(unsigned int *)(v12[2] + 4 * v15 - 4) = 0; /*0x59bc60*/
      }
      while ( v15 <= v12[1] ); /*0x59bc69*/
    }
  }
  else
  {
    v12 = 0; /*0x59bc6d*/
  }
  if ( *(unsigned int *)aP3 || *(unsigned int *)(aP3 + 4) ) /*0x59bc7c*/
  {
    v25 = *(unsigned short *)(aP3 + 4); /*0x59bdec*/
    IDA_LOWORD(v26) = *(unsigned int *)aP3; /*0x59bdf0*/
    IDA_HIWORD(v26) = v25; /*0x59bdf5*/
    v79 = v26; /*0x59bdfe*/
  LABEL_27:
    v86 = 0.0; /*0x59be02*/
    v85 = 0.0; /*0x59be13*/
    if ( *aP2 != dword_ABE2F0 || aP2[1] != dword_ABE2F4 || aP2[2] != dword_ABE2F8 || aP2[3] != dword_ABE2FC ) /*0x59be46*/
    {
      v26 = aP2[3]; /*0x59be4b*/
      v83 = aP2[2]; /*0x59be50*/
      v26 = v26; /*0x59be54*/
      if ( v83 <= v26 ) /*0x59be58*/
      {
        v85 = 1.0; /*0x59be7a*/
        v86 = (double)v26 / (double)v83 * 1.2; /*0x59be8c*/
      }
      else
      {
        v86 = 1.0; /*0x59be5e*/
        v85 = (double)v83 / (double)v26 * 1.2; /*0x59be70*/
      }
    }
    IDA_LODWORD(v91) = (int16_t)v79; /*0x59be9a*/
    v27 = *v12; /*0x59be9e*/
    IDA_LODWORD(v91) = IDA_SHIWORD(v79); /*0x59bea4*/
    v28 = 0; /*0x59beaa*/
    v95 = (double)(int16_t)v79; /*0x59beae*/
    v81 = 0; /*0x59beb6*/
    v96 = (double)IDA_SHIWORD(v79); /*0x59beba*/
    if ( v27 >= 0 ) /*0x59bebe*/
    {
      do /*0x59becc*/
      {
        ++v28; /*0x59bec3*/
        *(unsigned int *)(v12[2] + 4 * v28 - 4) = 0; /*0x59bec4*/
      }
      while ( v28 <= *v12 ); /*0x59becc*/
    }
    v29 = Block; /*0x59bece*/
    *v12 = 0; /*0x59bed2*/
    v82 = 1; /*0x59bed8*/
    *v29 = v79; /*0x59bee0*/
    v29[1] = 0; /*0x59bee2*/
    *((unsigned int *)g_MapTileArray + 20 * (int16_t)v79 + 20 * g_MapCellWidth * IDA_SHIWORD(v79) + 15) = *(&this->q04C4); /*0x59bf0d*/
    v30 = *v12 + 1; /*0x59bf16*/
    IDA_LODWORD(v91) = v29[1]; /*0x59bf19*/
    v31 = v30 >> 1; /*0x59bf20*/
    if ( v30 < v12[1] ) /*0x59bf24*/
    {
      for ( ; v30 > 1; v31 >>= 1 ) /*0x59bf29*/
      {
        v32 = v12[2]; /*0x59bf2b*/
        if ( *(float *)(*(unsigned int *)(v32 + 4 * v31) + 4) <= (double)*(float *)&v91 ) /*0x59bf3d*/
          break; /*0x59bf3d*/
        *(unsigned int *)(v32 + 4 * v30) = *(unsigned int *)(v32 + 4 * v31); /*0x59bf42*/
        v30 = v31; /*0x59bf45*/
      }
      *(unsigned int *)(v12[2] + 4 * v30) = v29; /*0x59bf51*/
      v33 = v12[3]; /*0x59bf56*/
      ++*v12; /*0x59bf5c*/
      if ( (unsigned int)v29 > v33 ) /*0x59bf5e*/
        v12[3] = (int)v29; /*0x59bf60*/
      if ( (unsigned int)v29 < v12[4] ) /*0x59bf66*/
        v12[4] = (int)v29; /*0x59bf68*/
    }
    if ( *v12 ) /*0x59bf6b*/
    {
      v35 = v12[2]; /*0x59bf75*/
      v34 = v35->vtable2; /*0x59bf7d*/
      v35->vtable2 = *(unsigned int *)(v35 + 4 * *v12); /*0x59bf80*/
      *(unsigned int *)(v12[2] + 4 * (*v12)--) = 0; /*0x59bf88*/
      Heap::SiftDown(v12, 1); /*0x59bf96*/
    }
    else
    {
      v34 = 0; /*0x59bf71*/
    }
    v83 = (int)v34; /*0x59bf9e*/
    v36 = (double)(int)aP2[2] * 0.5; /*0x59bfab*/
    v98 = 1.0 / (v36 * v36); /*0x59bfb5*/
    v97 = 1.0 / ((double)(int)aP2[3] * 0.5 * ((double)(int)aP2[3] * 0.5)); /*0x59bfd6*/
    do /*0x59c32c*/
    {
      if ( !v34 ) /*0x59bfe4*/
        break; /*0x59bfe4*/
      if ( g_MapTileArray ) /*0x59bff2*/
        *((unsigned int *)g_MapTileArray + 20 * *v34 + 20 * g_MapCellWidth * v34[1] + 14) = *(&this->q04C4); /*0x59c014*/
      v37 = CellCoord::To_CellObj(&MapClass_Instance, v34); /*0x59c01e*/
      v38 = (char *)Block; /*0x59c023*/
      v82 = v82; /*0x59c027*/
      v37[14] = 0; /*0x59c02b*/
      v40 = g_MapCellHeight_Value; /*0x59c032*/
      v41 = 0; /*0x59c038*/
      IDA_LODWORD(v91) = 0; /*0x59c03d*/
      IDA_LODWORD(v90) = &v38[8 * v82]; /*0x59c041*/
      while ( 1 ) /*0x59c04b*/
      {
        v42 = v41 & 7; /*0x59c04b*/
        v43 = v34[1] + IDA_HIWORD(Direction_X_Offsets[v42]); /*0x59c064*/
        IDA_LOWORD(v88) = *v34 + IDA_LOWORD(Direction_X_Offsets[v42]); /*0x59c068*/
        IDA_HIWORD(v88) = v43; /*0x59c06d*/
        v88 = v88; /*0x59c076*/
        v43 = v43; /*0x59c07d*/
        v45 = v43 + (int16_t)v88; /*0x59c080*/
        if ( v45 > v40 && (int16_t)v88 - v43 < v40 && v43 - (int16_t)v88 < v40 && v45 <= g_MapCellCount ) /*0x59c0a9*/
        {
          v46 = (char *)g_MapTileArray + 80 * (int16_t)v88 + 80 * g_MapCellWidth * v43; /*0x59c0c4*/
          if ( !*((unsigned int *)v46 + 14) && *((unsigned int *)v46 + 15) != *(&this->q04C4) ) /*0x59c0de*/
          {
            v47 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v88); /*0x59c0ee*/
            if ( Cell::IsGroundTypeRange(v47) /*0x59c13d*/
              && v82 < v9
              && (uint8_t)Map_Helper_59BAB0((int)&v88, (int)aP2, a5, v98, v97) )
            {
              v90 = v90; /*0x59c14e*/
              v49 = v95 + 0.5; /*0x59c156*/
              *(unsigned int *)v90 = v88; /*0x59c15c*/
              v50 = Math::RoundToInt(v49); /*0x59c15e*/
              v51 = v96 + 0.5; /*0x59c167*/
              IDA_LOWORD(v26) = v50; /*0x59c16d*/
              v52 = Math::RoundToInt(v96 + 0.5); /*0x59c172*/
              IDA_HIWORD(v26) = v52; /*0x59c177*/
              v92 = v26; /*0x59c180*/
              if ( a8 ) /*0x59c189*/
              {
                Map_Helper_59B940((int)&v92, (int)&v88, (int)aP2, aP5, v86, v85); /*0x59c1ab*/
              }
              else
              {
                IDA_LODWORD(v90) = (IDA_SHIWORD(v88) - v52) * (IDA_SHIWORD(v88) - v52) /*0x59c1d7*/
                             + ((int16_t)v88 - (int16_t)v26) * ((int16_t)v88 - (int16_t)v26);
                v94 = Math::Sqrt((double)(int)v90); /*0x59c1e7*/
                v99 = (unsigned long long)((unsigned int)Random::State(&g_Randomizer)); /*0x59c1f8*/
                v51 = (double)((long long)(v99)) * 5.0 * 2.328306437080797e-10 + v94; /*0x59c21d*/
              }
              v82 = v82; /*0x59c225*/
              v90->q004 = v51; /*0x59c229*/
              *((unsigned int *)v46 + 15) = *(&this->q04C4); /*0x59c233*/
              v54 = v90; /*0x59c236*/
              v82 = v82 + 1; /*0x59c238*/
              v55 = *v12 + 1; /*0x59c244*/
              v93 = v90->q004; /*0x59c245*/
              v56 = v12[1]; /*0x59c249*/
              v57 = v55 >> 1; /*0x59c24e*/
              IDA_LODWORD(v94) = v90; /*0x59c252*/
              IDA_LODWORD(v90) = v90 + 8; /*0x59c256*/
              if ( v55 < v56 ) /*0x59c25a*/
              {
                if ( v55 > 1 ) /*0x59c25f*/
                {
                  do /*0x59c27f*/
                  {
                    v58 = v12[2]; /*0x59c261*/
                    v59 = *(unsigned int *)(v58 + 4 * v57); /*0x59c264*/
                    if ( *(float *)(v59 + 4) <= (double)v93 ) /*0x59c273*/
                      break; /*0x59c273*/
                    *(unsigned int *)(v58 + 4 * v55) = v59; /*0x59c275*/
                    v55 = v57; /*0x59c278*/
                    v57 >>= 1; /*0x59c27a*/
                  }
                  while ( v55 > 1 ); /*0x59c27f*/
                  v54 = IDA_LODWORD(v94); /*0x59c281*/
                }
                *(unsigned int *)(v12[2] + 4 * v55) = v54; /*0x59c288*/
                v60 = v12[3]; /*0x59c28d*/
                ++*v12; /*0x59c293*/
                if ( v54 > v60 ) /*0x59c295*/
                  v12[3] = v54; /*0x59c297*/
                if ( v54 < v12[4] ) /*0x59c29d*/
                  v12[4] = v54; /*0x59c29f*/
              }
            }
            v40 = g_MapCellHeight_Value; /*0x59c2a2*/
          }
        }
        v41 = v91 + 2; /*0x59c2ac*/
        IDA_LODWORD(v91) = v91 + 2; /*0x59c2b2*/
        if ( (int)v91 >= 8 ) /*0x59c2b6*/
          break; /*0x59c2b6*/
        v34 = (int16_t *)v83; /*0x59c047*/
      }
      v61 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2c1*/
      v95 = v61 * a7 + v95; /*0x59c2d2*/
      v62 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2d6*/
      ++v81; /*0x59c2e7*/
      v63 = *v12; /*0x59c2eb*/
      v64 = *v12 == 0; /*0x59c2ed*/
      v96 = v62 * a7 + v96; /*0x59c2ef*/
      if ( v64 ) /*0x59c2f3*/
      {
        v34 = 0; /*0x59c2f5*/
      }
      else
      {
        v65 = v12[2]; /*0x59c2f9*/
        v34 = v65->vtable2; /*0x59c301*/
        v65->vtable2 = *(unsigned int *)(v65 + 4 * v63); /*0x59c304*/
        *(unsigned int *)(v12[2] + 4 * (*v12)--) = 0; /*0x59c30c*/
        Heap::SiftDown(v12, 1); /*0x59c31a*/
      }
      v83 = (int)v34; /*0x59c328*/
    }
    while ( v81 < a2 ); /*0x59c32c*/
    if ( *v12 ) /*0x59c332*/
    {
      v66 = v12[2]; /*0x59c33c*/
      v67 = v66->vtable2; /*0x59c344*/
      v66->vtable2 = *(unsigned int *)(v66 + 4 * *v12); /*0x59c347*/
      *(unsigned int *)(v12[2] + 4 * (*v12)--) = 0; /*0x59c34f*/
      Heap::SiftDown(v12, 1); /*0x59c35d*/
      for ( ; v67; ++v81 ) /*0x59c364*/
      {
        v68 = (int *)CellCoord::To_CellObj(&MapClass_Instance, v67); /*0x59c375*/
        v69 = (char *)g_MapTileArray + 80 * *v67 + 80 * g_MapCellWidth * v67[1]; /*0x59c393*/
        if ( !*((unsigned int *)v69 + 14) && Cell::IsGroundTypeRange(v68) ) /*0x59c39e*/
        {
          v68[14] = 0; /*0x59c3ab*/
          *((unsigned int *)v69 + 14) = *(&this->q04C4); /*0x59c3b8*/
        }
        if ( *v12 ) /*0x59c3bb*/
        {
          v70 = v12[2]; /*0x59c3c5*/
          v67 = v70->vtable2; /*0x59c3cd*/
          v70->vtable2 = *(unsigned int *)(v70 + 4 * *v12); /*0x59c3d0*/
          *(unsigned int *)(v12[2] + 4 * (*v12)--) = 0; /*0x59c3d8*/
          Heap::SiftDown(v12, 1); /*0x59c3e6*/
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
      RA2_OPDEL((void *)v12[2]); /*0x59c417*/
      RA2_OPDEL(v12); /*0x59c41d*/
    }
    inited = MapClass::InitTileData(*(&this->q04C4), 1); /*0x59c43d*/
    LayerClass::CellIteratorReset(&MapClass_Instance); /*0x59c441*/
    for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x59c452*/
    {
      v72 = *(unsigned int *)(i + 56); /*0x59c454*/
      if ( v72 >= dword_ABAD28 && v72 < dword_ABAD28 + 42 ) /*0x59c466*/
      {
        *(unsigned int *)(i + 56) = 0; /*0x59c468*/
        *(unsigned char *)(i + 282) = 0; /*0x59c46b*/
      }
    }
    if ( inited ) /*0x59c486*/
    {
      v81 = v81; /*0x59c51b*/
      ++*(&this->q04C4); /*0x59c521*/
    }
    else
    {
      g_CellPassabilityLUT = g_CellPassabilityLUT; /*0x59c48c*/
      v74 = *(&this->q04C4); /*0x59c492*/
      LayerClass::CellIteratorReset(&MapClass_Instance); /*0x59c49d*/
      for ( j = LayerClass::CellIteratorNext(&MapClass_Instance); j; j = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x59c4ae*/
      {
        IDA_LODWORD(v94) = *(unsigned int *)(j + 36); /*0x59c4b3*/
        v76 = (char *)g_MapTileArray + 80 * SLOWORD(v94) + 80 * g_MapCellWidth * IDA_SWORD1(v94); /*0x59c4d4*/
        if ( *((unsigned int *)v76 + 14) == v74 ) /*0x59c4d9*/
        {
          *((unsigned int *)v76 + 14) = 0; /*0x59c4db*/
          v76[75] = 0; /*0x59c4e2*/
          *(unsigned int *)(j + 56) = g_CellPassabilityLUT; /*0x59c4e6*/
          *(unsigned char *)(j + 282) = 0; /*0x59c4e9*/
          *(unsigned char *)(j + 283) = *(&this->q04C5); /*0x59c4f6*/
        }
      }
      return 0; /*0x59c50a*/
    }
  }
  else
  {
    v83 = 0; /*0x59bc85*/
    while ( 1 ) /*0x59bc97*/
    {
      v16 = g_Cell_PositionLUT - 1; /*0x59bc97*/
      v96 = (unsigned long long)((unsigned int)g_Cell_PositionLUT); /*0x59bc9d*/
      v99 = (double)(unsigned int)g_Cell_PositionLUT; /*0x59bca5*/
      do /*0x59bcdc*/
      {
        v95 = (unsigned long long)((unsigned int)Random::State(&g_Randomizer)); /*0x59bcb6*/
        v17 = Math::RoundToInt((double)((long long)(v95)) * v99 * 2.328306437080797e-10); /*0x59bcd3*/
        v17 = v17; /*0x59bcd8*/
      }
      while ( v17 > v16 ); /*0x59bcdc*/
      v19 = g_CellPositionOffset - 1; /*0x59bcec*/
      v91 = (unsigned int)g_CellPositionOffset; /*0x59bcf2*/
      v99 = (double)(unsigned int)g_CellPositionOffset; /*0x59bcfa*/
      do /*0x59bd2f*/
      {
        v90 = (unsigned int)Random::State(&g_Randomizer); /*0x59bd0b*/
        v20 = Math::RoundToInt((double)v90 * v99 * 2.328306437080797e-10); /*0x59bd28*/
      }
      while ( v20 > v19 ); /*0x59bd2f*/
      IDA_HIWORD(v92) = -v17; /*0x59bd3c*/
      IDA_HIWORD(v93) = g_Cell_PositionLUT; /*0x59bd41*/
      IDA_LOWORD(v94) = v17 + 1; /*0x59bd51*/
      IDA_WORD1(v94) = g_Cell_PositionLUT - v17; /*0x59bd56*/
      v21 = v20 + v17 + 1; /*0x59bd63*/
      v22 = g_Cell_PositionLUT - v17 + v20; /*0x59bd65*/
      IDA_LOWORD(v26) = v21; /*0x59bd67*/
      IDA_HIWORD(v26) = v22; /*0x59bd6c*/
      v79 = v26; /*0x59bd75*/
      if ( ++v83 >= 200 ) /*0x59bd88*/
        return 0; /*0x59bde1*/
      if ( g_MapTileArray ) /*0x59bd92*/
      {
        if ( !*((unsigned int *)g_MapTileArray + 20 * v21 + 20 * g_MapCellWidth * v22 + 14) ) /*0x59bdad*/
        {
          v23 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v79); /*0x59bdc3*/
          if ( Cell::IsGroundTypeRange(v23) ) /*0x59bdca*/
          {
            if ( v83 < 200 ) /*0x59bddf*/
              goto LABEL_27; /*0x59bddf*/
            return 0; /*0x59bddf*/
          }
        }
      }
    }
  }
}
}
// 0x59C580
namespace gamemd {
int RandomMap::GrowTiberium()
{
  int v2; // eax
  int v3; // edi
  int v4; // edi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->RandomMap_field_0x3C[0]; /*0x59c594*/
  ++this->u32_308; /*0x59c59b*/
  if ( (v2 == 3 || v2 == 4) && *(int *)this->__pad_4C > 20 ) /*0x59c5ac*/
  {
    v3 = 0; /*0x59c5ae*/
    while ( v3 < 10 ) /*0x59c5b5*/
    {
      v6 = 0; /*0x59c5c1*/
      ++v3; /*0x59c5d0*/
      if ( Tiberium::ProcessGrowth((Tiberium *)this, (int)&v6, 0.0, 0) ) /*0x59c5cb*/
      {
        ++this->u32_308; /*0x59c5db*/
        break; /*0x59c5db*/
      }
    }
  }
  v4 = 0; /*0x59c5e1*/
  result = 0; /*0x59c5e3*/
  while ( v4 < 10 ) /*0x59c5e8*/
  {
    v6 = 0; /*0x59c5ee*/
    result = TiberiumClass::Grow((TiberiumClass *)this, &v6); /*0x59c5fb*/
    ++v3; /*0x59c600*/
    if ( result ) /*0x59c603*/
    {
      ++this->u32_308; /*0x59c605*/
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
  VectorClass *v3; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  __int16 v8; // dx
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  __int16 v12; // ax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int Capacity; // ecx
  int Items; // eax
  void *vtable0; // eax
  _DWORD *v20; // edx
  bool v21; // zf
  VectorClass *v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-4h]

  v3 = (VectorClass *)RA2_OPNEW(0x18u); /*0x5a070a*/
  v3 = v3; /*0x5a070f*/
  if ( v3 ) /*0x5a0718*/
  {
    VectorClass::CellConstructor(v3, 0, 0); /*0x5a071e*/
    v4->vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x5a0723*/
    v4[1].Items = (void *)10; /*0x5a0729*/
    v4[1].vtable0 = 0; /*0x5a0730*/
  }
  else
  {
    v4 = 0; /*0x5a0735*/
  }
  v23 = v4; /*0x5a073d*/
  v4[1].Items = (void *)(*(_DWORD *)&this->__pad_4C[308] * *(_DWORD *)&this->__pad_4C[312]); /*0x5a0748*/
  v5 = g_MapCellWidth; /*0x5a074b*/
  if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x5a0758*/
    return &v4->vtable0; /*0x5a08c1*/
  v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a075f*/
  v24 = 0; /*0x5a0765*/
  v25 = g_MapCellWidth * g_MapCellWidth; /*0x5a0769*/
  while ( 2 )
  {
    v7 = *(_DWORD *)(v24 + v6); /*0x5a0775*/
    v8 = IDA_HIWORD(v7); /*0x5a0780*/
    if ( !v7 ) /*0x5a0788*/
      goto LABEL_33; /*0x5a0788*/
    v9 = v6 ? *(_DWORD *)(80 * ((__int16)v7 + v5 * IDA_SHIWORD(v7)) + v6 + 56) : -1;
    if ( v9 != a2 ) /*0x5a07b5*/
      goto LABEL_33; /*0x5a07b5*/
    v10 = 0; /*0x5a07bb*/
    while ( 1 ) /*0x5a07c9*/
    {
      v11 = v10 & 7; /*0x5a07c9*/
      v12 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]) + v7; /*0x5a07cc*/
      IDA_LOWORD(v11) = v8 + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x5a07df*/
      v13 = v12; /*0x5a07e2*/
      v14 = (__int16)v11; /*0x5a07e5*/
      v15 = v13 + (__int16)v11; /*0x5a07e8*/
      if ( v15 <= g_MissionQueueFrame.localVariables[160] ) /*0x5a07f1*/
        goto LABEL_23; /*0x5a07f1*/
      if ( v13 - v14 < g_MissionQueueFrame.localVariables[160] /*0x5a080f*/
        && v14 - v13 < g_MissionQueueFrame.localVariables[160]
        && v15 <= g_MissionQueueFrame.localVariables[161] )
      {
        break; /*0x5a080f*/
      }
      v4 = v23; /*0x5a0849*/
      v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a084d*/
  LABEL_23:
      if ( ++v10 >= 8 ) /*0x5a0841*/
        goto LABEL_33; /*0x5a0841*/
      v8 = IDA_HIWORD(v7); /*0x5a07bf*/
    }
    v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a0811*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a0819*/
      v16 = *(_DWORD *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a082f*/
    else
      v16 = -1; /*0x5a081b*/
    if ( v16 == a2 ) /*0x5a0837*/
    {
      v4 = v23; /*0x5a0839*/
      goto LABEL_23; /*0x5a0839*/
    }
    v4 = v23; /*0x5a0855*/
    Capacity = v23->Capacity; /*0x5a0859*/
    if ( (int)v23[1].vtable0 < Capacity ) /*0x5a0861*/
      goto LABEL_31; /*0x5a0861*/
    if ( v23->IsAllocated || !Capacity ) /*0x5a086c*/
    {
      Items = (int)v23[1].Items; /*0x5a086e*/
      if ( Items > 0 ) /*0x5a0873*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v23->vtable0 + 2))( /*0x5a087e*/
               v23,
               Capacity + Items,
               0) )
        {
  LABEL_31:
          vtable0 = v23[1].vtable0; /*0x5a0885*/
          v20 = v23->Items; /*0x5a0888*/
          v23[1].vtable0 = (char *)vtable0 + 1; /*0x5a088e*/
          v20[(_DWORD)vtable0] = v7; /*0x5a0891*/
        }
        v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a0894*/
      }
    }
  LABEL_33:
    v21 = v25 == 1; /*0x5a089a*/
    v24 += 80; /*0x5a08a6*/
    --v25; /*0x5a08aa*/
    if ( !v21 ) /*0x5a08ae*/
    {
      v5 = g_MapCellWidth; /*0x5a076f*/
      continue; /*0x5a076f*/
    }
    return &v4->vtable0; /*0x5a08b5*/
  }
}
}
// 0x5A08D0
namespace gamemd {
int RandomMap::SpreadArea(MouseClass * aP1, float a3, MapResourceClass * aP3, short * a4, char a6)
{
  double v6; // st7
  int v8; // eax
  int v9; // esi
  void *v10; // eax
  Heap *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int i; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  RandomMap *v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  RandomMap *v25; // ebx
  int v26; // ecx
  RandomMap *v30; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  Heap v34; // edi
  Heap v37; // ecx
  int v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // eax
  __int16 *v42; // ecx
  Heap v43; // eax
  CellStruct *v44; // edi
  int v45; // edi
  Cell *v46; // eax
  char v47; // al
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  Cell *v52; // eax
  __int16 v54; // ax
  int v56; // ecx
  int v60; // eax
  int v61; // edx
  RandomMap *v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // edi
  unsigned int v66; // edx
  Heap v67; // edi
  Heap v70; // ecx
  int v71; // eax
  Heap v72; // ecx
  bool v73; // zf
  Heap v74; // eax
  CellStruct *v75; // edi
  Heap v76; // eax
  __int16 *v77; // edi
  __int16 *v78; // ecx
  int v79; // eax
  int v80; // ecx
  int *v81; // eax
  Heap v82; // eax
  __int16 *v83; // edi
  double v85; // [esp+4h] [ebp-60h]
  double v86; // [esp+4h] [ebp-60h]
  char v87; // [esp+1Bh] [ebp-49h]
  CellStruct *v88; // [esp+1Ch] [ebp-48h]
  CellStruct *v89; // [esp+1Ch] [ebp-48h]
  __int16 v90[2]; // [esp+20h] [ebp-44h] BYREF
  int v91; // [esp+24h] [ebp-40h]
  int v92; // [esp+28h] [ebp-3Ch]
  void *Block; // [esp+2Ch] [ebp-38h]
  int v94; // [esp+30h] [ebp-34h]
  RandomMap *p_RandomMap_field_0x8; // [esp+34h] [ebp-30h]
  int v96; // [esp+38h] [ebp-2Ch]
  double v97; // [esp+3Ch] [ebp-28h]
  __int64 v98; // [esp+44h] [ebp-20h]
  double v99; // [esp+4Ch] [ebp-18h] BYREF
  double v100; // [esp+54h] [ebp-10h]
  double v101; // [esp+5Ch] [ebp-8h]

  v8 = *(_DWORD *)&this->__pad_4C[308]; /*0x5a08de*/
  p_RandomMap_field_0x8 = this; /*0x5a08e4*/
  v9 = 2 * *(_DWORD *)&this->__pad_4C[312] * v8; /*0x5a08f4*/
  if ( v9 <= 100 ) /*0x5a08f6*/
    v9 = 100; /*0x5a08f8*/
  v10 = (void *)RA2_OPNEW(8 * v9); /*0x5a0905*/
  if ( v10 ) /*0x5a0911*/
  {
    Block = v10; /*0x5a0914*/
    IDA_LODWORD(v98) = v9 - 1; /*0x5a0918*/
  }
  else
  {
    Block = 0; /*0x5a091e*/
  }
  v11 = (Heap *)RA2_OPNEW(0x14u); /*0x5a0929*/
  if ( v11 ) /*0x5a0930*/
  {
    v12 = 2 * *(_DWORD *)&this->__pad_4C[312] * *(_DWORD *)&this->__pad_4C[308]; /*0x5a093f*/
    if ( v12 <= 100 ) /*0x5a0944*/
      v12 = 100; /*0x5a0946*/
    v11[3] = 0; /*0x5a0952*/
    v11[4] = (Heap)-1; /*0x5a0956*/
    *v11 = 0; /*0x5a095d*/
    v11[1] = (Heap)v12; /*0x5a095f*/
    v13 = RA2_OPNEW(4 * v12 + 4); /*0x5a0962*/
    v14 = (int)v11[1]; /*0x5a0967*/
    v11[2] = (Heap)v13; /*0x5a096a*/
    v15 = 0; /*0x5a0970*/
    if ( v14 >= 0 ) /*0x5a0974*/
    {
      do /*0x5a0983*/
      {
        ++v15; /*0x5a0979*/
        *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v15 - 4) = 0; /*0x5a097a*/
      }
      while ( v15 <= *(_DWORD *)&v11[1] ); /*0x5a0983*/
    }
  }
  else
  {
    v11 = 0; /*0x5a0987*/
  }
  v16 = aP3; /*0x5a0989*/
  v91 = 0; /*0x5a098c*/
  v87 = 1; /*0x5a0990*/
  v100 = 0.0; /*0x5a0995*/
  if ( *aP3 ) /*0x5a099d*/
  {
    v100 = 0.0; /*0x5a09b0*/
  }
  else if ( aP3[2] != 512 ) /*0x5a09c5*/
  {
    v100 = 3.141592653589793; /*0x5a09c7*/
  }
  if ( aP3[1] ) /*0x5a09d7*/
  {
    v100 = 4.71238898038469; /*0x5a09dc*/
  }
  else if ( aP3[3] != 512 ) /*0x5a09f1*/
  {
    v100 = 1.570796326794897; /*0x5a09f3*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a0a08*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a0a19*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v96 = *(_DWORD *)(i + 36); /*0x5a0a1e*/
    *(_DWORD *)(80 * ((__int16)v96 + g_MapCellWidth * IDA_SHIWORD(v96)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0a43*/
  }
  v18 = RandomMap::CellListAlloc(p_RandomMap_field_0x8, aP1); /*0x5a0a58*/
  v19 = v18[4]; /*0x5a0a5d*/
  *(_DWORD *)v90 = v18; /*0x5a0a60*/
  v88 = (CellStruct *)v19; /*0x5a0a66*/
  v92 = 0; /*0x5a0a6a*/
  if ( v19 > 0 ) /*0x5a0a6e*/
  {
    v20 = (RandomMap *)Block; /*0x5a0a74*/
    while ( 1 ) /*0x5a0a83*/
    {
      v21 = *v16; /*0x5a0a83*/
      v94 = *(_DWORD *)(*(_DWORD *)(v90->u32_4 + 4 * v92); /*0x5a0a88*/
      v22 = IDA_SHIWORD(v94); /*0x5a0a8c*/
      v23 = (__int16)v94; /*0x5a0a91*/
      if ( (__int16)v94 >= v21 ) /*0x5a0a96*/
      {
        if ( (__int16)v94 >= v21 + v16[2] ) /*0x5a0aa3*/
          goto LABEL_48; /*0x5a0aa3*/
        v16 = aP3; /*0x5a0aa9*/
        v24 = aP3[1]; /*0x5a0aac*/
        if ( IDA_SHIWORD(v94) >= v24 ) /*0x5a0ab1*/
          break; /*0x5a0ab1*/
      }
  LABEL_49:
      if ( ++v92 >= (int)v88 ) /*0x5a0c28*/
      {
        v18 = *(_DWORD **)v90; /*0x5a0c2e*/
        goto LABEL_51; /*0x5a0c2e*/
      }
    }
    if ( IDA_SHIWORD(v94) < v24 + aP3[3] ) /*0x5a0abe*/
    {
      *(_DWORD *)v20->__pad_0 = v94; /*0x5a0ac8*/
      v25 = (RandomMap *)(v23 - *a4); /*0x5a0ad2*/
      v26 = v22 - a4[1]; /*0x5a0ad8*/
      p_RandomMap_field_0x8 = v25; /*0x5a0ada*/
      v96 = v26; /*0x5a0ae0*/
      if ( v25 ) /*0x5a0ae4*/
      {
        __asm { fild dword ptr [esp+58h+var_2C] } /*0x5a0aea*/
        __asm
        {
          fidiv [esp+60h+var_30]
          fchs
          fstp [esp+60h+var_60]; double
        }
        Math::ArcTan(v85); /*0x5a0afa*/
        if ( (int)v25 < 0 ) /*0x5a0b04*/
          __asm { fadd ds:dbl_7E44D0 } /*0x5a0b06*/
      }
      else
      {
        __asm { fld ds:dbl_7E2820 } /*0x5a0be9*/
      }
      __asm /*0x5a0b0c*/
      {
        fsub [esp+58h+var_10]
        fabs
        fcom ds:dbl_7E3CC0
        fst qword ptr [esp+58h+var_18]
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x5a0b21*/
      {
        do /*0x5a0b34*/
        {
          __asm /*0x5a0b23*/
          {
            fsub ds:dbl_7E3CC0
            fcom ds:dbl_7E3CC0
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) == 0 ); /*0x5a0b34*/
        __asm { fst qword ptr [esp+58h+var_18] } /*0x5a0b36*/
      }
      __asm /*0x5a0b3a*/
      {
        fcom ds:dbl_7E44D0
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a0b45*/
      {
        __asm /*0x5a0b47*/
        {
          fld ds:dbl_7E3CC0
          fsub st, st(1)
          fstp qword ptr [esp+58h+var_18]
        }
      }
      __asm { fstp st } /*0x5a0b58*/
      v98 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0b5f*/
      __asm { fild [esp+58h+var_20] } /*0x5a0b6b*/
      v30 = v20; /*0x5a0b73*/
      v20 = (RandomMap *)((char *)v20 + 8); /*0x5a0b76*/
      __asm /*0x5a0b79*/
      {
        fmul ds:dbl_7ED898
        fld qword ptr [esp+58h+var_18]
        fmul ds:dbl_7ED798
        fxch st(1)
        fmul ds:dbl_7ED790
      }
      ++v91; /*0x5a0b91*/
      v96 = (int)v30; /*0x5a0b95*/
      p_RandomMap_field_0x8 = v20; /*0x5a0b99*/
      __asm /*0x5a0b9d*/
      {
        faddp st(1), st
        fstp dword ptr [edi-4]
      }
      *(float *)&v20[-1].RandomMap_field_0x20C = _ET1; /*0x5a0b9f*/
      v32 = *(_DWORD *)v11 + 1; /*0x5a0ba7*/
      IDA_LODWORD(v97) = *(_DWORD *)&v30->RandomMap_field_0x2[2]; /*0x5a0ba8*/
      v33 = v32 >> 1; /*0x5a0bb1*/
      if ( v32 < *(_DWORD *)&v11[1] ) /*0x5a0bb5*/
      {
        if ( v32 <= 1 ) /*0x5a0bba*/
        {
          v16 = aP3; /*0x5a0bf4*/
        }
        else
        {
          do /*0x5a0bda*/
          {
            v34 = v11[2]; /*0x5a0bbc*/
            _EBX = *(_DWORD *)(*(_DWORD *)&v34 + 4 * v33); /*0x5a0bbf*/
            __asm /*0x5a0bc2*/
            {
              fld dword ptr [ebx+4]
              fcomp dword ptr [esp+58h+var_2C+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x5a0bce*/
              break; /*0x5a0bce*/
            *(_DWORD *)(*(_DWORD *)&v34 + 4 * v32) = _EBX; /*0x5a0bd0*/
            v32 = v33; /*0x5a0bd3*/
            v33 >>= 1; /*0x5a0bd5*/
          }
          while ( v32 > 1 ); /*0x5a0bda*/
          v16 = aP3; /*0x5a0bdc*/
          v30 = (RandomMap *)v96; /*0x5a0bdf*/
          v20 = p_RandomMap_field_0x8; /*0x5a0be3*/
        }
        *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v32) = v30; /*0x5a0bfa*/
        v37 = v11[3]; /*0x5a0bff*/
        ++*(_DWORD *)v11; /*0x5a0c05*/
        if ( (unsigned int)v30 > *(_DWORD *)&v37 ) /*0x5a0c07*/
          v11[3] = (Heap)v30; /*0x5a0c09*/
        if ( (unsigned int)v30 < *(_DWORD *)&v11[4] ) /*0x5a0c0f*/
          v11[4] = (Heap)v30; /*0x5a0c11*/
        goto LABEL_49; /*0x5a0c14*/
      }
    }
  LABEL_48:
    v16 = aP3; /*0x5a0c16*/
    goto LABEL_49; /*0x5a0c16*/
  }
  LABEL_51:
  if ( v18 ) /*0x5a0c36*/
    (*(void (__thiscall **)(_DWORD *, int))*v18)(v18, 1); /*0x5a0c3e*/
  __asm /*0x5a0c40*/
  {
    fldln2
    fild [esp+58h+var_48]
    fyl2x
    fld ds:dbl_7E1718
    fcomp st(1)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x5a0c55*/
  {
    __asm /*0x5a0c57*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm /*0x5a0c5f*/
  {
    fdivr ds:dbl_7E1718
    fmul [ebp+arg_4]
    fdivr ds:flt_7E2AC8
    fmul ds:flt_7E5168
  }
  IDA_LOWORD(v39) = Math::RoundToInt(v6); /*0x5a0c74*/
  v92 = v39; /*0x5a0c79*/
  v40 = v39 / 2; /*0x5a0c82*/
  *(_QWORD *)&v99 = (unsigned int)(v39 / 2 + 1); /*0x5a0c8d*/
  __asm /*0x5a0c91*/
  {
    fild qword ptr [esp+58h+var_18]
    fstp [esp+58h+var_8]
  }
  do /*0x5a0cc0*/
  {
    *(_QWORD *)&v99 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0ca3*/
    __asm /*0x5a0cab*/
    {
      fild qword ptr [esp+58h+var_18]
      fmul [esp+58h+var_8]
      fmul ds:dbl_7ED898
    }
    IDA_LOWORD(v41) = Math::RoundToInt(v6); /*0x5a0cb9*/
  }
  while ( v41 > v40 ); /*0x5a0cc0*/
  v92 += v41; /*0x5a0cc8*/
  if ( *v11 ) /*0x5a0ccc*/
  {
    v43 = v11[2]; /*0x5a0cda*/
    v44 = *(CellStruct **)(*(_DWORD *)&v43 + 4); /*0x5a0ce2*/
    *(_DWORD *)(*(_DWORD *)&v43 + 4) = *(_DWORD *)(*(_DWORD *)&v43 + 4 * *(_DWORD *)v11); /*0x5a0ce5*/
    *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a0ced*/
    Heap::SiftDown(v11, 1); /*0x5a0cf7*/
    v89 = v44; /*0x5a0cfc*/
    v42 = (__int16 *)v44; /*0x5a0d00*/
  }
  else
  {
    v42 = 0; /*0x5a0cd2*/
    v89 = 0; /*0x5a0cd4*/
  }
  v94 = 0; /*0x5a0d06*/
  if ( v92 <= 0 ) /*0x5a0d0c*/
    goto LABEL_113; /*0x5a0d0c*/
  while ( v87 && v42 ) /*0x5a0d26*/
  {
    v45 = g_MissionQueueFrame.localVariables[163] + 80 * (*v42 + g_MapCellWidth * v42[1]); /*0x5a0d48*/
    if ( !*(_DWORD *)(v45 + 56) ) /*0x5a0d4a*/
    {
      v46 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x5a0d57*/
      if ( (unsigned __int8)Cell::IsEmpty(v46) ) /*0x5a0d5e*/
      {
        *(_BYTE *)(v45 + 75) = 1; /*0x5a0d6a*/
        *(_DWORD *)(v45 + 56) = aP1; /*0x5a0d6e*/
      }
      v42 = (__int16 *)v89; /*0x5a0d71*/
    }
    v47 = 0; /*0x5a0d7d*/
    v96 = 0; /*0x5a0d82*/
    p_RandomMap_field_0x8 = (RandomMap *)((char *)Block + 8 * v91); /*0x5a0d86*/
    while ( 1 ) /*0x5a0df4*/
    {
      IDA_LODWORD(v97) = *CellStruct::Add((CellStruct *)v42, &v99, (_WORD *)(4 * (v47 & 7) + 9041544)); /*0x5a0dad*/
      *(_DWORD *)v90 = IDA_LODWORD(v97); /*0x5a0db1*/
      v48 = IDA_SWORD1(v97) + SLOWORD(v97); /*0x5a0dbd*/
      if ( v48 <= g_MissionQueueFrame.localVariables[160] /*0x5a0de6*/
        || SLOWORD(v97) - IDA_SWORD1(v97) >= g_MissionQueueFrame.localVariables[160]
        || IDA_SWORD1(v97) - SLOWORD(v97) >= g_MissionQueueFrame.localVariables[160]
        || v48 > g_MissionQueueFrame.localVariables[161] )
      {
        goto LABEL_108; /*0x5a0de6*/
      }
      v49 = g_MissionQueueFrame.localVariables[163]; /*0x5a0dec*/
      if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5a0df4*/
        goto LABEL_105; /*0x5a0df4*/
      v50 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v97) + g_MapCellWidth * IDA_SWORD1(v97)); /*0x5a0e0b*/
      if ( !*(_DWORD *)(v50 + 56) && *(_DWORD *)(v50 + 60) != aP1 && SLOWORD(v97) >= *aP3 ) /*0x5a0e2d*/
      {
        if ( SLOWORD(v97) < *aP3 + aP3[2] ) /*0x5a0e3a*/
        {
          v51 = aP3[1]; /*0x5a0e40*/
          if ( IDA_SWORD1(v97) >= v51 && IDA_SWORD1(v97) < v51 + aP3[3] ) /*0x5a0e52*/
          {
            v52 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v90); /*0x5a0e62*/
            if ( (unsigned __int8)Cell::IsEmpty(v52) ) /*0x5a0e69*/
            {
              p_RandomMap_field_0x8 = p_RandomMap_field_0x8; /*0x5a0e76*/
              v54 = v90[0]; /*0x5a0e7a*/
              *(_DWORD *)p_RandomMap_field_0x8->__pad_0 = *(_DWORD *)v90; /*0x5a0e81*/
              v56 = v90[1] - a4[1]; /*0x5a0e94*/
              p_RandomMap_field_0x8 = (RandomMap *)(v54 - *a4); /*0x5a0e98*/
              p_RandomMap_field_0x8 = p_RandomMap_field_0x8; /*0x5a0e92*/
              IDA_LODWORD(v97) = v56; /*0x5a0e9c*/
              if ( p_RandomMap_field_0x8 ) /*0x5a0ea0*/
              {
                __asm { fild dword ptr [esp+58h+var_2C+4] } /*0x5a0ea6*/
                __asm
                {
                  fidiv [esp+60h+var_30]
                  fchs
                  fstp [esp+60h+var_60]; double
                }
                Math::ArcTan(v86); /*0x5a0eb6*/
                if ( (int)p_RandomMap_field_0x8 < 0 ) /*0x5a0ec0*/
                  __asm { fadd ds:dbl_7E44D0 } /*0x5a0ec2*/
              }
              else
              {
                __asm { fld ds:dbl_7E2820 } /*0x5a0fe5*/
              }
              __asm /*0x5a0ec8*/
              {
                fsub [esp+58h+var_10]
                fabs
                fcom ds:dbl_7E3CC0
                fst [esp+58h+var_2C+4]
                fnstsw ax
              }
              if ( (_AX & 0x100) == 0 ) /*0x5a0edd*/
              {
                do /*0x5a0ef0*/
                {
                  __asm /*0x5a0edf*/
                  {
                    fsub ds:dbl_7E3CC0
                    fcom ds:dbl_7E3CC0
                    fnstsw ax
                  }
                }
                while ( (_AX & 0x100) == 0 ); /*0x5a0ef0*/
                __asm { fst [esp+58h+var_2C+4] } /*0x5a0ef2*/
              }
              __asm /*0x5a0ef6*/
              {
                fcom ds:dbl_7E44D0
                fnstsw ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x5a0f01*/
              {
                __asm /*0x5a0f03*/
                {
                  fld ds:dbl_7E3CC0
                  fsub st, st(1)
                  fstp [esp+58h+var_2C+4]
                }
              }
              __asm { fstp st } /*0x5a0f14*/
              *(_QWORD *)&v101 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0f1b*/
              __asm { fild [esp+58h+var_8] } /*0x5a0f27*/
              v60 = v90[1]; /*0x5a0f2b*/
              __asm /*0x5a0f30*/
              {
                fmul ds:dbl_7ED898
                fld [esp+58h+var_2C+4]
                fmul ds:dbl_7ED798
                fxch st(1)
                fmul ds:dbl_7ED790
              }
              v61 = v90[0]; /*0x5a0f48*/
              __asm /*0x5a0f4d*/
              {
                faddp st(1), st
                fstp dword ptr [ebx+4]
              }
              *(float *)&p_RandomMap_field_0x8->RandomMap_field_0x2[2] = _ET1; /*0x5a0f4f*/
              *(_DWORD *)(80 * (v61 + g_MapCellWidth * v60) + g_MissionQueueFrame.localVariables[163] + 60) = aP1; /*0x5a0f6a*/
              v63 = p_RandomMap_field_0x8; /*0x5a0f73*/
              ++v91; /*0x5a0f75*/
              v64 = *(_DWORD *)v11 + 1; /*0x5a0f81*/
              IDA_LODWORD(v98) = *(_DWORD *)&p_RandomMap_field_0x8->RandomMap_field_0x2[2]; /*0x5a0f82*/
              v65 = (unsigned int)v11[1]; /*0x5a0f86*/
              v66 = v64 >> 1; /*0x5a0f8b*/
              IDA_LODWORD(v97) = p_RandomMap_field_0x8; /*0x5a0f8f*/
              p_RandomMap_field_0x8 = (RandomMap *)&p_RandomMap_field_0x8->RandomMap_field_0x8; /*0x5a0f93*/
              if ( v64 < v65 ) /*0x5a0f97*/
              {
                if ( v64 > 1 ) /*0x5a0fa0*/
                {
                  do /*0x5a0fc0*/
                  {
                    v67 = v11[2]; /*0x5a0fa2*/
                    _EBX = *(_DWORD *)(*(_DWORD *)&v67 + 4 * v66); /*0x5a0fa5*/
                    __asm /*0x5a0fa8*/
                    {
                      fld dword ptr [ebx+4]
                      fcomp dword ptr [esp+58h+var_20]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x5a0fb4*/
                      break; /*0x5a0fb4*/
                    *(_DWORD *)(*(_DWORD *)&v67 + 4 * v64) = _EBX; /*0x5a0fb6*/
                    v64 = v66; /*0x5a0fb9*/
                    v66 >>= 1; /*0x5a0fbb*/
                  }
                  while ( v64 > 1 ); /*0x5a0fc0*/
                  v63 = (RandomMap *)IDA_LODWORD(v97); /*0x5a0fc2*/
                }
                *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * v64) = v63; /*0x5a0fc9*/
                v70 = v11[3]; /*0x5a0fce*/
                ++*(_DWORD *)v11; /*0x5a0fd4*/
                if ( (unsigned int)v63 > *(_DWORD *)&v70 ) /*0x5a0fd6*/
                  v11[3] = (Heap)v63; /*0x5a0fd8*/
                if ( (unsigned int)v63 < *(_DWORD *)&v11[4] ) /*0x5a0fde*/
                  v11[4] = (Heap)v63; /*0x5a0fe0*/
              }
              goto LABEL_108; /*0x5a0fe3*/
            }
          }
        }
        v49 = g_MissionQueueFrame.localVariables[163]; /*0x5a0ff0*/
      }
      if ( v49 ) /*0x5a0ff8*/
      {
        v71 = *(_DWORD *)(80 * (v90[0] + g_MapCellWidth * v90[1]) + v49 + 56); /*0x5a1013*/
        if ( !v71 ) /*0x5a1019*/
          goto LABEL_108; /*0x5a1019*/
      }
      else
      {
  LABEL_105:
        v71 = -1; /*0x5a101d*/
      }
      if ( v71 != aP1 ) /*0x5a1023*/
        v87 = 0; /*0x5a1025*/
  LABEL_108:
      v47 = v96 + 2; /*0x5a102e*/
      v96 += 2; /*0x5a1034*/
      if ( v96 >= 8 ) /*0x5a1038*/
        break; /*0x5a1038*/
      v42 = (__int16 *)v89; /*0x5a0d8c*/
    }
    ++v94; /*0x5a1043*/
    Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a104c*/
    __asm { fmul ds:dbl_7E3D88 } /*0x5a1051*/
    v72 = *v11; /*0x5a1057*/
    v73 = *v11 == 0; /*0x5a1059*/
    __asm /*0x5a105b*/
    {
      fadd [esp+58h+var_10]
      fstp [esp+58h+var_10]
    }
    if ( v73 ) /*0x5a1063*/
    {
      v89 = (CellStruct *)v72; /*0x5a1065*/
    }
    else
    {
      v74 = v11[2]; /*0x5a106b*/
      v75 = *(CellStruct **)(*(_DWORD *)&v74 + 4); /*0x5a1073*/
      *(_DWORD *)(*(_DWORD *)&v74 + 4) = *(_DWORD *)(*(_DWORD *)&v74 + 4 * *(_DWORD *)&v72); /*0x5a1076*/
      *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a107e*/
      Heap::SiftDown(v11, 1); /*0x5a108c*/
      v89 = v75; /*0x5a1091*/
    }
    if ( v94 < v92 ) /*0x5a109f*/
    {
      v42 = (__int16 *)v89; /*0x5a0d14*/
      continue; /*0x5a0d14*/
    }
    break;
  }
  LABEL_113:
  if ( a6 ) /*0x5a10aa*/
  {
    if ( *v11 ) /*0x5a10b0*/
    {
      v76 = v11[2]; /*0x5a10ba*/
      v77 = *(__int16 **)(*(_DWORD *)&v76 + 4); /*0x5a10c2*/
      *(_DWORD *)(*(_DWORD *)&v76 + 4) = *(_DWORD *)(*(_DWORD *)&v76 + 4 * *(_DWORD *)v11); /*0x5a10c5*/
      *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a10cd*/
      Heap::SiftDown(v11, 1); /*0x5a10db*/
      v78 = v77; /*0x5a10e2*/
      if ( v77 ) /*0x5a10e4*/
      {
        while ( v87 ) /*0x5a10ef*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a10f9*/
          {
            v79 = 80 * (*v78 + g_MapCellWidth * v78[1]); /*0x5a110e*/
            v80 = *(_DWORD *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1111*/
            v81 = (int *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1115*/
            if ( !v80 ) /*0x5a111b*/
            {
              *v81 = aP1; /*0x5a111d*/
              goto LABEL_123; /*0x5a111f*/
            }
          }
          else
          {
            v80 = -1; /*0x5a1121*/
          }
          if ( v80 != aP1 ) /*0x5a1126*/
            v87 = 0; /*0x5a1128*/
  LABEL_123:
          if ( !*(_DWORD *)v11 ) /*0x5a112d*/
            break; /*0x5a112d*/
          v82 = v11[2]; /*0x5a1133*/
          v83 = *(__int16 **)(*(_DWORD *)&v82 + 4); /*0x5a113b*/
          *(_DWORD *)(*(_DWORD *)&v82 + 4) = *(_DWORD *)(*(_DWORD *)&v82 + 4 * *(_DWORD *)v11); /*0x5a113e*/
          *(_DWORD *)(*(_DWORD *)&v11[2] + 4 * (*(_DWORD *)v11)--) = 0; /*0x5a1148*/
          Heap::SiftDown(v11, 1); /*0x5a1154*/
          v78 = v83; /*0x5a115b*/
          if ( !v83 ) /*0x5a115d*/
            break; /*0x5a115d*/
          continue; /*0x5a115d*/
        }
      }
    }
  }
  RA2_OPDEL(Block); /*0x5a115f*/
  if ( v11 ) /*0x5a116e*/
    Scalar::Dtor((Scalar *)v11, 1); /*0x5a1174*/
  return v87; /*0x5a117d*/
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
  v3 = *(&this->Items5); /*0x5a23b4*/
  v4 = *(&this->Items6); /*0x5a23b7*/
  v1 = v1; /*0x5a23bd*/
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
                                      + (IDA_SHIWORD(v16) - v15) * (IDA_SHIWORD(v16) - v15)));
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
          v1 = v1; /*0x5a2548*/
        }
        Math::RoundToInt((double)v1->q054 * 0.01 * (double)(v1[176] - v1->u32_2BC) + (double)v1->u32_2BC); /*0x5a2575*/
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
                v28 = IDA_SHIWORD(v26); /*0x5a26aa*/
                v29 = (int16_t)v26; /*0x5a26af*/
                do /*0x5a26fa*/
                {
                  v30 = *(unsigned int *)(*(unsigned int *)(v25 + 4) + 4 * v27); /*0x5a26b8*/
                  v31 = Math::Sqrt((double)(((int16_t)v30 - v29) * ((int16_t)v30 - v29) /*0x5a26e2*/
                                          + (IDA_SHIWORD(v30) - v28) * (IDA_SHIWORD(v30) - v28)));
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
                && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v65[2])(&v65, v70 + v67, 0) )
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
            v34 = v34; /*0x5a279c*/
            do /*0x5a27bc*/
            {
              if ( *(double *)v36 < v61 ) /*0x5a27a9*/
              {
                v38 = v36[1]; /*0x5a27ad*/
                IDA_LODWORD(v61) = *v36; /*0x5a27b0*/
                IDA_HIDWORD(v61) = v38; /*0x5a27b4*/
              }
              v36 += 2; /*0x5a27b8*/
              --v34; /*0x5a27bb*/
            }
            while ( v34 ); /*0x5a27bc*/
          }
          v52 = 0; /*0x5a27da*/
          if ( v1->u32_40 == 3 ) /*0x5a27c6*/
          {
            v39 = v1->u32_3C; /*0x5a27c8*/
            if ( v39 == 1 || v39 == 3 || v39 == 4 ) /*0x5a27d8*/
              v52 = 1; /*0x5a27c6*/
          }
          v40 = 0; /*0x5a27e6*/
          if ( v34 > 0 ) /*0x5a27ea*/
          {
            v45 = v45; /*0x5a27ec*/
            do /*0x5a2837*/
            {
              v43 = Math::RoundToInt((v35[v40] - v61) * 15.0) + 500; /*0x5a2816*/
              v42 = (int16_t *)ScenarioClass::Get_Waypoint_Location(v59, v45); /*0x5a281d*/
              Terrain::PlaceTiberiumTrees(v42, v43, v45 + 1, v52); /*0x5a2827*/
              v35 = (double *)Block; /*0x5a282f*/
              ++v40; /*0x5a2833*/
              ++v45; /*0x5a2834*/
            }
            while ( v40 < v6[8] ); /*0x5a2837*/
          }
          v45 += v6[8]; /*0x5a2846*/
          if ( v35 ) /*0x5a2852*/
          {
            if ( v68 ) /*0x5a285d*/
            {
              RA2_OPDEL(v35); /*0x5a2860*/
              Block = 0; /*0x5a2868*/
            }
          }
          v67 = 0; /*0x5a286c*/
          v1 = v1; /*0x5a2873*/
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
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a3af8*/
  for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x5a3b0b*/
  {
    IDA_LODWORD(v39) = *(unsigned int *)(i + 36); /*0x5a3b10*/
    *((unsigned int *)g_MapTileArray + 20 * SLOWORD(v39) + 20 * g_MapCellWidth * IDA_SWORD1(v39) + 15) = 0; /*0x5a3b35*/
  }
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a3b47*/
  Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x5a3b56*/
  do /*0x5a3b86*/
  {
    v44 = (unsigned long long)((unsigned int)Random::State(&g_Randomizer)); /*0x5a3b62*/
    v38 = Math::RoundToInt((double)((long long)(v44)) * 0.000000004889443517869674 + 20.0); /*0x5a3b82*/
  }
  while ( (unsigned int)v38 > 0x28 ); /*0x5a3b86*/
  do /*0x5a3bb6*/
  {
    v44 = (unsigned long long)((unsigned int)Random::State(&g_Randomizer)); /*0x5a3b92*/
    v33 = Math::RoundToInt((double)((long long)(v44)) * 0.000000004889443517869674 + 20.0); /*0x5a3bb2*/
  }
  while ( (unsigned int)v33 > 0x28 ); /*0x5a3bb6*/
  do /*0x5a3be6*/
  {
    v44 = (unsigned long long)((unsigned int)Random::State(&g_Randomizer)); /*0x5a3bc2*/
    v40 = Math::RoundToInt((double)((long long)(v44)) * 0.000000004889443517869674 + 20.0); /*0x5a3be2*/
  }
  while ( (unsigned int)v40 > 0x28 ); /*0x5a3be6*/
  if ( Bit ) /*0x5a3bea*/
  {
    do /*0x5a3f0a*/
    {
      IDA_LODWORD(v39) = *(unsigned int *)(Bit + 36); /*0x5a3bf9*/
      v4 = (double *)((char *)g_MapTileArray + 80 * SLOWORD(v39) + 80 * g_MapCellWidth * IDA_SWORD1(v39)); /*0x5a3c16*/
      if ( Cell::IsEmpty((unsigned int *)Bit) /*0x5a3c47*/
        && !*(unsigned char *)(Bit + 284)
        && *(unsigned int *)(Bit + 68) == -1
        && !*(unsigned int *)(Bit + 228)
        && !*((unsigned char *)v4 + 69) )
      {
        IDA_LODWORD(v39) = *(unsigned int *)(Bit + 36); /*0x5a3c58*/
        v5 = SLOWORD(v39) + (IDA_SWORD1(v39) << 9); /*0x5a3c67*/
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
              FloodFillPathfinding(Bit, dword_AA0E18, v30, v5, 0); /*0x5a3ef7*/
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
      Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x5a3f06*/
    }
    while ( Bit ); /*0x5a3f0a*/
    v1 = this; /*0x5a3f10*/
  }
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a3f19*/
  for ( j = LayerClass::CellIteratorNext(&MapClass_Instance); j; j = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x5a3f2a*/
    CellClass::DetermineTileType(j); /*0x5a3f2e*/
  IDA_LODWORD(v39) = Math::RoundToInt(((double)v1->q064 * 0.1 + 0.7) * ((double)v1[23] * 0.01) * (double)v1->u32_2FC); /*0x5a3f68*/
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
        v8 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a3f8b*/
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
        v11 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v38); /*0x5a3fe2*/
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
      v13 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v40); /*0x5a4099*/
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
      v20 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4141*/
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
      v23 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v40); /*0x5a41c2*/
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
        v44 = (unsigned long long)((unsigned int)Random::State(&g_Randomizer)); /*0x5a422b*/
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
  double v1; // st7
  int i; // eax
  int v4; // esi
  int v9; // eax
  CellClass *j; // eax
  int result; // eax
  int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // esi
  _WORD *v16; // eax
  Cell *v17; // eax
  int v18; // eax
  int v23; // eax
  void *v24; // eax
  bool v25; // cc
  int v26; // [esp-Ch] [ebp-5Ch]
  double v27; // [esp-8h] [ebp-58h]
  int v29; // [esp+18h] [ebp-38h]
  __int16 v30[2]; // [esp+20h] [ebp-30h] BYREF
  int v31; // [esp+24h] [ebp-2Ch]
  __int16 v32[2]; // [esp+28h] [ebp-28h] BYREF
  __int16 v33; // [esp+2Ch] [ebp-24h] BYREF
  double v34; // [esp+30h] [ebp-20h]
  double v35; // [esp+38h] [ebp-18h]
  __int64 v36; // [esp+40h] [ebp-10h]
  __int64 v37; // [esp+48h] [ebp-8h]

  _EDI = this; /*0x5a428d*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a4298*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42ab*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v31 = *(_DWORD *)(i + 36); /*0x5a42b0*/
    *(_DWORD *)(80 * ((__int16)v31 + g_MapCellWidth * IDA_SHIWORD(v31)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a42d5*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42e7*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a42f6*/
  if ( v4 ) /*0x5a42fa*/
  {
    do /*0x5a43e6*/
    {
      v31 = v4->smudgeTypeIndex; /*0x5a4309*/
      _EBP = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v31 + g_MapCellWidth * IDA_SHIWORD(v31)); /*0x5a4326*/
      if ( (unsigned __int8)Cell::IsEmpty((Cell *)v4) ) /*0x5a4328*/
      {
        if ( !v4->slopeIndex && !*(_BYTE *)(_EBP + 69) ) /*0x5a4341*/
        {
          v31 = v4->smudgeTypeIndex; /*0x5a4352*/
          *(_QWORD *)&v35 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4368*/
          __asm /*0x5a4370*/
          {
            fild [esp+50h+var_18]
            fmul ds:dbl_7ED898
            fcomp qword ptr [ebp+28h]
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x5a4382*/
          {
            do /*0x5a43ba*/
            {
              do /*0x5a43a9*/
              {
                Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4389*/
                __asm /*0x5a438e*/
                {
                  fmul ds:dbl_7ECE60
                  fadd ds:dbl_7E44C8
                  fst [esp+50h+var_20]
                  fcomp ds:dbl_7E3CC8
                  fnstsw ax
                }
              }
              while ( (_AX & 0x100) != 0 ); /*0x5a43a9*/
              __asm /*0x5a43ab*/
              {
                fld [esp+50h+var_20]
                fcomp ds:dbl_7E1728
                fnstsw ax
              }
            }
            while ( (_AX & 0x4100) == 0 ); /*0x5a43ba*/
            __asm { fld [esp+50h+var_20] } /*0x5a43bc*/
            IDA_LOWORD(v9) = Math::RoundToInt(v1); /*0x5a43c2*/
            FloodFillPathfinding(v4, dword_ABC2B8, v9, (__int16)v31 + (IDA_SHIWORD(v31) << 9), 0); /*0x5a43d3*/
          }
        }
      }
      v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a43e2*/
    }
    while ( v4 ); /*0x5a43e6*/
    _EDI = this; /*0x5a43ec*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a43f5*/
  for ( j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a4406*/
        j;
        j = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    CellClass::DetermineTileType(j); /*0x5a440a*/
  }
  __asm /*0x5a441d*/
  {
    fild dword ptr [edi+64h]
    fmul ds:dbl_7E3860
    fadd ds:dbl_7EDAC0
    fild dword ptr [edi+5Ch]
    fmul ds:dbl_7E3808
    fmulp st(1), st
    fimul dword ptr [edi+2FCh]
  }
  IDA_LOWORD(result) = Math::RoundToInt(v1); /*0x5a443d*/
  v31 = result; /*0x5a4444*/
  v29 = 0; /*0x5a4448*/
  if ( result > 0 ) /*0x5a444c*/
  {
    do /*0x5a45cf*/
    {
      if ( v29 >= 100 ) /*0x5a4457*/
        break; /*0x5a4457*/
      v12 = 0; /*0x5a445d*/
      do /*0x5a44f7*/
      {
        v13 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4467*/
        do /*0x5a44c2*/
        {
          v36 = v13 + 1; /*0x5a4471*/
          __asm /*0x5a4475*/
          {
            fild [esp+50h+var_10]
            fstp [esp+50h+var_18]
          }
          do /*0x5a44a6*/
          {
            v37 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4487*/
            __asm /*0x5a448f*/
            {
              fild [esp+50h+var_8]
              fmul [esp+50h+var_18]
              fmul ds:dbl_7ED898
            }
            IDA_LOWORD(v14) = Math::RoundToInt(v1); /*0x5a449d*/
            v14 = v14; /*0x5a44a2*/
          }
          while ( v14 > v13 ); /*0x5a44a6*/
          v16 = CellStruct::Set((CellStruct *)&v33, 0, 0); /*0x5a44ae*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a44c2*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v14),
                                   v16) );
        ++v12; /*0x5a44d6*/
        *(_DWORD *)v30 = *(_DWORD *)(80 * v14 + g_MissionQueueFrame.localVariables[163]); /*0x5a44e0*/
        if ( v12 > 200 ) /*0x5a44e4*/
        {
          v18 = 0; /*0x5a450f*/
          goto LABEL_27; /*0x5a4513*/
        }
        v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x5a44f0*/
      }
      while ( !(unsigned __int8)Cell::IsEmpty(v17) ); /*0x5a44f7*/
      v18 = *(_DWORD *)v30; /*0x5a4515*/
  LABEL_27:
      *(_DWORD *)v18 = v18; /*0x5a4519*/
      do /*0x5a4553*/
      {
        do /*0x5a4542*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a4522*/
          __asm /*0x5a4527*/
          {
            fmul ds:dbl_7E3860
            fadd ds:dbl_7E3548
            fst [esp+50h+var_20]
            fcomp ds:dbl_7E8AE8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a4542*/
        __asm /*0x5a4544*/
        {
          fld [esp+50h+var_20]
          fcomp ds:dbl_7E3550
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a4553*/
      do /*0x5a458b*/
      {
        do /*0x5a457a*/
        {
          Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x5a455a*/
          __asm /*0x5a455f*/
          {
            fmul ds:dbl_7E44A8
            fadd ds:dbl_7EDAB8
            fst [esp+50h+var_18]
            fcomp ds:dbl_7E44A8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a457a*/
        __asm /*0x5a457c*/
        {
          fld [esp+50h+var_18]
          fcomp ds:dbl_7EDA10
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a458b*/
      __asm { fld [esp+50h+var_18] } /*0x5a4595*/
      v34 = v34; /*0x5a459a*/
      IDA_LOWORD(v23) = Math::RoundToInt(v1); /*0x5a459b*/
      v23 = v23; /*0x5a45a4*/
      v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x5a45ab*/
      result = ScatterTerrainTrees((int)v24, v23, v34); /*0x5a45b5*/
      v25 = v31 - result <= 0; /*0x5a45c5*/
      v31 -= result; /*0x5a45c7*/
      ++v29; /*0x5a45cb*/
    }
    while ( !v25 ); /*0x5a45cf*/
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
  char *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  char *v8; // eax
  int v9; // edi
  int v10; // eax
  int result; // eax
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v16; // esi
  _WORD *v17; // eax
  Cell *v18; // eax
  int v19; // eax
  ObjectClass *v20; // esi
  __int16 v21[2]; // [esp+10h] [ebp-4Ch] BYREF
  int v22; // [esp+14h] [ebp-48h]
  int v23; // [esp+18h] [ebp-44h]
  int v24; // [esp+1Ch] [ebp-40h]
  __int16 v25[2]; // [esp+20h] [ebp-3Ch] BYREF
  int v28; // [esp+30h] [ebp-2Ch]
  ObjectClass *v29; // [esp+34h] [ebp-28h]
  __int16 v30; // [esp+38h] [ebp-24h] BYREF
  __int64 v31; // [esp+3Ch] [ebp-20h]
  __int64 v32; // [esp+44h] [ebp-18h]
  int v33[4]; // [esp+4Ch] [ebp-10h] BYREF

  v1 = dword_ABC1D4; /*0x5a80b3*/
  v29 = (ObjectClass *)this; /*0x5a80c1*/
  v3 = 0; /*0x5a80c5*/
  v4 = &g_MissionQueueFrame.globalVariables[248]; /*0x5a80c7*/
  do /*0x5a80da*/
  {
    v5 = v1 + v3++; /*0x5a80cc*/
    *(_DWORD *)v4 = v5; /*0x5a80d0*/
    v4 += 12; /*0x5a80d2*/
  }
  while ( (int)v4 < (int)&g_MissionQueueFrame.globalVariables[1460] ); /*0x5a80da*/
  v6 = dword_ABBEC0; /*0x5a80dc*/
  v7 = 0; /*0x5a80e2*/
  v8 = &g_MissionQueueFrame.globalVariables[1460]; /*0x5a80e4*/
  do /*0x5a80f7*/
  {
    v9 = v6 + v7++; /*0x5a80e9*/
    *(_DWORD *)v8 = v9; /*0x5a80ed*/
    v8 += 12; /*0x5a80ef*/
  }
  while ( (int)v8 < (int)&g_MissionQueueFrame.globalVariables[1556] ); /*0x5a80f7*/
  IDA_LOWORD(v10) = Math::RoundToInt((double)*(int *)&this->__pad_4C[20] + 0.49 + (double)*(int *)&this->__pad_4C[20] + 0.49); /*0x5a8104*/
  v28 = v10; /*0x5a8109*/
  v27 = 0; /*0x5a810d*/
  v23 = 0; /*0x5a8111*/
  do /*0x5a82c4*/
  {
    result = v28; /*0x5a8115*/
    if ( v23 >= v28 ) /*0x5a811f*/
      break; /*0x5a811f*/
    v21[0] = 0; /*0x5a8125*/
    v21[1] = 0; /*0x5a812a*/
    v22 = 0; /*0x5a812f*/
  LABEL_8:
    v12 = g_MapCellWidth; /*0x5a8133*/
    while ( 1 ) /*0x5a8139*/
    {
      v13 = 0; /*0x5a8139*/
      while ( 1 ) /*0x5a8140*/
      {
        v14 = v12 * v12 - 1; /*0x5a8140*/
        do /*0x5a819b*/
        {
          v31 = v14 + 1; /*0x5a814a*/
          v26 = (double)v31; /*0x5a8152*/
          do /*0x5a817f*/
          {
            v32 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8160*/
            IDA_LOWORD(v15) = Math::RoundToInt((double)v32 * v26 * 2.328306437080797e-10); /*0x5a8176*/
            v16 = v15; /*0x5a817b*/
          }
          while ( v15 > v14 ); /*0x5a817f*/
          v17 = CellStruct::Set((CellStruct *)&v30, 0, 0); /*0x5a8187*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a819b*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v16),
                                   v17) );
        ++v13; /*0x5a81af*/
        *(_DWORD *)v25 = *(_DWORD *)(80 * v16 + g_MissionQueueFrame.localVariables[163]); /*0x5a81b9*/
        if ( v13 > 200 ) /*0x5a81bd*/
        {
          v24 = 0; /*0x5a81e4*/
          v19 = 0; /*0x5a81ee*/
          goto LABEL_19; /*0x5a81f2*/
        }
        v18 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x5a81c9*/
        if ( (unsigned __int8)Cell::IsEmpty(v18) ) /*0x5a81d0*/
          break; /*0x5a81d0*/
        v12 = g_MapCellWidth; /*0x5a81d9*/
      }
      v19 = *(_DWORD *)v25; /*0x5a81f4*/
  LABEL_19:
      IDA_LODWORD(v26) = v19; /*0x5a81fc*/
      *(_DWORD *)v21 = v19; /*0x5a8201*/
      if ( ++v22 >= 20 ) /*0x5a820c*/
        break; /*0x5a820c*/
      v12 = g_MapCellWidth; /*0x5a8213*/
      if ( !*(_BYTE *)(80 * ((__int16)v19 + g_MapCellWidth * IDA_SWORD1(v26)) + g_MissionQueueFrame.localVariables[163] + 69) ) /*0x5a822f*/
      {
        v33[0] = (__int16)v19 - 4; /*0x5a823f*/
        v33[1] = IDA_SWORD1(v26) - 4; /*0x5a8243*/
        v33[2] = 8; /*0x5a8253*/
        v33[3] = 8; /*0x5a8257*/
        if ( !(unsigned __int8)IsAreaClearMap(v33, 0, 0) /*0x5a8274*/
          || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v21, 1) )
        {
          goto LABEL_8; /*0x5a827b*/
        }
        break; /*0x5a827b*/
      }
    }
    if ( v22 != 20 ) /*0x5a8286*/
    {
      v20 = v29; /*0x5a8288*/
      if ( ScheduleMapSeedBuildings((int *)v21) ) /*0x5a8293*/
      {
        ScatterMapSeedBuildings(v20, v21); /*0x5a82a3*/
        PlaceNeutralCreeps(v21); /*0x5a82af*/
        ++v23; /*0x5a82b4*/
      }
    }
    result = ++v27; /*0x5a82bc*/
  }
  while ( v27 < 10 ); /*0x5a82c4*/
  return result; /*0x5a82ca*/
}
}
// 0x5B9C90
namespace gamemd {
AbstractClass * * RandomMap::RegenerateRandomMapPreview()
{
  Skirmish *v2; // esi
  HWND DlgItem; // eax
  char v4; // bl
  int v5; // esi
  char *v6; // eax
  char *v7; // edi
  SessionClass *v8; // eax
  wchar_t *v9; // ebx
  int v10; // eax
  AbstractClass *v11; // eax
  _DWORD *v12; // eax
  char v13; // bl
  ObjectClass *v14; // eax
  Skirmish *v15; // eax
  CCFileClass v17; // [esp+8h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+60h] [ebp-14h] BYREF
  int v19; // [esp+6Ch] [ebp-8h]

  Debug::Log(); /*0x5b9c9f*/
  byte_8316D4 = 0; /*0x5b9cac*/
  if ( CCFileClass::Load((CCFileClass *)&loc_5BB260) == 1 ) /*0x5b9cbb*/
  {
    byte_8316D4 = 1; /*0x5b9ccd*/
    MapSeed::ValidateName((char *)&g_MissionQueueFrame.briefing[356], (int)&stru_82BA00.?); /*0x5b9cd2*/
    v2 = g_UIControlState; /*0x5b9cd7*/
    if ( g_UIControlState ) /*0x5b9cdf*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b9ce3*/
      RA2_OPDEL(v2); /*0x5b9ce9*/
      g_UIControlState = 0; /*0x5b9cf1*/
    }
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b9d03*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_MissionQueueFrame.briefing[386]); /*0x5b9d16*/
    v4 = 0; /*0x5b9d21*/
    v5 = 0; /*0x5b9d23*/
    if ( dword_A8B8D8 > 0 ) /*0x5b9d27*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(dword_A8B8CC + 4 * v5) + 88), &stru_82BA00.?) ) /*0x5b9d44*/
      {
        if ( ++v5 >= dword_A8B8D8 ) /*0x5b9d4e*/
          goto LABEL_9; /*0x5b9d4e*/
      }
      v4 = 1; /*0x5b9d52*/
    }
  LABEL_9:
    v6 = GameConfig::ComputeCRC(); /*0x5b9d54*/
    v7 = v6; /*0x5b9d5b*/
    if ( v4 ) /*0x5b9d5d*/
    {
      GameOption::SetDigest(*(char **)(dword_A8B8CC + 4 * v5), v6); /*0x5b9df6*/
      GameOption::SetDescriptionWStr( /*0x5b9e08*/
        *(GameOption **)(dword_A8B8CC + 4 * v5),
        (wchar_t *)&g_MissionQueueFrame.briefing[386]);
    }
    else
    {
      v8 = (SessionClass *)RA2_OPNEW(0x1BCu); /*0x5b9d68*/
      if ( v8 ) /*0x5b9d72*/
        v9 = SessionClass::ParseGameInfo( /*0x5b9d8e*/
               v8,
               &stru_82BA00.?,
               (wchar_t *)&g_MissionQueueFrame.briefing[386],
               v7,
               1,
               0,
               2,
               4);
      else
        v9 = 0; /*0x5b9d92*/
      if ( dword_A8B8D8 < dword_A8B8D0 /*0x5b9dcb*/
        || (byte_A8B8D5 || !dword_A8B8D0)
        && dword_A8B8DC > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B8C8 + 8))(
             &dword_A8B8C8,
             dword_A8B8D0 + dword_A8B8DC,
             0) )
      {
        v10 = dword_A8B8D8++; /*0x5b9dd8*/
        *(_DWORD *)(dword_A8B8CC + 4 * v10) = v9; /*0x5b9de7*/
      }
    }
    RA2_OPDEL(v7); /*0x5b9e0e*/
    if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v5; /*0x5b9e2f*/
      v11 = dword_A8B230; /*0x5b9e3b*/
      strcpy(byte_A8B8E0, &stru_82BA00.?); /*0x5b9e51*/
      strcpy((char *)&v11[130].abstractFlags, byte_A8B8E0); /*0x5b9e79*/
      v12 = CCFileClass::Construct(&v17, byte_A8B8E0); /*0x5b9e86*/
      v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v12 + 20))(v12, 0); /*0x5b9e98*/
      *(_DWORD *)v17.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x5b9e9a*/
      v19 = 0; /*0x5b9ea2*/
      Vector::Clear((int)v18); /*0x5b9eaa*/
      *(_DWORD *)v17.CDFileClass = &off_7E1668; /*0x5b9eb3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5b9ebb*/
      if ( v13 ) /*0x5b9ec2*/
      {
        v14 = (ObjectClass *)RA2_OPNEW(4u); /*0x5b9ec6*/
        if ( v14 ) /*0x5b9ed0*/
          v15 = (Skirmish *)unknown_libname_27(v14); /*0x5b9ed4*/
        else
          v15 = 0; /*0x5b9edb*/
        g_UIControlState = v15; /*0x5b9ee4*/
        Surface::LoadToSurfaceSHP((Surface *)v15, ExistingFileName); /*0x5b9ee9*/
        PostMessageA(*(HWND *)this->__pad_0, 0xFu, 0, 0); /*0x5b9efb*/
      }
    }
    IDA_BYTE1(this->RandomMap_field_0x8) = 1; /*0x5b9f07*/
  }
  byte_8316D4 = 1; /*0x5b9f10*/
  Debug::Log(); /*0x5b9f17*/
}
}
// 0x6558D0
namespace gamemd {
unsigned int * RandomMap::PlaceTileSet()
{
  unsigned int *result; // eax
  int v4; // ebx
  unsigned int *v5; // eax
  unsigned int *v6; // ebp
  unsigned int *v7; // eax
  int v8; // ecx
  unsigned int *v9; // eax
  int v10; // ecx

  result = operator new(0x10u); /*0x6558dc*/
  result = result; /*0x6558e1*/
  v4 = 0; /*0x6558e3*/
  if ( result ) /*0x6558ea*/
  {
    result[1] = Radar::PixelIndex; /*0x6558fb*/
    result[2] = 256; /*0x655902*/
    result[3] = 10; /*0x655909*/
    v5 = operator new(0x1804u); /*0x65590c*/
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
    v1->q1258 = v3; /*0x655974*/
  }
  else
  {
    v1->q1258 = 0; /*0x655980*/
  }
  return result; /*0x65597b*/
}
}
// 0x74EF10
namespace gamemd {
int RandomMap::RemoveMatching(IUnknown * aP1)
{
  int v2; // ebp
  int result; // eax
  RandomMap *v4; // ebx
  signed int i; // esi
  _BYTE *NeighbourContent; // eax
  unsigned __int8 v7; // al
  bool v8; // cl
  signed int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  int *v12; // edi
  int v13; // esi
  Heap *v14; // esi
  int v15; // ecx
  Heap v16; // eax
  _DWORD **v17; // edi
  int v18; // ebx
  int v19; // edx
  Heap v20; // edi
  int v21; // ebp
  int v22; // ecx
  Heap v23; // edi
  int v24; // ecx
  Heap v25; // edi
  int v26; // ebp
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // esi
  unsigned int v30; // ebp
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // eax
  int j; // [esp+10h] [ebp-1Ch]
  float v38; // [esp+18h] [ebp-14h]
  Heap v39; // [esp+1Ch] [ebp-10h]
  int v40; // [esp+20h] [ebp-Ch]
  int v41; // [esp+24h] [ebp-8h]
  float v42; // [esp+30h] [ebp+4h]

  v2 = aP1; /*0x74ef15*/
  result = *(_DWORD *)(aP1 + 68); /*0x74ef20*/
  v4 = this; /*0x74ef23*/
  if ( result == 126 && *(_BYTE *)(aP1 + 286) >= 0x30u ) /*0x74ef38*/
  {
    for ( i = 0; i < 8; i += 2 ) /*0x74ef3e*/
    {
      NeighbourContent = Cell::GetNeighbourContent((Cell *)aP1, i); /*0x74ef43*/
      v8 = 0; /*0x74ef5b*/
      if ( *((_DWORD *)NeighbourContent + 17) == 126 ) /*0x74ef4b*/
      {
        v7 = NeighbourContent[286]; /*0x74ef4d*/
        if ( v7 < 0x30u || v7 > 0x33u ) /*0x74ef59*/
          v8 = 1; /*0x74ef4b*/
      }
      v9 = i; /*0x74ef64*/
      *((_BYTE *)&v40 + v9 / 2) = v8; /*0x74ef71*/
    }
    CellClass::ProcessBridgeRepair((CellClass *)aP1); /*0x74ef79*/
    --*(_DWORD *)&v4->__pad_4C[184]; /*0x74ef85*/
    v10 = 0; /*0x74ef8b*/
    for ( j = 0; j < 8; j += 2 ) /*0x74ef8d*/
    {
      v11 = (char *)Cell::GetNeighbourContent((Cell *)v2, v10); /*0x74ef94*/
      if ( *((_DWORD *)v11 + 17) == -1 ) /*0x74ef9d*/
      {
        v12 = (int *)(v11 + 36); /*0x74efa3*/
        v13 = Cell::PosToIndex((Cell *)(v11 + 36)); /*0x74efad*/
        if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() ) /*0x74efba*/
        {
          *(_BYTE *)(*(_DWORD *)&v4->__pad_4C[120] + v13) = 0; /*0x74efc2*/
          *(_BYTE *)(stru_B1D290.customSound_controller[4] + v13) = 0; /*0x74efcc*/
        }
        if ( *((_BYTE *)&v40 + j / 2) == 1 && !v4->__pad_4C[180] ) /*0x74efe4*/
        {
          v14 = *(Heap **)&v4->__pad_4C[100]; /*0x74eff2*/
          v15 = 1; /*0x74effa*/
          v41 = *v12; /*0x74efff*/
          v16 = *v14; /*0x74f003*/
          if ( *(_DWORD *)v14 < 1 ) /*0x74f007*/
          {
  LABEL_39:
            Debug::Log(); /*0x74f138*/
          }
          else
          {
            v39 = v14[2]; /*0x74f010*/
            v17 = (_DWORD **)(*(_DWORD *)&v39 + 4); /*0x74f014*/
            while ( **v17 != v41 ) /*0x74f021*/
            {
              ++v15; /*0x74f02e*/
              ++v17; /*0x74f02f*/
              if ( v15 > *(_DWORD *)&v16 ) /*0x74f034*/
              {
                v2 = aP1; /*0x74f134*/
                goto LABEL_39; /*0x74f134*/
              }
            }
            if ( v15 == v16 ) /*0x74f03e*/
            {
              *v14 = (Heap)(*(_DWORD *)&v16 - 1); /*0x74f041*/
            }
            else
            {
              v18 = *(_DWORD *)(*(_DWORD *)&v39 + 4 * *(_DWORD *)&v16); /*0x74f04c*/
              v38 = *(float *)(v18 + 4); /*0x74f052*/
              v19 = v15 >> 1; /*0x74f058*/
              *v14 = (Heap)(*(_DWORD *)&v16 - 1); /*0x74f05e*/
              if ( v15 == 1 || *(float *)(*(_DWORD *)(*(_DWORD *)&v39 + 4 * v19) + 4) < (double)v38 ) /*0x74f071*/
              {
                *(_DWORD *)(*(_DWORD *)&v39 + 4 * v15) = v18; /*0x74f0d9*/
                Heap::SiftDown(v14, v15); /*0x74f0df*/
                if ( *(_DWORD *)v14 >= 1 ) /*0x74f0e9*/
                {
                  v24 = *(_DWORD *)&v14[2] + 4; /*0x74f0f1*/
                  v25 = *v14; /*0x74f0f4*/
                  do /*0x74f11b*/
                  {
                    v24 += 4; /*0x74f117*/
                    --*(_DWORD *)&v25; /*0x74f11a*/
                  }
                  while ( v25 ); /*0x74f11b*/
                }
              }
              else
              {
                for ( ; (unsigned int)v15 > 1; v19 >>= 1 ) /*0x74f076*/
                {
                  v20 = v14[2]; /*0x74f078*/
                  v21 = *(_DWORD *)(*(_DWORD *)&v20 + 4 * v19); /*0x74f07b*/
                  if ( *(float *)(v21 + 4) <= (double)v38 ) /*0x74f08a*/
                    break; /*0x74f08a*/
                  *(_DWORD *)(*(_DWORD *)&v20 + 4 * v15) = v21; /*0x74f08c*/
                  v15 = v19; /*0x74f08f*/
                }
                *(_DWORD *)(*(_DWORD *)&v14[2] + 4 * v15) = v18; /*0x74f09b*/
                if ( *(_DWORD *)v14 >= 1 ) /*0x74f0a3*/
                {
                  v22 = *(_DWORD *)&v14[2] + 4; /*0x74f0ab*/
                  v23 = *v14; /*0x74f0ae*/
                  do /*0x74f0d5*/
                  {
                    v22 += 4; /*0x74f0d1*/
                    --*(_DWORD *)&v23; /*0x74f0d4*/
                  }
                  while ( v23 ); /*0x74f0d5*/
                }
              }
              v4 = this; /*0x74f11d*/
            }
            Debug::Log(); /*0x74f126*/
            v2 = aP1; /*0x74f12b*/
          }
        }
      }
      v10 = j + 2; /*0x74f149*/
    }
    v26 = *(_DWORD *)(v2 + 68); /*0x74f15d*/
    result = Cell::PosToIndex((Cell *)(aP1 + 36)); /*0x74f165*/
    v27 = result; /*0x74f16a*/
    v40 = result; /*0x74f16e*/
    if ( result >= 0 ) /*0x74f172*/
    {
      result = Object::ComputeAllocationSize(); /*0x74f178*/
      if ( v27 < result ) /*0x74f17f*/
      {
        if ( v26 == -1 ) /*0x74f188*/
        {
          *(_BYTE *)(*(_DWORD *)&v4->__pad_4C[120] + v27) = 0; /*0x74f190*/
          *(_BYTE *)(stru_B1D290.customSound_controller[4] + v27) = 0; /*0x74f19a*/
        }
        else
        {
          IDA_LOBYTE(result) = v4->__pad_4C[180]; /*0x74f1a8*/
          if ( !(_BYTE)result ) /*0x74f1b0*/
          {
            result = *(_DWORD *)&v4->__pad_4C[96]; /*0x74f1bc*/
            if ( result < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 220) ) /*0x74f1c8*/
            {
              *(_DWORD *)(*(_DWORD *)&v4->__pad_4C[104] + 8 * result) = *(_DWORD *)(aP1 + 36); /*0x74f1d6*/
              *(float *)(*(_DWORD *)&v4->__pad_4C[104] + 8 * *(_DWORD *)&v4->__pad_4C[96] + 4) = (float)(int)(*(_DWORD *)&stru_A8EB00.?[416] / 50 + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 50) + 1); /*0x74f22a*/
              v28 = *(_DWORD *)&v4->__pad_4C[96]; /*0x74f22e*/
              v29 = *(_DWORD **)&v4->__pad_4C[100]; /*0x74f23a*/
              v30 = *(_DWORD *)&v4->__pad_4C[104] + 8 * v28; /*0x74f240*/
              *(_DWORD *)&v4->__pad_4C[96] = v28 + 1; /*0x74f244*/
              v31 = *v29 + 1; /*0x74f24f*/
              v42 = *(float *)(v30 + 4); /*0x74f252*/
              v32 = v31 >> 1; /*0x74f259*/
              if ( v31 < v29[1] ) /*0x74f25d*/
              {
                if ( v31 > 1 ) /*0x74f262*/
                {
                  do /*0x74f282*/
                  {
                    v33 = v29[2]; /*0x74f264*/
                    v34 = *(_DWORD *)(v33 + 4 * v32); /*0x74f267*/
                    if ( *(float *)(v34 + 4) <= (double)v42 ) /*0x74f276*/
                      break; /*0x74f276*/
                    *(_DWORD *)(v33 + 4 * v31) = v34; /*0x74f278*/
                    v31 = v32; /*0x74f27b*/
                    v32 >>= 1; /*0x74f27d*/
                  }
                  while ( v31 > 1 ); /*0x74f282*/
                  v4 = this; /*0x74f284*/
                  v27 = v40; /*0x74f288*/
                }
                *(_DWORD *)(v29[2] + 4 * v31) = v30; /*0x74f28f*/
                v35 = v29[3]; /*0x74f294*/
                ++*v29; /*0x74f29a*/
                if ( v30 > v35 ) /*0x74f29c*/
                  v29[3] = v30; /*0x74f29e*/
                if ( v30 < v29[4] ) /*0x74f2a4*/
                  v29[4] = v30; /*0x74f2a6*/
              }
              result = *(_DWORD *)&v4->__pad_4C[120]; /*0x74f2a9*/
              *(_BYTE *)(result + v27) = 1; /*0x74f2af*/
              *(_BYTE *)(stru_B1D290.customSound_controller[4] + v27) = 1; /*0x74f2b9*/
            }
          }
        }
      }
    }
  }
  return result; /*0x74f19e*/
}
}
// 0x42F420
namespace gamemd {
void RandomMap::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42f426*/
  this->m_10 = 0; /*0x42f429*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x42f430*/
  {
    RA2_OPDEL(v2); /*0x42f436*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42f43e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42f441*/
  this->m_8 = 0; /*0x42f444*/
}
} // namespace gamemd

// 0x42F450
namespace gamemd {
unsigned int RandomMap::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x42f450*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x42f465*/
  else
    return 0; /*0x42f457*/
}
} // namespace gamemd

// 0x42F470
namespace gamemd {
unsigned int * RandomMap::Seek(unsigned int * a2, int a3)
{
  *a2 = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a3); /*0x42f47e*/
  return a2; /*0x42f480*/
}
} // namespace gamemd

// 0x42F620
namespace gamemd {
char RandomMap::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _WORD *v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x42f627*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x42f62f*/
  {
    v3 = 0; /*0x42f631*/
    if ( m_8 <= 0 ) /*0x42f635*/
      return 1; /*0x42f664*/
    v4 = *(_DWORD *)(a2 + 4); /*0x42f637*/
    v5 = *(_WORD **)&this->m_1[3]; /*0x42f63a*/
    v6 = (_WORD *)(v4 + 2); /*0x42f63d*/
    v7 = v4 - (_DWORD)v5; /*0x42f640*/
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x42f652*/
    {
      ++v3; /*0x42f654*/
      v6 += 2; /*0x42f655*/
      v5 += 2; /*0x42f658*/
      if ( v3 >= m_8 ) /*0x42f65d*/
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
  int m_10; // edx
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x42f930*/
  result = 0; /*0x42f934*/
  if ( m_10 <= 0 ) /*0x42f93a*/
    return -1; /*0x42f95d*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f940*/
  {
    if ( ++result >= m_10 ) /*0x42f95b*/
      return -1; /*0x42f95b*/
  }
  return result; /*0x42f960*/
}
}
// 0x42FBF0
namespace gamemd {
DynamicVector * RandomMap::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x42fbf3*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_Cell_vftable; /*0x42fbf6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x42fc00*/
  {
    RA2_OPDEL(v3); /*0x42fc08*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x42fc10*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42fc1b*/
  this->m_8 = 0; /*0x42fc21*/
  if ( (a2 & 1) != 0 ) /*0x42fc28*/
    RA2_OPDEL(); /*0x42fc2b*/
  return this->__pad_0; /*0x42fc35*/
}
} // namespace gamemd

// 0x58CF90
namespace gamemd {
int RandomMap::GenerateTerrainForAllCells()
{
  int result; // eax
  int v2; // ebx
  int v3; // esi
  RandomMap *v4; // edi
  __int16 v5[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v5 = this; /*0x58cf90*/
  result = g_MapCellWidth * g_MapCellWidth; /*0x58cf96*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58cf9b*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x58cf9f*/
    result = g_MissionQueueFrame.localVariables[163]; /*0x58cfa1*/
    v3 = 0; /*0x58cfa7*/
    do /*0x58d002*/
    {
      *(_DWORD *)v5 = *(_DWORD *)(v3 + result); /*0x58cfb6*/
      v4 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x58cfbf*/
      result = g_MissionQueueFrame.localVariables[163]; /*0x58cfc1*/
      if ( *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x58cfd4*/
        && (*(_WORD *)(v3 + g_MissionQueueFrame.localVariables[163])
         || *(_WORD *)(v3 + g_MissionQueueFrame.localVariables[163] + 2)) )
      {
        if ( (unsigned __int8)Cell::IsGroundTypeRange((Cell *)v4) || (unsigned __int8)Cell::IsShore((Cell *)v4) ) /*0x58cfe9*/
          RandomMap::GenerateTerrain(v4); /*0x58cff4*/
        result = g_MissionQueueFrame.localVariables[163]; /*0x58cff9*/
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
unsigned int * RandomMap::Constructor_VectorClass_Cell_(char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // eax
  void *v5; // eax
  RandomMap *v7; // [esp+4h] [ebp-4h] BYREF

  v3 = *(void (__thiscall ****)(_DWORD, int))this->__pad_0; /*0x5ac294*/
  if ( v3 ) /*0x5ac298*/
  {
    (**v3)(v3, 1); /*0x5ac29e*/
    *(_DWORD *)this->__pad_0 = 0; /*0x5ac2a0*/
  }
  v7 = this; /*0x5ac2b6*/
  v4 = (*(int (__thiscall **)(int *, RandomMap **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x5ac2ba*/
         &g_MissionQueueFrame.briefing[338],
         &v7);
  if ( v4 != -1 && v4 < g_MissionQueueFrame.briefing[342] ) /*0x5ac2ca*/
  {
    --g_MissionQueueFrame.briefing[342]; /*0x5ac2cf*/
    for ( ; /*0x5ac2d5*/
          v4 < g_MissionQueueFrame.briefing[342];
          *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v4 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                  + 4 * v4) )
    {
      ++v4; /*0x5ac2dd*/
    }
  }
  v5 = (void *)this->RandomMap_field_0x2C[0]; /*0x5ac2ef*/
  this->RandomMap_field_0x28[0] = (int)&(void*)(void*)&VectorClass_Cell_vftable; /*0x5ac2f2*/
  if ( v5 && IDA_BYTE1(this->RandomMap_field_0x34[0]) ) /*0x5ac2fd*/
  {
    RA2_OPDEL(v5); /*0x5ac305*/
    this->RandomMap_field_0x2C[0] = 0; /*0x5ac30d*/
  }
  IDA_BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x5ac318*/
  this->RandomMap_field_0x30 = 0; /*0x5ac31e*/
  if ( (a2 & 1) != 0 ) /*0x5ac325*/
    RA2_OPDEL(); /*0x5ac328*/
  return this->__pad_0; /*0x5ac332*/
}
} // namespace gamemd

// 0x5AD820
namespace gamemd {
unsigned int * RandomMap::Constructor(int a2, int a3)
{
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5ad82b*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5ad82e*/
  IDA_LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ad831*/
  IDA_BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ad835*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_CellClass___vftable; /*0x5ad838*/
  if ( a2 ) /*0x5ad83e*/
  {
    if ( a3 ) /*0x5ad846*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5ad848*/
      return this->__pad_0; /*0x5ad84e*/
    }
    *(_DWORD *)&this->RandomMap_field_0x2[2] = RA2_OPNEW(4 * a2); /*0x5ad85d*/
    IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ad860*/
  }
  return this->__pad_0; /*0x5ad84d*/
}
} // namespace gamemd

// 0x5ADA40
namespace gamemd {
unsigned int * RandomMap::Constructor_0(int a2, int a3)
{
  int v5; // eax

  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5ada4a*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5ada51*/
  IDA_LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ada54*/
  IDA_BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ada58*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_TRect_int_vftable; /*0x5ada5c*/
  if ( a2 ) /*0x5ada62*/
  {
    if ( a3 ) /*0x5ada6a*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5ada6d*/
      return this->__pad_0; /*0x5ada78*/
    }
    v5 = RA2_OPNEW(16 * a2); /*0x5ada81*/
    if ( v5 ) /*0x5ada8b*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = v5; /*0x5ada8e*/
      IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ada95*/
      return this->__pad_0; /*0x5ada9d*/
    }
    IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaa2*/
    *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5adaa6*/
  }
  return this->__pad_0; /*0x5ada76*/
}
} // namespace gamemd

// 0x5ADAB0
namespace gamemd {
unsigned int * RandomMap::Constructor_1(int a2, int a3)
{
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x5adabb*/
  this->RandomMap_field_0x8 = (void *)a2; /*0x5adabe*/
  IDA_LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5adac1*/
  IDA_BYTE1(this->RandomMap_field_0xC) = 0; /*0x5adac5*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_double_vftable; /*0x5adac8*/
  if ( a2 ) /*0x5adace*/
  {
    if ( a3 ) /*0x5adad6*/
    {
      *(_DWORD *)&this->RandomMap_field_0x2[2] = a3; /*0x5adad8*/
      return this->__pad_0; /*0x5adade*/
    }
    *(_DWORD *)&this->RandomMap_field_0x2[2] = RA2_OPNEW(8 * a2); /*0x5adaed*/
    IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaf0*/
  }
  return this->__pad_0; /*0x5adadd*/
}
} // namespace gamemd
