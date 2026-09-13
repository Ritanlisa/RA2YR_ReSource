// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"

// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::AddItem(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x413a73*/
  if ( *(this + 4) >= v3 ) /*0x413a7b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x413a86*/
      return 0; /*0x413a86*/
    v4 = *(this + 5); /*0x413a88*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x413a98*/
      return 0; /*0x413a9f*/
  }
  v6 = *(this + 4); /*0x413aa5*/
  v7 = *(this + 1); /*0x413aa8*/
  *(this + 4) = v6 + 1; /*0x413aae*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x413ab8*/
  return 1; /*0x413aa1*/
}
}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall DynamicVector::Constructor_Cell(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  int v4; // eax

  *(this + 1) = 0; /*0x42f67a*/
  *(this + 2) = aP1; /*0x42f681*/
  *((_BYTE *)this + 12) = 1; /*0x42f684*/
  *((_BYTE *)this + 13) = 0; /*0x42f688*/
  *this = &vt_VectorClass_Cell; /*0x42f68c*/
  if ( aP1 ) /*0x42f692*/
  {
    if ( aP2 ) /*0x42f69a*/
    {
      *(this + 1) = aP2; /*0x42f69d*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x42f6ae*/
      if ( !v4 ) /*0x42f6b8*/
        v4 = 0; /*0x42f6c1*/
      *(this + 1) = v4; /*0x42f6c3*/
      *((_BYTE *)this + 13) = 1; /*0x42f6c6*/
    }
  }
  *this = &vt_DynamicVectorClass_Cell; /*0x42f6ca*/
  *(this + 5) = 10; /*0x42f6d0*/
  *(this + 4) = 0; /*0x42f6d7*/
  return this; /*0x42f6e0*/
}
}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::RemoveItem(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  IUnknown *v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x45add0*/
  v3 = aP1; /*0x45add3*/
  if ( (int)aP1 >= v2 ) /*0x45add9*/
    return 0; /*0x45adfc*/
  v4 = v2 - 1; /*0x45addb*/
  *(this + 4) = v4; /*0x45adde*/
  if ( (int)aP1 < v4 ) /*0x45ade1*/
  {
    do /*0x45adf4*/
    {
      v3 = (IUnknown *)((char *)v3 + 1); /*0x45ade7*/
      *(_DWORD *)(*(this + 1) + 4 * (_DWORD)v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * (_DWORD)v3); /*0x45adeb*/
    }
    while ( (int)v3 < *(this + 4) ); /*0x45adf4*/
  }
  return 1; /*0x45adf9*/
}
}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::Add_Alt(_DWORD *this, VectorClass *aP1)
{
  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)*(this + 2); /*0x477ec3*/
  if ( *(this + 4) >= (int)v3 ) /*0x477ecb*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x477ed6*/
      return 0; /*0x477ed6*/
    v4 = *(this + 5); /*0x477ed8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)v3 + v4, 0) ) /*0x477ee8*/
      return 0; /*0x477eef*/
  }
  v6 = *(this + 4); /*0x477ef5*/
  v7 = (VectorClass *)*(this + 1); /*0x477ef8*/
  *(this + 4) = v6 + 1; /*0x477efe*/
  *(_DWORD *)&v7->vtable0[4 * v6] = *(_DWORD *)aP1->vtable0; /*0x477f08*/
  return 1; /*0x477ef1*/
}
}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DynamicVector::GetOrGrow(_DWORD *this, DynamicVector *aP1)
{
  int v3; // edi
  int i; // eax

  v3 = *(this + 2); /*0x49fae9*/
  if ( (int)aP1 < v3 ) /*0x49faee*/
    return *(_DWORD *)(*(this + 1) + 4 * (_DWORD)aP1); /*0x49fb26*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)&aP1->field_8 + 2, 0) ) /*0x49fafa*/
  {
    for ( i = v3; i < *(this + 2); *(_DWORD *)(*(this + 1) + 4 * i - 4) = 0 ) /*0x49fb08*/
      ++i; /*0x49fb0d*/
    return *(_DWORD *)(*(this + 1) + 4 * (_DWORD)aP1); /*0x49fb1b*/
  }
  return 0; /*0x49fb20*/
}
}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::Add_Alt4(_DWORD *this, VectorClass *aP1)
{
  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)*(this + 2); /*0x5253b3*/
  if ( *(this + 4) >= (int)v3 ) /*0x5253bb*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x5253c6*/
      return 0; /*0x5253c6*/
    v4 = *(this + 5); /*0x5253c8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)v3 + v4, 0) ) /*0x5253d8*/
      return 0; /*0x5253df*/
  }
  v6 = *(this + 4); /*0x5253e5*/
  v7 = (VectorClass *)*(this + 1); /*0x5253e8*/
  *(this + 4) = v6 + 1; /*0x5253ee*/
  *(_DWORD *)&v7->vtable0[4 * v6] = *(_DWORD *)aP1->vtable0; /*0x5253f8*/
  return 1; /*0x5253e1*/
}
}
} // namespace gamemd

// 0x538780
namespace gamemd {
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::Add_Alt2(_DWORD *this, DynamicVector *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x538783*/
  if ( *(this + 4) >= v3 ) /*0x53878b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x538796*/
      return 0; /*0x538796*/
    v4 = *(this + 5); /*0x538798*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x5387a8*/
      return 0; /*0x5387af*/
  }
  v6 = *(this + 4); /*0x5387b5*/
  v7 = *(this + 1); /*0x5387b8*/
  *(this + 4) = v6 + 1; /*0x5387be*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x5387c8*/
  return 1; /*0x5387b1*/
}
}
} // namespace gamemd

// 0x5AC430
namespace gamemd {
unsigned int * DynamicVector::Copy(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall DynamicVector::Copy(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x5ac43e*/
  v3 = aP1->Capacity; /*0x5ac441*/
  *(this + 2) = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    *(this + 1) = 0; /*0x5ac496*/
    *((_BYTE *)this + 13) = 0; /*0x5ac49d*/
LABEL_8:
    *(this + 4) = aP1[1].vtable0; /*0x5ac4a1*/
    *(this + 5) = aP1[1].Items; /*0x5ac4aa*/
    return this; /*0x5ac4ad*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  *(this + 1) = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  v5 = *(this + 2); /*0x5ac462*/
  v6 = 0; /*0x5ac465*/
  *((_BYTE *)this + 13) = 1; /*0x5ac469*/
  if ( v5 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(_DWORD *)(*(this + 1) + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < *(this + 2) ); /*0x5ac481*/
  *(this + 4) = aP1[1].vtable0; /*0x5ac486*/
  *(this + 5) = aP1[1].Items; /*0x5ac48c*/
  return this; /*0x5ac491*/
}
}
} // namespace gamemd

// 0x5AD7D0
namespace gamemd {
char DynamicVector::Add_Alt3(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::Add_Alt3(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x5ad7d3*/
  if ( *(this + 4) >= v3 ) /*0x5ad7db*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x5ad7e6*/
      return 0; /*0x5ad7e6*/
    v4 = *(this + 5); /*0x5ad7e8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x5ad7f8*/
      return 0; /*0x5ad7ff*/
  }
  v6 = *(this + 4); /*0x5ad805*/
  v7 = *(this + 1); /*0x5ad808*/
  *(this + 4) = v6 + 1; /*0x5ad80e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x5ad818*/
  return 1; /*0x5ad801*/
}
}
} // namespace gamemd

// 0x624810
namespace gamemd {
char DynamicVector::GrowCapacity()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::GrowCapacity(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x624814*/
  if ( *this < *(this + 1) ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = __2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  v6 = (const void *)*(this + 2); /*0x62485a*/
  if ( v6 ) /*0x62485f*/
    qmemcpy(v5, v6, 24 * *this); /*0x624870*/
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x62487d*/
  *(this + 1) = v4; /*0x624889*/
  *(this + 2) = v7; /*0x62488c*/
  return 1; /*0x62481f*/
}
}
} // namespace gamemd

// 0x67A520
namespace gamemd {
int DynamicVector::Read(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DynamicVector::Read(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a52c*/
  v6 = *(this + 4); /*0x67a539*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a53d*/
  result = v6; /*0x67a540*/
  for ( i = 0; i < v6; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a558*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a55b*/
  }
  return result; /*0x67a564*/
}
}
} // namespace gamemd

// 0x67A6E0
namespace gamemd {
int DynamicVector::Read_Alt(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DynamicVector::Read_Alt(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a6ec*/
  v6 = *(this + 4); /*0x67a6f9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a6fd*/
  result = v6; /*0x67a700*/
  for ( i = 0; i < v6; ++i ) /*0x67a708*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a718*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a71b*/
  }
  return result; /*0x67a724*/
}
}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_67AC70(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x67ac79*/
  *(this + 2) = a2; /*0x67ac80*/
  *((_BYTE *)this + 12) = 1; /*0x67ac83*/
  *((_BYTE *)this + 13) = 0; /*0x67ac87*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *(this + 1) = a3; /*0x67ac9b*/
    }
    else
    {
      *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x67acac*/
      *((_BYTE *)this + 13) = 1; /*0x67acaf*/
    }
  }
  *this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const; /*0x67acb3*/
  *(this + 5) = 10; /*0x67acb9*/
  *(this + 4) = 0; /*0x67acc0*/
  return this; /*0x67acc9*/
}
}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::Add2(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x67ad83*/
  if ( *(this + 4) >= v3 ) /*0x67ad8b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x67ad96*/
      return 0; /*0x67ad96*/
    v4 = *(this + 5); /*0x67ad98*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x67ada8*/
      return 0; /*0x67adaf*/
  }
  v6 = *(this + 4); /*0x67adb5*/
  v7 = *(this + 1); /*0x67adb8*/
  *(this + 4) = v6 + 1; /*0x67adbe*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x67adc8*/
  return 1; /*0x67adb1*/
}
}
} // namespace gamemd

// 0x67C360
namespace gamemd {
char DynamicVector::RemoveAt(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::RemoveAt(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= v2 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = v2 - 1; /*0x67c36b*/
  *(this + 4) = v4; /*0x67c36e*/
  if ( a2 < v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x67c37b*/
    }
    while ( v3 < *(this + 4) ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}
}
} // namespace gamemd

// 0x67C3F0
namespace gamemd {
char DynamicVector::RemoveAt2(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::RemoveAt2(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= v2 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = v2 - 1; /*0x67c3fb*/
  *(this + 4) = v4; /*0x67c3fe*/
  if ( a2 < v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x67c40b*/
    }
    while ( v3 < *(this + 4) ); /*0x67c414*/
  }
  return 1; /*0x67c419*/
}
}
} // namespace gamemd

// 0x6C6400
namespace gamemd {
char DynamicVector::Add(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector::Add(_DWORD *this, DynamicVector *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x6c6403*/
  if ( *(this + 4) >= v3 ) /*0x6c640b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(this + 5); /*0x6c6418*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x6c6428*/
      return 0; /*0x6c642f*/
  }
  v6 = *(this + 4); /*0x6c6435*/
  v7 = *(this + 1); /*0x6c6438*/
  *(this + 4) = v6 + 1; /*0x6c643e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x6c6448*/
  return 1; /*0x6c6431*/
}
}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall DynamicVector_Constructor_Techno(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x7342d9*/
  *(this + 2) = a2; /*0x7342e0*/
  *((_BYTE *)this + 12) = 1; /*0x7342e3*/
  *((_BYTE *)this + 13) = 0; /*0x7342e7*/
  *this = &vt_VectorClass_TechnoClass; /*0x7342eb*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      *(this + 1) = a3; /*0x7342fb*/
    }
    else
    {
      *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x73430c*/
      *((_BYTE *)this + 13) = 1; /*0x73430f*/
    }
  }
  *this = &vt_DynamicVectorClass_TechnoClass; /*0x734313*/
  *(this + 5) = 10; /*0x734319*/
  *(this + 4) = 0; /*0x734320*/
  return this; /*0x734329*/
}
}
} // namespace gamemd

// 0x7AF000
namespace gamemd {
char DynamicVector::EnsureCapacity()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DynamicVector_EnsureCapacity(int *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x7af004*/
  if ( *this < *(this + 1) ) /*0x7af00b*/
    return 0; /*0x7af00d*/
  v4 = 2 * v2; /*0x7af014*/
  v6 = 2 * v2; /*0x7af01b*/
  if ( 2 * v2 < 10 ) /*0x7af01f*/
  {
    v6 = 10; /*0x7af021*/
    v4 = 10; /*0x7af029*/
  }
  v5 = __2_YAPAXI_Z(4 * v4); /*0x7af03c*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7af04a*/
  if ( *(this + 2) ) /*0x7af053*/
  {
    qmemcpy(v5, (const void *)*(this + 2), 4 * *this); /*0x7af068*/
    v4 = v6; /*0x7af071*/
  }
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x7af079*/
  *(this + 1) = v4; /*0x7af081*/
  *(this + 2) = (int)v5; /*0x7af084*/
  return 1; /*0x7af00f*/
}
}
} // namespace gamemd
