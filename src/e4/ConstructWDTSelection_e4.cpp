// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x767FB0
namespace gamemd {
rc_ptr * ConstructWDTSelection_Create_767FB0(rc_ptr_base * a1, int a2, int a3, ReferenceCounted * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr *__fastcall ConstructWDTSelection_Create_767FB0(rc_ptr_base *a1, int a2, int a3, ReferenceCounted *aP3)
{
  void *v6; // eax
  ReferenceCounted *v7; // edi

  v6 = (void *)__2_YAPAXI_Z(0xD4u); /*0x767fbb*/
  if ( v6 ) /*0x767fc5*/
    v7 = (ReferenceCounted *)ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, aP3); /*0x767fd9*/
  else
    v7 = 0; /*0x767fdd*/
  ComPtr::Constructor(a1); /*0x767fe1*/
  a1->vfptr = &vt_rc_ptr_WorldDominationTour_Map; /*0x767fe8*/
  ComPtr::Set(a1, (int)v7); /*0x767fef*/
  return (rc_ptr *)a1; /*0x767ff6*/
}
}
} // namespace gamemd

// 0x76BFB0
namespace gamemd {
int sub_76BFB0()
{
return 1;
}
} // namespace gamemd
