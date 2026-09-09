// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72C240
namespace gamemd {
char sub_72C240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C240()
{
  char result; // al

  result = MEMORY[0xB0FD21]; /*0x72c240*/
  if ( !MEMORY[0xB0FD21] ) /*0x72c247*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c253*/
      MEMORY[0xB0FA30] = LoadFileSHP(MEMORY[0x844D9C], (bool *)&MEMORY[0xB0FD20]); /*0x72c265*/
    result = LoadPaletteSimple(MEMORY[0x844DA0], &MEMORY[0xB0FD24], &MEMORY[0xB0FD28]); /*0x72c27a*/
    MEMORY[0xB0FD21] = 1; /*0x72c27f*/
  }
  return result; /*0x72c286*/
}
}
} // namespace gamemd

// 0x72C290
namespace gamemd {
void sub_72C290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72C290()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD21] ) /*0x72c29a*/
  {
    if ( MEMORY[0xB0FD20] ) /*0x72c2a2*/
    {
      v0 = MEMORY[0xB0FA30]; /*0x72c2a5*/
      if ( MEMORY[0xB0FA30] ) /*0x72c2ad*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA30]); /*0x72c2b1*/
        __3_YAXPAX_Z(v0); /*0x72c2b7*/
      }
      MEMORY[0xB0FD20] = 0; /*0x72c2bf*/
    }
    MEMORY[0xB0FA30] = 0; /*0x72c2cb*/
    if ( MEMORY[0xB0FD24] ) /*0x72c2d3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD24]); /*0x72c2d6*/
      MEMORY[0xB0FD24] = 0; /*0x72c2de*/
    }
    if ( MEMORY[0xB0FD28] ) /*0x72c2ec*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD28])(MEMORY[0xB0FD28], 1); /*0x72c2f2*/
      MEMORY[0xB0FD28] = 0; /*0x72c2f4*/
    }
  }
  MEMORY[0xB0FD21] = 0; /*0x72c2fa*/
}
}
} // namespace gamemd

// 0x72C420
namespace gamemd {
char sub_72C420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C420()
{
  char result; // al

  result = MEMORY[0xB0FD15]; /*0x72c420*/
  if ( !MEMORY[0xB0FD15] ) /*0x72c427*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c433*/
      MEMORY[0xB0FA64] = LoadFileSHP(MEMORY[0x844D94], (bool *)&MEMORY[0xB0FD14]); /*0x72c445*/
    result = LoadPaletteSimple(MEMORY[0x844D98], &MEMORY[0xB0FD18], &MEMORY[0xB0FD1C]); /*0x72c45a*/
    MEMORY[0xB0FD15] = 1; /*0x72c45f*/
  }
  return result; /*0x72c466*/
}
}
} // namespace gamemd

// 0x72C470
namespace gamemd {
void sub_72C470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72C470()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD15] ) /*0x72c47a*/
  {
    if ( MEMORY[0xB0FD14] ) /*0x72c482*/
    {
      v0 = MEMORY[0xB0FA64]; /*0x72c485*/
      if ( MEMORY[0xB0FA64] ) /*0x72c48d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA64]); /*0x72c491*/
        __3_YAXPAX_Z(v0); /*0x72c497*/
      }
      MEMORY[0xB0FD14] = 0; /*0x72c49f*/
    }
    MEMORY[0xB0FA64] = 0; /*0x72c4ab*/
    if ( MEMORY[0xB0FD18] ) /*0x72c4b3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD18]); /*0x72c4b6*/
      MEMORY[0xB0FD18] = 0; /*0x72c4be*/
    }
    if ( MEMORY[0xB0FD1C] ) /*0x72c4cc*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD1C])(MEMORY[0xB0FD1C], 1); /*0x72c4d2*/
      MEMORY[0xB0FD1C] = 0; /*0x72c4d4*/
    }
  }
  MEMORY[0xB0FD15] = 0; /*0x72c4da*/
}
}
} // namespace gamemd
