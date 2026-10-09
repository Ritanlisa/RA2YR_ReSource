// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487EE0
namespace gamemd {
int Bounds::Subtract(IUnknown * aP1, unsigned int * a2, void *a3, void *a4)
{
  int v3; // edx
  int Bounds_field_00; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  v3 = this->u32_4; /*0x487ee0*/
  Bounds_field_00 = this->Bounds_field_00; /*0x487ee3*/
  v5 = this->u32_8; /*0x487ef1*/
  v6 = this->u32_C; /*0x487ef4*/
  v7 = v3 - a3[1]; /*0x487ef7*/
  *a2 = Bounds_field_00 - *a3; /*0x487f01*/
  a2[1] = v7; /*0x487f06*/
  a2[2] = v5; /*0x487f09*/
  a2[3] = v6; /*0x487f0d*/
  return a2; /*0x487f05*/
}
} // namespace gamemd