// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/SubzoneHashVector_e4.hpp"  // G57w10 D supply
#include "e4/classes/LZOPipe_e4.hpp"  // G57w10 D supply
#include "e4/classes/TileData_e4.hpp"  // G57w10 D supply

// 0x4112D0
namespace gamemd {  // G42.18 ns repair
int MapClass::isLocationShrouded(uint16_t a2)
{


  unsigned int v5[4]; // [esp+0h] [ebp-10h] BYREF
  v5[3] = this->q02C; /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  void *MapClass_field_0x28; // eax
  MapClass_field_0x28 = (void *)(this->__pad_028); /*0x4112e8*/
  void *MapClass_field_0x14; // ecx
  MapClass_field_0x14 = (void *)(this->q014); /*0x4112eb*/
  v5[2] = (unsigned int)(MapClass_field_0x28); /*0x4112f4*/
  return (*(int (**)(void *, unsigned int *, unsigned int))(*(unsigned int *)MapClass_field_0x14 + 20))( /*0x411303*/
           MapClass_field_0x14,
           v5,
           a2);

}
} // namespace gamemd
// 0x42C1C0
namespace gamemd {
unsigned int * MapClass::AllocArrays()
{
  unsigned int *result; // eax

  void **v1; // esi
  v1 = (void **)(&this->q130); /*0x42c1c8*/
  char *v2; // edi
  v2 = (char *)(&unk_87F810 - (void *)this); /*0x42c1cb*/
  int v3; // ebx
  v3 = 3; /*0x42c1cd*/
  do /*0x42c27c*/
  {
    if ( *(v1 - 3) ) /*0x42c1d2*/
      operator delete((void *)(*(v1 - 3))); /*0x42c1da*/
  char *v4; // eax
    v4 = (char *)operator new(4 * *(int *)((char *)v1 + (unsigned int)v2)); /*0x42c1e9*/
    *(v1 - 3) = v4; /*0x42c1ee*/
  int v5; // ecx
    v5 = *(int *)((char *)v1 + (unsigned int)v2) - 1; /*0x42c1f7*/
    if ( v5 >= 0 ) /*0x42c1f8*/
    {
  char *v6; // eax
      v6 = &v4[4 * v5]; /*0x42c1fa*/
  int v7; // ecx
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
      operator delete((void *)(*v1)); /*0x42c211*/
  char *v8; // eax
    v8 = (char *)operator new(4 * *(int *)((char *)v1 + (unsigned int)v2)); /*0x42c220*/
    *v1 = v8; /*0x42c225*/
  int v9; // ecx
    v9 = *(int *)((char *)v1 + (unsigned int)v2) - 1; /*0x42c22d*/
    if ( v9 >= 0 ) /*0x42c22e*/
    {
  char *v10; // eax
      v10 = &v8[4 * v9]; /*0x42c230*/
  int v11; // ecx
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
      operator delete((void *)(v1[3])); /*0x42c248*/
    result = (unsigned int *)(operator new(4 * *(int *)((char *)v1 + (unsigned int)v2))); /*0x42c257*/
    v1[3] = result; /*0x42c25c*/
  int v13; // ecx
    v13 = *(int *)((char *)v1 + (unsigned int)v2) - 1; /*0x42c265*/
    if ( v13 >= 0 ) /*0x42c266*/
    {
      result += v13; /*0x42c268*/
  int v14; // ecx
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


  void *v3; // edi
  v3 = (void *)a2; /*0x485134*/
  int v4; // eax
  v4 = *&this->q03C; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(unsigned int *)(v4 + 44); /*0x485143*/
    *&this->q03C = 0; /*0x485146*/
  int v5; // eax
    v5 = (*(int (**)(char *, char *))(*(unsigned int *)&DataGlobal_880944 + 16))( /*0x48515c*/
           &DataGlobal_880944,
           &this->outBuffer);
    if ( v5 != -1 && v5 < *(int *)&DataGlobal_880954 ) /*0x48516c*/
    {
      --*(unsigned int *)&DataGlobal_880954; /*0x485171*/
      for ( ; /*0x485177*/
            v5 < *(int *)&DataGlobal_880954;
            *(unsigned int *)(*(unsigned int *)&DataGlobal_880948 + 4 * v5 - 4) = *(unsigned int *)(*(unsigned int *)&DataGlobal_880948
                                                                                          + 4 * v5) )
      {
        ++v5; /*0x48517f*/
      }
    }
  }
  if ( this->q02C == v3 ) /*0x485194*/
    this->q02C = 0; /*0x485196*/
  if ( *(void **)this->__pad_30 == v3 ) /*0x4851a0*/
    *(unsigned int *)this->__pad_30 = 0; /*0x4851a2*/
  int result; // eax
  result = (int)this->__pad_028; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (**)(void *))(*(unsigned int *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
  unsigned int *MapClass_field_0x28; // esi
      MapClass_field_0x28 = (unsigned int *)(this->__pad_028); /*0x4851bc*/
      a2 = (int)v3; /*0x4851bf*/
      result = (*(int (**)(unsigned int *, int *))(*MapClass_field_0x28 + 16))(MapClass_field_0x28, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
  int v8; // ecx
        v8 = MapClass_field_0x28[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
  int v9; // ecx
          v9 = v8 - 1; /*0x4851db*/
          for ( MapClass_field_0x28[4] = v9; /*0x4851e1*/
                result < MapClass_field_0x28[4];
                *(unsigned int *)(MapClass_field_0x28[1] + 4 * result - 4) = *(unsigned int *)(MapClass_field_0x28[1] + 4 * result) )
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
int MapClass::SetCellFlagsAlongPath(unsigned short *aP1, unsigned short *a2, void *a3)
{


  unsigned short *v4; // ebp
  v4 = aP1; /*0x4a95a2*/
  int result; // eax
  LOWORD(result) = *aP1; /*0x4a95aa*/
  if ( *aP1 != *(unsigned short *)&stru_8A0390.bombVisible || aP1->q002_ != *(unsigned short *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a95c2*/
  {
  __int16 *v6; // esi
    v6 = (short *)(*&this->q117C); /*0x4a95c4*/
  char v7; // bl
    v7 = (char)a2; /*0x4a95ca*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a95db*/
    {
  __int16 *v8; // eax
      v8 = v6; /*0x4a95dd*/
      v6 += 2; /*0x4a95df*/
  __int16 v9; // dx
      v9 = *v8; /*0x4a95e2*/
      LOWORD(v8) = v4[1] + v8[1]; /*0x4a95ed*/
      LOWORD(a2) = *v4 + v9; /*0x4a95f1*/
      HIWORD(a2) = (unsigned short)v8; /*0x4a95f6*/
      aP1 = a2; /*0x4a9603*/
      result = ((LayerClass *)this)->CoordinatesLegal((__int16 *)&aP1); /*0x4a960a*/
      if ( (unsigned char)result ) /*0x4a9611*/
      {
        result = (int)((CellCoord *)this)->To_CellObj((__int16 *)&aP1); /*0x4a961a*/
  int v10; // ecx
        v10 = result->copyFlags; /*0x4a961f*/
        if ( v7 ) /*0x4a9627*/
          result->copyFlags = v10 | 2; /*0x4a962c*/
        else
          result->copyFlags = v10 & 0xFFFFFFFD; /*0x4a9637*/
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

  int (**v6)(MapClass *); // eax
  MapClass *v7; // [esp+0h] [ebp-8h]

  int result; // eax
  result = a2; /*0x4ac960*/
  char v4; // bl
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
    result = *&this->q11A8; /*0x4ac991*/
    if ( !result ) /*0x4ac999*/
    {
      if ( v4 && !MapClass::isCellAccessible((char *)&g_VisibilitySystem, (int)dword_A83D4C->relatedTagsCount) ) /*0x4ac9ad*/
        v4 = 0; /*0x4ac9b6*/
  void *MapClass_field_0x0; // edx
      MapClass_field_0x0 = this->vtable1; /*0x4ac9b8*/
      this->q11B1 = 0; /*0x4ac9c0*/
      this->q11B2 = 0; /*0x4ac9c7*/
      this->q11B3 = 0; /*0x4ac9ce*/
      this->q11B0 = 0; /*0x4ac9d5*/
      (*((void (**)(MapClass *, unsigned int, unsigned int))MapClass_field_0x0 + 18))(this, 0, 0); /*0x4ac9dc*/
      if ( v4 ) /*0x4ac9e1*/
      {
        this->q11B4 = 1; /*0x4ac9e3*/
        return (v7)->UnselectAll_ClearLimboLaunchers(); /*0x4ac9ea*/
      }
      else
      {
        v6 = (int (**)(MapClass *))this->vtable1; /*0x4ac9f4*/
        this->q11B4 = 0; /*0x4ac9f8*/
        return v6[20](this); /*0x4ac9ff*/
      }
    }
  }
  return result; /*0x4ac9ef*/

}
} // namespace gamemd
// 0x4AD7E0
namespace gamemd {
INIClass * * MapClass::SaveCellTagsToINI(char * a2, void * aIsomappack, void * aIsomappack2, void * aIsomappack3, void * aIsomappack4, void * aIsomappack5)
{
  Pipe v18; // [esp+30h] [ebp-1Ch] BYREF

  int16_t v3; // bp
  v3 = 0; /*0x4ad7ef*/
  CellCoord *v4; // ebx
  v4 = (CellCoord *)this; /*0x4ad7f2*/
  MapClass *v16; // [esp+18h] [ebp-34h]
  v16 = this; /*0x4ad7f8*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)&off_81FFF0, 0); /*0x4ad7fc*/
  MapClass::loadTheaterINI((gamemd::INIClass *)(a2), &off_81FFF0, g_INI_Key_Theater, dword_A8B230[130].uniqueId); /*0x4ad81b*/
  INIClass::SetRect(a2, &off_81FFF0, (char *)g_Str_EVA_CannotDeployHere.Type, &v4[59]); /*0x4ad835*/
  INIClass::SetRect(a2, &off_81FFF0, &g_Str_EVA_CannotDeployHere.RussianVoice[3], &v4[63]); /*0x4ad84f*/
  ScenarioClass::Write_Waypoints((ScenarioClass *)dword_A8B230, a2); /*0x4ad85b*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)g_INI_Key_CellTags, 0); /*0x4ad86a*/
  char *i; // [esp+50h] [ebp+4h]
  for ( i = 0; (int)i < 512000; i += 1000 ) /*0x4ad86f*/
  {
  int j; // edi
    for ( j = 0; j < 512; ++j ) /*0x4ad873*/
    {
  int16_t v14[2]; // [esp+10h] [ebp-3Ch] BYREF
      v14[0] = j; /*0x4ad87c*/
      v14[1] = v3; /*0x4ad881*/
      if ( *((unsigned int *)((CellCoord *)(v4))->To_CellObj(v14) + 15) ) /*0x4ad88b*/
      {
  int16_t v15[2]; // [esp+14h] [ebp-38h] BYREF
        v15[0] = j; /*0x4ad896*/
        v15[1] = v3; /*0x4ad89e*/
  int v6; // ebx
        v6 = *((unsigned int *)((CellCoord *)(v4))->To_CellObj(v15) + 15); /*0x4ad8a8*/
        if ( v6 && *(unsigned int *)(v6 + 36) ) /*0x4ad8af*/
        {
  CHAR v17[20]; // [esp+1Ch] [ebp-30h] BYREF
          wsprintfA(v17, "%d", &i[j]); /*0x4ad8c7*/
          INIClass::SetString(a2, g_INI_Key_CellTags, v17, (char *)(*(unsigned int *)(v6 + 36) + 36)); /*0x4ad8e4*/
        }
        v4 = (CellCoord *)v16; /*0x4ad8e9*/
      }
    }
    ++v3; /*0x4ad8fe*/
  }
  int v7; // edi
  v7 = (*((int (**)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 32))(DSurface_Alternate); /*0x4ad92b*/
  int v8; // edi
  v8 = (*((int (**)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 31))(DSurface_Alternate) * v7; /*0x4ad932*/
  int v9; // edi
  v9 = (*((int (**)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 28))(DSurface_Alternate) * v8; /*0x4ad940*/
  int v10; // eax
  v10 = (*((int (**)(DSurface *, unsigned int, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad94d*/
          DSurface_Alternate,
          0,
          0);
  v18.__pad_004 = 0; /*0x4ad956*/
  v18.q008 = 0; /*0x4ad95a*/
  /* X11: vtable install elided (implicit via Pipe virtuals 0x4ad95e) */
  Buffer::Init((Buffer *)&v18.q00C, v10, v9); /*0x4ad966*/
  int v19; // [esp+48h] [ebp-4h]
  v19 = 0; /*0x4ad96f*/
  /* X11: vtable install elided (implicit via BufferPipe virtuals 0x4ad979) */
  signed int v11; // edi
  v11 = (int)(MapClass::DecompressCellData((MapClass *)&DataGlobal_87F7E8, (int)&v18)); /*0x4ad990*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)aIsomappack, 0); /*0x4ad992*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)aIsomappack2, 0); /*0x4ad9a0*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)aIsomappack3, 0); /*0x4ad9af*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)aIsomappack4, 0); /*0x4ad9be*/
  INIClass::ClearSection((gamemd::INIClass *)((int *)a2), (int)aIsomappack5, 0); /*0x4ad9cc*/
  if ( v11 > 0 ) /*0x4ad9d3*/
  {
  int v12; // eax
    v12 = (*((int (**)(DSurface *, unsigned int, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 23))( /*0x4ad9e2*/
            DSurface_Alternate,
            0,
            0);
    INIClass::ReadBase64Data((gamemd::INIClass *)(a2), (uint8_t *)aIsomappack5, v12, v11); /*0x4ad9ee*/
    (*((void (**)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ad9fb*/
  }
  (*((void (**)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate); /*0x4ada06*/
  Vector::Clear((int)&v18.q00C); /*0x4ada0d*/
  return (gamemd::INIClass **)(((Pipe *)(&v18))->Dtor()); /*0x4ada1b*/
}
}
// 0x4AEB30
namespace gamemd {
int MapClass::SetScrollMode(int a2, int aP1, int a1, int aP2, int a3)
{


  int result; // eax
  result = aP1; /*0x4aeb30*/
  *(unsigned int *)(aP1 + 4512) = aP1; /*0x4aeb36*/
  LOBYTE(result) = aP1 != 0; /*0x4aeb3c*/
  *(unsigned char *)(aP1 + 4508) = aP1 != 0; /*0x4aeb3f*/
  return result; /*0x4aeb45*/

}
} // namespace gamemd
// 0x506D50
namespace gamemd {
int MapClass::CalcVisibleCellRange(int a1, int a2, VectorClass_flat * aP2, int * a3)
{
  int v6; // ebx
  int v16; // [esp+18h] [ebp-28h]

  if ( a2 <= 0 ) /*0x506d61*/
    a2 = 1; /*0x506d63*/
  int v4; // kr04_4
  v4 = *(unsigned int *)(a1 + 156); /*0x506d8c*/
  int v5; // esi
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
  int v7; // esi
  v7 = v5 + 6; /*0x506dc0*/
  int v15; // [esp+14h] [ebp-2Ch]
  v15 = a3[2] + *a3; /*0x506dc7*/
  if ( v15 >= v7 ) /*0x506dcb*/
    v15 = v7; /*0x506dcd*/
  int v8; // edx
  v8 = (int16_t)(*(unsigned int *)(a1 + 160) / 256); /*0x506dd1*/
  int v9; // eax
  v9 = a3[1]; /*0x506dd4*/
  int v21; // [esp+3Ch] [ebp-4h]
  v21 = v8; /*0x506dd7*/
  int v10; // esi
  v10 = v8 - 6; /*0x506de0*/
  if ( v8 - 6 <= v9 ) /*0x506de2*/
    v10 = a3[1]; /*0x506de4*/
  int v18; // [esp+20h] [ebp-20h]
  v18 = a3[3] + v9; /*0x506df0*/
  if ( v18 >= v8 + 6 ) /*0x506df4*/
    v18 = v8 + 6; /*0x506df6*/
  int result; // eax
  result = v18; /*0x506dfa*/
  int i; // [esp+1Ch] [ebp-24h]
  for ( i = v10; v10 < v18; i = v10 ) /*0x506e04*/
  {
    if ( v6 < v15 ) /*0x506e0e*/
    {
  int v12; // esi
      v12 = (v10 - v8) * (v10 - v8); /*0x506e16*/
  int v20; // [esp+38h] [ebp-8h]
      v20 = v12; /*0x506e19*/
      do /*0x506eba*/
      {
  double v19; // [esp+28h] [ebp-18h]
        v19 = Math::Sqrt((double)(v12 + (v6 - (int16_t)(v4 / 256)) * (v6 - (int16_t)(v4 / 256)))); /*0x506e3f*/
        if ( v19 < 6.0 ) /*0x506e51*/
        {
  double v13; // st7
          v13 = v19; /*0x506e53*/
          if ( v19 < 1.0 ) /*0x506e75*/
            v13 = 1.0; /*0x506e79*/
  int *v14; // esi
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

  CCFileClass v12; // [esp+Ch] [ebp-6Ch] BYREF

  CCFileClass::Construct(&v12, &this->q2F5); /*0x547033*/
  int Size; // ebx
  Size = CCFileClass::GetSize(&v12); /*0x547041*/
  if ( *&this->u32_A4 ) /*0x547043*/
    __3_YAXPAX_Z(*&this->u32_A4); /*0x54704e*/
  void *v3; // eax
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x547057*/
  *&this->u32_A4 = (unsigned int)(v3); /*0x547063*/
  CCFileClass::Read(&v12, v3, Size); /*0x54706b*/
  unsigned __int8 *v4; // eax
  v4 = *(unsigned __int8 **)&this->u32_A4; /*0x547070*/
  this->q0A8 = 1; /*0x547078*/
  int v5; // edi
  v5 = 0; /*0x54707f*/
  *&this->q2E4 = *v4; /*0x547083*/
  int v6; // ecx
  v6 = v4[4]; /*0x547091*/
  int v7; // edx
  v7 = v6 * *&this->q2E4; /*0x547094*/
  *&this->q2E8 = v6; /*0x547099*/
  if ( v7 > 0 ) /*0x54709f*/
  {
  unsigned int *v8; // ecx
    v8 = (unsigned int *)(v4 + 16); /*0x5470a1*/
    do /*0x5470cb*/
    {
  unsigned int v9; // eax
      v9 = *v8; /*0x5470a4*/
      if ( *v8 ) /*0x5470a4*/
      {
  unsigned int v10; // edx
        v10 = *&this->u32_A4; /*0x5470aa*/
        if ( v9 < v10 ) /*0x5470b2*/
          *v8 = v10 + v9; /*0x5470b6*/
      }
      ++v5; /*0x5470be*/
      ++v8; /*0x5470c6*/
    }
    while ( v5 < *&this->q2E8 * *&this->q2E4 ); /*0x5470cb*/
  }
  ((TerrainClass *)this)->InitTheatre(); /*0x5470cf*/
  *(unsigned int *)v12.CDFileClass = &vt_CCFileClass; /*0x5470d8*/
  int v14; // [esp+70h] [ebp-8h]
  v14 = 0; /*0x5470e0*/
  int v13[3]; // [esp+64h] [ebp-14h] BYREF
  Vector::Clear((int)v13); /*0x5470e8*/
  *(unsigned int *)v12.CDFileClass = &off_7E1668; /*0x5470f1*/
  ((BufferIOFileClass *)&v12)->Dtor(); /*0x5470f9*/
  return (gamemd::ObjectClass **)(Size); /*0x5470fe*/

}
} // namespace gamemd
// 0x554A80
namespace gamemd {
int MapClass::ScrollOnce(AbstractClass * aP1)
{

  int result; // eax
  (*((unsigned char *)&(result))) = this->Activated; /*0x554a80*/
  if ( (unsigned char)result ) /*0x554a85*/
  {
    this->Activated = 0; /*0x554a8b*/
    return ((char)(aP1))->ScrollView(); /*0x554a90*/
  }
  return result; /*0x554a95*/
}
} // namespace gamemd
// 0x5652C0
namespace gamemd {
void* MapClass::Destruct(void *a1)
{


  /* X11: vtable install elided (implicit via MapClass virtuals 0x5652c5) */
  CleanupVeinholeSystem(); /*0x5652cb*/
  Map_Destroy(); /*0x5652d0*/
  BuildingClass::FreeUpgradeQueue(); /*0x5652d5*/
  BuildingClass::FreeUpgradeQueue2(); /*0x5652da*/
  if ( this->somecount_4C ) /*0x5652df*/
  {
    __3_YAXPAX_Z(*((void **)&this->q002_6)); /*0x5652e9*/
    this->somecount_4C = 0; /*0x5652f1*/
  }
  unsigned int *v2; // edi
  v2 = (unsigned int *)this->q014; /*0x5652f6*/
  if ( v2 ) /*0x5652fb*/
  {
    if ( *v2 ) /*0x5652fd*/
      (**(void (***)(unsigned int, int))*v2)(*v2, 3); /*0x565307*/
    __3_YAXPAX_Z(v2); /*0x56530a*/
    this->q014 = 0; /*0x565312*/
  }
  if ( this->__pad_070 ) /*0x565315*/
  {
    __3_YAXPAX_Z(this->u32_708)); /*0x56531d*/
    this->__pad_070 = 0; /*0x565325*/
  }
  unsigned int **v3; // ebp
  v3 = &this->q080; /*0x565328*/
  int v12; // [esp+8h] [ebp-4h]
  v12 = 3; /*0x56532e*/
  do /*0x565361*/
  {
  unsigned int *v4; // edi
    v4 = *v3; /*0x565336*/
    if ( *v3 ) /*0x565336*/
    {
      if ( *v4 ) /*0x56533d*/
        (**(void (***)(unsigned int, int))*v4)(*v4, 3); /*0x565347*/
      __3_YAXPAX_Z(v4); /*0x56534a*/
      *v3 = 0; /*0x565352*/
    }
    ++v3; /*0x565359*/
    --v12; /*0x56535d*/
  }
  while ( v12 ); /*0x565361*/
  void *v5; // eax
  v5 = (void *)this->u32_1160; /*0x565363*/
  this->u32_115C = &vt_VectorClass; /*0x565370*/
  if ( v5 && this->u32_1169 ) /*0x565378*/
  {
    __3_YAXPAX_Z(v5); /*0x565381*/
    this->u32_1160 = 0; /*0x565389*/
  }
  this->u32_1169 = 0; /*0x56538f*/
  this->u32_1164 = 0; /*0x565395*/
  void *v6; // eax
  v6 = (void *)this->__pad_13C; /*0x56539b*/
  this->MaxLevel = &vt_VectorClass; /*0x5653a1*/
  if ( v6 && this->u32_145 ) /*0x5653af*/
  {
    __3_YAXPAX_Z(v6); /*0x5653b8*/
    this->__pad_13C = 0; /*0x5653c0*/
  }
  this->u32_145 = 0; /*0x5653c6*/
  this->q140 = 0; /*0x5653cc*/
  void *v7; // eax
  v7 = (void *)this->u32_D8; /*0x5653d2*/
  this->u32_D4 = &vt_VectorClass; /*0x5653d8*/
  if ( v7 && this->u32_E1 ) /*0x5653e2*/
  {
    __3_YAXPAX_Z(v7); /*0x5653eb*/
    this->u32_D8 = 0; /*0x5653f3*/
  }
  this->u32_E1 = 0; /*0x5653f9*/
  this->u32_DC = 0; /*0x5653ff*/
  char *v8; // edi
  v8 = &this->u32_D4; /*0x565405*/
  int v9; // ebp
  v9 = 3; /*0x56540b*/
  do /*0x56543a*/
  {
  void *v10; // ecx
    v10 = (void *)*((unsigned int *)v8 - 5); /*0x565410*/
    v8 -= 24; /*0x565413*/
    *(unsigned int *)v8 = (unsigned int)(&vt_VectorClass); /*0x565418*/
    if ( v10 && v8->u8_D ) /*0x565420*/
    {
      SubzoneConnectionVector::Destruct(v10, 3); /*0x56542b*/
      v8->u32_4 = 0; /*0x565430*/
    }
    --v9; /*0x565433*/
    v8->u8_D = 0; /*0x565434*/
    v8->u32_8 = 0; /*0x565437*/
  }
  while ( v9 ); /*0x56543a*/
  void *v11; // eax
  v11 = (void *)this->__pad_054; /*0x56543c*/
  this->ptr_50 = &vt_VectorClass; /*0x565442*/
  if ( v11 && this->u32_5D ) /*0x56544c*/
  {
    __3_YAXPAX_Z(v11); /*0x565452*/
    this->__pad_054 = 0; /*0x56545a*/
  }
  this->u32_5D = 0; /*0x56545d*/
  this->q058 = 0; /*0x565460*/
  /* X11: vtable install elided (implicit via off_7EA6FC virtuals 0x565463) */

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
  *&v1->__pad_14C = 512; /*0x565819*/
  *&v1->q150 = 512; /*0x56581f*/
  MapClass_field_0x0 = (int)(v1->vtable1); /*0x565825*/
  *&v1->q154 = 0x40000; /*0x565828*/
  (*(void (**)(MapClass *))(MapClass_field_0x0 + 88))(v1); /*0x565832*/
  if ( v1->q014 ) /*0x565835*/
    goto LABEL_14; /*0x56583a*/
  v3 = (HashVector_UInt **)operator new(0x10u); /*0x565842*/
  v4 = v3; /*0x565847*/
  if ( v3 ) /*0x56584e*/
  {
    v3[1] = (gamemd::HashVector_UInt *)((HashVector_UInt *)Cell::DecodeFlags); /*0x56585e*/
    v3[2] = (HashVector_UInt *)256; /*0x565865*/
    v3[3] = (HashVector_UInt *)20; /*0x56586c*/
    v5 = (HashVector_UInt *)operator new(0x1804u); /*0x56586f*/
    if ( v5 ) /*0x565879*/
    {
      v6 = v5 + 1; /*0x56587b*/
      *v5 = (gamemd::HashVector_UInt)((HashVector_UInt)256); /*0x56587e*/
      v7 = v5 + 1; /*0x565884*/
      v8 = 256; /*0x565886*/
      do /*0x5658ae*/
      {
        HashVector_UInt::Construct(v7, 0, 0); /*0x565891*/
        *v7 = (gamemd::HashVector_UInt)((HashVector_UInt)&vt_DynamicVectorClassHashObject); /*0x565896*/
        v7[5] = (gamemd::HashVector_UInt)((HashVector_UInt)10); /*0x56589c*/
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
        (*v4)[v12 + 5] = (gamemd::HashVector_UInt)((HashVector_UInt)20); /*0x5658cf*/
        v12 += 6; /*0x5658d6*/
      }
      while ( v11 < (int)v4[2] ); /*0x5658db*/
      v1->q014 = (int)v4; /*0x5658dd*/
      goto LABEL_14; /*0x5658e0*/
    }
  }
  else
  {
    v4 = 0; /*0x5658e2*/
  }
  v1->q014 = (int)v4; /*0x5658e9*/
  LABEL_14:
  v13 = (char *)(&v1->LevelAndPassabilityStruct2pointer_70); /*0x5658f3*/
  v27 = &v1->q080; /*0x5658ff*/
  v28 = (char *)(&v1->LevelAndPassabilityStruct2pointer_70); /*0x565903*/
  v29 = 3; /*0x565907*/
  do /*0x5659d3*/
  {
    (*(void (**)(char *))(*(unsigned int *)v13 + 12))(v13); /*0x565913*/
    v14 = (SubzoneHashVector **)operator new(0x10u); /*0x565918*/
    v15 = v14; /*0x56591d*/
    if ( v14 ) /*0x565924*/
    {
      v14[1] = (gamemd::SubzoneHashVector *)((SubzoneHashVector *)Cell::DecodeFlags); /*0x56592f*/
      v14[2] = (SubzoneHashVector *)256; /*0x565936*/
      v14[3] = (SubzoneHashVector *)20; /*0x56593d*/
      v16 = (SubzoneHashVector *)operator new(0x1804u); /*0x565940*/
      if ( v16 ) /*0x56594a*/
      {
        v17 = v16 + 1; /*0x56594c*/
        *v16 = (SubzoneHashVector)256; /*0x56594f*/
        v18 = v16 + 1; /*0x565955*/
        v19 = 256; /*0x565957*/
        do /*0x56597f*/
        {
          SubzoneHashVector::Construct(v18, 0, 0); /*0x565962*/
          *v18 = (gamemd::SubzoneHashVector)((SubzoneHashVector)&vt_DynamicVectorClassHashObject); /*0x565967*/
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
    *(unsigned int *)v27 = (unsigned int)(v15); /*0x5659c1*/
    v27 += 4; /*0x5659c6*/
    --v29; /*0x5659cf*/
  }
  while ( v29 ); /*0x5659d3*/
  memset(v1->q018, 0, 0x34u); /*0x5659e3*/
  return 0; /*0x5659e5*/
}
} // namespace gamemd
// 0x5659F0
namespace gamemd {
void MapClass::Destru_vt07()
{


  Debug::Log(); /*0x5659fa*/
  Event::Dispatch(); /*0x565a02*/
  ((MapClass *)g_ZBufferDescriptor)->isCellShrouded(0xFFFFu); /*0x565a12*/
  ((MapClass *)dword_87E8A4)->isLocationShrouded(0x7Fu); /*0x565a1f*/
  Event::Dispatch(); /*0x565a24*/
  ((GScreenClass *)this)->Remove(); /*0x565a2b*/
  Event::Dispatch(); /*0x565a30*/
  char *v2; // edx
  v2 = &this->q158; /*0x565a35*/
  int v3; // ebx
  v3 = 256; /*0x565a3b*/
  do /*0x565a76*/
  {
  int v4; // esi
    v4 = *(unsigned int *)v2; /*0x565a40*/
  bool v5; // zf
    v5 = *(unsigned int *)v2 == -1; /*0x565a47*/
    *((unsigned int *)v2 + 3) = dword_ABD480; /*0x565a4a*/
    if ( !v5 ) /*0x565a4d*/
    {
  int v6; // eax
      v6 = *((unsigned int *)v2 + 2); /*0x565a4f*/
      if ( v4 != -1 ) /*0x565a55*/
      {
        if ( (int)dword_A8ED84 - v4 >= v6 ) /*0x565a61*/
          v6 = 0; /*0x565a67*/
        else
          v6 -= (int)dword_A8ED84 - v4; /*0x565a63*/
      }
      *((unsigned int *)v2 + 2) = v6; /*0x565a69*/
      *(unsigned int *)v2 = -1; /*0x565a6c*/
    }
    v2 += 16; /*0x565a72*/
    --v3; /*0x565a75*/
  }
  while ( v3 ); /*0x565a76*/
  *&this->Crates = 13; /*0x565a7d*/
  this->q1158 = 0; /*0x565a87*/
  Debug::Log(); /*0x565a8e*/

}
} // namespace gamemd
// 0x565AA0
namespace gamemd {
int MapClass::InitCellVector()
{


  char *v2; // ecx
  v2 = &this->MaxLevel; /*0x565aa3*/
  if ( v2 ) /*0x565aab*/
  {
    *((unsigned int *)v2 + 1) = 0; /*0x565aad*/
    *((unsigned int *)v2 + 2) = 0; /*0x565ab4*/
    v2[12] = 1; /*0x565abb*/
    v2[13] = 0; /*0x565abf*/
    *(unsigned int *)v2 = &vt_VectorClass; /*0x565ac3*/
  }
  (*(void (**)(char *, unsigned int, unsigned int))(*(unsigned int *)v2 + 8))(v2, *&this->q154, 0); /*0x565ad4*/
  int result; // eax
  for ( result = 0; result < *&this->q154; *((unsigned int *)this->MapClass_field_0x13C + result - 1) = 0 ) /*0x565ae1*/
    ++result; /*0x565ae9*/
  return result; /*0x565afc*/

}
} // namespace gamemd
// 0x565BC0
namespace gamemd {
unsigned int * MapClass::InitAllCells()
{

  unsigned int *result; // eax

  int v2; // edi
  v2 = 0; /*0x565bc6*/
  int v3; // esi
  v3 = 0; /*0x565bc8*/
  *(unsigned int *)this->q134 = 0; /*0x565bca*/
  do /*0x565bfc*/
  {
  int v4; // ebx
    v4 = 512; /*0x565bd0*/
    do /*0x565bf4*/
    {
      if ( v2 < this->q140 ) /*0x565bdb*/
      {
        result = this->__pad_13C; /*0x565bdd*/
  CellClass *v6; // ecx
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
int MapClass::RevealArea0(int *a2, int a3, void *a4, char a5, char a6, char a7, char a8, char a9, int *aP1, int aP2, int aP3, int aP4, int aP5, int a1)
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
  #375 *v19; // edi
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
  MapClass_field_0xF4 = aP1->MapClass_field_0xF4; /*0x5674b2*/
  v16 = v46 + v45; /*0x5674b8*/
  if ( v16 <= (int)MapClass_field_0xF4 ) /*0x5674bd*/
    return result; /*0x5674bd*/
  if ( v45 - v46 >= (int)MapClass_field_0xF4 ) /*0x5674c9*/
    return result; /*0x5674c9*/
  result = v46 - v45; /*0x5674cf*/
  if ( result >= (int)MapClass_field_0xF4 ) /*0x5674d3*/
    return result; /*0x5674d3*/
  result = *(unsigned int *)aP1->__pad_F8; /*0x5674d9*/
  if ( v16 > (int)MapClass_field_0xF4 + 2 * result ) /*0x5674e4*/
    return result; /*0x5674e4*/
  result = aP1; /*0x5674ea*/
  if ( !aP1 ) /*0x5674f0*/
    return result; /*0x5674f0*/
  if ( aP1 >= 11 ) /*0x5674f9*/
    aP1 = 10; /*0x567500*/
  v39 = &g_MissionQueueFrame.waypoints[2150]; /*0x567512*/
  v54 = (int *)&g_MissionQueueFrame.waypoints[822]; /*0x56751a*/
  v17 = dword_7ED3D0[aP1]; /*0x567528*/
  if ( !*(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6126) && aP1 && aP1 > 2 ) /*0x56753e*/
  {
    v18 = dword_7ED3C4[aP1]; /*0x567540*/
    v17 -= v18; /*0x567547*/
    v39 = (char *)(4 * v18 + 11261072); /*0x567557*/
    v54 = (int *)(4 * v18 + 11259744); /*0x56755b*/
  }
  v19 = (#375 *)aP1; /*0x567563*/
  v55 = v54 - 1; /*0x56756c*/
  if ( !aP1 ) /*0x567570*/
    goto LABEL_21; /*0x567570*/
  result = (int)dword_A83D4C; /*0x567572*/
  if ( !dword_A83D4C ) /*0x567579*/
    goto LABEL_22; /*0x567579*/
  if ( aP1 != dword_A83D4C ) /*0x56757d*/
  {
    if ( ((1 << *((unsigned int *)dword_A83D4C->relatedTagsCapacity + 46)) & *((unsigned int *)aP1 + 5433)) != 0 ) /*0x567595*/
    {
      v19 = (#375 *)dword_A83D4C; /*0x567597*/
      aP1 = dword_A83D4C; /*0x567599*/
    }
    if ( v19 != (#375 *)dword_A83D4C ) /*0x56759f*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith(v19, (#375 *)dword_A83D4C) /*0x5675b2*/
        && *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6119) )
      {
        result = (int)dword_A83D4C; /*0x5675bc*/
        v19 = (#375 *)dword_A83D4C; /*0x5675c1*/
        aP1 = dword_A83D4C; /*0x5675c3*/
        goto LABEL_22; /*0x5675c7*/
      }
LABEL_21:
      result = (int)dword_A83D4C; /*0x5675c9*/
LABEL_22:
      if ( v19 != (#375 *)result ) /*0x5675d0*/
        return result; /*0x5675d0*/
    }
  }
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x5675f1*/
    || !dword_A8B23C
    || (v56 = 1, (*((unsigned __int8 (**)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)) )
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
      v23 = *(unsigned short *)v22 + v13; /*0x567626*/
      v24 = v46 + v22->q002_; /*0x56762d*/
      LOWORD(v48) = v23; /*0x567635*/
      ++v55; /*0x56763a*/
      v25 = aP1->MapClass_field_0xF4; /*0x56763e*/
      HIWORD(v48) = v24; /*0x567644*/
      *(unsigned int *)v47 = v48; /*0x567653*/
      v26 = v24 + v23; /*0x567657*/
      if ( v26 > (int)v25 ) /*0x56765c*/
      {
        if ( v23 - v24 >= (int)v25 || v24 - v23 >= (int)v25 ) /*0x567672*/
        {
          LOWORD(v13) = v45; /*0x5678a3*/
          continue; /*0x5678a3*/
        }
        LOWORD(v13) = v45; /*0x56767e*/
        if ( v26 > (int)v25 + 2 * *(unsigned int *)aP1->__pad_F8 ) /*0x567688*/
          continue; /*0x567688*/
        if ( (int)abs32(v23 - v45) > aP1 ) /*0x56769e*/
          continue; /*0x56769e*/
        v42 = (__int16)(HIWORD(v48) - v46); /*0x5676bd*/
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
        if ( (__int16)Math::RoundToInt(v9) > aP1 ) /*0x5676f0*/
          continue; /*0x5676f0*/
        v27 = v47[0] + (v47[1] << 9); /*0x567707*/
        if ( v27 < 0x40000 && (v28 = (int *)*((unsigned int *)aP1->MapClass_field_0x13C + v27)) != 0 ) /*0x56771e*/
        {
          v29 = v28; /*0x567720*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = *(unsigned int *)v47; /*0x567724*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x567729*/
        }
        if ( aP1 && *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6126) ) /*0x56773c*/
        {
          LOWORD(v40) = v47[0] - v49 + *(unsigned short *)v55; /*0x567765*/
          HIWORD(v40) = v47[1] - v50 + v55->ptr_2; /*0x56776a*/
          v30 = (__int16)v40 + (SHIWORD(v40) << 9); /*0x567778*/
          if ( v30 >= 0x40000 || (v31 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v30)) == 0 ) /*0x56778e*/
          {
            v31 = &g_MissionQueueFrame.briefing[130]; /*0x567794*/
            g_MissionQueueFrame.briefing[139] = v40; /*0x567799*/
          }
          if ( *((char *)v31 + 283) > v44 + 3 ) /*0x5677af*/
            continue; /*0x5677af*/
        }
        v32 = *((__int16 *)v29 + 18); /*0x5677bf*/
        v33 = (void *)*((__int16 *)v29 + 19); /*0x5677c3*/
        v29->flags &= ~0x40u; /*0x5677cc*/
        if ( !v56 ) /*0x5677d2*/
        {
LABEL_54:
          if ( aP1 ) /*0x567827*/
          {
            v35 = v29->flags; /*0x567829*/
            if ( ((v35 & 1) == 0 || (v35 & 2) == 0) && (v29->copyFlags & 8) != 0 ) /*0x56783e*/
              DisplayClass::ProcessCellReveal((DisplayClass *)&DataGlobal_87F7E8, v47, (int)aP1); /*0x56784f*/
          }
          else
          {
            v36 = v29->copyFlags; /*0x567856*/
            if ( (v36 & 8) == 0 || (v36 & 0x10) == 0 || (v37 = v29->flags, (v37 & 1) == 0) || (v37 & 2) == 0 ) /*0x567870*/
            {
              if ( !aP1 ) /*0x567878*/
              {
                if ( aP1 ) /*0x567880*/
                  Conditions::CheckResult3((RadarClass *)v47, (int)aP1, 0); /*0x567893*/
                else
                  CellClass::Unshroud((CellClass *)v29); /*0x56789c*/
              }
            }
          }
          continue; /*0x567854*/
        }
        if ( v32 == 7 ) /*0x5677d7*/
        {
          if ( v33 == (char *)aP1->MapClass_field_0xF4 + 5 ) /*0x5677e4*/
            continue; /*0x5677e4*/
        }
        else if ( v32 == 13 && v33 == (char *)aP1->MapClass_field_0xF4 + 11 ) /*0x5677fc*/
        {
          continue; /*0x5677fc*/
        }
        v34 = *(unsigned int *)aP1->__pad_F8; /*0x567802*/
        if ( v32 != v34 + 13 || v33 != (char *)aP1->MapClass_field_0xF4 + v34 - 15 ) /*0x56781b*/
          goto LABEL_54; /*0x56781b*/
      }
    }
  }
  return MapClass::RevealArea2(aP1, &v51, 0, aP1 + 3, 0); /*0x5678cf*/

}
} // namespace gamemd
// 0x5683C0
namespace gamemd {
void MapClass::FillRevealBuffer(MouseClass * aP1, IUnknown * aP2)
{

  int result; // eax
  MapClass *v4; // ebx
  unsigned int *v5; // eax
  unsigned short *v6; // ebp
  int v7; // esi
  unsigned int *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // ebp
  unsigned short *v12; // ebx
  __int16 v13; // cx
  int v14; // esi
  __int16 v15; // ax
  int v16; // edi
  __int16 v17; // bx
  __int16 v18; // bp
  int v19; // edx
  int v20; // esi
  int v21; // eax
  unsigned int *v22; // ecx
  int *v23; // eax
  int i; // ecx
  int v25; // eax
  int v26; // eax
  unsigned int *v27; // edx
  int *v28; // eax
  unsigned int *v29; // edx
  int v30; // edx
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+10h] [ebp-8A0h]
  int v33; // [esp+10h] [ebp-8A0h]
  int v34; // [esp+14h] [ebp-89Ch]
  int v35; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v38; // [esp+20h] [ebp-890h]
  unsigned char *v39; // [esp+24h] [ebp-88Ch]
  int v40; // [esp+28h] [ebp-888h]
  unsigned short *v41; // [esp+2Ch] [ebp-884h]
  unsigned char v42[128]; // [esp+30h] [ebp-880h] BYREF
  unsigned char v43[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x5683d1*/
  if ( !aP2 ) /*0x5683d9*/
    return result; /*0x5683d9*/
  MapClass_field_0x140 = this->q140; /*0x5683e9*/
  result = (*(int (**)(unsigned char *))(*&aP2->q220))(aP2); /*0x5683ed*/
  if ( !result->u8_235 ) /*0x5683f3*/
    return result; /*0x5683f3*/
  result = (*(int (**)(unsigned char *))(*&aP2->u32_1E0))(aP2); /*0x568405*/
  if ( result != 2 ) /*0x56840b*/
    return result; /*0x56840b*/
  v5 = (unsigned int *)(*(int (**)(unsigned char *, unsigned int))(*&aP2->u32_420))(aP2, 0); /*0x56841c*/
  sub_48DEE0(v5, 32, (int)v42); /*0x568429*/
  v6 = v42; /*0x56842e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568440*/
  {
    LOWORD(v34) = *aP1 + *v6; /*0x56845b*/
    HIWORD(v34) = aP1[1] + v6[1]; /*0x568463*/
    v7 = (SHIWORD(v34) << 9) + (__int16)v34; /*0x56846e*/
    if ( v7 >= 0 /*0x568489*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->__pad_13C, MapClass_field_0x13C[v7]) )
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
      if ( v7 >= 0x40000 || (v10 = *((unsigned int *)this->__pad_13C + v7)) == 0 ) /*0x5684db*/
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
  result = (*(int (**)(unsigned char *))(*&aP2->u32_B0))(aP2); /*0x568514*/
  if ( result == 6 )
  {
    v39 = (*(int (**)(unsigned char *))(*&aP2->u32_B0))(aP2) == 6 ? aP2 : 0;
    result = *((unsigned int *)v39 + 328); /*0x568536*/
    if ( result->u8_1766 )
    {
      v11 = *&result->u32_EF8 - 1; /*0x568550*/
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
        LOWORD(v38) = *aP1 + v13; /*0x5685a5*/
        v15 = v12[1]; /*0x5685aa*/
        HIWORD(v38) = v15 + aP1[1]; /*0x5685b1*/
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
                  v22 = this->__pad_13C; /*0x568633*/
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
              LOWORD(v31) = v18; /*0x56866b*/
              HIWORD(v31) = v17; /*0x568670*/
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
        v25 = *((unsigned int *)v39 + 328); /*0x5686a2*/
        if ( *(unsigned int *)(i + v25 + 5668) != 0xFFFF || *(unsigned int *)(i + v25 + 5672) != 0xFFFF ) /*0x5686b8*/
        {
          LOWORD(v32) = *(unsigned short *)(i + v25 + 5668) + *(unsigned int *)aP1; /*0x5686df*/
          HIWORD(v32) = *(unsigned short *)(i + v25 + 5672) + HIWORD(*(unsigned int *)aP1); /*0x5686e4*/
          v26 = (__int16)v32 + (SHIWORD(v32) << 9); /*0x5686ef*/
          if ( v26 >= 0 && v26 < MapClass_field_0x140 ) /*0x5686f9*/
          {
            v27 = this->__pad_13C; /*0x5686ff*/
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
        result = *((unsigned int *)v39 + 328); /*0x568735*/
        if ( *(unsigned int *)(i + result + 5732) != 0xFFFF || *(unsigned int *)(i + result + 5736) != 0xFFFF ) /*0x56874b*/
        {
          LOWORD(v33) = *(unsigned short *)(i + result + 5732) + *(unsigned int *)aP1; /*0x568776*/
          HIWORD(v33) = *(unsigned short *)(i + result + 5736) + HIWORD(*(unsigned int *)aP1); /*0x56877b*/
          result = (__int16)v33 + (SHIWORD(v33) << 9); /*0x568786*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568790*/
          {
            v29 = this->__pad_13C; /*0x568796*/
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
              v30 = result->u32_100; /*0x5687c2*/
              if ( v30 ) /*0x5687ca*/
                result->u32_100 = v30 - 1; /*0x5687cd*/
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
  unsigned int *v5; // eax
  unsigned short *v6; // ebp
  int v7; // esi
  unsigned int *MapClass_field_0x13C; // eax
  int *v9; // eax
  int v10; // esi
  char *v11; // edx
  int v12; // ebp
  unsigned short *v13; // ebx
  __int16 v14; // cx
  int v15; // esi
  __int16 v16; // ax
  int v17; // edi
  __int16 v18; // bx
  __int16 v19; // bp
  int v20; // edx
  int v21; // esi
  int v22; // eax
  unsigned int *v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int j; // esi
  __int16 v27; // dx
  unsigned int *v28; // ecx
  int v29; // ecx
  int v30; // [esp+10h] [ebp-8A0h]
  int v31; // [esp+10h] [ebp-8A0h]
  int v32; // [esp+14h] [ebp-89Ch]
  char *v33; // [esp+14h] [ebp-89Ch]
  int MapClass_field_0x140; // [esp+1Ch] [ebp-894h]
  int v36; // [esp+20h] [ebp-890h]
  int v37; // [esp+24h] [ebp-88Ch]
  unsigned char *i; // [esp+28h] [ebp-888h]
  int v39; // [esp+2Ch] [ebp-884h]
  unsigned char v40[128]; // [esp+30h] [ebp-880h] BYREF
  unsigned char v41[2048]; // [esp+B0h] [ebp-800h] BYREF

  v4 = this; /*0x568801*/
  if ( !aP2 ) /*0x568809*/
    return result; /*0x568809*/
  MapClass_field_0x140 = this->q140; /*0x568819*/
  result = (*(int (**)(char *))(*&aP2->owner_d))(aP2); /*0x56881d*/
  if ( !result->u8_235 ) /*0x568823*/
    return result; /*0x568823*/
  result = (*(int (**)(char *))(*&aP2->disguiseCreationFrame))(aP2); /*0x568835*/
  if ( result != 2 ) /*0x56883b*/
    return result; /*0x56883b*/
  v5 = (unsigned int *)(*(int (**)(char *, unsigned int))(*&aP2->sightRangeBonus))(aP2, 0); /*0x56884c*/
  sub_48DEE0(v5, 32, (int)v40); /*0x568859*/
  v6 = v40; /*0x56885e*/
  while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x568870*/
  {
    LOWORD(v32) = *aP1 + *v6; /*0x56888b*/
    HIWORD(v32) = aP1[1] + v6[1]; /*0x568893*/
    v7 = (SHIWORD(v32) << 9) + (__int16)v32; /*0x56889e*/
    if ( v7 >= 0 /*0x5688b9*/
      && v7 < MapClass_field_0x140
      && (MapClass_field_0x13C = v4->__pad_13C, MapClass_field_0x13C[v7]) )
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
      if ( v7 >= 0x40000 || (v10 = *((unsigned int *)this->__pad_13C + v7)) == 0 ) /*0x56890b*/
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
  result = (*(int (**)(char *))(*&aP2->suspendedMission))(aP2); /*0x568944*/
  if ( result == 6 )
  {
    v11 = (*(int (**)(char *))(*&aP2->suspendedMission))(aP2) == 6 ? aP2 : 0;
    v33 = v11; /*0x568964*/
    result = *((unsigned int *)v11 + 328); /*0x568968*/
    if ( result->u8_1766 )
    {
      v12 = *&result->u32_EF8 - 1; /*0x568982*/
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
        LOWORD(v37) = *aP1 + v14; /*0x5689d7*/
        v16 = v13[1]; /*0x5689dc*/
        HIWORD(v37) = v16 + aP1[1]; /*0x5689e3*/
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
                  v23 = this->__pad_13C; /*0x568a65*/
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
              LOWORD(v30) = v19; /*0x568aa8*/
              HIWORD(v30) = v18; /*0x568aad*/
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
        result = *((unsigned int *)v11 + 328); /*0x568ae3*/
        if ( *(unsigned int *)(j + result + 5668) != 0xFFFF || *(unsigned int *)(j + result + 5672) != 0xFFFF ) /*0x568af9*/
        {
          v27 = *(unsigned short *)(j + result + 5672) + HIWORD(*(unsigned int *)aP1); /*0x568b1c*/
          LOWORD(v31) = *(unsigned short *)(j + result + 5668) + *(unsigned int *)aP1; /*0x568b24*/
          result = (__int16)v31 + (v27 << 9); /*0x568b32*/
          HIWORD(v31) = v27; /*0x568b34*/
          if ( result >= 0 && result < MapClass_field_0x140 ) /*0x568b41*/
          {
            v28 = this->__pad_13C; /*0x568b47*/
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
              v29 = result->u32_100; /*0x568b73*/
              if ( v29 ) /*0x568b7b*/
                result->u32_100 = v29 - 1; /*0x568b7e*/
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
  v2 = 0; /*0x568bba*/
  int v20; // [esp+Ch] [ebp-Ch]
  v20 = 0; /*0x568bc1*/
  if ( dword_A8E9B8 > 0 ) /*0x568bce*/
  {
  unsigned int *v4; // eax
    v4 = dword_A8E9AC; /*0x568bd0*/
    do /*0x568bfb*/
    {
  unsigned char *v5; // ecx
      v5 = (unsigned char *)v4[v2]; /*0x568bd5*/
      if ( v5[407] ) /*0x568bd8*/
      {
        if ( v5 ) /*0x568be4*/
        {
          (*(void (**)(unsigned char *, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x568be9*/
          v4 = dword_A8E9AC; /*0x568bec*/
        }
        --v2; /*0x568bf1*/
      }
      ++v2; /*0x568bf8*/
    }
    while ( v2 < dword_A8E9B8 ); /*0x568bfb*/
  }
  void *MapClass_field_0xF4; // eax
  MapClass_field_0xF4 = this->u32_F4; /*0x568bfd*/
  *(unsigned int *)this->u32_10C = 1; /*0x568c03*/
  *&this->CellIterator_NextY = MapClass_field_0xF4; /*0x568c09*/
  *&this->CellIterator_CurrentY = (char *)MapClass_field_0xF4 - 1; /*0x568c12*/
  *&this->CellIterator_NextCell = (char *)this->__pad_13C + 2048 * (unsigned int)MapClass_field_0xF4 + 4; /*0x568c27*/
  int i; // eax
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c34*/
    *(unsigned int *)(i + 320) &= 0xFFCFFFFF; /*0x568c45*/
  void *v8; // eax
  v8 = this->u32_F4; /*0x568c54*/
  *(unsigned int *)this->u32_10C = 1; /*0x568c5a*/
  *&this->CellIterator_NextY = v8; /*0x568c60*/
  *&this->CellIterator_CurrentY = (char *)v8 - 1; /*0x568c69*/
  *&this->CellIterator_NextCell = (char *)this->__pad_13C + 2048 * (unsigned int)v8 + 4; /*0x568c7e*/
  int j; // esi
  for ( j = LayerClass::CellIteratorNext((LayerClass *)this); j; j = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x568c8d*/
  {
    *(unsigned int *)(j + 48) = 0; /*0x568cb2*/
    TacticalClass::SetView((int *)j, 0, 0x10000, 0, 1000, 1000, 1000); /*0x568cb9*/
  TagClass *v10; // eax
    v10 = *(TagClass **)(j + 60); /*0x568cc4*/
    *(unsigned int *)(j + 320) &= ~0x20000u; /*0x568ccf*/
    if ( v10 ) /*0x568cd5*/
    {
      if ( TagClass::HasCrossesHorizontalLineEvent(v10) ) /*0x568cdd*/
      {
  int k; // edx
  int *v13; // eax
        for ( k = 0; k < *(int *)&g_AircraftTrackerPool; v13[80] |= 0x100000u ) /*0x568cef*/
        {
  int v21; // [esp+10h] [ebp-8h]
          HIWORD(v21) = *(unsigned short *)(j + 38); /*0x568d01*/
          LOWORD(v21) = k + *&this->__pad_124; /*0x568d09*/
  unsigned int v12; // eax
          v12 = (__int16)v21 + (SHIWORD(v21) << 9); /*0x568d14*/
          if ( v12 >= 0x40000 || (v13 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v12)) == 0 ) /*0x568d2a*/
          {
            g_MissionQueueFrame.briefing[139] = v21; /*0x568d30*/
            v13 = &g_MissionQueueFrame.briefing[130]; /*0x568d35*/
          }
          ++k; /*0x568d46*/
        }
      }
      else if ( TagClass::HasCrossesVerticalLineEvent(*(TagClass **)(j + 60)) ) /*0x568d5b*/
      {
  int m; // edx
  int *v16; // eax
        for ( m = 0; m < *(int *)&g_AircraftTrackerState; v16[80] |= 0x200000u ) /*0x568d6d*/
        {
  int v22; // [esp+14h] [ebp-4h]
          LOWORD(v22) = *(unsigned short *)(j + 36); /*0x568d7b*/
          HIWORD(v22) = (unsigned short)this->q128 + m; /*0x568d80*/
  unsigned int v15; // eax
          v15 = (__int16)v22 + (SHIWORD(v22) << 9); /*0x568d8e*/
          if ( v15 >= 0x40000 || (v16 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x568da4*/
          {
            g_MissionQueueFrame.briefing[139] = v22; /*0x568daa*/
            v16 = &g_MissionQueueFrame.briefing[130]; /*0x568daf*/
          }
          ++m; /*0x568dbc*/
        }
      }
    }
  int updated; // eax
    if ( a2 ) /*0x568dd2*/
      updated = ObjectClass::UpdateTiberiumGrowth(j, 0); /*0x568dd8*/
    else
      updated = Building::GetNthOfType((Building *)j); /*0x568de1*/
    v20 += updated; /*0x568dee*/
    House::AnnounceUpgrade(j, -1); /*0x568df4*/
  int v18; // eax
    v18 = *(unsigned int *)(j + 68); /*0x568df9*/
    if ( v18 != -1 && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v18) + 680) ) /*0x568e0a*/
      CellClass::SetWallOwner(j); /*0x568e16*/
  }
  return v20; /*0x568e30*/

}
} // namespace gamemd
// 0x56B3F0
namespace gamemd {
BombClass * * MapClass::DecompressCellData(MouseClass * aP1, void *a2)
{
  Pipe v18; // [esp+14h] [ebp-28h] BYREF

  MapClass *v2; // esi
  v2 = aP1; /*0x56b3f5*/
  LZOPipe::Constructor((LZOPipe *)&v18, 0, 0x2000); /*0x56b406*/
  Pipe::SetDelegate(&v18, a2); /*0x56b414*/
  int v3; // edi
  v3 = 0; /*0x56b41f*/
  int v4; // eax
  v4 = 0; /*0x56b421*/
  int v19; // [esp+40h] [ebp+4h]
  v19 = 0; /*0x56b425*/
  if ( v2->MaxHeight > 0 ) /*0x56b429*/
  {
    do /*0x56b550*/
    {
  int v5; // esi
      v5 = *((unsigned int *)v2->MaxWidth + v4); /*0x56b439*/
      if ( v4 ) /*0x56b43c*/
      {
        if ( v5 ) /*0x56b444*/
        {
  int v6; // ebx
          v6 = *(unsigned int *)(v5 + 36); /*0x56b44a*/
  int Src; // [esp+Ch] [ebp-30h] BYREF
          Src = v6; /*0x56b451*/
  void *MapClass_field_0xF4; // ecx
          MapClass_field_0xF4 = aP1->q0F4; /*0x56b45a*/
          Src = (*((signed short *)(((unsigned char *)&(v6)) + 2))) + (int16_t)v6; /*0x56b468*/
          if ( Src > (int)MapClass_field_0xF4 /*0x56b49b*/
            && (int16_t)v6 - (*((signed short *)(((unsigned char *)&(v6)) + 2))) < (int)MapClass_field_0xF4
            && (*((signed short *)(((unsigned char *)&(v6)) + 2))) - (int16_t)v6 < (int)MapClass_field_0xF4
            && Src <= (int)MapClass_field_0xF4 + 2 * *(unsigned int *)aP1->q0F8 )
          {
            Src = v6; /*0x56b4a8*/
            if ( v6 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2134] /*0x56b4d9*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(unsigned int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b4e6*/
  int v8; // edi
              v8 = Compression::Read((int *)v18.vtable1, (int)&Src, 4) + v3; /*0x56b4f6*/
  int v9; // edi
              v9 = Compression::Read((int *)v18.vtable1, v5 + 56, 4) + v8; /*0x56b50a*/
  int v10; // edi
              v10 = Compression::Read((int *)v18.vtable1, v5 + 282, 1) + v9; /*0x56b51e*/
  int v11; // edi
              v11 = Compression::Read((int *)v18.vtable1, v5 + 283, 1) + v10; /*0x56b532*/
              v3 = Compression::Read((int *)v18.vtable1, v5 + 281, 1) + v11; /*0x56b539*/
            }
          }
        }
      }
      v2 = aP1; /*0x56b53b*/
      v4 = v19 + 1; /*0x56b543*/
      v19 = v4; /*0x56b54a*/
    }
    while ( v4 < aP1->MaxHeight ); /*0x56b550*/
  }
  int v17; // [esp+10h] [ebp-2Ch] BYREF
  v17 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b568*/
  int v12; // edi
  v12 = Compression::Read((int *)v18.vtable1, (int)&v17, 4) + v3; /*0x56b579*/
  int v13; // esi
  v13 = (*(int (**)(Pipe *))(*(unsigned int *)v18.vtable1 + 4))(&v18); /*0x56b582*/
  LZOPipe::Destructor((LZOPipe *)&v18); /*0x56b584*/
  return v13 + v12; /*0x56b58c*/
}
}
// 0x56D230
namespace gamemd {
int MapClass::GetTileIndex(int16_t *aP1, int aP2, char aP3)
{
  int *NeighbourContent; // edi

  int16_t *v4; // esi
  v4 = aP1; /*0x56d238*/
  MapClass *v5; // edi
  v5 = this; /*0x56d23d*/
  if ( aP3 )
  {
  unsigned int v6; // eax
    v6 = *aP1 + (aP1[1] << 9); /*0x56d255*/
  int *v7; // eax
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v6)) == 0 ) /*0x56d26b*/
    {
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP1; /*0x56d26f*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x56d274*/
    }
    if ( (v7[80] & 0x100) != 0 )
    {
  int RegionMap; // eax
      RegionMap = GetRegionMap((ObjectClass *)this, aP1, 1, 0); /*0x56d28f*/
      if ( RegionMap == -1 ) /*0x56d297*/
        return -1; /*0x56d36d*/
  int v9; // ebx
      v9 = 16 * RegionMap + *(unsigned int *)v5->__pad_054; /*0x56d2a3*/
      if ( *(unsigned char *)(v9 + 8) )
      {
        v4 = (int16_t *)(16 * RegionMap + *(unsigned int *)v5->__pad_054); /*0x56d2ac*/
      }
      else
      {
  unsigned int v10; // eax
        v10 = *aP1 + (aP1[1] << 9); /*0x56d2bd*/
  int *v11; // eax
        if ( v10 < 0x40000 && (v11 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v10)) != 0 ) /*0x56d2d3*/
        {
          NeighbourContent = v11; /*0x56d2d5*/
        }
        else
        {
          NeighbourContent = &g_MissionQueueFrame.briefing[130]; /*0x56d2db*/
          g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP1; /*0x56d2e0*/
        }
  unsigned int i; // esi
        for ( i = *(unsigned short *)(v9 + 4) != *(unsigned short *)v9 ? 2 : 4;
              (NeighbourContent->u32_140 & 0x100) != 0;
              NeighbourContent = (int *)Cell::GetNeighbourContent((Cell *)NeighbourContent, i) )
        {
          ; /*0x56d30d*/
        }
        if ( ((uint8_t)Cell::IsInRange((Cell *)NeighbourContent) /*0x56d337*/
           || (uint8_t)Cell::IsInRange2((Cell *)NeighbourContent))
          && NeighbourContent->u32_EC != 3 )
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
  int v14; // eax
  v14 = *v4 + v4[1] * ((int)v5->u32_F4 + *(unsigned int *)v5->q0F8 + 1); /*0x56d359*/
  if ( v14 >= 0 ) /*0x56d35b*/
  {
  int v16; // ecx
    v16 = *&v5->ZoneConnections; /*0x56d370*/
    if ( v14 >= v16 ) /*0x56d375*/
      v14 = v16 - 1; /*0x56d377*/
  }
  else
  {
    v14 = 0; /*0x56d35d*/
  }
  return *(uint16_t *)(*(unsigned int *)&v5->__pad_18[4 * aP2] /*0x56d365*/
                             + 2 * *(uint16_t *)(*&v5->somecount_4C + 4 * v14 + 2));
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

  p_MapClass_field_0x50 = &this->ptr_50; /*0x56d6ef*/
  (*(void (**)(DynamicVector **))this->ptr_50->__pad_C)(&this->ptr_50); /*0x56d6f4*/
  MapClass_field_0xF4 = this->u32_F4; /*0x56d6f7*/
  *(unsigned int *)this->u32_10C = 1; /*0x56d6fd*/
  *&this->CellIterator_NextY = MapClass_field_0xF4; /*0x56d707*/
  *&this->CellIterator_CurrentY = (char *)MapClass_field_0xF4 - 1; /*0x56d710*/
  *&this->CellIterator_NextCell = (char *)this->__pad_13C + 2048 * (unsigned int)MapClass_field_0xF4 + 4; /*0x56d725*/
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
            v42 = *(unsigned int *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7cd*/
            v10 = Cell::PosToIndex((Cell *)&v42); /*0x56d7dc*/
            if ( Cell::PosToIndex(&v5->u32_24) < v10 ) /*0x56d7e5*/
            {
              v11 = *(unsigned int *)(InfantryClass::GetType((InfantryClass *)v5) + 40); /*0x56d7f2*/
              v12 = p_MapClass_field_0x50[2]; /*0x56d7f5*/
              v13 = p_MapClass_field_0x50[4]; /*0x56d7f8*/
              v14 = v5->u32_24; /*0x56d7fb*/
              LOBYTE(v44) = 1; /*0x56d7ff*/
              if ( (int)v13 < (int)v12 /*0x56d82e*/
                || (p_MapClass_field_0x50->IsAllocated || !v12)
                && (v15 = (int)p_MapClass_field_0x50[5], v15 > 0)
                && ((unsigned __int8 (*)(DynamicVector **, char *, unsigned int))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                     p_MapClass_field_0x50,
                     &v12->__pad_0[v15],
                     0) )
              {
                v16 = p_MapClass_field_0x50[4]; /*0x56d839*/
                v17 = v44; /*0x56d83c*/
                p_MapClass_field_0x50[4] = (DynamicVector *)v16->DynamicVector_field_0x1; /*0x56d843*/
                v18 = &p_MapClass_field_0x50[1]->__pad_0[16 * (unsigned int)v16]; /*0x56d84c*/
                *(unsigned int *)v18 = v14; /*0x56d84e*/
                *((unsigned int *)v18 + 1) = v11; /*0x56d850*/
                *((unsigned int *)v18 + 2) = v17; /*0x56d853*/
                *((unsigned int *)v18 + 3) = 1; /*0x56d856*/
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
      v21 = v5->u32_38 - v20; /*0x56d878*/
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
        v24 = *&i->u32_24; /*0x56d8b2*/
        v25 = *&i->u32_26; /*0x56d8b6*/
        v26 = this->u32_F4; /*0x56d8ba*/
        v43 = v25 + v24; /*0x56d8c5*/
        if ( v25 + v24 <= (int)v26 /*0x56d8f8*/
          || v24 - v25 >= (int)v26
          || v25 - v24 >= (int)v26
          || v43 > (int)v26 + 2 * *(unsigned int *)this->q0F8 )
        {
          if ( !v38 ) /*0x56d979*/
            goto LABEL_42; /*0x56d979*/
LABEL_36:
          v30 = *((unsigned int *)Cell::GetNeighbourContent(v23, ((unsigned char)v41 - 4) & 7) + 9); /*0x56d97b*/
          v31 = p_MapClass_field_0x50[2]; /*0x56d990*/
          v32 = p_MapClass_field_0x50[4]; /*0x56d993*/
          v33 = v5->u32_24; /*0x56d99a*/
          LOBYTE(v45) = v39; /*0x56d9a1*/
          if ( (int)v32 < (int)v31 /*0x56d9c2*/
            || (p_MapClass_field_0x50->IsAllocated || !v31)
            && (v34 = (int)p_MapClass_field_0x50[5], v34 > 0)
            && ((unsigned __int8 (*)(DynamicVector **, char *, unsigned int))(*p_MapClass_field_0x50)->DynamicVector_field_0x8)(
                 p_MapClass_field_0x50,
                 &v31->__pad_0[v34],
                 0) )
          {
            v35 = p_MapClass_field_0x50[4]; /*0x56d9c9*/
            v36 = v45; /*0x56d9cc*/
            p_MapClass_field_0x50[4] = (DynamicVector *)v35->DynamicVector_field_0x1; /*0x56d9d3*/
            v37 = &p_MapClass_field_0x50[1]->__pad_0[16 * (unsigned int)v35]; /*0x56d9dc*/
            *(unsigned int *)v37 = v33; /*0x56d9de*/
            *((unsigned int *)v37 + 1) = v30; /*0x56d9e0*/
            *((unsigned int *)v37 + 2) = v36; /*0x56d9e3*/
            *((unsigned int *)v37 + 3) = 0; /*0x56d9e6*/
          }
          goto LABEL_42; /*0x56d9e6*/
        }
        if ( v38 ) /*0x56d900*/
          goto LABEL_36; /*0x56d900*/
        if ( !(unsigned __int8)Cell::IsInRange(v23) ) /*0x56d904*/
          break; /*0x56d904*/
        Cell_field_0x38 = v23->q038; /*0x56d90d*/
        v28 = g_Cell_BuildabilityLUT; /*0x56d910*/
LABEL_27:
        v29 = Cell_field_0x38 - v28; /*0x56d916*/
        if ( v29 != -1 && dword_82A7B4[v29] == (unsigned __int8)v23->u32_11A ) /*0x56d92e*/
          v38 = 1; /*0x56d930*/
LABEL_30:
        i = (Cell *)Cell::GetNeighbourContent(v23, v41); /*0x56d935*/
      }
      if ( (unsigned __int8)Cell::IsInRange2(v23) ) /*0x56d943*/
      {
        Cell_field_0x38 = v23->q038; /*0x56d94c*/
        v28 = g_TerrainBridgeIndex; /*0x56d94f*/
        goto LABEL_27; /*0x56d955*/
      }
      if ( ((int)v23->u32_140 & 0x100) != 0 ) /*0x56d960*/
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
  RegionMap = GetRegionMap((ObjectClass *)this, aP1, 3, 0); /*0x56daf3*/
  if ( RegionMap == -1 ) /*0x56daf8*/
  {
    MapClass::ProcessRegion(this); /*0x56dafc*/
    RegionMap = GetRegionMap((ObjectClass *)this, aP1, 3, 0); /*0x56db0d*/
    if ( RegionMap == -1 ) /*0x56db12*/
      return 0; /*0x56db16*/
  }
  char v6; // [esp+10h] [ebp+4h]
  v6 = 0; /*0x56db1f*/
  do /*0x56db5e*/
  {
    if ( *(unsigned char *)(16 * RegionMap + *(unsigned int *)this->__pad_054 + 8) ) /*0x56db31*/
    {
      UpdateCellConnectivityGraph((ObjectClass *)this, (int *)(16 * RegionMap + *(unsigned int *)this->__pad_054)); /*0x56db3b*/
      v6 = 1; /*0x56db43*/
      *(unsigned char *)(*(unsigned int *)this->__pad_054 + 16 * RegionMap + 8) = 0; /*0x56db48*/
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
    (*(((unsigned short *)&(v16)) + 1)) = v11 + aP0[1]; /*0x56e7f5*/
    (*((unsigned short *)&(v16))) = v9 + *aP0; /*0x56e7fa*/
    v12 = (int16_t)v16 + ((*((signed short *)(((unsigned char *)&(v16)) + 2))) << 9); /*0x56e808*/
    if ( v12 < 0x40000 && (v13 = *(unsigned int **)(dword_87F924 + 4 * v12)) != 0 ) /*0x56e81e*/
    {
      v14 = v13; /*0x56e820*/
    }
    else
    {
      v14 = &unk_ABDC50; /*0x56e828*/
      dword_ABDC74 = v16; /*0x56e82d*/
    }
    if ( aP8 && v14[17] != -1 || !((Cell *)((int)v14))->IsBuildable(aP3, 0, 0, aP4, aP5, aP6, aP7) ) /*0x56e859*/
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
  v2 = aP0; /*0x574784*/
  unsigned int v4; // eax
  v4 = *(int16_t *)aP0 + (aP0->q002_ << 9); /*0x574795*/
  int *v5; // eax
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x5747ab*/
  {
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP0; /*0x5747af*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x5747b4*/
  }
  int result; // eax
  result = v5[17]; /*0x5747b9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x5747d3*/
  {
  int16_t v7; // dx
    v7 = aP0->q002_; /*0x5747dc*/
    (*((unsigned short *)&(aP0))) = *(unsigned short *)aP0; /*0x5747e0*/
    (*(((unsigned short *)&(aP0)) + 1)) = v7 - 1; /*0x5747eb*/
  int v8; // eax
    v8 = *((unsigned int *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP0) + 17); /*0x574803*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57480e*/
    {
  int16_t v10; // cx
      v10 = v2->q002_ - 2; /*0x574846*/
      (*((unsigned short *)&(aP0))) = *(unsigned short *)v2; /*0x57484a*/
      (*(((unsigned short *)&(aP0)) + 1)) = v10; /*0x57484f*/
  int v11; // eax
      v11 = *((unsigned int *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP0) + 17); /*0x57486b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x574876*/
      {
  int16_t v12; // dx
        v12 = v2->q002_; /*0x57488b*/
        (*((unsigned short *)&(aP0))) = *(unsigned short *)v2; /*0x57488f*/
        (*(((unsigned short *)&(aP0)) + 1)) = v12 - 1; /*0x57489a*/
        return CellClass::ApplyCliffMod2(&aP0); /*0x5748aa*/
      }
      else
      {
        return CellClass::ApplyCliffMod2((unsigned int *)v2); /*0x57487b*/
      }
    }
    else
    {
  int16_t v9; // ax
      v9 = v2->q002_ + 1; /*0x574817*/
      (*((unsigned short *)&(aP0))) = *(unsigned short *)v2; /*0x574819*/
      (*(((unsigned short *)&(aP0)) + 1)) = v9; /*0x57481e*/
      return CellClass::ApplyCliffMod2(&aP0); /*0x574832*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x5748ce*/
  {
  int16_t v13; // dx
    v13 = *(unsigned short *)aP0 - 1; /*0x5748db*/
    (*(((unsigned short *)&(aP0)) + 1)) = aP0->q002_; /*0x5748dd*/
    (*((unsigned short *)&(aP0))) = v13; /*0x5748e2*/
  int v14; // eax
    v14 = *((unsigned int *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP0) + 17); /*0x5748fe*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x574909*/
    {
  int16_t v16; // cx
      v16 = *(unsigned short *)v2 - 2; /*0x574941*/
      (*(((unsigned short *)&(aP0)) + 1)) = v2->q002_; /*0x574945*/
      (*((unsigned short *)&(aP0))) = v16; /*0x57494a*/
  int v17; // eax
      v17 = *((unsigned int *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP0) + 17); /*0x574966*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x574971*/
      {
        aP0 = 1; /*0x57498f*/
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &aP0); /*0x5749a8*/
        return CellClass::ApplyCliffMod(&v18); /*0x5749af*/
      }
      else
      {
        return CellClass::ApplyCliffMod((unsigned int *)v2); /*0x574976*/
      }
    }
    else
    {
  int16_t v15; // ax
      v15 = *&v2->q002_; /*0x574912*/
      (*(((unsigned short *)&(aP0)) + 1)) = v2->q002_; /*0x574914*/
      (*((unsigned short *)&(aP0))) = v15; /*0x574919*/
      return CellClass::ApplyCliffMod(&aP0); /*0x57492d*/
    }
  }
  return result; /*0x574837*/
}
} // namespace gamemd
// 0x574C20
namespace gamemd {
void* MapClass::ApplyTerrainDamage(IUnknown *a1, IUnknown)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // esi
  int16_t *v5; // ebx
  int16_t v6; // cx
  int v7; // eax
  int16_t v8; // dx
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  int16_t v14; // dx
  int16_t v15; // si
  int16_t *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  int *v20; // eax
  int16_t v21; // bp
  int16_t v22; // bx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  int16_t v26; // dx
  unsigned int v27; // eax
  int *v28; // eax
  bool v29; // cc
  int v30; // eax
  int16_t *v31; // eax
  int v32; // ebx
  int16_t v33; // si
  int v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  int16_t v38; // cx
  int v39; // edi
  int16_t *v40; // edx
  int occupationFlags; // ecx
  int altOccupationFlags; // ecx
  unsigned int v43; // eax
  int *v44; // eax
  int *v45; // edx
  int v46; // eax
  int16_t v47; // cx
  int v48; // ebp
  int i; // esi
  int16_t v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  int *v53; // eax
  int *v54; // ebx
  MapClass *v55; // esi
  int v56; // eax
  void *MapClass_field_0x128; // eax
  int v58; // esi
  int v59; // ebp
  int16_t v60; // ax
  int v61; // esi
  int16_t v63[2]; // [esp+14h] [ebp-30h] BYREF
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-28h]
  int v66; // [esp+20h] [ebp-24h]
  int v67; // [esp+24h] [ebp-20h]
  int16_t v68[2]; // [esp+28h] [ebp-1Ch] BYREF
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
      v5 = IUnknown; /*0x574c37*/
      v6 = IUnknown[1]; /*0x574c3e*/
      (*((unsigned short *)&(v64))) = v3 + *IUnknown; /*0x574c48*/
      (*(((unsigned short *)&(v64)) + 1)) = v4 + v6; /*0x574c4d*/
      *(unsigned int *)v68 = v64; /*0x574c60*/
      v7 = *((unsigned int *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v68) + 17); /*0x574c69*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x574c74*/
      {
        v8 = v4 + v5[1]; /*0x574c8e*/
        (*((unsigned short *)&(IUnknown))) = v3 + *v5; /*0x574c91*/
        (*(((unsigned short *)&(IUnknown)) + 1)) = v8; /*0x574c9a*/
        MapClass::TransitionCliff(v2, (int)&IUnknown); /*0x574caa*/
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
  if ( v9 < 0x40000 && (v10 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v9)) != 0 ) /*0x574cd9*/
  {
    v11 = v10; /*0x574cdb*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x574ce1*/
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)v5; /*0x574ce6*/
  }
  v12 = v11[80]; /*0x574cec*/
  v64 = 0; /*0x574cf7*/
  if ( (v12 & 0x500) == 0 ) /*0x574cfb*/
  {
    *(unsigned int *)v68 = 0; /*0x574d01*/
    while ( 1 ) /*0x574d16*/
    {
      v13 = v64 & 7; /*0x574d16*/
      v14 = (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v13 + 82]))) + *v5; /*0x574d21*/
      v15 = v5[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v13 + 82])) + 1)); /*0x574d29*/
      v16 = (int16_t *)(4 * v13 + 9041544); /*0x574d2d*/
      v17 = v15 << 9; /*0x574d3a*/
      v18 = v14 + v17 < 0; /*0x574d3d*/
      v19 = v14 + v17; /*0x574d3d*/
      (*((unsigned short *)&(v65))) = v14; /*0x574d3f*/
      (*(((unsigned short *)&(v65)) + 1)) = v15; /*0x574d44*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v19)) == 0 ) /*0x574d5d*/
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
      (*((unsigned short *)&(v66))) = v22; /*0x574d98*/
      (*(((unsigned short *)&(v66)) + 1)) = v21; /*0x574d9d*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v24)) == 0 ) /*0x574db6*/
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
      (*(((unsigned short *)&(v67)) + 1)) = v21 + v16[1]; /*0x574de9*/
      (*((unsigned short *)&(v67))) = v22 + v26; /*0x574dee*/
      v27 = (int16_t)(v22 + v26) + ((*((signed short *)(((unsigned char *)&(v67)) + 2))) << 9); /*0x574df9*/
      if ( v27 < 0x40000 && (v28 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v27)) != 0 ) /*0x574e0f*/
      {
        v11 = v28; /*0x574e11*/
      }
      else
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574e19*/
        g_MissionQueueFrame.briefing[139] = v67; /*0x574e1e*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = *&v68->u32_4 < 8, v64 = ((unsigned char)v64 + 1) & 7, ++*(unsigned int *)v68, !v29) ) /*0x574e43*/
      {
  LABEL_34:
        v2 = (CellClass *)a1; /*0x574e49*/
        break; /*0x574e49*/
      }
      v5 = IUnknown; /*0x574d07*/
      v2 = (CellClass *)a1; /*0x574d0b*/
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
      *(unsigned int *)v68 = v32; /*0x574e8d*/
      v67 = 0; /*0x574e94*/
      v66 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574eb5*/
      {
        v33 = (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82])) + 1)) + v68[1]; /*0x574eb5*/
        (*((unsigned short *)&(IUnknown))) = v32 + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]))); /*0x574ec2*/
        (*(((unsigned short *)&(IUnknown)) + 1)) = v33; /*0x574ec7*/
        (*((unsigned short *)&(v32))) = (unsigned short)IUnknown; /*0x574ecc*/
        v34 = v33 << 9; /*0x574ed0*/
        v18 = (int16_t)IUnknown + v34 < 0; /*0x574ed3*/
        v35 = (int16_t)IUnknown + v34; /*0x574ed3*/
        *(unsigned int *)v68 = IUnknown; /*0x574ed5*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v35)) == 0 ) /*0x574eef*/
        {
          g_MissionQueueFrame.briefing[139] = (int)IUnknown; /*0x574ef5*/
          v36 = &g_MissionQueueFrame.briefing[130]; /*0x574efb*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x574f0a*/
          break; /*0x574f0a*/
        if ( ++v67 >= 4 ) /*0x574f18*/
          return; /*0x574f18*/
      }
      v2 = (CellClass *)a1; /*0x574f28*/
      v37 = ((unsigned char)v66 - 4) & 7; /*0x574f32*/
      v38 = (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v37 + 82])) + 1)); /*0x574f4e*/
      (*((unsigned short *)&(IUnknown))) = (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v37 + 82]))) /*0x574f58*/
                 + (unsigned short)IUnknown
                 + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v37 + 82])));
      (*(((unsigned short *)&(IUnknown)) + 1)) = v33 + v38 + v38; /*0x574f5d*/
      v31 = IUnknown; /*0x574f62*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(unsigned int *)v63 = v31; /*0x574f81*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574f85*/
    v40 = *(int16_t **)v63; /*0x574f8a*/
    occupationFlags = v2->occupationFlags; /*0x574f8e*/
    /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x574f99) */
    v71 = 10; /*0x574fa1*/
    v70 = 0; /*0x574fa9*/
    if ( v63[0] >= occupationFlags ) /*0x574fb1*/
    {
      do /*0x574fbd*/
      {
        if ( (int16_t)v40 > occupationFlags + v2->copyFlags ) /*0x574fc4*/
          break; /*0x574fc4*/
        altOccupationFlags = v2->altOccupationFlags; /*0x574fcf*/
        if ( v63[1] < altOccupationFlags || v63[1] > altOccupationFlags + v2->shroudCounter ) /*0x574fe7*/
          break; /*0x574fe7*/
        v43 = (int16_t)v40 + (v63[1] << 9); /*0x574ff6*/
        if ( *(unsigned int *)(v2->CellClass_field_13C + 4 * v43) ) /*0x574ff8*/
        {
          if ( v43 < 0x40000 && (v44 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v43)) != 0 ) /*0x575014*/
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
            v48 = ((unsigned char)v39 - 4) & 7; /*0x57508d*/
            IUnknown = *(int16_t **)v63; /*0x575090*/
            for ( i = 0; i < 3; ++i ) /*0x575094*/
            {
              if ( (uint8_t)CellClass::SetTerrainType((CellClass *)a1, v63) ) /*0x57509f*/
                break; /*0x5750a6*/
            }
            while ( 1 ) /*0x5750c8*/
            {
              v50 = (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[(((unsigned char)v39 - 4) & 7) + 82]))) + (unsigned short)IUnknown; /*0x5750c8*/
              v68[1] = (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[(((unsigned char)v39 - 4) & 7) + 82])) + 1)) + (*(((unsigned short *)&(IUnknown)) + 1)); /*0x5750ce*/
              v68[0] = v50; /*0x5750d3*/
              v51 = v50; /*0x5750dc*/
              IUnknown = *(int16_t **)v68; /*0x5750e1*/
              v52 = v50 + (v68[1] << 9); /*0x5750e8*/
              if ( v52 < 0x40000 && (v53 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v52)) != 0 ) /*0x5750fe*/
              {
                v54 = v53; /*0x575100*/
              }
              else
              {
                g_MissionQueueFrame.briefing[139] = *(unsigned int *)v68; /*0x575104*/
                v54 = &g_MissionQueueFrame.briefing[130]; /*0x57510a*/
              }
              v55 = a1; /*0x57510f*/
              v56 = *&a1->q124; /*0x575113*/
              if ( v51 < v56 ) /*0x57511b*/
                break; /*0x57511b*/
              if ( v51 > v56 + *(unsigned int *)a1->u32_12C ) /*0x57512b*/
                goto LABEL_79; /*0x57512b*/
              MapClass_field_0x128 = a1->q128; /*0x575135*/
              if ( v68[1] < (int)MapClass_field_0x128 /*0x57514d*/
                || v68[1] > (int)((int)MapClass_field_0x128 + (unsigned int)a1->q130) )
              {
                goto LABEL_79; /*0x57514d*/
              }
              v58 = v54[14] - g_TerrainBridgeIndex + 1; /*0x57515b*/
              if ( globalHelper_074600(v58, v48, (int)v54) ) /*0x575160*/
              {
                if ( v58 != -1 ) /*0x575170*/
                {
                  v59 = ((unsigned char)v48 - 4) & 7; /*0x57517a*/
                  v60 = (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v59 + 82])) + 1)); /*0x57518c*/
                  v68[0] = (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v59 + 82]))) + (unsigned short)IUnknown; /*0x575194*/
                  v61 = 0; /*0x57519e*/
                  v68[1] = (*(((unsigned short *)&(IUnknown)) + 1)) + v60; /*0x5751a0*/
                  IUnknown = *(int16_t **)v68; /*0x5751a9*/
                  do /*0x5751c3*/
                  {
                    if ( (uint8_t)CellClass::SetTerrainType((CellClass *)a1, (int16_t *)&IUnknown) ) /*0x5751b6*/
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
          (*((unsigned short *)&(v40))) = v63[0]; /*0x57503a*/
        }
        v46 = v39 & 7; /*0x575040*/
        v47 = v63[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v46 + 82])) + 1)); /*0x575056*/
        (*((unsigned short *)&(IUnknown))) = (unsigned short)v40 + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v46 + 82]))); /*0x57505e*/
        (*(((unsigned short *)&(IUnknown)) + 1)) = v47; /*0x575066*/
        occupationFlags = v2->occupationFlags; /*0x57506b*/
        v40 = IUnknown; /*0x575071*/
        *(unsigned int *)v63 = IUnknown; /*0x575077*/
      }
      while ( (int16_t)IUnknown >= occupationFlags ); /*0x574fbd*/
    }
    Terrain::ConnectivityGraph((Terrain *)v2); /*0x5751e6*/
    /* X11: vtable install elided (implicit via VectorClass virtuals 0x5751f1) */
    if ( v69.Items ) /*0x5751fb*/
    {
      if ( v69.IsAllocated ) /*0x575203*/
        operator delete((void *)(v69.Items)); /*0x575206*/
    }
  }
}
} // namespace gamemd
// 0x577920
namespace gamemd {
MapClass * * MapClass::RemoveTriggerRef(AbstractClass * aP1, int a3)
{

  ObjectClass *v12; // edi

  int v3; // esi
  v3 = aP1; /*0x577922*/
  if ( (*(int (**)(int))(*&aP1->u32_B0))(aP1) == 44 ) /*0x577932*/
  {
  int i; // ebp
    for ( i = 0; i < (int)this->u32_116C; ++i ) /*0x577943*/
    {
  int MapClass_field_0x1160; // ecx
      MapClass_field_0x1160 = this->u32_1160; /*0x57794a*/
  int v7; // eax
      v7 = *(__int16 *)(MapClass_field_0x1160 + 4 * i + 2); /*0x577950*/
  int v8; // edx
      v8 = *(__int16 *)(MapClass_field_0x1160 + 4 * i); /*0x577955*/
  int *v9; // ecx
      v9 = (int *)(MapClass_field_0x1160 + 4 * i); /*0x577959*/
  unsigned int v10; // eax
      v10 = v8 + (v7 << 9); /*0x57795f*/
  ObjectClass *v11; // eax
      if ( v10 < 0x40000 && (v11 = (ObjectClass *)*((unsigned int *)this->__pad_13C + v10)) != 0 ) /*0x577975*/
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
  int v13; // eax
        v13 = ((int (*)(ObjectClass **, int *))this->u32_115C->?)( /*0x5779ab*/
                &this->u32_115C,
                &v12->occupant);
        if ( v13 != -1 ) /*0x5779b1*/
        {
  MapClass *MapClass_field_0x116C; // ecx
          MapClass_field_0x116C = this->u32_116C; /*0x5779b3*/
          if ( v13 < (int)MapClass_field_0x116C ) /*0x5779b8*/
          {
  MapClass *v15; // ecx
            v15 = (MapClass *)((char *)MapClass_field_0x116C - 1); /*0x5779ba*/
            for ( this->u32_116C = v15; /*0x5779c0*/
                  v13 < (int)this->u32_116C;
                  *(unsigned int *)(this->u32_1160 + 4 * v13 - 4) = *(unsigned int *)(this->u32_1160
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
  int result; // eax
  result = (*(int (**)(int))(*&v3->u32_B0))(v3); /*0x5779f9*/
  if ( result == 44 ) /*0x5779ff*/
  {
    aP1 = v3; /*0x577a11*/
    result = (*(int (**)(int *, int *))(DataGlobal_8B3DC4 + 16))(&DataGlobal_8B3DC4, &aP1); /*0x577a15*/
    if ( result != -1 && result < FootClass_Array ) /*0x577a25*/
    {
      --FootClass_Array; /*0x577a2a*/
      for ( ; /*0x577a30*/
            result < FootClass_Array;
            *(unsigned int *)(FootClass_Array.?[5] + 4 * result - 4) = *(unsigned int *)(FootClass_Array.?[5] + 4 * result) )
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
void * MapClass::ClearShroud(HouseClass * aP1)
{

  void *result; // eax
  bool v4; // bl
  int v5; // eax
  int v6; // ecx
  __int16 *v7; // esi
  int v8; // eax
  int v9; // edx

  result = (void *)aP1; /*0x577f30*/
  if ( aP1 ) /*0x577f3a*/
    *(unsigned char *)(*(&dword_A8022C->vtable0 + aP1->relatedTagsCount) + 577) = 1; /*0x577f48*/
  if ( (Object *)aP1 == dword_A83D4C ) /*0x577f55*/
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
  v4 = (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x577f94*/
    && dword_A8B23C
    && !(*(unsigned __int8 (**)(ObjectClass *))(dword_A8B23C->vtable0 + 4))(dword_A8B23C);
  result = dword_A83D4C; /*0x577f9a*/
  if ( !dword_A83D4C->visionary ) /*0x577f9f*/
  {
    dword_A83D4C->visionary = 1; /*0x577fad*/
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
        if ( v8 != this->u32_F4 + 5 ) /*0x578012*/
          goto LABEL_22; /*0x578012*/
LABEL_25:
        v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x578054*/
        if ( !v5 ) /*0x578060*/
          goto LABEL_26; /*0x578060*/
      }
      if ( v6 == 13 && v8 == this->u32_F4 + 11 ) /*0x578026*/
        goto LABEL_25; /*0x578026*/
LABEL_22:
      v9 = *(unsigned int *)this->q0F8; /*0x578028*/
      if ( v6 == v9 + 13 && v8 == this->u32_F4 + v9 - 15 ) /*0x578041*/
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
void MapClass::MapClass_IsRectInBounds(unsigned short * a2, int a3)
{

  char v3; // bl
  v3 = a3; /*0x578394*/
  unsigned short *v4; // esi
  v4 = a2; /*0x578399*/
  int16_t v6; // ax
  v6 = *a2; /*0x5783a4*/
  (*(((unsigned short *)&(a2)) + 1)) = a2[2]; /*0x5783ab*/
  (*((unsigned short *)&(a2))) = v6; /*0x5783b4*/
  if ( !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)this, (int16_t *)&a2, a3) ) /*0x5783b9*/
    return 0; /*0x5783b9*/
  int16_t v7; // ax
  v7 = v4[2]; /*0x5783d0*/
  (*((unsigned short *)&(a3))) = v4->u32_8 + *(unsigned int *)v4 - 1; /*0x5783d8*/
  (*(((unsigned short *)&(a3)) + 1)) = v7; /*0x5783e0*/
  if ( !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)this, (int16_t *)&a3, v3) ) /*0x5783e5*/
    return 0; /*0x5783e5*/
  int v8; // eax
  v8 = v4->u32_4; /*0x5783f1*/
  int v9; // ecx
  v9 = v4->q00C; /*0x5783f4*/
  int16_t v13[2]; // [esp+Ch] [ebp-8h] BYREF
  v13[0] = *v4; /*0x5783f7*/
  v13[1] = v8 + v9 - 1; /*0x578408*/
  if ( !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, v3) ) /*0x57840d*/
    return 0; /*0x57840d*/
  int v10; // ecx
  v10 = v4->u32_4; /*0x578420*/
  int v11; // edx
  v11 = v4->q00C; /*0x578423*/
  int16_t v14[2]; // [esp+10h] [ebp-4h] BYREF
  v14[0] = v4->u32_8 + *(unsigned int *)v4 - 1; /*0x578426*/
  v14[1] = v10 + v11 - 1; /*0x578436*/
  return (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)this, v14, v3) != 0; /*0x578446*/
}
}
// 0x578710
unsigned int * MapClass::SpiralSearch(void *a1)
{
  int16_t v13[2]; // [esp+10h] [ebp-4h] BYREF

  void *MapClass_field_0xF4; // edi
  MapClass_field_0xF4 = a1->MapClass_field_0xF4; /*0x578723*/
  int v3; // edx
  v3 = *(unsigned int *)&a1->__pad_10C[20]; /*0x578729*/
  int v4; // eax
  v4 = *(unsigned int *)&a1->__pad_10C[16]; /*0x57872f*/
  if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578740*/
               + 2 * (int)((int)a1->MapClass_field_0x108 + (unsigned int)a1->MapClass_field_0x100)
               + 12 )
    return 0; /*0x57880b*/
  while ( 1 ) /*0x578746*/
  {
  int v5; // ecx
    v5 = *(unsigned int *)a1->__pad_104; /*0x578746*/
  int v6; // ebx
    v6 = 2 * ((int)a1->MapClass_field_0xFC + v5) - (unsigned int)MapClass_field_0xF4 - 2; /*0x57875c*/
    v13[0] = v4; /*0x57875f*/
    v13[1] = v3; /*0x578766*/
    if ( v4 - v3 < v6 ) /*0x57876b*/
    {
      *(unsigned int *)&a1->__pad_10C[16] = v4 + 1; /*0x5787be*/
      *(unsigned int *)&a1->__pad_10C[20] = v3 - 1; /*0x5787c4*/
    }
    else
    {
  bool v7; // al
      v7 = (((unsigned char)v4 - (unsigned char)MapClass_field_0xF4 + (unsigned char)v3 - 1) & 1) == 1; /*0x578785*/
  int v8; // ecx
      v8 = v5 - (v7 + 1); /*0x578790*/
  int v9; // ebp
      v9 = *(unsigned int *)&a1->__pad_10C[16] - v8; /*0x578792*/
  int v10; // ebx
      v10 = v8 + *(unsigned int *)&a1->__pad_10C[20]; /*0x578794*/
      *(unsigned int *)&a1->__pad_10C[16] = v9; /*0x578798*/
      *(unsigned int *)&a1->__pad_10C[20] = v10; /*0x5787a0*/
      if ( v7 ) /*0x5787a8*/
        *(unsigned int *)&a1->__pad_10C[20] = v10 + 1; /*0x5787ab*/
      else
        *(unsigned int *)&a1->__pad_10C[16] = v9 + 1; /*0x5787b4*/
    }
    if ( (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)a1, v13, 1) ) /*0x5787d3*/
      break; /*0x5787d3*/
    MapClass_field_0xF4 = a1->MapClass_field_0xF4; /*0x5787e8*/
    v3 = *(unsigned int *)&a1->__pad_10C[20]; /*0x5787ee*/
    v4 = *(unsigned int *)&a1->__pad_10C[16]; /*0x5787f4*/
    if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578805*/
                 + 2 * (int)((int)a1->MapClass_field_0x108 + (unsigned int)a1->MapClass_field_0x100)
                 + 12 )
      return 0; /*0x578805*/
  }
  unsigned int v12; // eax
  v12 = v13[0] + (v13[1] << 9); /*0x578820*/
  unsigned int *result; // eax
  if ( v12 >= 0x40000 || (result = (unsigned int *)*((unsigned int *)a1->MapClass_field_0x13C + v12)) == 0 ) /*0x578836*/
  {
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)v13; /*0x57883f*/
    return &g_MissionQueueFrame.briefing[130]; /*0x578845*/
  }
  return result; /*0x57880d*/
}
// 0x578880
unsigned int * MapClass::FastCellLookup(short * a2, int a3, char a4)
{

  unsigned int *result; // eax
  bool v17; // sf

  if ( a3 == 1 ) /*0x57888e*/
  {
  unsigned int v4; // eax
    v4 = *a2 + (a2[1] << 9); /*0x57889e*/
    if ( v4 >= 0x40000 || (result = *(unsigned int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x5788b4*/
    {
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)a2; /*0x5788be*/
      return &g_MissionQueueFrame.briefing[130]; /*0x5788c4*/
    }
  }
  else
  {
  void *MapClass_field_0xFC; // edi
    MapClass_field_0xFC = this->q0FC; /*0x5788d4*/
  int v7; // ebp
    v7 = *a2; /*0x5788da*/
  int v8; // ebx
    v8 = a2[1]; /*0x5788dd*/
  void *MapClass_field_0x100; // eax
    MapClass_field_0x100 = this->q100; /*0x5788e1*/
  int v10; // esi
    v10 = (__int16)((__int16)this->u32_F4 + (unsigned short)MapClass_field_0x100 - (unsigned short)MapClass_field_0xFC); /*0x5788fd*/
  int v25; // [esp+10h] [ebp-8h]
    v25 = (__int16)((unsigned short)MapClass_field_0x100 + (unsigned short)MapClass_field_0xFC + 1); /*0x57890e*/
  int v26; // [esp+1Ch] [ebp+4h]
    v26 = (6000 * a3 + v25 - v7) % a3; /*0x578928*/
  int v12; // edx
    v12 = (6000 * a3 + (__int16)v10 - v8) % a3; /*0x57892d*/
    if ( v26 > 0 ) /*0x578939*/
      v7 += a3 - v26; /*0x57893f*/
    if ( v12 > 0 ) /*0x578947*/
      v8 += a3 - v12; /*0x57894d*/
  int v27; // [esp+20h] [ebp+8h]
    v27 = v25 + v10; /*0x57895b*/
  void *MapClass_field_0x108; // ecx
    if ( a4 || (MapClass_field_0x108 = this->q108, v8 + v7 < v27 + 2 * (int)MapClass_field_0x108 / 3) ) /*0x578987*/
    {
  int v23; // eax
      v23 = (__int16)v8 << 9; /*0x578a74*/
      v17 = (__int16)v7 + v23 < 0; /*0x578a77*/
  int v24; // eax
      v24 = (__int16)v7 + v23; /*0x578a77*/
  int v30; // [esp+24h] [ebp+Ch]
      LOWORD(v30) = v7; /*0x578a79*/
      HIWORD(v30) = v8; /*0x578a7e*/
      if ( v17 || v24 >= 0x40000 || (result = *(unsigned int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v24)) == 0 ) /*0x578a97*/
      {
        g_MissionQueueFrame.briefing[139] = v30; /*0x578a9d*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578aa2*/
      }
    }
    else if ( v8 + v7 >= v27 + 4 * (int)MapClass_field_0x108 / 3 || a3 <= 2 ) /*0x5789ab*/
    {
  __int16 v19; // bx
      v19 = v8 - (a3 - 1); /*0x578a27*/
  __int16 v20; // bp
      v20 = v7 - (a3 - 1); /*0x578a29*/
  int v21; // eax
      v21 = v19 << 9; /*0x578a31*/
      v17 = v20 + v21 < 0; /*0x578a34*/
  int v22; // eax
      v22 = v20 + v21; /*0x578a34*/
  int v29; // [esp+24h] [ebp+Ch]
      LOWORD(v29) = v20; /*0x578a36*/
      HIWORD(v29) = v19; /*0x578a3b*/
      if ( v17 || v22 >= 0x40000 || (result = *(unsigned int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v22)) == 0 ) /*0x578a54*/
      {
        g_MissionQueueFrame.briefing[139] = v29; /*0x578a5c*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a62*/
      }
    }
    else
    {
  __int16 v14; // bx
      v14 = v8 - a3 / 2; /*0x5789c6*/
  __int16 v15; // bp
      v15 = v7 - a3 / 2; /*0x5789c8*/
  int v16; // eax
      v16 = v14 << 9; /*0x5789d0*/
      v17 = v15 + v16 < 0; /*0x5789d3*/
  int v18; // eax
      v18 = v15 + v16; /*0x5789d3*/
  int v28; // [esp+24h] [ebp+Ch]
      LOWORD(v28) = v15; /*0x5789d5*/
      HIWORD(v28) = v14; /*0x5789da*/
      if ( v17 || v18 >= 0x40000 || (result = *(unsigned int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v18)) == 0 ) /*0x5789f3*/
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

  ++this->q1158; /*0x578ac0*/

}
// 0x57A0C0
void*  MapClass::InitTileData(MouseClass * aP0, int aP3)
{

  Mouse::SetBounds((int)&DataGlobal_87F7E8, 0); /*0x57a0ce*/
  char v22; // [esp+13h] [ebp-1h]
  v22 = 0; /*0x57a0d8*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x57a0df*/
  {
  int v4; // esi
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x57a0e7*/
  int v5; // eax
    v5 = operator new(80 * g_MapCellWidth * g_MapCellWidth); /*0x57a0f1*/
  int v6; // ebx
    v6 = v5; /*0x57a0f6*/
    if ( v5 ) /*0x57a0fd*/
    {
  int v7; // esi
      v7 = v4 - 1; /*0x57a0ff*/
  TileData *v8; // edi
      v8 = (TileData *)v5; /*0x57a100*/
      if ( v7 >= 0 ) /*0x57a104*/
      {
  int v9; // esi
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
  int v10; // esi
  v10 = 0; /*0x57a131*/
  int i; // edi
  char *TileDataEntry; // eax
  for ( i = g_MapCellWidth * g_MapCellWidth; v10 < i; *((unsigned int *)TileDataEntry + 16) = -1 ) /*0x57a138*/
    TileDataEntry = GetTileDataEntry(v10++); /*0x57a13f*/
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x57a157*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x57a15c*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x57a16c*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x57a17b*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int v13; // eax
  v13 = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x57a180*/
  char j; // bl
  for ( j = 1; v13; v13 = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) ) /*0x57a191*/
  {
    if ( !j ) /*0x57a195*/
      break; /*0x57a195*/
  int v14; // edx
    j = RecursiveCellClassNeighbourUpdate(this, v14, v13, aP0, aP3); /*0x57a1a6*/
  }
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x57a1bc*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x57a1c1*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x57a1d1*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x57a1e0*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int k; // eax
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x57a1ec*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !j ) /*0x57a1f0*/
      break; /*0x57a1f0*/
    MapClass::BuildTileConnectivityGraph(k, aP0, aP3); /*0x57a1f7*/
  }
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x57a215*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x57a21a*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x57a22a*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x57a239*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int *m; // eax
  for ( m = (int *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x57a245*/
        m;
        m = (int *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !j ) /*0x57a249*/
      break; /*0x57a249*/
  int v18; // edx
    j = GenerateMapClassCliffTransitions(this, v18, m, 1, aP0, aP3); /*0x57a25c*/
  }
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x57a272*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x57a277*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x57a287*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x57a296*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int *n; // eax
  for ( n = (int *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x57a2a2*/
        n;
        n = (int *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !j ) /*0x57a2a6*/
      break; /*0x57a2a6*/
  int v20; // edx
    j = GenerateMapClassCliffTransitions(this, v20, n, 2, aP0, aP3); /*0x57a2b9*/
  }
  *(unsigned int *)&g_RadarBlipManager = 0; /*0x57a2ca*/
  if ( *(unsigned int *)&g_RadarBlipPool ) /*0x57a2d6*/
  {
    (*(void (**)(unsigned int, int))(**(unsigned int **)&g_RadarBlipPool + 32))( /*0x57a2dc*/
      *(unsigned int *)&g_RadarBlipPool,
      1);
    *(unsigned int *)&g_RadarBlipPool = 0; /*0x57a2df*/
  }
  if ( v22 ) /*0x57a2ef*/
  {
    operator delete((void *)((void *)g_MissionQueueFrame.localVariables[163])); /*0x57a2f7*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x57a2ff*/
  }
  return j; /*0x57a309*/
}
// 0x5856B0
int MapClass::InitializeTileData(MapClass * aP1)
{

  Mouse::SetBounds((int)&DataGlobal_87F7E8, 0); /*0x5856c0*/
  char v18; // [esp+13h] [ebp-5h]
  v18 = 0; /*0x5856ca*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5856d1*/
  {
  int v3; // esi
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x5856d9*/
  int v4; // ebp
    v4 = operator new(80 * g_MapCellWidth * g_MapCellWidth); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
  TileData *v5; // ebx
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
  int v6; // esi
  v6 = 0; /*0x585726*/
  int v7; // ebp
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58572a*/
  char *TileDataEntry; // eax
  int i; // [esp+14h] [ebp-4h]
  for ( i = g_MapCellWidth * g_MapCellWidth; v6 < v7; *((unsigned int *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x58575d*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x58576a*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x585773*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x585782*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int v9; // eax
  v9 = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x585787*/
  char j; // bl
  for ( j = 1; v9; v9 = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
  int v10; // edx
    j = RecursiveCellClassNeighbourUpdate(this, v10, v9, 0, 0); /*0x5857a7*/
  }
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x5857bd*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x5857c2*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x5857ce*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x5857dd*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int k; // eax
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x5857e9*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells(aP1, 1); /*0x58580f*/
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x58581f*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x585824*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x585830*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x58583f*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  Cell *m; // eax
  for ( m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x58584c*/
        m;
        m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
  int v14; // edx
    j = GenerateMapClassCliffTransitions((Cell *)this, v14, m, 1, 0, 0); /*0x585862*/
  }
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x585878*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x58587d*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x585889*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x585898*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int result; // eax
  for ( result = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x5858a4*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
  int v16; // edx
    j = GenerateMapClassCliffTransitions((Cell *)this, v16, (Cell *)result, 2, 0, 0); /*0x5858bb*/
  }
  *(unsigned int *)&g_RadarBlipManager = 0; /*0x5858cc*/
  if ( *(unsigned int *)&g_RadarBlipPool ) /*0x5858d4*/
  {
    result = (*(int (**)(unsigned int, int))(**(unsigned int **)&g_RadarBlipPool + 32))( /*0x5858d9*/
               *(unsigned int *)&g_RadarBlipPool,
               1);
    *(unsigned int *)&g_RadarBlipPool = 0; /*0x5858dc*/
  }
  int n; // esi
  for ( n = 0; n < i; result->u8_4A = 1 ) /*0x5858ea*/
    result = (int)GetTileDataEntry(n++); /*0x5858ee*/
  if ( v18 ) /*0x585902*/
  {
    operator delete((void *)((void *)g_MissionQueueFrame.localVariables[163])); /*0x58590a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585912*/
  }
  (*((unsigned char *)&(result))) = j; /*0x58591a*/
  return result; /*0x585918*/
}
// 0x585D00
int MapClass::LoadTerrainData(MapClass * aP1)
{

  int v2; // esi
  v2 = 0; /*0x585d12*/
  ObjectClass *v3; // ebp
  v3 = (ObjectClass *)this; /*0x585d14*/
  int v4; // edi
  v4 = g_MapCellWidth * g_MapCellWidth; /*0x585d16*/
  char v13; // [esp+12h] [ebp-6h]
  v13 = 1; /*0x585d1f*/
  char v14; // [esp+13h] [ebp-5h]
  v14 = 0; /*0x585d24*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x585d29*/
  {
    if ( v4 > 0 ) /*0x585d79*/
    {
      do /*0x585d89*/
      {
  char *TileDataEntry; // eax
        TileDataEntry = GetTileDataEntry(v2++); /*0x585d7d*/
        TileDataEntry[74] = 1; /*0x585d83*/
      }
      while ( v2 < v4 ); /*0x585d89*/
    }
  }
  else
  {
  int v5; // ebx
    v5 = operator new(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
  TileData *v6; // esi
      v6 = (TileData *)v5; /*0x585d43*/
      if ( v4 - 1 >= 0 ) /*0x585d47*/
      {
  int v7; // ebp
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
  Mouse::SetBounds((int)&DataGlobal_87F7E8, 0); /*0x585d92*/
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x585da2*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x585daf*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x585db8*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x585dc7*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int i; // eax
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x585dd3*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !v13 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v13 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, aP1, 0); /*0x585e02*/
  *(unsigned int *)&DataGlobal_87F8F8 = *(unsigned int *)&g_Cell_PositionLUT; /*0x585e12*/
  *(unsigned int *)&DataGlobal_87F8F4 = 1; /*0x585e17*/
  *(unsigned int *)&DataGlobal_87F8FC = *(unsigned int *)&g_Cell_PositionLUT - 1; /*0x585e23*/
  *(unsigned int *)&DataGlobal_87F900 = (*(unsigned int *)&g_Cell_PositionLUT << 11) /*0x585e32*/
                                        + *(unsigned int *)&g_Shroud_CellArray
                                        + 4;
  int result; // eax
  result = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x585e38*/
  Cell *j; // esi
  for ( j = (Cell *)result; result; j = (Cell *)result ) /*0x585e43*/
  {
    if ( !v13 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !j->u32_11C && (uint8_t)Cell::IsEmpty(j) ) /*0x585e59*/
      v13 = Terrain::SelectTileType((int)j, 0); /*0x585e6b*/
    result = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x585e74*/
  }
  *(unsigned int *)&g_RadarBlipManager = 0; /*0x585e85*/
  if ( *(unsigned int *)&g_RadarBlipPool ) /*0x585e8d*/
  {
    result = (*(int (**)(unsigned int, int))(**(unsigned int **)&g_RadarBlipPool + 32))( /*0x585e93*/
               *(unsigned int *)&g_RadarBlipPool,
               1);
    *(unsigned int *)&g_RadarBlipPool = 0; /*0x585e96*/
  }
  int k; // esi
  for ( k = 0; k < v4; result->u8_4A = 1 ) /*0x585ea0*/
    result = (int)GetTileDataEntry(k++); /*0x585ea4*/
  if ( v14 ) /*0x585eb8*/
  {
    operator delete((void *)((void *)g_MissionQueueFrame.localVariables[163])); /*0x585ec1*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585ec9*/
  }
  (*((unsigned char *)&(result))) = v13; /*0x585ecf*/
  return result; /*0x585ed3*/
}
// 0x586780
int   MapClass::IsAreaFree(int a3, void *a2)
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
  v4 = *this; /*0x5867ac*/
  v5 = this[2] + *this; /*0x5867b4*/
  v16 = (int *)v4; /*0x5867b6*/
  if ( v4 >= v5 ) /*0x5867bc*/
    return MapClass::IsRectInBounds(this, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = this[1]; /*0x5867c2*/
    if ( v6 < this[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
  LABEL_20:
    v16 = (int *)++v4; /*0x58686a*/
    if ( v4 >= this[2] + *this ) /*0x58686e*/
      return MapClass::IsRectInBounds(this, 1); /*0x58686e*/
  }
  (*((unsigned short *)&(v17))) = v4; /*0x5867d4*/
  v7 = (int16_t)v4; /*0x5867d9*/
  while ( 1 ) /*0x5867df*/
  {
    v8 = (int16_t)v6 << 9; /*0x5867df*/
    v9 = v7 + v8 < 0; /*0x5867e2*/
    v10 = v7 + v8; /*0x5867e2*/
    (*(((unsigned short *)&(v17)) + 1)) = v6; /*0x5867e4*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v10)) == 0 ) /*0x5867fd*/
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
    result = *((uint8_t *)v12 + 284); /*0x58683a*/
    if ( (unsigned char)result ) /*0x586842*/
      break; /*0x586842*/
    result = (int)((Cell *)((Cell *)v12))->IsBridge(); /*0x586846*/
    if ( result ) /*0x58684d*/
      break; /*0x58684d*/
    if ( ++v6 >= this[3] + this[1] ) /*0x58685a*/
    {
      v4 = (int)v16; /*0x58685c*/
      goto LABEL_20; /*0x58685c*/
    }
  }
  (*((unsigned char *)&(result))) = 0; /*0x58688d*/
  return result; /*0x586884*/
}
// 0x589370
int MapClass::AllocateCellDataBuffer(int a2, char * a3)
{
  int v3; // ebp
  int result; // eax
  int v7; // ecx
  int v8; // edi
  char *v9; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // ecx
  unsigned int *v14; // edx

  v3 = a2; /*0x589373*/
  if ( !a2 ) /*0x58937f*/
  {
    result = (*(int (**)(void *))(*&this->u32_12C))(this); /*0x589492*/
    (*((unsigned char *)&(result))) = 1; /*0x589498*/
    return result; /*0x589498*/
  }
  result = (int)a3; /*0x589385*/
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
      result = (int)a3; /*0x5893fa*/
    }
  }
  else
  {
    result = (int)operator new(16 * a2); /*0x589396*/
    if ( !result ) /*0x5893a0*/
    {
      v8 = 0; /*0x5893cd*/
      goto LABEL_14; /*0x5893cf*/
    }
    if ( a2 - 1 >= 0 ) /*0x5893a7*/
    {
      a2 = a2; /*0x5893a9*/
      v7 = result + 2; /*0x5893aa*/
      do /*0x5893c9*/
      {
        *(unsigned short *)(v7 - 2) = 0; /*0x5893b0*/
        *(unsigned short *)v7 = 0; /*0x5893b4*/
        *(unsigned short *)(v7 + 2) = 0; /*0x5893b7*/
        *(unsigned short *)(v7 + 4) = 0; /*0x5893bb*/
        *(unsigned char *)(v7 + 6) = 0; /*0x5893bf*/
        *(unsigned int *)(v7 + 10) = -1; /*0x5893c2*/
        v7 += 16; /*0x5893c5*/
        --a2; /*0x5893c8*/
      }
      while ( a2 ); /*0x5893c9*/
    }
  }
  v8 = result; /*0x5893fe*/
  LABEL_14:
  this->IsInitialized = 1; /*0x589400*/
  if ( v8 ) /*0x589406*/
  {
    if ( this->Items ) /*0x589412*/
    {
      v11 = this->Capacity; /*0x589417*/
      if ( a2 < v11 ) /*0x58941c*/
        v11 = a2; /*0x58941e*/
      if ( v11 > 0 ) /*0x589422*/
      {
        v12 = 0; /*0x589424*/
        v11 = v11; /*0x589426*/
        do /*0x589456*/
        {
          v13 = (unsigned int *)(this->Items + v12); /*0x58942f*/
          v14 = (unsigned int *)(v12 + v8); /*0x589431*/
          v12 += 16; /*0x589434*/
          *v14 = *v13; /*0x589439*/
          v14[1] = v13[1]; /*0x58943e*/
          v14[2] = v13[2]; /*0x589444*/
          v14[3] = v13[3]; /*0x58944a*/
          --v11; /*0x589452*/
        }
        while ( v11 ); /*0x589456*/
        v3 = a2; /*0x589458*/
      }
      if ( this->IsAllocated ) /*0x58945c*/
      {
        operator delete((void *)(this->__pad_004)); /*0x589465*/
        this->Items = 0; /*0x58946d*/
      }
    }
    this->Items = v8; /*0x589478*/
    result = a3 == 0; /*0x58947b*/
    this->Capacity = v3; /*0x58947e*/
    this->IsAllocated = a3 == 0; /*0x589481*/
    (*((unsigned char *)&(result))) = 1; /*0x589487*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x58940b*/
  }
  return result; /*0x589408*/
}
// 0x589A60
AbstractClass * * MapClass::AllocateMapDataBuffer(int a2, int * a3)
{
  int v3; // edi
  int *v5; // eax
  unsigned int *v6; // ebx
  unsigned int *v7; // esi
  unsigned int *v8; // esi
  unsigned int *v9; // esi
  int v10; // eax
  unsigned int *v11; // edi
  int v12; // ebx
  int *v13; // esi
  unsigned int *v14; // ecx
  int v15; // eax
  unsigned int *v18; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x589a67*/
  if ( !a2 ) /*0x589a6f*/
  {
    (*(void (**)(void *))(*&this->u32_12C))(this); /*0x589ba0*/
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
        *((unsigned short *)v11 - 2) = v13->u32_18; /*0x589b44*/
        *v11 = v13->q01C; /*0x589b4b*/
        v11[1] = v13->q020; /*0x589b54*/
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
  if ( v15 < this->Items ) /*0x589bab*/
    this->Items = v15; /*0x589bad*/
  return 1; /*0x589bb0*/
}
// 0x589BD0
unsigned int * MapClass::allocateMapBuffers()
{

  this->__pad_004 = 0; /*0x589bd6*/
  this->q008 = 0; /*0x589bd9*/
  LOBYTE(this->u32_C) = 1; /*0x589bdc*/
  BYTE1(this->u32_C) = 0; /*0x589be0*/
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x589be3) */
  this->MapClass_field_0x14 = (void *)10; /*0x589be9*/
  this->MapClass_field_0x10 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone((int)this); /*0x589bf3*/
  *(unsigned short *)this->__pad_18 = 0; /*0x589bf9*/
  *&this->q01C = 0; /*0x589bfd*/
  *&this->CapacityIncrement = 0; /*0x589c00*/
  return &this->MapClass_field_0x0; /*0x589c05*/

}
// 0x594700
int MapClass::Cleanup(int a1, int a2)
{

  int v15; // [esp+14h] [ebp-4h]
  v15 = a2; /*0x594710*/
  int v14; // [esp+10h] [ebp-8h]
  v14 = a1; /*0x594714*/
  if ( dword_ABED10 ) /*0x594718*/
  {
  int v2; // ecx
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x594720*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x594725*/
    {
  int v3; // eax
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(unsigned int *)((char *)dword_ABED10 + v3 - 24) = -1; /*0x594733*/
        *(unsigned int *)((char *)dword_ABED10 + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  int i; // edi
  for ( i = dword_ABDFA0 - 1; i >= 0; --i ) /*0x59474d*/
  {
  unsigned int *v5; // esi
    v5 = (unsigned int *)*((unsigned int *)dword_ABDF94 + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (***)(unsigned int, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
  unsigned int *v13; // [esp+Ch] [ebp-Ch] BYREF
      v13 = v5; /*0x59477e*/
  int v6; // eax
      v6 = (*(int (**)(int *, unsigned int **))(dword_ABDF90 + 16))(&dword_ABDF90, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&dword_ABDF90, v6); /*0x59478f*/
      v5[10] = &vt_VectorClass; /*0x594797*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      operator delete((void *)(v5)); /*0x5947a3*/
    }
  }
  dword_ABED14 = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5947bd*/
  int result; // eax
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5947c7*/
  int j; // esi
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
  int v9; // edx
    v9 = *(int16_t *)(j + 36); /*0x5947d7*/
  int v10; // ecx
    v10 = *(int16_t *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > dword_ABED04 /*0x594828*/
      && v9 - v10 < dword_ABED04
      && v10 - v9 < dword_ABED04
      && v10 + v9 <= dword_ABED08
      && *((unsigned int *)dword_ABED10 + 20 * *(int16_t *)(j + 36) + 20 * g_MapCellWidth * *(int16_t *)(j + 38) + 14) == -1
      && !*(unsigned int *)(j + 76) )
    {
  int v11; // edi
      v11 = v14; /*0x59482f*/
  int TileIndex; // eax
      TileIndex = ((MapClass *)(&dword_87F7E8))->GetTileIndex((int16_t *)(j + 36), v14, 0); /*0x59483c*/
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


  this->q304 = 0; /*0x599534*/
  this->q0308 = 0; /*0x59953a*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x599548*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x59954b*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x599553*/
  }
  int i; // edi
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x599563*/
  {
  unsigned int *v2; // esi
    v2 = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (***)(unsigned int, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
  unsigned int *v7; // [esp+8h] [ebp-4h] BYREF
      v7 = v2; /*0x599599*/
  int v3; // eax
      v3 = (*(int (**)(int *, unsigned int **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59959d*/
             &g_MissionQueueFrame.briefing[338],
             &v7);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x5995ad*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x5995b2*/
        for ( ; /*0x5995b8*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(unsigned int *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x5995c0*/
        }
      }
  void *v4; // eax
      v4 = (void *)v2[11]; /*0x5995d2*/
      v2[10] = &vt_VectorClass; /*0x5995d5*/
      if ( v4 && *((unsigned char *)v2 + 53) ) /*0x5995e0*/
      {
        __3_YAXPAX_Z(v4); /*0x5995e6*/
        v2[11] = 0; /*0x5995ee*/
      }
      *((unsigned char *)v2 + 53) = 0; /*0x5995f2*/
      v2[12] = 0; /*0x5995f5*/
      __3_YAXPAX_Z(v2); /*0x5995f8*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59960f*/
  MapClass::PostProcessReveal((MapClass *)&DataGlobal_87F7E8, 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility((RadarClass *)&DataGlobal_87F7E8, (int *)&DataGlobal_87F8E4); /*0x599631*/
  RadarClass *v6; // [esp+0h] [ebp-Ch]
  return RadarClass::RecreateSurface(v6, 0); /*0x599640*/

}
// 0x5A0410
MapClass * * MapClass::GrowLayer(int a2, int a3, int a4)
{
  VectorClass *v13; // ebx
  int v35; // [esp+28h] [ebp-8h]

  MapClass *v4; // ebx
  v4 = this; /*0x5a041b*/
  MapClass *v36; // [esp+2Ch] [ebp-4h]
  v36 = this; /*0x5a041e*/
  int v5; // esi
  v5 = a3; /*0x5a0427*/
  VectorClass *v6; // ebp
  v6 = (VectorClass *)((RandomMap *)((RandomMap *)this))->CellListAlloc(a2); /*0x5a042b*/
  VectorClass *v29; // [esp+10h] [ebp-20h]
  v29 = v6; /*0x5a0430*/
  if ( a3 > 1 ) /*0x5a0434*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&DataGlobal_87F7E8); /*0x5a043b*/
  int i; // eax
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x5a044e*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
    {
      v35 = *(unsigned int *)(i + 36); /*0x5a0453*/
      *(unsigned int *)(80 * ((int16_t)v35 + g_MapCellWidth * (*((signed short *)(((unsigned char *)&(v35)) + 2)))) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a0478*/
    }
  }
  int v30; // [esp+14h] [ebp-1Ch]
  v30 = 0; /*0x5a048b*/
  if ( a3 > 0 ) /*0x5a048f*/
  {
    do /*0x5a067e*/
    {
  int j; // esi
  unsigned char *v10; // eax
      for ( j = (int)v6[1].vfptr - 1; j >= 0; v10[283] = v4->q30C ) /*0x5a0499*/
      {
  int v9; // ecx
        v9 = *((unsigned int *)v6->Items + j); /*0x5a04a6*/
  int16_t v31[2]; // [esp+18h] [ebp-18h] BYREF
        *(unsigned int *)v31 = v9; /*0x5a04a9*/
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x5a04ad*/
          *(unsigned int *)(80 * ((int16_t)v9 + g_MapCellWidth * v31[1]) + g_MissionQueueFrame.localVariables[163] + 56) = a4; /*0x5a04ca*/
        v10 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v31); /*0x5a04d8*/
        v10->u32_38 = 0; /*0x5a04dd*/
        v10->Tactical_11A = 0; /*0x5a04e0*/
        --j; /*0x5a04ed*/
      }
      if ( v30 < a3 - 1 ) /*0x5a0501*/
      {
  VectorClass *v11; // eax
        v11 = (VectorClass *)operator new(0x18u); /*0x5a0509*/
  VectorClass *v12; // esi
        v12 = v11; /*0x5a050e*/
        if ( v11 ) /*0x5a0515*/
        {
          VectorClass::CellConstructor(v11, 0, 0); /*0x5a051b*/
          /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x5a0520) */
          v12[1].Items = (void *)10; /*0x5a0526*/
          v12[1].vfptr = 0; /*0x5a052d*/
          v13 = v12; /*0x5a0530*/
        }
        else
        {
          v13 = 0; /*0x5a0534*/
        }
        v13[1].Items = v6[1].vfptr; /*0x5a0539*/
  int v14; // eax
        v14 = (int)v6[1].vfptr - 1; /*0x5a053f*/
        v35 = v14; /*0x5a0540*/
        if ( v14 >= 0 ) /*0x5a0544*/
        {
  int v15; // edi
          v15 = g_MissionQueueFrame.localVariables[160]; /*0x5a054a*/
          do /*0x5a0650*/
          {
  int v16; // edx
            v16 = *((unsigned int *)v6->Items + v14); /*0x5a0553*/
  char v17; // al
            v17 = 0; /*0x5a0556*/
  int v32; // [esp+1Ch] [ebp-14h]
            v32 = v16; /*0x5a0558*/
  int k; // [esp+24h] [ebp-Ch]
            for ( k = 0; k < 8; ++k ) /*0x5a055c*/
            {
  int v18; // eax
              v18 = v17 & 7; /*0x5a0560*/
  int16_t v19; // cx
              v19 = (*(((unsigned short *)&(v32)) + 1)) + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v18 + 82])) + 1)); /*0x5a057b*/
  int v33; // [esp+20h] [ebp-10h]
              (*((unsigned short *)&(v33))) = v32 + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v18 + 82]))); /*0x5a0580*/
              (*(((unsigned short *)&(v33)) + 1)) = v19; /*0x5a0585*/
  int v20; // eax
              v20 = v19; /*0x5a058d*/
  int v21; // ecx
              v21 = v19 + (int16_t)v33; /*0x5a0590*/
              if ( v21 > v15 /*0x5a05b9*/
                && (int16_t)v33 - v20 < v15
                && v20 - (int16_t)v33 < v15
                && v21 <= g_MissionQueueFrame.localVariables[161] )
              {
  int v22; // esi
                v22 = g_MissionQueueFrame.localVariables[163] + 80 * ((int16_t)v33 + g_MapCellWidth * v20); /*0x5a05d4*/
                if ( *(unsigned int *)(v22 + 56) == a2 ) /*0x5a05d9*/
                {
                  if ( *(unsigned int *)(v22 + 60) != v30 + 1 ) /*0x5a05e7*/
                  {
  int Capacity; // ecx
                    Capacity = v13->Capacity; /*0x5a05e9*/
  int v24; // eax
                    if ( (int)v13[1].vfptr < Capacity /*0x5a060e*/
                      || (v13->IsAllocated || !Capacity)
                      && (v24 = (int)v13[1].Items, v24 > 0)
                      && (*((uint8_t (**)(VectorClass *, int, unsigned int))v13->vfptr + 2))(
                           v13,
                           Capacity + v24,
                           0) )
                    {
  void *vtable0; // eax
                      vtable0 = v13[1].vfptr; /*0x5a0615*/
  unsigned int *Items; // edx
                      Items = v13->Items; /*0x5a0618*/
                      v13[1].vfptr = (char *)vtable0 + 1; /*0x5a061e*/
                      Items[(unsigned int)vtable0] = v33; /*0x5a0625*/
                    }
                    *(unsigned int *)(v22 + 60) = v30 + 1; /*0x5a0628*/
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
          (*(void (**)(VectorClass *, int))v6->vfptr)(v6, 1); /*0x5a0663*/
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
    (*(void (**)(VectorClass *, int))v6->vfptr)(v6, 1); /*0x5a0691*/
  if ( v5 > 1 ) /*0x5a0696*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&DataGlobal_87F7E8); /*0x5a069d*/
  int m; // eax
    for ( m = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x5a06ae*/
          m;
          m = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
    {
      *(unsigned int *)(80 * ((int16_t)*(unsigned int *)(m + 36) + g_MapCellWidth * (int16_t)(*(((unsigned short *)&(*(unsigned int *)(m + 36))) + 1))) /*0x5a06d8*/
                + g_MissionQueueFrame.localVariables[163]
                + 60) = 0;
    }
  }
  return 1; /*0x5a06e5*/
}
// 0x5A17F0
int MapClass::FindPassableNeighbor()
{

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a17fd*/
  int result; // eax
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5a1807*/
  int i; // edi
  for ( i = result; result; i = result ) /*0x5a1810*/
  {
  int v2; // eax
    v2 = *(unsigned int *)(i + 56); /*0x5a1819*/
    if ( v2 >= g_TerrainBuildConfig && v2 < g_TerrainBuildConfig + 40 ) /*0x5a182f*/
    {
  unsigned short *NeighbourContent; // esi
      NeighbourContent = Cell::GetNeighbourContent((unsigned int *)i, 4u); /*0x5a1842*/
  unsigned short *v4; // ebp
      v4 = Cell::GetNeighbourContent((unsigned int *)i, 2u); /*0x5a184c*/
      if ( *(unsigned int *)(i + 56) == *(&NeighbourContent->q038) /*0x5a1867*/
        && *(unsigned char *)(i + 282) > NeighbourContent->u32_11A )
      {
  int v5; // eax
        v5 = SelectTerrainTileVariant(*(unsigned int *)(i + 56)); /*0x5a1872*/
  int v6; // ecx
        v6 = *(unsigned int *)(i + 56); /*0x5a1877*/
  int v20; // [esp+18h] [ebp-8h]
        v20 = v5; /*0x5a187a*/
        if ( v5 != v6 ) /*0x5a1880*/
        {
  int v7; // ecx
          v7 = *(unsigned int *)(*((unsigned int *)dword_A8ED2C + v6) + 740); /*0x5a1897*/
  int16_t v8; // dx
          v8 = NeighbourContent[18] - *((uint8_t *)NeighbourContent + 282) % v7; /*0x5a18b4*/
  int v17; // [esp+4h] [ebp-1Ch]
          (*((unsigned short *)&(v17))) = v8; /*0x5a18bf*/
  int16_t v9; // si
          v9 = NeighbourContent[19] - *((uint8_t *)NeighbourContent + 282) / v7; /*0x5a18c4*/
          (*(((unsigned short *)&(v17)) + 1)) = v9; /*0x5a18c7*/
  int v19; // [esp+14h] [ebp-Ch] BYREF
          v19 = v17; /*0x5a18d2*/
  int v10; // ecx
          if ( dword_ABED10 ) /*0x5a18d6*/
            v10 = *((unsigned int *)dword_ABED10 + 20 * v8 + 20 * g_MapCellWidth * v9 + 14); /*0x5a18f2*/
          else
            v10 = -1; /*0x5a18d8*/
          PlaceMapSeedClassBuildings(v20, &v19, v10, -1); /*0x5a1901*/
        }
      }
      if ( *(unsigned int *)(i + 56) == *((unsigned int *)v4 + 14) && *(unsigned char *)(i + 282) > *((unsigned char *)v4 + 282) ) /*0x5a1922*/
      {
  int v11; // eax
        v11 = SelectTerrainTileVariant(*(unsigned int *)(i + 56)); /*0x5a192d*/
  int v12; // edi
        v12 = *(unsigned int *)(i + 56); /*0x5a1932*/
        if ( v11 != v12 ) /*0x5a1939*/
        {
  int v13; // edi
          v13 = *(unsigned int *)(*((unsigned int *)dword_A8ED2C + v12) + 740); /*0x5a194e*/
  int16_t v14; // dx
          v14 = v4[18] - *((uint8_t *)v4 + 282) % v13; /*0x5a1969*/
  int v18; // [esp+Ch] [ebp-14h]
          (*((unsigned short *)&(v18))) = v14; /*0x5a1972*/
  int16_t v15; // si
          v15 = v4[19] - *((uint8_t *)v4 + 282) / v13; /*0x5a1977*/
          (*(((unsigned short *)&(v18)) + 1)) = v15; /*0x5a197a*/
  int v21; // [esp+1Ch] [ebp-4h] BYREF
          v21 = v18; /*0x5a1985*/
  int v16; // ecx
          if ( dword_ABED10 ) /*0x5a1989*/
            v16 = *((unsigned int *)dword_ABED10 + 20 * v14 + 20 * g_MapCellWidth * v15 + 14); /*0x5a19a5*/
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

  int v17; // ebp
  Vector2 v29; // [esp+30h] [ebp-34h] BYREF

  int *v3; // ebx
  v3 = a3; /*0x6d8264*/
  int v4; // ebp
  v4 = *a3; /*0x6d826f*/
  int v33; // [esp+48h] [ebp-1Ch]
  v33 = 0; /*0x6d827b*/
  int v6; // eax
  v6 = v4 + *&this->q0B0; /*0x6d828f*/
  int v7; // ecx
  v7 = a3[1] + *&this->q0B4; /*0x6d8296*/
  *(unsigned int *)v29.__pad_000 = v6 - DSurface_ViewBounds.field_0; /*0x6d8298*/
  v29.q004 = v7 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d82a2*/
  float v31; // [esp+40h] [ebp-24h] BYREF
  v31 = (float)(v6 - DSurface_ViewBounds.field_0); /*0x6d82b1*/
  float v32; // [esp+44h] [ebp-20h]
  v32 = (float)(v7 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d82bd*/
  float *v8; // eax
  float v37[3]; // [esp+58h] [ebp-Ch] BYREF
  v8 = TransformMatrix3x4Point(v37, &this->u32_DE4, &v31); /*0x6d82c1*/
  v31 = *v8; /*0x6d82c8*/
  v32 = v8[1]; /*0x6d82d3*/
  v33 = *((unsigned int *)v8 + 2); /*0x6d82da*/
  int v9; // eax
  LOWORD(v9) = Math::RoundToInt(v31); /*0x6d82de*/
  int v10; // esi
  v10 = v9; /*0x6d82e7*/
  int v11; // eax
  LOWORD(v11) = Math::RoundToInt(v32); /*0x6d82e9*/
  int v34; // [esp+4Ch] [ebp-18h] BYREF
  v34 = v10; /*0x6d82f0*/
  int v35; // [esp+50h] [ebp-14h]
  v35 = v11; /*0x6d82f6*/
  int v36; // [esp+54h] [ebp-10h]
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
  int smudgeTypeIndex; // ecx
  smudgeTypeIndex = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v34)->smudgeTypeIndex; /*0x6d8329*/
  int v13; // esi
  v13 = v3->u32_8; /*0x6d833c*/
  __int16 v28; // [esp+22h] [ebp-42h]
  v28 = HIWORD(smudgeTypeIndex) + 3; /*0x6d8344*/
  __int16 v27; // [esp+20h] [ebp-44h]
  v27 = smudgeTypeIndex - 2; /*0x6d835d*/
  int v14; // ecx
  v14 = 0; /*0x6d8367*/
  unsigned int result; // eax
  result = (unsigned int)((unsigned __int64)(2290649225LL * v13) >> 32) >> 31; /*0x6d8369*/
  int v16; // esi
  v16 = v13 / 60 + 7; /*0x6d836e*/
  int v26; // [esp+1Ch] [ebp-48h]
  v26 = v3[3] / 15 + 20; /*0x6d8372*/
  int v25; // [esp+18h] [ebp-4Ch]
  v25 = v16; /*0x6d8376*/
  if ( v26 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v17 = v14 + 1; /*0x6d8382*/
  unsigned int *v23; // [esp+10h] [ebp-54h]
      LOWORD(v23) = v27 + v14 / 2; /*0x6d83a9*/
      HIWORD(v23) = v28 + (v14 + 1) / 2; /*0x6d83b4*/
      a3 = v23; /*0x6d83bf*/
      if ( v16 > 0 ) /*0x6d83c3*/
      {
  int v24; // [esp+14h] [ebp-50h]
        v24 = v16; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&DataGlobal_87F7E8, (__int16 *)&a3) ) /*0x6d83d7*/
          {
            v37[2] = 0.0; /*0x6d8417*/
            LODWORD(v37[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8; /*0x6d8433*/
            LODWORD(v37[1]) = (((SHIWORD(a3) << 8) + 128) / 256) << 8; /*0x6d8437*/
  int *v18; // eax
            v18 = Coord::To_ScreenRaw((int *)&v31, v37); /*0x6d843b*/
            *(unsigned int *)v29.__pad_000 = *v18; /*0x6d8442*/
  int v19; // ecx
            v19 = *&this->q0B4; /*0x6d8446*/
  int v20; // edx
            v20 = v18[1]; /*0x6d844c*/
  int v21; // eax
            v21 = *&this->q0B0; /*0x6d844f*/
            v29.q004 = v20; /*0x6d8455*/
  unsigned int v30[2]; // [esp+38h] [ebp-2Ch] BYREF
            v30[1] = v19; /*0x6d845d*/
            v30[0] = v21; /*0x6d8466*/
            Vector2::Subtract(&v29, v30); /*0x6d846a*/
            *(unsigned int *)v29.__pad_000 -= 30; /*0x6d8486*/
  TacticalClass *v22; // eax
            v22 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)&a3); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(v22, (int *)v29.__pad_000, v3); /*0x6d8491*/
          }
          LOWORD(a3) = (unsigned short)a3 + 1; /*0x6d8496*/
          --HIWORD(a3); /*0x6d849f*/
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
unsigned int *  MapClass::FindPlacementCellsAlt(IUnknown * aP2, void *a3, void *a3_1)
{

  int v4; // ebx
  unsigned int *v5; // eax
  int v6; // edx
  int v7; // edi
  int TileIndex; // eax
  int v11; // [esp+14h] [ebp-10h] BYREF
  unsigned char v12[12]; // [esp+18h] [ebp-Ch] BYREF
  v4 = *(unsigned int *)((*(int (**)(char *))(this->hasParachute)(this) + 1660); /*0x7035a1*/
  if ( v4 == 4 ) /*0x7035aa*/
    v4 = 1; /*0x7035ac*/
  if ( a3 ) /*0x7035b9*/
    v5 = (unsigned int *)(*(int (**)(int, unsigned char *))(*&a3->turretChargeTimer_d))(a3, v12); /*0x7035c2*/
  else
    v5 = (unsigned int *)(*(int (**)(char *, unsigned char *))(this->turretChargeTimer_d)(this, v12); /*0x7035fd*/
  (*((unsigned short *)&(a3))) = *v5 / 256; /*0x7035d5*/
  (*(((unsigned short *)&(a3)) + 1)) = v5[1] / 256; /*0x7035e9*/
  v6 = *(unsigned int *)this; /*0x70362d*/
  a3 = a3; /*0x70362f*/
  v7 = *(unsigned int *)((*(int (**)(char *))(v6 + 132))(this) + 1460); /*0x70363b*/
  if ( v7 == -1 ) /*0x703644*/
    TileIndex = -1; /*0x70365f*/
  else
    TileIndex = ((MapClass *)(&dword_87F7E8))->GetTileIndex((int16_t *)&a3, v7, this->cloakDelayTimer); /*0x703658*/
  a3 = 0; /*0x703663*/
  *aP2 = *LayerClass::Pathfinding_Find( /*0x7036aa*/
           &dword_87F7E8,
           (uint8_t)this->cloakDelayTimer,
           &v11,
           (int16_t *)&a3,
           v4,
           TileIndex,
           v7,
           (uint8_t)this->cloakDelayTimer,
           1,
           1,
           0,
           0,
           0,
           1,
           (int16_t *)&a3,
           0,
           0);
  return aP2; /*0x7036a7*/
}
// 0x7BCF50
int MapClass::isCellShrouded(uint16_t a2)
{

  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  unsigned int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->q02C; /*0x7bcf58*/
  v5[0] = 0; /*0x7bcf60*/
  v5[1] = 0; /*0x7bcf64*/
  MapClass_field_0x28 = this->__pad_028; /*0x7bcf68*/
  MapClass_field_0x14 = this->q014; /*0x7bcf6b*/
  v5[2] = MapClass_field_0x28; /*0x7bcf74*/
  return (*(int (**)(void *, unsigned int *, unsigned int))(*(unsigned int *)MapClass_field_0x14 + 20))( /*0x7bcf83*/
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
  for ( i = &this->u32_C * a2; *(unsigned int *)i; i += 4 ) /*0x430f39*/
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

  while ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228] ) /*0x48dc97*/
    (*(void (**)(unsigned int))(***(unsigned int ***)&((unsigned int *)&stru_A8EB00)[216] + 336))(**(unsigned int **)&((unsigned int *)&stru_A8EB00)[216]); /*0x48dca2*/
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
          result->u32_C &= ~2u; /*0x43107b*/
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
  unsigned int *v4; // eax
  int v5; // ecx
  int k; // ebp
  int m; // edi
  unsigned int *v8; // eax
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
        v5 = v4->u32_12C; /*0x4acb02*/
        if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 ) /*0x4acb10*/
          v4->u32_140 |= 0x20u; /*0x4acb12*/
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
        && (*((unsigned char *)CellCoord::To_CellObj((CellCoord *)this, &v10) + 320) & 0x20) != 0 )
      {
        v8 = CellCoord::To_CellObj((CellCoord *)this, &v10); /*0x4acb63*/
        v8->u32_140 &= ~0x20u; /*0x4acb7a*/
        MapClass::RevealCell(this, &v10); /*0x4acb7f*/
      }
    }
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x4acb9c*/
  return (*((int (**)(MapClass *, int))this->vtable1 + 14))(this, 1); /*0x4acbaa*/

}
// 0x4ACBC0
int MapClass::ProcessFogTransition()
{
  int i; // eax
  int v3; // ecx
  int result; // eax

  LayerClass::CellIteratorReset(); /*0x4acbc4*/
  for (); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x4acbd2*/
  {
    v3 = *(unsigned int *)(i + 320); /*0x4acbd4*/
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 ) /*0x4acbe2*/
      *(unsigned int *)(i + 320) = v3 | 0x40; /*0x4acbe7*/
  }
  HouseClass::RevealShroudForAllies(0, 1); /*0x4acbfe*/
  LayerClass::CellIteratorReset(); /*0x4acc05*/
  for (); /*0x4acc13*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (result->u8_140 & 0x40) != 0 ) /*0x4acc1c*/
    {
      result->u8_140 &= ~0x40u; /*0x4acc27*/
  int16_t v5[2]; // [esp+4h] [ebp-4h] BYREF
      *(unsigned int *)v5 = result->u32_24; /*0x4acc34*/
      CellClass::ProcessVisibility(v5); /*0x4acc3b*/
    }
  }
  return result; /*0x4acc4b*/
}
// 0x4ACDA0
char   MapClass::RevealCell(void *a1)
{

  int16_t *v2; // esi
  v2 = this; /*0x4acda3*/
  unsigned int *v4; // eax
  (*((unsigned char *)&(v4))) = ((LayerClass *)((LayerClass *)this))->CoordinatesLegal(this); /*0x4acdaa*/
  if ( (unsigned char)v4 ) /*0x4acdb1*/
  {
    v4 = ((CellCoord *)((CellCoord *)this))->To_CellObj(v2); /*0x4acdba*/
  int v5; // ecx
    v5 = v4->u32_12C; /*0x4acdbf*/
    if ( (v5 & 8) != 0 ) /*0x4acdc8*/
    {
      v4->u32_12C = v5 & 0xFFFFFFE7; /*0x4acdd2*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4acddf*/
  int i; // edi
      for ( i = 0; i < 8; ++i ) /*0x4acde4*/
      {
  int v7; // eax
        v7 = i & 7; /*0x4acde8*/
  int16_t *v9; // [esp+8h] [ebp-4h]
        (*((unsigned short *)&(v9))) = *v2 + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v7 + 82]))); /*0x4ace09*/
        (*(((unsigned short *)&(v9)) + 1)) = v2[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v7 + 82])) + 1)); /*0x4ace12*/
        this = v9; /*0x4ace1e*/
        v4 = ((CellCoord *)((CellCoord *)this))->To_CellObj((int16_t *)&this); /*0x4ace22*/
        if ( this != *(int16_t **)v2 ) /*0x4ace2f*/
        {
          v4->u32_12C &= ~0x10u; /*0x4ace46*/
          (*((unsigned char *)&(v4))) = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v4); /*0x4ace52*/
        }
      }
    }
  }
  return (char)v4; /*0x4ace5e*/
}
// 0x4AE4C0
int MapClass::UpdateLightingPostProcess()
{

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x4ae4c5*/
  int result; // eax
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x4ae4d6*/
    TacticalMap::ComputeScreenTint(result); /*0x4ae4da*/
  return result; /*0x4ae4ed*/
}
// 0x4AEB10
int MapClass::GetScrollMode(void *a1)
{


  if ( !LOBYTE(this->u32_119C) ) /*0x4aeb10*/
    return 0; /*0x4aeb10*/
  int result; // eax
  result = (int)this->u32_11A0; /*0x4aeb1a*/
  if ( !result ) /*0x4aeb22*/
    return 0; /*0x4aeb24*/
  return result; /*0x4aeb26*/

}
// 0x4F42F0
int MapClass::MarkForRedraw(int a2, void *a2_2)
{

  if ( g_TacticalClass_Instance ) /*0x4f42f7*/
    g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4f42f9*/
  int result; // eax
  result = a2_2; /*0x4f4300*/
  if ( a2_2 ) /*0x4f4306*/
  {
    if ( a2_2->vfptr[3] != 2 ) /*0x4f430c*/
      a2_2->vfptr[3] = a2_2; /*0x4f430e*/
    MapClass::IncrementRedrawCounter((MapClass *)&DataGlobal_87F7E8); /*0x4f4316*/
  }
  return result; /*0x4f431b*/
}
// 0x5656D0
int MapClass::IsCellPassable(int a1, int a2)
{

  unsigned int v2; // eax
  v2 = (int16_t)a2 + ((*((signed short *)(((unsigned char *)&(a2)) + 2))) << 9); /*0x5656ed*/
  int *v3; // eax
  if ( v2 >= 0x40000 || (v3 = (int *)*((unsigned int *)a1->MapClass_field_0x13C + v2)) == 0 ) /*0x565707*/
  {
    v3 = &g_MissionQueueFrame.briefing[130]; /*0x56570d*/
    g_MissionQueueFrame.briefing[139] = a2; /*0x565712*/
  }
  return ((unsigned int)v3[75] >> 3) & 1; /*0x565725*/
}
// 0x565B00
int MapClass::FreeAllCells(void *a1)
{


  int i; // ecx
  for ( i = 0; i < this->q140; ++i ) /*0x565b0e*/
  {
  int v3; // eax
    v3 = *((unsigned int *)this->__pad_13C + i); /*0x565b16*/
    if ( v3 ) /*0x565b1b*/
    {
      *(unsigned int *)(v3 + 44) = 0; /*0x565b1d*/
      *(unsigned int *)(v3 + 48) = 0; /*0x565b20*/
    }
  }
  int j; // edi
  for ( j = 0; j < this->q140; ++j ) /*0x565b39*/
  {
  int v5; // ecx
    v5 = *((unsigned int *)this->__pad_13C + j); /*0x565b41*/
    if ( v5 ) /*0x565b46*/
    {
      (*(void (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x565b4c*/
      *((unsigned int *)this->__pad_13C + j) = 0; /*0x565b55*/
    }
  }
  ReturnFalse2(); /*0x565b67*/
  int result; // eax
  result = this->q140; /*0x565b6c*/
  if ( result < 0x40000 ) /*0x565b78*/
  {
    (*(void (**)(char *, int, unsigned int))(*&this->MaxLevel + 8))(&this->MaxLevel, 0x40000, 0); /*0x565b8c*/
    for ( result = 0; result < this->q140; *((unsigned int *)this->__pad_13C + result - 1) = 0 ) /*0x565b99*/
      ++result; /*0x565ba1*/
  }
  return result; /*0x565bb0*/

}
// 0x57A320
int MapClass::BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3)
{

  Cell *v4; // ebp
  v4 = (Cell *)aP1; /*0x57a328*/
  int result; // eax
  result = aP1->__pad_038; /*0x57a330*/
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
  signed int v6; // ebx
      v6 = 0; /*0x57a387*/
  bool v7; // zf
      v7 = (unsigned char)aP3 == 0; /*0x57a38a*/
      aP1->__pad_038 = 0xFFFF; /*0x57a38d*/
      aP1->Tactical_11A = 0; /*0x57a394*/
      if ( !v7 ) /*0x57a39a*/
        *((unsigned int *)Tactical::GetCellData(&aP1->outBuffer) + 14) = aP2; /*0x57a3a8*/
      do /*0x57a41e*/
      {
  int *NeighbourContent; // esi
        NeighbourContent = (int *)Cell::GetNeighbourContent(v4, v6); /*0x57a3b3*/
  int v9; // edx
        v9 = NeighbourContent[9]; /*0x57a3b5*/
        aP3 = v9; /*0x57a3ba*/
        result = (*((signed short *)(((unsigned char *)&(v9)) + 2))); /*0x57a3c1*/
  int v10; // edi
        v10 = (*((signed short *)(((unsigned char *)&(v9)) + 2))) + (int16_t)v9; /*0x57a3c6*/
        if ( v10 > g_MissionQueueFrame.localVariables[160] ) /*0x57a3cf*/
        {
          if ( (int16_t)aP3 - (*((signed short *)(((unsigned char *)&(aP3)) + 2))) < g_MissionQueueFrame.localVariables[160] ) /*0x57a3db*/
          {
            result = (*((signed short *)(((unsigned char *)&(aP3)) + 2))) - (int16_t)aP3; /*0x57a3dd*/
            if ( result < g_MissionQueueFrame.localVariables[160] && v10 <= g_MissionQueueFrame.localVariables[161] ) /*0x57a3ef*/
            {
              aP3 = v9; /*0x57a3f5*/
  char *CellData; // edi
              CellData = Tactical::GetCellData((Tactical *)&aP3); /*0x57a402*/
              *((unsigned int *)CellData + 16) = -1; /*0x57a407*/
              result = Cell::GetTerrainMask((Cell *)this, NeighbourContent, 2); /*0x57a40e*/
              *((unsigned int *)CellData + 16) = result; /*0x57a413*/
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
int  MapClass::TriggerEVA(IUnknown * aP0)
{

  int result; // eax
  void *v6; // ecx

  int v1; // ebx
  v1 = -5; /*0x57b79f*/
  do /*0x57b854*/
  {
  int v2; // edi
    v2 = -5; /*0x57b7a4*/
    do /*0x57b84a*/
    {
  double v3; // st7
      v3 = Math::Sqrt( /*0x57b7f6*/
             (double)(__int16)-(__int16)v1 * (double)(__int16)-(__int16)v1
           + (double)(__int16)-(__int16)v2 * (double)(__int16)-(__int16)v2);
      result = Math::RoundToInt(v3); /*0x57b7fe*/
      if ( (__int16)result <= 5 ) /*0x57b807*/
      {
  unsigned int v5; // eax
        v5 = *aP0 + (aP0[1] << 9); /*0x57b813*/
        if ( v5 < 0x40000 && (result = *(unsigned int *)(dword_87F924 + 4 * v5)) != 0 ) /*0x57b829*/
        {
          v6 = (void *)result; /*0x57b82b*/
        }
        else
        {
          result = *(unsigned int *)aP0; /*0x57b82f*/
          v6 = &unk_ABDC50; /*0x57b831*/
          dword_ABDC74 = *(unsigned int *)aP0; /*0x57b836*/
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
  v2 = 2; /*0x581f55*/
  char *pad_BC; // edi
  pad_BC = this->q0BC; /*0x581f5a*/
  do /*0x581f75*/
  {
    (*(void (**)(char *))(*&pad_BC->q030))(pad_BC); /*0x581f64*/
    Subzone::BuildGraph((Subzone *)this, v2--); /*0x581f6a*/
    pad_BC -= 24; /*0x581f70*/
  }
  while ( v2 >= 0 ); /*0x581f75*/
  return MapClass::AllocArrays(&g_AudioInitFlag); /*0x581f81*/

}
// 0x588BF0
MapClass * MapClass::Destru_vt04(char * Block, char a2)
{
  MapClass::Destruct((char *)Block); /*0x588bf3*/
  if ( (a2 & 1) != 0 ) /*0x588bfd*/
    operator delete((void *)(Block)); /*0x588c00*/
  return (char *)Block; /*0x588c0a*/
}
// 0x588DE0
unsigned int MapClass::initCellVectors(int a2)
{
  if ( this->u32_C ) /*0x588de0*/
    return (a2 - this->__pad_004) / 0x24u; /*0x588dfe*/
  else
    return 0; /*0x588de7*/
}
// 0x588EF0
int MapClass::InitCellVe_vt06(int a2)
{

  return *(unsigned int *)(*&this->__pad_004 + 4 * a2); /*0x588efa*/

}
// 0x589060
VectorClass_flat * MapClass::InitCellVe_vt00(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x589063*/
  *Block = &vt_VectorClass; /*0x589066*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x589070*/
  {
    operator delete((void *)(v3)); /*0x589078*/
    *(Block + 1) = 0; /*0x589080*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x58908b*/
  *(Block + 2) = 0; /*0x589091*/
  if ( (a2 & 1) != 0 ) /*0x589098*/
    operator delete((void *)(Block)); /*0x58909b*/
  return Block; /*0x5890a5*/
}
// 0x5894A0
void MapClass::allocateCellArrays()
{
  if ( this->Items && this->IsAllocated ) /*0x5894ad*/
  {
    operator delete((void *)(this->Items)); /*0x5894b3*/
    this->Items = 0; /*0x5894bb*/
  }
  this->IsAllocated = 0; /*0x5894be*/
  this->Capacity = 0; /*0x5894c1*/
}
// 0x5894D0
int   MapClass::FindSubzoneConnectionIndex(void *a1)
{

  if ( !this->IsInitialized ) /*0x5894d0*/
    return 0; /*0x5894dc*/
  int v3; // esi
  v3 = this->Capacity; /*0x5894e2*/
  int result; // eax
  result = 0; /*0x5894e5*/
  if ( v3 <= 0 ) /*0x5894e9*/
    return -1; /*0x589520*/
  unsigned short *i; // ecx
  for ( i = this->Items; *i != *this || i[1] != this[1] || i[2] != this[2] || i[3] != this[3]; i += 8 ) /*0x5894ef*/
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
  v2 = this->q008; /*0x589ca2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x589cad*/
  {
  int v3; // edx
    v3 = 0; /*0x589caf*/
    if ( v2 <= 0 ) /*0x589cb3*/
      return 1; /*0x589cd3*/
  unsigned int *v4; // eax
    v4 = *&this->__pad_004; /*0x589cb5*/
  int v5; // ecx
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

  if ( a2 ) /*0x589cec*/
  {
    this->IsInitialized = 0; /*0x589cf6*/
  unsigned int *v4; // edi
    if ( a3 ) /*0x589cfc*/
      v4 = a3; /*0x589d12*/
    else
      v4 = operator new(4 * a2); /*0x589d0e*/
    this->IsInitialized = 1; /*0x589d16*/
    if ( v4 ) /*0x589d1a*/
    {
      if ( this->Items ) /*0x589d25*/
      {
  int v6; // ecx
        v6 = this->Capacity; /*0x589d2c*/
        if ( a2 < v6 ) /*0x589d31*/
          v6 = a2; /*0x589d33*/
  int i; // eax
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x589d39*/
          ++i; /*0x589d3e*/
        if ( this->IsAllocated ) /*0x589d4b*/
        {
          operator delete((void *)(this->__pad_004)); /*0x589d56*/
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
    (*(void (**)(void *))(*&this->u32_12C))(this); /*0x589d82*/
    return 1; /*0x589d88*/
  }
}
// 0x589D90
void MapClass::InitCellVe_vt03()
{
  if ( this->Items && this->IsAllocated ) /*0x589d9d*/
  {
    operator delete((void *)(this->Items)); /*0x589da3*/
    this->Items = 0; /*0x589dab*/
  }
  this->IsAllocated = 0; /*0x589dae*/
  this->Capacity = 0; /*0x589db1*/
}
// 0x589DC0
int   MapClass::InitCellVe_vt04(void *a1)
{

  if ( !this->IsInitialized ) /*0x589dc0*/
    return 0; /*0x589dc8*/
  int v3; // edx
  v3 = this->Capacity; /*0x589dce*/
  int result; // eax
  result = 0; /*0x589dd1*/
  if ( v3 <= 0 ) /*0x589dd5*/
    return -1; /*0x589dec*/
  unsigned int *i; // ecx
  for ( i = this->Items; *i != *this; ++i ) /*0x589ddb*/
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
MapClass *   MapClass::SetObstruction(MapClass * aP1, void *a2)
{
  int result; // eax

  if ( dword_ABED10 ) /*0x5a0098*/
  {
    result = 80 * (*this + g_MapCellWidth * this[1]); /*0x5a00b5*/
    *(unsigned int *)((char *)dword_ABED10 + result + 56) = aP1; /*0x5a00b8*/
  }
  return result; /*0x5a00bc*/
}
// 0x5A00C0
int MapClass::GetTileDataField14(MapResourceClass * aP0)
{
  if ( dword_ABED10 ) /*0x5a00c8*/
    return *((unsigned int *)dword_ABED10 + 20 * *aP0 + 20 * g_MapCellWidth * aP0[1] + 14); /*0x5a00ea*/
  else
    return -1; /*0x5a00ca*/
}
// 0x5AC5A0
void MapClass::checkCellBounds()
{

  void *v2; // eax
  v2 = this->__pad_004; /*0x5ac5a6*/
  this->__pad_004 = 0; /*0x5ac5a9*/
  if ( v2 && this->IsAllocated ) /*0x5ac5b0*/
  {
    operator delete((void *)(v2)); /*0x5ac5b6*/
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
  v2 = this->__pad_004; /*0x5ad0c0*/
  int result; // eax
  result = 0; /*0x5ad0c3*/
  if ( v2 <= 0 ) /*0x5ad0c8*/
    return -1; /*0x5ad0df*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)this->Items; *i != *a2; ++i ) /*0x5ad0ce*/
  {
    if ( ++result >= v2 ) /*0x5ad0dd*/
      return -1; /*0x5ad0dd*/
  }
  return result; /*0x5ad0e2*/
}
// 0x5F60A0
int MapClass::SetCellOverlayFlag()
{
  int result; // eax

  unsigned int *v6; // [esp+8h] [ebp+4h]
  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f60d3*/
    && (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v6)->flags[0] & 0x100) != 0 )
  {
  CellClass *v1; // eax
    v1 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v6); /*0x5f60db*/
  int altOccupationFlags; // ecx
    altOccupationFlags = v1->altOccupationFlags; /*0x5f60e0*/
    result = (int)&v1->altOccupationFlags; /*0x5f60e6*/
    *(unsigned int *)result = altOccupationFlags | 0x40; /*0x5f60ef*/
  }
  else
  {
  CellClass *v4; // eax
    v4 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v6); /*0x5f60fa*/
  int occupationFlags; // ecx
    occupationFlags = v4->occupationFlags; /*0x5f60ff*/
    result = (int)&v4->occupationFlags; /*0x5f6105*/
    *(unsigned int *)result = occupationFlags | 0x40; /*0x5f610e*/
  }
  return result; /*0x5f60ee*/
}
// 0x5F6120
int MapClass::ClearCellOverlayFlag()
{
  int result; // eax

  unsigned int *v6; // [esp+8h] [ebp+4h]
  if ( (signed int)(dword_AC13BC + Cell::GetGroundHeight(v6)) <= v6[2] /*0x5f6153*/
    && (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v6)->flags[0] & 0x100) != 0 )
  {
  CellClass *v1; // eax
    v1 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v6); /*0x5f615b*/
  int altOccupationFlags; // ecx
    altOccupationFlags = v1->altOccupationFlags; /*0x5f6160*/
    result = (int)&v1->altOccupationFlags; /*0x5f6166*/
    *(unsigned int *)result = altOccupationFlags & 0xFFFFFFBF; /*0x5f616f*/
  }
  else
  {
  CellClass *v4; // eax
    v4 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v6); /*0x5f617a*/
  int occupationFlags; // ecx
    occupationFlags = v4->occupationFlags; /*0x5f617f*/
    result = (int)&v4->occupationFlags; /*0x5f6185*/
    *(unsigned int *)result = occupationFlags & 0xFFFFFFBF; /*0x5f618e*/
  }
  return result; /*0x5f616e*/
}