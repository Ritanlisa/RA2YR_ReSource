// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnholyAlliance_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"  // G42.36 C2027 supply

// 0x5CB440
namespace gamemd {
AbstractClass * * UnholyAlliance_GetResult()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CB440)
}
}
// 0x5CB540
namespace gamemd {  // G42.18c ns repair
UnholyAlliance * UnholyAlliance::QueryInterface(unsigned int * Block, char a2)
{

  *(unsigned int *)&Block->m_Enabled = &vt_UnholyAlliance; /*0x5cb543*/
  ((MultiplayerGameMode*)(MultiplayerGameMode *)Block)->Dtor(); /*0x5cb549*/
  if ( (a2 & 1) != 0 ) /*0x5cb553*/
    __3_YAXPAX_Z(Block); /*0x5cb556*/
  return &Block->m_Enabled; /*0x5cb560*/

}
}  // G42.18c ns repair
// 0x5CB3F0
namespace gamemd {  // G42.18c ns repair
char UnholyAlliance::Read(void *a1, void *a2)
{

  stru_A8B250.__pad_0[8] = 1; /*0x5cb3f2*/
  return 1; /*0x5cb3f7*/

}
}  // G42.18c ns repair
// 0x5CB400
namespace gamemd {  // G42.18c ns repair
BOOL UnholyAlliance::Write(MPCooperative * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CB400)
}
}  // G42.18c ns repair
// 0x5CB430
char UnholyAlliance::Seek(void *a1, void *a2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CB430)
}