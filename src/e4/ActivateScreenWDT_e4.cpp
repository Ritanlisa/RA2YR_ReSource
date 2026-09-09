// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x76F470
namespace gamemd {
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr_base *__fastcall ActivateScreenWDT_Create(rc_ptr_base *a1, int a2, unsigned int a3)
{
  rc_ptr_base *v5; // eax
  rc_ptr_base *v6; // esi
  rc_ptr_base *v7; // edi
  _DWORD *vfptr; // eax

  v5 = (rc_ptr_base *)__2_YAPAXI_Z(0x14u); /*0x76f479*/
  v6 = v5; /*0x76f47e*/
  if ( v5 ) /*0x76f485*/
  {
    v7 = v5 + 2; /*0x76f488*/
    v5[1].vfptr = 0; /*0x76f48d*/
    v5->vfptr = &ReferenceCounted::`vftable'; /*0x76f494*/
    ComPtr::Constructor(v5 + 2); /*0x76f49a*/
    v7->vfptr = &rc_ptr<WDTState>::`vftable'; /*0x76f49f*/
    ComPtr::Set(v6 + 2, *(_DWORD *)(a2 + 4)); /*0x76f4ab*/
    v6[4].vfptr = 0; /*0x76f4b0*/
    v6->vfptr = &WorldDominationTour::State::`vftable'; /*0x76f4b7*/
    vfptr = v6[3].vfptr; /*0x76f4bd*/
    if ( vfptr && a3 < vfptr[9] ) /*0x76f4ce*/
      v6[4].vfptr = *(void **)(vfptr[17] + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ComPtr::Constructor(a1); /*0x76f4df*/
  a1->vfptr = &rc_ptr<WorldDominationTour::State>::`vftable'; /*0x76f4e6*/
  ComPtr::Set(a1, (int)v6); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}
}
} // namespace gamemd
