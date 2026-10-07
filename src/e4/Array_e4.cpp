// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ArtConfig_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x557AC0
namespace gamemd {
int Array::GetClamped(int aP1)
{

  int result; // eax
  CheckListClass * v3;
  CheckListClass * v4;

  result = *((unsigned int *)this + 17); /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = (gamemd::CheckListClass *)((unsigned int)((gamemd::CheckListClass *)((int)(aP1))));
    v4 = (gamemd::CheckListClass *)((int)((gamemd::CheckListClass *)(result - 1)));
    if ( aP1    >=    (int)(v4) ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(unsigned int *)(*((unsigned int *)this + 14) + 4 * v3); /*0x557ad8*/
  }
  return result; /*0x557ac7*/

}
}
// 0x634290
namespace gamemd {
int Array::FindValue(int aP1)
{

  void *Array_field_0x10; // esi
  int result; // eax
  int v4; // edx
  unsigned int **i; // ecx

  Array_field_0x10 = (void *)(this->Array_field_0x10);
  result = -1; /*0x634295*/
  v4 = 0; /*0x634298*/
  if ( (int)Array_field_0x10 > 0 ) /*0x63429d*/
  {
    for ( i = (unsigned int **)this->Array_field_0x4; **(unsigned int)(i) != (unsigned int)(aP1); ++i ) /*0x63429f*/
    {
      if ( ++v4 >= (int)Array_field_0x10 ) /*0x6342b2*/
        return result; /*0x6342b2*/
    }
    return v4; /*0x6342ba*/
  }
  return result; /*0x6342b4*/

}
}
// 0x63E590
namespace gamemd {
int Array::RemoveAt(int a2, void *a2_2)
{

  char *Array_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  Array_field_0x10 = (char *)this->Array_field_0x10; /*0x63e590*/
  result = a2; /*0x63e593*/
  if ( a2 >= (int)Array_field_0x10 ) /*0x63e599*/
  {
    LOBYTE(result) = 0; /*0x63e5bc*/
  }
  else
  {
    v4 = (char *)((unsigned int)(Array_field_0x10 - 1));
    this->Array_field_0x10 = (unsigned int)(v4);
    if ( a2 < (int)v4 ) /*0x63e5a1*/
    {
      do /*0x63e5b4*/
      {
        ++result; /*0x63e5a7*/
        *((unsigned int *)this->Array_field_0x4 + result - 1) = *((unsigned int *)this->Array_field_0x4 + result); /*0x63e5ab*/
      }
      while ( result < (int)this->Array_field_0x10 ); /*0x63e5b4*/
    }
    LOBYTE(result) = 1; /*0x63e5b7*/
  }
  return result; /*0x63e5b9*/

}
}
// 0x65AD40
namespace gamemd {
int Array::Get(int a2)
{

  return *((unsigned int *)this->Array_field_0xE4 + a2); /*0x65ad4d*/

}
}
// 0x65ADF0
namespace gamemd {
int Array::ContainsValue(int aP1)
{

  int result; // eax
  void *Array_field_0xE8; // esi
  int v4; // edx
  int *Array_field_0xE4; // ecx

  Array_field_0xE8 = (void *)(this->Array_field_0xE8);
  v4 = 0; /*0x65adf7*/
  if ( (int)Array_field_0xE8 <= 0 ) /*0x65adfc*/
  {
LABEL_6:
    LOBYTE(result) = 0; /*0x65ae1a*/
  }
  else
  {
    Array_field_0xE4 = (int *)this->Array_field_0xE4; /*0x65adfe*/
    while ( 1 ) /*0x65ae08*/
    {
      result = *Array_field_0xE4; /*0x65ae08*/
      if ( !*Array_field_0xE4 || result == (int)(aP1) ) /*0x65ae10*/
        break; /*0x65ae10*/
      ++v4; /*0x65ae12*/
      ++Array_field_0xE4; /*0x65ae13*/
      if ( v4 >= (int)Array_field_0xE8 ) /*0x65ae18*/
        goto LABEL_6; /*0x65ae18*/
    }
    LOBYTE(result) = 1; /*0x65ae22*/
  }
  return result; /*0x65ae1a*/

}
}
// 0x7490D0
namespace gamemd {
int Array::Zero(void *a1_1)
{

  int result; // eax
  Array *v2; // edx

  result = 0; /*0x7490d6*/
  if ( (int)this->Array_field_0x800 > 0 ) /*0x7490da*/
  {
    v2 = this; /*0x7490dd*/
    do /*0x7490f1*/
    {
      *(unsigned int *)v2->__pad_0 = 0; /*0x7490df*/
      ++result; /*0x7490eb*/
      v2 = (Array *)((char *)v2 + 4); /*0x7490ec*/
    }
    while ( result < (int)this->Array_field_0x800 ); /*0x7490f1*/
  }
  return result; /*0x7490f4*/

}
}
// 0x749150
namespace gamemd {
void Array::ByteSwap()
{

  int v2; // ebx
  u_long *v3; // esi

  if ( *((unsigned int *)this + 513) && (v2 = 0, (int)this->Array_field_0x800 > 0) ) /*0x749169*/
  {
    v3 = (u_long *)this; /*0x74916c*/
    do /*0x749184*/
    {
      *v3 =       *v3 = ntohl( (void *)((void *)(*v3))); 
      ++v2; /*0x74917e*/
      ++v3; /*0x74917f*/
    }
    while ( v2 < (int)this->Array_field_0x800 ); /*0x749184*/
    *((unsigned int *)this + 513) = 0; /*0x749186*/
  }
  else
  {
    *((unsigned int *)this + 513) = 0; /*0x749191*/
  }

}
}
// 0x763980
namespace gamemd {
int Array::GetElement(int aP1)
{

  if ( aP1 < 0 || aP1    >=    (int)(int)this->Array_field_0x38 ) /*0x76398b*/
    return 0; /*0x763999*/
  else
    return (int)this->Array_field_0x2C + 12 * aP1; /*0x763993*/

}
}
// 0x7ACD30
namespace gamemd {
int Array::CleanupArrayWOL()
{

  int i; // edi
  int result; // eax

  for ( i = 0; i < *(unsigned int *)this->__pad_0; ++i ) /*0x7acd39*/
  {
    j_DeleteAndZero( (void *)((ObjectClass *)(*(unsigned int *)this->__pad_8 + 4 * i))); /*0x7acd41*/
    result = *(unsigned int *)this->__pad_0; /*0x7acd46*/
  }
  *(unsigned int *)this->__pad_0 = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/

}
}
// 0x7AD790
namespace gamemd {
AbstractClass * * Array::InsertElement(const void *a1, int aP2)
{

  ObjectClass * v4;
  int v5; // ecx
  void *Array_field_0x4; // eax
  int v7; // ebp
  void *v8; // edx
  const void *v9; // esi
  int v10; // eax
  int v11; // ebp
  void *v12; // edx
  const void *v13; // esi
  void *v14; // edi
  void *v16; // [esp+Ch] [ebp-4h]
  void *v17; // [esp+Ch] [ebp-4h]

  v4 = (gamemd::ObjectClass *)((int)(aP2));
  v5 = *(unsigned int *)this->__pad_0; /*0x7ad799*/
  if ( aP2    >    (int)(v5) ) /*0x7ad79e*/
  {
    aP2 = (int)((gamemd::ObjectClass *)(v5));
    v4 = (gamemd::ObjectClass *)(v5);
  }
  Array_field_0x4 = (void *)(this->Array_field_0x4);
  if ( v4 >= (gamemd::ObjectClass *)(int)Array_field_0x4 && v5 >= (int)Array_field_0x4 ) /*0x7ad7b4*/
  {
    v7 = (unsigned int)(2 * v5);
    if ( 2 * v5 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (void *)__2_YAPAXI_Z(268 * v7); /*0x7ad7d7*/
    memset( (void *)(v8), 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    v16 = v8; /*0x7ad7ec*/
    v9 = *(const void **)this->__pad_8; /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy( (void *)(v8), (const void *)(v9), 268 * *(unsigned int *)this->__pad_0); /*0x7ad80f*/
    __3_YAXPAX_Z(*(void **)this->__pad_8); /*0x7ad81c*/
    v4 = (gamemd::ObjectClass *)(aP2); /*0x7ad825*/
    *(unsigned int *)this->__pad_8 = (unsigned int)(v16); /*0x7ad82c*/
    this->Array_field_0x4 = (unsigned int)((void *)v7); /*0x7ad82f*/
  }
  v10 = *(unsigned int *)this->__pad_0; /*0x7ad832*/
  if ( *(unsigned int *)this->__pad_0 >= (int)this->Array_field_0x4 ) /*0x7ad839*/
  {
    v11 = (unsigned int)(2 * v10);
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (void *)__2_YAPAXI_Z(268 * v11); /*0x7ad85c*/
    memset( (void *)(v12), 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    v17 = v12; /*0x7ad871*/
    v13 = *(const void **)this->__pad_8; /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy( (void *)(v12), (const void *)(v13), 268 * *(unsigned int *)this->__pad_0); /*0x7ad894*/
    __3_YAXPAX_Z(*(void **)this->__pad_8); /*0x7ad8a1*/
    v4 = (gamemd::ObjectClass *)(aP2); /*0x7ad8aa*/
    *(unsigned int *)this->__pad_8 = (unsigned int)(v17); /*0x7ad8b1*/
    this->Array_field_0x4 = (unsigned int)((void *)v11); /*0x7ad8b4*/
  }
  if ( v4 < (gamemd::ObjectClass *)(*(unsigned int *)this->__pad_0 )) /*0x7ad8bc*/
    memcpy( /*0x7ad8f2*/
      (void *)(*(unsigned int *)this->__pad_8 + 268 * (v4 + 1)),
      (const void *)(*(unsigned int *)this->__pad_8 + 268 * v4),
      268 * *(unsigned int *)this->__pad_0 - 268 * v4);
  v14 = (void *)((gamemd::AbstractClass **)((void *)(*(unsigned int *)this->__pad_8 + 268 * v4)));
  if ( v14 ) /*0x7ad90c*/
    qmemcpy( (void *)(v14), (const void *)(a1), 0x10Cu); /*0x7ad917*/
  ++*(unsigned int *)this->__pad_0; /*0x7ad91e*/
  return (gamemd::AbstractClass **)(1); /*0x7ad91b*/

}
}
// 0x4068F0
namespace gamemd {
int Array::ForEach(Array *a1, int a2, int a3, int (* a4)(int))  // G57w11: def 同步 hpp static（raw 0x4068F0 receiver-first）
{

  int result; // eax
  int v6; // edi

  result = a3 - 1; /*0x4068f4*/
  if ( a3 - 1 >= 0 ) /*0x4068f5*/
  {
    v6 = a3; /*0x406907*/
    do /*0x406911*/
    {
      result = (int)(a4((int)a1));
      a1 = (Array *)((int *)((char *)a1 + a2)); /*0x40690e*/
      --v6; /*0x406910*/
    }
    while ( v6 ); /*0x406911*/
  }
  return result; /*0x406917*/

}
} // namespace gamemd

// 0x40AFD0
namespace gamemd {
int Array::ForEachReverse(ObjectClass * aP0, int a2, int a3, int (* a4)(int))
{

  char *v4; // esi
  int result; // eax
  int v6; // edi

  v4 = (char *)aP0 + a3 * a2; /*0x40afe3*/
  result = a3 - 1; /*0x40afe5*/
  if ( a3 - 1 >= 0 ) /*0x40afe6*/
  {
    v6 = a3; /*0x40afee*/
    do /*0x40aff8*/
    {
      v4 -= a2; /*0x40aff1*/
      result = a4((int)v4); /*0x40aff5*/
      --v6; /*0x40aff7*/
    }
    while ( v6 ); /*0x40aff8*/
  }
  return result; /*0x40affc*/

}
} // namespace gamemd

// 0x49B720
namespace gamemd {
int Array::Cleanup()
{

  int result; // eax
  int i; // edi

  result = this->Array_field_0x3C[0]; /*0x49b723*/
  if ( result ) /*0x49b728*/
  {
    for ( i = 0; i < (int)this->Array_field_0x40; ++i ) /*0x49b732*/
    {
      if ( *(unsigned int *)(this->Array_field_0x3C[0] + 4 * i) ) /*0x49b737*/
        __3_YAXPAX_Z(*(void **)(this->Array_field_0x3C[0] + 4 * i)); /*0x49b73f*/
    }
    __3_YAXPAX_Z((void *)this->Array_field_0x3C[0]); /*0x49b753*/
  }
  return result; /*0x49b75c*/

}
} // namespace gamemd

// 0x49D070
namespace gamemd {
char Array::GetElementAt(unsigned int * a2, int a3)
{

  int v3; // edx
  int result; // eax

  v3 = a3; /*0x49d070*/
  LOBYTE(result) = 0; /*0x49d079*/
  *a2 = 0; /*0x49d07e*/
  if ( a3 == -1 ) /*0x49d084*/
    v3 = (unsigned int)this->q038; /*0x49d086*/
  if ( v3 < 0 || v3     >=     (int)(this->q010 )) /*0x49d094*/
    v3 = -1; /*0x49d096*/
  if ( this->q06C ) /*0x49d09a*/
  {
    if ( v3 != -1 ) /*0x49d0a5*/
      *a2 = *(unsigned int *)(this->u32_3C + 4 * v3); /*0x49d0ad*/
    if ( *a2 ) /*0x49d0af*/
      LOBYTE(result) = 1; /*0x49d0b4*/
  }
  return result; /*0x49d0b6*/

}
} // namespace gamemd

// 0x55B880
namespace gamemd {
void Array::RemoveItemByValue(AbstractClass * aP0, int a2)
{

  unsigned int * v2;
  int v3; // edx
  unsigned int * v4;
  int v5; // eax

  if ( aP0 ) /*0x55b887*/
  {
    if ((int)((*(int (**)(int))(*(unsigned int *)aP0 + 44))( (int)(aP0)) == 44)) 
    {
      v2 = (unsigned int *)(dword_8B40D8);
      v3 = 0; /*0x55b89b*/
      if ( dword_8B40D8 > 0 ) /*0x55b89f*/
      {
        v4 = (unsigned int *)(dword_8B40CC);
        do /*0x55b8da*/
        {
          if ( aP0 == (gamemd::AbstractClass *)(((unsigned int *)(v4))[v3]) ) /*0x55b8ab*/
          {
            if ( v3 < (int)(v2) ) /*0x55b8af*/
            {
              --v2; /*0x55b8b1*/
              v5 = v3; /*0x55b8b2*/
              for ( dword_8B40D8 = (unsigned int)(v2); v5 < dword_8B40D8; ++v5 ) /*0x55b8bc*/
              {
                ((unsigned int *)(v4))[v5] = (unsigned int)((unsigned int *)(v4[v5 + 1]));
                v2 = (unsigned int *)((int)((unsigned int *)(dword_8B40D8)));
                v4 = (unsigned int *)(dword_8B40CC);
              }
            }
            --v3; /*0x55b8d6*/
          }
          ++v3; /*0x55b8d7*/
        }
        while ( v3 < (int)(v2) ); /*0x55b8da*/
      }
    }
  }

}
} // namespace gamemd
