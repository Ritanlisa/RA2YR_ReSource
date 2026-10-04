// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SyncDelay_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/InputManager_ProcessEvents_e4.hpp"
#include "e4/classes/SyncDelayClass_e4.hpp"

// 0x55E160
namespace gamemd {
signed int SyncDelay::Start(void *a1, void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55E160)
}
} // namespace gamemd
// 0x55F6C0
namespace gamemd {
bool SyncDelay::Check(unsigned int * a2)
{

  unsigned int *v2; // eax

  v2 = (unsigned int *)this->q010; /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/

}
} // namespace gamemd