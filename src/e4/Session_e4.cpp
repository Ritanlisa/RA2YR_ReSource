// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/PreviewClass_e4.hpp"
#include "e4/classes/Surface_e4.hpp"

// 0x5D1D80
namespace gamemd {
int Session::RemoveTeam(int (__thiscall ***aP1)(unsigned int, int))
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D1D80)
}
}
// 0x5E74E0
namespace gamemd {
int Session::PrepareGame(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E74E0)
}
}
// 0x69B700
namespace gamemd {
int Session::GetPlayerOption()
{

  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->field_178 != (unsigned int)(void *)-2 ) /*0x69b70d*/
    return (int)(unsigned int)this->field_174; /*0x69b70f*/
  return result; /*0x69b715*/

}
}
// 0x69B720
namespace gamemd {
int Session::GetPlayerColor()
{

  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->field_160 != (unsigned int)(void *)-2 ) /*0x69b72d*/
    return (int)(unsigned int)this->field_15C; /*0x69b72f*/
  return result; /*0x69b735*/

}
}
// 0x5ED370
namespace gamemd {
int Session::StartGame(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5ED370)
}
} // namespace gamemd
