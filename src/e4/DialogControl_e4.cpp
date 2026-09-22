// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E1450
int DialogControl::Hide()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = *(_DWORD *)this; /*0x4e1450*/
  *(this + 30) = 0; /*0x4e1452*/
  this->q01C = 1; /*0x4e1456*/
  return (*(int (**)(void))(v1 + 84))();
}
}

// 0x4E1460
int DialogControl::Show()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *(this + 30) = 1; /*0x4e1462*/
  this->q01C = 1; /*0x4e1465*/
  return this->vt_slot_84();
}
}

// 0x4E1470
int DialogControl::IsHidden()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return *(this + 30) == 0; /*0x4e147a*/
}
}

// 0x623340
unsigned int * DialogControl::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  memset(this, 0, 0x200u); /*0x62334d*/
  this->q01A = 11; /*0x62334f*/
  this->q019 = aP0; /*0x62335d*/
  void * v2 = __2_YAPAXI_Z(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    int v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  this->q00F = v3; /*0x623379*/
  this->q004 = 0; /*0x62337c*/
  this->q017 = 0; /*0x62337f*/
  this->q024 = -1; /*0x623382*/
  return this; /*0x62338e*/
}
}
