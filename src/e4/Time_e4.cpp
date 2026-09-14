// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E24A0
unsigned int Time::GetElapsedMS()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int Time_GetElapsedMS()
{
  DWORD Time; // eax
  unsigned int v1; // ecx

  Time = timeGetTime(); /*0x4e24a0*/
  if ( Time > MEMORY[0x8B3F14] ) /*0x4e24ae*/
    v1 = 3 * (Time - MEMORY[0x8B3F14]); /*0x4e24c5*/
  else
    v1 = 3 * (Time - MEMORY[0x8B3F14] - 1); /*0x4e24b3*/
  return v1 / 0x32; /*0x4e24c2*/
}
}

// 0x777AC0
int Time::FormatDate()
{
{
    int result;
    struct _SYSTEMTIME SystemTime;
    result = FileTimeToSystemTime(&FileTime, &SystemTime);
    if ( result )
    return sprintf(this, &DataGlobal_849F20, (INIClass *)SystemTime.wMonth);
    return result;
}
}
