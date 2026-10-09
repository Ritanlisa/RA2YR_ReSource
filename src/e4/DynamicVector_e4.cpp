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
namespace gamemd {
unsigned int * DynamicVector::Copy(VectorClass_flat * aP1, void *a2_1)
{
  int v3; // eax
  int v4; // eax
  int q008; // ecx
  int v6; // eax

  if ( aP1 == (DynamicVector *)a2_1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (__thiscall **)(DynamicVector *))(*(_DWORD *)aP1->q000 + 12))(aP1); /*0x5ac43e*/
  v3 = a2_1[2]; /*0x5ac441*/
  aP1->q008 = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *(_DWORD *)&aP1->DynamicVector_field_0x1[3] = 0; /*0x5ac496*/
    aP1->q00C[1] = 0; /*0x5ac49d*/
  LABEL_8:
    aP1->q010 = (void *)a2_1[4]; /*0x5ac4a1*/
    *(_DWORD *)aP1->q014 = a2_1[5]; /*0x5ac4aa*/
    return aP1->q000; /*0x5ac4ad*/
  }
  v4 = RA2_OPNEW(4 * v3); /*0x5ac453*/
  *(_DWORD *)&aP1->DynamicVector_field_0x1[3] = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  q008 = aP1->q008; /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  aP1->q00C[1] = 1; /*0x5ac469*/
  if ( q008 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(_DWORD *)(*(_DWORD *)&aP1->DynamicVector_field_0x1[3] + 4 * v6) = *(_DWORD *)(a2_1[1] + 4 * v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < aP1->q008 ); /*0x5ac481*/
  aP1->q010 = (void *)a2_1[4]; /*0x5ac486*/
  *(_DWORD *)aP1->q014 = a2_1[5]; /*0x5ac48c*/
  return aP1->q000; /*0x5ac491*/
}
}
// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(unsigned int *aP1)
{
  int q008; // ecx
  int result; // eax
  int v5; // edx

  q008 = this->q008; /*0x413a73*/
  result = (int)this->q010; /*0x413a76*/
  if ( result < q008 /*0x413a9d*/
    || (this->q00C[1] || !q008)
    && (result = *(_DWORD *)this->q014, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
                   this,
                   q008 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->q010; /*0x413aa5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x413aa8*/
    this->q010 = (void *)(result + 1); /*0x413aae*/
    *(_DWORD *)(v5 + 4 * result) = *aP1; /*0x413ab8*/
    IDA_LOBYTE(result) = 1; /*0x413abb*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x413a9f*/
  }
  return result; /*0x413aa1*/
}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2, void *a3_1)
{
  int v4; // eax

  *(_DWORD *)&aP1->DynamicVector_field_0x1[3] = 0; /*0x42f67a*/
  aP1->q008 = aP2; /*0x42f681*/
  aP1->q00C[0] = 1; /*0x42f684*/
  aP1->q00C[1] = 0; /*0x42f688*/
  *(_DWORD *)aP1->q000 = &(void*)(void*)&VectorClass_Cell_vftable; /*0x42f68c*/
  if ( aP2 ) /*0x42f692*/
  {
    if ( a3_1 ) /*0x42f69a*/
    {
      *(_DWORD *)&aP1->DynamicVector_field_0x1[3] = a3_1; /*0x42f69d*/
    }
    else
    {
      v4 = RA2_OPNEW(4 * aP2); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *(_DWORD *)&aP1->DynamicVector_field_0x1[3] = v4; /*0x42f6c3*/
      aP1->q00C[1] = 1; /*0x42f6c6*/
    }
  }
  *(_DWORD *)aP1->q000 = &(void*)(void*)&DynamicVectorClass_Cell_vftable; /*0x42f6ca*/
  *(_DWORD *)aP1->q014 = 10; /*0x42f6d0*/
  aP1->q010 = 0; /*0x42f6d7*/
  return aP1->q000; /*0x42f6e0*/
}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(int aP1)
{
  char *q010; // edx
  int result; // eax
  char *v4; // edx

  q010 = (char *)this->q010; /*0x45add0*/
  result = aP1; /*0x45add3*/
  if ( aP1 >= (int)q010 ) /*0x45add9*/
  {
    IDA_LOBYTE(result) = 0; /*0x45adfc*/
  }
  else
  {
    v4 = q010 - 1; /*0x45addb*/
    this->q010 = v4; /*0x45adde*/
    if ( aP1 < (int)v4 ) /*0x45ade1*/
    {
      do /*0x45adf4*/
      {
        ++result; /*0x45ade7*/
        *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x45adeb*/
                                                                                               + 4 * result);
      }
      while ( result < (int)this->q010 ); /*0x45adf4*/
    }
    IDA_LOBYTE(result) = 1; /*0x45adf7*/
  }
  return result; /*0x45adf9*/
}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(unsigned int *aP1)
{
  int q008; // ecx
  int result; // eax
  int v5; // edx

  q008 = this->q008; /*0x477ec3*/
  result = (int)this->q010; /*0x477ec6*/
  if ( result < q008 /*0x477eed*/
    || (this->q00C[1] || !q008)
    && (result = *(_DWORD *)this->q014, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
                   this,
                   q008 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->q010; /*0x477ef5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x477ef8*/
    this->q010 = (void *)(result + 1); /*0x477efe*/
    *(_DWORD *)(v5 + 4 * result) = *aP1; /*0x477f08*/
    IDA_LOBYTE(result) = 1; /*0x477f0b*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x477eef*/
  }
  return result; /*0x477ef1*/
}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(int aP1)
{
  int q008; // edi
  int i; // eax

  q008 = this->q008; /*0x49fae9*/
  if ( aP1 < q008 ) /*0x49faee*/
    return *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * aP1); /*0x49fb26*/
  if ( (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))( /*0x49fafa*/
         this,
         aP1 + 10,
         0) )
  {
    for ( i = q008; /*0x49fb08*/
          i < this->q008;
          *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * i - 4) = 0 )
    {
      ++i; /*0x49fb0d*/
    }
    return *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/
}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(unsigned int *aP1)
{
  int q008; // ecx
  int result; // eax
  int v5; // edx

  q008 = this->q008; /*0x5253b3*/
  result = (int)this->q010; /*0x5253b6*/
  if ( result < q008 /*0x5253dd*/
    || (this->q00C[1] || !q008)
    && (result = *(_DWORD *)this->q014, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
                   this,
                   q008 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->q010; /*0x5253e5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5253e8*/
    this->q010 = (void *)(result + 1); /*0x5253ee*/
    *(_DWORD *)(v5 + 4 * result) = *aP1; /*0x5253f8*/
    IDA_LOBYTE(result) = 1; /*0x5253fb*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x5253df*/
  }
  return result; /*0x5253e1*/
}
} // namespace gamemd

// 0x538780
namespace gamemd {
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{
  int q008; // ecx
  int v4; // eax
  void *q010; // eax
  int v7; // edx

  q008 = this->q008; /*0x538783*/
  if ( (int)this->q010 >= q008 ) /*0x53878b*/
  {
    if ( !this->q00C[1] && q008 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *(_DWORD *)this->q014; /*0x538798*/
    if ( v4 <= 0 /*0x5387a8*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
            this,
            q008 + v4,
            0) )
    {
      return 0; /*0x5387af*/
    }
  }
  q010 = this->q010; /*0x5387b5*/
  v7 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5387b8*/
  this->q010 = (char *)q010 + 1; /*0x5387be*/
  *(_DWORD *)(v7 + 4 * (_DWORD)q010) = *aP1; /*0x5387c8*/
  return 1; /*0x5387b1*/
}
} // namespace gamemd

// 0x5AD7D0
namespace gamemd {
char DynamicVector::Add_Alt3(VectorClass_flat * aP1)
{
  int q008; // ecx
  int result; // eax
  int v5; // edx

  q008 = this->q008; /*0x5ad7d3*/
  result = (int)this->q010; /*0x5ad7d6*/
  if ( result < q008 /*0x5ad7fd*/
    || (this->q00C[1] || !q008)
    && (result = *(_DWORD *)this->q014, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
                   this,
                   q008 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->q010; /*0x5ad805*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x5ad808*/
    this->q010 = (void *)(result + 1); /*0x5ad80e*/
    *(_DWORD *)(v5 + 4 * result) = *aP1; /*0x5ad818*/
    IDA_LOBYTE(result) = 1; /*0x5ad81b*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x5ad7ff*/
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
  const void *q008; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->q000; /*0x624814*/
  if ( *(_DWORD *)this->q000 < *(_DWORD *)&this->DynamicVector_field_0x1[3] ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = (void *)RA2_OPNEW(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  q008 = (const void *)this->q008; /*0x62485a*/
  if ( q008 ) /*0x62485f*/
    qmemcpy(v5, q008, 24 * *(_DWORD *)this->q000); /*0x624870*/
  RA2_OPDEL((void *)this->q008); /*0x62487d*/
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x624889*/
  this->q008 = v7; /*0x62488c*/
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
  void *q010; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2_1; /*0x67a52c*/
  q010 = aP1->q010; /*0x67a539*/
  (*(void (__stdcall **)(int *, void **, int, _DWORD))(v3 + 16))(a2_1, &q010, 4, 0); /*0x67a53d*/
  result = (int)q010; /*0x67a540*/
  for ( i = 0; i < (int)q010; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2_1 + 16))( /*0x67a558*/
      a2_1,
      *(_DWORD *)&aP1->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)q010; /*0x67a55b*/
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
  void *q010; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a6ec*/
  q010 = this->q010; /*0x67a6f9*/
  aP1->IsClean(&q010, 4, 0); /*0x67a6fd*/
  result = (int)q010; /*0x67a700*/
  for ( i = 0; i < (int)q010; ++i ) /*0x67a708*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*aP1 + 16))( /*0x67a718*/
      aP1,
      *(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)q010; /*0x67a71b*/
  }
  return result; /*0x67a724*/
}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x67ac79*/
  this->q008 = a2; /*0x67ac80*/
  this->q00C[0] = 1; /*0x67ac83*/
  this->q00C[1] = 0; /*0x67ac87*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = a3; /*0x67ac9b*/
    }
    else
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = RA2_OPNEW(4 * a2); /*0x67acac*/
      this->q00C[1] = 1; /*0x67acaf*/
    }
  }
  *(_DWORD *)this->q000 = &(void*)(void*)&DynamicVectorClass_VoxelAnimTypeClass_const___vftable; /*0x67acb3*/
  *(_DWORD *)this->q014 = 10; /*0x67acb9*/
  this->q010 = 0; /*0x67acc0*/
  return this->q000; /*0x67acc9*/
}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(unsigned int *aP1)
{
  int q008; // ecx
  int result; // eax
  int v5; // edx

  q008 = this->q008; /*0x67ad83*/
  result = (int)this->q010; /*0x67ad86*/
  if ( result < q008 /*0x67adad*/
    || (this->q00C[1] || !q008)
    && (result = *(_DWORD *)this->q014, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
                   this,
                   q008 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->q010; /*0x67adb5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x67adb8*/
    this->q010 = (void *)(result + 1); /*0x67adbe*/
    *(_DWORD *)(v5 + 4 * result) = *aP1; /*0x67adc8*/
    IDA_LOBYTE(result) = 1; /*0x67adcb*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x67adaf*/
  }
  return result; /*0x67adb1*/
}
} // namespace gamemd

// 0x67C360
namespace gamemd {
char DynamicVector::RemoveAt(int a2, void *a2_2)
{
  char *q010; // edx
  int v3; // eax
  char *v4; // edx

  q010 = (char *)a2_2->q010; /*0x67c360*/
  v3 = a2_2; /*0x67c363*/
  if ( a2_2 >= (int)q010 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = q010 - 1; /*0x67c36b*/
  a2_2->q010 = v4; /*0x67c36e*/
  if ( a2_2 < (int)v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(_DWORD *)(*(_DWORD *)&a2_2->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&a2_2->DynamicVector_field_0x1[3] /*0x67c37b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)a2_2->q010 ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}
} // namespace gamemd

// 0x67C3F0
namespace gamemd {
char DynamicVector::RemoveAt2(int a2)
{
  char *q010; // edx
  int v3; // eax
  char *v4; // edx

  q010 = (char *)this->q010; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= (int)q010 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = q010 - 1; /*0x67c3fb*/
  this->q010 = v4; /*0x67c3fe*/
  if ( a2 < (int)v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x67c40b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->q010 ); /*0x67c414*/
  }
  return 1; /*0x67c419*/
}
} // namespace gamemd

// 0x6C6400
namespace gamemd {
char DynamicVector::Add(DynamicVector * aP1, void *a2_1, void *a3_1)
{
  int q008; // ecx
  int v4; // eax
  void *q010; // eax
  int v7; // edx

  q008 = this->q008; /*0x6c6403*/
  if ( (int)this->q010 >= q008 ) /*0x6c640b*/
  {
    if ( !this->q00C[1] && q008 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(_DWORD *)this->q014; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
            this,
            q008 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  q010 = this->q010; /*0x6c6435*/
  v7 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x6c6438*/
  this->q010 = (char *)q010 + 1; /*0x6c643e*/
  *(_DWORD *)(v7 + 4 * (_DWORD)q010) = *a2; /*0x6c6448*/
  return 1; /*0x6c6431*/
}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x7342d9*/
  this->q008 = a2; /*0x7342e0*/
  this->q00C[0] = 1; /*0x7342e3*/
  this->q00C[1] = 0; /*0x7342e7*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_TechnoClass___vftable; /*0x7342eb*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = a3; /*0x7342fb*/
    }
    else
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = RA2_OPNEW(4 * a2); /*0x73430c*/
      this->q00C[1] = 1; /*0x73430f*/
    }
  }
  *(_DWORD *)this->q000 = &(void*)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x734313*/
  *(_DWORD *)this->q014 = 10; /*0x734319*/
  this->q010 = 0; /*0x734320*/
  return this->q000; /*0x734329*/
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

  result = *(_DWORD *)this->q000; /*0x7af004*/
  if ( *(_DWORD *)this->q000 >= *(_DWORD *)&this->DynamicVector_field_0x1[3] ) /*0x7af00b*/
  {
    v3 = 2 * result; /*0x7af014*/
    v5 = 2 * result; /*0x7af01b*/
    if ( 2 * result < 10 ) /*0x7af01f*/
    {
      v5 = 10; /*0x7af021*/
      v3 = 10; /*0x7af029*/
    }
    v4 = (void *)RA2_OPNEW(4 * v3); /*0x7af03c*/
    memset(v4, 0, 4 * ((unsigned int)(4 * v3) >> 2)); /*0x7af04a*/
    if ( this->q008 ) /*0x7af053*/
    {
      qmemcpy(v4, (const void *)this->q008, 4 * *(_DWORD *)this->q000); /*0x7af068*/
      v3 = v5; /*0x7af071*/
    }
    RA2_OPDEL((void *)this->q008); /*0x7af079*/
    *(_DWORD *)&this->DynamicVector_field_0x1[3] = v3; /*0x7af081*/
    this->q008 = (int)v4; /*0x7af084*/
    IDA_LOBYTE(result) = 1; /*0x7af087*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x7af00d*/
  }
  return result; /*0x7af00f*/
}
} // namespace gamemd
