// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x43A500
int COM::GetClassID(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 605729558;
  a2[1] = 298994933;
  a2[2] = 268445372;
  a2[3] = 1303416651;
  return 0;
}

// 0x55A950
LONG COM::AddRef(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall COM_AddRef(int a1)
{
  ++g_BulletClassPool; /*0x55a95f*/
  return InterlockedIncrement((volatile LONG *)(a1 + 20)); /*0x55a96b*/
}
}

// 0x55A970
LONG COM::ReleaseRef(volatile LONG * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall COM_ReleaseRef(volatile LONG *a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x55a980*/
  v1 = InterlockedDecrement(a1 + 5); /*0x55a98d*/
  if ( !v1 && a1 ) /*0x55a995*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x55a99d*/
  return v1; /*0x55a9a2*/
}
}
