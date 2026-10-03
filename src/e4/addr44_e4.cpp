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
unsigned int * sub_44F6E0(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0044F6E0.json)
}
} // namespace gamemd

// 0x44FE60
namespace gamemd {
int INIClass::sub_44FE60()
{

  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)this, (int)aStructures, 0); /*0x44fe6c*/
  result = dword_A8EB50; /*0x44fe71*/
  for ( i = 0; i < dword_A8EB50; ++i ) /*0x44fe7a*/
  {
    v4 = *((unsigned int *)dword_A8EB44 + i); /*0x44fe82*/
    if ( !*(unsigned char *)(v4 + 129) && !*(unsigned char *)(*(unsigned int *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = dword_A8EB50; /*0x44fea5*/
  }
  return result; /*0x44feaf*/

}
} // namespace gamemd
