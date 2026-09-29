// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x478340
namespace gamemd {
AbstractClass * * FilePipe_38::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  void * v6;
  unsigned char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    v5 = a3; /*0x478354*/
    IDA_LOBYTE(this->q00C) = 0; /*0x478358*/
    if ( a3 ) /*0x47835d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478396*/
      {
        v9 = a3 + 2; /*0x478398*/
        v10 = a2; /*0x47839b*/
        do /*0x4783a8*/
        {
          *(v9 - 2) = 0; /*0x47839c*/
          *(v9 - 1) = 0; /*0x47839f*/
          *v9 = 0; /*0x4783a2*/
          v9 += 3; /*0x4783a4*/
          --v10; /*0x4783a7*/
        }
        while ( v10 ); /*0x4783a8*/
      }
    }
    else
    {
      v6 = (void *)((int)(RA2_OPNEW(3 * a2)));
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          v7 = (unsigned char *)(v6 + 2); /*0x478377*/
          v8 = a2; /*0x47837a*/
          do /*0x478387*/
          {
            *(v7 - 2) = 0; /*0x47837b*/
            *(v7 - 1) = 0; /*0x47837e*/
            *v7 = 0; /*0x478381*/
            v7 += 3; /*0x478383*/
            --v8; /*0x478386*/
          }
          while ( v8 ); /*0x478387*/
        }
        v5 = (char *)v6; /*0x478389*/
      }
      else
      {
        v5 = 0; /*0x47838d*/
      }
    }
    IDA_LOBYTE(this->q00C) = 1; /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( *(unsigned int *)&this->Items ) /*0x4783bb*/
      {
        m_8 = this->q008; /*0x4783c0*/
        if ( a2 < m_8 ) /*0x4783c5*/
          m_8 = a2; /*0x4783c7*/
        if ( m_8 > 0 ) /*0x4783cb*/
        {
          v13 = 0; /*0x4783cd*/
          do /*0x4783e9*/
          {
            v14 = *(unsigned int *)&this->Items + v13; /*0x4783d4*/
            v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --m_8; /*0x4783dc*/
            *(unsigned short *)v15 = *(unsigned short *)v14; /*0x4783e0*/
            v15[2] = *(unsigned char *)(v14 + 2); /*0x4783e6*/
          }
          while ( m_8 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( this->IsAllocated ) /*0x4783f1*/
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4783fa*/
          *(unsigned int *)&this->Items = 0; /*0x478402*/
        }
      }
      *(void **)&this->Items = v5; /*0x47840d*/
      this->q008 = v3; /*0x478413*/
      this->IsAllocated = a3 == 0; /*0x478416*/
      return 1; /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VRGBClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x478426*/
    return 1; /*0x47842c*/
  }
}
}
// 0x4778A0
namespace gamemd {
void FilePipe_30::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x4778a6*/
  this->q010 = 0; /*0x4778a9*/
  if ( v2 && this->IsAllocated ) /*0x4778b0*/
  {
    RA2_OPDEL(v2); /*0x4778b6*/
    *(unsigned int *)&this->q004 = 0; /*0x4778be*/
  }
  this->IsAllocated = 0; /*0x4778c1*/
  this->m_8 = 0; /*0x4778c4*/
}
} // namespace gamemd

// 0x4778D0
namespace gamemd {
unsigned int FilePipe_30::Write(int a2)
{
  if ( this->q00C ) /*0x4778d0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x4778e5*/
  else
    return 0; /*0x4778d7*/
}
} // namespace gamemd

// 0x477960
namespace gamemd {
int FilePipe_38::Seek(int a2, int a3)
{
  int v3; // ecx

  v3 = *(unsigned int *)&this->Items + 3 * a3; /*0x47796d*/
  *(unsigned short *)a2 = *(unsigned short *)v3; /*0x477978*/
  *(unsigned char *)(a2 + 2) = *(unsigned char *)(v3 + 2); /*0x47797f*/
  return a2; /*0x47797b*/
}
} // namespace gamemd

// 0x477A70
namespace gamemd {
TypeList_flat * FilePipe_30::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)this->q004));
  this->vfptr = (unsigned int)((void*)&VectorClass_TechnoTypeClass___vftable);
  if ( v3 && this->IsAllocated ) /*0x477a80*/
  {
    RA2_OPDEL(v3); /*0x477a88*/
    *(unsigned int *)&this->q004 = 0; /*0x477a90*/
  }
  this->IsAllocated = (gamemd::TypeList_flat *)(0);
  this->Capacity = (int)((gamemd::TypeList_flat *)(0));
  if ( (a2 & 1) != 0 ) /*0x477aa8*/
    RA2_OPDEL(); /*0x477aab*/
  return &this->vfptr; /*0x477ab5*/
}
} // namespace gamemd

// 0x478140
namespace gamemd {
char FilePipe_30::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x47814c*/
  {
    this->q00C = 0; /*0x478152*/
    if ( a3 ) /*0x478158*/
      v4 = a3; /*0x47816e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x47816a*/
    this->q00C = 1; /*0x478172*/
    if ( !v4 ) /*0x478176*/
      return 0; /*0x4781ea*/
    if ( *(unsigned int *)&this->q004 ) /*0x478178*/
    {
      m_8 = this->m_8; /*0x47817f*/
      if ( a2 < m_8 ) /*0x478184*/
        m_8 = a2; /*0x478186*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x47818c*/
        ++i; /*0x478191*/
      if ( this->IsAllocated ) /*0x47819e*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x4781a9*/
        *(unsigned int *)&this->q004 = 0; /*0x4781b1*/
      }
    }
    *(void **)&this->q004 = v4; /*0x4781ba*/
    this->m_8 = a2; /*0x4781c2*/
    this->IsAllocated = a3 == 0; /*0x4781c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTechnoTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4781ce*/
  }
  v7 = this->m_8; /*0x4781d1*/
  if ( v7 < this->q010 ) /*0x4781d9*/
    this->q010 = v7; /*0x4781db*/
  return 1; /*0x4781de*/
}
} // namespace gamemd

// 0x4781F0
namespace gamemd {
int FilePipe_30::Read(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->q010; /*0x4781f0*/
  result = 0; /*0x4781f3*/
  if ( m_10 <= 0 ) /*0x4781f8*/
    return -1; /*0x47820f*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4781fe*/
  {
    if ( ++result >= m_10 ) /*0x47820d*/
      return -1; /*0x47820d*/
  }
  return result; /*0x478212*/
}
}
// 0x4782E0
namespace gamemd {
char FilePipe_38::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned char *v5; // eax
  unsigned char *v6; // ecx
  int v7; // ebp

  m_8 = this->q008; /*0x4782eb*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4782f0*/
  {
    v3 = 0; /*0x4782f2*/
    if ( m_8 <= 0 ) /*0x4782f6*/
      return 1; /*0x478332*/
    v4 = *(unsigned int *)(a2 + 4); /*0x4782f8*/
    v5 = *(unsigned char **)&this->Items; /*0x4782fb*/
    v6 = (unsigned char *)(v4 + 2); /*0x478300*/
    v7 = v4 - (unsigned int)v5; /*0x478303*/
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x47831f*/
    {
      ++v3; /*0x478321*/
      v6 += 3; /*0x478322*/
      v5 += 3; /*0x478325*/
      if ( v3 >= m_8 ) /*0x47832a*/
        return 1; /*0x47832a*/
    }
  }
  return 0; /*0x47832c*/
}
} // namespace gamemd

// 0x478440
namespace gamemd {
void FilePipe_38::ddtor()
{
  if ( *(unsigned int *)&this->IsAllocated && this->IsAllocated ) /*0x47844d*/
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x478453*/
    *(unsigned int *)&this->Items = 0; /*0x47845b*/
  }
  this->IsAllocated = 0; /*0x47845e*/
  this->q008 = 0; /*0x478461*/
}
} // namespace gamemd

// 0x478470
namespace gamemd {
int FilePipe_38::Read(unsigned char * a2)
{
  int result; // eax
  int m_8; // esi
  unsigned char *i; // ecx

  if ( !IDA_LOBYTE(this->q00C) ) /*0x478470*/
    return 0; /*0x47847c*/
  m_8 = this->q008; /*0x478482*/
  result = 0; /*0x478485*/
  if ( m_8 <= 0 ) /*0x478489*/
    return -1; /*0x4784b0*/
  for ( i = *(unsigned char **)&this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x47848f*/
  {
    if ( ++result >= m_8 ) /*0x4784ae*/
      return -1; /*0x4784ae*/
  }
  return result; /*0x47847a*/
}
} // namespace gamemd

// 0x4784C0
namespace gamemd {
unsigned int FilePipe_38::Write(int a2)
{
  if ( IDA_LOBYTE(this->q00C) ) /*0x4784c0*/
    return (a2 - *(unsigned int *)&this->Items) / 3u; /*0x4784de*/
  else
    return 0; /*0x4784c7*/
}
} // namespace gamemd

// 0x4786D0
namespace gamemd {
VectorClass_flat * FilePipe_38::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_RGBClass_vftable; /*0x4786d6*/
  if ( v3 && this->IsAllocated ) /*0x4786e0*/
  {
    RA2_OPDEL(v3); /*0x4786e8*/
    *(unsigned int *)&this->Items = 0; /*0x4786f0*/
  }
  this->IsAllocated = 0; /*0x4786fb*/
  *(unsigned short *)&this->q008 = 0; /*0x478701*/
  if ( (a2 & 1) != 0 ) /*0x478708*/
    RA2_OPDEL(); /*0x47870b*/
  return this; /*0x478715*/
}
} // namespace gamemd

// 0x4B9BE0
namespace gamemd {
void FilePipe_30::Clear()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x4b9be6*/
  this->q010 = 0; /*0x4b9be9*/
  if ( v2 && this->IsAllocated ) /*0x4b9bf0*/
  {
    RA2_OPDEL(v2); /*0x4b9bf6*/
    *(unsigned int *)&this->q004 = 0; /*0x4b9bfe*/
  }
  this->IsAllocated = 0; /*0x4b9c01*/
  this->m_8 = 0; /*0x4b9c04*/
}
} // namespace gamemd

// 0x4B9C10
namespace gamemd {
unsigned int FilePipe_30::GetCount(int a2)
{
  if ( this->q00C ) /*0x4b9c10*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x4b9c25*/
  else
    return 0; /*0x4b9c17*/
}
} // namespace gamemd

// 0x4B9C40
namespace gamemd {
void FilePipe_30::Clear_0()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x4b9c46*/
  this->q010 = 0; /*0x4b9c49*/
  if ( v2 && this->IsAllocated ) /*0x4b9c50*/
  {
    RA2_OPDEL(v2); /*0x4b9c56*/
    *(unsigned int *)&this->q004 = 0; /*0x4b9c5e*/
  }
  this->IsAllocated = 0; /*0x4b9c61*/
  this->m_8 = 0; /*0x4b9c64*/
}
} // namespace gamemd

// 0x4B9C70
namespace gamemd {
unsigned int FilePipe_30::GetCount_0(int a2)
{
  if ( this->q00C ) /*0x4b9c70*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x4b9c85*/
  else
    return 0; /*0x4b9c77*/
}
} // namespace gamemd

// 0x4B9E20
namespace gamemd {
char FilePipe_30::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4b9e2c*/
  {
    this->q00C = 0; /*0x4b9e32*/
    if ( a3 ) /*0x4b9e38*/
      v4 = a3; /*0x4b9e4e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4b9e4a*/
    this->q00C = 1; /*0x4b9e52*/
    if ( !v4 ) /*0x4b9e56*/
      return 0; /*0x4b9eca*/
    if ( *(unsigned int *)&this->q004 ) /*0x4b9e58*/
    {
      m_8 = this->m_8; /*0x4b9e5f*/
      if ( a2 < m_8 ) /*0x4b9e64*/
        m_8 = a2; /*0x4b9e66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x4b9e6c*/
        ++i; /*0x4b9e71*/
      if ( this->IsAllocated ) /*0x4b9e7e*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x4b9e89*/
        *(unsigned int *)&this->q004 = 0; /*0x4b9e91*/
      }
    }
    *(void **)&this->q004 = v4; /*0x4b9e9a*/
    this->m_8 = a2; /*0x4b9ea2*/
    this->IsAllocated = a3 == 0; /*0x4b9ea5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUButtonFadeEffect *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4b9eae*/
  }
  v7 = this->m_8; /*0x4b9eb1*/
  if ( v7 < this->q010 ) /*0x4b9eb9*/
    this->q010 = v7; /*0x4b9ebb*/
  return 1; /*0x4b9ebe*/
}
} // namespace gamemd

// 0x4B9ED0
namespace gamemd {
int FilePipe_30::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->q010; /*0x4b9ed0*/
  result = 0; /*0x4b9ed3*/
  if ( m_10 <= 0 ) /*0x4b9ed8*/
    return -1; /*0x4b9eef*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4b9ede*/
  {
    if ( ++result >= m_10 ) /*0x4b9eed*/
      return -1; /*0x4b9eed*/
  }
  return result; /*0x4b9ef2*/
}
}
// 0x4BA080
namespace gamemd {
char FilePipe_30::SetCapacity_0(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ba08c*/
  {
    this->q00C = 0; /*0x4ba092*/
    if ( a3 ) /*0x4ba098*/
      v4 = a3; /*0x4ba0ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ba0aa*/
    this->q00C = 1; /*0x4ba0b2*/
    if ( !v4 ) /*0x4ba0b6*/
      return 0; /*0x4ba12a*/
    if ( *(unsigned int *)&this->q004 ) /*0x4ba0b8*/
    {
      m_8 = this->m_8; /*0x4ba0bf*/
      if ( a2 < m_8 ) /*0x4ba0c4*/
        m_8 = a2; /*0x4ba0c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x4ba0cc*/
        ++i; /*0x4ba0d1*/
      if ( this->IsAllocated ) /*0x4ba0de*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x4ba0e9*/
        *(unsigned int *)&this->q004 = 0; /*0x4ba0f1*/
      }
    }
    *(void **)&this->q004 = v4; /*0x4ba0fa*/
    this->m_8 = a2; /*0x4ba102*/
    this->IsAllocated = a3 == 0; /*0x4ba105*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUCrossDissolveEffect *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4ba10e*/
  }
  v7 = this->m_8; /*0x4ba111*/
  if ( v7 < this->q010 ) /*0x4ba119*/
    this->q010 = v7; /*0x4ba11b*/
  return 1; /*0x4ba11e*/
}
} // namespace gamemd

// 0x4BA130
namespace gamemd {
int FilePipe_30::FindItemIndex_0(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->q010; /*0x4ba130*/
  result = 0; /*0x4ba133*/
  if ( m_10 <= 0 ) /*0x4ba138*/
    return -1; /*0x4ba14f*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4ba13e*/
  {
    if ( ++result >= m_10 ) /*0x4ba14d*/
      return -1; /*0x4ba14d*/
  }
  return result; /*0x4ba152*/
}
} // namespace gamemd

// 0x4BA160
namespace gamemd {
DynamicVector * FilePipe_30::Destructor(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_TechnoTypeClass___vftable; /*0x4ba166*/
  if ( v3 && this->IsAllocated ) /*0x4ba170*/
  {
    RA2_OPDEL(v3); /*0x4ba178*/
    *(unsigned int *)&this->q004 = 0; /*0x4ba180*/
  }
  this->IsAllocated = 0; /*0x4ba18b*/
  this->m_8 = 0; /*0x4ba191*/
  if ( (a2 & 1) != 0 ) /*0x4ba198*/
    RA2_OPDEL(); /*0x4ba19b*/
  return this; /*0x4ba1a5*/
}
} // namespace gamemd

// 0x4BA200
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_0(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = &off_7E8500; /*0x4ba206*/
  if ( v3 && this->IsAllocated ) /*0x4ba210*/
  {
    RA2_OPDEL(v3); /*0x4ba218*/
    *(unsigned int *)&this->q004 = 0; /*0x4ba220*/
  }
  this->IsAllocated = 0; /*0x4ba22b*/
  this->m_8 = 0; /*0x4ba231*/
  if ( (a2 & 1) != 0 ) /*0x4ba238*/
    RA2_OPDEL(); /*0x4ba23b*/
  return this; /*0x4ba245*/
}
} // namespace gamemd

// 0x4BA2A0
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_1(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_CrossDissolveEffect___vftable; /*0x4ba2a6*/
  if ( v3 && this->IsAllocated ) /*0x4ba2b0*/
  {
    RA2_OPDEL(v3); /*0x4ba2b8*/
    *(unsigned int *)&this->q004 = 0; /*0x4ba2c0*/
  }
  this->IsAllocated = 0; /*0x4ba2cb*/
  this->m_8 = 0; /*0x4ba2d1*/
  if ( (a2 & 1) != 0 ) /*0x4ba2d8*/
    RA2_OPDEL(); /*0x4ba2db*/
  return this; /*0x4ba2e5*/
}
} // namespace gamemd
