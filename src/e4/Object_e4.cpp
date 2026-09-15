// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_588960_e4.hpp"
#include "e4/classes/E4Recv_5A99B0_e4.hpp"
#include "e4/classes/E4Recv_63EFB0_e4.hpp"
#include "e4/classes/E4Recv_6B5440_e4.hpp"
#include "e4/classes/E4Recv_710750_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x47C3D0
namespace gamemd {
int Object::FindClosestObjectCell(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Object::FindClosestObjectCell(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  int v4; // edi
  int v5; // ebx
  IUnknown *v6; // ecx
  IUnknown *v7; // esi
  _DWORD *v8; // eax
  double v9; // st7
  int v10; // eax
  int v12; // [esp+20h] [ebp-2Ch]
  int v13; // [esp+24h] [ebp-28h]
  int v14; // [esp+28h] [ebp-24h]
  int v15; // [esp+2Ch] [ebp-20h]
  _BYTE v16[20]; // [esp+34h] [ebp-18h] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v12 = 0; /*0x47c3e3*/
  v13 = 0; /*0x47c3e7*/
  v4 = 7 * aP1->field_0; /*0x47c3f2*/
  v5 = 7 * aP1->field_4; /*0x47c3fe*/
  if ( (_BYTE)aP2 ) /*0x47c405*/
    v6 = (IUnknown *)*(this + 58); /*0x47c407*/
  else
    v6 = (IUnknown *)*(this + 57); /*0x47c40f*/
  if ( !v6 ) /*0x47c417*/
    return 0; /*0x47c4bf*/
  v7 = v6; /*0x47c41d*/
  do /*0x47c4ac*/
  {
    if ( (v7->__pad_10[4] & 1) != 0 && v7 != aP3 ) /*0x47c435*/
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(v7->field_0 + 72))(v7, v16); /*0x47c440*/
      v14 = (unsigned __int8)*v8 - v4; /*0x47c45a*/
      v15 = (unsigned __int8)v8[1] - v5; /*0x47c463*/
      v17 = v8[2]; /*0x47c467*/
      v9 = Math::Sqrt((double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x47c484*/
      v10 = Math::RoundToInt(v9); /*0x47c48c*/
      if ( !v12 || v10 < v13 ) /*0x47c49d*/
      {
        v12 = (int)v7; /*0x47c49f*/
        v13 = v10; /*0x47c4a3*/
      }
    }
    v7 = *(IUnknown **)&v7->__pad_28[8]; /*0x47c4a7*/
  }
  while ( v7 ); /*0x47c4ac*/
  return v12; /*0x47c4b6*/
}
}
} // namespace gamemd

// 0x47C5A0
namespace gamemd {
int Object::FindObjectCell(TechnoClass * aP1, char aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Object::FindObjectCell(_DWORD *this, TechnoClass *aP1, char aP2)
{
  _DWORD *v4; // esi
  int result; // eax

  if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c5ab*/
  {
    v4 = (_DWORD *)*(this + 57); /*0x47c5ad*/
    if ( v4 ) /*0x47c5b5*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 2 ) /*0x47c5c1*/
      {
        v4 = (_DWORD *)v4[12]; /*0x47c5c3*/
        if ( !v4 ) /*0x47c5c8*/
          goto LABEL_5; /*0x47c5c8*/
      }
      return (int)v4; /*0x47c5c1*/
    }
  }
LABEL_5:
  result = Object::FindClosestObjectCell(this, (IUnknown *)aP1, (IUnknown *)aP2, 0); /*0x47c5ca*/
  if ( !result ) /*0x47c5df*/
  {
    if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x47c5e8*/
    {
      v4 = (_DWORD *)*(this + 57); /*0x47c5ea*/
      if ( v4 ) /*0x47c5f2*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 36 ) /*0x47c5fe*/
        {
          v4 = (_DWORD *)v4[12]; /*0x47c600*/
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
} // namespace gamemd

// 0x4F9A90
namespace gamemd {
bool Object::IsAlliedWithObjectHouse(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Object::IsAlliedWithObjectHouse(_DWORD *this, IUnknown *aP1)
{
  _DWORD *v3; // eax
  int v5; // eax

  if ( !aP1 ) /*0x4f9a99*/
    return 0; /*0x4f9a99*/
  v3 = (_DWORD *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 60))(aP1); /*0x4f9a9d*/
  if ( !v3 ) /*0x4f9aa2*/
    return 0; /*0x4f9aa2*/
  if ( v3 == this ) /*0x4f9aa6*/
    return 1; /*0x4f9aab*/
  v5 = v3[12]; /*0x4f9aae*/
  if ( v5 == *(this + 12) ) /*0x4f9ab6*/
    return 1; /*0x4f9abb*/
  return v5 != -1 && (*(this + 5602) & (1 << v5)) != 0; /*0x4f9ad5*/
}
}
} // namespace gamemd

// 0x4F9AF0
namespace gamemd {
bool Object::IsAlliedWithObjectSimpleHouse(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall House_IsAlliedWithObjectSimple(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  int v5; // eax

  if ( !a2 ) /*0x4f9af9*/
    return 0; /*0x4f9af9*/
  if ( (a2[20] & 2) == 0 ) /*0x4f9aff*/
    return 0; /*0x4f9aff*/
  v3 = (*(int (**)(void))(*(_DWORD *)a2 + 60))(); /*0x4f9b03*/
  if ( !v3 ) /*0x4f9b08*/
    return 0; /*0x4f9b08*/
  if ( (_DWORD *)v3 == this ) /*0x4f9b0c*/
    return 1; /*0x4f9b11*/
  v5 = *(_DWORD *)(v3 + 48); /*0x4f9b14*/
  if ( v5 == *(this + 12) ) /*0x4f9b1c*/
    return 1; /*0x4f9b21*/
  return v5 != -1 && (*(this + 5602) & (1 << v5)) != 0; /*0x4f9b3b*/
}
}
} // namespace gamemd

// 0x56C210
namespace gamemd {
unsigned int * Object::FindNearestObjectAtCell(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall FindNearestObjectAtCell(_DWORD *this, _DWORD *a2)
{
  int v3; // esi
  int v4; // edi
  int *v5; // ecx
  __int16 v6; // ax
  __int16 v7; // cx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *i; // esi
  int *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int *v18; // eax
  _DWORD *result; // eax
  _DWORD *v21; // [esp+14h] [ebp-4Ch]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  int *v24; // [esp+20h] [ebp-40h]
  _DWORD v25[3]; // [esp+24h] [ebp-3Ch] BYREF
  int v26[3]; // [esp+30h] [ebp-30h] BYREF
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
    v6 = *(_WORD *)v5; /*0x56c343*/
    v7 = v4 + *((_WORD *)v5 + 1); /*0x56c351*/
    LOWORD(v23) = v3 + v6; /*0x56c354*/
    v8 = (__int16)(v3 + v6); /*0x56c359*/
    v9 = *(this + 61); /*0x56c35c*/
    HIWORD(v23) = v7; /*0x56c362*/
    v10 = v7; /*0x56c367*/
    v11 = v8 + v7; /*0x56c36a*/
    if ( v11 > v9 && v8 - v10 < v9 && v10 - v8 < v9 && v11 <= v9 + 2 * *(this + 62) ) /*0x56c39c*/
    {
      v12 = v8 + (v10 << 9); /*0x56c3a7*/
      if ( v12 >= 0x40000 || (v13 = *(_DWORD **)(*(this + 79) + 4 * v12)) == 0 ) /*0x56c3c1*/
      {
        g_Map_GlobalCellIndex = v23; /*0x56c3c7*/
        v13 = g_CellClassArray; /*0x56c3cc*/
      }
      for ( i = (_DWORD *)v13[57]; i; i = (_DWORD *)i[12] ) /*0x56c3d1*/
      {
        if ( (i[5] & 1) == 0 || *((_BYTE *)i + 1050) || i[136] != 2 ) /*0x56c3f6*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) != 6 ) /*0x56c406*/
          {
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*i + 72))(i, v28); /*0x56c457*/
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
          v25[1] = (v10 << 8) + 128; /*0x56c429*/
          v25[2] = 0; /*0x56c431*/
          v15 = Vector3::Subtract(a2, v27, v25); /*0x56c439*/
          v16 = Coord::Length(v15); /*0x56c440*/
          if ( v16 <= 181 ) /*0x56c44a*/
            goto LABEL_20; /*0x56c44a*/
        }
      }
      LOWORD(v3) = v30; /*0x56c4be*/
    }
    v5 = ++v24; /*0x56c4c7*/
    if ( (int)v24 >= (int)&dbl_ABD458 ) /*0x56c4d4*/
      break; /*0x56c4d4*/
    LOWORD(v4) = v31; /*0x56c33e*/
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
} // namespace gamemd

// 0x5902C0
namespace gamemd {
char sub_5902C0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_5902C0(int a1)
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
  int v10; // esi
  int *v11; // eax
  int *v12; // edi
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v1 = (int *)a1; /*0x5902c4*/
  v2 = *(_WORD *)a1; /*0x5902ce*/
  HIWORD(a1) = *(_WORD *)(a1 + 4); /*0x5902d6*/
  LOWORD(a1) = v2; /*0x5902e1*/
  v3 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x5902e6*/
  v4 = v1[1]; /*0x5902f2*/
  v16 = v3[283]; /*0x5902f5*/
  v5 = *v1; /*0x5902f9*/
  v6 = (__int16)*v1; /*0x590301*/
  v15 = v4; /*0x590307*/
  a1 = (__int16)v4 + v6; /*0x590310*/
  if ( a1 > g_MapCellHeight_Value /*0x59033c*/
    && v6 - (__int16)v4 < g_MapCellHeight_Value
    && (__int16)v4 - v6 < g_MapCellHeight_Value
    && a1 <= g_MapCellCount )
  {
    v7 = v1[2]; /*0x590342*/
    a1 = (__int16)(v5 + v7 - 1); /*0x59034f*/
    if ( (__int16)v4 + a1 > g_MapCellHeight_Value /*0x590387*/
      && a1 - (__int16)v4 < g_MapCellHeight_Value
      && (__int16)v4 - a1 < g_MapCellHeight_Value
      && (__int16)v4 + a1 <= g_MapCellCount )
    {
      v14 = v1[3] + v4 - 1; /*0x590394*/
      a1 = (__int16)v14 + (__int16)v5; /*0x5903a3*/
      if ( a1 > g_MapCellHeight_Value /*0x5903cf*/
        && (__int16)v5 - (__int16)v14 < g_MapCellHeight_Value
        && (__int16)v14 - (__int16)v5 < g_MapCellHeight_Value
        && a1 <= g_MapCellCount )
      {
        v8 = (__int16)(v5 + v7 - 1); /*0x5903d9*/
        a1 = (__int16)v14 + v8; /*0x5903e6*/
        if ( a1 > g_MapCellHeight_Value /*0x590412*/
          && v8 - (__int16)v14 < g_MapCellHeight_Value
          && (__int16)v14 - v8 < g_MapCellHeight_Value
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
            LOWORD(a1) = v10; /*0x59043b*/
            HIWORD(a1) = v9; /*0x590440*/
            v11 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x590445*/
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
} // namespace gamemd

// 0x5FC380
namespace gamemd {
OverlayClass * Object::SpawnAtCell(IUnknown * aP1, IUnknown * aP2, BuildingTypeClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
OverlayClass *__thiscall Object::SpawnAtCell(void *this, IUnknown *aP1, IUnknown *aP2, BuildingTypeClass *aP3)
{
  IUnknown *v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax

  ObjectClass::ctor(this); /*0x5fc386*/
  v5 = aP1; /*0x5fc38b*/
  *(_DWORD *)this = &OverlayClass::`vftable'; /*0x5fc38f*/
  this->Object_field_0xAC = v5; /*0x5fc395*/
  this->Object_field_0x8 = &OverlayClass::`vftable'; /*0x5fc39f*/
  *((_DWORD *)this + 1) = &OverlayClass::`vftable'; /*0x5fc3a6*/
  *((_DWORD *)this + 3) = &vt_OverlayClass; /*0x5fc3ac*/
  AbstractClass::GenerateUniqueID((int)this + 4); /*0x5fc3b3*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22956] < *(int *)&HouseClass_Player.__pad_5568[22948] /*0x5fc3ef*/
    || (HouseClass_Player.__pad_5568[22953] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22948])
    && *(int *)&HouseClass_Player.__pad_5568[22960] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22940] + 8))(
         &HouseClass_Player.__pad_5568[22940],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22948] + *(_DWORD *)&HouseClass_Player.__pad_5568[22960],
         0) )
  {
    v6 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22956])++; /*0x5fc3fc*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22944] + 4 * v6) = this; /*0x5fc40b*/
  }
  if ( (CoordStruct *)aP2->field_0 != *(&g_MatrixTransformState + 2502) ) /*0x5fc41c*/
  {
    *(_DWORD *)&stru_830620.__pad_14B0[6380] = aP3; /*0x5fc43b*/
    v7 = SHIWORD(aP2->field_0); /*0x5fc444*/
    LOWORD(aP1) = ((SLOWORD(aP2->field_0) << 8) + 128) / 256; /*0x5fc469*/
    HIWORD(aP1) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x5fc497*/
    if ( !CellClass::FindInfantry(v8, 0) ) /*0x5fc4a0*/
      ObjectClass::Deploy((#374 *)this); /*0x5fc4b1*/
    *(_DWORD *)&stru_830620.__pad_14B0[6380] = -1; /*0x5fc4b6*/
  }
  return (OverlayClass *)this; /*0x5fc4c2*/
}
}
} // namespace gamemd

// 0x5FD970
namespace gamemd {
void Object::HandleAction(int * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Object::_vt70(int this, int *a2, int *a3)
{
  int *v4; // esi
  int v5; // ebp
  int GroundHeight; // eax
  int v7; // eax
  BuildingTypeClass *v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  BuildingTypeClass *v14; // esi
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
  _DWORD *v25; // eax
  __int16 *v26; // eax
  int v27; // [esp-18h] [ebp-40h]
  __int16 *v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp+10h] [ebp-18h]
  int v30; // [esp+14h] [ebp-14h] BYREF
  int v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  int v33; // [esp+20h] [ebp-8h]
  int v34; // [esp+24h] [ebp-4h]

  v4 = (int *)(this + 156); /*0x5fd987*/
  v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 156))(this->Object_field_0xAC); /*0x5fd98d*/
  v32 = *v4; /*0x5fd993*/
  v33 = *(_DWORD *)(this + 160); /*0x5fd99f*/
  v34 = *(_DWORD *)(this + 164); /*0x5fd9a6*/
  GroundHeight = Cell::GetGroundHeight(&v32); /*0x5fd9af*/
  v29 = ZCoordToScreenY(GroundHeight); /*0x5fd9c1*/
  v7 = 0; /*0x5fd9c5*/
  if ( MEMORY[0xA83D90] <= 0 ) /*0x5fd9c9*/
  {
LABEL_5:
    v7 = -1; /*0x5fd9e3*/
  }
  else
  {
    v8 = MEMORY[0xA83D84]; /*0x5fd9d1*/
    while ( *(_DWORD *)v8->vtable0 != this->Object_field_0xAC ) /*0x5fd9d9*/
    {
      ++v7; /*0x5fd9db*/
      v8 = (BuildingTypeClass *)((char *)v8 + 4); /*0x5fd9dc*/
      if ( v7 >= MEMORY[0xA83D90] ) /*0x5fd9e1*/
        goto LABEL_5; /*0x5fd9e1*/
    }
  }
  v9 = 0; /*0x5fd9ec*/
  v10 = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v7]; /*0x5fd9ee*/
  if ( *(_BYTE *)(v10 + 681) || *(_BYTE *)(v10 + 680) || *(_DWORD *)(v10 + 660) == 126 || *(_BYTE *)(v10 + 682) ) /*0x5fda0a*/
    v9 = -12; /*0x5fda12*/
  if ( *(_DWORD *)(v10 + 664) == 9 ) /*0x5fda1e*/
    --v9; /*0x5fda20*/
  if ( v7 == 126 ) /*0x5fda24*/
    --v9; /*0x5fda26*/
  v11 = v9 + a2[1]; /*0x5fda30*/
  v30 = *a2; /*0x5fda32*/
  v31 = MEMORY[0x886FA4] + v11; /*0x5fda42*/
  v12 = this->Object_field_0xAC; /*0x5fda46*/
  if ( *(_BYTE *)(v12 + 681) ) /*0x5fda4c*/
  {
    v13 = 0; /*0x5fda5a*/
    if ( MEMORY[0xA83D90] <= 0 ) /*0x5fda5e*/
    {
LABEL_20:
      v13 = -1; /*0x5fda72*/
    }
    else
    {
      v14 = MEMORY[0xA83D84]; /*0x5fda60*/
      while ( *(_DWORD *)v14->vtable0 != v12 ) /*0x5fda68*/
      {
        ++v13; /*0x5fda6a*/
        v14 = (BuildingTypeClass *)((char *)v14 + 4); /*0x5fda6b*/
        if ( v13 >= MEMORY[0xA83D90] ) /*0x5fda70*/
          goto LABEL_20; /*0x5fda70*/
      }
    }
    v15 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * FindBuildingByTiberiumType(v13)]; /*0x5fda8b*/
    v16 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v15 + 192)); /*0x5fda93*/
    v17 = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * *(_DWORD *)(*(_DWORD *)(v15 + 224) + 660)]; /*0x5fdaa8*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 156))(v17); /*0x5fdaad*/
    if ( !v18 ) /*0x5fdab5*/
    {
      v19 = *(_DWORD *)(this->Object_field_0xAC + 668); /*0x5fdabd*/
      if ( v19 ) /*0x5fdac5*/
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 156))(v19); /*0x5fdac9*/
    }
    DrawToSurfaceSHP( /*0x5fdb03*/
      MEMORY[0x887314],
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
  else if ( *(_BYTE *)(v12 + 686) ) /*0x5fdb08*/
  {
    if ( *(_DWORD *)(v12 + 660) == 167 ) /*0x5fdb20*/
      v31 -= 38; /*0x5fdb22*/
    v32 = *v4; /*0x5fdb2b*/
    v33 = *(_DWORD *)(this + 160); /*0x5fdb32*/
    v34 = *(_DWORD *)(this + 164); /*0x5fdb41*/
    v20 = (char *)MEMORY[0xB054D4] + 4 * *((_DWORD *)HouseClass_Player + 22549); /*0x5fdb60*/
    v27 = *((__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v32) + 134); /*0x5fdb7c*/
    DrawToSurfaceSHP( /*0x5fdb9a*/
      MEMORY[0x887314],
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
    v21 = *v4; /*0x5fdba1*/
    v22 = *(_DWORD *)(this + 160); /*0x5fdba3*/
    v34 = *(_DWORD *)(this + 164); /*0x5fdba9*/
    LOWORD(a2) = v21 / 256; /*0x5fdbb9*/
    HIWORD(a2) = v22 / 256; /*0x5fdbd1*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a2) ) /*0x5fdbe3*/
    {
      v23 = *(_DWORD *)(this + 164); /*0x5fdbee*/
      v24 = *(_DWORD *)(this + 160); /*0x5fdbf1*/
      v32 = *v4; /*0x5fdbf4*/
      v34 = v23; /*0x5fdbfc*/
      v33 = v24; /*0x5fdc06*/
      v25 = Coord::To_Cell(&MEMORY[0x87F7E8], &v32); /*0x5fdc0a*/
    }
    else
    {
      v26 = (__int16 *)Tactical::PixelToCell((int)MEMORY[0x887324], &a2, &v30); /*0x5fdc21*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], v26) ) /*0x5fdc2c*/
      {
        v28 = (__int16 *)Tactical::PixelToCell((int)MEMORY[0x887324], &a2, &v30); /*0x5fdc4a*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v28); /*0x5fdc4b*/
      }
      else
      {
        LOWORD(a2) = 1; /*0x5fdc58*/
        HIWORD(a2) = MEMORY[0x87F8DC]; /*0x5fdc5f*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x5fdc6a*/
      }
    }
    DrawToSurfaceSHP( /*0x5fdcaa*/
      MEMORY[0x887314],
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
} // namespace gamemd

// 0x5FDDE0
namespace gamemd {
int Object::ProcessEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Object::_vt34(_DWORD *this)
{
  return *(this + 43); /*0x5fdde6*/
}
}
} // namespace gamemd

// 0x5FDF70
namespace gamemd {
OverlayClass * Object::DrawObject(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
OverlayClass *__thiscall Object::DrawObject(void **this, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &OverlayClass::`vftable'; /*0x5fdf76*/
  *(this + 1) = &OverlayClass::`vftable'; /*0x5fdf7c*/
  *(this + 2) = &OverlayClass::`vftable'; /*0x5fdf83*/
  *(this + 3) = &vt_OverlayClass; /*0x5fdf8a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x5fdf91*/
  v5 = this; /*0x5fdfa6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8EC50] + 16))(&MEMORY[0xA8EC50], &v5); /*0x5fdfaa*/
  if ( v3 != -1 && v3 < MEMORY[0xA8EC60] && v3 < --MEMORY[0xA8EC60] ) /*0x5fdfc5*/
  {
    do /*0x5fdfdd*/
    {
      ++v3; /*0x5fdfcd*/
      *((_DWORD *)MEMORY[0xA8EC54] + v3 - 1) = *((_DWORD *)MEMORY[0xA8EC54] + v3); /*0x5fdfd1*/
    }
    while ( v3 < MEMORY[0xA8EC60] ); /*0x5fdfdd*/
  }
  if ( MEMORY[0xA8E9A0] ) /*0x5fdfe6*/
    ObjectClass::Undeploy((#374 *)this); /*0x5fdfea*/
  *(this + 43) = 0; /*0x5fdff1*/
  ObjectClass::Dtor(this); /*0x5fdffb*/
  if ( (a2 & 1) != 0 ) /*0x5fe005*/
    __3_YAXPAX_Z(this); /*0x5fe008*/
  return (OverlayClass *)this; /*0x5fe012*/
}
}
} // namespace gamemd

// 0x62AC30
namespace gamemd {
int * Object::CalculateObjectPlacementPosition(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall CalculateObjectPlacementPosition(int this, int *a2)
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
  _DWORD *v13; // ebp
  _DWORD *NeighbourContentCell; // esi
  int v15; // eax
  bool v16; // bl
  int v17; // eax
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // ecx
  void *v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // edi
  int v26; // [esp+10h] [ebp-28h] BYREF
  int v27; // [esp+14h] [ebp-24h] BYREF
  int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  _BYTE v30[12]; // [esp+20h] [ebp-18h] BYREF
  int v31[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this + 40) ) /*0x62ac39*/
  {
    result = a2; /*0x62ac40*/
    v4 = MEMORY[0xAC4948]; /*0x62ac44*/
    v5 = a2; /*0x62ac4a*/
LABEL_39:
    *v5 = v4; /*0x62af27*/
    v5[1] = MEMORY[0xAC494C]; /*0x62af31*/
    v5[2] = MEMORY[0xAC4950]; /*0x62af3c*/
    return result; /*0x62af3c*/
  }
  if ( !(unsigned __int8)ParasiteClass::CanExistOnVictimCell(this) ) /*0x62ac5a*/
  {
    v12 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &v26) >> 12) + 1) >> 1) & 7; /*0x62ad3a*/
    v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)); /*0x62ad43*/
    NeighbourContentCell = Cell::GetNeighbourContent(v13, v12); /*0x62ad50*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 132))(*(_DWORD *)(this + 36)) + 3278) ) /*0x62ad5a*/
    {
      v15 = NeighbourContentCell[59]; /*0x62ad64*/
      if ( v15 == 2 || v15 == 6 || v15 == 3 ) /*0x62ad77*/
      {
        v16 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 320) /*0x62ad90*/
             & 0x100) == 0;
        v17 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 444))(*(_DWORD *)(this + 40)) + 68); /*0x62ad9d*/
        if ( v17 >= 74 && v17 <= 99 ) /*0x62ada8*/
          v16 = 0; /*0x62adaa*/
        if ( (v17 < 205 || v17 > 230) && v16 ) /*0x62adbc*/
        {
          result = a2; /*0x62adbe*/
          v4 = MEMORY[0xAC4948]; /*0x62adc2*/
          v5 = a2; /*0x62adc8*/
          goto LABEL_39; /*0x62adca*/
        }
      }
    }
    v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*NeighbourContentCell + 72))(NeighbourContentCell, v30); /*0x62adde*/
    v19 = ObjectPlacement::CalcPosition(NeighbourContentCell, v31, v18, 0, 0, 0); /*0x62ade9*/
    v27 = *v19; /*0x62adf0*/
    v20 = *(_DWORD *)(this + 36); /*0x62adf4*/
    v28 = v19[1]; /*0x62adfa*/
    v29 = v19[2]; /*0x62ae03*/
    if ( v20 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 1 ) /*0x62ae11*/
    {
      v21 = Coord::To_Cell(&MEMORY[0x87F7E8], &v27); /*0x62ae1d*/
      v22 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v21 + 72))(v21, v31); /*0x62ae2b*/
      v27 = *v22; /*0x62ae30*/
      v28 = v22[1]; /*0x62ae37*/
      v29 = v22[2]; /*0x62ae3e*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 140) ) /*0x62ae45*/
    {
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v27) + 80) & 0x100) != 0 ) /*0x62ae67*/
      {
        v29 += MEMORY[0xAC497C]; /*0x62ae75*/
        *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 1; /*0x62ae7c*/
        goto LABEL_34; /*0x62ae83*/
      }
      goto LABEL_29; /*0x62ae67*/
    }
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v27) + 80) & 0x100) != 0 ) /*0x62aea9*/
    {
      v23 = (*(int (__thiscall **)(_DWORD *, int *))(*v13 + 72))(v13, v31); /*0x62aeb5*/
      if ( v29 >= *(_DWORD *)(v23 + 8) ) /*0x62aec1*/
      {
LABEL_29:
        *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 0; /*0x62ae85*/
        goto LABEL_34; /*0x62ae8f*/
      }
      v29 += MEMORY[0xAC497C]; /*0x62aec9*/
      *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 1; /*0x62aed0*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 0; /*0x62aedc*/
    }
LABEL_34:
    v4 = MEMORY[0xAC4948]; /*0x62aee3*/
    v24 = v28; /*0x62aeed*/
    v25 = v29; /*0x62aef1*/
    if ( v27 != MEMORY[0xAC4948] || v28 != MEMORY[0xAC494C] || v29 != MEMORY[0xAC4950] ) /*0x62af07*/
    {
      *a2 = v27; /*0x62af0f*/
      a2[1] = v24; /*0x62af11*/
      a2[2] = v25; /*0x62af14*/
      return a2; /*0x62af1e*/
    }
    result = a2; /*0x62af21*/
    v5 = a2; /*0x62af25*/
    goto LABEL_39; /*0x62af25*/
  }
  v6 = (int *)(*(_DWORD *)(this + 40) + 156); /*0x62ac63*/
  v27 = *v6; /*0x62ac6a*/
  v7 = *(_DWORD *)(this + 36); /*0x62ac6e*/
  v28 = v6[1]; /*0x62ac74*/
  v29 = v6[2]; /*0x62ac7d*/
  if ( v7 ) /*0x62ac81*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 1 ) /*0x62ac8b*/
    {
      v8 = Coord::To_Cell(&MEMORY[0x87F7E8], &v27); /*0x62ac97*/
      v9 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v30); /*0x62aca5*/
      v27 = *v9; /*0x62acaa*/
      v10 = *(_DWORD *)(this + 40); /*0x62acae*/
      v28 = v9[1]; /*0x62acb4*/
      v11 = v9[2]; /*0x62acb8*/
      v29 = v11; /*0x62acbb*/
      if ( *(_BYTE *)(v10 + 140) ) /*0x62acbf*/
        v29 = MEMORY[0xAC497C] + v11; /*0x62accf*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 140) ) /*0x62acd6*/
    *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 1; /*0x62ace3*/
  else
    *(_BYTE *)(*(_DWORD *)(this + 36) + 140) = 0; /*0x62acef*/
  *a2 = v27; /*0x62ad03*/
  a2[1] = v28; /*0x62ad0a*/
  a2[2] = v29; /*0x62ad11*/
  return a2; /*0x62ad00*/
}
}
} // namespace gamemd

// 0x639E30
namespace gamemd {
char sub_639E30(int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_639E30(int *a1, _DWORD *a2)
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
} // namespace gamemd

// 0x646E90
namespace gamemd {
char Object_Init(char a1, int a2, int a3, char a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Object_Init(char a1, int a2, int a3, char a4, int a5)
{
  IUnknown *v5; // eax
  char v7[112]; // [esp+8h] [ebp-70h] BYREF

  v5 = ScriptAction::InitActionFields( /*0x646ef0*/
         v7,
         *(_DWORD *)(HouseClass_Player.field_0 + 48),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a3,
         0);
  if ( Networking_LastEventIndex >= 128 ) /*0x646eff*/
    return 0; /*0x646f59*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu); /*0x646f1b*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x646f2c*/
  ++Networking_LastEventIndex; /*0x646f43*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x646f48*/
  return 1; /*0x646f50*/
}
}
} // namespace gamemd

// 0x7DEEFA
namespace gamemd {
char Object_Calc(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __cdecl Object_Calc(MouseClass *aP0, _WORD *a1, int a3, int a4, int a5, int a6)
{
  MouseClass *v6; // esi
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
  MouseClass *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7def10*/
  v6 = aP0; /*0x7def17*/
  v20 = aP0; /*0x7def1a*/
  v7 = a1; /*0x7def1d*/
  v19 = a1; /*0x7def20*/
  do
  {
    v22 = a5; /*0x7def26*/
    HIWORD(v8) = 0; /*0x7def2b*/
    do
    {
      LOBYTE(v9) = v6->field_0; /*0x7def2d*/
      if ( LOBYTE(v6->field_0) )
      {
        LOWORD(v8) = *v7; /*0x7def33*/
        LOBYTE(v17) = v6->field_0; /*0x7def36*/
        v18 = v8; /*0x7def39*/
        v10 = (v8 >> 8) & 0xF8; /*0x7def45*/
        v11 = v10; /*0x7def50*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7def5c*/
        v13 = (v17 * ((v18 >> 3) & 0xFC)) >> 8; /*0x7def5f*/
        LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        LOBYTE(v13) = !__CFADD__((v18 >> 3) & 0xFC, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 3) & 0xFC) + v13) : -1;
        v8 = v12 >> 3 << 11; /*0x7def7a*/
        v14 = (unsigned __int8)(8 * v18); /*0x7def8e*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7def94*/
        LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
        v9 = (v15 >> 3) | v8 | (32 * (v13 >> 2)); /*0x7defa3*/
        *v7 = v9; /*0x7defa5*/
      }
      v6 = (MouseClass *)((char *)v6 + 1); /*0x7defa8*/
      ++v7; /*0x7defa9*/
      --v22; /*0x7defac*/
    }
    while ( v22 );
    v6 = (MouseClass *)((char *)v20 + a3); /*0x7defb8*/
    v20 = (MouseClass *)((char *)v20 + a3); /*0x7defbb*/
    v7 = (_WORD *)((char *)v19 + a4); /*0x7defc1*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7defc4*/
    --a6; /*0x7defc7*/
  }
  while ( a6 );
  return v9; /*0x7defd4*/
}
}
} // namespace gamemd

// 0x7DEFD7
namespace gamemd {
char Object_Calc_7DEFD7(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __cdecl Object_Calc_7DEFD7(MouseClass *aP0, _WORD *a1, int a3, int a4, int a5, int a6)
{
  MouseClass *v6; // esi
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
  MouseClass *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7defed*/
  v6 = aP0; /*0x7deff4*/
  v20 = aP0; /*0x7deff7*/
  v7 = a1; /*0x7deffa*/
  v19 = a1; /*0x7deffd*/
  do
  {
    v22 = a5; /*0x7df003*/
    HIWORD(v8) = 0; /*0x7df008*/
    do
    {
      LOBYTE(v9) = v6->field_0; /*0x7df00a*/
      if ( LOBYTE(v6->field_0) )
      {
        LOWORD(v8) = *v7; /*0x7df010*/
        LOBYTE(v17) = v6->field_0; /*0x7df013*/
        v18 = v8; /*0x7df016*/
        v10 = (v8 >> 8) & 0xFC; /*0x7df022*/
        v11 = v10; /*0x7df02d*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7df039*/
        v13 = (v17 * ((v18 >> 2) & 0xF8)) >> 8; /*0x7df03c*/
        LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        LOBYTE(v13) = !__CFADD__((v18 >> 2) & 0xF8, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 2) & 0xF8) + v13) : -1;
        v8 = v12 >> 2 << 10; /*0x7df057*/
        v14 = (unsigned __int8)(8 * v18); /*0x7df06b*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df071*/
        LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
        v9 = (v15 >> 3) | v8 | (32 * (v13 >> 3)); /*0x7df080*/
        *v7 = v9; /*0x7df082*/
      }
      v6 = (MouseClass *)((char *)v6 + 1); /*0x7df085*/
      ++v7; /*0x7df086*/
      --v22; /*0x7df089*/
    }
    while ( v22 );
    v6 = (MouseClass *)((char *)v20 + a3); /*0x7df095*/
    v20 = (MouseClass *)((char *)v20 + a3); /*0x7df098*/
    v7 = (_WORD *)((char *)v19 + a4); /*0x7df09e*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7df0a1*/
    --a6; /*0x7df0a4*/
  }
  while ( a6 );
  return v9; /*0x7df0b1*/
}
}
} // namespace gamemd

// 0x7DF0B4
namespace gamemd {
char Object_Calc_7DF0B4(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __cdecl Object_Calc_7DF0B4(MouseClass *aP0, _WORD *a1, int a3, int a4, int a5, int a6)
{
  MouseClass *v6; // esi
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
  MouseClass *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7df0ca*/
  v6 = aP0; /*0x7df0d1*/
  v20 = aP0; /*0x7df0d4*/
  v7 = a1; /*0x7df0d7*/
  v19 = a1; /*0x7df0da*/
  do
  {
    v22 = a5; /*0x7df0e0*/
    HIWORD(v8) = 0; /*0x7df0e5*/
    do
    {
      LOBYTE(v9) = v6->field_0; /*0x7df0e7*/
      if ( LOBYTE(v6->field_0) )
      {
        LOWORD(v8) = *v7; /*0x7df0ed*/
        LOBYTE(v17) = v6->field_0; /*0x7df0f0*/
        v18 = v8; /*0x7df0f3*/
        v10 = (v8 >> 8) & 0xF8; /*0x7df0ff*/
        v11 = v10; /*0x7df10a*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7df116*/
        v13 = (v17 * ((v18 >> 3) & 0xF8)) >> 8; /*0x7df119*/
        LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        LOBYTE(v13) = !__CFADD__((v18 >> 3) & 0xF8, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 3) & 0xF8) + v13) : -1;
        v8 = v12 >> 3 << 11; /*0x7df134*/
        v14 = (unsigned __int8)(4 * v18); /*0x7df148*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df14e*/
        LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
        v9 = (v15 >> 2) | v8 | (v13 >> 3 << 6); /*0x7df15d*/
        *v7 = v9; /*0x7df15f*/
      }
      v6 = (MouseClass *)((char *)v6 + 1); /*0x7df162*/
      ++v7; /*0x7df163*/
      --v22; /*0x7df166*/
    }
    while ( v22 );
    v6 = (MouseClass *)((char *)v20 + a3); /*0x7df172*/
    v20 = (MouseClass *)((char *)v20 + a3); /*0x7df175*/
    v7 = (_WORD *)((char *)v19 + a4); /*0x7df17b*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7df17e*/
    --a6; /*0x7df181*/
  }
  while ( a6 );
  return v9; /*0x7df18e*/
}
}
} // namespace gamemd

// 0x7DF191
namespace gamemd {
char Object_Calc_7DF191(MouseClass * aP0, unsigned short * a1, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __cdecl Object_Calc_7DF191(MouseClass *aP0, _WORD *a1, int a3, int a4, int a5, int a6)
{
  MouseClass *v6; // esi
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
  MouseClass *v20; // [esp+10h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-4h]

  v17 = 0; /*0x7df1a7*/
  v6 = aP0; /*0x7df1ae*/
  v20 = aP0; /*0x7df1b1*/
  v7 = a1; /*0x7df1b4*/
  v19 = a1; /*0x7df1b7*/
  do
  {
    v22 = a5; /*0x7df1bd*/
    HIWORD(v8) = 0; /*0x7df1c2*/
    do
    {
      LOBYTE(v9) = v6->field_0; /*0x7df1c4*/
      if ( LOBYTE(v6->field_0) )
      {
        LOWORD(v8) = *v7; /*0x7df1ca*/
        LOBYTE(v17) = v6->field_0; /*0x7df1cd*/
        v18 = v8; /*0x7df1d0*/
        v10 = (v8 >> 7) & 0xF8; /*0x7df1dc*/
        v11 = v10; /*0x7df1e7*/
        v12 = (unsigned int)(v17 * v10) >> 8; /*0x7df1f3*/
        v13 = (v17 * ((v18 >> 2) & 0xF8)) >> 8; /*0x7df1f6*/
        LOBYTE(v12) = !__CFADD__(v11, (_BYTE)v12) ? (unsigned __int8)(v11 + v12) : -1;
        LOBYTE(v13) = !__CFADD__((v18 >> 2) & 0xF8, (_BYTE)v13) ? (unsigned __int8)(((v18 >> 2) & 0xF8) + v13) : -1;
        v8 = v12 >> 3 << 10; /*0x7df211*/
        v14 = (unsigned __int8)(8 * v18); /*0x7df225*/
        v15 = (unsigned int)(v17 * v14) >> 8; /*0x7df22b*/
        LOBYTE(v15) = !__CFADD__((_BYTE)v14, (_BYTE)v15) ? (unsigned __int8)(v14 + v15) : -1;
        v9 = (v15 >> 3) | v8 | (32 * (v13 >> 3)); /*0x7df23a*/
        *v7 = v9; /*0x7df23c*/
      }
      v6 = (MouseClass *)((char *)v6 + 1); /*0x7df23f*/
      ++v7; /*0x7df240*/
      --v22; /*0x7df243*/
    }
    while ( v22 );
    v6 = (MouseClass *)((char *)v20 + a3); /*0x7df24f*/
    v20 = (MouseClass *)((char *)v20 + a3); /*0x7df252*/
    v7 = (_WORD *)((char *)v19 + a4); /*0x7df258*/
    v19 = (_WORD *)((char *)v19 + a4); /*0x7df25b*/
    --a6; /*0x7df25e*/
  }
  while ( a6 );
  return v9; /*0x7df26b*/
}
}
} // namespace gamemd

// 0x7DF280
namespace gamemd {
char Object_Calc_7DF280(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Object_Calc_7DF280(MouseClass *aP0, _BYTE *a1, _WORD *a2, int a4, int a5, int a6, int a7, int a8)
{
  __m64 mm0_0; // mm0
  MouseClass *v8; // esi
  _BYTE *v10; // edi
  int v11; // ebx
  int v12; // eax
  __m64 v13; // mm1
  __m64 v15; // [esp+4h] [ebp-24h]
  __m64 v16; // [esp+Ch] [ebp-1Ch]
  _BYTE *v17; // [esp+18h] [ebp-10h]
  MouseClass *v18; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+24h] [ebp-4h]

  v16.m64_u64 = 0; /*0x7df296*/
  v8 = aP0; /*0x7df2b2*/
  v18 = aP0; /*0x7df2b5*/
  v10 = a1; /*0x7df2b8*/
  v17 = a1; /*0x7df2bb*/
LABEL_2:
  while ( 2 ) /*0x7df2c1*/
  {
    v20 = a5; /*0x7df2c1*/
    HIWORD(v11) = 0; /*0x7df2c9*/
    do /*0x7df39c*/
    {
      while ( 1 ) /*0x7df340*/
      {
        LOBYTE(v12) = v8->field_0; /*0x7df340*/
        if ( LOBYTE(v8->field_0) ) /*0x7df340*/
          break; /*0x7df340*/
        v8 = (MouseClass *)((char *)v8 + 1); /*0x7df300*/
        v10 += 2; /*0x7df301*/
        if ( !--v20 ) /*0x7df307*/
        {
          v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df30c*/
          v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df30f*/
          v10 = &v17[a4]; /*0x7df315*/
          v17 += a4; /*0x7df318*/
          if ( --a6 ) /*0x7df31e*/
            goto LABEL_2; /*0x7df31e*/
          goto LABEL_9; /*0x7df31e*/
        }
      }
      v16.m64_i8[0] = v8->field_0; /*0x7df346*/
      LOWORD(v11) = *(_WORD *)v10; /*0x7df349*/
      v16.m64_i8[2] = v8->field_0; /*0x7df34c*/
      v16.m64_i8[4] = v8->field_0; /*0x7df34f*/
      v13 = _m_psrlwi(_m_punpcklbw(mm0_0, (__m64)*(unsigned int *)(a7 + 4 * v11)), 8u); /*0x7df35a*/
      mm0_0 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v13, v16), 8u), v13), 2u); /*0x7df368*/
      v15 = mm0_0; /*0x7df36c*/
      v12 = 32 * v15.m64_u8[2]; /*0x7df37e*/
      v8 = (MouseClass *)((char *)v8 + 1); /*0x7df38f*/
      v11 = (v15.m64_u8[4] << 10) & 0xF800 | v12 | ((unsigned __int8)v15.m64_i8[0] >> 1); /*0x7df390*/
      v10 += 2; /*0x7df392*/
      *((_WORD *)v10 - 1) = v11; /*0x7df395*/
      --v20; /*0x7df399*/
    }
    while ( v20 ); /*0x7df39c*/
    v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df3a1*/
    v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df3a4*/
    v10 = &v17[a4]; /*0x7df3aa*/
    v17 += a4; /*0x7df3ad*/
    if ( --a6 ) /*0x7df3b3*/
      continue; /*0x7df3b3*/
    break;
  }
LABEL_9:
  _m_empty(); /*0x7df3b9*/
  return v12; /*0x7df3bf*/
}
}
} // namespace gamemd

// 0x7DF3C2
namespace gamemd {
char Object_Calc_7DF3C2(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Object_Calc_7DF3C2(MouseClass *aP0, _BYTE *a1, _WORD *a2, int a4, int a5, int a6, int a7, int a8)
{
  __m64 mm0_0; // mm0
  MouseClass *v8; // esi
  _BYTE *v10; // edi
  int v11; // ebx
  int v12; // eax
  __m64 v13; // mm1
  __m64 v15; // [esp+4h] [ebp-24h]
  __m64 v16; // [esp+Ch] [ebp-1Ch]
  _BYTE *v17; // [esp+18h] [ebp-10h]
  MouseClass *v18; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+24h] [ebp-4h]

  v16.m64_u64 = 0; /*0x7df3d8*/
  v8 = aP0; /*0x7df3f4*/
  v18 = aP0; /*0x7df3f7*/
  v10 = a1; /*0x7df3fa*/
  v17 = a1; /*0x7df3fd*/
LABEL_2:
  while ( 2 ) /*0x7df403*/
  {
    v20 = a5; /*0x7df403*/
    HIWORD(v11) = 0; /*0x7df40b*/
    do /*0x7df4da*/
    {
      while ( 1 ) /*0x7df480*/
      {
        LOBYTE(v12) = v8->field_0; /*0x7df480*/
        if ( LOBYTE(v8->field_0) ) /*0x7df480*/
          break; /*0x7df480*/
        v8 = (MouseClass *)((char *)v8 + 1); /*0x7df440*/
        v10 += 2; /*0x7df441*/
        if ( !--v20 ) /*0x7df447*/
        {
          v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df44c*/
          v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df44f*/
          v10 = &v17[a4]; /*0x7df455*/
          v17 += a4; /*0x7df458*/
          if ( --a6 ) /*0x7df45e*/
            goto LABEL_2; /*0x7df45e*/
          goto LABEL_9; /*0x7df45e*/
        }
      }
      v16.m64_i8[0] = v8->field_0; /*0x7df486*/
      LOWORD(v11) = *(_WORD *)v10; /*0x7df489*/
      v16.m64_i8[2] = v8->field_0; /*0x7df48c*/
      v16.m64_i8[4] = v8->field_0; /*0x7df48f*/
      v13 = _m_psrlwi(_m_punpcklbw(mm0_0, (__m64)*(unsigned int *)(a7 + 4 * v11)), 8u); /*0x7df49a*/
      mm0_0 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v13, v16), 8u), v13), 3u); /*0x7df4a8*/
      v15 = mm0_0; /*0x7df4ac*/
      v12 = 32 * v15.m64_u8[2]; /*0x7df4bc*/
      v8 = (MouseClass *)((char *)v8 + 1); /*0x7df4cd*/
      v11 = (v15.m64_u8[4] << 10) & 0x7C00 | v12 | v15.m64_u8[0]; /*0x7df4ce*/
      v10 += 2; /*0x7df4d0*/
      *((_WORD *)v10 - 1) = v11; /*0x7df4d3*/
      --v20; /*0x7df4d7*/
    }
    while ( v20 ); /*0x7df4da*/
    v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df4df*/
    v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df4e2*/
    v10 = &v17[a4]; /*0x7df4e8*/
    v17 += a4; /*0x7df4eb*/
    if ( --a6 ) /*0x7df4f1*/
      continue; /*0x7df4f1*/
    break;
  }
LABEL_9:
  _m_empty(); /*0x7df4f7*/
  return v12; /*0x7df4fd*/
}
}
} // namespace gamemd

// 0x7DF500
namespace gamemd {
char Object_Calc_7DF500(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Object_Calc_7DF500(MouseClass *aP0, _BYTE *a1, _WORD *a2, int a4, int a5, int a6, int a7, int a8)
{
  __m64 mm0_0; // mm0
  MouseClass *v8; // esi
  _BYTE *v10; // edi
  int v11; // ebx
  int v12; // eax
  __m64 v13; // mm1
  __m64 v15; // [esp+4h] [ebp-24h]
  __m64 v16; // [esp+Ch] [ebp-1Ch]
  _BYTE *v17; // [esp+18h] [ebp-10h]
  MouseClass *v18; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+24h] [ebp-4h]

  v16.m64_u64 = 0; /*0x7df516*/
  v8 = aP0; /*0x7df532*/
  v18 = aP0; /*0x7df535*/
  v10 = a1; /*0x7df538*/
  v17 = a1; /*0x7df53b*/
LABEL_2:
  while ( 2 ) /*0x7df541*/
  {
    v20 = a5; /*0x7df541*/
    HIWORD(v11) = 0; /*0x7df549*/
    do /*0x7df61a*/
    {
      while ( 1 ) /*0x7df5c0*/
      {
        LOBYTE(v12) = v8->field_0; /*0x7df5c0*/
        if ( LOBYTE(v8->field_0) ) /*0x7df5c0*/
          break; /*0x7df5c0*/
        v8 = (MouseClass *)((char *)v8 + 1); /*0x7df580*/
        v10 += 2; /*0x7df581*/
        if ( !--v20 ) /*0x7df587*/
        {
          v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df58c*/
          v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df58f*/
          v10 = &v17[a4]; /*0x7df595*/
          v17 += a4; /*0x7df598*/
          if ( --a6 ) /*0x7df59e*/
            goto LABEL_2; /*0x7df59e*/
          goto LABEL_9; /*0x7df59e*/
        }
      }
      v16.m64_i8[0] = v8->field_0; /*0x7df5c6*/
      LOWORD(v11) = *(_WORD *)v10; /*0x7df5c9*/
      v16.m64_i8[2] = v8->field_0; /*0x7df5cc*/
      v16.m64_i8[4] = v8->field_0; /*0x7df5cf*/
      v13 = _m_psrlwi(_m_punpcklbw(mm0_0, (__m64)*(unsigned int *)(a7 + 4 * v11)), 8u); /*0x7df5da*/
      mm0_0 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v13, v16), 8u), v13), 2u); /*0x7df5e8*/
      v15 = mm0_0; /*0x7df5ec*/
      v12 = v15.m64_u8[2] << 6; /*0x7df5fc*/
      v8 = (MouseClass *)((char *)v8 + 1); /*0x7df60d*/
      v11 = (v15.m64_u8[4] << 10) & 0xF800 | v12 | v15.m64_u8[0]; /*0x7df60e*/
      v10 += 2; /*0x7df610*/
      *((_WORD *)v10 - 1) = v11; /*0x7df613*/
      --v20; /*0x7df617*/
    }
    while ( v20 ); /*0x7df61a*/
    v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df61f*/
    v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df622*/
    v10 = &v17[a4]; /*0x7df628*/
    v17 += a4; /*0x7df62b*/
    if ( --a6 ) /*0x7df631*/
      continue; /*0x7df631*/
    break;
  }
LABEL_9:
  _m_empty(); /*0x7df637*/
  return v12; /*0x7df63d*/
}
}
} // namespace gamemd

// 0x7DF640
namespace gamemd {
char Object_Calc_7DF640(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Object_Calc_7DF640(MouseClass *aP0, _BYTE *a1, _WORD *a2, int a4, int a5, int a6, int a7, int a8)
{
  __m64 mm0_0; // mm0
  MouseClass *v8; // esi
  _BYTE *v10; // edi
  int v11; // ebx
  int v12; // eax
  __m64 v13; // mm1
  __m64 v15; // [esp+4h] [ebp-24h]
  __m64 v16; // [esp+Ch] [ebp-1Ch]
  _BYTE *v17; // [esp+18h] [ebp-10h]
  MouseClass *v18; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+24h] [ebp-4h]

  v16.m64_u64 = 0; /*0x7df656*/
  v8 = aP0; /*0x7df672*/
  v18 = aP0; /*0x7df675*/
  v10 = a1; /*0x7df678*/
  v17 = a1; /*0x7df67b*/
LABEL_2:
  while ( 2 ) /*0x7df681*/
  {
    v20 = a5; /*0x7df681*/
    HIWORD(v11) = 0; /*0x7df689*/
    do /*0x7df75b*/
    {
      while ( 1 ) /*0x7df700*/
      {
        LOBYTE(v12) = v8->field_0; /*0x7df700*/
        if ( LOBYTE(v8->field_0) ) /*0x7df700*/
          break; /*0x7df700*/
        v8 = (MouseClass *)((char *)v8 + 1); /*0x7df6c0*/
        v10 += 2; /*0x7df6c1*/
        if ( !--v20 ) /*0x7df6c7*/
        {
          v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df6cc*/
          v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df6cf*/
          v10 = &v17[a4]; /*0x7df6d5*/
          v17 += a4; /*0x7df6d8*/
          if ( --a6 ) /*0x7df6de*/
            goto LABEL_2; /*0x7df6de*/
          goto LABEL_9; /*0x7df6de*/
        }
      }
      v16.m64_i8[0] = v8->field_0; /*0x7df706*/
      LOWORD(v11) = *(_WORD *)v10; /*0x7df709*/
      v16.m64_i8[2] = v8->field_0; /*0x7df70c*/
      v16.m64_i8[4] = v8->field_0; /*0x7df70f*/
      v13 = _m_psrlwi(_m_punpcklbw(mm0_0, (__m64)*(unsigned int *)(a7 + 4 * v11)), 8u); /*0x7df71a*/
      mm0_0 = _m_psrlwi(_m_paddusb(_m_psrlwi(_m_pmullw(v13, v16), 8u), v13), 2u); /*0x7df728*/
      v15 = mm0_0; /*0x7df72c*/
      v12 = (16 * v15.m64_u8[2]) & 0xA60; /*0x7df747*/
      v8 = (MouseClass *)((char *)v8 + 1); /*0x7df74e*/
      v11 = (v15.m64_u8[4] << 10) | v12 | ((unsigned __int8)v15.m64_i8[0] >> 1); /*0x7df74f*/
      v10 += 2; /*0x7df751*/
      *((_WORD *)v10 - 1) = v11; /*0x7df754*/
      --v20; /*0x7df758*/
    }
    while ( v20 ); /*0x7df75b*/
    v8 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df760*/
    v18 = (MouseClass *)((char *)v18 + (_DWORD)a2); /*0x7df763*/
    v10 = &v17[a4]; /*0x7df769*/
    v17 += a4; /*0x7df76c*/
    if ( --a6 ) /*0x7df772*/
      continue; /*0x7df772*/
    break;
  }
LABEL_9:
  _m_empty(); /*0x7df778*/
  return v12; /*0x7df77e*/
}
}
} // namespace gamemd

// 0x5A7E90
namespace gamemd {
int sub_5A7E90(int a1, unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5A7E90(int a1, _WORD *a2)
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

  v2 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + a1); /*0x5a7e9e*/
  v10 = v2; /*0x5a7ea3*/
  result = (*(int (__thiscall **)(_DWORD *))(*v2 + 156))(v2); /*0x5a7ea9*/
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
          LOWORD(v9) = i + *a2; /*0x5a7ef4*/
          HIWORD(v9) = a2[1] + v4; /*0x5a7ef9*/
          v12 = v9; /*0x5a7f02*/
          v7 = SHIWORD(v9) + (__int16)v9; /*0x5a7f0c*/
          if ( v7 > v5 ) /*0x5a7f11*/
          {
            if ( (__int16)v9 - SHIWORD(v9) >= v5 || SHIWORD(v9) - (__int16)v9 >= v5 || v7 > g_MapCellCount ) /*0x5a7f27*/
            {
              v2 = v10; /*0x5a7f69*/
            }
            else
            {
              v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x5a7f33*/
              v2 = v10; /*0x5a7f38*/
              if ( *(_DWORD *)(v13 + 4 * (i + v4 * v10[185]) + 16) ) /*0x5a7f4b*/
              {
                v8[14] = 0xFFFF; /*0x5a7f53*/
                *((_BYTE *)v8 + 282) = 0; /*0x5a7f5a*/
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
} // namespace gamemd

// 0x710890
namespace gamemd {
int sub_710890(int a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_710890(int a1, int a2, int *a3)
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
} // namespace gamemd

// 0x42B1F0
namespace gamemd {
int Object::ComputeAllocationSize()
{
{
    return 2 * g_Cell_PositionLUT * (g_CellPositionOffset + 4);
}
}
} // namespace gamemd

// 0x53E420
namespace gamemd {
void ** Object::RemoveObjectArray()
{
{
    void **result;
    int v2;
    result = (void **)g_StreamPool;
    if ( g_StreamPool )
  {
    if ( this )
    {
    result = (void **)DataGlobal_AA044C;
    v2 = 1;
    if ( DataGlobal_AA0374 > 1 )
      {
    while ( *result != this )
        {
    ++v2;
    ++result;
    if ( v2 >= DataGlobal_AA0374 )
    return result;
        }
    *result = 0;
    return (void **)--DataGlobal_AA0450;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5F5230
namespace gamemd {
int Object::Unlink()
{
{
    int result;
    int v2;
    char v3;
    result = this->Object_field_0x34;
    if ( result == v2 && result )
  {
    --*(int *)(result + 44);
    this->Object_field_0x34 = 0;
  }
    LOBYTE(result) = v3;
    if ( v3 )
  {
    result = this->Object_field_0x30;
    if ( v2 == result )
    {
    if ( v2 )
      {
    result = *(int *)(result + 48);
    this->Object_field_0x30 = result;
      }
    }
  }
    if ( v2 == this->Object_field_0x88 )
    this->Object_field_0x88 = 0;
    return result;
}
}
} // namespace gamemd

// 0x5FD270
namespace gamemd {
char Object::CheckState(IUnknown * aP1, int a3)
{
{
    IUnknown *v3;
    int *v5;
    v3 = aP1;
    LOWORD(aP1) = aP1->field_0 / 256;
    HIWORD(aP1) = v3->field_4 / 256;
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&aP1);
    if ( CellClass::FindInfantry(v5, 0) )
    return 0;
    else
    return ObjectClass::Deploy((#374 *)this);
}
}
} // namespace gamemd

// 0x5FD8F0
namespace gamemd {
int Object::LoadObject(ObjectClass * aP1, int aP1a)
{
{
    ObjectClass *Register;
    Register = (ObjectClass *)BuildingClass::SaveLoad_Register((AnimClass *)this);
    if ( (int)Register >= 0 )
  {
    if ( aP1 )
    {
    ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
    *(int *)aP1->__pad_0 = (unsigned int)vt_OverlayClass;
    *(int *)&aP1->__pad_0[4] = (unsigned int)vt_OverlayClass;
    *(int *)&aP1->__pad_0[8] = (unsigned int)vt_OverlayClass;
    *(int *)&aP1->__pad_0[12] = &vt_OverlayClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]);
  }
    return (int)Register->__pad_0;
}
}
} // namespace gamemd

// 0x5FD950
namespace gamemd {
int Object::SaveObject(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace gamemd

// 0x5FDF00
namespace gamemd {
int Object::StubReturn176()
{
return 176;
}
} // namespace gamemd

// 0x5FDF10
namespace gamemd {
int Object::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448647;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x5FDF50
namespace gamemd {
int Object::StubReturn20()
{
return 20;
}
} // namespace gamemd

// 0x637DD0
namespace gamemd {
char sub_637DD0(char a1, int a2, int a3, int a4, int a5, int a6, int a7, short a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
{
    char result;
    char v29[108];
    int v30;
    result = a1;
    if ( a1 == 4 )
  {
    HIBYTE(a8) = 1;
    qmemcpy(v29, &a1, sizeof(v29));
    LOWORD(v30) = a28;
    BYTE2(v30) = BYTE2(a28);
    return Network::RecordEvent( *(__int64 *)v29, *(int *)&v29[8], *(int *)&v29[12], *(int *)&v29[16], *(int *)&v29[20], *(int *)&v29[24], *(int *)&v29[28], *(int *)&v29[32], *(int *)&v29[36], *(int *)&v29[40], *(int *)&v29[44], *(int *)&v29[48], *(int *)&v29[52], *(int *)&v29[56], *(int *)&v29[60], *(int *)&v29[64], *(int *)&v29[68], *(int *)&v29[72], *(int *)&v29[76], *(int *)&v29[80], *(int *)&v29[84], *(int *)&v29[88], *(int *)&v29[92], *(int *)&v29[96], *(int *)&v29[100], *(int *)&v29[104], v30);
  }
    return result;
}
}
} // namespace gamemd

// 0x733C60
namespace gamemd {
BOOL sub_733C60(int a1, const char * a2)
{
{
    const char *v4;
    v4 = (const char *)((*(int (__thiscall **)(int))(*(int *)(a1) + 136))(a1) + 36);
    return a2 && !strcmp(v4, a2) && (*(unsigned char (__thiscall **)(int))(*(int *)(a1) + 316))(a1);
}
}
} // namespace gamemd

// 0x7AD330
namespace gamemd {
SessionClass * Object::DtorWithDelete(char a2)
{
{
    DeleteAndZero(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SessionClass *)this;
}
}
} // namespace gamemd

// 0x7CBC11
namespace gamemd {
char * sub_7CBC11(char * VarName)
{
{
    char *v1;
    _lock(12);
    v1 = getenv(VarName);
    _unlock(12);
    return v1;
}
}
} // namespace gamemd
