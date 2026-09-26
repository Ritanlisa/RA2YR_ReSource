// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_44F6E0_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x44F6E0
namespace gamemd {
unsigned int * E4Recv_44F6E0::sub_44F6E0(unsigned int * v10, int a3)
{
  int v3; // ebx
  int v4; // edi
  unsigned int *v5; // eax
  int v6; // esi
  int v7; // ecx
  unsigned char v9[12]; // [esp+14h] [ebp-Ch] BYREF

  v3 = 6; /*0x44f6ed*/
  v4 = 5; /*0x44f6f2*/
  v5 = (unsigned int *)(*(int (__thiscall **)(void *, unsigned char *))(this->u32_48)(this, v9); /*0x44f6f7*/
  v6 = *v5 / 256; /*0x44f71b*/
  v7 = v5[1] / 256; /*0x44f71e*/
  if ( a3 ) /*0x44f72e*/
  {
    if ( a3 == 2 ) /*0x44f733*/
      v4 = 0; /*0x44f735*/
  }
  else
  {
    v3 = 0; /*0x44f739*/
  }
  if ( (int16_t)v6 - dword_87F90C > g_AircraftTrackerPool / 2 ) /*0x44f751*/
    v3 = -v3; /*0x44f753*/
  if ( (int16_t)v7 - dword_87F910 > g_AircraftTrackerState / 2 ) /*0x44f76b*/
    v4 = -v4; /*0x44f76d*/
  IDA_LOWORD(v10) = v6 + v3; /*0x44f77f*/
  IDA_HIWORD(v10) = v7 + v4; /*0x44f784*/
  *v10 = v10; /*0x44f78f*/
}
} // namespace gamemd

// 0x44FE60
namespace gamemd {
int INIClass::sub_44FE60()
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)aStructures, 0); /*0x44fe6c*/
  result = g_BuildingProductionState; /*0x44fe71*/
  for ( i = 0; i < g_BuildingProductionState; ++i ) /*0x44fe7a*/
  {
    v4 = *((unsigned int *)g_BuildingClass_InstanceCount + i); /*0x44fe82*/
    if ( !*(unsigned char *)(v4 + 129) && !*(unsigned char *)(*(unsigned int *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = g_BuildingProductionState; /*0x44fea5*/
  }
  return result; /*0x44feaf*/
}
} // namespace gamemd
