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

// 0x420DA0
namespace gamemd {
int AlphaShapeClass::SD_vt13(int a2)
{

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x420da9*/
  Power::TimerProcess(*((unsigned int *)this + 10)); /*0x420db4*/
  Power::TimerProcess(*((unsigned int *)this + 11)); /*0x420dbf*/
  Power::TimerProcess(*((unsigned int *)this + 12)); /*0x420dca*/
  return Power::TimerProcess(*((unsigned int *)this + 13)); /*0x420dda*/

}
} // namespace gamemd
// 0x420E40
namespace gamemd {
int AlphaShapeClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((int *)aP0->__pad_0, a1, aP2); /*0x420e4f*/
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
AlphaShapeClass * AlphaShapeClass::SDDTOR(unsigned int * Block, char a2)
{

  int v3; // eax
  int v4; // eax
  AlphaShapeClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)Block->__pad_0 = &AlphaShapeClass::`vftable'; /*0x42173d*/
  Block->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x421743*/
  Block->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x42174a*/
  Block->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x421751*/
  v6 = Block; /*0x42175f*/
  v3 = (*(int (**)(int *, AlphaShapeClass **))(dword_88A0F0 + 16))(&dword_88A0F0, &v6); /*0x421763*/
  if ( v3 != -1 && v3 < g_AlphaShapeLimit && v3 < --g_AlphaShapeLimit ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((unsigned int *)dword_88A0F4 + v3 - 1) = *((unsigned int *)dword_88A0F4 + v3); /*0x42178a*/
    }
    while ( v3 < g_AlphaShapeLimit ); /*0x421796*/
  }
  v6 = (gamemd::AlphaShapeClass *)(Block);
  v4 = (*(int (**)(int *, AlphaShapeClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4217ac*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4217bc*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4217c1*/
    for ( ; /*0x4217c7*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4217cf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)Block); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    __3_YAXPAX_Z(Block); /*0x4217f0*/
  return Block->__pad_0; /*0x4217fa*/

}
} // namespace gamemd
// 0x420DE0
namespace gamemd {
int AlphaShapeClass::SD_vt05(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x420df1*/
  if ( Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( aP0 ) /*0x420df9*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x420e02*/
      *(unsigned int *)aP0->__pad_0 = &AlphaShapeClass::`vftable'; /*0x420e07*/
      aP0->AlphaShapeClass_field_0x04 = (int)&AlphaShapeClass::`vftable'; /*0x420e0d*/
      aP0->AlphaShapeClass_field_0x08 = (int)&AlphaShapeClass::`vftable'; /*0x420e14*/
      aP0->AlphaShapeClass_field_0x0C = (int)&AlphaShapeClass::`vftable'; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->AlphaShapeClass_field_0x24); /*0x420e2b*/
    *((unsigned int *)aP0 + 14) = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/

}
} // namespace gamemd