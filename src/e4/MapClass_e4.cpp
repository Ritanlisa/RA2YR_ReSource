// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint____13_e4.hpp"

// 0x4112D0
int MapClass::isLocationShrouded(unsigned short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4112D0(_DWORD *this, unsigned __int16 a2)
{
  int v2; // eax
  int v3; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->q02C; /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  v2 = this->q028; /*0x4112e8*/
  v3 = this->q014; /*0x4112eb*/
  v5[2] = v2; /*0x4112f4*/
  return (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v3 + 20))(v3, v5, a2); /*0x411303*/
}
}

// 0x42C1C0
unsigned int * MapClass::AllocArrays()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_42C1C0(char *this)
{
  void **v1; // esi
  char *v2; // edi
  int v3; // ebx
  char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  int v7; // ecx
  char *v8; // eax
  int v9; // ecx
  char *v10; // eax
  int v11; // ecx
  _DWORD *result; // eax
  int v13; // ecx
  int v14; // ecx

  v1 = (void **)(this + 76); /*0x42c1c8*/
  v2 = (char *)(&DataGlobal_87F810 - (_UNKNOWN *)this); /*0x42c1cb*/
  v3 = 3; /*0x42c1cd*/
  do /*0x42c27c*/
  {
    if ( *(v1 - 3) ) /*0x42c1d2*/
      __3_YAXPAX_Z(*(v1 - 3)); /*0x42c1da*/
    v4 = (char *)__2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c1e9*/
    *(v1 - 3) = v4; /*0x42c1ee*/
    v5 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c1f7*/
    if ( v5 >= 0 ) /*0x42c1f8*/
    {
      v6 = &v4[4 * v5]; /*0x42c1fa*/
      v7 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c1fd*/
      do /*0x42c208*/
      {
        *(_DWORD *)v6 = 0; /*0x42c1fe*/
        v6 -= 4; /*0x42c204*/
        --v7; /*0x42c207*/
      }
      while ( v7 ); /*0x42c208*/
    }
    if ( *v1 ) /*0x42c20a*/
      __3_YAXPAX_Z(*v1); /*0x42c211*/
    v8 = (char *)__2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c220*/
    *v1 = v8; /*0x42c225*/
    v9 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c22d*/
    if ( v9 >= 0 ) /*0x42c22e*/
    {
      v10 = &v8[4 * v9]; /*0x42c230*/
      v11 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c233*/
      do /*0x42c23e*/
      {
        *(_DWORD *)v10 = 0; /*0x42c234*/
        v10 -= 4; /*0x42c23a*/
        --v11; /*0x42c23d*/
      }
      while ( v11 ); /*0x42c23e*/
    }
    if ( v1[3] ) /*0x42c240*/
      __3_YAXPAX_Z(v1[3]); /*0x42c248*/
    result = __2_YAPAXI_Z(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c257*/
    v1[3] = result; /*0x42c25c*/
    v13 = *(int *)((char *)v1 + (_DWORD)v2) - 1; /*0x42c265*/
    if ( v13 >= 0 ) /*0x42c266*/
    {
      result += v13; /*0x42c268*/
      v14 = *(int *)((char *)v1 + (_DWORD)v2); /*0x42c26b*/
      do /*0x42c276*/
      {
        *result-- = 0; /*0x42c26c*/
        --v14; /*0x42c275*/
      }
      while ( v14 ); /*0x42c276*/
    }
    ++v1; /*0x42c278*/
    --v3; /*0x42c27b*/
  }
  while ( v3 ); /*0x42c27c*/
  return result; /*0x42c282*/
}
}

// 0x485130
int MapClass::RemoveCellReference(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_485130(int *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int result; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // ecx

  v3 = a2; /*0x485134*/
  v4 = this->q03C; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(_DWORD *)(v4 + 44); /*0x485143*/
    this->q03C = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(int *, int *))(DataGlobal_880944 + 16))(&DataGlobal_880944, this + 9); /*0x48515c*/
    if ( v5 != -1 && v5 < DataGlobal_880954 && v5 < --DataGlobal_880954 ) /*0x485177*/
    {
      do /*0x48518f*/
      {
        ++v5; /*0x48517f*/
        *(_DWORD *)(DataGlobal_880948 + 4 * v5 - 4) = *(_DWORD *)(DataGlobal_880948 + 4 * v5); /*0x485183*/
      }
      while ( v5 < DataGlobal_880954 ); /*0x48518f*/
    }
  }
  if ( this->q02C == v3 ) /*0x485194*/
    this->q02C = 0; /*0x485196*/
  if ( this->q00C == v3 ) /*0x4851a0*/
    this->q00C = 0; /*0x4851a2*/
  result = this->q028; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      v7 = (_DWORD *)this->q028; /*0x4851bc*/
      a2 = v3; /*0x4851bf*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*v7 + 16))(v7, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = v7[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( v7[4] = v9; result < v7[4]; *(_DWORD *)(v7[1] + 4 * result - 4) = *(_DWORD *)(v7[1] + 4 * result) ) /*0x4851e1*/
            ++result; /*0x4851e6*/
        }
      }
    }
  }
  return result; /*0x4851f5*/
}
}

// 0x4A95A0
char MapClass::SetCellFlagsAlongPath(IUnknown * aP1, unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::SetCellFlagsAlongPath(__int16 **this, IUnknown *aP1, _WORD *a2)
{
  IUnknown *v3; // ebp
  _DWORD *v5; // eax
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v3 = aP1; /*0x4a95a2*/
  LOWORD(v5) = aP1->field_0; /*0x4a95aa*/
  if ( LOWORD(aP1->field_0) != *(_WORD *)&g_CellDirectionOffsets[3432] /*0x4a95c2*/
    || HIWORD(aP1->field_0) != *(_WORD *)&g_CellDirectionOffsets[3434] )
  {
    v6 = this->q117C; /*0x4a95c4*/
    v7 = (char)a2; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
      v8 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
      v9 = *v8; /*0x4a95e2*/
      LOWORD(v8) = HIWORD(v3->field_0) + v8[1]; /*0x4a95ed*/
      LOWORD(a2) = LOWORD(v3->field_0) + v9; /*0x4a95f1*/
      HIWORD(a2) = (_WORD)v8; /*0x4a95f6*/
      aP1 = (IUnknown *)a2; /*0x4a9603*/
      LOBYTE(v5) = LayerClass::CoordinatesLegal(this, (IUnknown *)&aP1); /*0x4a960a*/
      if ( (_BYTE)v5 ) /*0x4a9611*/
      {
        v5 = CellCoord::To_CellObj(this, (__int16 *)&aP1); /*0x4a961a*/
        v10 = v5[75]; /*0x4a961f*/
        if ( v7 ) /*0x4a9627*/
          v5[75] = v10 | 2; /*0x4a962c*/
        else
          v5[75] = v10 & 0xFFFFFFFD; /*0x4a9637*/
      }
    }
  }
  return (char)v5; /*0x4a963f*/
}
}

// 0x4AC960
int MapClass::ToggleZoom(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass_ToggleZoom(int *this, int a2)
{
  int result; // eax
  char v4; // bl
  int v5; // edx
  int v6; // eax

  result = a2; /*0x4ac960*/
  v4 = this->q11B0; /*0x4ac96b*/
  if ( a2 == -1 ) /*0x4ac971*/
  {
    v4 = v4 == 0; /*0x4ac986*/
  }
  else if ( a2 ) /*0x4ac975*/
  {
    if ( a2 == 1 ) /*0x4ac97a*/
      v4 = 1; /*0x4ac97c*/
  }
  else
  {
    v4 = 0; /*0x4ac980*/
  }
  if ( v4 != this->q11B4 ) /*0x4ac98f*/
  {
    result = this->q11A8; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 /*0x4ac9ad*/
        && !(unsigned __int8)((_DWORD (__stdcall *)(_DWORD))MapClass::isCellAccessible)(*((_DWORD *)HouseClass_Player
                                                                                        + 12)) )
      {
        v4 = 0; /*0x4ac9b6*/
      }
      v5 = *this; /*0x4ac9b8*/
      this->q11B1 = 0; /*0x4ac9c0*/
      this->q11B2 = 0; /*0x4ac9c7*/
      this->q11B3 = 0; /*0x4ac9ce*/
      this->q11B0 = 0; /*0x4ac9d5*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v5 + 72))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        this->q11B4 = 1; /*0x4ac9e3*/
        return MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac9ea*/
      }
      else
      {
        v6 = *this; /*0x4ac9f4*/
        this->q11B4 = 0; /*0x4ac9f8*/
        return (*(int (__thiscall **)(int *))(v6 + 80))(this); /*0x4ac9ff*/
      }
    }
  }
  return result; /*0x4ac9ef*/
}
}

// 0x4AD7E0
int MapClass::SaveCellTagsToINI(char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass::SaveCellTagsToINI(_DWORD *this, char *a2)
{
  __int16 v3; // bp
  _DWORD *v4; // ebx
  int j; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // eax
  signed int v11; // edi
  int v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-3Ch] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-38h] BYREF
  _DWORD *v16; // [esp+18h] [ebp-34h]
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
  int v18[3]; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v19[4]; // [esp+3Ch] [ebp-10h] BYREF
  int i; // [esp+50h] [ebp+4h]

  v3 = 0; /*0x4ad7ef*/
  v4 = this; /*0x4ad7f2*/
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((int)a2, (int)&DataGlobal_81FFF0, 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI(&DataGlobal_81FFF0, unk_818658, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x4ad81b*/
  INIClass::SetRect(a2, (unsigned __int8 *)&DataGlobal_81FFF0, g_INI_Key_Size, v4 + 59); /*0x4ad835*/
  INIClass::SetRect(a2, (unsigned __int8 *)&DataGlobal_81FFF0, g_INI_Key_LocalSize, v4 + 63); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints(a2); /*0x4ad85b*/
  INIClass::ClearSection((int)a2, (int)g_INI_Key_CellTags, 0); /*0x4ad86a*/
  for ( i = 0; i < 512000; i += 1000 ) /*0x4ad86f*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4ad873*/
    {
      v14[0] = j; /*0x4ad87c*/
      v14[1] = v3; /*0x4ad881*/
      if ( *((_DWORD *)CellCoord::To_CellObj(v4, v14) + 15) ) /*0x4ad88b*/
      {
        v15[0] = j; /*0x4ad896*/
        v15[1] = v3; /*0x4ad89e*/
        v6 = *((_DWORD *)CellCoord::To_CellObj(v4, v15) + 15); /*0x4ad8a8*/
        if ( v6 && *(_DWORD *)(v6 + 36) ) /*0x4ad8af*/
        {
          wsprintfA(v17, g_Str_Trace__d, j + i); /*0x4ad8c7*/
          INIClass::SetString(a2, (unsigned __int8 *)g_INI_Key_CellTags, v17, (char *)(*(_DWORD *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x4ad92b*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v7; /*0x4ad932*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 112))(DSurface_Alternate) * v8; /*0x4ad940*/
  v10 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x4ad94d*/
  v18[1] = 0; /*0x4ad956*/
  v18[2] = 0; /*0x4ad95a*/
  v18[0] = (int)&vt_Pipe; /*0x4ad95e*/
  Buffer::Init(v19, v10, v9); /*0x4ad966*/
  v19[3] = 0; /*0x4ad96f*/
  v18[0] = (int)&vt_BufferPipe; /*0x4ad979*/
  v11 = MapClass::DecompressCellData(v18); /*0x4ad990*/
  INIClass::ClearSection((int)a2, (int)DataGlobal_820024, 0); /*0x4ad992*/
  INIClass::ClearSection((int)a2, (int)DataGlobal_820018, 0); /*0x4ad9a0*/
  INIClass::ClearSection((int)a2, (int)DataGlobal_82000C, 0); /*0x4ad9af*/
  INIClass::ClearSection((int)a2, (int)DataGlobal_820000, 0); /*0x4ad9be*/
  INIClass::ClearSection((int)a2, (int)DataGlobal_81FFF4, 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
    v12 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x4ad9e2*/
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)DataGlobal_81FFF4, v12, v11); /*0x4ad9ee*/
    (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x4ad9fb*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x4ada06*/
  Vector::Clear((int)v19); /*0x4ada0d*/
  return Pipe::Dtor(v18); /*0x4ada1b*/
}
}

// 0x4AEB30
bool MapClass::SetScrollMode(MouseClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall MapClass::SetScrollMode(int this, MouseClass *aP1)
{
  this->MapClass_field_0x11A0 = aP1; /*0x4aeb36*/
  this->q119C = aP1 != 0; /*0x4aeb3f*/
  return aP1 != 0; /*0x4aeb45*/
}
}

// 0x506D50
int MapClass::CalcVisibleCellRange(int a1, int a2, VectorClass * aP2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall MapClass::CalcVisibleCellRange(int a1, int a2, VectorClass *aP2, int *a3)
{
  int v4; // kr04_4
  int v5; // esi
  int v6; // ebx
  VectorClass *v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // esi
  double v13; // st7
  int *v14; // esi
  VectorClass *v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int i; // [esp+1Ch] [ebp-24h]
  BuildingTypeClass *v18; // [esp+20h] [ebp-20h]
  double v19; // [esp+28h] [ebp-18h]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  if ( a2 <= 0 ) /*0x506d61*/
    a2 = 1; /*0x506d63*/
  v4 = *(_DWORD *)(a1 + 156); /*0x506d8c*/
  v5 = (__int16)(v4 / 256); /*0x506d94*/
  if ( v5 - 6 <= *a3 ) /*0x506dad*/
  {
    v16 = *a3; /*0x506db7*/
    v6 = *a3; /*0x506dbb*/
  }
  else
  {
    v6 = v5 - 6; /*0x506daf*/
    v16 = v5 - 6; /*0x506db1*/
  }
  v7 = (VectorClass *)(v5 + 6); /*0x506dc0*/
  v15 = (VectorClass *)(a3[2] + *a3); /*0x506dc7*/
  if ( (int)v15 >= (int)v7 ) /*0x506dcb*/
    v15 = v7; /*0x506dcd*/
  v8 = (__int16)(*(_DWORD *)(a1 + 160) / 256); /*0x506dd1*/
  v9 = a3[1]; /*0x506dd4*/
  v21 = v8; /*0x506dd7*/
  v10 = v8 - 6; /*0x506de0*/
  if ( v8 - 6 <= v9 ) /*0x506de2*/
    v10 = a3[1]; /*0x506de4*/
  v18 = (BuildingTypeClass *)(a3[3] + v9); /*0x506df0*/
  if ( (int)v18 >= v8 + 6 ) /*0x506df4*/
    v18 = (BuildingTypeClass *)(v8 + 6); /*0x506df6*/
  result = (int)v18; /*0x506dfa*/
  for ( i = v10; v10 < (int)v18; i = v10 ) /*0x506e04*/
  {
    if ( v6 < (int)v15 ) /*0x506e0e*/
    {
      v12 = (v10 - v8) * (v10 - v8); /*0x506e16*/
      v20 = v12; /*0x506e19*/
      do /*0x506eba*/
      {
        v19 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(v12 /*0x506e3f*/
                                                                       + (v6 - (__int16)(v4 / 256))
                                                                       * (v6 - (__int16)(v4 / 256)))));
        if ( v19 < 6.0 ) /*0x506e51*/
        {
          v13 = v19; /*0x506e53*/
          if ( v19 < 1.0 ) /*0x506e75*/
            v13 = 1.0; /*0x506e79*/
          v14 = (int *)&aP2->vtable0[4 * (v6 - *a3) + 4 * (i - a3[1]) * a3[2]]; /*0x506ea1*/
          *v14 = Math::RoundToInt((double)a2 / ((v13 - 1.0) * 0.1 + 1.0) + (double)*v14); /*0x506ead*/
          v12 = v20; /*0x506eaf*/
        }
        ++v6; /*0x506eb7*/
      }
      while ( v6 < (int)v15 ); /*0x506eba*/
      v10 = i; /*0x506ec0*/
      v8 = v21; /*0x506ec4*/
      v6 = v16; /*0x506ec8*/
    }
    result = (int)v18; /*0x506ecc*/
    ++v10; /*0x506ed0*/
  }
  return result; /*0x506edd*/
}
}

// 0x547020
int MapClass::LoadFileData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass_LoadFileData(int this)
{
  int Size; // ebx
  void *v3; // eax
  unsigned __int8 *v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  unsigned int *v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v12[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v13[12]; // [esp+64h] [ebp-14h] BYREF
  int v14; // [esp+70h] [ebp-8h]

  CCFileClass::Construct(v12, (char *)(this + 757)); /*0x547033*/
  Size = CCFileClass::GetSize(v12); /*0x547041*/
  if ( this->q0A4 ) /*0x547043*/
    __3_YAXPAX_Z(*(void **)(this + 164)); /*0x54704e*/
  v3 = __2_YAPAXI_Z(Size); /*0x547057*/
  this->q0A4 = v3; /*0x547063*/
  CCFileClass::Read(v12, v3, Size); /*0x54706b*/
  v4 = *(unsigned __int8 **)(this + 164); /*0x547070*/
  this->q0A8 = 1; /*0x547078*/
  v5 = 0; /*0x54707f*/
  this->q2E4 = *v4; /*0x547083*/
  v6 = v4[4]; /*0x547091*/
  v7 = v6 * this->q2E4; /*0x547094*/
  this->q2E8 = v6; /*0x547099*/
  if ( v7 > 0 ) /*0x54709f*/
  {
    v8 = (unsigned int *)(v4 + 16); /*0x5470a1*/
    do /*0x5470cb*/
    {
      v9 = *v8; /*0x5470a4*/
      if ( *v8 ) /*0x5470a4*/
      {
        v10 = this->q0A4; /*0x5470aa*/
        if ( v9 < v10 ) /*0x5470b2*/
          *v8 = v10 + v9; /*0x5470b6*/
      }
      ++v5; /*0x5470be*/
      ++v8; /*0x5470c6*/
    }
    while ( v5 < this->q2E8 * this->q2E4 ); /*0x5470cb*/
  }
  TerrainClass::InitTheatre(this); /*0x5470cf*/
  v12[0] = (int)&vt_CCFileClass; /*0x5470d8*/
  v14 = 0; /*0x5470e0*/
  Vector::Clear((int)v13); /*0x5470e8*/
  v12[0] = (int)&off_7E1668; /*0x5470f1*/
  BufferIOFileClass::Dtor(v12); /*0x5470f9*/
  return Size; /*0x5470fe*/
}
}

// 0x554A80
char MapClass::ScrollOnce(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::ScrollOnce(int this, AbstractClass *aP1)
{
  char result; // al

  result = (unsigned char)this->MapClass_field_0x48; /*0x554a80*/
  if ( result ) /*0x554a85*/
  {
    this->q048 = 0; /*0x554a8b*/
    return TacticalClass::ScrollView((_DWORD *)this, aP1); /*0x554a90*/
  }
  return result; /*0x554a95*/
}
}

// 0x5652C0
void MapClass::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MapClass_Destructor(char *this)
{
  _DWORD *v2; // edi
  _DWORD **v3; // ebp
  _DWORD *v4; // edi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  char *v8; // edi
  int v9; // ebp
  void *v10; // ecx
  void *v11; // eax
  int v12; // [esp+8h] [ebp-4h]

  *(_DWORD *)this = &vt_MapClass; /*0x5652c5*/
  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->q01A ) /*0x5652df*/
  {
    __3_YAXPAX_Z(*((void **)this + 26)); /*0x5652e9*/
    this->q01A = 0; /*0x5652f1*/
  }
  v2 = (_DWORD *)this->MapClass_field_0x14; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3); /*0x565307*/
    __3_YAXPAX_Z(v2); /*0x56530a*/
    this->MapClass_field_0x14 = 0; /*0x565312*/
  }
  if ( this->q01C ) /*0x565315*/
  {
    __3_YAXPAX_Z(*((void **)this + 28)); /*0x56531d*/
    this->q01C = 0; /*0x565325*/
  }
  v3 = (_DWORD **)(this + 128); /*0x565328*/
  v12 = 3; /*0x56532e*/
  do /*0x565361*/
  {
    v4 = *v3; /*0x565336*/
    if ( *v3 ) /*0x565336*/
    {
      if ( *v4 ) /*0x56533d*/
        (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x565347*/
      __3_YAXPAX_Z(v4); /*0x56534a*/
      *v3 = 0; /*0x565352*/
    }
    ++v3; /*0x565359*/
    --v12; /*0x56535d*/
  }
  while ( v12 ); /*0x565361*/
  v5 = (void *)this->MapClass_field_0x1160; /*0x565363*/
  this->MapClass_field_0x115C = &vt_VectorClass_Cell; /*0x565370*/
  if ( v5 && this->q1169 ) /*0x565378*/
  {
    __3_YAXPAX_Z(v5); /*0x565381*/
    this->MapClass_field_0x1160 = 0; /*0x565389*/
  }
  this->q1169 = 0; /*0x56538f*/
  this->MapClass_field_0x1164 = 0; /*0x565395*/
  v6 = (void *)this->MapClass_field_0x13C; /*0x56539b*/
  this->q04E = &vt_VectorClass_CellClass; /*0x5653a1*/
  if ( v6 && this->q145 ) /*0x5653af*/
  {
    __3_YAXPAX_Z(v6); /*0x5653b8*/
    this->MapClass_field_0x13C = 0; /*0x5653c0*/
  }
  this->q145 = 0; /*0x5653c6*/
  this->MapClass_field_0x140 = 0; /*0x5653cc*/
  v7 = (void *)this->q0D8; /*0x5653d2*/
  this->MapClass_field_0xD4 = &vt_VectorClass_Cell; /*0x5653d8*/
  if ( v7 && this->q0E1 ) /*0x5653e2*/
  {
    __3_YAXPAX_Z(v7); /*0x5653eb*/
    this->q0D8 = 0; /*0x5653f3*/
  }
  this->q0E1 = 0; /*0x5653f9*/
  this->MapClass_field_0xDC = 0; /*0x5653ff*/
  v8 = this + 212; /*0x565405*/
  v9 = 3; /*0x56540b*/
  do /*0x56543a*/
  {
    v10 = (void *)*((_DWORD *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    *(_DWORD *)v8 = &vt_VectorClass_SubzoneTrackingStruct; /*0x565418*/
    if ( v10 && v8[13] ) /*0x565420*/
    {
      SubzoneConnectionVector::Destruct(v10, 3); /*0x56542b*/
      *((_DWORD *)v8 + 1) = 0; /*0x565430*/
    }
    --v9; /*0x565433*/
    v8[13] = 0; /*0x565434*/
    *((_DWORD *)v8 + 2) = 0; /*0x565437*/
  }
  while ( v9 ); /*0x56543a*/
  v11 = (void *)this->q054; /*0x56543c*/
  this->MapClass_field_0x50 = &vt_VectorClass_ZoneConnectionClass; /*0x565442*/
  if ( v11 && this->q05D ) /*0x56544c*/
  {
    __3_YAXPAX_Z(v11); /*0x565452*/
    this->q054 = 0; /*0x56545a*/
  }
  this->q05D = 0; /*0x56545d*/
  this->MapClass_field_0x58 = 0; /*0x565460*/
  *(_DWORD *)this = &off_7EA6FC; /*0x565463*/
}
}

// 0x565800
int MapClass::Destru_vt05()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass::Destru_vt05(int *this)
{
  int *v1; // ebp
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // ebp
  _DWORD *v18; // esi
  int v19; // ebx
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  _DWORD *v26; // [esp+14h] [ebp-Ch]
  _DWORD *v27; // [esp+18h] [ebp-8h]
  int v28; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x565806*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Add(); /*0x56580d*/
  v1[83] = 512; /*0x565819*/
  v1[84] = 512; /*0x56581f*/
  v2 = *v1; /*0x565825*/
  v1[85] = 0x40000; /*0x565828*/
  (*(void (__thiscall **)(int *))(v2 + 88))(v1); /*0x565832*/
  if ( v1[5] ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = __2_YAPAXI_Z(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = Cell::DecodeFlags; /*0x56585e*/
    v3[2] = 256; /*0x565865*/
    v3[3] = 20; /*0x56586c*/
    v5 = __2_YAPAXI_Z(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = 256; /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        *v7 = &vt_DynamicVectorClass_HashObject_unsigned_int_unsigned_int; /*0x565896*/
        v7[5] = 10; /*0x56589c*/
        v7[4] = 0; /*0x5658a3*/
        v7 += 6; /*0x5658aa*/
        --v8; /*0x5658ad*/
      }
      while ( v8 ); /*0x5658ae*/
      v9 = v6; /*0x5658b0*/
      v1 = this; /*0x5658b2*/
    }
    else
    {
      v9 = 0; /*0x5658bd*/
    }
    v10 = v4[2]; /*0x5658bf*/
    *v4 = v9; /*0x5658c2*/
    v11 = 0; /*0x5658c4*/
    if ( v10 > 0 ) /*0x5658c8*/
    {
      v12 = 0; /*0x5658ca*/
      do /*0x5658db*/
      {
        ++v11; /*0x5658ce*/
        *(_DWORD *)(v12 + *v4 + 20) = 20; /*0x5658cf*/
        v12 += 24; /*0x5658d6*/
      }
      while ( v11 < v4[2] ); /*0x5658db*/
      v1[5] = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  v1[5] = (int)v4; /*0x5658e9*/
LABEL_14:
  v13 = v1 + 35; /*0x5658f3*/
  v26 = v1 + 32; /*0x5658ff*/
  v27 = v1 + 35; /*0x565903*/
  v28 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (__thiscall **)(_DWORD *))(*v13 + 12))(v13); /*0x565913*/
    v14 = __2_YAPAXI_Z(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = Cell::DecodeFlags; /*0x56592f*/
      v14[2] = 256; /*0x565936*/
      v14[3] = 20; /*0x56593d*/
      v16 = __2_YAPAXI_Z(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = 256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          *v18 = &vt_DynamicVectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x565967*/
          v18[5] = 10; /*0x56596d*/
          v18[4] = 0; /*0x565974*/
          v18 += 6; /*0x56597b*/
          --v19; /*0x56597e*/
        }
        while ( v19 ); /*0x56597f*/
        v13 = v27; /*0x565981*/
        v20 = v17; /*0x565985*/
        v1 = this; /*0x565987*/
      }
      else
      {
        v20 = 0; /*0x565992*/
      }
      v21 = v15[2]; /*0x565994*/
      *v15 = v20; /*0x565997*/
      v22 = 0; /*0x565999*/
      if ( v21 > 0 ) /*0x56599d*/
      {
        v23 = 0; /*0x56599f*/
        do /*0x5659b0*/
        {
          ++v22; /*0x5659a3*/
          *(_DWORD *)(*v15 + v23 + 20) = 20; /*0x5659a4*/
          v23 += 24; /*0x5659ab*/
        }
        while ( v22 < v15[2] ); /*0x5659b0*/
      }
    }
    else
    {
      v15 = 0; /*0x5659b4*/
    }
    v13 += 6; /*0x5659ba*/
    v27 = v13; /*0x5659bd*/
    *v26++ = v15; /*0x5659c1*/
    --v28; /*0x5659cf*/
  }
  while ( v28 ); /*0x5659d3*/
  memset(v1 + 6, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}
}

// 0x5659F0
void MapClass::Destru_vt07()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MapClass::Destru_vt07(int this)
{
  int *v2; // edx
  int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int v6; // eax

  Debug::Log(); /*0x5659fa*/
  Event::Dispatch(); /*0x565a02*/
  MapClass::isCellShrouded(g_ZBufferDescriptor, 0xFFFFu); /*0x565a12*/
  MapClass::isLocationShrouded(g_VisibleSurfaceDescriptor, 0x7Fu); /*0x565a1f*/
  Event::Dispatch(); /*0x565a24*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Remove((_DWORD *)this); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  v2 = (int *)(this + 344); /*0x565a35*/
  v3 = 256; /*0x565a3b*/
  do /*0x565a76*/
  {
    v4 = *v2; /*0x565a40*/
    v5 = *v2 == -1; /*0x565a47*/
    v2[3] = g_MapSeedState; /*0x565a4a*/
    if ( !v5 ) /*0x565a4d*/
    {
      v6 = v2[2]; /*0x565a4f*/
      if ( v4 != -1 ) /*0x565a55*/
      {
        if ( (int)g_CurrentFrame - v4 >= v6 ) /*0x565a61*/
          v6 = 0; /*0x565a67*/
        else
          v6 -= (int)g_CurrentFrame - v4; /*0x565a63*/
      }
      v2[2] = v6; /*0x565a69*/
      *v2 = -1; /*0x565a6c*/
    }
    v2 += 4; /*0x565a72*/
    --v3; /*0x565a75*/
  }
  while ( v3 ); /*0x565a76*/
  this->Crates = 13; /*0x565a7d*/
  this->q1158 = 0; /*0x565a87*/
  Debug::Log(); /*0x565a8e*/
}
}

// 0x565AA0
int MapClass::InitCellVector()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass_InitCellVector(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 78; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    v2[1] = 0; /*0x565aad*/
    v2[2] = 0; /*0x565ab4*/
    *((_BYTE *)v2 + 12) = 1; /*0x565abb*/
    *((_BYTE *)v2 + 13) = 0; /*0x565abf*/
    *v2 = &vt_VectorClass_CellClass; /*0x565ac3*/
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v2 + 8))(v2, this->q154, 0); /*0x565ad4*/
  for ( result = 0; result < this->q154; *(_DWORD *)(this->q13C + 4 * result - 4) = 0 ) /*0x565ae1*/
    ++result; /*0x565ae9*/
  return result; /*0x565afc*/
}
}

// 0x565BC0
unsigned int * MapClass::InitAllCells()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MapClass_InitAllCells(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  _DWORD *result; // eax
  _DWORD *v6; // ecx

  v2 = 0; /*0x565bc6*/
  v3 = 0; /*0x565bc8*/
  this->q134 = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < this->q140 ) /*0x565bdb*/
      {
        result = (_DWORD *)this->q13C; /*0x565bdd*/
        v6 = (_DWORD *)result[v3]; /*0x565be3*/
        if ( v6 ) /*0x565be8*/
          result = CellClass::Construct(v6); /*0x565bea*/
      }
      ++v3; /*0x565bef*/
      ++v2; /*0x565bf2*/
      --v4; /*0x565bf3*/
    }
    while ( v4 ); /*0x565bf4*/
  }
  while ( v2 < 0x40000 ); /*0x565bfc*/
  return result; /*0x565bfe*/
}
}

// 0x5673A0
int MapClass::RevealArea0(IUnknown * aP1, MouseClass * aP2, HouseClass * aP3, MouseClass * aP4, HouseClass * aP5, char a7, char a8, char a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass::RevealArea0(
        int *this,
        IUnknown *aP1,
        MouseClass *aP2,
        HouseClass *aP3,
        MouseClass *aP4,
        HouseClass *aP5,
        char a7,
        char a8,
        char a9)
{
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int result; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // esi
  int v17; // eax
  IUnknown *v18; // edi
  int v19; // eax
  int v20; // esi
  MouseClass *v21; // ecx
  __int16 v22; // ax
  __int16 v23; // cx
  int v24; // edx
  int v25; // esi
  double v26; // st7
  unsigned int v27; // ecx
  int *v28; // ecx
  int *v29; // edi
  unsigned int v30; // eax
  _DWORD *v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  MouseClass *v38; // [esp+18h] [ebp-44h]
  IUnknown *v39; // [esp+1Ch] [ebp-40h]
  int i; // [esp+20h] [ebp-3Ch]
  int v41; // [esp+2Ch] [ebp-30h]
  __int16 v42; // [esp+30h] [ebp-2Ch]
  __int16 v43; // [esp+32h] [ebp-2Ah]
  __int16 v44[4]; // [esp+38h] [ebp-24h] BYREF
  int v45; // [esp+40h] [ebp-1Ch]
  __int16 v46; // [esp+48h] [ebp-14h]
  __int16 v47; // [esp+4Ah] [ebp-12h]
  int v48; // [esp+50h] [ebp-Ch] BYREF
  int v49; // [esp+54h] [ebp-8h]
  IUnknown *aP0; // [esp+58h] [ebp-4h]
  IUnknown *aP1a; // [esp+60h] [ebp+4h]
  IUnknown *aP1b; // [esp+60h] [ebp+4h]
  char aP4a; // [esp+6Ch] [ebp+10h]

  v41 = aP1->field_8 / g_MapRenderState; /*0x5673b7*/
  v48 = aP1->field_0; /*0x5673bf*/
  v49 = aP1->field_4; /*0x5673c6*/
  aP0 = (IUnknown *)aP1->field_8; /*0x5673cd*/
  v10 = ZCoordToScreenY(aP0); /*0x5673d1*/
  v48 += (((unsigned int)(((unsigned __int64)(2004318071LL * v10) >> 32) - v10) >> 31) /*0x5673f8*/
        + ((int)(((unsigned __int64)(2004318071LL * v10) >> 32) - v10) >> 4)) << 8;
  v11 = ZCoordToScreenY(aP0); /*0x5673fc*/
  v49 += (((unsigned int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 31) /*0x56742a*/
        + ((int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
  v44[0] = aP1->field_0 / 256; /*0x56744d*/
  v12 = v48 / 256; /*0x56745e*/
  v42 = v48 / 256; /*0x567467*/
  v43 = v49 / 256; /*0x56746c*/
  v44[1] = aP1->field_4 / 256; /*0x567475*/
  v46 = v42 - v44[0] - 2; /*0x56749b*/
  v47 = v43 - v44[1] - 2; /*0x5674a7*/
  result = v43; /*0x5674af*/
  v14 = this->q03D; /*0x5674b2*/
  v15 = v43 + v42; /*0x5674b8*/
  if ( v15 <= v14 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v42 - v43 >= v14 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v43 - v42; /*0x5674cf*/
  if ( result >= v14 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = this->q0F8; /*0x5674d9*/
  if ( v15 > v14 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = (int)aP2; /*0x5674ea*/
  if ( !aP2 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( (int)aP2 >= 11 ) /*0x5674f9*/
    aP2 = (MouseClass *)10; /*0x567500*/
  v38 = (MouseClass *)dword_ABD490; /*0x567512*/
  aP1a = (IUnknown *)&dword_ABCF60; /*0x56751a*/
  v16 = dword_7ED3D0[(_DWORD)aP2]; /*0x567528*/
  if ( !*(_BYTE *)(*(_DWORD *)&stru_87C374[44652] + 6126) && (_BYTE)aP4 && (int)aP2 > 2 ) /*0x56753e*/
  {
    v17 = dword_7ED3C4[(_DWORD)aP2]; /*0x567540*/
    v16 -= v17; /*0x567547*/
    v38 = (MouseClass *)(4 * v17 + 11261072); /*0x567557*/
    aP1a = (IUnknown *)(4 * v17 + 11259744); /*0x56755b*/
  }
  v18 = (IUnknown *)aP3; /*0x567563*/
  aP1b = (IUnknown *)((char *)aP1a - 4); /*0x56756c*/
  if ( !aP3 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = HouseClass_Player.field_0; /*0x567572*/
  if ( !HouseClass_Player.field_0 ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( aP3 != (HouseClass *)HouseClass_Player.field_0 ) /*0x56757d*/
  {
    if ( ((1 << *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184)) & aP3->radarVisibleTo[0]) != 0 ) /*0x567595*/
    {
      v18 = (IUnknown *)HouseClass_Player.field_0; /*0x567597*/
      aP3 = (HouseClass *)HouseClass_Player.field_0; /*0x567599*/
    }
    if ( v18 != (IUnknown *)HouseClass_Player.field_0 ) /*0x56759f*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v18, (IUnknown *)HouseClass_Player.field_0) /*0x5675b2*/
        && *(_BYTE *)(*(_DWORD *)&stru_87C374[44652] + 6119) )
      {
        result = HouseClass_Player.field_0; /*0x5675bc*/
        v18 = (IUnknown *)HouseClass_Player.field_0; /*0x5675c1*/
        aP3 = (HouseClass *)HouseClass_Player.field_0; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
LABEL_21:
      result = HouseClass_Player.field_0; /*0x5675c9*/
LABEL_22:
      if ( v18 != (IUnknown *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] != 3 && *(_DWORD *)&HouseClass_Player[29932] != 4 /*0x5675f1*/
    || !*(_DWORD *)&HouseClass_Player[29936]
    || (aP4a = 1,
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 4))(*(_DWORD *)&HouseClass_Player[29936])) )
  {
    aP4a = 0; /*0x5675fd*/
  }
  v19 = v16; /*0x567602*/
  v20 = v16 - 1; /*0x567604*/
  if ( v19 ) /*0x567607*/
  {
    for ( i = v20 + 1; i; --i ) /*0x56760e*/
    {
      v21 = v38; /*0x56761a*/
      v38 = (MouseClass *)((char *)v38 + 4); /*0x56761f*/
      v22 = LOWORD(v21->field_0) + v12; /*0x567626*/
      v23 = v43 + HIWORD(v21->field_0); /*0x56762d*/
      LOWORD(v45) = v22; /*0x567635*/
      aP1b = (IUnknown *)((char *)aP1b + 4); /*0x56763a*/
      v24 = this->q03D; /*0x56763e*/
      HIWORD(v45) = v23; /*0x567644*/
      *(_DWORD *)v44 = v45; /*0x567653*/
      v25 = v23 + v22; /*0x567657*/
      if ( v25 > v24 ) /*0x56765c*/
      {
        if ( v22 - v23 >= v24 || v23 - v22 >= v24 ) /*0x567672*/
        {
          LOWORD(v12) = v42; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        LOWORD(v12) = v42; /*0x56767e*/
        if ( v25 > v24 + 2 * this->q0F8 ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v22 - v42) > (int)aP2 ) /*0x56769e*/
          continue; /*0x56769e*/
        v26 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x5676de*/
                                            (double)(__int16)(v45 - v42) * (double)(__int16)(v45 - v42)
                                          + (double)(__int16)(HIWORD(v45) - v43) * (double)(__int16)(HIWORD(v45) - v43)));
        if ( (__int16)Math::RoundToInt(v26) > (int)aP2 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v44[0] + (v44[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = *(int **)(this->q04F + 4 * v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_Map_GlobalCellIndex = *(IUnknown **)v44; /*0x567724*/
          v29 = g_CellClassArray; /*0x567729*/
        }
        if ( a8 && *(_BYTE *)(*(_DWORD *)&stru_87C374[44652] + 6126) ) /*0x56773c*/
        {
          LOWORD(v39) = v44[0] - v46 + LOWORD(aP1b->field_0); /*0x567765*/
          HIWORD(v39) = v44[1] - v47 + HIWORD(aP1b->field_0); /*0x56776a*/
          v30 = (__int16)v39 + (SHIWORD(v39) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(_DWORD **)(*(_DWORD *)&stru_87C374[13744] + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = g_CellClassArray; /*0x567794*/
            g_Map_GlobalCellIndex = v39; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v41 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((__int16 *)v29 + 18); /*0x5677bf*/
        v33 = *((__int16 *)v29 + 19); /*0x5677c3*/
        v29[80] &= ~0x40u; /*0x5677cc*/
        if ( !aP4a ) /*0x5677d2*/
        {
LABEL_54:
          if ( a7 ) /*0x567827*/
          {
            v35 = v29[80]; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal(&stru_87C374[13428], (MouseClass *)v44, (IUnknown *)aP3); /*0x56784f*/
          }
          else
          {
            v36 = v29[75]; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !(_BYTE)aP5 ) /*0x567878*/
              {
                if ( a9 ) /*0x567880*/
                  Conditions::CheckResult3((MouseClass *)v44, (IUnknown *)aP3, 0); /*0x567893*/
                else
                  CellClass::Unshroud(v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == this->q03D + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == this->q03D + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = this->q0F8; /*0x567802*/
        if ( v32 != v34 + 13 || v33 != this->q03D + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(this, (IUnknown *)&v48, 0, (MouseClass *)((char *)&aP2->field_0 + 3), 0); /*0x5678cf*/
}
}

// 0x5683C0
void MapClass::FillRevealBuffer(MouseClass * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MapClass::FillRevealBuffer(_DWORD *this, MouseClass *aP1, IUnknown *aP2)
{
  MouseClass *v3; // ebx
  _DWORD *v4; // eax
  _WORD *v5; // ebp
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  _WORD *v12; // ebx
  __int16 v13; // cx
  int v14; // esi
  __int16 v15; // ax
  int v16; // edi
  __int16 v17; // bx
  __int16 v18; // bp
  int v19; // edx
  int v20; // esi
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  int i; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // edx
  _DWORD *eax59; // eax
  int edx61; // edx
  MouseClass *v32; // [esp+10h] [ebp-8A0h]
  MouseClass *v33; // [esp+10h] [ebp-8A0h]
  MouseClass *v34; // [esp+10h] [ebp-8A0h]
  ObjectClass *v35; // [esp+14h] [ebp-89Ch]
  ObjectClass *v36; // [esp+14h] [ebp-89Ch]
  int v40; // [esp+1Ch] [ebp-894h]
  ObjectClass *v39; // [esp+20h] [ebp-890h]
  IUnknown *v42; // [esp+24h] [ebp-88Ch]
  int v43; // [esp+28h] [ebp-888h]
  _WORD *v44; // [esp+2Ch] [ebp-884h]
  _BYTE v45[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v46[2048]; // [esp+B0h] [ebp-800h] BYREF

  v3 = (MouseClass *)this; /*0x5683d1*/
  if ( !aP2 ) /*0x5683d9*/
    return; /*0x5683d9*/
  v40 = this->q140; /*0x5683e9*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 136))(aP2) + 565) /*0x56840b*/
    || (*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 120))(aP2) != 2 )
  {
    return; /*0x56840b*/
  }
  v4 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD))(aP2->field_0 + 264))(aP2, 0); /*0x56841c*/
  sub_48DEE0(v4, 32, (int)v45); /*0x568429*/
  v5 = v45; /*0x56842e*/
  while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x568440*/
  {
    LOWORD(v35) = LOWORD(aP1->field_0) + *v5; /*0x56845b*/
    HIWORD(v35) = HIWORD(aP1->field_0) + v5[1]; /*0x568463*/
    v6 = (SHIWORD(v35) << 9) + (__int16)v35; /*0x56846e*/
    if ( v6 >= 0 && v6 < v40 && (v7 = *(_DWORD *)&v3->__pad_11F[29], *(_DWORD *)(v7 + 4 * v6)) ) /*0x568489*/
    {
      if ( v6 >= 0x40000 ) /*0x56849e*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v35; /*0x5684a6*/
        v8 = g_CellClassArray; /*0x5684ac*/
      }
      else
      {
        v8 = *(_DWORD **)(v7 + 4 * v6); /*0x5684a0*/
      }
      CellClass::AddContent((int)v8, aP2, aP2->__pad_8C[0]); /*0x5684bb*/
      if ( v6 >= 0x40000 || (v9 = *(_DWORD *)(this->q13C + 4 * v6)) == 0 ) /*0x5684db*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v35; /*0x5684f9*/
        House::AnnounceUpgrade((int)g_CellClassArray, (IUnknown *)0xFFFFFFFF); /*0x5684ff*/
        v3 = (MouseClass *)this; /*0x568504*/
        goto LABEL_17; /*0x568504*/
      }
      House::AnnounceUpgrade(v9, (IUnknown *)0xFFFFFFFF); /*0x5684e1*/
      v3 = (MouseClass *)this; /*0x5684e6*/
      v5 += 2; /*0x5684ea*/
    }
    else
    {
LABEL_17:
      v5 += 2; /*0x568508*/
    }
  }
  if ( (*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 44))(aP2) == 6 )
  {
    v42 = (*(int (__thiscall **)(IUnknown *))(aP2->field_0 + 44))(aP2) == 6 ? aP2 : 0;
    v10 = v42->field_520; /*0x568536*/
    if ( *(_BYTE *)(v10 + 5990) )
    {
      v11 = *(_DWORD *)(v10 + 3832) - 1; /*0x568550*/
      v36 = (ObjectClass *)v11; /*0x568553*/
      if ( v11 <= 0 ) /*0x568557*/
      {
        v36 = (ObjectClass *)1; /*0x568559*/
        v11 = 1; /*0x568561*/
      }
      v12 = v45; /*0x568573*/
      memset(v46, 0, sizeof(v46)); /*0x568577*/
      while ( 1 )
      {
        v13 = *v12; /*0x568579*/
        v44 = v12; /*0x56857c*/
        if ( *v12 == 0x7FFF && v12[1] == 0x7FFF ) /*0x56858b*/
          break; /*0x56858b*/
        v14 = v13; /*0x56859b*/
        LOWORD(v39) = LOWORD(aP1->field_0) + v13; /*0x5685a5*/
        v15 = v12[1]; /*0x5685aa*/
        HIWORD(v39) = v15 + HIWORD(aP1->field_0); /*0x5685b1*/
        v32 = (MouseClass *)v39; /*0x5685bc*/
        v16 = v15; /*0x5685c0*/
        if ( v11 > 0 )
        {
          v17 = v15 + HIWORD(aP1->field_0); /*0x5685c9*/
          v43 = v11; /*0x5685d0*/
          v18 = LOWORD(aP1->field_0) + v13; /*0x5685d4*/
          v19 = 16 * v15; /*0x5685d9*/
          do
          {
            if ( v18 >= 0 && v17 >= 0 )
            {
              v20 = v14 + (v14 < 0 ? 0x10 : 0);
              if ( v16 < 0 ) /*0x5685f7*/
              {
                v16 += 16; /*0x5685f9*/
                v19 += 256; /*0x5685fc*/
              }
              if ( !v46[v19 + v20] ) /*0x568605*/
              {
                v46[v19 + v20] = 1; /*0x56861a*/
                v21 = (v17 << 9) + v18; /*0x568623*/
                if ( v21 >= 0 && v21 < v40 ) /*0x56862d*/
                {
                  v22 = this->q13C; /*0x568633*/
                  if ( *(_DWORD *)(v22 + 4 * v21) ) /*0x568639*/
                  {
                    if ( v21 >= 0x40000 || (v23 = *(_DWORD **)(v22 + 4 * v21)) == 0 ) /*0x56864f*/
                    {
                      g_Map_GlobalCellIndex = (IUnknown *)v32; /*0x568655*/
                      v23 = g_CellClassArray; /*0x56865a*/
                    }
                    ++v23[64]; /*0x56865f*/
                  }
                }
              }
              --v18; /*0x568665*/
              --v17; /*0x568667*/
              v14 = v20 - 1; /*0x568669*/
              --v16; /*0x56866a*/
              LOWORD(v32) = v18; /*0x56866b*/
              HIWORD(v32) = v17; /*0x568670*/
              v19 -= 16; /*0x568675*/
            }
            --v43; /*0x56867d*/
          }
          while ( v43 );
          v11 = (int)v36; /*0x568687*/
          v12 = v44; /*0x56868b*/
        }
        v12 += 2; /*0x56868f*/
      }
      for ( i = 0; i < 64; i += 8 ) /*0x568697*/
      {
        v25 = v42->field_520; /*0x5686a2*/
        if ( *(_DWORD *)(i + v25 + 5668) != 0xFFFF || *(_DWORD *)(i + v25 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          LOWORD(v33) = *(_WORD *)(i + v25 + 5668) + aP1->field_0; /*0x5686df*/
          HIWORD(v33) = *(_WORD *)(i + v25 + 5672) + HIWORD(aP1->field_0); /*0x5686e4*/
          v26 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x5686ef*/
          if ( v26 >= 0 && v26 < v40 ) /*0x5686f9*/
          {
            v27 = this->q13C; /*0x5686ff*/
            if ( *(_DWORD *)(v27 + 4 * v26) ) /*0x568705*/
            {
              if ( v26 >= 0x40000 ) /*0x568715*/
              {
                g_Map_GlobalCellIndex = (IUnknown *)v33; /*0x568721*/
                v28 = g_CellClassArray; /*0x568726*/
              }
              else
              {
                v28 = *(_DWORD **)(v27 + 4 * v26); /*0x568717*/
              }
              ++v28[64]; /*0x56872b*/
            }
          }
        }
        v29 = v42->field_520; /*0x568735*/
        if ( *(_DWORD *)(i + v29 + 5732) != 0xFFFF || *(_DWORD *)(i + v29 + 5736) != 0xFFFF ) /*0x56874b*/
        {
          LOWORD(v34) = *(_WORD *)(i + v29 + 5732) + aP1->field_0; /*0x568776*/
          HIWORD(v34) = *(_WORD *)(i + v29 + 5736) + HIWORD(aP1->field_0); /*0x56877b*/
          v30 = (__int16)v34 + (SHIWORD(v34) << 9); /*0x568786*/
          if ( v30 >= 0 && v30 < v40 ) /*0x568790*/
          {
            v31 = this->q13C; /*0x568796*/
            if ( *(_DWORD *)(v31 + 4 * v30) ) /*0x56879c*/
            {
              if ( v30 >= 0x40000 ) /*0x5687ac*/
              {
                g_Map_GlobalCellIndex = (IUnknown *)v34; /*0x5687b8*/
                eax59 = g_CellClassArray; /*0x5687bd*/
              }
              else
              {
                eax59 = *(_DWORD **)(v31 + 4 * v30); /*0x5687ae*/
              }
              edx61 = eax59[64]; /*0x5687c2*/
              if ( edx61 ) /*0x5687ca*/
                eax59[64] = edx61 - 1; /*0x5687cd*/
            }
          }
        }
      }
    }
  }
}
}

// 0x5687F0
void MapClass::ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MapClass::ApplyOverlayReveal(_DWORD *this, MouseClass *aP1, BuildingClass *aP2)
{
  MouseClass *v3; // ebx
  _DWORD *v4; // eax
  _WORD *v5; // ebp
  int esi7; // esi
  int v7; // eax
  _DWORD *v8; // eax
  IUnknown *v6; // esi
  ObjectClass *v10; // edx
  int health; // eax
  int v12; // ebp
  _WORD *v13; // ebx
  __int16 v14; // cx
  int v15; // esi
  __int16 v16; // ax
  int v17; // edi
  __int16 v18; // bx
  __int16 v19; // bp
  int v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  int j; // esi
  int v27; // eax
  __int16 v28; // dx
  int v29; // eax
  int ecx49; // ecx
  _DWORD *eax51; // eax
  int ecx53; // ecx
  MouseClass *v30; // [esp+10h] [ebp-8A0h]
  MouseClass *v31; // [esp+10h] [ebp-8A0h]
  ObjectClass *v32; // [esp+14h] [ebp-89Ch]
  ObjectClass *v33; // [esp+14h] [ebp-89Ch]
  int v38; // [esp+1Ch] [ebp-894h]
  int v39; // [esp+20h] [ebp-890h]
  MouseClass *v40; // [esp+24h] [ebp-88Ch]
  _BYTE *i; // [esp+28h] [ebp-888h]
  int v42; // [esp+2Ch] [ebp-884h]
  _BYTE v43[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v44[2048]; // [esp+B0h] [ebp-800h] BYREF

  v3 = (MouseClass *)this; /*0x568801*/
  if ( !aP2 ) /*0x568809*/
    return; /*0x568809*/
  v38 = this->q140; /*0x568819*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 136))(aP2) + 565) /*0x56883b*/
    || (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 120))(aP2) != 2 )
  {
    return; /*0x56883b*/
  }
  v4 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(*(_DWORD *)aP2->__pad_0 + 264))(aP2, 0); /*0x56884c*/
  sub_48DEE0(v4, 32, (int)v43); /*0x568859*/
  v5 = v43; /*0x56885e*/
  while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x568870*/
  {
    LOWORD(v32) = LOWORD(aP1->field_0) + *v5; /*0x56888b*/
    HIWORD(v32) = HIWORD(aP1->field_0) + v5[1]; /*0x568893*/
    esi7 = (SHIWORD(v32) << 9) + (__int16)v32; /*0x56889e*/
    if ( esi7 >= 0 && esi7 < v38 && (v7 = *(_DWORD *)&v3->__pad_11F[29], *(_DWORD *)(v7 + 4 * esi7)) ) /*0x5688b9*/
    {
      if ( esi7 >= 0x40000 ) /*0x5688ce*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v32; /*0x5688d6*/
        v8 = g_CellClassArray; /*0x5688dc*/
      }
      else
      {
        v8 = *(_DWORD **)(v7 + 4 * esi7); /*0x5688d0*/
      }
      CellClass::RemoveContent((int)v8, aP2, aP2->onBridge); /*0x5688eb*/
      if ( esi7 >= 0x40000 || (v6 = *(IUnknown **)(this->q13C + 4 * esi7)) == 0 ) /*0x56890b*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)v32; /*0x568929*/
        House::AnnounceUpgrade((int)g_CellClassArray, (IUnknown *)0xFFFFFFFF); /*0x56892f*/
        v3 = (MouseClass *)this; /*0x568934*/
        goto LABEL_17; /*0x568934*/
      }
      House::AnnounceUpgrade((int)v6, (IUnknown *)0xFFFFFFFF); /*0x568911*/
      v3 = (MouseClass *)this; /*0x568916*/
      v5 += 2; /*0x56891a*/
    }
    else
    {
LABEL_17:
      v5 += 2; /*0x568938*/
    }
  }
  if ( (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 6 )
  {
    v10 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 6 ? (ObjectClass *)aP2 : 0;
    v33 = v10; /*0x568964*/
    health = v10[7].health; /*0x568968*/
    if ( *(_BYTE *)(health + 5990) )
    {
      v12 = *(_DWORD *)(health + 3832) - 1; /*0x568982*/
      v39 = v12; /*0x568985*/
      if ( v12 <= 0 ) /*0x568989*/
      {
        v39 = 1; /*0x56898b*/
        v12 = 1; /*0x568993*/
      }
      v13 = v43; /*0x5689a5*/
      memset(v44, 0, sizeof(v44)); /*0x5689a9*/
      for ( i = v43; ; i = v13 )
      {
        v14 = *v13; /*0x5689af*/
        if ( *v13 == 0x7FFF && v13[1] == 0x7FFF ) /*0x5689bd*/
          break; /*0x5689bd*/
        v15 = v14; /*0x5689cd*/
        LOWORD(v40) = LOWORD(aP1->field_0) + v14; /*0x5689d7*/
        v16 = v13[1]; /*0x5689dc*/
        HIWORD(v40) = v16 + HIWORD(aP1->field_0); /*0x5689e3*/
        v30 = v40; /*0x5689ee*/
        v17 = v16; /*0x5689f2*/
        if ( v12 > 0 )
        {
          v18 = v16 + HIWORD(aP1->field_0); /*0x5689fb*/
          v42 = v12; /*0x568a02*/
          v19 = LOWORD(aP1->field_0) + v14; /*0x568a06*/
          v20 = 16 * v16; /*0x568a0b*/
          do
          {
            if ( v19 >= 0 && v18 >= 0 )
            {
              v21 = v15 + (v15 < 0 ? 0x10 : 0);
              if ( v17 < 0 ) /*0x568a29*/
              {
                v17 += 16; /*0x568a2b*/
                v20 += 256; /*0x568a2e*/
              }
              if ( !v44[v20 + v21] ) /*0x568a37*/
              {
                v44[v20 + v21] = 1; /*0x568a4c*/
                v22 = (v18 << 9) + v19; /*0x568a55*/
                if ( v22 >= 0 && v22 < v38 ) /*0x568a5f*/
                {
                  v23 = this->q13C; /*0x568a65*/
                  if ( *(_DWORD *)(v23 + 4 * v22) ) /*0x568a6b*/
                  {
                    if ( v22 >= 0x40000 || (v24 = *(_DWORD **)(v23 + 4 * v22)) == 0 ) /*0x568a81*/
                    {
                      g_Map_GlobalCellIndex = (IUnknown *)v30; /*0x568a87*/
                      v24 = g_CellClassArray; /*0x568a8c*/
                    }
                    v25 = v24[64]; /*0x568a91*/
                    if ( v25 ) /*0x568a99*/
                      v24[64] = v25 - 1; /*0x568a9c*/
                  }
                }
              }
              --v19; /*0x568aa2*/
              --v18; /*0x568aa4*/
              v15 = v21 - 1; /*0x568aa6*/
              --v17; /*0x568aa7*/
              LOWORD(v30) = v19; /*0x568aa8*/
              HIWORD(v30) = v18; /*0x568aad*/
              v20 -= 16; /*0x568ab2*/
            }
            --v42; /*0x568aba*/
          }
          while ( v42 );
          v12 = v39; /*0x568ac4*/
          v13 = i; /*0x568ac8*/
        }
        v10 = v33; /*0x568acc*/
        v13 += 2; /*0x568ad0*/
      }
      for ( j = 0; j < 64; j += 8 ) /*0x568adc*/
      {
        v27 = v10[7].health; /*0x568ae3*/
        if ( *(_DWORD *)(j + v27 + 5668) != 0xFFFF || *(_DWORD *)(j + v27 + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v28 = *(_WORD *)(j + v27 + 5672) + HIWORD(aP1->field_0); /*0x568b1c*/
          LOWORD(v31) = *(_WORD *)(j + v27 + 5668) + aP1->field_0; /*0x568b24*/
          v29 = (__int16)v31 + (v28 << 9); /*0x568b32*/
          HIWORD(v31) = v28; /*0x568b34*/
          if ( v29 >= 0 && v29 < v38 ) /*0x568b41*/
          {
            ecx49 = this->q13C; /*0x568b47*/
            if ( *(_DWORD *)(ecx49 + 4 * v29) ) /*0x568b4d*/
            {
              if ( v29 >= 0x40000 ) /*0x568b5d*/
              {
                g_Map_GlobalCellIndex = (IUnknown *)v31; /*0x568b69*/
                eax51 = g_CellClassArray; /*0x568b6e*/
              }
              else
              {
                eax51 = *(_DWORD **)(ecx49 + 4 * v29); /*0x568b5f*/
              }
              ecx53 = eax51[64]; /*0x568b73*/
              if ( ecx53 ) /*0x568b7b*/
                eax51[64] = ecx53 - 1; /*0x568b7e*/
            }
          }
          v10 = v33; /*0x568b84*/
        }
      }
    }
  }
}
}

// 0x568BB0
int MapClass::PostProcessReveal(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass_PostProcessReveal(_DWORD *this, char a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  _BYTE *v5; // ecx
  int v6; // eax
  int i; // eax
  int v8; // eax
  int j; // esi
  int v10; // eax
  int k; // edx
  unsigned int v12; // eax
  _DWORD *v13; // eax
  int m; // edx
  unsigned int v15; // eax
  _DWORD *v16; // eax
  int NthOfType; // eax
  int v18; // eax
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x568bba*/
  v20 = 0; /*0x568bc1*/
  if ( g_AnimClassCount > 0 ) /*0x568bce*/
  {
    v4 = g_AnimClassPool; /*0x568bd0*/
    do /*0x568bfb*/
    {
      v5 = (_BYTE *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = g_AnimClassPool; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < g_AnimClassCount ); /*0x568bfb*/
  }
  v6 = this->q0F4; /*0x568bfd*/
  this->q10C = 1; /*0x568c03*/
  this->CellIterator_NextY = v6; /*0x568c09*/
  this->CellIterator_CurrentY = v6 - 1; /*0x568c12*/
  this->CellIterator_NextCell = (v6 << 11) + this->q13C + 4; /*0x568c27*/
  for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) ) /*0x568c34*/
    *(_DWORD *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  v8 = this->q0F4; /*0x568c54*/
  this->q10C = 1; /*0x568c5a*/
  this->CellIterator_NextY = v8; /*0x568c60*/
  this->CellIterator_CurrentY = v8 - 1; /*0x568c69*/
  this->CellIterator_NextCell = (v8 << 11) + this->q13C + 4; /*0x568c7e*/
  for ( j = LayerClass::CellIteratorNext(this); j; j = LayerClass::CellIteratorNext(this) ) /*0x568c8d*/
  {
    *(_DWORD *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView(j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
    v10 = *(_DWORD *)(j + 60); /*0x568cc4*/
    *(_DWORD *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( (unsigned __int8)TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
        for ( k = 0; k < g_AircraftTrackerPool; v13[80] |= 0x100000u ) /*0x568cef*/
        {
          HIWORD(v21) = *(_WORD *)(j + 38); /*0x568d01*/
          LOWORD(v21) = k + this->MapCoordBounds; /*0x568d09*/
          v12 = (__int16)v21 + (SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(_DWORD **)(g_Shroud_CellArray + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_Map_GlobalCellIndex = v21; /*0x568d30*/
            v13 = &g_CellClassArray; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( (unsigned __int8)TagClass::HasCrossesVerticalLineEvent(*(_DWORD *)(j + 60)) ) /*0x568d5b*/
      {
        for ( m = 0; m < g_AircraftTrackerState; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
          LOWORD(v22) = *(_WORD *)(j + 36); /*0x568d7b*/
          HIWORD(v22) = m + this->q128; /*0x568d80*/
          v15 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x568da4*/
          {
            g_Map_GlobalCellIndex = v22; /*0x568daa*/
            v16 = &g_CellClassArray; /*0x568daf*/
          }
          ++m; /*0x568dbc*/
        }
      }
    }
    if ( a2 ) /*0x568dd2*/
      NthOfType = ObjectClass::UpdateTiberiumGrowth(0); /*0x568dd8*/
    else
      NthOfType = Building::GetNthOfType(j); /*0x568de1*/
    v20 += NthOfType; /*0x568dee*/
    House::AnnounceUpgrade(j, -1); /*0x568df4*/
    v18 = *(_DWORD *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/
}
}

// 0x56B3F0
int MapClass::DecompressCellData(MouseClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass::DecompressCellData(int *this, MouseClass *aP1)
{
  MouseClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  TagClass *v6; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  TagClass *v13; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  AbstractClass v17; // [esp+10h] [ebp-2Ch] BYREF
  MouseClass *aP1a; // [esp+40h] [ebp+4h]

  v2 = (MouseClass *)this; /*0x56b3f5*/
  LZOPipe::Constructor(&v17[4], 0, (TechnoTypeClass *)0x2000); /*0x56b406*/
  Pipe::SetDelegate(&v17[4], (int)aP1); /*0x56b414*/
  v3 = 0; /*0x56b41f*/
  v4 = 0; /*0x56b421*/
  aP1a = 0; /*0x56b425*/
  if ( v2->field_140 > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v2->__pad_11F[29] + 4 * v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
          v6 = *(TagClass **)(v5 + 36); /*0x56b44a*/
          Src = (int)v6; /*0x56b451*/
          v7 = this->q03D; /*0x56b45a*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b468*/
          if ( Src > v7 /*0x56b49b*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * this->q0F8 )
          {
            Src = (int)v6; /*0x56b4a8*/
            if ( v6 != g_MapSeedState /*0x56b4d9*/
              && (_DWORD *)v5 != g_CellClassArray
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = (int)v6; /*0x56b4e6*/
              v8 = Compression::Read((int)&v17[4], (AbstractClass *)&Src, (IUnknown *)4) + v3; /*0x56b4f6*/
              v9 = Compression::Read((int)&v17[4], (AbstractClass *)(v5 + 56), (IUnknown *)4) + v8; /*0x56b50a*/
              v10 = Compression::Read((int)&v17[4], (AbstractClass *)(v5 + 282), (IUnknown *)1) + v9; /*0x56b51e*/
              v11 = Compression::Read((int)&v17[4], (AbstractClass *)(v5 + 283), (IUnknown *)1) + v10; /*0x56b532*/
              v3 = Compression::Read((int)&v17[4], (AbstractClass *)(v5 + 281), (IUnknown *)1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v2 = (MouseClass *)this; /*0x56b53b*/
      v4 = (int)&aP1a->field_0 + 1; /*0x56b543*/
      aP1a = (MouseClass *)v4; /*0x56b54a*/
    }
    while ( v4 < this->q050 ); /*0x56b550*/
  }
  *(_DWORD *)v17[0] = g_MapSeedState; /*0x56b568*/
  v12 = Compression::Read((int)&v17[4], &v17, (IUnknown *)4) + v3; /*0x56b579*/
  v13 = (TagClass *)(*(int (__thiscall **)(char *))(*(_DWORD *)&v17[4] + 4))(&v17[4]); /*0x56b582*/
  LZOPipe::Destructor((int *)&v17[4]); /*0x56b584*/
  return (int)&v13->__pad_0[v12]; /*0x56b58c*/
}
}

// 0x56D230
int MapClass::GetTileIndex(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass::GetTileIndex(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  IUnknown *v4; // esi
  IUnknown *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int RegionMap; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // eax
  int *NeighbourContent; // edi
  unsigned int i; // esi
  int v14; // eax
  int v16; // ecx

  v4 = aP1; /*0x56d238*/
  v5 = (IUnknown *)this; /*0x56d23d*/
  if ( (_BYTE)aP3 )
  {
    v6 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x56d255*/
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x56d26f*/
      v7 = g_CellClassArray; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
      RegionMap = GetRegionMap(this, aP1, 1, 0); /*0x56d28f*/
      if ( RegionMap == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
      v9 = 16 * RegionMap + v5->field_54; /*0x56d2a3*/
      if ( *(_BYTE *)(v9 + 8) )
      {
        v4 = (IUnknown *)(16 * RegionMap + v5->field_54); /*0x56d2ac*/
      }
      else
      {
        v10 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x56d2bd*/
        if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = g_CellClassArray; /*0x56d2db*/
          g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x56d2e0*/
        }
        for ( i = *(_WORD *)(v9 + 4) != *(_WORD *)v9 ? 2 : 4;
              (NeighbourContent[80] & 0x100) != 0;
              NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x56d337*/
          v4 = (IUnknown *)(v9 + 4); /*0x56d339*/
        else
          v4 = (IUnknown *)v9; /*0x56d361*/
        v5 = (IUnknown *)this; /*0x56d33b*/
      }
    }
  }
  v14 = SLOWORD(v4->field_0) + SHIWORD(v4->field_0) * (v5->field_F8 + *(_DWORD *)&v5->__pad_EC[8] + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
    v16 = *(_DWORD *)&v5->__pad_68[4]; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_10[4 * (_DWORD)aP2 + 8] /*0x56d365*/
                             + 2 * *(unsigned __int16 *)(*(_DWORD *)v5->__pad_68 + 4 * v14 + 2));
}
}

// 0x56D6E0
int MapClass::ProcessRegion()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass_ProcessRegion(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // eax
  int result; // eax
  int v5; // ebp
  void *NeighbourContent; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  __int16 *i; // eax
  int *v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  int v33; // ebp
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  _DWORD *v37; // eax
  char v38; // [esp+Eh] [ebp-32h]
  char v39; // [esp+Fh] [ebp-31h]
  unsigned int v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h]
  int v44; // [esp+28h] [ebp-18h]
  int v45; // [esp+38h] [ebp-8h]

  v2 = this + 20; /*0x56d6ef*/
  (*(void (__thiscall **)(_DWORD *))(this->q050 + 12))(this + 20); /*0x56d6f4*/
  v3 = this->q0F4; /*0x56d6f7*/
  this->q10C = 1; /*0x56d6fd*/
  this->CellIterator_NextY = v3; /*0x56d707*/
  this->CellIterator_CurrentY = v3 - 1; /*0x56d710*/
  this->CellIterator_NextCell = (v3 << 11) + this->q13C + 4; /*0x56d725*/
  result = LayerClass::CellIteratorNext(this); /*0x56d72b*/
  v5 = result; /*0x56d730*/
  if ( result ) /*0x56d734*/
  {
    while ( 1 ) /*0x56d73b*/
    {
      if ( !Cell::IsInRange((int *)v5) && !Cell::IsInRange2((int *)v5) ) /*0x56d74c*/
      {
        if ( CellClass::IsTunnelEntrance(v5) ) /*0x56d75b*/
        {
          if ( (NeighbourContent = Cell::GetNeighbourContent((_DWORD *)v5, 2u), /*0x56d7b3*/
                CellClass::IsTunnelEntrance((int)NeighbourContent))
            && (v7 = Cell::GetNeighbourContent((_DWORD *)v5, 6u), CellClass::IsTunnelEntrance((int)v7))
            || (v8 = Cell::GetNeighbourContent((_DWORD *)v5, 4u), CellClass::IsTunnelEntrance((int)v8))
            && (v9 = Cell::GetNeighbourContent((_DWORD *)v5, 0), CellClass::IsTunnelEntrance((int)v9)) )
          {
            v42 = *(_DWORD *)(InfantryClass::GetType((__int16 *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((__int16 *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex((__int16 *)(v5 + 36)) < v10 ) /*0x56d7e5*/
            {
              v11 = *(_DWORD *)(InfantryClass::GetType((__int16 *)v5) + 40); /*0x56d7f2*/
              v12 = v2[2]; /*0x56d7f5*/
              v13 = v2[4]; /*0x56d7f8*/
              v14 = *(_DWORD *)(v5 + 36); /*0x56d7fb*/
              LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( v13 < v12 /*0x56d82e*/
                || (*((_BYTE *)v2 + 13) || !v12)
                && (v15 = v2[5], v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v12 + v15, 0) )
              {
                v16 = v2[4]; /*0x56d839*/
                v17 = v44; /*0x56d83c*/
                v2[4] = v16 + 1; /*0x56d843*/
                v18 = (_DWORD *)(v2[1] + 16 * v16); /*0x56d84c*/
                *v18 = v14; /*0x56d84e*/
                v18[1] = v11; /*0x56d850*/
                v18[2] = v17; /*0x56d853*/
                v18[3] = 1; /*0x56d856*/
              }
            }
          }
        }
        goto LABEL_42; /*0x56d859*/
      }
      v19 = Cell::IsInRange((int *)v5); /*0x56d860*/
      v20 = unk_AA0E28; /*0x56d865*/
      if ( !v19 ) /*0x56d870*/
        v20 = g_TerrainBridgeIndex; /*0x56d872*/
      v21 = *(_DWORD *)(v5 + 56) - v20; /*0x56d878*/
      if ( dword_82A734[v21] == *(unsigned __int8 *)(v5 + 282) ) /*0x56d889*/
        break; /*0x56d889*/
LABEL_42:
      result = LayerClass::CellIteratorNext(this); /*0x56d9e9*/
      v5 = result; /*0x56d9f2*/
      if ( !result ) /*0x56d9f6*/
        return result; /*0x56d9f6*/
    }
    v38 = 0; /*0x56d896*/
    v41 = dword_82A774[v21]; /*0x56d89b*/
    v39 = 1; /*0x56d89f*/
    for ( i = (__int16 *)Cell::GetNeighbourContent((_DWORD *)v5, v41); ; i = (__int16 *)Cell::GetNeighbourContent( /*0x56d8a7*/
                                                                                          v23,
                                                                                          v41) )
    {
      while ( 1 ) /*0x56d8b0*/
      {
        v23 = (int *)i; /*0x56d8b0*/
        v24 = i[18]; /*0x56d8b2*/
        v25 = i[19]; /*0x56d8b6*/
        v26 = this->q0F4; /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= v26 || v24 - v25 >= v26 || v25 - v24 >= v26 || v43 > v26 + 2 * this->q0F8 ) /*0x56d8f8*/
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
LABEL_36:
          v30 = *((_DWORD *)Cell::GetNeighbourContent(v23, ((_BYTE)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = v2[2]; /*0x56d990*/
          v32 = v2[4]; /*0x56d993*/
          v33 = *(_DWORD *)(v5 + 36); /*0x56d99a*/
          LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( v32 < v31 /*0x56d9c2*/
            || (*((_BYTE *)v2 + 13) || !v31)
            && (v34 = v2[5], v34 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v31 + v34, 0) )
          {
            v35 = v2[4]; /*0x56d9c9*/
            v36 = v45; /*0x56d9cc*/
            v2[4] = v35 + 1; /*0x56d9d3*/
            v37 = (_DWORD *)(v2[1] + 16 * v35); /*0x56d9dc*/
            *v37 = v33; /*0x56d9de*/
            v37[1] = v30; /*0x56d9e0*/
            v37[2] = v36; /*0x56d9e3*/
            v37[3] = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        v27 = v23[14]; /*0x56d90d*/
        v28 = unk_AA0E28; /*0x56d910*/
LABEL_27:
        v29 = v27 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == *((unsigned __int8 *)v23 + 282) ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
LABEL_30:
        i = (__int16 *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
      }
      if ( Cell::IsInRange2(v23) ) /*0x56d943*/
      {
        v27 = v23[14]; /*0x56d94c*/
        v28 = g_TerrainBridgeIndex; /*0x56d94f*/
        goto LABEL_27; /*0x56d955*/
      }
      if ( (v23[80] & 0x100) != 0 ) /*0x56d960*/
        goto LABEL_30; /*0x56d960*/
      v39 = 0; /*0x56d966*/
    }
  }
  return result; /*0x56d9fd*/
}
}

// 0x56DAE0
char MapClass::ClearRegions(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::ClearRegions(int *this, IUnknown *aP1)
{
  int RegionMap; // edi
  char aP1a; // [esp+10h] [ebp+4h]

  RegionMap = GetRegionMap(this, aP1, 3, 0); /*0x56daf3*/
  if ( RegionMap == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(this); /*0x56dafc*/
    RegionMap = GetRegionMap(this, aP1, 3, 0); /*0x56db0d*/
    if ( RegionMap == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  aP1a = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(_BYTE *)(16 * RegionMap + this->q054 + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph(this, (int *)(16 * RegionMap + this->q054)); /*0x56db3b*/
      aP1a = 1; /*0x56db43*/
      *(_BYTE *)(this->q054 + 16 * RegionMap + 8) = 0; /*0x56db48*/
    }
    RegionMap = GetRegionMap(this, aP1, 3, RegionMap + 1); /*0x56db59*/
  }
  while ( RegionMap != -1 ); /*0x56db5e*/
  return aP1a; /*0x56db14*/
}
}

// 0x56E7C0
char MapClass::CheckCellsBuildable(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, int aP6, IUnknown * aP7, IUnknown * aP8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall MapClass::CheckCellsBuildable(
        IUnknown *aP0,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        int aP6,
        IUnknown *aP7,
        IUnknown *aP8)
{
  int v9; // ebp
  int v11; // esi
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  IUnknown *aP6a; // [esp+2Ch] [ebp+1Ch]

  v9 = 0; /*0x56e7c6*/
  if ( (int)aP1 <= 0 ) /*0x56e7cc*/
    return 1; /*0x56e87c*/
  while ( 1 ) /*0x56e7de*/
  {
    v11 = 0; /*0x56e7de*/
    if ( (int)aP2 > 0 ) /*0x56e7e2*/
      break; /*0x56e7e2*/
LABEL_11:
    if ( ++v9 >= (int)aP1 ) /*0x56e876*/
      return 1; /*0x56e876*/
  }
  while ( 1 ) /*0x56e7f5*/
  {
    HIWORD(aP6a) = v11 + HIWORD(aP0->field_0); /*0x56e7f5*/
    LOWORD(aP6a) = v9 + LOWORD(aP0->field_0); /*0x56e7fa*/
    v12 = (__int16)aP6a + (SHIWORD(aP6a) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(_DWORD **)(*(_DWORD *)&stru_87C374[13744] + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = g_CellClassArray; /*0x56e828*/
      g_Map_GlobalCellIndex = aP6a; /*0x56e82d*/
    }
    if ( (_BYTE)aP8 && v14[17] != -1 || !Cell::IsBuildable((int)v14, (int)aP3, 0, 0, aP4, aP5, (IUnknown *)aP6, aP7) ) /*0x56e859*/
      return 0; /*0x56e87c*/
    if ( ++v11 >= (int)aP2 ) /*0x56e869*/
      goto LABEL_11; /*0x56e869*/
  }
}
}

// 0x574780
int MapClass::TransitionCliff(MouseClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall MapClass::TransitionCliff(MouseClass *aP0)
{
  _DWORD *v1; // ecx
  MouseClass *v2; // esi
  _DWORD *v3; // edi
  unsigned int v4; // eax
  _DWORD *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = aP0; /*0x574784*/
  v3 = v1; /*0x574789*/
  v4 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x574795*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374[13744] + 4 * v4)) == 0 ) /*0x5747ab*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x5747af*/
    v5 = g_CellClassArray; /*0x5747b4*/
  }
  result = v5[17]; /*0x5747b9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x5747d3*/
  {
    v7 = HIWORD(aP0->field_0); /*0x5747dc*/
    LOWORD(aP0) = aP0->field_0; /*0x5747e0*/
    HIWORD(aP0) = v7 - 1; /*0x5747eb*/
    v8 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP0) + 17); /*0x574803*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57480e*/
    {
      v10 = HIWORD(v2->field_0) - 2; /*0x574846*/
      LOWORD(aP0) = v2->field_0; /*0x57484a*/
      HIWORD(aP0) = v10; /*0x57484f*/
      v11 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP0) + 17); /*0x57486b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x574876*/
      {
        v12 = HIWORD(v2->field_0); /*0x57488b*/
        LOWORD(aP0) = v2->field_0; /*0x57488f*/
        HIWORD(aP0) = v12 - 1; /*0x57489a*/
        return CellClass::ApplyCliffMod2(v3, &aP0); /*0x5748aa*/
      }
      else
      {
        return CellClass::ApplyCliffMod2(v3, v2); /*0x57487b*/
      }
    }
    else
    {
      v9 = HIWORD(v2->field_0) + 1; /*0x574817*/
      LOWORD(aP0) = v2->field_0; /*0x574819*/
      HIWORD(aP0) = v9; /*0x57481e*/
      return CellClass::ApplyCliffMod2(v3, &aP0); /*0x574832*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x5748ce*/
  {
    v13 = LOWORD(aP0->field_0) - 1; /*0x5748db*/
    HIWORD(aP0) = HIWORD(aP0->field_0); /*0x5748dd*/
    LOWORD(aP0) = v13; /*0x5748e2*/
    v14 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP0) + 17); /*0x5748fe*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x574909*/
    {
      v16 = LOWORD(v2->field_0) - 2; /*0x574941*/
      HIWORD(aP0) = HIWORD(v2->field_0); /*0x574945*/
      LOWORD(aP0) = v16; /*0x57494a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP0) + 17); /*0x574966*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x574971*/
      {
        aP0 = (MouseClass *)1; /*0x57498f*/
        v18 = CellStruct::Sub((__int16 *)v2, (IUnknown *)&v19, (IUnknown *)&aP0)->field_0; /*0x5749a8*/
        return CellClass::ApplyCliffMod(v3, &v18); /*0x5749af*/
      }
      else
      {
        return CellClass::ApplyCliffMod(v3, v2); /*0x574976*/
      }
    }
    else
    {
      v15 = LOWORD(v2->field_0) + 1; /*0x574912*/
      HIWORD(aP0) = HIWORD(v2->field_0); /*0x574914*/
      LOWORD(aP0) = v15; /*0x574919*/
      return CellClass::ApplyCliffMod(v3, &aP0); /*0x57492d*/
    }
  }
  return result; /*0x574837*/
}
}

// 0x574C20
void MapClass::ApplyTerrainDamage(IUnknown *this@<ecx> a1, IUnknown aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __userpurge MapClass::ApplyTerrainDamage(IUnknown *this@<ecx>, IUnknown aP1)
{
  IUnknown *v2; // ebp
  IUnknown *v3; // edi
  IUnknown *v4; // esi
  ObjectClass *v5; // ebx
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // si
  _WORD *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  _DWORD *v20; // eax
  __int16 v21; // bp
  __int16 v22; // bx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  __int16 v26; // dx
  unsigned int v27; // eax
  _DWORD *v28; // eax
  bool v29; // cc
  int v30; // eax
  ObjectClass *v31; // eax
  CCINIClass *v32; // ebx
  __int16 v33; // si
  int v34; // ecx
  int v35; // ecx
  _DWORD *v36; // ecx
  int v37; // eax
  __int16 v38; // cx
  int v39; // edi
  ObjectClass *v40; // edx
  int v41; // ecx
  int v42; // ecx
  unsigned int v43; // eax
  ObjectClass *v44; // eax
  ObjectClass *v45; // edx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ebp
  int i; // esi
  __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  _DWORD *v53; // eax
  _DWORD *ebx68; // ebx
  IUnknown *v54; // esi
  int v56; // eax
  int v57; // eax
  int v58; // esi
  int v59; // ebp
  __int16 v60; // ax
  int v61; // esi
  ObjectClass *v62; // [esp+14h] [ebp-30h] BYREF
  ObjectClass *v63; // [esp+18h] [ebp-2Ch]
  ObjectClass *v64; // [esp+1Ch] [ebp-28h]
  ObjectClass *v65; // [esp+20h] [ebp-24h]
  ObjectClass *v66; // [esp+24h] [ebp-20h]
  CCINIClass *v67; // [esp+28h] [ebp-1Ch] BYREF
  void **v69; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  char v71; // [esp+39h] [ebp-Bh]
  int v72; // [esp+3Ch] [ebp-8h]
  ObjectClass *v73; // [esp+40h] [ebp-4h]

  v2 = this; /*0x574c26*/
  v3 = (IUnknown *)-2; /*0x574c2d*/
  while ( 2 ) /*0x574c32*/
  {
    v4 = (IUnknown *)-2; /*0x574c32*/
    do /*0x574c7a*/
    {
      v5 = (ObjectClass *)aP1.field_0; /*0x574c37*/
      v6 = *(_WORD *)(aP1.field_0 + 2); /*0x574c3e*/
      LOWORD(v63) = (_WORD)v3 + *(_WORD *)aP1.field_0; /*0x574c48*/
      HIWORD(v63) = (_WORD)v4 + v6; /*0x574c4d*/
      v67 = (CCINIClass *)v63; /*0x574c60*/
      v7 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v67) + 17); /*0x574c69*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x574c74*/
      {
        v8 = (_WORD)v4 + *(_WORD *)&v5->__pad_0[2]; /*0x574c8e*/
        LOWORD(aP1.field_0) = (_WORD)v3 + *(_WORD *)v5->__pad_0; /*0x574c91*/
        HIWORD(aP1.field_0) = v8; /*0x574c9a*/
        MapClass::TransitionCliff((int)&aP1); /*0x574caa*/
        return; /*0x574cb6*/
      }
      v4 = (IUnknown *)((char *)v4 + 1); /*0x574c76*/
    }
    while ( (int)v4 < 3 ); /*0x574c7a*/
    v3 = (IUnknown *)((char *)v3 + 1); /*0x574c7c*/
    if ( (int)v3 < 3 ) /*0x574c80*/
      continue; /*0x574c80*/
    break;
  }
  v9 = *(__int16 *)v5->__pad_0 + (*(__int16 *)&v5->__pad_0[2] << 9); /*0x574cc3*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v9)) != 0 ) /*0x574cd9*/
  {
    v11 = v10; /*0x574cdb*/
  }
  else
  {
    v11 = g_CellClassArray; /*0x574ce1*/
    g_Map_GlobalCellIndex = *(IUnknown **)v5->__pad_0; /*0x574ce6*/
  }
  v12 = v11[80]; /*0x574cec*/
  v63 = 0; /*0x574cf7*/
  if ( (v12 & 0x500) == 0 ) /*0x574cfb*/
  {
    v67 = 0; /*0x574d01*/
    while ( 1 ) /*0x574d16*/
    {
      v13 = (unsigned __int8)v63 & 7; /*0x574d16*/
      v14 = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v13) + *(_WORD *)v5->__pad_0; /*0x574d21*/
      v15 = *(_WORD *)&v5->__pad_0[2] + *((_WORD *)&DataGlobal_89F68A + 2 * v13); /*0x574d29*/
      v16 = (_WORD *)(4 * v13 + 9041544); /*0x574d2d*/
      v17 = v15 << 9; /*0x574d3a*/
      v18 = v14 + v17 < 0; /*0x574d3d*/
      v19 = v14 + v17; /*0x574d3d*/
      LOWORD(v64) = v14; /*0x574d3f*/
      HIWORD(v64) = v15; /*0x574d44*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v19)) == 0 ) /*0x574d5d*/
      {
        v11 = g_CellClassArray; /*0x574d67*/
        g_Map_GlobalCellIndex = (IUnknown *)v64; /*0x574d6c*/
      }
      else
      {
        v11 = v20; /*0x574d5f*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574d7a*/
        break; /*0x574d7a*/
      v21 = v15 + v16[1]; /*0x574d87*/
      v22 = v14 + *v16; /*0x574d8a*/
      v23 = v21 << 9; /*0x574d93*/
      v18 = v22 + v23 < 0; /*0x574d96*/
      v24 = v22 + v23; /*0x574d96*/
      LOWORD(v65) = v22; /*0x574d98*/
      HIWORD(v65) = v21; /*0x574d9d*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v24)) == 0 ) /*0x574db6*/
      {
        v11 = g_CellClassArray; /*0x574dc0*/
        g_Map_GlobalCellIndex = (IUnknown *)v65; /*0x574dc5*/
      }
      else
      {
        v11 = v25; /*0x574db8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574dd7*/
        goto LABEL_34; /*0x574dd7*/
      v26 = v22 + *v16; /*0x574de3*/
      HIWORD(v66) = v21 + v16[1]; /*0x574de9*/
      LOWORD(v66) = v26; /*0x574dee*/
      v27 = v26 + (SHIWORD(v66) << 9); /*0x574df9*/
      if ( v27 < 0x40000 && (v28 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v27)) != 0 ) /*0x574e0f*/
      {
        v11 = v28; /*0x574e11*/
      }
      else
      {
        v11 = g_CellClassArray; /*0x574e19*/
        g_Map_GlobalCellIndex = (IUnknown *)v66; /*0x574e1e*/
      }
      if ( (v11[80] & 0x500) != 0 /*0x574e43*/
        || (v29 = (int)&v67->__pad_0[1] < 8,
            v63 = (ObjectClass *)(((_BYTE)v63 + 1) & 7),
            v67 = (CCINIClass *)((char *)v67 + 1),
            !v29) )
      {
LABEL_34:
        v2 = this; /*0x574e49*/
        break; /*0x574e49*/
      }
      v5 = (ObjectClass *)aP1.field_0; /*0x574d07*/
      v2 = this; /*0x574d0b*/
    }
  }
  v30 = v11[80]; /*0x574e4d*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574e6c*/
        v31 = *(ObjectClass **)(v11[11] + 36); /*0x574e79*/
      else
        v31 = (ObjectClass *)v11[9]; /*0x574e6e*/
    }
    else
    {
      v32 = (CCINIClass *)v11[9]; /*0x574e86*/
      v67 = v32; /*0x574e8d*/
      v66 = 0; /*0x574e94*/
      v65 = (ObjectClass *)((v30 & 0x800) != 0 ? 4 : 2);
      while ( 1 ) /*0x574eb5*/
      {
        v33 = *((_WORD *)&DataGlobal_89F68A + 2 * ((unsigned __int8)v65 & 7)) + HIWORD(v67); /*0x574eb5*/
        LOWORD(aP1.field_0) = (_WORD)v32 + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * ((unsigned __int8)v65 & 7)); /*0x574ec2*/
        HIWORD(aP1.field_0) = v33; /*0x574ec7*/
        LOWORD(v32) = aP1.field_0; /*0x574ecc*/
        v34 = v33 << 9; /*0x574ed0*/
        v18 = SLOWORD(aP1.field_0) + v34 < 0; /*0x574ed3*/
        v35 = SLOWORD(aP1.field_0) + v34; /*0x574ed3*/
        v67 = (CCINIClass *)aP1.field_0; /*0x574ed5*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v35)) == 0 ) /*0x574eef*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)aP1.field_0; /*0x574ef5*/
          v36 = g_CellClassArray; /*0x574efb*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x574f0a*/
          break; /*0x574f0a*/
        v66 = (ObjectClass *)((char *)v66 + 1); /*0x574f14*/
        if ( (int)v66 >= 4 ) /*0x574f18*/
          return; /*0x574f18*/
      }
      v2 = this; /*0x574f28*/
      v37 = ((_BYTE)v65 - 4) & 7; /*0x574f32*/
      v38 = *((_WORD *)&DataGlobal_89F68A + 2 * v37); /*0x574f4e*/
      LOWORD(aP1.field_0) += *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v37) /*0x574f58*/
                           + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v37);
      HIWORD(aP1.field_0) = v33 + v38 + v38; /*0x574f5d*/
      v31 = (ObjectClass *)aP1.field_0; /*0x574f62*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    v62 = v31; /*0x574f81*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574f85*/
    v40 = v62; /*0x574f8a*/
    v41 = *(_DWORD *)&v2->__pad_11C[8]; /*0x574f8e*/
    v69 = &vt_DynamicVectorClass_Cell; /*0x574f99*/
    v73 = (ObjectClass *)10; /*0x574fa1*/
    v72 = 0; /*0x574fa9*/
    if ( (__int16)v62 >= v41 ) /*0x574fb1*/
    {
      do /*0x574fbd*/
      {
        if ( (__int16)v40 > v41 + *(_DWORD *)&v2->__pad_11C[16] ) /*0x574fc4*/
          break; /*0x574fc4*/
        v42 = *(_DWORD *)&v2->__pad_11C[12]; /*0x574fcf*/
        if ( SHIWORD(v62) < v42 || SHIWORD(v62) > v42 + v2->field_130 ) /*0x574fe7*/
          break; /*0x574fe7*/
        v43 = (__int16)v40 + (SHIWORD(v62) << 9); /*0x574ff6*/
        if ( *(_DWORD *)(*(_DWORD *)&v2->__pad_134[8] + 4 * v43) ) /*0x574ff8*/
        {
          if ( v43 < 0x40000 && (v44 = *(ObjectClass **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v43)) != 0 ) /*0x575014*/
          {
            v45 = v44; /*0x575016*/
          }
          else
          {
            g_Map_GlobalCellIndex = (IUnknown *)v40; /*0x57501a*/
            v45 = (ObjectClass *)g_CellClassArray; /*0x575020*/
          }
          if ( globalHelper_0746C0((int)v45->attachedBomb - g_TerrainBridgeIndex + 1, (int)v45) ) /*0x575031*/
          {
            v48 = ((_BYTE)v39 - 4) & 7; /*0x57508d*/
            aP1.field_0 = (int)v62; /*0x575090*/
            for ( i = 0; i < 3; ++i ) /*0x575094*/
            {
              if ( CellClass::SetTerrainType(this, (IUnknown *)&v62) ) /*0x57509f*/
                break; /*0x5750a6*/
            }
            while ( 1 ) /*0x5750c8*/
            {
              v50 = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * (((_BYTE)v39 - 4) & 7)) + LOWORD(aP1.field_0); /*0x5750c8*/
              HIWORD(v67) = *((_WORD *)&DataGlobal_89F68A + 2 * (((_BYTE)v39 - 4) & 7)) + HIWORD(aP1.field_0); /*0x5750ce*/
              LOWORD(v67) = v50; /*0x5750d3*/
              v51 = v50; /*0x5750dc*/
              aP1.field_0 = (int)v67; /*0x5750e1*/
              v52 = v50 + (SHIWORD(v67) << 9); /*0x5750e8*/
              if ( v52 < 0x40000 && (v53 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v52)) != 0 ) /*0x5750fe*/
              {
                ebx68 = v53; /*0x575100*/
              }
              else
              {
                g_Map_GlobalCellIndex = (IUnknown *)v67; /*0x575104*/
                ebx68 = g_CellClassArray; /*0x57510a*/
              }
              v54 = this; /*0x57510f*/
              v56 = *(_DWORD *)&this->__pad_11C[8]; /*0x575113*/
              if ( v51 < v56 ) /*0x57511b*/
                break; /*0x57511b*/
              if ( v51 > v56 + *(_DWORD *)&this->__pad_11C[16] ) /*0x57512b*/
                goto LABEL_79; /*0x57512b*/
              v57 = *(_DWORD *)&this->__pad_11C[12]; /*0x575135*/
              if ( SHIWORD(v67) < v57 || SHIWORD(v67) > v57 + this->field_130 ) /*0x57514d*/
                goto LABEL_79; /*0x57514d*/
              v58 = ebx68[14] - g_TerrainBridgeIndex + 1; /*0x57515b*/
              if ( globalHelper_074600(v58, v48, (int)ebx68) ) /*0x575160*/
              {
                if ( v58 != -1 ) /*0x575170*/
                {
                  v59 = ((_BYTE)v48 - 4) & 7; /*0x57517a*/
                  v60 = *((_WORD *)&DataGlobal_89F68A + 2 * v59); /*0x57518c*/
                  LOWORD(v67) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v59) + LOWORD(aP1.field_0); /*0x575194*/
                  v61 = 0; /*0x57519e*/
                  HIWORD(v67) = HIWORD(aP1.field_0) + v60; /*0x5751a0*/
                  aP1.field_0 = (int)v67; /*0x5751a9*/
                  do /*0x5751c3*/
                  {
                    if ( CellClass::SetTerrainType(this, &aP1) ) /*0x5751b6*/
                      break; /*0x5751bd*/
                    ++v61; /*0x5751bf*/
                  }
                  while ( v61 < 3 ); /*0x5751c3*/
                }
LABEL_79:
                v54 = this; /*0x5751c5*/
                break; /*0x5751c5*/
              }
            }
            Terrain::CreateCrater(v54, (IUnknown *)&v62); /*0x5751c9*/
            v2 = this; /*0x5751db*/
            *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[31296] + 3452) = 1; /*0x5751df*/
            break; /*0x5751df*/
          }
          LOWORD(v40) = (_WORD)v62; /*0x57503a*/
        }
        v46 = v39 & 7; /*0x575040*/
        v47 = HIWORD(v62) + *((_WORD *)&DataGlobal_89F68A + 2 * v46); /*0x575056*/
        LOWORD(aP1.field_0) = (_WORD)v40 + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v46); /*0x57505e*/
        HIWORD(aP1.field_0) = v47; /*0x575066*/
        v41 = *(_DWORD *)&v2->__pad_11C[8]; /*0x57506b*/
        v40 = (ObjectClass *)aP1.field_0; /*0x575071*/
        v62 = (ObjectClass *)aP1.field_0; /*0x575077*/
      }
      while ( SLOWORD(aP1.field_0) >= v41 ); /*0x574fbd*/
    }
    Terrain::ConnectivityGraph(v2); /*0x5751e6*/
    v69 = &vt_VectorClass_Cell; /*0x5751f1*/
    if ( Block ) /*0x5751fb*/
    {
      if ( v71 ) /*0x575203*/
        __3_YAXPAX_Z(Block); /*0x575206*/
    }
  }
}
}

// 0x577920
int MapClass::RemoveTriggerRef(AbstractClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MapClass::RemoveTriggerRef(int *this, AbstractClass *aP1, int a3)
{
  AbstractClass *v3; // esi
  int i; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  IUnknown **v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int result; // eax

  v3 = aP1; /*0x577922*/
  if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 44 ) /*0x577932*/
  {
    for ( i = 0; i < this->q116C; ++i ) /*0x577943*/
    {
      v6 = this->q1160; /*0x57794a*/
      v7 = *(__int16 *)(v6 + 4 * i + 2); /*0x577950*/
      v8 = *(__int16 *)(v6 + 4 * i); /*0x577955*/
      v9 = (IUnknown **)(v6 + 4 * i); /*0x577959*/
      v10 = v8 + (v7 << 9); /*0x57795f*/
      if ( v10 < 0x40000 && (v11 = *(_DWORD **)(this->q04F + 4 * v10)) != 0 ) /*0x577975*/
      {
        v12 = v11; /*0x577977*/
      }
      else
      {
        v12 = g_CellClassArray; /*0x57797d*/
        g_Map_GlobalCellIndex = *v9; /*0x577982*/
      }
      if ( v12 && (AbstractClass *)v12[15] == v3 ) /*0x57798e*/
      {
        ObjectClass::SetTriggerTarget(v12, 0); /*0x577994*/
        v13 = (*(int (__thiscall **)(int *, _DWORD *))(this->q115C + 16))(this + 1111, v12 + 9); /*0x5779ab*/
        if ( v13 != -1 ) /*0x5779b1*/
        {
          v14 = this->q116C; /*0x5779b3*/
          if ( v13 < v14 ) /*0x5779b8*/
          {
            v15 = v14 - 1; /*0x5779ba*/
            for ( this->q116C = v15; /*0x5779c0*/
                  v13 < this->q116C;
                  *(_DWORD *)(this->q1160 + 4 * v13 - 4) = *(_DWORD *)(this->q1160 + 4 * v13) )
            {
              ++v13; /*0x5779c5*/
            }
          }
        }
        v3 = aP1; /*0x5779d4*/
        --i; /*0x5779d8*/
      }
    }
    MapClass::RemoveCellReference(g_CellClassArray, (int)v3); /*0x5779ef*/
  }
  result = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v3->__pad_0 + 44))(v3); /*0x5779f9*/
  if ( result == 44 ) /*0x5779ff*/
  {
    aP1 = v3; /*0x577a11*/
    result = (*(int (__thiscall **)(char *, AbstractClass **))(*(_DWORD *)&g_CellDirectionOffsets[84760] + 16))( /*0x577a15*/
               &g_CellDirectionOffsets[84760],
               &aP1);
    if ( result != -1 && result < *(int *)&g_CellDirectionOffsets[84776] ) /*0x577a25*/
    {
      --*(_DWORD *)&g_CellDirectionOffsets[84776]; /*0x577a2a*/
      for ( ; /*0x577a30*/
            result < *(int *)&g_CellDirectionOffsets[84776];
            *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84764] + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84764] + 4 * result) )
      {
        ++result; /*0x577a38*/
      }
    }
  }
  return result; /*0x577a4a*/
}
}

// 0x577F30
void * MapClass::ClearShroud(HouseClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall MapClass::ClearShroud(_DWORD *this, HouseClass *aP1)
{
  HouseClass *result; // eax
  bool v4; // bl
  int v5; // eax
  int v6; // ecx
  __int16 *v7; // esi
  int v8; // eax
  int v9; // edx

  result = aP1; /*0x577f30*/
  if ( aP1 ) /*0x577f3a*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * aP1->relatedTagsCount] + 577) = 1; /*0x577f48*/
  if ( aP1 == (HouseClass *)HouseClass_Player ) /*0x577f55*/
  {
    if ( aP1 ) /*0x577f63*/
      goto LABEL_8; /*0x577f63*/
  }
  else if ( aP1 ) /*0x577f59*/
  {
    return result; /*0x577f59*/
  }
  Debug::Log(); /*0x577f6a*/
LABEL_8:
  v4 = (g_GameMode_Current == (CellStruct *)3 || g_GameMode_Current == (CellStruct *)4) /*0x577f94*/
    && g_GameStateFlags
    && !(*(unsigned __int8 (__thiscall **)(SkirmishDialog *))(*(_DWORD *)g_GameStateFlags->__pad_0 + 4))(g_GameStateFlags);
  result = (HouseClass *)HouseClass_Player; /*0x577f9a*/
  if ( !HouseClass_Player->__pad_220[32] ) /*0x577f9f*/
  {
    HouseClass_Player->__pad_220[32] = 1; /*0x577fad*/
    DataGlobal_87F8E4.field_14 = g_Cell_PositionLUT; /*0x577fbf*/
    DataGlobal_87F8E4.field_10 = (void *)1; /*0x577fc7*/
    *(_DWORD *)DataGlobal_87F8E4[24] = g_Cell_PositionLUT - 1; /*0x577fd4*/
    *(_DWORD *)&DataGlobal_87F8E4[28] = (g_Cell_PositionLUT << 11) + *(_DWORD *)&DataGlobal_87F8E4[64] + 4; /*0x577fe3*/
    v5 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x577fe8*/
    if ( v5 ) /*0x577fef*/
    {
      while ( 1 ) /*0x577ff3*/
      {
        v6 = *(__int16 *)(v5 + 36); /*0x577ff3*/
        v7 = (__int16 *)(v5 + 36); /*0x577ff7*/
        v8 = *(__int16 *)(v5 + 38); /*0x577ffa*/
        if ( !v4 ) /*0x578000*/
          goto LABEL_24; /*0x578000*/
        if ( v6 != 7 ) /*0x578005*/
          break; /*0x578005*/
        if ( v8 != this->q0F4 + 5 ) /*0x578012*/
          goto LABEL_22; /*0x578012*/
LABEL_25:
        v5 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x578054*/
        if ( !v5 ) /*0x578060*/
          goto LABEL_26; /*0x578060*/
      }
      if ( v6 == 13 && v8 == this->q0F4 + 11 ) /*0x578026*/
        goto LABEL_25; /*0x578026*/
LABEL_22:
      v9 = this->q0F8; /*0x578028*/
      if ( v6 == v9 + 13 && v8 == this->q0F4 + v9 - 15 ) /*0x578041*/
        goto LABEL_25; /*0x578041*/
LABEL_24:
      DisplayClass::RevealFogCell(&DataGlobal_87F7E8, v7, HouseClass_Player); /*0x578043*/
      goto LABEL_25; /*0x57804f*/
    }
LABEL_26:
    FogOfWar::Render((int **)&DataGlobal_87F7E8); /*0x578064*/
    return (void *)MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1); /*0x578075*/
  }
  return result; /*0x57807a*/
}
}

// 0x578390
namespace gamemd {
int MapClass_IsRectInBounds()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __userpurge MapClass::IsRectInBounds@<eax>(_DWORD *this@<ecx>, IUnknown aP1)
{
  TechnoClass *v2; // ebx
  IUnknown *v4; // esi
  __int16 v5; // ax
  __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  _WORD v12[2]; // [esp+Ch] [ebp-8h] BYREF
  RadarClass *v13; // [esp+10h] [ebp-4h] BYREF

  v2 = (TechnoClass *)aP1.field_4; /*0x578394*/
  v4 = (IUnknown *)aP1.field_0; /*0x578399*/
  v5 = *(_WORD *)aP1.field_0; /*0x5783a4*/
  HIWORD(aP1.field_0) = *(_WORD *)(aP1.field_0 + 4); /*0x5783ab*/
  LOWORD(aP1.field_0) = v5; /*0x5783b4*/
  if ( !LayerClass::IsWithinUsableArea(this, &aP1, (TechnoClass *)aP1.field_4) ) /*0x5783b9*/
    return 0; /*0x5783b9*/
  v6 = v4->field_4; /*0x5783d0*/
  LOWORD(aP1.field_4) = v4->field_8 + v4->field_0 - 1; /*0x5783d8*/
  HIWORD(aP1.field_4) = v6; /*0x5783e0*/
  if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1.field_4, v2) ) /*0x5783e5*/
    return 0; /*0x5783e5*/
  v7 = v4->field_4; /*0x5783f1*/
  v8 = v4->field_C; /*0x5783f4*/
  v12[0] = v4->field_0; /*0x5783f7*/
  v12[1] = v7 + v8 - 1; /*0x578408*/
  if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)v12, v2) ) /*0x57840d*/
    return 0; /*0x57840d*/
  v9 = v4->field_4; /*0x578420*/
  v10 = v4->field_C; /*0x578423*/
  LOWORD(v13) = v4->field_8 + v4->field_0 - 1; /*0x578426*/
  HIWORD(v13) = v9 + v10 - 1; /*0x578436*/
  return LayerClass::IsWithinUsableArea(this, (IUnknown *)&v13, v2); /*0x578446*/
}
}
} // namespace gamemd

// 0x578710
unsigned int * MapClass::SpiralSearch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MapClass::SpiralSearch(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  bool v7; // al
  int v8; // ecx
  int v9; // ebp
  int v10; // ebx
  _DWORD *result; // eax
  unsigned int v12; // eax
  IUnknown *v13; // [esp+10h] [ebp-4h] BYREF

  v2 = this->q0F4; /*0x578723*/
  v3 = this->ZoneIterator_Y; /*0x578729*/
  v4 = this->ZoneIterator_X; /*0x57872f*/
  if ( v4 + v3 > v2 + 2 * (this->q108 + this->q100) + 12 ) /*0x578740*/
    return 0; /*0x57880b*/
  while ( 1 ) /*0x578746*/
  {
    v5 = this->q104; /*0x578746*/
    v6 = 2 * (v5 + this->q0FC) - v2 - 2; /*0x57875c*/
    LOWORD(v13) = v4; /*0x57875f*/
    HIWORD(v13) = v3; /*0x578766*/
    if ( v4 - v3 < v6 ) /*0x57876b*/
    {
      this->ZoneIterator_X = v4 + 1; /*0x5787be*/
      this->ZoneIterator_Y = v3 - 1; /*0x5787c4*/
    }
    else
    {
      v7 = (((_BYTE)v4 - (_BYTE)v2 + (_BYTE)v3 - 1) & 1) == 1; /*0x578785*/
      v8 = v5 - (v7 + 1); /*0x578790*/
      v9 = this->ZoneIterator_X - v8; /*0x578792*/
      v10 = v8 + this->ZoneIterator_Y; /*0x578794*/
      this->ZoneIterator_X = v9; /*0x578798*/
      this->ZoneIterator_Y = v10; /*0x5787a0*/
      if ( v7 ) /*0x5787a8*/
        this->ZoneIterator_Y = v10 + 1; /*0x5787ab*/
      else
        this->ZoneIterator_X = v9 + 1; /*0x5787b4*/
    }
    if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v13, (TechnoClass *)1) ) /*0x5787d3*/
      break; /*0x5787d3*/
    v2 = this->q0F4; /*0x5787e8*/
    v3 = this->ZoneIterator_Y; /*0x5787ee*/
    v4 = this->ZoneIterator_X; /*0x5787f4*/
    if ( v4 + v3 > v2 + 2 * (this->q108 + this->q100) + 12 ) /*0x578805*/
      return 0; /*0x578805*/
  }
  v12 = (__int16)v13 + (SHIWORD(v13) << 9); /*0x578820*/
  if ( v12 >= 0x40000 || (result = *(_DWORD **)(this->q13C + 4 * v12)) == 0 ) /*0x578836*/
  {
    g_Map_GlobalCellIndex = v13; /*0x57883f*/
    return g_CellClassArray; /*0x578845*/
  }
  return result; /*0x57880d*/
}
}

// 0x578880
unsigned int * MapClass::FastCellLookup(short * a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MapClass::FastCellLookup(_DWORD *this, __int16 *a2, int a3, char a4)
{
  unsigned int v4; // eax
  _DWORD *result; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v12; // edx
  int v13; // ecx
  __int16 v14; // bx
  __int16 v15; // bp
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  __int16 v19; // bx
  __int16 v20; // bp
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+1Ch] [ebp+4h]
  int v27; // [esp+20h] [ebp+8h]
  int v28; // [esp+24h] [ebp+Ch]
  int v29; // [esp+24h] [ebp+Ch]
  int v30; // [esp+24h] [ebp+Ch]

  if ( a3 == 1 ) /*0x57888e*/
  {
    v4 = *a2 + (a2[1] << 9); /*0x57889e*/
    if ( v4 >= 0x40000 || (result = *(_DWORD **)(g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x5788b4*/
    {
      g_Map_GlobalCellIndex = *(_DWORD *)a2; /*0x5788be*/
      return g_CellClassArray; /*0x5788c4*/
    }
  }
  else
  {
    v6 = this->q0FC; /*0x5788d4*/
    v7 = *a2; /*0x5788da*/
    v8 = a2[1]; /*0x5788dd*/
    v9 = this->q100; /*0x5788e1*/
    v10 = (__int16)(v9 + this->q0F4 - v6); /*0x5788fd*/
    v25 = (__int16)(v9 + v6 + 1); /*0x57890e*/
    v26 = (6000 * a3 + v25 - v7) % a3; /*0x578928*/
    v12 = (6000 * a3 + (__int16)v10 - v8) % a3; /*0x57892d*/
    if ( v26 > 0 ) /*0x578939*/
      v7 += a3 - v26; /*0x57893f*/
    if ( v12 > 0 ) /*0x578947*/
      v8 += a3 - v12; /*0x57894d*/
    v27 = v25 + v10; /*0x57895b*/
    if ( a4 || (v13 = this->q108, v8 + v7 < v27 + 2 * v13 / 3) ) /*0x578987*/
    {
      v23 = (__int16)v8 << 9; /*0x578a74*/
      v17 = (__int16)v7 + v23 < 0; /*0x578a77*/
      v24 = (__int16)v7 + v23; /*0x578a77*/
      LOWORD(v30) = v7; /*0x578a79*/
      HIWORD(v30) = v8; /*0x578a7e*/
      if ( v17 || v24 >= 0x40000 || (result = *(_DWORD **)(g_Shroud_CellArray + 4 * v24)) == 0 ) /*0x578a97*/
      {
        g_Map_GlobalCellIndex = v30; /*0x578a9d*/
        return g_CellClassArray; /*0x578aa2*/
      }
    }
    else if ( v8 + v7 >= v27 + 4 * v13 / 3 || a3 <= 2 ) /*0x5789ab*/
    {
      v19 = v8 - (a3 - 1); /*0x578a27*/
      v20 = v7 - (a3 - 1); /*0x578a29*/
      v21 = v19 << 9; /*0x578a31*/
      v17 = v20 + v21 < 0; /*0x578a34*/
      v22 = v20 + v21; /*0x578a34*/
      LOWORD(v29) = v20; /*0x578a36*/
      HIWORD(v29) = v19; /*0x578a3b*/
      if ( v17 || v22 >= 0x40000 || (result = *(_DWORD **)(g_Shroud_CellArray + 4 * v22)) == 0 ) /*0x578a54*/
      {
        g_Map_GlobalCellIndex = v29; /*0x578a5c*/
        return g_CellClassArray; /*0x578a62*/
      }
    }
    else
    {
      v14 = v8 - a3 / 2; /*0x5789c6*/
      v15 = v7 - a3 / 2; /*0x5789c8*/
      v16 = v14 << 9; /*0x5789d0*/
      v17 = v15 + v16 < 0; /*0x5789d3*/
      v18 = v15 + v16; /*0x5789d3*/
      LOWORD(v28) = v15; /*0x5789d5*/
      HIWORD(v28) = v14; /*0x5789da*/
      if ( v17 || v18 >= 0x40000 || (result = *(_DWORD **)(g_Shroud_CellArray + 4 * v18)) == 0 ) /*0x5789f3*/
      {
        g_Map_GlobalCellIndex = v28; /*0x578a00*/
        return g_CellClassArray; /*0x578a06*/
      }
    }
  }
  return result; /*0x5788bc*/
}
}

// 0x578AC0
void MapClass::IncrementRedrawCounter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_578AC0(_BYTE *this)
{
  ++this->q1158; /*0x578ac0*/
}
}

// 0x57A0C0
char MapClass::InitTileData(MouseClass * aP0, int aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall MapClass::InitTileData(MouseClass *aP0, int aP3)
{
  MapClass *v2; // ecx
  MapClass *v3; // ebp
  int esi2; // esi
  AbstractClass *v5; // eax
  AbstractClass *v4; // ebx
  int v7; // esi
  AbstractClass *v6; // edi
  int v9; // esi
  int v10; // esi
  int i; // edi
  char *TileDataEntry; // eax
  IUnknown *v13; // eax
  IUnknown *v14; // edx
  char j; // bl
  MapClass *k; // eax
  IUnknown *m; // eax
  int v18; // edx
  IUnknown *n; // eax
  int v20; // edx
  char v22; // [esp+13h] [ebp-1h]

  v3 = v2; /*0x57a0c4*/
  Mouse::SetBounds((int)&stru_87C374[13428], 0); /*0x57a0ce*/
  v22 = 0; /*0x57a0d8*/
  if ( !g_MapTileArray ) /*0x57a0df*/
  {
    esi2 = unk_89C2DC * unk_89C2DC; /*0x57a0e7*/
    v5 = (AbstractClass *)__2_YAPAXI_Z(80 * unk_89C2DC * unk_89C2DC); /*0x57a0f1*/
    v4 = v5; /*0x57a0f6*/
    if ( v5 ) /*0x57a0fd*/
    {
      v7 = esi2 - 1; /*0x57a0ff*/
      v6 = v5; /*0x57a100*/
      if ( v7 >= 0 ) /*0x57a104*/
      {
        v9 = v7 + 1; /*0x57a106*/
        do /*0x57a112*/
        {
          TileData::Constructor(v6); /*0x57a109*/
          v6 = (AbstractClass *)((char *)v6 + 80); /*0x57a10e*/
          --v9; /*0x57a111*/
        }
        while ( v9 ); /*0x57a112*/
      }
      g_MapTileArray = v4; /*0x57a114*/
    }
    else
    {
      g_MapTileArray = 0; /*0x57a11c*/
    }
    v22 = 1; /*0x57a126*/
  }
  v10 = 0; /*0x57a131*/
  for ( i = unk_89C2DC * unk_89C2DC; v10 < i; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x57a138*/
    TileDataEntry = GetTileDataEntry(v10++); /*0x57a13f*/
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x57a157*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x57a15c*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x57a16c*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x57a17b*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  v13 = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x57a180*/
  for ( j = 1; v13; v13 = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]) ) /*0x57a191*/
  {
    if ( !j ) /*0x57a195*/
      break; /*0x57a195*/
    j = RecursiveCellClassNeighbourUpdate(v3, v14, v13, (int)aP0, aP3); /*0x57a1a6*/
  }
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x57a1bc*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x57a1c1*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x57a1d1*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x57a1e0*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  for ( k = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x57a1ec*/
        k;
        k = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374[13428]) )
  {
    if ( !j ) /*0x57a1f0*/
      break; /*0x57a1f0*/
    MapClass::BuildTileConnectivityGraph(v3, k, (IUnknown *)aP0, (IUnknown *)aP3); /*0x57a1f7*/
  }
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x57a215*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x57a21a*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x57a22a*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x57a239*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  for ( m = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x57a245*/
        m;
        m = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]) )
  {
    if ( !j ) /*0x57a249*/
      break; /*0x57a249*/
    j = GenerateMapClassCliffTransitions(v3, v18, m, (IUnknown *)1, (int)aP0, aP3); /*0x57a25c*/
  }
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x57a272*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x57a277*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x57a287*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x57a296*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  for ( n = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x57a2a2*/
        n;
        n = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]) )
  {
    if ( !j ) /*0x57a2a6*/
      break; /*0x57a2a6*/
    j = GenerateMapClassCliffTransitions(v3, v20, n, (IUnknown *)2, (int)aP0, aP3); /*0x57a2b9*/
  }
  *(_DWORD *)&stru_87C374[17948] = 0; /*0x57a2ca*/
  if ( *(_DWORD *)&stru_87C374[17944] ) /*0x57a2d6*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374[17944] + 32))( /*0x57a2dc*/
      *(_DWORD *)&stru_87C374[17944],
      1);
    *(_DWORD *)&stru_87C374[17944] = 0; /*0x57a2df*/
  }
  if ( v22 ) /*0x57a2ef*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x57a2f7*/
    g_MapTileArray = 0; /*0x57a2ff*/
  }
  return j; /*0x57a309*/
}
}

// 0x5856B0
char MapClass::InitializeTileData(MapClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::InitializeTileData(MapClass *this, MapClass *aP1)
{
  int v3; // esi
  AbstractClass *v4; // ebp
  AbstractClass *v5; // ebx
  int v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  IUnknown *v9; // eax
  IUnknown *v10; // edx
  char j; // bl
  MapClass *k; // eax
  IUnknown *m; // eax
  int v14; // edx
  IUnknown *n; // eax
  int v16; // edx
  int ii; // esi
  char *v18; // eax
  char v20; // [esp+13h] [ebp-5h]
  int i; // [esp+14h] [ebp-4h]

  Mouse::SetBounds((int)&stru_87C374[13428], 0); /*0x5856c0*/
  v20 = 0; /*0x5856ca*/
  if ( !g_MapTileArray ) /*0x5856d1*/
  {
    v3 = unk_89C2DC * unk_89C2DC; /*0x5856d9*/
    v4 = (AbstractClass *)__2_YAPAXI_Z(80 * unk_89C2DC * unk_89C2DC); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
      v5 = v4; /*0x5856f4*/
      if ( v3 - 1 >= 0 ) /*0x5856f8*/
      {
        do /*0x585708*/
        {
          TileData::Constructor(v5); /*0x5856ff*/
          v5 = (AbstractClass *)((char *)v5 + 80); /*0x585704*/
          --v3; /*0x585707*/
        }
        while ( v3 ); /*0x585708*/
      }
      g_MapTileArray = v4; /*0x58570a*/
    }
    else
    {
      g_MapTileArray = 0; /*0x585712*/
    }
    v20 = 1; /*0x58571c*/
  }
  v6 = 0; /*0x585726*/
  v7 = unk_89C2DC * unk_89C2DC; /*0x58572a*/
  for ( i = unk_89C2DC * unk_89C2DC; v6 < v7; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x58575d*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x58576a*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x585773*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x585782*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  v9 = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x585787*/
  for ( j = 1; v9; v9 = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
    j = RecursiveCellClassNeighbourUpdate(this, v10, v9, 0, 0); /*0x5857a7*/
  }
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x5857bd*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x5857c2*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x5857ce*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x5857dd*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  for ( k = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x5857e9*/
        k;
        k = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374[13428]) )
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(this, k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells(this, aP1, 1); /*0x58580f*/
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x58581f*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x585824*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x585830*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x58583f*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  for ( m = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x58584c*/
        m;
        m = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
    j = GenerateMapClassCliffTransitions(this, v14, m, (IUnknown *)1, 0, 0); /*0x585862*/
  }
  *(_DWORD *)&stru_87C374[13700] = *(_DWORD *)&stru_87C374[13672]; /*0x585878*/
  *(_DWORD *)&stru_87C374[13696] = 1; /*0x58587d*/
  *(_DWORD *)&stru_87C374[13704] = *(_DWORD *)&stru_87C374[13672] - 1; /*0x585889*/
  *(_DWORD *)&stru_87C374[13708] = (*(_DWORD *)&stru_87C374[13672] << 11) /*0x585898*/
                                           + *(_DWORD *)&stru_87C374[13744]
                                           + 4;
  for ( n = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x5858a4*/
        n;
        n = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374[13428]) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
    j = GenerateMapClassCliffTransitions(this, v16, n, (IUnknown *)2, 0, 0); /*0x5858bb*/
  }
  *(_DWORD *)&stru_87C374[17948] = 0; /*0x5858cc*/
  if ( *(_DWORD *)&stru_87C374[17944] ) /*0x5858d4*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374[17944] + 32))( /*0x5858d9*/
      *(_DWORD *)&stru_87C374[17944],
      1);
    *(_DWORD *)&stru_87C374[17944] = 0; /*0x5858dc*/
  }
  for ( ii = 0; ii < i; v18[74] = 1 ) /*0x5858ea*/
    v18 = GetTileDataEntry(ii++); /*0x5858ee*/
  if ( v20 ) /*0x585902*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x58590a*/
    g_MapTileArray = 0; /*0x585912*/
  }
  return j; /*0x585918*/
}
}

// 0x585D00
char MapClass::LoadTerrainData(MapClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::LoadTerrainData(_DWORD *this, MapClass *aP1)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  AbstractClass *v5; // ebx
  AbstractClass *v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int i; // eax
  Random *j; // esi
  int k; // esi
  char *v12; // eax
  char v14; // [esp+12h] [ebp-6h]
  char v15; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x585d12*/
  v3 = this; /*0x585d14*/
  v4 = unk_89C2DC * unk_89C2DC; /*0x585d16*/
  v14 = 1; /*0x585d1f*/
  v15 = 0; /*0x585d24*/
  if ( g_MapTileArray ) /*0x585d29*/
  {
    if ( v4 > 0 ) /*0x585d79*/
    {
      do /*0x585d89*/
      {
        TileDataEntry = GetTileDataEntry(v2++); /*0x585d7d*/
        TileDataEntry[74] = 1; /*0x585d83*/
      }
      while ( v2 < v4 ); /*0x585d89*/
    }
  }
  else
  {
    v5 = (AbstractClass *)__2_YAPAXI_Z(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
      v6 = v5; /*0x585d43*/
      if ( v4 - 1 >= 0 ) /*0x585d47*/
      {
        v7 = v4; /*0x585d49*/
        do /*0x585d57*/
        {
          TileData::Constructor(v6); /*0x585d4e*/
          v6 = (AbstractClass *)((char *)v6 + 80); /*0x585d53*/
          --v7; /*0x585d56*/
        }
        while ( v7 ); /*0x585d57*/
        v3 = this; /*0x585d59*/
      }
      g_MapTileArray = v5; /*0x585d5d*/
      v15 = 1; /*0x585d63*/
    }
    else
    {
      g_MapTileArray = 0; /*0x585d6a*/
      v15 = 1; /*0x585d70*/
    }
  }
  Mouse::SetBounds((int)&DataGlobal_87F7E8, 0); /*0x585d92*/
  DataGlobal_87F8E4.field_14 = g_Cell_PositionLUT; /*0x585da2*/
  DataGlobal_87F8E4.field_10 = (void *)1; /*0x585daf*/
  *(_DWORD *)DataGlobal_87F8E4[24] = g_Cell_PositionLUT - 1; /*0x585db8*/
  *(_DWORD *)&DataGlobal_87F8E4[28] = (g_Cell_PositionLUT << 11) + *(_DWORD *)&DataGlobal_87F8E4[64] + 4; /*0x585dc7*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x585dd3*/
  {
    if ( !v14 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v14 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, aP1, 0); /*0x585e02*/
  DataGlobal_87F8E4.field_14 = g_Cell_PositionLUT; /*0x585e12*/
  DataGlobal_87F8E4.field_10 = (void *)1; /*0x585e17*/
  *(_DWORD *)DataGlobal_87F8E4[24] = g_Cell_PositionLUT - 1; /*0x585e23*/
  *(_DWORD *)&DataGlobal_87F8E4[28] = (g_Cell_PositionLUT << 11) + *(_DWORD *)&DataGlobal_87F8E4[64] + 4; /*0x585e32*/
  for ( j = (Random *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x585e43*/
        j;
        j = (Random *)LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    if ( !v14 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !LOBYTE(j[17].Random_field_0x0C) && Cell::IsEmpty(j) ) /*0x585e59*/
      v14 = Terrain::SelectTileType((int)j, 0); /*0x585e6b*/
  }
  *(_DWORD *)&DataGlobal_87F8E4[4268] = 0; /*0x585e85*/
  if ( *(_DWORD *)&DataGlobal_87F8E4[4264] ) /*0x585e8d*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&DataGlobal_87F8E4[4264] + 32))( /*0x585e93*/
      *(_DWORD *)&DataGlobal_87F8E4[4264],
      1);
    *(_DWORD *)&DataGlobal_87F8E4[4264] = 0; /*0x585e96*/
  }
  for ( k = 0; k < v4; v12[74] = 1 ) /*0x585ea0*/
    v12 = GetTileDataEntry(k++); /*0x585ea4*/
  if ( v15 ) /*0x585eb8*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x585ec1*/
    g_MapTileArray = 0; /*0x585ec9*/
  }
  return v14; /*0x585ed3*/
}
}

// 0x586780
bool MapClass::IsAreaFree(int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall MapClass::IsAreaFree(_DWORD *this, int *a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v14; // [esp+0h] [ebp-8h]
  int v16; // [esp+Ch] [ebp+4h]
  int v17; // [esp+10h] [ebp+8h]

  if ( a3 == -1 ) /*0x58678e*/
    v14 = 0; /*0x58679d*/
  else
    v14 = 1 << a3; /*0x586797*/
  v4 = *a2; /*0x5867ac*/
  v5 = a2[2] + *a2; /*0x5867b4*/
  v16 = v4; /*0x5867b6*/
  if ( v4 >= v5 ) /*0x5867bc*/
    return MapClass::IsRectInBounds(this, a2, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = a2[1]; /*0x5867c2*/
    if ( v6 < a2[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
LABEL_20:
    v16 = ++v4; /*0x58686a*/
    if ( v4 >= a2[2] + *a2 ) /*0x58686e*/
      return MapClass::IsRectInBounds(this, a2, 1); /*0x58686e*/
  }
  LOWORD(v17) = v4; /*0x5867d4*/
  v7 = (__int16)v4; /*0x5867d9*/
  while ( 1 ) /*0x5867df*/
  {
    v8 = (__int16)v6 << 9; /*0x5867df*/
    v9 = v7 + v8 < 0; /*0x5867e2*/
    v10 = v7 + v8; /*0x5867e2*/
    HIWORD(v17) = v6; /*0x5867e4*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD **)(g_Shroud_CellArray + 4 * v10)) == 0 ) /*0x5867fd*/
    {
      v12 = g_CellClassArray; /*0x586807*/
      g_Map_GlobalCellIndex = v17; /*0x58680c*/
    }
    else
    {
      v12 = v11; /*0x5867ff*/
    }
    if ( CellClass::FindInfantry(v12, 0) /*0x586846*/
      || (v12[55] & v14) != 0
      || v12[17] != -1
      || v12[19]
      || *((_BYTE *)v12 + 284)
      || Cell::IsBridge(v12) )
    {
      return 0; /*0x586884*/
    }
    if ( ++v6 >= a2[3] + a2[1] ) /*0x58685a*/
    {
      v4 = v16; /*0x58685c*/
      goto LABEL_20; /*0x58685c*/
    }
  }
}
}

// 0x589370
char MapClass::AllocateCellDataBuffer(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::sub_589370(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // eax
  int v6; // edx
  char *v7; // ecx
  char *v8; // edi
  char *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  char *v15; // edx
  int v16; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x589373*/
  if ( !a2 ) /*0x58937f*/
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x589492*/
    return 1; /*0x589498*/
  }
  v5 = a3; /*0x589385*/
  this->q00C = 0; /*0x589389*/
  if ( a3 ) /*0x58938e*/
  {
    if ( a2 - 1 >= 0 ) /*0x5893d6*/
    {
      v9 = a3 + 2; /*0x5893d8*/
      v10 = a2; /*0x5893db*/
      do /*0x5893f8*/
      {
        *((_WORD *)v9 - 1) = 0; /*0x5893df*/
        *(_WORD *)v9 = 0; /*0x5893e3*/
        *((_WORD *)v9 + 1) = 0; /*0x5893e6*/
        *((_WORD *)v9 + 2) = 0; /*0x5893ea*/
        v9[6] = 0; /*0x5893ee*/
        *(_DWORD *)(v9 + 10) = -1; /*0x5893f1*/
        v9 += 16; /*0x5893f4*/
        --v10; /*0x5893f7*/
      }
      while ( v10 ); /*0x5893f8*/
      v5 = a3; /*0x5893fa*/
    }
  }
  else
  {
    v5 = (char *)__2_YAPAXI_Z(16 * a2); /*0x589396*/
    if ( !v5 ) /*0x5893a0*/
    {
      v8 = 0; /*0x5893cd*/
      goto LABEL_14; /*0x5893cf*/
    }
    if ( a2 - 1 >= 0 ) /*0x5893a7*/
    {
      v6 = a2; /*0x5893a9*/
      v7 = v5 + 2; /*0x5893aa*/
      do /*0x5893c9*/
      {
        *((_WORD *)v7 - 1) = 0; /*0x5893b0*/
        *(_WORD *)v7 = 0; /*0x5893b4*/
        *((_WORD *)v7 + 1) = 0; /*0x5893b7*/
        *((_WORD *)v7 + 2) = 0; /*0x5893bb*/
        v7[6] = 0; /*0x5893bf*/
        *(_DWORD *)(v7 + 10) = -1; /*0x5893c2*/
        v7 += 16; /*0x5893c5*/
        --v6; /*0x5893c8*/
      }
      while ( v6 ); /*0x5893c9*/
    }
  }
  v8 = v5; /*0x5893fe*/
LABEL_14:
  this->q00C = 1; /*0x589400*/
  if ( !v8 ) /*0x589406*/
    return 0; /*0x58940b*/
  if ( this->MapClass_field_0x4 ) /*0x589412*/
  {
    v12 = this->MapClass_field_0x8; /*0x589417*/
    if ( a2 < v12 ) /*0x58941c*/
      v12 = a2; /*0x58941e*/
    if ( v12 > 0 ) /*0x589422*/
    {
      v13 = 0; /*0x589424*/
      v16 = v12; /*0x589426*/
      do /*0x589456*/
      {
        v14 = (_DWORD *)(this->MapClass_field_0x4 + v13); /*0x58942f*/
        v15 = &v8[v13]; /*0x589431*/
        v13 += 16; /*0x589434*/
        *(_DWORD *)v15 = *v14; /*0x589439*/
        *((_DWORD *)v15 + 1) = v14[1]; /*0x58943e*/
        *((_DWORD *)v15 + 2) = v14[2]; /*0x589444*/
        *((_DWORD *)v15 + 3) = v14[3]; /*0x58944a*/
        --v16; /*0x589452*/
      }
      while ( v16 ); /*0x589456*/
      v3 = a2; /*0x589458*/
    }
    if ( this->IsAllocated ) /*0x58945c*/
    {
      __3_YAXPAX_Z(*((void **)this + 1)); /*0x589465*/
      this->MapClass_field_0x4 = 0; /*0x58946d*/
    }
  }
  this->MapClass_field_0x4 = v8; /*0x589478*/
  this->MapClass_field_0x8 = v3; /*0x58947e*/
  this->IsAllocated = a3 == 0; /*0x589481*/
  return 1; /*0x589408*/
}
}

// 0x589A60
char MapClass::AllocateMapDataBuffer(int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass::sub_589A60(void *this, int a2, int *a3)
{
  int v3; // edi
  int *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  _DWORD *v9; // esi
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // ebx
  int *v13; // esi
  _DWORD *v14; // ecx
  int v15; // eax
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x589a67*/
  if ( !a2 ) /*0x589a6f*/
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x589ba0*/
    goto LABEL_28; /*0x589ba0*/
  }
  this->q00C = 0; /*0x589a79*/
  if ( a3 ) /*0x589a7f*/
  {
    *a3 = a2; /*0x589ad2*/
    v9 = a3 + 1; /*0x589adc*/
    if ( a2 - 1 >= 0 ) /*0x589ade*/
    {
      v19 = a2; /*0x589ae1*/
      do /*0x589af8*/
      {
        MapClass::allocateMapBuffers(v9); /*0x589ae7*/
        v9 += 9; /*0x589af0*/
        --v19; /*0x589af4*/
      }
      while ( v19 ); /*0x589af8*/
    }
    v18 = a3 + 1; /*0x589afa*/
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(36 * a2 + 4); /*0x589a8c*/
    if ( v5 ) /*0x589a96*/
    {
      *v5 = a2; /*0x589a98*/
      v6 = v5 + 1; /*0x589a9a*/
      v7 = v5 + 1; /*0x589aa0*/
      if ( a2 - 1 >= 0 ) /*0x589aa4*/
      {
        v17 = a2; /*0x589aa7*/
        do /*0x589abe*/
        {
          MapClass::allocateMapBuffers(v7); /*0x589aad*/
          v7 += 9; /*0x589ab6*/
          --v17; /*0x589aba*/
        }
        while ( v17 ); /*0x589abe*/
      }
      v8 = v6; /*0x589ac0*/
      v18 = v6; /*0x589ac2*/
      goto LABEL_14; /*0x589ac6*/
    }
    v18 = 0; /*0x589ac8*/
  }
  v8 = v18; /*0x589afe*/
LABEL_14:
  this->q00C = 1; /*0x589b02*/
  if ( !v8 ) /*0x589b08*/
    return 0; /*0x589bbf*/
  if ( this->MapClass_field_0x4 ) /*0x589b0e*/
  {
    v10 = this->MapClass_field_0x8; /*0x589b15*/
    if ( a2 < v10 ) /*0x589b1a*/
      v10 = a2; /*0x589b1c*/
    if ( v10 > 0 ) /*0x589b20*/
    {
      v11 = v8 + 7; /*0x589b27*/
      v12 = -28 - (_DWORD)v8; /*0x589b2a*/
      v20 = v10; /*0x589b2c*/
      do /*0x589b5f*/
      {
        v13 = (_DWORD *)((char *)v11 + v12 + this->MapClass_field_0x4); /*0x589b38*/
        Radar::CopyDataArray(v11 - 7, v13); /*0x589b3b*/
        *((_WORD *)v11 - 2) = *((_WORD *)v13 + 12); /*0x589b44*/
        *v11 = v13[7]; /*0x589b4b*/
        v11[1] = v13[8]; /*0x589b54*/
        v11 += 9; /*0x589b57*/
        --v20; /*0x589b5b*/
      }
      while ( v20 ); /*0x589b5f*/
      v3 = a2; /*0x589b61*/
      v8 = v18; /*0x589b65*/
    }
    if ( this->IsAllocated ) /*0x589b69*/
    {
      v14 = (_DWORD *)this->MapClass_field_0x4; /*0x589b70*/
      if ( v14 ) /*0x589b75*/
        SubzoneConnectionVector::Destruct(v14, 3); /*0x589b79*/
      this->MapClass_field_0x4 = 0; /*0x589b7e*/
    }
  }
  this->MapClass_field_0x4 = v8; /*0x589b90*/
  this->MapClass_field_0x8 = v3; /*0x589b93*/
  this->IsAllocated = a3 == 0; /*0x589b96*/
LABEL_28:
  v15 = this->MapClass_field_0x8; /*0x589ba3*/
  if ( v15 < this->MapClass_field_0x10 ) /*0x589bab*/
    this->MapClass_field_0x10 = v15; /*0x589bad*/
  return 1; /*0x589bb0*/
}
}

// 0x589BD0
unsigned int * MapClass::allocateMapBuffers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_589BD0(_DWORD *this)
{
  this->q004 = 0; /*0x589bd6*/
  this->q008 = 0; /*0x589bd9*/
  this->q030 = 1; /*0x589bdc*/
  this->MovementZones = 0; /*0x589be0*/
  *this = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x589be3*/
  this->q014 = 10; /*0x589be9*/
  this->q010 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone((int)this); /*0x589bf3*/
  this->q030 = 0; /*0x589bf9*/
  this->q01C = 0; /*0x589bfd*/
  this->q020 = 0; /*0x589c00*/
  return this; /*0x589c05*/
}
}

// 0x594700
int MapClass::Cleanup(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_594700(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int i; // edi
  _DWORD *v5; // esi
  int v6; // eax
  int result; // eax
  int j; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int TileIndex; // eax
  _DWORD *v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v15 = a2; /*0x594710*/
  v14 = a1; /*0x594714*/
  if ( g_MapTileArray ) /*0x594718*/
  {
    v2 = unk_89C2DC * unk_89C2DC; /*0x594720*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x594725*/
    {
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 24) = -1; /*0x594733*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x59474d*/
  {
    v5 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
      v13 = v5; /*0x59477e*/
      v6 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&g_RandomMap_BuildObject, v6); /*0x59478f*/
      v5[10] = &vt_VectorClass_Cell; /*0x594797*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      __3_YAXPAX_Z(v5); /*0x5947a3*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5947bd*/
  result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5947c7*/
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
    v9 = *(__int16 *)(j + 36); /*0x5947d7*/
    v10 = *(__int16 *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > g_MapCellHeight_Value /*0x594828*/
      && v9 - v10 < g_MapCellHeight_Value
      && v10 - v9 < g_MapCellHeight_Value
      && v10 + v9 <= g_MapCellCount
      && *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(j + 36) + 20 * unk_89C2DC * *(__int16 *)(j + 38) + 14) == -1
      && !*(_DWORD *)(j + 76) )
    {
      v11 = v14; /*0x59482f*/
      TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, (__int16 *)(j + 36), v14, 0); /*0x59483c*/
      if ( TileIndex == v15 ) /*0x594847*/
        FloodFillRandomMapTerrain(j, v11, v15); /*0x59484e*/
    }
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x594858*/
  }
  return result; /*0x594868*/
}
}

// 0x599530
int MapClass::ProcessTile()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_599530(_DWORD *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  this->q304 = 0; /*0x599534*/
  this->q308 = 0; /*0x59953a*/
  if ( g_MapTileArray ) /*0x599548*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x59954b*/
    g_MapTileArray = 0; /*0x599553*/
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x599563*/
  {
    v2 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
      v6 = v2; /*0x599599*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v6); /*0x59959d*/
      if ( v3 != -1 && v3 < g_RandomMap_TileData && v3 < --g_RandomMap_TileData ) /*0x5995b8*/
      {
        do /*0x5995d0*/
        {
          ++v3; /*0x5995c0*/
          *((_DWORD *)g_RandomMap_TerrainState + v3 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v3); /*0x5995c4*/
        }
        while ( v3 < g_RandomMap_TileData ); /*0x5995d0*/
      }
      v4 = (void *)v2[11]; /*0x5995d2*/
      v2[10] = &vt_VectorClass_Cell; /*0x5995d5*/
      if ( v4 && *((_BYTE *)v2 + 53) ) /*0x5995e0*/
      {
        __3_YAXPAX_Z(v4); /*0x5995e6*/
        v2[11] = 0; /*0x5995ee*/
      }
      *((_BYTE *)v2 + 53) = 0; /*0x5995f2*/
      v2[12] = 0; /*0x5995f5*/
      __3_YAXPAX_Z(v2); /*0x5995f8*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59960f*/
  MapClass::PostProcessReveal(&DataGlobal_87F7E8, 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)&DataGlobal_87F8E4); /*0x599631*/
  return RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, 0); /*0x599640*/
}
}

// 0x5A0410
char MapClass::GrowLayer(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MapClass_GrowLayer(_BYTE *this, int a2, int a3, int a4)
{
  _BYTE *v4; // ebx
  int v5; // esi
  _DWORD *v6; // ebp
  int i; // eax
  int j; // esi
  int v9; // ecx
  _BYTE *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // eax
  __int16 v19; // cx
  int v20; // eax
  int v21; // ecx
  char *v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int m; // eax
  _DWORD *v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  int k; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  _BYTE *v36; // [esp+2Ch] [ebp-4h]

  v4 = this; /*0x5a041b*/
  v36 = this; /*0x5a041e*/
  v5 = a3; /*0x5a0427*/
  v6 = (_DWORD *)RandomMap::CellListAlloc(a2); /*0x5a042b*/
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a043b*/
    for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a044e*/
    {
      v35 = *(_DWORD *)(i + 36); /*0x5a0453*/
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v35 + 20 * unk_89C2DC * SHIWORD(v35) + 15) = 0; /*0x5a0478*/
    }
  }
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
      for ( j = v6[4] - 1; j >= 0; v10[283] = v4[780] ) /*0x5a0499*/
      {
        v9 = *(_DWORD *)(v6[1] + 4 * j); /*0x5a04a6*/
        v31 = v9; /*0x5a04a9*/
        if ( g_MapTileArray ) /*0x5a04ad*/
          *((_DWORD *)g_MapTileArray + 20 * (__int16)v9 + 20 * unk_89C2DC * SHIWORD(v31) + 14) = a4; /*0x5a04ca*/
        v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v31); /*0x5a04d8*/
        *((_DWORD *)v10 + 14) = 0; /*0x5a04dd*/
        v10[282] = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
        v11 = __2_YAPAXI_Z(0x18u); /*0x5a0509*/
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
          *v12 = &vt_DynamicVectorClass_Cell; /*0x5a0520*/
          v12[5] = 10; /*0x5a0526*/
          v12[4] = 0; /*0x5a052d*/
          v13 = v12; /*0x5a0530*/
        }
        else
        {
          v13 = 0; /*0x5a0534*/
        }
        v13[5] = v6[4]; /*0x5a0539*/
        v14 = v6[4] - 1; /*0x5a053f*/
        v35 = v14; /*0x5a0540*/
        if ( v14 >= 0 ) /*0x5a0544*/
        {
          v15 = g_MapCellHeight_Value; /*0x5a054a*/
          do /*0x5a0650*/
          {
            v16 = *(_DWORD *)(v6[1] + 4 * v14); /*0x5a0553*/
            v17 = 0; /*0x5a0556*/
            v32 = v16; /*0x5a0558*/
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
              v18 = v17 & 7; /*0x5a0560*/
              v19 = HIWORD(v32) + HIWORD(Direction_X_Offsets[v18]); /*0x5a057b*/
              LOWORD(v33) = v32 + LOWORD(Direction_X_Offsets[v18]); /*0x5a0580*/
              HIWORD(v33) = v19; /*0x5a0585*/
              v20 = v19; /*0x5a058d*/
              v21 = v19 + (__int16)v33; /*0x5a0590*/
              if ( v21 > v15 && (__int16)v33 - v20 < v15 && v20 - (__int16)v33 < v15 && v21 <= g_MapCellCount ) /*0x5a05b9*/
              {
                v22 = (char *)g_MapTileArray + 80 * (__int16)v33 + 80 * unk_89C2DC * v20; /*0x5a05d4*/
                if ( *((_DWORD *)v22 + 14) == a2 ) /*0x5a05d9*/
                {
                  if ( *((_DWORD *)v22 + 15) != v30 + 1 ) /*0x5a05e7*/
                  {
                    v23 = v13[2]; /*0x5a05e9*/
                    if ( v13[4] < v23 /*0x5a060e*/
                      || (*((_BYTE *)v13 + 13) || !v23)
                      && (v24 = v13[5], v24 > 0)
                      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v13 + 8))(v13, v23 + v24, 0) )
                    {
                      v25 = v13[4]; /*0x5a0615*/
                      v26 = v13[1]; /*0x5a0618*/
                      v13[4] = v25 + 1; /*0x5a061e*/
                      *(_DWORD *)(v26 + 4 * v25) = v33; /*0x5a0625*/
                    }
                    *((_DWORD *)v22 + 15) = v30 + 1; /*0x5a0628*/
                    v15 = g_MapCellHeight_Value; /*0x5a062b*/
                  }
                  v6 = v29; /*0x5a0631*/
                }
              }
              v17 = k + 1; /*0x5a0639*/
            }
            v14 = --v35; /*0x5a064b*/
          }
          while ( v35 >= 0 ); /*0x5a0650*/
        }
        if ( v6 ) /*0x5a065a*/
          (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x5a0663*/
        v29 = v13; /*0x5a0665*/
        v6 = v13; /*0x5a0669*/
        v4 = v36; /*0x5a066b*/
      }
      ++v30; /*0x5a067a*/
    }
    while ( v30 < a3 ); /*0x5a067e*/
    v5 = a3; /*0x5a0684*/
  }
  if ( v6 ) /*0x5a0688*/
    (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a069d*/
    for ( m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); m; m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a06ae*/
      *((_DWORD *)g_MapTileArray /*0x5a06d8*/
      + 20 * (__int16)*(_DWORD *)(m + 36)
      + 20 * unk_89C2DC * (__int16)HIWORD(*(_DWORD *)(m + 36))
      + 15) = 0;
  }
  return 1; /*0x5a06e5*/
}
}

// 0x5A17F0
int MapClass::FindPassableNeighbor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5A17F0()
{
  int result; // eax
  int i; // edi
  int v2; // eax
  _WORD *NeighbourContent; // esi
  _WORD *v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  __int16 v8; // dx
  __int16 v9; // si
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // edi
  __int16 v14; // dx
  __int16 v15; // si
  int v16; // ecx
  int v17; // [esp+4h] [ebp-1Ch]
  int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+14h] [ebp-Ch] BYREF
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a17fd*/
  result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a1807*/
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
    v2 = *(_DWORD *)(i + 56); /*0x5a1819*/
    if ( v2 >= unk_AA1020 && v2 < unk_AA1020 + 40 ) /*0x5a182f*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 4u); /*0x5a1842*/
      v4 = Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x5a184c*/
      if ( *(_DWORD *)(i + 56) == *((_DWORD *)NeighbourContent + 14) /*0x5a1867*/
        && *(_BYTE *)(i + 282) > *((_BYTE *)NeighbourContent + 282) )
      {
        v5 = SelectTerrainTileVariant(*(_DWORD *)(i + 56)); /*0x5a1872*/
        v6 = *(_DWORD *)(i + 56); /*0x5a1877*/
        v20 = v5; /*0x5a187a*/
        if ( v5 != v6 ) /*0x5a1880*/
        {
          v7 = *(_DWORD *)(*((_DWORD *)g_FrameCounter + v6) + 740); /*0x5a1897*/
          v8 = NeighbourContent[18] - *((unsigned __int8 *)NeighbourContent + 282) % v7; /*0x5a18b4*/
          LOWORD(v17) = v8; /*0x5a18bf*/
          v9 = NeighbourContent[19] - *((unsigned __int8 *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          HIWORD(v17) = v9; /*0x5a18c7*/
          v19 = v17; /*0x5a18d2*/
          if ( g_MapTileArray ) /*0x5a18d6*/
            v10 = *((_DWORD *)g_MapTileArray + 20 * v8 + 20 * unk_89C2DC * v9 + 14); /*0x5a18f2*/
          else
            v10 = -1; /*0x5a18d8*/
          PlaceMapSeedClassBuildings(v20, &v19, v10, -1); /*0x5a1901*/
        }
      }
      if ( *(_DWORD *)(i + 56) == *((_DWORD *)v4 + 14) && *(_BYTE *)(i + 282) > *((_BYTE *)v4 + 282) ) /*0x5a1922*/
      {
        v11 = SelectTerrainTileVariant(*(_DWORD *)(i + 56)); /*0x5a192d*/
        v12 = *(_DWORD *)(i + 56); /*0x5a1932*/
        if ( v11 != v12 ) /*0x5a1939*/
        {
          v13 = *(_DWORD *)(*((_DWORD *)g_FrameCounter + v12) + 740); /*0x5a194e*/
          v14 = v4[18] - *((unsigned __int8 *)v4 + 282) % v13; /*0x5a1969*/
          LOWORD(v18) = v14; /*0x5a1972*/
          v15 = v4[19] - *((unsigned __int8 *)v4 + 282) / v13; /*0x5a1977*/
          HIWORD(v18) = v15; /*0x5a197a*/
          v21 = v18; /*0x5a1985*/
          if ( g_MapTileArray ) /*0x5a1989*/
            v16 = *((_DWORD *)g_MapTileArray + 20 * v14 + 20 * unk_89C2DC * v15 + 14); /*0x5a19a5*/
          else
            v16 = -1; /*0x5a198b*/
          PlaceMapSeedClassBuildings(v11, &v21, v16, -1); /*0x5a19b2*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x5a19bc*/
  }
  return result; /*0x5a19ce*/
}
}

// 0x6D8260
unsigned int MapClass::TransformCoordToScreen(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MapClass::TransformCoordToScreen(int this, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int v7; // ecx
  float *v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  unsigned int result; // eax
  int v15; // esi
  int v16; // ebp
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // [esp+10h] [ebp-54h]
  int v22; // [esp+14h] [ebp-50h]
  int v23; // [esp+18h] [ebp-4Ch]
  int v24; // [esp+1Ch] [ebp-48h]
  __int16 v25; // [esp+20h] [ebp-44h]
  __int16 v26; // [esp+22h] [ebp-42h]
  int v27; // [esp+30h] [ebp-34h] BYREF
  int v28; // [esp+34h] [ebp-30h]
  _DWORD v29[2]; // [esp+38h] [ebp-2Ch] BYREF
  float v30; // [esp+40h] [ebp-24h] BYREF
  float v31; // [esp+44h] [ebp-20h]
  int v32; // [esp+48h] [ebp-1Ch]
  int v33; // [esp+4Ch] [ebp-18h] BYREF
  int v34; // [esp+50h] [ebp-14h]
  int v35; // [esp+54h] [ebp-10h]
  float v36[3]; // [esp+58h] [ebp-Ch] BYREF

  v3 = a3; /*0x6d8264*/
  v4 = *a3; /*0x6d826f*/
  v32 = 0; /*0x6d827b*/
  v6 = v4 + this->q0B0; /*0x6d828f*/
  v7 = a3[1] + this->q0B4; /*0x6d8296*/
  v27 = v6 - DSurface_ViewBounds; /*0x6d8298*/
  v28 = v7 - g_Map_VisibleRect; /*0x6d82a2*/
  v30 = (float)(v6 - DSurface_ViewBounds); /*0x6d82b1*/
  v31 = (float)(v7 - g_Map_VisibleRect); /*0x6d82bd*/
  v8 = TransformMatrix3x4Point(v36, (float *)(this + 3556), &v30); /*0x6d82c1*/
  v30 = *v8; /*0x6d82c8*/
  v31 = v8[1]; /*0x6d82d3*/
  v32 = *((_DWORD *)v8 + 2); /*0x6d82da*/
  v9 = Math::RoundToInt(v30); /*0x6d82e7*/
  v10 = Math::RoundToInt(v31); /*0x6d82e9*/
  v33 = v9; /*0x6d82f0*/
  v34 = v10; /*0x6d82f6*/
  v35 = 0; /*0x6d82fa*/
  if ( v10 < 0 ) /*0x6d82fe*/
  {
    v9 -= v10; /*0x6d8300*/
    v10 = 0; /*0x6d8302*/
    v33 = v9; /*0x6d8304*/
    v34 = 0; /*0x6d8308*/
  }
  if ( v9 < 0 ) /*0x6d830e*/
  {
    v33 = 0; /*0x6d8312*/
    v34 = v10 - v9; /*0x6d8316*/
  }
  v11 = *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v33) + 9); /*0x6d8329*/
  v12 = v3[2]; /*0x6d833c*/
  v26 = HIWORD(v11) + 3; /*0x6d8344*/
  v25 = v11 - 2; /*0x6d835d*/
  v13 = 0; /*0x6d8367*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v12) >> 32) >> 31; /*0x6d8369*/
  v15 = v12 / 60 + 7; /*0x6d836e*/
  v24 = v3[3] / 15 + 20; /*0x6d8372*/
  v23 = v15; /*0x6d8376*/
  if ( v24 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v16 = v13 + 1; /*0x6d8382*/
      LOWORD(v21) = v25 + v13 / 2; /*0x6d83a9*/
      HIWORD(v21) = v26 + (v13 + 1) / 2; /*0x6d83b4*/
      a3 = v21; /*0x6d83bf*/
      if ( v15 > 0 ) /*0x6d83c3*/
      {
        v22 = v15; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (__int16 *)&a3) ) /*0x6d83d7*/
          {
            v36[2] = 0.0; /*0x6d8417*/
            LODWORD(v36[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8; /*0x6d8433*/
            LODWORD(v36[1]) = (((SHIWORD(a3) << 8) + 128) / 256) << 8; /*0x6d8437*/
            v17 = Coord::To_ScreenRaw((int *)&v30, v36); /*0x6d843b*/
            v27 = *v17; /*0x6d8442*/
            v18 = this->q0B4; /*0x6d8446*/
            v19 = v17[1]; /*0x6d844c*/
            v20 = this->q0B0; /*0x6d844f*/
            v28 = v19; /*0x6d8455*/
            v29[1] = v18; /*0x6d845d*/
            v29[0] = v20; /*0x6d8466*/
            Vector2::Subtract(&v27, v29); /*0x6d846a*/
            v27 -= 30; /*0x6d8486*/
            CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a3); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(&v27, v3); /*0x6d8491*/
          }
          LOWORD(a3) = (_WORD)a3 + 1; /*0x6d8496*/
          --HIWORD(a3); /*0x6d849f*/
          --v22; /*0x6d84a5*/
        }
        while ( v22 ); /*0x6d84a9*/
        v15 = v23; /*0x6d84af*/
      }
      result = v24; /*0x6d84b3*/
      v13 = v16; /*0x6d84b7*/
    }
    while ( v16 < v24 ); /*0x6d84bb*/
  }
  return result; /*0x6d84c1*/
}
}

// 0x703590
unsigned int * MapClass::FindPlacementCellsAlt(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MapClass::FindPlacementCellsAlt(char *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // edx
  int eax6; // eax
  MouseClass *v7; // edi
  int TileIndex; // eax
  IUnknown *v11; // [esp+10h] [ebp-14h] BYREF
  int v12; // [esp+14h] [ebp-10h] BYREF
  _BYTE v13[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)((*(int (__thiscall **)(char *))(this->LevelAndPassability)(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( aP2 ) /*0x7035b9*/
    v5 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP2->field_0 + 72))(aP2, v13); /*0x7035c2*/
  else
    v5 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(this->q048)(this, v13); /*0x7035fd*/
  LOWORD(aP2) = *v5 / 256; /*0x7035d5*/
  HIWORD(aP2) = v5[1] / 256; /*0x7035e9*/
  v6 = *(_DWORD *)this; /*0x70362d*/
  v11 = aP2; /*0x70362f*/
  eax6 = (*(int (__thiscall **)(char *))(v6 + 132))(this); /*0x703635*/
  v7 = *(MouseClass **)(eax6 + 1460); /*0x70363b*/
  if ( v7 == (MouseClass *)-1 ) /*0x703644*/
  {
    TileIndex = -1; /*0x70365f*/
  }
  else
  {
    LOBYTE(eax6) = this->LevelAndPassabilityStruct2pointer_70; /*0x703646*/
    TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, (IUnknown *)&v11, (IUnknown *)v7, (IUnknown *)eax6); /*0x703658*/
  }
  aP2 = 0; /*0x703663*/
  aP1->field_0 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
                    &DataGlobal_87F7E8,
                    (unsigned __int8)this->LevelAndPassabilityStruct2pointer_70,
                    &v12,
                    (__int16 *)&v11,
                    v4,
                    TileIndex,
                    (int)v7,
                    (unsigned __int8)this->LevelAndPassabilityStruct2pointer_70,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&aP2,
                    0,
                    0);
  return &aP1->field_0; /*0x7036a7*/
}
}

// 0x7BCF50
int MapClass::isCellShrouded(unsigned short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7BCF50(_DWORD *this, unsigned __int16 a2)
{
  int v2; // eax
  int v3; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->q02C; /*0x7bcf58*/
  v5[0] = 0; /*0x7bcf60*/
  v5[1] = 0; /*0x7bcf64*/
  v2 = this->q028; /*0x7bcf68*/
  v3 = this->q014; /*0x7bcf6b*/
  v5[2] = v2; /*0x7bcf74*/
  return (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v3 + 20))(v3, v5, a2); /*0x7bcf83*/
}
}

// 0x430F30
char MapClass::isCellAccessible(int a2)
{
{
    int v2;
    char *i;
    v2 = 0;
    for ( i = this + 12 * a2; *(int *)i; i += 4 )
  {
    if ( ++v2 >= 3 )
    return 0;
  }
    return 1;
}
}

// 0x4758C0
char MapClass::loadTheaterINI(INIClass * aP1, char * a2, int a4)
{
{
    return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)&Theater_Array[112 * a4]);
}
}

// 0x48DC90
int MapClass::UnselectAll_ClearLimboLaunchers()
{
{
    int result;
    int v1;
    int v2;
    int *v3;
    while ( g_SelectionManager )
    (*(void (__thiscall **)(int))(**(int **)g_ObjectClass_CurrentCount + 336))(*(int *)g_ObjectClass_CurrentCount);
    Selection::SetCurrent(0);
    v3 = g_VisibilitySystem;
    result = DataGlobal_89C410;
    if ( DataGlobal_89C410 )
  {
    v1 = 8;
    do
    {
    v2 = 3;
    do
      {
    result = *v3;
    if ( *v3 )
    *(char *)(result + 12) &= ~2u;
    ++v3;
    --v2;
      }
    while ( v2 );
    --v1;
    }
    while ( v1 );
  }
    return result;
}
}

// 0x4ACAC0
int MapClass::ProcessVisibilityFlags()
{
{
    int i;
    MouseClass *j;
    int *v4;
    int v5;
    int k;
    int m;
    int *v8;
    short v10;
    short v11;
    short v12[2];
    for ( i = 0; i < 512; ++i )
  {
    for ( j = 0; (int)j < 512; j = (MouseClass *)((char *)(j) + 1) )
    {
    v10 = (short)j;
    v11 = i;
    if ( LayerClass::CoordinatesLegal(this, (IUnknown *)&v10) )
      {
    v12[0] = (short)j;
    v12[1] = i;
    v4 = CellCoord::To_CellObj(this, v12);
    v5 = v4[75];
    if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 )
    v4[80] |= 0x20u;
      }
    }
  }
    for ( k = 0; k < 512; ++k )
  {
    for ( m = 0; m < 512; ++m )
    {
    v10 = m;
    v11 = k;
    if ( LayerClass::CoordinatesLegal(this, (IUnknown *)&v10) && (*((char *)CellCoord::To_CellObj(this, &v10) + 320) & 0x20) != 0 )
      {
    v8 = CellCoord::To_CellObj(this, &v10);
    v8[80] &= ~0x20u;
    MapClass::RevealCell(this, (MouseClass *)&v10);
      }
    }
  }
    HouseClass::RevealShroudForAllies(0, 0);
    return this->MarkForRedraw(1);
}
}

// 0x4ACBC0
int MapClass::ProcessFogTransition()
{
{
    int i;
    int v3;
    int result;
    int v5;
    LayerClass::CellIteratorReset(this);
    for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) )
  {
    v3 = *(int *)(i + 320);
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 )
    *(int *)(i + 320) = v3 | 0x40;
  }
    HouseClass::RevealShroudForAllies(0, 1);
    LayerClass::CellIteratorReset(this);
    for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(this) )
  {
    if ( (*(char *)(result + 320) & 0x40) != 0 )
    {
    *(int *)(result + 320) &= ~0x40u;
    v5 = *(int *)(result + 36);
    CellClass::ProcessVisibility(this, (MouseClass *)&v5);
    }
  }
    return result;
}
}

// 0x4ACDA0
char MapClass::RevealCell(MouseClass * aP1)
{
{
    MouseClass *v2;
    IUnknown *v4;
    int v5;
    int i;
    int v7;
    MouseClass *v9;
    v2 = aP1;
    LOBYTE(v4) = LayerClass::CoordinatesLegal(this, (IUnknown *)aP1);
    if ( (char)v4 )
  {
    v4 = (IUnknown *)CellCoord::To_CellObj(this, (short *)v2);
    v5 = *(int *)&v4->__pad_11C[16];
    if ( (v5 & 8) != 0 )
    {
    *(int *)&v4->__pad_11C[16] = v5 & 0xFFFFFFE7;
    Tactical::AddCellToDrawList(*(int *)&DataGlobal_87F8E4[31296], v4);
    for ( i = 0; i < 8; ++i )
      {
    v7 = i & 7;
    LOWORD(v9) = LOWORD(v2->field_0) + *((short *)&Direction_X_Offsets.field_0 + 2 * v7);
    HIWORD(v9) = HIWORD(v2->field_0) + *((short *)&DataGlobal_89F68A + 2 * v7);
    aP1 = v9;
    v4 = (IUnknown *)CellCoord::To_CellObj(this, (short *)&aP1);
    if ( aP1 != (MouseClass *)v2->field_0 )
        {
    *(int *)&v4->__pad_11C[16] &= ~0x10u;
    LOBYTE(v4) = Tactical::AddCellToDrawList(*(int *)&DataGlobal_87F8E4[31296], v4);
        }
      }
    }
  }
    return (char)v4;
}
}

// 0x4AE4C0
int MapClass::UpdateLightingPostProcess()
{
{
    int result;
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    for ( result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
    re sult;
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) {
    TacticalMap::ComputeScreenTint(result);
  }
    return result;
}
}

// 0x4AEB10
int MapClass::GetScrollMode()
{
{
    int result;
    if ( !(unsigned char)this->MapClass_field_0x119C )
    return 0;
    result = this->MapClass_field_0x11A0;
    if ( !result )
    return 0;
    return result;
}
}

// 0x4F42F0
int MapClass::MarkForRedraw(int a2)
{
{
    int result;
    if ( g_TacticalClass_Instance )
    BYTE1(g_TacticalClass_Instance[863].__tail_0) = 1;
    result = a2;
    if ( a2 )
  {
    if ( this->IsInitialized != 2 )
    this->IsInitialized = a2;
    return MapClass::IncrementRedrawCounter(&DataGlobal_87F7E8);
  }
    return result;
}
}

// 0x5656D0
int MapClass::IsCellPassable(int a1, int a2)
{
{
    unsigned int v2;
    int *v3;
    v2 = (short)a2 + (SHIWORD(a2) << 9);
    if ( v2 >= 0x40000 || (v3 = *(int **)(*(int *)(a1 + 316) + 4 * v2)) == 0 )
  {
    v3 = &g_CellClassArray;
    g_Map_GlobalCellIndex = a2;
  }
    return (v3[75] >> 3) & 1;
}
}

// 0x565B00
int MapClass::FreeAllCells()
{
{
    int i;
    int v3;
    int j;
    int v5;
    int result;
    for ( i = 0; i < this->MaxWidth; ++i )
  {
    v3 = *(int *)(this->MaxLevel + 4 * i);
    if ( v3 )
    {
    *(int *)(v3 + 44) = 0;
    *(int *)(v3 + 48) = 0;
    }
  }
    for ( j = 0; j < this->MaxWidth; ++j )
  {
    v5 = *(int *)(this->MaxLevel + 4 * j);
    if ( v5 )
    {
    (*(void (__thiscall **)(int, int))(*(int *)(v5) + 32))(v5, 1);
    *(int *)(this->MaxLevel + 4 * j) = 0;
    }
  }
    ReturnFalse2(0, 1);
    result = this->MaxWidth;
    if ( result < 0x40000 )
  {
    (*(void (__thiscall **)(int *, int, int))(this->TotalValue + 8))(this + 78, 0x40000, 0);
    for ( result = 0; result < this->MaxWidth; *(int *)(this->MaxLevel + 4 * result - 4) = 0 )
    ++result;
  }
    return result;
}
}

// 0x57A320
int MapClass::BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3)
{
{
    MapClass *v4;
    int result;
    signed int v6;
    bool v7;
    MapClass *NeighbourContent;
    IUnknown *v9;
    int v10;
    char *CellData;
    v4 = aP1;
    result = *(int *)&aP1->__pad_30[8];
    if ( result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 12 )
  {
    result = Cell::GetTerrainMask(this, (IUnknown *)aP1, 2);
    if ( result == 199 || result == 124 || result == 241 || result == 31 || result == 198 || result == 108 || result == 177 || result == 27 )
    {
    v6 = 0;
    v7 = (char)aP3 == 0;
    *(int *)&aP1->__pad_30[8] = 0xFFFF;
    aP1->__pad_10C[14] = 0;
    if ( !v7 )
    *((int *)Tactical::GetCellData((short *)&aP1->__pad_18[12]) + 14) = aP2;
    do
      {
    NeighbourContent = (MapClass *)Cell::GetNeighbourContent(v4, v6);
    v9 = *(IUnknown **)&NeighbourContent->__pad_18[12];
    aP3 = v9;
    result = SHIWORD(v9);
    v10 = SHIWORD(v9) + (short)v9;
    if ( v10 > g_MapCellHeight_Value )
        {
    if ( (short)aP3 - SHIWORD(aP3) < g_MapCellHeight_Value )
          {
    result = SHIWORD(aP3) - (short)aP3;
    if ( result < g_MapCellHeight_Value && v10 <= g_MapCellCount )
            {
    aP3 = v9;
    CellData = Tactical::GetCellData((short *)&aP3);
    *((int *)(CellData) + 16) = -1;
    result = Cell::GetTerrainMask(this, (IUnknown *)NeighbourContent, 2);
    *((int *)(CellData) + 16) = result;
            }
          }
    v4 = aP1;
        }
    ++v6;
      }
    while ( v6 < 8 );
    }
  }
    return result;
}
}

// 0x57B790
int MapClass::TriggerEVA(IUnknown * aP0)
{
{
    int v1;
    BuildingTypeClass *v2;
    double v3;
    int result;
    unsigned int v5;
    int *v6;
    v1 = -5;
    do
  {
    v2 = (BuildingTypeClass *)-5;
    do
    {
    v3 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( (double)(short)-(short)v1 * (double)(short)-(short)v1 + (double)(short)-(short)v2 * (double)(short)-(short)v2));
    result = Math::RoundToInt(v3);
    if ( (short)result <= 5 )
      {
    v5 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9);
    if ( v5 < 0x40000 && (result = *(int *)(*(int *)&DataGlobal_87C374[13744] + 4 * v5)) != 0 )
        {
    v6 = (int *)result;
        }
    else
        {
    result = aP0->field_0;
    v6 = g_CellClassArray;
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0;
        }
    if ( v6 )
    result = CellClass::ReduceTiberium((int)v6, (InfantryTypeClass *)1);
      }
    v2 = (BuildingTypeClass *)((char *)(v2) + 1);
    }
    while ( (int)v2 <= 5 );
    ++v1;
  }
    while ( v1 <= 5 );
    return result;
}
}

// 0x581F50
unsigned int * MapClass::BuildSubzones()
{
{
    int v2;
    int *v3;
    v2 = 2;
    v3 = this + 47;
    do
  {
    (*(void (__thiscall **)(int *))(*v3 + 12))(v3);
    Subzone::BuildGraph(this, v2--);
    v3 -= 6;
  }
    while ( v2 >= 0 );
    return MapClass::AllocArrays(g_AudioInitFlag);
}
}

// 0x588BF0
MapClass * MapClass::Destru_vt04(char a2)
{
{
    MapClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MapClass *)this;
}
}

// 0x588DE0
unsigned int MapClass::initCellVectors(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (a2 - this->MapClass_field_0x4) / 0x24u;
    else
    return 0;
}
}

// 0x588EF0
int MapClass::InitCellVe_vt06(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}

// 0x589060
VectorClass * MapClass::InitCellVe_vt00(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CellClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}

// 0x5894A0
void MapClass::allocateCellArrays()
{
{
    if ( this->MapClass_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MapClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MapClass_field_0x8 = 0;
}
}

// 0x5894D0
int MapClass::FindSubzoneConnectionIndex(unsigned short * a2)
{
{
    int result;
    int v3;
    short *i;
    if ( !(unsigned char)this->MapClass_field_0xC )
    return 0;
    v3 = this->MapClass_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(short **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2) || i[3] != *((int*)(a2) + 3); i += 8 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// 0x589530
unsigned int MapClass::initSubzoneData(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (unsigned int)(a2 - this->MapClass_field_0x4) >> 4;
    else
    return 0;
}
}

// 0x589CA0
char MapClass::InitCellVe_vt01(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}

// 0x589CE0
char MapClass::InitCellVe_vt02(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->MapClass_field_0x4 )
      {
    v6 = this->MapClass_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MapClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MapClass_field_0x4 = 0;
        }
      }
    this->MapClass_field_0x4 = v4;
    this->MapClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->IsCellPassable();
    return 1;
  }
}
}

// 0x589D90
void MapClass::InitCellVe_vt03()
{
{
    if ( this->MapClass_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MapClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MapClass_field_0x8 = 0;
}
}

// 0x589DC0
int MapClass::InitCellVe_vt04(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MapClass_field_0xC )
    return 0;
    v3 = this->MapClass_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// 0x589E00
unsigned int MapClass::InitCellVe_vt05(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (unsigned int)(a2 - this->MapClass_field_0x4) >> 2;
    else
    return 0;
}
}

// 0x5A0090
MapClass * MapClass::SetObstruction(short * a0, MapClass * aP1)
{
{
    MapClass *result;
    if ( g_MapTileArray )
  {
    result = (MapClass *)(80 * (*a0 + g_MapCellWidth * *((int*)(a0) + 1)));
    *(int *)((char *)(g_MapTileArray) + (int)result + 56) = aP1;
  }
    return result;
}
}

// 0x5A00C0
int MapClass::GetTileDataField14(MapResourceClass * aP0)
{
{
    if ( g_MapTileArray )
    return *((int *)(g_MapTileArray) + 20 * *(short *)aP0->__tail_0 + 20 * g_MapCellWidth * *(short *)&aP0->__tail_0[2] + 14);
    else
    return -1;
}
}

// 0x5AC5A0
void MapClass::checkCellBounds()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MapClass_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MapClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MapClass_field_0x8 = 0;
}
}

// 0x5AC5D0
unsigned int MapClass::validateCellCoord(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (unsigned int)(a2 - this->MapClass_field_0x4) >> 2;
    else
    return 0;
}
}

// 0x5AD0C0
int MapClass::updatePathfindingGrid(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

}
// 0x5F60A0
int MapClass::SetCellOverlayFlag()
{
{
    int *v1;
    int v2;
    int result;
    int *v4;
    int v5;
    int *v6;
    if ( DataGlobal_AC13BC + Cell::GetGroundHeight(v6) <= v6[2] && (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v2 = v1[74];
    result = (int)(v1 + 74);
    *(int *)result = v2 | 0x40;
  }
    else
  {
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v5 = v4[73];
    result = (int)(v4 + 73);
    *(int *)result = v5 | 0x40;
  }
    return result;
}
}

// 0x5F6120
int MapClass::ClearCellOverlayFlag()
{
{
    int *v1;
    int v2;
    int result;
    int *v4;
    int v5;
    int *v6;
    if ( DataGlobal_AC13BC + Cell::GetGroundHeight(v6) <= v6[2] && (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v2 = v1[74];
    result = (int)(v1 + 74);
    *(int *)result = v2 & 0xFFFFFFBF;
  }
    else
  {
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v5 = v4[73];
    result = (int)(v4 + 73);
    *(int *)result = v5 & 0xFFFFFFBF;
  }
    return result;
}
}
