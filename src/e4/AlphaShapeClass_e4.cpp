// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x420DA0
namespace gamemd {
int AlphaShapeClass::SD_vt13(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x420DA0)
}
} // namespace gamemd
// 0x420E40
namespace gamemd {
int AlphaShapeClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); 
  return Prefix >= 0 ? 0 : Prefix;

}
} // namespace gamemd
// 0x420E70
namespace gamemd {
int AlphaShapeClass::SD_vt10(int a2, int a3)
{

  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == this->AlphaShapeClass_field_0x24 ) /*0x420e79*/
    *((unsigned char *)this + 60) = 1; /*0x420e7b*/
  return result; /*0x420e7f*/

}
} // namespace gamemd
// 0x421730
namespace gamemd {
AlphaShapeClass * AlphaShapeClass::SDDTOR(char a2, int aP0, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x421730)
}
} // namespace gamemd
namespace gamemd {
int AlphaShapeClass::SD_vt05(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); 
  if ( Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( aP0 ) /*0x420df9*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x420e02*/
      *(unsigned int *)aP0->__pad_0 = (unsigned int)(&vt_AlphaShapeClass); /*0x420e07*/
      aP0->AlphaShapeClass_field_0x04 = (int)&vt_AlphaShapeClass; /*0x420e0d*/
      aP0->AlphaShapeClass_field_0x08 = (int)&vt_AlphaShapeClass; /*0x420e14*/
      aP0->AlphaShapeClass_field_0x0C = (int)&vt_AlphaShapeClass; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->AlphaShapeClass_field_0x24)); /*0x420e2b*/
    *((unsigned int *)aP0 + 14) = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/

}
} // namespace gamemd