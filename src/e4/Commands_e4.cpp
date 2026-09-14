// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x537A50
char * Commands::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Commands::AddRef(MultiplayerDebugCommandClass *this)
{
  return aMultiplayerdeb; /*0x537a55*/
}
}

// 0x537A60
const wchar_t * Commands::ddtor()
{
return g_INI_Key_De;
}

// 0x537A70
char ** Commands::Release()
{
{
    return &DataGlobal_8278C0;
}
}

// 0x537A80
_UNKNOWN ** Commands::StubReturn8550640()
{
{
    return &DataGlobal_8278F0;
}
}

// 0x537A90
char Commands::Execute()
{
{
    char result;
    result = DataGlobal_A8B8B4;
    if ( DataGlobal_A8B8B4 )
  {
    result = DataGlobal_A8B8B5 == 0;
    DataGlobal_A8B8B5 = DataGlobal_A8B8B5 == 0;
  }
    return result;
}
}
