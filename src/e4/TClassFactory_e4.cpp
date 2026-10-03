// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TClassFactory_CampaignClass_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x6C0260
namespace gamemd {
int TClassFactory_CampaignClass::GetClassName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C0260)
}
} // namespace gamemd
// 0x6C4D60
namespace gamemd {
int TClassFactory_MechLocomotionClass::GetClassName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C4D60)
}
} // namespace gamemd
// 0x6C0290
namespace gamemd {
int TClassFactory_CampaignClass::ddtor(int a2, int a3, unsigned int *a4, int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C0290)
}
} // namespace gamemd
// 0x6C0310
namespace gamemd {
int TClassFactory_CampaignClass::GetSize(int a2, int a1, int a3, int a4)
{

  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)((unsigned int)(a2)+ 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v3 = v2 + 1; /*0x6c031f*/
  else
    v3 = v2 - 1; /*0x6c0328*/
  *(unsigned int *)((unsigned int)(a2)+ 4) = v3; /*0x6c0320*/
  return 0; /*0x6c0325*/

}
} // namespace gamemd
// 0x6C4D40
namespace gamemd {
LONG TClassFactory_MechLocomotionClass::AddRef(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C4D40)
}
} // namespace gamemd
// 0x6C4D90
namespace gamemd {
int TClassFactory_MechLocomotionClass::ddtor(int a2, int a3, unsigned int *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C4D90)
}
} // namespace gamemd
// 0x6C4E10
namespace gamemd {
int TClassFactory_MechLocomotionClass::GetSize(int a2)
{

  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)((unsigned int)(a2)+ 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v3 = v2 + 1; /*0x6c4e1f*/
  else
    v3 = v2 - 1; /*0x6c4e28*/
  *(unsigned int *)((unsigned int)(a2)+ 4) = v3; /*0x6c4e20*/
  return 0; /*0x6c4e25*/

}
} // namespace gamemd