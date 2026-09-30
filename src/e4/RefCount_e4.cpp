// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x401F90
namespace gamemd {
int32_t RefCount::Decrement()
{

  int result; // eax

  result = *((unsigned int *)this + 3) - 1; /*0x401f93*/
  *((unsigned int *)this + 3) = result; /*0x401f96*/
  if ( result < 0 ) /*0x401f99*/
    *((unsigned int *)this + 3) = 0; /*0x401f9b*/
  return result; /*0x401fa2*/

}
} // namespace gamemd
// 0x49FA00
namespace gamemd {
int RefCount::Increment(int a2)
{

  int v3; // edi
  int i; // eax
  int v5; // ecx

  v3 = *((unsigned int *)this + 2); /*0x49fa09*/
  if ( a2 < v3 ) /*0x49fa0e*/
  {
LABEL_5:
    ++*(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x49fa3d*/
    v5 = *((unsigned int *)this + 1); /*0x49fa4d*/
    ++*((unsigned int *)this + 4); /*0x49fa51*/
    return *(unsigned int *)(v5 + 4 * a2); /*0x49fa59*/
  }
  if ( (*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, a2 + 10, 0) ) /*0x49fa1a*/
  {
    for ( i = v3; i < *((unsigned int *)this + 2); *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) = 0 ) /*0x49fa28*/
      ++i; /*0x49fa2d*/
    goto LABEL_5; /*0x49fa3b*/
  }
  return 0; /*0x49fa40*/

}
} // namespace gamemd