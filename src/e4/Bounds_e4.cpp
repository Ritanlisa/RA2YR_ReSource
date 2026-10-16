// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487EE0
namespace gamemd {  // G42.18 ns repair
int Bounds::Subtract(IUnknown * aP1, unsigned int * a2, void *a3, void *a4)
{


  int v3 = aP1->u32_4; // edx /*0x487ee0*/
  int Bounds_field_00; // eax
  Bounds_field_00 = aP1->Bounds_field_00; /*0x487ee3*/
  int v5 = aP1->u32_8; // esi /*0x487ef1*/
  int v6 = aP1->q00C; // ecx /*0x487ef4*/
  int v7; // edx
  v7 = v3 - a3[1]; /*0x487ef7*/
  *a2 = Bounds_field_00 - *a3; /*0x487f01*/
  a2[1] = v7; /*0x487f06*/
  a2[2] = v5; /*0x487f09*/
  a2[3] = v6; /*0x487f0d*/
  return (int)(a2); /*0x487f05*/

}
} // namespace gamemd