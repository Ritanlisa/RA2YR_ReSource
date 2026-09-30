// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487EE0
namespace gamemd {
int Bounds::Subtract(IUnknown * aP1, unsigned int * a2)
{

  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  v3 = *((char *)this + 1); /*0x487ee0*/
  v4 = *this; /*0x487ee3*/
  v5 = *((char *)this + 2); /*0x487ef1*/
  v6 = *((char *)this + 3); /*0x487ef4*/
  v7 = v3 - a2[1]; /*0x487ef7*/
  aP1->field_0 = v4 - *a2; /*0x487f01*/
  aP1->field_4 = v7; /*0x487f06*/
  aP1->field_8 = v5; /*0x487f09*/
  aP1->field_C = v6; /*0x487f0d*/
  return &aP1->field_0; /*0x487f05*/

}
} // namespace gamemd