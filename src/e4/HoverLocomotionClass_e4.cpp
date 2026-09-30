// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/HotkeyOptions_e4.hpp"

// 0x517070
namespace gamemd {
int HoverLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x517076*/
    return -2147467261; /*0x517078*/
  *a2 = 1247291202; /*0x517086*/
  a2[1] = 298948665; /*0x51708e*/
  a2[2] = -1610610249; /*0x517097*/
  a2[3] = -777003740; /*0x5170a0*/
  return 0; /*0x51707d*/

}
} // namespace gamemd
// 0x5170B0
namespace gamemd {
int HoverLocomotionClass::BeginMove(int a1, int * a2)
{

  int v2; // edi

  v2 = (unsigned int)(SwizzleManager::SaveLoad((int *)a1, a2));
  if ( v2 >= 0 && a1 ) /*0x5170c9*/
  {
    *(unsigned int *)a1 = &vt_LocomotionClass; /*0x5170ce*/
    *(unsigned int *)(a1 + 4) = &vt_LocomotionClass; /*0x5170d4*/
    FrameSnapshot::Init((unsigned short *)(a1 + 48)); /*0x5170db*/
    *(unsigned int *)a1 = &vt_HoverLocomotionClass; /*0x5170e0*/
    *(unsigned int *)(a1 + 4) = &vt_HoverLocomotionClass; /*0x5170e6*/
  }
  return v2; /*0x5170ef*/

}
} // namespace gamemd
// 0x5172B0
namespace gamemd {
int HoverLocomotionClass::StubReturn120()
{

  return 120; /*0x5172b5*/

}
} // namespace gamemd
// 0x5172C0
namespace gamemd {
HoverLocomotionClass * HoverLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{
*Block = (unsigned int)(&vt_HoverLocomotionClass);
  *(Block + 1) = &vt_HoverLocomotionClass; /*0x5172c9*/
  LocomotionClass::Construct(Block); /*0x5172d0*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5172da*/
    RA2_OPDEL(Block); /*0x5172dd*/
  return (HoverLocomotionClass *)Block; /*0x5172e7*/

}
} // namespace gamemd