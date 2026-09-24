// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E1A00
int COMObject::FindNextActive(unsigned char * a1)
{
  if ( !a1 ) /*0x4e1a02*/
    return 0; /*0x4e1a16*/
  while ( !a1[28] ) /*0x4e1a09*/
  {
    a1 = (_BYTE *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 4))(a1); /*0x4e1a10*/
    if ( !a1 ) /*0x4e1a14*/
      return 0; /*0x4e1a14*/
  }
  return 1; /*0x4e1a18*/
}
// 0x4E30C0
int COMObject::Thunk_COMObject_sub_4E30C0()
{
  return 4; /*0x4e30c5*/
}
// 0x4F4240
int COMObject::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  if ( !a3 ) /*0x4f4248*/
    return -2147467261; /*0x4f424b*/
  if ( memcmp(a2, &IID_IUnknown, 0x10u) && memcmp(a2, &unk_7EA6E8, 0x10u) ) /*0x4f427a*/
    return -2147467262; /*0x4f427f*/
  *a3 = a1; /*0x4f428c*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4f4291*/
  return 0; /*0x4f424a*/
}
// 0x4F43F0
bool COMObject::IsSameType(GScreenClass * aP0)
{
  return dword_A8EF54 == (*(int (__thiscall **)(int))(*(_DWORD *)aP0 + 24))(aP0); /*0x4f4408*/
}
// 0x55AB40
int COMObject::GetStringValue(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x55ab47*/
    return -2147467261; /*0x55ab49*/
  *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) + 4; /*0x55ab5e*/
  a2[1] = 0; /*0x55ab60*/
  return 0; /*0x55ab4e*/
}
// 0x55ABD0
unsigned int * COMObject::ReturnZeroPos(int a1, unsigned int * a2)
{
  *a2 = 0; /*0x55abd8*/
  a2[1] = 0; /*0x55abda*/
  return a2; /*0x55abdd*/
}
// 0x55ACA0
unsigned int * COMObject::GetCoord3D(int a1, unsigned int * a2)
{
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // esi

  v2 = *(_DWORD **)(a1 + 8); /*0x55aca6*/
  v3 = v2[40]; /*0x55acb3*/
  v4 = v2[41]; /*0x55acb6*/
  *a2 = v2[39]; /*0x55acbf*/
  a2[1] = v3; /*0x55acc1*/
  a2[2] = v4; /*0x55acc4*/
  return a2; /*0x55acc7*/
}
// 0x55AD10
int COMObject::GetSpecialValue(int a1)
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8)); /*0x55ad1f*/
}
// 0x5F9970
int COMObject::GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1)
{
  int result; // eax

  result = ObjectClass::GetSizeMax(aP0, aP1); /*0x5f997a*/
  if ( result >= 0 ) /*0x5f9981*/
    return 0; /*0x5f9983*/
  return result; /*0x5f9985*/
}
// 0x6C0050
int COMObject::QueryInterface2()
{
  if ( !a3 ) /*0x6c0057*/
    return -2147467261; /*0x6c0059*/
  *a3 = 0; /*0x6c0076*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6c0092*/
    *a3 = a1; /*0x6c0096*/
  if ( !*a3 ) /*0x6c0098*/
    return -2147467262; /*0x6c00a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6c00ac*/
  return 0; /*0x6c005e*/
}