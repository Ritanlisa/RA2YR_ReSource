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

// 0x5AC430
namespace gamemd {
unsigned int * DynamicVector::Copy(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int DynamicVector_field_0x8; // ecx
  int v6; // eax

  if ( this == (DynamicVector *)aP1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (**)(DynamicVector *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5ac43e*/
  v3 = aP1[2]; /*0x5ac441*/
  this->DynamicVector_field_0x8 = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *(unsigned int *)&this->DynamicVector_field_0x1[3] = 0; /*0x5ac496*/
    this->__pad_C[1] = 0; /*0x5ac49d*/
LABEL_8:
    this->DynamicVector_field_0x10 = (void *)aP1[4]; /*0x5ac4a1*/
    *(unsigned int *)this->__pad_14 = aP1[5]; /*0x5ac4aa*/
    return this->__pad_0; /*0x5ac4ad*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  *(unsigned int *)&this->DynamicVector_field_0x1[3] = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  this->__pad_C[1] = 1; /*0x5ac469*/
  if ( DynamicVector_field_0x8 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < this->DynamicVector_field_0x8 ); /*0x5ac481*/
  this->DynamicVector_field_0x10 = (void *)aP1[4]; /*0x5ac486*/
  *(unsigned int *)this->__pad_14 = aP1[5]; /*0x5ac48c*/
  return this->__pad_0; /*0x5ac491*/

}
}
// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(VectorClass_flat * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x413a73*/
  result = (int)this->DynamicVector_field_0x10; /*0x413a76*/
  if ( result < DynamicVector_field_0x8 /*0x413a9d*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x413aa5*/
    v5 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x413aa8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x413aae*/
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
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2)
{

  int v4; // eax

  *(unsigned int *)&this->DynamicVector_field_0x1[3] = 0; /*0x42f67a*/
  this->DynamicVector_field_0x8 = aP1; /*0x42f681*/
  this->__pad_C[0] = 1; /*0x42f684*/
  this->__pad_C[1] = 0; /*0x42f688*/
  *(unsigned int *)this->__pad_0 = &VectorClass<Cell>::`vftable'; /*0x42f68c*/
  if ( aP1 ) /*0x42f692*/
  {
    if ( aP2 ) /*0x42f69a*/
    {
      *(unsigned int *)&this->DynamicVector_field_0x1[3] = aP2; /*0x42f69d*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * aP1); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *(unsigned int *)&this->DynamicVector_field_0x1[3] = v4; /*0x42f6c3*/
      this->__pad_C[1] = 1; /*0x42f6c6*/
    }
  }
  *(unsigned int *)this->__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x42f6ca*/
  *(unsigned int *)this->__pad_14 = 10; /*0x42f6d0*/
  this->DynamicVector_field_0x10 = 0; /*0x42f6d7*/
  return this->__pad_0; /*0x42f6e0*/

}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(IUnknown * aP1)
{

  char *DynamicVector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x45add0*/
  result = aP1; /*0x45add3*/
  if ( aP1 >= (int)DynamicVector_field_0x10 ) /*0x45add9*/
  {
    LOBYTE(result) = 0; /*0x45adfc*/
  }
  else
  {
    v4 = DynamicVector_field_0x10 - 1; /*0x45addb*/
    this->DynamicVector_field_0x10 = v4; /*0x45adde*/
    if ( aP1 < (int)v4 ) /*0x45ade1*/
    {
      do /*0x45adf4*/
      {
        ++result; /*0x45ade7*/
        *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * result - 4) = *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] /*0x45adeb*/
                                                                                               + 4 * result);
      }
      while ( result < (int)this->DynamicVector_field_0x10 ); /*0x45adf4*/
    }
    LOBYTE(result) = 1; /*0x45adf7*/
  }
  return result; /*0x45adf9*/

}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(VectorClass_flat * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x477ec3*/
  result = (int)this->DynamicVector_field_0x10; /*0x477ec6*/
  if ( result < DynamicVector_field_0x8 /*0x477eed*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x477ef5*/
    v5 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x477ef8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x477efe*/
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
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{

  int DynamicVector_field_0x8; // edi
  int i; // eax

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x49fae9*/
  if ( aP1 < DynamicVector_field_0x8 ) /*0x49faee*/
    return *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * aP1); /*0x49fb26*/
  if ( (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))( /*0x49fafa*/
         this,
         aP1 + 10,
         0) )
  {
    for ( i = DynamicVector_field_0x8; /*0x49fb08*/
          i < this->DynamicVector_field_0x8;
          *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * i - 4) = 0 )
    {
      ++i; /*0x49fb0d*/
    }
    return *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/

}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(VectorClass_flat * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5253b3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5253b6*/
  if ( result < DynamicVector_field_0x8 /*0x5253dd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5253e5*/
    v5 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x5253e8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x5253ee*/
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

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x538783*/
  if ( (int)this->DynamicVector_field_0x10 >= DynamicVector_field_0x8 ) /*0x53878b*/
  {
    if ( !this->__pad_C[1] && DynamicVector_field_0x8 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *(unsigned int *)this->__pad_14; /*0x538798*/
    if ( v4 <= 0 /*0x5387a8*/
      || !(*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x5387af*/
    }
  }
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x5387b5*/
  v7 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x5387b8*/
  this->DynamicVector_field_0x10 = (char *)DynamicVector_field_0x10 + 1; /*0x5387be*/
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

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ad7d3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5ad7d6*/
  if ( result < DynamicVector_field_0x8 /*0x5ad7fd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5ad805*/
    v5 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x5ad808*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x5ad80e*/
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

  v2 = *(unsigned int *)this->__pad_0; /*0x624814*/
  if ( *(unsigned int *)this->__pad_0 < *(unsigned int *)&this->DynamicVector_field_0x1[3] ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = (void *)__2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  DynamicVector_field_0x8 = (const void *)this->DynamicVector_field_0x8; /*0x62485a*/
  if ( DynamicVector_field_0x8 ) /*0x62485f*/
    qmemcpy(v5, DynamicVector_field_0x8, 24 * *(unsigned int *)this->__pad_0); /*0x624870*/
  __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x62487d*/
  *(unsigned int *)&this->DynamicVector_field_0x1[3] = v4; /*0x624889*/
  this->DynamicVector_field_0x8 = v7; /*0x62488c*/
  return 1; /*0x62481f*/

}
} // namespace gamemd

// 0x67A520
namespace gamemd {
int DynamicVector::Read(TechnoTypeClass * aP1)
{

  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a52c*/
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x67a539*/
  (*(void (**)(int *, void **, int, unsigned int))(v3 + 16))(aP1, &DynamicVector_field_0x10, 4, 0); /*0x67a53d*/
  result = (int)DynamicVector_field_0x10; /*0x67a540*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a548*/
  {
    (*(void (**)(int *, int, int, unsigned int))(*aP1 + 16))( /*0x67a558*/
      aP1,
      *(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * i,
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
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x67a6f9*/
  (*(void (**)(int *, void **, int, unsigned int))(v3 + 16))(aP1, &DynamicVector_field_0x10, 4, 0); /*0x67a6fd*/
  result = (int)DynamicVector_field_0x10; /*0x67a700*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a708*/
  {
    (*(void (**)(int *, int, int, unsigned int))(*aP1 + 16))( /*0x67a718*/
      aP1,
      *(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)DynamicVector_field_0x10; /*0x67a71b*/
  }
  return result; /*0x67a724*/

}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{

  *(unsigned int *)&this->DynamicVector_field_0x1[3] = 0; /*0x67ac79*/
  this->DynamicVector_field_0x8 = a2; /*0x67ac80*/
  this->__pad_C[0] = 1; /*0x67ac83*/
  this->__pad_C[1] = 0; /*0x67ac87*/
  *(unsigned int *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *(unsigned int *)&this->DynamicVector_field_0x1[3] = a3; /*0x67ac9b*/
    }
    else
    {
      *(unsigned int *)&this->DynamicVector_field_0x1[3] = __2_YAPAXI_Z(4 * a2); /*0x67acac*/
      this->__pad_C[1] = 1; /*0x67acaf*/
    }
  }
  *(unsigned int *)this->__pad_0 = &DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67acb3*/
  *(unsigned int *)this->__pad_14 = 10; /*0x67acb9*/
  this->DynamicVector_field_0x10 = 0; /*0x67acc0*/
  return this->__pad_0; /*0x67acc9*/

}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(VectorClass_flat * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x67ad83*/
  result = (int)this->DynamicVector_field_0x10; /*0x67ad86*/
  if ( result < DynamicVector_field_0x8 /*0x67adad*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x67adb5*/
    v5 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x67adb8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x67adbe*/
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
char DynamicVector::RemoveAt(int a2)
{

  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c36b*/
  this->DynamicVector_field_0x10 = v4; /*0x67c36e*/
  if ( a2 < (int)v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] /*0x67c37b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->DynamicVector_field_0x10 ); /*0x67c384*/
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

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c3fb*/
  this->DynamicVector_field_0x10 = v4; /*0x67c3fe*/
  if ( a2 < (int)v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&this->DynamicVector_field_0x1[3] /*0x67c40b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->DynamicVector_field_0x10 ); /*0x67c414*/
  }
  return 1; /*0x67c419*/

}
} // namespace gamemd

// 0x6C6400
namespace gamemd {
char DynamicVector::Add(DynamicVector * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x6c6403*/
  if ( (int)this->DynamicVector_field_0x10 >= DynamicVector_field_0x8 ) /*0x6c640b*/
  {
    if ( !this->__pad_C[1] && DynamicVector_field_0x8 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(unsigned int *)this->__pad_14; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x6c6435*/
  v7 = *(unsigned int *)&this->DynamicVector_field_0x1[3]; /*0x6c6438*/
  this->DynamicVector_field_0x10 = (char *)DynamicVector_field_0x10 + 1; /*0x6c643e*/
  *(unsigned int *)(v7 + 4 * (unsigned int)DynamicVector_field_0x10) = *aP1; /*0x6c6448*/
  return 1; /*0x6c6431*/

}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{

  *(unsigned int *)&this->DynamicVector_field_0x1[3] = 0; /*0x7342d9*/
  this->DynamicVector_field_0x8 = a2; /*0x7342e0*/
  this->__pad_C[0] = 1; /*0x7342e3*/
  this->__pad_C[1] = 0; /*0x7342e7*/
  *(unsigned int *)this->__pad_0 = &VectorClass<TechnoClass *>::`vftable'; /*0x7342eb*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      *(unsigned int *)&this->DynamicVector_field_0x1[3] = a3; /*0x7342fb*/
    }
    else
    {
      *(unsigned int *)&this->DynamicVector_field_0x1[3] = __2_YAPAXI_Z(4 * a2); /*0x73430c*/
      this->__pad_C[1] = 1; /*0x73430f*/
    }
  }
  *(unsigned int *)this->__pad_0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x734313*/
  *(unsigned int *)this->__pad_14 = 10; /*0x734319*/
  this->DynamicVector_field_0x10 = 0; /*0x734320*/
  return this->__pad_0; /*0x734329*/

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

  result = *(unsigned int *)this->__pad_0; /*0x7af004*/
  if ( *(unsigned int *)this->__pad_0 >= *(unsigned int *)&this->DynamicVector_field_0x1[3] ) /*0x7af00b*/
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
    if ( this->DynamicVector_field_0x8 ) /*0x7af053*/
    {
      qmemcpy(v4, (const void *)this->DynamicVector_field_0x8, 4 * *(unsigned int *)this->__pad_0); /*0x7af068*/
      v3 = v5; /*0x7af071*/
    }
    __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x7af079*/
    *(unsigned int *)&this->DynamicVector_field_0x1[3] = v3; /*0x7af081*/
    this->DynamicVector_field_0x8 = (int)v4; /*0x7af084*/
    LOBYTE(result) = 1; /*0x7af087*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7af00d*/
  }
  return result; /*0x7af00f*/

}
} // namespace gamemd
