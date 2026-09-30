// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSPCXAnim_26_e4.hpp"
#include "e4/classes/MSPCXAnim_42_e4.hpp"
#include "e4/classes/MSPCXAnim_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5CEAB0
namespace gamemd {
int MSPCXAnim::Stub()
{
    return *((unsigned int *)this + 164);
}
} // namespace gamemd
// 0x5D09C0
namespace gamemd {
AbstractClass * * MSPCXAnim_42::AllocCopyData_8B(int a2, unsigned int * a3)
{
  unsigned int *v4; // ebx
  void * v5;
  unsigned int *v6; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x5d09cc*/
  {
    v4 = a3; /*0x5d09d2*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d09dc*/
    {
      v6 = a3; /*0x5d0a04*/
    }
    else
    {
      v5 = (void *)((int)(RA2_OPNEW(8 * a2)));
      if ( v5 ) /*0x5d09f0*/
        v6 = (unsigned int *)v5; /*0x5d09f5*/
      else
        v6 = 0; /*0x5d09fd*/
    }
        *((unsigned char *)this + 12) = 1;
    if ( !v6 ) /*0x5d0a10*/
      return 0; /*0x5d0a90*/
        if ( *((unsigned int *)this + 1) )
    {
            v7 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d0a1e*/
        m_8 = a2; /*0x5d0a20*/
      v8 = 0; /*0x5d0a22*/
      if ( m_8 > 0 ) /*0x5d0a26*/
      {
        do /*0x5d0a3e*/
        {
                    v9 = *((unsigned int *)this + 1);
          ++v8; /*0x5d0a2b*/
          v6[2 * v8 - 2] = *(unsigned int *)(v9 + 8 * v8 - 8); /*0x5d0a32*/
          v6[2 * v8 - 1] = *(unsigned int *)(v9 + 8 * v8 - 4); /*0x5d0a3a*/
        }
        while ( v8 < m_8 ); /*0x5d0a3e*/
        v4 = a3; /*0x5d0a40*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d0a4f*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v6;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = v4 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v10 = *((unsigned int *)this + 2);
    if ( v10 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v10;
  return 1; /*0x5d0a84*/
}
}
// 0x5CED70
MSPCXAnim * MSPCXAnim::QueryInterface(char a2)
{
  void (***v3)(unsigned int, int); // ecx

    v3 = (void (***)(unsigned int, int))*(Block + 9);
    *Block = &vt_MSPCXAnim;
  if ( v3 ) /*0x5ced7e*/
    (**v3)(v3, 1); /*0x5ced84*/
    *Block = &vt_MSAnim;
  if ( (a2 & 1) != 0 ) /*0x5ced92*/
    RA2_OPDEL(); /*0x5ced95*/
  return this; /*0x5ced9f*/
}
// 0x5D05A0
namespace gamemd {
void MSPCXAnim_42::FreeData()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d05a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d05b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D05D0
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount_8B(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x5d05d7*/
}
} // namespace gamemd

// 0x5D0610
namespace gamemd {
void MSPCXAnim_42::FreeData_0()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d0616*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d0626*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D0640
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d0647*/
}
} // namespace gamemd

// 0x5D0670
namespace gamemd {
void MSPCXAnim_42::FreeData_1()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d0676*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d0686*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D06A0
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d06a7*/
}
} // namespace gamemd

// 0x5D06D0
namespace gamemd {
void MSPCXAnim_26::ddtor(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d06d6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d06e6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D0700
namespace gamemd {
unsigned int MSPCXAnim_26::Draw(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d0707*/
}
} // namespace gamemd

// 0x5D0720
namespace gamemd {
int MSPCXAnim_26::GetFrame(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D0730
namespace gamemd {
void MSPCXAnim_26::FreeData()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d0736*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d0746*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D0760
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d0767*/
}
} // namespace gamemd

// 0x5D0780
namespace gamemd {
int MSPCXAnim_42::GetFrame(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5D0790
namespace gamemd {
void MSPCXAnim_26::FreeData_0()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5d0796*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5d07a6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D07C0
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount_0(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d07c7*/
}
} // namespace gamemd

// 0x5D0AA0
namespace gamemd {
int MSPCXAnim_42::FindIndex_Pair(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d0aa5*/
  if ( m_10 <= 0 ) /*0x5d0aab*/
    return -1; /*0x5d0acc*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
  {
    if ( ++result >= m_10 ) /*0x5d0aca*/
      return -1; /*0x5d0aca*/
  }
  return result; /*0x5d0acf*/
}
}
// 0x5D0C60
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_4B(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0c6c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d0c78*/
      v4 = a3; /*0x5d0c8e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d0c8a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d0c96*/
      return 0; /*0x5d0d0a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d0ca4*/
        m_8 = a2; /*0x5d0ca6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d0cb1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d0cc9*/
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
  return 1; /*0x5d0cfe*/
}
} // namespace gamemd

// 0x5D0D10
namespace gamemd {
int MSPCXAnim_42::FindIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d0d13*/
  if ( m_10 <= 0 ) /*0x5d0d18*/
    return -1; /*0x5d0d2f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d0d2d*/
      return -1; /*0x5d0d2d*/
  }
  return result; /*0x5d0d32*/
}
}
// 0x5D0EC0
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_4B_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0ecc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d0ed8*/
      v4 = a3; /*0x5d0eee*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d0eea*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d0ef6*/
      return 0; /*0x5d0f6a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d0f04*/
        m_8 = a2; /*0x5d0f06*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d0f11*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d0f29*/
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
  return 1; /*0x5d0f5e*/
}
} // namespace gamemd

// 0x5D0F70
namespace gamemd {
int MSPCXAnim_42::FindIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d0f73*/
  if ( m_10 <= 0 ) /*0x5d0f78*/
    return -1; /*0x5d0f8f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d0f8d*/
      return -1; /*0x5d0f8d*/
  }
  return result; /*0x5d0f92*/
}
} // namespace gamemd

// 0x5D0FA0
namespace gamemd {
char MSPCXAnim_26::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d0fad*/
  {
    v3 = 0; /*0x5d0faf*/
    if ( m_8 <= 0 ) /*0x5d0fb3*/
      return 1; /*0x5d0fd3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d0fbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d0fc4*/
    {
      ++v3; /*0x5d0fc6*/
      ++v4; /*0x5d0fc7*/
      if ( v3 >= m_8 ) /*0x5d0fcc*/
        return 1; /*0x5d0fcc*/
    }
  }
  return 0; /*0x5d0fce*/
}
} // namespace gamemd

// 0x5D0FE0
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0fec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d0ffc*/
      v4 = a3; /*0x5d1012*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d100e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d101a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d1031*/
          m_8 = a2; /*0x5d1033*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d103e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x5d1056*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d1078*/
    }
    else
    {
      return 0; /*0x5d101f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d1088*/
  }
}
} // namespace gamemd

// 0x5D1090
namespace gamemd {
void MSPCXAnim_26::FreeData_1()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x5d10a3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D10C0
namespace gamemd {
int MSPCXAnim_26::FindIndex(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d10c8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d10d1*/
  if ( m_8 <= 0 ) /*0x5d10d5*/
    return -1; /*0x5d10ec*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x5d10db*/
  {
    if ( ++result >= m_8 ) /*0x5d10ea*/
      return -1; /*0x5d10ea*/
  }
  return result; /*0x5d10ca*/
}
} // namespace gamemd

// 0x5D1100
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount_1(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d1107*/
}
} // namespace gamemd

// 0x5D1120
namespace gamemd {
char MSPCXAnim_26::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d112c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d1138*/
      v4 = a3; /*0x5d114e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d114a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d1156*/
      return 0; /*0x5d11ca*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d1164*/
        m_8 = a2; /*0x5d1166*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d1171*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d1189*/
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
  return 1; /*0x5d11be*/
}
} // namespace gamemd

// 0x5D11D0
namespace gamemd {
int MSPCXAnim_26::Load(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d11d3*/
  if ( m_10 <= 0 ) /*0x5d11d8*/
    return -1; /*0x5d11ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d11ed*/
      return -1; /*0x5d11ed*/
  }
  return result; /*0x5d11f2*/
}
} // namespace gamemd

// 0x5D1200
namespace gamemd {
char MSPCXAnim_42::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5d120d*/
  {
    v3 = 0; /*0x5d120f*/
    if ( m_8 <= 0 ) /*0x5d1213*/
      return 1; /*0x5d1233*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d121b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d1224*/
    {
      ++v3; /*0x5d1226*/
      ++v4; /*0x5d1227*/
      if ( v3 >= m_8 ) /*0x5d122c*/
        return 1; /*0x5d122c*/
    }
  }
  return 0; /*0x5d122e*/
}
} // namespace gamemd

// 0x5D1240
namespace gamemd {
char MSPCXAnim_42::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5d124c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d125c*/
      v4 = a3; /*0x5d1272*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d126e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x5d127a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x5d1291*/
          m_8 = a2; /*0x5d1293*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x5d129e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x5d12b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5d12d8*/
    }
    else
    {
      return 0; /*0x5d127f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x5d12e8*/
  }
}
} // namespace gamemd

// 0x5D12F0
namespace gamemd {
void MSPCXAnim_42::ddtor(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x5d1303*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5D1320
namespace gamemd {
int MSPCXAnim_42::Load(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5d1328*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x5d1331*/
  if ( m_8 <= 0 ) /*0x5d1335*/
    return -1; /*0x5d134c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x5d133b*/
  {
    if ( ++result >= m_8 ) /*0x5d134a*/
      return -1; /*0x5d134a*/
  }
  return result; /*0x5d132a*/
}
} // namespace gamemd

// 0x5D1360
namespace gamemd {
unsigned int MSPCXAnim_42::Draw(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5d1367*/
}
} // namespace gamemd

// 0x5D1380
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d138c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d1398*/
      v4 = a3; /*0x5d13ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d13aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d13b6*/
      return 0; /*0x5d142a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d13c4*/
        m_8 = a2; /*0x5d13c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d13d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d13e9*/
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
  return 1; /*0x5d141e*/
}
} // namespace gamemd

// 0x5D1430
namespace gamemd {
int MSPCXAnim_26::FindIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d1433*/
  if ( m_10 <= 0 ) /*0x5d1438*/
    return -1; /*0x5d144f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d144d*/
      return -1; /*0x5d144d*/
  }
  return result; /*0x5d1452*/
}
} // namespace gamemd

// 0x5D15E0
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B_1(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d15ec*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5d15f8*/
      v4 = a3; /*0x5d160e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5d160a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5d1616*/
      return 0; /*0x5d168a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5d1624*/
        m_8 = a2; /*0x5d1626*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5d1631*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x5d1649*/
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
  return 1; /*0x5d167e*/
}
} // namespace gamemd

// 0x5D1690
namespace gamemd {
int MSPCXAnim_26::FindIndex_1(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5d1693*/
  if ( m_10 <= 0 ) /*0x5d1698*/
    return -1; /*0x5d16af*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x5d16ad*/
      return -1; /*0x5d16ad*/
  }
  return result; /*0x5d16b2*/
}
} // namespace gamemd

// 0x5D1710
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_Point2D_(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_Point2D_vftable; /*0x5d1716*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1728*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1748*/
    RA2_OPDEL(); /*0x5d174b*/
  return this; /*0x5d1755*/
}
} // namespace gamemd

// 0x5D17B0
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_MSTextEntry___(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MSTextEntry___vftable; /*0x5d17b6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d17c8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d17e8*/
    RA2_OPDEL(); /*0x5d17eb*/
  return this; /*0x5d17f5*/
}
} // namespace gamemd

// 0x5D1850
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_MapSelection___(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MapSelection___vftable; /*0x5d1856*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1868*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1888*/
    RA2_OPDEL(); /*0x5d188b*/
  return this; /*0x5d1895*/
}
} // namespace gamemd

// 0x5D18A0
namespace gamemd {
VectorClass_flat * MSPCXAnim_26::Constructor_VectorClass_MapStage___(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MapStage___vftable; /*0x5d18a6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d18b8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d18d8*/
    RA2_OPDEL(); /*0x5d18db*/
  return this; /*0x5d18e5*/
}
} // namespace gamemd

// 0x5D18F0
namespace gamemd {
DynamicVector * MSPCXAnim_26::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MapStage___vftable; /*0x5d18f6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1908*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1928*/
    RA2_OPDEL(); /*0x5d192b*/
  return this; /*0x5d1935*/
}
} // namespace gamemd

// 0x5D1940
namespace gamemd {
VectorClass_flat * MSPCXAnim_42::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MSAnimEntry___vftable; /*0x5d1946*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1958*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1978*/
    RA2_OPDEL(); /*0x5d197b*/
  return this; /*0x5d1985*/
}
} // namespace gamemd

// 0x5D1990
namespace gamemd {
DynamicVector * MSPCXAnim_26::Constructor_VectorClass_MSAnimEntry___(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MSAnimEntry___vftable; /*0x5d1996*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d19a8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d19c8*/
    RA2_OPDEL(); /*0x5d19cb*/
  return this; /*0x5d19d5*/
}
} // namespace gamemd

// 0x5D1A30
namespace gamemd {
DynamicVector * MSPCXAnim_26::Constructor_VectorClass_MSSfxEntry___(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MSSfxEntry___vftable; /*0x5d1a36*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5d1a48*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5d1a68*/
    RA2_OPDEL(); /*0x5d1a6b*/
  return this; /*0x5d1a75*/
}
} // namespace gamemd
