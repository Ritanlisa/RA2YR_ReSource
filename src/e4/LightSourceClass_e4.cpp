// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x554760
unsigned int * LightSourceClass::Construct(int a2, int a3, LightSourceClass * aP3, int a5, int a6, int a7, TintStruct * aP7, int a9)
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

  AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
  this->LightTint = a7; /*0x554774*/
  this->LightIntensity = a6; /*0x554777*/
  this->q02C = aP7; /*0x55477e*/
  this->q030 = a9; /*0x554788*/
  this->DetailLevel = 2; /*0x55478f*/
  this->Location = a2; /*0x554796*/
  this->Activated = 0; /*0x55479c*/
  *this = &LightSourceClass::`vftable'; /*0x5547a0*/
  this->q03C = a3; /*0x5547a6*/
  this->LightVisibility = a5; /*0x5547ad*/
  this->vtable2 = &LightSourceClass::`vftable'; /*0x5547b0*/
  this->uniqueId = aP3; /*0x5547b7*/
  this->vtable3 = &LightSourceClass::`vftable'; /*0x5547ba*/
  this->vtable4 = &vt_LightSourceClass; /*0x5547c1*/
  if ( g_BridgeCellPool < dword_ABCA18 /*0x5547fd*/
    || (byte_ABCA1D || !dword_ABCA18)
    && dword_ABCA24 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_ABCA10->field_8)(
         &dword_ABCA10,
         dword_ABCA18 + dword_ABCA24,
         0) )
  {
    int v10 = g_BridgeCellPool++; /*0x55480a*/
    *(_DWORD *)&dword_ABCA14->__pad_0[4 * v10] = this; /*0x554819*/
  }
  return this; /*0x55481e*/
}
}

// 0x554830
int LightSourceClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_554830(int this)
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x554833*/
  this->LightIntensity = 0; /*0x55483d*/
  this->LightTint = 0; /*0x554840*/
  this->LightTint.Green = 0; /*0x554843*/
  this->LightTint.Blue = 0; /*0x554846*/
  this->Location = dword_ABCA00; /*0x55484f*/
  this->q03C = dword_ABCA04; /*0x554857*/
  int v2 = dword_ABCA08; /*0x55485a*/
  this->LightVisibility = 0; /*0x554860*/
  this->Activated = 0; /*0x554863*/
  this->uniqueId = v2; /*0x554866*/
  *(_DWORD *)this = &LightSourceClass::`vftable'; /*0x554869*/
  this->vtable1 = &LightSourceClass::`vftable'; /*0x55486f*/
  this->vtable2 = &LightSourceClass::`vftable'; /*0x554876*/
  this->vtable3 = &vt_LightSourceClass; /*0x55487d*/
  if ( g_BridgeCellPool < dword_ABCA18 /*0x5548b6*/
    || (byte_ABCA1D || !dword_ABCA18)
    && dword_ABCA24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABCA10 + 8))(
         &dword_ABCA10,
         dword_ABCA18 + dword_ABCA24,
         0) )
  {
    int v3 = g_BridgeCellPool++; /*0x5548c3*/
    *((_DWORD *)dword_ABCA14 + v3) = this; /*0x5548d2*/
  }
  return this; /*0x5548d7*/
}
}

// 0x555070
int LightSourceClass::Stat(AbstractClass * aP1)
{
{
    return AbstractClass::ProcessPower((#378 *)this);
}
}

// 0x555080
int LightSourceClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1872513264;
  a2[1] = 298979847;
  a2[2] = 1610642561;
  a2[3] = -1252326136;
  return 0;
}

// 0x5550C0
int LightSourceClass::Write(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_LightSourceClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_LightSourceClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_LightSourceClass;
    *(int *)&aP0->__pad_0[12] = &vt_LightSourceClass;
    }
    return 0;
  }
    return result;
}
}

// 0x555110
int LightSourceClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
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
LightSourceClass * LightSourceClass::CopyTo(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_LightSourceClass;
    *(this + 1) = (unsigned int)vt_LightSourceClass;
    *(this + 2) = (unsigned int)vt_LightSourceClass;
    *(this + 3) = &vt_LightSourceClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = ((int (__thiscall *)(DynamicVector **, void ***))DataGlobal_ABCA10->field_10)(&DataGlobal_ABCA10, &v5);
    if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool )
  {
    do
    {
    ++v3;
    *(int *)&DataGlobal_ABCA14->__pad_0[4 * v3 - 4] = *(int *)&DataGlobal_ABCA14->__pad_0[4 * v3];
    }
    while ( v3 < g_BridgeCellPool );
  }
    if ( this->Activated )
  {
    this->Activated = 0;
    TacticalClass::ScrollView(this, 0);
  }
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LightSourceClass *)this;
}
}
