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

// 0x6CF5A0
namespace gamemd {
int SwizzleManagerClass_19::Release(int a2, unsigned int * a3)
{

  int v3; // ebp
  unsigned int *v5; // esi
  unsigned int *v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // ebx

  v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    v5 = a3; /*0x6cf5b4*/
    *((unsigned char *)this + 12) = 0; /*0x6cf5b8*/
    if ( a3 ) /*0x6cf5bd*/
    {
      v9 = a3; /*0x6cf5f3*/
      if ( a2 - 1 >= 0 ) /*0x6cf5f7*/
      {
        v10 = a2; /*0x6cf5f9*/
        do /*0x6cf603*/
        {
          *v9 = 0; /*0x6cf5fa*/
          v9[1] = 0; /*0x6cf5fc*/
          v9 += 2; /*0x6cf5ff*/
          --v10; /*0x6cf602*/
        }
        while ( v10 ); /*0x6cf603*/
      }
    }
    else
    {
      v6 = (unsigned int *)(RA2_OPNEW(8 * a2));
      if ( v6 ) /*0x6cf5d1*/
      {
        v7 = v6; /*0x6cf5d6*/
        if ( a2 - 1 >= 0 ) /*0x6cf5da*/
        {
          v8 = a2; /*0x6cf5dc*/
          do /*0x6cf5e6*/
          {
            *v7 = 0; /*0x6cf5dd*/
            v7[1] = 0; /*0x6cf5df*/
            v7 += 2; /*0x6cf5e2*/
            --v8; /*0x6cf5e5*/
          }
          while ( v8 ); /*0x6cf5e6*/
        }
        v5 = v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x6cf607*/
    if ( v5 ) /*0x6cf60b*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x6cf616*/
      {
        v12 = *((unsigned int *)this + 2); /*0x6cf61b*/
        if ( a2 < v12 ) /*0x6cf620*/
          v12 = a2; /*0x6cf622*/
        v13 = 0; /*0x6cf624*/
        if ( v12 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            v14 = 2 * v13; /*0x6cf62d*/
            v15 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v13++); /*0x6cf636*/
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < v12 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
        if ( *((unsigned char *)this + 13) ) /*0x6cf64f*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x6cf658*/
          *((unsigned int *)this + 1) = 0; /*0x6cf660*/
        }
      }
      *((unsigned int *)this + 1) = v5; /*0x6cf66b*/
      *((unsigned int *)this + 2) = v3; /*0x6cf671*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x6cf674*/
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_VSwizzlePointerClass *))(*(unsigned int *)this->__pad_0 + 12))(this);;
    return 1; /*0x6cf68a*/
  }

}
}
// 0x6CF720
namespace gamemd {
AbstractClass * * SwizzleManagerClass_19::SetCapacity(int a2, unsigned int * a3)
{

  int v3; // ebp
  unsigned int *v5; // edi
  unsigned int *v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    v5 = a3; /*0x6cf734*/
    *((unsigned char *)this + 12) = 0; /*0x6cf738*/
    if ( a3 ) /*0x6cf73d*/
    {
      v9 = a3; /*0x6cf773*/
      if ( a2 - 1 >= 0 ) /*0x6cf777*/
      {
        v10 = a2; /*0x6cf779*/
        do /*0x6cf783*/
        {
          *v9 = 0; /*0x6cf77a*/
          v9[1] = 0; /*0x6cf77c*/
          v9 += 2; /*0x6cf77f*/
          --v10; /*0x6cf782*/
        }
        while ( v10 ); /*0x6cf783*/
      }
    }
    else
    {
      v6 = (unsigned int *)(RA2_OPNEW(8 * a2));
      if ( v6 ) /*0x6cf751*/
      {
        v7 = v6; /*0x6cf756*/
        if ( a2 - 1 >= 0 ) /*0x6cf75a*/
        {
          v8 = a2; /*0x6cf75c*/
          do /*0x6cf766*/
          {
            *v7 = 0; /*0x6cf75d*/
            v7[1] = 0; /*0x6cf75f*/
            v7 += 2; /*0x6cf762*/
            --v8; /*0x6cf765*/
          }
          while ( v8 ); /*0x6cf766*/
        }
        v5 = v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x6cf787*/
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
    if ( *((unsigned int *)this + 1) ) /*0x6cf791*/
    {
      v11 = *((unsigned int *)this + 2); /*0x6cf796*/
      if ( a2 < v11 ) /*0x6cf79b*/
        v11 = a2; /*0x6cf79d*/
      v12 = 0; /*0x6cf79f*/
      if ( v11 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          v13 = 2 * v12; /*0x6cf7a8*/
          v14 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v12++); /*0x6cf7b1*/
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < v11 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
      if ( *((unsigned char *)this + 13) ) /*0x6cf7ca*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x6cf7d3*/
        *((unsigned int *)this + 1) = 0; /*0x6cf7db*/
      }
    }
    *((unsigned int *)this + 1) = v5; /*0x6cf7e6*/
    *((unsigned int *)this + 2) = v3; /*0x6cf7ec*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x6cf7ef*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_VSwizzlePointerClass *))(*(unsigned int *)this->__pad_0 + 12))(this);;
  }
  v15 = *((unsigned int *)this + 2); /*0x6cf7fb*/
  if ( v15 < *((unsigned int *)this + 4) ) /*0x6cf803*/
    *((unsigned int *)this + 4) = v15; /*0x6cf805*/
  return 1; /*0x6cf808*/

}
}
// 0x6CF490
int SwizzleManagerClass::Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2)
{

  if ( !aP1 || !a2 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a2 = aP1; /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/

}
// 0x6CF4B0
int SwizzleManagerClass::AddRef(int a1)
{

  return 1; /*0x6cf4b5*/

}
// 0x6CF4C0
int SwizzleManagerClass::Release(int a1)
{

  return 1; /*0x6cf4c5*/

}
// 0x6CF4D0
int SwizzleManagerClass::Remove(int a1, int a2, int a3)
{

  return -2147467263; /*0x6cf4d5*/

}
// 0x6CF4E0
int SwizzleManagerClass::Lookup(int a1, int a2, int a3, int a4)
{

  return -2147467263; /*0x6cf4e5*/

}
// 0x6CF4F0
namespace gamemd {
void SwizzleManagerClass_19::ClearBuffer()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x6cf4f6*/
  *((unsigned int *)this + 4) = 0; /*0x6cf4f9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x6cf500*/
  {
    RA2_OPDEL(v2); /*0x6cf506*/
    *((unsigned int *)this + 1) = 0; /*0x6cf50e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6cf511*/
  *((unsigned int *)this + 2) = 0; /*0x6cf514*/

}
} // namespace gamemd

// 0x6CF520
namespace gamemd {
unsigned int SwizzleManagerClass_19::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6cf520*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x6cf535*/
  else
    return 0; /*0x6cf527*/

}
} // namespace gamemd

// 0x6CF540
namespace gamemd {
unsigned int * SwizzleManagerClass_19::Lookup(unsigned int * a2, int a3)
{

  int v3; // edx

  v3 = *((unsigned int *)this + 1); /*0x6cf540*/
  *a2 = *(unsigned int *)(v3 + 8 * a3); /*0x6cf54f*/
  a2[1] = *(unsigned int *)(v3 + 8 * a3 + 4); /*0x6cf556*/
  return a2; /*0x6cf551*/

}
} // namespace gamemd

// 0x6CF560
namespace gamemd {
char SwizzleManagerClass_19::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x6cf562*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( v2 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x6cf575*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6cf57b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6cf584*/
    {
      ++v3; /*0x6cf586*/
      v4 += 2; /*0x6cf587*/
      if ( v3 >= v2 ) /*0x6cf58c*/
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

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x6cf69d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x6cf6a3*/
    *((unsigned int *)this + 1) = 0; /*0x6cf6ab*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6cf6ae*/
  *((unsigned int *)this + 2) = 0; /*0x6cf6b1*/

}
} // namespace gamemd

// 0x6CF6C0
namespace gamemd {
int SwizzleManagerClass_19::Init( unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x6cf6c0*/
    return 0; /*0x6cf6c8*/
  v3 = *((unsigned int *)this + 2); /*0x6cf6ce*/
  result = 0; /*0x6cf6d1*/
  if ( v3 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *this; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= v3 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/

}
} // namespace gamemd

// 0x6CF700
namespace gamemd {
unsigned int SwizzleManagerClass_19::Add(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6cf700*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x6cf715*/
  else
    return 0; /*0x6cf707*/

}
} // namespace gamemd

// 0x6CF820
namespace gamemd {
int SwizzleManagerClass_19::FindItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x6cf820*/
  result = 0; /*0x6cf823*/
  if ( v2 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; i += 2 ) /*0x6cf82e*/
  {
    if ( ++result >= v2 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/

}
}
// 0x6CF850
namespace gamemd {
VectorClass_flat * SwizzleManagerClass_19::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_SwizzlePointerClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6cf860*/
  {
    RA2_OPDEL(v3); /*0x6cf868*/
    *(Block + 1) = 0; /*0x6cf870*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6cf87b*/
  *(Block + 2) = 0; /*0x6cf881*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6cf888*/
    RA2_OPDEL(Block); /*0x6cf88b*/
  return (VectorClass *)Block; /*0x6cf895*/

}
} // namespace gamemd

// 0x6CF8A0
namespace gamemd {
DynamicVector * SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_SwizzlePointerClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6cf8b0*/
  {
    RA2_OPDEL(v3); /*0x6cf8b8*/
    *(Block + 1) = 0; /*0x6cf8c0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6cf8cb*/
  *(Block + 2) = 0; /*0x6cf8d1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6cf8d8*/
    RA2_OPDEL(Block); /*0x6cf8db*/
  return (DynamicVector *)Block; /*0x6cf8e5*/

}
} // namespace gamemd
