// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x53D960
namespace gamemd {  // G42.18 ns repair
int sub_53D960(int a1, int a2)
{
  signed int v3; // ecx
  signed int v4; // eax
  int v5; // eax
  int i; // edx

  if ( !a1 && !a2 ) /*0x53d970*/
    return 0; /*0x53d973*/
  v3 = abs32(a2); /*0x53d982*/
  v4 = abs32(a1); /*0x53d987*/
  if ( v4 > v3 ) /*0x53d98b*/
    v3 = v4; /*0x53d98d*/
  v5 = 1; /*0x53d98f*/
  for ( i = 1; i < v3; ++i ) /*0x53d998*/
    v5 += 8 * i; /*0x53d99a*/
  if ( a1 == v3 ) /*0x53d9a4*/
    return v3 + a2 + v5; /*0x53d9a8*/
  if ( a2 == v3 ) /*0x53d9b1*/
    return 3 * v3 - a1 + v5; /*0x53d9ba*/
  if ( a1 == -v3 ) /*0x53d9c5*/
    return 5 * v3 - a2 + v5; /*0x53d9cd*/
  return a1 + 7 * v3 + v5; /*0x53d972*/
}
}  // G42.18 ns repair
} // namespace gamemd
