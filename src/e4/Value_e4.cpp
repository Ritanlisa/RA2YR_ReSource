// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x486730
namespace gamemd {
int Value::InRange()
{

  int v1; // eax

  v1 = *((char *)this + 14); /*0x486730*/
  return v1 >= unk_AA0E20 && v1 < unk_AA0E20 + 14; /*0x486746*/

}
} // namespace gamemd