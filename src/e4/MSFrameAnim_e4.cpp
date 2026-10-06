// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSFrameAnim_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/MSFont_18_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VtableStub_e4.hpp_e4.hpp"

// 0x769BD0
namespace gamemd {
void * MSFrameAnim::QueryInterface(unsigned int * Block, char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_MSFrameAnim;
  VtableStub::sub_5CB6C0(this); /*0x769bd9*/
  if ( (a2 & 1) != 0 ) /*0x769be3*/
    __3_YAXPAX_Z(this); /*0x769be6*/
  return this->__pad_0; /*0x769bf0*/

}
}
// 0x769FE0
namespace gamemd {
AbstractClass * * MSFrameAnim::setFrameRate(int a2, unsigned int * a3)
{

  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  MSFrameAnim *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (***v11)(unsigned int, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x769fe3*/
  if ( a2 ) /*0x769fed*/
  {
    LOBYTE(this->m_C) = 0; /*0x769ff7*/
    if ( a3 ) /*0x769ffd*/
    {
      *a3 = a2; /*0x76a041*/
      v8 = (ComPtr *)(a3 + 1); /*0x76a043*/
      if ( a2 - 1 >= 0 ) /*0x76a04f*/
      {
        v9 = a2; /*0x76a051*/
        do /*0x76a065*/
        {
          ((ComPtr *)(v8))->Constructor(); /*0x76a056*/
          *(unsigned int *)v8->__pad_0 = (unsigned int)(&vt_rc_ptr); /*0x76a05b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x76a061*/
          --v9; /*0x76a064*/
        }
        while ( v9 ); /*0x76a065*/
        v8 = (ComPtr *)(a3 + 1); /*0x76a067*/
      }
      v6 = v8; /*0x76a06b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x76a007*/
      if ( v5 ) /*0x76a011*/
      {
        *v5 = a2; /*0x76a013*/
        v6 = (ComPtr *)(v5 + 1); /*0x76a015*/
        v7 = (MSFrameAnim *)(v5 + 1); /*0x76a01b*/
        if ( a2 - 1 >= 0 ) /*0x76a01f*/
        {
          v14 = a2; /*0x76a022*/
          do /*0x76a039*/
          {
            MSFrameAnim::drawFrame( (void *)(v7)); /*0x76a028*/
            v7 = (MSFrameAnim *)((char *)v7 + 8); /*0x76a031*/
            --v14; /*0x76a035*/
          }
          while ( v14 ); /*0x76a039*/
        }
      }
      else
      {
        v6 = (ComPtr *)(0); /*0x76a03d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x76a06f*/
    if ( !v6 ) /*0x76a073*/
      return 0; /*0x76a0f6*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x76a075*/
    {
      if ( a2 >= this->m_8 ) /*0x76a081*/
        m_8 = this->m_8; /*0x76a083*/
      for ( i = 0; i < m_8; ++i ) /*0x76a089*/
        ((ComPtr *)((ComPtr *)((char *)v6 + 8 * i)))->Set(*(unsigned int *)(*(unsigned int *)&this->m_1[3] + 8 * i + 4)); /*0x76a096*/
      if ( BYTE1(this->m_C) ) /*0x76a0a0*/
      {
        v11 = *(void (****)(unsigned int, int))&this->m_1[3]; /*0x76a0a7*/
        if ( v11 ) /*0x76a0ac*/
          (**v11)(v11, 3); /*0x76a0b2*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x76a0b4*/
      }
      m_8 = a2; /*0x76a0bb*/
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v6); /*0x76a0ca*/
    this->m_8 = m_8; /*0x76a0cd*/
    BYTE1(this->m_C) = a3 == 0; /*0x76a0d0*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x76a0d9*/
  }
  v12 = this->m_8; /*0x76a0dc*/
  if ( v12 < this->m_10 ) /*0x76a0e4*/
    this->m_10 = v12; /*0x76a0e6*/
  return (gamemd::AbstractClass **)(1); /*0x76a0e9*/

}
}
// 0x767ED0
namespace gamemd {
char MSFrameAnim::Load(int a1, int * a2, void *a3_1, void *a4_1)
{

  if ( byte_8487BC ) /*0x767ed7*/
    RenderScoreScreen( (ConvertClass *)((int *)a1->__pad_0), (int *)(a2), 1); /*0x767ee3*/
  return 0; /*0x767eea*/

}
} // namespace gamemd

// 0x767EF0
namespace gamemd {
void MSFrameAnim::Draw(int a1, int * a2)
{

  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  if ( byte_8487BD ) /*0x767efc*/
  {
    v2 = (*(int (**)(MSFrameAnim *))(*(unsigned int *)a1->__pad_0 + 124))( (MSFrameAnim *)(a1)); /*0x767f0d*/
    v3 = (*(int (**)(MSFrameAnim *))(*(unsigned int *)a1->__pad_0 + 128))( (MSFrameAnim *)(a1)); /*0x767f0f*/
    if ( a2 ) /*0x767f1b*/
    {
      v4 = a2[1]; /*0x767f1f*/
      v7 = *a2; /*0x767f22*/
      v5 = a2[2]; /*0x767f26*/
      v6 = a2[3]; /*0x767f29*/
      v8 = v4; /*0x767f2c*/
      v10 = v6; /*0x767f30*/
      v9 = v5; /*0x767f3c*/
    }
    else
    {
      v7 = 0; /*0x767f55*/
      v8 = 0; /*0x767f5d*/
      v9 = v2; /*0x767f65*/
      v10 = v3; /*0x767f69*/
    }
    RenderScoreScreen( (ConvertClass *)((int *)a1->__pad_0), (int *)(&v7), 1); /*0x767f40*/
  }

}
} // namespace gamemd

// 0x767F80
namespace gamemd {
unsigned int * MSFrameAnim::UpdateFrame(unsigned int * a1)
{

  *(unsigned int *)a1->__pad_0 = 0; /*0x767f8c*/
  a1->MSFrameAnim_field_0x4 = 0; /*0x767f99*/
  a1->MSFrameAnim_field_0x8 = (void *)640; /*0x767f9c*/
  a1->MSFrameAnim_field_0xC = (void *)480; /*0x767f9f*/
  return a1->__pad_0; /*0x767fa2*/

}
} // namespace gamemd

// 0x769C50
namespace gamemd {
int MSFrameAnim::initAnimation()
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->m_1[3]; /*0x769c56*/
  this->m_10 = 0; /*0x769c59*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769c60*/
  {
    result = (**v2)(v2, 3); /*0x769c6d*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x769c6f*/
  }
  BYTE1(this->m_C) = 0; /*0x769c72*/
  this->m_8 = 0; /*0x769c75*/
  return result; /*0x769c78*/

}
} // namespace gamemd

// 0x769C80
namespace gamemd {
unsigned int MSFrameAnim::startAnimation(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x769c80*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x769c95*/
  else
    return 0; /*0x769c87*/

}
} // namespace gamemd

// 0x769CD0
namespace gamemd {
void MSFrameAnim::stopAnimation()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x769cd6*/
  this->m_10 = 0; /*0x769cd9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x769ce0*/
  {
    __3_YAXPAX_Z(v2); /*0x769ce6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x769cee*/
  }
  BYTE1(this->m_C) = 0; /*0x769cf1*/
  this->m_8 = 0; /*0x769cf4*/

}
} // namespace gamemd

// 0x769D00
namespace gamemd {
unsigned int MSFrameAnim::pauseAnimation(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x769d00*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x769d15*/
  else
    return 0; /*0x769d07*/

}
} // namespace gamemd

// 0x769D90
namespace gamemd {
rc_ptr * MSFrameAnim::resumeAnimation(unsigned int * Block, char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_rc_ptr;
  ((ComPtr *)((ComPtr *)this))->Release(); /*0x769d99*/
  if ( (a2 & 1) != 0 ) /*0x769da3*/
    __3_YAXPAX_Z(this); /*0x769da6*/
  return this->__pad_0; /*0x769db0*/

}
} // namespace gamemd

// 0x76A100
namespace gamemd {
int MSFrameAnim::getCurrentFrame(int a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x76a100*/
  result = 0; /*0x76a103*/
  if ( m_10 <= 0 ) /*0x76a108*/
    return -1; /*0x76a123*/
  for ( i = (unsigned int *)(*(unsigned int *)&this->m_1[3] + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x76a111*/
  {
    if ( ++result >= m_10 ) /*0x76a121*/
      return -1; /*0x76a121*/
  }
  return result; /*0x76a126*/

}
}
// 0x76A2B0
namespace gamemd {
char MSFrameAnim::loopAnimation(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x76a2bc*/
  {
    LOBYTE(this->m_C) = 0; /*0x76a2c2*/
    if ( a3 ) /*0x76a2c8*/
      v4 = a3; /*0x76a2de*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x76a2da*/
    LOBYTE(this->m_C) = 1; /*0x76a2e2*/
    if ( !v4 ) /*0x76a2e6*/
      return 0; /*0x76a35a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x76a2e8*/
    {
      m_8 = this->m_8; /*0x76a2ef*/
      if ( a2 < m_8 ) /*0x76a2f4*/
        m_8 = a2; /*0x76a2f6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x76a2fc*/
        ++i; /*0x76a301*/
      if ( BYTE1(this->m_C) ) /*0x76a30e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x76a319*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x76a321*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x76a32a*/
    this->m_8 = a2; /*0x76a332*/
    BYTE1(this->m_C) = a3 == 0; /*0x76a335*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 /*0x76a33e*/
                                                                                              + 12))(this);
  }
  v7 = this->m_8; /*0x76a341*/
  if ( v7 < this->m_10 ) /*0x76a349*/
    this->m_10 = v7; /*0x76a34b*/
  return 1; /*0x76a34e*/

}
} // namespace gamemd

// 0x76A360
namespace gamemd {
int MSFrameAnim::resetAnimation(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x76a360*/
  result = 0; /*0x76a363*/
  if ( m_10 <= 0 ) /*0x76a368*/
    return -1; /*0x76a37f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x76a36e*/
  {
    if ( ++result >= m_10 ) /*0x76a37d*/
      return -1; /*0x76a37d*/
  }
  return result; /*0x76a382*/

}
}
// 0x76A680
namespace gamemd {
DynamicVector * MSFrameAnim::setPosition(unsigned int * Block, char a2)
{

  void (***v3)(unsigned int, int); // ecx

  v3 = *(void (****)(unsigned int, int))&this->m_1[3]; /*0x76a683*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClassrc_ptr;
  if ( v3 && BYTE1(this->m_C) ) /*0x76a690*/
  {
    (**v3)(v3, 3); /*0x76a69f*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x76a6a1*/
  }
  BYTE1(this->m_C) = 0; /*0x76a6ac*/
  this->m_8 = 0; /*0x76a6b2*/
  if ( (a2 & 1) != 0 ) /*0x76a6b9*/
    __3_YAXPAX_Z(this); /*0x76a6bc*/
  return this->__pad_0; /*0x76a6c6*/

}
} // namespace gamemd

// 0x76A720
namespace gamemd {
DynamicVector * MSFrameAnim::setScale(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x76a723*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x76a730*/
  {
    __3_YAXPAX_Z(v3); /*0x76a738*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x76a740*/
  }
  BYTE1(this->m_C) = 0; /*0x76a74b*/
  this->m_8 = 0; /*0x76a751*/
  if ( (a2 & 1) != 0 ) /*0x76a758*/
    __3_YAXPAX_Z(this); /*0x76a75b*/
  return this->__pad_0; /*0x76a765*/

}
} // namespace gamemd

// 0x76A7C0
namespace gamemd {
unsigned int * MSFrameAnim::drawFrame(void *a1_1)
{

  ((ComPtr *)((ComPtr *)this))->Constructor(); /*0x76a7c3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_rc_ptr); /*0x76a7c8*/
  return this->__pad_0; /*0x76a7d0*/

}
} // namespace gamemd
