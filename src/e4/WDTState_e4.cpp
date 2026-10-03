// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WDTState_4_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x76BA70
namespace gamemd {
AbstractClass * * DynamicVector::Release(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0076BA70.json)
}
}
// 0x76B710
namespace gamemd {
int WDTState_4::ddtor()
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->m_1[3]; /*0x76b716*/
  this->m_10 = 0; /*0x76b719*/
  if ( v2 && BYTE1(this->m_C) ) /*0x76b720*/
  {
    result = (**v2)((unsigned int)v2, 3); /*0x76b72d*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x76b72f*/
  }
  BYTE1(this->m_C) = 0; /*0x76b732*/
  this->m_8 = 0; /*0x76b735*/
  return result; /*0x76b738*/

}
} // namespace gamemd

// 0x76B740
namespace gamemd {
unsigned int WDTState_4::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x76b740*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/

}
} // namespace gamemd

// 0x76BB90
namespace gamemd {
int WDTState_4::Read(int a2, void *a2_2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x76bb90*/
  result = 0; /*0x76bb93*/
  if ( m_10 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  for ( i = (unsigned int *)(*(unsigned int *)&this->m_1[3] + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x76bba1*/
  {
    if ( ++result >= m_10 ) /*0x76bbb1*/
      return -1; /*0x76bbb1*/
  }
  return result; /*0x76bbb6*/

}
}
// 0x76BC10
namespace gamemd {
DynamicVector * WDTState_4::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76BC10)
}
} // namespace gamemd

// 0x76BC60
namespace gamemd {
int WDTState_4::Constructor()
{

  ((ComPtr *)((ComPtr *)this))->Constructor(); /*0x76bc63*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_rc_ptr); /*0x76bc68*/
  return (int)(this->__pad_0); /*0x76bc70*/

}
} // namespace gamemd
