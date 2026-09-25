// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x664610
namespace gamemd {
bool Process::WaitForExit(DWORD dwMilliseconds, CellStruct * aP2)
{
  const HANDLE *v3; // esi
  BOOL v5; // eax

  v3 = &this->q01C; /*0x664614*/
  Debug::Log(); /*0x66461d*/
  if ( !*v3 ) /*0x664629*/
    return 1; /*0x664629*/
  if ( WaitForMultipleObjects(1u, v3, 0, dwMilliseconds) != 258 ) /*0x664644*/
  {
    Debug::Log(); /*0x6646a7*/
    *v3 = 0; /*0x6646af*/
    return 1; /*0x6646b5*/
  }
  if ( !aP2 ) /*0x66464c*/
    return 0; /*0x66464e*/
  Debug::Log(); /*0x66465a*/
  v5 = TerminateProcess(*v3, 0); /*0x664667*/
  if ( v5 ) /*0x664671*/
  {
    *v3 = 0; /*0x664694*/
    return v5; /*0x66469b*/
  }
  else
  {
    GetLastError(); /*0x664674*/
    Debug::Log(); /*0x664680*/
    return 0; /*0x66468c*/
  }
}
} // namespace gamemd