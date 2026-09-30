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

  int v3; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // ebx
  unsigned int *v7; // esi
  unsigned int *v8; // esi
  int v9; // ebx
  int i; // esi
  void (***v11)(unsigned int, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x76ba73*/
  if ( a2 ) /*0x76ba7d*/
  {
    *((unsigned char *)this + 12) = 0; /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = a3 + 1; /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        v9 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ((ComPtr *)(v8))->Constructor(); /*0x76bae6*/
          *v8 = &vt_rc_ptr_WDTTerritory; /*0x76baeb*/
          v8 += 2; /*0x76baf1*/
          --v9; /*0x76baf4*/
        }
        while ( v9 ); /*0x76baf5*/
        v8 = a3 + 1; /*0x76baf7*/
      }
      v6 = v8; /*0x76bafb*/
    }
    else
    {
      v5 = (unsigned int *)(RA2_OPNEW(8 * a2 + 4));
      if ( v5 ) /*0x76baa1*/
      {
        *v5 = a2; /*0x76baa3*/
        v6 = v5 + 1; /*0x76baa5*/
        v7 = v5 + 1; /*0x76baab*/
        if ( a2 - 1 >= 0 ) /*0x76baaf*/
        {
          v14 = a2; /*0x76bab2*/
          do /*0x76bac9*/
          {
            WDTState_4::Constructor(v7); /*0x76bab8*/
            v7 += 2; /*0x76bac1*/
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
    *((unsigned char *)this + 12) = 1; /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( *((unsigned int *)this + 1) ) /*0x76bb05*/
    {
      if ( a2 >= *((unsigned int *)this + 2) ) /*0x76bb11*/
        v3 = *((unsigned int *)this + 2); /*0x76bb13*/
      for ( i = 0; i < v3; ++i ) /*0x76bb19*/
        ((ComPtr *)(&v6[2 * i]))->Set(*(unsigned int *)(*((unsigned int *)this + 1) + 8 * i + 4)); /*0x76bb26*/
      if ( *((unsigned char *)this + 13) ) /*0x76bb30*/
      {
        v11 = (void (***)(unsigned int, int))*((unsigned int *)this + 1); /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
        *((unsigned int *)this + 1) = 0; /*0x76bb44*/
      }
      v3 = a2; /*0x76bb4b*/
    }
    *((unsigned int *)this + 1) = v6; /*0x76bb5a*/
    *((unsigned int *)this + 2) = v3; /*0x76bb5d*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x76bb60*/
  }
  else
  {
    char WDTState_4::Release(_DynamicVectorClass_V_rc_ptr_VWDTTerritory *this, int a2, unsigned int *a3)
  }
  v12 = *((unsigned int *)this + 2); /*0x76bb6c*/
  if ( v12 < *((unsigned int *)this + 4) ) /*0x76bb74*/
    *((unsigned int *)this + 4) = v12; /*0x76bb76*/
  return 1; /*0x76bb79*/

}
}
// 0x76B710
namespace gamemd {
int WDTState_4::ddtor()
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))((char *)this + 4); /*0x76b716*/
  *((unsigned int *)this + 4) = 0; /*0x76b719*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x76b720*/
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
    *((unsigned int *)this + 1) = 0; /*0x76b72f*/
  }
  *((unsigned char *)this + 13) = 0; /*0x76b732*/
  *((unsigned int *)this + 2) = 0; /*0x76b735*/
  return result; /*0x76b738*/

}
} // namespace gamemd

// 0x76B740
namespace gamemd {
unsigned int WDTState_4::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x76b740*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/

}
} // namespace gamemd

// 0x76BB90
namespace gamemd {
int WDTState_4::Read( int a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x76bb90*/
  result = 0; /*0x76bb93*/
  if ( v2 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  for ( i = (unsigned int *)(*((char *)this + 1) + 4); *i != *(unsigned int *)(this + 4); i += 2 ) /*0x76bba1*/
  {
    if ( ++result >= v2 ) /*0x76bbb1*/
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

  v3 = (unsigned int)((void (***)(unsigned int, int))*(Block + 1));
  *Block = (unsigned int)(&vt_VectorClass_rc_ptr_WDTTerritory);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x76bc20*/
  {
    (**v3)(v3, 3); /*0x76bc2f*/
    *(Block + 1) = 0; /*0x76bc31*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x76bc3c*/
  *(Block + 2) = 0; /*0x76bc42*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x76bc49*/
    RA2_OPDEL(Block); /*0x76bc4c*/
  return (DynamicVector *)Block; /*0x76bc56*/

}
} // namespace gamemd

// 0x76BC60
namespace gamemd {
int WDTState_4::Constructor()
{

  ((ComPtr *)(this))->Constructor(); /*0x76bc63*/
  *this = &vt_rc_ptr_WDTTerritory; /*0x76bc68*/
  return this; /*0x76bc70*/

}
} // namespace gamemd
