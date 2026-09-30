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

    result = *((unsigned int *)this + 12) - 1;
    *((unsigned int *)this + 12) = result;
  if ( result < 0 ) /*0x401f99*/
        *((unsigned int *)this + 12) = 0;
  return result; /*0x401fa2*/
}
} // namespace gamemd
// 0x49FA00
namespace gamemd {
int RefCount::Increment(int a2)
{
  int v3; // edi
  int RefCount_field_04; // ecx

    v3 = *((unsigned int *)this + 8);
  if ( a2 < v3 ) /*0x49fa0e*/
  {
  LABEL_5:
        ++*(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
        v5 = *((unsigned int *)this + 4);
        ++*((unsigned int *)this + 16);
    return *(unsigned int *)(RefCount_field_04 + 4 * a2); /*0x49fa59*/
  }
  if ( (*(uint8_t (**)(RefCount *, int, unsigned int))(this->m_RefCount + 8))(this, a2 + 10, 0) ) /*0x49fa1a*/
  {
        for ( i = v3; i < *((unsigned int *)this + 8); *(unsigned int *)(*((unsigned int *)this + 4) + 4 * i - 4) = 0 )
      ++v3; /*0x49fa2d*/
    goto LABEL_5; /*0x49fa3b*/
  }
  return 0; /*0x49fa40*/
}
} // namespace gamemd