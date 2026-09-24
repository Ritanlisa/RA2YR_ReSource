// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C6A30
namespace gamemd {
bool Crypto_Helper(unsigned int * a0, unsigned int * a1, unsigned int * a2, Crypto * aP3, int a5)
{
  bool result; // al
  unsigned int v7; // esi
  unsigned int v8; // edi

  if ( !a5 ) /*0x5c6a3a*/
    return aP3; /*0x5c6a92*/
  result = aP3; /*0x5c6a47*/
  do /*0x5c6a89*/
  {
    v7 = *a1 + *a2; /*0x5c6a55*/
    v8 = v7 + aP3; /*0x5c6a5d*/
    result = v7 < *a1 || result && !v8; /*0x5c6a6f*/
    *a0 = v8; /*0x5c6a75*/
    ++a2; /*0x5c6a77*/
    ++a1; /*0x5c6a7a*/
    ++a0; /*0x5c6a7d*/
    aP3 = result; /*0x5c6a81*/
    --a5; /*0x5c6a85*/
  }
  while ( a5 ); /*0x5c6a89*/
  return result; /*0x5c6a8e*/
}
} // namespace gamemd
