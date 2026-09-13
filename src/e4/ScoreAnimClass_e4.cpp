// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x691000
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(char a2)
{
{
    *(void**)this = &vt_ScoreAnimClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x691020
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(char a2)
{
{
    *(void**)this = &vt_ScoreAnimClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x6910A0
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreFontClass(_DWORD *this, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(this + 3); /*0x6910a6*/
  *this = &vt_ScoreFontClass; /*0x6910a9*/
  if ( v3 && (unsigned char)this->ScoreAnimClass_field_0x10 == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    *(this + 3) = 0; /*0x6910c2*/
    *((_BYTE *)this + 16) = 0; /*0x6910c5*/
  }
  if ( !--MEMORY[0xB0558C] ) /*0x6910d3*/
  {
    v4 = &MEMORY[0xB05594]; /*0x6910d5*/
    do /*0x6910e7*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)((char *)&MEMORY[0xB055A8] + 4) ); /*0x6910e7*/
  }
  if ( (a2 & 1) != 0 ) /*0x6910ee*/
    __3_YAXPAX_Z(this); /*0x6910f1*/
  return this; /*0x6910fb*/
}
}
