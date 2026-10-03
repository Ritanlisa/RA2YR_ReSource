// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/SessionClass_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x520AE0
namespace gamemd {
int Mission::ExecuteTechnoMissionAction()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x520AE0)
}
}
// 0x520F40
namespace gamemd {
char Mission::ProcessUnitMissionAI()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x520F40)
}
}
// 0x5BDA80
namespace gamemd {
int Mission::SetAndCall(int a2, int a3, void *a3_2)
{

  int (**MouseClass_field_0x0)(int, int); // edx

  MouseClass_field_0x0 = (int (**)(int, int))this->q000; /*0x5bda84*/
  *((unsigned int *)this + 5465) = a2; /*0x5bda8d*/
  return MouseClass_field_0x0[19](a2, a3); /*0x5bda96*/

}
}
// 0x6ED7E0
namespace gamemd {
char Mission::AssignTeamMemberMissions(ScriptClass * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6ED7E0)
}
}
// 0x70F770
namespace gamemd {
int Mission::GetMissionDelay(void *a1_1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70F770)
}
}