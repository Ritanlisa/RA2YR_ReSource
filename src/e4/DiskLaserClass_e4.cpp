// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A7A30
int DiskLaserClass::DiskLaserClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DiskLaserClass::DiskLaserClass(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4a7a33*/
  *(_DWORD *)this = &DiskLaserClass::`vftable'; /*0x4a7a3a*/
  this->DiskLaserClass_field_0x04 = &DiskLaserClass::`vftable'; /*0x4a7a40*/
  this->DiskLaserClass_field_0x08 = &DiskLaserClass::`vftable'; /*0x4a7a47*/
  this->DiskLaserClass_field_0x0C = &vt_DiskLaserClass; /*0x4a7a4e*/
  this->DiskLaserClass_field_0x24 = 0; /*0x4a7a55*/
  this->DiskLaserClass_field_0x28 = 0; /*0x4a7a58*/
  *(_DWORD *)(this + 44) = 0; /*0x4a7a5b*/
  *(_DWORD *)(this + 48) = 0; /*0x4a7a5e*/
  *(_DWORD *)(this + 52) = 0; /*0x4a7a61*/
  *(_DWORD *)(this + 56) = 0; /*0x4a7a64*/
  *(_DWORD *)(this + 60) = 0; /*0x4a7a67*/
  if ( MEMORY[0x8A0218] < MEMORY[0x8A0210] /*0x4a7a9e*/
    || (MEMORY[0x8A0215] || !MEMORY[0x8A0210])
    && MEMORY[0x8A021C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8A0208] + 8))(
         &MEMORY[0x8A0208],
         MEMORY[0x8A0210] + MEMORY[0x8A021C],
         0) )
  {
    v2 = MEMORY[0x8A0218]++; /*0x4a7aab*/
    *((_DWORD *)MEMORY[0x8A020C] + v2) = this; /*0x4a7aba*/
  }
  return this; /*0x4a7abf*/
}
}

// 0x4A7C90
DiskLaserClass * DiskLaserClass::CopyTo(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DiskLaserClass *__thiscall DiskLaserClass::CopyTo(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *this = &DiskLaserClass::`vftable'; /*0x4a7c9d*/
  this->vtable2 = &DiskLaserClass::`vftable'; /*0x4a7ca3*/
  this->vtable3 = &DiskLaserClass::`vftable'; /*0x4a7caa*/
  this->vtable4 = &vt_DiskLaserClass; /*0x4a7cb1*/
  v5 = this; /*0x4a7cbf*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x8A0208] + 16))(&MEMORY[0x8A0208], &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < MEMORY[0x8A0218] && v3 < --MEMORY[0x8A0218] ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((_DWORD *)MEMORY[0x8A020C] + v3 - 1) = *((_DWORD *)MEMORY[0x8A020C] + v3); /*0x4a7cea*/
    }
    while ( v3 < MEMORY[0x8A0218] ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR(this); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    __3_YAXPAX_Z(this); /*0x4a7d07*/
  return (DiskLaserClass *)this; /*0x4a7d11*/
}
}

// 0x4A7B90
int DiskLaserClass::Write(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_DiskLaserClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_DiskLaserClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_DiskLaserClass;
    *(int *)&aP0->__pad_0[12] = &vt_DiskLaserClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[8]);
  }
    return (int)Prefix_0->__pad_0;
}
}

// 0x4A7C10
int DiskLaserClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// 0x4A7C30
int DiskLaserClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1378929064;
  a2[1] = 1206682730;
  a2[2] = -1786862915;
  a2[3] = 1226661444;
  return 0;
}

// 0x4A7C70
int DiskLaserClass::StubReturn64()
{
return 64;
}

// 0x4A7C80
int DiskLaserClass::StubReturn73()
{
return 73;
}
