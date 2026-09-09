// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C6490
namespace gamemd {
int sub_5C6490(unsigned char * a1, char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5C6490(_BYTE *a1, char *a2, int a3)
{
  char *v4; // esi
  char i; // bl
  int v6; // edi
  int j; // edi
  char v8; // cl

  v4 = &a2[a3 - 1]; /*0x5c64a4*/
  for ( i = -(*(int *)&a2[4 * a3 - 4] < 0); v4 > a2; --v4 ) /*0x5c64b5*/
  {
    if ( *v4 != i ) /*0x5c64b9*/
      break; /*0x5c64b9*/
  }
  v6 = 0; /*0x5c64c2*/
  if ( *v4 < 0 && *(int *)&a2[4 * a3 - 4] >= 0 || (*v4 & 0x80) == 0 && *(int *)&a2[4 * a3 - 4] < 0 ) /*0x5c64d2*/
  {
    *a1 = i; /*0x5c64d4*/
    v6 = 1; /*0x5c64d7*/
  }
  a1[v6] = *v4; /*0x5c64de*/
  for ( j = v6 + 1; v4 != a2; ++j ) /*0x5c64e4*/
  {
    v8 = *--v4; /*0x5c64e6*/
    a1[j] = v8; /*0x5c64ea*/
  }
  return j; /*0x5c64f4*/
}
}
} // namespace gamemd
