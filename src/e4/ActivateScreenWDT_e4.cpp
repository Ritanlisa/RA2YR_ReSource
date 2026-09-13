// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x76F470
namespace gamemd {
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
{
    rc_ptr_base *v5;
    rc_ptr_base *v6;
    rc_ptr_base *v7;
    int *vfptr;
    v5 = (rc_ptr_base *)__2_YAPAXI_Z(0x14u);
    v6 = v5;
    if ( v5 )
  {
    v7 = v5 + 2;
    v5[1].vfptr = 0;
    v5->vfptr = &vt_ReferenceCounted;
    ComPtr::Constructor(v5 + 2);
    v7->vfptr = &vt_rc_ptr_WDTState;
    ComPtr::Set(v6 + 2, *(int *)(a2 + 4));
    v6[4].vfptr = 0;
    v6->vfptr = &vt_WorldDominationTour_State;
    vfptr = v6[3].vfptr;
    if ( vfptr && a3 < vfptr[9] )
    v6[4].vfptr = *(void **)(vfptr[17] + 4 * a3);
  }
    else
  {
    v6 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_State;
    ComPtr::Set(a1, (int)v6);
    return a1;
}
}
} // namespace gamemd
