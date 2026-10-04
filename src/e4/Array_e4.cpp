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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x557AC0)
}
}
// 0x634290
namespace gamemd {
int Array::FindValue(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x634290)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7490D0)
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
      *v3 =       *v3 = ntohl((void *)(*v3)); 
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763980)
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
    j_DeleteAndZero((ObjectClass *)(*(unsigned int *)this->__pad_8 + 4 * i)); /*0x7acd41*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7AD790)
}
}
// 0x4068F0
namespace gamemd {
int Array::ForEach(int a1, int a2, int a3, int (* a4)(int))
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
      a1 = (int)((int *)((char *)a1 + a2)); /*0x40690e*/
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
    v3 = this->q038; /*0x49d086*/
  if ( v3 < 0 || v3 >= this->q010 ) /*0x49d094*/
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
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55B880)
}
} // namespace gamemd
