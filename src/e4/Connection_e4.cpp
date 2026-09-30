// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5422F0
namespace gamemd {
int Connection::GetSpeed()
{

  if ( *((unsigned char *)this + 4) && *((unsigned char *)this + 5) ) /*0x5422f7*/
    return *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 18) + 4) + 56); /*0x542304*/
  else
    return 0; /*0x542308*/

}
}
// 0x543090
namespace gamemd {
int Connection::Close()
{

  int result; // eax

  result = *((unsigned int *)this + 18); /*0x543090*/
  if ( result ) /*0x543095*/
    *(unsigned char *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/

}
}