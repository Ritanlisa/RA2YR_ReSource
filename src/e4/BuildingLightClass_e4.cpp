// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"

// 0x436BE0
namespace gamemd {
unsigned int * BuildingLightClass::FindTarget(unsigned int *a2, int aP1, int a1, int aP0, int aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x436BE0)
}
}
// 0x4370C0
namespace gamemd {
BuildingLightClass * BuildingLightClass::SDDTOR(char a2, int a1, int aP0, int aP2)
{

  int v3; // eax
  BuildingLightClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable1 =(void *)(int)&vt_BuildingLightClass; /*0x4370c4*/
  this->vtable1 =(void *)(int)&vt_BuildingLightClass; /*0x4370ca*/
  this->vtable2 =(void *)(int)&vt_BuildingLightClass; /*0x4370d1*/
  this->vtable3 =(void *)(int)&vt_BuildingLightClass; /*0x4370d8*/
  if ( (uint8_t)((ObjectClass *)(this))->Undeploy() ) /*0x4370df*/
    ((VectorClass *)((DynamicVectorClass *)&dword_87F778))->RemoveItem((int)this); /*0x4370ee*/
  v5 = (gamemd::BuildingLightClass *)(this); /*0x437103*/
  v3 = (*(int (**)(int *, BuildingLightClass **))(dword_8B4190 + 16))((int *)&dword_8B4190, &v5); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((unsigned int *)dword_8B4194 + v3 - 1) = *((unsigned int *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
  ((ObjectClass *)(this))->Dtor(); /*0x43713e*/
  if ( (a2 & 1) != 0 ) /*0x437148*/
    __3_YAXPAX_Z(this); /*0x43714b*/
  return this; /*0x437155*/

}
} // namespace gamemd

// 0x513D20
namespace gamemd {
signed int BuildingLightClass::UpdateOscillation()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x513D20)
}
}
// 0x436900
namespace gamemd {
int BuildingLightClass::SD_vt12()
{

  return 232; /*0x436905*/

}
} // namespace gamemd

// 0x436910
namespace gamemd {
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = unk_7E973C; /*0x436940*/
  return 0; /*0x43691d*/

}
} // namespace gamemd

// 0x4369C0
namespace gamemd {
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x4369d4*/

}
} // namespace gamemd

// 0x4369E0
namespace gamemd {
int BuildingLightClass::SD_vt34()
{

  return 0; /*0x4369e2*/

}
} // namespace gamemd

// 0x4369F0
namespace gamemd {
int BuildingLightClass::SD_vt30()
{

  return 3; /*0x4369f5*/

}
} // namespace gamemd

// 0x4370B0
namespace gamemd {
int BuildingLightClass::SD_vt11()
{

  return 19; /*0x4370b5*/

}
} // namespace gamemd
