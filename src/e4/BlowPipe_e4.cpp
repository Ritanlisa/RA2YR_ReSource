// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/BlowPipe_31_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply

// 0x63DC20
namespace gamemd {  // G42.18 ns repair
void BlowPipe_31::ddtor()
{
  void *v2; // eax

  v2 = *&this->q004; /*0x63dc26*/
  this->m_10 = 0; /*0x63dc29*/
  if ( v2 && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x63dc30*/
  {
    operator delete((void *)(v2)); /*0x63dc36*/
    *&this->q004 = 0; /*0x63dc3e*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x63dc41*/
  this->m_8 = 0; /*0x63dc44*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x63DC50
namespace gamemd {
unsigned int BlowPipe_31::Write(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x63dc50*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x63dc65*/
  else
    return 0; /*0x63dc57*/
}
} // namespace gamemd

// 0x63DC70
namespace gamemd {
int BlowPipe_31::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x63dc7a*/
}
} // namespace gamemd

// 0x63DC80
namespace gamemd {
void BlowPipe_23::Clear(void *a1_1)
{
  void *v2; // eax

  v2 = *(void **)&a1_1->q004; /*0x63dc86*/
  a1_1->q010 = 0; /*0x63dc89*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x63dc90*/
  {
    operator delete((void *)(v2)); /*0x63dc96*/
    *(unsigned int *)&a1_1->q004 = 0; /*0x63dc9e*/
  }
  (((unsigned char *)&(*(unsigned int *)&a1_1->q00C))[1]) = 0; /*0x63dca1*/
  a1_1->q008 = 0; /*0x63dca4*/
}
} // namespace gamemd

// 0x63DCB0
namespace gamemd {
unsigned int BlowPipe_23::GetCount(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x63dcb0*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x63dcc5*/
  else
    return 0; /*0x63dcb7*/
}
} // namespace gamemd

// 0x63DCD0
namespace gamemd {
int BlowPipe_23::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x63dcda*/
}
} // namespace gamemd

// 0x63DCE0
namespace gamemd {
void BlowPipe_23::Clear_0()
{
  void *v2; // eax

  v2 = *&this->q004; /*0x63dce6*/
  this->m_10 = 0; /*0x63dce9*/
  if ( v2 && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x63dcf0*/
  {
    operator delete((void *)(v2)); /*0x63dcf6*/
    *&this->q004 = 0; /*0x63dcfe*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x63dd01*/
  this->m_8 = 0; /*0x63dd04*/
}
} // namespace gamemd

// 0x63DD10
namespace gamemd {
unsigned int BlowPipe_23::GetCount_0(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x63dd10*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x63dd25*/
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

  m_8 = this->m_8; /*0x63e312*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63e31d*/
  {
    v3 = 0; /*0x63e31f*/
    if ( m_8 <= 0 ) /*0x63e323*/
      return 1; /*0x63e343*/
    v4 = *&this->q004; /*0x63e325*/
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
    LOBYTE(this->m_C) = 0; /*0x63e366*/
    if ( a3 ) /*0x63e36c*/
      v4 = a3; /*0x63e382*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x63e37e*/
    LOBYTE(this->m_C) = 1; /*0x63e386*/
    if ( v4 ) /*0x63e38a*/
    {
      if ( *&this->q004 ) /*0x63e395*/
      {
        m_8 = this->m_8; /*0x63e39c*/
        if ( a2 < m_8 ) /*0x63e3a1*/
          m_8 = a2; /*0x63e3a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x63e3a9*/
          ++i; /*0x63e3ae*/
        if ( BYTE1(this->m_C) ) /*0x63e3bb*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x63e3c6*/
          *&this->q004 = 0; /*0x63e3ce*/
        }
      }
      *&this->q004 = v4; /*0x63e3d7*/
      this->m_8 = a2; /*0x63e3df*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e3e2*/
      return 1; /*0x63e3e8*/
    }
    else
    {
      return 0; /*0x63e38f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVPlanningNodeClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x63e3f2*/
    return 1; /*0x63e3f8*/
  }

}
} // namespace gamemd

// 0x63E400
namespace gamemd {
void BlowPipe_23::Clear_1()
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x63e40d*/
  {
    operator delete((void *)(*&this->q004)); /*0x63e413*/
    *&this->q004 = 0; /*0x63e41b*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x63e41e*/
  this->m_8 = 0; /*0x63e421*/
}
} // namespace gamemd

// 0x63E430
namespace gamemd {
int BlowPipe_23::FindItemIndex(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(*&this->m_C))) ) /*0x63e430*/
    return 0; /*0x63e438*/
  m_8 = this->m_8; /*0x63e43e*/
  result = 0; /*0x63e441*/
  if ( m_8 <= 0 ) /*0x63e445*/
    return -1; /*0x63e45c*/
  for ( i = *&this->q004; *i != *a2; ++i ) /*0x63e44b*/
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
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x63e470*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x63e485*/
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
    LOBYTE(this->m_C) = 0; /*0x63e4a2*/
    if ( a3 ) /*0x63e4a8*/
      v4 = a3; /*0x63e4be*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x63e4ba*/
    LOBYTE(this->m_C) = 1; /*0x63e4c2*/
    if ( !v4 ) /*0x63e4c6*/
      return 0; /*0x63e53a*/
    if ( *&this->q004 ) /*0x63e4c8*/
    {
      m_8 = this->m_8; /*0x63e4cf*/
      if ( a2 < m_8 ) /*0x63e4d4*/
        m_8 = a2; /*0x63e4d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x63e4dc*/
        ++i; /*0x63e4e1*/
      if ( BYTE1(this->m_C) ) /*0x63e4ee*/
      {
        __3_YAXPAX_Z(*&this->q004); /*0x63e4f9*/
        *&this->q004 = 0; /*0x63e501*/
      }
    }
    *&this->q004 = v4; /*0x63e50a*/
    this->m_8 = a2; /*0x63e512*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e515*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVPlanningNodeClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x63e51e*/
  }
  v7 = this->m_8; /*0x63e521*/
  if ( v7 < this->m_10 ) /*0x63e529*/
    this->m_10 = v7; /*0x63e52b*/
  return 1; /*0x63e52e*/

}
} // namespace gamemd

// 0x63E620
namespace gamemd {
int BlowPipe_31::Read(unsigned int * a2, void *a2_2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = a2_2->q010; /*0x63e620*/
  result = 0; /*0x63e623*/
  if ( m_10 <= 0 ) /*0x63e628*/
    return -1; /*0x63e63f*/
  for ( i = *(unsigned int **)&a2_2->q004; *(unsigned int)(i) != *(unsigned int *)(a2_2); ++i ) /*0x63e62e*/
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

  m_8 = this->m_8; /*0x63e652*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x63e65d*/
  {
    v3 = 0; /*0x63e65f*/
    if ( m_8 <= 0 ) /*0x63e663*/
      return 1; /*0x63e683*/
    v4 = *&this->q004; /*0x63e665*/
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
    LOBYTE(this->m_C) = 0; /*0x63e6a6*/
    if ( a3 ) /*0x63e6ac*/
      v4 = a3; /*0x63e6c2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x63e6be*/
    LOBYTE(this->m_C) = 1; /*0x63e6c6*/
    if ( v4 ) /*0x63e6ca*/
    {
      if ( *&this->q004 ) /*0x63e6d5*/
      {
        m_8 = this->m_8; /*0x63e6dc*/
        if ( a2 < m_8 ) /*0x63e6e1*/
          m_8 = a2; /*0x63e6e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x63e6e9*/
          ++i; /*0x63e6ee*/
        if ( BYTE1(this->m_C) ) /*0x63e6fb*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x63e706*/
          *&this->q004 = 0; /*0x63e70e*/
        }
      }
      *&this->q004 = v4; /*0x63e717*/
      this->m_8 = a2; /*0x63e71f*/
      BYTE1(this->m_C) = a3 == 0; /*0x63e722*/
      return 1; /*0x63e728*/
    }
    else
    {
      return 0; /*0x63e6cf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVEventClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x63e732*/
    return 1; /*0x63e738*/
  }

}
} // namespace gamemd

// 0x63E740
namespace gamemd {
void BlowPipe_23::ddtor()
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x63e74d*/
  {
    operator delete((void *)(*&this->q004)); /*0x63e753*/
    *&this->q004 = 0; /*0x63e75b*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x63e75e*/
  this->m_8 = 0; /*0x63e761*/
}
} // namespace gamemd

// 0x63E770
namespace gamemd {
int BlowPipe_23::Read(unsigned int * a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->q00C))) ) /*0x63e770*/
    return 0; /*0x63e778*/
  m_8 = a2_2->q008; /*0x63e77e*/
  result = 0; /*0x63e781*/
  if ( m_8 <= 0 ) /*0x63e785*/
    return -1; /*0x63e79c*/
  for ( i = *(unsigned int **)&a2_2->q004; *(unsigned int)(i) != *(unsigned int *)(a2_2); ++i ) /*0x63e78b*/
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
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x63e7b0*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x63e7c5*/
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
    LOBYTE(this->m_C) = 0; /*0x63e7e2*/
    if ( a3 ) /*0x63e7e8*/
      v4 = a3; /*0x63e7fe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x63e7fa*/
    LOBYTE(this->m_C) = 1; /*0x63e802*/
    if ( !v4 ) /*0x63e806*/
      return 0; /*0x63e87a*/
    if ( *&this->q004 ) /*0x63e808*/
    {
      m_8 = this->m_8; /*0x63e80f*/
      if ( a2 < m_8 ) /*0x63e814*/
        m_8 = a2; /*0x63e816*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x63e81c*/
        ++i; /*0x63e821*/
      if ( BYTE1(this->m_C) ) /*0x63e82e*/
      {
        __3_YAXPAX_Z(*&this->q004); /*0x63e839*/
        *&this->q004 = 0; /*0x63e841*/
      }
    }
    *&this->q004 = v4; /*0x63e84a*/
    this->m_8 = a2; /*0x63e852*/
    BYTE1(this->m_C) = a3 == 0; /*0x63e855*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVEventClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x63e85e*/
  }
  v7 = this->m_8; /*0x63e861*/
  if ( v7 < this->m_10 ) /*0x63e869*/
    this->m_10 = v7; /*0x63e86b*/
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

  m_10 = this->m_10; /*0x63e8d0*/
  result = 0; /*0x63e8d3*/
  if ( m_10 <= 0 ) /*0x63e8d8*/
    return -1; /*0x63e8ef*/
  for ( i = *&this->q004; *i != *a2; ++i ) /*0x63e8de*/
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
    LOBYTE(this->m_C) = 0; /*0x63eae2*/
    if ( a3 ) /*0x63eae8*/
      v4 = a3; /*0x63eafe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x63eafa*/
    LOBYTE(this->m_C) = 1; /*0x63eb02*/
    if ( !v4 ) /*0x63eb06*/
      return 0; /*0x63eb7a*/
    if ( *&this->q004 ) /*0x63eb08*/
    {
      m_8 = this->m_8; /*0x63eb0f*/
      if ( a2 < m_8 ) /*0x63eb14*/
        m_8 = a2; /*0x63eb16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x63eb1c*/
        ++i; /*0x63eb21*/
      if ( BYTE1(this->m_C) ) /*0x63eb2e*/
      {
        __3_YAXPAX_Z(*&this->q004); /*0x63eb39*/
        *&this->q004 = 0; /*0x63eb41*/
      }
    }
    *&this->q004 = v4; /*0x63eb4a*/
    this->m_8 = a2; /*0x63eb52*/
    BYTE1(this->m_C) = a3 == 0; /*0x63eb55*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVPlanningTokenClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x63eb5e*/
  }
  v7 = this->m_8; /*0x63eb61*/
  if ( v7 < this->m_10 ) /*0x63eb69*/
    this->m_10 = v7; /*0x63eb6b*/
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

  m_10 = this->m_10; /*0x63ec20*/
  result = 0; /*0x63ec23*/
  if ( m_10 <= 0 ) /*0x63ec28*/
    return -1; /*0x63ec3f*/
  for ( i = *&this->q004; *i != *a2; ++i ) /*0x63ec2e*/
  {
    if ( ++result >= m_10 ) /*0x63ec3d*/
      return -1; /*0x63ec3d*/
  }
  return result; /*0x63ec42*/
}
} // namespace gamemd

// 0x63ED90
namespace gamemd {
VectorClass_flat * BlowPipe_23::Destructor(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x63ed93*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63ed96*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x63eda0*/
  {
    operator delete((void *)(v3)); /*0x63eda8*/
    *&Block->__pad_004 = 0; /*0x63edb0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x63edbb*/
  Block->u32_8 = 0; /*0x63edc1*/
  if ( (a2 & 1) != 0 ) /*0x63edc8*/
    operator delete((void *)(Block)); /*0x63edcb*/
  return Block->tail_0; /*0x63edd5*/
}
} // namespace gamemd

// 0x63EDE0
namespace gamemd {
DynamicVector * BlowPipe_31::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x63ede3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63ede6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x63edf0*/
  {
    operator delete((void *)(v3)); /*0x63edf8*/
    *&Block->__pad_004 = 0; /*0x63ee00*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x63ee0b*/
  Block->u32_8 = 0; /*0x63ee11*/
  if ( (a2 & 1) != 0 ) /*0x63ee18*/
    operator delete((void *)(Block)); /*0x63ee1b*/
  return Block->tail_0; /*0x63ee25*/
}
} // namespace gamemd

// 0x63EE30
namespace gamemd {
VectorClass_flat * BlowPipe_23::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x63ee33*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63ee36*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x63ee40*/
  {
    operator delete((void *)(v3)); /*0x63ee48*/
    *&Block->__pad_004 = 0; /*0x63ee50*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x63ee5b*/
  Block->u32_8 = 0; /*0x63ee61*/
  if ( (a2 & 1) != 0 ) /*0x63ee68*/
    operator delete((void *)(Block)); /*0x63ee6b*/
  return Block->tail_0; /*0x63ee75*/
}
} // namespace gamemd

// 0x63EE80
namespace gamemd {
DynamicVector * BlowPipe_23::Destructor_0(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x63ee83*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63ee86*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x63ee90*/
  {
    operator delete((void *)(v3)); /*0x63ee98*/
    *&Block->__pad_004 = 0; /*0x63eea0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x63eeab*/
  Block->u32_8 = 0; /*0x63eeb1*/
  if ( (a2 & 1) != 0 ) /*0x63eeb8*/
    operator delete((void *)(Block)); /*0x63eebb*/
  return Block->tail_0; /*0x63eec5*/
}
} // namespace gamemd

// 0x63EF20
namespace gamemd {
DynamicVector * BlowPipe_23::Destructor_1(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x63ef23*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x63ef26*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x63ef30*/
  {
    operator delete((void *)(v3)); /*0x63ef38*/
    *&Block->__pad_004 = 0; /*0x63ef40*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x63ef4b*/
  Block->u32_8 = 0; /*0x63ef51*/
  if ( (a2 & 1) != 0 ) /*0x63ef58*/
    operator delete((void *)(Block)); /*0x63ef5b*/
  return Block->tail_0; /*0x63ef65*/
}
} // namespace gamemd
