// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487EE0
namespace gamemd {
unsigned int * Bounds::Subtract(IUnknown * aP1, unsigned int * a2)
{
  void * v3;
  int v4; // eax
  void * v5;
  void * v6;
  void * v7;

  v3 = this->q004; /*0x487ee0*/
  v4 = *this; /*0x487ee3*/
  v5 = this->q008; /*0x487ef1*/
  v6 = this->q00C; /*0x487ef4*/
  v7 = v3 - a2[1]; /*0x487ef7*/
  *(_DWORD *)aP1 = v4 - *a2; /*0x487f01*/
  aP1[1] = v7; /*0x487f06*/
  aP1[2] = v5; /*0x487f09*/
  aP1[3] = v6; /*0x487f0d*/
  return aP1; /*0x487f05*/
}
} // namespace gamemd