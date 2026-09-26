// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GraphicMenuItem_e4.hpp"
#include "e4/classes/E4Recv_63DB20_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4F3A70
namespace gamemd {
void GraphicMenuItem::Dtor()
{
  void **v1; // esi

  v1 = this->q00C; /*0x4f3a71*/
  if ( v1 ) /*0x4f3a7c*/
  {
    j_DeleteAndZero(v1); /*0x4f3a80*/
    RA2_OPDEL(v1); /*0x4f3a86*/
  }
}
} // namespace gamemd