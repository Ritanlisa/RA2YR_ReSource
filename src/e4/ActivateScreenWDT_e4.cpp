// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x76F470
namespace gamemd {  // G42.18 ns repair
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
  void * v5;
  int v6; // esi
  unsigned int *v7; // edi
  int v8; // eax
  
  v5 = (void *)((int)(operator new(0x14u)));
  v6 = (int)(v5); /*0x76f47e*/
  if ( v5 ) /*0x76f485*/
  {
    v7 = (unsigned int *)(v5 + 8); /*0x76f488*/
    *(unsigned int *)(v5 + 4) = 0; /*0x76f48d*/
    *(unsigned int *)v5 = (unsigned int)(&vt_ReferenceCounted); /*0x76f494*/
    ComPtr::Constructor((ComPtr *)(v5 + 8)); /*0x76f49a*/
    *v7 = (unsigned int)(&vt_rc_ptr); /*0x76f49f*/
    ComPtr::Set(&v6->u32_8, *(unsigned int *)(a2 + 4)); /*0x76f4ab*/
    v6->u32_10 = 0; /*0x76f4b0*/
    *(unsigned int *)v6 = &vt_WorldDominationTour_State; /*0x76f4b7*/
    v8 = v6->u32_C; /*0x76f4bd*/
    if ( v8 && a3 < *(unsigned int *)(v8 + 36) ) /*0x76f4ce*/
      v6->u32_10 = *(unsigned int *)(*(unsigned int *)(v8 + 68) + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ComPtr::Constructor(a1); /*0x76f4df*/
  /* X11: vtable install elided (implicit via rc_ptr virtuals 0x76f4e6) */
  ComPtr::Set(a1, v6); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}  // G42.18 ns repair
} // namespace gamemd
