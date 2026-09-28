// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapFile_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x69D520
namespace gamemd {
DynamicVector * MapFile::QueryInterface(char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(unsigned int *)&this->m_1[3]; /*0x69d523*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_Wstring_vftable; /*0x69d526*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x69d530*/
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
    RA2_OPDEL(v5); /*0x69d55c*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x69d566*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x69d571*/
  this->m_8 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    RA2_OPDEL(this); /*0x69d581*/
  return this->__pad_0; /*0x69d58b*/
}
} // namespace gamemd
// 0x69D770
namespace gamemd {
unsigned int * MapFile::Constructor(int a2, int a3)
{
  this->MapFile_field_0x04 = (unsigned int)(0);
  this->MapFile_field_0x08 = (unsigned int)(a2);
  IDA_LOBYTE(this->MapFile_field_0x0C) = 1; /*0x69d781*/
  IDA_BYTE1(this->MapFile_field_0x0C) = 0; /*0x69d785*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_enum_DiskID_vftable; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = (unsigned int *)(a3);
      return (unsigned int *)(this->__pad_0);
    }
    this->MapFile_field_0x04 = (unsigned int)(RA2_OPNEW(4 * a2));
    IDA_BYTE1(this->MapFile_field_0x0C) = 1; /*0x69d7b0*/
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd