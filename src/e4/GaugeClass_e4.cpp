// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GaugeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4E30A0
namespace gamemd {
int GaugeClass::Stub()
{

  return *((unsigned int *)this + 13); /*0x4e30a3*/

}
} // namespace gamemd
// 0x4E30B0
namespace gamemd {
int GaugeClass::Draw(int a2)
{

  *((unsigned char *)this + 45) = a2 != 0; /*0x4e30b9*/
  return a2 != 0; /*0x4e30bc*/

}
} // namespace gamemd
// 0x4E30D0
namespace gamemd {
GaugeClass * GaugeClass::QueryInterface(unsigned int * Block, char a2)
{

  GadgetClass::Dtor(Block); /*0x4e30d3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x4e30dd*/
    RA2_OPDEL(Block); /*0x4e30e0*/
  return (GaugeClass *)Block; /*0x4e30ea*/

}
} // namespace gamemd