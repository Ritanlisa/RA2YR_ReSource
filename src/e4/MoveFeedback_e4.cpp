// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x7327D0
namespace gamemd {
int MoveFeedback::ProcessCommand()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7327D0)
}
} // namespace gamemd
// 0x40B960
namespace gamemd {
char MoveFeedback::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x40b962*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40b96d*/
  {
    v3 = 0; /*0x40b96f*/
    if ( m_8 <= 0 ) /*0x40b973*/
      return 1; /*0x40b993*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x40b975*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40b97b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40b984*/
    {
      ++v3; /*0x40b986*/
      ++v4; /*0x40b987*/
      if ( v3 >= m_8 ) /*0x40b98c*/
        return 1; /*0x40b98c*/
    }
  }
  return 0; /*0x40b98e*/

}
} // namespace gamemd
// 0x40BB90
namespace gamemd {
int MoveFeedback::Draw(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x40bb90*/
  result = 0; /*0x40bb93*/
  if ( m_10 <= 0 ) /*0x40bb98*/
    return -1; /*0x40bbaf*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x40bb9e*/
  {
    if ( ++result >= m_10 ) /*0x40bbad*/
      return -1; /*0x40bbad*/
  }
  return result; /*0x40bbb2*/

}
} // namespace gamemd
// 0x40BCB0
namespace gamemd {
DynamicVector * MoveFeedback::QueryInterface(char a2, int a1, int a3, int a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40BCB0)
}
} // namespace gamemd
// 0x40BE50
namespace gamemd {
void MoveFeedback::Destroy()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40be56*/
  this->m_10 = 0; /*0x40be59*/
  if ( v2 && BYTE1(this->m_C) ) /*0x40be60*/
  {
    __3_YAXPAX_Z(v2); /*0x40be66*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40be6e*/
  }
  BYTE1(this->m_C) = 0; /*0x40be71*/
  this->m_8 = 0; /*0x40be74*/

}
} // namespace gamemd
// 0x40BE80
namespace gamemd {
unsigned int MoveFeedback::GetIndex2(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x40be80*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x40be95*/
  else
    return 0; /*0x40be87*/

}
} // namespace gamemd
// 0x40C030
namespace gamemd {
char MoveFeedback::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c03c*/
  {
    LOBYTE(this->m_C) = 0; /*0x40c042*/
    if ( a3 ) /*0x40c048*/
      v4 = a3; /*0x40c05e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40c05a*/
    LOBYTE(this->m_C) = 1; /*0x40c062*/
    if ( !v4 ) /*0x40c066*/
      return 0; /*0x40c0da*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x40c068*/
    {
      m_8 = this->m_8; /*0x40c06f*/
      if ( a2 < m_8 ) /*0x40c074*/
        m_8 = a2; /*0x40c076*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40c07c*/
        ++i; /*0x40c081*/
      if ( BYTE1(this->m_C) ) /*0x40c08e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x40c099*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x40c0a1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x40c0aa*/
    this->m_8 = a2; /*0x40c0b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x40c0b5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVCommandClass *))(*(unsigned int *)this->__pad_0 + 12))((_DynamicVectorClass_PBVCommandClass *)this); /*0x40c0be*/
  }
  v7 = this->m_8; /*0x40c0c1*/
  if ( v7 < this->m_10 ) /*0x40c0c9*/
    this->m_10 = v7; /*0x40c0cb*/
  return 1; /*0x40c0ce*/

}
} // namespace gamemd
// 0x40C0E0
namespace gamemd {
int MoveFeedback::FindMoveItem(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x40c0e0*/
  result = 0; /*0x40c0e3*/
  if ( m_10 <= 0 ) /*0x40c0e8*/
    return -1; /*0x40c0ff*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x40c0ee*/
  {
    if ( ++result >= m_10 ) /*0x40c0fd*/
      return -1; /*0x40c0fd*/
  }
  return result; /*0x40c102*/

}
} // namespace gamemd
// 0x40C160
namespace gamemd {
void MoveFeedback::Constructor(unsigned int * Block, char a2, void *a3, void *a4, void *a5)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40C160)
}
} // namespace gamemd