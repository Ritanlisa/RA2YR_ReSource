// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_Value 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x486730
namespace gamemd {  // G42.18 ns repair
int Value::InRange()
{

  int v1 = this->u32_38; // eax /*0x486730*/
  return v1 >= dword_AA0E20 && v1 < dword_AA0E20 + 14; /*0x486746*/
}  // G42.18 ns repair
} // namespace gamemd