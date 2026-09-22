// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x487EE0
unsigned int * Bounds::Subtract(IUnknown * aP1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Bounds::Subtract(int *this, IUnknown *aP1, _DWORD *a2)
{

  int v3 = this->q004; /*0x487ee0*/
  int v4 = *this; /*0x487ee3*/
  int v5 = this->q008; /*0x487ef1*/
  int v6 = this->q00C; /*0x487ef4*/
  int v7 = v3 - a2[1]; /*0x487ef7*/
  aP1->field_0 = v4 - *a2; /*0x487f01*/
  aP1->field_4 = v7; /*0x487f06*/
  aP1->field_8 = v5; /*0x487f09*/
  aP1->field_C = v6; /*0x487f0d*/
  return &aP1->field_0; /*0x487f05*/
}
}
