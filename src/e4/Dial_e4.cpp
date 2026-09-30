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
void Dial8Class_48::ClearBuffer(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x4a7d26*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x4a7d36*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4A7D50
namespace gamemd {
unsigned int Dial8Class_48::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4a7d57*/
}
} // namespace gamemd

// 0x4A7D70
namespace gamemd {
int Dial8Class_48::Seek(int a2, void *a1 = 0)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4A7D80
namespace gamemd {
char Dial8Class_48::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( m_8 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a7d9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= m_8 ) /*0x4a7dac*/
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
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4a7dee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4a7dfa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4a7e11*/
          m_8 = a2; /*0x4a7e13*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4a7e1e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x4a7e36*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4a7e68*/
  }
}
} // namespace gamemd

// 0x4A7E70
namespace gamemd {
void Dial8Class_48::ddtor(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x4a7e83*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4A7EA0
namespace gamemd {
int Dial8Class_48::Read(int a2, void *a1 = 0)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4a7ea8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4a7eb1*/
  if ( m_8 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= m_8 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/
}
} // namespace gamemd

// 0x4A7EE0
namespace gamemd {
unsigned int Dial8Class_48::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4a7ee7*/
}
} // namespace gamemd

// 0x4A7F00
namespace gamemd {
char Dial8Class_48::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4a7f2a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x4a7f44*/
        m_8 = a2; /*0x4a7f46*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4a7f51*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x4a7f69*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4a7f9e*/
}
} // namespace gamemd

// 0x4A7FB0
namespace gamemd {
int Dial8Class_48::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4a7fb3*/
  if ( m_10 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/
}
}
// 0x4A8030
namespace gamemd {
VectorClass_flat * Dial8Class_48::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DiskLaserClass___vftable; /*0x4a8036*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4a8048*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    RA2_OPDEL(); /*0x4a806b*/
  return this; /*0x4a8075*/
}
} // namespace gamemd

// 0x4A8080
namespace gamemd {
DynamicVector * Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DiskLaserClass___vftable; /*0x4a8086*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4a8098*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    RA2_OPDEL(); /*0x4a80bb*/
  return this; /*0x4a80c5*/
}
} // namespace gamemd
