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
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"

// 0x517070
namespace gamemd {
int HoverLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x517076*/
    return -2147467261; /*0x517078*/
  *a2 = 1247291202; /*0x517086*/
  a2[1] = 298948665; /*0x51708e*/
  a2[2] = -1610610249; /*0x517097*/
  a2[3] = unk_7E9A4C; /*0x5170a0*/
  return 0; /*0x51707d*/

}
} // namespace gamemd
// 0x5170B0
namespace gamemd {
int HoverLocomotionClass::BeginMove(int a1, int * a2)
{

  int v2; // edi

  v2 = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2); /*0x5170c1*/
  if ( v2 >= 0 && a1 ) /*0x5170c9*/
  {
    *(unsigned int *)a1->LocomotionClass = (unsigned int)&vt_LocomotionClass;
    *(unsigned int *)&a1->LocomotionClass[4] = (unsigned int)&vt_LocomotionClass;
    ((FrameSnapshot *)(a1->LocomotionFacing))->Init(); /*0x5170db*/
    *(unsigned int *)a1->LocomotionClass = (unsigned int)&vt_HoverLocomotionClass;
    *(unsigned int *)&a1->LocomotionClass[4] = (unsigned int)&vt_HoverLocomotionClass;
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

  *(unsigned int *)this->LocomotionClass = (unsigned int)&vt_HoverLocomotionClass;
  *(unsigned int *)(unsigned int *)&this->LocomotionClass[4] = (unsigned int)&vt_HoverLocomotionClass;
  ((gamemd::LocomotionClass*)(gamemd::LocomotionClass *)this)->Construct(); /*0x5172d0*/
  if ( (a2 & 1) != 0 ) /*0x5172da*/
    __3_YAXPAX_Z(this); /*0x5172dd*/
  return this->LocomotionClass; /*0x5172e7*/

}
} // namespace gamemd