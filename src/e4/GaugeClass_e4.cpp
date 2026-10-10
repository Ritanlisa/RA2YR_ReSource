// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/GaugeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/ControlClass_e4.hpp"

// 0x4E30A0
namespace gamemd {  // G42.18 ns repair
int GaugeClass::Stub()
{
  return this->u32_34; /*0x4e30a3*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x4E30B0
namespace gamemd {
int GaugeClass::Draw(int a2)
{
  this->u32_2D = a2 != 0; /*0x4e30b9*/
  return a2 != 0; /*0x4e30bc*/
}
} // namespace gamemd
// 0x4E30D0
namespace gamemd {
GaugeClass * GaugeClass::QueryInterface(unsigned int * Block, char a2)
{
  GadgetClass::Dtor((GadgetClass *)Block); /*0x4e30d3*/
  if ( (a2 & 1) != 0 ) /*0x4e30dd*/
    operator delete((void *)(Block)); /*0x4e30e0*/
  return Block->__pad_0; /*0x4e30ea*/
}
} // namespace gamemd