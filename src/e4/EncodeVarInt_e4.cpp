// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5C6490
namespace gamemd {  // G42.18 ns repair
int sub_5C6490(unsigned char * a1, char * a2, int a3)
{

  char *v4; // esi
  v4 = &a2[a3 - 1]; /*0x5c64a4*/
  char i; // bl
  for ( i = -(*(int *)&a2[4 * a3 - 4] < 0); v4 > a2; --v4 ) /*0x5c64b5*/
  {
    if ( *v4 != i ) /*0x5c64b9*/
      break; /*0x5c64b9*/
  }
  int v6 = 0; // edi /*0x5c64c2*/
  if ( *v4 < 0 && *(int *)&a2[4 * a3 - 4] >= 0 || (*v4 & 0x80) == 0 && *(int *)&a2[4 * a3 - 4] < 0 ) /*0x5c64d2*/
  {
    *a1 = i; /*0x5c64d4*/
    v6 = 1; /*0x5c64d7*/
  }
  a1[v6] = *v4; /*0x5c64de*/
  int j; // edi
  for ( j = v6 + 1; v4 != a2; ++j ) /*0x5c64e4*/
  {
    char v8; // cl
    v8 = *--v4; /*0x5c64e6*/
    a1[j] = v8; /*0x5c64ea*/
  }
  return j; /*0x5c64f4*/
}  // G42.18 ns repair
} // namespace gamemd
