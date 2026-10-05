// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x76F470
namespace gamemd {
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
  void * v5;
  void * v6;
  unsigned int *v7; // edi
  int v8; // eax
v5 = (void *)((int)(RA2_OPNEW(0x14u)));
  v6 = (void *)((int)(v5));
  if ( v5 ) /*0x76f485*/
  {
    v7 = (unsigned int *)((unsigned int)(v5)+ 8); /*0x76f488*/
    *(unsigned int *)((unsigned int)(v5)+ 4) = 0; /*0x76f48d*/
    *(unsigned int *)v5 = (unsigned int)((void*)&ReferenceCounted_vftable); /*0x76f494*/
    ((ComPtr *)((ComPtr *)((unsigned int)(v5)+ 8)))->Constructor(); /*0x76f49a*/
    *(void **)v7 = (void*)&rc_ptr_WDTState_vftable; /*0x76f49f*/
    ((ComPtr *)((ComPtr *)((unsigned int)(v6)+ 8)))->Set(*(unsigned int *)(a2 + 4)); /*0x76f4ab*/
    v6->q010 = 0; /*0x76f4b0*/
    *(unsigned int *)v6 = (unsigned int)((void*)&WorldDominationTour_State_vftable); /*0x76f4b7*/
    v8 = v6->q00C; /*0x76f4bd*/
    if ( v8 && a3 < *(unsigned int *)(v8 + 36) ) /*0x76f4ce*/
      v6->q010 = *(unsigned int *)(*(unsigned int *)(v8 + 68) + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ((ComPtr *)(a1))->Constructor(); /*0x76f4df*/
  *(unsigned int *)a1->__pad_0 = (unsigned int)((void*)&rc_ptr_WorldDominationTour_State_vftable); /*0x76f4e6*/
  ((ComPtr *)(a1))->Set((int)(v6)); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}
} // namespace gamemd
