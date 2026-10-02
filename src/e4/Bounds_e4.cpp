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

  v3 = (int)(*((unsigned int *)this + 1));
  Bounds_field_00 = (int)(this->Bounds_field_00);
  v5 = (int)(*((unsigned int *)this + 2));
  v6 = (int)(*((unsigned int *)this + 3));
  v7 = (int)(v3 - a2[1]);
  *(unsigned int *)aP1 = Bounds_field_00 - *a2; /*0x487f01*/
  aP1[1] = v7; /*0x487f06*/
  aP1[2] = v5; /*0x487f09*/
  aP1[3] = v6; /*0x487f0d*/
  return (int)(aP1); /*0x487f05*/

}
} // namespace gamemd