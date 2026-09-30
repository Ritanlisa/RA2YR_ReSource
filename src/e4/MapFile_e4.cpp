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

  v3 = *(unsigned int *)&Block->m_1[3]; /*0x69d523*/
  *(unsigned int *)Block->__pad_0 = &VectorClass<Wstring>::`vftable'; /*0x69d526*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x69d530*/
  {
    v4 = *(unsigned int *)(v3 - 4); /*0x69d53b*/
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
    __3_YAXPAX_Z(v5); /*0x69d55c*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x69d566*/
  }
  BYTE1(Block->m_C) = 0; /*0x69d571*/
  Block->m_8 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    __3_YAXPAX_Z(Block); /*0x69d581*/
  return Block->__pad_0; /*0x69d58b*/

}
} // namespace gamemd
// 0x69D770
namespace gamemd {
void MapFile::Constructor( int a2, int a3)
{

  this->MapFile_field_0x04 = 0; /*0x69d77b*/
  this->MapFile_field_0x08 = a2; /*0x69d77e*/
  LOBYTE(this->MapFile_field_0x0C) = 1; /*0x69d781*/
  BYTE1(this->MapFile_field_0x0C) = 0; /*0x69d785*/
  *(unsigned int *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = a3; /*0x69d798*/
      return this->__pad_0; /*0x69d79e*/
    }
    this->MapFile_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    BYTE1(this->MapFile_field_0x0C) = 1; /*0x69d7b0*/
  }
  return this->__pad_0; /*0x69d79d*/

}
} // namespace gamemd