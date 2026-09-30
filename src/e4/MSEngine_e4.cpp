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

// 0x5ACD30
namespace gamemd {
AbstractClass * * MSEngine::Release(int a2, char * a3)
{
  int v3; // ebx
  char *v5; // ebp
  void * v6;
  char *v7; // edi
  int m_8; // ecx
  int v10; // eax
  char *v11; // ebx
  unsigned int *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = (void *)((int)(RA2_OPNEW(16 * a2)));
      if ( v6 ) /*0x5acd5f*/
        v7 = (char *)v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( v7 ) /*0x5acd7f*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v9 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5acd97*/
          m_8 = a2; /*0x5acd99*/
        if ( m_8 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
                        v12 = (unsigned int *)(v10 + *((unsigned int *)this + 1));
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
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x5acdd8*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v7;
            *((unsigned int *)this + 2) = v3;
            *((unsigned char *)this + 13) = v5 == 0;
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5ace0b*/
  }
}
}
// 0x5ACED0
namespace gamemd {
AbstractClass * * MSEngine::SetCapacity(int a2, char * a3)
{
  int v3; // ebx
  char *v5; // ebp
  void * v6;
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = (void *)((int)(RA2_OPNEW(16 * a2)));
      if ( v6 ) /*0x5aceff*/
        v7 = (char *)v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
        if ( *((unsigned int *)this + 1) )
    {
            v8 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5acf31*/
        m_8 = a2; /*0x5acf33*/
      if ( m_8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
                    v11 = (unsigned int *)(v9 + *((unsigned int *)this + 1));
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
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5acf72*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v7;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = v5 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v12 = *((unsigned int *)this + 2);
    if ( v12 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v12;
  return 1; /*0x5acfa7*/
}
}
// 0x5CEE60
namespace gamemd {
CampaignClass * MSEngine::Destructor()
{
  void *v2; // eax
  void *v3; // eax
  void *MSEngine_field_0x4; // eax

  this->SessionClass::Destruct(); /*0x5cee64*/
  v2 = (void *)this->u32_48; /*0x5cee69*/
    *((unsigned int *)this + 272) = &vt_VectorClass_MSSfxEntry;
    if ( v2 && *((unsigned char *)this + 324) )
  {
    RA2_OPDEL(v2); /*0x5cee7f*/
        *((unsigned int *)this + 288) = 0;
  }
    *((unsigned char *)this + 324) = 0;
    *((unsigned int *)this + 304) = 0;
    v3 = *(void **)((char *)this + 192);
    *((unsigned int *)this + 176) = &vt_VectorClass_MSAnimEntry;
    if ( v3 && *((unsigned char *)this + 228) )
  {
    RA2_OPDEL(v3); /*0x5ceea4*/
        *((unsigned int *)this + 192) = 0;
  }
  this->u32_39 = (unsigned int)(0);
  this->IsAllocated = (void *)((unsigned int)(0));
  DeleteAndZero((ObjectClass *)(this + 2)); /*0x5ceeb8*/
    v4 = *(void **)((char *)this + 16);
    *(unsigned int *)this = &vt_VectorClass_MapStage;
    if ( v4 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(MSEngine_field_0x4); /*0x5ceed0*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
}
// 0x5D1AA0
namespace gamemd {
CampaignClass * MSEngine::Construct()
{
  void **p_MSEngine_field_0x8; // ecx
  void (**v3)(void **, int, unsigned int); // edx

  p_MSEngine_field_0x8 = (void **)((unsigned int)(&this->MSEngine_field_0x8));
  p_MSEngine_field_0x8[1] = (void *)((unsigned int)(0));
  p_MSEngine_field_0x8[2] = (void *)((unsigned int)(0));
  *((unsigned char *)p_MSEngine_field_0x8 + 12) = 1; /*0x5d1ab8*/
  *((unsigned char *)p_MSEngine_field_0x8 + 13) = 0; /*0x5d1abb*/
  *p_MSEngine_field_0x8 = (void*)&VectorClass_TRect_int_vftable; /*0x5d1abe*/
  this->u32_1C = (unsigned int *)(0);
  this->q008 = (unsigned int *)(0);
  this->u32_24 = (unsigned int *)(1);
  this->u32_25 = (unsigned int *)(0);
  this->u32_18 = (unsigned int *)((void*)&DynamicVectorClass_MSAnim___vftable);
  this->q00B = (unsigned int *)(10);
  this->q00A = (unsigned int *)(0);
    *((unsigned int *)this + 52) = 0;
    *((unsigned int *)this + 56) = 0;
    *((unsigned char *)this + 60) = 1;
    *((unsigned char *)this + 61) = 0;
    *((unsigned int *)this + 48) = &vt_DynamicVectorClass_MSSfx;
    *((unsigned int *)this + 68) = 10;
    *((unsigned int *)this + 64) = 0;
  v3 = (void (**)(void **, int, unsigned int))*p_MSEngine_field_0x8; /*0x5d1afc*/
  *(unsigned int *)this->__pad_0 = (void*)&MSEngine_vftable; /*0x5d1b01*/
    *((unsigned int *)this + 4) = 0;
  v3[2](p_MSEngine_field_0x8, 20, 0); /*0x5d1b0a*/
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 24) + 12))((char *)this + 24);
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 48) + 12))((char *)this + 48);
  return this; /*0x5d1b1b*/
}
}
// 0x5D1B30
namespace gamemd {
CampaignClass * MSEngine::Destruct()
{
  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  unsigned int *v5; // ebp
  int i; // edi
  void (***v7)(unsigned int, int); // ecx
  unsigned int *v8; // edi
  void * v9;
  unsigned int *v10; // esi
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax

  v2 = 0; /*0x5d1b37*/
    for ( *this = &vt_MSEngine; v2 < *((unsigned int *)this + 64); ++v2 )
  {
        v3 = *((unsigned int *)this + 52);
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(unsigned int *)(v3 + 4 * v2)); /*0x5d1b53*/
      RA2_OPDEL(v4); /*0x5d1b59*/
    }
  }
  v5 = &this->u32_30; /*0x5d1b6c*/
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 48) + 12))((char *)this + 48);
    for ( i = 0; i < *((unsigned int *)this + 40); ++i )
  {
        v7 = *(void (****)(unsigned int, int))(*((unsigned int *)this + 28) + 4 * i);
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = (unsigned int *)((void *)(&this->u32_18));
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 24) + 12))((char *)this + 24);
    v9 = *((unsigned int *)this + 8);
  v10 = &this->q008; /*0x5d1ba3*/
  (*(void (**)(unsigned int *))((unsigned int)(v9)+ 12))(v10); /*0x5d1ba8*/
  v11 = (void *)v5[1]; /*0x5d1bab*/
  if ( v11 && *((unsigned char *)v5 + 13) ) /*0x5d1bb9*/
  {
    RA2_OPDEL(v11); /*0x5d1bbf*/
    v5[1] = 0; /*0x5d1bc7*/
  }
  *((unsigned char *)v5 + 13) = 0; /*0x5d1bca*/
  v5[2] = 0; /*0x5d1bcd*/
  v12 = (void *)v8[1]; /*0x5d1bd0*/
  if ( v12 && *((unsigned char *)v8 + 13) ) /*0x5d1bdd*/
  {
    RA2_OPDEL(v12); /*0x5d1be3*/
    v8[1] = 0; /*0x5d1beb*/
  }
  *((unsigned char *)v8 + 13) = 0; /*0x5d1bee*/
  v8[2] = 0; /*0x5d1bf1*/
  v13 = (void *)v10[1]; /*0x5d1bf4*/
  if ( v13 && *((unsigned char *)v10 + 13) ) /*0x5d1c01*/
  {
    RA2_OPDEL(v13); /*0x5d1c07*/
    v10[1] = 0; /*0x5d1c0f*/
  }
  *((unsigned char *)v10 + 13) = 0; /*0x5d1c12*/
  v10[2] = 0; /*0x5d1c15*/
}
}
// 0x5D1DF0
namespace gamemd {
int MSEngine::ProcessEvents(MSVQAnim * aP1, int a3)
{
  int result; // eax
  int v6; // ecx

    Timer::GetTicks();
  a3 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
      while ( 1 )
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
        v6 = *(unsigned int *)(*((unsigned int *)this + 28) + 4 * result);
    result = (*(int (**)(int))(*(unsigned int *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (unsigned char)result || !a3 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    ((GameClass *)(1))->FrameLoop(); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}
}
// 0x5AC520
namespace gamemd {
CampaignClass * MSEngine::ClearBuffer()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5ac526*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5ac536*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5AC550
namespace gamemd {
unsigned int MSEngine::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 4;
  else
    return 0; /*0x5ac557*/
}
} // namespace gamemd

// 0x5AC570
namespace gamemd {
unsigned int * MSEngine::Shutdown(unsigned int * a2, int a3)
{
  unsigned int *v3; // ecx

    v3 = (unsigned int *)(*((unsigned int *)this + 4) + 16 * a3);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( m_8 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(unsigned int *)(a2 + 4); /*0x5accd8*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
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
CampaignClass * MSEngine::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x5ace33*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5ACE50
namespace gamemd {
CampaignClass * MSEngine::Init()
{
  int result; // eax
  int m_8; // esi
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5ace5e*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5ace67*/
  if ( m_8 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 4;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5acfc6*/
  if ( m_10 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 )
  {
    if ( ++result >= m_10 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}
}
// 0x5AD4D0
namespace gamemd {
VectorClass_flat * MSEngine::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_TRect_int_vftable; /*0x5ad4d6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5ad4e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    RA2_OPDEL(); /*0x5ad50b*/
  return this; /*0x5ad515*/
}
} // namespace gamemd

// 0x5AD520
namespace gamemd {
CampaignClass * MSEngine::Constructor()
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_TRect_int_vftable; /*0x5ad526*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5ad538*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    RA2_OPDEL(); /*0x5ad55b*/
  return this; /*0x5ad565*/
}
} // namespace gamemd

// 0x5D5850
namespace gamemd {
void MSEngine::DestroyData()
{
  if ( *(unsigned int *)this->__pad_0 ) /*0x5d5850*/
    free(*(void **)this->__pad_0); /*0x5d5857*/
}
} // namespace gamemd
