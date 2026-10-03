// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x6691E0
namespace gamemd {
int Rules::ReadMiscINI()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6691E0)
}

} // namespace gamemd

// 0x66BBB0
namespace gamemd {
IUnknown * * Rules::ReadCombatINI()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x66BBB0)
}
} // namespace gamemd

// 0x67A570
namespace gamemd {
unsigned int * Rules::CopyDataArray(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67A570)
}
}
// 0x5FB2E0
namespace gamemd {
char * Rules::GetProductionTimeMult(int aP1)
{

  char *result; // eax
  int v3; // ecx

  result = (char *)aP1; /*0x5fb2e0*/
  if ( aP1 ) /*0x5fb2e6*/
  {
    v3 = *(unsigned int *)this->__pad_0; /*0x5fb2e8*/
    if ( aP1 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * aP1 / (v3 + 1)); /*0x5fb301*/
    else
      return (char *)((&(&off_832CEC)[8 * aP1])[v3]); /*0x5fb2f2*/
  }
  return result; /*0x5fb2f9*/

}
} // namespace gamemd
