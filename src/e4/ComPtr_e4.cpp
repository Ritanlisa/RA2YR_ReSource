// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ComStreamClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Commands_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"

// 0x76F000
namespace gamemd {
int ComPtr::DestroyWrapper(int aP0, ObjectClass * aP1)
{

  int v2; // ecx

  FindTerritoryWOL((ObjectClass *)aP0, v2 + 44, (int)aP1); /*0x76f00f*/
  return aP0; /*0x76f016*/

}
} // namespace gamemd