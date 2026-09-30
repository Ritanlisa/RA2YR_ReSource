// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GaugeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Settings_e4.hpp"

// 0x4E30A0
namespace gamemd {
int GaugeClass::Stub()
{
    return *((unsigned int *)this + 52);
}
} // namespace gamemd
// 0x4E30B0
namespace gamemd {
int GaugeClass::Draw(int a2)
{
    *((unsigned int *)this + 180) = a2 != 0;
  return a2 != 0; /*0x4e30bc*/
}
} // namespace gamemd
// 0x4E30D0
namespace gamemd {
GaugeClass * GaugeClass::QueryInterface(char a2)
{
  GadgetClass::Dtor(); /*0x4e30d3*/
  if ( (a2 & 1) != 0 ) /*0x4e30dd*/
    RA2_OPDEL(); /*0x4e30e0*/
  return this; /*0x4e30ea*/
}
} // namespace gamemd