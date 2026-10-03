// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply

// 0x71E940
namespace gamemd {
DynamicVector * TEventClass::Execute(int a2, int a3, int a4, int *a5, int a6, int a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E940)
}
}
// 0x71F390
namespace gamemd {
int TEventClass::PrepareSaveToINI(const char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F390)
}
}
// 0x71F800
namespace gamemd {
int TEventClass::CheckConditions(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F800)
}
}
// 0x71FA80
namespace gamemd {
void * TEventClass::Fire(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71FA80)
}
}
// 0x71F820
namespace gamemd {
int TEventClass::ProcessEvent(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F820)
}
} // namespace gamemd

// 0x71F880
namespace gamemd {
int TEventClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = unk_7E981C; /*0x71f8b0*/
  return 0; /*0x71f88d*/

}
} // namespace gamemd

// 0x71F8C0
namespace gamemd {
int TEventClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F8C0)
}
} // namespace gamemd

// 0x71F930
namespace gamemd {
int TEventClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F930)
}
} // namespace gamemd

// 0x71FA50
namespace gamemd {
int TEventClass::StubReturn88()
{

  return 88; /*0x71fa55*/

}
} // namespace gamemd

// 0x71FA60
namespace gamemd {
int TEventClass::StubReturn48()
{

  return 48; /*0x71fa65*/

}
} // namespace gamemd

// 0x71FA70
namespace gamemd {
int TEventClass::Stub()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71FA70)
}
} // namespace gamemd
