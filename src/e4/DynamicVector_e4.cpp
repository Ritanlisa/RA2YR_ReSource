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
  v4 = (int)(__2_YAPAXI_Z(4 * v3)); /*0x5ac453*/
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
  unsigned int *v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x413a73*/
  result = this->Count; /*0x413a76*/
  if ( result < DynamicVector_field_0x8 /*0x413a9d*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->ClearAndFree2_ph + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = this->Count; /*0x413aa5*/
    v5 = *&this->Items; /*0x413aa8*/
    this->Count = result + 1; /*0x413aae*/
    v5[result] = *aP1; /*0x413ab8*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x413abb*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x413a9f*/
  }
  return result; /*0x413aa1*/

}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2, void *a3_1)
{

  *&aP1->vfptr1 = 0; /*0x42f67a*/
  aP1->vtable3 = aP2; /*0x42f681*/
  aP1->vtable4 = (void *)(1); /*0x42f684*/
  aP1->u32_D = 0; /*0x42f688*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x42f68c) */
  if ( aP2 ) /*0x42f692*/
  {
    if ( a3_1 ) /*0x42f69a*/
    {
      *&aP1->vfptr1 = a3_1; /*0x42f69d*/
    }
    else
    {
      int v4; // eax
      v4 = operator new(4 * aP2); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *&aP1->vfptr1 = (void *)(v4); /*0x42f6c3*/
      aP1->u32_D = 1; /*0x42f6c6*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x42f6ca) */
  *(unsigned int *)aP1->abstractFlags = 10; /*0x42f6d0*/
  aP1->uniqueId = 0; /*0x42f6d7*/
  return (unsigned int *)(aP1->vfptr); /*0x42f6e0*/
}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(int aP1, void *a2)
{


  char *DynamicVector_field_0x10; // edx
  DynamicVector_field_0x10 = (char *)this->Count; /*0x45add0*/
  int result = aP1; // eax /*0x45add3*/
  if ( aP1 >= (int)DynamicVector_field_0x10 ) /*0x45add9*/
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x45adfc*/
  }
  else
  {
    char *v4 = DynamicVector_field_0x10 - 1; // edx /*0x45addb*/
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
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x45adf7*/
  }
  return result; /*0x45adf9*/

}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(unsigned int *aP1, void *a2)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  unsigned int *v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x477ec3*/
  result = this->Count; /*0x477ec6*/
  if ( result < DynamicVector_field_0x8 /*0x477eed*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->ClearAndFree2_ph + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = this->Count; /*0x477ef5*/
    v5 = *&this->Items; /*0x477ef8*/
    this->Count = result + 1; /*0x477efe*/
    v5[result] = *a2; /*0x477f08*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x477f0b*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x477eef*/
  }
  return result; /*0x477ef1*/

}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(int aP1)
{


  int DynamicVector_field_0x8 = this->Capacity; // edi /*0x49fae9*/
  if ( aP1 < DynamicVector_field_0x8 ) /*0x49faee*/
    return *(unsigned int *)(*&this->Items + 4 * aP1); /*0x49fb26*/
  if ( (*(unsigned __int8 (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))( /*0x49fafa*/
         this,
         aP1 + 10,
         0) )
  {
    int i; // eax
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
char DynamicVector::Add_Alt4(unsigned int *aP1, void *a2)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  unsigned int *v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x5253b3*/
  result = this->Count; /*0x5253b6*/
  if ( result < DynamicVector_field_0x8 /*0x5253dd*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->ClearAndFree2_ph + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = this->Count; /*0x5253e5*/
    v5 = *&this->Items; /*0x5253e8*/
    this->Count = result + 1; /*0x5253ee*/
    v5[result] = *a2; /*0x5253f8*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5253fb*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5253df*/
  }
  return result; /*0x5253e1*/

}
} // namespace gamemd

// 0x538780
namespace gamemd {
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{


  int DynamicVector_field_0x8 = this->Capacity; // ecx /*0x538783*/
  if ( (int)this->Count >= DynamicVector_field_0x8 ) /*0x53878b*/
  {
    if ( !this->IsAllocated && DynamicVector_field_0x8 ) /*0x538796*/
      return 0; /*0x538796*/
    int v4; // eax
    v4 = *(unsigned int *)this->CapacityIncrement; /*0x538798*/
    if ( v4 <= 0 /*0x5387a8*/
      || !(*(unsigned __int8 (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x5387af*/
    }
  }
  void *DynamicVector_field_0x10 = this->Count; // eax /*0x5387b5*/
  int v7; // edx
  v7 = (int)(*&this->Items); /*0x5387b8*/
  this->Count = &DynamicVector_field_0x10->AbstractClass_1; /*0x5387be*/
  *(unsigned int *)(v7 + 4 * (unsigned int)DynamicVector_field_0x10) = (unsigned int)(*aP1); /*0x5387c8*/
  return 1; /*0x5387b1*/

}
} // namespace gamemd

// 0x5AD7D0
namespace gamemd {
char DynamicVector::Add_Alt3(VectorClass_flat * aP1)
{


  int DynamicVector_field_0x8 = this->Capacity; // ecx /*0x5ad7d3*/
  int result; // eax
  result = (int)this->Count; /*0x5ad7d6*/
  if ( result < DynamicVector_field_0x8 /*0x5ad7fd*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->Count; /*0x5ad805*/
    int v5; // edx
    v5 = (int)(*&this->Items); /*0x5ad808*/
    this->Count = &result->AbstractClass_1; /*0x5ad80e*/
    *(unsigned int *)(v5 + 4 * result) = (unsigned int)(*aP1); /*0x5ad818*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5ad81b*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5ad7ff*/
  }
  return result; /*0x5ad801*/

}
} // namespace gamemd

// 0x624810
namespace gamemd {
char DynamicVector::GrowCapacity()
{


  int v2; // eax
  v2 = *(unsigned int *)this->__pad_0; /*0x624814*/
  if ( *(unsigned int *)this->__pad_0 < *&this->Items ) /*0x62481b*/
    return 0; /*0x62481d*/
  int v4 = 2 * v2; // ebp /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  void *v5; // edx
  v5 = __2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  int v7; // [esp+4h] [ebp-4h]
  v7 = (int)v5; /*0x624854*/
  const void *DynamicVector_field_0x8; // esi
  DynamicVector_field_0x8 = (const void *)this->Capacity; /*0x62485a*/
  if ( DynamicVector_field_0x8 ) /*0x62485f*/
    memcpy(v5, DynamicVector_field_0x8, 24 * *(unsigned int *)this->__pad_0); /*0x624870*/
  __3_YAXPAX_Z((void *)this->Capacity); /*0x62487d*/
  *&this->Items = (void *)(v4); /*0x624889*/
  this->Capacity = v7; /*0x62488c*/
  return 1; /*0x62481f*/

}
} // namespace gamemd

// 0x67A520
namespace gamemd {
int DynamicVector::Read(TechnoTypeClass * aP1, void *a2_1, void *a3)
{

  int v3; // ecx
  v3 = (int)(*a2_1); /*0x67a52c*/
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF
  DynamicVector_field_0x10 = aP1->uniqueId; /*0x67a539*/
  (*(void (__stdcall **)(int *, void **, int, unsigned int))(v3 + 16))(a2_1, &DynamicVector_field_0x10, 4, 0); /*0x67a53d*/
  int result; // eax
  result = (int)DynamicVector_field_0x10; /*0x67a540*/
  int i; // esi
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
  v3 = (int)(*aP1); /*0x67a6ec*/
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF
  DynamicVector_field_0x10 = this->Count; /*0x67a6f9*/
  (*(void (**)(int *, void **, int, unsigned int))(v3 + 16))(aP1, &DynamicVector_field_0x10, 4, 0); /*0x67a6fd*/
  int result; // eax
  result = (int)DynamicVector_field_0x10; /*0x67a700*/
  int i; // esi
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
      *&this->Items = (void *)(a3); /*0x67ac9b*/
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
  return (unsigned int *)(this->__pad_0); /*0x67acc9*/

}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(unsigned int *aP1, void *a2, void *a3, void *a4)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  unsigned int *v5; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x67ad83*/
  result = this->Count; /*0x67ad86*/
  if ( result < DynamicVector_field_0x8 /*0x67adad*/
    || (this->IsAllocated || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->CapacityIncrement, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->ClearAndFree2_ph + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = this->Count; /*0x67adb5*/
    v5 = *&this->Items; /*0x67adb8*/
    this->Count = result + 1; /*0x67adbe*/
    v5[result] = *a2; /*0x67adc8*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x67adcb*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x67adaf*/
  }
  return result; /*0x67adb1*/

}
} // namespace gamemd

// 0x67C360
namespace gamemd {
char DynamicVector::RemoveAt(int a2, void *a2_2)
{

  char *DynamicVector_field_0x10; // edx
  DynamicVector_field_0x10 = (char *)a2_2->DynamicVector_field_0x10; /*0x67c360*/
  int v3; // eax
  v3 = (int)(a2_2); /*0x67c363*/
  if ( a2_2 >= (int)DynamicVector_field_0x10 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  char *v4 = DynamicVector_field_0x10 - 1; // edx /*0x67c36b*/
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
  DynamicVector_field_0x10 = (char *)this->Count; /*0x67c3f0*/
  int v3 = a2; // eax /*0x67c3f3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  char *v4 = DynamicVector_field_0x10 - 1; // edx /*0x67c3fb*/
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
  int DynamicVector_field_0x10; // eax
  unsigned int *v7; // edx

  DynamicVector_field_0x8 = this->Capacity; /*0x6c6403*/
  if ( this->Count >= DynamicVector_field_0x8 ) /*0x6c640b*/
  {
    if ( !this->IsAllocated && DynamicVector_field_0x8 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(unsigned int *)this->CapacityIncrement; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(unsigned __int8 (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->ClearAndFree2_ph + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  DynamicVector_field_0x10 = this->Count; /*0x6c6435*/
  v7 = *&this->Items; /*0x6c6438*/
  this->Count = DynamicVector_field_0x10 + 1; /*0x6c643e*/
  v7[DynamicVector_field_0x10] = *a2; /*0x6c6448*/
  return 1; /*0x6c6431*/

}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3, void *a3_1)
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
char DynamicVector::EnsureCapacity(void *a1)
{


  int result; // eax
  result = *(unsigned int *)this->vtable1; /*0x7af004*/
  if ( *(unsigned int *)this->vtable1 >= *&this->Items ) /*0x7af00b*/
  {
    int v3 = 2 * result; // esi /*0x7af014*/
    int v5; // [esp+4h] [ebp-4h]
    v5 = 2 * result; /*0x7af01b*/
    if ( 2 * result < 10 ) /*0x7af01f*/
    {
      v5 = 10; /*0x7af021*/
      v3 = 10; /*0x7af029*/
    }
    void *v4; // ebp
    v4 = __2_YAPAXI_Z(4 * v3); /*0x7af03c*/
    memset(v4, 0, 4 * ((unsigned int)(4 * v3) >> 2)); /*0x7af04a*/
    if ( this->Capacity ) /*0x7af053*/
    {
      memcpy(v4, (const void *)this->Capacity, 4 * *(unsigned int *)this->vtable1); /*0x7af068*/
      v3 = v5; /*0x7af071*/
    }
    __3_YAXPAX_Z((void *)this->Capacity); /*0x7af079*/
    *&this->Items = v3; /*0x7af081*/
    this->Capacity = (int)v4; /*0x7af084*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7af087*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7af00d*/
  }
  return result; /*0x7af00f*/

}
} // namespace gamemd
