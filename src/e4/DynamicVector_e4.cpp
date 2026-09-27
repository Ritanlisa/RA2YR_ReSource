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
  void *v4; // eax
  AbstractClass * v5;
  int v6; // eax

  if ( this == aP1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  this->initEvent(); /*0x5ac43e*/
  v3 = aP1[2]; /*0x5ac441*/
  this->q008 = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    this->Items = (unsigned int *)(0);
    this->IsAllocated = 0; /*0x5ac49d*/
  LABEL_8:
    this->q010 = aP1[4]; /*0x5ac4a1*/
    this->CapacityIncrement = aP1[5]; /*0x5ac4aa*/
    return this; /*0x5ac4ad*/
  }
  v4 = (gamemd::AbstractClass *)(operator new(4 * v3));
  this->Items = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  v5 = this->q008; /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  this->IsAllocated = 1; /*0x5ac469*/
  if ( v5 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(unsigned int *)(this->Items + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < this->q008 ); /*0x5ac481*/
  this->q010 = aP1[4]; /*0x5ac486*/
  this->CapacityIncrement = aP1[5]; /*0x5ac48c*/
  return this; /*0x5ac491*/
}
}
// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(VectorClass_flat * aP1)
{
  AbstractClass * v3;
  int v4; // eax
  void * v6;
  void * v7;

  v3 = (gamemd::AbstractClass *)(this->q008);
  if ( this->q010 >= v3 ) /*0x413a7b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x413a86*/
      return 0; /*0x413a86*/
    v4 = this->CapacityIncrement; /*0x413a88*/
    if ( v4 <= 0 || !this->checkCondition(v3 + v4, 0) ) /*0x413a98*/
      return 0; /*0x413a9f*/
  }
  v6 = (unsigned int)(this->q010);
  v7 = this->Items; /*0x413aa8*/
  this->q010 = v6 + 1; /*0x413aae*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x413ab8*/
  return 1; /*0x413aa1*/
}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2)
{
  void *v4; // eax

  this->Items = (unsigned int)(0);
  this->q008 = aP1; /*0x42f681*/
  this->IsInitialized = 1; /*0x42f684*/
  this->IsAllocated = 0; /*0x42f688*/
  if ( aP1 ) /*0x42f692*/
  {
    if ( aP2 ) /*0x42f69a*/
    {
      this->Items = (unsigned int)(aP2);
    }
    else
    {
      v4 = (unsigned int)(operator new(4 * aP1));
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      this->Items = v4; /*0x42f6c3*/
      this->IsAllocated = 1; /*0x42f6c6*/
    }
  }
  this->CapacityIncrement = (unsigned int *)(10);
  this->q010 = 0; /*0x42f6d7*/
  return this; /*0x42f6e0*/
}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(IUnknown * aP1)
{
  void * v2;
  void * v4;

  v2 = this->q010; /*0x45add0*/
  aP1 = aP1; /*0x45add3*/
  if ( aP1 >= v2 ) /*0x45add9*/
    return 0; /*0x45adfc*/
  v4 = v2 - 1; /*0x45addb*/
  this->q010 = v4; /*0x45adde*/
  if ( aP1 < v4 ) /*0x45ade1*/
  {
    do /*0x45adf4*/
    {
      ++aP1; /*0x45ade7*/
      *(unsigned int *)(this->Items + 4 * aP1 - 4) = *(unsigned int *)(this->Items + 4 * aP1); /*0x45adeb*/
    }
    while ( aP1 < this->q010 ); /*0x45adf4*/
  }
  return 1; /*0x45adf9*/
}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(VectorClass_flat * aP1)
{
  int v3; // ecx
  int v4; // eax
  void * v6;
  void * v7;

  v3 = this->Capacity; /*0x477ec3*/
  if ( this->q010 >= v3 ) /*0x477ecb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x477ed6*/
      return 0; /*0x477ed6*/
    v4 = this->u32_14; /*0x477ed8*/
    if ( v4 <= 0 || !this->Release(v3 + v4, 0) ) /*0x477ee8*/
      return 0; /*0x477eef*/
  }
  v6 = (unsigned int)(this->q010);
  v7 = this->Items; /*0x477ef8*/
  this->q010 = v6 + 1; /*0x477efe*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x477f08*/
  return 1; /*0x477ef1*/
}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{
  AbstractClass * v3;

  v3 = (gamemd::AbstractClass *)(this->q008);
  if ( aP1 < v3 ) /*0x49faee*/
    return *(unsigned int *)(this->Items + 4 * aP1); /*0x49fb26*/
  if ( this->checkCondition(aP1 + 10, 0) ) /*0x49fafa*/
  {
    for ( v3 = v3; v3 < this->q008; *(unsigned int *)(this->Items + 4 * v3 - 4) = 0 ) /*0x49fb08*/
      ++v3; /*0x49fb0d*/
    return *(unsigned int *)(this->Items + 4 * aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/
}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(VectorClass_flat * aP1)
{
  int v3; // ecx
  int v4; // eax
  void * v6;
  void * v7;

  v3 = this->Capacity; /*0x5253b3*/
  if ( this->q010 >= v3 ) /*0x5253bb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x5253c6*/
      return 0; /*0x5253c6*/
    v4 = this->u32_14; /*0x5253c8*/
    if ( v4 <= 0 || !this->Release(v3 + v4, 0) ) /*0x5253d8*/
      return 0; /*0x5253df*/
  }
  v6 = (unsigned int)(this->q010);
  v7 = this->Items; /*0x5253e8*/
  this->q010 = v6 + 1; /*0x5253ee*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x5253f8*/
  return 1; /*0x5253e1*/
}
} // namespace gamemd

// 0x538780
namespace gamemd {
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(unsigned int *)&this->q008; /*0x538783*/
  if ( this->q010 >= v3 ) /*0x53878b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = this->CapacityIncrement; /*0x538798*/
    if ( v4 <= 0 || !(*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*&this->q008))(this, v3 + v4, 0) ) /*0x5387a8*/
      return 0; /*0x5387af*/
  }
  v6 = (unsigned int)(this->q010);
  v7 = this->q004; /*0x5387b8*/
  this->q010 = v6 + 1; /*0x5387be*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x5387c8*/
  return 1; /*0x5387b1*/
}
} // namespace gamemd

// 0x5AD7D0
namespace gamemd {
char DynamicVector::Add_Alt3(VectorClass_flat * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  void * v7;

  v3 = this->Capacity; /*0x5ad7d3*/
  if ( this->Count >= v3 ) /*0x5ad7db*/
  {
    if ( !this->IsAllocated && v3 ) /*0x5ad7e6*/
      return 0; /*0x5ad7e6*/
    v4 = this->CapacityIncrement; /*0x5ad7e8*/
    if ( v4 <= 0 || !this->Resize(v3 + v4, 0) ) /*0x5ad7f8*/
      return 0; /*0x5ad7ff*/
  }
  v6 = (unsigned int)(this->Count);
  v7 = this->Items; /*0x5ad808*/
  this->Count = v6 + 1; /*0x5ad80e*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x5ad818*/
  return 1; /*0x5ad801*/
}
} // namespace gamemd

// 0x624810
namespace gamemd {
char DynamicVector::GrowCapacity()
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = (int)(*this);
  if ( *this < this->q004 ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = operator new(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  v6 = (const void *)*(unsigned int *)&this->q008; /*0x62485a*/
  if ( v6 ) /*0x62485f*/
    qmemcpy(v5, v6, 24 * *this); /*0x624870*/
  RA2_OPDEL((void *)*(unsigned int *)&this->q008); /*0x62487d*/
  this->q004 = v4; /*0x624889*/
  *(unsigned int *)&this->q008 = v7; /*0x62488c*/
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
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a52c*/
  v6 = this->q010; /*0x67a539*/
  (*(void (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a53d*/
  result = v6; /*0x67a540*/
  for ( i = 0; i < v6; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->q004 + 4 * i, 4, 0); /*0x67a558*/
    result = v6; /*0x67a55b*/
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
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a6ec*/
  v6 = this->q010; /*0x67a6f9*/
  (*(void (__stdcall **)(int *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a6fd*/
  result = v6; /*0x67a700*/
  for ( i = 0; i < v6; ++i ) /*0x67a708*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->q004 + 4 * i, 4, 0); /*0x67a718*/
    result = v6; /*0x67a71b*/
  }
  return result; /*0x67a724*/
}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{
  this->Items = 0; /*0x67ac79*/
  this->Capacity = a2; /*0x67ac80*/
  this->IsInitialized = 1; /*0x67ac83*/
  this->IsAllocated = 0; /*0x67ac87*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      this->Items = a3; /*0x67ac9b*/
    }
    else
    {
      this->Items = (unsigned int)(operator new(4 * a2));
      this->IsAllocated = 1; /*0x67acaf*/
    }
  }
  this->u32_14 = (unsigned int *)(10);
  this->q010 = 0; /*0x67acc0*/
  return this; /*0x67acc9*/
}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(VectorClass_flat * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  void * v7;

  v3 = this->Capacity; /*0x67ad83*/
  if ( this->Count >= v3 ) /*0x67ad8b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x67ad96*/
      return 0; /*0x67ad96*/
    v4 = this->CapacityIncrement; /*0x67ad98*/
    if ( v4 <= 0 || !this->Resize(v3 + v4, 0) ) /*0x67ada8*/
      return 0; /*0x67adaf*/
  }
  v6 = (unsigned int)(this->Count);
  v7 = this->Items; /*0x67adb8*/
  this->Count = v6 + 1; /*0x67adbe*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x67adc8*/
  return 1; /*0x67adb1*/
}
} // namespace gamemd

// 0x67C360
namespace gamemd {
char DynamicVector::RemoveAt(int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->q010; /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= v2 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = v2 - 1; /*0x67c36b*/
  this->q010 = v4; /*0x67c36e*/
  if ( a2 < v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(unsigned int *)(this->q004 + 4 * v3 - 4) = *(unsigned int *)(this->q004 + 4 * v3); /*0x67c37b*/
    }
    while ( v3 < this->q010 ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}
} // namespace gamemd

// 0x67C3F0
namespace gamemd {
char DynamicVector::RemoveAt2(int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->q010; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= v2 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = v2 - 1; /*0x67c3fb*/
  this->q010 = v4; /*0x67c3fe*/
  if ( a2 < v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(unsigned int *)(this->q004 + 4 * v3 - 4) = *(unsigned int *)(this->q004 + 4 * v3); /*0x67c40b*/
    }
    while ( v3 < this->q010 ); /*0x67c414*/
  }
  return 1; /*0x67c419*/
}
} // namespace gamemd

// 0x6C6400
namespace gamemd {
char DynamicVector::Add(DynamicVector * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(unsigned int *)&this->q008; /*0x6c6403*/
  if ( this->q010 >= v3 ) /*0x6c640b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = this->CapacityIncrement; /*0x6c6418*/
    if ( v4 <= 0 || !(*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*&this->q008))(this, v3 + v4, 0) ) /*0x6c6428*/
      return 0; /*0x6c642f*/
  }
  v6 = (unsigned int)(this->q010);
  v7 = this->q004; /*0x6c6438*/
  this->q010 = v6 + 1; /*0x6c643e*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x6c6448*/
  return 1; /*0x6c6431*/
}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{
  this->Items = 0; /*0x7342d9*/
  this->Capacity = a2; /*0x7342e0*/
  this->IsInitialized = 1; /*0x7342e3*/
  this->IsAllocated = 0; /*0x7342e7*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      this->Items = a3; /*0x7342fb*/
    }
    else
    {
      this->Items = (unsigned int)(operator new(4 * a2));
      this->IsAllocated = 1; /*0x73430f*/
    }
  }
  this->u32_14 = (unsigned int *)(10);
  this->q010 = 0; /*0x734320*/
  return this; /*0x734329*/
}
} // namespace gamemd

// 0x7AF000
namespace gamemd {
char DynamicVector::EnsureCapacity()
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = (int)(*this);
  if ( *this < this->q004 ) /*0x7af00b*/
    return 0; /*0x7af00d*/
  v4 = 2 * v2; /*0x7af014*/
  v6 = 2 * v2; /*0x7af01b*/
  if ( 2 * v2 < 10 ) /*0x7af01f*/
  {
    v6 = 10; /*0x7af021*/
    v4 = 10; /*0x7af029*/
  }
  v5 = operator new(4 * v4); /*0x7af03c*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7af04a*/
  if ( *(unsigned int *)&this->q008 ) /*0x7af053*/
  {
    qmemcpy(v5, (const void *)*(unsigned int *)&this->q008, 4 * *this); /*0x7af068*/
    v4 = v6; /*0x7af071*/
  }
  RA2_OPDEL((void *)*(unsigned int *)&this->q008); /*0x7af079*/
  this->q004 = v4; /*0x7af081*/
  *(unsigned int *)&this->q008 = (int)v5; /*0x7af084*/
  return 1; /*0x7af00f*/
}
} // namespace gamemd
