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
  int v5; // ecx
  int v6; // eax

  if ( this == (unsigned int *)aP1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (**)(unsigned int *))(*(unsigned int *)this + 48))(this); /*0x5ac43e*/
  v3 = aP1->Capacity; /*0x5ac441*/
  *((unsigned int *)this + 2) = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *((unsigned int *)this + 1) = 0; /*0x5ac496*/
    *((unsigned char *)this + 13) = 0; /*0x5ac49d*/
LABEL_8:
    *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x5ac4a1*/
    *((unsigned int *)this + 5) = aP1[1].Items; /*0x5ac4aa*/
    return this; /*0x5ac4ad*/
  }
  v4 = RA2_OPNEW(4 * v3); /*0x5ac453*/
  *((unsigned int *)this + 1) = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  v5 = *((unsigned int *)this + 2); /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  *((unsigned char *)this + 13) = 1; /*0x5ac469*/
  if ( v5 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x5ac481*/
  *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x5ac486*/
  *((unsigned int *)this + 5) = aP1[1].Items; /*0x5ac48c*/
  return this; /*0x5ac491*/

}
}
// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(VectorClass_flat * aP1)
{

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x413a73*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x413a7b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x413a86*/
      return 0; /*0x413a86*/
    v4 = *((unsigned int *)this + 5); /*0x413a88*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x413a98*/
      return 0; /*0x413a9f*/
  }
  v6 = *((unsigned int *)this + 4); /*0x413aa5*/
  v7 = *((unsigned int *)this + 1); /*0x413aa8*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x413aae*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->vtable0; /*0x413ab8*/
  return 1; /*0x413aa1*/

}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2)
{

  int v4; // eax

  *((unsigned int *)this + 1) = 0; /*0x42f67a*/
  *((unsigned int *)this + 2) = aP1; /*0x42f681*/
  *((unsigned char *)this + 12) = 1; /*0x42f684*/
  *((unsigned char *)this + 13) = 0; /*0x42f688*/
  *this = &vt_VectorClass_Cell; /*0x42f68c*/
  if ( aP1 ) /*0x42f692*/
  {
    if ( aP2 ) /*0x42f69a*/
    {
      *((unsigned int *)this + 1) = aP2; /*0x42f69d*/
    }
    else
    {
      v4 = RA2_OPNEW(4 * (unsigned int)aP1); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *((unsigned int *)this + 1) = v4; /*0x42f6c3*/
      *((unsigned char *)this + 13) = 1; /*0x42f6c6*/
    }
  }
  *this = &vt_DynamicVectorClass_Cell; /*0x42f6ca*/
  *((unsigned int *)this + 5) = 10; /*0x42f6d0*/
  *((unsigned int *)this + 4) = 0; /*0x42f6d7*/
  return this; /*0x42f6e0*/

}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(IUnknown * aP1)
{

  int v2; // edx
  IUnknown *v3; // eax
  int v4; // edx

  v2 = *((unsigned int *)this + 4); /*0x45add0*/
  v3 = aP1; /*0x45add3*/
  if ( (int)aP1 >= v2 ) /*0x45add9*/
    return 0; /*0x45adfc*/
  v4 = v2 - 1; /*0x45addb*/
  *((unsigned int *)this + 4) = v4; /*0x45adde*/
  if ( (int)aP1 < v4 ) /*0x45ade1*/
  {
    do /*0x45adf4*/
    {
      v3 = (IUnknown *)((char *)v3 + 1); /*0x45ade7*/
      *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)v3); /*0x45adeb*/
    }
    while ( (int)v3 < *((unsigned int *)this + 4) ); /*0x45adf4*/
  }
  return 1; /*0x45adf9*/

}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(VectorClass_flat * aP1)
{

  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)*((unsigned int *)this + 2); /*0x477ec3*/
  if ( *((unsigned int *)this + 4) >= (int)v3 ) /*0x477ecb*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x477ed6*/
      return 0; /*0x477ed6*/
    v4 = *((unsigned int *)this + 5); /*0x477ed8*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, char *, unsigned int))(*(unsigned int *)this + 32))(this, (char *)v3 + v4, 0) ) /*0x477ee8*/
      return 0; /*0x477eef*/
  }
  v6 = *((unsigned int *)this + 4); /*0x477ef5*/
  v7 = (VectorClass *)*((unsigned int *)this + 1); /*0x477ef8*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x477efe*/
  *(unsigned int *)&v7->vtable0[4 * v6] = *(unsigned int *)aP1->vtable0; /*0x477f08*/
  return 1; /*0x477ef1*/

}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{

  int v3; // edi
  int i; // eax

  v3 = *((unsigned int *)this + 2); /*0x49fae9*/
  if ( (int)aP1 < v3 ) /*0x49faee*/
    return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)aP1); /*0x49fb26*/
  if ( (*(uint8_t (**)(unsigned int *, char *, unsigned int))(*(unsigned int *)this + 32))(this, (char *)&aP1->field_8 + 2, 0) ) /*0x49fafa*/
  {
    for ( i = v3; i < *((unsigned int *)this + 2); *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) = 0 ) /*0x49fb08*/
      ++i; /*0x49fb0d*/
    return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/

}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(VectorClass_flat * aP1)
{

  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)*((unsigned int *)this + 2); /*0x5253b3*/
  if ( *((unsigned int *)this + 4) >= (int)v3 ) /*0x5253bb*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x5253c6*/
      return 0; /*0x5253c6*/
    v4 = *((unsigned int *)this + 5); /*0x5253c8*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, char *, unsigned int))(*(unsigned int *)this + 32))(this, (char *)v3 + v4, 0) ) /*0x5253d8*/
      return 0; /*0x5253df*/
  }
  v6 = *((unsigned int *)this + 4); /*0x5253e5*/
  v7 = (VectorClass *)*((unsigned int *)this + 1); /*0x5253e8*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x5253ee*/
  *(unsigned int *)&v7->vtable0[4 * v6] = *(unsigned int *)aP1->vtable0; /*0x5253f8*/
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

  v3 = *((unsigned int *)this + 2); /*0x538783*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x53878b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *((unsigned int *)this + 5); /*0x538798*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x5387a8*/
      return 0; /*0x5387af*/
  }
  v6 = *((unsigned int *)this + 4); /*0x5387b5*/
  v7 = *((unsigned int *)this + 1); /*0x5387b8*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x5387be*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->__pad_0; /*0x5387c8*/
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
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x5ad7d3*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x5ad7db*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x5ad7e6*/
      return 0; /*0x5ad7e6*/
    v4 = *((unsigned int *)this + 5); /*0x5ad7e8*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x5ad7f8*/
      return 0; /*0x5ad7ff*/
  }
  v6 = *((unsigned int *)this + 4); /*0x5ad805*/
  v7 = *((unsigned int *)this + 1); /*0x5ad808*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x5ad80e*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->vtable0; /*0x5ad818*/
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

  v2 = *this; /*0x624814*/
  if ( *this < *((char *)this + 1) ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = RA2_OPNEW(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  v6 = (const void *)*((char *)this + 2); /*0x62485a*/
  if ( v6 ) /*0x62485f*/
    qmemcpy(v5, v6, 24 * *this); /*0x624870*/
  RA2_OPDEL((void *)*((char *)this + 2)); /*0x62487d*/
  *((char *)this + 1) = v4; /*0x624889*/
  *((char *)this + 2) = v7; /*0x62488c*/
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

  v3 = *(unsigned int *)aP1->vtable0; /*0x67a52c*/
  v6 = *((unsigned int *)this + 4); /*0x67a539*/
  (*(void (**)(TechnoTypeClass *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a53d*/
  result = v6; /*0x67a540*/
  for ( i = 0; i < v6; ++i ) /*0x67a548*/
  {
    (*(void (**)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))( /*0x67a558*/
      aP1,
      *((unsigned int *)this + 1) + 4 * i,
      4,
      0);
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

  v3 = *(unsigned int *)aP1->vtable0; /*0x67a6ec*/
  v6 = *((unsigned int *)this + 4); /*0x67a6f9*/
  (*(void (**)(TechnoTypeClass *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a6fd*/
  result = v6; /*0x67a700*/
  for ( i = 0; i < v6; ++i ) /*0x67a708*/
  {
    (*(void (**)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))( /*0x67a718*/
      aP1,
      *((unsigned int *)this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a71b*/
  }
  return result; /*0x67a724*/

}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x67ac79*/
  *((unsigned int *)this + 2) = a2; /*0x67ac80*/
  *((unsigned char *)this + 12) = 1; /*0x67ac83*/
  *((unsigned char *)this + 13) = 0; /*0x67ac87*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *((unsigned int *)this + 1) = a3; /*0x67ac9b*/
    }
    else
    {
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x67acac*/
      *((unsigned char *)this + 13) = 1; /*0x67acaf*/
    }
  }
  *this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const; /*0x67acb3*/
  *((unsigned int *)this + 5) = 10; /*0x67acb9*/
  *((unsigned int *)this + 4) = 0; /*0x67acc0*/
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
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x67ad83*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x67ad8b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x67ad96*/
      return 0; /*0x67ad96*/
    v4 = *((unsigned int *)this + 5); /*0x67ad98*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x67ada8*/
      return 0; /*0x67adaf*/
  }
  v6 = *((unsigned int *)this + 4); /*0x67adb5*/
  v7 = *((unsigned int *)this + 1); /*0x67adb8*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x67adbe*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->vtable0; /*0x67adc8*/
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

  v2 = *((unsigned int *)this + 4); /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= v2 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = v2 - 1; /*0x67c36b*/
  *((unsigned int *)this + 4) = v4; /*0x67c36e*/
  if ( a2 < v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v3); /*0x67c37b*/
    }
    while ( v3 < *((unsigned int *)this + 4) ); /*0x67c384*/
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

  v2 = *((unsigned int *)this + 4); /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= v2 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = v2 - 1; /*0x67c3fb*/
  *((unsigned int *)this + 4) = v4; /*0x67c3fe*/
  if ( a2 < v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v3); /*0x67c40b*/
    }
    while ( v3 < *((unsigned int *)this + 4) ); /*0x67c414*/
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

  v3 = *((unsigned int *)this + 2); /*0x6c6403*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x6c640b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *((unsigned int *)this + 5); /*0x6c6418*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x6c6428*/
      return 0; /*0x6c642f*/
  }
  v6 = *((unsigned int *)this + 4); /*0x6c6435*/
  v7 = *((unsigned int *)this + 1); /*0x6c6438*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x6c643e*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->__pad_0; /*0x6c6448*/
  return 1; /*0x6c6431*/

}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x7342d9*/
  *((unsigned int *)this + 2) = a2; /*0x7342e0*/
  *((unsigned char *)this + 12) = 1; /*0x7342e3*/
  *((unsigned char *)this + 13) = 0; /*0x7342e7*/
  *this = &vt_VectorClass_TechnoClass; /*0x7342eb*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      *((unsigned int *)this + 1) = a3; /*0x7342fb*/
    }
    else
    {
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x73430c*/
      *((unsigned char *)this + 13) = 1; /*0x73430f*/
    }
  }
  *this = &vt_DynamicVectorClass_TechnoClass; /*0x734313*/
  *((unsigned int *)this + 5) = 10; /*0x734319*/
  *((unsigned int *)this + 4) = 0; /*0x734320*/
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

  v2 = *this; /*0x7af004*/
  if ( *this < *((char *)this + 1) ) /*0x7af00b*/
    return 0; /*0x7af00d*/
  v4 = 2 * v2; /*0x7af014*/
  v6 = 2 * v2; /*0x7af01b*/
  if ( 2 * v2 < 10 ) /*0x7af01f*/
  {
    v6 = 10; /*0x7af021*/
    v4 = 10; /*0x7af029*/
  }
  v5 = RA2_OPNEW(4 * v4); /*0x7af03c*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7af04a*/
  if ( *((char *)this + 2) ) /*0x7af053*/
  {
    qmemcpy(v5, (const void *)*((char *)this + 2), 4 * *this); /*0x7af068*/
    v4 = v6; /*0x7af071*/
  }
  RA2_OPDEL((void *)*((char *)this + 2)); /*0x7af079*/
  *((char *)this + 1) = v4; /*0x7af081*/
  *((char *)this + 2) = (int)v5; /*0x7af084*/
  return 1; /*0x7af00f*/

}
} // namespace gamemd
