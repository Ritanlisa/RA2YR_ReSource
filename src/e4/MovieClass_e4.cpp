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

    v1 = *((unsigned int *)this + 480);
    return 60 * (*(int (__cdecl **)(int))((char *)this + 320))(this) / v1 + *((unsigned int *)this + 1312);
}
} // namespace gamemd