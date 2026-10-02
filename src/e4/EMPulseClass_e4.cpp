// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/EMPulseClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Cell_e4.hpp"

// 0x4C5AA0
namespace gamemd {
int EMPulseClass::StubReturn52()
{

  return 52; /*0x4c5aa5*/

}
} // namespace gamemd
// 0x4C5AB0
namespace gamemd {
int EMPulseClass::StubReturn55()
{

  return 55; /*0x4c5ab5*/

}
} // namespace gamemd
// 0x4C5AC0
namespace gamemd {
EMPulseClass * EMPulseClass::CopyTo(void * a2, char a3)
{

  int v3; // eax
  unsigned int v5;

  *(unsigned int *)a3->__pad_0 = &vt_EMPulseClass; /*0x4c5ac4*/
  a3->EMPulseClass_field_0x04 = (int)&vt_EMPulseClass; /*0x4c5aca*/
  a3->EMPulseClass_field_0x08 = (int)&vt_EMPulseClass; /*0x4c5ad1*/
  a3->EMPulseClass_field_0x0C = (int)&vt_EMPulseClass; /*0x4c5ad8*/
  if ( byte_A8E9A0 ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius(a3); /*0x4c5ae8*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)((void **)a3),(int)((gamemd::AbstractClass *)(1))); /*0x4c5af1*/
  v5 = a3; /*0x4c5b06*/
  v3 = (*(int ((int *)(**))(int *, EMPulseClass **))(dword_8A3870 + 16))(&dword_8A3870, &v5); /*0x4c5b0a*/
  if ( v3 != -1 && v3 < dword_8A3880 && v3 < --dword_8A3880 ) /*0x4c5b25*/
  {
    do /*0x4c5b3d*/
    {
      ++v3; /*0x4c5b2d*/
      *((unsigned int *)dword_8A3874 + v3 - 1) = *((unsigned int *)dword_8A3874 + v3); /*0x4c5b31*/
    }
    while ( v3 < dword_8A3880 ); /*0x4c5b3d*/
  }
  AbstractClass::DTOR((AbstractClass *)a3); /*0x4c5b41*/
  if ( (a3 & 1) != 0 ) /*0x4c5b4b*/
    __3_YAXPAX_Z((void *)(a3)); /*0x4c5b4e*/
  return (gamemd::EMPulseClass *)((void **)a3); /*0x4c5b58*/

}
} // namespace gamemd