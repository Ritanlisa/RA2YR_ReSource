// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/MapSeedClass_18_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x5A5B50
namespace gamemd {
MapSeedClass * * MapSeedClass::PlaceBuildingClusters(MapSeedClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5A5B50)
}
} // namespace gamemd
// 0x5A76E0
namespace gamemd {
char MapSeedClass::ValidateRectBounds(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5A76E0)
}
} // namespace gamemd
// 0x597FA0
namespace gamemd {
wchar_t * MapSeedClass::GetCell()
{

  return GetStringCSF((wchar_t *)(unsigned int *)((char *)&stru_82BA00 + 2), 0,(const char *)((unsigned int *)((char *)&stru_82BA00 + 11)), 5578); /*0x597fb6*/

}
} // namespace gamemd
// 0x597FC0
namespace gamemd {
wchar_t * MapSeedClass::SetCell()
{

  return GetStringCSF((wchar_t *)(unsigned int *)((char *)&stru_82BA00 + 6), 0,(const char *)((unsigned int *)((char *)&stru_82BA00 + 11)), 5584); /*0x597fd6*/

}
} // namespace gamemd
// 0x597FE0
namespace gamemd {
wchar_t * MapSeedClass::Validate()
{

  return GetStringCSF((wchar_t *)(unsigned int *)((char *)&stru_82BA00 + 11), 0,(const char *)((unsigned int *)((char *)&stru_82BA00 + 11)), 5590); /*0x597ff6*/

}
} // namespace gamemd
// 0x5AC270
namespace gamemd {
MapSeedClass * MapSeedClass::QueryInterface(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AC270)
}
} // namespace gamemd
// 0x5AC4C0
namespace gamemd {
void MapSeedClass_18::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5ac4c6*/
  this->m_10 = 0; /*0x5ac4c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5ac4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac4d6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5ac4de*/
  }
  BYTE1(this->m_C) = 0; /*0x5ac4e1*/
  this->m_8 = 0; /*0x5ac4e4*/

}
} // namespace gamemd

// 0x5AC4F0
namespace gamemd {
unsigned int MapSeedClass_18::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x5ac4f0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5ac505*/
  else
    return 0; /*0x5ac4f7*/

}
} // namespace gamemd

// 0x5AC510
namespace gamemd {
int MapSeedClass_18::GetCell(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5ac51a*/

}
} // namespace gamemd

// 0x5ACA60
namespace gamemd {
char MapSeedClass_18::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5aca62*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5aca6d*/
  {
    v3 = 0; /*0x5aca6f*/
    if ( m_8 <= 0 ) /*0x5aca73*/
      return 1; /*0x5aca93*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x5aca75*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5aca7b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5aca84*/
    {
      ++v3; /*0x5aca86*/
      ++v4; /*0x5aca87*/
      if ( v3 >= m_8 ) /*0x5aca8c*/
        return 1; /*0x5aca8c*/
    }
  }
  return 0; /*0x5aca8e*/

}
} // namespace gamemd

// 0x5ACAA0
namespace gamemd {
char MapSeedClass_18::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5acaac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5acab6*/
    if ( a3 ) /*0x5acabc*/
      v4 = a3; /*0x5acad2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5acace*/
    LOBYTE(this->m_C) = 1; /*0x5acad6*/
    if ( v4 ) /*0x5acada*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x5acae5*/
      {
        m_8 = this->m_8; /*0x5acaec*/
        if ( a2 < m_8 ) /*0x5acaf1*/
          m_8 = a2; /*0x5acaf3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x5acaf9*/
          ++i; /*0x5acafe*/
        if ( BYTE1(this->m_C) ) /*0x5acb0b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acb16*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x5acb1e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x5acb27*/
      this->m_8 = a2; /*0x5acb2f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5acb32*/
      return 1; /*0x5acb38*/
    }
    else
    {
      return 0; /*0x5acadf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5acb42*/
    return 1; /*0x5acb48*/
  }

}
} // namespace gamemd

// 0x5ACB50
namespace gamemd {
void MapSeedClass_18::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5acb5d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acb63*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5acb6b*/
  }
  BYTE1(this->m_C) = 0; /*0x5acb6e*/
  this->m_8 = 0; /*0x5acb71*/

}
} // namespace gamemd

// 0x5ACB80
namespace gamemd {  // G42.18c ns repair
int MapSeedClass::GenerateSeed(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->q00C) ) /*0x5acb80*/
    return 0; /*0x5acb88*/
  m_8 = this->q008; /*0x5acb8e*/
  result = 0; /*0x5acb91*/
  if ( m_8 <= 0 ) /*0x5acb95*/
    return -1; /*0x5acbac*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5acb9b*/
  {
    if ( ++result >= m_8 ) /*0x5acbaa*/
      return -1; /*0x5acbaa*/
  }
  return result; /*0x5acb8a*/

}
}  // G42.18c ns repair
// 0x5ACBC0
namespace gamemd {
unsigned int MapSeedClass_18::Generate(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x5acbc0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5acbd5*/
  else
    return 0; /*0x5acbc7*/

}
} // namespace gamemd

// 0x5ACBE0
namespace gamemd {
char MapSeedClass_18::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5acbec*/
  {
    LOBYTE(this->m_C) = 0; /*0x5acbf2*/
    if ( a3 ) /*0x5acbf8*/
      v4 = a3; /*0x5acc0e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5acc0a*/
    LOBYTE(this->m_C) = 1; /*0x5acc12*/
    if ( !v4 ) /*0x5acc16*/
      return 0; /*0x5acc8a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x5acc18*/
    {
      m_8 = this->m_8; /*0x5acc1f*/
      if ( a2 < m_8 ) /*0x5acc24*/
        m_8 = a2; /*0x5acc26*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x5acc2c*/
        ++i; /*0x5acc31*/
      if ( BYTE1(this->m_C) ) /*0x5acc3e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5acc49*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x5acc51*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x5acc5a*/
    this->m_8 = a2; /*0x5acc62*/
    BYTE1(this->m_C) = a3 == 0; /*0x5acc65*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5acc6e*/
  }
  v7 = this->m_8; /*0x5acc71*/
  if ( v7 < this->m_10 ) /*0x5acc79*/
    this->m_10 = v7; /*0x5acc7b*/
  return 1; /*0x5acc7e*/

}
} // namespace gamemd

// 0x5ACC90
namespace gamemd {
int MapSeedClass_18::FindItem(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x5acc90*/
  result = 0; /*0x5acc93*/
  if ( m_10 <= 0 ) /*0x5acc98*/
    return -1; /*0x5accaf*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5acc9e*/
  {
    if ( ++result >= m_10 ) /*0x5accad*/
      return -1; /*0x5accad*/
  }
  return result; /*0x5accb2*/

}
}
// 0x5AD430
namespace gamemd {
VectorClass_flat * DynamicVector::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x005AD430.json)
}
} // namespace gamemd

// 0x5AD480
namespace gamemd {
DynamicVector * MapSeedClass_18::Constructor_VectorClass__WIN32_FIND_DATAA___(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AD480)
}
} // namespace gamemd
