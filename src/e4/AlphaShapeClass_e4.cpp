// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x420DA0
int AlphaShapeClass::SD_vt13(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AlphaShapeClass::SD_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x420da9*/
  Power::TimerProcess(*(_DWORD *)(this + 40)); /*0x420db4*/
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x420dbf*/
  Power::TimerProcess(*(_DWORD *)(this + 48)); /*0x420dca*/
  return Power::TimerProcess(*(_DWORD *)(this + 52)); /*0x420dda*/
}
}

// 0x420E40
int AlphaShapeClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AlphaShapeClass::SD_vt06(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}
}

// 0x420E70
int AlphaShapeClass::SD_vt10(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AlphaShapeClass::SD_vt10(int this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == this->AlphaShapeClass_field_0x24 ) /*0x420e79*/
    *(_BYTE *)(this + 60) = 1; /*0x420e7b*/
  return result; /*0x420e7f*/
}
}

// 0x421730
AlphaShapeClass * AlphaShapeClass::SDDTOR(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AlphaShapeClass *__thiscall AlphaShapeClass::SDDTOR(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *this = &AlphaShapeClass::`vftable'; /*0x42173d*/
  *(this + 1) = &AlphaShapeClass::`vftable'; /*0x421743*/
  *(this + 2) = &AlphaShapeClass::`vftable'; /*0x42174a*/
  *(this + 3) = &vt_AlphaShapeClass; /*0x421751*/
  v6 = this; /*0x42175f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x88A0F0] + 16))(&MEMORY[0x88A0F0], &v6); /*0x421763*/
  if ( v3 != -1 && v3 < MEMORY[0x88A100] && v3 < --MEMORY[0x88A100] ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((_DWORD *)MEMORY[0x88A0F4] + v3 - 1) = *((_DWORD *)MEMORY[0x88A0F4] + v3); /*0x42178a*/
    }
    while ( v3 < MEMORY[0x88A100] ); /*0x421796*/
  }
  v6 = this; /*0x4217a8*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F720] + 16))(&MEMORY[0xB0F720], &v6); /*0x4217ac*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F730] && v4 < --MEMORY[0xB0F730] ) /*0x4217c7*/
  {
    do /*0x4217df*/
    {
      ++v4; /*0x4217cf*/
      *((_DWORD *)MEMORY[0xB0F724] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F724] + v4); /*0x4217d3*/
    }
    while ( v4 < MEMORY[0xB0F730] ); /*0x4217df*/
  }
  AbstractClass::DTOR(this); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    __3_YAXPAX_Z(this); /*0x4217f0*/
  return (AlphaShapeClass *)this; /*0x4217fa*/
}
}

// 0x420DE0
int AlphaShapeClass::SD_vt05(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_AlphaShapeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_AlphaShapeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_AlphaShapeClass;
    *(int *)&aP0->__pad_0[12] = &vt_AlphaShapeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    aP0[1].abstractFlags = 0;
  }
    return (int)Prefix_0->__pad_0;
}
}
