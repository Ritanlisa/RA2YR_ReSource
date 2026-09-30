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

// 0x557AC0
namespace gamemd {
int Array::GetClamped(CheckListClass * aP1)
{

  int result; // eax
  CheckListClass *v3; // edx
  CheckListClass *v4; // eax

  result = *((unsigned int *)this + 17); /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = aP1; /*0x557aca*/
    v4 = (CheckListClass *)(result - 1); /*0x557ace*/
    if ( (int)aP1 >= (int)v4 ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(unsigned int *)(*((unsigned int *)this + 14) + 4 * (unsigned int)v3); /*0x557ad8*/
  }
  return result; /*0x557ac7*/

}
}
// 0x634290
namespace gamemd {
int Array::FindValue(IUnknown * aP1)
{

  int v2; // esi
  int result; // eax
  int v4; // edx
  VectorClass *i; // ecx

  v2 = *((char *)this + 4); /*0x634292*/
  result = -1; /*0x634295*/
  v4 = 0; /*0x634298*/
  if ( v2 > 0 ) /*0x63429d*/
  {
    for ( i = (VectorClass *)*((char *)this + 1); **(IUnknown ***)i->vtable0 != aP1; i = (VectorClass *)((char *)i + 4) ) /*0x63429f*/
    {
      if ( ++v4 >= v2 ) /*0x6342b2*/
        return result; /*0x6342b2*/
    }
    return v4; /*0x6342ba*/
  }
  return result; /*0x6342b4*/

}
}
// 0x63E590
namespace gamemd {
int Array::RemoveAt( int a2)
{

  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = (int)(*(this + 4));
  v3 = a2; /*0x63e593*/
  if ( a2 >= v2 ) /*0x63e599*/
    return 0; /*0x63e5bc*/
  v4 = v2 - 1; /*0x63e59b*/
  *(this + 4) = v4; /*0x63e59e*/
  if ( a2 < v4 ) /*0x63e5a1*/
  {
    do /*0x63e5b4*/
    {
      ++v3; /*0x63e5a7*/
      *(unsigned int *)(*(this + 1) + 4 * v3 - 4) = *(unsigned int *)(*(this + 1) + 4 * v3); /*0x63e5ab*/
    }
    while ( v3 < *(this + 4) ); /*0x63e5b4*/
  }
  return 1; /*0x63e5b9*/

}
}
// 0x65AD40
namespace gamemd {
int Array::Get( int a2)
{

  return *(unsigned int *)(*(this + 57) + 4 * a2); /*0x65ad4d*/

}
}
// 0x65ADF0
namespace gamemd {
int Array::ContainsValue( IUnknown * aP1)
{

  int v2; // esi
  int v3; // edx
  IUnknown **i; // ecx

  v2 = (int)(*(this + 58));
  v3 = 0; /*0x65adf7*/
  if ( v2 <= 0 ) /*0x65adfc*/
    return 0; /*0x65ae1a*/
  for ( i = (IUnknown **)*(this + 57); *i && *i != aP1; ++i ) /*0x65adfe*/
  {
    if ( ++v3 >= v2 ) /*0x65ae18*/
      return 0; /*0x65ae18*/
  }
  return 1; /*0x65ae1a*/

}
}
// 0x7490D0
namespace gamemd {
int Array::Zero()
{

  int result; // eax
  unsigned int *v2; // edx

  result = 0; /*0x7490d6*/
  if ( (int)*((unsigned int *)this + 512) > 0 ) /*0x7490da*/
  {
    v2 = (unsigned int *)(this);
    do /*0x7490f1*/
    {
      *v2 = 0; /*0x7490df*/
      ++result; /*0x7490eb*/
      ++v2; /*0x7490ec*/
    }
    while ( result < *((unsigned int *)this + 512) ); /*0x7490f1*/
  }
  return result; /*0x7490f4*/

}
}
// 0x749150
namespace gamemd {
void Array::ByteSwap()
{

  signed int v2; // ebx
  u_long *v3; // esi

  if ( *((unsigned int *)this + 513) && (v2 = 0, (int)*((unsigned int *)this + 512) > 0) ) /*0x749169*/
  {
    v3 = (gamemd::u_long *)(this);
    do /*0x749184*/
    {
      *v3 = ntohl(*v3); /*0x749176*/
      ++v2; /*0x74917e*/
      ++v3; /*0x74917f*/
    }
    while ( v2 < (int)*((unsigned int *)this + 512) ); /*0x749184*/
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
int Array::GetElement( CampaignScore * aP1)
{

  if ( (int)aP1 < 0 || (int)aP1 >= *(this + 14) ) /*0x76398b*/
    return 0; /*0x763999*/
  else
    return *(this + 11) + 12 * (unsigned int)aP1; /*0x763993*/

}
}
// 0x7ACD30
namespace gamemd {
int Array::CleanupArrayWOL()
{

  int i; // edi
  int result; // eax

  for ( i = 0; i < *this; ++i ) /*0x7acd39*/
  {
    DeleteAndZero((void **)(*((char *)this + 2) + 4 * i)); /*0x7acd41*/
    result = *this; /*0x7acd46*/
  }
  *(unsigned int *)this = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/

}
}
// 0x7AD790
namespace gamemd {
AbstractClass * * Array::InsertElement(const void * a1, ObjectClass * aP2)
{

  ObjectClass * v4;
  int aP2; // ecx
  int v6; // eax
  int v7; // ebp
  CCINIClass *v8; // edx
  CCINIClass *v9; // esi
  int v10; // eax
  int v11; // ebp
  CCINIClass *v12; // edx
  CCINIClass *v13; // esi
  void *v14; // edi
  int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+Ch] [ebp-4h]

  v4 = (gamemd::ObjectClass *)((int)aP2);
  aP2 = (gamemd::ObjectClass *)(*this);
  if ( (int)aP2 > (int)(aP2) ) /*0x7ad79e*/
  {
    aP2 = (gamemd::ObjectClass *)((int)((ObjectClass *)aP2));
    v4 = aP2; /*0x7ad7a4*/
  }
  v6 = *((char *)this + 1); /*0x7ad7a6*/
  if ( v4 >= (gamemd::ObjectClass *)(v6) && aP2 >= (gamemd::ObjectClass *)(v6) ) /*0x7ad7b4*/
  {
    v7 = (gamemd::ObjectClass *)(2 * aP2);
    if ( 2 * aP2 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (CCINIClass *)RA2_OPNEW(268 * v7); /*0x7ad7d7*/
    memset(v8, 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    v16 = (int)v8; /*0x7ad7ec*/
    v9 = (CCINIClass *)*((char *)this + 2); /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy(v8, v9, 268 * *this); /*0x7ad80f*/
    RA2_OPDEL((void *)*((char *)this + 2)); /*0x7ad81c*/
    v4 = (int)aP2; /*0x7ad825*/
    *((char *)this + 2) = v16; /*0x7ad82c*/
    *((char *)this + 1) = v7; /*0x7ad82f*/
  }
  v10 = (int)(*this);
  if ( *this >= *((char *)this + 1) ) /*0x7ad839*/
  {
    v11 = (gamemd::ObjectClass *)(2 * v10);
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (CCINIClass *)RA2_OPNEW(268 * v11); /*0x7ad85c*/
    memset(v12, 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    v17 = (int)v12; /*0x7ad871*/
    v13 = (CCINIClass *)*((char *)this + 2); /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy(v12, v13, 268 * *this); /*0x7ad894*/
    RA2_OPDEL((void *)*((char *)this + 2)); /*0x7ad8a1*/
    v4 = (int)aP2; /*0x7ad8aa*/
    *((char *)this + 2) = v17; /*0x7ad8b1*/
    *((char *)this + 1) = v11; /*0x7ad8b4*/
  }
  if ( v4 < *this ) /*0x7ad8bc*/
    memcpy((void *)(*((char *)this + 2) + 268 * (v4 + 1)), (const void *)(*((char *)this + 2) + 268 * v4), 268 * *this - 268 * v4); /*0x7ad8f2*/
  v14 = (void *)(*((char *)this + 2) + 268 * v4); /*0x7ad907*/
  if ( v14 ) /*0x7ad90c*/
    qmemcpy(v14, a1, 0x10Cu); /*0x7ad917*/
  ++*this; /*0x7ad91e*/
  return 1; /*0x7ad91b*/

}
}
// 0x4068F0
namespace gamemd {
int Array::ForEach(int a1, int a2, int a3, int (* a4)(int) a4)
{

  int result; // eax
  int v6; // edi

  result = a3 - 1; /*0x4068f4*/
  if ( a3 - 1 >= 0 ) /*0x4068f5*/
  {
    v6 = a3; /*0x406907*/
    do /*0x406911*/
    {
      result = a4(a1); /*0x40690c*/
      a1 += a2; /*0x40690e*/
      --v6; /*0x406910*/
    }
    while ( v6 ); /*0x406911*/
  }
  return result; /*0x406917*/

}
} // namespace gamemd

// 0x40AFD0
namespace gamemd {
int Array::ForEachReverse(ObjectClass * aP0, int a2, int a3, int (* a4)(int) a4)
{

  char *v4; // esi
  int result; // eax
  int v6; // edi

  v4 = &aP0->__pad_0[a3 * a2]; /*0x40afe3*/
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

  int i; // edi

  if ( *((unsigned int *)this + 15) ) /*0x49b723*/
  {
    for ( i = 0; i < *((unsigned int *)this + 16); ++i ) /*0x49b732*/
    {
      if ( *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) ) /*0x49b737*/
        RA2_OPDEL(*(void **)(*((unsigned int *)this + 15) + 4 * i)); /*0x49b73f*/
    }
    RA2_OPDEL(*(void **)((char *)this + 60)); /*0x49b753*/
  }

}
} // namespace gamemd

// 0x49D070
namespace gamemd {
char Array::GetElementAt(unsigned int * a2, int a3)
{

  int v3; // edx
  char result; // al

  v3 = a3; /*0x49d070*/
  result = 0; /*0x49d079*/
  *a2 = 0; /*0x49d07e*/
  if ( a3 == -1 ) /*0x49d084*/
    v3 = *((unsigned int *)this + 14); /*0x49d086*/
  if ( v3 < 0 || v3 >= *((unsigned int *)this + 16) ) /*0x49d094*/
    v3 = -1; /*0x49d096*/
  if ( *((unsigned char *)this + 108) ) /*0x49d09a*/
  {
    if ( v3 != -1 ) /*0x49d0a5*/
      *a2 = *(unsigned int *)(*((unsigned int *)this + 15) + 4 * v3); /*0x49d0ad*/
    if ( *a2 ) /*0x49d0af*/
      return 1; /*0x49d0b4*/
  }
  return result; /*0x49d0b6*/

}
} // namespace gamemd

// 0x55B880
namespace gamemd {
void Array::RemoveItemByValue(AbstractClass * aP0, int a2)
{

  ParticleSystemClass *v2; // ecx
  int v3; // edx
  ParticleSystemClass *v4; // esi
  int v5; // eax

  if ( aP0 ) /*0x55b887*/
  {
    if ( (*(int (**)(AbstractClass *))(*(unsigned int *)aP0->__pad_0 + 44))(aP0) == 44 ) /*0x55b893*/
    {
      v2 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67588]; /*0x55b895*/
      v3 = 0; /*0x55b89b*/
      if ( *(int *)&stru_89E138.__pad_579C[67588] > 0 ) /*0x55b89f*/
      {
        v4 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67576]; /*0x55b8a2*/
        do /*0x55b8da*/
        {
          if ( aP0 == *(AbstractClass **)&v4->__pad_0[4 * v3] ) /*0x55b8ab*/
          {
            if ( v3 < (int)v2 ) /*0x55b8af*/
            {
              v2 = (ParticleSystemClass *)((char *)v2 - 1); /*0x55b8b1*/
              v5 = v3; /*0x55b8b2*/
              *(unsigned int *)&stru_89E138.__pad_579C[67588] = v2; /*0x55b8b6*/
              if ( v3 < (int)v2 ) /*0x55b8bc*/
              {
                do /*0x55b8d4*/
                {
                  *(unsigned int *)&v4->__pad_0[4 * v5] = *(unsigned int *)&v4->__pad_0[4 * v5 + 4]; /*0x55b8c2*/
                  v2 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67588]; /*0x55b8c5*/
                  v4 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67576]; /*0x55b8cb*/
                  ++v5; /*0x55b8d1*/
                }
                while ( v5 < *(int *)&stru_89E138.__pad_579C[67588] ); /*0x55b8d4*/
              }
            }
            --v3; /*0x55b8d6*/
          }
          ++v3; /*0x55b8d7*/
        }
        while ( v3 < (int)v2 ); /*0x55b8da*/
      }
    }
  }

}
} // namespace gamemd
