// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6B8AF0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6B8AF0
namespace gamemd {
bool E4Recv_6B8AF0::sub_6B8AF0(unsigned int * a2)
{
  int v2; // eax

  v2 = (int)this->AbstractClass ^ *a2; /*0x6b8af8*/
  return !(_BYTE)v2 && (v2 & 0x7FF00) == 0; /*0x6b8b07*/
}
} // namespace gamemd
