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

// 0x5D55A0
namespace gamemd {
AbstractClass * * MSFont_18::SetCapacity8(int a2, unsigned int * a3)
{
  int v3; // ebp
  unsigned int *v5; // edi
  void * v6;
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x5d55a2*/
  if ( a2 ) /*0x5d55ae*/
  {
    v5 = a3; /*0x5d55b4*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d55bd*/
    {
      v9 = a3; /*0x5d55f3*/
      if ( a2 - 1 >= 0 ) /*0x5d55f7*/
      {
        v10 = a2; /*0x5d55f9*/
        do /*0x5d5603*/
        {
          *v9 = 0; /*0x5d55fa*/
          v9[1] = 0; /*0x5d55fc*/
          v9 += 2; /*0x5d55ff*/
          --v10; /*0x5d5602*/
        }
        while ( v10 ); /*0x5d5603*/
      }
    }
    else
    {
      v6 = (void *)((int)(RA2_OPNEW(8 * a2)));
      if ( v6 ) /*0x5d55d1*/
      {
        v7 = (unsigned int *)v6; /*0x5d55d6*/
        if ( a2 - 1 >= 0 ) /*0x5d55da*/
        {
          v8 = a2; /*0x5d55dc*/
          do /*0x5d55e6*/
          {
            *v7 = 0; /*0x5d55dd*/
            v7[1] = 0; /*0x5d55df*/
            v7 += 2; /*0x5d55e2*/
            --v8; /*0x5d55e5*/
          }
          while ( v8 ); /*0x5d55e6*/
        }
        v5 = (unsigned int *)v6; /*0x5d55e8*/
      }
      else
      {
        v5 = 0; /*0x5d55ec*/
      }
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x5d560b*/
      return 0; /*0x5d5694*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d561b*/
        m_8 = a2; /*0x5d561d*/
      v12 = 0; /*0x5d561f*/
      if ( m_8 > 0 ) /*0x5d5623*/
      {
        do /*0x5d5642*/
        {
          v13 = 2 * v12; /*0x5d5628*/
                    v14 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v12++);
          v5[v13] = *v14; /*0x5d5638*/
          v5[v13 + 1] = v14[1]; /*0x5d563e*/
        }
        while ( v12 < m_8 ); /*0x5d5642*/
        v3 = a2; /*0x5d5644*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d5653*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v15 = *((unsigned int *)this + 2);
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
  return 1; /*0x5d5688*/
}
}
// 0x5D3450
MSFont * MSFont::QueryInterface(char a2)
{
  MSFont::Constructor_MSFont(); /*0x5d3453*/
  if ( (a2 & 1) != 0 ) /*0x5d345d*/
    RA2_OPDEL(); /*0x5d3460*/
  return this; /*0x5d346a*/
}
// 0x5D5080
namespace gamemd {
void MSFont_18::ClearBuffer(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d5086*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d5096*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D50B0
namespace gamemd {
unsigned int MSFont_18::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d50b7*/
}
} // namespace gamemd

// 0x5D50D0
namespace gamemd {
int MSFont_18::GetSize(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D50E0
namespace gamemd {
void MSFont_18::Destroy(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d50e6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d50f6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D5110
namespace gamemd {
unsigned int MSFont_18::PointerToIndex8(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d515d*/
  {
    v3 = 0; /*0x5d515f*/
    if ( m_8 <= 0 ) /*0x5d5163*/
      return 1; /*0x5d5183*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d51ac*/
      v4 = a3; /*0x5d51c2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d51be*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d51ca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d51e1*/
          m_8 = a2; /*0x5d51e3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d51ee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x5d5206*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d5228*/
    }
    else
    {
      return 0; /*0x5d51cf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d5238*/
  }
}
} // namespace gamemd

// 0x5D5240
namespace gamemd {
void MSFont_18::ddtor(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x5d5253*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D5270
namespace gamemd {
int MSFont_18::Create(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d5278*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d5281*/
  if ( m_8 <= 0 ) /*0x5d5285*/
    return -1; /*0x5d529c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x5d528b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d52e8*/
      v4 = a3; /*0x5d52fe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d52fa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d5306*/
      return 0; /*0x5d537a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d5314*/
        m_8 = a2; /*0x5d5316*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d5321*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d5339*/
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d5383*/
  if ( m_10 <= 0 ) /*0x5d5388*/
    return -1; /*0x5d539f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d56a5*/
  if ( m_10 <= 0 ) /*0x5d56ab*/
    return -1; /*0x5d56cc*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x5d56ca*/
      return -1; /*0x5d56ca*/
  }
  return result; /*0x5d56cf*/
}
}
// 0x5D56E0
namespace gamemd {
VectorClass_flat * MSFont_18::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HWND_____vftable; /*0x5d56e6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d56f8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d5718*/
    RA2_OPDEL(); /*0x5d571b*/
  return this; /*0x5d5725*/
}
} // namespace gamemd

// 0x5D5730
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_HWND_____(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HWND_____vftable; /*0x5d5736*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d5748*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d5768*/
    RA2_OPDEL(); /*0x5d576b*/
  return this; /*0x5d5775*/
}
} // namespace gamemd

// 0x5D57D0
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_AcceleratorTracker_(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AcceleratorTracker_vftable; /*0x5d57d6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d57e8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d5808*/
    RA2_OPDEL(); /*0x5d580b*/
  return this; /*0x5d5815*/
}
} // namespace gamemd
