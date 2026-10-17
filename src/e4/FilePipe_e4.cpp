// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"  // G42.36 C2027 supply

// 0x478340
namespace gamemd {  // G42.18 ns repair
AbstractClass * * FilePipe_38::Release(int a2, char * a3)
{


  int v3 = a2; // ebp /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    char *v5 = a3; // edi /*0x478354*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x478358*/
    if ( a3 ) /*0x47835d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478396*/
      {
        char *v9 = a3 + 2; // eax /*0x478398*/
        int v10 = a2; // ecx /*0x47839b*/
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
      int v6; // eax
      v6 = (int)(__2_YAPAXI_Z(3 * a2)); /*0x478364*/
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          unsigned char *v7 = &v6->ptr_2; // ecx /*0x478377*/
          int v8 = a2; // edx /*0x47837a*/
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
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( *&this->Items ) /*0x4783bb*/
      {
        int m_8 = this->__pad_008; // ecx /*0x4783c0*/
        if ( a2 < m_8 ) /*0x4783c5*/
          m_8 = a2; /*0x4783c7*/
        if ( m_8 > 0 ) /*0x4783cb*/
        {
          int v13 = 0; // eax /*0x4783cd*/
          do /*0x4783e9*/
          {
            int v14; // edx
            v14 = (int)(*&this->Items + v13); /*0x4783d4*/
            char *v15; // ebx
            v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --m_8; /*0x4783dc*/
            *(unsigned short *)v15 = *(unsigned short *)v14; /*0x4783e0*/
            v15[2] = *(unsigned char *)(v14 + 2); /*0x4783e6*/
          }
          while ( m_8 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( (((this->m_C) >> 8) & 0xFF) ) /*0x4783f1*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x4783fa*/
          *&this->Items = 0; /*0x478402*/
        }
      }
      *&this->Items = v5; /*0x47840d*/
      this->__pad_008 = v3; /*0x478413*/
      BYTE1(this->m_C) = a3 == 0; /*0x478416*/
      return (gamemd::AbstractClass **)(1); /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_VRGBClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x478426*/
    return (gamemd::AbstractClass **)(1); /*0x47842c*/
  }

}
}  // G42.18 ns repair
// 0x4778A0
namespace gamemd {
void FilePipe_30::ddtor(void *a1)
{

  void *v2 = *&this->u32_4; // eax /*0x4778a6*/
  this->m_10 = 0; /*0x4778a9*/
  if ( v2 && (((unsigned char *)&(*&this->m_C))[1]) ) /*0x4778b0*/
  {
    operator delete((v2)); /*0x4778b6*/
    *&this->u32_4 = 0; /*0x4778be*/
  }
  (((unsigned char *)&(*&this->__pad_00C))[1]) = 0; /*0x4778c1*/
  this->Capacity = 0; /*0x4778c4*/
}
} // namespace gamemd

// 0x4778D0
namespace gamemd {
unsigned int FilePipe_30::Write(int a2)
{
  if ( (*((unsigned char *)&(*&this->__pad_00C))) ) /*0x4778d0*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x4778e5*/
  else
    return 0; /*0x4778d7*/
}
} // namespace gamemd

// 0x477960
namespace gamemd {
int FilePipe_38::Seek(int a2, int a3, void *a3_2)
{

  unsigned __int16 *v3; // ecx

  v3 = (unsigned __int16 *)(*&this->Items + 3 * a3); /*0x47796d*/
  *(unsigned short *)a2 = *v3; /*0x477978*/
  *(unsigned char *)(a2 + 2) = *((unsigned char *)v3 + 2); /*0x47797f*/
  return a2; /*0x47797b*/

}
} // namespace gamemd

// 0x477A70
namespace gamemd {
TypeList_flat * FilePipe_30::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*((unsigned int *)Block + 1); /*0x477a73*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x477a76) */
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x477a80*/
  {
    operator delete((v3)); /*0x477a88*/
    *((unsigned int *)Block + 1) = 0; /*0x477a90*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x477a9b*/
  *((unsigned int *)Block + 2) = 0; /*0x477aa1*/
  if ( (a2 & 1) != 0 ) /*0x477aa8*/
    operator delete((Block)); /*0x477aab*/
  return &Block->vfptr; /*0x477ab5*/
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
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x478152*/
    if ( a3 ) /*0x478158*/
      v4 = a3; /*0x47816e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x47816a*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x478172*/
    if ( !v4 ) /*0x478176*/
      return 0; /*0x4781ea*/
    if ( *&this->u32_4 ) /*0x478178*/
    {
      m_8 = this->Capacity; /*0x47817f*/
      if ( a2 < m_8 ) /*0x478184*/
        m_8 = a2; /*0x478186*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x47818c*/
        ++i; /*0x478191*/
      if ( (((this->m_C) >> 8) & 0xFF) ) /*0x47819e*/
      {
        __3_YAXPAX_Z(*&this->u32_4); /*0x4781a9*/
        *&this->u32_4 = 0; /*0x4781b1*/
      }
    }
    *&this->u32_4 = v4; /*0x4781ba*/
    this->Capacity = a2; /*0x4781c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4781c5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAVTechnoTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4781ce*/
  }
  v7 = this->Capacity; /*0x4781d1*/
  if ( v7 < this->m_10 ) /*0x4781d9*/
    this->m_10 = v7; /*0x4781db*/
  return 1; /*0x4781de*/

}
} // namespace gamemd

// 0x4781F0
namespace gamemd {
int FilePipe_30::Read(unsigned int * a2, void *a2_2, void *a3)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x4781f0*/
  result = 0; /*0x4781f3*/
  if ( m_10 <= 0 ) /*0x4781f8*/
    return -1; /*0x47820f*/
  for ( i = *&this->u32_4; *i != *a2; ++i ) /*0x4781fe*/
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

  int m_8 = this->__pad_008; // edi /*0x4782eb*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4782f0*/
  {
    int v3 = 0; // esi /*0x4782f2*/
    if ( m_8 <= 0 ) /*0x4782f6*/
      return 1; /*0x478332*/
    int v4; // edx
    v4 = *(unsigned int *)(a2 + 4); /*0x4782f8*/
    unsigned char *v5; // eax
    v5 = (unsigned char *)(*&this->Items); /*0x4782fb*/
    unsigned char *v6; // ecx
    v6 = (unsigned char *)(v4 + 2); /*0x478300*/
    int v7; // ebp
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
void FilePipe_38::ddtor(void *a1)
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x47844d*/
  {
    operator delete((*&this->Items)); /*0x478453*/
    *&this->Items = 0; /*0x47845b*/
  }
  (this->IsAllocated) = 0; /*0x47845e*/
  this->__pad_008 = 0; /*0x478461*/
}
} // namespace gamemd

// 0x478470
namespace gamemd {
int FilePipe_38::Read(unsigned char * a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(a2_2->q00C))) ) /*0x478470*/
    return 0; /*0x47847c*/
  int m_8 = a2_2->q008; // esi /*0x478482*/
  int result = 0; // eax /*0x478485*/
  if ( m_8 <= 0 ) /*0x478489*/
    return -1; /*0x4784b0*/
  unsigned char *i; // ecx
  for ( i = *(unsigned char **)&a2_2->Items; *(int)(i) != *(unsigned int *)(a2_2) || i[1] != a2_2[1] || i[2] != a2_2[2]; i += 3 ) /*0x47848f*/
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
  if ( (this->m_C) ) /*0x4784c0*/
    return (a2 - *&this->Items) / 3u; /*0x4784de*/
  else
    return 0; /*0x4784c7*/
}
} // namespace gamemd

// 0x4786D0
namespace gamemd {
VectorClass_flat * FilePipe_38::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->u32_2; // eax /*0x4786d3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4786d6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_2))[1]) ) /*0x4786e0*/
  {
    operator delete((v3)); /*0x4786e8*/
    Block->Items = (unsigned int)(0); /*0x4786f0*/
  }
  (Block->u32_D) = 0; /*0x4786fb*/
  Block->u32_8 = 0; /*0x478701*/
  if ( (a2 & 1) != 0 ) /*0x478708*/
    operator delete((Block)); /*0x47870b*/
  return Block->tail_0; /*0x478715*/
}
} // namespace gamemd

// 0x4B9BE0
namespace gamemd {
void FilePipe_30::Clear(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->q004; /*0x4b9be6*/
  a1_1->q010 = 0; /*0x4b9be9*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x4b9bf0*/
  {
    operator delete((v2)); /*0x4b9bf6*/
    *(unsigned int *)&a1_1->q004 = 0; /*0x4b9bfe*/
  }
  (((unsigned char *)&(*(unsigned int *)&a1_1->q00C))[1]) = 0; /*0x4b9c01*/
  a1_1->Capacity = 0; /*0x4b9c04*/
}
} // namespace gamemd

// 0x4B9C10
namespace gamemd {
unsigned int FilePipe_30::GetCount(int a2)
{
  if ( (*((unsigned char *)&(*&this->__pad_00C))) ) /*0x4b9c10*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x4b9c25*/
  else
    return 0; /*0x4b9c17*/
}
} // namespace gamemd

// 0x4B9C40
namespace gamemd {
void FilePipe_30::Clear_0()
{

  void *v2; // eax
  v2 = (void *)(*&this->u32_4); /*0x4b9c46*/
  this->m_10 = 0; /*0x4b9c49*/
  if ( v2 && (((unsigned char *)&(*&this->m_C))[1]) ) /*0x4b9c50*/
  {
    operator delete((v2)); /*0x4b9c56*/
    *&this->u32_4 = 0; /*0x4b9c5e*/
  }
  (((unsigned char *)&(*&this->__pad_00C))[1]) = 0; /*0x4b9c61*/
  this->Capacity = 0; /*0x4b9c64*/
}
} // namespace gamemd

// 0x4B9C70
namespace gamemd {
unsigned int FilePipe_30::GetCount_0(int a2)
{
  if ( (*((unsigned char *)&(*&this->__pad_00C))) ) /*0x4b9c70*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x4b9c85*/
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
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x4b9e32*/
    if ( a3 ) /*0x4b9e38*/
      v4 = a3; /*0x4b9e4e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4b9e4a*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x4b9e52*/
    if ( !v4 ) /*0x4b9e56*/
      return 0; /*0x4b9eca*/
    if ( *&this->u32_4 ) /*0x4b9e58*/
    {
      m_8 = this->Capacity; /*0x4b9e5f*/
      if ( a2 < m_8 ) /*0x4b9e64*/
        m_8 = a2; /*0x4b9e66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x4b9e6c*/
        ++i; /*0x4b9e71*/
      if ( (((this->m_C) >> 8) & 0xFF) ) /*0x4b9e7e*/
      {
        __3_YAXPAX_Z(*&this->u32_4); /*0x4b9e89*/
        *&this->u32_4 = 0; /*0x4b9e91*/
      }
    }
    *&this->u32_4 = v4; /*0x4b9e9a*/
    this->Capacity = a2; /*0x4b9ea2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4b9ea5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUButtonFadeEffect *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4b9eae*/
  }
  v7 = this->Capacity; /*0x4b9eb1*/
  if ( v7 < this->m_10 ) /*0x4b9eb9*/
    this->m_10 = v7; /*0x4b9ebb*/
  return 1; /*0x4b9ebe*/

}
} // namespace gamemd

// 0x4B9ED0
namespace gamemd {
int FilePipe_30::FindItemIndex(unsigned int * a2)
{

  int m_10; // edx
  m_10 = this->m_10; /*0x4b9ed0*/
  int result = 0; // eax /*0x4b9ed3*/
  if ( m_10 <= 0 ) /*0x4b9ed8*/
    return -1; /*0x4b9eef*/
  unsigned int *i; // ecx
  for ( i = *&this->u32_4; *i != *a2; ++i ) /*0x4b9ede*/
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
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x4ba092*/
    if ( a3 ) /*0x4ba098*/
      v4 = a3; /*0x4ba0ae*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4ba0aa*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x4ba0b2*/
    if ( !v4 ) /*0x4ba0b6*/
      return 0; /*0x4ba12a*/
    if ( *&this->u32_4 ) /*0x4ba0b8*/
    {
      m_8 = this->Capacity; /*0x4ba0bf*/
      if ( a2 < m_8 ) /*0x4ba0c4*/
        m_8 = a2; /*0x4ba0c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x4ba0cc*/
        ++i; /*0x4ba0d1*/
      if ( (((this->m_C) >> 8) & 0xFF) ) /*0x4ba0de*/
      {
        __3_YAXPAX_Z(*&this->u32_4); /*0x4ba0e9*/
        *&this->u32_4 = 0; /*0x4ba0f1*/
      }
    }
    *&this->u32_4 = v4; /*0x4ba0fa*/
    this->Capacity = a2; /*0x4ba102*/
    BYTE1(this->m_C) = a3 == 0; /*0x4ba105*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUCrossDissolveEffect *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4ba10e*/
  }
  v7 = this->Capacity; /*0x4ba111*/
  if ( v7 < this->m_10 ) /*0x4ba119*/
    this->m_10 = v7; /*0x4ba11b*/
  return 1; /*0x4ba11e*/

}
} // namespace gamemd

// 0x4BA130
namespace gamemd {
int FilePipe_30::FindItemIndex_0(unsigned int * a2)
{

  int m_10; // edx
  m_10 = this->m_10; /*0x4ba130*/
  int result = 0; // eax /*0x4ba133*/
  if ( m_10 <= 0 ) /*0x4ba138*/
    return -1; /*0x4ba14f*/
  unsigned int *i; // ecx
  for ( i = *&this->u32_4; *i != *a2; ++i ) /*0x4ba13e*/
  {
    if ( ++result >= m_10 ) /*0x4ba14d*/
      return -1; /*0x4ba14d*/
  }
  return result; /*0x4ba152*/
}
} // namespace gamemd

// 0x4BA160
namespace gamemd {
DynamicVector * FilePipe_30::Destructor(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ba163*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ba166*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x4ba170*/
  {
    operator delete((v3)); /*0x4ba178*/
    *&Block->__pad_004 = 0; /*0x4ba180*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x4ba18b*/
  Block->Capacity = 0; /*0x4ba191*/
  if ( (a2 & 1) != 0 ) /*0x4ba198*/
    operator delete((Block)); /*0x4ba19b*/
  return Block->tail_0; /*0x4ba1a5*/
}
} // namespace gamemd

// 0x4BA200
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_0(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ba203*/
  *(unsigned int *)Block->tail_0 = &off_7E8500; /*0x4ba206*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x4ba210*/
  {
    operator delete((v3)); /*0x4ba218*/
    *&Block->__pad_004 = 0; /*0x4ba220*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x4ba22b*/
  Block->Capacity = 0; /*0x4ba231*/
  if ( (a2 & 1) != 0 ) /*0x4ba238*/
    operator delete((Block)); /*0x4ba23b*/
  return Block->tail_0; /*0x4ba245*/
}
} // namespace gamemd

// 0x4BA2A0
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_1(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4ba2a3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4ba2a6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x4ba2b0*/
  {
    operator delete((v3)); /*0x4ba2b8*/
    *&Block->__pad_004 = 0; /*0x4ba2c0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x4ba2cb*/
  Block->Capacity = 0; /*0x4ba2d1*/
  if ( (a2 & 1) != 0 ) /*0x4ba2d8*/
    operator delete((Block)); /*0x4ba2db*/
  return Block->tail_0; /*0x4ba2e5*/
}
} // namespace gamemd
