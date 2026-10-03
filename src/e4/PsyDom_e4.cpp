// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/RadBeam_e4.hpp"
#include "e4/classes/Progress_e4.hpp"
#include "e4/classes/E4Recv_7AECD0_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/ActionQueue_e4.hpp"

// 0x53B080
namespace gamemd {
void PsyDom::Fire()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x53B080)
}
}
// 0x53B400
namespace gamemd {
bool PsyDom::IsActive()
{

  int result; // eax

  result = PsyDom_Status; /*0x53b400*/
  LOBYTE(result) = PsyDom_Status != 0; /*0x53b407*/
  return result; /*0x53b40a*/

}
} // namespace gamemd
