// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x420DA0
int AlphaShapeClass::SD_vt13(int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x420da9*/
  Power::TimerProcess(this->q028); /*0x420db4*/
  Power::TimerProcess(this->q02C); /*0x420dbf*/
  Power::TimerProcess(this->q030); /*0x420dca*/
  return Power::TimerProcess(this->u32_34); /*0x420dda*/
}
// 0x420E40
int AlphaShapeClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}
// 0x420E70
int AlphaShapeClass::SD_vt10(int a2, int a3)
{
  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == this->q024 ) /*0x420e79*/
    this->u32_3C = 1; /*0x420e7b*/
  return result; /*0x420e7f*/
}
// 0x421730
AlphaShapeClass * AlphaShapeClass::SDDTOR(char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *this = &AlphaShapeClass::`vftable'; /*0x42173d*/
  this->vtable2 = &AlphaShapeClass::`vftable'; /*0x421743*/
  this->vtable3 = &AlphaShapeClass::`vftable'; /*0x42174a*/
  this->vtable4 = &AlphaShapeClass::`vftable'; /*0x421751*/
  v6 = this; /*0x42175f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_88A0F0 + 16))(&dword_88A0F0, &v6); /*0x421763*/
  if ( v3 != -1 && v3 < g_AlphaShapeLimit && v3 < --g_AlphaShapeLimit ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((_DWORD *)dword_88A0F4 + v3 - 1) = *((_DWORD *)dword_88A0F4 + v3); /*0x42178a*/
    }
    while ( v3 < g_AlphaShapeLimit ); /*0x421796*/
  }
  v6 = this; /*0x4217a8*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(AbstractClass_Array + 16))(&AbstractClass_Array, &v6); /*0x4217ac*/
  if ( v4 != -1 && v4 < g_AlphaShapePool && v4 < --g_AlphaShapePool ) /*0x4217c7*/
  {
    do /*0x4217df*/
    {
      ++v4; /*0x4217cf*/
      *((_DWORD *)dword_B0F724 + v4 - 1) = *((_DWORD *)dword_B0F724 + v4); /*0x4217d3*/
    }
    while ( v4 < g_AlphaShapePool ); /*0x4217df*/
  }
  AbstractClass::DTOR(this); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    __3_YAXPAX_Z(this); /*0x4217f0*/
  return this; /*0x4217fa*/
}
// 0x420DE0
int AlphaShapeClass::SD_vt05(AbstractClass * aP0, int aP1)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x420df1*/
  if ( Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( aP0 ) /*0x420df9*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x420e02*/
      *aP0 = &AlphaShapeClass::`vftable'; /*0x420e07*/
      aP0[1] = &AlphaShapeClass::`vftable'; /*0x420e0d*/
      aP0[2] = &AlphaShapeClass::`vftable'; /*0x420e14*/
      aP0[3] = &AlphaShapeClass::`vftable'; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x420e2b*/
    aP0[14] = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/
}