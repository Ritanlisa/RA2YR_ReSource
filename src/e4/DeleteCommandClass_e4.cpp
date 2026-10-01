// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DeleteCommandClass_28_e4.hpp"
#include "e4/classes/DeleteCommandClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_74F6F0_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"

// 0x537F90
namespace gamemd {
void DeleteCommandClass_Undo()
{
  return UI_Delete(); /*0x537f95*/
}
}
// 0x537F10
unsigned int * DeleteCommandClass::Constructor(void *a1, void *a2, void *a3, void *a4, void *a5)
{

  *(unsigned int *)this->CommandClass = &vt_DeleteCommandClass; /*0x537f12*/
  return this->CommandClass; /*0x537f18*/

}
// 0x537F20
char * DeleteCommandClass::AddRef(void *a1)
{

  return (char *)(aDelete);

}
// 0x537F30
wchar_t * DeleteCommandClass::Release(void *a1)
{

  return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559); /*0x537f46*/

}
// 0x537F50
wchar_t * DeleteCommandClass::ddtor(void *a1)
{

  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6561); /*0x537f66*/

}
// 0x537F70
wchar_t * DeleteCommandClass::Read(void *a1, void *a2)
{

  return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563); /*0x537f86*/

}
// 0x53C4C0
namespace gamemd {
void DeleteCommandClass_28::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x53c4c6*/
  this->m_10 = 0; /*0x53c4c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x53c4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x53c4d6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x53c4de*/
  }
  BYTE1(this->m_C) = 0; /*0x53c4e1*/
  this->m_8 = 0; /*0x53c4e4*/

}
} // namespace gamemd

// 0x53C4F0
namespace gamemd {
unsigned int DeleteCommandClass_28::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x53c4f0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x53c505*/
  else
    return 0; /*0x53c4f7*/

}
} // namespace gamemd

// 0x53C510
namespace gamemd {
int DeleteCommandClass_28::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x53c51a*/

}
} // namespace gamemd

// 0x53C520
namespace gamemd {
char DeleteCommandClass_28::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x53c522*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x53c52d*/
  {
    v3 = 0; /*0x53c52f*/
    if ( m_8 <= 0 ) /*0x53c533*/
      return 1; /*0x53c553*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x53c535*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x53c53b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x53c544*/
    {
      ++v3; /*0x53c546*/
      ++v4; /*0x53c547*/
      if ( v3 >= m_8 ) /*0x53c54c*/
        return 1; /*0x53c54c*/
    }
  }
  return 0; /*0x53c54e*/

}
} // namespace gamemd

// 0x53C560
namespace gamemd {
char DeleteCommandClass_28::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x53c56c*/
  {
    LOBYTE(this->m_C) = 0; /*0x53c576*/
    if ( a3 ) /*0x53c57c*/
      v4 = a3; /*0x53c592*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x53c58e*/
    LOBYTE(this->m_C) = 1; /*0x53c596*/
    if ( v4 ) /*0x53c59a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x53c5a5*/
      {
        m_8 = this->m_8; /*0x53c5ac*/
        if ( a2 < m_8 ) /*0x53c5b1*/
          m_8 = a2; /*0x53c5b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x53c5b9*/
          ++i; /*0x53c5be*/
        if ( BYTE1(this->m_C) ) /*0x53c5cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c5d6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x53c5de*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x53c5e7*/
      this->m_8 = a2; /*0x53c5ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x53c5f2*/
      return 1; /*0x53c5f8*/
    }
    else
    {
      return 0; /*0x53c59f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVAnimClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x53c602*/
    return 1; /*0x53c608*/
  }

}
} // namespace gamemd

// 0x53C610
namespace gamemd {
void DeleteCommandClass_28::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x53c61d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c623*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x53c62b*/
  }
  BYTE1(this->m_C) = 0; /*0x53c62e*/
  this->m_8 = 0; /*0x53c631*/

}
} // namespace gamemd

// 0x53C640
namespace gamemd {
int DeleteCommandClass_28::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x53c640*/
    return 0; /*0x53c648*/
  m_8 = this->m_8; /*0x53c64e*/
  result = 0; /*0x53c651*/
  if ( m_8 <= 0 ) /*0x53c655*/
    return -1; /*0x53c66c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x53c65b*/
  {
    if ( ++result >= m_8 ) /*0x53c66a*/
      return -1; /*0x53c66a*/
  }
  return result; /*0x53c64a*/

}
} // namespace gamemd

// 0x53C680
namespace gamemd {
unsigned int DeleteCommandClass_28::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x53c680*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x53c695*/
  else
    return 0; /*0x53c687*/

}
} // namespace gamemd

// 0x53C6A0
namespace gamemd {
char DeleteCommandClass_28::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53c6ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x53c6b2*/
    if ( a3 ) /*0x53c6b8*/
      v4 = a3; /*0x53c6ce*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x53c6ca*/
    LOBYTE(this->m_C) = 1; /*0x53c6d2*/
    if ( !v4 ) /*0x53c6d6*/
      return 0; /*0x53c74a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x53c6d8*/
    {
      m_8 = this->m_8; /*0x53c6df*/
      if ( a2 < m_8 ) /*0x53c6e4*/
        m_8 = a2; /*0x53c6e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x53c6ec*/
        ++i; /*0x53c6f1*/
      if ( BYTE1(this->m_C) ) /*0x53c6fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x53c709*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x53c711*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x53c71a*/
    this->m_8 = a2; /*0x53c722*/
    BYTE1(this->m_C) = a3 == 0; /*0x53c725*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVAnimClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x53c72e*/
  }
  v7 = this->m_8; /*0x53c731*/
  if ( v7 < this->m_10 ) /*0x53c739*/
    this->m_10 = v7; /*0x53c73b*/
  return 1; /*0x53c73e*/

}
} // namespace gamemd

// 0x53C750
namespace gamemd {
int DeleteCommandClass_28::FindItem(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x53c750*/
  result = 0; /*0x53c753*/
  if ( m_10 <= 0 ) /*0x53c758*/
    return -1; /*0x53c76f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x53c75e*/
  {
    if ( ++result >= m_10 ) /*0x53c76d*/
      return -1; /*0x53c76d*/
  }
  return result; /*0x53c772*/

}
}
// 0x53C780
namespace gamemd {
VectorClass_flat * DeleteCommandClass_28::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x53c783*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x53c786*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x53c790*/
  {
    __3_YAXPAX_Z(v3); /*0x53c798*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x53c7a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x53c7ab*/
  Block->m_8 = 0; /*0x53c7b1*/
  if ( (a2 & 1) != 0 ) /*0x53c7b8*/
    __3_YAXPAX_Z(Block); /*0x53c7bb*/
  return Block->__pad_0; /*0x53c7c5*/

}
} // namespace gamemd

// 0x53C7D0
namespace gamemd {
int DeleteCommandClass_28::Constructor(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x53c7d3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x53c7d6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x53c7e0*/
  {
    __3_YAXPAX_Z(v3); /*0x53c7e8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x53c7f0*/
  }
  BYTE1(Block->m_C) = 0; /*0x53c7fb*/
  Block->m_8 = 0; /*0x53c801*/
  if ( (a2 & 1) != 0 ) /*0x53c808*/
    __3_YAXPAX_Z(Block); /*0x53c80b*/
  return Block->__pad_0; /*0x53c815*/

}
} // namespace gamemd
