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

// 0x537A70
char ** Commands::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char **__thiscall Commands::Release(MultiplayerDebugCommandClass *this)
{
  return &off_8278C0; /*0x537a75*/
}
}

// 0x537A80
_UNKNOWN ** Commands::StubReturn8550640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_UNKNOWN **__thiscall Commands::StubReturn8550640(MultiplayerDebugCommandClass *this)
{
  return &off_8278F0; /*0x537a85*/
}
}

// 0x537A90
char Commands::Execute()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Commands::Execute(MultiplayerDebugCommandClass *this)
{
  char result; // al

  result = MEMORY[0xA8B8B4]; /*0x537a90*/
  if ( MEMORY[0xA8B8B4] ) /*0x537a97*/
  {
    result = MEMORY[0xA8B8B5] == 0; /*0x537aa0*/
    MEMORY[0xA8B8B5] = MEMORY[0xA8B8B5] == 0; /*0x537aa3*/
  }
  return result; /*0x537aa8*/
}
}

// 0x537A60
const wchar_t * Commands::ddtor()
{
return g_INI_Key_De;
}
