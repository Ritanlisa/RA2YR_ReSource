// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_588960_e4.hpp"
#include "e4/classes/E4Recv_5A99B0_e4.hpp"
#include "e4/classes/E4Recv_63EFB0_e4.hpp"
#include "e4/classes/E4Recv_6B5440_e4.hpp"
#include "e4/classes/E4Recv_710750_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"

// 0x47C3D0
namespace gamemd {
int Object::FindClosestObjectCell(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi
  unsigned int *v8; // eax
  double v9; // st7
  int v10; // eax
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+2Ch] [ebp-20h]
  unsigned char v16[20]; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v12 = 0; /*0x47c3e3*/
  v13 = 0; /*0x47c3e7*/
  v4 = 7 * *aP1; /*0x47c3f2*/
  v5 = 7 * aP1[1]; /*0x47c3fe*/
  if ( aP2 ) /*0x47c405*/
    v6 = *(&this->u32_148); /*0x47c407*/
  else
    v6 = *(&this->u32_147); /*0x47c40f*/
  if ( !v6 ) /*0x47c417*/
    return 0; /*0x47c4bf*/
  v7 = v6; /*0x47c41d*/
  do /*0x47c4ac*/
  {
    if ( (*(unsigned char *)(v7 + 20) & 1) != 0 && v7 != aP3 ) /*0x47c435*/
    {
      v8 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v7 + 72))(v7, v16); /*0x47c440*/
      v14 = (uint8_t)*v8 - v4; /*0x47c45a*/
      v15 = (uint8_t)v8[1] - v5; /*0x47c463*/
      v17 = v8[2]; /*0x47c467*/
      v9 = Math::Sqrt((double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x47c484*/
      v10 = Math::RoundToInt(v9); /*0x47c48c*/
      if ( !v12 || v10 < v13 ) /*0x47c49d*/
      {
        v12 = v7; /*0x47c49f*/
        v13 = v10; /*0x47c4a3*/
      }
    }
    v7 = *(unsigned int *)(v7 + 48); /*0x47c4a7*/
  }
  while ( v7 ); /*0x47c4ac*/
  return v12; /*0x47c4b6*/
}
}
// 0x47C5A0
namespace gamemd {
int Object::FindObjectCell(TechnoClass * aP1, char aP2)
{
  unsigned int *v4; // esi
  int result; // eax

  if ( g_WTFMode ) /*0x47c5ab*/
  {
    v4 = (unsigned int *)*(&this->u32_147); /*0x47c5ad*/
    if ( v4 ) /*0x47c5b5*/
    {
      while ( (*(int (__thiscall **)(unsigned int *))(*v4 + 44))(v4) != 2 ) /*0x47c5c1*/
      {
        v4 = (unsigned int *)v4[12]; /*0x47c5c3*/
        if ( !v4 ) /*0x47c5c8*/
          goto LABEL_5; /*0x47c5c8*/
      }
      return (int)v4; /*0x47c5c1*/
    }
  }
  LABEL_5:
  result = Object::FindClosestObjectCell(this, aP1, aP2, 0); /*0x47c5ca*/
  if ( !result ) /*0x47c5df*/
  {
    if ( g_WTFMode ) /*0x47c5e8*/
    {
      v4 = (unsigned int *)*(&this->u32_147); /*0x47c5ea*/
      if ( v4 ) /*0x47c5f2*/
      {
        while ( (*(int (__thiscall **)(unsigned int *))(*v4 + 44))(v4) != 36 ) /*0x47c5fe*/
        {
          v4 = (unsigned int *)v4[12]; /*0x47c600*/
          if ( !v4 ) /*0x47c605*/
            return 0; /*0x47c605*/
        }
        return (int)v4; /*0x47c612*/
      }
    }
    return 0; /*0x47c607*/
  }
  return result; /*0x47c609*/
}
}
// 0x4F9A90
namespace gamemd {
int Object::IsAlliedWithObjectHouse(IUnknown * aP1)
{
  int v3; // eax
  int v5; // eax

  if ( !aP1 ) /*0x4f9a99*/
    return 0; /*0x4f9a99*/
  v3 = (*(int (__thiscall **)(int))(aP1->u32_3C)(aP1); /*0x4f9a9d*/
  if ( !v3 ) /*0x4f9aa2*/
    return 0; /*0x4f9aa2*/
  if ( (unsigned int *)v3 == this ) /*0x4f9aa6*/
    return 1; /*0x4f9aab*/
  v5 = *(unsigned int *)(v3 + 48); /*0x4f9aae*/
  if ( v5 == *(&this->q0042) ) /*0x4f9ab6*/
    return 1; /*0x4f9abb*/
  return v5 != -1 && (*(&this->u32_8C02) & (1 << v5)) != 0; /*0x4f9ad5*/
}
}
// 0x4F9AF0
namespace gamemd {
int Object::IsAlliedWithObjectSimpleHouse(unsigned char * a2)
{
  int v3; // eax
  int v5; // eax

  if ( !a2 ) /*0x4f9af9*/
    return 0; /*0x4f9af9*/
  if ( (a2[20] & 2) == 0 ) /*0x4f9aff*/
    return 0; /*0x4f9aff*/
  v3 = (*(int (**)(void))(*(unsigned int *)a2 + 60))(); /*0x4f9b03*/
  if ( !v3 ) /*0x4f9b08*/
    return 0; /*0x4f9b08*/
  if ( (unsigned int *)v3 == this ) /*0x4f9b0c*/
    return 1; /*0x4f9b11*/
  v5 = *(unsigned int *)(v3 + 48); /*0x4f9b14*/
  if ( v5 == *(&this->q0042) ) /*0x4f9b1c*/
    return 1; /*0x4f9b21*/
  return v5 != -1 && (*(&this->u32_8C02) & (1 << v5)) != 0; /*0x4f9b3b*/
}
}
// 0x56C210
namespace gamemd {
unsigned int * Object::FindNearestObjectAtCell(unsigned int * a2)
{
  int v3; // esi
  int v4; // edi
  int *v5; // ecx
  int16_t v6; // ax
  int16_t v7; // cx
  int v8; // edi
  int v9; // eax
  int v11; // ecx
  unsigned int * v12;
  unsigned int v13;
  unsigned int *i; // esi
  int *v15; // eax
  int v16; // eax
  unsigned int *v17; // eax
  int *v18; // eax
  unsigned int *v21; // [esp+14h] [ebp-4Ch]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  int *v24; // [esp+20h] [ebp-40h]
  unsigned int v25[3]; // [esp+24h] [ebp-3Ch] BYREF
  int v26[3]; // [esp+30h] [ebp-30h] BYREF
  int v27[3]; // [esp+3Ch] [ebp-24h] BYREF
  char v28[12]; // [esp+48h] [ebp-18h] BYREF
  int v29[3]; // [esp+54h] [ebp-Ch] BYREF

  v21 = 0; /*0x56c238*/
  v22 = 0; /*0x56c23e*/
  v3 = *a2 / 256; /*0x56c249*/
  v4 = a2[1] / 256; /*0x56c24c*/
  v3 = v3; /*0x56c251*/
  v4 = v4; /*0x56c256*/
  if ( (byte_ABDC28 & 1) == 0 ) /*0x56c25b*/
  {
    dword_ABD434 = 0; /*0x56c271*/
    byte_ABDC28 |= 1u; /*0x56c27c*/
    dword_ABD438 = 0xFFFF; /*0x56c295*/
    dword_ABD43C = 1; /*0x56c2a9*/
    dword_ABD444 = 0x10000; /*0x56c2d0*/
    dword_ABD448 = 0x1FFFF; /*0x56c2e4*/
    dword_ABD440 = -65536; /*0x56c314*/
    dword_ABD44C = 65537; /*0x56c31a*/
    dword_ABD450 = -65535; /*0x56c320*/
    dword_ABD454 = -1; /*0x56c326*/
    atexit(nullsub_167); /*0x56c32b*/
  }
  v5 = &dword_ABD434; /*0x56c333*/
  v24 = &dword_ABD434; /*0x56c338*/
  while ( 1 ) /*0x56c343*/
  {
    v6 = *(unsigned short *)v5; /*0x56c343*/
    v7 = v4 + *((unsigned short *)v5 + 1); /*0x56c351*/
    IDA_LOWORD(v23) = v3 + v6; /*0x56c354*/
    v8 = (int16_t)(v3 + v6); /*0x56c359*/
    v9 = *(&this->q0181); /*0x56c35c*/
    IDA_HIWORD(v23) = v7; /*0x56c362*/
    v7 = v7; /*0x56c367*/
    v11 = v8 + v7; /*0x56c36a*/
    if ( v11 > v9 && v8 - v7 < v9 && v7 - v8 < v9 && v11 <= v9 + 2 * *(&this->q0182) ) /*0x56c39c*/
    {
      v12 = v8 + (v7 << 9); /*0x56c3a7*/
      if ( v12 >= 0x40000 || (v13 = *(unsigned int **)(this->q13C + 4 * v12)) == 0 ) /*0x56c3c1*/
      {
        v23 = v23; /*0x56c3c7*/
        v13 = g_CellClassArray; /*0x56c3cc*/
      }
      for ( i = (unsigned int *)v13[57]; i; i = (unsigned int *)i[12] ) /*0x56c3d1*/
      {
        if ( (i[5] & 1) == 0 || *((unsigned char *)i + 1050) || i[136] != 2 ) /*0x56c3f6*/
        {
          if ( (*(int (__thiscall **)(unsigned int *))(*i + 44))(i) != 6 ) /*0x56c406*/
          {
            v17 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*i + 72))(i, v28); /*0x56c457*/
            v18 = Coord::Subtract(v29, *a2 - *v17, a2[1] - v17[1], a2[2] - v17[2]); /*0x56c477*/
            v26[0] = *v18; /*0x56c47e*/
            v26[1] = v18[1]; /*0x56c485*/
            v26[2] = v18[2]; /*0x56c490*/
            v16 = Coord::Length(v26); /*0x56c494*/
  LABEL_20:
            if ( v16 >= 0 && (!v21 || v16 < v22) ) /*0x56c4a9*/
            {
              v22 = v16; /*0x56c4ab*/
              v21 = i; /*0x56c4af*/
            }
            continue; /*0x56c4af*/
          }
          v25[0] = (v8 << 8) + 128; /*0x56c41b*/
          v25[1] = (v7 << 8) + 128; /*0x56c429*/
          v25[2] = 0; /*0x56c431*/
          v15 = Vector3::Subtract(a2, v27, v25); /*0x56c439*/
          v16 = Coord::Length(v15); /*0x56c440*/
          if ( v16 <= 181 ) /*0x56c44a*/
            goto LABEL_20; /*0x56c44a*/
        }
      }
      IDA_LOWORD(v3) = v3; /*0x56c4be*/
    }
    v5 = ++v24; /*0x56c4c7*/
    if ( (int)v24 >= (int)&dbl_ABD458 ) /*0x56c4d4*/
      break; /*0x56c4d4*/
    IDA_LOWORD(v4) = v4; /*0x56c33e*/
  }
  v21 = v21; /*0x56c4da*/
  if ( v21 ) /*0x56c4e4*/
  {
    if ( v22 > 181 ) /*0x56c4ee*/
      return 0; /*0x56c4f0*/
  }
}
}
// 0x5902C0
namespace gamemd {
void sub_5902C0(int a1)
{
  int *v1; // ebx
  int16_t v2; // ax
  char *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // ebp
  int v10; // esi
  int *v11; // eax
  int *v12; // edi
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v1 = (int *)a1; /*0x5902c4*/
  v2 = *(unsigned short *)a1; /*0x5902ce*/
  IDA_HIWORD(a1) = *(unsigned short *)(a1 + 4); /*0x5902d6*/
  IDA_LOWORD(a1) = v2; /*0x5902e1*/
  v3 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a1); /*0x5902e6*/
  v4 = v1[1]; /*0x5902f2*/
  v16 = v3[283]; /*0x5902f5*/
  v5 = *v1; /*0x5902f9*/
  v6 = (int16_t)*v1; /*0x590301*/
  v15 = v4; /*0x590307*/
  a1 = (int16_t)v4 + v6; /*0x590310*/
  if ( a1 > g_MapCellHeight_Value /*0x59033c*/
    && v6 - (int16_t)v4 < g_MapCellHeight_Value
    && (int16_t)v4 - v6 < g_MapCellHeight_Value
    && a1 <= g_MapCellCount )
  {
    v7 = v1[2]; /*0x590342*/
    a1 = (int16_t)(v5 + v7 - 1); /*0x59034f*/
    if ( (int16_t)v4 + a1 > g_MapCellHeight_Value /*0x590387*/
      && a1 - (int16_t)v4 < g_MapCellHeight_Value
      && (int16_t)v4 - a1 < g_MapCellHeight_Value
      && (int16_t)v4 + a1 <= g_MapCellCount )
    {
      v14 = v1[3] + v4 - 1; /*0x590394*/
      a1 = (int16_t)v14 + (int16_t)v5; /*0x5903a3*/
      if ( a1 > g_MapCellHeight_Value /*0x5903cf*/
        && (int16_t)v5 - (int16_t)v14 < g_MapCellHeight_Value
        && (int16_t)v14 - (int16_t)v5 < g_MapCellHeight_Value
        && a1 <= g_MapCellCount )
      {
        v8 = (int16_t)(v5 + v7 - 1); /*0x5903d9*/
        a1 = (int16_t)v14 + v8; /*0x5903e6*/
        if ( a1 > g_MapCellHeight_Value /*0x590412*/
          && v8 - (int16_t)v14 < g_MapCellHeight_Value
          && (int16_t)v14 - v8 < g_MapCellHeight_Value
          && a1 <= g_MapCellCount )
        {
          v9 = v15; /*0x590418*/
          if ( v15 >= v1[3] + v15 + 1 ) /*0x590425*/
            return 1; /*0x59049b*/
          while ( 1 ) /*0x590427*/
          {
            v10 = v5; /*0x590427*/
            if ( v5 < v7 + v5 + 1 ) /*0x59042f*/
              break; /*0x59042f*/
  LABEL_24:
            if ( ++v9 >= v1[1] + v1[3] + 1 ) /*0x590490*/
              return 1; /*0x590490*/
          }
          while ( 1 ) /*0x59043b*/
          {
            IDA_LOWORD(a1) = v10; /*0x59043b*/
            IDA_HIWORD(a1) = v9; /*0x590440*/
            v11 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a1); /*0x590445*/
            v12 = v11; /*0x59044a*/
            if ( v11[17] != -1 || *((char *)v11 + 283) != v16 || !Cell::IsEmpty(v11) && !Cell::IsGroundTypeRange(v12) ) /*0x59046c*/
              break; /*0x59046c*/
            v7 = v1[2]; /*0x590475*/
            v5 = *v1; /*0x590478*/
            if ( ++v10 >= v7 + *v1 + 1 ) /*0x590481*/
              goto LABEL_24; /*0x590481*/
          }
        }
      }
    }
  }
  return 0; /*0x590492*/
}
}
// 0x5FC380
namespace gamemd {
void * Object::SpawnAtCell(IUnknown * aP1, IUnknown * aP2, BuildingTypeClass * aP3)
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int *v8; // eax

  ObjectClass::ctor(); /*0x5fc386*/
  aP1 = aP1; /*0x5fc38b*/
  this->Type = aP1; /*0x5fc395*/
  AbstractClass::GenerateUniqueID((int)&this->q004); /*0x5fc3b3*/
  if ( dword_A8EC60 < dword_A8EC58 /*0x5fc3ef*/
    || (byte_A8EC5D || !dword_A8EC58)
    && dword_A8EC64 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(OverlayClass_Array + 8))(
         &OverlayClass_Array,
         dword_A8EC58 + dword_A8EC64,
         0) )
  {
    v6 = dword_A8EC60++; /*0x5fc3fc*/
    *((unsigned int *)g_ObjectClass_Capacity + v6) = this; /*0x5fc40b*/
  }
  if ( *aP2 != word_AC1528 || aP2[1] != word_AC152A ) /*0x5fc429*/
  {
    dword_8333BC = aP3; /*0x5fc43b*/
    v7 = aP2[1]; /*0x5fc444*/
    IDA_LOWORD(aP1) = ((*aP2 << 8) + 128) / 256; /*0x5fc469*/
    IDA_HIWORD(aP1) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1); /*0x5fc497*/
    if ( !CellClass::FindInfantry(v8, 0) ) /*0x5fc4a0*/
      ObjectClass::Deploy(); /*0x5fc4b1*/
    dword_8333BC = -1; /*0x5fc4b6*/
  }
  return this; /*0x5fc4c2*/
}
}
// 0x5FD970
namespace gamemd {
void* Object::HandleAction(int * a2, int * a3)
{
  int *v4; // esi
  int v5; // ebp
  int GroundHeight; // eax
  int v7; // eax
  BuildingTypeClass * v8;
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14;
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  char *v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  unsigned int *v25; // eax
  int16_t *v26; // eax
  int v27; // [esp-18h] [ebp-40h]
  int16_t *v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp+10h] [ebp-18h]
  int v30; // [esp+14h] [ebp-14h] BYREF
  int v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  v4 = (int *)(&this->q03C6); /*0x5fd987*/
  v5 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->q0442) + 156))(this->Type); /*0x5fd98d*/
  v32 = *v4; /*0x5fd993*/
  v33 = this->q0A0; /*0x5fd99f*/
  v34 = this->q0A4; /*0x5fd9a6*/
  GroundHeight = Cell::GetGroundHeight(&v32); /*0x5fd9af*/
  v29 = ZCoordToScreenY(GroundHeight); /*0x5fd9c1*/
  v7 = 0; /*0x5fd9c5*/
  if ( g_ObjectTypeConfig <= 0 ) /*0x5fd9c9*/
  {
  LABEL_5:
    v7 = -1; /*0x5fd9e3*/
  }
  else
  {
    v8 = g_BuildingTypeClass_Array; /*0x5fd9d1*/
    while ( *(unsigned int *)v8->gap0 != this->Type ) /*0x5fd9d9*/
    {
      ++v7; /*0x5fd9db*/
      v8 = (BuildingTypeClass *)((char *)v8 + 4); /*0x5fd9dc*/
      if ( v7 >= g_ObjectTypeConfig ) /*0x5fd9e1*/
        goto LABEL_5; /*0x5fd9e1*/
    }
  }
  v9 = 0; /*0x5fd9ec*/
  v10 = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * v7]; /*0x5fd9ee*/
  if ( *(unsigned char *)(v10 + 681) || *(unsigned char *)(v10 + 680) || *(unsigned int *)(v10 + 660) == 126 || *(unsigned char *)(v10 + 682) ) /*0x5fda0a*/
    v9 = -12; /*0x5fda12*/
  if ( *(unsigned int *)(v10 + 664) == 9 ) /*0x5fda1e*/
    --v9; /*0x5fda20*/
  if ( v7 == 126 ) /*0x5fda24*/
    --v9; /*0x5fda26*/
  v11 = v9 + a2[1]; /*0x5fda30*/
  v30 = *a2; /*0x5fda32*/
  v31 = g_Map_VisibleRect + v11; /*0x5fda42*/
  v12 = this->Type; /*0x5fda46*/
  if ( v12->q2A9 ) /*0x5fda4c*/
  {
    v13 = 0; /*0x5fda5a*/
    if ( g_ObjectTypeConfig <= 0 ) /*0x5fda5e*/
    {
  LABEL_20:
      v13 = -1; /*0x5fda72*/
    }
    else
    {
      v14 = g_BuildingTypeClass_Array; /*0x5fda60*/
      while ( *(unsigned int *)v14->gap0 != v12 ) /*0x5fda68*/
      {
        ++v13; /*0x5fda6a*/
        v14 = (BuildingTypeClass *)((char *)v14 + 4); /*0x5fda6b*/
        if ( v13 >= g_ObjectTypeConfig ) /*0x5fda70*/
          goto LABEL_20; /*0x5fda70*/
      }
    }
    v15 = *(unsigned int *)&BuildingClass_InstanceArray->gap0[4 * FindBuildingByTiberiumType(v13)]; /*0x5fda8b*/
    v16 = *((unsigned int *)BuildingTypeClass_AnimTable + *(unsigned int *)(v15 + 192)); /*0x5fda93*/
    v17 = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[4 * *(unsigned int *)(*(unsigned int *)(v15 + 224) + 660)]; /*0x5fdaa8*/
    v18 = (*(int (__thiscall **)(int))(*(unsigned int *)v17 + 156))(v17); /*0x5fdaad*/
    if ( !v18 ) /*0x5fdab5*/
    {
      v19 = this->Type->q29C; /*0x5fdabd*/
      if ( v19 ) /*0x5fdac5*/
        v18 = (*(int (__thiscall **)(int))(*(unsigned int *)v19 + 156))(v19); /*0x5fdac9*/
    }
    DrawToSurfaceSHP( /*0x5fdb03*/
      g_DSurface_Hidden_2,
      *(unsigned int *)(v16 + 780),
      v18,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  else if ( v12->q2AE ) /*0x5fdb08*/
  {
    if ( v12->LandType == 167 ) /*0x5fdb20*/
      v31 -= 38; /*0x5fdb22*/
    v32 = *v4; /*0x5fdb2b*/
    v33 = this->q0A0; /*0x5fdb32*/
    v34 = this->q0A4; /*0x5fdb41*/
    v20 = (char *)BuildingTypeClass_AnimTable + 4 * *((unsigned int *)HouseClass_Player + 22549); /*0x5fdb60*/
    v27 = *((int16_t *)Coord::To_Cell(&MapClass_Instance, &v32) + 134); /*0x5fdb7c*/
    DrawToSurfaceSHP( /*0x5fdb9a*/
      g_DSurface_Hidden_2,
      *(unsigned int *)(*(unsigned int *)v20 + 780),
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      v27,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    v21 = *v4; /*0x5fdba1*/
    v22 = this->q0A0; /*0x5fdba3*/
    v34 = this->q0A4; /*0x5fdba9*/
    IDA_LOWORD(a2) = v21 / 256; /*0x5fdbb9*/
    IDA_HIWORD(a2) = v22 / 256; /*0x5fdbd1*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&a2) ) /*0x5fdbe3*/
    {
      v23 = this->q0A4; /*0x5fdbee*/
      v24 = this->q0A0; /*0x5fdbf1*/
      v32 = *v4; /*0x5fdbf4*/
      v34 = v23; /*0x5fdbfc*/
      v33 = v24; /*0x5fdc06*/
      v25 = Coord::To_Cell(&MapClass_Instance, &v32); /*0x5fdc0a*/
    }
    else
    {
      v26 = (int16_t *)Tactical::PixelToCell((int)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc21*/
      if ( LayerClass::CoordinatesLegal(&MapClass_Instance, v26) ) /*0x5fdc2c*/
      {
        v28 = (int16_t *)Tactical::PixelToCell((int)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc4a*/
        v25 = CellCoord::To_CellObj(&MapClass_Instance, v28); /*0x5fdc4b*/
      }
      else
      {
        IDA_LOWORD(a2) = 1; /*0x5fdc58*/
        IDA_HIWORD(a2) = g_Cell_PositionLUT; /*0x5fdc5f*/
        v25 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a2); /*0x5fdc6a*/
      }
    }
    DrawToSurfaceSHP( /*0x5fdcaa*/
      g_DSurface_Hidden_2,
      v25[13],
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      *((int16_t *)v25 + 134),
      0,
      0,
      0,
      0,
      0);
  }
}
}
// 0x5FDDE0
namespace gamemd {
int Object::ProcessEvent()
{
  return *(&this->uniqueId3); /*0x5fdde6*/
}
}
// 0x5FDF70
namespace gamemd {
void * Object::DrawObject(char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  AbstractClass::AnnounceExpiredPointer(1); /*0x5fdf91*/
  v3 = (*(int (__thiscall **)(int *, void ***))(OverlayClass_Array + 16))(&OverlayClass_Array, &this); /*0x5fdfaa*/
  if ( v3 != -1 && v3 < dword_A8EC60 && v3 < --dword_A8EC60 ) /*0x5fdfc5*/
  {
    do /*0x5fdfdd*/
    {
      ++v3; /*0x5fdfcd*/
      *((unsigned int *)g_ObjectClass_Capacity + v3 - 1) = *((unsigned int *)g_ObjectClass_Capacity + v3); /*0x5fdfd1*/
    }
    while ( v3 < dword_A8EC60 ); /*0x5fdfdd*/
  }
  if ( g_WTFMode ) /*0x5fdfe6*/
    ObjectClass::Undeploy(); /*0x5fdfea*/
  *(&this->uniqueId3) = 0; /*0x5fdff1*/
  ObjectClass::Dtor(); /*0x5fdffb*/
  if ( (a2 & 1) != 0 ) /*0x5fe005*/
    RA2_OPDEL(); /*0x5fe008*/
  return this; /*0x5fe012*/
}
}
// 0x62AC30
namespace gamemd {
void* * Object::CalculateObjectPlacementPosition(int * a2)
{
  int *result; // eax
  int v4; // edx
  int *v5; // ecx
  int *v6; // eax
  int v7; // ecx
  void *v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  unsigned int *v13; // ebp
  unsigned int *NeighbourContentCell; // esi
  int v15; // eax
  bool v16; // bl
  int v17; // eax
  unsigned int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  void *v21; // eax
  int *v22; // eax
  int v23; // eax
  int v26; // [esp+10h] [ebp-28h] BYREF
  int v27; // [esp+14h] [ebp-24h] BYREF
  int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  unsigned char v30[12]; // [esp+20h] [ebp-18h] BYREF
  int v31[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !this->q028 ) /*0x62ac39*/
  {
    result = a2; /*0x62ac40*/
    v4 = dword_AC4948; /*0x62ac44*/
    v5 = a2; /*0x62ac4a*/
  LABEL_39:
    *v5 = v4; /*0x62af27*/
    v5[1] = dword_AC494C; /*0x62af31*/
    v5[2] = dword_AC4950; /*0x62af3c*/
    return result; /*0x62af3c*/
  }
  if ( !(uint8_t)ParasiteClass::CanExistOnVictimCell(this) ) /*0x62ac5a*/
  {
    v12 = ((unsigned int)((*ProgressTimer::GetValue((unsigned short *)(this->q028 + 904), &v26) >> 12) + 1) >> 1) & 7; /*0x62ad3a*/
    v13 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028); /*0x62ad43*/
    NeighbourContentCell = Cell::GetNeighbourContent(v13, v12); /*0x62ad50*/
    if ( !*(unsigned char *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 132))(this->creationFrame) + 3278) ) /*0x62ad5a*/
    {
      v15 = NeighbourContentCell[59]; /*0x62ad64*/
      if ( v15 == 2 || v15 == 6 || v15 == 3 ) /*0x62ad77*/
      {
        v16 = (*(unsigned int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028) + 320) /*0x62ad90*/
             & 0x100) == 0;
        v17 = *(unsigned int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->uniqueId0) + 444))(this->q028) + 68); /*0x62ad9d*/
        if ( v17 >= 74 && v17 <= 99 ) /*0x62ada8*/
          v16 = 0; /*0x62adaa*/
        if ( (v17 < 205 || v17 > 230) && v16 ) /*0x62adbc*/
        {
          result = a2; /*0x62adbe*/
          v4 = dword_AC4948; /*0x62adc2*/
          v5 = a2; /*0x62adc8*/
          goto LABEL_39; /*0x62adca*/
        }
      }
    }
    v18 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, unsigned char *))(*NeighbourContentCell + 72))(NeighbourContentCell, v30); /*0x62adde*/
    v19 = ObjectPlacement::CalcPosition(NeighbourContentCell, v31, v18, 0, 0, 0); /*0x62ade9*/
    v27 = *v19; /*0x62adf0*/
    v20 = this->creationFrame; /*0x62adf4*/
    v28 = v19[1]; /*0x62adfa*/
    v29 = v19[2]; /*0x62ae03*/
    if ( v20 && (*(int (__thiscall **)(int))(*(unsigned int *)v20 + 44))(v20) == 1 ) /*0x62ae11*/
    {
      v21 = Coord::To_Cell(&MapClass_Instance, &v27); /*0x62ae1d*/
      v22 = (int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)v21 + 72))(v21, v31); /*0x62ae2b*/
      v27 = *v22; /*0x62ae30*/
      v28 = v22[1]; /*0x62ae37*/
      v29 = v22[2]; /*0x62ae3e*/
    }
    if ( *(unsigned char *)(this->q028 + 140) ) /*0x62ae45*/
    {
      if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v27) + 80) & 0x100) != 0 ) /*0x62ae67*/
      {
        v29 += dword_AC497C; /*0x62ae75*/
        *(unsigned char *)(this->creationFrame + 140) = 1; /*0x62ae7c*/
        goto LABEL_34; /*0x62ae83*/
      }
      goto LABEL_29; /*0x62ae67*/
    }
    if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v27) + 80) & 0x100) != 0 ) /*0x62aea9*/
    {
      v23 = (*(int (__thiscall **)(unsigned int *, int *))(*v13 + 72))(v13, v31); /*0x62aeb5*/
      if ( v29 >= *(unsigned int *)(v23 + 8) ) /*0x62aec1*/
      {
  LABEL_29:
        *(unsigned char *)(this->creationFrame + 140) = 0; /*0x62ae85*/
        goto LABEL_34; /*0x62ae8f*/
      }
      v29 += dword_AC497C; /*0x62aec9*/
      *(unsigned char *)(this->creationFrame + 140) = 1; /*0x62aed0*/
    }
    else
    {
      *(unsigned char *)(this->creationFrame + 140) = 0; /*0x62aedc*/
    }
  LABEL_34:
    v4 = dword_AC4948; /*0x62aee3*/
    v28 = v28; /*0x62aeed*/
    v29 = v29; /*0x62aef1*/
    if ( v27 != dword_AC4948 || v28 != dword_AC494C || v29 != dword_AC4950 ) /*0x62af07*/
    {
      *a2 = v27; /*0x62af0f*/
      a2[1] = v28; /*0x62af11*/
      a2[2] = v29; /*0x62af14*/
      return a2; /*0x62af1e*/
    }
    result = a2; /*0x62af21*/
    v5 = a2; /*0x62af25*/
    goto LABEL_39; /*0x62af25*/
  }
  v6 = (int *)(this->q028 + 156); /*0x62ac63*/
  v27 = *v6; /*0x62ac6a*/
  v7 = this->creationFrame; /*0x62ac6e*/
  v28 = v6[1]; /*0x62ac74*/
  v29 = v6[2]; /*0x62ac7d*/
  if ( v7 ) /*0x62ac81*/
  {
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 44))(v7) == 1 ) /*0x62ac8b*/
    {
      v8 = Coord::To_Cell(&MapClass_Instance, &v27); /*0x62ac97*/
      v9 = (int *)(*(int (__thiscall **)(void *, unsigned char *))(*(unsigned int *)v8 + 72))(v8, v30); /*0x62aca5*/
      v27 = *v9; /*0x62acaa*/
      v10 = this->q028; /*0x62acae*/
      v28 = v9[1]; /*0x62acb4*/
      v11 = v9[2]; /*0x62acb8*/
      v29 = v11; /*0x62acbb*/
      if ( *(unsigned char *)(v10 + 140) ) /*0x62acbf*/
        v29 = dword_AC497C + v11; /*0x62accf*/
    }
  }
  if ( *(unsigned char *)(this->q028 + 140) ) /*0x62acd6*/
    *(unsigned char *)(this->creationFrame + 140) = 1; /*0x62ace3*/
  else
    *(unsigned char *)(this->creationFrame + 140) = 0; /*0x62acef*/
  *a2 = v27; /*0x62ad03*/
  a2[1] = v28; /*0x62ad0a*/
  a2[2] = v29; /*0x62ad11*/
  return a2; /*0x62ad00*/
}
}
// 0x639E30
namespace gamemd {
void sub_639E30(int * a1, unsigned int * a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int **i; // edx
  int v18; // edx
  int v19; // eax
  unsigned int **j; // ecx
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]

  if ( !a1 && !a2 ) /*0x639e3d*/
    return 1; /*0x639e46*/
  v4 = 0; /*0x639e47*/
  if ( a1 ) /*0x639e4b*/
    v4 = a1[5]; /*0x639e4d*/
  v5 = 0; /*0x639e50*/
  v21 = 0; /*0x639e54*/
  if ( a2 ) /*0x639e58*/
  {
    v5 = a2[5]; /*0x639e5a*/
    v21 = v5; /*0x639e5d*/
  }
  if ( !v4 ) /*0x639e63*/
    return !v5; /*0x639e67*/
  if ( !v5 ) /*0x639e77*/
    return 0; /*0x639f1a*/
  v6 = a1[5]; /*0x639e7d*/
  v7 = v4 - 1; /*0x639e80*/
  if ( !v6 ) /*0x639e83*/
    goto LABEL_19; /*0x639e83*/
  if ( v7 >= v6 ) /*0x639e87*/
  {
    v8 = a1[37]; /*0x639e89*/
    if ( v8 < 0 ) /*0x639e91*/
      goto LABEL_19; /*0x639e91*/
    v7 = v8 + (v7 - v8) % a1[36]; /*0x639ea0*/
    v5 = v21; /*0x639ea2*/
  }
  if ( v7 >= 0 && v7 < v6 ) /*0x639eac*/
  {
    v9 = *(unsigned int *)(a1[2] + 4 * v7); /*0x639eb1*/
    goto LABEL_20; /*0x639eb4*/
  }
  LABEL_19:
  v9 = 0; /*0x639eb6*/
  LABEL_20:
  v10 = a2[5]; /*0x639eb8*/
  v11 = v5 - 1; /*0x639ebb*/
  if ( !v10 ) /*0x639ec0*/
    goto LABEL_27; /*0x639ec0*/
  if ( v11 >= v10 ) /*0x639ec4*/
  {
    v12 = a2[37]; /*0x639ec6*/
    if ( v12 >= 0 ) /*0x639ece*/
    {
      v11 = v12 + (v11 - v12) % a2[36]; /*0x639edd*/
      goto LABEL_24; /*0x639edd*/
    }
  LABEL_27:
    v13 = 0; /*0x639eef*/
    goto LABEL_28; /*0x639eef*/
  }
  LABEL_24:
  if ( v11 < 0 || v11 >= v10 ) /*0x639ee5*/
    goto LABEL_27; /*0x639ee5*/
  v13 = *(unsigned int *)(a2[2] + 4 * v11); /*0x639eea*/
  LABEL_28:
  v14 = *a1; /*0x639ef1*/
  v15 = *(unsigned int *)(v9 + 16); /*0x639ef3*/
  v22 = v14; /*0x639ef8*/
  v16 = 0; /*0x639efc*/
  if ( v15 <= 0 ) /*0x639f00*/
    return 0; /*0x639f00*/
  for ( i = *(unsigned int ***)(v9 + 4); **i != *a2; ++i ) /*0x639f02*/
  {
    if ( ++v16 >= v15 ) /*0x639f11*/
      return 0; /*0x639f11*/
  }
  if ( v16 == -1 ) /*0x639f1e*/
    return 0; /*0x639f1e*/
  v18 = *(unsigned int *)(v13 + 16); /*0x639f20*/
  v19 = 0; /*0x639f23*/
  if ( v18 <= 0 ) /*0x639f27*/
    return 0; /*0x639f27*/
  for ( j = *(unsigned int ***)(v13 + 4); **j != v22; ++j ) /*0x639f29*/
  {
    if ( ++v19 >= v18 ) /*0x639f3c*/
      return 0; /*0x639f45*/
  }
  return v19 != -1; /*0x639f49*/
}
}
// 0x646E90
namespace gamemd {
char Object_Init(char a1, int a2, int a3, char a4, int a5)
{
  char *v5; // eax
  char v7[112]; // [esp+8h] [ebp-70h] BYREF

  v5 = ScriptAction::InitActionFields( /*0x646ef0*/
         v7,
         *((unsigned int *)HouseClass_Player + 12),
         a3,
         a4,
         a1,
         *(unsigned int *)a2,
         *(unsigned char *)(a2 + 4),
         *(unsigned int *)a5,
         *(unsigned char *)(a5 + 4),
         a3,
         0);
  if ( Networking_LastEventIndex >= 128 ) /*0x646eff*/
    return 0; /*0x646f59*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu); /*0x646f1b*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x646f2c*/
  ++Networking_LastEventIndex; /*0x646f43*/
  Networking_NextPacketIndex = ((unsigned char)Networking_NextPacketIndex + 1) & 0x7F; /*0x646f48*/
  return 1; /*0x646f50*/
}
}
// 0x7DEEFA
namespace gamemd {
void Object_Calc(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  unsigned short *v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  char v11; // dl
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v17; // [esp+4h] [ebp-18h]
  unsigned int v18; // [esp+8h] [ebp-14h]
  unsigned short *v19; // [esp+Ch] [ebp-10h]
  unsigned char *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7def10*/
  v6 = aP0; /*0x7def17*/
  v20 = aP0; /*0x7def1a*/
  v7 = a1; /*0x7def1d*/
  v19 = a1; /*0x7def20*/
  do
  {
    v22 = a5; /*0x7def26*/
    IDA_HIWORD(v8) = 0; /*0x7def2b*/
    do
    {
      IDA_LOBYTE(v9) = *v6; /*0x7def2d*/
      if ( *v6 )
      {
        IDA_LOWORD(v8) = *v7; /*0x7def33*/
        IDA_LOBYTE(v17) = *v6; /*0x7def36*/
        v18 = v8; /*0x7def39*/
        v10 = (v8 >> 8) & 0xF8; /*0x7def45*/
        v11 = v10; /*0x7def50*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7def5c*/
        v13 = (v17 * ((v18 >> 3) & 0xFC)) >> 8; /*0x7def5f*/
        IDA_LOBYTE(v12) = !__CFADD__(v11, (unsigned char)v12) ? (uint8_t)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 3) & 0xFC, (unsigned char)v13) ? (uint8_t)(((v18 >> 3) & 0xFC) + v13) : -1;
        v8 = v12 >> 3 << 11; /*0x7def7a*/
        v14 = (uint8_t)(8 * v18); /*0x7def8e*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7def94*/
        IDA_LOBYTE(v15) = !__CFADD__((unsigned char)v14, (unsigned char)v15) ? (uint8_t)(v14 + v15) : -1;
        v9 = (v15 >> 3) | v8 | (32 * (v13 >> 2)); /*0x7defa3*/
        *v7 = v9; /*0x7defa5*/
      }
      ++v6; /*0x7defa8*/
      ++v7; /*0x7defa9*/
      --v22; /*0x7defac*/
    }
    while ( v22 );
    v6 = &v20[a3]; /*0x7defb8*/
    v20 += a3; /*0x7defbb*/
    v7 = (unsigned short *)((char *)v19 + a4); /*0x7defc1*/
    v19 = (unsigned short *)((char *)v19 + a4); /*0x7defc4*/
    --a6; /*0x7defc7*/
  }
  while ( a6 );
  return v9; /*0x7defd4*/
}
}
// 0x7DEFD7
namespace gamemd {
void Object_Calc_7DEFD7(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  unsigned short *v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  char v11; // dl
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v17; // [esp+4h] [ebp-18h]
  unsigned int v18; // [esp+8h] [ebp-14h]
  unsigned short *v19; // [esp+Ch] [ebp-10h]
  unsigned char *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7defed*/
  v6 = aP0; /*0x7deff4*/
  v20 = aP0; /*0x7deff7*/
  v7 = a1; /*0x7deffa*/
  v19 = a1; /*0x7deffd*/
  do
  {
    v22 = a5; /*0x7df003*/
    IDA_HIWORD(v8) = 0; /*0x7df008*/
    do
    {
      IDA_LOBYTE(v9) = *v6; /*0x7df00a*/
      if ( *v6 )
      {
        IDA_LOWORD(v8) = *v7; /*0x7df010*/
        IDA_LOBYTE(v17) = *v6; /*0x7df013*/
        v18 = v8; /*0x7df016*/
        v10 = (v8 >> 8) & 0xFC; /*0x7df022*/
        v11 = v10; /*0x7df02d*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7df039*/
        v13 = (v17 * ((v18 >> 2) & 0xF8)) >> 8; /*0x7df03c*/
        IDA_LOBYTE(v12) = !__CFADD__(v11, (unsigned char)v12) ? (uint8_t)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 2) & 0xF8, (unsigned char)v13) ? (uint8_t)(((v18 >> 2) & 0xF8) + v13) : -1;
        v8 = v12 >> 2 << 10; /*0x7df057*/
        v14 = (uint8_t)(8 * v18); /*0x7df06b*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df071*/
        IDA_LOBYTE(v15) = !__CFADD__((unsigned char)v14, (unsigned char)v15) ? (uint8_t)(v14 + v15) : -1;
        v9 = (v15 >> 3) | v8 | (32 * (v13 >> 3)); /*0x7df080*/
        *v7 = v9; /*0x7df082*/
      }
      ++v6; /*0x7df085*/
      ++v7; /*0x7df086*/
      --v22; /*0x7df089*/
    }
    while ( v22 );
    v6 = &v20[a3]; /*0x7df095*/
    v20 += a3; /*0x7df098*/
    v7 = (unsigned short *)((char *)v19 + a4); /*0x7df09e*/
    v19 = (unsigned short *)((char *)v19 + a4); /*0x7df0a1*/
    --a6; /*0x7df0a4*/
  }
  while ( a6 );
  return v9; /*0x7df0b1*/
}
}
// 0x7DF0B4
namespace gamemd {
void Object_Calc_7DF0B4(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  unsigned short *v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  char v11; // dl
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v17; // [esp+4h] [ebp-18h]
  unsigned int v18; // [esp+8h] [ebp-14h]
  unsigned short *v19; // [esp+Ch] [ebp-10h]
  unsigned char *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7df0ca*/
  v6 = aP0; /*0x7df0d1*/
  v20 = aP0; /*0x7df0d4*/
  v7 = a1; /*0x7df0d7*/
  v19 = a1; /*0x7df0da*/
  do
  {
    v22 = a5; /*0x7df0e0*/
    IDA_HIWORD(v8) = 0; /*0x7df0e5*/
    do
    {
      IDA_LOBYTE(v9) = *v6; /*0x7df0e7*/
      if ( *v6 )
      {
        IDA_LOWORD(v8) = *v7; /*0x7df0ed*/
        IDA_LOBYTE(v17) = *v6; /*0x7df0f0*/
        v18 = v8; /*0x7df0f3*/
        v10 = (v8 >> 8) & 0xF8; /*0x7df0ff*/
        v11 = v10; /*0x7df10a*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7df116*/
        v13 = (v17 * ((v18 >> 3) & 0xF8)) >> 8; /*0x7df119*/
        IDA_LOBYTE(v12) = !__CFADD__(v11, (unsigned char)v12) ? (uint8_t)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 3) & 0xF8, (unsigned char)v13) ? (uint8_t)(((v18 >> 3) & 0xF8) + v13) : -1;
        v8 = v12 >> 3 << 11; /*0x7df134*/
        v14 = (uint8_t)(4 * v18); /*0x7df148*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df14e*/
        IDA_LOBYTE(v15) = !__CFADD__((unsigned char)v14, (unsigned char)v15) ? (uint8_t)(v14 + v15) : -1;
        v9 = (v15 >> 2) | v8 | (v13 >> 3 << 6); /*0x7df15d*/
        *v7 = v9; /*0x7df15f*/
      }
      ++v6; /*0x7df162*/
      ++v7; /*0x7df163*/
      --v22; /*0x7df166*/
    }
    while ( v22 );
    v6 = &v20[a3]; /*0x7df172*/
    v20 += a3; /*0x7df175*/
    v7 = (unsigned short *)((char *)v19 + a4); /*0x7df17b*/
    v19 = (unsigned short *)((char *)v19 + a4); /*0x7df17e*/
    --a6; /*0x7df181*/
  }
  while ( a6 );
  return v9; /*0x7df18e*/
}
}
// 0x7DF191
namespace gamemd {
void Object_Calc_7DF191(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
  unsigned char *v6; // esi
  unsigned short *v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  char v11; // dl
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v17; // [esp+4h] [ebp-18h]
  unsigned int v18; // [esp+8h] [ebp-14h]
  unsigned short *v19; // [esp+Ch] [ebp-10h]
  unsigned char *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7df1a7*/
  v6 = aP0; /*0x7df1ae*/
  v20 = aP0; /*0x7df1b1*/
  v7 = a1; /*0x7df1b4*/
  v19 = a1; /*0x7df1b7*/
  do
  {
    v22 = a5; /*0x7df1bd*/
    IDA_HIWORD(v8) = 0; /*0x7df1c2*/
    do
    {
      IDA_LOBYTE(v9) = *v6; /*0x7df1c4*/
      if ( *v6 )
      {
        IDA_LOWORD(v8) = *v7; /*0x7df1ca*/
        IDA_LOBYTE(v17) = *v6; /*0x7df1cd*/
        v18 = v8; /*0x7df1d0*/
        v10 = (v8 >> 7) & 0xF8; /*0x7df1dc*/
        v11 = v10; /*0x7df1e7*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7df1f3*/
        v13 = (v17 * ((v18 >> 2) & 0xF8)) >> 8; /*0x7df1f6*/
        IDA_LOBYTE(v12) = !__CFADD__(v11, (unsigned char)v12) ? (uint8_t)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 2) & 0xF8, (unsigned char)v13) ? (uint8_t)(((v18 >> 2) & 0xF8) + v13) : -1;
        v8 = v12 >> 3 << 10; /*0x7df211*/
        v14 = (uint8_t)(8 * v18); /*0x7df225*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df22b*/
        IDA_LOBYTE(v15) = !__CFADD__((unsigned char)v14, (unsigned char)v15) ? (uint8_t)(v14 + v15) : -1;
        v9 = (v15 >> 3) | v8 | (32 * (v13 >> 3)); /*0x7df23a*/
        *v7 = v9; /*0x7df23c*/
      }
      ++v6; /*0x7df23f*/
      ++v7; /*0x7df240*/
      --v22; /*0x7df243*/
    }
    while ( v22 );
    v6 = &v20[a3]; /*0x7df24f*/
    v20 += a3; /*0x7df252*/
    v7 = (unsigned short *)((char *)v19 + a4); /*0x7df258*/
    v19 = (unsigned short *)((char *)v19 + a4); /*0x7df25b*/
    --a6; /*0x7df25e*/
  }
  while ( a6 );
  return v9; /*0x7df26b*/
}
}
// 0x7DF280
namespace gamemd {
void Object_Calc_7DF280(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
  unsigned char *v8; // esi
  unsigned short *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  unsigned short *v16; // [esp+18h] [ebp-10h]
  unsigned char *v17; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+24h] [ebp-4h]

  v15.m64_u64 = 0; /*0x7df296*/
  v8 = a2; /*0x7df2b2*/
  v17 = a2; /*0x7df2b5*/
  v9 = a3; /*0x7df2b8*/
  v16 = a3; /*0x7df2bb*/
  LABEL_2:
  while ( 2 ) /*0x7df2c1*/
  {
    v19 = a6; /*0x7df2c1*/
    IDA_HIWORD(v10) = 0; /*0x7df2c9*/
    do /*0x7df39c*/
    {
      while ( 1 ) /*0x7df340*/
      {
        IDA_LOBYTE(v11) = *v8; /*0x7df340*/
        if ( *v8 ) /*0x7df340*/
          break; /*0x7df340*/
        ++v8; /*0x7df300*/
        ++v9; /*0x7df301*/
        if ( !--v19 ) /*0x7df307*/
        {
          v8 = &v17[a4]; /*0x7df30c*/
          v17 += a4; /*0x7df30f*/
          v9 = (unsigned short *)((char *)v16 + a5); /*0x7df315*/
          v16 = (unsigned short *)((char *)v16 + a5); /*0x7df318*/
          if ( --a7 ) /*0x7df31e*/
            goto LABEL_2; /*0x7df31e*/
          goto LABEL_9; /*0x7df31e*/
        }
      }
      v15.m64_i8[0] = *v8; /*0x7df346*/
      IDA_LOWORD(v10) = *v9; /*0x7df349*/
      v15.m64_i8[2] = *v8; /*0x7df34c*/
      v15.m64_i8[4] = *v8; /*0x7df34f*/
      v12 = _m_psrlwi(_m_punpcklbw(a1, (__m64)*(unsigned int *)(a8 + 4 * v10)), 8u); /*0x7df35a*/
      a1 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v12, v15), 8u), v12), 2u); /*0x7df368*/
      v14 = a1; /*0x7df36c*/
      v11 = 32 * v14.m64_u8[2]; /*0x7df37e*/
      ++v8; /*0x7df38f*/
      v10 = (v14.m64_u8[4] << 10) & 0xF800 | v11 | ((uint8_t)v14.m64_i8[0] >> 1); /*0x7df390*/
      *v9++ = v10; /*0x7df395*/
      --v19; /*0x7df399*/
    }
    while ( v19 ); /*0x7df39c*/
    v8 = &v17[a4]; /*0x7df3a1*/
    v17 += a4; /*0x7df3a4*/
    v9 = (unsigned short *)((char *)v16 + a5); /*0x7df3aa*/
    v16 = (unsigned short *)((char *)v16 + a5); /*0x7df3ad*/
    if ( --a7 ) /*0x7df3b3*/
      continue; /*0x7df3b3*/
    break;
  }
  LABEL_9:
  _m_empty(); /*0x7df3b9*/
  return v11; /*0x7df3bf*/
}
}
// 0x7DF3C2
namespace gamemd {
void Object_Calc_7DF3C2(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
  unsigned char *v8; // esi
  unsigned short *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  unsigned short *v16; // [esp+18h] [ebp-10h]
  unsigned char *v17; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+24h] [ebp-4h]

  v15.m64_u64 = 0; /*0x7df3d8*/
  v8 = a2; /*0x7df3f4*/
  v17 = a2; /*0x7df3f7*/
  v9 = a3; /*0x7df3fa*/
  v16 = a3; /*0x7df3fd*/
  LABEL_2:
  while ( 2 ) /*0x7df403*/
  {
    v19 = a6; /*0x7df403*/
    IDA_HIWORD(v10) = 0; /*0x7df40b*/
    do /*0x7df4da*/
    {
      while ( 1 ) /*0x7df480*/
      {
        IDA_LOBYTE(v11) = *v8; /*0x7df480*/
        if ( *v8 ) /*0x7df480*/
          break; /*0x7df480*/
        ++v8; /*0x7df440*/
        ++v9; /*0x7df441*/
        if ( !--v19 ) /*0x7df447*/
        {
          v8 = &v17[a4]; /*0x7df44c*/
          v17 += a4; /*0x7df44f*/
          v9 = (unsigned short *)((char *)v16 + a5); /*0x7df455*/
          v16 = (unsigned short *)((char *)v16 + a5); /*0x7df458*/
          if ( --a7 ) /*0x7df45e*/
            goto LABEL_2; /*0x7df45e*/
          goto LABEL_9; /*0x7df45e*/
        }
      }
      v15.m64_i8[0] = *v8; /*0x7df486*/
      IDA_LOWORD(v10) = *v9; /*0x7df489*/
      v15.m64_i8[2] = *v8; /*0x7df48c*/
      v15.m64_i8[4] = *v8; /*0x7df48f*/
      v12 = _m_psrlwi(_m_punpcklbw(a1, (__m64)*(unsigned int *)(a8 + 4 * v10)), 8u); /*0x7df49a*/
      a1 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v12, v15), 8u), v12), 3u); /*0x7df4a8*/
      v14 = a1; /*0x7df4ac*/
      v11 = 32 * v14.m64_u8[2]; /*0x7df4bc*/
      ++v8; /*0x7df4cd*/
      v10 = (v14.m64_u8[4] << 10) & 0x7C00 | v11 | v14.m64_u8[0]; /*0x7df4ce*/
      *v9++ = v10; /*0x7df4d3*/
      --v19; /*0x7df4d7*/
    }
    while ( v19 ); /*0x7df4da*/
    v8 = &v17[a4]; /*0x7df4df*/
    v17 += a4; /*0x7df4e2*/
    v9 = (unsigned short *)((char *)v16 + a5); /*0x7df4e8*/
    v16 = (unsigned short *)((char *)v16 + a5); /*0x7df4eb*/
    if ( --a7 ) /*0x7df4f1*/
      continue; /*0x7df4f1*/
    break;
  }
  LABEL_9:
  _m_empty(); /*0x7df4f7*/
  return v11; /*0x7df4fd*/
}
}
// 0x7DF500
namespace gamemd {
void Object_Calc_7DF500(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
  unsigned char *v8; // esi
  unsigned short *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  unsigned short *v16; // [esp+18h] [ebp-10h]
  unsigned char *v17; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+24h] [ebp-4h]

  v15.m64_u64 = 0; /*0x7df516*/
  v8 = a2; /*0x7df532*/
  v17 = a2; /*0x7df535*/
  v9 = a3; /*0x7df538*/
  v16 = a3; /*0x7df53b*/
  LABEL_2:
  while ( 2 ) /*0x7df541*/
  {
    v19 = a6; /*0x7df541*/
    IDA_HIWORD(v10) = 0; /*0x7df549*/
    do /*0x7df61a*/
    {
      while ( 1 ) /*0x7df5c0*/
      {
        IDA_LOBYTE(v11) = *v8; /*0x7df5c0*/
        if ( *v8 ) /*0x7df5c0*/
          break; /*0x7df5c0*/
        ++v8; /*0x7df580*/
        ++v9; /*0x7df581*/
        if ( !--v19 ) /*0x7df587*/
        {
          v8 = &v17[a4]; /*0x7df58c*/
          v17 += a4; /*0x7df58f*/
          v9 = (unsigned short *)((char *)v16 + a5); /*0x7df595*/
          v16 = (unsigned short *)((char *)v16 + a5); /*0x7df598*/
          if ( --a7 ) /*0x7df59e*/
            goto LABEL_2; /*0x7df59e*/
          goto LABEL_9; /*0x7df59e*/
        }
      }
      v15.m64_i8[0] = *v8; /*0x7df5c6*/
      IDA_LOWORD(v10) = *v9; /*0x7df5c9*/
      v15.m64_i8[2] = *v8; /*0x7df5cc*/
      v15.m64_i8[4] = *v8; /*0x7df5cf*/
      v12 = _m_psrlwi(_m_punpcklbw(a1, (__m64)*(unsigned int *)(a8 + 4 * v10)), 8u); /*0x7df5da*/
      a1 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v12, v15), 8u), v12), 2u); /*0x7df5e8*/
      v14 = a1; /*0x7df5ec*/
      v11 = v14.m64_u8[2] << 6; /*0x7df5fc*/
      ++v8; /*0x7df60d*/
      v10 = (v14.m64_u8[4] << 10) & 0xF800 | v11 | v14.m64_u8[0]; /*0x7df60e*/
      *v9++ = v10; /*0x7df613*/
      --v19; /*0x7df617*/
    }
    while ( v19 ); /*0x7df61a*/
    v8 = &v17[a4]; /*0x7df61f*/
    v17 += a4; /*0x7df622*/
    v9 = (unsigned short *)((char *)v16 + a5); /*0x7df628*/
    v16 = (unsigned short *)((char *)v16 + a5); /*0x7df62b*/
    if ( --a7 ) /*0x7df631*/
      continue; /*0x7df631*/
    break;
  }
  LABEL_9:
  _m_empty(); /*0x7df637*/
  return v11; /*0x7df63d*/
}
}
// 0x7DF640
namespace gamemd {
void Object_Calc_7DF640(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
  unsigned char *v8; // esi
  unsigned short *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  unsigned short *v16; // [esp+18h] [ebp-10h]
  unsigned char *v17; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+24h] [ebp-4h]

  v15.m64_u64 = 0; /*0x7df656*/
  v8 = a2; /*0x7df672*/
  v17 = a2; /*0x7df675*/
  v9 = a3; /*0x7df678*/
  v16 = a3; /*0x7df67b*/
  LABEL_2:
  while ( 2 ) /*0x7df681*/
  {
    v19 = a6; /*0x7df681*/
    IDA_HIWORD(v10) = 0; /*0x7df689*/
    do /*0x7df75b*/
    {
      while ( 1 ) /*0x7df700*/
      {
        IDA_LOBYTE(v11) = *v8; /*0x7df700*/
        if ( *v8 ) /*0x7df700*/
          break; /*0x7df700*/
        ++v8; /*0x7df6c0*/
        ++v9; /*0x7df6c1*/
        if ( !--v19 ) /*0x7df6c7*/
        {
          v8 = &v17[a4]; /*0x7df6cc*/
          v17 += a4; /*0x7df6cf*/
          v9 = (unsigned short *)((char *)v16 + a5); /*0x7df6d5*/
          v16 = (unsigned short *)((char *)v16 + a5); /*0x7df6d8*/
          if ( --a7 ) /*0x7df6de*/
            goto LABEL_2; /*0x7df6de*/
          goto LABEL_9; /*0x7df6de*/
        }
      }
      v15.m64_i8[0] = *v8; /*0x7df706*/
      IDA_LOWORD(v10) = *v9; /*0x7df709*/
      v15.m64_i8[2] = *v8; /*0x7df70c*/
      v15.m64_i8[4] = *v8; /*0x7df70f*/
      v12 = _m_psrlwi(_m_punpcklbw(a1, (__m64)*(unsigned int *)(a8 + 4 * v10)), 8u); /*0x7df71a*/
      a1 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v12, v15), 8u), v12), 2u); /*0x7df728*/
      v14 = a1; /*0x7df72c*/
      v11 = (16 * v14.m64_u8[2]) & 0xA60; /*0x7df747*/
      ++v8; /*0x7df74e*/
      v10 = (v14.m64_u8[4] << 10) | v11 | ((uint8_t)v14.m64_i8[0] >> 1); /*0x7df74f*/
      *v9++ = v10; /*0x7df754*/
      --v19; /*0x7df758*/
    }
    while ( v19 ); /*0x7df75b*/
    v8 = &v17[a4]; /*0x7df760*/
    v17 += a4; /*0x7df763*/
    v9 = (unsigned short *)((char *)v16 + a5); /*0x7df769*/
    v16 = (unsigned short *)((char *)v16 + a5); /*0x7df76c*/
    if ( --a7 ) /*0x7df772*/
      continue; /*0x7df772*/
    break;
  }
  LABEL_9:
  _m_empty(); /*0x7df778*/
  return v11; /*0x7df77e*/
}
}
// 0x5A7E90
namespace gamemd {
void sub_5A7E90(int a1, unsigned short * a2)
{
  unsigned int *v2; // ebx
  int result; // eax
  int v4; // ebp
  int v5; // edi
  int i; // esi
  int v7; // ecx
  unsigned int *v8; // eax
  int v9; // [esp+8h] [ebp-14h]
  unsigned int *v10; // [esp+Ch] [ebp-10h]
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v2 = (unsigned int *)*((unsigned int *)g_FrameCounter + a1); /*0x5a7e9e*/
  v10 = v2; /*0x5a7ea3*/
  result = (*(int (__thiscall **)(unsigned int *))(*v2 + 156))(v2); /*0x5a7ea9*/
  v13 = result; /*0x5a7eb1*/
  if ( result ) /*0x5a7eb5*/
  {
    result = v2[186]; /*0x5a7ebb*/
    v4 = 0; /*0x5a7ec1*/
    if ( result > 0 ) /*0x5a7ec5*/
    {
      v5 = g_MapCellHeight_Value; /*0x5a7ecd*/
      do /*0x5a7f85*/
      {
        for ( i = 0; i < v2[185]; ++i ) /*0x5a7edd*/
        {
          IDA_LOWORD(v9) = i + *a2; /*0x5a7ef4*/
          IDA_HIWORD(v9) = a2[1] + v4; /*0x5a7ef9*/
          v12 = v9; /*0x5a7f02*/
          v7 = IDA_SHIWORD(v9) + (int16_t)v9; /*0x5a7f0c*/
          if ( v7 > v5 ) /*0x5a7f11*/
          {
            if ( (int16_t)v9 - IDA_SHIWORD(v9) >= v5 || IDA_SHIWORD(v9) - (int16_t)v9 >= v5 || v7 > g_MapCellCount ) /*0x5a7f27*/
            {
              v2 = v10; /*0x5a7f69*/
            }
            else
            {
              v8 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v12); /*0x5a7f33*/
              v2 = v10; /*0x5a7f38*/
              if ( *(unsigned int *)(v13 + 4 * (i + v4 * v10[185]) + 16) ) /*0x5a7f4b*/
              {
                v8[14] = 0xFFFF; /*0x5a7f53*/
                *((unsigned char *)v8 + 282) = 0; /*0x5a7f5a*/
              }
              v5 = g_MapCellHeight_Value; /*0x5a7f61*/
            }
          }
        }
        result = v2[186]; /*0x5a7f7c*/
        ++v4; /*0x5a7f82*/
      }
      while ( v4 < result ); /*0x5a7f85*/
    }
  }
  return result; /*0x5a7f8d*/
}
}
// 0x710890
namespace gamemd {
void sub_710890(int a1, int a2, int * a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x710895*/
  if ( a2 <= 0 ) /*0x710897*/
    return 0; /*0x7108c9*/
  v4 = *a3; /*0x71089d*/
  while ( 1 ) /*0x7108a6*/
  {
    v5 = *(unsigned int *)(a1 + 8 * (v3 / 2)); /*0x7108a6*/
    if ( v5 <= v4 ) /*0x7108ae*/
      break; /*0x7108ae*/
    v3 /= 2; /*0x7108b0*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x7108c2*/
      return 0; /*0x7108c2*/
  }
  if ( v5 != v4 ) /*0x7108b4*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x7108b6*/
    v3 += -1 - v3 / 2; /*0x7108be*/
    goto LABEL_7; /*0x7108be*/
  }
  return a1 + 8 * (v3 / 2); /*0x7108c4*/
}
}
// 0x42B1F0
namespace gamemd {
int Object::ComputeAllocationSize()
{
  return 2 * g_Cell_PositionLUT * (g_CellPositionOffset + 4); /*0x42b201*/
}
} // namespace gamemd

// 0x53E420
namespace gamemd {
void ** Object::RemoveObjectArray()
{
  void **result; // eax
  int v2; // edx

  result = (void **)g_StreamPool; /*0x53e420*/
  if ( g_StreamPool ) /*0x53e428*/
  {
    if ( this ) /*0x53e42c*/
    {
      result = (void **)dword_AA044C; /*0x53e434*/
      v2 = 1; /*0x53e439*/
      if ( dword_AA0374 > 1 ) /*0x53e440*/
      {
        while ( *result != this ) /*0x53e444*/
        {
          ++v2; /*0x53e446*/
          ++result; /*0x53e447*/
          if ( v2 >= dword_AA0374 ) /*0x53e44c*/
            return result; /*0x53e44c*/
        }
        *result = 0; /*0x53e450*/
        return (void **)--dword_AA0450; /*0x53e45b*/
      }
    }
  }
  return result; /*0x53e44e*/
}
} // namespace gamemd

// 0x5F5230
namespace gamemd {
int Object::Unlink()
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]
  char v3; // [esp+8h] [ebp+8h]

  result = this->q034; /*0x5f5230*/
  if ( result == v2 && result ) /*0x5f523d*/
  {
    --result->fallRate; /*0x5f5244*/
    this->attachedTag = 0; /*0x5f5247*/
  }
  IDA_LOBYTE(result) = aP1; /*0x5f524f*/
  if ( aP1 ) /*0x5f5255*/
  {
    result = this->nextObject; /*0x5f5257*/
    if ( v2 == result ) /*0x5f525c*/
    {
      if ( v2 ) /*0x5f5260*/
      {
        result = result->nextObject; /*0x5f5262*/
        this->nextObject = result; /*0x5f5265*/
      }
    }
  }
  if ( v2 == this->parachute ) /*0x5f526e*/
    this->parachute = 0; /*0x5f5270*/
  return result; /*0x5f527a*/
}
} // namespace gamemd

// 0x5FD270
namespace gamemd {
char Object::CheckState(IUnknown * aP1, int a3)
{
  unsigned int *v5; // eax

  aP1 = aP1; /*0x5fd271*/
  IDA_LOWORD(aP1) = *aP1 / 256; /*0x5fd290*/
  IDA_HIWORD(aP1) = v3[1] / 256; /*0x5fd2a4*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1); /*0x5fd2b1*/
  if ( CellClass::FindInfantry(v5, 0) ) /*0x5fd2ba*/
    return 0; /*0x5fd2c4*/
  else
    return ObjectClass::Deploy(); /*0x5fd2d2*/
}
} // namespace gamemd

// 0x5FD8F0
namespace gamemd {
int Object::LoadObject(ObjectClass * aP1, int aP1a)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register(this); /*0x5fd901*/
  if ( Register >= 0 ) /*0x5fd905*/
  {
    if ( aP1 ) /*0x5fd909*/
    {
      ObjectClass::Init(aP1, (int)&aP1a); /*0x5fd912*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 43); /*0x5fd93e*/
  }
  return Register; /*0x5fd945*/
}
} // namespace gamemd

// 0x5FD950
namespace gamemd {
int Object::SaveObject(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x5fd964*/
}
} // namespace gamemd

// 0x5FDF00
namespace gamemd {
int Object::StubReturn176()
{
  return 176; /*0x5fdf05*/
}
} // namespace gamemd

// 0x5FDF10
namespace gamemd {
int Object::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x5fdf16*/
    return -2147467261; /*0x5fdf18*/
  *a2 = 237448647; /*0x5fdf26*/
  a2[1] = 298949647; /*0x5fdf2e*/
  a2[2] = -1610610249; /*0x5fdf37*/
  a2[3] = -777003740; /*0x5fdf40*/
  return 0; /*0x5fdf1d*/
}
} // namespace gamemd

// 0x5FDF50
namespace gamemd {
int Object::StubReturn20()
{
  return 20; /*0x5fdf55*/
}
} // namespace gamemd

// 0x637DD0
namespace gamemd {
char sub_637DD0(char a1, int a2, int a3, int a4, int a5, int a6, int a7, short a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
  char result; // al
  unsigned char v29[108]; // [esp-70h] [ebp-78h] BYREF
  int v30; // [esp-4h] [ebp-Ch]

  result = a1; /*0x637dd0*/
  if ( a1 == 4 ) /*0x637dd8*/
  {
    IDA_HIBYTE(a8) = 1; /*0x637de8*/
    qmemcpy(v29, &a1, sizeof(v29)); /*0x637df0*/
    IDA_LOWORD(v30) = a28; /*0x637df2*/
    IDA_BYTE2(v30) = IDA_BYTE2(a28); /*0x637df4*/
    return Network::RecordEvent( /*0x637df5*/
             *(int64_t *)v29,
             *(int *)&v29[8],
             *(int *)&v29[12],
             *(int *)&v29[16],
             *(int *)&v29[20],
             *(int *)&v29[24],
             *(int *)&v29[28],
             *(int *)&v29[32],
             *(int *)&v29[36],
             *(int *)&v29[40],
             *(int *)&v29[44],
             *(int *)&v29[48],
             *(int *)&v29[52],
             *(int *)&v29[56],
             *(int *)&v29[60],
             *(int *)&v29[64],
             *(int *)&v29[68],
             *(int *)&v29[72],
             *(int *)&v29[76],
             *(int *)&v29[80],
             *(int *)&v29[84],
             *(int *)&v29[88],
             *(int *)&v29[92],
             *(int *)&v29[96],
             *(int *)&v29[100],
             *(int *)&v29[104],
             v30);
  }
  return result; /*0x637dfa*/
}
} // namespace gamemd

// 0x733C60
namespace gamemd {
BOOL sub_733C60(int a1, const char * a2)
{
  const char *v4; // eax

  v4 = (const char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 136))(a1) + 36); /*0x733c6e*/
  return a2 && !strcmp(v4, a2) && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 316))(a1); /*0x733cb6*/
}
} // namespace gamemd

// 0x7AD330
namespace gamemd {
SessionClass * Object::DtorWithDelete(char a2)
{
  DeleteAndZero(); /*0x7ad333*/
  if ( (a2 & 1) != 0 ) /*0x7ad33d*/
    RA2_OPDEL(); /*0x7ad340*/
  return this; /*0x7ad34a*/
}
} // namespace gamemd

// 0x7CBC11
namespace gamemd {
char * sub_7CBC11(char * VarName)
{
  char *v1; // esi

  _lock(12); /*0x7cbc14*/
  v1 = getenv(VarName); /*0x7cbc24*/
  _unlock(12); /*0x7cbc26*/
  return v1; /*0x7cbc30*/
}
} // namespace gamemd
