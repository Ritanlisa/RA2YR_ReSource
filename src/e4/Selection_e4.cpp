// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x731D00
void Selection::SetCurrent()
{
{
    DataGlobal_B0FE54 = (int)this;
    DataGlobal_B0FE58 = 0;
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
