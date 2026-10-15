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
namespace gamemd {  // G42.18 ns repair
unsigned int * E4Recv_44F6E0::sub_44F6E0(unsigned int * a2, int a3)
{

  int v3; // ebx
  v3 = 6; /*0x44f6ed*/
  int v4; // edi
  v4 = 5; /*0x44f6f2*/
  unsigned int *v5; // eax
  unsigned char v9[12]; // [esp+14h] [ebp-Ch] BYREF
  v5 = (unsigned int *)(*((int (**)(ObjectClass *, unsigned char *))this->vfptr + 18))(this, v9); /*0x44f6f7*/
  int v6; // esi
  v6 = *v5 / 256; /*0x44f71b*/
  int v7; // ecx
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
  if ( (int16_t)v6 - *(unsigned int *)&DataGlobal_87F90C > *(unsigned int *)&g_AircraftTrackerPool / 2 ) /*0x44f751*/
    v3 = -v3; /*0x44f753*/
  if ( (int16_t)v7 - *(unsigned int *)&DataGlobal_87F910 > *(unsigned int *)&g_AircraftTrackerState / 2 ) /*0x44f76b*/
    v4 = -v4; /*0x44f76d*/
  int v10; // [esp+28h] [ebp+8h]
  (*((unsigned short *)&(v10))) = v6 + v3; /*0x44f77f*/
  (*(((unsigned short *)&(v10)) + 1)) = v7 + v4; /*0x44f784*/
  *a2 = v10; /*0x44f78f*/
  return a2; /*0x44f78d*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x44FE60
namespace gamemd {
int INIClass::sub_44FE60()
{

  INIClass::ClearSection((int)aStructures, 0); /*0x44fe6c*/
  int result; // eax
  result = dword_A8EB50; /*0x44fe71*/
  int i; // esi
  for ( i = 0; i < dword_A8EB50; ++i ) /*0x44fe7a*/
  {
  int v4; // ecx
    v4 = *((unsigned int *)dword_A8EB44 + i); /*0x44fe82*/
    if ( !*(unsigned char *)(v4 + 129) && !*(unsigned char *)(*(unsigned int *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      (v4)->ReadConstructionData(this); /*0x44fea0*/
    result = dword_A8EB50; /*0x44fea5*/
  }
  return result; /*0x44feaf*/
}
} // namespace gamemd
