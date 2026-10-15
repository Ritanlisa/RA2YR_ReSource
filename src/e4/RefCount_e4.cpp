// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_RefCount 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x401F90
namespace gamemd {  // G42.18 ns repair
int32_t RefCount::Decrement(void *a1)
{

  int result; // eax
  result = this->u32_C - 1; /*0x401f93*/
  this->u32_C = result; /*0x401f96*/
  if ( result < 0 ) /*0x401f99*/
    this->u32_C = 0; /*0x401f9b*/
  return result; /*0x401fa2*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x49FA00
namespace gamemd {
int RefCount::Increment(int a2)
{

  int v3; // edi
  int i; // eax
  int RefCount_field_04; // ecx

  v3 = this->u32_8; /*0x49fa09*/
  if ( a2 < v3 ) /*0x49fa0e*/
  {
LABEL_5:
    ++*(unsigned int *)(this->RefCount_field_04 + 4 * a2); /*0x49fa3d*/
    RefCount_field_04 = (int)(this->RefCount_field_04); /*0x49fa4d*/
    ++this->q010; /*0x49fa51*/
    return *(unsigned int *)(RefCount_field_04 + 4 * a2); /*0x49fa59*/
  }
  if ( (*(unsigned __int8 (**)(RefCount *, int, unsigned int))(this->m_RefCount + 8))(this, a2 + 10, 0) ) /*0x49fa1a*/
  {
    for ( i = v3; i < this->u32_8; *(unsigned int *)(this->RefCount_field_04 + 4 * i - 4) = 0 ) /*0x49fa28*/
      ++i; /*0x49fa2d*/
    goto LABEL_5; /*0x49fa3b*/
  }
  return 0; /*0x49fa40*/

}
} // namespace gamemd