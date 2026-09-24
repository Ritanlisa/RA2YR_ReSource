// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x427290
char * AnimFile::Stub()
{
  return &this->u32_1430; /*0x427296*/
}
// 0x4272A0
AnimFile * AnimFile::QueryInterface(char a2)
{
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = *((_BYTE *)&this->q0347); /*0x4272a6*/
  *(_DWORD *)this = &AnimFile::`vftable'; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)&this->q00C3) + 52))(*((_DWORD *)&this->q00C3)); /*0x4272be*/
    *((_BYTE *)&this->q0347) = 0; /*0x4272c1*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 899); /*0x4272c7*/
  *((_DWORD *)&this->q00C3) = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
    *((_DWORD *)this + 899) = 0; /*0x4272dd*/
  }
  if ( this->qE10 ) /*0x4272e3*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x4272ee*/
    this->qE10 = 0; /*0x4272f6*/
  }
  this->q022 = 0; /*0x427300*/
  *(_DWORD *)this = &Animate::`vftable'; /*0x427308*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    __3_YAXPAX_Z(this); /*0x427311*/
  return this; /*0x42731b*/
}