// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Time_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4E24A0
namespace gamemd {
unsigned int Time::GetElapsedMS()
{

  DWORD Time; // eax
  unsigned int v1; // ecx

  Time = timeGetTime(); /*0x4e24a0*/
  if ( Time > (DWORD)((DWORD))((DWORD))(g_abs_8B3F14) ) /*0x4e24ae*/
    v1 = 3 * (Time - g_abs_8B3F14); /*0x4e24c5*/
  else
    v1 = 3 * (Time - g_abs_8B3F14 - 1); /*0x4e24b3*/
  return v1 / 0x32; /*0x4e24c2*/

}
} // namespace gamemd
// 0x777AC0
namespace gamemd {
int Time::FormatDate(char * Buffer)
{

  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-10h] BYREF

  result = FileTimeToSystemTime(&FileTime, &SystemTime); /*0x777ad0*/
  if ( result ) /*0x777ad8*/
    return sprintf(Buffer, &stru_849F20, (INIClass *)SystemTime.wMonth); /*0x777b20*/
  return result; /*0x777b28*/

}
} // namespace gamemd