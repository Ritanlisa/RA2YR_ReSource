// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"  // G42.35f: C2027 supply
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
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/CellLand_e4.hpp"  // G57w10 D supply (IsBuildable 0x4863D0)
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)

// 0x486790
namespace gamemd {
int Check(void *a1_1, void *a2_1, void *a3_1)
{
    RandomMap *self = (RandomMap *)a1_1;  /* G57w8: this-pronoun (truth raw_decomp 0x486790) */
    int v1; // eax

    v1 = self->RandomMap_field_0x38[0]; /*0x486790*/
    return v1 >= dword_AA0E24 && v1 < dword_AA0E24 + 16; /*0x4867a6*/
}
}
// 0x58BF70
namespace gamemd {
unsigned int * TerrainTileDataConstructor(void *a1, int a2)
{
    RandomMap *self = (RandomMap *)a1;  /* G57w8: this-pronoun (truth raw_decomp 0x58BF70) */
    Cell *v3; // eax
    char IsGroundTypeRange; // al
    void *v5; // ecx
    int v6; // eax

    *(unsigned int *)self->__pad_0 = 0; /*0x58bf7a*/
    *(unsigned int *)&self->RandomMap_field_0x2[2] = 0; /*0x58bf7c*/
    self->RandomMap_field_0x8 = (void *)g_MissionQueueFrame.localVariables[164]; /*0x58bf8a*/
    self->RandomMap_field_0xC = 0; /*0x58bf8d*/
    self->RandomMap_field_0x10 = (unsigned int)((void *)*((char *)CellCoord::To_CellObj( )/*0x58bfa6*/
                                                     (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                     (__int16 *)&a2)
                                         + 283);
    v3 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)&a2)); /*0x58bfa9*/
    IsGroundTypeRange = ((Cell *)v3)->IsGroundTypeRange(); /*0x58bfb0*/
    v5 = (void *)a2; /*0x58bfb5*/
    IDA_LOBYTE(self->RandomMap_field_0x14) = IsGroundTypeRange; /*0x58bfb9*/
    *(void **)((char *)&self->RandomMap_field_0x14 + 2) = (void *)((unsigned int)v5); /*0x58bfbe*/
    IDA_BYTE2(self->RandomMap_field_0x18) = 0; /*0x58bfc1*/
    IDA_HIBYTE(self->RandomMap_field_0x18) = 1; /*0x58bfc4*/
    self->RandomMap_field_0x1C = 0; /*0x58bfc7*/
    self->RandomMap_field_0x20 = 0; /*0x58bfca*/
    IDA_LOBYTE(self->RandomMap_field_0x24[0]) = 0; /*0x58bfcd*/
    self->RandomMap_field_0x2C[0] = 0; /*0x58bfd0*/
    self->RandomMap_field_0x30 = 0; /*0x58bfd3*/
    IDA_LOBYTE(self->RandomMap_field_0x34[0]) = 1; /*0x58bfd6*/
    IDA_BYTE1(self->RandomMap_field_0x34[0]) = 0; /*0x58bfd9*/
    self->RandomMap_field_0x28[0] = (int)(void*)&DynamicVectorClass_Cell_vftable; /*0x58bfdc*/
    self->RandomMap_field_0x3C[0] = 10; /*0x58bfe3*/
    self->RandomMap_field_0x38[0] = 0; /*0x58bfea*/
    self->RandomMap_field_0x40[0] = 0; /*0x58bfed*/
    *(unsigned int *)self->__pad_44 = 0; /*0x58bff0*/
    self->RandomMap_field_0x48 = 0; /*0x58bff3*/
    *(unsigned int *)self->__pad_4C = 0; /*0x58bff6*/
    self->RandomMap_field_0x3C[0] = 100000; /*0x58bff9*/
    ++g_MissionQueueFrame.localVariables[164]; /*0x58c014*/
    if ( g_MissionQueueFrame.briefing[342] < g_MissionQueueFrame.briefing[340] /*0x58c041*/
      || (IDA_BYTE1(g_MissionQueueFrame.briefing[341]) || !g_MissionQueueFrame.briefing[340])
      && g_MissionQueueFrame.briefing[343] > 0
&& (*(unsigned __int8 (**)(int *, int, unsigned int))(g_MissionQueueFrame.briefing[338] + 8))( (int *)(&g_MissionQueueFrame.briefing[338]), g_MissionQueueFrame.briefing[340] + g_MissionQueueFrame.briefing[343], 0) )



    {
      v6 = g_MissionQueueFrame.briefing[342]++; /*0x58c04e*/
      *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v6) = (unsigned int)self;
    }
    return self->__pad_0; /*0x58c062*/
}
}
// 0x58C800
namespace gamemd {
int GenerateTerrain(RandomMap *self)
{
    int v2; // esi
    int v3; // eax
    int v4; // edx
    int v5; // edx
    int i; // ebx
    int v7; // edi
    int v8; // eax
    int v9; // esi
    char *v10; // eax
    Cell *v11; // eax
    Cell *v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // ecx
    char v16; // bl
    unsigned int *v17; // ebp
    unsigned int v18; // esi
    unsigned int v19; // eax
    int v20; // edi
    int v21; // edx
    unsigned char *v22; // esi
    Cell *v23; // eax
    int v24; // esi
    int j; // eax
    int v26; // ecx
    char v27; // cl
    int v29; // edx
    __int16 v30; // bp
    int v31; // ecx
    int v32; // esi
    int v33; // edx
    int v34; // edi
    int v35; // esi
    int v36; // eax
    int v37; // ebx
    int v38; // ecx
    char v39; // cl
    RandomMap *v40; // eax
    unsigned int *v41; // esi
    char v42; // al
    int v43; // edi
    int v44; // ebp
    int v45; // [esp+10h] [ebp-44h] BYREF
    __int16 v46[2]; // [esp+14h] [ebp-40h] BYREF
    __int16 v47[2]; // [esp+18h] [ebp-3Ch] BYREF
    int v48; // [esp+1Ch] [ebp-38h]
    __int16 v49[2]; // [esp+20h] [ebp-34h] BYREF
    RandomMap *v50; // [esp+24h] [ebp-30h]
    int v51; // [esp+28h] [ebp-2Ch] BYREF
    double v52; // [esp+2Ch] [ebp-28h]
    __int64 v53; // [esp+34h] [ebp-20h] BYREF
    _VectorClass_VCell v54; // [esp+3Ch] [ebp-18h] BYREF
    int v55; // [esp+50h] [ebp-4h]

    v50 = self; /*0x58c816*/
    *(unsigned int *)v47 = g_MissionQueueFrame.localVariables[164]; /*0x58c81a*/
    ((VectorClass *)&v54)->CellConstructor( 0, 0); /*0x58c81e*/
    v2 = self->RandomMap_field_0x24[0]; /*0x58c823*/
    *(unsigned int *)v54.__pad_0 = (unsigned int)(void*)&DynamicVectorClass_Cell_vftable; /*0x58c826*/
    *(unsigned int *)v54.__tail_10 = 0; /*0x58c832*/
    v55 = 50000; /*0x58c838*/
    if ( v54.m_8 > 0 || (IDA_BYTE1(v54.m_C) || !v54.m_8) && VectorClass::ResizeEx(&v54, v54.m_8 + 50000, 0) ) /*0x58c859*/
    {
      v3 = (*(unsigned int *)v54.__tail_10)++; /*0x58c867*/
      *(unsigned int *)(*(unsigned int *)&v54.m_1[3] + 4 * v3) = v2; /*0x58c872*/
    }
    if ( (unsigned __int8)((Cell *)self)->IsGroundTypeRange() /*0x58c882*/
      || (IDA_LOBYTE(v48) = 0, (unsigned __int8)((Cell *)self)->IsShore()) )
    {
      IDA_LOBYTE(v48) = 1; /*0x58c890*/
    }
    v51 = self->__pad_4C[207]; /*0x58c89c*/
    v4 = *(unsigned int *)v54.__tail_10; /*0x58c8a0*/
    *(unsigned int *)v49 = 0; /*0x58c8a6*/
    if ( *(unsigned int *)v54.__tail_10 ) /*0x58c8aa*/
    {
      do /*0x58ca9c*/
      {
        v45 = *(unsigned int *)(*(unsigned int *)&v54.m_1[3] + 4 * v4 - 4); /*0x58c8b8*/
        if ( v4 - 1 < v4 ) /*0x58c8c1*/
          *(unsigned int *)v54.__tail_10 = v4 - 1; /*0x58c8c7*/
        v5 = *(unsigned int *)v47; /*0x58c8f4*/
        *(unsigned int *)(80 * ((__int16)v45 + g_MapCellWidth * IDA_SHIWORD(v45)) + g_MissionQueueFrame.localVariables[163] + 60) = *(unsigned int *)v47; /*0x58c906*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58c912*/
          *(unsigned int *)(80 * ((__int16)v45 + g_MapCellWidth * IDA_SHIWORD(v45)) + g_MissionQueueFrame.localVariables[163] + 56) = v5; /*0x58c92d*/
        for ( i = (unsigned int)(0); i < 8; ++i ) /*0x58c931*/
        {
          IDA_LODWORD(v52) = (unsigned int)(*CellStruct::Add(((CellStruct *)&v45), (unsigned int *)(&v53), (unsigned short *)(4 * (i & 7) + 9041544))); /*0x58c956*/
          *(unsigned int *)v46 = IDA_LODWORD(v52); /*0x58c95a*/
          v7 = g_MissionQueueFrame.localVariables[160]; /*0x58c968*/
          v8 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * IDA_SWORD1(v52)); /*0x58c97d*/
          v9 = IDA_SWORD1(v52) + SLOWORD(v52); /*0x58c97f*/
          if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x58c9bf*/
            && SLOWORD(v52) - IDA_SWORD1(v52) < g_MissionQueueFrame.localVariables[160]
            && IDA_SWORD1(v52) - SLOWORD(v52) < g_MissionQueueFrame.localVariables[160]
            && v9 <= g_MissionQueueFrame.localVariables[161]
            && *(unsigned int *)(v8 + 56) == -1
            && *(unsigned int *)(v8 + 60) != *(unsigned int *)v47 )
          {
            *(unsigned int *)(v8 + 60) = *(unsigned int *)v47; /*0x58c9c5*/
            v10 = (char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v46)); /*0x58c9d2*/
            if ( v10[283] == v51 ) /*0x58c9e2*/
            {
              v11 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v46)); /*0x58c9f2*/
              v13 = 1; /*0x58ca20*/
              if ( !(unsigned __int8)((Cell *)v11)->IsGroundTypeRange() ) /*0x58c9f9*/
              {
                v12 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v46)); /*0x58ca0c*/
                if ( !(unsigned __int8)((Cell *)v12)->IsShore() ) /*0x58ca13*/
                  v13 = 0; /*0x58c9f9*/
              }
              if ( v13 == (unsigned __int8)v48 /*0x58ca60*/
                && (*(int *)v54.__tail_10 < v54.m_8
                 || (IDA_BYTE1(v54.m_C) || !v54.m_8)
                 && v55 > 0
&& (*(unsigned __int8 (**)(_VectorClass_VCell *, int, unsigned int))(*(unsigned int *)v54.__pad_0 + 8))( (_VectorClass_VCell *)(&v54), v55 + v54.m_8, 0)) )



              {
                v14 = (*(unsigned int *)v54.__tail_10)++; /*0x58ca6f*/
                *(unsigned int *)(*(unsigned int *)&v54.m_1[3] + 4 * v14) = *(unsigned int *)v46; /*0x58ca7a*/
              }
            }
            v7 = g_MissionQueueFrame.localVariables[160]; /*0x58ca7d*/
          }
        }
        v4 = *(unsigned int *)v54.__tail_10; /*0x58ca91*/
        v15 = ++*(unsigned int *)v49; /*0x58ca95*/
      }
      while ( *(unsigned int *)v54.__tail_10 ); /*0x58ca9c*/
      if ( v15 >= 75 ) /*0x58caa7*/
        goto LABEL_84; /*0x58caa7*/
    }
    else
    {
      v7 = g_MissionQueueFrame.localVariables[160]; /*0x58caaf*/
    }
    if ( !(unsigned char)v48 ) /*0x58cabb*/
    {
      v16 = 0; /*0x58cac5*/
      if ( *(unsigned int *)v47 ) /*0x58cac9*/
      {
        v29 = v50->RandomMap_field_0x24[0]; /*0x58cca4*/
        IDA_LODWORD(v52) = v29; /*0x58cca9*/
        v49[1] = IDA_HIWORD(v29); /*0x58ccb3*/
        v49[0] = v29 - 1; /*0x58ccb8*/
        v30 = v29 - 1; /*0x58ccbd*/
        v31 = (__int16)(v29 - 1); /*0x58ccc1*/
        v32 = IDA_SHIWORD(v29) + v31; /*0x58cccb*/
        if ( v32 <= v7 /*0x58cce6*/
          || v31 - IDA_SWORD1(v52) >= v7
          || IDA_SWORD1(v52) - v31 >= v7
          || v32 > g_MissionQueueFrame.localVariables[161] )
        {
          IDA_LODWORD(v53) = v29; /*0x58cce8*/
          *(unsigned int *)v49 = v29 - 0x10000; /*0x58ccf6*/
          v30 = v29; /*0x58ccfb*/
        }
        v33 = v30 + v49[1]; /*0x58cd0b*/
        if ( v33 > v7 && v30 - v49[1] < v7 && v49[1] - v30 < v7 && v33 <= g_MissionQueueFrame.localVariables[161] ) /*0x58cd34*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58cd44*/
            v34 = *(unsigned int *)(80 * (v30 + g_MapCellWidth * v49[1]) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58cd5a*/
          else
            v34 = -1; /*0x58cd46*/
          v35 = *((char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v49)) + 283); /*0x58cd6d*/
          ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x58cd79*/
          v36 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x58cd83*/
          if ( v36 ) /*0x58cd8a*/
          {
            v37 = *(unsigned int *)v47; /*0x58cd90*/
            do /*0x58cdef*/
            {
              IDA_LODWORD(v52) = *(unsigned int *)(v36 + 36); /*0x58cd97*/
              v38 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * IDA_SWORD1(v52)); /*0x58cdb8*/
              if ( *(unsigned int *)(v38 + 56) == v37 ) /*0x58cdbd*/
              {
                *(unsigned int *)(v38 + 56) = v34; /*0x58cdbf*/
                *(unsigned char *)(v38 + 75) = 0; /*0x58cdc2*/
                *(unsigned int *)(v36 + 56) = 0; /*0x58cdc6*/
                *(unsigned char *)(v36 + 282) = 0; /*0x58cdc9*/
                v39 = g_MissionQueueFrame.globalVariables[100]; /*0x58cdd0*/
                if ( v35 != -1 ) /*0x58cdd9*/
                  v39 = v35; /*0x58cddb*/
                *(unsigned char *)(v36 + 283) = v39; /*0x58cddd*/
              }
              v36 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x58cde8*/
            }
            while ( v36 ); /*0x58cdef*/
          }
          goto LABEL_63; /*0x58cdef*/
        }
        goto LABEL_84; /*0x58cd34*/
      }
      v17 = ((RandomMap *)&g_MissionQueueFrame.briefing[356])->CellListAlloc( 0); /*0x58cadc*/
      IDA_HIDWORD(v53) = 0; /*0x58cade*/
      *(unsigned int *)v46 = (unsigned int)v17; /*0x58cae2*/
      v18 = v17[4] - 1; /*0x58cae9*/
      v53 = (unsigned int)v17[4]; /*0x58caed*/
      v52 = (double)v53; /*0x58caf5*/
      do /*0x58cb20*/
      {
        v53 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58cb03*/
        IDA_LOWORD(v19) = Math::RoundToInt((double)v53 * v52 * 2.328306437080797e-10); /*0x58cb19*/
      }
      while ( v19 > v18 ); /*0x58cb20*/
      v20 = 0; /*0x58cb25*/
      *(unsigned int *)v47 = *(unsigned int *)(v17[1] + 4 * v19); /*0x58cb2a*/
      while ( 1 ) /*0x58cb51*/
      {
        IDA_LODWORD(v52) = (unsigned int)(*CellStruct::Add(((CellStruct *)v47), (unsigned int *)(&v53), (unsigned short *)(4 * (v20 & 7) + 9041544))); /*0x58cb51*/
        *(unsigned int *)v49 = IDA_LODWORD(v52); /*0x58cb55*/
        v21 = IDA_SWORD1(v52) + SLOWORD(v52); /*0x58cb61*/
        if ( v21 > g_MissionQueueFrame.localVariables[160] ) /*0x58cb66*/
        {
          if ( SLOWORD(v52) - IDA_SWORD1(v52) < g_MissionQueueFrame.localVariables[160] /*0x58cb7c*/
            && IDA_SWORD1(v52) - SLOWORD(v52) < g_MissionQueueFrame.localVariables[160]
            && v21 <= g_MissionQueueFrame.localVariables[161] )
          {
            v22 = (unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v49)); /*0x58cb91*/
            if ( v22[283] != *((unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v47)) + 283) ) /*0x58cbac*/
            {
              v23 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v49)); /*0x58cbb8*/
              if ( !(unsigned __int8)((Cell *)v23)->IsGroundTypeRange() ) /*0x58cbc6*/
              {
                v24 = *((char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v49)) + 283); /*0x58cbea*/
                ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x58cbf6*/
                for ( j = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x58cc09*/
                      j;
                      j = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
                {
                  IDA_LODWORD(v52) = *(unsigned int *)(j + 36); /*0x58cc17*/
                  v26 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * IDA_SWORD1(v52)); /*0x58cc32*/
                  if ( !*(unsigned int *)(v26 + 56) ) /*0x58cc34*/
                  {
                    *(unsigned int *)(v26 + 56) = -1; /*0x58cc39*/
                    *(unsigned char *)(v26 + 75) = 0; /*0x58cc3c*/
                    *(unsigned int *)(j + 56) = 0; /*0x58cc40*/
                    *(unsigned char *)(j + 282) = 0; /*0x58cc43*/
                    v27 = g_MissionQueueFrame.globalVariables[100]; /*0x58cc4a*/
                    if ( v24 != -1 ) /*0x58cc52*/
                      v27 = v24; /*0x58cc54*/
                    *(unsigned char *)(j + 283) = v27; /*0x58cc56*/
                  }
                }
                v17 = *(unsigned int **)v46; /*0x58cc6a*/
                v16 = 1; /*0x58cc6e*/
  LABEL_60:
                if ( v17 ) /*0x58cc72*/
                  (*(void (**)(unsigned int *, int))*v17)( (unsigned int *)(v17), 1); /*0x58cc7b*/
                if ( v16 ) /*0x58cc7f*/
                {
  LABEL_63:
                  *(unsigned int *)v54.__pad_0 = (unsigned int)(void*)&VectorClass_Cell_vftable; /*0x58cc85*/
                  Buffer::Cleanup( (void *)(&v54)); /*0x58cc91*/
                  return 0; /*0x58cc9f*/
                }
                break; /*0x58cc7f*/
              }
            }
          }
          v17 = *(unsigned int **)v46; /*0x58cbc8*/
        }
        if ( ++v20 >= 8 ) /*0x58cbd0*/
          goto LABEL_60; /*0x58cbd0*/
      }
    }
  LABEL_84:
    v40 = (RandomMap *)RA2_OPNEW(0x50u); /*0x58cdf6*/
    if ( v40 ) /*0x58ce02*/
      v41 = ((RandomMap *)v40)->TerrainTileDataConstructor( v50->RandomMap_field_0x24[0]); /*0x58ce13*/
    else
      v41 = (unsigned int *)(0); /*0x58ce17*/
    v42 = v48; /*0x58ce1d*/
    v41[4] = v51; /*0x58ce21*/
    *((unsigned char *)v41 + 20) = v42; /*0x58ce24*/
    v41[3] = 0; /*0x58ce27*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ce38*/
    {
      v43 = 0; /*0x58ce3c*/
      v44 = g_MapCellWidth * g_MapCellWidth; /*0x58ce3e*/
      do /*0x58ce71*/
      {
        if ( *(unsigned int *)(v43 + g_MissionQueueFrame.localVariables[163] + 56) == v41[2] ) /*0x58ce50*/
        {
          v51 = 0; /*0x58ce56*/
          if ( (unsigned __int8)Coord::Compare2D( (unsigned short *)((Coord *)(v43 + g_MissionQueueFrame.localVariables[163])), (void *)(&v51)) ) /*0x58ce61*/
            ++v41[3]; /*0x58ce6a*/
        }
        v43 += 80; /*0x58ce6d*/
        --v44; /*0x58ce70*/
      }
      while ( v44 ); /*0x58ce71*/
    }
    *(unsigned int *)v54.__pad_0 = (unsigned int)(void*)&VectorClass_Cell_vftable; /*0x58ce77*/
    Buffer::Cleanup( (void *)(&v54)); /*0x58ce7f*/
    return (int)(v41); /*0x58cc98*/
}
}
// 0x58D1C0
namespace gamemd {
MapClass * * ExpandTerrainCells(void *a1, int a2, int a3)
{
    RandomMap *self = (RandomMap *)a1;  /* G57w8: this-pronoun (truth raw_decomp 0x58D1C0) */
    int result; // eax
    int v4; // ebx
    int v5; // ebp
    int v6; // ecx
    int v7; // edi
    int i; // esi
    int v9; // ecx
    VectorClass *v10; // eax
    VectorClass *v11; // esi
    VectorClass *v12; // ebx
    int v13; // edi
    int v14; // edx
    char v15; // al
    __int16 v16; // cx
    int v17; // eax
    int v18; // ecx
    int v19; // esi
    int Capacity; // ecx
    int v21; // eax
    void *vtable0; // eax
    unsigned int *Items; // edx
    int v24; // ecx
    int v25; // [esp+Ch] [ebp-1Ch]
    int v26; // [esp+10h] [ebp-18h]
    int v27; // [esp+14h] [ebp-14h]
    int v28; // [esp+18h] [ebp-10h]
    int j; // [esp+1Ch] [ebp-Ch]
    int v30; // [esp+20h] [ebp-8h]

    result = (int)((RandomMap *)self)->TerrainAlloc(); /*0x58d1c9*/
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
          *(unsigned int *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d1f6*/
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
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d228*/
          {
            result = 80 * ((__int16)v9 + g_MapCellWidth * IDA_SHIWORD(v9)); /*0x58d242*/
            *(unsigned int *)(result + g_MissionQueueFrame.localVariables[163] + 56) = a3; /*0x58d245*/
          }
        }
        if ( v7 < v4 - 1 ) /*0x58d251*/
        {
          v10 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58d259*/
          v11 = v10; /*0x58d25e*/
          v12 = (VectorClass *)(0); /*0x58d260*/
          if ( v10 ) /*0x58d267*/
          {
            ((VectorClass *)v10)->CellConstructor( 0, 0); /*0x58d26d*/
            v11[1].vtable0 = 0; /*0x58d272*/
            v11->vtable0 = (void*)&DynamicVectorClass_Cell_vftable; /*0x58d275*/
            v11[1].Items = (void *)10; /*0x58d27b*/
            v12 = v11; /*0x58d282*/
          }
          v12[1].Items = *(void **)(v5 + 16); /*0x58d287*/
          result = *(unsigned int *)(v5 + 16) - 1; /*0x58d28d*/
          v30 = result; /*0x58d28e*/
          if ( result >= 0 ) /*0x58d292*/
          {
            v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d298*/
            do /*0x58d39d*/
            {
              v14 = *(unsigned int *)(*(unsigned int *)(v5 + 4) + 4 * result); /*0x58d2a1*/
              v15 = 0; /*0x58d2a4*/
              v27 = v14; /*0x58d2a6*/
              for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
              {
                v16 = IDA_HIWORD(v27) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]); /*0x58d2c4*/
                IDA_LOWORD(v28) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]) + v27; /*0x58d2c9*/
                v17 = v16; /*0x58d2d1*/
                IDA_HIWORD(v28) = v16; /*0x58d2d4*/
                v18 = v16 + (__int16)v28; /*0x58d2d9*/
                if ( v18 > v13 /*0x58d302*/
                  && (__int16)v28 - v17 < v13
                  && v17 - (__int16)v28 < v13
                  && v18 <= g_MissionQueueFrame.localVariables[161] )
                {
                  v19 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v28 + g_MapCellWidth * v17); /*0x58d31f*/
                  if ( *(void **)(v19 + 56) == (void *)(self->RandomMap_field_0x8) ) /*0x58d326*/
                  {
                    if ( *(unsigned int *)(v19 + 60) != v26 + 1 ) /*0x58d334*/
                    {
                      Capacity = v12->Capacity; /*0x58d336*/
                      if ( (int)v12[1].vtable0 < Capacity /*0x58d35b*/
                        || (v12->IsAllocated || !Capacity)
                        && (v21 = (int)v12[1].Items, v21 > 0)
&& (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v12->vtable0 + 2))( (VectorClass *)(v12), Capacity + v21, 0) )



                      {
                        vtable0 = v12[1].vtable0; /*0x58d362*/
                        Items = (unsigned int *)(v12->Items); /*0x58d365*/
                        v12[1].vtable0 = (char *)vtable0 + 1; /*0x58d36b*/
                        Items[(unsigned int)vtable0] = v28; /*0x58d372*/
                      }
                      *(unsigned int *)(v19 + 60) = v26 + 1; /*0x58d375*/
                      v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d378*/
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
      v24 = g_MapCellWidth * g_MapCellWidth; /*0x58d3e7*/
      if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d3ec*/
      {
        result = 0; /*0x58d3ee*/
        do /*0x58d402*/
        {
          result += 80; /*0x58d3f6*/
          --v24; /*0x58d3f9*/
          *(unsigned int *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d3fa*/
        }
        while ( v24 ); /*0x58d402*/
      }
    }
    return (MapClass * *)result; /*0x58d3da*/
}
}
// 0x58D410
namespace gamemd {
unsigned int * TerrainAlloc(void *a1_1)
{
    RandomMap *self = (RandomMap *)a1_1;  /* G57w8: this-pronoun (truth raw_decomp 0x58D410) */
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
    unsigned int *Items; // edx
    char v16; // [esp+Fh] [ebp-Dh]
    VectorClass *v17; // [esp+10h] [ebp-Ch]
    int v19; // [esp+18h] [ebp-4h]

    v1 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58d41c*/
    v2 = v1; /*0x58d421*/
    if ( v1 ) /*0x58d428*/
    {
      ((VectorClass *)v1)->CellConstructor( 0, 0); /*0x58d430*/
      v2->vtable0 = (void*)&DynamicVectorClass_Cell_vftable; /*0x58d435*/
      v2[1].Items = (void *)10; /*0x58d43b*/
      v2[1].vtable0 = 0; /*0x58d442*/
      v3 = v2; /*0x58d449*/
    }
    else
    {
      v3 = (VectorClass *)(0); /*0x58d44d*/
    }
    v17 = v3; /*0x58d454*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x58d458*/
    v4 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x58d467*/
    if ( !v4 ) /*0x58d46b*/
      return (unsigned int *)(&v3->vtable0); /*0x58d592*/
    do
    {
      v5 = *(unsigned int *)(v4 + 36); /*0x58d478*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d481*/
        v6 = *(unsigned int *)(80 * ((__int16)v5 + g_MapCellWidth * IDA_SHIWORD(v5)) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58d49f*/
      else
        v6 = -1; /*0x58d483*/
      if ( (void *)v6 == (void *)(self->RandomMap_field_0x8) )
      {
        v16 = 0; /*0x58d4b0*/
        for ( i = 0; i < 8; ++i )
        {
          v19 = *((unsigned int *)((Cell *)v4)->GetNeighbourContent( i) + 9); /*0x58d4c8*/
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
              if ( v9 != (void *)(self->RandomMap_field_0x8) ) /*0x58d51c*/
                v16 = 1; /*0x58d51e*/
            }
            v3 = v17; /*0x58d523*/
          }
        }
        if ( v16 ) /*0x58d533*/
        {
          Capacity = v3->Capacity; /*0x58d535*/
          v11 = *(unsigned int *)(v4 + 36); /*0x58d53b*/
          if ( (int)v3[1].vtable0 < Capacity /*0x58d55d*/
            || (v3->IsAllocated || !Capacity)
            && (v12 = (int)((unsigned int *)((int)v3[1].Items)), v12 > 0)
            && (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v3->vtable0 + 2))( (VectorClass *)(v3), Capacity + v12, 0) )
          {
            vtable0 = v3[1].vtable0; /*0x58d564*/
            Items = (unsigned int *)(v3->Items); /*0x58d567*/
            v3[1].vtable0 = (char *)vtable0 + 1; /*0x58d56d*/
            Items[(unsigned int)vtable0] = v11; /*0x58d570*/
          }
        }
      }
      v4 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x58d57d*/
    }
    while ( v4 );
    return (unsigned int *)(&v3->vtable0); /*0x58d588*/
}
}
// 0x58E740
namespace gamemd {
RandomMap * * CollectTerrainCells(void *a1, int a2, void *a2_2)
{
    RandomMap *self = (RandomMap *)a1;  /* G57w8: this-pronoun (truth raw_decomp 0x58E740) */
    VectorClass *v2; // eax
    VectorClass *v3; // esi
    VectorClass *v4; // ebp
    unsigned int *v5; // ecx
    int v6; // esi
    int v7; // ebx
    unsigned short *v8; // eax
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
    unsigned int *Items; // edx
    RandomMap *v21; // edi
    int v22; // edx
    __int16 v24[2]; // [esp+10h] [ebp-18h] BYREF
    unsigned int *p_vtable0; // [esp+14h] [ebp-14h]
    RandomMap *v26; // [esp+18h] [ebp-10h]
    int v27; // [esp+1Ch] [ebp-Ch]
    int v28; // [esp+20h] [ebp-8h]
    int i; // [esp+24h] [ebp-4h]

    v26 = self; /*0x58e747*/
    p_vtable0 = ((RandomMap *)self)->TerrainAlloc(); /*0x58e750*/
    for ( i = 0; i < a2; ++i ) /*0x58e760*/
    {
      v2 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58e768*/
      v3 = v2; /*0x58e76d*/
      if ( v2 ) /*0x58e774*/
      {
        ((VectorClass *)v2)->CellConstructor( 0, 0); /*0x58e77a*/
        v3->vtable0 = (void*)&DynamicVectorClass_Cell_vftable; /*0x58e77f*/
        v3[1].Items = (void *)10; /*0x58e785*/
        v3[1].vtable0 = 0; /*0x58e78c*/
        v4 = v3; /*0x58e78f*/
      }
      else
      {
        v4 = (VectorClass *)(0); /*0x58e793*/
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
            v8 = (unsigned short *)(v5[1] + 4 * v27); /*0x58e7d2*/
            v9 = v8[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]); /*0x58e7e5*/
            IDA_LOWORD(v28) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]) + *v8; /*0x58e7e9*/
            IDA_HIWORD(v28) = v9; /*0x58e7ee*/
            *(unsigned int *)v24 = v28; /*0x58e7f7*/
            v10 = v9; /*0x58e7fe*/
            v11 = v9 + (__int16)v28; /*0x58e801*/
            if ( v11 > v6 /*0x58e828*/
              && (__int16)v28 - v10 < v6
              && v10 - (__int16)v28 < v6
              && v11 <= g_MissionQueueFrame.localVariables[161] )
            {
              v12 = (char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v24)); /*0x58e838*/
              if ( (void *)v12[283] == (void *)(v26->RandomMap_field_0x10) ) /*0x58e84b*/
              {
                v13 = g_MissionQueueFrame.localVariables[163] + 80 * (v24[0] + g_MapCellWidth * v24[1]); /*0x58e870*/
                v14 = *(void **)(v13 + 56); /*0x58e872*/
                if ( v14 == (void *)-1 /*0x58e8a9*/
                  && ((v15 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v24)),
                       (unsigned __int8)((Cell *)v15)->IsEmpty())
                   || (v16 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v24)),
                       (unsigned __int8)((Cell *)v16)->IsShore())) )
                {
                  Capacity = v4->Capacity; /*0x58e8b2*/
                  if ( (int)v4[1].vtable0 < Capacity /*0x58e8d8*/
                    || (v4->IsAllocated || !Capacity)
                    && (v18 = (int)v4[1].Items, v18 > 0)
&& (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v4->vtable0 + 2))( (VectorClass *)(v4), Capacity + v18, 0) )



                  {
                    vtable0 = v4[1].vtable0; /*0x58e8df*/
                    Items = (unsigned int *)(v4->Items); /*0x58e8e2*/
                    v4[1].vtable0 = (char *)vtable0 + 1; /*0x58e8e8*/
                    Items[(unsigned int)vtable0] = *(unsigned int *)v24; /*0x58e8ef*/
                  }
                  v21 = v26; /*0x58e8f2*/
                  *(unsigned int *)(v13 + 56) = v26->RandomMap_field_0x8; /*0x58e903*/
                  *((unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v24)) + 283) = v21->RandomMap_field_0x10; /*0x58e90e*/
                }
                else if ( v14 != (void *)(v26->RandomMap_field_0x8) ) /*0x58e91d*/
                {
                  if ( p_vtable0 ) /*0x58e98c*/
                    (*(void (**)(unsigned int *, int))*p_vtable0)( (unsigned int *)(p_vtable0), 1); /*0x58e992*/
                  if ( v4 ) /*0x58e996*/
                    (*(void (**)(VectorClass *, int))v4->vtable0)( (VectorClass *)(v4), 1); /*0x58e99f*/
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
        (*(void (**)(unsigned int *, int))*v5)( (unsigned int *)(v5), 1); /*0x58e951*/
      p_vtable0 = (unsigned int *)(&v4->vtable0); /*0x58e95c*/
    }
    if ( p_vtable0 ) /*0x58e972*/
      (*(void (**)(unsigned int *, int))*p_vtable0)( (unsigned int *)(p_vtable0), 1); /*0x58e978*/
    return (gamemd::RandomMap **)(1); /*0x58e97a*/
}
}
// 0x58E9B0
namespace gamemd {
AbstractClass * * PlaceRandomMapTerrain(RandomMap *self)
{
    unsigned int *v1; // esi
    int v2; // ecx
    int v3; // ebx
    int Capacity; // eax
    unsigned int *v5; // edi
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

    v1 = ((RandomMap *)( self))->TerrainAlloc(); /*0x58e9c7*/
    ((VectorClass *)&v19)->CellConstructor( 0, 0); /*0x58e9c9*/
    v2 = 50000; /*0x58e9ce*/
    v19.vtable0 = (void*)&DynamicVectorClass_Cell_vftable; /*0x58e9d3*/
    j = 0; /*0x58e9db*/
    v21 = 50000; /*0x58e9e3*/
    v3 = 0; /*0x58e9ea*/
    if ( (int)v1[4] > 0 ) /*0x58e9ee*/
    {
      Capacity = v19.Capacity; /*0x58e9f0*/
      while ( 1 ) /*0x58e9fd*/
      {
        v5 = (unsigned int *)(v1[1] + 4 * v3); /*0x58e9fd*/
        if ( j < Capacity ) /*0x58ea06*/
          goto LABEL_9; /*0x58ea06*/
        if ( (v19.IsAllocated || !Capacity) && v2 > 0 ) /*0x58ea16*/
          break; /*0x58ea16*/
  LABEL_11:
        if ( ++v3 >= v1[4] ) /*0x58ea4a*/
          goto LABEL_12; /*0x58ea4a*/
        v2 = v21; /*0x58e9f6*/
      }
      if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v19.vtable0 + 2))( (VectorClass *)(&v19), v2 + Capacity, 0) ) /*0x58ea25*/
      {
  LABEL_9:
        v6 = j++; /*0x58ea2c*/
        *((unsigned int *)v19.Items + v6) = *v5; /*0x58ea3d*/
      }
      Capacity = v19.Capacity; /*0x58ea40*/
      goto LABEL_11; /*0x58ea40*/
    }
  LABEL_12:
    if ( v1 ) /*0x58ea4e*/
      (*(void (**)(unsigned int *, int))*v1)( (unsigned int *)(v1), 1); /*0x58ea56*/
    v7 = j; /*0x58ea58*/
    for ( i = j; j > 0; i = j ) /*0x58ea60*/
    {
      v9 = i - 1; /*0x58ea6b*/
      v10 = *((unsigned int *)v19.Items + v9); /*0x58ea6e*/
      if ( v9 < v7 ) /*0x58ea75*/
      {
        for ( j = v7 - 1; v9 < j; *((unsigned int *)v19.Items + v9 - 1) = *((unsigned int *)v19.Items + v9) ) /*0x58ea7e*/
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
          if ( *(unsigned int *)(v14 + 56) == -1 ) /*0x58eb19*/
          {
            if ( *(unsigned char *)(v14 + 75) ) /*0x58eb1b*/
            {
              *(unsigned int *)(v14 + 56) = self->RandomMap_field_0x8; /*0x58eb29*/
              if ( j < v19.Capacity /*0x58eb57*/
                || (v19.IsAllocated || !v19.Capacity)
                && v21 > 0
&& (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v19.vtable0 + 2))( (VectorClass *)(&v19), v21 + v19.Capacity, 0) )



              {
                v15 = j++; /*0x58eb66*/
                *((unsigned int *)v19.Items + v15) = v17; /*0x58eb71*/
              }
            }
          }
        }
      }
      v7 = j; /*0x58eb7e*/
    }
    v19.vtable0 = (void*)&VectorClass_Cell_vftable; /*0x58eb93*/
    if ( v19.Items && v19.IsAllocated ) /*0x58eba6*/
      RA2_OPDEL(v19.Items); /*0x58eba9*/
    return (gamemd::AbstractClass **)(1); /*0x58eb91*/
}
}
// 0x58F0C0
namespace gamemd {
void* CollectBorderCells(RandomMap *self)
{
    RandomMap *v1; // ebx
    VectorClass *v2; // eax
    VectorClass *v3; // esi
    int v4; // ecx
    int v5; // eax
    unsigned int *v6; // ebp
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
    unsigned char *Block; // [esp+10h] [ebp-14h]
    int v28; // [esp+14h] [ebp-10h]
    unsigned int *v29; // [esp+1Ch] [ebp-8h]

    v1 = self; /*0x58f0c7*/
    v2 = (VectorClass *)RA2_OPNEW(0x18u); /*0x58f0cf*/
    v3 = v2; /*0x58f0d4*/
    if ( v2 ) /*0x58f0db*/
    {
      ((VectorClass *)v2)->Construct( 0, 0); /*0x58f0e3*/
      v3->vtable0 = (void*)&DynamicVectorClass_int_vftable; /*0x58f0e8*/
      v3[1].Items = (void *)10; /*0x58f0ee*/
      v3[1].vtable0 = 0; /*0x58f0f5*/
    }
    else
    {
      v3 = (VectorClass *)(0); /*0x58f0fe*/
    }
    *(unsigned int *)&v1->RandomMap_field_0x2[2] = (unsigned int)v3; /*0x58f100*/
    v4 = RA2_OPNEW(g_MissionQueueFrame.localVariables[164]); /*0x58f114*/
    v5 = 0; /*0x58f119*/
    for ( Block = (unsigned char *)v4; v5 < g_MissionQueueFrame.localVariables[164]; ++v5 ) /*0x58f121*/
      *(unsigned char *)(v5 + v4) = 0; /*0x58f123*/
    v6 = ((RandomMap *)v1)->TerrainAlloc(); /*0x58f139*/
    v7 = 0; /*0x58f13b*/
    v29 = v6; /*0x58f13d*/
    v28 = 0; /*0x58f141*/
    if ( (int)v6[4] > 0 ) /*0x58f14a*/
    {
      v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f150*/
      do /*0x58f1ee*/
      {
        v9 = 0; /*0x58f159*/
        v10 = *(unsigned int *)(v6[1] + 4 * v7); /*0x58f15b*/
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
              v16 = *(unsigned int *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58f1c0*/
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
      v1 = self; /*0x58f1f4*/
    }
    for ( i = 0; i < g_MissionQueueFrame.localVariables[164]; ++i ) /*0x58f201*/
    {
      if ( Block[i] &(void *)&i != (void *)(v1->RandomMap_field_0x8) ) /*0x58f210*/
      {
        v18 = *(unsigned int *)&v1->RandomMap_field_0x2[2]; /*0x58f212*/
        v19 = *(unsigned int *)(v18 + 8); /*0x58f215*/
        if ( *(unsigned int *)(v18 + 16) < v19 /*0x58f23a*/
          || (*(unsigned char *)(v18 + 13) || !v19)
          && (v20 = *(unsigned int *)(v18 + 20), v20 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v18 + 8))(v18, v19 + v20, 0) )
        {
          v21 = *(unsigned int *)(v18 + 16); /*0x58f241*/
          v22 = *(unsigned int *)(v18 + 4); /*0x58f244*/
          *(unsigned int *)(v18 + 16) = v21 + 1; /*0x58f24a*/
          *(unsigned int *)(v22 + 4 * v21) = i; /*0x58f24d*/
        }
      }
    }
    v23 = (int)((void *)(0)); /*0x58f25a*/
    v1->RandomMap_field_0xC = 0; /*0x58f25c*/
    v24 = g_MapCellWidth * g_MapCellWidth; /*0x58f265*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58f26a*/
    {
      RandomMap_field_0x8 = (void *)(v1->RandomMap_field_0x8); /*0x58f26c*/
      v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f26f*/
      do /*0x58f29b*/
      {
        if ( *(void **)(v23 + v26 + 56) == RandomMap_field_0x8 && (*(unsigned short *)(v23 + v26) || *(unsigned short *)(v23 + v26 + 2)) ) /*0x58f282*/
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
      (*(void (**)(unsigned int *, int))*v6)( (unsigned int *)(v6), 1); /*0x58f2a8*/
    RA2_OPDEL(Block); /*0x58f2af*/
}
}
// 0x58F2C0
namespace gamemd {
void* PlaceBuildings(void *a1, int a2, int a3)
{
    RandomMap *self = (RandomMap *)a1;  /* G57w8: this-pronoun (truth raw_decomp 0x58F2C0) */
    int v4; // eax
    int v5; // ecx
    char result; // al
    int v7; // edi
    unsigned int v8; // eax
    unsigned int v9; // esi
    int v10; // ebp
    unsigned short *v11; // eax
    CellLand *v12; // esi
    CellLand *v13; // ebp
    CellLand *v14; // esi
    CellLand *v15; // ebp
    CellLand *v16; // esi
    CellLand *v17; // ebp
    CellLand *v18; // esi
    CellLand *v19; // ebp
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
    __int16 v36; // di
    char v37; // bl
    unsigned int v38; // eax
    unsigned int v39; // eax
    int v40; // ecx
    int v41; // ebp
    int v42; // edx
    int v43; // eax
    int v44; // ebx
    __int16 v45; // si
    __int16 v46; // di
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
    RandomMap *v57; // [esp+24h] [ebp-1F4h]
    double v58; // [esp+28h] [ebp-1F0h]
    __int16 v59[2]; // [esp+30h] [ebp-1E8h] BYREF
    int v60; // [esp+34h] [ebp-1E4h]
    __int16 v61[2]; // [esp+38h] [ebp-1E0h] BYREF
    __int16 v62[2]; // [esp+3Ch] [ebp-1DCh] BYREF
    __int16 v63[2]; // [esp+40h] [ebp-1D8h] BYREF
    int v64; // [esp+44h] [ebp-1D4h]
    __int16 v65[2]; // [esp+48h] [ebp-1D0h] BYREF
    __int16 v66[2]; // [esp+4Ch] [ebp-1CCh] BYREF
    int v67; // [esp+50h] [ebp-1C8h]
    __int16 v68[2]; // [esp+54h] [ebp-1C4h] BYREF
    int v69; // [esp+58h] [ebp-1C0h]
    __int16 v70[2]; // [esp+5Ch] [ebp-1BCh] BYREF
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
    __int16 v88[2]; // [esp+A4h] [ebp-174h] BYREF
    unsigned short v89[2]; // [esp+A8h] [ebp-170h] BYREF
    __int16 v90[2]; // [esp+ACh] [ebp-16Ch] BYREF
    unsigned short v91[2]; // [esp+B0h] [ebp-168h] BYREF
    __int16 v92[2]; // [esp+B4h] [ebp-164h] BYREF
    __int16 v93[2]; // [esp+B8h] [ebp-160h] BYREF
    unsigned short v94[2]; // [esp+BCh] [ebp-15Ch] BYREF
    __int16 v95[2]; // [esp+C0h] [ebp-158h] BYREF
    unsigned short v96[2]; // [esp+C4h] [ebp-154h] BYREF
    __int16 v97[2]; // [esp+C8h] [ebp-150h] BYREF
    unsigned short v98[2]; // [esp+CCh] [ebp-14Ch] BYREF
    unsigned short v99[2]; // [esp+D0h] [ebp-148h] BYREF
    int v100; // [esp+D4h] [ebp-144h]
    __int16 v101[2]; // [esp+D8h] [ebp-140h] BYREF
    unsigned short v102[2]; // [esp+DCh] [ebp-13Ch] BYREF
    __int16 v103[2]; // [esp+E0h] [ebp-138h] BYREF
    __int64 v104; // [esp+E4h] [ebp-134h]
    __int64 v105; // [esp+ECh] [ebp-12Ch]
    __int64 v106; // [esp+F4h] [ebp-124h]
    __int64 v107; // [esp+FCh] [ebp-11Ch]
    __int64 v108; // [esp+104h] [ebp-114h]
    __int64 v109; // [esp+10Ch] [ebp-10Ch]
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
    __int16 v126; // [esp+214h] [ebp-4h] BYREF

    v4 = *(unsigned int *)(a3 + 8); /*0x58f2da*/
    v100 = *(unsigned int *)(a2 + 8); /*0x58f2df*/
    v5 = g_MapCellWidth; /*0x58f2e6*/
    v57 = self; /*0x58f2ed*/
    v69 = v4; /*0x58f2f1*/
    v64 = 0; /*0x58f2f5*/
    v51 = 0; /*0x58f2fd*/
    while ( 1 ) /*0x58f30e*/
    {
      result = v51; /*0x58f30e*/
      if ( v51 ) /*0x58f314*/
        return (void*)result; /*0x5902b2*/
      v7 = v5 * v5; /*0x58f31c*/
      while ( 1 ) /*0x58f3aa*/
      {
        v105 = (unsigned int)v7; /*0x58f330*/
        v58 = (double)(unsigned int)v7; /*0x58f33e*/
        do /*0x58f378*/
        {
          v106 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58f34c*/
          IDA_LOWORD(v8) = Math::RoundToInt((double)v106 * v58 * 2.328306437080797e-10); /*0x58f36f*/
          v9 = v8; /*0x58f374*/
        }
        while ( v8 > v7 - 1 ); /*0x58f378*/
        v10 = 80 * v8; /*0x58f386*/
        if ( *(void **)(g_MissionQueueFrame.localVariables[163] + 80 * v8 + 56) == self->RandomMap_field_0x8 ) /*0x58f38f*/
        {
          v11 = (unsigned short *)((CellStruct *)&v126)->Set( 0, 0); /*0x58f39c*/
          if ( !(unsigned __int8)CellStruct::Equals( (unsigned short *)((CellStruct *)(v10 + g_MissionQueueFrame.localVariables[163])), (void *)(v11)) ) /*0x58f3aa*/
            break; /*0x58f3aa*/
        }
      }
      IDA_LODWORD(v58) = *(unsigned int *)(80 * v9 + g_MissionQueueFrame.localVariables[163]); /*0x58f3d1*/
      v76 = IDA_SWORD1(v58); /*0x58f3df*/
      v80 = IDA_SWORD1(v58); /*0x58f3e3*/
      v75 = SLOWORD(v58) - 1; /*0x58f3ee*/
      v79 = v75; /*0x58f3f2*/
      v84 = IDA_SWORD1(v58) - 1; /*0x58f3fb*/
      v85 = 1; /*0x58f402*/
      v72 = v84; /*0x58f409*/
      v73 = 1; /*0x58f40d*/
      v77 = 3; /*0x58f417*/
      v78 = 1; /*0x58f41b*/
      v81 = 3; /*0x58f422*/
      v82 = 1; /*0x58f429*/
      v83 = SLOWORD(v58); /*0x58f430*/
      v86 = 3; /*0x58f437*/
      v71 = SLOWORD(v58); /*0x58f43e*/
      v74 = 3; /*0x58f442*/
      v50 = 1; /*0x58f446*/
      v49 = 1; /*0x58f44b*/
      if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v75), 0, 0) ) /*0x58f450*/
      {
  LABEL_15:
        v110[0] = v75; /*0x58f508*/
        v110[1] = v76 - 3; /*0x58f525*/
        v110[2] = 3; /*0x58f52c*/
        v110[3] = 3; /*0x58f533*/
        if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(v110), 0, 0) ) /*0x58f53a*/
        {
          if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v79), 0, 0) ) /*0x58f552*/
          {
  LABEL_22:
            v113[0] = v79; /*0x58f60a*/
            v113[1] = v80 + 1; /*0x58f62b*/
            v113[2] = 3; /*0x58f632*/
            v113[3] = 3; /*0x58f639*/
            if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(v113), 0, 0) ) /*0x58f640*/
              goto LABEL_24; /*0x58f647*/
          }
          else
          {
            while ( 1 ) /*0x58f56d*/
            {
              v68[0] = v79; /*0x58f56d*/
              v61[0] = v79 + 2; /*0x58f575*/
              v68[1] = ++v80; /*0x58f58c*/
              v61[1] = v80; /*0x58f591*/
              v14 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v68)); /*0x58f5a5*/
              v15 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v61)); /*0x58f5ac*/
              if ( !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v68), 1) /*0x58f5e9*/
                || !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v61), 1)
                || (unsigned __int8)CellLand::IsBuildable(v14)
                || (unsigned __int8)CellLand::IsBuildable(v15) )
              {
                break; /*0x58f5e9*/
              }
              if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v79), 0, 0) ) /*0x58f5fd*/
                goto LABEL_22; /*0x58f604*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x58f465*/
        {
          v62[0] = v75; /*0x58f465*/
          v66[0] = v75 + 2; /*0x58f46d*/
          v62[1] = --v76; /*0x58f481*/
          v66[1] = v76; /*0x58f486*/
          v12 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v62)); /*0x58f49a*/
          v13 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v66)); /*0x58f4a1*/
          if ( !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v62), 1) /*0x58f4e6*/
            || !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v66), 1)
            || (unsigned __int8)CellLand::IsBuildable(v12)
            || (unsigned __int8)CellLand::IsBuildable(v13) )
          {
            break; /*0x58f4e6*/
          }
          if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v75), 0, 0) ) /*0x58f4fb*/
            goto LABEL_15; /*0x58f502*/
        }
      }
      v49 = 0; /*0x58f649*/
  LABEL_24:
      if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v71), 0, 0) ) /*0x58f656*/
      {
  LABEL_30:
        v119[0] = v71 - 3; /*0x58f70e*/
        v119[1] = v72; /*0x58f72b*/
        v119[2] = 3; /*0x58f732*/
        v119[3] = 3; /*0x58f739*/
        if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(v119), 0, 0) ) /*0x58f740*/
        {
          if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v83), 0, 0) ) /*0x58f758*/
          {
  LABEL_37:
            v115[0] = v83 + 1; /*0x58f810*/
            v115[1] = v84; /*0x58f831*/
            v115[2] = 3; /*0x58f838*/
            v115[3] = 3; /*0x58f83f*/
            if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(v115), 0, 0) ) /*0x58f846*/
              goto LABEL_39; /*0x58f84d*/
          }
          else
          {
            while ( 1 ) /*0x58f773*/
            {
              v59[1] = v84; /*0x58f773*/
              v65[1] = v84 + 2; /*0x58f77b*/
              v59[0] = ++v83; /*0x58f792*/
              v65[0] = v83; /*0x58f797*/
              v18 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v59)); /*0x58f7ab*/
              v19 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v65)); /*0x58f7b2*/
              if ( !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v59), 1) /*0x58f7ef*/
                || !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v65), 1)
                || (unsigned __int8)CellLand::IsBuildable(v18)
                || (unsigned __int8)CellLand::IsBuildable(v19) )
              {
                break; /*0x58f7ef*/
              }
              if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v83), 0, 0) ) /*0x58f803*/
                goto LABEL_37; /*0x58f80a*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x58f66b*/
        {
          v70[1] = v72; /*0x58f66b*/
          v63[1] = v72 + 2; /*0x58f673*/
          v70[0] = --v71; /*0x58f687*/
          v63[0] = v71; /*0x58f68c*/
          v16 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v70)); /*0x58f6a0*/
          v17 = (CellLand *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v63)); /*0x58f6a7*/
          if ( !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v70), 1) /*0x58f6ec*/
            || !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v63), 1)
            || (unsigned __int8)CellLand::IsBuildable(v16)
            || (unsigned __int8)CellLand::IsBuildable(v17) )
          {
            break; /*0x58f6ec*/
          }
          if ( (unsigned __int8)IsAreaClearMap( (MapClass *)(&v71), 0, 0) ) /*0x58f701*/
            goto LABEL_30; /*0x58f708*/
        }
      }
      v50 = 0; /*0x58f84f*/
  LABEL_39:
      v20 = -1; /*0x58f854*/
      IDA_LODWORD(v58) = 999; /*0x58f866*/
      v60 = 999; /*0x58f86a*/
      v21 = -1; /*0x58f872*/
      v67 = -1; /*0x58f876*/
      v22 = -1; /*0x58f87a*/
      if ( v49 ) /*0x58f87c*/
      {
        IDA_LODWORD(v58) = abs32(v80 - v76); /*0x58f890*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58f894*/
        {
          v20 = *(unsigned int *)(80 * ((__int16)v75 + g_MapCellWidth * (__int16)v76) /*0x58f8af*/
                          + g_MissionQueueFrame.localVariables[163]
                          + 56);
          v21 = *(unsigned int *)(80 * ((__int16)v79 + g_MapCellWidth * (__int16)v80) /*0x58f8c9*/
                          + g_MissionQueueFrame.localVariables[163]
                          + 56);
        }
        else
        {
          v21 = -1; /*0x58f8fe*/
        }
      }
      if ( v50 ) /*0x58f8da*/
      {
        v60 = abs32(v83 - v71); /*0x58f8eb*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58f8ef*/
        {
          v67 = *(unsigned int *)(80 * ((__int16)v83 + g_MapCellWidth * (__int16)v84) /*0x58f92c*/
                          + g_MissionQueueFrame.localVariables[163]
                          + 56);
          v22 = *(unsigned int *)(80 * ((__int16)v71 + g_MapCellWidth * (__int16)v72) /*0x58f93d*/
                          + g_MissionQueueFrame.localVariables[163]
                          + 56);
        }
        else
        {
          v67 = -1; /*0x58f8f1*/
          v22 = -1; /*0x58f8f9*/
        }
      }
      if ( v49 ) /*0x58f947*/
      {
        v23 = v100; /*0x58f949*/
        v24 = v69; /*0x58f950*/
        if ( (v20 != v100 || v21 != v69) && (v20 != v69 || v21 != v100) ) /*0x58f962*/
          v49 = 0; /*0x58f964*/
      }
      else
      {
        v24 = v69; /*0x58f96b*/
        v23 = v100; /*0x58f96f*/
      }
      v25 = v50; /*0x58f976*/
      if ( v50 ) /*0x58f97c*/
      {
        if ( v67 == v23 && v22 == v24 || v67 == v24 && v22 == v23 ) /*0x58f990*/
        {
          if ( v49 ) /*0x58f9a0*/
          {
            if ( IDA_SLODWORD(v58) >= v60 ) /*0x58f9ac*/
            {
              v49 = 0; /*0x58f9b6*/
            }
            else
            {
              v25 = 0; /*0x58f9ae*/
              v50 = 0; /*0x58f9b0*/
            }
          }
        }
        else
        {
          v25 = 0; /*0x58f992*/
          v50 = 0; /*0x58f994*/
        }
      }
      v53 = 0; /*0x58f9bd*/
      v54 = 0; /*0x58f9c1*/
      v55 = 0; /*0x58f9c5*/
      v56 = 0; /*0x58f9c9*/
      v26 = v64 / 25 + 8; /*0x58f9e0*/
      if ( v25 && v60 < v26 ) /*0x58f9ea*/
      {
        v27 = 3; /*0x58f9f0*/
        v53 = v71; /*0x58f9f7*/
        v28 = v72; /*0x58f9fb*/
        v29 = v83 - v71 + 1; /*0x58fa00*/
      }
      else
      {
        if ( !v49 || IDA_SLODWORD(v58) >= v26 ) /*0x58fa14*/
          goto LABEL_129; /*0x58fa14*/
        v28 = v76; /*0x58fa21*/
        v29 = 3; /*0x58fa2b*/
        v27 = v80 - v76 + 1; /*0x58fa30*/
        v53 = v75; /*0x58fa31*/
      }
      v54 = v28; /*0x58fa37*/
      v55 = v29; /*0x58fa3b*/
      v56 = v27; /*0x58fa3f*/
      if ( v29 > 0 && v27 > 0 ) /*0x58fa4b*/
      {
        if ( v50 ) /*0x58fa57*/
        {
          if ( !Object_Helper((int)&v53) ) /*0x58fa6d*/
            goto LABEL_129; /*0x58fa6d*/
          v30 = v54; /*0x58fa73*/
          v31 = v55; /*0x58fa7b*/
          v32 = v54; /*0x58fa81*/
          v33 = v53; /*0x58fa85*/
          for ( IDA_LODWORD(v58) = v54; v32 < v30 + v56; IDA_LODWORD(v58) = v32 ) /*0x58fa8d*/
          {
            v34 = v31 + v33; /*0x58fa93*/
            v35 = v33; /*0x58fa96*/
            if ( v33 < v31 + v33 ) /*0x58fa9a*/
            {
              while ( 1 ) /*0x58faa8*/
              {
                if ( v35 == v33 ) /*0x58faa8*/
                {
                  v36 = v32; /*0x58fab1*/
                  v97[0] = v35; /*0x58fab9*/
                  v97[1] = v32; /*0x58fac1*/
                  *((unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v97)) + 17) = 94; /*0x58face*/
                }
                else
                {
                  v36 = v32; /*0x58fae3*/
                  if ( v35 == v34 - 1 ) /*0x58fada*/
                  {
                    v88[0] = v35; /*0x58faeb*/
                    v88[1] = v32; /*0x58faf3*/
                    *((unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v88)) + 17) = 92; /*0x58fb00*/
                  }
                  else
                  {
                    v90[0] = v35; /*0x58fb13*/
                    v90[1] = v32; /*0x58fb1b*/
                    *((unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v90)) + 17) = v35 % 4 + 74; /*0x58fb3f*/
                  }
                }
                v92[0] = v35; /*0x58fb53*/
                v92[1] = v36; /*0x58fb5b*/
                v37 = v32 - v54; /*0x58fb63*/
                *((unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v92)) + 286) = v37; /*0x58fb6a*/
                v31 = v55; /*0x58fb70*/
                v33 = v53; /*0x58fb74*/
                ++v35; /*0x58fb78*/
                v34 = v55 + v53; /*0x58fb79*/
                if ( v35 >= v55 + v53 ) /*0x58fb7e*/
                  break; /*0x58fb7e*/
                IDA_LOWORD(v32) = IDA_LOWORD(v58); /*0x58faa2*/
              }
              v30 = v54; /*0x58fb84*/
              v32 = IDA_LODWORD(v58); /*0x58fb88*/
            }
            ++v32; /*0x58fb90*/
          }
          v124[0] = v33 + v31; /*0x58fbad*/
          v124[1] = v30 - 2; /*0x58fbbd*/
          v124[2] = 6; /*0x58fbc4*/
          v124[3] = 6; /*0x58fbcb*/
          if ( !IsMapClassAreaUniform(v124, 0) ) /*0x58fbd2*/
            goto LABEL_91; /*0x58fbd2*/
          do /*0x58fc0a*/
          {
            v108 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58fbe7*/
            IDA_LOWORD(v38) = Math::RoundToInt((double)v108 * 4.656612874161595e-10); /*0x58fc02*/
          }
          while ( v38 > 1 ); /*0x58fc0a*/
          if ( v38 ) /*0x58fc0e*/
          {
            v94[0] = v53 + v55; /*0x58fc25*/
            v94[1] = v54; /*0x58fc2f*/
            PlaceMapSeedClassBuildings( g_CellTileTypeCache + 10, (ObjectClass *)(v94), -1, -1); /*0x58fc43*/
          }
          else
          {
  LABEL_91:
            v89[1] = v54; /*0x58fc64*/
            v89[0] = v53 + v55; /*0x58fc74*/
            PlaceMapSeedClassBuildings( dword_ABBEC4, (ObjectClass *)(v89), -1, -1); /*0x58fc85*/
          }
          v117[0] = v53 - 6; /*0x58fc98*/
          v117[1] = v54 - 2; /*0x58fca8*/
          v117[2] = 6; /*0x58fcaf*/
          v117[3] = 6; /*0x58fcb6*/
          if ( !IsMapClassAreaUniform(v117, 0) ) /*0x58fcbd*/
            goto LABEL_96; /*0x58fcbd*/
          do /*0x58fcf3*/
          {
            v104 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58fcd0*/
            IDA_LOWORD(v39) = Math::RoundToInt((double)v104 * 4.656612874161595e-10); /*0x58fceb*/
          }
          while ( v39 > 1 ); /*0x58fcf3*/
          if ( v39 ) /*0x58fcf7*/
          {
            v99[0] = v53 - 4; /*0x58fd0a*/
            v99[1] = v54; /*0x58fd12*/
            PlaceMapSeedClassBuildings( g_CellTileTypeCache + 9, (ObjectClass *)(v99), -1, -1); /*0x58fd28*/
          }
          else
          {
  LABEL_96:
            v91[0] = v53 - 1; /*0x58fd39*/
            v91[1] = v54; /*0x58fd41*/
            PlaceMapSeedClassBuildings( dword_ABBEC4 + 2, (ObjectClass *)(v91), -1, -1); /*0x58fd57*/
          }
          v122[0] = v53; /*0x58fd6b*/
          v122[1] = v54 - 1; /*0x58fd80*/
          v122[2] = 2; /*0x58fd87*/
          v122[3] = 5; /*0x58fd8e*/
          if ( !PlaceCabhutMap(v122) ) /*0x58fd95*/
          {
            v111[0] = v53 - 1; /*0x58fdae*/
            v111[1] = v54 - 2; /*0x58fdbb*/
            v111[2] = 3; /*0x58fdc2*/
            v111[3] = 7; /*0x58fdcd*/
            PlaceCabhutMap(v111); /*0x58fdd8*/
          }
          v112[2] = 2; /*0x58fde5*/
          v112[3] = 5; /*0x58fdec*/
          v112[1] = v54 - 1; /*0x58fe03*/
          v112[0] = v55 + v53 - 2; /*0x58fe0d*/
          if ( !PlaceCabhutMap(v112) ) /*0x58fe14*/
          {
            v114[2] = 3; /*0x58fe29*/
            v114[3] = 7; /*0x58fe34*/
            v114[0] = v55 + v53 - 2; /*0x58fe52*/
            v114[1] = v54 - 2; /*0x58fe59*/
            PlaceCabhutMap(v114); /*0x58fe62*/
          }
          goto LABEL_128; /*0x58fe62*/
        }
        if ( v49 && Object_Helper((int)&v53) ) /*0x58fe84*/
        {
          v40 = v54; /*0x58fe91*/
          v41 = v54; /*0x58fe9b*/
          IDA_LODWORD(v58) = v54; /*0x58fe9f*/
          if ( v54 >= v54 + v56 ) /*0x58fea3*/
          {
            v43 = v53; /*0x590073*/
          }
          else
          {
            v42 = v55; /*0x58fea9*/
            v43 = v53; /*0x58fead*/
            do /*0x58ffc4*/
            {
              v44 = v43; /*0x58feb4*/
              if ( v43 < v42 + v43 ) /*0x58feb8*/
              {
                do /*0x58ffb1*/
                {
                  if ( v41 == v40 ) /*0x58fec0*/
                  {
                    v45 = v44; /*0x58fec9*/
                    v46 = v41; /*0x58fecb*/
                    v101[0] = v44; /*0x58fed3*/
                    v101[1] = v41; /*0x58fedb*/
                    *((unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v101)) + 17) = 96; /*0x58fee8*/
                  }
                  else
                  {
                    v45 = v44; /*0x58fef5*/
                    v46 = v41; /*0x58ff06*/
                    if ( v41 == v56 + v40 - 1 ) /*0x58fefd*/
                    {
                      v93[0] = v44; /*0x58ff0e*/
                      v93[1] = v41; /*0x58ff16*/
                      *((unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v93)) + 17) = 98; /*0x58ff23*/
                    }
                    else
                    {
                      v103[0] = v44; /*0x58ff34*/
                      v103[1] = v41; /*0x58ff3c*/
                      *((unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v103)) + 17) = v41 % 4 + 83; /*0x58ff60*/
                      v41 = IDA_LODWORD(v58); /*0x58ff63*/
                    }
                  }
                  v95[0] = v45; /*0x58ff7c*/
                  v95[1] = v46; /*0x58ff84*/
                  v52 = v44++ - v53; /*0x58ff8c*/
                  *((unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v95)) + 286) = v52; /*0x58ff9a*/
                  v42 = v55; /*0x58ffa0*/
                  v43 = v53; /*0x58ffa4*/
                  v40 = v54; /*0x58ffad*/
                }
                while ( v44 < v55 + v53 ); /*0x58ffb1*/
              }
              IDA_LODWORD(v58) = ++v41; /*0x58ffbe*/
            }
            while ( v41 < v40 + v56 ); /*0x58ffc4*/
          }
          v116[1] = v40 - 6; /*0x58ffd9*/
          v116[0] = v43 - 2; /*0x58ffee*/
          v116[2] = 7; /*0x58fff5*/
          v116[3] = 6; /*0x58fffc*/
          if ( !IsMapClassAreaUniform(v116, 0) ) /*0x590003*/
            goto LABEL_118; /*0x590003*/
          do /*0x59003b*/
          {
            v107 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590018*/
            IDA_LOWORD(v47) = Math::RoundToInt((double)v107 * 4.656612874161595e-10); /*0x590033*/
          }
          while ( v47 > 1 ); /*0x59003b*/
          if ( v47 ) /*0x59003f*/
          {
            v87[0] = v53; /*0x590053*/
            v87[1] = v54 - 4; /*0x59005d*/
            PlaceMapSeedClassBuildings( g_CellTileTypeCache + 13, (ObjectClass *)(v87), -1, -1); /*0x590071*/
          }
          else
          {
  LABEL_118:
            v96[0] = v53; /*0x590097*/
            v96[1] = v54 - 1; /*0x5900a1*/
            PlaceMapSeedClassBuildings( dword_ABBEC4 + 1, (ObjectClass *)(v96), -1, -1); /*0x5900b3*/
          }
          v118[0] = v53 - 2; /*0x5900c9*/
          v118[1] = v54 + v56; /*0x5900d0*/
          v118[2] = 7; /*0x5900e0*/
          v118[3] = 6; /*0x5900e7*/
          if ( !IsMapClassAreaUniform(v118, 0) ) /*0x5900ee*/
            goto LABEL_123; /*0x5900ee*/
          do /*0x590124*/
          {
            v109 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590101*/
            IDA_LOWORD(v48) = Math::RoundToInt((double)v109 * 4.656612874161595e-10); /*0x59011c*/
          }
          while ( v48 > 1 ); /*0x590124*/
          if ( v48 ) /*0x590128*/
          {
            v98[1] = v56 + v54; /*0x590139*/
            v98[0] = v53; /*0x590146*/
            PlaceMapSeedClassBuildings( g_CellTileTypeCache + 12, (ObjectClass *)(v98), -1, -1); /*0x59015c*/
          }
          else
          {
  LABEL_123:
            v102[0] = v53; /*0x59016b*/
            v102[1] = v56 + v54; /*0x59017b*/
            PlaceMapSeedClassBuildings( dword_ABBEC4 + 3, (ObjectClass *)(v102), -1, -1); /*0x590191*/
          }
          v121[0] = v53 - 1; /*0x5901b3*/
          v121[1] = v54; /*0x5901ba*/
          v121[2] = 5; /*0x5901c1*/
          v121[3] = 2; /*0x5901c8*/
          if ( !PlaceCabhutMap(v121) ) /*0x5901cf*/
          {
            v123[0] = v53 - 2; /*0x5901ee*/
            v123[1] = v54 - 1; /*0x5901f5*/
            v123[2] = 7; /*0x5901fc*/
            v123[3] = 3; /*0x590203*/
            PlaceCabhutMap(v123); /*0x59020e*/
          }
          v125[0] = v53 - 1; /*0x590220*/
          v125[2] = 5; /*0x590227*/
          v125[1] = v56 + v54 - 2; /*0x59023c*/
          v125[3] = 2; /*0x590243*/
          if ( !PlaceCabhutMap(v125) ) /*0x59024a*/
          {
            v120[0] = v53 - 2; /*0x590262*/
            v120[2] = 7; /*0x590269*/
            v120[1] = v56 + v54 - 2; /*0x59027b*/
            v120[3] = 3; /*0x590282*/
            PlaceCabhutMap(v120); /*0x590290*/
          }
  LABEL_128:
          v51 = 1; /*0x590295*/
        }
      }
  LABEL_129:
      if ( ++v64 >= 200 ) /*0x5902a8*/
        return (void*)v51; /*0x5902ae*/
      v5 = g_MapCellWidth; /*0x58f304*/
      self = v57; /*0x58f30a*/
    }
}
} // namespace gamemd

// 0x5905D0
namespace gamemd {
int AllocateArea()
{
    RandomMap *v1; // esi
    int v2; // eax
    int v3; // ecx
    int v4; // edi
    int v5; // ebx
    int v6; // ebp
    int v7; // eax
    int v8; // edx
    int v9; // edx
    int v10; // eax
    int v11; // edx
    int v12; // ecx
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
    RandomMap *v23; // ebp
    int v24; // eax
    unsigned int v25; // eax
    void *RandomMap_field_0x10; // ecx
    int v27; // eax
    void *RandomMap_field_0x8; // edi
    int v29; // eax
    int v30; // ecx
    RandomMap *v31; // ebp
    unsigned int *v32; // edi
    unsigned int v33; // esi
    unsigned int v34; // eax
    int v35; // edx
    float v37; // [esp+0h] [ebp-58h]
    unsigned int *v39; // [esp+18h] [ebp-40h]
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

    v1 = this; /*0x5905d6*/
    IDA_LOBYTE(v2) = this->RandomMap_field_0x14; /*0x5905dd*/
    if ( (unsigned char)v2 ) /*0x5905e2*/
    {
      v3 = *(unsigned int *)&this->RandomMap_field_0x2[2]; /*0x5905e8*/
      v4 = *(unsigned int *)(v3 + 16); /*0x5905eb*/
      IDA_LOBYTE(v2) = v4 - 1; /*0x5905ee*/
      if ( v4 - 1 > 0 ) /*0x5905f3*/
      {
        v5 = g_MissionQueueFrame.briefing[339]; /*0x5905f9*/
        v6 = g_MissionQueueFrame.briefing[342]; /*0x5905ff*/
        v42 = 1; /*0x590605*/
        *(unsigned int *)v41 = 0; /*0x59060d*/
        while ( 1 ) /*0x590615*/
        {
          v7 = 0; /*0x590615*/
          if ( v6 <= 0 ) /*0x590619*/
          {
  LABEL_9:
            v39 = (unsigned int *)(0); /*0x590640*/
          }
          else
          {
            v8 = v5; /*0x590625*/
            while ( *(unsigned int *)(*(unsigned int *)&v8->needsSave != *(unsigned int *)(*(unsigned int *)(v3 + 4) + *(unsigned int *)v41) )) /*0x59062c*/
            {
              ++v7; /*0x59062e*/
              v8 += 4; /*0x59062f*/
              if ( v7 >= v6 ) /*0x590634*/
              {
                v5 = g_MissionQueueFrame.briefing[339]; /*0x590636*/
                v1 = this; /*0x59063c*/
                goto LABEL_9; /*0x59063c*/
              }
            }
            v5 = g_MissionQueueFrame.briefing[339]; /*0x59068e*/
            v1 = this; /*0x590694*/
            v39 = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * v7); /*0x59069b*/
          }
          if ( *(int *)(v39[1] + 16) <= 1 && (int)v39[3] <= 50 ) /*0x590659*/
            goto LABEL_28; /*0x590659*/
          v9 = v42; /*0x59065f*/
          v43 = (void *)v42; /*0x590665*/
          if ( v42 < v4 ) /*0x590669*/
            break; /*0x590669*/
  LABEL_29:
          *(unsigned int *)v41 += 4; /*0x590701*/
          v3 = *(unsigned int *)&v1->RandomMap_field_0x2[2]; /*0x59070d*/
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
            while ( *(unsigned int *)(*(unsigned int * *)&v12->NeedsSaveOrLink != v11 )) /*0x590682*/
            {
              ++v10; /*0x590684*/
              v12 += 4; /*0x590685*/
              if ( v10 >= v6 ) /*0x59068a*/
                goto LABEL_20; /*0x59068a*/
            }
            v13 = *(unsigned int *)(v5 + 4 * v10); /*0x5906a1*/
          }
          if ( (*(int *)(*(unsigned int *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(unsigned char *)(v13 + 20) ) /*0x5906b7*/
          {
            v14 = (void *)v39[4]; /*0x5906c5*/
            if ( *(void **)(v13 + 16) == (void *)((void *)(v14) && v14 == v1->RandomMap_field_0x10 )) /*0x5906cf*/
            {
              ((RandomMap *)v1)->PlaceBuildings( (int)v39, v13); /*0x5906d5*/
              v5 = g_MissionQueueFrame.briefing[339]; /*0x5906da*/
              v6 = g_MissionQueueFrame.briefing[342]; /*0x5906e0*/
            }
          }
          v3 = *(unsigned int *)&v1->RandomMap_field_0x2[2]; /*0x5906e6*/
          v9 = (int)v43 + 1; /*0x5906ed*/
          v15 = *(unsigned int *)(v3 + 16); /*0x5906ee*/
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
      v16 = *(unsigned int *)&this->RandomMap_field_0x2[2]; /*0x59072b*/
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
            v20 = *(unsigned int *)(*(unsigned int *)(v16 + 4) + 4 * v42); /*0x590756*/
            v21 = g_MissionQueueFrame.briefing[339]; /*0x590759*/
            while ( *(unsigned int *)(*(unsigned int * *)&v21->q020 != v20 )) /*0x590760*/
            {
              ++v19; /*0x590766*/
              v21 += 4; /*0x590767*/
              if ( v19 >= v18 ) /*0x59076c*/
                goto LABEL_37; /*0x59076c*/
            }
            v22 = *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v19); /*0x5907ee*/
          }
          v23 = this; /*0x590770*/
          if ( *(unsigned int *)(v22 + 8) > (int)this->RandomMap_field_0x8 && *(void **)(v22 + 16) != this->RandomMap_field_0x10 ) /*0x590788*/
          {
            v40 = 0; /*0x59078e*/
            do /*0x5907b6*/
            {
              v46 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59079c*/
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
                v47 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5907ca*/
                IDA_LOWORD(v25) = Math::RoundToInt((double)v47 * 4.656612874161595e-10 + 1.0); /*0x5907e2*/
              }
              while ( v25 > 2 ); /*0x5907ea*/
            }
            RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x5907f8*/
            v45 = v25 + 1; /*0x5907fc*/
            v27 = *(unsigned int *)(v22 + 16); /*0x590800*/
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
              v31 = (RandomMap *)(0); /*0x59084e*/
            }
            else
            {
              v30 = g_MissionQueueFrame.briefing[339]; /*0x590839*/
              while ( *(void **)(*(unsigned int *)&v30->needsSave != RandomMap_field_0x8 )) /*0x590840*/
              {
                ++v29; /*0x590846*/
                v30 += 4; /*0x590847*/
                if ( v29 >= g_MissionQueueFrame.briefing[342] ) /*0x59084c*/
                  goto LABEL_57; /*0x59084c*/
              }
              v31 = *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v29); /*0x590960*/
            }
            v32 = ((RandomMap *)v31)->TerrainAlloc(); /*0x590857*/
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
                v49 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590893*/
                IDA_LOWORD(v34) = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
              }
              while ( v34 > v33 ); /*0x5908b4*/
              *(unsigned int *)v41 = *(unsigned int *)(v32[1] + 4 * v34); /*0x5908c8*/
              if ( (unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v41), 1) ) /*0x5908cc*/
              {
                v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
                v40 += ((RandomMap *)v31)->CheckCellPlacement( (short *)(v41), (void *)(v43), (DynamicVector *)(v37)) != 0; /*0x590900*/
              }
              v44 = ++v17; /*0x59090f*/
            }
            while ( v40 < v45 ); /*0x590913*/
            if ( !v40 ) /*0x59091f*/
  LABEL_66:
              IDA_HIBYTE(this->RandomMap_field_0x18) = 0; /*0x590925*/
            if ( v32 ) /*0x59092b*/
              (*(void (**)(unsigned int *, int))*v32)( (unsigned int *)(v32), 1); /*0x590933*/
            v18 = g_MissionQueueFrame.briefing[342]; /*0x590935*/
            v23 = this; /*0x59093b*/
            v17 = 0; /*0x59093f*/
          }
          v16 = *(unsigned int *)&v23->RandomMap_field_0x2[2]; /*0x590941*/
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
char CheckCellPlacement(short * a1, void * a2, DynamicVector * aP3)
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
    unsigned char v39[5]; // [esp+13h] [ebp-Dh] BYREF
    __int64 v40; // [esp+18h] [ebp-8h]

    v4 = (__int16 *)(a2); /*0x59097a*/
    v5 = a3; /*0x59097f*/
    v39[0] = 1; /*0x59098f*/
    v7 = ((RandomMap *)this)->CheckNeighborhoodCompatibility( (unsigned short *)(a2), (DynamicVector *)(v39), (int)a3, a4); /*0x590999*/
    if ( !v39[0] ) /*0x5909a1*/
      return 0; /*0x5909a6*/
    v9 = 0; /*0x5909af*/
    if ( v7 == 255 ) /*0x5909b7*/
      return 0; /*0x5909bc*/
    if ( (v7 & 0x82) != 0x82 || (v7 & 0x38) != 0 ) /*0x5909d5*/
      goto LABEL_86; /*0x5909d5*/
    v10 = *v4; /*0x5909d7*/
    *(unsigned short *)&v39[1] = *v4 - 1; /*0x5909e0*/
    v11 = v4[1]; /*0x5909e5*/
    IDA_LOWORD(a2) = v10 + 5; /*0x5909e9*/
    *(unsigned short *)&v39[3] = v11 - 5; /*0x5909f5*/
    IDA_HIWORD(a2) = v11 + 1; /*0x5909fa*/
    if ( (v7 & 0x40) != 0 ) /*0x5909ff*/
      ++*(unsigned short *)&v39[3]; /*0x590a01*/
    if ( (v7 & 4) != 0 ) /*0x590a09*/
      IDA_LOWORD(a2) = (unsigned short)a2 - 1; /*0x590a0b*/
    v9 = PlaceMapSeedCityBlockVariant2((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590a22*/
    if ( !v9 ) /*0x590a26*/
    {
  LABEL_86:
      if ( (v7 & 0xA) != 0xA || (v7 & 0x11) != 0 ) /*0x590a39*/
        goto LABEL_87; /*0x590a39*/
      v12 = *v4; /*0x590a3b*/
      *(unsigned short *)&v39[1] = *v4 + 5; /*0x590a42*/
      v13 = v4[1]; /*0x590a47*/
      IDA_LOWORD(a2) = v12 - 1; /*0x590a4b*/
      *(unsigned short *)&v39[3] = v13 - 1; /*0x590a59*/
      IDA_HIWORD(a2) = v13 + 5; /*0x590a5e*/
      if ( (v7 & 0x10) != 0 ) /*0x590a63*/
        --IDA_HIWORD(a2); /*0x590a65*/
      if ( (v7 & 1) != 0 ) /*0x590a6d*/
        --*(unsigned short *)&v39[1]; /*0x590a6f*/
      v9 = MapSeed::PlaceCityBlock2((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590a86*/
      if ( !v9 ) /*0x590a8a*/
      {
  LABEL_87:
        if ( (v7 & 0x28) != 0x28 || (v7 & 0x83) != 0 ) /*0x590a9d*/
          goto LABEL_88; /*0x590a9d*/
        v14 = *v4; /*0x590a9f*/
        *(unsigned short *)&v39[1] = *v4 + 1; /*0x590aa8*/
        v15 = v4[1]; /*0x590aad*/
        IDA_LOWORD(a2) = v14 - 5; /*0x590ab1*/
        *(unsigned short *)&v39[3] = v15 + 5; /*0x590abd*/
        IDA_HIWORD(a2) = v15 - 1; /*0x590ac2*/
        if ( (v7 & 0x40) != 0 ) /*0x590ac7*/
          IDA_LOWORD(a2) = (unsigned short)a2 - 1; /*0x590ac9*/
        if ( (v7 & 4) != 0 ) /*0x590ad1*/
          --*(unsigned short *)&v39[3]; /*0x590ad3*/
        v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590aea*/
        if ( !v9 ) /*0x590aee*/
        {
  LABEL_88:
          if ( (v7 & 0xA0) != 0xA0 || (v7 & 0xE) != 0 ) /*0x590b04*/
            goto LABEL_89; /*0x590b04*/
          v16 = *v4; /*0x590b06*/
          *(unsigned short *)&v39[1] = *v4 - 5; /*0x590b0d*/
          v17 = v4[1]; /*0x590b12*/
          IDA_LOWORD(a2) = v16 + 1; /*0x590b16*/
          *(unsigned short *)&v39[3] = v17 + 1; /*0x590b24*/
          IDA_HIWORD(a2) = v17 - 5; /*0x590b29*/
          if ( (v7 & 1) != 0 ) /*0x590b2e*/
            ++IDA_HIWORD(a2); /*0x590b30*/
          if ( (v7 & 0x10) != 0 ) /*0x590b38*/
            ++*(unsigned short *)&v39[1]; /*0x590b3a*/
          v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590b51*/
          if ( !v9 ) /*0x590b55*/
          {
  LABEL_89:
            if ( (v7 & 0x70) != 0 || (v7 & 0x88) == 0 ) /*0x590b67*/
              goto LABEL_90; /*0x590b67*/
            v18 = v4[1]; /*0x590b6d*/
            *(unsigned short *)&v39[1] = *v4 - 1; /*0x590b7f*/
            *(unsigned short *)&v39[3] = v18 - 4; /*0x590b84*/
            IDA_LOWORD(a2) = *(unsigned short *)&v39[1]; /*0x590b89*/
            IDA_HIWORD(a2) = v18 + 4; /*0x590b8e*/
            if ( (v7 & 0x80u) != 0 ) /*0x590b93*/
            {
              ++*(unsigned short *)&v39[3]; /*0x590b95*/
              ++IDA_HIWORD(a2); /*0x590b9a*/
            }
            if ( (v7 & 8) != 0 ) /*0x590ba2*/
            {
              --IDA_HIWORD(a2); /*0x590ba4*/
              --*(unsigned short *)&v39[3]; /*0x590ba9*/
            }
            do /*0x590bd6*/
            {
              v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590bb8*/
              IDA_LOWORD(v19) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
            }
            while ( v19 > 1 ); /*0x590bd6*/
            *(unsigned short *)&v39[1] += v19; /*0x590bd8*/
            do /*0x590c05*/
            {
              v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590be7*/
              IDA_LOWORD(v20) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
            }
            while ( v20 > 1 ); /*0x590c05*/
            IDA_LOWORD(a2) = v20 + (unsigned short)a2; /*0x590c07*/
            v9 = ((RandomMap *)this)->CheckPlacementArea( (short *)((__int16 *)&v39[1]), (short *)((__int16 *)&a2), (ObjectClass *)(v5)); /*0x590c1e*/
            if ( !v9 ) /*0x590c22*/
            {
  LABEL_90:
              if ( (v7 & 7) != 0 || (v7 & 0x88) == 0 ) /*0x590c34*/
                goto LABEL_91; /*0x590c34*/
              v21 = v4[1]; /*0x590c3a*/
              *(unsigned short *)&v39[1] = *v4 + 1; /*0x590c4c*/
              *(unsigned short *)&v39[3] = v21 + 4; /*0x590c51*/
              IDA_LOWORD(a2) = *(unsigned short *)&v39[1]; /*0x590c56*/
              IDA_HIWORD(a2) = v21 - 4; /*0x590c5b*/
              if ( (v7 & 0x80u) != 0 ) /*0x590c60*/
              {
                ++IDA_HIWORD(a2); /*0x590c62*/
                ++*(unsigned short *)&v39[3]; /*0x590c67*/
              }
              if ( (v7 & 8) != 0 ) /*0x590c6f*/
              {
                --*(unsigned short *)&v39[3]; /*0x590c71*/
                --IDA_HIWORD(a2); /*0x590c76*/
              }
              do /*0x590ca3*/
              {
                v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590c85*/
                IDA_LOWORD(v22) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
              }
              while ( v22 > 1 ); /*0x590ca3*/
              *(unsigned short *)&v39[1] += v22 - 1; /*0x590ca6*/
              do /*0x590cd3*/
              {
                v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590cb5*/
                IDA_LOWORD(v23) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
              }
              while ( v23 > 1 ); /*0x590cd3*/
              IDA_LOWORD(a2) = v23 - 1 + (unsigned short)a2; /*0x590cd7*/
              v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590ced*/
              if ( !v9 ) /*0x590cf1*/
              {
  LABEL_91:
                if ( (v7 & 0xC1) != 0 || (v7 & 0x22) == 0 ) /*0x590d03*/
                  goto LABEL_64; /*0x590d03*/
                v24 = *v4; /*0x590d09*/
                v25 = v4[1] - 1; /*0x590d10*/
                *(unsigned short *)&v39[1] = *v4 + 4; /*0x590d1b*/
                *(unsigned short *)&v39[3] = v25; /*0x590d20*/
                IDA_LOWORD(a2) = v24 - 4; /*0x590d25*/
                IDA_HIWORD(a2) = v25; /*0x590d2a*/
                if ( (v7 & 0x20) != 0 ) /*0x590d2f*/
                {
                  IDA_LOWORD(a2) = (unsigned short)a2 + 1; /*0x590d31*/
                  ++*(unsigned short *)&v39[1]; /*0x590d36*/
                }
                if ( (v7 & 2) != 0 ) /*0x590d3e*/
                {
                  --*(unsigned short *)&v39[1]; /*0x590d40*/
                  IDA_LOWORD(a2) = (unsigned short)a2 - 1; /*0x590d45*/
                }
                do /*0x590d72*/
                {
                  v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d54*/
                  IDA_LOWORD(v26) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
                }
                while ( v26 > 1 ); /*0x590d72*/
                *(unsigned short *)&v39[3] += v26; /*0x590d74*/
                do /*0x590da1*/
                {
                  v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d83*/
                  IDA_LOWORD(v27) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
                }
                while ( v27 > 1 ); /*0x590da1*/
                IDA_HIWORD(a2) += v27; /*0x590da3*/
                v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590dba*/
                if ( !v9 ) /*0x590dbe*/
                {
  LABEL_64:
                  if ( (v7 & 0x1C) == 0 && (v7 & 0x22) != 0 ) /*0x590dd0*/
                  {
                    v28 = *v4; /*0x590dd6*/
                    v29 = v4[1] + 1; /*0x590ddd*/
                    *(unsigned short *)&v39[1] = *v4 - 4; /*0x590de8*/
                    *(unsigned short *)&v39[3] = v29; /*0x590ded*/
                    IDA_LOWORD(a2) = v28 + 4; /*0x590df2*/
                    IDA_HIWORD(a2) = v29; /*0x590df7*/
                    if ( (v7 & 0x20) != 0 ) /*0x590dfc*/
                    {
                      ++*(unsigned short *)&v39[1]; /*0x590dfe*/
                      IDA_LOWORD(a2) = (unsigned short)a2 + 1; /*0x590e03*/
                    }
                    if ( (v7 & 2) != 0 ) /*0x590e0b*/
                    {
                      IDA_LOWORD(a2) = (unsigned short)a2 - 1; /*0x590e0d*/
                      --*(unsigned short *)&v39[1]; /*0x590e12*/
                    }
                    do /*0x590e3f*/
                    {
                      v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e21*/
                      IDA_LOWORD(v30) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                    }
                    while ( v30 > 1 ); /*0x590e3f*/
                    *(unsigned short *)&v39[3] += v30 - 1; /*0x590e42*/
                    do /*0x590e6f*/
                    {
                      v40 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e51*/
                      IDA_LOWORD(v31) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                    }
                    while ( v31 > 1 ); /*0x590e6f*/
                    IDA_HIWORD(a2) += v31 - 1; /*0x590e73*/
                    v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590e89*/
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( a4 > 0.5 && !v9 ) /*0x590ea2*/
    {
      if ( (v7 & 8) != 0 /*0x590eec*/
        || (v32 = *v4 - 4,
            v33 = *v4 + 4,
            IDA_HIWORD(a2) = v4[1] + 1,
            IDA_HIWORD(a4) = IDA_HIWORD(a2),
            IDA_LOWORD(a4) = v33,
            IDA_LOWORD(a2) = v32,
            (v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
      {
        if ( (v7 & 2) != 0 /*0x590f34*/
          || (v34 = v4[1],
              IDA_LOWORD(a2) = *v4 + 1,
              IDA_LOWORD(a4) = (unsigned short)a2,
              IDA_HIWORD(a4) = v34 - 4,
              IDA_HIWORD(a2) = v34 + 4,
              (v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
        {
          if ( (v7 & 8) != 0 /*0x590f7b*/
            || (v35 = *v4 - 4,
                IDA_LOWORD(a2) = *v4 + 4,
                v36 = v4[1] - 1,
                IDA_LOWORD(a4) = v35,
                IDA_HIWORD(a2) = v36,
                IDA_HIWORD(a4) = v36,
                (v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
          {
            if ( (v7 & 0x20) == 0 ) /*0x590f80*/
            {
              v37 = *v4; /*0x590f82*/
              v38 = v4[1]; /*0x590f85*/
              IDA_LOWORD(a2) = v37 - 1; /*0x590f92*/
              IDA_LOWORD(a4) = v37 - 1; /*0x590f97*/
              IDA_HIWORD(a2) = v38 - 4; /*0x590f9c*/
              IDA_HIWORD(a4) = v38 + 4; /*0x590fb1*/
              return ((RandomMap *)this)->CheckPlacementArea( (short *)((__int16 *)&a2), (short *)((__int16 *)&a4), a3); /*0x590fbb*/
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
int CheckNeighborhoodCompatibility(unsigned short * a1, DynamicVector * aP2, int a4, DynamicVector * aP4)
{
    int v6; // eax
    __int16 v7; // cx
    unsigned short *v8; // ebx
    void *RandomMap_field_0x8; // edx
    int v11; // esi
    int v12; // edi
    char *v13; // ebx
    void *v14; // edx
    int v15; // [esp+0h] [ebp-18h]
    int v16; // [esp+4h] [ebp-14h]
    unsigned short *v17; // [esp+8h] [ebp-10h] BYREF
    int v18; // [esp+Ch] [ebp-Ch]
    int v19; // [esp+10h] [ebp-8h]
    int v20; // [esp+14h] [ebp-4h]
    unsigned short *v21; // [esp+1Ch] [ebp+4h]
    int v22; // [esp+28h] [ebp+10h]

    IDA_LOWORD(v6) = Math::RoundToInt((15.0 - 5.0) * (1.0 - a5) + 5.0); /*0x590ff5*/
    v16 = v6; /*0x591000*/
    v7 = a2[1] - 2; /*0x591010*/
    v8 = (unsigned short *)(__int16)(*a2 - 2); /*0x591014*/
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
            v17 = (unsigned short *)(v13); /*0x59107c*/
            v14 = this->RandomMap_field_0x8; /*0x591088*/
            v19 = 5; /*0x591094*/
            v20 = 5; /*0x591098*/
            v18 = v11 + v15 + 4 * v11 - 5; /*0x5910a0*/
            if ( Map_Check((__int16 *)&v17, (int)v14, a4, v16) ) /*0x5910a9*/
              v22 |= *(unsigned int *)&stru_82ADA8.?[8 * v11 + 35 + 4 * v12 + 4 * v11]; /*0x5910c6*/
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
      *a3 = 0; /*0x591052*/
      return 0; /*0x591054*/
    }
}
}
// 0x592440
namespace gamemd {
ObjectClass * * CheckPlacementArea(short * a2, short * a3, ObjectClass * aP2)
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
    unsigned char *v20; // ebp
    int v21; // edx
    int MapSeed_field_0x04; // ebp
    int v23; // esi
    int v24; // esi
    unsigned char *v25; // ebp
    int MapSeed_field_0x10; // ebp
    int v27; // edx
    int v28; // esi
    unsigned char *v29; // eax
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
    unsigned char *v52; // eax
    char v53; // dl
    unsigned __int8 v54; // cl
    int v55; // edx
    bool v56; // cc
    int v57; // esi
    __int16 MapSeed_field_0x1C_high; // bp
    __int16 v59; // dx
    __int16 v60; // ax
    __int16 v61; // ax
    unsigned char *v62; // eax
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
    result = ((BuildingTypeClass *)this)->CheckPlacementArea( (ObjectClass *)(&v72), (ObjectClass *)((int)a4)); /*0x5924ad*/
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
                *(unsigned short *)v66.__pad_0 = v19; /*0x592537*/
                *(unsigned short *)&v66.__pad_0[2] = MapSeed_field_0x08; /*0x59253c*/
                if ( (unsigned __int8)((MapSeed *)&v66)->IsCellInBounds() ) /*0x592541*/
                {
                  SetLayerDataMap((__int16 *)v66.__pad_0, (int)a4); /*0x592552*/
                  v20 = (unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)v66.__pad_0)); /*0x59256a*/
                  v20[283] = *(unsigned char *)(List::FindByValue((List *)a4) + 16); /*0x592574*/
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
                *(unsigned short *)v66.__pad_0 = v24; /*0x5925d6*/
                *(unsigned short *)&v66.__pad_0[2] = MapSeed_field_0x04; /*0x5925db*/
                if ( (unsigned __int8)((MapSeed *)&v66)->IsCellInBounds() ) /*0x5925e0*/
                {
                  SetLayerDataMap((__int16 *)v66.__pad_0, (int)a4); /*0x5925f1*/
                  v25 = (unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)v66.__pad_0)); /*0x592609*/
                  v25[283] = *(unsigned char *)(List::FindByValue((List *)a4) + 16); /*0x592613*/
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
                *(unsigned short *)v66.__pad_0 = v28; /*0x59267b*/
                *(unsigned short *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592680*/
                if ( (unsigned __int8)((MapSeed *)&v66)->IsCellInBounds() ) /*0x592689*/
                {
                  SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59269d*/
                  v29 = (unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)v66.__pad_0)); /*0x5926ac*/
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
        v30 = (__int16 *)(a3); /*0x5926e0*/
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
                *(unsigned short *)v66.__pad_0 = v34; /*0x592720*/
                *(unsigned short *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592725*/
                if ( (unsigned __int8)((MapSeed *)&v66)->IsCellInBounds() ) /*0x59272a*/
                {
                  SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59273e*/
                  *((unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)v66.__pad_0)) + 283) = this->RandomMap_field_0x10; /*0x592759*/
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
        PlaceMapSeedClassBuildings( g_TerrainTypeTable2 + 7, (ObjectClass *)(&v66.MapSeed_field_0x10), (int)a4, (int)RandomMap_field_0x10); /*0x5927af*/
        v37 = a3[1] - 2; /*0x5927c0*/
        IDA_LOWORD(v66.MapSeed_field_0x08) = *a3 - 3; /*0x5927c4*/
        v38 = this->RandomMap_field_0x10; /*0x5927c9*/
        IDA_HIWORD(v66.MapSeed_field_0x08) = v37; /*0x5927cc*/
        v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927d5*/
        PlaceMapSeedClassBuildings( g_TerrainTypeTable2 + 8, (ObjectClass *)(&v66.MapSeed_field_0x10), (int)a4, (int)v38); /*0x5927e7*/
        v39 = a3[1] - 1; /*0x5927f6*/
        IDA_LOWORD(v66.MapSeed_field_0x08) = *a3 - 1; /*0x5927f8*/
        v40 = this->RandomMap_field_0x10; /*0x5927fd*/
        IDA_HIWORD(v66.MapSeed_field_0x08) = v39; /*0x592800*/
        v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x592809*/
        PlaceMapSeedClassBuildings( g_TerrainTypeTable2 + 9, (ObjectClass *)(&v66.MapSeed_field_0x10), (int)a4, (int)v40); /*0x59281b*/
        MapSeed_field_0x14 = v66.MapSeed_field_0x14; /*0x592820*/
        v42 = 0; /*0x592824*/
        v66.MapSeed_field_0x1C = 0; /*0x592828*/
        if ( v66.MapSeed_field_0x14 ) /*0x592832*/
        {
          do /*0x59285c*/
          {
            v70 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x592842*/
            IDA_LOWORD(v43) = Math::RoundToInt((double)v70 * 4.656612874161595e-10); /*0x592854*/
          }
          while ( v43 > 1 ); /*0x59285c*/
          v44 = MapSeed_field_0x14 > 0; /*0x592862*/
          v66.MapSeed_field_0x08 = v44; /*0x59286f*/
          v67 = v44; /*0x592873*/
          if ( v43 == 1 ) /*0x59287d*/
          {
            IDA_LOWORD(v66.MapSeed_field_0x1C) = MapSeed_field_0x14; /*0x592884*/
            IDA_HIWORD(v66.MapSeed_field_0x1C) = (unsigned short)v76; /*0x592889*/
          }
          else
          {
            IDA_HIWORD(v67) = a3[1] - (unsigned short)v76 - a2[1] - 5; /*0x5928a0*/
          }
          *(unsigned int *)v66.__pad_0 = 0; /*0x5928a9*/
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
                v49 = *(unsigned short *)v66.__pad_0; /*0x5928da*/
                if ( v48 ) /*0x5928de*/
                  v49 = v66.MapSeed_field_0x04; /*0x5928e0*/
                v50 = *a2; /*0x5928e4*/
                IDA_LOWORD(v66.MapSeed_field_0x14) = -v45; /*0x5928eb*/
                v51 = a2[1] + 3; /*0x5928f4*/
                v68 = v50; /*0x5928f8*/
                v69 = v51; /*0x5928fd*/
                IDA_LOWORD(v70) = v50 - v45; /*0x592910*/
                IDA_WORD1(v70) = *(unsigned short *)v66.__pad_0 + v51; /*0x59291f*/
                IDA_LOWORD(v66.MapSeed_field_0x0C) = v67 + v50 - v45; /*0x59292e*/
                IDA_HIWORD(v66.MapSeed_field_0x0C) = *(unsigned short *)v66.__pad_0 + v51 + IDA_HIWORD(v67); /*0x592939*/
                IDA_LOWORD(v66.MapSeed_field_0x10) = v49 + IDA_LOWORD(v66.MapSeed_field_0x0C); /*0x592948*/
                IDA_HIWORD(v66.MapSeed_field_0x10) = IDA_HIWORD(v66.MapSeed_field_0x0C); /*0x59294d*/
                v66.MapSeed_field_0x18 = v66.MapSeed_field_0x10; /*0x59295c*/
                v52 = (unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)&v66.MapSeed_field_0x18)); /*0x592960*/
                v53 = *(unsigned char *)v46++; /*0x592969*/
                v47 += 4; /*0x59296e*/
                v52[283] = IDA_LOBYTE(this->RandomMap_field_0x10) + v53 - 4; /*0x592977*/
                v54 = *(unsigned char *)(v47 - 4); /*0x59297d*/
                v52[284] = v54; /*0x592980*/
                v55 = g_CellTileLookup; /*0x592986*/
                ++v45; /*0x592992*/
                v52[282] = 0; /*0x592999*/
                *((unsigned int *)v52 + 14) = v54 + v55 - 1; /*0x5929a4*/
                if ( (int)v46 >= (int)((char *)&stru_82ADA8 + 56) ) /*0x5929a7*/
                  break; /*0x5929a7*/
                v44 = v66.MapSeed_field_0x08; /*0x5928d4*/
              }
              v56 = ++*(unsigned int *)v66.__pad_0 < (int)v76; /*0x5929bb*/
              --v66.MapSeed_field_0x04; /*0x5929c1*/
              if ( !v56 ) /*0x5929c5*/
                break; /*0x5929c5*/
              v44 = v66.MapSeed_field_0x08; /*0x5928bb*/
            }
            v30 = (__int16 *)(a3); /*0x5929cb*/
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
                *(unsigned int *)(80 * ((__int16)(IDA_LOWORD(v66.MapSeed_field_0x1C) + v59 - v42) + g_MapCellWidth * v61) /*0x592a73*/
                          + g_MissionQueueFrame.localVariables[163]
                          + 56) = a4;
              v62 = (unsigned char *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)((__int16 *)&v66.MapSeed_field_0x14)); /*0x592a81*/
              v63 = (char)this->RandomMap_field_0x10; /*0x592a8a*/
              v62[284] = 1; /*0x592a8d*/
              v64 = v63 - v42++ - 1; /*0x592a96*/
              v62[283] = v64; /*0x592a99*/
              *((unsigned int *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
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
    return (ObjectClass * *)result; /*0x5924b6*/
}
}
// 0x5958E0
namespace gamemd {
CampaignClass * * CleanupRandomMapData()
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
          *(unsigned int *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x59590c*/
          *(unsigned int *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x595916*/
        }
        while ( v2 ); /*0x59591a*/
      }
    }
    for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x595927*/
    {
      v5 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x59592f*/
      if ( v5 ) /*0x595934*/
      {
        TileNode::Cleanup( (void *)(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * i))); /*0x595938*/
        RA2_OPDEL(v5); /*0x59593e*/
      }
    }
    g_MissionQueueFrame.localVariables[164] = 0; /*0x59594e*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x595957*/
    {
      RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x59595a*/
      g_MissionQueueFrame.localVariables[163] = 0; /*0x595962*/
    }
    v6 = *(void (****)(unsigned int, int))&this->__pad_4C[300]; /*0x595968*/
    if ( v6 ) /*0x595970*/
    {
      (**v6)(v6, 1); /*0x595976*/
      *(unsigned int *)&this->__pad_4C[300] = 0; /*0x595978*/
    }
    v7 = *(void **)&this->__pad_4C[304]; /*0x59597e*/
    if ( v7 ) /*0x595986*/
    {
      ComPtr::Dtor(*(ComPtr **)&this->__pad_4C[304]); /*0x59598a*/
      RA2_OPDEL(v7); /*0x595990*/
      *(unsigned int *)&this->__pad_4C[304] = 0; /*0x595998*/
    }
    *((unsigned int *)this + 184) = (unsigned int)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5959a4*/
    DynamicVectorClass::Destroy( (HWND)((_VectorClass_PBVBuildingTypeClass *)((char *)this + 736))); /*0x5959aa*/
    *((unsigned int *)this + 177) = (unsigned int)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5959b5*/
    DynamicVectorClass::Destroy( (HWND)((_VectorClass_PBVBuildingTypeClass *)((char *)this + 708))); /*0x5959bb*/
    *((unsigned int *)this + 168) = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5959cb*/
    ((VectorClass *)(int)this + 672)->Destroy(); /*0x5959cd*/
    *((unsigned int *)this + 161) = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5959d8*/
    ((VectorClass *)(int)this + 644)->Destroy(); /*0x5959da*/
    v8 = (void *)*((unsigned int *)this + 155); /*0x5959df*/
    *((unsigned int *)this + 154) = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5959e5*/
    if ( v8 && *((unsigned char *)this + 629) ) /*0x5959ef*/
    {
      RA2_OPDEL(v8); /*0x5959f8*/
      *((unsigned int *)this + 155) = 0; /*0x595a00*/
    }
    *((unsigned char *)this + 629) = 0; /*0x595a06*/
    *((unsigned int *)this + 156) = 0; /*0x595a0c*/
    v9 = (void *)*((unsigned int *)this + 148); /*0x595a12*/
    *((unsigned int *)this + 147) = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595a18*/
    if ( v9 && *((unsigned char *)this + 601) ) /*0x595a22*/
    {
      RA2_OPDEL(v9); /*0x595a2b*/
      *((unsigned int *)this + 148) = 0; /*0x595a33*/
    }
    *((unsigned char *)this + 601) = 0; /*0x595a39*/
    *((unsigned int *)this + 149) = 0; /*0x595a3f*/
    v10 = (void *)*((unsigned int *)this + 141); /*0x595a45*/
    *((unsigned int *)this + 140) = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595a4b*/
    if ( v10 && *((unsigned char *)this + 573) ) /*0x595a55*/
    {
      RA2_OPDEL(v10); /*0x595a5e*/
      *((unsigned int *)this + 141) = 0; /*0x595a66*/
    }
    *((unsigned char *)this + 573) = 0; /*0x595a6c*/
    *((unsigned int *)this + 142) = 0; /*0x595a72*/
    v11 = (void *)*((unsigned int *)this + 134); /*0x595a78*/
    *((unsigned int *)this + 133) = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595a7e*/
    if ( v11 && *((unsigned char *)this + 545) ) /*0x595a88*/
    {
      RA2_OPDEL(v11); /*0x595a91*/
      *((unsigned int *)this + 134) = 0; /*0x595a99*/
    }
    *((unsigned char *)this + 545) = 0; /*0x595a9f*/
    *((unsigned int *)this + 135) = 0; /*0x595aa5*/
    v12 = *(void **)&this->__pad_4C[432]; /*0x595aab*/
    *(unsigned int *)&this->__pad_4C[428] = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595ab1*/
    if ( v12 && this->__pad_4C[441] ) /*0x595abb*/
    {
      RA2_OPDEL(v12); /*0x595ac4*/
      *(unsigned int *)&this->__pad_4C[432] = 0; /*0x595acc*/
    }
    this->__pad_4C[441] = 0; /*0x595ad2*/
    *(unsigned int *)&this->__pad_4C[436] = 0; /*0x595ad8*/
    v13 = *(void **)&this->__pad_4C[404]; /*0x595ade*/
    *(unsigned int *)&this->__pad_4C[400] = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595ae4*/
    if ( v13 && this->__pad_4C[413] ) /*0x595aee*/
    {
      RA2_OPDEL(v13); /*0x595af7*/
      *(unsigned int *)&this->__pad_4C[404] = 0; /*0x595aff*/
    }
    this->__pad_4C[413] = 0; /*0x595b05*/
    *(unsigned int *)&this->__pad_4C[408] = 0; /*0x595b0b*/
    v14 = *(void **)&this->__pad_4C[376]; /*0x595b11*/
    *(unsigned int *)&this->__pad_4C[372] = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595b17*/
    if ( v14 && this->__pad_4C[385] ) /*0x595b21*/
    {
      RA2_OPDEL(v14); /*0x595b2a*/
      *(unsigned int *)&this->__pad_4C[376] = 0; /*0x595b32*/
    }
    this->__pad_4C[385] = 0; /*0x595b38*/
    *(unsigned int *)&this->__pad_4C[380] = 0; /*0x595b3e*/
    v15 = *(void **)&this->__pad_4C[348]; /*0x595b44*/
    *(unsigned int *)&this->__pad_4C[344] = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595b4a*/
    if ( v15 && this->__pad_4C[357] ) /*0x595b54*/
    {
      RA2_OPDEL(v15); /*0x595b5d*/
      *(unsigned int *)&this->__pad_4C[348] = 0; /*0x595b65*/
    }
    this->__pad_4C[357] = 0; /*0x595b6b*/
    *(unsigned int *)&this->__pad_4C[352] = 0; /*0x595b71*/
    v16 = *(void **)&this->__pad_4C[320]; /*0x595b77*/
    *(unsigned int *)&this->__pad_4C[316] = (unsigned int)(void*)&VectorClass_int_vftable; /*0x595b7d*/
    if ( v16 && this->__pad_4C[329] ) /*0x595b87*/
    {
      RA2_OPDEL(v16); /*0x595b90*/
      *(unsigned int *)&this->__pad_4C[320] = 0; /*0x595b98*/
    }
    this->__pad_4C[329] = 0; /*0x595ba0*/
    *(unsigned int *)&this->__pad_4C[324] = 0; /*0x595ba6*/
    ((LoadOptions *)this)->Cleanup(); /*0x595bac*/
}
}
// 0x596E50
namespace gamemd {
int SetupDialog(HWND hDlg)
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

    SettingsClass::ClampValues((SettingsClass *)this); /*0x596e59*/
    for ( i = GetDlgItem(hDlg, 1002); SendMessageA( (HWND)(i), 0x146u, 0, 0) > 0; SendMessageA( (HWND)(i), 0x144u, 0, 0) ) /*0x596e76*/
      ; /*0x596e90*/
    v3 = 0; /*0x596ea2*/
    p_LoopStart = &stru_82ADA8.LoopStart; /*0x596ea4*/
    do /*0x596edb*/
    {
      StringCSF = GetStringCSF( (wchar_t *)*p_LoopStart, 0, (const char *)(&stru_82BA00.?[11]), 4883); /*0x596eb7*/
      v6 = SendMessageA( (HWND)(i), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)StringCSF))); /*0x596ec5*/
      SendMessageA( (HWND)(i), 0x151u, v6, (LPARAM)((LPARAM)(v3))); /*0x596ecf*/
      ++p_LoopStart; /*0x596ed1*/
      ++v3; /*0x596ed4*/
    }
    while ( (int)p_LoopStart < (int)&stru_82ADA8.Next ); /*0x596edb*/
    v7 = GetStringCSF( /*0x596ef7*/
           *((wchar_t **)&stru_82ADA8.LoopStart + (int)this->RandomMap_field_0x48),
           0,
           &stru_82BA00.?[11],
           4887);
    v8 = SendMessageA( (HWND)(i), 0x4BEu, 0, (LPARAM)((LPARAM)((LPARAM)v7))); /*0x596f05*/
    SendMessageA( (HWND)(i), 0x14Eu, v8, 0); /*0x596f10*/
    for ( j = GetDlgItem(hDlg, 1030); SendMessageA( (HWND)(j), 0x146u, 0, 0) > 0; SendMessageA( (HWND)(j), 0x144u, 0, 0) ) /*0x596f24*/
      ; /*0x596f3e*/
    v10 = 0; /*0x596f50*/
    p_Next = (wchar_t **)&stru_82ADA8.Next; /*0x596f52*/
    do /*0x596f89*/
    {
      v12 = GetStringCSF( *p_Next, 0, (const char *)(&stru_82BA00.?[11]), 4898); /*0x596f65*/
      v13 = SendMessageA( (HWND)(j), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v12))); /*0x596f73*/
      SendMessageA( (HWND)(j), 0x151u, v13, (LPARAM)((LPARAM)(v10))); /*0x596f7d*/
      ++p_Next; /*0x596f7f*/
      ++v10; /*0x596f82*/
    }
    while ( (int)p_Next < (int)&stru_82ADA8.TranslucencyDetailLevel ); /*0x596f89*/
    v14 = GetStringCSF(*((wchar_t **)&stru_82ADA8.Next + *(unsigned int *)&this->__pad_4C[24]), 0, ((char *)&stru_82BA00 + 100), 4902); /*0x596fa5*/
    v15 = SendMessageA( (HWND)(j), 0x4BEu, 0, (LPARAM)((LPARAM)((LPARAM)v14))); /*0x596fb3*/
    SendMessageA( (HWND)(j), 0x14Eu, v15, 0); /*0x596fbe*/
    for ( k = GetDlgItem(hDlg, 1029); SendMessageA( (HWND)(k), 0x146u, 0, 0) > 0; SendMessageA( (HWND)(k), 0x144u, 0, 0) ) /*0x596fd2*/
      ; /*0x596fec*/
    v17 = 1; /*0x596ffe*/
    v18 = (wchar_t **)&stru_82ADA8.?[19]; /*0x597003*/
    do /*0x59703a*/
    {
      v19 = GetStringCSF( *v18, 0, (const char *)(&stru_82BA00.?[11]), 4914); /*0x597016*/
      v20 = SendMessageA( (HWND)(k), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v19))); /*0x597024*/
      SendMessageA( (HWND)(k), 0x151u, v20, (LPARAM)((LPARAM)(v17))); /*0x59702e*/
      ++v18; /*0x597030*/
      ++v17; /*0x597033*/
    }
    while ( (int)v18 < (int)stru_82ADA8.__pad_2A0 ); /*0x59703a*/
    v21 = GetStringCSF((wchar_t *)stru_82ADA8.?[this->RandomMap_field_0x3C[0] + 18], 0, ((char *)&stru_82BA00 + 60), 4918); /*0x597056*/
    v22 = SendMessageA( (HWND)(k), 0x4BEu, 0, (LPARAM)((LPARAM)((LPARAM)v21))); /*0x597064*/
    SendMessageA( (HWND)(k), 0x14Eu, v22, 0); /*0x59706f*/
    for ( m = GetDlgItem(hDlg, 1031); SendMessageA( (HWND)(m), 0x146u, 0, 0) > 0; SendMessageA( (HWND)(m), 0x144u, 0, 0) ) /*0x597083*/
      ; /*0x59709d*/
    v24 = 0; /*0x5970af*/
    v25 = (wchar_t *)"Name:Temperate"; /*0x5970b1*/
    do /*0x5970e8*/
    {
      v26 = GetStringCSF( (wchar_t *)(v25), 0, (const char *)(&stru_82BA00.?[11]), 4930); /*0x5970c4*/
      v27 = SendMessageA( (HWND)(m), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v26))); /*0x5970d2*/
      SendMessageA( (HWND)(m), 0x151u, v27, (LPARAM)((LPARAM)(v24))); /*0x5970dc*/
      v25 += 56; /*0x5970de*/
      ++v24; /*0x5970e1*/
    }
    while ( (int)v25 < (int)"Name:Urban" ); /*0x5970e8*/
    v28 = this; /*0x5970ea*/
    v29 = GetStringCSF( (wchar_t *)&aNameTemperate[56 * this->RandomMap_field_0x38[0]], 0, (const char *)(&stru_82BA00.?[11]), 4934); /*0x59710f*/
    v30 = SendMessageA( (HWND)(m), 0x4BEu, 0, (LPARAM)((LPARAM)((LPARAM)v29))); /*0x59711d*/
    SendMessageA( (HWND)(m), 0x14Eu, v30, 0); /*0x597128*/
    for ( n = GetDlgItem(hDlg, 1032); SendMessageA( (HWND)(n), 0x146u, 0, 0) > 0; SendMessageA( (HWND)(n), 0x144u, 0, 0) ) /*0x59713c*/
      ; /*0x597156*/
    lParama = 0; /*0x597168*/
    pad_2A0 = stru_82ADA8.__pad_2A0; /*0x597170*/
    do /*0x5971b3*/
    {
      v33 = GetStringCSF( *(wchar_t **)pad_2A0, 0, (const char *)(&stru_82BA00.?[11]), 4945); /*0x597183*/
      v34 = SendMessageA( (HWND)(n), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v33))); /*0x597191*/
      SendMessageA( (HWND)(n), 0x151u, v34, (LPARAM)((LPARAM)(lParama))); /*0x59719f*/
      pad_2A0 += 4; /*0x5971a5*/
      ++lParama; /*0x5971af*/
    }
    while ( (int)pad_2A0 < (int)&stru_82ADA8.Rate ); /*0x5971b3*/
    v35 = GetStringCSF( *(wchar_t **)&stru_82ADA8.__pad_2A0[4 * v28->RandomMap_field_0x40[0]], 0, (const char *)(&stru_82BA00.?[11]), 4949); /*0x5971cb*/
    v36 = SendMessageA( (HWND)(n), 0x4BEu, 0, (LPARAM)((LPARAM)((LPARAM)v35))); /*0x5971d9*/
    SendMessageA( (HWND)(n), 0x14Eu, v36, 0); /*0x5971e4*/
    DlgItem = GetDlgItem(hDlg, 1019); /*0x5971f9*/
    sprintf((char *const)&g_MissionQueueFrame.localVariables[135], "%d", *(unsigned int *)&v28->__pad_4C[40]); /*0x597206*/
    SendMessageA( (HWND)(DlgItem), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)&g_MissionQueueFrame.localVariables[135]))); /*0x59721b*/
    v38 = GetDlgItem(hDlg, 1003); /*0x597223*/
    v39 = *(unsigned int *)&v28->__pad_4C[4]; /*0x597229*/
    v40 = v38; /*0x597231*/
    SendMessageA( (HWND)(v38), 0x406u, 1u, 524290); /*0x59723b*/
    result = SendMessageA( (HWND)(v40), 0x405u, 1u, (LPARAM)((LPARAM)(v39))); /*0x597246*/
    *(unsigned int *)&v28->__pad_4C[4] = v39; /*0x597249*/
    return result; /*0x597248*/
}
}
// 0x597D60
namespace gamemd {
AbstractClass * * LoadInfo(wchar_t * Destination, int a2)
{
    char *v2; // edi
    INIClass v4; // [esp+Ch] [ebp-1ACh] BYREF
    CCFileClass v5; // [esp+4Ch] [ebp-16Ch] BYREF
    int v6[3]; // [esp+A4h] [ebp-114h] BYREF
    int v7; // [esp+B0h] [ebp-108h]
    wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

    if ( !this ) /*0x597d74*/
      return 0; /*0x597d74*/
    if ( !a2 ) /*0x597d83*/
      return 0; /*0x597d83*/
    v2 = (char *)(a2 + 44); /*0x597d89*/
    if ( !_strcmpi((char *)(a2 + 44), &stru_82BA00.?) || !_strcmpi(v2, &stru_82BA00.?[17]) ) /*0x597da8*/
      return 0; /*0x597db2*/
    ((CCFileClass *)&v5)->Construct( (char *)(v2)); /*0x597dbd*/
    v4.headNode[0] = 0; /*0x597dc6*/
    v4.headNode[1] = 0; /*0x597dca*/
    ((GenericNode *)v4.sectionHead)->Constructor(); /*0x597dce*/
    ((GenericNode *)&v4.sectionCount)->Constructor(); /*0x597dd7*/
    ((LinkedList *)v4.sectionHead)->Prepend( (void *)((int)&v4.sectionCount)); /*0x597ded*/
    v4.headNode[2] = (int)(void*)&List_INIClass_INISection___vftable; /*0x597dfc*/
    memset( (void *)(&v4.__pad_20[8]), 0, 13); /*0x597e04*/
    v4.unknown38 = 0; /*0x597e14*/
    v4.INIClass_field_3C = 0; /*0x597e18*/
    *(unsigned int *)v4.__pad_0 = (unsigned int)(void*)&INIClass_vftable; /*0x597e1c*/
    if ( !((FileStraw *)&v4)->Open( (int)&v5, 0) ) /*0x597e2b*/
    {
      ((HashTable *)&v4)->DestroyHashTableINIClass(); /*0x597f38*/
      *(unsigned int *)v5.CDFileClass = (unsigned int)(void*)&CCFileClass_vftable; /*0x597f44*/
      v7 = 0; /*0x597f4c*/
      Vector::Clear((int)v6); /*0x597f53*/
      *(unsigned int *)v5.CDFileClass = (unsigned int)&off_7E1668;
      ((BufferIOFileClass *)&v5)->Dtor(); /*0x597f64*/
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
      *(unsigned short *)this->__pad_0 = 0; /*0x597e7f*/
      *((unsigned char *)this + 437) = 1; /*0x597e82*/
      *((unsigned char *)this + 436) = 0; /*0x597e89*/
    }
    else
    {
      wcsncpy( (wchar_t *)this, (const wchar_t *)(Source), 0x80u); /*0x597e68*/
      *((unsigned char *)this + 437) = 0; /*0x597e70*/
      *((unsigned char *)this + 436) = 1; /*0x597e76*/
    }
    *((unsigned int *)this + 72) = 0; /*0x597e9a*/
    *((unsigned int *)this + 73) = 0; /*0x597ea0*/
    strncpy( (char *)this + 256, (const char *)(v2), 0x20u); /*0x597ea6*/
    if ( !strlen((const char *)this + 256) ) /*0x597ead*/
      strncpy((char *)this + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
    *((unsigned int *)this + 108) = *(unsigned int *)(a2 + 24); /*0x597ee5*/
    *((unsigned int *)this + 107) = *(unsigned int *)(a2 + 20); /*0x597eee*/
    ((HashTable *)&v4)->DestroyHashTableINIClass(); /*0x597ef4*/
    *(unsigned int *)v5.CDFileClass = (unsigned int)(void*)&CCFileClass_vftable; /*0x597f00*/
    v7 = 0; /*0x597f08*/
    Vector::Clear((int)v6); /*0x597f0f*/
    *(unsigned int *)v5.CDFileClass = (unsigned int)&off_7E1668;
    ((BufferIOFileClass *)&v5)->Dtor(); /*0x597f20*/
    return 1; /*0x597f26*/
}
}
// 0x5981F0
namespace gamemd {
WeaponStruct * * LoadConfig()
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

    ((CCFileClass *)&v29)->Construct( (char *)&stru_82BA00.?[1]); /*0x598205*/
    v2 = (INIClass *)RA2_OPNEW(0x58u); /*0x59820c*/
    v3 = v2; /*0x598211*/
    if ( v2 ) /*0x598218*/
    {
      INIClass::INIClass(v2); /*0x59821c*/
      v3[1].__pad_0[0] = 0; /*0x598221*/
      *(unsigned int *)v3->__pad_0 = (unsigned int)&CCINIClass_Vtable; /*0x598225*/
    }
    else
    {
      v3 = (INIClass *)(0); /*0x59822d*/
    }
    INIClass::ResetSection(v3); /*0x598231*/
    ((CCINIClass *)v3)->Load( (int)&v29, 0, 0); /*0x598241*/
    (*(void (**)(char *))(*(unsigned int *)&this->__pad_4C[316] + 12))( (char *)(&this->__pad_4C[316])); /*0x598254*/
    (*(void (**)(char *))(*((unsigned int *)this + 161) + 12))((char *)this + 644); /*0x598265*/
    (*(void (**)(char *))(*((unsigned int *)this + 168) + 12))((char *)this + 672); /*0x598274*/
    v4 = *((unsigned int *)this + 177); /*0x598277*/
    *(unsigned int *)v27.__pad_20 = (unsigned int)(char *)this + 708; /*0x598283*/
    (*(void (**)(void))(v4 + 12))(); /*0x598287*/
    v5 = *((unsigned int *)this + 184); /*0x59828a*/
    v27.DynamicVector_field_0x1C = (AbstractClass *)((char *)this + 736); /*0x598296*/
    (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
    (*(void (**)(char *))(*(unsigned int *)&this->__pad_4C[344] + 12))( (char *)(&this->__pad_4C[344])); /*0x5982a9*/
    (*(void (**)(char *))(*(unsigned int *)&this->__pad_4C[372] + 12))( (char *)(&this->__pad_4C[372])); /*0x5982b8*/
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5982d0*/
                      (bool *)v3->__pad_0,
                      off_82B134,
                      (unsigned __int8 *)&stru_82BA00.?,
                      *((unsigned int *)this + 175));
    v7 = *((unsigned int *)this + 176); /*0x5982d5*/
    *((unsigned int *)this + 175) = Int_Overwrite; /*0x5982db*/
    *((unsigned int *)this + 176) = INIClass::ReadInt_Overwrite( /*0x5982f7*/
                                (bool *)v3->__pad_0,
                                off_82B134,
                                (unsigned __int8 *)&stru_82BA00.?[1],
                                v7);
    IntList = &v24; /*0x598300*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)(&this->__pad_4C[316])); /*0x598304*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x598316*/
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
    *(unsigned int *)&this->__pad_4C[332] = IntList->Count; /*0x59833e*/
    *(unsigned int *)&this->__pad_4C[336] = v8->CapacityIncrement; /*0x598344*/
    *(unsigned int *)&this->__pad_4C[340] = *(unsigned int *)v8[1].VectorClass; /*0x59834a*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x598356*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x59835a*/
    IntList = &v24; /*0x598364*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)this + 161); /*0x598369*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x59837b*/
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
    *((unsigned int *)this + 165) = IntList->Count; /*0x5983a3*/
    *((unsigned int *)this + 166) = v9->CapacityIncrement; /*0x5983a9*/
    *((unsigned int *)this + 167) = *(unsigned int *)v9[1].VectorClass; /*0x5983b3*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5983b6*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x5983ba*/
    IntList = &v24; /*0x5983cb*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)this + 168); /*0x5983cf*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x5983e1*/
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
    TypeList::Copy((TypeList *)this + 24, IntList); /*0x5983fd*/
    v10 = IntList; /*0x598402*/
    *((unsigned int *)this + 172) = IntList->Count; /*0x598409*/
    *((unsigned int *)this + 173) = v10->CapacityIncrement; /*0x59840f*/
    *((unsigned int *)this + 174) = *(unsigned int *)v10[1].VectorClass; /*0x598419*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x59841c*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x598420*/
    IntList = &v24; /*0x598431*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)(&this->__pad_4C[344])); /*0x598435*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x598447*/
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
    *(unsigned int *)&this->__pad_4C[360] = IntList->Count; /*0x59846f*/
    *(unsigned int *)&this->__pad_4C[364] = v11->CapacityIncrement; /*0x598475*/
    *(unsigned int *)&this->__pad_4C[368] = *(unsigned int *)v11[1].VectorClass; /*0x59847b*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x59847e*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x598486*/
    IntList = &v24; /*0x598497*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)(&this->__pad_4C[372])); /*0x59849b*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x5984ad*/
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
    *(unsigned int *)&this->__pad_4C[388] = IntList->Count; /*0x5984d5*/
    *(unsigned int *)&this->__pad_4C[392] = v12->CapacityIncrement; /*0x5984db*/
    *(unsigned int *)&this->__pad_4C[396] = *(unsigned int *)v12[1].VectorClass; /*0x5984e5*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5984e8*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x5984ec*/
    IntList = &v24; /*0x5984fd*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)(&this->__pad_4C[400])); /*0x598501*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x598513*/
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
    *(unsigned int *)&this->__pad_4C[416] = IntList->Count; /*0x59853b*/
    *(unsigned int *)&this->__pad_4C[420] = v13->CapacityIncrement; /*0x598541*/
    *(unsigned int *)&this->__pad_4C[424] = *(unsigned int *)v13[1].VectorClass; /*0x59854b*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x59854e*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x598552*/
    IntList = &v24; /*0x598563*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)(&this->__pad_4C[428])); /*0x598567*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x598579*/
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
    *(unsigned int *)&this->__pad_4C[444] = IntList->Count; /*0x5985a1*/
    this->RandomMap_field_0x20C = (void *)v14->CapacityIncrement; /*0x5985a7*/
    *((unsigned int *)this + 132) = *(unsigned int *)v14[1].VectorClass; /*0x5985b1*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5985b4*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x5985b8*/
    IntList = &v24; /*0x5985c9*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)this + 133); /*0x5985cd*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x5985df*/
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
    TypeList::Copy((TypeList *)this + 19, IntList); /*0x5985fb*/
    v15 = IntList; /*0x598600*/
    *((unsigned int *)this + 137) = IntList->Count; /*0x598607*/
    *((unsigned int *)this + 138) = v15->CapacityIncrement; /*0x59860d*/
    *((unsigned int *)this + 139) = *(unsigned int *)v15[1].VectorClass; /*0x598617*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x59861a*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x59861e*/
    IntList = &v24; /*0x59862f*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)this + 140); /*0x598633*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x598645*/
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
    TypeList::Copy((TypeList *)this + 20, IntList); /*0x598661*/
    v16 = IntList; /*0x598666*/
    *((unsigned int *)this + 144) = IntList->Count; /*0x59866d*/
    *((unsigned int *)this + 145) = v16->CapacityIncrement; /*0x598673*/
    *((unsigned int *)this + 146) = *(unsigned int *)v16[1].VectorClass; /*0x59867d*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x598680*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x598684*/
    IntList = &v24; /*0x598695*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)this + 147); /*0x598699*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x5986ab*/
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
    TypeList::Copy((TypeList *)this + 21, IntList); /*0x5986c7*/
    v17 = IntList; /*0x5986cc*/
    *((unsigned int *)this + 151) = IntList->Count; /*0x5986d3*/
    *((unsigned int *)this + 152) = v17->CapacityIncrement; /*0x5986d9*/
    *((unsigned int *)this + 153) = *(unsigned int *)v17[1].VectorClass; /*0x5986df*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x5986e8*/
    if ( *(unsigned int *)&v27.DynamicVector_field_0x1[3] && v27.__pad_C[1] ) /*0x5986f4*/
      RA2_OPDEL(*(void **)&v27.DynamicVector_field_0x1[3]); /*0x5986f7*/
    IntList = &v24; /*0x59870b*/
    ((DynamicVectorClass *)&v24)->Copy( (unsigned int *)this + 154); /*0x59870f*/
    *(unsigned int *)IntList->VectorClass = (unsigned int)(void*)&TypeList_int_vftable; /*0x598721*/
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
    TypeList::Copy((TypeList *)this + 22, IntList); /*0x59873d*/
    v18 = IntList; /*0x598742*/
    *((unsigned int *)this + 158) = IntList->Count; /*0x598749*/
    *((unsigned int *)this + 159) = v18->CapacityIncrement; /*0x59874f*/
    *((unsigned int *)this + 160) = *(unsigned int *)v18[1].VectorClass; /*0x598759*/
    *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x59875c*/
    ((VectorClass *)(int)&v27)->Destroy(); /*0x598760*/
    *((unsigned int *)this + 191) = INIClass::ReadInt_Overwrite( /*0x59877f*/
                                (bool *)v3->__pad_0,
                                off_82B134,
                                (unsigned __int8 *)&stru_82BA00.?[16],
                                *((unsigned int *)this + 191));
    if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?, &g_INI_DefaultBuffer, String, 128) ) /*0x5987a5*/
    {
      TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x5987b7*/
      for ( i = strtok(String, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x5987d3*/
      {
        if ( !*i ) /*0x5987d5*/
          break; /*0x5987d8*/
        IntList = (DynamicVectorClass *)((BuildingTypeClass *)i)->FindOrCreate(); /*0x5987e3*/
        if ( IntList ) /*0x5987e7*/
          ((DynamicVector *)&v27)->Add_Alt3( (VectorClass_flat *)(&IntList)); /*0x5987f2*/
      }
      TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x598813*/
      *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x59881c*/
      DynamicVectorClass::Destroy( (HWND)((_VectorClass_PBVBuildingTypeClass *)&v27)); /*0x598820*/
      v20 = *(unsigned int *)v27.__pad_20; /*0x598825*/
    }
    else
    {
      v20 = *(unsigned int *)v27.__pad_20; /*0x59882b*/
      TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], *(unsigned int **)v27.__pad_20); /*0x598834*/
    }
    DynamicVector::Copy( (VectorClass_flat *)((DynamicVector *)v20), (void *)(&v27.__pad_20[4])); /*0x598840*/
    *(unsigned int *)(v20 + 24) = v28; /*0x59884d*/
    *(unsigned int *)&v27.__pad_20[4] = (unsigned int)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x598850*/
    DynamicVectorClass::Destroy( (HWND)((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4])); /*0x598854*/
    if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?[15], &g_INI_DefaultBuffer, String, 128) ) /*0x598879*/
    {
      TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x598886*/
      for ( j = strtok(String, (char *)&::Delimiter); j; j = strtok(0, (char *)&::Delimiter) ) /*0x5988a2*/
      {
        if ( !*j ) /*0x5988a4*/
          break; /*0x5988a7*/
        IntList = (DynamicVectorClass *)((BuildingTypeClass *)j)->FindOrCreate(); /*0x5988b2*/
        if ( IntList ) /*0x5988b6*/
          ((DynamicVector *)&v27)->Add_Alt3( (VectorClass_flat *)(&IntList)); /*0x5988c1*/
      }
      TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x5988e2*/
      *(unsigned int *)v27.__pad_0 = (unsigned int)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5988eb*/
      DynamicVectorClass::Destroy( (HWND)((_VectorClass_PBVBuildingTypeClass *)&v27)); /*0x5988ef*/
      DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988f4*/
    }
    else
    {
      DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988fa*/
      TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27.DynamicVector_field_0x1C->vtable0); /*0x598903*/
    }
    DynamicVector::Copy( (VectorClass_flat *)((DynamicVector *)DynamicVector_field_0x1C), (void *)(&v27.__pad_20[4])); /*0x59890f*/
    *(unsigned int *)&v27.__pad_20[4] = (unsigned int)(void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x598918*/
    DynamicVector_field_0x1C->nextArrayIndex = v28; /*0x59891c*/
    DynamicVectorClass::Destroy( (HWND)((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4])); /*0x598923*/
    if ( v3 ) /*0x59892a*/
      (**(void (***)(INIClass *, int))v3->__pad_0)(v3, 1); /*0x598932*/
    CCFileClass::Reset( &v29); /*0x598938*/
    return (WeaponStruct * *)((CCFileClass *)&v29)->Destruct(); /*0x598946*/
}
}
// 0x598960
namespace gamemd {
AbstractClass * * Generate(char a2, HWND hDlg)
{
    ObjectClass *v3; // edi
    HWND DlgItem; // eax
    int v6; // eax
    RandomMap *v7; // ecx
    int v8; // eax
    int i; // esi
    int j; // edi
    int v11; // esi
    int v12; // eax
    bool v13; // al
    int v14; // eax
    int k; // eax
    int v16; // ecx
    int v17; // eax
    int m; // edi
    _VectorClass_VCell *v19; // esi
    int v20; // eax
    void *v21; // eax
    int n; // eax
    void (__stdcall *)(HWND, UINT, WPARAM, LPARAM); // esi
    int ii; // eax
    ObjectClass *v25; // edi
    int jj; // eax
    unsigned int *v27; // eax
    int kk; // eax
    int mm; // edi
    _VectorClass_VCell *v30; // esi
    int v31; // eax
    HWND v32; // eax
    ObjectClass *v33; // [esp-2h] [ebp-428h]
    ObjectClass *v34; // [esp-2h] [ebp-428h]
    ObjectClass *v35; // [esp-2h] [ebp-428h]
    BuildingClass *v36; // [esp-2h] [ebp-428h]
    RadarClass *v37; // [esp-2h] [ebp-428h]
    bool v38; // [esp+11h] [ebp-415h]
    _VectorClass_VCell *v39; // [esp+12h] [ebp-414h] BYREF
    ObjectClass *v40; // [esp+16h] [ebp-410h]
    unsigned int v41[6]; // [esp+1Ah] [ebp-40Ch] BYREF
    ObjectClass v42[5]; // [esp+32h] [ebp-3F4h] BYREF

    v40 = (ObjectClass *)this; /*0x598973*/
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 116) ) /*0x598977*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 116))(); /*0x598979*/
    v33 = v3; /*0x59897f*/
    qmemcpy( (void *)(&g_MissionQueueFrame.globalVariables[1552]), SeedInitRNG(v42, *(unsigned int *)&this->__pad_4C[40]), 0x3F4u); /*0x59899b*/
    IDA_LOBYTE(v41[0]) = 0; /*0x5989ab*/
    v41[2] = 0; /*0x5989af*/
    v41[3] = 0; /*0x5989b7*/
    v41[4] = sub_598000; /*0x5989bf*/
    qmemcpy( (void *)(&g_MissionQueueFrame.briefing[348]), (const void *)(v41), 0x18u); /*0x5989c9*/
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 13720) ) /*0x5989cb*/
      (*(void (__stdcall **)())((char *)&stru_82ADA8 + 13720))(); /*0x5989cd*/
    v38 = IDA_LOBYTE(dword_A8B230[381].vtable1) == 0; /*0x5989e7*/
    if ( !IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x5989dc*/
    {
      ((ProgressAnim *)((int)&stru_AC4B30.__pad_EC[828]))->Init( 0, 1079574528, 1, (int)hDlg); /*0x5989fb*/
      SHPClass::Load((int)&stru_AC4B30.__pad_EC[828], (char *)&stru_82BA00.?[2], 0, 0); /*0x598a0c*/
      ((TextRenderer *)(int *)&stru_AC4B30.__pad_EC[828])->MeasureBuilding( -1, -1, 0, 0, 1); /*0x598a22*/
      LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], 0, (int)this, NAN); /*0x598a34*/
      DlgItem = GetDlgItem(hDlg, 1592); /*0x598a3f*/
      if ( DlgItem ) /*0x598a47*/
        ShowWindow(DlgItem, 5); /*0x598a4c*/
    }
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598a59*/
      (*(void (__cdecl **)())&stru_82ADA8.?[31])(); /*0x598a5b*/
    Debug::Log("RMG: Init random map\n"); /*0x598a62 G57w11: IDA push seq @ 0x598a62*/
    ((RandomMap *)this)->SetupTheater( a2); /*0x598a74*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598a80*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598a82*/
    ++dword_A8E7AC; /*0x598a9a*/
    if ( a2 ) /*0x598aa0*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x598aa8*/
      SendMessageA( (HWND)(hDlg), 0xFu, 0, 0); /*0x598ab2*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x598ac4*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x598acc*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 60) ) /*0x598ad8*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 60))(); /*0x598ada*/
    ((RandomMap *)this)->LoadConfig(); /*0x598ade*/
    Debug::Log("RMG: Seeding water\n"); /*0x598ae8 G57w11: IDA push seq @ 0x598ae8*/
    v6 = this->RandomMap_field_0x3C[0]; /*0x598aed*/
    if ( v6 == 3 || v6 == 4 ) /*0x598afb*/
    {
      if ( *(unsigned int *)this->__pad_4C ) /*0x598b06*/
        ((RandomMap *)this)->GrowTiberium(); /*0x598b0d*/
    }
    else
    {
      ((RandomMap *)this)->FinalizeMapData(); /*0x598aff*/
    }
    FindMapCell(); /*0x598b14*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x598b1e*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 154); /*0x598b30*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 55.0, NAN); /*0x598b4b*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598b57*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598b59*/
    if ( a2 ) /*0x598b62*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x598b6a*/
      SendMessageA( (HWND)(hDlg), 0xFu, 0, 0); /*0x598b74*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x598b86*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x598b8e*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 13720) ) /*0x598b9a*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 13720))(); /*0x598b9c*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x598ba4*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 159); /*0x598bb6*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 60.0, NAN); /*0x598bd1*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598bdd*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598bdf*/
    if ( a2 ) /*0x598be8*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x598bf0*/
      SendMessageA( (HWND)(hDlg), 0xFu, 0, 0); /*0x598bfa*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x598c0c*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x598c14*/
    }
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598c20*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598c22*/
    Debug::Log("RMG: Init regions\n"); /*0x598c29 G57w11: IDA push seq @ 0x598c29*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x598c38*/
    {
      v7 = (RandomMap *)(g_MapCellWidth * g_MapCellWidth); /*0x598c40*/
      if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x598c45*/
      {
        v8 = 0; /*0x598c47*/
        do /*0x598c64*/
        {
          *(unsigned int *)(v8 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x598c52*/
          *(unsigned int *)(v8 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x598c5c*/
          v8 += 80; /*0x598c60*/
          v7 = (RandomMap *)((char *)v7 - 1); /*0x598c63*/
        }
        while ( v7 ); /*0x598c64*/
      }
    }
    for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x598c71*/
    {
      v7 = *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x598c78*/
      if ( v7 ) /*0x598c7d*/
        RandomMap::Constructor_VectorClass_Cell_( (unsigned int *)(v7), 1); /*0x598c81*/
    }
    g_MissionQueueFrame.localVariables[164] = 0; /*0x598c89*/
    ((RandomMap *)v7)->GenerateTerrainForAllCells(); /*0x598c8f*/
    for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x598c9d*/
    {
      v11 = *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x598caa*/
      if ( *(unsigned char *)(v11 + 20) ) /*0x598cad*/
      {
        v12 = v40->ambientSoundController[0]; /*0x598cb6*/
        v13 = v12 == 3 || v12 == 4; /*0x598cc7*/
        RandomMap::CollectTerrainCells( /*0x598ce4*/
          *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * j),
          (*(unsigned int *)(v11 + 12) > 8000) + !v13 + 4);
        ((RandomMap *)v11)->PlaceRandomMapTerrain(); /*0x598ceb*/
      }
    }
    Map_Helper_58D010(0); /*0x598cfc*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x598d07*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 164); /*0x598d19*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 65.0, NAN); /*0x598d34*/
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 60) ) /*0x598d40*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 60))(); /*0x598d42*/
    Debug::Log("RMG: Making regions\n"); /*0x598d49 G57w11: IDA push seq @ 0x598d49*/
    v14 = v40->ambientSoundController[0]; /*0x598d55*/
    if ( v14 == 4 || v14 == 3 ) /*0x598d60*/
    {
      BuildRandomMapTiles(v33); /*0x598d62*/
      ResetMapState(v34); /*0x598d67*/
      ProcessRandomMapCellAdjacency(); /*0x598d6e*/
      CreateMapObject(0, -1); /*0x598d7b*/
      MapClass::FindPassableNeighbor(); /*0x598d82*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x598d8d*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 169); /*0x598d9f*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 70.0, NAN); /*0x598dba*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598dc6*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598dc8*/
    if ( a2 ) /*0x598dd1*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x598dd9*/
      SendMessageA( (HWND)(hDlg), 0xFu, 0, 0); /*0x598dea*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x598e00*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x598e08*/
    }
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598e14*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598e16*/
    ((RandomMap *)v33)->PlaceShoreObjects(); /*0x598e1a*/
    Debug::Log("RMG: Recalculating cell attributes\n"); /*0x598e24 G57w11: IDA push seq @ 0x598e24*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x598e31*/
    for ( k = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x598e42*/
          k;
          k = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      ((House *)k)->AnnounceUpgrade( -1); /*0x598e48*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 13720) ) /*0x598e62*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 13720))(); /*0x598e64*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x598e6c*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 174); /*0x598e7e*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 75.0, NAN); /*0x598e99*/
    Debug::Log("RMG: Creating starting points\n"); /*0x598ea3 G57w11: IDA push seq @ 0x598ea3*/
    do /*0x598ebd*/
    {
      while ( !DistributeRandomMapTerrain(v35) ) /*0x598eb2*/
        ; /*0x598eab*/
    }
    while ( !SpreadMapSeedTerrainFromWaypoints(v40) ); /*0x598ebd*/
    Debug::Log("RMG: Adding tech buildings\n"); /*0x598ec4 G57w11: IDA push seq @ 0x598ec4*/
    if ( v40->ambientSoundController[0] ) /*0x598ec9*/
      PlaceRandomAIBuildings(v40); /*0x598ed5*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598ee1*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598ee3*/
    Debug::Log("RMG: Creating tiberium\n"); /*0x598eea G57w11: IDA push seq @ 0x598eea*/
    ((RandomMap *)v40)->PlaceRandomMapTiberium(); /*0x598ef4*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x598f00*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x598f02*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x598f0a*/
    {
      v16 = g_MapCellWidth * g_MapCellWidth; /*0x598f12*/
      if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x598f17*/
      {
        v17 = 0; /*0x598f19*/
        do /*0x598f36*/
        {
          *(unsigned int *)(v17 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x598f24*/
          *(unsigned int *)(v17 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x598f2e*/
          v17 += 80; /*0x598f32*/
          --v16; /*0x598f35*/
        }
        while ( v16 ); /*0x598f36*/
      }
    }
    for ( m = g_MissionQueueFrame.briefing[342] - 1; m >= 0; --m ) /*0x598f48*/
    {
      v19 = *(_VectorClass_VCell **)(g_MissionQueueFrame.briefing[339] + 4 * m); /*0x598f4f*/
      if ( v19 ) /*0x598f54*/
      {
        if ( *(unsigned int *)v19->__pad_0 ) /*0x598f56*/
        {
          (***(void (****)(unsigned int, int))v19->__pad_0)(*(unsigned int *)v19->__pad_0, 1); /*0x598f60*/
          *(unsigned int *)v19->__pad_0 = 0; /*0x598f62*/
        }
        v39 = v19; /*0x598f74*/
v20 = (*(int (**)(int *, _VectorClass_VCell **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x598f78*/ &g_MissionQueueFrame.briefing[338], (_VectorClass_VCell **)(&v39));


        if ( v20 != -1 ) /*0x598f7e*/
          Vector4::EraseAt((Vector4 *)&g_MissionQueueFrame.briefing[338], v20); /*0x598f86*/
        v21 = *(void **)&v19[2].m_1[3]; /*0x598f8b*/
        *(unsigned int *)v19[2].__pad_0 = (unsigned int)(void*)&VectorClass_Cell_vftable; /*0x598f8e*/
        if ( v21 && IDA_BYTE1(v19[2].m_C) ) /*0x598f95*/
        {
          RA2_OPDEL(v21); /*0x598f9b*/
          *(unsigned int *)&v19[2].m_1[3] = 0; /*0x598fa3*/
        }
        IDA_BYTE1(v19[2].m_C) = 0; /*0x598fa7*/
        v19[2].m_8 = 0; /*0x598faa*/
        RA2_OPDEL(v19); /*0x598fad*/
      }
    }
    g_MissionQueueFrame.localVariables[164] = 0; /*0x598fbd*/
    Debug::Log("RMG: Recalculating cell attributes\n"); /*0x598fc3 G57w11: IDA push seq @ 0x598fc3*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x598fd0*/
    for ( n = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x598fe1*/
          n;
          n = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      ((House *)n)->AnnounceUpgrade( -1); /*0x598fe7*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x598fff*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 179); /*0x599011*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 80.0, NAN); /*0x59902c*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599038*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x59903a*/
    if ( a2 ) /*0x599043*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x59904b*/
      v23 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599057*/
      SendMessageA( (HWND)(hDlg), 0xFu, 0, 0); /*0x599062*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x599079*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x599081*/
    }
    else
    {
      v23 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599088*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 13720) ) /*0x59909a*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 13720))(); /*0x59909c*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x5990a4*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 184); /*0x5990b6*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 85.0, NAN); /*0x5990d1*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x5990dd*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x5990df*/
    if ( a2 ) /*0x5990e8*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x5990f0*/
      v23(hDlg, 0xFu, 0, 0); /*0x599101*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x599112*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x59911a*/
    }
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599126*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x599128*/
    Debug::Log("RMG: Recalculating cell attributes\n"); /*0x59912f G57w11: IDA push seq @ 0x59912f*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59913c*/
    for ( ii = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59914d*/
          ii;
          ii = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      ((House *)ii)->AnnounceUpgrade( -1); /*0x599153*/
    }
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x59916d*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x59916f*/
    Debug::Log("RMG: Creating hills\n"); /*0x599176 G57w11: IDA push seq @ 0x599176*/
    v25 = v40; /*0x59917b*/
    GenerateTerrainHeightMap(v40); /*0x599184*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59918f*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 189); /*0x5991a1*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 90.0, NAN); /*0x5991bc*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x5991c8*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x5991ca*/
    if ( a2 ) /*0x5991d3*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x5991db*/
      v23(hDlg, 0xFu, 0, 0); /*0x5991ec*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5991fd*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x599205*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 56) ) /*0x599211*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 56))(); /*0x599213*/
    Debug::Log("RMG: Creating LATs, rocks etc\n"); /*0x59921a G57w11: IDA push seq @ 0x59921a*/
    if ( v25->attachedBomb ) /*0x59921f*/
    {
      ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59923e*/
      for ( jj = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59924f*/
            jj;
            jj = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
      {
        v39 = *(_VectorClass_VCell **)(jj + 36); /*0x59925a*/
        v27 = (unsigned int *)(g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v39 + g_MapCellWidth * IDA_SHIWORD(v39))); /*0x59927b*/
        v27[10] = 1202590843; /*0x599283*/
        v27[11] = 1064598241; /*0x599286*/
        v27[8] = -755914244; /*0x599295*/
        v27[9] = 1062232653; /*0x599298*/
      }
      ((RandomMap *)v25)->GenerateRandomMapTerrain(); /*0x5992ab*/
    }
    else
    {
      CellClass::Reset((CellClass *)v25); /*0x59922b*/
      ((RandomMap *)v25)->PlaceResources(); /*0x599232*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 13720) ) /*0x5992b7*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 13720))(); /*0x5992b9*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x5992c1*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 194); /*0x5992d3*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 95.0, NAN); /*0x5992ee*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x5992fa*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x5992fc*/
    if ( a2 ) /*0x599305*/
    {
      MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x59930d*/
      v23(hDlg, 0xFu, 0, 0); /*0x59931e*/
      if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x59932f*/
        MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x599337*/
    }
    --dword_A8E7AC; /*0x59934a*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599350*/
      (*(void (__stdcall **)())&stru_82ADA8.?[31])(); /*0x599352*/
    Debug::Log("RMG: Recalculating cell attributes\n"); /*0x599359 G57w11: IDA push seq @ 0x599359*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x599366*/
    for ( kk = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x599377*/
          kk;
          kk = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      ((House *)kk)->AnnounceUpgrade( -1); /*0x59937d*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 772) ) /*0x599397*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 772))(); /*0x599399*/
    BuildingClass::ClearOccupancyData((BuildingClass *)v35); /*0x59939b*/
    BuildingClass::ClearFactoryData(v36); /*0x5993a0*/
    Debug::Log("RMG: Cleanup\n"); /*0x5993aa G57w11: IDA push seq @ 0x5993aa*/
    v25[4].customSound_controller[1] = 0; /*0x5993af*/
    v25[4].customSound_controller[2] = 0; /*0x5993b5*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x5993c5*/
    {
      RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x5993c8*/
      g_MissionQueueFrame.localVariables[163] = 0; /*0x5993d0*/
    }
    for ( mm = g_MissionQueueFrame.briefing[342] - 1; mm >= 0; --mm ) /*0x5993e1*/
    {
      v30 = *(_VectorClass_VCell **)(g_MissionQueueFrame.briefing[339] + 4 * mm); /*0x5993e9*/
      if ( v30 ) /*0x5993ee*/
      {
        if ( *(unsigned int *)v30->__pad_0 ) /*0x5993f0*/
        {
          (***(void (****)(unsigned int, int))v30->__pad_0)(*(unsigned int *)v30->__pad_0, 1); /*0x5993fa*/
          *(unsigned int *)v30->__pad_0 = 0; /*0x5993fc*/
        }
        v39 = v30; /*0x59940e*/
v31 = (*(int (**)(int *, _VectorClass_VCell **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x599412*/ &g_MissionQueueFrame.briefing[338], (_VectorClass_VCell **)(&v39));


        if ( v31 != -1 ) /*0x599418*/
          Vector4::EraseAt((Vector4 *)&g_MissionQueueFrame.briefing[338], v31); /*0x599420*/
        *(unsigned int *)v30[2].__pad_0 = (unsigned int)(void*)&VectorClass_Cell_vftable; /*0x599428*/
        Buffer::Cleanup(v30 + 2); /*0x59942e*/
        RA2_OPDEL(v30); /*0x599434*/
      }
    }
    g_MissionQueueFrame.localVariables[164] = 0; /*0x599446*/
    ((MapClass *)&stru_87F5F0.__pad_58[416])->PostProcessReveal( 1); /*0x59944c*/
    Debug::Log("RMG: Compute Radar Image\n"); /*0x599456 G57w11: IDA push seq @ 0x599456*/
    ((Shroud *)(RadarClass *)&stru_87F5F0.__pad_58[416])->ProcessCellVisibility( (MouseClass *)((int *)&stru_87F5F0.__pad_58[668])); /*0x599468*/
    RadarClass::RecreateSurface(v37, 0); /*0x599472*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59947e*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 199); /*0x599490*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 100.0, NAN); /*0x5994ab*/
    Debug::Log("RMG: Done\n"); /*0x5994b5 G57w11: IDA push seq @ 0x5994b5*/
    if ( v38 ) /*0x5994c3*/
    {
      v32 = GetDlgItem(hDlg, 1592); /*0x5994d2*/
      if ( v32 ) /*0x5994da*/
        ShowWindow(v32, 0); /*0x5994de*/
      if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x5994ea*/
        ((Multiplayer *)&dword_A8B238)->ShowProgress( 99); /*0x5994f9*/
      else
        Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 0.0, NAN); /*0x599510*/
      VtableStub::643E70(&stru_AC4B30.__pad_EC[828]); /*0x59951a*/
    }
}
}
// 0x599650
namespace gamemd {
AbstractClass * * SetupTheater(char a2)
{
    int v3; // eax
    double v4; // st7
    double v5; // st7
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // ecx
    double v10; // rdi
    double v11; // st7
    int *Waypoint_Location; // eax
    __int16 *v13; // eax
    unsigned int *v14; // eax
    RadarClass *WorldCoords; // eax
    RandomMap *v16; // esi
    ObjectClass *v17; // eax
    unsigned int *v18; // eax
    unsigned int *v19; // eax
    int v20; // ecx
    int uniqueId; // edi
    void (__stdcall *)(); // eax
    int v23; // esi
    int v24; // eax
    int v25; // edi
    int v26; // eax
    int v27; // esi
    int v28; // eax
    Tactical *v29; // eax
    IPersistStream *v30; // eax
    int i; // eax
    int v32; // ecx
    int j; // eax
    int v34; // ecx
    int k; // eax
    int v36; // ecx
    int m; // eax
    int v38; // ecx
    int n; // eax
    int *v40; // eax
    __int16 *v41; // eax
    unsigned int *v42; // eax
    RadarClass *v43; // eax
    int v44; // esi
    RandomMap *v45; // edi
    void (__stdcall *)(); // eax
    int v47; // esi
    int *v48; // eax
    int v49; // eax
    int v50; // ecx
    RandomMap *v51; // edi
    int v52; // esi
    int v53; // eax
    int v54; // esi
    int v55; // ecx
    int v56; // edx
    int ii; // eax
    unsigned int *v58; // esi
    int v59; // eax
    void *v60; // eax
    void *v61; // eax
    void *v62; // eax
    int v63; // eax
    int v64; // eax
    wchar_t *StringCSF; // eax
    ObjectClass *v67; // [esp+18h] [ebp-B0h]
    bool v68; // [esp+27h] [ebp-A1h]
    float v69; // [esp+28h] [ebp-A0h]
    int v70; // [esp+28h] [ebp-A0h]
    int v71; // [esp+28h] [ebp-A0h]
    int jj; // [esp+28h] [ebp-A0h]
    int v73; // [esp+2Ch] [ebp-9Ch] BYREF
    double v74[2]; // [esp+30h] [ebp-98h] BYREF
    RandomMap *v75; // [esp+40h] [ebp-88h]
    int v76[2]; // [esp+44h] [ebp-84h] BYREF
    int v77; // [esp+4Ch] [ebp-7Ch]
    int v78; // [esp+50h] [ebp-78h]
    unsigned int v79[4]; // [esp+54h] [ebp-74h] BYREF
    INIClass v80; // [esp+64h] [ebp-64h] BYREF
    char v81; // [esp+A4h] [ebp-24h]
    unsigned int v82[3]; // [esp+BCh] [ebp-Ch] BYREF

    v75 = this; /*0x599661*/
    *(float *)&v73 = (double)*(int *)&this->__pad_4C[24] * 0.33333334; /*0x599674*/
    v69 = (double)*(int *)&this->__pad_4C[28] * 0.33333334; /*0x599681*/
    ((RandomMap *)this)->LoadConfig(); /*0x599685*/
    v3 = this->RandomMap_field_0x3C[0]; /*0x59968a*/
    if ( v3 == 3 || v3 == 4 ) /*0x599695*/
    {
      v5 = v69; /*0x5996d7*/
    }
    else
    {
      if ( *(float *)&v73 >= 1.2 ) /*0x5996a6*/
        v4 = 1.2; /*0x5996ae*/
      else
        v4 = *(float *)&v73; /*0x5996a8*/
      *(float *)&v73 = v4; /*0x5996b4*/
      if ( v69 >= 1.2 ) /*0x5996c7*/
        v5 = 1.2; /*0x5996cf*/
      else
        v5 = v69; /*0x5996c9*/
    }
    IDA_LOWORD(v6) = Math::RoundToInt(v5); /*0x5996fb*/
    *(unsigned int *)&this->__pad_4C[308] = v6; /*0x599700*/
    IDA_LOWORD(v7) = Math::RoundToInt(v5); /*0x599722*/
    v77 = *(unsigned int *)&this->__pad_4C[308]; /*0x59972f*/
    v79[2] = v77 + 4; /*0x59973f*/
    *(unsigned int *)&this->__pad_4C[312] = v7; /*0x599748*/
    v79[0] = 0; /*0x59974e*/
    v79[1] = 0; /*0x599752*/
    v79[3] = v7 + 12; /*0x599756*/
    v76[0] = 2; /*0x59975a*/
    v76[1] = 5; /*0x599762*/
    v78 = v7; /*0x59976a*/
    *((unsigned int *)this + 195) = 4; /*0x59976e*/
    v80.headNode[0] = 0; /*0x599774*/
    v80.headNode[1] = 0; /*0x599778*/
    ((INISectionList *)(&v80.headNode[2]))->Constructor(); /*0x59977c*/
    Node::Init((Node *)&v80.__pad_20[8]); /*0x599785*/
    v80.INIClass_field_3C = 0; /*0x599790*/
    v81 = 0; /*0x599797*/
    *(unsigned int *)v80.__pad_0 = (unsigned int)&CCINIClass_Vtable; /*0x59979e*/
    INIClass::ClearSection((int *)v80.__pad_0, 0, 0); /*0x5997a6*/
    v8 = this->RandomMap_field_0x38[0]; /*0x5997ab*/
    *((unsigned int *)this + 195) = 4; /*0x5997ae*/
    ((INIClass *)v80.__pad_0)->SetString( (unsigned __int8 *)(&off_81FFF0), (char *)(g_INI_Key_Theater), (char *)(&Theater_Array[112 * v8])); /*0x5997d5*/
    INIClass::SetRect(v80.__pad_0, &off_81FFF0, (char *)g_Str_EVA_CannotDeployHere.Type, v79); /*0x5997ed*/
    INIClass::SetRect(v80.__pad_0, &off_81FFF0, &g_Str_EVA_CannotDeployHere.RussianVoice[3], v76); /*0x599805*/
    INIClass::SetInt(v80.__pad_0, &off_81FFF0, (char *)&stru_81AF8C.?[17], *((unsigned int *)this + 195), 0); /*0x599820*/
    INIClass::SetString( /*0x59983f*/
      v80.__pad_0,
      (unsigned __int8 *)(*(unsigned int *)dword_A83C9C + 36),
      g_INI_Key_TechLevel,
      (char *)&stru_82BA00.?);
    INIClass::SetString( /*0x59985e*/
      v80.__pad_0,
      (unsigned __int8 *)&stru_82BA00.?,
      (char *)&stru_82BA00.?,
      (char *)(*(unsigned int *)dword_A83C9C + 36));
    if ( this->RandomMap_field_0x38[0] ) /*0x599863*/
      v9 = *(unsigned int *)&this->__pad_4C[376]; /*0x599875*/
    else
      v9 = *(unsigned int *)&this->__pad_4C[348]; /*0x59986d*/
    v74[0] = (double)*(int *)(v9 + 4 * (int)this->RandomMap_field_0x48) * 0.01; /*0x599890*/
    v10 = v74[0]; /*0x599898*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, v74[0]); /*0x5998a8*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 1.0); /*0x5998c1*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 1.0); /*0x5998da*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 1.0); /*0x5998f3*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)(g_INI_Key_Ground), 0.0); /*0x599908*/
    IDA_LODWORD(v74[0]) = *(unsigned int *)(*(unsigned int *)&v75->__pad_4C[320] + 4 * (int)v75->RandomMap_field_0x48) / 100; /*0x599935*/
    v11 = (double)IDA_SLODWORD(v74[0]); /*0x599939*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_81AF8C.?[17], v11); /*0x59994a*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, v10); /*0x59995f*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 0.3); /*0x59997c*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 0.4); /*0x599999*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 0.75); /*0x5999b2*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)&stru_82BA00.?, 0.0); /*0x5999c7*/
    ((INIClass *)v80.__pad_0)->SetDouble( (unsigned __int8 *)&stru_82BA00.?, (char *)((char * *)((char *)&stru_82BA00 + 13720)), 0.0); /*0x5999dc*/
    if ( !IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x5999e7*/
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 1.0, NAN); /*0x599a03*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599a0f*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x599a11*/
    BuildingClass::FreeUpgradeQueue(); /*0x599a13*/
    BuildingClass::FreeUpgradeQueue2(); /*0x599a18*/
    if ( !a2 ) /*0x599a20*/
    {
      ++dword_A8E7AC; /*0x599a38*/
      ((ScenarioClass *)(char *)dword_A8B230)->SetFileName( (char *)(&g_INI_DefaultBuffer)); /*0x599a3e*/
      if ( *(unsigned int *)((char *)&stru_A8EB00 + 619) ) /*0x599a49*/
        ResetScenario(); /*0x599a4b*/
      ScenarioClass::LoadMap(1, (bool *)v80.__pad_0, v11); /*0x599a56*/
      PostLoadInitScenario(v67); /*0x599a5b*/
      IDA_HIWORD(v70) = *(unsigned int *)&stru_87F5F0.__pad_58[664] / 2 + *(unsigned int *)&stru_87F5F0.__pad_58[660] / 2; /*0x599a7e*/
      IDA_LOWORD(v70) = IDA_HIWORD(v70) + 1; /*0x599a86*/
      ScenarioClass::Set_Waypoint((char *)dword_A8B230, 700, v70); /*0x599a95*/
      Waypoint_Location = ((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(v74), 700); /*0x599aaa*/
      ScenarioClass::Set_Waypoint((char *)dword_A8B230, dword_A8B230[14].abstractFlags, *Waypoint_Location); /*0x599abf*/
      v13 = (__int16 *)((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(v74), dword_A8B230[14].abstractFlags); /*0x599ad6*/
      v14 = (unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v13)); /*0x599ae1*/
      v14[80] |= 4u; /*0x599af4*/
      WorldCoords = (RadarClass *)((Cell *)dword_A8B230)->GetWorldCoords( (unsigned int *)(v74), dword_A8B230[14].abstractFlags); /*0x599b08*/
      TacticalClass::SetPositionThunk( (MouseClass *)(WorldCoords)); /*0x599b13*/
      goto LABEL_153; /*0x599b18*/
    }
    ScenarioClass::InitTimer( (ScenarioClass *)dword_A8B230); /*0x599b23*/
    v16 = v75; /*0x599b28*/
    if ( !*(unsigned int *)&v75->__pad_4C[304] ) /*0x599b2c*/
    {
      v17 = (ObjectClass *)RA2_OPNEW(4u); /*0x599b36*/
      if ( v17 ) /*0x599b40*/
        v18 = unknown_libname_27( (void *)(v17)); /*0x599b44*/
      else
        v18 = (unsigned int *)(0); /*0x599b4b*/
      *(unsigned int *)&v75->__pad_4C[304] = (unsigned int)v18; /*0x599b4d*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x599b59*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 101); /*0x599b68*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 2.0, NAN); /*0x599b83*/
    v19 = *(unsigned int **)&v16->__pad_4C[300]; /*0x599b8e*/
    v20 = v16->RandomMap_field_0x38[0]; /*0x599b94*/
    uniqueId = dword_A8B230[130].uniqueId; /*0x599b99*/
    IDA_LODWORD(v74[0]) = v20; /*0x599b9f*/
    v68 = 1; /*0x599ba3*/
    v71 = uniqueId; /*0x599ba8*/
    if ( v19 ) /*0x599bac*/
    {
      uniqueId = v19[14]; /*0x599bb1*/
      v71 = uniqueId; /*0x599bb7*/
      if ( v19[25] == *(unsigned int *)&v16->__pad_4C[24] && v19[26] == *(unsigned int *)&v16->__pad_4C[28] && uniqueId == v20 ) /*0x599bc7*/
        v68 = v19[20] != *(unsigned int *)&v16->__pad_4C[4]; /*0x599bd3*/
    }
    v22 = *(void (__stdcall **)())&stru_82ADA8.?[31]; /*0x599bd7*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599bde*/
    {
      (*(void (**)(void))( (char *)&stru_82ADA8 + 376))(); /*0x599be0*/
      v22 = *(void (__stdcall **)())((char *)&stru_82ADA8 + 376); /*0x599be2*/
      v20 = IDA_LODWORD(v74[0]); /*0x599be7*/
    }
    if ( !*(unsigned int *)&v16->__pad_4C[300] || v20 != uniqueId || v68 ) /*0x599bfb*/
    {
      v23 = dword_A8E978 - 1; /*0x599c07*/
      if ( dword_A8E978 - 1 >= 0 ) /*0x599c0c*/
      {
        do /*0x599c55*/
        {
          if ( (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)dword_A8E96C + v23) + 4) + 12))(*((unsigned int *)dword_A8E96C /*0x599c2d*/
                                                                                                   + v23) + 4) == 18
            && v23 < dword_A8E978 )
          {
            v24 = v23; /*0x599c30*/
            if ( v23 < --dword_A8E978 ) /*0x599c3a*/
            {
              do /*0x599c52*/
              {
                ++v24; /*0x599c42*/
                *((unsigned int *)dword_A8E96C + v24 - 1) = *((unsigned int *)dword_A8E96C + v24); /*0x599c46*/
              }
              while ( v24 < dword_A8E978 ); /*0x599c52*/
            }
          }
          --v23; /*0x599c54*/
        }
        while ( v23 >= 0 ); /*0x599c55*/
        v22 = *(void (__stdcall **)())&stru_82ADA8.?[31]; /*0x599c57*/
      }
      if ( v22 ) /*0x599c5e*/
        v22(); /*0x599c60*/
      Game::DestroyAllObjects(); /*0x599c62*/
      if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599c6e*/
        (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x599c70*/
      v25 = 0; /*0x599c77*/
      if ( *(int * *)((char *)&stru_A8EB00 + 568) > 0 ) /*0x599c7b*/
      {
        v26 = dword_A8E970; /*0x599c7d*/
        do /*0x599c88*/
        {
          v27 = *(unsigned int *)(*(unsigned int * *)((char *)&stru_A8EB00 + 556) + 4 * v25); /*0x599c88*/
          if ( dword_A8E978 < v26 ) /*0x599c93*/
            goto LABEL_57; /*0x599c93*/
          if ( !byte_A8E975 && v26 || dword_A8E97C <= 0 ) /*0x599ca9*/
            goto LABEL_59; /*0x599ca9*/
          if ( (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A8E968 + 8))( /*0x599cba*/
                 &dword_A8E968,
                 dword_A8E97C + v26,
                 0) )
          {
  LABEL_57:
            v28 = dword_A8E978++; /*0x599cc7*/
            *((unsigned int *)dword_A8E96C + v28) = v27; /*0x599cd6*/
          }
          v26 = dword_A8E970; /*0x599cd9*/
  LABEL_59:
          ++v25; /*0x599cde*/
        }
        while ( v25 < *(int *)&stru_A8EB00.?[340] ); /*0x599c88*/
      }
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x599cef*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 104); /*0x599cfe*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 5.0, NAN); /*0x599d19*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599d25*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x599d27*/
    if ( v68 ) /*0x599d2d*/
    {
      MouseClass::HandleClick((MouseClass *)&stru_87F5F0.__pad_58[416]); /*0x599d34*/
      ((CellClass *)(RadarClass *)&stru_87F5F0.__pad_58[416])->DrawWrapper( (unsigned int *)(v79), 1, 0, 1); /*0x599d48*/
      ((Shroud *)(RadarClass *)&stru_87F5F0.__pad_58[416])->ProcessCellVisibility( (MouseClass *)(v76)); /*0x599d57*/
      if ( g_TacticalClass_Instance ) /*0x599d64*/
        (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)&((TacticalMap *)g_TacticalClass_Instance)->q_80))(  /*0x599d6a*/
          g_TacticalClass_Instance,
          1);
      v29 = (Tactical *)RA2_OPNEW(0xE18u); /*0x599d72*/
      if ( v29 ) /*0x599d7c*/
        v30 = (IPersistStream *)TacticalMap::Construct(v29); /*0x599d80*/
      else
        v30 = (IPersistStream *)(0); /*0x599d87*/
      g_TacticalClass_Instance = (unsigned int)v30; /*0x599d8b*/
      Map_Setup_6DA980(); /*0x599d90*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x599d9a*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 109); /*0x599da9*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 10.0, NAN); /*0x599dc4*/
    for ( i = *(unsigned int *)((char *)&FootClass_Array + 891); *(unsigned int *)((char *)&FootClass_Array + 891) > 0; i = *(unsigned int *)((char *)&FootClass_Array + 891) ) /*0x599dd0*/
    {
      v32 = *(unsigned int *)(FootClass_Array.? + 4 * i - 4); /*0x599dd8*/
      if ( v32 ) /*0x599dde*/
        (*(void (**)(int, int))(*(unsigned int *)v32 + 32))(v32, 1); /*0x599de4*/
    }
    for ( j = *(unsigned int *)&stru_A83D50.__pad_80[40]; /*0x599df7*/
          *(int *)&stru_A83D50.__pad_80[40] > 0;
          j = *(unsigned int *)&stru_A83D50.__pad_80[40] )
    {
      v34 = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_80[28] + 4 * j - 4); /*0x599dff*/
      if ( v34 ) /*0x599e05*/
        (*(void (**)(int, int))(*(unsigned int *)v34 + 32))(v34, 1); /*0x599e0b*/
    }
    for ( k = stru_A8EB00.ObjectTypeClass[20]; stru_A8EB00.ObjectTypeClass[20] > 0; k = stru_A8EB00.ObjectTypeClass[20] ) /*0x599e1e*/
    {
      v36 = *(unsigned int *)(stru_A8EB00.ObjectTypeClass[17] + 4 * k - 4); /*0x599e26*/
      if ( v36 ) /*0x599e2c*/
        (*(void (**)(int, int))(*(unsigned int *)v36 + 32))(v36, 1); /*0x599e32*/
    }
    for ( m = dword_A8E998; dword_A8E998 > 0; m = dword_A8E998 ) /*0x599e45*/
    {
      v38 = *((unsigned int *)dword_A8E98C + m - 1); /*0x599e4d*/
      if ( v38 ) /*0x599e53*/
        (*(void (**)(int, int))(*(unsigned int *)v38 + 32))(v38, 1); /*0x599e59*/
    }
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599e6c*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x599e6e*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x599e75*/
    for ( n = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x599e86*/
          n;
          n = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      *(unsigned char *)(n + 284) = 0; /*0x599e8d*/
      *(unsigned char *)(n + 283) = 4; /*0x599e93*/
      *(unsigned int *)(n + 56) = 0; /*0x599e9a*/
      *(unsigned char *)(n + 282) = 0; /*0x599e9d*/
      *(unsigned int *)(n + 68) = -1; /*0x599ea3*/
      *(unsigned char *)(n + 286) = 0; /*0x599eaa*/
    }
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 13720) ) /*0x599ec0*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 13720))(); /*0x599ec2*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x599ec9*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 114); /*0x599ed8*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 15.0, NAN); /*0x599ef3*/
    ((MapClass *)&stru_87F5F0.__pad_58[416])->ProcessRegion(); /*0x599efd*/
    Terrain::ConnectivityGraph(  (Terrain *)&stru_87F5F0.__pad_58[416]); /*0x599f07*/
    ((MapClass *)&stru_87F5F0.__pad_58[416])->BuildSubzones(); /*0x599f11*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x599f1c*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 119); /*0x599f2b*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 20.0, NAN); /*0x599f46*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x599f52*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x599f54*/
    ScenarioClass::ClearAllWaypoints((char *)dword_A8B230); /*0x599f5c*/
    IDA_HIWORD(v73) = *(unsigned int *)&stru_87F5F0.__pad_58[664] / 2 + *(unsigned int *)&stru_87F5F0.__pad_58[660] / 2; /*0x599f7f*/
    IDA_LOWORD(v73) = IDA_HIWORD(v73) + 1; /*0x599f87*/
    ScenarioClass::Set_Waypoint((char *)dword_A8B230, 700, v73); /*0x599f96*/
    v40 = ((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(&v73), 700); /*0x599fab*/
    ScenarioClass::Set_Waypoint((char *)dword_A8B230, 699, *v40); /*0x599fbe*/
    v41 = (__int16 *)((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(&v73), 699); /*0x599fd3*/
    v42 = (unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v41)); /*0x599fde*/
    v42[80] |= 4u; /*0x599ffd*/
    v43 = (RadarClass *)((Cell *)dword_A8B230)->GetWorldCoords( (unsigned int *)(v82), 699); /*0x59a006*/
    TacticalClass::SetPositionThunk( (MouseClass *)(v43)); /*0x59a011*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59a01c*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 124); /*0x59a02b*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 25.0, NAN); /*0x59a046*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x59a052*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a054*/
    v44 = IDA_LODWORD(v74[0]); /*0x59a061*/
    ++dword_A8E7AC; /*0x59a066*/
    if ( IDA_LODWORD(v74[0]) != dword_A8B230[130].uniqueId ) /*0x59a074*/
    {
      LoadTheaterClassMIX(IDA_SLODWORD(v74[0])); /*0x59a078*/
      dword_A8B230[130].uniqueId = v44; /*0x59a083*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59a08f*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 129); /*0x59a0a1*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 30.0, NAN); /*0x59a0bc*/
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 376) ) /*0x59a0c8*/
      (*(void (**)(void))( (char *)&stru_82ADA8 + 376))(); /*0x59a0ca*/
    v45 = v75; /*0x59a0cc*/
    if ( !*(unsigned int *)&v75->__pad_4C[300] || v44 != v71 || v68 ) /*0x59a0e2*/
    {
      ResetRules(*(ObjectClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x59a0f0*/
      ScenarioClass::ReadGlobalVariables((char *)dword_A8B230, *(char **)&DSurface_ViewBounds.__pad_34[116]); /*0x59a102*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59a10d*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 134); /*0x59a11f*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 35.0, NAN); /*0x59a13a*/
    v46 = *(void (__stdcall **)())((char *)&stru_82ADA8 + 376); /*0x59a13f*/
    if ( *(unsigned int * *)((char *)&stru_82ADA8 + 376) ) /*0x59a146*/
    {
      (*(void (**)(void))( (char *)&stru_82ADA8 + 376))(); /*0x59a148*/
      v46 = *(void (__stdcall **)())((char *)&stru_82ADA8 + 376); /*0x59a14a*/
    }
    if ( !*(unsigned int *)&v45->__pad_4C[300] || v44 != v71 || v68 ) /*0x59a161*/
    {
      if ( !stru_A80220.? ) /*0x59a16d*/
      {
        v47 = 0; /*0x59a175*/
        if ( dword_A83CA8 > 0 ) /*0x59a179*/
        {
          do /*0x59a1b5*/
          {
            v48 = (int *)RA2_OPNEW(0x160B8u); /*0x59a180*/
            if ( v48 ) /*0x59a18a*/
              v49 = ((HouseClass *)v48)->Construct( *((unsigned int *)dword_A83C9C + v47)); /*0x59a198*/
            else
              v49 = 0; /*0x59a19f*/
            HouseClass::ReadFromINI(v49, v11, (unsigned __int8 ***)&v80); /*0x59a1a8*/
            ++v47; /*0x59a1b2*/
          }
          while ( v47 < dword_A83CA8 ); /*0x59a1b5*/
          v46 = *(void (__stdcall **)())((char *)&stru_82ADA8 + 4696); /*0x59a1b7*/
        }
      }
      if ( v46 ) /*0x59a1be*/
        v46(); /*0x59a1c0*/
      LoadObjectTypeClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x59a1ce*/
      v50 = dword_A8B230[130].uniqueId; /*0x59a1d8*/
      if ( v50 == dword_822CF8 ) /*0x59a1e5*/
        ResetAllTechnoField776(); /*0x59a1f0*/
      else
        LoadTerrainTypeClassTheatre(v50, 1); /*0x59a1e9*/
      LoadBuildingTypeClassSHPs(dword_A8B230[130].uniqueId); /*0x59a201*/
      if ( *(unsigned int * *)((char *)&stru_82ADA8 + 4696) ) /*0x59a20d*/
      {
        (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a20f*/
        if ( *(unsigned int * *)((char *)&stru_82ADA8 + 4696) ) /*0x59a218*/
        {
          (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a21a*/
          if ( *(unsigned int * *)((char *)&stru_82ADA8 + 4696) ) /*0x59a223*/
            (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a225*/
        }
      }
      ((BuildingTypeClass *)v67)->LoadRepairAnimations(); /*0x59a233*/
      if ( *(unsigned int * *)((char *)&stru_82ADA8 + 4696) ) /*0x59a23f*/
        (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a241*/
      LoadBuildingTypeClassTheatreSHP(dword_A8B230[130].uniqueId); /*0x59a24e*/
      if ( *(unsigned int * *)((char *)&stru_82ADA8 + 4696) ) /*0x59a25a*/
        (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a25c*/
      LoadFactoryClassTheaterSHP(dword_A8B230[130].uniqueId); /*0x59a26a*/
      if ( *(unsigned int * *)((char *)&stru_82ADA8 + 4696) ) /*0x59a276*/
        (*(void (**)(void))( (char *)&stru_82ADA8 + 4696))(); /*0x59a278*/
      LoadMapClassIsometricTiles(0, 1); /*0x59a27e*/
    }
    dword_822CF8 = dword_A8B230[130].uniqueId; /*0x59a28f*/
  LABEL_153:
    v51 = v75; /*0x59a294*/
    --dword_A8E7AC; /*0x59a2a4*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59a2a9*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 139); /*0x59a2bd*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 40.0, NAN); /*0x59a2d8*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x59a2e4*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x59a2e6*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x59a2ef*/
      RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x59a2f2*/
    v52 = g_MapCellWidth * g_MapCellWidth; /*0x59a300*/
    v53 = RA2_OPNEW(80 * g_MapCellWidth * g_MapCellWidth); /*0x59a30a*/
    if ( v53 ) /*0x59a314*/
    {
      v54 = v52 - 1; /*0x59a316*/
      if ( v54 >= 0 ) /*0x59a319*/
      {
        v55 = v53 + 8; /*0x59a31b*/
        v56 = v54 + 1; /*0x59a31e*/
        do /*0x59a376*/
        {
          *(unsigned short *)(v55 - 8) = 0; /*0x59a321*/
          *(unsigned short *)(v55 - 6) = 0; /*0x59a325*/
          *(unsigned int *)v55 = 0; /*0x59a329*/
          *(unsigned int *)(v55 + 8) = 0; /*0x59a32b*/
          *(unsigned int *)(v55 + 16) = 0; /*0x59a32e*/
          *(unsigned int *)(v55 + 24) = 0; /*0x59a331*/
          *(unsigned int *)(v55 + 32) = 0; /*0x59a334*/
          *(unsigned int *)(v55 + 40) = 0; /*0x59a337*/
          *(unsigned int *)(v55 + 4) = 0; /*0x59a33a*/
          *(unsigned int *)(v55 + 12) = 0; /*0x59a33d*/
          *(unsigned int *)(v55 + 20) = 0; /*0x59a340*/
          *(unsigned int *)(v55 + 28) = 0; /*0x59a343*/
          *(unsigned int *)(v55 + 36) = 0; /*0x59a346*/
          *(unsigned int *)(v55 + 44) = 0; /*0x59a349*/
          *(unsigned int *)(v55 + 48) = 0; /*0x59a34c*/
          *(unsigned int *)(v55 + 52) = 0; /*0x59a34f*/
          *(unsigned int *)(v55 + 56) = -1; /*0x59a352*/
          *(unsigned char *)(v55 + 60) = 0; /*0x59a359*/
          *(unsigned char *)(v55 + 61) = 0; /*0x59a35c*/
          *(unsigned char *)(v55 + 62) = 0; /*0x59a35f*/
          *(unsigned char *)(v55 + 63) = 0; /*0x59a362*/
          *(unsigned char *)(v55 + 64) = 0; /*0x59a365*/
          *(unsigned char *)(v55 + 65) = 0; /*0x59a368*/
          *(unsigned char *)(v55 + 66) = 1; /*0x59a36b*/
          *(unsigned char *)(v55 + 67) = 0; /*0x59a36f*/
          v55 += 80; /*0x59a372*/
          --v56; /*0x59a375*/
        }
        while ( v56 ); /*0x59a376*/
      }
      g_MissionQueueFrame.localVariables[163] = v53; /*0x59a378*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x59a37f*/
    }
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59a38a*/
    for ( ii = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59a39b*/
          ii;
          ii = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      IDA_LODWORD(v74[0]) = *(unsigned int *)(ii + 36); /*0x59a3a0*/
      *(unsigned int *)(80 * (SLOWORD(v74[0]) + g_MapCellWidth * IDA_SWORD1(v74[0])) + g_MissionQueueFrame.localVariables[163]) = IDA_LODWORD(v74[0]); /*0x59a3c1*/
      *(unsigned char *)(ii + 283) = v51[1].__pad_4C[176]; /*0x59a3cf*/
    }
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59a3e3*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 144); /*0x59a3f5*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 45.0, NAN); /*0x59a410*/
    if ( *(unsigned int *)&stru_82ADA8.?[31] ) /*0x59a41c*/
      (*(void (**)(void))&stru_82ADA8.?[31])(); /*0x59a41e*/
    g_MissionQueueFrame.localVariables[164] = 0; /*0x59a426*/
    for ( jj = g_MissionQueueFrame.briefing[342] - 1; jj >= 0; --jj ) /*0x59a435*/
    {
      v58 = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * jj); /*0x59a441*/
      if ( v58 ) /*0x59a446*/
      {
        if ( *v58 ) /*0x59a448*/
        {
          (**(void (***)(unsigned int, int))*v58)(*v58, 1); /*0x59a452*/
          *v58 = 0; /*0x59a454*/
        }
        IDA_LODWORD(v74[0]) = v58; /*0x59a466*/
v59 = (*(int (**)(int *, double *))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59a46a*/ &g_MissionQueueFrame.briefing[338], (double *)(v74));


        if ( v59 != -1 ) /*0x59a470*/
          Vector4::EraseAt((Vector4 *)&g_MissionQueueFrame.briefing[338], v59); /*0x59a478*/
        v60 = (void *)v58[11]; /*0x59a47d*/
        v58[10] = (void*)&VectorClass_Cell_vftable; /*0x59a480*/
        if ( v60 && *((unsigned char *)v58 + 53) ) /*0x59a48b*/
        {
          RA2_OPDEL(v60); /*0x59a491*/
          v58[11] = 0; /*0x59a499*/
        }
        *((unsigned char *)v58 + 53) = 0; /*0x59a49d*/
        v58[12] = 0; /*0x59a4a0*/
        RA2_OPDEL(v58); /*0x59a4a3*/
      }
    }
    *(unsigned int *)&v51[1].__pad_4C[168] = 0; /*0x59a4bb*/
    *(unsigned int *)&v51[1].__pad_4C[172] = 0; /*0x59a4c1*/
    *(unsigned __int64 *)&v74[0] = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59a4cc*/
    v51[1].__pad_4C[180] = (double)*(__int64 *)&v74[0] * 2.328306437080797e-10 < 0.25; /*0x59a4fb*/
    TacticalClass::FreeResources( (TacticalClass *)&stru_87F5F0.__pad_58[416]); /*0x59a501*/
    ((Shroud *)(RadarClass *)&stru_87F5F0.__pad_58[416])->ProcessCellVisibility( (MouseClass *)(v76)); /*0x59a510*/
    ((RandomMap *)&stru_87F5F0.__pad_58[416])->PlaceTileSet(); /*0x59a51a*/
    RadarClass::RecreateSurface((RadarClass *)v67, 0); /*0x59a524*/
    if ( v51->RandomMap_field_0x38[0] ) /*0x59a529*/
      v61 = *(void **)(*(unsigned int *)&v51->__pad_4C[376] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a545*/
    else
      v61 = *(void **)(*(unsigned int *)&v51->__pad_4C[348] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a537*/
    dword_A8B230[378].vtable0 = v61; /*0x59a54e*/
    dword_A8B230[378].referenceCount = *(unsigned int *)(*(unsigned int *)&v51->__pad_4C[320] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a565*/
    if ( v51->RandomMap_field_0x38[0] ) /*0x59a56b*/
      v62 = *(void **)(v51[1].RandomMap_field_0x24[0] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a589*/
    else
      v62 = *(void **)(*(unsigned int *)&v51->__pad_4C[404] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a57b*/
    dword_A8B230[378].vtable3 = v62; /*0x59a592*/
    if ( v51->RandomMap_field_0x38[0] ) /*0x59a598*/
      v63 = *(unsigned int *)(v51[1].RandomMap_field_0x40[0] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a5b6*/
    else
      v63 = *(unsigned int *)(*(unsigned int *)&v51->__pad_4C[432] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a5a8*/
    dword_A8B230[378].uniqueId = v63; /*0x59a5bf*/
    if ( v51->RandomMap_field_0x38[0] ) /*0x59a5c5*/
      v64 = *(unsigned int *)(*(unsigned int *)&v51[1].__pad_4C[16] + 4 * (int)v51->RandomMap_field_0x48); /*0x59a5e3*/
    else
      v64 = *((unsigned int *)v51[1].RandomMap_field_0x8 + (int)v51->RandomMap_field_0x48); /*0x59a5d5*/
    dword_A8B230[378].abstractFlags = v64; /*0x59a5ec*/
    if ( IDA_LOBYTE(dword_A8B230[381].vtable1) ) /*0x59a5f8*/
      ((Multiplayer *)&dword_A8B238)->ShowProgress( 149); /*0x59a60a*/
    else
      Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 50.0, NAN); /*0x59a625*/
    if ( !wcslen((const wchar_t *)&v51->__pad_4C[44]) ) /*0x59a62e*/
    {
      StringCSF = GetStringCSF( (wchar_t *)stru_82BA00.?, 0, (const char *)(&stru_82BA00.?[11]), 6746); /*0x59a64b*/
      wcscpy( (wchar_t *)&v51->__pad_4C[44], (const wchar_t *)(StringCSF)); /*0x59a652*/
    }
    return ((HashTable *)&v80)->DestroyHashTableINIClass(); /*0x59a663*/
}
} // namespace gamemd

// 0x59A6C0
namespace gamemd {
int FinalizeMapData()
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
    unsigned int *v12; // esi
    int v13; // eax
    void *v14; // eax
    int result; // eax
    Cell *n; // ebp
    signed int ii; // esi
    Cell *v18; // edi
    unsigned int *v19; // [esp+10h] [ebp-4h] BYREF

    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59a6cc*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59a6dd*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      *(unsigned int *)(i + 56) = g_CellPassabilityLUT; /*0x59a6e5*/
    }
    v3 = this->RandomMap_field_0x3C[0]; /*0x59a6f6*/
    if ( v3 ) /*0x59a6fc*/
    {
      v4 = v3 - 1; /*0x59a6fe*/
      if ( v4 ) /*0x59a6ff*/
      {
        if ( v4 == 1 ) /*0x59a702*/
          ((RandomMap *)this)->PlaceTerrainFeatures(); /*0x59a706*/
      }
      else
      {
        ((RandomMap *)this)->FillTerrainProgressively(); /*0x59a70f*/
      }
    }
    else
    {
      ((RandomMap *)this)->ArrangeBuildingGrid(); /*0x59a718*/
    }
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59a722*/
    for ( j = (Cell *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59a735*/
          j;
          j = (Cell *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      if ( j->Cell_field_0x38 == g_CellPassabilityLUT ) /*0x59a741*/
      {
        v6 = 1; /*0x59a743*/
        for ( k = 0; k < 8; k += 2 ) /*0x59a745*/
        {
          NeighbourContent = (Cell *)((Cell *)j)->GetNeighbourContent( k); /*0x59a74a*/
          if ( !(unsigned __int8)((Cell *)NeighbourContent)->IsEmpty() ) /*0x59a751*/
            v6 = 0; /*0x59a75a*/
        }
        if ( v6 ) /*0x59a766*/
          j->Cell_field_0x38 = 0; /*0x59a768*/
      }
    }
    ((MapClass *)&stru_87F5F0.__pad_58[416])->InitTileData( 0, 0); /*0x59a788*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x59a794*/
    {
      v9 = g_MapCellWidth * g_MapCellWidth; /*0x59a79c*/
      if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59a7a1*/
      {
        v10 = 0; /*0x59a7a3*/
        do /*0x59a7c0*/
        {
          *(unsigned int *)(v10 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x59a7ae*/
          *(unsigned int *)(v10 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x59a7b8*/
          v10 += 80; /*0x59a7bc*/
          --v9; /*0x59a7bf*/
        }
        while ( v9 ); /*0x59a7c0*/
      }
    }
    for ( m = g_MissionQueueFrame.briefing[342] - 1; m >= 0; --m ) /*0x59a7cc*/
    {
      v12 = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * m); /*0x59a7df*/
      if ( v12 ) /*0x59a7e4*/
      {
        if ( *v12 ) /*0x59a7ea*/
        {
          (**(void (***)(unsigned int, int))*v12)(*v12, 1); /*0x59a7f4*/
          *v12 = 0; /*0x59a7f6*/
        }
        v19 = v12; /*0x59a808*/
v13 = (*(int (**)(int *, unsigned int **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59a80c*/ &g_MissionQueueFrame.briefing[338], (unsigned int **)(&v19));


        if ( v13 != -1 && v13 < g_MissionQueueFrame.briefing[342] ) /*0x59a81c*/
        {
          --g_MissionQueueFrame.briefing[342]; /*0x59a821*/
          for ( ; /*0x59a827*/
                v13 < g_MissionQueueFrame.briefing[342];
                *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) = *(unsigned int *)(g_MissionQueueFrame.briefing[339]
                                                                                         + 4 * v13) )
          {
            ++v13; /*0x59a82f*/
          }
        }
        v14 = (void *)v12[11]; /*0x59a841*/
        v12[10] = (void*)&VectorClass_Cell_vftable; /*0x59a844*/
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
    g_MissionQueueFrame.localVariables[164] = 0; /*0x59a87a*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59a884*/
    result = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59a88e*/
    for ( n = (Cell *)result; result; n = (Cell *)result ) /*0x59a897*/
    {
      if ( (unsigned __int8)CellClass::IsTerrainType( (CellClass *)n) ) /*0x59a89b*/
      {
        for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
        {
          v18 = (Cell *)((Cell *)n)->GetNeighbourContent( ii); /*0x59a8ae*/
          if ( (unsigned __int8)((Cell *)v18)->IsEmpty() ) /*0x59a8b2*/
            v18->Cell_field_0x38 = dword_AA0E18; /*0x59a8c0*/
        }
      }
      result = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59a8d0*/
    }
    return result; /*0x59a8db*/
}
}
// 0x59AD10
namespace gamemd {
void ArrangeBuildingGrid()
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
    int v12; // ebp
    int v13; // esi
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    unsigned int *v17; // esi
    unsigned int *v18; // edx
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

    *((unsigned int *)this + 194) = 1; /*0x59ad27*/
    RandomMap::Constructor_0( (int)((RandomMap *)&v28), 0, 0); /*0x59ad31*/
    v2 = *(unsigned int *)&this->__pad_4C[4]; /*0x59ad36*/
    v28 = (void*)&DynamicVectorClass_TRect_int_vftable; /*0x59ad39*/
    v32 = 10; /*0x59ad44*/
    v3 = v2 / 2; /*0x59ad4c*/
    v31 = 0; /*0x59ad51*/
    v4 = 2; /*0x59ad55*/
    if ( v3 >= 2 ) /*0x59ad5a*/
      v4 = v3; /*0x59ad5c*/
    *(unsigned __int64 *)v21 = v4; /*0x59ad5e*/
    v22 = (double)v4; /*0x59ad6a*/
    do /*0x59ad9b*/
    {
      *(unsigned __int64 *)v21 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ad78*/
      IDA_LOWORD(v5) = Math::RoundToInt((double)*(__int64 *)v21 * v22 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
    }
    while ( v5 > v4 ); /*0x59ad9b*/
    v27[1] = *(unsigned int *)&stru_87F5F0.__pad_58[672]; /*0x59ada9*/
    v27[0] = *(unsigned int *)&stru_87F5F0.__pad_58[668]; /*0x59adb3*/
    v27[3] = *(unsigned int *)&stru_87F5F0.__pad_58[680]; /*0x59adbd*/
    v6 = *(unsigned int *)&this->__pad_4C[4]; /*0x59adc1*/
    v27[2] = *(unsigned int *)&stru_87F5F0.__pad_58[676]; /*0x59adc4*/
    ArrangeBuildingPlacementGrid((int)&v28, v5 + v6, v27); /*0x59add7*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59ade1*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59adf2*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      v19 = *(unsigned int *)(i + 36); /*0x59adf7*/
      *(unsigned int *)(80 * ((__int16)v19 + g_MapCellWidth * IDA_SHIWORD(v19)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59ae1c*/
    }
    while ( v31 > 0 ) /*0x59ae2d*/
    {
      v23 = *(unsigned int *)Block; /*0x59ae3d*/
      v24 = *((unsigned int *)Block + 1); /*0x59ae44*/
      v25 = *((unsigned int *)Block + 2); /*0x59ae4b*/
      v26 = *((unsigned int *)Block + 3); /*0x59ae57*/
      v8 = Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ae5b*/
      v9 = v26; /*0x59ae60*/
      v10 = v25; /*0x59ae68*/
      *(unsigned __int64 *)&v22 = (unsigned int)v8; /*0x59ae6e*/
      v20 = 2 * v25 * v26; /*0x59ae8d*/
      IDA_LOWORD(v11) = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)v20); /*0x59ae97*/
      v12 = v11; /*0x59ae9c*/
      v21[0] = v23 + v10 / 2 + v9 / 2 + v24 + 1; /*0x59aecd*/
      v21[1] = v24 + *(unsigned int *)&stru_87F5F0.__pad_58[660] + v9 / 2 - v10 / 2 - v23; /*0x59aed1*/
      v13 = 0; /*0x59aed5*/
      do /*0x59af1f*/
      {
        if ( v13 >= 10 ) /*0x59aeda*/
          break; /*0x59aeda*/
        IDA_LOWORD(v19) = v21[0]; /*0x59aef1*/
        IDA_HIWORD(v19) = v21[1]; /*0x59aef8*/
        v14 = ((RandomMap *)this)->PlaceTerrain( v12, (MapResourceClass *)(&v23), (MapResourceClass *)((int)v21), 1, (MapResourceClass *)((int)&v19), 0.25, 0); /*0x59af0d*/
        if ( !v14 ) /*0x59af14*/
          ++*((unsigned int *)this + 194); /*0x59af16*/
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
        v17 = (unsigned int *)((char *)Block + v16 + 16); /*0x59af3a*/
        v18 = (unsigned int *)((char *)Block + v16); /*0x59af3e*/
        ++v15; /*0x59af40*/
        v16 += 16; /*0x59af41*/
        *v18 = *v17; /*0x59af46*/
        v18[1] = v17[1]; /*0x59af4b*/
        v18[2] = v17[2]; /*0x59af51*/
        v18[3] = v17[3]; /*0x59af57*/
      }
      while ( v15 < v31 ); /*0x59af60*/
    }
    v28 = (void*)&VectorClass_TRect_int_vftable; /*0x59af70*/
    if ( Block ) /*0x59af7a*/
    {
      if ( v30 ) /*0x59af82*/
        RA2_OPDEL(Block); /*0x59af85*/
    }
}
}
// 0x59AFA0
namespace gamemd {
void FillTerrainProgressively()
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
    RandomMap *v16; // [esp+20h] [ebp-38h]
    int v17; // [esp+24h] [ebp-34h]
    int v18; // [esp+28h] [ebp-30h] BYREF
    int v19; // [esp+2Ch] [ebp-2Ch]
    double v20; // [esp+30h] [ebp-28h]
    double v21; // [esp+38h] [ebp-20h]
    double v22; // [esp+40h] [ebp-18h]
    unsigned int v23[4]; // [esp+48h] [ebp-10h] BYREF

    v1 = this; /*0x59afad*/
    v16 = this; /*0x59afaf*/
    *((unsigned int *)this + 194) = 1; /*0x59afb3*/
    v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
    v3 = (double)*(int *)v1->__pad_4C; /*0x59afc2*/
    v15 = v2; /*0x59afc5*/
    v13 = 0; /*0x59afcb*/
    v14 = 0; /*0x59afcf*/
    v20 = 0.0; /*0x59afd9*/
    v21 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
    v22 = (double)v2; /*0x59b003*/
    IDA_LOWORD(v4) = Math::RoundToInt(v22 * 0.03 * v21); /*0x59b011*/
    v17 = v4; /*0x59b016*/
    v5 = *(unsigned int *)&stru_87F5F0.__pad_58[664] / 2 + *(unsigned int *)&stru_87F5F0.__pad_58[660] / 2; /*0x59b030*/
    v19 = v5; /*0x59b038*/
    v18 = v5 + 1; /*0x59b03f*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59b043*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59b054*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      v15 = *(unsigned int *)(i + 36); /*0x59b059*/
      *(unsigned int *)(80 * ((__int16)v15 + g_MapCellWidth * IDA_SHIWORD(v15)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59b07a*/
    }
    v23[0] = *(unsigned int *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b0af*/
    v23[1] = *(unsigned int *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b0bb*/
    v23[2] = *(unsigned int *)&stru_87F5F0.__pad_58[676] - 2; /*0x59b0c2*/
    v23[3] = *(unsigned int *)&stru_87F5F0.__pad_58[680] - 2; /*0x59b0c6*/
    if ( v21 > 0.0 ) /*0x59b0ca*/
    {
      while ( v14 < 100 ) /*0x59b0db*/
      {
        IDA_LOWORD(v7) = Math::RoundToInt((v21 - v20) * v22); /*0x59b0ed*/
        if ( v7 >= v17 ) /*0x59b0f8*/
          v7 = v17; /*0x59b0fa*/
        IDA_LOWORD(v15) = v5 + 1; /*0x59b119*/
        IDA_HIWORD(v15) = v5; /*0x59b11e*/
        v13 += ((RandomMap *)v1)->PlaceTerrain( v7, (MapResourceClass *)(v23), (MapResourceClass *)((int)&v18), 1, (MapResourceClass *)((int)&v15), 0.75, 1); /*0x59b133*/
        ++v14; /*0x59b137*/
        v8 = 50000; /*0x59b144*/
        v12 = 0; /*0x59b149*/
        v20 = (double)v13 / v22; /*0x59b15b*/
        ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59b15f*/
        for ( j = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59b172*/
              j;
              j = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
        {
          if ( !*(unsigned int *)(80 * (*(__int16 *)(j + 36) + g_MapCellWidth * *(__int16 *)(j + 38)) /*0x59b191*/
                          + g_MissionQueueFrame.localVariables[163]
                          + 60) )
          {
            v10 = *(__int16 *)(j + 36) - (v5 + 1); /*0x59b1ac*/
            v11 = (IDA_HIDWORD(v10) ^ v10) - IDA_HIDWORD(v10) + abs32(*(__int16 *)(j + 38) - v5); /*0x59b1b1*/
            if ( v11 < v8 ) /*0x59b1b5*/
            {
              v8 = v11; /*0x59b1ba*/
              v12 = *(unsigned int *)(j + 36); /*0x59b1bc*/
            }
          }
        }
        v18 = (__int16)v12; /*0x59b1e2*/
        v19 = IDA_SHIWORD(v12); /*0x59b1e6*/
        if ( v20 >= v21 ) /*0x59b1ef*/
          break; /*0x59b1ef*/
        v1 = v16; /*0x59b0d2*/
      }
    }
}
}
// 0x59B200
namespace gamemd {
int PlaceTerrainFeatures()
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
    int *v26; // [esp+2Ch] [ebp-9Ch]
    int v27; // [esp+30h] [ebp-98h] BYREF
    int v28; // [esp+34h] [ebp-94h]
    int v29; // [esp+38h] [ebp-90h]
    int v30; // [esp+3Ch] [ebp-8Ch]
    double v31; // [esp+40h] [ebp-88h]
    int v32; // [esp+4Ch] [ebp-7Ch] BYREF
    int v33; // [esp+50h] [ebp-78h]
    int v34; // [esp+54h] [ebp-74h]
    int v35; // [esp+58h] [ebp-70h]
    RandomMap *v36; // [esp+5Ch] [ebp-6Ch]
    int v37; // [esp+60h] [ebp-68h] BYREF
    int v38; // [esp+64h] [ebp-64h]
    double v39; // [esp+68h] [ebp-60h]
    double v40; // [esp+70h] [ebp-58h]
    unsigned int v41[2]; // [esp+78h] [ebp-50h] BYREF
    int v42; // [esp+80h] [ebp-48h]
    int v43; // [esp+84h] [ebp-44h]
    int v44; // [esp+88h] [ebp-40h]
    int v45; // [esp+8Ch] [ebp-3Ch]
    int v46; // [esp+90h] [ebp-38h]
    int v47; // [esp+94h] [ebp-34h]
    int v48; // [esp+98h] [ebp-30h]
    int v49; // [esp+9Ch] [ebp-2Ch]
    double v50; // [esp+A0h] [ebp-28h]
    double v51; // [esp+A8h] [ebp-20h]
    int v52; // [esp+B4h] [ebp-14h]
    double v53; // [esp+B8h] [ebp-10h]
    double v54; // [esp+C0h] [ebp-8h]

    v36 = this; /*0x59b212*/
    *((unsigned int *)this + 194) = 1; /*0x59b216*/
    v19 = Object::ComputeAllocationSize(); /*0x59b228*/
    v24 = 0; /*0x59b22e*/
    v39 = (1.0 - (double)*(int *)this->__pad_4C * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
    v51 = (double)v19; /*0x59b25a*/
    IDA_LOWORD(v2) = Math::RoundToInt(v51 * 0.06 * v39); /*0x59b26b*/
    v49 = v2; /*0x59b275*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59b27c*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59b28d*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      *(unsigned int *)(80 * ((__int16)*(unsigned int *)(i + 36) + g_MapCellWidth * (__int16)IDA_HIWORD(*(unsigned int *)(i + 36))) /*0x59b2b7*/
                + g_MissionQueueFrame.localVariables[163]
                + 60) = 0;
    }
    *(unsigned __int64 *)&v31 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b2ce*/
    v41[0] = *(unsigned int *)&stru_87F5F0.__pad_58[668]; /*0x59b2fe*/
    v41[1] = *(unsigned int *)&stru_87F5F0.__pad_58[672]; /*0x59b30d*/
    if ( (double)*(__int64 *)&v31 * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
    {
      v42 = *(unsigned int *)&stru_87F5F0.__pad_58[676]; /*0x59b35c*/
      v43 = *(unsigned int *)&stru_87F5F0.__pad_58[680] / 2 - 1; /*0x59b36a*/
      v44 = *(unsigned int *)&stru_87F5F0.__pad_58[668]; /*0x59b371*/
      v45 = *(unsigned int *)&stru_87F5F0.__pad_58[680] / 2 + *(unsigned int *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b378*/
      v46 = *(unsigned int *)&stru_87F5F0.__pad_58[676]; /*0x59b37f*/
      v47 = v43; /*0x59b386*/
    }
    else
    {
      v43 = *(unsigned int *)&stru_87F5F0.__pad_58[680]; /*0x59b311*/
      v42 = *(unsigned int *)&stru_87F5F0.__pad_58[676] / 2 - 1; /*0x59b31f*/
      v44 = *(unsigned int *)&stru_87F5F0.__pad_58[676] / 2 + *(unsigned int *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b326*/
      v45 = *(unsigned int *)&stru_87F5F0.__pad_58[672]; /*0x59b32d*/
      v46 = v42; /*0x59b334*/
      v47 = *(unsigned int *)&stru_87F5F0.__pad_58[680]; /*0x59b33b*/
    }
    v20 = 2; /*0x59b391*/
    v26 = (int *)(v41); /*0x59b399*/
    do /*0x59b6c1*/
    {
      v23 = 0; /*0x59b3a5*/
      v40 = 0.0; /*0x59b3a9*/
      v27 = *v26; /*0x59b3bb*/
      v28 = v26[1]; /*0x59b3c2*/
      v29 = v26[2]; /*0x59b3cb*/
      v30 = v26[3]; /*0x59b3d5*/
      v4 = v28 + *(unsigned int *)&stru_87F5F0.__pad_58[660] + v30 / 2 - v29 / 2 - v27; /*0x59b3fd*/
      v33 = v27 + v30 / 2 + v29 / 2 + v28 + 1; /*0x59b3ff*/
      v34 = v4; /*0x59b403*/
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
          if ( v6 >= v49 ) /*0x59b4e7*/
            v6 = v49; /*0x59b4e9*/
          IDA_LOWORD(v32) = v33; /*0x59b4fd*/
          IDA_HIWORD(v32) = v4; /*0x59b515*/
          v23 += ((RandomMap *)v36)->PlaceTerrain( v6, (MapResourceClass *)(&v27), (MapResourceClass *)((int)&v37), 1, (MapResourceClass *)((int)&v32), 0.75, 1); /*0x59b52d*/
          v21 = 0; /*0x59b540*/
          ++v24; /*0x59b55a*/
          v7 = 2 * v27 - *(unsigned int *)&stru_87F5F0.__pad_58[660] + 1; /*0x59b562*/
          v8 = 50000; /*0x59b563*/
          v48 = v7 + 2 * v29 + 2; /*0x59b572*/
          v9 = *(unsigned int *)&stru_87F5F0.__pad_58[660] + 2 * v28 + 1; /*0x59b57d*/
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
                && !*((unsigned int *)v10 + 15)
                && Map_Helper_59BAB0((__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]), &v27, 1, v54, v53) )
              {
                v15 = v10[1] - v34; /*0x59b629*/
                IDA_LOWORD(v16) = Math::RoundToInt( /*0x59b659*/
                                (double)(int)((IDA_HIDWORD(v15) ^ v15) - IDA_HIDWORD(v15)) * v50
                              + (double)(int)abs32(*v10 - v33) * v31);
                if ( v16 < v8 ) /*0x59b660*/
                {
                  v8 = v16; /*0x59b664*/
                  v21 = *(unsigned int *)v10; /*0x59b666*/
                }
              }
              v17 = v35 == 1; /*0x59b675*/
              v25 += 80; /*0x59b676*/
              --v35; /*0x59b67a*/
            }
            while ( !v17 ); /*0x59b67e*/
            IDA_LOWORD(v4) = v34; /*0x59b684*/
          }
          v37 = (__int16)v21; /*0x59b69a*/
          v38 = IDA_SHIWORD(v21); /*0x59b69e*/
        }
        while ( v40 < v39 ); /*0x59b6a7*/
      }
      result = v20 - 1; /*0x59b6b8*/
      v17 = v20 == 1; /*0x59b6b8*/
      v26 += 4; /*0x59b6b9*/
      --v20; /*0x59b6bd*/
    }
    while ( !v17 ); /*0x59b6c1*/
    return result; /*0x59b6c7*/
}
}
// 0x59B740
namespace gamemd {
void PlaceShoreObjects()
{
    Cell *i; // ebp
    signed int j; // edi
    Cell *NeighbourContent; // esi
    int v4; // eax
    int v5; // edx
    unsigned int v6; // esi
    signed int v7; // eax
    unsigned int *v8; // ecx
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

    RandomMap::Constructor( (int)((RandomMap *)&v16), 0, 0); /*0x59b74f*/
    v16 = (void*)&DynamicVectorClass_CellClass___vftable; /*0x59b759*/
    v20 = 0; /*0x59b761*/
    v21 = 10000; /*0x59b765*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59b76d*/
    for ( i = (Cell *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59b780*/
          i;
          i = (Cell *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      if ( (unsigned __int8)((Cell *)i)->IsShore() ) /*0x59b784*/
      {
        for ( j = 0; j < 8; j += 2 ) /*0x59b78d*/
        {
          NeighbourContent = (Cell *)((Cell *)i)->GetNeighbourContent( j); /*0x59b797*/
          if ( (unsigned __int8)((Cell *)NeighbourContent)->IsEmpty() /*0x59b7ce*/
            && (v20 < v18
             || (v19 || !v18)
             && v21 > 0
             && ((unsigned __int8 (*)(void ***, int, unsigned int))v16[2])(&v16, v21 + v18, 0)) )
          {
            v4 = v20++; /*0x59b7d9*/
            *((unsigned int *)Block + v4) = (unsigned int)NeighbourContent; /*0x59b7e4*/
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
          v14 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b84c*/
          IDA_LOWORD(v7) = Math::RoundToInt((double)v14 * v15 * 2.328306437080797e-10); /*0x59b862*/
        }
        while ( v7 > v6 ); /*0x59b869*/
        v8 = (unsigned int *)(Block); /*0x59b86b*/
        v9 = (Cell *)*((unsigned int *)Block + v7); /*0x59b875*/
        if ( v7 < v20 && v7 < --v20 ) /*0x59b881*/
        {
          while ( 1 ) /*0x59b88d*/
          {
            v8[v7] = v8[v7 + 1]; /*0x59b88d*/
            if ( ++v7 >= v20 ) /*0x59b897*/
              break; /*0x59b897*/
            v8 = (unsigned int *)(Block); /*0x59b885*/
          }
        }
        v10 = 0; /*0x59b89e*/
        v9->Cell_field_0x38 = dword_AA0E18; /*0x59b8a0*/
        do /*0x59b901*/
        {
          v11 = (Cell *)((Cell *)v9)->GetNeighbourContent( v10); /*0x59b8ab*/
          if ( (unsigned __int8)((Cell *)v11)->IsEmpty() /*0x59b8e2*/
            && (v20 < v18
             || (v19 || !v18)
             && v21 > 0
             && ((unsigned __int8 (*)(void ***, int, unsigned int))v16[2])(&v16, v21 + v18, 0)) )
          {
            v12 = v20++; /*0x59b8ed*/
            *((unsigned int *)Block + v12) = (unsigned int)v11; /*0x59b8f8*/
          }
          v10 += 2; /*0x59b8fb*/
        }
        while ( v10 < 8 ); /*0x59b901*/
        --v13; /*0x59b908*/
      }
      while ( v13 ); /*0x59b90c*/
    }
    v16 = (void*)&VectorClass_CellClass___vftable; /*0x59b916*/
    if ( Block ) /*0x59b920*/
    {
      if ( v19 ) /*0x59b926*/
        RA2_OPDEL(Block); /*0x59b929*/
    }
}
}
// 0x59BBC0
namespace gamemd {
int PlaceTerrain(int a2, MapResourceClass * aP2, MapResourceClass * aP3, int a5, MapResourceClass * aP5, double a7, char a8)
{
    double v8; // st7
    int v9; // eax
    int v10; // edi
    void *v11; // eax
    Heap *v12; // eax
    Heap *v13; // esi
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    unsigned int v17; // ebx
    unsigned int v18; // eax
    __int16 v19; // di
    unsigned int v20; // ebx
    unsigned int v21; // eax
    __int16 v22; // cx
    __int16 v23; // ax
    Cell *v24; // eax
    int result; // eax
    __int16 v26; // dx
    int v27; // eax
    int v28; // edx
    int v29; // eax
    unsigned int *v30; // edi
    unsigned int v31; // ecx
    unsigned int v32; // edx
    Heap v33; // ebx
    unsigned int v35; // eax
    __int16 *v36; // edi
    Heap v37; // eax
    unsigned int *v39; // eax
    char *v40; // ecx
    int v41; // edx
    int v42; // ebx
    char v43; // al
    int v44; // eax
    __int16 v45; // cx
    int v46; // eax
    int v47; // ecx
    int v48; // edi
    Cell *v49; // eax
    Heap v50; // ebx
    __int16 v51; // ax
    __int16 v52; // ax
    int v53; // ecx
    Heap v55; // eax
    unsigned int v56; // ecx
    unsigned int v57; // edi
    unsigned int v58; // edx
    Heap v59; // edi
    Heap v62; // ecx
    Heap v63; // ecx
    bool v64; // zf
    Heap v65; // eax
    Heap v66; // eax
    __int16 *v67; // edi
    Cell *v68; // ebx
    int v69; // edi
    Heap v70; // eax
    int i; // eax
    int v72; // ecx
    int v73; // esi
    int v74; // edi
    int j; // eax
    int v76; // ecx
    double v77; // [esp+0h] [ebp-98h]
    char inited; // [esp+17h] [ebp-81h]
    __int16 v80[2]; // [esp+1Ch] [ebp-7Ch] BYREF
    __int16 v81[2]; // [esp+20h] [ebp-78h] BYREF
    int v82; // [esp+24h] [ebp-74h]
    int v83; // [esp+28h] [ebp-70h]
    int v84; // [esp+2Ch] [ebp-6Ch]
    void *Block; // [esp+30h] [ebp-68h]
    float v86; // [esp+34h] [ebp-64h]
    float v87; // [esp+38h] [ebp-60h]
    int v88; // [esp+3Ch] [ebp-5Ch]
    int v89; // [esp+40h] [ebp-58h]
    int v90; // [esp+44h] [ebp-54h]
    __int64 v91; // [esp+48h] [ebp-50h]
    __int64 v92; // [esp+50h] [ebp-48h]
    int v93; // [esp+58h] [ebp-40h] BYREF
    int v94; // [esp+60h] [ebp-38h]
    double v95; // [esp+68h] [ebp-30h]
    double v96; // [esp+70h] [ebp-28h]
    double v97; // [esp+78h] [ebp-20h]
    double v98; // [esp+80h] [ebp-18h]
    double v99; // [esp+88h] [ebp-10h]
    double v100; // [esp+90h] [ebp-8h]

    v9 = a2; /*0x59bbcc*/
    if ( a2 <= 400 ) /*0x59bbdb*/
    {
      v9 = 400; /*0x59bbdd*/
      a2 = 400; /*0x59bbe2*/
    }
    v10 = 8 * v9 + 2; /*0x59bbe5*/
    if ( v10 <= 100 ) /*0x59bbef*/
      v10 = 100; /*0x59bbf1*/
    v90 = v10; /*0x59bbfd*/
    v11 = (void *)RA2_OPNEW(8 * v10); /*0x59bc02*/
    if ( v11 ) /*0x59bc0e*/
    {
      Block = v11; /*0x59bc13*/
      IDA_LODWORD(v95) = v10 - 1; /*0x59bc17*/
    }
    else
    {
      Block = (void *)(0); /*0x59bc1d*/
    }
    v12 = (Heap *)RA2_OPNEW(0x14u); /*0x59bc23*/
    v13 = v12; /*0x59bc28*/
    if ( v12 ) /*0x59bc2f*/
    {
      v12[3] = 0; /*0x59bc38*/
      v12[4] = (Heap)-1; /*0x59bc3c*/
      *v12 = 0; /*0x59bc43*/
      v12[1] = (Heap)v10; /*0x59bc45*/
      v14 = RA2_OPNEW(4 * v10 + 4); /*0x59bc48*/
      v15 = (int)v13[1]; /*0x59bc4d*/
      v13[2] = (Heap)v14; /*0x59bc50*/
      v16 = 0; /*0x59bc56*/
      if ( v15 >= 0 ) /*0x59bc5a*/
      {
        do /*0x59bc69*/
        {
          ++v16; /*0x59bc5f*/
          *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * v16 - 4) = 0; /*0x59bc60*/
        }
        while ( v16 <= *(unsigned int *)&v13[1] ); /*0x59bc69*/
      }
    }
    else
    {
      v13 = (Heap *)(0); /*0x59bc6d*/
    }
    if ( *(unsigned int *)a4 || *(unsigned int *)(a4 + 4) ) /*0x59bc7c*/
    {
      v26 = *(unsigned short *)(a4 + 4); /*0x59bdec*/
      IDA_LOWORD(v88) = *(unsigned int *)a4; /*0x59bdf0*/
      IDA_HIWORD(v88) = v26; /*0x59bdf5*/
      *(unsigned int *)v80 = v88; /*0x59bdfe*/
  LABEL_27:
      v87 = 0.0; /*0x59be02*/
      v86 = 0.0; /*0x59be13*/
      if ( *a3 != *(unsigned int *)&g_MissionQueueFrame.globalVariables[112] /*0x59be46*/
        || a3[1] != *(unsigned int *)&g_MissionQueueFrame.globalVariables[116]
        || a3[2] != *(unsigned int *)&g_MissionQueueFrame.globalVariables[120]
        || a3[3] != *(unsigned int *)&g_MissionQueueFrame.globalVariables[124] )
      {
        v27 = a3[3]; /*0x59be4b*/
        v84 = a3[2]; /*0x59be50*/
        v88 = v27; /*0x59be54*/
        if ( v84 <= v27 ) /*0x59be58*/
        {
          __asm { fild [esp+90h+var_5C] } /*0x59be76*/
          v86 = 1.0; /*0x59be7a*/
          __asm /*0x59be82*/
          {
            fidiv [esp+90h+var_6C]
            fmul ds:dbl_7E5190
            fstp [esp+90h+var_60]
          }
        }
        else
        {
          __asm { fild [esp+90h+var_6C] } /*0x59be5a*/
          v87 = 1.0; /*0x59be5e*/
          __asm /*0x59be66*/
          {
            fidiv [esp+90h+var_5C]
            fmul ds:dbl_7E5190
            fstp [esp+90h+var_64]
          }
        }
      }
      IDA_LODWORD(v92) = v80[0]; /*0x59be9a*/
      v28 = (int)*v13; /*0x59be9e*/
      __asm { fild dword ptr [esp+90h+var_48] } /*0x59bea0*/
      IDA_LODWORD(v92) = v80[1]; /*0x59bea4*/
      v29 = 0; /*0x59beaa*/
      __asm /*0x59beae*/
      {
        fstp [esp+90h+var_28]
        fild dword ptr [esp+90h+var_48]
      }
      v82 = 0; /*0x59beb6*/
      __asm { fstp [esp+90h+var_20] } /*0x59beba*/
      if ( v28 >= 0 ) /*0x59bebe*/
      {
        do /*0x59becc*/
        {
          ++v29; /*0x59bec3*/
          *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * v29 - 4) = 0; /*0x59bec4*/
        }
        while ( v29 <= *(unsigned int *)v13 ); /*0x59becc*/
      }
      v30 = (unsigned int *)(Block); /*0x59bece*/
      *v13 = 0; /*0x59bed2*/
      v83 = 1; /*0x59bed8*/
      *v30 = *(unsigned int *)v80; /*0x59bee0*/
      v30[1] = 0; /*0x59bee2*/
      *(unsigned int *)(80 * (v80[0] + g_MapCellWidth * v80[1]) + g_MissionQueueFrame.localVariables[163] + 60) = *((unsigned int *)this + 194); /*0x59bf0d*/
      v31 = *(unsigned int *)v13 + 1; /*0x59bf16*/
      IDA_LODWORD(v92) = v30[1]; /*0x59bf19*/
      v32 = v31 >> 1; /*0x59bf20*/
      if ( v31 < *(unsigned int *)&v13[1] ) /*0x59bf24*/
      {
        for ( ; v31 > 1; v32 >>= 1 ) /*0x59bf29*/
        {
          v33 = v13[2]; /*0x59bf2b*/
          _EAX = *(unsigned int *)(*(unsigned int *)&v33 + 4 * v32); /*0x59bf2e*/
          __asm /*0x59bf31*/
          {
            fld dword ptr [eax+4]
            fcomp dword ptr [esp+90h+var_48]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x59bf3d*/
            break; /*0x59bf3d*/
          *(unsigned int *)(*(unsigned int *)&v33 + 4 * v31) = *(unsigned int *)(*(unsigned int *)&v33 + 4 * v32); /*0x59bf42*/
          v31 = v32; /*0x59bf45*/
        }
        *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * v31) = (unsigned int)v30; /*0x59bf51*/
        v35 = (unsigned int)v13[3]; /*0x59bf56*/
        ++*(unsigned int *)v13; /*0x59bf5c*/
        if ( (unsigned int)v30 > v35 ) /*0x59bf5e*/
          v13[3] = (Heap)v30; /*0x59bf60*/
        if ( (unsigned int)v30 < *(unsigned int *)&v13[4] ) /*0x59bf66*/
          v13[4] = (Heap)v30; /*0x59bf68*/
      }
      if ( *v13 ) /*0x59bf6b*/
      {
        v37 = v13[2]; /*0x59bf75*/
        v36 = *(__int16 **)(*(unsigned int *)&v37 + 4); /*0x59bf7d*/
        *(unsigned int *)(*(unsigned int *)&v37 + 4) = *(unsigned int *)(*(unsigned int *)&v37 + 4 * *(unsigned int *)v13); /*0x59bf80*/
        *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * (*(unsigned int *)v13)--) = 0; /*0x59bf88*/
        Heap::SiftDown(v13, 1); /*0x59bf96*/
      }
      else
      {
        v36 = (__int16 *)(0); /*0x59bf71*/
      }
      _EAX = a3; /*0x59bf9b*/
      v84 = (int)v36; /*0x59bf9e*/
      __asm /*0x59bfa2*/
      {
        fild dword ptr [eax+8]
        fmul ds:dbl_7E1738
        fld st
        fmul st, st(1)
        fdivr ds:dbl_7E1718
        fstp [esp+90h+var_10]
        fstp st
        fild dword ptr [eax+0Ch]
      }
      __asm
      {
        fmul ds:dbl_7E1738
        fld st
        fmul st, st(1)
        fdivr ds:dbl_7E1718
        fstp [esp+90h+var_18]
        fstp st
      }
      do /*0x59c32c*/
      {
        if ( !v36 ) /*0x59bfe4*/
          break; /*0x59bfe4*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x59bff2*/
          *(unsigned int *)(80 * (*v36 + g_MapCellWidth * v36[1]) + g_MissionQueueFrame.localVariables[163] + 56) = *((unsigned int *)this + 194); /*0x59c014*/
        v39 = (unsigned int *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v36)); /*0x59c01e*/
        v40 = (char *)Block; /*0x59c023*/
        v41 = v83; /*0x59c027*/
        v39[14] = 0; /*0x59c02b*/
        v42 = g_MissionQueueFrame.localVariables[160]; /*0x59c032*/
        v43 = 0; /*0x59c038*/
        IDA_LODWORD(v92) = 0; /*0x59c03d*/
        IDA_LODWORD(v91) = &v40[8 * v41]; /*0x59c041*/
        while ( 1 ) /*0x59c04b*/
        {
          v44 = v43 & 7; /*0x59c04b*/
          v45 = v36[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v44 + 82]); /*0x59c064*/
          IDA_LOWORD(v89) = *v36 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v44 + 82]); /*0x59c068*/
          IDA_HIWORD(v89) = v45; /*0x59c06d*/
          *(unsigned int *)v81 = v89; /*0x59c076*/
          v46 = v45; /*0x59c07d*/
          v47 = v45 + (__int16)v89; /*0x59c080*/
          if ( v47 > v42 /*0x59c0a9*/
            && (__int16)v89 - v46 < v42
            && v46 - (__int16)v89 < v42
            && v47 <= g_MissionQueueFrame.localVariables[161] )
          {
            v48 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v89 + g_MapCellWidth * v46); /*0x59c0c4*/
            if ( !*(unsigned int *)(v48 + 56) && *(unsigned int *)(v48 + 60) != *((unsigned int *)this + 194) ) /*0x59c0de*/
            {
              v49 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v81)); /*0x59c0ee*/
              if ( (unsigned __int8)((Cell *)v49)->IsGroundTypeRange() && v83 < v90 && Map_Helper_59BAB0(v81, a3, a5, v99, v98) ) /*0x59c13d*/
              {
                __asm { fld [esp+90h+var_28] } /*0x59c14a*/
                v50 = (Heap)v91; /*0x59c14e*/
                __asm { fadd ds:dbl_7E1738 } /*0x59c156*/
                *(unsigned int *)v91 = *(unsigned int *)v81; /*0x59c15c*/
                v51 = Math::RoundToInt(v8); /*0x59c15e*/
                __asm /*0x59c163*/
                {
                  fld [esp+90h+var_20]
                  fadd ds:dbl_7E1738
                }
                IDA_LOWORD(v88) = v51; /*0x59c16d*/
                v52 = Math::RoundToInt(v8); /*0x59c172*/
                IDA_HIWORD(v88) = v52; /*0x59c177*/
                v93 = v88; /*0x59c180*/
                if ( a8 ) /*0x59c189*/
                {
                  v8 = Map_Helper_59B940((__int16 *)&v93, v81, a3, (__int16 *)a6, v87, v86); /*0x59c1ab*/
                }
                else
                {
                  IDA_LODWORD(v91) = (v81[1] - v52) * (v81[1] - v52) + (v81[0] - (__int16)v88) * (v81[0] - (__int16)v88); /*0x59c1d7*/
                  __asm /*0x59c1db*/
                  {
                    fild dword ptr [esp+98h+var_50]
                    fstp [esp+98h+var_98]; double
                  }
                  Math::Sqrt(v77); /*0x59c1e2*/
                  __asm { fstp [esp+98h+var_30] } /*0x59c1e7*/
                  *(unsigned __int64 *)&v100 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59c1f8*/
                  __asm /*0x59c20a*/
                  {
                    fild [esp+90h+var_8]
                    fmul ds:dbl_7ED808
                    fmul ds:dbl_7ED898
                    fadd [esp+90h+var_30]
                  }
                }
                v53 = v83; /*0x59c225*/
                __asm { fstp dword ptr [ebx+4] } /*0x59c229*/
                *(float *)(*(unsigned int *)&v50 + 4) = _ET1; /*0x59c229*/
                *(unsigned int *)(v48 + 60) = *((unsigned int *)this + 194); /*0x59c233*/
                v55 = v50; /*0x59c236*/
                v83 = v53 + 1; /*0x59c238*/
                v56 = *(unsigned int *)v13 + 1; /*0x59c244*/
                v94 = *(unsigned int *)(*(unsigned int *)&v50 + 4); /*0x59c245*/
                v57 = (unsigned int)v13[1]; /*0x59c249*/
                v58 = v56 >> 1; /*0x59c24e*/
                IDA_LODWORD(v95) = v50; /*0x59c252*/
                IDA_LODWORD(v91) = *(unsigned int *)&v50 + 8; /*0x59c256*/
                if ( v56 < v57 ) /*0x59c25a*/
                {
                  if ( v56 > 1 ) /*0x59c25f*/
                  {
                    do /*0x59c27f*/
                    {
                      v59 = v13[2]; /*0x59c261*/
                      _EBX = *(unsigned int *)(*(unsigned int *)&v59 + 4 * v58); /*0x59c264*/
                      __asm /*0x59c267*/
                      {
                        fld dword ptr [ebx+4]
                        fcomp dword ptr [esp+58h]
                        fnstsw ax
                      }
                      if ( (_AX & 0x4100) != 0 ) /*0x59c273*/
                        break; /*0x59c273*/
                      *(unsigned int *)(*(unsigned int *)&v59 + 4 * v56) = _EBX; /*0x59c275*/
                      v56 = v58; /*0x59c278*/
                      v58 >>= 1; /*0x59c27a*/
                    }
                    while ( v56 > 1 ); /*0x59c27f*/
                    v55 = (Heap)IDA_LODWORD(v95); /*0x59c281*/
                  }
                  *(Heap *)(*(unsigned int *)&v13[2] + 4 * v56) = v55; /*0x59c288*/
                  v62 = v13[3]; /*0x59c28d*/
                  ++*(unsigned int *)v13; /*0x59c293*/
                  if ( *(unsigned int *)&v55 > *(unsigned int *)&v62 ) /*0x59c295*/
                    v13[3] = v55; /*0x59c297*/
                  if ( *(unsigned int *)&v55 < *(unsigned int *)&v13[4] ) /*0x59c29d*/
                    v13[4] = v55; /*0x59c29f*/
                }
              }
              v42 = g_MissionQueueFrame.localVariables[160]; /*0x59c2a2*/
            }
          }
          v43 = v92 + 2; /*0x59c2ac*/
          IDA_LODWORD(v92) = v92 + 2; /*0x59c2b2*/
          if ( (int)v92 >= 8 ) /*0x59c2b6*/
            break; /*0x59c2b6*/
          v36 = (__int16 *)v84; /*0x59c047*/
        }
        Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x59c2c1*/
        __asm { fmul [ebp+arg_14] } /*0x59c2c6*/
        __asm
        {
          fadd [esp+90h+var_28]
          fstp [esp+90h+var_28]
        }
        Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x59c2d6*/
        __asm { fmul [ebp+arg_14] } /*0x59c2db*/
        __asm { fadd [esp+90h+var_20] }
        ++v82; /*0x59c2e7*/
        v63 = *(unsigned int *)v13;
        v64 = *v13 == 0; /*0x59c2ed*/
        __asm { fstp [esp+90h+var_20] } /*0x59c2ef*/
        if ( v64 ) /*0x59c2f3*/
        {
          v36 = (__int16 *)(0); /*0x59c2f5*/
        }
        else
        {
          v65 = v13[2]; /*0x59c2f9*/
          v36 = *(__int16 **)(*(unsigned int *)&v65 + 4); /*0x59c301*/
          *(unsigned int *)(*(unsigned int *)&v65 + 4) = *(unsigned int *)(*(unsigned int *)&v65 + 4 * *(unsigned int *)&v63); /*0x59c304*/
          *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * (*(unsigned int *)v13)--) = 0; /*0x59c30c*/
          Heap::SiftDown(v13, 1); /*0x59c31a*/
        }
        v84 = (int)v36; /*0x59c328*/
      }
      while ( v82 < a2 ); /*0x59c32c*/
      if ( *v13 ) /*0x59c332*/
      {
        v66 = v13[2]; /*0x59c33c*/
        v67 = *(__int16 **)(*(unsigned int *)&v66 + 4); /*0x59c344*/
        *(unsigned int *)(*(unsigned int *)&v66 + 4) = *(unsigned int *)(*(unsigned int *)&v66 + 4 * *(unsigned int *)v13); /*0x59c347*/
        *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * (*(unsigned int *)v13)--) = 0; /*0x59c34f*/
        Heap::SiftDown(v13, 1); /*0x59c35d*/
        for ( ; v67; ++v82 ) /*0x59c364*/
        {
          v68 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v67)); /*0x59c375*/
          v69 = g_MissionQueueFrame.localVariables[163] + 80 * (*v67 + g_MapCellWidth * v67[1]); /*0x59c393*/
          if ( !*(unsigned int *)(v69 + 56) && (unsigned __int8)((Cell *)v68)->IsGroundTypeRange() ) /*0x59c39e*/
          {
            v68->Cell_field_0x38 = 0; /*0x59c3ab*/
            *(unsigned int *)(v69 + 56) = *((unsigned int *)this + 194); /*0x59c3b8*/
          }
          if ( *v13 ) /*0x59c3bb*/
          {
            v70 = v13[2]; /*0x59c3c5*/
            v67 = *(__int16 **)(*(unsigned int *)&v70 + 4); /*0x59c3cd*/
            *(unsigned int *)(*(unsigned int *)&v70 + 4) = *(unsigned int *)(*(unsigned int *)&v70 + 4 * *(unsigned int *)v13); /*0x59c3d0*/
            *(unsigned int *)(*(unsigned int *)&v13[2] + 4 * (*(unsigned int *)v13)--) = 0; /*0x59c3d8*/
            Heap::SiftDown(v13, 1); /*0x59c3e6*/
          }
          else
          {
            v67 = (__int16 *)(0); /*0x59c3c1*/
          }
        }
      }
      RA2_OPDEL(Block); /*0x59c405*/
      if ( v13 ) /*0x59c411*/
      {
        RA2_OPDEL(*(void **)&v13[2]); /*0x59c417*/
        RA2_OPDEL(v13); /*0x59c41d*/
      }
      inited = ((MapClass *)&stru_87F5F0.__pad_58[416])->InitTileData( *((unsigned int *)this + 194), 1); /*0x59c43d*/
      ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59c441*/
      for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59c452*/
            i;
            i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
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
        result = v82; /*0x59c51b*/
        ++*((unsigned int *)this + 194); /*0x59c521*/
      }
      else
      {
        v73 = g_CellPassabilityLUT; /*0x59c48c*/
        v74 = *((unsigned int *)this + 194); /*0x59c492*/
        ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x59c49d*/
        for ( j = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x59c4ae*/
              j;
              j = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
        {
          IDA_LODWORD(v95) = *(unsigned int *)(j + 36); /*0x59c4b3*/
          v76 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v95) + g_MapCellWidth * IDA_SWORD1(v95)); /*0x59c4d4*/
          if ( *(unsigned int *)(v76 + 56) == v74 ) /*0x59c4d9*/
          {
            *(unsigned int *)(v76 + 56) = 0; /*0x59c4db*/
            *(unsigned char *)(v76 + 75) = 0; /*0x59c4e2*/
            *(unsigned int *)(j + 56) = v73; /*0x59c4e6*/
            *(unsigned char *)(j + 282) = 0; /*0x59c4e9*/
            *(unsigned char *)(j + 283) = *((unsigned int *)this + 195); /*0x59c4f6*/
          }
        }
        return 0; /*0x59c50a*/
      }
    }
    else
    {
      v84 = 0; /*0x59bc85*/
      while ( 1 ) /*0x59bc97*/
      {
        v17 = *(unsigned int *)&stru_87F5F0.__pad_58[660] - 1; /*0x59bc97*/
        *(unsigned __int64 *)&v97 = *(unsigned int *)&stru_87F5F0.__pad_58[660]; /*0x59bc9d*/
        __asm /*0x59bca1*/
        {
          fild [esp+90h+var_20]
          fstp [esp+90h+var_8]
        }
        do /*0x59bcdc*/
        {
          *(unsigned __int64 *)&v96 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59bcb6*/
          __asm /*0x59bcc2*/
          {
            fild [esp+90h+var_28]
            fmul [esp+90h+var_8]
            fmul ds:dbl_7ED898
          }
          IDA_LOWORD(v18) = Math::RoundToInt(v8); /*0x59bcd3*/
          v19 = v18; /*0x59bcd8*/
        }
        while ( v18 > v17 ); /*0x59bcdc*/
        v20 = *(unsigned int *)&stru_87F5F0.__pad_58[664] - 1; /*0x59bcec*/
        v92 = *(unsigned int *)&stru_87F5F0.__pad_58[664]; /*0x59bcf2*/
        __asm /*0x59bcf6*/
        {
          fild [esp+90h+var_48]
          fstp [esp+90h+var_8]
        }
        do /*0x59bd2f*/
        {
          v91 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59bd0b*/
          __asm /*0x59bd17*/
          {
            fild [esp+90h+var_50]
            fmul [esp+90h+var_8]
            fmul ds:dbl_7ED898
          }
          IDA_LOWORD(v21) = Math::RoundToInt(v8); /*0x59bd28*/
        }
        while ( v21 > v20 ); /*0x59bd2f*/
        IDA_HIWORD(v93) = -v19; /*0x59bd3c*/
        IDA_HIWORD(v94) = *(unsigned short *)&stru_87F5F0.__pad_58[660]; /*0x59bd41*/
        IDA_LOWORD(v95) = v19 + 1; /*0x59bd51*/
        IDA_WORD1(v95) = *(unsigned short *)&stru_87F5F0.__pad_58[660] - v19; /*0x59bd56*/
        v22 = v21 + v19 + 1; /*0x59bd63*/
        v23 = *(unsigned short *)&stru_87F5F0.__pad_58[660] - v19 + v21; /*0x59bd65*/
        IDA_LOWORD(v88) = v22; /*0x59bd67*/
        IDA_HIWORD(v88) = v23; /*0x59bd6c*/
        *(unsigned int *)v80 = v88; /*0x59bd75*/
        if ( ++v84 >= 200 ) /*0x59bd88*/
          return 0; /*0x59bde1*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x59bd92*/
        {
          if ( !*(unsigned int *)(80 * (v22 + g_MapCellWidth * v23) + g_MissionQueueFrame.localVariables[163] + 56) ) /*0x59bdad*/
          {
            v24 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v80)); /*0x59bdc3*/
            if ( (unsigned __int8)((Cell *)v24)->IsGroundTypeRange() ) /*0x59bdca*/
            {
              if ( v84 < 200 ) /*0x59bddf*/
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
int GrowTiberium()
{
    int v2; // eax
    int v3; // edi
    int v4; // edi
    char result; // al
    int v6; // [esp+Ch] [ebp-4h] BYREF

    v2 = this->RandomMap_field_0x3C[0]; /*0x59c594*/
    ++*((unsigned int *)this + 194); /*0x59c59b*/
    if ( (v2 == 3 || v2 == 4) && *(int *)this->__pad_4C > 20 ) /*0x59c5ac*/
    {
      v3 = 0; /*0x59c5ae*/
      while ( v3 < 10 ) /*0x59c5b5*/
      {
        v6 = 0; /*0x59c5c1*/
        ++v3; /*0x59c5d0*/
        if ( ((Tiberium *)this)->ProcessGrowth( (int)&v6, 0.0, 0) ) /*0x59c5cb*/
        {
          ++*((unsigned int *)this + 194); /*0x59c5db*/
          break; /*0x59c5db*/
        }
      }
    }
    v4 = 0; /*0x59c5e1*/
    result = 0; /*0x59c5e3*/
    while ( v4 < 10 ) /*0x59c5e8*/
    {
      v6 = 0; /*0x59c5ee*/
      result = ((TiberiumClass *)this)->Grow( &v6); /*0x59c5fb*/
      ++v4; /*0x59c600*/
      if ( result ) /*0x59c603*/
      {
        ++*((unsigned int *)this + 194); /*0x59c605*/
        return result; /*0x59c605*/
      }
    }
    return result; /*0x59c60b*/
}
}
// 0x5A0700
namespace gamemd {
unsigned int * CellListAlloc(int a2)
{
    VectorClass *v3; // eax
    VectorClass *v4; // ebx
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
    unsigned int *v20; // edx
    bool v21; // zf
    VectorClass *v23; // [esp+Ch] [ebp-10h]
    int v24; // [esp+10h] [ebp-Ch]
    int v25; // [esp+18h] [ebp-4h]

    v3 = (VectorClass *)RA2_OPNEW(0x18u); /*0x5a070a*/
    v4 = v3; /*0x5a070f*/
    if ( v3 ) /*0x5a0718*/
    {
      ((VectorClass *)v3)->CellConstructor( 0, 0); /*0x5a071e*/
      v4->vtable0 = (void*)&DynamicVectorClass_Cell_vftable; /*0x5a0723*/
      v4[1].Items = (void *)10; /*0x5a0729*/
      v4[1].vtable0 = 0; /*0x5a0730*/
    }
    else
    {
      v4 = (VectorClass *)(0); /*0x5a0735*/
    }
    v23 = v4; /*0x5a073d*/
    v4[1].Items = (void *)(*(unsigned int *)&this->__pad_4C[308] * *(unsigned int *)&this->__pad_4C[312]); /*0x5a0748*/
    v5 = g_MapCellWidth; /*0x5a074b*/
    if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x5a0758*/
      return &v4->vtable0; /*0x5a08c1*/
    v6 = g_MissionQueueFrame.localVariables[163]; /*0x5a075f*/
    v24 = 0; /*0x5a0765*/
    v25 = g_MapCellWidth * g_MapCellWidth; /*0x5a0769*/
    while ( 2 )
    {
      v7 = *(unsigned int *)(v24 + v6); /*0x5a0775*/
      v8 = IDA_HIWORD(v7); /*0x5a0780*/
      if ( !v7 ) /*0x5a0788*/
        goto LABEL_33; /*0x5a0788*/
      v9 = v6 ? *(unsigned int *)(80 * ((__int16)v7 + v5 * IDA_SHIWORD(v7)) + v6 + 56) : -1;
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
        v16 = *(unsigned int *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a082f*/
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
          if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v23->vtable0 + 2))( /*0x5a087e*/
                 v23,
                 Capacity + Items,
                 0) )
          {
  LABEL_31:
            vtable0 = v23[1].vtable0; /*0x5a0885*/
            v20 = v23->Items; /*0x5a0888*/
            v23[1].vtable0 = (char *)vtable0 + 1; /*0x5a088e*/
            v20[(unsigned int)vtable0] = v7; /*0x5a0891*/
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
int SpreadArea(MouseClass * aP1, float a3, MapResourceClass * aP3, short * a4, char a6)
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
    unsigned int *v18; // eax
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
    RandomMap *v53; // ebx
    __int16 v54; // ax
    RandomMap *v55; // edi
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

    v8 = *(unsigned int *)&this->__pad_4C[308]; /*0x5a08de*/
    p_RandomMap_field_0x8 = this; /*0x5a08e4*/
    v9 = 2 * *(unsigned int *)&this->__pad_4C[312] * v8; /*0x5a08f4*/
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
      Block = (void *)(0); /*0x5a091e*/
    }
    v11 = (Heap *)RA2_OPNEW(0x14u); /*0x5a0929*/
    if ( v11 ) /*0x5a0930*/
    {
      v12 = 2 * *(unsigned int *)&this->__pad_4C[312] * *(unsigned int *)&this->__pad_4C[308]; /*0x5a093f*/
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
          *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * v15 - 4) = 0; /*0x5a097a*/
        }
        while ( v15 <= *(unsigned int *)&v11[1] ); /*0x5a0983*/
      }
    }
    else
    {
      v11 = (Heap *)(0); /*0x5a0987*/
    }
    v16 = (int *)(a4); /*0x5a0989*/
    v91 = 0; /*0x5a098c*/
    v87 = 1; /*0x5a0990*/
    v100 = 0.0; /*0x5a0995*/
    if ( *a4 ) /*0x5a099d*/
    {
      v100 = 0.0; /*0x5a09b0*/
    }
    else if ( a4[2] != 512 ) /*0x5a09c5*/
    {
      v100 = 3.141592653589793; /*0x5a09c7*/
    }
    if ( a4[1] ) /*0x5a09d7*/
    {
      v100 = 4.71238898038469; /*0x5a09dc*/
    }
    else if ( a4[3] != 512 ) /*0x5a09f1*/
    {
      v100 = 1.570796326794897; /*0x5a09f3*/
    }
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a0a08*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a0a19*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      v96 = *(unsigned int *)(i + 36); /*0x5a0a1e*/
      *(unsigned int *)(80 * ((__int16)v96 + g_MapCellWidth * IDA_SHIWORD(v96)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0a43*/
    }
    v18 = ((RandomMap *)p_RandomMap_field_0x8)->CellListAlloc( a2); /*0x5a0a58*/
    v19 = v18[4]; /*0x5a0a5d*/
    *(unsigned int *)v90 = (unsigned int)v18; /*0x5a0a60*/
    v88 = (CellStruct *)v19; /*0x5a0a66*/
    v92 = 0; /*0x5a0a6a*/
    if ( v19 > 0 ) /*0x5a0a6e*/
    {
      v20 = (RandomMap *)Block; /*0x5a0a74*/
      while ( 1 ) /*0x5a0a83*/
      {
        v21 = *v16; /*0x5a0a83*/
        v94 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v90->q010 + 4 * v92); /*0x5a0a88*/
        v22 = IDA_SHIWORD(v94); /*0x5a0a8c*/
        v23 = (__int16)v94; /*0x5a0a91*/
        if ( (__int16)v94 >= v21 ) /*0x5a0a96*/
        {
          if ( (__int16)v94 >= v21 + v16[2] ) /*0x5a0aa3*/
            goto LABEL_48; /*0x5a0aa3*/
          v16 = (int *)(a4); /*0x5a0aa9*/
          v24 = a4[1]; /*0x5a0aac*/
          if ( IDA_SHIWORD(v94) >= v24 ) /*0x5a0ab1*/
            break; /*0x5a0ab1*/
        }
  LABEL_49:
        if ( ++v92 >= (int)v88 ) /*0x5a0c28*/
        {
          v18 = *(unsigned int **)v90; /*0x5a0c2e*/
          goto LABEL_51; /*0x5a0c2e*/
        }
      }
      if ( IDA_SHIWORD(v94) < v24 + a4[3] ) /*0x5a0abe*/
      {
        *(unsigned int *)v20->__pad_0 = v94; /*0x5a0ac8*/
        v25 = (RandomMap *)(v23 - *a5); /*0x5a0ad2*/
        v26 = v22 - a5[1]; /*0x5a0ad8*/
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
        v98 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0b5f*/
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
        v32 = *(unsigned int *)v11 + 1; /*0x5a0ba7*/
        IDA_LODWORD(v97) = *(unsigned int *)&v30->RandomMap_field_0x2[2]; /*0x5a0ba8*/
        v33 = v32 >> 1; /*0x5a0bb1*/
        if ( v32 < *(unsigned int *)&v11[1] ) /*0x5a0bb5*/
        {
          if ( v32 <= 1 ) /*0x5a0bba*/
          {
            v16 = (int *)(a4); /*0x5a0bf4*/
          }
          else
          {
            do /*0x5a0bda*/
            {
              v34 = v11[2]; /*0x5a0bbc*/
              _EBX = *(unsigned int *)(*(unsigned int *)&v34 + 4 * v33); /*0x5a0bbf*/
              __asm /*0x5a0bc2*/
              {
                fld dword ptr [ebx+4]
                fcomp dword ptr [esp+58h+var_2C+4]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x5a0bce*/
                break; /*0x5a0bce*/
              *(unsigned int *)(*(unsigned int *)&v34 + 4 * v32) = _EBX; /*0x5a0bd0*/
              v32 = v33; /*0x5a0bd3*/
              v33 >>= 1; /*0x5a0bd5*/
            }
            while ( v32 > 1 ); /*0x5a0bda*/
            v16 = (int *)(a4); /*0x5a0bdc*/
            v30 = (RandomMap *)v96; /*0x5a0bdf*/
            v20 = p_RandomMap_field_0x8; /*0x5a0be3*/
          }
          *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * v32) = (unsigned int)v30; /*0x5a0bfa*/
          v37 = v11[3]; /*0x5a0bff*/
          ++*(unsigned int *)v11; /*0x5a0c05*/
          if ( (unsigned int)v30 > *(unsigned int *)&v37 ) /*0x5a0c07*/
            v11[3] = (Heap)v30; /*0x5a0c09*/
          if ( (unsigned int)v30 < *(unsigned int *)&v11[4] ) /*0x5a0c0f*/
            v11[4] = (Heap)v30; /*0x5a0c11*/
          goto LABEL_49; /*0x5a0c14*/
        }
      }
  LABEL_48:
      v16 = (int *)(a4); /*0x5a0c16*/
      goto LABEL_49; /*0x5a0c16*/
    }
  LABEL_51:
    if ( v18 ) /*0x5a0c36*/
      (*(void (**)(unsigned int *, int))*v18)( (unsigned int *)(v18), 1); /*0x5a0c3e*/
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
    *(unsigned __int64 *)&v99 = (unsigned int)(v39 / 2 + 1); /*0x5a0c8d*/
    __asm /*0x5a0c91*/
    {
      fild qword ptr [esp+58h+var_18]
      fstp [esp+58h+var_8]
    }
    do /*0x5a0cc0*/
    {
      *(unsigned __int64 *)&v99 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0ca3*/
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
      v44 = *(CellStruct **)(*(unsigned int *)&v43 + 4); /*0x5a0ce2*/
      *(unsigned int *)(*(unsigned int *)&v43 + 4) = *(unsigned int *)(*(unsigned int *)&v43 + 4 * *(unsigned int *)v11); /*0x5a0ce5*/
      *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * (*(unsigned int *)v11)--) = 0; /*0x5a0ced*/
      Heap::SiftDown(v11, 1); /*0x5a0cf7*/
      v89 = v44; /*0x5a0cfc*/
      v42 = (__int16 *)v44; /*0x5a0d00*/
    }
    else
    {
      v42 = (__int16 *)(0); /*0x5a0cd2*/
      v89 = (CellStruct *)(0); /*0x5a0cd4*/
    }
    v94 = 0; /*0x5a0d06*/
    if ( v92 <= 0 ) /*0x5a0d0c*/
      goto LABEL_113; /*0x5a0d0c*/
    while ( v87 && v42 ) /*0x5a0d26*/
    {
      v45 = g_MissionQueueFrame.localVariables[163] + 80 * (*v42 + g_MapCellWidth * v42[1]); /*0x5a0d48*/
      if ( !*(unsigned int *)(v45 + 56) ) /*0x5a0d4a*/
      {
        v46 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v42)); /*0x5a0d57*/
        if ( (unsigned __int8)((Cell *)v46)->IsEmpty() ) /*0x5a0d5e*/
        {
          *(unsigned char *)(v45 + 75) = 1; /*0x5a0d6a*/
          *(unsigned int *)(v45 + 56) = a2; /*0x5a0d6e*/
        }
        v42 = (__int16 *)v89; /*0x5a0d71*/
      }
      v47 = 0; /*0x5a0d7d*/
      v96 = 0; /*0x5a0d82*/
      p_RandomMap_field_0x8 = (RandomMap *)((char *)Block + 8 * v91); /*0x5a0d86*/
      while ( 1 ) /*0x5a0df4*/
      {
        IDA_LODWORD(v97) = *CellStruct::Add(((CellStruct *)v42), (unsigned int *)(&v99), (unsigned short *)(4 * (v47 & 7) + 9041544)); /*0x5a0dad*/
        *(unsigned int *)v90 = IDA_LODWORD(v97); /*0x5a0db1*/
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
        if ( !*(unsigned int *)(v50 + 56) && *(unsigned int *)(v50 + 60) != a2 && SLOWORD(v97) >= *a4 ) /*0x5a0e2d*/
        {
          if ( SLOWORD(v97) < *a4 + a4[2] ) /*0x5a0e3a*/
          {
            v51 = a4[1]; /*0x5a0e40*/
            if ( IDA_SWORD1(v97) >= v51 && IDA_SWORD1(v97) < v51 + a4[3] ) /*0x5a0e52*/
            {
              v52 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v90)); /*0x5a0e62*/
              if ( (unsigned __int8)((Cell *)v52)->IsEmpty() ) /*0x5a0e69*/
              {
                v53 = p_RandomMap_field_0x8; /*0x5a0e76*/
                v54 = v90[0]; /*0x5a0e7a*/
                *(unsigned int *)p_RandomMap_field_0x8->__pad_0 = *(unsigned int *)v90; /*0x5a0e81*/
                v56 = v90[1] - a5[1]; /*0x5a0e94*/
                p_RandomMap_field_0x8 = (RandomMap *)(v54 - *a5); /*0x5a0e98*/
                v55 = p_RandomMap_field_0x8; /*0x5a0e92*/
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
                  if ( (int)v55 < 0 ) /*0x5a0ec0*/
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
                *(unsigned __int64 *)&v101 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a0f1b*/
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
                *(float *)&v53->RandomMap_field_0x2[2] = _ET1; /*0x5a0f4f*/
                *(unsigned int *)(80 * (v61 + g_MapCellWidth * v60) + g_MissionQueueFrame.localVariables[163] + 60) = a2; /*0x5a0f6a*/
                v63 = v53; /*0x5a0f73*/
                ++v91; /*0x5a0f75*/
                v64 = *(unsigned int *)v11 + 1; /*0x5a0f81*/
                IDA_LODWORD(v98) = *(unsigned int *)&v53->RandomMap_field_0x2[2]; /*0x5a0f82*/
                v65 = (unsigned int)v11[1]; /*0x5a0f86*/
                v66 = v64 >> 1; /*0x5a0f8b*/
                IDA_LODWORD(v97) = v53; /*0x5a0f8f*/
                p_RandomMap_field_0x8 = (RandomMap *)&v53->RandomMap_field_0x8; /*0x5a0f93*/
                if ( v64 < v65 ) /*0x5a0f97*/
                {
                  if ( v64 > 1 ) /*0x5a0fa0*/
                  {
                    do /*0x5a0fc0*/
                    {
                      v67 = v11[2]; /*0x5a0fa2*/
                      _EBX = *(unsigned int *)(*(unsigned int *)&v67 + 4 * v66); /*0x5a0fa5*/
                      __asm /*0x5a0fa8*/
                      {
                        fld dword ptr [ebx+4]
                        fcomp dword ptr [esp+58h+var_20]
                        fnstsw ax
                      }
                      if ( (_AX & 0x4100) != 0 ) /*0x5a0fb4*/
                        break; /*0x5a0fb4*/
                      *(unsigned int *)(*(unsigned int *)&v67 + 4 * v64) = _EBX; /*0x5a0fb6*/
                      v64 = v66; /*0x5a0fb9*/
                      v66 >>= 1; /*0x5a0fbb*/
                    }
                    while ( v64 > 1 ); /*0x5a0fc0*/
                    v63 = (RandomMap *)IDA_LODWORD(v97); /*0x5a0fc2*/
                  }
                  *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * v64) = (unsigned int)v63; /*0x5a0fc9*/
                  v70 = v11[3]; /*0x5a0fce*/
                  ++*(unsigned int *)v11; /*0x5a0fd4*/
                  if ( (unsigned int)v63 > *(unsigned int *)&v70 ) /*0x5a0fd6*/
                    v11[3] = (Heap)v63; /*0x5a0fd8*/
                  if ( (unsigned int)v63 < *(unsigned int *)&v11[4] ) /*0x5a0fde*/
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
          v71 = *(unsigned int *)(80 * (v90[0] + g_MapCellWidth * v90[1]) + v49 + 56); /*0x5a1013*/
          if ( !v71 ) /*0x5a1019*/
            goto LABEL_108; /*0x5a1019*/
        }
        else
        {
  LABEL_105:
          v71 = -1; /*0x5a101d*/
        }
        if ( v71 != a2 ) /*0x5a1023*/
          v87 = 0; /*0x5a1025*/
  LABEL_108:
        v47 = v96 + 2; /*0x5a102e*/
        v96 += 2; /*0x5a1034*/
        if ( v96 >= 8 ) /*0x5a1038*/
          break; /*0x5a1038*/
        v42 = (__int16 *)v89; /*0x5a0d8c*/
      }
      ++v94; /*0x5a1043*/
      Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a104c*/
      __asm { fmul ds:dbl_7E3D88 } /*0x5a1051*/
      v72 = *(unsigned int *)v11;
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
        v75 = *(CellStruct **)(*(unsigned int *)&v74 + 4); /*0x5a1073*/
        *(unsigned int *)(*(unsigned int *)&v74 + 4) = *(unsigned int *)(*(unsigned int *)&v74 + 4 * *(unsigned int *)&v72); /*0x5a1076*/
        *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * (*(unsigned int *)v11)--) = 0; /*0x5a107e*/
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
        v77 = *(__int16 **)(*(unsigned int *)&v76 + 4); /*0x5a10c2*/
        *(unsigned int *)(*(unsigned int *)&v76 + 4) = *(unsigned int *)(*(unsigned int *)&v76 + 4 * *(unsigned int *)v11); /*0x5a10c5*/
        *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * (*(unsigned int *)v11)--) = 0; /*0x5a10cd*/
        Heap::SiftDown(v11, 1); /*0x5a10db*/
        v78 = v77; /*0x5a10e2*/
        if ( v77 ) /*0x5a10e4*/
        {
          while ( v87 ) /*0x5a10ef*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a10f9*/
            {
              v79 = 80 * (*v78 + g_MapCellWidth * v78[1]); /*0x5a110e*/
              v80 = *(unsigned int *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1111*/
              v81 = (int *)(v79 + g_MissionQueueFrame.localVariables[163] + 56); /*0x5a1115*/
              if ( !v80 ) /*0x5a111b*/
              {
                *v81 = a2; /*0x5a111d*/
                goto LABEL_123; /*0x5a111f*/
              }
            }
            else
            {
              v80 = -1; /*0x5a1121*/
            }
            if ( v80 != a2 ) /*0x5a1126*/
              v87 = 0; /*0x5a1128*/
  LABEL_123:
            if ( !*(unsigned int *)v11 ) /*0x5a112d*/
              break; /*0x5a112d*/
            v82 = v11[2]; /*0x5a1133*/
            v83 = *(__int16 **)(*(unsigned int *)&v82 + 4); /*0x5a113b*/
            *(unsigned int *)(*(unsigned int *)&v82 + 4) = *(unsigned int *)(*(unsigned int *)&v82 + 4 * *(unsigned int *)v11); /*0x5a113e*/
            *(unsigned int *)(*(unsigned int *)&v11[2] + 4 * (*(unsigned int *)v11)--) = 0; /*0x5a1148*/
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
int PlaceRandomMapTiberium()
{
    double v1; // st7
    __int16 v3; // bx
    int v4; // eax
    int v5; // ecx
    int result; // eax
    __int16 v8; // bp
    int v9; // esi
    int v10; // ecx
    __int16 v11; // bx
    unsigned int v12; // eax
    unsigned int v13; // esi
    int v14; // ecx
    int v15; // esi
    int v16; // ebp
    int v17; // eax
    int v19; // eax
    int v21; // eax
    int v22; // ecx
    int v23; // ebx
    int v24; // esi
    int v27; // eax
    int *Waypoint_Location; // eax
    int v29; // ecx
    int v30; // eax
    int v31; // esi
    int v32; // ebx
    int v33; // ebp
    int v34; // eax
    int v35; // eax
    int v37; // eax
    double *v38; // ecx
    int v40; // ebx
    int v43; // esi
    int v45; // ebp
    int v46; // eax
    int v48; // ebp
    int v49; // eax
    __int16 *v50; // eax
    int v51; // [esp-4h] [ebp-9Ch]
    double v52; // [esp+0h] [ebp-98h]
    double v53; // [esp+0h] [ebp-98h]
    bool v54; // [esp+1Fh] [ebp-79h]
    int v55; // [esp+20h] [ebp-78h]
    RandomMap *v56; // [esp+24h] [ebp-74h]
    int v57; // [esp+28h] [ebp-70h]
    int v58; // [esp+28h] [ebp-70h]
    int v59; // [esp+28h] [ebp-70h]
    int v61; // [esp+34h] [ebp-64h]
    int v62; // [esp+34h] [ebp-64h]
    char v63; // [esp+38h] [ebp-60h]
    int v64; // [esp+3Ch] [ebp-5Ch]
    int v66; // [esp+40h] [ebp-58h]
    int v67; // [esp+40h] [ebp-58h]
    int v68; // [esp+40h] [ebp-58h]
    int v69; // [esp+40h] [ebp-58h]
    int v70; // [esp+40h] [ebp-58h]
    char v72[4]; // [esp+4Ch] [ebp-4Ch] BYREF
    char v73[4]; // [esp+50h] [ebp-48h] BYREF
    char v74[4]; // [esp+54h] [ebp-44h] BYREF
    double v75; // [esp+58h] [ebp-40h]
    double v76; // [esp+60h] [ebp-38h]
    double v77; // [esp+68h] [ebp-30h]
    __int64 v78; // [esp+70h] [ebp-28h]
    __int64 v79; // [esp+78h] [ebp-20h]
    void **v80; // [esp+80h] [ebp-18h] BYREF
    void *Block; // [esp+84h] [ebp-14h]
    int v82; // [esp+88h] [ebp-10h]
    char v83; // [esp+8Dh] [ebp-Bh]
    int v84; // [esp+90h] [ebp-8h]
    int v85; // [esp+94h] [ebp-4h]

    _ESI = this; /*0x5a23af*/
    v3 = 0; /*0x5a23b1*/
    v4 = this->RandomMap_field_0x3C[0]; /*0x5a23b4*/
    v5 = this->RandomMap_field_0x40[0]; /*0x5a23b7*/
    v56 = _ESI; /*0x5a23bd*/
    v55 = 0; /*0x5a23c1*/
    switch ( v4 ) /*0x5a23c7*/
    {
      case 0: /*0x5a23c7*/
        v54 = v5 == 3; /*0x5a23d1*/
        break; /*0x5a23d6*/
      case 1: /*0x5a23c7*/
      case 3: /*0x5a23c7*/
      case 4: /*0x5a23c7*/
        v54 = v5 != 3; /*0x5a23db*/
        break; /*0x5a23e0*/
      case 2: /*0x5a23c7*/
        v54 = 1; /*0x5a23e2*/
        break; /*0x5a23e7*/
      default:
        v54 = 0; /*0x5a23e9*/
        break; /*0x5a23e9*/
    }
    result = 0; /*0x5a23f4*/
    v64 = 0; /*0x5a23f8*/
    if ( g_MissionQueueFrame.briefing[342] > 0 ) /*0x5a23fc*/
    {
      while ( 1 ) /*0x5a240c*/
      {
        _EDI = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * result); /*0x5a240c*/
        if ( *_EDI ) /*0x5a240f*/
        {
          v61 = -1; /*0x5a241b*/
          if ( v54 ) /*0x5a2425*/
          {
            v8 = 0; /*0x5a242e*/
            if ( (int)*(unsigned char *)(_EDI.v + 8) <= 0 ) /*0x5a2433*/
            {
              v13 = *(unsigned char *)(_EDI.v + 14) - 1; /*0x5a2484*/
              v78 = (unsigned int)*(unsigned char *)(_EDI.v + 14); /*0x5a2488*/
              __asm /*0x5a248c*/
              {
                fild [esp+90h+var_28]
                fstp qword ptr [esp+90h+var_58]
              }
              do /*0x5a24bb*/
              {
                v79 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a249e*/
                __asm /*0x5a24a6*/
                {
                  fild [esp+90h+var_20]
                  fmul qword ptr [esp+90h+var_58]
                  fmul ds:dbl_7ED898
                }
                IDA_LOWORD(v12) = Math::RoundToInt(v1); /*0x5a24b4*/
              }
              while ( v12 > v13 ); /*0x5a24bb*/
              v57 = *(unsigned int *)(*(unsigned char *)(_EDI.v + 11) + 4 * v12); /*0x5a24c3*/
              IDA_LOWORD(v12) = IDA_HIWORD(v57); /*0x5a24c7*/
              v11 = v57; /*0x5a24cc*/
            }
            else
            {
              v9 = 0; /*0x5a2435*/
              do /*0x5a2467*/
              {
                IDA_LODWORD(v75) = *((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(v72), v9 + v55); /*0x5a2455*/
                v8 += IDA_WORD1(v75); /*0x5a2459*/
                v3 += IDA_LOWORD(v75); /*0x5a245e*/
                ++v9; /*0x5a2464*/
              }
              while ( v9 < *(unsigned char *)(_EDI.v + 8) ); /*0x5a2467*/
              v10 = *(unsigned char *)(_EDI.v + 8); /*0x5a2469*/
              v11 = v3 / v10; /*0x5a2472*/
              v12 = v8 / v10; /*0x5a2479*/
            }
            v14 = *_EDI; /*0x5a24cf*/
            v15 = 0; /*0x5a24d1*/
            v58 = 500000; /*0x5a24d3*/
            if ( *(int *)(*_EDI + 16) > 0 ) /*0x5a24e0*/
            {
              v16 = (__int16)v12; /*0x5a24e5*/
              do /*0x5a2546*/
              {
                v17 = *(unsigned int *)(*(unsigned int *)(v14 + 4) + 4 * v15); /*0x5a24ee*/
                v66 = ((__int16)v17 - v11) * ((__int16)v17 - v11) + (IDA_SHIWORD(v17) - v16) * (IDA_SHIWORD(v17) - v16); /*0x5a250d*/
                __asm /*0x5a2511*/
                {
                  fild [esp+98h+var_58]
                  fstp [esp+98h+var_98]; double
                }
                Math::Sqrt(v52); /*0x5a2518*/
                __asm /*0x5a251d*/
                {
                  fild dword ptr [esp+98h+var_70]
                  fld st(1)
                }
                __asm
                {
                  fcompp
                  fnstsw ax
                }
                if ( (_AX & 0x100) != 0 ) /*0x5a252d*/
                {
                  IDA_LOWORD(v19) = Math::RoundToInt(v1); /*0x5a252f*/
                  v58 = v19; /*0x5a2534*/
                  v61 = v15; /*0x5a2538*/
                }
                else
                {
                  __asm { fstp st } /*0x5a253e*/
                }
                v14 = *_EDI; /*0x5a2540*/
                ++v15; /*0x5a2542*/
              }
              while ( v15 < *(unsigned int *)(*_EDI + 16) ); /*0x5a2546*/
            }
            _ESI = v56; /*0x5a2548*/
          }
          __asm { fild dword ptr [esi+54h] } /*0x5a2558*/
          v59 = *(unsigned int *)(_ESI.v + 1).__pad_4C[96]; /*0x5a255d*/
          v67 = *(unsigned int *)(_ESI.v + 1).__pad_4C[100] - v59; /*0x5a2561*/
          __asm /*0x5a2565*/
          {
            fmul ds:dbl_7E3808
            fild [esp+90h+var_58]
            fmulp st(1), st
            fiadd dword ptr [esp+90h+var_70]
          }
          IDA_LOWORD(_EAX) = Math::RoundToInt(v1); /*0x5a2575*/
          __asm /*0x5a257a*/
          {
            fild dword ptr [edi+20h]
            fld ds:dbl_7E1738
          }
          v68 = _EAX; /*0x5a2583*/
          __asm /*0x5a2587*/
          {
            fcomp st(1)
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x5a258e*/
          {
            __asm /*0x5a2590*/
            {
              fstp st
              fld ds:dbl_7E1738
            }
          }
          __asm /*0x5a2598*/
          {
            fild [esp+90h+var_58]
            fmul st, st(1)
          }
          IDA_LOWORD(v21) = Math::RoundToInt(v1); /*0x5a259e*/
          __asm { fstp st } /*0x5a25a5*/
          v22 = *(unsigned int *)(*_EDI + 16); /*0x5a25a7*/
          if ( v22 && v21 ) /*0x5a25b4*/
          {
            v23 = 0; /*0x5a25bd*/
            v24 = 0; /*0x5a25bf*/
            v69 = v21 / v22; /*0x5a25c3*/
            if ( v22 > 0 ) /*0x5a25c7*/
            {
              do /*0x5a2638*/
              {
                do /*0x5a25f9*/
                {
                  do /*0x5a25e8*/
                  {
                    Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a25ce*/
                    __asm /*0x5a25d3*/
                    {
                      fmul ds:dbl_7E4F50
                      fst [esp+90h+var_70]
                      fcomp ds:dbl_7EDA88
                      fnstsw ax
                    }
                  }
                  while ( (_AX & 0x100) != 0 ); /*0x5a25e8*/
                  __asm /*0x5a25ea*/
                  {
                    fld [esp+90h+var_70]
                    fcomp ds:dbl_7E2AC0
                    fnstsw ax
                  }
                }
                while ( (_AX & 0x4100) == 0 ); /*0x5a25f9*/
                __asm /*0x5a25fb*/
                {
                  fild [esp+90h+var_58]
                  fadd [esp+90h+var_70]
                }
                IDA_LOWORD(v27) = Math::RoundToInt(v1); /*0x5a2603*/
                if ( v27 >= 0 ) /*0x5a260a*/
                  Terrain::PlaceTiberiumTrees( /*0x5a262d*/
                    (__int16 *)(*(unsigned int *)(*_EDI + 4) + 4 * v24),
                    v27,
                    v24 + v55 + 1,
                    v24 == v61);
                ++v24; /*0x5a2634*/
              }
              while ( v24 < *(unsigned int *)(*_EDI + 16) ); /*0x5a2638*/
            }
            ((RandomMap *)&v80)->Constructor_1( 0, 0); /*0x5a2643*/
            v80 = (void*)&DynamicVectorClass_double_vftable; /*0x5a2648*/
            v85 = 10; /*0x5a2650*/
            v84 = 0; /*0x5a265b*/
            v62 = 0; /*0x5a2667*/
            if ( (int)*(unsigned char *)(_EDI.v + 8) > 0 ) /*0x5a266b*/
            {
              do /*0x5a2779*/
              {
                v77 = 0.0; /*0x5a2679*/
                Waypoint_Location = ((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(v73), v23 + v55); /*0x5a2694*/
                v29 = *_EDI; /*0x5a2699*/
                v30 = *Waypoint_Location; /*0x5a269b*/
                v31 = 0; /*0x5a269d*/
                if ( *(int *)(*_EDI + 16) > 0 ) /*0x5a26a8*/
                {
                  v32 = IDA_SHIWORD(v30); /*0x5a26aa*/
                  v33 = (__int16)v30; /*0x5a26af*/
                  do /*0x5a26fa*/
                  {
                    v34 = *(unsigned int *)(*(unsigned int *)(v29 + 4) + 4 * v31); /*0x5a26b8*/
                    v70 = ((__int16)v34 - v33) * ((__int16)v34 - v33) + (IDA_SHIWORD(v34) - v32) * (IDA_SHIWORD(v34) - v32); /*0x5a26d7*/
                    __asm /*0x5a26db*/
                    {
                      fild [esp+98h+var_58]
                      fstp [esp+98h+var_98]; double
                    }
                    Math::Sqrt(v53); /*0x5a26e2*/
                    v29 = *_EDI; /*0x5a26e7*/
                    __asm { fadd [esp+90h+var_30] } /*0x5a26ec*/
                    v35 = *(unsigned int *)(*_EDI + 16); /*0x5a26f0*/
                    ++v31; /*0x5a26f3*/
                    __asm { fstp [esp+90h+var_30] } /*0x5a26f6*/
                  }
                  while ( v31 < v35 ); /*0x5a26fa*/
                  v23 = v62; /*0x5a26fc*/
                }
                _EDX = *_EDI; /*0x5a2700*/
                __asm { fild dword ptr [edx+10h] } /*0x5a2710*/
                __asm
                {
                  fdivr [esp+90h+var_30]
                  fstp qword ptr [esp+90h+var_58]
                }
                if ( v84 < v82 /*0x5a274c*/
                  || (v83 || !v82)
                  && v85 > 0
                  && ((unsigned __int8 (*)(void ***, int, unsigned int))v80[2])(&v80, v85 + v82, 0) )
                {
                  __asm { fld qword ptr [esp+90h+var_58] } /*0x5a275a*/
                  v37 = v84++; /*0x5a275e*/
                  v38 = (double *)Block; /*0x5a2768*/
                  __asm { fstp qword ptr [ecx+eax*8] } /*0x5a276c*/
                  v38[v37] = _RT1; /*0x5a276c*/
                }
                v62 = ++v23; /*0x5a2775*/
              }
              while ( v23 < *(unsigned char *)(_EDI.v + 8) ); /*0x5a2779*/
            }
            v40 = *(unsigned char *)(_EDI.v + 8); /*0x5a277f*/
            _EDX = Block; /*0x5a2782*/
            v76 = 9999999.0; /*0x5a2788*/
            if ( v40 > 0 ) /*0x5a2798*/
            {
              _ECX = Block; /*0x5a279a*/
              v43 = v40; /*0x5a279c*/
              do /*0x5a27bc*/
              {
                __asm /*0x5a279e*/
                {
                  fld qword ptr [ecx]
                  fcomp [esp+90h+var_38]
                  fnstsw ax
                }
                if ( (_AX & 0x100) != 0 ) /*0x5a27a9*/
                {
                  v45 = *(unsigned char *)(_ECX.v + 1); /*0x5a27ad*/
                  IDA_LODWORD(v76) = *_ECX; /*0x5a27b0*/
                  IDA_HIDWORD(v76) = v45; /*0x5a27b4*/
                }
                _ECX += 2; /*0x5a27b8*/
                --v43; /*0x5a27bb*/
              }
              while ( v43 ); /*0x5a27bc*/
            }
            v63 = 0; /*0x5a27da*/
            if ( v56->RandomMap_field_0x40[0] == 3 ) /*0x5a27c6*/
            {
              v46 = v56->RandomMap_field_0x3C[0]; /*0x5a27c8*/
              if ( v46 == 1 || v46 == 3 || v46 == 4 ) /*0x5a27d8*/
                v63 = 1; /*0x5a27c6*/
            }
            _ESI = 0; /*0x5a27e6*/
            if ( v40 > 0 ) /*0x5a27ea*/
            {
              v48 = v55; /*0x5a27ec*/
              do /*0x5a2837*/
              {
                __asm /*0x5a27f4*/
                {
                  fld qword ptr [edx+esi*8]
                  fsub [esp+90h+var_38]
                  fmul ds:dbl_7ED7B0
                }
                IDA_LOWORD(v49) = Math::RoundToInt(v1); /*0x5a2801*/
                v51 = v49 + 500; /*0x5a2816*/
                v50 = (__int16 *)((ScenarioClass *)(char *)dword_A8B230)->Get_Waypoint_Location( (unsigned int *)(v74), v48); /*0x5a281d*/
                Terrain::PlaceTiberiumTrees( (ScenarioClass *)(v50), v51, v48 + 1, v63); /*0x5a2827*/
                _EDX = Block; /*0x5a282f*/
                ++_ESI; /*0x5a2833*/
                ++v48; /*0x5a2834*/
              }
              while ( _ESI < *(unsigned char *)(_EDI.v + 8) ); /*0x5a2837*/
            }
            v55 += *(unsigned char *)(_EDI.v + 8); /*0x5a2846*/
            v80 = (void*)&VectorClass_double_vftable; /*0x5a284a*/
            if ( _EDX ) /*0x5a2852*/
            {
              if ( v83 ) /*0x5a285d*/
              {
                RA2_OPDEL(_EDX); /*0x5a2860*/
                Block = (void *)(0); /*0x5a2868*/
              }
            }
            v82 = 0; /*0x5a286c*/
            _ESI = v56; /*0x5a2873*/
            v83 = 0; /*0x5a2877*/
          }
        }
        result = ++v64; /*0x5a2889*/
        if ( v64 >= g_MissionQueueFrame.briefing[342] ) /*0x5a2890*/
          break; /*0x5a2890*/
        v3 = 0; /*0x5a2404*/
      }
    }
    return result; /*0x5a2896*/
}
}
// 0x5A3AE0
namespace gamemd {
VectorClass_flat * * PlaceResources()
{
    double v1; // st7
    int i; // eax
    int v4; // edi
    unsigned int v5; // eax
    unsigned int v6; // eax
    unsigned int v7; // eax
    int v9; // esi
    int v15; // eax
    int v21; // eax
    int v27; // eax
    CellClass *j; // eax
    int v29; // eax
    int v30; // ebp
    unsigned int v31; // edi
    int v32; // esi
    unsigned short *v33; // eax
    Cell *v34; // eax
    int v35; // eax
    int v40; // eax
    void *v41; // eax
    int v42; // eax
    bool v43; // cc
    unsigned int v44; // esi
    unsigned int v45; // eax
    signed int v46; // ebp
    int result; // eax
    unsigned int v48; // edi
    unsigned int v49; // eax
    unsigned int v50; // esi
    unsigned short *v51; // eax
    RandomMap *v52; // eax
    int v53; // esi
    unsigned int v54; // eax
    unsigned int v55; // eax
    unsigned int v56; // eax
    int v57; // [esp-10h] [ebp-78h]
    int v58; // [esp-Ch] [ebp-74h]
    int v59; // [esp-Ch] [ebp-74h]
    int v60; // [esp-8h] [ebp-70h]
    double v61; // [esp-8h] [ebp-70h]
    unsigned int v62; // [esp+14h] [ebp-54h]
    int v63; // [esp+14h] [ebp-54h]
    int v64; // [esp+14h] [ebp-54h]
    signed int v66; // [esp+18h] [ebp-50h]
    __int16 v67[2]; // [esp+1Ch] [ebp-4Ch] BYREF
    double v68; // [esp+20h] [ebp-48h]
    __int16 v69[2]; // [esp+2Ch] [ebp-3Ch] BYREF
    double v70; // [esp+30h] [ebp-38h] BYREF
    double v71; // [esp+38h] [ebp-30h] BYREF
    double v72; // [esp+40h] [ebp-28h]
    double v73; // [esp+48h] [ebp-20h]
    __int64 v74; // [esp+50h] [ebp-18h]
    double v75; // [esp+58h] [ebp-10h]
    __int64 v76; // [esp+60h] [ebp-8h]

    _ESI = this; /*0x5a3aec*/
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a3af8*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a3b0b*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      IDA_LODWORD(v68) = *(unsigned int *)(i + 36); /*0x5a3b10*/
      *(unsigned int *)(80 * (SLOWORD(v68) + g_MapCellWidth * IDA_SWORD1(v68)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a3b35*/
    }
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a3b47*/
    v4 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a3b56*/
    do /*0x5a3b86*/
    {
      *(unsigned __int64 *)&v73 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3b62*/
      __asm /*0x5a3b6a*/
      {
        fild [esp+68h+var_20]
        fmul ds:dbl_7EDAD0
        fadd ds:dbl_7E44C8
      }
      IDA_LOWORD(v5) = Math::RoundToInt(v1); /*0x5a3b7a*/
      *(unsigned int *)v67 = v5; /*0x5a3b82*/
    }
    while ( v5 > 0x28 ); /*0x5a3b86*/
    do /*0x5a3bb6*/
    {
      *(unsigned __int64 *)&v73 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3b92*/
      __asm /*0x5a3b9a*/
      {
        fild [esp+68h+var_20]
        fmul ds:dbl_7EDAD0
        fadd ds:dbl_7E44C8
      }
      IDA_LOWORD(v6) = Math::RoundToInt(v1); /*0x5a3baa*/
      v62 = v6; /*0x5a3bb2*/
    }
    while ( v6 > 0x28 ); /*0x5a3bb6*/
    do /*0x5a3be6*/
    {
      *(unsigned __int64 *)&v73 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3bc2*/
      __asm /*0x5a3bca*/
      {
        fild [esp+68h+var_20]
        fmul ds:dbl_7EDAD0
        fadd ds:dbl_7E44C8
      }
      IDA_LOWORD(v7) = Math::RoundToInt(v1); /*0x5a3bda*/
      *(unsigned int *)v69 = v7; /*0x5a3be2*/
    }
    while ( v7 > 0x28 ); /*0x5a3be6*/
    if ( v4 ) /*0x5a3bea*/
    {
      while ( 1 ) /*0x5a3bf9*/
      {
        IDA_LODWORD(v68) = *(unsigned int *)(v4 + 36); /*0x5a3bf9*/
        _EBP = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v68) + g_MapCellWidth * IDA_SWORD1(v68)); /*0x5a3c16*/
        if ( !(unsigned __int8)((Cell *)v4)->IsEmpty() /*0x5a3c47*/
          || *(unsigned char *)(v4 + 284)
          || *(unsigned int *)(v4 + 68) != -1
          || *(unsigned int *)(v4 + 228)
          || *(unsigned char *)(_EBP + 69) )
        {
          goto LABEL_35; /*0x5a3c4a*/
        }
        IDA_LODWORD(v68) = *(unsigned int *)(v4 + 36); /*0x5a3c58*/
        v9 = SLOWORD(v68) + (IDA_SWORD1(v68) << 9); /*0x5a3c67*/
        v74 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3c6e*/
        __asm /*0x5a3c76*/
        {
          fild [esp+68h+var_18]
          fmul ds:dbl_7ED898
          fcomp qword ptr [ebp+18h]
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3c88*/
          break; /*0x5a3c88*/
        *(unsigned __int64 *)&v75 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3d49*/
        __asm /*0x5a3d51*/
        {
          fild [esp+68h+var_10]
          fmul ds:dbl_7ED898
          fcomp qword ptr [ebp+28h]
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3d63*/
        {
          __asm { fild [esp+68h+var_54] } /*0x5a3d69*/
          v72 = 20.0; /*0x5a3d6d*/
          __asm /*0x5a3d7d*/
          {
            fstp [esp+68h+var_30]
            fld [esp+68h+var_30]
            fsub ds:dbl_7E44C8
            fcomp ds:dbl_7EDAC8
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x5a3d96*/
            goto LABEL_23; /*0x5a3d96*/
          __asm /*0x5a3d98*/
          {
            fld [esp+68h+var_30]
            fadd ds:dbl_7E44C8
            fcomp ds:dbl_7E3CC8
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x5a3dad*/
          {
  LABEL_23:
            v72 = 38.0; /*0x5a3daf*/
            v71 = 42.0; /*0x5a3dbf*/
          }
          do /*0x5a3e01*/
          {
            do /*0x5a3df0*/
            {
              Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a3dd4*/
              __asm /*0x5a3dd9*/
              {
                fmul [esp+68h+var_28]
                fadd [esp+68h+var_30]
                fst [esp+68h+var_48]
                fcomp ds:dbl_7E3CC8
                fnstsw ax
              }
            }
            while ( (_AX & 0x100) != 0 ); /*0x5a3df0*/
            __asm /*0x5a3df2*/
            {
              fld [esp+68h+var_48]
              fcomp ds:dbl_7EDAC8
              fnstsw ax
            }
          }
          while ( (_AX & 0x4100) == 0 ); /*0x5a3e01*/
          __asm { fld [esp+68h+var_48] } /*0x5a3e03*/
          v60 = v9; /*0x5a3e08*/
          IDA_LOWORD(v21) = Math::RoundToInt(v1); /*0x5a3e09*/
          v58 = v21; /*0x5a3e14*/
          v57 = dword_ABB104; /*0x5a3e15*/
          goto LABEL_34; /*0x5a3e16*/
        }
        v76 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a3e25*/
        __asm /*0x5a3e2d*/
        {
          fild [esp+68h+var_8]
          fmul ds:dbl_7ED898
          fcomp qword ptr [ebp+20h]
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x5a3e3f*/
        {
          __asm { fild dword ptr [esp+68h+var_3C] } /*0x5a3e45*/
          v73 = 20.0; /*0x5a3e49*/
          __asm /*0x5a3e59*/
          {
            fstp [esp+68h+var_30]
            fld [esp+68h+var_30]
            fsub ds:dbl_7E44C8
            fcomp ds:dbl_7EDAC8
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x5a3e72*/
            goto LABEL_30; /*0x5a3e72*/
          __asm /*0x5a3e74*/
          {
            fld [esp+68h+var_30]
            fadd ds:dbl_7E44C8
            fcomp ds:dbl_7E3CC8
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x5a3e89*/
          {
  LABEL_30:
            v73 = 38.0; /*0x5a3e8b*/
            v71 = 42.0; /*0x5a3e9b*/
          }
          do /*0x5a3edd*/
          {
            do /*0x5a3ecc*/
            {
              Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a3eb0*/
              __asm /*0x5a3eb5*/
              {
                fmul [esp+68h+var_20]
                fadd [esp+68h+var_30]
                fst [esp+68h+var_48]
                fcomp ds:dbl_7E3CC8
                fnstsw ax
              }
            }
            while ( (_AX & 0x100) != 0 ); /*0x5a3ecc*/
            __asm /*0x5a3ece*/
            {
              fld [esp+68h+var_48]
              fcomp ds:dbl_7EDAC8
              fnstsw ax
            }
          }
          while ( (_AX & 0x4100) == 0 ); /*0x5a3edd*/
          __asm { fld [esp+68h+var_48] } /*0x5a3edf*/
          v60 = v9; /*0x5a3ee4*/
          IDA_LOWORD(v27) = Math::RoundToInt(v1); /*0x5a3ee5*/
          v58 = v27; /*0x5a3ef0*/
          v57 = dword_AA0E18; /*0x5a3ef1*/
          goto LABEL_34; /*0x5a3ef1*/
        }
  LABEL_35:
        v4 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a3efc*/
        if ( !v4 ) /*0x5a3f0a*/
        {
          _ESI = this; /*0x5a3f10*/
          goto LABEL_37; /*0x5a3f10*/
        }
      }
      __asm { fild dword ptr [esp+68h+var_4C] } /*0x5a3c8e*/
      v70 = 20.0; /*0x5a3c92*/
      __asm /*0x5a3ca2*/
      {
        fstp [esp+68h+var_30]
        fld [esp+68h+var_30]
        fsub ds:dbl_7E44C8
        fcomp ds:dbl_7EDAC8
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a3cbb*/
        goto LABEL_16; /*0x5a3cbb*/
      __asm /*0x5a3cbd*/
      {
        fld [esp+68h+var_30]
        fadd ds:dbl_7E44C8
        fcomp ds:dbl_7E3CC8
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a3cd2*/
      {
  LABEL_16:
        v70 = 38.0; /*0x5a3cd4*/
        v71 = 42.0; /*0x5a3ce4*/
      }
      do /*0x5a3d26*/
      {
        do /*0x5a3d15*/
        {
          Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a3cf9*/
          __asm /*0x5a3cfe*/
          {
            fmul [esp+68h+var_38]
            fadd [esp+68h+var_30]
            fst [esp+68h+var_48]
            fcomp ds:dbl_7E3CC8
            fnstsw ax
          }
        }
        while ( (_AX & 0x100) != 0 ); /*0x5a3d15*/
        __asm /*0x5a3d17*/
        {
          fld [esp+68h+var_48]
          fcomp ds:dbl_7EDAC8
          fnstsw ax
        }
      }
      while ( (_AX & 0x4100) == 0 ); /*0x5a3d26*/
      __asm { fld [esp+68h+var_48] } /*0x5a3d28*/
      v60 = v9; /*0x5a3d2d*/
      IDA_LOWORD(v15) = Math::RoundToInt(v1); /*0x5a3d2e*/
      v58 = v15; /*0x5a3d33*/
      v57 = dword_ABC2B8; /*0x5a3d39*/
  LABEL_34:
      FloodFillPathfinding(v4, v57, v58, v60, 0); /*0x5a3ef2*/
      goto LABEL_35; /*0x5a3ef7*/
    }
  LABEL_37:
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a3f14*/
    for ( j = (CellClass *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a3f2a*/
          j;
          j = (CellClass *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      CellClass::DetermineTileType(j); /*0x5a3f2e*/
    }
    __asm /*0x5a3f41*/
    {
      fild dword ptr [esi+64h]
      fmul ds:dbl_7E3860
      fadd ds:dbl_7EDAC0
      fild dword ptr [esi+5Ch]
      fmul ds:dbl_7E3808
      fmulp st(1), st
      fimul dword ptr [esi+2FCh]
    }
    IDA_LOWORD(v29) = Math::RoundToInt(v1); /*0x5a3f61*/
    IDA_LODWORD(v68) = v29; /*0x5a3f68*/
    v63 = 0; /*0x5a3f6c*/
    if ( v29 > 0 ) /*0x5a3f70*/
    {
      do /*0x5a40bd*/
      {
        if ( v63 >= 100 ) /*0x5a3f7b*/
          break; /*0x5a3f7b*/
        v30 = 0; /*0x5a3f81*/
        do /*0x5a3fe9*/
        {
          v31 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a3f8b*/
          do /*0x5a3fb3*/
          {
            v32 = Range_RandomInt(0, v31); /*0x5a3f9d*/
            v33 = (unsigned short *)((CellStruct *)&v70)->Set( 0, 0); /*0x5a3f9f*/
          }
          while ( (unsigned __int8)CellStruct::Equals( /*0x5a3fb3*/
                                     (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v32),
                                     v33) );
          ++v30; /*0x5a3fc8*/
          *(unsigned int *)v67 = *(unsigned int *)(80 * v32 + g_MissionQueueFrame.localVariables[163]); /*0x5a3fd2*/
          if ( v30 > 200 ) /*0x5a3fd6*/
          {
            v35 = *(unsigned int *)((CellStruct *)&v71)->Set( 0, 0); /*0x5a3fff*/
            goto LABEL_49; /*0x5a4001*/
          }
          v34 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v67)); /*0x5a3fe2*/
        }
        while ( !(unsigned __int8)((Cell *)v34)->IsEmpty() ); /*0x5a3fe9*/
        v35 = *(unsigned int *)v67; /*0x5a4003*/
  LABEL_49:
        *(unsigned int *)v69 = v35; /*0x5a4007*/
        do /*0x5a4041*/
        {
          do /*0x5a4030*/
          {
            Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a4010*/
            __asm /*0x5a4015*/
            {
              fmul ds:dbl_7E3860
              fadd ds:dbl_7E3548
              fst [esp+68h+var_20]
              fcomp ds:dbl_7E8AE8
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x5a4030*/
          __asm /*0x5a4032*/
          {
            fld [esp+68h+var_20]
            fcomp ds:dbl_7E3550
            fnstsw ax
          }
        }
        while ( (_AX & 0x4100) == 0 ); /*0x5a4041*/
        do /*0x5a4079*/
        {
          do /*0x5a4068*/
          {
            Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a4048*/
            __asm /*0x5a404d*/
            {
              fmul ds:dbl_7E44A8
              fadd ds:dbl_7EDAB8
              fst [esp+68h+var_28]
              fcomp ds:dbl_7E44A8
              fnstsw ax
            }
          }
          while ( (_AX & 0x100) != 0 ); /*0x5a4068*/
          __asm /*0x5a406a*/
          {
            fld [esp+68h+var_28]
            fcomp ds:dbl_7EDA10
            fnstsw ax
          }
        }
        while ( (_AX & 0x4100) == 0 ); /*0x5a4079*/
        __asm { fld [esp+68h+var_28] } /*0x5a4083*/
        v61 = v73; /*0x5a4088*/
        IDA_LOWORD(v40) = Math::RoundToInt(v1); /*0x5a4089*/
        v59 = v40; /*0x5a4092*/
        v41 = ((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v69)); /*0x5a4099*/
        v42 = ScatterTerrainTrees((int)v41, v59, v61); /*0x5a40a3*/
        v43 = IDA_LODWORD(v68) - v42 <= 0; /*0x5a40b3*/
        IDA_LODWORD(v68) -= v42; /*0x5a40b5*/
        ++v63; /*0x5a40b9*/
      }
      while ( !v43 ); /*0x5a40bd*/
    }
    v44 = Object::ComputeAllocationSize() / 200; /*0x5a40df*/
    v76 = v44 + 1; /*0x5a40e4*/
    __asm /*0x5a40e8*/
    {
      fild [esp+68h+var_8]
      fstp [esp+68h+var_10]
    }
    do /*0x5a4119*/
    {
      v76 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a40fa*/
      __asm /*0x5a4102*/
      {
        fild [esp+68h+var_8]
        fmul [esp+68h+var_10]
        fmul ds:dbl_7ED898
      }
      IDA_LOWORD(v45) = Math::RoundToInt(v1); /*0x5a4110*/
      v46 = v45; /*0x5a4115*/
    }
    while ( v45 > v44 ); /*0x5a4119*/
    result = 5 * v45; /*0x5a411b*/
    v66 = 0; /*0x5a411f*/
    v64 = 0; /*0x5a4125*/
    if ( 5 * v46 > 0 ) /*0x5a4129*/
    {
      while ( 1 ) /*0x5a412f*/
      {
        if ( v66 >= v46 ) /*0x5a4133*/
          return (VectorClass_flat * *)result; /*0x5a4133*/
        v48 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a4141*/
        do /*0x5a419c*/
        {
          v76 = v48 + 1; /*0x5a414b*/
          __asm /*0x5a414f*/
          {
            fild [esp+68h+var_8]
            fstp [esp+68h+var_28]
          }
          do /*0x5a4180*/
          {
            *(unsigned __int64 *)&v75 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4161*/
            __asm /*0x5a4169*/
            {
              fild [esp+68h+var_10]
              fmul [esp+68h+var_28]
              fmul ds:dbl_7ED898
            }
            IDA_LOWORD(v49) = Math::RoundToInt(v1); /*0x5a4177*/
            v50 = v49; /*0x5a417c*/
          }
          while ( v49 > v48 ); /*0x5a4180*/
          v51 = (unsigned short *)((CellStruct *)&v71)->Set( 0, 0); /*0x5a4188*/
        }
        while ( (unsigned __int8)CellStruct::Equals( /*0x5a419c*/
                                   (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v50),
                                   v51) );
        *(unsigned int *)v69 = *(unsigned int *)(80 * v50 + g_MissionQueueFrame.localVariables[163]); /*0x5a41be*/
        v52 = (RandomMap *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v69)); /*0x5a41c2*/
        v53 = (int)v52; /*0x5a41c7*/
        if ( *(unsigned int *)v52->__pad_44 == -1 ) /*0x5a41cd*/
          break; /*0x5a41cd*/
  LABEL_73:
        result = ++v64; /*0x5a4262*/
        if ( v64 >= 5 * v46 ) /*0x5a4271*/
          return (VectorClass_flat * *)result; /*0x5a4271*/
      }
      if ( RandomMap::Check(v52) ) /*0x5a41d5*/
      {
        do /*0x5a4202*/
        {
          v74 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a41e8*/
          __asm /*0x5a41f0*/
          {
            fild [esp+68h+var_18]
            fmul ds:dbl_7EDAB0
          }
          IDA_LOWORD(v54) = Math::RoundToInt(v1); /*0x5a41fa*/
        }
        while ( v54 > 4 ); /*0x5a4202*/
        v55 = v54 + 168; /*0x5a4204*/
      }
      else
      {
        if ( !(unsigned __int8)((Cell *)v53)->IsEmpty() && !(unsigned _((Cell *)Shore((Cell *)v53)->IsShore() ) /*0x5a421f*/
          goto LABEL_72; /*0x5a421f*/
        do /*0x5a4245*/
        {
          *(unsigned __int64 *)&v73 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a422b*/
          __asm /*0x5a4233*/
          {
            fild [esp+68h+var_20]
            fmul ds:dbl_7EDAB0
          }
          IDA_LOWORD(v56) = Math::RoundToInt(v1); /*0x5a423d*/
        }
        while ( v56 > 4 ); /*0x5a4245*/
        v55 = v56 + 173; /*0x5a4247*/
      }
      *(unsigned int *)(v53 + 68) = v55; /*0x5a424c*/
  LABEL_72:
      *(unsigned char *)(v53 + 286) = 0; /*0x5a424f*/
      ((House *)v53)->AnnounceUpgrade( -1); /*0x5a4259*/
      ++v66; /*0x5a425e*/
      goto LABEL_73; /*0x5a425e*/
    }
    return (VectorClass_flat * *)result; /*0x5a4277*/
}
}
// 0x5A4280
namespace gamemd {
int GenerateRandomMapTerrain()
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
    unsigned short *v16; // eax
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
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a4298*/
    for ( i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a42ab*/
          i;
          i = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
    {
      v31 = *(unsigned int *)(i + 36); /*0x5a42b0*/
      *(unsigned int *)(80 * ((__int16)v31 + g_MapCellWidth * IDA_SHIWORD(v31)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a42d5*/
    }
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a42e7*/
    v4 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a42f6*/
    if ( v4 ) /*0x5a42fa*/
    {
      do /*0x5a43e6*/
      {
        v31 = *(unsigned int *)(v4 + 36); /*0x5a4309*/
        _EBP = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v31 + g_MapCellWidth * IDA_SHIWORD(v31)); /*0x5a4326*/
        if ( (unsigned __int8)((Cell *)v4)->IsEmpty() ) /*0x5a4328*/
        {
          if ( !*(unsigned char *)(v4 + 284) && !*(unsigned char *)(_EBP + 69) ) /*0x5a4341*/
          {
            v31 = *(unsigned int *)(v4 + 36); /*0x5a4352*/
            *(unsigned __int64 *)&v35 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4368*/
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
                  Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a4389*/
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
        v4 = ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a43e2*/
      }
      while ( v4 ); /*0x5a43e6*/
      _EDI = this; /*0x5a43ec*/
    }
    ((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorReset(); /*0x5a43f5*/
    for ( j = (CellClass *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext(); /*0x5a4406*/
          j;
          j = (CellClass *)((LayerClass *)&stru_87F5F0.__pad_58[416])->CellIteratorNext() )
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
              v37 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a4487*/
              __asm /*0x5a448f*/
              {
                fild [esp+50h+var_8]
                fmul [esp+50h+var_18]
                fmul ds:dbl_7ED898
              }
              IDA_LOWORD(v14) = Math::RoundToInt(v1); /*0x5a449d*/
              v15 = v14; /*0x5a44a2*/
            }
            while ( v14 > v13 ); /*0x5a44a6*/
            v16 = (unsigned short *)((CellStruct *)&v33)->Set( 0, 0); /*0x5a44ae*/
          }
          while ( (unsigned __int8)CellStruct::Equals( /*0x5a44c2*/
                                     (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v15),
                                     v16) );
          ++v12; /*0x5a44d6*/
          *(unsigned int *)v30 = *(unsigned int *)(80 * v15 + g_MissionQueueFrame.localVariables[163]); /*0x5a44e0*/
          if ( v12 > 200 ) /*0x5a44e4*/
          {
            v18 = 0; /*0x5a450f*/
            goto LABEL_27; /*0x5a4513*/
          }
          v17 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v30)); /*0x5a44f0*/
        }
        while ( !(unsigned __int8)((Cell *)v17)->IsEmpty() ); /*0x5a44f7*/
        v18 = *(unsigned int *)v30; /*0x5a4515*/
  LABEL_27:
        *(unsigned int *)v32 = v18; /*0x5a4519*/
        do /*0x5a4553*/
        {
          do /*0x5a4542*/
          {
            Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a4522*/
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
            Random::Gaussian( (void *)(&g_MissionQueueFrame.briefing[348])); /*0x5a455a*/
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
        v27 = v34; /*0x5a459a*/
        IDA_LOWORD(v23) = Math::RoundToInt(v1); /*0x5a459b*/
        v26 = v23; /*0x5a45a4*/
        v24 = ((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v32)); /*0x5a45ab*/
        result = ScatterTerrainTrees((int)v24, v26, v27); /*0x5a45b5*/
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
VectorClass_flat * * PlaceMapSeedBuildings()
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
    unsigned int v15; // eax
    unsigned int v16; // esi
    unsigned short *v17; // eax
    Cell *v18; // eax
    int v19; // eax
    ObjectClass *v20; // esi
    __int16 v21[2]; // [esp+10h] [ebp-4Ch] BYREF
    int v22; // [esp+14h] [ebp-48h]
    int v23; // [esp+18h] [ebp-44h]
    int v24; // [esp+1Ch] [ebp-40h]
    __int16 v25[2]; // [esp+20h] [ebp-3Ch] BYREF
    double v26; // [esp+24h] [ebp-38h]
    int v27; // [esp+2Ch] [ebp-30h]
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
      *(unsigned int *)v4 = v5; /*0x5a80d0*/
      v4 += 12; /*0x5a80d2*/
    }
    while ( (int)v4 < (int)&g_MissionQueueFrame.globalVariables[1460] ); /*0x5a80da*/
    v6 = dword_ABBEC0; /*0x5a80dc*/
    v7 = 0; /*0x5a80e2*/
    v8 = &g_MissionQueueFrame.globalVariables[1460]; /*0x5a80e4*/
    do /*0x5a80f7*/
    {
      v9 = v6 + v7++; /*0x5a80e9*/
      *(unsigned int *)v8 = v9; /*0x5a80ed*/
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
              v32 = (unsigned int)Random::State(  (Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5a8160*/
              IDA_LOWORD(v15) = Math::RoundToInt((double)v32 * v26 * 2.328306437080797e-10); /*0x5a8176*/
              v16 = v15; /*0x5a817b*/
            }
            while ( v15 > v14 ); /*0x5a817f*/
            v17 = (unsigned short *)((CellStruct *)&v30)->Set( 0, 0); /*0x5a8187*/
          }
          while ( (unsigned __int8)CellStruct::Equals( /*0x5a819b*/
                                     (CellStruct *)(g_MissionQueueFrame.localVariables[163] + 80 * v16),
                                     v17) );
          ++v13; /*0x5a81af*/
          *(unsigned int *)v25 = *(unsigned int *)(80 * v16 + g_MissionQueueFrame.localVariables[163]); /*0x5a81b9*/
          if ( v13 > 200 ) /*0x5a81bd*/
          {
            v24 = 0; /*0x5a81e4*/
            v19 = 0; /*0x5a81ee*/
            goto LABEL_19; /*0x5a81f2*/
          }
          v18 = (Cell *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v25)); /*0x5a81c9*/
          if ( (unsigned __int8)((Cell *)v18)->IsEmpty() ) /*0x5a81d0*/
            break; /*0x5a81d0*/
          v12 = g_MapCellWidth; /*0x5a81d9*/
        }
        v19 = *(unsigned int *)v25; /*0x5a81f4*/
  LABEL_19:
        IDA_LODWORD(v26) = v19; /*0x5a81fc*/
        *(unsigned int *)v21 = v19; /*0x5a8201*/
        if ( ++v22 >= 20 ) /*0x5a820c*/
          break; /*0x5a820c*/
        v12 = g_MapCellWidth; /*0x5a8213*/
        if ( !*(unsigned char *)(80 * ((__int16)v19 + g_MapCellWidth * IDA_SWORD1(v26)) + g_MissionQueueFrame.localVariables[163] + 69) ) /*0x5a822f*/
        {
          v33[0] = (__int16)v19 - 4; /*0x5a823f*/
          v33[1] = IDA_SWORD1(v26) - 4; /*0x5a8243*/
          v33[2] = 8; /*0x5a8253*/
          v33[3] = 8; /*0x5a8257*/
          if ( !(unsigned __int8)IsAreaClearMap( (MapClass *)(v33), 0, 0) /*0x5a8274*/
            || !(unsigned __int8)((LayerClass *)&stru_87F5F0.__pad_58[416])->IsWithinUsableArea( (int16_t *)(v21), 1) )
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
    return (VectorClass_flat * *)result; /*0x5a82ca*/
}
}
// 0x5B9C90
namespace gamemd {
AbstractClass * * RegenerateRandomMapPreview()
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
    unsigned int *v12; // eax
    char v13; // bl
    ObjectClass *v14; // eax
    Skirmish *v15; // eax
    CCFileClass v17; // [esp+8h] [ebp-6Ch] BYREF
    int v18[3]; // [esp+60h] [ebp-14h] BYREF
    int v19; // [esp+6Ch] [ebp-8h]

    Debug::Log("ModemHost.SelectRandomMap(enter)\n"); /*0x5b9c9f G57w11: IDA push seq @ 0x5b9c9f +1 reg-vararg(s) omitted*/
    byte_8316D4 = 0; /*0x5b9cac*/
    if ( ((CCFileClass *)&loc_5BB260)->Load() == 1 ) /*0x5b9cbb*/
    {
      byte_8316D4 = 1; /*0x5b9ccd*/
      ((MapSeed *)(char *)&g_MissionQueueFrame.briefing[356])->ValidateName( (int)&stru_82BA00.?); /*0x5b9cd2*/
      v2 = (Skirmish *)(g_UIControlState); /*0x5b9cd7*/
      if ( g_UIControlState ) /*0x5b9cdf*/
      {
        ComPtr::Dtor(  (ComPtr *)g_UIControlState); /*0x5b9ce3*/
        RA2_OPDEL(v2); /*0x5b9ce9*/
        g_UIControlState = 0; /*0x5b9cf1*/
      }
      DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b9d03*/
      SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)&g_MissionQueueFrame.briefing[386]))); /*0x5b9d16*/
      v4 = 0; /*0x5b9d21*/
      v5 = 0; /*0x5b9d23*/
      if ( dword_A8B8D8 > 0 ) /*0x5b9d27*/
      {
        while ( _strcmpi((*(unsigned int *)(dword_A8B8CC + 4 * v5) + 88), &stru_82BA00.?) ) /*0x5b9d44*/
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
        ((GameOption *)*(char **)(dword_A8B8CC + 4 * v5))->SetDigest( (char *)(v6)); /*0x5b9df6*/
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
          v9 = (wchar_t *)(0); /*0x5b9d92*/
        if ( dword_A8B8D8 < dword_A8B8D0 /*0x5b9dcb*/
          || (byte_A8B8D5 || !dword_A8B8D0)
          && dword_A8B8DC > 0
&& (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A8B8C8 + 8))( (unsigned int *)(&dword_A8B8C8), dword_A8B8D0 + dword_A8B8DC, 0) )



        {
          v10 = dword_A8B8D8++; /*0x5b9dd8*/
          *(unsigned int *)(dword_A8B8CC + 4 * v10) = (unsigned int)v9; /*0x5b9de7*/
        }
      }
      RA2_OPDEL(v7); /*0x5b9e0e*/
      if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
      {
        *(unsigned int *)&stru_A8B250[4] = v5; /*0x5b9e2f*/
        v11 = (AbstractClass *)(dword_A8B230); /*0x5b9e3b*/
        strcpy( (char *)(byte_A8B8E0), (const char *)(&stru_82BA00.?)); /*0x5b9e51*/
        strcpy( (char *)&v11[130].abstractFlags, (const char *)(byte_A8B8E0)); /*0x5b9e79*/
        v12 = (unsigned int *)((CCFileClass *)&v17)->Construct( (char *)(byte_A8B8E0)); /*0x5b9e86*/
        v13 = (*(int (**)(unsigned int *, unsigned int))(*v12 + 20))( (unsigned int *)(v12), 0); /*0x5b9e98*/
        *(unsigned int *)v17.CDFileClass = (unsigned int)(void*)&CCFileClass_vftable; /*0x5b9e9a*/
        v19 = 0; /*0x5b9ea2*/
        Vector::Clear((int)v18); /*0x5b9eaa*/
        *(unsigned int *)v17.CDFileClass = (unsigned int)&off_7E1668;
        ((BufferIOFileClass *)&v17)->Dtor(); /*0x5b9ebb*/
        if ( v13 ) /*0x5b9ec2*/
        {
          v14 = (ObjectClass *)RA2_OPNEW(4u); /*0x5b9ec6*/
          if ( v14 ) /*0x5b9ed0*/
            v15 = (Skirmish *)unknown_libname_27( (void *)(v14)); /*0x5b9ed4*/
          else
            v15 = (Skirmish *)(0); /*0x5b9edb*/
          g_UIControlState = (unsigned int)v15; /*0x5b9ee4*/
          ((Surface *)v15)->LoadToSurfaceSHP( (char *)(ExistingFileName)); /*0x5b9ee9*/
          PostMessageA(*(HWND *)this->__pad_0, 0xFu, 0, 0); /*0x5b9efb*/
        }
      }
      IDA_BYTE1(this->RandomMap_field_0x8) = 1; /*0x5b9f07*/
    }
    byte_8316D4 = 1; /*0x5b9f10*/
    Debug::Log("ModemHost.SelectMultiMap(exit)\n"); /*0x5b9f17 G57w11: IDA push seq @ 0x5b9f17*/
}
}
// 0x6558D0
namespace gamemd {
unsigned int * PlaceTileSet()
{
    RandomMap *v1; // ebp
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
    result = (unsigned int *)RA2_OPNEW(0x10u); /*0x6558dc*/
    v3 = result; /*0x6558e1*/
    v4 = 0; /*0x6558e3*/
    if ( result ) /*0x6558ea*/
    {
      result[1] = Radar::PixelIndex; /*0x6558fb*/
      result[2] = 256; /*0x655902*/
      result[3] = 10; /*0x655909*/
      v5 = (unsigned int *)RA2_OPNEW(0x1804u); /*0x65590c*/
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
          *v7 = (unsigned int)(void*)&VectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x655936*/
          *v7 = (unsigned int)(void*)&DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x65593c*/
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
        v9 = (unsigned int *)(0); /*0x655956*/
      }
      v10 = v3[2]; /*0x655958*/
      *v3 = (unsigned int)v9; /*0x65595b*/
      result = (unsigned int *)(0); /*0x65595d*/
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
      *(unsigned int *)&v1[8].__pad_4C[396] = (unsigned int)v3; /*0x655974*/
    }
    else
    {
      *(unsigned int *)&v1[8].__pad_4C[396] = 0; /*0x655980*/
    }
    return result; /*0x65597b*/
}
}
// 0x74EF10
namespace gamemd {
int RemoveMatching(IUnknown * aP1, int a2)
{
    int v2; // ebp
    int result; // eax
    RandomMap *v4; // ebx
    signed int i; // esi
    unsigned char *NeighbourContent; // eax
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
    unsigned int **v17; // edi
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
    unsigned int *v29; // esi
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

    v2 = a2; /*0x74ef15*/
    result = *(unsigned int *)(a2 + 68); /*0x74ef20*/
    v4 = this; /*0x74ef23*/
    if ( result == 126 && *(unsigned char *)(a2 + 286) >= 0x30u ) /*0x74ef38*/
    {
      for ( i = 0; i < 8; i += 2 ) /*0x74ef3e*/
      {
        NeighbourContent = (unsigned char *)((Cell *)a2)->GetNeighbourContent( i); /*0x74ef43*/
        v8 = 0; /*0x74ef5b*/
        if ( *((unsigned int *)NeighbourContent + 17) == 126 ) /*0x74ef4b*/
        {
          v7 = NeighbourContent[286]; /*0x74ef4d*/
          if ( v7 < 0x30u || v7 > 0x33u ) /*0x74ef59*/
            v8 = 1; /*0x74ef4b*/
        }
        v9 = i; /*0x74ef64*/
        *((unsigned char *)&v40 + v9 / 2) = v8; /*0x74ef71*/
      }
      CellClass::ProcessBridgeRepair((CellClass *)a2); /*0x74ef79*/
      --*(unsigned int *)&v4->__pad_4C[184]; /*0x74ef85*/
      v10 = 0; /*0x74ef8b*/
      for ( j = 0; j < 8; j += 2 ) /*0x74ef8d*/
      {
        v11 = (char *)((Cell *)v2)->GetNeighbourContent( v10); /*0x74ef94*/
        if ( *((unsigned int *)v11 + 17) == -1 ) /*0x74ef9d*/
        {
          v12 = (int *)(v11 + 36); /*0x74efa3*/
          v13 = ((Cell *)(v11 + 36))->PosToIndex(); /*0x74efad*/
          if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() ) /*0x74efba*/
          {
            *(unsigned char *)(*(unsigned int *)&v4->__pad_4C[120] + v13) = 0; /*0x74efc2*/
            *(unsigned char *)(stru_B1D290.customSound_controller[4] + v13) = 0; /*0x74efcc*/
          }
          if ( *((unsigned char *)&v40 + j / 2) == 1 && !v4->__pad_4C[180] ) /*0x74efe4*/
          {
            v14 = *(Heap **)&v4->__pad_4C[100]; /*0x74eff2*/
            v15 = 1; /*0x74effa*/
            v41 = *v12; /*0x74efff*/
            v16 = *(unsigned int *)v14;
            if ( *(unsigned int *)v14 < 1 ) /*0x74f007*/
            {
  LABEL_39:
              Debug::Log(); /*0x74f138*/
            }
            else
            {
              v39 = v14[2]; /*0x74f010*/
              v17 = (unsigned int **)(*(unsigned int *)&v39 + 4); /*0x74f014*/
              while ( **v17 != v41 ) /*0x74f021*/
              {
                ++v15; /*0x74f02e*/
                ++v17; /*0x74f02f*/
                if ( v15 > *(unsigned int *)&v16 ) /*0x74f034*/
                {
                  v2 = a2; /*0x74f134*/
                  goto LABEL_39; /*0x74f134*/
                }
              }
              if ( v15 == v16 ) /*0x74f03e*/
              {
                *v14 = (Heap)(*(unsigned int *)&v16 - 1); /*0x74f041*/
              }
              else
              {
                v18 = *(unsigned int *)(*(unsigned int *)&v39 + 4 * *(unsigned int *)&v16); /*0x74f04c*/
                v38 = *(float *)(v18 + 4); /*0x74f052*/
                v19 = v15 >> 1; /*0x74f058*/
                *v14 = (Heap)(*(unsigned int *)&v16 - 1); /*0x74f05e*/
                if ( v15 == 1 || *(float *)(*(unsigned int *)(*(unsigned int *)&v39 + 4 * v19) + 4) < (double)v38 ) /*0x74f071*/
                {
                  *(unsigned int *)(*(unsigned int *)&v39 + 4 * v15) = v18; /*0x74f0d9*/
                  Heap::SiftDown(v14, v15); /*0x74f0df*/
                  if ( *(unsigned int *)v14 >= 1 ) /*0x74f0e9*/
                  {
                    v24 = *(unsigned int *)&v14[2] + 4; /*0x74f0f1*/
                    v25 = *(unsigned int *)v14;
                    do /*0x74f11b*/
                    {
                      v24 += 4; /*0x74f117*/
                      --*(unsigned int *)&v25; /*0x74f11a*/
                    }
                    while ( v25 ); /*0x74f11b*/
                  }
                }
                else
                {
                  for ( ; (unsigned int)v15 > 1; v19 >>= 1 ) /*0x74f076*/
                  {
                    v20 = v14[2]; /*0x74f078*/
                    v21 = *(unsigned int *)(*(unsigned int *)&v20 + 4 * v19); /*0x74f07b*/
                    if ( *(float *)(v21 + 4) <= (double)v38 ) /*0x74f08a*/
                      break; /*0x74f08a*/
                    *(unsigned int *)(*(unsigned int *)&v20 + 4 * v15) = v21; /*0x74f08c*/
                    v15 = v19; /*0x74f08f*/
                  }
                  *(unsigned int *)(*(unsigned int *)&v14[2] + 4 * v15) = v18; /*0x74f09b*/
                  if ( *(unsigned int *)v14 >= 1 ) /*0x74f0a3*/
                  {
                    v22 = *(unsigned int *)&v14[2] + 4; /*0x74f0ab*/
                    v23 = *(unsigned int *)v14;
                    do /*0x74f0d5*/
                    {
                      v22 += 4; /*0x74f0d1*/
                      --*(unsigned int *)&v23; /*0x74f0d4*/
                    }
                    while ( v23 ); /*0x74f0d5*/
                  }
                }
                v4 = this; /*0x74f11d*/
              }
              Debug::Log("Exiting Remove_Matching\n"); /*0x74f126 G57w11: IDA push seq @ 0x74f126*/
              v2 = a2; /*0x74f12b*/
            }
          }
        }
        v10 = j + 2; /*0x74f149*/
      }
      v26 = *(unsigned int *)(v2 + 68); /*0x74f15d*/
      result = ((Cell *)(a2 + 36))->PosToIndex(); /*0x74f165*/
      v27 = result; /*0x74f16a*/
      v40 = result; /*0x74f16e*/
      if ( result >= 0 ) /*0x74f172*/
      {
        result = Object::ComputeAllocationSize(); /*0x74f178*/
        if ( v27 < result ) /*0x74f17f*/
        {
          if ( v26 == -1 ) /*0x74f188*/
          {
            *(unsigned char *)(*(unsigned int *)&v4->__pad_4C[120] + v27) = 0; /*0x74f190*/
            *(unsigned char *)(stru_B1D290.customSound_controller[4] + v27) = 0; /*0x74f19a*/
          }
          else
          {
            IDA_LOBYTE(result) = v4->__pad_4C[180]; /*0x74f1a8*/
            if ( !(unsigned char)result ) /*0x74f1b0*/
            {
              result = *(unsigned int *)&v4->__pad_4C[96]; /*0x74f1bc*/
              if ( result < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 220) ) /*0x74f1c8*/
              {
                *(unsigned int *)(*(unsigned int *)&v4->__pad_4C[104] + 8 * result) = *(unsigned int *)(a2 + 36); /*0x74f1d6*/
                *(float *)(*(unsigned int *)&v4->__pad_4C[104] + 8 * *(unsigned int *)&v4->__pad_4C[96] + 4) = (float)(int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644) / 50 + abs32(Random::State(  (Random *)&dword_A8B230[14].NeedsSaveOrLink) % 50) + 1); /*0x74f22a*/
                v28 = *(unsigned int *)&v4->__pad_4C[96]; /*0x74f22e*/
                v29 = *(unsigned int **)&v4->__pad_4C[100]; /*0x74f23a*/
                v30 = *(unsigned int *)&v4->__pad_4C[104] + 8 * v28; /*0x74f240*/
                *(unsigned int *)&v4->__pad_4C[96] = v28 + 1; /*0x74f244*/
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
                      v34 = *(unsigned int *)(v33 + 4 * v32); /*0x74f267*/
                      if ( *(float *)(v34 + 4) <= (double)v42 ) /*0x74f276*/
                        break; /*0x74f276*/
                      *(unsigned int *)(v33 + 4 * v31) = v34; /*0x74f278*/
                      v31 = v32; /*0x74f27b*/
                      v32 >>= 1; /*0x74f27d*/
                    }
                    while ( v31 > 1 ); /*0x74f282*/
                    v4 = this; /*0x74f284*/
                    v27 = v40; /*0x74f288*/
                  }
                  *(unsigned int *)(v29[2] + 4 * v31) = v30; /*0x74f28f*/
                  v35 = v29[3]; /*0x74f294*/
                  ++*v29; /*0x74f29a*/
                  if ( v30 > v35 ) /*0x74f29c*/
                    v29[3] = v30; /*0x74f29e*/
                  if ( v30 < v29[4] ) /*0x74f2a4*/
                    v29[4] = v30; /*0x74f2a6*/
                }
                result = *(unsigned int *)&v4->__pad_4C[120]; /*0x74f2a9*/
                *(unsigned char *)(result + v27) = 1; /*0x74f2af*/
                *(unsigned char *)(stru_B1D290.customSound_controller[4] + v27) = 1; /*0x74f2b9*/
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
wchar_t * ddtor()
{
    void *v2; // eax

    v2 = *(void **)&this->m_1[3]; /*0x42f426*/
    this->m_10 = 0; /*0x42f429*/
    if ( v2 && IDA_BYTE1(this->m_C) ) /*0x42f430*/
    {
      RA2_OPDEL(v2); /*0x42f436*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x42f43e*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x42f441*/
    this->m_8 = 0; /*0x42f444*/
}
} // namespace gamemd

// 0x42F450
namespace gamemd {
unsigned int Write(int a2)
{
    if ( IDA_LOBYTE(this->m_C) ) /*0x42f450*/
      return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x42f465*/
    else
      return 0; /*0x42f457*/
}
} // namespace gamemd

// 0x42F470
namespace gamemd {
unsigned int * Seek(unsigned int * a2, int a3, void *a3_2)
{
    *a2 = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a3); /*0x42f47e*/
    return a2; /*0x42f480*/
}
} // namespace gamemd

// 0x42F620
namespace gamemd {
char AddRef(int a2)
{
    int m_8; // edi
    int v3; // esi
    int v4; // edx
    unsigned short *v5; // eax
    unsigned short *v6; // ecx
    int v7; // edx

    m_8 = this->m_8; /*0x42f627*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42f62f*/
    {
      v3 = 0; /*0x42f631*/
      if ( m_8 <= 0 ) /*0x42f635*/
        return 1; /*0x42f664*/
      v4 = *(unsigned int *)(a2 + 4); /*0x42f637*/
      v5 = *(unsigned short **)&this->m_1[3]; /*0x42f63a*/
      v6 = (unsigned short *)(v4 + 2); /*0x42f63d*/
      v7 = v4 - (unsigned int)v5; /*0x42f640*/
      while ( *v5 == *(unsigned short *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x42f652*/
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
int Read(unsigned short * a2, void *a2_2)
{
    int m_10; // edx
    int result; // eax
    unsigned short *i; // ecx

    m_10 = this->m_10; /*0x42f930*/
    result = 0; /*0x42f934*/
    if ( m_10 <= 0 ) /*0x42f93a*/
      return -1; /*0x42f95d*/
    for ( i = *(unsigned short **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x42f940*/
    {
      if ( ++result >= m_10 ) /*0x42f95b*/
        return -1; /*0x42f95b*/
    }
    return result; /*0x42f960*/
}
}
// 0x42FBF0
namespace gamemd {
DynamicVector * QueryInterface(unsigned int * Block, char a2)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x42fbf3*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_Cell_vftable; /*0x42fbf6*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x42fc00*/
    {
      RA2_OPDEL(v3); /*0x42fc08*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x42fc10*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x42fc1b*/
    this->m_8 = 0; /*0x42fc21*/
    if ( (a2 & 1) != 0 ) /*0x42fc28*/
      RA2_OPDEL(this); /*0x42fc2b*/
    return this->__pad_0; /*0x42fc35*/
}
} // namespace gamemd

// 0x58CF90
namespace gamemd {
int GenerateTerrainForAllCells()
{
    int result; // eax
    int v2; // ebx
    int v3; // esi
    RandomMap *v4; // edi
    __int16 v5[2]; // [esp+0h] [ebp-4h] BYREF

    *(unsigned int *)v5 = (unsigned int)this;
    result = g_MapCellWidth * g_MapCellWidth; /*0x58cf96*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58cf9b*/
    {
      v2 = g_MapCellWidth * g_MapCellWidth; /*0x58cf9f*/
      result = g_MissionQueueFrame.localVariables[163]; /*0x58cfa1*/
      v3 = 0; /*0x58cfa7*/
      do /*0x58d002*/
      {
        *(unsigned int *)v5 = *(unsigned int *)(v3 + result); /*0x58cfb6*/
        v4 = (RandomMap *)((CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj( (int16_t *)(v5)); /*0x58cfbf*/
        result = g_MissionQueueFrame.localVariables[163]; /*0x58cfc1*/
        if ( *(unsigned int *)(v3 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x58cfd4*/
          && (*(unsigned short *)(v3 + g_MissionQueueFrame.localVariables[163])
           || *(unsigned short *)(v3 + g_MissionQueueFrame.localVariables[163] + 2)) )
        {
          if ( (unsigned __int8)((Cell *)v4)->IsGroundTypeRange() || (unsigned _((Cell *)Shore((Cell *)v4)->IsShore() ) /*0x58cfe9*/
            ((RandomMap *)v4)->GenerateTerrain(); /*0x58cff4*/
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
unsigned int * Constructor_VectorClass_Cell_(unsigned int * Block, char a2)
{
    void (***v3)(unsigned int, int); // ecx
    int v4; // eax
    void *v5; // eax
    RandomMap *v7; // [esp+4h] [ebp-4h] BYREF

    v3 = *(void (****)(unsigned int, int))this->__pad_0; /*0x5ac294*/
    if ( v3 ) /*0x5ac298*/
    {
      (**v3)(v3, 1); /*0x5ac29e*/
      *(unsigned int *)this->__pad_0 = 0; /*0x5ac2a0*/
    }
    v7 = this; /*0x5ac2b6*/
v4 = (*(int (**)(int *, RandomMap **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x5ac2ba*/ &g_MissionQueueFrame.briefing[338], (RandomMap **)(&v7));


    if ( v4 != -1 && v4 < g_MissionQueueFrame.briefing[342] ) /*0x5ac2ca*/
    {
      --g_MissionQueueFrame.briefing[342]; /*0x5ac2cf*/
      for ( ; /*0x5ac2d5*/
            v4 < g_MissionQueueFrame.briefing[342];
            *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v4 - 4) = *(unsigned int *)(g_MissionQueueFrame.briefing[339]
                                                                                    + 4 * v4) )
      {
        ++v4; /*0x5ac2dd*/
      }
    }
    v5 = (void *)this->RandomMap_field_0x2C[0]; /*0x5ac2ef*/
    this->RandomMap_field_0x28[0] = (int)(void*)&VectorClass_Cell_vftable; /*0x5ac2f2*/
    if ( v5 && IDA_BYTE1(this->RandomMap_field_0x34[0]) ) /*0x5ac2fd*/
    {
      RA2_OPDEL(v5); /*0x5ac305*/
      this->RandomMap_field_0x2C[0] = 0; /*0x5ac30d*/
    }
    IDA_BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x5ac318*/
    this->RandomMap_field_0x30 = 0; /*0x5ac31e*/
    if ( (a2 & 1) != 0 ) /*0x5ac325*/
      RA2_OPDEL(this); /*0x5ac328*/
    return this->__pad_0; /*0x5ac332*/
}
} // namespace gamemd

// 0x5AD820
namespace gamemd {
unsigned int * Constructor(int a2, int a3, void *a3_2)
{
    *(unsigned int *)&this->RandomMap_field_0x2[2] = 0; /*0x5ad82b*/
    this->RandomMap_field_0x8 = (void *)a2; /*0x5ad82e*/
    IDA_LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ad831*/
    IDA_BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ad835*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_CellClass___vftable; /*0x5ad838*/
    if ( a2 ) /*0x5ad83e*/
    {
      if ( a3 ) /*0x5ad846*/
      {
        *(unsigned int *)&this->RandomMap_field_0x2[2] = a3; /*0x5ad848*/
        return this->__pad_0; /*0x5ad84e*/
      }
      *(unsigned int *)&this->RandomMap_field_0x2[2] = RA2_OPNEW(4 * a2); /*0x5ad85d*/
      IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ad860*/
    }
    return this->__pad_0; /*0x5ad84d*/
}
} // namespace gamemd

// 0x5ADA40
namespace gamemd {
unsigned int * Constructor_0(int a2, int a3, void *a3_2)
{
    int v5; // eax

    *(unsigned int *)&this->RandomMap_field_0x2[2] = 0; /*0x5ada4a*/
    this->RandomMap_field_0x8 = (void *)a2; /*0x5ada51*/
    IDA_LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5ada54*/
    IDA_BYTE1(this->RandomMap_field_0xC) = 0; /*0x5ada58*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_TRect_int_vftable; /*0x5ada5c*/
    if ( a2 ) /*0x5ada62*/
    {
      if ( a3 ) /*0x5ada6a*/
      {
        *(unsigned int *)&this->RandomMap_field_0x2[2] = a3; /*0x5ada6d*/
        return this->__pad_0; /*0x5ada78*/
      }
      v5 = RA2_OPNEW(16 * a2); /*0x5ada81*/
      if ( v5 ) /*0x5ada8b*/
      {
        *(unsigned int *)&this->RandomMap_field_0x2[2] = v5; /*0x5ada8e*/
        IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5ada95*/
        return this->__pad_0; /*0x5ada9d*/
      }
      IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaa2*/
      *(unsigned int *)&this->RandomMap_field_0x2[2] = 0; /*0x5adaa6*/
    }
    return this->__pad_0; /*0x5ada76*/
}
} // namespace gamemd

// 0x5ADAB0
namespace gamemd {
unsigned int * Constructor_1(int a2, int a3)
{
    *(unsigned int *)&this->RandomMap_field_0x2[2] = 0; /*0x5adabb*/
    this->RandomMap_field_0x8 = (void *)a2; /*0x5adabe*/
    IDA_LOBYTE(this->RandomMap_field_0xC) = 1; /*0x5adac1*/
    IDA_BYTE1(this->RandomMap_field_0xC) = 0; /*0x5adac5*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_double_vftable; /*0x5adac8*/
    if ( a2 ) /*0x5adace*/
    {
      if ( a3 ) /*0x5adad6*/
      {
        *(unsigned int *)&this->RandomMap_field_0x2[2] = a3; /*0x5adad8*/
        return this->__pad_0; /*0x5adade*/
      }
      *(unsigned int *)&this->RandomMap_field_0x2[2] = RA2_OPNEW(8 * a2); /*0x5adaed*/
      IDA_BYTE1(this->RandomMap_field_0xC) = 1; /*0x5adaf0*/
    }
    return this->__pad_0; /*0x5adadd*/
}
} // namespace gamemd
