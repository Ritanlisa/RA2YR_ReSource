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
  void * v6;
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // ebx

  v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    v5 = a3; /*0x6cf5b4*/
        *((unsigned char *)this + 12) = 0;
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
      v6 = (void *)((int)(RA2_OPNEW(8 * a2)));
      if ( v6 ) /*0x6cf5d1*/
      {
        v7 = (unsigned int *)v6; /*0x6cf5d6*/
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
        v5 = (unsigned int *)v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( v5 ) /*0x6cf60b*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v12 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6cf620*/
          m_8 = a2; /*0x6cf622*/
        v13 = 0; /*0x6cf624*/
        if ( m_8 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            v14 = 2 * v13; /*0x6cf62d*/
                        v15 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v13++);
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < m_8 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x6cf658*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v5;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
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
  void * v6;
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    v5 = a3; /*0x6cf734*/
        *((unsigned char *)this + 12) = 0;
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
      v6 = (void *)((int)(RA2_OPNEW(8 * a2)));
      if ( v6 ) /*0x6cf751*/
      {
        v7 = (unsigned int *)v6; /*0x6cf756*/
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
        v5 = (unsigned int *)v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6cf79b*/
        m_8 = a2; /*0x6cf79d*/
      v12 = 0; /*0x6cf79f*/
      if ( m_8 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          v13 = 2 * v12; /*0x6cf7a8*/
                    v14 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v12++);
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < m_8 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x6cf7d3*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v15 = *((unsigned int *)this + 2);
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
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
void SwizzleManagerClass_19::ClearBuffer(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x6cf4f6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6cf506*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6CF520
namespace gamemd {
unsigned int SwizzleManagerClass_19::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x6cf527*/
}
} // namespace gamemd

// 0x6CF540
namespace gamemd {
unsigned int * SwizzleManagerClass_19::Lookup(unsigned int * a2, int a3)
{
  int v3; // edx

    v3 = *((unsigned int *)this + 4);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( m_8 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
void SwizzleManagerClass_19::ddtor(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x6cf6a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6CF6C0
namespace gamemd {
int SwizzleManagerClass_19::Init(unsigned int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x6cf6c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x6cf6d1*/
  if ( m_8 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= m_8 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/
}
} // namespace gamemd

// 0x6CF700
namespace gamemd {
unsigned int SwizzleManagerClass_19::Add(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x6cf823*/
  if ( m_10 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/
}
}
// 0x6CF850
namespace gamemd {
VectorClass_flat * SwizzleManagerClass_19::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_SwizzlePointerClass_vftable; /*0x6cf856*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6cf868*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6cf888*/
    RA2_OPDEL(); /*0x6cf88b*/
  return this; /*0x6cf895*/
}
} // namespace gamemd

// 0x6CF8A0
namespace gamemd {
DynamicVector * SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_SwizzlePointerClass_vftable; /*0x6cf8a6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6cf8b8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6cf8d8*/
    RA2_OPDEL(); /*0x6cf8db*/
  return this; /*0x6cf8e5*/
}
} // namespace gamemd
