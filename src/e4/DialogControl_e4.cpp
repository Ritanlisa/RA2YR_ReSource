// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E1450
int DialogControl::Hide()
{
  int v1; // eax

  v1 = *(_DWORD *)this; /*0x4e1450*/
  *(this + 30) = 0; /*0x4e1452*/
  *(this + 28) = 1; /*0x4e1456*/
  return (*(int (**)(void))(v1 + 84))();
}
// 0x4E1460
int DialogControl::Show()
{
  *(this + 30) = 1; /*0x4e1462*/
  *(this + 28) = 1; /*0x4e1465*/
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 84))(this);
}
// 0x4E1470
int DialogControl::IsHidden()
{
  return *(this + 30) == 0; /*0x4e147a*/
}
// 0x623340
unsigned int * DialogControl::Constructor()
{
  void *v2; // eax
  int v3; // eax

  memset(this, 0, 0x200u); /*0x62334d*/
  *(this + 26) = 11; /*0x62334f*/
  *(this + 25) = g_FogOfWarState; /*0x62335d*/
  v2 = __2_YAPAXI_Z(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  *(this + 15) = v3; /*0x623379*/
  *(this + 16) = 0; /*0x62337c*/
  *(this + 23) = 0; /*0x62337f*/
  *(this + 36) = -1; /*0x623382*/
  return this; /*0x62338e*/
}