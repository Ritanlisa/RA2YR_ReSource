// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x427290
char * AnimFile::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall AnimFile::_vt04(char *this)
{
  return this + 1292; /*0x427296*/
}
}

// 0x4272A0
AnimFile * AnimFile::QueryInterface(void * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AnimFile *__thiscall AnimFile::QueryInterface(void *Block, char a2)
{
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = *((_BYTE *)Block + 137); /*0x4272a6*/
  *(_DWORD *)Block = &AnimFile::`vftable'; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)Block + 33) + 52))(*((_DWORD *)Block + 33)); /*0x4272be*/
    *((_BYTE *)Block + 137) = 0; /*0x4272c1*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)Block + 899); /*0x4272c7*/
  *((_DWORD *)Block + 33) = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
    *((_DWORD *)Block + 899) = 0; /*0x4272dd*/
  }
  if ( *((_DWORD *)Block + 900) ) /*0x4272e3*/
  {
    __3_YAXPAX_Z(*((void **)Block + 900)); /*0x4272ee*/
    *((_DWORD *)Block + 900) = 0; /*0x4272f6*/
  }
  *((_BYTE *)Block + 136) = 0; /*0x427300*/
  *(_DWORD *)Block = &Animate::`vftable'; /*0x427308*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    __3_YAXPAX_Z(Block); /*0x427311*/
  return (AnimFile *)Block; /*0x42731b*/
}
}
