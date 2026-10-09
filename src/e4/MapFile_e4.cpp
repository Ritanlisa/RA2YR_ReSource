// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapFile_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Main_e4.hpp"

// 0x69D520
namespace gamemd {
DynamicVector * MapFile::QueryInterface(unsigned int * Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(_DWORD *)&Block->m_1[3]; /*0x69d523*/
  *(_DWORD *)Block->q000 = &(void*)(void*)&VectorClass_Wstring_vftable; /*0x69d526*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x69d530*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d54d*/
        DeleteAndZero(v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    RA2_OPDEL(v5); /*0x69d55c*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x69d566*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x69d571*/
  Block->m_8 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    RA2_OPDEL(Block); /*0x69d581*/
  return Block->q000; /*0x69d58b*/
}
} // namespace gamemd
// 0x69D770
namespace gamemd {
_DWORD * MapFile::Constructor(int a2, int a3)
{
  this->q004 = 0; /*0x69d77b*/
  this->q008 = a2; /*0x69d77e*/
  IDA_LOBYTE(this->q00C) = 1; /*0x69d781*/
  IDA_BYTE1(this->q00C) = 0; /*0x69d785*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_enum_DiskID_vftable; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->q004 = a3; /*0x69d798*/
      return this->q000; /*0x69d79e*/
    }
    this->q004 = RA2_OPNEW(4 * a2); /*0x69d7ad*/
    IDA_BYTE1(this->q00C) = 1; /*0x69d7b0*/
  }
  return this->q000; /*0x69d79d*/
}
} // namespace gamemd