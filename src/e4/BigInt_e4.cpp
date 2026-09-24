// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C65B0
namespace gamemd {
int sub_5C65B0(int * a1, int a2)
{
  int result; // eax

  result = *a1 + 1; /*0x5c65b2*/
  for ( *a1 = result; !result; *a1 = result ) /*0x5c65b5*/
  {
    ++a1; /*0x5c65b7*/
    if ( !--a2 ) /*0x5c65bb*/
      break; /*0x5c65bb*/
    result = *a1 + 1; /*0x5c65bf*/
  }
  return result; /*0x5c65c4*/
}
} // namespace gamemd
