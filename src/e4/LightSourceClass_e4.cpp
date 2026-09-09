// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x554760
namespace gamemd {
int LightSourceClass_Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall LightSourceClass::Construct(
        _DWORD *this,
        int a2,
        int a3,
        LightSourceClass *aP3,
        int a5,
        int a6,
        int a7,
        TintStruct *aP7,
        int a9)
{
  int v10; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
  *(this + 10) = a7; /*0x554774*/
  *(this + 9) = a6; /*0x554777*/
  *(this + 11) = aP7; /*0x55477e*/
  *(this + 12) = a9; /*0x554788*/
  *(this + 13) = 2; /*0x55478f*/
  *(this + 14) = a2; /*0x554796*/
  this->Activated = 0; /*0x55479c*/
  *this = &LightSourceClass::`vftable'; /*0x5547a0*/
  *(this + 15) = a3; /*0x5547a6*/
  *(this + 17) = a5; /*0x5547ad*/
  *(this + 1) = &LightSourceClass::`vftable'; /*0x5547b0*/
  *(this + 16) = aP3; /*0x5547b7*/
  *(this + 2) = &LightSourceClass::`vftable'; /*0x5547ba*/
  *(this + 3) = &LightSourceClass::`vftable'; /*0x5547c1*/
  if ( g_BridgeCellPool < dword_ABCA18 /*0x5547fd*/
    || (byte_ABCA1D || !dword_ABCA18)
    && dword_ABCA24 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_ABCA10->field_8)(
         &dword_ABCA10,
         dword_ABCA18 + dword_ABCA24,
         0) )
  {
    v10 = g_BridgeCellPool++; /*0x55480a*/
    *(_DWORD *)&dword_ABCA14->__pad_0[4 * v10] = this; /*0x554819*/
  }
  return this; /*0x55481e*/
}
}
} // namespace gamemd

// 0x554830
int LightSourceClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_554830(int this)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554833*/
  this->LightIntensity = 0; /*0x55483d*/
  *(_DWORD *)(this + 40) = 0; /*0x554840*/
  *(_DWORD *)(this + 44) = 0; /*0x554843*/
  *(_DWORD *)(this + 48) = 0; /*0x554846*/
  *(_DWORD *)(this + 56) = dword_ABCA00; /*0x55484f*/
  *(_DWORD *)(this + 60) = dword_ABCA04; /*0x554857*/
  v2 = dword_ABCA08; /*0x55485a*/
  this->LightVisibility = 0; /*0x554860*/
  this->Activated = 0; /*0x554863*/
  *(_DWORD *)(this + 64) = v2; /*0x554866*/
  *(_DWORD *)this = &LightSourceClass::`vftable'; /*0x554869*/
  *(_DWORD *)(this + 4) = &LightSourceClass::`vftable'; /*0x55486f*/
  *(_DWORD *)(this + 8) = &LightSourceClass::`vftable'; /*0x554876*/
  *(_DWORD *)(this + 12) = &LightSourceClass::`vftable'; /*0x55487d*/
  if ( g_BridgeCellPool < dword_ABCA18 /*0x5548b6*/
    || (byte_ABCA1D || !dword_ABCA18)
    && dword_ABCA24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABCA10 + 8))(
         &dword_ABCA10,
         dword_ABCA18 + dword_ABCA24,
         0) )
  {
    v3 = g_BridgeCellPool++; /*0x5548c3*/
    *((_DWORD *)dword_ABCA14 + v3) = this; /*0x5548d2*/
  }
  return this; /*0x5548d7*/
}
}

// 0x555070
int LightSourceClass::Stat(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LightSourceClass::Stat(void *this, AbstractClass *aP1)
{
  return AbstractClass::ProcessPower((#378 *)this); /*0x55507a*/
}
}

// 0x555080
int LightSourceClass::ddtor(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall LightSourceClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x555086*/
    return -2147467261; /*0x555088*/
  *a2 = 1872513264; /*0x555096*/
  a2[1] = 298979847; /*0x55509e*/
  a2[2] = 1610642561; /*0x5550a7*/
  a2[3] = -1252326136; /*0x5550b0*/
  return 0; /*0x55508d*/
}
}

// 0x5550C0
int LightSourceClass::Write(AbstractClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall LightSourceClass::Write(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x5550df*/
      *(_DWORD *)aP0->__pad_0 = &LightSourceClass::`vftable'; /*0x5550e4*/
      *(_DWORD *)&aP0->__pad_0[4] = &LightSourceClass::`vftable'; /*0x5550ea*/
      *(_DWORD *)&aP0->__pad_0[8] = &LightSourceClass::`vftable'; /*0x5550f1*/
      *(_DWORD *)&aP0->__pad_0[12] = &LightSourceClass::`vftable'; /*0x5550f8*/
    }
    return 0; /*0x5550ff*/
  }
  return result; /*0x555101*/
}
}

// 0x555110
int LightSourceClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall LightSourceClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x55511f*/
  if ( result >= 0 ) /*0x555126*/
    return 0; /*0x555128*/
  return result; /*0x55512a*/
}
}

// 0x555130
int LightSourceClass::StubReturn76()
{
return 76;
}

// 0x555140
int LightSourceClass::StubReturn54()
{
return 54;
}

// 0x555150
LightSourceClass * LightSourceClass::CopyTo(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LightSourceClass *__thiscall LightSourceClass::CopyTo(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &LightSourceClass::`vftable'; /*0x555156*/
  *(Block + 1) = &LightSourceClass::`vftable'; /*0x55515c*/
  *(Block + 2) = &LightSourceClass::`vftable'; /*0x555163*/
  *(Block + 3) = &LightSourceClass::`vftable'; /*0x55516a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x555171*/
  v5 = Block; /*0x555186*/
  v3 = ((int (__thiscall *)(DynamicVector **, void ***))dword_ABCA10->field_10)(&dword_ABCA10, &v5); /*0x55518a*/
  if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool ) /*0x5551a5*/
  {
    do /*0x5551bd*/
    {
      ++v3; /*0x5551ad*/
      *(_DWORD *)&dword_ABCA14->__pad_0[4 * v3 - 4] = *(_DWORD *)&dword_ABCA14->__pad_0[4 * v3]; /*0x5551b1*/
    }
    while ( v3 < g_BridgeCellPool ); /*0x5551bd*/
  }
  if ( *((_BYTE *)Block + 72) ) /*0x5551bf*/
  {
    *((_BYTE *)Block + 72) = 0; /*0x5551ca*/
    TacticalClass::ScrollView(Block, 0); /*0x5551ce*/
  }
  AbstractClass::DTOR(Block); /*0x5551d5*/
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    __3_YAXPAX_Z(Block); /*0x5551e2*/
  return (LightSourceClass *)Block; /*0x5551ec*/
}
}
