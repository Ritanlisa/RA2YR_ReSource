// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"
#include "e4/classes/SwizzleManagerClass_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SyncDelay_e4.hpp"

// 0x6CF5A0
namespace gamemd {
AbstractClass * * DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006CF5A0.json)
}
}
// 0x6CF720
namespace gamemd {
AbstractClass * * DynamicVector::SetCapacity(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006CF720.json)
}
}
// 0x6CF490
namespace gamemd {  // G42.18c ns repair
int SwizzleManagerClass::Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2)
{

  if ( !aP1 || !a2 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a2 = (unsigned int)(aP1); /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/

}
}  // G42.18c ns repair
// 0x6CF4B0
namespace gamemd {  // G42.18c ns repair
int SwizzleManagerClass::AddRef(int a1)
{

  return 1; /*0x6cf4b5*/

}
}  // G42.18c ns repair
// 0x6CF4C0
namespace gamemd {  // G42.18c ns repair
int SwizzleManagerClass::Release(int a1)
{

  return 1; /*0x6cf4c5*/

}
}  // G42.18c ns repair
// 0x6CF4D0
namespace gamemd {  // G42.18c ns repair
int SwizzleManagerClass::Remove(int a1, int a2, int a3)
{

  return -2147467263; /*0x6cf4d5*/

}
}  // G42.18c ns repair
// 0x6CF4E0
namespace gamemd {  // G42.18c ns repair
int SwizzleManagerClass::Lookup(int a1, int a2, int a3, int a4)
{

  return -2147467263; /*0x6cf4e5*/

}
}  // G42.18c ns repair
// 0x6CF4F0
namespace gamemd {
void SwizzleManagerClass_19::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6cf4f6*/
  this->m_10 = 0; /*0x6cf4f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6cf500*/
  {
    __3_YAXPAX_Z(v2); /*0x6cf506*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6cf50e*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf511*/
  this->m_8 = 0; /*0x6cf514*/

}
} // namespace gamemd

// 0x6CF520
namespace gamemd {
unsigned int SwizzleManagerClass_19::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x6cf520*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x6cf535*/
  else
    return 0; /*0x6cf527*/

}
} // namespace gamemd

// 0x6CF540
namespace gamemd {
unsigned int * SwizzleManagerClass_19::Lookup(unsigned int * a2, int a3)
{

  int v3; // edx

  v3 = *(unsigned int *)&this->m_1[3]; /*0x6cf540*/
  *a2 = *(unsigned int *)(v3 + 8 * a3); /*0x6cf54f*/
  a2[1] = *(unsigned int *)(v3 + 8 * a3 + 4); /*0x6cf556*/
  return a2; /*0x6cf551*/

}
} // namespace gamemd

// 0x6CF560
namespace gamemd {
char SwizzleManagerClass_19::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6cf562*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( m_8 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x6cf575*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6cf57b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6cf584*/
    {
      ++v3; /*0x6cf586*/
      v4 += 2; /*0x6cf587*/
      if ( v3 >= m_8 ) /*0x6cf58c*/
        return 1; /*0x6cf58c*/
    }
  }
  return 0; /*0x6cf58e*/

}
} // namespace gamemd

// 0x6CF690
namespace gamemd {
void SwizzleManagerClass_19::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6cf69d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf6a3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6cf6ab*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf6ae*/
  this->m_8 = 0; /*0x6cf6b1*/

}
} // namespace gamemd

// 0x6CF6C0
namespace gamemd {
int SwizzleManagerClass_19::Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6cf6c0*/
    return 0; /*0x6cf6c8*/
  m_8 = this->m_8; /*0x6cf6ce*/
  result = 0; /*0x6cf6d1*/
  if ( m_8 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= m_8 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/

}
} // namespace gamemd

// 0x6CF700
namespace gamemd {
unsigned int SwizzleManagerClass_19::Add(int a2, void *a2_2, void *a3_1)
{

  if ( LOBYTE(this->m_C) ) /*0x6cf700*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x6cf715*/
  else
    return 0; /*0x6cf707*/

}
} // namespace gamemd

// 0x6CF820
namespace gamemd {
int SwizzleManagerClass_19::FindItem(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x6cf820*/
  result = 0; /*0x6cf823*/
  if ( m_10 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x6cf82e*/
  {
    if ( ++result >= m_10 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/

}
}
// 0x6CF850
namespace gamemd {
VectorClass_flat * SwizzleManagerClass_19::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CF850)
}
} // namespace gamemd

// 0x6CF8A0
namespace gamemd {
DynamicVector * SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CF8A0)
}
} // namespace gamemd
