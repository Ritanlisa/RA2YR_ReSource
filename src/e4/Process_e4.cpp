// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x664610
bool Process::WaitForExit(DWORD dwMilliseconds, CellStruct * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Process::WaitForExit(const HANDLE *this, DWORD dwMilliseconds, CellStruct *aP2)
{
  AnimClass *v3; // esi
  BOOL v5; // eax

  v3 = (AnimClass *)&CONTAINING_RECORD(this, AnimClass, field_4)->__pad_18[8]; /*0x664614*/
  Debug::Log(); /*0x66461d*/
  if ( !v3->field_0 ) /*0x664629*/
    return 1; /*0x664629*/
  if ( WaitForMultipleObjects(1u, (const HANDLE *)v3, 0, dwMilliseconds) != 258 ) /*0x664644*/
  {
    Debug::Log(); /*0x6646a7*/
    v3->field_0 = 0; /*0x6646af*/
    return 1; /*0x6646b5*/
  }
  if ( !(_BYTE)aP2 ) /*0x66464c*/
    return 0; /*0x66464e*/
  Debug::Log(); /*0x66465a*/
  v5 = TerminateProcess((HANDLE)v3->field_0, 0); /*0x664667*/
  if ( v5 ) /*0x664671*/
  {
    v3->field_0 = 0; /*0x664694*/
    return v5; /*0x66469b*/
  }
  else
  {
    GetLastError(); /*0x664674*/
    Debug::Log(); /*0x664680*/
    return 0; /*0x66468c*/
  }
}
}
