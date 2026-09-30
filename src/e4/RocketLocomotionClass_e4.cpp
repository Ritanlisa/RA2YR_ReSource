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
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x661EC0
RocketLocomotionClass::RocketLocomotionClass()
{

  int v2; // ecx

  LocomotionClass::Init((LocomotionClass *)this); /*0x661ec3*/
  this->MovingDestination[0] = dword_B04E38; /*0x661ed1*/
  this->MovingDestination[1] = dword_B04E3C; /*0x661eda*/
  this->MovingDestination[2] = dword_B04E40; /*0x661ee3*/
  this->MissionTimer[0] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x661eee*/
  this->MissionTimer[2] = 0; /*0x661ef1*/
  this->MissionTimer[3] = 0; /*0x661ef4*/
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x661ef7*/
  this->TrailerTimer[2] = 0; /*0x661efd*/
  this->TrailerTimer[0] = v2; /*0x661f00*/
  this->CurrentSpeed[0] = 0; /*0x661f03*/
  this->MissionState = 0; /*0x661f06*/
  this->CurrentSpeed[1] = 0; /*0x661f09*/
  this->SpawnerIsElite = 0; /*0x661f0c*/
  this->CurrentPitch = 0.0; /*0x661f0f*/
  this->RocketLocomotionClass_field_58 = 0; /*0x661f12*/
  this->RocketLocomotionClass_field_bool_4C = 1; /*0x661f15*/
  *(unsigned int *)this->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *(unsigned int *)&this->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x661f1f*/
  return (int)this->LocomotionClass; /*0x661f28*/

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
      *(unsigned int *)a1->LocomotionClass = &LocomotionClass::`vftable'; /*0x663428*/
      *(unsigned int *)&a1->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x66342e*/
      v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x663435*/
      a1->TrailerTimer[2] = 0; /*0x66343b*/
      a1->TrailerTimer[0] = v3; /*0x663442*/
      *(unsigned int *)a1->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x663445*/
      *(unsigned int *)&a1->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x66344b*/
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
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{

  *(unsigned int *)Block->LocomotionClass = &RocketLocomotionClass::`vftable'; /*0x6635c3*/
  *(unsigned int *)&Block->LocomotionClass[4] = &RocketLocomotionClass::`vftable'; /*0x6635c9*/
  LocomotionClass::Construct((LocomotionClass *)Block); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    __3_YAXPAX_Z(Block); /*0x6635dd*/
  return Block->LocomotionClass; /*0x6635e7*/

}
// 0x6647B0
namespace gamemd {
void RocketLocomotionClass_17::ddtor()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6647b6*/
  this->m_10 = 0; /*0x6647b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6647c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6647c6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6647ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6647d1*/
  this->m_8 = 0; /*0x6647d4*/

}
} // namespace gamemd

// 0x6647E0
namespace gamemd {
unsigned int RocketLocomotionClass_17::BeginMove(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x6647e0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/

}
} // namespace gamemd

// 0x664800
namespace gamemd {
int RocketLocomotionClass_17::UpdateMovement(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x66480a*/

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

  m_8 = this->m_8; /*0x664812*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( m_8 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x664825*/
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
    LOBYTE(this->m_C) = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x66487e*/
    LOBYTE(this->m_C) = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x664895*/
      {
        m_8 = this->m_8; /*0x66489c*/
        if ( a2 < m_8 ) /*0x6648a1*/
          m_8 = a2; /*0x6648a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( BYTE1(this->m_C) ) /*0x6648bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6648c6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x6648ce*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x6648d7*/
      this->m_8 = a2; /*0x6648df*/
      BYTE1(this->m_C) = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAUConnectionListStruct_OwnerTalkClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }

}
} // namespace gamemd

// 0x664900
namespace gamemd {
void RocketLocomotionClass_17::Destroy()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x66490d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x664913*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x66491b*/
  }
  BYTE1(this->m_C) = 0; /*0x66491e*/
  this->m_8 = 0; /*0x664921*/

}
} // namespace gamemd

// 0x664930
namespace gamemd {
int RocketLocomotionClass_17::IndexOf(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x664930*/
    return 0; /*0x664938*/
  m_8 = this->m_8; /*0x66493e*/
  result = 0; /*0x664941*/
  if ( m_8 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x66494b*/
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

  if ( LOBYTE(this->m_C) ) /*0x664970*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x664985*/
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
    LOBYTE(this->m_C) = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6649ba*/
    LOBYTE(this->m_C) = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x6649c8*/
    {
      m_8 = this->m_8; /*0x6649cf*/
      if ( a2 < m_8 ) /*0x6649d4*/
        m_8 = a2; /*0x6649d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( BYTE1(this->m_C) ) /*0x6649ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6649f9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x664a01*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x664a0a*/
    this->m_8 = a2; /*0x664a12*/
    BYTE1(this->m_C) = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUConnectionListStruct_OwnerTalkClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x664a1e*/
  }
  v7 = this->m_8; /*0x664a21*/
  if ( v7 < this->m_10 ) /*0x664a29*/
    this->m_10 = v7; /*0x664a2b*/
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

  m_10 = this->m_10; /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( m_10 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= m_10 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/

}
}
// 0x664A70
namespace gamemd {
void RocketLocomotionClass_17::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x664a73*/
  *(unsigned int *)Block->__pad_0 = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664a76*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x664a80*/
  {
    __3_YAXPAX_Z(v3); /*0x664a88*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x664a90*/
  }
  BYTE1(Block->m_C) = 0; /*0x664a9b*/
  Block->m_8 = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    __3_YAXPAX_Z(Block); /*0x664aab*/
  return Block->__pad_0; /*0x664ab5*/

}
} // namespace gamemd

// 0x664AC0
namespace gamemd {
DynamicVector * RocketLocomotionClass_17::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x664ac3*/
  *(unsigned int *)Block->__pad_0 = &VectorClass<OwnerTalkClass::ConnectionListStruct *>::`vftable'; /*0x664ac6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x664ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x664ad8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x664ae0*/
  }
  BYTE1(Block->m_C) = 0; /*0x664aeb*/
  Block->m_8 = 0; /*0x664af1*/
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    __3_YAXPAX_Z(Block); /*0x664afb*/
  return Block->__pad_0; /*0x664b05*/

}
} // namespace gamemd
