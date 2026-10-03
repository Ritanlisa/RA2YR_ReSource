// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSFont_18_e4.hpp"
#include "e4/classes/MSFont_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/MSFrameAnim_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MSEngine_e4.hpp"

// 0x5D55A0
namespace gamemd {
AbstractClass * * MSFont_18::SetCapacity8(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D55A0)
}
}
// 0x5D3450
namespace gamemd {  // G42.18c ns repair
MSFont * MSFont::QueryInterface(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D3450)
}
}  // G42.18c ns repair
// 0x5D5080
namespace gamemd {
void MSFont_18::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d5086*/
  this->m_10 = 0; /*0x5d5089*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d5090*/
  {
    __3_YAXPAX_Z(v2); /*0x5d5096*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5d509e*/
  }
  BYTE1(this->m_C) = 0; /*0x5d50a1*/
  this->m_8 = 0; /*0x5d50a4*/

}
} // namespace gamemd

// 0x5D50B0
namespace gamemd {
unsigned int MSFont_18::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x5d50b0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5d50c5*/
  else
    return 0; /*0x5d50b7*/

}
} // namespace gamemd

// 0x5D50D0
namespace gamemd {
int MSFont_18::GetSize(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d50da*/

}
} // namespace gamemd

// 0x5D50E0
namespace gamemd {
void MSFont_18::Destroy()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5d50e6*/
  this->m_10 = 0; /*0x5d50e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5d50f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d50f6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5d50fe*/
  }
  BYTE1(this->m_C) = 0; /*0x5d5101*/
  this->m_8 = 0; /*0x5d5104*/

}
} // namespace gamemd

// 0x5D5110
namespace gamemd {
unsigned int MSFont_18::PointerToIndex8(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x5d5110*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x5d5125*/
  else
    return 0; /*0x5d5117*/

}
} // namespace gamemd

// 0x5D5150
namespace gamemd {
char MSFont_18::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5d5152*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d515d*/
  {
    v3 = 0; /*0x5d515f*/
    if ( m_8 <= 0 ) /*0x5d5163*/
      return 1; /*0x5d5183*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x5d5165*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d516b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d5174*/
    {
      ++v3; /*0x5d5176*/
      ++v4; /*0x5d5177*/
      if ( v3 >= m_8 ) /*0x5d517c*/
        return 1; /*0x5d517c*/
    }
  }
  return 0; /*0x5d517e*/

}
} // namespace gamemd

// 0x5D5190
namespace gamemd {
char MSFont_18::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d519c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d51a6*/
    if ( a3 ) /*0x5d51ac*/
      v4 = a3; /*0x5d51c2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5d51be*/
    LOBYTE(this->m_C) = 1; /*0x5d51c6*/
    if ( v4 ) /*0x5d51ca*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x5d51d5*/
      {
        m_8 = this->m_8; /*0x5d51dc*/
        if ( a2 < m_8 ) /*0x5d51e1*/
          m_8 = a2; /*0x5d51e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x5d51e9*/
          ++i; /*0x5d51ee*/
        if ( BYTE1(this->m_C) ) /*0x5d51fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5206*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x5d520e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x5d5217*/
      this->m_8 = a2; /*0x5d521f*/
      BYTE1(this->m_C) = a3 == 0; /*0x5d5222*/
      return 1; /*0x5d5228*/
    }
    else
    {
      return 0; /*0x5d51cf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5d5232*/
    return 1; /*0x5d5238*/
  }

}
} // namespace gamemd

// 0x5D5240
namespace gamemd {
void MSFont_18::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5d524d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5253*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5d525b*/
  }
  BYTE1(this->m_C) = 0; /*0x5d525e*/
  this->m_8 = 0; /*0x5d5261*/

}
} // namespace gamemd

// 0x5D5270
namespace gamemd {
int MSFont_18::Create(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d5270*/
    return 0; /*0x5d5278*/
  m_8 = this->m_8; /*0x5d527e*/
  result = 0; /*0x5d5281*/
  if ( m_8 <= 0 ) /*0x5d5285*/
    return -1; /*0x5d529c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d528b*/
  {
    if ( ++result >= m_8 ) /*0x5d529a*/
      return -1; /*0x5d529a*/
  }
  return result; /*0x5d527a*/

}
} // namespace gamemd

// 0x5D52B0
namespace gamemd {
unsigned int MSFont_18::Draw(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x5d52b0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5d52c5*/
  else
    return 0; /*0x5d52b7*/

}
} // namespace gamemd

// 0x5D52D0
namespace gamemd {
char MSFont_18::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d52dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5d52e2*/
    if ( a3 ) /*0x5d52e8*/
      v4 = a3; /*0x5d52fe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5d52fa*/
    LOBYTE(this->m_C) = 1; /*0x5d5302*/
    if ( !v4 ) /*0x5d5306*/
      return 0; /*0x5d537a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x5d5308*/
    {
      m_8 = this->m_8; /*0x5d530f*/
      if ( a2 < m_8 ) /*0x5d5314*/
        m_8 = a2; /*0x5d5316*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x5d531c*/
        ++i; /*0x5d5321*/
      if ( BYTE1(this->m_C) ) /*0x5d532e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5d5339*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x5d5341*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x5d534a*/
    this->m_8 = a2; /*0x5d5352*/
    BYTE1(this->m_C) = a3 == 0; /*0x5d5355*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5d535e*/
  }
  v7 = this->m_8; /*0x5d5361*/
  if ( v7 < this->m_10 ) /*0x5d5369*/
    this->m_10 = v7; /*0x5d536b*/
  return 1; /*0x5d536e*/

}
} // namespace gamemd

// 0x5D5380
namespace gamemd {
int MSFont_18::FindItem(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x5d5380*/
  result = 0; /*0x5d5383*/
  if ( m_10 <= 0 ) /*0x5d5388*/
    return -1; /*0x5d539f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d538e*/
  {
    if ( ++result >= m_10 ) /*0x5d539d*/
      return -1; /*0x5d539d*/
  }
  return result; /*0x5d53a2*/

}
}
// 0x5D56A0
namespace gamemd {
int MSFont_18::FindPair8(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x5d56a0*/
  result = 0; /*0x5d56a5*/
  if ( m_10 <= 0 ) /*0x5d56ab*/
    return -1; /*0x5d56cc*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d56b1*/
  {
    if ( ++result >= m_10 ) /*0x5d56ca*/
      return -1; /*0x5d56ca*/
  }
  return result; /*0x5d56cf*/

}
}
// 0x5D56E0
namespace gamemd {
VectorClass_flat * MSFont_18::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5d56e3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x5d56e6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5d56f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d56f8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5d5700*/
  }
  BYTE1(Block->m_C) = 0; /*0x5d570b*/
  Block->m_8 = 0; /*0x5d5711*/
  if ( (a2 & 1) != 0 ) /*0x5d5718*/
    __3_YAXPAX_Z(Block); /*0x5d571b*/
  return Block->__pad_0; /*0x5d5725*/

}
} // namespace gamemd

// 0x5D5730
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_HWND_____(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5d5733*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x5d5736*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5d5740*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5748*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5d5750*/
  }
  BYTE1(Block->m_C) = 0; /*0x5d575b*/
  Block->m_8 = 0; /*0x5d5761*/
  if ( (a2 & 1) != 0 ) /*0x5d5768*/
    __3_YAXPAX_Z(Block); /*0x5d576b*/
  return Block->__pad_0; /*0x5d5775*/

}
} // namespace gamemd

// 0x5D57D0
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_AcceleratorTracker_(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5d57d3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x5d57d6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x5d57e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d57e8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x5d57f0*/
  }
  BYTE1(Block->m_C) = 0; /*0x5d57fb*/
  Block->m_8 = 0; /*0x5d5801*/
  if ( (a2 & 1) != 0 ) /*0x5d5808*/
    __3_YAXPAX_Z(Block); /*0x5d580b*/
  return Block->__pad_0; /*0x5d5815*/

}
} // namespace gamemd
