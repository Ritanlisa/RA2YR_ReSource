// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/E4Recv_487C80_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/RadSiteClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"

// 0x41D7E0
namespace gamemd {
int Warhead::GetWarheadSound(int a2)
{

  int v3; // eax

  if ( (uint8_t)Audio::IsLoud((int *)(this->q130 + 336)) ) /*0x41d7ec*/
    v3 = this->q048; /*0x41d7f5*/
  else
    v3 = this->q044; /*0x41d7fa*/
  return !this->u8_3C && v3 + this->q040 <= (int)dword_A8ED84 || a2 != this->u32_14; /*0x41d814*/

}
} // namespace gamemd
// 0x452820
namespace gamemd {
int Warhead::RemoveFromDamageList(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x452820)
}
} // namespace gamemd
// 0x4690B0
namespace gamemd {
int Warhead::ApplyDamage(ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4690B0)
}
} // namespace gamemd

// 0x46A310
namespace gamemd {
int Warhead::ApplyPostDamageEffects()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46A310)
}
} // namespace gamemd
// 0x65B580
namespace gamemd {
int Warhead::ProcessDamageArea()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65B580)
}
} // namespace gamemd