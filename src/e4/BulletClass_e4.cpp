// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/Byte_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"

// 0x466380
namespace gamemd {
BulletClass::BulletClass()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x466380)
}
}
// 0x466560
namespace gamemd {
BulletClass * * BulletClass::Dtor(void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x466560)
}
}
// 0x466660
namespace gamemd {
int * BulletClass::CalculateSpreadAngle(int a1)
{

  if ( (byte_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    byte_89DE10 |= 1u; /*0x466689*/
    dword_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return (int *)(&dword_89DDF4); /*0x4666a2*/

}
} // namespace gamemd

// 0x46AFB0
namespace gamemd {
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x46afc4*/

}
} // namespace gamemd

// 0x46AFD0
namespace gamemd {
LONG BulletClass::CheckTargetValidity(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46AFD0)
}
} // namespace gamemd

// 0x46AFF0
namespace gamemd {
LONG BulletClass::ValidateTarget(volatile LONG * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46AFF0)
}
} // namespace gamemd

// 0x46B540
namespace gamemd {
int BulletClass::MissionStubReturnZero()
{

  return 352; /*0x46b545*/

}
} // namespace gamemd

// 0x46B550
namespace gamemd {
int BulletClass::MissionStubReturnZero2()
{

  return 8; /*0x46b555*/

}
} // namespace gamemd

// 0x46B560
namespace gamemd {
int BulletClass::PowerDrainProcess(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = unk_7E96EC; /*0x46b590*/
  return 0; /*0x46b56d*/

}
} // namespace gamemd
