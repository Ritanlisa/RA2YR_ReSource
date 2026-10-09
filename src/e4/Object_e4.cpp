// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
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
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/Vector3_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPlacement_e4.hpp"  // G57w10 D supply
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_167(); }  // w18j2 raw 0x0056C500

// 0x47C3D0
namespace gamemd {
int Object::FindClosestObjectCell(unsigned int *aP1, char aP2, int aP3)
{
  double v4; // st7
  int v5; // edi
  int v6; // ebx
  _BYTE *Object_field_0xE8; // ecx
  _BYTE *v8; // esi
  _DWORD *v9; // eax
  int v10; // eax
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+2Ch] [ebp-20h]
  _BYTE v16[20]; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v12 = 0; /*0x47c3e3*/
  v13 = 0; /*0x47c3e7*/
  v5 = 7 * *aP1; /*0x47c3f2*/
  v6 = 7 * aP1[1]; /*0x47c3fe*/
  if ( aP2 ) /*0x47c405*/
    Object_field_0xE8 = this->Object_field_0xE8; /*0x47c407*/
  else
    Object_field_0xE8 = this->Object_field_0xE4; /*0x47c40f*/
  if ( !Object_field_0xE8 ) /*0x47c417*/
    return 0; /*0x47c4bf*/
  v8 = Object_field_0xE8; /*0x47c41d*/
  do /*0x47c4ac*/
  {
    if ( (v8[20] & 1) != 0 && v8 != (_BYTE *)aP3 ) /*0x47c435*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v16); /*0x47c440*/
      v14 = (unsigned __int8)*v9 - v5; /*0x47c45a*/
      v15 = (unsigned __int8)v9[1] - v6; /*0x47c463*/
      v17 = v9[2]; /*0x47c467*/
      Math::Sqrt((double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x47c484*/
      IDA_LOWORD(v10) = Math::RoundToInt(v4); /*0x47c48c*/
      if ( !v12 || v10 < v13 ) /*0x47c49d*/
      {
        v12 = (int)v8; /*0x47c49f*/
        v13 = v10; /*0x47c4a3*/
      }
    }
    v8 = (_BYTE *)*((_DWORD *)v8 + 12); /*0x47c4a7*/
  }
  while ( v8 ); /*0x47c4ac*/
  return v12; /*0x47c4b6*/
}
}
// 0x47C5A0
namespace gamemd {
int Object::FindObjectCell(TechnoClass * aP1, char aP2)
{
  _DWORD *Object_field_0xE4; // esi
  int result; // eax

  if ( byte_A8E9A0 ) /*0x47c5ab*/
  {
    Object_field_0xE4 = this->Object_field_0xE4; /*0x47c5ad*/
    if ( Object_field_0xE4 ) /*0x47c5b5*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*Object_field_0xE4 + 44))(Object_field_0xE4) != 2 ) /*0x47c5c1*/
      {
        Object_field_0xE4 = (_DWORD *)Object_field_0xE4[12]; /*0x47c5c3*/
        if ( !Object_field_0xE4 ) /*0x47c5c8*/
          goto LABEL_5; /*0x47c5c8*/
      }
      return (int)Object_field_0xE4; /*0x47c5c1*/
    }
  }
  LABEL_5:
  result = Object::FindClosestObjectCell(this, aP1, aP2, 0); /*0x47c5ca*/
  if ( !result ) /*0x47c5df*/
  {
    if ( byte_A8E9A0 ) /*0x47c5e8*/
    {
      Object_field_0xE4 = this->Object_field_0xE4; /*0x47c5ea*/
      if ( Object_field_0xE4 ) /*0x47c5f2*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*Object_field_0xE4 + 44))(Object_field_0xE4) != 36 ) /*0x47c5fe*/
        {
          Object_field_0xE4 = (_DWORD *)Object_field_0xE4[12]; /*0x47c600*/
          if ( !Object_field_0xE4 ) /*0x47c605*/
            return 0; /*0x47c605*/
        }
        return (int)Object_field_0xE4; /*0x47c612*/
      }
    }
    return 0; /*0x47c607*/
  }
  return result; /*0x47c609*/
}
}
// 0x4F9A90
namespace gamemd {
int Object::IsAlliedWithObjectHouse(int aP1)
{
  int result; // eax

  if ( !aP1 ) /*0x4f9a99*/
    goto LABEL_9; /*0x4f9a99*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 60))(aP1); /*0x4f9a9d*/
  if ( !result ) /*0x4f9aa2*/
    goto LABEL_9; /*0x4f9aa2*/
  if ( (Object *)result == this ) /*0x4f9aa6*/
  {
    IDA_LOBYTE(result) = 1; /*0x4f9aa8*/
    return result; /*0x4f9aab*/
  }
  result = *(_DWORD *)(result + 48); /*0x4f9aae*/
  if ( (void *)result == this->Object_field_0x30 ) /*0x4f9ab6*/
  {
    IDA_LOBYTE(result) = 1; /*0x4f9ab8*/
    return result; /*0x4f9abb*/
  }
  if ( result != -1 ) /*0x4f9ac1*/
  {
    result = result; /*0x4f9ac8*/
    result = this->u32_5788; /*0x4f9aca*/
    IDA_LOBYTE(result) = (result & (1 << result)) != 0; /*0x4f9ad5*/
  }
  else
  {
  LABEL_9:
    IDA_LOBYTE(result) = 0; /*0x4f9adb*/
  }
  return result; /*0x4f9aaa*/
}
}
// 0x4F9AF0
namespace gamemd {
int Object::IsAlliedWithObjectSimpleHouse(unsigned char * a2)
{
  int result; // eax

  if ( !a2 ) /*0x4f9af9*/
    goto LABEL_10; /*0x4f9af9*/
  if ( (a2[20] & 2) == 0 ) /*0x4f9aff*/
    goto LABEL_10; /*0x4f9aff*/
  result = (*(int (**)(void))(*(_DWORD *)a2 + 60))(); /*0x4f9b03*/
  if ( !result ) /*0x4f9b08*/
    goto LABEL_10; /*0x4f9b08*/
  if ( (Object *)result == this ) /*0x4f9b0c*/
  {
    IDA_LOBYTE(result) = 1; /*0x4f9b0e*/
    return result; /*0x4f9b11*/
  }
  result = *(_DWORD *)(result + 48); /*0x4f9b14*/
  if ( (void *)result == this->Object_field_0x30 ) /*0x4f9b1c*/
  {
    IDA_LOBYTE(result) = 1; /*0x4f9b1e*/
    return result; /*0x4f9b21*/
  }
  if ( result != -1 ) /*0x4f9b27*/
  {
    result = result; /*0x4f9b2e*/
    result = this->u32_5788; /*0x4f9b30*/
    IDA_LOBYTE(result) = (result & (1 << result)) != 0; /*0x4f9b3b*/
  }
  else
  {
  LABEL_10:
    IDA_LOBYTE(result) = 0; /*0x4f9b41*/
  }
  return result; /*0x4f9b10*/
}
}
// 0x56C210
namespace gamemd {
unsigned int * Object::FindNearestObjectAtCell(unsigned int * a2)
{
  int v3; // esi
  int v4; // edi
  char *v5; // ecx
  __int16 v6; // ax
  __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  unsigned int v12; // eax
  int *v13; // eax
  _DWORD *i; // esi
  int *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *result; // eax
  _DWORD *v21; // [esp+14h] [ebp-4Ch]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  char *v24; // [esp+20h] [ebp-40h]
  _DWORD v25[3]; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD v26[3]; // [esp+30h] [ebp-30h] BYREF
  int v27[3]; // [esp+3Ch] [ebp-24h] BYREF
  char v28[12]; // [esp+48h] [ebp-18h] BYREF
  int v29[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 v30; // [esp+64h] [ebp+4h]
  __int16 v31; // [esp+66h] [ebp+6h]

  v21 = 0; /*0x56c238*/
  v22 = 0; /*0x56c23e*/
  v3 = *a2 / 256; /*0x56c249*/
  v4 = a2[1] / 256; /*0x56c24c*/
  v30 = v3; /*0x56c251*/
  v31 = v4; /*0x56c256*/
  if ( (g_MissionQueueFrame.briefing[120] & 1) == 0 ) /*0x56c25b*/
  {
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2058] = 0; /*0x56c271*/
    IDA_LOBYTE(g_MissionQueueFrame.briefing[120]) |= 1u; /*0x56c27c*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2062] = 0xFFFF; /*0x56c295*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2066] = 1; /*0x56c2a9*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2074] = 0x10000; /*0x56c2d0*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2078] = 0x1FFFF; /*0x56c2e4*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2070] = -65536; /*0x56c314*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2082] = 65537; /*0x56c31a*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2086] = -65535; /*0x56c320*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[2090] = -1; /*0x56c326*/
    atexit(nullsub_167); /*0x56c32b*/
  }
  v5 = &g_MissionQueueFrame.waypoints[2058]; /*0x56c333*/
  v24 = &g_MissionQueueFrame.waypoints[2058]; /*0x56c338*/
  while ( 1 ) /*0x56c343*/
  {
    v6 = *(_WORD *)v5; /*0x56c343*/
    v7 = v4 + *((_WORD *)v5 + 1); /*0x56c351*/
    IDA_LOWORD(v23) = v3 + v6; /*0x56c354*/
    v8 = (__int16)(v3 + v6); /*0x56c359*/
    v9 = *(_DWORD *)&this->__pad_EC[8]; /*0x56c35c*/
    IDA_HIWORD(v23) = v7; /*0x56c362*/
    v10 = v7; /*0x56c367*/
    v11 = v8 + v7; /*0x56c36a*/
    if ( v11 > v9 && v8 - v10 < v9 && v10 - v8 < v9 && v11 <= v9 + 2 * *(_DWORD *)&this->__pad_EC[12] ) /*0x56c39c*/
    {
      v12 = v8 + (v10 << 9); /*0x56c3a7*/
      if ( v12 >= 0x40000 || (v13 = (int *)*((_DWORD *)this->Object_field_0x13C + v12)) == 0 ) /*0x56c3c1*/
      {
        g_MissionQueueFrame.briefing[139] = v23; /*0x56c3c7*/
        v13 = &g_MissionQueueFrame.briefing[130]; /*0x56c3cc*/
      }
      for ( i = (_DWORD *)v13[57]; i; i = (_DWORD *)i[12] ) /*0x56c3d1*/
      {
        if ( (i[5] & 1) == 0 || *((_BYTE *)i + 1050) || i[136] != 2 ) /*0x56c3f6*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) != 6 ) /*0x56c406*/
          {
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*i + 72))(i, v28); /*0x56c457*/
            v18 = Coord::Subtract((Coord *)v29, *a2 - *v17, a2[1] - v17[1], a2[2] - v17[2]); /*0x56c477*/
            v26[0] = *v18; /*0x56c47e*/
            v26[1] = v18[1]; /*0x56c485*/
            v26[2] = v18[2]; /*0x56c490*/
            v16 = Coord::Length((Coord *)v26); /*0x56c494*/
  LABEL_20:
            if ( v16 >= 0 && (!v21 || v16 < v22) ) /*0x56c4a9*/
            {
              v22 = v16; /*0x56c4ab*/
              v21 = i; /*0x56c4af*/
            }
            continue; /*0x56c4af*/
          }
          v25[0] = (v8 << 8) + 128; /*0x56c41b*/
          v25[1] = (v10 << 8) + 128; /*0x56c429*/
          v25[2] = 0; /*0x56c431*/
          v15 = Vector3::Subtract((Vector3 *)a2, v27, v25); /*0x56c439*/
          v16 = Coord::Length((Coord *)v15); /*0x56c440*/
          if ( v16 <= 181 ) /*0x56c44a*/
            goto LABEL_20; /*0x56c44a*/
        }
      }
      IDA_LOWORD(v3) = v30; /*0x56c4be*/
    }
    v5 = v24 + 4; /*0x56c4c7*/
    v24 += 4; /*0x56c4d0*/
    if ( (int)v24 >= (int)&g_MissionQueueFrame.waypoints[2094] ) /*0x56c4d4*/
      break; /*0x56c4d4*/
    IDA_LOWORD(v4) = v31; /*0x56c33e*/
  }
  result = v21; /*0x56c4da*/
  if ( v21 ) /*0x56c4e4*/
  {
    if ( v22 > 181 ) /*0x56c4ee*/
      return 0; /*0x56c4f0*/
  }
  return result; /*0x56c4de*/
}
}
// 0x5902C0
namespace gamemd {
char sub_5902C0(int a1)
{
  int *v1; // ebx
  __int16 v2; // ax
  char *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // ebp
  int *v11; // eax
  int v14; // [esp+10h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-4h]

  v1 = (int *)a1; /*0x5902c4*/
  v2 = *(_WORD *)a1; /*0x5902ce*/
  IDA_HIWORD(a1) = a1->Items; /*0x5902d6*/
  IDA_LOWORD(a1) = v2; /*0x5902e1*/
  v3 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x5902e6*/
  v4 = v1[1]; /*0x5902f2*/
  v16 = v3[283]; /*0x5902f5*/
  v5 = *v1; /*0x5902f9*/
  v6 = (__int16)*v1; /*0x590301*/
  v4 = v4; /*0x590307*/
  a1 = (__int16)v4 + v6; /*0x590310*/
  if ( a1 > dword_ABED04 && v6 - (__int16)v4 < dword_ABED04 && (__int16)v4 - v6 < dword_ABED04 && a1 <= dword_ABED08 ) /*0x59033c*/
  {
    v7 = v1[2]; /*0x590342*/
    a1 = (__int16)(v5 + v7 - 1); /*0x59034f*/
    if ( (__int16)v4 + a1 > dword_ABED04 /*0x590387*/
      && a1 - (__int16)v4 < dword_ABED04
      && (__int16)v4 - a1 < dword_ABED04
      && (__int16)v4 + a1 <= dword_ABED08 )
    {
      v14 = v1[3] + v4 - 1; /*0x590394*/
      a1 = (__int16)v14 + (__int16)v5; /*0x5903a3*/
      if ( a1 > dword_ABED04 /*0x5903cf*/
        && (__int16)v5 - (__int16)v14 < dword_ABED04
        && (__int16)v14 - (__int16)v5 < dword_ABED04
        && a1 <= dword_ABED08 )
      {
        v8 = (__int16)(v5 + v7 - 1); /*0x5903d9*/
        a1 = (__int16)v14 + v8; /*0x5903e6*/
        if ( a1 > dword_ABED04 /*0x590412*/
          && v8 - (__int16)v14 < dword_ABED04
          && (__int16)v14 - v8 < dword_ABED04
          && a1 <= dword_ABED08 )
        {
          v9 = v4; /*0x590418*/
          if ( v4 >= v1[3] + v4 + 1 ) /*0x590425*/
            return 1; /*0x59049b*/
          while ( 1 ) /*0x590427*/
          {
            v5 = v5; /*0x590427*/
            if ( v5 < v7 + v5 + 1 ) /*0x59042f*/
              break; /*0x59042f*/
  LABEL_24:
            if ( ++v9 >= v1[1] + v1[3] + 1 ) /*0x590490*/
              return 1; /*0x590490*/
          }
          while ( 1 ) /*0x59043b*/
          {
            IDA_LOWORD(a1) = v5; /*0x59043b*/
            IDA_HIWORD(a1) = v9; /*0x590440*/
            v11 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x590445*/
            v11 = v11; /*0x59044a*/
            if ( v11[17] != -1 || *((char *)v11 + 283) != v16 || !Cell::IsEmpty(v11) && !Cell::IsGroundTypeRange(v11) ) /*0x59046c*/
              break; /*0x59046c*/
            v7 = v1[2]; /*0x590475*/
            v5 = *v1; /*0x590478*/
            if ( ++v5 >= v7 + *v1 + 1 ) /*0x590481*/
              goto LABEL_24; /*0x590481*/
          }
        }
      }
    }
  }
  return 0; /*0x590492*/
}
// 0x5FC380
namespace gamemd {  // G42.18c ns repair
int Object::SpawnAtCell(int aP1, int16_t *aP2, int aP3)  // G42.41k: dup head + misplaced close removed
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  CellClass *v8; // eax

  ObjectClass::ctor(); /*0x5fc386*/
  v5 = aP1; /*0x5fc38b*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&OverlayClass_vftable; /*0x5fc38f*/
  this->Object_field_0xAC = v5; /*0x5fc395*/
  this->Object_field_0x8 = (int)&(void*)(void*)&OverlayClass_vftable; /*0x5fc39f*/
  *(_DWORD *)&this->Object_field_0x2[2] = &(void*)(void*)&OverlayClass_vftable; /*0x5fc3a6*/
  *(_DWORD *)this->__pad_C = &(void*)(void*)&OverlayClass_vftable; /*0x5fc3ac*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->Object_field_0x2[2]); /*0x5fc3b3*/
  if ( dword_A8EC60 < dword_A8EC58 /*0x5fc3ef*/
    || (byte_A8EC5D || !dword_A8EC58)
    && dword_A8EC64 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EC50 + 8))(
         &dword_A8EC50,
         dword_A8EC58 + dword_A8EC64,
         0) )
  {
    v6 = dword_A8EC60++; /*0x5fc3fc*/
    *((_DWORD *)dword_A8EC54 + v6) = this; /*0x5fc40b*/
  }
  if ( *aP2 != word_AC1528 || aP2[1] != word_AC152A ) /*0x5fc429*/
  {
    dword_8333BC = aP3; /*0x5fc43b*/
    v7 = aP2[1]; /*0x5fc444*/
    IDA_LOWORD(aP1) = ((*aP2 << 8) + 128) / 256; /*0x5fc469*/
    IDA_HIWORD(aP1) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&aP1); /*0x5fc497*/
    if ( !CellClass::FindInfantry(v8, 0) ) /*0x5fc4a0*/
      ObjectClass::Deploy(); /*0x5fc4b1*/
    dword_8333BC = -1; /*0x5fc4b6*/
  }
  return this; /*0x5fc4c2*/
}
}
}
// 0x5FD970
namespace gamemd {
void* Object::HandleAction(int * a2, int * a3)
{
  int *location; // esi
  int v5; // ebp
  int GroundHeight; // eax
  int v7; // eax
  OverlayTypeClass **v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  OverlayTypeClass *Type; // eax
  int v13; // edx
  OverlayTypeClass **v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int DamageLevels; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  __int16 *v26; // eax
  int v27; // [esp-18h] [ebp-40h]
  __int16 *v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp+10h] [ebp-18h]
  int v30; // [esp+14h] [ebp-14h] BYREF
  char *v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  location = this->location; /*0x5fd987*/
  v5 = (*((int (__thiscall **)(OverlayTypeClass *))this->Type->vfptr + 39))(this->Type); /*0x5fd98d*/
  v32 = *location; /*0x5fd993*/
  v33 = this->location[1]; /*0x5fd99f*/
  v34 = this->location[2]; /*0x5fd9a6*/
  GroundHeight = Cell::GetGroundHeight(&v32); /*0x5fd9af*/
  v29 = ZCoordToScreenY(GroundHeight); /*0x5fd9c1*/
  v7 = 0; /*0x5fd9c5*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5fd9c9*/
  {
  LABEL_5:
    v7 = -1; /*0x5fd9e3*/
  }
  else
  {
    v8 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fd9d1*/
    while ( *v8 != this->Type ) /*0x5fd9d9*/
    {
      ++v7; /*0x5fd9db*/
      ++v8; /*0x5fd9dc*/
      if ( v7 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fd9e1*/
        goto LABEL_5; /*0x5fd9e1*/
    }
  }
  v9 = 0; /*0x5fd9ec*/
  v10 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7); /*0x5fd9ee*/
  if ( *(_BYTE *)(v10 + 681) || *(_BYTE *)(v10 + 680) || *(_DWORD *)(v10 + 660) == 126 || *(_BYTE *)(v10 + 682) ) /*0x5fda0a*/
    v9 = -12; /*0x5fda12*/
  if ( *(_DWORD *)(v10 + 664) == 9 ) /*0x5fda1e*/
    --v9; /*0x5fda20*/
  if ( v7 == 126 ) /*0x5fda24*/
    --v9; /*0x5fda26*/
  v11 = v9 + a2[1]; /*0x5fda30*/
  v30 = *a2; /*0x5fda32*/
  v31 = (char *)DSurface_ViewBounds.field_4 + v11; /*0x5fda42*/
  Type = this->Type; /*0x5fda46*/
  if ( Type->IsVeinholeMonster ) /*0x5fda4c*/
  {
    v13 = 0; /*0x5fda5a*/
    if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5fda5e*/
    {
  LABEL_20:
      v13 = -1; /*0x5fda72*/
    }
    else
    {
      v14 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fda60*/
      while ( *v14 != Type ) /*0x5fda68*/
      {
        ++v13; /*0x5fda6a*/
        ++v14; /*0x5fda6b*/
        if ( v13 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fda70*/
          goto LABEL_20; /*0x5fda70*/
      }
    }
    v15 = *(_DWORD *)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * FindBuildingByTiberiumType(v13)); /*0x5fda8b*/
    v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v15 + 192)); /*0x5fda93*/
    v17 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * *(_DWORD *)(*(_DWORD *)(v15 + 224) + 660)); /*0x5fdaa8*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 156))(v17); /*0x5fdaad*/
    if ( !v18 ) /*0x5fdab5*/
    {
      DamageLevels = this->Type->DamageLevels; /*0x5fdabd*/
      if ( DamageLevels ) /*0x5fdac5*/
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)DamageLevels + 156))(DamageLevels); /*0x5fdac9*/
    }
    DrawToSurfaceSHP( /*0x5fdb03*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(v16 + 780),
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
  else if ( Type->Overrides ) /*0x5fdb08*/
  {
    if ( Type->LandType[0] == 167 ) /*0x5fdb20*/
      v31 -= 38; /*0x5fdb22*/
    v32 = *location; /*0x5fdb2b*/
    v33 = this->location[1]; /*0x5fdb32*/
    v34 = this->location[2]; /*0x5fdb41*/
    v20 = *(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x5fdb60*/
    v27 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32)->CellClass_field_10C; /*0x5fdb7c*/
    DrawToSurfaceSHP( /*0x5fdb9a*/
      (int)g_DSurface_Hidden_2,
      *(_DWORD *)(*(_DWORD *)v20 + 780),
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
    v21 = *location; /*0x5fdba1*/
    v22 = this->location[1]; /*0x5fdba3*/
    v34 = this->location[2]; /*0x5fdba9*/
    IDA_LOWORD(a2) = v21 / 256; /*0x5fdbb9*/
    IDA_HIWORD(a2) = v22 / 256; /*0x5fdbd1*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x5fdbe3*/
    {
      v23 = this->location[2]; /*0x5fdbee*/
      v24 = this->location[1]; /*0x5fdbf1*/
      v32 = *location; /*0x5fdbf4*/
      v34 = v23; /*0x5fdbfc*/
      v33 = v24; /*0x5fdc06*/
      v25 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32); /*0x5fdc0a*/
    }
    else
    {
      v26 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc21*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v26) ) /*0x5fdc2c*/
      {
        v28 = (__int16 *)Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, &v30); /*0x5fdc4a*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x5fdc4b*/
      }
      else
      {
        IDA_LOWORD(a2) = 1; /*0x5fdc58*/
        IDA_HIWORD(a2) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x5fdc5f*/
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5fdc6a*/
      }
    }
    DrawToSurfaceSHP( /*0x5fdcaa*/
      (int)g_DSurface_Hidden_2,
      v25[13],
      v5,
      0,
      &v30,
      a3,
      3584,
      0,
      -2 - v29,
      0,
      *((__int16 *)v25 + 134),
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
  return (int)this->Type; /*0x5fdde6*/
}
}
// 0x5FDF70
namespace gamemd {
void * Object::DrawObject(void ** Block, char a2)
{
  int v3; // eax
  OverlayClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->vfptr = &(void*)(void*)&OverlayClass_vftable; /*0x5fdf76*/
  Block->vfptr1 = &(void*)(void*)&OverlayClass_vftable; /*0x5fdf7c*/
  Block->vfptr2 = &(void*)(void*)&OverlayClass_vftable; /*0x5fdf83*/
  Block->vfptr3 = &(void*)(void*)&OverlayClass_vftable; /*0x5fdf8a*/
  AbstractClass::AnnounceExpiredPointer(&Block->vfptr, 1); /*0x5fdf91*/
  v5 = Block; /*0x5fdfa6*/
  v3 = (*(int (__thiscall **)(_BYTE *, OverlayClass **))(*(_DWORD *)&stru_A8EB00.?[108] + 16))(&stru_A8EB00.?[108], &v5); /*0x5fdfaa*/
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[124] ) /*0x5fdfba*/
  {
    --*(_DWORD *)&stru_A8EB00.?[124]; /*0x5fdfbf*/
    for ( ; /*0x5fdfc5*/
          v3 < *(int *)&stru_A8EB00.?[124];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[112] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[112] + 4 * v3) )
    {
      ++v3; /*0x5fdfcd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x5fdfe6*/
    ObjectClass::Undeploy((ObjectClass *)Block); /*0x5fdfea*/
  Block->Type = 0; /*0x5fdff1*/
  ObjectClass::Dtor((ObjectClass *)Block); /*0x5fdffb*/
  if ( (a2 & 1) != 0 ) /*0x5fe005*/
    RA2_OPDEL(Block); /*0x5fe008*/
  return &Block->vfptr; /*0x5fe012*/
}
}
// 0x62AC30
namespace gamemd {
void* * Object::CalculateObjectPlacementPosition(int *a2)
{
  int *result; // eax
  int v4; // edx
  int *v5; // ecx
  int *v6; // eax
  int v7; // ecx
  CellClass *v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  Cell *v13; // ebp
  ObjectPlacement *NeighbourContent; // esi
  int ObjectPlacement_field_0x04; // eax
  bool v16; // bl
  int v17; // eax
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // ecx
  CellClass *v21; // eax
  int *v22; // eax
  int v23; // eax
  int v26; // [esp+10h] [ebp-28h] BYREF
  int v27; // [esp+14h] [ebp-24h] BYREF
  int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  _BYTE v30[12]; // [esp+20h] [ebp-18h] BYREF
  int v31[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !*(_DWORD *)&this->__pad_C[28] ) /*0x62ac39*/
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
  if ( !ParasiteClass::CanExistOnVictimCell((ParasiteClass *)this) ) /*0x62ac5a*/
  {
    v12 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)&this->__pad_C[28] + 904), &v26) >> 12) /*0x62ad3a*/
                        + 1) >> 1)
        & 7;
    v13 = (Cell *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]); /*0x62ad43*/
    NeighbourContent = (ObjectPlacement *)Cell::GetNeighbourContent(v13, v12); /*0x62ad50*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[24] + 132))(*(_DWORD *)&this->__pad_C[24]) /*0x62ad5a*/
                   + 3278) )
    {
      ObjectPlacement_field_0x04 = NeighbourContent[29].ObjectPlacement_field_0x04; /*0x62ad64*/
      if ( ObjectPlacement_field_0x04 == 2 || ObjectPlacement_field_0x04 == 6 || ObjectPlacement_field_0x04 == 3 ) /*0x62ad77*/
      {
        v16 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]) /*0x62ad90*/
                         + 320)
             & 0x100) == 0;
        v17 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]) /*0x62ad9d*/
                        + 68);
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
    v18 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)NeighbourContent->__pad_0 + 72))( /*0x62adde*/
                      NeighbourContent,
                      v30);
    v19 = ObjectPlacement::CalcPosition(NeighbourContent, v31, v18, 0, 0, 0); /*0x62ade9*/
    v27 = *v19; /*0x62adf0*/
    v20 = *(_DWORD *)&this->__pad_C[24]; /*0x62adf4*/
    v28 = v19[1]; /*0x62adfa*/
    v29 = v19[2]; /*0x62ae03*/
    if ( v20 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 1 ) /*0x62ae11*/
    {
      v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x62ae1d*/
      v22 = (int *)(*(int (__thiscall **)(CellClass *, int *))(v21->mapCoords[0] + 72))(v21, v31); /*0x62ae2b*/
      v27 = *v22; /*0x62ae30*/
      v28 = v22[1]; /*0x62ae37*/
      v29 = v22[2]; /*0x62ae3e*/
    }
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C[28] + 140) ) /*0x62ae45*/
    {
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 ) /*0x62ae67*/
      {
        v29 += dword_AC497C; /*0x62ae75*/
        *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62ae7c*/
        goto LABEL_34; /*0x62ae83*/
      }
      goto LABEL_29; /*0x62ae67*/
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 ) /*0x62aea9*/
    {
      v23 = (*(int (__thiscall **)(Cell *, int *))(v13->Cell_field_0x0 + 72))(v13, v31); /*0x62aeb5*/
      if ( v29 >= *(_DWORD *)(v23 + 8) ) /*0x62aec1*/
      {
  LABEL_29:
        *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62ae85*/
        goto LABEL_34; /*0x62ae8f*/
      }
      v29 += dword_AC497C; /*0x62aec9*/
      *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62aed0*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62aedc*/
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
  v6 = (int *)(*(_DWORD *)&this->__pad_C[28] + 156); /*0x62ac63*/
  v27 = *v6; /*0x62ac6a*/
  v7 = *(_DWORD *)&this->__pad_C[24]; /*0x62ac6e*/
  v28 = v6[1]; /*0x62ac74*/
  v29 = v6[2]; /*0x62ac7d*/
  if ( v7 ) /*0x62ac81*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 1 ) /*0x62ac8b*/
    {
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x62ac97*/
      v9 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(v8->mapCoords[0] + 72))(v8, v30); /*0x62aca5*/
      v27 = *v9; /*0x62acaa*/
      v10 = *(_DWORD *)&this->__pad_C[28]; /*0x62acae*/
      v28 = v9[1]; /*0x62acb4*/
      v11 = v9[2]; /*0x62acb8*/
      v29 = v11; /*0x62acbb*/
      if ( v10->q08C ) /*0x62acbf*/
        v29 = dword_AC497C + v11; /*0x62accf*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C[28] + 140) ) /*0x62acd6*/
    *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62ace3*/
  else
    *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62acef*/
  *a2 = v27; /*0x62ad03*/
  a2[1] = v28; /*0x62ad0a*/
  a2[2] = v29; /*0x62ad11*/
  return a2; /*0x62ad00*/
}
}
// 0x639E30
namespace gamemd {
char sub_639E30(int * a1, unsigned int * a2)
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
  _DWORD **i; // edx
  int v18; // edx
  int v19; // eax
  _DWORD **j; // ecx
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
    v9 = *(_DWORD *)(a1[2] + 4 * v7); /*0x639eb1*/
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
  v13 = *(_DWORD *)(a2[2] + 4 * v11); /*0x639eea*/
  LABEL_28:
  v14 = *a1; /*0x639ef1*/
  v15 = *(_DWORD *)(v9 + 16); /*0x639ef3*/
  v22 = v14; /*0x639ef8*/
  v16 = 0; /*0x639efc*/
  if ( v15 <= 0 ) /*0x639f00*/
    return 0; /*0x639f00*/
  for ( i = *(_DWORD ***)(v9 + 4); **i != *a2; ++i ) /*0x639f02*/
  {
    if ( ++v16 >= v15 ) /*0x639f11*/
      return 0; /*0x639f11*/
  }
  if ( v16 == -1 ) /*0x639f1e*/
    return 0; /*0x639f1e*/
  v18 = *(_DWORD *)(v13 + 16); /*0x639f20*/
  v19 = 0; /*0x639f23*/
  if ( v18 <= 0 ) /*0x639f27*/
    return 0; /*0x639f27*/
  for ( j = *(_DWORD ***)(v13 + 4); **j != v22; ++j ) /*0x639f29*/
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
         *((_DWORD *)dword_A83D4C + 12),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a3,
         0);
  if ( dword_A802C8 >= 128 ) /*0x646eff*/
    return 0; /*0x646f59*/
  qmemcpy(&byte_A802D4[111 * dword_A802D0], v5, 0x6Fu); /*0x646f1b*/
  dword_A83A54[dword_A802D0] = timeGetTime(); /*0x646f2c*/
  ++dword_A802C8; /*0x646f43*/
  dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x646f48*/
  return 1; /*0x646f50*/
}
}
// 0x7DEEFA
namespace gamemd {
char Object_Calc(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  _WORD *v7; // edi
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
  _WORD *v19; // [esp+Ch] [ebp-10h]
  _BYTE *v20; // [esp+10h] [ebp-Ch]
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
        IDA_LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 3) & 0xFC, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 3) & 0xFC) + v13) : -1;
        v8 = v12 >> 3 << 11; /*0x7def7a*/
        v14 = (unsigned __int8)(8 * v18); /*0x7def8e*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7def94*/
        IDA_LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
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
    v7 = (_WORD *)((char *)v19 + a4); /*0x7defc1*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7defc4*/
    --a6; /*0x7defc7*/
  }
  while ( a6 );
  return v9; /*0x7defd4*/
}
}
// 0x7DEFD7
namespace gamemd {
char Object_Calc_7DEFD7(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  _WORD *v7; // edi
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
  _WORD *v19; // [esp+Ch] [ebp-10h]
  _BYTE *v20; // [esp+10h] [ebp-Ch]
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
        IDA_LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 2) & 0xF8, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 2) & 0xF8) + v13) : -1;
        v8 = v12 >> 2 << 10; /*0x7df057*/
        v14 = (unsigned __int8)(8 * v18); /*0x7df06b*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df071*/
        IDA_LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
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
    v7 = (_WORD *)((char *)v19 + a4); /*0x7df09e*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7df0a1*/
    --a6; /*0x7df0a4*/
  }
  while ( a6 );
  return v9; /*0x7df0b1*/
}
}
// 0x7DF0B4
namespace gamemd {
char Object_Calc_7DF0B4(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  _WORD *v7; // edi
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
  _WORD *v19; // [esp+Ch] [ebp-10h]
  _BYTE *v20; // [esp+10h] [ebp-Ch]
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
        IDA_LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 3) & 0xF8, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 3) & 0xF8) + v13) : -1;
        v8 = v12 >> 3 << 11; /*0x7df134*/
        v14 = (unsigned __int8)(4 * v18); /*0x7df148*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df14e*/
        IDA_LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
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
    v7 = (_WORD *)((char *)v19 + a4); /*0x7df17b*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7df17e*/
    --a6; /*0x7df181*/
  }
  while ( a6 );
  return v9; /*0x7df18e*/
}
}
// 0x7DF191
namespace gamemd {
char Object_Calc_7DF191(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // esi
  _WORD *v7; // edi
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
  _WORD *v19; // [esp+Ch] [ebp-10h]
  _BYTE *v20; // [esp+10h] [ebp-Ch]
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
        IDA_LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        IDA_LOBYTE(v13) = !__CFADD__((v18 >> 2) & 0xF8, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 2) & 0xF8) + v13) : -1;
        v8 = v12 >> 3 << 10; /*0x7df211*/
        v14 = (unsigned __int8)(8 * v18); /*0x7df225*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df22b*/
        IDA_LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
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
    v7 = (_WORD *)((char *)v19 + a4); /*0x7df258*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7df25b*/
    --a6; /*0x7df25e*/
  }
  while ( a6 );
  return v9; /*0x7df26b*/
}
}
// 0x7DF280
namespace gamemd {
char Object_Calc_7DF280(MouseClass * a1, unsigned char * a2, unsigned short * a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE *v8; // esi
  _WORD *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  _WORD *v16; // [esp+18h] [ebp-10h]
  _BYTE *v17; // [esp+1Ch] [ebp-Ch]
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
          v9 = (_WORD *)((char *)v16 + a5); /*0x7df315*/
          v16 = (_WORD *)((char *)v16 + a5); /*0x7df318*/
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
      v10 = (v14.m64_u8[4] << 10) & 0xF800 | v11 | ((unsigned __int8)v14.m64_i8[0] >> 1); /*0x7df390*/
      *v9++ = v10; /*0x7df395*/
      --v19; /*0x7df399*/
    }
    while ( v19 ); /*0x7df39c*/
    v8 = &v17[a4]; /*0x7df3a1*/
    v17 += a4; /*0x7df3a4*/
    v9 = (_WORD *)((char *)v16 + a5); /*0x7df3aa*/
    v16 = (_WORD *)((char *)v16 + a5); /*0x7df3ad*/
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
int Object_Calc_7DF3C2(MouseClass * a1, unsigned char * a2, unsigned short * a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE *v8; // esi
  _WORD *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  _WORD *v16; // [esp+18h] [ebp-10h]
  _BYTE *v17; // [esp+1Ch] [ebp-Ch]
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
          v9 = (_WORD *)((char *)v16 + a5); /*0x7df455*/
          v16 = (_WORD *)((char *)v16 + a5); /*0x7df458*/
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
    v9 = (_WORD *)((char *)v16 + a5); /*0x7df4e8*/
    v16 = (_WORD *)((char *)v16 + a5); /*0x7df4eb*/
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
int Object_Calc_7DF500(MouseClass * a1, unsigned char * a2, unsigned short * a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE *v8; // esi
  _WORD *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  _WORD *v16; // [esp+18h] [ebp-10h]
  _BYTE *v17; // [esp+1Ch] [ebp-Ch]
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
          v9 = (_WORD *)((char *)v16 + a5); /*0x7df595*/
          v16 = (_WORD *)((char *)v16 + a5); /*0x7df598*/
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
    v9 = (_WORD *)((char *)v16 + a5); /*0x7df628*/
    v16 = (_WORD *)((char *)v16 + a5); /*0x7df62b*/
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
int Object_Calc_7DF640(MouseClass * a1, unsigned char * a2, unsigned short * a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE *v8; // esi
  _WORD *v9; // edi
  int v10; // ebx
  int v11; // eax
  __m64 v12; // mm1
  __m64 v14; // [esp+4h] [ebp-24h]
  __m64 v15; // [esp+Ch] [ebp-1Ch]
  _WORD *v16; // [esp+18h] [ebp-10h]
  _BYTE *v17; // [esp+1Ch] [ebp-Ch]
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
          v9 = (_WORD *)((char *)v16 + a5); /*0x7df6d5*/
          v16 = (_WORD *)((char *)v16 + a5); /*0x7df6d8*/
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
      v10 = (v14.m64_u8[4] << 10) | v11 | ((unsigned __int8)v14.m64_i8[0] >> 1); /*0x7df74f*/
      *v9++ = v10; /*0x7df754*/
      --v19; /*0x7df758*/
    }
    while ( v19 ); /*0x7df75b*/
    v8 = &v17[a4]; /*0x7df760*/
    v17 += a4; /*0x7df763*/
    v9 = (_WORD *)((char *)v16 + a5); /*0x7df769*/
    v16 = (_WORD *)((char *)v16 + a5); /*0x7df76c*/
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
int sub_5A7E90(int a1, unsigned short * a2)
{
  _DWORD *v2; // ebx
  int result; // eax
  int v4; // ebp
  int v5; // edi
  int i; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-14h]
  _DWORD *v10; // [esp+Ch] [ebp-10h]
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)dword_A8ED2C + a1); /*0x5a7e9e*/
  v10 = v2; /*0x5a7ea3*/
  result = (*(int (__thiscall **)(_DWORD *))(*v2 + 156))(v2); /*0x5a7ea9*/
  v13 = result; /*0x5a7eb1*/
  if ( result ) /*0x5a7eb5*/
  {
    result = v2[186]; /*0x5a7ebb*/
    v4 = 0; /*0x5a7ec1*/
    if ( result > 0 ) /*0x5a7ec5*/
    {
      v5 = dword_ABED04; /*0x5a7ecd*/
      do /*0x5a7f85*/
      {
        for ( i = 0; i < v2[185]; ++i ) /*0x5a7edd*/
        {
          IDA_LOWORD(v9) = i + *a2; /*0x5a7ef4*/
          IDA_HIWORD(v9) = a2[1] + v4; /*0x5a7ef9*/
          v12 = v9; /*0x5a7f02*/
          v7 = IDA_SHIWORD(v9) + (__int16)v9; /*0x5a7f0c*/
          if ( v7 > v5 ) /*0x5a7f11*/
          {
            if ( (__int16)v9 - IDA_SHIWORD(v9) >= v5 || IDA_SHIWORD(v9) - (__int16)v9 >= v5 || v7 > dword_ABED08 ) /*0x5a7f27*/
            {
              v2 = v10; /*0x5a7f69*/
            }
            else
            {
              v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v12); /*0x5a7f33*/
              v2 = v10; /*0x5a7f38*/
              if ( *(_DWORD *)(v13 + 4 * (i + v4 * v10[185]) + 16) ) /*0x5a7f4b*/
              {
                v8[14] = 0xFFFF; /*0x5a7f53*/
                *((_BYTE *)v8 + 282) = 0; /*0x5a7f5a*/
              }
              v5 = dword_ABED04; /*0x5a7f61*/
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
int sub_710890(int a1, int a2, int * a3)
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
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x7108a6*/
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
  return 2 * dword_87F8DC * (dword_87F8E0 + 4); /*0x42b201*/
}
} // namespace gamemd

// 0x53E420
namespace gamemd {
void ** Object::RemoveObjectArray()
{
  void **result; // eax
  int v2; // edx

  result = (void **)stru_AA0398.AudioStream_field_0xB0; /*0x53e420*/
  if ( stru_AA0398.AudioStream_field_0xB0 ) /*0x53e428*/
  {
    if ( this ) /*0x53e42c*/
    {
      result = *(void ***)stru_AA0398.__pad_B4; /*0x53e434*/
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
        return (void **)--*(_DWORD *)&stru_AA0398.__pad_B4[4]; /*0x53e45b*/
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
  AnimClass *v2; // [esp+4h] [ebp+4h]
  char v3; // [esp+8h] [ebp+8h]

  result = (int)this->attachedTag; /*0x5f5230*/
  if ( (AnimClass *)result == v2 && result ) /*0x5f523d*/
  {
    --result->instanceCount; /*0x5f5244*/
    this->attachedTag = 0; /*0x5f5247*/
  }
  IDA_LOBYTE(result) = v3; /*0x5f524f*/
  if ( v3 ) /*0x5f5255*/
  {
    result = (int)this->nextObject; /*0x5f5257*/
    if ( v2 == (AnimClass *)result ) /*0x5f525c*/
    {
      if ( v2 ) /*0x5f5260*/
      {
        result = result->defaultCoords; /*0x5f5262*/
        this->nextObject = (ObjectClass *)result; /*0x5f5265*/
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
  _DWORD *v3; // esi
  CellClass *v5; // eax

  v3 = aP1; /*0x5fd271*/
  IDA_LOWORD(aP1) = *aP1 / 256; /*0x5fd290*/
  IDA_HIWORD(aP1) = v3[1] / 256; /*0x5fd2a4*/
  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&aP1); /*0x5fd2b1*/
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

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x5fd901*/
  if ( Register >= 0 ) /*0x5fd905*/
  {
    if ( aP1 ) /*0x5fd909*/
    {
      ObjectClass::Init((ObjectClass *)aP1, (int)&aP1a); /*0x5fd912*/
      *aP1 = &(void*)(void*)&OverlayClass_vftable; /*0x5fd917*/
      aP1[1] = &(void*)(void*)&OverlayClass_vftable; /*0x5fd91d*/
      aP1[2] = &(void*)(void*)&OverlayClass_vftable; /*0x5fd924*/
      aP1[3] = &(void*)(void*)&OverlayClass_vftable; /*0x5fd92b*/
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
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x5fd964*/
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
    (a8) = ((a8) & ~(0xFFULL << 24)) | (((unsigned __int64)(unsigned int)(1) & 0xFF) << 24); /*0x637de8*/
    qmemcpy( (void *)(v29), (const void *)(&a1), sizeof(v29)); /*0x637df0*/
    (v30) = ((v30) & ~0xFFFF) | ((unsigned int)(a28) & 0xFFFF); /*0x637df2*/
    (((v30) >> 16) & 0xFF) = (((a28) >> 16) & 0xFF); /*0x637df4*/
// 0x6521c0
    return (char)(Network::RecordEvent( /*0x637df5*/
    {
      char *v27; // edi

      *(_DWORD *)((char *)&a1 + 3) = dword_A8ED84; /*0x6521c5*/
      if ( dword_A802C8 >= 128 ) /*0x6521d3*/
        return 0; /*0x65222a*/
      v27 = &byte_A802D4[111 * dword_A802D0]; /*0x6521eb*/
      qmemcpy(v27, &a1, 0x6Cu); /*0x6521f2*/
      v27 += 108; /*0x6521f2*/
      *(_WORD *)v27 = a27; /*0x6521f4*/
      v27[2] = IDA_BYTE2(a27); /*0x6521f6*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x652205*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x652215*/
      ++dword_A802C8; /*0x652220*/
      return 1; /*0x652227*/
    }
bool sub_733C60(int a1, const char * a2)
{
  const char *v4; // eax

  v4 = (const char *)((*(int (**)(int))(*(unsigned int *)a1 + 136))(a1) + 36); /*0x733c6e*/
  return a2 && !strcmp(v4, a2) && (*(uint8_t (**)(int))(*(unsigned int *)a1 + 316))(a1); /*0x733cb6*/
}
} // namespace gamemd
}
}

// 0x7AD330
namespace gamemd {
SessionClass * Object::DtorWithDelete(void ** Block, char a2)
{
  DeleteAndZero((ObjectClass *)Block); /*0x7ad333*/
  if ( (a2 & 1) != 0 ) /*0x7ad33d*/
    RA2_OPDEL(Block); /*0x7ad340*/
  return (void **)Block; /*0x7ad34a*/
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
