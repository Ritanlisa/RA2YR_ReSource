// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_MoveFeedback 1  // G57a3: e4 flat-carrier opt-in (suppress core utility_ext/stream_ext twin)
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
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x7327D0
namespace gamemd {  // G42.18 ns repair
int MoveFeedback::ProcessCommand()
{

  char v1; // bl
  int result; // eax
  int v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  unsigned int *v8; // edx
  EventClass *v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // ebp
  int i; // edi
  int v14; // ecx
  char v15; // [esp+13h] [ebp-9h]
  int v17; // [esp+18h] [ebp-4h] BYREF

  v1 = g_MoveFeedback; /*0x7327d9*/
  v15 = g_MoveFeedback; /*0x7327e8*/
  g_MoveFeedback = 0; /*0x7327ec*/
  if ( byte_B0FE64 ) /*0x7327f5*/
  {
    result = __2_YAPAXI_Z(0x18u); /*0x7327fb*/
    v3 = result; /*0x732800*/
    v4 = 0; /*0x732802*/
    if ( result ) /*0x732809*/
    {
      result = (int)EventClass::resetEvent((EventClass *)result, 0, 0); /*0x73280f*/
      /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E17AC) */  /*0x732814*/
      v3->CapacityIncrement = 10; /*0x73281a*/
      v3->Count = 0; /*0x732821*/
    }
    else
    {
      v3 = 0; /*0x732826*/
    }
    v5 = *(unsigned int *)&stru_A8E960.random[276]; /*0x732828*/
    if ( *(int *)&stru_A8E960.random[276] > 0 ) /*0x732830*/
    {
      do /*0x732887*/
      {
        v6 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] + 4 * v4); /*0x73283b*/
        result = StepTechnoClassCleanupIfHuman(v6, this); /*0x732840*/
        if ( (unsigned char)result ) /*0x732847*/
        {
          v7 = v3->Capacity; /*0x732849*/
          result = v3->Count; /*0x73284c*/
          if ( result < v7 /*0x732873*/
            || ((LOBYTE(result) = v3->IsAllocated, (unsigned char)result) || !v7)
            && (result = v3->CapacityIncrement, result > 0)
            && (result = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v3 + 8))(v3, v7 + result, 0), (unsigned char)result) )
          {
            result = v3->Count; /*0x732875*/
            v8 = v3->Items; /*0x732878*/
            v3->Count = result + 1; /*0x73287e*/
            v8[result] = v6; /*0x732881*/
          }
        }
        ++v4; /*0x732884*/
      }
      while ( v4 < v5 ); /*0x732887*/
    }
    v1 = v15; /*0x732889*/
  }
  else
  {
    v9 = (EventClass *)__2_YAPAXI_Z(0x18u); /*0x73288f*/
    v3 = (int)v9; /*0x732894*/
    v10 = 0; /*0x732896*/
    if ( v9 ) /*0x73289d*/
    {
      EventClass::resetEvent(v9, 0, 0); /*0x7328a3*/
      /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E17AC) */  /*0x7328a8*/
      v3->CapacityIncrement = 10; /*0x7328ae*/
      v3->Count = 0; /*0x7328b5*/
    }
    else
    {
      v3 = 0; /*0x7328ba*/
    }
    result = GetHeightMap((ObjectClass *)g_TacticalClass_Instance); /*0x7328c2*/
    v11 = result; /*0x7328c7*/
    if ( result > 0 ) /*0x7328cb*/
    {
      do /*0x73290b*/
      {
        result = GetCoordDataMap(v10); /*0x7328d4*/
        if ( result ) /*0x7328db*/
        {
          if ( (*(unsigned char *)(result + 20) & 1) != 0 ) /*0x7328e7*/
          {
            v17 = result; /*0x7328ef*/
            result = StepTechnoClassCleanupIfHuman(result, this); /*0x7328f3*/
            if ( (unsigned char)result ) /*0x7328fa*/
              result = DynamicVector::AddItem((DynamicVector *)v3, &v17); /*0x732903*/
          }
        }
        ++v10; /*0x732908*/
      }
      while ( v10 < v11 ); /*0x73290b*/
    }
  }
  v12 = v3->Count; /*0x73290d*/
  for ( i = 0; i < v12; ++i ) /*0x732914*/
  {
    v14 = *(unsigned int *)(v3->Items + 4 * i); /*0x732919*/
    result = (*(int (**)(int))(*(unsigned int *)v14 + 332))(v14); /*0x73291e*/
  }
  if ( v3 ) /*0x73292b*/
    result = (**(int (***)(int, int))v3)(v3, 1); /*0x732933*/
  g_MoveFeedback = v1; /*0x732937*/
  return result; /*0x732935*/

}
} // namespace gamemd
// 0x40B960
namespace gamemd {
char MoveFeedback::AddRef(int a2)
{

  int m_8; // esi
  m_8 = *&this->m_8; /*0x40b962*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x40b96d*/
  {
    int v3 = 0; // edx /*0x40b96f*/
    if ( m_8 <= 0 ) /*0x40b973*/
      return 1; /*0x40b993*/
    unsigned int *v4 = *&this->m_Capacity; // eax /*0x40b975*/
    int v5; // ecx
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
int MoveFeedback::Draw(unsigned int * a2, void *a2_1, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int m_10; // edx
  m_10 = *&this->m_10; /*0x40bb90*/
  int result = 0; // eax /*0x40bb93*/
  if ( m_10 <= 0 ) /*0x40bb98*/
    return -1; /*0x40bbaf*/
  unsigned int *i; // ecx
  for ( i = *&this->m_Capacity; *i != *a2; ++i ) /*0x40bb9e*/
  {
    if ( ++result >= m_10 ) /*0x40bbad*/
      return -1; /*0x40bbad*/
  }
  return result; /*0x40bbb2*/
}
} // namespace gamemd
// 0x40BCB0
namespace gamemd {
DynamicVector * MoveFeedback::QueryInterface(char a2, int a1, int a3, int a4, int a5)
{


  void *v3; // eax
  v3 = *(void **)&a1->m_1[3]; /*0x40bcb3*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x40bcb6*/
  if ( v3 && BYTE1(a1->m_C) ) /*0x40bcc0*/
  {
    __3_YAXPAX_Z(v3); /*0x40bcc8*/
    *(unsigned int *)&a1->m_1[3] = 0; /*0x40bcd0*/
  }
  BYTE1(a1->m_C) = 0; /*0x40bcdb*/
  a1->m_8 = 0; /*0x40bce1*/
  if ( (a1 & 1) != 0 ) /*0x40bce8*/
    __3_YAXPAX_Z(a1); /*0x40bceb*/
  return a1->__pad_0; /*0x40bcf5*/

}
} // namespace gamemd
// 0x40BE50
namespace gamemd {
void MoveFeedback::Destroy(void *a1)
{

  void *v2 = *&this->m_Capacity; // eax /*0x40be56*/
  *&this->m_10 = 0; /*0x40be59*/
  if ( v2 && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x40be60*/
  {
    operator delete((v2)); /*0x40be66*/
    *&this->m_Capacity = 0; /*0x40be6e*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x40be71*/
  *&this->m_8 = 0; /*0x40be74*/
}
} // namespace gamemd
// 0x40BE80
namespace gamemd {
unsigned int MoveFeedback::GetIndex2(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x40be80*/
    return (unsigned int)(a2 - *&this->m_Capacity) >> 2; /*0x40be95*/
  else
    return 0; /*0x40be87*/
}
} // namespace gamemd
// 0x40C030
namespace gamemd {
char MoveFeedback::SetCapacity(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x40c03c*/
  {
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x40c042*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x40c048*/
      v4 = a3; /*0x40c05e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x40c05a*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x40c062*/
    if ( !v4 ) /*0x40c066*/
      return 0; /*0x40c0da*/
    if ( *&this->m_Capacity ) /*0x40c068*/
    {
      int m_8; // ecx
      m_8 = this->m_8; /*0x40c06f*/
      if ( a2 < m_8 ) /*0x40c074*/
        m_8 = a2; /*0x40c076*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->m_Capacity + 4 * i - 4) ) /*0x40c07c*/
        ++i; /*0x40c081*/
      if ( (((this->m_C) >> 8) & 0xFF) ) /*0x40c08e*/
      {
        __3_YAXPAX_Z(*&this->m_Capacity); /*0x40c099*/
        *&this->m_Capacity = 0; /*0x40c0a1*/
      }
    }
    *&this->m_Capacity = v4; /*0x40c0aa*/
    this->m_8 = a2; /*0x40c0b2*/
    (this->m_C) = ((this->m_C) & ~(0xFF << 8)) | (((a3 == 0) & 0xFF) << 8); /*0x40c0b5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVCommandClass *))(*(unsigned int *)this->m_Items + 12))(this); /*0x40c0be*/
  }
  int v7 = this->m_8; // eax /*0x40c0c1*/
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
  m_10 = *&this->m_10; /*0x40c0e0*/
  int result = 0; // eax /*0x40c0e3*/
  if ( m_10 <= 0 ) /*0x40c0e8*/
    return -1; /*0x40c0ff*/
  unsigned int *i; // ecx
  for ( i = *&this->m_Capacity; *i != *a2; ++i ) /*0x40c0ee*/
  {
    if ( ++result >= m_10 ) /*0x40c0fd*/
      return -1; /*0x40c0fd*/
  }
  return result; /*0x40c102*/
}
} // namespace gamemd
// 0x40C160
namespace gamemd {
unsigned int * MoveFeedback::MoveFeedback::Constructor(unsigned int * Block, char a2, void *a3, void *a4, void *a5)
{


  void *v3 = *&Block->__pad_004; // eax /*0x40c163*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x40c166*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x40c170*/
  {
    __3_YAXPAX_Z(v3); /*0x40c178*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x40c180*/
  }
  BYTE1(Block->m_C) = 0; /*0x40c18b*/
  Block->m_8 = 0; /*0x40c191*/
  if ( (a2 & 1) != 0 ) /*0x40c198*/
    __3_YAXPAX_Z(Block); /*0x40c19b*/
  return Block->__pad_0; /*0x40c1a5*/

}
} // namespace gamemd