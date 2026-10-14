// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/E4Recv_68C260_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x5AC430
namespace gamemd {  // G42.18 ns repair
unsigned int * DynamicVector::Copy(VectorClass_flat * aP1, void *a2_1)
{

  int v3; // eax
  int v4; // eax
  int DynamicVector_field_0x8; // ecx
  int v6; // eax

  if ( aP1 == (DynamicVector *)a2_1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (**)(DynamicVector *))(*(unsigned int *)aP1->vtable1 + 12))(aP1); /*0x5ac43e*/
  v3 = a2_1[2]; /*0x5ac441*/
  aP1->Capacity = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *&aP1->Items = 0; /*0x5ac496*/
    aP1->IsAllocated = 0; /*0x5ac49d*/
LABEL_8:
    aP1->Count = (void *)a2_1[4]; /*0x5ac4a1*/
    *(unsigned int *)aP1->CapacityIncrement = a2_1[5]; /*0x5ac4aa*/
    return aP1->vtable1; /*0x5ac4ad*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  *&aP1->Items = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  DynamicVector_field_0x8 = aP1->Capacity; /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  aP1->IsAllocated = 1; /*0x5ac469*/
  if ( DynamicVector_field_0x8 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(unsigned int *)(*&aP1->Items + 4 * v6) = *(unsigned int *)(a2_1[1] + 4 * v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < aP1->Capacity ); /*0x5ac481*/
  aP1->Count = (void *)a2_1[4]; /*0x5ac486*/
  *(unsigned int *)aP1->CapacityIncrement = a2_1[5]; /*0x5ac48c*/
  return aP1->vtable1; /*0x5ac491*/

}
}  // G42.18 ns repair
// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(unsigned int *aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x413a73*/
  result = (int)this->Count; /*0x413a76*/
  if ( result < DynamicVector_field_0x8 /*0x413a9d*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->Count; /*0x413aa5*/
    v5 = *&this->Items; /*0x413aa8*/
    this->Count = &result->AbstractClass_1; /*0x413aae*/
    *(unsigned int *)(v5 + 4 * result) = *aP1; /*0x413ab8*/
    LOBYTE(result) = 1; /*0x413abb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x413a9f*/
  }
  return result; /*0x413aa1*/

}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2, void *a3_1)
{
  int v4; // eax

  *&aP1->vtable2 = 0; /*0x42f67a*/
  aP1->vtable3 = aP2; /*0x42f681*/
  aP1->vtable4 = 1; /*0x42f684*/
  aP1->u32_D = 0; /*0x42f688*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x42f68c) */
  if ( aP2 ) /*0x42f692*/
  {
    if ( a3_1 ) /*0x42f69a*/
    {
      *&aP1->vtable2 = a3_1; /*0x42f69d*/
    }
    else
    {
      v4 = operator new(4 * aP2); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *&aP1->vtable2 = v4; /*0x42f6c3*/
      aP1->u32_D = 1; /*0x42f6c6*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x42f6ca) */
  *(unsigned int *)aP1->abstractFlags = 10; /*0x42f6d0*/
  aP1->uniqueId = 0; /*0x42f6d7*/
  return aP1->vtable1; /*0x42f6e0*/
}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(int aP1)
{

  char *DynamicVector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->Count; /*0x45add0*/
  result = aP1; /*0x45add3*/
  if ( aP1 >= (int)DynamicVector_field_0x10 ) /*0x45add9*/
  {
    LOBYTE(result) = 0; /*0x45adfc*/
  }
  else
  {
    v4 = DynamicVector_field_0x10 - 1; /*0x45addb*/
    this->Count = v4; /*0x45adde*/
    if ( aP1 < (int)v4 ) /*0x45ade1*/
    {
      do /*0x45adf4*/
      {
        ++result; /*0x45ade7*/
        *(unsigned int *)(*&this->Items + 4 * result - 4) = *(unsigned int *)(*&this->Items /*0x45adeb*/
                                                                                               + 4 * result);
      }
      while ( result < (int)this->Count ); /*0x45adf4*/
    }
    LOBYTE(result) = 1; /*0x45adf7*/
  }
  return result; /*0x45adf9*/

}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(unsigned int *aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x477ec3*/
  result = (int)this->Count; /*0x477ec6*/
  if ( result < DynamicVector_field_0x8 /*0x477eed*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->Count; /*0x477ef5*/
    v5 = *&this->Items; /*0x477ef8*/
    this->Count = &result->AbstractClass_1; /*0x477efe*/
    *(unsigned int *)(v5 + 4 * result) = *aP1; /*0x477f08*/
    LOBYTE(result) = 1; /*0x477f0b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x477eef*/
  }
  return result; /*0x477ef1*/

}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(int aP1)
{

  int DynamicVector_field_0x8; // edi
  int i; // eax

  DynamicVector_field_0x8 = this->Capacity; /*0x49fae9*/
  if ( aP1 < DynamicVector_field_0x8 ) /*0x49faee*/
    return *(unsigned int *)(*&this->Items + 4 * aP1); /*0x49fb26*/
  if ( (*(unsigned __int8 (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))( /*0x49fafa*/
         this,
         aP1 + 10,
         0) )
  {
    for ( i = DynamicVector_field_0x8; /*0x49fb08*/
          i < this->Capacity;
          *(unsigned int *)(*&this->Items + 4 * i - 4) = 0 )
    {
      ++i; /*0x49fb0d*/
    }
    return *(unsigned int *)(*&this->Items + 4 * aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/

}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(unsigned int *aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x5253b3*/
  result = (int)this->Count; /*0x5253b6*/
  if ( result < DynamicVector_field_0x8 /*0x5253dd*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->Count; /*0x5253e5*/
    v5 = *&this->Items; /*0x5253e8*/
    this->Count = &result->AbstractClass_1; /*0x5253ee*/
    *(unsigned int *)(v5 + 4 * result) = *aP1; /*0x5253f8*/
    LOBYTE(result) = 1; /*0x5253fb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5253df*/
  }
  return result; /*0x5253e1*/

}
} // namespace gamemd

// 0x538780
namespace gamemd {
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x538783*/
  if ( (int)this->Count >= DynamicVector_field_0x8 ) /*0x53878b*/
  {
    if ( !this->IsAllocated && DynamicVector_field_0x8 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *(unsigned int *)this->CapacityIncrement; /*0x538798*/
    if ( v4 <= 0 /*0x5387a8*/
      || !(*(unsigned __int8 (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x5387af*/
    }
  }
  DynamicVector_field_0x10 = this->Count; /*0x5387b5*/
  v7 = *&this->Items; /*0x5387b8*/
  this->Count = &DynamicVector_field_0x10->AbstractClass_1; /*0x5387be*/
  *(unsigned int *)(v7 + 4 * (unsigned int)DynamicVector_field_0x10) = *aP1; /*0x5387c8*/
  return 1; /*0x5387b1*/

}
} // namespace gamemd

// 0x5AD7D0
namespace gamemd {
char DynamicVector::Add_Alt3(VectorClass_flat * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x5ad7d3*/
  result = (int)this->Count; /*0x5ad7d6*/
  if ( result < DynamicVector_field_0x8 /*0x5ad7fd*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->Count; /*0x5ad805*/
    v5 = *&this->Items; /*0x5ad808*/
    this->Count = &result->AbstractClass_1; /*0x5ad80e*/
    *(unsigned int *)(v5 + 4 * result) = *aP1; /*0x5ad818*/
    LOBYTE(result) = 1; /*0x5ad81b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x5ad7ff*/
  }
  return result; /*0x5ad801*/

}
} // namespace gamemd

// 0x624810
namespace gamemd {
char DynamicVector::GrowCapacity()
{

  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *DynamicVector_field_0x8; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(unsigned int *)this->vtable1; /*0x624814*/
  if ( *(unsigned int *)this->vtable1 < *&this->Items ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = (void *)__2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  DynamicVector_field_0x8 = (const void *)this->Capacity; /*0x62485a*/
  if ( DynamicVector_field_0x8 ) /*0x62485f*/
    qmemcpy(v5, DynamicVector_field_0x8, 24 * *(unsigned int *)this->vtable1); /*0x624870*/
  __3_YAXPAX_Z((void *)this->Capacity); /*0x62487d*/
  *&this->Items = v4; /*0x624889*/
  this->Capacity = v7; /*0x62488c*/
  return 1; /*0x62481f*/

}
} // namespace gamemd

// 0x67A520
namespace gamemd {
int DynamicVector::Read(TechnoTypeClass * aP1, void *a2_1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2_1; /*0x67a52c*/
  DynamicVector_field_0x10 = aP1->uniqueId; /*0x67a539*/
  (*(void (__stdcall **)(int *, void **, int, unsigned int))(v3 + 16))(a2_1, &DynamicVector_field_0x10, 4, 0); /*0x67a53d*/
  result = (int)DynamicVector_field_0x10; /*0x67a540*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2_1 + 16))( /*0x67a558*/
      a2_1,
      *&aP1->vtable2 + 4 * i,
      4,
      0);
    result = (int)DynamicVector_field_0x10; /*0x67a55b*/
  }
  return result; /*0x67a564*/
}
} // namespace gamemd

// 0x67A6E0
namespace gamemd {
int DynamicVector::Read_Alt(TechnoTypeClass * aP1)
{

  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a6ec*/
  DynamicVector_field_0x10 = this->Count; /*0x67a6f9*/
  (*(void (**)(int *, void **, int, unsigned int))(v3 + 16))(aP1, &DynamicVector_field_0x10, 4, 0); /*0x67a6fd*/
  result = (int)DynamicVector_field_0x10; /*0x67a700*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a708*/
  {
    aP1->IsClean(/*0x67a718*/
      aP1, *&this->Items + 4 * i, 4, 0);
    result = (int)DynamicVector_field_0x10; /*0x67a71b*/
  }
  return result; /*0x67a724*/

}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{

  *&this->Items = 0; /*0x67ac79*/
  this->Capacity = a2; /*0x67ac80*/
  this->IsInitialized = 1; /*0x67ac83*/
  this->IsAllocated = 0; /*0x67ac87*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x67ac8b) */
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *&this->Items = a3; /*0x67ac9b*/
    }
    else
    {
      *&this->Items = __2_YAPAXI_Z(4 * a2); /*0x67acac*/
      this->IsAllocated = 1; /*0x67acaf*/
    }
  }
  *(unsigned int *)this->ClearAndFree2_ph = &vt_DynamicVectorClass; /*0x67acb3*/
  *(unsigned int *)this->CapacityIncrement = 10; /*0x67acb9*/
  this->Count = 0; /*0x67acc0*/
  return this->vtable1; /*0x67acc9*/

}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(unsigned int *aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x67ad83*/
  result = (int)this->Count; /*0x67ad86*/
  if ( result < DynamicVector_field_0x8 /*0x67adad*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->vtable1 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->Count; /*0x67adb5*/
    v5 = *&this->Items; /*0x67adb8*/
    this->Count = &result->AbstractClass_1; /*0x67adbe*/
    *(unsigned int *)(v5 + 4 * result) = *aP1; /*0x67adc8*/
    LOBYTE(result) = 1; /*0x67adcb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x67adaf*/
  }
  return result; /*0x67adb1*/

}
} // namespace gamemd

// 0x67C360
namespace gamemd {
char DynamicVector::RemoveAt(int a2, void *a2_2)
{
  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)a2_2->DynamicVector_field_0x10; /*0x67c360*/
  v3 = a2_2; /*0x67c363*/
  if ( a2_2 >= (int)DynamicVector_field_0x10 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c36b*/
  a2_2->DynamicVector_field_0x10 = v4; /*0x67c36e*/
  if ( a2_2 < (int)v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(unsigned int *)(*(unsigned int *)&a2_2->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&a2_2->DynamicVector_field_0x1[3] /*0x67c37b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)a2_2->DynamicVector_field_0x10 ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}
} // namespace gamemd

// 0x67C3F0
namespace gamemd {
char DynamicVector::RemoveAt2(int a2)
{

  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->Count; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c3fb*/
  this->Count = v4; /*0x67c3fe*/
  if ( a2 < (int)v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(unsigned int *)(*&this->Items + 4 * v3 - 4) = *(unsigned int *)(*&this->Items /*0x67c40b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->Count ); /*0x67c414*/
  }
  return 1; /*0x67c419*/

}
} // namespace gamemd

// 0x6C6400
namespace gamemd {
char DynamicVector::Add(DynamicVector * aP1, void *a2_1, void *a3_1)
{

  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = aP1->Capacity; /*0x6c6403*/
  if ( (int)aP1->Count >= DynamicVector_field_0x8 ) /*0x6c640b*/
  {
    if ( !aP1->IsAllocated && DynamicVector_field_0x8 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(unsigned int *)aP1->CapacityIncrement; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(unsigned __int8 (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)aP1->vtable1 + 8))(
            aP1,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  DynamicVector_field_0x10 = aP1->Count; /*0x6c6435*/
  v7 = *&aP1->Items; /*0x6c6438*/
  aP1->Count = &DynamicVector_field_0x10->AbstractClass_1; /*0x6c643e*/
  *(unsigned int *)(v7 + 4 * (unsigned int)DynamicVector_field_0x10) = *a2_1; /*0x6c6448*/
  return 1; /*0x6c6431*/

}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{

  *&this->Items = 0; /*0x7342d9*/
  this->Capacity = a2; /*0x7342e0*/
  this->IsInitialized = 1; /*0x7342e3*/
  this->IsAllocated = 0; /*0x7342e7*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x7342eb) */
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      *&this->Items = a3; /*0x7342fb*/
    }
    else
    {
      *&this->Items = __2_YAPAXI_Z(4 * a2); /*0x73430c*/
      this->IsAllocated = 1; /*0x73430f*/
    }
  }
  *(unsigned int *)this->ClearAndFree2_ph = &vt_DynamicVectorClass; /*0x734313*/
  *(unsigned int *)this->CapacityIncrement = 10; /*0x734319*/
  this->Count = 0; /*0x734320*/
  return this->vtable1; /*0x734329*/

}
} // namespace gamemd

// 0x7AF000
namespace gamemd {
char DynamicVector::EnsureCapacity()
{

  int result; // eax
  int v3; // esi
  void *v4; // ebp
  int v5; // [esp+4h] [ebp-4h]

  result = *(unsigned int *)this->vtable1; /*0x7af004*/
  if ( *(unsigned int *)this->vtable1 >= *&this->Items ) /*0x7af00b*/
  {
    v3 = 2 * result; /*0x7af014*/
    v5 = 2 * result; /*0x7af01b*/
    if ( 2 * result < 10 ) /*0x7af01f*/
    {
      v5 = 10; /*0x7af021*/
      v3 = 10; /*0x7af029*/
    }
    v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x7af03c*/
    memset(v4, 0, 4 * ((unsigned int)(4 * v3) >> 2)); /*0x7af04a*/
    if ( this->Capacity ) /*0x7af053*/
    {
      qmemcpy(v4, (const void *)this->Capacity, 4 * *(unsigned int *)this->vtable1); /*0x7af068*/
      v3 = v5; /*0x7af071*/
    }
    __3_YAXPAX_Z((void *)this->Capacity); /*0x7af079*/
    *&this->Items = v3; /*0x7af081*/
    this->Capacity = (int)v4; /*0x7af084*/
    LOBYTE(result) = 1; /*0x7af087*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7af00d*/
  }
  return result; /*0x7af00f*/

}
} // namespace gamemd
