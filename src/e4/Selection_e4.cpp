// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x731D00
void Selection::SetCurrent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Selection_SetCurrent(void *this)
{
  MEMORY[0xB0FE54] = (int)this; /*0x731d00*/
  MEMORY[0xB0FE58] = 0; /*0x731d06*/
}
}

// 0x732D00
char Selection::GetFlag()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char Selection_GetFlag()
{
  return MEMORY[0xB0FE65]; /*0x732d05*/
}
}

// 0x734270
int Selection::ClearGlobals()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Selection_ClearGlobals(void *this)
{
  int result; // eax

  result = 0; /*0x734270*/
  if ( this ) /*0x734274*/
  {
    if ( this == (void *)MEMORY[0xB0FE5C] ) /*0x734287*/
    {
      MEMORY[0xB0FE5C] = 0; /*0x734289*/
    }
    else if ( this == (void *)MEMORY[0xB0FE60] ) /*0x734295*/
    {
      MEMORY[0xB0FE60] = 0; /*0x734297*/
    }
  }
  else
  {
    MEMORY[0xB0FE5C] = 0; /*0x734276*/
    MEMORY[0xB0FE60] = 0; /*0x73427b*/
  }
  return result; /*0x734280*/
}
}
