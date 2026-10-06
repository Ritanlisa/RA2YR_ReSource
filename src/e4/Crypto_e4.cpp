// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x5C6A30
namespace gamemd {
bool Crypto_Helper(unsigned int * a0, unsigned int * a1, unsigned int * a2, Crypto * aP3, int a5)
{
  bool result; // al
  Crypto * v7;
  Crypto * v8;

  if ( !a5 ) /*0x5c6a3a*/
    return aP3; /*0x5c6a92*/
  result = (unsigned int)aP3; /*0x5c6a47*/
  do /*0x5c6a89*/
  {
    v7 = (gamemd::Crypto *)((unsigned int)((gamemd::Crypto *)(*a1 + *a2)));
    v8 = (gamemd::Crypto *)((unsigned int)(v7)+ aP3);
    result = (unsigned int)(gamemd::Crypto *)(v7 < *a1 || result && !v8);
    *a0 = (unsigned int)((gamemd::Crypto *)(v8));
    ++a2; /*0x5c6a77*/
    ++a1; /*0x5c6a7a*/
    ++a0; /*0x5c6a7d*/
    aP3 = (gamemd::Crypto *)(result); /*0x5c6a81*/
    --a5; /*0x5c6a85*/
  }
  while ( a5 ); /*0x5c6a89*/
  return result; /*0x5c6a8e*/
}
} // namespace gamemd
