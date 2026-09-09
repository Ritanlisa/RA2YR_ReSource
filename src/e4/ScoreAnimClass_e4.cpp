// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x691000
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_0(_DWORD *Block, char a2)
{
  *Block = &ScoreAnimClass::`vftable'; /*0x691009*/
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    __3_YAXPAX_Z(Block); /*0x691012*/
  return Block; /*0x69101c*/
}
}

// 0x691020
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_1(_DWORD *Block, char a2)
{
  *Block = &ScoreAnimClass::`vftable'; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    __3_YAXPAX_Z(Block); /*0x691032*/
  return Block; /*0x69103c*/
}
}

// 0x6910A0
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreFontClass(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x6910a6*/
  *Block = &ScoreFontClass::`vftable'; /*0x6910a9*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    *(Block + 3) = 0; /*0x6910c2*/
    *((_BYTE *)Block + 16) = 0; /*0x6910c5*/
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
    __3_YAXPAX_Z(Block); /*0x6910f1*/
  return Block; /*0x6910fb*/
}
}
