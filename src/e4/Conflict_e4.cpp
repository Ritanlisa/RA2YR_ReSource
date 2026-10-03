// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12__e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_26_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/GameOption_e4.hpp"

// 0x766C10
namespace gamemd {
int Conflict_WorldDominationTour_12::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766C10)
}
}
// 0x766DC0
namespace gamemd {
AbstractClass * * Conflict_WorldDominationTour_12::Constructor_1(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766DC0)
}
}
// 0x766800
namespace gamemd {
int Conflict_WorldDominationTour_12_::ReleaseBuffer(void *a1_1, void *a2_1)
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->m_1[3]; /*0x766806*/
  this->m_10 = 0; /*0x766809*/
  if ( v2 && BYTE1(this->m_C) ) /*0x766810*/
  {
    result = (**v2)((unsigned int)v2, 3); /*0x76681d*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x76681f*/
  }
  BYTE1(this->m_C) = 0; /*0x766822*/
  this->m_8 = 0; /*0x766825*/
  return result; /*0x766828*/

}
}
// 0x766920
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::AddRef(void *a1_1)
{

  return *((unsigned int *)this + 2) < *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 16); /*0x76692d*/

}
}
// 0x766FA0
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::Release(void *a1_1)
{

  ++*((unsigned int *)this + 2); /*0x766fa2*/
  return (BOOL)(this->__pad_0); /*0x766fa5*/

}
}
// 0x766FB0
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::ddtor()
{

  --*((unsigned int *)this + 2); /*0x766fb2*/
  return (BOOL)(this->__pad_0); /*0x766fb5*/

}
}
// 0x766830
namespace gamemd {
unsigned int Conflict_WorldDominationTour_12::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x766830*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x766845*/
  else
    return 0; /*0x766837*/

}
} // namespace gamemd

// 0x766850
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Seek(unsigned int * a2, int a3, void *a3_2)
{

  int v3; // edi

  v3 = *(unsigned int *)&this->m_1[3] + 8 * a3; /*0x76685d*/
  ((ComPtr *)((ComPtr *)a2))->Constructor(); /*0x766862*/
  *a2 = (unsigned int)(&vt_rc_ptr); /*0x766867*/
  ((ComPtr *)((ComPtr *)a2))->Set(*(unsigned int *)(v3 + 4)); /*0x766873*/
  return a2; /*0x76687a*/

}
} // namespace gamemd

// 0x766960
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Constructor(char Block)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766960)
}
} // namespace gamemd

// 0x766990
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Constructor_0(char Block)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766990)
}
} // namespace gamemd

// 0x766BC0
namespace gamemd {
char Conflict_WorldDominationTour_12::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // ecx
  unsigned int *i; // eax

  m_8 = this->m_8; /*0x766bc6*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x766bcf*/
  {
    v3 = 0; /*0x766bd1*/
    if ( m_8 <= 0 ) /*0x766bd5*/
      return 1; /*0x766bfb*/
    v4 = (unsigned int *)(*(unsigned int *)&this->m_1[3] + 4); /*0x766bdd*/
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x766be0*/
    {
      ++v3; /*0x766beb*/
      v4 += 2; /*0x766bef*/
      if ( v3 >= m_8 ) /*0x766bf4*/
        return 1; /*0x766bf4*/
    }
  }
  return 0; /*0x766bf6*/

}
} // namespace gamemd

// 0x766D30
namespace gamemd {
int Conflict_WorldDominationTour_12::ddtor()
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))((char *)this + 4); /*0x766d36*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x766d3d*/
  {
    result = (**v2)((unsigned int)v2, 3); /*0x766d4a*/
    *((unsigned int *)this + 1) = 0; /*0x766d4c*/
  }
  *((unsigned char *)this + 13) = 0; /*0x766d4f*/
  *((unsigned int *)this + 2) = 0; /*0x766d52*/
  return result; /*0x766d55*/

}
} // namespace gamemd

// 0x766D60
namespace gamemd {
int Conflict_WorldDominationTour_12::Read(int a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x766d60*/
    return 0; /*0x766d68*/
  m_8 = this->m_8; /*0x766d6e*/
  result = 0; /*0x766d71*/
  if ( m_8 <= 0 ) /*0x766d75*/
    return -1; /*0x766d90*/
  for ( i = (unsigned int *)(*(unsigned int *)&this->m_1[3] + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x766d7e*/
  {
    if ( ++result >= m_8 ) /*0x766d8e*/
      return -1; /*0x766d8e*/
  }
  return result; /*0x766d6a*/

}
}
// 0x766DA0
namespace gamemd {
unsigned int Conflict_WorldDominationTour_12::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x766da0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x766db5*/
  else
    return 0; /*0x766da7*/

}
} // namespace gamemd

// 0x766F40
namespace gamemd {
int Conflict_WorldDominationTour_12::IndexOf(int a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x766f40*/
  result = 0; /*0x766f43*/
  if ( m_10 <= 0 ) /*0x766f48*/
    return -1; /*0x766f63*/
  for ( i = (unsigned int *)(*(unsigned int *)&this->m_1[3] + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x766f51*/
  {
    if ( ++result >= m_10 ) /*0x766f61*/
      return -1; /*0x766f61*/
  }
  return result; /*0x766f66*/

}
}
// 0x766FC0
namespace gamemd {
VectorClass_flat * Conflict_WorldDominationTour_12::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766FC0)
}
} // namespace gamemd

// 0x767080
namespace gamemd {
DynamicVector * Conflict_WorldDominationTour_12::Constructor_2(unsigned int * Block, char a2)
{

  void (***v3)(unsigned int, int); // ecx

  v3 = *(void (****)(unsigned int, int))&Block->m_1[3]; /*0x767083*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClassrc_ptr; /*0x767086*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x767090*/
  {
    (**v3)((unsigned int)v3, 3); /*0x76709f*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x7670a1*/
  }
  BYTE1(Block->m_C) = 0; /*0x7670ac*/
  Block->m_8 = 0; /*0x7670b2*/
  if ( (a2 & 1) != 0 ) /*0x7670b9*/
    __3_YAXPAX_Z(Block); /*0x7670bc*/
  return Block->__pad_0; /*0x7670c6*/

}
} // namespace gamemd

// 0x7670D0
namespace gamemd {
int Conflict_WorldDominationTour_12::Constructor_3(void *a1_1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7670D0)
}
} // namespace gamemd
