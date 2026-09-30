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
    if ( *((unsigned char *)this + 16) && *((unsigned char *)this + 20) )
        return *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 288) + 4) + 56);
  else
    return 0; /*0x542308*/
}
}
// 0x543090
namespace gamemd {
int Connection::Close(void *a1 = 0)
{
  int result; // eax

    result = *((unsigned int *)this + 72);
  if ( result ) /*0x543095*/
    *(unsigned char *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/
}
}