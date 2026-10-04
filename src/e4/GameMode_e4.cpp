// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameMode_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x5D5DE0
namespace gamemd {
int GameMode::IsValid(unsigned int a2)
{

  return (!this->u32_FC || a2 != -2) && a2 < 4; /*0x5d5df2*/

}
}
// 0x6B8CA0
namespace gamemd {
unsigned int GameMode::ReadFlagsFromINI(CCINIClass * aP1, void * aDestroyablebri, void * aFixedalliance, void * aHarvesterimmun, void * aInert, void * aInitialveteran, void * aIonstorms, void * aMcvdeploy, void * aMeteorites, void * aTiberiumspread, void * aVisceroids)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B8CA0)
}
}