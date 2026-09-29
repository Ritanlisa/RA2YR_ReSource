// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/MoveFeedback_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Movement_e4.hpp"

// 0x7327D0
namespace gamemd {
int MoveFeedback::ProcessCommand()
{
  char v1; // bl
  void * result;
  void * v3;
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  EventClass *v9; // eax
  int v10; // edi
  int v12; // ebp
  int i; // edi
  int v14; // ecx

  v1 = g_MoveFeedback; /*0x7327d9*/
  g_MoveFeedback = g_MoveFeedback; /*0x7327e8*/
  g_MoveFeedback = 0; /*0x7327ec*/
  if ( g_BuildingLoadQueue_Array.__pad_1624[0] ) /*0x7327f5*/
  {
    result = (void *)((int)(RA2_OPNEW(0x18u)));
    v3 = (void *)((int)(result));
    v4 = 0; /*0x732802*/
    if ( result ) /*0x732809*/
    {
      result = (void *)((unsigned int)((int)EventClass::resetEvent((EventClass *)result, 0, 0)));
      *(unsigned int *)v3 = (void*)&DynamicVectorClass_TechnoClass___vftable; /*0x732814*/
      v3->u32_14 = 10; /*0x73281a*/
      v3->Items = 0; /*0x732821*/
    }
    else
    {
      v3 = 0; /*0x732826*/
    }
    v5 = *(unsigned int *)&stru_A8EB00.?[164]; /*0x732828*/
    if ( *(int *)&stru_A8EB00.?[164] > 0 ) /*0x732830*/
    {
      do /*0x732887*/
      {
        v6 = *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[152] + 4 * v4); /*0x73283b*/
        result = StepTechnoClassCleanupIfHuman(v6, this); /*0x732840*/
        if ( (unsigned char)result ) /*0x732847*/
        {
          v7 = v3->Capacity; /*0x732849*/
          result = v3->Items; /*0x73284c*/
          if ( result < v7 /*0x732873*/
            || ((IDA_LOBYTE(result) = v3->IsAllocated, (unsigned char)result) || !v7)
            && (result = v3->u32_14, result > 0)
            && (result = (*(int (__thiscall **)(int, int, unsigned int))(v3->Capacity)(v3, v7 + result, 0), (unsigned char)result) )
          {
            result = v3->Items; /*0x732875*/
            v8 = v3->Items; /*0x732878*/
            v3->Items = result + 1; /*0x73287e*/
            *(unsigned int *)(v8 + 4 * result) = v6; /*0x732881*/
          }
        }
        ++v4; /*0x732884*/
      }
      while ( v4 < v5 ); /*0x732887*/
    }
    v1 = g_MoveFeedback; /*0x732889*/
  }
  else
  {
    v9 = (EventClass *)RA2_OPNEW(0x18u); /*0x73288f*/
    v3 = (int)v9; /*0x732894*/
    v10 = 0; /*0x732896*/
    if ( v9 ) /*0x73289d*/
    {
      EventClass::resetEvent(v9, 0, 0); /*0x7328a3*/
      *(unsigned int *)v3 = (void*)&DynamicVectorClass_TechnoClass___vftable; /*0x7328a8*/
      v3->u32_14 = 10; /*0x7328ae*/
      v3->Items = 0; /*0x7328b5*/
    }
    else
    {
      v3 = 0; /*0x7328ba*/
    }
    result = GetHeightMap((ObjectClass *)g_TacticalClass_Instance); /*0x7328c2*/
    result = result; /*0x7328c7*/
    if ( result > 0 ) /*0x7328cb*/
    {
      do /*0x73290b*/
      {
        result = GetCoordDataMap(v10); /*0x7328d4*/
        if ( result ) /*0x7328db*/
        {
          if ( (*(unsigned char *)(result + 20) & 1) != 0 ) /*0x7328e7*/
          {
            result = result; /*0x7328ef*/
            result = StepTechnoClassCleanupIfHuman(result, this); /*0x7328f3*/
            if ( (unsigned char)result ) /*0x7328fa*/
              result = DynamicVector::AddItem((DynamicVector *)v3, &result); /*0x732903*/
          }
        }
        ++v10; /*0x732908*/
      }
      while ( v10 < result ); /*0x73290b*/
    }
  }
  v12 = v3->Items; /*0x73290d*/
  for ( i = 0; i < v12; ++i ) /*0x732914*/
  {
    v14 = *(unsigned int *)(v3->Items + 4 * i); /*0x732919*/
    result = (*(int (__thiscall **)(int))(*(unsigned int *)v14 + 332))(v14); /*0x73291e*/
  }
  if ( v3 ) /*0x73292b*/
    result = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x732933*/
  g_MoveFeedback = v1; /*0x732937*/
  return result; /*0x732935*/
}
} // namespace gamemd
// 0x40B960
namespace gamemd {
char MoveFeedback::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x40b962*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40b96d*/
  {
    v3 = 0; /*0x40b96f*/
    if ( m_8 <= 0 ) /*0x40b973*/
      return 1; /*0x40b993*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x40b975*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x40b97b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x40b984*/
    {
      ++v3; /*0x40b986*/
      ++v4; /*0x40b987*/
      if ( v3 >= m_8 ) /*0x40b98c*/
        return 1; /*0x40b98c*/
    }
  }
  return 0; /*0x40b98e*/
}
} // namespace gamemd
// 0x40BB90
namespace gamemd {
int MoveFeedback::Draw(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x40bb90*/
  result = 0; /*0x40bb93*/
  if ( m_10 <= 0 ) /*0x40bb98*/
    return -1; /*0x40bbaf*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x40bb9e*/
  {
    if ( ++result >= m_10 ) /*0x40bbad*/
      return -1; /*0x40bbad*/
  }
  return result; /*0x40bbb2*/
}
} // namespace gamemd
// 0x40BCB0
namespace gamemd {
DynamicVector * MoveFeedback::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_TechnoClass___vftable; /*0x40bcb6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x40bcc0*/
  {
    RA2_OPDEL(v3); /*0x40bcc8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40bcd0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40bcdb*/
  this->m_8 = 0; /*0x40bce1*/
  if ( (a2 & 1) != 0 ) /*0x40bce8*/
    RA2_OPDEL(); /*0x40bceb*/
  return this->__pad_0; /*0x40bcf5*/
}
} // namespace gamemd
// 0x40BE50
namespace gamemd {
void MoveFeedback::Destroy()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x40be56*/
  this->m_10 = 0; /*0x40be59*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x40be60*/
  {
    RA2_OPDEL(v2); /*0x40be66*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40be6e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40be71*/
  this->m_8 = 0; /*0x40be74*/
}
} // namespace gamemd
// 0x40BE80
namespace gamemd {
unsigned int MoveFeedback::GetIndex2(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x40be80*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x40be95*/
  else
    return 0; /*0x40be87*/
}
} // namespace gamemd
// 0x40C030
namespace gamemd {
char MoveFeedback::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c03c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x40c042*/
    if ( a3 ) /*0x40c048*/
      v4 = a3; /*0x40c05e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x40c05a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x40c062*/
    if ( !v4 ) /*0x40c066*/
      return 0; /*0x40c0da*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x40c068*/
    {
      m_8 = this->m_8; /*0x40c06f*/
      if ( a2 < m_8 ) /*0x40c074*/
        m_8 = a2; /*0x40c076*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x40c07c*/
        ++i; /*0x40c081*/
      if ( IDA_BYTE1(this->m_C) ) /*0x40c08e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x40c099*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x40c0a1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x40c0aa*/
    this->m_8 = a2; /*0x40c0b2*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x40c0b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVCommandClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x40c0be*/
  }
  v7 = this->m_8; /*0x40c0c1*/
  if ( v7 < this->m_10 ) /*0x40c0c9*/
    this->m_10 = v7; /*0x40c0cb*/
  return 1; /*0x40c0ce*/
}
} // namespace gamemd
// 0x40C0E0
namespace gamemd {
int MoveFeedback::FindMoveItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x40c0e0*/
  result = 0; /*0x40c0e3*/
  if ( m_10 <= 0 ) /*0x40c0e8*/
    return -1; /*0x40c0ff*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x40c0ee*/
  {
    if ( ++result >= m_10 ) /*0x40c0fd*/
      return -1; /*0x40c0fd*/
  }
  return result; /*0x40c102*/
}
} // namespace gamemd
// 0x40C160
namespace gamemd {
DynamicVector * MoveFeedback::Constructor(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_CommandClass_const___vftable; /*0x40c166*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x40c170*/
  {
    RA2_OPDEL(v3); /*0x40c178*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x40c180*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x40c18b*/
  this->m_8 = 0; /*0x40c191*/
  if ( (a2 & 1) != 0 ) /*0x40c198*/
    RA2_OPDEL(); /*0x40c19b*/
  return this->__pad_0; /*0x40c1a5*/
}
} // namespace gamemd