// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7ACB90_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x7ACB90
namespace gamemd {
char E4Recv_7ACB90::StartGameWOL_Start_7ACB90(void* aP1, int a3)
{

  if ( a3 < 0 || a3 >= (int)this->AbstractClass ) /*0x7acb9b*/
    return 0; /*0x7acbbc*/
  qmemcpy(aP1, (char *)((unsigned int *)this)[0] + 108 * a3, 0x6Cu); /*0x7acbb3*/
  return 1; /*0x7acbb8*/

}
} // namespace gamemd
