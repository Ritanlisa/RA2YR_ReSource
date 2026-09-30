// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"
#include "e4/classes/RocketLocomotionClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x661EC0
RocketLocomotionClass::RocketLocomotionClass()
{
  int v2; // ecx

  LocomotionClass::Init(); /*0x661ec3*/
    *((unsigned int *)this + 96) = dword_B04E38;
    *((unsigned int *)this + 112) = dword_B04E3C;
    *((unsigned int *)this + 128) = dword_B04E40;
    *((unsigned int *)this + 144) = MEMORY[0xA8ED84];
    *((unsigned int *)this + 176) = 0;
    *((unsigned int *)this + 192) = 0;
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x661ef7*/
    *((unsigned int *)this + 240) = 0;
    *((unsigned int *)this + 208) = v2;
    *((unsigned int *)this + 288) = 0;
    *((unsigned int *)this + 256) = 0;
    *((unsigned int *)this + 304) = 0;
    *((unsigned char *)this + 324) = 0;
    *((unsigned int *)this + 336) = 0;
    *((unsigned int *)this + 352) = 0;
    *((unsigned char *)this + 320) = 1;
    *(unsigned int *)this = &RocketLocomotionClass::`vftable';
    *((unsigned int *)this + 16) = &vt_RocketLocomotionClass;
    return this;
}
// 0x6633D0
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *(IID *)a2 = g_CLSID_ShipLocomotion; /*0x6633e6*/
  a2[3] = unk_7E9ADC; /*0x663400*/
  return 0; /*0x6633dd*/
}
// 0x663410
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax
  int v3; // ecx

  result = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( a1 ) /*0x663426*/
    {
      *(unsigned int *)a1->LocomotionClass = (void*)&LocomotionClass_vftable; /*0x663428*/
      *(unsigned int *)&a1->LocomotionClass[4] = (void*)&LocomotionClass_vftable; /*0x66342e*/
      v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x663435*/
      a1->TrailerTimer[2] = 0; /*0x66343b*/
      a1->TrailerTimer[0] = v3; /*0x663442*/
      *(unsigned int *)a1->LocomotionClass = (void*)&RocketLocomotionClass_vftable; /*0x663445*/
      *(unsigned int *)&a1->LocomotionClass[4] = (void*)&RocketLocomotionClass_vftable; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}
// 0x6635B0
int RocketLocomotionClass::StubReturn96()
{
  return 96; /*0x6635b5*/
}
// 0x6635C0
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(char a2)
{
    *Block = &RocketLocomotionClass::`vftable';
    *(Block + 1) = &vt_RocketLocomotionClass;
  LocomotionClass::Construct(); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    RA2_OPDEL(); /*0x6635dd*/
    return (RocketLocomotionClass *)Block;
}
// 0x6647B0
namespace gamemd {
void RocketLocomotionClass_17::ddtor(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x6647b6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x6647c6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x6647E0
namespace gamemd {
unsigned int RocketLocomotionClass_17::BeginMove(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x6647e7*/
}
} // namespace gamemd

// 0x664800
namespace gamemd {
int RocketLocomotionClass_17::UpdateMovement(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x664810
namespace gamemd {
char RocketLocomotionClass_17::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( m_8 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x66482b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= m_8 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/
}
} // namespace gamemd

// 0x664850
namespace gamemd {
char RocketLocomotionClass_17::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x66487e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x66488a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x6648a1*/
          m_8 = a2; /*0x6648a3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x6648ae*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x6648c6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x6648f8*/
  }
}
} // namespace gamemd

// 0x664900
namespace gamemd {
void RocketLocomotionClass_17::Destroy(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x664913*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x664930
namespace gamemd {
int RocketLocomotionClass_17::IndexOf(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x664938*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x664941*/
  if ( m_8 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= m_8 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/
}
} // namespace gamemd

// 0x664970
namespace gamemd {
unsigned int RocketLocomotionClass_17::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x664977*/
}
} // namespace gamemd

// 0x664990
namespace gamemd {
char RocketLocomotionClass_17::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x6649ba*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x6649d4*/
        m_8 = a2; /*0x6649d6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x6649e1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x6649f9*/
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
  return 1; /*0x664a2e*/
}
} // namespace gamemd

// 0x664A40
namespace gamemd {
int RocketLocomotionClass_17::Launch(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x664a43*/
  if ( m_10 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/
}
}
// 0x664A70
namespace gamemd {
void RocketLocomotionClass_17::Constructor(void *a1 = 0)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_OwnerTalkClass_ConnectionListStruct___vftable; /*0x664a76*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x664a88*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    RA2_OPDEL(); /*0x664aab*/
  return this; /*0x664ab5*/
}
} // namespace gamemd

// 0x664AC0
namespace gamemd {
DynamicVector * RocketLocomotionClass_17::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_OwnerTalkClass_ConnectionListStruct___vftable; /*0x664ac6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x664ad8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    RA2_OPDEL(); /*0x664afb*/
  return this; /*0x664b05*/
}
} // namespace gamemd
