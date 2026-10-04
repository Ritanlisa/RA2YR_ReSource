// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Time_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4E24A0
namespace gamemd {
int Time::GetElapsedMS()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E24A0)
}
} // namespace gamemd
// 0x777AC0
namespace gamemd {
int Time::FormatDate(char * Buffer)
{

  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-10h] BYREF

  result = FileTimeToSystemTime((const FILETIME *)(&FileTime), &SystemTime); /*0x777ad0*/
  if ( result ) /*0x777ad8*/
    return sprintf( /*0x777b20*/
             Buffer,
             "%02d/%02d/%04d - %02d:%02d:%02d",
             SystemTime.wMonth,
             SystemTime.wDay,
             SystemTime.wYear,
             SystemTime.wHour,
             SystemTime.wMinute,
             SystemTime.wSecond);
  return result; /*0x777b28*/

}
} // namespace gamemd