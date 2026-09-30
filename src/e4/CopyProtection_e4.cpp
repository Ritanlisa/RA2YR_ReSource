// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/CopyProtection_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x49F5C0
namespace gamemd {
bool CopyProtection::CheckLauncher()
{

  int v0; // esi
  bool v1; // bl

  Debug::Log(); /*0x49f5c8*/
  v0 = ((int (*)(unsigned int, unsigned int, char *))CreateMutexA)(0, 0, Name); /*0x49f5df*/
  v1 = ((int (*)(void))GetLastError)() == 183; /*0x49f5ec*/
  if ( v0 ) /*0x49f5f5*/
    ((void (*)(int))CloseHandle)(v0); /*0x49f5f8*/
  Debug::Log(); /*0x49f60d*/
  return v1; /*0x49f617*/

}
} // namespace gamemd
// 0x49F620
namespace gamemd {
char CopyProtection::NotifyLauncher()
{

  unsigned int v0; // edi
  int v1; // esi
  unsigned int v2; // esi
  unsigned int Msg[7]; // [esp+10h] [ebp-1Ch] BYREF

  Debug::Log(); /*0x49f62c*/
  ((void (*)(unsigned int *, unsigned int, int, int, unsigned int))PeekMessageA)(Msg, 0, 1024, 1024, 0); /*0x49f647*/
  v0 = ((int (*)(void))timeGetTime)() + 60000; /*0x49f657*/
  if ( ((int (*)(void))timeGetTime)() < v0 ) /*0x49f661*/
  {
    while ( 1 ) /*0x49f678*/
    {
      v1 = ((int (*)(int, int, char *))OpenEventA)(2, 1, aD6e7fc9764f94d); /*0x49f678*/
      if ( v1 ) /*0x49f67c*/
        break; /*0x49f67c*/
      ((void (*)(unsigned int))Sleep)(0); /*0x49f67f*/
      if ( ((int (*)(void))timeGetTime)() >= v0 ) /*0x49f689*/
        goto LABEL_9; /*0x49f689*/
    }
    ((void (*)(int))SetEvent)(v1); /*0x49f690*/
    ((void (*)(int))CloseHandle)(v1); /*0x49f697*/
    Debug::Log(); /*0x49f6a2*/
    Debug::Log(); /*0x49f6ac*/
    v2 = ((int (*)(void))timeGetTime)() + 10000; /*0x49f6b8*/
    if ( ((int (*)(void))timeGetTime)() <= v2 ) /*0x49f6c2*/
    {
      while ( !((int (*)(unsigned int *, unsigned int, int, int, int))PeekMessageA)(Msg, 0, 48879, 48879, 1) /*0x49f6e2*/
           || Msg[1] != 48879 )
      {
        ((void (*)(unsigned int))Sleep)(0); /*0x49f6e6*/
        if ( ((int (*)(void))timeGetTime)() > v2 ) /*0x49f6f0*/
          goto LABEL_9; /*0x49f6f0*/
      }
      MEMORY[0x87F7E8][32733] = ((int (*)(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int))MapViewOfFileEx)( /*0x49f723*/
                                  Msg[3],
                                  983071,
                                  0,
                                  0,
                                  0,
                                  0);
      if ( MEMORY[0x87F7E8][32733] ) /*0x49f728*/
        return 1; /*0x49f72d*/
    }
  }
LABEL_9:
  Debug::Log(); /*0x49f6f2*/
  return 0; /*0x49f701*/

}
} // namespace gamemd
// 0x49F7A0
namespace gamemd {
char CopyProtection::CheckProtectedData()
{

  return 1; /*0x49f7a2*/

}
} // namespace gamemd