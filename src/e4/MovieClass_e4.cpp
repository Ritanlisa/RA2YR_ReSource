// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7C3990
namespace gamemd {
unsigned int MovieClass::ComputeTime()
{
  unsigned int v1; // edi

  v1 = this->u32_78; /*0x7c3995*/
  return 60 * (*(int (__cdecl **)(int))(&this->q0200))(this) / v1 + this->u32_148; /*0x7c39ab*/
}
} // namespace gamemd