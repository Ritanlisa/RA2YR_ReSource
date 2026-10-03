// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/MapSeedClass_18_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x597730
namespace gamemd {  // G42.18c ns repair
int MapSeed::ValidateName(int a2)
{

  int result; // eax

  if ( a2 ) /*0x597736*/
    return (*(int (**)(int, char *))(*(unsigned int *)this + 8))(a2, (char *)(unsigned char *)this + 120); /*0x597740*/
  LOBYTE(result) = ShowSaveLoadDialog((void *)((int)this), (unsigned char *)this + 120); /*0x597752*/
  return result; /*0x597744*/

}
} // namespace gamemd
// 0x5AC230
namespace gamemd {
int MapSeed::IsCellInBounds()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AC230)
}
} // namespace gamemd
// 0x79C520
namespace gamemd {
int MapSeed::CheckName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x79C520)
}
} // namespace gamemd
// 0x79C650
namespace gamemd {
AbstractClass * * MapSeed::InsertName()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x79C650)
}
} // namespace gamemd
