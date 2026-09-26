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

// 0x420DA0
namespace gamemd {
int AlphaShapeClass::SD_vt13(int a2)
{
  AbstractClass::ProcessPower(); /*0x420da9*/
  Power::TimerProcess(this->q028); /*0x420db4*/
  Power::TimerProcess(this->q02C); /*0x420dbf*/
  Power::TimerProcess(this->q030); /*0x420dca*/
  return Power::TimerProcess(this->u32_34); /*0x420dda*/
}
} // namespace gamemd
// 0x420E40
namespace gamemd {
int AlphaShapeClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}
} // namespace gamemd
// 0x420E70
namespace gamemd {
int AlphaShapeClass::SD_vt10(int a2, int a3)
{

  a2 = a2; /*0x420e70*/
  if ( a2 == this->q024 ) /*0x420e79*/
    this->q03C = 1; /*0x420e7b*/
}
} // namespace gamemd
// 0x421730
namespace gamemd {
AlphaShapeClass * AlphaShapeClass::SDDTOR(char a2)
{
  int v3; // eax
  int v4; // eax

  v3 = (*(int (__thiscall **)(int *, unsigned int **))(dword_88A0F0 + 16))(&dword_88A0F0, &this); /*0x421763*/
  if ( v3 != -1 && v3 < g_AlphaShapeLimit && v3 < --g_AlphaShapeLimit ) /*0x42177e*/
  {
    do /*0x421796*/
    {
      ++v3; /*0x421786*/
      *((unsigned int *)dword_88A0F4 + v3 - 1) = *((unsigned int *)dword_88A0F4 + v3); /*0x42178a*/
    }
    while ( v3 < g_AlphaShapeLimit ); /*0x421796*/
  }
  v4 = (*(int (__thiscall **)(int *, unsigned int **))(AbstractClass_Array + 16))(&AbstractClass_Array, &this); /*0x4217ac*/
  if ( v4 != -1 && v4 < g_AlphaShapePool && v4 < --g_AlphaShapePool ) /*0x4217c7*/
  {
    do /*0x4217df*/
    {
      ++v4; /*0x4217cf*/
      *((unsigned int *)dword_B0F724 + v4 - 1) = *((unsigned int *)dword_B0F724 + v4); /*0x4217d3*/
    }
    while ( v4 < g_AlphaShapePool ); /*0x4217df*/
  }
  AbstractClass::DTOR(); /*0x4217e3*/
  if ( (a2 & 1) != 0 ) /*0x4217ed*/
    RA2_OPDEL(); /*0x4217f0*/
  return this; /*0x4217fa*/
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
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x420e02*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x420e2b*/
    aP0[14] = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/
}
} // namespace gamemd