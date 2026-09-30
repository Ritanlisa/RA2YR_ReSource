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
  char *v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx
  unsigned char *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    v5 = a3; /*0x478354*/
    *((unsigned char *)this + 12) = 0; /*0x478358*/
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
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x478364*/
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          v7 = v6 + 2; /*0x478377*/
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
        v5 = v6; /*0x478389*/
      }
      else
      {
        v5 = 0; /*0x47838d*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x4783bb*/
      {
        v12 = *((unsigned int *)this + 2); /*0x4783c0*/
        if ( a2 < v12 ) /*0x4783c5*/
          v12 = a2; /*0x4783c7*/
        if ( v12 > 0 ) /*0x4783cb*/
        {
          v13 = 0; /*0x4783cd*/
          do /*0x4783e9*/
          {
            v14 = *((unsigned int *)this + 1) + v13; /*0x4783d4*/
            v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --v12; /*0x4783dc*/
            *(unsigned short *)v15 = *(unsigned short *)v14; /*0x4783e0*/
            v15[2] = *(unsigned char *)(v14 + 2); /*0x4783e6*/
          }
          while ( v12 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( *((unsigned char *)this + 13) ) /*0x4783f1*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4783fa*/
          *((unsigned int *)this + 1) = 0; /*0x478402*/
        }
      }
      *((unsigned int *)this + 1) = v5; /*0x47840d*/
      *((unsigned int *)this + 2) = v3; /*0x478413*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x478416*/
      return 1; /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x478426*/
    return 1; /*0x47842c*/
  }

}
}
// 0x4778A0
namespace gamemd {
void FilePipe_30::ddtor(void *a1 = 0)
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x4778a6*/
  *((unsigned int *)this + 4) = 0; /*0x4778a9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x4778b0*/
  {
    __3_YAXPAX_Z(v2); /*0x4778b6*/
    *((unsigned int *)this + 1) = 0; /*0x4778be*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4778c1*/
  *((unsigned int *)this + 2) = 0; /*0x4778c4*/

}
} // namespace gamemd

// 0x4778D0
namespace gamemd {
unsigned int FilePipe_30::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4778d0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4778e5*/
  else
    return 0; /*0x4778d7*/

}
} // namespace gamemd

// 0x477960
namespace gamemd {
int FilePipe_38::Seek(int a2, int a3)
{

  int v3; // ecx

  v3 = *((unsigned int *)this + 1) + 3 * a3; /*0x47796d*/
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

  v3 = (void *)*(Block + 1); /*0x477a73*/
  *Block = &vt_VectorClass_TechnoTypeClass; /*0x477a76*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x477a80*/
  {
    __3_YAXPAX_Z(v3); /*0x477a88*/
    *(Block + 1) = 0; /*0x477a90*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x477a9b*/
  *(Block + 2) = 0; /*0x477aa1*/
  if ( (a2 & 1) != 0 ) /*0x477aa8*/
    __3_YAXPAX_Z(Block); /*0x477aab*/
  return (TypeList *)Block; /*0x477ab5*/

}
} // namespace gamemd

// 0x478140
namespace gamemd {
char FilePipe_30::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x47814c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x478152*/
    if ( a3 ) /*0x478158*/
      v4 = a3; /*0x47816e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x47816a*/
    *((unsigned char *)this + 12) = 1; /*0x478172*/
    if ( !v4 ) /*0x478176*/
      return 0; /*0x4781ea*/
    if ( *((unsigned int *)this + 1) ) /*0x478178*/
    {
      v5 = *((unsigned int *)this + 2); /*0x47817f*/
      if ( a2 < v5 ) /*0x478184*/
        v5 = a2; /*0x478186*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x47818c*/
        ++i; /*0x478191*/
      if ( *((unsigned char *)this + 13) ) /*0x47819e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4781a9*/
        *((unsigned int *)this + 1) = 0; /*0x4781b1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x4781ba*/
    *((unsigned int *)this + 2) = a2; /*0x4781c2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x4781c5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4781ce*/
  }
  v7 = *((unsigned int *)this + 2); /*0x4781d1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x4781d9*/
    *((unsigned int *)this + 4) = v7; /*0x4781db*/
  return 1; /*0x4781de*/

}
} // namespace gamemd

// 0x4781F0
namespace gamemd {
int FilePipe_30::Read(unsigned int * a2, void *a1 = 0)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x4781f0*/
  result = 0; /*0x4781f3*/
  if ( v2 <= 0 ) /*0x4781f8*/
    return -1; /*0x47820f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x4781fe*/
  {
    if ( ++result >= v2 ) /*0x47820d*/
      return -1; /*0x47820d*/
  }
  return result; /*0x478212*/

}
}
// 0x4782E0
namespace gamemd {
char FilePipe_38::AddRef(int a2)
{

  int v2; // edi
  int v3; // esi
  int v4; // edx
  unsigned char *v5; // eax
  unsigned char *v6; // ecx
  int v7; // ebp

  v2 = *((char *)this + 2); /*0x4782eb*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4782f0*/
  {
    v3 = 0; /*0x4782f2*/
    if ( v2 <= 0 ) /*0x4782f6*/
      return 1; /*0x478332*/
    v4 = *(unsigned int *)(a2 + 4); /*0x4782f8*/
    v5 = (unsigned char *)*((char *)this + 1); /*0x4782fb*/
    v6 = (unsigned char *)(v4 + 2); /*0x478300*/
    v7 = v4 - (unsigned int)v5; /*0x478303*/
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x47831f*/
    {
      ++v3; /*0x478321*/
      v6 += 3; /*0x478322*/
      v5 += 3; /*0x478325*/
      if ( v3 >= v2 ) /*0x47832a*/
        return 1; /*0x47832a*/
    }
  }
  return 0; /*0x47832c*/

}
} // namespace gamemd

// 0x478440
namespace gamemd {
void FilePipe_38::ddtor(void *a1 = 0)
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x47844d*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 4)); /*0x478453*/
    *((unsigned int *)this + 1) = 0; /*0x47845b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x47845e*/
  *((unsigned int *)this + 2) = 0; /*0x478461*/

}
} // namespace gamemd

// 0x478470
namespace gamemd {
int FilePipe_38::Read(unsigned char * a2, void *a1 = 0)
{

  int result; // eax
  int v3; // esi
  unsigned char *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x478470*/
    return 0; /*0x47847c*/
  v3 = *((unsigned int *)this + 2); /*0x478482*/
  result = 0; /*0x478485*/
  if ( v3 <= 0 ) /*0x478489*/
    return -1; /*0x4784b0*/
  for ( i = *(unsigned char **)((char *)this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x47848f*/
  {
    if ( ++result >= v3 ) /*0x4784ae*/
      return -1; /*0x4784ae*/
  }
  return result; /*0x47847a*/

}
} // namespace gamemd

// 0x4784C0
namespace gamemd {
unsigned int FilePipe_38::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4784c0*/
    return (a2 - *((unsigned int *)this + 1)) / 3u; /*0x4784de*/
  else
    return 0; /*0x4784c7*/

}
} // namespace gamemd

// 0x4786D0
namespace gamemd {
VectorClass_flat * FilePipe_38::QueryInterface(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4786d3*/
  *Block = &vt_VectorClass_RGBClass; /*0x4786d6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4786e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4786e8*/
    *(Block + 1) = 0; /*0x4786f0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4786fb*/
  *(Block + 2) = 0; /*0x478701*/
  if ( (a2 & 1) != 0 ) /*0x478708*/
    __3_YAXPAX_Z(Block); /*0x47870b*/
  return (VectorClass *)Block; /*0x478715*/

}
} // namespace gamemd

// 0x4B9BE0
namespace gamemd {
void FilePipe_30::Clear(void *a1 = 0)
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x4b9be6*/
  *((unsigned int *)this + 4) = 0; /*0x4b9be9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x4b9bf0*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9bf6*/
    *((unsigned int *)this + 1) = 0; /*0x4b9bfe*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4b9c01*/
  *((unsigned int *)this + 2) = 0; /*0x4b9c04*/

}
} // namespace gamemd

// 0x4B9C10
namespace gamemd {
unsigned int FilePipe_30::GetCount(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4b9c10*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4b9c25*/
  else
    return 0; /*0x4b9c17*/

}
} // namespace gamemd

// 0x4B9C40
namespace gamemd {
void FilePipe_30::Clear_0()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x4b9c46*/
  *((unsigned int *)this + 4) = 0; /*0x4b9c49*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x4b9c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9c56*/
    *((unsigned int *)this + 1) = 0; /*0x4b9c5e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4b9c61*/
  *((unsigned int *)this + 2) = 0; /*0x4b9c64*/

}
} // namespace gamemd

// 0x4B9C70
namespace gamemd {
unsigned int FilePipe_30::GetCount_0(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4b9c70*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4b9c85*/
  else
    return 0; /*0x4b9c77*/

}
} // namespace gamemd

// 0x4B9E20
namespace gamemd {
char FilePipe_30::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4b9e2c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x4b9e32*/
    if ( a3 ) /*0x4b9e38*/
      v4 = a3; /*0x4b9e4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4b9e4a*/
    *((unsigned char *)this + 12) = 1; /*0x4b9e52*/
    if ( !v4 ) /*0x4b9e56*/
      return 0; /*0x4b9eca*/
    if ( *((unsigned int *)this + 1) ) /*0x4b9e58*/
    {
      v5 = *((unsigned int *)this + 2); /*0x4b9e5f*/
      if ( a2 < v5 ) /*0x4b9e64*/
        v5 = a2; /*0x4b9e66*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x4b9e6c*/
        ++i; /*0x4b9e71*/
      if ( *((unsigned char *)this + 13) ) /*0x4b9e7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4b9e89*/
        *((unsigned int *)this + 1) = 0; /*0x4b9e91*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x4b9e9a*/
    *((unsigned int *)this + 2) = a2; /*0x4b9ea2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x4b9ea5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4b9eae*/
  }
  v7 = *((unsigned int *)this + 2); /*0x4b9eb1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x4b9eb9*/
    *((unsigned int *)this + 4) = v7; /*0x4b9ebb*/
  return 1; /*0x4b9ebe*/

}
} // namespace gamemd

// 0x4B9ED0
namespace gamemd {
int FilePipe_30::FindItemIndex(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x4b9ed0*/
  result = 0; /*0x4b9ed3*/
  if ( v2 <= 0 ) /*0x4b9ed8*/
    return -1; /*0x4b9eef*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x4b9ede*/
  {
    if ( ++result >= v2 ) /*0x4b9eed*/
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
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ba08c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x4ba092*/
    if ( a3 ) /*0x4ba098*/
      v4 = a3; /*0x4ba0ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ba0aa*/
    *((unsigned char *)this + 12) = 1; /*0x4ba0b2*/
    if ( !v4 ) /*0x4ba0b6*/
      return 0; /*0x4ba12a*/
    if ( *((unsigned int *)this + 1) ) /*0x4ba0b8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x4ba0bf*/
      if ( a2 < v5 ) /*0x4ba0c4*/
        v5 = a2; /*0x4ba0c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x4ba0cc*/
        ++i; /*0x4ba0d1*/
      if ( *((unsigned char *)this + 13) ) /*0x4ba0de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ba0e9*/
        *((unsigned int *)this + 1) = 0; /*0x4ba0f1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x4ba0fa*/
    *((unsigned int *)this + 2) = a2; /*0x4ba102*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x4ba105*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4ba10e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x4ba111*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x4ba119*/
    *((unsigned int *)this + 4) = v7; /*0x4ba11b*/
  return 1; /*0x4ba11e*/

}
} // namespace gamemd

// 0x4BA130
namespace gamemd {
int FilePipe_30::FindItemIndex_0(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x4ba130*/
  result = 0; /*0x4ba133*/
  if ( v2 <= 0 ) /*0x4ba138*/
    return -1; /*0x4ba14f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x4ba13e*/
  {
    if ( ++result >= v2 ) /*0x4ba14d*/
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

  v3 = (void *)*(Block + 1); /*0x4ba163*/
  *Block = &vt_VectorClass_TechnoTypeClass; /*0x4ba166*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4ba170*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba178*/
    *(Block + 1) = 0; /*0x4ba180*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4ba18b*/
  *(Block + 2) = 0; /*0x4ba191*/
  if ( (a2 & 1) != 0 ) /*0x4ba198*/
    __3_YAXPAX_Z(Block); /*0x4ba19b*/
  return (DynamicVector *)Block; /*0x4ba1a5*/

}
} // namespace gamemd

// 0x4BA200
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_0(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba203*/
  *Block = &off_7E8500; /*0x4ba206*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4ba210*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba218*/
    *(Block + 1) = 0; /*0x4ba220*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4ba22b*/
  *(Block + 2) = 0; /*0x4ba231*/
  if ( (a2 & 1) != 0 ) /*0x4ba238*/
    __3_YAXPAX_Z(Block); /*0x4ba23b*/
  return (DynamicVector *)Block; /*0x4ba245*/

}
} // namespace gamemd

// 0x4BA2A0
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_1(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba2a3*/
  *Block = &vt_VectorClass_CrossDissolveEffect; /*0x4ba2a6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4ba2b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba2b8*/
    *(Block + 1) = 0; /*0x4ba2c0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4ba2cb*/
  *(Block + 2) = 0; /*0x4ba2d1*/
  if ( (a2 & 1) != 0 ) /*0x4ba2d8*/
    __3_YAXPAX_Z(Block); /*0x4ba2db*/
  return (DynamicVector *)Block; /*0x4ba2e5*/

}
} // namespace gamemd
