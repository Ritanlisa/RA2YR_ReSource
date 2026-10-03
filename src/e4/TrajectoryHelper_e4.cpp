// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TrajectoryHelper_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4CC100
namespace gamemd {
unsigned int * TrajectoryHelper::FindFirstObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CC100)
}
}
// 0x4CC360
namespace gamemd {
unsigned int * TrajectoryHelper::GetObstacle(unsigned char * a1, unsigned char * a2, int a3, int a4, int a5, int a6, int a7, void * other)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CC360)
}
}
// 0x4CC310
namespace gamemd {
unsigned int * TrajectoryHelper::FindFirstImpenetrableObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{

  unsigned int *FirstObstacle; // eax
  unsigned int *v5; // esi

  FirstObstacle = TrajectoryHelper::FindFirstObstacle(aP0, a1, *(unsigned int *)(arg0 + 160), a3); /*0x4cc322*/
  v5 = FirstObstacle; /*0x4cc327*/
  if ( FirstObstacle /*0x4cc342*/
    && BuildingPlacement::ValidateType(FirstObstacle, -1, -1)
    && *(unsigned char *)(*(unsigned int *)(arg0 + 172) + 324) )
  {
    return 0; /*0x4cc34d*/
  }
  else
  {
    return v5; /*0x4cc353*/
  }

}
} // namespace gamemd
