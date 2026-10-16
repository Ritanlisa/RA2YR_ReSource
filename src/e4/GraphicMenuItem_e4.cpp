// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_GraphicMenuItem 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GraphicMenuItem_e4.hpp"
#include "e4/classes/E4Recv_63DB20_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4F3A70
namespace gamemd {  // G42.18 ns repair
void GraphicMenuItem::Dtor(void *a1)
{
  
  ObjectClass *v1; // esi
  v1 = (ObjectClass *)*((unsigned int *)a1 + 3); /*0x4f3a71*/
  *(unsigned int *)a1->__pad_0 = &vt_GraphicMenuItem; /*0x4f3a76*/
  if ( v1 ) /*0x4f3a7c*/
  {
    j_DeleteAndZero(v1); /*0x4f3a80*/
    operator delete((void *)(v1)); /*0x4f3a86*/
  }
}  // G42.18 ns repair
} // namespace gamemd