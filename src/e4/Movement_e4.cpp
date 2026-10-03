// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/Vector3_e4.hpp"

// 0x5B20F0
namespace gamemd {
void Movement::CalcVelocity(IUnknown * aP0, unsigned int * a1, double a3, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, char a7, char a8, char a9)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B20F0)
}
} // namespace gamemd
// 0x5B2930
namespace gamemd {
unsigned int * Movement::Check(unsigned int * a2, unsigned short * a3, void *a3_2)
{

  LOWORD(a3) = LOWORD(this->Movement_field_00) + *a3; /*0x5b293e*/
  *a2 =(unsigned int)a3; /*0x5b2947*/
  return a2; /*0x5b2949*/

}
} // namespace gamemd
// 0x5B2970
namespace gamemd {
int * Movement::DivideAndStoreScaled(int * a2, int a3)
{

  LOWORD(a3) = SLOWORD(this->Movement_field_00) / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/

}
} // namespace gamemd
