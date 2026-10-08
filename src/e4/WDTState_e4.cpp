// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WDTState_4_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x76BA70
namespace gamemd {
AbstractClass * * WDTState_4::Release(int a2, unsigned int * a3)
{

  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  WDTState *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (***v11)(unsigned int, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x76ba73*/
  if ( a2 ) /*0x76ba7d*/
  {
    LOBYTE(this->m_C) = 0; /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = (ComPtr *)(a3 + 1); /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        v9 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ((ComPtr *)(v8))->Constructor(); /*0x76bae6*/
          *(unsigned int *)v8->__pad_0 = (unsigned int)(&vt_rc_ptr); /*0x76baeb*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x76baf1*/
          --v9; /*0x76baf4*/
        }
        while ( v9 ); /*0x76baf5*/
        v8 = (ComPtr *)(a3 + 1); /*0x76baf7*/
      }
      v6 = v8; /*0x76bafb*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76ba97*/
      if ( v5 ) /*0x76baa1*/
      {
        *v5 = a2; /*0x76baa3*/
        v6 = (ComPtr *)(v5 + 1); /*0x76baa5*/
        v7 = (WDTState *)(v5 + 1); /*0x76baab*/
        if ( a2 - 1 >= 0 ) /*0x76baaf*/
        {
          v14 = a2; /*0x76bab2*/
          do /*0x76bac9*/
          {
            ((WDTState_4 *)((unsigned int)(v7)++))->Constructor(); /*0x76bab8*/
            --v14; /*0x76bac5*/
          }
          while ( v14 ); /*0x76bac9*/
        }
      }
      else
      {
        v6 = (ComPtr *)(0); /*0x76bacd*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x76bb05*/
    {
      if ( a2 >= this->m_8 ) /*0x76bb11*/
        m_8 = this->m_8; /*0x76bb13*/
      for ( i = 0; i < m_8; ++i ) /*0x76bb19*/
        ((ComPtr *)((ComPtr *)((char *)v6 + 8 * i)))->Set(*(unsigned int *)(*(unsigned int *)&this->m_1[3] + 8 * i + 4)); /*0x76bb26*/
      if ( BYTE1(this->m_C) ) /*0x76bb30*/
      {
        v11 = *(void (****)(unsigned int, int))&this->m_1[3]; /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)((unsigned int)v11, 3); /*0x76bb42*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x76bb44*/
      }
      m_8 = a2; /*0x76bb4b*/
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v6); /*0x76bb5a*/
    this->m_8 = m_8; /*0x76bb5d*/
    BYTE1(this->m_C) = a3 == 0; /*0x76bb60*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x76bb69*/
  }
  v12 = this->m_8; /*0x76bb6c*/
  if ( v12 < this->m_10 ) /*0x76bb74*/
    this->m_10 = v12; /*0x76bb76*/
  return (gamemd::AbstractClass **)(1); /*0x76bb79*/

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

  void (***v3)(unsigned int, int); // ecx

  v3 = *(void (****)(unsigned int, int))&this->m_1[3]; /*0x76bc13*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClassrc_ptr; /*0x76bc16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x76bc20*/
  {
    (**v3)((unsigned int)v3, 3); /*0x76bc2f*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x76bc31*/
  }
  BYTE1(this->m_C) = 0; /*0x76bc3c*/
  this->m_8 = 0; /*0x76bc42*/
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    __3_YAXPAX_Z(this); /*0x76bc4c*/
  return (gamemd::DynamicVector *)(this->__pad_0); /*0x76bc56*/

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
