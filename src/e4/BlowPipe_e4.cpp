// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/BlowPipe_31_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x63DC20
namespace gamemd {
void BlowPipe_31::ddtor(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x63dc26*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x63dc36*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63DC50
namespace gamemd {
unsigned int BlowPipe_31::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63dc57*/
}
} // namespace gamemd

// 0x63DC70
namespace gamemd {
int BlowPipe_31::Seek(int a2, void *a1 = 0)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x63DC80
namespace gamemd {
void BlowPipe_23::Clear(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x63dc86*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x63dc96*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63DCB0
namespace gamemd {
unsigned int BlowPipe_23::GetCount(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63dcb7*/
}
} // namespace gamemd

// 0x63DCD0
namespace gamemd {
int BlowPipe_23::Seek(int a2, void *a1 = 0)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x63DCE0
namespace gamemd {
void BlowPipe_23::Clear_0()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x63dce6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x63dcf6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63DD10
namespace gamemd {
unsigned int BlowPipe_23::GetCount_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63dd17*/
}
} // namespace gamemd

// 0x63E310
namespace gamemd {
char BlowPipe_31::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63e31d*/
  {
    v3 = 0; /*0x63e31f*/
    if ( m_8 <= 0 ) /*0x63e323*/
      return 1; /*0x63e343*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x63e32b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x63e334*/
    {
      ++v3; /*0x63e336*/
      ++v4; /*0x63e337*/
      if ( v3 >= m_8 ) /*0x63e33c*/
        return 1; /*0x63e33c*/
    }
  }
  return 0; /*0x63e33e*/
}
} // namespace gamemd

// 0x63E350
namespace gamemd {
char BlowPipe_23::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e35c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e36c*/
      v4 = a3; /*0x63e382*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e37e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x63e38a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x63e3a1*/
          m_8 = a2; /*0x63e3a3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x63e3ae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x63e3c6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x63e3e8*/
    }
    else
    {
      return 0; /*0x63e38f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x63e3f8*/
  }
}
} // namespace gamemd

// 0x63E400
namespace gamemd {
void BlowPipe_23::Clear_1()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x63e413*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63E430
namespace gamemd {
int BlowPipe_23::FindItemIndex(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x63e438*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x63e441*/
  if ( m_8 <= 0 ) /*0x63e445*/
    return -1; /*0x63e45c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x63e44b*/
  {
    if ( ++result >= m_8 ) /*0x63e45a*/
      return -1; /*0x63e45a*/
  }
  return result; /*0x63e43a*/
}
} // namespace gamemd

// 0x63E470
namespace gamemd {
unsigned int BlowPipe_23::GetCount_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63e477*/
}
} // namespace gamemd

// 0x63E490
namespace gamemd {
char BlowPipe_31::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e49c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e4a8*/
      v4 = a3; /*0x63e4be*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e4ba*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x63e4c6*/
      return 0; /*0x63e53a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x63e4d4*/
        m_8 = a2; /*0x63e4d6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x63e4e1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x63e4f9*/
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
  return 1; /*0x63e52e*/
}
} // namespace gamemd

// 0x63E620
namespace gamemd {
int BlowPipe_31::Read(int a2, void *a1 = 0)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x63e623*/
  if ( m_10 <= 0 ) /*0x63e628*/
    return -1; /*0x63e63f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x63e63d*/
      return -1; /*0x63e63d*/
  }
  return result; /*0x63e642*/
}
}
// 0x63E650
namespace gamemd {
char BlowPipe_23::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63e65d*/
  {
    v3 = 0; /*0x63e65f*/
    if ( m_8 <= 0 ) /*0x63e663*/
      return 1; /*0x63e683*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x63e66b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x63e674*/
    {
      ++v3; /*0x63e676*/
      ++v4; /*0x63e677*/
      if ( v3 >= m_8 ) /*0x63e67c*/
        return 1; /*0x63e67c*/
    }
  }
  return 0; /*0x63e67e*/
}
} // namespace gamemd

// 0x63E690
namespace gamemd {
char BlowPipe_23::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x63e69c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e6ac*/
      v4 = a3; /*0x63e6c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e6be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x63e6ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x63e6e1*/
          m_8 = a2; /*0x63e6e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x63e6ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x63e706*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x63e728*/
    }
    else
    {
      return 0; /*0x63e6cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x63e738*/
  }
}
} // namespace gamemd

// 0x63E740
namespace gamemd {
void BlowPipe_23::ddtor(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x63e753*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x63E770
namespace gamemd {
int BlowPipe_23::Read(int a2, void *a1 = 0)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x63e778*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x63e781*/
  if ( m_8 <= 0 ) /*0x63e785*/
    return -1; /*0x63e79c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x63e78b*/
  {
    if ( ++result >= m_8 ) /*0x63e79a*/
      return -1; /*0x63e79a*/
  }
  return result; /*0x63e77a*/
}
} // namespace gamemd

// 0x63E7B0
namespace gamemd {
unsigned int BlowPipe_23::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x63e7b7*/
}
} // namespace gamemd

// 0x63E7D0
namespace gamemd {
char BlowPipe_23::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e7dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63e7e8*/
      v4 = a3; /*0x63e7fe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63e7fa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x63e806*/
      return 0; /*0x63e87a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x63e814*/
        m_8 = a2; /*0x63e816*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x63e821*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x63e839*/
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
  return 1; /*0x63e86e*/
}
} // namespace gamemd

// 0x63E8D0
namespace gamemd {
int BlowPipe_23::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x63e8d3*/
  if ( m_10 <= 0 ) /*0x63e8d8*/
    return -1; /*0x63e8ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x63e8ed*/
      return -1; /*0x63e8ed*/
  }
  return result; /*0x63e8f2*/
}
}
// 0x63EAD0
namespace gamemd {
char BlowPipe_23::SetCapacity_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63eadc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x63eae8*/
      v4 = a3; /*0x63eafe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x63eafa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x63eb06*/
      return 0; /*0x63eb7a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x63eb14*/
        m_8 = a2; /*0x63eb16*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x63eb21*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x63eb39*/
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
  return 1; /*0x63eb6e*/
}
} // namespace gamemd

// 0x63EC20
namespace gamemd {
int BlowPipe_23::FindItemIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x63ec23*/
  if ( m_10 <= 0 ) /*0x63ec28*/
    return -1; /*0x63ec3f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x63ec3d*/
      return -1; /*0x63ec3d*/
  }
  return result; /*0x63ec42*/
}
} // namespace gamemd

// 0x63ED90
namespace gamemd {
VectorClass_flat * BlowPipe_23::Destructor(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_PlanningNodeClass___vftable; /*0x63ed96*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63eda8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63edc8*/
    RA2_OPDEL(); /*0x63edcb*/
  return this; /*0x63edd5*/
}
} // namespace gamemd

// 0x63EDE0
namespace gamemd {
DynamicVector * BlowPipe_31::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_PlanningNodeClass___vftable; /*0x63ede6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63edf8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ee18*/
    RA2_OPDEL(); /*0x63ee1b*/
  return this; /*0x63ee25*/
}
} // namespace gamemd

// 0x63EE30
namespace gamemd {
VectorClass_flat * BlowPipe_23::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_EventClass___vftable; /*0x63ee36*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ee48*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ee68*/
    RA2_OPDEL(); /*0x63ee6b*/
  return this; /*0x63ee75*/
}
} // namespace gamemd

// 0x63EE80
namespace gamemd {
DynamicVector * BlowPipe_23::Destructor_0(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_EventClass___vftable; /*0x63ee86*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ee98*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63eeb8*/
    RA2_OPDEL(); /*0x63eebb*/
  return this; /*0x63eec5*/
}
} // namespace gamemd

// 0x63EF20
namespace gamemd {
DynamicVector * BlowPipe_23::Destructor_1(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_PlanningTokenClass___vftable; /*0x63ef26*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x63ef38*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x63ef58*/
    RA2_OPDEL(); /*0x63ef5b*/
  return this; /*0x63ef65*/
}
} // namespace gamemd
