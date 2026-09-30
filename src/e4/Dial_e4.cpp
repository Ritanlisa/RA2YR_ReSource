// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dial8Class_48_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4A7D20
namespace gamemd {
void Dial8Class_48::ClearBuffer()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x4a7d26*/
  *((unsigned int *)this + 4) = 0; /*0x4a7d29*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x4a7d30*/
  {
    RA2_OPDEL(v2); /*0x4a7d36*/
    *((unsigned int *)this + 1) = 0; /*0x4a7d3e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4a7d41*/
  *((unsigned int *)this + 2) = 0; /*0x4a7d44*/

}
} // namespace gamemd

// 0x4A7D50
namespace gamemd {
unsigned int Dial8Class_48::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4a7d50*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4a7d65*/
  else
    return 0; /*0x4a7d57*/

}
} // namespace gamemd

// 0x4A7D70
namespace gamemd {
int Dial8Class_48::Seek( int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * this); /*0x4a7d7a*/

}
} // namespace gamemd

// 0x4A7D80
namespace gamemd {
char Dial8Class_48::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x4a7d82*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( v2 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x4a7d95*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a7d9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= v2 ) /*0x4a7dac*/
        return 1; /*0x4a7dac*/
    }
  }
  return 0; /*0x4a7dae*/

}
} // namespace gamemd

// 0x4A7DC0
namespace gamemd {
char Dial8Class_48::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x4a7dd6*/
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a7dee*/
    *((unsigned char *)this + 12) = 1; /*0x4a7df6*/
    if ( v4 ) /*0x4a7dfa*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x4a7e05*/
      {
        v6 = *((unsigned int *)this + 2); /*0x4a7e0c*/
        if ( a2 < v6 ) /*0x4a7e11*/
          v6 = a2; /*0x4a7e13*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x4a7e19*/
          ++i; /*0x4a7e1e*/
        if ( *((unsigned char *)this + 13) ) /*0x4a7e2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a7e36*/
          *((unsigned int *)this + 1) = 0; /*0x4a7e3e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x4a7e47*/
      *((unsigned int *)this + 2) = a2; /*0x4a7e4f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x4a7e52*/
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4a7e62*/
    return 1; /*0x4a7e68*/
  }

}
} // namespace gamemd

// 0x4A7E70
namespace gamemd {
void Dial8Class_48::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x4a7e7d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x4a7e83*/
    *((unsigned int *)this + 1) = 0; /*0x4a7e8b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4a7e8e*/
  *((unsigned int *)this + 2) = 0; /*0x4a7e91*/

}
} // namespace gamemd

// 0x4A7EA0
namespace gamemd {
int Dial8Class_48::Read( unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x4a7ea0*/
    return 0; /*0x4a7ea8*/
  v3 = *((unsigned int *)this + 2); /*0x4a7eae*/
  result = 0; /*0x4a7eb1*/
  if ( v3 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *this; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= v3 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/

}
} // namespace gamemd

// 0x4A7EE0
namespace gamemd {
unsigned int Dial8Class_48::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4a7ee0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4a7ef5*/
  else
    return 0; /*0x4a7ee7*/

}
} // namespace gamemd

// 0x4A7F00
namespace gamemd {
char Dial8Class_48::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x4a7f12*/
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a7f2a*/
    *((unsigned char *)this + 12) = 1; /*0x4a7f32*/
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
    if ( *((unsigned int *)this + 1) ) /*0x4a7f38*/
    {
      v5 = *((unsigned int *)this + 2); /*0x4a7f3f*/
      if ( a2 < v5 ) /*0x4a7f44*/
        v5 = a2; /*0x4a7f46*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x4a7f4c*/
        ++i; /*0x4a7f51*/
      if ( *((unsigned char *)this + 13) ) /*0x4a7f5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a7f69*/
        *((unsigned int *)this + 1) = 0; /*0x4a7f71*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x4a7f7a*/
    *((unsigned int *)this + 2) = a2; /*0x4a7f82*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x4a7f85*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4a7f8e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x4a7f91*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x4a7f99*/
    *((unsigned int *)this + 4) = v7; /*0x4a7f9b*/
  return 1; /*0x4a7f9e*/

}
} // namespace gamemd

// 0x4A7FB0
namespace gamemd {
int Dial8Class_48::FindItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x4a7fb0*/
  result = 0; /*0x4a7fb3*/
  if ( v2 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x4a7fbe*/
  {
    if ( ++result >= v2 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/

}
}
// 0x4A8030
namespace gamemd {
VectorClass_flat * Dial8Class_48::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_DiskLaserClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4a8040*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8048*/
    *(Block + 1) = 0; /*0x4a8050*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4a805b*/
  *(Block + 2) = 0; /*0x4a8061*/
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    __3_YAXPAX_Z(Block); /*0x4a806b*/
  return (VectorClass *)Block; /*0x4a8075*/

}
} // namespace gamemd

// 0x4A8080
namespace gamemd {
DynamicVector * Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_DiskLaserClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4a8090*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8098*/
    *(Block + 1) = 0; /*0x4a80a0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4a80ab*/
  *(Block + 2) = 0; /*0x4a80b1*/
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    __3_YAXPAX_Z(Block); /*0x4a80bb*/
  return (DynamicVector *)Block; /*0x4a80c5*/

}
} // namespace gamemd
