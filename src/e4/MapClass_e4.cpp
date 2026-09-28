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
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MapFile_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4112D0
namespace gamemd {
int MapClass::isLocationShrouded(unsigned short a2)
{
  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->MapClass_field_0x2C; /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  MapClass_field_0x28 = this->MapClass_field_0x28; /*0x4112e8*/
  MapClass_field_0x14 = this->MapClass_field_0x14; /*0x4112eb*/
  v5[2] = MapClass_field_0x28; /*0x4112f4*/
  return (*(int (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)MapClass_field_0x14 + 20))( /*0x411303*/
           MapClass_field_0x14,
           v5,
           a2);
}
} // namespace gamemd
// 0x42C1C0
namespace gamemd {
unsigned int * MapClass::AllocArrays()
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

  v1 = (void **)(&this->q01C6); /*0x42c1c8*/
  v2 = (char *)(&unk_87F810 - (_UNKNOWN *)this); /*0x42c1cb*/
  v3 = 3; /*0x42c1cd*/
  do /*0x42c27c*/
  {
    if ( *(v1 - 3) ) /*0x42c1d2*/
      RA2_OPDEL(*(v1 - 3)); /*0x42c1da*/
    v4 = (char *)RA2_OPNEW(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c1e9*/
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
      RA2_OPDEL(*v1); /*0x42c211*/
    v8 = (char *)RA2_OPNEW(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c220*/
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
      RA2_OPDEL(v1[3]); /*0x42c248*/
    result = RA2_OPNEW(4 * *(int *)((char *)v1 + (_DWORD)v2)); /*0x42c257*/
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
} // namespace gamemd
// 0x485130
namespace gamemd {
int MapClass::RemoveCellReference(int a2)
{
  void *v3; // edi
  int v4; // eax
  int v5; // eax
  int result; // eax
  _DWORD *MapClass_field_0x28; // esi
  int v8; // ecx
  int v9; // ecx

  v3 = (void *)a2; /*0x485134*/
  v4 = *(_DWORD *)&this->__pad_30[12]; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(_DWORD *)(v4 + 44); /*0x485143*/
    *(_DWORD *)&this->__pad_30[12] = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)&stru_87F5F0.__pad_E12[1346] + 16))( /*0x48515c*/
           &stru_87F5F0.__pad_E12[1346],
           &this->__pad_18[12]);
    if ( v5 != -1 && v5 < *(int *)&stru_87F5F0.__pad_E12[1362] ) /*0x48516c*/
    {
      --*(_DWORD *)&stru_87F5F0.__pad_E12[1362]; /*0x485171*/
      for ( ; /*0x485177*/
            v5 < *(int *)&stru_87F5F0.__pad_E12[1362];
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350]
                                                                                          + 4 * v5) )
      {
        ++v5; /*0x48517f*/
      }
    }
  }
  if ( this->MapClass_field_0x2C == v3 ) /*0x485194*/
    this->MapClass_field_0x2C = 0; /*0x485196*/
  if ( *(void **)this->__pad_30 == v3 ) /*0x4851a0*/
    *(_DWORD *)this->__pad_30 = 0; /*0x4851a2*/
  result = (int)this->MapClass_field_0x28; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      MapClass_field_0x28 = this->MapClass_field_0x28; /*0x4851bc*/
      a2 = (int)v3; /*0x4851bf*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*MapClass_field_0x28 + 16))(MapClass_field_0x28, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = MapClass_field_0x28[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( MapClass_field_0x28[4] = v9; /*0x4851e1*/
                result < MapClass_field_0x28[4];
                *(_DWORD *)(MapClass_field_0x28[1] + 4 * result - 4) = *(_DWORD *)(MapClass_field_0x28[1] + 4 * result) )
          {
            ++result; /*0x4851e6*/
          }
        }
      }
    }
  }
  return result; /*0x4851f5*/
}
} // namespace gamemd
// 0x4A95A0
namespace gamemd {
int MapClass::SetCellFlagsAlongPath(IUnknown * aP1, unsigned short * a2)
{
  int result; // eax
  _WORD *v4; // ebp
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v4 = aP1; /*0x4a95a2*/
  IDA_LOWORD(result) = *aP1; /*0x4a95aa*/
  if ( *aP1 != *(_WORD *)&stru_8A0390.bombVisible || aP1[1] != *(_WORD *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a95c2*/
  {
    v6 = *(__int16 **)&this->__pad_1170[12]; /*0x4a95c4*/
    v7 = (char)a2; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
      v8 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
      v9 = *v8; /*0x4a95e2*/
      IDA_LOWORD(v8) = v4[1] + v8[1]; /*0x4a95ed*/
      IDA_LOWORD(a2) = *v4 + v9; /*0x4a95f1*/
      IDA_HIWORD(a2) = (_WORD)v8; /*0x4a95f6*/
      aP1 = a2; /*0x4a9603*/
      result = LayerClass::CoordinatesLegal((LayerClass *)this, (__int16 *)&aP1); /*0x4a960a*/
      if ( (_BYTE)result ) /*0x4a9611*/
      {
        result = (int)CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&aP1); /*0x4a961a*/
        v10 = *(_DWORD *)(result + 300); /*0x4a961f*/
        if ( v7 ) /*0x4a9627*/
          *(_DWORD *)(result + 300) = v10 | 2; /*0x4a962c*/
        else
          *(_DWORD *)(result + 300) = v10 & 0xFFFFFFFD; /*0x4a9637*/
      }
    }
  }
  return result; /*0x4a963f*/
}
} // namespace gamemd
// 0x4AC960
namespace gamemd {
int MapClass::ToggleZoom(int a2)
{
  int result; // eax
  char v4; // bl
  void *MapClass_field_0x0; // edx
  int (__thiscall **v6)(MapClass *); // eax
  MapClass *v7; // [esp+0h] [ebp-8h]

  result = a2; /*0x4ac960*/
  v4 = this->__pad_11A4[12]; /*0x4ac96b*/
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
  if ( v4 != this->__pad_11A4[16] ) /*0x4ac98f*/
  {
    result = *(_DWORD *)&this->__pad_11A4[4]; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 && !MapClass::isCellAccessible((char *)&g_VisibilitySystem, (int)dword_A83D4C->Object_field_0x30) ) /*0x4ac9ad*/
        v4 = 0; /*0x4ac9b6*/
      MapClass_field_0x0 = this->MapClass_field_0x0; /*0x4ac9b8*/
      this->__pad_11A4[13] = 0; /*0x4ac9c0*/
      this->__pad_11A4[14] = 0; /*0x4ac9c7*/
      this->__pad_11A4[15] = 0; /*0x4ac9ce*/
      this->__pad_11A4[12] = 0; /*0x4ac9d5*/
      (*((void (__thiscall **)(MapClass *, _DWORD, _DWORD))MapClass_field_0x0 + 18))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        this->__pad_11A4[16] = 1; /*0x4ac9e3*/
        return MapClass::UnselectAll_ClearLimboLaunchers(v7); /*0x4ac9ea*/
      }
      else
      {
        v6 = (int (__thiscall **)(MapClass *))this->MapClass_field_0x0; /*0x4ac9f4*/
        this->__pad_11A4[16] = 0; /*0x4ac9f8*/
        return v6[20](this); /*0x4ac9ff*/
      }
    }
  }
  return result; /*0x4ac9ef*/
}
} // namespace gamemd
// 0x4AD7E0
namespace gamemd {
INIClass * * MapClass::SaveCellTagsToINI(char * a2)
{
  __int16 v3; // bp
  CellCoord *v4; // ebx
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
  MapClass *v16; // [esp+18h] [ebp-34h]
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
  Pipe v18; // [esp+30h] [ebp-1Ch] BYREF
  int v19; // [esp+48h] [ebp-4h]
  char *i; // [esp+50h] [ebp+4h]

  v3 = 0; /*0x4ad7ef*/
  v4 = (CellCoord *)this; /*0x4ad7f2*/
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((int *)a2, (int)&off_81FFF0, 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI(a2, &off_81FFF0, g_INI_Key_Theater, dword_A8B230[130].uniqueId); /*0x4ad81b*/
  INIClass::SetRect(a2, &off_81FFF0, (char *)g_Str_EVA_CannotDeployHere.Type, &v4[59]); /*0x4ad835*/
  INIClass::SetRect(a2, &off_81FFF0, &g_Str_EVA_CannotDeployHere.RussianVoice[3], &v4[63]); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints((ScenarioClass *)dword_A8B230, a2); /*0x4ad85b*/
  INIClass::ClearSection((int *)a2, (int)g_INI_Key_CellTags, 0); /*0x4ad86a*/
  for ( i = 0; (int)i < 512000; i += 1000 ) /*0x4ad86f*/
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
          wsprintfA(v17, "%d", &i[j]); /*0x4ad8c7*/
          INIClass::SetString(a2, g_INI_Key_CellTags, v17, (char *)(*(_DWORD *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = (CellCoord *)v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  v7 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x4ad92b*/
  v8 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v7; /*0x4ad932*/
  v9 = (*((int (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v8; /*0x4ad940*/
  v10 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad94d*/
          DSurface_Alternate,
          0,
          0);
  v18.Pipe_field_0x04 = 0; /*0x4ad956*/
  v18.Pipe_field_0x08 = 0; /*0x4ad95a*/
  *(_DWORD *)v18.__pad_0 = &(void*)(void*)&Pipe_vftable; /*0x4ad95e*/
  Buffer::Init((Buffer *)&v18.Pipe_field_0x0C, v10, v9); /*0x4ad966*/
  v19 = 0; /*0x4ad96f*/
  *(_DWORD *)v18.__pad_0 = &(void*)(void*)&BufferPipe_vftable; /*0x4ad979*/
  v11 = MapClass::DecompressCellData((MapClass *)&stru_87F5F0.__pad_58[416], (int)&v18); /*0x4ad990*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack, 0); /*0x4ad992*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack2, 0); /*0x4ad9a0*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack3, 0); /*0x4ad9af*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack4, 0); /*0x4ad9be*/
  INIClass::ClearSection((int *)a2, (int)aIsomappack5, 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
    v12 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad9e2*/
            DSurface_Alternate,
            0,
            0);
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)aIsomappack5, v12, v11); /*0x4ad9ee*/
    (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ad9fb*/
  }
  (*((void (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ada06*/
  Vector::Clear((int)&v18.Pipe_field_0x0C); /*0x4ada0d*/
  return Pipe::Dtor(&v18); /*0x4ada1b*/
}
} // namespace gamemd
// 0x4AEB30
namespace gamemd {
int MapClass::SetScrollMode(MouseClass * aP1)
{

  aP1 = aP1; /*0x4aeb30*/
  this->q11A0 = aP1; /*0x4aeb36*/
  IDA_LOBYTE(aP1) = aP1 != 0; /*0x4aeb3c*/
  this->q119C = aP1 != 0; /*0x4aeb3f*/
}
} // namespace gamemd
// 0x506D50
namespace gamemd {
int MapClass::CalcVisibleCellRange(int a1, int a2, VectorClass_flat * aP2, int * a3)
{
  int v4; // kr04_4
  int v5; // esi
  int v6; // ebx
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // esi
  double v13; // st7
  int *v14; // esi
  int v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int i; // [esp+1Ch] [ebp-24h]
  int v18; // [esp+20h] [ebp-20h]
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
  v7 = v5 + 6; /*0x506dc0*/
  v15 = a3[2] + *a3; /*0x506dc7*/
  if ( v15 >= v7 ) /*0x506dcb*/
    v15 = v7; /*0x506dcd*/
  v8 = (__int16)(*(_DWORD *)(a1 + 160) / 256); /*0x506dd1*/
  v9 = a3[1]; /*0x506dd4*/
  v21 = v8; /*0x506dd7*/
  v10 = v8 - 6; /*0x506de0*/
  if ( v8 - 6 <= v9 ) /*0x506de2*/
    v10 = a3[1]; /*0x506de4*/
  v18 = a3[3] + v9; /*0x506df0*/
  if ( v18 >= v8 + 6 ) /*0x506df4*/
    v18 = v8 + 6; /*0x506df6*/
  result = v18; /*0x506dfa*/
  for ( i = v10; v10 < v18; i = v10 ) /*0x506e04*/
  {
    if ( v6 < v15 ) /*0x506e0e*/
    {
      v12 = (v10 - v8) * (v10 - v8); /*0x506e16*/
      v20 = v12; /*0x506e19*/
      do /*0x506eba*/
      {
        v19 = Math::Sqrt((double)(v12 + (v6 - (__int16)(v4 / 256)) * (v6 - (__int16)(v4 / 256)))); /*0x506e3f*/
        if ( v19 < 6.0 ) /*0x506e51*/
        {
          v13 = v19; /*0x506e53*/
          if ( v19 < 1.0 ) /*0x506e75*/
            v13 = 1.0; /*0x506e79*/
          v14 = (int *)(aP2 + 4 * (v6 - *a3 + (i - a3[1]) * a3[2])); /*0x506ea1*/
          *v14 = Math::RoundToInt((double)a2 / ((v13 - 1.0) * 0.1 + 1.0) + (double)*v14); /*0x506ead*/
          v12 = v20; /*0x506eaf*/
        }
        ++v6; /*0x506eb7*/
      }
      while ( v6 < v15 ); /*0x506eba*/
      v10 = i; /*0x506ec0*/
      v8 = v21; /*0x506ec4*/
      v6 = v16; /*0x506ec8*/
    }
    result = v18; /*0x506ecc*/
    ++v10; /*0x506ed0*/
  }
  return result; /*0x506edd*/
}
} // namespace gamemd
// 0x547020
namespace gamemd {
ObjectClass * * MapClass::LoadFileData()
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
  CCFileClass v12; // [esp+Ch] [ebp-6Ch] BYREF
  int v13[3]; // [esp+64h] [ebp-14h] BYREF
  int v14; // [esp+70h] [ebp-8h]

  CCFileClass::Construct(&v12, &this->__pad_298[93]); /*0x547033*/
  Size = CCFileClass::GetSize(&v12); /*0x547041*/
  if ( *(_DWORD *)&this->__pad_5C[72] ) /*0x547043*/
    RA2_OPDEL(*(void **)&this->__pad_5C[72]); /*0x54704e*/
  v3 = (void *)RA2_OPNEW(Size); /*0x547057*/
  *(_DWORD *)&this->__pad_5C[72] = v3; /*0x547063*/
  CCFileClass::Read(&v12, v3, Size); /*0x54706b*/
  v4 = *(unsigned __int8 **)&this->__pad_5C[72]; /*0x547070*/
  this->__pad_5C[76] = 1; /*0x547078*/
  v5 = 0; /*0x54707f*/
  *(_DWORD *)&this->__pad_298[76] = *v4; /*0x547083*/
  v6 = v4[4]; /*0x547091*/
  v7 = v6 * *(_DWORD *)&this->__pad_298[76]; /*0x547094*/
  *(_DWORD *)&this->__pad_298[80] = v6; /*0x547099*/
  if ( v7 > 0 ) /*0x54709f*/
  {
    v8 = (unsigned int *)(v4 + 16); /*0x5470a1*/
    do /*0x5470cb*/
    {
      v9 = *v8; /*0x5470a4*/
      if ( *v8 ) /*0x5470a4*/
      {
        v10 = *(_DWORD *)&this->__pad_5C[72]; /*0x5470aa*/
        if ( v9 < v10 ) /*0x5470b2*/
          *v8 = v10 + v9; /*0x5470b6*/
      }
      ++v5; /*0x5470be*/
      ++v8; /*0x5470c6*/
    }
    while ( v5 < *(_DWORD *)&this->__pad_298[80] * *(_DWORD *)&this->__pad_298[76] ); /*0x5470cb*/
  }
  TerrainClass::InitTheatre(); /*0x5470cf*/
  *(_DWORD *)v12.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x5470d8*/
  v14 = 0; /*0x5470e0*/
  Vector::Clear((int)v13); /*0x5470e8*/
  *(_DWORD *)v12.CDFileClass = &off_7E1668; /*0x5470f1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x5470f9*/
  return Size; /*0x5470fe*/
}
} // namespace gamemd
// 0x554A80
namespace gamemd {
int MapClass::ScrollOnce(AbstractClass * aP1)
{
  int result; // eax

  IDA_LOBYTE(result) = this->Activated; /*0x554a80*/
  if ( (_BYTE)result ) /*0x554a85*/
  {
    this->Activated = 0; /*0x554a8b*/
    return TacticalClass::ScrollView(aP1); /*0x554a90*/
  }
  return result; /*0x554a95*/
}
} // namespace gamemd
// 0x5652C0
namespace gamemd {
void* MapClass::Destruct()
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

  *(_DWORD *)this = &(void*)(void*)&MapClass_vftable; /*0x5652c5*/
  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->somecount_4C ) /*0x5652df*/
  {
    RA2_OPDEL(*((void **)&this->q0086)); /*0x5652e9*/
    this->somecount_4C = 0; /*0x5652f1*/
  }
  v2 = (_DWORD *)this->q014; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3); /*0x565307*/
    RA2_OPDEL(v2); /*0x56530a*/
    this->q014 = 0; /*0x565312*/
  }
  if ( this->q070 ) /*0x565315*/
  {
    RA2_OPDEL(*((void **)&this->q0088)); /*0x56531d*/
    this->q070 = 0; /*0x565325*/
  }
  v3 = (_DWORD **)(&this->q0308); /*0x565328*/
  v12 = 3; /*0x56532e*/
  do /*0x565361*/
  {
    v4 = *v3; /*0x565336*/
    if ( *v3 ) /*0x565336*/
    {
      if ( *v4 ) /*0x56533d*/
        (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x565347*/
      RA2_OPDEL(v4); /*0x56534a*/
      *v3 = 0; /*0x565352*/
    }
    ++v3; /*0x565359*/
    --v12; /*0x56535d*/
  }
  while ( v12 ); /*0x565361*/
  v5 = (void *)this->q1160; /*0x565363*/
  this->q115C = &(void*)(void*)&VectorClass_Cell_vftable; /*0x565370*/
  if ( v5 && *(&this->u32_6F47) ) /*0x565378*/
  {
    RA2_OPDEL(v5); /*0x565381*/
    this->q1160 = 0; /*0x565389*/
  }
  *(&this->u32_6F47) = 0; /*0x56538f*/
  this->q1164 = 0; /*0x565395*/
  v6 = (void *)this->q13C; /*0x56539b*/
  this->MaxLevel = &(void*)(void*)&VectorClass_CellClass___vftable; /*0x5653a1*/
  if ( v6 && *(&this->q0805) ) /*0x5653af*/
  {
    RA2_OPDEL(v6); /*0x5653b8*/
    this->q13C = 0; /*0x5653c0*/
  }
  *(&this->q0805) = 0; /*0x5653c6*/
  this->q140 = 0; /*0x5653cc*/
  v7 = (void *)this->q0D8; /*0x5653d2*/
  this->q0D4 = &(void*)(void*)&VectorClass_Cell_vftable; /*0x5653d8*/
  if ( v7 && *(&this->q0585) ) /*0x5653e2*/
  {
    RA2_OPDEL(v7); /*0x5653eb*/
    this->q0D8 = 0; /*0x5653f3*/
  }
  *(&this->q0585) = 0; /*0x5653f9*/
  this->q0DC = 0; /*0x5653ff*/
  v8 = &this->u32_350; /*0x565405*/
  v9 = 3; /*0x56540b*/
  do /*0x56543a*/
  {
    v10 = (void *)*((_DWORD *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    *(_DWORD *)v8 = &(void*)(void*)&VectorClass_SubzoneTrackingStruct_vftable; /*0x565418*/
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
  this->ptr_50 = &(void*)(void*)&VectorClass_ZoneConnectionClass_vftable; /*0x565442*/
  if ( v11 && *(&this->outBuffer3) ) /*0x56544c*/
  {
    RA2_OPDEL(v11); /*0x565452*/
    this->q054 = 0; /*0x56545a*/
  }
  *(&this->outBuffer3) = 0; /*0x56545d*/
  this->q058 = 0; /*0x565460*/
  *(_DWORD *)this = &off_7EA6FC; /*0x565463*/
}
} // namespace gamemd
// 0x565800
namespace gamemd {
VectorClass_flat * * MapClass::Destru_vt05()
{
  MapClass *v1; // ebp
  int MapClass_field_0x0; // eax
  HashVector_UInt **v3; // eax
  HashVector_UInt **v4; // edi
  HashVector_UInt *v5; // eax
  HashVector_UInt *v6; // ebp
  HashVector_UInt *v7; // esi
  int v8; // ebx
  HashVector_UInt *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  char *v13; // esi
  SubzoneHashVector **v14; // eax
  SubzoneHashVector **v15; // edi
  SubzoneHashVector *v16; // eax
  SubzoneHashVector *v17; // ebp
  SubzoneHashVector *v18; // esi
  int v19; // ebx
  SubzoneHashVector *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  GScreenClass *v25; // [esp+0h] [ebp-20h]
  char *v27; // [esp+14h] [ebp-Ch]
  char *v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x565806*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Add(v25); /*0x56580d*/
  *(_DWORD *)&v1->__pad_144[8] = 512; /*0x565819*/
  *(_DWORD *)&v1->__pad_144[12] = 512; /*0x56581f*/
  MapClass_field_0x0 = v1->MapClass_field_0x0; /*0x565825*/
  *(_DWORD *)&v1->__pad_144[16] = 0x40000; /*0x565828*/
  (*(void (__thiscall **)(MapClass *))(MapClass_field_0x0 + 88))(v1); /*0x565832*/
  if ( v1->MapClass_field_0x14 ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = (HashVector_UInt **)RA2_OPNEW(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = (HashVector_UInt *)Cell::DecodeFlags; /*0x56585e*/
    v3[2] = (HashVector_UInt *)256; /*0x565865*/
    v3[3] = (HashVector_UInt *)20; /*0x56586c*/
    v5 = (HashVector_UInt *)RA2_OPNEW(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = (HashVector_UInt)256; /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        *v7 = (HashVector_UInt)&(void*)(void*)&DynamicVectorClass_HashObject_unsigned_int_unsigned_int_vftable; /*0x565896*/
        v7[5] = (HashVector_UInt)10; /*0x56589c*/
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
    v10 = (int)v4[2]; /*0x5658bf*/
    *v4 = v9; /*0x5658c2*/
    v11 = 0; /*0x5658c4*/
    if ( v10 > 0 ) /*0x5658c8*/
    {
      v12 = 0; /*0x5658ca*/
      do /*0x5658db*/
      {
        ++v11; /*0x5658ce*/
        (*v4)[v12 + 5] = (HashVector_UInt)20; /*0x5658cf*/
        v12 += 6; /*0x5658d6*/
      }
      while ( v11 < (int)v4[2] ); /*0x5658db*/
      v1->MapClass_field_0x14 = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  v1->MapClass_field_0x14 = (int)v4; /*0x5658e9*/
  LABEL_14:
  v13 = &v1->__pad_5C[48]; /*0x5658f3*/
  v27 = &v1->__pad_5C[36]; /*0x5658ff*/
  v28 = &v1->__pad_5C[48]; /*0x565903*/
  v29 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v13 + 12))(v13); /*0x565913*/
    v14 = (SubzoneHashVector **)RA2_OPNEW(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = (SubzoneHashVector *)Cell::DecodeFlags; /*0x56592f*/
      v14[2] = (SubzoneHashVector *)256; /*0x565936*/
      v14[3] = (SubzoneHashVector *)20; /*0x56593d*/
      v16 = (SubzoneHashVector *)RA2_OPNEW(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = (SubzoneHashVector)256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          *v18 = (SubzoneHashVector)&(void*)(void*)&DynamicVectorClass_HashObject_unsigned_int_SubzoneConnectionStruct_vftable; /*0x565967*/
          v18[5] = (SubzoneHashVector)10; /*0x56596d*/
          v18[4] = 0; /*0x565974*/
          v18 += 6; /*0x56597b*/
          --v19; /*0x56597e*/
        }
        while ( v19 ); /*0x56597f*/
        v13 = v28; /*0x565981*/
        v20 = v17; /*0x565985*/
        v1 = this; /*0x565987*/
      }
      else
      {
        v20 = 0; /*0x565992*/
      }
      v21 = (int)v15[2]; /*0x565994*/
      *v15 = v20; /*0x565997*/
      v22 = 0; /*0x565999*/
      if ( v21 > 0 ) /*0x56599d*/
      {
        v23 = 0; /*0x56599f*/
        do /*0x5659b0*/
        {
          ++v22; /*0x5659a3*/
          (*v15)[v23 + 5] = (SubzoneHashVector)20; /*0x5659a4*/
          v23 += 6; /*0x5659ab*/
        }
        while ( v22 < (int)v15[2] ); /*0x5659b0*/
      }
    }
    else
    {
      v15 = 0; /*0x5659b4*/
    }
    v13 += 24; /*0x5659ba*/
    v28 = v13; /*0x5659bd*/
    *(_DWORD *)v27 = v15; /*0x5659c1*/
    v27 += 4; /*0x5659c6*/
    --v29; /*0x5659cf*/
  }
  while ( v29 ); /*0x5659d3*/
  memset(v1->__pad_18, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}
} // namespace gamemd
// 0x5659F0
namespace gamemd {
void MapClass::Destru_vt07()
{
  char *v2; // edx
  int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int v6; // eax

  Debug::Log(); /*0x5659fa*/
  Event::Dispatch(); /*0x565a02*/
  MapClass::isCellShrouded((MapClass *)g_ZBufferDescriptor, 0xFFFFu); /*0x565a12*/
  MapClass::isLocationShrouded((MapClass *)dword_87E8A4, 0x7Fu); /*0x565a1f*/
  Event::Dispatch(); /*0x565a24*/
  VectorCursor_uint_DynamicVectorClass_uint____13::Remove(); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  v2 = &this->__pad_144[20]; /*0x565a35*/
  v3 = 256; /*0x565a3b*/
  do /*0x565a76*/
  {
    v4 = *(_DWORD *)v2; /*0x565a40*/
    v5 = *(_DWORD *)v2 == -1; /*0x565a47*/
    *((_DWORD *)v2 + 3) = dword_ABD480; /*0x565a4a*/
    if ( !v5 ) /*0x565a4d*/
    {
      v6 = *((_DWORD *)v2 + 2); /*0x565a4f*/
      if ( v4 != -1 ) /*0x565a55*/
      {
        if ( (int)dword_A8ED84 - v4 >= v6 ) /*0x565a61*/
          v6 = 0; /*0x565a67*/
        else
          v6 -= (int)dword_A8ED84 - v4; /*0x565a63*/
      }
      *((_DWORD *)v2 + 2) = v6; /*0x565a69*/
      *(_DWORD *)v2 = -1; /*0x565a6c*/
    }
    v2 += 16; /*0x565a72*/
    --v3; /*0x565a75*/
  }
  while ( v3 ); /*0x565a76*/
  *(_DWORD *)&this->__pad_144[4] = 13; /*0x565a7d*/
  this->__pad_1140[24] = 0; /*0x565a87*/
  Debug::Log(); /*0x565a8e*/
}
} // namespace gamemd
// 0x565AA0
namespace gamemd {
int MapClass::InitCellVector()
{
  char *v2; // ecx
  int result; // eax

  v2 = &this->__pad_134[4]; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    *((_DWORD *)v2 + 1) = 0; /*0x565aad*/
    *((_DWORD *)v2 + 2) = 0; /*0x565ab4*/
    v2[12] = 1; /*0x565abb*/
    v2[13] = 0; /*0x565abf*/
    *(_DWORD *)v2 = &(void*)(void*)&VectorClass_CellClass___vftable; /*0x565ac3*/
  }
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)v2 + 8))(v2, *(_DWORD *)&this->__pad_144[16], 0); /*0x565ad4*/
  for ( result = 0; result < *(_DWORD *)&this->__pad_144[16]; *((_DWORD *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565ae1*/
    ++result; /*0x565ae9*/
  return result; /*0x565afc*/
}
} // namespace gamemd
// 0x565BC0
namespace gamemd {
unsigned int * MapClass::InitAllCells()
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  _DWORD *result; // eax
  CellClass *v6; // ecx

  v2 = 0; /*0x565bc6*/
  v3 = 0; /*0x565bc8*/
  *(_DWORD *)this->__pad_134 = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < this->MapClass_field_0x140 ) /*0x565bdb*/
      {
        result = this->MapClass_field_0x13C; /*0x565bdd*/
        v6 = (CellClass *)result[v3]; /*0x565be3*/
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
} // namespace gamemd
// 0x5673A0
namespace gamemd {
int MapClass::RevealArea0(IUnknown * aP1, MouseClass * aP2, HouseClass * aP3, MouseClass * aP4, HouseClass * aP5, char a7, char a8, char a9)
{
  double v9; // st7
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int result; // eax
  void *MapClass_field_0xF4; // ecx
  int v16; // edx
  int v17; // esi
  int v18; // eax
  void *v19; // edi
  int v20; // eax
  int v21; // esi
  char *v22; // ecx
  __int16 v23; // ax
  __int16 v24; // cx
  void *v25; // edx
  int v26; // esi
  unsigned int v27; // ecx
  int *v28; // ecx
  int *v29; // edi
  unsigned int v30; // eax
  int *v31; // eax
  int v32; // ecx
  void *v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  double v38; // [esp+0h] [ebp-5Ch]
  char *v39; // [esp+18h] [ebp-44h]
  int v40; // [esp+1Ch] [ebp-40h]
  int i; // [esp+20h] [ebp-3Ch]
  int v42; // [esp+24h] [ebp-38h]
  int v43; // [esp+24h] [ebp-38h]
  int v44; // [esp+2Ch] [ebp-30h]
  __int16 v45; // [esp+30h] [ebp-2Ch]
  __int16 v46; // [esp+32h] [ebp-2Ah]
  __int16 v47[4]; // [esp+38h] [ebp-24h] BYREF
  int v48; // [esp+40h] [ebp-1Ch]
  __int16 v49; // [esp+48h] [ebp-14h]
  __int16 v50; // [esp+4Ah] [ebp-12h]
  int v51; // [esp+50h] [ebp-Ch] BYREF
  int v52; // [esp+54h] [ebp-8h]
  int v53; // [esp+58h] [ebp-4h]
  int *v54; // [esp+60h] [ebp+4h]
  int *v55; // [esp+60h] [ebp+4h]
  char v56; // [esp+6Ch] [ebp+10h]

  v44 = aP1[2] / g_MissionQueueFrame.briefing[272]; /*0x5673b7*/
  v51 = *aP1; /*0x5673bf*/
  v52 = aP1[1]; /*0x5673c6*/
  v53 = aP1[2]; /*0x5673cd*/
  v11 = ZCoordToScreenY(v53); /*0x5673d1*/
  v51 += (((unsigned int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 31) /*0x5673f8*/
        + ((int)(((unsigned __int64)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
  v12 = ZCoordToScreenY(v53); /*0x5673fc*/
  v52 += (((unsigned int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 31) /*0x56742a*/
        + ((int)(((unsigned __int64)(2004318071LL * v12) >> 32) - v12) >> 4)) << 8;
  v47[0] = *aP1 / 256; /*0x56744d*/
  v13 = v51 / 256; /*0x56745e*/
  v45 = v51 / 256; /*0x567467*/
  v46 = v52 / 256; /*0x56746c*/
  v47[1] = aP1[1] / 256; /*0x567475*/
  v49 = v45 - v47[0] - 2; /*0x56749b*/
  v50 = v46 - v47[1] - 2; /*0x5674a7*/
  result = v46; /*0x5674af*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x5674b2*/
  v16 = v46 + v45; /*0x5674b8*/
  if ( v16 <= (int)MapClass_field_0xF4 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v45 - v46 >= (int)MapClass_field_0xF4 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v46 - v45; /*0x5674cf*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = *(_DWORD *)this->__pad_F8; /*0x5674d9*/
  if ( v16 > (int)MapClass_field_0xF4 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = aP2; /*0x5674ea*/
  if ( !aP2 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( aP2 >= 11 ) /*0x5674f9*/
    aP2 = 10; /*0x567500*/
  v39 = &g_MissionQueueFrame.waypoints[2150]; /*0x567512*/
  v54 = (int *)&g_MissionQueueFrame.waypoints[822]; /*0x56751a*/
  v17 = dword_7ED3D0[aP2]; /*0x567528*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) && aP4 && aP2 > 2 ) /*0x56753e*/
  {
    v18 = dword_7ED3C4[aP2]; /*0x567540*/
    v17 -= v18; /*0x567547*/
    v39 = (char *)(4 * v18 + 11261072); /*0x567557*/
    v54 = (int *)(4 * v18 + 11259744); /*0x56755b*/
  }
  v19 = (void *)aP3; /*0x567563*/
  v55 = v54 - 1; /*0x56756c*/
  if ( !aP3 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = (int)dword_A83D4C; /*0x567572*/
  if ( !dword_A83D4C ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( aP3 != dword_A83D4C ) /*0x56757d*/
  {
    if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & *((_DWORD *)aP3 + 5433)) != 0 ) /*0x567595*/
    {
      v19 = (void *)dword_A83D4C; /*0x567597*/
      aP3 = dword_A83D4C; /*0x567599*/
    }
    if ( v19 != (void *)dword_A83D4C ) /*0x56759f*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v19, (void *)dword_A83D4C) /*0x5675b2*/
        && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6119) )
      {
        result = (int)dword_A83D4C; /*0x5675bc*/
        v19 = (void *)dword_A83D4C; /*0x5675c1*/
        aP3 = dword_A83D4C; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
  LABEL_21:
      result = (int)dword_A83D4C; /*0x5675c9*/
  LABEL_22:
      if ( v19 != (void *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x5675f1*/
    || !dword_A8B23C
    || (v56 = 1, (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
  {
    v56 = 0; /*0x5675fd*/
  }
  v20 = v17; /*0x567602*/
  v21 = v17 - 1; /*0x567604*/
  if ( v20 ) /*0x567607*/
  {
    for ( i = v21 + 1; i; --i ) /*0x56760e*/
    {
      v22 = v39; /*0x56761a*/
      v39 += 4; /*0x56761f*/
      v23 = *(_WORD *)v22 + v13; /*0x567626*/
      v24 = v46 + *((_WORD *)v22 + 1); /*0x56762d*/
      IDA_LOWORD(v48) = v23; /*0x567635*/
      ++v55; /*0x56763a*/
      v25 = this->MapClass_field_0xF4; /*0x56763e*/
      IDA_HIWORD(v48) = v24; /*0x567644*/
      *(_DWORD *)v47 = v48; /*0x567653*/
      v26 = v24 + v23; /*0x567657*/
      if ( v26 > (int)v25 ) /*0x56765c*/
      {
        if ( v23 - v24 >= (int)v25 || v24 - v23 >= (int)v25 ) /*0x567672*/
        {
          IDA_LOWORD(v13) = v45; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        IDA_LOWORD(v13) = v45; /*0x56767e*/
        if ( v26 > (int)v25 + 2 * *(_DWORD *)this->__pad_F8 ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v23 - v45) > aP2 ) /*0x56769e*/
          continue; /*0x56769e*/
        v42 = (__int16)(IDA_HIWORD(v48) - v46); /*0x5676bd*/
        __asm { fild [esp+5Ch+var_38] } /*0x5676c1*/
        v43 = (__int16)(v48 - v45); /*0x5676c5*/
        __asm /*0x5676c9*/
        {
          fild [esp+5Ch+var_38]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+5Ch+var_5C]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v38); /*0x5676de*/
        if ( (__int16)Math::RoundToInt(v9) > aP2 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v47[0] + (v47[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = (int *)*((_DWORD *)this->MapClass_field_0x13C + v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v47; /*0x567724*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x567729*/
        }
        if ( a8 && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6126) ) /*0x56773c*/
        {
          IDA_LOWORD(v40) = v47[0] - v49 + *(_WORD *)v55; /*0x567765*/
          IDA_HIWORD(v40) = v47[1] - v50 + *((_WORD *)v55 + 1); /*0x56776a*/
          v30 = (__int16)v40 + (IDA_SHIWORD(v40) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = &g_MissionQueueFrame.briefing[130]; /*0x567794*/
            g_MissionQueueFrame.briefing[139] = v40; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v44 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((__int16 *)v29 + 18); /*0x5677bf*/
        v33 = (void *)*((__int16 *)v29 + 19); /*0x5677c3*/
        v29[80] &= ~0x40u; /*0x5677cc*/
        if ( !v56 ) /*0x5677d2*/
        {
  LABEL_54:
          if ( a7 ) /*0x567827*/
          {
            v35 = v29[80]; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal((DisplayClass *)&stru_87F5F0.__pad_58[416], v47, (int)aP3); /*0x56784f*/
          }
          else
          {
            v36 = v29[75]; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !aP5 ) /*0x567878*/
              {
                if ( a9 ) /*0x567880*/
                  Conditions::CheckResult3((RadarClass *)v47, (int)aP3, 0); /*0x567893*/
                else
                  CellClass::Unshroud((CellClass *)v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == (char *)this->MapClass_field_0xF4 + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == (char *)this->MapClass_field_0xF4 + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = *(_DWORD *)this->__pad_F8; /*0x567802*/
        if ( v32 != v34 + 13 || v33 != (char *)this->MapClass_field_0xF4 + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(&v51, 0, aP2 + 3, 0); /*0x5678cf*/
}
} // namespace gamemd
// 0x5683C0
namespace gamemd {
void MapClass::FillRevealBuffer(MouseClass * aP1, IUnknown * aP2)
{
  int result; // eax
  MapClass *v4; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  _DWORD *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
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
  _DWORD *v22; // ecx
  int *v23; // eax
  int i; // ecx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // edx
  int *v28; // eax
  _DWORD *v29; // edx
  int v30; // edx
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+10h] [ebp-8A0h]
  int v33; // [esp+10h] [ebp-8A0h]
  int v34; // [esp+14h] [ebp-89Ch]
  int v35; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v38; // [esp+20h] [ebp-890h]
  _BYTE *v39; // [esp+24h] [ebp-88Ch]
  int v40; // [esp+28h] [ebp-888h]
  _WORD *v41; // [esp+2Ch] [ebp-884h]
  _BYTE v42[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v43[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x5683d1*/
  if ( !aP2 ) /*0x5683d9*/
    return result; /*0x5683d9*/
  MapClass_field_0x140 = this->MapClass_field_0x140; /*0x5683e9*/
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)aP2 + 136))(aP2); /*0x5683ed*/
  if ( !*(_BYTE *)(result + 565) ) /*0x5683f3*/
    return result; /*0x5683f3*/
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)aP2 + 120))(aP2); /*0x568405*/
  if ( result != 2 ) /*0x56840b*/
    return result; /*0x56840b*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)aP2 + 264))(aP2, 0); /*0x56841c*/
  sub_48DEE0(v5, 32, (int)v42); /*0x568429*/
  v6 = v42; /*0x56842e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568440*/
  {
    IDA_LOWORD(v34) = *aP1 + *v6; /*0x56845b*/
    IDA_HIWORD(v34) = aP1[1] + v6[1]; /*0x568463*/
    v7 = (IDA_SHIWORD(v34) << 9) + (__int16)v34; /*0x56846e*/
    if ( v7 >= 0 /*0x568489*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->MapClass_field_0x13C, MapClass_field_0x13C[v7]) )
    {
      if ( v7 >= 0x40000 ) /*0x56849e*/
      {
        g_MissionQueueFrame.briefing[139] = v34; /*0x5684a6*/
        v9 = &g_MissionQueueFrame.briefing[130]; /*0x5684ac*/
      }
      else
      {
        v9 = (int *)MapClass_field_0x13C[v7]; /*0x5684a0*/
      }
      CellClass::AddContent((int)v9, aP2, aP2[140]); /*0x5684bb*/
      if ( v7 >= 0x40000 || (v10 = *((_DWORD *)this->MapClass_field_0x13C + v7)) == 0 ) /*0x5684db*/
      {
        g_MissionQueueFrame.briefing[139] = v34; /*0x5684f9*/
        House::AnnounceUpgrade((int)&g_MissionQueueFrame.briefing[130], -1); /*0x5684ff*/
        v4 = this; /*0x568504*/
        goto LABEL_17; /*0x568504*/
      }
      House::AnnounceUpgrade(v10, -1); /*0x5684e1*/
      v4 = this; /*0x5684e6*/
      v6 += 2; /*0x5684ea*/
    }
    else
    {
  LABEL_17:
      v6 += 2; /*0x568508*/
    }
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)aP2 + 44))(aP2); /*0x568514*/
  if ( result == 6 )
  {
    v39 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)aP2 + 44))(aP2) == 6 ? aP2 : 0;
    result = *((_DWORD *)v39 + 328); /*0x568536*/
    if ( *(_BYTE *)(result + 5990) )
    {
      v11 = *(_DWORD *)(result + 3832) - 1; /*0x568550*/
      v35 = v11; /*0x568553*/
      if ( v11 <= 0 ) /*0x568557*/
      {
        v35 = 1; /*0x568559*/
        v11 = 1; /*0x568561*/
      }
      v12 = v42; /*0x568573*/
      memset(v43, 0, sizeof(v43)); /*0x568577*/
      while ( 1 )
      {
        v13 = *v12; /*0x568579*/
        v41 = v12; /*0x56857c*/
        if ( *v12 == 0x7FFF && v12[1] == 0x7FFF ) /*0x56858b*/
          break; /*0x56858b*/
        v14 = v13; /*0x56859b*/
        IDA_LOWORD(v38) = *aP1 + v13; /*0x5685a5*/
        v15 = v12[1]; /*0x5685aa*/
        IDA_HIWORD(v38) = v15 + aP1[1]; /*0x5685b1*/
        v31 = v38; /*0x5685bc*/
        v16 = v15; /*0x5685c0*/
        if ( v11 > 0 )
        {
          v17 = v15 + aP1[1]; /*0x5685c9*/
          v40 = v11; /*0x5685d0*/
          v18 = *aP1 + v13; /*0x5685d4*/
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
              if ( !v43[v19 + v20] ) /*0x568605*/
              {
                v43[v19 + v20] = 1; /*0x56861a*/
                v21 = (v17 << 9) + v18; /*0x568623*/
                if ( v21 >= 0 && v21 < MapClass_field_0x140 ) /*0x56862d*/
                {
                  v22 = this->MapClass_field_0x13C; /*0x568633*/
                  if ( v22[v21] ) /*0x568639*/
                  {
                    if ( v21 >= 0x40000 || (v23 = (int *)v22[v21]) == 0 ) /*0x56864f*/
                    {
                      g_MissionQueueFrame.briefing[139] = v31; /*0x568655*/
                      v23 = &g_MissionQueueFrame.briefing[130]; /*0x56865a*/
                    }
                    ++v23[64]; /*0x56865f*/
                  }
                }
              }
              --v18; /*0x568665*/
              --v17; /*0x568667*/
              v14 = v20 - 1; /*0x568669*/
              --v16; /*0x56866a*/
              IDA_LOWORD(v31) = v18; /*0x56866b*/
              IDA_HIWORD(v31) = v17; /*0x568670*/
              v19 -= 16; /*0x568675*/
            }
            --v40; /*0x56867d*/
          }
          while ( v40 );
          v11 = v35; /*0x568687*/
          v12 = v41; /*0x56868b*/
        }
        v12 += 2; /*0x56868f*/
      }
      for ( i = 0; i < 64; i += 8 ) /*0x568697*/
      {
        v25 = *((_DWORD *)v39 + 328); /*0x5686a2*/
        if ( *(_DWORD *)(i + v25 + 5668) != 0xFFFF || *(_DWORD *)(i + v25 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          IDA_LOWORD(v32) = *(_WORD *)(i + v25 + 5668) + *(_DWORD *)aP1; /*0x5686df*/
          IDA_HIWORD(v32) = *(_WORD *)(i + v25 + 5672) + IDA_HIWORD(*(_DWORD *)aP1); /*0x5686e4*/
          v26 = (__int16)v32 + (IDA_SHIWORD(v32) << 9); /*0x5686ef*/
          if ( v26 >= 0 && v26 < MapClass_field_0x140 ) /*0x5686f9*/
          {
            v27 = this->MapClass_field_0x13C; /*0x5686ff*/
            if ( v27[v26] ) /*0x568705*/
            {
              if ( v26 >= 0x40000 ) /*0x568715*/
              {
                g_MissionQueueFrame.briefing[139] = v32; /*0x568721*/
                v28 = &g_MissionQueueFrame.briefing[130]; /*0x568726*/
              }
              else
              {
                v28 = (int *)v27[v26]; /*0x568717*/
              }
              ++v28[64]; /*0x56872b*/
            }
          }
        }
        result = *((_DWORD *)v39 + 328); /*0x568735*/
        if ( *(_DWORD *)(i + result + 5732) != 0xFFFF || *(_DWORD *)(i + result + 5736) != 0xFFFF ) /*0x56874b*/
        {
          IDA_LOWORD(v33) = *(_WORD *)(i + result + 5732) + *(_DWORD *)aP1; /*0x568776*/
          IDA_HIWORD(v33) = *(_WORD *)(i + result + 5736) + IDA_HIWORD(*(_DWORD *)aP1); /*0x56877b*/
          result = (__int16)v33 + (IDA_SHIWORD(v33) << 9); /*0x568786*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568790*/
          {
            v29 = this->MapClass_field_0x13C; /*0x568796*/
            if ( v29[result] ) /*0x56879c*/
            {
              if ( result >= 0x40000 ) /*0x5687ac*/
              {
                g_MissionQueueFrame.briefing[139] = v33; /*0x5687b8*/
                result = (int)&g_MissionQueueFrame.briefing[130]; /*0x5687bd*/
              }
              else
              {
                result = v29[result]; /*0x5687ae*/
              }
              v30 = *(_DWORD *)(result + 256); /*0x5687c2*/
              if ( v30 ) /*0x5687ca*/
                *(_DWORD *)(result + 256) = v30 - 1; /*0x5687cd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5687df*/
}
} // namespace gamemd
// 0x5687F0
namespace gamemd {
void MapClass::ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2)
{
  int result; // eax
  MapClass *v4; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  _DWORD *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  char *v11; // edx
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
  _DWORD *v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int j; // esi
  __int16 v27; // dx
  _DWORD *v28; // ecx
  int v29; // ecx
  int v30; // [esp+10h] [ebp-8A0h]
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+14h] [ebp-89Ch]
  char *v33; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v36; // [esp+20h] [ebp-890h]
  int v37; // [esp+24h] [ebp-88Ch]
  _BYTE *i; // [esp+28h] [ebp-888h]
  int v39; // [esp+2Ch] [ebp-884h]
  _BYTE v40[128]; // [esp+30h] [ebp-880h] BYREF
  _BYTE v41[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x568801*/
  if ( !aP2 ) /*0x568809*/
    return result; /*0x568809*/
  MapClass_field_0x140 = this->MapClass_field_0x140; /*0x568819*/
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)aP2 + 136))(aP2); /*0x56881d*/
  if ( !*(_BYTE *)(result + 565) ) /*0x568823*/
    return result; /*0x568823*/
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)aP2 + 120))(aP2); /*0x568835*/
  if ( result != 2 ) /*0x56883b*/
    return result; /*0x56883b*/
  v5 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)aP2 + 264))(aP2, 0); /*0x56884c*/
  sub_48DEE0(v5, 32, (int)v40); /*0x568859*/
  v6 = v40; /*0x56885e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568870*/
  {
    IDA_LOWORD(v32) = *aP1 + *v6; /*0x56888b*/
    IDA_HIWORD(v32) = aP1[1] + v6[1]; /*0x568893*/
    v7 = (IDA_SHIWORD(v32) << 9) + (__int16)v32; /*0x56889e*/
    if ( v7 >= 0 /*0x5688b9*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->MapClass_field_0x13C, MapClass_field_0x13C[v7]) )
    {
      if ( v7 >= 0x40000 ) /*0x5688ce*/
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x5688d6*/
        v9 = &g_MissionQueueFrame.briefing[130]; /*0x5688dc*/
      }
      else
      {
        v9 = (int *)MapClass_field_0x13C[v7]; /*0x5688d0*/
      }
      CellClass::RemoveContent((int)v9, aP2, aP2[140]); /*0x5688eb*/
      if ( v7 >= 0x40000 || (v10 = *((_DWORD *)this->MapClass_field_0x13C + v7)) == 0 ) /*0x56890b*/
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x568929*/
        House::AnnounceUpgrade((int)&g_MissionQueueFrame.briefing[130], -1); /*0x56892f*/
        v4 = this; /*0x568934*/
        goto LABEL_17; /*0x568934*/
      }
      House::AnnounceUpgrade(v10, -1); /*0x568911*/
      v4 = this; /*0x568916*/
      v6 += 2; /*0x56891a*/
    }
    else
    {
  LABEL_17:
      v6 += 2; /*0x568938*/
    }
  }
  result = (*(int (__thiscall **)(char *))(*(_DWORD *)aP2 + 44))(aP2); /*0x568944*/
  if ( result == 6 )
  {
    v11 = (*(int (__thiscall **)(char *))(*(_DWORD *)aP2 + 44))(aP2) == 6 ? aP2 : 0;
    v33 = v11; /*0x568964*/
    result = *((_DWORD *)v11 + 328); /*0x568968*/
    if ( *(_BYTE *)(result + 5990) )
    {
      v12 = *(_DWORD *)(result + 3832) - 1; /*0x568982*/
      v36 = v12; /*0x568985*/
      if ( v12 <= 0 ) /*0x568989*/
      {
        v36 = 1; /*0x56898b*/
        v12 = 1; /*0x568993*/
      }
      v13 = v40; /*0x5689a5*/
      memset(v41, 0, sizeof(v41)); /*0x5689a9*/
      for ( i = v40; ; i = v13 )
      {
        v14 = *v13; /*0x5689af*/
        if ( *v13 == 0x7FFF && v13[1] == 0x7FFF ) /*0x5689bd*/
          break; /*0x5689bd*/
        v15 = v14; /*0x5689cd*/
        IDA_LOWORD(v37) = *aP1 + v14; /*0x5689d7*/
        v16 = v13[1]; /*0x5689dc*/
        IDA_HIWORD(v37) = v16 + aP1[1]; /*0x5689e3*/
        v30 = v37; /*0x5689ee*/
        v17 = v16; /*0x5689f2*/
        if ( v12 > 0 )
        {
          v18 = v16 + aP1[1]; /*0x5689fb*/
          v39 = v12; /*0x568a02*/
          v19 = *aP1 + v14; /*0x568a06*/
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
              if ( !v41[v20 + v21] ) /*0x568a37*/
              {
                v41[v20 + v21] = 1; /*0x568a4c*/
                v22 = (v18 << 9) + v19; /*0x568a55*/
                if ( v22 >= 0 && v22 < MapClass_field_0x140 ) /*0x568a5f*/
                {
                  v23 = this->MapClass_field_0x13C; /*0x568a65*/
                  if ( v23[v22] ) /*0x568a6b*/
                  {
                    if ( v22 >= 0x40000 || (v24 = (int *)v23[v22]) == 0 ) /*0x568a81*/
                    {
                      g_MissionQueueFrame.briefing[139] = v30; /*0x568a87*/
                      v24 = &g_MissionQueueFrame.briefing[130]; /*0x568a8c*/
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
              IDA_LOWORD(v30) = v19; /*0x568aa8*/
              IDA_HIWORD(v30) = v18; /*0x568aad*/
              v20 -= 16; /*0x568ab2*/
            }
            --v39; /*0x568aba*/
          }
          while ( v39 );
          v12 = v36; /*0x568ac4*/
          v13 = i; /*0x568ac8*/
        }
        v11 = v33; /*0x568acc*/
        v13 += 2; /*0x568ad0*/
      }
      for ( j = 0; j < 64; j += 8 ) /*0x568adc*/
      {
        result = *((_DWORD *)v11 + 328); /*0x568ae3*/
        if ( *(_DWORD *)(j + result + 5668) != 0xFFFF || *(_DWORD *)(j + result + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v27 = *(_WORD *)(j + result + 5672) + IDA_HIWORD(*(_DWORD *)aP1); /*0x568b1c*/
          IDA_LOWORD(v31) = *(_WORD *)(j + result + 5668) + *(_DWORD *)aP1; /*0x568b24*/
          result = (__int16)v31 + (v27 << 9); /*0x568b32*/
          IDA_HIWORD(v31) = v27; /*0x568b34*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568b41*/
          {
            v28 = this->MapClass_field_0x13C; /*0x568b47*/
            if ( v28[result] ) /*0x568b4d*/
            {
              if ( result >= 0x40000 ) /*0x568b5d*/
              {
                g_MissionQueueFrame.briefing[139] = v31; /*0x568b69*/
                result = (int)&g_MissionQueueFrame.briefing[130]; /*0x568b6e*/
              }
              else
              {
                result = v28[result]; /*0x568b5f*/
              }
              v29 = *(_DWORD *)(result + 256); /*0x568b73*/
              if ( v29 ) /*0x568b7b*/
                *(_DWORD *)(result + 256) = v29 - 1; /*0x568b7e*/
            }
          }
          v11 = v33; /*0x568b84*/
        }
      }
    }
  }
  return result; /*0x568b94*/
}
} // namespace gamemd
// 0x568BB0
namespace gamemd {
TechnoTypeClass * * MapClass::PostProcessReveal(char a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  _BYTE *v5; // ecx
  void *MapClass_field_0xF4; // eax
  int i; // eax
  void *v8; // eax
  int j; // esi
  TagClass *v10; // eax
  int k; // edx
  unsigned int v12; // eax
  int *v13; // eax
  int m; // edx
  unsigned int v15; // eax
  int *v16; // eax
  int updated; // eax
  int v18; // eax
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x568bba*/
  v20 = 0; /*0x568bc1*/
  if ( dword_A8E9B8 > 0 ) /*0x568bce*/
  {
    v4 = dword_A8E9AC; /*0x568bd0*/
    do /*0x568bfb*/
    {
      v5 = (_BYTE *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = dword_A8E9AC; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < dword_A8E9B8 ); /*0x568bfb*/
  }
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x568bfd*/
  *(_DWORD *)this->__pad_10C = 1; /*0x568c03*/
  *(_DWORD *)&this->__pad_10C[4] = MapClass_field_0xF4; /*0x568c09*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)MapClass_field_0xF4 - 1; /*0x568c12*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)MapClass_field_0xF4 + 4; /*0x568c27*/
  for (); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c34*/
    *(_DWORD *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  v8 = this->MapClass_field_0xF4; /*0x568c54*/
  *(_DWORD *)this->__pad_10C = 1; /*0x568c5a*/
  *(_DWORD *)&this->__pad_10C[4] = v8; /*0x568c60*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)v8 - 1; /*0x568c69*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)v8 + 4; /*0x568c7e*/
  for (); j; j = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c8d*/
  {
    *(_DWORD *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView((int *)j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
    v10 = *(TagClass **)(j + 60); /*0x568cc4*/
    *(_DWORD *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
        for ( k = 0; k < *(int *)&stru_87F5F0.__pad_58[716]; v13[80] |= 0x100000u ) /*0x568cef*/
        {
          IDA_HIWORD(v21) = *(_WORD *)(j + 38); /*0x568d01*/
          IDA_LOWORD(v21) = k + *(_DWORD *)&this->__pad_10C[24]; /*0x568d09*/
          v12 = (__int16)v21 + (IDA_SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_MissionQueueFrame.briefing[139] = v21; /*0x568d30*/
            v13 = &g_MissionQueueFrame.briefing[130]; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( TagClass::HasCrossesVerticalLineEvent(*(TagClass **)(j + 60)) ) /*0x568d5b*/
      {
        for ( m = 0; m < *(int *)&stru_87F5F0.__pad_58[720]; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
          IDA_LOWORD(v22) = *(_WORD *)(j + 36); /*0x568d7b*/
          IDA_HIWORD(v22) = (_WORD)this->MapClass_field_0x128 + m; /*0x568d80*/
          v15 = (__int16)v22 + (IDA_SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x568da4*/
          {
            g_MissionQueueFrame.briefing[139] = v22; /*0x568daa*/
            v16 = &g_MissionQueueFrame.briefing[130]; /*0x568daf*/
          }
          ++m; /*0x568dbc*/
        }
      }
    }
    if ( a2 ) /*0x568dd2*/
      updated = ObjectClass::UpdateTiberiumGrowth(j, 0); /*0x568dd8*/
    else
      updated = Building::GetNthOfType((Building *)j); /*0x568de1*/
    v20 += updated; /*0x568dee*/
    House::AnnounceUpgrade(j, -1); /*0x568df4*/
    v18 = *(_DWORD *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/
}
} // namespace gamemd
// 0x56B3F0
namespace gamemd {
BombClass * * MapClass::DecompressCellData(MouseClass * aP1)
{
  MapClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  void *MapClass_field_0xF4; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v17; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v18; // [esp+14h] [ebp-28h] BYREF
  int v19; // [esp+40h] [ebp+4h]

  v2 = this; /*0x56b3f5*/
  LZOPipe::Constructor((LZOPipe *)&v18, 0, 0x2000); /*0x56b406*/
  Pipe::SetDelegate(&v18, aP1); /*0x56b414*/
  v3 = 0; /*0x56b41f*/
  v4 = 0; /*0x56b421*/
  v19 = 0; /*0x56b425*/
  if ( v2->MapClass_field_0x140 > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
      v5 = *((_DWORD *)v2->MapClass_field_0x13C + v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
          v6 = *(_DWORD *)(v5 + 36); /*0x56b44a*/
          Src = v6; /*0x56b451*/
          MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56b45a*/
          Src = IDA_SHIWORD(v6) + (__int16)v6; /*0x56b468*/
          if ( Src > (int)MapClass_field_0xF4 /*0x56b49b*/
            && (__int16)v6 - IDA_SHIWORD(v6) < (int)MapClass_field_0xF4
            && IDA_SHIWORD(v6) - (__int16)v6 < (int)MapClass_field_0xF4
            && Src <= (int)MapClass_field_0xF4 + 2 * *(_DWORD *)this->__pad_F8 )
          {
            Src = v6; /*0x56b4a8*/
            if ( v6 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2134] /*0x56b4d9*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b4e6*/
              v8 = Compression::Read((int *)v18.__pad_0, (int)&Src, 4) + v3; /*0x56b4f6*/
              v9 = Compression::Read((int *)v18.__pad_0, v5 + 56, 4) + v8; /*0x56b50a*/
              v10 = Compression::Read((int *)v18.__pad_0, v5 + 282, 1) + v9; /*0x56b51e*/
              v11 = Compression::Read((int *)v18.__pad_0, v5 + 283, 1) + v10; /*0x56b532*/
              v3 = Compression::Read((int *)v18.__pad_0, v5 + 281, 1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v2 = this; /*0x56b53b*/
      v4 = v19 + 1; /*0x56b543*/
      v19 = v4; /*0x56b54a*/
    }
    while ( v4 < this->MapClass_field_0x140 ); /*0x56b550*/
  }
  v17 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b568*/
  v12 = Compression::Read((int *)v18.__pad_0, (int)&v17, 4) + v3; /*0x56b579*/
  v13 = (*(int (__thiscall **)(Pipe *))(*(_DWORD *)v18.__pad_0 + 4))(&v18); /*0x56b582*/
  LZOPipe::Destructor((LZOPipe *)&v18); /*0x56b584*/
  return v13 + v12; /*0x56b58c*/
}
} // namespace gamemd
// 0x56D230
namespace gamemd {
int MapClass::GetTileIndex(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
  __int16 *v4; // esi
  MapClass *v5; // edi
  unsigned int v6; // eax
  int *v7; // eax
  int RegionMap; // eax
  int v9; // ebx
  unsigned int v10; // eax
  int *v11; // eax
  int *NeighbourContent; // edi
  unsigned int i; // esi
  int v14; // eax
  int v16; // ecx

  v4 = aP1; /*0x56d238*/
  v5 = this; /*0x56d23d*/
  if ( aP3 )
  {
    v6 = *aP1 + (aP1[1] << 9); /*0x56d255*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)aP1; /*0x56d26f*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
      RegionMap = GetRegionMap((ObjectClass *)this, aP1, 1, 0); /*0x56d28f*/
      if ( RegionMap == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
      v9 = 16 * RegionMap + *(_DWORD *)v5->__pad_54; /*0x56d2a3*/
      if ( *(_BYTE *)(v9 + 8) )
      {
        v4 = (__int16 *)(16 * RegionMap + *(_DWORD *)v5->__pad_54); /*0x56d2ac*/
      }
      else
      {
        v10 = *aP1 + (aP1[1] << 9); /*0x56d2bd*/
        if ( v10 < 0x40000 && (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = &g_MissionQueueFrame.briefing[130]; /*0x56d2db*/
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)aP1; /*0x56d2e0*/
        }
        for ( i = *(_WORD *)(v9 + 4) != *(_WORD *)v9 ? 2 : 4;
              (NeighbourContent[80] & 0x100) != 0;
              NeighbourContent = (int *)Cell::GetNeighbourContent((Cell *)NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( ((unsigned __int8)Cell::IsInRange((Cell *)NeighbourContent) /*0x56d337*/
           || (unsigned __int8)Cell::IsInRange2((Cell *)NeighbourContent))
          && NeighbourContent[59] != 3 )
        {
          v4 = (__int16 *)(v9 + 4); /*0x56d339*/
        }
        else
        {
          v4 = (__int16 *)v9; /*0x56d361*/
        }
        v5 = this; /*0x56d33b*/
      }
    }
  }
  v14 = *v4 + v4[1] * ((int)v5->MapClass_field_0xF4 + *(_DWORD *)v5->__pad_F8 + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
    v16 = *(_DWORD *)&v5->__pad_5C[16]; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_18[4 * aP2] /*0x56d365*/
                             + 2 * *(unsigned __int16 *)(*(_DWORD *)&v5->__pad_5C[12] + 4 * v14 + 2));
}
} // namespace gamemd
// 0x56D6E0
namespace gamemd {
int MapClass::ProcessRegion()
{
  DynamicVector **p_MapClass_field_0x50; // edi
  void *MapClass_field_0xF4; // eax
  int result; // eax
  int v5; // ebp
  InfantryClass *NeighbourContent; // eax
  InfantryClass *v7; // eax
  InfantryClass *v8; // eax
  InfantryClass *v9; // eax
  int v10; // ebx
  int v11; // ebx
  DynamicVector *v12; // eax
  DynamicVector *v13; // ecx
  int v14; // esi
  int v15; // ecx
  DynamicVector *v16; // eax
  int v17; // edx
  char *v18; // eax
  char v19; // al
  int v20; // ecx
  int v21; // eax
  Cell *i; // eax
  Cell *v23; // esi
  int v24; // edx
  int v25; // eax
  void *v26; // ecx
  int Cell_field_0x38; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  DynamicVector *v31; // eax
  DynamicVector *v32; // ecx
  int v33; // ebp
  int v34; // ecx
  DynamicVector *v35; // eax
  int v36; // edx
  char *v37; // eax
  char v38; // [esp+Eh] [ebp-32h]
  char v39; // [esp+Fh] [ebp-31h]
  unsigned int v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h]
  int v44; // [esp+28h] [ebp-18h]
  int v45; // [esp+38h] [ebp-8h]

  p_MapClass_field_0x50 = &this->MapClass_field_0x50; /*0x56d6ef*/
  (*(void (__thiscall **)(DynamicVector **))this->MapClass_field_0x50->__pad_C)(&this->MapClass_field_0x50); /*0x56d6f4*/
  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x56d6f7*/
  *(_DWORD *)this->__pad_10C = 1; /*0x56d6fd*/
  *(_DWORD *)&this->__pad_10C[4] = MapClass_field_0xF4; /*0x56d707*/
  *(_DWORD *)&this->__pad_10C[8] = (char *)MapClass_field_0xF4 - 1; /*0x56d710*/
  *(_DWORD *)&this->__pad_10C[12] = (char *)this->MapClass_field_0x13C + 2048 * (_DWORD)MapClass_field_0xF4 + 4; /*0x56d725*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x56d72b*/
  v5 = result; /*0x56d730*/
  if ( result ) /*0x56d734*/
  {
    while ( 1 ) /*0x56d73b*/
    {
      if ( !(unsigned __int8)Cell::IsInRange((Cell *)v5) && !(unsigned __int8)Cell::IsInRange2((Cell *)v5) ) /*0x56d74c*/
      {
        if ( (unsigned __int8)InfantryClass::IsInBounds((InfantryClass *)v5) ) /*0x56d75b*/
        {
          if ( (NeighbourContent = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 2u), /*0x56d7b3*/
                (unsigned __int8)InfantryClass::IsInBounds(NeighbourContent))
            && (v7 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 6u),
                (unsigned __int8)InfantryClass::IsInBounds(v7))
            || (v8 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 4u),
                (unsigned __int8)InfantryClass::IsInBounds(v8))
            && (v9 = (InfantryClass *)Cell::GetNeighbourContent((Cell *)v5, 0),
                (unsigned __int8)InfantryClass::IsInBounds(v9)) )
          {
            v42 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((Cell *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex((Cell *)(v5 + 36)) < v10 ) /*0x56d7e5*/
            {
              v11 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7f2*/
              v12 = p_MapClass_field_0x50[2]; /*0x56d7f5*/
              v13 = p_MapClass_field_0x50[4]; /*0x56d7f8*/
              v14 = *(_DWORD *)(v5 + 36); /*0x56d7fb*/
              IDA_LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( (int)v13 < (int)v12 /*0x56d82e*/
                || (*((_BYTE *)p_MapClass_field_0x50 + 13) || !v12)
                && (v15 = (int)p_MapClass_field_0x50[5], v15 > 0)
                && ((unsigned __int8 (__thiscall *)(DynamicVector **, char *, _DWORD))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                     p_MapClass_field_0x50,
                     &v12->__pad_0[v15],
                     0) )
              {
                v16 = p_MapClass_field_0x50[4]; /*0x56d839*/
                v17 = v44; /*0x56d83c*/
                p_MapClass_field_0x50[4] = (DynamicVector *)v16->DynamicVector_field_0x1; /*0x56d843*/
                v18 = &p_MapClass_field_0x50[1]->__pad_0[16 * (_DWORD)v16]; /*0x56d84c*/
                *(_DWORD *)v18 = v14; /*0x56d84e*/
                *((_DWORD *)v18 + 1) = v11; /*0x56d850*/
                *((_DWORD *)v18 + 2) = v17; /*0x56d853*/
                *((_DWORD *)v18 + 3) = 1; /*0x56d856*/
              }
            }
          }
        }
        goto LABEL_42; /*0x56d859*/
      }
      v19 = Cell::IsInRange((Cell *)v5); /*0x56d860*/
      v20 = g_Cell_BuildabilityLUT; /*0x56d865*/
      if ( !v19 ) /*0x56d870*/
        v20 = g_TerrainBridgeIndex; /*0x56d872*/
      v21 = *(_DWORD *)(v5 + 56) - v20; /*0x56d878*/
      if ( dword_82A734[v21] == *(unsigned __int8 *)(v5 + 282) ) /*0x56d889*/
        break; /*0x56d889*/
  LABEL_42:
      result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x56d9e9*/
      v5 = result; /*0x56d9f2*/
      if ( !result ) /*0x56d9f6*/
        return result; /*0x56d9f6*/
    }
    v38 = 0; /*0x56d896*/
    v41 = dword_82A774[v21]; /*0x56d89b*/
    v39 = 1; /*0x56d89f*/
    for ( i = (Cell *)Cell::GetNeighbourContent((Cell *)v5, v41); ; i = (Cell *)Cell::GetNeighbourContent(v23, v41) ) /*0x56d8a7*/
    {
      while ( 1 ) /*0x56d8b0*/
      {
        v23 = i; /*0x56d8b0*/
        v24 = *(__int16 *)&i->__pad_1C[8]; /*0x56d8b2*/
        v25 = *(__int16 *)&i->__pad_1C[10]; /*0x56d8b6*/
        v26 = this->MapClass_field_0xF4; /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= (int)v26 /*0x56d8f8*/
          || v24 - v25 >= (int)v26
          || v25 - v24 >= (int)v26
          || v43 > (int)v26 + 2 * *(_DWORD *)this->__pad_F8 )
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
  LABEL_36:
          v30 = *((_DWORD *)Cell::GetNeighbourContent(v23, ((_BYTE)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = p_MapClass_field_0x50[2]; /*0x56d990*/
          v32 = p_MapClass_field_0x50[4]; /*0x56d993*/
          v33 = *(_DWORD *)(v5 + 36); /*0x56d99a*/
          IDA_LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( (int)v32 < (int)v31 /*0x56d9c2*/
            || (*((_BYTE *)p_MapClass_field_0x50 + 13) || !v31)
            && (v34 = (int)p_MapClass_field_0x50[5], v34 > 0)
            && ((unsigned __int8 (__thiscall *)(DynamicVector **, char *, _DWORD))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                 p_MapClass_field_0x50,
                 &v31->__pad_0[v34],
                 0) )
          {
            v35 = p_MapClass_field_0x50[4]; /*0x56d9c9*/
            v36 = v45; /*0x56d9cc*/
            p_MapClass_field_0x50[4] = (DynamicVector *)v35->DynamicVector_field_0x1; /*0x56d9d3*/
            v37 = &p_MapClass_field_0x50[1]->__pad_0[16 * (_DWORD)v35]; /*0x56d9dc*/
            *(_DWORD *)v37 = v33; /*0x56d9de*/
            *((_DWORD *)v37 + 1) = v30; /*0x56d9e0*/
            *((_DWORD *)v37 + 2) = v36; /*0x56d9e3*/
            *((_DWORD *)v37 + 3) = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !(unsigned __int8)Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        Cell_field_0x38 = v23->Cell_field_0x38; /*0x56d90d*/
        v28 = g_Cell_BuildabilityLUT; /*0x56d910*/
  LABEL_27:
        v29 = Cell_field_0x38 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == (unsigned __int8)v23->__pad_FC[30] ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
  LABEL_30:
        i = (Cell *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
      }
      if ( (unsigned __int8)Cell::IsInRange2(v23) ) /*0x56d943*/
      {
        Cell_field_0x38 = v23->Cell_field_0x38; /*0x56d94c*/
        v28 = g_TerrainBridgeIndex; /*0x56d94f*/
        goto LABEL_27; /*0x56d955*/
      }
      if ( ((int)v23->Cell_field_0x140 & 0x100) != 0 ) /*0x56d960*/
        goto LABEL_30; /*0x56d960*/
      v39 = 0; /*0x56d966*/
    }
  }
  return result; /*0x56d9fd*/
}
} // namespace gamemd
// 0x56DAE0
namespace gamemd {
int MapClass::ClearRegions(IUnknown * aP1)
{
  int RegionMap; // edi
  char v6; // [esp+10h] [ebp+4h]

  RegionMap = GetRegionMap((ObjectClass *)this, aP1, 3, 0); /*0x56daf3*/
  if ( RegionMap == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(); /*0x56dafc*/
    RegionMap = GetRegionMap((ObjectClass *)this, aP1, 3, 0); /*0x56db0d*/
    if ( RegionMap == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  v6 = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(_BYTE *)(16 * RegionMap + *(_DWORD *)this->__pad_54 + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph((int *)(16 * RegionMap + *(_DWORD *)this->__pad_54)); /*0x56db3b*/
      v6 = 1; /*0x56db43*/
      *(_BYTE *)(*(_DWORD *)this->__pad_54 + 16 * RegionMap + 8) = 0; /*0x56db48*/
    }
    RegionMap = GetRegionMap((ObjectClass *)this, aP1, 3, RegionMap + 1); /*0x56db59*/
  }
  while ( RegionMap != -1 ); /*0x56db5e*/
  return v6; /*0x56db14*/
}
} // namespace gamemd
// 0x56E7C0
namespace gamemd {
ObjectClass * * MapClass::CheckCellsBuildable(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, int aP6, IUnknown * aP7, IUnknown * aP8)
{
  int v9; // ebp
  int v11; // esi
  unsigned int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v16; // [esp+2Ch] [ebp+1Ch]

  v9 = 0; /*0x56e7c6*/
  if ( aP1 <= 0 ) /*0x56e7cc*/
    return 1; /*0x56e87c*/
  while ( 1 ) /*0x56e7de*/
  {
    v11 = 0; /*0x56e7de*/
    if ( aP2 > 0 ) /*0x56e7e2*/
      break; /*0x56e7e2*/
  LABEL_11:
    if ( ++v9 >= aP1 ) /*0x56e876*/
      return 1; /*0x56e876*/
  }
  while ( 1 ) /*0x56e7f5*/
  {
    IDA_HIWORD(v16) = v11 + aP0[1]; /*0x56e7f5*/
    IDA_LOWORD(v16) = v9 + *aP0; /*0x56e7fa*/
    v12 = (__int16)v16 + (IDA_SHIWORD(v16) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(_DWORD **)(dword_87F924 + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = &unk_ABDC50; /*0x56e828*/
      dword_ABDC74 = v16; /*0x56e82d*/
    }
    if ( aP8 && v14[17] != -1 || !Cell::IsBuildable((int)v14, aP3, 0, 0, aP4, aP5, aP6, aP7) ) /*0x56e859*/
      return 0; /*0x56e87c*/
    if ( ++v11 >= aP2 ) /*0x56e869*/
      goto LABEL_11; /*0x56e869*/
  }
}
} // namespace gamemd
// 0x574780
namespace gamemd {
int MapClass::TransitionCliff(MouseClass * aP0)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
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
  v4 = *(__int16 *)aP0 + (*(__int16 *)(aP0 + 2) << 9); /*0x574795*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5747ab*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)aP0; /*0x5747af*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x5747b4*/
  }
  result = v5[17]; /*0x5747b9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x5747d3*/
  {
    v7 = *(_WORD *)(aP0 + 2); /*0x5747dc*/
    IDA_LOWORD(aP0) = *(_WORD *)aP0; /*0x5747e0*/
    IDA_HIWORD(aP0) = v7 - 1; /*0x5747eb*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&aP0) + 17); /*0x574803*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57480e*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x574846*/
      IDA_LOWORD(aP0) = *(_WORD *)v2; /*0x57484a*/
      IDA_HIWORD(aP0) = v10; /*0x57484f*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&aP0) + 17); /*0x57486b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x574876*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57488b*/
        IDA_LOWORD(aP0) = *(_WORD *)v2; /*0x57488f*/
        IDA_HIWORD(aP0) = v12 - 1; /*0x57489a*/
        return CellClass::ApplyCliffMod2(&aP0); /*0x5748aa*/
      }
      else
      {
        return CellClass::ApplyCliffMod2((_DWORD *)v2); /*0x57487b*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x574817*/
      IDA_LOWORD(aP0) = *(_WORD *)v2; /*0x574819*/
      IDA_HIWORD(aP0) = v9; /*0x57481e*/
      return CellClass::ApplyCliffMod2(&aP0); /*0x574832*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x5748ce*/
  {
    v13 = *(_WORD *)aP0 - 1; /*0x5748db*/
    IDA_HIWORD(aP0) = *(_WORD *)(aP0 + 2); /*0x5748dd*/
    IDA_LOWORD(aP0) = v13; /*0x5748e2*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&aP0) + 17); /*0x5748fe*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x574909*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x574941*/
      IDA_HIWORD(aP0) = *(_WORD *)(v2 + 2); /*0x574945*/
      IDA_LOWORD(aP0) = v16; /*0x57494a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&aP0) + 17); /*0x574966*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x574971*/
      {
        aP0 = 1; /*0x57498f*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &aP0); /*0x5749a8*/
        return CellClass::ApplyCliffMod(&v18); /*0x5749af*/
      }
      else
      {
        return CellClass::ApplyCliffMod((_DWORD *)v2); /*0x574976*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x574912*/
      IDA_HIWORD(aP0) = *(_WORD *)(v2 + 2); /*0x574914*/
      IDA_LOWORD(aP0) = v15; /*0x574919*/
      return CellClass::ApplyCliffMod(&aP0); /*0x57492d*/
    }
  }
  return result; /*0x574837*/
}
} // namespace gamemd
// 0x574C20
namespace gamemd {
void* MapClass::ApplyTerrainDamage(IUnknown *this@<ecx> a1, IUnknown aP1)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // esi
  __int16 *v5; // ebx
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // si
  __int16 *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  int *v20; // eax
  __int16 v21; // bp
  __int16 v22; // bx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  __int16 v26; // dx
  unsigned int v27; // eax
  int *v28; // eax
  bool v29; // cc
  int v30; // eax
  __int16 *v31; // eax
  int v32; // ebx
  __int16 v33; // si
  int v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  __int16 v38; // cx
  int v39; // edi
  __int16 *v40; // edx
  int occupationFlags; // ecx
  int altOccupationFlags; // ecx
  unsigned int v43; // eax
  int *v44; // eax
  int *v45; // edx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ebp
  int i; // esi
  __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  int *v53; // eax
  int *v54; // ebx
  MapClass *v55; // esi
  int v56; // eax
  void *MapClass_field_0x128; // eax
  int v58; // esi
  int v59; // ebp
  __int16 v60; // ax
  int v61; // esi
  __int16 v63[2]; // [esp+14h] [ebp-30h] BYREF
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-28h]
  int v66; // [esp+20h] [ebp-24h]
  int v67; // [esp+24h] [ebp-20h]
  __int16 v68[2]; // [esp+28h] [ebp-1Ch] BYREF
  VectorClass v69; // [esp+2Ch] [ebp-18h] BYREF
  int v70; // [esp+3Ch] [ebp-8h]
  int v71; // [esp+40h] [ebp-4h]

  v2 = (CellClass *)a1; /*0x574c26*/
  v3 = -2; /*0x574c2d*/
  while ( 2 ) /*0x574c32*/
  {
    v4 = -2; /*0x574c32*/
    do /*0x574c7a*/
    {
      v5 = aP1; /*0x574c37*/
      v6 = aP1[1]; /*0x574c3e*/
      IDA_LOWORD(v64) = v3 + *aP1; /*0x574c48*/
      IDA_HIWORD(v64) = v4 + v6; /*0x574c4d*/
      *(_DWORD *)v68 = v64; /*0x574c60*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v68) + 17); /*0x574c69*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x574c74*/
      {
        v8 = v4 + v5[1]; /*0x574c8e*/
        IDA_LOWORD(aP1) = v3 + *v5; /*0x574c91*/
        IDA_HIWORD(aP1) = v8; /*0x574c9a*/
        MapClass::TransitionCliff(v2, (int)&aP1); /*0x574caa*/
        return; /*0x574cb6*/
      }
      ++v4; /*0x574c76*/
    }
    while ( v4 < 3 ); /*0x574c7a*/
    if ( ++v3 < 3 ) /*0x574c80*/
      continue; /*0x574c80*/
    break;
  }
  v9 = *v5 + (v5[1] << 9); /*0x574cc3*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x574cd9*/
  {
    v11 = v10; /*0x574cdb*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x574ce1*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v5; /*0x574ce6*/
  }
  v12 = v11[80]; /*0x574cec*/
  v64 = 0; /*0x574cf7*/
  if ( (v12 & 0x500) == 0 ) /*0x574cfb*/
  {
    *(_DWORD *)v68 = 0; /*0x574d01*/
    while ( 1 ) /*0x574d16*/
    {
      v13 = v64 & 7; /*0x574d16*/
      v14 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + *v5; /*0x574d21*/
      v15 = v5[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x574d29*/
      v16 = (__int16 *)(4 * v13 + 9041544); /*0x574d2d*/
      v17 = v15 << 9; /*0x574d3a*/
      v18 = v14 + v17 < 0; /*0x574d3d*/
      v19 = v14 + v17; /*0x574d3d*/
      IDA_LOWORD(v65) = v14; /*0x574d3f*/
      IDA_HIWORD(v65) = v15; /*0x574d44*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x574d5d*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574d67*/
        g_MissionQueueFrame.briefing[139] = v65; /*0x574d6c*/
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
      IDA_LOWORD(v66) = v22; /*0x574d98*/
      IDA_HIWORD(v66) = v21; /*0x574d9d*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x574db6*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574dc0*/
        g_MissionQueueFrame.briefing[139] = v66; /*0x574dc5*/
      }
      else
      {
        v11 = v25; /*0x574db8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574dd7*/
        goto LABEL_34; /*0x574dd7*/
      v26 = *v16; /*0x574dd9*/
      IDA_HIWORD(v67) = v21 + v16[1]; /*0x574de9*/
      IDA_LOWORD(v67) = v22 + v26; /*0x574dee*/
      v27 = (__int16)(v22 + v26) + (IDA_SHIWORD(v67) << 9); /*0x574df9*/
      if ( v27 < 0x40000 && (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) != 0 ) /*0x574e0f*/
      {
        v11 = v28; /*0x574e11*/
      }
      else
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574e19*/
        g_MissionQueueFrame.briefing[139] = v67; /*0x574e1e*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = *(_DWORD *)v68 + 1 < 8, v64 = ((_BYTE)v64 + 1) & 7, ++*(_DWORD *)v68, !v29) ) /*0x574e43*/
      {
  LABEL_34:
        v2 = (CellClass *)a1; /*0x574e49*/
        break; /*0x574e49*/
      }
      v5 = aP1; /*0x574d07*/
      v2 = (CellClass *)a1; /*0x574d0b*/
    }
  }
  v30 = v11[80]; /*0x574e4d*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574e6c*/
        v31 = *(__int16 **)(v11[11] + 36); /*0x574e79*/
      else
        v31 = (__int16 *)v11[9]; /*0x574e6e*/
    }
    else
    {
      v32 = v11[9]; /*0x574e86*/
      *(_DWORD *)v68 = v32; /*0x574e8d*/
      v67 = 0; /*0x574e94*/
      v66 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574eb5*/
      {
        v33 = IDA_HIWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]) + v68[1]; /*0x574eb5*/
        IDA_LOWORD(aP1) = v32 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]); /*0x574ec2*/
        IDA_HIWORD(aP1) = v33; /*0x574ec7*/
        IDA_LOWORD(v32) = (_WORD)aP1; /*0x574ecc*/
        v34 = v33 << 9; /*0x574ed0*/
        v18 = (__int16)aP1 + v34 < 0; /*0x574ed3*/
        v35 = (__int16)aP1 + v34; /*0x574ed3*/
        *(_DWORD *)v68 = aP1; /*0x574ed5*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v35)) == 0 ) /*0x574eef*/
        {
          g_MissionQueueFrame.briefing[139] = (int)aP1; /*0x574ef5*/
          v36 = &g_MissionQueueFrame.briefing[130]; /*0x574efb*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x574f0a*/
          break; /*0x574f0a*/
        if ( ++v67 >= 4 ) /*0x574f18*/
          return; /*0x574f18*/
      }
      v2 = (CellClass *)a1; /*0x574f28*/
      v37 = ((_BYTE)v66 - 4) & 7; /*0x574f32*/
      v38 = IDA_HIWORD(g_DDrawSurfaceManager.scenario[v37 + 82]); /*0x574f4e*/
      IDA_LOWORD(aP1) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]) /*0x574f58*/
                 + (_WORD)aP1
                 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]);
      IDA_HIWORD(aP1) = v33 + v38 + v38; /*0x574f5d*/
      v31 = aP1; /*0x574f62*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v63 = v31; /*0x574f81*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574f85*/
    v40 = *(__int16 **)v63; /*0x574f8a*/
    occupationFlags = v2->occupationFlags; /*0x574f8e*/
    v69.vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x574f99*/
    v71 = 10; /*0x574fa1*/
    v70 = 0; /*0x574fa9*/
    if ( v63[0] >= occupationFlags ) /*0x574fb1*/
    {
      do /*0x574fbd*/
      {
        if ( (__int16)v40 > occupationFlags + v2->copyFlags ) /*0x574fc4*/
          break; /*0x574fc4*/
        altOccupationFlags = v2->altOccupationFlags; /*0x574fcf*/
        if ( v63[1] < altOccupationFlags || v63[1] > altOccupationFlags + v2->shroudCounter ) /*0x574fe7*/
          break; /*0x574fe7*/
        v43 = (__int16)v40 + (v63[1] << 9); /*0x574ff6*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v43) ) /*0x574ff8*/
        {
          if ( v43 < 0x40000 && (v44 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v43)) != 0 ) /*0x575014*/
          {
            v45 = v44; /*0x575016*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = (int)v40; /*0x57501a*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x575020*/
          }
          if ( globalHelper_0746C0(v45[14] - g_TerrainBridgeIndex + 1, (int)v45) ) /*0x575031*/
          {
            v48 = ((_BYTE)v39 - 4) & 7; /*0x57508d*/
            aP1 = *(__int16 **)v63; /*0x575090*/
            for ( i = 0; i < 3; ++i ) /*0x575094*/
            {
              if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)a1, v63) ) /*0x57509f*/
                break; /*0x5750a6*/
            }
            while ( 1 ) /*0x5750c8*/
            {
              v50 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + (_WORD)aP1; /*0x5750c8*/
              v68[1] = IDA_HIWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + IDA_HIWORD(aP1); /*0x5750ce*/
              v68[0] = v50; /*0x5750d3*/
              v51 = v50; /*0x5750dc*/
              aP1 = *(__int16 **)v68; /*0x5750e1*/
              v52 = v50 + (v68[1] << 9); /*0x5750e8*/
              if ( v52 < 0x40000 && (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) != 0 ) /*0x5750fe*/
              {
                v54 = v53; /*0x575100*/
              }
              else
              {
                g_MissionQueueFrame.briefing[139] = *(_DWORD *)v68; /*0x575104*/
                v54 = &g_MissionQueueFrame.briefing[130]; /*0x57510a*/
              }
              v55 = a1; /*0x57510f*/
              v56 = *(_DWORD *)&a1->__pad_10C[24]; /*0x575113*/
              if ( v51 < v56 ) /*0x57511b*/
                break; /*0x57511b*/
              if ( v51 > v56 + *(_DWORD *)a1->__pad_12C ) /*0x57512b*/
                goto LABEL_79; /*0x57512b*/
              MapClass_field_0x128 = a1->MapClass_field_0x128; /*0x575135*/
              if ( v68[1] < (int)MapClass_field_0x128 /*0x57514d*/
                || v68[1] > (int)((int)MapClass_field_0x128 + (unsigned int)a1->MapClass_field_0x130) )
              {
                goto LABEL_79; /*0x57514d*/
              }
              v58 = v54[14] - g_TerrainBridgeIndex + 1; /*0x57515b*/
              if ( globalHelper_074600(v58, v48, (int)v54) ) /*0x575160*/
              {
                if ( v58 != -1 ) /*0x575170*/
                {
                  v59 = ((_BYTE)v48 - 4) & 7; /*0x57517a*/
                  v60 = IDA_HIWORD(g_DDrawSurfaceManager.scenario[v59 + 82]); /*0x57518c*/
                  v68[0] = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v59 + 82]) + (_WORD)aP1; /*0x575194*/
                  v61 = 0; /*0x57519e*/
                  v68[1] = IDA_HIWORD(aP1) + v60; /*0x5751a0*/
                  aP1 = *(__int16 **)v68; /*0x5751a9*/
                  do /*0x5751c3*/
                  {
                    if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)a1, (__int16 *)&aP1) ) /*0x5751b6*/
                      break; /*0x5751bd*/
                    ++v61; /*0x5751bf*/
                  }
                  while ( v61 < 3 ); /*0x5751c3*/
                }
  LABEL_79:
                v55 = a1; /*0x5751c5*/
                break; /*0x5751c5*/
              }
            }
            Terrain::CreateCrater((Terrain *)v55, (int)v63); /*0x5751c9*/
            v2 = (CellClass *)a1; /*0x5751db*/
            g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x5751df*/
            break; /*0x5751df*/
          }
          IDA_LOWORD(v40) = v63[0]; /*0x57503a*/
        }
        v46 = v39 & 7; /*0x575040*/
        v47 = v63[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x575056*/
        IDA_LOWORD(aP1) = (_WORD)v40 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x57505e*/
        IDA_HIWORD(aP1) = v47; /*0x575066*/
        occupationFlags = v2->occupationFlags; /*0x57506b*/
        v40 = aP1; /*0x575071*/
        *(_DWORD *)v63 = aP1; /*0x575077*/
      }
      while ( (__int16)aP1 >= occupationFlags ); /*0x574fbd*/
    }
    Terrain::ConnectivityGraph((Terrain *)v2); /*0x5751e6*/
    v69.vtable0 = &(void*)(void*)&VectorClass_Cell_vftable; /*0x5751f1*/
    if ( v69.Items ) /*0x5751fb*/
    {
      if ( v69.IsAllocated ) /*0x575203*/
        RA2_OPDEL(v69.Items); /*0x575206*/
    }
  }
}
} // namespace gamemd
// 0x577920
namespace gamemd {
MapClass * * MapClass::RemoveTriggerRef(AbstractClass * aP1, int a3)
{
  int v3; // esi
  int i; // ebp
  int MapClass_field_0x1160; // ecx
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  unsigned int v10; // eax
  ObjectClass *v11; // eax
  ObjectClass *v12; // edi
  int v13; // eax
  MapClass *MapClass_field_0x116C; // ecx
  MapClass *v15; // ecx
  int result; // eax

  v3 = aP1; /*0x577922*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 44))(aP1) == 44 ) /*0x577932*/
  {
    for ( i = 0; i < (int)this->MapClass_field_0x116C; ++i ) /*0x577943*/
    {
      MapClass_field_0x1160 = this->MapClass_field_0x1160; /*0x57794a*/
      v7 = *(__int16 *)(MapClass_field_0x1160 + 4 * i + 2); /*0x577950*/
      v8 = *(__int16 *)(MapClass_field_0x1160 + 4 * i); /*0x577955*/
      v9 = (int *)(MapClass_field_0x1160 + 4 * i); /*0x577959*/
      v10 = v8 + (v7 << 9); /*0x57795f*/
      if ( v10 < 0x40000 && (v11 = (ObjectClass *)*((_DWORD *)this->MapClass_field_0x13C + v10)) != 0 ) /*0x577975*/
      {
        v12 = v11; /*0x577977*/
      }
      else
      {
        v12 = (ObjectClass *)&g_MissionQueueFrame.briefing[130]; /*0x57797d*/
        g_MissionQueueFrame.briefing[139] = *v9; /*0x577982*/
      }
      if ( v12 && v12->ambientSoundController[0] == v3 ) /*0x57798e*/
      {
        ObjectClass::SetTriggerTarget(v12, 0); /*0x577994*/
        v13 = ((int (__thiscall *)(ObjectClass **, int *))this->MapClass_field_0x115C->?)( /*0x5779ab*/
                &this->MapClass_field_0x115C,
                &v12->occupant);
        if ( v13 != -1 ) /*0x5779b1*/
        {
          MapClass_field_0x116C = this->MapClass_field_0x116C; /*0x5779b3*/
          if ( v13 < (int)MapClass_field_0x116C ) /*0x5779b8*/
          {
            v15 = (MapClass *)((char *)MapClass_field_0x116C - 1); /*0x5779ba*/
            for ( this->MapClass_field_0x116C = v15; /*0x5779c0*/
                  v13 < (int)this->MapClass_field_0x116C;
                  *(_DWORD *)(this->MapClass_field_0x1160 + 4 * v13 - 4) = *(_DWORD *)(this->MapClass_field_0x1160
                                                                                     + 4 * v13) )
            {
              ++v13; /*0x5779c5*/
            }
          }
        }
        v3 = aP1; /*0x5779d4*/
        --i; /*0x5779d8*/
      }
    }
    MapClass::RemoveCellReference((MapClass *)&g_MissionQueueFrame.briefing[130], v3); /*0x5779ef*/
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3); /*0x5779f9*/
  if ( result == 44 ) /*0x5779ff*/
  {
    aP1 = v3; /*0x577a11*/
    result = (*(int (__thiscall **)(int *, int *))(FootClass_Array.?[4] + 16))(&FootClass_Array.?[4], &aP1); /*0x577a15*/
    if ( result != -1 && result < FootClass_Array.?[0] ) /*0x577a25*/
    {
      --FootClass_Array.?[0]; /*0x577a2a*/
      for ( ; /*0x577a30*/
            result < FootClass_Array.?[0];
            *(_DWORD *)(FootClass_Array.?[5] + 4 * result - 4) = *(_DWORD *)(FootClass_Array.?[5] + 4 * result) )
      {
        ++result; /*0x577a38*/
      }
    }
  }
  return result; /*0x577a4a*/
}
} // namespace gamemd
// 0x577F30
namespace gamemd {
void * MapClass::ClearShroud(HouseClass * v3)
{
  void *result; // eax
  bool v4; // bl
  int v5; // eax
  int v6; // ecx
  __int16 *v7; // esi
  int v8; // eax
  int v9; // edx

  result = (void *)v3; /*0x577f30*/
  if ( v3 ) /*0x577f3a*/
    *(_BYTE *)(*(&dword_A8022C->vtable0 + *(_DWORD *)(v3 + 48)) + 577) = 1; /*0x577f48*/
  if ( (Object *)v3 == dword_A83D4C ) /*0x577f55*/
  {
    if ( v3 ) /*0x577f63*/
      goto LABEL_8; /*0x577f63*/
  }
  else if ( v3 ) /*0x577f59*/
  {
    return result; /*0x577f59*/
  }
  Debug::Log(); /*0x577f6a*/
  LABEL_8:
  v4 = (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x577f94*/
    && dword_A8B23C
    && !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->vtable0 + 4))(dword_A8B23C);
  result = dword_A83D4C; /*0x577f9a*/
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577f9f*/
  {
    dword_A83D4C->__pad_140[256] = 1; /*0x577fad*/
    dword_87F8F8 = dword_87F8DC; /*0x577fbf*/
    dword_87F8F4 = 1; /*0x577fc7*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577fd4*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577fe3*/
    v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577fe8*/
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
        if ( v8 != this->MapClass_field_0xF4 + 5 ) /*0x578012*/
          goto LABEL_22; /*0x578012*/
  LABEL_25:
        v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x578054*/
        if ( !v5 ) /*0x578060*/
          goto LABEL_26; /*0x578060*/
      }
      if ( v6 == 13 && v8 == this->MapClass_field_0xF4 + 11 ) /*0x578026*/
        goto LABEL_25; /*0x578026*/
  LABEL_22:
      v9 = *(_DWORD *)this->__pad_F8; /*0x578028*/
      if ( v6 == v9 + 13 && v8 == this->MapClass_field_0xF4 + v9 - 15 ) /*0x578041*/
        goto LABEL_25; /*0x578041*/
  LABEL_24:
      DisplayClass::RevealFogCell((DisplayClass *)&dword_87F7E8, v7, (int)dword_A83D4C); /*0x578043*/
      goto LABEL_25; /*0x57804f*/
    }
  LABEL_26:
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x578064*/
    return (void *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x578075*/
  }
  return result; /*0x57807a*/
}
} // namespace gamemd
// 0x578390
namespace gamemd {
void MapClass_IsRectInBounds()
{
  char v3; // bl
  _WORD *v4; // esi
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  __int16 v13[2]; // [esp+Ch] [ebp-8h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x578394*/
  v4 = a2; /*0x578399*/
  v6 = *a2; /*0x5783a4*/
  IDA_HIWORD(a2) = a2[2]; /*0x5783ab*/
  IDA_LOWORD(a2) = v6; /*0x5783b4*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, a3) ) /*0x5783b9*/
    return 0; /*0x5783b9*/
  v7 = v4[2]; /*0x5783d0*/
  IDA_LOWORD(a3) = *((_DWORD *)v4 + 2) + *(_DWORD *)v4 - 1; /*0x5783d8*/
  IDA_HIWORD(a3) = v7; /*0x5783e0*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, v3) ) /*0x5783e5*/
    return 0; /*0x5783e5*/
  v8 = *((_DWORD *)v4 + 1); /*0x5783f1*/
  v9 = *((_DWORD *)v4 + 3); /*0x5783f4*/
  v13[0] = *v4; /*0x5783f7*/
  v13[1] = v8 + v9 - 1; /*0x578408*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, v3) ) /*0x57840d*/
    return 0; /*0x57840d*/
  v10 = *((_DWORD *)v4 + 1); /*0x578420*/
  v11 = *((_DWORD *)v4 + 3); /*0x578423*/
  v14[0] = *((_DWORD *)v4 + 2) + *(_DWORD *)v4 - 1; /*0x578426*/
  v14[1] = v10 + v11 - 1; /*0x578436*/
  return (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v14, v3) != 0; /*0x578446*/
}
}
// 0x578710
unsigned int * MapClass::SpiralSearch()
{
  void *MapClass_field_0xF4; // edi
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
  __int16 v13[2]; // [esp+10h] [ebp-4h] BYREF

  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x578723*/
  v3 = *(_DWORD *)&this->__pad_10C[20]; /*0x578729*/
  v4 = *(_DWORD *)&this->__pad_10C[16]; /*0x57872f*/
  if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578740*/
               + 2 * (int)((int)this->MapClass_field_0x108 + (unsigned int)this->MapClass_field_0x100)
               + 12 )
    return 0; /*0x57880b*/
  while ( 1 ) /*0x578746*/
  {
    v5 = *(_DWORD *)this->__pad_104; /*0x578746*/
    v6 = 2 * ((int)this->MapClass_field_0xFC + v5) - (_DWORD)MapClass_field_0xF4 - 2; /*0x57875c*/
    v13[0] = v4; /*0x57875f*/
    v13[1] = v3; /*0x578766*/
    if ( v4 - v3 < v6 ) /*0x57876b*/
    {
      *(_DWORD *)&this->__pad_10C[16] = v4 + 1; /*0x5787be*/
      *(_DWORD *)&this->__pad_10C[20] = v3 - 1; /*0x5787c4*/
    }
    else
    {
      v7 = (((_BYTE)v4 - (_BYTE)MapClass_field_0xF4 + (_BYTE)v3 - 1) & 1) == 1; /*0x578785*/
      v8 = v5 - (v7 + 1); /*0x578790*/
      v9 = *(_DWORD *)&this->__pad_10C[16] - v8; /*0x578792*/
      v10 = v8 + *(_DWORD *)&this->__pad_10C[20]; /*0x578794*/
      *(_DWORD *)&this->__pad_10C[16] = v9; /*0x578798*/
      *(_DWORD *)&this->__pad_10C[20] = v10; /*0x5787a0*/
      if ( v7 ) /*0x5787a8*/
        *(_DWORD *)&this->__pad_10C[20] = v10 + 1; /*0x5787ab*/
      else
        *(_DWORD *)&this->__pad_10C[16] = v9 + 1; /*0x5787b4*/
    }
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, 1) ) /*0x5787d3*/
      break; /*0x5787d3*/
    MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x5787e8*/
    v3 = *(_DWORD *)&this->__pad_10C[20]; /*0x5787ee*/
    v4 = *(_DWORD *)&this->__pad_10C[16]; /*0x5787f4*/
    if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578805*/
                 + 2 * (int)((int)this->MapClass_field_0x108 + (unsigned int)this->MapClass_field_0x100)
                 + 12 )
      return 0; /*0x578805*/
  }
  v12 = v13[0] + (v13[1] << 9); /*0x578820*/
  if ( v12 >= 0x40000 || (result = (_DWORD *)*((_DWORD *)this->MapClass_field_0x13C + v12)) == 0 ) /*0x578836*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v13; /*0x57883f*/
    return &g_MissionQueueFrame.briefing[130]; /*0x578845*/
  }
  return result; /*0x57880d*/
}
// 0x578880
unsigned int * MapClass::FastCellLookup(short * a2, int a3, char a4)
{
  unsigned int v4; // eax
  _DWORD *result; // eax
  void *MapClass_field_0xFC; // edi
  int v7; // ebp
  int v8; // ebx
  void *MapClass_field_0x100; // eax
  int v10; // esi
  int v12; // edx
  void *MapClass_field_0x108; // ecx
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
    if ( v4 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5788b4*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5788be*/
      return &g_MissionQueueFrame.briefing[130]; /*0x5788c4*/
    }
  }
  else
  {
    MapClass_field_0xFC = this->MapClass_field_0xFC; /*0x5788d4*/
    v7 = *a2; /*0x5788da*/
    v8 = a2[1]; /*0x5788dd*/
    MapClass_field_0x100 = this->MapClass_field_0x100; /*0x5788e1*/
    v10 = (__int16)((__int16)this->MapClass_field_0xF4 + (_WORD)MapClass_field_0x100 - (_WORD)MapClass_field_0xFC); /*0x5788fd*/
    v25 = (__int16)((_WORD)MapClass_field_0x100 + (_WORD)MapClass_field_0xFC + 1); /*0x57890e*/
    v26 = (6000 * a3 + v25 - v7) % a3; /*0x578928*/
    v12 = (6000 * a3 + (__int16)v10 - v8) % a3; /*0x57892d*/
    if ( v26 > 0 ) /*0x578939*/
      v7 += a3 - v26; /*0x57893f*/
    if ( v12 > 0 ) /*0x578947*/
      v8 += a3 - v12; /*0x57894d*/
    v27 = v25 + v10; /*0x57895b*/
    if ( a4 || (MapClass_field_0x108 = this->MapClass_field_0x108, v8 + v7 < v27 + 2 * (int)MapClass_field_0x108 / 3) ) /*0x578987*/
    {
      v23 = (__int16)v8 << 9; /*0x578a74*/
      v17 = (__int16)v7 + v23 < 0; /*0x578a77*/
      v24 = (__int16)v7 + v23; /*0x578a77*/
      IDA_LOWORD(v30) = v7; /*0x578a79*/
      IDA_HIWORD(v30) = v8; /*0x578a7e*/
      if ( v17 || v24 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x578a97*/
      {
        g_MissionQueueFrame.briefing[139] = v30; /*0x578a9d*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578aa2*/
      }
    }
    else if ( v8 + v7 >= v27 + 4 * (int)MapClass_field_0x108 / 3 || a3 <= 2 ) /*0x5789ab*/
    {
      v19 = v8 - (a3 - 1); /*0x578a27*/
      v20 = v7 - (a3 - 1); /*0x578a29*/
      v21 = v19 << 9; /*0x578a31*/
      v17 = v20 + v21 < 0; /*0x578a34*/
      v22 = v20 + v21; /*0x578a34*/
      IDA_LOWORD(v29) = v20; /*0x578a36*/
      IDA_HIWORD(v29) = v19; /*0x578a3b*/
      if ( v17 || v22 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v22)) == 0 ) /*0x578a54*/
      {
        g_MissionQueueFrame.briefing[139] = v29; /*0x578a5c*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a62*/
      }
    }
    else
    {
      v14 = v8 - a3 / 2; /*0x5789c6*/
      v15 = v7 - a3 / 2; /*0x5789c8*/
      v16 = v14 << 9; /*0x5789d0*/
      v17 = v15 + v16 < 0; /*0x5789d3*/
      v18 = v15 + v16; /*0x5789d3*/
      IDA_LOWORD(v28) = v15; /*0x5789d5*/
      IDA_HIWORD(v28) = v14; /*0x5789da*/
      if ( v17 || v18 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x5789f3*/
      {
        g_MissionQueueFrame.briefing[139] = v28; /*0x578a00*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a06*/
      }
    }
  }
  return result; /*0x5788bc*/
}
// 0x578AC0
void MapClass::IncrementRedrawCounter()
{
  ++this->__pad_D80[984]; /*0x578ac0*/
}
// 0x57A0C0
void* MapClass::InitTileData(MouseClass * aP0, int aP3)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  TileData *v8; // edi
  int v9; // esi
  int v10; // esi
  int i; // edi
  char *TileDataEntry; // eax
  int v13; // eax
  int v14; // edx
  char j; // bl
  int k; // eax
  int *m; // eax
  int v18; // edx
  int *n; // eax
  int v20; // edx
  char v22; // [esp+13h] [ebp-1h]

  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x57a0ce*/
  v22 = 0; /*0x57a0d8*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x57a0df*/
  {
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x57a0e7*/
    v5 = RA2_OPNEW(80 * g_MapCellWidth * g_MapCellWidth); /*0x57a0f1*/
    v6 = v5; /*0x57a0f6*/
    if ( v5 ) /*0x57a0fd*/
    {
      v7 = v4 - 1; /*0x57a0ff*/
      v8 = (TileData *)v5; /*0x57a100*/
      if ( v7 >= 0 ) /*0x57a104*/
      {
        v9 = v7 + 1; /*0x57a106*/
        do /*0x57a112*/
        {
          TileData::Constructor(v8); /*0x57a109*/
          v8 += 20; /*0x57a10e*/
          --v9; /*0x57a111*/
        }
        while ( v9 ); /*0x57a112*/
      }
      g_MissionQueueFrame.localVariables[163] = v6; /*0x57a114*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x57a11c*/
    }
    v22 = 1; /*0x57a126*/
  }
  v10 = 0; /*0x57a131*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v10 < i; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x57a138*/
    TileDataEntry = GetTileDataEntry(v10++); /*0x57a13f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a157*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a15c*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a16c*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a17b*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a180*/
  for ( j = 1; v13; v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x57a191*/
  {
    if ( !j ) /*0x57a195*/
      break; /*0x57a195*/
    j = RecursiveCellClassNeighbourUpdate(this, v14, v13, aP0, aP3); /*0x57a1a6*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a1bc*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a1c1*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a1d1*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a1e0*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a1ec*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a1f0*/
      break; /*0x57a1f0*/
    MapClass::BuildTileConnectivityGraph(k, aP0, aP3); /*0x57a1f7*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a215*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a21a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a22a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a239*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( m = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a245*/
        m;
        m = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a249*/
      break; /*0x57a249*/
    j = GenerateMapClassCliffTransitions(this, v18, m, 1, aP0, aP3); /*0x57a25c*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a272*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a277*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a287*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a296*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( n = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a2a2*/
        n;
        n = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a2a6*/
      break; /*0x57a2a6*/
    j = GenerateMapClassCliffTransitions(this, v20, n, 2, aP0, aP3); /*0x57a2b9*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x57a2ca*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x57a2d6*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x57a2dc*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
      1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x57a2df*/
  }
  if ( v22 ) /*0x57a2ef*/
  {
    RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x57a2f7*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x57a2ff*/
  }
  return j; /*0x57a309*/
}
// 0x5856B0
int MapClass::InitializeTileData(MapClass * aP1)
{
  int v3; // esi
  int v4; // ebp
  TileData *v5; // ebx
  int v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int v9; // eax
  int v10; // edx
  char j; // bl
  int k; // eax
  Cell *m; // eax
  int v14; // edx
  int result; // eax
  int v16; // edx
  int n; // esi
  char v18; // [esp+13h] [ebp-5h]
  int i; // [esp+14h] [ebp-4h]

  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x5856c0*/
  v18 = 0; /*0x5856ca*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5856d1*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x5856d9*/
    v4 = RA2_OPNEW(80 * g_MapCellWidth * g_MapCellWidth); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
      v5 = (TileData *)v4; /*0x5856f4*/
      if ( v3 - 1 >= 0 ) /*0x5856f8*/
      {
        do /*0x585708*/
        {
          TileData::Constructor(v5); /*0x5856ff*/
          v5 += 20; /*0x585704*/
          --v3; /*0x585707*/
        }
        while ( v3 ); /*0x585708*/
      }
      g_MissionQueueFrame.localVariables[163] = v4; /*0x58570a*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x585712*/
    }
    v18 = 1; /*0x58571c*/
  }
  v6 = 0; /*0x585726*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58572a*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v6 < v7; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x58575d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x58576a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585773*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585782*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  v9 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585787*/
  for ( j = 1; v9; v9 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
    j = RecursiveCellClassNeighbourUpdate(this, v10, v9, 0, 0); /*0x5857a7*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x5857bd*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x5857c2*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x5857ce*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x5857dd*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5857e9*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells(aP1, 1); /*0x58580f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x58581f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585824*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585830*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x58583f*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58584c*/
        m;
        m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
    j = GenerateMapClassCliffTransitions((Cell *)this, v14, m, 1, 0, 0); /*0x585862*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585878*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x58587d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585889*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585898*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5858a4*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
    j = GenerateMapClassCliffTransitions((Cell *)this, v16, (Cell *)result, 2, 0, 0); /*0x5858bb*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x5858cc*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x5858d4*/
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x5858d9*/
               *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
               1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x5858dc*/
  }
  for ( n = 0; n < i; *(_BYTE *)(result + 74) = 1 ) /*0x5858ea*/
    result = (int)GetTileDataEntry(n++); /*0x5858ee*/
  if ( v18 ) /*0x585902*/
  {
    RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x58590a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585912*/
  }
  IDA_LOBYTE(result) = j; /*0x58591a*/
  return result; /*0x585918*/
}
// 0x585D00
int MapClass::LoadTerrainData(MapClass * aP1)
{
  int v2; // esi
  ObjectClass *v3; // ebp
  int v4; // edi
  int v5; // ebx
  TileData *v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int i; // eax
  int result; // eax
  Cell *j; // esi
  int k; // esi
  char v13; // [esp+12h] [ebp-6h]
  char v14; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x585d12*/
  v3 = (ObjectClass *)this; /*0x585d14*/
  v4 = g_MapCellWidth * g_MapCellWidth; /*0x585d16*/
  v13 = 1; /*0x585d1f*/
  v14 = 0; /*0x585d24*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x585d29*/
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
    v5 = RA2_OPNEW(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
      v6 = (TileData *)v5; /*0x585d43*/
      if ( v4 - 1 >= 0 ) /*0x585d47*/
      {
        v7 = v4; /*0x585d49*/
        do /*0x585d57*/
        {
          TileData::Constructor(v6); /*0x585d4e*/
          v6 += 20; /*0x585d53*/
          --v7; /*0x585d56*/
        }
        while ( v7 ); /*0x585d57*/
        v3 = (ObjectClass *)this; /*0x585d59*/
      }
      g_MissionQueueFrame.localVariables[163] = v5; /*0x585d5d*/
      v14 = 1; /*0x585d63*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x585d6a*/
      v14 = 1; /*0x585d70*/
    }
  }
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x585d92*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585da2*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585daf*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585db8*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585dc7*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585dd3*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !v13 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v13 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, aP1, 0); /*0x585e02*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585e12*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585e17*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585e23*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585e32*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585e38*/
  for ( j = (Cell *)result; result; j = (Cell *)result ) /*0x585e43*/
  {
    if ( !v13 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !j->Cell_field_0x11B[1] && (unsigned __int8)Cell::IsEmpty(j) ) /*0x585e59*/
      v13 = Terrain::SelectTileType((int)j, 0); /*0x585e6b*/
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585e74*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x585e85*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x585e8d*/
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x585e93*/
               *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
               1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x585e96*/
  }
  for ( k = 0; k < v4; *(_BYTE *)(result + 74) = 1 ) /*0x585ea0*/
    result = (int)GetTileDataEntry(k++); /*0x585ea4*/
  if ( v14 ) /*0x585eb8*/
  {
    RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x585ec1*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585ec9*/
  }
  IDA_LOBYTE(result) = v13; /*0x585ecf*/
  return result; /*0x585ed3*/
}
// 0x586780
int MapClass::IsAreaFree(int * a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  int *v11; // eax
  int *v12; // esi
  int result; // eax
  int v14; // [esp+0h] [ebp-8h]
  int *v16; // [esp+Ch] [ebp+4h]
  int v17; // [esp+10h] [ebp+8h]

  if ( a3 == -1 ) /*0x58678e*/
    v14 = 0; /*0x58679d*/
  else
    v14 = 1 << a3; /*0x586797*/
  v4 = *a2; /*0x5867ac*/
  v5 = a2[2] + *a2; /*0x5867b4*/
  v16 = (int *)v4; /*0x5867b6*/
  if ( v4 >= v5 ) /*0x5867bc*/
    return MapClass::IsRectInBounds(a2, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = a2[1]; /*0x5867c2*/
    if ( v6 < a2[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
  LABEL_20:
    v16 = (int *)++v4; /*0x58686a*/
    if ( v4 >= a2[2] + *a2 ) /*0x58686e*/
      return MapClass::IsRectInBounds(a2, 1); /*0x58686e*/
  }
  IDA_LOWORD(v17) = v4; /*0x5867d4*/
  v7 = (__int16)v4; /*0x5867d9*/
  while ( 1 ) /*0x5867df*/
  {
    v8 = (__int16)v6 << 9; /*0x5867df*/
    v9 = v7 + v8 < 0; /*0x5867e2*/
    v10 = v7 + v8; /*0x5867e2*/
    IDA_HIWORD(v17) = v6; /*0x5867e4*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x5867fd*/
    {
      v12 = &g_MissionQueueFrame.briefing[130]; /*0x586807*/
      g_MissionQueueFrame.briefing[139] = v17; /*0x58680c*/
    }
    else
    {
      v12 = v11; /*0x5867ff*/
    }
    result = (int)CellClass::FindInfantry((CellClass *)v12, 0); /*0x586816*/
    if ( result ) /*0x58681d*/
      break; /*0x58681d*/
    result = v14; /*0x58681f*/
    if ( (v12[55] & v14) != 0 ) /*0x58682b*/
      break; /*0x58682b*/
    if ( v12[17] != -1 ) /*0x586831*/
      break; /*0x586831*/
    result = v12[19]; /*0x586833*/
    if ( result ) /*0x586838*/
      break; /*0x586838*/
    result = *((unsigned __int8 *)v12 + 284); /*0x58683a*/
    if ( (_BYTE)result ) /*0x586842*/
      break; /*0x586842*/
    result = (int)Cell::IsBridge((Cell *)v12); /*0x586846*/
    if ( result ) /*0x58684d*/
      break; /*0x58684d*/
    if ( ++v6 >= a2[3] + a2[1] ) /*0x58685a*/
    {
      v4 = (int)v16; /*0x58685c*/
      goto LABEL_20; /*0x58685c*/
    }
  }
  IDA_LOBYTE(result) = 0; /*0x58688d*/
  return result; /*0x586884*/
}
// 0x589370
int MapClass::AllocateCellDataBuffer(int a2, char * a3)
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
  unsigned int *v14; // ecx
  char *v15; // edx

  v3 = a2; /*0x589373*/
  if ( !a2 ) /*0x58937f*/
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x589492*/
    return 1; /*0x589498*/
  }
  v5 = a3; /*0x589385*/
  this->IsInitialized = 0; /*0x589389*/
  if ( a3 ) /*0x58938e*/
  {
    if ( a2 - 1 >= 0 ) /*0x5893d6*/
    {
      v9 = a3 + 2; /*0x5893d8*/
      a2 = a2; /*0x5893db*/
      do /*0x5893f8*/
      {
        *((unsigned short *)v9 - 1) = 0; /*0x5893df*/
        *(unsigned short *)v9 = 0; /*0x5893e3*/
        *((unsigned short *)v9 + 1) = 0; /*0x5893e6*/
        *((unsigned short *)v9 + 2) = 0; /*0x5893ea*/
        v9[6] = 0; /*0x5893ee*/
        *(unsigned int *)(v9 + 10) = -1; /*0x5893f1*/
        v9 += 16; /*0x5893f4*/
        --a2; /*0x5893f7*/
      }
      while ( a2 ); /*0x5893f8*/
      v5 = a3; /*0x5893fa*/
    }
  }
  else
  {
    v5 = (char *)operator new(16 * a2); /*0x589396*/
    if ( !v5 ) /*0x5893a0*/
    {
      v8 = 0; /*0x5893cd*/
      goto LABEL_14; /*0x5893cf*/
    }
    if ( a2 - 1 >= 0 ) /*0x5893a7*/
    {
      a2 = a2; /*0x5893a9*/
      v7 = v5 + 2; /*0x5893aa*/
      do /*0x5893c9*/
      {
        *((unsigned short *)v7 - 1) = 0; /*0x5893b0*/
        *(unsigned short *)v7 = 0; /*0x5893b4*/
        *((unsigned short *)v7 + 1) = 0; /*0x5893b7*/
        *((unsigned short *)v7 + 2) = 0; /*0x5893bb*/
        v7[6] = 0; /*0x5893bf*/
        *(unsigned int *)(v7 + 10) = -1; /*0x5893c2*/
        v7 += 16; /*0x5893c5*/
        --a2; /*0x5893c8*/
      }
      while ( a2 ); /*0x5893c9*/
    }
  }
  v8 = v5; /*0x5893fe*/
  LABEL_14:
  this->IsInitialized = 1; /*0x589400*/
  if ( !v8 ) /*0x589406*/
    return 0; /*0x58940b*/
  if ( this->Items ) /*0x589412*/
  {
    v12 = this->Capacity; /*0x589417*/
    if ( a2 < v12 ) /*0x58941c*/
      v12 = a2; /*0x58941e*/
    if ( v12 > 0 ) /*0x589422*/
    {
      v13 = 0; /*0x589424*/
      v12 = v12; /*0x589426*/
      do /*0x589456*/
      {
        v14 = (unsigned int *)(this->Items + v13); /*0x58942f*/
        v15 = &v8[v13]; /*0x589431*/
        v13 += 16; /*0x589434*/
        *(unsigned int *)v15 = *v14; /*0x589439*/
        *((unsigned int *)v15 + 1) = v14[1]; /*0x58943e*/
        *((unsigned int *)v15 + 2) = v14[2]; /*0x589444*/
        *((unsigned int *)v15 + 3) = v14[3]; /*0x58944a*/
        --v12; /*0x589452*/
      }
      while ( v12 ); /*0x589456*/
      v3 = a2; /*0x589458*/
    }
    if ( this->IsAllocated ) /*0x58945c*/
    {
      RA2_OPDEL(this->q004); /*0x589465*/
      this->Items = 0; /*0x58946d*/
    }
  }
  this->Items = v8; /*0x589478*/
  this->Capacity = v3; /*0x58947e*/
  this->IsAllocated = a3 == 0; /*0x589481*/
  return 1; /*0x589408*/
}
// 0x589A60
AbstractClass * * MapClass::AllocateMapDataBuffer(int a2, int * a3)
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
  _DWORD *v18; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x589a67*/
  if ( !a2 ) /*0x589a6f*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x589ba0*/
    goto LABEL_28; /*0x589ba0*/
  }
  this->IsInitialized = 0; /*0x589a79*/
  if ( a3 ) /*0x589a7f*/
  {
    *a3 = a2; /*0x589ad2*/
    v9 = a3 + 1; /*0x589adc*/
    if ( a2 - 1 >= 0 ) /*0x589ade*/
    {
      a2 = a2; /*0x589ae1*/
      do /*0x589af8*/
      {
        MapClass::allocateMapBuffers(v9); /*0x589ae7*/
        v9 += 9; /*0x589af0*/
        --a2; /*0x589af4*/
      }
      while ( a2 ); /*0x589af8*/
    }
    v18 = a3 + 1; /*0x589afa*/
  }
  else
  {
    v5 = (int *)RA2_OPNEW(36 * a2 + 4); /*0x589a8c*/
    if ( v5 ) /*0x589a96*/
    {
      *v5 = a2; /*0x589a98*/
      v6 = v5 + 1; /*0x589a9a*/
      v7 = v5 + 1; /*0x589aa0*/
      if ( a2 - 1 >= 0 ) /*0x589aa4*/
      {
        a2 = a2; /*0x589aa7*/
        do /*0x589abe*/
        {
          MapClass::allocateMapBuffers(v7); /*0x589aad*/
          v7 += 9; /*0x589ab6*/
          --a2; /*0x589aba*/
        }
        while ( a2 ); /*0x589abe*/
      }
      v8 = v6; /*0x589ac0*/
      v18 = v6; /*0x589ac2*/
      goto LABEL_14; /*0x589ac6*/
    }
    v18 = 0; /*0x589ac8*/
  }
  v8 = v18; /*0x589afe*/
  LABEL_14:
  this->IsInitialized = 1; /*0x589b02*/
  if ( !v8 ) /*0x589b08*/
    return 0; /*0x589bbf*/
  if ( this->Items ) /*0x589b0e*/
  {
    v10 = this->q008; /*0x589b15*/
    if ( a2 < v10 ) /*0x589b1a*/
      v10 = a2; /*0x589b1c*/
    if ( v10 > 0 ) /*0x589b20*/
    {
      v11 = v8 + 7; /*0x589b27*/
      v12 = -28 - (_DWORD)v8; /*0x589b2a*/
      v10 = v10; /*0x589b2c*/
      do /*0x589b5f*/
      {
        v13 = (_DWORD *)((char *)v11 + v12 + this->Items); /*0x589b38*/
        Radar::CopyDataArray(v11 - 7, v13); /*0x589b3b*/
        *((_WORD *)v11 - 2) = *((_WORD *)v13 + 12); /*0x589b44*/
        *v11 = v13[7]; /*0x589b4b*/
        v11[1] = v13[8]; /*0x589b54*/
        v11 += 9; /*0x589b57*/
        --v10; /*0x589b5b*/
      }
      while ( v10 ); /*0x589b5f*/
      v3 = a2; /*0x589b61*/
      v8 = v18; /*0x589b65*/
    }
    if ( this->IsAllocated ) /*0x589b69*/
    {
      v14 = (_DWORD *)this->Items; /*0x589b70*/
      if ( v14 ) /*0x589b75*/
        SubzoneConnectionVector::Destruct(v14, 3); /*0x589b79*/
      this->Items = 0; /*0x589b7e*/
    }
  }
  this->Items = v8; /*0x589b90*/
  this->q008 = v3; /*0x589b93*/
  this->IsAllocated = a3 == 0; /*0x589b96*/
  LABEL_28:
  v15 = this->q008; /*0x589ba3*/
  if ( v15 < this->q010 ) /*0x589bab*/
    this->q010 = v15; /*0x589bad*/
  return 1; /*0x589bb0*/
}
// 0x589BD0
unsigned int * MapClass::allocateMapBuffers()
{
  this->MapClass_field_0x4 = 0; /*0x589bd6*/
  this->MapClass_field_0x8 = 0; /*0x589bd9*/
  IDA_LOBYTE(this->MapClass_field_0xC) = 1; /*0x589bdc*/
  IDA_BYTE1(this->MapClass_field_0xC) = 0; /*0x589be0*/
  this->MapClass_field_0x0 = &(void*)(void*)&DynamicVectorClass_SubzoneConnectionStruct_vftable; /*0x589be3*/
  this->MapClass_field_0x14 = (void *)10; /*0x589be9*/
  this->MapClass_field_0x10 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone(); /*0x589bf3*/
  *(_WORD *)this->__pad_18 = 0; /*0x589bf9*/
  *(_DWORD *)&this->__pad_18[4] = 0; /*0x589bfd*/
  *(_DWORD *)&this->__pad_18[8] = 0; /*0x589c00*/
  return &this->MapClass_field_0x0; /*0x589c05*/
}
// 0x594700
int MapClass::Cleanup(int a1, int a2)
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
  if ( dword_ABED10 ) /*0x594718*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x594720*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x594725*/
    {
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(_DWORD *)((char *)dword_ABED10 + v3 - 24) = -1; /*0x594733*/
        *(_DWORD *)((char *)dword_ABED10 + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  for ( i = dword_ABDFA0 - 1; i >= 0; --i ) /*0x59474d*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_ABDF94 + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
      v13 = v5; /*0x59477e*/
      v6 = (*(int (__thiscall **)(int *, _DWORD **))(dword_ABDF90 + 16))(&dword_ABDF90, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&dword_ABDF90, v6); /*0x59478f*/
      v5[10] = &(void*)(void*)&VectorClass_Cell_vftable; /*0x594797*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      RA2_OPDEL(v5); /*0x5947a3*/
    }
  }
  dword_ABED14 = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5947bd*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5947c7*/
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
    v9 = *(__int16 *)(j + 36); /*0x5947d7*/
    v10 = *(__int16 *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > dword_ABED04 /*0x594828*/
      && v9 - v10 < dword_ABED04
      && v10 - v9 < dword_ABED04
      && v10 + v9 <= dword_ABED08
      && *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(j + 36) + 20 * g_MapCellWidth * *(__int16 *)(j + 38) + 14) == -1
      && !*(_DWORD *)(j + 76) )
    {
      v11 = v14; /*0x59482f*/
      TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)(j + 36), v14, 0); /*0x59483c*/
      if ( TileIndex == v15 ) /*0x594847*/
        FloodFillRandomMapTerrain(j, v11, v15); /*0x59484e*/
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x594858*/
  }
  return result; /*0x594868*/
}
// 0x599530
int MapClass::ProcessTile()
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  RadarClass *v6; // [esp+0h] [ebp-Ch]
  _DWORD *v7; // [esp+8h] [ebp-4h] BYREF

  this->MapClass_field_0x304 = 0; /*0x599534*/
  this->MapClass_field_0x308 = 0; /*0x59953a*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x599548*/
  {
    RA2_OPDEL((void *)g_MissionQueueFrame.localVariables[163]); /*0x59954b*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x599553*/
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x599563*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
      v7 = v2; /*0x599599*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59959d*/
             &g_MissionQueueFrame.briefing[338],
             &v7);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x5995ad*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x5995b2*/
        for ( ; /*0x5995b8*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x5995c0*/
        }
      }
      v4 = (void *)v2[11]; /*0x5995d2*/
      v2[10] = &(void*)(void*)&VectorClass_Cell_vftable; /*0x5995d5*/
      if ( v4 && *((_BYTE *)v2 + 53) ) /*0x5995e0*/
      {
        RA2_OPDEL(v4); /*0x5995e6*/
        v2[11] = 0; /*0x5995ee*/
      }
      *((_BYTE *)v2 + 53) = 0; /*0x5995f2*/
      v2[12] = 0; /*0x5995f5*/
      RA2_OPDEL(v2); /*0x5995f8*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59960f*/
  MapClass::PostProcessReveal((MapClass *)&stru_87F5F0.__pad_58[416], 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x599631*/
  return RadarClass::RecreateSurface(v6, 0); /*0x599640*/
}
// 0x5A0410
MapClass * * MapClass::GrowLayer(int a2, int a3, int a4)
{
  MapClass *v4; // ebx
  int v5; // esi
  VectorClass *v6; // ebp
  int i; // eax
  int j; // esi
  int v9; // ecx
  _BYTE *v10; // eax
  VectorClass *v11; // eax
  VectorClass *v12; // esi
  VectorClass *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // eax
  __int16 v19; // cx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int Capacity; // ecx
  int v24; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  int m; // eax
  VectorClass *v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  __int16 v31[2]; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  int k; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  MapClass *v36; // [esp+2Ch] [ebp-4h]

  v4 = this; /*0x5a041b*/
  v36 = this; /*0x5a041e*/
  v5 = a3; /*0x5a0427*/
  v6 = (VectorClass *)RandomMap::CellListAlloc((RandomMap *)this, a2); /*0x5a042b*/
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a043b*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a044e*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v35 = *(_DWORD *)(i + 36); /*0x5a0453*/
      *(_DWORD *)(80 * ((__int16)v35 + g_MapCellWidth * IDA_SHIWORD(v35)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0478*/
    }
  }
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
      for ( j = (int)v6[1].vtable0 - 1; j >= 0; v10[283] = v4->__pad_30C[0] ) /*0x5a0499*/
      {
        v9 = *((_DWORD *)v6->Items + j); /*0x5a04a6*/
        *(_DWORD *)v31 = v9; /*0x5a04a9*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a04ad*/
          *(_DWORD *)(80 * ((__int16)v9 + g_MapCellWidth * v31[1]) + g_MissionQueueFrame.localVariables[163] + 56) = a4; /*0x5a04ca*/
        v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x5a04d8*/
        *((_DWORD *)v10 + 14) = 0; /*0x5a04dd*/
        v10[282] = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
        v11 = (VectorClass *)RA2_OPNEW(0x18u); /*0x5a0509*/
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
          v12->vtable0 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x5a0520*/
          v12[1].Items = (void *)10; /*0x5a0526*/
          v12[1].vtable0 = 0; /*0x5a052d*/
          v13 = v12; /*0x5a0530*/
        }
        else
        {
          v13 = 0; /*0x5a0534*/
        }
        v13[1].Items = v6[1].vtable0; /*0x5a0539*/
        v14 = (int)v6[1].vtable0 - 1; /*0x5a053f*/
        v35 = v14; /*0x5a0540*/
        if ( v14 >= 0 ) /*0x5a0544*/
        {
          v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a054a*/
          do /*0x5a0650*/
          {
            v16 = *((_DWORD *)v6->Items + v14); /*0x5a0553*/
            v17 = 0; /*0x5a0556*/
            v32 = v16; /*0x5a0558*/
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
              v18 = v17 & 7; /*0x5a0560*/
              v19 = IDA_HIWORD(v32) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5a057b*/
              IDA_LOWORD(v33) = v32 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5a0580*/
              IDA_HIWORD(v33) = v19; /*0x5a0585*/
              v20 = v19; /*0x5a058d*/
              v21 = v19 + (__int16)v33; /*0x5a0590*/
              if ( v21 > v15 /*0x5a05b9*/
                && (__int16)v33 - v20 < v15
                && v20 - (__int16)v33 < v15
                && v21 <= g_MissionQueueFrame.localVariables[161] )
              {
                v22 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v33 + g_MapCellWidth * v20); /*0x5a05d4*/
                if ( *(_DWORD *)(v22 + 56) == a2 ) /*0x5a05d9*/
                {
                  if ( *(_DWORD *)(v22 + 60) != v30 + 1 ) /*0x5a05e7*/
                  {
                    Capacity = v13->Capacity; /*0x5a05e9*/
                    if ( (int)v13[1].vtable0 < Capacity /*0x5a060e*/
                      || (v13->IsAllocated || !Capacity)
                      && (v24 = (int)v13[1].Items, v24 > 0)
                      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v13->vtable0 + 2))(
                           v13,
                           Capacity + v24,
                           0) )
                    {
                      vtable0 = v13[1].vtable0; /*0x5a0615*/
                      Items = v13->Items; /*0x5a0618*/
                      v13[1].vtable0 = (char *)vtable0 + 1; /*0x5a061e*/
                      Items[(_DWORD)vtable0] = v33; /*0x5a0625*/
                    }
                    *(_DWORD *)(v22 + 60) = v30 + 1; /*0x5a0628*/
                    v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a062b*/
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
          (*(void (__thiscall **)(VectorClass *, int))v6->vtable0)(v6, 1); /*0x5a0663*/
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
    (*(void (__thiscall **)(VectorClass *, int))v6->vtable0)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a069d*/
    for ( m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5a06ae*/
          m;
          m = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      *(_DWORD *)(80 * ((__int16)*(_DWORD *)(m + 36) + g_MapCellWidth * (__int16)IDA_HIWORD(*(_DWORD *)(m + 36))) /*0x5a06d8*/
                + g_MissionQueueFrame.localVariables[163]
                + 60) = 0;
    }
  }
  return 1; /*0x5a06e5*/
}
// 0x5A17F0
int MapClass::FindPassableNeighbor()
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a17fd*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a1807*/
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
    v2 = *(_DWORD *)(i + 56); /*0x5a1819*/
    if ( v2 >= g_TerrainBuildConfig && v2 < g_TerrainBuildConfig + 40 ) /*0x5a182f*/
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
          v7 = *(_DWORD *)(*((_DWORD *)dword_A8ED2C + v6) + 740); /*0x5a1897*/
          v8 = NeighbourContent[18] - *((unsigned __int8 *)NeighbourContent + 282) % v7; /*0x5a18b4*/
          IDA_LOWORD(v17) = v8; /*0x5a18bf*/
          v9 = NeighbourContent[19] - *((unsigned __int8 *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          IDA_HIWORD(v17) = v9; /*0x5a18c7*/
          v19 = v17; /*0x5a18d2*/
          if ( dword_ABED10 ) /*0x5a18d6*/
            v10 = *((_DWORD *)dword_ABED10 + 20 * v8 + 20 * g_MapCellWidth * v9 + 14); /*0x5a18f2*/
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
          v13 = *(_DWORD *)(*((_DWORD *)dword_A8ED2C + v12) + 740); /*0x5a194e*/
          v14 = v4[18] - *((unsigned __int8 *)v4 + 282) % v13; /*0x5a1969*/
          IDA_LOWORD(v18) = v14; /*0x5a1972*/
          v15 = v4[19] - *((unsigned __int8 *)v4 + 282) / v13; /*0x5a1977*/
          IDA_HIWORD(v18) = v15; /*0x5a197a*/
          v21 = v18; /*0x5a1985*/
          if ( dword_ABED10 ) /*0x5a1989*/
            v16 = *((_DWORD *)dword_ABED10 + 20 * v14 + 20 * g_MapCellWidth * v15 + 14); /*0x5a19a5*/
          else
            v16 = -1; /*0x5a198b*/
          PlaceMapSeedClassBuildings(v11, &v21, v16, -1); /*0x5a19b2*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a19bc*/
  }
  return result; /*0x5a19ce*/
}
// 0x6D8260
unsigned int MapClass::TransformCoordToScreen(int a2, unsigned int * a3)
{
  int *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int v7; // ecx
  float *v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int smudgeTypeIndex; // ecx
  int v13; // esi
  int v14; // ecx
  unsigned int result; // eax
  int v16; // esi
  int v17; // ebp
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  TacticalClass *v22; // eax
  _DWORD *v23; // [esp+10h] [ebp-54h]
  int v24; // [esp+14h] [ebp-50h]
  int v25; // [esp+18h] [ebp-4Ch]
  int v26; // [esp+1Ch] [ebp-48h]
  __int16 v27; // [esp+20h] [ebp-44h]
  __int16 v28; // [esp+22h] [ebp-42h]
  Vector2 v29; // [esp+30h] [ebp-34h] BYREF
  _DWORD v30[2]; // [esp+38h] [ebp-2Ch] BYREF
  float v31; // [esp+40h] [ebp-24h] BYREF
  float v32; // [esp+44h] [ebp-20h]
  int v33; // [esp+48h] [ebp-1Ch]
  int v34; // [esp+4Ch] [ebp-18h] BYREF
  int v35; // [esp+50h] [ebp-14h]
  int v36; // [esp+54h] [ebp-10h]
  float v37[3]; // [esp+58h] [ebp-Ch] BYREF

  v3 = a3; /*0x6d8264*/
  v4 = *a3; /*0x6d826f*/
  v33 = 0; /*0x6d827b*/
  v6 = v4 + *(_DWORD *)&this->__pad_5C[84]; /*0x6d828f*/
  v7 = a3[1] + *(_DWORD *)&this->__pad_5C[88]; /*0x6d8296*/
  *(_DWORD *)v29.__pad_0 = v6 - DSurface_ViewBounds.field_0; /*0x6d8298*/
  v29.Vector2_field_0x04 = v7 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d82a2*/
  v31 = (float)(v6 - DSurface_ViewBounds.field_0); /*0x6d82b1*/
  v32 = (float)(v7 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d82bd*/
  v8 = TransformMatrix3x4Point(v37, (float *)&this->__pad_D80[100], &v31); /*0x6d82c1*/
  v31 = *v8; /*0x6d82c8*/
  v32 = v8[1]; /*0x6d82d3*/
  v33 = *((_DWORD *)v8 + 2); /*0x6d82da*/
  IDA_LOWORD(v9) = Math::RoundToInt(v31); /*0x6d82de*/
  v10 = v9; /*0x6d82e7*/
  IDA_LOWORD(v11) = Math::RoundToInt(v32); /*0x6d82e9*/
  v34 = v10; /*0x6d82f0*/
  v35 = v11; /*0x6d82f6*/
  v36 = 0; /*0x6d82fa*/
  if ( v11 < 0 ) /*0x6d82fe*/
  {
    v10 -= v11; /*0x6d8300*/
    v11 = 0; /*0x6d8302*/
    v34 = v10; /*0x6d8304*/
    v35 = 0; /*0x6d8308*/
  }
  if ( v10 < 0 ) /*0x6d830e*/
  {
    v34 = 0; /*0x6d8312*/
    v35 = v11 - v10; /*0x6d8316*/
  }
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v34)->smudgeTypeIndex; /*0x6d8329*/
  v13 = v3[2]; /*0x6d833c*/
  v28 = IDA_HIWORD(smudgeTypeIndex) + 3; /*0x6d8344*/
  v27 = smudgeTypeIndex - 2; /*0x6d835d*/
  v14 = 0; /*0x6d8367*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v13) >> 32) >> 31; /*0x6d8369*/
  v16 = v13 / 60 + 7; /*0x6d836e*/
  v26 = v3[3] / 15 + 20; /*0x6d8372*/
  v25 = v16; /*0x6d8376*/
  if ( v26 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v17 = v14 + 1; /*0x6d8382*/
      IDA_LOWORD(v23) = v27 + v14 / 2; /*0x6d83a9*/
      IDA_HIWORD(v23) = v28 + (v14 + 1) / 2; /*0x6d83b4*/
      a3 = v23; /*0x6d83bf*/
      if ( v16 > 0 ) /*0x6d83c3*/
      {
        v24 = v16; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) ) /*0x6d83d7*/
          {
            v37[2] = 0.0; /*0x6d8417*/
            IDA_LODWORD(v37[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8; /*0x6d8433*/
            IDA_LODWORD(v37[1]) = (((IDA_SHIWORD(a3) << 8) + 128) / 256) << 8; /*0x6d8437*/
            v18 = Coord::To_ScreenRaw((int *)&v31, v37); /*0x6d843b*/
            *(_DWORD *)v29.__pad_0 = *v18; /*0x6d8442*/
            v19 = *(_DWORD *)&this->__pad_5C[88]; /*0x6d8446*/
            v20 = v18[1]; /*0x6d844c*/
            v21 = *(_DWORD *)&this->__pad_5C[84]; /*0x6d844f*/
            v29.Vector2_field_0x04 = v20; /*0x6d8455*/
            v30[1] = v19; /*0x6d845d*/
            v30[0] = v21; /*0x6d8466*/
            Vector2::Subtract(&v29, v30); /*0x6d846a*/
            *(_DWORD *)v29.__pad_0 -= 30; /*0x6d8486*/
            v22 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(v22, (int *)v29.__pad_0, v3); /*0x6d8491*/
          }
          IDA_LOWORD(a3) = (_WORD)a3 + 1; /*0x6d8496*/
          --IDA_HIWORD(a3); /*0x6d849f*/
          --v24; /*0x6d84a5*/
        }
        while ( v24 ); /*0x6d84a9*/
        v16 = v25; /*0x6d84af*/
      }
      result = v26; /*0x6d84b3*/
      v14 = v17; /*0x6d84b7*/
    }
    while ( v17 < v26 ); /*0x6d84bb*/
  }
  return result; /*0x6d84c1*/
}
// 0x703590
unsigned int * MapClass::FindPlacementCellsAlt(IUnknown * aP1, IUnknown * aP2)
{
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // edi
  int TileIndex; // eax
  int v10; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+14h] [ebp-10h] BYREF
  _BYTE v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)&this->attachedTag2))(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( aP2 ) /*0x7035b9*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)aP2 + 72))(aP2, v12); /*0x7035c2*/
  else
    v5 = (_DWORD *)(*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v12); /*0x7035fd*/
  IDA_LOWORD(aP2) = *v5 / 256; /*0x7035d5*/
  IDA_HIWORD(aP2) = v5[1] / 256; /*0x7035e9*/
  v6 = *(_DWORD *)this; /*0x70362d*/
  aP2 = aP2; /*0x70362f*/
  v7 = *(_DWORD *)((*(int (__thiscall **)(char *))(v6 + 132))(this) + 1460); /*0x70363b*/
  if ( v7 == -1 ) /*0x703644*/
    TileIndex = -1; /*0x70365f*/
  else
    TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&aP2, v7, *(&this->attachedBomb0)); /*0x703658*/
  aP2 = 0; /*0x703663*/
  *aP1 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
           &dword_87F7E8,
           (unsigned __int8)*(&this->attachedBomb0),
           &v11,
           (__int16 *)&aP2,
           v4,
           TileIndex,
           v7,
           (unsigned __int8)*(&this->attachedBomb0),
           1,
           1,
           0,
           0,
           0,
           1,
           (__int16 *)&aP2,
           0,
           0);
  return aP1; /*0x7036a7*/
}
// 0x7BCF50
int MapClass::isCellShrouded(unsigned short a2)
{
  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->MapClass_field_0x2C; /*0x7bcf58*/
  v5[0] = 0; /*0x7bcf60*/
  v5[1] = 0; /*0x7bcf64*/
  MapClass_field_0x28 = this->MapClass_field_0x28; /*0x7bcf68*/
  MapClass_field_0x14 = this->MapClass_field_0x14; /*0x7bcf6b*/
  v5[2] = MapClass_field_0x28; /*0x7bcf74*/
  return (*(int (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)MapClass_field_0x14 + 20))( /*0x7bcf83*/
           MapClass_field_0x14,
           v5,
           a2);
}
// 0x430F30
char MapClass::isCellAccessible(int a2)
{
  int v2; // eax
  char *i; // ecx

  v2 = 0; /*0x430f34*/
  for ( i = &this->q030 * a2; *(_DWORD *)i; i += 4 ) /*0x430f39*/
  {
    if ( ++v2 >= 3 ) /*0x430f48*/
      return 0; /*0x430f4c*/
  }
  return 1; /*0x430f4c*/
}
// 0x4758C0
char MapClass::loadTheaterINI(INIClass * aP1, char * a2, int a4)
{
  return INIClass::SetString(aP1, a2, &Theater_Array[112 * a4]); /*0x4758e6*/
}
// 0x48DC90
int MapClass::UnselectAll_ClearLimboLaunchers()
{
  int result; // eax
  int v2; // esi
  int v3; // edx
  int *v4; // ecx

  while ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x48dc97*/
    (*(void (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 336))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x48dca2*/
  Selection::SetCurrent(0); /*0x48dcb3*/
  v4 = (int *)&g_VisibilitySystem; /*0x48dcb8*/
  result = g_VisibilitySystem.customSound_controller[4]; /*0x431060*/
  if ( result ) /*0x431065*/
  {
    v2 = 8; /*0x431069*/
    do /*0x431085*/
    {
      v3 = 3; /*0x431070*/
      do /*0x431082*/
      {
        result = *v4; /*0x431075*/
        if ( *v4 ) /*0x431075*/
          *(_BYTE *)(result + 12) &= ~2u; /*0x43107b*/
        ++v4; /*0x43107e*/
        --v3; /*0x431081*/
      }
      while ( v3 ); /*0x431082*/
      --v2; /*0x431084*/
    }
    while ( v2 ); /*0x431085*/
  }
  return result; /*0x431089*/
}
// 0x4ACAC0
int MapClass::ProcessVisibilityFlags()
{
  int i; // ebp
  int j; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int k; // ebp
  int m; // edi
  _DWORD *v8; // eax
  __int16 v10; // [esp+10h] [ebp-8h] BYREF
  __int16 v11; // [esp+12h] [ebp-6h]
  __int16 v12[2]; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; i < 512; ++i ) /*0x4acac9*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4acad0*/
    {
      v10 = j; /*0x4acad9*/
      v11 = i; /*0x4acade*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)this, &v10) ) /*0x4acae3*/
      {
        v12[0] = j; /*0x4acaf0*/
        v12[1] = i; /*0x4acaf8*/
        v4 = CellCoord::To_CellObj((CellCoord *)this, v12); /*0x4acafd*/
        v5 = v4[75]; /*0x4acb02*/
        if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 ) /*0x4acb10*/
          v4[80] |= 0x20u; /*0x4acb12*/
      }
    }
  }
  for ( k = 0; k < 512; ++k ) /*0x4acb2a*/
  {
    for ( m = 0; m < 512; ++m ) /*0x4acb2c*/
    {
      v10 = m; /*0x4acb35*/
      v11 = k; /*0x4acb3a*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)this, &v10) /*0x4acb5a*/
        && (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)this, &v10) + 320) & 0x20) != 0 )
      {
        v8 = CellCoord::To_CellObj((CellCoord *)this, &v10); /*0x4acb63*/
        v8[80] &= ~0x20u; /*0x4acb7a*/
        MapClass::RevealCell(&v10); /*0x4acb7f*/
      }
    }
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x4acb9c*/
  return (*((int (__thiscall **)(MapClass *, int))this->MapClass_field_0x0 + 14))(this, 1); /*0x4acbaa*/
}
// 0x4ACBC0
int MapClass::ProcessFogTransition()
{
  int i; // eax
  int v3; // ecx
  int result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(); /*0x4acbc4*/
  for (); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4acbd2*/
  {
    v3 = *(_DWORD *)(i + 320); /*0x4acbd4*/
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 ) /*0x4acbe2*/
      *(_DWORD *)(i + 320) = v3 | 0x40; /*0x4acbe7*/
  }
  HouseClass::RevealShroudForAllies(0, 1); /*0x4acbfe*/
  LayerClass::CellIteratorReset(); /*0x4acc05*/
  for (); /*0x4acc13*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (*(_BYTE *)(result + 320) & 0x40) != 0 ) /*0x4acc1c*/
    {
      *(_DWORD *)(result + 320) &= ~0x40u; /*0x4acc27*/
      *(_DWORD *)v5 = *(_DWORD *)(result + 36); /*0x4acc34*/
      CellClass::ProcessVisibility(v5); /*0x4acc3b*/
    }
  }
  return result; /*0x4acc4b*/
}
// 0x4ACDA0
char MapClass::RevealCell(MouseClass * aP1)
{
  __int16 *v2; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int i; // edi
  int v7; // eax
  __int16 *v9; // [esp+8h] [ebp-4h]

  v2 = aP1; /*0x4acda3*/
  IDA_LOBYTE(aP1); /*0x4acdaa*/
  if ( (_BYTE)v4 ) /*0x4acdb1*/
  {
    v4 = CellCoord::To_CellObj((CellCoord *)this, v2); /*0x4acdba*/
    v5 = v4[75]; /*0x4acdbf*/
    if ( (v5 & 8) != 0 ) /*0x4acdc8*/
    {
      v4[75] = v5 & 0xFFFFFFE7; /*0x4acdd2*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4acddf*/
      for ( i = 0; i < 8; ++i ) /*0x4acde4*/
      {
        v7 = i & 7; /*0x4acde8*/
        IDA_LOWORD(v9) = *v2 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4ace09*/
        IDA_HIWORD(v9) = v2[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4ace12*/
        aP1 = v9; /*0x4ace1e*/
        v4 = CellCoord::To_CellObj((CellCoord *)this, (__int16 *)&aP1); /*0x4ace22*/
        if ( aP1 != *(__int16 **)v2 ) /*0x4ace2f*/
        {
          v4[75] &= ~0x10u; /*0x4ace46*/
          IDA_LOBYTE(v4) = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4ace52*/
        }
      }
    }
  }
  return (char)v4; /*0x4ace5e*/
}
// 0x4AE4C0
int MapClass::UpdateLightingPostProcess()
{
  int result; // eax

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x4ae4c5*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x4ae4d6*/
    TacticalMap::ComputeScreenTint(result); /*0x4ae4da*/
  return result; /*0x4ae4ed*/
}
// 0x4AEB10
int MapClass::GetScrollMode()
{
  int result; // eax

  if ( !IDA_LOBYTE(this->MapClass_field_0x119C) ) /*0x4aeb10*/
    return 0; /*0x4aeb10*/
  result = (int)this->MapClass_field_0x11A0; /*0x4aeb1a*/
  if ( !result ) /*0x4aeb22*/
    return 0; /*0x4aeb24*/
  return result; /*0x4aeb26*/
}
// 0x4F42F0
int MapClass::MarkForRedraw(int a2)
{
  int result; // eax

  if ( g_TacticalClass_Instance ) /*0x4f42f7*/
    g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4f42f9*/
  result = a2; /*0x4f4300*/
  if ( a2 ) /*0x4f4306*/
  {
    if ( this->vfptr[3] != 2 ) /*0x4f430c*/
      this->vfptr[3] = a2; /*0x4f430e*/
    MapClass::IncrementRedrawCounter((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x4f4316*/
  }
  return result; /*0x4f431b*/
}
// 0x5656D0
int MapClass::IsCellPassable(int a1, int a2)
{
  unsigned int v2; // eax
  int *v3; // eax

  v2 = (__int16)a2 + (IDA_SHIWORD(a2) << 9); /*0x5656ed*/
  if ( v2 >= 0x40000 || (v3 = (int *)*((_DWORD *)a1->MapClass_field_0x13C + v2)) == 0 ) /*0x565707*/
  {
    v3 = &g_MissionQueueFrame.briefing[130]; /*0x56570d*/
    g_MissionQueueFrame.briefing[139] = a2; /*0x565712*/
  }
  return ((unsigned int)v3[75] >> 3) & 1; /*0x565725*/
}
// 0x565B00
int MapClass::FreeAllCells()
{
  int i; // ecx
  int v3; // eax
  int j; // edi
  int v5; // ecx
  int result; // eax

  for ( i = 0; i < this->MapClass_field_0x140; ++i ) /*0x565b0e*/
  {
    v3 = *((_DWORD *)this->MapClass_field_0x13C + i); /*0x565b16*/
    if ( v3 ) /*0x565b1b*/
    {
      *(_DWORD *)(v3 + 44) = 0; /*0x565b1d*/
      *(_DWORD *)(v3 + 48) = 0; /*0x565b20*/
    }
  }
  for ( j = 0; j < this->MapClass_field_0x140; ++j ) /*0x565b39*/
  {
    v5 = *((_DWORD *)this->MapClass_field_0x13C + j); /*0x565b41*/
    if ( v5 ) /*0x565b46*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x565b4c*/
      *((_DWORD *)this->MapClass_field_0x13C + j) = 0; /*0x565b55*/
    }
  }
  ReturnFalse2(); /*0x565b67*/
  result = this->MapClass_field_0x140; /*0x565b6c*/
  if ( result < 0x40000 ) /*0x565b78*/
  {
    (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_134[4] + 8))(&this->__pad_134[4], 0x40000, 0); /*0x565b8c*/
    for ( result = 0; result < this->MapClass_field_0x140; *((_DWORD *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565b99*/
      ++result; /*0x565ba1*/
  }
  return result; /*0x565bb0*/
}
// 0x57A320
int MapClass::BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3)
{
  Cell *v4; // ebp
  int result; // eax
  signed int v6; // ebx
  bool v7; // zf
  int *NeighbourContent; // esi
  int v9; // edx
  int v10; // edi
  char *CellData; // edi

  v4 = (Cell *)aP1; /*0x57a328*/
  result = *(_DWORD *)(aP1 + 56); /*0x57a330*/
  if ( result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 12 ) /*0x57a340*/
  {
    result = Cell::GetTerrainMask((Cell *)this, (int *)aP1, 2); /*0x57a349*/
    if ( result == 199 /*0x57a37c*/
      || result == 124
      || result == 241
      || result == 31
      || result == 198
      || result == 108
      || result == 177
      || result == 27 )
    {
      v6 = 0; /*0x57a387*/
      v7 = (_BYTE)aP3 == 0; /*0x57a38a*/
      *(_DWORD *)(aP1 + 56) = 0xFFFF; /*0x57a38d*/
      *(_BYTE *)(aP1 + 282) = 0; /*0x57a394*/
      if ( !v7 ) /*0x57a39a*/
        *((_DWORD *)Tactical::GetCellData((Tactical *)(aP1 + 36)) + 14) = aP2; /*0x57a3a8*/
      do /*0x57a41e*/
      {
        NeighbourContent = (int *)Cell::GetNeighbourContent(v4, v6); /*0x57a3b3*/
        v9 = NeighbourContent[9]; /*0x57a3b5*/
        aP3 = v9; /*0x57a3ba*/
        result = IDA_SHIWORD(v9); /*0x57a3c1*/
        v10 = IDA_SHIWORD(v9) + (__int16)v9; /*0x57a3c6*/
        if ( v10 > g_MissionQueueFrame.localVariables[160] ) /*0x57a3cf*/
        {
          if ( (__int16)aP3 - IDA_SHIWORD(aP3) < g_MissionQueueFrame.localVariables[160] ) /*0x57a3db*/
          {
            result = IDA_SHIWORD(aP3) - (__int16)aP3; /*0x57a3dd*/
            if ( result < g_MissionQueueFrame.localVariables[160] && v10 <= g_MissionQueueFrame.localVariables[161] ) /*0x57a3ef*/
            {
              aP3 = v9; /*0x57a3f5*/
              CellData = Tactical::GetCellData((Tactical *)&aP3); /*0x57a402*/
              *((_DWORD *)CellData + 16) = -1; /*0x57a407*/
              result = Cell::GetTerrainMask((Cell *)this, NeighbourContent, 2); /*0x57a40e*/
              *((_DWORD *)CellData + 16) = result; /*0x57a413*/
            }
          }
          v4 = (Cell *)aP1; /*0x57a416*/
        }
        ++v6; /*0x57a41a*/
      }
      while ( v6 < 8 ); /*0x57a41e*/
    }
  }
  return result; /*0x57a423*/
}
// 0x57B790
int MapClass::TriggerEVA(IUnknown * aP0)
{
  int v1; // ebx
  int v2; // edi
  double v3; // st7
  int result; // eax
  unsigned int v5; // eax
  void *v6; // ecx

  v1 = -5; /*0x57b79f*/
  do /*0x57b854*/
  {
    v2 = -5; /*0x57b7a4*/
    do /*0x57b84a*/
    {
      v3 = Math::Sqrt( /*0x57b7f6*/
             (double)(__int16)-(__int16)v1 * (double)(__int16)-(__int16)v1
           + (double)(__int16)-(__int16)v2 * (double)(__int16)-(__int16)v2);
      result = Math::RoundToInt(v3); /*0x57b7fe*/
      if ( (__int16)result <= 5 ) /*0x57b807*/
      {
        v5 = *aP0 + (aP0[1] << 9); /*0x57b813*/
        if ( v5 < 0x40000 && (result = *(_DWORD *)(dword_87F924 + 4 * v5)) != 0 ) /*0x57b829*/
        {
          v6 = (void *)result; /*0x57b82b*/
        }
        else
        {
          result = *(_DWORD *)aP0; /*0x57b82f*/
          v6 = &unk_ABDC50; /*0x57b831*/
          dword_ABDC74 = *(_DWORD *)aP0; /*0x57b836*/
        }
        if ( v6 ) /*0x57b83d*/
          result = CellClass::ReduceTiberium((int)v6, 1); /*0x57b841*/
      }
      ++v2; /*0x57b846*/
    }
    while ( v2 <= 5 ); /*0x57b84a*/
    ++v1; /*0x57b850*/
  }
  while ( v1 <= 5 ); /*0x57b854*/
  return result; /*0x57b85a*/
}
// 0x581F50
unsigned int * MapClass::BuildSubzones()
{
  int v2; // esi
  char *pad_BC; // edi

  v2 = 2; /*0x581f55*/
  pad_BC = this->__pad_BC; /*0x581f5a*/
  do /*0x581f75*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)pad_BC + 12))(pad_BC); /*0x581f64*/
    Subzone::BuildGraph(v2--); /*0x581f6a*/
    pad_BC -= 24; /*0x581f70*/
  }
  while ( v2 >= 0 ); /*0x581f75*/
  return MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x581f81*/
}
// 0x588BF0
MapClass * MapClass::Destru_vt04(char a2)
{
  MapClass::Destruct(); /*0x588bf3*/
  if ( (a2 & 1) != 0 ) /*0x588bfd*/
    RA2_OPDEL(); /*0x588c00*/
  return (char *)this; /*0x588c0a*/
}
// 0x588DE0
unsigned int MapClass::initCellVectors(int a2)
{
  if ( this->q00C ) /*0x588de0*/
    return (a2 - this->q004) / 0x24u; /*0x588dfe*/
  else
    return 0; /*0x588de7*/
}
// 0x588EF0
int MapClass::InitCellVe_vt06(int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x588efa*/
}
// 0x589060
VectorClass_flat * MapClass::InitCellVe_vt00(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x589063*/
  *this = &(void*)(void*)&VectorClass_CellClass___vftable; /*0x589066*/
  if ( v3 && this->IsAllocated ) /*0x589070*/
  {
    RA2_OPDEL(v3); /*0x589078*/
    this->Items = 0; /*0x589080*/
  }
  this->IsAllocated = 0; /*0x58908b*/
  this->Capacity = 0; /*0x589091*/
  if ( (a2 & 1) != 0 ) /*0x589098*/
    RA2_OPDEL(); /*0x58909b*/
  return this; /*0x5890a5*/
}
// 0x5894A0
void MapClass::allocateCellArrays()
{
  if ( this->Items && this->IsAllocated ) /*0x5894ad*/
  {
    RA2_OPDEL(this->Items); /*0x5894b3*/
    this->Items = 0; /*0x5894bb*/
  }
  this->IsAllocated = 0; /*0x5894be*/
  this->Capacity = 0; /*0x5894c1*/
}
// 0x5894D0
int MapClass::FindSubzoneConnectionIndex(unsigned short * a2)
{
  int result; // eax
  int v3; // esi
  _WORD *i; // ecx

  if ( !this->IsInitialized ) /*0x5894d0*/
    return 0; /*0x5894dc*/
  v3 = this->Capacity; /*0x5894e2*/
  result = 0; /*0x5894e5*/
  if ( v3 <= 0 ) /*0x5894e9*/
    return -1; /*0x589520*/
  for ( i = this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 ) /*0x5894ef*/
  {
    if ( ++result >= v3 ) /*0x58951e*/
      return -1; /*0x58951e*/
  }
  return result; /*0x5894da*/
}
// 0x589530
unsigned int MapClass::initSubzoneData(int a2)
{
  if ( this->IsInitialized ) /*0x589530*/
    return (unsigned int)(a2 - this->Items) >> 4; /*0x589545*/
  else
    return 0; /*0x589537*/
}
// 0x589CA0
char MapClass::InitCellVe_vt01(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x589ca2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x589cad*/
  {
    v3 = 0; /*0x589caf*/
    if ( v2 <= 0 ) /*0x589cb3*/
      return 1; /*0x589cd3*/
    v4 = (unsigned int *)this->Items; /*0x589cb5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x589cbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x589cc4*/
    {
      ++v3; /*0x589cc6*/
      ++v4; /*0x589cc7*/
      if ( v3 >= v2 ) /*0x589ccc*/
        return 1; /*0x589ccc*/
    }
  }
  return 0; /*0x589cce*/
}
// 0x589CE0
char MapClass::InitCellVe_vt02(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x589cec*/
  {
    this->IsInitialized = 0; /*0x589cf6*/
    if ( a3 ) /*0x589cfc*/
      v4 = a3; /*0x589d12*/
    else
      v4 = operator new(4 * a2); /*0x589d0e*/
    this->IsInitialized = 1; /*0x589d16*/
    if ( v4 ) /*0x589d1a*/
    {
      if ( this->Items ) /*0x589d25*/
      {
        v6 = this->q008; /*0x589d2c*/
        if ( a2 < a2 ) /*0x589d31*/
          a2 = a2; /*0x589d33*/
        for ( i = 0; i < a2; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x589d39*/
          ++i; /*0x589d3e*/
        if ( this->IsAllocated ) /*0x589d4b*/
        {
          RA2_OPDEL(this->q004); /*0x589d56*/
          this->Items = 0; /*0x589d5e*/
        }
      }
      this->Items = v4; /*0x589d67*/
      this->Capacity = a2; /*0x589d6f*/
      this->IsAllocated = a3 == 0; /*0x589d72*/
      return 1; /*0x589d78*/
    }
    else
    {
      return 0; /*0x589d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x589d82*/
    return 1; /*0x589d88*/
  }
}
// 0x589D90
void MapClass::InitCellVe_vt03()
{
  if ( this->Items && this->IsAllocated ) /*0x589d9d*/
  {
    RA2_OPDEL(this->Items); /*0x589da3*/
    this->Items = 0; /*0x589dab*/
  }
  this->IsAllocated = 0; /*0x589dae*/
  this->Capacity = 0; /*0x589db1*/
}
// 0x589DC0
int MapClass::InitCellVe_vt04(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x589dc0*/
    return 0; /*0x589dc8*/
  v3 = this->Capacity; /*0x589dce*/
  result = 0; /*0x589dd1*/
  if ( v3 <= 0 ) /*0x589dd5*/
    return -1; /*0x589dec*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x589ddb*/
  {
    if ( ++result >= v3 ) /*0x589dea*/
      return -1; /*0x589dea*/
  }
  return result; /*0x589dca*/
}
// 0x589E00
unsigned int MapClass::InitCellVe_vt05(int a2)
{
  if ( this->IsInitialized ) /*0x589e00*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x589e15*/
  else
    return 0; /*0x589e07*/
}
// 0x5A0090
MapClass * MapClass::SetObstruction(short * a0, MapClass * aP1)
{
  int result; // eax

  if ( dword_ABED10 ) /*0x5a0098*/
  {
    result = 80 * (*a0 + g_MapCellWidth * a0[1]); /*0x5a00b5*/
    *(_DWORD *)((char *)dword_ABED10 + result + 56) = aP1; /*0x5a00b8*/
  }
  return result; /*0x5a00bc*/
}
// 0x5A00C0
int MapClass::GetTileDataField14(MapResourceClass * aP0)
{
  if ( dword_ABED10 ) /*0x5a00c8*/
    return *((_DWORD *)dword_ABED10 + 20 * *aP0 + 20 * g_MapCellWidth * aP0[1] + 14); /*0x5a00ea*/
  else
    return -1; /*0x5a00ca*/
}
// 0x5AC5A0
void MapClass::checkCellBounds()
{
  void *v2; // eax

  v2 = this->q004; /*0x5ac5a6*/
  this->q010 = 0; /*0x5ac5a9*/
  if ( v2 && this->IsAllocated ) /*0x5ac5b0*/
  {
    RA2_OPDEL(v2); /*0x5ac5b6*/
    this->Items = 0; /*0x5ac5be*/
  }
  this->IsAllocated = 0; /*0x5ac5c1*/
  this->q008 = 0; /*0x5ac5c4*/
}
// 0x5AC5D0
unsigned int MapClass::validateCellCoord(int a2)
{
  if ( this->IsInitialized ) /*0x5ac5d0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5ac5e5*/
  else
    return 0; /*0x5ac5d7*/
}
// 0x5AD0C0
int MapClass::updatePathfindingGrid(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x5ad0c0*/
  result = 0; /*0x5ad0c3*/
  if ( v2 <= 0 ) /*0x5ad0c8*/
    return -1; /*0x5ad0df*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x5ad0ce*/
  {
    if ( ++result >= v2 ) /*0x5ad0dd*/
      return -1; /*0x5ad0dd*/
  }
  return result; /*0x5ad0e2*/
}
// 0x5F60A0
int MapClass::SetCellOverlayFlag()
{
  CellClass *v1; // eax
  int altOccupationFlags; // ecx
  int result; // eax
  CellClass *v4; // eax
  int occupationFlags; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f60d3*/
    && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 )
  {
    v1 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f60db*/
    altOccupationFlags = v1->altOccupationFlags; /*0x5f60e0*/
    result = (int)&v1->altOccupationFlags; /*0x5f60e6*/
    *(_DWORD *)result = altOccupationFlags | 0x40; /*0x5f60ef*/
  }
  else
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f60fa*/
    occupationFlags = v4->occupationFlags; /*0x5f60ff*/
    result = (int)&v4->occupationFlags; /*0x5f6105*/
    *(_DWORD *)result = occupationFlags | 0x40; /*0x5f610e*/
  }
  return result; /*0x5f60ee*/
}
// 0x5F6120
int MapClass::ClearCellOverlayFlag()
{
  CellClass *v1; // eax
  int altOccupationFlags; // ecx
  int result; // eax
  CellClass *v4; // eax
  int occupationFlags; // ecx
  _DWORD *v6; // [esp+8h] [ebp+4h]

  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f6153*/
    && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 )
  {
    v1 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f615b*/
    altOccupationFlags = v1->altOccupationFlags; /*0x5f6160*/
    result = (int)&v1->altOccupationFlags; /*0x5f6166*/
    *(_DWORD *)result = altOccupationFlags & 0xFFFFFFBF; /*0x5f616f*/
  }
  else
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6); /*0x5f617a*/
    occupationFlags = v4->occupationFlags; /*0x5f617f*/
    result = (int)&v4->occupationFlags; /*0x5f6185*/
    *(_DWORD *)result = occupationFlags & 0xFFFFFFBF; /*0x5f618e*/
  }
  return result; /*0x5f616e*/
}