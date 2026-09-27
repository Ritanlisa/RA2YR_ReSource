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

// 0x4112D0
namespace gamemd {
int MapClass::isLocationShrouded(unsigned short a2)
{
  int v2; // eax
  int v3;
  unsigned int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = *(&this->q0041); /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  v2 = *(&this->q0040); /*0x4112e8*/
  v3 = this->q014; /*0x4112eb*/
  v5[2] = v2; /*0x4112f4*/
  return (*(int (__thiscall **)(int, unsigned int *, unsigned int))(*(unsigned int *)v3 + 20))(v3, v5, a2); /*0x411303*/
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
  unsigned int *result; // eax
  int v13; // ecx
  int v14; // ecx

  v1 = (void **)(&this->q01C6); /*0x42c1c8*/
  v2 = (char *)(&unk_87F810 - (void *)this); /*0x42c1cb*/
  v3 = 3; /*0x42c1cd*/
  do /*0x42c27c*/
  {
    if ( *(v1 - 3) ) /*0x42c1d2*/
      RA2_OPDEL(*(v1 - 3)); /*0x42c1da*/
    v4 = (char *)operator new(4 * *(int *)((char *)v1 + (unsigned int)v2)); /*0x42c1e9*/
    *(v1 - 3) = v4; /*0x42c1ee*/
    v5 = *(int *)((char *)v1 + (unsigned int)v2) - 1; /*0x42c1f7*/
    if ( v5 >= 0 ) /*0x42c1f8*/
    {
      v6 = &v4[4 * v5]; /*0x42c1fa*/
      v7 = *(int *)((char *)v1 + (unsigned int)v2); /*0x42c1fd*/
      do /*0x42c208*/
      {
        *(unsigned int *)v6 = 0; /*0x42c1fe*/
        v6 -= 4; /*0x42c204*/
        --v7; /*0x42c207*/
      }
      while ( v7 ); /*0x42c208*/
    }
    if ( *v1 ) /*0x42c20a*/
      RA2_OPDEL(*v1); /*0x42c211*/
    v8 = (char *)operator new(4 * *(int *)((char *)v1 + (unsigned int)v2)); /*0x42c220*/
    *v1 = v8; /*0x42c225*/
    v9 = *(int *)((char *)v1 + (unsigned int)v2) - 1; /*0x42c22d*/
    if ( v9 >= 0 ) /*0x42c22e*/
    {
      v10 = &v8[4 * v9]; /*0x42c230*/
      v11 = *(int *)((char *)v1 + (unsigned int)v2); /*0x42c233*/
      do /*0x42c23e*/
      {
        *(unsigned int *)v10 = 0; /*0x42c234*/
        v10 -= 4; /*0x42c23a*/
        --v11; /*0x42c23d*/
      }
      while ( v11 ); /*0x42c23e*/
    }
    if ( v1[3] ) /*0x42c240*/
      RA2_OPDEL(v1[3]); /*0x42c248*/
    result = operator new(4 * *(int *)((char *)v1 + (unsigned int)v2)); /*0x42c257*/
    v1[3] = result; /*0x42c25c*/
    v13 = *(int *)((char *)v1 + (unsigned int)v2) - 1; /*0x42c265*/
    if ( v13 >= 0 ) /*0x42c266*/
    {
      result += v13; /*0x42c268*/
      v14 = *(int *)((char *)v1 + (unsigned int)v2); /*0x42c26b*/
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
  int v4; // eax
  int v5; // eax
  int result; // eax
  unsigned int *v7; // esi
  int v8; // ecx
  int v9; // ecx

  a2 = a2; /*0x485134*/
  v4 = *(&this->q0045); /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(unsigned int *)(v4 + 44); /*0x485143*/
    *(&this->q0045) = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(int *, int *))(dword_880944 + 16))(&dword_880944, ((char *)&this->q008 + 1)); /*0x48515c*/
    if ( v5 != -1 && v5 < dword_880954 && v5 < --dword_880954 ) /*0x485177*/
    {
      do /*0x48518f*/
      {
        ++v5; /*0x48517f*/
        *(unsigned int *)(dword_880948 + 4 * v5 - 4) = *(unsigned int *)(dword_880948 + 4 * v5); /*0x485183*/
      }
      while ( v5 < dword_880954 ); /*0x48518f*/
    }
  }
  if ( *(&this->q0041) == a2 ) /*0x485194*/
    *(&this->q0041) = 0; /*0x485196*/
  if ( *(&this->q0042) == a2 ) /*0x4851a0*/
    *(&this->q0042) = 0; /*0x4851a2*/
  result = *(&this->q0040); /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 44))(a2); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      v7 = (unsigned int *)*(&this->q0040); /*0x4851bc*/
      a2 = a2; /*0x4851bf*/
      result = (*(int (__thiscall **)(unsigned int *, int *))(*v7 + 16))(v7, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = v7[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( v7[4] = v9; result < v7[4]; *(unsigned int *)(v7[1] + 4 * result - 4) = *(unsigned int *)(v7[1] + 4 * result) ) /*0x4851e1*/
            ++result; /*0x4851e6*/
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
  unsigned int *v5; // eax
  int16_t *v6; // esi
  char v7; // bl
  int16_t v9; // dx
  int v10; // ecx

  a2 = a2; /*0x4a95a2*/
  IDA_LOWORD(v5) = *a2; /*0x4a95aa*/
  if ( *(unsigned int *)a2 != dword_8A03F8 ) /*0x4a95b5*/
  {
    v6 = this->q117C; /*0x4a95c4*/
    v7 = (char)a2; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
      v6 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
      v9 = *v6; /*0x4a95e2*/
      IDA_LOWORD(v6) = a2[1] + v6[1]; /*0x4a95ed*/
      IDA_LOWORD(a2) = *a2 + v9; /*0x4a95f1*/
      IDA_HIWORD(a2) = (unsigned short)v6; /*0x4a95f6*/
      a2 = a2; /*0x4a9603*/
      IDA_LOBYTE((int16_t *)&a2); /*0x4a960a*/
      if ( (unsigned char)v5 ) /*0x4a9611*/
      {
        v5 = CellCoord::To_CellObj(this, (int16_t *)&a2); /*0x4a961a*/
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
} // namespace gamemd
// 0x4AC960
namespace gamemd {
int MapClass::ToggleZoom(int a2)
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
  if ( v4 != *(unsigned char *)&this->q11B4 ) /*0x4ac98f*/
  {
    result = this->q11A8; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 /*0x4ac9ad*/
        && !(uint8_t)((unsigned int (__stdcall *)(unsigned int))MapClass::isCellAccessible)(*((unsigned int *)HouseClass_Player
                                                                                        + 12)) )
      {
        v4 = 0; /*0x4ac9b6*/
      }
      v5 = *this; /*0x4ac9b8*/
      this->q11B1 = 0; /*0x4ac9c0*/
      this->q11B2 = 0; /*0x4ac9c7*/
      this->q11B3 = 0; /*0x4ac9ce*/
      this->q11B0 = 0; /*0x4ac9d5*/
      (*(void (__thiscall **)(int *, unsigned int, unsigned int))(v5 + 72))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        *(unsigned char *)&this->q11B4 = 1; /*0x4ac9e3*/
        return MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac9ea*/
      }
      else
      {
        v6 = *this; /*0x4ac9f4*/
        *(unsigned char *)&this->q11B4 = 0; /*0x4ac9f8*/
        return 0; /*0x4ac9ff*/
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
  int16_t v3; // bp
  unsigned int *v4; // ebx
  int j; // edi
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // eax
  signed int v11; // edi
  int v12; // eax
  int16_t v14[2]; // [esp+10h] [ebp-3Ch] BYREF
  int16_t v15[2]; // [esp+14h] [ebp-38h] BYREF
  unsigned int *v16; // [esp+18h] [ebp-34h]
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
  int v18[3]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v19[4]; // [esp+3Ch] [ebp-10h] BYREF
  int i; // [esp+50h] [ebp+4h]

  v3 = 0; /*0x4ad7ef*/
  v4 = this; /*0x4ad7f2*/
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((int)a2, (int)&off_81FFF0, 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI(&off_81FFF0, g_INI_Key_Theater, *((unsigned int *)g_ScenarioClass_Instance + 1174)); /*0x4ad81b*/
  INIClass::SetRect(a2, (uint8_t *)&off_81FFF0, g_INI_Key_Size, v4 + 59); /*0x4ad835*/
  INIClass::SetRect(a2, (uint8_t *)&off_81FFF0, g_INI_Key_LocalSize, v4 + 63); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints(a2); /*0x4ad85b*/
  INIClass::ClearSection((int)a2, (int)g_INI_Key_CellTags, 0); /*0x4ad86a*/
  for ( i = 0; i < 512000; i += 1000 ) /*0x4ad86f*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4ad873*/
    {
      v14[0] = j; /*0x4ad87c*/
      v14[1] = v3; /*0x4ad881*/
      if ( *((unsigned int *)CellCoord::To_CellObj(v4, v14) + 15) ) /*0x4ad88b*/
      {
        v15[0] = j; /*0x4ad896*/
        v15[1] = v3; /*0x4ad89e*/
        v6 = *((unsigned int *)CellCoord::To_CellObj(v4, v15) + 15); /*0x4ad8a8*/
        if ( v6 && *(unsigned int *)(v6 + 36) ) /*0x4ad8af*/
        {
          wsprintfA(v17, "%d", j + i); /*0x4ad8c7*/
          INIClass::SetString(a2, (uint8_t *)g_INI_Key_CellTags, v17, (char *)(*(unsigned int *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  v7 = (*(int (__thiscall **)(int))(*(unsigned int *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x4ad92b*/
  v8 = (*(int (__thiscall **)(int))(*(unsigned int *)DSurface_Alternate + 124))(DSurface_Alternate) * v7; /*0x4ad932*/
  v9 = (*(int (__thiscall **)(int))(*(unsigned int *)DSurface_Alternate + 112))(DSurface_Alternate) * v8; /*0x4ad940*/
  v10 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x4ad94d*/
  v18[1] = 0; /*0x4ad956*/
  v18[2] = 0; /*0x4ad95a*/
  v18[0] = (int)&Pipe_vftable; /*0x4ad95e*/
  Buffer::Init(v19, v10, v9); /*0x4ad966*/
  v19[3] = 0; /*0x4ad96f*/
  v18[0] = (int)&BufferPipe_vftable; /*0x4ad979*/
  v11 = MapClass::DecompressCellData(v18); /*0x4ad990*/
  INIClass::ClearSection((int)a2, (int)aIsomappack, 0); /*0x4ad992*/
  INIClass::ClearSection((int)a2, (int)aIsomappack2, 0); /*0x4ad9a0*/
  INIClass::ClearSection((int)a2, (int)aIsomappack3, 0); /*0x4ad9af*/
  INIClass::ClearSection((int)a2, (int)aIsomappack4, 0); /*0x4ad9be*/
  INIClass::ClearSection((int)a2, (int)aIsomappack5, 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
    v12 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x4ad9e2*/
    INIClass::ReadBase64Data(a2, (uint8_t *)aIsomappack5, v12, v11); /*0x4ad9ee*/
    (*(void (__thiscall **)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x4ad9fb*/
  }
  (*(void (__thiscall **)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x4ada06*/
  Vector::Clear((int)v19); /*0x4ada0d*/
  return Pipe::Dtor(v18); /*0x4ada1b*/
}
} // namespace gamemd
// 0x4AEB30
namespace gamemd {
int MapClass::SetScrollMode(MouseClass * aP1)
{
  *(unsigned int *)((char *)&this->q4536 + 330) = aP1; /*0x4aeb36*/
  *(unsigned char *)&this->q119C = aP1 != 0; /*0x4aeb3f*/
  return aP1 != 0; /*0x4aeb45*/
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
  v4 = *(unsigned int *)(a1 + 156); /*0x506d8c*/
  v5 = (int16_t)(v4 / 256); /*0x506d94*/
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
  v8 = (int16_t)(*(unsigned int *)(a1 + 160) / 256); /*0x506dd1*/
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
        v19 = Math::Sqrt((double)(v12 + (v6 - (int16_t)(v4 / 256)) * (v6 - (int16_t)(v4 / 256)))); /*0x506e3f*/
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
  uint8_t *v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  unsigned int *v8; // ecx
  unsigned int v9; // eax
  CampaignClass * v10;
  int v12[22]; // [esp+Ch] [ebp-6Ch] BYREF
  unsigned char v13[12]; // [esp+64h] [ebp-14h] BYREF
  int v14; // [esp+70h] [ebp-8h]

  CCFileClass::Construct(v12, (char *)(&this->u32_12C7)); /*0x547033*/
  Size = CCFileClass::GetSize(v12); /*0x547041*/
  if ( this->q0A4 ) /*0x547043*/
    RA2_OPDEL(*(void **)(&this->q0404)); /*0x54704e*/
  v3 = operator new(Size); /*0x547057*/
  this->q0A4 = v3; /*0x547063*/
  CCFileClass::Read(v12, v3, Size); /*0x54706b*/
  v4 = *(uint8_t **)(&this->q0404); /*0x547070*/
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
  TerrainClass::InitTheatre(); /*0x5470cf*/
  v12[0] = (int)&CCFileClass_vftable; /*0x5470d8*/
  v14 = 0; /*0x5470e0*/
  Vector::Clear((int)v13); /*0x5470e8*/
  v12[0] = (int)&off_7E1668; /*0x5470f1*/
  BufferIOFileClass::Dtor(v12); /*0x5470f9*/
  return Size; /*0x5470fe*/
}
} // namespace gamemd
// 0x554A80
namespace gamemd {
int MapClass::ScrollOnce(AbstractClass * aP1)
{
  char result; // al

  result = this->Activated; /*0x554a80*/
  if ( result ) /*0x554a85*/
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
  unsigned int *v2; // edi
  unsigned int **v3; // ebp
  unsigned int *v4; // edi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  char *v8; // edi
  int v9; // ebp
  void *v10; // ecx
  void *v11; // eax
  int v12; // [esp+8h] [ebp-4h]

  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->somecount_4C ) /*0x5652df*/
  {
    RA2_OPDEL(*((void **)&this->q0086)); /*0x5652e9*/
    this->somecount_4C = 0; /*0x5652f1*/
  }
  v2 = (unsigned int *)this->q014; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (__thiscall ***)(unsigned int, int))*v2)(*v2, 3); /*0x565307*/
    RA2_OPDEL(v2); /*0x56530a*/
    this->q014 = 0; /*0x565312*/
  }
  if ( this->q070 ) /*0x565315*/
  {
    RA2_OPDEL(*((void **)&this->q0088)); /*0x56531d*/
    this->q070 = 0; /*0x565325*/
  }
  v3 = (unsigned int **)(&this->q0308); /*0x565328*/
  v12 = 3; /*0x56532e*/
  do /*0x565361*/
  {
    v4 = *v3; /*0x565336*/
    if ( *v3 ) /*0x565336*/
    {
      if ( *v4 ) /*0x56533d*/
        (**(void (__thiscall ***)(unsigned int, int))*v4)(*v4, 3); /*0x565347*/
      RA2_OPDEL(v4); /*0x56534a*/
      *v3 = 0; /*0x565352*/
    }
    ++v3; /*0x565359*/
    --v12; /*0x56535d*/
  }
  while ( v12 ); /*0x565361*/
  v5 = (void *)this->q1160; /*0x565363*/
  if ( v5 && *(&this->u32_6F47) ) /*0x565378*/
  {
    RA2_OPDEL(v5); /*0x565381*/
    this->q1160 = 0; /*0x565389*/
  }
  *(&this->u32_6F47) = 0; /*0x56538f*/
  this->q1164 = 0; /*0x565395*/
  v6 = (void *)this->q13C; /*0x56539b*/
  if ( v6 && *(&this->q0805) ) /*0x5653af*/
  {
    RA2_OPDEL(v6); /*0x5653b8*/
    this->q13C = 0; /*0x5653c0*/
  }
  *(&this->q0805) = 0; /*0x5653c6*/
  this->q140 = 0; /*0x5653cc*/
  v7 = (void *)this->q0D8; /*0x5653d2*/
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
    v10 = (void *)*((unsigned int *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    if ( v10 && v8[13] ) /*0x565420*/
    {
      SubzoneConnectionVector::Destruct(v10, 3); /*0x56542b*/
      *((unsigned int *)v8 + 1) = 0; /*0x565430*/
    }
    --v9; /*0x565433*/
    v8[13] = 0; /*0x565434*/
    *((unsigned int *)v8 + 2) = 0; /*0x565437*/
  }
  while ( v9 ); /*0x56543a*/
  v11 = (void *)this->q054; /*0x56543c*/
  if ( v11 && *(&this->outBuffer3) ) /*0x56544c*/
  {
    RA2_OPDEL(v11); /*0x565452*/
    this->q054 = 0; /*0x56545a*/
  }
  *(&this->outBuffer3) = 0; /*0x56545d*/
  this->q058 = 0; /*0x565460*/
  *(unsigned int *)this = &off_7EA6FC; /*0x565463*/
}
} // namespace gamemd
// 0x565800
namespace gamemd {
VectorClass_flat * * MapClass::Destru_vt05()
{
  int *v1; // ebp
  int v2; // eax
  unsigned int *v3; // eax
  unsigned int *v4; // edi
  unsigned int *v5; // eax
  unsigned int *v6; // ebp
  unsigned int *v7; // esi
  int v8; // ebx
  unsigned int *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int *v13; // esi
  unsigned int *v14; // eax
  unsigned int *v15; // edi
  unsigned int *v16; // eax
  unsigned int *v17; // ebp
  unsigned int *v18; // esi
  int v19; // ebx
  unsigned int *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned int *v26; // [esp+14h] [ebp-Ch]
  unsigned int *v27; // [esp+18h] [ebp-8h]
  int v28; // [esp+1Ch] [ebp-4h]

  VectorCursor_uint_DynamicVectorClass_uint____13_::Add(); /*0x56580d*/
  this->q14C = 512; /*0x565819*/
  this->q150 = 512; /*0x56581f*/
  v2 = *this; /*0x565825*/
  this->q154 = 0x40000; /*0x565828*/
  this->InitCellVector(); /*0x565832*/
  if ( this->q014 ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = operator new(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = Cell::DecodeFlags; /*0x56585e*/
    v3[2] = 256; /*0x565865*/
    v3[3] = 20; /*0x56586c*/
    v5 = operator new(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = 256; /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        v7[5] = 10; /*0x56589c*/
        v7[4] = 0; /*0x5658a3*/
        v7 += 6; /*0x5658aa*/
        --v8; /*0x5658ad*/
      }
      while ( v8 ); /*0x5658ae*/
      v9 = v6; /*0x5658b0*/
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
        *(unsigned int *)(v12 + *v4 + 20) = 20; /*0x5658cf*/
        v12 += 24; /*0x5658d6*/
      }
      while ( v11 < v4[2] ); /*0x5658db*/
      this->q014 = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  this->q014 = (int)v4; /*0x5658e9*/
  LABEL_14:
  v13 = &this->LevelAndPassabilityStruct2pointer_70; /*0x5658f3*/
  v26 = &this->q080; /*0x5658ff*/
  v27 = &this->LevelAndPassabilityStruct2pointer_70; /*0x565903*/
  v28 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (__thiscall **)(unsigned int *))(*v13 + 12))(v13); /*0x565913*/
    v14 = operator new(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = Cell::DecodeFlags; /*0x56592f*/
      v14[2] = 256; /*0x565936*/
      v14[3] = 20; /*0x56593d*/
      v16 = operator new(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = 256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          v18[5] = 10; /*0x56596d*/
          v18[4] = 0; /*0x565974*/
          v18 += 6; /*0x56597b*/
          --v19; /*0x56597e*/
        }
        while ( v19 ); /*0x56597f*/
        v13 = v27; /*0x565981*/
        v20 = v17; /*0x565985*/
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
          *(unsigned int *)(*v15 + v23 + 20) = 20; /*0x5659a4*/
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
  memset(&this->q018, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}
} // namespace gamemd
// 0x5659F0
namespace gamemd {
void MapClass::Destru_vt07()
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
  VectorCursor_uint_DynamicVectorClass_uint____13_::Remove(); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  v2 = (int *)(&this->ValidMapCellCount4); /*0x565a35*/
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
} // namespace gamemd
// 0x565AA0
namespace gamemd {
int MapClass::InitCellVector()
{
  unsigned int *v2; // ecx
  int result; // eax

  v2 = &this->__pad_04E; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    v2[1] = 0; /*0x565aad*/
    v2[2] = 0; /*0x565ab4*/
    *((unsigned char *)v2 + 12) = 1; /*0x565abb*/
    *((unsigned char *)v2 + 13) = 0; /*0x565abf*/
  }
  (*(void (__thiscall **)(unsigned int *, unsigned int, unsigned int))(*v2 + 8))(v2, *(&this->CapacityIncrement5), 0); /*0x565ad4*/
  for ( result = 0; result < *(&this->CapacityIncrement5); *(unsigned int *)(*(&this->q01C9) + 4 * result - 4) = 0 ) /*0x565ae1*/
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
  unsigned int *result; // eax
  unsigned int *v6; // ecx

  v2 = 0; /*0x565bc6*/
  v3 = 0; /*0x565bc8*/
  *(&this->q01C7) = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < *(&this->CapacityIncrement0) ) /*0x565bdb*/
      {
        result = (unsigned int *)*(&this->q01C9); /*0x565bdd*/
        v6 = (unsigned int *)result[v3]; /*0x565be3*/
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
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int result; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // esi
  int v17; // eax
  void *v18; // edi
  int v20; // esi
  int *v21; // ecx
  int16_t v22; // ax
  int16_t v23; // cx
  int v24; // edx
  int v25; // esi
  double v26; // st7
  unsigned int v27; // ecx
  int *v28; // ecx
  int *v29; // edi
  unsigned int v30; // eax
  unsigned int *v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int *v38; // [esp+18h] [ebp-44h]
  int v39; // [esp+1Ch] [ebp-40h]
  int i; // [esp+20h] [ebp-3Ch]
  int v41; // [esp+2Ch] [ebp-30h]
  int16_t v42; // [esp+30h] [ebp-2Ch]
  int16_t v43; // [esp+32h] [ebp-2Ah]
  int16_t v45[4]; // [esp+38h] [ebp-24h] BYREF
  int v45; // [esp+40h] [ebp-1Ch]
  int16_t v46; // [esp+48h] [ebp-14h]
  int16_t v47; // [esp+4Ah] [ebp-12h]
  int v48; // [esp+50h] [ebp-Ch] BYREF
  int v49; // [esp+54h] [ebp-8h]
  int v50; // [esp+58h] [ebp-4h]
  int *v51; // [esp+60h] [ebp+4h]
  int *v52; // [esp+60h] [ebp+4h]
  char v53; // [esp+6Ch] [ebp+10h]

  v41 = aP1[2] / g_MapRenderState; /*0x5673b7*/
  v48 = *aP1; /*0x5673bf*/
  v49 = aP1[1]; /*0x5673c6*/
  v50 = aP1[2]; /*0x5673cd*/
  v10 = ZCoordToScreenY(v50); /*0x5673d1*/
  v48 += (((unsigned int)(((uint64_t)(2004318071LL * v10) >> 32) - v10) >> 31) /*0x5673f8*/
        + ((int)(((uint64_t)(2004318071LL * v10) >> 32) - v10) >> 4)) << 8;
  v11 = ZCoordToScreenY(v50); /*0x5673fc*/
  v49 += (((unsigned int)(((uint64_t)(2004318071LL * v11) >> 32) - v11) >> 31) /*0x56742a*/
        + ((int)(((uint64_t)(2004318071LL * v11) >> 32) - v11) >> 4)) << 8;
  v45[0] = *aP1 / 256; /*0x56744d*/
  v12 = v48 / 256; /*0x56745e*/
  v42 = v48 / 256; /*0x567467*/
  v43 = v49 / 256; /*0x56746c*/
  v45[1] = aP1[1] / 256; /*0x567475*/
  v46 = v42 - v45[0] - 2; /*0x56749b*/
  v47 = v43 - v45[1] - 2; /*0x5674a7*/
  result = v43; /*0x5674af*/
  v14 = *(&this->q0181); /*0x5674b2*/
  v15 = v43 + v42; /*0x5674b8*/
  if ( v15 <= v14 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v42 - v43 >= v14 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v43 - v42; /*0x5674cf*/
  if ( result >= v14 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = *(&this->q0182); /*0x5674d9*/
  if ( v15 > v14 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = aP2; /*0x5674ea*/
  if ( !aP2 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( aP2 >= 11 ) /*0x5674f9*/
    aP2 = 10; /*0x567500*/
  v38 = dword_ABD490; /*0x567512*/
  v51 = &dword_ABCF60; /*0x56751a*/
  v16 = dword_7ED3D0[aP2]; /*0x567528*/
  if ( !IDA_BYTE2(g_RulesClass_Instance[1].IonCannonDamage) && aP4 && aP2 > 2 ) /*0x56753e*/
  {
    v17 = dword_7ED3C4[aP2]; /*0x567540*/
    v16 -= v17; /*0x567547*/
    v38 = (int *)(4 * v17 + 11261072); /*0x567557*/
    v51 = (int *)(4 * v17 + 11259744); /*0x56755b*/
  }
  v18 = aP3; /*0x567563*/
  v52 = v51 - 1; /*0x56756c*/
  if ( !aP3 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = (int)HouseClass_Player; /*0x567572*/
  if ( !HouseClass_Player ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( aP3 != HouseClass_Player ) /*0x56757d*/
  {
    if ( ((1 << *(unsigned int *)(*((unsigned int *)HouseClass_Player + 13) + 184)) & *((unsigned int *)aP3 + 5433)) != 0 ) /*0x567595*/
    {
      v18 = HouseClass_Player; /*0x567597*/
      aP3 = HouseClass_Player; /*0x567599*/
    }
    if ( v18 != HouseClass_Player ) /*0x56759f*/
    {
      if ( (uint8_t)HouseClass::IsAlliedWith(v18, HouseClass_Player) /*0x5675b2*/
        && IDA_HIBYTE(g_RulesClass_Instance[1].RadarEventDurations[2]) )
      {
        result = (int)HouseClass_Player; /*0x5675bc*/
        v18 = HouseClass_Player; /*0x5675c1*/
        aP3 = HouseClass_Player; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
  LABEL_21:
      result = (int)HouseClass_Player; /*0x5675c9*/
  LABEL_22:
      if ( v18 != (void *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 /*0x5675f1*/
    || !g_GameStateFlags
    || (v53 = 1, (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 4))(g_GameStateFlags)) )
  {
    v53 = 0; /*0x5675fd*/
  }
  v16 = v16; /*0x567602*/
  v20 = v16 - 1; /*0x567604*/
  if ( v16 ) /*0x567607*/
  {
    for ( i = v20 + 1; i; --i ) /*0x56760e*/
    {
      v21 = v38++; /*0x56761a*/
      v22 = *(unsigned short *)v21 + v12; /*0x567626*/
      v23 = v43 + *((unsigned short *)v21 + 1); /*0x56762d*/
      IDA_LOWORD(v45) = v22; /*0x567635*/
      ++v52; /*0x56763a*/
      v24 = *(&this->q0181); /*0x56763e*/
      IDA_HIWORD(v45) = v23; /*0x567644*/
      *(unsigned int *)v45 = v45; /*0x567653*/
      v25 = v23 + v22; /*0x567657*/
      if ( v25 > v24 ) /*0x56765c*/
      {
        if ( v22 - v23 >= v24 || v23 - v22 >= v24 ) /*0x567672*/
        {
          IDA_LOWORD(v12) = v42; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        IDA_LOWORD(v12) = v42; /*0x56767e*/
        if ( v25 > v24 + 2 * *(&this->q0182) ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v22 - v42) > aP2 ) /*0x56769e*/
          continue; /*0x56769e*/
        v26 = Math::Sqrt( /*0x5676de*/
                (double)(int16_t)(v45 - v42) * (double)(int16_t)(v45 - v42)
              + (double)(int16_t)(IDA_HIWORD(v45) - v43) * (double)(int16_t)(IDA_HIWORD(v45) - v43));
        if ( (int16_t)Math::RoundToInt(v26) > aP2 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v45[0] + (v45[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = *(int **)(*(&this->u32_1C9) + 4 * v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_Map_GlobalCellIndex = *(unsigned int *)v45; /*0x567724*/
          v29 = g_CellClassArray; /*0x567729*/
        }
        if ( a8 && IDA_BYTE2(g_RulesClass_Instance[1].IonCannonDamage) ) /*0x56773c*/
        {
          IDA_LOWORD(v39) = v45[0] - v46 + *(unsigned short *)v52; /*0x567765*/
          IDA_HIWORD(v39) = v45[1] - v47 + *((unsigned short *)v52 + 1); /*0x56776a*/
          v30 = (int16_t)v39 + (IDA_SHIWORD(v39) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(unsigned int **)(g_Shroud_CellArray + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = g_CellClassArray; /*0x567794*/
            g_Map_GlobalCellIndex = v39; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v41 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((int16_t *)v29 + 18); /*0x5677bf*/
        v33 = *((int16_t *)v29 + 19); /*0x5677c3*/
        v29[80] &= ~0x40u; /*0x5677cc*/
        if ( !v53 ) /*0x5677d2*/
        {
  LABEL_54:
          if ( a7 ) /*0x567827*/
          {
            v35 = v29[80]; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29[75] & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal(&MapClass_Instance, v45, (int)aP3); /*0x56784f*/
          }
          else
          {
            v36 = v29[75]; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29[80], (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !aP5 ) /*0x567878*/
              {
                if ( a9 ) /*0x567880*/
                  Conditions::CheckResult3((int)v45, (int)aP3, 0); /*0x567893*/
                else
                  CellClass::Unshroud(v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == *(&this->q0181) + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == *(&this->q0181) + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = *(&this->q0182); /*0x567802*/
        if ( v32 != v34 + 13 || v33 != *(&this->q0181) + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(&v48, 0, aP2 + 3, 0); /*0x5678cf*/
}
} // namespace gamemd
// 0x5683C0
namespace gamemd {
void MapClass::FillRevealBuffer(MouseClass * aP1, IUnknown * aP2)
{
  unsigned int *v3; // ebx
  unsigned short *v4; // ebp
  unsigned short *v5; // edx
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  unsigned short *v10; // ebx
  int16_t v11; // cx
  int v12; // esi
  int16_t v13; // ax
  int v14; // edi
  int16_t v15; // bx
  int16_t v16; // bp
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  unsigned int *v21; // eax
  int i; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  unsigned int *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // edx
  unsigned int *v30; // eax
  int v31; // edx
  int v32; // [esp+10h] [ebp-8A0h]
  int v33; // [esp+10h] [ebp-8A0h]
  int v34; // [esp+10h] [ebp-8A0h]
  int v35; // [esp+14h] [ebp-89Ch]
  int v36; // [esp+14h] [ebp-89Ch]
  int v38; // [esp+1Ch] [ebp-894h]
  int v39; // [esp+20h] [ebp-890h]
  unsigned char *v40; // [esp+24h] [ebp-88Ch]
  int v41; // [esp+28h] [ebp-888h]
  unsigned short *v42; // [esp+2Ch] [ebp-884h]
  unsigned char v43[128]; // [esp+30h] [ebp-880h] BYREF
  unsigned char v44[2048]; // [esp+B0h] [ebp-800h] BYREF

  v3 = this; /*0x5683d1*/
  if ( !aP2 ) /*0x5683d9*/
    return; /*0x5683d9*/
  v38 = this->q140; /*0x5683e9*/
  if ( !*(unsigned char *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)aP2 + 136))(aP2) + 565) /*0x56840b*/
    || (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)aP2 + 120))(aP2) != 2 )
  {
    return; /*0x56840b*/
  }
  (*(void (__thiscall **)(unsigned char *, unsigned int))(*(unsigned int *)aP2 + 264))(aP2, 0); /*0x56841c*/
  sub_48DEE0(v43); /*0x568429*/
  v4 = v43; /*0x56842e*/
  while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x568440*/
  {
    v5 = aP1; /*0x568446*/
    IDA_LOWORD(v35) = *aP1 + *v4; /*0x56845b*/
    IDA_HIWORD(v35) = aP1[1] + v4[1]; /*0x568463*/
    v6 = (IDA_SHIWORD(v35) << 9) + (int16_t)v35; /*0x56846e*/
    if ( v6 >= 0 && v6 < v38 && *(unsigned int *)(v3->q13C + 4 * v6) ) /*0x568489*/
    {
      if ( v6 >= 0x40000 ) /*0x56849e*/
        g_Map_GlobalCellIndex = v35; /*0x5684a6*/
      IDA_LOBYTE(v5) = aP2[140]; /*0x5684b1*/
      CellClass::AddContent(aP2, v5); /*0x5684bb*/
      if ( v6 >= 0x40000 || (v7 = *(unsigned int *)(this->q13C + 4 * v6)) == 0 ) /*0x5684db*/
      {
        g_Map_GlobalCellIndex = v35; /*0x5684f9*/
        House::AnnounceUpgrade((int)&g_CellClassArray, -1); /*0x5684ff*/
        v3 = this; /*0x568504*/
        goto LABEL_16; /*0x568504*/
      }
      House::AnnounceUpgrade(v7, -1); /*0x5684e1*/
      v3 = this; /*0x5684e6*/
      v4 += 2; /*0x5684ea*/
    }
    else
    {
  LABEL_16:
      v4 += 2; /*0x568508*/
    }
  }
  if ( (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 6 )
  {
    v40 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)aP2 + 44))(aP2) == 6 ? aP2 : 0;
    v8 = *((unsigned int *)v40 + 328); /*0x568536*/
    if ( *(unsigned char *)(v8 + 5990) )
    {
      v9 = *(unsigned int *)(v8 + 3832) - 1; /*0x568550*/
      v36 = v9; /*0x568553*/
      if ( v9 <= 0 ) /*0x568557*/
      {
        v36 = 1; /*0x568559*/
        v9 = 1; /*0x568561*/
      }
      v10 = v43; /*0x568573*/
      memset(v44, 0, sizeof(v44)); /*0x568577*/
      while ( 1 )
      {
        v11 = *v10; /*0x568579*/
        v42 = v10; /*0x56857c*/
        if ( *v10 == 0x7FFF && v10[1] == 0x7FFF ) /*0x56858b*/
          break; /*0x56858b*/
        v12 = v11; /*0x56859b*/
        IDA_LOWORD(v39) = *aP1 + v11; /*0x5685a5*/
        v13 = v10[1]; /*0x5685aa*/
        IDA_HIWORD(v39) = v13 + aP1[1]; /*0x5685b1*/
        v32 = v39; /*0x5685bc*/
        v14 = v13; /*0x5685c0*/
        if ( v9 > 0 )
        {
          v15 = v13 + aP1[1]; /*0x5685c9*/
          v41 = v9; /*0x5685d0*/
          v16 = *aP1 + v11; /*0x5685d4*/
          v17 = 16 * v13; /*0x5685d9*/
          do
          {
            if ( v16 >= 0 && v15 >= 0 )
            {
              v18 = v12 + (v12 < 0 ? 0x10 : 0);
              if ( v14 < 0 ) /*0x5685f7*/
              {
                v14 += 16; /*0x5685f9*/
                v17 += 256; /*0x5685fc*/
              }
              if ( !v44[v17 + v18] ) /*0x568605*/
              {
                v44[v17 + v18] = 1; /*0x56861a*/
                v19 = (v15 << 9) + v16; /*0x568623*/
                if ( v19 >= 0 && v19 < v38 ) /*0x56862d*/
                {
                  v20 = this->q13C; /*0x568633*/
                  if ( *(unsigned int *)(v20 + 4 * v19) ) /*0x568639*/
                  {
                    if ( v19 >= 0x40000 || (v21 = *(unsigned int **)(v20 + 4 * v19)) == 0 ) /*0x56864f*/
                    {
                      g_Map_GlobalCellIndex = v32; /*0x568655*/
                      v21 = &g_CellClassArray; /*0x56865a*/
                    }
                    ++v21[64]; /*0x56865f*/
                  }
                }
              }
              --v16; /*0x568665*/
              --v15; /*0x568667*/
              v12 = v18 - 1; /*0x568669*/
              --v14; /*0x56866a*/
              IDA_LOWORD(v32) = v16; /*0x56866b*/
              IDA_HIWORD(v32) = v15; /*0x568670*/
              v17 -= 16; /*0x568675*/
            }
            --v41; /*0x56867d*/
          }
          while ( v41 );
          v9 = v36; /*0x568687*/
          v10 = v42; /*0x56868b*/
        }
        v10 += 2; /*0x56868f*/
      }
      for ( i = 0; i < 64; i += 8 ) /*0x568697*/
      {
        v23 = *((unsigned int *)v40 + 328); /*0x5686a2*/
        if ( *(unsigned int *)(i + v23 + 5668) != 0xFFFF || *(unsigned int *)(i + v23 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          IDA_LOWORD(v33) = *(unsigned short *)(i + v23 + 5668) + *(unsigned int *)aP1; /*0x5686df*/
          IDA_HIWORD(v33) = *(unsigned short *)(i + v23 + 5672) + IDA_HIWORD(*(unsigned int *)aP1); /*0x5686e4*/
          v24 = (int16_t)v33 + (IDA_SHIWORD(v33) << 9); /*0x5686ef*/
          if ( v24 >= 0 && v24 < v38 ) /*0x5686f9*/
          {
            v25 = this->q13C; /*0x5686ff*/
            if ( *(unsigned int *)(v25 + 4 * v24) ) /*0x568705*/
            {
              if ( v24 >= 0x40000 ) /*0x568715*/
              {
                g_Map_GlobalCellIndex = v33; /*0x568721*/
                v26 = &g_CellClassArray; /*0x568726*/
              }
              else
              {
                v26 = *(unsigned int **)(v25 + 4 * v24); /*0x568717*/
              }
              ++v26[64]; /*0x56872b*/
            }
          }
        }
        v27 = *((unsigned int *)v40 + 328); /*0x568735*/
        if ( *(unsigned int *)(i + v27 + 5732) != 0xFFFF || *(unsigned int *)(i + v27 + 5736) != 0xFFFF ) /*0x56874b*/
        {
          IDA_LOWORD(v34) = *(unsigned short *)(i + v27 + 5732) + *(unsigned int *)aP1; /*0x568776*/
          IDA_HIWORD(v34) = *(unsigned short *)(i + v27 + 5736) + IDA_HIWORD(*(unsigned int *)aP1); /*0x56877b*/
          v28 = (int16_t)v34 + (IDA_SHIWORD(v34) << 9); /*0x568786*/
          if ( v28 >= 0 && v28 < v38 ) /*0x568790*/
          {
            v29 = this->q13C; /*0x568796*/
            if ( *(unsigned int *)(v29 + 4 * v28) ) /*0x56879c*/
            {
              if ( v28 >= 0x40000 ) /*0x5687ac*/
              {
                g_Map_GlobalCellIndex = v34; /*0x5687b8*/
                v30 = &g_CellClassArray; /*0x5687bd*/
              }
              else
              {
                v30 = *(unsigned int **)(v29 + 4 * v28); /*0x5687ae*/
              }
              v31 = v30[64]; /*0x5687c2*/
              if ( v31 ) /*0x5687ca*/
                v30[64] = v31 - 1; /*0x5687cd*/
            }
          }
        }
      }
    }
  }
}
} // namespace gamemd
// 0x5687F0
namespace gamemd {
void MapClass::ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2)
{
  unsigned int *v3; // ebx
  unsigned short *v4; // ebp
  int v5; // esi
  int v6; // esi
  char *v7; // edx
  int v8; // eax
  int v9; // ebp
  unsigned short *v10; // ebx
  int16_t v11; // cx
  int v12; // esi
  int16_t v13; // ax
  int v14; // edi
  int16_t v15; // bx
  int16_t v16; // bp
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  unsigned int *v21; // eax
  int v22; // ecx
  int j; // esi
  int v24; // eax
  int16_t v25; // dx
  int v26; // eax
  int v27; // ecx
  unsigned int *v28; // eax
  int v29; // ecx
  int v30; // [esp+10h] [ebp-8A0h]
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+14h] [ebp-89Ch]
  char *v33; // [esp+14h] [ebp-89Ch]
  int v35; // [esp+1Ch] [ebp-894h]
  int v36; // [esp+20h] [ebp-890h]
  int v37; // [esp+24h] [ebp-88Ch]
  unsigned char *i; // [esp+28h] [ebp-888h]
  int v39; // [esp+2Ch] [ebp-884h]
  unsigned char v40[128]; // [esp+30h] [ebp-880h] BYREF
  unsigned char v41[2048]; // [esp+B0h] [ebp-800h] BYREF

  v3 = this; /*0x568801*/
  if ( !aP2 ) /*0x568809*/
    return; /*0x568809*/
  v35 = this->q140; /*0x568819*/
  if ( !*(unsigned char *)((*(int (__thiscall **)(char *))(*(unsigned int *)aP2 + 136))(aP2) + 565) /*0x56883b*/
    || (*(int (__thiscall **)(char *))(*(unsigned int *)aP2 + 120))(aP2) != 2 )
  {
    return; /*0x56883b*/
  }
  (*(void (__thiscall **)(char *, unsigned int))(*(unsigned int *)aP2 + 264))(aP2, 0); /*0x56884c*/
  sub_48DEE0(v40); /*0x568859*/
  v4 = v40; /*0x56885e*/
  while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x568870*/
  {
    IDA_LOWORD(v32) = *aP1 + *v4; /*0x56888b*/
    IDA_HIWORD(v32) = aP1[1] + v4[1]; /*0x568893*/
    v5 = (IDA_SHIWORD(v32) << 9) + (int16_t)v32; /*0x56889e*/
    if ( v5 >= 0 && v5 < v35 && *(unsigned int *)(v3->q13C + 4 * v5) ) /*0x5688b9*/
    {
      if ( v5 >= 0x40000 ) /*0x5688ce*/
        g_Map_GlobalCellIndex = v32; /*0x5688d6*/
      CellClass::RemoveContent(aP2, aP2[140]); /*0x5688eb*/
      if ( v5 >= 0x40000 || (v6 = *(unsigned int *)(this->q13C + 4 * v5)) == 0 ) /*0x56890b*/
      {
        g_Map_GlobalCellIndex = v32; /*0x568929*/
        House::AnnounceUpgrade((int)&g_CellClassArray, -1); /*0x56892f*/
        v3 = this; /*0x568934*/
        goto LABEL_16; /*0x568934*/
      }
      House::AnnounceUpgrade(v6, -1); /*0x568911*/
      v3 = this; /*0x568916*/
      v4 += 2; /*0x56891a*/
    }
    else
    {
  LABEL_16:
      v4 += 2; /*0x568938*/
    }
  }
  if ( (*(int (__thiscall **)(char *))(*(unsigned int *)aP2 + 44))(aP2) == 6 )
  {
    v7 = (*(int (__thiscall **)(char *))(*(unsigned int *)aP2 + 44))(aP2) == 6 ? aP2 : 0;
    v33 = v7; /*0x568964*/
    v8 = *((unsigned int *)v7 + 328); /*0x568968*/
    if ( *(unsigned char *)(v8 + 5990) )
    {
      v9 = *(unsigned int *)(v8 + 3832) - 1; /*0x568982*/
      v36 = v9; /*0x568985*/
      if ( v9 <= 0 ) /*0x568989*/
      {
        v36 = 1; /*0x56898b*/
        v9 = 1; /*0x568993*/
      }
      v10 = v40; /*0x5689a5*/
      memset(v41, 0, sizeof(v41)); /*0x5689a9*/
      for ( i = v40; ; i = v10 )
      {
        v11 = *v10; /*0x5689af*/
        if ( *v10 == 0x7FFF && v10[1] == 0x7FFF ) /*0x5689bd*/
          break; /*0x5689bd*/
        v12 = v11; /*0x5689cd*/
        IDA_LOWORD(v37) = *aP1 + v11; /*0x5689d7*/
        v13 = v10[1]; /*0x5689dc*/
        IDA_HIWORD(v37) = v13 + aP1[1]; /*0x5689e3*/
        v30 = v37; /*0x5689ee*/
        v14 = v13; /*0x5689f2*/
        if ( v9 > 0 )
        {
          v15 = v13 + aP1[1]; /*0x5689fb*/
          v39 = v9; /*0x568a02*/
          v16 = *aP1 + v11; /*0x568a06*/
          v17 = 16 * v13; /*0x568a0b*/
          do
          {
            if ( v16 >= 0 && v15 >= 0 )
            {
              v18 = v12 + (v12 < 0 ? 0x10 : 0);
              if ( v14 < 0 ) /*0x568a29*/
              {
                v14 += 16; /*0x568a2b*/
                v17 += 256; /*0x568a2e*/
              }
              if ( !v41[v17 + v18] ) /*0x568a37*/
              {
                v41[v17 + v18] = 1; /*0x568a4c*/
                v19 = (v15 << 9) + v16; /*0x568a55*/
                if ( v19 >= 0 && v19 < v35 ) /*0x568a5f*/
                {
                  v20 = this->q13C; /*0x568a65*/
                  if ( *(unsigned int *)(v20 + 4 * v19) ) /*0x568a6b*/
                  {
                    if ( v19 >= 0x40000 || (v21 = *(unsigned int **)(v20 + 4 * v19)) == 0 ) /*0x568a81*/
                    {
                      g_Map_GlobalCellIndex = v30; /*0x568a87*/
                      v21 = &g_CellClassArray; /*0x568a8c*/
                    }
                    v22 = v21[64]; /*0x568a91*/
                    if ( v22 ) /*0x568a99*/
                      v21[64] = v22 - 1; /*0x568a9c*/
                  }
                }
              }
              --v16; /*0x568aa2*/
              --v15; /*0x568aa4*/
              v12 = v18 - 1; /*0x568aa6*/
              --v14; /*0x568aa7*/
              IDA_LOWORD(v30) = v16; /*0x568aa8*/
              IDA_HIWORD(v30) = v15; /*0x568aad*/
              v17 -= 16; /*0x568ab2*/
            }
            --v39; /*0x568aba*/
          }
          while ( v39 );
          v9 = v36; /*0x568ac4*/
          v10 = i; /*0x568ac8*/
        }
        v7 = v33; /*0x568acc*/
        v10 += 2; /*0x568ad0*/
      }
      for ( j = 0; j < 64; j += 8 ) /*0x568adc*/
      {
        v24 = *((unsigned int *)v7 + 328); /*0x568ae3*/
        if ( *(unsigned int *)(j + v24 + 5668) != 0xFFFF || *(unsigned int *)(j + v24 + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v25 = *(unsigned short *)(j + v24 + 5672) + IDA_HIWORD(*(unsigned int *)aP1); /*0x568b1c*/
          IDA_LOWORD(v31) = *(unsigned short *)(j + v24 + 5668) + *(unsigned int *)aP1; /*0x568b24*/
          v26 = (int16_t)v31 + (v25 << 9); /*0x568b32*/
          IDA_HIWORD(v31) = v25; /*0x568b34*/
          if ( v26 >= 0 && v26 < v35 ) /*0x568b41*/
          {
            v27 = this->q13C; /*0x568b47*/
            if ( *(unsigned int *)(v27 + 4 * v26) ) /*0x568b4d*/
            {
              if ( v26 >= 0x40000 ) /*0x568b5d*/
              {
                g_Map_GlobalCellIndex = v31; /*0x568b69*/
                v28 = &g_CellClassArray; /*0x568b6e*/
              }
              else
              {
                v28 = *(unsigned int **)(v27 + 4 * v26); /*0x568b5f*/
              }
              v29 = v28[64]; /*0x568b73*/
              if ( v29 ) /*0x568b7b*/
                v28[64] = v29 - 1; /*0x568b7e*/
            }
          }
          v7 = v33; /*0x568b84*/
        }
      }
    }
  }
}
} // namespace gamemd
// 0x568BB0
namespace gamemd {
TechnoTypeClass * * MapClass::PostProcessReveal(char a2)
{
  int v2; // esi
  unsigned int *v4; // eax
  unsigned char *v5; // ecx
  int v6; // eax
  int i; // eax
  int v8; // eax
  int j; // esi
  int v10; // eax
  int k; // edx
  unsigned int v12; // eax
  unsigned int *v13; // eax
  int m; // edx
  unsigned int v15; // eax
  unsigned int *v16; // eax
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
      v5 = (unsigned char *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = g_AnimClassPool; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < g_AnimClassCount ); /*0x568bfb*/
  }
  v6 = *(&this->attachedTag1); /*0x568bfd*/
  *(&this->attachedTag7) = 1; /*0x568c03*/
  *(&this->attachedTag8) = v6; /*0x568c09*/
  *(&this->attachedTag9) = v6 - 1; /*0x568c12*/
  *(&this->rubble0) = (v6 << 11) + *(&this->rubble9) + 4; /*0x568c27*/
  for (); i; i = LayerClass::CellIteratorNext(this) ) /*0x568c34*/
    *(unsigned int *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  v8 = *(&this->attachedTag1); /*0x568c54*/
  *(&this->attachedTag7) = 1; /*0x568c5a*/
  *(&this->attachedTag8) = v8; /*0x568c60*/
  *(&this->attachedTag9) = v8 - 1; /*0x568c69*/
  *(&this->rubble0) = (v8 << 11) + *(&this->rubble9) + 4; /*0x568c7e*/
  for (); j; j = LayerClass::CellIteratorNext(this) ) /*0x568c8d*/
  {
    *(unsigned int *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView(j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
    v10 = *(unsigned int *)(j + 60); /*0x568cc4*/
    *(unsigned int *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( (uint8_t)TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
        for ( k = 0; k < g_AircraftTrackerPool; v13[80] |= 0x100000u ) /*0x568cef*/
        {
          IDA_HIWORD(v21) = *(unsigned short *)(j + 38); /*0x568d01*/
          IDA_LOWORD(v21) = k + *(&this->rubble3); /*0x568d09*/
          v12 = (int16_t)v21 + (IDA_SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(unsigned int **)(g_Shroud_CellArray + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_Map_GlobalCellIndex = v21; /*0x568d30*/
            v13 = &g_CellClassArray; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( (uint8_t)TagClass::HasCrossesVerticalLineEvent(*(unsigned int *)(j + 60)) ) /*0x568d5b*/
      {
        for ( m = 0; m < g_AircraftTrackerState; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
          IDA_LOWORD(v22) = *(unsigned short *)(j + 36); /*0x568d7b*/
          IDA_HIWORD(v22) = m + *(&this->rubble4); /*0x568d80*/
          v15 = (int16_t)v22 + (IDA_SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(unsigned int **)(g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x568da4*/
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
    v18 = *(unsigned int *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(unsigned char *)(*((unsigned int *)g_BuildingTypeClass_Array + v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/
}
} // namespace gamemd
// 0x56B3F0
namespace gamemd {
BombClass * * MapClass::DecompressCellData(MouseClass * aP1)
{
  int *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v18[10]; // [esp+14h] [ebp-28h] BYREF
  int v19; // [esp+40h] [ebp+4h]

  LZOPipe::Constructor(v18, 0, 0x2000); /*0x56b406*/
  Pipe::SetDelegate(v18, aP1); /*0x56b414*/
  v3 = 0; /*0x56b41f*/
  v4 = 0; /*0x56b421*/
  v19 = 0; /*0x56b425*/
  if ( this->q140 > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
      v5 = *(unsigned int *)(this->q13C + 4 * v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
          v6 = *(unsigned int *)(v5 + 36); /*0x56b44a*/
          Src = v6; /*0x56b451*/
          v7 = *(&this->nextArrayIndex1); /*0x56b45a*/
          Src = IDA_SHIWORD(v6) + (int16_t)v6; /*0x56b468*/
          if ( Src > v7 /*0x56b49b*/
            && (int16_t)v6 - IDA_SHIWORD(v6) < v7
            && IDA_SHIWORD(v6) - (int16_t)v6 < v7
            && Src <= v7 + 2 * *(&this->nextArrayIndex2) )
          {
            Src = v6; /*0x56b4a8*/
            if ( v6 != g_MapSeedState /*0x56b4d9*/
              && (unsigned int *)v5 != g_CellClassArray
              && (*(unsigned int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b4e6*/
              v8 = Compression::Read((int)v18, (int)&Src, 4) + v3; /*0x56b4f6*/
              v9 = Compression::Read((int)v18, v5 + 56, 4) + v8; /*0x56b50a*/
              v10 = Compression::Read((int)v18, v5 + 282, 1) + v9; /*0x56b51e*/
              v11 = Compression::Read((int)v18, v5 + 283, 1) + v10; /*0x56b532*/
              v3 = Compression::Read((int)v18, v5 + 281, 1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v4 = v19 + 1; /*0x56b543*/
      v19 = v4; /*0x56b54a*/
    }
    while ( v4 < *(&this->NeedsSaveOrLink0) ); /*0x56b550*/
  }
  g_MapSeedState = g_MapSeedState; /*0x56b568*/
  v12 = Compression::Read((int)v18, (int)&g_MapSeedState, 4) + v3; /*0x56b579*/
  v13 = (*(int (__thiscall **)(int *))(v18[0] + 4))(v18); /*0x56b582*/
  LZOPipe::Destructor(v18); /*0x56b584*/
  return v13 + v12; /*0x56b58c*/
}
} // namespace gamemd
// 0x56D230
namespace gamemd {
int MapClass::GetTileIndex(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
  int16_t *v4; // esi
  unsigned int *v5; // edi
  unsigned int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int *v11; // eax
  unsigned int *NeighbourContent; // edi
  unsigned int i; // esi
  int v14; // eax
  int v16; // ecx

  v4 = aP1; /*0x56d238*/
  v5 = this; /*0x56d23d*/
  if ( aP3 )
  {
    v6 = *aP1 + (aP1[1] << 9); /*0x56d255*/
    if ( v6 >= 0x40000 || (v7 = *(unsigned int **)(g_Shroud_CellArray + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_Map_GlobalCellIndex = *(unsigned int *)aP1; /*0x56d26f*/
      v7 = &g_CellClassArray; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
      v8 = GetRegionMap(aP1, 1, 0); /*0x56d28f*/
      if ( v8 == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
      v9 = 16 * v8 + v5->q054; /*0x56d2a3*/
      if ( *(unsigned char *)(v9 + 8) )
      {
        v4 = (int16_t *)(16 * v8 + v5->q054); /*0x56d2ac*/
      }
      else
      {
        v10 = *aP1 + (aP1[1] << 9); /*0x56d2bd*/
        if ( v10 < 0x40000 && (v11 = *(unsigned int **)(g_Shroud_CellArray + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = &g_CellClassArray; /*0x56d2db*/
          g_Map_GlobalCellIndex = *(unsigned int *)aP1; /*0x56d2e0*/
        }
        for ( i = *(unsigned short *)(v9 + 4) != *(unsigned short *)v9 ? 2 : 4;
              (NeighbourContent[80] & 0x100) != 0;
              NeighbourContent = Cell::GetNeighbourContent(NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( ((uint8_t)Cell::IsInRange(NeighbourContent) || (uint8_t)Cell::IsInRange2(NeighbourContent)) /*0x56d337*/
          && NeighbourContent[59] != 3 )
        {
          v4 = (int16_t *)(v9 + 4); /*0x56d339*/
        }
        else
        {
          v4 = (int16_t *)v9; /*0x56d361*/
        }
        v5 = this; /*0x56d33b*/
      }
    }
  }
  v14 = *v4 + v4[1] * (v5->q0F8 + v5->q0F4 + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
    v16 = v5->ZoneConnections; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(uint16_t *)(v5[aP2 + 6] + 2 * *(uint16_t *)(v5->somecount_4C + 4 * v14 + 2)); /*0x56d365*/
}
} // namespace gamemd
// 0x56D6E0
namespace gamemd {
int MapClass::ProcessRegion()
{
  unsigned int *v2; // edi
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
  unsigned int *v18; // eax
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  int16_t *i; // eax
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
  unsigned int *v37; // eax
  char v38; // [esp+Eh] [ebp-32h]
  char v39; // [esp+Fh] [ebp-31h]
  unsigned int v41; // [esp+14h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h]
  int v44; // [esp+28h] [ebp-18h]
  int v45; // [esp+38h] [ebp-8h]

  v2 = &this->q050; /*0x56d6ef*/
  (*(void (__thiscall **)(unsigned int *))(*(&this->vtable30) + 12))(&this->vtable30); /*0x56d6f4*/
  v3 = *(&this->nextArrayIndex1); /*0x56d6f7*/
  *(&this->nextArrayIndex7) = 1; /*0x56d6fd*/
  *(&this->nextArrayIndex8) = v3; /*0x56d707*/
  *(&this->nextArrayIndex9) = v3 - 1; /*0x56d710*/
  *(&this->referenceCount0) = (v3 << 11) + *(&this->referenceCount9) + 4; /*0x56d725*/
  result = LayerClass::CellIteratorNext(this); /*0x56d72b*/
  v5 = result; /*0x56d730*/
  if ( result ) /*0x56d734*/
  {
    while ( 1 ) /*0x56d73b*/
    {
      if ( !Cell::IsInRange((int *)v5) && !Cell::IsInRange2((int *)v5) ) /*0x56d74c*/
      {
        if ( InfantryClass::IsInBounds(v5) ) /*0x56d75b*/
        {
          if ( (NeighbourContent = Cell::GetNeighbourContent((unsigned int *)v5, 2u), /*0x56d7b3*/
                InfantryClass::IsInBounds((int)NeighbourContent))
            && (v7 = Cell::GetNeighbourContent((unsigned int *)v5, 6u), InfantryClass::IsInBounds((int)v7))
            || (v8 = Cell::GetNeighbourContent((unsigned int *)v5, 4u), InfantryClass::IsInBounds((int)v8))
            && (v9 = Cell::GetNeighbourContent((unsigned int *)v5, 0), InfantryClass::IsInBounds((int)v9)) )
          {
            v42 = *(unsigned int *)(InfantryClass::GetType((int16_t *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((int16_t *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex((int16_t *)(v5 + 36)) < v10 ) /*0x56d7e5*/
            {
              v11 = *(unsigned int *)(InfantryClass::GetType((int16_t *)v5) + 40); /*0x56d7f2*/
              v12 = v2[2]; /*0x56d7f5*/
              v13 = v2[4]; /*0x56d7f8*/
              v14 = *(unsigned int *)(v5 + 36); /*0x56d7fb*/
              IDA_LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( v13 < v12 /*0x56d82e*/
                || (*((unsigned char *)v2 + 13) || !v12)
                && (v15 = v2[5], v15 > 0)
                && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(this->referenceCount)(v2, v12 + v15, 0) )
              {
                v16 = v2[4]; /*0x56d839*/
                v44 = v44; /*0x56d83c*/
                v2[4] = v16 + 1; /*0x56d843*/
                v18 = (unsigned int *)(v2[1] + 16 * v16); /*0x56d84c*/
                *v18 = v14; /*0x56d84e*/
                v18[1] = v11; /*0x56d850*/
                v18[2] = v44; /*0x56d853*/
                v18[3] = 1; /*0x56d856*/
              }
            }
          }
        }
        goto LABEL_42; /*0x56d859*/
      }
      v19 = Cell::IsInRange((int *)v5); /*0x56d860*/
      v20 = g_Cell_BuildabilityLUT; /*0x56d865*/
      if ( !v19 ) /*0x56d870*/
        v20 = g_TerrainBridgeIndex; /*0x56d872*/
      v21 = *(unsigned int *)(v5 + 56) - v20; /*0x56d878*/
      if ( dword_82A734[v21] == *(uint8_t *)(v5 + 282) ) /*0x56d889*/
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
    for ( i = (int16_t *)Cell::GetNeighbourContent((unsigned int *)v5, v41); ; i = (int16_t *)Cell::GetNeighbourContent( /*0x56d8a7*/
                                                                                          v23,
                                                                                          v41) )
    {
      while ( 1 ) /*0x56d8b0*/
      {
        v23 = (int *)i; /*0x56d8b0*/
        v24 = i[18]; /*0x56d8b2*/
        v25 = i[19]; /*0x56d8b6*/
        v26 = *(&this->nextArrayIndex1); /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= v26 || v24 - v25 >= v26 || v25 - v24 >= v26 || v43 > v26 + 2 * *(&this->nextArrayIndex2) ) /*0x56d8f8*/
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
  LABEL_36:
          v30 = *((unsigned int *)Cell::GetNeighbourContent(v23, ((unsigned char)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = v2[2]; /*0x56d990*/
          v32 = v2[4]; /*0x56d993*/
          v33 = *(unsigned int *)(v5 + 36); /*0x56d99a*/
          IDA_LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( v32 < v31 /*0x56d9c2*/
            || (*((unsigned char *)v2 + 13) || !v31)
            && (v34 = v2[5], v34 > 0)
            && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(this->referenceCount)(v2, v31 + v34, 0) )
          {
            v35 = v2[4]; /*0x56d9c9*/
            v45 = v45; /*0x56d9cc*/
            v2[4] = v35 + 1; /*0x56d9d3*/
            v37 = (unsigned int *)(v2[1] + 16 * v35); /*0x56d9dc*/
            *v37 = v33; /*0x56d9de*/
            v37[1] = v30; /*0x56d9e0*/
            v37[2] = v45; /*0x56d9e3*/
            v37[3] = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        v27 = v23[14]; /*0x56d90d*/
        v28 = g_Cell_BuildabilityLUT; /*0x56d910*/
  LABEL_27:
        v29 = v27 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == *((uint8_t *)v23 + 282) ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
  LABEL_30:
        i = (int16_t *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
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
} // namespace gamemd
// 0x56DAE0
namespace gamemd {
int MapClass::ClearRegions(IUnknown * aP1)
{
  int Region; // edi
  char v6; // [esp+10h] [ebp+4h]

  Region = GetRegionMap(this, aP1, 3, 0); /*0x56daf3*/
  if ( Region == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(); /*0x56dafc*/
    Region = GetRegionMap(this, aP1, 3, 0); /*0x56db0d*/
    if ( Region == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  v6 = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(unsigned char *)(16 * Region + *(&this->vtable31) + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph(16 * Region + *(&this->vtable31)); /*0x56db3b*/
      v6 = 1; /*0x56db43*/
      *(unsigned char *)(*(&this->vtable31) + 16 * Region + 8) = 0; /*0x56db48*/
    }
    Region = GetRegionMap(this, aP1, 3, Region + 1); /*0x56db59*/
  }
  while ( Region != -1 ); /*0x56db5e*/
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
  unsigned int *v13; // eax
  unsigned int *v14; // ecx
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
    v12 = (int16_t)v16 + (IDA_SHIWORD(v16) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(unsigned int **)(g_Shroud_CellArray + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = &g_CellClassArray; /*0x56e828*/
      g_Map_GlobalCellIndex = v16; /*0x56e82d*/
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
  int16_t *v1; // esi
  unsigned int v2; // eax
  unsigned int *v3; // eax
  int result; // eax
  int16_t v5; // dx
  int v6; // eax
  int16_t v7; // ax
  int16_t v8; // cx
  int v9; // eax
  int16_t v10; // dx
  int16_t v11; // dx
  int v12; // eax
  int16_t v13; // ax
  int16_t v14; // cx
  int v15; // eax
  int v16; // [esp+8h] [ebp-8h] BYREF
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v1 = (int16_t *)aP0; /*0x574784*/
  v2 = *(int16_t *)aP0 + (*(int16_t *)(aP0 + 2) << 9); /*0x574795*/
  if ( v2 >= 0x40000 || (v3 = *(unsigned int **)(g_Shroud_CellArray + 4 * v2)) == 0 ) /*0x5747ab*/
  {
    g_Map_GlobalCellIndex = *(unsigned int *)aP0; /*0x5747af*/
    v3 = &g_CellClassArray; /*0x5747b4*/
  }
  result = v3[17]; /*0x5747b9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x5747d3*/
  {
    v5 = *(unsigned short *)(aP0 + 2); /*0x5747dc*/
    IDA_LOWORD(aP0) = *(unsigned short *)aP0; /*0x5747e0*/
    IDA_HIWORD(aP0) = v5 - 1; /*0x5747eb*/
    v6 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP0) + 17); /*0x574803*/
    if ( v6 >= 74 && v6 <= 101 ) /*0x57480e*/
    {
      v8 = v1[1] - 2; /*0x574846*/
      IDA_LOWORD(aP0) = *v1; /*0x57484a*/
      IDA_HIWORD(aP0) = v8; /*0x57484f*/
      v9 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP0) + 17); /*0x57486b*/
      if ( v9 >= 74 && v9 <= 101 ) /*0x574876*/
      {
        v10 = v1[1]; /*0x57488b*/
        IDA_LOWORD(aP0) = *v1; /*0x57488f*/
        IDA_HIWORD(aP0) = v10 - 1; /*0x57489a*/
        return CellClass::ApplyCliffMod2(&aP0); /*0x5748aa*/
      }
      else
      {
        return CellClass::ApplyCliffMod2(v1); /*0x57487b*/
      }
    }
    else
    {
      v7 = v1[1] + 1; /*0x574817*/
      IDA_LOWORD(aP0) = *v1; /*0x574819*/
      IDA_HIWORD(aP0) = v7; /*0x57481e*/
      return CellClass::ApplyCliffMod2(&aP0); /*0x574832*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x5748ce*/
  {
    v11 = *(unsigned short *)aP0 - 1; /*0x5748db*/
    IDA_HIWORD(aP0) = *(unsigned short *)(aP0 + 2); /*0x5748dd*/
    IDA_LOWORD(aP0) = v11; /*0x5748e2*/
    v12 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP0) + 17); /*0x5748fe*/
    if ( v12 >= 74 && v12 <= 101 ) /*0x574909*/
    {
      v14 = *v1 - 2; /*0x574941*/
      IDA_HIWORD(aP0) = v1[1]; /*0x574945*/
      IDA_LOWORD(aP0) = v14; /*0x57494a*/
      v15 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP0) + 17); /*0x574966*/
      if ( v15 >= 74 && v15 <= 101 ) /*0x574971*/
      {
        aP0 = 1; /*0x57498f*/
        v16 = *CellStruct::Sub(v1, &v17, &aP0); /*0x5749a8*/
        return CellClass::ApplyCliffMod(&v16); /*0x5749af*/
      }
      else
      {
        return CellClass::ApplyCliffMod(v1); /*0x574976*/
      }
    }
    else
    {
      v13 = *v1 + 1; /*0x574912*/
      IDA_HIWORD(aP0) = v1[1]; /*0x574914*/
      IDA_LOWORD(aP0) = v13; /*0x574919*/
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
  unsigned int *v2; // ebp
  int v3; // edi
  int v4; // esi
  int16_t *v5; // ebx
  int16_t v6; // cx
  int v7; // eax
  int16_t v8; // dx
  unsigned int v9; // eax
  unsigned int *v10; // eax
  unsigned int *v11; // edi
  int v12; // eax
  int v13; // eax
  int16_t v14; // dx
  int16_t v15; // si
  unsigned short *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  unsigned int *v20; // eax
  int16_t v21; // bp
  int16_t v22; // bx
  int v23; // eax
  int v24; // eax
  unsigned int *v25; // eax
  int16_t v26; // dx
  unsigned int v27; // eax
  unsigned int *v28; // eax
  bool v29; // cc
  int v30; // eax
  int16_t *v31; // eax
  int v32; // ebx
  int16_t v33; // si
  int v34; // ecx
  int v35; // ecx
  unsigned int *v36; // ecx
  int v37; // eax
  int16_t v38; // cx
  int v39; // edi
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int *v44; // eax
  unsigned int *v45; // edx
  int v46; // eax
  int16_t v47; // cx
  int i; // esi
  int16_t v49; // ax
  int v50; // ecx
  unsigned int v51; // eax
  unsigned int *v52; // eax
  unsigned int *v53; // ebx
  unsigned int *v54; // esi
  int v55; // eax
  int v56; // eax
  int v57; // esi
  int v58; // ebp
  int16_t v59; // ax
  int v60; // esi
  int16_t *v62; // [esp+14h] [ebp-30h] BYREF
  int v63; // [esp+18h] [ebp-2Ch]
  int v64; // [esp+1Ch] [ebp-28h]
  int v65; // [esp+20h] [ebp-24h]
  int v66; // [esp+24h] [ebp-20h]
  int v67; // [esp+28h] [ebp-1Ch] BYREF
  void **v68; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  char v70; // [esp+39h] [ebp-Bh]
  int v71; // [esp+3Ch] [ebp-8h]
  int v72; // [esp+40h] [ebp-4h]

  v2 = a1; /*0x574c26*/
  v3 = -2; /*0x574c2d*/
  while ( 2 ) /*0x574c32*/
  {
    v4 = -2; /*0x574c32*/
    do /*0x574c7a*/
    {
      v5 = aP1; /*0x574c37*/
      v6 = aP1[1]; /*0x574c3e*/
      IDA_LOWORD(v63) = v3 + *aP1; /*0x574c48*/
      IDA_HIWORD(v63) = v4 + v6; /*0x574c4d*/
      v67 = v63; /*0x574c60*/
      v7 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v67) + 17); /*0x574c69*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x574c74*/
      {
        v8 = v4 + v5[1]; /*0x574c8e*/
        IDA_LOWORD(aP1) = v3 + *v5; /*0x574c91*/
        IDA_HIWORD(aP1) = v8; /*0x574c9a*/
        MapClass::TransitionCliff((int)&aP1); /*0x574caa*/
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
  if ( v9 < 0x40000 && (v10 = *(unsigned int **)(g_Shroud_CellArray + 4 * v9)) != 0 ) /*0x574cd9*/
  {
    v11 = v10; /*0x574cdb*/
  }
  else
  {
    v11 = g_CellClassArray; /*0x574ce1*/
    g_Map_GlobalCellIndex = *(unsigned int *)v5; /*0x574ce6*/
  }
  v12 = v11[80]; /*0x574cec*/
  v63 = 0; /*0x574cf7*/
  if ( (v12 & 0x500) == 0 ) /*0x574cfb*/
  {
    v67 = 0; /*0x574d01*/
    while ( 1 ) /*0x574d16*/
    {
      v13 = v63 & 7; /*0x574d16*/
      v14 = IDA_LOWORD(Direction_X_Offsets[v13]) + *v5; /*0x574d21*/
      v15 = v5[1] + IDA_HIWORD(Direction_X_Offsets[v13]); /*0x574d29*/
      v16 = (unsigned short *)(4 * v13 + 9041544); /*0x574d2d*/
      v17 = v15 << 9; /*0x574d3a*/
      v18 = v14 + v17 < 0; /*0x574d3d*/
      v19 = v14 + v17; /*0x574d3d*/
      IDA_LOWORD(v64) = v14; /*0x574d3f*/
      IDA_HIWORD(v64) = v15; /*0x574d44*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(unsigned int **)(g_Shroud_CellArray + 4 * v19)) == 0 ) /*0x574d5d*/
      {
        v11 = g_CellClassArray; /*0x574d67*/
        g_Map_GlobalCellIndex = v64; /*0x574d6c*/
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
      IDA_LOWORD(v65) = v22; /*0x574d98*/
      IDA_HIWORD(v65) = v21; /*0x574d9d*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(unsigned int **)(g_Shroud_CellArray + 4 * v24)) == 0 ) /*0x574db6*/
      {
        v11 = g_CellClassArray; /*0x574dc0*/
        g_Map_GlobalCellIndex = v65; /*0x574dc5*/
      }
      else
      {
        v11 = v25; /*0x574db8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574dd7*/
        goto LABEL_34; /*0x574dd7*/
      v26 = v22 + *v16; /*0x574de3*/
      IDA_HIWORD(v66) = v21 + v16[1]; /*0x574de9*/
      IDA_LOWORD(v66) = v26; /*0x574dee*/
      v27 = v26 + (IDA_SHIWORD(v66) << 9); /*0x574df9*/
      if ( v27 < 0x40000 && (v28 = *(unsigned int **)(g_Shroud_CellArray + 4 * v27)) != 0 ) /*0x574e0f*/
      {
        v11 = v28; /*0x574e11*/
      }
      else
      {
        v11 = g_CellClassArray; /*0x574e19*/
        g_Map_GlobalCellIndex = v66; /*0x574e1e*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = v67 + 1 < 8, v63 = ((unsigned char)v63 + 1) & 7, ++v67, !v29) ) /*0x574e43*/
      {
  LABEL_34:
        v2 = a1; /*0x574e49*/
        break; /*0x574e49*/
      }
      v5 = aP1; /*0x574d07*/
      v2 = a1; /*0x574d0b*/
    }
  }
  v30 = v11[80]; /*0x574e4d*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574e6c*/
        v31 = *(int16_t **)(v11[11] + 36); /*0x574e79*/
      else
        v31 = (int16_t *)v11[9]; /*0x574e6e*/
    }
    else
    {
      v32 = v11[9]; /*0x574e86*/
      v67 = v32; /*0x574e8d*/
      v66 = 0; /*0x574e94*/
      v65 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574eb5*/
      {
        v33 = IDA_HIWORD(Direction_X_Offsets[v65 & 7]) + IDA_HIWORD(v67); /*0x574eb5*/
        IDA_LOWORD(aP1) = v32 + IDA_LOWORD(Direction_X_Offsets[v65 & 7]); /*0x574ec2*/
        IDA_HIWORD(aP1) = v33; /*0x574ec7*/
        IDA_LOWORD(v32) = (unsigned short)aP1; /*0x574ecc*/
        v34 = v33 << 9; /*0x574ed0*/
        v18 = (int16_t)aP1 + v34 < 0; /*0x574ed3*/
        v35 = (int16_t)aP1 + v34; /*0x574ed3*/
        v67 = (int)aP1; /*0x574ed5*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(unsigned int **)(g_Shroud_CellArray + 4 * v35)) == 0 ) /*0x574eef*/
        {
          g_Map_GlobalCellIndex = (int)aP1; /*0x574ef5*/
          v36 = g_CellClassArray; /*0x574efb*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x574f0a*/
          break; /*0x574f0a*/
        if ( ++v66 >= 4 ) /*0x574f18*/
          return; /*0x574f18*/
      }
      v2 = a1; /*0x574f28*/
      v37 = ((unsigned char)v65 - 4) & 7; /*0x574f32*/
      v38 = IDA_HIWORD(Direction_X_Offsets[v37]); /*0x574f4e*/
      IDA_LOWORD(aP1) = IDA_LOWORD(Direction_X_Offsets[v37]) + (unsigned short)aP1 + IDA_LOWORD(Direction_X_Offsets[v37]); /*0x574f58*/
      IDA_HIWORD(aP1) = v33 + v38 + v38; /*0x574f5d*/
      v31 = aP1; /*0x574f62*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    v62 = v31; /*0x574f81*/
    VectorClass::CellConstructor(&v68, 0, 0); /*0x574f85*/
    v40 = (int)v62; /*0x574f8a*/
    v41 = v2[73]; /*0x574f8e*/
    v72 = 10; /*0x574fa1*/
    v71 = 0; /*0x574fa9*/
    if ( (int16_t)v62 >= v41 ) /*0x574fb1*/
    {
      do /*0x574fbd*/
      {
        if ( (int16_t)v40 > v41 + v2[75] ) /*0x574fc4*/
          break; /*0x574fc4*/
        v42 = v2[74]; /*0x574fcf*/
        if ( IDA_SHIWORD(v62) < v42 || IDA_SHIWORD(v62) > v42 + v2[76] ) /*0x574fe7*/
          break; /*0x574fe7*/
        v43 = (int16_t)v40 + (IDA_SHIWORD(v62) << 9); /*0x574ff6*/
        if ( *(unsigned int *)(v2[79] + 4 * v43) ) /*0x574ff8*/
        {
          if ( v43 < 0x40000 && (v44 = *(unsigned int **)(g_Shroud_CellArray + 4 * v43)) != 0 ) /*0x575014*/
          {
            v45 = v44; /*0x575016*/
          }
          else
          {
            g_Map_GlobalCellIndex = v40; /*0x57501a*/
            v45 = g_CellClassArray; /*0x575020*/
          }
          if ( (uint8_t)globalHelper_0746C0(v45[14] - g_TerrainBridgeIndex + 1) ) /*0x575031*/
          {
            aP1 = v62; /*0x575090*/
            for ( i = 0; i < 3; ++i ) /*0x575094*/
            {
              if ( CellClass::SetTerrainType(a1, (int16_t *)&v62) ) /*0x57509f*/
                break; /*0x5750a6*/
            }
            while ( 1 ) /*0x5750c8*/
            {
              v49 = IDA_LOWORD(Direction_X_Offsets[((unsigned char)v39 - 4) & 7]) + (unsigned short)aP1; /*0x5750c8*/
              IDA_HIWORD(v67) = IDA_HIWORD(Direction_X_Offsets[((unsigned char)v39 - 4) & 7]) + IDA_HIWORD(aP1); /*0x5750ce*/
              IDA_LOWORD(v67) = v49; /*0x5750d3*/
              v50 = v49; /*0x5750dc*/
              aP1 = (int16_t *)v67; /*0x5750e1*/
              v51 = v49 + (IDA_SHIWORD(v67) << 9); /*0x5750e8*/
              if ( v51 < 0x40000 && (v52 = *(unsigned int **)(g_Shroud_CellArray + 4 * v51)) != 0 ) /*0x5750fe*/
              {
                v53 = v52; /*0x575100*/
              }
              else
              {
                g_Map_GlobalCellIndex = v67; /*0x575104*/
                v53 = g_CellClassArray; /*0x57510a*/
              }
              v54 = a1; /*0x57510f*/
              v55 = *(a1 + 73); /*0x575113*/
              if ( v50 < v55 ) /*0x57511b*/
                break; /*0x57511b*/
              if ( v50 > v55 + *(a1 + 75) ) /*0x57512b*/
                goto LABEL_79; /*0x57512b*/
              v56 = *(a1 + 74); /*0x575135*/
              if ( IDA_SHIWORD(v67) < v56 || IDA_SHIWORD(v67) > v56 + *(a1 + 76) ) /*0x57514d*/
                goto LABEL_79; /*0x57514d*/
              v57 = v53[14] - g_TerrainBridgeIndex + 1; /*0x57515b*/
              if ( (uint8_t)globalHelper_074600(v53) ) /*0x575160*/
              {
                if ( v57 != -1 ) /*0x575170*/
                {
                  v58 = ((((unsigned char)v39 - 4) & 7) - 4) & 7; /*0x57517a*/
                  v59 = IDA_HIWORD(Direction_X_Offsets[v58]); /*0x57518c*/
                  IDA_LOWORD(v67) = IDA_LOWORD(Direction_X_Offsets[v58]) + (unsigned short)aP1; /*0x575194*/
                  v60 = 0; /*0x57519e*/
                  IDA_HIWORD(v67) = IDA_HIWORD(aP1) + v59; /*0x5751a0*/
                  aP1 = (int16_t *)v67; /*0x5751a9*/
                  do /*0x5751c3*/
                  {
                    if ( CellClass::SetTerrainType(a1, (int16_t *)&aP1) ) /*0x5751b6*/
                      break; /*0x5751bd*/
                    ++v60; /*0x5751bf*/
                  }
                  while ( v60 < 3 ); /*0x5751c3*/
                }
  LABEL_79:
                v54 = a1; /*0x5751c5*/
                break; /*0x5751c5*/
              }
            }
            Terrain::CreateCrater(v54, (int)&v62); /*0x5751c9*/
            v2 = a1; /*0x5751db*/
            IDA_LOBYTE(g_TacticalClass_Instance[863].lpVtbl) = 1; /*0x5751df*/
            break; /*0x5751df*/
          }
          IDA_LOWORD(v40) = (unsigned short)v62; /*0x57503a*/
        }
        v46 = v39 & 7; /*0x575040*/
        v47 = IDA_HIWORD(v62) + IDA_HIWORD(Direction_X_Offsets[v46]); /*0x575056*/
        IDA_LOWORD(aP1) = v40 + IDA_LOWORD(Direction_X_Offsets[v46]); /*0x57505e*/
        IDA_HIWORD(aP1) = v47; /*0x575066*/
        v41 = v2[73]; /*0x57506b*/
        v40 = (int)aP1; /*0x575071*/
        v62 = aP1; /*0x575077*/
      }
      while ( (int16_t)aP1 >= v41 ); /*0x574fbd*/
    }
    Terrain::ConnectivityGraph(v2); /*0x5751e6*/
    if ( Block ) /*0x5751fb*/
    {
      if ( v70 ) /*0x575203*/
        RA2_OPDEL(Block); /*0x575206*/
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
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  unsigned int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int result; // eax

  v3 = v3; /*0x577922*/
  if ( (*(int (__thiscall **)(int))(*(unsigned int *)v3 + 44))(v3) == 44 ) /*0x577932*/
  {
    for ( i = 0; i < *(&this->u32_1BC5); ++i ) /*0x577943*/
    {
      v6 = *(&this->u32_1BC2); /*0x57794a*/
      v7 = *(int16_t *)(v6 + 4 * i + 2); /*0x577950*/
      v8 = *(int16_t *)(v6 + 4 * i); /*0x577955*/
      v9 = (int *)(v6 + 4 * i); /*0x577959*/
      v10 = v8 + (v7 << 9); /*0x57795f*/
      if ( v10 < 0x40000 && (v11 = *(unsigned int **)(*(&this->q01C9) + 4 * v10)) != 0 ) /*0x577975*/
      {
        v12 = v11; /*0x577977*/
      }
      else
      {
        v12 = g_CellClassArray; /*0x57797d*/
        g_Map_GlobalCellIndex = *v9; /*0x577982*/
      }
      if ( v12 && v12[15] == v3 ) /*0x57798e*/
      {
        ObjectClass::SetTriggerTarget(0); /*0x577994*/
        v13 = (*(int (__thiscall **)(int *, unsigned int *))(*(&this->u32_1BC1) + 16))(&this->q115C, v12 + 9); /*0x5779ab*/
        if ( v13 != -1 ) /*0x5779b1*/
        {
          v14 = *(&this->u32_1BC5); /*0x5779b3*/
          if ( v13 < v14 ) /*0x5779b8*/
          {
            v15 = v14 - 1; /*0x5779ba*/
            for ( *(&this->u32_1BC5) = v15; /*0x5779c0*/
                  v13 < *(&this->u32_1BC5);
                  *(unsigned int *)(*(&this->u32_1BC2) + 4 * v13 - 4) = *(unsigned int *)(*(&this->u32_1BC2) + 4 * v13) )
            {
              ++v13; /*0x5779c5*/
            }
          }
        }
        v3 = v3; /*0x5779d4*/
        --i; /*0x5779d8*/
      }
    }
    MapClass::RemoveCellReference(v3); /*0x5779ef*/
  }
  result = (*(int (__thiscall **)(int))(*(unsigned int *)v3 + 44))(v3); /*0x5779f9*/
  if ( result == 44 ) /*0x5779ff*/
  {
    v3 = v3; /*0x577a11*/
    result = (*(int (__thiscall **)(int *, int *))(dword_8B41A8 + 16))(&dword_8B41A8, &v3); /*0x577a15*/
    if ( result != -1 && result < dword_8B41B8 && result < --dword_8B41B8 ) /*0x577a30*/
    {
      do /*0x577a48*/
      {
        ++result; /*0x577a38*/
        *((unsigned int *)dword_8B41AC + result - 1) = *((unsigned int *)dword_8B41AC + result); /*0x577a3c*/
      }
      while ( result < dword_8B41B8 ); /*0x577a48*/
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
  int Bit; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  int v9; // edx

  result = (void *)v3; /*0x577f30*/
  if ( v3 ) /*0x577f3a*/
    *(unsigned char *)(*(unsigned int *)&HouseClass_Array->gap0[4 * *(unsigned int *)(v3 + 48)] + 577) = 1; /*0x577f48*/
  if ( (void *)v3 == HouseClass_Player ) /*0x577f55*/
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
  v4 = (g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4) /*0x577f94*/
    && g_GameStateFlags
    && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 4))(g_GameStateFlags);
  result = HouseClass_Player; /*0x577f9a*/
  if ( !*((unsigned char *)HouseClass_Player + 576) ) /*0x577f9f*/
  {
    *((unsigned char *)HouseClass_Player + 576) = 1; /*0x577fad*/
    dword_87F8F8 = g_Cell_PositionLUT; /*0x577fbf*/
    dword_87F8F4 = 1; /*0x577fc7*/
    dword_87F8FC = g_Cell_PositionLUT - 1; /*0x577fd4*/
    dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x577fe3*/
    Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x577fe8*/
    if ( Bit ) /*0x577fef*/
    {
      while ( 1 ) /*0x577ff3*/
      {
        v6 = *(int16_t *)(Bit + 36); /*0x577ff3*/
        v7 = Bit + 36; /*0x577ff7*/
        v8 = *(int16_t *)(Bit + 38); /*0x577ffa*/
        if ( !v4 ) /*0x578000*/
          goto LABEL_24; /*0x578000*/
        if ( v6 != 7 ) /*0x578005*/
          break; /*0x578005*/
        if ( v8 != *(unsigned int *)&this->q0F4 + 5 ) /*0x578012*/
          goto LABEL_22; /*0x578012*/
  LABEL_25:
        Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x578054*/
        if ( !Bit ) /*0x578060*/
          goto LABEL_26; /*0x578060*/
      }
      if ( v6 == 13 && v8 == *(unsigned int *)&this->q0F4 + 11 ) /*0x578026*/
        goto LABEL_25; /*0x578026*/
  LABEL_22:
      v9 = *(unsigned int *)&this->q0F8; /*0x578028*/
      if ( v6 == v9 + 13 && v8 == *(unsigned int *)&this->q0F4 + v9 - 15 ) /*0x578041*/
        goto LABEL_25; /*0x578041*/
  LABEL_24:
      ((void (__stdcall *)(int, void *))DisplayClass::RevealFogCell)(v7, HouseClass_Player); /*0x578043*/
      goto LABEL_25; /*0x57804f*/
    }
  LABEL_26:
    FogOfWar::Render((int **)&MapClass_Instance); /*0x578064*/
    return (void *)MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x578075*/
  }
  return result; /*0x57807a*/
}
} // namespace gamemd
// 0x578390
namespace gamemd {
void MapClass_IsRectInBounds()
{
  char v3; // bl
  unsigned short *v4; // esi
  int16_t v6; // ax
  int16_t v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int16_t v13[2]; // [esp+Ch] [ebp-8h] BYREF
  int16_t v14[2]; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x578394*/
  v4 = a2; /*0x578399*/
  v6 = *a2; /*0x5783a4*/
  IDA_HIWORD(a2) = a2[2]; /*0x5783ab*/
  IDA_LOWORD(a2) = v6; /*0x5783b4*/
  if ( !LayerClass::IsWithinUsableArea(this, (int16_t *)&a2, a3) ) /*0x5783b9*/
    return 0; /*0x5783b9*/
  v7 = v4[2]; /*0x5783d0*/
  IDA_LOWORD(a3) = *((unsigned int *)v4 + 2) + *(unsigned int *)v4 - 1; /*0x5783d8*/
  IDA_HIWORD(a3) = v7; /*0x5783e0*/
  if ( !LayerClass::IsWithinUsableArea(this, (int16_t *)&a3, v3) ) /*0x5783e5*/
    return 0; /*0x5783e5*/
  v8 = *((unsigned int *)v4 + 1); /*0x5783f1*/
  v9 = *((unsigned int *)v4 + 3); /*0x5783f4*/
  v13[0] = *v4; /*0x5783f7*/
  v13[1] = v8 + v9 - 1; /*0x578408*/
  if ( !LayerClass::IsWithinUsableArea(this, v13, v3) ) /*0x57840d*/
    return 0; /*0x57840d*/
  v10 = *((unsigned int *)v4 + 1); /*0x578420*/
  v11 = *((unsigned int *)v4 + 3); /*0x578423*/
  v14[0] = *((unsigned int *)v4 + 2) + *(unsigned int *)v4 - 1; /*0x578426*/
  v14[1] = v10 + v11 - 1; /*0x578436*/
  return LayerClass::IsWithinUsableArea(v14, v3); /*0x578446*/
}
}
// 0x578710
unsigned int * MapClass::SpiralSearch()
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
  void *result; // eax
  unsigned int v12; // eax
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = *(&this->nextArrayIndex1); /*0x578723*/
  v3 = *(&this->referenceCount2); /*0x578729*/
  v4 = *(&this->referenceCount1); /*0x57872f*/
  if ( v4 + v3 > v2 + 2 * (*(&this->nextArrayIndex6) + *(&this->nextArrayIndex4)) + 12 ) /*0x578740*/
    return 0; /*0x57880b*/
  while ( 1 ) /*0x578746*/
  {
    v5 = *(&this->nextArrayIndex5); /*0x578746*/
    v6 = 2 * (v5 + *(&this->nextArrayIndex3)) - v2 - 2; /*0x57875c*/
    IDA_LOWORD(v13) = v4; /*0x57875f*/
    IDA_HIWORD(v13) = v3; /*0x578766*/
    if ( v4 - v3 < v6 ) /*0x57876b*/
    {
      *(&this->referenceCount1) = v4 + 1; /*0x5787be*/
      *(&this->referenceCount2) = v3 - 1; /*0x5787c4*/
    }
    else
    {
      v7 = (((unsigned char)v4 - (unsigned char)v2 + (unsigned char)v3 - 1) & 1) == 1; /*0x578785*/
      v8 = v5 - (v7 + 1); /*0x578790*/
      v9 = *(&this->referenceCount1) - v8; /*0x578792*/
      v10 = v8 + *(&this->referenceCount2); /*0x578794*/
      *(&this->referenceCount1) = v9; /*0x578798*/
      *(&this->referenceCount2) = v10; /*0x5787a0*/
      if ( v7 ) /*0x5787a8*/
        *(&this->referenceCount2) = v10 + 1; /*0x5787ab*/
      else
        *(&this->referenceCount1) = v9 + 1; /*0x5787b4*/
    }
    if ( LayerClass::IsWithinUsableArea(this, (int16_t *)&v13, 1) ) /*0x5787d3*/
      break; /*0x5787d3*/
    v2 = *(&this->nextArrayIndex1); /*0x5787e8*/
    v3 = *(&this->referenceCount2); /*0x5787ee*/
    v4 = *(&this->referenceCount1); /*0x5787f4*/
    if ( v4 + v3 > v2 + 2 * (*(&this->nextArrayIndex6) + *(&this->nextArrayIndex4)) + 12 ) /*0x578805*/
      return 0; /*0x578805*/
  }
  v12 = (int16_t)v13 + (IDA_SHIWORD(v13) << 9); /*0x578820*/
  if ( v12 >= 0x40000 || (result = *(void **)(*(&this->referenceCount9) + 4 * v12)) == 0 ) /*0x578836*/
  {
    v13 = v13; /*0x57883f*/
    return &g_CellClassArray; /*0x578845*/
  }
  return result; /*0x57880d*/
}
// 0x578880
unsigned int * MapClass::FastCellLookup(short * a2, int a3, char a4)
{
  unsigned int v4; // eax
  unsigned int *result; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v12; // edx
  int v13; // ecx
  int16_t v14; // bx
  int16_t v15; // bp
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  int16_t v19; // bx
  int16_t v20; // bp
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
    if ( v4 >= 0x40000 || (result = *(unsigned int **)(g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x5788b4*/
    {
      g_Map_GlobalCellIndex = *(unsigned int *)a2; /*0x5788be*/
      return g_CellClassArray; /*0x5788c4*/
    }
  }
  else
  {
    v6 = *(&this->q0183); /*0x5788d4*/
    v7 = *a2; /*0x5788da*/
    v8 = a2[1]; /*0x5788dd*/
    v9 = *(&this->q0184); /*0x5788e1*/
    v10 = (int16_t)(v9 + *(&this->q0181) - v6); /*0x5788fd*/
    v25 = (int16_t)(v9 + v6 + 1); /*0x57890e*/
    v26 = (6000 * a3 + v25 - v7) % a3; /*0x578928*/
    v12 = (6000 * a3 + (int16_t)v10 - v8) % a3; /*0x57892d*/
    if ( v26 > 0 ) /*0x578939*/
      v7 += a3 - v26; /*0x57893f*/
    if ( v12 > 0 ) /*0x578947*/
      v8 += a3 - v12; /*0x57894d*/
    v27 = v25 + v10; /*0x57895b*/
    if ( a4 || (v13 = *(&this->q0186), v8 + v7 < v27 + 2 * v13 / 3) ) /*0x578987*/
    {
      v23 = (int16_t)v8 << 9; /*0x578a74*/
      v17 = (int16_t)v7 + v23 < 0; /*0x578a77*/
      v24 = (int16_t)v7 + v23; /*0x578a77*/
      IDA_LOWORD(v30) = v7; /*0x578a79*/
      IDA_HIWORD(v30) = v8; /*0x578a7e*/
      if ( v17 || v24 >= 0x40000 || (result = *(unsigned int **)(g_Shroud_CellArray + 4 * v24)) == 0 ) /*0x578a97*/
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
      IDA_LOWORD(v29) = v20; /*0x578a36*/
      IDA_HIWORD(v29) = v19; /*0x578a3b*/
      if ( v17 || v22 >= 0x40000 || (result = *(unsigned int **)(g_Shroud_CellArray + 4 * v22)) == 0 ) /*0x578a54*/
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
      IDA_LOWORD(v28) = v15; /*0x5789d5*/
      IDA_HIWORD(v28) = v14; /*0x5789da*/
      if ( v17 || v18 >= 0x40000 || (result = *(unsigned int **)(g_Shroud_CellArray + 4 * v18)) == 0 ) /*0x5789f3*/
      {
        g_Map_GlobalCellIndex = v28; /*0x578a00*/
        return g_CellClassArray; /*0x578a06*/
      }
    }
  }
  return result; /*0x5788bc*/
}
// 0x578AC0
void MapClass::IncrementRedrawCounter()
{
  ++*(&this->u32_6F00); /*0x578ac0*/
}
// 0x57A0C0
void* MapClass::InitTileData(MouseClass * aP0, int aP3)
{
  int v2; // esi
  char *v3; // eax
  void *v4; // ebx
  int v5; // esi
  char *v6; // edi
  int v7; // esi
  int v8; // esi
  int i; // edi
  char *Entry; // eax
  int Bit; // eax
  char j; // bl
  int k; // eax
  int m; // eax
  int n; // eax
  char v17; // [esp+13h] [ebp-1h]

  Mouse::SetBounds((int)&MapClass_Instance, 0); /*0x57a0ce*/
  v17 = 0; /*0x57a0d8*/
  if ( !g_MapTileArray ) /*0x57a0df*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x57a0e7*/
    v3 = (char *)operator new(80 * g_MapCellWidth * g_MapCellWidth); /*0x57a0f1*/
    v4 = v3; /*0x57a0f6*/
    if ( v3 ) /*0x57a0fd*/
    {
      v5 = v2 - 1; /*0x57a0ff*/
      v6 = v3; /*0x57a100*/
      if ( v5 >= 0 ) /*0x57a104*/
      {
        v7 = v5 + 1; /*0x57a106*/
        do /*0x57a112*/
        {
          TileData::Constructor(v6); /*0x57a109*/
          v6 += 80; /*0x57a10e*/
          --v7; /*0x57a111*/
        }
        while ( v7 ); /*0x57a112*/
      }
      g_MapTileArray = v4; /*0x57a114*/
    }
    else
    {
      g_MapTileArray = 0; /*0x57a11c*/
    }
    v17 = 1; /*0x57a126*/
  }
  v8 = 0; /*0x57a131*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v8 < i; *((unsigned int *)Entry + 16) = -1 ) /*0x57a138*/
    Entry = GetTileDataEntry(v8++); /*0x57a13f*/
  dword_87F8F8 = g_Cell_PositionLUT; /*0x57a157*/
  dword_87F8F4 = 1; /*0x57a15c*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x57a16c*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x57a17b*/
  Bit = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x57a180*/
  for ( j = 1; Bit; Bit = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x57a191*/
  {
    if ( !j ) /*0x57a195*/
      break; /*0x57a195*/
    j = RecursiveCellClassNeighbourUpdate(Bit, aP0, aP3); /*0x57a1a6*/
  }
  dword_87F8F8 = g_Cell_PositionLUT; /*0x57a1bc*/
  dword_87F8F4 = 1; /*0x57a1c1*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x57a1d1*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x57a1e0*/
  for ( k = LayerClass::CellIteratorNext(&MapClass_Instance); k; k = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x57a1ec*/
  {
    if ( !j ) /*0x57a1f0*/
      break; /*0x57a1f0*/
    MapClass::BuildTileConnectivityGraph(k, aP0, aP3); /*0x57a1f7*/
  }
  dword_87F8F8 = g_Cell_PositionLUT; /*0x57a215*/
  dword_87F8F4 = 1; /*0x57a21a*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x57a22a*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x57a239*/
  for ( m = LayerClass::CellIteratorNext(&MapClass_Instance); m; m = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x57a245*/
  {
    if ( !j ) /*0x57a249*/
      break; /*0x57a249*/
    j = GenerateMapClassCliffTransitions(m, 1, aP0, aP3); /*0x57a25c*/
  }
  dword_87F8F8 = g_Cell_PositionLUT; /*0x57a272*/
  dword_87F8F4 = 1; /*0x57a277*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x57a287*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x57a296*/
  for ( n = LayerClass::CellIteratorNext(&MapClass_Instance); n; n = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x57a2a2*/
  {
    if ( !j ) /*0x57a2a6*/
      break; /*0x57a2a6*/
    j = GenerateMapClassCliffTransitions(n, 2, aP0, aP3); /*0x57a2b9*/
  }
  g_RadarBlipManager = 0; /*0x57a2ca*/
  if ( g_RadarBlipPool ) /*0x57a2d6*/
  {
    (*(void (__thiscall **)(int, int))(*(unsigned int *)g_RadarBlipPool + 32))(g_RadarBlipPool, 1); /*0x57a2dc*/
    g_RadarBlipPool = 0; /*0x57a2df*/
  }
  if ( v17 ) /*0x57a2ef*/
  {
    RA2_OPDEL(g_MapTileArray); /*0x57a2f7*/
    g_MapTileArray = 0; /*0x57a2ff*/
  }
  return j; /*0x57a309*/
}
// 0x5856B0
int MapClass::InitializeTileData(MapClass * aP1)
{
  int v3; // esi
  unsigned int *v4; // ebp
  unsigned int *v5; // ebx
  int v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int BitLCW; // eax
  int v10; // edx
  char j; // bl
  int k; // eax
  int *m; // eax
  int v14; // edx
  int *n; // eax
  int v16; // edx
  int ii; // esi
  char *v18; // eax
  char v20; // [esp+13h] [ebp-5h]
  int i; // [esp+14h] [ebp-4h]

  Mouse::SetBounds((int)&MapClass_Instance, 0); /*0x5856c0*/
  v20 = 0; /*0x5856ca*/
  if ( !g_MapTileArray ) /*0x5856d1*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x5856d9*/
    v4 = operator new(80 * g_MapCellWidth * g_MapCellWidth); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
      v5 = v4; /*0x5856f4*/
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
      g_MapTileArray = v4; /*0x58570a*/
    }
    else
    {
      g_MapTileArray = 0; /*0x585712*/
    }
    v20 = 1; /*0x58571c*/
  }
  v6 = 0; /*0x585726*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58572a*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v6 < v7; *((unsigned int *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  dword_87F8F8 = g_Cell_PositionLUT; /*0x58575d*/
  dword_87F8F4 = 1; /*0x58576a*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x585773*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x585782*/
  BitLCW = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x585787*/
  for ( j = 1; BitLCW; BitLCW = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
    j = RecursiveCellClassNeighbourUpdate(this, v10, BitLCW, 0, 0); /*0x5857a7*/
  }
  dword_87F8F8 = g_Cell_PositionLUT; /*0x5857bd*/
  dword_87F8F4 = 1; /*0x5857c2*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x5857ce*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x5857dd*/
  for ( k = LayerClass::CellIteratorNext(&MapClass_Instance); k; k = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x5857e9*/
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells(aP1, 1); /*0x58580f*/
  dword_87F8F8 = g_Cell_PositionLUT; /*0x58581f*/
  dword_87F8F4 = 1; /*0x585824*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x585830*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x58583f*/
  for ( m = (int *)LayerClass::CellIteratorNext(&MapClass_Instance); /*0x58584c*/
        m;
        m = (int *)LayerClass::CellIteratorNext(&MapClass_Instance) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
    j = GenerateMapClassCliffTransitions(this, v14, m, 1, 0, 0); /*0x585862*/
  }
  dword_87F8F8 = g_Cell_PositionLUT; /*0x585878*/
  dword_87F8F4 = 1; /*0x58587d*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x585889*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x585898*/
  for ( n = (int *)LayerClass::CellIteratorNext(&MapClass_Instance); /*0x5858a4*/
        n;
        n = (int *)LayerClass::CellIteratorNext(&MapClass_Instance) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
    j = GenerateMapClassCliffTransitions(this, v16, n, 2, 0, 0); /*0x5858bb*/
  }
  g_RadarBlipManager = 0; /*0x5858cc*/
  if ( g_RadarBlipPool ) /*0x5858d4*/
  {
    (*(void (__thiscall **)(int, int))(*(unsigned int *)g_RadarBlipPool + 32))(g_RadarBlipPool, 1); /*0x5858d9*/
    g_RadarBlipPool = 0; /*0x5858dc*/
  }
  for ( ii = 0; ii < i; v18[74] = 1 ) /*0x5858ea*/
    v18 = GetTileDataEntry(ii++); /*0x5858ee*/
  if ( v20 ) /*0x585902*/
  {
    RA2_OPDEL(g_MapTileArray); /*0x58590a*/
    g_MapTileArray = 0; /*0x585912*/
  }
  return j; /*0x585918*/
}
// 0x585D00
int MapClass::LoadTerrainData(MapClass * aP1)
{
  int v2; // esi
  unsigned int *v3; // ebp
  int v4; // edi
  unsigned int *v5; // ebx
  unsigned int *v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int i; // eax
  int j; // esi
  int k; // esi
  char *v12; // eax
  char v14; // [esp+12h] [ebp-6h]
  char v15; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x585d12*/
  v3 = this; /*0x585d14*/
  v4 = g_MapCellWidth * g_MapCellWidth; /*0x585d16*/
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
    v5 = operator new(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
      v6 = v5; /*0x585d43*/
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
  Mouse::SetBounds((int)&MapClass_Instance, 0); /*0x585d92*/
  dword_87F8F8 = g_Cell_PositionLUT; /*0x585da2*/
  dword_87F8F4 = 1; /*0x585daf*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x585db8*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x585dc7*/
  for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x585dd3*/
  {
    if ( !v14 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v14 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, aP1, 0); /*0x585e02*/
  dword_87F8F8 = g_Cell_PositionLUT; /*0x585e12*/
  dword_87F8F4 = 1; /*0x585e17*/
  dword_87F8FC = g_Cell_PositionLUT - 1; /*0x585e23*/
  dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x585e32*/
  for ( j = LayerClass::CellIteratorNext(&MapClass_Instance); j; j = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x585e43*/
  {
    if ( !v14 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !*(unsigned char *)(j + 284) && Cell::IsEmpty((unsigned int *)j) ) /*0x585e59*/
      v14 = Terrain::SelectTileType(j, 0); /*0x585e6b*/
  }
  g_RadarBlipManager = 0; /*0x585e85*/
  if ( g_RadarBlipPool ) /*0x585e8d*/
  {
    (*(void (__thiscall **)(int, int))(*(unsigned int *)g_RadarBlipPool + 32))(g_RadarBlipPool, 1); /*0x585e93*/
    g_RadarBlipPool = 0; /*0x585e96*/
  }
  for ( k = 0; k < v4; v12[74] = 1 ) /*0x585ea0*/
    v12 = GetTileDataEntry(k++); /*0x585ea4*/
  if ( v15 ) /*0x585eb8*/
  {
    RA2_OPDEL(g_MapTileArray); /*0x585ec1*/
    g_MapTileArray = 0; /*0x585ec9*/
  }
  return v14; /*0x585ed3*/
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
  unsigned int *v11; // eax
  unsigned int *v12; // esi
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
    return MapClass::IsRectInBounds(a2, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = a2[1]; /*0x5867c2*/
    if ( v6 < a2[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
  LABEL_20:
    v16 = ++v4; /*0x58686a*/
    if ( v4 >= a2[2] + *a2 ) /*0x58686e*/
      return MapClass::IsRectInBounds(a2, 1); /*0x58686e*/
  }
  IDA_LOWORD(v17) = v4; /*0x5867d4*/
  v7 = (int16_t)v4; /*0x5867d9*/
  while ( 1 ) /*0x5867df*/
  {
    v8 = (int16_t)v6 << 9; /*0x5867df*/
    v9 = v7 + v8 < 0; /*0x5867e2*/
    v10 = v7 + v8; /*0x5867e2*/
    IDA_HIWORD(v17) = v6; /*0x5867e4*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(unsigned int **)(g_Shroud_CellArray + 4 * v10)) == 0 ) /*0x5867fd*/
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
      || *((unsigned char *)v12 + 284)
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
  unsigned int *v7; // esi
  unsigned int *v8; // esi
  unsigned int *v9; // esi
  unsigned int *v11; // edi
  int v12; // ebx
  int *v13; // esi
  unsigned int *v14; // ecx
  int v15; // eax
  int v17; // [esp+10h] [ebp-8h]
  unsigned int *v18; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x589a67*/
  if ( !a2 ) /*0x589a6f*/
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x589ba0*/
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
    v5 = (int *)operator new(36 * a2 + 4); /*0x589a8c*/
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
      v12 = -28 - (unsigned int)v8; /*0x589b2a*/
      v10 = v10; /*0x589b2c*/
      do /*0x589b5f*/
      {
        v13 = (unsigned int *)((char *)v11 + v12 + this->Items); /*0x589b38*/
        Radar::CopyDataArray(v11 - 7, v13); /*0x589b3b*/
        *((unsigned short *)v11 - 2) = *((unsigned short *)v13 + 12); /*0x589b44*/
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
      v14 = (unsigned int *)this->Items; /*0x589b70*/
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
  this->Items = 0; /*0x589bd6*/
  this->q008 = 0; /*0x589bd9*/
  this->IsInitialized = 1; /*0x589bdc*/
  this->IsAllocated = 0; /*0x589be0*/
  this->CapacityIncrement = 10; /*0x589be9*/
  this->q010 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone(); /*0x589bf3*/
  this->q018 = 0; /*0x589bf9*/
  this->q01C = 0; /*0x589bfd*/
  this->q020 = 0; /*0x589c00*/
  return this; /*0x589c05*/
}
// 0x594700
int MapClass::Cleanup(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int i; // edi
  unsigned int *v5; // esi
  int v6; // eax
  int result; // eax
  int j; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int TileIndex; // eax
  unsigned int *v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v15 = a2; /*0x594710*/
  v14 = a1; /*0x594714*/
  if ( g_MapTileArray ) /*0x594718*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x594720*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x594725*/
    {
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(unsigned int *)((char *)g_MapTileArray + v3 - 24) = -1; /*0x594733*/
        *(unsigned int *)((char *)g_MapTileArray + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x59474d*/
  {
    v5 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (__thiscall ***)(unsigned int, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
      v13 = v5; /*0x59477e*/
      v6 = (*(int (__thiscall **)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&g_RandomMap_BuildObject, v6); /*0x59478f*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      RA2_OPDEL(v5); /*0x5947a3*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5947bd*/
  result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x5947c7*/
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
    v9 = *(int16_t *)(j + 36); /*0x5947d7*/
    v10 = *(int16_t *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > g_MapCellHeight_Value /*0x594828*/
      && v9 - v10 < g_MapCellHeight_Value
      && v10 - v9 < g_MapCellHeight_Value
      && v10 + v9 <= g_MapCellCount
      && *((unsigned int *)g_MapTileArray + 20 * *(int16_t *)(j + 36) + 20 * g_MapCellWidth * *(int16_t *)(j + 38) + 14) == -1
      && !*(unsigned int *)(j + 76) )
    {
      v11 = v14; /*0x59482f*/
      TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (int16_t *)(j + 36), v14, 0); /*0x59483c*/
      if ( TileIndex == v15 ) /*0x594847*/
        FloodFillRandomMapTerrain(j, v11, v15); /*0x59484e*/
    }
    result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x594858*/
  }
  return result; /*0x594868*/
}
// 0x599530
int MapClass::ProcessTile()
{
  int i; // edi
  unsigned int *v2; // esi
  int v3; // eax
  void *v4; // eax
  unsigned int *v6; // [esp+8h] [ebp-4h] BYREF

  this->q304 = 0; /*0x599534*/
  this->q308 = 0; /*0x59953a*/
  if ( g_MapTileArray ) /*0x599548*/
  {
    RA2_OPDEL(g_MapTileArray); /*0x59954b*/
    g_MapTileArray = 0; /*0x599553*/
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x599563*/
  {
    v2 = (unsigned int *)*((unsigned int *)g_RandomMap_TerrainState + i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (__thiscall ***)(unsigned int, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
      v6 = v2; /*0x599599*/
      v3 = (*(int (__thiscall **)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v6); /*0x59959d*/
      if ( v3 != -1 && v3 < g_RandomMap_TileData && v3 < --g_RandomMap_TileData ) /*0x5995b8*/
      {
        do /*0x5995d0*/
        {
          ++v3; /*0x5995c0*/
          *((unsigned int *)g_RandomMap_TerrainState + v3 - 1) = *((unsigned int *)g_RandomMap_TerrainState + v3); /*0x5995c4*/
        }
        while ( v3 < g_RandomMap_TileData ); /*0x5995d0*/
      }
      v4 = (void *)v2[11]; /*0x5995d2*/
      if ( v4 && *((unsigned char *)v2 + 53) ) /*0x5995e0*/
      {
        RA2_OPDEL(v4); /*0x5995e6*/
        v2[11] = 0; /*0x5995ee*/
      }
      *((unsigned char *)v2 + 53) = 0; /*0x5995f2*/
      v2[12] = 0; /*0x5995f5*/
      RA2_OPDEL(v2); /*0x5995f8*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59960f*/
  MapClass::PostProcessReveal(&MapClass_Instance, 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility(&MapClass_Instance, (int)&dword_87F8E4); /*0x599631*/
  return RadarClass::RecreateSurface((int)&MapClass_Instance, 0); /*0x599640*/
}
// 0x5A0410
MapClass * * MapClass::GrowLayer(int a2, int a3, int a4)
{
  unsigned char *v4; // ebx
  int v5; // esi
  unsigned int *v6; // ebp
  int i; // eax
  int j; // esi
  int v9; // ecx
  unsigned char *v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // esi
  unsigned int *v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  char v17; // al
  int v18; // eax
  int16_t v19; // cx
  int v20; // eax
  int v21; // ecx
  char *v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int m; // eax
  unsigned int *v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+18h] [ebp-18h] BYREF
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  int k; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  unsigned char *v36; // [esp+2Ch] [ebp-4h]

  v4 = this; /*0x5a041b*/
  v36 = this; /*0x5a041e*/
  v5 = a3; /*0x5a0427*/
  v6 = (unsigned int *)RandomMap::CellListAlloc(a2); /*0x5a042b*/
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a043b*/
    for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x5a044e*/
    {
      v35 = *(unsigned int *)(i + 36); /*0x5a0453*/
      *((unsigned int *)g_MapTileArray + 20 * (int16_t)v35 + 20 * g_MapCellWidth * IDA_SHIWORD(v35) + 15) = 0; /*0x5a0478*/
    }
  }
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
      for ( j = v6[4] - 1; j >= 0; v10[283] = v4[780] ) /*0x5a0499*/
      {
        v9 = *(unsigned int *)(v6[1] + 4 * j); /*0x5a04a6*/
        v31 = v9; /*0x5a04a9*/
        if ( g_MapTileArray ) /*0x5a04ad*/
          *((unsigned int *)g_MapTileArray + 20 * (int16_t)v9 + 20 * g_MapCellWidth * IDA_SHIWORD(v31) + 14) = a4; /*0x5a04ca*/
        v10 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v31); /*0x5a04d8*/
        *((unsigned int *)v10 + 14) = 0; /*0x5a04dd*/
        v10[282] = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
        v11 = operator new(0x18u); /*0x5a0509*/
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
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
            v16 = *(unsigned int *)(v6[1] + 4 * v14); /*0x5a0553*/
            v17 = 0; /*0x5a0556*/
            v32 = v16; /*0x5a0558*/
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
              v18 = v17 & 7; /*0x5a0560*/
              v19 = IDA_HIWORD(v32) + IDA_HIWORD(Direction_X_Offsets[v18]); /*0x5a057b*/
              IDA_LOWORD(v33) = v32 + IDA_LOWORD(Direction_X_Offsets[v18]); /*0x5a0580*/
              IDA_HIWORD(v33) = v19; /*0x5a0585*/
              v20 = v19; /*0x5a058d*/
              v21 = v19 + (int16_t)v33; /*0x5a0590*/
              if ( v21 > v15 && (int16_t)v33 - v20 < v15 && v20 - (int16_t)v33 < v15 && v21 <= g_MapCellCount ) /*0x5a05b9*/
              {
                v22 = (char *)g_MapTileArray + 80 * (int16_t)v33 + 80 * g_MapCellWidth * v20; /*0x5a05d4*/
                if ( *((unsigned int *)v22 + 14) == a2 ) /*0x5a05d9*/
                {
                  if ( *((unsigned int *)v22 + 15) != v30 + 1 ) /*0x5a05e7*/
                  {
                    v23 = v13[2]; /*0x5a05e9*/
                    if ( v13[4] < v23 /*0x5a060e*/
                      || (*((unsigned char *)v13 + 13) || !v23)
                      && (v24 = v13[5], v24 > 0)
                      && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v13 + 8))(v13, v23 + v24, 0) )
                    {
                      v25 = v13[4]; /*0x5a0615*/
                      v26 = v13[1]; /*0x5a0618*/
                      v13[4] = v25 + 1; /*0x5a061e*/
                      *(unsigned int *)(v26 + 4 * v25) = v33; /*0x5a0625*/
                    }
                    *((unsigned int *)v22 + 15) = v30 + 1; /*0x5a0628*/
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
          (*(void (__thiscall **)(unsigned int *, int))*v6)(v6, 1); /*0x5a0663*/
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
    (*(void (__thiscall **)(unsigned int *, int))*v6)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a069d*/
    for ( m = LayerClass::CellIteratorNext(&MapClass_Instance); m; m = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x5a06ae*/
      *((unsigned int *)g_MapTileArray /*0x5a06d8*/
      + 20 * (int16_t)*(unsigned int *)(m + 36)
      + 20 * g_MapCellWidth * (int16_t)IDA_HIWORD(*(unsigned int *)(m + 36))
      + 15) = 0;
  }
  return 1; /*0x5a06e5*/
}
// 0x5A17F0
int MapClass::FindPassableNeighbor()
{
  int result; // eax
  int i; // edi
  int v2; // eax
  unsigned short *NeighbourContent; // esi
  unsigned short *v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int16_t v8; // dx
  int16_t v9; // si
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // edi
  int16_t v14; // dx
  int16_t v15; // si
  int v16; // ecx
  int v17; // [esp+4h] [ebp-1Ch]
  int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+14h] [ebp-Ch] BYREF
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x5a17fd*/
  result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x5a1807*/
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
    v2 = *(unsigned int *)(i + 56); /*0x5a1819*/
    if ( v2 >= g_TerrainBuildConfig && v2 < g_TerrainBuildConfig + 40 ) /*0x5a182f*/
    {
      NeighbourContent = Cell::GetNeighbourContent((unsigned int *)i, 4u); /*0x5a1842*/
      v4 = Cell::GetNeighbourContent((unsigned int *)i, 2u); /*0x5a184c*/
      if ( *(unsigned int *)(i + 56) == *((unsigned int *)NeighbourContent + 14) /*0x5a1867*/
        && *(unsigned char *)(i + 282) > *((unsigned char *)NeighbourContent + 282) )
      {
        v5 = SelectTerrainTileVariant(*(unsigned int *)(i + 56)); /*0x5a1872*/
        v6 = *(unsigned int *)(i + 56); /*0x5a1877*/
        v20 = v5; /*0x5a187a*/
        if ( v5 != v6 ) /*0x5a1880*/
        {
          v7 = *(unsigned int *)(*((unsigned int *)g_FrameCounter + v6) + 740); /*0x5a1897*/
          v8 = NeighbourContent[18] - *((uint8_t *)NeighbourContent + 282) % v7; /*0x5a18b4*/
          IDA_LOWORD(v17) = v8; /*0x5a18bf*/
          v9 = NeighbourContent[19] - *((uint8_t *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          IDA_HIWORD(v17) = v9; /*0x5a18c7*/
          v19 = v17; /*0x5a18d2*/
          if ( g_MapTileArray ) /*0x5a18d6*/
            v10 = *((unsigned int *)g_MapTileArray + 20 * v8 + 20 * g_MapCellWidth * v9 + 14); /*0x5a18f2*/
          else
            v10 = -1; /*0x5a18d8*/
          PlaceMapSeedClassBuildings(v20, &v19, v10, -1); /*0x5a1901*/
        }
      }
      if ( *(unsigned int *)(i + 56) == *((unsigned int *)v4 + 14) && *(unsigned char *)(i + 282) > *((unsigned char *)v4 + 282) ) /*0x5a1922*/
      {
        v11 = SelectTerrainTileVariant(*(unsigned int *)(i + 56)); /*0x5a192d*/
        v12 = *(unsigned int *)(i + 56); /*0x5a1932*/
        if ( v11 != v12 ) /*0x5a1939*/
        {
          v13 = *(unsigned int *)(*((unsigned int *)g_FrameCounter + v12) + 740); /*0x5a194e*/
          v14 = v4[18] - *((uint8_t *)v4 + 282) % v13; /*0x5a1969*/
          IDA_LOWORD(v18) = v14; /*0x5a1972*/
          v15 = v4[19] - *((uint8_t *)v4 + 282) / v13; /*0x5a1977*/
          IDA_HIWORD(v18) = v15; /*0x5a197a*/
          v21 = v18; /*0x5a1985*/
          if ( g_MapTileArray ) /*0x5a1989*/
            v16 = *((unsigned int *)g_MapTileArray + 20 * v14 + 20 * g_MapCellWidth * v15 + 14); /*0x5a19a5*/
          else
            v16 = -1; /*0x5a198b*/
          PlaceMapSeedClassBuildings(v11, &v21, v16, -1); /*0x5a19b2*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x5a19bc*/
  }
  return result; /*0x5a19ce*/
}
// 0x6D8260
unsigned int MapClass::TransformCoordToScreen(int a2, unsigned int * a3)
{
  unsigned int *v3; // ebx
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
  unsigned int *v21; // [esp+10h] [ebp-54h]
  int v24; // [esp+1Ch] [ebp-48h]
  int16_t v25; // [esp+20h] [ebp-44h]
  int16_t v26; // [esp+22h] [ebp-42h]
  int v27; // [esp+30h] [ebp-34h] BYREF
  int v28; // [esp+34h] [ebp-30h]
  unsigned int v29[2]; // [esp+38h] [ebp-2Ch] BYREF
  float v30; // [esp+40h] [ebp-24h] BYREF
  float v31; // [esp+44h] [ebp-20h]
  int v32; // [esp+48h] [ebp-1Ch]
  int v33; // [esp+4Ch] [ebp-18h] BYREF
  int v34; // [esp+50h] [ebp-14h]
  int v35; // [esp+54h] [ebp-10h]
  float v36[3]; // [esp+58h] [ebp-Ch] BYREF

  v21 = v21; /*0x6d8264*/
  v4 = *v21; /*0x6d826f*/
  v32 = 0; /*0x6d827b*/
  v6 = v4 + this->q0B0; /*0x6d828f*/
  v7 = v21[1] + this->q0B4; /*0x6d8296*/
  v27 = v6 - DSurface_ViewBounds; /*0x6d8298*/
  v28 = v7 - g_Map_VisibleRect; /*0x6d82a2*/
  v30 = (float)(v6 - DSurface_ViewBounds); /*0x6d82b1*/
  v31 = (float)(v7 - g_Map_VisibleRect); /*0x6d82bd*/
  v8 = TransformMatrix3x4Point(v36, (float *)(&this->u32_58C6), &v30); /*0x6d82c1*/
  v30 = *v8; /*0x6d82c8*/
  v31 = v8[1]; /*0x6d82d3*/
  v32 = *((unsigned int *)v8 + 2); /*0x6d82da*/
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
  v11 = *((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v33) + 9); /*0x6d8329*/
  v12 = v21[2]; /*0x6d833c*/
  v26 = IDA_HIWORD(v11) + 3; /*0x6d8344*/
  v25 = v11 - 2; /*0x6d835d*/
  v13 = 0; /*0x6d8367*/
  result = (unsigned int)((uint64_t)(2290649225LL * v12) >> 32) >> 31; /*0x6d8369*/
  v15 = v12 / 60 + 7; /*0x6d836e*/
  v24 = v21[3] / 15 + 20; /*0x6d8372*/
  v15 = v15; /*0x6d8376*/
  if ( v24 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v16 = v13 + 1; /*0x6d8382*/
      IDA_LOWORD(v21) = v25 + v13 / 2; /*0x6d83a9*/
      IDA_HIWORD(v21) = v26 + (v13 + 1) / 2; /*0x6d83b4*/
      v21 = v21; /*0x6d83bf*/
      if ( v15 > 0 ) /*0x6d83c3*/
      {
        v15 = v15; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&v21) ) /*0x6d83d7*/
          {
            v36[2] = 0.0; /*0x6d8417*/
            IDA_LODWORD(v36[0]) = ((((int16_t)v21 << 8) + 128) / 256) << 8; /*0x6d8433*/
            IDA_LODWORD(v36[1]) = (((IDA_SHIWORD(v21) << 8) + 128) / 256) << 8; /*0x6d8437*/
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
            CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v21); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(&v27, v21); /*0x6d8491*/
          }
          IDA_LOWORD(v21) = (unsigned short)v21 + 1; /*0x6d8496*/
          --IDA_HIWORD(v21); /*0x6d849f*/
          --v15; /*0x6d84a5*/
        }
        while ( v15 ); /*0x6d84a9*/
        v15 = v15; /*0x6d84af*/
      }
      result = v24; /*0x6d84b3*/
      v13 = v16; /*0x6d84b7*/
    }
    while ( v16 < v24 ); /*0x6d84bb*/
  }
  return result; /*0x6d84c1*/
}
// 0x703590
unsigned int * MapClass::FindPlacementCellsAlt(IUnknown * aP1, IUnknown * aP2)
{
  int v4; // ebx
  unsigned int *v5; // eax
  int v6; // edx
  int v7; // edi
  int TileIndex; // eax
  int v10; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+14h] [ebp-10h] BYREF
  unsigned char v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = *(unsigned int *)((*(int (__thiscall **)(char *))(*(unsigned int *)&this->MovementZones2))(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( aP2 ) /*0x7035b9*/
    v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)aP2 + 72))(aP2, v12); /*0x7035c2*/
  else
    v5 = (unsigned int *)(*(int (__thiscall **)(char *, unsigned char *))(*(unsigned int *)&this->ZoneIterator_Y))(this, v12); /*0x7035fd*/
  IDA_LOWORD(aP2) = *v5 / 256; /*0x7035d5*/
  IDA_HIWORD(aP2) = v5[1] / 256; /*0x7035e9*/
  v6 = *(unsigned int *)this; /*0x70362d*/
  aP2 = aP2; /*0x70362f*/
  v7 = *(unsigned int *)((*(int (__thiscall **)(char *))(v6 + 132))(this) + 1460); /*0x70363b*/
  if ( v7 == -1 ) /*0x703644*/
    TileIndex = -1; /*0x70365f*/
  else
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (int16_t *)&aP2, v7, *(&this->u32_380)); /*0x703658*/
  aP2 = 0; /*0x703663*/
  *aP1 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
           &MapClass_Instance,
           (uint8_t)*(&this->u32_380),
           &v11,
           (int16_t *)&aP2,
           v4,
           TileIndex,
           v7,
           (uint8_t)*(&this->u32_380),
           1,
           1,
           0,
           0,
           0,
           1,
           (int16_t *)&aP2,
           0,
           0);
  return aP1; /*0x7036a7*/
}
// 0x7BCF50
int MapClass::isCellShrouded(unsigned short a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = *(&this->u32_41); /*0x7bcf58*/
  v5[0] = 0; /*0x7bcf60*/
  v5[1] = 0; /*0x7bcf64*/
  v2 = *(&this->u32_40); /*0x7bcf68*/
  v3 = this->u32_14; /*0x7bcf6b*/
  v5[2] = v2; /*0x7bcf74*/
  return (*(int (__thiscall **)(int, unsigned int *, unsigned int))(*(unsigned int *)v3 + 20))(v3, v5, a2); /*0x7bcf83*/
}
// 0x430F30
char MapClass::isCellAccessible(int a2)
{
  int v2; // eax
  char *i; // ecx

  v2 = 0; /*0x430f34*/
  for ( i = &this->q030 * a2; *(unsigned int *)i; i += 4 ) /*0x430f39*/
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
  int v1; // esi
  int v2; // edx
  int *v3; // ecx

  while ( g_SelectionManager ) /*0x48dc97*/
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)g_ObjectClass_CurrentCount + 336))(*(unsigned int *)g_ObjectClass_CurrentCount); /*0x48dca2*/
  Selection::SetCurrent(0); /*0x48dcb3*/
  v3 = g_VisibilitySystem; /*0x48dcb8*/
  result = dword_89C410; /*0x431060*/
  if ( dword_89C410 ) /*0x431065*/
  {
    v1 = 8; /*0x431069*/
    do /*0x431085*/
    {
      v2 = 3; /*0x431070*/
      do /*0x431082*/
      {
        result = *v3; /*0x431075*/
        if ( *v3 ) /*0x431075*/
          *(unsigned char *)(result + 12) &= ~2u; /*0x43107b*/
        ++v3; /*0x43107e*/
        --v2; /*0x431081*/
      }
      while ( v2 ); /*0x431082*/
      --v1; /*0x431084*/
    }
    while ( v1 ); /*0x431085*/
  }
  return result; /*0x431089*/
}
// 0x4ACAC0
int MapClass::ProcessVisibilityFlags()
{
  int i; // ebp
  int j; // edi
  unsigned int *v4; // eax
  int v5; // ecx
  int k; // ebp
  int m; // edi
  unsigned int *v8; // eax
  int16_t v10; // [esp+10h] [ebp-8h] BYREF
  int16_t v11; // [esp+12h] [ebp-6h]
  int16_t v12[2]; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; i < 512; ++i ) /*0x4acac9*/
  {
    for ( j = 0; j < 512; ++j ) /*0x4acad0*/
    {
      v10 = j; /*0x4acad9*/
      v11 = i; /*0x4acade*/
      if ( LayerClass::CoordinatesLegal(this, &v10) ) /*0x4acae3*/
      {
        v12[0] = j; /*0x4acaf0*/
        v12[1] = i; /*0x4acaf8*/
        v4 = CellCoord::To_CellObj(this, v12); /*0x4acafd*/
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
      if ( LayerClass::CoordinatesLegal(this, &v10) && (*((unsigned char *)CellCoord::To_CellObj(this, &v10) + 320) & 0x20) != 0 ) /*0x4acb5a*/
      {
        v8 = CellCoord::To_CellObj(this, &v10); /*0x4acb63*/
        v8[80] &= ~0x20u; /*0x4acb7a*/
        MapClass::RevealCell(&v10); /*0x4acb7f*/
      }
    }
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x4acb9c*/
  return (1); /*0x4acbaa*/
}
// 0x4ACBC0
int MapClass::ProcessFogTransition()
{
  int i; // eax
  int v3; // ecx
  int result; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(); /*0x4acbc4*/
  for (); i; i = LayerClass::CellIteratorNext(this) ) /*0x4acbd2*/
  {
    v3 = *(unsigned int *)(i + 320); /*0x4acbd4*/
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 ) /*0x4acbe2*/
      *(unsigned int *)(i + 320) = v3 | 0x40; /*0x4acbe7*/
  }
  HouseClass::RevealShroudForAllies(0, 1); /*0x4acbfe*/
  LayerClass::CellIteratorReset(); /*0x4acc05*/
  for (); result; result = LayerClass::CellIteratorNext(this) ) /*0x4acc13*/
  {
    if ( (*(unsigned char *)(result + 320) & 0x40) != 0 ) /*0x4acc1c*/
    {
      *(unsigned int *)(result + 320) &= ~0x40u; /*0x4acc27*/
      v5 = *(unsigned int *)(result + 36); /*0x4acc34*/
      CellClass::ProcessVisibility((int16_t *)&v5); /*0x4acc3b*/
    }
  }
  return result; /*0x4acc4b*/
}
// 0x4ACDA0
char MapClass::RevealCell(MouseClass * aP1)
{
  int16_t *v2; // esi
  unsigned int *v4; // eax
  int v5; // ecx
  int i; // edi
  int v7; // eax
  int16_t *v9; // [esp+8h] [ebp-4h]

  v2 = aP1; /*0x4acda3*/
  IDA_LOBYTE(aP1); /*0x4acdaa*/
  if ( (unsigned char)v4 ) /*0x4acdb1*/
  {
    v4 = CellCoord::To_CellObj(this, v2); /*0x4acdba*/
    v5 = v4[75]; /*0x4acdbf*/
    if ( (v5 & 8) != 0 ) /*0x4acdc8*/
    {
      v4[75] = v5 & 0xFFFFFFE7; /*0x4acdd2*/
      Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v4); /*0x4acddf*/
      for ( i = 0; i < 8; ++i ) /*0x4acde4*/
      {
        v7 = i & 7; /*0x4acde8*/
        IDA_LOWORD(v9) = *v2 + IDA_LOWORD(Direction_X_Offsets[v7]); /*0x4ace09*/
        IDA_HIWORD(v9) = v2[1] + IDA_HIWORD(Direction_X_Offsets[v7]); /*0x4ace12*/
        aP1 = v9; /*0x4ace1e*/
        v4 = CellCoord::To_CellObj(this, (int16_t *)&aP1); /*0x4ace22*/
        if ( aP1 != *(int16_t **)v2 ) /*0x4ace2f*/
        {
          v4[75] &= ~0x10u; /*0x4ace46*/
          IDA_LOBYTE(v4) = Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v4); /*0x4ace52*/
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

  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x4ae4c5*/
  for ( result = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x4ae4d6*/
        result;
        result = LayerClass::CellIteratorNext(&MapClass_Instance) )
  {
    TacticalMap::ComputeScreenTint(result); /*0x4ae4da*/
  }
  return result; /*0x4ae4ed*/
}
// 0x4AEB10
int MapClass::GetScrollMode()
{
  int result; // eax

  if ( !*(unsigned char *)&this->q119C ) /*0x4aeb10*/
    return 0; /*0x4aeb10*/
  result = *(unsigned int *)((char *)&this->q4536 + 330); /*0x4aeb1a*/
  if ( !result ) /*0x4aeb22*/
    return 0; /*0x4aeb24*/
  return result; /*0x4aeb26*/
}
// 0x4F42F0
int MapClass::MarkForRedraw(int a2)
{
  int result; // eax

  if ( g_TacticalClass_Instance ) /*0x4f42f7*/
    IDA_BYTE1(g_TacticalClass_Instance[863].lpVtbl) = 1; /*0x4f42f9*/
  result = a2; /*0x4f4300*/
  if ( a2 ) /*0x4f4306*/
  {
    if ( this->q00C != 2 ) /*0x4f430c*/
      this->q00C = a2; /*0x4f430e*/
    return MapClass::IncrementRedrawCounter(&MapClass_Instance); /*0x4f4316*/
  }
  return result; /*0x4f431b*/
}
// 0x5656D0
int MapClass::IsCellPassable(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int *v3; // eax

  v2 = (int16_t)a2 + (IDA_SHIWORD(a2) << 9); /*0x5656ed*/
  if ( v2 >= 0x40000 || (v3 = *(unsigned int **)(*(unsigned int *)(a1 + 316) + 4 * v2)) == 0 ) /*0x565707*/
  {
    v3 = &g_CellClassArray; /*0x56570d*/
    g_Map_GlobalCellIndex = a2; /*0x565712*/
  }
  return (v3[75] >> 3) & 1; /*0x565725*/
}
// 0x565B00
int MapClass::FreeAllCells()
{
  int i; // ecx
  int v3; // eax
  int j; // edi
  int v5; // ecx
  int result; // eax

  for ( i = 0; i < *(&this->CapacityIncrement0); ++i ) /*0x565b0e*/
  {
    v3 = *(unsigned int *)(*(&this->q01C9) + 4 * i); /*0x565b16*/
    if ( v3 ) /*0x565b1b*/
    {
      *(unsigned int *)(v3 + 44) = 0; /*0x565b1d*/
      *(unsigned int *)(v3 + 48) = 0; /*0x565b20*/
    }
  }
  for ( j = 0; j < *(&this->CapacityIncrement0); ++j ) /*0x565b39*/
  {
    v5 = *(unsigned int *)(*(&this->q01C9) + 4 * j); /*0x565b41*/
    if ( v5 ) /*0x565b46*/
    {
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x565b4c*/
      *(unsigned int *)(*(&this->q01C9) + 4 * j) = 0; /*0x565b55*/
    }
  }
  ReturnFalse2(0, 1); /*0x565b67*/
  result = *(&this->CapacityIncrement0); /*0x565b6c*/
  if ( result < 0x40000 ) /*0x565b78*/
  {
    (*(void (__thiscall **)(int *, int, unsigned int))(*(&this->q01C8) + 8))(&this->MaxLevel, 0x40000, 0); /*0x565b8c*/
    for ( result = 0; result < *(&this->CapacityIncrement0); *(unsigned int *)(*(&this->q01C9) + 4 * result - 4) = 0 ) /*0x565b99*/
      ++result; /*0x565ba1*/
  }
  return result; /*0x565bb0*/
}
// 0x57A320
int MapClass::BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3)
{
  unsigned int *v4; // ebp
  int result; // eax
  signed int v6; // ebx
  bool v7; // zf
  int *NeighbourContent; // esi
  int v9; // edx
  int v10; // edi
  char *CellData; // edi

  v4 = (unsigned int *)aP1; /*0x57a328*/
  result = *(unsigned int *)(aP1 + 56); /*0x57a330*/
  if ( result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 12 ) /*0x57a340*/
  {
    result = Cell::GetTerrainMask(this, (int *)aP1, 2); /*0x57a349*/
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
      v7 = (unsigned char)aP3 == 0; /*0x57a38a*/
      *(unsigned int *)(aP1 + 56) = 0xFFFF; /*0x57a38d*/
      *(unsigned char *)(aP1 + 282) = 0; /*0x57a394*/
      if ( !v7 ) /*0x57a39a*/
        *((unsigned int *)Tactical::GetCellData((int16_t *)(aP1 + 36)) + 14) = aP2; /*0x57a3a8*/
      do /*0x57a41e*/
      {
        NeighbourContent = (int *)Cell::GetNeighbourContent(v4, v6); /*0x57a3b3*/
        v9 = NeighbourContent[9]; /*0x57a3b5*/
        aP3 = v9; /*0x57a3ba*/
        result = IDA_SHIWORD(v9); /*0x57a3c1*/
        v10 = IDA_SHIWORD(v9) + (int16_t)v9; /*0x57a3c6*/
        if ( v10 > g_MapCellHeight_Value ) /*0x57a3cf*/
        {
          if ( (int16_t)aP3 - IDA_SHIWORD(aP3) < g_MapCellHeight_Value ) /*0x57a3db*/
          {
            result = IDA_SHIWORD(aP3) - (int16_t)aP3; /*0x57a3dd*/
            if ( result < g_MapCellHeight_Value && v10 <= g_MapCellCount ) /*0x57a3ef*/
            {
              aP3 = v9; /*0x57a3f5*/
              CellData = Tactical::GetCellData((int16_t *)&aP3); /*0x57a402*/
              *((unsigned int *)CellData + 16) = -1; /*0x57a407*/
              result = Cell::GetTerrainMask(this, NeighbourContent, 2); /*0x57a40e*/
              *((unsigned int *)CellData + 16) = result; /*0x57a413*/
            }
          }
          v4 = (unsigned int *)aP1; /*0x57a416*/
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
             (double)(int16_t)-(int16_t)v1 * (double)(int16_t)-(int16_t)v1
           + (double)(int16_t)-(int16_t)v2 * (double)(int16_t)-(int16_t)v2);
      result = Math::RoundToInt(v3); /*0x57b7fe*/
      if ( (int16_t)result <= 5 ) /*0x57b807*/
      {
        v5 = *aP0 + (aP0[1] << 9); /*0x57b813*/
        if ( v5 < 0x40000 && (result = *(unsigned int *)(g_Shroud_CellArray + 4 * v5)) != 0 ) /*0x57b829*/
        {
          v6 = (void *)result; /*0x57b82b*/
        }
        else
        {
          result = *(unsigned int *)aP0; /*0x57b82f*/
          v6 = &g_CellClassArray; /*0x57b831*/
          g_Map_GlobalCellIndex = *(unsigned int *)aP0; /*0x57b836*/
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
  unsigned int *v3; // edi

  v2 = 2; /*0x581f55*/
  v3 = ((char *)&this->q02C + 3); /*0x581f5a*/
  do /*0x581f75*/
  {
    (*(void (__thiscall **)(unsigned int *))(*v3 + 12))(v3); /*0x581f64*/
    Subzone::BuildGraph(v2--); /*0x581f6a*/
    v3 -= 6; /*0x581f70*/
  }
  while ( v2 >= 0 ); /*0x581f75*/
  return MapClass::AllocArrays(g_AudioInitFlag); /*0x581f81*/
}
// 0x588BF0
MapClass * MapClass::Destru_vt04(char a2)
{
  MapClass::Destruct(); /*0x588bf3*/
  if ( (a2 & 1) != 0 ) /*0x588bfd*/
    RA2_OPDEL(); /*0x588c00*/
  return this; /*0x588c0a*/
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
  return *(unsigned int *)(this->q004 + 4 * a2); /*0x588efa*/
}
// 0x589060
VectorClass_flat * MapClass::InitCellVe_vt00(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x589063*/
  if ( v3 && this->IsAllocated ) /*0x589070*/
  {
    RA2_OPDEL(v3); /*0x589078*/
    this->Items = 0; /*0x589080*/
  }
  this->IsAllocated = 0; /*0x58908b*/
  this->q008 = 0; /*0x589091*/
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
  unsigned short *i; // ecx

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
  unsigned int *i; // ecx

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

  if ( g_MapTileArray ) /*0x5a0098*/
  {
    result = 80 * (*a0 + g_MapCellWidth * a0[1]); /*0x5a00b5*/
    *(unsigned int *)((char *)g_MapTileArray + result + 56) = aP1; /*0x5a00b8*/
  }
  return result; /*0x5a00bc*/
}
// 0x5A00C0
int MapClass::GetTileDataField14(MapResourceClass * aP0)
{
  if ( g_MapTileArray ) /*0x5a00c8*/
    return *((unsigned int *)g_MapTileArray + 20 * *aP0 + 20 * g_MapCellWidth * aP0[1] + 14); /*0x5a00ea*/
  else
    return -1; /*0x5a00ca*/
}
// 0x5AC5A0
void MapClass::checkCellBounds()
{
  void *v2; // eax

  v2 = this->q004; /*0x5ac5a6*/
  this->q040 = 0; /*0x5ac5a9*/
  if ( v2 && this->q034 ) /*0x5ac5b0*/
  {
    RA2_OPDEL(v2); /*0x5ac5b6*/
    this->q004 = 0; /*0x5ac5be*/
  }
  this->q034 = 0; /*0x5ac5c1*/
  this->q008 = 0; /*0x5ac5c4*/
}
// 0x5AC5D0
unsigned int MapClass::validateCellCoord(int a2)
{
  if ( this->q00C ) /*0x5ac5d0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q010) >> 2; /*0x5ac5e5*/
  else
    return 0; /*0x5ac5d7*/
}
// 0x5AD0C0
int MapClass::updatePathfindingGrid(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->q010; /*0x5ad0c0*/
  result = 0; /*0x5ad0c3*/
  if ( v2 <= 0 ) /*0x5ad0c8*/
    return -1; /*0x5ad0df*/
  for ( i = (unsigned int *)this->q004; *i != *a2; ++i ) /*0x5ad0ce*/
  {
    if ( ++result >= v2 ) /*0x5ad0dd*/
      return -1; /*0x5ad0dd*/
  }
  return result; /*0x5ad0e2*/
}
// 0x5F60A0
int MapClass::SetCellOverlayFlag()
{
  unsigned int *v1; // eax
  int v2; // ecx
  int result; // eax
  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v6; // [esp+8h] [ebp+4h]

  if ( dword_AC13BC + Cell::GetGroundHeight(v6) <= v6[2] /*0x5f60d3*/
    && (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&MapClass_Instance, v6); /*0x5f60db*/
    v2 = v1[74]; /*0x5f60e0*/
    result = (int)(v1 + 74); /*0x5f60e6*/
    *(unsigned int *)result = v2 | 0x40; /*0x5f60ef*/
  }
  else
  {
    v4 = Coord::To_Cell(&MapClass_Instance, v6); /*0x5f60fa*/
    v5 = v4[73]; /*0x5f60ff*/
    result = (int)(v4 + 73); /*0x5f6105*/
    *(unsigned int *)result = v5 | 0x40; /*0x5f610e*/
  }
  return result; /*0x5f60ee*/
}
// 0x5F6120
int MapClass::ClearCellOverlayFlag()
{
  unsigned int *v1; // eax
  int v2; // ecx
  int result; // eax
  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v6; // [esp+8h] [ebp+4h]

  if ( dword_AC13BC + Cell::GetGroundHeight(v6) <= v6[2] /*0x5f6153*/
    && (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&MapClass_Instance, v6); /*0x5f615b*/
    v2 = v1[74]; /*0x5f6160*/
    result = (int)(v1 + 74); /*0x5f6166*/
    *(unsigned int *)result = v2 & 0xFFFFFFBF; /*0x5f616f*/
  }
  else
  {
    v4 = Coord::To_Cell(&MapClass_Instance, v6); /*0x5f617a*/
    v5 = v4[73]; /*0x5f617f*/
    result = (int)(v4 + 73); /*0x5f6185*/
    *(unsigned int *)result = v5 & 0xFFFFFFBF; /*0x5f618e*/
  }
  return result; /*0x5f616e*/
}