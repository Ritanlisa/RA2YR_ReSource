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
  int v3; // edx
  int v4; // eax

  result = this->q044; /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = aP1; /*0x557aca*/
    v4 = result - 1; /*0x557ace*/
    if ( aP1 >= v4 ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(_DWORD *)(this->q038 + 4 * v3); /*0x557ad8*/
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
  _DWORD **i; // ecx

  Array_field_0x10 = this->Array_field_0x10; /*0x634292*/
  result = -1; /*0x634295*/
  v4 = 0; /*0x634298*/
  if ( (int)Array_field_0x10 > 0 ) /*0x63429d*/
  {
    for ( i = (_DWORD **)this->Array_field_0x4; **i != aP1; ++i ) /*0x63429f*/
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

  Array_field_0x10 = (char *)a2_2->Array_field_0x10; /*0x63e590*/
  result = a2_2; /*0x63e593*/
  if ( a2_2 >= (int)Array_field_0x10 ) /*0x63e599*/
  {
    IDA_LOBYTE(result) = 0; /*0x63e5bc*/
  }
  else
  {
    v4 = Array_field_0x10 - 1; /*0x63e59b*/
    a2_2->Array_field_0x10 = v4; /*0x63e59e*/
    if ( a2_2 < (int)v4 ) /*0x63e5a1*/
    {
      do /*0x63e5b4*/
      {
        ++result; /*0x63e5a7*/
        *((_DWORD *)a2_2->Array_field_0x4 + result - 1) = *((_DWORD *)a2_2->Array_field_0x4 + result); /*0x63e5ab*/
      }
      while ( result < (int)a2_2->Array_field_0x10 ); /*0x63e5b4*/
    }
    IDA_LOBYTE(result) = 1; /*0x63e5b7*/
  }
  return result; /*0x63e5b9*/
}
}
// 0x65AD40
namespace gamemd {
int Array::Get(int a2)
{
  return *((_DWORD *)this->Array_field_0xE4 + a2); /*0x65ad4d*/
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

  Array_field_0xE8 = this->Array_field_0xE8; /*0x65adf1*/
  v4 = 0; /*0x65adf7*/
  if ( (int)Array_field_0xE8 <= 0 ) /*0x65adfc*/
  {
  LABEL_6:
    IDA_LOBYTE(result) = 0; /*0x65ae1a*/
  }
  else
  {
    Array_field_0xE4 = (int *)this->Array_field_0xE4; /*0x65adfe*/
    while ( 1 ) /*0x65ae08*/
    {
      result = *Array_field_0xE4; /*0x65ae08*/
      if ( !*Array_field_0xE4 || result == aP1 ) /*0x65ae10*/
        break; /*0x65ae10*/
      ++v4; /*0x65ae12*/
      ++Array_field_0xE4; /*0x65ae13*/
      if ( v4 >= (int)Array_field_0xE8 ) /*0x65ae18*/
        goto LABEL_6; /*0x65ae18*/
    }
    IDA_LOBYTE(result) = 1; /*0x65ae22*/
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
  if ( (int)a1_1->Array_field_0x800 > 0 ) /*0x7490da*/
  {
    v2 = a1_1; /*0x7490dd*/
    do /*0x7490f1*/
    {
      *(_DWORD *)v2->__pad_0 = 0; /*0x7490df*/
      ++result; /*0x7490eb*/
      v2 = (Array *)((char *)v2 + 4); /*0x7490ec*/
    }
    while ( result < (int)a1_1->Array_field_0x800 ); /*0x7490f1*/
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

  if ( this->q201 && (v2 = 0, (int)this->Array_field_0x800 > 0) ) /*0x749169*/
  {
    v3 = (u_long *)this; /*0x74916c*/
    do /*0x749184*/
    {
      *v3 = ntohl(*v3); /*0x749176*/
      ++v2; /*0x74917e*/
      ++v3; /*0x74917f*/
    }
    while ( v2 < (int)this->Array_field_0x800 ); /*0x749184*/
    this->q201 = 0; /*0x749186*/
  }
  else
  {
    this->q201 = 0; /*0x749191*/
  }
}
}
// 0x763980
namespace gamemd {
int Array::GetElement(int aP1)
{
  if ( aP1 < 0 || aP1 >= (int)this->Array_field_0x38 ) /*0x76398b*/
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

  for ( i = 0; i < *(_DWORD *)this->__pad_0; ++i ) /*0x7acd39*/
  {
    DeleteAndZero((ObjectClass *)(*(_DWORD *)this->__pad_8 + 4 * i)); /*0x7acd41*/
    result = *(_DWORD *)this->__pad_0; /*0x7acd46*/
  }
  *(_DWORD *)this->__pad_0 = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/
}
}
// 0x7AD790
namespace gamemd {
AbstractClass * * Array::InsertElement(const void *a1, int aP2)
{
  int v4; // esi
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

  v4 = aP2; /*0x7ad795*/
  v5 = *(_DWORD *)this->__pad_0; /*0x7ad799*/
  if ( aP2 > v5 ) /*0x7ad79e*/
  {
    aP2 = v5; /*0x7ad7a0*/
    v4 = v5; /*0x7ad7a4*/
  }
  Array_field_0x4 = this->Array_field_0x4; /*0x7ad7a6*/
  if ( v4 >= (int)Array_field_0x4 && v5 >= (int)Array_field_0x4 ) /*0x7ad7b4*/
  {
    v7 = 2 * v5; /*0x7ad7b6*/
    if ( 2 * v5 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (void *)RA2_OPNEW(268 * v7); /*0x7ad7d7*/
    memset(v8, 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    v16 = v8; /*0x7ad7ec*/
    v9 = *(const void **)this->__pad_8; /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy(v8, v9, 268 * *(_DWORD *)this->__pad_0); /*0x7ad80f*/
    RA2_OPDEL(*(void **)this->__pad_8); /*0x7ad81c*/
    v4 = aP2; /*0x7ad825*/
    *(_DWORD *)this->__pad_8 = v16; /*0x7ad82c*/
    this->Array_field_0x4 = (void *)v7; /*0x7ad82f*/
  }
  v10 = *(_DWORD *)this->__pad_0; /*0x7ad832*/
  if ( *(_DWORD *)this->__pad_0 >= (int)this->Array_field_0x4 ) /*0x7ad839*/
  {
    v11 = 2 * v10; /*0x7ad83b*/
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (void *)RA2_OPNEW(268 * v11); /*0x7ad85c*/
    memset(v12, 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    v17 = v12; /*0x7ad871*/
    v13 = *(const void **)this->__pad_8; /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy(v12, v13, 268 * *(_DWORD *)this->__pad_0); /*0x7ad894*/
    RA2_OPDEL(*(void **)this->__pad_8); /*0x7ad8a1*/
    v4 = aP2; /*0x7ad8aa*/
    *(_DWORD *)this->__pad_8 = v17; /*0x7ad8b1*/
    this->Array_field_0x4 = (void *)v11; /*0x7ad8b4*/
  }
  if ( v4 < *(_DWORD *)this->__pad_0 ) /*0x7ad8bc*/
    memcpy( /*0x7ad8f2*/
      (void *)(*(_DWORD *)this->__pad_8 + 268 * (v4 + 1)),
      (const void *)(*(_DWORD *)this->__pad_8 + 268 * v4),
      268 * *(_DWORD *)this->__pad_0 - 268 * v4);
  v14 = (void *)(*(_DWORD *)this->__pad_8 + 268 * v4); /*0x7ad907*/
  if ( v14 ) /*0x7ad90c*/
    qmemcpy(v14, a1, 0x10Cu); /*0x7ad917*/
  ++*(_DWORD *)this->__pad_0; /*0x7ad91e*/
  return 1; /*0x7ad91b*/
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
      result = a4((int)a1); /*0x40690c*/
      a1 = (int *)((char *)a1 + a2); /*0x40690e*/
      --v6; /*0x406910*/
    }
    while ( v6 ); /*0x406911*/
  }
  return result; /*0x406917*/
}
} // namespace gamemd
}

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
      if ( *(_DWORD *)(this->Array_field_0x3C[0] + 4 * i) ) /*0x49b737*/
        RA2_OPDEL(*(void **)(this->Array_field_0x3C[0] + 4 * i)); /*0x49b73f*/
    }
    RA2_OPDEL((void *)this->Array_field_0x3C[0]); /*0x49b753*/
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
  IDA_LOBYTE(result) = 0; /*0x49d079*/
  *a2 = 0; /*0x49d07e*/
  if ( a3 == -1 ) /*0x49d084*/
    v3 = *(&this->q0044); /*0x49d086*/
  if ( v3 < 0 || v3 >= *(&this->q0046) ) /*0x49d094*/
    v3 = -1; /*0x49d096*/
  if ( this->q06C ) /*0x49d09a*/
  {
    if ( v3 != -1 ) /*0x49d0a5*/
      *a2 = *(_DWORD *)(*(&this->q0045) + 4 * v3); /*0x49d0ad*/
    if ( *a2 ) /*0x49d0af*/
      IDA_LOBYTE(result) = 1; /*0x49d0b4*/
  }
  return result; /*0x49d0b6*/
}
} // namespace gamemd

// 0x55B880
namespace gamemd {
void Array::RemoveItemByValue(AbstractClass * aP0, int a2)
{
  int v2; // ecx
  int v3; // edx
  _DWORD *v4; // esi
  int v5; // eax

  if ( aP0 ) /*0x55b887*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP0 + 44))(aP0) == 44 ) /*0x55b893*/
    {
      v2 = dword_8B40D8; /*0x55b895*/
      v3 = 0; /*0x55b89b*/
      if ( dword_8B40D8 > 0 ) /*0x55b89f*/
      {
        v4 = dword_8B40CC; /*0x55b8a2*/
        do /*0x55b8da*/
        {
          if ( aP0 == v4[v3] ) /*0x55b8ab*/
          {
            if ( v3 < v2 ) /*0x55b8af*/
            {
              --v2; /*0x55b8b1*/
              v5 = v3; /*0x55b8b2*/
              for ( dword_8B40D8 = v2; v5 < dword_8B40D8; ++v5 ) /*0x55b8bc*/
              {
                v4[v5] = v4[v5 + 1]; /*0x55b8c2*/
                v2 = dword_8B40D8; /*0x55b8c5*/
                v4 = dword_8B40CC; /*0x55b8cb*/
              }
            }
            --v3; /*0x55b8d6*/
          }
          ++v3; /*0x55b8d7*/
        }
        while ( v3 < v2 ); /*0x55b8da*/
      }
    }
  }
}
} // namespace gamemd
