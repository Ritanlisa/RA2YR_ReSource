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
        *((unsigned int *)this + 48) = 0;
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
          *(unsigned int *)v8->__pad_0 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76baeb*/
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
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x76ba97*/
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
            WDTState_4::Constructor((unsigned int)(v7)++); /*0x76bab8*/
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
        *((unsigned int *)this + 48) = 1;
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
        if ( *((unsigned int *)this + 1) )
    {
            if ( a2 >= *((unsigned int *)this + 2) )
                v3 = *((unsigned int *)this + 2);
      for ( i = 0; i < m_8; ++i ) /*0x76bb19*/
                ComPtr::Set(&v6[2 * i], *(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4));
            if ( *((unsigned int *)this + 52) )
      {
                v11 = (void (***)(unsigned int, int))*((unsigned int *)this + 1);
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
                *((unsigned int *)this + 1) = 0;
      }
      m_8 = a2; /*0x76bb4b*/
    }
        *((unsigned int *)this + 1) = v6;
        *((unsigned int *)this + 2) = v3;
        *((unsigned int *)this + 52) = a3 == 0;
  }
  else
  {
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 12))(this);
  }
    v12 = *((unsigned int *)this + 2);
    if ( v12 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v12;
  return 1; /*0x76bb79*/
}
}
// 0x76B710
namespace gamemd {
int WDTState_4::ddtor(void *a1 = 0)
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->q004; /*0x76b716*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x76b738*/
}
} // namespace gamemd

// 0x76B740
namespace gamemd {
unsigned int WDTState_4::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x76b747*/
}
} // namespace gamemd

// 0x76BB90
namespace gamemd {
int WDTState_4::Read(int a2, void *a1 = 0)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x76bb93*/
  if ( m_10 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
    for ( i = (unsigned int *)(*((unsigned int *)this + 4) + 4); *i != *(unsigned int *)(a2 + 4); i += 2 )
  {
    if ( ++result >= m_10 ) /*0x76bbb1*/
      return -1; /*0x76bbb1*/
  }
  return result; /*0x76bbb6*/
}
}
// 0x76BC10
namespace gamemd {
DynamicVector * WDTState_4::QueryInterface(char a2)
{
  void (***v3)(unsigned int, int); // ecx

  v3 = (unsigned int)(*(void (****)(unsigned int, int))&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_rc_ptr_WDTTerritory_vftable; /*0x76bc16*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    (**v3)(v3, 3); /*0x76bc2f*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    RA2_OPDEL(); /*0x76bc4c*/
  return this; /*0x76bc56*/
}
} // namespace gamemd

// 0x76BC60
namespace gamemd {
int WDTState_4::Constructor(int a2, void *a1 = 0)
{
  ComPtr::Constructor(); /*0x76bc63*/
  *(unsigned int *)this->__pad_0 = (void*)&rc_ptr_WDTTerritory_vftable; /*0x76bc68*/
  return this; /*0x76bc70*/
}
} // namespace gamemd
