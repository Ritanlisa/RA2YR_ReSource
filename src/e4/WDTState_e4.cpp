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
namespace gamemd {  // G42.18 ns repair
char WDTState_4::Release(int a2, unsigned int * a3)
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
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = (ComPtr *)(a3 + 1); /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        v9 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ComPtr::Constructor(v8); /*0x76bae6*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EBFA4) */  /*0x76baeb*/
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
            WDTState_4::Constructor(v7++); /*0x76bab8*/
            --v14; /*0x76bac5*/
          }
          while ( v14 ); /*0x76bac9*/
        }
      }
      else
      {
        v6 = 0; /*0x76bacd*/
      }
    }
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( *&this->q004 ) /*0x76bb05*/
    {
      if ( a2 >= this->Capacity ) /*0x76bb11*/
        m_8 = this->Capacity; /*0x76bb13*/
      for ( i = 0; i < m_8; ++i ) /*0x76bb19*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(unsigned int *)(*&this->q004 + 8 * i + 4)); /*0x76bb26*/
      if ( BYTE1(this->m_C) ) /*0x76bb30*/
      {
        v11 = *(void (****)(unsigned int, int))&this->q004; /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
        *&this->q004 = 0; /*0x76bb44*/
      }
      m_8 = a2; /*0x76bb4b*/
    }
    *&this->q004 = v6; /*0x76bb5a*/
    this->Capacity = m_8; /*0x76bb5d*/
    BYTE1(this->m_C) = a3 == 0; /*0x76bb60*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *))(this->__pad_0 + 12))(this); /*0x76bb69*/
  }
  v12 = this->Capacity; /*0x76bb6c*/
  if ( v12 < this->q010 ) /*0x76bb74*/
    this->q010 = v12; /*0x76bb76*/
  return 1; /*0x76bb79*/

}
}  // G42.18 ns repair
// 0x76B710
namespace gamemd {
int WDTState_4::ddtor(void *a1)
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->q004; /*0x76b716*/
  this->q010 = 0; /*0x76b719*/
  if ( v2 && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x76b720*/
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
    *&this->q004 = 0; /*0x76b72f*/
  }
  (this->IsAllocated) = 0; /*0x76b732*/
  this->Capacity = 0; /*0x76b735*/
  return result; /*0x76b738*/
}
} // namespace gamemd

// 0x76B740
namespace gamemd {
unsigned int WDTState_4::Write(int a2)
{
  if ( (this->m_C) ) /*0x76b740*/
    return (unsigned int)(a2 - *&this->q004) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/
}
} // namespace gamemd

// 0x76BB90
namespace gamemd {
int WDTState_4::Read(int a2, void *a2_2, void *a3)
{

  int m_10 = a2_2->q010; // edx /*0x76bb90*/
  int result = 0; // eax /*0x76bb93*/
  if ( m_10 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)(*(unsigned int *)&a2_2->q004 + 4); *i != *(unsigned int *)((unsigned int)(a2_2)+ 4); i += 2 ) /*0x76bba1*/
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

  v3 = *(void (****)(unsigned int, int))&Block->__pad_004; /*0x76bc13*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_18554b) */  /*0x76bc16*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x76bc20*/
  {
    (**v3)(v3, 3); /*0x76bc2f*/
    *&Block->__pad_004 = 0; /*0x76bc31*/
  }
  (Block->u32_D) = 0; /*0x76bc3c*/
  Block->Capacity = 0; /*0x76bc42*/
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    operator delete((Block)); /*0x76bc4c*/
  return Block->tail_0; /*0x76bc56*/
}
} // namespace gamemd

// 0x76BC60
namespace gamemd {
int WDTState_4::Constructor(void *a1, void *a2, void *a3, void *a4)
{

  ComPtr::Constructor((ComPtr *)this); /*0x76bc63*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_5878c0) */  /*0x76bc68*/
  return this->__pad_0; /*0x76bc70*/

}
} // namespace gamemd
