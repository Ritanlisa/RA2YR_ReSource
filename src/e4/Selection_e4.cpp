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
{
    return DataGlobal_B0FE65;
}
}

// 0x734270
int Selection::ClearGlobals()
{
{
    int result;
    result = 0;
    if ( this )
  {
    if ( this == (void *)DataGlobal_B0FE5C )
    {
    DataGlobal_B0FE5C = 0;
    }
    else if ( this == (void *)DataGlobal_B0FE60 )
    {
    DataGlobal_B0FE60 = 0;
    }
  }
    else
  {
    DataGlobal_B0FE5C = 0;
    DataGlobal_B0FE60 = 0;
  }
    return result;
}
}
