// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x4C5AA0
int EMPulseClass::StubReturn52()
{
  return 52; /*0x4c5aa5*/
}
// 0x4C5AB0
int EMPulseClass::StubReturn55()
{
  return 55; /*0x4c5ab5*/
}
// 0x4C5AC0
EMPulseClass * EMPulseClass::CopyTo(AbstractClass * this, AbstractClass * a2, char a3)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &EMPulseClass::`vftable'; /*0x4c5ac4*/
  *(this + 1) = &EMPulseClass::`vftable'; /*0x4c5aca*/
  *(this + 2) = &EMPulseClass::`vftable'; /*0x4c5ad1*/
  *(this + 3) = &EMPulseClass::`vftable'; /*0x4c5ad8*/
  if ( g_WTFMode ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius((int)this); /*0x4c5ae8*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x4c5af1*/
  v5 = this; /*0x4c5b06*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_8A3870 + 16))(&dword_8A3870, &v5); /*0x4c5b0a*/
  if ( v3 != -1 && v3 < dword_8A3880 && v3 < --dword_8A3880 ) /*0x4c5b25*/
  {
    do /*0x4c5b3d*/
    {
      ++v3; /*0x4c5b2d*/
      *((_DWORD *)dword_8A3874 + v3 - 1) = *((_DWORD *)dword_8A3874 + v3); /*0x4c5b31*/
    }
    while ( v3 < dword_8A3880 ); /*0x4c5b3d*/
  }
  AbstractClass::DTOR(this); /*0x4c5b41*/
  if ( (a2 & 1) != 0 ) /*0x4c5b4b*/
    __3_YAXPAX_Z(this); /*0x4c5b4e*/
  return this; /*0x4c5b58*/
}