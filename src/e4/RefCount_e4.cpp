// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x401F90
namespace gamemd {
int RefCount::Decrement()
{
  void * result;

  result = (int)(this->q00C - 1);
  this->q00C = result; /*0x401f96*/
  if ( result < 0 ) /*0x401f99*/
    this->q00C = 0; /*0x401f9b*/
  return result; /*0x401fa2*/
}
} // namespace gamemd
// 0x49FA00
namespace gamemd {
int RefCount::Increment(int a2)
{
  int v3; // edi
  int v5; // ecx

  v3 = this->q008; /*0x49fa09*/
  if ( a2 < v3 ) /*0x49fa0e*/
  {
  LABEL_5:
    ++*(unsigned int *)(this->RefCount_field_04 + 4 * a2); /*0x49fa3d*/
    v5 = this->RefCount_field_04; /*0x49fa4d*/
    ++this->q010; /*0x49fa51*/
    return *(unsigned int *)(v5 + 4 * a2); /*0x49fa59*/
  }
  if ( this->vt_slot_8(a2 + 10, 0) ) /*0x49fa1a*/
  {
    for ( v3 = v3; v3 < this->q008; *(unsigned int *)(this->RefCount_field_04 + 4 * v3 - 4) = 0 ) /*0x49fa28*/
      ++v3; /*0x49fa2d*/
    goto LABEL_5; /*0x49fa3b*/
  }
  return 0; /*0x49fa40*/
}
} // namespace gamemd