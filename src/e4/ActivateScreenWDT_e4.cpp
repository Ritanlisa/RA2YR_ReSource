// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x76F470
namespace gamemd {
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
  unsigned int *v5; // eax
  unsigned int *v6; // esi
  unsigned int *v7; // edi
  int v8; // eax

  v5 = new ComPtr; /*0x76f479*/
  v6 = v5; /*0x76f47e*/
  if ( v5 ) /*0x76f485*/
  {
    v7 = v5 + 2; /*0x76f488*/
    v5[1] = 0; /*0x76f48d*/
    ComPtr::Constructor(v5 + 2); /*0x76f49a*/
    ComPtr::Set(v6 + 2, *(unsigned int *)(a2 + 4)); /*0x76f4ab*/
    v6[4] = 0; /*0x76f4b0*/
    v8 = v6[3]; /*0x76f4bd*/
    if ( v8 && a3 < *(unsigned int *)(v8 + 36) ) /*0x76f4ce*/
      v6[4] = *(unsigned int *)(*(unsigned int *)(v8 + 68) + 4 * a3); /*0x76f4d6*/
  }
  else
  {
    v6 = 0; /*0x76f4db*/
  }
  ComPtr::Constructor(a1); /*0x76f4df*/
  ComPtr::Set(a1, (int)v6); /*0x76f4ee*/
  return a1; /*0x76f4f5*/
}
} // namespace gamemd
