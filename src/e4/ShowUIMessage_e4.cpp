// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x72CBA0
namespace gamemd {
char sub_72CBA0()
{
  char result; // al

  result = byte_B0FC7C; /*0x72cba0*/
  if ( !byte_B0FC7C ) /*0x72cba7*/
  {
    dword_B0FAD0 = (int)LoadFileSHP(aWaitcyloShp, (bool *)&byte_B0FC73); /*0x72cbc7*/
    result = LoadPaletteSimple(aWaitcyloPal, &dword_B0FC74, &dword_B0FC78); /*0x72cbcc*/
    byte_B0FC7C = 1; /*0x72cbd1*/
  }
  return result; /*0x72cbd8*/
}
} // namespace gamemd
