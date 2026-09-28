// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6260D0
namespace gamemd {
void * Block::Copy(const void * a2)
{
  void *result; // eax

  result = this; /*0x6260d5*/
  if ( this != a2 ) /*0x6260d9*/
    qmemcpy(this, a2, 0x300u); /*0x6260e3*/
  return result; /*0x6260e6*/
}
} // namespace gamemd