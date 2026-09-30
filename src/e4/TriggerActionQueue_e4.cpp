// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TriggerActionQueue_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6E5820
namespace gamemd {
int TriggerActionQueue::ProcessAll()
{

  int result; // eax
  int i; // esi

  result = (int)(g_abs_B0E730);
  for ( i = 0; i < (int)((int))((int))(g_abs_B0E730); ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(this); /*0x6e583b*/
    result = g_abs_B0E730; /*0x6e5840*/
  }
  return result; /*0x6e584a*/

}
} // namespace gamemd