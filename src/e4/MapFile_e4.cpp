// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x69D520
DynamicVector * MapFile::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall MapFile::QueryInterface(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  void **v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(Block + 1); /*0x69d523*/
  *Block = &VectorClass<Wstring>::`vftable'; /*0x69d526*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d530*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (void **)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        DeleteAndZero(--v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    __3_YAXPAX_Z(v5); /*0x69d55c*/
    *(Block + 1) = 0; /*0x69d566*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d571*/
  *(Block + 2) = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    __3_YAXPAX_Z(Block); /*0x69d581*/
  return (DynamicVector *)Block; /*0x69d58b*/
}
}

// 0x69D770
unsigned int * MapFile::Constructor(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_69D770(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x69d77b*/
  *(this + 2) = a2; /*0x69d77e*/
  *((_BYTE *)this + 12) = 1; /*0x69d781*/
  *((_BYTE *)this + 13) = 0; /*0x69d785*/
  *this = &VectorClass<enum DiskID>::`vftable'; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      *(this + 1) = a3; /*0x69d798*/
      return this; /*0x69d79e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    *((_BYTE *)this + 13) = 1; /*0x69d7b0*/
  }
  return this; /*0x69d79d*/
}
}
