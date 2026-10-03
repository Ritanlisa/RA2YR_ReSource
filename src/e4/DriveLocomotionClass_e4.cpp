// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Function_e4.hpp"  // G42.36 C2027 supply

// 0x4AF780
namespace gamemd {
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AF780)
}
} // namespace gamemd
// 0x4AF800
namespace gamemd {
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AF800)
}
} // namespace gamemd
// 0x4B4830
namespace gamemd {
int DriveLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x4b4836*/
    return -2147467261; /*0x4b4838*/
  *a2 = 1247291201; /*0x4b4846*/
  a2[1] = 298948665; /*0x4b484e*/
  a2[2] = -1610610249; /*0x4b4857*/
  a2[3] = unk_7E9A3C; /*0x4b4860*/
  return 0; /*0x4b483d*/

}
} // namespace gamemd
// 0x4B4CF0
namespace gamemd {
int DriveLocomotionClass::StubReturn112()
{

  return 112; /*0x4b4cf5*/

}
} // namespace gamemd
// 0x4B4D00
namespace gamemd {
DriveLocomotionClass * DriveLocomotionClass::ProcessMove(ILocomotion ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B4D00)
}
} // namespace gamemd