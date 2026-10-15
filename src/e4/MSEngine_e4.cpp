// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply

// 0x5ACD30
namespace gamemd {  // G42.18 ns repair
AbstractClass * * MSEngine::Release(int a2, char * a3)
{

  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  unsigned int *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    LOBYTE(this->m_C) = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = (int)(__2_YAPAXI_Z(16 * a2)); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = (char *)v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    LOBYTE(this->m_C) = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( *&this->__pad_004 ) /*0x5acd8b*/
      {
        m_8 = this->m_8; /*0x5acd92*/
        if ( a2 < m_8 ) /*0x5acd97*/
          m_8 = a2; /*0x5acd99*/
        if ( m_8 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (unsigned int *)(v10 + *&this->__pad_004); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --m_8; /*0x5acdac*/
            *(unsigned int *)v11 = *v12; /*0x5acdaf*/
            *((unsigned int *)v11 + 1) = v12[1]; /*0x5acdb4*/
            *((unsigned int *)v11 + 2) = v12[2]; /*0x5acdba*/
            *((unsigned int *)v11 + 3) = v12[3]; /*0x5acdc0*/
          }
          while ( m_8 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( BYTE1(this->m_C) ) /*0x5acdcd*/
        {
          __3_YAXPAX_Z(*&this->__pad_004); /*0x5acdd8*/
          *&this->__pad_004 = 0; /*0x5acde0*/
        }
      }
      *&this->__pad_004 = (unsigned char)(v7); /*0x5acde9*/
      this->m_8 = v3; /*0x5acdf1*/
      BYTE1(this->m_C) = v5 == 0; /*0x5acdf4*/
      return (gamemd::AbstractClass **)(1); /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_V_TRect_H *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x5ace05*/
    return (gamemd::AbstractClass **)(1); /*0x5ace0b*/
  }

}
}  // G42.18 ns repair
// 0x5ACED0
namespace gamemd {
AbstractClass * * MSEngine::SetCapacity(int a2, char * a3)
{

  int v3; // ebx
  char *v5; // ebp
  int v6; // eax
  char *v7; // edi
  int m_8; // ecx
  int v9; // eax
  char *v10; // ebx
  unsigned int *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    LOBYTE(this->m_C) = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = (int)(__2_YAPAXI_Z(16 * a2)); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = (char *)v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    LOBYTE(this->m_C) = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( *&this->__pad_004 ) /*0x5acf25*/
    {
      m_8 = this->m_8; /*0x5acf2c*/
      if ( a2 < m_8 ) /*0x5acf31*/
        m_8 = a2; /*0x5acf33*/
      if ( m_8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (unsigned int *)(v9 + *&this->__pad_004); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --m_8; /*0x5acf46*/
          *(unsigned int *)v10 = *v11; /*0x5acf49*/
          *((unsigned int *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((unsigned int *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((unsigned int *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( m_8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( BYTE1(this->m_C) ) /*0x5acf67*/
      {
        __3_YAXPAX_Z(*&this->__pad_004); /*0x5acf72*/
        *&this->__pad_004 = 0; /*0x5acf7a*/
      }
    }
    *&this->__pad_004 = (unsigned char)(v7); /*0x5acf83*/
    this->m_8 = v3; /*0x5acf8b*/
    BYTE1(this->m_C) = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_TRect_H *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x5acf97*/
  }
  v12 = this->m_8; /*0x5acf9a*/
  if ( v12 < this->m_10 ) /*0x5acfa2*/
    this->m_10 = v12; /*0x5acfa4*/
  return (gamemd::AbstractClass **)(1); /*0x5acfa7*/

}
}
// 0x5CEE60
namespace gamemd {
CampaignClass * MSEngine::Destructor(void *a1)
{

  void *v2; // eax
  void *v3; // eax
  void *MSEngine_field_0x4; // eax

  ((SessionClass *)this)->Destruct(); /*0x5cee64*/
  v2 = (void *)this->u32_48; /*0x5cee69*/
  this->u32_44 = &vt_VectorClass; /*0x5cee70*/
  if ( v2 && this->u32_51 ) /*0x5cee79*/
  {
    __3_YAXPAX_Z(v2); /*0x5cee7f*/
    this->u32_48 = 0; /*0x5cee87*/
  }
  this->u32_51 = 0; /*0x5cee8a*/
  this->u32_4C = 0; /*0x5cee8d*/
  v3 = (void *)this->u32_30; /*0x5cee90*/
  this->u32_2C = &vt_VectorClass; /*0x5cee93*/
  if ( v3 && this->u32_39 ) /*0x5cee9e*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceea4*/
    this->u32_30 = 0; /*0x5ceeac*/
  }
  this->u32_39 = 0; /*0x5ceeb2*/
  this->q034 = 0; /*0x5ceeb5*/
  DeleteAndZero(&this->m_8); /*0x5ceeb8*/
  MSEngine_field_0x4 = this->__pad_004; /*0x5ceebd*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x5ceec0) */
  if ( MSEngine_field_0x4 && BYTE1(this->m_C) ) /*0x5ceeca*/
  {
    __3_YAXPAX_Z(MSEngine_field_0x4); /*0x5ceed0*/
    this->MSEngine_field_0x4 = 0; /*0x5ceed8*/
  }
  BYTE1(this->m_C) = 0; /*0x5ceedb*/
  this->MSEngine_field_0x8 = 0; /*0x5ceede*/

}
}
// 0x5D1AA0
namespace gamemd {
CampaignClass * MSEngine::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  void **p_MSEngine_field_0x8; // ecx
  void (**v3)(void **, int, unsigned int); // edx

  p_MSEngine_field_0x8 = &this->m_8; /*0x5d1aa5*/
  p_MSEngine_field_0x8[1] = 0; /*0x5d1ab2*/
  p_MSEngine_field_0x8[2] = 0; /*0x5d1ab5*/
  *((unsigned char *)p_MSEngine_field_0x8 + 12) = 1; /*0x5d1ab8*/
  *((unsigned char *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1abb*/
  *p_MSEngine_field_0x8 = &vt_VectorClassTRect; /*0x5d1abe*/
  this->u32_1C = 0; /*0x5d1ac4*/
  this->u32_20 = 0; /*0x5d1ac7*/
  this->u32_24 = 1; /*0x5d1aca*/
  this->u32_25 = 0; /*0x5d1acd*/
  this->u32_18 = &vt_DynamicVectorClass; /*0x5d1ad0*/
  this->u32_2C = 10; /*0x5d1ad6*/
  this->u32_28 = 0; /*0x5d1add*/
  this->q034 = 0; /*0x5d1ae0*/
  this->u32_38 = 0; /*0x5d1ae3*/
  this->u32_3C = 1; /*0x5d1ae6*/
  this->u32_3D = 0; /*0x5d1ae9*/
  this->u32_30 = &vt_DynamicVectorClass; /*0x5d1aec*/
  this->u32_44 = 10; /*0x5d1af2*/
  this->u32_40 = 0; /*0x5d1af9*/
  v3 = (void (**)(void **, int, unsigned int))*p_MSEngine_field_0x8; /*0x5d1afc*/
  *(unsigned int *)this->__pad_0 = &vt_MSEngine; /*0x5d1b01*/
  this->__pad_004 = 0; /*0x5d1b07*/
  v3[2](p_MSEngine_field_0x8, 20, 0); /*0x5d1b0a*/
  (*(void (**)(char *))(this->u32_18 + 12))(&this->u32_18); /*0x5d1b11*/
  (*(void (**)(char *))(this->u32_30 + 12))(&this->u32_30); /*0x5d1b18*/
  return this->vtable1; /*0x5d1b1b*/

}
}
// 0x5D1B30
namespace gamemd {
CampaignClass * MSEngine::Destruct(void *a1)
{

  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  char *v5; // ebp
  int i; // edi
  void (***v7)(unsigned int, int); // ecx
  char *v8; // edi
  void (**MSEngine_field_0x8)(void **); // edx
  void **p_MSEngine_field_0x8; // esi
  void *v11; // eax
  void *v12; // eax
  int result; // eax

  v2 = 0; /*0x5d1b37*/
  for ( *(unsigned int *)this->vtable1 = &vt_MSEngine; v2 < this->u32_40; ++v2 ) /*0x5d1b45*/
  {
    v3 = this->q034; /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(MSEngine **)(v3 + 4 * v2)); /*0x5d1b53*/
      __3_YAXPAX_Z(v4); /*0x5d1b59*/
    }
  }
  v5 = &this->u32_30; /*0x5d1b6c*/
  (*(void (**)(char *))(this->u32_30 + 12))(&this->u32_30); /*0x5d1b71*/
  for ( i = 0; i < this->u32_28; ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (****)(unsigned int, int))(this->u32_1C + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = &this->u32_18; /*0x5d1b98*/
  (*(void (**)(char *))(this->u32_18 + 12))(&this->u32_18); /*0x5d1b9d*/
  MSEngine_field_0x8 = (void (**)(void **))this->MSEngine_field_0x8; /*0x5d1ba0*/
  p_MSEngine_field_0x8 = &this->MSEngine_field_0x8; /*0x5d1ba3*/
  MSEngine_field_0x8[3](p_MSEngine_field_0x8); /*0x5d1ba8*/
  v11 = (void *)*((unsigned int *)v5 + 1); /*0x5d1bab*/
  *(unsigned int *)v5 = (unsigned int)(&vt_VectorClass); /*0x5d1bae*/
  if ( v11 && v5[13] ) /*0x5d1bb9*/
  {
    __3_YAXPAX_Z(v11); /*0x5d1bbf*/
    v5->__pad_004 = 0; /*0x5d1bc7*/
  }
  v5[13] = 0; /*0x5d1bca*/
  v5->u32_8 = 0; /*0x5d1bcd*/
  v12 = (void *)v8->__pad_004; /*0x5d1bd0*/
  *(unsigned int *)v8 = (unsigned int)(&vt_VectorClass); /*0x5d1bd3*/
  if ( v12 && v8[13] ) /*0x5d1bdd*/
  {
    __3_YAXPAX_Z(v12); /*0x5d1be3*/
    *((unsigned int *)v8 + 1) = 0; /*0x5d1beb*/
  }
  v8[13] = 0; /*0x5d1bee*/
  *((unsigned int *)v8 + 2) = 0; /*0x5d1bf1*/
  result = (int)p_MSEngine_field_0x8[1]; /*0x5d1bf4*/
  *p_MSEngine_field_0x8 = &vt_VectorClassTRect; /*0x5d1bf7*/
  if ( result && *((unsigned char *)p_MSEngine_field_0x8 + 13) ) /*0x5d1c01*/
  {
    __3_YAXPAX_Z((void *)result); /*0x5d1c07*/
    p_MSEngine_field_0x8[1] = 0; /*0x5d1c0f*/
  }
  *((unsigned char *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1c12*/
  p_MSEngine_field_0x8[2] = 0; /*0x5d1c15*/
  return result; /*0x5d1c18*/

}
}
// 0x5D1DF0
namespace gamemd {
int MSEngine::ProcessEvents(char aP1, int a3)
{
  int result; // eax
  int v6; // ecx

  TimerGetTicks(); /*0x5d1dfc*/
  a3 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (**)(char *, char *))(this->u32_18 + 16))this->u32_18, &aP1); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(unsigned int *)(this->u32_1C + 4 * result); /*0x5d1e24*/
    result = (*(int (**)(int))(*(unsigned int *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (unsigned char)result || !a3 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    ((GameClass *)(1))->FrameLoop(); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}
namespace gamemd {
CampaignClass * MSEngine::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = (void *)(*&this->__pad_004); /*0x5ac526*/
  *&this->m_10 = 0; /*0x5ac529*/
  if ( v2 && (((unsigned char *)&(this->m_C))[1]) ) /*0x5ac530*/
  {
    RA2_OPDEL(v2); /*0x5ac536*/
    *&this->__pad_004 = 0; /*0x5ac53e*/
  }
  (((unsigned char *)&(this->q00B))[1]) = 0; /*0x5ac541*/
  *&this->m_8 = 0; /*0x5ac544*/

}
} // namespace gamemd
}

// 0x5AC550
namespace gamemd {
unsigned int MSEngine::PointerToIndex(int a2)
{
  if ( (this->m_C) ) /*0x5ac550*/
    return (unsigned int)(a2 - *&this->__pad_004) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/
}
} // namespace gamemd

// 0x5AC570
namespace gamemd {
unsigned int * MSEngine::Shutdown(unsigned int * a2, int a3)
{
  unsigned int *v3; // ecx

  v3 = (unsigned int *)(*&this->__pad_004 + 16 * a3); /*0x5ac57d*/
  *a2 = *v3; /*0x5ac587*/
  a2[1] = v3[1]; /*0x5ac58c*/
  a2[2] = v3[2]; /*0x5ac592*/
  a2[3] = v3[3]; /*0x5ac599*/
  return a2; /*0x5ac595*/
}
} // namespace gamemd

// 0x5ACCC0
namespace gamemd {
char MSEngine::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  m_8 = *&this->m_8; /*0x5acccb*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( m_8 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(unsigned int *)(a2 + 4); /*0x5accd8*/
    v5 = (unsigned int *)(*&this->__pad_004); /*0x5accdb*/
    v6 = (unsigned int *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (unsigned int)v5; /*0x5acce1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= m_8 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/
}
} // namespace gamemd

// 0x5ACE20
namespace gamemd {
CampaignClass * MSEngine::ddtor(void *a1)
{
  if ( *&this->IsAllocated && (this->q00E) ) /*0x5ace2d*/
  {
    operator delete((void *)(*&this->__pad_004)); /*0x5ace33*/
    *&this->__pad_004 = 0; /*0x5ace3b*/
  }
  (this->IsAllocated) = 0; /*0x5ace3e*/
  *&this->m_8 = 0; /*0x5ace41*/
}
} // namespace gamemd

// 0x5ACE50
namespace gamemd {
CampaignClass * MSEngine::Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1)
{
  int result; // eax
  int m_8; // esi
  unsigned int *i; // ecx

  if ( !(this->m_C) ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  m_8 = *&this->m_8; /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( m_8 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *&this->__pad_004; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= m_8 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/
}
} // namespace gamemd

// 0x5ACEB0
namespace gamemd {
unsigned int MSEngine::Run(int a2)
{
  if ( (this->m_C) ) /*0x5aceb0*/
    return (unsigned int)(a2 - *&this->__pad_004) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/
}
} // namespace gamemd

// 0x5ACFC0
namespace gamemd {
int MSEngine::FindItem(unsigned int * a2)
{
  int m_10; // esi
  int result; // eax
  unsigned int *i; // ecx

  m_10 = *&this->m_10; /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( m_10 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = *&this->__pad_004; *i != *a2 || i->vtable2 != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= m_10 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}
}
// 0x5AD4D0
namespace gamemd {
VectorClass_flat * MSEngine::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x5ad4d3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassTRect; /*0x5ad4d6*/
  if ( v3 && (Block->u8_E) ) /*0x5ad4e0*/
  {
    operator delete((void *)(v3)); /*0x5ad4e8*/
    *&Block->__pad_004 = 0; /*0x5ad4f0*/
  }
  (Block->u32_D) = 0; /*0x5ad4fb*/
  *&Block->u32_8 = 0; /*0x5ad501*/
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    operator delete((void *)(Block)); /*0x5ad50b*/
  return Block->tail_0; /*0x5ad515*/
}
} // namespace gamemd

// 0x5AD520
namespace gamemd {
CampaignClass * MSEngine::Constructor(unsigned int * Block, char a2, void *a3_1, void *a4)
{

  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x5ad523*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassTRect; /*0x5ad526*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5ad530*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad538*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5ad540*/
  }
  BYTE1(Block->m_C) = 0; /*0x5ad54b*/
  Block->m_8 = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    __3_YAXPAX_Z(Block); /*0x5ad55b*/
  return Block->__pad_0; /*0x5ad565*/

}
} // namespace gamemd

// 0x5D5850
namespace gamemd {
void MSEngine::DestroyData(void *a1_1)
{
  if ( *(unsigned int *)a1_1->__pad_0 ) /*0x5d5850*/
    free(*(void **)a1_1->__pad_0); /*0x5d5857*/
}
} // namespace gamemd
